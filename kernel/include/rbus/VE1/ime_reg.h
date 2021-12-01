/**
* @file Merlin5_LGCY_VE_IME_Arch_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IME_REG_H_
#define _RBUS_IME_REG_H_

#include "rbus_types.h"



//  IME Register Address
#define  IME_CTRL                                                               0x1800F200
#define  IME_CTRL_reg_addr                                                       "0xB800F200"
#define  IME_CTRL_reg                                                            0xB800F200
#define  IME_CTRL_inst_addr                                                      "0x0000"
#define  IME_CTRL_inst_adr                                                       "0x0080"
#define  IME_CTRL_inst                                                           0x0080
#define  set_IME_CTRL_reg(data)                                                  (*((volatile unsigned int*)IME_CTRL_reg)=data)
#define  get_IME_CTRL_reg                                                        (*((volatile unsigned int*)IME_CTRL_reg))
#define  IME_CTRL_ignore_ldref_shift                                             (20)
#define  IME_CTRL_int_stat_shift                                                 (17)
#define  IME_CTRL_int_en_shift                                                   (16)
#define  IME_CTRL_swind_y_shift                                                  (8)
#define  IME_CTRL_swind_x_shift                                                  (4)
#define  IME_CTRL_ignore_fme_shift                                               (3)
#define  IME_CTRL_mul_dec_shift                                                  (2)
#define  IME_CTRL_mul_req_shift                                                  (1)
#define  IME_CTRL_only16_shift                                                   (0)
#define  IME_CTRL_ignore_ldref_mask                                              (0x00100000)
#define  IME_CTRL_int_stat_mask                                                  (0x00020000)
#define  IME_CTRL_int_en_mask                                                    (0x00010000)
#define  IME_CTRL_swind_y_mask                                                   (0x00000F00)
#define  IME_CTRL_swind_x_mask                                                   (0x000000F0)
#define  IME_CTRL_ignore_fme_mask                                                (0x00000008)
#define  IME_CTRL_mul_dec_mask                                                   (0x00000004)
#define  IME_CTRL_mul_req_mask                                                   (0x00000002)
#define  IME_CTRL_only16_mask                                                    (0x00000001)
#define  IME_CTRL_ignore_ldref(data)                                             (0x00100000&((data)<<20))
#define  IME_CTRL_int_stat(data)                                                 (0x00020000&((data)<<17))
#define  IME_CTRL_int_en(data)                                                   (0x00010000&((data)<<16))
#define  IME_CTRL_swind_y(data)                                                  (0x00000F00&((data)<<8))
#define  IME_CTRL_swind_x(data)                                                  (0x000000F0&((data)<<4))
#define  IME_CTRL_ignore_fme(data)                                               (0x00000008&((data)<<3))
#define  IME_CTRL_mul_dec(data)                                                  (0x00000004&((data)<<2))
#define  IME_CTRL_mul_req(data)                                                  (0x00000002&((data)<<1))
#define  IME_CTRL_only16(data)                                                   (0x00000001&(data))
#define  IME_CTRL_get_ignore_ldref(data)                                         ((0x00100000&(data))>>20)
#define  IME_CTRL_get_int_stat(data)                                             ((0x00020000&(data))>>17)
#define  IME_CTRL_get_int_en(data)                                               ((0x00010000&(data))>>16)
#define  IME_CTRL_get_swind_y(data)                                              ((0x00000F00&(data))>>8)
#define  IME_CTRL_get_swind_x(data)                                              ((0x000000F0&(data))>>4)
#define  IME_CTRL_get_ignore_fme(data)                                           ((0x00000008&(data))>>3)
#define  IME_CTRL_get_mul_dec(data)                                              ((0x00000004&(data))>>2)
#define  IME_CTRL_get_mul_req(data)                                              ((0x00000002&(data))>>1)
#define  IME_CTRL_get_only16(data)                                               (0x00000001&(data))
#define  IME_CTRL_ignore_ldref_src(data)                                         ((0x00100000&(data))>>20)
#define  IME_CTRL_int_stat_src(data)                                             ((0x00020000&(data))>>17)
#define  IME_CTRL_int_en_src(data)                                               ((0x00010000&(data))>>16)
#define  IME_CTRL_swind_y_src(data)                                              ((0x00000F00&(data))>>8)
#define  IME_CTRL_swind_x_src(data)                                              ((0x000000F0&(data))>>4)
#define  IME_CTRL_ignore_fme_src(data)                                           ((0x00000008&(data))>>3)
#define  IME_CTRL_mul_dec_src(data)                                              ((0x00000004&(data))>>2)
#define  IME_CTRL_mul_req_src(data)                                              ((0x00000002&(data))>>1)
#define  IME_CTRL_only16_src(data)                                               (0x00000001&(data))

#define  IME_CTRL3                                                              0x1800F204
#define  IME_CTRL3_reg_addr                                                      "0xB800F204"
#define  IME_CTRL3_reg                                                           0xB800F204
#define  IME_CTRL3_inst_addr                                                     "0x0001"
#define  IME_CTRL3_inst_adr                                                      "0x0081"
#define  IME_CTRL3_inst                                                          0x0081
#define  set_IME_CTRL3_reg(data)                                                 (*((volatile unsigned int*)IME_CTRL3_reg)=data)
#define  get_IME_CTRL3_reg                                                       (*((volatile unsigned int*)IME_CTRL3_reg))
#define  IME_CTRL3_write_enable7_shift                                           (13)
#define  IME_CTRL3_dma_path_shift                                                (12)
#define  IME_CTRL3_write_enable6_shift                                           (11)
#define  IME_CTRL3_Sub1616_md_shift                                              (10)
#define  IME_CTRL3_write_enable5_shift                                           (9)
#define  IME_CTRL3_CR_thr_shift                                                  (8)
#define  IME_CTRL3_write_enable2_shift                                           (7)
#define  IME_CTRL3_E0_CR_on_shift                                                (6)
#define  IME_CTRL3_E0_CR_dst_sub3_shift                                          (4)
#define  IME_CTRL3_write_enable1_shift                                           (3)
#define  IME_CTRL3_E0_CR_src_shift                                               (0)
#define  IME_CTRL3_write_enable7_mask                                            (0x00002000)
#define  IME_CTRL3_dma_path_mask                                                 (0x00001000)
#define  IME_CTRL3_write_enable6_mask                                            (0x00000800)
#define  IME_CTRL3_Sub1616_md_mask                                               (0x00000400)
#define  IME_CTRL3_write_enable5_mask                                            (0x00000200)
#define  IME_CTRL3_CR_thr_mask                                                   (0x00000100)
#define  IME_CTRL3_write_enable2_mask                                            (0x00000080)
#define  IME_CTRL3_E0_CR_on_mask                                                 (0x00000040)
#define  IME_CTRL3_E0_CR_dst_sub3_mask                                           (0x00000030)
#define  IME_CTRL3_write_enable1_mask                                            (0x00000008)
#define  IME_CTRL3_E0_CR_src_mask                                                (0x00000007)
#define  IME_CTRL3_write_enable7(data)                                           (0x00002000&((data)<<13))
#define  IME_CTRL3_dma_path(data)                                                (0x00001000&((data)<<12))
#define  IME_CTRL3_write_enable6(data)                                           (0x00000800&((data)<<11))
#define  IME_CTRL3_Sub1616_md(data)                                              (0x00000400&((data)<<10))
#define  IME_CTRL3_write_enable5(data)                                           (0x00000200&((data)<<9))
#define  IME_CTRL3_CR_thr(data)                                                  (0x00000100&((data)<<8))
#define  IME_CTRL3_write_enable2(data)                                           (0x00000080&((data)<<7))
#define  IME_CTRL3_E0_CR_on(data)                                                (0x00000040&((data)<<6))
#define  IME_CTRL3_E0_CR_dst_sub3(data)                                          (0x00000030&((data)<<4))
#define  IME_CTRL3_write_enable1(data)                                           (0x00000008&((data)<<3))
#define  IME_CTRL3_E0_CR_src(data)                                               (0x00000007&(data))
#define  IME_CTRL3_get_write_enable7(data)                                       ((0x00002000&(data))>>13)
#define  IME_CTRL3_get_dma_path(data)                                            ((0x00001000&(data))>>12)
#define  IME_CTRL3_get_write_enable6(data)                                       ((0x00000800&(data))>>11)
#define  IME_CTRL3_get_Sub1616_md(data)                                          ((0x00000400&(data))>>10)
#define  IME_CTRL3_get_write_enable5(data)                                       ((0x00000200&(data))>>9)
#define  IME_CTRL3_get_CR_thr(data)                                              ((0x00000100&(data))>>8)
#define  IME_CTRL3_get_write_enable2(data)                                       ((0x00000080&(data))>>7)
#define  IME_CTRL3_get_E0_CR_on(data)                                            ((0x00000040&(data))>>6)
#define  IME_CTRL3_get_E0_CR_dst_sub3(data)                                      ((0x00000030&(data))>>4)
#define  IME_CTRL3_get_write_enable1(data)                                       ((0x00000008&(data))>>3)
#define  IME_CTRL3_get_E0_CR_src(data)                                           (0x00000007&(data))
#define  IME_CTRL3_write_enable7_src(data)                                       ((0x00002000&(data))>>13)
#define  IME_CTRL3_dma_path_src(data)                                            ((0x00001000&(data))>>12)
#define  IME_CTRL3_write_enable6_src(data)                                       ((0x00000800&(data))>>11)
#define  IME_CTRL3_Sub1616_md_src(data)                                          ((0x00000400&(data))>>10)
#define  IME_CTRL3_write_enable5_src(data)                                       ((0x00000200&(data))>>9)
#define  IME_CTRL3_CR_thr_src(data)                                              ((0x00000100&(data))>>8)
#define  IME_CTRL3_write_enable2_src(data)                                       ((0x00000080&(data))>>7)
#define  IME_CTRL3_E0_CR_on_src(data)                                            ((0x00000040&(data))>>6)
#define  IME_CTRL3_E0_CR_dst_sub3_src(data)                                      ((0x00000030&(data))>>4)
#define  IME_CTRL3_write_enable1_src(data)                                       ((0x00000008&(data))>>3)
#define  IME_CTRL3_E0_CR_src_src(data)                                           (0x00000007&(data))

#define  IME_TMB_IDX_0                                                          0x1800F208
#define  IME_TMB_IDX_0_reg_addr                                                  "0xB800F208"
#define  IME_TMB_IDX_0_reg                                                       0xB800F208
#define  IME_TMB_IDX_0_inst_addr                                                 "0x0002"
#define  IME_TMB_IDX_0_inst_adr                                                  "0x0082"
#define  IME_TMB_IDX_0_inst                                                      0x0082
#define  set_IME_TMB_IDX_0_reg(data)                                             (*((volatile unsigned int*)IME_TMB_IDX_0_reg)=data)
#define  get_IME_TMB_IDX_0_reg                                                   (*((volatile unsigned int*)IME_TMB_IDX_0_reg))
#define  IME_TMB_IDX_idx_shift                                                   (0)
#define  IME_TMB_IDX_idx_mask                                                    (0x0000007F)
#define  IME_TMB_IDX_idx(data)                                                   (0x0000007F&(data))
#define  IME_TMB_IDX_get_idx(data)                                               (0x0000007F&(data))
#define  IME_TMB_IDX_idx_src(data)                                               (0x0000007F&(data))

#define  IME_TMB_IDX_1                                                          0x1800F20C
#define  IME_TMB_IDX_1_reg_addr                                                  "0xB800F20C"
#define  IME_TMB_IDX_1_reg                                                       0xB800F20C
#define  IME_TMB_IDX_1_inst_addr                                                 "0x0003"
#define  IME_TMB_IDX_1_inst_adr                                                  "0x0083"
#define  IME_TMB_IDX_1_inst                                                      0x0083
#define  set_IME_TMB_IDX_1_reg(data)                                             (*((volatile unsigned int*)IME_TMB_IDX_1_reg)=data)
#define  get_IME_TMB_IDX_1_reg                                                   (*((volatile unsigned int*)IME_TMB_IDX_1_reg))

#define  IME_TMB_POS_0                                                          0x1800F210
#define  IME_TMB_POS_0_reg_addr                                                  "0xB800F210"
#define  IME_TMB_POS_0_reg                                                       0xB800F210
#define  IME_TMB_POS_0_inst_addr                                                 "0x0004"
#define  IME_TMB_POS_0_inst_adr                                                  "0x0084"
#define  IME_TMB_POS_0_inst                                                      0x0084
#define  set_IME_TMB_POS_0_reg(data)                                             (*((volatile unsigned int*)IME_TMB_POS_0_reg)=data)
#define  get_IME_TMB_POS_0_reg                                                   (*((volatile unsigned int*)IME_TMB_POS_0_reg))
#define  IME_TMB_POS_y_shift                                                     (16)
#define  IME_TMB_POS_x_shift                                                     (0)
#define  IME_TMB_POS_y_mask                                                      (0x0FFF0000)
#define  IME_TMB_POS_x_mask                                                      (0x00000FFF)
#define  IME_TMB_POS_y(data)                                                     (0x0FFF0000&((data)<<16))
#define  IME_TMB_POS_x(data)                                                     (0x00000FFF&(data))
#define  IME_TMB_POS_get_y(data)                                                 ((0x0FFF0000&(data))>>16)
#define  IME_TMB_POS_get_x(data)                                                 (0x00000FFF&(data))
#define  IME_TMB_POS_y_src(data)                                                 ((0x0FFF0000&(data))>>16)
#define  IME_TMB_POS_x_src(data)                                                 (0x00000FFF&(data))

#define  IME_TMB_POS_1                                                          0x1800F214
#define  IME_TMB_POS_1_reg_addr                                                  "0xB800F214"
#define  IME_TMB_POS_1_reg                                                       0xB800F214
#define  IME_TMB_POS_1_inst_addr                                                 "0x0005"
#define  IME_TMB_POS_1_inst_adr                                                  "0x0085"
#define  IME_TMB_POS_1_inst                                                      0x0085
#define  set_IME_TMB_POS_1_reg(data)                                             (*((volatile unsigned int*)IME_TMB_POS_1_reg)=data)
#define  get_IME_TMB_POS_1_reg                                                   (*((volatile unsigned int*)IME_TMB_POS_1_reg))

#define  IME_RMB_IDX_0                                                          0x1800F218
#define  IME_RMB_IDX_0_reg_addr                                                  "0xB800F218"
#define  IME_RMB_IDX_0_reg                                                       0xB800F218
#define  IME_RMB_IDX_0_inst_addr                                                 "0x0006"
#define  IME_RMB_IDX_0_inst_adr                                                  "0x0086"
#define  IME_RMB_IDX_0_inst                                                      0x0086
#define  set_IME_RMB_IDX_0_reg(data)                                             (*((volatile unsigned int*)IME_RMB_IDX_0_reg)=data)
#define  get_IME_RMB_IDX_0_reg                                                   (*((volatile unsigned int*)IME_RMB_IDX_0_reg))
#define  IME_RMB_IDX_idx_shift                                                   (0)
#define  IME_RMB_IDX_idx_mask                                                    (0x0000007F)
#define  IME_RMB_IDX_idx(data)                                                   (0x0000007F&(data))
#define  IME_RMB_IDX_get_idx(data)                                               (0x0000007F&(data))
#define  IME_RMB_IDX_idx_src(data)                                               (0x0000007F&(data))

#define  IME_RMB_IDX_1                                                          0x1800F21C
#define  IME_RMB_IDX_1_reg_addr                                                  "0xB800F21C"
#define  IME_RMB_IDX_1_reg                                                       0xB800F21C
#define  IME_RMB_IDX_1_inst_addr                                                 "0x0007"
#define  IME_RMB_IDX_1_inst_adr                                                  "0x0087"
#define  IME_RMB_IDX_1_inst                                                      0x0087
#define  set_IME_RMB_IDX_1_reg(data)                                             (*((volatile unsigned int*)IME_RMB_IDX_1_reg)=data)
#define  get_IME_RMB_IDX_1_reg                                                   (*((volatile unsigned int*)IME_RMB_IDX_1_reg))

#define  IME_RMB_SPOS_0                                                         0x1800F220
#define  IME_RMB_SPOS_0_reg_addr                                                 "0xB800F220"
#define  IME_RMB_SPOS_0_reg                                                      0xB800F220
#define  IME_RMB_SPOS_0_inst_addr                                                "0x0008"
#define  IME_RMB_SPOS_0_inst_adr                                                 "0x0088"
#define  IME_RMB_SPOS_0_inst                                                     0x0088
#define  set_IME_RMB_SPOS_0_reg(data)                                            (*((volatile unsigned int*)IME_RMB_SPOS_0_reg)=data)
#define  get_IME_RMB_SPOS_0_reg                                                  (*((volatile unsigned int*)IME_RMB_SPOS_0_reg))
#define  IME_RMB_SPOS_rsy_shift                                                  (16)
#define  IME_RMB_SPOS_rsx_shift                                                  (0)
#define  IME_RMB_SPOS_rsy_mask                                                   (0x0FFF0000)
#define  IME_RMB_SPOS_rsx_mask                                                   (0x00000FFF)
#define  IME_RMB_SPOS_rsy(data)                                                  (0x0FFF0000&((data)<<16))
#define  IME_RMB_SPOS_rsx(data)                                                  (0x00000FFF&(data))
#define  IME_RMB_SPOS_get_rsy(data)                                              ((0x0FFF0000&(data))>>16)
#define  IME_RMB_SPOS_get_rsx(data)                                              (0x00000FFF&(data))
#define  IME_RMB_SPOS_rsy_src(data)                                              ((0x0FFF0000&(data))>>16)
#define  IME_RMB_SPOS_rsx_src(data)                                              (0x00000FFF&(data))

#define  IME_RMB_SPOS_1                                                         0x1800F224
#define  IME_RMB_SPOS_1_reg_addr                                                 "0xB800F224"
#define  IME_RMB_SPOS_1_reg                                                      0xB800F224
#define  IME_RMB_SPOS_1_inst_addr                                                "0x0009"
#define  IME_RMB_SPOS_1_inst_adr                                                 "0x0089"
#define  IME_RMB_SPOS_1_inst                                                     0x0089
#define  set_IME_RMB_SPOS_1_reg(data)                                            (*((volatile unsigned int*)IME_RMB_SPOS_1_reg)=data)
#define  get_IME_RMB_SPOS_1_reg                                                  (*((volatile unsigned int*)IME_RMB_SPOS_1_reg))

#define  IME_RMB_EPOS_0                                                         0x1800F228
#define  IME_RMB_EPOS_0_reg_addr                                                 "0xB800F228"
#define  IME_RMB_EPOS_0_reg                                                      0xB800F228
#define  IME_RMB_EPOS_0_inst_addr                                                "0x000A"
#define  IME_RMB_EPOS_0_inst_adr                                                 "0x008A"
#define  IME_RMB_EPOS_0_inst                                                     0x008A
#define  set_IME_RMB_EPOS_0_reg(data)                                            (*((volatile unsigned int*)IME_RMB_EPOS_0_reg)=data)
#define  get_IME_RMB_EPOS_0_reg                                                  (*((volatile unsigned int*)IME_RMB_EPOS_0_reg))
#define  IME_RMB_EPOS_rey_shift                                                  (16)
#define  IME_RMB_EPOS_rex_shift                                                  (0)
#define  IME_RMB_EPOS_rey_mask                                                   (0x0FFF0000)
#define  IME_RMB_EPOS_rex_mask                                                   (0x00000FFF)
#define  IME_RMB_EPOS_rey(data)                                                  (0x0FFF0000&((data)<<16))
#define  IME_RMB_EPOS_rex(data)                                                  (0x00000FFF&(data))
#define  IME_RMB_EPOS_get_rey(data)                                              ((0x0FFF0000&(data))>>16)
#define  IME_RMB_EPOS_get_rex(data)                                              (0x00000FFF&(data))
#define  IME_RMB_EPOS_rey_src(data)                                              ((0x0FFF0000&(data))>>16)
#define  IME_RMB_EPOS_rex_src(data)                                              (0x00000FFF&(data))

#define  IME_RMB_EPOS_1                                                         0x1800F22C
#define  IME_RMB_EPOS_1_reg_addr                                                 "0xB800F22C"
#define  IME_RMB_EPOS_1_reg                                                      0xB800F22C
#define  IME_RMB_EPOS_1_inst_addr                                                "0x000B"
#define  IME_RMB_EPOS_1_inst_adr                                                 "0x008B"
#define  IME_RMB_EPOS_1_inst                                                     0x008B
#define  set_IME_RMB_EPOS_1_reg(data)                                            (*((volatile unsigned int*)IME_RMB_EPOS_1_reg)=data)
#define  get_IME_RMB_EPOS_1_reg                                                  (*((volatile unsigned int*)IME_RMB_EPOS_1_reg))

#define  IME_CAND_CTRL                                                          0x1800F230
#define  IME_CAND_CTRL_reg_addr                                                  "0xB800F230"
#define  IME_CAND_CTRL_reg                                                       0xB800F230
#define  IME_CAND_CTRL_inst_addr                                                 "0x000C"
#define  IME_CAND_CTRL_inst_adr                                                  "0x008C"
#define  IME_CAND_CTRL_inst                                                      0x008C
#define  set_IME_CAND_CTRL_reg(data)                                             (*((volatile unsigned int*)IME_CAND_CTRL_reg)=data)
#define  get_IME_CAND_CTRL_reg                                                   (*((volatile unsigned int*)IME_CAND_CTRL_reg))
#define  IME_CAND_CTRL_num_shift                                                 (0)
#define  IME_CAND_CTRL_num_mask                                                  (0x0000000F)
#define  IME_CAND_CTRL_num(data)                                                 (0x0000000F&(data))
#define  IME_CAND_CTRL_get_num(data)                                             (0x0000000F&(data))
#define  IME_CAND_CTRL_num_src(data)                                             (0x0000000F&(data))

#define  IME_CAND_LIST_0                                                        0x1800F234
#define  IME_CAND_LIST_0_reg_addr                                                "0xB800F234"
#define  IME_CAND_LIST_0_reg                                                     0xB800F234
#define  IME_CAND_LIST_0_inst_addr                                               "0x000D"
#define  IME_CAND_LIST_0_inst_adr                                                "0x008D"
#define  IME_CAND_LIST_0_inst                                                    0x008D
#define  set_IME_CAND_LIST_0_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_0_reg)=data)
#define  get_IME_CAND_LIST_0_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_0_reg))
#define  IME_CAND_LIST_mvx_shift                                                 (8)
#define  IME_CAND_LIST_mvy_shift                                                 (0)
#define  IME_CAND_LIST_mvx_mask                                                  (0x0003FF00)
#define  IME_CAND_LIST_mvy_mask                                                  (0x0000007F)
#define  IME_CAND_LIST_mvx(data)                                                 (0x0003FF00&((data)<<8))
#define  IME_CAND_LIST_mvy(data)                                                 (0x0000007F&(data))
#define  IME_CAND_LIST_get_mvx(data)                                             ((0x0003FF00&(data))>>8)
#define  IME_CAND_LIST_get_mvy(data)                                             (0x0000007F&(data))
#define  IME_CAND_LIST_mvx_src(data)                                             ((0x0003FF00&(data))>>8)
#define  IME_CAND_LIST_mvy_src(data)                                             (0x0000007F&(data))

#define  IME_CAND_LIST_1                                                        0x1800F238
#define  IME_CAND_LIST_1_reg_addr                                                "0xB800F238"
#define  IME_CAND_LIST_1_reg                                                     0xB800F238
#define  IME_CAND_LIST_1_inst_addr                                               "0x000E"
#define  IME_CAND_LIST_1_inst_adr                                                "0x008E"
#define  IME_CAND_LIST_1_inst                                                    0x008E
#define  set_IME_CAND_LIST_1_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_1_reg)=data)
#define  get_IME_CAND_LIST_1_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_1_reg))

#define  IME_CAND_LIST_2                                                        0x1800F23C
#define  IME_CAND_LIST_2_reg_addr                                                "0xB800F23C"
#define  IME_CAND_LIST_2_reg                                                     0xB800F23C
#define  IME_CAND_LIST_2_inst_addr                                               "0x000F"
#define  IME_CAND_LIST_2_inst_adr                                                "0x008F"
#define  IME_CAND_LIST_2_inst                                                    0x008F
#define  set_IME_CAND_LIST_2_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_2_reg)=data)
#define  get_IME_CAND_LIST_2_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_2_reg))

#define  IME_CAND_LIST_3                                                        0x1800F240
#define  IME_CAND_LIST_3_reg_addr                                                "0xB800F240"
#define  IME_CAND_LIST_3_reg                                                     0xB800F240
#define  IME_CAND_LIST_3_inst_addr                                               "0x0010"
#define  IME_CAND_LIST_3_inst_adr                                                "0x0090"
#define  IME_CAND_LIST_3_inst                                                    0x0090
#define  set_IME_CAND_LIST_3_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_3_reg)=data)
#define  get_IME_CAND_LIST_3_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_3_reg))

#define  IME_CAND_LIST_4                                                        0x1800F244
#define  IME_CAND_LIST_4_reg_addr                                                "0xB800F244"
#define  IME_CAND_LIST_4_reg                                                     0xB800F244
#define  IME_CAND_LIST_4_inst_addr                                               "0x0011"
#define  IME_CAND_LIST_4_inst_adr                                                "0x0091"
#define  IME_CAND_LIST_4_inst                                                    0x0091
#define  set_IME_CAND_LIST_4_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_4_reg)=data)
#define  get_IME_CAND_LIST_4_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_4_reg))

#define  IME_CAND_LIST_5                                                        0x1800F248
#define  IME_CAND_LIST_5_reg_addr                                                "0xB800F248"
#define  IME_CAND_LIST_5_reg                                                     0xB800F248
#define  IME_CAND_LIST_5_inst_addr                                               "0x0012"
#define  IME_CAND_LIST_5_inst_adr                                                "0x0092"
#define  IME_CAND_LIST_5_inst                                                    0x0092
#define  set_IME_CAND_LIST_5_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_5_reg)=data)
#define  get_IME_CAND_LIST_5_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_5_reg))

#define  IME_CAND_LIST_6                                                        0x1800F24C
#define  IME_CAND_LIST_6_reg_addr                                                "0xB800F24C"
#define  IME_CAND_LIST_6_reg                                                     0xB800F24C
#define  IME_CAND_LIST_6_inst_addr                                               "0x0013"
#define  IME_CAND_LIST_6_inst_adr                                                "0x0093"
#define  IME_CAND_LIST_6_inst                                                    0x0093
#define  set_IME_CAND_LIST_6_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_6_reg)=data)
#define  get_IME_CAND_LIST_6_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_6_reg))

#define  IME_CAND_LIST_7                                                        0x1800F250
#define  IME_CAND_LIST_7_reg_addr                                                "0xB800F250"
#define  IME_CAND_LIST_7_reg                                                     0xB800F250
#define  IME_CAND_LIST_7_inst_addr                                               "0x0014"
#define  IME_CAND_LIST_7_inst_adr                                                "0x0094"
#define  IME_CAND_LIST_7_inst                                                    0x0094
#define  set_IME_CAND_LIST_7_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_7_reg)=data)
#define  get_IME_CAND_LIST_7_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_7_reg))

#define  IME_CAND_LIST_8                                                        0x1800F254
#define  IME_CAND_LIST_8_reg_addr                                                "0xB800F254"
#define  IME_CAND_LIST_8_reg                                                     0xB800F254
#define  IME_CAND_LIST_8_inst_addr                                               "0x0015"
#define  IME_CAND_LIST_8_inst_adr                                                "0x0095"
#define  IME_CAND_LIST_8_inst                                                    0x0095
#define  set_IME_CAND_LIST_8_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_8_reg)=data)
#define  get_IME_CAND_LIST_8_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_8_reg))

#define  IME_CAND_LIST_9                                                        0x1800F258
#define  IME_CAND_LIST_9_reg_addr                                                "0xB800F258"
#define  IME_CAND_LIST_9_reg                                                     0xB800F258
#define  IME_CAND_LIST_9_inst_addr                                               "0x0016"
#define  IME_CAND_LIST_9_inst_adr                                                "0x0096"
#define  IME_CAND_LIST_9_inst                                                    0x0096
#define  set_IME_CAND_LIST_9_reg(data)                                           (*((volatile unsigned int*)IME_CAND_LIST_9_reg)=data)
#define  get_IME_CAND_LIST_9_reg                                                 (*((volatile unsigned int*)IME_CAND_LIST_9_reg))

#define  IME_CAND_LIST_10                                                       0x1800F25C
#define  IME_CAND_LIST_10_reg_addr                                               "0xB800F25C"
#define  IME_CAND_LIST_10_reg                                                    0xB800F25C
#define  IME_CAND_LIST_10_inst_addr                                              "0x0017"
#define  IME_CAND_LIST_10_inst_adr                                               "0x0097"
#define  IME_CAND_LIST_10_inst                                                   0x0097
#define  set_IME_CAND_LIST_10_reg(data)                                          (*((volatile unsigned int*)IME_CAND_LIST_10_reg)=data)
#define  get_IME_CAND_LIST_10_reg                                                (*((volatile unsigned int*)IME_CAND_LIST_10_reg))

#define  IME_CAND_LIST_11                                                       0x1800F260
#define  IME_CAND_LIST_11_reg_addr                                               "0xB800F260"
#define  IME_CAND_LIST_11_reg                                                    0xB800F260
#define  IME_CAND_LIST_11_inst_addr                                              "0x0018"
#define  IME_CAND_LIST_11_inst_adr                                               "0x0098"
#define  IME_CAND_LIST_11_inst                                                   0x0098
#define  set_IME_CAND_LIST_11_reg(data)                                          (*((volatile unsigned int*)IME_CAND_LIST_11_reg)=data)
#define  get_IME_CAND_LIST_11_reg                                                (*((volatile unsigned int*)IME_CAND_LIST_11_reg))

#define  IME_MVP                                                                0x1800F264
#define  IME_MVP_reg_addr                                                        "0xB800F264"
#define  IME_MVP_reg                                                             0xB800F264
#define  IME_MVP_inst_addr                                                       "0x0019"
#define  IME_MVP_inst_adr                                                        "0x0099"
#define  IME_MVP_inst                                                            0x0099
#define  set_IME_MVP_reg(data)                                                   (*((volatile unsigned int*)IME_MVP_reg)=data)
#define  get_IME_MVP_reg                                                         (*((volatile unsigned int*)IME_MVP_reg))
#define  IME_MVP_pmvx_shift                                                      (16)
#define  IME_MVP_pmvy_shift                                                      (0)
#define  IME_MVP_pmvx_mask                                                       (0x0FFF0000)
#define  IME_MVP_pmvy_mask                                                       (0x000001FF)
#define  IME_MVP_pmvx(data)                                                      (0x0FFF0000&((data)<<16))
#define  IME_MVP_pmvy(data)                                                      (0x000001FF&(data))
#define  IME_MVP_get_pmvx(data)                                                  ((0x0FFF0000&(data))>>16)
#define  IME_MVP_get_pmvy(data)                                                  (0x000001FF&(data))
#define  IME_MVP_pmvx_src(data)                                                  ((0x0FFF0000&(data))>>16)
#define  IME_MVP_pmvy_src(data)                                                  (0x000001FF&(data))

#define  IME_MVC                                                                0x1800F268
#define  IME_MVC_reg_addr                                                        "0xB800F268"
#define  IME_MVC_reg                                                             0xB800F268
#define  IME_MVC_inst_addr                                                       "0x001A"
#define  IME_MVC_inst_adr                                                        "0x009A"
#define  IME_MVC_inst                                                            0x009A
#define  set_IME_MVC_reg(data)                                                   (*((volatile unsigned int*)IME_MVC_reg)=data)
#define  get_IME_MVC_reg                                                         (*((volatile unsigned int*)IME_MVC_reg))
#define  IME_MVC_maxfrac_shift                                                   (24)
#define  IME_MVC_maxint_shift                                                    (16)
#define  IME_MVC_cbias_shift                                                     (8)
#define  IME_MVC_lambda_shift                                                    (0)
#define  IME_MVC_maxfrac_mask                                                    (0x1F000000)
#define  IME_MVC_maxint_mask                                                     (0x000F0000)
#define  IME_MVC_cbias_mask                                                      (0x0000FF00)
#define  IME_MVC_lambda_mask                                                     (0x0000007F)
#define  IME_MVC_maxfrac(data)                                                   (0x1F000000&((data)<<24))
#define  IME_MVC_maxint(data)                                                    (0x000F0000&((data)<<16))
#define  IME_MVC_cbias(data)                                                     (0x0000FF00&((data)<<8))
#define  IME_MVC_lambda(data)                                                    (0x0000007F&(data))
#define  IME_MVC_get_maxfrac(data)                                               ((0x1F000000&(data))>>24)
#define  IME_MVC_get_maxint(data)                                                ((0x000F0000&(data))>>16)
#define  IME_MVC_get_cbias(data)                                                 ((0x0000FF00&(data))>>8)
#define  IME_MVC_get_lambda(data)                                                (0x0000007F&(data))
#define  IME_MVC_maxfrac_src(data)                                               ((0x1F000000&(data))>>24)
#define  IME_MVC_maxint_src(data)                                                ((0x000F0000&(data))>>16)
#define  IME_MVC_cbias_src(data)                                                 ((0x0000FF00&(data))>>8)
#define  IME_MVC_lambda_src(data)                                                (0x0000007F&(data))

#define  IME_RSLT16                                                             0x1800F26C
#define  IME_RSLT16_reg_addr                                                     "0xB800F26C"
#define  IME_RSLT16_reg                                                          0xB800F26C
#define  IME_RSLT16_inst_addr                                                    "0x001B"
#define  IME_RSLT16_inst_adr                                                     "0x009B"
#define  IME_RSLT16_inst                                                         0x009B
#define  set_IME_RSLT16_reg(data)                                                (*((volatile unsigned int*)IME_RSLT16_reg)=data)
#define  get_IME_RSLT16_reg                                                      (*((volatile unsigned int*)IME_RSLT16_reg))
#define  IME_RSLT16_mvx_shift                                                    (8)
#define  IME_RSLT16_mvy_shift                                                    (0)
#define  IME_RSLT16_mvx_mask                                                     (0x0003FF00)
#define  IME_RSLT16_mvy_mask                                                     (0x0000007F)
#define  IME_RSLT16_mvx(data)                                                    (0x0003FF00&((data)<<8))
#define  IME_RSLT16_mvy(data)                                                    (0x0000007F&(data))
#define  IME_RSLT16_get_mvx(data)                                                ((0x0003FF00&(data))>>8)
#define  IME_RSLT16_get_mvy(data)                                                (0x0000007F&(data))
#define  IME_RSLT16_mvx_src(data)                                                ((0x0003FF00&(data))>>8)
#define  IME_RSLT16_mvy_src(data)                                                (0x0000007F&(data))

#define  IME_RSLT16_TCOST                                                       0x1800F270
#define  IME_RSLT16_TCOST_reg_addr                                               "0xB800F270"
#define  IME_RSLT16_TCOST_reg                                                    0xB800F270
#define  IME_RSLT16_TCOST_inst_addr                                              "0x001C"
#define  IME_RSLT16_TCOST_inst_adr                                               "0x009C"
#define  IME_RSLT16_TCOST_inst                                                   0x009C
#define  set_IME_RSLT16_TCOST_reg(data)                                          (*((volatile unsigned int*)IME_RSLT16_TCOST_reg)=data)
#define  get_IME_RSLT16_TCOST_reg                                                (*((volatile unsigned int*)IME_RSLT16_TCOST_reg))
#define  IME_RSLT16_TCOST_tcost_shift                                            (0)
#define  IME_RSLT16_TCOST_tcost_mask                                             (0x001FFFFF)
#define  IME_RSLT16_TCOST_tcost(data)                                            (0x001FFFFF&(data))
#define  IME_RSLT16_TCOST_get_tcost(data)                                        (0x001FFFFF&(data))
#define  IME_RSLT16_TCOST_tcost_src(data)                                        (0x001FFFFF&(data))

#define  IME_RSLT8_0                                                            0x1800F274
#define  IME_RSLT8_0_reg_addr                                                    "0xB800F274"
#define  IME_RSLT8_0_reg                                                         0xB800F274
#define  IME_RSLT8_0_inst_addr                                                   "0x001D"
#define  IME_RSLT8_0_inst_adr                                                    "0x009D"
#define  IME_RSLT8_0_inst                                                        0x009D
#define  set_IME_RSLT8_0_reg(data)                                               (*((volatile unsigned int*)IME_RSLT8_0_reg)=data)
#define  get_IME_RSLT8_0_reg                                                     (*((volatile unsigned int*)IME_RSLT8_0_reg))
#define  IME_RSLT8_mvx_shift                                                     (8)
#define  IME_RSLT8_mvy_shift                                                     (0)
#define  IME_RSLT8_mvx_mask                                                      (0x0003FF00)
#define  IME_RSLT8_mvy_mask                                                      (0x0000007F)
#define  IME_RSLT8_mvx(data)                                                     (0x0003FF00&((data)<<8))
#define  IME_RSLT8_mvy(data)                                                     (0x0000007F&(data))
#define  IME_RSLT8_get_mvx(data)                                                 ((0x0003FF00&(data))>>8)
#define  IME_RSLT8_get_mvy(data)                                                 (0x0000007F&(data))
#define  IME_RSLT8_mvx_src(data)                                                 ((0x0003FF00&(data))>>8)
#define  IME_RSLT8_mvy_src(data)                                                 (0x0000007F&(data))

#define  IME_RSLT8_1                                                            0x1800F278
#define  IME_RSLT8_1_reg_addr                                                    "0xB800F278"
#define  IME_RSLT8_1_reg                                                         0xB800F278
#define  IME_RSLT8_1_inst_addr                                                   "0x001E"
#define  IME_RSLT8_1_inst_adr                                                    "0x009E"
#define  IME_RSLT8_1_inst                                                        0x009E
#define  set_IME_RSLT8_1_reg(data)                                               (*((volatile unsigned int*)IME_RSLT8_1_reg)=data)
#define  get_IME_RSLT8_1_reg                                                     (*((volatile unsigned int*)IME_RSLT8_1_reg))

#define  IME_RSLT8_2                                                            0x1800F27C
#define  IME_RSLT8_2_reg_addr                                                    "0xB800F27C"
#define  IME_RSLT8_2_reg                                                         0xB800F27C
#define  IME_RSLT8_2_inst_addr                                                   "0x001F"
#define  IME_RSLT8_2_inst_adr                                                    "0x009F"
#define  IME_RSLT8_2_inst                                                        0x009F
#define  set_IME_RSLT8_2_reg(data)                                               (*((volatile unsigned int*)IME_RSLT8_2_reg)=data)
#define  get_IME_RSLT8_2_reg                                                     (*((volatile unsigned int*)IME_RSLT8_2_reg))

#define  IME_RSLT8_3                                                            0x1800F280
#define  IME_RSLT8_3_reg_addr                                                    "0xB800F280"
#define  IME_RSLT8_3_reg                                                         0xB800F280
#define  IME_RSLT8_3_inst_addr                                                   "0x0020"
#define  IME_RSLT8_3_inst_adr                                                    "0x00A0"
#define  IME_RSLT8_3_inst                                                        0x00A0
#define  set_IME_RSLT8_3_reg(data)                                               (*((volatile unsigned int*)IME_RSLT8_3_reg)=data)
#define  get_IME_RSLT8_3_reg                                                     (*((volatile unsigned int*)IME_RSLT8_3_reg))

#define  IME_RSLT8_TCOST_0                                                      0x1800F284
#define  IME_RSLT8_TCOST_0_reg_addr                                              "0xB800F284"
#define  IME_RSLT8_TCOST_0_reg                                                   0xB800F284
#define  IME_RSLT8_TCOST_0_inst_addr                                             "0x0021"
#define  IME_RSLT8_TCOST_0_inst_adr                                              "0x00A1"
#define  IME_RSLT8_TCOST_0_inst                                                  0x00A1
#define  set_IME_RSLT8_TCOST_0_reg(data)                                         (*((volatile unsigned int*)IME_RSLT8_TCOST_0_reg)=data)
#define  get_IME_RSLT8_TCOST_0_reg                                               (*((volatile unsigned int*)IME_RSLT8_TCOST_0_reg))
#define  IME_RSLT8_TCOST_tcost_shift                                             (0)
#define  IME_RSLT8_TCOST_tcost_mask                                              (0x001FFFFF)
#define  IME_RSLT8_TCOST_tcost(data)                                             (0x001FFFFF&(data))
#define  IME_RSLT8_TCOST_get_tcost(data)                                         (0x001FFFFF&(data))
#define  IME_RSLT8_TCOST_tcost_src(data)                                         (0x001FFFFF&(data))

#define  IME_RSLT8_TCOST_1                                                      0x1800F288
#define  IME_RSLT8_TCOST_1_reg_addr                                              "0xB800F288"
#define  IME_RSLT8_TCOST_1_reg                                                   0xB800F288
#define  IME_RSLT8_TCOST_1_inst_addr                                             "0x0022"
#define  IME_RSLT8_TCOST_1_inst_adr                                              "0x00A2"
#define  IME_RSLT8_TCOST_1_inst                                                  0x00A2
#define  set_IME_RSLT8_TCOST_1_reg(data)                                         (*((volatile unsigned int*)IME_RSLT8_TCOST_1_reg)=data)
#define  get_IME_RSLT8_TCOST_1_reg                                               (*((volatile unsigned int*)IME_RSLT8_TCOST_1_reg))

#define  IME_RSLT8_TCOST_2                                                      0x1800F28C
#define  IME_RSLT8_TCOST_2_reg_addr                                              "0xB800F28C"
#define  IME_RSLT8_TCOST_2_reg                                                   0xB800F28C
#define  IME_RSLT8_TCOST_2_inst_addr                                             "0x0023"
#define  IME_RSLT8_TCOST_2_inst_adr                                              "0x00A3"
#define  IME_RSLT8_TCOST_2_inst                                                  0x00A3
#define  set_IME_RSLT8_TCOST_2_reg(data)                                         (*((volatile unsigned int*)IME_RSLT8_TCOST_2_reg)=data)
#define  get_IME_RSLT8_TCOST_2_reg                                               (*((volatile unsigned int*)IME_RSLT8_TCOST_2_reg))

#define  IME_RSLT8_TCOST_3                                                      0x1800F290
#define  IME_RSLT8_TCOST_3_reg_addr                                              "0xB800F290"
#define  IME_RSLT8_TCOST_3_reg                                                   0xB800F290
#define  IME_RSLT8_TCOST_3_inst_addr                                             "0x0024"
#define  IME_RSLT8_TCOST_3_inst_adr                                              "0x00A4"
#define  IME_RSLT8_TCOST_3_inst                                                  0x00A4
#define  set_IME_RSLT8_TCOST_3_reg(data)                                         (*((volatile unsigned int*)IME_RSLT8_TCOST_3_reg)=data)
#define  get_IME_RSLT8_TCOST_3_reg                                               (*((volatile unsigned int*)IME_RSLT8_TCOST_3_reg))

#define  IME_ZMV                                                                0x1800F294
#define  IME_ZMV_reg_addr                                                        "0xB800F294"
#define  IME_ZMV_reg                                                             0xB800F294
#define  IME_ZMV_inst_addr                                                       "0x0025"
#define  IME_ZMV_inst_adr                                                        "0x00A5"
#define  IME_ZMV_inst                                                            0x00A5
#define  set_IME_ZMV_reg(data)                                                   (*((volatile unsigned int*)IME_ZMV_reg)=data)
#define  get_IME_ZMV_reg                                                         (*((volatile unsigned int*)IME_ZMV_reg))
#define  IME_ZMV_satd00_shift                                                    (0)
#define  IME_ZMV_satd00_mask                                                     (0x001FFFFF)
#define  IME_ZMV_satd00(data)                                                    (0x001FFFFF&(data))
#define  IME_ZMV_get_satd00(data)                                                (0x001FFFFF&(data))
#define  IME_ZMV_satd00_src(data)                                                (0x001FFFFF&(data))

#define  IME_RSLT16X8_0                                                         0x1800F298
#define  IME_RSLT16X8_0_reg_addr                                                 "0xB800F298"
#define  IME_RSLT16X8_0_reg                                                      0xB800F298
#define  IME_RSLT16X8_0_inst_addr                                                "0x0026"
#define  IME_RSLT16X8_0_inst_adr                                                 "0x00A6"
#define  IME_RSLT16X8_0_inst                                                     0x00A6
#define  set_IME_RSLT16X8_0_reg(data)                                            (*((volatile unsigned int*)IME_RSLT16X8_0_reg)=data)
#define  get_IME_RSLT16X8_0_reg                                                  (*((volatile unsigned int*)IME_RSLT16X8_0_reg))
#define  IME_RSLT16X8_mvx_shift                                                  (8)
#define  IME_RSLT16X8_mvy_shift                                                  (0)
#define  IME_RSLT16X8_mvx_mask                                                   (0x0003FF00)
#define  IME_RSLT16X8_mvy_mask                                                   (0x0000007F)
#define  IME_RSLT16X8_mvx(data)                                                  (0x0003FF00&((data)<<8))
#define  IME_RSLT16X8_mvy(data)                                                  (0x0000007F&(data))
#define  IME_RSLT16X8_get_mvx(data)                                              ((0x0003FF00&(data))>>8)
#define  IME_RSLT16X8_get_mvy(data)                                              (0x0000007F&(data))
#define  IME_RSLT16X8_mvx_src(data)                                              ((0x0003FF00&(data))>>8)
#define  IME_RSLT16X8_mvy_src(data)                                              (0x0000007F&(data))

#define  IME_RSLT16X8_1                                                         0x1800F29C
#define  IME_RSLT16X8_1_reg_addr                                                 "0xB800F29C"
#define  IME_RSLT16X8_1_reg                                                      0xB800F29C
#define  IME_RSLT16X8_1_inst_addr                                                "0x0027"
#define  IME_RSLT16X8_1_inst_adr                                                 "0x00A7"
#define  IME_RSLT16X8_1_inst                                                     0x00A7
#define  set_IME_RSLT16X8_1_reg(data)                                            (*((volatile unsigned int*)IME_RSLT16X8_1_reg)=data)
#define  get_IME_RSLT16X8_1_reg                                                  (*((volatile unsigned int*)IME_RSLT16X8_1_reg))

#define  IME_RSLT16X8_TCOST_0                                                   0x1800F2A0
#define  IME_RSLT16X8_TCOST_0_reg_addr                                           "0xB800F2A0"
#define  IME_RSLT16X8_TCOST_0_reg                                                0xB800F2A0
#define  IME_RSLT16X8_TCOST_0_inst_addr                                          "0x0028"
#define  IME_RSLT16X8_TCOST_0_inst_adr                                           "0x00A8"
#define  IME_RSLT16X8_TCOST_0_inst                                               0x00A8
#define  set_IME_RSLT16X8_TCOST_0_reg(data)                                      (*((volatile unsigned int*)IME_RSLT16X8_TCOST_0_reg)=data)
#define  get_IME_RSLT16X8_TCOST_0_reg                                            (*((volatile unsigned int*)IME_RSLT16X8_TCOST_0_reg))
#define  IME_RSLT16X8_TCOST_tcost_shift                                          (0)
#define  IME_RSLT16X8_TCOST_tcost_mask                                           (0x001FFFFF)
#define  IME_RSLT16X8_TCOST_tcost(data)                                          (0x001FFFFF&(data))
#define  IME_RSLT16X8_TCOST_get_tcost(data)                                      (0x001FFFFF&(data))
#define  IME_RSLT16X8_TCOST_tcost_src(data)                                      (0x001FFFFF&(data))

#define  IME_RSLT16X8_TCOST_1                                                   0x1800F2A4
#define  IME_RSLT16X8_TCOST_1_reg_addr                                           "0xB800F2A4"
#define  IME_RSLT16X8_TCOST_1_reg                                                0xB800F2A4
#define  IME_RSLT16X8_TCOST_1_inst_addr                                          "0x0029"
#define  IME_RSLT16X8_TCOST_1_inst_adr                                           "0x00A9"
#define  IME_RSLT16X8_TCOST_1_inst                                               0x00A9
#define  set_IME_RSLT16X8_TCOST_1_reg(data)                                      (*((volatile unsigned int*)IME_RSLT16X8_TCOST_1_reg)=data)
#define  get_IME_RSLT16X8_TCOST_1_reg                                            (*((volatile unsigned int*)IME_RSLT16X8_TCOST_1_reg))

#define  IME_RSLT8X16_0                                                         0x1800F2A8
#define  IME_RSLT8X16_0_reg_addr                                                 "0xB800F2A8"
#define  IME_RSLT8X16_0_reg                                                      0xB800F2A8
#define  IME_RSLT8X16_0_inst_addr                                                "0x002A"
#define  IME_RSLT8X16_0_inst_adr                                                 "0x00AA"
#define  IME_RSLT8X16_0_inst                                                     0x00AA
#define  set_IME_RSLT8X16_0_reg(data)                                            (*((volatile unsigned int*)IME_RSLT8X16_0_reg)=data)
#define  get_IME_RSLT8X16_0_reg                                                  (*((volatile unsigned int*)IME_RSLT8X16_0_reg))
#define  IME_RSLT8X16_mvx_shift                                                  (8)
#define  IME_RSLT8X16_mvy_shift                                                  (0)
#define  IME_RSLT8X16_mvx_mask                                                   (0x0003FF00)
#define  IME_RSLT8X16_mvy_mask                                                   (0x0000007F)
#define  IME_RSLT8X16_mvx(data)                                                  (0x0003FF00&((data)<<8))
#define  IME_RSLT8X16_mvy(data)                                                  (0x0000007F&(data))
#define  IME_RSLT8X16_get_mvx(data)                                              ((0x0003FF00&(data))>>8)
#define  IME_RSLT8X16_get_mvy(data)                                              (0x0000007F&(data))
#define  IME_RSLT8X16_mvx_src(data)                                              ((0x0003FF00&(data))>>8)
#define  IME_RSLT8X16_mvy_src(data)                                              (0x0000007F&(data))

#define  IME_RSLT8X16_1                                                         0x1800F2AC
#define  IME_RSLT8X16_1_reg_addr                                                 "0xB800F2AC"
#define  IME_RSLT8X16_1_reg                                                      0xB800F2AC
#define  IME_RSLT8X16_1_inst_addr                                                "0x002B"
#define  IME_RSLT8X16_1_inst_adr                                                 "0x00AB"
#define  IME_RSLT8X16_1_inst                                                     0x00AB
#define  set_IME_RSLT8X16_1_reg(data)                                            (*((volatile unsigned int*)IME_RSLT8X16_1_reg)=data)
#define  get_IME_RSLT8X16_1_reg                                                  (*((volatile unsigned int*)IME_RSLT8X16_1_reg))

#define  IME_RSLT8X16_TCOST_0                                                   0x1800F2B0
#define  IME_RSLT8X16_TCOST_0_reg_addr                                           "0xB800F2B0"
#define  IME_RSLT8X16_TCOST_0_reg                                                0xB800F2B0
#define  IME_RSLT8X16_TCOST_0_inst_addr                                          "0x002C"
#define  IME_RSLT8X16_TCOST_0_inst_adr                                           "0x00AC"
#define  IME_RSLT8X16_TCOST_0_inst                                               0x00AC
#define  set_IME_RSLT8X16_TCOST_0_reg(data)                                      (*((volatile unsigned int*)IME_RSLT8X16_TCOST_0_reg)=data)
#define  get_IME_RSLT8X16_TCOST_0_reg                                            (*((volatile unsigned int*)IME_RSLT8X16_TCOST_0_reg))
#define  IME_RSLT8X16_TCOST_tcost_shift                                          (0)
#define  IME_RSLT8X16_TCOST_tcost_mask                                           (0x001FFFFF)
#define  IME_RSLT8X16_TCOST_tcost(data)                                          (0x001FFFFF&(data))
#define  IME_RSLT8X16_TCOST_get_tcost(data)                                      (0x001FFFFF&(data))
#define  IME_RSLT8X16_TCOST_tcost_src(data)                                      (0x001FFFFF&(data))

#define  IME_RSLT8X16_TCOST_1                                                   0x1800F2B4
#define  IME_RSLT8X16_TCOST_1_reg_addr                                           "0xB800F2B4"
#define  IME_RSLT8X16_TCOST_1_reg                                                0xB800F2B4
#define  IME_RSLT8X16_TCOST_1_inst_addr                                          "0x002D"
#define  IME_RSLT8X16_TCOST_1_inst_adr                                           "0x00AD"
#define  IME_RSLT8X16_TCOST_1_inst                                               0x00AD
#define  set_IME_RSLT8X16_TCOST_1_reg(data)                                      (*((volatile unsigned int*)IME_RSLT8X16_TCOST_1_reg)=data)
#define  get_IME_RSLT8X16_TCOST_1_reg                                            (*((volatile unsigned int*)IME_RSLT8X16_TCOST_1_reg))

#define  IME_REF_COST                                                           0x1800F3B8
#define  IME_REF_COST_reg_addr                                                   "0xB800F3B8"
#define  IME_REF_COST_reg                                                        0xB800F3B8
#define  IME_REF_COST_inst_addr                                                  "0x002E"
#define  IME_REF_COST_inst_adr                                                   "0x00EE"
#define  IME_REF_COST_inst                                                       0x00EE
#define  set_IME_REF_COST_reg(data)                                              (*((volatile unsigned int*)IME_REF_COST_reg)=data)
#define  get_IME_REF_COST_reg                                                    (*((volatile unsigned int*)IME_REF_COST_reg))
#define  IME_REF_COST_Ref_cost_shift                                             (0)
#define  IME_REF_COST_Ref_cost_mask                                              (0x0000FFFF)
#define  IME_REF_COST_Ref_cost(data)                                             (0x0000FFFF&(data))
#define  IME_REF_COST_get_Ref_cost(data)                                         (0x0000FFFF&(data))
#define  IME_REF_COST_Ref_cost_src(data)                                         (0x0000FFFF&(data))

#define  IME_DBG                                                                0x1800F3BC
#define  IME_DBG_reg_addr                                                        "0xB800F3BC"
#define  IME_DBG_reg                                                             0xB800F3BC
#define  IME_DBG_inst_addr                                                       "0x002F"
#define  IME_DBG_inst_adr                                                        "0x00EF"
#define  IME_DBG_inst                                                            0x00EF
#define  set_IME_DBG_reg(data)                                                   (*((volatile unsigned int*)IME_DBG_reg)=data)
#define  get_IME_DBG_reg                                                         (*((volatile unsigned int*)IME_DBG_reg))
#define  IME_DBG_sel1_shift                                                      (4)
#define  IME_DBG_sel0_shift                                                      (1)
#define  IME_DBG_enable_shift                                                    (0)
#define  IME_DBG_sel1_mask                                                       (0x00000070)
#define  IME_DBG_sel0_mask                                                       (0x0000000E)
#define  IME_DBG_enable_mask                                                     (0x00000001)
#define  IME_DBG_sel1(data)                                                      (0x00000070&((data)<<4))
#define  IME_DBG_sel0(data)                                                      (0x0000000E&((data)<<1))
#define  IME_DBG_enable(data)                                                    (0x00000001&(data))
#define  IME_DBG_get_sel1(data)                                                  ((0x00000070&(data))>>4)
#define  IME_DBG_get_sel0(data)                                                  ((0x0000000E&(data))>>1)
#define  IME_DBG_get_enable(data)                                                (0x00000001&(data))
#define  IME_DBG_sel1_src(data)                                                  ((0x00000070&(data))>>4)
#define  IME_DBG_sel0_src(data)                                                  ((0x0000000E&(data))>>1)
#define  IME_DBG_enable_src(data)                                                (0x00000001&(data))

#define  IME_RDBG                                                               0x1800F3D0
#define  IME_RDBG_reg_addr                                                       "0xB800F3D0"
#define  IME_RDBG_reg                                                            0xB800F3D0
#define  IME_RDBG_inst_addr                                                      "0x0030"
#define  IME_RDBG_inst_adr                                                       "0x00F4"
#define  IME_RDBG_inst                                                           0x00F4
#define  set_IME_RDBG_reg(data)                                                  (*((volatile unsigned int*)IME_RDBG_reg)=data)
#define  get_IME_RDBG_reg                                                        (*((volatile unsigned int*)IME_RDBG_reg))
#define  IME_RDBG_reg1_shift                                                     (16)
#define  IME_RDBG_reg0_shift                                                     (0)
#define  IME_RDBG_reg1_mask                                                      (0xFFFF0000)
#define  IME_RDBG_reg0_mask                                                      (0x0000FFFF)
#define  IME_RDBG_reg1(data)                                                     (0xFFFF0000&((data)<<16))
#define  IME_RDBG_reg0(data)                                                     (0x0000FFFF&(data))
#define  IME_RDBG_get_reg1(data)                                                 ((0xFFFF0000&(data))>>16)
#define  IME_RDBG_get_reg0(data)                                                 (0x0000FFFF&(data))
#define  IME_RDBG_reg1_src(data)                                                 ((0xFFFF0000&(data))>>16)
#define  IME_RDBG_reg0_src(data)                                                 (0x0000FFFF&(data))

#define  IME_DBG_FME_PMVCTL                                                     0x1800F3D4
#define  IME_DBG_FME_PMVCTL_reg_addr                                             "0xB800F3D4"
#define  IME_DBG_FME_PMVCTL_reg                                                  0xB800F3D4
#define  IME_DBG_FME_PMVCTL_inst_addr                                            "0x0031"
#define  IME_DBG_FME_PMVCTL_inst_adr                                             "0x00F5"
#define  IME_DBG_FME_PMVCTL_inst                                                 0x00F5
#define  set_IME_DBG_FME_PMVCTL_reg(data)                                        (*((volatile unsigned int*)IME_DBG_FME_PMVCTL_reg)=data)
#define  get_IME_DBG_FME_PMVCTL_reg                                              (*((volatile unsigned int*)IME_DBG_FME_PMVCTL_reg))
#define  IME_DBG_FME_PMVCTL_write_enable4_shift                                  (29)
#define  IME_DBG_FME_PMVCTL_Ignore_fme_shift                                     (28)
#define  IME_DBG_FME_PMVCTL_write_enable3_shift                                  (27)
#define  IME_DBG_FME_PMVCTL_Force_valid_shift                                    (26)
#define  IME_DBG_FME_PMVCTL_write_enable2_shift                                  (25)
#define  IME_DBG_FME_PMVCTL_Trig_shift                                           (24)
#define  IME_DBG_FME_PMVCTL_write_enable1_shift                                  (18)
#define  IME_DBG_FME_PMVCTL_mvx_shift                                            (8)
#define  IME_DBG_FME_PMVCTL_mvy_shift                                            (0)
#define  IME_DBG_FME_PMVCTL_write_enable4_mask                                   (0x20000000)
#define  IME_DBG_FME_PMVCTL_Ignore_fme_mask                                      (0x10000000)
#define  IME_DBG_FME_PMVCTL_write_enable3_mask                                   (0x08000000)
#define  IME_DBG_FME_PMVCTL_Force_valid_mask                                     (0x04000000)
#define  IME_DBG_FME_PMVCTL_write_enable2_mask                                   (0x02000000)
#define  IME_DBG_FME_PMVCTL_Trig_mask                                            (0x01000000)
#define  IME_DBG_FME_PMVCTL_write_enable1_mask                                   (0x00040000)
#define  IME_DBG_FME_PMVCTL_mvx_mask                                             (0x0003FF00)
#define  IME_DBG_FME_PMVCTL_mvy_mask                                             (0x0000007F)
#define  IME_DBG_FME_PMVCTL_write_enable4(data)                                  (0x20000000&((data)<<29))
#define  IME_DBG_FME_PMVCTL_Ignore_fme(data)                                     (0x10000000&((data)<<28))
#define  IME_DBG_FME_PMVCTL_write_enable3(data)                                  (0x08000000&((data)<<27))
#define  IME_DBG_FME_PMVCTL_Force_valid(data)                                    (0x04000000&((data)<<26))
#define  IME_DBG_FME_PMVCTL_write_enable2(data)                                  (0x02000000&((data)<<25))
#define  IME_DBG_FME_PMVCTL_Trig(data)                                           (0x01000000&((data)<<24))
#define  IME_DBG_FME_PMVCTL_write_enable1(data)                                  (0x00040000&((data)<<18))
#define  IME_DBG_FME_PMVCTL_mvx(data)                                            (0x0003FF00&((data)<<8))
#define  IME_DBG_FME_PMVCTL_mvy(data)                                            (0x0000007F&(data))
#define  IME_DBG_FME_PMVCTL_get_write_enable4(data)                              ((0x20000000&(data))>>29)
#define  IME_DBG_FME_PMVCTL_get_Ignore_fme(data)                                 ((0x10000000&(data))>>28)
#define  IME_DBG_FME_PMVCTL_get_write_enable3(data)                              ((0x08000000&(data))>>27)
#define  IME_DBG_FME_PMVCTL_get_Force_valid(data)                                ((0x04000000&(data))>>26)
#define  IME_DBG_FME_PMVCTL_get_write_enable2(data)                              ((0x02000000&(data))>>25)
#define  IME_DBG_FME_PMVCTL_get_Trig(data)                                       ((0x01000000&(data))>>24)
#define  IME_DBG_FME_PMVCTL_get_write_enable1(data)                              ((0x00040000&(data))>>18)
#define  IME_DBG_FME_PMVCTL_get_mvx(data)                                        ((0x0003FF00&(data))>>8)
#define  IME_DBG_FME_PMVCTL_get_mvy(data)                                        (0x0000007F&(data))
#define  IME_DBG_FME_PMVCTL_write_enable4_src(data)                              ((0x20000000&(data))>>29)
#define  IME_DBG_FME_PMVCTL_Ignore_fme_src(data)                                 ((0x10000000&(data))>>28)
#define  IME_DBG_FME_PMVCTL_write_enable3_src(data)                              ((0x08000000&(data))>>27)
#define  IME_DBG_FME_PMVCTL_Force_valid_src(data)                                ((0x04000000&(data))>>26)
#define  IME_DBG_FME_PMVCTL_write_enable2_src(data)                              ((0x02000000&(data))>>25)
#define  IME_DBG_FME_PMVCTL_Trig_src(data)                                       ((0x01000000&(data))>>24)
#define  IME_DBG_FME_PMVCTL_write_enable1_src(data)                              ((0x00040000&(data))>>18)
#define  IME_DBG_FME_PMVCTL_mvx_src(data)                                        ((0x0003FF00&(data))>>8)
#define  IME_DBG_FME_PMVCTL_mvy_src(data)                                        (0x0000007F&(data))

#define  IME_DBG_HWCTL                                                          0x1800F3D8
#define  IME_DBG_HWCTL_reg_addr                                                  "0xB800F3D8"
#define  IME_DBG_HWCTL_reg                                                       0xB800F3D8
#define  IME_DBG_HWCTL_inst_addr                                                 "0x0032"
#define  IME_DBG_HWCTL_inst_adr                                                  "0x00F6"
#define  IME_DBG_HWCTL_inst                                                      0x00F6
#define  set_IME_DBG_HWCTL_reg(data)                                             (*((volatile unsigned int*)IME_DBG_HWCTL_reg)=data)
#define  get_IME_DBG_HWCTL_reg                                                   (*((volatile unsigned int*)IME_DBG_HWCTL_reg))
#define  IME_DBG_HWCTL_write_enable1_shift                                       (1)
#define  IME_DBG_HWCTL_Fsearch_busy_shift                                        (0)
#define  IME_DBG_HWCTL_write_enable1_mask                                        (0x00000002)
#define  IME_DBG_HWCTL_Fsearch_busy_mask                                         (0x00000001)
#define  IME_DBG_HWCTL_write_enable1(data)                                       (0x00000002&((data)<<1))
#define  IME_DBG_HWCTL_Fsearch_busy(data)                                        (0x00000001&(data))
#define  IME_DBG_HWCTL_get_write_enable1(data)                                   ((0x00000002&(data))>>1)
#define  IME_DBG_HWCTL_get_Fsearch_busy(data)                                    (0x00000001&(data))
#define  IME_DBG_HWCTL_write_enable1_src(data)                                   ((0x00000002&(data))>>1)
#define  IME_DBG_HWCTL_Fsearch_busy_src(data)                                    (0x00000001&(data))

#define  IME_DBG_GPREG                                                          0x1800F3DC
#define  IME_DBG_GPREG_reg_addr                                                  "0xB800F3DC"
#define  IME_DBG_GPREG_reg                                                       0xB800F3DC
#define  IME_DBG_GPREG_inst_addr                                                 "0x0033"
#define  IME_DBG_GPREG_inst_adr                                                  "0x00F7"
#define  IME_DBG_GPREG_inst                                                      0x00F7
#define  set_IME_DBG_GPREG_reg(data)                                             (*((volatile unsigned int*)IME_DBG_GPREG_reg)=data)
#define  get_IME_DBG_GPREG_reg                                                   (*((volatile unsigned int*)IME_DBG_GPREG_reg))
#define  IME_DBG_GPREG_Gp1_shift                                                 (16)
#define  IME_DBG_GPREG_Gp0_shift                                                 (0)
#define  IME_DBG_GPREG_Gp1_mask                                                  (0xFFFF0000)
#define  IME_DBG_GPREG_Gp0_mask                                                  (0x0000FFFF)
#define  IME_DBG_GPREG_Gp1(data)                                                 (0xFFFF0000&((data)<<16))
#define  IME_DBG_GPREG_Gp0(data)                                                 (0x0000FFFF&(data))
#define  IME_DBG_GPREG_get_Gp1(data)                                             ((0xFFFF0000&(data))>>16)
#define  IME_DBG_GPREG_get_Gp0(data)                                             (0x0000FFFF&(data))
#define  IME_DBG_GPREG_Gp1_src(data)                                             ((0xFFFF0000&(data))>>16)
#define  IME_DBG_GPREG_Gp0_src(data)                                             (0x0000FFFF&(data))

#ifdef _IME_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IME register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ignore_ldref:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  int_stat:1;
        RBus_UInt32  int_en:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  swind_y:4;
        RBus_UInt32  swind_x:4;
        RBus_UInt32  ignore_fme:1;
        RBus_UInt32  mul_dec:1;
        RBus_UInt32  mul_req:1;
        RBus_UInt32  only16:1;
    };
}IME_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  dma_path:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  Sub1616_md:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  CR_thr:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  E0_CR_on:1;
        RBus_UInt32  E0_CR_dst_sub3:2;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  E0_CR_src:3;
    };
}IME_CTRL3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  idx:7;
    };
}IME_TMB_IDX_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  y:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  x:12;
    };
}IME_TMB_POS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  idx:7;
    };
}IME_RMB_IDX_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  rsy:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  rsx:12;
    };
}IME_RMB_SPOS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  rey:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  rex:12;
    };
}IME_RMB_EPOS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  num:4;
    };
}IME_CAND_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  mvy:7;
    };
}IME_CAND_LIST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  pmvx:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  pmvy:9;
    };
}IME_MVP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  maxfrac:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  maxint:4;
        RBus_UInt32  cbias:8;
        RBus_UInt32  res3:1;
        RBus_UInt32  lambda:7;
    };
}IME_MVC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  mvy:7;
    };
}IME_RSLT16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  tcost:21;
    };
}IME_RSLT16_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  mvy:7;
    };
}IME_RSLT8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  tcost:21;
    };
}IME_RSLT8_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  satd00:21;
    };
}IME_ZMV_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  mvy:7;
    };
}IME_RSLT16X8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  tcost:21;
    };
}IME_RSLT16X8_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  mvy:7;
    };
}IME_RSLT8X16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  tcost:21;
    };
}IME_RSLT8X16_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  Ref_cost:16;
    };
}IME_REF_COST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sel1:3;
        RBus_UInt32  sel0:3;
        RBus_UInt32  enable:1;
    };
}IME_DBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg1:16;
        RBus_UInt32  reg0:16;
    };
}IME_RDBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  Ignore_fme:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  Force_valid:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  Trig:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res3:1;
        RBus_UInt32  mvy:7;
    };
}IME_DBG_FME_PMVCTL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  Fsearch_busy:1;
    };
}IME_DBG_HWCTL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Gp1:16;
        RBus_UInt32  Gp0:16;
    };
}IME_DBG_GPREG_RBUS;

#else //apply LITTLE_ENDIAN

//======IME register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  only16:1;
        RBus_UInt32  mul_req:1;
        RBus_UInt32  mul_dec:1;
        RBus_UInt32  ignore_fme:1;
        RBus_UInt32  swind_x:4;
        RBus_UInt32  swind_y:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  int_en:1;
        RBus_UInt32  int_stat:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ignore_ldref:1;
        RBus_UInt32  res3:11;
    };
}IME_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  E0_CR_src:3;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  E0_CR_dst_sub3:2;
        RBus_UInt32  E0_CR_on:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  CR_thr:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  Sub1616_md:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  dma_path:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  res1:18;
    };
}IME_CTRL3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  idx:7;
        RBus_UInt32  res1:25;
    };
}IME_TMB_IDX_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  y:12;
        RBus_UInt32  res2:4;
    };
}IME_TMB_POS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  idx:7;
        RBus_UInt32  res1:25;
    };
}IME_RMB_IDX_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rsx:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  rsy:12;
        RBus_UInt32  res2:4;
    };
}IME_RMB_SPOS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rex:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  rey:12;
        RBus_UInt32  res2:4;
    };
}IME_RMB_EPOS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num:4;
        RBus_UInt32  res1:28;
    };
}IME_CAND_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:14;
    };
}IME_CAND_LIST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pmvy:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  pmvx:12;
        RBus_UInt32  res2:4;
    };
}IME_MVP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lambda:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  cbias:8;
        RBus_UInt32  maxint:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  maxfrac:5;
        RBus_UInt32  res3:3;
    };
}IME_MVC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:14;
    };
}IME_RSLT16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcost:21;
        RBus_UInt32  res1:11;
    };
}IME_RSLT16_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:14;
    };
}IME_RSLT8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcost:21;
        RBus_UInt32  res1:11;
    };
}IME_RSLT8_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  satd00:21;
        RBus_UInt32  res1:11;
    };
}IME_ZMV_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:14;
    };
}IME_RSLT16X8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcost:21;
        RBus_UInt32  res1:11;
    };
}IME_RSLT16X8_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mvx:10;
        RBus_UInt32  res2:14;
    };
}IME_RSLT8X16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tcost:21;
        RBus_UInt32  res1:11;
    };
}IME_RSLT8X16_TCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Ref_cost:16;
        RBus_UInt32  res1:16;
    };
}IME_REF_COST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enable:1;
        RBus_UInt32  sel0:3;
        RBus_UInt32  sel1:3;
        RBus_UInt32  res1:25;
    };
}IME_DBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg0:16;
        RBus_UInt32  reg1:16;
    };
}IME_RDBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  mvx:10;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  Trig:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  Force_valid:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  Ignore_fme:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  res3:2;
    };
}IME_DBG_FME_PMVCTL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Fsearch_busy:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  res1:30;
    };
}IME_DBG_HWCTL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Gp0:16;
        RBus_UInt32  Gp1:16;
    };
}IME_DBG_GPREG_RBUS;




#endif 


#endif 
#endif 
