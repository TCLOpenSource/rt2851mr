/*  @Auther Jeffrey_zhang  */

#ifndef _RBUS_CMPRS_REG_H_
#define _RBUS_CMPRS_REG_H_

#include "rbusTypes.h"

#define  CMPRS_CCPAR                                                            0x1800EB80
#define  CMPRS_CCPAR_reg_addr                                                    "0xB800EB80"
#define  CMPRS_CCPAR_reg                                                         0xB800EB80
#define  CMPRS_CCPAR_inst_adr                                                    "0x00E0"
#define  CMPRS_CCPAR_inst                                                        0x00E0
#define  set_CMPRS_CCPAR_reg(data)                                               (*((volatile unsigned int*)CMPRS_CCPAR_reg)=data)
#define  get_CMPRS_CCPAR_reg                                                     (*((volatile unsigned int*)CMPRS_CCPAR_reg))
#define  CMPRS_CCPAR_dmy_auto_mode_shift                                         (30)
#define  CMPRS_CCPAR_dmy_mb_row_shift                                            (29)
#define  CMPRS_CCPAR_dmy_mb_clm_shift                                            (28)
#define  CMPRS_CCPAR_MB_field_decoding_flag_shift                                (27)
#define  CMPRS_CCPAR_dmy_row_ctb_shift                                           (26)
#define  CMPRS_CCPAR_dmy_clm_ctb_shift                                           (25)
#define  CMPRS_CCPAR_mb_num_shift                                                (19)
#define  CMPRS_CCPAR_cur_mb_x_shift                                              (9)
#define  CMPRS_CCPAR_cur_mb_y_shift                                              (0)
#define  CMPRS_CCPAR_dmy_auto_mode_mask                                          (0x40000000)
#define  CMPRS_CCPAR_dmy_mb_row_mask                                             (0x20000000)
#define  CMPRS_CCPAR_dmy_mb_clm_mask                                             (0x10000000)
#define  CMPRS_CCPAR_MB_field_decoding_flag_mask                                 (0x08000000)
#define  CMPRS_CCPAR_dmy_row_ctb_mask                                            (0x04000000)
#define  CMPRS_CCPAR_dmy_clm_ctb_mask                                            (0x02000000)
#define  CMPRS_CCPAR_mb_num_mask                                                 (0x01F80000)
#define  CMPRS_CCPAR_cur_mb_x_mask                                               (0x0007FE00)
#define  CMPRS_CCPAR_cur_mb_y_mask                                               (0x000001FF)
#define  CMPRS_CCPAR_dmy_auto_mode(data)                                         (0x40000000&((data)<<30))
#define  CMPRS_CCPAR_dmy_mb_row(data)                                            (0x20000000&((data)<<29))
#define  CMPRS_CCPAR_dmy_mb_clm(data)                                            (0x10000000&((data)<<28))
#define  CMPRS_CCPAR_MB_field_decoding_flag(data)                                (0x08000000&((data)<<27))
#define  CMPRS_CCPAR_dmy_row_ctb(data)                                           (0x04000000&((data)<<26))
#define  CMPRS_CCPAR_dmy_clm_ctb(data)                                           (0x02000000&((data)<<25))
#define  CMPRS_CCPAR_mb_num(data)                                                (0x01F80000&((data)<<19))
#define  CMPRS_CCPAR_cur_mb_x(data)                                              (0x0007FE00&((data)<<9))
#define  CMPRS_CCPAR_cur_mb_y(data)                                              (0x000001FF&(data))
#define  CMPRS_CCPAR_get_dmy_auto_mode(data)                                     ((0x40000000&(data))>>30)
#define  CMPRS_CCPAR_get_dmy_mb_row(data)                                        ((0x20000000&(data))>>29)
#define  CMPRS_CCPAR_get_dmy_mb_clm(data)                                        ((0x10000000&(data))>>28)
#define  CMPRS_CCPAR_get_MB_field_decoding_flag(data)                            ((0x08000000&(data))>>27)
#define  CMPRS_CCPAR_get_dmy_row_ctb(data)                                       ((0x04000000&(data))>>26)
#define  CMPRS_CCPAR_get_dmy_clm_ctb(data)                                       ((0x02000000&(data))>>25)
#define  CMPRS_CCPAR_get_mb_num(data)                                            ((0x01F80000&(data))>>19)
#define  CMPRS_CCPAR_get_cur_mb_x(data)                                          ((0x0007FE00&(data))>>9)
#define  CMPRS_CCPAR_get_cur_mb_y(data)                                          (0x000001FF&(data))
#define  CMPRS_CCPAR_dmy_auto_mode_src(data)                                     ((0x40000000&(data))>>30)
#define  CMPRS_CCPAR_dmy_mb_row_src(data)                                        ((0x20000000&(data))>>29)
#define  CMPRS_CCPAR_dmy_mb_clm_src(data)                                        ((0x10000000&(data))>>28)
#define  CMPRS_CCPAR_MB_field_decoding_flag_src(data)                            ((0x08000000&(data))>>27)
#define  CMPRS_CCPAR_dmy_row_ctb_src(data)                                       ((0x04000000&(data))>>26)
#define  CMPRS_CCPAR_dmy_clm_ctb_src(data)                                       ((0x02000000&(data))>>25)
#define  CMPRS_CCPAR_mb_num_src(data)                                            ((0x01F80000&(data))>>19)
#define  CMPRS_CCPAR_cur_mb_x_src(data)                                          ((0x0007FE00&(data))>>9)
#define  CMPRS_CCPAR_cur_mb_y_src(data)                                          (0x000001FF&(data))

