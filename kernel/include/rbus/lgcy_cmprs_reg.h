/**
* @file Merlin5_LGCY_VE_CMPRS_arch_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LGCY_CMPRS_REG_H_
#define _RBUS_LGCY_CMPRS_REG_H_

#include "rbus_types.h"



//  LGCY_CMPRS Register Address
#define  LGCY_CMPRS_CCPAR                                                       0x1800EB80
#define  LGCY_CMPRS_CCPAR_reg_addr                                               "0xB800EB80"
#define  LGCY_CMPRS_CCPAR_reg                                                    0xB800EB80
#define  LGCY_CMPRS_CCPAR_inst_addr                                              "0x0000"
#define  set_LGCY_CMPRS_CCPAR_reg(data)                                          (*((volatile unsigned int*)LGCY_CMPRS_CCPAR_reg)=data)
#define  get_LGCY_CMPRS_CCPAR_reg                                                (*((volatile unsigned int*)LGCY_CMPRS_CCPAR_reg))
#define  LGCY_CMPRS_CCPAR_dmy_auto_mode_shift                                    (30)
#define  LGCY_CMPRS_CCPAR_dmy_mb_row_shift                                       (29)
#define  LGCY_CMPRS_CCPAR_dmy_mb_clm_shift                                       (28)
#define  LGCY_CMPRS_CCPAR_mb_field_decoding_flag_shift                           (27)
#define  LGCY_CMPRS_CCPAR_dmy_row_ctb_shift                                      (26)
#define  LGCY_CMPRS_CCPAR_dmy_clm_ctb_shift                                      (25)
#define  LGCY_CMPRS_CCPAR_mb_num_shift                                           (19)
#define  LGCY_CMPRS_CCPAR_cur_mb_x_shift                                         (9)
#define  LGCY_CMPRS_CCPAR_cur_mb_y_shift                                         (0)
#define  LGCY_CMPRS_CCPAR_dmy_auto_mode_mask                                     (0x40000000)
#define  LGCY_CMPRS_CCPAR_dmy_mb_row_mask                                        (0x20000000)
#define  LGCY_CMPRS_CCPAR_dmy_mb_clm_mask                                        (0x10000000)
#define  LGCY_CMPRS_CCPAR_mb_field_decoding_flag_mask                            (0x08000000)
#define  LGCY_CMPRS_CCPAR_dmy_row_ctb_mask                                       (0x04000000)
#define  LGCY_CMPRS_CCPAR_dmy_clm_ctb_mask                                       (0x02000000)
#define  LGCY_CMPRS_CCPAR_mb_num_mask                                            (0x01F80000)
#define  LGCY_CMPRS_CCPAR_cur_mb_x_mask                                          (0x0007FE00)
#define  LGCY_CMPRS_CCPAR_cur_mb_y_mask                                          (0x000001FF)
#define  LGCY_CMPRS_CCPAR_dmy_auto_mode(data)                                    (0x40000000&((data)<<30))
#define  LGCY_CMPRS_CCPAR_dmy_mb_row(data)                                       (0x20000000&((data)<<29))
#define  LGCY_CMPRS_CCPAR_dmy_mb_clm(data)                                       (0x10000000&((data)<<28))
#define  LGCY_CMPRS_CCPAR_mb_field_decoding_flag(data)                           (0x08000000&((data)<<27))
#define  LGCY_CMPRS_CCPAR_dmy_row_ctb(data)                                      (0x04000000&((data)<<26))
#define  LGCY_CMPRS_CCPAR_dmy_clm_ctb(data)                                      (0x02000000&((data)<<25))
#define  LGCY_CMPRS_CCPAR_mb_num(data)                                           (0x01F80000&((data)<<19))
#define  LGCY_CMPRS_CCPAR_cur_mb_x(data)                                         (0x0007FE00&((data)<<9))
#define  LGCY_CMPRS_CCPAR_cur_mb_y(data)                                         (0x000001FF&(data))
#define  LGCY_CMPRS_CCPAR_get_dmy_auto_mode(data)                                ((0x40000000&(data))>>30)
#define  LGCY_CMPRS_CCPAR_get_dmy_mb_row(data)                                   ((0x20000000&(data))>>29)
#define  LGCY_CMPRS_CCPAR_get_dmy_mb_clm(data)                                   ((0x10000000&(data))>>28)
#define  LGCY_CMPRS_CCPAR_get_mb_field_decoding_flag(data)                       ((0x08000000&(data))>>27)
#define  LGCY_CMPRS_CCPAR_get_dmy_row_ctb(data)                                  ((0x04000000&(data))>>26)
#define  LGCY_CMPRS_CCPAR_get_dmy_clm_ctb(data)                                  ((0x02000000&(data))>>25)
#define  LGCY_CMPRS_CCPAR_get_mb_num(data)                                       ((0x01F80000&(data))>>19)
#define  LGCY_CMPRS_CCPAR_get_cur_mb_x(data)                                     ((0x0007FE00&(data))>>9)
#define  LGCY_CMPRS_CCPAR_get_cur_mb_y(data)                                     (0x000001FF&(data))

#define  LGCY_CMPRS_STATUS                                                      0x1800EB84
#define  LGCY_CMPRS_STATUS_reg_addr                                              "0xB800EB84"
#define  LGCY_CMPRS_STATUS_reg                                                   0xB800EB84
#define  LGCY_CMPRS_STATUS_inst_addr                                             "0x0001"
#define  set_LGCY_CMPRS_STATUS_reg(data)                                         (*((volatile unsigned int*)LGCY_CMPRS_STATUS_reg)=data)
#define  get_LGCY_CMPRS_STATUS_reg                                               (*((volatile unsigned int*)LGCY_CMPRS_STATUS_reg))
#define  LGCY_CMPRS_STATUS_min_size_shift                                        (25)
#define  LGCY_CMPRS_STATUS_max_leaf_nodes_shift                                  (19)
#define  LGCY_CMPRS_STATUS_dma_eff_enhance_shift                                 (18)
#define  LGCY_CMPRS_STATUS_post_write_disable_shift                              (17)
#define  LGCY_CMPRS_STATUS_hdr_addr_update_shift                                 (16)
#define  LGCY_CMPRS_STATUS_comp_core_irq_shift                                   (15)
#define  LGCY_CMPRS_STATUS_quarter_filter_type_shift                             (13)
#define  LGCY_CMPRS_STATUS_comp_core_bypass_shift                                (12)
#define  LGCY_CMPRS_STATUS_comp_core_errflag_clr_shift                           (8)
#define  LGCY_CMPRS_STATUS_comp_core_flag2irq_en_shift                           (4)
#define  LGCY_CMPRS_STATUS_comp_core_errflag_shift                               (0)
#define  LGCY_CMPRS_STATUS_min_size_mask                                         (0x1E000000)
#define  LGCY_CMPRS_STATUS_max_leaf_nodes_mask                                   (0x01F80000)
#define  LGCY_CMPRS_STATUS_dma_eff_enhance_mask                                  (0x00040000)
#define  LGCY_CMPRS_STATUS_post_write_disable_mask                               (0x00020000)
#define  LGCY_CMPRS_STATUS_hdr_addr_update_mask                                  (0x00010000)
#define  LGCY_CMPRS_STATUS_comp_core_irq_mask                                    (0x00008000)
#define  LGCY_CMPRS_STATUS_quarter_filter_type_mask                              (0x00006000)
#define  LGCY_CMPRS_STATUS_comp_core_bypass_mask                                 (0x00001000)
#define  LGCY_CMPRS_STATUS_comp_core_errflag_clr_mask                            (0x00000F00)
#define  LGCY_CMPRS_STATUS_comp_core_flag2irq_en_mask                            (0x000000F0)
#define  LGCY_CMPRS_STATUS_comp_core_errflag_mask                                (0x0000000F)
#define  LGCY_CMPRS_STATUS_min_size(data)                                        (0x1E000000&((data)<<25))
#define  LGCY_CMPRS_STATUS_max_leaf_nodes(data)                                  (0x01F80000&((data)<<19))
#define  LGCY_CMPRS_STATUS_dma_eff_enhance(data)                                 (0x00040000&((data)<<18))
#define  LGCY_CMPRS_STATUS_post_write_disable(data)                              (0x00020000&((data)<<17))
#define  LGCY_CMPRS_STATUS_hdr_addr_update(data)                                 (0x00010000&((data)<<16))
#define  LGCY_CMPRS_STATUS_comp_core_irq(data)                                   (0x00008000&((data)<<15))
#define  LGCY_CMPRS_STATUS_quarter_filter_type(data)                             (0x00006000&((data)<<13))
#define  LGCY_CMPRS_STATUS_comp_core_bypass(data)                                (0x00001000&((data)<<12))
#define  LGCY_CMPRS_STATUS_comp_core_errflag_clr(data)                           (0x00000F00&((data)<<8))
#define  LGCY_CMPRS_STATUS_comp_core_flag2irq_en(data)                           (0x000000F0&((data)<<4))
#define  LGCY_CMPRS_STATUS_comp_core_errflag(data)                               (0x0000000F&(data))
#define  LGCY_CMPRS_STATUS_get_min_size(data)                                    ((0x1E000000&(data))>>25)
#define  LGCY_CMPRS_STATUS_get_max_leaf_nodes(data)                              ((0x01F80000&(data))>>19)
#define  LGCY_CMPRS_STATUS_get_dma_eff_enhance(data)                             ((0x00040000&(data))>>18)
#define  LGCY_CMPRS_STATUS_get_post_write_disable(data)                          ((0x00020000&(data))>>17)
#define  LGCY_CMPRS_STATUS_get_hdr_addr_update(data)                             ((0x00010000&(data))>>16)
#define  LGCY_CMPRS_STATUS_get_comp_core_irq(data)                               ((0x00008000&(data))>>15)
#define  LGCY_CMPRS_STATUS_get_quarter_filter_type(data)                         ((0x00006000&(data))>>13)
#define  LGCY_CMPRS_STATUS_get_comp_core_bypass(data)                            ((0x00001000&(data))>>12)
#define  LGCY_CMPRS_STATUS_get_comp_core_errflag_clr(data)                       ((0x00000F00&(data))>>8)
#define  LGCY_CMPRS_STATUS_get_comp_core_flag2irq_en(data)                       ((0x000000F0&(data))>>4)
#define  LGCY_CMPRS_STATUS_get_comp_core_errflag(data)                           (0x0000000F&(data))

#define  LGCY_CMPRS_VMADR0                                                      0x1800EB88
#define  LGCY_CMPRS_VMADR0_reg_addr                                              "0xB800EB88"
#define  LGCY_CMPRS_VMADR0_reg                                                   0xB800EB88
#define  LGCY_CMPRS_VMADR0_inst_addr                                             "0x0002"
#define  set_LGCY_CMPRS_VMADR0_reg(data)                                         (*((volatile unsigned int*)LGCY_CMPRS_VMADR0_reg)=data)
#define  get_LGCY_CMPRS_VMADR0_reg                                               (*((volatile unsigned int*)LGCY_CMPRS_VMADR0_reg))
#define  LGCY_CMPRS_VMADR0_sb_str_addr_shift                                     (16)
#define  LGCY_CMPRS_VMADR0_offseta2_shift                                        (7)
#define  LGCY_CMPRS_VMADR0_basea2_shift                                          (0)
#define  LGCY_CMPRS_VMADR0_sb_str_addr_mask                                      (0x007F0000)
#define  LGCY_CMPRS_VMADR0_offseta2_mask                                         (0x00003F80)
#define  LGCY_CMPRS_VMADR0_basea2_mask                                           (0x0000007F)
#define  LGCY_CMPRS_VMADR0_sb_str_addr(data)                                     (0x007F0000&((data)<<16))
#define  LGCY_CMPRS_VMADR0_offseta2(data)                                        (0x00003F80&((data)<<7))
#define  LGCY_CMPRS_VMADR0_basea2(data)                                          (0x0000007F&(data))
#define  LGCY_CMPRS_VMADR0_get_sb_str_addr(data)                                 ((0x007F0000&(data))>>16)
#define  LGCY_CMPRS_VMADR0_get_offseta2(data)                                    ((0x00003F80&(data))>>7)
#define  LGCY_CMPRS_VMADR0_get_basea2(data)                                      (0x0000007F&(data))

#define  LGCY_CMPRS_VMADR1                                                      0x1800EB8C
#define  LGCY_CMPRS_VMADR1_reg_addr                                              "0xB800EB8C"
#define  LGCY_CMPRS_VMADR1_reg                                                   0xB800EB8C
#define  LGCY_CMPRS_VMADR1_inst_addr                                             "0x0003"
#define  set_LGCY_CMPRS_VMADR1_reg(data)                                         (*((volatile unsigned int*)LGCY_CMPRS_VMADR1_reg)=data)
#define  get_LGCY_CMPRS_VMADR1_reg                                               (*((volatile unsigned int*)LGCY_CMPRS_VMADR1_reg))
#define  LGCY_CMPRS_VMADR1_offseta1_shift                                        (23)
#define  LGCY_CMPRS_VMADR1_basea1_shift                                          (16)
#define  LGCY_CMPRS_VMADR1_offseta0_shift                                        (7)
#define  LGCY_CMPRS_VMADR1_basea0_shift                                          (0)
#define  LGCY_CMPRS_VMADR1_offseta1_mask                                         (0x3F800000)
#define  LGCY_CMPRS_VMADR1_basea1_mask                                           (0x007F0000)
#define  LGCY_CMPRS_VMADR1_offseta0_mask                                         (0x00003F80)
#define  LGCY_CMPRS_VMADR1_basea0_mask                                           (0x0000007F)
#define  LGCY_CMPRS_VMADR1_offseta1(data)                                        (0x3F800000&((data)<<23))
#define  LGCY_CMPRS_VMADR1_basea1(data)                                          (0x007F0000&((data)<<16))
#define  LGCY_CMPRS_VMADR1_offseta0(data)                                        (0x00003F80&((data)<<7))
#define  LGCY_CMPRS_VMADR1_basea0(data)                                          (0x0000007F&(data))
#define  LGCY_CMPRS_VMADR1_get_offseta1(data)                                    ((0x3F800000&(data))>>23)
#define  LGCY_CMPRS_VMADR1_get_basea1(data)                                      ((0x007F0000&(data))>>16)
#define  LGCY_CMPRS_VMADR1_get_offseta0(data)                                    ((0x00003F80&(data))>>7)
#define  LGCY_CMPRS_VMADR1_get_basea0(data)                                      (0x0000007F&(data))

#define  LGCY_CMPRS_HDMAADR_0                                                   0x1800EB90
#define  LGCY_CMPRS_HDMAADR_0_reg_addr                                           "0xB800EB90"
#define  LGCY_CMPRS_HDMAADR_0_reg                                                0xB800EB90
#define  LGCY_CMPRS_HDMAADR_0_inst_addr                                          "0x0004"
#define  set_LGCY_CMPRS_HDMAADR_0_reg(data)                                      (*((volatile unsigned int*)LGCY_CMPRS_HDMAADR_0_reg)=data)
#define  get_LGCY_CMPRS_HDMAADR_0_reg                                            (*((volatile unsigned int*)LGCY_CMPRS_HDMAADR_0_reg))
#define  LGCY_CMPRS_HDMAADR_0_hdr_str_addr_shift                                 (0)
#define  LGCY_CMPRS_HDMAADR_0_hdr_str_addr_mask                                  (0xFFFFFFFF)
#define  LGCY_CMPRS_HDMAADR_0_hdr_str_addr(data)                                 (0xFFFFFFFF&(data))
#define  LGCY_CMPRS_HDMAADR_0_get_hdr_str_addr(data)                             (0xFFFFFFFF&(data))

#define  LGCY_CMPRS_HDMAADR_1                                                   0x1800EB94
#define  LGCY_CMPRS_HDMAADR_1_reg_addr                                           "0xB800EB94"
#define  LGCY_CMPRS_HDMAADR_1_reg                                                0xB800EB94
#define  LGCY_CMPRS_HDMAADR_1_inst_addr                                          "0x0005"
#define  set_LGCY_CMPRS_HDMAADR_1_reg(data)                                      (*((volatile unsigned int*)LGCY_CMPRS_HDMAADR_1_reg)=data)
#define  get_LGCY_CMPRS_HDMAADR_1_reg                                            (*((volatile unsigned int*)LGCY_CMPRS_HDMAADR_1_reg))
#define  LGCY_CMPRS_HDMAADR_1_hdr_str_addr_shift                                 (0)
#define  LGCY_CMPRS_HDMAADR_1_hdr_str_addr_mask                                  (0xFFFFFFFF)
#define  LGCY_CMPRS_HDMAADR_1_hdr_str_addr(data)                                 (0xFFFFFFFF&(data))
#define  LGCY_CMPRS_HDMAADR_1_get_hdr_str_addr(data)                             (0xFFFFFFFF&(data))

#define  LGCY_CMPRS_Control                                                     0x1800EB98
#define  LGCY_CMPRS_Control_reg_addr                                             "0xB800EB98"
#define  LGCY_CMPRS_Control_reg                                                  0xB800EB98
#define  LGCY_CMPRS_Control_inst_addr                                            "0x0006"
#define  set_LGCY_CMPRS_Control_reg(data)                                        (*((volatile unsigned int*)LGCY_CMPRS_Control_reg)=data)
#define  get_LGCY_CMPRS_Control_reg                                              (*((volatile unsigned int*)LGCY_CMPRS_Control_reg))
#define  LGCY_CMPRS_Control_cmprs_rst_en_shift                                   (21)
#define  LGCY_CMPRS_Control_qlevel_hist_enable_shift                             (20)
#define  LGCY_CMPRS_Control_qp_decision_method_y_shift                           (19)
#define  LGCY_CMPRS_Control_qp_decision_method_c_shift                           (18)
#define  LGCY_CMPRS_Control_alternate_budget_y_shift                             (11)
#define  LGCY_CMPRS_Control_alternate_budget_c_shift                             (4)
#define  LGCY_CMPRS_Control_min_qp_y_shift                                       (2)
#define  LGCY_CMPRS_Control_min_qp_c_shift                                       (0)
#define  LGCY_CMPRS_Control_cmprs_rst_en_mask                                    (0x00200000)
#define  LGCY_CMPRS_Control_qlevel_hist_enable_mask                              (0x00100000)
#define  LGCY_CMPRS_Control_qp_decision_method_y_mask                            (0x00080000)
#define  LGCY_CMPRS_Control_qp_decision_method_c_mask                            (0x00040000)
#define  LGCY_CMPRS_Control_alternate_budget_y_mask                              (0x0003F800)
#define  LGCY_CMPRS_Control_alternate_budget_c_mask                              (0x000007F0)
#define  LGCY_CMPRS_Control_min_qp_y_mask                                        (0x0000000C)
#define  LGCY_CMPRS_Control_min_qp_c_mask                                        (0x00000003)
#define  LGCY_CMPRS_Control_cmprs_rst_en(data)                                   (0x00200000&((data)<<21))
#define  LGCY_CMPRS_Control_qlevel_hist_enable(data)                             (0x00100000&((data)<<20))
#define  LGCY_CMPRS_Control_qp_decision_method_y(data)                           (0x00080000&((data)<<19))
#define  LGCY_CMPRS_Control_qp_decision_method_c(data)                           (0x00040000&((data)<<18))
#define  LGCY_CMPRS_Control_alternate_budget_y(data)                             (0x0003F800&((data)<<11))
#define  LGCY_CMPRS_Control_alternate_budget_c(data)                             (0x000007F0&((data)<<4))
#define  LGCY_CMPRS_Control_min_qp_y(data)                                       (0x0000000C&((data)<<2))
#define  LGCY_CMPRS_Control_min_qp_c(data)                                       (0x00000003&(data))
#define  LGCY_CMPRS_Control_get_cmprs_rst_en(data)                               ((0x00200000&(data))>>21)
#define  LGCY_CMPRS_Control_get_qlevel_hist_enable(data)                         ((0x00100000&(data))>>20)
#define  LGCY_CMPRS_Control_get_qp_decision_method_y(data)                       ((0x00080000&(data))>>19)
#define  LGCY_CMPRS_Control_get_qp_decision_method_c(data)                       ((0x00040000&(data))>>18)
#define  LGCY_CMPRS_Control_get_alternate_budget_y(data)                         ((0x0003F800&(data))>>11)
#define  LGCY_CMPRS_Control_get_alternate_budget_c(data)                         ((0x000007F0&(data))>>4)
#define  LGCY_CMPRS_Control_get_min_qp_y(data)                                   ((0x0000000C&(data))>>2)
#define  LGCY_CMPRS_Control_get_min_qp_c(data)                                   (0x00000003&(data))

#define  LGCY_CMPRS_Blkbytes_y                                                  0x1800EBA0
#define  LGCY_CMPRS_Blkbytes_y_reg_addr                                          "0xB800EBA0"
#define  LGCY_CMPRS_Blkbytes_y_reg                                               0xB800EBA0
#define  LGCY_CMPRS_Blkbytes_y_inst_addr                                         "0x0007"
#define  set_LGCY_CMPRS_Blkbytes_y_reg(data)                                     (*((volatile unsigned int*)LGCY_CMPRS_Blkbytes_y_reg)=data)
#define  get_LGCY_CMPRS_Blkbytes_y_reg                                           (*((volatile unsigned int*)LGCY_CMPRS_Blkbytes_y_reg))
#define  LGCY_CMPRS_Blkbytes_y_loan_qlevel_shift                                 (28)
#define  LGCY_CMPRS_Blkbytes_y_max_blk_bytes_shift                               (21)
#define  LGCY_CMPRS_Blkbytes_y_min_blk_bytes_shift                               (14)
#define  LGCY_CMPRS_Blkbytes_y_targ_blk_bytes_shift                              (7)
#define  LGCY_CMPRS_Blkbytes_y_loan_blk_bytes_shift                              (0)
#define  LGCY_CMPRS_Blkbytes_y_loan_qlevel_mask                                  (0xF0000000)
#define  LGCY_CMPRS_Blkbytes_y_max_blk_bytes_mask                                (0x0FE00000)
#define  LGCY_CMPRS_Blkbytes_y_min_blk_bytes_mask                                (0x001FC000)
#define  LGCY_CMPRS_Blkbytes_y_targ_blk_bytes_mask                               (0x00003F80)
#define  LGCY_CMPRS_Blkbytes_y_loan_blk_bytes_mask                               (0x0000007F)
#define  LGCY_CMPRS_Blkbytes_y_loan_qlevel(data)                                 (0xF0000000&((data)<<28))
#define  LGCY_CMPRS_Blkbytes_y_max_blk_bytes(data)                               (0x0FE00000&((data)<<21))
#define  LGCY_CMPRS_Blkbytes_y_min_blk_bytes(data)                               (0x001FC000&((data)<<14))
#define  LGCY_CMPRS_Blkbytes_y_targ_blk_bytes(data)                              (0x00003F80&((data)<<7))
#define  LGCY_CMPRS_Blkbytes_y_loan_blk_bytes(data)                              (0x0000007F&(data))
#define  LGCY_CMPRS_Blkbytes_y_get_loan_qlevel(data)                             ((0xF0000000&(data))>>28)
#define  LGCY_CMPRS_Blkbytes_y_get_max_blk_bytes(data)                           ((0x0FE00000&(data))>>21)
#define  LGCY_CMPRS_Blkbytes_y_get_min_blk_bytes(data)                           ((0x001FC000&(data))>>14)
#define  LGCY_CMPRS_Blkbytes_y_get_targ_blk_bytes(data)                          ((0x00003F80&(data))>>7)
#define  LGCY_CMPRS_Blkbytes_y_get_loan_blk_bytes(data)                          (0x0000007F&(data))

#define  LGCY_CMPRS_Qlevel_y                                                    0x1800EBA4
#define  LGCY_CMPRS_Qlevel_y_reg_addr                                            "0xB800EBA4"
#define  LGCY_CMPRS_Qlevel_y_reg                                                 0xB800EBA4
#define  LGCY_CMPRS_Qlevel_y_inst_addr                                           "0x0008"
#define  set_LGCY_CMPRS_Qlevel_y_reg(data)                                       (*((volatile unsigned int*)LGCY_CMPRS_Qlevel_y_reg)=data)
#define  get_LGCY_CMPRS_Qlevel_y_reg                                             (*((volatile unsigned int*)LGCY_CMPRS_Qlevel_y_reg))
#define  LGCY_CMPRS_Qlevel_y_qlevel_queue_sel_shift                              (25)
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_addr_shift                              (21)
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_rden_shift                              (20)
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_rdata_ro_shift                          (0)
#define  LGCY_CMPRS_Qlevel_y_qlevel_queue_sel_mask                               (0x06000000)
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_addr_mask                               (0x01E00000)
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_rden_mask                               (0x00100000)
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_rdata_ro_mask                           (0x000FFFFF)
#define  LGCY_CMPRS_Qlevel_y_qlevel_queue_sel(data)                              (0x06000000&((data)<<25))
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_addr(data)                              (0x01E00000&((data)<<21))
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_rden(data)                              (0x00100000&((data)<<20))
#define  LGCY_CMPRS_Qlevel_y_qlevel_hist_rdata_ro(data)                          (0x000FFFFF&(data))
#define  LGCY_CMPRS_Qlevel_y_get_qlevel_queue_sel(data)                          ((0x06000000&(data))>>25)
#define  LGCY_CMPRS_Qlevel_y_get_qlevel_hist_addr(data)                          ((0x01E00000&(data))>>21)
#define  LGCY_CMPRS_Qlevel_y_get_qlevel_hist_rden(data)                          ((0x00100000&(data))>>20)
#define  LGCY_CMPRS_Qlevel_y_get_qlevel_hist_rdata_ro(data)                      (0x000FFFFF&(data))

#define  LGCY_CMPRS_Rembyte_y                                                   0x1800EBA8
#define  LGCY_CMPRS_Rembyte_y_reg_addr                                           "0xB800EBA8"
#define  LGCY_CMPRS_Rembyte_y_reg                                                0xB800EBA8
#define  LGCY_CMPRS_Rembyte_y_inst_addr                                          "0x0009"
#define  set_LGCY_CMPRS_Rembyte_y_reg(data)                                      (*((volatile unsigned int*)LGCY_CMPRS_Rembyte_y_reg)=data)
#define  get_LGCY_CMPRS_Rembyte_y_reg                                            (*((volatile unsigned int*)LGCY_CMPRS_Rembyte_y_reg))
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_bin_base_shift                     (16)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_bin_mode_shift                     (15)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_addr_shift                    (12)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_rden_shift                    (11)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_rdata_ro_shift                (0)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_bin_base_mask                      (0x03FF0000)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_bin_mode_mask                      (0x00008000)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_addr_mask                     (0x00007000)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_rden_mask                     (0x00000800)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_rdata_ro_mask                 (0x000007FF)
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_bin_base(data)                     (0x03FF0000&((data)<<16))
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_bin_mode(data)                     (0x00008000&((data)<<15))
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_addr(data)                    (0x00007000&((data)<<12))
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_rden(data)                    (0x00000800&((data)<<11))
#define  LGCY_CMPRS_Rembyte_y_blkline_rembyte_hist_rdata_ro(data)                (0x000007FF&(data))
#define  LGCY_CMPRS_Rembyte_y_get_blkline_rembyte_bin_base(data)                 ((0x03FF0000&(data))>>16)
#define  LGCY_CMPRS_Rembyte_y_get_blkline_rembyte_bin_mode(data)                 ((0x00008000&(data))>>15)
#define  LGCY_CMPRS_Rembyte_y_get_blkline_rembyte_hist_addr(data)                ((0x00007000&(data))>>12)
#define  LGCY_CMPRS_Rembyte_y_get_blkline_rembyte_hist_rden(data)                ((0x00000800&(data))>>11)
#define  LGCY_CMPRS_Rembyte_y_get_blkline_rembyte_hist_rdata_ro(data)            (0x000007FF&(data))

#define  LGCY_CMPRS_Blkbytes_c                                                  0x1800EBAC
#define  LGCY_CMPRS_Blkbytes_c_reg_addr                                          "0xB800EBAC"
#define  LGCY_CMPRS_Blkbytes_c_reg                                               0xB800EBAC
#define  LGCY_CMPRS_Blkbytes_c_inst_addr                                         "0x000A"
#define  set_LGCY_CMPRS_Blkbytes_c_reg(data)                                     (*((volatile unsigned int*)LGCY_CMPRS_Blkbytes_c_reg)=data)
#define  get_LGCY_CMPRS_Blkbytes_c_reg                                           (*((volatile unsigned int*)LGCY_CMPRS_Blkbytes_c_reg))
#define  LGCY_CMPRS_Blkbytes_c_loan_qlevel_shift                                 (28)
#define  LGCY_CMPRS_Blkbytes_c_max_blk_bytes_shift                               (21)
#define  LGCY_CMPRS_Blkbytes_c_min_blk_bytes_shift                               (14)
#define  LGCY_CMPRS_Blkbytes_c_targ_blk_bytes_shift                              (7)
#define  LGCY_CMPRS_Blkbytes_c_loan_blk_bytes_shift                              (0)
#define  LGCY_CMPRS_Blkbytes_c_loan_qlevel_mask                                  (0xF0000000)
#define  LGCY_CMPRS_Blkbytes_c_max_blk_bytes_mask                                (0x0FE00000)
#define  LGCY_CMPRS_Blkbytes_c_min_blk_bytes_mask                                (0x001FC000)
#define  LGCY_CMPRS_Blkbytes_c_targ_blk_bytes_mask                               (0x00003F80)
#define  LGCY_CMPRS_Blkbytes_c_loan_blk_bytes_mask                               (0x0000007F)
#define  LGCY_CMPRS_Blkbytes_c_loan_qlevel(data)                                 (0xF0000000&((data)<<28))
#define  LGCY_CMPRS_Blkbytes_c_max_blk_bytes(data)                               (0x0FE00000&((data)<<21))
#define  LGCY_CMPRS_Blkbytes_c_min_blk_bytes(data)                               (0x001FC000&((data)<<14))
#define  LGCY_CMPRS_Blkbytes_c_targ_blk_bytes(data)                              (0x00003F80&((data)<<7))
#define  LGCY_CMPRS_Blkbytes_c_loan_blk_bytes(data)                              (0x0000007F&(data))
#define  LGCY_CMPRS_Blkbytes_c_get_loan_qlevel(data)                             ((0xF0000000&(data))>>28)
#define  LGCY_CMPRS_Blkbytes_c_get_max_blk_bytes(data)                           ((0x0FE00000&(data))>>21)
#define  LGCY_CMPRS_Blkbytes_c_get_min_blk_bytes(data)                           ((0x001FC000&(data))>>14)
#define  LGCY_CMPRS_Blkbytes_c_get_targ_blk_bytes(data)                          ((0x00003F80&(data))>>7)
#define  LGCY_CMPRS_Blkbytes_c_get_loan_blk_bytes(data)                          (0x0000007F&(data))

#define  LGCY_CMPRS_Qlevel_c                                                    0x1800EBB0
#define  LGCY_CMPRS_Qlevel_c_reg_addr                                            "0xB800EBB0"
#define  LGCY_CMPRS_Qlevel_c_reg                                                 0xB800EBB0
#define  LGCY_CMPRS_Qlevel_c_inst_addr                                           "0x000B"
#define  set_LGCY_CMPRS_Qlevel_c_reg(data)                                       (*((volatile unsigned int*)LGCY_CMPRS_Qlevel_c_reg)=data)
#define  get_LGCY_CMPRS_Qlevel_c_reg                                             (*((volatile unsigned int*)LGCY_CMPRS_Qlevel_c_reg))
#define  LGCY_CMPRS_Qlevel_c_qlevel_queue_sel_shift                              (24)
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_addr_shift                              (20)
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_rden_shift                              (19)
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_rdata_ro_shift                          (0)
#define  LGCY_CMPRS_Qlevel_c_qlevel_queue_sel_mask                               (0x01000000)
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_addr_mask                               (0x00F00000)
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_rden_mask                               (0x00080000)
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_rdata_ro_mask                           (0x0007FFFF)
#define  LGCY_CMPRS_Qlevel_c_qlevel_queue_sel(data)                              (0x01000000&((data)<<24))
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_addr(data)                              (0x00F00000&((data)<<20))
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_rden(data)                              (0x00080000&((data)<<19))
#define  LGCY_CMPRS_Qlevel_c_qlevel_hist_rdata_ro(data)                          (0x0007FFFF&(data))
#define  LGCY_CMPRS_Qlevel_c_get_qlevel_queue_sel(data)                          ((0x01000000&(data))>>24)
#define  LGCY_CMPRS_Qlevel_c_get_qlevel_hist_addr(data)                          ((0x00F00000&(data))>>20)
#define  LGCY_CMPRS_Qlevel_c_get_qlevel_hist_rden(data)                          ((0x00080000&(data))>>19)
#define  LGCY_CMPRS_Qlevel_c_get_qlevel_hist_rdata_ro(data)                      (0x0007FFFF&(data))

#define  LGCY_CMPRS_Rembyte_c                                                   0x1800EBB4
#define  LGCY_CMPRS_Rembyte_c_reg_addr                                           "0xB800EBB4"
#define  LGCY_CMPRS_Rembyte_c_reg                                                0xB800EBB4
#define  LGCY_CMPRS_Rembyte_c_inst_addr                                          "0x000C"
#define  set_LGCY_CMPRS_Rembyte_c_reg(data)                                      (*((volatile unsigned int*)LGCY_CMPRS_Rembyte_c_reg)=data)
#define  get_LGCY_CMPRS_Rembyte_c_reg                                            (*((volatile unsigned int*)LGCY_CMPRS_Rembyte_c_reg))
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_bin_base_shift                     (16)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_bin_mode_shift                     (15)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_addr_shift                    (12)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_rden_shift                    (11)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_rdata_ro_shift                (0)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_bin_base_mask                      (0x03FF0000)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_bin_mode_mask                      (0x00008000)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_addr_mask                     (0x00007000)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_rden_mask                     (0x00000800)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_rdata_ro_mask                 (0x000007FF)
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_bin_base(data)                     (0x03FF0000&((data)<<16))
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_bin_mode(data)                     (0x00008000&((data)<<15))
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_addr(data)                    (0x00007000&((data)<<12))
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_rden(data)                    (0x00000800&((data)<<11))
#define  LGCY_CMPRS_Rembyte_c_blkline_rembyte_hist_rdata_ro(data)                (0x000007FF&(data))
#define  LGCY_CMPRS_Rembyte_c_get_blkline_rembyte_bin_base(data)                 ((0x03FF0000&(data))>>16)
#define  LGCY_CMPRS_Rembyte_c_get_blkline_rembyte_bin_mode(data)                 ((0x00008000&(data))>>15)
#define  LGCY_CMPRS_Rembyte_c_get_blkline_rembyte_hist_addr(data)                ((0x00007000&(data))>>12)
#define  LGCY_CMPRS_Rembyte_c_get_blkline_rembyte_hist_rden(data)                ((0x00000800&(data))>>11)
#define  LGCY_CMPRS_Rembyte_c_get_blkline_rembyte_hist_rdata_ro(data)            (0x000007FF&(data))

#define  LGCY_CMPRS_Dma_base                                                    0x1800EBBC
#define  LGCY_CMPRS_Dma_base_reg_addr                                            "0xB800EBBC"
#define  LGCY_CMPRS_Dma_base_reg                                                 0xB800EBBC
#define  LGCY_CMPRS_Dma_base_inst_addr                                           "0x000D"
#define  set_LGCY_CMPRS_Dma_base_reg(data)                                       (*((volatile unsigned int*)LGCY_CMPRS_Dma_base_reg)=data)
#define  get_LGCY_CMPRS_Dma_base_reg                                             (*((volatile unsigned int*)LGCY_CMPRS_Dma_base_reg))
#define  LGCY_CMPRS_Dma_base_base_addr_shift                                     (0)
#define  LGCY_CMPRS_Dma_base_base_addr_mask                                      (0xFFFFFFFF)
#define  LGCY_CMPRS_Dma_base_base_addr(data)                                     (0xFFFFFFFF&(data))
#define  LGCY_CMPRS_Dma_base_get_base_addr(data)                                 (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LGCY_CMPRS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dmy_auto_mode:1;
        RBus_UInt32  dmy_mb_row:1;
        RBus_UInt32  dmy_mb_clm:1;
        RBus_UInt32  mb_field_decoding_flag:1;
        RBus_UInt32  dmy_row_ctb:1;
        RBus_UInt32  dmy_clm_ctb:1;
        RBus_UInt32  mb_num:6;
        RBus_UInt32  cur_mb_x:10;
        RBus_UInt32  cur_mb_y:9;
    };
}lgcy_cmprs_ccpar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  min_size:4;
        RBus_UInt32  max_leaf_nodes:6;
        RBus_UInt32  dma_eff_enhance:1;
        RBus_UInt32  post_write_disable:1;
        RBus_UInt32  hdr_addr_update:1;
        RBus_UInt32  comp_core_irq:1;
        RBus_UInt32  quarter_filter_type:2;
        RBus_UInt32  comp_core_bypass:1;
        RBus_UInt32  comp_core_errflag_clr:4;
        RBus_UInt32  comp_core_flag2irq_en:4;
        RBus_UInt32  comp_core_errflag:4;
    };
}lgcy_cmprs_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  sb_str_addr:7;
        RBus_UInt32  res2:2;
        RBus_UInt32  offseta2:7;
        RBus_UInt32  basea2:7;
    };
}lgcy_cmprs_vmadr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  offseta1:7;
        RBus_UInt32  basea1:7;
        RBus_UInt32  res2:2;
        RBus_UInt32  offseta0:7;
        RBus_UInt32  basea0:7;
    };
}lgcy_cmprs_vmadr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr_str_addr:32;
    };
}lgcy_cmprs_hdmaadr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  cmprs_rst_en:1;
        RBus_UInt32  qlevel_hist_enable:1;
        RBus_UInt32  qp_decision_method_y:1;
        RBus_UInt32  qp_decision_method_c:1;
        RBus_UInt32  alternate_budget_y:7;
        RBus_UInt32  alternate_budget_c:7;
        RBus_UInt32  min_qp_y:2;
        RBus_UInt32  min_qp_c:2;
    };
}lgcy_cmprs_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loan_qlevel:4;
        RBus_UInt32  max_blk_bytes:7;
        RBus_UInt32  min_blk_bytes:7;
        RBus_UInt32  targ_blk_bytes:7;
        RBus_UInt32  loan_blk_bytes:7;
    };
}lgcy_cmprs_blkbytes_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  qlevel_queue_sel:2;
        RBus_UInt32  qlevel_hist_addr:4;
        RBus_UInt32  qlevel_hist_rden:1;
        RBus_UInt32  qlevel_hist_rdata_ro:20;
    };
}lgcy_cmprs_qlevel_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  blkline_rembyte_bin_base:10;
        RBus_UInt32  blkline_rembyte_bin_mode:1;
        RBus_UInt32  blkline_rembyte_hist_addr:3;
        RBus_UInt32  blkline_rembyte_hist_rden:1;
        RBus_UInt32  blkline_rembyte_hist_rdata_ro:11;
    };
}lgcy_cmprs_rembyte_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loan_qlevel:4;
        RBus_UInt32  max_blk_bytes:7;
        RBus_UInt32  min_blk_bytes:7;
        RBus_UInt32  targ_blk_bytes:7;
        RBus_UInt32  loan_blk_bytes:7;
    };
}lgcy_cmprs_blkbytes_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  qlevel_queue_sel:1;
        RBus_UInt32  qlevel_hist_addr:4;
        RBus_UInt32  qlevel_hist_rden:1;
        RBus_UInt32  qlevel_hist_rdata_ro:19;
    };
}lgcy_cmprs_qlevel_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  blkline_rembyte_bin_base:10;
        RBus_UInt32  blkline_rembyte_bin_mode:1;
        RBus_UInt32  blkline_rembyte_hist_addr:3;
        RBus_UInt32  blkline_rembyte_hist_rden:1;
        RBus_UInt32  blkline_rembyte_hist_rdata_ro:11;
    };
}lgcy_cmprs_rembyte_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}lgcy_cmprs_dma_base_RBUS;

#else //apply LITTLE_ENDIAN

//======LGCY_CMPRS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cur_mb_y:9;
        RBus_UInt32  cur_mb_x:10;
        RBus_UInt32  mb_num:6;
        RBus_UInt32  dmy_clm_ctb:1;
        RBus_UInt32  dmy_row_ctb:1;
        RBus_UInt32  mb_field_decoding_flag:1;
        RBus_UInt32  dmy_mb_clm:1;
        RBus_UInt32  dmy_mb_row:1;
        RBus_UInt32  dmy_auto_mode:1;
        RBus_UInt32  res1:1;
    };
}lgcy_cmprs_ccpar_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_core_errflag:4;
        RBus_UInt32  comp_core_flag2irq_en:4;
        RBus_UInt32  comp_core_errflag_clr:4;
        RBus_UInt32  comp_core_bypass:1;
        RBus_UInt32  quarter_filter_type:2;
        RBus_UInt32  comp_core_irq:1;
        RBus_UInt32  hdr_addr_update:1;
        RBus_UInt32  post_write_disable:1;
        RBus_UInt32  dma_eff_enhance:1;
        RBus_UInt32  max_leaf_nodes:6;
        RBus_UInt32  min_size:4;
        RBus_UInt32  res1:3;
    };
}lgcy_cmprs_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  basea2:7;
        RBus_UInt32  offseta2:7;
        RBus_UInt32  res1:2;
        RBus_UInt32  sb_str_addr:7;
        RBus_UInt32  res2:9;
    };
}lgcy_cmprs_vmadr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  basea0:7;
        RBus_UInt32  offseta0:7;
        RBus_UInt32  res1:2;
        RBus_UInt32  basea1:7;
        RBus_UInt32  offseta1:7;
        RBus_UInt32  res2:2;
    };
}lgcy_cmprs_vmadr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr_str_addr:32;
    };
}lgcy_cmprs_hdmaadr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  min_qp_c:2;
        RBus_UInt32  min_qp_y:2;
        RBus_UInt32  alternate_budget_c:7;
        RBus_UInt32  alternate_budget_y:7;
        RBus_UInt32  qp_decision_method_c:1;
        RBus_UInt32  qp_decision_method_y:1;
        RBus_UInt32  qlevel_hist_enable:1;
        RBus_UInt32  cmprs_rst_en:1;
        RBus_UInt32  res1:10;
    };
}lgcy_cmprs_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loan_blk_bytes:7;
        RBus_UInt32  targ_blk_bytes:7;
        RBus_UInt32  min_blk_bytes:7;
        RBus_UInt32  max_blk_bytes:7;
        RBus_UInt32  loan_qlevel:4;
    };
}lgcy_cmprs_blkbytes_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qlevel_hist_rdata_ro:20;
        RBus_UInt32  qlevel_hist_rden:1;
        RBus_UInt32  qlevel_hist_addr:4;
        RBus_UInt32  qlevel_queue_sel:2;
        RBus_UInt32  res1:5;
    };
}lgcy_cmprs_qlevel_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blkline_rembyte_hist_rdata_ro:11;
        RBus_UInt32  blkline_rembyte_hist_rden:1;
        RBus_UInt32  blkline_rembyte_hist_addr:3;
        RBus_UInt32  blkline_rembyte_bin_mode:1;
        RBus_UInt32  blkline_rembyte_bin_base:10;
        RBus_UInt32  res1:6;
    };
}lgcy_cmprs_rembyte_y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loan_blk_bytes:7;
        RBus_UInt32  targ_blk_bytes:7;
        RBus_UInt32  min_blk_bytes:7;
        RBus_UInt32  max_blk_bytes:7;
        RBus_UInt32  loan_qlevel:4;
    };
}lgcy_cmprs_blkbytes_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qlevel_hist_rdata_ro:19;
        RBus_UInt32  qlevel_hist_rden:1;
        RBus_UInt32  qlevel_hist_addr:4;
        RBus_UInt32  qlevel_queue_sel:1;
        RBus_UInt32  res1:7;
    };
}lgcy_cmprs_qlevel_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blkline_rembyte_hist_rdata_ro:11;
        RBus_UInt32  blkline_rembyte_hist_rden:1;
        RBus_UInt32  blkline_rembyte_hist_addr:3;
        RBus_UInt32  blkline_rembyte_bin_mode:1;
        RBus_UInt32  blkline_rembyte_bin_base:10;
        RBus_UInt32  res1:6;
    };
}lgcy_cmprs_rembyte_c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}lgcy_cmprs_dma_base_RBUS;




#endif 


#endif 
