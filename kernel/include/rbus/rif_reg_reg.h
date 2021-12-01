/**
* @file Merlin5_VE_top_arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_RIF_REG_REG_H_
#define _RBUS_RIF_REG_REG_H_

#include "rbus_types.h"



//  RIF_REG Register Address
#define  RIF_REG_ve_ctrl                                                        0x1800E400
#define  RIF_REG_ve_ctrl_reg_addr                                                "0xB800E400"
#define  RIF_REG_ve_ctrl_reg                                                     0xB800E400
#define  RIF_REG_ve_ctrl_inst_addr                                               "0x0000"
#define  set_RIF_REG_ve_ctrl_reg(data)                                           (*((volatile unsigned int*)RIF_REG_ve_ctrl_reg)=data)
#define  get_RIF_REG_ve_ctrl_reg                                                 (*((volatile unsigned int*)RIF_REG_ve_ctrl_reg))
#define  RIF_REG_ve_ctrl_ve_only_fpga_reset_shift                                (30)
#define  RIF_REG_ve_ctrl_ve_fpga_reset_shift                                     (29)
#define  RIF_REG_ve_ctrl_dbg_out_sel1_shift                                      (22)
#define  RIF_REG_ve_ctrl_dbg_out_sel0_shift                                      (17)
#define  RIF_REG_ve_ctrl_dbg_out_en_shift                                        (16)
#define  RIF_REG_ve_ctrl_inten_vcpu2_shift                                       (9)
#define  RIF_REG_ve_ctrl_encode_en_shift                                         (8)
#define  RIF_REG_ve_ctrl_ve_soft_reset_shift                                     (7)
#define  RIF_REG_ve_ctrl_vm_idle_shift                                           (6)
#define  RIF_REG_ve_ctrl_decode_en_shift                                         (5)
#define  RIF_REG_ve_ctrl_haltve_done_shift                                       (4)
#define  RIF_REG_ve_ctrl_haltve_shift                                            (3)
#define  RIF_REG_ve_ctrl_veidle_shift                                            (2)
#define  RIF_REG_ve_ctrl_inten_shift                                             (1)
#define  RIF_REG_ve_ctrl_reset_ptr_shift                                         (0)
#define  RIF_REG_ve_ctrl_ve_only_fpga_reset_mask                                 (0x40000000)
#define  RIF_REG_ve_ctrl_ve_fpga_reset_mask                                      (0x20000000)
#define  RIF_REG_ve_ctrl_dbg_out_sel1_mask                                       (0x07C00000)
#define  RIF_REG_ve_ctrl_dbg_out_sel0_mask                                       (0x003E0000)
#define  RIF_REG_ve_ctrl_dbg_out_en_mask                                         (0x00010000)
#define  RIF_REG_ve_ctrl_inten_vcpu2_mask                                        (0x00000200)
#define  RIF_REG_ve_ctrl_encode_en_mask                                          (0x00000100)
#define  RIF_REG_ve_ctrl_ve_soft_reset_mask                                      (0x00000080)
#define  RIF_REG_ve_ctrl_vm_idle_mask                                            (0x00000040)
#define  RIF_REG_ve_ctrl_decode_en_mask                                          (0x00000020)
#define  RIF_REG_ve_ctrl_haltve_done_mask                                        (0x00000010)
#define  RIF_REG_ve_ctrl_haltve_mask                                             (0x00000008)
#define  RIF_REG_ve_ctrl_veidle_mask                                             (0x00000004)
#define  RIF_REG_ve_ctrl_inten_mask                                              (0x00000002)
#define  RIF_REG_ve_ctrl_reset_ptr_mask                                          (0x00000001)
#define  RIF_REG_ve_ctrl_ve_only_fpga_reset(data)                                (0x40000000&((data)<<30))
#define  RIF_REG_ve_ctrl_ve_fpga_reset(data)                                     (0x20000000&((data)<<29))
#define  RIF_REG_ve_ctrl_dbg_out_sel1(data)                                      (0x07C00000&((data)<<22))
#define  RIF_REG_ve_ctrl_dbg_out_sel0(data)                                      (0x003E0000&((data)<<17))
#define  RIF_REG_ve_ctrl_dbg_out_en(data)                                        (0x00010000&((data)<<16))
#define  RIF_REG_ve_ctrl_inten_vcpu2(data)                                       (0x00000200&((data)<<9))
#define  RIF_REG_ve_ctrl_encode_en(data)                                         (0x00000100&((data)<<8))
#define  RIF_REG_ve_ctrl_ve_soft_reset(data)                                     (0x00000080&((data)<<7))
#define  RIF_REG_ve_ctrl_vm_idle(data)                                           (0x00000040&((data)<<6))
#define  RIF_REG_ve_ctrl_decode_en(data)                                         (0x00000020&((data)<<5))
#define  RIF_REG_ve_ctrl_haltve_done(data)                                       (0x00000010&((data)<<4))
#define  RIF_REG_ve_ctrl_haltve(data)                                            (0x00000008&((data)<<3))
#define  RIF_REG_ve_ctrl_veidle(data)                                            (0x00000004&((data)<<2))
#define  RIF_REG_ve_ctrl_inten(data)                                             (0x00000002&((data)<<1))
#define  RIF_REG_ve_ctrl_reset_ptr(data)                                         (0x00000001&(data))
#define  RIF_REG_ve_ctrl_get_ve_only_fpga_reset(data)                            ((0x40000000&(data))>>30)
#define  RIF_REG_ve_ctrl_get_ve_fpga_reset(data)                                 ((0x20000000&(data))>>29)
#define  RIF_REG_ve_ctrl_get_dbg_out_sel1(data)                                  ((0x07C00000&(data))>>22)
#define  RIF_REG_ve_ctrl_get_dbg_out_sel0(data)                                  ((0x003E0000&(data))>>17)
#define  RIF_REG_ve_ctrl_get_dbg_out_en(data)                                    ((0x00010000&(data))>>16)
#define  RIF_REG_ve_ctrl_get_inten_vcpu2(data)                                   ((0x00000200&(data))>>9)
#define  RIF_REG_ve_ctrl_get_encode_en(data)                                     ((0x00000100&(data))>>8)
#define  RIF_REG_ve_ctrl_get_ve_soft_reset(data)                                 ((0x00000080&(data))>>7)
#define  RIF_REG_ve_ctrl_get_vm_idle(data)                                       ((0x00000040&(data))>>6)
#define  RIF_REG_ve_ctrl_get_decode_en(data)                                     ((0x00000020&(data))>>5)
#define  RIF_REG_ve_ctrl_get_haltve_done(data)                                   ((0x00000010&(data))>>4)
#define  RIF_REG_ve_ctrl_get_haltve(data)                                        ((0x00000008&(data))>>3)
#define  RIF_REG_ve_ctrl_get_veidle(data)                                        ((0x00000004&(data))>>2)
#define  RIF_REG_ve_ctrl_get_inten(data)                                         ((0x00000002&(data))>>1)
#define  RIF_REG_ve_ctrl_get_reset_ptr(data)                                     (0x00000001&(data))

#define  RIF_REG_ve_int_status                                                  0x1800E404
#define  RIF_REG_ve_int_status_reg_addr                                          "0xB800E404"
#define  RIF_REG_ve_int_status_reg                                               0xB800E404
#define  RIF_REG_ve_int_status_inst_addr                                         "0x0001"
#define  set_RIF_REG_ve_int_status_reg(data)                                     (*((volatile unsigned int*)RIF_REG_ve_int_status_reg)=data)
#define  get_RIF_REG_ve_int_status_reg                                           (*((volatile unsigned int*)RIF_REG_ve_int_status_reg))
#define  RIF_REG_ve_int_status_ve_blk_wrap_int_shift                             (29)
#define  RIF_REG_ve_int_status_first_error_b4_shift                              (28)
#define  RIF_REG_ve_int_status_first_error_b3_shift                              (27)
#define  RIF_REG_ve_int_status_first_error_b2_shift                              (26)
#define  RIF_REG_ve_int_status_first_error_b1_shift                              (25)
#define  RIF_REG_ve_int_status_first_error_b0_shift                              (24)
#define  RIF_REG_ve_int_status_dcomp_core_irq_shift                              (22)
#define  RIF_REG_ve_int_status_comp_core_irq_shift                               (21)
#define  RIF_REG_ve_int_status_hevc_p3_hang_int_shift                            (20)
#define  RIF_REG_ve_int_status_hevc_dec_done_int_shift                           (19)
#define  RIF_REG_ve_int_status_ime_int_shift                                     (18)
#define  RIF_REG_ve_int_status_ipmd_err_shift                                    (17)
#define  RIF_REG_ve_int_status_gc_err_shift                                      (16)
#define  RIF_REG_ve_int_status_cmd_fifo_full_int_shift                           (15)
#define  RIF_REG_ve_int_status_rd_rslt_hang_int_shift                            (14)
#define  RIF_REG_ve_int_status_rl_hang_int_shift                                 (13)
#define  RIF_REG_ve_int_status_pred_hang_int_shift                               (12)
#define  RIF_REG_ve_int_status_mb_last_int_shift                                 (11)
#define  RIF_REG_ve_int_status_mvd_vc1_intfd_err_shift                           (10)
#define  RIF_REG_ve_int_status_mvd_h264_direct_err_shift                         (9)
#define  RIF_REG_ve_int_status_mvd_h264_mv_err_shift                             (8)
#define  RIF_REG_ve_int_status_bs2_fifo_err_shift                                (7)
#define  RIF_REG_ve_int_status_m64coeff_shift                                    (6)
#define  RIF_REG_ve_int_status_rstff_oflow_shift                                 (5)
#define  RIF_REG_ve_int_status_rstff_empty_shift                                 (4)
#define  RIF_REG_ve_int_status_bitst_fifo_shift                                  (3)
#define  RIF_REG_ve_int_status_scode_limit_shift                                 (2)
#define  RIF_REG_ve_int_status_dec_err_shift                                     (1)
#define  RIF_REG_ve_int_status_write_data_shift                                  (0)
#define  RIF_REG_ve_int_status_ve_blk_wrap_int_mask                              (0x20000000)
#define  RIF_REG_ve_int_status_first_error_b4_mask                               (0x10000000)
#define  RIF_REG_ve_int_status_first_error_b3_mask                               (0x08000000)
#define  RIF_REG_ve_int_status_first_error_b2_mask                               (0x04000000)
#define  RIF_REG_ve_int_status_first_error_b1_mask                               (0x02000000)
#define  RIF_REG_ve_int_status_first_error_b0_mask                               (0x01000000)
#define  RIF_REG_ve_int_status_dcomp_core_irq_mask                               (0x00400000)
#define  RIF_REG_ve_int_status_comp_core_irq_mask                                (0x00200000)
#define  RIF_REG_ve_int_status_hevc_p3_hang_int_mask                             (0x00100000)
#define  RIF_REG_ve_int_status_hevc_dec_done_int_mask                            (0x00080000)
#define  RIF_REG_ve_int_status_ime_int_mask                                      (0x00040000)
#define  RIF_REG_ve_int_status_ipmd_err_mask                                     (0x00020000)
#define  RIF_REG_ve_int_status_gc_err_mask                                       (0x00010000)
#define  RIF_REG_ve_int_status_cmd_fifo_full_int_mask                            (0x00008000)
#define  RIF_REG_ve_int_status_rd_rslt_hang_int_mask                             (0x00004000)
#define  RIF_REG_ve_int_status_rl_hang_int_mask                                  (0x00002000)
#define  RIF_REG_ve_int_status_pred_hang_int_mask                                (0x00001000)
#define  RIF_REG_ve_int_status_mb_last_int_mask                                  (0x00000800)
#define  RIF_REG_ve_int_status_mvd_vc1_intfd_err_mask                            (0x00000400)
#define  RIF_REG_ve_int_status_mvd_h264_direct_err_mask                          (0x00000200)
#define  RIF_REG_ve_int_status_mvd_h264_mv_err_mask                              (0x00000100)
#define  RIF_REG_ve_int_status_bs2_fifo_err_mask                                 (0x00000080)
#define  RIF_REG_ve_int_status_m64coeff_mask                                     (0x00000040)
#define  RIF_REG_ve_int_status_rstff_oflow_mask                                  (0x00000020)
#define  RIF_REG_ve_int_status_rstff_empty_mask                                  (0x00000010)
#define  RIF_REG_ve_int_status_bitst_fifo_mask                                   (0x00000008)
#define  RIF_REG_ve_int_status_scode_limit_mask                                  (0x00000004)
#define  RIF_REG_ve_int_status_dec_err_mask                                      (0x00000002)
#define  RIF_REG_ve_int_status_write_data_mask                                   (0x00000001)
#define  RIF_REG_ve_int_status_ve_blk_wrap_int(data)                             (0x20000000&((data)<<29))
#define  RIF_REG_ve_int_status_first_error_b4(data)                              (0x10000000&((data)<<28))
#define  RIF_REG_ve_int_status_first_error_b3(data)                              (0x08000000&((data)<<27))
#define  RIF_REG_ve_int_status_first_error_b2(data)                              (0x04000000&((data)<<26))
#define  RIF_REG_ve_int_status_first_error_b1(data)                              (0x02000000&((data)<<25))
#define  RIF_REG_ve_int_status_first_error_b0(data)                              (0x01000000&((data)<<24))
#define  RIF_REG_ve_int_status_dcomp_core_irq(data)                              (0x00400000&((data)<<22))
#define  RIF_REG_ve_int_status_comp_core_irq(data)                               (0x00200000&((data)<<21))
#define  RIF_REG_ve_int_status_hevc_p3_hang_int(data)                            (0x00100000&((data)<<20))
#define  RIF_REG_ve_int_status_hevc_dec_done_int(data)                           (0x00080000&((data)<<19))
#define  RIF_REG_ve_int_status_ime_int(data)                                     (0x00040000&((data)<<18))
#define  RIF_REG_ve_int_status_ipmd_err(data)                                    (0x00020000&((data)<<17))
#define  RIF_REG_ve_int_status_gc_err(data)                                      (0x00010000&((data)<<16))
#define  RIF_REG_ve_int_status_cmd_fifo_full_int(data)                           (0x00008000&((data)<<15))
#define  RIF_REG_ve_int_status_rd_rslt_hang_int(data)                            (0x00004000&((data)<<14))
#define  RIF_REG_ve_int_status_rl_hang_int(data)                                 (0x00002000&((data)<<13))
#define  RIF_REG_ve_int_status_pred_hang_int(data)                               (0x00001000&((data)<<12))
#define  RIF_REG_ve_int_status_mb_last_int(data)                                 (0x00000800&((data)<<11))
#define  RIF_REG_ve_int_status_mvd_vc1_intfd_err(data)                           (0x00000400&((data)<<10))
#define  RIF_REG_ve_int_status_mvd_h264_direct_err(data)                         (0x00000200&((data)<<9))
#define  RIF_REG_ve_int_status_mvd_h264_mv_err(data)                             (0x00000100&((data)<<8))
#define  RIF_REG_ve_int_status_bs2_fifo_err(data)                                (0x00000080&((data)<<7))
#define  RIF_REG_ve_int_status_m64coeff(data)                                    (0x00000040&((data)<<6))
#define  RIF_REG_ve_int_status_rstff_oflow(data)                                 (0x00000020&((data)<<5))
#define  RIF_REG_ve_int_status_rstff_empty(data)                                 (0x00000010&((data)<<4))
#define  RIF_REG_ve_int_status_bitst_fifo(data)                                  (0x00000008&((data)<<3))
#define  RIF_REG_ve_int_status_scode_limit(data)                                 (0x00000004&((data)<<2))
#define  RIF_REG_ve_int_status_dec_err(data)                                     (0x00000002&((data)<<1))
#define  RIF_REG_ve_int_status_write_data(data)                                  (0x00000001&(data))
#define  RIF_REG_ve_int_status_get_ve_blk_wrap_int(data)                         ((0x20000000&(data))>>29)
#define  RIF_REG_ve_int_status_get_first_error_b4(data)                          ((0x10000000&(data))>>28)
#define  RIF_REG_ve_int_status_get_first_error_b3(data)                          ((0x08000000&(data))>>27)
#define  RIF_REG_ve_int_status_get_first_error_b2(data)                          ((0x04000000&(data))>>26)
#define  RIF_REG_ve_int_status_get_first_error_b1(data)                          ((0x02000000&(data))>>25)
#define  RIF_REG_ve_int_status_get_first_error_b0(data)                          ((0x01000000&(data))>>24)
#define  RIF_REG_ve_int_status_get_dcomp_core_irq(data)                          ((0x00400000&(data))>>22)
#define  RIF_REG_ve_int_status_get_comp_core_irq(data)                           ((0x00200000&(data))>>21)
#define  RIF_REG_ve_int_status_get_hevc_p3_hang_int(data)                        ((0x00100000&(data))>>20)
#define  RIF_REG_ve_int_status_get_hevc_dec_done_int(data)                       ((0x00080000&(data))>>19)
#define  RIF_REG_ve_int_status_get_ime_int(data)                                 ((0x00040000&(data))>>18)
#define  RIF_REG_ve_int_status_get_ipmd_err(data)                                ((0x00020000&(data))>>17)
#define  RIF_REG_ve_int_status_get_gc_err(data)                                  ((0x00010000&(data))>>16)
#define  RIF_REG_ve_int_status_get_cmd_fifo_full_int(data)                       ((0x00008000&(data))>>15)
#define  RIF_REG_ve_int_status_get_rd_rslt_hang_int(data)                        ((0x00004000&(data))>>14)
#define  RIF_REG_ve_int_status_get_rl_hang_int(data)                             ((0x00002000&(data))>>13)
#define  RIF_REG_ve_int_status_get_pred_hang_int(data)                           ((0x00001000&(data))>>12)
#define  RIF_REG_ve_int_status_get_mb_last_int(data)                             ((0x00000800&(data))>>11)
#define  RIF_REG_ve_int_status_get_mvd_vc1_intfd_err(data)                       ((0x00000400&(data))>>10)
#define  RIF_REG_ve_int_status_get_mvd_h264_direct_err(data)                     ((0x00000200&(data))>>9)
#define  RIF_REG_ve_int_status_get_mvd_h264_mv_err(data)                         ((0x00000100&(data))>>8)
#define  RIF_REG_ve_int_status_get_bs2_fifo_err(data)                            ((0x00000080&(data))>>7)
#define  RIF_REG_ve_int_status_get_m64coeff(data)                                ((0x00000040&(data))>>6)
#define  RIF_REG_ve_int_status_get_rstff_oflow(data)                             ((0x00000020&(data))>>5)
#define  RIF_REG_ve_int_status_get_rstff_empty(data)                             ((0x00000010&(data))>>4)
#define  RIF_REG_ve_int_status_get_bitst_fifo(data)                              ((0x00000008&(data))>>3)
#define  RIF_REG_ve_int_status_get_scode_limit(data)                             ((0x00000004&(data))>>2)
#define  RIF_REG_ve_int_status_get_dec_err(data)                                 ((0x00000002&(data))>>1)
#define  RIF_REG_ve_int_status_get_write_data(data)                              (0x00000001&(data))

#define  RIF_REG_ve_int_en                                                      0x1800E408
#define  RIF_REG_ve_int_en_reg_addr                                              "0xB800E408"
#define  RIF_REG_ve_int_en_reg                                                   0xB800E408
#define  RIF_REG_ve_int_en_inst_addr                                             "0x0002"
#define  set_RIF_REG_ve_int_en_reg(data)                                         (*((volatile unsigned int*)RIF_REG_ve_int_en_reg)=data)
#define  get_RIF_REG_ve_int_en_reg                                               (*((volatile unsigned int*)RIF_REG_ve_int_en_reg))
#define  RIF_REG_ve_int_en_ve_blk_wrap_ie_shift                                  (25)
#define  RIF_REG_ve_int_en_dcomp_core_irq_ie_shift                               (24)
#define  RIF_REG_ve_int_en_comp_core_irq_ie_shift                                (23)
#define  RIF_REG_ve_int_en_hevc_p3_hang_int_ie_shift                             (22)
#define  RIF_REG_ve_int_en_hevc_dec_done_int_ie_shift                            (21)
#define  RIF_REG_ve_int_en_gc_interrupt_on_shift                                 (20)
#define  RIF_REG_ve_int_en_ipmd_interrupt_on_shift                               (19)
#define  RIF_REG_ve_int_en_ime_int_ie_shift                                      (18)
#define  RIF_REG_ve_int_en_ipmd_err_ie_shift                                     (17)
#define  RIF_REG_ve_int_en_gc_err_ie_shift                                       (16)
#define  RIF_REG_ve_int_en_cmd_fifo_full_int_ie_shift                            (15)
#define  RIF_REG_ve_int_en_rd_rslt_hang_int_ie_shift                             (14)
#define  RIF_REG_ve_int_en_rl_hang_int_ie_shift                                  (13)
#define  RIF_REG_ve_int_en_pred_hang_int_ie_shift                                (12)
#define  RIF_REG_ve_int_en_mb_last_int_ie_shift                                  (11)
#define  RIF_REG_ve_int_en_mvd_vc1_intfd_ie_shift                                (10)
#define  RIF_REG_ve_int_en_mvd_h264_direct_ie_shift                              (9)
#define  RIF_REG_ve_int_en_mvd_h264_mv_ie_shift                                  (8)
#define  RIF_REG_ve_int_en_bs2_fifo_err_ie_shift                                 (7)
#define  RIF_REG_ve_int_en_m64coeff_ie_shift                                     (6)
#define  RIF_REG_ve_int_en_rstff_oflow_ie_shift                                  (5)
#define  RIF_REG_ve_int_en_rstff_empty_ie_shift                                  (4)
#define  RIF_REG_ve_int_en_bitst_fifo_ie_shift                                   (3)
#define  RIF_REG_ve_int_en_scode_limit_ie_shift                                  (2)
#define  RIF_REG_ve_int_en_dec_err_ie_shift                                      (1)
#define  RIF_REG_ve_int_en_write_data_shift                                      (0)
#define  RIF_REG_ve_int_en_ve_blk_wrap_ie_mask                                   (0x02000000)
#define  RIF_REG_ve_int_en_dcomp_core_irq_ie_mask                                (0x01000000)
#define  RIF_REG_ve_int_en_comp_core_irq_ie_mask                                 (0x00800000)
#define  RIF_REG_ve_int_en_hevc_p3_hang_int_ie_mask                              (0x00400000)
#define  RIF_REG_ve_int_en_hevc_dec_done_int_ie_mask                             (0x00200000)
#define  RIF_REG_ve_int_en_gc_interrupt_on_mask                                  (0x00100000)
#define  RIF_REG_ve_int_en_ipmd_interrupt_on_mask                                (0x00080000)
#define  RIF_REG_ve_int_en_ime_int_ie_mask                                       (0x00040000)
#define  RIF_REG_ve_int_en_ipmd_err_ie_mask                                      (0x00020000)
#define  RIF_REG_ve_int_en_gc_err_ie_mask                                        (0x00010000)
#define  RIF_REG_ve_int_en_cmd_fifo_full_int_ie_mask                             (0x00008000)
#define  RIF_REG_ve_int_en_rd_rslt_hang_int_ie_mask                              (0x00004000)
#define  RIF_REG_ve_int_en_rl_hang_int_ie_mask                                   (0x00002000)
#define  RIF_REG_ve_int_en_pred_hang_int_ie_mask                                 (0x00001000)
#define  RIF_REG_ve_int_en_mb_last_int_ie_mask                                   (0x00000800)
#define  RIF_REG_ve_int_en_mvd_vc1_intfd_ie_mask                                 (0x00000400)
#define  RIF_REG_ve_int_en_mvd_h264_direct_ie_mask                               (0x00000200)
#define  RIF_REG_ve_int_en_mvd_h264_mv_ie_mask                                   (0x00000100)
#define  RIF_REG_ve_int_en_bs2_fifo_err_ie_mask                                  (0x00000080)
#define  RIF_REG_ve_int_en_m64coeff_ie_mask                                      (0x00000040)
#define  RIF_REG_ve_int_en_rstff_oflow_ie_mask                                   (0x00000020)
#define  RIF_REG_ve_int_en_rstff_empty_ie_mask                                   (0x00000010)
#define  RIF_REG_ve_int_en_bitst_fifo_ie_mask                                    (0x00000008)
#define  RIF_REG_ve_int_en_scode_limit_ie_mask                                   (0x00000004)
#define  RIF_REG_ve_int_en_dec_err_ie_mask                                       (0x00000002)
#define  RIF_REG_ve_int_en_write_data_mask                                       (0x00000001)
#define  RIF_REG_ve_int_en_ve_blk_wrap_ie(data)                                  (0x02000000&((data)<<25))
#define  RIF_REG_ve_int_en_dcomp_core_irq_ie(data)                               (0x01000000&((data)<<24))
#define  RIF_REG_ve_int_en_comp_core_irq_ie(data)                                (0x00800000&((data)<<23))
#define  RIF_REG_ve_int_en_hevc_p3_hang_int_ie(data)                             (0x00400000&((data)<<22))
#define  RIF_REG_ve_int_en_hevc_dec_done_int_ie(data)                            (0x00200000&((data)<<21))
#define  RIF_REG_ve_int_en_gc_interrupt_on(data)                                 (0x00100000&((data)<<20))
#define  RIF_REG_ve_int_en_ipmd_interrupt_on(data)                               (0x00080000&((data)<<19))
#define  RIF_REG_ve_int_en_ime_int_ie(data)                                      (0x00040000&((data)<<18))
#define  RIF_REG_ve_int_en_ipmd_err_ie(data)                                     (0x00020000&((data)<<17))
#define  RIF_REG_ve_int_en_gc_err_ie(data)                                       (0x00010000&((data)<<16))
#define  RIF_REG_ve_int_en_cmd_fifo_full_int_ie(data)                            (0x00008000&((data)<<15))
#define  RIF_REG_ve_int_en_rd_rslt_hang_int_ie(data)                             (0x00004000&((data)<<14))
#define  RIF_REG_ve_int_en_rl_hang_int_ie(data)                                  (0x00002000&((data)<<13))
#define  RIF_REG_ve_int_en_pred_hang_int_ie(data)                                (0x00001000&((data)<<12))
#define  RIF_REG_ve_int_en_mb_last_int_ie(data)                                  (0x00000800&((data)<<11))
#define  RIF_REG_ve_int_en_mvd_vc1_intfd_ie(data)                                (0x00000400&((data)<<10))
#define  RIF_REG_ve_int_en_mvd_h264_direct_ie(data)                              (0x00000200&((data)<<9))
#define  RIF_REG_ve_int_en_mvd_h264_mv_ie(data)                                  (0x00000100&((data)<<8))
#define  RIF_REG_ve_int_en_bs2_fifo_err_ie(data)                                 (0x00000080&((data)<<7))
#define  RIF_REG_ve_int_en_m64coeff_ie(data)                                     (0x00000040&((data)<<6))
#define  RIF_REG_ve_int_en_rstff_oflow_ie(data)                                  (0x00000020&((data)<<5))
#define  RIF_REG_ve_int_en_rstff_empty_ie(data)                                  (0x00000010&((data)<<4))
#define  RIF_REG_ve_int_en_bitst_fifo_ie(data)                                   (0x00000008&((data)<<3))
#define  RIF_REG_ve_int_en_scode_limit_ie(data)                                  (0x00000004&((data)<<2))
#define  RIF_REG_ve_int_en_dec_err_ie(data)                                      (0x00000002&((data)<<1))
#define  RIF_REG_ve_int_en_write_data(data)                                      (0x00000001&(data))
#define  RIF_REG_ve_int_en_get_ve_blk_wrap_ie(data)                              ((0x02000000&(data))>>25)
#define  RIF_REG_ve_int_en_get_dcomp_core_irq_ie(data)                           ((0x01000000&(data))>>24)
#define  RIF_REG_ve_int_en_get_comp_core_irq_ie(data)                            ((0x00800000&(data))>>23)
#define  RIF_REG_ve_int_en_get_hevc_p3_hang_int_ie(data)                         ((0x00400000&(data))>>22)
#define  RIF_REG_ve_int_en_get_hevc_dec_done_int_ie(data)                        ((0x00200000&(data))>>21)
#define  RIF_REG_ve_int_en_get_gc_interrupt_on(data)                             ((0x00100000&(data))>>20)
#define  RIF_REG_ve_int_en_get_ipmd_interrupt_on(data)                           ((0x00080000&(data))>>19)
#define  RIF_REG_ve_int_en_get_ime_int_ie(data)                                  ((0x00040000&(data))>>18)
#define  RIF_REG_ve_int_en_get_ipmd_err_ie(data)                                 ((0x00020000&(data))>>17)
#define  RIF_REG_ve_int_en_get_gc_err_ie(data)                                   ((0x00010000&(data))>>16)
#define  RIF_REG_ve_int_en_get_cmd_fifo_full_int_ie(data)                        ((0x00008000&(data))>>15)
#define  RIF_REG_ve_int_en_get_rd_rslt_hang_int_ie(data)                         ((0x00004000&(data))>>14)
#define  RIF_REG_ve_int_en_get_rl_hang_int_ie(data)                              ((0x00002000&(data))>>13)
#define  RIF_REG_ve_int_en_get_pred_hang_int_ie(data)                            ((0x00001000&(data))>>12)
#define  RIF_REG_ve_int_en_get_mb_last_int_ie(data)                              ((0x00000800&(data))>>11)
#define  RIF_REG_ve_int_en_get_mvd_vc1_intfd_ie(data)                            ((0x00000400&(data))>>10)
#define  RIF_REG_ve_int_en_get_mvd_h264_direct_ie(data)                          ((0x00000200&(data))>>9)
#define  RIF_REG_ve_int_en_get_mvd_h264_mv_ie(data)                              ((0x00000100&(data))>>8)
#define  RIF_REG_ve_int_en_get_bs2_fifo_err_ie(data)                             ((0x00000080&(data))>>7)
#define  RIF_REG_ve_int_en_get_m64coeff_ie(data)                                 ((0x00000040&(data))>>6)
#define  RIF_REG_ve_int_en_get_rstff_oflow_ie(data)                              ((0x00000020&(data))>>5)
#define  RIF_REG_ve_int_en_get_rstff_empty_ie(data)                              ((0x00000010&(data))>>4)
#define  RIF_REG_ve_int_en_get_bitst_fifo_ie(data)                               ((0x00000008&(data))>>3)
#define  RIF_REG_ve_int_en_get_scode_limit_ie(data)                              ((0x00000004&(data))>>2)
#define  RIF_REG_ve_int_en_get_dec_err_ie(data)                                  ((0x00000002&(data))>>1)
#define  RIF_REG_ve_int_en_get_write_data(data)                                  (0x00000001&(data))

#define  RIF_REG_ve_fifostatus                                                  0x1800E410
#define  RIF_REG_ve_fifostatus_reg_addr                                          "0xB800E410"
#define  RIF_REG_ve_fifostatus_reg                                               0xB800E410
#define  RIF_REG_ve_fifostatus_inst_addr                                         "0x0003"
#define  set_RIF_REG_ve_fifostatus_reg(data)                                     (*((volatile unsigned int*)RIF_REG_ve_fifostatus_reg)=data)
#define  get_RIF_REG_ve_fifostatus_reg                                           (*((volatile unsigned int*)RIF_REG_ve_fifostatus_reg))
#define  RIF_REG_ve_fifostatus_debk_inst_cnt_shift                               (24)
#define  RIF_REG_ve_fifostatus_pred_inst_cnt_shift                               (16)
#define  RIF_REG_ve_fifostatus_dmab_inst_cnt_shift                               (8)
#define  RIF_REG_ve_fifostatus_dmaa_inst_cnt_shift                               (0)
#define  RIF_REG_ve_fifostatus_debk_inst_cnt_mask                                (0x3F000000)
#define  RIF_REG_ve_fifostatus_pred_inst_cnt_mask                                (0x003F0000)
#define  RIF_REG_ve_fifostatus_dmab_inst_cnt_mask                                (0x00003F00)
#define  RIF_REG_ve_fifostatus_dmaa_inst_cnt_mask                                (0x0000003F)
#define  RIF_REG_ve_fifostatus_debk_inst_cnt(data)                               (0x3F000000&((data)<<24))
#define  RIF_REG_ve_fifostatus_pred_inst_cnt(data)                               (0x003F0000&((data)<<16))
#define  RIF_REG_ve_fifostatus_dmab_inst_cnt(data)                               (0x00003F00&((data)<<8))
#define  RIF_REG_ve_fifostatus_dmaa_inst_cnt(data)                               (0x0000003F&(data))
#define  RIF_REG_ve_fifostatus_get_debk_inst_cnt(data)                           ((0x3F000000&(data))>>24)
#define  RIF_REG_ve_fifostatus_get_pred_inst_cnt(data)                           ((0x003F0000&(data))>>16)
#define  RIF_REG_ve_fifostatus_get_dmab_inst_cnt(data)                           ((0x00003F00&(data))>>8)
#define  RIF_REG_ve_fifostatus_get_dmaa_inst_cnt(data)                           (0x0000003F&(data))

#define  RIF_REG_ve_fifostat2                                                   0x1800E414
#define  RIF_REG_ve_fifostat2_reg_addr                                           "0xB800E414"
#define  RIF_REG_ve_fifostat2_reg                                                0xB800E414
#define  RIF_REG_ve_fifostat2_inst_addr                                          "0x0004"
#define  set_RIF_REG_ve_fifostat2_reg(data)                                      (*((volatile unsigned int*)RIF_REG_ve_fifostat2_reg)=data)
#define  get_RIF_REG_ve_fifostat2_reg                                            (*((volatile unsigned int*)RIF_REG_ve_fifostat2_reg))
#define  RIF_REG_ve_fifostat2_act_rslt_in_fifo_shift                             (27)
#define  RIF_REG_ve_fifostat2_rslt_fifo_cnt_shift                                (22)
#define  RIF_REG_ve_fifostat2_img_fifo_cnt_shift                                 (16)
#define  RIF_REG_ve_fifostat2_dec_inst_cnt_shift                                 (8)
#define  RIF_REG_ve_fifostat2_act_rslt_in_fifo_mask                              (0xF8000000)
#define  RIF_REG_ve_fifostat2_rslt_fifo_cnt_mask                                 (0x07C00000)
#define  RIF_REG_ve_fifostat2_img_fifo_cnt_mask                                  (0x003F0000)
#define  RIF_REG_ve_fifostat2_dec_inst_cnt_mask                                  (0x00003F00)
#define  RIF_REG_ve_fifostat2_act_rslt_in_fifo(data)                             (0xF8000000&((data)<<27))
#define  RIF_REG_ve_fifostat2_rslt_fifo_cnt(data)                                (0x07C00000&((data)<<22))
#define  RIF_REG_ve_fifostat2_img_fifo_cnt(data)                                 (0x003F0000&((data)<<16))
#define  RIF_REG_ve_fifostat2_dec_inst_cnt(data)                                 (0x00003F00&((data)<<8))
#define  RIF_REG_ve_fifostat2_get_act_rslt_in_fifo(data)                         ((0xF8000000&(data))>>27)
#define  RIF_REG_ve_fifostat2_get_rslt_fifo_cnt(data)                            ((0x07C00000&(data))>>22)
#define  RIF_REG_ve_fifostat2_get_img_fifo_cnt(data)                             ((0x003F0000&(data))>>16)
#define  RIF_REG_ve_fifostat2_get_dec_inst_cnt(data)                             ((0x00003F00&(data))>>8)

#define  RIF_REG_ve_rslt_timer                                                  0x1800E418
#define  RIF_REG_ve_rslt_timer_reg_addr                                          "0xB800E418"
#define  RIF_REG_ve_rslt_timer_reg                                               0xB800E418
#define  RIF_REG_ve_rslt_timer_inst_addr                                         "0x0005"
#define  set_RIF_REG_ve_rslt_timer_reg(data)                                     (*((volatile unsigned int*)RIF_REG_ve_rslt_timer_reg)=data)
#define  get_RIF_REG_ve_rslt_timer_reg                                           (*((volatile unsigned int*)RIF_REG_ve_rslt_timer_reg))
#define  RIF_REG_ve_rslt_timer_rslt_timer_shift                                  (0)
#define  RIF_REG_ve_rslt_timer_rslt_timer_mask                                   (0x00FFFFFF)
#define  RIF_REG_ve_rslt_timer_rslt_timer(data)                                  (0x00FFFFFF&(data))
#define  RIF_REG_ve_rslt_timer_get_rslt_timer(data)                              (0x00FFFFFF&(data))

#define  RIF_REG_ve_cmd_timer                                                   0x1800E41C
#define  RIF_REG_ve_cmd_timer_reg_addr                                           "0xB800E41C"
#define  RIF_REG_ve_cmd_timer_reg                                                0xB800E41C
#define  RIF_REG_ve_cmd_timer_inst_addr                                          "0x0006"
#define  set_RIF_REG_ve_cmd_timer_reg(data)                                      (*((volatile unsigned int*)RIF_REG_ve_cmd_timer_reg)=data)
#define  get_RIF_REG_ve_cmd_timer_reg                                            (*((volatile unsigned int*)RIF_REG_ve_cmd_timer_reg))
#define  RIF_REG_ve_cmd_timer_cmd_timer_shift                                    (0)
#define  RIF_REG_ve_cmd_timer_cmd_timer_mask                                     (0x00FFFFFF)
#define  RIF_REG_ve_cmd_timer_cmd_timer(data)                                    (0x00FFFFFF&(data))
#define  RIF_REG_ve_cmd_timer_get_cmd_timer(data)                                (0x00FFFFFF&(data))

#define  RIF_REG_dec_cntl                                                       0x1800E450
#define  RIF_REG_dec_cntl_reg_addr                                               "0xB800E450"
#define  RIF_REG_dec_cntl_reg                                                    0xB800E450
#define  RIF_REG_dec_cntl_inst_addr                                              "0x0007"
#define  set_RIF_REG_dec_cntl_reg(data)                                          (*((volatile unsigned int*)RIF_REG_dec_cntl_reg)=data)
#define  get_RIF_REG_dec_cntl_reg                                                (*((volatile unsigned int*)RIF_REG_dec_cntl_reg))
#define  RIF_REG_dec_cntl_decimate_en_shift                                      (31)
#define  RIF_REG_dec_cntl_lossy_en_shift                                         (30)
#define  RIF_REG_dec_cntl_cmprs_head_remap_shift                                 (29)
#define  RIF_REG_dec_cntl_mode32x1_shift                                         (28)
#define  RIF_REG_dec_cntl_gpu_out_en_shift                                       (27)
#define  RIF_REG_dec_cntl_dual_core_dmy_row_method_shift                         (26)
#define  RIF_REG_dec_cntl_comp_wrap_width_shift                                  (16)
#define  RIF_REG_dec_cntl_compression_en_shift                                   (15)
#define  RIF_REG_dec_cntl_multicoreenable_shift                                  (13)
#define  RIF_REG_dec_cntl_corenum_shift                                          (11)
#define  RIF_REG_dec_cntl_mode8x2_16b_align_shift                                (10)
#define  RIF_REG_dec_cntl_mode8x2_shift                                          (9)
#define  RIF_REG_dec_cntl_monochrome_shift                                       (8)
#define  RIF_REG_dec_cntl_level_shift                                            (7)
#define  RIF_REG_dec_cntl_profile_shift                                          (5)
#define  RIF_REG_dec_cntl_coding_type_shift                                      (0)
#define  RIF_REG_dec_cntl_decimate_en_mask                                       (0x80000000)
#define  RIF_REG_dec_cntl_lossy_en_mask                                          (0x40000000)
#define  RIF_REG_dec_cntl_cmprs_head_remap_mask                                  (0x20000000)
#define  RIF_REG_dec_cntl_mode32x1_mask                                          (0x10000000)
#define  RIF_REG_dec_cntl_gpu_out_en_mask                                        (0x08000000)
#define  RIF_REG_dec_cntl_dual_core_dmy_row_method_mask                          (0x04000000)
#define  RIF_REG_dec_cntl_comp_wrap_width_mask                                   (0x03FF0000)
#define  RIF_REG_dec_cntl_compression_en_mask                                    (0x00008000)
#define  RIF_REG_dec_cntl_multicoreenable_mask                                   (0x00006000)
#define  RIF_REG_dec_cntl_corenum_mask                                           (0x00001800)
#define  RIF_REG_dec_cntl_mode8x2_16b_align_mask                                 (0x00000400)
#define  RIF_REG_dec_cntl_mode8x2_mask                                           (0x00000200)
#define  RIF_REG_dec_cntl_monochrome_mask                                        (0x00000100)
#define  RIF_REG_dec_cntl_level_mask                                             (0x00000080)
#define  RIF_REG_dec_cntl_profile_mask                                           (0x00000060)
#define  RIF_REG_dec_cntl_coding_type_mask                                       (0x0000001F)
#define  RIF_REG_dec_cntl_decimate_en(data)                                      (0x80000000&((data)<<31))
#define  RIF_REG_dec_cntl_lossy_en(data)                                         (0x40000000&((data)<<30))
#define  RIF_REG_dec_cntl_cmprs_head_remap(data)                                 (0x20000000&((data)<<29))
#define  RIF_REG_dec_cntl_mode32x1(data)                                         (0x10000000&((data)<<28))
#define  RIF_REG_dec_cntl_gpu_out_en(data)                                       (0x08000000&((data)<<27))
#define  RIF_REG_dec_cntl_dual_core_dmy_row_method(data)                         (0x04000000&((data)<<26))
#define  RIF_REG_dec_cntl_comp_wrap_width(data)                                  (0x03FF0000&((data)<<16))
#define  RIF_REG_dec_cntl_compression_en(data)                                   (0x00008000&((data)<<15))
#define  RIF_REG_dec_cntl_multicoreenable(data)                                  (0x00006000&((data)<<13))
#define  RIF_REG_dec_cntl_corenum(data)                                          (0x00001800&((data)<<11))
#define  RIF_REG_dec_cntl_mode8x2_16b_align(data)                                (0x00000400&((data)<<10))
#define  RIF_REG_dec_cntl_mode8x2(data)                                          (0x00000200&((data)<<9))
#define  RIF_REG_dec_cntl_monochrome(data)                                       (0x00000100&((data)<<8))
#define  RIF_REG_dec_cntl_level(data)                                            (0x00000080&((data)<<7))
#define  RIF_REG_dec_cntl_profile(data)                                          (0x00000060&((data)<<5))
#define  RIF_REG_dec_cntl_coding_type(data)                                      (0x0000001F&(data))
#define  RIF_REG_dec_cntl_get_decimate_en(data)                                  ((0x80000000&(data))>>31)
#define  RIF_REG_dec_cntl_get_lossy_en(data)                                     ((0x40000000&(data))>>30)
#define  RIF_REG_dec_cntl_get_cmprs_head_remap(data)                             ((0x20000000&(data))>>29)
#define  RIF_REG_dec_cntl_get_mode32x1(data)                                     ((0x10000000&(data))>>28)
#define  RIF_REG_dec_cntl_get_gpu_out_en(data)                                   ((0x08000000&(data))>>27)
#define  RIF_REG_dec_cntl_get_dual_core_dmy_row_method(data)                     ((0x04000000&(data))>>26)
#define  RIF_REG_dec_cntl_get_comp_wrap_width(data)                              ((0x03FF0000&(data))>>16)
#define  RIF_REG_dec_cntl_get_compression_en(data)                               ((0x00008000&(data))>>15)
#define  RIF_REG_dec_cntl_get_multicoreenable(data)                              ((0x00006000&(data))>>13)
#define  RIF_REG_dec_cntl_get_corenum(data)                                      ((0x00001800&(data))>>11)
#define  RIF_REG_dec_cntl_get_mode8x2_16b_align(data)                            ((0x00000400&(data))>>10)
#define  RIF_REG_dec_cntl_get_mode8x2(data)                                      ((0x00000200&(data))>>9)
#define  RIF_REG_dec_cntl_get_monochrome(data)                                   ((0x00000100&(data))>>8)
#define  RIF_REG_dec_cntl_get_level(data)                                        ((0x00000080&(data))>>7)
#define  RIF_REG_dec_cntl_get_profile(data)                                      ((0x00000060&(data))>>5)
#define  RIF_REG_dec_cntl_get_coding_type(data)                                  (0x0000001F&(data))

#define  RIF_REG_picinfo1                                                       0x1800E454
#define  RIF_REG_picinfo1_reg_addr                                               "0xB800E454"
#define  RIF_REG_picinfo1_reg                                                    0xB800E454
#define  RIF_REG_picinfo1_inst_addr                                              "0x0008"
#define  set_RIF_REG_picinfo1_reg(data)                                          (*((volatile unsigned int*)RIF_REG_picinfo1_reg)=data)
#define  get_RIF_REG_picinfo1_reg                                                (*((volatile unsigned int*)RIF_REG_picinfo1_reg))
#define  RIF_REG_picinfo1_decimate_ratio_shift                                   (30)
#define  RIF_REG_picinfo1_filter_level_shift                                     (24)
#define  RIF_REG_picinfo1_allow_high_precision_mv_shift                          (23)
#define  RIF_REG_picinfo1_vp9_seg_en_shift                                       (22)
#define  RIF_REG_picinfo1_vp8_bicubic_filtering_shift                            (21)
#define  RIF_REG_picinfo1_bottom_field_flag_shift                                (20)
#define  RIF_REG_picinfo1_field_pic_flag_shift                                   (19)
#define  RIF_REG_picinfo1_picmb_h_shift                                          (10)
#define  RIF_REG_picinfo1_picmb_w_shift                                          (0)
#define  RIF_REG_picinfo1_decimate_ratio_mask                                    (0xC0000000)
#define  RIF_REG_picinfo1_filter_level_mask                                      (0x3F000000)
#define  RIF_REG_picinfo1_allow_high_precision_mv_mask                           (0x00800000)
#define  RIF_REG_picinfo1_vp9_seg_en_mask                                        (0x00400000)
#define  RIF_REG_picinfo1_vp8_bicubic_filtering_mask                             (0x00200000)
#define  RIF_REG_picinfo1_bottom_field_flag_mask                                 (0x00100000)
#define  RIF_REG_picinfo1_field_pic_flag_mask                                    (0x00080000)
#define  RIF_REG_picinfo1_picmb_h_mask                                           (0x0007FC00)
#define  RIF_REG_picinfo1_picmb_w_mask                                           (0x000003FF)
#define  RIF_REG_picinfo1_decimate_ratio(data)                                   (0xC0000000&((data)<<30))
#define  RIF_REG_picinfo1_filter_level(data)                                     (0x3F000000&((data)<<24))
#define  RIF_REG_picinfo1_allow_high_precision_mv(data)                          (0x00800000&((data)<<23))
#define  RIF_REG_picinfo1_vp9_seg_en(data)                                       (0x00400000&((data)<<22))
#define  RIF_REG_picinfo1_vp8_bicubic_filtering(data)                            (0x00200000&((data)<<21))
#define  RIF_REG_picinfo1_bottom_field_flag(data)                                (0x00100000&((data)<<20))
#define  RIF_REG_picinfo1_field_pic_flag(data)                                   (0x00080000&((data)<<19))
#define  RIF_REG_picinfo1_picmb_h(data)                                          (0x0007FC00&((data)<<10))
#define  RIF_REG_picinfo1_picmb_w(data)                                          (0x000003FF&(data))
#define  RIF_REG_picinfo1_get_decimate_ratio(data)                               ((0xC0000000&(data))>>30)
#define  RIF_REG_picinfo1_get_filter_level(data)                                 ((0x3F000000&(data))>>24)
#define  RIF_REG_picinfo1_get_allow_high_precision_mv(data)                      ((0x00800000&(data))>>23)
#define  RIF_REG_picinfo1_get_vp9_seg_en(data)                                   ((0x00400000&(data))>>22)
#define  RIF_REG_picinfo1_get_vp8_bicubic_filtering(data)                        ((0x00200000&(data))>>21)
#define  RIF_REG_picinfo1_get_bottom_field_flag(data)                            ((0x00100000&(data))>>20)
#define  RIF_REG_picinfo1_get_field_pic_flag(data)                               ((0x00080000&(data))>>19)
#define  RIF_REG_picinfo1_get_picmb_h(data)                                      ((0x0007FC00&(data))>>10)
#define  RIF_REG_picinfo1_get_picmb_w(data)                                      (0x000003FF&(data))

#define  RIF_REG_h264piccntl                                                    0x1800E460
#define  RIF_REG_h264piccntl_reg_addr                                            "0xB800E460"
#define  RIF_REG_h264piccntl_reg                                                 0xB800E460
#define  RIF_REG_h264piccntl_inst_addr                                           "0x0009"
#define  set_RIF_REG_h264piccntl_reg(data)                                       (*((volatile unsigned int*)RIF_REG_h264piccntl_reg)=data)
#define  get_RIF_REG_h264piccntl_reg                                             (*((volatile unsigned int*)RIF_REG_h264piccntl_reg))
#define  RIF_REG_h264piccntl_inc_cah_head_bl_shift                               (18)
#define  RIF_REG_h264piccntl_inc_cah_data_bl_shift                               (17)
#define  RIF_REG_h264piccntl_ch_comp_wrap_width_shift                            (7)
#define  RIF_REG_h264piccntl_mode16x1_shift                                      (6)
#define  RIF_REG_h264piccntl_constrainted_intra_pred_flag_shift                  (5)
#define  RIF_REG_h264piccntl_weighted_pred_flag_shift                            (4)
#define  RIF_REG_h264piccntl_weighted_bipred_idc_shift                           (2)
#define  RIF_REG_h264piccntl_frame_mbs_only_flag_shift                           (1)
#define  RIF_REG_h264piccntl_mb_adaptive_frame_field_flag_shift                  (0)
#define  RIF_REG_h264piccntl_inc_cah_head_bl_mask                                (0x00040000)
#define  RIF_REG_h264piccntl_inc_cah_data_bl_mask                                (0x00020000)
#define  RIF_REG_h264piccntl_ch_comp_wrap_width_mask                             (0x0001FF80)
#define  RIF_REG_h264piccntl_mode16x1_mask                                       (0x00000040)
#define  RIF_REG_h264piccntl_constrainted_intra_pred_flag_mask                   (0x00000020)
#define  RIF_REG_h264piccntl_weighted_pred_flag_mask                             (0x00000010)
#define  RIF_REG_h264piccntl_weighted_bipred_idc_mask                            (0x0000000C)
#define  RIF_REG_h264piccntl_frame_mbs_only_flag_mask                            (0x00000002)
#define  RIF_REG_h264piccntl_mb_adaptive_frame_field_flag_mask                   (0x00000001)
#define  RIF_REG_h264piccntl_inc_cah_head_bl(data)                               (0x00040000&((data)<<18))
#define  RIF_REG_h264piccntl_inc_cah_data_bl(data)                               (0x00020000&((data)<<17))
#define  RIF_REG_h264piccntl_ch_comp_wrap_width(data)                            (0x0001FF80&((data)<<7))
#define  RIF_REG_h264piccntl_mode16x1(data)                                      (0x00000040&((data)<<6))
#define  RIF_REG_h264piccntl_constrainted_intra_pred_flag(data)                  (0x00000020&((data)<<5))
#define  RIF_REG_h264piccntl_weighted_pred_flag(data)                            (0x00000010&((data)<<4))
#define  RIF_REG_h264piccntl_weighted_bipred_idc(data)                           (0x0000000C&((data)<<2))
#define  RIF_REG_h264piccntl_frame_mbs_only_flag(data)                           (0x00000002&((data)<<1))
#define  RIF_REG_h264piccntl_mb_adaptive_frame_field_flag(data)                  (0x00000001&(data))
#define  RIF_REG_h264piccntl_get_inc_cah_head_bl(data)                           ((0x00040000&(data))>>18)
#define  RIF_REG_h264piccntl_get_inc_cah_data_bl(data)                           ((0x00020000&(data))>>17)
#define  RIF_REG_h264piccntl_get_ch_comp_wrap_width(data)                        ((0x0001FF80&(data))>>7)
#define  RIF_REG_h264piccntl_get_mode16x1(data)                                  ((0x00000040&(data))>>6)
#define  RIF_REG_h264piccntl_get_constrainted_intra_pred_flag(data)              ((0x00000020&(data))>>5)
#define  RIF_REG_h264piccntl_get_weighted_pred_flag(data)                        ((0x00000010&(data))>>4)
#define  RIF_REG_h264piccntl_get_weighted_bipred_idc(data)                       ((0x0000000C&(data))>>2)
#define  RIF_REG_h264piccntl_get_frame_mbs_only_flag(data)                       ((0x00000002&(data))>>1)
#define  RIF_REG_h264piccntl_get_mb_adaptive_frame_field_flag(data)              (0x00000001&(data))

#define  RIF_REG_hevcseqcntl                                                    0x1800E464
#define  RIF_REG_hevcseqcntl_reg_addr                                            "0xB800E464"
#define  RIF_REG_hevcseqcntl_reg                                                 0xB800E464
#define  RIF_REG_hevcseqcntl_inst_addr                                           "0x000A"
#define  set_RIF_REG_hevcseqcntl_reg(data)                                       (*((volatile unsigned int*)RIF_REG_hevcseqcntl_reg)=data)
#define  get_RIF_REG_hevcseqcntl_reg                                             (*((volatile unsigned int*)RIF_REG_hevcseqcntl_reg))
#define  RIF_REG_hevcseqcntl_shvc_enable_shift                                   (30)
#define  RIF_REG_hevcseqcntl_chroma_bits_shift                                   (28)
#define  RIF_REG_hevcseqcntl_luma_bits_shift                                     (26)
#define  RIF_REG_hevcseqcntl_hevc_dbg_mode_shift                                 (25)
#define  RIF_REG_hevcseqcntl_mincbsize_shift                                     (21)
#define  RIF_REG_hevcseqcntl_ctbsize_shift                                       (19)
#define  RIF_REG_hevcseqcntl_min_trafo_size_shift                                (17)
#define  RIF_REG_hevcseqcntl_max_trafo_size_shift                                (15)
#define  RIF_REG_hevcseqcntl_max_trans_hier_depth_inter_shift                    (12)
#define  RIF_REG_hevcseqcntl_max_trans_hier_depth_intra_shift                    (9)
#define  RIF_REG_hevcseqcntl_amp_enabled_flag_shift                              (8)
#define  RIF_REG_hevcseqcntl_sample_adaptive_offset_enabled_flag_shift           (7)
#define  RIF_REG_hevcseqcntl_pcm_enabled_flag_shift                              (6)
#define  RIF_REG_hevcseqcntl_min_ipcm_cbsize_shift                               (4)
#define  RIF_REG_hevcseqcntl_max_ipcm_cbsize_shift                               (2)
#define  RIF_REG_hevcseqcntl_pcm_loop_filter_disable_flag_shift                  (1)
#define  RIF_REG_hevcseqcntl_strong_intra_smoothing_enable_flag_shift            (0)
#define  RIF_REG_hevcseqcntl_shvc_enable_mask                                    (0x40000000)
#define  RIF_REG_hevcseqcntl_chroma_bits_mask                                    (0x30000000)
#define  RIF_REG_hevcseqcntl_luma_bits_mask                                      (0x0C000000)
#define  RIF_REG_hevcseqcntl_hevc_dbg_mode_mask                                  (0x02000000)
#define  RIF_REG_hevcseqcntl_mincbsize_mask                                      (0x00600000)
#define  RIF_REG_hevcseqcntl_ctbsize_mask                                        (0x00180000)
#define  RIF_REG_hevcseqcntl_min_trafo_size_mask                                 (0x00060000)
#define  RIF_REG_hevcseqcntl_max_trafo_size_mask                                 (0x00018000)
#define  RIF_REG_hevcseqcntl_max_trans_hier_depth_inter_mask                     (0x00007000)
#define  RIF_REG_hevcseqcntl_max_trans_hier_depth_intra_mask                     (0x00000E00)
#define  RIF_REG_hevcseqcntl_amp_enabled_flag_mask                               (0x00000100)
#define  RIF_REG_hevcseqcntl_sample_adaptive_offset_enabled_flag_mask            (0x00000080)
#define  RIF_REG_hevcseqcntl_pcm_enabled_flag_mask                               (0x00000040)
#define  RIF_REG_hevcseqcntl_min_ipcm_cbsize_mask                                (0x00000030)
#define  RIF_REG_hevcseqcntl_max_ipcm_cbsize_mask                                (0x0000000C)
#define  RIF_REG_hevcseqcntl_pcm_loop_filter_disable_flag_mask                   (0x00000002)
#define  RIF_REG_hevcseqcntl_strong_intra_smoothing_enable_flag_mask             (0x00000001)
#define  RIF_REG_hevcseqcntl_shvc_enable(data)                                   (0x40000000&((data)<<30))
#define  RIF_REG_hevcseqcntl_chroma_bits(data)                                   (0x30000000&((data)<<28))
#define  RIF_REG_hevcseqcntl_luma_bits(data)                                     (0x0C000000&((data)<<26))
#define  RIF_REG_hevcseqcntl_hevc_dbg_mode(data)                                 (0x02000000&((data)<<25))
#define  RIF_REG_hevcseqcntl_mincbsize(data)                                     (0x00600000&((data)<<21))
#define  RIF_REG_hevcseqcntl_ctbsize(data)                                       (0x00180000&((data)<<19))
#define  RIF_REG_hevcseqcntl_min_trafo_size(data)                                (0x00060000&((data)<<17))
#define  RIF_REG_hevcseqcntl_max_trafo_size(data)                                (0x00018000&((data)<<15))
#define  RIF_REG_hevcseqcntl_max_trans_hier_depth_inter(data)                    (0x00007000&((data)<<12))
#define  RIF_REG_hevcseqcntl_max_trans_hier_depth_intra(data)                    (0x00000E00&((data)<<9))
#define  RIF_REG_hevcseqcntl_amp_enabled_flag(data)                              (0x00000100&((data)<<8))
#define  RIF_REG_hevcseqcntl_sample_adaptive_offset_enabled_flag(data)           (0x00000080&((data)<<7))
#define  RIF_REG_hevcseqcntl_pcm_enabled_flag(data)                              (0x00000040&((data)<<6))
#define  RIF_REG_hevcseqcntl_min_ipcm_cbsize(data)                               (0x00000030&((data)<<4))
#define  RIF_REG_hevcseqcntl_max_ipcm_cbsize(data)                               (0x0000000C&((data)<<2))
#define  RIF_REG_hevcseqcntl_pcm_loop_filter_disable_flag(data)                  (0x00000002&((data)<<1))
#define  RIF_REG_hevcseqcntl_strong_intra_smoothing_enable_flag(data)            (0x00000001&(data))
#define  RIF_REG_hevcseqcntl_get_shvc_enable(data)                               ((0x40000000&(data))>>30)
#define  RIF_REG_hevcseqcntl_get_chroma_bits(data)                               ((0x30000000&(data))>>28)
#define  RIF_REG_hevcseqcntl_get_luma_bits(data)                                 ((0x0C000000&(data))>>26)
#define  RIF_REG_hevcseqcntl_get_hevc_dbg_mode(data)                             ((0x02000000&(data))>>25)
#define  RIF_REG_hevcseqcntl_get_mincbsize(data)                                 ((0x00600000&(data))>>21)
#define  RIF_REG_hevcseqcntl_get_ctbsize(data)                                   ((0x00180000&(data))>>19)
#define  RIF_REG_hevcseqcntl_get_min_trafo_size(data)                            ((0x00060000&(data))>>17)
#define  RIF_REG_hevcseqcntl_get_max_trafo_size(data)                            ((0x00018000&(data))>>15)
#define  RIF_REG_hevcseqcntl_get_max_trans_hier_depth_inter(data)                ((0x00007000&(data))>>12)
#define  RIF_REG_hevcseqcntl_get_max_trans_hier_depth_intra(data)                ((0x00000E00&(data))>>9)
#define  RIF_REG_hevcseqcntl_get_amp_enabled_flag(data)                          ((0x00000100&(data))>>8)
#define  RIF_REG_hevcseqcntl_get_sample_adaptive_offset_enabled_flag(data)       ((0x00000080&(data))>>7)
#define  RIF_REG_hevcseqcntl_get_pcm_enabled_flag(data)                          ((0x00000040&(data))>>6)
#define  RIF_REG_hevcseqcntl_get_min_ipcm_cbsize(data)                           ((0x00000030&(data))>>4)
#define  RIF_REG_hevcseqcntl_get_max_ipcm_cbsize(data)                           ((0x0000000C&(data))>>2)
#define  RIF_REG_hevcseqcntl_get_pcm_loop_filter_disable_flag(data)              ((0x00000002&(data))>>1)
#define  RIF_REG_hevcseqcntl_get_strong_intra_smoothing_enable_flag(data)        (0x00000001&(data))

#define  RIF_REG_hevcpiccntl                                                    0x1800E468
#define  RIF_REG_hevcpiccntl_reg_addr                                            "0xB800E468"
#define  RIF_REG_hevcpiccntl_reg                                                 0xB800E468
#define  RIF_REG_hevcpiccntl_inst_addr                                           "0x000B"
#define  set_RIF_REG_hevcpiccntl_reg(data)                                       (*((volatile unsigned int*)RIF_REG_hevcpiccntl_reg)=data)
#define  get_RIF_REG_hevcpiccntl_reg                                             (*((volatile unsigned int*)RIF_REG_hevcpiccntl_reg))
#define  RIF_REG_hevcpiccntl_decomp_en_shift                                     (27)
#define  RIF_REG_hevcpiccntl_large_scale_tile_shift                              (26)
#define  RIF_REG_hevcpiccntl_loop_filter_across_tiles_v_enabled_flag_shift       (25)
#define  RIF_REG_hevcpiccntl_picture_alf_enable_flag_shift                       (22)
#define  RIF_REG_hevcpiccntl_transform_skip_enabled_flag_shift                   (21)
#define  RIF_REG_hevcpiccntl_cu_qp_delta_enabled_flag_shift                      (20)
#define  RIF_REG_hevcpiccntl_min_cu_qp_delta_size_shift                          (17)
#define  RIF_REG_hevcpiccntl_pic_cb_qp_offset_shift                              (11)
#define  RIF_REG_hevcpiccntl_pic_cr_qp_offset_shift                              (5)
#define  RIF_REG_hevcpiccntl_loop_filter_across_tiles_enabled_flag_shift         (4)
#define  RIF_REG_hevcpiccntl_loop_filter_across_slices_enabled_flag_shift        (3)
#define  RIF_REG_hevcpiccntl_log2_parallel_merge_level_minus2_shift              (0)
#define  RIF_REG_hevcpiccntl_decomp_en_mask                                      (0x08000000)
#define  RIF_REG_hevcpiccntl_large_scale_tile_mask                               (0x04000000)
#define  RIF_REG_hevcpiccntl_loop_filter_across_tiles_v_enabled_flag_mask        (0x02000000)
#define  RIF_REG_hevcpiccntl_picture_alf_enable_flag_mask                        (0x01C00000)
#define  RIF_REG_hevcpiccntl_transform_skip_enabled_flag_mask                    (0x00200000)
#define  RIF_REG_hevcpiccntl_cu_qp_delta_enabled_flag_mask                       (0x00100000)
#define  RIF_REG_hevcpiccntl_min_cu_qp_delta_size_mask                           (0x000E0000)
#define  RIF_REG_hevcpiccntl_pic_cb_qp_offset_mask                               (0x0001F800)
#define  RIF_REG_hevcpiccntl_pic_cr_qp_offset_mask                               (0x000007E0)
#define  RIF_REG_hevcpiccntl_loop_filter_across_tiles_enabled_flag_mask          (0x00000010)
#define  RIF_REG_hevcpiccntl_loop_filter_across_slices_enabled_flag_mask         (0x00000008)
#define  RIF_REG_hevcpiccntl_log2_parallel_merge_level_minus2_mask               (0x00000007)
#define  RIF_REG_hevcpiccntl_decomp_en(data)                                     (0x08000000&((data)<<27))
#define  RIF_REG_hevcpiccntl_large_scale_tile(data)                              (0x04000000&((data)<<26))
#define  RIF_REG_hevcpiccntl_loop_filter_across_tiles_v_enabled_flag(data)       (0x02000000&((data)<<25))
#define  RIF_REG_hevcpiccntl_picture_alf_enable_flag(data)                       (0x01C00000&((data)<<22))
#define  RIF_REG_hevcpiccntl_transform_skip_enabled_flag(data)                   (0x00200000&((data)<<21))
#define  RIF_REG_hevcpiccntl_cu_qp_delta_enabled_flag(data)                      (0x00100000&((data)<<20))
#define  RIF_REG_hevcpiccntl_min_cu_qp_delta_size(data)                          (0x000E0000&((data)<<17))
#define  RIF_REG_hevcpiccntl_pic_cb_qp_offset(data)                              (0x0001F800&((data)<<11))
#define  RIF_REG_hevcpiccntl_pic_cr_qp_offset(data)                              (0x000007E0&((data)<<5))
#define  RIF_REG_hevcpiccntl_loop_filter_across_tiles_enabled_flag(data)         (0x00000010&((data)<<4))
#define  RIF_REG_hevcpiccntl_loop_filter_across_slices_enabled_flag(data)        (0x00000008&((data)<<3))
#define  RIF_REG_hevcpiccntl_log2_parallel_merge_level_minus2(data)              (0x00000007&(data))
#define  RIF_REG_hevcpiccntl_get_decomp_en(data)                                 ((0x08000000&(data))>>27)
#define  RIF_REG_hevcpiccntl_get_large_scale_tile(data)                          ((0x04000000&(data))>>26)
#define  RIF_REG_hevcpiccntl_get_loop_filter_across_tiles_v_enabled_flag(data)   ((0x02000000&(data))>>25)
#define  RIF_REG_hevcpiccntl_get_picture_alf_enable_flag(data)                   ((0x01C00000&(data))>>22)
#define  RIF_REG_hevcpiccntl_get_transform_skip_enabled_flag(data)               ((0x00200000&(data))>>21)
#define  RIF_REG_hevcpiccntl_get_cu_qp_delta_enabled_flag(data)                  ((0x00100000&(data))>>20)
#define  RIF_REG_hevcpiccntl_get_min_cu_qp_delta_size(data)                      ((0x000E0000&(data))>>17)
#define  RIF_REG_hevcpiccntl_get_pic_cb_qp_offset(data)                          ((0x0001F800&(data))>>11)
#define  RIF_REG_hevcpiccntl_get_pic_cr_qp_offset(data)                          ((0x000007E0&(data))>>5)
#define  RIF_REG_hevcpiccntl_get_loop_filter_across_tiles_enabled_flag(data)     ((0x00000010&(data))>>4)
#define  RIF_REG_hevcpiccntl_get_loop_filter_across_slices_enabled_flag(data)    ((0x00000008&(data))>>3)
#define  RIF_REG_hevcpiccntl_get_log2_parallel_merge_level_minus2(data)          (0x00000007&(data))

#define  RIF_REG_hevcpicsize                                                    0x1800E46C
#define  RIF_REG_hevcpicsize_reg_addr                                            "0xB800E46C"
#define  RIF_REG_hevcpicsize_reg                                                 0xB800E46C
#define  RIF_REG_hevcpicsize_inst_addr                                           "0x000C"
#define  set_RIF_REG_hevcpicsize_reg(data)                                       (*((volatile unsigned int*)RIF_REG_hevcpicsize_reg)=data)
#define  get_RIF_REG_hevcpicsize_reg                                             (*((volatile unsigned int*)RIF_REG_hevcpicsize_reg))
#define  RIF_REG_hevcpicsize_pic_width_shift                                     (13)
#define  RIF_REG_hevcpicsize_pic_height_shift                                    (0)
#define  RIF_REG_hevcpicsize_pic_width_mask                                      (0x07FFE000)
#define  RIF_REG_hevcpicsize_pic_height_mask                                     (0x00001FFF)
#define  RIF_REG_hevcpicsize_pic_width(data)                                     (0x07FFE000&((data)<<13))
#define  RIF_REG_hevcpicsize_pic_height(data)                                    (0x00001FFF&(data))
#define  RIF_REG_hevcpicsize_get_pic_width(data)                                 ((0x07FFE000&(data))>>13)
#define  RIF_REG_hevcpicsize_get_pic_height(data)                                (0x00001FFF&(data))

#define  RIF_REG_shvc_ctrl                                                      0x1800E458
#define  RIF_REG_shvc_ctrl_reg_addr                                              "0xB800E458"
#define  RIF_REG_shvc_ctrl_reg                                                   0xB800E458
#define  RIF_REG_shvc_ctrl_inst_addr                                             "0x000D"
#define  set_RIF_REG_shvc_ctrl_reg(data)                                         (*((volatile unsigned int*)RIF_REG_shvc_ctrl_reg)=data)
#define  get_RIF_REG_shvc_ctrl_reg                                               (*((volatile unsigned int*)RIF_REG_shvc_ctrl_reg))
#define  RIF_REG_shvc_ctrl_luma_bits_cmout_shift                                 (9)
#define  RIF_REG_shvc_ctrl_chroma_bits_cmout_shift                               (7)
#define  RIF_REG_shvc_ctrl_ctbsize_baselayer_shift                               (5)
#define  RIF_REG_shvc_ctrl_luma_bits_baselayer_shift                             (3)
#define  RIF_REG_shvc_ctrl_chroma_bits_baselayer_shift                           (1)
#define  RIF_REG_shvc_ctrl_dualcoreenable_baselayer_shift                        (0)
#define  RIF_REG_shvc_ctrl_luma_bits_cmout_mask                                  (0x00000600)
#define  RIF_REG_shvc_ctrl_chroma_bits_cmout_mask                                (0x00000180)
#define  RIF_REG_shvc_ctrl_ctbsize_baselayer_mask                                (0x00000060)
#define  RIF_REG_shvc_ctrl_luma_bits_baselayer_mask                              (0x00000018)
#define  RIF_REG_shvc_ctrl_chroma_bits_baselayer_mask                            (0x00000006)
#define  RIF_REG_shvc_ctrl_dualcoreenable_baselayer_mask                         (0x00000001)
#define  RIF_REG_shvc_ctrl_luma_bits_cmout(data)                                 (0x00000600&((data)<<9))
#define  RIF_REG_shvc_ctrl_chroma_bits_cmout(data)                               (0x00000180&((data)<<7))
#define  RIF_REG_shvc_ctrl_ctbsize_baselayer(data)                               (0x00000060&((data)<<5))
#define  RIF_REG_shvc_ctrl_luma_bits_baselayer(data)                             (0x00000018&((data)<<3))
#define  RIF_REG_shvc_ctrl_chroma_bits_baselayer(data)                           (0x00000006&((data)<<1))
#define  RIF_REG_shvc_ctrl_dualcoreenable_baselayer(data)                        (0x00000001&(data))
#define  RIF_REG_shvc_ctrl_get_luma_bits_cmout(data)                             ((0x00000600&(data))>>9)
#define  RIF_REG_shvc_ctrl_get_chroma_bits_cmout(data)                           ((0x00000180&(data))>>7)
#define  RIF_REG_shvc_ctrl_get_ctbsize_baselayer(data)                           ((0x00000060&(data))>>5)
#define  RIF_REG_shvc_ctrl_get_luma_bits_baselayer(data)                         ((0x00000018&(data))>>3)
#define  RIF_REG_shvc_ctrl_get_chroma_bits_baselayer(data)                       ((0x00000006&(data))>>1)
#define  RIF_REG_shvc_ctrl_get_dualcoreenable_baselayer(data)                    (0x00000001&(data))

#define  RIF_REG_refpicsize                                                     0x1800E45C
#define  RIF_REG_refpicsize_reg_addr                                             "0xB800E45C"
#define  RIF_REG_refpicsize_reg                                                  0xB800E45C
#define  RIF_REG_refpicsize_inst_addr                                            "0x000E"
#define  set_RIF_REG_refpicsize_reg(data)                                        (*((volatile unsigned int*)RIF_REG_refpicsize_reg)=data)
#define  get_RIF_REG_refpicsize_reg                                              (*((volatile unsigned int*)RIF_REG_refpicsize_reg))
#define  RIF_REG_refpicsize_ref_pic_width_shift                                  (13)
#define  RIF_REG_refpicsize_ref_pic_height_shift                                 (0)
#define  RIF_REG_refpicsize_ref_pic_width_mask                                   (0x07FFE000)
#define  RIF_REG_refpicsize_ref_pic_height_mask                                  (0x00001FFF)
#define  RIF_REG_refpicsize_ref_pic_width(data)                                  (0x07FFE000&((data)<<13))
#define  RIF_REG_refpicsize_ref_pic_height(data)                                 (0x00001FFF&(data))
#define  RIF_REG_refpicsize_get_ref_pic_width(data)                              ((0x07FFE000&(data))>>13)
#define  RIF_REG_refpicsize_get_ref_pic_height(data)                             (0x00001FFF&(data))

#define  RIF_REG_refregion                                                      0x1800E430
#define  RIF_REG_refregion_reg_addr                                              "0xB800E430"
#define  RIF_REG_refregion_reg                                                   0xB800E430
#define  RIF_REG_refregion_inst_addr                                             "0x000F"
#define  set_RIF_REG_refregion_reg(data)                                         (*((volatile unsigned int*)RIF_REG_refregion_reg)=data)
#define  get_RIF_REG_refregion_reg                                               (*((volatile unsigned int*)RIF_REG_refregion_reg))
#define  RIF_REG_refregion_ref_region_width_shift                                (16)
#define  RIF_REG_refregion_ref_region_height_shift                               (0)
#define  RIF_REG_refregion_ref_region_width_mask                                 (0xFFFF0000)
#define  RIF_REG_refregion_ref_region_height_mask                                (0x0000FFFF)
#define  RIF_REG_refregion_ref_region_width(data)                                (0xFFFF0000&((data)<<16))
#define  RIF_REG_refregion_ref_region_height(data)                               (0x0000FFFF&(data))
#define  RIF_REG_refregion_get_ref_region_width(data)                            ((0xFFFF0000&(data))>>16)
#define  RIF_REG_refregion_get_ref_region_height(data)                           (0x0000FFFF&(data))

#define  RIF_REG_refoffset                                                      0x1800E434
#define  RIF_REG_refoffset_reg_addr                                              "0xB800E434"
#define  RIF_REG_refoffset_reg                                                   0xB800E434
#define  RIF_REG_refoffset_inst_addr                                             "0x0010"
#define  set_RIF_REG_refoffset_reg(data)                                         (*((volatile unsigned int*)RIF_REG_refoffset_reg)=data)
#define  get_RIF_REG_refoffset_reg                                               (*((volatile unsigned int*)RIF_REG_refoffset_reg))
#define  RIF_REG_refoffset_ref_region_topoffset_shift                            (15)
#define  RIF_REG_refoffset_ref_region_leftoffset_shift                           (0)
#define  RIF_REG_refoffset_ref_region_topoffset_mask                             (0x3FFF8000)
#define  RIF_REG_refoffset_ref_region_leftoffset_mask                            (0x00007FFF)
#define  RIF_REG_refoffset_ref_region_topoffset(data)                            (0x3FFF8000&((data)<<15))
#define  RIF_REG_refoffset_ref_region_leftoffset(data)                           (0x00007FFF&(data))
#define  RIF_REG_refoffset_get_ref_region_topoffset(data)                        ((0x3FFF8000&(data))>>15)
#define  RIF_REG_refoffset_get_ref_region_leftoffset(data)                       (0x00007FFF&(data))

#define  RIF_REG_scaledregion                                                   0x1800E438
#define  RIF_REG_scaledregion_reg_addr                                           "0xB800E438"
#define  RIF_REG_scaledregion_reg                                                0xB800E438
#define  RIF_REG_scaledregion_inst_addr                                          "0x0011"
#define  set_RIF_REG_scaledregion_reg(data)                                      (*((volatile unsigned int*)RIF_REG_scaledregion_reg)=data)
#define  get_RIF_REG_scaledregion_reg                                            (*((volatile unsigned int*)RIF_REG_scaledregion_reg))
#define  RIF_REG_scaledregion_scaled_region_width_shift                          (16)
#define  RIF_REG_scaledregion_scaled_region_height_shift                         (0)
#define  RIF_REG_scaledregion_scaled_region_width_mask                           (0xFFFF0000)
#define  RIF_REG_scaledregion_scaled_region_height_mask                          (0x0000FFFF)
#define  RIF_REG_scaledregion_scaled_region_width(data)                          (0xFFFF0000&((data)<<16))
#define  RIF_REG_scaledregion_scaled_region_height(data)                         (0x0000FFFF&(data))
#define  RIF_REG_scaledregion_get_scaled_region_width(data)                      ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scaledregion_get_scaled_region_height(data)                     (0x0000FFFF&(data))

#define  RIF_REG_scaledoffset                                                   0x1800E43C
#define  RIF_REG_scaledoffset_reg_addr                                           "0xB800E43C"
#define  RIF_REG_scaledoffset_reg                                                0xB800E43C
#define  RIF_REG_scaledoffset_inst_addr                                          "0x0012"
#define  set_RIF_REG_scaledoffset_reg(data)                                      (*((volatile unsigned int*)RIF_REG_scaledoffset_reg)=data)
#define  get_RIF_REG_scaledoffset_reg                                            (*((volatile unsigned int*)RIF_REG_scaledoffset_reg))
#define  RIF_REG_scaledoffset_scaled_region_topoffset_shift                      (15)
#define  RIF_REG_scaledoffset_scaled_region_leftoffset_shift                     (0)
#define  RIF_REG_scaledoffset_scaled_region_topoffset_mask                       (0x3FFF8000)
#define  RIF_REG_scaledoffset_scaled_region_leftoffset_mask                      (0x00007FFF)
#define  RIF_REG_scaledoffset_scaled_region_topoffset(data)                      (0x3FFF8000&((data)<<15))
#define  RIF_REG_scaledoffset_scaled_region_leftoffset(data)                     (0x00007FFF&(data))
#define  RIF_REG_scaledoffset_get_scaled_region_topoffset(data)                  ((0x3FFF8000&(data))>>15)
#define  RIF_REG_scaledoffset_get_scaled_region_leftoffset(data)                 (0x00007FFF&(data))

#define  RIF_REG_SHVC_addHorY                                                   0x1800E440
#define  RIF_REG_SHVC_addHorY_reg_addr                                           "0xB800E440"
#define  RIF_REG_SHVC_addHorY_reg                                                0xB800E440
#define  RIF_REG_SHVC_addHorY_inst_addr                                          "0x0013"
#define  set_RIF_REG_SHVC_addHorY_reg(data)                                      (*((volatile unsigned int*)RIF_REG_SHVC_addHorY_reg)=data)
#define  get_RIF_REG_SHVC_addHorY_reg                                            (*((volatile unsigned int*)RIF_REG_SHVC_addHorY_reg))
#define  RIF_REG_SHVC_addHorY_new_addhory_shift                                  (0)
#define  RIF_REG_SHVC_addHorY_new_addhory_mask                                   (0x3FFFFFFF)
#define  RIF_REG_SHVC_addHorY_new_addhory(data)                                  (0x3FFFFFFF&(data))
#define  RIF_REG_SHVC_addHorY_get_new_addhory(data)                              (0x3FFFFFFF&(data))

#define  RIF_REG_SHVC_addVerY                                                   0x1800E444
#define  RIF_REG_SHVC_addVerY_reg_addr                                           "0xB800E444"
#define  RIF_REG_SHVC_addVerY_reg                                                0xB800E444
#define  RIF_REG_SHVC_addVerY_inst_addr                                          "0x0014"
#define  set_RIF_REG_SHVC_addVerY_reg(data)                                      (*((volatile unsigned int*)RIF_REG_SHVC_addVerY_reg)=data)
#define  get_RIF_REG_SHVC_addVerY_reg                                            (*((volatile unsigned int*)RIF_REG_SHVC_addVerY_reg))
#define  RIF_REG_SHVC_addVerY_new_addvery_shift                                  (0)
#define  RIF_REG_SHVC_addVerY_new_addvery_mask                                   (0x3FFFFFFF)
#define  RIF_REG_SHVC_addVerY_new_addvery(data)                                  (0x3FFFFFFF&(data))
#define  RIF_REG_SHVC_addVerY_get_new_addvery(data)                              (0x3FFFFFFF&(data))

#define  RIF_REG_SHVC_addHorC                                                   0x1800E448
#define  RIF_REG_SHVC_addHorC_reg_addr                                           "0xB800E448"
#define  RIF_REG_SHVC_addHorC_reg                                                0xB800E448
#define  RIF_REG_SHVC_addHorC_inst_addr                                          "0x0015"
#define  set_RIF_REG_SHVC_addHorC_reg(data)                                      (*((volatile unsigned int*)RIF_REG_SHVC_addHorC_reg)=data)
#define  get_RIF_REG_SHVC_addHorC_reg                                            (*((volatile unsigned int*)RIF_REG_SHVC_addHorC_reg))
#define  RIF_REG_SHVC_addHorC_new_addhorc_shift                                  (0)
#define  RIF_REG_SHVC_addHorC_new_addhorc_mask                                   (0x3FFFFFFF)
#define  RIF_REG_SHVC_addHorC_new_addhorc(data)                                  (0x3FFFFFFF&(data))
#define  RIF_REG_SHVC_addHorC_get_new_addhorc(data)                              (0x3FFFFFFF&(data))

#define  RIF_REG_SHVC_addVerC                                                   0x1800E44C
#define  RIF_REG_SHVC_addVerC_reg_addr                                           "0xB800E44C"
#define  RIF_REG_SHVC_addVerC_reg                                                0xB800E44C
#define  RIF_REG_SHVC_addVerC_inst_addr                                          "0x0016"
#define  set_RIF_REG_SHVC_addVerC_reg(data)                                      (*((volatile unsigned int*)RIF_REG_SHVC_addVerC_reg)=data)
#define  get_RIF_REG_SHVC_addVerC_reg                                            (*((volatile unsigned int*)RIF_REG_SHVC_addVerC_reg))
#define  RIF_REG_SHVC_addVerC_new_addverc_shift                                  (0)
#define  RIF_REG_SHVC_addVerC_new_addverc_mask                                   (0x3FFFFFFF)
#define  RIF_REG_SHVC_addVerC_new_addverc(data)                                  (0x3FFFFFFF&(data))
#define  RIF_REG_SHVC_addVerC_get_new_addverc(data)                              (0x3FFFFFFF&(data))

#define  RIF_REG_vc1piccntl                                                     0x1800E470
#define  RIF_REG_vc1piccntl_reg_addr                                             "0xB800E470"
#define  RIF_REG_vc1piccntl_reg                                                  0xB800E470
#define  RIF_REG_vc1piccntl_inst_addr                                            "0x0017"
#define  set_RIF_REG_vc1piccntl_reg(data)                                        (*((volatile unsigned int*)RIF_REG_vc1piccntl_reg)=data)
#define  get_RIF_REG_vc1piccntl_reg                                              (*((volatile unsigned int*)RIF_REG_vc1piccntl_reg))
#define  RIF_REG_vc1piccntl_overlap_enable_shift                                 (31)
#define  RIF_REG_vc1piccntl_field_pictype_shift                                  (28)
#define  RIF_REG_vc1piccntl_mvmode_shift                                         (26)
#define  RIF_REG_vc1piccntl_fcm_shift                                            (24)
#define  RIF_REG_vc1piccntl_disppic_h_shift                                      (12)
#define  RIF_REG_vc1piccntl_disppic_w_shift                                      (0)
#define  RIF_REG_vc1piccntl_overlap_enable_mask                                  (0x80000000)
#define  RIF_REG_vc1piccntl_field_pictype_mask                                   (0x70000000)
#define  RIF_REG_vc1piccntl_mvmode_mask                                          (0x0C000000)
#define  RIF_REG_vc1piccntl_fcm_mask                                             (0x03000000)
#define  RIF_REG_vc1piccntl_disppic_h_mask                                       (0x00FFF000)
#define  RIF_REG_vc1piccntl_disppic_w_mask                                       (0x00000FFF)
#define  RIF_REG_vc1piccntl_overlap_enable(data)                                 (0x80000000&((data)<<31))
#define  RIF_REG_vc1piccntl_field_pictype(data)                                  (0x70000000&((data)<<28))
#define  RIF_REG_vc1piccntl_mvmode(data)                                         (0x0C000000&((data)<<26))
#define  RIF_REG_vc1piccntl_fcm(data)                                            (0x03000000&((data)<<24))
#define  RIF_REG_vc1piccntl_disppic_h(data)                                      (0x00FFF000&((data)<<12))
#define  RIF_REG_vc1piccntl_disppic_w(data)                                      (0x00000FFF&(data))
#define  RIF_REG_vc1piccntl_get_overlap_enable(data)                             ((0x80000000&(data))>>31)
#define  RIF_REG_vc1piccntl_get_field_pictype(data)                              ((0x70000000&(data))>>28)
#define  RIF_REG_vc1piccntl_get_mvmode(data)                                     ((0x0C000000&(data))>>26)
#define  RIF_REG_vc1piccntl_get_fcm(data)                                        ((0x03000000&(data))>>24)
#define  RIF_REG_vc1piccntl_get_disppic_h(data)                                  ((0x00FFF000&(data))>>12)
#define  RIF_REG_vc1piccntl_get_disppic_w(data)                                  (0x00000FFF&(data))

#define  RIF_REG_scale_fp_0                                                     0x1800E474
#define  RIF_REG_scale_fp_0_reg_addr                                             "0xB800E474"
#define  RIF_REG_scale_fp_0_reg                                                  0xB800E474
#define  RIF_REG_scale_fp_0_inst_addr                                            "0x0018"
#define  set_RIF_REG_scale_fp_0_reg(data)                                        (*((volatile unsigned int*)RIF_REG_scale_fp_0_reg)=data)
#define  get_RIF_REG_scale_fp_0_reg                                              (*((volatile unsigned int*)RIF_REG_scale_fp_0_reg))
#define  RIF_REG_scale_fp_0_x_scale_fp_shift                                     (16)
#define  RIF_REG_scale_fp_0_y_scale_fp_shift                                     (0)
#define  RIF_REG_scale_fp_0_x_scale_fp_mask                                      (0xFFFF0000)
#define  RIF_REG_scale_fp_0_y_scale_fp_mask                                      (0x0000FFFF)
#define  RIF_REG_scale_fp_0_x_scale_fp(data)                                     (0xFFFF0000&((data)<<16))
#define  RIF_REG_scale_fp_0_y_scale_fp(data)                                     (0x0000FFFF&(data))
#define  RIF_REG_scale_fp_0_get_x_scale_fp(data)                                 ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scale_fp_0_get_y_scale_fp(data)                                 (0x0000FFFF&(data))

#define  RIF_REG_scale_fp_1                                                     0x1800E478
#define  RIF_REG_scale_fp_1_reg_addr                                             "0xB800E478"
#define  RIF_REG_scale_fp_1_reg                                                  0xB800E478
#define  RIF_REG_scale_fp_1_inst_addr                                            "0x0019"
#define  set_RIF_REG_scale_fp_1_reg(data)                                        (*((volatile unsigned int*)RIF_REG_scale_fp_1_reg)=data)
#define  get_RIF_REG_scale_fp_1_reg                                              (*((volatile unsigned int*)RIF_REG_scale_fp_1_reg))
#define  RIF_REG_scale_fp_1_x_scale_fp_shift                                     (16)
#define  RIF_REG_scale_fp_1_y_scale_fp_shift                                     (0)
#define  RIF_REG_scale_fp_1_x_scale_fp_mask                                      (0xFFFF0000)
#define  RIF_REG_scale_fp_1_y_scale_fp_mask                                      (0x0000FFFF)
#define  RIF_REG_scale_fp_1_x_scale_fp(data)                                     (0xFFFF0000&((data)<<16))
#define  RIF_REG_scale_fp_1_y_scale_fp(data)                                     (0x0000FFFF&(data))
#define  RIF_REG_scale_fp_1_get_x_scale_fp(data)                                 ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scale_fp_1_get_y_scale_fp(data)                                 (0x0000FFFF&(data))

#define  RIF_REG_scale_fp_2                                                     0x1800E47C
#define  RIF_REG_scale_fp_2_reg_addr                                             "0xB800E47C"
#define  RIF_REG_scale_fp_2_reg                                                  0xB800E47C
#define  RIF_REG_scale_fp_2_inst_addr                                            "0x001A"
#define  set_RIF_REG_scale_fp_2_reg(data)                                        (*((volatile unsigned int*)RIF_REG_scale_fp_2_reg)=data)
#define  get_RIF_REG_scale_fp_2_reg                                              (*((volatile unsigned int*)RIF_REG_scale_fp_2_reg))
#define  RIF_REG_scale_fp_2_x_scale_fp_shift                                     (16)
#define  RIF_REG_scale_fp_2_y_scale_fp_shift                                     (0)
#define  RIF_REG_scale_fp_2_x_scale_fp_mask                                      (0xFFFF0000)
#define  RIF_REG_scale_fp_2_y_scale_fp_mask                                      (0x0000FFFF)
#define  RIF_REG_scale_fp_2_x_scale_fp(data)                                     (0xFFFF0000&((data)<<16))
#define  RIF_REG_scale_fp_2_y_scale_fp(data)                                     (0x0000FFFF&(data))
#define  RIF_REG_scale_fp_2_get_x_scale_fp(data)                                 ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scale_fp_2_get_y_scale_fp(data)                                 (0x0000FFFF&(data))

#define  RIF_REG_scale_fp_3                                                     0x1800E480
#define  RIF_REG_scale_fp_3_reg_addr                                             "0xB800E480"
#define  RIF_REG_scale_fp_3_reg                                                  0xB800E480
#define  RIF_REG_scale_fp_3_inst_addr                                            "0x001B"
#define  set_RIF_REG_scale_fp_3_reg(data)                                        (*((volatile unsigned int*)RIF_REG_scale_fp_3_reg)=data)
#define  get_RIF_REG_scale_fp_3_reg                                              (*((volatile unsigned int*)RIF_REG_scale_fp_3_reg))
#define  RIF_REG_scale_fp_3_x_scale_fp_shift                                     (16)
#define  RIF_REG_scale_fp_3_y_scale_fp_shift                                     (0)
#define  RIF_REG_scale_fp_3_x_scale_fp_mask                                      (0xFFFF0000)
#define  RIF_REG_scale_fp_3_y_scale_fp_mask                                      (0x0000FFFF)
#define  RIF_REG_scale_fp_3_x_scale_fp(data)                                     (0xFFFF0000&((data)<<16))
#define  RIF_REG_scale_fp_3_y_scale_fp(data)                                     (0x0000FFFF&(data))
#define  RIF_REG_scale_fp_3_get_x_scale_fp(data)                                 ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scale_fp_3_get_y_scale_fp(data)                                 (0x0000FFFF&(data))

#define  RIF_REG_scale_fp_4                                                     0x1800E484
#define  RIF_REG_scale_fp_4_reg_addr                                             "0xB800E484"
#define  RIF_REG_scale_fp_4_reg                                                  0xB800E484
#define  RIF_REG_scale_fp_4_inst_addr                                            "0x001C"
#define  set_RIF_REG_scale_fp_4_reg(data)                                        (*((volatile unsigned int*)RIF_REG_scale_fp_4_reg)=data)
#define  get_RIF_REG_scale_fp_4_reg                                              (*((volatile unsigned int*)RIF_REG_scale_fp_4_reg))
#define  RIF_REG_scale_fp_4_x_scale_fp_shift                                     (16)
#define  RIF_REG_scale_fp_4_y_scale_fp_shift                                     (0)
#define  RIF_REG_scale_fp_4_x_scale_fp_mask                                      (0xFFFF0000)
#define  RIF_REG_scale_fp_4_y_scale_fp_mask                                      (0x0000FFFF)
#define  RIF_REG_scale_fp_4_x_scale_fp(data)                                     (0xFFFF0000&((data)<<16))
#define  RIF_REG_scale_fp_4_y_scale_fp(data)                                     (0x0000FFFF&(data))
#define  RIF_REG_scale_fp_4_get_x_scale_fp(data)                                 ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scale_fp_4_get_y_scale_fp(data)                                 (0x0000FFFF&(data))

#define  RIF_REG_scale_fp_5                                                     0x1800E488
#define  RIF_REG_scale_fp_5_reg_addr                                             "0xB800E488"
#define  RIF_REG_scale_fp_5_reg                                                  0xB800E488
#define  RIF_REG_scale_fp_5_inst_addr                                            "0x001D"
#define  set_RIF_REG_scale_fp_5_reg(data)                                        (*((volatile unsigned int*)RIF_REG_scale_fp_5_reg)=data)
#define  get_RIF_REG_scale_fp_5_reg                                              (*((volatile unsigned int*)RIF_REG_scale_fp_5_reg))
#define  RIF_REG_scale_fp_5_x_scale_fp_shift                                     (16)
#define  RIF_REG_scale_fp_5_y_scale_fp_shift                                     (0)
#define  RIF_REG_scale_fp_5_x_scale_fp_mask                                      (0xFFFF0000)
#define  RIF_REG_scale_fp_5_y_scale_fp_mask                                      (0x0000FFFF)
#define  RIF_REG_scale_fp_5_x_scale_fp(data)                                     (0xFFFF0000&((data)<<16))
#define  RIF_REG_scale_fp_5_y_scale_fp(data)                                     (0x0000FFFF&(data))
#define  RIF_REG_scale_fp_5_get_x_scale_fp(data)                                 ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scale_fp_5_get_y_scale_fp(data)                                 (0x0000FFFF&(data))

#define  RIF_REG_scale_fp_6                                                     0x1800E48C
#define  RIF_REG_scale_fp_6_reg_addr                                             "0xB800E48C"
#define  RIF_REG_scale_fp_6_reg                                                  0xB800E48C
#define  RIF_REG_scale_fp_6_inst_addr                                            "0x001E"
#define  set_RIF_REG_scale_fp_6_reg(data)                                        (*((volatile unsigned int*)RIF_REG_scale_fp_6_reg)=data)
#define  get_RIF_REG_scale_fp_6_reg                                              (*((volatile unsigned int*)RIF_REG_scale_fp_6_reg))
#define  RIF_REG_scale_fp_6_x_scale_fp_shift                                     (16)
#define  RIF_REG_scale_fp_6_y_scale_fp_shift                                     (0)
#define  RIF_REG_scale_fp_6_x_scale_fp_mask                                      (0xFFFF0000)
#define  RIF_REG_scale_fp_6_y_scale_fp_mask                                      (0x0000FFFF)
#define  RIF_REG_scale_fp_6_x_scale_fp(data)                                     (0xFFFF0000&((data)<<16))
#define  RIF_REG_scale_fp_6_y_scale_fp(data)                                     (0x0000FFFF&(data))
#define  RIF_REG_scale_fp_6_get_x_scale_fp(data)                                 ((0xFFFF0000&(data))>>16)
#define  RIF_REG_scale_fp_6_get_y_scale_fp(data)                                 (0x0000FFFF&(data))

#define  RIF_REG_av1piccntl                                                     0x1800E4AC
#define  RIF_REG_av1piccntl_reg_addr                                             "0xB800E4AC"
#define  RIF_REG_av1piccntl_reg                                                  0xB800E4AC
#define  RIF_REG_av1piccntl_inst_addr                                            "0x001F"
#define  set_RIF_REG_av1piccntl_reg(data)                                        (*((volatile unsigned int*)RIF_REG_av1piccntl_reg)=data)
#define  get_RIF_REG_av1piccntl_reg                                              (*((volatile unsigned int*)RIF_REG_av1piccntl_reg))
#define  RIF_REG_av1piccntl_cdef_disable_shift                                   (21)
#define  RIF_REG_av1piccntl_allow_intrabc_shift                                  (20)
#define  RIF_REG_av1piccntl_blk_skip_enabled_shift                               (19)
#define  RIF_REG_av1piccntl_delta_lf_multi_shift                                 (18)
#define  RIF_REG_av1piccntl_filter_level_v_shift                                 (12)
#define  RIF_REG_av1piccntl_filter_level_u_shift                                 (6)
#define  RIF_REG_av1piccntl_filter_level_hor_shift                               (0)
#define  RIF_REG_av1piccntl_cdef_disable_mask                                    (0x00200000)
#define  RIF_REG_av1piccntl_allow_intrabc_mask                                   (0x00100000)
#define  RIF_REG_av1piccntl_blk_skip_enabled_mask                                (0x00080000)
#define  RIF_REG_av1piccntl_delta_lf_multi_mask                                  (0x00040000)
#define  RIF_REG_av1piccntl_filter_level_v_mask                                  (0x0003F000)
#define  RIF_REG_av1piccntl_filter_level_u_mask                                  (0x00000FC0)
#define  RIF_REG_av1piccntl_filter_level_hor_mask                                (0x0000003F)
#define  RIF_REG_av1piccntl_cdef_disable(data)                                   (0x00200000&((data)<<21))
#define  RIF_REG_av1piccntl_allow_intrabc(data)                                  (0x00100000&((data)<<20))
#define  RIF_REG_av1piccntl_blk_skip_enabled(data)                               (0x00080000&((data)<<19))
#define  RIF_REG_av1piccntl_delta_lf_multi(data)                                 (0x00040000&((data)<<18))
#define  RIF_REG_av1piccntl_filter_level_v(data)                                 (0x0003F000&((data)<<12))
#define  RIF_REG_av1piccntl_filter_level_u(data)                                 (0x00000FC0&((data)<<6))
#define  RIF_REG_av1piccntl_filter_level_hor(data)                               (0x0000003F&(data))
#define  RIF_REG_av1piccntl_get_cdef_disable(data)                               ((0x00200000&(data))>>21)
#define  RIF_REG_av1piccntl_get_allow_intrabc(data)                              ((0x00100000&(data))>>20)
#define  RIF_REG_av1piccntl_get_blk_skip_enabled(data)                           ((0x00080000&(data))>>19)
#define  RIF_REG_av1piccntl_get_delta_lf_multi(data)                             ((0x00040000&(data))>>18)
#define  RIF_REG_av1piccntl_get_filter_level_v(data)                             ((0x0003F000&(data))>>12)
#define  RIF_REG_av1piccntl_get_filter_level_u(data)                             ((0x00000FC0&(data))>>6)
#define  RIF_REG_av1piccntl_get_filter_level_hor(data)                           (0x0000003F&(data))

#define  RIF_REG_brg_ctrl                                                       0x1800E490
#define  RIF_REG_brg_ctrl_reg_addr                                               "0xB800E490"
#define  RIF_REG_brg_ctrl_reg                                                    0xB800E490
#define  RIF_REG_brg_ctrl_inst_addr                                              "0x0020"
#define  set_RIF_REG_brg_ctrl_reg(data)                                          (*((volatile unsigned int*)RIF_REG_brg_ctrl_reg)=data)
#define  get_RIF_REG_brg_ctrl_reg                                                (*((volatile unsigned int*)RIF_REG_brg_ctrl_reg))
#define  RIF_REG_brg_ctrl_neighbor_loc_shift                                     (24)
#define  RIF_REG_brg_ctrl_priority_thd2_shift                                    (16)
#define  RIF_REG_brg_ctrl_priority_thd1_shift                                    (8)
#define  RIF_REG_brg_ctrl_srg_mode_shift                                         (3)
#define  RIF_REG_brg_ctrl_ddr_page_shift                                         (1)
#define  RIF_REG_brg_ctrl_srg_enable_shift                                       (0)
#define  RIF_REG_brg_ctrl_neighbor_loc_mask                                      (0x3F000000)
#define  RIF_REG_brg_ctrl_priority_thd2_mask                                     (0x00FF0000)
#define  RIF_REG_brg_ctrl_priority_thd1_mask                                     (0x0000FF00)
#define  RIF_REG_brg_ctrl_srg_mode_mask                                          (0x00000008)
#define  RIF_REG_brg_ctrl_ddr_page_mask                                          (0x00000006)
#define  RIF_REG_brg_ctrl_srg_enable_mask                                        (0x00000001)
#define  RIF_REG_brg_ctrl_neighbor_loc(data)                                     (0x3F000000&((data)<<24))
#define  RIF_REG_brg_ctrl_priority_thd2(data)                                    (0x00FF0000&((data)<<16))
#define  RIF_REG_brg_ctrl_priority_thd1(data)                                    (0x0000FF00&((data)<<8))
#define  RIF_REG_brg_ctrl_srg_mode(data)                                         (0x00000008&((data)<<3))
#define  RIF_REG_brg_ctrl_ddr_page(data)                                         (0x00000006&((data)<<1))
#define  RIF_REG_brg_ctrl_srg_enable(data)                                       (0x00000001&(data))
#define  RIF_REG_brg_ctrl_get_neighbor_loc(data)                                 ((0x3F000000&(data))>>24)
#define  RIF_REG_brg_ctrl_get_priority_thd2(data)                                ((0x00FF0000&(data))>>16)
#define  RIF_REG_brg_ctrl_get_priority_thd1(data)                                ((0x0000FF00&(data))>>8)
#define  RIF_REG_brg_ctrl_get_srg_mode(data)                                     ((0x00000008&(data))>>3)
#define  RIF_REG_brg_ctrl_get_ddr_page(data)                                     ((0x00000006&(data))>>1)
#define  RIF_REG_brg_ctrl_get_srg_enable(data)                                   (0x00000001&(data))

#define  RIF_REG_rd_priority0                                                   0x1800E494
#define  RIF_REG_rd_priority0_reg_addr                                           "0xB800E494"
#define  RIF_REG_rd_priority0_reg                                                0xB800E494
#define  RIF_REG_rd_priority0_inst_addr                                          "0x0021"
#define  set_RIF_REG_rd_priority0_reg(data)                                      (*((volatile unsigned int*)RIF_REG_rd_priority0_reg)=data)
#define  get_RIF_REG_rd_priority0_reg                                            (*((volatile unsigned int*)RIF_REG_rd_priority0_reg))
#define  RIF_REG_rd_priority0_vm2_shift                                          (16)
#define  RIF_REG_rd_priority0_vm1_shift                                          (0)
#define  RIF_REG_rd_priority0_vm2_mask                                           (0x1FFF0000)
#define  RIF_REG_rd_priority0_vm1_mask                                           (0x00001FFF)
#define  RIF_REG_rd_priority0_vm2(data)                                          (0x1FFF0000&((data)<<16))
#define  RIF_REG_rd_priority0_vm1(data)                                          (0x00001FFF&(data))
#define  RIF_REG_rd_priority0_get_vm2(data)                                      ((0x1FFF0000&(data))>>16)
#define  RIF_REG_rd_priority0_get_vm1(data)                                      (0x00001FFF&(data))

#define  RIF_REG_rd_priority1                                                   0x1800E498
#define  RIF_REG_rd_priority1_reg_addr                                           "0xB800E498"
#define  RIF_REG_rd_priority1_reg                                                0xB800E498
#define  RIF_REG_rd_priority1_inst_addr                                          "0x0022"
#define  set_RIF_REG_rd_priority1_reg(data)                                      (*((volatile unsigned int*)RIF_REG_rd_priority1_reg)=data)
#define  get_RIF_REG_rd_priority1_reg                                            (*((volatile unsigned int*)RIF_REG_rd_priority1_reg))
#define  RIF_REG_rd_priority1_deblk_shift                                        (16)
#define  RIF_REG_rd_priority1_predblk_shift                                      (0)
#define  RIF_REG_rd_priority1_deblk_mask                                         (0x1FFF0000)
#define  RIF_REG_rd_priority1_predblk_mask                                       (0x00001FFF)
#define  RIF_REG_rd_priority1_deblk(data)                                        (0x1FFF0000&((data)<<16))
#define  RIF_REG_rd_priority1_predblk(data)                                      (0x00001FFF&(data))
#define  RIF_REG_rd_priority1_get_deblk(data)                                    ((0x1FFF0000&(data))>>16)
#define  RIF_REG_rd_priority1_get_predblk(data)                                  (0x00001FFF&(data))

#define  RIF_REG_rd_priority2                                                   0x1800E49C
#define  RIF_REG_rd_priority2_reg_addr                                           "0xB800E49C"
#define  RIF_REG_rd_priority2_reg                                                0xB800E49C
#define  RIF_REG_rd_priority2_inst_addr                                          "0x0023"
#define  set_RIF_REG_rd_priority2_reg(data)                                      (*((volatile unsigned int*)RIF_REG_rd_priority2_reg)=data)
#define  get_RIF_REG_rd_priority2_reg                                            (*((volatile unsigned int*)RIF_REG_rd_priority2_reg))
#define  RIF_REG_rd_priority2_nm_shift                                           (16)
#define  RIF_REG_rd_priority2_mvd_shift                                          (0)
#define  RIF_REG_rd_priority2_nm_mask                                            (0x1FFF0000)
#define  RIF_REG_rd_priority2_mvd_mask                                           (0x00001FFF)
#define  RIF_REG_rd_priority2_nm(data)                                           (0x1FFF0000&((data)<<16))
#define  RIF_REG_rd_priority2_mvd(data)                                          (0x00001FFF&(data))
#define  RIF_REG_rd_priority2_get_nm(data)                                       ((0x1FFF0000&(data))>>16)
#define  RIF_REG_rd_priority2_get_mvd(data)                                      (0x00001FFF&(data))

#define  RIF_REG_rd_priority3                                                   0x1800E4A0
#define  RIF_REG_rd_priority3_reg_addr                                           "0xB800E4A0"
#define  RIF_REG_rd_priority3_reg                                                0xB800E4A0
#define  RIF_REG_rd_priority3_inst_addr                                          "0x0024"
#define  set_RIF_REG_rd_priority3_reg(data)                                      (*((volatile unsigned int*)RIF_REG_rd_priority3_reg)=data)
#define  get_RIF_REG_rd_priority3_reg                                            (*((volatile unsigned int*)RIF_REG_rd_priority3_reg))
#define  RIF_REG_rd_priority3_gcoeff_shift                                       (16)
#define  RIF_REG_rd_priority3_bs_shift                                           (0)
#define  RIF_REG_rd_priority3_gcoeff_mask                                        (0x1FFF0000)
#define  RIF_REG_rd_priority3_bs_mask                                            (0x00001FFF)
#define  RIF_REG_rd_priority3_gcoeff(data)                                       (0x1FFF0000&((data)<<16))
#define  RIF_REG_rd_priority3_bs(data)                                           (0x00001FFF&(data))
#define  RIF_REG_rd_priority3_get_gcoeff(data)                                   ((0x1FFF0000&(data))>>16)
#define  RIF_REG_rd_priority3_get_bs(data)                                       (0x00001FFF&(data))

#define  RIF_REG_rd_priority4                                                   0x1800E4A4
#define  RIF_REG_rd_priority4_reg_addr                                           "0xB800E4A4"
#define  RIF_REG_rd_priority4_reg                                                0xB800E4A4
#define  RIF_REG_rd_priority4_inst_addr                                          "0x0025"
#define  set_RIF_REG_rd_priority4_reg(data)                                      (*((volatile unsigned int*)RIF_REG_rd_priority4_reg)=data)
#define  get_RIF_REG_rd_priority4_reg                                            (*((volatile unsigned int*)RIF_REG_rd_priority4_reg))
#define  RIF_REG_rd_priority4_cmp_shift                                          (16)
#define  RIF_REG_rd_priority4_rl_shift                                           (0)
#define  RIF_REG_rd_priority4_cmp_mask                                           (0x1FFF0000)
#define  RIF_REG_rd_priority4_rl_mask                                            (0x00001FFF)
#define  RIF_REG_rd_priority4_cmp(data)                                          (0x1FFF0000&((data)<<16))
#define  RIF_REG_rd_priority4_rl(data)                                           (0x00001FFF&(data))
#define  RIF_REG_rd_priority4_get_cmp(data)                                      ((0x1FFF0000&(data))>>16)
#define  RIF_REG_rd_priority4_get_rl(data)                                       (0x00001FFF&(data))

#define  RIF_REG_rd_priority5                                                   0x1800E4A8
#define  RIF_REG_rd_priority5_reg_addr                                           "0xB800E4A8"
#define  RIF_REG_rd_priority5_reg                                                0xB800E4A8
#define  RIF_REG_rd_priority5_inst_addr                                          "0x0026"
#define  set_RIF_REG_rd_priority5_reg(data)                                      (*((volatile unsigned int*)RIF_REG_rd_priority5_reg)=data)
#define  get_RIF_REG_rd_priority5_reg                                            (*((volatile unsigned int*)RIF_REG_rd_priority5_reg))
#define  RIF_REG_rd_priority5_fme_shift                                          (16)
#define  RIF_REG_rd_priority5_ime_shift                                          (0)
#define  RIF_REG_rd_priority5_fme_mask                                           (0x1FFF0000)
#define  RIF_REG_rd_priority5_ime_mask                                           (0x00001FFF)
#define  RIF_REG_rd_priority5_fme(data)                                          (0x1FFF0000&((data)<<16))
#define  RIF_REG_rd_priority5_ime(data)                                          (0x00001FFF&(data))
#define  RIF_REG_rd_priority5_get_fme(data)                                      ((0x1FFF0000&(data))>>16)
#define  RIF_REG_rd_priority5_get_ime(data)                                      (0x00001FFF&(data))

#define  RIF_REG_wt_priority0                                                   0x1800E4B0
#define  RIF_REG_wt_priority0_reg_addr                                           "0xB800E4B0"
#define  RIF_REG_wt_priority0_reg                                                0xB800E4B0
#define  RIF_REG_wt_priority0_inst_addr                                          "0x0027"
#define  set_RIF_REG_wt_priority0_reg(data)                                      (*((volatile unsigned int*)RIF_REG_wt_priority0_reg)=data)
#define  get_RIF_REG_wt_priority0_reg                                            (*((volatile unsigned int*)RIF_REG_wt_priority0_reg))
#define  RIF_REG_wt_priority0_vm2_shift                                          (16)
#define  RIF_REG_wt_priority0_vm1_shift                                          (0)
#define  RIF_REG_wt_priority0_vm2_mask                                           (0x07FF0000)
#define  RIF_REG_wt_priority0_vm1_mask                                           (0x000007FF)
#define  RIF_REG_wt_priority0_vm2(data)                                          (0x07FF0000&((data)<<16))
#define  RIF_REG_wt_priority0_vm1(data)                                          (0x000007FF&(data))
#define  RIF_REG_wt_priority0_get_vm2(data)                                      ((0x07FF0000&(data))>>16)
#define  RIF_REG_wt_priority0_get_vm1(data)                                      (0x000007FF&(data))

#define  RIF_REG_wt_priority1                                                   0x1800E4B4
#define  RIF_REG_wt_priority1_reg_addr                                           "0xB800E4B4"
#define  RIF_REG_wt_priority1_reg                                                0xB800E4B4
#define  RIF_REG_wt_priority1_inst_addr                                          "0x0028"
#define  set_RIF_REG_wt_priority1_reg(data)                                      (*((volatile unsigned int*)RIF_REG_wt_priority1_reg)=data)
#define  get_RIF_REG_wt_priority1_reg                                            (*((volatile unsigned int*)RIF_REG_wt_priority1_reg))
#define  RIF_REG_wt_priority1_deblk_shift                                        (16)
#define  RIF_REG_wt_priority1_predblk_shift                                      (0)
#define  RIF_REG_wt_priority1_deblk_mask                                         (0x07FF0000)
#define  RIF_REG_wt_priority1_predblk_mask                                       (0x000007FF)
#define  RIF_REG_wt_priority1_deblk(data)                                        (0x07FF0000&((data)<<16))
#define  RIF_REG_wt_priority1_predblk(data)                                      (0x000007FF&(data))
#define  RIF_REG_wt_priority1_get_deblk(data)                                    ((0x07FF0000&(data))>>16)
#define  RIF_REG_wt_priority1_get_predblk(data)                                  (0x000007FF&(data))

#define  RIF_REG_wt_priority2                                                   0x1800E4B8
#define  RIF_REG_wt_priority2_reg_addr                                           "0xB800E4B8"
#define  RIF_REG_wt_priority2_reg                                                0xB800E4B8
#define  RIF_REG_wt_priority2_inst_addr                                          "0x0029"
#define  set_RIF_REG_wt_priority2_reg(data)                                      (*((volatile unsigned int*)RIF_REG_wt_priority2_reg)=data)
#define  get_RIF_REG_wt_priority2_reg                                            (*((volatile unsigned int*)RIF_REG_wt_priority2_reg))
#define  RIF_REG_wt_priority2_nm_shift                                           (16)
#define  RIF_REG_wt_priority2_mvd_shift                                          (0)
#define  RIF_REG_wt_priority2_nm_mask                                            (0x07FF0000)
#define  RIF_REG_wt_priority2_mvd_mask                                           (0x000007FF)
#define  RIF_REG_wt_priority2_nm(data)                                           (0x07FF0000&((data)<<16))
#define  RIF_REG_wt_priority2_mvd(data)                                          (0x000007FF&(data))
#define  RIF_REG_wt_priority2_get_nm(data)                                       ((0x07FF0000&(data))>>16)
#define  RIF_REG_wt_priority2_get_mvd(data)                                      (0x000007FF&(data))

#define  RIF_REG_wt_priority3                                                   0x1800E4BC
#define  RIF_REG_wt_priority3_reg_addr                                           "0xB800E4BC"
#define  RIF_REG_wt_priority3_reg                                                0xB800E4BC
#define  RIF_REG_wt_priority3_inst_addr                                          "0x002A"
#define  set_RIF_REG_wt_priority3_reg(data)                                      (*((volatile unsigned int*)RIF_REG_wt_priority3_reg)=data)
#define  get_RIF_REG_wt_priority3_reg                                            (*((volatile unsigned int*)RIF_REG_wt_priority3_reg))
#define  RIF_REG_wt_priority3_gcoeff_shift                                       (16)
#define  RIF_REG_wt_priority3_bs_shift                                           (0)
#define  RIF_REG_wt_priority3_gcoeff_mask                                        (0x07FF0000)
#define  RIF_REG_wt_priority3_bs_mask                                            (0x000007FF)
#define  RIF_REG_wt_priority3_gcoeff(data)                                       (0x07FF0000&((data)<<16))
#define  RIF_REG_wt_priority3_bs(data)                                           (0x000007FF&(data))
#define  RIF_REG_wt_priority3_get_gcoeff(data)                                   ((0x07FF0000&(data))>>16)
#define  RIF_REG_wt_priority3_get_bs(data)                                       (0x000007FF&(data))

#define  RIF_REG_wt_priority4                                                   0x1800E4C0
#define  RIF_REG_wt_priority4_reg_addr                                           "0xB800E4C0"
#define  RIF_REG_wt_priority4_reg                                                0xB800E4C0
#define  RIF_REG_wt_priority4_inst_addr                                          "0x002B"
#define  set_RIF_REG_wt_priority4_reg(data)                                      (*((volatile unsigned int*)RIF_REG_wt_priority4_reg)=data)
#define  get_RIF_REG_wt_priority4_reg                                            (*((volatile unsigned int*)RIF_REG_wt_priority4_reg))
#define  RIF_REG_wt_priority4_cmp_shift                                          (16)
#define  RIF_REG_wt_priority4_it_shift                                           (0)
#define  RIF_REG_wt_priority4_cmp_mask                                           (0x07FF0000)
#define  RIF_REG_wt_priority4_it_mask                                            (0x000007FF)
#define  RIF_REG_wt_priority4_cmp(data)                                          (0x07FF0000&((data)<<16))
#define  RIF_REG_wt_priority4_it(data)                                           (0x000007FF&(data))
#define  RIF_REG_wt_priority4_get_cmp(data)                                      ((0x07FF0000&(data))>>16)
#define  RIF_REG_wt_priority4_get_it(data)                                       (0x000007FF&(data))

#define  RIF_REG_wt_priority5                                                   0x1800E4C4
#define  RIF_REG_wt_priority5_reg_addr                                           "0xB800E4C4"
#define  RIF_REG_wt_priority5_reg                                                0xB800E4C4
#define  RIF_REG_wt_priority5_inst_addr                                          "0x002C"
#define  set_RIF_REG_wt_priority5_reg(data)                                      (*((volatile unsigned int*)RIF_REG_wt_priority5_reg)=data)
#define  get_RIF_REG_wt_priority5_reg                                            (*((volatile unsigned int*)RIF_REG_wt_priority5_reg))
#define  RIF_REG_wt_priority5_fme_shift                                          (0)
#define  RIF_REG_wt_priority5_fme_mask                                           (0x000007FF)
#define  RIF_REG_wt_priority5_fme(data)                                          (0x000007FF&(data))
#define  RIF_REG_wt_priority5_get_fme(data)                                      (0x000007FF&(data))

#define  RIF_REG_dbg_ctrl17                                                     0x1800E4DC
#define  RIF_REG_dbg_ctrl17_reg_addr                                             "0xB800E4DC"
#define  RIF_REG_dbg_ctrl17_reg                                                  0xB800E4DC
#define  RIF_REG_dbg_ctrl17_inst_addr                                            "0x002D"
#define  set_RIF_REG_dbg_ctrl17_reg(data)                                        (*((volatile unsigned int*)RIF_REG_dbg_ctrl17_reg)=data)
#define  get_RIF_REG_dbg_ctrl17_reg                                              (*((volatile unsigned int*)RIF_REG_dbg_ctrl17_reg))
#define  RIF_REG_dbg_ctrl17_seg_dbg_sel1_shift                                   (24)
#define  RIF_REG_dbg_ctrl17_seg_dbg_sel0_shift                                   (20)
#define  RIF_REG_dbg_ctrl17_sao_dbg_sel1_shift                                   (16)
#define  RIF_REG_dbg_ctrl17_sao_dbg_sel0_shift                                   (12)
#define  RIF_REG_dbg_ctrl17_ime_dbg_sel1_shift                                   (6)
#define  RIF_REG_dbg_ctrl17_ime_dbg_sel0_shift                                   (0)
#define  RIF_REG_dbg_ctrl17_seg_dbg_sel1_mask                                    (0x0F000000)
#define  RIF_REG_dbg_ctrl17_seg_dbg_sel0_mask                                    (0x00F00000)
#define  RIF_REG_dbg_ctrl17_sao_dbg_sel1_mask                                    (0x000F0000)
#define  RIF_REG_dbg_ctrl17_sao_dbg_sel0_mask                                    (0x0000F000)
#define  RIF_REG_dbg_ctrl17_ime_dbg_sel1_mask                                    (0x00000FC0)
#define  RIF_REG_dbg_ctrl17_ime_dbg_sel0_mask                                    (0x0000003F)
#define  RIF_REG_dbg_ctrl17_seg_dbg_sel1(data)                                   (0x0F000000&((data)<<24))
#define  RIF_REG_dbg_ctrl17_seg_dbg_sel0(data)                                   (0x00F00000&((data)<<20))
#define  RIF_REG_dbg_ctrl17_sao_dbg_sel1(data)                                   (0x000F0000&((data)<<16))
#define  RIF_REG_dbg_ctrl17_sao_dbg_sel0(data)                                   (0x0000F000&((data)<<12))
#define  RIF_REG_dbg_ctrl17_ime_dbg_sel1(data)                                   (0x00000FC0&((data)<<6))
#define  RIF_REG_dbg_ctrl17_ime_dbg_sel0(data)                                   (0x0000003F&(data))
#define  RIF_REG_dbg_ctrl17_get_seg_dbg_sel1(data)                               ((0x0F000000&(data))>>24)
#define  RIF_REG_dbg_ctrl17_get_seg_dbg_sel0(data)                               ((0x00F00000&(data))>>20)
#define  RIF_REG_dbg_ctrl17_get_sao_dbg_sel1(data)                               ((0x000F0000&(data))>>16)
#define  RIF_REG_dbg_ctrl17_get_sao_dbg_sel0(data)                               ((0x0000F000&(data))>>12)
#define  RIF_REG_dbg_ctrl17_get_ime_dbg_sel1(data)                               ((0x00000FC0&(data))>>6)
#define  RIF_REG_dbg_ctrl17_get_ime_dbg_sel0(data)                               (0x0000003F&(data))

#define  RIF_REG_dbg_out                                                        0x1800E4E0
#define  RIF_REG_dbg_out_reg_addr                                                "0xB800E4E0"
#define  RIF_REG_dbg_out_reg                                                     0xB800E4E0
#define  RIF_REG_dbg_out_inst_addr                                               "0x002E"
#define  set_RIF_REG_dbg_out_reg(data)                                           (*((volatile unsigned int*)RIF_REG_dbg_out_reg)=data)
#define  get_RIF_REG_dbg_out_reg                                                 (*((volatile unsigned int*)RIF_REG_dbg_out_reg))
#define  RIF_REG_dbg_out_ve_dbg_out1_shift                                       (16)
#define  RIF_REG_dbg_out_ve_dbg_out0_shift                                       (0)
#define  RIF_REG_dbg_out_ve_dbg_out1_mask                                        (0xFFFF0000)
#define  RIF_REG_dbg_out_ve_dbg_out0_mask                                        (0x0000FFFF)
#define  RIF_REG_dbg_out_ve_dbg_out1(data)                                       (0xFFFF0000&((data)<<16))
#define  RIF_REG_dbg_out_ve_dbg_out0(data)                                       (0x0000FFFF&(data))
#define  RIF_REG_dbg_out_get_ve_dbg_out1(data)                                   ((0xFFFF0000&(data))>>16)
#define  RIF_REG_dbg_out_get_ve_dbg_out0(data)                                   (0x0000FFFF&(data))

#define  RIF_REG_dbg_ctrl1                                                      0x1800E4E4
#define  RIF_REG_dbg_ctrl1_reg_addr                                              "0xB800E4E4"
#define  RIF_REG_dbg_ctrl1_reg                                                   0xB800E4E4
#define  RIF_REG_dbg_ctrl1_inst_addr                                             "0x002F"
#define  set_RIF_REG_dbg_ctrl1_reg(data)                                         (*((volatile unsigned int*)RIF_REG_dbg_ctrl1_reg)=data)
#define  get_RIF_REG_dbg_ctrl1_reg                                               (*((volatile unsigned int*)RIF_REG_dbg_ctrl1_reg))
#define  RIF_REG_dbg_ctrl1_cache_dbg_sel1_shift                                  (28)
#define  RIF_REG_dbg_ctrl1_cache_dbg_sel0_shift                                  (24)
#define  RIF_REG_dbg_ctrl1_bs_dbg_sel1_shift                                     (20)
#define  RIF_REG_dbg_ctrl1_bs_dbg_sel0_shift                                     (16)
#define  RIF_REG_dbg_ctrl1_brg_dbg_sel1_shift                                    (12)
#define  RIF_REG_dbg_ctrl1_brg_dbg_sel0_shift                                    (8)
#define  RIF_REG_dbg_ctrl1_acdc_dbg_sel1_shift                                   (4)
#define  RIF_REG_dbg_ctrl1_acdc_dbg_sel0_shift                                   (0)
#define  RIF_REG_dbg_ctrl1_cache_dbg_sel1_mask                                   (0xF0000000)
#define  RIF_REG_dbg_ctrl1_cache_dbg_sel0_mask                                   (0x0F000000)
#define  RIF_REG_dbg_ctrl1_bs_dbg_sel1_mask                                      (0x00F00000)
#define  RIF_REG_dbg_ctrl1_bs_dbg_sel0_mask                                      (0x000F0000)
#define  RIF_REG_dbg_ctrl1_brg_dbg_sel1_mask                                     (0x0000F000)
#define  RIF_REG_dbg_ctrl1_brg_dbg_sel0_mask                                     (0x00000F00)
#define  RIF_REG_dbg_ctrl1_acdc_dbg_sel1_mask                                    (0x000000F0)
#define  RIF_REG_dbg_ctrl1_acdc_dbg_sel0_mask                                    (0x0000000F)
#define  RIF_REG_dbg_ctrl1_cache_dbg_sel1(data)                                  (0xF0000000&((data)<<28))
#define  RIF_REG_dbg_ctrl1_cache_dbg_sel0(data)                                  (0x0F000000&((data)<<24))
#define  RIF_REG_dbg_ctrl1_bs_dbg_sel1(data)                                     (0x00F00000&((data)<<20))
#define  RIF_REG_dbg_ctrl1_bs_dbg_sel0(data)                                     (0x000F0000&((data)<<16))
#define  RIF_REG_dbg_ctrl1_brg_dbg_sel1(data)                                    (0x0000F000&((data)<<12))
#define  RIF_REG_dbg_ctrl1_brg_dbg_sel0(data)                                    (0x00000F00&((data)<<8))
#define  RIF_REG_dbg_ctrl1_acdc_dbg_sel1(data)                                   (0x000000F0&((data)<<4))
#define  RIF_REG_dbg_ctrl1_acdc_dbg_sel0(data)                                   (0x0000000F&(data))
#define  RIF_REG_dbg_ctrl1_get_cache_dbg_sel1(data)                              ((0xF0000000&(data))>>28)
#define  RIF_REG_dbg_ctrl1_get_cache_dbg_sel0(data)                              ((0x0F000000&(data))>>24)
#define  RIF_REG_dbg_ctrl1_get_bs_dbg_sel1(data)                                 ((0x00F00000&(data))>>20)
#define  RIF_REG_dbg_ctrl1_get_bs_dbg_sel0(data)                                 ((0x000F0000&(data))>>16)
#define  RIF_REG_dbg_ctrl1_get_brg_dbg_sel1(data)                                ((0x0000F000&(data))>>12)
#define  RIF_REG_dbg_ctrl1_get_brg_dbg_sel0(data)                                ((0x00000F00&(data))>>8)
#define  RIF_REG_dbg_ctrl1_get_acdc_dbg_sel1(data)                               ((0x000000F0&(data))>>4)
#define  RIF_REG_dbg_ctrl1_get_acdc_dbg_sel0(data)                               (0x0000000F&(data))

#define  RIF_REG_dbg_ctrl2                                                      0x1800E4E8
#define  RIF_REG_dbg_ctrl2_reg_addr                                              "0xB800E4E8"
#define  RIF_REG_dbg_ctrl2_reg                                                   0xB800E4E8
#define  RIF_REG_dbg_ctrl2_inst_addr                                             "0x0030"
#define  set_RIF_REG_dbg_ctrl2_reg(data)                                         (*((volatile unsigned int*)RIF_REG_dbg_ctrl2_reg)=data)
#define  get_RIF_REG_dbg_ctrl2_reg                                               (*((volatile unsigned int*)RIF_REG_dbg_ctrl2_reg))
#define  RIF_REG_dbg_ctrl2_bs_dbg_sel3_shift                                     (26)
#define  RIF_REG_dbg_ctrl2_bs_dbg_sel2_shift                                     (24)
#define  RIF_REG_dbg_ctrl2_cm_dbg_sel1_shift                                     (20)
#define  RIF_REG_dbg_ctrl2_cm_dbg_sel0_shift                                     (16)
#define  RIF_REG_dbg_ctrl2_cabacp3_dbg_sel1_shift                                (12)
#define  RIF_REG_dbg_ctrl2_cabacp3_dbg_sel0_shift                                (8)
#define  RIF_REG_dbg_ctrl2_cabacp2_dbg_sel1_shift                                (4)
#define  RIF_REG_dbg_ctrl2_cabacp2_dbg_sel0_shift                                (0)
#define  RIF_REG_dbg_ctrl2_bs_dbg_sel3_mask                                      (0x0C000000)
#define  RIF_REG_dbg_ctrl2_bs_dbg_sel2_mask                                      (0x03000000)
#define  RIF_REG_dbg_ctrl2_cm_dbg_sel1_mask                                      (0x00F00000)
#define  RIF_REG_dbg_ctrl2_cm_dbg_sel0_mask                                      (0x000F0000)
#define  RIF_REG_dbg_ctrl2_cabacp3_dbg_sel1_mask                                 (0x0000F000)
#define  RIF_REG_dbg_ctrl2_cabacp3_dbg_sel0_mask                                 (0x00000F00)
#define  RIF_REG_dbg_ctrl2_cabacp2_dbg_sel1_mask                                 (0x000000F0)
#define  RIF_REG_dbg_ctrl2_cabacp2_dbg_sel0_mask                                 (0x0000000F)
#define  RIF_REG_dbg_ctrl2_bs_dbg_sel3(data)                                     (0x0C000000&((data)<<26))
#define  RIF_REG_dbg_ctrl2_bs_dbg_sel2(data)                                     (0x03000000&((data)<<24))
#define  RIF_REG_dbg_ctrl2_cm_dbg_sel1(data)                                     (0x00F00000&((data)<<20))
#define  RIF_REG_dbg_ctrl2_cm_dbg_sel0(data)                                     (0x000F0000&((data)<<16))
#define  RIF_REG_dbg_ctrl2_cabacp3_dbg_sel1(data)                                (0x0000F000&((data)<<12))
#define  RIF_REG_dbg_ctrl2_cabacp3_dbg_sel0(data)                                (0x00000F00&((data)<<8))
#define  RIF_REG_dbg_ctrl2_cabacp2_dbg_sel1(data)                                (0x000000F0&((data)<<4))
#define  RIF_REG_dbg_ctrl2_cabacp2_dbg_sel0(data)                                (0x0000000F&(data))
#define  RIF_REG_dbg_ctrl2_get_bs_dbg_sel3(data)                                 ((0x0C000000&(data))>>26)
#define  RIF_REG_dbg_ctrl2_get_bs_dbg_sel2(data)                                 ((0x03000000&(data))>>24)
#define  RIF_REG_dbg_ctrl2_get_cm_dbg_sel1(data)                                 ((0x00F00000&(data))>>20)
#define  RIF_REG_dbg_ctrl2_get_cm_dbg_sel0(data)                                 ((0x000F0000&(data))>>16)
#define  RIF_REG_dbg_ctrl2_get_cabacp3_dbg_sel1(data)                            ((0x0000F000&(data))>>12)
#define  RIF_REG_dbg_ctrl2_get_cabacp3_dbg_sel0(data)                            ((0x00000F00&(data))>>8)
#define  RIF_REG_dbg_ctrl2_get_cabacp2_dbg_sel1(data)                            ((0x000000F0&(data))>>4)
#define  RIF_REG_dbg_ctrl2_get_cabacp2_dbg_sel0(data)                            (0x0000000F&(data))

#define  RIF_REG_dbg_ctrl3                                                      0x1800E4EC
#define  RIF_REG_dbg_ctrl3_reg_addr                                              "0xB800E4EC"
#define  RIF_REG_dbg_ctrl3_reg                                                   0xB800E4EC
#define  RIF_REG_dbg_ctrl3_inst_addr                                             "0x0031"
#define  set_RIF_REG_dbg_ctrl3_reg(data)                                         (*((volatile unsigned int*)RIF_REG_dbg_ctrl3_reg)=data)
#define  get_RIF_REG_dbg_ctrl3_reg                                               (*((volatile unsigned int*)RIF_REG_dbg_ctrl3_reg))
#define  RIF_REG_dbg_ctrl3_ndb_dbg_sel1_shift                                    (28)
#define  RIF_REG_dbg_ctrl3_ndb_dbg_sel0_shift                                    (24)
#define  RIF_REG_dbg_ctrl3_rif_dbg_sel1_shift                                    (20)
#define  RIF_REG_dbg_ctrl3_rif_dbg_sel0_shift                                    (16)
#define  RIF_REG_dbg_ctrl3_itblk_dbg_sel1_shift                                  (12)
#define  RIF_REG_dbg_ctrl3_itblk_dbg_sel0_shift                                  (8)
#define  RIF_REG_dbg_ctrl3_img_dbg_sel1_shift                                    (4)
#define  RIF_REG_dbg_ctrl3_img_dbg_sel0_shift                                    (0)
#define  RIF_REG_dbg_ctrl3_ndb_dbg_sel1_mask                                     (0xF0000000)
#define  RIF_REG_dbg_ctrl3_ndb_dbg_sel0_mask                                     (0x0F000000)
#define  RIF_REG_dbg_ctrl3_rif_dbg_sel1_mask                                     (0x00F00000)
#define  RIF_REG_dbg_ctrl3_rif_dbg_sel0_mask                                     (0x000F0000)
#define  RIF_REG_dbg_ctrl3_itblk_dbg_sel1_mask                                   (0x0000F000)
#define  RIF_REG_dbg_ctrl3_itblk_dbg_sel0_mask                                   (0x00000F00)
#define  RIF_REG_dbg_ctrl3_img_dbg_sel1_mask                                     (0x000000F0)
#define  RIF_REG_dbg_ctrl3_img_dbg_sel0_mask                                     (0x0000000F)
#define  RIF_REG_dbg_ctrl3_ndb_dbg_sel1(data)                                    (0xF0000000&((data)<<28))
#define  RIF_REG_dbg_ctrl3_ndb_dbg_sel0(data)                                    (0x0F000000&((data)<<24))
#define  RIF_REG_dbg_ctrl3_rif_dbg_sel1(data)                                    (0x00F00000&((data)<<20))
#define  RIF_REG_dbg_ctrl3_rif_dbg_sel0(data)                                    (0x000F0000&((data)<<16))
#define  RIF_REG_dbg_ctrl3_itblk_dbg_sel1(data)                                  (0x0000F000&((data)<<12))
#define  RIF_REG_dbg_ctrl3_itblk_dbg_sel0(data)                                  (0x00000F00&((data)<<8))
#define  RIF_REG_dbg_ctrl3_img_dbg_sel1(data)                                    (0x000000F0&((data)<<4))
#define  RIF_REG_dbg_ctrl3_img_dbg_sel0(data)                                    (0x0000000F&(data))
#define  RIF_REG_dbg_ctrl3_get_ndb_dbg_sel1(data)                                ((0xF0000000&(data))>>28)
#define  RIF_REG_dbg_ctrl3_get_ndb_dbg_sel0(data)                                ((0x0F000000&(data))>>24)
#define  RIF_REG_dbg_ctrl3_get_rif_dbg_sel1(data)                                ((0x00F00000&(data))>>20)
#define  RIF_REG_dbg_ctrl3_get_rif_dbg_sel0(data)                                ((0x000F0000&(data))>>16)
#define  RIF_REG_dbg_ctrl3_get_itblk_dbg_sel1(data)                              ((0x0000F000&(data))>>12)
#define  RIF_REG_dbg_ctrl3_get_itblk_dbg_sel0(data)                              ((0x00000F00&(data))>>8)
#define  RIF_REG_dbg_ctrl3_get_img_dbg_sel1(data)                                ((0x000000F0&(data))>>4)
#define  RIF_REG_dbg_ctrl3_get_img_dbg_sel0(data)                                (0x0000000F&(data))

#define  RIF_REG_dbg_ctrl4                                                      0x1800E4F0
#define  RIF_REG_dbg_ctrl4_reg_addr                                              "0xB800E4F0"
#define  RIF_REG_dbg_ctrl4_reg                                                   0xB800E4F0
#define  RIF_REG_dbg_ctrl4_inst_addr                                             "0x0032"
#define  set_RIF_REG_dbg_ctrl4_reg(data)                                         (*((volatile unsigned int*)RIF_REG_dbg_ctrl4_reg)=data)
#define  get_RIF_REG_dbg_ctrl4_reg                                               (*((volatile unsigned int*)RIF_REG_dbg_ctrl4_reg))
#define  RIF_REG_dbg_ctrl4_rl_dbg_sel1_shift                                     (28)
#define  RIF_REG_dbg_ctrl4_rl_dbg_sel0_shift                                     (24)
#define  RIF_REG_dbg_ctrl4_vld_dbg_sel1_shift                                    (20)
#define  RIF_REG_dbg_ctrl4_vld_dbg_sel0_shift                                    (16)
#define  RIF_REG_dbg_ctrl4_arb_dbg_sel1_shift                                    (12)
#define  RIF_REG_dbg_ctrl4_arb_dbg_sel0_shift                                    (8)
#define  RIF_REG_dbg_ctrl4_vm1_dbg_sel1_shift                                    (4)
#define  RIF_REG_dbg_ctrl4_vm1_dbg_sel0_shift                                    (0)
#define  RIF_REG_dbg_ctrl4_rl_dbg_sel1_mask                                      (0xF0000000)
#define  RIF_REG_dbg_ctrl4_rl_dbg_sel0_mask                                      (0x0F000000)
#define  RIF_REG_dbg_ctrl4_vld_dbg_sel1_mask                                     (0x00F00000)
#define  RIF_REG_dbg_ctrl4_vld_dbg_sel0_mask                                     (0x000F0000)
#define  RIF_REG_dbg_ctrl4_arb_dbg_sel1_mask                                     (0x0000F000)
#define  RIF_REG_dbg_ctrl4_arb_dbg_sel0_mask                                     (0x00000F00)
#define  RIF_REG_dbg_ctrl4_vm1_dbg_sel1_mask                                     (0x000000F0)
#define  RIF_REG_dbg_ctrl4_vm1_dbg_sel0_mask                                     (0x0000000F)
#define  RIF_REG_dbg_ctrl4_rl_dbg_sel1(data)                                     (0xF0000000&((data)<<28))
#define  RIF_REG_dbg_ctrl4_rl_dbg_sel0(data)                                     (0x0F000000&((data)<<24))
#define  RIF_REG_dbg_ctrl4_vld_dbg_sel1(data)                                    (0x00F00000&((data)<<20))
#define  RIF_REG_dbg_ctrl4_vld_dbg_sel0(data)                                    (0x000F0000&((data)<<16))
#define  RIF_REG_dbg_ctrl4_arb_dbg_sel1(data)                                    (0x0000F000&((data)<<12))
#define  RIF_REG_dbg_ctrl4_arb_dbg_sel0(data)                                    (0x00000F00&((data)<<8))
#define  RIF_REG_dbg_ctrl4_vm1_dbg_sel1(data)                                    (0x000000F0&((data)<<4))
#define  RIF_REG_dbg_ctrl4_vm1_dbg_sel0(data)                                    (0x0000000F&(data))
#define  RIF_REG_dbg_ctrl4_get_rl_dbg_sel1(data)                                 ((0xF0000000&(data))>>28)
#define  RIF_REG_dbg_ctrl4_get_rl_dbg_sel0(data)                                 ((0x0F000000&(data))>>24)
#define  RIF_REG_dbg_ctrl4_get_vld_dbg_sel1(data)                                ((0x00F00000&(data))>>20)
#define  RIF_REG_dbg_ctrl4_get_vld_dbg_sel0(data)                                ((0x000F0000&(data))>>16)
#define  RIF_REG_dbg_ctrl4_get_arb_dbg_sel1(data)                                ((0x0000F000&(data))>>12)
#define  RIF_REG_dbg_ctrl4_get_arb_dbg_sel0(data)                                ((0x00000F00&(data))>>8)
#define  RIF_REG_dbg_ctrl4_get_vm1_dbg_sel1(data)                                ((0x000000F0&(data))>>4)
#define  RIF_REG_dbg_ctrl4_get_vm1_dbg_sel0(data)                                (0x0000000F&(data))

#define  RIF_REG_dbg_ctrl5                                                      0x1800E4F4
#define  RIF_REG_dbg_ctrl5_reg_addr                                              "0xB800E4F4"
#define  RIF_REG_dbg_ctrl5_reg                                                   0xB800E4F4
#define  RIF_REG_dbg_ctrl5_inst_addr                                             "0x0033"
#define  set_RIF_REG_dbg_ctrl5_reg(data)                                         (*((volatile unsigned int*)RIF_REG_dbg_ctrl5_reg)=data)
#define  get_RIF_REG_dbg_ctrl5_reg                                               (*((volatile unsigned int*)RIF_REG_dbg_ctrl5_reg))
#define  RIF_REG_dbg_ctrl5_deblk_dbg_sel1_shift                                  (26)
#define  RIF_REG_dbg_ctrl5_deblk_dbg_sel0_shift                                  (20)
#define  RIF_REG_dbg_ctrl5_mvd_dbg_sel1_shift                                    (16)
#define  RIF_REG_dbg_ctrl5_mvd_dbg_sel0_shift                                    (12)
#define  RIF_REG_dbg_ctrl5_prd_dbg_sel1_shift                                    (6)
#define  RIF_REG_dbg_ctrl5_prd_dbg_sel0_shift                                    (0)
#define  RIF_REG_dbg_ctrl5_deblk_dbg_sel1_mask                                   (0xFC000000)
#define  RIF_REG_dbg_ctrl5_deblk_dbg_sel0_mask                                   (0x03F00000)
#define  RIF_REG_dbg_ctrl5_mvd_dbg_sel1_mask                                     (0x000F0000)
#define  RIF_REG_dbg_ctrl5_mvd_dbg_sel0_mask                                     (0x0000F000)
#define  RIF_REG_dbg_ctrl5_prd_dbg_sel1_mask                                     (0x00000FC0)
#define  RIF_REG_dbg_ctrl5_prd_dbg_sel0_mask                                     (0x0000003F)
#define  RIF_REG_dbg_ctrl5_deblk_dbg_sel1(data)                                  (0xFC000000&((data)<<26))
#define  RIF_REG_dbg_ctrl5_deblk_dbg_sel0(data)                                  (0x03F00000&((data)<<20))
#define  RIF_REG_dbg_ctrl5_mvd_dbg_sel1(data)                                    (0x000F0000&((data)<<16))
#define  RIF_REG_dbg_ctrl5_mvd_dbg_sel0(data)                                    (0x0000F000&((data)<<12))
#define  RIF_REG_dbg_ctrl5_prd_dbg_sel1(data)                                    (0x00000FC0&((data)<<6))
#define  RIF_REG_dbg_ctrl5_prd_dbg_sel0(data)                                    (0x0000003F&(data))
#define  RIF_REG_dbg_ctrl5_get_deblk_dbg_sel1(data)                              ((0xFC000000&(data))>>26)
#define  RIF_REG_dbg_ctrl5_get_deblk_dbg_sel0(data)                              ((0x03F00000&(data))>>20)
#define  RIF_REG_dbg_ctrl5_get_mvd_dbg_sel1(data)                                ((0x000F0000&(data))>>16)
#define  RIF_REG_dbg_ctrl5_get_mvd_dbg_sel0(data)                                ((0x0000F000&(data))>>12)
#define  RIF_REG_dbg_ctrl5_get_prd_dbg_sel1(data)                                ((0x00000FC0&(data))>>6)
#define  RIF_REG_dbg_ctrl5_get_prd_dbg_sel0(data)                                (0x0000003F&(data))

#define  RIF_REG_fpga_dbg1                                                      0x1800E4F8
#define  RIF_REG_fpga_dbg1_reg_addr                                              "0xB800E4F8"
#define  RIF_REG_fpga_dbg1_reg                                                   0xB800E4F8
#define  RIF_REG_fpga_dbg1_inst_addr                                             "0x0034"
#define  set_RIF_REG_fpga_dbg1_reg(data)                                         (*((volatile unsigned int*)RIF_REG_fpga_dbg1_reg)=data)
#define  get_RIF_REG_fpga_dbg1_reg                                               (*((volatile unsigned int*)RIF_REG_fpga_dbg1_reg))
#define  RIF_REG_fpga_dbg1_clmp_busy_shift                                       (30)
#define  RIF_REG_fpga_dbg1_alf_busy_shift                                        (29)
#define  RIF_REG_fpga_dbg1_dcmprs_busy_shift                                     (28)
#define  RIF_REG_fpga_dbg1_cmprs_busy_shift                                      (27)
#define  RIF_REG_fpga_dbg1_seg_busy_shift                                        (26)
#define  RIF_REG_fpga_dbg1_sao_busy_shift                                        (25)
#define  RIF_REG_fpga_dbg1_vm2_busy_shift                                        (24)
#define  RIF_REG_fpga_dbg1_vp8p2_busy_shift                                      (23)
#define  RIF_REG_fpga_dbg1_ndbp2_busy_shift                                      (22)
#define  RIF_REG_fpga_dbg1_ipmd_busy_shift                                       (21)
#define  RIF_REG_fpga_dbg1_fme_busy_shift                                        (20)
#define  RIF_REG_fpga_dbg1_vlc_busy_shift                                        (19)
#define  RIF_REG_fpga_dbg1_gcoeff_busy_shift                                     (18)
#define  RIF_REG_fpga_dbg1_emd_busy_shift                                        (17)
#define  RIF_REG_fpga_dbg1_imedma_busy_shift                                     (16)
#define  RIF_REG_fpga_dbg1_ime_busy_shift                                        (15)
#define  RIF_REG_fpga_dbg1_cache_busy_shift                                      (14)
#define  RIF_REG_fpga_dbg1_brg_busy_shift                                        (13)
#define  RIF_REG_fpga_dbg1_ndb_busy_shift                                        (12)
#define  RIF_REG_fpga_dbg1_bsfifo_busy_shift                                     (11)
#define  RIF_REG_fpga_dbg1_img_busy_shift                                        (10)
#define  RIF_REG_fpga_dbg1_vm1_busy_shift                                        (9)
#define  RIF_REG_fpga_dbg1_deblk_busy_shift                                      (8)
#define  RIF_REG_fpga_dbg1_rl_busy_shift                                         (7)
#define  RIF_REG_fpga_dbg1_pred_busy_shift                                       (6)
#define  RIF_REG_fpga_dbg1_mvd_busy_shift                                        (5)
#define  RIF_REG_fpga_dbg1_itblk_busy_shift                                      (4)
#define  RIF_REG_fpga_dbg1_acdc_busy_shift                                       (3)
#define  RIF_REG_fpga_dbg1_cabacp2_busy_shift                                    (2)
#define  RIF_REG_fpga_dbg1_vld_busy_shift                                        (1)
#define  RIF_REG_fpga_dbg1_rifvld_busy_shift                                     (0)
#define  RIF_REG_fpga_dbg1_clmp_busy_mask                                        (0x40000000)
#define  RIF_REG_fpga_dbg1_alf_busy_mask                                         (0x20000000)
#define  RIF_REG_fpga_dbg1_dcmprs_busy_mask                                      (0x10000000)
#define  RIF_REG_fpga_dbg1_cmprs_busy_mask                                       (0x08000000)
#define  RIF_REG_fpga_dbg1_seg_busy_mask                                         (0x04000000)
#define  RIF_REG_fpga_dbg1_sao_busy_mask                                         (0x02000000)
#define  RIF_REG_fpga_dbg1_vm2_busy_mask                                         (0x01000000)
#define  RIF_REG_fpga_dbg1_vp8p2_busy_mask                                       (0x00800000)
#define  RIF_REG_fpga_dbg1_ndbp2_busy_mask                                       (0x00400000)
#define  RIF_REG_fpga_dbg1_ipmd_busy_mask                                        (0x00200000)
#define  RIF_REG_fpga_dbg1_fme_busy_mask                                         (0x00100000)
#define  RIF_REG_fpga_dbg1_vlc_busy_mask                                         (0x00080000)
#define  RIF_REG_fpga_dbg1_gcoeff_busy_mask                                      (0x00040000)
#define  RIF_REG_fpga_dbg1_emd_busy_mask                                         (0x00020000)
#define  RIF_REG_fpga_dbg1_imedma_busy_mask                                      (0x00010000)
#define  RIF_REG_fpga_dbg1_ime_busy_mask                                         (0x00008000)
#define  RIF_REG_fpga_dbg1_cache_busy_mask                                       (0x00004000)
#define  RIF_REG_fpga_dbg1_brg_busy_mask                                         (0x00002000)
#define  RIF_REG_fpga_dbg1_ndb_busy_mask                                         (0x00001000)
#define  RIF_REG_fpga_dbg1_bsfifo_busy_mask                                      (0x00000800)
#define  RIF_REG_fpga_dbg1_img_busy_mask                                         (0x00000400)
#define  RIF_REG_fpga_dbg1_vm1_busy_mask                                         (0x00000200)
#define  RIF_REG_fpga_dbg1_deblk_busy_mask                                       (0x00000100)
#define  RIF_REG_fpga_dbg1_rl_busy_mask                                          (0x00000080)
#define  RIF_REG_fpga_dbg1_pred_busy_mask                                        (0x00000040)
#define  RIF_REG_fpga_dbg1_mvd_busy_mask                                         (0x00000020)
#define  RIF_REG_fpga_dbg1_itblk_busy_mask                                       (0x00000010)
#define  RIF_REG_fpga_dbg1_acdc_busy_mask                                        (0x00000008)
#define  RIF_REG_fpga_dbg1_cabacp2_busy_mask                                     (0x00000004)
#define  RIF_REG_fpga_dbg1_vld_busy_mask                                         (0x00000002)
#define  RIF_REG_fpga_dbg1_rifvld_busy_mask                                      (0x00000001)
#define  RIF_REG_fpga_dbg1_clmp_busy(data)                                       (0x40000000&((data)<<30))
#define  RIF_REG_fpga_dbg1_alf_busy(data)                                        (0x20000000&((data)<<29))
#define  RIF_REG_fpga_dbg1_dcmprs_busy(data)                                     (0x10000000&((data)<<28))
#define  RIF_REG_fpga_dbg1_cmprs_busy(data)                                      (0x08000000&((data)<<27))
#define  RIF_REG_fpga_dbg1_seg_busy(data)                                        (0x04000000&((data)<<26))
#define  RIF_REG_fpga_dbg1_sao_busy(data)                                        (0x02000000&((data)<<25))
#define  RIF_REG_fpga_dbg1_vm2_busy(data)                                        (0x01000000&((data)<<24))
#define  RIF_REG_fpga_dbg1_vp8p2_busy(data)                                      (0x00800000&((data)<<23))
#define  RIF_REG_fpga_dbg1_ndbp2_busy(data)                                      (0x00400000&((data)<<22))
#define  RIF_REG_fpga_dbg1_ipmd_busy(data)                                       (0x00200000&((data)<<21))
#define  RIF_REG_fpga_dbg1_fme_busy(data)                                        (0x00100000&((data)<<20))
#define  RIF_REG_fpga_dbg1_vlc_busy(data)                                        (0x00080000&((data)<<19))
#define  RIF_REG_fpga_dbg1_gcoeff_busy(data)                                     (0x00040000&((data)<<18))
#define  RIF_REG_fpga_dbg1_emd_busy(data)                                        (0x00020000&((data)<<17))
#define  RIF_REG_fpga_dbg1_imedma_busy(data)                                     (0x00010000&((data)<<16))
#define  RIF_REG_fpga_dbg1_ime_busy(data)                                        (0x00008000&((data)<<15))
#define  RIF_REG_fpga_dbg1_cache_busy(data)                                      (0x00004000&((data)<<14))
#define  RIF_REG_fpga_dbg1_brg_busy(data)                                        (0x00002000&((data)<<13))
#define  RIF_REG_fpga_dbg1_ndb_busy(data)                                        (0x00001000&((data)<<12))
#define  RIF_REG_fpga_dbg1_bsfifo_busy(data)                                     (0x00000800&((data)<<11))
#define  RIF_REG_fpga_dbg1_img_busy(data)                                        (0x00000400&((data)<<10))
#define  RIF_REG_fpga_dbg1_vm1_busy(data)                                        (0x00000200&((data)<<9))
#define  RIF_REG_fpga_dbg1_deblk_busy(data)                                      (0x00000100&((data)<<8))
#define  RIF_REG_fpga_dbg1_rl_busy(data)                                         (0x00000080&((data)<<7))
#define  RIF_REG_fpga_dbg1_pred_busy(data)                                       (0x00000040&((data)<<6))
#define  RIF_REG_fpga_dbg1_mvd_busy(data)                                        (0x00000020&((data)<<5))
#define  RIF_REG_fpga_dbg1_itblk_busy(data)                                      (0x00000010&((data)<<4))
#define  RIF_REG_fpga_dbg1_acdc_busy(data)                                       (0x00000008&((data)<<3))
#define  RIF_REG_fpga_dbg1_cabacp2_busy(data)                                    (0x00000004&((data)<<2))
#define  RIF_REG_fpga_dbg1_vld_busy(data)                                        (0x00000002&((data)<<1))
#define  RIF_REG_fpga_dbg1_rifvld_busy(data)                                     (0x00000001&(data))
#define  RIF_REG_fpga_dbg1_get_clmp_busy(data)                                   ((0x40000000&(data))>>30)
#define  RIF_REG_fpga_dbg1_get_alf_busy(data)                                    ((0x20000000&(data))>>29)
#define  RIF_REG_fpga_dbg1_get_dcmprs_busy(data)                                 ((0x10000000&(data))>>28)
#define  RIF_REG_fpga_dbg1_get_cmprs_busy(data)                                  ((0x08000000&(data))>>27)
#define  RIF_REG_fpga_dbg1_get_seg_busy(data)                                    ((0x04000000&(data))>>26)
#define  RIF_REG_fpga_dbg1_get_sao_busy(data)                                    ((0x02000000&(data))>>25)
#define  RIF_REG_fpga_dbg1_get_vm2_busy(data)                                    ((0x01000000&(data))>>24)
#define  RIF_REG_fpga_dbg1_get_vp8p2_busy(data)                                  ((0x00800000&(data))>>23)
#define  RIF_REG_fpga_dbg1_get_ndbp2_busy(data)                                  ((0x00400000&(data))>>22)
#define  RIF_REG_fpga_dbg1_get_ipmd_busy(data)                                   ((0x00200000&(data))>>21)
#define  RIF_REG_fpga_dbg1_get_fme_busy(data)                                    ((0x00100000&(data))>>20)
#define  RIF_REG_fpga_dbg1_get_vlc_busy(data)                                    ((0x00080000&(data))>>19)
#define  RIF_REG_fpga_dbg1_get_gcoeff_busy(data)                                 ((0x00040000&(data))>>18)
#define  RIF_REG_fpga_dbg1_get_emd_busy(data)                                    ((0x00020000&(data))>>17)
#define  RIF_REG_fpga_dbg1_get_imedma_busy(data)                                 ((0x00010000&(data))>>16)
#define  RIF_REG_fpga_dbg1_get_ime_busy(data)                                    ((0x00008000&(data))>>15)
#define  RIF_REG_fpga_dbg1_get_cache_busy(data)                                  ((0x00004000&(data))>>14)
#define  RIF_REG_fpga_dbg1_get_brg_busy(data)                                    ((0x00002000&(data))>>13)
#define  RIF_REG_fpga_dbg1_get_ndb_busy(data)                                    ((0x00001000&(data))>>12)
#define  RIF_REG_fpga_dbg1_get_bsfifo_busy(data)                                 ((0x00000800&(data))>>11)
#define  RIF_REG_fpga_dbg1_get_img_busy(data)                                    ((0x00000400&(data))>>10)
#define  RIF_REG_fpga_dbg1_get_vm1_busy(data)                                    ((0x00000200&(data))>>9)
#define  RIF_REG_fpga_dbg1_get_deblk_busy(data)                                  ((0x00000100&(data))>>8)
#define  RIF_REG_fpga_dbg1_get_rl_busy(data)                                     ((0x00000080&(data))>>7)
#define  RIF_REG_fpga_dbg1_get_pred_busy(data)                                   ((0x00000040&(data))>>6)
#define  RIF_REG_fpga_dbg1_get_mvd_busy(data)                                    ((0x00000020&(data))>>5)
#define  RIF_REG_fpga_dbg1_get_itblk_busy(data)                                  ((0x00000010&(data))>>4)
#define  RIF_REG_fpga_dbg1_get_acdc_busy(data)                                   ((0x00000008&(data))>>3)
#define  RIF_REG_fpga_dbg1_get_cabacp2_busy(data)                                ((0x00000004&(data))>>2)
#define  RIF_REG_fpga_dbg1_get_vld_busy(data)                                    ((0x00000002&(data))>>1)
#define  RIF_REG_fpga_dbg1_get_rifvld_busy(data)                                 (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======RIF_REG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ve_only_fpga_reset:1;
        RBus_UInt32  ve_fpga_reset:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dbg_out_sel1:5;
        RBus_UInt32  dbg_out_sel0:5;
        RBus_UInt32  dbg_out_en:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  inten_vcpu2:1;
        RBus_UInt32  encode_en:1;
        RBus_UInt32  ve_soft_reset:1;
        RBus_UInt32  vm_idle:1;
        RBus_UInt32  decode_en:1;
        RBus_UInt32  haltve_done:1;
        RBus_UInt32  haltve:1;
        RBus_UInt32  veidle:1;
        RBus_UInt32  inten:1;
        RBus_UInt32  reset_ptr:1;
    };
}rif_reg_ve_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_blk_wrap_int:1;
        RBus_UInt32  first_error_b4:1;
        RBus_UInt32  first_error_b3:1;
        RBus_UInt32  first_error_b2:1;
        RBus_UInt32  first_error_b1:1;
        RBus_UInt32  first_error_b0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dcomp_core_irq:1;
        RBus_UInt32  comp_core_irq:1;
        RBus_UInt32  hevc_p3_hang_int:1;
        RBus_UInt32  hevc_dec_done_int:1;
        RBus_UInt32  ime_int:1;
        RBus_UInt32  ipmd_err:1;
        RBus_UInt32  gc_err:1;
        RBus_UInt32  cmd_fifo_full_int:1;
        RBus_UInt32  rd_rslt_hang_int:1;
        RBus_UInt32  rl_hang_int:1;
        RBus_UInt32  pred_hang_int:1;
        RBus_UInt32  mb_last_int:1;
        RBus_UInt32  mvd_vc1_intfd_err:1;
        RBus_UInt32  mvd_h264_direct_err:1;
        RBus_UInt32  mvd_h264_mv_err:1;
        RBus_UInt32  bs2_fifo_err:1;
        RBus_UInt32  m64coeff:1;
        RBus_UInt32  rstff_oflow:1;
        RBus_UInt32  rstff_empty:1;
        RBus_UInt32  bitst_fifo:1;
        RBus_UInt32  scode_limit:1;
        RBus_UInt32  dec_err:1;
        RBus_UInt32  write_data:1;
    };
}rif_reg_ve_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  ve_blk_wrap_ie:1;
        RBus_UInt32  dcomp_core_irq_ie:1;
        RBus_UInt32  comp_core_irq_ie:1;
        RBus_UInt32  hevc_p3_hang_int_ie:1;
        RBus_UInt32  hevc_dec_done_int_ie:1;
        RBus_UInt32  gc_interrupt_on:1;
        RBus_UInt32  ipmd_interrupt_on:1;
        RBus_UInt32  ime_int_ie:1;
        RBus_UInt32  ipmd_err_ie:1;
        RBus_UInt32  gc_err_ie:1;
        RBus_UInt32  cmd_fifo_full_int_ie:1;
        RBus_UInt32  rd_rslt_hang_int_ie:1;
        RBus_UInt32  rl_hang_int_ie:1;
        RBus_UInt32  pred_hang_int_ie:1;
        RBus_UInt32  mb_last_int_ie:1;
        RBus_UInt32  mvd_vc1_intfd_ie:1;
        RBus_UInt32  mvd_h264_direct_ie:1;
        RBus_UInt32  mvd_h264_mv_ie:1;
        RBus_UInt32  bs2_fifo_err_ie:1;
        RBus_UInt32  m64coeff_ie:1;
        RBus_UInt32  rstff_oflow_ie:1;
        RBus_UInt32  rstff_empty_ie:1;
        RBus_UInt32  bitst_fifo_ie:1;
        RBus_UInt32  scode_limit_ie:1;
        RBus_UInt32  dec_err_ie:1;
        RBus_UInt32  write_data:1;
    };
}rif_reg_ve_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  debk_inst_cnt:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  pred_inst_cnt:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  dmab_inst_cnt:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  dmaa_inst_cnt:6;
    };
}rif_reg_ve_fifostatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  act_rslt_in_fifo:5;
        RBus_UInt32  rslt_fifo_cnt:5;
        RBus_UInt32  img_fifo_cnt:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  dec_inst_cnt:6;
        RBus_UInt32  res2:8;
    };
}rif_reg_ve_fifostat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  rslt_timer:24;
    };
}rif_reg_ve_rslt_timer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  cmd_timer:24;
    };
}rif_reg_ve_cmd_timer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decimate_en:1;
        RBus_UInt32  lossy_en:1;
        RBus_UInt32  cmprs_head_remap:1;
        RBus_UInt32  mode32x1:1;
        RBus_UInt32  gpu_out_en:1;
        RBus_UInt32  dual_core_dmy_row_method:1;
        RBus_UInt32  comp_wrap_width:10;
        RBus_UInt32  compression_en:1;
        RBus_UInt32  multicoreenable:2;
        RBus_UInt32  corenum:2;
        RBus_UInt32  mode8x2_16b_align:1;
        RBus_UInt32  mode8x2:1;
        RBus_UInt32  monochrome:1;
        RBus_UInt32  level:1;
        RBus_UInt32  profile:2;
        RBus_UInt32  coding_type:5;
    };
}rif_reg_dec_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decimate_ratio:2;
        RBus_UInt32  filter_level:6;
        RBus_UInt32  allow_high_precision_mv:1;
        RBus_UInt32  vp9_seg_en:1;
        RBus_UInt32  vp8_bicubic_filtering:1;
        RBus_UInt32  bottom_field_flag:1;
        RBus_UInt32  field_pic_flag:1;
        RBus_UInt32  picmb_h:9;
        RBus_UInt32  picmb_w:10;
    };
}rif_reg_picinfo1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  inc_cah_head_bl:1;
        RBus_UInt32  inc_cah_data_bl:1;
        RBus_UInt32  ch_comp_wrap_width:10;
        RBus_UInt32  mode16x1:1;
        RBus_UInt32  constrainted_intra_pred_flag:1;
        RBus_UInt32  weighted_pred_flag:1;
        RBus_UInt32  weighted_bipred_idc:2;
        RBus_UInt32  frame_mbs_only_flag:1;
        RBus_UInt32  mb_adaptive_frame_field_flag:1;
    };
}rif_reg_h264piccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  shvc_enable:1;
        RBus_UInt32  chroma_bits:2;
        RBus_UInt32  luma_bits:2;
        RBus_UInt32  hevc_dbg_mode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mincbsize:2;
        RBus_UInt32  ctbsize:2;
        RBus_UInt32  min_trafo_size:2;
        RBus_UInt32  max_trafo_size:2;
        RBus_UInt32  max_trans_hier_depth_inter:3;
        RBus_UInt32  max_trans_hier_depth_intra:3;
        RBus_UInt32  amp_enabled_flag:1;
        RBus_UInt32  sample_adaptive_offset_enabled_flag:1;
        RBus_UInt32  pcm_enabled_flag:1;
        RBus_UInt32  min_ipcm_cbsize:2;
        RBus_UInt32  max_ipcm_cbsize:2;
        RBus_UInt32  pcm_loop_filter_disable_flag:1;
        RBus_UInt32  strong_intra_smoothing_enable_flag:1;
    };
}rif_reg_hevcseqcntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  decomp_en:1;
        RBus_UInt32  large_scale_tile:1;
        RBus_UInt32  loop_filter_across_tiles_v_enabled_flag:1;
        RBus_UInt32  picture_alf_enable_flag:3;
        RBus_UInt32  transform_skip_enabled_flag:1;
        RBus_UInt32  cu_qp_delta_enabled_flag:1;
        RBus_UInt32  min_cu_qp_delta_size:3;
        RBus_UInt32  pic_cb_qp_offset:6;
        RBus_UInt32  pic_cr_qp_offset:6;
        RBus_UInt32  loop_filter_across_tiles_enabled_flag:1;
        RBus_UInt32  loop_filter_across_slices_enabled_flag:1;
        RBus_UInt32  log2_parallel_merge_level_minus2:3;
    };
}rif_reg_hevcpiccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  pic_width:14;
        RBus_UInt32  pic_height:13;
    };
}rif_reg_hevcpicsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  luma_bits_cmout:2;
        RBus_UInt32  chroma_bits_cmout:2;
        RBus_UInt32  ctbsize_baselayer:2;
        RBus_UInt32  luma_bits_baselayer:2;
        RBus_UInt32  chroma_bits_baselayer:2;
        RBus_UInt32  dualcoreenable_baselayer:1;
    };
}rif_reg_shvc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ref_pic_width:14;
        RBus_UInt32  ref_pic_height:13;
    };
}rif_reg_refpicsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_region_width:16;
        RBus_UInt32  ref_region_height:16;
    };
}rif_reg_refregion_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ref_region_topoffset:15;
        RBus_UInt32  ref_region_leftoffset:15;
    };
}rif_reg_refoffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scaled_region_width:16;
        RBus_UInt32  scaled_region_height:16;
    };
}rif_reg_scaledregion_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  scaled_region_topoffset:15;
        RBus_UInt32  scaled_region_leftoffset:15;
    };
}rif_reg_scaledoffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  new_addhory:30;
    };
}rif_reg_shvc_addhory_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  new_addvery:30;
    };
}rif_reg_shvc_addvery_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  new_addhorc:30;
    };
}rif_reg_shvc_addhorc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  new_addverc:30;
    };
}rif_reg_shvc_addverc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  overlap_enable:1;
        RBus_UInt32  field_pictype:3;
        RBus_UInt32  mvmode:2;
        RBus_UInt32  fcm:2;
        RBus_UInt32  disppic_h:12;
        RBus_UInt32  disppic_w:12;
    };
}rif_reg_vc1piccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  x_scale_fp:16;
        RBus_UInt32  y_scale_fp:16;
    };
}rif_reg_scale_fp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  cdef_disable:1;
        RBus_UInt32  allow_intrabc:1;
        RBus_UInt32  blk_skip_enabled:1;
        RBus_UInt32  delta_lf_multi:1;
        RBus_UInt32  filter_level_v:6;
        RBus_UInt32  filter_level_u:6;
        RBus_UInt32  filter_level_hor:6;
    };
}rif_reg_av1piccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  neighbor_loc:6;
        RBus_UInt32  priority_thd2:8;
        RBus_UInt32  priority_thd1:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  srg_mode:1;
        RBus_UInt32  ddr_page:2;
        RBus_UInt32  srg_enable:1;
    };
}rif_reg_brg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  vm2:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  vm1:13;
    };
}rif_reg_rd_priority0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  deblk:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  predblk:13;
    };
}rif_reg_rd_priority1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  nm:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  mvd:13;
    };
}rif_reg_rd_priority2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  gcoeff:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  bs:13;
    };
}rif_reg_rd_priority3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cmp:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  rl:13;
    };
}rif_reg_rd_priority4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  fme:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  ime:13;
    };
}rif_reg_rd_priority5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  vm2:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  vm1:11;
    };
}rif_reg_wt_priority0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  deblk:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  predblk:11;
    };
}rif_reg_wt_priority1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  nm:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  mvd:11;
    };
}rif_reg_wt_priority2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  gcoeff:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  bs:11;
    };
}rif_reg_wt_priority3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  cmp:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  it:11;
    };
}rif_reg_wt_priority4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  fme:11;
    };
}rif_reg_wt_priority5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  seg_dbg_sel1:4;
        RBus_UInt32  seg_dbg_sel0:4;
        RBus_UInt32  sao_dbg_sel1:4;
        RBus_UInt32  sao_dbg_sel0:4;
        RBus_UInt32  ime_dbg_sel1:6;
        RBus_UInt32  ime_dbg_sel0:6;
    };
}rif_reg_dbg_ctrl17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_dbg_out1:16;
        RBus_UInt32  ve_dbg_out0:16;
    };
}rif_reg_dbg_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cache_dbg_sel1:4;
        RBus_UInt32  cache_dbg_sel0:4;
        RBus_UInt32  bs_dbg_sel1:4;
        RBus_UInt32  bs_dbg_sel0:4;
        RBus_UInt32  brg_dbg_sel1:4;
        RBus_UInt32  brg_dbg_sel0:4;
        RBus_UInt32  acdc_dbg_sel1:4;
        RBus_UInt32  acdc_dbg_sel0:4;
    };
}rif_reg_dbg_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bs_dbg_sel3:2;
        RBus_UInt32  bs_dbg_sel2:2;
        RBus_UInt32  cm_dbg_sel1:4;
        RBus_UInt32  cm_dbg_sel0:4;
        RBus_UInt32  cabacp3_dbg_sel1:4;
        RBus_UInt32  cabacp3_dbg_sel0:4;
        RBus_UInt32  cabacp2_dbg_sel1:4;
        RBus_UInt32  cabacp2_dbg_sel0:4;
    };
}rif_reg_dbg_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ndb_dbg_sel1:4;
        RBus_UInt32  ndb_dbg_sel0:4;
        RBus_UInt32  rif_dbg_sel1:4;
        RBus_UInt32  rif_dbg_sel0:4;
        RBus_UInt32  itblk_dbg_sel1:4;
        RBus_UInt32  itblk_dbg_sel0:4;
        RBus_UInt32  img_dbg_sel1:4;
        RBus_UInt32  img_dbg_sel0:4;
    };
}rif_reg_dbg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rl_dbg_sel1:4;
        RBus_UInt32  rl_dbg_sel0:4;
        RBus_UInt32  vld_dbg_sel1:4;
        RBus_UInt32  vld_dbg_sel0:4;
        RBus_UInt32  arb_dbg_sel1:4;
        RBus_UInt32  arb_dbg_sel0:4;
        RBus_UInt32  vm1_dbg_sel1:4;
        RBus_UInt32  vm1_dbg_sel0:4;
    };
}rif_reg_dbg_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  deblk_dbg_sel1:6;
        RBus_UInt32  deblk_dbg_sel0:6;
        RBus_UInt32  mvd_dbg_sel1:4;
        RBus_UInt32  mvd_dbg_sel0:4;
        RBus_UInt32  prd_dbg_sel1:6;
        RBus_UInt32  prd_dbg_sel0:6;
    };
}rif_reg_dbg_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  clmp_busy:1;
        RBus_UInt32  alf_busy:1;
        RBus_UInt32  dcmprs_busy:1;
        RBus_UInt32  cmprs_busy:1;
        RBus_UInt32  seg_busy:1;
        RBus_UInt32  sao_busy:1;
        RBus_UInt32  vm2_busy:1;
        RBus_UInt32  vp8p2_busy:1;
        RBus_UInt32  ndbp2_busy:1;
        RBus_UInt32  ipmd_busy:1;
        RBus_UInt32  fme_busy:1;
        RBus_UInt32  vlc_busy:1;
        RBus_UInt32  gcoeff_busy:1;
        RBus_UInt32  emd_busy:1;
        RBus_UInt32  imedma_busy:1;
        RBus_UInt32  ime_busy:1;
        RBus_UInt32  cache_busy:1;
        RBus_UInt32  brg_busy:1;
        RBus_UInt32  ndb_busy:1;
        RBus_UInt32  bsfifo_busy:1;
        RBus_UInt32  img_busy:1;
        RBus_UInt32  vm1_busy:1;
        RBus_UInt32  deblk_busy:1;
        RBus_UInt32  rl_busy:1;
        RBus_UInt32  pred_busy:1;
        RBus_UInt32  mvd_busy:1;
        RBus_UInt32  itblk_busy:1;
        RBus_UInt32  acdc_busy:1;
        RBus_UInt32  cabacp2_busy:1;
        RBus_UInt32  vld_busy:1;
        RBus_UInt32  rifvld_busy:1;
    };
}rif_reg_fpga_dbg1_RBUS;

#else //apply LITTLE_ENDIAN

//======RIF_REG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reset_ptr:1;
        RBus_UInt32  inten:1;
        RBus_UInt32  veidle:1;
        RBus_UInt32  haltve:1;
        RBus_UInt32  haltve_done:1;
        RBus_UInt32  decode_en:1;
        RBus_UInt32  vm_idle:1;
        RBus_UInt32  ve_soft_reset:1;
        RBus_UInt32  encode_en:1;
        RBus_UInt32  inten_vcpu2:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  dbg_out_en:1;
        RBus_UInt32  dbg_out_sel0:5;
        RBus_UInt32  dbg_out_sel1:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  ve_fpga_reset:1;
        RBus_UInt32  ve_only_fpga_reset:1;
        RBus_UInt32  res3:1;
    };
}rif_reg_ve_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  dec_err:1;
        RBus_UInt32  scode_limit:1;
        RBus_UInt32  bitst_fifo:1;
        RBus_UInt32  rstff_empty:1;
        RBus_UInt32  rstff_oflow:1;
        RBus_UInt32  m64coeff:1;
        RBus_UInt32  bs2_fifo_err:1;
        RBus_UInt32  mvd_h264_mv_err:1;
        RBus_UInt32  mvd_h264_direct_err:1;
        RBus_UInt32  mvd_vc1_intfd_err:1;
        RBus_UInt32  mb_last_int:1;
        RBus_UInt32  pred_hang_int:1;
        RBus_UInt32  rl_hang_int:1;
        RBus_UInt32  rd_rslt_hang_int:1;
        RBus_UInt32  cmd_fifo_full_int:1;
        RBus_UInt32  gc_err:1;
        RBus_UInt32  ipmd_err:1;
        RBus_UInt32  ime_int:1;
        RBus_UInt32  hevc_dec_done_int:1;
        RBus_UInt32  hevc_p3_hang_int:1;
        RBus_UInt32  comp_core_irq:1;
        RBus_UInt32  dcomp_core_irq:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  first_error_b0:1;
        RBus_UInt32  first_error_b1:1;
        RBus_UInt32  first_error_b2:1;
        RBus_UInt32  first_error_b3:1;
        RBus_UInt32  first_error_b4:1;
        RBus_UInt32  ve_blk_wrap_int:1;
        RBus_UInt32  res2:2;
    };
}rif_reg_ve_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  dec_err_ie:1;
        RBus_UInt32  scode_limit_ie:1;
        RBus_UInt32  bitst_fifo_ie:1;
        RBus_UInt32  rstff_empty_ie:1;
        RBus_UInt32  rstff_oflow_ie:1;
        RBus_UInt32  m64coeff_ie:1;
        RBus_UInt32  bs2_fifo_err_ie:1;
        RBus_UInt32  mvd_h264_mv_ie:1;
        RBus_UInt32  mvd_h264_direct_ie:1;
        RBus_UInt32  mvd_vc1_intfd_ie:1;
        RBus_UInt32  mb_last_int_ie:1;
        RBus_UInt32  pred_hang_int_ie:1;
        RBus_UInt32  rl_hang_int_ie:1;
        RBus_UInt32  rd_rslt_hang_int_ie:1;
        RBus_UInt32  cmd_fifo_full_int_ie:1;
        RBus_UInt32  gc_err_ie:1;
        RBus_UInt32  ipmd_err_ie:1;
        RBus_UInt32  ime_int_ie:1;
        RBus_UInt32  ipmd_interrupt_on:1;
        RBus_UInt32  gc_interrupt_on:1;
        RBus_UInt32  hevc_dec_done_int_ie:1;
        RBus_UInt32  hevc_p3_hang_int_ie:1;
        RBus_UInt32  comp_core_irq_ie:1;
        RBus_UInt32  dcomp_core_irq_ie:1;
        RBus_UInt32  ve_blk_wrap_ie:1;
        RBus_UInt32  res1:6;
    };
}rif_reg_ve_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dmaa_inst_cnt:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  dmab_inst_cnt:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  pred_inst_cnt:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  debk_inst_cnt:6;
        RBus_UInt32  res4:2;
    };
}rif_reg_ve_fifostatus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dec_inst_cnt:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  img_fifo_cnt:6;
        RBus_UInt32  rslt_fifo_cnt:5;
        RBus_UInt32  act_rslt_in_fifo:5;
    };
}rif_reg_ve_fifostat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rslt_timer:24;
        RBus_UInt32  res1:8;
    };
}rif_reg_ve_rslt_timer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_timer:24;
        RBus_UInt32  res1:8;
    };
}rif_reg_ve_cmd_timer_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  coding_type:5;
        RBus_UInt32  profile:2;
        RBus_UInt32  level:1;
        RBus_UInt32  monochrome:1;
        RBus_UInt32  mode8x2:1;
        RBus_UInt32  mode8x2_16b_align:1;
        RBus_UInt32  corenum:2;
        RBus_UInt32  multicoreenable:2;
        RBus_UInt32  compression_en:1;
        RBus_UInt32  comp_wrap_width:10;
        RBus_UInt32  dual_core_dmy_row_method:1;
        RBus_UInt32  gpu_out_en:1;
        RBus_UInt32  mode32x1:1;
        RBus_UInt32  cmprs_head_remap:1;
        RBus_UInt32  lossy_en:1;
        RBus_UInt32  decimate_en:1;
    };
}rif_reg_dec_cntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  picmb_w:10;
        RBus_UInt32  picmb_h:9;
        RBus_UInt32  field_pic_flag:1;
        RBus_UInt32  bottom_field_flag:1;
        RBus_UInt32  vp8_bicubic_filtering:1;
        RBus_UInt32  vp9_seg_en:1;
        RBus_UInt32  allow_high_precision_mv:1;
        RBus_UInt32  filter_level:6;
        RBus_UInt32  decimate_ratio:2;
    };
}rif_reg_picinfo1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mb_adaptive_frame_field_flag:1;
        RBus_UInt32  frame_mbs_only_flag:1;
        RBus_UInt32  weighted_bipred_idc:2;
        RBus_UInt32  weighted_pred_flag:1;
        RBus_UInt32  constrainted_intra_pred_flag:1;
        RBus_UInt32  mode16x1:1;
        RBus_UInt32  ch_comp_wrap_width:10;
        RBus_UInt32  inc_cah_data_bl:1;
        RBus_UInt32  inc_cah_head_bl:1;
        RBus_UInt32  res1:13;
    };
}rif_reg_h264piccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  strong_intra_smoothing_enable_flag:1;
        RBus_UInt32  pcm_loop_filter_disable_flag:1;
        RBus_UInt32  max_ipcm_cbsize:2;
        RBus_UInt32  min_ipcm_cbsize:2;
        RBus_UInt32  pcm_enabled_flag:1;
        RBus_UInt32  sample_adaptive_offset_enabled_flag:1;
        RBus_UInt32  amp_enabled_flag:1;
        RBus_UInt32  max_trans_hier_depth_intra:3;
        RBus_UInt32  max_trans_hier_depth_inter:3;
        RBus_UInt32  max_trafo_size:2;
        RBus_UInt32  min_trafo_size:2;
        RBus_UInt32  ctbsize:2;
        RBus_UInt32  mincbsize:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  hevc_dbg_mode:1;
        RBus_UInt32  luma_bits:2;
        RBus_UInt32  chroma_bits:2;
        RBus_UInt32  shvc_enable:1;
        RBus_UInt32  res2:1;
    };
}rif_reg_hevcseqcntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  log2_parallel_merge_level_minus2:3;
        RBus_UInt32  loop_filter_across_slices_enabled_flag:1;
        RBus_UInt32  loop_filter_across_tiles_enabled_flag:1;
        RBus_UInt32  pic_cr_qp_offset:6;
        RBus_UInt32  pic_cb_qp_offset:6;
        RBus_UInt32  min_cu_qp_delta_size:3;
        RBus_UInt32  cu_qp_delta_enabled_flag:1;
        RBus_UInt32  transform_skip_enabled_flag:1;
        RBus_UInt32  picture_alf_enable_flag:3;
        RBus_UInt32  loop_filter_across_tiles_v_enabled_flag:1;
        RBus_UInt32  large_scale_tile:1;
        RBus_UInt32  decomp_en:1;
        RBus_UInt32  res1:4;
    };
}rif_reg_hevcpiccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pic_height:13;
        RBus_UInt32  pic_width:14;
        RBus_UInt32  res1:5;
    };
}rif_reg_hevcpicsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dualcoreenable_baselayer:1;
        RBus_UInt32  chroma_bits_baselayer:2;
        RBus_UInt32  luma_bits_baselayer:2;
        RBus_UInt32  ctbsize_baselayer:2;
        RBus_UInt32  chroma_bits_cmout:2;
        RBus_UInt32  luma_bits_cmout:2;
        RBus_UInt32  res1:21;
    };
}rif_reg_shvc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_pic_height:13;
        RBus_UInt32  ref_pic_width:14;
        RBus_UInt32  res1:5;
    };
}rif_reg_refpicsize_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_region_height:16;
        RBus_UInt32  ref_region_width:16;
    };
}rif_reg_refregion_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_region_leftoffset:15;
        RBus_UInt32  ref_region_topoffset:15;
        RBus_UInt32  res1:2;
    };
}rif_reg_refoffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scaled_region_height:16;
        RBus_UInt32  scaled_region_width:16;
    };
}rif_reg_scaledregion_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scaled_region_leftoffset:15;
        RBus_UInt32  scaled_region_topoffset:15;
        RBus_UInt32  res1:2;
    };
}rif_reg_scaledoffset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  new_addhory:30;
        RBus_UInt32  res1:2;
    };
}rif_reg_shvc_addhory_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  new_addvery:30;
        RBus_UInt32  res1:2;
    };
}rif_reg_shvc_addvery_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  new_addhorc:30;
        RBus_UInt32  res1:2;
    };
}rif_reg_shvc_addhorc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  new_addverc:30;
        RBus_UInt32  res1:2;
    };
}rif_reg_shvc_addverc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  disppic_w:12;
        RBus_UInt32  disppic_h:12;
        RBus_UInt32  fcm:2;
        RBus_UInt32  mvmode:2;
        RBus_UInt32  field_pictype:3;
        RBus_UInt32  overlap_enable:1;
    };
}rif_reg_vc1piccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_scale_fp:16;
        RBus_UInt32  x_scale_fp:16;
    };
}rif_reg_scale_fp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  filter_level_hor:6;
        RBus_UInt32  filter_level_u:6;
        RBus_UInt32  filter_level_v:6;
        RBus_UInt32  delta_lf_multi:1;
        RBus_UInt32  blk_skip_enabled:1;
        RBus_UInt32  allow_intrabc:1;
        RBus_UInt32  cdef_disable:1;
        RBus_UInt32  res1:10;
    };
}rif_reg_av1piccntl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  srg_enable:1;
        RBus_UInt32  ddr_page:2;
        RBus_UInt32  srg_mode:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  priority_thd1:8;
        RBus_UInt32  priority_thd2:8;
        RBus_UInt32  neighbor_loc:6;
        RBus_UInt32  res2:2;
    };
}rif_reg_brg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm1:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  vm2:13;
        RBus_UInt32  res2:3;
    };
}rif_reg_rd_priority0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  predblk:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  deblk:13;
        RBus_UInt32  res2:3;
    };
}rif_reg_rd_priority1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvd:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  nm:13;
        RBus_UInt32  res2:3;
    };
}rif_reg_rd_priority2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bs:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  gcoeff:13;
        RBus_UInt32  res2:3;
    };
}rif_reg_rd_priority3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rl:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  cmp:13;
        RBus_UInt32  res2:3;
    };
}rif_reg_rd_priority4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ime:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  fme:13;
        RBus_UInt32  res2:3;
    };
}rif_reg_rd_priority5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm1:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  vm2:11;
        RBus_UInt32  res2:5;
    };
}rif_reg_wt_priority0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  predblk:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  deblk:11;
        RBus_UInt32  res2:5;
    };
}rif_reg_wt_priority1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvd:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  nm:11;
        RBus_UInt32  res2:5;
    };
}rif_reg_wt_priority2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bs:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  gcoeff:11;
        RBus_UInt32  res2:5;
    };
}rif_reg_wt_priority3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  it:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  cmp:11;
        RBus_UInt32  res2:5;
    };
}rif_reg_wt_priority4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fme:11;
        RBus_UInt32  res1:21;
    };
}rif_reg_wt_priority5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ime_dbg_sel0:6;
        RBus_UInt32  ime_dbg_sel1:6;
        RBus_UInt32  sao_dbg_sel0:4;
        RBus_UInt32  sao_dbg_sel1:4;
        RBus_UInt32  seg_dbg_sel0:4;
        RBus_UInt32  seg_dbg_sel1:4;
        RBus_UInt32  res1:4;
    };
}rif_reg_dbg_ctrl17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_dbg_out0:16;
        RBus_UInt32  ve_dbg_out1:16;
    };
}rif_reg_dbg_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acdc_dbg_sel0:4;
        RBus_UInt32  acdc_dbg_sel1:4;
        RBus_UInt32  brg_dbg_sel0:4;
        RBus_UInt32  brg_dbg_sel1:4;
        RBus_UInt32  bs_dbg_sel0:4;
        RBus_UInt32  bs_dbg_sel1:4;
        RBus_UInt32  cache_dbg_sel0:4;
        RBus_UInt32  cache_dbg_sel1:4;
    };
}rif_reg_dbg_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cabacp2_dbg_sel0:4;
        RBus_UInt32  cabacp2_dbg_sel1:4;
        RBus_UInt32  cabacp3_dbg_sel0:4;
        RBus_UInt32  cabacp3_dbg_sel1:4;
        RBus_UInt32  cm_dbg_sel0:4;
        RBus_UInt32  cm_dbg_sel1:4;
        RBus_UInt32  bs_dbg_sel2:2;
        RBus_UInt32  bs_dbg_sel3:2;
        RBus_UInt32  res1:4;
    };
}rif_reg_dbg_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  img_dbg_sel0:4;
        RBus_UInt32  img_dbg_sel1:4;
        RBus_UInt32  itblk_dbg_sel0:4;
        RBus_UInt32  itblk_dbg_sel1:4;
        RBus_UInt32  rif_dbg_sel0:4;
        RBus_UInt32  rif_dbg_sel1:4;
        RBus_UInt32  ndb_dbg_sel0:4;
        RBus_UInt32  ndb_dbg_sel1:4;
    };
}rif_reg_dbg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm1_dbg_sel0:4;
        RBus_UInt32  vm1_dbg_sel1:4;
        RBus_UInt32  arb_dbg_sel0:4;
        RBus_UInt32  arb_dbg_sel1:4;
        RBus_UInt32  vld_dbg_sel0:4;
        RBus_UInt32  vld_dbg_sel1:4;
        RBus_UInt32  rl_dbg_sel0:4;
        RBus_UInt32  rl_dbg_sel1:4;
    };
}rif_reg_dbg_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prd_dbg_sel0:6;
        RBus_UInt32  prd_dbg_sel1:6;
        RBus_UInt32  mvd_dbg_sel0:4;
        RBus_UInt32  mvd_dbg_sel1:4;
        RBus_UInt32  deblk_dbg_sel0:6;
        RBus_UInt32  deblk_dbg_sel1:6;
    };
}rif_reg_dbg_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rifvld_busy:1;
        RBus_UInt32  vld_busy:1;
        RBus_UInt32  cabacp2_busy:1;
        RBus_UInt32  acdc_busy:1;
        RBus_UInt32  itblk_busy:1;
        RBus_UInt32  mvd_busy:1;
        RBus_UInt32  pred_busy:1;
        RBus_UInt32  rl_busy:1;
        RBus_UInt32  deblk_busy:1;
        RBus_UInt32  vm1_busy:1;
        RBus_UInt32  img_busy:1;
        RBus_UInt32  bsfifo_busy:1;
        RBus_UInt32  ndb_busy:1;
        RBus_UInt32  brg_busy:1;
        RBus_UInt32  cache_busy:1;
        RBus_UInt32  ime_busy:1;
        RBus_UInt32  imedma_busy:1;
        RBus_UInt32  emd_busy:1;
        RBus_UInt32  gcoeff_busy:1;
        RBus_UInt32  vlc_busy:1;
        RBus_UInt32  fme_busy:1;
        RBus_UInt32  ipmd_busy:1;
        RBus_UInt32  ndbp2_busy:1;
        RBus_UInt32  vp8p2_busy:1;
        RBus_UInt32  vm2_busy:1;
        RBus_UInt32  sao_busy:1;
        RBus_UInt32  seg_busy:1;
        RBus_UInt32  cmprs_busy:1;
        RBus_UInt32  dcmprs_busy:1;
        RBus_UInt32  alf_busy:1;
        RBus_UInt32  clmp_busy:1;
        RBus_UInt32  res1:1;
    };
}rif_reg_fpga_dbg1_RBUS;




#endif 


#endif 