#define  CMPRS_STATUS                                                           0x1800EB84
#define  CMPRS_STATUS_reg_addr                                                   "0xB800EB84"
#define  CMPRS_STATUS_reg                                                        0xB800EB84
#define  CMPRS_STATUS_inst_adr                                                   "0x00E1"
#define  CMPRS_STATUS_inst                                                       0x00E1
#define  set_CMPRS_STATUS_reg(data)                                              (*((volatile unsigned int*)CMPRS_STATUS_reg)=data)
#define  get_CMPRS_STATUS_reg                                                    (*((volatile unsigned int*)CMPRS_STATUS_reg))
#define  CMPRS_STATUS_min_size_shift                                             (25)
#define  CMPRS_STATUS_max_leaf_nodes_shift                                       (19)
#define  CMPRS_STATUS_dma_eff_enhance_shift                                      (18)
#define  CMPRS_STATUS_post_write_disable_shift                                   (17)
#define  CMPRS_STATUS_hdr_addr_update_shift                                      (16)
#define  CMPRS_STATUS_comp_core_irq_shift                                        (15)
#define  CMPRS_STATUS_quarter_filter_type_shift                                  (13)
#define  CMPRS_STATUS_comp_core_bypass_shift                                     (12)
#define  CMPRS_STATUS_comp_core_errflag_clr_shift                                (8)
#define  CMPRS_STATUS_comp_core_flag2irq_en_shift                                (4)
#define  CMPRS_STATUS_comp_core_errflag_shift                                    (0)
#define  CMPRS_STATUS_min_size_mask                                              (0x1E000000)
#define  CMPRS_STATUS_max_leaf_nodes_mask                                        (0x01F80000)
#define  CMPRS_STATUS_dma_eff_enhance_mask                                       (0x00040000)
#define  CMPRS_STATUS_post_write_disable_mask                                    (0x00020000)
#define  CMPRS_STATUS_hdr_addr_update_mask                                       (0x00010000)
#define  CMPRS_STATUS_comp_core_irq_mask                                         (0x00008000)
#define  CMPRS_STATUS_quarter_filter_type_mask                                   (0x00006000)
#define  CMPRS_STATUS_comp_core_bypass_mask                                      (0x00001000)
#define  CMPRS_STATUS_comp_core_errflag_clr_mask                                 (0x00000F00)
#define  CMPRS_STATUS_comp_core_flag2irq_en_mask                                 (0x000000F0)
#define  CMPRS_STATUS_comp_core_errflag_mask                                     (0x0000000F)
#define  CMPRS_STATUS_min_size(data)                                             (0x1E000000&((data)<<25))
#define  CMPRS_STATUS_max_leaf_nodes(data)                                       (0x01F80000&((data)<<19))
#define  CMPRS_STATUS_dma_eff_enhance(data)                                      (0x00040000&((data)<<18))
#define  CMPRS_STATUS_post_write_disable(data)                                   (0x00020000&((data)<<17))
#define  CMPRS_STATUS_hdr_addr_update(data)                                      (0x00010000&((data)<<16))
#define  CMPRS_STATUS_comp_core_irq(data)                                        (0x00008000&((data)<<15))
#define  CMPRS_STATUS_quarter_filter_type(data)                                  (0x00006000&((data)<<13))
#define  CMPRS_STATUS_comp_core_bypass(data)                                     (0x00001000&((data)<<12))
#define  CMPRS_STATUS_comp_core_errflag_clr(data)                                (0x00000F00&((data)<<8))
#define  CMPRS_STATUS_comp_core_flag2irq_en(data)                                (0x000000F0&((data)<<4))
#define  CMPRS_STATUS_comp_core_errflag(data)                                    (0x0000000F&(data))
#define  CMPRS_STATUS_get_min_size(data)                                         ((0x1E000000&(data))>>25)
#define  CMPRS_STATUS_get_max_leaf_nodes(data)                                   ((0x01F80000&(data))>>19)
#define  CMPRS_STATUS_get_dma_eff_enhance(data)                                  ((0x00040000&(data))>>18)
#define  CMPRS_STATUS_get_post_write_disable(data)                               ((0x00020000&(data))>>17)
#define  CMPRS_STATUS_get_hdr_addr_update(data)                                  ((0x00010000&(data))>>16)
#define  CMPRS_STATUS_get_comp_core_irq(data)                                    ((0x00008000&(data))>>15)
#define  CMPRS_STATUS_get_quarter_filter_type(data)                              ((0x00006000&(data))>>13)
#define  CMPRS_STATUS_get_comp_core_bypass(data)                                 ((0x00001000&(data))>>12)
#define  CMPRS_STATUS_get_comp_core_errflag_clr(data)                            ((0x00000F00&(data))>>8)
#define  CMPRS_STATUS_get_comp_core_flag2irq_en(data)                            ((0x000000F0&(data))>>4)
#define  CMPRS_STATUS_get_comp_core_errflag(data)                                (0x0000000F&(data))
#define  CMPRS_STATUS_min_size_src(data)                                         ((0x1E000000&(data))>>25)
#define  CMPRS_STATUS_max_leaf_nodes_src(data)                                   ((0x01F80000&(data))>>19)
#define  CMPRS_STATUS_dma_eff_enhance_src(data)                                  ((0x00040000&(data))>>18)
#define  CMPRS_STATUS_post_write_disable_src(data)                               ((0x00020000&(data))>>17)
#define  CMPRS_STATUS_hdr_addr_update_src(data)                                  ((0x00010000&(data))>>16)
#define  CMPRS_STATUS_comp_core_irq_src(data)                                    ((0x00008000&(data))>>15)
#define  CMPRS_STATUS_quarter_filter_type_src(data)                              ((0x00006000&(data))>>13)
#define  CMPRS_STATUS_comp_core_bypass_src(data)                                 ((0x00001000&(data))>>12)
#define  CMPRS_STATUS_comp_core_errflag_clr_src(data)                            ((0x00000F00&(data))>>8)
#define  CMPRS_STATUS_comp_core_flag2irq_en_src(data)                            ((0x000000F0&(data))>>4)
#define  CMPRS_STATUS_comp_core_errflag_src(data)                                (0x0000000F&(data))

