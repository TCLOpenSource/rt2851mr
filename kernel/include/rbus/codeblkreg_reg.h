/**
* @file Merlin5_VE_CODEBLK_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_CODEBLKREG_REG_H_
#define _RBUS_CODEBLKREG_REG_H_

#include "rbus_types.h"



//  CODEBLKREG Register Address
#define  CODEBLKREG_ve_cntl                                                     0x1800E000
#define  CODEBLKREG_ve_cntl_reg_addr                                             "0xB800E000"
#define  CODEBLKREG_ve_cntl_reg                                                  0xB800E000
#define  CODEBLKREG_ve_cntl_inst_addr                                            "0x0000"
#define  set_CODEBLKREG_ve_cntl_reg(data)                                        (*((volatile unsigned int*)CODEBLKREG_ve_cntl_reg)=data)
#define  get_CODEBLKREG_ve_cntl_reg                                              (*((volatile unsigned int*)CODEBLKREG_ve_cntl_reg))
#define  CODEBLKREG_ve_cntl_write_enable5_shift                                  (24)
#define  CODEBLKREG_ve_cntl_cm_bypass_shift                                      (23)
#define  CODEBLKREG_ve_cntl_write_enable4_shift                                  (22)
#define  CODEBLKREG_ve_cntl_ldstcmemcount_shift                                  (6)
#define  CODEBLKREG_ve_cntl_write_enable3_shift                                  (5)
#define  CODEBLKREG_ve_cntl_cabac_1p_mode_shift                                  (4)
#define  CODEBLKREG_ve_cntl_write_enable2_shift                                  (3)
#define  CODEBLKREG_ve_cntl_cabac_p2_p3_shift                                    (2)
#define  CODEBLKREG_ve_cntl_write_enable1_shift                                  (1)
#define  CODEBLKREG_ve_cntl_itblk_advmode_shift                                  (0)
#define  CODEBLKREG_ve_cntl_write_enable5_mask                                   (0x01000000)
#define  CODEBLKREG_ve_cntl_cm_bypass_mask                                       (0x00800000)
#define  CODEBLKREG_ve_cntl_write_enable4_mask                                   (0x00400000)
#define  CODEBLKREG_ve_cntl_ldstcmemcount_mask                                   (0x003FFFC0)
#define  CODEBLKREG_ve_cntl_write_enable3_mask                                   (0x00000020)
#define  CODEBLKREG_ve_cntl_cabac_1p_mode_mask                                   (0x00000010)
#define  CODEBLKREG_ve_cntl_write_enable2_mask                                   (0x00000008)
#define  CODEBLKREG_ve_cntl_cabac_p2_p3_mask                                     (0x00000004)
#define  CODEBLKREG_ve_cntl_write_enable1_mask                                   (0x00000002)
#define  CODEBLKREG_ve_cntl_itblk_advmode_mask                                   (0x00000001)
#define  CODEBLKREG_ve_cntl_write_enable5(data)                                  (0x01000000&((data)<<24))
#define  CODEBLKREG_ve_cntl_cm_bypass(data)                                      (0x00800000&((data)<<23))
#define  CODEBLKREG_ve_cntl_write_enable4(data)                                  (0x00400000&((data)<<22))
#define  CODEBLKREG_ve_cntl_ldstcmemcount(data)                                  (0x003FFFC0&((data)<<6))
#define  CODEBLKREG_ve_cntl_write_enable3(data)                                  (0x00000020&((data)<<5))
#define  CODEBLKREG_ve_cntl_cabac_1p_mode(data)                                  (0x00000010&((data)<<4))
#define  CODEBLKREG_ve_cntl_write_enable2(data)                                  (0x00000008&((data)<<3))
#define  CODEBLKREG_ve_cntl_cabac_p2_p3(data)                                    (0x00000004&((data)<<2))
#define  CODEBLKREG_ve_cntl_write_enable1(data)                                  (0x00000002&((data)<<1))
#define  CODEBLKREG_ve_cntl_itblk_advmode(data)                                  (0x00000001&(data))
#define  CODEBLKREG_ve_cntl_get_write_enable5(data)                              ((0x01000000&(data))>>24)
#define  CODEBLKREG_ve_cntl_get_cm_bypass(data)                                  ((0x00800000&(data))>>23)
#define  CODEBLKREG_ve_cntl_get_write_enable4(data)                              ((0x00400000&(data))>>22)
#define  CODEBLKREG_ve_cntl_get_ldstcmemcount(data)                              ((0x003FFFC0&(data))>>6)
#define  CODEBLKREG_ve_cntl_get_write_enable3(data)                              ((0x00000020&(data))>>5)
#define  CODEBLKREG_ve_cntl_get_cabac_1p_mode(data)                              ((0x00000010&(data))>>4)
#define  CODEBLKREG_ve_cntl_get_write_enable2(data)                              ((0x00000008&(data))>>3)
#define  CODEBLKREG_ve_cntl_get_cabac_p2_p3(data)                                ((0x00000004&(data))>>2)
#define  CODEBLKREG_ve_cntl_get_write_enable1(data)                              ((0x00000002&(data))>>1)
#define  CODEBLKREG_ve_cntl_get_itblk_advmode(data)                              (0x00000001&(data))

#define  CODEBLKREG_ve_h264_cntl                                                0x1800E100
#define  CODEBLKREG_ve_h264_cntl_reg_addr                                        "0xB800E100"
#define  CODEBLKREG_ve_h264_cntl_reg                                             0xB800E100
#define  CODEBLKREG_ve_h264_cntl_inst_addr                                       "0x0001"
#define  set_CODEBLKREG_ve_h264_cntl_reg(data)                                   (*((volatile unsigned int*)CODEBLKREG_ve_h264_cntl_reg)=data)
#define  get_CODEBLKREG_ve_h264_cntl_reg                                         (*((volatile unsigned int*)CODEBLKREG_ve_h264_cntl_reg))
#define  CODEBLKREG_ve_h264_cntl_qpprime_y_zero_transform_bypass_flag_shift      (29)
#define  CODEBLKREG_ve_h264_cntl_entropy_coding_mode_shift                       (28)
#define  CODEBLKREG_ve_h264_cntl_pic_init_qp_shift                               (22)
#define  CODEBLKREG_ve_h264_cntl_chroma_qp_offset_shift                          (17)
#define  CODEBLKREG_ve_h264_cntl_second_chroma_qp_offset_shift                   (12)
#define  CODEBLKREG_ve_h264_cntl_direct_8x8_inferflg_shift                       (11)
#define  CODEBLKREG_ve_h264_cntl_transform_8x8_mode_flg_shift                    (10)
#define  CODEBLKREG_ve_h264_cntl_num_ref_idx_l0_active_minus1_shift              (5)
#define  CODEBLKREG_ve_h264_cntl_num_ref_idx_l1_active_minus1_shift              (0)
#define  CODEBLKREG_ve_h264_cntl_qpprime_y_zero_transform_bypass_flag_mask       (0x20000000)
#define  CODEBLKREG_ve_h264_cntl_entropy_coding_mode_mask                        (0x10000000)
#define  CODEBLKREG_ve_h264_cntl_pic_init_qp_mask                                (0x0FC00000)
#define  CODEBLKREG_ve_h264_cntl_chroma_qp_offset_mask                           (0x003E0000)
#define  CODEBLKREG_ve_h264_cntl_second_chroma_qp_offset_mask                    (0x0001F000)
#define  CODEBLKREG_ve_h264_cntl_direct_8x8_inferflg_mask                        (0x00000800)
#define  CODEBLKREG_ve_h264_cntl_transform_8x8_mode_flg_mask                     (0x00000400)
#define  CODEBLKREG_ve_h264_cntl_num_ref_idx_l0_active_minus1_mask               (0x000003E0)
#define  CODEBLKREG_ve_h264_cntl_num_ref_idx_l1_active_minus1_mask               (0x0000001F)
#define  CODEBLKREG_ve_h264_cntl_qpprime_y_zero_transform_bypass_flag(data)      (0x20000000&((data)<<29))
#define  CODEBLKREG_ve_h264_cntl_entropy_coding_mode(data)                       (0x10000000&((data)<<28))
#define  CODEBLKREG_ve_h264_cntl_pic_init_qp(data)                               (0x0FC00000&((data)<<22))
#define  CODEBLKREG_ve_h264_cntl_chroma_qp_offset(data)                          (0x003E0000&((data)<<17))
#define  CODEBLKREG_ve_h264_cntl_second_chroma_qp_offset(data)                   (0x0001F000&((data)<<12))
#define  CODEBLKREG_ve_h264_cntl_direct_8x8_inferflg(data)                       (0x00000800&((data)<<11))
#define  CODEBLKREG_ve_h264_cntl_transform_8x8_mode_flg(data)                    (0x00000400&((data)<<10))
#define  CODEBLKREG_ve_h264_cntl_num_ref_idx_l0_active_minus1(data)              (0x000003E0&((data)<<5))
#define  CODEBLKREG_ve_h264_cntl_num_ref_idx_l1_active_minus1(data)              (0x0000001F&(data))
#define  CODEBLKREG_ve_h264_cntl_get_qpprime_y_zero_transform_bypass_flag(data)  ((0x20000000&(data))>>29)
#define  CODEBLKREG_ve_h264_cntl_get_entropy_coding_mode(data)                   ((0x10000000&(data))>>28)
#define  CODEBLKREG_ve_h264_cntl_get_pic_init_qp(data)                           ((0x0FC00000&(data))>>22)
#define  CODEBLKREG_ve_h264_cntl_get_chroma_qp_offset(data)                      ((0x003E0000&(data))>>17)
#define  CODEBLKREG_ve_h264_cntl_get_second_chroma_qp_offset(data)               ((0x0001F000&(data))>>12)
#define  CODEBLKREG_ve_h264_cntl_get_direct_8x8_inferflg(data)                   ((0x00000800&(data))>>11)
#define  CODEBLKREG_ve_h264_cntl_get_transform_8x8_mode_flg(data)                ((0x00000400&(data))>>10)
#define  CODEBLKREG_ve_h264_cntl_get_num_ref_idx_l0_active_minus1(data)          ((0x000003E0&(data))>>5)
#define  CODEBLKREG_ve_h264_cntl_get_num_ref_idx_l1_active_minus1(data)          (0x0000001F&(data))

#define  CODEBLKREG_ve_h264_cntl2                                               0x1800E104
#define  CODEBLKREG_ve_h264_cntl2_reg_addr                                       "0xB800E104"
#define  CODEBLKREG_ve_h264_cntl2_reg                                            0xB800E104
#define  CODEBLKREG_ve_h264_cntl2_inst_addr                                      "0x0002"
#define  set_CODEBLKREG_ve_h264_cntl2_reg(data)                                  (*((volatile unsigned int*)CODEBLKREG_ve_h264_cntl2_reg)=data)
#define  get_CODEBLKREG_ve_h264_cntl2_reg                                        (*((volatile unsigned int*)CODEBLKREG_ve_h264_cntl2_reg))
#define  CODEBLKREG_ve_h264_cntl2_write_enable3_shift                            (14)
#define  CODEBLKREG_ve_h264_cntl2_pic_type_shift                                 (11)
#define  CODEBLKREG_ve_h264_cntl2_write_enable2_shift                            (10)
#define  CODEBLKREG_ve_h264_cntl2_slice_qp_delta_shift                           (3)
#define  CODEBLKREG_ve_h264_cntl2_write_enable1_shift                            (2)
#define  CODEBLKREG_ve_h264_cntl2_cabac_init_idc_shift                           (0)
#define  CODEBLKREG_ve_h264_cntl2_write_enable3_mask                             (0x00004000)
#define  CODEBLKREG_ve_h264_cntl2_pic_type_mask                                  (0x00003800)
#define  CODEBLKREG_ve_h264_cntl2_write_enable2_mask                             (0x00000400)
#define  CODEBLKREG_ve_h264_cntl2_slice_qp_delta_mask                            (0x000003F8)
#define  CODEBLKREG_ve_h264_cntl2_write_enable1_mask                             (0x00000004)
#define  CODEBLKREG_ve_h264_cntl2_cabac_init_idc_mask                            (0x00000003)
#define  CODEBLKREG_ve_h264_cntl2_write_enable3(data)                            (0x00004000&((data)<<14))
#define  CODEBLKREG_ve_h264_cntl2_pic_type(data)                                 (0x00003800&((data)<<11))
#define  CODEBLKREG_ve_h264_cntl2_write_enable2(data)                            (0x00000400&((data)<<10))
#define  CODEBLKREG_ve_h264_cntl2_slice_qp_delta(data)                           (0x000003F8&((data)<<3))
#define  CODEBLKREG_ve_h264_cntl2_write_enable1(data)                            (0x00000004&((data)<<2))
#define  CODEBLKREG_ve_h264_cntl2_cabac_init_idc(data)                           (0x00000003&(data))
#define  CODEBLKREG_ve_h264_cntl2_get_write_enable3(data)                        ((0x00004000&(data))>>14)
#define  CODEBLKREG_ve_h264_cntl2_get_pic_type(data)                             ((0x00003800&(data))>>11)
#define  CODEBLKREG_ve_h264_cntl2_get_write_enable2(data)                        ((0x00000400&(data))>>10)
#define  CODEBLKREG_ve_h264_cntl2_get_slice_qp_delta(data)                       ((0x000003F8&(data))>>3)
#define  CODEBLKREG_ve_h264_cntl2_get_write_enable1(data)                        ((0x00000004&(data))>>2)
#define  CODEBLKREG_ve_h264_cntl2_get_cabac_init_idc(data)                       (0x00000003&(data))

#define  CODEBLKREG_ve_ldstaddr                                                 0x1800E128
#define  CODEBLKREG_ve_ldstaddr_reg_addr                                         "0xB800E128"
#define  CODEBLKREG_ve_ldstaddr_reg                                              0xB800E128
#define  CODEBLKREG_ve_ldstaddr_inst_addr                                        "0x0003"
#define  set_CODEBLKREG_ve_ldstaddr_reg(data)                                    (*((volatile unsigned int*)CODEBLKREG_ve_ldstaddr_reg)=data)
#define  get_CODEBLKREG_ve_ldstaddr_reg                                          (*((volatile unsigned int*)CODEBLKREG_ve_ldstaddr_reg))
#define  CODEBLKREG_ve_ldstaddr_ldst_addr_shift                                  (0)
#define  CODEBLKREG_ve_ldstaddr_ldst_addr_mask                                   (0xFFFFFFFF)
#define  CODEBLKREG_ve_ldstaddr_ldst_addr(data)                                  (0xFFFFFFFF&(data))
#define  CODEBLKREG_ve_ldstaddr_get_ldst_addr(data)                              (0xFFFFFFFF&(data))

#define  CODEBLKREG_ve_decbitcnt                                                0x1800E200
#define  CODEBLKREG_ve_decbitcnt_reg_addr                                        "0xB800E200"
#define  CODEBLKREG_ve_decbitcnt_reg                                             0xB800E200
#define  CODEBLKREG_ve_decbitcnt_inst_addr                                       "0x0004"
#define  set_CODEBLKREG_ve_decbitcnt_reg(data)                                   (*((volatile unsigned int*)CODEBLKREG_ve_decbitcnt_reg)=data)
#define  get_CODEBLKREG_ve_decbitcnt_reg                                         (*((volatile unsigned int*)CODEBLKREG_ve_decbitcnt_reg))
#define  CODEBLKREG_ve_decbitcnt_max_bit_shift                                   (0)
#define  CODEBLKREG_ve_decbitcnt_max_bit_mask                                    (0xFFFFFFFF)
#define  CODEBLKREG_ve_decbitcnt_max_bit(data)                                   (0xFFFFFFFF&(data))
#define  CODEBLKREG_ve_decbitcnt_get_max_bit(data)                               (0xFFFFFFFF&(data))

#define  CODEBLKREG_vld_bitcnt                                                  0x1800E204
#define  CODEBLKREG_vld_bitcnt_reg_addr                                          "0xB800E204"
#define  CODEBLKREG_vld_bitcnt_reg                                               0xB800E204
#define  CODEBLKREG_vld_bitcnt_inst_addr                                         "0x0005"
#define  set_CODEBLKREG_vld_bitcnt_reg(data)                                     (*((volatile unsigned int*)CODEBLKREG_vld_bitcnt_reg)=data)
#define  get_CODEBLKREG_vld_bitcnt_reg                                           (*((volatile unsigned int*)CODEBLKREG_vld_bitcnt_reg))
#define  CODEBLKREG_vld_bitcnt_dec_bitcnt_shift                                  (0)
#define  CODEBLKREG_vld_bitcnt_dec_bitcnt_mask                                   (0xFFFFFFFF)
#define  CODEBLKREG_vld_bitcnt_dec_bitcnt(data)                                  (0xFFFFFFFF&(data))
#define  CODEBLKREG_vld_bitcnt_get_dec_bitcnt(data)                              (0xFFFFFFFF&(data))

#define  CODEBLKREG_ve_bscntl                                                   0x1800E208
#define  CODEBLKREG_ve_bscntl_reg_addr                                           "0xB800E208"
#define  CODEBLKREG_ve_bscntl_reg                                                0xB800E208
#define  CODEBLKREG_ve_bscntl_inst_addr                                          "0x0006"
#define  set_CODEBLKREG_ve_bscntl_reg(data)                                      (*((volatile unsigned int*)CODEBLKREG_ve_bscntl_reg)=data)
#define  get_CODEBLKREG_ve_bscntl_reg                                            (*((volatile unsigned int*)CODEBLKREG_ve_bscntl_reg))
#define  CODEBLKREG_ve_bscntl_write_enable3_shift                                (6)
#define  CODEBLKREG_ve_bscntl_detect_startcode_error_shift                       (5)
#define  CODEBLKREG_ve_bscntl_write_enable2_shift                                (4)
#define  CODEBLKREG_ve_bscntl_min_xfer_size_shift                                (2)
#define  CODEBLKREG_ve_bscntl_write_enable1_shift                                (1)
#define  CODEBLKREG_ve_bscntl_startcode_prevnt_en_shift                          (0)
#define  CODEBLKREG_ve_bscntl_write_enable3_mask                                 (0x00000040)
#define  CODEBLKREG_ve_bscntl_detect_startcode_error_mask                        (0x00000020)
#define  CODEBLKREG_ve_bscntl_write_enable2_mask                                 (0x00000010)
#define  CODEBLKREG_ve_bscntl_min_xfer_size_mask                                 (0x0000000C)
#define  CODEBLKREG_ve_bscntl_write_enable1_mask                                 (0x00000002)
#define  CODEBLKREG_ve_bscntl_startcode_prevnt_en_mask                           (0x00000001)
#define  CODEBLKREG_ve_bscntl_write_enable3(data)                                (0x00000040&((data)<<6))
#define  CODEBLKREG_ve_bscntl_detect_startcode_error(data)                       (0x00000020&((data)<<5))
#define  CODEBLKREG_ve_bscntl_write_enable2(data)                                (0x00000010&((data)<<4))
#define  CODEBLKREG_ve_bscntl_min_xfer_size(data)                                (0x0000000C&((data)<<2))
#define  CODEBLKREG_ve_bscntl_write_enable1(data)                                (0x00000002&((data)<<1))
#define  CODEBLKREG_ve_bscntl_startcode_prevnt_en(data)                          (0x00000001&(data))
#define  CODEBLKREG_ve_bscntl_get_write_enable3(data)                            ((0x00000040&(data))>>6)
#define  CODEBLKREG_ve_bscntl_get_detect_startcode_error(data)                   ((0x00000020&(data))>>5)
#define  CODEBLKREG_ve_bscntl_get_write_enable2(data)                            ((0x00000010&(data))>>4)
#define  CODEBLKREG_ve_bscntl_get_min_xfer_size(data)                            ((0x0000000C&(data))>>2)
#define  CODEBLKREG_ve_bscntl_get_write_enable1(data)                            ((0x00000002&(data))>>1)
#define  CODEBLKREG_ve_bscntl_get_startcode_prevnt_en(data)                      (0x00000001&(data))

#define  CODEBLKREG_ve_bs_min_thr                                               0x1800E20C
#define  CODEBLKREG_ve_bs_min_thr_reg_addr                                       "0xB800E20C"
#define  CODEBLKREG_ve_bs_min_thr_reg                                            0xB800E20C
#define  CODEBLKREG_ve_bs_min_thr_inst_addr                                      "0x0007"
#define  set_CODEBLKREG_ve_bs_min_thr_reg(data)                                  (*((volatile unsigned int*)CODEBLKREG_ve_bs_min_thr_reg)=data)
#define  get_CODEBLKREG_ve_bs_min_thr_reg                                        (*((volatile unsigned int*)CODEBLKREG_ve_bs_min_thr_reg))
#define  CODEBLKREG_ve_bs_min_thr_min_thre_shift                                 (0)
#define  CODEBLKREG_ve_bs_min_thr_min_thre_mask                                  (0x0000007F)
#define  CODEBLKREG_ve_bs_min_thr_min_thre(data)                                 (0x0000007F&(data))
#define  CODEBLKREG_ve_bs_min_thr_get_min_thre(data)                             (0x0000007F&(data))

#define  CODEBLKREG_ve_bstimer                                                  0x1800E210
#define  CODEBLKREG_ve_bstimer_reg_addr                                          "0xB800E210"
#define  CODEBLKREG_ve_bstimer_reg                                               0xB800E210
#define  CODEBLKREG_ve_bstimer_inst_addr                                         "0x0008"
#define  set_CODEBLKREG_ve_bstimer_reg(data)                                     (*((volatile unsigned int*)CODEBLKREG_ve_bstimer_reg)=data)
#define  get_CODEBLKREG_ve_bstimer_reg                                           (*((volatile unsigned int*)CODEBLKREG_ve_bstimer_reg))
#define  CODEBLKREG_ve_bstimer_timer_value_shift                                 (0)
#define  CODEBLKREG_ve_bstimer_timer_value_mask                                  (0x00FFFFFF)
#define  CODEBLKREG_ve_bstimer_timer_value(data)                                 (0x00FFFFFF&(data))
#define  CODEBLKREG_ve_bstimer_get_timer_value(data)                             (0x00FFFFFF&(data))

#define  CODEBLKREG_ve_bsbase                                                   0x1800E214
#define  CODEBLKREG_ve_bsbase_reg_addr                                           "0xB800E214"
#define  CODEBLKREG_ve_bsbase_reg                                                0xB800E214
#define  CODEBLKREG_ve_bsbase_inst_addr                                          "0x0009"
#define  set_CODEBLKREG_ve_bsbase_reg(data)                                      (*((volatile unsigned int*)CODEBLKREG_ve_bsbase_reg)=data)
#define  get_CODEBLKREG_ve_bsbase_reg                                            (*((volatile unsigned int*)CODEBLKREG_ve_bsbase_reg))
#define  CODEBLKREG_ve_bsbase_base_addr_shift                                    (0)
#define  CODEBLKREG_ve_bsbase_base_addr_mask                                     (0xFFFFFFFF)
#define  CODEBLKREG_ve_bsbase_base_addr(data)                                    (0xFFFFFFFF&(data))
#define  CODEBLKREG_ve_bsbase_get_base_addr(data)                                (0xFFFFFFFF&(data))

#define  CODEBLKREG_ve_bslimit                                                  0x1800E218
#define  CODEBLKREG_ve_bslimit_reg_addr                                          "0xB800E218"
#define  CODEBLKREG_ve_bslimit_reg                                               0xB800E218
#define  CODEBLKREG_ve_bslimit_inst_addr                                         "0x000A"
#define  set_CODEBLKREG_ve_bslimit_reg(data)                                     (*((volatile unsigned int*)CODEBLKREG_ve_bslimit_reg)=data)
#define  get_CODEBLKREG_ve_bslimit_reg                                           (*((volatile unsigned int*)CODEBLKREG_ve_bslimit_reg))
#define  CODEBLKREG_ve_bslimit_limit_addr_shift                                  (0)
#define  CODEBLKREG_ve_bslimit_limit_addr_mask                                   (0xFFFFFFFF)
#define  CODEBLKREG_ve_bslimit_limit_addr(data)                                  (0xFFFFFFFF&(data))
#define  CODEBLKREG_ve_bslimit_get_limit_addr(data)                              (0xFFFFFFFF&(data))

#define  CODEBLKREG_ve_bswrptr                                                  0x1800E21C
#define  CODEBLKREG_ve_bswrptr_reg_addr                                          "0xB800E21C"
#define  CODEBLKREG_ve_bswrptr_reg                                               0xB800E21C
#define  CODEBLKREG_ve_bswrptr_inst_addr                                         "0x000B"
#define  set_CODEBLKREG_ve_bswrptr_reg(data)                                     (*((volatile unsigned int*)CODEBLKREG_ve_bswrptr_reg)=data)
#define  get_CODEBLKREG_ve_bswrptr_reg                                           (*((volatile unsigned int*)CODEBLKREG_ve_bswrptr_reg))
#define  CODEBLKREG_ve_bswrptr_wr_ptr_shift                                      (0)
#define  CODEBLKREG_ve_bswrptr_wr_ptr_mask                                       (0xFFFFFFFF)
#define  CODEBLKREG_ve_bswrptr_wr_ptr(data)                                      (0xFFFFFFFF&(data))
#define  CODEBLKREG_ve_bswrptr_get_wr_ptr(data)                                  (0xFFFFFFFF&(data))

#define  CODEBLKREG_ve_bscurptr                                                 0x1800E220
#define  CODEBLKREG_ve_bscurptr_reg_addr                                         "0xB800E220"
#define  CODEBLKREG_ve_bscurptr_reg                                              0xB800E220
#define  CODEBLKREG_ve_bscurptr_inst_addr                                        "0x000C"
#define  set_CODEBLKREG_ve_bscurptr_reg(data)                                    (*((volatile unsigned int*)CODEBLKREG_ve_bscurptr_reg)=data)
#define  get_CODEBLKREG_ve_bscurptr_reg                                          (*((volatile unsigned int*)CODEBLKREG_ve_bscurptr_reg))
#define  CODEBLKREG_ve_bscurptr_cur_ptr_shift                                    (0)
#define  CODEBLKREG_ve_bscurptr_cur_ptr_mask                                     (0xFFFFFFFF)
#define  CODEBLKREG_ve_bscurptr_cur_ptr(data)                                    (0xFFFFFFFF&(data))
#define  CODEBLKREG_ve_bscurptr_get_cur_ptr(data)                                (0xFFFFFFFF&(data))

#define  CODEBLKREG_ve_decbsptr                                                 0x1800E224
#define  CODEBLKREG_ve_decbsptr_reg_addr                                         "0xB800E224"
#define  CODEBLKREG_ve_decbsptr_reg                                              0xB800E224
#define  CODEBLKREG_ve_decbsptr_inst_addr                                        "0x000D"
#define  set_CODEBLKREG_ve_decbsptr_reg(data)                                    (*((volatile unsigned int*)CODEBLKREG_ve_decbsptr_reg)=data)
#define  get_CODEBLKREG_ve_decbsptr_reg                                          (*((volatile unsigned int*)CODEBLKREG_ve_decbsptr_reg))
#define  CODEBLKREG_ve_decbsptr_dec_bit_ptr_shift                                (0)
#define  CODEBLKREG_ve_decbsptr_dec_bit_ptr_mask                                 (0xFFFFFFFF)
#define  CODEBLKREG_ve_decbsptr_dec_bit_ptr(data)                                (0xFFFFFFFF&(data))
#define  CODEBLKREG_ve_decbsptr_get_dec_bit_ptr(data)                            (0xFFFFFFFF&(data))

#define  CODEBLKREG_ve_decbsptr_msb                                             0x1800E248
#define  CODEBLKREG_ve_decbsptr_msb_reg_addr                                     "0xB800E248"
#define  CODEBLKREG_ve_decbsptr_msb_reg                                          0xB800E248
#define  CODEBLKREG_ve_decbsptr_msb_inst_addr                                    "0x000E"
#define  set_CODEBLKREG_ve_decbsptr_msb_reg(data)                                (*((volatile unsigned int*)CODEBLKREG_ve_decbsptr_msb_reg)=data)
#define  get_CODEBLKREG_ve_decbsptr_msb_reg                                      (*((volatile unsigned int*)CODEBLKREG_ve_decbsptr_msb_reg))
#define  CODEBLKREG_ve_decbsptr_msb_dec_bit_ptr_msb_shift                        (0)
#define  CODEBLKREG_ve_decbsptr_msb_dec_bit_ptr_msb_mask                         (0x00000007)
#define  CODEBLKREG_ve_decbsptr_msb_dec_bit_ptr_msb(data)                        (0x00000007&(data))
#define  CODEBLKREG_ve_decbsptr_msb_get_dec_bit_ptr_msb(data)                    (0x00000007&(data))

#define  CODEBLKREG_ve_quantizer                                                0x1800E304
#define  CODEBLKREG_ve_quantizer_reg_addr                                        "0xB800E304"
#define  CODEBLKREG_ve_quantizer_reg                                             0xB800E304
#define  CODEBLKREG_ve_quantizer_inst_addr                                       "0x000F"
#define  set_CODEBLKREG_ve_quantizer_reg(data)                                   (*((volatile unsigned int*)CODEBLKREG_ve_quantizer_reg)=data)
#define  get_CODEBLKREG_ve_quantizer_reg                                         (*((volatile unsigned int*)CODEBLKREG_ve_quantizer_reg))
#define  CODEBLKREG_ve_quantizer_write_enable6_shift                             (31)
#define  CODEBLKREG_ve_quantizer_id_pred_shift                                   (29)
#define  CODEBLKREG_ve_quantizer_write_enable5_shift                             (28)
#define  CODEBLKREG_ve_quantizer_quant_type_shift                                (27)
#define  CODEBLKREG_ve_quantizer_write_enable4_shift                             (26)
#define  CODEBLKREG_ve_quantizer_mquant_shift                                    (21)
#define  CODEBLKREG_ve_quantizer_write_enable3_shift                             (20)
#define  CODEBLKREG_ve_quantizer_qpy_shift                                       (14)
#define  CODEBLKREG_ve_quantizer_write_enable2_shift                             (13)
#define  CODEBLKREG_ve_quantizer_qpcb_shift                                      (7)
#define  CODEBLKREG_ve_quantizer_write_enable1_shift                             (6)
#define  CODEBLKREG_ve_quantizer_qpcr_shift                                      (0)
#define  CODEBLKREG_ve_quantizer_write_enable6_mask                              (0x80000000)
#define  CODEBLKREG_ve_quantizer_id_pred_mask                                    (0x60000000)
#define  CODEBLKREG_ve_quantizer_write_enable5_mask                              (0x10000000)
#define  CODEBLKREG_ve_quantizer_quant_type_mask                                 (0x08000000)
#define  CODEBLKREG_ve_quantizer_write_enable4_mask                              (0x04000000)
#define  CODEBLKREG_ve_quantizer_mquant_mask                                     (0x03E00000)
#define  CODEBLKREG_ve_quantizer_write_enable3_mask                              (0x00100000)
#define  CODEBLKREG_ve_quantizer_qpy_mask                                        (0x000FC000)
#define  CODEBLKREG_ve_quantizer_write_enable2_mask                              (0x00002000)
#define  CODEBLKREG_ve_quantizer_qpcb_mask                                       (0x00001F80)
#define  CODEBLKREG_ve_quantizer_write_enable1_mask                              (0x00000040)
#define  CODEBLKREG_ve_quantizer_qpcr_mask                                       (0x0000003F)
#define  CODEBLKREG_ve_quantizer_write_enable6(data)                             (0x80000000&((data)<<31))
#define  CODEBLKREG_ve_quantizer_id_pred(data)                                   (0x60000000&((data)<<29))
#define  CODEBLKREG_ve_quantizer_write_enable5(data)                             (0x10000000&((data)<<28))
#define  CODEBLKREG_ve_quantizer_quant_type(data)                                (0x08000000&((data)<<27))
#define  CODEBLKREG_ve_quantizer_write_enable4(data)                             (0x04000000&((data)<<26))
#define  CODEBLKREG_ve_quantizer_mquant(data)                                    (0x03E00000&((data)<<21))
#define  CODEBLKREG_ve_quantizer_write_enable3(data)                             (0x00100000&((data)<<20))
#define  CODEBLKREG_ve_quantizer_qpy(data)                                       (0x000FC000&((data)<<14))
#define  CODEBLKREG_ve_quantizer_write_enable2(data)                             (0x00002000&((data)<<13))
#define  CODEBLKREG_ve_quantizer_qpcb(data)                                      (0x00001F80&((data)<<7))
#define  CODEBLKREG_ve_quantizer_write_enable1(data)                             (0x00000040&((data)<<6))
#define  CODEBLKREG_ve_quantizer_qpcr(data)                                      (0x0000003F&(data))
#define  CODEBLKREG_ve_quantizer_get_write_enable6(data)                         ((0x80000000&(data))>>31)
#define  CODEBLKREG_ve_quantizer_get_id_pred(data)                               ((0x60000000&(data))>>29)
#define  CODEBLKREG_ve_quantizer_get_write_enable5(data)                         ((0x10000000&(data))>>28)
#define  CODEBLKREG_ve_quantizer_get_quant_type(data)                            ((0x08000000&(data))>>27)
#define  CODEBLKREG_ve_quantizer_get_write_enable4(data)                         ((0x04000000&(data))>>26)
#define  CODEBLKREG_ve_quantizer_get_mquant(data)                                ((0x03E00000&(data))>>21)
#define  CODEBLKREG_ve_quantizer_get_write_enable3(data)                         ((0x00100000&(data))>>20)
#define  CODEBLKREG_ve_quantizer_get_qpy(data)                                   ((0x000FC000&(data))>>14)
#define  CODEBLKREG_ve_quantizer_get_write_enable2(data)                         ((0x00002000&(data))>>13)
#define  CODEBLKREG_ve_quantizer_get_qpcb(data)                                  ((0x00001F80&(data))>>7)
#define  CODEBLKREG_ve_quantizer_get_write_enable1(data)                         ((0x00000040&(data))>>6)
#define  CODEBLKREG_ve_quantizer_get_qpcr(data)                                  (0x0000003F&(data))

#define  CODEBLKREG_ve_quantizer2                                               0x1800E3EC
#define  CODEBLKREG_ve_quantizer2_reg_addr                                       "0xB800E3EC"
#define  CODEBLKREG_ve_quantizer2_reg                                            0xB800E3EC
#define  CODEBLKREG_ve_quantizer2_inst_addr                                      "0x0010"
#define  set_CODEBLKREG_ve_quantizer2_reg(data)                                  (*((volatile unsigned int*)CODEBLKREG_ve_quantizer2_reg)=data)
#define  get_CODEBLKREG_ve_quantizer2_reg                                        (*((volatile unsigned int*)CODEBLKREG_ve_quantizer2_reg))
#define  CODEBLKREG_ve_quantizer2_write_enable5_shift                            (31)
#define  CODEBLKREG_ve_quantizer2_qdelta_y2ac_shift                              (26)
#define  CODEBLKREG_ve_quantizer2_write_enable4_shift                            (25)
#define  CODEBLKREG_ve_quantizer2_qdelta_uvdc_shift                              (20)
#define  CODEBLKREG_ve_quantizer2_write_enable3_shift                            (19)
#define  CODEBLKREG_ve_quantizer2_qdelta_y2dc_shift                              (14)
#define  CODEBLKREG_ve_quantizer2_write_enable2_shift                            (13)
#define  CODEBLKREG_ve_quantizer2_qdelta_y1dc_shift                              (8)
#define  CODEBLKREG_ve_quantizer2_write_enable1_shift                            (7)
#define  CODEBLKREG_ve_quantizer2_vp8_qp_shift                                   (0)
#define  CODEBLKREG_ve_quantizer2_write_enable5_mask                             (0x80000000)
#define  CODEBLKREG_ve_quantizer2_qdelta_y2ac_mask                               (0x7C000000)
#define  CODEBLKREG_ve_quantizer2_write_enable4_mask                             (0x02000000)
#define  CODEBLKREG_ve_quantizer2_qdelta_uvdc_mask                               (0x01F00000)
#define  CODEBLKREG_ve_quantizer2_write_enable3_mask                             (0x00080000)
#define  CODEBLKREG_ve_quantizer2_qdelta_y2dc_mask                               (0x0007C000)
#define  CODEBLKREG_ve_quantizer2_write_enable2_mask                             (0x00002000)
#define  CODEBLKREG_ve_quantizer2_qdelta_y1dc_mask                               (0x00001F00)
#define  CODEBLKREG_ve_quantizer2_write_enable1_mask                             (0x00000080)
#define  CODEBLKREG_ve_quantizer2_vp8_qp_mask                                    (0x0000007F)
#define  CODEBLKREG_ve_quantizer2_write_enable5(data)                            (0x80000000&((data)<<31))
#define  CODEBLKREG_ve_quantizer2_qdelta_y2ac(data)                              (0x7C000000&((data)<<26))
#define  CODEBLKREG_ve_quantizer2_write_enable4(data)                            (0x02000000&((data)<<25))
#define  CODEBLKREG_ve_quantizer2_qdelta_uvdc(data)                              (0x01F00000&((data)<<20))
#define  CODEBLKREG_ve_quantizer2_write_enable3(data)                            (0x00080000&((data)<<19))
#define  CODEBLKREG_ve_quantizer2_qdelta_y2dc(data)                              (0x0007C000&((data)<<14))
#define  CODEBLKREG_ve_quantizer2_write_enable2(data)                            (0x00002000&((data)<<13))
#define  CODEBLKREG_ve_quantizer2_qdelta_y1dc(data)                              (0x00001F00&((data)<<8))
#define  CODEBLKREG_ve_quantizer2_write_enable1(data)                            (0x00000080&((data)<<7))
#define  CODEBLKREG_ve_quantizer2_vp8_qp(data)                                   (0x0000007F&(data))
#define  CODEBLKREG_ve_quantizer2_get_write_enable5(data)                        ((0x80000000&(data))>>31)
#define  CODEBLKREG_ve_quantizer2_get_qdelta_y2ac(data)                          ((0x7C000000&(data))>>26)
#define  CODEBLKREG_ve_quantizer2_get_write_enable4(data)                        ((0x02000000&(data))>>25)
#define  CODEBLKREG_ve_quantizer2_get_qdelta_uvdc(data)                          ((0x01F00000&(data))>>20)
#define  CODEBLKREG_ve_quantizer2_get_write_enable3(data)                        ((0x00080000&(data))>>19)
#define  CODEBLKREG_ve_quantizer2_get_qdelta_y2dc(data)                          ((0x0007C000&(data))>>14)
#define  CODEBLKREG_ve_quantizer2_get_write_enable2(data)                        ((0x00002000&(data))>>13)
#define  CODEBLKREG_ve_quantizer2_get_qdelta_y1dc(data)                          ((0x00001F00&(data))>>8)
#define  CODEBLKREG_ve_quantizer2_get_write_enable1(data)                        ((0x00000080&(data))>>7)
#define  CODEBLKREG_ve_quantizer2_get_vp8_qp(data)                               (0x0000007F&(data))

#define  CODEBLKREG_mb_Info                                                     0x1800E314
#define  CODEBLKREG_mb_Info_reg_addr                                             "0xB800E314"
#define  CODEBLKREG_mb_Info_reg                                                  0xB800E314
#define  CODEBLKREG_mb_Info_inst_addr                                            "0x0011"
#define  set_CODEBLKREG_mb_Info_reg(data)                                        (*((volatile unsigned int*)CODEBLKREG_mb_Info_reg)=data)
#define  get_CODEBLKREG_mb_Info_reg                                              (*((volatile unsigned int*)CODEBLKREG_mb_Info_reg))
#define  CODEBLKREG_mb_Info_write_enable9_shift                                  (31)
#define  CODEBLKREG_mb_Info_vp9_lossless_shift                                   (30)
#define  CODEBLKREG_mb_Info_write_enable8_shift                                  (29)
#define  CODEBLKREG_mb_Info_vp6_ref_frame_shift                                  (27)
#define  CODEBLKREG_mb_Info_write_enable7_shift                                  (26)
#define  CODEBLKREG_mb_Info_mb_pattern_shift                                     (25)
#define  CODEBLKREG_mb_Info_write_enable6_shift                                  (24)
#define  CODEBLKREG_mb_Info_intrablks_flg_shift                                  (19)
#define  CODEBLKREG_mb_Info_write_enable5_shift                                  (18)
#define  CODEBLKREG_mb_Info_ac_pred_shift                                        (17)
#define  CODEBLKREG_mb_Info_write_enable4_shift                                  (16)
#define  CODEBLKREG_mb_Info_dc_pred_dir_shift                                    (10)
#define  CODEBLKREG_mb_Info_write_enable3_shift                                  (9)
#define  CODEBLKREG_mb_Info_mbtype_shift                                         (5)
#define  CODEBLKREG_mb_Info_write_enable2_shift                                  (4)
#define  CODEBLKREG_mb_Info_intra_c_pred_mode_shift                              (2)
#define  CODEBLKREG_mb_Info_write_enable1_shift                                  (1)
#define  CODEBLKREG_mb_Info_field_mb_shift                                       (0)
#define  CODEBLKREG_mb_Info_write_enable9_mask                                   (0x80000000)
#define  CODEBLKREG_mb_Info_vp9_lossless_mask                                    (0x40000000)
#define  CODEBLKREG_mb_Info_write_enable8_mask                                   (0x20000000)
#define  CODEBLKREG_mb_Info_vp6_ref_frame_mask                                   (0x18000000)
#define  CODEBLKREG_mb_Info_write_enable7_mask                                   (0x04000000)
#define  CODEBLKREG_mb_Info_mb_pattern_mask                                      (0x02000000)
#define  CODEBLKREG_mb_Info_write_enable6_mask                                   (0x01000000)
#define  CODEBLKREG_mb_Info_intrablks_flg_mask                                   (0x00F80000)
#define  CODEBLKREG_mb_Info_write_enable5_mask                                   (0x00040000)
#define  CODEBLKREG_mb_Info_ac_pred_mask                                         (0x00020000)
#define  CODEBLKREG_mb_Info_write_enable4_mask                                   (0x00010000)
#define  CODEBLKREG_mb_Info_dc_pred_dir_mask                                     (0x0000FC00)
#define  CODEBLKREG_mb_Info_write_enable3_mask                                   (0x00000200)
#define  CODEBLKREG_mb_Info_mbtype_mask                                          (0x000001E0)
#define  CODEBLKREG_mb_Info_write_enable2_mask                                   (0x00000010)
#define  CODEBLKREG_mb_Info_intra_c_pred_mode_mask                               (0x0000000C)
#define  CODEBLKREG_mb_Info_write_enable1_mask                                   (0x00000002)
#define  CODEBLKREG_mb_Info_field_mb_mask                                        (0x00000001)
#define  CODEBLKREG_mb_Info_write_enable9(data)                                  (0x80000000&((data)<<31))
#define  CODEBLKREG_mb_Info_vp9_lossless(data)                                   (0x40000000&((data)<<30))
#define  CODEBLKREG_mb_Info_write_enable8(data)                                  (0x20000000&((data)<<29))
#define  CODEBLKREG_mb_Info_vp6_ref_frame(data)                                  (0x18000000&((data)<<27))
#define  CODEBLKREG_mb_Info_write_enable7(data)                                  (0x04000000&((data)<<26))
#define  CODEBLKREG_mb_Info_mb_pattern(data)                                     (0x02000000&((data)<<25))
#define  CODEBLKREG_mb_Info_write_enable6(data)                                  (0x01000000&((data)<<24))
#define  CODEBLKREG_mb_Info_intrablks_flg(data)                                  (0x00F80000&((data)<<19))
#define  CODEBLKREG_mb_Info_write_enable5(data)                                  (0x00040000&((data)<<18))
#define  CODEBLKREG_mb_Info_ac_pred(data)                                        (0x00020000&((data)<<17))
#define  CODEBLKREG_mb_Info_write_enable4(data)                                  (0x00010000&((data)<<16))
#define  CODEBLKREG_mb_Info_dc_pred_dir(data)                                    (0x0000FC00&((data)<<10))
#define  CODEBLKREG_mb_Info_write_enable3(data)                                  (0x00000200&((data)<<9))
#define  CODEBLKREG_mb_Info_mbtype(data)                                         (0x000001E0&((data)<<5))
#define  CODEBLKREG_mb_Info_write_enable2(data)                                  (0x00000010&((data)<<4))
#define  CODEBLKREG_mb_Info_intra_c_pred_mode(data)                              (0x0000000C&((data)<<2))
#define  CODEBLKREG_mb_Info_write_enable1(data)                                  (0x00000002&((data)<<1))
#define  CODEBLKREG_mb_Info_field_mb(data)                                       (0x00000001&(data))
#define  CODEBLKREG_mb_Info_get_write_enable9(data)                              ((0x80000000&(data))>>31)
#define  CODEBLKREG_mb_Info_get_vp9_lossless(data)                               ((0x40000000&(data))>>30)
#define  CODEBLKREG_mb_Info_get_write_enable8(data)                              ((0x20000000&(data))>>29)
#define  CODEBLKREG_mb_Info_get_vp6_ref_frame(data)                              ((0x18000000&(data))>>27)
#define  CODEBLKREG_mb_Info_get_write_enable7(data)                              ((0x04000000&(data))>>26)
#define  CODEBLKREG_mb_Info_get_mb_pattern(data)                                 ((0x02000000&(data))>>25)
#define  CODEBLKREG_mb_Info_get_write_enable6(data)                              ((0x01000000&(data))>>24)
#define  CODEBLKREG_mb_Info_get_intrablks_flg(data)                              ((0x00F80000&(data))>>19)
#define  CODEBLKREG_mb_Info_get_write_enable5(data)                              ((0x00040000&(data))>>18)
#define  CODEBLKREG_mb_Info_get_ac_pred(data)                                    ((0x00020000&(data))>>17)
#define  CODEBLKREG_mb_Info_get_write_enable4(data)                              ((0x00010000&(data))>>16)
#define  CODEBLKREG_mb_Info_get_dc_pred_dir(data)                                ((0x0000FC00&(data))>>10)
#define  CODEBLKREG_mb_Info_get_write_enable3(data)                              ((0x00000200&(data))>>9)
#define  CODEBLKREG_mb_Info_get_mbtype(data)                                     ((0x000001E0&(data))>>5)
#define  CODEBLKREG_mb_Info_get_write_enable2(data)                              ((0x00000010&(data))>>4)
#define  CODEBLKREG_mb_Info_get_intra_c_pred_mode(data)                          ((0x0000000C&(data))>>2)
#define  CODEBLKREG_mb_Info_get_write_enable1(data)                              ((0x00000002&(data))>>1)
#define  CODEBLKREG_mb_Info_get_field_mb(data)                                   (0x00000001&(data))

#define  CODEBLKREG_sde_p3_hevc                                                 0x1800E090
#define  CODEBLKREG_sde_p3_hevc_reg_addr                                         "0xB800E090"
#define  CODEBLKREG_sde_p3_hevc_reg                                              0xB800E090
#define  CODEBLKREG_sde_p3_hevc_inst_addr                                        "0x0012"
#define  set_CODEBLKREG_sde_p3_hevc_reg(data)                                    (*((volatile unsigned int*)CODEBLKREG_sde_p3_hevc_reg)=data)
#define  get_CODEBLKREG_sde_p3_hevc_reg                                          (*((volatile unsigned int*)CODEBLKREG_sde_p3_hevc_reg))
#define  CODEBLKREG_sde_p3_hevc_av1_delta_q_res_bit_shift                        (30)
#define  CODEBLKREG_sde_p3_hevc_av1_delta_lf_res_bit_shift                       (28)
#define  CODEBLKREG_sde_p3_hevc_av1_lossless_shift                               (20)
#define  CODEBLKREG_sde_p3_hevc_dec_ctb_max_cycle_shift                          (12)
#define  CODEBLKREG_sde_p3_hevc_dec_ctb_cycle_chken_shift                        (11)
#define  CODEBLKREG_sde_p3_hevc_pcm_bit_depth_chroma_shift                       (7)
#define  CODEBLKREG_sde_p3_hevc_pcm_bit_depth_luma_shift                         (3)
#define  CODEBLKREG_sde_p3_hevc_transform_skip_enabled_flag_shift                (2)
#define  CODEBLKREG_sde_p3_hevc_transquant_bypass_enable_flag_shift              (1)
#define  CODEBLKREG_sde_p3_hevc_sign_data_hiding_flag_shift                      (0)
#define  CODEBLKREG_sde_p3_hevc_av1_delta_q_res_bit_mask                         (0xC0000000)
#define  CODEBLKREG_sde_p3_hevc_av1_delta_lf_res_bit_mask                        (0x30000000)
#define  CODEBLKREG_sde_p3_hevc_av1_lossless_mask                                (0x0FF00000)
#define  CODEBLKREG_sde_p3_hevc_dec_ctb_max_cycle_mask                           (0x000FF000)
#define  CODEBLKREG_sde_p3_hevc_dec_ctb_cycle_chken_mask                         (0x00000800)
#define  CODEBLKREG_sde_p3_hevc_pcm_bit_depth_chroma_mask                        (0x00000780)
#define  CODEBLKREG_sde_p3_hevc_pcm_bit_depth_luma_mask                          (0x00000078)
#define  CODEBLKREG_sde_p3_hevc_transform_skip_enabled_flag_mask                 (0x00000004)
#define  CODEBLKREG_sde_p3_hevc_transquant_bypass_enable_flag_mask               (0x00000002)
#define  CODEBLKREG_sde_p3_hevc_sign_data_hiding_flag_mask                       (0x00000001)
#define  CODEBLKREG_sde_p3_hevc_av1_delta_q_res_bit(data)                        (0xC0000000&((data)<<30))
#define  CODEBLKREG_sde_p3_hevc_av1_delta_lf_res_bit(data)                       (0x30000000&((data)<<28))
#define  CODEBLKREG_sde_p3_hevc_av1_lossless(data)                               (0x0FF00000&((data)<<20))
#define  CODEBLKREG_sde_p3_hevc_dec_ctb_max_cycle(data)                          (0x000FF000&((data)<<12))
#define  CODEBLKREG_sde_p3_hevc_dec_ctb_cycle_chken(data)                        (0x00000800&((data)<<11))
#define  CODEBLKREG_sde_p3_hevc_pcm_bit_depth_chroma(data)                       (0x00000780&((data)<<7))
#define  CODEBLKREG_sde_p3_hevc_pcm_bit_depth_luma(data)                         (0x00000078&((data)<<3))
#define  CODEBLKREG_sde_p3_hevc_transform_skip_enabled_flag(data)                (0x00000004&((data)<<2))
#define  CODEBLKREG_sde_p3_hevc_transquant_bypass_enable_flag(data)              (0x00000002&((data)<<1))
#define  CODEBLKREG_sde_p3_hevc_sign_data_hiding_flag(data)                      (0x00000001&(data))
#define  CODEBLKREG_sde_p3_hevc_get_av1_delta_q_res_bit(data)                    ((0xC0000000&(data))>>30)
#define  CODEBLKREG_sde_p3_hevc_get_av1_delta_lf_res_bit(data)                   ((0x30000000&(data))>>28)
#define  CODEBLKREG_sde_p3_hevc_get_av1_lossless(data)                           ((0x0FF00000&(data))>>20)
#define  CODEBLKREG_sde_p3_hevc_get_dec_ctb_max_cycle(data)                      ((0x000FF000&(data))>>12)
#define  CODEBLKREG_sde_p3_hevc_get_dec_ctb_cycle_chken(data)                    ((0x00000800&(data))>>11)
#define  CODEBLKREG_sde_p3_hevc_get_pcm_bit_depth_chroma(data)                   ((0x00000780&(data))>>7)
#define  CODEBLKREG_sde_p3_hevc_get_pcm_bit_depth_luma(data)                     ((0x00000078&(data))>>3)
#define  CODEBLKREG_sde_p3_hevc_get_transform_skip_enabled_flag(data)            ((0x00000004&(data))>>2)
#define  CODEBLKREG_sde_p3_hevc_get_transquant_bypass_enable_flag(data)          ((0x00000002&(data))>>1)
#define  CODEBLKREG_sde_p3_hevc_get_sign_data_hiding_flag(data)                  (0x00000001&(data))

#define  CODEBLKREG_hevc_ldqmem                                                 0x1800E094
#define  CODEBLKREG_hevc_ldqmem_reg_addr                                         "0xB800E094"
#define  CODEBLKREG_hevc_ldqmem_reg                                              0xB800E094
#define  CODEBLKREG_hevc_ldqmem_inst_addr                                        "0x0013"
#define  set_CODEBLKREG_hevc_ldqmem_reg(data)                                    (*((volatile unsigned int*)CODEBLKREG_hevc_ldqmem_reg)=data)
#define  get_CODEBLKREG_hevc_ldqmem_reg                                          (*((volatile unsigned int*)CODEBLKREG_hevc_ldqmem_reg))
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_2_shift                              (24)
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_1_shift                              (16)
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_0_shift                              (8)
#define  CODEBLKREG_hevc_ldqmem_start_trigger_shift                              (6)
#define  CODEBLKREG_hevc_ldqmem_group_cnt_shift                                  (3)
#define  CODEBLKREG_hevc_ldqmem_start_group_shift                                (0)
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_2_mask                               (0xFF000000)
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_1_mask                               (0x00FF0000)
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_0_mask                               (0x0000FF00)
#define  CODEBLKREG_hevc_ldqmem_start_trigger_mask                               (0x00000040)
#define  CODEBLKREG_hevc_ldqmem_group_cnt_mask                                   (0x00000038)
#define  CODEBLKREG_hevc_ldqmem_start_group_mask                                 (0x00000007)
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_2(data)                              (0xFF000000&((data)<<24))
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_1(data)                              (0x00FF0000&((data)<<16))
#define  CODEBLKREG_hevc_ldqmem_qmem_offset_0(data)                              (0x0000FF00&((data)<<8))
#define  CODEBLKREG_hevc_ldqmem_start_trigger(data)                              (0x00000040&((data)<<6))
#define  CODEBLKREG_hevc_ldqmem_group_cnt(data)                                  (0x00000038&((data)<<3))
#define  CODEBLKREG_hevc_ldqmem_start_group(data)                                (0x00000007&(data))
#define  CODEBLKREG_hevc_ldqmem_get_qmem_offset_2(data)                          ((0xFF000000&(data))>>24)
#define  CODEBLKREG_hevc_ldqmem_get_qmem_offset_1(data)                          ((0x00FF0000&(data))>>16)
#define  CODEBLKREG_hevc_ldqmem_get_qmem_offset_0(data)                          ((0x0000FF00&(data))>>8)
#define  CODEBLKREG_hevc_ldqmem_get_start_trigger(data)                          ((0x00000040&(data))>>6)
#define  CODEBLKREG_hevc_ldqmem_get_group_cnt(data)                              ((0x00000038&(data))>>3)
#define  CODEBLKREG_hevc_ldqmem_get_start_group(data)                            (0x00000007&(data))

#define  CODEBLKREG_p3_vp9_pic_level                                            0x1800E260
#define  CODEBLKREG_p3_vp9_pic_level_reg_addr                                    "0xB800E260"
#define  CODEBLKREG_p3_vp9_pic_level_reg                                         0xB800E260
#define  CODEBLKREG_p3_vp9_pic_level_inst_addr                                   "0x0014"
#define  set_CODEBLKREG_p3_vp9_pic_level_reg(data)                               (*((volatile unsigned int*)CODEBLKREG_p3_vp9_pic_level_reg)=data)
#define  get_CODEBLKREG_p3_vp9_pic_level_reg                                     (*((volatile unsigned int*)CODEBLKREG_p3_vp9_pic_level_reg))
#define  CODEBLKREG_p3_vp9_pic_level_reference_mode_shift                        (30)
#define  CODEBLKREG_p3_vp9_pic_level_seg_enable_shift                            (29)
#define  CODEBLKREG_p3_vp9_pic_level_seg_update_map_shift                        (28)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_0_mask_skip_shift                    (27)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_1_mask_skip_shift                    (26)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_2_mask_skip_shift                    (25)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_3_mask_skip_shift                    (24)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_4_mask_skip_shift                    (23)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_5_mask_skip_shift                    (22)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_6_mask_skip_shift                    (21)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_7_mask_skip_shift                    (20)
#define  CODEBLKREG_p3_vp9_pic_level_subsampling_x_shift                         (19)
#define  CODEBLKREG_p3_vp9_pic_level_subsampling_y_shift                         (18)
#define  CODEBLKREG_p3_vp9_pic_level_intra_only_shift                            (17)
#define  CODEBLKREG_p3_vp9_pic_level_interp_filter_shift                         (14)
#define  CODEBLKREG_p3_vp9_pic_level_ref_frame_sign_bias_shift                   (10)
#define  CODEBLKREG_p3_vp9_pic_level_tx_mode_shift                               (7)
#define  CODEBLKREG_p3_vp9_pic_level_comp_var_ref_1_shift                        (5)
#define  CODEBLKREG_p3_vp9_pic_level_comp_var_ref_0_shift                        (3)
#define  CODEBLKREG_p3_vp9_pic_level_comp_fixed_ref_shift                        (1)
#define  CODEBLKREG_p3_vp9_pic_level_vp9_bit_high_shift                          (0)
#define  CODEBLKREG_p3_vp9_pic_level_reference_mode_mask                         (0xC0000000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_enable_mask                             (0x20000000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_update_map_mask                         (0x10000000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_0_mask_skip_mask                     (0x08000000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_1_mask_skip_mask                     (0x04000000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_2_mask_skip_mask                     (0x02000000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_3_mask_skip_mask                     (0x01000000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_4_mask_skip_mask                     (0x00800000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_5_mask_skip_mask                     (0x00400000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_6_mask_skip_mask                     (0x00200000)
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_7_mask_skip_mask                     (0x00100000)
#define  CODEBLKREG_p3_vp9_pic_level_subsampling_x_mask                          (0x00080000)
#define  CODEBLKREG_p3_vp9_pic_level_subsampling_y_mask                          (0x00040000)
#define  CODEBLKREG_p3_vp9_pic_level_intra_only_mask                             (0x00020000)
#define  CODEBLKREG_p3_vp9_pic_level_interp_filter_mask                          (0x0001C000)
#define  CODEBLKREG_p3_vp9_pic_level_ref_frame_sign_bias_mask                    (0x00003C00)
#define  CODEBLKREG_p3_vp9_pic_level_tx_mode_mask                                (0x00000380)
#define  CODEBLKREG_p3_vp9_pic_level_comp_var_ref_1_mask                         (0x00000060)
#define  CODEBLKREG_p3_vp9_pic_level_comp_var_ref_0_mask                         (0x00000018)
#define  CODEBLKREG_p3_vp9_pic_level_comp_fixed_ref_mask                         (0x00000006)
#define  CODEBLKREG_p3_vp9_pic_level_vp9_bit_high_mask                           (0x00000001)
#define  CODEBLKREG_p3_vp9_pic_level_reference_mode(data)                        (0xC0000000&((data)<<30))
#define  CODEBLKREG_p3_vp9_pic_level_seg_enable(data)                            (0x20000000&((data)<<29))
#define  CODEBLKREG_p3_vp9_pic_level_seg_update_map(data)                        (0x10000000&((data)<<28))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_0_mask_skip(data)                    (0x08000000&((data)<<27))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_1_mask_skip(data)                    (0x04000000&((data)<<26))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_2_mask_skip(data)                    (0x02000000&((data)<<25))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_3_mask_skip(data)                    (0x01000000&((data)<<24))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_4_mask_skip(data)                    (0x00800000&((data)<<23))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_5_mask_skip(data)                    (0x00400000&((data)<<22))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_6_mask_skip(data)                    (0x00200000&((data)<<21))
#define  CODEBLKREG_p3_vp9_pic_level_seg_id_7_mask_skip(data)                    (0x00100000&((data)<<20))
#define  CODEBLKREG_p3_vp9_pic_level_subsampling_x(data)                         (0x00080000&((data)<<19))
#define  CODEBLKREG_p3_vp9_pic_level_subsampling_y(data)                         (0x00040000&((data)<<18))
#define  CODEBLKREG_p3_vp9_pic_level_intra_only(data)                            (0x00020000&((data)<<17))
#define  CODEBLKREG_p3_vp9_pic_level_interp_filter(data)                         (0x0001C000&((data)<<14))
#define  CODEBLKREG_p3_vp9_pic_level_ref_frame_sign_bias(data)                   (0x00003C00&((data)<<10))
#define  CODEBLKREG_p3_vp9_pic_level_tx_mode(data)                               (0x00000380&((data)<<7))
#define  CODEBLKREG_p3_vp9_pic_level_comp_var_ref_1(data)                        (0x00000060&((data)<<5))
#define  CODEBLKREG_p3_vp9_pic_level_comp_var_ref_0(data)                        (0x00000018&((data)<<3))
#define  CODEBLKREG_p3_vp9_pic_level_comp_fixed_ref(data)                        (0x00000006&((data)<<1))
#define  CODEBLKREG_p3_vp9_pic_level_vp9_bit_high(data)                          (0x00000001&(data))
#define  CODEBLKREG_p3_vp9_pic_level_get_reference_mode(data)                    ((0xC0000000&(data))>>30)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_enable(data)                        ((0x20000000&(data))>>29)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_update_map(data)                    ((0x10000000&(data))>>28)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_0_mask_skip(data)                ((0x08000000&(data))>>27)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_1_mask_skip(data)                ((0x04000000&(data))>>26)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_2_mask_skip(data)                ((0x02000000&(data))>>25)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_3_mask_skip(data)                ((0x01000000&(data))>>24)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_4_mask_skip(data)                ((0x00800000&(data))>>23)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_5_mask_skip(data)                ((0x00400000&(data))>>22)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_6_mask_skip(data)                ((0x00200000&(data))>>21)
#define  CODEBLKREG_p3_vp9_pic_level_get_seg_id_7_mask_skip(data)                ((0x00100000&(data))>>20)
#define  CODEBLKREG_p3_vp9_pic_level_get_subsampling_x(data)                     ((0x00080000&(data))>>19)
#define  CODEBLKREG_p3_vp9_pic_level_get_subsampling_y(data)                     ((0x00040000&(data))>>18)
#define  CODEBLKREG_p3_vp9_pic_level_get_intra_only(data)                        ((0x00020000&(data))>>17)
#define  CODEBLKREG_p3_vp9_pic_level_get_interp_filter(data)                     ((0x0001C000&(data))>>14)
#define  CODEBLKREG_p3_vp9_pic_level_get_ref_frame_sign_bias(data)               ((0x00003C00&(data))>>10)
#define  CODEBLKREG_p3_vp9_pic_level_get_tx_mode(data)                           ((0x00000380&(data))>>7)
#define  CODEBLKREG_p3_vp9_pic_level_get_comp_var_ref_1(data)                    ((0x00000060&(data))>>5)
#define  CODEBLKREG_p3_vp9_pic_level_get_comp_var_ref_0(data)                    ((0x00000018&(data))>>3)
#define  CODEBLKREG_p3_vp9_pic_level_get_comp_fixed_ref(data)                    ((0x00000006&(data))>>1)
#define  CODEBLKREG_p3_vp9_pic_level_get_vp9_bit_high(data)                      (0x00000001&(data))

#define  CODEBLKREG_p3_vp9_frm_level                                            0x1800E264
#define  CODEBLKREG_p3_vp9_frm_level_reg_addr                                    "0xB800E264"
#define  CODEBLKREG_p3_vp9_frm_level_reg                                         0xB800E264
#define  CODEBLKREG_p3_vp9_frm_level_inst_addr                                   "0x0015"
#define  set_CODEBLKREG_p3_vp9_frm_level_reg(data)                               (*((volatile unsigned int*)CODEBLKREG_p3_vp9_frm_level_reg)=data)
#define  get_CODEBLKREG_p3_vp9_frm_level_reg                                     (*((volatile unsigned int*)CODEBLKREG_p3_vp9_frm_level_reg))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id0_data_ref_frame_shift                (29)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id1_data_ref_frame_shift                (26)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id2_data_ref_frame_shift                (23)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id3_data_ref_frame_shift                (20)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id4_data_ref_frame_shift                (17)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id5_data_ref_frame_shift                (14)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id6_data_ref_frame_shift                (11)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id7_data_ref_frame_shift                (8)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id0_mask_ref_frame_shift                (7)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id1_mask_ref_frame_shift                (6)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id2_mask_ref_frame_shift                (5)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id3_mask_ref_frame_shift                (4)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id4_mask_ref_frame_shift                (3)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id5_mask_ref_frame_shift                (2)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id6_mask_ref_frame_shift                (1)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id7_mask_ref_frame_shift                (0)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id0_data_ref_frame_mask                 (0xE0000000)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id1_data_ref_frame_mask                 (0x1C000000)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id2_data_ref_frame_mask                 (0x03800000)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id3_data_ref_frame_mask                 (0x00700000)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id4_data_ref_frame_mask                 (0x000E0000)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id5_data_ref_frame_mask                 (0x0001C000)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id6_data_ref_frame_mask                 (0x00003800)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id7_data_ref_frame_mask                 (0x00000700)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id0_mask_ref_frame_mask                 (0x00000080)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id1_mask_ref_frame_mask                 (0x00000040)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id2_mask_ref_frame_mask                 (0x00000020)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id3_mask_ref_frame_mask                 (0x00000010)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id4_mask_ref_frame_mask                 (0x00000008)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id5_mask_ref_frame_mask                 (0x00000004)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id6_mask_ref_frame_mask                 (0x00000002)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id7_mask_ref_frame_mask                 (0x00000001)
#define  CODEBLKREG_p3_vp9_frm_level_seg_id0_data_ref_frame(data)                (0xE0000000&((data)<<29))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id1_data_ref_frame(data)                (0x1C000000&((data)<<26))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id2_data_ref_frame(data)                (0x03800000&((data)<<23))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id3_data_ref_frame(data)                (0x00700000&((data)<<20))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id4_data_ref_frame(data)                (0x000E0000&((data)<<17))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id5_data_ref_frame(data)                (0x0001C000&((data)<<14))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id6_data_ref_frame(data)                (0x00003800&((data)<<11))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id7_data_ref_frame(data)                (0x00000700&((data)<<8))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id0_mask_ref_frame(data)                (0x00000080&((data)<<7))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id1_mask_ref_frame(data)                (0x00000040&((data)<<6))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id2_mask_ref_frame(data)                (0x00000020&((data)<<5))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id3_mask_ref_frame(data)                (0x00000010&((data)<<4))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id4_mask_ref_frame(data)                (0x00000008&((data)<<3))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id5_mask_ref_frame(data)                (0x00000004&((data)<<2))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id6_mask_ref_frame(data)                (0x00000002&((data)<<1))
#define  CODEBLKREG_p3_vp9_frm_level_seg_id7_mask_ref_frame(data)                (0x00000001&(data))
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id0_data_ref_frame(data)            ((0xE0000000&(data))>>29)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id1_data_ref_frame(data)            ((0x1C000000&(data))>>26)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id2_data_ref_frame(data)            ((0x03800000&(data))>>23)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id3_data_ref_frame(data)            ((0x00700000&(data))>>20)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id4_data_ref_frame(data)            ((0x000E0000&(data))>>17)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id5_data_ref_frame(data)            ((0x0001C000&(data))>>14)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id6_data_ref_frame(data)            ((0x00003800&(data))>>11)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id7_data_ref_frame(data)            ((0x00000700&(data))>>8)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id0_mask_ref_frame(data)            ((0x00000080&(data))>>7)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id1_mask_ref_frame(data)            ((0x00000040&(data))>>6)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id2_mask_ref_frame(data)            ((0x00000020&(data))>>5)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id3_mask_ref_frame(data)            ((0x00000010&(data))>>4)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id4_mask_ref_frame(data)            ((0x00000008&(data))>>3)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id5_mask_ref_frame(data)            ((0x00000004&(data))>>2)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id6_mask_ref_frame(data)            ((0x00000002&(data))>>1)
#define  CODEBLKREG_p3_vp9_frm_level_get_seg_id7_mask_ref_frame(data)            (0x00000001&(data))

#define  CODEBLKREG_avs2_sde                                                    0x1800E3C0
#define  CODEBLKREG_avs2_sde_reg_addr                                            "0xB800E3C0"
#define  CODEBLKREG_avs2_sde_reg                                                 0xB800E3C0
#define  CODEBLKREG_avs2_sde_inst_addr                                           "0x0016"
#define  set_CODEBLKREG_avs2_sde_reg(data)                                       (*((volatile unsigned int*)CODEBLKREG_avs2_sde_reg)=data)
#define  get_CODEBLKREG_avs2_sde_reg                                             (*((volatile unsigned int*)CODEBLKREG_avs2_sde_reg))
#define  CODEBLKREG_avs2_sde_av1_frame_y_restoration_type_shift                  (22)
#define  CODEBLKREG_avs2_sde_av1_frame_u_restoration_type_shift                  (20)
#define  CODEBLKREG_avs2_sde_av1_frame_v_restoration_type_shift                  (18)
#define  CODEBLKREG_avs2_sde_cdef_bits_shift                                     (16)
#define  CODEBLKREG_avs2_sde_allow_intrabc_shift                                 (15)
#define  CODEBLKREG_avs2_sde_av1_scan_table_load_trig_shift                      (14)
#define  CODEBLKREG_avs2_sde_using_qmatrix_y_shift                               (13)
#define  CODEBLKREG_avs2_sde_allow_screen_content_tools_shift                    (12)
#define  CODEBLKREG_avs2_sde_allow_interintra_compound_shift                     (11)
#define  CODEBLKREG_avs2_sde_allow_masked_compound_shift                         (10)
#define  CODEBLKREG_avs2_sde_secondarytransformenableflag_shift                  (9)
#define  CODEBLKREG_avs2_sde_refpicnum_shift                                     (6)
#define  CODEBLKREG_avs2_sde_nsipenableflag_shift                                (5)
#define  CODEBLKREG_avs2_sde_nsqtenableflag_shift                                (4)
#define  CODEBLKREG_avs2_sde_asymmetricmotionpartitionsenableflag_shift          (3)
#define  CODEBLKREG_avs2_sde_weightedskipenableflag_shift                        (2)
#define  CODEBLKREG_avs2_sde_dualhypothesispredictionenableflag_shift            (1)
#define  CODEBLKREG_avs2_sde_multihypothesisskipenableflag_shift                 (0)
#define  CODEBLKREG_avs2_sde_av1_frame_y_restoration_type_mask                   (0x00C00000)
#define  CODEBLKREG_avs2_sde_av1_frame_u_restoration_type_mask                   (0x00300000)
#define  CODEBLKREG_avs2_sde_av1_frame_v_restoration_type_mask                   (0x000C0000)
#define  CODEBLKREG_avs2_sde_cdef_bits_mask                                      (0x00030000)
#define  CODEBLKREG_avs2_sde_allow_intrabc_mask                                  (0x00008000)
#define  CODEBLKREG_avs2_sde_av1_scan_table_load_trig_mask                       (0x00004000)
#define  CODEBLKREG_avs2_sde_using_qmatrix_y_mask                                (0x00002000)
#define  CODEBLKREG_avs2_sde_allow_screen_content_tools_mask                     (0x00001000)
#define  CODEBLKREG_avs2_sde_allow_interintra_compound_mask                      (0x00000800)
#define  CODEBLKREG_avs2_sde_allow_masked_compound_mask                          (0x00000400)
#define  CODEBLKREG_avs2_sde_secondarytransformenableflag_mask                   (0x00000200)
#define  CODEBLKREG_avs2_sde_refpicnum_mask                                      (0x000001C0)
#define  CODEBLKREG_avs2_sde_nsipenableflag_mask                                 (0x00000020)
#define  CODEBLKREG_avs2_sde_nsqtenableflag_mask                                 (0x00000010)
#define  CODEBLKREG_avs2_sde_asymmetricmotionpartitionsenableflag_mask           (0x00000008)
#define  CODEBLKREG_avs2_sde_weightedskipenableflag_mask                         (0x00000004)
#define  CODEBLKREG_avs2_sde_dualhypothesispredictionenableflag_mask             (0x00000002)
#define  CODEBLKREG_avs2_sde_multihypothesisskipenableflag_mask                  (0x00000001)
#define  CODEBLKREG_avs2_sde_av1_frame_y_restoration_type(data)                  (0x00C00000&((data)<<22))
#define  CODEBLKREG_avs2_sde_av1_frame_u_restoration_type(data)                  (0x00300000&((data)<<20))
#define  CODEBLKREG_avs2_sde_av1_frame_v_restoration_type(data)                  (0x000C0000&((data)<<18))
#define  CODEBLKREG_avs2_sde_cdef_bits(data)                                     (0x00030000&((data)<<16))
#define  CODEBLKREG_avs2_sde_allow_intrabc(data)                                 (0x00008000&((data)<<15))
#define  CODEBLKREG_avs2_sde_av1_scan_table_load_trig(data)                      (0x00004000&((data)<<14))
#define  CODEBLKREG_avs2_sde_using_qmatrix_y(data)                               (0x00002000&((data)<<13))
#define  CODEBLKREG_avs2_sde_allow_screen_content_tools(data)                    (0x00001000&((data)<<12))
#define  CODEBLKREG_avs2_sde_allow_interintra_compound(data)                     (0x00000800&((data)<<11))
#define  CODEBLKREG_avs2_sde_allow_masked_compound(data)                         (0x00000400&((data)<<10))
#define  CODEBLKREG_avs2_sde_secondarytransformenableflag(data)                  (0x00000200&((data)<<9))
#define  CODEBLKREG_avs2_sde_refpicnum(data)                                     (0x000001C0&((data)<<6))
#define  CODEBLKREG_avs2_sde_nsipenableflag(data)                                (0x00000020&((data)<<5))
#define  CODEBLKREG_avs2_sde_nsqtenableflag(data)                                (0x00000010&((data)<<4))
#define  CODEBLKREG_avs2_sde_asymmetricmotionpartitionsenableflag(data)          (0x00000008&((data)<<3))
#define  CODEBLKREG_avs2_sde_weightedskipenableflag(data)                        (0x00000004&((data)<<2))
#define  CODEBLKREG_avs2_sde_dualhypothesispredictionenableflag(data)            (0x00000002&((data)<<1))
#define  CODEBLKREG_avs2_sde_multihypothesisskipenableflag(data)                 (0x00000001&(data))
#define  CODEBLKREG_avs2_sde_get_av1_frame_y_restoration_type(data)              ((0x00C00000&(data))>>22)
#define  CODEBLKREG_avs2_sde_get_av1_frame_u_restoration_type(data)              ((0x00300000&(data))>>20)
#define  CODEBLKREG_avs2_sde_get_av1_frame_v_restoration_type(data)              ((0x000C0000&(data))>>18)
#define  CODEBLKREG_avs2_sde_get_cdef_bits(data)                                 ((0x00030000&(data))>>16)
#define  CODEBLKREG_avs2_sde_get_allow_intrabc(data)                             ((0x00008000&(data))>>15)
#define  CODEBLKREG_avs2_sde_get_av1_scan_table_load_trig(data)                  ((0x00004000&(data))>>14)
#define  CODEBLKREG_avs2_sde_get_using_qmatrix_y(data)                           ((0x00002000&(data))>>13)
#define  CODEBLKREG_avs2_sde_get_allow_screen_content_tools(data)                ((0x00001000&(data))>>12)
#define  CODEBLKREG_avs2_sde_get_allow_interintra_compound(data)                 ((0x00000800&(data))>>11)
#define  CODEBLKREG_avs2_sde_get_allow_masked_compound(data)                     ((0x00000400&(data))>>10)
#define  CODEBLKREG_avs2_sde_get_secondarytransformenableflag(data)              ((0x00000200&(data))>>9)
#define  CODEBLKREG_avs2_sde_get_refpicnum(data)                                 ((0x000001C0&(data))>>6)
#define  CODEBLKREG_avs2_sde_get_nsipenableflag(data)                            ((0x00000020&(data))>>5)
#define  CODEBLKREG_avs2_sde_get_nsqtenableflag(data)                            ((0x00000010&(data))>>4)
#define  CODEBLKREG_avs2_sde_get_asymmetricmotionpartitionsenableflag(data)      ((0x00000008&(data))>>3)
#define  CODEBLKREG_avs2_sde_get_weightedskipenableflag(data)                    ((0x00000004&(data))>>2)
#define  CODEBLKREG_avs2_sde_get_dualhypothesispredictionenableflag(data)        ((0x00000002&(data))>>1)
#define  CODEBLKREG_avs2_sde_get_multihypothesisskipenableflag(data)             (0x00000001&(data))

#define  CODEBLKREG_av1_p3_ref                                                  0x1800E194
#define  CODEBLKREG_av1_p3_ref_reg_addr                                          "0xB800E194"
#define  CODEBLKREG_av1_p3_ref_reg                                               0xB800E194
#define  CODEBLKREG_av1_p3_ref_inst_addr                                         "0x0017"
#define  set_CODEBLKREG_av1_p3_ref_reg(data)                                     (*((volatile unsigned int*)CODEBLKREG_av1_p3_ref_reg)=data)
#define  get_CODEBLKREG_av1_p3_ref_reg                                           (*((volatile unsigned int*)CODEBLKREG_av1_p3_ref_reg))
#define  CODEBLKREG_av1_p3_ref_ref_frame_sign_bias_shift                         (21)
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_2_shift                              (18)
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_1_shift                              (15)
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_0_shift                              (12)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_3_shift                              (9)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_2_shift                              (6)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_1_shift                              (3)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_0_shift                              (0)
#define  CODEBLKREG_av1_p3_ref_ref_frame_sign_bias_mask                          (0x1FE00000)
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_2_mask                               (0x001C0000)
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_1_mask                               (0x00038000)
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_0_mask                               (0x00007000)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_3_mask                               (0x00000E00)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_2_mask                               (0x000001C0)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_1_mask                               (0x00000038)
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_0_mask                               (0x00000007)
#define  CODEBLKREG_av1_p3_ref_ref_frame_sign_bias(data)                         (0x1FE00000&((data)<<21))
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_2(data)                              (0x001C0000&((data)<<18))
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_1(data)                              (0x00038000&((data)<<15))
#define  CODEBLKREG_av1_p3_ref_comp_bwd_ref_0(data)                              (0x00007000&((data)<<12))
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_3(data)                              (0x00000E00&((data)<<9))
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_2(data)                              (0x000001C0&((data)<<6))
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_1(data)                              (0x00000038&((data)<<3))
#define  CODEBLKREG_av1_p3_ref_comp_fwd_ref_0(data)                              (0x00000007&(data))
#define  CODEBLKREG_av1_p3_ref_get_ref_frame_sign_bias(data)                     ((0x1FE00000&(data))>>21)
#define  CODEBLKREG_av1_p3_ref_get_comp_bwd_ref_2(data)                          ((0x001C0000&(data))>>18)
#define  CODEBLKREG_av1_p3_ref_get_comp_bwd_ref_1(data)                          ((0x00038000&(data))>>15)
#define  CODEBLKREG_av1_p3_ref_get_comp_bwd_ref_0(data)                          ((0x00007000&(data))>>12)
#define  CODEBLKREG_av1_p3_ref_get_comp_fwd_ref_3(data)                          ((0x00000E00&(data))>>9)
#define  CODEBLKREG_av1_p3_ref_get_comp_fwd_ref_2(data)                          ((0x000001C0&(data))>>6)
#define  CODEBLKREG_av1_p3_ref_get_comp_fwd_ref_1(data)                          ((0x00000038&(data))>>3)
#define  CODEBLKREG_av1_p3_ref_get_comp_fwd_ref_0(data)                          (0x00000007&(data))

#define  CODEBLKREG_av1_sde_ctrl0                                               0x1800E18C
#define  CODEBLKREG_av1_sde_ctrl0_reg_addr                                       "0xB800E18C"
#define  CODEBLKREG_av1_sde_ctrl0_reg                                            0xB800E18C
#define  CODEBLKREG_av1_sde_ctrl0_inst_addr                                      "0x0018"
#define  set_CODEBLKREG_av1_sde_ctrl0_reg(data)                                  (*((volatile unsigned int*)CODEBLKREG_av1_sde_ctrl0_reg)=data)
#define  get_CODEBLKREG_av1_sde_ctrl0_reg                                        (*((volatile unsigned int*)CODEBLKREG_av1_sde_ctrl0_reg))
#define  CODEBLKREG_av1_sde_ctrl0_using_qmatrix_v_shift                          (31)
#define  CODEBLKREG_av1_sde_ctrl0_using_qmatrix_u_shift                          (30)
#define  CODEBLKREG_av1_sde_ctrl0_av1_qdelta_vdc_shift                           (15)
#define  CODEBLKREG_av1_sde_ctrl0_enable_jnt_comp_shift                          (14)
#define  CODEBLKREG_av1_sde_ctrl0_enable_dual_filter_shift                       (13)
#define  CODEBLKREG_av1_sde_ctrl0_switchable_motion_mode_shift                   (12)
#define  CODEBLKREG_av1_sde_ctrl0_filter_intra_en_shift                          (11)
#define  CODEBLKREG_av1_sde_ctrl0_preskip_segid_shift                            (10)
#define  CODEBLKREG_av1_sde_ctrl0_skip_mode_flag_shift                           (9)
#define  CODEBLKREG_av1_sde_ctrl0_reduce_tx_set_used_shift                       (8)
#define  CODEBLKREG_av1_sde_ctrl0_id_globalmv_mask_shift                         (0)
#define  CODEBLKREG_av1_sde_ctrl0_using_qmatrix_v_mask                           (0x80000000)
#define  CODEBLKREG_av1_sde_ctrl0_using_qmatrix_u_mask                           (0x40000000)
#define  CODEBLKREG_av1_sde_ctrl0_av1_qdelta_vdc_mask                            (0x3FFF8000)
#define  CODEBLKREG_av1_sde_ctrl0_enable_jnt_comp_mask                           (0x00004000)
#define  CODEBLKREG_av1_sde_ctrl0_enable_dual_filter_mask                        (0x00002000)
#define  CODEBLKREG_av1_sde_ctrl0_switchable_motion_mode_mask                    (0x00001000)
#define  CODEBLKREG_av1_sde_ctrl0_filter_intra_en_mask                           (0x00000800)
#define  CODEBLKREG_av1_sde_ctrl0_preskip_segid_mask                             (0x00000400)
#define  CODEBLKREG_av1_sde_ctrl0_skip_mode_flag_mask                            (0x00000200)
#define  CODEBLKREG_av1_sde_ctrl0_reduce_tx_set_used_mask                        (0x00000100)
#define  CODEBLKREG_av1_sde_ctrl0_id_globalmv_mask_mask                          (0x000000FF)
#define  CODEBLKREG_av1_sde_ctrl0_using_qmatrix_v(data)                          (0x80000000&((data)<<31))
#define  CODEBLKREG_av1_sde_ctrl0_using_qmatrix_u(data)                          (0x40000000&((data)<<30))
#define  CODEBLKREG_av1_sde_ctrl0_av1_qdelta_vdc(data)                           (0x3FFF8000&((data)<<15))
#define  CODEBLKREG_av1_sde_ctrl0_enable_jnt_comp(data)                          (0x00004000&((data)<<14))
#define  CODEBLKREG_av1_sde_ctrl0_enable_dual_filter(data)                       (0x00002000&((data)<<13))
#define  CODEBLKREG_av1_sde_ctrl0_switchable_motion_mode(data)                   (0x00001000&((data)<<12))
#define  CODEBLKREG_av1_sde_ctrl0_filter_intra_en(data)                          (0x00000800&((data)<<11))
#define  CODEBLKREG_av1_sde_ctrl0_preskip_segid(data)                            (0x00000400&((data)<<10))
#define  CODEBLKREG_av1_sde_ctrl0_skip_mode_flag(data)                           (0x00000200&((data)<<9))
#define  CODEBLKREG_av1_sde_ctrl0_reduce_tx_set_used(data)                       (0x00000100&((data)<<8))
#define  CODEBLKREG_av1_sde_ctrl0_id_globalmv_mask(data)                         (0x000000FF&(data))
#define  CODEBLKREG_av1_sde_ctrl0_get_using_qmatrix_v(data)                      ((0x80000000&(data))>>31)
#define  CODEBLKREG_av1_sde_ctrl0_get_using_qmatrix_u(data)                      ((0x40000000&(data))>>30)
#define  CODEBLKREG_av1_sde_ctrl0_get_av1_qdelta_vdc(data)                       ((0x3FFF8000&(data))>>15)
#define  CODEBLKREG_av1_sde_ctrl0_get_enable_jnt_comp(data)                      ((0x00004000&(data))>>14)
#define  CODEBLKREG_av1_sde_ctrl0_get_enable_dual_filter(data)                   ((0x00002000&(data))>>13)
#define  CODEBLKREG_av1_sde_ctrl0_get_switchable_motion_mode(data)               ((0x00001000&(data))>>12)
#define  CODEBLKREG_av1_sde_ctrl0_get_filter_intra_en(data)                      ((0x00000800&(data))>>11)
#define  CODEBLKREG_av1_sde_ctrl0_get_preskip_segid(data)                        ((0x00000400&(data))>>10)
#define  CODEBLKREG_av1_sde_ctrl0_get_skip_mode_flag(data)                       ((0x00000200&(data))>>9)
#define  CODEBLKREG_av1_sde_ctrl0_get_reduce_tx_set_used(data)                   ((0x00000100&(data))>>8)
#define  CODEBLKREG_av1_sde_ctrl0_get_id_globalmv_mask(data)                     (0x000000FF&(data))

#define  CODEBLKREG_p3_av1_qidx0                                                0x1800E26C
#define  CODEBLKREG_p3_av1_qidx0_reg_addr                                        "0xB800E26C"
#define  CODEBLKREG_p3_av1_qidx0_reg                                             0xB800E26C
#define  CODEBLKREG_p3_av1_qidx0_inst_addr                                       "0x0019"
#define  set_CODEBLKREG_p3_av1_qidx0_reg(data)                                   (*((volatile unsigned int*)CODEBLKREG_p3_av1_qidx0_reg)=data)
#define  get_CODEBLKREG_p3_av1_qidx0_reg                                         (*((volatile unsigned int*)CODEBLKREG_p3_av1_qidx0_reg))
#define  CODEBLKREG_p3_av1_qidx0_seg_3_qindex_shift                              (24)
#define  CODEBLKREG_p3_av1_qidx0_seg_2_qindex_shift                              (16)
#define  CODEBLKREG_p3_av1_qidx0_seg_1_qindex_shift                              (8)
#define  CODEBLKREG_p3_av1_qidx0_seg_0_qindex_shift                              (0)
#define  CODEBLKREG_p3_av1_qidx0_seg_3_qindex_mask                               (0xFF000000)
#define  CODEBLKREG_p3_av1_qidx0_seg_2_qindex_mask                               (0x00FF0000)
#define  CODEBLKREG_p3_av1_qidx0_seg_1_qindex_mask                               (0x0000FF00)
#define  CODEBLKREG_p3_av1_qidx0_seg_0_qindex_mask                               (0x000000FF)
#define  CODEBLKREG_p3_av1_qidx0_seg_3_qindex(data)                              (0xFF000000&((data)<<24))
#define  CODEBLKREG_p3_av1_qidx0_seg_2_qindex(data)                              (0x00FF0000&((data)<<16))
#define  CODEBLKREG_p3_av1_qidx0_seg_1_qindex(data)                              (0x0000FF00&((data)<<8))
#define  CODEBLKREG_p3_av1_qidx0_seg_0_qindex(data)                              (0x000000FF&(data))
#define  CODEBLKREG_p3_av1_qidx0_get_seg_3_qindex(data)                          ((0xFF000000&(data))>>24)
#define  CODEBLKREG_p3_av1_qidx0_get_seg_2_qindex(data)                          ((0x00FF0000&(data))>>16)
#define  CODEBLKREG_p3_av1_qidx0_get_seg_1_qindex(data)                          ((0x0000FF00&(data))>>8)
#define  CODEBLKREG_p3_av1_qidx0_get_seg_0_qindex(data)                          (0x000000FF&(data))

#define  CODEBLKREG_p3_av1_qidx1                                                0x1800E270
#define  CODEBLKREG_p3_av1_qidx1_reg_addr                                        "0xB800E270"
#define  CODEBLKREG_p3_av1_qidx1_reg                                             0xB800E270
#define  CODEBLKREG_p3_av1_qidx1_inst_addr                                       "0x001A"
#define  set_CODEBLKREG_p3_av1_qidx1_reg(data)                                   (*((volatile unsigned int*)CODEBLKREG_p3_av1_qidx1_reg)=data)
#define  get_CODEBLKREG_p3_av1_qidx1_reg                                         (*((volatile unsigned int*)CODEBLKREG_p3_av1_qidx1_reg))
#define  CODEBLKREG_p3_av1_qidx1_seg_7_qindex_shift                              (24)
#define  CODEBLKREG_p3_av1_qidx1_seg_6_qindex_shift                              (16)
#define  CODEBLKREG_p3_av1_qidx1_seg_5_qindex_shift                              (8)
#define  CODEBLKREG_p3_av1_qidx1_seg_4_qindex_shift                              (0)
#define  CODEBLKREG_p3_av1_qidx1_seg_7_qindex_mask                               (0xFF000000)
#define  CODEBLKREG_p3_av1_qidx1_seg_6_qindex_mask                               (0x00FF0000)
#define  CODEBLKREG_p3_av1_qidx1_seg_5_qindex_mask                               (0x0000FF00)
#define  CODEBLKREG_p3_av1_qidx1_seg_4_qindex_mask                               (0x000000FF)
#define  CODEBLKREG_p3_av1_qidx1_seg_7_qindex(data)                              (0xFF000000&((data)<<24))
#define  CODEBLKREG_p3_av1_qidx1_seg_6_qindex(data)                              (0x00FF0000&((data)<<16))
#define  CODEBLKREG_p3_av1_qidx1_seg_5_qindex(data)                              (0x0000FF00&((data)<<8))
#define  CODEBLKREG_p3_av1_qidx1_seg_4_qindex(data)                              (0x000000FF&(data))
#define  CODEBLKREG_p3_av1_qidx1_get_seg_7_qindex(data)                          ((0xFF000000&(data))>>24)
#define  CODEBLKREG_p3_av1_qidx1_get_seg_6_qindex(data)                          ((0x00FF0000&(data))>>16)
#define  CODEBLKREG_p3_av1_qidx1_get_seg_5_qindex(data)                          ((0x0000FF00&(data))>>8)
#define  CODEBLKREG_p3_av1_qidx1_get_seg_4_qindex(data)                          (0x000000FF&(data))

#define  CODEBLKREG_p3_av1_ctrl1                                                0x1800E278
#define  CODEBLKREG_p3_av1_ctrl1_reg_addr                                        "0xB800E278"
#define  CODEBLKREG_p3_av1_ctrl1_reg                                             0xB800E278
#define  CODEBLKREG_p3_av1_ctrl1_inst_addr                                       "0x001B"
#define  set_CODEBLKREG_p3_av1_ctrl1_reg(data)                                   (*((volatile unsigned int*)CODEBLKREG_p3_av1_ctrl1_reg)=data)
#define  get_CODEBLKREG_p3_av1_ctrl1_reg                                         (*((volatile unsigned int*)CODEBLKREG_p3_av1_ctrl1_reg))
#define  CODEBLKREG_p3_av1_ctrl1_ref7_global_motion_wmtype_shift                 (30)
#define  CODEBLKREG_p3_av1_ctrl1_ref6_global_motion_wmtype_shift                 (28)
#define  CODEBLKREG_p3_av1_ctrl1_ref5_global_motion_wmtype_shift                 (26)
#define  CODEBLKREG_p3_av1_ctrl1_ref4_global_motion_wmtype_shift                 (24)
#define  CODEBLKREG_p3_av1_ctrl1_ref3_global_motion_wmtype_shift                 (22)
#define  CODEBLKREG_p3_av1_ctrl1_ref2_global_motion_wmtype_shift                 (20)
#define  CODEBLKREG_p3_av1_ctrl1_ref1_global_motion_wmtype_shift                 (18)
#define  CODEBLKREG_p3_av1_ctrl1_ref0_global_motion_wmtype_shift                 (16)
#define  CODEBLKREG_p3_av1_ctrl1_ref7_x_scaled_fp_shift                          (15)
#define  CODEBLKREG_p3_av1_ctrl1_ref6_x_scaled_fp_shift                          (14)
#define  CODEBLKREG_p3_av1_ctrl1_ref5_x_scaled_fp_shift                          (13)
#define  CODEBLKREG_p3_av1_ctrl1_ref4_x_scaled_fp_shift                          (12)
#define  CODEBLKREG_p3_av1_ctrl1_ref3_x_scaled_fp_shift                          (11)
#define  CODEBLKREG_p3_av1_ctrl1_ref2_x_scaled_fp_shift                          (10)
#define  CODEBLKREG_p3_av1_ctrl1_ref1_x_scaled_fp_shift                          (9)
#define  CODEBLKREG_p3_av1_ctrl1_ref0_x_scaled_fp_shift                          (8)
#define  CODEBLKREG_p3_av1_ctrl1_ref7_vld_scaled_shift                           (7)
#define  CODEBLKREG_p3_av1_ctrl1_ref6_vld_scaled_shift                           (6)
#define  CODEBLKREG_p3_av1_ctrl1_ref5_vld_scaled_shift                           (5)
#define  CODEBLKREG_p3_av1_ctrl1_ref4_vld_scaled_shift                           (4)
#define  CODEBLKREG_p3_av1_ctrl1_ref3_vld_scaled_shift                           (3)
#define  CODEBLKREG_p3_av1_ctrl1_ref2_vld_scaled_shift                           (2)
#define  CODEBLKREG_p3_av1_ctrl1_ref1_vld_scaled_shift                           (1)
#define  CODEBLKREG_p3_av1_ctrl1_ref0_vld_scaled_shift                           (0)
#define  CODEBLKREG_p3_av1_ctrl1_ref7_global_motion_wmtype_mask                  (0xC0000000)
#define  CODEBLKREG_p3_av1_ctrl1_ref6_global_motion_wmtype_mask                  (0x30000000)
#define  CODEBLKREG_p3_av1_ctrl1_ref5_global_motion_wmtype_mask                  (0x0C000000)
#define  CODEBLKREG_p3_av1_ctrl1_ref4_global_motion_wmtype_mask                  (0x03000000)
#define  CODEBLKREG_p3_av1_ctrl1_ref3_global_motion_wmtype_mask                  (0x00C00000)
#define  CODEBLKREG_p3_av1_ctrl1_ref2_global_motion_wmtype_mask                  (0x00300000)
#define  CODEBLKREG_p3_av1_ctrl1_ref1_global_motion_wmtype_mask                  (0x000C0000)
#define  CODEBLKREG_p3_av1_ctrl1_ref0_global_motion_wmtype_mask                  (0x00030000)
#define  CODEBLKREG_p3_av1_ctrl1_ref7_x_scaled_fp_mask                           (0x00008000)
#define  CODEBLKREG_p3_av1_ctrl1_ref6_x_scaled_fp_mask                           (0x00004000)
#define  CODEBLKREG_p3_av1_ctrl1_ref5_x_scaled_fp_mask                           (0x00002000)
#define  CODEBLKREG_p3_av1_ctrl1_ref4_x_scaled_fp_mask                           (0x00001000)
#define  CODEBLKREG_p3_av1_ctrl1_ref3_x_scaled_fp_mask                           (0x00000800)
#define  CODEBLKREG_p3_av1_ctrl1_ref2_x_scaled_fp_mask                           (0x00000400)
#define  CODEBLKREG_p3_av1_ctrl1_ref1_x_scaled_fp_mask                           (0x00000200)
#define  CODEBLKREG_p3_av1_ctrl1_ref0_x_scaled_fp_mask                           (0x00000100)
#define  CODEBLKREG_p3_av1_ctrl1_ref7_vld_scaled_mask                            (0x00000080)
#define  CODEBLKREG_p3_av1_ctrl1_ref6_vld_scaled_mask                            (0x00000040)
#define  CODEBLKREG_p3_av1_ctrl1_ref5_vld_scaled_mask                            (0x00000020)
#define  CODEBLKREG_p3_av1_ctrl1_ref4_vld_scaled_mask                            (0x00000010)
#define  CODEBLKREG_p3_av1_ctrl1_ref3_vld_scaled_mask                            (0x00000008)
#define  CODEBLKREG_p3_av1_ctrl1_ref2_vld_scaled_mask                            (0x00000004)
#define  CODEBLKREG_p3_av1_ctrl1_ref1_vld_scaled_mask                            (0x00000002)
#define  CODEBLKREG_p3_av1_ctrl1_ref0_vld_scaled_mask                            (0x00000001)
#define  CODEBLKREG_p3_av1_ctrl1_ref7_global_motion_wmtype(data)                 (0xC0000000&((data)<<30))
#define  CODEBLKREG_p3_av1_ctrl1_ref6_global_motion_wmtype(data)                 (0x30000000&((data)<<28))
#define  CODEBLKREG_p3_av1_ctrl1_ref5_global_motion_wmtype(data)                 (0x0C000000&((data)<<26))
#define  CODEBLKREG_p3_av1_ctrl1_ref4_global_motion_wmtype(data)                 (0x03000000&((data)<<24))
#define  CODEBLKREG_p3_av1_ctrl1_ref3_global_motion_wmtype(data)                 (0x00C00000&((data)<<22))
#define  CODEBLKREG_p3_av1_ctrl1_ref2_global_motion_wmtype(data)                 (0x00300000&((data)<<20))
#define  CODEBLKREG_p3_av1_ctrl1_ref1_global_motion_wmtype(data)                 (0x000C0000&((data)<<18))
#define  CODEBLKREG_p3_av1_ctrl1_ref0_global_motion_wmtype(data)                 (0x00030000&((data)<<16))
#define  CODEBLKREG_p3_av1_ctrl1_ref7_x_scaled_fp(data)                          (0x00008000&((data)<<15))
#define  CODEBLKREG_p3_av1_ctrl1_ref6_x_scaled_fp(data)                          (0x00004000&((data)<<14))
#define  CODEBLKREG_p3_av1_ctrl1_ref5_x_scaled_fp(data)                          (0x00002000&((data)<<13))
#define  CODEBLKREG_p3_av1_ctrl1_ref4_x_scaled_fp(data)                          (0x00001000&((data)<<12))
#define  CODEBLKREG_p3_av1_ctrl1_ref3_x_scaled_fp(data)                          (0x00000800&((data)<<11))
#define  CODEBLKREG_p3_av1_ctrl1_ref2_x_scaled_fp(data)                          (0x00000400&((data)<<10))
#define  CODEBLKREG_p3_av1_ctrl1_ref1_x_scaled_fp(data)                          (0x00000200&((data)<<9))
#define  CODEBLKREG_p3_av1_ctrl1_ref0_x_scaled_fp(data)                          (0x00000100&((data)<<8))
#define  CODEBLKREG_p3_av1_ctrl1_ref7_vld_scaled(data)                           (0x00000080&((data)<<7))
#define  CODEBLKREG_p3_av1_ctrl1_ref6_vld_scaled(data)                           (0x00000040&((data)<<6))
#define  CODEBLKREG_p3_av1_ctrl1_ref5_vld_scaled(data)                           (0x00000020&((data)<<5))
#define  CODEBLKREG_p3_av1_ctrl1_ref4_vld_scaled(data)                           (0x00000010&((data)<<4))
#define  CODEBLKREG_p3_av1_ctrl1_ref3_vld_scaled(data)                           (0x00000008&((data)<<3))
#define  CODEBLKREG_p3_av1_ctrl1_ref2_vld_scaled(data)                           (0x00000004&((data)<<2))
#define  CODEBLKREG_p3_av1_ctrl1_ref1_vld_scaled(data)                           (0x00000002&((data)<<1))
#define  CODEBLKREG_p3_av1_ctrl1_ref0_vld_scaled(data)                           (0x00000001&(data))
#define  CODEBLKREG_p3_av1_ctrl1_get_ref7_global_motion_wmtype(data)             ((0xC0000000&(data))>>30)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref6_global_motion_wmtype(data)             ((0x30000000&(data))>>28)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref5_global_motion_wmtype(data)             ((0x0C000000&(data))>>26)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref4_global_motion_wmtype(data)             ((0x03000000&(data))>>24)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref3_global_motion_wmtype(data)             ((0x00C00000&(data))>>22)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref2_global_motion_wmtype(data)             ((0x00300000&(data))>>20)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref1_global_motion_wmtype(data)             ((0x000C0000&(data))>>18)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref0_global_motion_wmtype(data)             ((0x00030000&(data))>>16)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref7_x_scaled_fp(data)                      ((0x00008000&(data))>>15)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref6_x_scaled_fp(data)                      ((0x00004000&(data))>>14)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref5_x_scaled_fp(data)                      ((0x00002000&(data))>>13)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref4_x_scaled_fp(data)                      ((0x00001000&(data))>>12)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref3_x_scaled_fp(data)                      ((0x00000800&(data))>>11)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref2_x_scaled_fp(data)                      ((0x00000400&(data))>>10)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref1_x_scaled_fp(data)                      ((0x00000200&(data))>>9)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref0_x_scaled_fp(data)                      ((0x00000100&(data))>>8)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref7_vld_scaled(data)                       ((0x00000080&(data))>>7)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref6_vld_scaled(data)                       ((0x00000040&(data))>>6)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref5_vld_scaled(data)                       ((0x00000020&(data))>>5)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref4_vld_scaled(data)                       ((0x00000010&(data))>>4)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref3_vld_scaled(data)                       ((0x00000008&(data))>>3)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref2_vld_scaled(data)                       ((0x00000004&(data))>>2)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref1_vld_scaled(data)                       ((0x00000002&(data))>>1)
#define  CODEBLKREG_p3_av1_ctrl1_get_ref0_vld_scaled(data)                       (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CODEBLKREG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  cm_bypass:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  ldstcmemcount:16;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  cabac_1p_mode:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cabac_p2_p3:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  itblk_advmode:1;
    };
}codeblkreg_ve_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  qpprime_y_zero_transform_bypass_flag:1;
        RBus_UInt32  entropy_coding_mode:1;
        RBus_UInt32  pic_init_qp:6;
        RBus_UInt32  chroma_qp_offset:5;
        RBus_UInt32  second_chroma_qp_offset:5;
        RBus_UInt32  direct_8x8_inferflg:1;
        RBus_UInt32  transform_8x8_mode_flg:1;
        RBus_UInt32  num_ref_idx_l0_active_minus1:5;
        RBus_UInt32  num_ref_idx_l1_active_minus1:5;
    };
}codeblkreg_ve_h264_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  pic_type:3;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  slice_qp_delta:7;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabac_init_idc:2;
    };
}codeblkreg_ve_h264_cntl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldst_addr:32;
    };
}codeblkreg_ve_ldstaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_bit:32;
    };
}codeblkreg_ve_decbitcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bitcnt:32;
    };
}codeblkreg_vld_bitcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  detect_startcode_error:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  min_xfer_size:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  startcode_prevnt_en:1;
    };
}codeblkreg_ve_bscntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  min_thre:7;
    };
}codeblkreg_ve_bs_min_thr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  timer_value:24;
    };
}codeblkreg_ve_bstimer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}codeblkreg_ve_bsbase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}codeblkreg_ve_bslimit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}codeblkreg_ve_bswrptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cur_ptr:32;
    };
}codeblkreg_ve_bscurptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bit_ptr:32;
    };
}codeblkreg_ve_decbsptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dec_bit_ptr_msb:3;
    };
}codeblkreg_ve_decbsptr_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  id_pred:2;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  quant_type:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  mquant:5;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  qpcb:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  qpcr:6;
    };
}codeblkreg_ve_quantizer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  qdelta_y2ac:5;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  qdelta_uvdc:5;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  qdelta_y2dc:5;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  qdelta_y1dc:5;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  vp8_qp:7;
    };
}codeblkreg_ve_quantizer2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_enable9:1;
        RBus_UInt32  vp9_lossless:1;
        RBus_UInt32  write_enable8:1;
        RBus_UInt32  vp6_ref_frame:2;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  mb_pattern:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  intrablks_flg:5;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  ac_pred:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  dc_pred_dir:6;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  mbtype:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  intra_c_pred_mode:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  field_mb:1;
    };
}codeblkreg_mb_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  av1_delta_q_res_bit:2;
        RBus_UInt32  av1_delta_lf_res_bit:2;
        RBus_UInt32  av1_lossless:8;
        RBus_UInt32  dec_ctb_max_cycle:8;
        RBus_UInt32  dec_ctb_cycle_chken:1;
        RBus_UInt32  pcm_bit_depth_chroma:4;
        RBus_UInt32  pcm_bit_depth_luma:4;
        RBus_UInt32  transform_skip_enabled_flag:1;
        RBus_UInt32  transquant_bypass_enable_flag:1;
        RBus_UInt32  sign_data_hiding_flag:1;
    };
}codeblkreg_sde_p3_hevc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qmem_offset_2:8;
        RBus_UInt32  qmem_offset_1:8;
        RBus_UInt32  qmem_offset_0:8;
        RBus_UInt32  res1:1;
        RBus_UInt32  start_trigger:1;
        RBus_UInt32  group_cnt:3;
        RBus_UInt32  start_group:3;
    };
}codeblkreg_hevc_ldqmem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reference_mode:2;
        RBus_UInt32  seg_enable:1;
        RBus_UInt32  seg_update_map:1;
        RBus_UInt32  seg_id_0_mask_skip:1;
        RBus_UInt32  seg_id_1_mask_skip:1;
        RBus_UInt32  seg_id_2_mask_skip:1;
        RBus_UInt32  seg_id_3_mask_skip:1;
        RBus_UInt32  seg_id_4_mask_skip:1;
        RBus_UInt32  seg_id_5_mask_skip:1;
        RBus_UInt32  seg_id_6_mask_skip:1;
        RBus_UInt32  seg_id_7_mask_skip:1;
        RBus_UInt32  subsampling_x:1;
        RBus_UInt32  subsampling_y:1;
        RBus_UInt32  intra_only:1;
        RBus_UInt32  interp_filter:3;
        RBus_UInt32  ref_frame_sign_bias:4;
        RBus_UInt32  tx_mode:3;
        RBus_UInt32  comp_var_ref_1:2;
        RBus_UInt32  comp_var_ref_0:2;
        RBus_UInt32  comp_fixed_ref:2;
        RBus_UInt32  vp9_bit_high:1;
    };
}codeblkreg_p3_vp9_pic_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_id0_data_ref_frame:3;
        RBus_UInt32  seg_id1_data_ref_frame:3;
        RBus_UInt32  seg_id2_data_ref_frame:3;
        RBus_UInt32  seg_id3_data_ref_frame:3;
        RBus_UInt32  seg_id4_data_ref_frame:3;
        RBus_UInt32  seg_id5_data_ref_frame:3;
        RBus_UInt32  seg_id6_data_ref_frame:3;
        RBus_UInt32  seg_id7_data_ref_frame:3;
        RBus_UInt32  seg_id0_mask_ref_frame:1;
        RBus_UInt32  seg_id1_mask_ref_frame:1;
        RBus_UInt32  seg_id2_mask_ref_frame:1;
        RBus_UInt32  seg_id3_mask_ref_frame:1;
        RBus_UInt32  seg_id4_mask_ref_frame:1;
        RBus_UInt32  seg_id5_mask_ref_frame:1;
        RBus_UInt32  seg_id6_mask_ref_frame:1;
        RBus_UInt32  seg_id7_mask_ref_frame:1;
    };
}codeblkreg_p3_vp9_frm_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  av1_frame_y_restoration_type:2;
        RBus_UInt32  av1_frame_u_restoration_type:2;
        RBus_UInt32  av1_frame_v_restoration_type:2;
        RBus_UInt32  cdef_bits:2;
        RBus_UInt32  allow_intrabc:1;
        RBus_UInt32  av1_scan_table_load_trig:1;
        RBus_UInt32  using_qmatrix_y:1;
        RBus_UInt32  allow_screen_content_tools:1;
        RBus_UInt32  allow_interintra_compound:1;
        RBus_UInt32  allow_masked_compound:1;
        RBus_UInt32  secondarytransformenableflag:1;
        RBus_UInt32  refpicnum:3;
        RBus_UInt32  nsipenableflag:1;
        RBus_UInt32  nsqtenableflag:1;
        RBus_UInt32  asymmetricmotionpartitionsenableflag:1;
        RBus_UInt32  weightedskipenableflag:1;
        RBus_UInt32  dualhypothesispredictionenableflag:1;
        RBus_UInt32  multihypothesisskipenableflag:1;
    };
}codeblkreg_avs2_sde_RBUS;

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
}codeblkreg_av1_p3_ref_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  using_qmatrix_v:1;
        RBus_UInt32  using_qmatrix_u:1;
        RBus_UInt32  av1_qdelta_vdc:15;
        RBus_UInt32  enable_jnt_comp:1;
        RBus_UInt32  enable_dual_filter:1;
        RBus_UInt32  switchable_motion_mode:1;
        RBus_UInt32  filter_intra_en:1;
        RBus_UInt32  preskip_segid:1;
        RBus_UInt32  skip_mode_flag:1;
        RBus_UInt32  reduce_tx_set_used:1;
        RBus_UInt32  id_globalmv_mask:8;
    };
}codeblkreg_av1_sde_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_3_qindex:8;
        RBus_UInt32  seg_2_qindex:8;
        RBus_UInt32  seg_1_qindex:8;
        RBus_UInt32  seg_0_qindex:8;
    };
}codeblkreg_p3_av1_qidx0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_7_qindex:8;
        RBus_UInt32  seg_6_qindex:8;
        RBus_UInt32  seg_5_qindex:8;
        RBus_UInt32  seg_4_qindex:8;
    };
}codeblkreg_p3_av1_qidx1_RBUS;

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
        RBus_UInt32  ref7_x_scaled_fp:1;
        RBus_UInt32  ref6_x_scaled_fp:1;
        RBus_UInt32  ref5_x_scaled_fp:1;
        RBus_UInt32  ref4_x_scaled_fp:1;
        RBus_UInt32  ref3_x_scaled_fp:1;
        RBus_UInt32  ref2_x_scaled_fp:1;
        RBus_UInt32  ref1_x_scaled_fp:1;
        RBus_UInt32  ref0_x_scaled_fp:1;
        RBus_UInt32  ref7_vld_scaled:1;
        RBus_UInt32  ref6_vld_scaled:1;
        RBus_UInt32  ref5_vld_scaled:1;
        RBus_UInt32  ref4_vld_scaled:1;
        RBus_UInt32  ref3_vld_scaled:1;
        RBus_UInt32  ref2_vld_scaled:1;
        RBus_UInt32  ref1_vld_scaled:1;
        RBus_UInt32  ref0_vld_scaled:1;
    };
}codeblkreg_p3_av1_ctrl1_RBUS;

#else //apply LITTLE_ENDIAN

//======CODEBLKREG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  itblk_advmode:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cabac_p2_p3:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cabac_1p_mode:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  ldstcmemcount:16;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  cm_bypass:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  res1:7;
    };
}codeblkreg_ve_cntl_RBUS;

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
        RBus_UInt32  qpprime_y_zero_transform_bypass_flag:1;
        RBus_UInt32  res1:2;
    };
}codeblkreg_ve_h264_cntl_RBUS;

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
        RBus_UInt32  res1:17;
    };
}codeblkreg_ve_h264_cntl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldst_addr:32;
    };
}codeblkreg_ve_ldstaddr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_bit:32;
    };
}codeblkreg_ve_decbitcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bitcnt:32;
    };
}codeblkreg_vld_bitcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  startcode_prevnt_en:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  min_xfer_size:2;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  detect_startcode_error:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:25;
    };
}codeblkreg_ve_bscntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  min_thre:7;
        RBus_UInt32  res1:25;
    };
}codeblkreg_ve_bs_min_thr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  timer_value:24;
        RBus_UInt32  res1:8;
    };
}codeblkreg_ve_bstimer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}codeblkreg_ve_bsbase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit_addr:32;
    };
}codeblkreg_ve_bslimit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_ptr:32;
    };
}codeblkreg_ve_bswrptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cur_ptr:32;
    };
}codeblkreg_ve_bscurptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bit_ptr:32;
    };
}codeblkreg_ve_decbsptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec_bit_ptr_msb:3;
        RBus_UInt32  res1:29;
    };
}codeblkreg_ve_decbsptr_msb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qpcr:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  qpcb:6;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  mquant:5;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  quant_type:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  id_pred:2;
        RBus_UInt32  write_enable6:1;
    };
}codeblkreg_ve_quantizer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vp8_qp:7;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  qdelta_y1dc:5;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  qdelta_y2dc:5;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  qdelta_uvdc:5;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  qdelta_y2ac:5;
        RBus_UInt32  write_enable5:1;
    };
}codeblkreg_ve_quantizer2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  field_mb:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  intra_c_pred_mode:2;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  mbtype:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  dc_pred_dir:6;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  ac_pred:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  intrablks_flg:5;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  mb_pattern:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  vp6_ref_frame:2;
        RBus_UInt32  write_enable8:1;
        RBus_UInt32  vp9_lossless:1;
        RBus_UInt32  write_enable9:1;
    };
}codeblkreg_mb_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sign_data_hiding_flag:1;
        RBus_UInt32  transquant_bypass_enable_flag:1;
        RBus_UInt32  transform_skip_enabled_flag:1;
        RBus_UInt32  pcm_bit_depth_luma:4;
        RBus_UInt32  pcm_bit_depth_chroma:4;
        RBus_UInt32  dec_ctb_cycle_chken:1;
        RBus_UInt32  dec_ctb_max_cycle:8;
        RBus_UInt32  av1_lossless:8;
        RBus_UInt32  av1_delta_lf_res_bit:2;
        RBus_UInt32  av1_delta_q_res_bit:2;
    };
}codeblkreg_sde_p3_hevc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_group:3;
        RBus_UInt32  group_cnt:3;
        RBus_UInt32  start_trigger:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  qmem_offset_0:8;
        RBus_UInt32  qmem_offset_1:8;
        RBus_UInt32  qmem_offset_2:8;
    };
}codeblkreg_hevc_ldqmem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vp9_bit_high:1;
        RBus_UInt32  comp_fixed_ref:2;
        RBus_UInt32  comp_var_ref_0:2;
        RBus_UInt32  comp_var_ref_1:2;
        RBus_UInt32  tx_mode:3;
        RBus_UInt32  ref_frame_sign_bias:4;
        RBus_UInt32  interp_filter:3;
        RBus_UInt32  intra_only:1;
        RBus_UInt32  subsampling_y:1;
        RBus_UInt32  subsampling_x:1;
        RBus_UInt32  seg_id_7_mask_skip:1;
        RBus_UInt32  seg_id_6_mask_skip:1;
        RBus_UInt32  seg_id_5_mask_skip:1;
        RBus_UInt32  seg_id_4_mask_skip:1;
        RBus_UInt32  seg_id_3_mask_skip:1;
        RBus_UInt32  seg_id_2_mask_skip:1;
        RBus_UInt32  seg_id_1_mask_skip:1;
        RBus_UInt32  seg_id_0_mask_skip:1;
        RBus_UInt32  seg_update_map:1;
        RBus_UInt32  seg_enable:1;
        RBus_UInt32  reference_mode:2;
    };
}codeblkreg_p3_vp9_pic_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_id7_mask_ref_frame:1;
        RBus_UInt32  seg_id6_mask_ref_frame:1;
        RBus_UInt32  seg_id5_mask_ref_frame:1;
        RBus_UInt32  seg_id4_mask_ref_frame:1;
        RBus_UInt32  seg_id3_mask_ref_frame:1;
        RBus_UInt32  seg_id2_mask_ref_frame:1;
        RBus_UInt32  seg_id1_mask_ref_frame:1;
        RBus_UInt32  seg_id0_mask_ref_frame:1;
        RBus_UInt32  seg_id7_data_ref_frame:3;
        RBus_UInt32  seg_id6_data_ref_frame:3;
        RBus_UInt32  seg_id5_data_ref_frame:3;
        RBus_UInt32  seg_id4_data_ref_frame:3;
        RBus_UInt32  seg_id3_data_ref_frame:3;
        RBus_UInt32  seg_id2_data_ref_frame:3;
        RBus_UInt32  seg_id1_data_ref_frame:3;
        RBus_UInt32  seg_id0_data_ref_frame:3;
    };
}codeblkreg_p3_vp9_frm_level_RBUS;

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
        RBus_UInt32  refpicnum:3;
        RBus_UInt32  secondarytransformenableflag:1;
        RBus_UInt32  allow_masked_compound:1;
        RBus_UInt32  allow_interintra_compound:1;
        RBus_UInt32  allow_screen_content_tools:1;
        RBus_UInt32  using_qmatrix_y:1;
        RBus_UInt32  av1_scan_table_load_trig:1;
        RBus_UInt32  allow_intrabc:1;
        RBus_UInt32  cdef_bits:2;
        RBus_UInt32  av1_frame_v_restoration_type:2;
        RBus_UInt32  av1_frame_u_restoration_type:2;
        RBus_UInt32  av1_frame_y_restoration_type:2;
        RBus_UInt32  res1:8;
    };
}codeblkreg_avs2_sde_RBUS;

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
}codeblkreg_av1_p3_ref_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  id_globalmv_mask:8;
        RBus_UInt32  reduce_tx_set_used:1;
        RBus_UInt32  skip_mode_flag:1;
        RBus_UInt32  preskip_segid:1;
        RBus_UInt32  filter_intra_en:1;
        RBus_UInt32  switchable_motion_mode:1;
        RBus_UInt32  enable_dual_filter:1;
        RBus_UInt32  enable_jnt_comp:1;
        RBus_UInt32  av1_qdelta_vdc:15;
        RBus_UInt32  using_qmatrix_u:1;
        RBus_UInt32  using_qmatrix_v:1;
    };
}codeblkreg_av1_sde_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_0_qindex:8;
        RBus_UInt32  seg_1_qindex:8;
        RBus_UInt32  seg_2_qindex:8;
        RBus_UInt32  seg_3_qindex:8;
    };
}codeblkreg_p3_av1_qidx0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seg_4_qindex:8;
        RBus_UInt32  seg_5_qindex:8;
        RBus_UInt32  seg_6_qindex:8;
        RBus_UInt32  seg_7_qindex:8;
    };
}codeblkreg_p3_av1_qidx1_RBUS;

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
        RBus_UInt32  ref0_x_scaled_fp:1;
        RBus_UInt32  ref1_x_scaled_fp:1;
        RBus_UInt32  ref2_x_scaled_fp:1;
        RBus_UInt32  ref3_x_scaled_fp:1;
        RBus_UInt32  ref4_x_scaled_fp:1;
        RBus_UInt32  ref5_x_scaled_fp:1;
        RBus_UInt32  ref6_x_scaled_fp:1;
        RBus_UInt32  ref7_x_scaled_fp:1;
        RBus_UInt32  ref0_global_motion_wmtype:2;
        RBus_UInt32  ref1_global_motion_wmtype:2;
        RBus_UInt32  ref2_global_motion_wmtype:2;
        RBus_UInt32  ref3_global_motion_wmtype:2;
        RBus_UInt32  ref4_global_motion_wmtype:2;
        RBus_UInt32  ref5_global_motion_wmtype:2;
        RBus_UInt32  ref6_global_motion_wmtype:2;
        RBus_UInt32  ref7_global_motion_wmtype:2;
    };
}codeblkreg_p3_av1_ctrl1_RBUS;




#endif 


#endif 
