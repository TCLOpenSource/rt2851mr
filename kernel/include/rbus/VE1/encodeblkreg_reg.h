/**
* @file Merlin5_LGCY_VE_VLC_SPEC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ENCODEBLKREG_REG_H_
#define _RBUS_ENCODEBLKREG_REG_H_

#include "rbus_types.h"



//  ENCODEBLKREG Register Address
#define  ENCODEBLKREG_CM_CTRL                                                   0x1800F400
#define  ENCODEBLKREG_CM_CTRL_reg_addr                                           "0xB800F400"
#define  ENCODEBLKREG_CM_CTRL_reg                                                0xB800F400
#define  ENCODEBLKREG_CM_CTRL_inst_addr                                          "0x0000"
#define  ENCODEBLKREG_CM_CTRL_inst_adr                                           "0x0000"
#define  ENCODEBLKREG_CM_CTRL_inst                                               0x0000
#define  set_ENCODEBLKREG_CM_CTRL_reg(data)                                      (*((volatile unsigned int*)ENCODEBLKREG_CM_CTRL_reg)=data)
#define  get_ENCODEBLKREG_CM_CTRL_reg                                            (*((volatile unsigned int*)ENCODEBLKREG_CM_CTRL_reg))
#define  ENCODEBLKREG_CM_CTRL_write_enable3_shift                                (6)
#define  ENCODEBLKREG_CM_CTRL_vlc_bank_shift                                     (5)
#define  ENCODEBLKREG_CM_CTRL_write_enable2_shift                                (4)
#define  ENCODEBLKREG_CM_CTRL_tq_bank_shift                                      (3)
#define  ENCODEBLKREG_CM_CTRL_write_enable1_shift                                (2)
#define  ENCODEBLKREG_CM_CTRL_cm_mstr_shift                                      (0)
#define  ENCODEBLKREG_CM_CTRL_write_enable3_mask                                 (0x00000040)
#define  ENCODEBLKREG_CM_CTRL_vlc_bank_mask                                      (0x00000020)
#define  ENCODEBLKREG_CM_CTRL_write_enable2_mask                                 (0x00000010)
#define  ENCODEBLKREG_CM_CTRL_tq_bank_mask                                       (0x00000008)
#define  ENCODEBLKREG_CM_CTRL_write_enable1_mask                                 (0x00000004)
#define  ENCODEBLKREG_CM_CTRL_cm_mstr_mask                                       (0x00000003)
#define  ENCODEBLKREG_CM_CTRL_write_enable3(data)                                (0x00000040&((data)<<6))
#define  ENCODEBLKREG_CM_CTRL_vlc_bank(data)                                     (0x00000020&((data)<<5))
#define  ENCODEBLKREG_CM_CTRL_write_enable2(data)                                (0x00000010&((data)<<4))
#define  ENCODEBLKREG_CM_CTRL_tq_bank(data)                                      (0x00000008&((data)<<3))
#define  ENCODEBLKREG_CM_CTRL_write_enable1(data)                                (0x00000004&((data)<<2))
#define  ENCODEBLKREG_CM_CTRL_cm_mstr(data)                                      (0x00000003&(data))
#define  ENCODEBLKREG_CM_CTRL_get_write_enable3(data)                            ((0x00000040&(data))>>6)
#define  ENCODEBLKREG_CM_CTRL_get_vlc_bank(data)                                 ((0x00000020&(data))>>5)
#define  ENCODEBLKREG_CM_CTRL_get_write_enable2(data)                            ((0x00000010&(data))>>4)
#define  ENCODEBLKREG_CM_CTRL_get_tq_bank(data)                                  ((0x00000008&(data))>>3)
#define  ENCODEBLKREG_CM_CTRL_get_write_enable1(data)                            ((0x00000004&(data))>>2)
#define  ENCODEBLKREG_CM_CTRL_get_cm_mstr(data)                                  (0x00000003&(data))
#define  ENCODEBLKREG_CM_CTRL_write_enable3_src(data)                            ((0x00000040&(data))>>6)
#define  ENCODEBLKREG_CM_CTRL_vlc_bank_src(data)                                 ((0x00000020&(data))>>5)
#define  ENCODEBLKREG_CM_CTRL_write_enable2_src(data)                            ((0x00000010&(data))>>4)
#define  ENCODEBLKREG_CM_CTRL_tq_bank_src(data)                                  ((0x00000008&(data))>>3)
#define  ENCODEBLKREG_CM_CTRL_write_enable1_src(data)                            ((0x00000004&(data))>>2)
#define  ENCODEBLKREG_CM_CTRL_cm_mstr_src(data)                                  (0x00000003&(data))

#define  ENCODEBLKREG_CURADR                                                    0x1800F404
#define  ENCODEBLKREG_CURADR_reg_addr                                            "0xB800F404"
#define  ENCODEBLKREG_CURADR_reg                                                 0xB800F404
#define  ENCODEBLKREG_CURADR_inst_addr                                           "0x0001"
#define  ENCODEBLKREG_CURADR_inst_adr                                            "0x0001"
#define  ENCODEBLKREG_CURADR_inst                                                0x0001
#define  set_ENCODEBLKREG_CURADR_reg(data)                                       (*((volatile unsigned int*)ENCODEBLKREG_CURADR_reg)=data)
#define  get_ENCODEBLKREG_CURADR_reg                                             (*((volatile unsigned int*)ENCODEBLKREG_CURADR_reg))
#define  ENCODEBLKREG_CURADR_write_enable2_shift                                 (17)
#define  ENCODEBLKREG_CURADR_vlc_pred_counter_shift                              (9)
#define  ENCODEBLKREG_CURADR_write_enable1_shift                                 (8)
#define  ENCODEBLKREG_CURADR_vlc_curmb_addr_shift                                (0)
#define  ENCODEBLKREG_CURADR_write_enable2_mask                                  (0x00020000)
#define  ENCODEBLKREG_CURADR_vlc_pred_counter_mask                               (0x0001FE00)
#define  ENCODEBLKREG_CURADR_write_enable1_mask                                  (0x00000100)
#define  ENCODEBLKREG_CURADR_vlc_curmb_addr_mask                                 (0x000000FF)
#define  ENCODEBLKREG_CURADR_write_enable2(data)                                 (0x00020000&((data)<<17))
#define  ENCODEBLKREG_CURADR_vlc_pred_counter(data)                              (0x0001FE00&((data)<<9))
#define  ENCODEBLKREG_CURADR_write_enable1(data)                                 (0x00000100&((data)<<8))
#define  ENCODEBLKREG_CURADR_vlc_curmb_addr(data)                                (0x000000FF&(data))
#define  ENCODEBLKREG_CURADR_get_write_enable2(data)                             ((0x00020000&(data))>>17)
#define  ENCODEBLKREG_CURADR_get_vlc_pred_counter(data)                          ((0x0001FE00&(data))>>9)
#define  ENCODEBLKREG_CURADR_get_write_enable1(data)                             ((0x00000100&(data))>>8)
#define  ENCODEBLKREG_CURADR_get_vlc_curmb_addr(data)                            (0x000000FF&(data))
#define  ENCODEBLKREG_CURADR_write_enable2_src(data)                             ((0x00020000&(data))>>17)
#define  ENCODEBLKREG_CURADR_vlc_pred_counter_src(data)                          ((0x0001FE00&(data))>>9)
#define  ENCODEBLKREG_CURADR_write_enable1_src(data)                             ((0x00000100&(data))>>8)
#define  ENCODEBLKREG_CURADR_vlc_curmb_addr_src(data)                            (0x000000FF&(data))

#define  ENCODEBLKREG_H264_CNTL                                                 0x1800F408
#define  ENCODEBLKREG_H264_CNTL_reg_addr                                         "0xB800F408"
#define  ENCODEBLKREG_H264_CNTL_reg                                              0xB800F408
#define  ENCODEBLKREG_H264_CNTL_inst_addr                                        "0x0002"
#define  ENCODEBLKREG_H264_CNTL_inst_adr                                         "0x0002"
#define  ENCODEBLKREG_H264_CNTL_inst                                             0x0002
#define  set_ENCODEBLKREG_H264_CNTL_reg(data)                                    (*((volatile unsigned int*)ENCODEBLKREG_H264_CNTL_reg)=data)
#define  get_ENCODEBLKREG_H264_CNTL_reg                                          (*((volatile unsigned int*)ENCODEBLKREG_H264_CNTL_reg))
#define  ENCODEBLKREG_H264_CNTL_entropy_coding_mode_shift                        (18)
#define  ENCODEBLKREG_H264_CNTL_pic_init_qp_shift                                (12)
#define  ENCODEBLKREG_H264_CNTL_direct_8x8_inferflg_shift                        (11)
#define  ENCODEBLKREG_H264_CNTL_transform_8x8_mode_flg_shift                     (10)
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l0_active_minus1_shift               (5)
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l1_active_minus1_shift               (0)
#define  ENCODEBLKREG_H264_CNTL_entropy_coding_mode_mask                         (0x00040000)
#define  ENCODEBLKREG_H264_CNTL_pic_init_qp_mask                                 (0x0003F000)
#define  ENCODEBLKREG_H264_CNTL_direct_8x8_inferflg_mask                         (0x00000800)
#define  ENCODEBLKREG_H264_CNTL_transform_8x8_mode_flg_mask                      (0x00000400)
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l0_active_minus1_mask                (0x000003E0)
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l1_active_minus1_mask                (0x0000001F)
#define  ENCODEBLKREG_H264_CNTL_entropy_coding_mode(data)                        (0x00040000&((data)<<18))
#define  ENCODEBLKREG_H264_CNTL_pic_init_qp(data)                                (0x0003F000&((data)<<12))
#define  ENCODEBLKREG_H264_CNTL_direct_8x8_inferflg(data)                        (0x00000800&((data)<<11))
#define  ENCODEBLKREG_H264_CNTL_transform_8x8_mode_flg(data)                     (0x00000400&((data)<<10))
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l0_active_minus1(data)               (0x000003E0&((data)<<5))
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l1_active_minus1(data)               (0x0000001F&(data))
#define  ENCODEBLKREG_H264_CNTL_get_entropy_coding_mode(data)                    ((0x00040000&(data))>>18)
#define  ENCODEBLKREG_H264_CNTL_get_pic_init_qp(data)                            ((0x0003F000&(data))>>12)
#define  ENCODEBLKREG_H264_CNTL_get_direct_8x8_inferflg(data)                    ((0x00000800&(data))>>11)
#define  ENCODEBLKREG_H264_CNTL_get_transform_8x8_mode_flg(data)                 ((0x00000400&(data))>>10)
#define  ENCODEBLKREG_H264_CNTL_get_num_ref_idx_l0_active_minus1(data)           ((0x000003E0&(data))>>5)
#define  ENCODEBLKREG_H264_CNTL_get_num_ref_idx_l1_active_minus1(data)           (0x0000001F&(data))
#define  ENCODEBLKREG_H264_CNTL_entropy_coding_mode_src(data)                    ((0x00040000&(data))>>18)
#define  ENCODEBLKREG_H264_CNTL_pic_init_qp_src(data)                            ((0x0003F000&(data))>>12)
#define  ENCODEBLKREG_H264_CNTL_direct_8x8_inferflg_src(data)                    ((0x00000800&(data))>>11)
#define  ENCODEBLKREG_H264_CNTL_transform_8x8_mode_flg_src(data)                 ((0x00000400&(data))>>10)
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l0_active_minus1_src(data)           ((0x000003E0&(data))>>5)
#define  ENCODEBLKREG_H264_CNTL_num_ref_idx_l1_active_minus1_src(data)           (0x0000001F&(data))

#define  ENCODEBLKREG_H264_CNTL2                                                0x1800F40C
#define  ENCODEBLKREG_H264_CNTL2_reg_addr                                        "0xB800F40C"
#define  ENCODEBLKREG_H264_CNTL2_reg                                             0xB800F40C
#define  ENCODEBLKREG_H264_CNTL2_inst_addr                                       "0x0003"
#define  ENCODEBLKREG_H264_CNTL2_inst_adr                                        "0x0003"
#define  ENCODEBLKREG_H264_CNTL2_inst                                            0x0003
#define  set_ENCODEBLKREG_H264_CNTL2_reg(data)                                   (*((volatile unsigned int*)ENCODEBLKREG_H264_CNTL2_reg)=data)
#define  get_ENCODEBLKREG_H264_CNTL2_reg                                         (*((volatile unsigned int*)ENCODEBLKREG_H264_CNTL2_reg))
#define  ENCODEBLKREG_H264_CNTL2_write_enable3_shift                             (14)
#define  ENCODEBLKREG_H264_CNTL2_pic_type_shift                                  (11)
#define  ENCODEBLKREG_H264_CNTL2_write_enable2_shift                             (10)
#define  ENCODEBLKREG_H264_CNTL2_slice_qp_delta_shift                            (3)
#define  ENCODEBLKREG_H264_CNTL2_write_enable1_shift                             (2)
#define  ENCODEBLKREG_H264_CNTL2_cabac_init_idc_shift                            (0)
#define  ENCODEBLKREG_H264_CNTL2_write_enable3_mask                              (0x00004000)
#define  ENCODEBLKREG_H264_CNTL2_pic_type_mask                                   (0x00003800)
#define  ENCODEBLKREG_H264_CNTL2_write_enable2_mask                              (0x00000400)
#define  ENCODEBLKREG_H264_CNTL2_slice_qp_delta_mask                             (0x000003F8)
#define  ENCODEBLKREG_H264_CNTL2_write_enable1_mask                              (0x00000004)
#define  ENCODEBLKREG_H264_CNTL2_cabac_init_idc_mask                             (0x00000003)
#define  ENCODEBLKREG_H264_CNTL2_write_enable3(data)                             (0x00004000&((data)<<14))
#define  ENCODEBLKREG_H264_CNTL2_pic_type(data)                                  (0x00003800&((data)<<11))
#define  ENCODEBLKREG_H264_CNTL2_write_enable2(data)                             (0x00000400&((data)<<10))
#define  ENCODEBLKREG_H264_CNTL2_slice_qp_delta(data)                            (0x000003F8&((data)<<3))
#define  ENCODEBLKREG_H264_CNTL2_write_enable1(data)                             (0x00000004&((data)<<2))
#define  ENCODEBLKREG_H264_CNTL2_cabac_init_idc(data)                            (0x00000003&(data))
#define  ENCODEBLKREG_H264_CNTL2_get_write_enable3(data)                         ((0x00004000&(data))>>14)
#define  ENCODEBLKREG_H264_CNTL2_get_pic_type(data)                              ((0x00003800&(data))>>11)
#define  ENCODEBLKREG_H264_CNTL2_get_write_enable2(data)                         ((0x00000400&(data))>>10)
#define  ENCODEBLKREG_H264_CNTL2_get_slice_qp_delta(data)                        ((0x000003F8&(data))>>3)
#define  ENCODEBLKREG_H264_CNTL2_get_write_enable1(data)                         ((0x00000004&(data))>>2)
#define  ENCODEBLKREG_H264_CNTL2_get_cabac_init_idc(data)                        (0x00000003&(data))
#define  ENCODEBLKREG_H264_CNTL2_write_enable3_src(data)                         ((0x00004000&(data))>>14)
#define  ENCODEBLKREG_H264_CNTL2_pic_type_src(data)                              ((0x00003800&(data))>>11)
#define  ENCODEBLKREG_H264_CNTL2_write_enable2_src(data)                         ((0x00000400&(data))>>10)
#define  ENCODEBLKREG_H264_CNTL2_slice_qp_delta_src(data)                        ((0x000003F8&(data))>>3)
#define  ENCODEBLKREG_H264_CNTL2_write_enable1_src(data)                         ((0x00000004&(data))>>2)
#define  ENCODEBLKREG_H264_CNTL2_cabac_init_idc_src(data)                        (0x00000003&(data))

#define  ENCODEBLKREG_VLC_BITCNT                                                0x1800F414
#define  ENCODEBLKREG_VLC_BITCNT_reg_addr                                        "0xB800F414"
#define  ENCODEBLKREG_VLC_BITCNT_reg                                             0xB800F414
#define  ENCODEBLKREG_VLC_BITCNT_inst_addr                                       "0x0004"
#define  ENCODEBLKREG_VLC_BITCNT_inst_adr                                        "0x0005"
#define  ENCODEBLKREG_VLC_BITCNT_inst                                            0x0005
#define  set_ENCODEBLKREG_VLC_BITCNT_reg(data)                                   (*((volatile unsigned int*)ENCODEBLKREG_VLC_BITCNT_reg)=data)
#define  get_ENCODEBLKREG_VLC_BITCNT_reg                                         (*((volatile unsigned int*)ENCODEBLKREG_VLC_BITCNT_reg))
#define  ENCODEBLKREG_VLC_BITCNT_enc_bitcnt_shift                                (0)
#define  ENCODEBLKREG_VLC_BITCNT_enc_bitcnt_mask                                 (0xFFFFFFFF)
#define  ENCODEBLKREG_VLC_BITCNT_enc_bitcnt(data)                                (0xFFFFFFFF&(data))
#define  ENCODEBLKREG_VLC_BITCNT_get_enc_bitcnt(data)                            (0xFFFFFFFF&(data))
#define  ENCODEBLKREG_VLC_BITCNT_enc_bitcnt_src(data)                            (0xFFFFFFFF&(data))

#define  ENCODEBLKREG_VLC_MBTYPE                                                0x1800F430
#define  ENCODEBLKREG_VLC_MBTYPE_reg_addr                                        "0xB800F430"
#define  ENCODEBLKREG_VLC_MBTYPE_reg                                             0xB800F430
#define  ENCODEBLKREG_VLC_MBTYPE_inst_addr                                       "0x0005"
#define  ENCODEBLKREG_VLC_MBTYPE_inst_adr                                        "0x000C"
#define  ENCODEBLKREG_VLC_MBTYPE_inst                                            0x000C
#define  set_ENCODEBLKREG_VLC_MBTYPE_reg(data)                                   (*((volatile unsigned int*)ENCODEBLKREG_VLC_MBTYPE_reg)=data)
#define  get_ENCODEBLKREG_VLC_MBTYPE_reg                                         (*((volatile unsigned int*)ENCODEBLKREG_VLC_MBTYPE_reg))
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable4_shift                             (20)
#define  ENCODEBLKREG_VLC_MBTYPE_qp_delta_shift                                  (14)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable3_shift                             (13)
#define  ENCODEBLKREG_VLC_MBTYPE_qpy_shift                                       (7)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable2_shift                             (6)
#define  ENCODEBLKREG_VLC_MBTYPE_mbtype_shift                                    (2)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable1_shift                             (1)
#define  ENCODEBLKREG_VLC_MBTYPE_transform_size_8x8_shift                        (0)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable4_mask                              (0x00100000)
#define  ENCODEBLKREG_VLC_MBTYPE_qp_delta_mask                                   (0x000FC000)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable3_mask                              (0x00002000)
#define  ENCODEBLKREG_VLC_MBTYPE_qpy_mask                                        (0x00001F80)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable2_mask                              (0x00000040)
#define  ENCODEBLKREG_VLC_MBTYPE_mbtype_mask                                     (0x0000003C)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable1_mask                              (0x00000002)
#define  ENCODEBLKREG_VLC_MBTYPE_transform_size_8x8_mask                         (0x00000001)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable4(data)                             (0x00100000&((data)<<20))
#define  ENCODEBLKREG_VLC_MBTYPE_qp_delta(data)                                  (0x000FC000&((data)<<14))
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable3(data)                             (0x00002000&((data)<<13))
#define  ENCODEBLKREG_VLC_MBTYPE_qpy(data)                                       (0x00001F80&((data)<<7))
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable2(data)                             (0x00000040&((data)<<6))
#define  ENCODEBLKREG_VLC_MBTYPE_mbtype(data)                                    (0x0000003C&((data)<<2))
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable1(data)                             (0x00000002&((data)<<1))
#define  ENCODEBLKREG_VLC_MBTYPE_transform_size_8x8(data)                        (0x00000001&(data))
#define  ENCODEBLKREG_VLC_MBTYPE_get_write_enable4(data)                         ((0x00100000&(data))>>20)
#define  ENCODEBLKREG_VLC_MBTYPE_get_qp_delta(data)                              ((0x000FC000&(data))>>14)
#define  ENCODEBLKREG_VLC_MBTYPE_get_write_enable3(data)                         ((0x00002000&(data))>>13)
#define  ENCODEBLKREG_VLC_MBTYPE_get_qpy(data)                                   ((0x00001F80&(data))>>7)
#define  ENCODEBLKREG_VLC_MBTYPE_get_write_enable2(data)                         ((0x00000040&(data))>>6)
#define  ENCODEBLKREG_VLC_MBTYPE_get_mbtype(data)                                ((0x0000003C&(data))>>2)
#define  ENCODEBLKREG_VLC_MBTYPE_get_write_enable1(data)                         ((0x00000002&(data))>>1)
#define  ENCODEBLKREG_VLC_MBTYPE_get_transform_size_8x8(data)                    (0x00000001&(data))
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable4_src(data)                         ((0x00100000&(data))>>20)
#define  ENCODEBLKREG_VLC_MBTYPE_qp_delta_src(data)                              ((0x000FC000&(data))>>14)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable3_src(data)                         ((0x00002000&(data))>>13)
#define  ENCODEBLKREG_VLC_MBTYPE_qpy_src(data)                                   ((0x00001F80&(data))>>7)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable2_src(data)                         ((0x00000040&(data))>>6)
#define  ENCODEBLKREG_VLC_MBTYPE_mbtype_src(data)                                ((0x0000003C&(data))>>2)
#define  ENCODEBLKREG_VLC_MBTYPE_write_enable1_src(data)                         ((0x00000002&(data))>>1)
#define  ENCODEBLKREG_VLC_MBTYPE_transform_size_8x8_src(data)                    (0x00000001&(data))

#define  ENCODEBLKREG_VLC_CBP                                                   0x1800F434
#define  ENCODEBLKREG_VLC_CBP_reg_addr                                           "0xB800F434"
#define  ENCODEBLKREG_VLC_CBP_reg                                                0xB800F434
#define  ENCODEBLKREG_VLC_CBP_inst_addr                                          "0x0006"
#define  ENCODEBLKREG_VLC_CBP_inst_adr                                           "0x000D"
#define  ENCODEBLKREG_VLC_CBP_inst                                               0x000D
#define  set_ENCODEBLKREG_VLC_CBP_reg(data)                                      (*((volatile unsigned int*)ENCODEBLKREG_VLC_CBP_reg)=data)
#define  get_ENCODEBLKREG_VLC_CBP_reg                                            (*((volatile unsigned int*)ENCODEBLKREG_VLC_CBP_reg))
#define  ENCODEBLKREG_VLC_CBP_write_enable2_shift                                (31)
#define  ENCODEBLKREG_VLC_CBP_cbp6bits_shift                                     (25)
#define  ENCODEBLKREG_VLC_CBP_write_enable1_shift                                (24)
#define  ENCODEBLKREG_VLC_CBP_subblkpat_shift                                    (0)
#define  ENCODEBLKREG_VLC_CBP_write_enable2_mask                                 (0x80000000)
#define  ENCODEBLKREG_VLC_CBP_cbp6bits_mask                                      (0x7E000000)
#define  ENCODEBLKREG_VLC_CBP_write_enable1_mask                                 (0x01000000)
#define  ENCODEBLKREG_VLC_CBP_subblkpat_mask                                     (0x00FFFFFF)
#define  ENCODEBLKREG_VLC_CBP_write_enable2(data)                                (0x80000000&((data)<<31))
#define  ENCODEBLKREG_VLC_CBP_cbp6bits(data)                                     (0x7E000000&((data)<<25))
#define  ENCODEBLKREG_VLC_CBP_write_enable1(data)                                (0x01000000&((data)<<24))
#define  ENCODEBLKREG_VLC_CBP_subblkpat(data)                                    (0x00FFFFFF&(data))
#define  ENCODEBLKREG_VLC_CBP_get_write_enable2(data)                            ((0x80000000&(data))>>31)
#define  ENCODEBLKREG_VLC_CBP_get_cbp6bits(data)                                 ((0x7E000000&(data))>>25)
#define  ENCODEBLKREG_VLC_CBP_get_write_enable1(data)                            ((0x01000000&(data))>>24)
#define  ENCODEBLKREG_VLC_CBP_get_subblkpat(data)                                (0x00FFFFFF&(data))
#define  ENCODEBLKREG_VLC_CBP_write_enable2_src(data)                            ((0x80000000&(data))>>31)
#define  ENCODEBLKREG_VLC_CBP_cbp6bits_src(data)                                 ((0x7E000000&(data))>>25)
#define  ENCODEBLKREG_VLC_CBP_write_enable1_src(data)                            ((0x01000000&(data))>>24)
#define  ENCODEBLKREG_VLC_CBP_subblkpat_src(data)                                (0x00FFFFFF&(data))

#define  ENCODEBLKREG_MB_PARTITION                                              0x1800F438
#define  ENCODEBLKREG_MB_PARTITION_reg_addr                                      "0xB800F438"
#define  ENCODEBLKREG_MB_PARTITION_reg                                           0xB800F438
#define  ENCODEBLKREG_MB_PARTITION_inst_addr                                     "0x0007"
#define  ENCODEBLKREG_MB_PARTITION_inst_adr                                      "0x000E"
#define  ENCODEBLKREG_MB_PARTITION_inst                                          0x000E
#define  set_ENCODEBLKREG_MB_PARTITION_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_MB_PARTITION_reg)=data)
#define  get_ENCODEBLKREG_MB_PARTITION_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_MB_PARTITION_reg))
#define  ENCODEBLKREG_MB_PARTITION_mbpartition_shift                             (0)
#define  ENCODEBLKREG_MB_PARTITION_mbpartition_mask                              (0x000001FF)
#define  ENCODEBLKREG_MB_PARTITION_mbpartition(data)                             (0x000001FF&(data))
#define  ENCODEBLKREG_MB_PARTITION_get_mbpartition(data)                         (0x000001FF&(data))
#define  ENCODEBLKREG_MB_PARTITION_mbpartition_src(data)                         (0x000001FF&(data))

#define  ENCODEBLKREG_MB_PREDMODE                                               0x1800F43C
#define  ENCODEBLKREG_MB_PREDMODE_reg_addr                                       "0xB800F43C"
#define  ENCODEBLKREG_MB_PREDMODE_reg                                            0xB800F43C
#define  ENCODEBLKREG_MB_PREDMODE_inst_addr                                      "0x0008"
#define  ENCODEBLKREG_MB_PREDMODE_inst_adr                                       "0x000F"
#define  ENCODEBLKREG_MB_PREDMODE_inst                                           0x000F
#define  set_ENCODEBLKREG_MB_PREDMODE_reg(data)                                  (*((volatile unsigned int*)ENCODEBLKREG_MB_PREDMODE_reg)=data)
#define  get_ENCODEBLKREG_MB_PREDMODE_reg                                        (*((volatile unsigned int*)ENCODEBLKREG_MB_PREDMODE_reg))
#define  ENCODEBLKREG_MB_PREDMODE_mb_pred_mode_shift                             (0)
#define  ENCODEBLKREG_MB_PREDMODE_mb_pred_mode_mask                              (0x000000FF)
#define  ENCODEBLKREG_MB_PREDMODE_mb_pred_mode(data)                             (0x000000FF&(data))
#define  ENCODEBLKREG_MB_PREDMODE_get_mb_pred_mode(data)                         (0x000000FF&(data))
#define  ENCODEBLKREG_MB_PREDMODE_mb_pred_mode_src(data)                         (0x000000FF&(data))

#define  ENCODEBLKREG_INTRA_PRED_0                                              0x1800F440
#define  ENCODEBLKREG_INTRA_PRED_0_reg_addr                                      "0xB800F440"
#define  ENCODEBLKREG_INTRA_PRED_0_reg                                           0xB800F440
#define  ENCODEBLKREG_INTRA_PRED_0_inst_addr                                     "0x0009"
#define  ENCODEBLKREG_INTRA_PRED_0_inst_adr                                      "0x0010"
#define  ENCODEBLKREG_INTRA_PRED_0_inst                                          0x0010
#define  set_ENCODEBLKREG_INTRA_PRED_0_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_INTRA_PRED_0_reg)=data)
#define  get_ENCODEBLKREG_INTRA_PRED_0_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_INTRA_PRED_0_reg))
#define  ENCODEBLKREG_INTRA_PRED_rem_mode_shift                                  (0)
#define  ENCODEBLKREG_INTRA_PRED_rem_mode_mask                                   (0xFFFFFFFF)
#define  ENCODEBLKREG_INTRA_PRED_rem_mode(data)                                  (0xFFFFFFFF&(data))
#define  ENCODEBLKREG_INTRA_PRED_get_rem_mode(data)                              (0xFFFFFFFF&(data))
#define  ENCODEBLKREG_INTRA_PRED_rem_mode_src(data)                              (0xFFFFFFFF&(data))

#define  ENCODEBLKREG_INTRA_PRED_1                                              0x1800F444
#define  ENCODEBLKREG_INTRA_PRED_1_reg_addr                                      "0xB800F444"
#define  ENCODEBLKREG_INTRA_PRED_1_reg                                           0xB800F444
#define  ENCODEBLKREG_INTRA_PRED_1_inst_addr                                     "0x000A"
#define  ENCODEBLKREG_INTRA_PRED_1_inst_adr                                      "0x0011"
#define  ENCODEBLKREG_INTRA_PRED_1_inst                                          0x0011
#define  set_ENCODEBLKREG_INTRA_PRED_1_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_INTRA_PRED_1_reg)=data)
#define  get_ENCODEBLKREG_INTRA_PRED_1_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_INTRA_PRED_1_reg))

#define  ENCODEBLKREG_INTRA_PRED_2                                              0x1800F448
#define  ENCODEBLKREG_INTRA_PRED_2_reg_addr                                      "0xB800F448"
#define  ENCODEBLKREG_INTRA_PRED_2_reg                                           0xB800F448
#define  ENCODEBLKREG_INTRA_PRED_2_inst_addr                                     "0x000B"
#define  ENCODEBLKREG_INTRA_PRED_2_inst_adr                                      "0x0012"
#define  ENCODEBLKREG_INTRA_PRED_2_inst                                          0x0012
#define  set_ENCODEBLKREG_INTRA_PRED_2_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_INTRA_PRED_2_reg)=data)
#define  get_ENCODEBLKREG_INTRA_PRED_2_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_INTRA_PRED_2_reg))

#define  ENCODEBLKREG_REF_L0_0                                                  0x1800F450
#define  ENCODEBLKREG_REF_L0_0_reg_addr                                          "0xB800F450"
#define  ENCODEBLKREG_REF_L0_0_reg                                               0xB800F450
#define  ENCODEBLKREG_REF_L0_0_inst_addr                                         "0x000C"
#define  ENCODEBLKREG_REF_L0_0_inst_adr                                          "0x0014"
#define  ENCODEBLKREG_REF_L0_0_inst                                              0x0014
#define  set_ENCODEBLKREG_REF_L0_0_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_0_reg)=data)
#define  get_ENCODEBLKREG_REF_L0_0_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_0_reg))
#define  ENCODEBLKREG_REF_L0_ref_idx_l0_shift                                    (22)
#define  ENCODEBLKREG_REF_L0_mvd_l0_y_shift                                      (12)
#define  ENCODEBLKREG_REF_L0_mvd_l0_x_shift                                      (0)
#define  ENCODEBLKREG_REF_L0_ref_idx_l0_mask                                     (0x00C00000)
#define  ENCODEBLKREG_REF_L0_mvd_l0_y_mask                                       (0x003FF000)
#define  ENCODEBLKREG_REF_L0_mvd_l0_x_mask                                       (0x00000FFF)
#define  ENCODEBLKREG_REF_L0_ref_idx_l0(data)                                    (0x00C00000&((data)<<22))
#define  ENCODEBLKREG_REF_L0_mvd_l0_y(data)                                      (0x003FF000&((data)<<12))
#define  ENCODEBLKREG_REF_L0_mvd_l0_x(data)                                      (0x00000FFF&(data))
#define  ENCODEBLKREG_REF_L0_get_ref_idx_l0(data)                                ((0x00C00000&(data))>>22)
#define  ENCODEBLKREG_REF_L0_get_mvd_l0_y(data)                                  ((0x003FF000&(data))>>12)
#define  ENCODEBLKREG_REF_L0_get_mvd_l0_x(data)                                  (0x00000FFF&(data))
#define  ENCODEBLKREG_REF_L0_ref_idx_l0_src(data)                                ((0x00C00000&(data))>>22)
#define  ENCODEBLKREG_REF_L0_mvd_l0_y_src(data)                                  ((0x003FF000&(data))>>12)
#define  ENCODEBLKREG_REF_L0_mvd_l0_x_src(data)                                  (0x00000FFF&(data))

#define  ENCODEBLKREG_REF_L0_1                                                  0x1800F454
#define  ENCODEBLKREG_REF_L0_1_reg_addr                                          "0xB800F454"
#define  ENCODEBLKREG_REF_L0_1_reg                                               0xB800F454
#define  ENCODEBLKREG_REF_L0_1_inst_addr                                         "0x000D"
#define  ENCODEBLKREG_REF_L0_1_inst_adr                                          "0x0015"
#define  ENCODEBLKREG_REF_L0_1_inst                                              0x0015
#define  set_ENCODEBLKREG_REF_L0_1_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_1_reg)=data)
#define  get_ENCODEBLKREG_REF_L0_1_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_1_reg))

#define  ENCODEBLKREG_REF_L0_2                                                  0x1800F458
#define  ENCODEBLKREG_REF_L0_2_reg_addr                                          "0xB800F458"
#define  ENCODEBLKREG_REF_L0_2_reg                                               0xB800F458
#define  ENCODEBLKREG_REF_L0_2_inst_addr                                         "0x000E"
#define  ENCODEBLKREG_REF_L0_2_inst_adr                                          "0x0016"
#define  ENCODEBLKREG_REF_L0_2_inst                                              0x0016
#define  set_ENCODEBLKREG_REF_L0_2_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_2_reg)=data)
#define  get_ENCODEBLKREG_REF_L0_2_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_2_reg))

#define  ENCODEBLKREG_REF_L0_3                                                  0x1800F45C
#define  ENCODEBLKREG_REF_L0_3_reg_addr                                          "0xB800F45C"
#define  ENCODEBLKREG_REF_L0_3_reg                                               0xB800F45C
#define  ENCODEBLKREG_REF_L0_3_inst_addr                                         "0x000F"
#define  ENCODEBLKREG_REF_L0_3_inst_adr                                          "0x0017"
#define  ENCODEBLKREG_REF_L0_3_inst                                              0x0017
#define  set_ENCODEBLKREG_REF_L0_3_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_3_reg)=data)
#define  get_ENCODEBLKREG_REF_L0_3_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L0_3_reg))

#define  ENCODEBLKREG_REF_L1_0                                                  0x1800F460
#define  ENCODEBLKREG_REF_L1_0_reg_addr                                          "0xB800F460"
#define  ENCODEBLKREG_REF_L1_0_reg                                               0xB800F460
#define  ENCODEBLKREG_REF_L1_0_inst_addr                                         "0x0010"
#define  ENCODEBLKREG_REF_L1_0_inst_adr                                          "0x0018"
#define  ENCODEBLKREG_REF_L1_0_inst                                              0x0018
#define  set_ENCODEBLKREG_REF_L1_0_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_0_reg)=data)
#define  get_ENCODEBLKREG_REF_L1_0_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_0_reg))
#define  ENCODEBLKREG_REF_L1_ref_idx_l1_shift                                    (22)
#define  ENCODEBLKREG_REF_L1_mvd_l1_y_shift                                      (12)
#define  ENCODEBLKREG_REF_L1_mvd_l1_x_shift                                      (0)
#define  ENCODEBLKREG_REF_L1_ref_idx_l1_mask                                     (0x00C00000)
#define  ENCODEBLKREG_REF_L1_mvd_l1_y_mask                                       (0x003FF000)
#define  ENCODEBLKREG_REF_L1_mvd_l1_x_mask                                       (0x00000FFF)
#define  ENCODEBLKREG_REF_L1_ref_idx_l1(data)                                    (0x00C00000&((data)<<22))
#define  ENCODEBLKREG_REF_L1_mvd_l1_y(data)                                      (0x003FF000&((data)<<12))
#define  ENCODEBLKREG_REF_L1_mvd_l1_x(data)                                      (0x00000FFF&(data))
#define  ENCODEBLKREG_REF_L1_get_ref_idx_l1(data)                                ((0x00C00000&(data))>>22)
#define  ENCODEBLKREG_REF_L1_get_mvd_l1_y(data)                                  ((0x003FF000&(data))>>12)
#define  ENCODEBLKREG_REF_L1_get_mvd_l1_x(data)                                  (0x00000FFF&(data))
#define  ENCODEBLKREG_REF_L1_ref_idx_l1_src(data)                                ((0x00C00000&(data))>>22)
#define  ENCODEBLKREG_REF_L1_mvd_l1_y_src(data)                                  ((0x003FF000&(data))>>12)
#define  ENCODEBLKREG_REF_L1_mvd_l1_x_src(data)                                  (0x00000FFF&(data))

#define  ENCODEBLKREG_REF_L1_1                                                  0x1800F464
#define  ENCODEBLKREG_REF_L1_1_reg_addr                                          "0xB800F464"
#define  ENCODEBLKREG_REF_L1_1_reg                                               0xB800F464
#define  ENCODEBLKREG_REF_L1_1_inst_addr                                         "0x0011"
#define  ENCODEBLKREG_REF_L1_1_inst_adr                                          "0x0019"
#define  ENCODEBLKREG_REF_L1_1_inst                                              0x0019
#define  set_ENCODEBLKREG_REF_L1_1_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_1_reg)=data)
#define  get_ENCODEBLKREG_REF_L1_1_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_1_reg))

#define  ENCODEBLKREG_REF_L1_2                                                  0x1800F468
#define  ENCODEBLKREG_REF_L1_2_reg_addr                                          "0xB800F468"
#define  ENCODEBLKREG_REF_L1_2_reg                                               0xB800F468
#define  ENCODEBLKREG_REF_L1_2_inst_addr                                         "0x0012"
#define  ENCODEBLKREG_REF_L1_2_inst_adr                                          "0x001A"
#define  ENCODEBLKREG_REF_L1_2_inst                                              0x001A
#define  set_ENCODEBLKREG_REF_L1_2_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_2_reg)=data)
#define  get_ENCODEBLKREG_REF_L1_2_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_2_reg))

#define  ENCODEBLKREG_REF_L1_3                                                  0x1800F46C
#define  ENCODEBLKREG_REF_L1_3_reg_addr                                          "0xB800F46C"
#define  ENCODEBLKREG_REF_L1_3_reg                                               0xB800F46C
#define  ENCODEBLKREG_REF_L1_3_inst_addr                                         "0x0013"
#define  ENCODEBLKREG_REF_L1_3_inst_adr                                          "0x001B"
#define  ENCODEBLKREG_REF_L1_3_inst                                              0x001B
#define  set_ENCODEBLKREG_REF_L1_3_reg(data)                                     (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_3_reg)=data)
#define  get_ENCODEBLKREG_REF_L1_3_reg                                           (*((volatile unsigned int*)ENCODEBLKREG_REF_L1_3_reg))

#define  ENCODEBLKREG_TOTAL_COEF1                                               0x1800F470
#define  ENCODEBLKREG_TOTAL_COEF1_reg_addr                                       "0xB800F470"
#define  ENCODEBLKREG_TOTAL_COEF1_reg                                            0xB800F470
#define  ENCODEBLKREG_TOTAL_COEF1_inst_addr                                      "0x0014"
#define  ENCODEBLKREG_TOTAL_COEF1_inst_adr                                       "0x001C"
#define  ENCODEBLKREG_TOTAL_COEF1_inst                                           0x001C
#define  set_ENCODEBLKREG_TOTAL_COEF1_reg(data)                                  (*((volatile unsigned int*)ENCODEBLKREG_TOTAL_COEF1_reg)=data)
#define  get_ENCODEBLKREG_TOTAL_COEF1_reg                                        (*((volatile unsigned int*)ENCODEBLKREG_TOTAL_COEF1_reg))
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_d_shift                              (15)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_c_shift                              (10)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_b_shift                              (5)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_a_shift                              (0)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_d_mask                               (0x000F8000)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_c_mask                               (0x00007C00)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_b_mask                               (0x000003E0)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_a_mask                               (0x0000001F)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_d(data)                              (0x000F8000&((data)<<15))
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_c(data)                              (0x00007C00&((data)<<10))
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_b(data)                              (0x000003E0&((data)<<5))
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_a(data)                              (0x0000001F&(data))
#define  ENCODEBLKREG_TOTAL_COEF1_get_left_luma_d(data)                          ((0x000F8000&(data))>>15)
#define  ENCODEBLKREG_TOTAL_COEF1_get_left_luma_c(data)                          ((0x00007C00&(data))>>10)
#define  ENCODEBLKREG_TOTAL_COEF1_get_left_luma_b(data)                          ((0x000003E0&(data))>>5)
#define  ENCODEBLKREG_TOTAL_COEF1_get_left_luma_a(data)                          (0x0000001F&(data))
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_d_src(data)                          ((0x000F8000&(data))>>15)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_c_src(data)                          ((0x00007C00&(data))>>10)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_b_src(data)                          ((0x000003E0&(data))>>5)
#define  ENCODEBLKREG_TOTAL_COEF1_left_luma_a_src(data)                          (0x0000001F&(data))

#define  ENCODEBLKREG_TOTAL_COEF2                                               0x1800F474
#define  ENCODEBLKREG_TOTAL_COEF2_reg_addr                                       "0xB800F474"
#define  ENCODEBLKREG_TOTAL_COEF2_reg                                            0xB800F474
#define  ENCODEBLKREG_TOTAL_COEF2_inst_addr                                      "0x0015"
#define  ENCODEBLKREG_TOTAL_COEF2_inst_adr                                       "0x001D"
#define  ENCODEBLKREG_TOTAL_COEF2_inst                                           0x001D
#define  set_ENCODEBLKREG_TOTAL_COEF2_reg(data)                                  (*((volatile unsigned int*)ENCODEBLKREG_TOTAL_COEF2_reg)=data)
#define  get_ENCODEBLKREG_TOTAL_COEF2_reg                                        (*((volatile unsigned int*)ENCODEBLKREG_TOTAL_COEF2_reg))
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_a_shift                                (15)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_b_shift                                (10)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_a_shift                                (5)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_b_shift                                (0)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_a_mask                                 (0x000F8000)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_b_mask                                 (0x00007C00)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_a_mask                                 (0x000003E0)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_b_mask                                 (0x0000001F)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_a(data)                                (0x000F8000&((data)<<15))
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_b(data)                                (0x00007C00&((data)<<10))
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_a(data)                                (0x000003E0&((data)<<5))
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_b(data)                                (0x0000001F&(data))
#define  ENCODEBLKREG_TOTAL_COEF2_get_left_cb_a(data)                            ((0x000F8000&(data))>>15)
#define  ENCODEBLKREG_TOTAL_COEF2_get_left_cb_b(data)                            ((0x00007C00&(data))>>10)
#define  ENCODEBLKREG_TOTAL_COEF2_get_left_cr_a(data)                            ((0x000003E0&(data))>>5)
#define  ENCODEBLKREG_TOTAL_COEF2_get_left_cr_b(data)                            (0x0000001F&(data))
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_a_src(data)                            ((0x000F8000&(data))>>15)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cb_b_src(data)                            ((0x00007C00&(data))>>10)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_a_src(data)                            ((0x000003E0&(data))>>5)
#define  ENCODEBLKREG_TOTAL_COEF2_left_cr_b_src(data)                            (0x0000001F&(data))

#define  ENCODEBLKREG_CABAC_LEFT_0                                              0x1800F478
#define  ENCODEBLKREG_CABAC_LEFT_0_reg_addr                                      "0xB800F478"
#define  ENCODEBLKREG_CABAC_LEFT_0_reg                                           0xB800F478
#define  ENCODEBLKREG_CABAC_LEFT_0_inst_addr                                     "0x0016"
#define  ENCODEBLKREG_CABAC_LEFT_0_inst_adr                                      "0x001E"
#define  ENCODEBLKREG_CABAC_LEFT_0_inst                                          0x001E
#define  set_ENCODEBLKREG_CABAC_LEFT_0_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_0_reg)=data)
#define  get_ENCODEBLKREG_CABAC_LEFT_0_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_0_reg))
#define  ENCODEBLKREG_CABAC_LEFT_left_nb_shift                                   (0)
#define  ENCODEBLKREG_CABAC_LEFT_left_nb_mask                                    (0xFFFFFFFF)
#define  ENCODEBLKREG_CABAC_LEFT_left_nb(data)                                   (0xFFFFFFFF&(data))
#define  ENCODEBLKREG_CABAC_LEFT_get_left_nb(data)                               (0xFFFFFFFF&(data))
#define  ENCODEBLKREG_CABAC_LEFT_left_nb_src(data)                               (0xFFFFFFFF&(data))

#define  ENCODEBLKREG_CABAC_LEFT_1                                              0x1800F47C
#define  ENCODEBLKREG_CABAC_LEFT_1_reg_addr                                      "0xB800F47C"
#define  ENCODEBLKREG_CABAC_LEFT_1_reg                                           0xB800F47C
#define  ENCODEBLKREG_CABAC_LEFT_1_inst_addr                                     "0x0017"
#define  ENCODEBLKREG_CABAC_LEFT_1_inst_adr                                      "0x001F"
#define  ENCODEBLKREG_CABAC_LEFT_1_inst                                          0x001F
#define  set_ENCODEBLKREG_CABAC_LEFT_1_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_1_reg)=data)
#define  get_ENCODEBLKREG_CABAC_LEFT_1_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_1_reg))

#define  ENCODEBLKREG_CABAC_LEFT_2                                              0x1800F480
#define  ENCODEBLKREG_CABAC_LEFT_2_reg_addr                                      "0xB800F480"
#define  ENCODEBLKREG_CABAC_LEFT_2_reg                                           0xB800F480
#define  ENCODEBLKREG_CABAC_LEFT_2_inst_addr                                     "0x0018"
#define  ENCODEBLKREG_CABAC_LEFT_2_inst_adr                                      "0x0020"
#define  ENCODEBLKREG_CABAC_LEFT_2_inst                                          0x0020
#define  set_ENCODEBLKREG_CABAC_LEFT_2_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_2_reg)=data)
#define  get_ENCODEBLKREG_CABAC_LEFT_2_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_2_reg))

#define  ENCODEBLKREG_CABAC_LEFT_3                                              0x1800F484
#define  ENCODEBLKREG_CABAC_LEFT_3_reg_addr                                      "0xB800F484"
#define  ENCODEBLKREG_CABAC_LEFT_3_reg                                           0xB800F484
#define  ENCODEBLKREG_CABAC_LEFT_3_inst_addr                                     "0x0019"
#define  ENCODEBLKREG_CABAC_LEFT_3_inst_adr                                      "0x0021"
#define  ENCODEBLKREG_CABAC_LEFT_3_inst                                          0x0021
#define  set_ENCODEBLKREG_CABAC_LEFT_3_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_3_reg)=data)
#define  get_ENCODEBLKREG_CABAC_LEFT_3_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_3_reg))

#define  ENCODEBLKREG_CABAC_LEFT_4                                              0x1800F488
#define  ENCODEBLKREG_CABAC_LEFT_4_reg_addr                                      "0xB800F488"
#define  ENCODEBLKREG_CABAC_LEFT_4_reg                                           0xB800F488
#define  ENCODEBLKREG_CABAC_LEFT_4_inst_addr                                     "0x001A"
#define  ENCODEBLKREG_CABAC_LEFT_4_inst_adr                                      "0x0022"
#define  ENCODEBLKREG_CABAC_LEFT_4_inst                                          0x0022
#define  set_ENCODEBLKREG_CABAC_LEFT_4_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_4_reg)=data)
#define  get_ENCODEBLKREG_CABAC_LEFT_4_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_4_reg))

#define  ENCODEBLKREG_CABAC_LEFT_5                                              0x1800F48C
#define  ENCODEBLKREG_CABAC_LEFT_5_reg_addr                                      "0xB800F48C"
#define  ENCODEBLKREG_CABAC_LEFT_5_reg                                           0xB800F48C
#define  ENCODEBLKREG_CABAC_LEFT_5_inst_addr                                     "0x001B"
#define  ENCODEBLKREG_CABAC_LEFT_5_inst_adr                                      "0x0023"
#define  ENCODEBLKREG_CABAC_LEFT_5_inst                                          0x0023
#define  set_ENCODEBLKREG_CABAC_LEFT_5_reg(data)                                 (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_5_reg)=data)
#define  get_ENCODEBLKREG_CABAC_LEFT_5_reg                                       (*((volatile unsigned int*)ENCODEBLKREG_CABAC_LEFT_5_reg))

#ifdef _ENCODEBLKREG_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ENCODEBLKREG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  vlc_bank:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  tq_bank:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cm_mstr:2;
    };
}ENCODEBLKREG_CM_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  vlc_pred_counter:8;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  vlc_curmb_addr:8;
    };
}ENCODEBLKREG_CURADR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  entropy_coding_mode:1;
        RBus_UInt32  pic_init_qp:6;
        RBus_UInt32  direct_8x8_inferflg:1;
        RBus_UInt32  transform_8x8_mode_flg:1;
        RBus_UInt32  num_ref_idx_l0_active_minus1:5;
        RBus_UInt32  num_ref_idx_l1_active_minus1:5;
    };
}ENCODEBLKREG_H264_CNTL_RBUS;

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
}ENCODEBLKREG_H264_CNTL2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enc_bitcnt:32;
    };
}ENCODEBLKREG_VLC_BITCNT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  qp_delta:6;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  mbtype:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  transform_size_8x8:1;
    };
}ENCODEBLKREG_VLC_MBTYPE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cbp6bits:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  subblkpat:24;
    };
}ENCODEBLKREG_VLC_CBP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mbpartition:9;
    };
}ENCODEBLKREG_MB_PARTITION_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mb_pred_mode:8;
    };
}ENCODEBLKREG_MB_PREDMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rem_mode:32;
    };
}ENCODEBLKREG_INTRA_PRED_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ref_idx_l0:2;
        RBus_UInt32  mvd_l0_y:10;
        RBus_UInt32  mvd_l0_x:12;
    };
}ENCODEBLKREG_REF_L0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ref_idx_l1:2;
        RBus_UInt32  mvd_l1_y:10;
        RBus_UInt32  mvd_l1_x:12;
    };
}ENCODEBLKREG_REF_L1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  left_luma_d:5;
        RBus_UInt32  left_luma_c:5;
        RBus_UInt32  left_luma_b:5;
        RBus_UInt32  left_luma_a:5;
    };
}ENCODEBLKREG_TOTAL_COEF1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  left_cb_a:5;
        RBus_UInt32  left_cb_b:5;
        RBus_UInt32  left_cr_a:5;
        RBus_UInt32  left_cr_b:5;
    };
}ENCODEBLKREG_TOTAL_COEF2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_nb:32;
    };
}ENCODEBLKREG_CABAC_LEFT_RBUS;

#else //apply LITTLE_ENDIAN

//======ENCODEBLKREG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_mstr:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  tq_bank:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  vlc_bank:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:25;
    };
}ENCODEBLKREG_CM_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vlc_curmb_addr:8;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  vlc_pred_counter:8;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  res1:14;
    };
}ENCODEBLKREG_CURADR_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num_ref_idx_l1_active_minus1:5;
        RBus_UInt32  num_ref_idx_l0_active_minus1:5;
        RBus_UInt32  transform_8x8_mode_flg:1;
        RBus_UInt32  direct_8x8_inferflg:1;
        RBus_UInt32  pic_init_qp:6;
        RBus_UInt32  entropy_coding_mode:1;
        RBus_UInt32  res1:13;
    };
}ENCODEBLKREG_H264_CNTL_RBUS;

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
}ENCODEBLKREG_H264_CNTL2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enc_bitcnt:32;
    };
}ENCODEBLKREG_VLC_BITCNT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  transform_size_8x8:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  mbtype:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  qp_delta:6;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  res1:11;
    };
}ENCODEBLKREG_VLC_MBTYPE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  subblkpat:24;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  cbp6bits:6;
        RBus_UInt32  write_enable2:1;
    };
}ENCODEBLKREG_VLC_CBP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbpartition:9;
        RBus_UInt32  res1:23;
    };
}ENCODEBLKREG_MB_PARTITION_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_pred_mode:8;
        RBus_UInt32  res1:24;
    };
}ENCODEBLKREG_MB_PREDMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rem_mode:32;
    };
}ENCODEBLKREG_INTRA_PRED_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvd_l0_x:12;
        RBus_UInt32  mvd_l0_y:10;
        RBus_UInt32  ref_idx_l0:2;
        RBus_UInt32  res1:8;
    };
}ENCODEBLKREG_REF_L0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvd_l1_x:12;
        RBus_UInt32  mvd_l1_y:10;
        RBus_UInt32  ref_idx_l1:2;
        RBus_UInt32  res1:8;
    };
}ENCODEBLKREG_REF_L1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_luma_a:5;
        RBus_UInt32  left_luma_b:5;
        RBus_UInt32  left_luma_c:5;
        RBus_UInt32  left_luma_d:5;
        RBus_UInt32  res1:12;
    };
}ENCODEBLKREG_TOTAL_COEF1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_cr_b:5;
        RBus_UInt32  left_cr_a:5;
        RBus_UInt32  left_cb_b:5;
        RBus_UInt32  left_cb_a:5;
        RBus_UInt32  res1:12;
    };
}ENCODEBLKREG_TOTAL_COEF2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  left_nb:32;
    };
}ENCODEBLKREG_CABAC_LEFT_RBUS;




#endif 


#endif 
#endif 