#define  CMPRS_VMADR0                                                           0x1800EB88
#define  CMPRS_VMADR0_reg_addr                                                   "0xB800EB88"
#define  CMPRS_VMADR0_reg                                                        0xB800EB88
#define  CMPRS_VMADR0_inst_adr                                                   "0x00E2"
#define  CMPRS_VMADR0_inst                                                       0x00E2
#define  set_CMPRS_VMADR0_reg(data)                                              (*((volatile unsigned int*)CMPRS_VMADR0_reg)=data)
#define  get_CMPRS_VMADR0_reg                                                    (*((volatile unsigned int*)CMPRS_VMADR0_reg))
#define  CMPRS_VMADR0_sb_str_addr_shift                                          (16)
#define  CMPRS_VMADR0_OffsetA2_shift                                             (7)
#define  CMPRS_VMADR0_BaseA2_shift                                               (0)
#define  CMPRS_VMADR0_sb_str_addr_mask                                           (0x007F0000)
#define  CMPRS_VMADR0_OffsetA2_mask                                              (0x00003F80)
#define  CMPRS_VMADR0_BaseA2_mask                                                (0x0000007F)
#define  CMPRS_VMADR0_sb_str_addr(data)                                          (0x007F0000&((data)<<16))
#define  CMPRS_VMADR0_OffsetA2(data)                                             (0x00003F80&((data)<<7))
#define  CMPRS_VMADR0_BaseA2(data)                                               (0x0000007F&(data))
#define  CMPRS_VMADR0_get_sb_str_addr(data)                                      ((0x007F0000&(data))>>16)
#define  CMPRS_VMADR0_get_OffsetA2(data)                                         ((0x00003F80&(data))>>7)
#define  CMPRS_VMADR0_get_BaseA2(data)                                           (0x0000007F&(data))
#define  CMPRS_VMADR0_sb_str_addr_src(data)                                      ((0x007F0000&(data))>>16)
#define  CMPRS_VMADR0_OffsetA2_src(data)                                         ((0x00003F80&(data))>>7)
#define  CMPRS_VMADR0_BaseA2_src(data)                                           (0x0000007F&(data))

#define  CMPRS_VMADR1                                                           0x1800EB8C
#define  CMPRS_VMADR1_reg_addr                                                   "0xB800EB8C"
#define  CMPRS_VMADR1_reg                                                        0xB800EB8C
#define  CMPRS_VMADR1_inst_adr                                                   "0x00E3"
#define  CMPRS_VMADR1_inst                                                       0x00E3
#define  set_CMPRS_VMADR1_reg(data)                                              (*((volatile unsigned int*)CMPRS_VMADR1_reg)=data)
#define  get_CMPRS_VMADR1_reg                                                    (*((volatile unsigned int*)CMPRS_VMADR1_reg))
#define  CMPRS_VMADR1_OffsetA1_shift                                             (23)
#define  CMPRS_VMADR1_BaseA1_shift                                               (16)
#define  CMPRS_VMADR1_OffsetA0_shift                                             (7)
#define  CMPRS_VMADR1_BaseA0_shift                                               (0)
#define  CMPRS_VMADR1_OffsetA1_mask                                              (0x3F800000)
#define  CMPRS_VMADR1_BaseA1_mask                                                (0x007F0000)
#define  CMPRS_VMADR1_OffsetA0_mask                                              (0x00003F80)
#define  CMPRS_VMADR1_BaseA0_mask                                                (0x0000007F)
#define  CMPRS_VMADR1_OffsetA1(data)                                             (0x3F800000&((data)<<23))
#define  CMPRS_VMADR1_BaseA1(data)                                               (0x007F0000&((data)<<16))
#define  CMPRS_VMADR1_OffsetA0(data)                                             (0x00003F80&((data)<<7))
#define  CMPRS_VMADR1_BaseA0(data)                                               (0x0000007F&(data))
#define  CMPRS_VMADR1_get_OffsetA1(data)                                         ((0x3F800000&(data))>>23)
#define  CMPRS_VMADR1_get_BaseA1(data)                                           ((0x007F0000&(data))>>16)
#define  CMPRS_VMADR1_get_OffsetA0(data)                                         ((0x00003F80&(data))>>7)
#define  CMPRS_VMADR1_get_BaseA0(data)                                           (0x0000007F&(data))
#define  CMPRS_VMADR1_OffsetA1_src(data)                                         ((0x3F800000&(data))>>23)
#define  CMPRS_VMADR1_BaseA1_src(data)                                           ((0x007F0000&(data))>>16)
#define  CMPRS_VMADR1_OffsetA0_src(data)                                         ((0x00003F80&(data))>>7)
#define  CMPRS_VMADR1_BaseA0_src(data)                                           (0x0000007F&(data))

#define  CMPRS_HDMAADR_0                                                        0x1800EB90
#define  CMPRS_HDMAADR_0_reg_addr                                                "0xB800EB90"
#define  CMPRS_HDMAADR_0_reg                                                     0xB800EB90
#define  CMPRS_HDMAADR_0_inst_adr                                                "0x00E4"
#define  CMPRS_HDMAADR_0_inst                                                    0x00E4
#define  set_CMPRS_HDMAADR_0_reg(data)                                           (*((volatile unsigned int*)CMPRS_HDMAADR_0_reg)=data)
#define  get_CMPRS_HDMAADR_0_reg                                                 (*((volatile unsigned int*)CMPRS_HDMAADR_0_reg))
#define  CMPRS_HDMAADR_hdr_str_addr_shift                                        (0)
#define  CMPRS_HDMAADR_hdr_str_addr_mask                                         (0xFFFFFFFF)
#define  CMPRS_HDMAADR_hdr_str_addr(data)                                        (0xFFFFFFFF&(data))
#define  CMPRS_HDMAADR_get_hdr_str_addr(data)                                    (0xFFFFFFFF&(data))
#define  CMPRS_HDMAADR_hdr_str_addr_src(data)                                    (0xFFFFFFFF&(data))

