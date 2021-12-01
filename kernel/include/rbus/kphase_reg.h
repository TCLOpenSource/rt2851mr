/**
* @file Merlin5_MEMC_KPHASE
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KPHASE_REG_H_
#define _RBUS_KPHASE_REG_H_

#include "rbus_types.h"



//  KPHASE Register Address
#define  KPHASE_kphase_00                                                       0x1809D400
#define  KPHASE_kphase_00_reg_addr                                               "0xB809D400"
#define  KPHASE_kphase_00_reg                                                    0xB809D400
#define  KPHASE_kphase_00_inst_addr                                              "0x0000"
#define  set_KPHASE_kphase_00_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_00_reg)=data)
#define  get_KPHASE_kphase_00_reg                                                (*((volatile unsigned int*)KPHASE_kphase_00_reg))
#define  KPHASE_kphase_00_kphase_force_crtc_mc_lf_index_shift                    (28)
#define  KPHASE_kphase_00_kphase_force_mc_hf_index_en_shift                      (27)
#define  KPHASE_kphase_00_kphase_force_mc_hf_index_shift                         (25)
#define  KPHASE_kphase_00_kphase_force_mc_lf_index_en_shift                      (24)
#define  KPHASE_kphase_00_kphase_force_mc_lf_index_shift                         (20)
#define  KPHASE_kphase_00_kphase_force_mc_mode_en_shift                          (19)
#define  KPHASE_kphase_00_kphase_force_mc_mode_shift                             (16)
#define  KPHASE_kphase_00_kphase_force_mc_phase_en_shift                         (15)
#define  KPHASE_kphase_00_kphase_force_mc_phase_shift                            (8)
#define  KPHASE_kphase_00_kphase_in_3d_fs_enable_shift                           (7)
#define  KPHASE_kphase_00_kphase_force_mc_cts_p_index_shift                      (4)
#define  KPHASE_kphase_00_kphase_force_mc_cts_index_en_shift                     (3)
#define  KPHASE_kphase_00_kphase_force_mc_cts_i_index_shift                      (0)
#define  KPHASE_kphase_00_kphase_force_crtc_mc_lf_index_mask                     (0xF0000000)
#define  KPHASE_kphase_00_kphase_force_mc_hf_index_en_mask                       (0x08000000)
#define  KPHASE_kphase_00_kphase_force_mc_hf_index_mask                          (0x06000000)
#define  KPHASE_kphase_00_kphase_force_mc_lf_index_en_mask                       (0x01000000)
#define  KPHASE_kphase_00_kphase_force_mc_lf_index_mask                          (0x00F00000)
#define  KPHASE_kphase_00_kphase_force_mc_mode_en_mask                           (0x00080000)
#define  KPHASE_kphase_00_kphase_force_mc_mode_mask                              (0x00070000)
#define  KPHASE_kphase_00_kphase_force_mc_phase_en_mask                          (0x00008000)
#define  KPHASE_kphase_00_kphase_force_mc_phase_mask                             (0x00007F00)
#define  KPHASE_kphase_00_kphase_in_3d_fs_enable_mask                            (0x00000080)
#define  KPHASE_kphase_00_kphase_force_mc_cts_p_index_mask                       (0x00000070)
#define  KPHASE_kphase_00_kphase_force_mc_cts_index_en_mask                      (0x00000008)
#define  KPHASE_kphase_00_kphase_force_mc_cts_i_index_mask                       (0x00000007)
#define  KPHASE_kphase_00_kphase_force_crtc_mc_lf_index(data)                    (0xF0000000&((data)<<28))
#define  KPHASE_kphase_00_kphase_force_mc_hf_index_en(data)                      (0x08000000&((data)<<27))
#define  KPHASE_kphase_00_kphase_force_mc_hf_index(data)                         (0x06000000&((data)<<25))
#define  KPHASE_kphase_00_kphase_force_mc_lf_index_en(data)                      (0x01000000&((data)<<24))
#define  KPHASE_kphase_00_kphase_force_mc_lf_index(data)                         (0x00F00000&((data)<<20))
#define  KPHASE_kphase_00_kphase_force_mc_mode_en(data)                          (0x00080000&((data)<<19))
#define  KPHASE_kphase_00_kphase_force_mc_mode(data)                             (0x00070000&((data)<<16))
#define  KPHASE_kphase_00_kphase_force_mc_phase_en(data)                         (0x00008000&((data)<<15))
#define  KPHASE_kphase_00_kphase_force_mc_phase(data)                            (0x00007F00&((data)<<8))
#define  KPHASE_kphase_00_kphase_in_3d_fs_enable(data)                           (0x00000080&((data)<<7))
#define  KPHASE_kphase_00_kphase_force_mc_cts_p_index(data)                      (0x00000070&((data)<<4))
#define  KPHASE_kphase_00_kphase_force_mc_cts_index_en(data)                     (0x00000008&((data)<<3))
#define  KPHASE_kphase_00_kphase_force_mc_cts_i_index(data)                      (0x00000007&(data))
#define  KPHASE_kphase_00_get_kphase_force_crtc_mc_lf_index(data)                ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_00_get_kphase_force_mc_hf_index_en(data)                  ((0x08000000&(data))>>27)
#define  KPHASE_kphase_00_get_kphase_force_mc_hf_index(data)                     ((0x06000000&(data))>>25)
#define  KPHASE_kphase_00_get_kphase_force_mc_lf_index_en(data)                  ((0x01000000&(data))>>24)
#define  KPHASE_kphase_00_get_kphase_force_mc_lf_index(data)                     ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_00_get_kphase_force_mc_mode_en(data)                      ((0x00080000&(data))>>19)
#define  KPHASE_kphase_00_get_kphase_force_mc_mode(data)                         ((0x00070000&(data))>>16)
#define  KPHASE_kphase_00_get_kphase_force_mc_phase_en(data)                     ((0x00008000&(data))>>15)
#define  KPHASE_kphase_00_get_kphase_force_mc_phase(data)                        ((0x00007F00&(data))>>8)
#define  KPHASE_kphase_00_get_kphase_in_3d_fs_enable(data)                       ((0x00000080&(data))>>7)
#define  KPHASE_kphase_00_get_kphase_force_mc_cts_p_index(data)                  ((0x00000070&(data))>>4)
#define  KPHASE_kphase_00_get_kphase_force_mc_cts_index_en(data)                 ((0x00000008&(data))>>3)
#define  KPHASE_kphase_00_get_kphase_force_mc_cts_i_index(data)                  (0x00000007&(data))

#define  KPHASE_kphase_04                                                       0x1809D404
#define  KPHASE_kphase_04_reg_addr                                               "0xB809D404"
#define  KPHASE_kphase_04_reg                                                    0xB809D404
#define  KPHASE_kphase_04_inst_addr                                              "0x0001"
#define  set_KPHASE_kphase_04_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_04_reg)=data)
#define  get_KPHASE_kphase_04_reg                                                (*((volatile unsigned int*)KPHASE_kphase_04_reg))
#define  KPHASE_kphase_04_kphase_force_in_final_phase_en_shift                   (31)
#define  KPHASE_kphase_04_kphase_force_in_final_phase_shift                      (30)
#define  KPHASE_kphase_04_kphase_force_me_last_phase_en_shift                    (29)
#define  KPHASE_kphase_04_kphase_force_me_last_phase_shift                       (28)
#define  KPHASE_kphase_04_kphase_force_me2_first_phase_shift                     (27)
#define  KPHASE_kphase_04_kphase_force_me2_phase_en_shift                        (26)
#define  KPHASE_kphase_04_kphase_force_me2_phase_shift                           (20)
#define  KPHASE_kphase_04_kphase_in_lr_inv_shift                                 (19)
#define  KPHASE_kphase_04_kphase_force_me_dts_p_index_shift                      (16)
#define  KPHASE_kphase_04_kphase_force_me_dts_index_en_shift                     (15)
#define  KPHASE_kphase_04_kphase_force_me_dts_i_index_shift                      (12)
#define  KPHASE_kphase_04_kphase_force_in_mc_index_en_shift                      (11)
#define  KPHASE_kphase_04_kphase_force_in_mc_index_shift                         (8)
#define  KPHASE_kphase_04_kphase_force_in_me_index_en_shift                      (7)
#define  KPHASE_kphase_04_kphase_force_in_me_index_shift                         (4)
#define  KPHASE_kphase_04_kphase_force_crtc_mc_hf_index_en_shift                 (3)
#define  KPHASE_kphase_04_kphase_force_crtc_mc_hf_index_shift                    (1)
#define  KPHASE_kphase_04_kphase_force_crtc_mc_lf_index_en_shift                 (0)
#define  KPHASE_kphase_04_kphase_force_in_final_phase_en_mask                    (0x80000000)
#define  KPHASE_kphase_04_kphase_force_in_final_phase_mask                       (0x40000000)
#define  KPHASE_kphase_04_kphase_force_me_last_phase_en_mask                     (0x20000000)
#define  KPHASE_kphase_04_kphase_force_me_last_phase_mask                        (0x10000000)
#define  KPHASE_kphase_04_kphase_force_me2_first_phase_mask                      (0x08000000)
#define  KPHASE_kphase_04_kphase_force_me2_phase_en_mask                         (0x04000000)
#define  KPHASE_kphase_04_kphase_force_me2_phase_mask                            (0x03F00000)
#define  KPHASE_kphase_04_kphase_in_lr_inv_mask                                  (0x00080000)
#define  KPHASE_kphase_04_kphase_force_me_dts_p_index_mask                       (0x00070000)
#define  KPHASE_kphase_04_kphase_force_me_dts_index_en_mask                      (0x00008000)
#define  KPHASE_kphase_04_kphase_force_me_dts_i_index_mask                       (0x00007000)
#define  KPHASE_kphase_04_kphase_force_in_mc_index_en_mask                       (0x00000800)
#define  KPHASE_kphase_04_kphase_force_in_mc_index_mask                          (0x00000700)
#define  KPHASE_kphase_04_kphase_force_in_me_index_en_mask                       (0x00000080)
#define  KPHASE_kphase_04_kphase_force_in_me_index_mask                          (0x00000070)
#define  KPHASE_kphase_04_kphase_force_crtc_mc_hf_index_en_mask                  (0x00000008)
#define  KPHASE_kphase_04_kphase_force_crtc_mc_hf_index_mask                     (0x00000006)
#define  KPHASE_kphase_04_kphase_force_crtc_mc_lf_index_en_mask                  (0x00000001)
#define  KPHASE_kphase_04_kphase_force_in_final_phase_en(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_04_kphase_force_in_final_phase(data)                      (0x40000000&((data)<<30))
#define  KPHASE_kphase_04_kphase_force_me_last_phase_en(data)                    (0x20000000&((data)<<29))
#define  KPHASE_kphase_04_kphase_force_me_last_phase(data)                       (0x10000000&((data)<<28))
#define  KPHASE_kphase_04_kphase_force_me2_first_phase(data)                     (0x08000000&((data)<<27))
#define  KPHASE_kphase_04_kphase_force_me2_phase_en(data)                        (0x04000000&((data)<<26))
#define  KPHASE_kphase_04_kphase_force_me2_phase(data)                           (0x03F00000&((data)<<20))
#define  KPHASE_kphase_04_kphase_in_lr_inv(data)                                 (0x00080000&((data)<<19))
#define  KPHASE_kphase_04_kphase_force_me_dts_p_index(data)                      (0x00070000&((data)<<16))
#define  KPHASE_kphase_04_kphase_force_me_dts_index_en(data)                     (0x00008000&((data)<<15))
#define  KPHASE_kphase_04_kphase_force_me_dts_i_index(data)                      (0x00007000&((data)<<12))
#define  KPHASE_kphase_04_kphase_force_in_mc_index_en(data)                      (0x00000800&((data)<<11))
#define  KPHASE_kphase_04_kphase_force_in_mc_index(data)                         (0x00000700&((data)<<8))
#define  KPHASE_kphase_04_kphase_force_in_me_index_en(data)                      (0x00000080&((data)<<7))
#define  KPHASE_kphase_04_kphase_force_in_me_index(data)                         (0x00000070&((data)<<4))
#define  KPHASE_kphase_04_kphase_force_crtc_mc_hf_index_en(data)                 (0x00000008&((data)<<3))
#define  KPHASE_kphase_04_kphase_force_crtc_mc_hf_index(data)                    (0x00000006&((data)<<1))
#define  KPHASE_kphase_04_kphase_force_crtc_mc_lf_index_en(data)                 (0x00000001&(data))
#define  KPHASE_kphase_04_get_kphase_force_in_final_phase_en(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_04_get_kphase_force_in_final_phase(data)                  ((0x40000000&(data))>>30)
#define  KPHASE_kphase_04_get_kphase_force_me_last_phase_en(data)                ((0x20000000&(data))>>29)
#define  KPHASE_kphase_04_get_kphase_force_me_last_phase(data)                   ((0x10000000&(data))>>28)
#define  KPHASE_kphase_04_get_kphase_force_me2_first_phase(data)                 ((0x08000000&(data))>>27)
#define  KPHASE_kphase_04_get_kphase_force_me2_phase_en(data)                    ((0x04000000&(data))>>26)
#define  KPHASE_kphase_04_get_kphase_force_me2_phase(data)                       ((0x03F00000&(data))>>20)
#define  KPHASE_kphase_04_get_kphase_in_lr_inv(data)                             ((0x00080000&(data))>>19)
#define  KPHASE_kphase_04_get_kphase_force_me_dts_p_index(data)                  ((0x00070000&(data))>>16)
#define  KPHASE_kphase_04_get_kphase_force_me_dts_index_en(data)                 ((0x00008000&(data))>>15)
#define  KPHASE_kphase_04_get_kphase_force_me_dts_i_index(data)                  ((0x00007000&(data))>>12)
#define  KPHASE_kphase_04_get_kphase_force_in_mc_index_en(data)                  ((0x00000800&(data))>>11)
#define  KPHASE_kphase_04_get_kphase_force_in_mc_index(data)                     ((0x00000700&(data))>>8)
#define  KPHASE_kphase_04_get_kphase_force_in_me_index_en(data)                  ((0x00000080&(data))>>7)
#define  KPHASE_kphase_04_get_kphase_force_in_me_index(data)                     ((0x00000070&(data))>>4)
#define  KPHASE_kphase_04_get_kphase_force_crtc_mc_hf_index_en(data)             ((0x00000008&(data))>>3)
#define  KPHASE_kphase_04_get_kphase_force_crtc_mc_hf_index(data)                ((0x00000006&(data))>>1)
#define  KPHASE_kphase_04_get_kphase_force_crtc_mc_lf_index_en(data)             (0x00000001&(data))

#define  KPHASE_kphase_08                                                       0x1809D408
#define  KPHASE_kphase_08_reg_addr                                               "0xB809D408"
#define  KPHASE_kphase_08_reg                                                    0xB809D408
#define  KPHASE_kphase_08_inst_addr                                              "0x0002"
#define  set_KPHASE_kphase_08_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_08_reg)=data)
#define  get_KPHASE_kphase_08_reg                                                (*((volatile unsigned int*)KPHASE_kphase_08_reg))
#define  KPHASE_kphase_08_kphase_force_me2_first_phase_en_shift                  (31)
#define  KPHASE_kphase_08_kphase_out_phase_type_shift                            (25)
#define  KPHASE_kphase_08_kphase_me_frame_hold_shift                             (24)
#define  KPHASE_kphase_08_kphase_mc_frame_hold_shift                             (23)
#define  KPHASE_kphase_08_kphase_frame_hold_enable_shift                         (22)
#define  KPHASE_kphase_08_kphase_out_phase_slf_gen_shift                         (20)
#define  KPHASE_kphase_08_kphase_out_phase_ini_shift                             (16)
#define  KPHASE_kphase_08_kphase_force_in_mc_offset_shift                        (13)
#define  KPHASE_kphase_08_kphase_force_in_mc_offset_en_shift                     (12)
#define  KPHASE_kphase_08_kphase_force_in_me_offset_shift                        (9)
#define  KPHASE_kphase_08_kphase_force_in_me_offset_en_shift                     (8)
#define  KPHASE_kphase_08_kphase_force_me_lr_shift                               (7)
#define  KPHASE_kphase_08_kphase_force_me_lr_en_shift                            (6)
#define  KPHASE_kphase_08_kphase_force_osd_lr_shift                              (5)
#define  KPHASE_kphase_08_kphase_force_osd_lr_en_shift                           (4)
#define  KPHASE_kphase_08_kphase_force_out_lr_shift                              (3)
#define  KPHASE_kphase_08_kphase_force_out_lr_en_shift                           (2)
#define  KPHASE_kphase_08_kphase_force_mc_lr_shift                               (1)
#define  KPHASE_kphase_08_kphase_force_mc_lr_en_shift                            (0)
#define  KPHASE_kphase_08_kphase_force_me2_first_phase_en_mask                   (0x80000000)
#define  KPHASE_kphase_08_kphase_out_phase_type_mask                             (0x7E000000)
#define  KPHASE_kphase_08_kphase_me_frame_hold_mask                              (0x01000000)
#define  KPHASE_kphase_08_kphase_mc_frame_hold_mask                              (0x00800000)
#define  KPHASE_kphase_08_kphase_frame_hold_enable_mask                          (0x00400000)
#define  KPHASE_kphase_08_kphase_out_phase_slf_gen_mask                          (0x00300000)
#define  KPHASE_kphase_08_kphase_out_phase_ini_mask                              (0x000F0000)
#define  KPHASE_kphase_08_kphase_force_in_mc_offset_mask                         (0x0000E000)
#define  KPHASE_kphase_08_kphase_force_in_mc_offset_en_mask                      (0x00001000)
#define  KPHASE_kphase_08_kphase_force_in_me_offset_mask                         (0x00000E00)
#define  KPHASE_kphase_08_kphase_force_in_me_offset_en_mask                      (0x00000100)
#define  KPHASE_kphase_08_kphase_force_me_lr_mask                                (0x00000080)
#define  KPHASE_kphase_08_kphase_force_me_lr_en_mask                             (0x00000040)
#define  KPHASE_kphase_08_kphase_force_osd_lr_mask                               (0x00000020)
#define  KPHASE_kphase_08_kphase_force_osd_lr_en_mask                            (0x00000010)
#define  KPHASE_kphase_08_kphase_force_out_lr_mask                               (0x00000008)
#define  KPHASE_kphase_08_kphase_force_out_lr_en_mask                            (0x00000004)
#define  KPHASE_kphase_08_kphase_force_mc_lr_mask                                (0x00000002)
#define  KPHASE_kphase_08_kphase_force_mc_lr_en_mask                             (0x00000001)
#define  KPHASE_kphase_08_kphase_force_me2_first_phase_en(data)                  (0x80000000&((data)<<31))
#define  KPHASE_kphase_08_kphase_out_phase_type(data)                            (0x7E000000&((data)<<25))
#define  KPHASE_kphase_08_kphase_me_frame_hold(data)                             (0x01000000&((data)<<24))
#define  KPHASE_kphase_08_kphase_mc_frame_hold(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_08_kphase_frame_hold_enable(data)                         (0x00400000&((data)<<22))
#define  KPHASE_kphase_08_kphase_out_phase_slf_gen(data)                         (0x00300000&((data)<<20))
#define  KPHASE_kphase_08_kphase_out_phase_ini(data)                             (0x000F0000&((data)<<16))
#define  KPHASE_kphase_08_kphase_force_in_mc_offset(data)                        (0x0000E000&((data)<<13))
#define  KPHASE_kphase_08_kphase_force_in_mc_offset_en(data)                     (0x00001000&((data)<<12))
#define  KPHASE_kphase_08_kphase_force_in_me_offset(data)                        (0x00000E00&((data)<<9))
#define  KPHASE_kphase_08_kphase_force_in_me_offset_en(data)                     (0x00000100&((data)<<8))
#define  KPHASE_kphase_08_kphase_force_me_lr(data)                               (0x00000080&((data)<<7))
#define  KPHASE_kphase_08_kphase_force_me_lr_en(data)                            (0x00000040&((data)<<6))
#define  KPHASE_kphase_08_kphase_force_osd_lr(data)                              (0x00000020&((data)<<5))
#define  KPHASE_kphase_08_kphase_force_osd_lr_en(data)                           (0x00000010&((data)<<4))
#define  KPHASE_kphase_08_kphase_force_out_lr(data)                              (0x00000008&((data)<<3))
#define  KPHASE_kphase_08_kphase_force_out_lr_en(data)                           (0x00000004&((data)<<2))
#define  KPHASE_kphase_08_kphase_force_mc_lr(data)                               (0x00000002&((data)<<1))
#define  KPHASE_kphase_08_kphase_force_mc_lr_en(data)                            (0x00000001&(data))
#define  KPHASE_kphase_08_get_kphase_force_me2_first_phase_en(data)              ((0x80000000&(data))>>31)
#define  KPHASE_kphase_08_get_kphase_out_phase_type(data)                        ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_08_get_kphase_me_frame_hold(data)                         ((0x01000000&(data))>>24)
#define  KPHASE_kphase_08_get_kphase_mc_frame_hold(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_08_get_kphase_frame_hold_enable(data)                     ((0x00400000&(data))>>22)
#define  KPHASE_kphase_08_get_kphase_out_phase_slf_gen(data)                     ((0x00300000&(data))>>20)
#define  KPHASE_kphase_08_get_kphase_out_phase_ini(data)                         ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_08_get_kphase_force_in_mc_offset(data)                    ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_08_get_kphase_force_in_mc_offset_en(data)                 ((0x00001000&(data))>>12)
#define  KPHASE_kphase_08_get_kphase_force_in_me_offset(data)                    ((0x00000E00&(data))>>9)
#define  KPHASE_kphase_08_get_kphase_force_in_me_offset_en(data)                 ((0x00000100&(data))>>8)
#define  KPHASE_kphase_08_get_kphase_force_me_lr(data)                           ((0x00000080&(data))>>7)
#define  KPHASE_kphase_08_get_kphase_force_me_lr_en(data)                        ((0x00000040&(data))>>6)
#define  KPHASE_kphase_08_get_kphase_force_osd_lr(data)                          ((0x00000020&(data))>>5)
#define  KPHASE_kphase_08_get_kphase_force_osd_lr_en(data)                       ((0x00000010&(data))>>4)
#define  KPHASE_kphase_08_get_kphase_force_out_lr(data)                          ((0x00000008&(data))>>3)
#define  KPHASE_kphase_08_get_kphase_force_out_lr_en(data)                       ((0x00000004&(data))>>2)
#define  KPHASE_kphase_08_get_kphase_force_mc_lr(data)                           ((0x00000002&(data))>>1)
#define  KPHASE_kphase_08_get_kphase_force_mc_lr_en(data)                        (0x00000001&(data))

#define  KPHASE_kphase_0C                                                       0x1809D40C
#define  KPHASE_kphase_0C_reg_addr                                               "0xB809D40C"
#define  KPHASE_kphase_0C_reg                                                    0xB809D40C
#define  KPHASE_kphase_0C_inst_addr                                              "0x0003"
#define  set_KPHASE_kphase_0C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_0C_reg)=data)
#define  get_KPHASE_kphase_0C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_0C_reg))
#define  KPHASE_kphase_0C_kphase_out_3d_enable_shift                             (31)
#define  KPHASE_kphase_0C_kphase_film_mode_shift                                 (28)
#define  KPHASE_kphase_0C_kphase_in_reset_source_sel_shift                       (27)
#define  KPHASE_kphase_0C_kphase_auto_film_phase_reset_shift                     (26)
#define  KPHASE_kphase_0C_kphase_auto_film_phase_en_shift                        (25)
#define  KPHASE_kphase_0C_kphase_sw_film_en_shift                                (24)
#define  KPHASE_kphase_0C_kphase_film_phase_type_shift                           (18)
#define  KPHASE_kphase_0C_kphase_out_film_phase_offset_shift                     (12)
#define  KPHASE_kphase_0C_kphase_in_film_phase_offset_shift                      (6)
#define  KPHASE_kphase_0C_kphase_sw_film_phase_shift                             (0)
#define  KPHASE_kphase_0C_kphase_out_3d_enable_mask                              (0x80000000)
#define  KPHASE_kphase_0C_kphase_film_mode_mask                                  (0x70000000)
#define  KPHASE_kphase_0C_kphase_in_reset_source_sel_mask                        (0x08000000)
#define  KPHASE_kphase_0C_kphase_auto_film_phase_reset_mask                      (0x04000000)
#define  KPHASE_kphase_0C_kphase_auto_film_phase_en_mask                         (0x02000000)
#define  KPHASE_kphase_0C_kphase_sw_film_en_mask                                 (0x01000000)
#define  KPHASE_kphase_0C_kphase_film_phase_type_mask                            (0x00FC0000)
#define  KPHASE_kphase_0C_kphase_out_film_phase_offset_mask                      (0x0003F000)
#define  KPHASE_kphase_0C_kphase_in_film_phase_offset_mask                       (0x00000FC0)
#define  KPHASE_kphase_0C_kphase_sw_film_phase_mask                              (0x0000003F)
#define  KPHASE_kphase_0C_kphase_out_3d_enable(data)                             (0x80000000&((data)<<31))
#define  KPHASE_kphase_0C_kphase_film_mode(data)                                 (0x70000000&((data)<<28))
#define  KPHASE_kphase_0C_kphase_in_reset_source_sel(data)                       (0x08000000&((data)<<27))
#define  KPHASE_kphase_0C_kphase_auto_film_phase_reset(data)                     (0x04000000&((data)<<26))
#define  KPHASE_kphase_0C_kphase_auto_film_phase_en(data)                        (0x02000000&((data)<<25))
#define  KPHASE_kphase_0C_kphase_sw_film_en(data)                                (0x01000000&((data)<<24))
#define  KPHASE_kphase_0C_kphase_film_phase_type(data)                           (0x00FC0000&((data)<<18))
#define  KPHASE_kphase_0C_kphase_out_film_phase_offset(data)                     (0x0003F000&((data)<<12))
#define  KPHASE_kphase_0C_kphase_in_film_phase_offset(data)                      (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_0C_kphase_sw_film_phase(data)                             (0x0000003F&(data))
#define  KPHASE_kphase_0C_get_kphase_out_3d_enable(data)                         ((0x80000000&(data))>>31)
#define  KPHASE_kphase_0C_get_kphase_film_mode(data)                             ((0x70000000&(data))>>28)
#define  KPHASE_kphase_0C_get_kphase_in_reset_source_sel(data)                   ((0x08000000&(data))>>27)
#define  KPHASE_kphase_0C_get_kphase_auto_film_phase_reset(data)                 ((0x04000000&(data))>>26)
#define  KPHASE_kphase_0C_get_kphase_auto_film_phase_en(data)                    ((0x02000000&(data))>>25)
#define  KPHASE_kphase_0C_get_kphase_sw_film_en(data)                            ((0x01000000&(data))>>24)
#define  KPHASE_kphase_0C_get_kphase_film_phase_type(data)                       ((0x00FC0000&(data))>>18)
#define  KPHASE_kphase_0C_get_kphase_out_film_phase_offset(data)                 ((0x0003F000&(data))>>12)
#define  KPHASE_kphase_0C_get_kphase_in_film_phase_offset(data)                  ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_0C_get_kphase_sw_film_phase(data)                         (0x0000003F&(data))

#define  KPHASE_kphase_10                                                       0x1809D410
#define  KPHASE_kphase_10_reg_addr                                               "0xB809D410"
#define  KPHASE_kphase_10_reg                                                    0xB809D410
#define  KPHASE_kphase_10_inst_addr                                              "0x0004"
#define  set_KPHASE_kphase_10_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_10_reg)=data)
#define  get_KPHASE_kphase_10_reg                                                (*((volatile unsigned int*)KPHASE_kphase_10_reg))
#define  KPHASE_kphase_10_kphase_me2_frame_hold_shift                            (31)
#define  KPHASE_kphase_10_kphase_mc_mode_hf_update_en_shift                      (30)
#define  KPHASE_kphase_10_kphase_mc_mode_lf_update_en_shift                      (29)
#define  KPHASE_kphase_10_kphase_in_memc_index_reset_shift                       (28)
#define  KPHASE_kphase_10_kphase_meter_enable_shift                              (27)
#define  KPHASE_kphase_10_kphase_in_lr_ctl_for_index_shift                       (26)
#define  KPHASE_kphase_10_kphase_logo_frame_hold_shift                           (25)
#define  KPHASE_kphase_10_kphase_dec_length_shift                                (17)
#define  KPHASE_kphase_10_kphase_lut_sel_shift                                   (16)
#define  KPHASE_kphase_10_kphase_in_mc_index_bsize_shift                         (12)
#define  KPHASE_kphase_10_kphase_in_me_index_bsize_shift                         (8)
#define  KPHASE_kphase_10_kphase_in_mc_index_reset_shift                         (7)
#define  KPHASE_kphase_10_kphase_in_mc_index_initial_shift                       (4)
#define  KPHASE_kphase_10_kphase_in_me_index_reset_shift                         (3)
#define  KPHASE_kphase_10_kphase_in_me_index_initial_shift                       (0)
#define  KPHASE_kphase_10_kphase_me2_frame_hold_mask                             (0x80000000)
#define  KPHASE_kphase_10_kphase_mc_mode_hf_update_en_mask                       (0x40000000)
#define  KPHASE_kphase_10_kphase_mc_mode_lf_update_en_mask                       (0x20000000)
#define  KPHASE_kphase_10_kphase_in_memc_index_reset_mask                        (0x10000000)
#define  KPHASE_kphase_10_kphase_meter_enable_mask                               (0x08000000)
#define  KPHASE_kphase_10_kphase_in_lr_ctl_for_index_mask                        (0x04000000)
#define  KPHASE_kphase_10_kphase_logo_frame_hold_mask                            (0x02000000)
#define  KPHASE_kphase_10_kphase_dec_length_mask                                 (0x01FE0000)
#define  KPHASE_kphase_10_kphase_lut_sel_mask                                    (0x00010000)
#define  KPHASE_kphase_10_kphase_in_mc_index_bsize_mask                          (0x0000F000)
#define  KPHASE_kphase_10_kphase_in_me_index_bsize_mask                          (0x00000F00)
#define  KPHASE_kphase_10_kphase_in_mc_index_reset_mask                          (0x00000080)
#define  KPHASE_kphase_10_kphase_in_mc_index_initial_mask                        (0x00000070)
#define  KPHASE_kphase_10_kphase_in_me_index_reset_mask                          (0x00000008)
#define  KPHASE_kphase_10_kphase_in_me_index_initial_mask                        (0x00000007)
#define  KPHASE_kphase_10_kphase_me2_frame_hold(data)                            (0x80000000&((data)<<31))
#define  KPHASE_kphase_10_kphase_mc_mode_hf_update_en(data)                      (0x40000000&((data)<<30))
#define  KPHASE_kphase_10_kphase_mc_mode_lf_update_en(data)                      (0x20000000&((data)<<29))
#define  KPHASE_kphase_10_kphase_in_memc_index_reset(data)                       (0x10000000&((data)<<28))
#define  KPHASE_kphase_10_kphase_meter_enable(data)                              (0x08000000&((data)<<27))
#define  KPHASE_kphase_10_kphase_in_lr_ctl_for_index(data)                       (0x04000000&((data)<<26))
#define  KPHASE_kphase_10_kphase_logo_frame_hold(data)                           (0x02000000&((data)<<25))
#define  KPHASE_kphase_10_kphase_dec_length(data)                                (0x01FE0000&((data)<<17))
#define  KPHASE_kphase_10_kphase_lut_sel(data)                                   (0x00010000&((data)<<16))
#define  KPHASE_kphase_10_kphase_in_mc_index_bsize(data)                         (0x0000F000&((data)<<12))
#define  KPHASE_kphase_10_kphase_in_me_index_bsize(data)                         (0x00000F00&((data)<<8))
#define  KPHASE_kphase_10_kphase_in_mc_index_reset(data)                         (0x00000080&((data)<<7))
#define  KPHASE_kphase_10_kphase_in_mc_index_initial(data)                       (0x00000070&((data)<<4))
#define  KPHASE_kphase_10_kphase_in_me_index_reset(data)                         (0x00000008&((data)<<3))
#define  KPHASE_kphase_10_kphase_in_me_index_initial(data)                       (0x00000007&(data))
#define  KPHASE_kphase_10_get_kphase_me2_frame_hold(data)                        ((0x80000000&(data))>>31)
#define  KPHASE_kphase_10_get_kphase_mc_mode_hf_update_en(data)                  ((0x40000000&(data))>>30)
#define  KPHASE_kphase_10_get_kphase_mc_mode_lf_update_en(data)                  ((0x20000000&(data))>>29)
#define  KPHASE_kphase_10_get_kphase_in_memc_index_reset(data)                   ((0x10000000&(data))>>28)
#define  KPHASE_kphase_10_get_kphase_meter_enable(data)                          ((0x08000000&(data))>>27)
#define  KPHASE_kphase_10_get_kphase_in_lr_ctl_for_index(data)                   ((0x04000000&(data))>>26)
#define  KPHASE_kphase_10_get_kphase_logo_frame_hold(data)                       ((0x02000000&(data))>>25)
#define  KPHASE_kphase_10_get_kphase_dec_length(data)                            ((0x01FE0000&(data))>>17)
#define  KPHASE_kphase_10_get_kphase_lut_sel(data)                               ((0x00010000&(data))>>16)
#define  KPHASE_kphase_10_get_kphase_in_mc_index_bsize(data)                     ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_10_get_kphase_in_me_index_bsize(data)                     ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_10_get_kphase_in_mc_index_reset(data)                     ((0x00000080&(data))>>7)
#define  KPHASE_kphase_10_get_kphase_in_mc_index_initial(data)                   ((0x00000070&(data))>>4)
#define  KPHASE_kphase_10_get_kphase_in_me_index_reset(data)                     ((0x00000008&(data))>>3)
#define  KPHASE_kphase_10_get_kphase_in_me_index_initial(data)                   (0x00000007&(data))

#define  KPHASE_kphase_14                                                       0x1809D414
#define  KPHASE_kphase_14_reg_addr                                               "0xB809D414"
#define  KPHASE_kphase_14_reg                                                    0xB809D414
#define  KPHASE_kphase_14_inst_addr                                              "0x0005"
#define  set_KPHASE_kphase_14_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_14_reg)=data)
#define  get_KPHASE_kphase_14_reg                                                (*((volatile unsigned int*)KPHASE_kphase_14_reg))
#define  KPHASE_kphase_14_kphase_in_p03_shift                                    (24)
#define  KPHASE_kphase_14_kphase_in_p02_shift                                    (16)
#define  KPHASE_kphase_14_kphase_in_p01_shift                                    (8)
#define  KPHASE_kphase_14_kphase_in_p00_shift                                    (0)
#define  KPHASE_kphase_14_kphase_in_p03_mask                                     (0xFF000000)
#define  KPHASE_kphase_14_kphase_in_p02_mask                                     (0x00FF0000)
#define  KPHASE_kphase_14_kphase_in_p01_mask                                     (0x0000FF00)
#define  KPHASE_kphase_14_kphase_in_p00_mask                                     (0x000000FF)
#define  KPHASE_kphase_14_kphase_in_p03(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_14_kphase_in_p02(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_14_kphase_in_p01(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_14_kphase_in_p00(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_14_get_kphase_in_p03(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_14_get_kphase_in_p02(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_14_get_kphase_in_p01(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_14_get_kphase_in_p00(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_18                                                       0x1809D418
#define  KPHASE_kphase_18_reg_addr                                               "0xB809D418"
#define  KPHASE_kphase_18_reg                                                    0xB809D418
#define  KPHASE_kphase_18_inst_addr                                              "0x0006"
#define  set_KPHASE_kphase_18_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_18_reg)=data)
#define  get_KPHASE_kphase_18_reg                                                (*((volatile unsigned int*)KPHASE_kphase_18_reg))
#define  KPHASE_kphase_18_kphase_in_p07_shift                                    (24)
#define  KPHASE_kphase_18_kphase_in_p06_shift                                    (16)
#define  KPHASE_kphase_18_kphase_in_p05_shift                                    (8)
#define  KPHASE_kphase_18_kphase_in_p04_shift                                    (0)
#define  KPHASE_kphase_18_kphase_in_p07_mask                                     (0xFF000000)
#define  KPHASE_kphase_18_kphase_in_p06_mask                                     (0x00FF0000)
#define  KPHASE_kphase_18_kphase_in_p05_mask                                     (0x0000FF00)
#define  KPHASE_kphase_18_kphase_in_p04_mask                                     (0x000000FF)
#define  KPHASE_kphase_18_kphase_in_p07(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_18_kphase_in_p06(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_18_kphase_in_p05(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_18_kphase_in_p04(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_18_get_kphase_in_p07(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_18_get_kphase_in_p06(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_18_get_kphase_in_p05(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_18_get_kphase_in_p04(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_1C                                                       0x1809D41C
#define  KPHASE_kphase_1C_reg_addr                                               "0xB809D41C"
#define  KPHASE_kphase_1C_reg                                                    0xB809D41C
#define  KPHASE_kphase_1C_inst_addr                                              "0x0007"
#define  set_KPHASE_kphase_1C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_1C_reg)=data)
#define  get_KPHASE_kphase_1C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_1C_reg))
#define  KPHASE_kphase_1C_kphase_in_p11_shift                                    (24)
#define  KPHASE_kphase_1C_kphase_in_p10_shift                                    (16)
#define  KPHASE_kphase_1C_kphase_in_p09_shift                                    (8)
#define  KPHASE_kphase_1C_kphase_in_p08_shift                                    (0)
#define  KPHASE_kphase_1C_kphase_in_p11_mask                                     (0xFF000000)
#define  KPHASE_kphase_1C_kphase_in_p10_mask                                     (0x00FF0000)
#define  KPHASE_kphase_1C_kphase_in_p09_mask                                     (0x0000FF00)
#define  KPHASE_kphase_1C_kphase_in_p08_mask                                     (0x000000FF)
#define  KPHASE_kphase_1C_kphase_in_p11(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_1C_kphase_in_p10(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_1C_kphase_in_p09(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_1C_kphase_in_p08(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_1C_get_kphase_in_p11(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_1C_get_kphase_in_p10(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_1C_get_kphase_in_p09(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_1C_get_kphase_in_p08(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_20                                                       0x1809D420
#define  KPHASE_kphase_20_reg_addr                                               "0xB809D420"
#define  KPHASE_kphase_20_reg                                                    0xB809D420
#define  KPHASE_kphase_20_inst_addr                                              "0x0008"
#define  set_KPHASE_kphase_20_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_20_reg)=data)
#define  get_KPHASE_kphase_20_reg                                                (*((volatile unsigned int*)KPHASE_kphase_20_reg))
#define  KPHASE_kphase_20_kphase_in_p15_shift                                    (24)
#define  KPHASE_kphase_20_kphase_in_p14_shift                                    (16)
#define  KPHASE_kphase_20_kphase_in_p13_shift                                    (8)
#define  KPHASE_kphase_20_kphase_in_p12_shift                                    (0)
#define  KPHASE_kphase_20_kphase_in_p15_mask                                     (0xFF000000)
#define  KPHASE_kphase_20_kphase_in_p14_mask                                     (0x00FF0000)
#define  KPHASE_kphase_20_kphase_in_p13_mask                                     (0x0000FF00)
#define  KPHASE_kphase_20_kphase_in_p12_mask                                     (0x000000FF)
#define  KPHASE_kphase_20_kphase_in_p15(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_20_kphase_in_p14(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_20_kphase_in_p13(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_20_kphase_in_p12(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_20_get_kphase_in_p15(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_20_get_kphase_in_p14(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_20_get_kphase_in_p13(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_20_get_kphase_in_p12(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_24                                                       0x1809D424
#define  KPHASE_kphase_24_reg_addr                                               "0xB809D424"
#define  KPHASE_kphase_24_reg                                                    0xB809D424
#define  KPHASE_kphase_24_inst_addr                                              "0x0009"
#define  set_KPHASE_kphase_24_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_24_reg)=data)
#define  get_KPHASE_kphase_24_reg                                                (*((volatile unsigned int*)KPHASE_kphase_24_reg))
#define  KPHASE_kphase_24_kphase_in_p19_shift                                    (24)
#define  KPHASE_kphase_24_kphase_in_p18_shift                                    (16)
#define  KPHASE_kphase_24_kphase_in_p17_shift                                    (8)
#define  KPHASE_kphase_24_kphase_in_p16_shift                                    (0)
#define  KPHASE_kphase_24_kphase_in_p19_mask                                     (0xFF000000)
#define  KPHASE_kphase_24_kphase_in_p18_mask                                     (0x00FF0000)
#define  KPHASE_kphase_24_kphase_in_p17_mask                                     (0x0000FF00)
#define  KPHASE_kphase_24_kphase_in_p16_mask                                     (0x000000FF)
#define  KPHASE_kphase_24_kphase_in_p19(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_24_kphase_in_p18(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_24_kphase_in_p17(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_24_kphase_in_p16(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_24_get_kphase_in_p19(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_24_get_kphase_in_p18(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_24_get_kphase_in_p17(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_24_get_kphase_in_p16(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_28                                                       0x1809D428
#define  KPHASE_kphase_28_reg_addr                                               "0xB809D428"
#define  KPHASE_kphase_28_reg                                                    0xB809D428
#define  KPHASE_kphase_28_inst_addr                                              "0x000A"
#define  set_KPHASE_kphase_28_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_28_reg)=data)
#define  get_KPHASE_kphase_28_reg                                                (*((volatile unsigned int*)KPHASE_kphase_28_reg))
#define  KPHASE_kphase_28_kphase_in_p23_shift                                    (24)
#define  KPHASE_kphase_28_kphase_in_p22_shift                                    (16)
#define  KPHASE_kphase_28_kphase_in_p21_shift                                    (8)
#define  KPHASE_kphase_28_kphase_in_p20_shift                                    (0)
#define  KPHASE_kphase_28_kphase_in_p23_mask                                     (0xFF000000)
#define  KPHASE_kphase_28_kphase_in_p22_mask                                     (0x00FF0000)
#define  KPHASE_kphase_28_kphase_in_p21_mask                                     (0x0000FF00)
#define  KPHASE_kphase_28_kphase_in_p20_mask                                     (0x000000FF)
#define  KPHASE_kphase_28_kphase_in_p23(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_28_kphase_in_p22(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_28_kphase_in_p21(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_28_kphase_in_p20(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_28_get_kphase_in_p23(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_28_get_kphase_in_p22(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_28_get_kphase_in_p21(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_28_get_kphase_in_p20(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_2C                                                       0x1809D42C
#define  KPHASE_kphase_2C_reg_addr                                               "0xB809D42C"
#define  KPHASE_kphase_2C_reg                                                    0xB809D42C
#define  KPHASE_kphase_2C_inst_addr                                              "0x000B"
#define  set_KPHASE_kphase_2C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_2C_reg)=data)
#define  get_KPHASE_kphase_2C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_2C_reg))
#define  KPHASE_kphase_2C_kphase_in_p27_shift                                    (24)
#define  KPHASE_kphase_2C_kphase_in_p26_shift                                    (16)
#define  KPHASE_kphase_2C_kphase_in_p25_shift                                    (8)
#define  KPHASE_kphase_2C_kphase_in_p24_shift                                    (0)
#define  KPHASE_kphase_2C_kphase_in_p27_mask                                     (0xFF000000)
#define  KPHASE_kphase_2C_kphase_in_p26_mask                                     (0x00FF0000)
#define  KPHASE_kphase_2C_kphase_in_p25_mask                                     (0x0000FF00)
#define  KPHASE_kphase_2C_kphase_in_p24_mask                                     (0x000000FF)
#define  KPHASE_kphase_2C_kphase_in_p27(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_2C_kphase_in_p26(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_2C_kphase_in_p25(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_2C_kphase_in_p24(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_2C_get_kphase_in_p27(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_2C_get_kphase_in_p26(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_2C_get_kphase_in_p25(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_2C_get_kphase_in_p24(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_30                                                       0x1809D430
#define  KPHASE_kphase_30_reg_addr                                               "0xB809D430"
#define  KPHASE_kphase_30_reg                                                    0xB809D430
#define  KPHASE_kphase_30_inst_addr                                              "0x000C"
#define  set_KPHASE_kphase_30_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_30_reg)=data)
#define  get_KPHASE_kphase_30_reg                                                (*((volatile unsigned int*)KPHASE_kphase_30_reg))
#define  KPHASE_kphase_30_kphase_in_p31_shift                                    (24)
#define  KPHASE_kphase_30_kphase_in_p30_shift                                    (16)
#define  KPHASE_kphase_30_kphase_in_p29_shift                                    (8)
#define  KPHASE_kphase_30_kphase_in_p28_shift                                    (0)
#define  KPHASE_kphase_30_kphase_in_p31_mask                                     (0xFF000000)
#define  KPHASE_kphase_30_kphase_in_p30_mask                                     (0x00FF0000)
#define  KPHASE_kphase_30_kphase_in_p29_mask                                     (0x0000FF00)
#define  KPHASE_kphase_30_kphase_in_p28_mask                                     (0x000000FF)
#define  KPHASE_kphase_30_kphase_in_p31(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_30_kphase_in_p30(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_30_kphase_in_p29(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_30_kphase_in_p28(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_30_get_kphase_in_p31(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_30_get_kphase_in_p30(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_30_get_kphase_in_p29(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_30_get_kphase_in_p28(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_34                                                       0x1809D434
#define  KPHASE_kphase_34_reg_addr                                               "0xB809D434"
#define  KPHASE_kphase_34_reg                                                    0xB809D434
#define  KPHASE_kphase_34_inst_addr                                              "0x000D"
#define  set_KPHASE_kphase_34_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_34_reg)=data)
#define  get_KPHASE_kphase_34_reg                                                (*((volatile unsigned int*)KPHASE_kphase_34_reg))
#define  KPHASE_kphase_34_kphase_in_p35_shift                                    (24)
#define  KPHASE_kphase_34_kphase_in_p34_shift                                    (16)
#define  KPHASE_kphase_34_kphase_in_p33_shift                                    (8)
#define  KPHASE_kphase_34_kphase_in_p32_shift                                    (0)
#define  KPHASE_kphase_34_kphase_in_p35_mask                                     (0xFF000000)
#define  KPHASE_kphase_34_kphase_in_p34_mask                                     (0x00FF0000)
#define  KPHASE_kphase_34_kphase_in_p33_mask                                     (0x0000FF00)
#define  KPHASE_kphase_34_kphase_in_p32_mask                                     (0x000000FF)
#define  KPHASE_kphase_34_kphase_in_p35(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_34_kphase_in_p34(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_34_kphase_in_p33(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_34_kphase_in_p32(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_34_get_kphase_in_p35(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_34_get_kphase_in_p34(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_34_get_kphase_in_p33(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_34_get_kphase_in_p32(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_38                                                       0x1809D438
#define  KPHASE_kphase_38_reg_addr                                               "0xB809D438"
#define  KPHASE_kphase_38_reg                                                    0xB809D438
#define  KPHASE_kphase_38_inst_addr                                              "0x000E"
#define  set_KPHASE_kphase_38_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_38_reg)=data)
#define  get_KPHASE_kphase_38_reg                                                (*((volatile unsigned int*)KPHASE_kphase_38_reg))
#define  KPHASE_kphase_38_kphase_in_p39_shift                                    (24)
#define  KPHASE_kphase_38_kphase_in_p38_shift                                    (16)
#define  KPHASE_kphase_38_kphase_in_p37_shift                                    (8)
#define  KPHASE_kphase_38_kphase_in_p36_shift                                    (0)
#define  KPHASE_kphase_38_kphase_in_p39_mask                                     (0xFF000000)
#define  KPHASE_kphase_38_kphase_in_p38_mask                                     (0x00FF0000)
#define  KPHASE_kphase_38_kphase_in_p37_mask                                     (0x0000FF00)
#define  KPHASE_kphase_38_kphase_in_p36_mask                                     (0x000000FF)
#define  KPHASE_kphase_38_kphase_in_p39(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_38_kphase_in_p38(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_38_kphase_in_p37(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_38_kphase_in_p36(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_38_get_kphase_in_p39(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_38_get_kphase_in_p38(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_38_get_kphase_in_p37(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_38_get_kphase_in_p36(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_3C                                                       0x1809D43C
#define  KPHASE_kphase_3C_reg_addr                                               "0xB809D43C"
#define  KPHASE_kphase_3C_reg                                                    0xB809D43C
#define  KPHASE_kphase_3C_inst_addr                                              "0x000F"
#define  set_KPHASE_kphase_3C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_3C_reg)=data)
#define  get_KPHASE_kphase_3C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_3C_reg))
#define  KPHASE_kphase_3C_kphase_in_p43_shift                                    (24)
#define  KPHASE_kphase_3C_kphase_in_p42_shift                                    (16)
#define  KPHASE_kphase_3C_kphase_in_p41_shift                                    (8)
#define  KPHASE_kphase_3C_kphase_in_p40_shift                                    (0)
#define  KPHASE_kphase_3C_kphase_in_p43_mask                                     (0xFF000000)
#define  KPHASE_kphase_3C_kphase_in_p42_mask                                     (0x00FF0000)
#define  KPHASE_kphase_3C_kphase_in_p41_mask                                     (0x0000FF00)
#define  KPHASE_kphase_3C_kphase_in_p40_mask                                     (0x000000FF)
#define  KPHASE_kphase_3C_kphase_in_p43(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_3C_kphase_in_p42(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_3C_kphase_in_p41(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_3C_kphase_in_p40(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_3C_get_kphase_in_p43(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_3C_get_kphase_in_p42(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_3C_get_kphase_in_p41(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_3C_get_kphase_in_p40(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_40                                                       0x1809D440
#define  KPHASE_kphase_40_reg_addr                                               "0xB809D440"
#define  KPHASE_kphase_40_reg                                                    0xB809D440
#define  KPHASE_kphase_40_inst_addr                                              "0x0010"
#define  set_KPHASE_kphase_40_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_40_reg)=data)
#define  get_KPHASE_kphase_40_reg                                                (*((volatile unsigned int*)KPHASE_kphase_40_reg))
#define  KPHASE_kphase_40_kphase_in_p47_shift                                    (24)
#define  KPHASE_kphase_40_kphase_in_p46_shift                                    (16)
#define  KPHASE_kphase_40_kphase_in_p45_shift                                    (8)
#define  KPHASE_kphase_40_kphase_in_p44_shift                                    (0)
#define  KPHASE_kphase_40_kphase_in_p47_mask                                     (0xFF000000)
#define  KPHASE_kphase_40_kphase_in_p46_mask                                     (0x00FF0000)
#define  KPHASE_kphase_40_kphase_in_p45_mask                                     (0x0000FF00)
#define  KPHASE_kphase_40_kphase_in_p44_mask                                     (0x000000FF)
#define  KPHASE_kphase_40_kphase_in_p47(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_40_kphase_in_p46(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_40_kphase_in_p45(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_40_kphase_in_p44(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_40_get_kphase_in_p47(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_40_get_kphase_in_p46(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_40_get_kphase_in_p45(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_40_get_kphase_in_p44(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_44                                                       0x1809D444
#define  KPHASE_kphase_44_reg_addr                                               "0xB809D444"
#define  KPHASE_kphase_44_reg                                                    0xB809D444
#define  KPHASE_kphase_44_inst_addr                                              "0x0011"
#define  set_KPHASE_kphase_44_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_44_reg)=data)
#define  get_KPHASE_kphase_44_reg                                                (*((volatile unsigned int*)KPHASE_kphase_44_reg))
#define  KPHASE_kphase_44_kphase_in_p51_shift                                    (24)
#define  KPHASE_kphase_44_kphase_in_p50_shift                                    (16)
#define  KPHASE_kphase_44_kphase_in_p49_shift                                    (8)
#define  KPHASE_kphase_44_kphase_in_p48_shift                                    (0)
#define  KPHASE_kphase_44_kphase_in_p51_mask                                     (0xFF000000)
#define  KPHASE_kphase_44_kphase_in_p50_mask                                     (0x00FF0000)
#define  KPHASE_kphase_44_kphase_in_p49_mask                                     (0x0000FF00)
#define  KPHASE_kphase_44_kphase_in_p48_mask                                     (0x000000FF)
#define  KPHASE_kphase_44_kphase_in_p51(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_44_kphase_in_p50(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_44_kphase_in_p49(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_44_kphase_in_p48(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_44_get_kphase_in_p51(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_44_get_kphase_in_p50(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_44_get_kphase_in_p49(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_44_get_kphase_in_p48(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_48                                                       0x1809D448
#define  KPHASE_kphase_48_reg_addr                                               "0xB809D448"
#define  KPHASE_kphase_48_reg                                                    0xB809D448
#define  KPHASE_kphase_48_inst_addr                                              "0x0012"
#define  set_KPHASE_kphase_48_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_48_reg)=data)
#define  get_KPHASE_kphase_48_reg                                                (*((volatile unsigned int*)KPHASE_kphase_48_reg))
#define  KPHASE_kphase_48_kphase_in_p55_shift                                    (24)
#define  KPHASE_kphase_48_kphase_in_p54_shift                                    (16)
#define  KPHASE_kphase_48_kphase_in_p53_shift                                    (8)
#define  KPHASE_kphase_48_kphase_in_p52_shift                                    (0)
#define  KPHASE_kphase_48_kphase_in_p55_mask                                     (0xFF000000)
#define  KPHASE_kphase_48_kphase_in_p54_mask                                     (0x00FF0000)
#define  KPHASE_kphase_48_kphase_in_p53_mask                                     (0x0000FF00)
#define  KPHASE_kphase_48_kphase_in_p52_mask                                     (0x000000FF)
#define  KPHASE_kphase_48_kphase_in_p55(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_48_kphase_in_p54(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_48_kphase_in_p53(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_48_kphase_in_p52(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_48_get_kphase_in_p55(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_48_get_kphase_in_p54(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_48_get_kphase_in_p53(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_48_get_kphase_in_p52(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_4C                                                       0x1809D44C
#define  KPHASE_kphase_4C_reg_addr                                               "0xB809D44C"
#define  KPHASE_kphase_4C_reg                                                    0xB809D44C
#define  KPHASE_kphase_4C_inst_addr                                              "0x0013"
#define  set_KPHASE_kphase_4C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_4C_reg)=data)
#define  get_KPHASE_kphase_4C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_4C_reg))
#define  KPHASE_kphase_4C_kphase_in_p59_shift                                    (24)
#define  KPHASE_kphase_4C_kphase_in_p58_shift                                    (16)
#define  KPHASE_kphase_4C_kphase_in_p57_shift                                    (8)
#define  KPHASE_kphase_4C_kphase_in_p56_shift                                    (0)
#define  KPHASE_kphase_4C_kphase_in_p59_mask                                     (0xFF000000)
#define  KPHASE_kphase_4C_kphase_in_p58_mask                                     (0x00FF0000)
#define  KPHASE_kphase_4C_kphase_in_p57_mask                                     (0x0000FF00)
#define  KPHASE_kphase_4C_kphase_in_p56_mask                                     (0x000000FF)
#define  KPHASE_kphase_4C_kphase_in_p59(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_4C_kphase_in_p58(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_4C_kphase_in_p57(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_4C_kphase_in_p56(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_4C_get_kphase_in_p59(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_4C_get_kphase_in_p58(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_4C_get_kphase_in_p57(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_4C_get_kphase_in_p56(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_50                                                       0x1809D450
#define  KPHASE_kphase_50_reg_addr                                               "0xB809D450"
#define  KPHASE_kphase_50_reg                                                    0xB809D450
#define  KPHASE_kphase_50_inst_addr                                              "0x0014"
#define  set_KPHASE_kphase_50_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_50_reg)=data)
#define  get_KPHASE_kphase_50_reg                                                (*((volatile unsigned int*)KPHASE_kphase_50_reg))
#define  KPHASE_kphase_50_kphase_in_p63_shift                                    (24)
#define  KPHASE_kphase_50_kphase_in_p62_shift                                    (16)
#define  KPHASE_kphase_50_kphase_in_p61_shift                                    (8)
#define  KPHASE_kphase_50_kphase_in_p60_shift                                    (0)
#define  KPHASE_kphase_50_kphase_in_p63_mask                                     (0xFF000000)
#define  KPHASE_kphase_50_kphase_in_p62_mask                                     (0x00FF0000)
#define  KPHASE_kphase_50_kphase_in_p61_mask                                     (0x0000FF00)
#define  KPHASE_kphase_50_kphase_in_p60_mask                                     (0x000000FF)
#define  KPHASE_kphase_50_kphase_in_p63(data)                                    (0xFF000000&((data)<<24))
#define  KPHASE_kphase_50_kphase_in_p62(data)                                    (0x00FF0000&((data)<<16))
#define  KPHASE_kphase_50_kphase_in_p61(data)                                    (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_50_kphase_in_p60(data)                                    (0x000000FF&(data))
#define  KPHASE_kphase_50_get_kphase_in_p63(data)                                ((0xFF000000&(data))>>24)
#define  KPHASE_kphase_50_get_kphase_in_p62(data)                                ((0x00FF0000&(data))>>16)
#define  KPHASE_kphase_50_get_kphase_in_p61(data)                                ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_50_get_kphase_in_p60(data)                                (0x000000FF&(data))

#define  KPHASE_kphase_54                                                       0x1809D454
#define  KPHASE_kphase_54_reg_addr                                               "0xB809D454"
#define  KPHASE_kphase_54_reg                                                    0xB809D454
#define  KPHASE_kphase_54_inst_addr                                              "0x0015"
#define  set_KPHASE_kphase_54_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_54_reg)=data)
#define  get_KPHASE_kphase_54_reg                                                (*((volatile unsigned int*)KPHASE_kphase_54_reg))
#define  KPHASE_kphase_54_kphase_film_mode_proc_func_en_shift                    (31)
#define  KPHASE_kphase_54_kphase_film_mode_proc_quit_film22_id_shift             (30)
#define  KPHASE_kphase_54_kphase_film_mode_proc_quit_film32_id_shift             (27)
#define  KPHASE_kphase_54_kphase_film_mode_proc_enter_film22_id_shift            (26)
#define  KPHASE_kphase_54_kphase_film_mode_proc_enter_film32_id_shift            (23)
#define  KPHASE_kphase_54_kphase_force_me2_lr_shift                              (22)
#define  KPHASE_kphase_54_kphase_force_me2_lr_en_shift                           (21)
#define  KPHASE_kphase_54_kphase_sram_ls_value_shift                             (20)
#define  KPHASE_kphase_54_kphase_sram_ls_en_shift                                (19)
#define  KPHASE_kphase_54_kphase_force_mc_mode_hf_shift                          (16)
#define  KPHASE_kphase_54_kphase_dec_mtpt_end_shift                              (8)
#define  KPHASE_kphase_54_kphase_dec_mtpt_start_shift                            (0)
#define  KPHASE_kphase_54_kphase_film_mode_proc_func_en_mask                     (0x80000000)
#define  KPHASE_kphase_54_kphase_film_mode_proc_quit_film22_id_mask              (0x40000000)
#define  KPHASE_kphase_54_kphase_film_mode_proc_quit_film32_id_mask              (0x38000000)
#define  KPHASE_kphase_54_kphase_film_mode_proc_enter_film22_id_mask             (0x04000000)
#define  KPHASE_kphase_54_kphase_film_mode_proc_enter_film32_id_mask             (0x03800000)
#define  KPHASE_kphase_54_kphase_force_me2_lr_mask                               (0x00400000)
#define  KPHASE_kphase_54_kphase_force_me2_lr_en_mask                            (0x00200000)
#define  KPHASE_kphase_54_kphase_sram_ls_value_mask                              (0x00100000)
#define  KPHASE_kphase_54_kphase_sram_ls_en_mask                                 (0x00080000)
#define  KPHASE_kphase_54_kphase_force_mc_mode_hf_mask                           (0x00070000)
#define  KPHASE_kphase_54_kphase_dec_mtpt_end_mask                               (0x0000FF00)
#define  KPHASE_kphase_54_kphase_dec_mtpt_start_mask                             (0x000000FF)
#define  KPHASE_kphase_54_kphase_film_mode_proc_func_en(data)                    (0x80000000&((data)<<31))
#define  KPHASE_kphase_54_kphase_film_mode_proc_quit_film22_id(data)             (0x40000000&((data)<<30))
#define  KPHASE_kphase_54_kphase_film_mode_proc_quit_film32_id(data)             (0x38000000&((data)<<27))
#define  KPHASE_kphase_54_kphase_film_mode_proc_enter_film22_id(data)            (0x04000000&((data)<<26))
#define  KPHASE_kphase_54_kphase_film_mode_proc_enter_film32_id(data)            (0x03800000&((data)<<23))
#define  KPHASE_kphase_54_kphase_force_me2_lr(data)                              (0x00400000&((data)<<22))
#define  KPHASE_kphase_54_kphase_force_me2_lr_en(data)                           (0x00200000&((data)<<21))
#define  KPHASE_kphase_54_kphase_sram_ls_value(data)                             (0x00100000&((data)<<20))
#define  KPHASE_kphase_54_kphase_sram_ls_en(data)                                (0x00080000&((data)<<19))
#define  KPHASE_kphase_54_kphase_force_mc_mode_hf(data)                          (0x00070000&((data)<<16))
#define  KPHASE_kphase_54_kphase_dec_mtpt_end(data)                              (0x0000FF00&((data)<<8))
#define  KPHASE_kphase_54_kphase_dec_mtpt_start(data)                            (0x000000FF&(data))
#define  KPHASE_kphase_54_get_kphase_film_mode_proc_func_en(data)                ((0x80000000&(data))>>31)
#define  KPHASE_kphase_54_get_kphase_film_mode_proc_quit_film22_id(data)         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_54_get_kphase_film_mode_proc_quit_film32_id(data)         ((0x38000000&(data))>>27)
#define  KPHASE_kphase_54_get_kphase_film_mode_proc_enter_film22_id(data)        ((0x04000000&(data))>>26)
#define  KPHASE_kphase_54_get_kphase_film_mode_proc_enter_film32_id(data)        ((0x03800000&(data))>>23)
#define  KPHASE_kphase_54_get_kphase_force_me2_lr(data)                          ((0x00400000&(data))>>22)
#define  KPHASE_kphase_54_get_kphase_force_me2_lr_en(data)                       ((0x00200000&(data))>>21)
#define  KPHASE_kphase_54_get_kphase_sram_ls_value(data)                         ((0x00100000&(data))>>20)
#define  KPHASE_kphase_54_get_kphase_sram_ls_en(data)                            ((0x00080000&(data))>>19)
#define  KPHASE_kphase_54_get_kphase_force_mc_mode_hf(data)                      ((0x00070000&(data))>>16)
#define  KPHASE_kphase_54_get_kphase_dec_mtpt_end(data)                          ((0x0000FF00&(data))>>8)
#define  KPHASE_kphase_54_get_kphase_dec_mtpt_start(data)                        (0x000000FF&(data))

#define  KPHASE_kphase_58                                                       0x1809D458
#define  KPHASE_kphase_58_reg_addr                                               "0xB809D458"
#define  KPHASE_kphase_58_reg                                                    0xB809D458
#define  KPHASE_kphase_58_inst_addr                                              "0x0016"
#define  set_KPHASE_kphase_58_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_58_reg)=data)
#define  get_KPHASE_kphase_58_reg                                                (*((volatile unsigned int*)KPHASE_kphase_58_reg))
#define  KPHASE_kphase_58_kphase_in_me2_p07_shift                                (28)
#define  KPHASE_kphase_58_kphase_in_me2_p06_shift                                (24)
#define  KPHASE_kphase_58_kphase_in_me2_p05_shift                                (20)
#define  KPHASE_kphase_58_kphase_in_me2_p04_shift                                (16)
#define  KPHASE_kphase_58_kphase_in_me2_p03_shift                                (12)
#define  KPHASE_kphase_58_kphase_in_me2_p02_shift                                (8)
#define  KPHASE_kphase_58_kphase_in_me2_p01_shift                                (4)
#define  KPHASE_kphase_58_kphase_in_me2_p00_shift                                (0)
#define  KPHASE_kphase_58_kphase_in_me2_p07_mask                                 (0xF0000000)
#define  KPHASE_kphase_58_kphase_in_me2_p06_mask                                 (0x0F000000)
#define  KPHASE_kphase_58_kphase_in_me2_p05_mask                                 (0x00F00000)
#define  KPHASE_kphase_58_kphase_in_me2_p04_mask                                 (0x000F0000)
#define  KPHASE_kphase_58_kphase_in_me2_p03_mask                                 (0x0000F000)
#define  KPHASE_kphase_58_kphase_in_me2_p02_mask                                 (0x00000F00)
#define  KPHASE_kphase_58_kphase_in_me2_p01_mask                                 (0x000000F0)
#define  KPHASE_kphase_58_kphase_in_me2_p00_mask                                 (0x0000000F)
#define  KPHASE_kphase_58_kphase_in_me2_p07(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_58_kphase_in_me2_p06(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_58_kphase_in_me2_p05(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_58_kphase_in_me2_p04(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_58_kphase_in_me2_p03(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_58_kphase_in_me2_p02(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_58_kphase_in_me2_p01(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_58_kphase_in_me2_p00(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_58_get_kphase_in_me2_p07(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_58_get_kphase_in_me2_p06(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_58_get_kphase_in_me2_p05(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_58_get_kphase_in_me2_p04(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_58_get_kphase_in_me2_p03(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_58_get_kphase_in_me2_p02(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_58_get_kphase_in_me2_p01(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_58_get_kphase_in_me2_p00(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_5C                                                       0x1809D45C
#define  KPHASE_kphase_5C_reg_addr                                               "0xB809D45C"
#define  KPHASE_kphase_5C_reg                                                    0xB809D45C
#define  KPHASE_kphase_5C_inst_addr                                              "0x0017"
#define  set_KPHASE_kphase_5C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_5C_reg)=data)
#define  get_KPHASE_kphase_5C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_5C_reg))
#define  KPHASE_kphase_5C_kphase_in_me2_p15_shift                                (28)
#define  KPHASE_kphase_5C_kphase_in_me2_p14_shift                                (24)
#define  KPHASE_kphase_5C_kphase_in_me2_p13_shift                                (20)
#define  KPHASE_kphase_5C_kphase_in_me2_p12_shift                                (16)
#define  KPHASE_kphase_5C_kphase_in_me2_p11_shift                                (12)
#define  KPHASE_kphase_5C_kphase_in_me2_p10_shift                                (8)
#define  KPHASE_kphase_5C_kphase_in_me2_p09_shift                                (4)
#define  KPHASE_kphase_5C_kphase_in_me2_p08_shift                                (0)
#define  KPHASE_kphase_5C_kphase_in_me2_p15_mask                                 (0xF0000000)
#define  KPHASE_kphase_5C_kphase_in_me2_p14_mask                                 (0x0F000000)
#define  KPHASE_kphase_5C_kphase_in_me2_p13_mask                                 (0x00F00000)
#define  KPHASE_kphase_5C_kphase_in_me2_p12_mask                                 (0x000F0000)
#define  KPHASE_kphase_5C_kphase_in_me2_p11_mask                                 (0x0000F000)
#define  KPHASE_kphase_5C_kphase_in_me2_p10_mask                                 (0x00000F00)
#define  KPHASE_kphase_5C_kphase_in_me2_p09_mask                                 (0x000000F0)
#define  KPHASE_kphase_5C_kphase_in_me2_p08_mask                                 (0x0000000F)
#define  KPHASE_kphase_5C_kphase_in_me2_p15(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_5C_kphase_in_me2_p14(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_5C_kphase_in_me2_p13(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_5C_kphase_in_me2_p12(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_5C_kphase_in_me2_p11(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_5C_kphase_in_me2_p10(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_5C_kphase_in_me2_p09(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_5C_kphase_in_me2_p08(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_5C_get_kphase_in_me2_p15(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_5C_get_kphase_in_me2_p14(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_5C_get_kphase_in_me2_p13(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_5C_get_kphase_in_me2_p12(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_5C_get_kphase_in_me2_p11(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_5C_get_kphase_in_me2_p10(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_5C_get_kphase_in_me2_p09(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_5C_get_kphase_in_me2_p08(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_60                                                       0x1809D460
#define  KPHASE_kphase_60_reg_addr                                               "0xB809D460"
#define  KPHASE_kphase_60_reg                                                    0xB809D460
#define  KPHASE_kphase_60_inst_addr                                              "0x0018"
#define  set_KPHASE_kphase_60_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_60_reg)=data)
#define  get_KPHASE_kphase_60_reg                                                (*((volatile unsigned int*)KPHASE_kphase_60_reg))
#define  KPHASE_kphase_60_kphase_in_me2_p23_shift                                (28)
#define  KPHASE_kphase_60_kphase_in_me2_p22_shift                                (24)
#define  KPHASE_kphase_60_kphase_in_me2_p21_shift                                (20)
#define  KPHASE_kphase_60_kphase_in_me2_p20_shift                                (16)
#define  KPHASE_kphase_60_kphase_in_me2_p19_shift                                (12)
#define  KPHASE_kphase_60_kphase_in_me2_p18_shift                                (8)
#define  KPHASE_kphase_60_kphase_in_me2_p17_shift                                (4)
#define  KPHASE_kphase_60_kphase_in_me2_p16_shift                                (0)
#define  KPHASE_kphase_60_kphase_in_me2_p23_mask                                 (0xF0000000)
#define  KPHASE_kphase_60_kphase_in_me2_p22_mask                                 (0x0F000000)
#define  KPHASE_kphase_60_kphase_in_me2_p21_mask                                 (0x00F00000)
#define  KPHASE_kphase_60_kphase_in_me2_p20_mask                                 (0x000F0000)
#define  KPHASE_kphase_60_kphase_in_me2_p19_mask                                 (0x0000F000)
#define  KPHASE_kphase_60_kphase_in_me2_p18_mask                                 (0x00000F00)
#define  KPHASE_kphase_60_kphase_in_me2_p17_mask                                 (0x000000F0)
#define  KPHASE_kphase_60_kphase_in_me2_p16_mask                                 (0x0000000F)
#define  KPHASE_kphase_60_kphase_in_me2_p23(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_60_kphase_in_me2_p22(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_60_kphase_in_me2_p21(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_60_kphase_in_me2_p20(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_60_kphase_in_me2_p19(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_60_kphase_in_me2_p18(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_60_kphase_in_me2_p17(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_60_kphase_in_me2_p16(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_60_get_kphase_in_me2_p23(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_60_get_kphase_in_me2_p22(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_60_get_kphase_in_me2_p21(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_60_get_kphase_in_me2_p20(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_60_get_kphase_in_me2_p19(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_60_get_kphase_in_me2_p18(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_60_get_kphase_in_me2_p17(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_60_get_kphase_in_me2_p16(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_64                                                       0x1809D464
#define  KPHASE_kphase_64_reg_addr                                               "0xB809D464"
#define  KPHASE_kphase_64_reg                                                    0xB809D464
#define  KPHASE_kphase_64_inst_addr                                              "0x0019"
#define  set_KPHASE_kphase_64_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_64_reg)=data)
#define  get_KPHASE_kphase_64_reg                                                (*((volatile unsigned int*)KPHASE_kphase_64_reg))
#define  KPHASE_kphase_64_kphase_in_me2_p31_shift                                (28)
#define  KPHASE_kphase_64_kphase_in_me2_p30_shift                                (24)
#define  KPHASE_kphase_64_kphase_in_me2_p29_shift                                (20)
#define  KPHASE_kphase_64_kphase_in_me2_p28_shift                                (16)
#define  KPHASE_kphase_64_kphase_in_me2_p27_shift                                (12)
#define  KPHASE_kphase_64_kphase_in_me2_p26_shift                                (8)
#define  KPHASE_kphase_64_kphase_in_me2_p25_shift                                (4)
#define  KPHASE_kphase_64_kphase_in_me2_p24_shift                                (0)
#define  KPHASE_kphase_64_kphase_in_me2_p31_mask                                 (0xF0000000)
#define  KPHASE_kphase_64_kphase_in_me2_p30_mask                                 (0x0F000000)
#define  KPHASE_kphase_64_kphase_in_me2_p29_mask                                 (0x00F00000)
#define  KPHASE_kphase_64_kphase_in_me2_p28_mask                                 (0x000F0000)
#define  KPHASE_kphase_64_kphase_in_me2_p27_mask                                 (0x0000F000)
#define  KPHASE_kphase_64_kphase_in_me2_p26_mask                                 (0x00000F00)
#define  KPHASE_kphase_64_kphase_in_me2_p25_mask                                 (0x000000F0)
#define  KPHASE_kphase_64_kphase_in_me2_p24_mask                                 (0x0000000F)
#define  KPHASE_kphase_64_kphase_in_me2_p31(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_64_kphase_in_me2_p30(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_64_kphase_in_me2_p29(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_64_kphase_in_me2_p28(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_64_kphase_in_me2_p27(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_64_kphase_in_me2_p26(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_64_kphase_in_me2_p25(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_64_kphase_in_me2_p24(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_64_get_kphase_in_me2_p31(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_64_get_kphase_in_me2_p30(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_64_get_kphase_in_me2_p29(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_64_get_kphase_in_me2_p28(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_64_get_kphase_in_me2_p27(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_64_get_kphase_in_me2_p26(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_64_get_kphase_in_me2_p25(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_64_get_kphase_in_me2_p24(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_68                                                       0x1809D468
#define  KPHASE_kphase_68_reg_addr                                               "0xB809D468"
#define  KPHASE_kphase_68_reg                                                    0xB809D468
#define  KPHASE_kphase_68_inst_addr                                              "0x001A"
#define  set_KPHASE_kphase_68_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_68_reg)=data)
#define  get_KPHASE_kphase_68_reg                                                (*((volatile unsigned int*)KPHASE_kphase_68_reg))
#define  KPHASE_kphase_68_kphase_in_me2_p39_shift                                (28)
#define  KPHASE_kphase_68_kphase_in_me2_p38_shift                                (24)
#define  KPHASE_kphase_68_kphase_in_me2_p37_shift                                (20)
#define  KPHASE_kphase_68_kphase_in_me2_p36_shift                                (16)
#define  KPHASE_kphase_68_kphase_in_me2_p35_shift                                (12)
#define  KPHASE_kphase_68_kphase_in_me2_p34_shift                                (8)
#define  KPHASE_kphase_68_kphase_in_me2_p33_shift                                (4)
#define  KPHASE_kphase_68_kphase_in_me2_p32_shift                                (0)
#define  KPHASE_kphase_68_kphase_in_me2_p39_mask                                 (0xF0000000)
#define  KPHASE_kphase_68_kphase_in_me2_p38_mask                                 (0x0F000000)
#define  KPHASE_kphase_68_kphase_in_me2_p37_mask                                 (0x00F00000)
#define  KPHASE_kphase_68_kphase_in_me2_p36_mask                                 (0x000F0000)
#define  KPHASE_kphase_68_kphase_in_me2_p35_mask                                 (0x0000F000)
#define  KPHASE_kphase_68_kphase_in_me2_p34_mask                                 (0x00000F00)
#define  KPHASE_kphase_68_kphase_in_me2_p33_mask                                 (0x000000F0)
#define  KPHASE_kphase_68_kphase_in_me2_p32_mask                                 (0x0000000F)
#define  KPHASE_kphase_68_kphase_in_me2_p39(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_68_kphase_in_me2_p38(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_68_kphase_in_me2_p37(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_68_kphase_in_me2_p36(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_68_kphase_in_me2_p35(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_68_kphase_in_me2_p34(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_68_kphase_in_me2_p33(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_68_kphase_in_me2_p32(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_68_get_kphase_in_me2_p39(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_68_get_kphase_in_me2_p38(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_68_get_kphase_in_me2_p37(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_68_get_kphase_in_me2_p36(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_68_get_kphase_in_me2_p35(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_68_get_kphase_in_me2_p34(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_68_get_kphase_in_me2_p33(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_68_get_kphase_in_me2_p32(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_6C                                                       0x1809D46C
#define  KPHASE_kphase_6C_reg_addr                                               "0xB809D46C"
#define  KPHASE_kphase_6C_reg                                                    0xB809D46C
#define  KPHASE_kphase_6C_inst_addr                                              "0x001B"
#define  set_KPHASE_kphase_6C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_6C_reg)=data)
#define  get_KPHASE_kphase_6C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_6C_reg))
#define  KPHASE_kphase_6C_kphase_in_me2_p47_shift                                (28)
#define  KPHASE_kphase_6C_kphase_in_me2_p46_shift                                (24)
#define  KPHASE_kphase_6C_kphase_in_me2_p45_shift                                (20)
#define  KPHASE_kphase_6C_kphase_in_me2_p44_shift                                (16)
#define  KPHASE_kphase_6C_kphase_in_me2_p43_shift                                (12)
#define  KPHASE_kphase_6C_kphase_in_me2_p42_shift                                (8)
#define  KPHASE_kphase_6C_kphase_in_me2_p41_shift                                (4)
#define  KPHASE_kphase_6C_kphase_in_me2_p40_shift                                (0)
#define  KPHASE_kphase_6C_kphase_in_me2_p47_mask                                 (0xF0000000)
#define  KPHASE_kphase_6C_kphase_in_me2_p46_mask                                 (0x0F000000)
#define  KPHASE_kphase_6C_kphase_in_me2_p45_mask                                 (0x00F00000)
#define  KPHASE_kphase_6C_kphase_in_me2_p44_mask                                 (0x000F0000)
#define  KPHASE_kphase_6C_kphase_in_me2_p43_mask                                 (0x0000F000)
#define  KPHASE_kphase_6C_kphase_in_me2_p42_mask                                 (0x00000F00)
#define  KPHASE_kphase_6C_kphase_in_me2_p41_mask                                 (0x000000F0)
#define  KPHASE_kphase_6C_kphase_in_me2_p40_mask                                 (0x0000000F)
#define  KPHASE_kphase_6C_kphase_in_me2_p47(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_6C_kphase_in_me2_p46(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_6C_kphase_in_me2_p45(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_6C_kphase_in_me2_p44(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_6C_kphase_in_me2_p43(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_6C_kphase_in_me2_p42(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_6C_kphase_in_me2_p41(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_6C_kphase_in_me2_p40(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_6C_get_kphase_in_me2_p47(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_6C_get_kphase_in_me2_p46(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_6C_get_kphase_in_me2_p45(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_6C_get_kphase_in_me2_p44(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_6C_get_kphase_in_me2_p43(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_6C_get_kphase_in_me2_p42(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_6C_get_kphase_in_me2_p41(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_6C_get_kphase_in_me2_p40(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_70                                                       0x1809D470
#define  KPHASE_kphase_70_reg_addr                                               "0xB809D470"
#define  KPHASE_kphase_70_reg                                                    0xB809D470
#define  KPHASE_kphase_70_inst_addr                                              "0x001C"
#define  set_KPHASE_kphase_70_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_70_reg)=data)
#define  get_KPHASE_kphase_70_reg                                                (*((volatile unsigned int*)KPHASE_kphase_70_reg))
#define  KPHASE_kphase_70_kphase_in_me2_p55_shift                                (28)
#define  KPHASE_kphase_70_kphase_in_me2_p54_shift                                (24)
#define  KPHASE_kphase_70_kphase_in_me2_p53_shift                                (20)
#define  KPHASE_kphase_70_kphase_in_me2_p52_shift                                (16)
#define  KPHASE_kphase_70_kphase_in_me2_p51_shift                                (12)
#define  KPHASE_kphase_70_kphase_in_me2_p50_shift                                (8)
#define  KPHASE_kphase_70_kphase_in_me2_p49_shift                                (4)
#define  KPHASE_kphase_70_kphase_in_me2_p48_shift                                (0)
#define  KPHASE_kphase_70_kphase_in_me2_p55_mask                                 (0xF0000000)
#define  KPHASE_kphase_70_kphase_in_me2_p54_mask                                 (0x0F000000)
#define  KPHASE_kphase_70_kphase_in_me2_p53_mask                                 (0x00F00000)
#define  KPHASE_kphase_70_kphase_in_me2_p52_mask                                 (0x000F0000)
#define  KPHASE_kphase_70_kphase_in_me2_p51_mask                                 (0x0000F000)
#define  KPHASE_kphase_70_kphase_in_me2_p50_mask                                 (0x00000F00)
#define  KPHASE_kphase_70_kphase_in_me2_p49_mask                                 (0x000000F0)
#define  KPHASE_kphase_70_kphase_in_me2_p48_mask                                 (0x0000000F)
#define  KPHASE_kphase_70_kphase_in_me2_p55(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_70_kphase_in_me2_p54(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_70_kphase_in_me2_p53(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_70_kphase_in_me2_p52(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_70_kphase_in_me2_p51(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_70_kphase_in_me2_p50(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_70_kphase_in_me2_p49(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_70_kphase_in_me2_p48(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_70_get_kphase_in_me2_p55(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_70_get_kphase_in_me2_p54(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_70_get_kphase_in_me2_p53(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_70_get_kphase_in_me2_p52(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_70_get_kphase_in_me2_p51(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_70_get_kphase_in_me2_p50(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_70_get_kphase_in_me2_p49(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_70_get_kphase_in_me2_p48(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_74                                                       0x1809D474
#define  KPHASE_kphase_74_reg_addr                                               "0xB809D474"
#define  KPHASE_kphase_74_reg                                                    0xB809D474
#define  KPHASE_kphase_74_inst_addr                                              "0x001D"
#define  set_KPHASE_kphase_74_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_74_reg)=data)
#define  get_KPHASE_kphase_74_reg                                                (*((volatile unsigned int*)KPHASE_kphase_74_reg))
#define  KPHASE_kphase_74_kphase_in_me2_p63_shift                                (28)
#define  KPHASE_kphase_74_kphase_in_me2_p62_shift                                (24)
#define  KPHASE_kphase_74_kphase_in_me2_p61_shift                                (20)
#define  KPHASE_kphase_74_kphase_in_me2_p60_shift                                (16)
#define  KPHASE_kphase_74_kphase_in_me2_p59_shift                                (12)
#define  KPHASE_kphase_74_kphase_in_me2_p58_shift                                (8)
#define  KPHASE_kphase_74_kphase_in_me2_p57_shift                                (4)
#define  KPHASE_kphase_74_kphase_in_me2_p56_shift                                (0)
#define  KPHASE_kphase_74_kphase_in_me2_p63_mask                                 (0xF0000000)
#define  KPHASE_kphase_74_kphase_in_me2_p62_mask                                 (0x0F000000)
#define  KPHASE_kphase_74_kphase_in_me2_p61_mask                                 (0x00F00000)
#define  KPHASE_kphase_74_kphase_in_me2_p60_mask                                 (0x000F0000)
#define  KPHASE_kphase_74_kphase_in_me2_p59_mask                                 (0x0000F000)
#define  KPHASE_kphase_74_kphase_in_me2_p58_mask                                 (0x00000F00)
#define  KPHASE_kphase_74_kphase_in_me2_p57_mask                                 (0x000000F0)
#define  KPHASE_kphase_74_kphase_in_me2_p56_mask                                 (0x0000000F)
#define  KPHASE_kphase_74_kphase_in_me2_p63(data)                                (0xF0000000&((data)<<28))
#define  KPHASE_kphase_74_kphase_in_me2_p62(data)                                (0x0F000000&((data)<<24))
#define  KPHASE_kphase_74_kphase_in_me2_p61(data)                                (0x00F00000&((data)<<20))
#define  KPHASE_kphase_74_kphase_in_me2_p60(data)                                (0x000F0000&((data)<<16))
#define  KPHASE_kphase_74_kphase_in_me2_p59(data)                                (0x0000F000&((data)<<12))
#define  KPHASE_kphase_74_kphase_in_me2_p58(data)                                (0x00000F00&((data)<<8))
#define  KPHASE_kphase_74_kphase_in_me2_p57(data)                                (0x000000F0&((data)<<4))
#define  KPHASE_kphase_74_kphase_in_me2_p56(data)                                (0x0000000F&(data))
#define  KPHASE_kphase_74_get_kphase_in_me2_p63(data)                            ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_74_get_kphase_in_me2_p62(data)                            ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_74_get_kphase_in_me2_p61(data)                            ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_74_get_kphase_in_me2_p60(data)                            ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_74_get_kphase_in_me2_p59(data)                            ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_74_get_kphase_in_me2_p58(data)                            ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_74_get_kphase_in_me2_p57(data)                            ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_74_get_kphase_in_me2_p56(data)                            (0x0000000F&(data))

#define  KPHASE_kphase_78                                                       0x1809D478
#define  KPHASE_kphase_78_reg_addr                                               "0xB809D478"
#define  KPHASE_kphase_78_reg                                                    0xB809D478
#define  KPHASE_kphase_78_inst_addr                                              "0x001E"
#define  set_KPHASE_kphase_78_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_78_reg)=data)
#define  get_KPHASE_kphase_78_reg                                                (*((volatile unsigned int*)KPHASE_kphase_78_reg))
#define  KPHASE_kphase_78_kme_kphase_test1_shift                                 (31)
#define  KPHASE_kphase_78_kphase_dec_data_vs_clr_en_shift                        (30)
#define  KPHASE_kphase_78_kphase_lut_sel_latch_sel_shift                         (29)
#define  KPHASE_kphase_78_kphase_in_frame_hold_func_en_shift                     (25)
#define  KPHASE_kphase_78_kphase_force_me2_ppfv_buf_idx_shift                    (23)
#define  KPHASE_kphase_78_kphase_force_me2_ppfv_buf_idx_en_shift                 (22)
#define  KPHASE_kphase_78_kphase_force_me2_lbme_p_index_shift                    (19)
#define  KPHASE_kphase_78_kphase_force_me2_lbme_i_index_shift                    (16)
#define  KPHASE_kphase_78_kphase_force_me2_lbme_index_en_shift                   (15)
#define  KPHASE_kphase_78_kphase_in_me2_index_bsize_shift                        (11)
#define  KPHASE_kphase_78_kphase_in_me2_index_initial_shift                      (8)
#define  KPHASE_kphase_78_kphase_force_in_me2_index_shift                        (5)
#define  KPHASE_kphase_78_kphase_force_in_me2_index_en_shift                     (4)
#define  KPHASE_kphase_78_kphase_force_in_me2_offset_shift                       (1)
#define  KPHASE_kphase_78_kphase_force_in_me2_offset_en_shift                    (0)
#define  KPHASE_kphase_78_kme_kphase_test1_mask                                  (0x80000000)
#define  KPHASE_kphase_78_kphase_dec_data_vs_clr_en_mask                         (0x40000000)
#define  KPHASE_kphase_78_kphase_lut_sel_latch_sel_mask                          (0x20000000)
#define  KPHASE_kphase_78_kphase_in_frame_hold_func_en_mask                      (0x1E000000)
#define  KPHASE_kphase_78_kphase_force_me2_ppfv_buf_idx_mask                     (0x01800000)
#define  KPHASE_kphase_78_kphase_force_me2_ppfv_buf_idx_en_mask                  (0x00400000)
#define  KPHASE_kphase_78_kphase_force_me2_lbme_p_index_mask                     (0x00380000)
#define  KPHASE_kphase_78_kphase_force_me2_lbme_i_index_mask                     (0x00070000)
#define  KPHASE_kphase_78_kphase_force_me2_lbme_index_en_mask                    (0x00008000)
#define  KPHASE_kphase_78_kphase_in_me2_index_bsize_mask                         (0x00007800)
#define  KPHASE_kphase_78_kphase_in_me2_index_initial_mask                       (0x00000700)
#define  KPHASE_kphase_78_kphase_force_in_me2_index_mask                         (0x000000E0)
#define  KPHASE_kphase_78_kphase_force_in_me2_index_en_mask                      (0x00000010)
#define  KPHASE_kphase_78_kphase_force_in_me2_offset_mask                        (0x0000000E)
#define  KPHASE_kphase_78_kphase_force_in_me2_offset_en_mask                     (0x00000001)
#define  KPHASE_kphase_78_kme_kphase_test1(data)                                 (0x80000000&((data)<<31))
#define  KPHASE_kphase_78_kphase_dec_data_vs_clr_en(data)                        (0x40000000&((data)<<30))
#define  KPHASE_kphase_78_kphase_lut_sel_latch_sel(data)                         (0x20000000&((data)<<29))
#define  KPHASE_kphase_78_kphase_in_frame_hold_func_en(data)                     (0x1E000000&((data)<<25))
#define  KPHASE_kphase_78_kphase_force_me2_ppfv_buf_idx(data)                    (0x01800000&((data)<<23))
#define  KPHASE_kphase_78_kphase_force_me2_ppfv_buf_idx_en(data)                 (0x00400000&((data)<<22))
#define  KPHASE_kphase_78_kphase_force_me2_lbme_p_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_78_kphase_force_me2_lbme_i_index(data)                    (0x00070000&((data)<<16))
#define  KPHASE_kphase_78_kphase_force_me2_lbme_index_en(data)                   (0x00008000&((data)<<15))
#define  KPHASE_kphase_78_kphase_in_me2_index_bsize(data)                        (0x00007800&((data)<<11))
#define  KPHASE_kphase_78_kphase_in_me2_index_initial(data)                      (0x00000700&((data)<<8))
#define  KPHASE_kphase_78_kphase_force_in_me2_index(data)                        (0x000000E0&((data)<<5))
#define  KPHASE_kphase_78_kphase_force_in_me2_index_en(data)                     (0x00000010&((data)<<4))
#define  KPHASE_kphase_78_kphase_force_in_me2_offset(data)                       (0x0000000E&((data)<<1))
#define  KPHASE_kphase_78_kphase_force_in_me2_offset_en(data)                    (0x00000001&(data))
#define  KPHASE_kphase_78_get_kme_kphase_test1(data)                             ((0x80000000&(data))>>31)
#define  KPHASE_kphase_78_get_kphase_dec_data_vs_clr_en(data)                    ((0x40000000&(data))>>30)
#define  KPHASE_kphase_78_get_kphase_lut_sel_latch_sel(data)                     ((0x20000000&(data))>>29)
#define  KPHASE_kphase_78_get_kphase_in_frame_hold_func_en(data)                 ((0x1E000000&(data))>>25)
#define  KPHASE_kphase_78_get_kphase_force_me2_ppfv_buf_idx(data)                ((0x01800000&(data))>>23)
#define  KPHASE_kphase_78_get_kphase_force_me2_ppfv_buf_idx_en(data)             ((0x00400000&(data))>>22)
#define  KPHASE_kphase_78_get_kphase_force_me2_lbme_p_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_78_get_kphase_force_me2_lbme_i_index(data)                ((0x00070000&(data))>>16)
#define  KPHASE_kphase_78_get_kphase_force_me2_lbme_index_en(data)               ((0x00008000&(data))>>15)
#define  KPHASE_kphase_78_get_kphase_in_me2_index_bsize(data)                    ((0x00007800&(data))>>11)
#define  KPHASE_kphase_78_get_kphase_in_me2_index_initial(data)                  ((0x00000700&(data))>>8)
#define  KPHASE_kphase_78_get_kphase_force_in_me2_index(data)                    ((0x000000E0&(data))>>5)
#define  KPHASE_kphase_78_get_kphase_force_in_me2_index_en(data)                 ((0x00000010&(data))>>4)
#define  KPHASE_kphase_78_get_kphase_force_in_me2_offset(data)                   ((0x0000000E&(data))>>1)
#define  KPHASE_kphase_78_get_kphase_force_in_me2_offset_en(data)                (0x00000001&(data))

#define  KPHASE_kphase_7C                                                       0x1809D47C
#define  KPHASE_kphase_7C_reg_addr                                               "0xB809D47C"
#define  KPHASE_kphase_7C_reg                                                    0xB809D47C
#define  KPHASE_kphase_7C_inst_addr                                              "0x001F"
#define  set_KPHASE_kphase_7C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_7C_reg)=data)
#define  get_KPHASE_kphase_7C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_7C_reg))
#define  KPHASE_kphase_7C_lbmc_hf_idx_now_shift                                  (28)
#define  KPHASE_kphase_7C_lbmc_lf_idx_now_shift                                  (24)
#define  KPHASE_kphase_7C_kphase_lbmc_idx_mpa_en_shift                           (8)
#define  KPHASE_kphase_7C_kphase_lbmc_idx4_map_shift                             (4)
#define  KPHASE_kphase_7C_kphase_lbmc_idx3_map_shift                             (0)
#define  KPHASE_kphase_7C_lbmc_hf_idx_now_mask                                   (0x30000000)
#define  KPHASE_kphase_7C_lbmc_lf_idx_now_mask                                   (0x0F000000)
#define  KPHASE_kphase_7C_kphase_lbmc_idx_mpa_en_mask                            (0x00000100)
#define  KPHASE_kphase_7C_kphase_lbmc_idx4_map_mask                              (0x000000F0)
#define  KPHASE_kphase_7C_kphase_lbmc_idx3_map_mask                              (0x0000000F)
#define  KPHASE_kphase_7C_lbmc_hf_idx_now(data)                                  (0x30000000&((data)<<28))
#define  KPHASE_kphase_7C_lbmc_lf_idx_now(data)                                  (0x0F000000&((data)<<24))
#define  KPHASE_kphase_7C_kphase_lbmc_idx_mpa_en(data)                           (0x00000100&((data)<<8))
#define  KPHASE_kphase_7C_kphase_lbmc_idx4_map(data)                             (0x000000F0&((data)<<4))
#define  KPHASE_kphase_7C_kphase_lbmc_idx3_map(data)                             (0x0000000F&(data))
#define  KPHASE_kphase_7C_get_lbmc_hf_idx_now(data)                              ((0x30000000&(data))>>28)
#define  KPHASE_kphase_7C_get_lbmc_lf_idx_now(data)                              ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_7C_get_kphase_lbmc_idx_mpa_en(data)                       ((0x00000100&(data))>>8)
#define  KPHASE_kphase_7C_get_kphase_lbmc_idx4_map(data)                         ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_7C_get_kphase_lbmc_idx3_map(data)                         (0x0000000F&(data))

#define  KPHASE_kphase_8C                                                       0x1809D48C
#define  KPHASE_kphase_8C_reg_addr                                               "0xB809D48C"
#define  KPHASE_kphase_8C_reg                                                    0xB809D48C
#define  KPHASE_kphase_8C_inst_addr                                              "0x0020"
#define  set_KPHASE_kphase_8C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_8C_reg)=data)
#define  get_KPHASE_kphase_8C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_8C_reg))
#define  KPHASE_kphase_8C_lbme2_p_index_shift                                    (24)
#define  KPHASE_kphase_8C_lbme2_i_index_shift                                    (20)
#define  KPHASE_kphase_8C_lbme_p_index_shift                                     (8)
#define  KPHASE_kphase_8C_lbme_i_index_shift                                     (4)
#define  KPHASE_kphase_8C_in_me_index_shift                                      (0)
#define  KPHASE_kphase_8C_lbme2_p_index_mask                                     (0x07000000)
#define  KPHASE_kphase_8C_lbme2_i_index_mask                                     (0x00700000)
#define  KPHASE_kphase_8C_lbme_p_index_mask                                      (0x00000700)
#define  KPHASE_kphase_8C_lbme_i_index_mask                                      (0x00000070)
#define  KPHASE_kphase_8C_in_me_index_mask                                       (0x00000007)
#define  KPHASE_kphase_8C_lbme2_p_index(data)                                    (0x07000000&((data)<<24))
#define  KPHASE_kphase_8C_lbme2_i_index(data)                                    (0x00700000&((data)<<20))
#define  KPHASE_kphase_8C_lbme_p_index(data)                                     (0x00000700&((data)<<8))
#define  KPHASE_kphase_8C_lbme_i_index(data)                                     (0x00000070&((data)<<4))
#define  KPHASE_kphase_8C_in_me_index(data)                                      (0x00000007&(data))
#define  KPHASE_kphase_8C_get_lbme2_p_index(data)                                ((0x07000000&(data))>>24)
#define  KPHASE_kphase_8C_get_lbme2_i_index(data)                                ((0x00700000&(data))>>20)
#define  KPHASE_kphase_8C_get_lbme_p_index(data)                                 ((0x00000700&(data))>>8)
#define  KPHASE_kphase_8C_get_lbme_i_index(data)                                 ((0x00000070&(data))>>4)
#define  KPHASE_kphase_8C_get_in_me_index(data)                                  (0x00000007&(data))

#define  KPHASE_kphase_90                                                       0x1809D490
#define  KPHASE_kphase_90_reg_addr                                               "0xB809D490"
#define  KPHASE_kphase_90_reg                                                    0xB809D490
#define  KPHASE_kphase_90_inst_addr                                              "0x0021"
#define  set_KPHASE_kphase_90_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_90_reg)=data)
#define  get_KPHASE_kphase_90_reg                                                (*((volatile unsigned int*)KPHASE_kphase_90_reg))
#define  KPHASE_kphase_90_regr_in_film_phase_shift                               (12)
#define  KPHASE_kphase_90_lbmc_p_index_shift                                     (8)
#define  KPHASE_kphase_90_lbmc_i_index_shift                                     (4)
#define  KPHASE_kphase_90_in_mc_index_shift                                      (0)
#define  KPHASE_kphase_90_regr_in_film_phase_mask                                (0x0003F000)
#define  KPHASE_kphase_90_lbmc_p_index_mask                                      (0x00000700)
#define  KPHASE_kphase_90_lbmc_i_index_mask                                      (0x00000070)
#define  KPHASE_kphase_90_in_mc_index_mask                                       (0x00000007)
#define  KPHASE_kphase_90_regr_in_film_phase(data)                               (0x0003F000&((data)<<12))
#define  KPHASE_kphase_90_lbmc_p_index(data)                                     (0x00000700&((data)<<8))
#define  KPHASE_kphase_90_lbmc_i_index(data)                                     (0x00000070&((data)<<4))
#define  KPHASE_kphase_90_in_mc_index(data)                                      (0x00000007&(data))
#define  KPHASE_kphase_90_get_regr_in_film_phase(data)                           ((0x0003F000&(data))>>12)
#define  KPHASE_kphase_90_get_lbmc_p_index(data)                                 ((0x00000700&(data))>>8)
#define  KPHASE_kphase_90_get_lbmc_i_index(data)                                 ((0x00000070&(data))>>4)
#define  KPHASE_kphase_90_get_in_mc_index(data)                                  (0x00000007&(data))

#define  KPHASE_kphase_94                                                       0x1809D494
#define  KPHASE_kphase_94_reg_addr                                               "0xB809D494"
#define  KPHASE_kphase_94_reg                                                    0xB809D494
#define  KPHASE_kphase_94_inst_addr                                              "0x0022"
#define  set_KPHASE_kphase_94_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_94_reg)=data)
#define  get_KPHASE_kphase_94_reg                                                (*((volatile unsigned int*)KPHASE_kphase_94_reg))
#define  KPHASE_kphase_94_regr_kphase_g7_in_phase_shift                          (28)
#define  KPHASE_kphase_94_regr_kphase_g6_in_phase_shift                          (24)
#define  KPHASE_kphase_94_regr_kphase_g5_in_phase_shift                          (20)
#define  KPHASE_kphase_94_regr_kphase_g4_in_phase_shift                          (16)
#define  KPHASE_kphase_94_regr_kphase_g3_in_phase_shift                          (12)
#define  KPHASE_kphase_94_regr_kphase_g2_in_phase_shift                          (8)
#define  KPHASE_kphase_94_regr_kphase_g1_in_phase_shift                          (4)
#define  KPHASE_kphase_94_regr_kphase_g0_in_phase_shift                          (0)
#define  KPHASE_kphase_94_regr_kphase_g7_in_phase_mask                           (0xF0000000)
#define  KPHASE_kphase_94_regr_kphase_g6_in_phase_mask                           (0x0F000000)
#define  KPHASE_kphase_94_regr_kphase_g5_in_phase_mask                           (0x00F00000)
#define  KPHASE_kphase_94_regr_kphase_g4_in_phase_mask                           (0x000F0000)
#define  KPHASE_kphase_94_regr_kphase_g3_in_phase_mask                           (0x0000F000)
#define  KPHASE_kphase_94_regr_kphase_g2_in_phase_mask                           (0x00000F00)
#define  KPHASE_kphase_94_regr_kphase_g1_in_phase_mask                           (0x000000F0)
#define  KPHASE_kphase_94_regr_kphase_g0_in_phase_mask                           (0x0000000F)
#define  KPHASE_kphase_94_regr_kphase_g7_in_phase(data)                          (0xF0000000&((data)<<28))
#define  KPHASE_kphase_94_regr_kphase_g6_in_phase(data)                          (0x0F000000&((data)<<24))
#define  KPHASE_kphase_94_regr_kphase_g5_in_phase(data)                          (0x00F00000&((data)<<20))
#define  KPHASE_kphase_94_regr_kphase_g4_in_phase(data)                          (0x000F0000&((data)<<16))
#define  KPHASE_kphase_94_regr_kphase_g3_in_phase(data)                          (0x0000F000&((data)<<12))
#define  KPHASE_kphase_94_regr_kphase_g2_in_phase(data)                          (0x00000F00&((data)<<8))
#define  KPHASE_kphase_94_regr_kphase_g1_in_phase(data)                          (0x000000F0&((data)<<4))
#define  KPHASE_kphase_94_regr_kphase_g0_in_phase(data)                          (0x0000000F&(data))
#define  KPHASE_kphase_94_get_regr_kphase_g7_in_phase(data)                      ((0xF0000000&(data))>>28)
#define  KPHASE_kphase_94_get_regr_kphase_g6_in_phase(data)                      ((0x0F000000&(data))>>24)
#define  KPHASE_kphase_94_get_regr_kphase_g5_in_phase(data)                      ((0x00F00000&(data))>>20)
#define  KPHASE_kphase_94_get_regr_kphase_g4_in_phase(data)                      ((0x000F0000&(data))>>16)
#define  KPHASE_kphase_94_get_regr_kphase_g3_in_phase(data)                      ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_94_get_regr_kphase_g2_in_phase(data)                      ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_94_get_regr_kphase_g1_in_phase(data)                      ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_94_get_regr_kphase_g0_in_phase(data)                      (0x0000000F&(data))

#define  KPHASE_kphase_98                                                       0x1809D498
#define  KPHASE_kphase_98_reg_addr                                               "0xB809D498"
#define  KPHASE_kphase_98_reg                                                    0xB809D498
#define  KPHASE_kphase_98_inst_addr                                              "0x0023"
#define  set_KPHASE_kphase_98_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_98_reg)=data)
#define  get_KPHASE_kphase_98_reg                                                (*((volatile unsigned int*)KPHASE_kphase_98_reg))
#define  KPHASE_kphase_98_regr_kphase_g11_in_phase_shift                         (12)
#define  KPHASE_kphase_98_regr_kphase_g10_in_phase_shift                         (8)
#define  KPHASE_kphase_98_regr_kphase_g9_in_phase_shift                          (4)
#define  KPHASE_kphase_98_regr_kphase_g8_in_phase_shift                          (0)
#define  KPHASE_kphase_98_regr_kphase_g11_in_phase_mask                          (0x0000F000)
#define  KPHASE_kphase_98_regr_kphase_g10_in_phase_mask                          (0x00000F00)
#define  KPHASE_kphase_98_regr_kphase_g9_in_phase_mask                           (0x000000F0)
#define  KPHASE_kphase_98_regr_kphase_g8_in_phase_mask                           (0x0000000F)
#define  KPHASE_kphase_98_regr_kphase_g11_in_phase(data)                         (0x0000F000&((data)<<12))
#define  KPHASE_kphase_98_regr_kphase_g10_in_phase(data)                         (0x00000F00&((data)<<8))
#define  KPHASE_kphase_98_regr_kphase_g9_in_phase(data)                          (0x000000F0&((data)<<4))
#define  KPHASE_kphase_98_regr_kphase_g8_in_phase(data)                          (0x0000000F&(data))
#define  KPHASE_kphase_98_get_regr_kphase_g11_in_phase(data)                     ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_98_get_regr_kphase_g10_in_phase(data)                     ((0x00000F00&(data))>>8)
#define  KPHASE_kphase_98_get_regr_kphase_g9_in_phase(data)                      ((0x000000F0&(data))>>4)
#define  KPHASE_kphase_98_get_regr_kphase_g8_in_phase(data)                      (0x0000000F&(data))

#define  KPHASE_kphase_9C                                                       0x1809D49C
#define  KPHASE_kphase_9C_reg_addr                                               "0xB809D49C"
#define  KPHASE_kphase_9C_reg                                                    0xB809D49C
#define  KPHASE_kphase_9C_inst_addr                                              "0x0024"
#define  set_KPHASE_kphase_9C_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_9C_reg)=data)
#define  get_KPHASE_kphase_9C_reg                                                (*((volatile unsigned int*)KPHASE_kphase_9C_reg))
#define  KPHASE_kphase_9C_regr_kphase_in_lr_shift                                (23)
#define  KPHASE_kphase_9C_regr_kphase_dec_no_match_shift                         (22)
#define  KPHASE_kphase_9C_regr_kphase_in_film_phase_shift                        (16)
#define  KPHASE_kphase_9C_regr_kphase_in_phase_shift                             (12)
#define  KPHASE_kphase_9C_regr_kphase_out_film_phase_shift                       (6)
#define  KPHASE_kphase_9C_regr_kphase_out_phase_shift                            (0)
#define  KPHASE_kphase_9C_regr_kphase_in_lr_mask                                 (0x00800000)
#define  KPHASE_kphase_9C_regr_kphase_dec_no_match_mask                          (0x00400000)
#define  KPHASE_kphase_9C_regr_kphase_in_film_phase_mask                         (0x003F0000)
#define  KPHASE_kphase_9C_regr_kphase_in_phase_mask                              (0x0000F000)
#define  KPHASE_kphase_9C_regr_kphase_out_film_phase_mask                        (0x00000FC0)
#define  KPHASE_kphase_9C_regr_kphase_out_phase_mask                             (0x0000003F)
#define  KPHASE_kphase_9C_regr_kphase_in_lr(data)                                (0x00800000&((data)<<23))
#define  KPHASE_kphase_9C_regr_kphase_dec_no_match(data)                         (0x00400000&((data)<<22))
#define  KPHASE_kphase_9C_regr_kphase_in_film_phase(data)                        (0x003F0000&((data)<<16))
#define  KPHASE_kphase_9C_regr_kphase_in_phase(data)                             (0x0000F000&((data)<<12))
#define  KPHASE_kphase_9C_regr_kphase_out_film_phase(data)                       (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_9C_regr_kphase_out_phase(data)                            (0x0000003F&(data))
#define  KPHASE_kphase_9C_get_regr_kphase_in_lr(data)                            ((0x00800000&(data))>>23)
#define  KPHASE_kphase_9C_get_regr_kphase_dec_no_match(data)                     ((0x00400000&(data))>>22)
#define  KPHASE_kphase_9C_get_regr_kphase_in_film_phase(data)                    ((0x003F0000&(data))>>16)
#define  KPHASE_kphase_9C_get_regr_kphase_in_phase(data)                         ((0x0000F000&(data))>>12)
#define  KPHASE_kphase_9C_get_regr_kphase_out_film_phase(data)                   ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_9C_get_regr_kphase_out_phase(data)                        (0x0000003F&(data))

#define  KPHASE_kphase_A0                                                       0x1809D4A0
#define  KPHASE_kphase_A0_reg_addr                                               "0xB809D4A0"
#define  KPHASE_kphase_A0_reg                                                    0xB809D4A0
#define  KPHASE_kphase_A0_inst_addr                                              "0x0025"
#define  set_KPHASE_kphase_A0_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_A0_reg)=data)
#define  get_KPHASE_kphase_A0_reg                                                (*((volatile unsigned int*)KPHASE_kphase_A0_reg))
#define  KPHASE_kphase_A0_regr_kphase_g0_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_A0_regr_kphase_g0_me2_phase_shift                         (25)
#define  KPHASE_kphase_A0_regr_kphase_g0_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_A0_regr_kphase_g0_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_A0_regr_kphase_g0_in_final_phase_shift                    (18)
#define  KPHASE_kphase_A0_regr_kphase_g0_in_mc_index_shift                       (15)
#define  KPHASE_kphase_A0_regr_kphase_g0_in_me_index_shift                       (12)
#define  KPHASE_kphase_A0_regr_kphase_g0_out_film_phase_shift                    (6)
#define  KPHASE_kphase_A0_regr_kphase_g0_out_phase_shift                         (0)
#define  KPHASE_kphase_A0_regr_kphase_g0_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_A0_regr_kphase_g0_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_A0_regr_kphase_g0_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_A0_regr_kphase_g0_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_A0_regr_kphase_g0_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_A0_regr_kphase_g0_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_A0_regr_kphase_g0_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_A0_regr_kphase_g0_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_A0_regr_kphase_g0_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_A0_regr_kphase_g0_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_A0_regr_kphase_g0_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_A0_regr_kphase_g0_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_A0_regr_kphase_g0_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_A0_regr_kphase_g0_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_A0_regr_kphase_g0_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_A0_regr_kphase_g0_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_A0_regr_kphase_g0_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_A0_regr_kphase_g0_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_A0_get_regr_kphase_g0_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_A0_get_regr_kphase_g0_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_A4                                                       0x1809D4A4
#define  KPHASE_kphase_A4_reg_addr                                               "0xB809D4A4"
#define  KPHASE_kphase_A4_reg                                                    0xB809D4A4
#define  KPHASE_kphase_A4_inst_addr                                              "0x0026"
#define  set_KPHASE_kphase_A4_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_A4_reg)=data)
#define  get_KPHASE_kphase_A4_reg                                                (*((volatile unsigned int*)KPHASE_kphase_A4_reg))
#define  KPHASE_kphase_A4_regr_kphase_g0_in_lr_shift                             (30)
#define  KPHASE_kphase_A4_regr_kphase_g0_me_last_phase_shift                     (29)
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_A4_regr_kphase_g0_osd_lr_shift                            (25)
#define  KPHASE_kphase_A4_regr_kphase_g0_out_lr_shift                            (24)
#define  KPHASE_kphase_A4_regr_kphase_g0_me_lr_shift                             (23)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_lr_shift                             (22)
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_A4_regr_kphase_g0_in_me2_index_shift                      (13)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_phase_shift                          (6)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_A4_regr_kphase_g0_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_A4_regr_kphase_g0_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_A4_regr_kphase_g0_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_A4_regr_kphase_g0_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_A4_regr_kphase_g0_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_A4_regr_kphase_g0_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_A4_regr_kphase_g0_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_A4_regr_kphase_g0_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_A4_regr_kphase_g0_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_A4_regr_kphase_g0_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_A4_regr_kphase_g0_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_A4_regr_kphase_g0_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_A4_regr_kphase_g0_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_A4_regr_kphase_g0_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_A4_get_regr_kphase_g0_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_A4_get_regr_kphase_g0_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_A8                                                       0x1809D4A8
#define  KPHASE_kphase_A8_reg_addr                                               "0xB809D4A8"
#define  KPHASE_kphase_A8_reg                                                    0xB809D4A8
#define  KPHASE_kphase_A8_inst_addr                                              "0x0027"
#define  set_KPHASE_kphase_A8_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_A8_reg)=data)
#define  get_KPHASE_kphase_A8_reg                                                (*((volatile unsigned int*)KPHASE_kphase_A8_reg))
#define  KPHASE_kphase_A8_regr_kphase_g1_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_A8_regr_kphase_g1_me2_phase_shift                         (25)
#define  KPHASE_kphase_A8_regr_kphase_g1_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_A8_regr_kphase_g1_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_A8_regr_kphase_g1_in_final_phase_shift                    (18)
#define  KPHASE_kphase_A8_regr_kphase_g1_in_mc_index_shift                       (15)
#define  KPHASE_kphase_A8_regr_kphase_g1_in_me_index_shift                       (12)
#define  KPHASE_kphase_A8_regr_kphase_g1_out_film_phase_shift                    (6)
#define  KPHASE_kphase_A8_regr_kphase_g1_out_phase_shift                         (0)
#define  KPHASE_kphase_A8_regr_kphase_g1_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_A8_regr_kphase_g1_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_A8_regr_kphase_g1_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_A8_regr_kphase_g1_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_A8_regr_kphase_g1_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_A8_regr_kphase_g1_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_A8_regr_kphase_g1_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_A8_regr_kphase_g1_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_A8_regr_kphase_g1_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_A8_regr_kphase_g1_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_A8_regr_kphase_g1_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_A8_regr_kphase_g1_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_A8_regr_kphase_g1_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_A8_regr_kphase_g1_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_A8_regr_kphase_g1_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_A8_regr_kphase_g1_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_A8_regr_kphase_g1_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_A8_regr_kphase_g1_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_A8_get_regr_kphase_g1_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_A8_get_regr_kphase_g1_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_AC                                                       0x1809D4AC
#define  KPHASE_kphase_AC_reg_addr                                               "0xB809D4AC"
#define  KPHASE_kphase_AC_reg                                                    0xB809D4AC
#define  KPHASE_kphase_AC_inst_addr                                              "0x0028"
#define  set_KPHASE_kphase_AC_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_AC_reg)=data)
#define  get_KPHASE_kphase_AC_reg                                                (*((volatile unsigned int*)KPHASE_kphase_AC_reg))
#define  KPHASE_kphase_AC_regr_kphase_g1_in_lr_shift                             (30)
#define  KPHASE_kphase_AC_regr_kphase_g1_me_last_phase_shift                     (29)
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_AC_regr_kphase_g1_osd_lr_shift                            (25)
#define  KPHASE_kphase_AC_regr_kphase_g1_out_lr_shift                            (24)
#define  KPHASE_kphase_AC_regr_kphase_g1_me_lr_shift                             (23)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_lr_shift                             (22)
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_AC_regr_kphase_g1_in_me2_index_shift                      (13)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_phase_shift                          (6)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_AC_regr_kphase_g1_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_AC_regr_kphase_g1_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_AC_regr_kphase_g1_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_AC_regr_kphase_g1_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_AC_regr_kphase_g1_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_AC_regr_kphase_g1_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_AC_regr_kphase_g1_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_AC_regr_kphase_g1_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_AC_regr_kphase_g1_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_AC_regr_kphase_g1_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_AC_regr_kphase_g1_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_AC_regr_kphase_g1_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_AC_regr_kphase_g1_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_AC_regr_kphase_g1_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_AC_get_regr_kphase_g1_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_AC_get_regr_kphase_g1_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_B0                                                       0x1809D4B0
#define  KPHASE_kphase_B0_reg_addr                                               "0xB809D4B0"
#define  KPHASE_kphase_B0_reg                                                    0xB809D4B0
#define  KPHASE_kphase_B0_inst_addr                                              "0x0029"
#define  set_KPHASE_kphase_B0_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_B0_reg)=data)
#define  get_KPHASE_kphase_B0_reg                                                (*((volatile unsigned int*)KPHASE_kphase_B0_reg))
#define  KPHASE_kphase_B0_regr_kphase_g2_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_B0_regr_kphase_g2_me2_phase_shift                         (25)
#define  KPHASE_kphase_B0_regr_kphase_g2_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_B0_regr_kphase_g2_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_B0_regr_kphase_g2_in_final_phase_shift                    (18)
#define  KPHASE_kphase_B0_regr_kphase_g2_in_mc_index_shift                       (15)
#define  KPHASE_kphase_B0_regr_kphase_g2_in_me_index_shift                       (12)
#define  KPHASE_kphase_B0_regr_kphase_g2_out_film_phase_shift                    (6)
#define  KPHASE_kphase_B0_regr_kphase_g2_out_phase_shift                         (0)
#define  KPHASE_kphase_B0_regr_kphase_g2_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_B0_regr_kphase_g2_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_B0_regr_kphase_g2_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_B0_regr_kphase_g2_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_B0_regr_kphase_g2_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_B0_regr_kphase_g2_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_B0_regr_kphase_g2_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_B0_regr_kphase_g2_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_B0_regr_kphase_g2_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_B0_regr_kphase_g2_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_B0_regr_kphase_g2_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_B0_regr_kphase_g2_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_B0_regr_kphase_g2_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_B0_regr_kphase_g2_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_B0_regr_kphase_g2_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_B0_regr_kphase_g2_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_B0_regr_kphase_g2_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_B0_regr_kphase_g2_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_B0_get_regr_kphase_g2_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_B0_get_regr_kphase_g2_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_B4                                                       0x1809D4B4
#define  KPHASE_kphase_B4_reg_addr                                               "0xB809D4B4"
#define  KPHASE_kphase_B4_reg                                                    0xB809D4B4
#define  KPHASE_kphase_B4_inst_addr                                              "0x002A"
#define  set_KPHASE_kphase_B4_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_B4_reg)=data)
#define  get_KPHASE_kphase_B4_reg                                                (*((volatile unsigned int*)KPHASE_kphase_B4_reg))
#define  KPHASE_kphase_B4_regr_kphase_g2_in_lr_shift                             (30)
#define  KPHASE_kphase_B4_regr_kphase_g2_me_last_phase_shift                     (29)
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_B4_regr_kphase_g2_osd_lr_shift                            (25)
#define  KPHASE_kphase_B4_regr_kphase_g2_out_lr_shift                            (24)
#define  KPHASE_kphase_B4_regr_kphase_g2_me_lr_shift                             (23)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_lr_shift                             (22)
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_B4_regr_kphase_g2_in_me2_index_shift                      (13)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_phase_shift                          (6)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_B4_regr_kphase_g2_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_B4_regr_kphase_g2_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_B4_regr_kphase_g2_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_B4_regr_kphase_g2_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_B4_regr_kphase_g2_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_B4_regr_kphase_g2_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_B4_regr_kphase_g2_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_B4_regr_kphase_g2_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_B4_regr_kphase_g2_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_B4_regr_kphase_g2_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_B4_regr_kphase_g2_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_B4_regr_kphase_g2_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_B4_regr_kphase_g2_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_B4_regr_kphase_g2_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_B4_get_regr_kphase_g2_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_B4_get_regr_kphase_g2_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_B8                                                       0x1809D4B8
#define  KPHASE_kphase_B8_reg_addr                                               "0xB809D4B8"
#define  KPHASE_kphase_B8_reg                                                    0xB809D4B8
#define  KPHASE_kphase_B8_inst_addr                                              "0x002B"
#define  set_KPHASE_kphase_B8_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_B8_reg)=data)
#define  get_KPHASE_kphase_B8_reg                                                (*((volatile unsigned int*)KPHASE_kphase_B8_reg))
#define  KPHASE_kphase_B8_regr_kphase_g3_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_B8_regr_kphase_g3_me2_phase_shift                         (25)
#define  KPHASE_kphase_B8_regr_kphase_g3_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_B8_regr_kphase_g3_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_B8_regr_kphase_g3_in_final_phase_shift                    (18)
#define  KPHASE_kphase_B8_regr_kphase_g3_in_mc_index_shift                       (15)
#define  KPHASE_kphase_B8_regr_kphase_g3_in_me_index_shift                       (12)
#define  KPHASE_kphase_B8_regr_kphase_g3_out_film_phase_shift                    (6)
#define  KPHASE_kphase_B8_regr_kphase_g3_out_phase_shift                         (0)
#define  KPHASE_kphase_B8_regr_kphase_g3_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_B8_regr_kphase_g3_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_B8_regr_kphase_g3_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_B8_regr_kphase_g3_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_B8_regr_kphase_g3_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_B8_regr_kphase_g3_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_B8_regr_kphase_g3_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_B8_regr_kphase_g3_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_B8_regr_kphase_g3_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_B8_regr_kphase_g3_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_B8_regr_kphase_g3_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_B8_regr_kphase_g3_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_B8_regr_kphase_g3_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_B8_regr_kphase_g3_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_B8_regr_kphase_g3_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_B8_regr_kphase_g3_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_B8_regr_kphase_g3_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_B8_regr_kphase_g3_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_B8_get_regr_kphase_g3_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_B8_get_regr_kphase_g3_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_BC                                                       0x1809D4BC
#define  KPHASE_kphase_BC_reg_addr                                               "0xB809D4BC"
#define  KPHASE_kphase_BC_reg                                                    0xB809D4BC
#define  KPHASE_kphase_BC_inst_addr                                              "0x002C"
#define  set_KPHASE_kphase_BC_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_BC_reg)=data)
#define  get_KPHASE_kphase_BC_reg                                                (*((volatile unsigned int*)KPHASE_kphase_BC_reg))
#define  KPHASE_kphase_BC_regr_kphase_g3_in_lr_shift                             (30)
#define  KPHASE_kphase_BC_regr_kphase_g3_me_last_phase_shift                     (29)
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_BC_regr_kphase_g3_osd_lr_shift                            (25)
#define  KPHASE_kphase_BC_regr_kphase_g3_out_lr_shift                            (24)
#define  KPHASE_kphase_BC_regr_kphase_g3_me_lr_shift                             (23)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_lr_shift                             (22)
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_BC_regr_kphase_g3_in_me2_index_shift                      (13)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_phase_shift                          (6)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_BC_regr_kphase_g3_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_BC_regr_kphase_g3_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_BC_regr_kphase_g3_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_BC_regr_kphase_g3_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_BC_regr_kphase_g3_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_BC_regr_kphase_g3_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_BC_regr_kphase_g3_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_BC_regr_kphase_g3_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_BC_regr_kphase_g3_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_BC_regr_kphase_g3_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_BC_regr_kphase_g3_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_BC_regr_kphase_g3_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_BC_regr_kphase_g3_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_BC_regr_kphase_g3_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_BC_get_regr_kphase_g3_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_BC_get_regr_kphase_g3_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_C0                                                       0x1809D4C0
#define  KPHASE_kphase_C0_reg_addr                                               "0xB809D4C0"
#define  KPHASE_kphase_C0_reg                                                    0xB809D4C0
#define  KPHASE_kphase_C0_inst_addr                                              "0x002D"
#define  set_KPHASE_kphase_C0_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_C0_reg)=data)
#define  get_KPHASE_kphase_C0_reg                                                (*((volatile unsigned int*)KPHASE_kphase_C0_reg))
#define  KPHASE_kphase_C0_regr_kphase_g4_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_C0_regr_kphase_g4_me2_phase_shift                         (25)
#define  KPHASE_kphase_C0_regr_kphase_g4_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_C0_regr_kphase_g4_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_C0_regr_kphase_g4_in_final_phase_shift                    (18)
#define  KPHASE_kphase_C0_regr_kphase_g4_in_mc_index_shift                       (15)
#define  KPHASE_kphase_C0_regr_kphase_g4_in_me_index_shift                       (12)
#define  KPHASE_kphase_C0_regr_kphase_g4_out_film_phase_shift                    (6)
#define  KPHASE_kphase_C0_regr_kphase_g4_out_phase_shift                         (0)
#define  KPHASE_kphase_C0_regr_kphase_g4_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_C0_regr_kphase_g4_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_C0_regr_kphase_g4_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_C0_regr_kphase_g4_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_C0_regr_kphase_g4_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_C0_regr_kphase_g4_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_C0_regr_kphase_g4_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_C0_regr_kphase_g4_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_C0_regr_kphase_g4_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_C0_regr_kphase_g4_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_C0_regr_kphase_g4_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_C0_regr_kphase_g4_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_C0_regr_kphase_g4_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_C0_regr_kphase_g4_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_C0_regr_kphase_g4_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_C0_regr_kphase_g4_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_C0_regr_kphase_g4_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_C0_regr_kphase_g4_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_C0_get_regr_kphase_g4_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_C0_get_regr_kphase_g4_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_C4                                                       0x1809D4C4
#define  KPHASE_kphase_C4_reg_addr                                               "0xB809D4C4"
#define  KPHASE_kphase_C4_reg                                                    0xB809D4C4
#define  KPHASE_kphase_C4_inst_addr                                              "0x002E"
#define  set_KPHASE_kphase_C4_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_C4_reg)=data)
#define  get_KPHASE_kphase_C4_reg                                                (*((volatile unsigned int*)KPHASE_kphase_C4_reg))
#define  KPHASE_kphase_C4_regr_kphase_g4_in_lr_shift                             (30)
#define  KPHASE_kphase_C4_regr_kphase_g4_me_last_phase_shift                     (29)
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_C4_regr_kphase_g4_osd_lr_shift                            (25)
#define  KPHASE_kphase_C4_regr_kphase_g4_out_lr_shift                            (24)
#define  KPHASE_kphase_C4_regr_kphase_g4_me_lr_shift                             (23)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_lr_shift                             (22)
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_C4_regr_kphase_g4_in_me2_index_shift                      (13)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_phase_shift                          (6)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_C4_regr_kphase_g4_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_C4_regr_kphase_g4_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_C4_regr_kphase_g4_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_C4_regr_kphase_g4_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_C4_regr_kphase_g4_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_C4_regr_kphase_g4_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_C4_regr_kphase_g4_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_C4_regr_kphase_g4_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_C4_regr_kphase_g4_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_C4_regr_kphase_g4_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_C4_regr_kphase_g4_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_C4_regr_kphase_g4_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_C4_regr_kphase_g4_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_C4_regr_kphase_g4_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_C4_get_regr_kphase_g4_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_C4_get_regr_kphase_g4_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_C8                                                       0x1809D4C8
#define  KPHASE_kphase_C8_reg_addr                                               "0xB809D4C8"
#define  KPHASE_kphase_C8_reg                                                    0xB809D4C8
#define  KPHASE_kphase_C8_inst_addr                                              "0x002F"
#define  set_KPHASE_kphase_C8_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_C8_reg)=data)
#define  get_KPHASE_kphase_C8_reg                                                (*((volatile unsigned int*)KPHASE_kphase_C8_reg))
#define  KPHASE_kphase_C8_regr_kphase_g5_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_C8_regr_kphase_g5_me2_phase_shift                         (25)
#define  KPHASE_kphase_C8_regr_kphase_g5_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_C8_regr_kphase_g5_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_C8_regr_kphase_g5_in_final_phase_shift                    (18)
#define  KPHASE_kphase_C8_regr_kphase_g5_in_mc_index_shift                       (15)
#define  KPHASE_kphase_C8_regr_kphase_g5_in_me_index_shift                       (12)
#define  KPHASE_kphase_C8_regr_kphase_g5_out_film_phase_shift                    (6)
#define  KPHASE_kphase_C8_regr_kphase_g5_out_phase_shift                         (0)
#define  KPHASE_kphase_C8_regr_kphase_g5_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_C8_regr_kphase_g5_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_C8_regr_kphase_g5_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_C8_regr_kphase_g5_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_C8_regr_kphase_g5_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_C8_regr_kphase_g5_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_C8_regr_kphase_g5_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_C8_regr_kphase_g5_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_C8_regr_kphase_g5_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_C8_regr_kphase_g5_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_C8_regr_kphase_g5_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_C8_regr_kphase_g5_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_C8_regr_kphase_g5_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_C8_regr_kphase_g5_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_C8_regr_kphase_g5_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_C8_regr_kphase_g5_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_C8_regr_kphase_g5_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_C8_regr_kphase_g5_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_C8_get_regr_kphase_g5_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_C8_get_regr_kphase_g5_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_CC                                                       0x1809D4CC
#define  KPHASE_kphase_CC_reg_addr                                               "0xB809D4CC"
#define  KPHASE_kphase_CC_reg                                                    0xB809D4CC
#define  KPHASE_kphase_CC_inst_addr                                              "0x0030"
#define  set_KPHASE_kphase_CC_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_CC_reg)=data)
#define  get_KPHASE_kphase_CC_reg                                                (*((volatile unsigned int*)KPHASE_kphase_CC_reg))
#define  KPHASE_kphase_CC_regr_kphase_g5_in_lr_shift                             (30)
#define  KPHASE_kphase_CC_regr_kphase_g5_me_last_phase_shift                     (29)
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_CC_regr_kphase_g5_osd_lr_shift                            (25)
#define  KPHASE_kphase_CC_regr_kphase_g5_out_lr_shift                            (24)
#define  KPHASE_kphase_CC_regr_kphase_g5_me_lr_shift                             (23)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_lr_shift                             (22)
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_CC_regr_kphase_g5_in_me2_index_shift                      (13)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_phase_shift                          (6)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_CC_regr_kphase_g5_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_CC_regr_kphase_g5_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_CC_regr_kphase_g5_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_CC_regr_kphase_g5_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_CC_regr_kphase_g5_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_CC_regr_kphase_g5_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_CC_regr_kphase_g5_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_CC_regr_kphase_g5_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_CC_regr_kphase_g5_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_CC_regr_kphase_g5_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_CC_regr_kphase_g5_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_CC_regr_kphase_g5_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_CC_regr_kphase_g5_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_CC_regr_kphase_g5_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_CC_get_regr_kphase_g5_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_CC_get_regr_kphase_g5_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_D0                                                       0x1809D4D0
#define  KPHASE_kphase_D0_reg_addr                                               "0xB809D4D0"
#define  KPHASE_kphase_D0_reg                                                    0xB809D4D0
#define  KPHASE_kphase_D0_inst_addr                                              "0x0031"
#define  set_KPHASE_kphase_D0_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_D0_reg)=data)
#define  get_KPHASE_kphase_D0_reg                                                (*((volatile unsigned int*)KPHASE_kphase_D0_reg))
#define  KPHASE_kphase_D0_regr_kphase_g6_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_D0_regr_kphase_g6_me2_phase_shift                         (25)
#define  KPHASE_kphase_D0_regr_kphase_g6_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_D0_regr_kphase_g6_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_D0_regr_kphase_g6_in_final_phase_shift                    (18)
#define  KPHASE_kphase_D0_regr_kphase_g6_in_mc_index_shift                       (15)
#define  KPHASE_kphase_D0_regr_kphase_g6_in_me_index_shift                       (12)
#define  KPHASE_kphase_D0_regr_kphase_g6_out_film_phase_shift                    (6)
#define  KPHASE_kphase_D0_regr_kphase_g6_out_phase_shift                         (0)
#define  KPHASE_kphase_D0_regr_kphase_g6_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_D0_regr_kphase_g6_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_D0_regr_kphase_g6_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_D0_regr_kphase_g6_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_D0_regr_kphase_g6_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_D0_regr_kphase_g6_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_D0_regr_kphase_g6_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_D0_regr_kphase_g6_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_D0_regr_kphase_g6_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_D0_regr_kphase_g6_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_D0_regr_kphase_g6_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_D0_regr_kphase_g6_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_D0_regr_kphase_g6_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_D0_regr_kphase_g6_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_D0_regr_kphase_g6_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_D0_regr_kphase_g6_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_D0_regr_kphase_g6_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_D0_regr_kphase_g6_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_D0_get_regr_kphase_g6_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_D0_get_regr_kphase_g6_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_D4                                                       0x1809D4D4
#define  KPHASE_kphase_D4_reg_addr                                               "0xB809D4D4"
#define  KPHASE_kphase_D4_reg                                                    0xB809D4D4
#define  KPHASE_kphase_D4_inst_addr                                              "0x0032"
#define  set_KPHASE_kphase_D4_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_D4_reg)=data)
#define  get_KPHASE_kphase_D4_reg                                                (*((volatile unsigned int*)KPHASE_kphase_D4_reg))
#define  KPHASE_kphase_D4_regr_kphase_g6_in_lr_shift                             (30)
#define  KPHASE_kphase_D4_regr_kphase_g6_me_last_phase_shift                     (29)
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_D4_regr_kphase_g6_osd_lr_shift                            (25)
#define  KPHASE_kphase_D4_regr_kphase_g6_out_lr_shift                            (24)
#define  KPHASE_kphase_D4_regr_kphase_g6_me_lr_shift                             (23)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_lr_shift                             (22)
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_D4_regr_kphase_g6_in_me2_index_shift                      (13)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_phase_shift                          (6)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_D4_regr_kphase_g6_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_D4_regr_kphase_g6_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_D4_regr_kphase_g6_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_D4_regr_kphase_g6_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_D4_regr_kphase_g6_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_D4_regr_kphase_g6_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_D4_regr_kphase_g6_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_D4_regr_kphase_g6_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_D4_regr_kphase_g6_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_D4_regr_kphase_g6_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_D4_regr_kphase_g6_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_D4_regr_kphase_g6_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_D4_regr_kphase_g6_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_D4_regr_kphase_g6_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_D4_get_regr_kphase_g6_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_D4_get_regr_kphase_g6_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_D8                                                       0x1809D4D8
#define  KPHASE_kphase_D8_reg_addr                                               "0xB809D4D8"
#define  KPHASE_kphase_D8_reg                                                    0xB809D4D8
#define  KPHASE_kphase_D8_inst_addr                                              "0x0033"
#define  set_KPHASE_kphase_D8_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_D8_reg)=data)
#define  get_KPHASE_kphase_D8_reg                                                (*((volatile unsigned int*)KPHASE_kphase_D8_reg))
#define  KPHASE_kphase_D8_regr_kphase_g7_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_D8_regr_kphase_g7_me2_phase_shift                         (25)
#define  KPHASE_kphase_D8_regr_kphase_g7_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_D8_regr_kphase_g7_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_D8_regr_kphase_g7_in_final_phase_shift                    (18)
#define  KPHASE_kphase_D8_regr_kphase_g7_in_mc_index_shift                       (15)
#define  KPHASE_kphase_D8_regr_kphase_g7_in_me_index_shift                       (12)
#define  KPHASE_kphase_D8_regr_kphase_g7_out_film_phase_shift                    (6)
#define  KPHASE_kphase_D8_regr_kphase_g7_out_phase_shift                         (0)
#define  KPHASE_kphase_D8_regr_kphase_g7_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_D8_regr_kphase_g7_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_D8_regr_kphase_g7_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_D8_regr_kphase_g7_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_D8_regr_kphase_g7_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_D8_regr_kphase_g7_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_D8_regr_kphase_g7_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_D8_regr_kphase_g7_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_D8_regr_kphase_g7_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_D8_regr_kphase_g7_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_D8_regr_kphase_g7_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_D8_regr_kphase_g7_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_D8_regr_kphase_g7_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_D8_regr_kphase_g7_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_D8_regr_kphase_g7_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_D8_regr_kphase_g7_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_D8_regr_kphase_g7_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_D8_regr_kphase_g7_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_D8_get_regr_kphase_g7_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_D8_get_regr_kphase_g7_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_DC                                                       0x1809D4DC
#define  KPHASE_kphase_DC_reg_addr                                               "0xB809D4DC"
#define  KPHASE_kphase_DC_reg                                                    0xB809D4DC
#define  KPHASE_kphase_DC_inst_addr                                              "0x0034"
#define  set_KPHASE_kphase_DC_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_DC_reg)=data)
#define  get_KPHASE_kphase_DC_reg                                                (*((volatile unsigned int*)KPHASE_kphase_DC_reg))
#define  KPHASE_kphase_DC_regr_kphase_g7_in_lr_shift                             (30)
#define  KPHASE_kphase_DC_regr_kphase_g7_me_last_phase_shift                     (29)
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_DC_regr_kphase_g7_osd_lr_shift                            (25)
#define  KPHASE_kphase_DC_regr_kphase_g7_out_lr_shift                            (24)
#define  KPHASE_kphase_DC_regr_kphase_g7_me_lr_shift                             (23)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_lr_shift                             (22)
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_DC_regr_kphase_g7_in_me2_index_shift                      (13)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_phase_shift                          (6)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_DC_regr_kphase_g7_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_DC_regr_kphase_g7_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_DC_regr_kphase_g7_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_DC_regr_kphase_g7_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_DC_regr_kphase_g7_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_DC_regr_kphase_g7_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_DC_regr_kphase_g7_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_DC_regr_kphase_g7_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_DC_regr_kphase_g7_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_DC_regr_kphase_g7_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_DC_regr_kphase_g7_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_DC_regr_kphase_g7_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_DC_regr_kphase_g7_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_DC_regr_kphase_g7_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_DC_get_regr_kphase_g7_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_DC_get_regr_kphase_g7_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_E0                                                       0x1809D4E0
#define  KPHASE_kphase_E0_reg_addr                                               "0xB809D4E0"
#define  KPHASE_kphase_E0_reg                                                    0xB809D4E0
#define  KPHASE_kphase_E0_inst_addr                                              "0x0035"
#define  set_KPHASE_kphase_E0_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_E0_reg)=data)
#define  get_KPHASE_kphase_E0_reg                                                (*((volatile unsigned int*)KPHASE_kphase_E0_reg))
#define  KPHASE_kphase_E0_regr_kphase_g8_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_E0_regr_kphase_g8_me2_phase_shift                         (25)
#define  KPHASE_kphase_E0_regr_kphase_g8_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_E0_regr_kphase_g8_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_E0_regr_kphase_g8_in_final_phase_shift                    (18)
#define  KPHASE_kphase_E0_regr_kphase_g8_in_mc_index_shift                       (15)
#define  KPHASE_kphase_E0_regr_kphase_g8_in_me_index_shift                       (12)
#define  KPHASE_kphase_E0_regr_kphase_g8_out_film_phase_shift                    (6)
#define  KPHASE_kphase_E0_regr_kphase_g8_out_phase_shift                         (0)
#define  KPHASE_kphase_E0_regr_kphase_g8_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_E0_regr_kphase_g8_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_E0_regr_kphase_g8_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_E0_regr_kphase_g8_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_E0_regr_kphase_g8_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_E0_regr_kphase_g8_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_E0_regr_kphase_g8_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_E0_regr_kphase_g8_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_E0_regr_kphase_g8_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_E0_regr_kphase_g8_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_E0_regr_kphase_g8_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_E0_regr_kphase_g8_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_E0_regr_kphase_g8_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_E0_regr_kphase_g8_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_E0_regr_kphase_g8_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_E0_regr_kphase_g8_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_E0_regr_kphase_g8_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_E0_regr_kphase_g8_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_E0_get_regr_kphase_g8_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_E0_get_regr_kphase_g8_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_E4                                                       0x1809D4E4
#define  KPHASE_kphase_E4_reg_addr                                               "0xB809D4E4"
#define  KPHASE_kphase_E4_reg                                                    0xB809D4E4
#define  KPHASE_kphase_E4_inst_addr                                              "0x0036"
#define  set_KPHASE_kphase_E4_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_E4_reg)=data)
#define  get_KPHASE_kphase_E4_reg                                                (*((volatile unsigned int*)KPHASE_kphase_E4_reg))
#define  KPHASE_kphase_E4_regr_kphase_g8_in_lr_shift                             (30)
#define  KPHASE_kphase_E4_regr_kphase_g8_me_last_phase_shift                     (29)
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_E4_regr_kphase_g8_osd_lr_shift                            (25)
#define  KPHASE_kphase_E4_regr_kphase_g8_out_lr_shift                            (24)
#define  KPHASE_kphase_E4_regr_kphase_g8_me_lr_shift                             (23)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_lr_shift                             (22)
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_E4_regr_kphase_g8_in_me2_index_shift                      (13)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_phase_shift                          (6)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_E4_regr_kphase_g8_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_E4_regr_kphase_g8_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_E4_regr_kphase_g8_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_E4_regr_kphase_g8_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_E4_regr_kphase_g8_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_E4_regr_kphase_g8_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_E4_regr_kphase_g8_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_E4_regr_kphase_g8_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_E4_regr_kphase_g8_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_E4_regr_kphase_g8_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_E4_regr_kphase_g8_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_E4_regr_kphase_g8_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_E4_regr_kphase_g8_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_E4_regr_kphase_g8_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_E4_get_regr_kphase_g8_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_E4_get_regr_kphase_g8_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_E8                                                       0x1809D4E8
#define  KPHASE_kphase_E8_reg_addr                                               "0xB809D4E8"
#define  KPHASE_kphase_E8_reg                                                    0xB809D4E8
#define  KPHASE_kphase_E8_inst_addr                                              "0x0037"
#define  set_KPHASE_kphase_E8_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_E8_reg)=data)
#define  get_KPHASE_kphase_E8_reg                                                (*((volatile unsigned int*)KPHASE_kphase_E8_reg))
#define  KPHASE_kphase_E8_regr_kphase_g9_me2_first_phase_shift                   (31)
#define  KPHASE_kphase_E8_regr_kphase_g9_me2_phase_shift                         (25)
#define  KPHASE_kphase_E8_regr_kphase_g9_me_dts_p_index_shift                    (22)
#define  KPHASE_kphase_E8_regr_kphase_g9_me_dts_i_index_shift                    (19)
#define  KPHASE_kphase_E8_regr_kphase_g9_in_final_phase_shift                    (18)
#define  KPHASE_kphase_E8_regr_kphase_g9_in_mc_index_shift                       (15)
#define  KPHASE_kphase_E8_regr_kphase_g9_in_me_index_shift                       (12)
#define  KPHASE_kphase_E8_regr_kphase_g9_out_film_phase_shift                    (6)
#define  KPHASE_kphase_E8_regr_kphase_g9_out_phase_shift                         (0)
#define  KPHASE_kphase_E8_regr_kphase_g9_me2_first_phase_mask                    (0x80000000)
#define  KPHASE_kphase_E8_regr_kphase_g9_me2_phase_mask                          (0x7E000000)
#define  KPHASE_kphase_E8_regr_kphase_g9_me_dts_p_index_mask                     (0x01C00000)
#define  KPHASE_kphase_E8_regr_kphase_g9_me_dts_i_index_mask                     (0x00380000)
#define  KPHASE_kphase_E8_regr_kphase_g9_in_final_phase_mask                     (0x00040000)
#define  KPHASE_kphase_E8_regr_kphase_g9_in_mc_index_mask                        (0x00038000)
#define  KPHASE_kphase_E8_regr_kphase_g9_in_me_index_mask                        (0x00007000)
#define  KPHASE_kphase_E8_regr_kphase_g9_out_film_phase_mask                     (0x00000FC0)
#define  KPHASE_kphase_E8_regr_kphase_g9_out_phase_mask                          (0x0000003F)
#define  KPHASE_kphase_E8_regr_kphase_g9_me2_first_phase(data)                   (0x80000000&((data)<<31))
#define  KPHASE_kphase_E8_regr_kphase_g9_me2_phase(data)                         (0x7E000000&((data)<<25))
#define  KPHASE_kphase_E8_regr_kphase_g9_me_dts_p_index(data)                    (0x01C00000&((data)<<22))
#define  KPHASE_kphase_E8_regr_kphase_g9_me_dts_i_index(data)                    (0x00380000&((data)<<19))
#define  KPHASE_kphase_E8_regr_kphase_g9_in_final_phase(data)                    (0x00040000&((data)<<18))
#define  KPHASE_kphase_E8_regr_kphase_g9_in_mc_index(data)                       (0x00038000&((data)<<15))
#define  KPHASE_kphase_E8_regr_kphase_g9_in_me_index(data)                       (0x00007000&((data)<<12))
#define  KPHASE_kphase_E8_regr_kphase_g9_out_film_phase(data)                    (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_E8_regr_kphase_g9_out_phase(data)                         (0x0000003F&(data))
#define  KPHASE_kphase_E8_get_regr_kphase_g9_me2_first_phase(data)               ((0x80000000&(data))>>31)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_me2_phase(data)                     ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_me_dts_p_index(data)                ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_me_dts_i_index(data)                ((0x00380000&(data))>>19)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_in_final_phase(data)                ((0x00040000&(data))>>18)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_in_mc_index(data)                   ((0x00038000&(data))>>15)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_in_me_index(data)                   ((0x00007000&(data))>>12)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_out_film_phase(data)                ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_E8_get_regr_kphase_g9_out_phase(data)                     (0x0000003F&(data))

#define  KPHASE_kphase_EC                                                       0x1809D4EC
#define  KPHASE_kphase_EC_reg_addr                                               "0xB809D4EC"
#define  KPHASE_kphase_EC_reg                                                    0xB809D4EC
#define  KPHASE_kphase_EC_inst_addr                                              "0x0038"
#define  set_KPHASE_kphase_EC_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_EC_reg)=data)
#define  get_KPHASE_kphase_EC_reg                                                (*((volatile unsigned int*)KPHASE_kphase_EC_reg))
#define  KPHASE_kphase_EC_regr_kphase_g9_in_lr_shift                             (30)
#define  KPHASE_kphase_EC_regr_kphase_g9_me_last_phase_shift                     (29)
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_lbme_i_index_shift                  (26)
#define  KPHASE_kphase_EC_regr_kphase_g9_osd_lr_shift                            (25)
#define  KPHASE_kphase_EC_regr_kphase_g9_out_lr_shift                            (24)
#define  KPHASE_kphase_EC_regr_kphase_g9_me_lr_shift                             (23)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_lr_shift                             (22)
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_lbme_p_index_shift                  (19)
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_ppfv_buf_idx_shift                  (17)
#define  KPHASE_kphase_EC_regr_kphase_g9_in_me2_index_shift                      (13)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_phase_shift                          (6)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_cts_p_index_shift                    (3)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_cts_i_index_shift                    (0)
#define  KPHASE_kphase_EC_regr_kphase_g9_in_lr_mask                              (0x40000000)
#define  KPHASE_kphase_EC_regr_kphase_g9_me_last_phase_mask                      (0x20000000)
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_lbme_i_index_mask                   (0x1C000000)
#define  KPHASE_kphase_EC_regr_kphase_g9_osd_lr_mask                             (0x02000000)
#define  KPHASE_kphase_EC_regr_kphase_g9_out_lr_mask                             (0x01000000)
#define  KPHASE_kphase_EC_regr_kphase_g9_me_lr_mask                              (0x00800000)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_lr_mask                              (0x00400000)
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_lbme_p_index_mask                   (0x00380000)
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_ppfv_buf_idx_mask                   (0x00060000)
#define  KPHASE_kphase_EC_regr_kphase_g9_in_me2_index_mask                       (0x0000E000)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_phase_mask                           (0x00001FC0)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_cts_p_index_mask                     (0x00000038)
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_cts_i_index_mask                     (0x00000007)
#define  KPHASE_kphase_EC_regr_kphase_g9_in_lr(data)                             (0x40000000&((data)<<30))
#define  KPHASE_kphase_EC_regr_kphase_g9_me_last_phase(data)                     (0x20000000&((data)<<29))
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_lbme_i_index(data)                  (0x1C000000&((data)<<26))
#define  KPHASE_kphase_EC_regr_kphase_g9_osd_lr(data)                            (0x02000000&((data)<<25))
#define  KPHASE_kphase_EC_regr_kphase_g9_out_lr(data)                            (0x01000000&((data)<<24))
#define  KPHASE_kphase_EC_regr_kphase_g9_me_lr(data)                             (0x00800000&((data)<<23))
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_lr(data)                             (0x00400000&((data)<<22))
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_lbme_p_index(data)                  (0x00380000&((data)<<19))
#define  KPHASE_kphase_EC_regr_kphase_g9_me2_ppfv_buf_idx(data)                  (0x00060000&((data)<<17))
#define  KPHASE_kphase_EC_regr_kphase_g9_in_me2_index(data)                      (0x0000E000&((data)<<13))
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_phase(data)                          (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_cts_p_index(data)                    (0x00000038&((data)<<3))
#define  KPHASE_kphase_EC_regr_kphase_g9_mc_cts_i_index(data)                    (0x00000007&(data))
#define  KPHASE_kphase_EC_get_regr_kphase_g9_in_lr(data)                         ((0x40000000&(data))>>30)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_me_last_phase(data)                 ((0x20000000&(data))>>29)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_me2_lbme_i_index(data)              ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_osd_lr(data)                        ((0x02000000&(data))>>25)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_out_lr(data)                        ((0x01000000&(data))>>24)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_me_lr(data)                         ((0x00800000&(data))>>23)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_mc_lr(data)                         ((0x00400000&(data))>>22)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_me2_lbme_p_index(data)              ((0x00380000&(data))>>19)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_me2_ppfv_buf_idx(data)              ((0x00060000&(data))>>17)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_in_me2_index(data)                  ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_mc_phase(data)                      ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_mc_cts_p_index(data)                ((0x00000038&(data))>>3)
#define  KPHASE_kphase_EC_get_regr_kphase_g9_mc_cts_i_index(data)                (0x00000007&(data))

#define  KPHASE_kphase_F0                                                       0x1809D4F0
#define  KPHASE_kphase_F0_reg_addr                                               "0xB809D4F0"
#define  KPHASE_kphase_F0_reg                                                    0xB809D4F0
#define  KPHASE_kphase_F0_inst_addr                                              "0x0039"
#define  set_KPHASE_kphase_F0_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_F0_reg)=data)
#define  get_KPHASE_kphase_F0_reg                                                (*((volatile unsigned int*)KPHASE_kphase_F0_reg))
#define  KPHASE_kphase_F0_regr_kphase_g10_me2_first_phase_shift                  (31)
#define  KPHASE_kphase_F0_regr_kphase_g10_me2_phase_shift                        (25)
#define  KPHASE_kphase_F0_regr_kphase_g10_me_dts_p_index_shift                   (22)
#define  KPHASE_kphase_F0_regr_kphase_g10_me_dts_i_index_shift                   (19)
#define  KPHASE_kphase_F0_regr_kphase_g10_in_final_phase_shift                   (18)
#define  KPHASE_kphase_F0_regr_kphase_g10_in_mc_index_shift                      (15)
#define  KPHASE_kphase_F0_regr_kphase_g10_in_me_index_shift                      (12)
#define  KPHASE_kphase_F0_regr_kphase_g10_out_film_phase_shift                   (6)
#define  KPHASE_kphase_F0_regr_kphase_g10_out_phase_shift                        (0)
#define  KPHASE_kphase_F0_regr_kphase_g10_me2_first_phase_mask                   (0x80000000)
#define  KPHASE_kphase_F0_regr_kphase_g10_me2_phase_mask                         (0x7E000000)
#define  KPHASE_kphase_F0_regr_kphase_g10_me_dts_p_index_mask                    (0x01C00000)
#define  KPHASE_kphase_F0_regr_kphase_g10_me_dts_i_index_mask                    (0x00380000)
#define  KPHASE_kphase_F0_regr_kphase_g10_in_final_phase_mask                    (0x00040000)
#define  KPHASE_kphase_F0_regr_kphase_g10_in_mc_index_mask                       (0x00038000)
#define  KPHASE_kphase_F0_regr_kphase_g10_in_me_index_mask                       (0x00007000)
#define  KPHASE_kphase_F0_regr_kphase_g10_out_film_phase_mask                    (0x00000FC0)
#define  KPHASE_kphase_F0_regr_kphase_g10_out_phase_mask                         (0x0000003F)
#define  KPHASE_kphase_F0_regr_kphase_g10_me2_first_phase(data)                  (0x80000000&((data)<<31))
#define  KPHASE_kphase_F0_regr_kphase_g10_me2_phase(data)                        (0x7E000000&((data)<<25))
#define  KPHASE_kphase_F0_regr_kphase_g10_me_dts_p_index(data)                   (0x01C00000&((data)<<22))
#define  KPHASE_kphase_F0_regr_kphase_g10_me_dts_i_index(data)                   (0x00380000&((data)<<19))
#define  KPHASE_kphase_F0_regr_kphase_g10_in_final_phase(data)                   (0x00040000&((data)<<18))
#define  KPHASE_kphase_F0_regr_kphase_g10_in_mc_index(data)                      (0x00038000&((data)<<15))
#define  KPHASE_kphase_F0_regr_kphase_g10_in_me_index(data)                      (0x00007000&((data)<<12))
#define  KPHASE_kphase_F0_regr_kphase_g10_out_film_phase(data)                   (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_F0_regr_kphase_g10_out_phase(data)                        (0x0000003F&(data))
#define  KPHASE_kphase_F0_get_regr_kphase_g10_me2_first_phase(data)              ((0x80000000&(data))>>31)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_me2_phase(data)                    ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_me_dts_p_index(data)               ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_me_dts_i_index(data)               ((0x00380000&(data))>>19)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_in_final_phase(data)               ((0x00040000&(data))>>18)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_in_mc_index(data)                  ((0x00038000&(data))>>15)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_in_me_index(data)                  ((0x00007000&(data))>>12)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_out_film_phase(data)               ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_F0_get_regr_kphase_g10_out_phase(data)                    (0x0000003F&(data))

#define  KPHASE_kphase_F4                                                       0x1809D4F4
#define  KPHASE_kphase_F4_reg_addr                                               "0xB809D4F4"
#define  KPHASE_kphase_F4_reg                                                    0xB809D4F4
#define  KPHASE_kphase_F4_inst_addr                                              "0x003A"
#define  set_KPHASE_kphase_F4_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_F4_reg)=data)
#define  get_KPHASE_kphase_F4_reg                                                (*((volatile unsigned int*)KPHASE_kphase_F4_reg))
#define  KPHASE_kphase_F4_regr_kphase_g10_in_lr_shift                            (30)
#define  KPHASE_kphase_F4_regr_kphase_g10_me_last_phase_shift                    (29)
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_lbme_i_index_shift                 (26)
#define  KPHASE_kphase_F4_regr_kphase_g10_osd_lr_shift                           (25)
#define  KPHASE_kphase_F4_regr_kphase_g10_out_lr_shift                           (24)
#define  KPHASE_kphase_F4_regr_kphase_g10_me_lr_shift                            (23)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_lr_shift                            (22)
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_lbme_p_index_shift                 (19)
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_ppfv_buf_idx_shift                 (17)
#define  KPHASE_kphase_F4_regr_kphase_g10_in_me2_index_shift                     (13)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_phase_shift                         (6)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_cts_p_index_shift                   (3)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_cts_i_index_shift                   (0)
#define  KPHASE_kphase_F4_regr_kphase_g10_in_lr_mask                             (0x40000000)
#define  KPHASE_kphase_F4_regr_kphase_g10_me_last_phase_mask                     (0x20000000)
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_lbme_i_index_mask                  (0x1C000000)
#define  KPHASE_kphase_F4_regr_kphase_g10_osd_lr_mask                            (0x02000000)
#define  KPHASE_kphase_F4_regr_kphase_g10_out_lr_mask                            (0x01000000)
#define  KPHASE_kphase_F4_regr_kphase_g10_me_lr_mask                             (0x00800000)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_lr_mask                             (0x00400000)
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_lbme_p_index_mask                  (0x00380000)
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_ppfv_buf_idx_mask                  (0x00060000)
#define  KPHASE_kphase_F4_regr_kphase_g10_in_me2_index_mask                      (0x0000E000)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_phase_mask                          (0x00001FC0)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_cts_p_index_mask                    (0x00000038)
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_cts_i_index_mask                    (0x00000007)
#define  KPHASE_kphase_F4_regr_kphase_g10_in_lr(data)                            (0x40000000&((data)<<30))
#define  KPHASE_kphase_F4_regr_kphase_g10_me_last_phase(data)                    (0x20000000&((data)<<29))
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_lbme_i_index(data)                 (0x1C000000&((data)<<26))
#define  KPHASE_kphase_F4_regr_kphase_g10_osd_lr(data)                           (0x02000000&((data)<<25))
#define  KPHASE_kphase_F4_regr_kphase_g10_out_lr(data)                           (0x01000000&((data)<<24))
#define  KPHASE_kphase_F4_regr_kphase_g10_me_lr(data)                            (0x00800000&((data)<<23))
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_lr(data)                            (0x00400000&((data)<<22))
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_lbme_p_index(data)                 (0x00380000&((data)<<19))
#define  KPHASE_kphase_F4_regr_kphase_g10_me2_ppfv_buf_idx(data)                 (0x00060000&((data)<<17))
#define  KPHASE_kphase_F4_regr_kphase_g10_in_me2_index(data)                     (0x0000E000&((data)<<13))
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_phase(data)                         (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_cts_p_index(data)                   (0x00000038&((data)<<3))
#define  KPHASE_kphase_F4_regr_kphase_g10_mc_cts_i_index(data)                   (0x00000007&(data))
#define  KPHASE_kphase_F4_get_regr_kphase_g10_in_lr(data)                        ((0x40000000&(data))>>30)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_me_last_phase(data)                ((0x20000000&(data))>>29)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_me2_lbme_i_index(data)             ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_osd_lr(data)                       ((0x02000000&(data))>>25)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_out_lr(data)                       ((0x01000000&(data))>>24)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_me_lr(data)                        ((0x00800000&(data))>>23)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_mc_lr(data)                        ((0x00400000&(data))>>22)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_me2_lbme_p_index(data)             ((0x00380000&(data))>>19)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_me2_ppfv_buf_idx(data)             ((0x00060000&(data))>>17)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_in_me2_index(data)                 ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_mc_phase(data)                     ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_mc_cts_p_index(data)               ((0x00000038&(data))>>3)
#define  KPHASE_kphase_F4_get_regr_kphase_g10_mc_cts_i_index(data)               (0x00000007&(data))

#define  KPHASE_kphase_F8                                                       0x1809D4F8
#define  KPHASE_kphase_F8_reg_addr                                               "0xB809D4F8"
#define  KPHASE_kphase_F8_reg                                                    0xB809D4F8
#define  KPHASE_kphase_F8_inst_addr                                              "0x003B"
#define  set_KPHASE_kphase_F8_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_F8_reg)=data)
#define  get_KPHASE_kphase_F8_reg                                                (*((volatile unsigned int*)KPHASE_kphase_F8_reg))
#define  KPHASE_kphase_F8_regr_kphase_g11_me2_first_phase_shift                  (31)
#define  KPHASE_kphase_F8_regr_kphase_g11_me2_phase_shift                        (25)
#define  KPHASE_kphase_F8_regr_kphase_g11_me_dts_p_index_shift                   (22)
#define  KPHASE_kphase_F8_regr_kphase_g11_me_dts_i_index_shift                   (19)
#define  KPHASE_kphase_F8_regr_kphase_g11_in_final_phase_shift                   (18)
#define  KPHASE_kphase_F8_regr_kphase_g11_in_mc_index_shift                      (15)
#define  KPHASE_kphase_F8_regr_kphase_g11_in_me_index_shift                      (12)
#define  KPHASE_kphase_F8_regr_kphase_g11_out_film_phase_shift                   (6)
#define  KPHASE_kphase_F8_regr_kphase_g11_out_phase_shift                        (0)
#define  KPHASE_kphase_F8_regr_kphase_g11_me2_first_phase_mask                   (0x80000000)
#define  KPHASE_kphase_F8_regr_kphase_g11_me2_phase_mask                         (0x7E000000)
#define  KPHASE_kphase_F8_regr_kphase_g11_me_dts_p_index_mask                    (0x01C00000)
#define  KPHASE_kphase_F8_regr_kphase_g11_me_dts_i_index_mask                    (0x00380000)
#define  KPHASE_kphase_F8_regr_kphase_g11_in_final_phase_mask                    (0x00040000)
#define  KPHASE_kphase_F8_regr_kphase_g11_in_mc_index_mask                       (0x00038000)
#define  KPHASE_kphase_F8_regr_kphase_g11_in_me_index_mask                       (0x00007000)
#define  KPHASE_kphase_F8_regr_kphase_g11_out_film_phase_mask                    (0x00000FC0)
#define  KPHASE_kphase_F8_regr_kphase_g11_out_phase_mask                         (0x0000003F)
#define  KPHASE_kphase_F8_regr_kphase_g11_me2_first_phase(data)                  (0x80000000&((data)<<31))
#define  KPHASE_kphase_F8_regr_kphase_g11_me2_phase(data)                        (0x7E000000&((data)<<25))
#define  KPHASE_kphase_F8_regr_kphase_g11_me_dts_p_index(data)                   (0x01C00000&((data)<<22))
#define  KPHASE_kphase_F8_regr_kphase_g11_me_dts_i_index(data)                   (0x00380000&((data)<<19))
#define  KPHASE_kphase_F8_regr_kphase_g11_in_final_phase(data)                   (0x00040000&((data)<<18))
#define  KPHASE_kphase_F8_regr_kphase_g11_in_mc_index(data)                      (0x00038000&((data)<<15))
#define  KPHASE_kphase_F8_regr_kphase_g11_in_me_index(data)                      (0x00007000&((data)<<12))
#define  KPHASE_kphase_F8_regr_kphase_g11_out_film_phase(data)                   (0x00000FC0&((data)<<6))
#define  KPHASE_kphase_F8_regr_kphase_g11_out_phase(data)                        (0x0000003F&(data))
#define  KPHASE_kphase_F8_get_regr_kphase_g11_me2_first_phase(data)              ((0x80000000&(data))>>31)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_me2_phase(data)                    ((0x7E000000&(data))>>25)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_me_dts_p_index(data)               ((0x01C00000&(data))>>22)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_me_dts_i_index(data)               ((0x00380000&(data))>>19)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_in_final_phase(data)               ((0x00040000&(data))>>18)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_in_mc_index(data)                  ((0x00038000&(data))>>15)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_in_me_index(data)                  ((0x00007000&(data))>>12)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_out_film_phase(data)               ((0x00000FC0&(data))>>6)
#define  KPHASE_kphase_F8_get_regr_kphase_g11_out_phase(data)                    (0x0000003F&(data))

#define  KPHASE_kphase_FC                                                       0x1809D4FC
#define  KPHASE_kphase_FC_reg_addr                                               "0xB809D4FC"
#define  KPHASE_kphase_FC_reg                                                    0xB809D4FC
#define  KPHASE_kphase_FC_inst_addr                                              "0x003C"
#define  set_KPHASE_kphase_FC_reg(data)                                          (*((volatile unsigned int*)KPHASE_kphase_FC_reg)=data)
#define  get_KPHASE_kphase_FC_reg                                                (*((volatile unsigned int*)KPHASE_kphase_FC_reg))
#define  KPHASE_kphase_FC_regr_kphase_g11_in_lr_shift                            (30)
#define  KPHASE_kphase_FC_regr_kphase_g11_me_last_phase_shift                    (29)
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_lbme_i_index_shift                 (26)
#define  KPHASE_kphase_FC_regr_kphase_g11_osd_lr_shift                           (25)
#define  KPHASE_kphase_FC_regr_kphase_g11_out_lr_shift                           (24)
#define  KPHASE_kphase_FC_regr_kphase_g11_me_lr_shift                            (23)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_lr_shift                            (22)
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_lbme_p_index_shift                 (19)
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_ppfv_buf_idx_shift                 (17)
#define  KPHASE_kphase_FC_regr_kphase_g11_in_me2_index_shift                     (13)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_phase_shift                         (6)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_cts_p_index_shift                   (3)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_cts_i_index_shift                   (0)
#define  KPHASE_kphase_FC_regr_kphase_g11_in_lr_mask                             (0x40000000)
#define  KPHASE_kphase_FC_regr_kphase_g11_me_last_phase_mask                     (0x20000000)
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_lbme_i_index_mask                  (0x1C000000)
#define  KPHASE_kphase_FC_regr_kphase_g11_osd_lr_mask                            (0x02000000)
#define  KPHASE_kphase_FC_regr_kphase_g11_out_lr_mask                            (0x01000000)
#define  KPHASE_kphase_FC_regr_kphase_g11_me_lr_mask                             (0x00800000)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_lr_mask                             (0x00400000)
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_lbme_p_index_mask                  (0x00380000)
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_ppfv_buf_idx_mask                  (0x00060000)
#define  KPHASE_kphase_FC_regr_kphase_g11_in_me2_index_mask                      (0x0000E000)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_phase_mask                          (0x00001FC0)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_cts_p_index_mask                    (0x00000038)
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_cts_i_index_mask                    (0x00000007)
#define  KPHASE_kphase_FC_regr_kphase_g11_in_lr(data)                            (0x40000000&((data)<<30))
#define  KPHASE_kphase_FC_regr_kphase_g11_me_last_phase(data)                    (0x20000000&((data)<<29))
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_lbme_i_index(data)                 (0x1C000000&((data)<<26))
#define  KPHASE_kphase_FC_regr_kphase_g11_osd_lr(data)                           (0x02000000&((data)<<25))
#define  KPHASE_kphase_FC_regr_kphase_g11_out_lr(data)                           (0x01000000&((data)<<24))
#define  KPHASE_kphase_FC_regr_kphase_g11_me_lr(data)                            (0x00800000&((data)<<23))
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_lr(data)                            (0x00400000&((data)<<22))
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_lbme_p_index(data)                 (0x00380000&((data)<<19))
#define  KPHASE_kphase_FC_regr_kphase_g11_me2_ppfv_buf_idx(data)                 (0x00060000&((data)<<17))
#define  KPHASE_kphase_FC_regr_kphase_g11_in_me2_index(data)                     (0x0000E000&((data)<<13))
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_phase(data)                         (0x00001FC0&((data)<<6))
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_cts_p_index(data)                   (0x00000038&((data)<<3))
#define  KPHASE_kphase_FC_regr_kphase_g11_mc_cts_i_index(data)                   (0x00000007&(data))
#define  KPHASE_kphase_FC_get_regr_kphase_g11_in_lr(data)                        ((0x40000000&(data))>>30)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_me_last_phase(data)                ((0x20000000&(data))>>29)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_me2_lbme_i_index(data)             ((0x1C000000&(data))>>26)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_osd_lr(data)                       ((0x02000000&(data))>>25)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_out_lr(data)                       ((0x01000000&(data))>>24)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_me_lr(data)                        ((0x00800000&(data))>>23)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_mc_lr(data)                        ((0x00400000&(data))>>22)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_me2_lbme_p_index(data)             ((0x00380000&(data))>>19)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_me2_ppfv_buf_idx(data)             ((0x00060000&(data))>>17)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_in_me2_index(data)                 ((0x0000E000&(data))>>13)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_mc_phase(data)                     ((0x00001FC0&(data))>>6)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_mc_cts_p_index(data)               ((0x00000038&(data))>>3)
#define  KPHASE_kphase_FC_get_regr_kphase_g11_mc_cts_i_index(data)               (0x00000007&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KPHASE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_force_crtc_mc_lf_index:4;
        RBus_UInt32  kphase_force_mc_hf_index_en:1;
        RBus_UInt32  kphase_force_mc_hf_index:2;
        RBus_UInt32  kphase_force_mc_lf_index_en:1;
        RBus_UInt32  kphase_force_mc_lf_index:4;
        RBus_UInt32  kphase_force_mc_mode_en:1;
        RBus_UInt32  kphase_force_mc_mode:3;
        RBus_UInt32  kphase_force_mc_phase_en:1;
        RBus_UInt32  kphase_force_mc_phase:7;
        RBus_UInt32  kphase_in_3d_fs_enable:1;
        RBus_UInt32  kphase_force_mc_cts_p_index:3;
        RBus_UInt32  kphase_force_mc_cts_index_en:1;
        RBus_UInt32  kphase_force_mc_cts_i_index:3;
    };
}kphase_kphase_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_force_in_final_phase_en:1;
        RBus_UInt32  kphase_force_in_final_phase:1;
        RBus_UInt32  kphase_force_me_last_phase_en:1;
        RBus_UInt32  kphase_force_me_last_phase:1;
        RBus_UInt32  kphase_force_me2_first_phase:1;
        RBus_UInt32  kphase_force_me2_phase_en:1;
        RBus_UInt32  kphase_force_me2_phase:6;
        RBus_UInt32  kphase_in_lr_inv:1;
        RBus_UInt32  kphase_force_me_dts_p_index:3;
        RBus_UInt32  kphase_force_me_dts_index_en:1;
        RBus_UInt32  kphase_force_me_dts_i_index:3;
        RBus_UInt32  kphase_force_in_mc_index_en:1;
        RBus_UInt32  kphase_force_in_mc_index:3;
        RBus_UInt32  kphase_force_in_me_index_en:1;
        RBus_UInt32  kphase_force_in_me_index:3;
        RBus_UInt32  kphase_force_crtc_mc_hf_index_en:1;
        RBus_UInt32  kphase_force_crtc_mc_hf_index:2;
        RBus_UInt32  kphase_force_crtc_mc_lf_index_en:1;
    };
}kphase_kphase_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_force_me2_first_phase_en:1;
        RBus_UInt32  kphase_out_phase_type:6;
        RBus_UInt32  kphase_me_frame_hold:1;
        RBus_UInt32  kphase_mc_frame_hold:1;
        RBus_UInt32  kphase_frame_hold_enable:1;
        RBus_UInt32  kphase_out_phase_slf_gen:2;
        RBus_UInt32  kphase_out_phase_ini:4;
        RBus_UInt32  kphase_force_in_mc_offset:3;
        RBus_UInt32  kphase_force_in_mc_offset_en:1;
        RBus_UInt32  kphase_force_in_me_offset:3;
        RBus_UInt32  kphase_force_in_me_offset_en:1;
        RBus_UInt32  kphase_force_me_lr:1;
        RBus_UInt32  kphase_force_me_lr_en:1;
        RBus_UInt32  kphase_force_osd_lr:1;
        RBus_UInt32  kphase_force_osd_lr_en:1;
        RBus_UInt32  kphase_force_out_lr:1;
        RBus_UInt32  kphase_force_out_lr_en:1;
        RBus_UInt32  kphase_force_mc_lr:1;
        RBus_UInt32  kphase_force_mc_lr_en:1;
    };
}kphase_kphase_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_out_3d_enable:1;
        RBus_UInt32  kphase_film_mode:3;
        RBus_UInt32  kphase_in_reset_source_sel:1;
        RBus_UInt32  kphase_auto_film_phase_reset:1;
        RBus_UInt32  kphase_auto_film_phase_en:1;
        RBus_UInt32  kphase_sw_film_en:1;
        RBus_UInt32  kphase_film_phase_type:6;
        RBus_UInt32  kphase_out_film_phase_offset:6;
        RBus_UInt32  kphase_in_film_phase_offset:6;
        RBus_UInt32  kphase_sw_film_phase:6;
    };
}kphase_kphase_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_me2_frame_hold:1;
        RBus_UInt32  kphase_mc_mode_hf_update_en:1;
        RBus_UInt32  kphase_mc_mode_lf_update_en:1;
        RBus_UInt32  kphase_in_memc_index_reset:1;
        RBus_UInt32  kphase_meter_enable:1;
        RBus_UInt32  kphase_in_lr_ctl_for_index:1;
        RBus_UInt32  kphase_logo_frame_hold:1;
        RBus_UInt32  kphase_dec_length:8;
        RBus_UInt32  kphase_lut_sel:1;
        RBus_UInt32  kphase_in_mc_index_bsize:4;
        RBus_UInt32  kphase_in_me_index_bsize:4;
        RBus_UInt32  kphase_in_mc_index_reset:1;
        RBus_UInt32  kphase_in_mc_index_initial:3;
        RBus_UInt32  kphase_in_me_index_reset:1;
        RBus_UInt32  kphase_in_me_index_initial:3;
    };
}kphase_kphase_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p03:8;
        RBus_UInt32  kphase_in_p02:8;
        RBus_UInt32  kphase_in_p01:8;
        RBus_UInt32  kphase_in_p00:8;
    };
}kphase_kphase_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p07:8;
        RBus_UInt32  kphase_in_p06:8;
        RBus_UInt32  kphase_in_p05:8;
        RBus_UInt32  kphase_in_p04:8;
    };
}kphase_kphase_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p11:8;
        RBus_UInt32  kphase_in_p10:8;
        RBus_UInt32  kphase_in_p09:8;
        RBus_UInt32  kphase_in_p08:8;
    };
}kphase_kphase_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p15:8;
        RBus_UInt32  kphase_in_p14:8;
        RBus_UInt32  kphase_in_p13:8;
        RBus_UInt32  kphase_in_p12:8;
    };
}kphase_kphase_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p19:8;
        RBus_UInt32  kphase_in_p18:8;
        RBus_UInt32  kphase_in_p17:8;
        RBus_UInt32  kphase_in_p16:8;
    };
}kphase_kphase_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p23:8;
        RBus_UInt32  kphase_in_p22:8;
        RBus_UInt32  kphase_in_p21:8;
        RBus_UInt32  kphase_in_p20:8;
    };
}kphase_kphase_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p27:8;
        RBus_UInt32  kphase_in_p26:8;
        RBus_UInt32  kphase_in_p25:8;
        RBus_UInt32  kphase_in_p24:8;
    };
}kphase_kphase_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p31:8;
        RBus_UInt32  kphase_in_p30:8;
        RBus_UInt32  kphase_in_p29:8;
        RBus_UInt32  kphase_in_p28:8;
    };
}kphase_kphase_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p35:8;
        RBus_UInt32  kphase_in_p34:8;
        RBus_UInt32  kphase_in_p33:8;
        RBus_UInt32  kphase_in_p32:8;
    };
}kphase_kphase_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p39:8;
        RBus_UInt32  kphase_in_p38:8;
        RBus_UInt32  kphase_in_p37:8;
        RBus_UInt32  kphase_in_p36:8;
    };
}kphase_kphase_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p43:8;
        RBus_UInt32  kphase_in_p42:8;
        RBus_UInt32  kphase_in_p41:8;
        RBus_UInt32  kphase_in_p40:8;
    };
}kphase_kphase_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p47:8;
        RBus_UInt32  kphase_in_p46:8;
        RBus_UInt32  kphase_in_p45:8;
        RBus_UInt32  kphase_in_p44:8;
    };
}kphase_kphase_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p51:8;
        RBus_UInt32  kphase_in_p50:8;
        RBus_UInt32  kphase_in_p49:8;
        RBus_UInt32  kphase_in_p48:8;
    };
}kphase_kphase_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p55:8;
        RBus_UInt32  kphase_in_p54:8;
        RBus_UInt32  kphase_in_p53:8;
        RBus_UInt32  kphase_in_p52:8;
    };
}kphase_kphase_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p59:8;
        RBus_UInt32  kphase_in_p58:8;
        RBus_UInt32  kphase_in_p57:8;
        RBus_UInt32  kphase_in_p56:8;
    };
}kphase_kphase_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p63:8;
        RBus_UInt32  kphase_in_p62:8;
        RBus_UInt32  kphase_in_p61:8;
        RBus_UInt32  kphase_in_p60:8;
    };
}kphase_kphase_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_film_mode_proc_func_en:1;
        RBus_UInt32  kphase_film_mode_proc_quit_film22_id:1;
        RBus_UInt32  kphase_film_mode_proc_quit_film32_id:3;
        RBus_UInt32  kphase_film_mode_proc_enter_film22_id:1;
        RBus_UInt32  kphase_film_mode_proc_enter_film32_id:3;
        RBus_UInt32  kphase_force_me2_lr:1;
        RBus_UInt32  kphase_force_me2_lr_en:1;
        RBus_UInt32  kphase_sram_ls_value:1;
        RBus_UInt32  kphase_sram_ls_en:1;
        RBus_UInt32  kphase_force_mc_mode_hf:3;
        RBus_UInt32  kphase_dec_mtpt_end:8;
        RBus_UInt32  kphase_dec_mtpt_start:8;
    };
}kphase_kphase_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p07:4;
        RBus_UInt32  kphase_in_me2_p06:4;
        RBus_UInt32  kphase_in_me2_p05:4;
        RBus_UInt32  kphase_in_me2_p04:4;
        RBus_UInt32  kphase_in_me2_p03:4;
        RBus_UInt32  kphase_in_me2_p02:4;
        RBus_UInt32  kphase_in_me2_p01:4;
        RBus_UInt32  kphase_in_me2_p00:4;
    };
}kphase_kphase_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p15:4;
        RBus_UInt32  kphase_in_me2_p14:4;
        RBus_UInt32  kphase_in_me2_p13:4;
        RBus_UInt32  kphase_in_me2_p12:4;
        RBus_UInt32  kphase_in_me2_p11:4;
        RBus_UInt32  kphase_in_me2_p10:4;
        RBus_UInt32  kphase_in_me2_p09:4;
        RBus_UInt32  kphase_in_me2_p08:4;
    };
}kphase_kphase_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p23:4;
        RBus_UInt32  kphase_in_me2_p22:4;
        RBus_UInt32  kphase_in_me2_p21:4;
        RBus_UInt32  kphase_in_me2_p20:4;
        RBus_UInt32  kphase_in_me2_p19:4;
        RBus_UInt32  kphase_in_me2_p18:4;
        RBus_UInt32  kphase_in_me2_p17:4;
        RBus_UInt32  kphase_in_me2_p16:4;
    };
}kphase_kphase_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p31:4;
        RBus_UInt32  kphase_in_me2_p30:4;
        RBus_UInt32  kphase_in_me2_p29:4;
        RBus_UInt32  kphase_in_me2_p28:4;
        RBus_UInt32  kphase_in_me2_p27:4;
        RBus_UInt32  kphase_in_me2_p26:4;
        RBus_UInt32  kphase_in_me2_p25:4;
        RBus_UInt32  kphase_in_me2_p24:4;
    };
}kphase_kphase_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p39:4;
        RBus_UInt32  kphase_in_me2_p38:4;
        RBus_UInt32  kphase_in_me2_p37:4;
        RBus_UInt32  kphase_in_me2_p36:4;
        RBus_UInt32  kphase_in_me2_p35:4;
        RBus_UInt32  kphase_in_me2_p34:4;
        RBus_UInt32  kphase_in_me2_p33:4;
        RBus_UInt32  kphase_in_me2_p32:4;
    };
}kphase_kphase_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p47:4;
        RBus_UInt32  kphase_in_me2_p46:4;
        RBus_UInt32  kphase_in_me2_p45:4;
        RBus_UInt32  kphase_in_me2_p44:4;
        RBus_UInt32  kphase_in_me2_p43:4;
        RBus_UInt32  kphase_in_me2_p42:4;
        RBus_UInt32  kphase_in_me2_p41:4;
        RBus_UInt32  kphase_in_me2_p40:4;
    };
}kphase_kphase_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p55:4;
        RBus_UInt32  kphase_in_me2_p54:4;
        RBus_UInt32  kphase_in_me2_p53:4;
        RBus_UInt32  kphase_in_me2_p52:4;
        RBus_UInt32  kphase_in_me2_p51:4;
        RBus_UInt32  kphase_in_me2_p50:4;
        RBus_UInt32  kphase_in_me2_p49:4;
        RBus_UInt32  kphase_in_me2_p48:4;
    };
}kphase_kphase_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p63:4;
        RBus_UInt32  kphase_in_me2_p62:4;
        RBus_UInt32  kphase_in_me2_p61:4;
        RBus_UInt32  kphase_in_me2_p60:4;
        RBus_UInt32  kphase_in_me2_p59:4;
        RBus_UInt32  kphase_in_me2_p58:4;
        RBus_UInt32  kphase_in_me2_p57:4;
        RBus_UInt32  kphase_in_me2_p56:4;
    };
}kphase_kphase_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_kphase_test1:1;
        RBus_UInt32  kphase_dec_data_vs_clr_en:1;
        RBus_UInt32  kphase_lut_sel_latch_sel:1;
        RBus_UInt32  kphase_in_frame_hold_func_en:4;
        RBus_UInt32  kphase_force_me2_ppfv_buf_idx:2;
        RBus_UInt32  kphase_force_me2_ppfv_buf_idx_en:1;
        RBus_UInt32  kphase_force_me2_lbme_p_index:3;
        RBus_UInt32  kphase_force_me2_lbme_i_index:3;
        RBus_UInt32  kphase_force_me2_lbme_index_en:1;
        RBus_UInt32  kphase_in_me2_index_bsize:4;
        RBus_UInt32  kphase_in_me2_index_initial:3;
        RBus_UInt32  kphase_force_in_me2_index:3;
        RBus_UInt32  kphase_force_in_me2_index_en:1;
        RBus_UInt32  kphase_force_in_me2_offset:3;
        RBus_UInt32  kphase_force_in_me2_offset_en:1;
    };
}kphase_kphase_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_hf_idx_now:2;
        RBus_UInt32  lbmc_lf_idx_now:4;
        RBus_UInt32  res2:15;
        RBus_UInt32  kphase_lbmc_idx_mpa_en:1;
        RBus_UInt32  kphase_lbmc_idx4_map:4;
        RBus_UInt32  kphase_lbmc_idx3_map:4;
    };
}kphase_kphase_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  lbme2_p_index:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  lbme2_i_index:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:5;
        RBus_UInt32  lbme_p_index:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  lbme_i_index:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  in_me_index:3;
    };
}kphase_kphase_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  regr_in_film_phase:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  lbmc_p_index:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  lbmc_i_index:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  in_mc_index:3;
    };
}kphase_kphase_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g7_in_phase:4;
        RBus_UInt32  regr_kphase_g6_in_phase:4;
        RBus_UInt32  regr_kphase_g5_in_phase:4;
        RBus_UInt32  regr_kphase_g4_in_phase:4;
        RBus_UInt32  regr_kphase_g3_in_phase:4;
        RBus_UInt32  regr_kphase_g2_in_phase:4;
        RBus_UInt32  regr_kphase_g1_in_phase:4;
        RBus_UInt32  regr_kphase_g0_in_phase:4;
    };
}kphase_kphase_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  regr_kphase_g11_in_phase:4;
        RBus_UInt32  regr_kphase_g10_in_phase:4;
        RBus_UInt32  regr_kphase_g9_in_phase:4;
        RBus_UInt32  regr_kphase_g8_in_phase:4;
    };
}kphase_kphase_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kphase_in_lr:1;
        RBus_UInt32  regr_kphase_dec_no_match:1;
        RBus_UInt32  regr_kphase_in_film_phase:6;
        RBus_UInt32  regr_kphase_in_phase:4;
        RBus_UInt32  regr_kphase_out_film_phase:6;
        RBus_UInt32  regr_kphase_out_phase:6;
    };
}kphase_kphase_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g0_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g0_me2_phase:6;
        RBus_UInt32  regr_kphase_g0_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g0_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g0_in_final_phase:1;
        RBus_UInt32  regr_kphase_g0_in_mc_index:3;
        RBus_UInt32  regr_kphase_g0_in_me_index:3;
        RBus_UInt32  regr_kphase_g0_out_film_phase:6;
        RBus_UInt32  regr_kphase_g0_out_phase:6;
    };
}kphase_kphase_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g0_in_lr:1;
        RBus_UInt32  regr_kphase_g0_me_last_phase:1;
        RBus_UInt32  regr_kphase_g0_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g0_osd_lr:1;
        RBus_UInt32  regr_kphase_g0_out_lr:1;
        RBus_UInt32  regr_kphase_g0_me_lr:1;
        RBus_UInt32  regr_kphase_g0_mc_lr:1;
        RBus_UInt32  regr_kphase_g0_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g0_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g0_in_me2_index:3;
        RBus_UInt32  regr_kphase_g0_mc_phase:7;
        RBus_UInt32  regr_kphase_g0_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g0_mc_cts_i_index:3;
    };
}kphase_kphase_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g1_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g1_me2_phase:6;
        RBus_UInt32  regr_kphase_g1_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g1_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g1_in_final_phase:1;
        RBus_UInt32  regr_kphase_g1_in_mc_index:3;
        RBus_UInt32  regr_kphase_g1_in_me_index:3;
        RBus_UInt32  regr_kphase_g1_out_film_phase:6;
        RBus_UInt32  regr_kphase_g1_out_phase:6;
    };
}kphase_kphase_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g1_in_lr:1;
        RBus_UInt32  regr_kphase_g1_me_last_phase:1;
        RBus_UInt32  regr_kphase_g1_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g1_osd_lr:1;
        RBus_UInt32  regr_kphase_g1_out_lr:1;
        RBus_UInt32  regr_kphase_g1_me_lr:1;
        RBus_UInt32  regr_kphase_g1_mc_lr:1;
        RBus_UInt32  regr_kphase_g1_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g1_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g1_in_me2_index:3;
        RBus_UInt32  regr_kphase_g1_mc_phase:7;
        RBus_UInt32  regr_kphase_g1_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g1_mc_cts_i_index:3;
    };
}kphase_kphase_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g2_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g2_me2_phase:6;
        RBus_UInt32  regr_kphase_g2_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g2_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g2_in_final_phase:1;
        RBus_UInt32  regr_kphase_g2_in_mc_index:3;
        RBus_UInt32  regr_kphase_g2_in_me_index:3;
        RBus_UInt32  regr_kphase_g2_out_film_phase:6;
        RBus_UInt32  regr_kphase_g2_out_phase:6;
    };
}kphase_kphase_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g2_in_lr:1;
        RBus_UInt32  regr_kphase_g2_me_last_phase:1;
        RBus_UInt32  regr_kphase_g2_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g2_osd_lr:1;
        RBus_UInt32  regr_kphase_g2_out_lr:1;
        RBus_UInt32  regr_kphase_g2_me_lr:1;
        RBus_UInt32  regr_kphase_g2_mc_lr:1;
        RBus_UInt32  regr_kphase_g2_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g2_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g2_in_me2_index:3;
        RBus_UInt32  regr_kphase_g2_mc_phase:7;
        RBus_UInt32  regr_kphase_g2_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g2_mc_cts_i_index:3;
    };
}kphase_kphase_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g3_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g3_me2_phase:6;
        RBus_UInt32  regr_kphase_g3_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g3_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g3_in_final_phase:1;
        RBus_UInt32  regr_kphase_g3_in_mc_index:3;
        RBus_UInt32  regr_kphase_g3_in_me_index:3;
        RBus_UInt32  regr_kphase_g3_out_film_phase:6;
        RBus_UInt32  regr_kphase_g3_out_phase:6;
    };
}kphase_kphase_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g3_in_lr:1;
        RBus_UInt32  regr_kphase_g3_me_last_phase:1;
        RBus_UInt32  regr_kphase_g3_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g3_osd_lr:1;
        RBus_UInt32  regr_kphase_g3_out_lr:1;
        RBus_UInt32  regr_kphase_g3_me_lr:1;
        RBus_UInt32  regr_kphase_g3_mc_lr:1;
        RBus_UInt32  regr_kphase_g3_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g3_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g3_in_me2_index:3;
        RBus_UInt32  regr_kphase_g3_mc_phase:7;
        RBus_UInt32  regr_kphase_g3_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g3_mc_cts_i_index:3;
    };
}kphase_kphase_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g4_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g4_me2_phase:6;
        RBus_UInt32  regr_kphase_g4_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g4_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g4_in_final_phase:1;
        RBus_UInt32  regr_kphase_g4_in_mc_index:3;
        RBus_UInt32  regr_kphase_g4_in_me_index:3;
        RBus_UInt32  regr_kphase_g4_out_film_phase:6;
        RBus_UInt32  regr_kphase_g4_out_phase:6;
    };
}kphase_kphase_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g4_in_lr:1;
        RBus_UInt32  regr_kphase_g4_me_last_phase:1;
        RBus_UInt32  regr_kphase_g4_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g4_osd_lr:1;
        RBus_UInt32  regr_kphase_g4_out_lr:1;
        RBus_UInt32  regr_kphase_g4_me_lr:1;
        RBus_UInt32  regr_kphase_g4_mc_lr:1;
        RBus_UInt32  regr_kphase_g4_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g4_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g4_in_me2_index:3;
        RBus_UInt32  regr_kphase_g4_mc_phase:7;
        RBus_UInt32  regr_kphase_g4_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g4_mc_cts_i_index:3;
    };
}kphase_kphase_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g5_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g5_me2_phase:6;
        RBus_UInt32  regr_kphase_g5_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g5_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g5_in_final_phase:1;
        RBus_UInt32  regr_kphase_g5_in_mc_index:3;
        RBus_UInt32  regr_kphase_g5_in_me_index:3;
        RBus_UInt32  regr_kphase_g5_out_film_phase:6;
        RBus_UInt32  regr_kphase_g5_out_phase:6;
    };
}kphase_kphase_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g5_in_lr:1;
        RBus_UInt32  regr_kphase_g5_me_last_phase:1;
        RBus_UInt32  regr_kphase_g5_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g5_osd_lr:1;
        RBus_UInt32  regr_kphase_g5_out_lr:1;
        RBus_UInt32  regr_kphase_g5_me_lr:1;
        RBus_UInt32  regr_kphase_g5_mc_lr:1;
        RBus_UInt32  regr_kphase_g5_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g5_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g5_in_me2_index:3;
        RBus_UInt32  regr_kphase_g5_mc_phase:7;
        RBus_UInt32  regr_kphase_g5_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g5_mc_cts_i_index:3;
    };
}kphase_kphase_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g6_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g6_me2_phase:6;
        RBus_UInt32  regr_kphase_g6_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g6_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g6_in_final_phase:1;
        RBus_UInt32  regr_kphase_g6_in_mc_index:3;
        RBus_UInt32  regr_kphase_g6_in_me_index:3;
        RBus_UInt32  regr_kphase_g6_out_film_phase:6;
        RBus_UInt32  regr_kphase_g6_out_phase:6;
    };
}kphase_kphase_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g6_in_lr:1;
        RBus_UInt32  regr_kphase_g6_me_last_phase:1;
        RBus_UInt32  regr_kphase_g6_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g6_osd_lr:1;
        RBus_UInt32  regr_kphase_g6_out_lr:1;
        RBus_UInt32  regr_kphase_g6_me_lr:1;
        RBus_UInt32  regr_kphase_g6_mc_lr:1;
        RBus_UInt32  regr_kphase_g6_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g6_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g6_in_me2_index:3;
        RBus_UInt32  regr_kphase_g6_mc_phase:7;
        RBus_UInt32  regr_kphase_g6_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g6_mc_cts_i_index:3;
    };
}kphase_kphase_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g7_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g7_me2_phase:6;
        RBus_UInt32  regr_kphase_g7_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g7_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g7_in_final_phase:1;
        RBus_UInt32  regr_kphase_g7_in_mc_index:3;
        RBus_UInt32  regr_kphase_g7_in_me_index:3;
        RBus_UInt32  regr_kphase_g7_out_film_phase:6;
        RBus_UInt32  regr_kphase_g7_out_phase:6;
    };
}kphase_kphase_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g7_in_lr:1;
        RBus_UInt32  regr_kphase_g7_me_last_phase:1;
        RBus_UInt32  regr_kphase_g7_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g7_osd_lr:1;
        RBus_UInt32  regr_kphase_g7_out_lr:1;
        RBus_UInt32  regr_kphase_g7_me_lr:1;
        RBus_UInt32  regr_kphase_g7_mc_lr:1;
        RBus_UInt32  regr_kphase_g7_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g7_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g7_in_me2_index:3;
        RBus_UInt32  regr_kphase_g7_mc_phase:7;
        RBus_UInt32  regr_kphase_g7_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g7_mc_cts_i_index:3;
    };
}kphase_kphase_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g8_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g8_me2_phase:6;
        RBus_UInt32  regr_kphase_g8_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g8_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g8_in_final_phase:1;
        RBus_UInt32  regr_kphase_g8_in_mc_index:3;
        RBus_UInt32  regr_kphase_g8_in_me_index:3;
        RBus_UInt32  regr_kphase_g8_out_film_phase:6;
        RBus_UInt32  regr_kphase_g8_out_phase:6;
    };
}kphase_kphase_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g8_in_lr:1;
        RBus_UInt32  regr_kphase_g8_me_last_phase:1;
        RBus_UInt32  regr_kphase_g8_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g8_osd_lr:1;
        RBus_UInt32  regr_kphase_g8_out_lr:1;
        RBus_UInt32  regr_kphase_g8_me_lr:1;
        RBus_UInt32  regr_kphase_g8_mc_lr:1;
        RBus_UInt32  regr_kphase_g8_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g8_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g8_in_me2_index:3;
        RBus_UInt32  regr_kphase_g8_mc_phase:7;
        RBus_UInt32  regr_kphase_g8_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g8_mc_cts_i_index:3;
    };
}kphase_kphase_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g9_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g9_me2_phase:6;
        RBus_UInt32  regr_kphase_g9_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g9_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g9_in_final_phase:1;
        RBus_UInt32  regr_kphase_g9_in_mc_index:3;
        RBus_UInt32  regr_kphase_g9_in_me_index:3;
        RBus_UInt32  regr_kphase_g9_out_film_phase:6;
        RBus_UInt32  regr_kphase_g9_out_phase:6;
    };
}kphase_kphase_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g9_in_lr:1;
        RBus_UInt32  regr_kphase_g9_me_last_phase:1;
        RBus_UInt32  regr_kphase_g9_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g9_osd_lr:1;
        RBus_UInt32  regr_kphase_g9_out_lr:1;
        RBus_UInt32  regr_kphase_g9_me_lr:1;
        RBus_UInt32  regr_kphase_g9_mc_lr:1;
        RBus_UInt32  regr_kphase_g9_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g9_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g9_in_me2_index:3;
        RBus_UInt32  regr_kphase_g9_mc_phase:7;
        RBus_UInt32  regr_kphase_g9_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g9_mc_cts_i_index:3;
    };
}kphase_kphase_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g10_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g10_me2_phase:6;
        RBus_UInt32  regr_kphase_g10_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g10_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g10_in_final_phase:1;
        RBus_UInt32  regr_kphase_g10_in_mc_index:3;
        RBus_UInt32  regr_kphase_g10_in_me_index:3;
        RBus_UInt32  regr_kphase_g10_out_film_phase:6;
        RBus_UInt32  regr_kphase_g10_out_phase:6;
    };
}kphase_kphase_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g10_in_lr:1;
        RBus_UInt32  regr_kphase_g10_me_last_phase:1;
        RBus_UInt32  regr_kphase_g10_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g10_osd_lr:1;
        RBus_UInt32  regr_kphase_g10_out_lr:1;
        RBus_UInt32  regr_kphase_g10_me_lr:1;
        RBus_UInt32  regr_kphase_g10_mc_lr:1;
        RBus_UInt32  regr_kphase_g10_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g10_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g10_in_me2_index:3;
        RBus_UInt32  regr_kphase_g10_mc_phase:7;
        RBus_UInt32  regr_kphase_g10_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g10_mc_cts_i_index:3;
    };
}kphase_kphase_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g11_me2_first_phase:1;
        RBus_UInt32  regr_kphase_g11_me2_phase:6;
        RBus_UInt32  regr_kphase_g11_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g11_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g11_in_final_phase:1;
        RBus_UInt32  regr_kphase_g11_in_mc_index:3;
        RBus_UInt32  regr_kphase_g11_in_me_index:3;
        RBus_UInt32  regr_kphase_g11_out_film_phase:6;
        RBus_UInt32  regr_kphase_g11_out_phase:6;
    };
}kphase_kphase_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g11_in_lr:1;
        RBus_UInt32  regr_kphase_g11_me_last_phase:1;
        RBus_UInt32  regr_kphase_g11_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g11_osd_lr:1;
        RBus_UInt32  regr_kphase_g11_out_lr:1;
        RBus_UInt32  regr_kphase_g11_me_lr:1;
        RBus_UInt32  regr_kphase_g11_mc_lr:1;
        RBus_UInt32  regr_kphase_g11_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g11_me2_ppfv_buf_idx:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  regr_kphase_g11_in_me2_index:3;
        RBus_UInt32  regr_kphase_g11_mc_phase:7;
        RBus_UInt32  regr_kphase_g11_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g11_mc_cts_i_index:3;
    };
}kphase_kphase_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KPHASE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_force_mc_cts_i_index:3;
        RBus_UInt32  kphase_force_mc_cts_index_en:1;
        RBus_UInt32  kphase_force_mc_cts_p_index:3;
        RBus_UInt32  kphase_in_3d_fs_enable:1;
        RBus_UInt32  kphase_force_mc_phase:7;
        RBus_UInt32  kphase_force_mc_phase_en:1;
        RBus_UInt32  kphase_force_mc_mode:3;
        RBus_UInt32  kphase_force_mc_mode_en:1;
        RBus_UInt32  kphase_force_mc_lf_index:4;
        RBus_UInt32  kphase_force_mc_lf_index_en:1;
        RBus_UInt32  kphase_force_mc_hf_index:2;
        RBus_UInt32  kphase_force_mc_hf_index_en:1;
        RBus_UInt32  kphase_force_crtc_mc_lf_index:4;
    };
}kphase_kphase_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_force_crtc_mc_lf_index_en:1;
        RBus_UInt32  kphase_force_crtc_mc_hf_index:2;
        RBus_UInt32  kphase_force_crtc_mc_hf_index_en:1;
        RBus_UInt32  kphase_force_in_me_index:3;
        RBus_UInt32  kphase_force_in_me_index_en:1;
        RBus_UInt32  kphase_force_in_mc_index:3;
        RBus_UInt32  kphase_force_in_mc_index_en:1;
        RBus_UInt32  kphase_force_me_dts_i_index:3;
        RBus_UInt32  kphase_force_me_dts_index_en:1;
        RBus_UInt32  kphase_force_me_dts_p_index:3;
        RBus_UInt32  kphase_in_lr_inv:1;
        RBus_UInt32  kphase_force_me2_phase:6;
        RBus_UInt32  kphase_force_me2_phase_en:1;
        RBus_UInt32  kphase_force_me2_first_phase:1;
        RBus_UInt32  kphase_force_me_last_phase:1;
        RBus_UInt32  kphase_force_me_last_phase_en:1;
        RBus_UInt32  kphase_force_in_final_phase:1;
        RBus_UInt32  kphase_force_in_final_phase_en:1;
    };
}kphase_kphase_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_force_mc_lr_en:1;
        RBus_UInt32  kphase_force_mc_lr:1;
        RBus_UInt32  kphase_force_out_lr_en:1;
        RBus_UInt32  kphase_force_out_lr:1;
        RBus_UInt32  kphase_force_osd_lr_en:1;
        RBus_UInt32  kphase_force_osd_lr:1;
        RBus_UInt32  kphase_force_me_lr_en:1;
        RBus_UInt32  kphase_force_me_lr:1;
        RBus_UInt32  kphase_force_in_me_offset_en:1;
        RBus_UInt32  kphase_force_in_me_offset:3;
        RBus_UInt32  kphase_force_in_mc_offset_en:1;
        RBus_UInt32  kphase_force_in_mc_offset:3;
        RBus_UInt32  kphase_out_phase_ini:4;
        RBus_UInt32  kphase_out_phase_slf_gen:2;
        RBus_UInt32  kphase_frame_hold_enable:1;
        RBus_UInt32  kphase_mc_frame_hold:1;
        RBus_UInt32  kphase_me_frame_hold:1;
        RBus_UInt32  kphase_out_phase_type:6;
        RBus_UInt32  kphase_force_me2_first_phase_en:1;
    };
}kphase_kphase_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_sw_film_phase:6;
        RBus_UInt32  kphase_in_film_phase_offset:6;
        RBus_UInt32  kphase_out_film_phase_offset:6;
        RBus_UInt32  kphase_film_phase_type:6;
        RBus_UInt32  kphase_sw_film_en:1;
        RBus_UInt32  kphase_auto_film_phase_en:1;
        RBus_UInt32  kphase_auto_film_phase_reset:1;
        RBus_UInt32  kphase_in_reset_source_sel:1;
        RBus_UInt32  kphase_film_mode:3;
        RBus_UInt32  kphase_out_3d_enable:1;
    };
}kphase_kphase_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me_index_initial:3;
        RBus_UInt32  kphase_in_me_index_reset:1;
        RBus_UInt32  kphase_in_mc_index_initial:3;
        RBus_UInt32  kphase_in_mc_index_reset:1;
        RBus_UInt32  kphase_in_me_index_bsize:4;
        RBus_UInt32  kphase_in_mc_index_bsize:4;
        RBus_UInt32  kphase_lut_sel:1;
        RBus_UInt32  kphase_dec_length:8;
        RBus_UInt32  kphase_logo_frame_hold:1;
        RBus_UInt32  kphase_in_lr_ctl_for_index:1;
        RBus_UInt32  kphase_meter_enable:1;
        RBus_UInt32  kphase_in_memc_index_reset:1;
        RBus_UInt32  kphase_mc_mode_lf_update_en:1;
        RBus_UInt32  kphase_mc_mode_hf_update_en:1;
        RBus_UInt32  kphase_me2_frame_hold:1;
    };
}kphase_kphase_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p00:8;
        RBus_UInt32  kphase_in_p01:8;
        RBus_UInt32  kphase_in_p02:8;
        RBus_UInt32  kphase_in_p03:8;
    };
}kphase_kphase_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p04:8;
        RBus_UInt32  kphase_in_p05:8;
        RBus_UInt32  kphase_in_p06:8;
        RBus_UInt32  kphase_in_p07:8;
    };
}kphase_kphase_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p08:8;
        RBus_UInt32  kphase_in_p09:8;
        RBus_UInt32  kphase_in_p10:8;
        RBus_UInt32  kphase_in_p11:8;
    };
}kphase_kphase_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p12:8;
        RBus_UInt32  kphase_in_p13:8;
        RBus_UInt32  kphase_in_p14:8;
        RBus_UInt32  kphase_in_p15:8;
    };
}kphase_kphase_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p16:8;
        RBus_UInt32  kphase_in_p17:8;
        RBus_UInt32  kphase_in_p18:8;
        RBus_UInt32  kphase_in_p19:8;
    };
}kphase_kphase_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p20:8;
        RBus_UInt32  kphase_in_p21:8;
        RBus_UInt32  kphase_in_p22:8;
        RBus_UInt32  kphase_in_p23:8;
    };
}kphase_kphase_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p24:8;
        RBus_UInt32  kphase_in_p25:8;
        RBus_UInt32  kphase_in_p26:8;
        RBus_UInt32  kphase_in_p27:8;
    };
}kphase_kphase_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p28:8;
        RBus_UInt32  kphase_in_p29:8;
        RBus_UInt32  kphase_in_p30:8;
        RBus_UInt32  kphase_in_p31:8;
    };
}kphase_kphase_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p32:8;
        RBus_UInt32  kphase_in_p33:8;
        RBus_UInt32  kphase_in_p34:8;
        RBus_UInt32  kphase_in_p35:8;
    };
}kphase_kphase_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p36:8;
        RBus_UInt32  kphase_in_p37:8;
        RBus_UInt32  kphase_in_p38:8;
        RBus_UInt32  kphase_in_p39:8;
    };
}kphase_kphase_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p40:8;
        RBus_UInt32  kphase_in_p41:8;
        RBus_UInt32  kphase_in_p42:8;
        RBus_UInt32  kphase_in_p43:8;
    };
}kphase_kphase_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p44:8;
        RBus_UInt32  kphase_in_p45:8;
        RBus_UInt32  kphase_in_p46:8;
        RBus_UInt32  kphase_in_p47:8;
    };
}kphase_kphase_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p48:8;
        RBus_UInt32  kphase_in_p49:8;
        RBus_UInt32  kphase_in_p50:8;
        RBus_UInt32  kphase_in_p51:8;
    };
}kphase_kphase_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p52:8;
        RBus_UInt32  kphase_in_p53:8;
        RBus_UInt32  kphase_in_p54:8;
        RBus_UInt32  kphase_in_p55:8;
    };
}kphase_kphase_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p56:8;
        RBus_UInt32  kphase_in_p57:8;
        RBus_UInt32  kphase_in_p58:8;
        RBus_UInt32  kphase_in_p59:8;
    };
}kphase_kphase_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_p60:8;
        RBus_UInt32  kphase_in_p61:8;
        RBus_UInt32  kphase_in_p62:8;
        RBus_UInt32  kphase_in_p63:8;
    };
}kphase_kphase_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_dec_mtpt_start:8;
        RBus_UInt32  kphase_dec_mtpt_end:8;
        RBus_UInt32  kphase_force_mc_mode_hf:3;
        RBus_UInt32  kphase_sram_ls_en:1;
        RBus_UInt32  kphase_sram_ls_value:1;
        RBus_UInt32  kphase_force_me2_lr_en:1;
        RBus_UInt32  kphase_force_me2_lr:1;
        RBus_UInt32  kphase_film_mode_proc_enter_film32_id:3;
        RBus_UInt32  kphase_film_mode_proc_enter_film22_id:1;
        RBus_UInt32  kphase_film_mode_proc_quit_film32_id:3;
        RBus_UInt32  kphase_film_mode_proc_quit_film22_id:1;
        RBus_UInt32  kphase_film_mode_proc_func_en:1;
    };
}kphase_kphase_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p00:4;
        RBus_UInt32  kphase_in_me2_p01:4;
        RBus_UInt32  kphase_in_me2_p02:4;
        RBus_UInt32  kphase_in_me2_p03:4;
        RBus_UInt32  kphase_in_me2_p04:4;
        RBus_UInt32  kphase_in_me2_p05:4;
        RBus_UInt32  kphase_in_me2_p06:4;
        RBus_UInt32  kphase_in_me2_p07:4;
    };
}kphase_kphase_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p08:4;
        RBus_UInt32  kphase_in_me2_p09:4;
        RBus_UInt32  kphase_in_me2_p10:4;
        RBus_UInt32  kphase_in_me2_p11:4;
        RBus_UInt32  kphase_in_me2_p12:4;
        RBus_UInt32  kphase_in_me2_p13:4;
        RBus_UInt32  kphase_in_me2_p14:4;
        RBus_UInt32  kphase_in_me2_p15:4;
    };
}kphase_kphase_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p16:4;
        RBus_UInt32  kphase_in_me2_p17:4;
        RBus_UInt32  kphase_in_me2_p18:4;
        RBus_UInt32  kphase_in_me2_p19:4;
        RBus_UInt32  kphase_in_me2_p20:4;
        RBus_UInt32  kphase_in_me2_p21:4;
        RBus_UInt32  kphase_in_me2_p22:4;
        RBus_UInt32  kphase_in_me2_p23:4;
    };
}kphase_kphase_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p24:4;
        RBus_UInt32  kphase_in_me2_p25:4;
        RBus_UInt32  kphase_in_me2_p26:4;
        RBus_UInt32  kphase_in_me2_p27:4;
        RBus_UInt32  kphase_in_me2_p28:4;
        RBus_UInt32  kphase_in_me2_p29:4;
        RBus_UInt32  kphase_in_me2_p30:4;
        RBus_UInt32  kphase_in_me2_p31:4;
    };
}kphase_kphase_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p32:4;
        RBus_UInt32  kphase_in_me2_p33:4;
        RBus_UInt32  kphase_in_me2_p34:4;
        RBus_UInt32  kphase_in_me2_p35:4;
        RBus_UInt32  kphase_in_me2_p36:4;
        RBus_UInt32  kphase_in_me2_p37:4;
        RBus_UInt32  kphase_in_me2_p38:4;
        RBus_UInt32  kphase_in_me2_p39:4;
    };
}kphase_kphase_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p40:4;
        RBus_UInt32  kphase_in_me2_p41:4;
        RBus_UInt32  kphase_in_me2_p42:4;
        RBus_UInt32  kphase_in_me2_p43:4;
        RBus_UInt32  kphase_in_me2_p44:4;
        RBus_UInt32  kphase_in_me2_p45:4;
        RBus_UInt32  kphase_in_me2_p46:4;
        RBus_UInt32  kphase_in_me2_p47:4;
    };
}kphase_kphase_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p48:4;
        RBus_UInt32  kphase_in_me2_p49:4;
        RBus_UInt32  kphase_in_me2_p50:4;
        RBus_UInt32  kphase_in_me2_p51:4;
        RBus_UInt32  kphase_in_me2_p52:4;
        RBus_UInt32  kphase_in_me2_p53:4;
        RBus_UInt32  kphase_in_me2_p54:4;
        RBus_UInt32  kphase_in_me2_p55:4;
    };
}kphase_kphase_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_in_me2_p56:4;
        RBus_UInt32  kphase_in_me2_p57:4;
        RBus_UInt32  kphase_in_me2_p58:4;
        RBus_UInt32  kphase_in_me2_p59:4;
        RBus_UInt32  kphase_in_me2_p60:4;
        RBus_UInt32  kphase_in_me2_p61:4;
        RBus_UInt32  kphase_in_me2_p62:4;
        RBus_UInt32  kphase_in_me2_p63:4;
    };
}kphase_kphase_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_force_in_me2_offset_en:1;
        RBus_UInt32  kphase_force_in_me2_offset:3;
        RBus_UInt32  kphase_force_in_me2_index_en:1;
        RBus_UInt32  kphase_force_in_me2_index:3;
        RBus_UInt32  kphase_in_me2_index_initial:3;
        RBus_UInt32  kphase_in_me2_index_bsize:4;
        RBus_UInt32  kphase_force_me2_lbme_index_en:1;
        RBus_UInt32  kphase_force_me2_lbme_i_index:3;
        RBus_UInt32  kphase_force_me2_lbme_p_index:3;
        RBus_UInt32  kphase_force_me2_ppfv_buf_idx_en:1;
        RBus_UInt32  kphase_force_me2_ppfv_buf_idx:2;
        RBus_UInt32  kphase_in_frame_hold_func_en:4;
        RBus_UInt32  kphase_lut_sel_latch_sel:1;
        RBus_UInt32  kphase_dec_data_vs_clr_en:1;
        RBus_UInt32  kme_kphase_test1:1;
    };
}kphase_kphase_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kphase_lbmc_idx3_map:4;
        RBus_UInt32  kphase_lbmc_idx4_map:4;
        RBus_UInt32  kphase_lbmc_idx_mpa_en:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  lbmc_lf_idx_now:4;
        RBus_UInt32  lbmc_hf_idx_now:2;
        RBus_UInt32  res2:2;
    };
}kphase_kphase_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in_me_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  lbme_i_index:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  lbme_p_index:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  lbme2_i_index:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  lbme2_p_index:3;
        RBus_UInt32  res7:5;
    };
}kphase_kphase_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  in_mc_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  lbmc_i_index:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  lbmc_p_index:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  regr_in_film_phase:6;
        RBus_UInt32  res4:14;
    };
}kphase_kphase_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g0_in_phase:4;
        RBus_UInt32  regr_kphase_g1_in_phase:4;
        RBus_UInt32  regr_kphase_g2_in_phase:4;
        RBus_UInt32  regr_kphase_g3_in_phase:4;
        RBus_UInt32  regr_kphase_g4_in_phase:4;
        RBus_UInt32  regr_kphase_g5_in_phase:4;
        RBus_UInt32  regr_kphase_g6_in_phase:4;
        RBus_UInt32  regr_kphase_g7_in_phase:4;
    };
}kphase_kphase_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g8_in_phase:4;
        RBus_UInt32  regr_kphase_g9_in_phase:4;
        RBus_UInt32  regr_kphase_g10_in_phase:4;
        RBus_UInt32  regr_kphase_g11_in_phase:4;
        RBus_UInt32  res1:16;
    };
}kphase_kphase_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_out_phase:6;
        RBus_UInt32  regr_kphase_out_film_phase:6;
        RBus_UInt32  regr_kphase_in_phase:4;
        RBus_UInt32  regr_kphase_in_film_phase:6;
        RBus_UInt32  regr_kphase_dec_no_match:1;
        RBus_UInt32  regr_kphase_in_lr:1;
        RBus_UInt32  res1:8;
    };
}kphase_kphase_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g0_out_phase:6;
        RBus_UInt32  regr_kphase_g0_out_film_phase:6;
        RBus_UInt32  regr_kphase_g0_in_me_index:3;
        RBus_UInt32  regr_kphase_g0_in_mc_index:3;
        RBus_UInt32  regr_kphase_g0_in_final_phase:1;
        RBus_UInt32  regr_kphase_g0_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g0_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g0_me2_phase:6;
        RBus_UInt32  regr_kphase_g0_me2_first_phase:1;
    };
}kphase_kphase_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g0_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g0_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g0_mc_phase:7;
        RBus_UInt32  regr_kphase_g0_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g0_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g0_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g0_mc_lr:1;
        RBus_UInt32  regr_kphase_g0_me_lr:1;
        RBus_UInt32  regr_kphase_g0_out_lr:1;
        RBus_UInt32  regr_kphase_g0_osd_lr:1;
        RBus_UInt32  regr_kphase_g0_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g0_me_last_phase:1;
        RBus_UInt32  regr_kphase_g0_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g1_out_phase:6;
        RBus_UInt32  regr_kphase_g1_out_film_phase:6;
        RBus_UInt32  regr_kphase_g1_in_me_index:3;
        RBus_UInt32  regr_kphase_g1_in_mc_index:3;
        RBus_UInt32  regr_kphase_g1_in_final_phase:1;
        RBus_UInt32  regr_kphase_g1_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g1_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g1_me2_phase:6;
        RBus_UInt32  regr_kphase_g1_me2_first_phase:1;
    };
}kphase_kphase_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g1_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g1_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g1_mc_phase:7;
        RBus_UInt32  regr_kphase_g1_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g1_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g1_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g1_mc_lr:1;
        RBus_UInt32  regr_kphase_g1_me_lr:1;
        RBus_UInt32  regr_kphase_g1_out_lr:1;
        RBus_UInt32  regr_kphase_g1_osd_lr:1;
        RBus_UInt32  regr_kphase_g1_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g1_me_last_phase:1;
        RBus_UInt32  regr_kphase_g1_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g2_out_phase:6;
        RBus_UInt32  regr_kphase_g2_out_film_phase:6;
        RBus_UInt32  regr_kphase_g2_in_me_index:3;
        RBus_UInt32  regr_kphase_g2_in_mc_index:3;
        RBus_UInt32  regr_kphase_g2_in_final_phase:1;
        RBus_UInt32  regr_kphase_g2_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g2_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g2_me2_phase:6;
        RBus_UInt32  regr_kphase_g2_me2_first_phase:1;
    };
}kphase_kphase_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g2_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g2_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g2_mc_phase:7;
        RBus_UInt32  regr_kphase_g2_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g2_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g2_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g2_mc_lr:1;
        RBus_UInt32  regr_kphase_g2_me_lr:1;
        RBus_UInt32  regr_kphase_g2_out_lr:1;
        RBus_UInt32  regr_kphase_g2_osd_lr:1;
        RBus_UInt32  regr_kphase_g2_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g2_me_last_phase:1;
        RBus_UInt32  regr_kphase_g2_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g3_out_phase:6;
        RBus_UInt32  regr_kphase_g3_out_film_phase:6;
        RBus_UInt32  regr_kphase_g3_in_me_index:3;
        RBus_UInt32  regr_kphase_g3_in_mc_index:3;
        RBus_UInt32  regr_kphase_g3_in_final_phase:1;
        RBus_UInt32  regr_kphase_g3_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g3_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g3_me2_phase:6;
        RBus_UInt32  regr_kphase_g3_me2_first_phase:1;
    };
}kphase_kphase_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g3_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g3_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g3_mc_phase:7;
        RBus_UInt32  regr_kphase_g3_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g3_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g3_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g3_mc_lr:1;
        RBus_UInt32  regr_kphase_g3_me_lr:1;
        RBus_UInt32  regr_kphase_g3_out_lr:1;
        RBus_UInt32  regr_kphase_g3_osd_lr:1;
        RBus_UInt32  regr_kphase_g3_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g3_me_last_phase:1;
        RBus_UInt32  regr_kphase_g3_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g4_out_phase:6;
        RBus_UInt32  regr_kphase_g4_out_film_phase:6;
        RBus_UInt32  regr_kphase_g4_in_me_index:3;
        RBus_UInt32  regr_kphase_g4_in_mc_index:3;
        RBus_UInt32  regr_kphase_g4_in_final_phase:1;
        RBus_UInt32  regr_kphase_g4_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g4_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g4_me2_phase:6;
        RBus_UInt32  regr_kphase_g4_me2_first_phase:1;
    };
}kphase_kphase_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g4_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g4_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g4_mc_phase:7;
        RBus_UInt32  regr_kphase_g4_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g4_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g4_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g4_mc_lr:1;
        RBus_UInt32  regr_kphase_g4_me_lr:1;
        RBus_UInt32  regr_kphase_g4_out_lr:1;
        RBus_UInt32  regr_kphase_g4_osd_lr:1;
        RBus_UInt32  regr_kphase_g4_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g4_me_last_phase:1;
        RBus_UInt32  regr_kphase_g4_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g5_out_phase:6;
        RBus_UInt32  regr_kphase_g5_out_film_phase:6;
        RBus_UInt32  regr_kphase_g5_in_me_index:3;
        RBus_UInt32  regr_kphase_g5_in_mc_index:3;
        RBus_UInt32  regr_kphase_g5_in_final_phase:1;
        RBus_UInt32  regr_kphase_g5_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g5_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g5_me2_phase:6;
        RBus_UInt32  regr_kphase_g5_me2_first_phase:1;
    };
}kphase_kphase_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g5_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g5_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g5_mc_phase:7;
        RBus_UInt32  regr_kphase_g5_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g5_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g5_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g5_mc_lr:1;
        RBus_UInt32  regr_kphase_g5_me_lr:1;
        RBus_UInt32  regr_kphase_g5_out_lr:1;
        RBus_UInt32  regr_kphase_g5_osd_lr:1;
        RBus_UInt32  regr_kphase_g5_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g5_me_last_phase:1;
        RBus_UInt32  regr_kphase_g5_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g6_out_phase:6;
        RBus_UInt32  regr_kphase_g6_out_film_phase:6;
        RBus_UInt32  regr_kphase_g6_in_me_index:3;
        RBus_UInt32  regr_kphase_g6_in_mc_index:3;
        RBus_UInt32  regr_kphase_g6_in_final_phase:1;
        RBus_UInt32  regr_kphase_g6_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g6_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g6_me2_phase:6;
        RBus_UInt32  regr_kphase_g6_me2_first_phase:1;
    };
}kphase_kphase_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g6_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g6_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g6_mc_phase:7;
        RBus_UInt32  regr_kphase_g6_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g6_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g6_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g6_mc_lr:1;
        RBus_UInt32  regr_kphase_g6_me_lr:1;
        RBus_UInt32  regr_kphase_g6_out_lr:1;
        RBus_UInt32  regr_kphase_g6_osd_lr:1;
        RBus_UInt32  regr_kphase_g6_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g6_me_last_phase:1;
        RBus_UInt32  regr_kphase_g6_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g7_out_phase:6;
        RBus_UInt32  regr_kphase_g7_out_film_phase:6;
        RBus_UInt32  regr_kphase_g7_in_me_index:3;
        RBus_UInt32  regr_kphase_g7_in_mc_index:3;
        RBus_UInt32  regr_kphase_g7_in_final_phase:1;
        RBus_UInt32  regr_kphase_g7_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g7_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g7_me2_phase:6;
        RBus_UInt32  regr_kphase_g7_me2_first_phase:1;
    };
}kphase_kphase_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g7_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g7_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g7_mc_phase:7;
        RBus_UInt32  regr_kphase_g7_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g7_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g7_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g7_mc_lr:1;
        RBus_UInt32  regr_kphase_g7_me_lr:1;
        RBus_UInt32  regr_kphase_g7_out_lr:1;
        RBus_UInt32  regr_kphase_g7_osd_lr:1;
        RBus_UInt32  regr_kphase_g7_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g7_me_last_phase:1;
        RBus_UInt32  regr_kphase_g7_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g8_out_phase:6;
        RBus_UInt32  regr_kphase_g8_out_film_phase:6;
        RBus_UInt32  regr_kphase_g8_in_me_index:3;
        RBus_UInt32  regr_kphase_g8_in_mc_index:3;
        RBus_UInt32  regr_kphase_g8_in_final_phase:1;
        RBus_UInt32  regr_kphase_g8_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g8_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g8_me2_phase:6;
        RBus_UInt32  regr_kphase_g8_me2_first_phase:1;
    };
}kphase_kphase_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g8_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g8_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g8_mc_phase:7;
        RBus_UInt32  regr_kphase_g8_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g8_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g8_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g8_mc_lr:1;
        RBus_UInt32  regr_kphase_g8_me_lr:1;
        RBus_UInt32  regr_kphase_g8_out_lr:1;
        RBus_UInt32  regr_kphase_g8_osd_lr:1;
        RBus_UInt32  regr_kphase_g8_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g8_me_last_phase:1;
        RBus_UInt32  regr_kphase_g8_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g9_out_phase:6;
        RBus_UInt32  regr_kphase_g9_out_film_phase:6;
        RBus_UInt32  regr_kphase_g9_in_me_index:3;
        RBus_UInt32  regr_kphase_g9_in_mc_index:3;
        RBus_UInt32  regr_kphase_g9_in_final_phase:1;
        RBus_UInt32  regr_kphase_g9_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g9_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g9_me2_phase:6;
        RBus_UInt32  regr_kphase_g9_me2_first_phase:1;
    };
}kphase_kphase_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g9_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g9_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g9_mc_phase:7;
        RBus_UInt32  regr_kphase_g9_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g9_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g9_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g9_mc_lr:1;
        RBus_UInt32  regr_kphase_g9_me_lr:1;
        RBus_UInt32  regr_kphase_g9_out_lr:1;
        RBus_UInt32  regr_kphase_g9_osd_lr:1;
        RBus_UInt32  regr_kphase_g9_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g9_me_last_phase:1;
        RBus_UInt32  regr_kphase_g9_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g10_out_phase:6;
        RBus_UInt32  regr_kphase_g10_out_film_phase:6;
        RBus_UInt32  regr_kphase_g10_in_me_index:3;
        RBus_UInt32  regr_kphase_g10_in_mc_index:3;
        RBus_UInt32  regr_kphase_g10_in_final_phase:1;
        RBus_UInt32  regr_kphase_g10_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g10_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g10_me2_phase:6;
        RBus_UInt32  regr_kphase_g10_me2_first_phase:1;
    };
}kphase_kphase_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g10_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g10_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g10_mc_phase:7;
        RBus_UInt32  regr_kphase_g10_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g10_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g10_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g10_mc_lr:1;
        RBus_UInt32  regr_kphase_g10_me_lr:1;
        RBus_UInt32  regr_kphase_g10_out_lr:1;
        RBus_UInt32  regr_kphase_g10_osd_lr:1;
        RBus_UInt32  regr_kphase_g10_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g10_me_last_phase:1;
        RBus_UInt32  regr_kphase_g10_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g11_out_phase:6;
        RBus_UInt32  regr_kphase_g11_out_film_phase:6;
        RBus_UInt32  regr_kphase_g11_in_me_index:3;
        RBus_UInt32  regr_kphase_g11_in_mc_index:3;
        RBus_UInt32  regr_kphase_g11_in_final_phase:1;
        RBus_UInt32  regr_kphase_g11_me_dts_i_index:3;
        RBus_UInt32  regr_kphase_g11_me_dts_p_index:3;
        RBus_UInt32  regr_kphase_g11_me2_phase:6;
        RBus_UInt32  regr_kphase_g11_me2_first_phase:1;
    };
}kphase_kphase_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kphase_g11_mc_cts_i_index:3;
        RBus_UInt32  regr_kphase_g11_mc_cts_p_index:3;
        RBus_UInt32  regr_kphase_g11_mc_phase:7;
        RBus_UInt32  regr_kphase_g11_in_me2_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_kphase_g11_me2_ppfv_buf_idx:2;
        RBus_UInt32  regr_kphase_g11_me2_lbme_p_index:3;
        RBus_UInt32  regr_kphase_g11_mc_lr:1;
        RBus_UInt32  regr_kphase_g11_me_lr:1;
        RBus_UInt32  regr_kphase_g11_out_lr:1;
        RBus_UInt32  regr_kphase_g11_osd_lr:1;
        RBus_UInt32  regr_kphase_g11_me2_lbme_i_index:3;
        RBus_UInt32  regr_kphase_g11_me_last_phase:1;
        RBus_UInt32  regr_kphase_g11_in_lr:1;
        RBus_UInt32  res2:1;
    };
}kphase_kphase_fc_RBUS;




#endif 


#endif 
