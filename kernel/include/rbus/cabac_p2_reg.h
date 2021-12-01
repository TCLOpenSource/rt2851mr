/**
* @file Merlin5_VE_CABACP2_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_CABAC_P2_REG_H_
#define _RBUS_CABAC_P2_REG_H_

#include "rbus_types.h"



//  CABAC_P2 Register Address
#define  CABAC_P2_cabac_p2_cntl3                                                0x1800E360
#define  CABAC_P2_cabac_p2_cntl3_reg_addr                                        "0xB800E360"
#define  CABAC_P2_cabac_p2_cntl3_reg                                             0xB800E360
#define  CABAC_P2_cabac_p2_cntl3_inst_addr                                       "0x0000"
#define  set_CABAC_P2_cabac_p2_cntl3_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl3_reg)=data)
#define  get_CABAC_P2_cabac_p2_cntl3_reg                                         (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl3_reg))
#define  CABAC_P2_cabac_p2_cntl3_write_enable7_shift                             (30)
#define  CABAC_P2_cabac_p2_cntl3_reset_cabacp2_bsfifo_shift                      (29)
#define  CABAC_P2_cabac_p2_cntl3_write_enable6_shift                             (28)
#define  CABAC_P2_cabac_p2_cntl3_decode_en_cabacp2_shift                         (27)
#define  CABAC_P2_cabac_p2_cntl3_write_enable5_shift                             (26)
#define  CABAC_P2_cabac_p2_cntl3_cabac_1p_mode_shift                             (25)
#define  CABAC_P2_cabac_p2_cntl3_write_enable4_shift                             (24)
#define  CABAC_P2_cabac_p2_cntl3_cabac_p2_p3_shift                               (23)
#define  CABAC_P2_cabac_p2_cntl3_write_enable3_shift                             (22)
#define  CABAC_P2_cabac_p2_cntl3_cabac_p2_go_shift                               (21)
#define  CABAC_P2_cabac_p2_cntl3_write_enable2_shift                             (20)
#define  CABAC_P2_cabac_p2_cntl3_latch_enable_shift                              (19)
#define  CABAC_P2_cabac_p2_cntl3_write_enable1_shift                             (18)
#define  CABAC_P2_cabac_p2_cntl3_codioffset_shift                                (9)
#define  CABAC_P2_cabac_p2_cntl3_codirange_shift                                 (0)
#define  CABAC_P2_cabac_p2_cntl3_write_enable7_mask                              (0x40000000)
#define  CABAC_P2_cabac_p2_cntl3_reset_cabacp2_bsfifo_mask                       (0x20000000)
#define  CABAC_P2_cabac_p2_cntl3_write_enable6_mask                              (0x10000000)
#define  CABAC_P2_cabac_p2_cntl3_decode_en_cabacp2_mask                          (0x08000000)
#define  CABAC_P2_cabac_p2_cntl3_write_enable5_mask                              (0x04000000)
#define  CABAC_P2_cabac_p2_cntl3_cabac_1p_mode_mask                              (0x02000000)
#define  CABAC_P2_cabac_p2_cntl3_write_enable4_mask                              (0x01000000)
#define  CABAC_P2_cabac_p2_cntl3_cabac_p2_p3_mask                                (0x00800000)
#define  CABAC_P2_cabac_p2_cntl3_write_enable3_mask                              (0x00400000)
#define  CABAC_P2_cabac_p2_cntl3_cabac_p2_go_mask                                (0x00200000)
#define  CABAC_P2_cabac_p2_cntl3_write_enable2_mask                              (0x00100000)
#define  CABAC_P2_cabac_p2_cntl3_latch_enable_mask                               (0x00080000)
#define  CABAC_P2_cabac_p2_cntl3_write_enable1_mask                              (0x00040000)
#define  CABAC_P2_cabac_p2_cntl3_codioffset_mask                                 (0x0003FE00)
#define  CABAC_P2_cabac_p2_cntl3_codirange_mask                                  (0x000001FF)
#define  CABAC_P2_cabac_p2_cntl3_write_enable7(data)                             (0x40000000&((data)<<30))
#define  CABAC_P2_cabac_p2_cntl3_reset_cabacp2_bsfifo(data)                      (0x20000000&((data)<<29))
#define  CABAC_P2_cabac_p2_cntl3_write_enable6(data)                             (0x10000000&((data)<<28))
#define  CABAC_P2_cabac_p2_cntl3_decode_en_cabacp2(data)                         (0x08000000&((data)<<27))
#define  CABAC_P2_cabac_p2_cntl3_write_enable5(data)                             (0x04000000&((data)<<26))
#define  CABAC_P2_cabac_p2_cntl3_cabac_1p_mode(data)                             (0x02000000&((data)<<25))
#define  CABAC_P2_cabac_p2_cntl3_write_enable4(data)                             (0x01000000&((data)<<24))
#define  CABAC_P2_cabac_p2_cntl3_cabac_p2_p3(data)                               (0x00800000&((data)<<23))
#define  CABAC_P2_cabac_p2_cntl3_write_enable3(data)                             (0x00400000&((data)<<22))
#define  CABAC_P2_cabac_p2_cntl3_cabac_p2_go(data)                               (0x00200000&((data)<<21))
#define  CABAC_P2_cabac_p2_cntl3_write_enable2(data)                             (0x00100000&((data)<<20))
#define  CABAC_P2_cabac_p2_cntl3_latch_enable(data)                              (0x00080000&((data)<<19))
#define  CABAC_P2_cabac_p2_cntl3_write_enable1(data)                             (0x00040000&((data)<<18))
#define  CABAC_P2_cabac_p2_cntl3_codioffset(data)                                (0x0003FE00&((data)<<9))
#define  CABAC_P2_cabac_p2_cntl3_codirange(data)                                 (0x000001FF&(data))
#define  CABAC_P2_cabac_p2_cntl3_get_write_enable7(data)                         ((0x40000000&(data))>>30)
#define  CABAC_P2_cabac_p2_cntl3_get_reset_cabacp2_bsfifo(data)                  ((0x20000000&(data))>>29)
#define  CABAC_P2_cabac_p2_cntl3_get_write_enable6(data)                         ((0x10000000&(data))>>28)
#define  CABAC_P2_cabac_p2_cntl3_get_decode_en_cabacp2(data)                     ((0x08000000&(data))>>27)
#define  CABAC_P2_cabac_p2_cntl3_get_write_enable5(data)                         ((0x04000000&(data))>>26)
#define  CABAC_P2_cabac_p2_cntl3_get_cabac_1p_mode(data)                         ((0x02000000&(data))>>25)
#define  CABAC_P2_cabac_p2_cntl3_get_write_enable4(data)                         ((0x01000000&(data))>>24)
#define  CABAC_P2_cabac_p2_cntl3_get_cabac_p2_p3(data)                           ((0x00800000&(data))>>23)
#define  CABAC_P2_cabac_p2_cntl3_get_write_enable3(data)                         ((0x00400000&(data))>>22)
#define  CABAC_P2_cabac_p2_cntl3_get_cabac_p2_go(data)                           ((0x00200000&(data))>>21)
#define  CABAC_P2_cabac_p2_cntl3_get_write_enable2(data)                         ((0x00100000&(data))>>20)
#define  CABAC_P2_cabac_p2_cntl3_get_latch_enable(data)                          ((0x00080000&(data))>>19)
#define  CABAC_P2_cabac_p2_cntl3_get_write_enable1(data)                         ((0x00040000&(data))>>18)
#define  CABAC_P2_cabac_p2_cntl3_get_codioffset(data)                            ((0x0003FE00&(data))>>9)
#define  CABAC_P2_cabac_p2_cntl3_get_codirange(data)                             (0x000001FF&(data))

#define  CABAC_P2_cabac_p2_cntl4                                                0x1800E3D0
#define  CABAC_P2_cabac_p2_cntl4_reg_addr                                        "0xB800E3D0"
#define  CABAC_P2_cabac_p2_cntl4_reg                                             0xB800E3D0
#define  CABAC_P2_cabac_p2_cntl4_inst_addr                                       "0x0001"
#define  set_CABAC_P2_cabac_p2_cntl4_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl4_reg)=data)
#define  get_CABAC_P2_cabac_p2_cntl4_reg                                         (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl4_reg))
#define  CABAC_P2_cabac_p2_cntl4_write_enable5_shift                             (30)
#define  CABAC_P2_cabac_p2_cntl4_arb_wait_value_shift                            (25)
#define  CABAC_P2_cabac_p2_cntl4_write_enable4_shift                             (24)
#define  CABAC_P2_cabac_p2_cntl4_haltcabacp2_done_shift                          (23)
#define  CABAC_P2_cabac_p2_cntl4_write_enable3_shift                             (22)
#define  CABAC_P2_cabac_p2_cntl4_haltcabacp2_shift                               (21)
#define  CABAC_P2_cabac_p2_cntl4_write_enable2_shift                             (20)
#define  CABAC_P2_cabac_p2_cntl4_cabacp2_idle_shift                              (19)
#define  CABAC_P2_cabac_p2_cntl4_write_enable1_shift                             (18)
#define  CABAC_P2_cabac_p2_cntl4_cabacp2_header_byte_cnt_shift                   (0)
#define  CABAC_P2_cabac_p2_cntl4_write_enable5_mask                              (0x40000000)
#define  CABAC_P2_cabac_p2_cntl4_arb_wait_value_mask                             (0x3E000000)
#define  CABAC_P2_cabac_p2_cntl4_write_enable4_mask                              (0x01000000)
#define  CABAC_P2_cabac_p2_cntl4_haltcabacp2_done_mask                           (0x00800000)
#define  CABAC_P2_cabac_p2_cntl4_write_enable3_mask                              (0x00400000)
#define  CABAC_P2_cabac_p2_cntl4_haltcabacp2_mask                                (0x00200000)
#define  CABAC_P2_cabac_p2_cntl4_write_enable2_mask                              (0x00100000)
#define  CABAC_P2_cabac_p2_cntl4_cabacp2_idle_mask                               (0x00080000)
#define  CABAC_P2_cabac_p2_cntl4_write_enable1_mask                              (0x00040000)
#define  CABAC_P2_cabac_p2_cntl4_cabacp2_header_byte_cnt_mask                    (0x0003FFFF)
#define  CABAC_P2_cabac_p2_cntl4_write_enable5(data)                             (0x40000000&((data)<<30))
#define  CABAC_P2_cabac_p2_cntl4_arb_wait_value(data)                            (0x3E000000&((data)<<25))
#define  CABAC_P2_cabac_p2_cntl4_write_enable4(data)                             (0x01000000&((data)<<24))
#define  CABAC_P2_cabac_p2_cntl4_haltcabacp2_done(data)                          (0x00800000&((data)<<23))
#define  CABAC_P2_cabac_p2_cntl4_write_enable3(data)                             (0x00400000&((data)<<22))
#define  CABAC_P2_cabac_p2_cntl4_haltcabacp2(data)                               (0x00200000&((data)<<21))
#define  CABAC_P2_cabac_p2_cntl4_write_enable2(data)                             (0x00100000&((data)<<20))
#define  CABAC_P2_cabac_p2_cntl4_cabacp2_idle(data)                              (0x00080000&((data)<<19))
#define  CABAC_P2_cabac_p2_cntl4_write_enable1(data)                             (0x00040000&((data)<<18))
#define  CABAC_P2_cabac_p2_cntl4_cabacp2_header_byte_cnt(data)                   (0x0003FFFF&(data))
#define  CABAC_P2_cabac_p2_cntl4_get_write_enable5(data)                         ((0x40000000&(data))>>30)
#define  CABAC_P2_cabac_p2_cntl4_get_arb_wait_value(data)                        ((0x3E000000&(data))>>25)
#define  CABAC_P2_cabac_p2_cntl4_get_write_enable4(data)                         ((0x01000000&(data))>>24)
#define  CABAC_P2_cabac_p2_cntl4_get_haltcabacp2_done(data)                      ((0x00800000&(data))>>23)
#define  CABAC_P2_cabac_p2_cntl4_get_write_enable3(data)                         ((0x00400000&(data))>>22)
#define  CABAC_P2_cabac_p2_cntl4_get_haltcabacp2(data)                           ((0x00200000&(data))>>21)
#define  CABAC_P2_cabac_p2_cntl4_get_write_enable2(data)                         ((0x00100000&(data))>>20)
#define  CABAC_P2_cabac_p2_cntl4_get_cabacp2_idle(data)                          ((0x00080000&(data))>>19)
#define  CABAC_P2_cabac_p2_cntl4_get_write_enable1(data)                         ((0x00040000&(data))>>18)
#define  CABAC_P2_cabac_p2_cntl4_get_cabacp2_header_byte_cnt(data)               (0x0003FFFF&(data))

#define  CABAC_P2_p2_neighbor_loc                                               0x1800E398
#define  CABAC_P2_p2_neighbor_loc_reg_addr                                       "0xB800E398"
#define  CABAC_P2_p2_neighbor_loc_reg                                            0xB800E398
#define  CABAC_P2_p2_neighbor_loc_inst_addr                                      "0x0002"
#define  set_CABAC_P2_p2_neighbor_loc_reg(data)                                  (*((volatile unsigned int*)CABAC_P2_p2_neighbor_loc_reg)=data)
#define  get_CABAC_P2_p2_neighbor_loc_reg                                        (*((volatile unsigned int*)CABAC_P2_p2_neighbor_loc_reg))
#define  CABAC_P2_p2_neighbor_loc_filter_level_v_shift                           (20)
#define  CABAC_P2_p2_neighbor_loc_filter_level_u_shift                           (14)
#define  CABAC_P2_p2_neighbor_loc_filter_level_hor_shift                         (8)
#define  CABAC_P2_p2_neighbor_loc_filter_level_shift                             (2)
#define  CABAC_P2_p2_neighbor_loc_neighbor_loc_shift                             (0)
#define  CABAC_P2_p2_neighbor_loc_filter_level_v_mask                            (0x03F00000)
#define  CABAC_P2_p2_neighbor_loc_filter_level_u_mask                            (0x000FC000)
#define  CABAC_P2_p2_neighbor_loc_filter_level_hor_mask                          (0x00003F00)
#define  CABAC_P2_p2_neighbor_loc_filter_level_mask                              (0x000000FC)
#define  CABAC_P2_p2_neighbor_loc_neighbor_loc_mask                              (0x00000003)
#define  CABAC_P2_p2_neighbor_loc_filter_level_v(data)                           (0x03F00000&((data)<<20))
#define  CABAC_P2_p2_neighbor_loc_filter_level_u(data)                           (0x000FC000&((data)<<14))
#define  CABAC_P2_p2_neighbor_loc_filter_level_hor(data)                         (0x00003F00&((data)<<8))
#define  CABAC_P2_p2_neighbor_loc_filter_level(data)                             (0x000000FC&((data)<<2))
#define  CABAC_P2_p2_neighbor_loc_neighbor_loc(data)                             (0x00000003&(data))
#define  CABAC_P2_p2_neighbor_loc_get_filter_level_v(data)                       ((0x03F00000&(data))>>20)
#define  CABAC_P2_p2_neighbor_loc_get_filter_level_u(data)                       ((0x000FC000&(data))>>14)
#define  CABAC_P2_p2_neighbor_loc_get_filter_level_hor(data)                     ((0x00003F00&(data))>>8)
#define  CABAC_P2_p2_neighbor_loc_get_filter_level(data)                         ((0x000000FC&(data))>>2)
#define  CABAC_P2_p2_neighbor_loc_get_neighbor_loc(data)                         (0x00000003&(data))

#define  CABAC_P2_cabacp2_int_status                                            0x1800E3D4
#define  CABAC_P2_cabacp2_int_status_reg_addr                                    "0xB800E3D4"
#define  CABAC_P2_cabacp2_int_status_reg                                         0xB800E3D4
#define  CABAC_P2_cabacp2_int_status_inst_addr                                   "0x0003"
#define  set_CABAC_P2_cabacp2_int_status_reg(data)                               (*((volatile unsigned int*)CABAC_P2_cabacp2_int_status_reg)=data)
#define  get_CABAC_P2_cabacp2_int_status_reg                                     (*((volatile unsigned int*)CABAC_P2_cabacp2_int_status_reg))
#define  CABAC_P2_cabacp2_int_status_cabac_p2_wfifo_err_shift                    (4)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_bsfifo_err_shift                   (3)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_dec_err_shift                      (2)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_done_shift                         (1)
#define  CABAC_P2_cabacp2_int_status_write_data_shift                            (0)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_wfifo_err_mask                     (0x00000010)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_bsfifo_err_mask                    (0x00000008)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_dec_err_mask                       (0x00000004)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_done_mask                          (0x00000002)
#define  CABAC_P2_cabacp2_int_status_write_data_mask                             (0x00000001)
#define  CABAC_P2_cabacp2_int_status_cabac_p2_wfifo_err(data)                    (0x00000010&((data)<<4))
#define  CABAC_P2_cabacp2_int_status_cabac_p2_bsfifo_err(data)                   (0x00000008&((data)<<3))
#define  CABAC_P2_cabacp2_int_status_cabac_p2_dec_err(data)                      (0x00000004&((data)<<2))
#define  CABAC_P2_cabacp2_int_status_cabac_p2_done(data)                         (0x00000002&((data)<<1))
#define  CABAC_P2_cabacp2_int_status_write_data(data)                            (0x00000001&(data))
#define  CABAC_P2_cabacp2_int_status_get_cabac_p2_wfifo_err(data)                ((0x00000010&(data))>>4)
#define  CABAC_P2_cabacp2_int_status_get_cabac_p2_bsfifo_err(data)               ((0x00000008&(data))>>3)
#define  CABAC_P2_cabacp2_int_status_get_cabac_p2_dec_err(data)                  ((0x00000004&(data))>>2)
#define  CABAC_P2_cabacp2_int_status_get_cabac_p2_done(data)                     ((0x00000002&(data))>>1)
#define  CABAC_P2_cabacp2_int_status_get_write_data(data)                        (0x00000001&(data))

#define  CABAC_P2_cabacp2_int_en                                                0x1800E3D8
#define  CABAC_P2_cabacp2_int_en_reg_addr                                        "0xB800E3D8"
#define  CABAC_P2_cabacp2_int_en_reg                                             0xB800E3D8
#define  CABAC_P2_cabacp2_int_en_inst_addr                                       "0x0004"
#define  set_CABAC_P2_cabacp2_int_en_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_cabacp2_int_en_reg)=data)
#define  get_CABAC_P2_cabacp2_int_en_reg                                         (*((volatile unsigned int*)CABAC_P2_cabacp2_int_en_reg))
#define  CABAC_P2_cabacp2_int_en_cabac_p2_wfifo_err_ie_shift                     (4)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_bsfifo_err_ie_shift                    (3)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_dec_err_ie_shift                       (2)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_done_ie_shift                          (1)
#define  CABAC_P2_cabacp2_int_en_write_data_shift                                (0)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_wfifo_err_ie_mask                      (0x00000010)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_bsfifo_err_ie_mask                     (0x00000008)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_dec_err_ie_mask                        (0x00000004)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_done_ie_mask                           (0x00000002)
#define  CABAC_P2_cabacp2_int_en_write_data_mask                                 (0x00000001)
#define  CABAC_P2_cabacp2_int_en_cabac_p2_wfifo_err_ie(data)                     (0x00000010&((data)<<4))
#define  CABAC_P2_cabacp2_int_en_cabac_p2_bsfifo_err_ie(data)                    (0x00000008&((data)<<3))
#define  CABAC_P2_cabacp2_int_en_cabac_p2_dec_err_ie(data)                       (0x00000004&((data)<<2))
#define  CABAC_P2_cabacp2_int_en_cabac_p2_done_ie(data)                          (0x00000002&((data)<<1))
#define  CABAC_P2_cabacp2_int_en_write_data(data)                                (0x00000001&(data))
#define  CABAC_P2_cabacp2_int_en_get_cabac_p2_wfifo_err_ie(data)                 ((0x00000010&(data))>>4)
#define  CABAC_P2_cabacp2_int_en_get_cabac_p2_bsfifo_err_ie(data)                ((0x00000008&(data))>>3)
#define  CABAC_P2_cabacp2_int_en_get_cabac_p2_dec_err_ie(data)                   ((0x00000004&(data))>>2)
#define  CABAC_P2_cabacp2_int_en_get_cabac_p2_done_ie(data)                      ((0x00000002&(data))>>1)
#define  CABAC_P2_cabacp2_int_en_get_write_data(data)                            (0x00000001&(data))

#define  CABAC_P2_cabac_p2_cntl5                                                0x1800E3DC
#define  CABAC_P2_cabac_p2_cntl5_reg_addr                                        "0xB800E3DC"
#define  CABAC_P2_cabac_p2_cntl5_reg                                             0xB800E3DC
#define  CABAC_P2_cabac_p2_cntl5_inst_addr                                       "0x0005"
#define  set_CABAC_P2_cabac_p2_cntl5_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl5_reg)=data)
#define  get_CABAC_P2_cabac_p2_cntl5_reg                                         (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl5_reg))
#define  CABAC_P2_cabac_p2_cntl5_write_enable4_shift                             (30)
#define  CABAC_P2_cabac_p2_cntl5_hevc_eos_shift                                  (29)
#define  CABAC_P2_cabac_p2_cntl5_hevc_p2_err_shift                               (28)
#define  CABAC_P2_cabac_p2_cntl5_write_enable3_shift                             (27)
#define  CABAC_P2_cabac_p2_cntl5_coding_type_shift                               (22)
#define  CABAC_P2_cabac_p2_cntl5_write_enable2_shift                             (21)
#define  CABAC_P2_cabac_p2_cntl5_cabacp2_pred_counter_shift                      (11)
#define  CABAC_P2_cabac_p2_cntl5_write_enable1_shift                             (10)
#define  CABAC_P2_cabac_p2_cntl5_cabacp2_curmb_addr_shift                        (0)
#define  CABAC_P2_cabac_p2_cntl5_write_enable4_mask                              (0x40000000)
#define  CABAC_P2_cabac_p2_cntl5_hevc_eos_mask                                   (0x20000000)
#define  CABAC_P2_cabac_p2_cntl5_hevc_p2_err_mask                                (0x10000000)
#define  CABAC_P2_cabac_p2_cntl5_write_enable3_mask                              (0x08000000)
#define  CABAC_P2_cabac_p2_cntl5_coding_type_mask                                (0x07C00000)
#define  CABAC_P2_cabac_p2_cntl5_write_enable2_mask                              (0x00200000)
#define  CABAC_P2_cabac_p2_cntl5_cabacp2_pred_counter_mask                       (0x001FF800)
#define  CABAC_P2_cabac_p2_cntl5_write_enable1_mask                              (0x00000400)
#define  CABAC_P2_cabac_p2_cntl5_cabacp2_curmb_addr_mask                         (0x000003FF)
#define  CABAC_P2_cabac_p2_cntl5_write_enable4(data)                             (0x40000000&((data)<<30))
#define  CABAC_P2_cabac_p2_cntl5_hevc_eos(data)                                  (0x20000000&((data)<<29))
#define  CABAC_P2_cabac_p2_cntl5_hevc_p2_err(data)                               (0x10000000&((data)<<28))
#define  CABAC_P2_cabac_p2_cntl5_write_enable3(data)                             (0x08000000&((data)<<27))
#define  CABAC_P2_cabac_p2_cntl5_coding_type(data)                               (0x07C00000&((data)<<22))
#define  CABAC_P2_cabac_p2_cntl5_write_enable2(data)                             (0x00200000&((data)<<21))
#define  CABAC_P2_cabac_p2_cntl5_cabacp2_pred_counter(data)                      (0x001FF800&((data)<<11))
#define  CABAC_P2_cabac_p2_cntl5_write_enable1(data)                             (0x00000400&((data)<<10))
#define  CABAC_P2_cabac_p2_cntl5_cabacp2_curmb_addr(data)                        (0x000003FF&(data))
#define  CABAC_P2_cabac_p2_cntl5_get_write_enable4(data)                         ((0x40000000&(data))>>30)
#define  CABAC_P2_cabac_p2_cntl5_get_hevc_eos(data)                              ((0x20000000&(data))>>29)
#define  CABAC_P2_cabac_p2_cntl5_get_hevc_p2_err(data)                           ((0x10000000&(data))>>28)
#define  CABAC_P2_cabac_p2_cntl5_get_write_enable3(data)                         ((0x08000000&(data))>>27)
#define  CABAC_P2_cabac_p2_cntl5_get_coding_type(data)                           ((0x07C00000&(data))>>22)
#define  CABAC_P2_cabac_p2_cntl5_get_write_enable2(data)                         ((0x00200000&(data))>>21)
#define  CABAC_P2_cabac_p2_cntl5_get_cabacp2_pred_counter(data)                  ((0x001FF800&(data))>>11)
#define  CABAC_P2_cabac_p2_cntl5_get_write_enable1(data)                         ((0x00000400&(data))>>10)
#define  CABAC_P2_cabac_p2_cntl5_get_cabacp2_curmb_addr(data)                    (0x000003FF&(data))

#define  CABAC_P2_p2_bscntl                                                     0x1800E3E0
#define  CABAC_P2_p2_bscntl_reg_addr                                             "0xB800E3E0"
#define  CABAC_P2_p2_bscntl_reg                                                  0xB800E3E0
#define  CABAC_P2_p2_bscntl_inst_addr                                            "0x0006"
#define  set_CABAC_P2_p2_bscntl_reg(data)                                        (*((volatile unsigned int*)CABAC_P2_p2_bscntl_reg)=data)
#define  get_CABAC_P2_p2_bscntl_reg                                              (*((volatile unsigned int*)CABAC_P2_p2_bscntl_reg))
#define  CABAC_P2_p2_bscntl_write_enable3_shift                                  (6)
#define  CABAC_P2_p2_bscntl_p2_startcode_prevnt_en_shift                         (5)
#define  CABAC_P2_p2_bscntl_write_enable2_shift                                  (4)
#define  CABAC_P2_p2_bscntl_detect_startcode_error_shift                         (3)
#define  CABAC_P2_p2_bscntl_write_enable1_shift                                  (2)
#define  CABAC_P2_p2_bscntl_min_xfer_size_shift                                  (0)
#define  CABAC_P2_p2_bscntl_write_enable3_mask                                   (0x00000040)
#define  CABAC_P2_p2_bscntl_p2_startcode_prevnt_en_mask                          (0x00000020)
#define  CABAC_P2_p2_bscntl_write_enable2_mask                                   (0x00000010)
#define  CABAC_P2_p2_bscntl_detect_startcode_error_mask                          (0x00000008)
#define  CABAC_P2_p2_bscntl_write_enable1_mask                                   (0x00000004)
#define  CABAC_P2_p2_bscntl_min_xfer_size_mask                                   (0x00000003)
#define  CABAC_P2_p2_bscntl_write_enable3(data)                                  (0x00000040&((data)<<6))
#define  CABAC_P2_p2_bscntl_p2_startcode_prevnt_en(data)                         (0x00000020&((data)<<5))
#define  CABAC_P2_p2_bscntl_write_enable2(data)                                  (0x00000010&((data)<<4))
#define  CABAC_P2_p2_bscntl_detect_startcode_error(data)                         (0x00000008&((data)<<3))
#define  CABAC_P2_p2_bscntl_write_enable1(data)                                  (0x00000004&((data)<<2))
#define  CABAC_P2_p2_bscntl_min_xfer_size(data)                                  (0x00000003&(data))
#define  CABAC_P2_p2_bscntl_get_write_enable3(data)                              ((0x00000040&(data))>>6)
#define  CABAC_P2_p2_bscntl_get_p2_startcode_prevnt_en(data)                     ((0x00000020&(data))>>5)
#define  CABAC_P2_p2_bscntl_get_write_enable2(data)                              ((0x00000010&(data))>>4)
#define  CABAC_P2_p2_bscntl_get_detect_startcode_error(data)                     ((0x00000008&(data))>>3)
#define  CABAC_P2_p2_bscntl_get_write_enable1(data)                              ((0x00000004&(data))>>2)
#define  CABAC_P2_p2_bscntl_get_min_xfer_size(data)                              (0x00000003&(data))

#define  CABAC_P2_p2_bs_min_thr                                                 0x1800E3E4
#define  CABAC_P2_p2_bs_min_thr_reg_addr                                         "0xB800E3E4"
#define  CABAC_P2_p2_bs_min_thr_reg                                              0xB800E3E4
#define  CABAC_P2_p2_bs_min_thr_inst_addr                                        "0x0007"
#define  set_CABAC_P2_p2_bs_min_thr_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_bs_min_thr_reg)=data)
#define  get_CABAC_P2_p2_bs_min_thr_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_bs_min_thr_reg))
#define  CABAC_P2_p2_bs_min_thr_min_thre_shift                                   (0)
#define  CABAC_P2_p2_bs_min_thr_min_thre_mask                                    (0x0000007F)
#define  CABAC_P2_p2_bs_min_thr_min_thre(data)                                   (0x0000007F&(data))
#define  CABAC_P2_p2_bs_min_thr_get_min_thre(data)                               (0x0000007F&(data))

#define  CABAC_P2_p2_bstimer                                                    0x1800E3E8
#define  CABAC_P2_p2_bstimer_reg_addr                                            "0xB800E3E8"
#define  CABAC_P2_p2_bstimer_reg                                                 0xB800E3E8
#define  CABAC_P2_p2_bstimer_inst_addr                                           "0x0008"
#define  set_CABAC_P2_p2_bstimer_reg(data)                                       (*((volatile unsigned int*)CABAC_P2_p2_bstimer_reg)=data)
#define  get_CABAC_P2_p2_bstimer_reg                                             (*((volatile unsigned int*)CABAC_P2_p2_bstimer_reg))
#define  CABAC_P2_p2_bstimer_timer_value_shift                                   (0)
#define  CABAC_P2_p2_bstimer_timer_value_mask                                    (0x00FFFFFF)
#define  CABAC_P2_p2_bstimer_timer_value(data)                                   (0x00FFFFFF&(data))
#define  CABAC_P2_p2_bstimer_get_timer_value(data)                               (0x00FFFFFF&(data))

#define  CABAC_P2_p2_rfifo_base                                                 0x1800E364
#define  CABAC_P2_p2_rfifo_base_reg_addr                                         "0xB800E364"
#define  CABAC_P2_p2_rfifo_base_reg                                              0xB800E364
#define  CABAC_P2_p2_rfifo_base_inst_addr                                        "0x0009"
#define  set_CABAC_P2_p2_rfifo_base_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_rfifo_base_reg)=data)
#define  get_CABAC_P2_p2_rfifo_base_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_rfifo_base_reg))
#define  CABAC_P2_p2_rfifo_base_base_addr_shift                                  (0)
#define  CABAC_P2_p2_rfifo_base_base_addr_mask                                   (0xFFFFFFFF)
#define  CABAC_P2_p2_rfifo_base_base_addr(data)                                  (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_rfifo_base_get_base_addr(data)                              (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_rfifo_limit                                                0x1800E368
#define  CABAC_P2_p2_rfifo_limit_reg_addr                                        "0xB800E368"
#define  CABAC_P2_p2_rfifo_limit_reg                                             0xB800E368
#define  CABAC_P2_p2_rfifo_limit_inst_addr                                       "0x000A"
#define  set_CABAC_P2_p2_rfifo_limit_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_p2_rfifo_limit_reg)=data)
#define  get_CABAC_P2_p2_rfifo_limit_reg                                         (*((volatile unsigned int*)CABAC_P2_p2_rfifo_limit_reg))
#define  CABAC_P2_p2_rfifo_limit_limit_addr_shift                                (0)
#define  CABAC_P2_p2_rfifo_limit_limit_addr_mask                                 (0xFFFFFFFF)
#define  CABAC_P2_p2_rfifo_limit_limit_addr(data)                                (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_rfifo_limit_get_limit_addr(data)                            (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_rfifo_wptr                                                 0x1800E36C
#define  CABAC_P2_p2_rfifo_wptr_reg_addr                                         "0xB800E36C"
#define  CABAC_P2_p2_rfifo_wptr_reg                                              0xB800E36C
#define  CABAC_P2_p2_rfifo_wptr_inst_addr                                        "0x000B"
#define  set_CABAC_P2_p2_rfifo_wptr_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_rfifo_wptr_reg)=data)
#define  get_CABAC_P2_p2_rfifo_wptr_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_rfifo_wptr_reg))
#define  CABAC_P2_p2_rfifo_wptr_wr_ptr_shift                                     (0)
#define  CABAC_P2_p2_rfifo_wptr_wr_ptr_mask                                      (0xFFFFFFFF)
#define  CABAC_P2_p2_rfifo_wptr_wr_ptr(data)                                     (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_rfifo_wptr_get_wr_ptr(data)                                 (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_rfifo_rptr                                                 0x1800E370
#define  CABAC_P2_p2_rfifo_rptr_reg_addr                                         "0xB800E370"
#define  CABAC_P2_p2_rfifo_rptr_reg                                              0xB800E370
#define  CABAC_P2_p2_rfifo_rptr_inst_addr                                        "0x000C"
#define  set_CABAC_P2_p2_rfifo_rptr_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_rfifo_rptr_reg)=data)
#define  get_CABAC_P2_p2_rfifo_rptr_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_rfifo_rptr_reg))
#define  CABAC_P2_p2_rfifo_rptr_rd_ptr_shift                                     (0)
#define  CABAC_P2_p2_rfifo_rptr_rd_ptr_mask                                      (0xFFFFFFFF)
#define  CABAC_P2_p2_rfifo_rptr_rd_ptr(data)                                     (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_rfifo_rptr_get_rd_ptr(data)                                 (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_wfifo_base                                                 0x1800E374
#define  CABAC_P2_p2_wfifo_base_reg_addr                                         "0xB800E374"
#define  CABAC_P2_p2_wfifo_base_reg                                              0xB800E374
#define  CABAC_P2_p2_wfifo_base_inst_addr                                        "0x000D"
#define  set_CABAC_P2_p2_wfifo_base_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_wfifo_base_reg)=data)
#define  get_CABAC_P2_p2_wfifo_base_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_wfifo_base_reg))
#define  CABAC_P2_p2_wfifo_base_base_addr_shift                                  (0)
#define  CABAC_P2_p2_wfifo_base_base_addr_mask                                   (0xFFFFFFFF)
#define  CABAC_P2_p2_wfifo_base_base_addr(data)                                  (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_wfifo_base_get_base_addr(data)                              (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_wfifo_limit                                                0x1800E378
#define  CABAC_P2_p2_wfifo_limit_reg_addr                                        "0xB800E378"
#define  CABAC_P2_p2_wfifo_limit_reg                                             0xB800E378
#define  CABAC_P2_p2_wfifo_limit_inst_addr                                       "0x000E"
#define  set_CABAC_P2_p2_wfifo_limit_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_p2_wfifo_limit_reg)=data)
#define  get_CABAC_P2_p2_wfifo_limit_reg                                         (*((volatile unsigned int*)CABAC_P2_p2_wfifo_limit_reg))
#define  CABAC_P2_p2_wfifo_limit_limit_addr_shift                                (0)
#define  CABAC_P2_p2_wfifo_limit_limit_addr_mask                                 (0xFFFFFFFF)
#define  CABAC_P2_p2_wfifo_limit_limit_addr(data)                                (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_wfifo_limit_get_limit_addr(data)                            (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_wfifo_wptr                                                 0x1800E37C
#define  CABAC_P2_p2_wfifo_wptr_reg_addr                                         "0xB800E37C"
#define  CABAC_P2_p2_wfifo_wptr_reg                                              0xB800E37C
#define  CABAC_P2_p2_wfifo_wptr_inst_addr                                        "0x000F"
#define  set_CABAC_P2_p2_wfifo_wptr_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_wfifo_wptr_reg)=data)
#define  get_CABAC_P2_p2_wfifo_wptr_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_wfifo_wptr_reg))
#define  CABAC_P2_p2_wfifo_wptr_wr_ptr_shift                                     (0)
#define  CABAC_P2_p2_wfifo_wptr_wr_ptr_mask                                      (0xFFFFFFFF)
#define  CABAC_P2_p2_wfifo_wptr_wr_ptr(data)                                     (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_wfifo_wptr_get_wr_ptr(data)                                 (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_wfifo_rptr                                                 0x1800E380
#define  CABAC_P2_p2_wfifo_rptr_reg_addr                                         "0xB800E380"
#define  CABAC_P2_p2_wfifo_rptr_reg                                              0xB800E380
#define  CABAC_P2_p2_wfifo_rptr_inst_addr                                        "0x0010"
#define  set_CABAC_P2_p2_wfifo_rptr_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_wfifo_rptr_reg)=data)
#define  get_CABAC_P2_p2_wfifo_rptr_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_wfifo_rptr_reg))
#define  CABAC_P2_p2_wfifo_rptr_rd_ptr_shift                                     (0)
#define  CABAC_P2_p2_wfifo_rptr_rd_ptr_mask                                      (0xFFFFFFFF)
#define  CABAC_P2_p2_wfifo_rptr_rd_ptr(data)                                     (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_wfifo_rptr_get_rd_ptr(data)                                 (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_rfifo_decbsptr                                             0x1800E384
#define  CABAC_P2_p2_rfifo_decbsptr_reg_addr                                     "0xB800E384"
#define  CABAC_P2_p2_rfifo_decbsptr_reg                                          0xB800E384
#define  CABAC_P2_p2_rfifo_decbsptr_inst_addr                                    "0x0011"
#define  set_CABAC_P2_p2_rfifo_decbsptr_reg(data)                                (*((volatile unsigned int*)CABAC_P2_p2_rfifo_decbsptr_reg)=data)
#define  get_CABAC_P2_p2_rfifo_decbsptr_reg                                      (*((volatile unsigned int*)CABAC_P2_p2_rfifo_decbsptr_reg))
#define  CABAC_P2_p2_rfifo_decbsptr_dec_bit_ptr_shift                            (0)
#define  CABAC_P2_p2_rfifo_decbsptr_dec_bit_ptr_mask                             (0xFFFFFFFF)
#define  CABAC_P2_p2_rfifo_decbsptr_dec_bit_ptr(data)                            (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_rfifo_decbsptr_get_dec_bit_ptr(data)                        (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_rfifo_decbsptr_msb                                         0x1800E24C
#define  CABAC_P2_p2_rfifo_decbsptr_msb_reg_addr                                 "0xB800E24C"
#define  CABAC_P2_p2_rfifo_decbsptr_msb_reg                                      0xB800E24C
#define  CABAC_P2_p2_rfifo_decbsptr_msb_inst_addr                                "0x0012"
#define  set_CABAC_P2_p2_rfifo_decbsptr_msb_reg(data)                            (*((volatile unsigned int*)CABAC_P2_p2_rfifo_decbsptr_msb_reg)=data)
#define  get_CABAC_P2_p2_rfifo_decbsptr_msb_reg                                  (*((volatile unsigned int*)CABAC_P2_p2_rfifo_decbsptr_msb_reg))
#define  CABAC_P2_p2_rfifo_decbsptr_msb_pre_bin_loc_reg_msb_shift                (6)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_bin_loc_reg_msb_shift                    (3)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_dec_bit_ptr_msb_shift                    (0)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_pre_bin_loc_reg_msb_mask                 (0x000001C0)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_bin_loc_reg_msb_mask                     (0x00000038)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_dec_bit_ptr_msb_mask                     (0x00000007)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_pre_bin_loc_reg_msb(data)                (0x000001C0&((data)<<6))
#define  CABAC_P2_p2_rfifo_decbsptr_msb_bin_loc_reg_msb(data)                    (0x00000038&((data)<<3))
#define  CABAC_P2_p2_rfifo_decbsptr_msb_dec_bit_ptr_msb(data)                    (0x00000007&(data))
#define  CABAC_P2_p2_rfifo_decbsptr_msb_get_pre_bin_loc_reg_msb(data)            ((0x000001C0&(data))>>6)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_get_bin_loc_reg_msb(data)                ((0x00000038&(data))>>3)
#define  CABAC_P2_p2_rfifo_decbsptr_msb_get_dec_bit_ptr_msb(data)                (0x00000007&(data))

#define  CABAC_P2_p2_ldstaddr                                                   0x1800E25C
#define  CABAC_P2_p2_ldstaddr_reg_addr                                           "0xB800E25C"
#define  CABAC_P2_p2_ldstaddr_reg                                                0xB800E25C
#define  CABAC_P2_p2_ldstaddr_inst_addr                                          "0x0013"
#define  set_CABAC_P2_p2_ldstaddr_reg(data)                                      (*((volatile unsigned int*)CABAC_P2_p2_ldstaddr_reg)=data)
#define  get_CABAC_P2_p2_ldstaddr_reg                                            (*((volatile unsigned int*)CABAC_P2_p2_ldstaddr_reg))
#define  CABAC_P2_p2_ldstaddr_ldst_addr_shift                                    (0)
#define  CABAC_P2_p2_ldstaddr_ldst_addr_mask                                     (0xFFFFFFFF)
#define  CABAC_P2_p2_ldstaddr_ldst_addr(data)                                    (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_ldstaddr_get_ldst_addr(data)                                (0xFFFFFFFF&(data))

#define  CABAC_P2_cabac_p2_cntl                                                 0x1800E388
#define  CABAC_P2_cabac_p2_cntl_reg_addr                                         "0xB800E388"
#define  CABAC_P2_cabac_p2_cntl_reg                                              0xB800E388
#define  CABAC_P2_cabac_p2_cntl_inst_addr                                        "0x0014"
#define  set_CABAC_P2_cabac_p2_cntl_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl_reg)=data)
#define  get_CABAC_P2_cabac_p2_cntl_reg                                          (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl_reg))
#define  CABAC_P2_cabac_p2_cntl_pic_init_qp_7to6_shift                           (29)
#define  CABAC_P2_cabac_p2_cntl_entropy_coding_mode_shift                        (28)
#define  CABAC_P2_cabac_p2_cntl_pic_init_qp_shift                                (22)
#define  CABAC_P2_cabac_p2_cntl_chroma_qp_offset_shift                           (17)
#define  CABAC_P2_cabac_p2_cntl_second_chroma_qp_offset_shift                    (12)
#define  CABAC_P2_cabac_p2_cntl_direct_8x8_inferflg_shift                        (11)
#define  CABAC_P2_cabac_p2_cntl_transform_8x8_mode_flg_shift                     (10)
#define  CABAC_P2_cabac_p2_cntl_num_ref_idx_l0_active_minus1_shift               (5)
#define  CABAC_P2_cabac_p2_cntl_num_ref_idx_l1_active_minus1_shift               (0)
#define  CABAC_P2_cabac_p2_cntl_pic_init_qp_7to6_mask                            (0x60000000)
#define  CABAC_P2_cabac_p2_cntl_entropy_coding_mode_mask                         (0x10000000)
#define  CABAC_P2_cabac_p2_cntl_pic_init_qp_mask                                 (0x0FC00000)
#define  CABAC_P2_cabac_p2_cntl_chroma_qp_offset_mask                            (0x003E0000)
#define  CABAC_P2_cabac_p2_cntl_second_chroma_qp_offset_mask                     (0x0001F000)
#define  CABAC_P2_cabac_p2_cntl_direct_8x8_inferflg_mask                         (0x00000800)
#define  CABAC_P2_cabac_p2_cntl_transform_8x8_mode_flg_mask                      (0x00000400)
#define  CABAC_P2_cabac_p2_cntl_num_ref_idx_l0_active_minus1_mask                (0x000003E0)
#define  CABAC_P2_cabac_p2_cntl_num_ref_idx_l1_active_minus1_mask                (0x0000001F)
#define  CABAC_P2_cabac_p2_cntl_pic_init_qp_7to6(data)                           (0x60000000&((data)<<29))
#define  CABAC_P2_cabac_p2_cntl_entropy_coding_mode(data)                        (0x10000000&((data)<<28))
#define  CABAC_P2_cabac_p2_cntl_pic_init_qp(data)                                (0x0FC00000&((data)<<22))
#define  CABAC_P2_cabac_p2_cntl_chroma_qp_offset(data)                           (0x003E0000&((data)<<17))
#define  CABAC_P2_cabac_p2_cntl_second_chroma_qp_offset(data)                    (0x0001F000&((data)<<12))
#define  CABAC_P2_cabac_p2_cntl_direct_8x8_inferflg(data)                        (0x00000800&((data)<<11))
#define  CABAC_P2_cabac_p2_cntl_transform_8x8_mode_flg(data)                     (0x00000400&((data)<<10))
#define  CABAC_P2_cabac_p2_cntl_num_ref_idx_l0_active_minus1(data)               (0x000003E0&((data)<<5))
#define  CABAC_P2_cabac_p2_cntl_num_ref_idx_l1_active_minus1(data)               (0x0000001F&(data))
#define  CABAC_P2_cabac_p2_cntl_get_pic_init_qp_7to6(data)                       ((0x60000000&(data))>>29)
#define  CABAC_P2_cabac_p2_cntl_get_entropy_coding_mode(data)                    ((0x10000000&(data))>>28)
#define  CABAC_P2_cabac_p2_cntl_get_pic_init_qp(data)                            ((0x0FC00000&(data))>>22)
#define  CABAC_P2_cabac_p2_cntl_get_chroma_qp_offset(data)                       ((0x003E0000&(data))>>17)
#define  CABAC_P2_cabac_p2_cntl_get_second_chroma_qp_offset(data)                ((0x0001F000&(data))>>12)
#define  CABAC_P2_cabac_p2_cntl_get_direct_8x8_inferflg(data)                    ((0x00000800&(data))>>11)
#define  CABAC_P2_cabac_p2_cntl_get_transform_8x8_mode_flg(data)                 ((0x00000400&(data))>>10)
#define  CABAC_P2_cabac_p2_cntl_get_num_ref_idx_l0_active_minus1(data)           ((0x000003E0&(data))>>5)
#define  CABAC_P2_cabac_p2_cntl_get_num_ref_idx_l1_active_minus1(data)           (0x0000001F&(data))

#define  CABAC_P2_cabac_p2_cntl2                                                0x1800E38C
#define  CABAC_P2_cabac_p2_cntl2_reg_addr                                        "0xB800E38C"
#define  CABAC_P2_cabac_p2_cntl2_reg                                             0xB800E38C
#define  CABAC_P2_cabac_p2_cntl2_inst_addr                                       "0x0015"
#define  set_CABAC_P2_cabac_p2_cntl2_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl2_reg)=data)
#define  get_CABAC_P2_cabac_p2_cntl2_reg                                         (*((volatile unsigned int*)CABAC_P2_cabac_p2_cntl2_reg))
#define  CABAC_P2_cabac_p2_cntl2_write_enable7_shift                             (31)
#define  CABAC_P2_cabac_p2_cntl2_mb_adaptive_frame_field_flag_shift              (30)
#define  CABAC_P2_cabac_p2_cntl2_write_enable6_shift                             (29)
#define  CABAC_P2_cabac_p2_cntl2_picmb_w_shift                                   (19)
#define  CABAC_P2_cabac_p2_cntl2_write_enable5_shift                             (18)
#define  CABAC_P2_cabac_p2_cntl2_monochrome_shift                                (17)
#define  CABAC_P2_cabac_p2_cntl2_write_enable4_shift                             (16)
#define  CABAC_P2_cabac_p2_cntl2_field_pic_flag_shift                            (15)
#define  CABAC_P2_cabac_p2_cntl2_write_enable3_shift                             (14)
#define  CABAC_P2_cabac_p2_cntl2_pic_type_shift                                  (11)
#define  CABAC_P2_cabac_p2_cntl2_write_enable2_shift                             (10)
#define  CABAC_P2_cabac_p2_cntl2_slice_qp_delta_shift                            (3)
#define  CABAC_P2_cabac_p2_cntl2_write_enable1_shift                             (2)
#define  CABAC_P2_cabac_p2_cntl2_cabac_init_idc_shift                            (0)
#define  CABAC_P2_cabac_p2_cntl2_write_enable7_mask                              (0x80000000)
#define  CABAC_P2_cabac_p2_cntl2_mb_adaptive_frame_field_flag_mask               (0x40000000)
#define  CABAC_P2_cabac_p2_cntl2_write_enable6_mask                              (0x20000000)
#define  CABAC_P2_cabac_p2_cntl2_picmb_w_mask                                    (0x1FF80000)
#define  CABAC_P2_cabac_p2_cntl2_write_enable5_mask                              (0x00040000)
#define  CABAC_P2_cabac_p2_cntl2_monochrome_mask                                 (0x00020000)
#define  CABAC_P2_cabac_p2_cntl2_write_enable4_mask                              (0x00010000)
#define  CABAC_P2_cabac_p2_cntl2_field_pic_flag_mask                             (0x00008000)
#define  CABAC_P2_cabac_p2_cntl2_write_enable3_mask                              (0x00004000)
#define  CABAC_P2_cabac_p2_cntl2_pic_type_mask                                   (0x00003800)
#define  CABAC_P2_cabac_p2_cntl2_write_enable2_mask                              (0x00000400)
#define  CABAC_P2_cabac_p2_cntl2_slice_qp_delta_mask                             (0x000003F8)
#define  CABAC_P2_cabac_p2_cntl2_write_enable1_mask                              (0x00000004)
#define  CABAC_P2_cabac_p2_cntl2_cabac_init_idc_mask                             (0x00000003)
#define  CABAC_P2_cabac_p2_cntl2_write_enable7(data)                             (0x80000000&((data)<<31))
#define  CABAC_P2_cabac_p2_cntl2_mb_adaptive_frame_field_flag(data)              (0x40000000&((data)<<30))
#define  CABAC_P2_cabac_p2_cntl2_write_enable6(data)                             (0x20000000&((data)<<29))
#define  CABAC_P2_cabac_p2_cntl2_picmb_w(data)                                   (0x1FF80000&((data)<<19))
#define  CABAC_P2_cabac_p2_cntl2_write_enable5(data)                             (0x00040000&((data)<<18))
#define  CABAC_P2_cabac_p2_cntl2_monochrome(data)                                (0x00020000&((data)<<17))
#define  CABAC_P2_cabac_p2_cntl2_write_enable4(data)                             (0x00010000&((data)<<16))
#define  CABAC_P2_cabac_p2_cntl2_field_pic_flag(data)                            (0x00008000&((data)<<15))
#define  CABAC_P2_cabac_p2_cntl2_write_enable3(data)                             (0x00004000&((data)<<14))
#define  CABAC_P2_cabac_p2_cntl2_pic_type(data)                                  (0x00003800&((data)<<11))
#define  CABAC_P2_cabac_p2_cntl2_write_enable2(data)                             (0x00000400&((data)<<10))
#define  CABAC_P2_cabac_p2_cntl2_slice_qp_delta(data)                            (0x000003F8&((data)<<3))
#define  CABAC_P2_cabac_p2_cntl2_write_enable1(data)                             (0x00000004&((data)<<2))
#define  CABAC_P2_cabac_p2_cntl2_cabac_init_idc(data)                            (0x00000003&(data))
#define  CABAC_P2_cabac_p2_cntl2_get_write_enable7(data)                         ((0x80000000&(data))>>31)
#define  CABAC_P2_cabac_p2_cntl2_get_mb_adaptive_frame_field_flag(data)          ((0x40000000&(data))>>30)
#define  CABAC_P2_cabac_p2_cntl2_get_write_enable6(data)                         ((0x20000000&(data))>>29)
#define  CABAC_P2_cabac_p2_cntl2_get_picmb_w(data)                               ((0x1FF80000&(data))>>19)
#define  CABAC_P2_cabac_p2_cntl2_get_write_enable5(data)                         ((0x00040000&(data))>>18)
#define  CABAC_P2_cabac_p2_cntl2_get_monochrome(data)                            ((0x00020000&(data))>>17)
#define  CABAC_P2_cabac_p2_cntl2_get_write_enable4(data)                         ((0x00010000&(data))>>16)
#define  CABAC_P2_cabac_p2_cntl2_get_field_pic_flag(data)                        ((0x00008000&(data))>>15)
#define  CABAC_P2_cabac_p2_cntl2_get_write_enable3(data)                         ((0x00004000&(data))>>14)
#define  CABAC_P2_cabac_p2_cntl2_get_pic_type(data)                              ((0x00003800&(data))>>11)
#define  CABAC_P2_cabac_p2_cntl2_get_write_enable2(data)                         ((0x00000400&(data))>>10)
#define  CABAC_P2_cabac_p2_cntl2_get_slice_qp_delta(data)                        ((0x000003F8&(data))>>3)
#define  CABAC_P2_cabac_p2_cntl2_get_write_enable1(data)                         ((0x00000004&(data))>>2)
#define  CABAC_P2_cabac_p2_cntl2_get_cabac_init_idc(data)                        (0x00000003&(data))

#define  CABAC_P2_p2_hevcseqcntl                                                0x1800E254
#define  CABAC_P2_p2_hevcseqcntl_reg_addr                                        "0xB800E254"
#define  CABAC_P2_p2_hevcseqcntl_reg                                             0xB800E254
#define  CABAC_P2_p2_hevcseqcntl_inst_addr                                       "0x0016"
#define  set_CABAC_P2_p2_hevcseqcntl_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_p2_hevcseqcntl_reg)=data)
#define  get_CABAC_P2_p2_hevcseqcntl_reg                                         (*((volatile unsigned int*)CABAC_P2_p2_hevcseqcntl_reg))
#define  CABAC_P2_p2_hevcseqcntl_chroma_bits_shift                               (28)
#define  CABAC_P2_p2_hevcseqcntl_luma_bits_shift                                 (26)
#define  CABAC_P2_p2_hevcseqcntl_mincbsize_shift                                 (21)
#define  CABAC_P2_p2_hevcseqcntl_ctbsize_shift                                   (19)
#define  CABAC_P2_p2_hevcseqcntl_min_trafo_size_shift                            (17)
#define  CABAC_P2_p2_hevcseqcntl_max_trafo_size_shift                            (15)
#define  CABAC_P2_p2_hevcseqcntl_max_trans_hier_depth_inter_shift                (12)
#define  CABAC_P2_p2_hevcseqcntl_max_trans_hier_depth_intra_shift                (9)
#define  CABAC_P2_p2_hevcseqcntl_amp_enabled_flag_shift                          (8)
#define  CABAC_P2_p2_hevcseqcntl_pcm_enabled_flag_shift                          (6)
#define  CABAC_P2_p2_hevcseqcntl_min_ipcm_cbsize_shift                           (4)
#define  CABAC_P2_p2_hevcseqcntl_max_ipcm_cbsize_shift                           (2)
#define  CABAC_P2_p2_hevcseqcntl_chroma_bits_mask                                (0x30000000)
#define  CABAC_P2_p2_hevcseqcntl_luma_bits_mask                                  (0x0C000000)
#define  CABAC_P2_p2_hevcseqcntl_mincbsize_mask                                  (0x00600000)
#define  CABAC_P2_p2_hevcseqcntl_ctbsize_mask                                    (0x00180000)
#define  CABAC_P2_p2_hevcseqcntl_min_trafo_size_mask                             (0x00060000)
#define  CABAC_P2_p2_hevcseqcntl_max_trafo_size_mask                             (0x00018000)
#define  CABAC_P2_p2_hevcseqcntl_max_trans_hier_depth_inter_mask                 (0x00007000)
#define  CABAC_P2_p2_hevcseqcntl_max_trans_hier_depth_intra_mask                 (0x00000E00)
#define  CABAC_P2_p2_hevcseqcntl_amp_enabled_flag_mask                           (0x00000100)
#define  CABAC_P2_p2_hevcseqcntl_pcm_enabled_flag_mask                           (0x00000040)
#define  CABAC_P2_p2_hevcseqcntl_min_ipcm_cbsize_mask                            (0x00000030)
#define  CABAC_P2_p2_hevcseqcntl_max_ipcm_cbsize_mask                            (0x0000000C)
#define  CABAC_P2_p2_hevcseqcntl_chroma_bits(data)                               (0x30000000&((data)<<28))
#define  CABAC_P2_p2_hevcseqcntl_luma_bits(data)                                 (0x0C000000&((data)<<26))
#define  CABAC_P2_p2_hevcseqcntl_mincbsize(data)                                 (0x00600000&((data)<<21))
#define  CABAC_P2_p2_hevcseqcntl_ctbsize(data)                                   (0x00180000&((data)<<19))
#define  CABAC_P2_p2_hevcseqcntl_min_trafo_size(data)                            (0x00060000&((data)<<17))
#define  CABAC_P2_p2_hevcseqcntl_max_trafo_size(data)                            (0x00018000&((data)<<15))
#define  CABAC_P2_p2_hevcseqcntl_max_trans_hier_depth_inter(data)                (0x00007000&((data)<<12))
#define  CABAC_P2_p2_hevcseqcntl_max_trans_hier_depth_intra(data)                (0x00000E00&((data)<<9))
#define  CABAC_P2_p2_hevcseqcntl_amp_enabled_flag(data)                          (0x00000100&((data)<<8))
#define  CABAC_P2_p2_hevcseqcntl_pcm_enabled_flag(data)                          (0x00000040&((data)<<6))
#define  CABAC_P2_p2_hevcseqcntl_min_ipcm_cbsize(data)                           (0x00000030&((data)<<4))
#define  CABAC_P2_p2_hevcseqcntl_max_ipcm_cbsize(data)                           (0x0000000C&((data)<<2))
#define  CABAC_P2_p2_hevcseqcntl_get_chroma_bits(data)                           ((0x30000000&(data))>>28)
#define  CABAC_P2_p2_hevcseqcntl_get_luma_bits(data)                             ((0x0C000000&(data))>>26)
#define  CABAC_P2_p2_hevcseqcntl_get_mincbsize(data)                             ((0x00600000&(data))>>21)
#define  CABAC_P2_p2_hevcseqcntl_get_ctbsize(data)                               ((0x00180000&(data))>>19)
#define  CABAC_P2_p2_hevcseqcntl_get_min_trafo_size(data)                        ((0x00060000&(data))>>17)
#define  CABAC_P2_p2_hevcseqcntl_get_max_trafo_size(data)                        ((0x00018000&(data))>>15)
#define  CABAC_P2_p2_hevcseqcntl_get_max_trans_hier_depth_inter(data)            ((0x00007000&(data))>>12)
#define  CABAC_P2_p2_hevcseqcntl_get_max_trans_hier_depth_intra(data)            ((0x00000E00&(data))>>9)
#define  CABAC_P2_p2_hevcseqcntl_get_amp_enabled_flag(data)                      ((0x00000100&(data))>>8)
#define  CABAC_P2_p2_hevcseqcntl_get_pcm_enabled_flag(data)                      ((0x00000040&(data))>>6)
#define  CABAC_P2_p2_hevcseqcntl_get_min_ipcm_cbsize(data)                       ((0x00000030&(data))>>4)
#define  CABAC_P2_p2_hevcseqcntl_get_max_ipcm_cbsize(data)                       ((0x0000000C&(data))>>2)

#define  CABAC_P2_p2_hevcpicsize                                                0x1800E258
#define  CABAC_P2_p2_hevcpicsize_reg_addr                                        "0xB800E258"
#define  CABAC_P2_p2_hevcpicsize_reg                                             0xB800E258
#define  CABAC_P2_p2_hevcpicsize_inst_addr                                       "0x0017"
#define  set_CABAC_P2_p2_hevcpicsize_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_p2_hevcpicsize_reg)=data)
#define  get_CABAC_P2_p2_hevcpicsize_reg                                         (*((volatile unsigned int*)CABAC_P2_p2_hevcpicsize_reg))
#define  CABAC_P2_p2_hevcpicsize_pic_width_shift                                 (13)
#define  CABAC_P2_p2_hevcpicsize_pic_height_shift                                (0)
#define  CABAC_P2_p2_hevcpicsize_pic_width_mask                                  (0x07FFE000)
#define  CABAC_P2_p2_hevcpicsize_pic_height_mask                                 (0x00001FFF)
#define  CABAC_P2_p2_hevcpicsize_pic_width(data)                                 (0x07FFE000&((data)<<13))
#define  CABAC_P2_p2_hevcpicsize_pic_height(data)                                (0x00001FFF&(data))
#define  CABAC_P2_p2_hevcpicsize_get_pic_width(data)                             ((0x07FFE000&(data))>>13)
#define  CABAC_P2_p2_hevcpicsize_get_pic_height(data)                            (0x00001FFF&(data))

#define  CABAC_P2_p2_hevc_cntl                                                  0x1800E068
#define  CABAC_P2_p2_hevc_cntl_reg_addr                                          "0xB800E068"
#define  CABAC_P2_p2_hevc_cntl_reg                                               0xB800E068
#define  CABAC_P2_p2_hevc_cntl_inst_addr                                         "0x0018"
#define  set_CABAC_P2_p2_hevc_cntl_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_hevc_cntl_reg)=data)
#define  get_CABAC_P2_p2_hevc_cntl_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_hevc_cntl_reg))
#define  CABAC_P2_p2_hevc_cntl_av1_delta_q_res_bit_shift                         (30)
#define  CABAC_P2_p2_hevc_cntl_av1_delta_lf_res_bit_shift                        (28)
#define  CABAC_P2_p2_hevc_cntl_vp9_fwbw_upd_max_bl_option_shift                  (26)
#define  CABAC_P2_p2_hevc_cntl_av1_delta_lf_multi_shift                          (25)
#define  CABAC_P2_p2_hevc_cntl_byte_align_always_drop_shift                      (24)
#define  CABAC_P2_p2_hevc_cntl_mvd_l1_zero_flag_shift                            (23)
#define  CABAC_P2_p2_hevc_cntl_pcm_bit_depth_chroma_shift                        (19)
#define  CABAC_P2_p2_hevc_cntl_pcm_bit_depth_luma_shift                          (15)
#define  CABAC_P2_p2_hevc_cntl_cabac_init_flag_shift                             (14)
#define  CABAC_P2_p2_hevc_cntl_entropy_coding_sync_enabled_flag_shift            (13)
#define  CABAC_P2_p2_hevc_cntl_tiles_enabled_flag_shift                          (12)
#define  CABAC_P2_p2_hevc_cntl_min_cu_qp_delta_size_shift                        (9)
#define  CABAC_P2_p2_hevc_cntl_cu_qp_delta_enabled_flag_shift                    (8)
#define  CABAC_P2_p2_hevc_cntl_max_num_merge_cand_shift                          (5)
#define  CABAC_P2_p2_hevc_cntl_slice_sao_chroma_flag_shift                       (4)
#define  CABAC_P2_p2_hevc_cntl_slice_sao_luma_flag_shift                         (3)
#define  CABAC_P2_p2_hevc_cntl_transform_skip_enabled_flag_shift                 (2)
#define  CABAC_P2_p2_hevc_cntl_transquant_bypass_enable_flag_shift               (1)
#define  CABAC_P2_p2_hevc_cntl_sign_data_hiding_flag_shift                       (0)
#define  CABAC_P2_p2_hevc_cntl_av1_delta_q_res_bit_mask                          (0xC0000000)
#define  CABAC_P2_p2_hevc_cntl_av1_delta_lf_res_bit_mask                         (0x30000000)
#define  CABAC_P2_p2_hevc_cntl_vp9_fwbw_upd_max_bl_option_mask                   (0x0C000000)
#define  CABAC_P2_p2_hevc_cntl_av1_delta_lf_multi_mask                           (0x02000000)
#define  CABAC_P2_p2_hevc_cntl_byte_align_always_drop_mask                       (0x01000000)
#define  CABAC_P2_p2_hevc_cntl_mvd_l1_zero_flag_mask                             (0x00800000)
#define  CABAC_P2_p2_hevc_cntl_pcm_bit_depth_chroma_mask                         (0x00780000)
#define  CABAC_P2_p2_hevc_cntl_pcm_bit_depth_luma_mask                           (0x00078000)
#define  CABAC_P2_p2_hevc_cntl_cabac_init_flag_mask                              (0x00004000)
#define  CABAC_P2_p2_hevc_cntl_entropy_coding_sync_enabled_flag_mask             (0x00002000)
#define  CABAC_P2_p2_hevc_cntl_tiles_enabled_flag_mask                           (0x00001000)
#define  CABAC_P2_p2_hevc_cntl_min_cu_qp_delta_size_mask                         (0x00000E00)
#define  CABAC_P2_p2_hevc_cntl_cu_qp_delta_enabled_flag_mask                     (0x00000100)
#define  CABAC_P2_p2_hevc_cntl_max_num_merge_cand_mask                           (0x000000E0)
#define  CABAC_P2_p2_hevc_cntl_slice_sao_chroma_flag_mask                        (0x00000010)
#define  CABAC_P2_p2_hevc_cntl_slice_sao_luma_flag_mask                          (0x00000008)
#define  CABAC_P2_p2_hevc_cntl_transform_skip_enabled_flag_mask                  (0x00000004)
#define  CABAC_P2_p2_hevc_cntl_transquant_bypass_enable_flag_mask                (0x00000002)
#define  CABAC_P2_p2_hevc_cntl_sign_data_hiding_flag_mask                        (0x00000001)
#define  CABAC_P2_p2_hevc_cntl_av1_delta_q_res_bit(data)                         (0xC0000000&((data)<<30))
#define  CABAC_P2_p2_hevc_cntl_av1_delta_lf_res_bit(data)                        (0x30000000&((data)<<28))
#define  CABAC_P2_p2_hevc_cntl_vp9_fwbw_upd_max_bl_option(data)                  (0x0C000000&((data)<<26))
#define  CABAC_P2_p2_hevc_cntl_av1_delta_lf_multi(data)                          (0x02000000&((data)<<25))
#define  CABAC_P2_p2_hevc_cntl_byte_align_always_drop(data)                      (0x01000000&((data)<<24))
#define  CABAC_P2_p2_hevc_cntl_mvd_l1_zero_flag(data)                            (0x00800000&((data)<<23))
#define  CABAC_P2_p2_hevc_cntl_pcm_bit_depth_chroma(data)                        (0x00780000&((data)<<19))
#define  CABAC_P2_p2_hevc_cntl_pcm_bit_depth_luma(data)                          (0x00078000&((data)<<15))
#define  CABAC_P2_p2_hevc_cntl_cabac_init_flag(data)                             (0x00004000&((data)<<14))
#define  CABAC_P2_p2_hevc_cntl_entropy_coding_sync_enabled_flag(data)            (0x00002000&((data)<<13))
#define  CABAC_P2_p2_hevc_cntl_tiles_enabled_flag(data)                          (0x00001000&((data)<<12))
#define  CABAC_P2_p2_hevc_cntl_min_cu_qp_delta_size(data)                        (0x00000E00&((data)<<9))
#define  CABAC_P2_p2_hevc_cntl_cu_qp_delta_enabled_flag(data)                    (0x00000100&((data)<<8))
#define  CABAC_P2_p2_hevc_cntl_max_num_merge_cand(data)                          (0x000000E0&((data)<<5))
#define  CABAC_P2_p2_hevc_cntl_slice_sao_chroma_flag(data)                       (0x00000010&((data)<<4))
#define  CABAC_P2_p2_hevc_cntl_slice_sao_luma_flag(data)                         (0x00000008&((data)<<3))
#define  CABAC_P2_p2_hevc_cntl_transform_skip_enabled_flag(data)                 (0x00000004&((data)<<2))
#define  CABAC_P2_p2_hevc_cntl_transquant_bypass_enable_flag(data)               (0x00000002&((data)<<1))
#define  CABAC_P2_p2_hevc_cntl_sign_data_hiding_flag(data)                       (0x00000001&(data))
#define  CABAC_P2_p2_hevc_cntl_get_av1_delta_q_res_bit(data)                     ((0xC0000000&(data))>>30)
#define  CABAC_P2_p2_hevc_cntl_get_av1_delta_lf_res_bit(data)                    ((0x30000000&(data))>>28)
#define  CABAC_P2_p2_hevc_cntl_get_vp9_fwbw_upd_max_bl_option(data)              ((0x0C000000&(data))>>26)
#define  CABAC_P2_p2_hevc_cntl_get_av1_delta_lf_multi(data)                      ((0x02000000&(data))>>25)
#define  CABAC_P2_p2_hevc_cntl_get_byte_align_always_drop(data)                  ((0x01000000&(data))>>24)
#define  CABAC_P2_p2_hevc_cntl_get_mvd_l1_zero_flag(data)                        ((0x00800000&(data))>>23)
#define  CABAC_P2_p2_hevc_cntl_get_pcm_bit_depth_chroma(data)                    ((0x00780000&(data))>>19)
#define  CABAC_P2_p2_hevc_cntl_get_pcm_bit_depth_luma(data)                      ((0x00078000&(data))>>15)
#define  CABAC_P2_p2_hevc_cntl_get_cabac_init_flag(data)                         ((0x00004000&(data))>>14)
#define  CABAC_P2_p2_hevc_cntl_get_entropy_coding_sync_enabled_flag(data)        ((0x00002000&(data))>>13)
#define  CABAC_P2_p2_hevc_cntl_get_tiles_enabled_flag(data)                      ((0x00001000&(data))>>12)
#define  CABAC_P2_p2_hevc_cntl_get_min_cu_qp_delta_size(data)                    ((0x00000E00&(data))>>9)
#define  CABAC_P2_p2_hevc_cntl_get_cu_qp_delta_enabled_flag(data)                ((0x00000100&(data))>>8)
#define  CABAC_P2_p2_hevc_cntl_get_max_num_merge_cand(data)                      ((0x000000E0&(data))>>5)
#define  CABAC_P2_p2_hevc_cntl_get_slice_sao_chroma_flag(data)                   ((0x00000010&(data))>>4)
#define  CABAC_P2_p2_hevc_cntl_get_slice_sao_luma_flag(data)                     ((0x00000008&(data))>>3)
#define  CABAC_P2_p2_hevc_cntl_get_transform_skip_enabled_flag(data)             ((0x00000004&(data))>>2)
#define  CABAC_P2_p2_hevc_cntl_get_transquant_bypass_enable_flag(data)           ((0x00000002&(data))>>1)
#define  CABAC_P2_p2_hevc_cntl_get_sign_data_hiding_flag(data)                   (0x00000001&(data))

#define  CABAC_P2_p2_hevc_tile1                                                 0x1800E06C
#define  CABAC_P2_p2_hevc_tile1_reg_addr                                         "0xB800E06C"
#define  CABAC_P2_p2_hevc_tile1_reg                                              0xB800E06C
#define  CABAC_P2_p2_hevc_tile1_inst_addr                                        "0x0019"
#define  set_CABAC_P2_p2_hevc_tile1_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_hevc_tile1_reg)=data)
#define  get_CABAC_P2_p2_hevc_tile1_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_hevc_tile1_reg))
#define  CABAC_P2_p2_hevc_tile1_tile_ctb_w_shift                                 (9)
#define  CABAC_P2_p2_hevc_tile1_tile_ctb_h_shift                                 (0)
#define  CABAC_P2_p2_hevc_tile1_tile_ctb_w_mask                                  (0x0007FE00)
#define  CABAC_P2_p2_hevc_tile1_tile_ctb_h_mask                                  (0x000001FF)
#define  CABAC_P2_p2_hevc_tile1_tile_ctb_w(data)                                 (0x0007FE00&((data)<<9))
#define  CABAC_P2_p2_hevc_tile1_tile_ctb_h(data)                                 (0x000001FF&(data))
#define  CABAC_P2_p2_hevc_tile1_get_tile_ctb_w(data)                             ((0x0007FE00&(data))>>9)
#define  CABAC_P2_p2_hevc_tile1_get_tile_ctb_h(data)                             (0x000001FF&(data))

#define  CABAC_P2_p2_hevc_tile2                                                 0x1800E048
#define  CABAC_P2_p2_hevc_tile2_reg_addr                                         "0xB800E048"
#define  CABAC_P2_p2_hevc_tile2_reg                                              0xB800E048
#define  CABAC_P2_p2_hevc_tile2_inst_addr                                        "0x001A"
#define  set_CABAC_P2_p2_hevc_tile2_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_hevc_tile2_reg)=data)
#define  get_CABAC_P2_p2_hevc_tile2_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_hevc_tile2_reg))
#define  CABAC_P2_p2_hevc_tile2_ctxmem_work_sel_shift                            (19)
#define  CABAC_P2_p2_hevc_tile2_tile_start_adr_x_shift                           (9)
#define  CABAC_P2_p2_hevc_tile2_tile_start_adr_y_shift                           (0)
#define  CABAC_P2_p2_hevc_tile2_ctxmem_work_sel_mask                             (0x00080000)
#define  CABAC_P2_p2_hevc_tile2_tile_start_adr_x_mask                            (0x0007FE00)
#define  CABAC_P2_p2_hevc_tile2_tile_start_adr_y_mask                            (0x000001FF)
#define  CABAC_P2_p2_hevc_tile2_ctxmem_work_sel(data)                            (0x00080000&((data)<<19))
#define  CABAC_P2_p2_hevc_tile2_tile_start_adr_x(data)                           (0x0007FE00&((data)<<9))
#define  CABAC_P2_p2_hevc_tile2_tile_start_adr_y(data)                           (0x000001FF&(data))
#define  CABAC_P2_p2_hevc_tile2_get_ctxmem_work_sel(data)                        ((0x00080000&(data))>>19)
#define  CABAC_P2_p2_hevc_tile2_get_tile_start_adr_x(data)                       ((0x0007FE00&(data))>>9)
#define  CABAC_P2_p2_hevc_tile2_get_tile_start_adr_y(data)                       (0x000001FF&(data))

#define  CABAC_P2_p2_hevc_tile3                                                 0x1800E04C
#define  CABAC_P2_p2_hevc_tile3_reg_addr                                         "0xB800E04C"
#define  CABAC_P2_p2_hevc_tile3_reg                                              0xB800E04C
#define  CABAC_P2_p2_hevc_tile3_inst_addr                                        "0x001B"
#define  set_CABAC_P2_p2_hevc_tile3_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_hevc_tile3_reg)=data)
#define  get_CABAC_P2_p2_hevc_tile3_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_hevc_tile3_reg))
#define  CABAC_P2_p2_hevc_tile3_tile_offset_adr_x_shift                          (9)
#define  CABAC_P2_p2_hevc_tile3_tile_offset_adr_y_shift                          (0)
#define  CABAC_P2_p2_hevc_tile3_tile_offset_adr_x_mask                           (0x0007FE00)
#define  CABAC_P2_p2_hevc_tile3_tile_offset_adr_y_mask                           (0x000001FF)
#define  CABAC_P2_p2_hevc_tile3_tile_offset_adr_x(data)                          (0x0007FE00&((data)<<9))
#define  CABAC_P2_p2_hevc_tile3_tile_offset_adr_y(data)                          (0x000001FF&(data))
#define  CABAC_P2_p2_hevc_tile3_get_tile_offset_adr_x(data)                      ((0x0007FE00&(data))>>9)
#define  CABAC_P2_p2_hevc_tile3_get_tile_offset_adr_y(data)                      (0x000001FF&(data))

#define  CABAC_P2_p2_decbitcnt                                                  0x1800E250
#define  CABAC_P2_p2_decbitcnt_reg_addr                                          "0xB800E250"
#define  CABAC_P2_p2_decbitcnt_reg                                               0xB800E250
#define  CABAC_P2_p2_decbitcnt_inst_addr                                         "0x001C"
#define  set_CABAC_P2_p2_decbitcnt_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_decbitcnt_reg)=data)
#define  get_CABAC_P2_p2_decbitcnt_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_decbitcnt_reg))
#define  CABAC_P2_p2_decbitcnt_max_bit_shift                                     (0)
#define  CABAC_P2_p2_decbitcnt_max_bit_mask                                      (0xFFFFFFFF)
#define  CABAC_P2_p2_decbitcnt_max_bit(data)                                     (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_decbitcnt_get_max_bit(data)                                 (0xFFFFFFFF&(data))

#define  CABAC_P2_hevc_ctb                                                      0x1800E078
#define  CABAC_P2_hevc_ctb_reg_addr                                              "0xB800E078"
#define  CABAC_P2_hevc_ctb_reg                                                   0xB800E078
#define  CABAC_P2_hevc_ctb_inst_addr                                             "0x001D"
#define  set_CABAC_P2_hevc_ctb_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_hevc_ctb_reg)=data)
#define  get_CABAC_P2_hevc_ctb_reg                                               (*((volatile unsigned int*)CABAC_P2_hevc_ctb_reg))
#define  CABAC_P2_hevc_ctb_bin_loc_reg_shift                                     (0)
#define  CABAC_P2_hevc_ctb_bin_loc_reg_mask                                      (0xFFFFFFFF)
#define  CABAC_P2_hevc_ctb_bin_loc_reg(data)                                     (0xFFFFFFFF&(data))
#define  CABAC_P2_hevc_ctb_get_bin_loc_reg(data)                                 (0xFFFFFFFF&(data))

#define  CABAC_P2_hevc_pre_ctb                                                  0x1800E07C
#define  CABAC_P2_hevc_pre_ctb_reg_addr                                          "0xB800E07C"
#define  CABAC_P2_hevc_pre_ctb_reg                                               0xB800E07C
#define  CABAC_P2_hevc_pre_ctb_inst_addr                                         "0x001E"
#define  set_CABAC_P2_hevc_pre_ctb_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_hevc_pre_ctb_reg)=data)
#define  get_CABAC_P2_hevc_pre_ctb_reg                                           (*((volatile unsigned int*)CABAC_P2_hevc_pre_ctb_reg))
#define  CABAC_P2_hevc_pre_ctb_bin_loc_reg_shift                                 (0)
#define  CABAC_P2_hevc_pre_ctb_bin_loc_reg_mask                                  (0xFFFFFFFF)
#define  CABAC_P2_hevc_pre_ctb_bin_loc_reg(data)                                 (0xFFFFFFFF&(data))
#define  CABAC_P2_hevc_pre_ctb_get_bin_loc_reg(data)                             (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_segtab_base                                                0x1800E024
#define  CABAC_P2_p2_segtab_base_reg_addr                                        "0xB800E024"
#define  CABAC_P2_p2_segtab_base_reg                                             0xB800E024
#define  CABAC_P2_p2_segtab_base_inst_addr                                       "0x001F"
#define  set_CABAC_P2_p2_segtab_base_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_p2_segtab_base_reg)=data)
#define  get_CABAC_P2_p2_segtab_base_reg                                         (*((volatile unsigned int*)CABAC_P2_p2_segtab_base_reg))
#define  CABAC_P2_p2_segtab_base_base_addr_shift                                 (0)
#define  CABAC_P2_p2_segtab_base_base_addr_mask                                  (0xFFFFFFFF)
#define  CABAC_P2_p2_segtab_base_base_addr(data)                                 (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_segtab_base_get_base_addr(data)                             (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_seg_set0                                                   0x1800E028
#define  CABAC_P2_p2_seg_set0_reg_addr                                           "0xB800E028"
#define  CABAC_P2_p2_seg_set0_reg                                                0xB800E028
#define  CABAC_P2_p2_seg_set0_inst_addr                                          "0x0020"
#define  set_CABAC_P2_p2_seg_set0_reg(data)                                      (*((volatile unsigned int*)CABAC_P2_p2_seg_set0_reg)=data)
#define  get_CABAC_P2_p2_seg_set0_reg                                            (*((volatile unsigned int*)CABAC_P2_p2_seg_set0_reg))
#define  CABAC_P2_p2_seg_set0_av1_lossless_shift                                 (24)
#define  CABAC_P2_p2_seg_set0_id_7_ref_frame_shift                               (21)
#define  CABAC_P2_p2_seg_set0_id_6_ref_frame_shift                               (18)
#define  CABAC_P2_p2_seg_set0_id_5_ref_frame_shift                               (15)
#define  CABAC_P2_p2_seg_set0_id_4_ref_frame_shift                               (12)
#define  CABAC_P2_p2_seg_set0_id_3_ref_frame_shift                               (9)
#define  CABAC_P2_p2_seg_set0_id_2_ref_frame_shift                               (6)
#define  CABAC_P2_p2_seg_set0_id_1_ref_frame_shift                               (3)
#define  CABAC_P2_p2_seg_set0_id_0_ref_frame_shift                               (0)
#define  CABAC_P2_p2_seg_set0_av1_lossless_mask                                  (0xFF000000)
#define  CABAC_P2_p2_seg_set0_id_7_ref_frame_mask                                (0x00E00000)
#define  CABAC_P2_p2_seg_set0_id_6_ref_frame_mask                                (0x001C0000)
#define  CABAC_P2_p2_seg_set0_id_5_ref_frame_mask                                (0x00038000)
#define  CABAC_P2_p2_seg_set0_id_4_ref_frame_mask                                (0x00007000)
#define  CABAC_P2_p2_seg_set0_id_3_ref_frame_mask                                (0x00000E00)
#define  CABAC_P2_p2_seg_set0_id_2_ref_frame_mask                                (0x000001C0)
#define  CABAC_P2_p2_seg_set0_id_1_ref_frame_mask                                (0x00000038)
#define  CABAC_P2_p2_seg_set0_id_0_ref_frame_mask                                (0x00000007)
#define  CABAC_P2_p2_seg_set0_av1_lossless(data)                                 (0xFF000000&((data)<<24))
#define  CABAC_P2_p2_seg_set0_id_7_ref_frame(data)                               (0x00E00000&((data)<<21))
#define  CABAC_P2_p2_seg_set0_id_6_ref_frame(data)                               (0x001C0000&((data)<<18))
#define  CABAC_P2_p2_seg_set0_id_5_ref_frame(data)                               (0x00038000&((data)<<15))
#define  CABAC_P2_p2_seg_set0_id_4_ref_frame(data)                               (0x00007000&((data)<<12))
#define  CABAC_P2_p2_seg_set0_id_3_ref_frame(data)                               (0x00000E00&((data)<<9))
#define  CABAC_P2_p2_seg_set0_id_2_ref_frame(data)                               (0x000001C0&((data)<<6))
#define  CABAC_P2_p2_seg_set0_id_1_ref_frame(data)                               (0x00000038&((data)<<3))
#define  CABAC_P2_p2_seg_set0_id_0_ref_frame(data)                               (0x00000007&(data))
#define  CABAC_P2_p2_seg_set0_get_av1_lossless(data)                             ((0xFF000000&(data))>>24)
#define  CABAC_P2_p2_seg_set0_get_id_7_ref_frame(data)                           ((0x00E00000&(data))>>21)
#define  CABAC_P2_p2_seg_set0_get_id_6_ref_frame(data)                           ((0x001C0000&(data))>>18)
#define  CABAC_P2_p2_seg_set0_get_id_5_ref_frame(data)                           ((0x00038000&(data))>>15)
#define  CABAC_P2_p2_seg_set0_get_id_4_ref_frame(data)                           ((0x00007000&(data))>>12)
#define  CABAC_P2_p2_seg_set0_get_id_3_ref_frame(data)                           ((0x00000E00&(data))>>9)
#define  CABAC_P2_p2_seg_set0_get_id_2_ref_frame(data)                           ((0x000001C0&(data))>>6)
#define  CABAC_P2_p2_seg_set0_get_id_1_ref_frame(data)                           ((0x00000038&(data))>>3)
#define  CABAC_P2_p2_seg_set0_get_id_0_ref_frame(data)                           (0x00000007&(data))

#define  CABAC_P2_p2_seg_set1                                                   0x1800E02C
#define  CABAC_P2_p2_seg_set1_reg_addr                                           "0xB800E02C"
#define  CABAC_P2_p2_seg_set1_reg                                                0xB800E02C
#define  CABAC_P2_p2_seg_set1_inst_addr                                          "0x0021"
#define  set_CABAC_P2_p2_seg_set1_reg(data)                                      (*((volatile unsigned int*)CABAC_P2_p2_seg_set1_reg)=data)
#define  get_CABAC_P2_p2_seg_set1_reg                                            (*((volatile unsigned int*)CABAC_P2_p2_seg_set1_reg))
#define  CABAC_P2_p2_seg_set1_prev_frm_id_is_all_0_shift                         (29)
#define  CABAC_P2_p2_seg_set1_id_skip_mask_shift                                 (21)
#define  CABAC_P2_p2_seg_set1_id_ref_frame_mask_shift                            (13)
#define  CABAC_P2_p2_seg_set1_id_7_skip_shift                                    (12)
#define  CABAC_P2_p2_seg_set1_id_6_skip_shift                                    (11)
#define  CABAC_P2_p2_seg_set1_id_5_skip_shift                                    (10)
#define  CABAC_P2_p2_seg_set1_id_4_skip_shift                                    (9)
#define  CABAC_P2_p2_seg_set1_id_3_skip_shift                                    (8)
#define  CABAC_P2_p2_seg_set1_id_2_skip_shift                                    (7)
#define  CABAC_P2_p2_seg_set1_id_1_skip_shift                                    (6)
#define  CABAC_P2_p2_seg_set1_id_0_skip_shift                                    (5)
#define  CABAC_P2_p2_seg_set1_temperal_update_shift                              (4)
#define  CABAC_P2_p2_seg_set1_abs_delta_shift                                    (3)
#define  CABAC_P2_p2_seg_set1_update_data_shift                                  (2)
#define  CABAC_P2_p2_seg_set1_update_map_shift                                   (1)
#define  CABAC_P2_p2_seg_set1_enabled_shift                                      (0)
#define  CABAC_P2_p2_seg_set1_prev_frm_id_is_all_0_mask                          (0x20000000)
#define  CABAC_P2_p2_seg_set1_id_skip_mask_mask                                  (0x1FE00000)
#define  CABAC_P2_p2_seg_set1_id_ref_frame_mask_mask                             (0x001FE000)
#define  CABAC_P2_p2_seg_set1_id_7_skip_mask                                     (0x00001000)
#define  CABAC_P2_p2_seg_set1_id_6_skip_mask                                     (0x00000800)
#define  CABAC_P2_p2_seg_set1_id_5_skip_mask                                     (0x00000400)
#define  CABAC_P2_p2_seg_set1_id_4_skip_mask                                     (0x00000200)
#define  CABAC_P2_p2_seg_set1_id_3_skip_mask                                     (0x00000100)
#define  CABAC_P2_p2_seg_set1_id_2_skip_mask                                     (0x00000080)
#define  CABAC_P2_p2_seg_set1_id_1_skip_mask                                     (0x00000040)
#define  CABAC_P2_p2_seg_set1_id_0_skip_mask                                     (0x00000020)
#define  CABAC_P2_p2_seg_set1_temperal_update_mask                               (0x00000010)
#define  CABAC_P2_p2_seg_set1_abs_delta_mask                                     (0x00000008)
#define  CABAC_P2_p2_seg_set1_update_data_mask                                   (0x00000004)
#define  CABAC_P2_p2_seg_set1_update_map_mask                                    (0x00000002)
#define  CABAC_P2_p2_seg_set1_enabled_mask                                       (0x00000001)
#define  CABAC_P2_p2_seg_set1_prev_frm_id_is_all_0(data)                         (0x20000000&((data)<<29))
#define  CABAC_P2_p2_seg_set1_id_skip_mask(data)                                 (0x1FE00000&((data)<<21))
#define  CABAC_P2_p2_seg_set1_id_ref_frame_mask(data)                            (0x001FE000&((data)<<13))
#define  CABAC_P2_p2_seg_set1_id_7_skip(data)                                    (0x00001000&((data)<<12))
#define  CABAC_P2_p2_seg_set1_id_6_skip(data)                                    (0x00000800&((data)<<11))
#define  CABAC_P2_p2_seg_set1_id_5_skip(data)                                    (0x00000400&((data)<<10))
#define  CABAC_P2_p2_seg_set1_id_4_skip(data)                                    (0x00000200&((data)<<9))
#define  CABAC_P2_p2_seg_set1_id_3_skip(data)                                    (0x00000100&((data)<<8))
#define  CABAC_P2_p2_seg_set1_id_2_skip(data)                                    (0x00000080&((data)<<7))
#define  CABAC_P2_p2_seg_set1_id_1_skip(data)                                    (0x00000040&((data)<<6))
#define  CABAC_P2_p2_seg_set1_id_0_skip(data)                                    (0x00000020&((data)<<5))
#define  CABAC_P2_p2_seg_set1_temperal_update(data)                              (0x00000010&((data)<<4))
#define  CABAC_P2_p2_seg_set1_abs_delta(data)                                    (0x00000008&((data)<<3))
#define  CABAC_P2_p2_seg_set1_update_data(data)                                  (0x00000004&((data)<<2))
#define  CABAC_P2_p2_seg_set1_update_map(data)                                   (0x00000002&((data)<<1))
#define  CABAC_P2_p2_seg_set1_enabled(data)                                      (0x00000001&(data))
#define  CABAC_P2_p2_seg_set1_get_prev_frm_id_is_all_0(data)                     ((0x20000000&(data))>>29)
#define  CABAC_P2_p2_seg_set1_get_id_skip_mask(data)                             ((0x1FE00000&(data))>>21)
#define  CABAC_P2_p2_seg_set1_get_id_ref_frame_mask(data)                        ((0x001FE000&(data))>>13)
#define  CABAC_P2_p2_seg_set1_get_id_7_skip(data)                                ((0x00001000&(data))>>12)
#define  CABAC_P2_p2_seg_set1_get_id_6_skip(data)                                ((0x00000800&(data))>>11)
#define  CABAC_P2_p2_seg_set1_get_id_5_skip(data)                                ((0x00000400&(data))>>10)
#define  CABAC_P2_p2_seg_set1_get_id_4_skip(data)                                ((0x00000200&(data))>>9)
#define  CABAC_P2_p2_seg_set1_get_id_3_skip(data)                                ((0x00000100&(data))>>8)
#define  CABAC_P2_p2_seg_set1_get_id_2_skip(data)                                ((0x00000080&(data))>>7)
#define  CABAC_P2_p2_seg_set1_get_id_1_skip(data)                                ((0x00000040&(data))>>6)
#define  CABAC_P2_p2_seg_set1_get_id_0_skip(data)                                ((0x00000020&(data))>>5)
#define  CABAC_P2_p2_seg_set1_get_temperal_update(data)                          ((0x00000010&(data))>>4)
#define  CABAC_P2_p2_seg_set1_get_abs_delta(data)                                ((0x00000008&(data))>>3)
#define  CABAC_P2_p2_seg_set1_get_update_data(data)                              ((0x00000004&(data))>>2)
#define  CABAC_P2_p2_seg_set1_get_update_map(data)                               ((0x00000002&(data))>>1)
#define  CABAC_P2_p2_seg_set1_get_enabled(data)                                  (0x00000001&(data))

#define  CABAC_P2_p2_vp9_pic_level                                              0x1800E12C
#define  CABAC_P2_p2_vp9_pic_level_reg_addr                                      "0xB800E12C"
#define  CABAC_P2_p2_vp9_pic_level_reg                                           0xB800E12C
#define  CABAC_P2_p2_vp9_pic_level_inst_addr                                     "0x0022"
#define  set_CABAC_P2_p2_vp9_pic_level_reg(data)                                 (*((volatile unsigned int*)CABAC_P2_p2_vp9_pic_level_reg)=data)
#define  get_CABAC_P2_p2_vp9_pic_level_reg                                       (*((volatile unsigned int*)CABAC_P2_p2_vp9_pic_level_reg))
#define  CABAC_P2_p2_vp9_pic_level_last_active_segid_shift                       (24)
#define  CABAC_P2_p2_vp9_pic_level_lossless_shift                                (23)
#define  CABAC_P2_p2_vp9_pic_level_allow_high_precision_mv_shift                 (22)
#define  CABAC_P2_p2_vp9_pic_level_error_resilient_mode_shift                    (21)
#define  CABAC_P2_p2_vp9_pic_level_subsampling_x_shift                           (20)
#define  CABAC_P2_p2_vp9_pic_level_subsampling_y_shift                           (19)
#define  CABAC_P2_p2_vp9_pic_level_intra_only_shift                              (18)
#define  CABAC_P2_p2_vp9_pic_level_tx_mode_shift                                 (15)
#define  CABAC_P2_p2_vp9_pic_level_reference_mode_shift                          (13)
#define  CABAC_P2_p2_vp9_pic_level_ref_frame_sign_bias_shift                     (9)
#define  CABAC_P2_p2_vp9_pic_level_comp_fixed_ref_shift                          (7)
#define  CABAC_P2_p2_vp9_pic_level_comp_var_ref_0_shift                          (5)
#define  CABAC_P2_p2_vp9_pic_level_comp_var_ref_1_shift                          (3)
#define  CABAC_P2_p2_vp9_pic_level_interp_filter_shift                           (0)
#define  CABAC_P2_p2_vp9_pic_level_last_active_segid_mask                        (0x07000000)
#define  CABAC_P2_p2_vp9_pic_level_lossless_mask                                 (0x00800000)
#define  CABAC_P2_p2_vp9_pic_level_allow_high_precision_mv_mask                  (0x00400000)
#define  CABAC_P2_p2_vp9_pic_level_error_resilient_mode_mask                     (0x00200000)
#define  CABAC_P2_p2_vp9_pic_level_subsampling_x_mask                            (0x00100000)
#define  CABAC_P2_p2_vp9_pic_level_subsampling_y_mask                            (0x00080000)
#define  CABAC_P2_p2_vp9_pic_level_intra_only_mask                               (0x00040000)
#define  CABAC_P2_p2_vp9_pic_level_tx_mode_mask                                  (0x00038000)
#define  CABAC_P2_p2_vp9_pic_level_reference_mode_mask                           (0x00006000)
#define  CABAC_P2_p2_vp9_pic_level_ref_frame_sign_bias_mask                      (0x00001E00)
#define  CABAC_P2_p2_vp9_pic_level_comp_fixed_ref_mask                           (0x00000180)
#define  CABAC_P2_p2_vp9_pic_level_comp_var_ref_0_mask                           (0x00000060)
#define  CABAC_P2_p2_vp9_pic_level_comp_var_ref_1_mask                           (0x00000018)
#define  CABAC_P2_p2_vp9_pic_level_interp_filter_mask                            (0x00000007)
#define  CABAC_P2_p2_vp9_pic_level_last_active_segid(data)                       (0x07000000&((data)<<24))
#define  CABAC_P2_p2_vp9_pic_level_lossless(data)                                (0x00800000&((data)<<23))
#define  CABAC_P2_p2_vp9_pic_level_allow_high_precision_mv(data)                 (0x00400000&((data)<<22))
#define  CABAC_P2_p2_vp9_pic_level_error_resilient_mode(data)                    (0x00200000&((data)<<21))
#define  CABAC_P2_p2_vp9_pic_level_subsampling_x(data)                           (0x00100000&((data)<<20))
#define  CABAC_P2_p2_vp9_pic_level_subsampling_y(data)                           (0x00080000&((data)<<19))
#define  CABAC_P2_p2_vp9_pic_level_intra_only(data)                              (0x00040000&((data)<<18))
#define  CABAC_P2_p2_vp9_pic_level_tx_mode(data)                                 (0x00038000&((data)<<15))
#define  CABAC_P2_p2_vp9_pic_level_reference_mode(data)                          (0x00006000&((data)<<13))
#define  CABAC_P2_p2_vp9_pic_level_ref_frame_sign_bias(data)                     (0x00001E00&((data)<<9))
#define  CABAC_P2_p2_vp9_pic_level_comp_fixed_ref(data)                          (0x00000180&((data)<<7))
#define  CABAC_P2_p2_vp9_pic_level_comp_var_ref_0(data)                          (0x00000060&((data)<<5))
#define  CABAC_P2_p2_vp9_pic_level_comp_var_ref_1(data)                          (0x00000018&((data)<<3))
#define  CABAC_P2_p2_vp9_pic_level_interp_filter(data)                           (0x00000007&(data))
#define  CABAC_P2_p2_vp9_pic_level_get_last_active_segid(data)                   ((0x07000000&(data))>>24)
#define  CABAC_P2_p2_vp9_pic_level_get_lossless(data)                            ((0x00800000&(data))>>23)
#define  CABAC_P2_p2_vp9_pic_level_get_allow_high_precision_mv(data)             ((0x00400000&(data))>>22)
#define  CABAC_P2_p2_vp9_pic_level_get_error_resilient_mode(data)                ((0x00200000&(data))>>21)
#define  CABAC_P2_p2_vp9_pic_level_get_subsampling_x(data)                       ((0x00100000&(data))>>20)
#define  CABAC_P2_p2_vp9_pic_level_get_subsampling_y(data)                       ((0x00080000&(data))>>19)
#define  CABAC_P2_p2_vp9_pic_level_get_intra_only(data)                          ((0x00040000&(data))>>18)
#define  CABAC_P2_p2_vp9_pic_level_get_tx_mode(data)                             ((0x00038000&(data))>>15)
#define  CABAC_P2_p2_vp9_pic_level_get_reference_mode(data)                      ((0x00006000&(data))>>13)
#define  CABAC_P2_p2_vp9_pic_level_get_ref_frame_sign_bias(data)                 ((0x00001E00&(data))>>9)
#define  CABAC_P2_p2_vp9_pic_level_get_comp_fixed_ref(data)                      ((0x00000180&(data))>>7)
#define  CABAC_P2_p2_vp9_pic_level_get_comp_var_ref_0(data)                      ((0x00000060&(data))>>5)
#define  CABAC_P2_p2_vp9_pic_level_get_comp_var_ref_1(data)                      ((0x00000018&(data))>>3)
#define  CABAC_P2_p2_vp9_pic_level_get_interp_filter(data)                       (0x00000007&(data))

#define  CABAC_P2_avs2_p2                                                       0x1800E3C4
#define  CABAC_P2_avs2_p2_reg_addr                                               "0xB800E3C4"
#define  CABAC_P2_avs2_p2_reg                                                    0xB800E3C4
#define  CABAC_P2_avs2_p2_inst_addr                                              "0x0023"
#define  set_CABAC_P2_avs2_p2_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_avs2_p2_reg)=data)
#define  get_CABAC_P2_avs2_p2_reg                                                (*((volatile unsigned int*)CABAC_P2_avs2_p2_reg))
#define  CABAC_P2_avs2_p2_cdef_bits_shift                                        (21)
#define  CABAC_P2_avs2_p2_allow_intrabc_shift                                    (20)
#define  CABAC_P2_avs2_p2_allow_screen_content_tools_shift                       (19)
#define  CABAC_P2_avs2_p2_allow_interintra_compound_shift                        (18)
#define  CABAC_P2_avs2_p2_allow_masked_compound_shift                            (17)
#define  CABAC_P2_avs2_p2_secondarytransformenableflag_shift                     (16)
#define  CABAC_P2_avs2_p2_fixed_qp_shift                                         (15)
#define  CABAC_P2_avs2_p2_refpicnum_shift                                        (12)
#define  CABAC_P2_avs2_p2_slicesaoenableflag_shift                               (9)
#define  CABAC_P2_avs2_p2_picturealfenableflag_shift                             (6)
#define  CABAC_P2_avs2_p2_nsipenableflag_shift                                   (5)
#define  CABAC_P2_avs2_p2_nsqtenableflag_shift                                   (4)
#define  CABAC_P2_avs2_p2_asymmetricmotionpartitionsenableflag_shift             (3)
#define  CABAC_P2_avs2_p2_weightedskipenableflag_shift                           (2)
#define  CABAC_P2_avs2_p2_dualhypothesispredictionenableflag_shift               (1)
#define  CABAC_P2_avs2_p2_multihypothesisskipenableflag_shift                    (0)
#define  CABAC_P2_avs2_p2_cdef_bits_mask                                         (0x00600000)
#define  CABAC_P2_avs2_p2_allow_intrabc_mask                                     (0x00100000)
#define  CABAC_P2_avs2_p2_allow_screen_content_tools_mask                        (0x00080000)
#define  CABAC_P2_avs2_p2_allow_interintra_compound_mask                         (0x00040000)
#define  CABAC_P2_avs2_p2_allow_masked_compound_mask                             (0x00020000)
#define  CABAC_P2_avs2_p2_secondarytransformenableflag_mask                      (0x00010000)
#define  CABAC_P2_avs2_p2_fixed_qp_mask                                          (0x00008000)
#define  CABAC_P2_avs2_p2_refpicnum_mask                                         (0x00007000)
#define  CABAC_P2_avs2_p2_slicesaoenableflag_mask                                (0x00000E00)
#define  CABAC_P2_avs2_p2_picturealfenableflag_mask                              (0x000001C0)
#define  CABAC_P2_avs2_p2_nsipenableflag_mask                                    (0x00000020)
#define  CABAC_P2_avs2_p2_nsqtenableflag_mask                                    (0x00000010)
#define  CABAC_P2_avs2_p2_asymmetricmotionpartitionsenableflag_mask              (0x00000008)
#define  CABAC_P2_avs2_p2_weightedskipenableflag_mask                            (0x00000004)
#define  CABAC_P2_avs2_p2_dualhypothesispredictionenableflag_mask                (0x00000002)
#define  CABAC_P2_avs2_p2_multihypothesisskipenableflag_mask                     (0x00000001)
#define  CABAC_P2_avs2_p2_cdef_bits(data)                                        (0x00600000&((data)<<21))
#define  CABAC_P2_avs2_p2_allow_intrabc(data)                                    (0x00100000&((data)<<20))
#define  CABAC_P2_avs2_p2_allow_screen_content_tools(data)                       (0x00080000&((data)<<19))
#define  CABAC_P2_avs2_p2_allow_interintra_compound(data)                        (0x00040000&((data)<<18))
#define  CABAC_P2_avs2_p2_allow_masked_compound(data)                            (0x00020000&((data)<<17))
#define  CABAC_P2_avs2_p2_secondarytransformenableflag(data)                     (0x00010000&((data)<<16))
#define  CABAC_P2_avs2_p2_fixed_qp(data)                                         (0x00008000&((data)<<15))
#define  CABAC_P2_avs2_p2_refpicnum(data)                                        (0x00007000&((data)<<12))
#define  CABAC_P2_avs2_p2_slicesaoenableflag(data)                               (0x00000E00&((data)<<9))
#define  CABAC_P2_avs2_p2_picturealfenableflag(data)                             (0x000001C0&((data)<<6))
#define  CABAC_P2_avs2_p2_nsipenableflag(data)                                   (0x00000020&((data)<<5))
#define  CABAC_P2_avs2_p2_nsqtenableflag(data)                                   (0x00000010&((data)<<4))
#define  CABAC_P2_avs2_p2_asymmetricmotionpartitionsenableflag(data)             (0x00000008&((data)<<3))
#define  CABAC_P2_avs2_p2_weightedskipenableflag(data)                           (0x00000004&((data)<<2))
#define  CABAC_P2_avs2_p2_dualhypothesispredictionenableflag(data)               (0x00000002&((data)<<1))
#define  CABAC_P2_avs2_p2_multihypothesisskipenableflag(data)                    (0x00000001&(data))
#define  CABAC_P2_avs2_p2_get_cdef_bits(data)                                    ((0x00600000&(data))>>21)
#define  CABAC_P2_avs2_p2_get_allow_intrabc(data)                                ((0x00100000&(data))>>20)
#define  CABAC_P2_avs2_p2_get_allow_screen_content_tools(data)                   ((0x00080000&(data))>>19)
#define  CABAC_P2_avs2_p2_get_allow_interintra_compound(data)                    ((0x00040000&(data))>>18)
#define  CABAC_P2_avs2_p2_get_allow_masked_compound(data)                        ((0x00020000&(data))>>17)
#define  CABAC_P2_avs2_p2_get_secondarytransformenableflag(data)                 ((0x00010000&(data))>>16)
#define  CABAC_P2_avs2_p2_get_fixed_qp(data)                                     ((0x00008000&(data))>>15)
#define  CABAC_P2_avs2_p2_get_refpicnum(data)                                    ((0x00007000&(data))>>12)
#define  CABAC_P2_avs2_p2_get_slicesaoenableflag(data)                           ((0x00000E00&(data))>>9)
#define  CABAC_P2_avs2_p2_get_picturealfenableflag(data)                         ((0x000001C0&(data))>>6)
#define  CABAC_P2_avs2_p2_get_nsipenableflag(data)                               ((0x00000020&(data))>>5)
#define  CABAC_P2_avs2_p2_get_nsqtenableflag(data)                               ((0x00000010&(data))>>4)
#define  CABAC_P2_avs2_p2_get_asymmetricmotionpartitionsenableflag(data)         ((0x00000008&(data))>>3)
#define  CABAC_P2_avs2_p2_get_weightedskipenableflag(data)                       ((0x00000004&(data))>>2)
#define  CABAC_P2_avs2_p2_get_dualhypothesispredictionenableflag(data)           ((0x00000002&(data))>>1)
#define  CABAC_P2_avs2_p2_get_multihypothesisskipenableflag(data)                (0x00000001&(data))

#define  CABAC_P2_av1_p2_ref                                                    0x1800E190
#define  CABAC_P2_av1_p2_ref_reg_addr                                            "0xB800E190"
#define  CABAC_P2_av1_p2_ref_reg                                                 0xB800E190
#define  CABAC_P2_av1_p2_ref_inst_addr                                           "0x0024"
#define  set_CABAC_P2_av1_p2_ref_reg(data)                                       (*((volatile unsigned int*)CABAC_P2_av1_p2_ref_reg)=data)
#define  get_CABAC_P2_av1_p2_ref_reg                                             (*((volatile unsigned int*)CABAC_P2_av1_p2_ref_reg))
#define  CABAC_P2_av1_p2_ref_ref_frame_sign_bias_shift                           (21)
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_2_shift                                (18)
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_1_shift                                (15)
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_0_shift                                (12)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_3_shift                                (9)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_2_shift                                (6)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_1_shift                                (3)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_0_shift                                (0)
#define  CABAC_P2_av1_p2_ref_ref_frame_sign_bias_mask                            (0x1FE00000)
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_2_mask                                 (0x001C0000)
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_1_mask                                 (0x00038000)
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_0_mask                                 (0x00007000)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_3_mask                                 (0x00000E00)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_2_mask                                 (0x000001C0)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_1_mask                                 (0x00000038)
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_0_mask                                 (0x00000007)
#define  CABAC_P2_av1_p2_ref_ref_frame_sign_bias(data)                           (0x1FE00000&((data)<<21))
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_2(data)                                (0x001C0000&((data)<<18))
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_1(data)                                (0x00038000&((data)<<15))
#define  CABAC_P2_av1_p2_ref_comp_bwd_ref_0(data)                                (0x00007000&((data)<<12))
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_3(data)                                (0x00000E00&((data)<<9))
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_2(data)                                (0x000001C0&((data)<<6))
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_1(data)                                (0x00000038&((data)<<3))
#define  CABAC_P2_av1_p2_ref_comp_fwd_ref_0(data)                                (0x00000007&(data))
#define  CABAC_P2_av1_p2_ref_get_ref_frame_sign_bias(data)                       ((0x1FE00000&(data))>>21)
#define  CABAC_P2_av1_p2_ref_get_comp_bwd_ref_2(data)                            ((0x001C0000&(data))>>18)
#define  CABAC_P2_av1_p2_ref_get_comp_bwd_ref_1(data)                            ((0x00038000&(data))>>15)
#define  CABAC_P2_av1_p2_ref_get_comp_bwd_ref_0(data)                            ((0x00007000&(data))>>12)
#define  CABAC_P2_av1_p2_ref_get_comp_fwd_ref_3(data)                            ((0x00000E00&(data))>>9)
#define  CABAC_P2_av1_p2_ref_get_comp_fwd_ref_2(data)                            ((0x000001C0&(data))>>6)
#define  CABAC_P2_av1_p2_ref_get_comp_fwd_ref_1(data)                            ((0x00000038&(data))>>3)
#define  CABAC_P2_av1_p2_ref_get_comp_fwd_ref_0(data)                            (0x00000007&(data))

#define  CABAC_P2_vp9co                                                         0x1800E084
#define  CABAC_P2_vp9co_reg_addr                                                 "0xB800E084"
#define  CABAC_P2_vp9co_reg                                                      0xB800E084
#define  CABAC_P2_vp9co_inst_addr                                                "0x0025"
#define  set_CABAC_P2_vp9co_reg(data)                                            (*((volatile unsigned int*)CABAC_P2_vp9co_reg)=data)
#define  get_CABAC_P2_vp9co_reg                                                  (*((volatile unsigned int*)CABAC_P2_vp9co_reg))
#define  CABAC_P2_vp9co_stcomemsaddr_shift                                       (0)
#define  CABAC_P2_vp9co_stcomemsaddr_mask                                        (0xFFFFFFFF)
#define  CABAC_P2_vp9co_stcomemsaddr(data)                                       (0xFFFFFFFF&(data))
#define  CABAC_P2_vp9co_get_stcomemsaddr(data)                                   (0xFFFFFFFF&(data))

#define  CABAC_P2_vp9co1                                                        0x1800E088
#define  CABAC_P2_vp9co1_reg_addr                                                "0xB800E088"
#define  CABAC_P2_vp9co1_reg                                                     0xB800E088
#define  CABAC_P2_vp9co1_inst_addr                                               "0x0026"
#define  set_CABAC_P2_vp9co1_reg(data)                                           (*((volatile unsigned int*)CABAC_P2_vp9co1_reg)=data)
#define  get_CABAC_P2_vp9co1_reg                                                 (*((volatile unsigned int*)CABAC_P2_vp9co1_reg))
#define  CABAC_P2_vp9co1_ldcomemsaddr_shift                                      (0)
#define  CABAC_P2_vp9co1_ldcomemsaddr_mask                                       (0xFFFFFFFF)
#define  CABAC_P2_vp9co1_ldcomemsaddr(data)                                      (0xFFFFFFFF&(data))
#define  CABAC_P2_vp9co1_get_ldcomemsaddr(data)                                  (0xFFFFFFFF&(data))

#define  CABAC_P2_vp9nh                                                         0x1800E08C
#define  CABAC_P2_vp9nh_reg_addr                                                 "0xB800E08C"
#define  CABAC_P2_vp9nh_reg                                                      0xB800E08C
#define  CABAC_P2_vp9nh_inst_addr                                                "0x0027"
#define  set_CABAC_P2_vp9nh_reg(data)                                            (*((volatile unsigned int*)CABAC_P2_vp9nh_reg)=data)
#define  get_CABAC_P2_vp9nh_reg                                                  (*((volatile unsigned int*)CABAC_P2_vp9nh_reg))
#define  CABAC_P2_vp9nh_stnhmemsaddr_shift                                       (0)
#define  CABAC_P2_vp9nh_stnhmemsaddr_mask                                        (0xFFFFFFFF)
#define  CABAC_P2_vp9nh_stnhmemsaddr(data)                                       (0xFFFFFFFF&(data))
#define  CABAC_P2_vp9nh_get_stnhmemsaddr(data)                                   (0xFFFFFFFF&(data))

#define  CABAC_P2_vp9nh1                                                        0x1800E098
#define  CABAC_P2_vp9nh1_reg_addr                                                "0xB800E098"
#define  CABAC_P2_vp9nh1_reg                                                     0xB800E098
#define  CABAC_P2_vp9nh1_inst_addr                                               "0x0028"
#define  set_CABAC_P2_vp9nh1_reg(data)                                           (*((volatile unsigned int*)CABAC_P2_vp9nh1_reg)=data)
#define  get_CABAC_P2_vp9nh1_reg                                                 (*((volatile unsigned int*)CABAC_P2_vp9nh1_reg))
#define  CABAC_P2_vp9nh1_ldnhmemsaddr_shift                                      (0)
#define  CABAC_P2_vp9nh1_ldnhmemsaddr_mask                                       (0xFFFFFFFF)
#define  CABAC_P2_vp9nh1_ldnhmemsaddr(data)                                      (0xFFFFFFFF&(data))
#define  CABAC_P2_vp9nh1_get_ldnhmemsaddr(data)                                  (0xFFFFFFFF&(data))

#define  CABAC_P2_vp9co2                                                        0x1800E268
#define  CABAC_P2_vp9co2_reg_addr                                                "0xB800E268"
#define  CABAC_P2_vp9co2_reg                                                     0xB800E268
#define  CABAC_P2_vp9co2_inst_addr                                               "0x0029"
#define  set_CABAC_P2_vp9co2_reg(data)                                           (*((volatile unsigned int*)CABAC_P2_vp9co2_reg)=data)
#define  get_CABAC_P2_vp9co2_reg                                                 (*((volatile unsigned int*)CABAC_P2_vp9co2_reg))
#define  CABAC_P2_vp9co2_disablecomem_shift                                      (0)
#define  CABAC_P2_vp9co2_disablecomem_mask                                       (0x00000001)
#define  CABAC_P2_vp9co2_disablecomem(data)                                      (0x00000001&(data))
#define  CABAC_P2_vp9co2_get_disablecomem(data)                                  (0x00000001&(data))

#define  CABAC_P2_p2_ndb_ctl                                                    0x1800E3B8
#define  CABAC_P2_p2_ndb_ctl_reg_addr                                            "0xB800E3B8"
#define  CABAC_P2_p2_ndb_ctl_reg                                                 0xB800E3B8
#define  CABAC_P2_p2_ndb_ctl_inst_addr                                           "0x002A"
#define  set_CABAC_P2_p2_ndb_ctl_reg(data)                                       (*((volatile unsigned int*)CABAC_P2_p2_ndb_ctl_reg)=data)
#define  get_CABAC_P2_p2_ndb_ctl_reg                                             (*((volatile unsigned int*)CABAC_P2_p2_ndb_ctl_reg))
#define  CABAC_P2_p2_ndb_ctl_write_enable3_shift                                 (5)
#define  CABAC_P2_p2_ndb_ctl_cabac_halt_done_shift                               (4)
#define  CABAC_P2_p2_ndb_ctl_write_enable2_shift                                 (3)
#define  CABAC_P2_p2_ndb_ctl_cabac_halt_shift                                    (2)
#define  CABAC_P2_p2_ndb_ctl_write_enable1_shift                                 (1)
#define  CABAC_P2_p2_ndb_ctl_postwrite_en_shift                                  (0)
#define  CABAC_P2_p2_ndb_ctl_write_enable3_mask                                  (0x00000020)
#define  CABAC_P2_p2_ndb_ctl_cabac_halt_done_mask                                (0x00000010)
#define  CABAC_P2_p2_ndb_ctl_write_enable2_mask                                  (0x00000008)
#define  CABAC_P2_p2_ndb_ctl_cabac_halt_mask                                     (0x00000004)
#define  CABAC_P2_p2_ndb_ctl_write_enable1_mask                                  (0x00000002)
#define  CABAC_P2_p2_ndb_ctl_postwrite_en_mask                                   (0x00000001)
#define  CABAC_P2_p2_ndb_ctl_write_enable3(data)                                 (0x00000020&((data)<<5))
#define  CABAC_P2_p2_ndb_ctl_cabac_halt_done(data)                               (0x00000010&((data)<<4))
#define  CABAC_P2_p2_ndb_ctl_write_enable2(data)                                 (0x00000008&((data)<<3))
#define  CABAC_P2_p2_ndb_ctl_cabac_halt(data)                                    (0x00000004&((data)<<2))
#define  CABAC_P2_p2_ndb_ctl_write_enable1(data)                                 (0x00000002&((data)<<1))
#define  CABAC_P2_p2_ndb_ctl_postwrite_en(data)                                  (0x00000001&(data))
#define  CABAC_P2_p2_ndb_ctl_get_write_enable3(data)                             ((0x00000020&(data))>>5)
#define  CABAC_P2_p2_ndb_ctl_get_cabac_halt_done(data)                           ((0x00000010&(data))>>4)
#define  CABAC_P2_p2_ndb_ctl_get_write_enable2(data)                             ((0x00000008&(data))>>3)
#define  CABAC_P2_p2_ndb_ctl_get_cabac_halt(data)                                ((0x00000004&(data))>>2)
#define  CABAC_P2_p2_ndb_ctl_get_write_enable1(data)                             ((0x00000002&(data))>>1)
#define  CABAC_P2_p2_ndb_ctl_get_postwrite_en(data)                              (0x00000001&(data))

#define  CABAC_P2_ndb_cabac_base                                                0x1800E394
#define  CABAC_P2_ndb_cabac_base_reg_addr                                        "0xB800E394"
#define  CABAC_P2_ndb_cabac_base_reg                                             0xB800E394
#define  CABAC_P2_ndb_cabac_base_inst_addr                                       "0x002B"
#define  set_CABAC_P2_ndb_cabac_base_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_ndb_cabac_base_reg)=data)
#define  get_CABAC_P2_ndb_cabac_base_reg                                         (*((volatile unsigned int*)CABAC_P2_ndb_cabac_base_reg))
#define  CABAC_P2_ndb_cabac_base_base_addr_shift                                 (0)
#define  CABAC_P2_ndb_cabac_base_base_addr_mask                                  (0xFFFFFFFF)
#define  CABAC_P2_ndb_cabac_base_base_addr(data)                                 (0xFFFFFFFF&(data))
#define  CABAC_P2_ndb_cabac_base_get_base_addr(data)                             (0xFFFFFFFF&(data))

#define  CABAC_P2_ndb_cabac_limit                                               0x1800E39C
#define  CABAC_P2_ndb_cabac_limit_reg_addr                                       "0xB800E39C"
#define  CABAC_P2_ndb_cabac_limit_reg                                            0xB800E39C
#define  CABAC_P2_ndb_cabac_limit_inst_addr                                      "0x002C"
#define  set_CABAC_P2_ndb_cabac_limit_reg(data)                                  (*((volatile unsigned int*)CABAC_P2_ndb_cabac_limit_reg)=data)
#define  get_CABAC_P2_ndb_cabac_limit_reg                                        (*((volatile unsigned int*)CABAC_P2_ndb_cabac_limit_reg))
#define  CABAC_P2_ndb_cabac_limit_limit_addr_shift                               (0)
#define  CABAC_P2_ndb_cabac_limit_limit_addr_mask                                (0xFFFFFFFF)
#define  CABAC_P2_ndb_cabac_limit_limit_addr(data)                               (0xFFFFFFFF&(data))
#define  CABAC_P2_ndb_cabac_limit_get_limit_addr(data)                           (0xFFFFFFFF&(data))

#define  CABAC_P2_ndb_cabac_wptr                                                0x1800E3A0
#define  CABAC_P2_ndb_cabac_wptr_reg_addr                                        "0xB800E3A0"
#define  CABAC_P2_ndb_cabac_wptr_reg                                             0xB800E3A0
#define  CABAC_P2_ndb_cabac_wptr_inst_addr                                       "0x002D"
#define  set_CABAC_P2_ndb_cabac_wptr_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_ndb_cabac_wptr_reg)=data)
#define  get_CABAC_P2_ndb_cabac_wptr_reg                                         (*((volatile unsigned int*)CABAC_P2_ndb_cabac_wptr_reg))
#define  CABAC_P2_ndb_cabac_wptr_wr_ptr_shift                                    (0)
#define  CABAC_P2_ndb_cabac_wptr_wr_ptr_mask                                     (0xFFFFFFFF)
#define  CABAC_P2_ndb_cabac_wptr_wr_ptr(data)                                    (0xFFFFFFFF&(data))
#define  CABAC_P2_ndb_cabac_wptr_get_wr_ptr(data)                                (0xFFFFFFFF&(data))

#define  CABAC_P2_ndb_cabac_rptr                                                0x1800E3A4
#define  CABAC_P2_ndb_cabac_rptr_reg_addr                                        "0xB800E3A4"
#define  CABAC_P2_ndb_cabac_rptr_reg                                             0xB800E3A4
#define  CABAC_P2_ndb_cabac_rptr_inst_addr                                       "0x002E"
#define  set_CABAC_P2_ndb_cabac_rptr_reg(data)                                   (*((volatile unsigned int*)CABAC_P2_ndb_cabac_rptr_reg)=data)
#define  get_CABAC_P2_ndb_cabac_rptr_reg                                         (*((volatile unsigned int*)CABAC_P2_ndb_cabac_rptr_reg))
#define  CABAC_P2_ndb_cabac_rptr_rd_ptr_shift                                    (0)
#define  CABAC_P2_ndb_cabac_rptr_rd_ptr_mask                                     (0xFFFFFFFF)
#define  CABAC_P2_ndb_cabac_rptr_rd_ptr(data)                                    (0xFFFFFFFF&(data))
#define  CABAC_P2_ndb_cabac_rptr_get_rd_ptr(data)                                (0xFFFFFFFF&(data))

#define  CABAC_P2_av1pic                                                        0x1800E160
#define  CABAC_P2_av1pic_reg_addr                                                "0xB800E160"
#define  CABAC_P2_av1pic_reg                                                     0xB800E160
#define  CABAC_P2_av1pic_inst_addr                                               "0x002F"
#define  set_CABAC_P2_av1pic_reg(data)                                           (*((volatile unsigned int*)CABAC_P2_av1pic_reg)=data)
#define  get_CABAC_P2_av1pic_reg                                                 (*((volatile unsigned int*)CABAC_P2_av1pic_reg))
#define  CABAC_P2_av1pic_motionfielddir2_shift                                   (25)
#define  CABAC_P2_av1pic_motionfielddir1_shift                                   (23)
#define  CABAC_P2_av1pic_motionfielddir0_shift                                   (21)
#define  CABAC_P2_av1pic_motionfielden2_shift                                    (20)
#define  CABAC_P2_av1pic_motionfielden1_shift                                    (19)
#define  CABAC_P2_av1pic_motionfielden0_shift                                    (18)
#define  CABAC_P2_av1pic_storebwmv_shift                                         (17)
#define  CABAC_P2_av1pic_forceintmv_shift                                        (16)
#define  CABAC_P2_av1pic_hwctrl_shift                                            (0)
#define  CABAC_P2_av1pic_motionfielddir2_mask                                    (0x06000000)
#define  CABAC_P2_av1pic_motionfielddir1_mask                                    (0x01800000)
#define  CABAC_P2_av1pic_motionfielddir0_mask                                    (0x00600000)
#define  CABAC_P2_av1pic_motionfielden2_mask                                     (0x00100000)
#define  CABAC_P2_av1pic_motionfielden1_mask                                     (0x00080000)
#define  CABAC_P2_av1pic_motionfielden0_mask                                     (0x00040000)
#define  CABAC_P2_av1pic_storebwmv_mask                                          (0x00020000)
#define  CABAC_P2_av1pic_forceintmv_mask                                         (0x00010000)
#define  CABAC_P2_av1pic_hwctrl_mask                                             (0x0000FFFF)
#define  CABAC_P2_av1pic_motionfielddir2(data)                                   (0x06000000&((data)<<25))
#define  CABAC_P2_av1pic_motionfielddir1(data)                                   (0x01800000&((data)<<23))
#define  CABAC_P2_av1pic_motionfielddir0(data)                                   (0x00600000&((data)<<21))
#define  CABAC_P2_av1pic_motionfielden2(data)                                    (0x00100000&((data)<<20))
#define  CABAC_P2_av1pic_motionfielden1(data)                                    (0x00080000&((data)<<19))
#define  CABAC_P2_av1pic_motionfielden0(data)                                    (0x00040000&((data)<<18))
#define  CABAC_P2_av1pic_storebwmv(data)                                         (0x00020000&((data)<<17))
#define  CABAC_P2_av1pic_forceintmv(data)                                        (0x00010000&((data)<<16))
#define  CABAC_P2_av1pic_hwctrl(data)                                            (0x0000FFFF&(data))
#define  CABAC_P2_av1pic_get_motionfielddir2(data)                               ((0x06000000&(data))>>25)
#define  CABAC_P2_av1pic_get_motionfielddir1(data)                               ((0x01800000&(data))>>23)
#define  CABAC_P2_av1pic_get_motionfielddir0(data)                               ((0x00600000&(data))>>21)
#define  CABAC_P2_av1pic_get_motionfielden2(data)                                ((0x00100000&(data))>>20)
#define  CABAC_P2_av1pic_get_motionfielden1(data)                                ((0x00080000&(data))>>19)
#define  CABAC_P2_av1pic_get_motionfielden0(data)                                ((0x00040000&(data))>>18)
#define  CABAC_P2_av1pic_get_storebwmv(data)                                     ((0x00020000&(data))>>17)
#define  CABAC_P2_av1pic_get_forceintmv(data)                                    ((0x00010000&(data))>>16)
#define  CABAC_P2_av1pic_get_hwctrl(data)                                        (0x0000FFFF&(data))

#define  CABAC_P2_indrbus                                                       0x1800E164
#define  CABAC_P2_indrbus_reg_addr                                               "0xB800E164"
#define  CABAC_P2_indrbus_reg                                                    0xB800E164
#define  CABAC_P2_indrbus_inst_addr                                              "0x0030"
#define  set_CABAC_P2_indrbus_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_indrbus_reg)=data)
#define  get_CABAC_P2_indrbus_reg                                                (*((volatile unsigned int*)CABAC_P2_indrbus_reg))
#define  CABAC_P2_indrbus_addr_shift                                             (2)
#define  CABAC_P2_indrbus_read_shift                                             (1)
#define  CABAC_P2_indrbus_write_shift                                            (0)
#define  CABAC_P2_indrbus_addr_mask                                              (0x000003FC)
#define  CABAC_P2_indrbus_read_mask                                              (0x00000002)
#define  CABAC_P2_indrbus_write_mask                                             (0x00000001)
#define  CABAC_P2_indrbus_addr(data)                                             (0x000003FC&((data)<<2))
#define  CABAC_P2_indrbus_read(data)                                             (0x00000002&((data)<<1))
#define  CABAC_P2_indrbus_write(data)                                            (0x00000001&(data))
#define  CABAC_P2_indrbus_get_addr(data)                                         ((0x000003FC&(data))>>2)
#define  CABAC_P2_indrbus_get_read(data)                                         ((0x00000002&(data))>>1)
#define  CABAC_P2_indrbus_get_write(data)                                        (0x00000001&(data))

#define  CABAC_P2_indrbus0                                                      0x1800E168
#define  CABAC_P2_indrbus0_reg_addr                                              "0xB800E168"
#define  CABAC_P2_indrbus0_reg                                                   0xB800E168
#define  CABAC_P2_indrbus0_inst_addr                                             "0x0031"
#define  set_CABAC_P2_indrbus0_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_indrbus0_reg)=data)
#define  get_CABAC_P2_indrbus0_reg                                               (*((volatile unsigned int*)CABAC_P2_indrbus0_reg))
#define  CABAC_P2_indrbus0_dat_shift                                             (0)
#define  CABAC_P2_indrbus0_dat_mask                                              (0xFFFFFFFF)
#define  CABAC_P2_indrbus0_dat(data)                                             (0xFFFFFFFF&(data))
#define  CABAC_P2_indrbus0_get_dat(data)                                         (0xFFFFFFFF&(data))

#define  CABAC_P2_indrbus1                                                      0x1800E16C
#define  CABAC_P2_indrbus1_reg_addr                                              "0xB800E16C"
#define  CABAC_P2_indrbus1_reg                                                   0xB800E16C
#define  CABAC_P2_indrbus1_inst_addr                                             "0x0032"
#define  set_CABAC_P2_indrbus1_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_indrbus1_reg)=data)
#define  get_CABAC_P2_indrbus1_reg                                               (*((volatile unsigned int*)CABAC_P2_indrbus1_reg))
#define  CABAC_P2_indrbus1_dat_shift                                             (0)
#define  CABAC_P2_indrbus1_dat_mask                                              (0xFFFFFFFF)
#define  CABAC_P2_indrbus1_dat(data)                                             (0xFFFFFFFF&(data))
#define  CABAC_P2_indrbus1_get_dat(data)                                         (0xFFFFFFFF&(data))

#define  CABAC_P2_indrbus2                                                      0x1800E170
#define  CABAC_P2_indrbus2_reg_addr                                              "0xB800E170"
#define  CABAC_P2_indrbus2_reg                                                   0xB800E170
#define  CABAC_P2_indrbus2_inst_addr                                             "0x0033"
#define  set_CABAC_P2_indrbus2_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_indrbus2_reg)=data)
#define  get_CABAC_P2_indrbus2_reg                                               (*((volatile unsigned int*)CABAC_P2_indrbus2_reg))
#define  CABAC_P2_indrbus2_dat_shift                                             (0)
#define  CABAC_P2_indrbus2_dat_mask                                              (0xFFFFFFFF)
#define  CABAC_P2_indrbus2_dat(data)                                             (0xFFFFFFFF&(data))
#define  CABAC_P2_indrbus2_get_dat(data)                                         (0xFFFFFFFF&(data))

#define  CABAC_P2_indrbus3                                                      0x1800E174
#define  CABAC_P2_indrbus3_reg_addr                                              "0xB800E174"
#define  CABAC_P2_indrbus3_reg                                                   0xB800E174
#define  CABAC_P2_indrbus3_inst_addr                                             "0x0034"
#define  set_CABAC_P2_indrbus3_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_indrbus3_reg)=data)
#define  get_CABAC_P2_indrbus3_reg                                               (*((volatile unsigned int*)CABAC_P2_indrbus3_reg))
#define  CABAC_P2_indrbus3_dat_shift                                             (0)
#define  CABAC_P2_indrbus3_dat_mask                                              (0xFFFFFFFF)
#define  CABAC_P2_indrbus3_dat(data)                                             (0xFFFFFFFF&(data))
#define  CABAC_P2_indrbus3_get_dat(data)                                         (0xFFFFFFFF&(data))

#define  CABAC_P2_av1ref                                                        0x1800E178
#define  CABAC_P2_av1ref_reg_addr                                                "0xB800E178"
#define  CABAC_P2_av1ref_reg                                                     0xB800E178
#define  CABAC_P2_av1ref_inst_addr                                               "0x0035"
#define  set_CABAC_P2_av1ref_reg(data)                                           (*((volatile unsigned int*)CABAC_P2_av1ref_reg)=data)
#define  get_CABAC_P2_av1ref_reg                                                 (*((volatile unsigned int*)CABAC_P2_av1ref_reg))
#define  CABAC_P2_av1ref_frameside1_shift                                        (12)
#define  CABAC_P2_av1ref_frameside2_shift                                        (10)
#define  CABAC_P2_av1ref_frameside3_shift                                        (8)
#define  CABAC_P2_av1ref_frameside4_shift                                        (6)
#define  CABAC_P2_av1ref_frameside5_shift                                        (4)
#define  CABAC_P2_av1ref_frameside6_shift                                        (2)
#define  CABAC_P2_av1ref_frameside7_shift                                        (0)
#define  CABAC_P2_av1ref_frameside1_mask                                         (0x00003000)
#define  CABAC_P2_av1ref_frameside2_mask                                         (0x00000C00)
#define  CABAC_P2_av1ref_frameside3_mask                                         (0x00000300)
#define  CABAC_P2_av1ref_frameside4_mask                                         (0x000000C0)
#define  CABAC_P2_av1ref_frameside5_mask                                         (0x00000030)
#define  CABAC_P2_av1ref_frameside6_mask                                         (0x0000000C)
#define  CABAC_P2_av1ref_frameside7_mask                                         (0x00000003)
#define  CABAC_P2_av1ref_frameside1(data)                                        (0x00003000&((data)<<12))
#define  CABAC_P2_av1ref_frameside2(data)                                        (0x00000C00&((data)<<10))
#define  CABAC_P2_av1ref_frameside3(data)                                        (0x00000300&((data)<<8))
#define  CABAC_P2_av1ref_frameside4(data)                                        (0x000000C0&((data)<<6))
#define  CABAC_P2_av1ref_frameside5(data)                                        (0x00000030&((data)<<4))
#define  CABAC_P2_av1ref_frameside6(data)                                        (0x0000000C&((data)<<2))
#define  CABAC_P2_av1ref_frameside7(data)                                        (0x00000003&(data))
#define  CABAC_P2_av1ref_get_frameside1(data)                                    ((0x00003000&(data))>>12)
#define  CABAC_P2_av1ref_get_frameside2(data)                                    ((0x00000C00&(data))>>10)
#define  CABAC_P2_av1ref_get_frameside3(data)                                    ((0x00000300&(data))>>8)
#define  CABAC_P2_av1ref_get_frameside4(data)                                    ((0x000000C0&(data))>>6)
#define  CABAC_P2_av1ref_get_frameside5(data)                                    ((0x00000030&(data))>>4)
#define  CABAC_P2_av1ref_get_frameside6(data)                                    ((0x0000000C&(data))>>2)
#define  CABAC_P2_av1ref_get_frameside7(data)                                    (0x00000003&(data))

#define  CABAC_P2_av1mf0co                                                      0x1800E15C
#define  CABAC_P2_av1mf0co_reg_addr                                              "0xB800E15C"
#define  CABAC_P2_av1mf0co_reg                                                   0xB800E15C
#define  CABAC_P2_av1mf0co_inst_addr                                             "0x0036"
#define  set_CABAC_P2_av1mf0co_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_av1mf0co_reg)=data)
#define  get_CABAC_P2_av1mf0co_reg                                               (*((volatile unsigned int*)CABAC_P2_av1mf0co_reg))
#define  CABAC_P2_av1mf0co_ldcomemsaddr_shift                                    (0)
#define  CABAC_P2_av1mf0co_ldcomemsaddr_mask                                     (0xFFFFFFFF)
#define  CABAC_P2_av1mf0co_ldcomemsaddr(data)                                    (0xFFFFFFFF&(data))
#define  CABAC_P2_av1mf0co_get_ldcomemsaddr(data)                                (0xFFFFFFFF&(data))

#define  CABAC_P2_av1mf1co                                                      0x1800E180
#define  CABAC_P2_av1mf1co_reg_addr                                              "0xB800E180"
#define  CABAC_P2_av1mf1co_reg                                                   0xB800E180
#define  CABAC_P2_av1mf1co_inst_addr                                             "0x0037"
#define  set_CABAC_P2_av1mf1co_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_av1mf1co_reg)=data)
#define  get_CABAC_P2_av1mf1co_reg                                               (*((volatile unsigned int*)CABAC_P2_av1mf1co_reg))
#define  CABAC_P2_av1mf1co_ldcomemsaddr_shift                                    (0)
#define  CABAC_P2_av1mf1co_ldcomemsaddr_mask                                     (0xFFFFFFFF)
#define  CABAC_P2_av1mf1co_ldcomemsaddr(data)                                    (0xFFFFFFFF&(data))
#define  CABAC_P2_av1mf1co_get_ldcomemsaddr(data)                                (0xFFFFFFFF&(data))

#define  CABAC_P2_av1mf2co                                                      0x1800E184
#define  CABAC_P2_av1mf2co_reg_addr                                              "0xB800E184"
#define  CABAC_P2_av1mf2co_reg                                                   0xB800E184
#define  CABAC_P2_av1mf2co_inst_addr                                             "0x0038"
#define  set_CABAC_P2_av1mf2co_reg(data)                                         (*((volatile unsigned int*)CABAC_P2_av1mf2co_reg)=data)
#define  get_CABAC_P2_av1mf2co_reg                                               (*((volatile unsigned int*)CABAC_P2_av1mf2co_reg))
#define  CABAC_P2_av1mf2co_ldcomemsaddr_shift                                    (0)
#define  CABAC_P2_av1mf2co_ldcomemsaddr_mask                                     (0xFFFFFFFF)
#define  CABAC_P2_av1mf2co_ldcomemsaddr(data)                                    (0xFFFFFFFF&(data))
#define  CABAC_P2_av1mf2co_get_ldcomemsaddr(data)                                (0xFFFFFFFF&(data))

#define  CABAC_P2_mf0set0                                                       0x1800E17C
#define  CABAC_P2_mf0set0_reg_addr                                               "0xB800E17C"
#define  CABAC_P2_mf0set0_reg                                                    0xB800E17C
#define  CABAC_P2_mf0set0_inst_addr                                              "0x0039"
#define  set_CABAC_P2_mf0set0_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf0set0_reg)=data)
#define  get_CABAC_P2_mf0set0_reg                                                (*((volatile unsigned int*)CABAC_P2_mf0set0_reg))
#define  CABAC_P2_mf0set0_reftocur_shift                                         (24)
#define  CABAC_P2_mf0set0_curoffset1_shift                                       (16)
#define  CABAC_P2_mf0set0_curoffset2_shift                                       (8)
#define  CABAC_P2_mf0set0_curoffset3_shift                                       (0)
#define  CABAC_P2_mf0set0_reftocur_mask                                          (0xFF000000)
#define  CABAC_P2_mf0set0_curoffset1_mask                                        (0x00FF0000)
#define  CABAC_P2_mf0set0_curoffset2_mask                                        (0x0000FF00)
#define  CABAC_P2_mf0set0_curoffset3_mask                                        (0x000000FF)
#define  CABAC_P2_mf0set0_reftocur(data)                                         (0xFF000000&((data)<<24))
#define  CABAC_P2_mf0set0_curoffset1(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf0set0_curoffset2(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf0set0_curoffset3(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf0set0_get_reftocur(data)                                     ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf0set0_get_curoffset1(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf0set0_get_curoffset2(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf0set0_get_curoffset3(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf0set1                                                       0x1800E130
#define  CABAC_P2_mf0set1_reg_addr                                               "0xB800E130"
#define  CABAC_P2_mf0set1_reg                                                    0xB800E130
#define  CABAC_P2_mf0set1_inst_addr                                              "0x003A"
#define  set_CABAC_P2_mf0set1_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf0set1_reg)=data)
#define  get_CABAC_P2_mf0set1_reg                                                (*((volatile unsigned int*)CABAC_P2_mf0set1_reg))
#define  CABAC_P2_mf0set1_curoffset4_shift                                       (24)
#define  CABAC_P2_mf0set1_curoffset5_shift                                       (16)
#define  CABAC_P2_mf0set1_curoffset6_shift                                       (8)
#define  CABAC_P2_mf0set1_curoffset7_shift                                       (0)
#define  CABAC_P2_mf0set1_curoffset4_mask                                        (0xFF000000)
#define  CABAC_P2_mf0set1_curoffset5_mask                                        (0x00FF0000)
#define  CABAC_P2_mf0set1_curoffset6_mask                                        (0x0000FF00)
#define  CABAC_P2_mf0set1_curoffset7_mask                                        (0x000000FF)
#define  CABAC_P2_mf0set1_curoffset4(data)                                       (0xFF000000&((data)<<24))
#define  CABAC_P2_mf0set1_curoffset5(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf0set1_curoffset6(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf0set1_curoffset7(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf0set1_get_curoffset4(data)                                   ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf0set1_get_curoffset5(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf0set1_get_curoffset6(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf0set1_get_curoffset7(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf0set2                                                       0x1800E134
#define  CABAC_P2_mf0set2_reg_addr                                               "0xB800E134"
#define  CABAC_P2_mf0set2_reg                                                    0xB800E134
#define  CABAC_P2_mf0set2_inst_addr                                              "0x003B"
#define  set_CABAC_P2_mf0set2_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf0set2_reg)=data)
#define  get_CABAC_P2_mf0set2_reg                                                (*((volatile unsigned int*)CABAC_P2_mf0set2_reg))
#define  CABAC_P2_mf0set2_refoffset1_shift                                       (16)
#define  CABAC_P2_mf0set2_refoffset2_shift                                       (8)
#define  CABAC_P2_mf0set2_refoffset3_shift                                       (0)
#define  CABAC_P2_mf0set2_refoffset1_mask                                        (0x00FF0000)
#define  CABAC_P2_mf0set2_refoffset2_mask                                        (0x0000FF00)
#define  CABAC_P2_mf0set2_refoffset3_mask                                        (0x000000FF)
#define  CABAC_P2_mf0set2_refoffset1(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf0set2_refoffset2(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf0set2_refoffset3(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf0set2_get_refoffset1(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf0set2_get_refoffset2(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf0set2_get_refoffset3(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf0set3                                                       0x1800E138
#define  CABAC_P2_mf0set3_reg_addr                                               "0xB800E138"
#define  CABAC_P2_mf0set3_reg                                                    0xB800E138
#define  CABAC_P2_mf0set3_inst_addr                                              "0x003C"
#define  set_CABAC_P2_mf0set3_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf0set3_reg)=data)
#define  get_CABAC_P2_mf0set3_reg                                                (*((volatile unsigned int*)CABAC_P2_mf0set3_reg))
#define  CABAC_P2_mf0set3_refoffset4_shift                                       (24)
#define  CABAC_P2_mf0set3_refoffset5_shift                                       (16)
#define  CABAC_P2_mf0set3_refoffset6_shift                                       (8)
#define  CABAC_P2_mf0set3_refoffset7_shift                                       (0)
#define  CABAC_P2_mf0set3_refoffset4_mask                                        (0xFF000000)
#define  CABAC_P2_mf0set3_refoffset5_mask                                        (0x00FF0000)
#define  CABAC_P2_mf0set3_refoffset6_mask                                        (0x0000FF00)
#define  CABAC_P2_mf0set3_refoffset7_mask                                        (0x000000FF)
#define  CABAC_P2_mf0set3_refoffset4(data)                                       (0xFF000000&((data)<<24))
#define  CABAC_P2_mf0set3_refoffset5(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf0set3_refoffset6(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf0set3_refoffset7(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf0set3_get_refoffset4(data)                                   ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf0set3_get_refoffset5(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf0set3_get_refoffset6(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf0set3_get_refoffset7(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf1set0                                                       0x1800E13C
#define  CABAC_P2_mf1set0_reg_addr                                               "0xB800E13C"
#define  CABAC_P2_mf1set0_reg                                                    0xB800E13C
#define  CABAC_P2_mf1set0_inst_addr                                              "0x003D"
#define  set_CABAC_P2_mf1set0_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf1set0_reg)=data)
#define  get_CABAC_P2_mf1set0_reg                                                (*((volatile unsigned int*)CABAC_P2_mf1set0_reg))
#define  CABAC_P2_mf1set0_reftocur_shift                                         (24)
#define  CABAC_P2_mf1set0_curoffset1_shift                                       (16)
#define  CABAC_P2_mf1set0_curoffset2_shift                                       (8)
#define  CABAC_P2_mf1set0_curoffset3_shift                                       (0)
#define  CABAC_P2_mf1set0_reftocur_mask                                          (0xFF000000)
#define  CABAC_P2_mf1set0_curoffset1_mask                                        (0x00FF0000)
#define  CABAC_P2_mf1set0_curoffset2_mask                                        (0x0000FF00)
#define  CABAC_P2_mf1set0_curoffset3_mask                                        (0x000000FF)
#define  CABAC_P2_mf1set0_reftocur(data)                                         (0xFF000000&((data)<<24))
#define  CABAC_P2_mf1set0_curoffset1(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf1set0_curoffset2(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf1set0_curoffset3(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf1set0_get_reftocur(data)                                     ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf1set0_get_curoffset1(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf1set0_get_curoffset2(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf1set0_get_curoffset3(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf1set1                                                       0x1800E140
#define  CABAC_P2_mf1set1_reg_addr                                               "0xB800E140"
#define  CABAC_P2_mf1set1_reg                                                    0xB800E140
#define  CABAC_P2_mf1set1_inst_addr                                              "0x003E"
#define  set_CABAC_P2_mf1set1_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf1set1_reg)=data)
#define  get_CABAC_P2_mf1set1_reg                                                (*((volatile unsigned int*)CABAC_P2_mf1set1_reg))
#define  CABAC_P2_mf1set1_curoffset4_shift                                       (24)
#define  CABAC_P2_mf1set1_curoffset5_shift                                       (16)
#define  CABAC_P2_mf1set1_curoffset6_shift                                       (8)
#define  CABAC_P2_mf1set1_curoffset7_shift                                       (0)
#define  CABAC_P2_mf1set1_curoffset4_mask                                        (0xFF000000)
#define  CABAC_P2_mf1set1_curoffset5_mask                                        (0x00FF0000)
#define  CABAC_P2_mf1set1_curoffset6_mask                                        (0x0000FF00)
#define  CABAC_P2_mf1set1_curoffset7_mask                                        (0x000000FF)
#define  CABAC_P2_mf1set1_curoffset4(data)                                       (0xFF000000&((data)<<24))
#define  CABAC_P2_mf1set1_curoffset5(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf1set1_curoffset6(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf1set1_curoffset7(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf1set1_get_curoffset4(data)                                   ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf1set1_get_curoffset5(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf1set1_get_curoffset6(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf1set1_get_curoffset7(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf1set2                                                       0x1800E144
#define  CABAC_P2_mf1set2_reg_addr                                               "0xB800E144"
#define  CABAC_P2_mf1set2_reg                                                    0xB800E144
#define  CABAC_P2_mf1set2_inst_addr                                              "0x003F"
#define  set_CABAC_P2_mf1set2_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf1set2_reg)=data)
#define  get_CABAC_P2_mf1set2_reg                                                (*((volatile unsigned int*)CABAC_P2_mf1set2_reg))
#define  CABAC_P2_mf1set2_refoffset1_shift                                       (16)
#define  CABAC_P2_mf1set2_refoffset2_shift                                       (8)
#define  CABAC_P2_mf1set2_refoffset3_shift                                       (0)
#define  CABAC_P2_mf1set2_refoffset1_mask                                        (0x00FF0000)
#define  CABAC_P2_mf1set2_refoffset2_mask                                        (0x0000FF00)
#define  CABAC_P2_mf1set2_refoffset3_mask                                        (0x000000FF)
#define  CABAC_P2_mf1set2_refoffset1(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf1set2_refoffset2(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf1set2_refoffset3(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf1set2_get_refoffset1(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf1set2_get_refoffset2(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf1set2_get_refoffset3(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf1set3                                                       0x1800E148
#define  CABAC_P2_mf1set3_reg_addr                                               "0xB800E148"
#define  CABAC_P2_mf1set3_reg                                                    0xB800E148
#define  CABAC_P2_mf1set3_inst_addr                                              "0x0040"
#define  set_CABAC_P2_mf1set3_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf1set3_reg)=data)
#define  get_CABAC_P2_mf1set3_reg                                                (*((volatile unsigned int*)CABAC_P2_mf1set3_reg))
#define  CABAC_P2_mf1set3_refoffset4_shift                                       (24)
#define  CABAC_P2_mf1set3_refoffset5_shift                                       (16)
#define  CABAC_P2_mf1set3_refoffset6_shift                                       (8)
#define  CABAC_P2_mf1set3_refoffset7_shift                                       (0)
#define  CABAC_P2_mf1set3_refoffset4_mask                                        (0xFF000000)
#define  CABAC_P2_mf1set3_refoffset5_mask                                        (0x00FF0000)
#define  CABAC_P2_mf1set3_refoffset6_mask                                        (0x0000FF00)
#define  CABAC_P2_mf1set3_refoffset7_mask                                        (0x000000FF)
#define  CABAC_P2_mf1set3_refoffset4(data)                                       (0xFF000000&((data)<<24))
#define  CABAC_P2_mf1set3_refoffset5(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf1set3_refoffset6(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf1set3_refoffset7(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf1set3_get_refoffset4(data)                                   ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf1set3_get_refoffset5(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf1set3_get_refoffset6(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf1set3_get_refoffset7(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf2set0                                                       0x1800E14C
#define  CABAC_P2_mf2set0_reg_addr                                               "0xB800E14C"
#define  CABAC_P2_mf2set0_reg                                                    0xB800E14C
#define  CABAC_P2_mf2set0_inst_addr                                              "0x0041"
#define  set_CABAC_P2_mf2set0_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf2set0_reg)=data)
#define  get_CABAC_P2_mf2set0_reg                                                (*((volatile unsigned int*)CABAC_P2_mf2set0_reg))
#define  CABAC_P2_mf2set0_reftocur_shift                                         (24)
#define  CABAC_P2_mf2set0_curoffset1_shift                                       (16)
#define  CABAC_P2_mf2set0_curoffset2_shift                                       (8)
#define  CABAC_P2_mf2set0_curoffset3_shift                                       (0)
#define  CABAC_P2_mf2set0_reftocur_mask                                          (0xFF000000)
#define  CABAC_P2_mf2set0_curoffset1_mask                                        (0x00FF0000)
#define  CABAC_P2_mf2set0_curoffset2_mask                                        (0x0000FF00)
#define  CABAC_P2_mf2set0_curoffset3_mask                                        (0x000000FF)
#define  CABAC_P2_mf2set0_reftocur(data)                                         (0xFF000000&((data)<<24))
#define  CABAC_P2_mf2set0_curoffset1(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf2set0_curoffset2(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf2set0_curoffset3(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf2set0_get_reftocur(data)                                     ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf2set0_get_curoffset1(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf2set0_get_curoffset2(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf2set0_get_curoffset3(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf2set1                                                       0x1800E150
#define  CABAC_P2_mf2set1_reg_addr                                               "0xB800E150"
#define  CABAC_P2_mf2set1_reg                                                    0xB800E150
#define  CABAC_P2_mf2set1_inst_addr                                              "0x0042"
#define  set_CABAC_P2_mf2set1_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf2set1_reg)=data)
#define  get_CABAC_P2_mf2set1_reg                                                (*((volatile unsigned int*)CABAC_P2_mf2set1_reg))
#define  CABAC_P2_mf2set1_curoffset4_shift                                       (24)
#define  CABAC_P2_mf2set1_curoffset5_shift                                       (16)
#define  CABAC_P2_mf2set1_curoffset6_shift                                       (8)
#define  CABAC_P2_mf2set1_curoffset7_shift                                       (0)
#define  CABAC_P2_mf2set1_curoffset4_mask                                        (0xFF000000)
#define  CABAC_P2_mf2set1_curoffset5_mask                                        (0x00FF0000)
#define  CABAC_P2_mf2set1_curoffset6_mask                                        (0x0000FF00)
#define  CABAC_P2_mf2set1_curoffset7_mask                                        (0x000000FF)
#define  CABAC_P2_mf2set1_curoffset4(data)                                       (0xFF000000&((data)<<24))
#define  CABAC_P2_mf2set1_curoffset5(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf2set1_curoffset6(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf2set1_curoffset7(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf2set1_get_curoffset4(data)                                   ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf2set1_get_curoffset5(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf2set1_get_curoffset6(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf2set1_get_curoffset7(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf2set2                                                       0x1800E154
#define  CABAC_P2_mf2set2_reg_addr                                               "0xB800E154"
#define  CABAC_P2_mf2set2_reg                                                    0xB800E154
#define  CABAC_P2_mf2set2_inst_addr                                              "0x0043"
#define  set_CABAC_P2_mf2set2_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf2set2_reg)=data)
#define  get_CABAC_P2_mf2set2_reg                                                (*((volatile unsigned int*)CABAC_P2_mf2set2_reg))
#define  CABAC_P2_mf2set2_refoffset1_shift                                       (16)
#define  CABAC_P2_mf2set2_refoffset2_shift                                       (8)
#define  CABAC_P2_mf2set2_refoffset3_shift                                       (0)
#define  CABAC_P2_mf2set2_refoffset1_mask                                        (0x00FF0000)
#define  CABAC_P2_mf2set2_refoffset2_mask                                        (0x0000FF00)
#define  CABAC_P2_mf2set2_refoffset3_mask                                        (0x000000FF)
#define  CABAC_P2_mf2set2_refoffset1(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf2set2_refoffset2(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf2set2_refoffset3(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf2set2_get_refoffset1(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf2set2_get_refoffset2(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf2set2_get_refoffset3(data)                                   (0x000000FF&(data))

#define  CABAC_P2_mf2set3                                                       0x1800E158
#define  CABAC_P2_mf2set3_reg_addr                                               "0xB800E158"
#define  CABAC_P2_mf2set3_reg                                                    0xB800E158
#define  CABAC_P2_mf2set3_inst_addr                                              "0x0044"
#define  set_CABAC_P2_mf2set3_reg(data)                                          (*((volatile unsigned int*)CABAC_P2_mf2set3_reg)=data)
#define  get_CABAC_P2_mf2set3_reg                                                (*((volatile unsigned int*)CABAC_P2_mf2set3_reg))
#define  CABAC_P2_mf2set3_refoffset4_shift                                       (24)
#define  CABAC_P2_mf2set3_refoffset5_shift                                       (16)
#define  CABAC_P2_mf2set3_refoffset6_shift                                       (8)
#define  CABAC_P2_mf2set3_refoffset7_shift                                       (0)
#define  CABAC_P2_mf2set3_refoffset4_mask                                        (0xFF000000)
#define  CABAC_P2_mf2set3_refoffset5_mask                                        (0x00FF0000)
#define  CABAC_P2_mf2set3_refoffset6_mask                                        (0x0000FF00)
#define  CABAC_P2_mf2set3_refoffset7_mask                                        (0x000000FF)
#define  CABAC_P2_mf2set3_refoffset4(data)                                       (0xFF000000&((data)<<24))
#define  CABAC_P2_mf2set3_refoffset5(data)                                       (0x00FF0000&((data)<<16))
#define  CABAC_P2_mf2set3_refoffset6(data)                                       (0x0000FF00&((data)<<8))
#define  CABAC_P2_mf2set3_refoffset7(data)                                       (0x000000FF&(data))
#define  CABAC_P2_mf2set3_get_refoffset4(data)                                   ((0xFF000000&(data))>>24)
#define  CABAC_P2_mf2set3_get_refoffset5(data)                                   ((0x00FF0000&(data))>>16)
#define  CABAC_P2_mf2set3_get_refoffset6(data)                                   ((0x0000FF00&(data))>>8)
#define  CABAC_P2_mf2set3_get_refoffset7(data)                                   (0x000000FF&(data))

#define  CABAC_P2_p2_segtab_rd_base                                             0x1800E3FC
#define  CABAC_P2_p2_segtab_rd_base_reg_addr                                     "0xB800E3FC"
#define  CABAC_P2_p2_segtab_rd_base_reg                                          0xB800E3FC
#define  CABAC_P2_p2_segtab_rd_base_inst_addr                                    "0x0045"
#define  set_CABAC_P2_p2_segtab_rd_base_reg(data)                                (*((volatile unsigned int*)CABAC_P2_p2_segtab_rd_base_reg)=data)
#define  get_CABAC_P2_p2_segtab_rd_base_reg                                      (*((volatile unsigned int*)CABAC_P2_p2_segtab_rd_base_reg))
#define  CABAC_P2_p2_segtab_rd_base_base_rd_addr_shift                           (0)
#define  CABAC_P2_p2_segtab_rd_base_base_rd_addr_mask                            (0xFFFFFFFF)
#define  CABAC_P2_p2_segtab_rd_base_base_rd_addr(data)                           (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_segtab_rd_base_get_base_rd_addr(data)                       (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_av1_ctrl0                                                  0x1800E188
#define  CABAC_P2_p2_av1_ctrl0_reg_addr                                          "0xB800E188"
#define  CABAC_P2_p2_av1_ctrl0_reg                                               0xB800E188
#define  CABAC_P2_p2_av1_ctrl0_inst_addr                                         "0x0046"
#define  set_CABAC_P2_p2_av1_ctrl0_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl0_reg)=data)
#define  get_CABAC_P2_p2_av1_ctrl0_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl0_reg))
#define  CABAC_P2_p2_av1_ctrl0_order_hint_bits_shift                             (29)
#define  CABAC_P2_p2_av1_ctrl0_filter_intra_en_shift                             (28)
#define  CABAC_P2_p2_av1_ctrl0_frame_offset_set_0_shift                          (20)
#define  CABAC_P2_p2_av1_ctrl0_superres_scale_denominator_shift                  (16)
#define  CABAC_P2_p2_av1_ctrl0_switchable_motion_mode_shift                      (15)
#define  CABAC_P2_p2_av1_ctrl0_cdf_update_en_shift                               (14)
#define  CABAC_P2_p2_av1_ctrl0_current_frame_force_integer_mv_shift              (13)
#define  CABAC_P2_p2_av1_ctrl0_tg_horz_boundary_shift                            (12)
#define  CABAC_P2_p2_av1_ctrl0_dependent_horz_tile_flag_shift                    (11)
#define  CABAC_P2_p2_av1_ctrl0_preskip_segid_shift                               (10)
#define  CABAC_P2_p2_av1_ctrl0_skip_mode_flag_shift                              (9)
#define  CABAC_P2_p2_av1_ctrl0_reduce_tx_set_used_shift                          (8)
#define  CABAC_P2_p2_av1_ctrl0_id_globalmv_mask_shift                            (0)
#define  CABAC_P2_p2_av1_ctrl0_order_hint_bits_mask                              (0xE0000000)
#define  CABAC_P2_p2_av1_ctrl0_filter_intra_en_mask                              (0x10000000)
#define  CABAC_P2_p2_av1_ctrl0_frame_offset_set_0_mask                           (0x0FF00000)
#define  CABAC_P2_p2_av1_ctrl0_superres_scale_denominator_mask                   (0x000F0000)
#define  CABAC_P2_p2_av1_ctrl0_switchable_motion_mode_mask                       (0x00008000)
#define  CABAC_P2_p2_av1_ctrl0_cdf_update_en_mask                                (0x00004000)
#define  CABAC_P2_p2_av1_ctrl0_current_frame_force_integer_mv_mask               (0x00002000)
#define  CABAC_P2_p2_av1_ctrl0_tg_horz_boundary_mask                             (0x00001000)
#define  CABAC_P2_p2_av1_ctrl0_dependent_horz_tile_flag_mask                     (0x00000800)
#define  CABAC_P2_p2_av1_ctrl0_preskip_segid_mask                                (0x00000400)
#define  CABAC_P2_p2_av1_ctrl0_skip_mode_flag_mask                               (0x00000200)
#define  CABAC_P2_p2_av1_ctrl0_reduce_tx_set_used_mask                           (0x00000100)
#define  CABAC_P2_p2_av1_ctrl0_id_globalmv_mask_mask                             (0x000000FF)
#define  CABAC_P2_p2_av1_ctrl0_order_hint_bits(data)                             (0xE0000000&((data)<<29))
#define  CABAC_P2_p2_av1_ctrl0_filter_intra_en(data)                             (0x10000000&((data)<<28))
#define  CABAC_P2_p2_av1_ctrl0_frame_offset_set_0(data)                          (0x0FF00000&((data)<<20))
#define  CABAC_P2_p2_av1_ctrl0_superres_scale_denominator(data)                  (0x000F0000&((data)<<16))
#define  CABAC_P2_p2_av1_ctrl0_switchable_motion_mode(data)                      (0x00008000&((data)<<15))
#define  CABAC_P2_p2_av1_ctrl0_cdf_update_en(data)                               (0x00004000&((data)<<14))
#define  CABAC_P2_p2_av1_ctrl0_current_frame_force_integer_mv(data)              (0x00002000&((data)<<13))
#define  CABAC_P2_p2_av1_ctrl0_tg_horz_boundary(data)                            (0x00001000&((data)<<12))
#define  CABAC_P2_p2_av1_ctrl0_dependent_horz_tile_flag(data)                    (0x00000800&((data)<<11))
#define  CABAC_P2_p2_av1_ctrl0_preskip_segid(data)                               (0x00000400&((data)<<10))
#define  CABAC_P2_p2_av1_ctrl0_skip_mode_flag(data)                              (0x00000200&((data)<<9))
#define  CABAC_P2_p2_av1_ctrl0_reduce_tx_set_used(data)                          (0x00000100&((data)<<8))
#define  CABAC_P2_p2_av1_ctrl0_id_globalmv_mask(data)                            (0x000000FF&(data))
#define  CABAC_P2_p2_av1_ctrl0_get_order_hint_bits(data)                         ((0xE0000000&(data))>>29)
#define  CABAC_P2_p2_av1_ctrl0_get_filter_intra_en(data)                         ((0x10000000&(data))>>28)
#define  CABAC_P2_p2_av1_ctrl0_get_frame_offset_set_0(data)                      ((0x0FF00000&(data))>>20)
#define  CABAC_P2_p2_av1_ctrl0_get_superres_scale_denominator(data)              ((0x000F0000&(data))>>16)
#define  CABAC_P2_p2_av1_ctrl0_get_switchable_motion_mode(data)                  ((0x00008000&(data))>>15)
#define  CABAC_P2_p2_av1_ctrl0_get_cdf_update_en(data)                           ((0x00004000&(data))>>14)
#define  CABAC_P2_p2_av1_ctrl0_get_current_frame_force_integer_mv(data)          ((0x00002000&(data))>>13)
#define  CABAC_P2_p2_av1_ctrl0_get_tg_horz_boundary(data)                        ((0x00001000&(data))>>12)
#define  CABAC_P2_p2_av1_ctrl0_get_dependent_horz_tile_flag(data)                ((0x00000800&(data))>>11)
#define  CABAC_P2_p2_av1_ctrl0_get_preskip_segid(data)                           ((0x00000400&(data))>>10)
#define  CABAC_P2_p2_av1_ctrl0_get_skip_mode_flag(data)                          ((0x00000200&(data))>>9)
#define  CABAC_P2_p2_av1_ctrl0_get_reduce_tx_set_used(data)                      ((0x00000100&(data))>>8)
#define  CABAC_P2_p2_av1_ctrl0_get_id_globalmv_mask(data)                        (0x000000FF&(data))

#define  CABAC_P2_p2_av1_qidx0                                                  0x1800E198
#define  CABAC_P2_p2_av1_qidx0_reg_addr                                          "0xB800E198"
#define  CABAC_P2_p2_av1_qidx0_reg                                               0xB800E198
#define  CABAC_P2_p2_av1_qidx0_inst_addr                                         "0x0047"
#define  set_CABAC_P2_p2_av1_qidx0_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_qidx0_reg)=data)
#define  get_CABAC_P2_p2_av1_qidx0_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_qidx0_reg))
#define  CABAC_P2_p2_av1_qidx0_seg_3_qindex_shift                                (24)
#define  CABAC_P2_p2_av1_qidx0_seg_2_qindex_shift                                (16)
#define  CABAC_P2_p2_av1_qidx0_seg_1_qindex_shift                                (8)
#define  CABAC_P2_p2_av1_qidx0_seg_0_qindex_shift                                (0)
#define  CABAC_P2_p2_av1_qidx0_seg_3_qindex_mask                                 (0xFF000000)
#define  CABAC_P2_p2_av1_qidx0_seg_2_qindex_mask                                 (0x00FF0000)
#define  CABAC_P2_p2_av1_qidx0_seg_1_qindex_mask                                 (0x0000FF00)
#define  CABAC_P2_p2_av1_qidx0_seg_0_qindex_mask                                 (0x000000FF)
#define  CABAC_P2_p2_av1_qidx0_seg_3_qindex(data)                                (0xFF000000&((data)<<24))
#define  CABAC_P2_p2_av1_qidx0_seg_2_qindex(data)                                (0x00FF0000&((data)<<16))
#define  CABAC_P2_p2_av1_qidx0_seg_1_qindex(data)                                (0x0000FF00&((data)<<8))
#define  CABAC_P2_p2_av1_qidx0_seg_0_qindex(data)                                (0x000000FF&(data))
#define  CABAC_P2_p2_av1_qidx0_get_seg_3_qindex(data)                            ((0xFF000000&(data))>>24)
#define  CABAC_P2_p2_av1_qidx0_get_seg_2_qindex(data)                            ((0x00FF0000&(data))>>16)
#define  CABAC_P2_p2_av1_qidx0_get_seg_1_qindex(data)                            ((0x0000FF00&(data))>>8)
#define  CABAC_P2_p2_av1_qidx0_get_seg_0_qindex(data)                            (0x000000FF&(data))

#define  CABAC_P2_p2_av1_qidx1                                                  0x1800E19C
#define  CABAC_P2_p2_av1_qidx1_reg_addr                                          "0xB800E19C"
#define  CABAC_P2_p2_av1_qidx1_reg                                               0xB800E19C
#define  CABAC_P2_p2_av1_qidx1_inst_addr                                         "0x0048"
#define  set_CABAC_P2_p2_av1_qidx1_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_qidx1_reg)=data)
#define  get_CABAC_P2_p2_av1_qidx1_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_qidx1_reg))
#define  CABAC_P2_p2_av1_qidx1_seg_7_qindex_shift                                (24)
#define  CABAC_P2_p2_av1_qidx1_seg_6_qindex_shift                                (16)
#define  CABAC_P2_p2_av1_qidx1_seg_5_qindex_shift                                (8)
#define  CABAC_P2_p2_av1_qidx1_seg_4_qindex_shift                                (0)
#define  CABAC_P2_p2_av1_qidx1_seg_7_qindex_mask                                 (0xFF000000)
#define  CABAC_P2_p2_av1_qidx1_seg_6_qindex_mask                                 (0x00FF0000)
#define  CABAC_P2_p2_av1_qidx1_seg_5_qindex_mask                                 (0x0000FF00)
#define  CABAC_P2_p2_av1_qidx1_seg_4_qindex_mask                                 (0x000000FF)
#define  CABAC_P2_p2_av1_qidx1_seg_7_qindex(data)                                (0xFF000000&((data)<<24))
#define  CABAC_P2_p2_av1_qidx1_seg_6_qindex(data)                                (0x00FF0000&((data)<<16))
#define  CABAC_P2_p2_av1_qidx1_seg_5_qindex(data)                                (0x0000FF00&((data)<<8))
#define  CABAC_P2_p2_av1_qidx1_seg_4_qindex(data)                                (0x000000FF&(data))
#define  CABAC_P2_p2_av1_qidx1_get_seg_7_qindex(data)                            ((0xFF000000&(data))>>24)
#define  CABAC_P2_p2_av1_qidx1_get_seg_6_qindex(data)                            ((0x00FF0000&(data))>>16)
#define  CABAC_P2_p2_av1_qidx1_get_seg_5_qindex(data)                            ((0x0000FF00&(data))>>8)
#define  CABAC_P2_p2_av1_qidx1_get_seg_4_qindex(data)                            (0x000000FF&(data))

#define  CABAC_P2_p2_av1_ctrl1                                                  0x1800E274
#define  CABAC_P2_p2_av1_ctrl1_reg_addr                                          "0xB800E274"
#define  CABAC_P2_p2_av1_ctrl1_reg                                               0xB800E274
#define  CABAC_P2_p2_av1_ctrl1_inst_addr                                         "0x0049"
#define  set_CABAC_P2_p2_av1_ctrl1_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl1_reg)=data)
#define  get_CABAC_P2_p2_av1_ctrl1_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl1_reg))
#define  CABAC_P2_p2_av1_ctrl1_ref7_global_motion_wmtype_shift                   (30)
#define  CABAC_P2_p2_av1_ctrl1_ref6_global_motion_wmtype_shift                   (28)
#define  CABAC_P2_p2_av1_ctrl1_ref5_global_motion_wmtype_shift                   (26)
#define  CABAC_P2_p2_av1_ctrl1_ref4_global_motion_wmtype_shift                   (24)
#define  CABAC_P2_p2_av1_ctrl1_ref3_global_motion_wmtype_shift                   (22)
#define  CABAC_P2_p2_av1_ctrl1_ref2_global_motion_wmtype_shift                   (20)
#define  CABAC_P2_p2_av1_ctrl1_ref1_global_motion_wmtype_shift                   (18)
#define  CABAC_P2_p2_av1_ctrl1_ref0_global_motion_wmtype_shift                   (16)
#define  CABAC_P2_p2_av1_ctrl1_ref7_is_scaled_shift                              (15)
#define  CABAC_P2_p2_av1_ctrl1_ref6_is_scaled_shift                              (14)
#define  CABAC_P2_p2_av1_ctrl1_ref5_is_scaled_shift                              (13)
#define  CABAC_P2_p2_av1_ctrl1_ref4_is_scaled_shift                              (12)
#define  CABAC_P2_p2_av1_ctrl1_ref3_is_scaled_shift                              (11)
#define  CABAC_P2_p2_av1_ctrl1_ref2_is_scaled_shift                              (10)
#define  CABAC_P2_p2_av1_ctrl1_ref1_is_scaled_shift                              (9)
#define  CABAC_P2_p2_av1_ctrl1_ref0_is_scaled_shift                              (8)
#define  CABAC_P2_p2_av1_ctrl1_ref7_vld_scaled_shift                             (7)
#define  CABAC_P2_p2_av1_ctrl1_ref6_vld_scaled_shift                             (6)
#define  CABAC_P2_p2_av1_ctrl1_ref5_vld_scaled_shift                             (5)
#define  CABAC_P2_p2_av1_ctrl1_ref4_vld_scaled_shift                             (4)
#define  CABAC_P2_p2_av1_ctrl1_ref3_vld_scaled_shift                             (3)
#define  CABAC_P2_p2_av1_ctrl1_ref2_vld_scaled_shift                             (2)
#define  CABAC_P2_p2_av1_ctrl1_ref1_vld_scaled_shift                             (1)
#define  CABAC_P2_p2_av1_ctrl1_ref0_vld_scaled_shift                             (0)
#define  CABAC_P2_p2_av1_ctrl1_ref7_global_motion_wmtype_mask                    (0xC0000000)
#define  CABAC_P2_p2_av1_ctrl1_ref6_global_motion_wmtype_mask                    (0x30000000)
#define  CABAC_P2_p2_av1_ctrl1_ref5_global_motion_wmtype_mask                    (0x0C000000)
#define  CABAC_P2_p2_av1_ctrl1_ref4_global_motion_wmtype_mask                    (0x03000000)
#define  CABAC_P2_p2_av1_ctrl1_ref3_global_motion_wmtype_mask                    (0x00C00000)
#define  CABAC_P2_p2_av1_ctrl1_ref2_global_motion_wmtype_mask                    (0x00300000)
#define  CABAC_P2_p2_av1_ctrl1_ref1_global_motion_wmtype_mask                    (0x000C0000)
#define  CABAC_P2_p2_av1_ctrl1_ref0_global_motion_wmtype_mask                    (0x00030000)
#define  CABAC_P2_p2_av1_ctrl1_ref7_is_scaled_mask                               (0x00008000)
#define  CABAC_P2_p2_av1_ctrl1_ref6_is_scaled_mask                               (0x00004000)
#define  CABAC_P2_p2_av1_ctrl1_ref5_is_scaled_mask                               (0x00002000)
#define  CABAC_P2_p2_av1_ctrl1_ref4_is_scaled_mask                               (0x00001000)
#define  CABAC_P2_p2_av1_ctrl1_ref3_is_scaled_mask                               (0x00000800)
#define  CABAC_P2_p2_av1_ctrl1_ref2_is_scaled_mask                               (0x00000400)
#define  CABAC_P2_p2_av1_ctrl1_ref1_is_scaled_mask                               (0x00000200)
#define  CABAC_P2_p2_av1_ctrl1_ref0_is_scaled_mask                               (0x00000100)
#define  CABAC_P2_p2_av1_ctrl1_ref7_vld_scaled_mask                              (0x00000080)
#define  CABAC_P2_p2_av1_ctrl1_ref6_vld_scaled_mask                              (0x00000040)
#define  CABAC_P2_p2_av1_ctrl1_ref5_vld_scaled_mask                              (0x00000020)
#define  CABAC_P2_p2_av1_ctrl1_ref4_vld_scaled_mask                              (0x00000010)
#define  CABAC_P2_p2_av1_ctrl1_ref3_vld_scaled_mask                              (0x00000008)
#define  CABAC_P2_p2_av1_ctrl1_ref2_vld_scaled_mask                              (0x00000004)
#define  CABAC_P2_p2_av1_ctrl1_ref1_vld_scaled_mask                              (0x00000002)
#define  CABAC_P2_p2_av1_ctrl1_ref0_vld_scaled_mask                              (0x00000001)
#define  CABAC_P2_p2_av1_ctrl1_ref7_global_motion_wmtype(data)                   (0xC0000000&((data)<<30))
#define  CABAC_P2_p2_av1_ctrl1_ref6_global_motion_wmtype(data)                   (0x30000000&((data)<<28))
#define  CABAC_P2_p2_av1_ctrl1_ref5_global_motion_wmtype(data)                   (0x0C000000&((data)<<26))
#define  CABAC_P2_p2_av1_ctrl1_ref4_global_motion_wmtype(data)                   (0x03000000&((data)<<24))
#define  CABAC_P2_p2_av1_ctrl1_ref3_global_motion_wmtype(data)                   (0x00C00000&((data)<<22))
#define  CABAC_P2_p2_av1_ctrl1_ref2_global_motion_wmtype(data)                   (0x00300000&((data)<<20))
#define  CABAC_P2_p2_av1_ctrl1_ref1_global_motion_wmtype(data)                   (0x000C0000&((data)<<18))
#define  CABAC_P2_p2_av1_ctrl1_ref0_global_motion_wmtype(data)                   (0x00030000&((data)<<16))
#define  CABAC_P2_p2_av1_ctrl1_ref7_is_scaled(data)                              (0x00008000&((data)<<15))
#define  CABAC_P2_p2_av1_ctrl1_ref6_is_scaled(data)                              (0x00004000&((data)<<14))
#define  CABAC_P2_p2_av1_ctrl1_ref5_is_scaled(data)                              (0x00002000&((data)<<13))
#define  CABAC_P2_p2_av1_ctrl1_ref4_is_scaled(data)                              (0x00001000&((data)<<12))
#define  CABAC_P2_p2_av1_ctrl1_ref3_is_scaled(data)                              (0x00000800&((data)<<11))
#define  CABAC_P2_p2_av1_ctrl1_ref2_is_scaled(data)                              (0x00000400&((data)<<10))
#define  CABAC_P2_p2_av1_ctrl1_ref1_is_scaled(data)                              (0x00000200&((data)<<9))
#define  CABAC_P2_p2_av1_ctrl1_ref0_is_scaled(data)                              (0x00000100&((data)<<8))
#define  CABAC_P2_p2_av1_ctrl1_ref7_vld_scaled(data)                             (0x00000080&((data)<<7))
#define  CABAC_P2_p2_av1_ctrl1_ref6_vld_scaled(data)                             (0x00000040&((data)<<6))
#define  CABAC_P2_p2_av1_ctrl1_ref5_vld_scaled(data)                             (0x00000020&((data)<<5))
#define  CABAC_P2_p2_av1_ctrl1_ref4_vld_scaled(data)                             (0x00000010&((data)<<4))
#define  CABAC_P2_p2_av1_ctrl1_ref3_vld_scaled(data)                             (0x00000008&((data)<<3))
#define  CABAC_P2_p2_av1_ctrl1_ref2_vld_scaled(data)                             (0x00000004&((data)<<2))
#define  CABAC_P2_p2_av1_ctrl1_ref1_vld_scaled(data)                             (0x00000002&((data)<<1))
#define  CABAC_P2_p2_av1_ctrl1_ref0_vld_scaled(data)                             (0x00000001&(data))
#define  CABAC_P2_p2_av1_ctrl1_get_ref7_global_motion_wmtype(data)               ((0xC0000000&(data))>>30)
#define  CABAC_P2_p2_av1_ctrl1_get_ref6_global_motion_wmtype(data)               ((0x30000000&(data))>>28)
#define  CABAC_P2_p2_av1_ctrl1_get_ref5_global_motion_wmtype(data)               ((0x0C000000&(data))>>26)
#define  CABAC_P2_p2_av1_ctrl1_get_ref4_global_motion_wmtype(data)               ((0x03000000&(data))>>24)
#define  CABAC_P2_p2_av1_ctrl1_get_ref3_global_motion_wmtype(data)               ((0x00C00000&(data))>>22)
#define  CABAC_P2_p2_av1_ctrl1_get_ref2_global_motion_wmtype(data)               ((0x00300000&(data))>>20)
#define  CABAC_P2_p2_av1_ctrl1_get_ref1_global_motion_wmtype(data)               ((0x000C0000&(data))>>18)
#define  CABAC_P2_p2_av1_ctrl1_get_ref0_global_motion_wmtype(data)               ((0x00030000&(data))>>16)
#define  CABAC_P2_p2_av1_ctrl1_get_ref7_is_scaled(data)                          ((0x00008000&(data))>>15)
#define  CABAC_P2_p2_av1_ctrl1_get_ref6_is_scaled(data)                          ((0x00004000&(data))>>14)
#define  CABAC_P2_p2_av1_ctrl1_get_ref5_is_scaled(data)                          ((0x00002000&(data))>>13)
#define  CABAC_P2_p2_av1_ctrl1_get_ref4_is_scaled(data)                          ((0x00001000&(data))>>12)
#define  CABAC_P2_p2_av1_ctrl1_get_ref3_is_scaled(data)                          ((0x00000800&(data))>>11)
#define  CABAC_P2_p2_av1_ctrl1_get_ref2_is_scaled(data)                          ((0x00000400&(data))>>10)
#define  CABAC_P2_p2_av1_ctrl1_get_ref1_is_scaled(data)                          ((0x00000200&(data))>>9)
#define  CABAC_P2_p2_av1_ctrl1_get_ref0_is_scaled(data)                          ((0x00000100&(data))>>8)
#define  CABAC_P2_p2_av1_ctrl1_get_ref7_vld_scaled(data)                         ((0x00000080&(data))>>7)
#define  CABAC_P2_p2_av1_ctrl1_get_ref6_vld_scaled(data)                         ((0x00000040&(data))>>6)
#define  CABAC_P2_p2_av1_ctrl1_get_ref5_vld_scaled(data)                         ((0x00000020&(data))>>5)
#define  CABAC_P2_p2_av1_ctrl1_get_ref4_vld_scaled(data)                         ((0x00000010&(data))>>4)
#define  CABAC_P2_p2_av1_ctrl1_get_ref3_vld_scaled(data)                         ((0x00000008&(data))>>3)
#define  CABAC_P2_p2_av1_ctrl1_get_ref2_vld_scaled(data)                         ((0x00000004&(data))>>2)
#define  CABAC_P2_p2_av1_ctrl1_get_ref1_vld_scaled(data)                         ((0x00000002&(data))>>1)
#define  CABAC_P2_p2_av1_ctrl1_get_ref0_vld_scaled(data)                         (0x00000001&(data))

#define  CABAC_P2_p2_av1_lr_adr                                                 0x1800E280
#define  CABAC_P2_p2_av1_lr_adr_reg_addr                                         "0xB800E280"
#define  CABAC_P2_p2_av1_lr_adr_reg                                              0xB800E280
#define  CABAC_P2_p2_av1_lr_adr_inst_addr                                        "0x004A"
#define  set_CABAC_P2_p2_av1_lr_adr_reg(data)                                    (*((volatile unsigned int*)CABAC_P2_p2_av1_lr_adr_reg)=data)
#define  get_CABAC_P2_p2_av1_lr_adr_reg                                          (*((volatile unsigned int*)CABAC_P2_p2_av1_lr_adr_reg))
#define  CABAC_P2_p2_av1_lr_adr_start_adr_shift                                  (0)
#define  CABAC_P2_p2_av1_lr_adr_start_adr_mask                                   (0xFFFFFFFF)
#define  CABAC_P2_p2_av1_lr_adr_start_adr(data)                                  (0xFFFFFFFF&(data))
#define  CABAC_P2_p2_av1_lr_adr_get_start_adr(data)                              (0xFFFFFFFF&(data))

#define  CABAC_P2_p2_av1_ctrl2                                                  0x1800E35C
#define  CABAC_P2_p2_av1_ctrl2_reg_addr                                          "0xB800E35C"
#define  CABAC_P2_p2_av1_ctrl2_reg                                               0xB800E35C
#define  CABAC_P2_p2_av1_ctrl2_inst_addr                                         "0x004B"
#define  set_CABAC_P2_p2_av1_ctrl2_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl2_reg)=data)
#define  get_CABAC_P2_p2_av1_ctrl2_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl2_reg))
#define  CABAC_P2_p2_av1_ctrl2_allow_warped_motion_shift                         (14)
#define  CABAC_P2_p2_av1_ctrl2_enable_jnt_comp_shift                             (13)
#define  CABAC_P2_p2_av1_ctrl2_enable_dual_filter_shift                          (12)
#define  CABAC_P2_p2_av1_ctrl2_frame_y_restoration_type_shift                    (10)
#define  CABAC_P2_p2_av1_ctrl2_frame_u_restoration_type_shift                    (8)
#define  CABAC_P2_p2_av1_ctrl2_frame_v_restoration_type_shift                    (6)
#define  CABAC_P2_p2_av1_ctrl2_frame_y_restoration_unit_size_shift               (4)
#define  CABAC_P2_p2_av1_ctrl2_frame_u_restoration_unit_size_shift               (2)
#define  CABAC_P2_p2_av1_ctrl2_frame_v_restoration_unit_size_shift               (0)
#define  CABAC_P2_p2_av1_ctrl2_allow_warped_motion_mask                          (0x00004000)
#define  CABAC_P2_p2_av1_ctrl2_enable_jnt_comp_mask                              (0x00002000)
#define  CABAC_P2_p2_av1_ctrl2_enable_dual_filter_mask                           (0x00001000)
#define  CABAC_P2_p2_av1_ctrl2_frame_y_restoration_type_mask                     (0x00000C00)
#define  CABAC_P2_p2_av1_ctrl2_frame_u_restoration_type_mask                     (0x00000300)
#define  CABAC_P2_p2_av1_ctrl2_frame_v_restoration_type_mask                     (0x000000C0)
#define  CABAC_P2_p2_av1_ctrl2_frame_y_restoration_unit_size_mask                (0x00000030)
#define  CABAC_P2_p2_av1_ctrl2_frame_u_restoration_unit_size_mask                (0x0000000C)
#define  CABAC_P2_p2_av1_ctrl2_frame_v_restoration_unit_size_mask                (0x00000003)
#define  CABAC_P2_p2_av1_ctrl2_allow_warped_motion(data)                         (0x00004000&((data)<<14))
#define  CABAC_P2_p2_av1_ctrl2_enable_jnt_comp(data)                             (0x00002000&((data)<<13))
#define  CABAC_P2_p2_av1_ctrl2_enable_dual_filter(data)                          (0x00001000&((data)<<12))
#define  CABAC_P2_p2_av1_ctrl2_frame_y_restoration_type(data)                    (0x00000C00&((data)<<10))
#define  CABAC_P2_p2_av1_ctrl2_frame_u_restoration_type(data)                    (0x00000300&((data)<<8))
#define  CABAC_P2_p2_av1_ctrl2_frame_v_restoration_type(data)                    (0x000000C0&((data)<<6))
#define  CABAC_P2_p2_av1_ctrl2_frame_y_restoration_unit_size(data)               (0x00000030&((data)<<4))
#define  CABAC_P2_p2_av1_ctrl2_frame_u_restoration_unit_size(data)               (0x0000000C&((data)<<2))
#define  CABAC_P2_p2_av1_ctrl2_frame_v_restoration_unit_size(data)               (0x00000003&(data))
#define  CABAC_P2_p2_av1_ctrl2_get_allow_warped_motion(data)                     ((0x00004000&(data))>>14)
#define  CABAC_P2_p2_av1_ctrl2_get_enable_jnt_comp(data)                         ((0x00002000&(data))>>13)
#define  CABAC_P2_p2_av1_ctrl2_get_enable_dual_filter(data)                      ((0x00001000&(data))>>12)
#define  CABAC_P2_p2_av1_ctrl2_get_frame_y_restoration_type(data)                ((0x00000C00&(data))>>10)
#define  CABAC_P2_p2_av1_ctrl2_get_frame_u_restoration_type(data)                ((0x00000300&(data))>>8)
#define  CABAC_P2_p2_av1_ctrl2_get_frame_v_restoration_type(data)                ((0x000000C0&(data))>>6)
#define  CABAC_P2_p2_av1_ctrl2_get_frame_y_restoration_unit_size(data)           ((0x00000030&(data))>>4)
#define  CABAC_P2_p2_av1_ctrl2_get_frame_u_restoration_unit_size(data)           ((0x0000000C&(data))>>2)
#define  CABAC_P2_p2_av1_ctrl2_get_frame_v_restoration_unit_size(data)           (0x00000003&(data))

#define  CABAC_P2_p2_av1_ctrl3                                                  0x1800E1A0
#define  CABAC_P2_p2_av1_ctrl3_reg_addr                                          "0xB800E1A0"
#define  CABAC_P2_p2_av1_ctrl3_reg                                               0xB800E1A0
#define  CABAC_P2_p2_av1_ctrl3_inst_addr                                         "0x004C"
#define  set_CABAC_P2_p2_av1_ctrl3_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl3_reg)=data)
#define  get_CABAC_P2_p2_av1_ctrl3_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl3_reg))
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_4_shift                          (24)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_3_shift                          (16)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_2_shift                          (8)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_1_shift                          (0)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_4_mask                           (0xFF000000)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_3_mask                           (0x00FF0000)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_2_mask                           (0x0000FF00)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_1_mask                           (0x000000FF)
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_4(data)                          (0xFF000000&((data)<<24))
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_3(data)                          (0x00FF0000&((data)<<16))
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_2(data)                          (0x0000FF00&((data)<<8))
#define  CABAC_P2_p2_av1_ctrl3_frame_offset_set_1(data)                          (0x000000FF&(data))
#define  CABAC_P2_p2_av1_ctrl3_get_frame_offset_set_4(data)                      ((0xFF000000&(data))>>24)
#define  CABAC_P2_p2_av1_ctrl3_get_frame_offset_set_3(data)                      ((0x00FF0000&(data))>>16)
#define  CABAC_P2_p2_av1_ctrl3_get_frame_offset_set_2(data)                      ((0x0000FF00&(data))>>8)
#define  CABAC_P2_p2_av1_ctrl3_get_frame_offset_set_1(data)                      (0x000000FF&(data))

#define  CABAC_P2_p2_av1_ctrl4                                                  0x1800E1A4
#define  CABAC_P2_p2_av1_ctrl4_reg_addr                                          "0xB800E1A4"
#define  CABAC_P2_p2_av1_ctrl4_reg                                               0xB800E1A4
#define  CABAC_P2_p2_av1_ctrl4_inst_addr                                         "0x004D"
#define  set_CABAC_P2_p2_av1_ctrl4_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl4_reg)=data)
#define  get_CABAC_P2_p2_av1_ctrl4_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl4_reg))
#define  CABAC_P2_p2_av1_ctrl4_large_scale_tile_shift                            (27)
#define  CABAC_P2_p2_av1_ctrl4_superres_upscaled_height_shift                    (14)
#define  CABAC_P2_p2_av1_ctrl4_superres_upscaled_width_shift                     (0)
#define  CABAC_P2_p2_av1_ctrl4_large_scale_tile_mask                             (0x08000000)
#define  CABAC_P2_p2_av1_ctrl4_superres_upscaled_height_mask                     (0x07FFC000)
#define  CABAC_P2_p2_av1_ctrl4_superres_upscaled_width_mask                      (0x00003FFF)
#define  CABAC_P2_p2_av1_ctrl4_large_scale_tile(data)                            (0x08000000&((data)<<27))
#define  CABAC_P2_p2_av1_ctrl4_superres_upscaled_height(data)                    (0x07FFC000&((data)<<14))
#define  CABAC_P2_p2_av1_ctrl4_superres_upscaled_width(data)                     (0x00003FFF&(data))
#define  CABAC_P2_p2_av1_ctrl4_get_large_scale_tile(data)                        ((0x08000000&(data))>>27)
#define  CABAC_P2_p2_av1_ctrl4_get_superres_upscaled_height(data)                ((0x07FFC000&(data))>>14)
#define  CABAC_P2_p2_av1_ctrl4_get_superres_upscaled_width(data)                 (0x00003FFF&(data))

#define  CABAC_P2_p2_av1_ctrl5                                                  0x1800E1A8
#define  CABAC_P2_p2_av1_ctrl5_reg_addr                                          "0xB800E1A8"
#define  CABAC_P2_p2_av1_ctrl5_reg                                               0xB800E1A8
#define  CABAC_P2_p2_av1_ctrl5_inst_addr                                         "0x004E"
#define  set_CABAC_P2_p2_av1_ctrl5_reg(data)                                     (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl5_reg)=data)
#define  get_CABAC_P2_p2_av1_ctrl5_reg                                           (*((volatile unsigned int*)CABAC_P2_p2_av1_ctrl5_reg))
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_7_shift                          (24)
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_6_shift                          (16)
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_5_shift                          (8)
#define  CABAC_P2_p2_av1_ctrl5_ref_frame_idx_1_shift                             (3)
#define  CABAC_P2_p2_av1_ctrl5_ref_frame_idx_0_shift                             (0)
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_7_mask                           (0xFF000000)
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_6_mask                           (0x00FF0000)
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_5_mask                           (0x0000FF00)
#define  CABAC_P2_p2_av1_ctrl5_ref_frame_idx_1_mask                              (0x00000038)
#define  CABAC_P2_p2_av1_ctrl5_ref_frame_idx_0_mask                              (0x00000007)
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_7(data)                          (0xFF000000&((data)<<24))
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_6(data)                          (0x00FF0000&((data)<<16))
#define  CABAC_P2_p2_av1_ctrl5_frame_offset_set_5(data)                          (0x0000FF00&((data)<<8))
#define  CABAC_P2_p2_av1_ctrl5_ref_frame_idx_1(data)                             (0x00000038&((data)<<3))
#define  CABAC_P2_p2_av1_ctrl5_ref_frame_idx_0(data)                             (0x00000007&(data))
#define  CABAC_P2_p2_av1_ctrl5_get_frame_offset_set_7(data)                      ((0xFF000000&(data))>>24)
#define  CABAC_P2_p2_av1_ctrl5_get_frame_offset_set_6(data)                      ((0x00FF0000&(data))>>16)
#define  CABAC_P2_p2_av1_ctrl5_get_frame_offset_set_5(data)                      ((0x0000FF00&(data))>>8)
#define  CABAC_P2_p2_av1_ctrl5_get_ref_frame_idx_1(data)                         ((0x00000038&(data))>>3)
#define  CABAC_P2_p2_av1_ctrl5_get_ref_frame_idx_0(data)                         (0x00000007&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CABAC_P2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  reset_cabacp2_bsfifo:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  decode_en_cabacp2:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  cabac_1p_mode:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  cabac_p2_p3:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  cabac_p2_go:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  latch_enable:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  codioffset:9;
        RBus_UInt32  codirange:9;
    };
}cabac_p2_cabac_p2_cntl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  arb_wait_value:5;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  haltcabacp2_done:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  haltcabacp2:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cabacp2_idle:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabacp2_header_byte_cnt:18;
    };
}cabac_p2_cabac_p2_cntl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  filter_level_v:6;
        RBus_UInt32  filter_level_u:6;
        RBus_UInt32  filter_level_hor:6;
        RBus_UInt32  filter_level:6;
        RBus_UInt32  neighbor_loc:2;
    };
}cabac_p2_p2_neighbor_loc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  cabac_p2_wfifo_err:1;
        RBus_UInt32  cabac_p2_bsfifo_err:1;
        RBus_UInt32  cabac_p2_dec_err:1;
        RBus_UInt32  cabac_p2_done:1;
        RBus_UInt32  write_data:1;
    };
}cabac_p2_cabacp2_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  cabac_p2_wfifo_err_ie:1;
        RBus_UInt32  cabac_p2_bsfifo_err_ie:1;
        RBus_UInt32  cabac_p2_dec_err_ie:1;
        RBus_UInt32  cabac_p2_done_ie:1;
        RBus_UInt32  write_data:1;
    };
}cabac_p2_cabacp2_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  hevc_eos:1;
        RBus_UInt32  hevc_p2_err:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  coding_type:5;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cabacp2_pred_counter:10;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabacp2_curmb_addr:10;
    };
}cabac_p2_cabac_p2_cntl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  p2_startcode_prevnt_en:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  detect_startcode_error:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  min_xfer_size:2;
    };
}cabac_p2_p2_bscntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  min_thre:7;
    };
}cabac_p2_p2_bs_min_thr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  timer_value:24;
    };
}cabac_p2_p2_bstimer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_p2_rfifo_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}cabac_p2_p2_rfifo_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}cabac_p2_p2_rfifo_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_ptr:32;
    };
}cabac_p2_p2_rfifo_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_p2_wfifo_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}cabac_p2_p2_wfifo_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}cabac_p2_p2_wfifo_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_ptr:32;
    };
}cabac_p2_p2_wfifo_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bit_ptr:32;
    };
}cabac_p2_p2_rfifo_decbsptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  pre_bin_loc_reg_msb:3;
        RBus_UInt32  bin_loc_reg_msb:3;
        RBus_UInt32  dec_bit_ptr_msb:3;
    };
}cabac_p2_p2_rfifo_decbsptr_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldst_addr:32;
    };
}cabac_p2_p2_ldstaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  pic_init_qp_7to6:2;
        RBus_UInt32  entropy_coding_mode:1;
        RBus_UInt32  pic_init_qp:6;
        RBus_UInt32  chroma_qp_offset:5;
        RBus_UInt32  second_chroma_qp_offset:5;
        RBus_UInt32  direct_8x8_inferflg:1;
        RBus_UInt32  transform_8x8_mode_flg:1;
        RBus_UInt32  num_ref_idx_l0_active_minus1:5;
        RBus_UInt32  num_ref_idx_l1_active_minus1:5;
    };
}cabac_p2_cabac_p2_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  mb_adaptive_frame_field_flag:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  picmb_w:10;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  monochrome:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  field_pic_flag:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  pic_type:3;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  slice_qp_delta:7;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabac_init_idc:2;
    };
}cabac_p2_cabac_p2_cntl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  chroma_bits:2;
        RBus_UInt32  luma_bits:2;
        RBus_UInt32  res2:3;
        RBus_UInt32  mincbsize:2;
        RBus_UInt32  ctbsize:2;
        RBus_UInt32  min_trafo_size:2;
        RBus_UInt32  max_trafo_size:2;
        RBus_UInt32  max_trans_hier_depth_inter:3;
        RBus_UInt32  max_trans_hier_depth_intra:3;
        RBus_UInt32  amp_enabled_flag:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  pcm_enabled_flag:1;
        RBus_UInt32  min_ipcm_cbsize:2;
        RBus_UInt32  max_ipcm_cbsize:2;
        RBus_UInt32  res4:2;
    };
}cabac_p2_p2_hevcseqcntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  pic_width:14;
        RBus_UInt32  pic_height:13;
    };
}cabac_p2_p2_hevcpicsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  av1_delta_q_res_bit:2;
        RBus_UInt32  av1_delta_lf_res_bit:2;
        RBus_UInt32  vp9_fwbw_upd_max_bl_option:2;
        RBus_UInt32  av1_delta_lf_multi:1;
        RBus_UInt32  byte_align_always_drop:1;
        RBus_UInt32  mvd_l1_zero_flag:1;
        RBus_UInt32  pcm_bit_depth_chroma:4;
        RBus_UInt32  pcm_bit_depth_luma:4;
        RBus_UInt32  cabac_init_flag:1;
        RBus_UInt32  entropy_coding_sync_enabled_flag:1;
        RBus_UInt32  tiles_enabled_flag:1;
        RBus_UInt32  min_cu_qp_delta_size:3;
        RBus_UInt32  cu_qp_delta_enabled_flag:1;
        RBus_UInt32  max_num_merge_cand:3;
        RBus_UInt32  slice_sao_chroma_flag:1;
        RBus_UInt32  slice_sao_luma_flag:1;
        RBus_UInt32  transform_skip_enabled_flag:1;
        RBus_UInt32  transquant_bypass_enable_flag:1;
        RBus_UInt32  sign_data_hiding_flag:1;
    };
}cabac_p2_p2_hevc_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  tile_ctb_w:10;
        RBus_UInt32  tile_ctb_h:9;
    };
}cabac_p2_p2_hevc_tile1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ctxmem_work_sel:1;
        RBus_UInt32  tile_start_adr_x:10;
        RBus_UInt32  tile_start_adr_y:9;
    };
}cabac_p2_p2_hevc_tile2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  tile_offset_adr_x:10;
        RBus_UInt32  tile_offset_adr_y:9;
    };
}cabac_p2_p2_hevc_tile3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_bit:32;
    };
}cabac_p2_p2_decbitcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bin_loc_reg:32;
    };
}cabac_p2_hevc_ctb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bin_loc_reg:32;
    };
}cabac_p2_hevc_pre_ctb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_p2_segtab_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  av1_lossless:8;
        RBus_UInt32  id_7_ref_frame:3;
        RBus_UInt32  id_6_ref_frame:3;
        RBus_UInt32  id_5_ref_frame:3;
        RBus_UInt32  id_4_ref_frame:3;
        RBus_UInt32  id_3_ref_frame:3;
        RBus_UInt32  id_2_ref_frame:3;
        RBus_UInt32  id_1_ref_frame:3;
        RBus_UInt32  id_0_ref_frame:3;
    };
}cabac_p2_p2_seg_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  prev_frm_id_is_all_0:1;
        RBus_UInt32  id_skip_mask:8;
        RBus_UInt32  id_ref_frame_mask:8;
        RBus_UInt32  id_7_skip:1;
        RBus_UInt32  id_6_skip:1;
        RBus_UInt32  id_5_skip:1;
        RBus_UInt32  id_4_skip:1;
        RBus_UInt32  id_3_skip:1;
        RBus_UInt32  id_2_skip:1;
        RBus_UInt32  id_1_skip:1;
        RBus_UInt32  id_0_skip:1;
        RBus_UInt32  temperal_update:1;
        RBus_UInt32  abs_delta:1;
        RBus_UInt32  update_data:1;
        RBus_UInt32  update_map:1;
        RBus_UInt32  enabled:1;
    };
}cabac_p2_p2_seg_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  last_active_segid:3;
        RBus_UInt32  lossless:1;
        RBus_UInt32  allow_high_precision_mv:1;
        RBus_UInt32  error_resilient_mode:1;
        RBus_UInt32  subsampling_x:1;
        RBus_UInt32  subsampling_y:1;
        RBus_UInt32  intra_only:1;
        RBus_UInt32  tx_mode:3;
        RBus_UInt32  reference_mode:2;
        RBus_UInt32  ref_frame_sign_bias:4;
        RBus_UInt32  comp_fixed_ref:2;
        RBus_UInt32  comp_var_ref_0:2;
        RBus_UInt32  comp_var_ref_1:2;
        RBus_UInt32  interp_filter:3;
    };
}cabac_p2_p2_vp9_pic_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  cdef_bits:2;
        RBus_UInt32  allow_intrabc:1;
        RBus_UInt32  allow_screen_content_tools:1;
        RBus_UInt32  allow_interintra_compound:1;
        RBus_UInt32  allow_masked_compound:1;
        RBus_UInt32  secondarytransformenableflag:1;
        RBus_UInt32  fixed_qp:1;
        RBus_UInt32  refpicnum:3;
        RBus_UInt32  slicesaoenableflag:3;
        RBus_UInt32  picturealfenableflag:3;
        RBus_UInt32  nsipenableflag:1;
        RBus_UInt32  nsqtenableflag:1;
        RBus_UInt32  asymmetricmotionpartitionsenableflag:1;
        RBus_UInt32  weightedskipenableflag:1;
        RBus_UInt32  dualhypothesispredictionenableflag:1;
        RBus_UInt32  multihypothesisskipenableflag:1;
    };
}cabac_p2_avs2_p2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ref_frame_sign_bias:8;
        RBus_UInt32  comp_bwd_ref_2:3;
        RBus_UInt32  comp_bwd_ref_1:3;
        RBus_UInt32  comp_bwd_ref_0:3;
        RBus_UInt32  comp_fwd_ref_3:3;
        RBus_UInt32  comp_fwd_ref_2:3;
        RBus_UInt32  comp_fwd_ref_1:3;
        RBus_UInt32  comp_fwd_ref_0:3;
    };
}cabac_p2_av1_p2_ref_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stcomemsaddr:32;
    };
}cabac_p2_vp9co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_vp9co1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stnhmemsaddr:32;
    };
}cabac_p2_vp9nh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldnhmemsaddr:32;
    };
}cabac_p2_vp9nh1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  disablecomem:1;
    };
}cabac_p2_vp9co2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  cabac_halt_done:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cabac_halt:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  postwrite_en:1;
    };
}cabac_p2_p2_ndb_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_ndb_cabac_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}cabac_p2_ndb_cabac_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}cabac_p2_ndb_cabac_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_ptr:32;
    };
}cabac_p2_ndb_cabac_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  motionfielddir2:2;
        RBus_UInt32  motionfielddir1:2;
        RBus_UInt32  motionfielddir0:2;
        RBus_UInt32  motionfielden2:1;
        RBus_UInt32  motionfielden1:1;
        RBus_UInt32  motionfielden0:1;
        RBus_UInt32  storebwmv:1;
        RBus_UInt32  forceintmv:1;
        RBus_UInt32  hwctrl:16;
    };
}cabac_p2_av1pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  addr:8;
        RBus_UInt32  read:1;
        RBus_UInt32  write:1;
    };
}cabac_p2_indrbus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  frameside1:2;
        RBus_UInt32  frameside2:2;
        RBus_UInt32  frameside3:2;
        RBus_UInt32  frameside4:2;
        RBus_UInt32  frameside5:2;
        RBus_UInt32  frameside6:2;
        RBus_UInt32  frameside7:2;
    };
}cabac_p2_av1ref_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_av1mf0co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_av1mf1co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_av1mf2co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reftocur:8;
        RBus_UInt32  curoffset1:8;
        RBus_UInt32  curoffset2:8;
        RBus_UInt32  curoffset3:8;
    };
}cabac_p2_mf0set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset4:8;
        RBus_UInt32  curoffset5:8;
        RBus_UInt32  curoffset6:8;
        RBus_UInt32  curoffset7:8;
    };
}cabac_p2_mf0set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  refoffset1:8;
        RBus_UInt32  refoffset2:8;
        RBus_UInt32  refoffset3:8;
    };
}cabac_p2_mf0set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset4:8;
        RBus_UInt32  refoffset5:8;
        RBus_UInt32  refoffset6:8;
        RBus_UInt32  refoffset7:8;
    };
}cabac_p2_mf0set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reftocur:8;
        RBus_UInt32  curoffset1:8;
        RBus_UInt32  curoffset2:8;
        RBus_UInt32  curoffset3:8;
    };
}cabac_p2_mf1set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset4:8;
        RBus_UInt32  curoffset5:8;
        RBus_UInt32  curoffset6:8;
        RBus_UInt32  curoffset7:8;
    };
}cabac_p2_mf1set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  refoffset1:8;
        RBus_UInt32  refoffset2:8;
        RBus_UInt32  refoffset3:8;
    };
}cabac_p2_mf1set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset4:8;
        RBus_UInt32  refoffset5:8;
        RBus_UInt32  refoffset6:8;
        RBus_UInt32  refoffset7:8;
    };
}cabac_p2_mf1set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reftocur:8;
        RBus_UInt32  curoffset1:8;
        RBus_UInt32  curoffset2:8;
        RBus_UInt32  curoffset3:8;
    };
}cabac_p2_mf2set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset4:8;
        RBus_UInt32  curoffset5:8;
        RBus_UInt32  curoffset6:8;
        RBus_UInt32  curoffset7:8;
    };
}cabac_p2_mf2set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  refoffset1:8;
        RBus_UInt32  refoffset2:8;
        RBus_UInt32  refoffset3:8;
    };
}cabac_p2_mf2set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset4:8;
        RBus_UInt32  refoffset5:8;
        RBus_UInt32  refoffset6:8;
        RBus_UInt32  refoffset7:8;
    };
}cabac_p2_mf2set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_rd_addr:32;
    };
}cabac_p2_p2_segtab_rd_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  order_hint_bits:3;
        RBus_UInt32  filter_intra_en:1;
        RBus_UInt32  frame_offset_set_0:8;
        RBus_UInt32  superres_scale_denominator:4;
        RBus_UInt32  switchable_motion_mode:1;
        RBus_UInt32  cdf_update_en:1;
        RBus_UInt32  current_frame_force_integer_mv:1;
        RBus_UInt32  tg_horz_boundary:1;
        RBus_UInt32  dependent_horz_tile_flag:1;
        RBus_UInt32  preskip_segid:1;
        RBus_UInt32  skip_mode_flag:1;
        RBus_UInt32  reduce_tx_set_used:1;
        RBus_UInt32  id_globalmv_mask:8;
    };
}cabac_p2_p2_av1_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_3_qindex:8;
        RBus_UInt32  seg_2_qindex:8;
        RBus_UInt32  seg_1_qindex:8;
        RBus_UInt32  seg_0_qindex:8;
    };
}cabac_p2_p2_av1_qidx0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_7_qindex:8;
        RBus_UInt32  seg_6_qindex:8;
        RBus_UInt32  seg_5_qindex:8;
        RBus_UInt32  seg_4_qindex:8;
    };
}cabac_p2_p2_av1_qidx1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref7_global_motion_wmtype:2;
        RBus_UInt32  ref6_global_motion_wmtype:2;
        RBus_UInt32  ref5_global_motion_wmtype:2;
        RBus_UInt32  ref4_global_motion_wmtype:2;
        RBus_UInt32  ref3_global_motion_wmtype:2;
        RBus_UInt32  ref2_global_motion_wmtype:2;
        RBus_UInt32  ref1_global_motion_wmtype:2;
        RBus_UInt32  ref0_global_motion_wmtype:2;
        RBus_UInt32  ref7_is_scaled:1;
        RBus_UInt32  ref6_is_scaled:1;
        RBus_UInt32  ref5_is_scaled:1;
        RBus_UInt32  ref4_is_scaled:1;
        RBus_UInt32  ref3_is_scaled:1;
        RBus_UInt32  ref2_is_scaled:1;
        RBus_UInt32  ref1_is_scaled:1;
        RBus_UInt32  ref0_is_scaled:1;
        RBus_UInt32  ref7_vld_scaled:1;
        RBus_UInt32  ref6_vld_scaled:1;
        RBus_UInt32  ref5_vld_scaled:1;
        RBus_UInt32  ref4_vld_scaled:1;
        RBus_UInt32  ref3_vld_scaled:1;
        RBus_UInt32  ref2_vld_scaled:1;
        RBus_UInt32  ref1_vld_scaled:1;
        RBus_UInt32  ref0_vld_scaled:1;
    };
}cabac_p2_p2_av1_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_adr:32;
    };
}cabac_p2_p2_av1_lr_adr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  allow_warped_motion:1;
        RBus_UInt32  enable_jnt_comp:1;
        RBus_UInt32  enable_dual_filter:1;
        RBus_UInt32  frame_y_restoration_type:2;
        RBus_UInt32  frame_u_restoration_type:2;
        RBus_UInt32  frame_v_restoration_type:2;
        RBus_UInt32  frame_y_restoration_unit_size:2;
        RBus_UInt32  frame_u_restoration_unit_size:2;
        RBus_UInt32  frame_v_restoration_unit_size:2;
    };
}cabac_p2_p2_av1_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_offset_set_4:8;
        RBus_UInt32  frame_offset_set_3:8;
        RBus_UInt32  frame_offset_set_2:8;
        RBus_UInt32  frame_offset_set_1:8;
    };
}cabac_p2_p2_av1_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  large_scale_tile:1;
        RBus_UInt32  superres_upscaled_height:13;
        RBus_UInt32  superres_upscaled_width:14;
    };
}cabac_p2_p2_av1_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_offset_set_7:8;
        RBus_UInt32  frame_offset_set_6:8;
        RBus_UInt32  frame_offset_set_5:8;
        RBus_UInt32  res1:2;
        RBus_UInt32  ref_frame_idx_1:3;
        RBus_UInt32  ref_frame_idx_0:3;
    };
}cabac_p2_p2_av1_ctrl5_RBUS;

#else //apply LITTLE_ENDIAN

//======CABAC_P2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  codirange:9;
        RBus_UInt32  codioffset:9;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  latch_enable:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cabac_p2_go:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  cabac_p2_p3:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  cabac_1p_mode:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  decode_en_cabacp2:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  reset_cabacp2_bsfifo:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  res1:1;
    };
}cabac_p2_cabac_p2_cntl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cabacp2_header_byte_cnt:18;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabacp2_idle:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  haltcabacp2:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  haltcabacp2_done:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  arb_wait_value:5;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  res1:1;
    };
}cabac_p2_cabac_p2_cntl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  neighbor_loc:2;
        RBus_UInt32  filter_level:6;
        RBus_UInt32  filter_level_hor:6;
        RBus_UInt32  filter_level_u:6;
        RBus_UInt32  filter_level_v:6;
        RBus_UInt32  res1:6;
    };
}cabac_p2_p2_neighbor_loc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  cabac_p2_done:1;
        RBus_UInt32  cabac_p2_dec_err:1;
        RBus_UInt32  cabac_p2_bsfifo_err:1;
        RBus_UInt32  cabac_p2_wfifo_err:1;
        RBus_UInt32  res1:27;
    };
}cabac_p2_cabacp2_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  cabac_p2_done_ie:1;
        RBus_UInt32  cabac_p2_dec_err_ie:1;
        RBus_UInt32  cabac_p2_bsfifo_err_ie:1;
        RBus_UInt32  cabac_p2_wfifo_err_ie:1;
        RBus_UInt32  res1:27;
    };
}cabac_p2_cabacp2_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cabacp2_curmb_addr:10;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabacp2_pred_counter:10;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  coding_type:5;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  hevc_p2_err:1;
        RBus_UInt32  hevc_eos:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  res1:1;
    };
}cabac_p2_cabac_p2_cntl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  min_xfer_size:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  detect_startcode_error:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  p2_startcode_prevnt_en:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:25;
    };
}cabac_p2_p2_bscntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  min_thre:7;
        RBus_UInt32  res1:25;
    };
}cabac_p2_p2_bs_min_thr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timer_value:24;
        RBus_UInt32  res1:8;
    };
}cabac_p2_p2_bstimer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_p2_rfifo_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}cabac_p2_p2_rfifo_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}cabac_p2_p2_rfifo_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_ptr:32;
    };
}cabac_p2_p2_rfifo_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_p2_wfifo_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}cabac_p2_p2_wfifo_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}cabac_p2_p2_wfifo_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_ptr:32;
    };
}cabac_p2_p2_wfifo_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bit_ptr:32;
    };
}cabac_p2_p2_rfifo_decbsptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bit_ptr_msb:3;
        RBus_UInt32  bin_loc_reg_msb:3;
        RBus_UInt32  pre_bin_loc_reg_msb:3;
        RBus_UInt32  res1:23;
    };
}cabac_p2_p2_rfifo_decbsptr_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldst_addr:32;
    };
}cabac_p2_p2_ldstaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num_ref_idx_l1_active_minus1:5;
        RBus_UInt32  num_ref_idx_l0_active_minus1:5;
        RBus_UInt32  transform_8x8_mode_flg:1;
        RBus_UInt32  direct_8x8_inferflg:1;
        RBus_UInt32  second_chroma_qp_offset:5;
        RBus_UInt32  chroma_qp_offset:5;
        RBus_UInt32  pic_init_qp:6;
        RBus_UInt32  entropy_coding_mode:1;
        RBus_UInt32  pic_init_qp_7to6:2;
        RBus_UInt32  res1:1;
    };
}cabac_p2_cabac_p2_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cabac_init_idc:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  slice_qp_delta:7;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  pic_type:3;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  field_pic_flag:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  monochrome:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  picmb_w:10;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  mb_adaptive_frame_field_flag:1;
        RBus_UInt32  write_enable7:1;
    };
}cabac_p2_cabac_p2_cntl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  max_ipcm_cbsize:2;
        RBus_UInt32  min_ipcm_cbsize:2;
        RBus_UInt32  pcm_enabled_flag:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  amp_enabled_flag:1;
        RBus_UInt32  max_trans_hier_depth_intra:3;
        RBus_UInt32  max_trans_hier_depth_inter:3;
        RBus_UInt32  max_trafo_size:2;
        RBus_UInt32  min_trafo_size:2;
        RBus_UInt32  ctbsize:2;
        RBus_UInt32  mincbsize:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  luma_bits:2;
        RBus_UInt32  chroma_bits:2;
        RBus_UInt32  res4:2;
    };
}cabac_p2_p2_hevcseqcntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pic_height:13;
        RBus_UInt32  pic_width:14;
        RBus_UInt32  res1:5;
    };
}cabac_p2_p2_hevcpicsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sign_data_hiding_flag:1;
        RBus_UInt32  transquant_bypass_enable_flag:1;
        RBus_UInt32  transform_skip_enabled_flag:1;
        RBus_UInt32  slice_sao_luma_flag:1;
        RBus_UInt32  slice_sao_chroma_flag:1;
        RBus_UInt32  max_num_merge_cand:3;
        RBus_UInt32  cu_qp_delta_enabled_flag:1;
        RBus_UInt32  min_cu_qp_delta_size:3;
        RBus_UInt32  tiles_enabled_flag:1;
        RBus_UInt32  entropy_coding_sync_enabled_flag:1;
        RBus_UInt32  cabac_init_flag:1;
        RBus_UInt32  pcm_bit_depth_luma:4;
        RBus_UInt32  pcm_bit_depth_chroma:4;
        RBus_UInt32  mvd_l1_zero_flag:1;
        RBus_UInt32  byte_align_always_drop:1;
        RBus_UInt32  av1_delta_lf_multi:1;
        RBus_UInt32  vp9_fwbw_upd_max_bl_option:2;
        RBus_UInt32  av1_delta_lf_res_bit:2;
        RBus_UInt32  av1_delta_q_res_bit:2;
    };
}cabac_p2_p2_hevc_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tile_ctb_h:9;
        RBus_UInt32  tile_ctb_w:10;
        RBus_UInt32  res1:13;
    };
}cabac_p2_p2_hevc_tile1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tile_start_adr_y:9;
        RBus_UInt32  tile_start_adr_x:10;
        RBus_UInt32  ctxmem_work_sel:1;
        RBus_UInt32  res1:12;
    };
}cabac_p2_p2_hevc_tile2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tile_offset_adr_y:9;
        RBus_UInt32  tile_offset_adr_x:10;
        RBus_UInt32  res1:13;
    };
}cabac_p2_p2_hevc_tile3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_bit:32;
    };
}cabac_p2_p2_decbitcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bin_loc_reg:32;
    };
}cabac_p2_hevc_ctb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bin_loc_reg:32;
    };
}cabac_p2_hevc_pre_ctb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_p2_segtab_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  id_0_ref_frame:3;
        RBus_UInt32  id_1_ref_frame:3;
        RBus_UInt32  id_2_ref_frame:3;
        RBus_UInt32  id_3_ref_frame:3;
        RBus_UInt32  id_4_ref_frame:3;
        RBus_UInt32  id_5_ref_frame:3;
        RBus_UInt32  id_6_ref_frame:3;
        RBus_UInt32  id_7_ref_frame:3;
        RBus_UInt32  av1_lossless:8;
    };
}cabac_p2_p2_seg_set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enabled:1;
        RBus_UInt32  update_map:1;
        RBus_UInt32  update_data:1;
        RBus_UInt32  abs_delta:1;
        RBus_UInt32  temperal_update:1;
        RBus_UInt32  id_0_skip:1;
        RBus_UInt32  id_1_skip:1;
        RBus_UInt32  id_2_skip:1;
        RBus_UInt32  id_3_skip:1;
        RBus_UInt32  id_4_skip:1;
        RBus_UInt32  id_5_skip:1;
        RBus_UInt32  id_6_skip:1;
        RBus_UInt32  id_7_skip:1;
        RBus_UInt32  id_ref_frame_mask:8;
        RBus_UInt32  id_skip_mask:8;
        RBus_UInt32  prev_frm_id_is_all_0:1;
        RBus_UInt32  res1:2;
    };
}cabac_p2_p2_seg_set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  interp_filter:3;
        RBus_UInt32  comp_var_ref_1:2;
        RBus_UInt32  comp_var_ref_0:2;
        RBus_UInt32  comp_fixed_ref:2;
        RBus_UInt32  ref_frame_sign_bias:4;
        RBus_UInt32  reference_mode:2;
        RBus_UInt32  tx_mode:3;
        RBus_UInt32  intra_only:1;
        RBus_UInt32  subsampling_y:1;
        RBus_UInt32  subsampling_x:1;
        RBus_UInt32  error_resilient_mode:1;
        RBus_UInt32  allow_high_precision_mv:1;
        RBus_UInt32  lossless:1;
        RBus_UInt32  last_active_segid:3;
        RBus_UInt32  res1:5;
    };
}cabac_p2_p2_vp9_pic_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  multihypothesisskipenableflag:1;
        RBus_UInt32  dualhypothesispredictionenableflag:1;
        RBus_UInt32  weightedskipenableflag:1;
        RBus_UInt32  asymmetricmotionpartitionsenableflag:1;
        RBus_UInt32  nsqtenableflag:1;
        RBus_UInt32  nsipenableflag:1;
        RBus_UInt32  picturealfenableflag:3;
        RBus_UInt32  slicesaoenableflag:3;
        RBus_UInt32  refpicnum:3;
        RBus_UInt32  fixed_qp:1;
        RBus_UInt32  secondarytransformenableflag:1;
        RBus_UInt32  allow_masked_compound:1;
        RBus_UInt32  allow_interintra_compound:1;
        RBus_UInt32  allow_screen_content_tools:1;
        RBus_UInt32  allow_intrabc:1;
        RBus_UInt32  cdef_bits:2;
        RBus_UInt32  res1:9;
    };
}cabac_p2_avs2_p2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_fwd_ref_0:3;
        RBus_UInt32  comp_fwd_ref_1:3;
        RBus_UInt32  comp_fwd_ref_2:3;
        RBus_UInt32  comp_fwd_ref_3:3;
        RBus_UInt32  comp_bwd_ref_0:3;
        RBus_UInt32  comp_bwd_ref_1:3;
        RBus_UInt32  comp_bwd_ref_2:3;
        RBus_UInt32  ref_frame_sign_bias:8;
        RBus_UInt32  res1:3;
    };
}cabac_p2_av1_p2_ref_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stcomemsaddr:32;
    };
}cabac_p2_vp9co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_vp9co1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stnhmemsaddr:32;
    };
}cabac_p2_vp9nh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldnhmemsaddr:32;
    };
}cabac_p2_vp9nh1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disablecomem:1;
        RBus_UInt32  res1:31;
    };
}cabac_p2_vp9co2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  postwrite_en:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabac_halt:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cabac_halt_done:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:26;
    };
}cabac_p2_p2_ndb_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}cabac_p2_ndb_cabac_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}cabac_p2_ndb_cabac_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}cabac_p2_ndb_cabac_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_ptr:32;
    };
}cabac_p2_ndb_cabac_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hwctrl:16;
        RBus_UInt32  forceintmv:1;
        RBus_UInt32  storebwmv:1;
        RBus_UInt32  motionfielden0:1;
        RBus_UInt32  motionfielden1:1;
        RBus_UInt32  motionfielden2:1;
        RBus_UInt32  motionfielddir0:2;
        RBus_UInt32  motionfielddir1:2;
        RBus_UInt32  motionfielddir2:2;
        RBus_UInt32  res1:5;
    };
}cabac_p2_av1pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write:1;
        RBus_UInt32  read:1;
        RBus_UInt32  addr:8;
        RBus_UInt32  res1:22;
    };
}cabac_p2_indrbus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}cabac_p2_indrbus3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frameside7:2;
        RBus_UInt32  frameside6:2;
        RBus_UInt32  frameside5:2;
        RBus_UInt32  frameside4:2;
        RBus_UInt32  frameside3:2;
        RBus_UInt32  frameside2:2;
        RBus_UInt32  frameside1:2;
        RBus_UInt32  res1:18;
    };
}cabac_p2_av1ref_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_av1mf0co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_av1mf1co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:32;
    };
}cabac_p2_av1mf2co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset3:8;
        RBus_UInt32  curoffset2:8;
        RBus_UInt32  curoffset1:8;
        RBus_UInt32  reftocur:8;
    };
}cabac_p2_mf0set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset7:8;
        RBus_UInt32  curoffset6:8;
        RBus_UInt32  curoffset5:8;
        RBus_UInt32  curoffset4:8;
    };
}cabac_p2_mf0set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset3:8;
        RBus_UInt32  refoffset2:8;
        RBus_UInt32  refoffset1:8;
        RBus_UInt32  res1:8;
    };
}cabac_p2_mf0set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset7:8;
        RBus_UInt32  refoffset6:8;
        RBus_UInt32  refoffset5:8;
        RBus_UInt32  refoffset4:8;
    };
}cabac_p2_mf0set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset3:8;
        RBus_UInt32  curoffset2:8;
        RBus_UInt32  curoffset1:8;
        RBus_UInt32  reftocur:8;
    };
}cabac_p2_mf1set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset7:8;
        RBus_UInt32  curoffset6:8;
        RBus_UInt32  curoffset5:8;
        RBus_UInt32  curoffset4:8;
    };
}cabac_p2_mf1set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset3:8;
        RBus_UInt32  refoffset2:8;
        RBus_UInt32  refoffset1:8;
        RBus_UInt32  res1:8;
    };
}cabac_p2_mf1set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset7:8;
        RBus_UInt32  refoffset6:8;
        RBus_UInt32  refoffset5:8;
        RBus_UInt32  refoffset4:8;
    };
}cabac_p2_mf1set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset3:8;
        RBus_UInt32  curoffset2:8;
        RBus_UInt32  curoffset1:8;
        RBus_UInt32  reftocur:8;
    };
}cabac_p2_mf2set0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  curoffset7:8;
        RBus_UInt32  curoffset6:8;
        RBus_UInt32  curoffset5:8;
        RBus_UInt32  curoffset4:8;
    };
}cabac_p2_mf2set1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset3:8;
        RBus_UInt32  refoffset2:8;
        RBus_UInt32  refoffset1:8;
        RBus_UInt32  res1:8;
    };
}cabac_p2_mf2set2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refoffset7:8;
        RBus_UInt32  refoffset6:8;
        RBus_UInt32  refoffset5:8;
        RBus_UInt32  refoffset4:8;
    };
}cabac_p2_mf2set3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_rd_addr:32;
    };
}cabac_p2_p2_segtab_rd_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  id_globalmv_mask:8;
        RBus_UInt32  reduce_tx_set_used:1;
        RBus_UInt32  skip_mode_flag:1;
        RBus_UInt32  preskip_segid:1;
        RBus_UInt32  dependent_horz_tile_flag:1;
        RBus_UInt32  tg_horz_boundary:1;
        RBus_UInt32  current_frame_force_integer_mv:1;
        RBus_UInt32  cdf_update_en:1;
        RBus_UInt32  switchable_motion_mode:1;
        RBus_UInt32  superres_scale_denominator:4;
        RBus_UInt32  frame_offset_set_0:8;
        RBus_UInt32  filter_intra_en:1;
        RBus_UInt32  order_hint_bits:3;
    };
}cabac_p2_p2_av1_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_0_qindex:8;
        RBus_UInt32  seg_1_qindex:8;
        RBus_UInt32  seg_2_qindex:8;
        RBus_UInt32  seg_3_qindex:8;
    };
}cabac_p2_p2_av1_qidx0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_4_qindex:8;
        RBus_UInt32  seg_5_qindex:8;
        RBus_UInt32  seg_6_qindex:8;
        RBus_UInt32  seg_7_qindex:8;
    };
}cabac_p2_p2_av1_qidx1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref0_vld_scaled:1;
        RBus_UInt32  ref1_vld_scaled:1;
        RBus_UInt32  ref2_vld_scaled:1;
        RBus_UInt32  ref3_vld_scaled:1;
        RBus_UInt32  ref4_vld_scaled:1;
        RBus_UInt32  ref5_vld_scaled:1;
        RBus_UInt32  ref6_vld_scaled:1;
        RBus_UInt32  ref7_vld_scaled:1;
        RBus_UInt32  ref0_is_scaled:1;
        RBus_UInt32  ref1_is_scaled:1;
        RBus_UInt32  ref2_is_scaled:1;
        RBus_UInt32  ref3_is_scaled:1;
        RBus_UInt32  ref4_is_scaled:1;
        RBus_UInt32  ref5_is_scaled:1;
        RBus_UInt32  ref6_is_scaled:1;
        RBus_UInt32  ref7_is_scaled:1;
        RBus_UInt32  ref0_global_motion_wmtype:2;
        RBus_UInt32  ref1_global_motion_wmtype:2;
        RBus_UInt32  ref2_global_motion_wmtype:2;
        RBus_UInt32  ref3_global_motion_wmtype:2;
        RBus_UInt32  ref4_global_motion_wmtype:2;
        RBus_UInt32  ref5_global_motion_wmtype:2;
        RBus_UInt32  ref6_global_motion_wmtype:2;
        RBus_UInt32  ref7_global_motion_wmtype:2;
    };
}cabac_p2_p2_av1_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_adr:32;
    };
}cabac_p2_p2_av1_lr_adr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_v_restoration_unit_size:2;
        RBus_UInt32  frame_u_restoration_unit_size:2;
        RBus_UInt32  frame_y_restoration_unit_size:2;
        RBus_UInt32  frame_v_restoration_type:2;
        RBus_UInt32  frame_u_restoration_type:2;
        RBus_UInt32  frame_y_restoration_type:2;
        RBus_UInt32  enable_dual_filter:1;
        RBus_UInt32  enable_jnt_comp:1;
        RBus_UInt32  allow_warped_motion:1;
        RBus_UInt32  res1:17;
    };
}cabac_p2_p2_av1_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  frame_offset_set_1:8;
        RBus_UInt32  frame_offset_set_2:8;
        RBus_UInt32  frame_offset_set_3:8;
        RBus_UInt32  frame_offset_set_4:8;
    };
}cabac_p2_p2_av1_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  superres_upscaled_width:14;
        RBus_UInt32  superres_upscaled_height:13;
        RBus_UInt32  large_scale_tile:1;
        RBus_UInt32  res1:4;
    };
}cabac_p2_p2_av1_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_frame_idx_0:3;
        RBus_UInt32  ref_frame_idx_1:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  frame_offset_set_5:8;
        RBus_UInt32  frame_offset_set_6:8;
        RBus_UInt32  frame_offset_set_7:8;
    };
}cabac_p2_p2_av1_ctrl5_RBUS;




#endif 


#endif 