#define  CMPRS_HDMAADR_1                                                        0x1800EB94
#define  CMPRS_HDMAADR_1_reg_addr                                                "0xB800EB94"
#define  CMPRS_HDMAADR_1_reg                                                     0xB800EB94
#define  CMPRS_HDMAADR_1_inst_adr                                                "0x00E5"
#define  CMPRS_HDMAADR_1_inst                                                    0x00E5
#define  set_CMPRS_HDMAADR_1_reg(data)                                           (*((volatile unsigned int*)CMPRS_HDMAADR_1_reg)=data)
#define  get_CMPRS_HDMAADR_1_reg                                                 (*((volatile unsigned int*)CMPRS_HDMAADR_1_reg))

#define  CMPRS_CONTROL                                                          0x1800EB98
#define  CMPRS_CONTROL_reg_addr                                                  "0xB800EB98"
#define  CMPRS_CONTROL_reg                                                       0xB800EB98
#define  CMPRS_CONTROL_inst_adr                                                  "0x00E6"
#define  CMPRS_CONTROL_inst                                                      0x00E6
#define  set_CMPRS_CONTROL_reg(data)                                             (*((volatile unsigned int*)CMPRS_CONTROL_reg)=data)
#define  get_CMPRS_CONTROL_reg                                                   (*((volatile unsigned int*)CMPRS_CONTROL_reg))
#define  CMPRS_CONTROL_cmprs_rst_en_shift                                        (21)
#define  CMPRS_CONTROL_qlevel_hist_enable_shift                                  (20)
#define  CMPRS_CONTROL_qp_decision_method_y_shift                                (19)
#define  CMPRS_CONTROL_qp_decision_method_c_shift                                (18)
#define  CMPRS_CONTROL_alternate_budget_y_shift                                  (11)
#define  CMPRS_CONTROL_alternate_budget_c_shift                                  (4)
#define  CMPRS_CONTROL_min_qp_y_shift                                            (2)
#define  CMPRS_CONTROL_min_qp_c_shift                                            (0)
#define  CMPRS_CONTROL_cmprs_rst_en_mask                                         (0x00200000)
#define  CMPRS_CONTROL_qlevel_hist_enable_mask                                   (0x00100000)
#define  CMPRS_CONTROL_qp_decision_method_y_mask                                 (0x00080000)
#define  CMPRS_CONTROL_qp_decision_method_c_mask                                 (0x00040000)
#define  CMPRS_CONTROL_alternate_budget_y_mask                                   (0x0003F800)
#define  CMPRS_CONTROL_alternate_budget_c_mask                                   (0x000007F0)
#define  CMPRS_CONTROL_min_qp_y_mask                                             (0x0000000C)
#define  CMPRS_CONTROL_min_qp_c_mask                                             (0x00000003)
#define  CMPRS_CONTROL_cmprs_rst_en(data)                                        (0x00200000&((data)<<21))
#define  CMPRS_CONTROL_qlevel_hist_enable(data)                                  (0x00100000&((data)<<20))
#define  CMPRS_CONTROL_qp_decision_method_y(data)                                (0x00080000&((data)<<19))
#define  CMPRS_CONTROL_qp_decision_method_c(data)                                (0x00040000&((data)<<18))
#define  CMPRS_CONTROL_alternate_budget_y(data)                                  (0x0003F800&((data)<<11))
#define  CMPRS_CONTROL_alternate_budget_c(data)                                  (0x000007F0&((data)<<4))
#define  CMPRS_CONTROL_min_qp_y(data)                                            (0x0000000C&((data)<<2))
#define  CMPRS_CONTROL_min_qp_c(data)                                            (0x00000003&(data))
#define  CMPRS_CONTROL_get_cmprs_rst_en(data)                                    ((0x00200000&(data))>>21)
#define  CMPRS_CONTROL_get_qlevel_hist_enable(data)                              ((0x00100000&(data))>>20)
#define  CMPRS_CONTROL_get_qp_decision_method_y(data)                            ((0x00080000&(data))>>19)
#define  CMPRS_CONTROL_get_qp_decision_method_c(data)                            ((0x00040000&(data))>>18)
#define  CMPRS_CONTROL_get_alternate_budget_y(data)                              ((0x0003F800&(data))>>11)
#define  CMPRS_CONTROL_get_alternate_budget_c(data)                              ((0x000007F0&(data))>>4)
#define  CMPRS_CONTROL_get_min_qp_y(data)                                        ((0x0000000C&(data))>>2)
#define  CMPRS_CONTROL_get_min_qp_c(data)                                        (0x00000003&(data))
#define  CMPRS_CONTROL_cmprs_rst_en_src(data)                                    ((0x00200000&(data))>>21)
#define  CMPRS_CONTROL_qlevel_hist_enable_src(data)                              ((0x00100000&(data))>>20)
#define  CMPRS_CONTROL_qp_decision_method_y_src(data)                            ((0x00080000&(data))>>19)
#define  CMPRS_CONTROL_qp_decision_method_c_src(data)                            ((0x00040000&(data))>>18)
#define  CMPRS_CONTROL_alternate_budget_y_src(data)                              ((0x0003F800&(data))>>11)
#define  CMPRS_CONTROL_alternate_budget_c_src(data)                              ((0x000007F0&(data))>>4)
#define  CMPRS_CONTROL_min_qp_y_src(data)                                        ((0x0000000C&(data))>>2)
#define  CMPRS_CONTROL_min_qp_c_src(data)                                        (0x00000003&(data))

#define  CMPRS_BLKBYTES_Y                                                       0x1800EBA0
#define  CMPRS_BLKBYTES_Y_reg_addr                                               "0xB800EBA0"
#define  CMPRS_BLKBYTES_Y_reg                                                    0xB800EBA0
#define  CMPRS_BLKBYTES_Y_inst_adr                                               "0x00E8"
#define  CMPRS_BLKBYTES_Y_inst                                                   0x00E8
#define  set_CMPRS_BLKBYTES_Y_reg(data)                                          (*((volatile unsigned int*)CMPRS_BLKBYTES_Y_reg)=data)
#define  get_CMPRS_BLKBYTES_Y_reg                                                (*((volatile unsigned int*)CMPRS_BLKBYTES_Y_reg))
#define  CMPRS_BLKBYTES_Y_loan_qlevel_shift                                      (28)
#define  CMPRS_BLKBYTES_Y_max_blk_bytes_shift                                    (21)
#define  CMPRS_BLKBYTES_Y_min_blk_bytes_shift                                    (14)
#define  CMPRS_BLKBYTES_Y_targ_blk_bytes_shift                                   (7)
#define  CMPRS_BLKBYTES_Y_loan_blk_bytes_shift                                   (0)
#define  CMPRS_BLKBYTES_Y_loan_qlevel_mask                                       (0xF0000000)
#define  CMPRS_BLKBYTES_Y_max_blk_bytes_mask                                     (0x0FE00000)
#define  CMPRS_BLKBYTES_Y_min_blk_bytes_mask                                     (0x001FC000)
#define  CMPRS_BLKBYTES_Y_targ_blk_bytes_mask                                    (0x00003F80)
#define  CMPRS_BLKBYTES_Y_loan_blk_bytes_mask                                    (0x0000007F)
#define  CMPRS_BLKBYTES_Y_loan_qlevel(data)                                      (0xF0000000&((data)<<28))
#define  CMPRS_BLKBYTES_Y_max_blk_bytes(data)                                    (0x0FE00000&((data)<<21))
#define  CMPRS_BLKBYTES_Y_min_blk_bytes(data)                                    (0x001FC000&((data)<<14))
#define  CMPRS_BLKBYTES_Y_targ_blk_bytes(data)                                   (0x00003F80&((data)<<7))
#define  CMPRS_BLKBYTES_Y_loan_blk_bytes(data)                                   (0x0000007F&(data))
#define  CMPRS_BLKBYTES_Y_get_loan_qlevel(data)                                  ((0xF0000000&(data))>>28)
#define  CMPRS_BLKBYTES_Y_get_max_blk_bytes(data)                                ((0x0FE00000&(data))>>21)
#define  CMPRS_BLKBYTES_Y_get_min_blk_bytes(data)                                ((0x001FC000&(data))>>14)
#define  CMPRS_BLKBYTES_Y_get_targ_blk_bytes(data)                               ((0x00003F80&(data))>>7)
#define  CMPRS_BLKBYTES_Y_get_loan_blk_bytes(data)                               (0x0000007F&(data))
#define  CMPRS_BLKBYTES_Y_loan_qlevel_src(data)                                  ((0xF0000000&(data))>>28)
#define  CMPRS_BLKBYTES_Y_max_blk_bytes_src(data)                                ((0x0FE00000&(data))>>21)
#define  CMPRS_BLKBYTES_Y_min_blk_bytes_src(data)                                ((0x001FC000&(data))>>14)
#define  CMPRS_BLKBYTES_Y_targ_blk_bytes_src(data)                               ((0x00003F80&(data))>>7)
#define  CMPRS_BLKBYTES_Y_loan_blk_bytes_src(data)                               (0x0000007F&(data))

#define  CMPRS_QLEVEL_Y                                                         0x1800EBA4
#define  CMPRS_QLEVEL_Y_reg_addr                                                 "0xB800EBA4"
#define  CMPRS_QLEVEL_Y_reg                                                      0xB800EBA4
#define  CMPRS_QLEVEL_Y_inst_adr                                                 "0x00E9"
#define  CMPRS_QLEVEL_Y_inst                                                     0x00E9
#define  set_CMPRS_QLEVEL_Y_reg(data)                                            (*((volatile unsigned int*)CMPRS_QLEVEL_Y_reg)=data)
#define  get_CMPRS_QLEVEL_Y_reg                                                  (*((volatile unsigned int*)CMPRS_QLEVEL_Y_reg))
#define  CMPRS_QLEVEL_Y_qlevel_queue_sel_shift                                   (25)
#define  CMPRS_QLEVEL_Y_qlevel_hist_addr_shift                                   (21)
#define  CMPRS_QLEVEL_Y_qlevel_hist_rden_shift                                   (20)
#define  CMPRS_QLEVEL_Y_qlevel_hist_rdata_ro_shift                               (0)
#define  CMPRS_QLEVEL_Y_qlevel_queue_sel_mask                                    (0x06000000)
#define  CMPRS_QLEVEL_Y_qlevel_hist_addr_mask                                    (0x01E00000)
#define  CMPRS_QLEVEL_Y_qlevel_hist_rden_mask                                    (0x00100000)
#define  CMPRS_QLEVEL_Y_qlevel_hist_rdata_ro_mask                                (0x000FFFFF)
#define  CMPRS_QLEVEL_Y_qlevel_queue_sel(data)                                   (0x06000000&((data)<<25))
#define  CMPRS_QLEVEL_Y_qlevel_hist_addr(data)                                   (0x01E00000&((data)<<21))
#define  CMPRS_QLEVEL_Y_qlevel_hist_rden(data)                                   (0x00100000&((data)<<20))
#define  CMPRS_QLEVEL_Y_qlevel_hist_rdata_ro(data)                               (0x000FFFFF&(data))
#define  CMPRS_QLEVEL_Y_get_qlevel_queue_sel(data)                               ((0x06000000&(data))>>25)
#define  CMPRS_QLEVEL_Y_get_qlevel_hist_addr(data)                               ((0x01E00000&(data))>>21)
#define  CMPRS_QLEVEL_Y_get_qlevel_hist_rden(data)                               ((0x00100000&(data))>>20)
#define  CMPRS_QLEVEL_Y_get_qlevel_hist_rdata_ro(data)                           (0x000FFFFF&(data))
#define  CMPRS_QLEVEL_Y_qlevel_queue_sel_src(data)                               ((0x06000000&(data))>>25)
#define  CMPRS_QLEVEL_Y_qlevel_hist_addr_src(data)                               ((0x01E00000&(data))>>21)
#define  CMPRS_QLEVEL_Y_qlevel_hist_rden_src(data)                               ((0x00100000&(data))>>20)
#define  CMPRS_QLEVEL_Y_qlevel_hist_rdata_ro_src(data)                           (0x000FFFFF&(data))

#define  CMPRS_REMBYTE_Y                                                        0x1800EBA8
#define  CMPRS_REMBYTE_Y_reg_addr                                                "0xB800EBA8"
#define  CMPRS_REMBYTE_Y_reg                                                     0xB800EBA8
#define  CMPRS_REMBYTE_Y_inst_adr                                                "0x00EA"
#define  CMPRS_REMBYTE_Y_inst                                                    0x00EA
#define  set_CMPRS_REMBYTE_Y_reg(data)                                           (*((volatile unsigned int*)CMPRS_REMBYTE_Y_reg)=data)
#define  get_CMPRS_REMBYTE_Y_reg                                                 (*((volatile unsigned int*)CMPRS_REMBYTE_Y_reg))
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_base_shift                          (16)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_mode_shift                          (15)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_addr_shift                         (12)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rden_shift                         (11)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rdata_ro_shift                     (0)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_base_mask                           (0x03FF0000)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_mode_mask                           (0x00008000)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_addr_mask                          (0x00007000)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rden_mask                          (0x00000800)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rdata_ro_mask                      (0x000007FF)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_base(data)                          (0x03FF0000&((data)<<16))
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_mode(data)                          (0x00008000&((data)<<15))
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_addr(data)                         (0x00007000&((data)<<12))
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rden(data)                         (0x00000800&((data)<<11))
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rdata_ro(data)                     (0x000007FF&(data))
#define  CMPRS_REMBYTE_Y_get_blkLine_rembyte_bin_base(data)                      ((0x03FF0000&(data))>>16)
#define  CMPRS_REMBYTE_Y_get_blkLine_rembyte_bin_mode(data)                      ((0x00008000&(data))>>15)
#define  CMPRS_REMBYTE_Y_get_blkLine_rembyte_hist_addr(data)                     ((0x00007000&(data))>>12)
#define  CMPRS_REMBYTE_Y_get_blkLine_rembyte_hist_rden(data)                     ((0x00000800&(data))>>11)
#define  CMPRS_REMBYTE_Y_get_blkLine_rembyte_hist_rdata_ro(data)                 (0x000007FF&(data))
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_base_src(data)                      ((0x03FF0000&(data))>>16)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_bin_mode_src(data)                      ((0x00008000&(data))>>15)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_addr_src(data)                     ((0x00007000&(data))>>12)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rden_src(data)                     ((0x00000800&(data))>>11)
#define  CMPRS_REMBYTE_Y_blkLine_rembyte_hist_rdata_ro_src(data)                 (0x000007FF&(data))

#define  CMPRS_BLKBYTES_C                                                       0x1800EBAC
#define  CMPRS_BLKBYTES_C_reg_addr                                               "0xB800EBAC"
#define  CMPRS_BLKBYTES_C_reg                                                    0xB800EBAC
#define  CMPRS_BLKBYTES_C_inst_adr                                               "0x00EB"
#define  CMPRS_BLKBYTES_C_inst                                                   0x00EB
#define  set_CMPRS_BLKBYTES_C_reg(data)                                          (*((volatile unsigned int*)CMPRS_BLKBYTES_C_reg)=data)
#define  get_CMPRS_BLKBYTES_C_reg                                                (*((volatile unsigned int*)CMPRS_BLKBYTES_C_reg))
#define  CMPRS_BLKBYTES_C_loan_qlevel_shift                                      (28)
#define  CMPRS_BLKBYTES_C_max_blk_bytes_shift                                    (21)
#define  CMPRS_BLKBYTES_C_min_blk_bytes_shift                                    (14)
#define  CMPRS_BLKBYTES_C_targ_blk_bytes_shift                                   (7)
#define  CMPRS_BLKBYTES_C_loan_blk_bytes_shift                                   (0)
#define  CMPRS_BLKBYTES_C_loan_qlevel_mask                                       (0xF0000000)
#define  CMPRS_BLKBYTES_C_max_blk_bytes_mask                                     (0x0FE00000)
#define  CMPRS_BLKBYTES_C_min_blk_bytes_mask                                     (0x001FC000)
#define  CMPRS_BLKBYTES_C_targ_blk_bytes_mask                                    (0x00003F80)
#define  CMPRS_BLKBYTES_C_loan_blk_bytes_mask                                    (0x0000007F)
#define  CMPRS_BLKBYTES_C_loan_qlevel(data)                                      (0xF0000000&((data)<<28))
#define  CMPRS_BLKBYTES_C_max_blk_bytes(data)                                    (0x0FE00000&((data)<<21))
#define  CMPRS_BLKBYTES_C_min_blk_bytes(data)                                    (0x001FC000&((data)<<14))
#define  CMPRS_BLKBYTES_C_targ_blk_bytes(data)                                   (0x00003F80&((data)<<7))
#define  CMPRS_BLKBYTES_C_loan_blk_bytes(data)                                   (0x0000007F&(data))
#define  CMPRS_BLKBYTES_C_get_loan_qlevel(data)                                  ((0xF0000000&(data))>>28)
#define  CMPRS_BLKBYTES_C_get_max_blk_bytes(data)                                ((0x0FE00000&(data))>>21)
#define  CMPRS_BLKBYTES_C_get_min_blk_bytes(data)                                ((0x001FC000&(data))>>14)
#define  CMPRS_BLKBYTES_C_get_targ_blk_bytes(data)                               ((0x00003F80&(data))>>7)
#define  CMPRS_BLKBYTES_C_get_loan_blk_bytes(data)                               (0x0000007F&(data))
#define  CMPRS_BLKBYTES_C_loan_qlevel_src(data)                                  ((0xF0000000&(data))>>28)
#define  CMPRS_BLKBYTES_C_max_blk_bytes_src(data)                                ((0x0FE00000&(data))>>21)
#define  CMPRS_BLKBYTES_C_min_blk_bytes_src(data)                                ((0x001FC000&(data))>>14)
#define  CMPRS_BLKBYTES_C_targ_blk_bytes_src(data)                               ((0x00003F80&(data))>>7)
#define  CMPRS_BLKBYTES_C_loan_blk_bytes_src(data)                               (0x0000007F&(data))

#define  CMPRS_QLEVEL_C                                                         0x1800EBB0
#define  CMPRS_QLEVEL_C_reg_addr                                                 "0xB800EBB0"
#define  CMPRS_QLEVEL_C_reg                                                      0xB800EBB0
#define  CMPRS_QLEVEL_C_inst_adr                                                 "0x00EC"
#define  CMPRS_QLEVEL_C_inst                                                     0x00EC
#define  set_CMPRS_QLEVEL_C_reg(data)                                            (*((volatile unsigned int*)CMPRS_QLEVEL_C_reg)=data)
#define  get_CMPRS_QLEVEL_C_reg                                                  (*((volatile unsigned int*)CMPRS_QLEVEL_C_reg))
#define  CMPRS_QLEVEL_C_qlevel_queue_sel_shift                                   (24)
#define  CMPRS_QLEVEL_C_qlevel_hist_addr_shift                                   (20)
#define  CMPRS_QLEVEL_C_qlevel_hist_rden_shift                                   (19)
#define  CMPRS_QLEVEL_C_qlevel_hist_rdata_ro_shift                               (0)
#define  CMPRS_QLEVEL_C_qlevel_queue_sel_mask                                    (0x01000000)
#define  CMPRS_QLEVEL_C_qlevel_hist_addr_mask                                    (0x00F00000)
#define  CMPRS_QLEVEL_C_qlevel_hist_rden_mask                                    (0x00080000)
#define  CMPRS_QLEVEL_C_qlevel_hist_rdata_ro_mask                                (0x0007FFFF)
#define  CMPRS_QLEVEL_C_qlevel_queue_sel(data)                                   (0x01000000&((data)<<24))
#define  CMPRS_QLEVEL_C_qlevel_hist_addr(data)                                   (0x00F00000&((data)<<20))
#define  CMPRS_QLEVEL_C_qlevel_hist_rden(data)                                   (0x00080000&((data)<<19))
#define  CMPRS_QLEVEL_C_qlevel_hist_rdata_ro(data)                               (0x0007FFFF&(data))
#define  CMPRS_QLEVEL_C_get_qlevel_queue_sel(data)                               ((0x01000000&(data))>>24)
#define  CMPRS_QLEVEL_C_get_qlevel_hist_addr(data)                               ((0x00F00000&(data))>>20)
#define  CMPRS_QLEVEL_C_get_qlevel_hist_rden(data)                               ((0x00080000&(data))>>19)
#define  CMPRS_QLEVEL_C_get_qlevel_hist_rdata_ro(data)                           (0x0007FFFF&(data))
#define  CMPRS_QLEVEL_C_qlevel_queue_sel_src(data)                               ((0x01000000&(data))>>24)
#define  CMPRS_QLEVEL_C_qlevel_hist_addr_src(data)                               ((0x00F00000&(data))>>20)
#define  CMPRS_QLEVEL_C_qlevel_hist_rden_src(data)                               ((0x00080000&(data))>>19)
#define  CMPRS_QLEVEL_C_qlevel_hist_rdata_ro_src(data)                           (0x0007FFFF&(data))

#define  CMPRS_REMBYTE_C                                                        0x1800EBB4
#define  CMPRS_REMBYTE_C_reg_addr                                                "0xB800EBB4"
#define  CMPRS_REMBYTE_C_reg                                                     0xB800EBB4
#define  CMPRS_REMBYTE_C_inst_adr                                                "0x00ED"
#define  CMPRS_REMBYTE_C_inst                                                    0x00ED
#define  set_CMPRS_REMBYTE_C_reg(data)                                           (*((volatile unsigned int*)CMPRS_REMBYTE_C_reg)=data)
#define  get_CMPRS_REMBYTE_C_reg                                                 (*((volatile unsigned int*)CMPRS_REMBYTE_C_reg))
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_base_shift                          (16)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_mode_shift                          (15)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_addr_shift                         (12)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rden_shift                         (11)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rdata_ro_shift                     (0)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_base_mask                           (0x03FF0000)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_mode_mask                           (0x00008000)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_addr_mask                          (0x00007000)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rden_mask                          (0x00000800)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rdata_ro_mask                      (0x000007FF)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_base(data)                          (0x03FF0000&((data)<<16))
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_mode(data)                          (0x00008000&((data)<<15))
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_addr(data)                         (0x00007000&((data)<<12))
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rden(data)                         (0x00000800&((data)<<11))
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rdata_ro(data)                     (0x000007FF&(data))
#define  CMPRS_REMBYTE_C_get_blkLine_rembyte_bin_base(data)                      ((0x03FF0000&(data))>>16)
#define  CMPRS_REMBYTE_C_get_blkLine_rembyte_bin_mode(data)                      ((0x00008000&(data))>>15)
#define  CMPRS_REMBYTE_C_get_blkLine_rembyte_hist_addr(data)                     ((0x00007000&(data))>>12)
#define  CMPRS_REMBYTE_C_get_blkLine_rembyte_hist_rden(data)                     ((0x00000800&(data))>>11)
#define  CMPRS_REMBYTE_C_get_blkLine_rembyte_hist_rdata_ro(data)                 (0x000007FF&(data))
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_base_src(data)                      ((0x03FF0000&(data))>>16)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_bin_mode_src(data)                      ((0x00008000&(data))>>15)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_addr_src(data)                     ((0x00007000&(data))>>12)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rden_src(data)                     ((0x00000800&(data))>>11)
#define  CMPRS_REMBYTE_C_blkLine_rembyte_hist_rdata_ro_src(data)                 (0x000007FF&(data))

#define  CMPRS_DMA_BASE                                                         0x1800EBBC
#define  CMPRS_DMA_BASE_reg_addr                                                 "0xB800EBBC"
#define  CMPRS_DMA_BASE_reg                                                      0xB800EBBC
#define  CMPRS_DMA_BASE_inst_adr                                                 "0x00EF"
#define  CMPRS_DMA_BASE_inst                                                     0x00EF
#define  set_CMPRS_DMA_BASE_reg(data)                                            (*((volatile unsigned int*)CMPRS_DMA_BASE_reg)=data)
#define  get_CMPRS_DMA_BASE_reg                                                  (*((volatile unsigned int*)CMPRS_DMA_BASE_reg))
#define  CMPRS_DMA_BASE_base_addr_shift                                          (0)
#define  CMPRS_DMA_BASE_base_addr_mask                                           (0xFFFFFFFF)
#define  CMPRS_DMA_BASE_base_addr(data)                                          (0xFFFFFFFF&(data))
#define  CMPRS_DMA_BASE_get_base_addr(data)                                      (0xFFFFFFFF&(data))
#define  CMPRS_DMA_BASE_base_addr_src(data)                                      (0xFFFFFFFF&(data))

#ifdef _CMPRS_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CMPRS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dmy_auto_mode:1;
        RBus_UInt32  dmy_mb_row:1;
        RBus_UInt32  dmy_mb_clm:1;
        RBus_UInt32  MB_field_decoding_flag:1;
        RBus_UInt32  dmy_row_ctb:1;
        RBus_UInt32  dmy_clm_ctb:1;
        RBus_UInt32  mb_num:6;
        RBus_UInt32  cur_mb_x:10;
        RBus_UInt32  cur_mb_y:9;
    };
}CMPRS_CCPAR_RBUS;

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
}CMPRS_STATUS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  sb_str_addr:7;
        RBus_UInt32  res2:2;
        RBus_UInt32  OffsetA2:7;
        RBus_UInt32  BaseA2:7;
    };
}CMPRS_VMADR0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  OffsetA1:7;
        RBus_UInt32  BaseA1:7;
        RBus_UInt32  res2:2;
        RBus_UInt32  OffsetA0:7;
        RBus_UInt32  BaseA0:7;
    };
}CMPRS_VMADR1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr_str_addr:32;
    };
}CMPRS_HDMAADR_RBUS;

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
}CMPRS_CONTROL_RBUS;

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
}CMPRS_BLKBYTES_Y_RBUS;

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
}CMPRS_QLEVEL_Y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  blkLine_rembyte_bin_base:10;
        RBus_UInt32  blkLine_rembyte_bin_mode:1;
        RBus_UInt32  blkLine_rembyte_hist_addr:3;
        RBus_UInt32  blkLine_rembyte_hist_rden:1;
        RBus_UInt32  blkLine_rembyte_hist_rdata_ro:11;
    };
}CMPRS_REMBYTE_Y_RBUS;

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
}CMPRS_BLKBYTES_C_RBUS;

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
}CMPRS_QLEVEL_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  blkLine_rembyte_bin_base:10;
        RBus_UInt32  blkLine_rembyte_bin_mode:1;
        RBus_UInt32  blkLine_rembyte_hist_addr:3;
        RBus_UInt32  blkLine_rembyte_hist_rden:1;
        RBus_UInt32  blkLine_rembyte_hist_rdata_ro:11;
    };
}CMPRS_REMBYTE_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}CMPRS_DMA_BASE_RBUS;

#else //apply LITTLE_ENDIAN
//======CMPRS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cur_mb_y:9;
        RBus_UInt32  cur_mb_x:10;
        RBus_UInt32  mb_num:6;
        RBus_UInt32  dmy_clm_ctb:1;
        RBus_UInt32  dmy_row_ctb:1;
        RBus_UInt32  MB_field_decoding_flag:1;
        RBus_UInt32  dmy_mb_clm:1;
        RBus_UInt32  dmy_mb_row:1;
        RBus_UInt32  dmy_auto_mode:1;
        RBus_UInt32  res1:1;
    };
}CMPRS_CCPAR_RBUS;

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
}CMPRS_STATUS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  BaseA2:7;
        RBus_UInt32  OffsetA2:7;
        RBus_UInt32  res1:2;
        RBus_UInt32  sb_str_addr:7;
        RBus_UInt32  res2:9;
    };
}CMPRS_VMADR0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  BaseA0:7;
        RBus_UInt32  OffsetA0:7;
        RBus_UInt32  res1:2;
        RBus_UInt32  BaseA1:7;
        RBus_UInt32  OffsetA1:7;
        RBus_UInt32  res2:2;
    };
}CMPRS_VMADR1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr_str_addr:32;
    };
}CMPRS_HDMAADR_RBUS;

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
}CMPRS_CONTROL_RBUS;

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
}CMPRS_BLKBYTES_Y_RBUS;

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
}CMPRS_QLEVEL_Y_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blkLine_rembyte_hist_rdata_ro:11;
        RBus_UInt32  blkLine_rembyte_hist_rden:1;
        RBus_UInt32  blkLine_rembyte_hist_addr:3;
        RBus_UInt32  blkLine_rembyte_bin_mode:1;
        RBus_UInt32  blkLine_rembyte_bin_base:10;
        RBus_UInt32  res1:6;
    };
}CMPRS_REMBYTE_Y_RBUS;

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
}CMPRS_BLKBYTES_C_RBUS;

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
}CMPRS_QLEVEL_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  blkLine_rembyte_hist_rdata_ro:11;
        RBus_UInt32  blkLine_rembyte_hist_rden:1;
        RBus_UInt32  blkLine_rembyte_hist_addr:3;
        RBus_UInt32  blkLine_rembyte_bin_mode:1;
        RBus_UInt32  blkLine_rembyte_bin_base:10;
        RBus_UInt32  res1:6;
    };
}CMPRS_REMBYTE_C_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base_addr:32;
    };
}CMPRS_DMA_BASE_RBUS;

#endif

#endif
#endif
