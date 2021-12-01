/**
* @file Merlin5_VE_Mbist_Arch_spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_VE_MBIST_REG_H_
#define _RBUS_VE_MBIST_REG_H_

#include "rbus_types.h"



//  VE_MBIST Register Address
#define  VE_MBIST_ve_bist_rm                                                    0x1800FF00
#define  VE_MBIST_ve_bist_rm_reg_addr                                            "0xB800FF00"
#define  VE_MBIST_ve_bist_rm_reg                                                 0xB800FF00
#define  VE_MBIST_ve_bist_rm_inst_addr                                           "0x0000"
#define  set_VE_MBIST_ve_bist_rm_reg(data)                                       (*((volatile unsigned int*)VE_MBIST_ve_bist_rm_reg)=data)
#define  get_VE_MBIST_ve_bist_rm_reg                                             (*((volatile unsigned int*)VE_MBIST_ve_bist_rm_reg))
#define  VE_MBIST_ve_bist_rm_test_rwm_shift                                      (31)
#define  VE_MBIST_ve_bist_rm_test1_shift                                         (30)
#define  VE_MBIST_ve_bist_rm_sysh_rmea_shift                                     (29)
#define  VE_MBIST_ve_bist_rm_sysh_rma_shift                                      (25)
#define  VE_MBIST_ve_bist_rm_sysh_rmeb_shift                                     (24)
#define  VE_MBIST_ve_bist_rm_sysh_rmb_shift                                      (20)
#define  VE_MBIST_ve_bist_rm_sysh_rme_shift                                      (19)
#define  VE_MBIST_ve_bist_rm_sysh_rm_shift                                       (15)
#define  VE_MBIST_ve_bist_rm_rmea_shift                                          (14)
#define  VE_MBIST_ve_bist_rm_rma_shift                                           (10)
#define  VE_MBIST_ve_bist_rm_rmeb_shift                                          (9)
#define  VE_MBIST_ve_bist_rm_rmb_shift                                           (5)
#define  VE_MBIST_ve_bist_rm_rme_shift                                           (4)
#define  VE_MBIST_ve_bist_rm_rm_shift                                            (0)
#define  VE_MBIST_ve_bist_rm_test_rwm_mask                                       (0x80000000)
#define  VE_MBIST_ve_bist_rm_test1_mask                                          (0x40000000)
#define  VE_MBIST_ve_bist_rm_sysh_rmea_mask                                      (0x20000000)
#define  VE_MBIST_ve_bist_rm_sysh_rma_mask                                       (0x1E000000)
#define  VE_MBIST_ve_bist_rm_sysh_rmeb_mask                                      (0x01000000)
#define  VE_MBIST_ve_bist_rm_sysh_rmb_mask                                       (0x00F00000)
#define  VE_MBIST_ve_bist_rm_sysh_rme_mask                                       (0x00080000)
#define  VE_MBIST_ve_bist_rm_sysh_rm_mask                                        (0x00078000)
#define  VE_MBIST_ve_bist_rm_rmea_mask                                           (0x00004000)
#define  VE_MBIST_ve_bist_rm_rma_mask                                            (0x00003C00)
#define  VE_MBIST_ve_bist_rm_rmeb_mask                                           (0x00000200)
#define  VE_MBIST_ve_bist_rm_rmb_mask                                            (0x000001E0)
#define  VE_MBIST_ve_bist_rm_rme_mask                                            (0x00000010)
#define  VE_MBIST_ve_bist_rm_rm_mask                                             (0x0000000F)
#define  VE_MBIST_ve_bist_rm_test_rwm(data)                                      (0x80000000&((data)<<31))
#define  VE_MBIST_ve_bist_rm_test1(data)                                         (0x40000000&((data)<<30))
#define  VE_MBIST_ve_bist_rm_sysh_rmea(data)                                     (0x20000000&((data)<<29))
#define  VE_MBIST_ve_bist_rm_sysh_rma(data)                                      (0x1E000000&((data)<<25))
#define  VE_MBIST_ve_bist_rm_sysh_rmeb(data)                                     (0x01000000&((data)<<24))
#define  VE_MBIST_ve_bist_rm_sysh_rmb(data)                                      (0x00F00000&((data)<<20))
#define  VE_MBIST_ve_bist_rm_sysh_rme(data)                                      (0x00080000&((data)<<19))
#define  VE_MBIST_ve_bist_rm_sysh_rm(data)                                       (0x00078000&((data)<<15))
#define  VE_MBIST_ve_bist_rm_rmea(data)                                          (0x00004000&((data)<<14))
#define  VE_MBIST_ve_bist_rm_rma(data)                                           (0x00003C00&((data)<<10))
#define  VE_MBIST_ve_bist_rm_rmeb(data)                                          (0x00000200&((data)<<9))
#define  VE_MBIST_ve_bist_rm_rmb(data)                                           (0x000001E0&((data)<<5))
#define  VE_MBIST_ve_bist_rm_rme(data)                                           (0x00000010&((data)<<4))
#define  VE_MBIST_ve_bist_rm_rm(data)                                            (0x0000000F&(data))
#define  VE_MBIST_ve_bist_rm_get_test_rwm(data)                                  ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_bist_rm_get_test1(data)                                     ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_bist_rm_get_sysh_rmea(data)                                 ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_bist_rm_get_sysh_rma(data)                                  ((0x1E000000&(data))>>25)
#define  VE_MBIST_ve_bist_rm_get_sysh_rmeb(data)                                 ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_bist_rm_get_sysh_rmb(data)                                  ((0x00F00000&(data))>>20)
#define  VE_MBIST_ve_bist_rm_get_sysh_rme(data)                                  ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_bist_rm_get_sysh_rm(data)                                   ((0x00078000&(data))>>15)
#define  VE_MBIST_ve_bist_rm_get_rmea(data)                                      ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_bist_rm_get_rma(data)                                       ((0x00003C00&(data))>>10)
#define  VE_MBIST_ve_bist_rm_get_rmeb(data)                                      ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_bist_rm_get_rmb(data)                                       ((0x000001E0&(data))>>5)
#define  VE_MBIST_ve_bist_rm_get_rme(data)                                       ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_bist_rm_get_rm(data)                                        (0x0000000F&(data))

#define  VE_MBIST_ve_bist_ls_0                                                  0x1800FF44
#define  VE_MBIST_ve_bist_ls_0_reg_addr                                          "0xB800FF44"
#define  VE_MBIST_ve_bist_ls_0_reg                                               0xB800FF44
#define  VE_MBIST_ve_bist_ls_0_inst_addr                                         "0x0001"
#define  set_VE_MBIST_ve_bist_ls_0_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_ve_bist_ls_0_reg)=data)
#define  get_VE_MBIST_ve_bist_ls_0_reg                                           (*((volatile unsigned int*)VE_MBIST_ve_bist_ls_0_reg))
#define  VE_MBIST_ve_bist_ls_0_dcmprs_ls_shift                                   (30)
#define  VE_MBIST_ve_bist_ls_0_cmprs_ls_shift                                    (28)
#define  VE_MBIST_ve_bist_ls_0_ndb_ls_shift                                      (26)
#define  VE_MBIST_ve_bist_ls_0_bs_ls_shift                                       (24)
#define  VE_MBIST_ve_bist_ls_0_rif_ls_shift                                      (22)
#define  VE_MBIST_ve_bist_ls_0_brg_ls_shift                                      (20)
#define  VE_MBIST_ve_bist_ls_0_vmem_ls_shift                                     (18)
#define  VE_MBIST_ve_bist_ls_0_sao_ls_shift                                      (16)
#define  VE_MBIST_ve_bist_ls_0_deblk_ls_shift                                    (14)
#define  VE_MBIST_ve_bist_ls_0_pred_ls_shift                                     (12)
#define  VE_MBIST_ve_bist_ls_0_cache_ls_shift                                    (10)
#define  VE_MBIST_ve_bist_ls_0_rl_ls_shift                                       (8)
#define  VE_MBIST_ve_bist_ls_0_cm_ls_shift                                       (6)
#define  VE_MBIST_ve_bist_ls_0_itblk_ls_shift                                    (4)
#define  VE_MBIST_ve_bist_ls_0_mvd_ls_shift                                      (2)
#define  VE_MBIST_ve_bist_ls_0_vld_ls_shift                                      (0)
#define  VE_MBIST_ve_bist_ls_0_dcmprs_ls_mask                                    (0xC0000000)
#define  VE_MBIST_ve_bist_ls_0_cmprs_ls_mask                                     (0x30000000)
#define  VE_MBIST_ve_bist_ls_0_ndb_ls_mask                                       (0x0C000000)
#define  VE_MBIST_ve_bist_ls_0_bs_ls_mask                                        (0x03000000)
#define  VE_MBIST_ve_bist_ls_0_rif_ls_mask                                       (0x00C00000)
#define  VE_MBIST_ve_bist_ls_0_brg_ls_mask                                       (0x00300000)
#define  VE_MBIST_ve_bist_ls_0_vmem_ls_mask                                      (0x000C0000)
#define  VE_MBIST_ve_bist_ls_0_sao_ls_mask                                       (0x00030000)
#define  VE_MBIST_ve_bist_ls_0_deblk_ls_mask                                     (0x0000C000)
#define  VE_MBIST_ve_bist_ls_0_pred_ls_mask                                      (0x00003000)
#define  VE_MBIST_ve_bist_ls_0_cache_ls_mask                                     (0x00000C00)
#define  VE_MBIST_ve_bist_ls_0_rl_ls_mask                                        (0x00000300)
#define  VE_MBIST_ve_bist_ls_0_cm_ls_mask                                        (0x000000C0)
#define  VE_MBIST_ve_bist_ls_0_itblk_ls_mask                                     (0x00000030)
#define  VE_MBIST_ve_bist_ls_0_mvd_ls_mask                                       (0x0000000C)
#define  VE_MBIST_ve_bist_ls_0_vld_ls_mask                                       (0x00000003)
#define  VE_MBIST_ve_bist_ls_0_dcmprs_ls(data)                                   (0xC0000000&((data)<<30))
#define  VE_MBIST_ve_bist_ls_0_cmprs_ls(data)                                    (0x30000000&((data)<<28))
#define  VE_MBIST_ve_bist_ls_0_ndb_ls(data)                                      (0x0C000000&((data)<<26))
#define  VE_MBIST_ve_bist_ls_0_bs_ls(data)                                       (0x03000000&((data)<<24))
#define  VE_MBIST_ve_bist_ls_0_rif_ls(data)                                      (0x00C00000&((data)<<22))
#define  VE_MBIST_ve_bist_ls_0_brg_ls(data)                                      (0x00300000&((data)<<20))
#define  VE_MBIST_ve_bist_ls_0_vmem_ls(data)                                     (0x000C0000&((data)<<18))
#define  VE_MBIST_ve_bist_ls_0_sao_ls(data)                                      (0x00030000&((data)<<16))
#define  VE_MBIST_ve_bist_ls_0_deblk_ls(data)                                    (0x0000C000&((data)<<14))
#define  VE_MBIST_ve_bist_ls_0_pred_ls(data)                                     (0x00003000&((data)<<12))
#define  VE_MBIST_ve_bist_ls_0_cache_ls(data)                                    (0x00000C00&((data)<<10))
#define  VE_MBIST_ve_bist_ls_0_rl_ls(data)                                       (0x00000300&((data)<<8))
#define  VE_MBIST_ve_bist_ls_0_cm_ls(data)                                       (0x000000C0&((data)<<6))
#define  VE_MBIST_ve_bist_ls_0_itblk_ls(data)                                    (0x00000030&((data)<<4))
#define  VE_MBIST_ve_bist_ls_0_mvd_ls(data)                                      (0x0000000C&((data)<<2))
#define  VE_MBIST_ve_bist_ls_0_vld_ls(data)                                      (0x00000003&(data))
#define  VE_MBIST_ve_bist_ls_0_get_dcmprs_ls(data)                               ((0xC0000000&(data))>>30)
#define  VE_MBIST_ve_bist_ls_0_get_cmprs_ls(data)                                ((0x30000000&(data))>>28)
#define  VE_MBIST_ve_bist_ls_0_get_ndb_ls(data)                                  ((0x0C000000&(data))>>26)
#define  VE_MBIST_ve_bist_ls_0_get_bs_ls(data)                                   ((0x03000000&(data))>>24)
#define  VE_MBIST_ve_bist_ls_0_get_rif_ls(data)                                  ((0x00C00000&(data))>>22)
#define  VE_MBIST_ve_bist_ls_0_get_brg_ls(data)                                  ((0x00300000&(data))>>20)
#define  VE_MBIST_ve_bist_ls_0_get_vmem_ls(data)                                 ((0x000C0000&(data))>>18)
#define  VE_MBIST_ve_bist_ls_0_get_sao_ls(data)                                  ((0x00030000&(data))>>16)
#define  VE_MBIST_ve_bist_ls_0_get_deblk_ls(data)                                ((0x0000C000&(data))>>14)
#define  VE_MBIST_ve_bist_ls_0_get_pred_ls(data)                                 ((0x00003000&(data))>>12)
#define  VE_MBIST_ve_bist_ls_0_get_cache_ls(data)                                ((0x00000C00&(data))>>10)
#define  VE_MBIST_ve_bist_ls_0_get_rl_ls(data)                                   ((0x00000300&(data))>>8)
#define  VE_MBIST_ve_bist_ls_0_get_cm_ls(data)                                   ((0x000000C0&(data))>>6)
#define  VE_MBIST_ve_bist_ls_0_get_itblk_ls(data)                                ((0x00000030&(data))>>4)
#define  VE_MBIST_ve_bist_ls_0_get_mvd_ls(data)                                  ((0x0000000C&(data))>>2)
#define  VE_MBIST_ve_bist_ls_0_get_vld_ls(data)                                  (0x00000003&(data))

#define  VE_MBIST_ve_bist_mode0                                                 0x1800FF04
#define  VE_MBIST_ve_bist_mode0_reg_addr                                         "0xB800FF04"
#define  VE_MBIST_ve_bist_mode0_reg                                              0xB800FF04
#define  VE_MBIST_ve_bist_mode0_inst_addr                                        "0x0002"
#define  set_VE_MBIST_ve_bist_mode0_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_ve_bist_mode0_reg)=data)
#define  get_VE_MBIST_ve_bist_mode0_reg                                          (*((volatile unsigned int*)VE_MBIST_ve_bist_mode0_reg))
#define  VE_MBIST_ve_bist_mode0_ve_mf2_bist_en_shift                             (31)
#define  VE_MBIST_ve_bist_mode0_ve_mf1_bist_en_shift                             (30)
#define  VE_MBIST_ve_bist_mode0_ve_mf0_bist_en_shift                             (29)
#define  VE_MBIST_ve_bist_mode0_ve_p2mvd_bist_en_shift                           (28)
#define  VE_MBIST_ve_bist_mode0_ve_vld_1_bist_en_shift                           (27)
#define  VE_MBIST_ve_bist_mode0_ve_p2_bist_en_shift                              (26)
#define  VE_MBIST_ve_bist_mode0_ve_clmp_bist_en_shift                            (25)
#define  VE_MBIST_ve_bist_mode0_ve_dcmprs_outbuf_bist_en_shift                   (24)
#define  VE_MBIST_ve_bist_mode0_ve_pred_3_bist_en_shift                          (23)
#define  VE_MBIST_ve_bist_mode0_ve_pred_2_bist_en_shift                          (22)
#define  VE_MBIST_ve_bist_mode0_ve_pred_1_bist_en_shift                          (21)
#define  VE_MBIST_ve_bist_mode0_ve_pred_0_bist_en_shift                          (20)
#define  VE_MBIST_ve_bist_mode0_ve_cah_2p_1_bist_en_shift                        (19)
#define  VE_MBIST_ve_bist_mode0_ve_cah_2p_0_bist_en_shift                        (18)
#define  VE_MBIST_ve_bist_mode0_ve_cah_1p_bist_en_shift                          (17)
#define  VE_MBIST_ve_bist_mode0_ve_dcmprs_bist_en_shift                          (16)
#define  VE_MBIST_ve_bist_mode0_ve_cmprs_bist_en_shift                           (15)
#define  VE_MBIST_ve_bist_mode0_ve_dbk_bist_en_shift                             (14)
#define  VE_MBIST_ve_bist_mode0_ve_seg_mvd_bist_en_shift                         (13)
#define  VE_MBIST_ve_bist_mode0_ve_rlrmem_mvbuf_bist_en_shift                    (12)
#define  VE_MBIST_ve_bist_mode0_ve_cm2_bist_en_shift                             (11)
#define  VE_MBIST_ve_bist_mode0_ve_cm1_bist_en_shift                             (10)
#define  VE_MBIST_ve_bist_mode0_ve_brg_bist_en_shift                             (9)
#define  VE_MBIST_ve_bist_mode0_ve_sao_bist_en_shift                             (8)
#define  VE_MBIST_ve_bist_mode0_ve_it_bs_bist_en_shift                           (7)
#define  VE_MBIST_ve_bist_mode0_ve_it_1_bist_en_shift                            (6)
#define  VE_MBIST_ve_bist_mode0_ve_it_0_1_bist_en_shift                          (5)
#define  VE_MBIST_ve_bist_mode0_ve_it_0_0_bist_en_shift                          (4)
#define  VE_MBIST_ve_bist_mode0_ve_vm_1_bist_en_shift                            (3)
#define  VE_MBIST_ve_bist_mode0_ve_vm_0_bist_en_shift                            (2)
#define  VE_MBIST_ve_bist_mode0_ve_vld_0_bist_en_shift                           (1)
#define  VE_MBIST_ve_bist_mode0_ve_rif_bist_en_shift                             (0)
#define  VE_MBIST_ve_bist_mode0_ve_mf2_bist_en_mask                              (0x80000000)
#define  VE_MBIST_ve_bist_mode0_ve_mf1_bist_en_mask                              (0x40000000)
#define  VE_MBIST_ve_bist_mode0_ve_mf0_bist_en_mask                              (0x20000000)
#define  VE_MBIST_ve_bist_mode0_ve_p2mvd_bist_en_mask                            (0x10000000)
#define  VE_MBIST_ve_bist_mode0_ve_vld_1_bist_en_mask                            (0x08000000)
#define  VE_MBIST_ve_bist_mode0_ve_p2_bist_en_mask                               (0x04000000)
#define  VE_MBIST_ve_bist_mode0_ve_clmp_bist_en_mask                             (0x02000000)
#define  VE_MBIST_ve_bist_mode0_ve_dcmprs_outbuf_bist_en_mask                    (0x01000000)
#define  VE_MBIST_ve_bist_mode0_ve_pred_3_bist_en_mask                           (0x00800000)
#define  VE_MBIST_ve_bist_mode0_ve_pred_2_bist_en_mask                           (0x00400000)
#define  VE_MBIST_ve_bist_mode0_ve_pred_1_bist_en_mask                           (0x00200000)
#define  VE_MBIST_ve_bist_mode0_ve_pred_0_bist_en_mask                           (0x00100000)
#define  VE_MBIST_ve_bist_mode0_ve_cah_2p_1_bist_en_mask                         (0x00080000)
#define  VE_MBIST_ve_bist_mode0_ve_cah_2p_0_bist_en_mask                         (0x00040000)
#define  VE_MBIST_ve_bist_mode0_ve_cah_1p_bist_en_mask                           (0x00020000)
#define  VE_MBIST_ve_bist_mode0_ve_dcmprs_bist_en_mask                           (0x00010000)
#define  VE_MBIST_ve_bist_mode0_ve_cmprs_bist_en_mask                            (0x00008000)
#define  VE_MBIST_ve_bist_mode0_ve_dbk_bist_en_mask                              (0x00004000)
#define  VE_MBIST_ve_bist_mode0_ve_seg_mvd_bist_en_mask                          (0x00002000)
#define  VE_MBIST_ve_bist_mode0_ve_rlrmem_mvbuf_bist_en_mask                     (0x00001000)
#define  VE_MBIST_ve_bist_mode0_ve_cm2_bist_en_mask                              (0x00000800)
#define  VE_MBIST_ve_bist_mode0_ve_cm1_bist_en_mask                              (0x00000400)
#define  VE_MBIST_ve_bist_mode0_ve_brg_bist_en_mask                              (0x00000200)
#define  VE_MBIST_ve_bist_mode0_ve_sao_bist_en_mask                              (0x00000100)
#define  VE_MBIST_ve_bist_mode0_ve_it_bs_bist_en_mask                            (0x00000080)
#define  VE_MBIST_ve_bist_mode0_ve_it_1_bist_en_mask                             (0x00000040)
#define  VE_MBIST_ve_bist_mode0_ve_it_0_1_bist_en_mask                           (0x00000020)
#define  VE_MBIST_ve_bist_mode0_ve_it_0_0_bist_en_mask                           (0x00000010)
#define  VE_MBIST_ve_bist_mode0_ve_vm_1_bist_en_mask                             (0x00000008)
#define  VE_MBIST_ve_bist_mode0_ve_vm_0_bist_en_mask                             (0x00000004)
#define  VE_MBIST_ve_bist_mode0_ve_vld_0_bist_en_mask                            (0x00000002)
#define  VE_MBIST_ve_bist_mode0_ve_rif_bist_en_mask                              (0x00000001)
#define  VE_MBIST_ve_bist_mode0_ve_mf2_bist_en(data)                             (0x80000000&((data)<<31))
#define  VE_MBIST_ve_bist_mode0_ve_mf1_bist_en(data)                             (0x40000000&((data)<<30))
#define  VE_MBIST_ve_bist_mode0_ve_mf0_bist_en(data)                             (0x20000000&((data)<<29))
#define  VE_MBIST_ve_bist_mode0_ve_p2mvd_bist_en(data)                           (0x10000000&((data)<<28))
#define  VE_MBIST_ve_bist_mode0_ve_vld_1_bist_en(data)                           (0x08000000&((data)<<27))
#define  VE_MBIST_ve_bist_mode0_ve_p2_bist_en(data)                              (0x04000000&((data)<<26))
#define  VE_MBIST_ve_bist_mode0_ve_clmp_bist_en(data)                            (0x02000000&((data)<<25))
#define  VE_MBIST_ve_bist_mode0_ve_dcmprs_outbuf_bist_en(data)                   (0x01000000&((data)<<24))
#define  VE_MBIST_ve_bist_mode0_ve_pred_3_bist_en(data)                          (0x00800000&((data)<<23))
#define  VE_MBIST_ve_bist_mode0_ve_pred_2_bist_en(data)                          (0x00400000&((data)<<22))
#define  VE_MBIST_ve_bist_mode0_ve_pred_1_bist_en(data)                          (0x00200000&((data)<<21))
#define  VE_MBIST_ve_bist_mode0_ve_pred_0_bist_en(data)                          (0x00100000&((data)<<20))
#define  VE_MBIST_ve_bist_mode0_ve_cah_2p_1_bist_en(data)                        (0x00080000&((data)<<19))
#define  VE_MBIST_ve_bist_mode0_ve_cah_2p_0_bist_en(data)                        (0x00040000&((data)<<18))
#define  VE_MBIST_ve_bist_mode0_ve_cah_1p_bist_en(data)                          (0x00020000&((data)<<17))
#define  VE_MBIST_ve_bist_mode0_ve_dcmprs_bist_en(data)                          (0x00010000&((data)<<16))
#define  VE_MBIST_ve_bist_mode0_ve_cmprs_bist_en(data)                           (0x00008000&((data)<<15))
#define  VE_MBIST_ve_bist_mode0_ve_dbk_bist_en(data)                             (0x00004000&((data)<<14))
#define  VE_MBIST_ve_bist_mode0_ve_seg_mvd_bist_en(data)                         (0x00002000&((data)<<13))
#define  VE_MBIST_ve_bist_mode0_ve_rlrmem_mvbuf_bist_en(data)                    (0x00001000&((data)<<12))
#define  VE_MBIST_ve_bist_mode0_ve_cm2_bist_en(data)                             (0x00000800&((data)<<11))
#define  VE_MBIST_ve_bist_mode0_ve_cm1_bist_en(data)                             (0x00000400&((data)<<10))
#define  VE_MBIST_ve_bist_mode0_ve_brg_bist_en(data)                             (0x00000200&((data)<<9))
#define  VE_MBIST_ve_bist_mode0_ve_sao_bist_en(data)                             (0x00000100&((data)<<8))
#define  VE_MBIST_ve_bist_mode0_ve_it_bs_bist_en(data)                           (0x00000080&((data)<<7))
#define  VE_MBIST_ve_bist_mode0_ve_it_1_bist_en(data)                            (0x00000040&((data)<<6))
#define  VE_MBIST_ve_bist_mode0_ve_it_0_1_bist_en(data)                          (0x00000020&((data)<<5))
#define  VE_MBIST_ve_bist_mode0_ve_it_0_0_bist_en(data)                          (0x00000010&((data)<<4))
#define  VE_MBIST_ve_bist_mode0_ve_vm_1_bist_en(data)                            (0x00000008&((data)<<3))
#define  VE_MBIST_ve_bist_mode0_ve_vm_0_bist_en(data)                            (0x00000004&((data)<<2))
#define  VE_MBIST_ve_bist_mode0_ve_vld_0_bist_en(data)                           (0x00000002&((data)<<1))
#define  VE_MBIST_ve_bist_mode0_ve_rif_bist_en(data)                             (0x00000001&(data))
#define  VE_MBIST_ve_bist_mode0_get_ve_mf2_bist_en(data)                         ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_bist_mode0_get_ve_mf1_bist_en(data)                         ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_bist_mode0_get_ve_mf0_bist_en(data)                         ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_bist_mode0_get_ve_p2mvd_bist_en(data)                       ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_bist_mode0_get_ve_vld_1_bist_en(data)                       ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_bist_mode0_get_ve_p2_bist_en(data)                          ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_bist_mode0_get_ve_clmp_bist_en(data)                        ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_bist_mode0_get_ve_dcmprs_outbuf_bist_en(data)               ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_bist_mode0_get_ve_pred_3_bist_en(data)                      ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_bist_mode0_get_ve_pred_2_bist_en(data)                      ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_bist_mode0_get_ve_pred_1_bist_en(data)                      ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_bist_mode0_get_ve_pred_0_bist_en(data)                      ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_bist_mode0_get_ve_cah_2p_1_bist_en(data)                    ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_bist_mode0_get_ve_cah_2p_0_bist_en(data)                    ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_bist_mode0_get_ve_cah_1p_bist_en(data)                      ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_bist_mode0_get_ve_dcmprs_bist_en(data)                      ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_bist_mode0_get_ve_cmprs_bist_en(data)                       ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_bist_mode0_get_ve_dbk_bist_en(data)                         ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_bist_mode0_get_ve_seg_mvd_bist_en(data)                     ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_bist_mode0_get_ve_rlrmem_mvbuf_bist_en(data)                ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_bist_mode0_get_ve_cm2_bist_en(data)                         ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_bist_mode0_get_ve_cm1_bist_en(data)                         ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_bist_mode0_get_ve_brg_bist_en(data)                         ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_bist_mode0_get_ve_sao_bist_en(data)                         ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_bist_mode0_get_ve_it_bs_bist_en(data)                       ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_bist_mode0_get_ve_it_1_bist_en(data)                        ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_bist_mode0_get_ve_it_0_1_bist_en(data)                      ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_bist_mode0_get_ve_it_0_0_bist_en(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_bist_mode0_get_ve_vm_1_bist_en(data)                        ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_bist_mode0_get_ve_vm_0_bist_en(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_bist_mode0_get_ve_vld_0_bist_en(data)                       ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_bist_mode0_get_ve_rif_bist_en(data)                         (0x00000001&(data))

#define  VE_MBIST_ve_bist_mode1                                                 0x1800FF08
#define  VE_MBIST_ve_bist_mode1_reg_addr                                         "0xB800FF08"
#define  VE_MBIST_ve_bist_mode1_reg                                              0xB800FF08
#define  VE_MBIST_ve_bist_mode1_inst_addr                                        "0x0003"
#define  set_VE_MBIST_ve_bist_mode1_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_ve_bist_mode1_reg)=data)
#define  get_VE_MBIST_ve_bist_mode1_reg                                          (*((volatile unsigned int*)VE_MBIST_ve_bist_mode1_reg))
#define  VE_MBIST_ve_bist_mode1_ve_pred_2e_bist_en_shift                         (8)
#define  VE_MBIST_ve_bist_mode1_ve_rlrmem01_bist_en_shift                        (7)
#define  VE_MBIST_ve_bist_mode1_ve_cmprs_1_bist_en_shift                         (6)
#define  VE_MBIST_ve_bist_mode1_ve_pred_3_2p_bist_en_shift                       (5)
#define  VE_MBIST_ve_bist_mode1_ve_vm_2_bist_en_shift                            (4)
#define  VE_MBIST_ve_bist_mode1_ve_ciblk_bist_en_shift                           (3)
#define  VE_MBIST_ve_bist_mode1_ve_sr_bist_en_shift                              (2)
#define  VE_MBIST_ve_bist_mode1_ve_cdef_bist_en_shift                            (1)
#define  VE_MBIST_ve_bist_mode1_ve_lr_bist_en_shift                              (0)
#define  VE_MBIST_ve_bist_mode1_ve_pred_2e_bist_en_mask                          (0x00000100)
#define  VE_MBIST_ve_bist_mode1_ve_rlrmem01_bist_en_mask                         (0x00000080)
#define  VE_MBIST_ve_bist_mode1_ve_cmprs_1_bist_en_mask                          (0x00000040)
#define  VE_MBIST_ve_bist_mode1_ve_pred_3_2p_bist_en_mask                        (0x00000020)
#define  VE_MBIST_ve_bist_mode1_ve_vm_2_bist_en_mask                             (0x00000010)
#define  VE_MBIST_ve_bist_mode1_ve_ciblk_bist_en_mask                            (0x00000008)
#define  VE_MBIST_ve_bist_mode1_ve_sr_bist_en_mask                               (0x00000004)
#define  VE_MBIST_ve_bist_mode1_ve_cdef_bist_en_mask                             (0x00000002)
#define  VE_MBIST_ve_bist_mode1_ve_lr_bist_en_mask                               (0x00000001)
#define  VE_MBIST_ve_bist_mode1_ve_pred_2e_bist_en(data)                         (0x00000100&((data)<<8))
#define  VE_MBIST_ve_bist_mode1_ve_rlrmem01_bist_en(data)                        (0x00000080&((data)<<7))
#define  VE_MBIST_ve_bist_mode1_ve_cmprs_1_bist_en(data)                         (0x00000040&((data)<<6))
#define  VE_MBIST_ve_bist_mode1_ve_pred_3_2p_bist_en(data)                       (0x00000020&((data)<<5))
#define  VE_MBIST_ve_bist_mode1_ve_vm_2_bist_en(data)                            (0x00000010&((data)<<4))
#define  VE_MBIST_ve_bist_mode1_ve_ciblk_bist_en(data)                           (0x00000008&((data)<<3))
#define  VE_MBIST_ve_bist_mode1_ve_sr_bist_en(data)                              (0x00000004&((data)<<2))
#define  VE_MBIST_ve_bist_mode1_ve_cdef_bist_en(data)                            (0x00000002&((data)<<1))
#define  VE_MBIST_ve_bist_mode1_ve_lr_bist_en(data)                              (0x00000001&(data))
#define  VE_MBIST_ve_bist_mode1_get_ve_pred_2e_bist_en(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_bist_mode1_get_ve_rlrmem01_bist_en(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_bist_mode1_get_ve_cmprs_1_bist_en(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_bist_mode1_get_ve_pred_3_2p_bist_en(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_bist_mode1_get_ve_vm_2_bist_en(data)                        ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_bist_mode1_get_ve_ciblk_bist_en(data)                       ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_bist_mode1_get_ve_sr_bist_en(data)                          ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_bist_mode1_get_ve_cdef_bist_en(data)                        ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_bist_mode1_get_ve_lr_bist_en(data)                          (0x00000001&(data))

#define  VE_MBIST_ve_bist_done0                                                 0x1800FF0C
#define  VE_MBIST_ve_bist_done0_reg_addr                                         "0xB800FF0C"
#define  VE_MBIST_ve_bist_done0_reg                                              0xB800FF0C
#define  VE_MBIST_ve_bist_done0_inst_addr                                        "0x0004"
#define  set_VE_MBIST_ve_bist_done0_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_ve_bist_done0_reg)=data)
#define  get_VE_MBIST_ve_bist_done0_reg                                          (*((volatile unsigned int*)VE_MBIST_ve_bist_done0_reg))
#define  VE_MBIST_ve_bist_done0_ve_bist_mf2_done_shift                           (31)
#define  VE_MBIST_ve_bist_done0_ve_bist_mf1_done_shift                           (30)
#define  VE_MBIST_ve_bist_done0_ve_bist_mf0_done_shift                           (29)
#define  VE_MBIST_ve_bist_done0_ve_bist_p2mvd_done_shift                         (28)
#define  VE_MBIST_ve_bist_done0_ve_bist_vld_1_done_shift                         (27)
#define  VE_MBIST_ve_bist_done0_ve_bist_p2_done_shift                            (26)
#define  VE_MBIST_ve_bist_done0_ve_bist_clmp_done_shift                          (25)
#define  VE_MBIST_ve_bist_done0_ve_bist_dcmprs_outbuf_done_shift                 (24)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_3_done_shift                        (23)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_2_done_shift                        (22)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_1_done_shift                        (21)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_0_done_shift                        (20)
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_2p_1_done_shift                      (19)
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_2p_0_done_shift                      (18)
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_1p_done_shift                        (17)
#define  VE_MBIST_ve_bist_done0_ve_bist_dcmprs_done_shift                        (16)
#define  VE_MBIST_ve_bist_done0_ve_bist_cmprs_done_shift                         (15)
#define  VE_MBIST_ve_bist_done0_ve_bist_dbk_done_shift                           (14)
#define  VE_MBIST_ve_bist_done0_ve_bist_seg_mvd_done_shift                       (13)
#define  VE_MBIST_ve_bist_done0_ve_bist_rlrmem_mvbuf_done_shift                  (12)
#define  VE_MBIST_ve_bist_done0_ve_bist_cm2_done_shift                           (11)
#define  VE_MBIST_ve_bist_done0_ve_bist_cm1_done_shift                           (10)
#define  VE_MBIST_ve_bist_done0_ve_bist_brg_done_shift                           (9)
#define  VE_MBIST_ve_bist_done0_ve_bist_sao_done_shift                           (8)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_bs_done_shift                         (7)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_1_done_shift                          (6)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_0_1_done_shift                        (5)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_0_0_done_shift                        (4)
#define  VE_MBIST_ve_bist_done0_ve_bist_vm_1_done_shift                          (3)
#define  VE_MBIST_ve_bist_done0_ve_bist_vm_0_done_shift                          (2)
#define  VE_MBIST_ve_bist_done0_ve_bist_vld_0_done_shift                         (1)
#define  VE_MBIST_ve_bist_done0_ve_bist_rif_done_shift                           (0)
#define  VE_MBIST_ve_bist_done0_ve_bist_mf2_done_mask                            (0x80000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_mf1_done_mask                            (0x40000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_mf0_done_mask                            (0x20000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_p2mvd_done_mask                          (0x10000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_vld_1_done_mask                          (0x08000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_p2_done_mask                             (0x04000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_clmp_done_mask                           (0x02000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_dcmprs_outbuf_done_mask                  (0x01000000)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_3_done_mask                         (0x00800000)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_2_done_mask                         (0x00400000)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_1_done_mask                         (0x00200000)
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_0_done_mask                         (0x00100000)
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_2p_1_done_mask                       (0x00080000)
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_2p_0_done_mask                       (0x00040000)
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_1p_done_mask                         (0x00020000)
#define  VE_MBIST_ve_bist_done0_ve_bist_dcmprs_done_mask                         (0x00010000)
#define  VE_MBIST_ve_bist_done0_ve_bist_cmprs_done_mask                          (0x00008000)
#define  VE_MBIST_ve_bist_done0_ve_bist_dbk_done_mask                            (0x00004000)
#define  VE_MBIST_ve_bist_done0_ve_bist_seg_mvd_done_mask                        (0x00002000)
#define  VE_MBIST_ve_bist_done0_ve_bist_rlrmem_mvbuf_done_mask                   (0x00001000)
#define  VE_MBIST_ve_bist_done0_ve_bist_cm2_done_mask                            (0x00000800)
#define  VE_MBIST_ve_bist_done0_ve_bist_cm1_done_mask                            (0x00000400)
#define  VE_MBIST_ve_bist_done0_ve_bist_brg_done_mask                            (0x00000200)
#define  VE_MBIST_ve_bist_done0_ve_bist_sao_done_mask                            (0x00000100)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_bs_done_mask                          (0x00000080)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_1_done_mask                           (0x00000040)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_0_1_done_mask                         (0x00000020)
#define  VE_MBIST_ve_bist_done0_ve_bist_it_0_0_done_mask                         (0x00000010)
#define  VE_MBIST_ve_bist_done0_ve_bist_vm_1_done_mask                           (0x00000008)
#define  VE_MBIST_ve_bist_done0_ve_bist_vm_0_done_mask                           (0x00000004)
#define  VE_MBIST_ve_bist_done0_ve_bist_vld_0_done_mask                          (0x00000002)
#define  VE_MBIST_ve_bist_done0_ve_bist_rif_done_mask                            (0x00000001)
#define  VE_MBIST_ve_bist_done0_ve_bist_mf2_done(data)                           (0x80000000&((data)<<31))
#define  VE_MBIST_ve_bist_done0_ve_bist_mf1_done(data)                           (0x40000000&((data)<<30))
#define  VE_MBIST_ve_bist_done0_ve_bist_mf0_done(data)                           (0x20000000&((data)<<29))
#define  VE_MBIST_ve_bist_done0_ve_bist_p2mvd_done(data)                         (0x10000000&((data)<<28))
#define  VE_MBIST_ve_bist_done0_ve_bist_vld_1_done(data)                         (0x08000000&((data)<<27))
#define  VE_MBIST_ve_bist_done0_ve_bist_p2_done(data)                            (0x04000000&((data)<<26))
#define  VE_MBIST_ve_bist_done0_ve_bist_clmp_done(data)                          (0x02000000&((data)<<25))
#define  VE_MBIST_ve_bist_done0_ve_bist_dcmprs_outbuf_done(data)                 (0x01000000&((data)<<24))
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_3_done(data)                        (0x00800000&((data)<<23))
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_2_done(data)                        (0x00400000&((data)<<22))
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_1_done(data)                        (0x00200000&((data)<<21))
#define  VE_MBIST_ve_bist_done0_ve_bist_pred_0_done(data)                        (0x00100000&((data)<<20))
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_2p_1_done(data)                      (0x00080000&((data)<<19))
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_2p_0_done(data)                      (0x00040000&((data)<<18))
#define  VE_MBIST_ve_bist_done0_ve_bist_cah_1p_done(data)                        (0x00020000&((data)<<17))
#define  VE_MBIST_ve_bist_done0_ve_bist_dcmprs_done(data)                        (0x00010000&((data)<<16))
#define  VE_MBIST_ve_bist_done0_ve_bist_cmprs_done(data)                         (0x00008000&((data)<<15))
#define  VE_MBIST_ve_bist_done0_ve_bist_dbk_done(data)                           (0x00004000&((data)<<14))
#define  VE_MBIST_ve_bist_done0_ve_bist_seg_mvd_done(data)                       (0x00002000&((data)<<13))
#define  VE_MBIST_ve_bist_done0_ve_bist_rlrmem_mvbuf_done(data)                  (0x00001000&((data)<<12))
#define  VE_MBIST_ve_bist_done0_ve_bist_cm2_done(data)                           (0x00000800&((data)<<11))
#define  VE_MBIST_ve_bist_done0_ve_bist_cm1_done(data)                           (0x00000400&((data)<<10))
#define  VE_MBIST_ve_bist_done0_ve_bist_brg_done(data)                           (0x00000200&((data)<<9))
#define  VE_MBIST_ve_bist_done0_ve_bist_sao_done(data)                           (0x00000100&((data)<<8))
#define  VE_MBIST_ve_bist_done0_ve_bist_it_bs_done(data)                         (0x00000080&((data)<<7))
#define  VE_MBIST_ve_bist_done0_ve_bist_it_1_done(data)                          (0x00000040&((data)<<6))
#define  VE_MBIST_ve_bist_done0_ve_bist_it_0_1_done(data)                        (0x00000020&((data)<<5))
#define  VE_MBIST_ve_bist_done0_ve_bist_it_0_0_done(data)                        (0x00000010&((data)<<4))
#define  VE_MBIST_ve_bist_done0_ve_bist_vm_1_done(data)                          (0x00000008&((data)<<3))
#define  VE_MBIST_ve_bist_done0_ve_bist_vm_0_done(data)                          (0x00000004&((data)<<2))
#define  VE_MBIST_ve_bist_done0_ve_bist_vld_0_done(data)                         (0x00000002&((data)<<1))
#define  VE_MBIST_ve_bist_done0_ve_bist_rif_done(data)                           (0x00000001&(data))
#define  VE_MBIST_ve_bist_done0_get_ve_bist_mf2_done(data)                       ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_mf1_done(data)                       ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_mf0_done(data)                       ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_p2mvd_done(data)                     ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_vld_1_done(data)                     ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_p2_done(data)                        ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_clmp_done(data)                      ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_dcmprs_outbuf_done(data)             ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_pred_3_done(data)                    ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_pred_2_done(data)                    ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_pred_1_done(data)                    ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_pred_0_done(data)                    ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_cah_2p_1_done(data)                  ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_cah_2p_0_done(data)                  ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_cah_1p_done(data)                    ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_dcmprs_done(data)                    ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_cmprs_done(data)                     ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_dbk_done(data)                       ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_seg_mvd_done(data)                   ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_rlrmem_mvbuf_done(data)              ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_cm2_done(data)                       ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_cm1_done(data)                       ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_brg_done(data)                       ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_sao_done(data)                       ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_it_bs_done(data)                     ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_it_1_done(data)                      ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_it_0_1_done(data)                    ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_it_0_0_done(data)                    ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_vm_1_done(data)                      ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_vm_0_done(data)                      ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_vld_0_done(data)                     ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_bist_done0_get_ve_bist_rif_done(data)                       (0x00000001&(data))

#define  VE_MBIST_ve_bist_done1                                                 0x1800FF10
#define  VE_MBIST_ve_bist_done1_reg_addr                                         "0xB800FF10"
#define  VE_MBIST_ve_bist_done1_reg                                              0xB800FF10
#define  VE_MBIST_ve_bist_done1_inst_addr                                        "0x0005"
#define  set_VE_MBIST_ve_bist_done1_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_ve_bist_done1_reg)=data)
#define  get_VE_MBIST_ve_bist_done1_reg                                          (*((volatile unsigned int*)VE_MBIST_ve_bist_done1_reg))
#define  VE_MBIST_ve_bist_done1_ve_bist_pred_2e_done_shift                       (8)
#define  VE_MBIST_ve_bist_done1_ve_bist_rlrmem01_done_shift                      (7)
#define  VE_MBIST_ve_bist_done1_ve_bist_cmprs_1_done_shift                       (6)
#define  VE_MBIST_ve_bist_done1_ve_bist_pred_3_2p_done_shift                     (5)
#define  VE_MBIST_ve_bist_done1_ve_bist_vm_2_done_shift                          (4)
#define  VE_MBIST_ve_bist_done1_ve_bist_ciblk_done_shift                         (3)
#define  VE_MBIST_ve_bist_done1_ve_bist_sr_done_shift                            (2)
#define  VE_MBIST_ve_bist_done1_ve_bist_cdef_done_shift                          (1)
#define  VE_MBIST_ve_bist_done1_ve_bist_lr_done_shift                            (0)
#define  VE_MBIST_ve_bist_done1_ve_bist_pred_2e_done_mask                        (0x00000100)
#define  VE_MBIST_ve_bist_done1_ve_bist_rlrmem01_done_mask                       (0x00000080)
#define  VE_MBIST_ve_bist_done1_ve_bist_cmprs_1_done_mask                        (0x00000040)
#define  VE_MBIST_ve_bist_done1_ve_bist_pred_3_2p_done_mask                      (0x00000020)
#define  VE_MBIST_ve_bist_done1_ve_bist_vm_2_done_mask                           (0x00000010)
#define  VE_MBIST_ve_bist_done1_ve_bist_ciblk_done_mask                          (0x00000008)
#define  VE_MBIST_ve_bist_done1_ve_bist_sr_done_mask                             (0x00000004)
#define  VE_MBIST_ve_bist_done1_ve_bist_cdef_done_mask                           (0x00000002)
#define  VE_MBIST_ve_bist_done1_ve_bist_lr_done_mask                             (0x00000001)
#define  VE_MBIST_ve_bist_done1_ve_bist_pred_2e_done(data)                       (0x00000100&((data)<<8))
#define  VE_MBIST_ve_bist_done1_ve_bist_rlrmem01_done(data)                      (0x00000080&((data)<<7))
#define  VE_MBIST_ve_bist_done1_ve_bist_cmprs_1_done(data)                       (0x00000040&((data)<<6))
#define  VE_MBIST_ve_bist_done1_ve_bist_pred_3_2p_done(data)                     (0x00000020&((data)<<5))
#define  VE_MBIST_ve_bist_done1_ve_bist_vm_2_done(data)                          (0x00000010&((data)<<4))
#define  VE_MBIST_ve_bist_done1_ve_bist_ciblk_done(data)                         (0x00000008&((data)<<3))
#define  VE_MBIST_ve_bist_done1_ve_bist_sr_done(data)                            (0x00000004&((data)<<2))
#define  VE_MBIST_ve_bist_done1_ve_bist_cdef_done(data)                          (0x00000002&((data)<<1))
#define  VE_MBIST_ve_bist_done1_ve_bist_lr_done(data)                            (0x00000001&(data))
#define  VE_MBIST_ve_bist_done1_get_ve_bist_pred_2e_done(data)                   ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_rlrmem01_done(data)                  ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_cmprs_1_done(data)                   ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_pred_3_2p_done(data)                 ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_vm_2_done(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_ciblk_done(data)                     ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_sr_done(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_cdef_done(data)                      ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_bist_done1_get_ve_bist_lr_done(data)                        (0x00000001&(data))

#define  VE_MBIST_ve_bist_fail_group0                                           0x1800FF14
#define  VE_MBIST_ve_bist_fail_group0_reg_addr                                   "0xB800FF14"
#define  VE_MBIST_ve_bist_fail_group0_reg                                        0xB800FF14
#define  VE_MBIST_ve_bist_fail_group0_inst_addr                                  "0x0006"
#define  set_VE_MBIST_ve_bist_fail_group0_reg(data)                              (*((volatile unsigned int*)VE_MBIST_ve_bist_fail_group0_reg)=data)
#define  get_VE_MBIST_ve_bist_fail_group0_reg                                    (*((volatile unsigned int*)VE_MBIST_ve_bist_fail_group0_reg))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf2_fail_group_shift               (31)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf1_fail_group_shift               (30)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf0_fail_group_shift               (29)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_p2mvd_fail_group_shift             (28)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vld_1_fail_group_shift             (27)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_p2_fail_group_shift                (26)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_clmp_fail_group_shift              (25)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dcmprs_outbuf_fail_group_shift     (24)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_3_fail_group_shift            (23)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_2_fail_group_shift            (22)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_1_fail_group_shift            (21)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_0_fail_group_shift            (20)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_2p_1_fail_group_shift          (19)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_2p_0_fail_group_shift          (18)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_1p_fail_group_shift            (17)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dcmprs_fail_group_shift            (16)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cmprs_fail_group_shift             (15)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dbk_fail_group_shift               (14)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_seg_mvd_fail_group_shift           (13)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_rlrmem_mvbuf_fail_group_shift      (12)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cm2_fail_group_shift               (11)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cm1_fail_group_shift               (10)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_brg_fail_group_shift               (9)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_sao_fail_group_shift               (8)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_bs_fail_group_shift             (7)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_1_fail_group_shift              (6)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_0_1_fail_group_shift            (5)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_0_0_fail_group_shift            (4)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vm_1_fail_group_shift              (3)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vm_0_fail_group_shift              (2)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vld_0_fail_group_shift             (1)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_rif_fail_group_shift               (0)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf2_fail_group_mask                (0x80000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf1_fail_group_mask                (0x40000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf0_fail_group_mask                (0x20000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_p2mvd_fail_group_mask              (0x10000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vld_1_fail_group_mask              (0x08000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_p2_fail_group_mask                 (0x04000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_clmp_fail_group_mask               (0x02000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dcmprs_outbuf_fail_group_mask      (0x01000000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_3_fail_group_mask             (0x00800000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_2_fail_group_mask             (0x00400000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_1_fail_group_mask             (0x00200000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_0_fail_group_mask             (0x00100000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_2p_1_fail_group_mask           (0x00080000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_2p_0_fail_group_mask           (0x00040000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_1p_fail_group_mask             (0x00020000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dcmprs_fail_group_mask             (0x00010000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cmprs_fail_group_mask              (0x00008000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dbk_fail_group_mask                (0x00004000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_seg_mvd_fail_group_mask            (0x00002000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_rlrmem_mvbuf_fail_group_mask       (0x00001000)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cm2_fail_group_mask                (0x00000800)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cm1_fail_group_mask                (0x00000400)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_brg_fail_group_mask                (0x00000200)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_sao_fail_group_mask                (0x00000100)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_bs_fail_group_mask              (0x00000080)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_1_fail_group_mask               (0x00000040)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_0_1_fail_group_mask             (0x00000020)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_0_0_fail_group_mask             (0x00000010)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vm_1_fail_group_mask               (0x00000008)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vm_0_fail_group_mask               (0x00000004)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vld_0_fail_group_mask              (0x00000002)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_rif_fail_group_mask                (0x00000001)
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf2_fail_group(data)               (0x80000000&((data)<<31))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf1_fail_group(data)               (0x40000000&((data)<<30))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_mf0_fail_group(data)               (0x20000000&((data)<<29))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_p2mvd_fail_group(data)             (0x10000000&((data)<<28))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vld_1_fail_group(data)             (0x08000000&((data)<<27))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_p2_fail_group(data)                (0x04000000&((data)<<26))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_clmp_fail_group(data)              (0x02000000&((data)<<25))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dcmprs_outbuf_fail_group(data)     (0x01000000&((data)<<24))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_3_fail_group(data)            (0x00800000&((data)<<23))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_2_fail_group(data)            (0x00400000&((data)<<22))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_1_fail_group(data)            (0x00200000&((data)<<21))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_pred_0_fail_group(data)            (0x00100000&((data)<<20))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_2p_1_fail_group(data)          (0x00080000&((data)<<19))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_2p_0_fail_group(data)          (0x00040000&((data)<<18))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cah_1p_fail_group(data)            (0x00020000&((data)<<17))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dcmprs_fail_group(data)            (0x00010000&((data)<<16))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cmprs_fail_group(data)             (0x00008000&((data)<<15))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_dbk_fail_group(data)               (0x00004000&((data)<<14))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_seg_mvd_fail_group(data)           (0x00002000&((data)<<13))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_rlrmem_mvbuf_fail_group(data)      (0x00001000&((data)<<12))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cm2_fail_group(data)               (0x00000800&((data)<<11))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_cm1_fail_group(data)               (0x00000400&((data)<<10))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_brg_fail_group(data)               (0x00000200&((data)<<9))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_sao_fail_group(data)               (0x00000100&((data)<<8))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_bs_fail_group(data)             (0x00000080&((data)<<7))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_1_fail_group(data)              (0x00000040&((data)<<6))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_0_1_fail_group(data)            (0x00000020&((data)<<5))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_it_0_0_fail_group(data)            (0x00000010&((data)<<4))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vm_1_fail_group(data)              (0x00000008&((data)<<3))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vm_0_fail_group(data)              (0x00000004&((data)<<2))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_vld_0_fail_group(data)             (0x00000002&((data)<<1))
#define  VE_MBIST_ve_bist_fail_group0_ve_bist_rif_fail_group(data)               (0x00000001&(data))
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_mf2_fail_group(data)           ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_mf1_fail_group(data)           ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_mf0_fail_group(data)           ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_p2mvd_fail_group(data)         ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_vld_1_fail_group(data)         ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_p2_fail_group(data)            ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_clmp_fail_group(data)          ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_dcmprs_outbuf_fail_group(data) ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_pred_3_fail_group(data)        ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_pred_2_fail_group(data)        ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_pred_1_fail_group(data)        ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_pred_0_fail_group(data)        ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_cah_2p_1_fail_group(data)      ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_cah_2p_0_fail_group(data)      ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_cah_1p_fail_group(data)        ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_dcmprs_fail_group(data)        ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_cmprs_fail_group(data)         ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_dbk_fail_group(data)           ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_seg_mvd_fail_group(data)       ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_rlrmem_mvbuf_fail_group(data)  ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_cm2_fail_group(data)           ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_cm1_fail_group(data)           ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_brg_fail_group(data)           ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_sao_fail_group(data)           ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_it_bs_fail_group(data)         ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_it_1_fail_group(data)          ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_it_0_1_fail_group(data)        ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_it_0_0_fail_group(data)        ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_vm_1_fail_group(data)          ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_vm_0_fail_group(data)          ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_vld_0_fail_group(data)         ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_bist_fail_group0_get_ve_bist_rif_fail_group(data)           (0x00000001&(data))

#define  VE_MBIST_ve_bist_fail_group1                                           0x1800FF18
#define  VE_MBIST_ve_bist_fail_group1_reg_addr                                   "0xB800FF18"
#define  VE_MBIST_ve_bist_fail_group1_reg                                        0xB800FF18
#define  VE_MBIST_ve_bist_fail_group1_inst_addr                                  "0x0007"
#define  set_VE_MBIST_ve_bist_fail_group1_reg(data)                              (*((volatile unsigned int*)VE_MBIST_ve_bist_fail_group1_reg)=data)
#define  get_VE_MBIST_ve_bist_fail_group1_reg                                    (*((volatile unsigned int*)VE_MBIST_ve_bist_fail_group1_reg))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_pred_2e_fail_group_shift           (8)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_rlrmem01_fail_group_shift          (7)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_cmprs_1_fail_group_shift           (6)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_pred_3_2p_fail_group_shift         (5)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_vm_2_fail_group_shift              (4)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_ciblk_fail_group_shift             (3)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_sr_fail_group_shift                (2)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_cdef_fail_group_shift              (1)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_lr_fail_group_shift                (0)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_pred_2e_fail_group_mask            (0x00000100)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_rlrmem01_fail_group_mask           (0x00000080)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_cmprs_1_fail_group_mask            (0x00000040)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_pred_3_2p_fail_group_mask          (0x00000020)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_vm_2_fail_group_mask               (0x00000010)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_ciblk_fail_group_mask              (0x00000008)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_sr_fail_group_mask                 (0x00000004)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_cdef_fail_group_mask               (0x00000002)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_lr_fail_group_mask                 (0x00000001)
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_pred_2e_fail_group(data)           (0x00000100&((data)<<8))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_rlrmem01_fail_group(data)          (0x00000080&((data)<<7))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_cmprs_1_fail_group(data)           (0x00000040&((data)<<6))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_pred_3_2p_fail_group(data)         (0x00000020&((data)<<5))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_vm_2_fail_group(data)              (0x00000010&((data)<<4))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_ciblk_fail_group(data)             (0x00000008&((data)<<3))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_sr_fail_group(data)                (0x00000004&((data)<<2))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_cdef_fail_group(data)              (0x00000002&((data)<<1))
#define  VE_MBIST_ve_bist_fail_group1_ve_bist_lr_fail_group(data)                (0x00000001&(data))
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_pred_2e_fail_group(data)       ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_rlrmem01_fail_group(data)      ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_cmprs_1_fail_group(data)       ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_pred_3_2p_fail_group(data)     ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_vm_2_fail_group(data)          ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_ciblk_fail_group(data)         ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_sr_fail_group(data)            ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_cdef_fail_group(data)          ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_bist_fail_group1_get_ve_bist_lr_fail_group(data)            (0x00000001&(data))

#define  VE_MBIST_ve_drf_mode0                                                  0x1800FF1C
#define  VE_MBIST_ve_drf_mode0_reg_addr                                          "0xB800FF1C"
#define  VE_MBIST_ve_drf_mode0_reg                                               0xB800FF1C
#define  VE_MBIST_ve_drf_mode0_inst_addr                                         "0x0008"
#define  set_VE_MBIST_ve_drf_mode0_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_ve_drf_mode0_reg)=data)
#define  get_VE_MBIST_ve_drf_mode0_reg                                           (*((volatile unsigned int*)VE_MBIST_ve_drf_mode0_reg))
#define  VE_MBIST_ve_drf_mode0_ve_mf2_drf_bist_en_shift                          (31)
#define  VE_MBIST_ve_drf_mode0_ve_mf1_drf_bist_en_shift                          (30)
#define  VE_MBIST_ve_drf_mode0_ve_mf0_drf_bist_en_shift                          (29)
#define  VE_MBIST_ve_drf_mode0_ve_p2mvd_drf_bist_en_shift                        (28)
#define  VE_MBIST_ve_drf_mode0_ve_vld_1_drf_bist_en_shift                        (27)
#define  VE_MBIST_ve_drf_mode0_ve_p2_drf_bist_en_shift                           (26)
#define  VE_MBIST_ve_drf_mode0_ve_clmp_drf_bist_en_shift                         (25)
#define  VE_MBIST_ve_drf_mode0_ve_dcmprs_outbuf_drf_bist_en_shift                (24)
#define  VE_MBIST_ve_drf_mode0_ve_pred_3_drf_bist_en_shift                       (23)
#define  VE_MBIST_ve_drf_mode0_ve_pred_2_drf_bist_en_shift                       (22)
#define  VE_MBIST_ve_drf_mode0_ve_pred_1_drf_bist_en_shift                       (21)
#define  VE_MBIST_ve_drf_mode0_ve_pred_0_drf_bist_en_shift                       (20)
#define  VE_MBIST_ve_drf_mode0_ve_cah_2p_1_drf_bist_en_shift                     (19)
#define  VE_MBIST_ve_drf_mode0_ve_cah_2p_0_drf_bist_en_shift                     (18)
#define  VE_MBIST_ve_drf_mode0_ve_cah_1p_drf_bist_en_shift                       (17)
#define  VE_MBIST_ve_drf_mode0_ve_dcmprs_drf_bist_en_shift                       (16)
#define  VE_MBIST_ve_drf_mode0_ve_cmprs_drf_bist_en_shift                        (15)
#define  VE_MBIST_ve_drf_mode0_ve_dbk_drf_bist_en_shift                          (14)
#define  VE_MBIST_ve_drf_mode0_ve_seg_mvd_drf_bist_en_shift                      (13)
#define  VE_MBIST_ve_drf_mode0_ve_rlrmem_mvbuf_drf_bist_en_shift                 (12)
#define  VE_MBIST_ve_drf_mode0_ve_cm2_drf_bist_en_shift                          (11)
#define  VE_MBIST_ve_drf_mode0_ve_cm1_drf_bist_en_shift                          (10)
#define  VE_MBIST_ve_drf_mode0_ve_brg_drf_bist_en_shift                          (9)
#define  VE_MBIST_ve_drf_mode0_ve_sao_drf_bist_en_shift                          (8)
#define  VE_MBIST_ve_drf_mode0_ve_it_bs_drf_bist_en_shift                        (7)
#define  VE_MBIST_ve_drf_mode0_ve_it_1_drf_bist_en_shift                         (6)
#define  VE_MBIST_ve_drf_mode0_ve_it_0_1_drf_bist_en_shift                       (5)
#define  VE_MBIST_ve_drf_mode0_ve_it_0_0_drf_bist_en_shift                       (4)
#define  VE_MBIST_ve_drf_mode0_ve_vm_1_drf_bist_en_shift                         (3)
#define  VE_MBIST_ve_drf_mode0_ve_vm_0_drf_bist_en_shift                         (2)
#define  VE_MBIST_ve_drf_mode0_ve_vld_0_drf_bist_en_shift                        (1)
#define  VE_MBIST_ve_drf_mode0_ve_rif_drf_bist_en_shift                          (0)
#define  VE_MBIST_ve_drf_mode0_ve_mf2_drf_bist_en_mask                           (0x80000000)
#define  VE_MBIST_ve_drf_mode0_ve_mf1_drf_bist_en_mask                           (0x40000000)
#define  VE_MBIST_ve_drf_mode0_ve_mf0_drf_bist_en_mask                           (0x20000000)
#define  VE_MBIST_ve_drf_mode0_ve_p2mvd_drf_bist_en_mask                         (0x10000000)
#define  VE_MBIST_ve_drf_mode0_ve_vld_1_drf_bist_en_mask                         (0x08000000)
#define  VE_MBIST_ve_drf_mode0_ve_p2_drf_bist_en_mask                            (0x04000000)
#define  VE_MBIST_ve_drf_mode0_ve_clmp_drf_bist_en_mask                          (0x02000000)
#define  VE_MBIST_ve_drf_mode0_ve_dcmprs_outbuf_drf_bist_en_mask                 (0x01000000)
#define  VE_MBIST_ve_drf_mode0_ve_pred_3_drf_bist_en_mask                        (0x00800000)
#define  VE_MBIST_ve_drf_mode0_ve_pred_2_drf_bist_en_mask                        (0x00400000)
#define  VE_MBIST_ve_drf_mode0_ve_pred_1_drf_bist_en_mask                        (0x00200000)
#define  VE_MBIST_ve_drf_mode0_ve_pred_0_drf_bist_en_mask                        (0x00100000)
#define  VE_MBIST_ve_drf_mode0_ve_cah_2p_1_drf_bist_en_mask                      (0x00080000)
#define  VE_MBIST_ve_drf_mode0_ve_cah_2p_0_drf_bist_en_mask                      (0x00040000)
#define  VE_MBIST_ve_drf_mode0_ve_cah_1p_drf_bist_en_mask                        (0x00020000)
#define  VE_MBIST_ve_drf_mode0_ve_dcmprs_drf_bist_en_mask                        (0x00010000)
#define  VE_MBIST_ve_drf_mode0_ve_cmprs_drf_bist_en_mask                         (0x00008000)
#define  VE_MBIST_ve_drf_mode0_ve_dbk_drf_bist_en_mask                           (0x00004000)
#define  VE_MBIST_ve_drf_mode0_ve_seg_mvd_drf_bist_en_mask                       (0x00002000)
#define  VE_MBIST_ve_drf_mode0_ve_rlrmem_mvbuf_drf_bist_en_mask                  (0x00001000)
#define  VE_MBIST_ve_drf_mode0_ve_cm2_drf_bist_en_mask                           (0x00000800)
#define  VE_MBIST_ve_drf_mode0_ve_cm1_drf_bist_en_mask                           (0x00000400)
#define  VE_MBIST_ve_drf_mode0_ve_brg_drf_bist_en_mask                           (0x00000200)
#define  VE_MBIST_ve_drf_mode0_ve_sao_drf_bist_en_mask                           (0x00000100)
#define  VE_MBIST_ve_drf_mode0_ve_it_bs_drf_bist_en_mask                         (0x00000080)
#define  VE_MBIST_ve_drf_mode0_ve_it_1_drf_bist_en_mask                          (0x00000040)
#define  VE_MBIST_ve_drf_mode0_ve_it_0_1_drf_bist_en_mask                        (0x00000020)
#define  VE_MBIST_ve_drf_mode0_ve_it_0_0_drf_bist_en_mask                        (0x00000010)
#define  VE_MBIST_ve_drf_mode0_ve_vm_1_drf_bist_en_mask                          (0x00000008)
#define  VE_MBIST_ve_drf_mode0_ve_vm_0_drf_bist_en_mask                          (0x00000004)
#define  VE_MBIST_ve_drf_mode0_ve_vld_0_drf_bist_en_mask                         (0x00000002)
#define  VE_MBIST_ve_drf_mode0_ve_rif_drf_bist_en_mask                           (0x00000001)
#define  VE_MBIST_ve_drf_mode0_ve_mf2_drf_bist_en(data)                          (0x80000000&((data)<<31))
#define  VE_MBIST_ve_drf_mode0_ve_mf1_drf_bist_en(data)                          (0x40000000&((data)<<30))
#define  VE_MBIST_ve_drf_mode0_ve_mf0_drf_bist_en(data)                          (0x20000000&((data)<<29))
#define  VE_MBIST_ve_drf_mode0_ve_p2mvd_drf_bist_en(data)                        (0x10000000&((data)<<28))
#define  VE_MBIST_ve_drf_mode0_ve_vld_1_drf_bist_en(data)                        (0x08000000&((data)<<27))
#define  VE_MBIST_ve_drf_mode0_ve_p2_drf_bist_en(data)                           (0x04000000&((data)<<26))
#define  VE_MBIST_ve_drf_mode0_ve_clmp_drf_bist_en(data)                         (0x02000000&((data)<<25))
#define  VE_MBIST_ve_drf_mode0_ve_dcmprs_outbuf_drf_bist_en(data)                (0x01000000&((data)<<24))
#define  VE_MBIST_ve_drf_mode0_ve_pred_3_drf_bist_en(data)                       (0x00800000&((data)<<23))
#define  VE_MBIST_ve_drf_mode0_ve_pred_2_drf_bist_en(data)                       (0x00400000&((data)<<22))
#define  VE_MBIST_ve_drf_mode0_ve_pred_1_drf_bist_en(data)                       (0x00200000&((data)<<21))
#define  VE_MBIST_ve_drf_mode0_ve_pred_0_drf_bist_en(data)                       (0x00100000&((data)<<20))
#define  VE_MBIST_ve_drf_mode0_ve_cah_2p_1_drf_bist_en(data)                     (0x00080000&((data)<<19))
#define  VE_MBIST_ve_drf_mode0_ve_cah_2p_0_drf_bist_en(data)                     (0x00040000&((data)<<18))
#define  VE_MBIST_ve_drf_mode0_ve_cah_1p_drf_bist_en(data)                       (0x00020000&((data)<<17))
#define  VE_MBIST_ve_drf_mode0_ve_dcmprs_drf_bist_en(data)                       (0x00010000&((data)<<16))
#define  VE_MBIST_ve_drf_mode0_ve_cmprs_drf_bist_en(data)                        (0x00008000&((data)<<15))
#define  VE_MBIST_ve_drf_mode0_ve_dbk_drf_bist_en(data)                          (0x00004000&((data)<<14))
#define  VE_MBIST_ve_drf_mode0_ve_seg_mvd_drf_bist_en(data)                      (0x00002000&((data)<<13))
#define  VE_MBIST_ve_drf_mode0_ve_rlrmem_mvbuf_drf_bist_en(data)                 (0x00001000&((data)<<12))
#define  VE_MBIST_ve_drf_mode0_ve_cm2_drf_bist_en(data)                          (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_mode0_ve_cm1_drf_bist_en(data)                          (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_mode0_ve_brg_drf_bist_en(data)                          (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_mode0_ve_sao_drf_bist_en(data)                          (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_mode0_ve_it_bs_drf_bist_en(data)                        (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_mode0_ve_it_1_drf_bist_en(data)                         (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_mode0_ve_it_0_1_drf_bist_en(data)                       (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_mode0_ve_it_0_0_drf_bist_en(data)                       (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_mode0_ve_vm_1_drf_bist_en(data)                         (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_mode0_ve_vm_0_drf_bist_en(data)                         (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_mode0_ve_vld_0_drf_bist_en(data)                        (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_mode0_ve_rif_drf_bist_en(data)                          (0x00000001&(data))
#define  VE_MBIST_ve_drf_mode0_get_ve_mf2_drf_bist_en(data)                      ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_drf_mode0_get_ve_mf1_drf_bist_en(data)                      ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_drf_mode0_get_ve_mf0_drf_bist_en(data)                      ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_drf_mode0_get_ve_p2mvd_drf_bist_en(data)                    ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_drf_mode0_get_ve_vld_1_drf_bist_en(data)                    ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_drf_mode0_get_ve_p2_drf_bist_en(data)                       ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_drf_mode0_get_ve_clmp_drf_bist_en(data)                     ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_drf_mode0_get_ve_dcmprs_outbuf_drf_bist_en(data)            ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_drf_mode0_get_ve_pred_3_drf_bist_en(data)                   ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_drf_mode0_get_ve_pred_2_drf_bist_en(data)                   ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_drf_mode0_get_ve_pred_1_drf_bist_en(data)                   ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_drf_mode0_get_ve_pred_0_drf_bist_en(data)                   ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_drf_mode0_get_ve_cah_2p_1_drf_bist_en(data)                 ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_drf_mode0_get_ve_cah_2p_0_drf_bist_en(data)                 ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_drf_mode0_get_ve_cah_1p_drf_bist_en(data)                   ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_drf_mode0_get_ve_dcmprs_drf_bist_en(data)                   ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_drf_mode0_get_ve_cmprs_drf_bist_en(data)                    ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_drf_mode0_get_ve_dbk_drf_bist_en(data)                      ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_drf_mode0_get_ve_seg_mvd_drf_bist_en(data)                  ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_drf_mode0_get_ve_rlrmem_mvbuf_drf_bist_en(data)             ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_drf_mode0_get_ve_cm2_drf_bist_en(data)                      ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_mode0_get_ve_cm1_drf_bist_en(data)                      ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_mode0_get_ve_brg_drf_bist_en(data)                      ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_mode0_get_ve_sao_drf_bist_en(data)                      ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_mode0_get_ve_it_bs_drf_bist_en(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_mode0_get_ve_it_1_drf_bist_en(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_mode0_get_ve_it_0_1_drf_bist_en(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_mode0_get_ve_it_0_0_drf_bist_en(data)                   ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_mode0_get_ve_vm_1_drf_bist_en(data)                     ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_mode0_get_ve_vm_0_drf_bist_en(data)                     ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_mode0_get_ve_vld_0_drf_bist_en(data)                    ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_mode0_get_ve_rif_drf_bist_en(data)                      (0x00000001&(data))

#define  VE_MBIST_ve_drf_mode1                                                  0x1800FF20
#define  VE_MBIST_ve_drf_mode1_reg_addr                                          "0xB800FF20"
#define  VE_MBIST_ve_drf_mode1_reg                                               0xB800FF20
#define  VE_MBIST_ve_drf_mode1_inst_addr                                         "0x0009"
#define  set_VE_MBIST_ve_drf_mode1_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_ve_drf_mode1_reg)=data)
#define  get_VE_MBIST_ve_drf_mode1_reg                                           (*((volatile unsigned int*)VE_MBIST_ve_drf_mode1_reg))
#define  VE_MBIST_ve_drf_mode1_ve_ngh_2_bisr_drf_bist_en_shift                   (11)
#define  VE_MBIST_ve_drf_mode1_ve_ngh_bisr_drf_bist_en_shift                     (10)
#define  VE_MBIST_ve_drf_mode1_ve_cah_bisr_drf_bist_en_shift                     (9)
#define  VE_MBIST_ve_drf_mode1_ve_pred_2e_drf_bist_en_shift                      (8)
#define  VE_MBIST_ve_drf_mode1_ve_rlrmem01_drf_bist_en_shift                     (7)
#define  VE_MBIST_ve_drf_mode1_ve_cmprs_1_drf_bist_en_shift                      (6)
#define  VE_MBIST_ve_drf_mode1_ve_pred_3_2p_drf_bist_en_shift                    (5)
#define  VE_MBIST_ve_drf_mode1_ve_vm_2_drf_bist_en_shift                         (4)
#define  VE_MBIST_ve_drf_mode1_ve_ciblk_drf_bist_en_shift                        (3)
#define  VE_MBIST_ve_drf_mode1_ve_sr_drf_bist_en_shift                           (2)
#define  VE_MBIST_ve_drf_mode1_ve_cdef_drf_bist_en_shift                         (1)
#define  VE_MBIST_ve_drf_mode1_ve_lr_drf_bist_en_shift                           (0)
#define  VE_MBIST_ve_drf_mode1_ve_ngh_2_bisr_drf_bist_en_mask                    (0x00000800)
#define  VE_MBIST_ve_drf_mode1_ve_ngh_bisr_drf_bist_en_mask                      (0x00000400)
#define  VE_MBIST_ve_drf_mode1_ve_cah_bisr_drf_bist_en_mask                      (0x00000200)
#define  VE_MBIST_ve_drf_mode1_ve_pred_2e_drf_bist_en_mask                       (0x00000100)
#define  VE_MBIST_ve_drf_mode1_ve_rlrmem01_drf_bist_en_mask                      (0x00000080)
#define  VE_MBIST_ve_drf_mode1_ve_cmprs_1_drf_bist_en_mask                       (0x00000040)
#define  VE_MBIST_ve_drf_mode1_ve_pred_3_2p_drf_bist_en_mask                     (0x00000020)
#define  VE_MBIST_ve_drf_mode1_ve_vm_2_drf_bist_en_mask                          (0x00000010)
#define  VE_MBIST_ve_drf_mode1_ve_ciblk_drf_bist_en_mask                         (0x00000008)
#define  VE_MBIST_ve_drf_mode1_ve_sr_drf_bist_en_mask                            (0x00000004)
#define  VE_MBIST_ve_drf_mode1_ve_cdef_drf_bist_en_mask                          (0x00000002)
#define  VE_MBIST_ve_drf_mode1_ve_lr_drf_bist_en_mask                            (0x00000001)
#define  VE_MBIST_ve_drf_mode1_ve_ngh_2_bisr_drf_bist_en(data)                   (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_mode1_ve_ngh_bisr_drf_bist_en(data)                     (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_mode1_ve_cah_bisr_drf_bist_en(data)                     (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_mode1_ve_pred_2e_drf_bist_en(data)                      (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_mode1_ve_rlrmem01_drf_bist_en(data)                     (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_mode1_ve_cmprs_1_drf_bist_en(data)                      (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_mode1_ve_pred_3_2p_drf_bist_en(data)                    (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_mode1_ve_vm_2_drf_bist_en(data)                         (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_mode1_ve_ciblk_drf_bist_en(data)                        (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_mode1_ve_sr_drf_bist_en(data)                           (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_mode1_ve_cdef_drf_bist_en(data)                         (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_mode1_ve_lr_drf_bist_en(data)                           (0x00000001&(data))
#define  VE_MBIST_ve_drf_mode1_get_ve_ngh_2_bisr_drf_bist_en(data)               ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_mode1_get_ve_ngh_bisr_drf_bist_en(data)                 ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_mode1_get_ve_cah_bisr_drf_bist_en(data)                 ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_mode1_get_ve_pred_2e_drf_bist_en(data)                  ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_mode1_get_ve_rlrmem01_drf_bist_en(data)                 ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_mode1_get_ve_cmprs_1_drf_bist_en(data)                  ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_mode1_get_ve_pred_3_2p_drf_bist_en(data)                ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_mode1_get_ve_vm_2_drf_bist_en(data)                     ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_mode1_get_ve_ciblk_drf_bist_en(data)                    ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_mode1_get_ve_sr_drf_bist_en(data)                       ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_mode1_get_ve_cdef_drf_bist_en(data)                     ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_mode1_get_ve_lr_drf_bist_en(data)                       (0x00000001&(data))

#define  VE_MBIST_ve_drf_resume0                                                0x1800FF24
#define  VE_MBIST_ve_drf_resume0_reg_addr                                        "0xB800FF24"
#define  VE_MBIST_ve_drf_resume0_reg                                             0xB800FF24
#define  VE_MBIST_ve_drf_resume0_inst_addr                                       "0x000A"
#define  set_VE_MBIST_ve_drf_resume0_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_resume0_reg)=data)
#define  get_VE_MBIST_ve_drf_resume0_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_resume0_reg))
#define  VE_MBIST_ve_drf_resume0_ve_mf2_drf_resume_shift                         (31)
#define  VE_MBIST_ve_drf_resume0_ve_mf1_drf_resume_shift                         (30)
#define  VE_MBIST_ve_drf_resume0_ve_mf0_drf_resume_shift                         (29)
#define  VE_MBIST_ve_drf_resume0_ve_p2mvd_drf_resume_shift                       (28)
#define  VE_MBIST_ve_drf_resume0_ve_vld_1_drf_resume_shift                       (27)
#define  VE_MBIST_ve_drf_resume0_ve_p2_drf_resume_shift                          (26)
#define  VE_MBIST_ve_drf_resume0_ve_clmp_drf_resume_shift                        (25)
#define  VE_MBIST_ve_drf_resume0_ve_dcmprs_outbuf_drf_resume_shift               (24)
#define  VE_MBIST_ve_drf_resume0_ve_pred_3_drf_resume_shift                      (23)
#define  VE_MBIST_ve_drf_resume0_ve_pred_2_drf_resume_shift                      (22)
#define  VE_MBIST_ve_drf_resume0_ve_pred_0_drf_resume_shift                      (21)
#define  VE_MBIST_ve_drf_resume0_ve_pred_1_drf_resume_shift                      (20)
#define  VE_MBIST_ve_drf_resume0_ve_cah_2p_1_drf_resume_shift                    (19)
#define  VE_MBIST_ve_drf_resume0_ve_cah_2p_0_drf_resume_shift                    (18)
#define  VE_MBIST_ve_drf_resume0_ve_cah_1p_drf_resume_shift                      (17)
#define  VE_MBIST_ve_drf_resume0_ve_dcmprs_drf_resume_shift                      (16)
#define  VE_MBIST_ve_drf_resume0_ve_cmprs_drf_resume_shift                       (15)
#define  VE_MBIST_ve_drf_resume0_ve_dbk_drf_resume_shift                         (14)
#define  VE_MBIST_ve_drf_resume0_ve_seg_mvd_drf_resume_shift                     (13)
#define  VE_MBIST_ve_drf_resume0_ve_rlrmem_mvbuf_drf_resume_shift                (12)
#define  VE_MBIST_ve_drf_resume0_ve_cm2_drf_resume_shift                         (11)
#define  VE_MBIST_ve_drf_resume0_ve_cm1_drf_resume_shift                         (10)
#define  VE_MBIST_ve_drf_resume0_ve_brg_drf_resume_shift                         (9)
#define  VE_MBIST_ve_drf_resume0_ve_sao_drf_resume_shift                         (8)
#define  VE_MBIST_ve_drf_resume0_ve_it_bs_drf_resume_shift                       (7)
#define  VE_MBIST_ve_drf_resume0_ve_it_1_drf_resume_shift                        (6)
#define  VE_MBIST_ve_drf_resume0_ve_it_0_1_drf_resume_shift                      (5)
#define  VE_MBIST_ve_drf_resume0_ve_it_0_0_drf_resume_shift                      (4)
#define  VE_MBIST_ve_drf_resume0_ve_vm_1_drf_resume_shift                        (3)
#define  VE_MBIST_ve_drf_resume0_ve_vm_0_drf_resume_shift                        (2)
#define  VE_MBIST_ve_drf_resume0_ve_vld_0_drf_resume_shift                       (1)
#define  VE_MBIST_ve_drf_resume0_ve_rif_drf_resume_shift                         (0)
#define  VE_MBIST_ve_drf_resume0_ve_mf2_drf_resume_mask                          (0x80000000)
#define  VE_MBIST_ve_drf_resume0_ve_mf1_drf_resume_mask                          (0x40000000)
#define  VE_MBIST_ve_drf_resume0_ve_mf0_drf_resume_mask                          (0x20000000)
#define  VE_MBIST_ve_drf_resume0_ve_p2mvd_drf_resume_mask                        (0x10000000)
#define  VE_MBIST_ve_drf_resume0_ve_vld_1_drf_resume_mask                        (0x08000000)
#define  VE_MBIST_ve_drf_resume0_ve_p2_drf_resume_mask                           (0x04000000)
#define  VE_MBIST_ve_drf_resume0_ve_clmp_drf_resume_mask                         (0x02000000)
#define  VE_MBIST_ve_drf_resume0_ve_dcmprs_outbuf_drf_resume_mask                (0x01000000)
#define  VE_MBIST_ve_drf_resume0_ve_pred_3_drf_resume_mask                       (0x00800000)
#define  VE_MBIST_ve_drf_resume0_ve_pred_2_drf_resume_mask                       (0x00400000)
#define  VE_MBIST_ve_drf_resume0_ve_pred_0_drf_resume_mask                       (0x00200000)
#define  VE_MBIST_ve_drf_resume0_ve_pred_1_drf_resume_mask                       (0x00100000)
#define  VE_MBIST_ve_drf_resume0_ve_cah_2p_1_drf_resume_mask                     (0x00080000)
#define  VE_MBIST_ve_drf_resume0_ve_cah_2p_0_drf_resume_mask                     (0x00040000)
#define  VE_MBIST_ve_drf_resume0_ve_cah_1p_drf_resume_mask                       (0x00020000)
#define  VE_MBIST_ve_drf_resume0_ve_dcmprs_drf_resume_mask                       (0x00010000)
#define  VE_MBIST_ve_drf_resume0_ve_cmprs_drf_resume_mask                        (0x00008000)
#define  VE_MBIST_ve_drf_resume0_ve_dbk_drf_resume_mask                          (0x00004000)
#define  VE_MBIST_ve_drf_resume0_ve_seg_mvd_drf_resume_mask                      (0x00002000)
#define  VE_MBIST_ve_drf_resume0_ve_rlrmem_mvbuf_drf_resume_mask                 (0x00001000)
#define  VE_MBIST_ve_drf_resume0_ve_cm2_drf_resume_mask                          (0x00000800)
#define  VE_MBIST_ve_drf_resume0_ve_cm1_drf_resume_mask                          (0x00000400)
#define  VE_MBIST_ve_drf_resume0_ve_brg_drf_resume_mask                          (0x00000200)
#define  VE_MBIST_ve_drf_resume0_ve_sao_drf_resume_mask                          (0x00000100)
#define  VE_MBIST_ve_drf_resume0_ve_it_bs_drf_resume_mask                        (0x00000080)
#define  VE_MBIST_ve_drf_resume0_ve_it_1_drf_resume_mask                         (0x00000040)
#define  VE_MBIST_ve_drf_resume0_ve_it_0_1_drf_resume_mask                       (0x00000020)
#define  VE_MBIST_ve_drf_resume0_ve_it_0_0_drf_resume_mask                       (0x00000010)
#define  VE_MBIST_ve_drf_resume0_ve_vm_1_drf_resume_mask                         (0x00000008)
#define  VE_MBIST_ve_drf_resume0_ve_vm_0_drf_resume_mask                         (0x00000004)
#define  VE_MBIST_ve_drf_resume0_ve_vld_0_drf_resume_mask                        (0x00000002)
#define  VE_MBIST_ve_drf_resume0_ve_rif_drf_resume_mask                          (0x00000001)
#define  VE_MBIST_ve_drf_resume0_ve_mf2_drf_resume(data)                         (0x80000000&((data)<<31))
#define  VE_MBIST_ve_drf_resume0_ve_mf1_drf_resume(data)                         (0x40000000&((data)<<30))
#define  VE_MBIST_ve_drf_resume0_ve_mf0_drf_resume(data)                         (0x20000000&((data)<<29))
#define  VE_MBIST_ve_drf_resume0_ve_p2mvd_drf_resume(data)                       (0x10000000&((data)<<28))
#define  VE_MBIST_ve_drf_resume0_ve_vld_1_drf_resume(data)                       (0x08000000&((data)<<27))
#define  VE_MBIST_ve_drf_resume0_ve_p2_drf_resume(data)                          (0x04000000&((data)<<26))
#define  VE_MBIST_ve_drf_resume0_ve_clmp_drf_resume(data)                        (0x02000000&((data)<<25))
#define  VE_MBIST_ve_drf_resume0_ve_dcmprs_outbuf_drf_resume(data)               (0x01000000&((data)<<24))
#define  VE_MBIST_ve_drf_resume0_ve_pred_3_drf_resume(data)                      (0x00800000&((data)<<23))
#define  VE_MBIST_ve_drf_resume0_ve_pred_2_drf_resume(data)                      (0x00400000&((data)<<22))
#define  VE_MBIST_ve_drf_resume0_ve_pred_0_drf_resume(data)                      (0x00200000&((data)<<21))
#define  VE_MBIST_ve_drf_resume0_ve_pred_1_drf_resume(data)                      (0x00100000&((data)<<20))
#define  VE_MBIST_ve_drf_resume0_ve_cah_2p_1_drf_resume(data)                    (0x00080000&((data)<<19))
#define  VE_MBIST_ve_drf_resume0_ve_cah_2p_0_drf_resume(data)                    (0x00040000&((data)<<18))
#define  VE_MBIST_ve_drf_resume0_ve_cah_1p_drf_resume(data)                      (0x00020000&((data)<<17))
#define  VE_MBIST_ve_drf_resume0_ve_dcmprs_drf_resume(data)                      (0x00010000&((data)<<16))
#define  VE_MBIST_ve_drf_resume0_ve_cmprs_drf_resume(data)                       (0x00008000&((data)<<15))
#define  VE_MBIST_ve_drf_resume0_ve_dbk_drf_resume(data)                         (0x00004000&((data)<<14))
#define  VE_MBIST_ve_drf_resume0_ve_seg_mvd_drf_resume(data)                     (0x00002000&((data)<<13))
#define  VE_MBIST_ve_drf_resume0_ve_rlrmem_mvbuf_drf_resume(data)                (0x00001000&((data)<<12))
#define  VE_MBIST_ve_drf_resume0_ve_cm2_drf_resume(data)                         (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_resume0_ve_cm1_drf_resume(data)                         (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_resume0_ve_brg_drf_resume(data)                         (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_resume0_ve_sao_drf_resume(data)                         (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_resume0_ve_it_bs_drf_resume(data)                       (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_resume0_ve_it_1_drf_resume(data)                        (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_resume0_ve_it_0_1_drf_resume(data)                      (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_resume0_ve_it_0_0_drf_resume(data)                      (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_resume0_ve_vm_1_drf_resume(data)                        (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_resume0_ve_vm_0_drf_resume(data)                        (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_resume0_ve_vld_0_drf_resume(data)                       (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_resume0_ve_rif_drf_resume(data)                         (0x00000001&(data))
#define  VE_MBIST_ve_drf_resume0_get_ve_mf2_drf_resume(data)                     ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_drf_resume0_get_ve_mf1_drf_resume(data)                     ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_drf_resume0_get_ve_mf0_drf_resume(data)                     ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_drf_resume0_get_ve_p2mvd_drf_resume(data)                   ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_drf_resume0_get_ve_vld_1_drf_resume(data)                   ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_drf_resume0_get_ve_p2_drf_resume(data)                      ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_drf_resume0_get_ve_clmp_drf_resume(data)                    ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_drf_resume0_get_ve_dcmprs_outbuf_drf_resume(data)           ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_drf_resume0_get_ve_pred_3_drf_resume(data)                  ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_drf_resume0_get_ve_pred_2_drf_resume(data)                  ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_drf_resume0_get_ve_pred_0_drf_resume(data)                  ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_drf_resume0_get_ve_pred_1_drf_resume(data)                  ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_drf_resume0_get_ve_cah_2p_1_drf_resume(data)                ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_drf_resume0_get_ve_cah_2p_0_drf_resume(data)                ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_drf_resume0_get_ve_cah_1p_drf_resume(data)                  ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_drf_resume0_get_ve_dcmprs_drf_resume(data)                  ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_drf_resume0_get_ve_cmprs_drf_resume(data)                   ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_drf_resume0_get_ve_dbk_drf_resume(data)                     ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_drf_resume0_get_ve_seg_mvd_drf_resume(data)                 ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_drf_resume0_get_ve_rlrmem_mvbuf_drf_resume(data)            ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_drf_resume0_get_ve_cm2_drf_resume(data)                     ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_resume0_get_ve_cm1_drf_resume(data)                     ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_resume0_get_ve_brg_drf_resume(data)                     ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_resume0_get_ve_sao_drf_resume(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_resume0_get_ve_it_bs_drf_resume(data)                   ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_resume0_get_ve_it_1_drf_resume(data)                    ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_resume0_get_ve_it_0_1_drf_resume(data)                  ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_resume0_get_ve_it_0_0_drf_resume(data)                  ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_resume0_get_ve_vm_1_drf_resume(data)                    ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_resume0_get_ve_vm_0_drf_resume(data)                    ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_resume0_get_ve_vld_0_drf_resume(data)                   ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_resume0_get_ve_rif_drf_resume(data)                     (0x00000001&(data))

#define  VE_MBIST_ve_drf_resume1                                                0x1800FF28
#define  VE_MBIST_ve_drf_resume1_reg_addr                                        "0xB800FF28"
#define  VE_MBIST_ve_drf_resume1_reg                                             0xB800FF28
#define  VE_MBIST_ve_drf_resume1_inst_addr                                       "0x000B"
#define  set_VE_MBIST_ve_drf_resume1_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_resume1_reg)=data)
#define  get_VE_MBIST_ve_drf_resume1_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_resume1_reg))
#define  VE_MBIST_ve_drf_resume1_ve_ngh_2_bisr_drf_resume_shift                  (11)
#define  VE_MBIST_ve_drf_resume1_ve_ngh_bisr_drf_resume_shift                    (10)
#define  VE_MBIST_ve_drf_resume1_ve_cah_bisr_drf_resume_shift                    (9)
#define  VE_MBIST_ve_drf_resume1_ve_pred_2e_drf_resume_shift                     (8)
#define  VE_MBIST_ve_drf_resume1_ve_rlrmem01_drf_resume_shift                    (7)
#define  VE_MBIST_ve_drf_resume1_ve_cmprs_1_drf_resume_shift                     (6)
#define  VE_MBIST_ve_drf_resume1_ve_pred_3_2p_drf_resume_shift                   (5)
#define  VE_MBIST_ve_drf_resume1_ve_vm_2_drf_resume_shift                        (4)
#define  VE_MBIST_ve_drf_resume1_ve_ciblk_drf_resume_shift                       (3)
#define  VE_MBIST_ve_drf_resume1_ve_sr_drf_resume_shift                          (2)
#define  VE_MBIST_ve_drf_resume1_ve_cdef_drf_resume_shift                        (1)
#define  VE_MBIST_ve_drf_resume1_ve_lr_drf_resume_shift                          (0)
#define  VE_MBIST_ve_drf_resume1_ve_ngh_2_bisr_drf_resume_mask                   (0x00000800)
#define  VE_MBIST_ve_drf_resume1_ve_ngh_bisr_drf_resume_mask                     (0x00000400)
#define  VE_MBIST_ve_drf_resume1_ve_cah_bisr_drf_resume_mask                     (0x00000200)
#define  VE_MBIST_ve_drf_resume1_ve_pred_2e_drf_resume_mask                      (0x00000100)
#define  VE_MBIST_ve_drf_resume1_ve_rlrmem01_drf_resume_mask                     (0x00000080)
#define  VE_MBIST_ve_drf_resume1_ve_cmprs_1_drf_resume_mask                      (0x00000040)
#define  VE_MBIST_ve_drf_resume1_ve_pred_3_2p_drf_resume_mask                    (0x00000020)
#define  VE_MBIST_ve_drf_resume1_ve_vm_2_drf_resume_mask                         (0x00000010)
#define  VE_MBIST_ve_drf_resume1_ve_ciblk_drf_resume_mask                        (0x00000008)
#define  VE_MBIST_ve_drf_resume1_ve_sr_drf_resume_mask                           (0x00000004)
#define  VE_MBIST_ve_drf_resume1_ve_cdef_drf_resume_mask                         (0x00000002)
#define  VE_MBIST_ve_drf_resume1_ve_lr_drf_resume_mask                           (0x00000001)
#define  VE_MBIST_ve_drf_resume1_ve_ngh_2_bisr_drf_resume(data)                  (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_resume1_ve_ngh_bisr_drf_resume(data)                    (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_resume1_ve_cah_bisr_drf_resume(data)                    (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_resume1_ve_pred_2e_drf_resume(data)                     (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_resume1_ve_rlrmem01_drf_resume(data)                    (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_resume1_ve_cmprs_1_drf_resume(data)                     (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_resume1_ve_pred_3_2p_drf_resume(data)                   (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_resume1_ve_vm_2_drf_resume(data)                        (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_resume1_ve_ciblk_drf_resume(data)                       (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_resume1_ve_sr_drf_resume(data)                          (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_resume1_ve_cdef_drf_resume(data)                        (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_resume1_ve_lr_drf_resume(data)                          (0x00000001&(data))
#define  VE_MBIST_ve_drf_resume1_get_ve_ngh_2_bisr_drf_resume(data)              ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_resume1_get_ve_ngh_bisr_drf_resume(data)                ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_resume1_get_ve_cah_bisr_drf_resume(data)                ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_resume1_get_ve_pred_2e_drf_resume(data)                 ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_resume1_get_ve_rlrmem01_drf_resume(data)                ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_resume1_get_ve_cmprs_1_drf_resume(data)                 ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_resume1_get_ve_pred_3_2p_drf_resume(data)               ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_resume1_get_ve_vm_2_drf_resume(data)                    ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_resume1_get_ve_ciblk_drf_resume(data)                   ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_resume1_get_ve_sr_drf_resume(data)                      ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_resume1_get_ve_cdef_drf_resume(data)                    ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_resume1_get_ve_lr_drf_resume(data)                      (0x00000001&(data))

#define  VE_MBIST_ve_drf_pause0                                                 0x1800FF2C
#define  VE_MBIST_ve_drf_pause0_reg_addr                                         "0xB800FF2C"
#define  VE_MBIST_ve_drf_pause0_reg                                              0xB800FF2C
#define  VE_MBIST_ve_drf_pause0_inst_addr                                        "0x000C"
#define  set_VE_MBIST_ve_drf_pause0_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_ve_drf_pause0_reg)=data)
#define  get_VE_MBIST_ve_drf_pause0_reg                                          (*((volatile unsigned int*)VE_MBIST_ve_drf_pause0_reg))
#define  VE_MBIST_ve_drf_pause0_ve_mf2_drf_start_pause_shift                     (31)
#define  VE_MBIST_ve_drf_pause0_ve_mf1_drf_start_pause_shift                     (30)
#define  VE_MBIST_ve_drf_pause0_ve_mf0_drf_start_pause_shift                     (29)
#define  VE_MBIST_ve_drf_pause0_ve_p2mvd_drf_start_pause_shift                   (28)
#define  VE_MBIST_ve_drf_pause0_ve_vld_1_drf_start_pause_shift                   (27)
#define  VE_MBIST_ve_drf_pause0_ve_p2_drf_start_pause_shift                      (26)
#define  VE_MBIST_ve_drf_pause0_ve_clmp_drf_start_pause_shift                    (25)
#define  VE_MBIST_ve_drf_pause0_ve_dcmprs_outbuf_drf_start_pause_shift           (24)
#define  VE_MBIST_ve_drf_pause0_ve_pred_3_drf_start_pause_shift                  (23)
#define  VE_MBIST_ve_drf_pause0_ve_pred_2_drf_start_pause_shift                  (22)
#define  VE_MBIST_ve_drf_pause0_ve_pred_1_drf_start_pause_shift                  (21)
#define  VE_MBIST_ve_drf_pause0_ve_pred_0_drf_start_pause_shift                  (20)
#define  VE_MBIST_ve_drf_pause0_ve_cah_2p_1_drf_start_pause_shift                (19)
#define  VE_MBIST_ve_drf_pause0_ve_cah_2p_0_drf_start_pause_shift                (18)
#define  VE_MBIST_ve_drf_pause0_ve_cah_1p_drf_start_pause_shift                  (17)
#define  VE_MBIST_ve_drf_pause0_ve_dcmprs_drf_start_pause_shift                  (16)
#define  VE_MBIST_ve_drf_pause0_ve_cmprs_drf_start_pause_shift                   (15)
#define  VE_MBIST_ve_drf_pause0_ve_dbk_drf_start_pause_shift                     (14)
#define  VE_MBIST_ve_drf_pause0_ve_seg_mvd_drf_start_pause_shift                 (13)
#define  VE_MBIST_ve_drf_pause0_ve_rlrmem_mvbuf_drf_start_pause_shift            (12)
#define  VE_MBIST_ve_drf_pause0_ve_cm2_drf_start_pause_shift                     (11)
#define  VE_MBIST_ve_drf_pause0_ve_cm1_drf_start_pause_shift                     (10)
#define  VE_MBIST_ve_drf_pause0_ve_brg_drf_start_pause_shift                     (9)
#define  VE_MBIST_ve_drf_pause0_ve_sao_drf_start_pause_shift                     (8)
#define  VE_MBIST_ve_drf_pause0_ve_it_bs_drf_start_pause_shift                   (7)
#define  VE_MBIST_ve_drf_pause0_ve_it_1_drf_start_pause_shift                    (6)
#define  VE_MBIST_ve_drf_pause0_ve_it_0_1_drf_start_pause_shift                  (5)
#define  VE_MBIST_ve_drf_pause0_ve_it_0_0_drf_start_pause_shift                  (4)
#define  VE_MBIST_ve_drf_pause0_ve_vm_1_drf_start_pause_shift                    (3)
#define  VE_MBIST_ve_drf_pause0_ve_vm_0_drf_start_pause_shift                    (2)
#define  VE_MBIST_ve_drf_pause0_ve_vld_0_drf_start_pause_shift                   (1)
#define  VE_MBIST_ve_drf_pause0_ve_rif_drf_start_pause_shift                     (0)
#define  VE_MBIST_ve_drf_pause0_ve_mf2_drf_start_pause_mask                      (0x80000000)
#define  VE_MBIST_ve_drf_pause0_ve_mf1_drf_start_pause_mask                      (0x40000000)
#define  VE_MBIST_ve_drf_pause0_ve_mf0_drf_start_pause_mask                      (0x20000000)
#define  VE_MBIST_ve_drf_pause0_ve_p2mvd_drf_start_pause_mask                    (0x10000000)
#define  VE_MBIST_ve_drf_pause0_ve_vld_1_drf_start_pause_mask                    (0x08000000)
#define  VE_MBIST_ve_drf_pause0_ve_p2_drf_start_pause_mask                       (0x04000000)
#define  VE_MBIST_ve_drf_pause0_ve_clmp_drf_start_pause_mask                     (0x02000000)
#define  VE_MBIST_ve_drf_pause0_ve_dcmprs_outbuf_drf_start_pause_mask            (0x01000000)
#define  VE_MBIST_ve_drf_pause0_ve_pred_3_drf_start_pause_mask                   (0x00800000)
#define  VE_MBIST_ve_drf_pause0_ve_pred_2_drf_start_pause_mask                   (0x00400000)
#define  VE_MBIST_ve_drf_pause0_ve_pred_1_drf_start_pause_mask                   (0x00200000)
#define  VE_MBIST_ve_drf_pause0_ve_pred_0_drf_start_pause_mask                   (0x00100000)
#define  VE_MBIST_ve_drf_pause0_ve_cah_2p_1_drf_start_pause_mask                 (0x00080000)
#define  VE_MBIST_ve_drf_pause0_ve_cah_2p_0_drf_start_pause_mask                 (0x00040000)
#define  VE_MBIST_ve_drf_pause0_ve_cah_1p_drf_start_pause_mask                   (0x00020000)
#define  VE_MBIST_ve_drf_pause0_ve_dcmprs_drf_start_pause_mask                   (0x00010000)
#define  VE_MBIST_ve_drf_pause0_ve_cmprs_drf_start_pause_mask                    (0x00008000)
#define  VE_MBIST_ve_drf_pause0_ve_dbk_drf_start_pause_mask                      (0x00004000)
#define  VE_MBIST_ve_drf_pause0_ve_seg_mvd_drf_start_pause_mask                  (0x00002000)
#define  VE_MBIST_ve_drf_pause0_ve_rlrmem_mvbuf_drf_start_pause_mask             (0x00001000)
#define  VE_MBIST_ve_drf_pause0_ve_cm2_drf_start_pause_mask                      (0x00000800)
#define  VE_MBIST_ve_drf_pause0_ve_cm1_drf_start_pause_mask                      (0x00000400)
#define  VE_MBIST_ve_drf_pause0_ve_brg_drf_start_pause_mask                      (0x00000200)
#define  VE_MBIST_ve_drf_pause0_ve_sao_drf_start_pause_mask                      (0x00000100)
#define  VE_MBIST_ve_drf_pause0_ve_it_bs_drf_start_pause_mask                    (0x00000080)
#define  VE_MBIST_ve_drf_pause0_ve_it_1_drf_start_pause_mask                     (0x00000040)
#define  VE_MBIST_ve_drf_pause0_ve_it_0_1_drf_start_pause_mask                   (0x00000020)
#define  VE_MBIST_ve_drf_pause0_ve_it_0_0_drf_start_pause_mask                   (0x00000010)
#define  VE_MBIST_ve_drf_pause0_ve_vm_1_drf_start_pause_mask                     (0x00000008)
#define  VE_MBIST_ve_drf_pause0_ve_vm_0_drf_start_pause_mask                     (0x00000004)
#define  VE_MBIST_ve_drf_pause0_ve_vld_0_drf_start_pause_mask                    (0x00000002)
#define  VE_MBIST_ve_drf_pause0_ve_rif_drf_start_pause_mask                      (0x00000001)
#define  VE_MBIST_ve_drf_pause0_ve_mf2_drf_start_pause(data)                     (0x80000000&((data)<<31))
#define  VE_MBIST_ve_drf_pause0_ve_mf1_drf_start_pause(data)                     (0x40000000&((data)<<30))
#define  VE_MBIST_ve_drf_pause0_ve_mf0_drf_start_pause(data)                     (0x20000000&((data)<<29))
#define  VE_MBIST_ve_drf_pause0_ve_p2mvd_drf_start_pause(data)                   (0x10000000&((data)<<28))
#define  VE_MBIST_ve_drf_pause0_ve_vld_1_drf_start_pause(data)                   (0x08000000&((data)<<27))
#define  VE_MBIST_ve_drf_pause0_ve_p2_drf_start_pause(data)                      (0x04000000&((data)<<26))
#define  VE_MBIST_ve_drf_pause0_ve_clmp_drf_start_pause(data)                    (0x02000000&((data)<<25))
#define  VE_MBIST_ve_drf_pause0_ve_dcmprs_outbuf_drf_start_pause(data)           (0x01000000&((data)<<24))
#define  VE_MBIST_ve_drf_pause0_ve_pred_3_drf_start_pause(data)                  (0x00800000&((data)<<23))
#define  VE_MBIST_ve_drf_pause0_ve_pred_2_drf_start_pause(data)                  (0x00400000&((data)<<22))
#define  VE_MBIST_ve_drf_pause0_ve_pred_1_drf_start_pause(data)                  (0x00200000&((data)<<21))
#define  VE_MBIST_ve_drf_pause0_ve_pred_0_drf_start_pause(data)                  (0x00100000&((data)<<20))
#define  VE_MBIST_ve_drf_pause0_ve_cah_2p_1_drf_start_pause(data)                (0x00080000&((data)<<19))
#define  VE_MBIST_ve_drf_pause0_ve_cah_2p_0_drf_start_pause(data)                (0x00040000&((data)<<18))
#define  VE_MBIST_ve_drf_pause0_ve_cah_1p_drf_start_pause(data)                  (0x00020000&((data)<<17))
#define  VE_MBIST_ve_drf_pause0_ve_dcmprs_drf_start_pause(data)                  (0x00010000&((data)<<16))
#define  VE_MBIST_ve_drf_pause0_ve_cmprs_drf_start_pause(data)                   (0x00008000&((data)<<15))
#define  VE_MBIST_ve_drf_pause0_ve_dbk_drf_start_pause(data)                     (0x00004000&((data)<<14))
#define  VE_MBIST_ve_drf_pause0_ve_seg_mvd_drf_start_pause(data)                 (0x00002000&((data)<<13))
#define  VE_MBIST_ve_drf_pause0_ve_rlrmem_mvbuf_drf_start_pause(data)            (0x00001000&((data)<<12))
#define  VE_MBIST_ve_drf_pause0_ve_cm2_drf_start_pause(data)                     (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_pause0_ve_cm1_drf_start_pause(data)                     (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_pause0_ve_brg_drf_start_pause(data)                     (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_pause0_ve_sao_drf_start_pause(data)                     (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_pause0_ve_it_bs_drf_start_pause(data)                   (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_pause0_ve_it_1_drf_start_pause(data)                    (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_pause0_ve_it_0_1_drf_start_pause(data)                  (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_pause0_ve_it_0_0_drf_start_pause(data)                  (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_pause0_ve_vm_1_drf_start_pause(data)                    (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_pause0_ve_vm_0_drf_start_pause(data)                    (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_pause0_ve_vld_0_drf_start_pause(data)                   (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_pause0_ve_rif_drf_start_pause(data)                     (0x00000001&(data))
#define  VE_MBIST_ve_drf_pause0_get_ve_mf2_drf_start_pause(data)                 ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_drf_pause0_get_ve_mf1_drf_start_pause(data)                 ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_drf_pause0_get_ve_mf0_drf_start_pause(data)                 ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_drf_pause0_get_ve_p2mvd_drf_start_pause(data)               ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_drf_pause0_get_ve_vld_1_drf_start_pause(data)               ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_drf_pause0_get_ve_p2_drf_start_pause(data)                  ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_drf_pause0_get_ve_clmp_drf_start_pause(data)                ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_drf_pause0_get_ve_dcmprs_outbuf_drf_start_pause(data)       ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_drf_pause0_get_ve_pred_3_drf_start_pause(data)              ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_drf_pause0_get_ve_pred_2_drf_start_pause(data)              ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_drf_pause0_get_ve_pred_1_drf_start_pause(data)              ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_drf_pause0_get_ve_pred_0_drf_start_pause(data)              ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_drf_pause0_get_ve_cah_2p_1_drf_start_pause(data)            ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_drf_pause0_get_ve_cah_2p_0_drf_start_pause(data)            ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_drf_pause0_get_ve_cah_1p_drf_start_pause(data)              ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_drf_pause0_get_ve_dcmprs_drf_start_pause(data)              ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_drf_pause0_get_ve_cmprs_drf_start_pause(data)               ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_drf_pause0_get_ve_dbk_drf_start_pause(data)                 ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_drf_pause0_get_ve_seg_mvd_drf_start_pause(data)             ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_drf_pause0_get_ve_rlrmem_mvbuf_drf_start_pause(data)        ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_drf_pause0_get_ve_cm2_drf_start_pause(data)                 ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_pause0_get_ve_cm1_drf_start_pause(data)                 ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_pause0_get_ve_brg_drf_start_pause(data)                 ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_pause0_get_ve_sao_drf_start_pause(data)                 ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_pause0_get_ve_it_bs_drf_start_pause(data)               ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_pause0_get_ve_it_1_drf_start_pause(data)                ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_pause0_get_ve_it_0_1_drf_start_pause(data)              ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_pause0_get_ve_it_0_0_drf_start_pause(data)              ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_pause0_get_ve_vm_1_drf_start_pause(data)                ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_pause0_get_ve_vm_0_drf_start_pause(data)                ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_pause0_get_ve_vld_0_drf_start_pause(data)               ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_pause0_get_ve_rif_drf_start_pause(data)                 (0x00000001&(data))

#define  VE_MBIST_ve_drf_pause1                                                 0x1800FF30
#define  VE_MBIST_ve_drf_pause1_reg_addr                                         "0xB800FF30"
#define  VE_MBIST_ve_drf_pause1_reg                                              0xB800FF30
#define  VE_MBIST_ve_drf_pause1_inst_addr                                        "0x000D"
#define  set_VE_MBIST_ve_drf_pause1_reg(data)                                    (*((volatile unsigned int*)VE_MBIST_ve_drf_pause1_reg)=data)
#define  get_VE_MBIST_ve_drf_pause1_reg                                          (*((volatile unsigned int*)VE_MBIST_ve_drf_pause1_reg))
#define  VE_MBIST_ve_drf_pause1_ve_ngh_2_bisr_drf_start_pause_shift              (11)
#define  VE_MBIST_ve_drf_pause1_ve_ngh_bisr_drf_start_pause_shift                (10)
#define  VE_MBIST_ve_drf_pause1_ve_cah_bisr_drf_start_pause_shift                (9)
#define  VE_MBIST_ve_drf_pause1_ve_pred_2e_drf_start_pause_shift                 (8)
#define  VE_MBIST_ve_drf_pause1_ve_rlrmem01_drf_start_pause_shift                (7)
#define  VE_MBIST_ve_drf_pause1_ve_cmprs_1_drf_start_pause_shift                 (6)
#define  VE_MBIST_ve_drf_pause1_ve_pred_3_2p_drf_start_pause_shift               (5)
#define  VE_MBIST_ve_drf_pause1_ve_vm_2_drf_start_pause_shift                    (4)
#define  VE_MBIST_ve_drf_pause1_ve_ciblk_drf_start_pause_shift                   (3)
#define  VE_MBIST_ve_drf_pause1_ve_sr_drf_start_pause_shift                      (2)
#define  VE_MBIST_ve_drf_pause1_ve_cdef_drf_start_pause_shift                    (1)
#define  VE_MBIST_ve_drf_pause1_ve_lr_drf_start_pause_shift                      (0)
#define  VE_MBIST_ve_drf_pause1_ve_ngh_2_bisr_drf_start_pause_mask               (0x00000800)
#define  VE_MBIST_ve_drf_pause1_ve_ngh_bisr_drf_start_pause_mask                 (0x00000400)
#define  VE_MBIST_ve_drf_pause1_ve_cah_bisr_drf_start_pause_mask                 (0x00000200)
#define  VE_MBIST_ve_drf_pause1_ve_pred_2e_drf_start_pause_mask                  (0x00000100)
#define  VE_MBIST_ve_drf_pause1_ve_rlrmem01_drf_start_pause_mask                 (0x00000080)
#define  VE_MBIST_ve_drf_pause1_ve_cmprs_1_drf_start_pause_mask                  (0x00000040)
#define  VE_MBIST_ve_drf_pause1_ve_pred_3_2p_drf_start_pause_mask                (0x00000020)
#define  VE_MBIST_ve_drf_pause1_ve_vm_2_drf_start_pause_mask                     (0x00000010)
#define  VE_MBIST_ve_drf_pause1_ve_ciblk_drf_start_pause_mask                    (0x00000008)
#define  VE_MBIST_ve_drf_pause1_ve_sr_drf_start_pause_mask                       (0x00000004)
#define  VE_MBIST_ve_drf_pause1_ve_cdef_drf_start_pause_mask                     (0x00000002)
#define  VE_MBIST_ve_drf_pause1_ve_lr_drf_start_pause_mask                       (0x00000001)
#define  VE_MBIST_ve_drf_pause1_ve_ngh_2_bisr_drf_start_pause(data)              (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_pause1_ve_ngh_bisr_drf_start_pause(data)                (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_pause1_ve_cah_bisr_drf_start_pause(data)                (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_pause1_ve_pred_2e_drf_start_pause(data)                 (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_pause1_ve_rlrmem01_drf_start_pause(data)                (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_pause1_ve_cmprs_1_drf_start_pause(data)                 (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_pause1_ve_pred_3_2p_drf_start_pause(data)               (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_pause1_ve_vm_2_drf_start_pause(data)                    (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_pause1_ve_ciblk_drf_start_pause(data)                   (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_pause1_ve_sr_drf_start_pause(data)                      (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_pause1_ve_cdef_drf_start_pause(data)                    (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_pause1_ve_lr_drf_start_pause(data)                      (0x00000001&(data))
#define  VE_MBIST_ve_drf_pause1_get_ve_ngh_2_bisr_drf_start_pause(data)          ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_pause1_get_ve_ngh_bisr_drf_start_pause(data)            ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_pause1_get_ve_cah_bisr_drf_start_pause(data)            ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_pause1_get_ve_pred_2e_drf_start_pause(data)             ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_pause1_get_ve_rlrmem01_drf_start_pause(data)            ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_pause1_get_ve_cmprs_1_drf_start_pause(data)             ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_pause1_get_ve_pred_3_2p_drf_start_pause(data)           ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_pause1_get_ve_vm_2_drf_start_pause(data)                ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_pause1_get_ve_ciblk_drf_start_pause(data)               ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_pause1_get_ve_sr_drf_start_pause(data)                  ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_pause1_get_ve_cdef_drf_start_pause(data)                ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_pause1_get_ve_lr_drf_start_pause(data)                  (0x00000001&(data))

#define  VE_MBIST_ve_drf_done0                                                  0x1800FF34
#define  VE_MBIST_ve_drf_done0_reg_addr                                          "0xB800FF34"
#define  VE_MBIST_ve_drf_done0_reg                                               0xB800FF34
#define  VE_MBIST_ve_drf_done0_inst_addr                                         "0x000E"
#define  set_VE_MBIST_ve_drf_done0_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_ve_drf_done0_reg)=data)
#define  get_VE_MBIST_ve_drf_done0_reg                                           (*((volatile unsigned int*)VE_MBIST_ve_drf_done0_reg))
#define  VE_MBIST_ve_drf_done0_ve_drf_mf2_done_shift                             (31)
#define  VE_MBIST_ve_drf_done0_ve_drf_mf1_done_shift                             (30)
#define  VE_MBIST_ve_drf_done0_ve_drf_mf0_done_shift                             (29)
#define  VE_MBIST_ve_drf_done0_ve_drf_p2mvd_done_shift                           (28)
#define  VE_MBIST_ve_drf_done0_ve_drf_vld_1_done_shift                           (27)
#define  VE_MBIST_ve_drf_done0_ve_drf_p2_done_shift                              (26)
#define  VE_MBIST_ve_drf_done0_ve_drf_clmp_done_shift                            (25)
#define  VE_MBIST_ve_drf_done0_ve_drf_dcmprs_outbuf_done_shift                   (24)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_3_done_shift                          (23)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_2_done_shift                          (22)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_1_done_shift                          (21)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_0_done_shift                          (20)
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_2p_1_done_shift                        (19)
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_2p_0_done_shift                        (18)
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_1p_done_shift                          (17)
#define  VE_MBIST_ve_drf_done0_ve_drf_dcmprs_done_shift                          (16)
#define  VE_MBIST_ve_drf_done0_ve_drf_cmprs_done_shift                           (15)
#define  VE_MBIST_ve_drf_done0_ve_drf_dbk_done_shift                             (14)
#define  VE_MBIST_ve_drf_done0_ve_drf_seg_mvd_done_shift                         (13)
#define  VE_MBIST_ve_drf_done0_ve_drf_rlrmem_mvbuf_done_shift                    (12)
#define  VE_MBIST_ve_drf_done0_ve_drf_cm2_done_shift                             (11)
#define  VE_MBIST_ve_drf_done0_ve_drf_cm1_done_shift                             (10)
#define  VE_MBIST_ve_drf_done0_ve_drf_brg_done_shift                             (9)
#define  VE_MBIST_ve_drf_done0_ve_drf_sao_done_shift                             (8)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_bs_done_shift                           (7)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_1_done_shift                            (6)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_0_1_done_shift                          (5)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_0_0_done_shift                          (4)
#define  VE_MBIST_ve_drf_done0_ve_drf_vm_1_done_shift                            (3)
#define  VE_MBIST_ve_drf_done0_ve_drf_vm_0_done_shift                            (2)
#define  VE_MBIST_ve_drf_done0_ve_drf_vld_0_done_shift                           (1)
#define  VE_MBIST_ve_drf_done0_ve_drf_rif_done_shift                             (0)
#define  VE_MBIST_ve_drf_done0_ve_drf_mf2_done_mask                              (0x80000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_mf1_done_mask                              (0x40000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_mf0_done_mask                              (0x20000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_p2mvd_done_mask                            (0x10000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_vld_1_done_mask                            (0x08000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_p2_done_mask                               (0x04000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_clmp_done_mask                             (0x02000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_dcmprs_outbuf_done_mask                    (0x01000000)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_3_done_mask                           (0x00800000)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_2_done_mask                           (0x00400000)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_1_done_mask                           (0x00200000)
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_0_done_mask                           (0x00100000)
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_2p_1_done_mask                         (0x00080000)
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_2p_0_done_mask                         (0x00040000)
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_1p_done_mask                           (0x00020000)
#define  VE_MBIST_ve_drf_done0_ve_drf_dcmprs_done_mask                           (0x00010000)
#define  VE_MBIST_ve_drf_done0_ve_drf_cmprs_done_mask                            (0x00008000)
#define  VE_MBIST_ve_drf_done0_ve_drf_dbk_done_mask                              (0x00004000)
#define  VE_MBIST_ve_drf_done0_ve_drf_seg_mvd_done_mask                          (0x00002000)
#define  VE_MBIST_ve_drf_done0_ve_drf_rlrmem_mvbuf_done_mask                     (0x00001000)
#define  VE_MBIST_ve_drf_done0_ve_drf_cm2_done_mask                              (0x00000800)
#define  VE_MBIST_ve_drf_done0_ve_drf_cm1_done_mask                              (0x00000400)
#define  VE_MBIST_ve_drf_done0_ve_drf_brg_done_mask                              (0x00000200)
#define  VE_MBIST_ve_drf_done0_ve_drf_sao_done_mask                              (0x00000100)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_bs_done_mask                            (0x00000080)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_1_done_mask                             (0x00000040)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_0_1_done_mask                           (0x00000020)
#define  VE_MBIST_ve_drf_done0_ve_drf_it_0_0_done_mask                           (0x00000010)
#define  VE_MBIST_ve_drf_done0_ve_drf_vm_1_done_mask                             (0x00000008)
#define  VE_MBIST_ve_drf_done0_ve_drf_vm_0_done_mask                             (0x00000004)
#define  VE_MBIST_ve_drf_done0_ve_drf_vld_0_done_mask                            (0x00000002)
#define  VE_MBIST_ve_drf_done0_ve_drf_rif_done_mask                              (0x00000001)
#define  VE_MBIST_ve_drf_done0_ve_drf_mf2_done(data)                             (0x80000000&((data)<<31))
#define  VE_MBIST_ve_drf_done0_ve_drf_mf1_done(data)                             (0x40000000&((data)<<30))
#define  VE_MBIST_ve_drf_done0_ve_drf_mf0_done(data)                             (0x20000000&((data)<<29))
#define  VE_MBIST_ve_drf_done0_ve_drf_p2mvd_done(data)                           (0x10000000&((data)<<28))
#define  VE_MBIST_ve_drf_done0_ve_drf_vld_1_done(data)                           (0x08000000&((data)<<27))
#define  VE_MBIST_ve_drf_done0_ve_drf_p2_done(data)                              (0x04000000&((data)<<26))
#define  VE_MBIST_ve_drf_done0_ve_drf_clmp_done(data)                            (0x02000000&((data)<<25))
#define  VE_MBIST_ve_drf_done0_ve_drf_dcmprs_outbuf_done(data)                   (0x01000000&((data)<<24))
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_3_done(data)                          (0x00800000&((data)<<23))
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_2_done(data)                          (0x00400000&((data)<<22))
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_1_done(data)                          (0x00200000&((data)<<21))
#define  VE_MBIST_ve_drf_done0_ve_drf_pred_0_done(data)                          (0x00100000&((data)<<20))
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_2p_1_done(data)                        (0x00080000&((data)<<19))
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_2p_0_done(data)                        (0x00040000&((data)<<18))
#define  VE_MBIST_ve_drf_done0_ve_drf_cah_1p_done(data)                          (0x00020000&((data)<<17))
#define  VE_MBIST_ve_drf_done0_ve_drf_dcmprs_done(data)                          (0x00010000&((data)<<16))
#define  VE_MBIST_ve_drf_done0_ve_drf_cmprs_done(data)                           (0x00008000&((data)<<15))
#define  VE_MBIST_ve_drf_done0_ve_drf_dbk_done(data)                             (0x00004000&((data)<<14))
#define  VE_MBIST_ve_drf_done0_ve_drf_seg_mvd_done(data)                         (0x00002000&((data)<<13))
#define  VE_MBIST_ve_drf_done0_ve_drf_rlrmem_mvbuf_done(data)                    (0x00001000&((data)<<12))
#define  VE_MBIST_ve_drf_done0_ve_drf_cm2_done(data)                             (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_done0_ve_drf_cm1_done(data)                             (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_done0_ve_drf_brg_done(data)                             (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_done0_ve_drf_sao_done(data)                             (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_done0_ve_drf_it_bs_done(data)                           (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_done0_ve_drf_it_1_done(data)                            (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_done0_ve_drf_it_0_1_done(data)                          (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_done0_ve_drf_it_0_0_done(data)                          (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_done0_ve_drf_vm_1_done(data)                            (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_done0_ve_drf_vm_0_done(data)                            (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_done0_ve_drf_vld_0_done(data)                           (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_done0_ve_drf_rif_done(data)                             (0x00000001&(data))
#define  VE_MBIST_ve_drf_done0_get_ve_drf_mf2_done(data)                         ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_mf1_done(data)                         ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_mf0_done(data)                         ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_p2mvd_done(data)                       ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_vld_1_done(data)                       ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_p2_done(data)                          ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_clmp_done(data)                        ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_dcmprs_outbuf_done(data)               ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_pred_3_done(data)                      ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_pred_2_done(data)                      ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_pred_1_done(data)                      ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_pred_0_done(data)                      ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_cah_2p_1_done(data)                    ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_cah_2p_0_done(data)                    ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_cah_1p_done(data)                      ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_dcmprs_done(data)                      ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_cmprs_done(data)                       ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_dbk_done(data)                         ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_seg_mvd_done(data)                     ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_rlrmem_mvbuf_done(data)                ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_cm2_done(data)                         ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_cm1_done(data)                         ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_brg_done(data)                         ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_sao_done(data)                         ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_it_bs_done(data)                       ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_it_1_done(data)                        ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_it_0_1_done(data)                      ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_it_0_0_done(data)                      ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_vm_1_done(data)                        ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_vm_0_done(data)                        ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_vld_0_done(data)                       ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_done0_get_ve_drf_rif_done(data)                         (0x00000001&(data))

#define  VE_MBIST_ve_drf_done1                                                  0x1800FF38
#define  VE_MBIST_ve_drf_done1_reg_addr                                          "0xB800FF38"
#define  VE_MBIST_ve_drf_done1_reg                                               0xB800FF38
#define  VE_MBIST_ve_drf_done1_inst_addr                                         "0x000F"
#define  set_VE_MBIST_ve_drf_done1_reg(data)                                     (*((volatile unsigned int*)VE_MBIST_ve_drf_done1_reg)=data)
#define  get_VE_MBIST_ve_drf_done1_reg                                           (*((volatile unsigned int*)VE_MBIST_ve_drf_done1_reg))
#define  VE_MBIST_ve_drf_done1_ve_drf_ngh_2_bisr_done_shift                      (11)
#define  VE_MBIST_ve_drf_done1_ve_drf_ngh_bisr_done_shift                        (10)
#define  VE_MBIST_ve_drf_done1_ve_drf_cah_bisr_done_shift                        (9)
#define  VE_MBIST_ve_drf_done1_ve_drf_pred_2e_done_shift                         (8)
#define  VE_MBIST_ve_drf_done1_ve_drf_rlrmem01_done_shift                        (7)
#define  VE_MBIST_ve_drf_done1_ve_drf_cmprs_1_done_shift                         (6)
#define  VE_MBIST_ve_drf_done1_ve_drf_pred_3_2p_done_shift                       (5)
#define  VE_MBIST_ve_drf_done1_ve_drf_vm_2_done_shift                            (4)
#define  VE_MBIST_ve_drf_done1_ve_drf_ciblk_done_shift                           (3)
#define  VE_MBIST_ve_drf_done1_ve_drf_sr_done_shift                              (2)
#define  VE_MBIST_ve_drf_done1_ve_drf_cdef_done_shift                            (1)
#define  VE_MBIST_ve_drf_done1_ve_drf_lr_done_shift                              (0)
#define  VE_MBIST_ve_drf_done1_ve_drf_ngh_2_bisr_done_mask                       (0x00000800)
#define  VE_MBIST_ve_drf_done1_ve_drf_ngh_bisr_done_mask                         (0x00000400)
#define  VE_MBIST_ve_drf_done1_ve_drf_cah_bisr_done_mask                         (0x00000200)
#define  VE_MBIST_ve_drf_done1_ve_drf_pred_2e_done_mask                          (0x00000100)
#define  VE_MBIST_ve_drf_done1_ve_drf_rlrmem01_done_mask                         (0x00000080)
#define  VE_MBIST_ve_drf_done1_ve_drf_cmprs_1_done_mask                          (0x00000040)
#define  VE_MBIST_ve_drf_done1_ve_drf_pred_3_2p_done_mask                        (0x00000020)
#define  VE_MBIST_ve_drf_done1_ve_drf_vm_2_done_mask                             (0x00000010)
#define  VE_MBIST_ve_drf_done1_ve_drf_ciblk_done_mask                            (0x00000008)
#define  VE_MBIST_ve_drf_done1_ve_drf_sr_done_mask                               (0x00000004)
#define  VE_MBIST_ve_drf_done1_ve_drf_cdef_done_mask                             (0x00000002)
#define  VE_MBIST_ve_drf_done1_ve_drf_lr_done_mask                               (0x00000001)
#define  VE_MBIST_ve_drf_done1_ve_drf_ngh_2_bisr_done(data)                      (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_done1_ve_drf_ngh_bisr_done(data)                        (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_done1_ve_drf_cah_bisr_done(data)                        (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_done1_ve_drf_pred_2e_done(data)                         (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_done1_ve_drf_rlrmem01_done(data)                        (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_done1_ve_drf_cmprs_1_done(data)                         (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_done1_ve_drf_pred_3_2p_done(data)                       (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_done1_ve_drf_vm_2_done(data)                            (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_done1_ve_drf_ciblk_done(data)                           (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_done1_ve_drf_sr_done(data)                              (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_done1_ve_drf_cdef_done(data)                            (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_done1_ve_drf_lr_done(data)                              (0x00000001&(data))
#define  VE_MBIST_ve_drf_done1_get_ve_drf_ngh_2_bisr_done(data)                  ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_ngh_bisr_done(data)                    ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_cah_bisr_done(data)                    ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_pred_2e_done(data)                     ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_rlrmem01_done(data)                    ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_cmprs_1_done(data)                     ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_pred_3_2p_done(data)                   ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_vm_2_done(data)                        ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_ciblk_done(data)                       ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_sr_done(data)                          ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_cdef_done(data)                        ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_done1_get_ve_drf_lr_done(data)                          (0x00000001&(data))

#define  VE_MBIST_ve_drf_fail_group0                                            0x1800FF3C
#define  VE_MBIST_ve_drf_fail_group0_reg_addr                                    "0xB800FF3C"
#define  VE_MBIST_ve_drf_fail_group0_reg                                         0xB800FF3C
#define  VE_MBIST_ve_drf_fail_group0_inst_addr                                   "0x0010"
#define  set_VE_MBIST_ve_drf_fail_group0_reg(data)                               (*((volatile unsigned int*)VE_MBIST_ve_drf_fail_group0_reg)=data)
#define  get_VE_MBIST_ve_drf_fail_group0_reg                                     (*((volatile unsigned int*)VE_MBIST_ve_drf_fail_group0_reg))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf2_fail_group_shift                 (31)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf1_fail_group_shift                 (30)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf0_fail_group_shift                 (29)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_p2mvd_fail_group_shift               (28)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vld_1_fail_group_shift               (27)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_p2_fail_group_shift                  (26)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_clmp_fail_group_shift                (25)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dcmprs_outbuf_fail_group_shift       (24)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_3_fail_group_shift              (23)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_2_fail_group_shift              (22)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_1_fail_group_shift              (21)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_0_fail_group_shift              (20)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_2p_1_fail_group_shift            (19)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_2p_0_fail_group_shift            (18)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_1p_fail_group_shift              (17)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dcmprs_fail_group_shift              (16)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cmprs_fail_group_shift               (15)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dbk_fail_group_shift                 (14)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_seg_mvd_fail_group_shift             (13)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_rlrmem_mvbuf_fail_group_shift        (12)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cm2_fail_group_shift                 (11)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cm1_fail_group_shift                 (10)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_brg_fail_group_shift                 (9)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_sao_fail_group_shift                 (8)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_bs_fail_group_shift               (7)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_1_fail_group_shift                (6)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_0_1_fail_group_shift              (5)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_0_0_fail_group_shift              (4)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vm_1_fail_group_shift                (3)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vm_0_fail_group_shift                (2)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vld_0_fail_group_shift               (1)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_rif_fail_group_shift                 (0)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf2_fail_group_mask                  (0x80000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf1_fail_group_mask                  (0x40000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf0_fail_group_mask                  (0x20000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_p2mvd_fail_group_mask                (0x10000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vld_1_fail_group_mask                (0x08000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_p2_fail_group_mask                   (0x04000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_clmp_fail_group_mask                 (0x02000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dcmprs_outbuf_fail_group_mask        (0x01000000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_3_fail_group_mask               (0x00800000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_2_fail_group_mask               (0x00400000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_1_fail_group_mask               (0x00200000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_0_fail_group_mask               (0x00100000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_2p_1_fail_group_mask             (0x00080000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_2p_0_fail_group_mask             (0x00040000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_1p_fail_group_mask               (0x00020000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dcmprs_fail_group_mask               (0x00010000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cmprs_fail_group_mask                (0x00008000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dbk_fail_group_mask                  (0x00004000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_seg_mvd_fail_group_mask              (0x00002000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_rlrmem_mvbuf_fail_group_mask         (0x00001000)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cm2_fail_group_mask                  (0x00000800)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cm1_fail_group_mask                  (0x00000400)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_brg_fail_group_mask                  (0x00000200)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_sao_fail_group_mask                  (0x00000100)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_bs_fail_group_mask                (0x00000080)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_1_fail_group_mask                 (0x00000040)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_0_1_fail_group_mask               (0x00000020)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_0_0_fail_group_mask               (0x00000010)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vm_1_fail_group_mask                 (0x00000008)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vm_0_fail_group_mask                 (0x00000004)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vld_0_fail_group_mask                (0x00000002)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_rif_fail_group_mask                  (0x00000001)
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf2_fail_group(data)                 (0x80000000&((data)<<31))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf1_fail_group(data)                 (0x40000000&((data)<<30))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_mf0_fail_group(data)                 (0x20000000&((data)<<29))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_p2mvd_fail_group(data)               (0x10000000&((data)<<28))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vld_1_fail_group(data)               (0x08000000&((data)<<27))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_p2_fail_group(data)                  (0x04000000&((data)<<26))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_clmp_fail_group(data)                (0x02000000&((data)<<25))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dcmprs_outbuf_fail_group(data)       (0x01000000&((data)<<24))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_3_fail_group(data)              (0x00800000&((data)<<23))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_2_fail_group(data)              (0x00400000&((data)<<22))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_1_fail_group(data)              (0x00200000&((data)<<21))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_pred_0_fail_group(data)              (0x00100000&((data)<<20))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_2p_1_fail_group(data)            (0x00080000&((data)<<19))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_2p_0_fail_group(data)            (0x00040000&((data)<<18))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cah_1p_fail_group(data)              (0x00020000&((data)<<17))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dcmprs_fail_group(data)              (0x00010000&((data)<<16))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cmprs_fail_group(data)               (0x00008000&((data)<<15))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_dbk_fail_group(data)                 (0x00004000&((data)<<14))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_seg_mvd_fail_group(data)             (0x00002000&((data)<<13))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_rlrmem_mvbuf_fail_group(data)        (0x00001000&((data)<<12))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cm2_fail_group(data)                 (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_cm1_fail_group(data)                 (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_brg_fail_group(data)                 (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_sao_fail_group(data)                 (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_bs_fail_group(data)               (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_1_fail_group(data)                (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_0_1_fail_group(data)              (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_it_0_0_fail_group(data)              (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vm_1_fail_group(data)                (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vm_0_fail_group(data)                (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_vld_0_fail_group(data)               (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_fail_group0_ve_drf_rif_fail_group(data)                 (0x00000001&(data))
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_mf2_fail_group(data)             ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_mf1_fail_group(data)             ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_mf0_fail_group(data)             ((0x20000000&(data))>>29)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_p2mvd_fail_group(data)           ((0x10000000&(data))>>28)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_vld_1_fail_group(data)           ((0x08000000&(data))>>27)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_p2_fail_group(data)              ((0x04000000&(data))>>26)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_clmp_fail_group(data)            ((0x02000000&(data))>>25)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_dcmprs_outbuf_fail_group(data)   ((0x01000000&(data))>>24)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_pred_3_fail_group(data)          ((0x00800000&(data))>>23)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_pred_2_fail_group(data)          ((0x00400000&(data))>>22)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_pred_1_fail_group(data)          ((0x00200000&(data))>>21)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_pred_0_fail_group(data)          ((0x00100000&(data))>>20)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_cah_2p_1_fail_group(data)        ((0x00080000&(data))>>19)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_cah_2p_0_fail_group(data)        ((0x00040000&(data))>>18)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_cah_1p_fail_group(data)          ((0x00020000&(data))>>17)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_dcmprs_fail_group(data)          ((0x00010000&(data))>>16)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_cmprs_fail_group(data)           ((0x00008000&(data))>>15)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_dbk_fail_group(data)             ((0x00004000&(data))>>14)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_seg_mvd_fail_group(data)         ((0x00002000&(data))>>13)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_rlrmem_mvbuf_fail_group(data)    ((0x00001000&(data))>>12)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_cm2_fail_group(data)             ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_cm1_fail_group(data)             ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_brg_fail_group(data)             ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_sao_fail_group(data)             ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_it_bs_fail_group(data)           ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_it_1_fail_group(data)            ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_it_0_1_fail_group(data)          ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_it_0_0_fail_group(data)          ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_vm_1_fail_group(data)            ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_vm_0_fail_group(data)            ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_vld_0_fail_group(data)           ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_fail_group0_get_ve_drf_rif_fail_group(data)             (0x00000001&(data))

#define  VE_MBIST_ve_drf_fail_group1                                            0x1800FF40
#define  VE_MBIST_ve_drf_fail_group1_reg_addr                                    "0xB800FF40"
#define  VE_MBIST_ve_drf_fail_group1_reg                                         0xB800FF40
#define  VE_MBIST_ve_drf_fail_group1_inst_addr                                   "0x0011"
#define  set_VE_MBIST_ve_drf_fail_group1_reg(data)                               (*((volatile unsigned int*)VE_MBIST_ve_drf_fail_group1_reg)=data)
#define  get_VE_MBIST_ve_drf_fail_group1_reg                                     (*((volatile unsigned int*)VE_MBIST_ve_drf_fail_group1_reg))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ngh_2_bisr_fail_group_shift          (11)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ngh_bisr_fail_group_shift            (10)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cah_bisr_fail_group_shift            (9)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_pred_2e_fail_group_shift             (8)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_rlrmem01_fail_group_shift            (7)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cmprs_1_fail_group_shift             (6)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_pred_3_2p_fail_group_shift           (5)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_vm_2_fail_group_shift                (4)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ciblk_fail_group_shift               (3)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_sr_fail_group_shift                  (2)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cdef_fail_group_shift                (1)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_lr_fail_group_shift                  (0)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ngh_2_bisr_fail_group_mask           (0x00000800)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ngh_bisr_fail_group_mask             (0x00000400)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cah_bisr_fail_group_mask             (0x00000200)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_pred_2e_fail_group_mask              (0x00000100)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_rlrmem01_fail_group_mask             (0x00000080)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cmprs_1_fail_group_mask              (0x00000040)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_pred_3_2p_fail_group_mask            (0x00000020)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_vm_2_fail_group_mask                 (0x00000010)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ciblk_fail_group_mask                (0x00000008)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_sr_fail_group_mask                   (0x00000004)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cdef_fail_group_mask                 (0x00000002)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_lr_fail_group_mask                   (0x00000001)
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ngh_2_bisr_fail_group(data)          (0x00000800&((data)<<11))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ngh_bisr_fail_group(data)            (0x00000400&((data)<<10))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cah_bisr_fail_group(data)            (0x00000200&((data)<<9))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_pred_2e_fail_group(data)             (0x00000100&((data)<<8))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_rlrmem01_fail_group(data)            (0x00000080&((data)<<7))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cmprs_1_fail_group(data)             (0x00000040&((data)<<6))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_pred_3_2p_fail_group(data)           (0x00000020&((data)<<5))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_vm_2_fail_group(data)                (0x00000010&((data)<<4))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_ciblk_fail_group(data)               (0x00000008&((data)<<3))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_sr_fail_group(data)                  (0x00000004&((data)<<2))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_cdef_fail_group(data)                (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_fail_group1_ve_drf_lr_fail_group(data)                  (0x00000001&(data))
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_ngh_2_bisr_fail_group(data)      ((0x00000800&(data))>>11)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_ngh_bisr_fail_group(data)        ((0x00000400&(data))>>10)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_cah_bisr_fail_group(data)        ((0x00000200&(data))>>9)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_pred_2e_fail_group(data)         ((0x00000100&(data))>>8)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_rlrmem01_fail_group(data)        ((0x00000080&(data))>>7)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_cmprs_1_fail_group(data)         ((0x00000040&(data))>>6)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_pred_3_2p_fail_group(data)       ((0x00000020&(data))>>5)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_vm_2_fail_group(data)            ((0x00000010&(data))>>4)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_ciblk_fail_group(data)           ((0x00000008&(data))>>3)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_sr_fail_group(data)              ((0x00000004&(data))>>2)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_cdef_fail_group(data)            ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_fail_group1_get_ve_drf_lr_fail_group(data)              (0x00000001&(data))

#define  VE_MBIST_cah_bisr_second_run_en                                        0x1800FF48
#define  VE_MBIST_cah_bisr_second_run_en_reg_addr                                "0xB800FF48"
#define  VE_MBIST_cah_bisr_second_run_en_reg                                     0xB800FF48
#define  VE_MBIST_cah_bisr_second_run_en_inst_addr                               "0x0012"
#define  set_VE_MBIST_cah_bisr_second_run_en_reg(data)                           (*((volatile unsigned int*)VE_MBIST_cah_bisr_second_run_en_reg)=data)
#define  get_VE_MBIST_cah_bisr_second_run_en_reg                                 (*((volatile unsigned int*)VE_MBIST_cah_bisr_second_run_en_reg))
#define  VE_MBIST_cah_bisr_second_run_en_ve_ngh_2_bisr_second_run_shift          (2)
#define  VE_MBIST_cah_bisr_second_run_en_ve_ngh_bisr_second_run_shift            (1)
#define  VE_MBIST_cah_bisr_second_run_en_ve_cah_bisr_second_run_shift            (0)
#define  VE_MBIST_cah_bisr_second_run_en_ve_ngh_2_bisr_second_run_mask           (0x00000004)
#define  VE_MBIST_cah_bisr_second_run_en_ve_ngh_bisr_second_run_mask             (0x00000002)
#define  VE_MBIST_cah_bisr_second_run_en_ve_cah_bisr_second_run_mask             (0x00000001)
#define  VE_MBIST_cah_bisr_second_run_en_ve_ngh_2_bisr_second_run(data)          (0x00000004&((data)<<2))
#define  VE_MBIST_cah_bisr_second_run_en_ve_ngh_bisr_second_run(data)            (0x00000002&((data)<<1))
#define  VE_MBIST_cah_bisr_second_run_en_ve_cah_bisr_second_run(data)            (0x00000001&(data))
#define  VE_MBIST_cah_bisr_second_run_en_get_ve_ngh_2_bisr_second_run(data)      ((0x00000004&(data))>>2)
#define  VE_MBIST_cah_bisr_second_run_en_get_ve_ngh_bisr_second_run(data)        ((0x00000002&(data))>>1)
#define  VE_MBIST_cah_bisr_second_run_en_get_ve_cah_bisr_second_run(data)        (0x00000001&(data))

#define  VE_MBIST_cah_bisr_fail_group                                           0x1800FF4C
#define  VE_MBIST_cah_bisr_fail_group_reg_addr                                   "0xB800FF4C"
#define  VE_MBIST_cah_bisr_fail_group_reg                                        0xB800FF4C
#define  VE_MBIST_cah_bisr_fail_group_inst_addr                                  "0x0013"
#define  set_VE_MBIST_cah_bisr_fail_group_reg(data)                              (*((volatile unsigned int*)VE_MBIST_cah_bisr_fail_group_reg)=data)
#define  get_VE_MBIST_cah_bisr_fail_group_reg                                    (*((volatile unsigned int*)VE_MBIST_cah_bisr_fail_group_reg))
#define  VE_MBIST_cah_bisr_fail_group_ve_ngh_2_bisr_fail_group_shift             (2)
#define  VE_MBIST_cah_bisr_fail_group_ve_ngh_bisr_fail_group_shift               (1)
#define  VE_MBIST_cah_bisr_fail_group_ve_cah_bisr_fail_group_shift               (0)
#define  VE_MBIST_cah_bisr_fail_group_ve_ngh_2_bisr_fail_group_mask              (0x00000004)
#define  VE_MBIST_cah_bisr_fail_group_ve_ngh_bisr_fail_group_mask                (0x00000002)
#define  VE_MBIST_cah_bisr_fail_group_ve_cah_bisr_fail_group_mask                (0x00000001)
#define  VE_MBIST_cah_bisr_fail_group_ve_ngh_2_bisr_fail_group(data)             (0x00000004&((data)<<2))
#define  VE_MBIST_cah_bisr_fail_group_ve_ngh_bisr_fail_group(data)               (0x00000002&((data)<<1))
#define  VE_MBIST_cah_bisr_fail_group_ve_cah_bisr_fail_group(data)               (0x00000001&(data))
#define  VE_MBIST_cah_bisr_fail_group_get_ve_ngh_2_bisr_fail_group(data)         ((0x00000004&(data))>>2)
#define  VE_MBIST_cah_bisr_fail_group_get_ve_ngh_bisr_fail_group(data)           ((0x00000002&(data))>>1)
#define  VE_MBIST_cah_bisr_fail_group_get_ve_cah_bisr_fail_group(data)           (0x00000001&(data))

#define  VE_MBIST_ve_bist_rif_fail                                              0x1800FF50
#define  VE_MBIST_ve_bist_rif_fail_reg_addr                                      "0xB800FF50"
#define  VE_MBIST_ve_bist_rif_fail_reg                                           0xB800FF50
#define  VE_MBIST_ve_bist_rif_fail_inst_addr                                     "0x0014"
#define  set_VE_MBIST_ve_bist_rif_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_bist_rif_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_rif_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_bist_rif_fail_reg))
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_p2_fail_shift                         (25)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_vld_1_fail_shift                      (15)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_vld_0_fail_shift                      (5)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_rif_fail_shift                        (0)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_p2_fail_mask                          (0x3E000000)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_vld_1_fail_mask                       (0x01FF8000)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_vld_0_fail_mask                       (0x00007FE0)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_rif_fail_mask                         (0x0000001F)
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_p2_fail(data)                         (0x3E000000&((data)<<25))
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_vld_1_fail(data)                      (0x01FF8000&((data)<<15))
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_vld_0_fail(data)                      (0x00007FE0&((data)<<5))
#define  VE_MBIST_ve_bist_rif_fail_ve_bist_rif_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_ve_bist_rif_fail_get_ve_bist_p2_fail(data)                     ((0x3E000000&(data))>>25)
#define  VE_MBIST_ve_bist_rif_fail_get_ve_bist_vld_1_fail(data)                  ((0x01FF8000&(data))>>15)
#define  VE_MBIST_ve_bist_rif_fail_get_ve_bist_vld_0_fail(data)                  ((0x00007FE0&(data))>>5)
#define  VE_MBIST_ve_bist_rif_fail_get_ve_bist_rif_fail(data)                    (0x0000001F&(data))

#define  VE_MBIST_ve_drf_rif_fail                                               0x1800FF54
#define  VE_MBIST_ve_drf_rif_fail_reg_addr                                       "0xB800FF54"
#define  VE_MBIST_ve_drf_rif_fail_reg                                            0xB800FF54
#define  VE_MBIST_ve_drf_rif_fail_inst_addr                                      "0x0015"
#define  set_VE_MBIST_ve_drf_rif_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_drf_rif_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_rif_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_drf_rif_fail_reg))
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_p2_fail_shift                           (25)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_vld_1_fail_shift                        (15)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_vld_0_fail_shift                        (5)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_rif_fail_shift                          (0)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_p2_fail_mask                            (0x3E000000)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_vld_1_fail_mask                         (0x01FF8000)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_vld_0_fail_mask                         (0x00007FE0)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_rif_fail_mask                           (0x0000001F)
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_p2_fail(data)                           (0x3E000000&((data)<<25))
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_vld_1_fail(data)                        (0x01FF8000&((data)<<15))
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_vld_0_fail(data)                        (0x00007FE0&((data)<<5))
#define  VE_MBIST_ve_drf_rif_fail_ve_drf_rif_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_ve_drf_rif_fail_get_ve_drf_p2_fail(data)                       ((0x3E000000&(data))>>25)
#define  VE_MBIST_ve_drf_rif_fail_get_ve_drf_vld_1_fail(data)                    ((0x01FF8000&(data))>>15)
#define  VE_MBIST_ve_drf_rif_fail_get_ve_drf_vld_0_fail(data)                    ((0x00007FE0&(data))>>5)
#define  VE_MBIST_ve_drf_rif_fail_get_ve_drf_rif_fail(data)                      (0x0000001F&(data))

#define  VE_MBIST_ve_bist_vm_fail                                               0x1800FF58
#define  VE_MBIST_ve_bist_vm_fail_reg_addr                                       "0xB800FF58"
#define  VE_MBIST_ve_bist_vm_fail_reg                                            0xB800FF58
#define  VE_MBIST_ve_bist_vm_fail_inst_addr                                      "0x0016"
#define  set_VE_MBIST_ve_bist_vm_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_bist_vm_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_vm_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_bist_vm_fail_reg))
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_2_fail_shift                        (20)
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_1_fail_shift                        (10)
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_0_fail_shift                        (0)
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_2_fail_mask                         (0x07F00000)
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_1_fail_mask                         (0x000FFC00)
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_0_fail_mask                         (0x000003FF)
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_2_fail(data)                        (0x07F00000&((data)<<20))
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_1_fail(data)                        (0x000FFC00&((data)<<10))
#define  VE_MBIST_ve_bist_vm_fail_ve_bist_vm_0_fail(data)                        (0x000003FF&(data))
#define  VE_MBIST_ve_bist_vm_fail_get_ve_bist_vm_2_fail(data)                    ((0x07F00000&(data))>>20)
#define  VE_MBIST_ve_bist_vm_fail_get_ve_bist_vm_1_fail(data)                    ((0x000FFC00&(data))>>10)
#define  VE_MBIST_ve_bist_vm_fail_get_ve_bist_vm_0_fail(data)                    (0x000003FF&(data))

#define  VE_MBIST_ve_drf_vm_fail                                                0x1800FF5C
#define  VE_MBIST_ve_drf_vm_fail_reg_addr                                        "0xB800FF5C"
#define  VE_MBIST_ve_drf_vm_fail_reg                                             0xB800FF5C
#define  VE_MBIST_ve_drf_vm_fail_inst_addr                                       "0x0017"
#define  set_VE_MBIST_ve_drf_vm_fail_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_vm_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_vm_fail_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_vm_fail_reg))
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_2_fail_shift                          (20)
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_1_fail_shift                          (10)
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_0_fail_shift                          (0)
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_2_fail_mask                           (0x07F00000)
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_1_fail_mask                           (0x000FFC00)
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_0_fail_mask                           (0x000003FF)
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_2_fail(data)                          (0x07F00000&((data)<<20))
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_1_fail(data)                          (0x000FFC00&((data)<<10))
#define  VE_MBIST_ve_drf_vm_fail_ve_drf_vm_0_fail(data)                          (0x000003FF&(data))
#define  VE_MBIST_ve_drf_vm_fail_get_ve_drf_vm_2_fail(data)                      ((0x07F00000&(data))>>20)
#define  VE_MBIST_ve_drf_vm_fail_get_ve_drf_vm_1_fail(data)                      ((0x000FFC00&(data))>>10)
#define  VE_MBIST_ve_drf_vm_fail_get_ve_drf_vm_0_fail(data)                      (0x000003FF&(data))

#define  VE_MBIST_ve_bist_it_fail                                               0x1800FF60
#define  VE_MBIST_ve_bist_it_fail_reg_addr                                       "0xB800FF60"
#define  VE_MBIST_ve_bist_it_fail_reg                                            0xB800FF60
#define  VE_MBIST_ve_bist_it_fail_inst_addr                                      "0x0018"
#define  set_VE_MBIST_ve_bist_it_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_bist_it_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_it_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_bist_it_fail_reg))
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_bs_fail_shift                       (26)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_1_fail_shift                        (20)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_0_1_fail_shift                      (10)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_0_0_fail_shift                      (0)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_bs_fail_mask                        (0x3C000000)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_1_fail_mask                         (0x03F00000)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_0_1_fail_mask                       (0x000FFC00)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_0_0_fail_mask                       (0x000003FF)
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_bs_fail(data)                       (0x3C000000&((data)<<26))
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_1_fail(data)                        (0x03F00000&((data)<<20))
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_0_1_fail(data)                      (0x000FFC00&((data)<<10))
#define  VE_MBIST_ve_bist_it_fail_ve_bist_it_0_0_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_ve_bist_it_fail_get_ve_bist_it_bs_fail(data)                   ((0x3C000000&(data))>>26)
#define  VE_MBIST_ve_bist_it_fail_get_ve_bist_it_1_fail(data)                    ((0x03F00000&(data))>>20)
#define  VE_MBIST_ve_bist_it_fail_get_ve_bist_it_0_1_fail(data)                  ((0x000FFC00&(data))>>10)
#define  VE_MBIST_ve_bist_it_fail_get_ve_bist_it_0_0_fail(data)                  (0x000003FF&(data))

#define  VE_MBIST_ve_drf_it_fail                                                0x1800FF64
#define  VE_MBIST_ve_drf_it_fail_reg_addr                                        "0xB800FF64"
#define  VE_MBIST_ve_drf_it_fail_reg                                             0xB800FF64
#define  VE_MBIST_ve_drf_it_fail_inst_addr                                       "0x0019"
#define  set_VE_MBIST_ve_drf_it_fail_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_it_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_it_fail_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_it_fail_reg))
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_bs_fail_shift                         (26)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_1_fail_shift                          (20)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_0_1_fail_shift                        (10)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_0_0_fail_shift                        (0)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_bs_fail_mask                          (0x3C000000)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_1_fail_mask                           (0x03F00000)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_0_1_fail_mask                         (0x000FFC00)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_0_0_fail_mask                         (0x000003FF)
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_bs_fail(data)                         (0x3C000000&((data)<<26))
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_1_fail(data)                          (0x03F00000&((data)<<20))
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_0_1_fail(data)                        (0x000FFC00&((data)<<10))
#define  VE_MBIST_ve_drf_it_fail_ve_drf_it_0_0_fail(data)                        (0x000003FF&(data))
#define  VE_MBIST_ve_drf_it_fail_get_ve_drf_it_bs_fail(data)                     ((0x3C000000&(data))>>26)
#define  VE_MBIST_ve_drf_it_fail_get_ve_drf_it_1_fail(data)                      ((0x03F00000&(data))>>20)
#define  VE_MBIST_ve_drf_it_fail_get_ve_drf_it_0_1_fail(data)                    ((0x000FFC00&(data))>>10)
#define  VE_MBIST_ve_drf_it_fail_get_ve_drf_it_0_0_fail(data)                    (0x000003FF&(data))

#define  VE_MBIST_ve_bist_sao_fail                                              0x1800FF68
#define  VE_MBIST_ve_bist_sao_fail_reg_addr                                      "0xB800FF68"
#define  VE_MBIST_ve_bist_sao_fail_reg                                           0xB800FF68
#define  VE_MBIST_ve_bist_sao_fail_inst_addr                                     "0x001A"
#define  set_VE_MBIST_ve_bist_sao_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_bist_sao_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_sao_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_bist_sao_fail_reg))
#define  VE_MBIST_ve_bist_sao_fail_ve_bist_sao_fail_shift                        (0)
#define  VE_MBIST_ve_bist_sao_fail_ve_bist_sao_fail_mask                         (0x00000007)
#define  VE_MBIST_ve_bist_sao_fail_ve_bist_sao_fail(data)                        (0x00000007&(data))
#define  VE_MBIST_ve_bist_sao_fail_get_ve_bist_sao_fail(data)                    (0x00000007&(data))

#define  VE_MBIST_ve_drf_sao_fail                                               0x1800FF6C
#define  VE_MBIST_ve_drf_sao_fail_reg_addr                                       "0xB800FF6C"
#define  VE_MBIST_ve_drf_sao_fail_reg                                            0xB800FF6C
#define  VE_MBIST_ve_drf_sao_fail_inst_addr                                      "0x001B"
#define  set_VE_MBIST_ve_drf_sao_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_drf_sao_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_sao_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_drf_sao_fail_reg))
#define  VE_MBIST_ve_drf_sao_fail_ve_drf_sao_fail_shift                          (0)
#define  VE_MBIST_ve_drf_sao_fail_ve_drf_sao_fail_mask                           (0x00000007)
#define  VE_MBIST_ve_drf_sao_fail_ve_drf_sao_fail(data)                          (0x00000007&(data))
#define  VE_MBIST_ve_drf_sao_fail_get_ve_drf_sao_fail(data)                      (0x00000007&(data))

#define  VE_MBIST_ve_bist_brg_fail                                              0x1800FF70
#define  VE_MBIST_ve_bist_brg_fail_reg_addr                                      "0xB800FF70"
#define  VE_MBIST_ve_bist_brg_fail_reg                                           0xB800FF70
#define  VE_MBIST_ve_bist_brg_fail_inst_addr                                     "0x001C"
#define  set_VE_MBIST_ve_bist_brg_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_bist_brg_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_brg_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_bist_brg_fail_reg))
#define  VE_MBIST_ve_bist_brg_fail_ve_bist_brg_fail_shift                        (0)
#define  VE_MBIST_ve_bist_brg_fail_ve_bist_brg_fail_mask                         (0x0000001F)
#define  VE_MBIST_ve_bist_brg_fail_ve_bist_brg_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_ve_bist_brg_fail_get_ve_bist_brg_fail(data)                    (0x0000001F&(data))

#define  VE_MBIST_ve_drf_brg_fail                                               0x1800FF74
#define  VE_MBIST_ve_drf_brg_fail_reg_addr                                       "0xB800FF74"
#define  VE_MBIST_ve_drf_brg_fail_reg                                            0xB800FF74
#define  VE_MBIST_ve_drf_brg_fail_inst_addr                                      "0x001D"
#define  set_VE_MBIST_ve_drf_brg_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_drf_brg_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_brg_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_drf_brg_fail_reg))
#define  VE_MBIST_ve_drf_brg_fail_ve_drf_brg_fail_shift                          (0)
#define  VE_MBIST_ve_drf_brg_fail_ve_drf_brg_fail_mask                           (0x0000001F)
#define  VE_MBIST_ve_drf_brg_fail_ve_drf_brg_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_ve_drf_brg_fail_get_ve_drf_brg_fail(data)                      (0x0000001F&(data))

#define  VE_MBIST_ve_bist_cm_fail                                               0x1800FF78
#define  VE_MBIST_ve_bist_cm_fail_reg_addr                                       "0xB800FF78"
#define  VE_MBIST_ve_bist_cm_fail_reg                                            0xB800FF78
#define  VE_MBIST_ve_bist_cm_fail_inst_addr                                      "0x001E"
#define  set_VE_MBIST_ve_bist_cm_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_bist_cm_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_cm_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_bist_cm_fail_reg))
#define  VE_MBIST_ve_bist_cm_fail_ve_bist_cm2_fail_shift                         (10)
#define  VE_MBIST_ve_bist_cm_fail_ve_bist_cm1_fail_shift                         (0)
#define  VE_MBIST_ve_bist_cm_fail_ve_bist_cm2_fail_mask                          (0x000FFC00)
#define  VE_MBIST_ve_bist_cm_fail_ve_bist_cm1_fail_mask                          (0x000003FF)
#define  VE_MBIST_ve_bist_cm_fail_ve_bist_cm2_fail(data)                         (0x000FFC00&((data)<<10))
#define  VE_MBIST_ve_bist_cm_fail_ve_bist_cm1_fail(data)                         (0x000003FF&(data))
#define  VE_MBIST_ve_bist_cm_fail_get_ve_bist_cm2_fail(data)                     ((0x000FFC00&(data))>>10)
#define  VE_MBIST_ve_bist_cm_fail_get_ve_bist_cm1_fail(data)                     (0x000003FF&(data))

#define  VE_MBIST_ve_drf_cm_fail                                                0x1800FF7C
#define  VE_MBIST_ve_drf_cm_fail_reg_addr                                        "0xB800FF7C"
#define  VE_MBIST_ve_drf_cm_fail_reg                                             0xB800FF7C
#define  VE_MBIST_ve_drf_cm_fail_inst_addr                                       "0x001F"
#define  set_VE_MBIST_ve_drf_cm_fail_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_cm_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_cm_fail_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_cm_fail_reg))
#define  VE_MBIST_ve_drf_cm_fail_ve_drf_cm2_fail_shift                           (10)
#define  VE_MBIST_ve_drf_cm_fail_ve_drf_cm1_fail_shift                           (0)
#define  VE_MBIST_ve_drf_cm_fail_ve_drf_cm2_fail_mask                            (0x000FFC00)
#define  VE_MBIST_ve_drf_cm_fail_ve_drf_cm1_fail_mask                            (0x000003FF)
#define  VE_MBIST_ve_drf_cm_fail_ve_drf_cm2_fail(data)                           (0x000FFC00&((data)<<10))
#define  VE_MBIST_ve_drf_cm_fail_ve_drf_cm1_fail(data)                           (0x000003FF&(data))
#define  VE_MBIST_ve_drf_cm_fail_get_ve_drf_cm2_fail(data)                       ((0x000FFC00&(data))>>10)
#define  VE_MBIST_ve_drf_cm_fail_get_ve_drf_cm1_fail(data)                       (0x000003FF&(data))

#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail                                     0x1800FF80
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_reg_addr                             "0xB800FF80"
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_reg                                  0xB800FF80
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_inst_addr                            "0x0020"
#define  set_VE_MBIST_ve_bist_rlrmem_mvbuf_fail_reg(data)                        (*((volatile unsigned int*)VE_MBIST_ve_bist_rlrmem_mvbuf_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_rlrmem_mvbuf_fail_reg                              (*((volatile unsigned int*)VE_MBIST_ve_bist_rlrmem_mvbuf_fail_reg))
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_ve_bist_rlrmem01_fail_shift          (7)
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_ve_bist_rlrmem_mvbuf_fail_shift      (0)
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_ve_bist_rlrmem01_fail_mask           (0x00007F80)
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_ve_bist_rlrmem_mvbuf_fail_mask       (0x0000007F)
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_ve_bist_rlrmem01_fail(data)          (0x00007F80&((data)<<7))
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_ve_bist_rlrmem_mvbuf_fail(data)      (0x0000007F&(data))
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_get_ve_bist_rlrmem01_fail(data)      ((0x00007F80&(data))>>7)
#define  VE_MBIST_ve_bist_rlrmem_mvbuf_fail_get_ve_bist_rlrmem_mvbuf_fail(data)  (0x0000007F&(data))

#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail                                      0x1800FF84
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_reg_addr                              "0xB800FF84"
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_reg                                   0xB800FF84
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_inst_addr                             "0x0021"
#define  set_VE_MBIST_ve_drf_rlrmem_mvbuf_fail_reg(data)                         (*((volatile unsigned int*)VE_MBIST_ve_drf_rlrmem_mvbuf_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_rlrmem_mvbuf_fail_reg                               (*((volatile unsigned int*)VE_MBIST_ve_drf_rlrmem_mvbuf_fail_reg))
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_ve_drf_rlrmem01_fail_shift            (7)
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_ve_drf_rlrmem_mvbuf_fail_shift        (0)
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_ve_drf_rlrmem01_fail_mask             (0x00007F80)
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_ve_drf_rlrmem_mvbuf_fail_mask         (0x0000007F)
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_ve_drf_rlrmem01_fail(data)            (0x00007F80&((data)<<7))
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_ve_drf_rlrmem_mvbuf_fail(data)        (0x0000007F&(data))
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_get_ve_drf_rlrmem01_fail(data)        ((0x00007F80&(data))>>7)
#define  VE_MBIST_ve_drf_rlrmem_mvbuf_fail_get_ve_drf_rlrmem_mvbuf_fail(data)    (0x0000007F&(data))

#define  VE_MBIST_ve_bist_seg_mvd_fail                                          0x1800FF88
#define  VE_MBIST_ve_bist_seg_mvd_fail_reg_addr                                  "0xB800FF88"
#define  VE_MBIST_ve_bist_seg_mvd_fail_reg                                       0xB800FF88
#define  VE_MBIST_ve_bist_seg_mvd_fail_inst_addr                                 "0x0022"
#define  set_VE_MBIST_ve_bist_seg_mvd_fail_reg(data)                             (*((volatile unsigned int*)VE_MBIST_ve_bist_seg_mvd_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_seg_mvd_fail_reg                                   (*((volatile unsigned int*)VE_MBIST_ve_bist_seg_mvd_fail_reg))
#define  VE_MBIST_ve_bist_seg_mvd_fail_ve_bist_seg_mvd_fail_shift                (0)
#define  VE_MBIST_ve_bist_seg_mvd_fail_ve_bist_seg_mvd_fail_mask                 (0x000001FF)
#define  VE_MBIST_ve_bist_seg_mvd_fail_ve_bist_seg_mvd_fail(data)                (0x000001FF&(data))
#define  VE_MBIST_ve_bist_seg_mvd_fail_get_ve_bist_seg_mvd_fail(data)            (0x000001FF&(data))

#define  VE_MBIST_ve_drf_seg_mvd_fail                                           0x1800FF8C
#define  VE_MBIST_ve_drf_seg_mvd_fail_reg_addr                                   "0xB800FF8C"
#define  VE_MBIST_ve_drf_seg_mvd_fail_reg                                        0xB800FF8C
#define  VE_MBIST_ve_drf_seg_mvd_fail_inst_addr                                  "0x0023"
#define  set_VE_MBIST_ve_drf_seg_mvd_fail_reg(data)                              (*((volatile unsigned int*)VE_MBIST_ve_drf_seg_mvd_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_seg_mvd_fail_reg                                    (*((volatile unsigned int*)VE_MBIST_ve_drf_seg_mvd_fail_reg))
#define  VE_MBIST_ve_drf_seg_mvd_fail_ve_drf_seg_mvd_fail_shift                  (0)
#define  VE_MBIST_ve_drf_seg_mvd_fail_ve_drf_seg_mvd_fail_mask                   (0x000001FF)
#define  VE_MBIST_ve_drf_seg_mvd_fail_ve_drf_seg_mvd_fail(data)                  (0x000001FF&(data))
#define  VE_MBIST_ve_drf_seg_mvd_fail_get_ve_drf_seg_mvd_fail(data)              (0x000001FF&(data))

#define  VE_MBIST_ve_bist_dbk_0_fail                                            0x1800FF90
#define  VE_MBIST_ve_bist_dbk_0_fail_reg_addr                                    "0xB800FF90"
#define  VE_MBIST_ve_bist_dbk_0_fail_reg                                         0xB800FF90
#define  VE_MBIST_ve_bist_dbk_0_fail_inst_addr                                   "0x0024"
#define  set_VE_MBIST_ve_bist_dbk_0_fail_reg(data)                               (*((volatile unsigned int*)VE_MBIST_ve_bist_dbk_0_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_dbk_0_fail_reg                                     (*((volatile unsigned int*)VE_MBIST_ve_bist_dbk_0_fail_reg))
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_cmprs_1_fail_shift                  (14)
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_cmprs_fail_shift                    (10)
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_dbk_fail_shift                      (0)
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_cmprs_1_fail_mask                   (0x0007C000)
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_cmprs_fail_mask                     (0x00003C00)
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_dbk_fail_mask                       (0x000003FF)
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_cmprs_1_fail(data)                  (0x0007C000&((data)<<14))
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_cmprs_fail(data)                    (0x00003C00&((data)<<10))
#define  VE_MBIST_ve_bist_dbk_0_fail_ve_bist_dbk_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_ve_bist_dbk_0_fail_get_ve_bist_cmprs_1_fail(data)              ((0x0007C000&(data))>>14)
#define  VE_MBIST_ve_bist_dbk_0_fail_get_ve_bist_cmprs_fail(data)                ((0x00003C00&(data))>>10)
#define  VE_MBIST_ve_bist_dbk_0_fail_get_ve_bist_dbk_fail(data)                  (0x000003FF&(data))

#define  VE_MBIST_ve_drf_dbk_0_fail                                             0x1800FF94
#define  VE_MBIST_ve_drf_dbk_0_fail_reg_addr                                     "0xB800FF94"
#define  VE_MBIST_ve_drf_dbk_0_fail_reg                                          0xB800FF94
#define  VE_MBIST_ve_drf_dbk_0_fail_inst_addr                                    "0x0025"
#define  set_VE_MBIST_ve_drf_dbk_0_fail_reg(data)                                (*((volatile unsigned int*)VE_MBIST_ve_drf_dbk_0_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_dbk_0_fail_reg                                      (*((volatile unsigned int*)VE_MBIST_ve_drf_dbk_0_fail_reg))
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_cmprs_1_fail_shift                    (14)
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_cmprs_fail_shift                      (10)
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_dbk_fail_shift                        (0)
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_cmprs_1_fail_mask                     (0x0007C000)
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_cmprs_fail_mask                       (0x00003C00)
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_dbk_fail_mask                         (0x000003FF)
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_cmprs_1_fail(data)                    (0x0007C000&((data)<<14))
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_cmprs_fail(data)                      (0x00003C00&((data)<<10))
#define  VE_MBIST_ve_drf_dbk_0_fail_ve_drf_dbk_fail(data)                        (0x000003FF&(data))
#define  VE_MBIST_ve_drf_dbk_0_fail_get_ve_drf_cmprs_1_fail(data)                ((0x0007C000&(data))>>14)
#define  VE_MBIST_ve_drf_dbk_0_fail_get_ve_drf_cmprs_fail(data)                  ((0x00003C00&(data))>>10)
#define  VE_MBIST_ve_drf_dbk_0_fail_get_ve_drf_dbk_fail(data)                    (0x000003FF&(data))

#define  VE_MBIST_ve_bist_cah_fail                                              0x1800FF98
#define  VE_MBIST_ve_bist_cah_fail_reg_addr                                      "0xB800FF98"
#define  VE_MBIST_ve_bist_cah_fail_reg                                           0xB800FF98
#define  VE_MBIST_ve_bist_cah_fail_inst_addr                                     "0x0026"
#define  set_VE_MBIST_ve_bist_cah_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_bist_cah_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_cah_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_bist_cah_fail_reg))
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_2p_1_fail_shift                   (10)
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_2p_0_fail_shift                   (2)
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_1p_fail_shift                     (0)
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_2p_1_fail_mask                    (0x00003C00)
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_2p_0_fail_mask                    (0x000003FC)
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_1p_fail_mask                      (0x00000003)
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_2p_1_fail(data)                   (0x00003C00&((data)<<10))
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_2p_0_fail(data)                   (0x000003FC&((data)<<2))
#define  VE_MBIST_ve_bist_cah_fail_ve_bist_cah_1p_fail(data)                     (0x00000003&(data))
#define  VE_MBIST_ve_bist_cah_fail_get_ve_bist_cah_2p_1_fail(data)               ((0x00003C00&(data))>>10)
#define  VE_MBIST_ve_bist_cah_fail_get_ve_bist_cah_2p_0_fail(data)               ((0x000003FC&(data))>>2)
#define  VE_MBIST_ve_bist_cah_fail_get_ve_bist_cah_1p_fail(data)                 (0x00000003&(data))

#define  VE_MBIST_ve_drf_cah_fail                                               0x1800FF9C
#define  VE_MBIST_ve_drf_cah_fail_reg_addr                                       "0xB800FF9C"
#define  VE_MBIST_ve_drf_cah_fail_reg                                            0xB800FF9C
#define  VE_MBIST_ve_drf_cah_fail_inst_addr                                      "0x0027"
#define  set_VE_MBIST_ve_drf_cah_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_drf_cah_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_cah_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_drf_cah_fail_reg))
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_2p_1_fail_shift                     (10)
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_2p_0_fail_shift                     (2)
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_1p_fail_shift                       (0)
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_2p_1_fail_mask                      (0x00003C00)
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_2p_0_fail_mask                      (0x000003FC)
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_1p_fail_mask                        (0x00000003)
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_2p_1_fail(data)                     (0x00003C00&((data)<<10))
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_2p_0_fail(data)                     (0x000003FC&((data)<<2))
#define  VE_MBIST_ve_drf_cah_fail_ve_drf_cah_1p_fail(data)                       (0x00000003&(data))
#define  VE_MBIST_ve_drf_cah_fail_get_ve_drf_cah_2p_1_fail(data)                 ((0x00003C00&(data))>>10)
#define  VE_MBIST_ve_drf_cah_fail_get_ve_drf_cah_2p_0_fail(data)                 ((0x000003FC&(data))>>2)
#define  VE_MBIST_ve_drf_cah_fail_get_ve_drf_cah_1p_fail(data)                   (0x00000003&(data))

#define  VE_MBIST_ve_bist_pred_fail                                             0x1800FFA0
#define  VE_MBIST_ve_bist_pred_fail_reg_addr                                     "0xB800FFA0"
#define  VE_MBIST_ve_bist_pred_fail_reg                                          0xB800FFA0
#define  VE_MBIST_ve_bist_pred_fail_inst_addr                                    "0x0028"
#define  set_VE_MBIST_ve_bist_pred_fail_reg(data)                                (*((volatile unsigned int*)VE_MBIST_ve_bist_pred_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_pred_fail_reg                                      (*((volatile unsigned int*)VE_MBIST_ve_bist_pred_fail_reg))
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_2e_fail_shift                   (24)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_2_fail_shift                    (18)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_1_fail_shift                    (10)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_0_fail_shift                    (0)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_2e_fail_mask                    (0x3F000000)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_2_fail_mask                     (0x00FC0000)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_1_fail_mask                     (0x0003FC00)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_0_fail_mask                     (0x000003FF)
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_2e_fail(data)                   (0x3F000000&((data)<<24))
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_2_fail(data)                    (0x00FC0000&((data)<<18))
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_1_fail(data)                    (0x0003FC00&((data)<<10))
#define  VE_MBIST_ve_bist_pred_fail_ve_bist_pred_0_fail(data)                    (0x000003FF&(data))
#define  VE_MBIST_ve_bist_pred_fail_get_ve_bist_pred_2e_fail(data)               ((0x3F000000&(data))>>24)
#define  VE_MBIST_ve_bist_pred_fail_get_ve_bist_pred_2_fail(data)                ((0x00FC0000&(data))>>18)
#define  VE_MBIST_ve_bist_pred_fail_get_ve_bist_pred_1_fail(data)                ((0x0003FC00&(data))>>10)
#define  VE_MBIST_ve_bist_pred_fail_get_ve_bist_pred_0_fail(data)                (0x000003FF&(data))

#define  VE_MBIST_ve_drf_pred_fail                                              0x1800FFA4
#define  VE_MBIST_ve_drf_pred_fail_reg_addr                                      "0xB800FFA4"
#define  VE_MBIST_ve_drf_pred_fail_reg                                           0xB800FFA4
#define  VE_MBIST_ve_drf_pred_fail_inst_addr                                     "0x0029"
#define  set_VE_MBIST_ve_drf_pred_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_drf_pred_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_pred_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_drf_pred_fail_reg))
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_2e_fail_shift                     (24)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_2_fail_shift                      (18)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_1_fail_shift                      (10)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_0_fail_shift                      (0)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_2e_fail_mask                      (0x3F000000)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_2_fail_mask                       (0x00FC0000)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_1_fail_mask                       (0x0003FC00)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_0_fail_mask                       (0x000003FF)
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_2e_fail(data)                     (0x3F000000&((data)<<24))
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_2_fail(data)                      (0x00FC0000&((data)<<18))
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_1_fail(data)                      (0x0003FC00&((data)<<10))
#define  VE_MBIST_ve_drf_pred_fail_ve_drf_pred_0_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_ve_drf_pred_fail_get_ve_drf_pred_2e_fail(data)                 ((0x3F000000&(data))>>24)
#define  VE_MBIST_ve_drf_pred_fail_get_ve_drf_pred_2_fail(data)                  ((0x00FC0000&(data))>>18)
#define  VE_MBIST_ve_drf_pred_fail_get_ve_drf_pred_1_fail(data)                  ((0x0003FC00&(data))>>10)
#define  VE_MBIST_ve_drf_pred_fail_get_ve_drf_pred_0_fail(data)                  (0x000003FF&(data))

#define  VE_MBIST_ve_bist_ciblk_fail                                            0x1800FFA8
#define  VE_MBIST_ve_bist_ciblk_fail_reg_addr                                    "0xB800FFA8"
#define  VE_MBIST_ve_bist_ciblk_fail_reg                                         0xB800FFA8
#define  VE_MBIST_ve_bist_ciblk_fail_inst_addr                                   "0x002A"
#define  set_VE_MBIST_ve_bist_ciblk_fail_reg(data)                               (*((volatile unsigned int*)VE_MBIST_ve_bist_ciblk_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_ciblk_fail_reg                                     (*((volatile unsigned int*)VE_MBIST_ve_bist_ciblk_fail_reg))
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_pred_3_2p_fail_shift                (16)
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_pred_3_fail_shift                   (7)
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_ciblk_fail_shift                    (0)
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_pred_3_2p_fail_mask                 (0x003F0000)
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_pred_3_fail_mask                    (0x0000FF80)
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_ciblk_fail_mask                     (0x0000007F)
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_pred_3_2p_fail(data)                (0x003F0000&((data)<<16))
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_pred_3_fail(data)                   (0x0000FF80&((data)<<7))
#define  VE_MBIST_ve_bist_ciblk_fail_ve_bist_ciblk_fail(data)                    (0x0000007F&(data))
#define  VE_MBIST_ve_bist_ciblk_fail_get_ve_bist_pred_3_2p_fail(data)            ((0x003F0000&(data))>>16)
#define  VE_MBIST_ve_bist_ciblk_fail_get_ve_bist_pred_3_fail(data)               ((0x0000FF80&(data))>>7)
#define  VE_MBIST_ve_bist_ciblk_fail_get_ve_bist_ciblk_fail(data)                (0x0000007F&(data))

#define  VE_MBIST_ve_drf_ciblk_fail                                             0x1800FFAC
#define  VE_MBIST_ve_drf_ciblk_fail_reg_addr                                     "0xB800FFAC"
#define  VE_MBIST_ve_drf_ciblk_fail_reg                                          0xB800FFAC
#define  VE_MBIST_ve_drf_ciblk_fail_inst_addr                                    "0x002B"
#define  set_VE_MBIST_ve_drf_ciblk_fail_reg(data)                                (*((volatile unsigned int*)VE_MBIST_ve_drf_ciblk_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_ciblk_fail_reg                                      (*((volatile unsigned int*)VE_MBIST_ve_drf_ciblk_fail_reg))
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_pred_3_2p_fail_shift                  (16)
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_pred_3_fail_shift                     (7)
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_ciblk_fail_shift                      (0)
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_pred_3_2p_fail_mask                   (0x003F0000)
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_pred_3_fail_mask                      (0x0000FF80)
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_ciblk_fail_mask                       (0x0000007F)
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_pred_3_2p_fail(data)                  (0x003F0000&((data)<<16))
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_pred_3_fail(data)                     (0x0000FF80&((data)<<7))
#define  VE_MBIST_ve_drf_ciblk_fail_ve_drf_ciblk_fail(data)                      (0x0000007F&(data))
#define  VE_MBIST_ve_drf_ciblk_fail_get_ve_drf_pred_3_2p_fail(data)              ((0x003F0000&(data))>>16)
#define  VE_MBIST_ve_drf_ciblk_fail_get_ve_drf_pred_3_fail(data)                 ((0x0000FF80&(data))>>7)
#define  VE_MBIST_ve_drf_ciblk_fail_get_ve_drf_ciblk_fail(data)                  (0x0000007F&(data))

#define  VE_MBIST_ve_bist_dcmprs_fail                                           0x1800FFB0
#define  VE_MBIST_ve_bist_dcmprs_fail_reg_addr                                   "0xB800FFB0"
#define  VE_MBIST_ve_bist_dcmprs_fail_reg                                        0xB800FFB0
#define  VE_MBIST_ve_bist_dcmprs_fail_inst_addr                                  "0x002C"
#define  set_VE_MBIST_ve_bist_dcmprs_fail_reg(data)                              (*((volatile unsigned int*)VE_MBIST_ve_bist_dcmprs_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_dcmprs_fail_reg                                    (*((volatile unsigned int*)VE_MBIST_ve_bist_dcmprs_fail_reg))
#define  VE_MBIST_ve_bist_dcmprs_fail_ve_bist_dcmprs_outbuf_fail_shift           (9)
#define  VE_MBIST_ve_bist_dcmprs_fail_ve_bist_dcmprs_fail_shift                  (0)
#define  VE_MBIST_ve_bist_dcmprs_fail_ve_bist_dcmprs_outbuf_fail_mask            (0x00007E00)
#define  VE_MBIST_ve_bist_dcmprs_fail_ve_bist_dcmprs_fail_mask                   (0x000001FF)
#define  VE_MBIST_ve_bist_dcmprs_fail_ve_bist_dcmprs_outbuf_fail(data)           (0x00007E00&((data)<<9))
#define  VE_MBIST_ve_bist_dcmprs_fail_ve_bist_dcmprs_fail(data)                  (0x000001FF&(data))
#define  VE_MBIST_ve_bist_dcmprs_fail_get_ve_bist_dcmprs_outbuf_fail(data)       ((0x00007E00&(data))>>9)
#define  VE_MBIST_ve_bist_dcmprs_fail_get_ve_bist_dcmprs_fail(data)              (0x000001FF&(data))

#define  VE_MBIST_ve_drf_dcmprs_fail                                            0x1800FFB4
#define  VE_MBIST_ve_drf_dcmprs_fail_reg_addr                                    "0xB800FFB4"
#define  VE_MBIST_ve_drf_dcmprs_fail_reg                                         0xB800FFB4
#define  VE_MBIST_ve_drf_dcmprs_fail_inst_addr                                   "0x002D"
#define  set_VE_MBIST_ve_drf_dcmprs_fail_reg(data)                               (*((volatile unsigned int*)VE_MBIST_ve_drf_dcmprs_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_dcmprs_fail_reg                                     (*((volatile unsigned int*)VE_MBIST_ve_drf_dcmprs_fail_reg))
#define  VE_MBIST_ve_drf_dcmprs_fail_ve_drf_dcmprs_outbuf_fail_shift             (9)
#define  VE_MBIST_ve_drf_dcmprs_fail_ve_drf_dcmprs_fail_shift                    (0)
#define  VE_MBIST_ve_drf_dcmprs_fail_ve_drf_dcmprs_outbuf_fail_mask              (0x00007E00)
#define  VE_MBIST_ve_drf_dcmprs_fail_ve_drf_dcmprs_fail_mask                     (0x000001FF)
#define  VE_MBIST_ve_drf_dcmprs_fail_ve_drf_dcmprs_outbuf_fail(data)             (0x00007E00&((data)<<9))
#define  VE_MBIST_ve_drf_dcmprs_fail_ve_drf_dcmprs_fail(data)                    (0x000001FF&(data))
#define  VE_MBIST_ve_drf_dcmprs_fail_get_ve_drf_dcmprs_outbuf_fail(data)         ((0x00007E00&(data))>>9)
#define  VE_MBIST_ve_drf_dcmprs_fail_get_ve_drf_dcmprs_fail(data)                (0x000001FF&(data))

#define  VE_MBIST_ve_bist_clmp_fail                                             0x1800FFB8
#define  VE_MBIST_ve_bist_clmp_fail_reg_addr                                     "0xB800FFB8"
#define  VE_MBIST_ve_bist_clmp_fail_reg                                          0xB800FFB8
#define  VE_MBIST_ve_bist_clmp_fail_inst_addr                                    "0x002E"
#define  set_VE_MBIST_ve_bist_clmp_fail_reg(data)                                (*((volatile unsigned int*)VE_MBIST_ve_bist_clmp_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_clmp_fail_reg                                      (*((volatile unsigned int*)VE_MBIST_ve_bist_clmp_fail_reg))
#define  VE_MBIST_ve_bist_clmp_fail_ve_bist_clmp_fail_shift                      (0)
#define  VE_MBIST_ve_bist_clmp_fail_ve_bist_clmp_fail_mask                       (0x0000001F)
#define  VE_MBIST_ve_bist_clmp_fail_ve_bist_clmp_fail(data)                      (0x0000001F&(data))
#define  VE_MBIST_ve_bist_clmp_fail_get_ve_bist_clmp_fail(data)                  (0x0000001F&(data))

#define  VE_MBIST_ve_drf_clmp_fail                                              0x1800FFBC
#define  VE_MBIST_ve_drf_clmp_fail_reg_addr                                      "0xB800FFBC"
#define  VE_MBIST_ve_drf_clmp_fail_reg                                           0xB800FFBC
#define  VE_MBIST_ve_drf_clmp_fail_inst_addr                                     "0x002F"
#define  set_VE_MBIST_ve_drf_clmp_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_drf_clmp_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_clmp_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_drf_clmp_fail_reg))
#define  VE_MBIST_ve_drf_clmp_fail_ve_drf_clmp_fail_shift                        (0)
#define  VE_MBIST_ve_drf_clmp_fail_ve_drf_clmp_fail_mask                         (0x0000001F)
#define  VE_MBIST_ve_drf_clmp_fail_ve_drf_clmp_fail(data)                        (0x0000001F&(data))
#define  VE_MBIST_ve_drf_clmp_fail_get_ve_drf_clmp_fail(data)                    (0x0000001F&(data))

#define  VE_MBIST_ve_bist_p2mvd_fail                                            0x1800FFC0
#define  VE_MBIST_ve_bist_p2mvd_fail_reg_addr                                    "0xB800FFC0"
#define  VE_MBIST_ve_bist_p2mvd_fail_reg                                         0xB800FFC0
#define  VE_MBIST_ve_bist_p2mvd_fail_inst_addr                                   "0x0030"
#define  set_VE_MBIST_ve_bist_p2mvd_fail_reg(data)                               (*((volatile unsigned int*)VE_MBIST_ve_bist_p2mvd_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_p2mvd_fail_reg                                     (*((volatile unsigned int*)VE_MBIST_ve_bist_p2mvd_fail_reg))
#define  VE_MBIST_ve_bist_p2mvd_fail_ve_bist_p2mvd_fail_shift                    (0)
#define  VE_MBIST_ve_bist_p2mvd_fail_ve_bist_p2mvd_fail_mask                     (0x000003FF)
#define  VE_MBIST_ve_bist_p2mvd_fail_ve_bist_p2mvd_fail(data)                    (0x000003FF&(data))
#define  VE_MBIST_ve_bist_p2mvd_fail_get_ve_bist_p2mvd_fail(data)                (0x000003FF&(data))

#define  VE_MBIST_ve_drf_p2mvd_fail                                             0x1800FFC4
#define  VE_MBIST_ve_drf_p2mvd_fail_reg_addr                                     "0xB800FFC4"
#define  VE_MBIST_ve_drf_p2mvd_fail_reg                                          0xB800FFC4
#define  VE_MBIST_ve_drf_p2mvd_fail_inst_addr                                    "0x0031"
#define  set_VE_MBIST_ve_drf_p2mvd_fail_reg(data)                                (*((volatile unsigned int*)VE_MBIST_ve_drf_p2mvd_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_p2mvd_fail_reg                                      (*((volatile unsigned int*)VE_MBIST_ve_drf_p2mvd_fail_reg))
#define  VE_MBIST_ve_drf_p2mvd_fail_ve_drf_p2mvd_fail_shift                      (0)
#define  VE_MBIST_ve_drf_p2mvd_fail_ve_drf_p2mvd_fail_mask                       (0x000003FF)
#define  VE_MBIST_ve_drf_p2mvd_fail_ve_drf_p2mvd_fail(data)                      (0x000003FF&(data))
#define  VE_MBIST_ve_drf_p2mvd_fail_get_ve_drf_p2mvd_fail(data)                  (0x000003FF&(data))

#define  VE_MBIST_ve_bist_mf_fail                                               0x1800FFC8
#define  VE_MBIST_ve_bist_mf_fail_reg_addr                                       "0xB800FFC8"
#define  VE_MBIST_ve_bist_mf_fail_reg                                            0xB800FFC8
#define  VE_MBIST_ve_bist_mf_fail_inst_addr                                      "0x0032"
#define  set_VE_MBIST_ve_bist_mf_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_bist_mf_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_mf_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_bist_mf_fail_reg))
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf2_fail_shift                         (16)
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf1_fail_shift                         (8)
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf0_fail_shift                         (0)
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf2_fail_mask                          (0x00FF0000)
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf1_fail_mask                          (0x0000FF00)
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf0_fail_mask                          (0x000000FF)
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf2_fail(data)                         (0x00FF0000&((data)<<16))
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf1_fail(data)                         (0x0000FF00&((data)<<8))
#define  VE_MBIST_ve_bist_mf_fail_ve_bist_mf0_fail(data)                         (0x000000FF&(data))
#define  VE_MBIST_ve_bist_mf_fail_get_ve_bist_mf2_fail(data)                     ((0x00FF0000&(data))>>16)
#define  VE_MBIST_ve_bist_mf_fail_get_ve_bist_mf1_fail(data)                     ((0x0000FF00&(data))>>8)
#define  VE_MBIST_ve_bist_mf_fail_get_ve_bist_mf0_fail(data)                     (0x000000FF&(data))

#define  VE_MBIST_ve_drf_mf_fail                                                0x1800FFCC
#define  VE_MBIST_ve_drf_mf_fail_reg_addr                                        "0xB800FFCC"
#define  VE_MBIST_ve_drf_mf_fail_reg                                             0xB800FFCC
#define  VE_MBIST_ve_drf_mf_fail_inst_addr                                       "0x0033"
#define  set_VE_MBIST_ve_drf_mf_fail_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_mf_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_mf_fail_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_mf_fail_reg))
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf2_fail_shift                           (16)
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf1_fail_shift                           (8)
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf0_fail_shift                           (0)
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf2_fail_mask                            (0x00FF0000)
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf1_fail_mask                            (0x0000FF00)
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf0_fail_mask                            (0x000000FF)
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf2_fail(data)                           (0x00FF0000&((data)<<16))
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf1_fail(data)                           (0x0000FF00&((data)<<8))
#define  VE_MBIST_ve_drf_mf_fail_ve_drf_mf0_fail(data)                           (0x000000FF&(data))
#define  VE_MBIST_ve_drf_mf_fail_get_ve_drf_mf2_fail(data)                       ((0x00FF0000&(data))>>16)
#define  VE_MBIST_ve_drf_mf_fail_get_ve_drf_mf1_fail(data)                       ((0x0000FF00&(data))>>8)
#define  VE_MBIST_ve_drf_mf_fail_get_ve_drf_mf0_fail(data)                       (0x000000FF&(data))

#define  VE_MBIST_ve_bist_lr_fail                                               0x1800FFD0
#define  VE_MBIST_ve_bist_lr_fail_reg_addr                                       "0xB800FFD0"
#define  VE_MBIST_ve_bist_lr_fail_reg                                            0xB800FFD0
#define  VE_MBIST_ve_bist_lr_fail_inst_addr                                      "0x0034"
#define  set_VE_MBIST_ve_bist_lr_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_bist_lr_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_lr_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_bist_lr_fail_reg))
#define  VE_MBIST_ve_bist_lr_fail_ve_bist_lr_fail_shift                          (0)
#define  VE_MBIST_ve_bist_lr_fail_ve_bist_lr_fail_mask                           (0x0000001F)
#define  VE_MBIST_ve_bist_lr_fail_ve_bist_lr_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_ve_bist_lr_fail_get_ve_bist_lr_fail(data)                      (0x0000001F&(data))

#define  VE_MBIST_ve_drf_lr_fail                                                0x1800FFD4
#define  VE_MBIST_ve_drf_lr_fail_reg_addr                                        "0xB800FFD4"
#define  VE_MBIST_ve_drf_lr_fail_reg                                             0xB800FFD4
#define  VE_MBIST_ve_drf_lr_fail_inst_addr                                       "0x0035"
#define  set_VE_MBIST_ve_drf_lr_fail_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_lr_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_lr_fail_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_lr_fail_reg))
#define  VE_MBIST_ve_drf_lr_fail_ve_drf_lr_fail_shift                            (0)
#define  VE_MBIST_ve_drf_lr_fail_ve_drf_lr_fail_mask                             (0x0000001F)
#define  VE_MBIST_ve_drf_lr_fail_ve_drf_lr_fail(data)                            (0x0000001F&(data))
#define  VE_MBIST_ve_drf_lr_fail_get_ve_drf_lr_fail(data)                        (0x0000001F&(data))

#define  VE_MBIST_ve_bist_cdef_fail                                             0x1800FFD8
#define  VE_MBIST_ve_bist_cdef_fail_reg_addr                                     "0xB800FFD8"
#define  VE_MBIST_ve_bist_cdef_fail_reg                                          0xB800FFD8
#define  VE_MBIST_ve_bist_cdef_fail_inst_addr                                    "0x0036"
#define  set_VE_MBIST_ve_bist_cdef_fail_reg(data)                                (*((volatile unsigned int*)VE_MBIST_ve_bist_cdef_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_cdef_fail_reg                                      (*((volatile unsigned int*)VE_MBIST_ve_bist_cdef_fail_reg))
#define  VE_MBIST_ve_bist_cdef_fail_ve_bist_cdef_fail_shift                      (0)
#define  VE_MBIST_ve_bist_cdef_fail_ve_bist_cdef_fail_mask                       (0x0000000F)
#define  VE_MBIST_ve_bist_cdef_fail_ve_bist_cdef_fail(data)                      (0x0000000F&(data))
#define  VE_MBIST_ve_bist_cdef_fail_get_ve_bist_cdef_fail(data)                  (0x0000000F&(data))

#define  VE_MBIST_ve_drf_cdef_fail                                              0x1800FFDC
#define  VE_MBIST_ve_drf_cdef_fail_reg_addr                                      "0xB800FFDC"
#define  VE_MBIST_ve_drf_cdef_fail_reg                                           0xB800FFDC
#define  VE_MBIST_ve_drf_cdef_fail_inst_addr                                     "0x0037"
#define  set_VE_MBIST_ve_drf_cdef_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_drf_cdef_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_cdef_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_drf_cdef_fail_reg))
#define  VE_MBIST_ve_drf_cdef_fail_ve_drf_cdef_fail_shift                        (0)
#define  VE_MBIST_ve_drf_cdef_fail_ve_drf_cdef_fail_mask                         (0x0000000F)
#define  VE_MBIST_ve_drf_cdef_fail_ve_drf_cdef_fail(data)                        (0x0000000F&(data))
#define  VE_MBIST_ve_drf_cdef_fail_get_ve_drf_cdef_fail(data)                    (0x0000000F&(data))

#define  VE_MBIST_ve_bist_sr_fail                                               0x1800FFE0
#define  VE_MBIST_ve_bist_sr_fail_reg_addr                                       "0xB800FFE0"
#define  VE_MBIST_ve_bist_sr_fail_reg                                            0xB800FFE0
#define  VE_MBIST_ve_bist_sr_fail_inst_addr                                      "0x0038"
#define  set_VE_MBIST_ve_bist_sr_fail_reg(data)                                  (*((volatile unsigned int*)VE_MBIST_ve_bist_sr_fail_reg)=data)
#define  get_VE_MBIST_ve_bist_sr_fail_reg                                        (*((volatile unsigned int*)VE_MBIST_ve_bist_sr_fail_reg))
#define  VE_MBIST_ve_bist_sr_fail_ve_bist_sr_fail_shift                          (0)
#define  VE_MBIST_ve_bist_sr_fail_ve_bist_sr_fail_mask                           (0x0000001F)
#define  VE_MBIST_ve_bist_sr_fail_ve_bist_sr_fail(data)                          (0x0000001F&(data))
#define  VE_MBIST_ve_bist_sr_fail_get_ve_bist_sr_fail(data)                      (0x0000001F&(data))

#define  VE_MBIST_ve_drf_sr_fail                                                0x1800FFE4
#define  VE_MBIST_ve_drf_sr_fail_reg_addr                                        "0xB800FFE4"
#define  VE_MBIST_ve_drf_sr_fail_reg                                             0xB800FFE4
#define  VE_MBIST_ve_drf_sr_fail_inst_addr                                       "0x0039"
#define  set_VE_MBIST_ve_drf_sr_fail_reg(data)                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_sr_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_sr_fail_reg                                         (*((volatile unsigned int*)VE_MBIST_ve_drf_sr_fail_reg))
#define  VE_MBIST_ve_drf_sr_fail_ve_drf_sr_fail_shift                            (0)
#define  VE_MBIST_ve_drf_sr_fail_ve_drf_sr_fail_mask                             (0x0000001F)
#define  VE_MBIST_ve_drf_sr_fail_ve_drf_sr_fail(data)                            (0x0000001F&(data))
#define  VE_MBIST_ve_drf_sr_fail_get_ve_drf_sr_fail(data)                        (0x0000001F&(data))

#define  VE_MBIST_ve_cah_bsir_fail                                              0x1800FFF0
#define  VE_MBIST_ve_cah_bsir_fail_reg_addr                                      "0xB800FFF0"
#define  VE_MBIST_ve_cah_bsir_fail_reg                                           0xB800FFF0
#define  VE_MBIST_ve_cah_bsir_fail_inst_addr                                     "0x003A"
#define  set_VE_MBIST_ve_cah_bsir_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_cah_bsir_fail_reg)=data)
#define  get_VE_MBIST_ve_cah_bsir_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_cah_bsir_fail_reg))
#define  VE_MBIST_ve_cah_bsir_fail_ve_cah_bisr_repaired_shift                    (31)
#define  VE_MBIST_ve_cah_bsir_fail_ve_cah_bisr_fail_shift                        (0)
#define  VE_MBIST_ve_cah_bsir_fail_ve_cah_bisr_repaired_mask                     (0x80000000)
#define  VE_MBIST_ve_cah_bsir_fail_ve_cah_bisr_fail_mask                         (0x00000003)
#define  VE_MBIST_ve_cah_bsir_fail_ve_cah_bisr_repaired(data)                    (0x80000000&((data)<<31))
#define  VE_MBIST_ve_cah_bsir_fail_ve_cah_bisr_fail(data)                        (0x00000003&(data))
#define  VE_MBIST_ve_cah_bsir_fail_get_ve_cah_bisr_repaired(data)                ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_cah_bsir_fail_get_ve_cah_bisr_fail(data)                    (0x00000003&(data))

#define  VE_MBIST_ve_drf_cah_bisr_fail                                          0x1800FFF4
#define  VE_MBIST_ve_drf_cah_bisr_fail_reg_addr                                  "0xB800FFF4"
#define  VE_MBIST_ve_drf_cah_bisr_fail_reg                                       0xB800FFF4
#define  VE_MBIST_ve_drf_cah_bisr_fail_inst_addr                                 "0x003B"
#define  set_VE_MBIST_ve_drf_cah_bisr_fail_reg(data)                             (*((volatile unsigned int*)VE_MBIST_ve_drf_cah_bisr_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_cah_bisr_fail_reg                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_cah_bisr_fail_reg))
#define  VE_MBIST_ve_drf_cah_bisr_fail_ve_drf_cah_bisr_fail_shift                (0)
#define  VE_MBIST_ve_drf_cah_bisr_fail_ve_drf_cah_bisr_fail_mask                 (0x00000003)
#define  VE_MBIST_ve_drf_cah_bisr_fail_ve_drf_cah_bisr_fail(data)                (0x00000003&(data))
#define  VE_MBIST_ve_drf_cah_bisr_fail_get_ve_drf_cah_bisr_fail(data)            (0x00000003&(data))

#define  VE_MBIST_ve_ngh_bisr_fail                                              0x1800FFF8
#define  VE_MBIST_ve_ngh_bisr_fail_reg_addr                                      "0xB800FFF8"
#define  VE_MBIST_ve_ngh_bisr_fail_reg                                           0xB800FFF8
#define  VE_MBIST_ve_ngh_bisr_fail_inst_addr                                     "0x003C"
#define  set_VE_MBIST_ve_ngh_bisr_fail_reg(data)                                 (*((volatile unsigned int*)VE_MBIST_ve_ngh_bisr_fail_reg)=data)
#define  get_VE_MBIST_ve_ngh_bisr_fail_reg                                       (*((volatile unsigned int*)VE_MBIST_ve_ngh_bisr_fail_reg))
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_2_bisr_repaired_shift                  (31)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_bisr_repaired_shift                    (30)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_2_bisr_fail_shift                      (1)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_bisr_fail_shift                        (0)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_2_bisr_repaired_mask                   (0x80000000)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_bisr_repaired_mask                     (0x40000000)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_2_bisr_fail_mask                       (0x00000002)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_bisr_fail_mask                         (0x00000001)
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_2_bisr_repaired(data)                  (0x80000000&((data)<<31))
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_bisr_repaired(data)                    (0x40000000&((data)<<30))
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_2_bisr_fail(data)                      (0x00000002&((data)<<1))
#define  VE_MBIST_ve_ngh_bisr_fail_ve_ngh_bisr_fail(data)                        (0x00000001&(data))
#define  VE_MBIST_ve_ngh_bisr_fail_get_ve_ngh_2_bisr_repaired(data)              ((0x80000000&(data))>>31)
#define  VE_MBIST_ve_ngh_bisr_fail_get_ve_ngh_bisr_repaired(data)                ((0x40000000&(data))>>30)
#define  VE_MBIST_ve_ngh_bisr_fail_get_ve_ngh_2_bisr_fail(data)                  ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_ngh_bisr_fail_get_ve_ngh_bisr_fail(data)                    (0x00000001&(data))

#define  VE_MBIST_ve_drf_ngh_bisr_fail                                          0x1800FFFC
#define  VE_MBIST_ve_drf_ngh_bisr_fail_reg_addr                                  "0xB800FFFC"
#define  VE_MBIST_ve_drf_ngh_bisr_fail_reg                                       0xB800FFFC
#define  VE_MBIST_ve_drf_ngh_bisr_fail_inst_addr                                 "0x003D"
#define  set_VE_MBIST_ve_drf_ngh_bisr_fail_reg(data)                             (*((volatile unsigned int*)VE_MBIST_ve_drf_ngh_bisr_fail_reg)=data)
#define  get_VE_MBIST_ve_drf_ngh_bisr_fail_reg                                   (*((volatile unsigned int*)VE_MBIST_ve_drf_ngh_bisr_fail_reg))
#define  VE_MBIST_ve_drf_ngh_bisr_fail_ve_drf_ngh_2_bisr_fail_shift              (1)
#define  VE_MBIST_ve_drf_ngh_bisr_fail_ve_drf_ngh_bisr_fail_shift                (0)
#define  VE_MBIST_ve_drf_ngh_bisr_fail_ve_drf_ngh_2_bisr_fail_mask               (0x00000002)
#define  VE_MBIST_ve_drf_ngh_bisr_fail_ve_drf_ngh_bisr_fail_mask                 (0x00000001)
#define  VE_MBIST_ve_drf_ngh_bisr_fail_ve_drf_ngh_2_bisr_fail(data)              (0x00000002&((data)<<1))
#define  VE_MBIST_ve_drf_ngh_bisr_fail_ve_drf_ngh_bisr_fail(data)                (0x00000001&(data))
#define  VE_MBIST_ve_drf_ngh_bisr_fail_get_ve_drf_ngh_2_bisr_fail(data)          ((0x00000002&(data))>>1)
#define  VE_MBIST_ve_drf_ngh_bisr_fail_get_ve_drf_ngh_bisr_fail(data)            (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VE_MBIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_rwm:1;
        RBus_UInt32  test1:1;
        RBus_UInt32  sysh_rmea:1;
        RBus_UInt32  sysh_rma:4;
        RBus_UInt32  sysh_rmeb:1;
        RBus_UInt32  sysh_rmb:4;
        RBus_UInt32  sysh_rme:1;
        RBus_UInt32  sysh_rm:4;
        RBus_UInt32  rmea:1;
        RBus_UInt32  rma:4;
        RBus_UInt32  rmeb:1;
        RBus_UInt32  rmb:4;
        RBus_UInt32  rme:1;
        RBus_UInt32  rm:4;
    };
}ve_mbist_ve_bist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dcmprs_ls:2;
        RBus_UInt32  cmprs_ls:2;
        RBus_UInt32  ndb_ls:2;
        RBus_UInt32  bs_ls:2;
        RBus_UInt32  rif_ls:2;
        RBus_UInt32  brg_ls:2;
        RBus_UInt32  vmem_ls:2;
        RBus_UInt32  sao_ls:2;
        RBus_UInt32  deblk_ls:2;
        RBus_UInt32  pred_ls:2;
        RBus_UInt32  cache_ls:2;
        RBus_UInt32  rl_ls:2;
        RBus_UInt32  cm_ls:2;
        RBus_UInt32  itblk_ls:2;
        RBus_UInt32  mvd_ls:2;
        RBus_UInt32  vld_ls:2;
    };
}ve_mbist_ve_bist_ls_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_bist_en:1;
        RBus_UInt32  ve_mf1_bist_en:1;
        RBus_UInt32  ve_mf0_bist_en:1;
        RBus_UInt32  ve_p2mvd_bist_en:1;
        RBus_UInt32  ve_vld_1_bist_en:1;
        RBus_UInt32  ve_p2_bist_en:1;
        RBus_UInt32  ve_clmp_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_bist_en:1;
        RBus_UInt32  ve_pred_3_bist_en:1;
        RBus_UInt32  ve_pred_2_bist_en:1;
        RBus_UInt32  ve_pred_1_bist_en:1;
        RBus_UInt32  ve_pred_0_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_bist_en:1;
        RBus_UInt32  ve_cah_1p_bist_en:1;
        RBus_UInt32  ve_dcmprs_bist_en:1;
        RBus_UInt32  ve_cmprs_bist_en:1;
        RBus_UInt32  ve_dbk_bist_en:1;
        RBus_UInt32  ve_seg_mvd_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_bist_en:1;
        RBus_UInt32  ve_cm2_bist_en:1;
        RBus_UInt32  ve_cm1_bist_en:1;
        RBus_UInt32  ve_brg_bist_en:1;
        RBus_UInt32  ve_sao_bist_en:1;
        RBus_UInt32  ve_it_bs_bist_en:1;
        RBus_UInt32  ve_it_1_bist_en:1;
        RBus_UInt32  ve_it_0_1_bist_en:1;
        RBus_UInt32  ve_it_0_0_bist_en:1;
        RBus_UInt32  ve_vm_1_bist_en:1;
        RBus_UInt32  ve_vm_0_bist_en:1;
        RBus_UInt32  ve_vld_0_bist_en:1;
        RBus_UInt32  ve_rif_bist_en:1;
    };
}ve_mbist_ve_bist_mode0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_pred_2e_bist_en:1;
        RBus_UInt32  ve_rlrmem01_bist_en:1;
        RBus_UInt32  ve_cmprs_1_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_bist_en:1;
        RBus_UInt32  ve_vm_2_bist_en:1;
        RBus_UInt32  ve_ciblk_bist_en:1;
        RBus_UInt32  ve_sr_bist_en:1;
        RBus_UInt32  ve_cdef_bist_en:1;
        RBus_UInt32  ve_lr_bist_en:1;
    };
}ve_mbist_ve_bist_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_mf2_done:1;
        RBus_UInt32  ve_bist_mf1_done:1;
        RBus_UInt32  ve_bist_mf0_done:1;
        RBus_UInt32  ve_bist_p2mvd_done:1;
        RBus_UInt32  ve_bist_vld_1_done:1;
        RBus_UInt32  ve_bist_p2_done:1;
        RBus_UInt32  ve_bist_clmp_done:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_bist_pred_3_done:1;
        RBus_UInt32  ve_bist_pred_2_done:1;
        RBus_UInt32  ve_bist_pred_1_done:1;
        RBus_UInt32  ve_bist_pred_0_done:1;
        RBus_UInt32  ve_bist_cah_2p_1_done:1;
        RBus_UInt32  ve_bist_cah_2p_0_done:1;
        RBus_UInt32  ve_bist_cah_1p_done:1;
        RBus_UInt32  ve_bist_dcmprs_done:1;
        RBus_UInt32  ve_bist_cmprs_done:1;
        RBus_UInt32  ve_bist_dbk_done:1;
        RBus_UInt32  ve_bist_seg_mvd_done:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_bist_cm2_done:1;
        RBus_UInt32  ve_bist_cm1_done:1;
        RBus_UInt32  ve_bist_brg_done:1;
        RBus_UInt32  ve_bist_sao_done:1;
        RBus_UInt32  ve_bist_it_bs_done:1;
        RBus_UInt32  ve_bist_it_1_done:1;
        RBus_UInt32  ve_bist_it_0_1_done:1;
        RBus_UInt32  ve_bist_it_0_0_done:1;
        RBus_UInt32  ve_bist_vm_1_done:1;
        RBus_UInt32  ve_bist_vm_0_done:1;
        RBus_UInt32  ve_bist_vld_0_done:1;
        RBus_UInt32  ve_bist_rif_done:1;
    };
}ve_mbist_ve_bist_done0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_pred_2e_done:1;
        RBus_UInt32  ve_bist_rlrmem01_done:1;
        RBus_UInt32  ve_bist_cmprs_1_done:1;
        RBus_UInt32  ve_bist_pred_3_2p_done:1;
        RBus_UInt32  ve_bist_vm_2_done:1;
        RBus_UInt32  ve_bist_ciblk_done:1;
        RBus_UInt32  ve_bist_sr_done:1;
        RBus_UInt32  ve_bist_cdef_done:1;
        RBus_UInt32  ve_bist_lr_done:1;
    };
}ve_mbist_ve_bist_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_mf2_fail_group:1;
        RBus_UInt32  ve_bist_mf1_fail_group:1;
        RBus_UInt32  ve_bist_mf0_fail_group:1;
        RBus_UInt32  ve_bist_p2mvd_fail_group:1;
        RBus_UInt32  ve_bist_vld_1_fail_group:1;
        RBus_UInt32  ve_bist_p2_fail_group:1;
        RBus_UInt32  ve_bist_clmp_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_fail_group:1;
        RBus_UInt32  ve_bist_pred_2_fail_group:1;
        RBus_UInt32  ve_bist_pred_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_0_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_bist_cah_1p_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_fail_group:1;
        RBus_UInt32  ve_bist_dbk_fail_group:1;
        RBus_UInt32  ve_bist_seg_mvd_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_bist_cm2_fail_group:1;
        RBus_UInt32  ve_bist_cm1_fail_group:1;
        RBus_UInt32  ve_bist_brg_fail_group:1;
        RBus_UInt32  ve_bist_sao_fail_group:1;
        RBus_UInt32  ve_bist_it_bs_fail_group:1;
        RBus_UInt32  ve_bist_it_1_fail_group:1;
        RBus_UInt32  ve_bist_it_0_1_fail_group:1;
        RBus_UInt32  ve_bist_it_0_0_fail_group:1;
        RBus_UInt32  ve_bist_vm_1_fail_group:1;
        RBus_UInt32  ve_bist_vm_0_fail_group:1;
        RBus_UInt32  ve_bist_vld_0_fail_group:1;
        RBus_UInt32  ve_bist_rif_fail_group:1;
    };
}ve_mbist_ve_bist_fail_group0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_pred_2e_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem01_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_bist_vm_2_fail_group:1;
        RBus_UInt32  ve_bist_ciblk_fail_group:1;
        RBus_UInt32  ve_bist_sr_fail_group:1;
        RBus_UInt32  ve_bist_cdef_fail_group:1;
        RBus_UInt32  ve_bist_lr_fail_group:1;
    };
}ve_mbist_ve_bist_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_drf_bist_en:1;
        RBus_UInt32  ve_mf1_drf_bist_en:1;
        RBus_UInt32  ve_mf0_drf_bist_en:1;
        RBus_UInt32  ve_p2mvd_drf_bist_en:1;
        RBus_UInt32  ve_vld_1_drf_bist_en:1;
        RBus_UInt32  ve_p2_drf_bist_en:1;
        RBus_UInt32  ve_clmp_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_drf_bist_en:1;
        RBus_UInt32  ve_pred_2_drf_bist_en:1;
        RBus_UInt32  ve_pred_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_0_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_drf_bist_en:1;
        RBus_UInt32  ve_cah_1p_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_drf_bist_en:1;
        RBus_UInt32  ve_dbk_drf_bist_en:1;
        RBus_UInt32  ve_seg_mvd_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_bist_en:1;
        RBus_UInt32  ve_cm2_drf_bist_en:1;
        RBus_UInt32  ve_cm1_drf_bist_en:1;
        RBus_UInt32  ve_brg_drf_bist_en:1;
        RBus_UInt32  ve_sao_drf_bist_en:1;
        RBus_UInt32  ve_it_bs_drf_bist_en:1;
        RBus_UInt32  ve_it_1_drf_bist_en:1;
        RBus_UInt32  ve_it_0_1_drf_bist_en:1;
        RBus_UInt32  ve_it_0_0_drf_bist_en:1;
        RBus_UInt32  ve_vm_1_drf_bist_en:1;
        RBus_UInt32  ve_vm_0_drf_bist_en:1;
        RBus_UInt32  ve_vld_0_drf_bist_en:1;
        RBus_UInt32  ve_rif_drf_bist_en:1;
    };
}ve_mbist_ve_drf_mode0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_ngh_2_bisr_drf_bist_en:1;
        RBus_UInt32  ve_ngh_bisr_drf_bist_en:1;
        RBus_UInt32  ve_cah_bisr_drf_bist_en:1;
        RBus_UInt32  ve_pred_2e_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem01_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_drf_bist_en:1;
        RBus_UInt32  ve_vm_2_drf_bist_en:1;
        RBus_UInt32  ve_ciblk_drf_bist_en:1;
        RBus_UInt32  ve_sr_drf_bist_en:1;
        RBus_UInt32  ve_cdef_drf_bist_en:1;
        RBus_UInt32  ve_lr_drf_bist_en:1;
    };
}ve_mbist_ve_drf_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_drf_resume:1;
        RBus_UInt32  ve_mf1_drf_resume:1;
        RBus_UInt32  ve_mf0_drf_resume:1;
        RBus_UInt32  ve_p2mvd_drf_resume:1;
        RBus_UInt32  ve_vld_1_drf_resume:1;
        RBus_UInt32  ve_p2_drf_resume:1;
        RBus_UInt32  ve_clmp_drf_resume:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_resume:1;
        RBus_UInt32  ve_pred_3_drf_resume:1;
        RBus_UInt32  ve_pred_2_drf_resume:1;
        RBus_UInt32  ve_pred_0_drf_resume:1;
        RBus_UInt32  ve_pred_1_drf_resume:1;
        RBus_UInt32  ve_cah_2p_1_drf_resume:1;
        RBus_UInt32  ve_cah_2p_0_drf_resume:1;
        RBus_UInt32  ve_cah_1p_drf_resume:1;
        RBus_UInt32  ve_dcmprs_drf_resume:1;
        RBus_UInt32  ve_cmprs_drf_resume:1;
        RBus_UInt32  ve_dbk_drf_resume:1;
        RBus_UInt32  ve_seg_mvd_drf_resume:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_resume:1;
        RBus_UInt32  ve_cm2_drf_resume:1;
        RBus_UInt32  ve_cm1_drf_resume:1;
        RBus_UInt32  ve_brg_drf_resume:1;
        RBus_UInt32  ve_sao_drf_resume:1;
        RBus_UInt32  ve_it_bs_drf_resume:1;
        RBus_UInt32  ve_it_1_drf_resume:1;
        RBus_UInt32  ve_it_0_1_drf_resume:1;
        RBus_UInt32  ve_it_0_0_drf_resume:1;
        RBus_UInt32  ve_vm_1_drf_resume:1;
        RBus_UInt32  ve_vm_0_drf_resume:1;
        RBus_UInt32  ve_vld_0_drf_resume:1;
        RBus_UInt32  ve_rif_drf_resume:1;
    };
}ve_mbist_ve_drf_resume0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_ngh_2_bisr_drf_resume:1;
        RBus_UInt32  ve_ngh_bisr_drf_resume:1;
        RBus_UInt32  ve_cah_bisr_drf_resume:1;
        RBus_UInt32  ve_pred_2e_drf_resume:1;
        RBus_UInt32  ve_rlrmem01_drf_resume:1;
        RBus_UInt32  ve_cmprs_1_drf_resume:1;
        RBus_UInt32  ve_pred_3_2p_drf_resume:1;
        RBus_UInt32  ve_vm_2_drf_resume:1;
        RBus_UInt32  ve_ciblk_drf_resume:1;
        RBus_UInt32  ve_sr_drf_resume:1;
        RBus_UInt32  ve_cdef_drf_resume:1;
        RBus_UInt32  ve_lr_drf_resume:1;
    };
}ve_mbist_ve_drf_resume1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_mf2_drf_start_pause:1;
        RBus_UInt32  ve_mf1_drf_start_pause:1;
        RBus_UInt32  ve_mf0_drf_start_pause:1;
        RBus_UInt32  ve_p2mvd_drf_start_pause:1;
        RBus_UInt32  ve_vld_1_drf_start_pause:1;
        RBus_UInt32  ve_p2_drf_start_pause:1;
        RBus_UInt32  ve_clmp_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_drf_start_pause:1;
        RBus_UInt32  ve_pred_2_drf_start_pause:1;
        RBus_UInt32  ve_pred_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_0_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_1_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_0_drf_start_pause:1;
        RBus_UInt32  ve_cah_1p_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_drf_start_pause:1;
        RBus_UInt32  ve_dbk_drf_start_pause:1;
        RBus_UInt32  ve_seg_mvd_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_start_pause:1;
        RBus_UInt32  ve_cm2_drf_start_pause:1;
        RBus_UInt32  ve_cm1_drf_start_pause:1;
        RBus_UInt32  ve_brg_drf_start_pause:1;
        RBus_UInt32  ve_sao_drf_start_pause:1;
        RBus_UInt32  ve_it_bs_drf_start_pause:1;
        RBus_UInt32  ve_it_1_drf_start_pause:1;
        RBus_UInt32  ve_it_0_1_drf_start_pause:1;
        RBus_UInt32  ve_it_0_0_drf_start_pause:1;
        RBus_UInt32  ve_vm_1_drf_start_pause:1;
        RBus_UInt32  ve_vm_0_drf_start_pause:1;
        RBus_UInt32  ve_vld_0_drf_start_pause:1;
        RBus_UInt32  ve_rif_drf_start_pause:1;
    };
}ve_mbist_ve_drf_pause0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_ngh_2_bisr_drf_start_pause:1;
        RBus_UInt32  ve_ngh_bisr_drf_start_pause:1;
        RBus_UInt32  ve_cah_bisr_drf_start_pause:1;
        RBus_UInt32  ve_pred_2e_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem01_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_2p_drf_start_pause:1;
        RBus_UInt32  ve_vm_2_drf_start_pause:1;
        RBus_UInt32  ve_ciblk_drf_start_pause:1;
        RBus_UInt32  ve_sr_drf_start_pause:1;
        RBus_UInt32  ve_cdef_drf_start_pause:1;
        RBus_UInt32  ve_lr_drf_start_pause:1;
    };
}ve_mbist_ve_drf_pause1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_mf2_done:1;
        RBus_UInt32  ve_drf_mf1_done:1;
        RBus_UInt32  ve_drf_mf0_done:1;
        RBus_UInt32  ve_drf_p2mvd_done:1;
        RBus_UInt32  ve_drf_vld_1_done:1;
        RBus_UInt32  ve_drf_p2_done:1;
        RBus_UInt32  ve_drf_clmp_done:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_drf_pred_3_done:1;
        RBus_UInt32  ve_drf_pred_2_done:1;
        RBus_UInt32  ve_drf_pred_1_done:1;
        RBus_UInt32  ve_drf_pred_0_done:1;
        RBus_UInt32  ve_drf_cah_2p_1_done:1;
        RBus_UInt32  ve_drf_cah_2p_0_done:1;
        RBus_UInt32  ve_drf_cah_1p_done:1;
        RBus_UInt32  ve_drf_dcmprs_done:1;
        RBus_UInt32  ve_drf_cmprs_done:1;
        RBus_UInt32  ve_drf_dbk_done:1;
        RBus_UInt32  ve_drf_seg_mvd_done:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_drf_cm2_done:1;
        RBus_UInt32  ve_drf_cm1_done:1;
        RBus_UInt32  ve_drf_brg_done:1;
        RBus_UInt32  ve_drf_sao_done:1;
        RBus_UInt32  ve_drf_it_bs_done:1;
        RBus_UInt32  ve_drf_it_1_done:1;
        RBus_UInt32  ve_drf_it_0_1_done:1;
        RBus_UInt32  ve_drf_it_0_0_done:1;
        RBus_UInt32  ve_drf_vm_1_done:1;
        RBus_UInt32  ve_drf_vm_0_done:1;
        RBus_UInt32  ve_drf_vld_0_done:1;
        RBus_UInt32  ve_drf_rif_done:1;
    };
}ve_mbist_ve_drf_done0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_drf_ngh_2_bisr_done:1;
        RBus_UInt32  ve_drf_ngh_bisr_done:1;
        RBus_UInt32  ve_drf_cah_bisr_done:1;
        RBus_UInt32  ve_drf_pred_2e_done:1;
        RBus_UInt32  ve_drf_rlrmem01_done:1;
        RBus_UInt32  ve_drf_cmprs_1_done:1;
        RBus_UInt32  ve_drf_pred_3_2p_done:1;
        RBus_UInt32  ve_drf_vm_2_done:1;
        RBus_UInt32  ve_drf_ciblk_done:1;
        RBus_UInt32  ve_drf_sr_done:1;
        RBus_UInt32  ve_drf_cdef_done:1;
        RBus_UInt32  ve_drf_lr_done:1;
    };
}ve_mbist_ve_drf_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_mf2_fail_group:1;
        RBus_UInt32  ve_drf_mf1_fail_group:1;
        RBus_UInt32  ve_drf_mf0_fail_group:1;
        RBus_UInt32  ve_drf_p2mvd_fail_group:1;
        RBus_UInt32  ve_drf_vld_1_fail_group:1;
        RBus_UInt32  ve_drf_p2_fail_group:1;
        RBus_UInt32  ve_drf_clmp_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_fail_group:1;
        RBus_UInt32  ve_drf_pred_2_fail_group:1;
        RBus_UInt32  ve_drf_pred_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_0_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_drf_cah_1p_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_fail_group:1;
        RBus_UInt32  ve_drf_dbk_fail_group:1;
        RBus_UInt32  ve_drf_seg_mvd_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_drf_cm2_fail_group:1;
        RBus_UInt32  ve_drf_cm1_fail_group:1;
        RBus_UInt32  ve_drf_brg_fail_group:1;
        RBus_UInt32  ve_drf_sao_fail_group:1;
        RBus_UInt32  ve_drf_it_bs_fail_group:1;
        RBus_UInt32  ve_drf_it_1_fail_group:1;
        RBus_UInt32  ve_drf_it_0_1_fail_group:1;
        RBus_UInt32  ve_drf_it_0_0_fail_group:1;
        RBus_UInt32  ve_drf_vm_1_fail_group:1;
        RBus_UInt32  ve_drf_vm_0_fail_group:1;
        RBus_UInt32  ve_drf_vld_0_fail_group:1;
        RBus_UInt32  ve_drf_rif_fail_group:1;
    };
}ve_mbist_ve_drf_fail_group0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail_group:1;
        RBus_UInt32  ve_drf_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_drf_cah_bisr_fail_group:1;
        RBus_UInt32  ve_drf_pred_2e_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem01_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_drf_vm_2_fail_group:1;
        RBus_UInt32  ve_drf_ciblk_fail_group:1;
        RBus_UInt32  ve_drf_sr_fail_group:1;
        RBus_UInt32  ve_drf_cdef_fail_group:1;
        RBus_UInt32  ve_drf_lr_fail_group:1;
    };
}ve_mbist_ve_drf_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_ngh_2_bisr_second_run:1;
        RBus_UInt32  ve_ngh_bisr_second_run:1;
        RBus_UInt32  ve_cah_bisr_second_run:1;
    };
}ve_mbist_cah_bisr_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_ngh_2_bisr_fail_group:1;
        RBus_UInt32  ve_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_cah_bisr_fail_group:1;
    };
}ve_mbist_cah_bisr_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_bist_p2_fail:5;
        RBus_UInt32  ve_bist_vld_1_fail:10;
        RBus_UInt32  ve_bist_vld_0_fail:10;
        RBus_UInt32  ve_bist_rif_fail:5;
    };
}ve_mbist_ve_bist_rif_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_drf_p2_fail:5;
        RBus_UInt32  ve_drf_vld_1_fail:10;
        RBus_UInt32  ve_drf_vld_0_fail:10;
        RBus_UInt32  ve_drf_rif_fail:5;
    };
}ve_mbist_ve_drf_rif_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ve_bist_vm_2_fail:7;
        RBus_UInt32  ve_bist_vm_1_fail:10;
        RBus_UInt32  ve_bist_vm_0_fail:10;
    };
}ve_mbist_ve_bist_vm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ve_drf_vm_2_fail:7;
        RBus_UInt32  ve_drf_vm_1_fail:10;
        RBus_UInt32  ve_drf_vm_0_fail:10;
    };
}ve_mbist_ve_drf_vm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_bist_it_bs_fail:4;
        RBus_UInt32  ve_bist_it_1_fail:6;
        RBus_UInt32  ve_bist_it_0_1_fail:10;
        RBus_UInt32  ve_bist_it_0_0_fail:10;
    };
}ve_mbist_ve_bist_it_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_drf_it_bs_fail:4;
        RBus_UInt32  ve_drf_it_1_fail:6;
        RBus_UInt32  ve_drf_it_0_1_fail:10;
        RBus_UInt32  ve_drf_it_0_0_fail:10;
    };
}ve_mbist_ve_drf_it_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_bist_sao_fail:3;
    };
}ve_mbist_ve_bist_sao_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_drf_sao_fail:3;
    };
}ve_mbist_ve_drf_sao_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_brg_fail:5;
    };
}ve_mbist_ve_bist_brg_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_brg_fail:5;
    };
}ve_mbist_ve_drf_brg_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_bist_cm2_fail:10;
        RBus_UInt32  ve_bist_cm1_fail:10;
    };
}ve_mbist_ve_bist_cm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  ve_drf_cm2_fail:10;
        RBus_UInt32  ve_drf_cm1_fail:10;
    };
}ve_mbist_ve_drf_cm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_bist_rlrmem01_fail:8;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail:7;
    };
}ve_mbist_ve_bist_rlrmem_mvbuf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_drf_rlrmem01_fail:8;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail:7;
    };
}ve_mbist_ve_drf_rlrmem_mvbuf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_bist_seg_mvd_fail:9;
    };
}ve_mbist_ve_bist_seg_mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  ve_drf_seg_mvd_fail:9;
    };
}ve_mbist_ve_drf_seg_mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  ve_bist_cmprs_1_fail:5;
        RBus_UInt32  ve_bist_cmprs_fail:4;
        RBus_UInt32  ve_bist_dbk_fail:10;
    };
}ve_mbist_ve_bist_dbk_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  ve_drf_cmprs_1_fail:5;
        RBus_UInt32  ve_drf_cmprs_fail:4;
        RBus_UInt32  ve_drf_dbk_fail:10;
    };
}ve_mbist_ve_drf_dbk_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  ve_bist_cah_2p_1_fail:4;
        RBus_UInt32  ve_bist_cah_2p_0_fail:8;
        RBus_UInt32  ve_bist_cah_1p_fail:2;
    };
}ve_mbist_ve_bist_cah_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  ve_drf_cah_2p_1_fail:4;
        RBus_UInt32  ve_drf_cah_2p_0_fail:8;
        RBus_UInt32  ve_drf_cah_1p_fail:2;
    };
}ve_mbist_ve_drf_cah_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_bist_pred_2e_fail:6;
        RBus_UInt32  ve_bist_pred_2_fail:6;
        RBus_UInt32  ve_bist_pred_1_fail:8;
        RBus_UInt32  ve_bist_pred_0_fail:10;
    };
}ve_mbist_ve_bist_pred_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ve_drf_pred_2e_fail:6;
        RBus_UInt32  ve_drf_pred_2_fail:6;
        RBus_UInt32  ve_drf_pred_1_fail:8;
        RBus_UInt32  ve_drf_pred_0_fail:10;
    };
}ve_mbist_ve_drf_pred_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  ve_bist_pred_3_2p_fail:6;
        RBus_UInt32  ve_bist_pred_3_fail:9;
        RBus_UInt32  ve_bist_ciblk_fail:7;
    };
}ve_mbist_ve_bist_ciblk_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  ve_drf_pred_3_2p_fail:6;
        RBus_UInt32  ve_drf_pred_3_fail:9;
        RBus_UInt32  ve_drf_ciblk_fail:7;
    };
}ve_mbist_ve_drf_ciblk_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail:6;
        RBus_UInt32  ve_bist_dcmprs_fail:9;
    };
}ve_mbist_ve_bist_dcmprs_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail:6;
        RBus_UInt32  ve_drf_dcmprs_fail:9;
    };
}ve_mbist_ve_drf_dcmprs_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_clmp_fail:5;
    };
}ve_mbist_ve_bist_clmp_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_clmp_fail:5;
    };
}ve_mbist_ve_drf_clmp_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ve_bist_p2mvd_fail:10;
    };
}ve_mbist_ve_bist_p2mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ve_drf_p2mvd_fail:10;
    };
}ve_mbist_ve_drf_p2mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ve_bist_mf2_fail:8;
        RBus_UInt32  ve_bist_mf1_fail:8;
        RBus_UInt32  ve_bist_mf0_fail:8;
    };
}ve_mbist_ve_bist_mf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ve_drf_mf2_fail:8;
        RBus_UInt32  ve_drf_mf1_fail:8;
        RBus_UInt32  ve_drf_mf0_fail:8;
    };
}ve_mbist_ve_drf_mf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_lr_fail:5;
    };
}ve_mbist_ve_bist_lr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_lr_fail:5;
    };
}ve_mbist_ve_drf_lr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_bist_cdef_fail:4;
    };
}ve_mbist_ve_bist_cdef_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_drf_cdef_fail:4;
    };
}ve_mbist_ve_drf_cdef_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_bist_sr_fail:5;
    };
}ve_mbist_ve_bist_sr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ve_drf_sr_fail:5;
    };
}ve_mbist_ve_drf_sr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_repaired:1;
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_cah_bisr_fail:2;
    };
}ve_mbist_ve_cah_bsir_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_drf_cah_bisr_fail:2;
    };
}ve_mbist_ve_drf_cah_bisr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_ngh_2_bisr_repaired:1;
        RBus_UInt32  ve_ngh_bisr_repaired:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_ngh_2_bisr_fail:1;
        RBus_UInt32  ve_ngh_bisr_fail:1;
    };
}ve_mbist_ve_ngh_bisr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail:1;
        RBus_UInt32  ve_drf_ngh_bisr_fail:1;
    };
}ve_mbist_ve_drf_ngh_bisr_fail_RBUS;

#else //apply LITTLE_ENDIAN

//======VE_MBIST register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm:4;
        RBus_UInt32  rme:1;
        RBus_UInt32  rmb:4;
        RBus_UInt32  rmeb:1;
        RBus_UInt32  rma:4;
        RBus_UInt32  rmea:1;
        RBus_UInt32  sysh_rm:4;
        RBus_UInt32  sysh_rme:1;
        RBus_UInt32  sysh_rmb:4;
        RBus_UInt32  sysh_rmeb:1;
        RBus_UInt32  sysh_rma:4;
        RBus_UInt32  sysh_rmea:1;
        RBus_UInt32  test1:1;
        RBus_UInt32  test_rwm:1;
    };
}ve_mbist_ve_bist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vld_ls:2;
        RBus_UInt32  mvd_ls:2;
        RBus_UInt32  itblk_ls:2;
        RBus_UInt32  cm_ls:2;
        RBus_UInt32  rl_ls:2;
        RBus_UInt32  cache_ls:2;
        RBus_UInt32  pred_ls:2;
        RBus_UInt32  deblk_ls:2;
        RBus_UInt32  sao_ls:2;
        RBus_UInt32  vmem_ls:2;
        RBus_UInt32  brg_ls:2;
        RBus_UInt32  rif_ls:2;
        RBus_UInt32  bs_ls:2;
        RBus_UInt32  ndb_ls:2;
        RBus_UInt32  cmprs_ls:2;
        RBus_UInt32  dcmprs_ls:2;
    };
}ve_mbist_ve_bist_ls_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_bist_en:1;
        RBus_UInt32  ve_vld_0_bist_en:1;
        RBus_UInt32  ve_vm_0_bist_en:1;
        RBus_UInt32  ve_vm_1_bist_en:1;
        RBus_UInt32  ve_it_0_0_bist_en:1;
        RBus_UInt32  ve_it_0_1_bist_en:1;
        RBus_UInt32  ve_it_1_bist_en:1;
        RBus_UInt32  ve_it_bs_bist_en:1;
        RBus_UInt32  ve_sao_bist_en:1;
        RBus_UInt32  ve_brg_bist_en:1;
        RBus_UInt32  ve_cm1_bist_en:1;
        RBus_UInt32  ve_cm2_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_bist_en:1;
        RBus_UInt32  ve_seg_mvd_bist_en:1;
        RBus_UInt32  ve_dbk_bist_en:1;
        RBus_UInt32  ve_cmprs_bist_en:1;
        RBus_UInt32  ve_dcmprs_bist_en:1;
        RBus_UInt32  ve_cah_1p_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_bist_en:1;
        RBus_UInt32  ve_pred_0_bist_en:1;
        RBus_UInt32  ve_pred_1_bist_en:1;
        RBus_UInt32  ve_pred_2_bist_en:1;
        RBus_UInt32  ve_pred_3_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_bist_en:1;
        RBus_UInt32  ve_clmp_bist_en:1;
        RBus_UInt32  ve_p2_bist_en:1;
        RBus_UInt32  ve_vld_1_bist_en:1;
        RBus_UInt32  ve_p2mvd_bist_en:1;
        RBus_UInt32  ve_mf0_bist_en:1;
        RBus_UInt32  ve_mf1_bist_en:1;
        RBus_UInt32  ve_mf2_bist_en:1;
    };
}ve_mbist_ve_bist_mode0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_bist_en:1;
        RBus_UInt32  ve_cdef_bist_en:1;
        RBus_UInt32  ve_sr_bist_en:1;
        RBus_UInt32  ve_ciblk_bist_en:1;
        RBus_UInt32  ve_vm_2_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_bist_en:1;
        RBus_UInt32  ve_cmprs_1_bist_en:1;
        RBus_UInt32  ve_rlrmem01_bist_en:1;
        RBus_UInt32  ve_pred_2e_bist_en:1;
        RBus_UInt32  res1:23;
    };
}ve_mbist_ve_bist_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_done:1;
        RBus_UInt32  ve_bist_vld_0_done:1;
        RBus_UInt32  ve_bist_vm_0_done:1;
        RBus_UInt32  ve_bist_vm_1_done:1;
        RBus_UInt32  ve_bist_it_0_0_done:1;
        RBus_UInt32  ve_bist_it_0_1_done:1;
        RBus_UInt32  ve_bist_it_1_done:1;
        RBus_UInt32  ve_bist_it_bs_done:1;
        RBus_UInt32  ve_bist_sao_done:1;
        RBus_UInt32  ve_bist_brg_done:1;
        RBus_UInt32  ve_bist_cm1_done:1;
        RBus_UInt32  ve_bist_cm2_done:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_bist_seg_mvd_done:1;
        RBus_UInt32  ve_bist_dbk_done:1;
        RBus_UInt32  ve_bist_cmprs_done:1;
        RBus_UInt32  ve_bist_dcmprs_done:1;
        RBus_UInt32  ve_bist_cah_1p_done:1;
        RBus_UInt32  ve_bist_cah_2p_0_done:1;
        RBus_UInt32  ve_bist_cah_2p_1_done:1;
        RBus_UInt32  ve_bist_pred_0_done:1;
        RBus_UInt32  ve_bist_pred_1_done:1;
        RBus_UInt32  ve_bist_pred_2_done:1;
        RBus_UInt32  ve_bist_pred_3_done:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_bist_clmp_done:1;
        RBus_UInt32  ve_bist_p2_done:1;
        RBus_UInt32  ve_bist_vld_1_done:1;
        RBus_UInt32  ve_bist_p2mvd_done:1;
        RBus_UInt32  ve_bist_mf0_done:1;
        RBus_UInt32  ve_bist_mf1_done:1;
        RBus_UInt32  ve_bist_mf2_done:1;
    };
}ve_mbist_ve_bist_done0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_lr_done:1;
        RBus_UInt32  ve_bist_cdef_done:1;
        RBus_UInt32  ve_bist_sr_done:1;
        RBus_UInt32  ve_bist_ciblk_done:1;
        RBus_UInt32  ve_bist_vm_2_done:1;
        RBus_UInt32  ve_bist_pred_3_2p_done:1;
        RBus_UInt32  ve_bist_cmprs_1_done:1;
        RBus_UInt32  ve_bist_rlrmem01_done:1;
        RBus_UInt32  ve_bist_pred_2e_done:1;
        RBus_UInt32  res1:23;
    };
}ve_mbist_ve_bist_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_fail_group:1;
        RBus_UInt32  ve_bist_vld_0_fail_group:1;
        RBus_UInt32  ve_bist_vm_0_fail_group:1;
        RBus_UInt32  ve_bist_vm_1_fail_group:1;
        RBus_UInt32  ve_bist_it_0_0_fail_group:1;
        RBus_UInt32  ve_bist_it_0_1_fail_group:1;
        RBus_UInt32  ve_bist_it_1_fail_group:1;
        RBus_UInt32  ve_bist_it_bs_fail_group:1;
        RBus_UInt32  ve_bist_sao_fail_group:1;
        RBus_UInt32  ve_bist_brg_fail_group:1;
        RBus_UInt32  ve_bist_cm1_fail_group:1;
        RBus_UInt32  ve_bist_cm2_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_bist_seg_mvd_fail_group:1;
        RBus_UInt32  ve_bist_dbk_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_fail_group:1;
        RBus_UInt32  ve_bist_cah_1p_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_bist_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_0_fail_group:1;
        RBus_UInt32  ve_bist_pred_1_fail_group:1;
        RBus_UInt32  ve_bist_pred_2_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_fail_group:1;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_bist_clmp_fail_group:1;
        RBus_UInt32  ve_bist_p2_fail_group:1;
        RBus_UInt32  ve_bist_vld_1_fail_group:1;
        RBus_UInt32  ve_bist_p2mvd_fail_group:1;
        RBus_UInt32  ve_bist_mf0_fail_group:1;
        RBus_UInt32  ve_bist_mf1_fail_group:1;
        RBus_UInt32  ve_bist_mf2_fail_group:1;
    };
}ve_mbist_ve_bist_fail_group0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_lr_fail_group:1;
        RBus_UInt32  ve_bist_cdef_fail_group:1;
        RBus_UInt32  ve_bist_sr_fail_group:1;
        RBus_UInt32  ve_bist_ciblk_fail_group:1;
        RBus_UInt32  ve_bist_vm_2_fail_group:1;
        RBus_UInt32  ve_bist_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_bist_cmprs_1_fail_group:1;
        RBus_UInt32  ve_bist_rlrmem01_fail_group:1;
        RBus_UInt32  ve_bist_pred_2e_fail_group:1;
        RBus_UInt32  res1:23;
    };
}ve_mbist_ve_bist_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_bist_en:1;
        RBus_UInt32  ve_vld_0_drf_bist_en:1;
        RBus_UInt32  ve_vm_0_drf_bist_en:1;
        RBus_UInt32  ve_vm_1_drf_bist_en:1;
        RBus_UInt32  ve_it_0_0_drf_bist_en:1;
        RBus_UInt32  ve_it_0_1_drf_bist_en:1;
        RBus_UInt32  ve_it_1_drf_bist_en:1;
        RBus_UInt32  ve_it_bs_drf_bist_en:1;
        RBus_UInt32  ve_sao_drf_bist_en:1;
        RBus_UInt32  ve_brg_drf_bist_en:1;
        RBus_UInt32  ve_cm1_drf_bist_en:1;
        RBus_UInt32  ve_cm2_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_bist_en:1;
        RBus_UInt32  ve_seg_mvd_drf_bist_en:1;
        RBus_UInt32  ve_dbk_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_drf_bist_en:1;
        RBus_UInt32  ve_cah_1p_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_0_drf_bist_en:1;
        RBus_UInt32  ve_cah_2p_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_0_drf_bist_en:1;
        RBus_UInt32  ve_pred_1_drf_bist_en:1;
        RBus_UInt32  ve_pred_2_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_drf_bist_en:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_bist_en:1;
        RBus_UInt32  ve_clmp_drf_bist_en:1;
        RBus_UInt32  ve_p2_drf_bist_en:1;
        RBus_UInt32  ve_vld_1_drf_bist_en:1;
        RBus_UInt32  ve_p2mvd_drf_bist_en:1;
        RBus_UInt32  ve_mf0_drf_bist_en:1;
        RBus_UInt32  ve_mf1_drf_bist_en:1;
        RBus_UInt32  ve_mf2_drf_bist_en:1;
    };
}ve_mbist_ve_drf_mode0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_drf_bist_en:1;
        RBus_UInt32  ve_cdef_drf_bist_en:1;
        RBus_UInt32  ve_sr_drf_bist_en:1;
        RBus_UInt32  ve_ciblk_drf_bist_en:1;
        RBus_UInt32  ve_vm_2_drf_bist_en:1;
        RBus_UInt32  ve_pred_3_2p_drf_bist_en:1;
        RBus_UInt32  ve_cmprs_1_drf_bist_en:1;
        RBus_UInt32  ve_rlrmem01_drf_bist_en:1;
        RBus_UInt32  ve_pred_2e_drf_bist_en:1;
        RBus_UInt32  ve_cah_bisr_drf_bist_en:1;
        RBus_UInt32  ve_ngh_bisr_drf_bist_en:1;
        RBus_UInt32  ve_ngh_2_bisr_drf_bist_en:1;
        RBus_UInt32  res1:20;
    };
}ve_mbist_ve_drf_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_resume:1;
        RBus_UInt32  ve_vld_0_drf_resume:1;
        RBus_UInt32  ve_vm_0_drf_resume:1;
        RBus_UInt32  ve_vm_1_drf_resume:1;
        RBus_UInt32  ve_it_0_0_drf_resume:1;
        RBus_UInt32  ve_it_0_1_drf_resume:1;
        RBus_UInt32  ve_it_1_drf_resume:1;
        RBus_UInt32  ve_it_bs_drf_resume:1;
        RBus_UInt32  ve_sao_drf_resume:1;
        RBus_UInt32  ve_brg_drf_resume:1;
        RBus_UInt32  ve_cm1_drf_resume:1;
        RBus_UInt32  ve_cm2_drf_resume:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_resume:1;
        RBus_UInt32  ve_seg_mvd_drf_resume:1;
        RBus_UInt32  ve_dbk_drf_resume:1;
        RBus_UInt32  ve_cmprs_drf_resume:1;
        RBus_UInt32  ve_dcmprs_drf_resume:1;
        RBus_UInt32  ve_cah_1p_drf_resume:1;
        RBus_UInt32  ve_cah_2p_0_drf_resume:1;
        RBus_UInt32  ve_cah_2p_1_drf_resume:1;
        RBus_UInt32  ve_pred_1_drf_resume:1;
        RBus_UInt32  ve_pred_0_drf_resume:1;
        RBus_UInt32  ve_pred_2_drf_resume:1;
        RBus_UInt32  ve_pred_3_drf_resume:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_resume:1;
        RBus_UInt32  ve_clmp_drf_resume:1;
        RBus_UInt32  ve_p2_drf_resume:1;
        RBus_UInt32  ve_vld_1_drf_resume:1;
        RBus_UInt32  ve_p2mvd_drf_resume:1;
        RBus_UInt32  ve_mf0_drf_resume:1;
        RBus_UInt32  ve_mf1_drf_resume:1;
        RBus_UInt32  ve_mf2_drf_resume:1;
    };
}ve_mbist_ve_drf_resume0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_drf_resume:1;
        RBus_UInt32  ve_cdef_drf_resume:1;
        RBus_UInt32  ve_sr_drf_resume:1;
        RBus_UInt32  ve_ciblk_drf_resume:1;
        RBus_UInt32  ve_vm_2_drf_resume:1;
        RBus_UInt32  ve_pred_3_2p_drf_resume:1;
        RBus_UInt32  ve_cmprs_1_drf_resume:1;
        RBus_UInt32  ve_rlrmem01_drf_resume:1;
        RBus_UInt32  ve_pred_2e_drf_resume:1;
        RBus_UInt32  ve_cah_bisr_drf_resume:1;
        RBus_UInt32  ve_ngh_bisr_drf_resume:1;
        RBus_UInt32  ve_ngh_2_bisr_drf_resume:1;
        RBus_UInt32  res1:20;
    };
}ve_mbist_ve_drf_resume1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_rif_drf_start_pause:1;
        RBus_UInt32  ve_vld_0_drf_start_pause:1;
        RBus_UInt32  ve_vm_0_drf_start_pause:1;
        RBus_UInt32  ve_vm_1_drf_start_pause:1;
        RBus_UInt32  ve_it_0_0_drf_start_pause:1;
        RBus_UInt32  ve_it_0_1_drf_start_pause:1;
        RBus_UInt32  ve_it_1_drf_start_pause:1;
        RBus_UInt32  ve_it_bs_drf_start_pause:1;
        RBus_UInt32  ve_sao_drf_start_pause:1;
        RBus_UInt32  ve_brg_drf_start_pause:1;
        RBus_UInt32  ve_cm1_drf_start_pause:1;
        RBus_UInt32  ve_cm2_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem_mvbuf_drf_start_pause:1;
        RBus_UInt32  ve_seg_mvd_drf_start_pause:1;
        RBus_UInt32  ve_dbk_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_drf_start_pause:1;
        RBus_UInt32  ve_cah_1p_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_0_drf_start_pause:1;
        RBus_UInt32  ve_cah_2p_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_0_drf_start_pause:1;
        RBus_UInt32  ve_pred_1_drf_start_pause:1;
        RBus_UInt32  ve_pred_2_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_drf_start_pause:1;
        RBus_UInt32  ve_dcmprs_outbuf_drf_start_pause:1;
        RBus_UInt32  ve_clmp_drf_start_pause:1;
        RBus_UInt32  ve_p2_drf_start_pause:1;
        RBus_UInt32  ve_vld_1_drf_start_pause:1;
        RBus_UInt32  ve_p2mvd_drf_start_pause:1;
        RBus_UInt32  ve_mf0_drf_start_pause:1;
        RBus_UInt32  ve_mf1_drf_start_pause:1;
        RBus_UInt32  ve_mf2_drf_start_pause:1;
    };
}ve_mbist_ve_drf_pause0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_lr_drf_start_pause:1;
        RBus_UInt32  ve_cdef_drf_start_pause:1;
        RBus_UInt32  ve_sr_drf_start_pause:1;
        RBus_UInt32  ve_ciblk_drf_start_pause:1;
        RBus_UInt32  ve_vm_2_drf_start_pause:1;
        RBus_UInt32  ve_pred_3_2p_drf_start_pause:1;
        RBus_UInt32  ve_cmprs_1_drf_start_pause:1;
        RBus_UInt32  ve_rlrmem01_drf_start_pause:1;
        RBus_UInt32  ve_pred_2e_drf_start_pause:1;
        RBus_UInt32  ve_cah_bisr_drf_start_pause:1;
        RBus_UInt32  ve_ngh_bisr_drf_start_pause:1;
        RBus_UInt32  ve_ngh_2_bisr_drf_start_pause:1;
        RBus_UInt32  res1:20;
    };
}ve_mbist_ve_drf_pause1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_done:1;
        RBus_UInt32  ve_drf_vld_0_done:1;
        RBus_UInt32  ve_drf_vm_0_done:1;
        RBus_UInt32  ve_drf_vm_1_done:1;
        RBus_UInt32  ve_drf_it_0_0_done:1;
        RBus_UInt32  ve_drf_it_0_1_done:1;
        RBus_UInt32  ve_drf_it_1_done:1;
        RBus_UInt32  ve_drf_it_bs_done:1;
        RBus_UInt32  ve_drf_sao_done:1;
        RBus_UInt32  ve_drf_brg_done:1;
        RBus_UInt32  ve_drf_cm1_done:1;
        RBus_UInt32  ve_drf_cm2_done:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_done:1;
        RBus_UInt32  ve_drf_seg_mvd_done:1;
        RBus_UInt32  ve_drf_dbk_done:1;
        RBus_UInt32  ve_drf_cmprs_done:1;
        RBus_UInt32  ve_drf_dcmprs_done:1;
        RBus_UInt32  ve_drf_cah_1p_done:1;
        RBus_UInt32  ve_drf_cah_2p_0_done:1;
        RBus_UInt32  ve_drf_cah_2p_1_done:1;
        RBus_UInt32  ve_drf_pred_0_done:1;
        RBus_UInt32  ve_drf_pred_1_done:1;
        RBus_UInt32  ve_drf_pred_2_done:1;
        RBus_UInt32  ve_drf_pred_3_done:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_done:1;
        RBus_UInt32  ve_drf_clmp_done:1;
        RBus_UInt32  ve_drf_p2_done:1;
        RBus_UInt32  ve_drf_vld_1_done:1;
        RBus_UInt32  ve_drf_p2mvd_done:1;
        RBus_UInt32  ve_drf_mf0_done:1;
        RBus_UInt32  ve_drf_mf1_done:1;
        RBus_UInt32  ve_drf_mf2_done:1;
    };
}ve_mbist_ve_drf_done0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_lr_done:1;
        RBus_UInt32  ve_drf_cdef_done:1;
        RBus_UInt32  ve_drf_sr_done:1;
        RBus_UInt32  ve_drf_ciblk_done:1;
        RBus_UInt32  ve_drf_vm_2_done:1;
        RBus_UInt32  ve_drf_pred_3_2p_done:1;
        RBus_UInt32  ve_drf_cmprs_1_done:1;
        RBus_UInt32  ve_drf_rlrmem01_done:1;
        RBus_UInt32  ve_drf_pred_2e_done:1;
        RBus_UInt32  ve_drf_cah_bisr_done:1;
        RBus_UInt32  ve_drf_ngh_bisr_done:1;
        RBus_UInt32  ve_drf_ngh_2_bisr_done:1;
        RBus_UInt32  res1:20;
    };
}ve_mbist_ve_drf_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_fail_group:1;
        RBus_UInt32  ve_drf_vld_0_fail_group:1;
        RBus_UInt32  ve_drf_vm_0_fail_group:1;
        RBus_UInt32  ve_drf_vm_1_fail_group:1;
        RBus_UInt32  ve_drf_it_0_0_fail_group:1;
        RBus_UInt32  ve_drf_it_0_1_fail_group:1;
        RBus_UInt32  ve_drf_it_1_fail_group:1;
        RBus_UInt32  ve_drf_it_bs_fail_group:1;
        RBus_UInt32  ve_drf_sao_fail_group:1;
        RBus_UInt32  ve_drf_brg_fail_group:1;
        RBus_UInt32  ve_drf_cm1_fail_group:1;
        RBus_UInt32  ve_drf_cm2_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail_group:1;
        RBus_UInt32  ve_drf_seg_mvd_fail_group:1;
        RBus_UInt32  ve_drf_dbk_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_fail_group:1;
        RBus_UInt32  ve_drf_cah_1p_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_0_fail_group:1;
        RBus_UInt32  ve_drf_cah_2p_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_0_fail_group:1;
        RBus_UInt32  ve_drf_pred_1_fail_group:1;
        RBus_UInt32  ve_drf_pred_2_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_fail_group:1;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail_group:1;
        RBus_UInt32  ve_drf_clmp_fail_group:1;
        RBus_UInt32  ve_drf_p2_fail_group:1;
        RBus_UInt32  ve_drf_vld_1_fail_group:1;
        RBus_UInt32  ve_drf_p2mvd_fail_group:1;
        RBus_UInt32  ve_drf_mf0_fail_group:1;
        RBus_UInt32  ve_drf_mf1_fail_group:1;
        RBus_UInt32  ve_drf_mf2_fail_group:1;
    };
}ve_mbist_ve_drf_fail_group0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_lr_fail_group:1;
        RBus_UInt32  ve_drf_cdef_fail_group:1;
        RBus_UInt32  ve_drf_sr_fail_group:1;
        RBus_UInt32  ve_drf_ciblk_fail_group:1;
        RBus_UInt32  ve_drf_vm_2_fail_group:1;
        RBus_UInt32  ve_drf_pred_3_2p_fail_group:1;
        RBus_UInt32  ve_drf_cmprs_1_fail_group:1;
        RBus_UInt32  ve_drf_rlrmem01_fail_group:1;
        RBus_UInt32  ve_drf_pred_2e_fail_group:1;
        RBus_UInt32  ve_drf_cah_bisr_fail_group:1;
        RBus_UInt32  ve_drf_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail_group:1;
        RBus_UInt32  res1:20;
    };
}ve_mbist_ve_drf_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_second_run:1;
        RBus_UInt32  ve_ngh_bisr_second_run:1;
        RBus_UInt32  ve_ngh_2_bisr_second_run:1;
        RBus_UInt32  res1:29;
    };
}ve_mbist_cah_bisr_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_fail_group:1;
        RBus_UInt32  ve_ngh_bisr_fail_group:1;
        RBus_UInt32  ve_ngh_2_bisr_fail_group:1;
        RBus_UInt32  res1:29;
    };
}ve_mbist_cah_bisr_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rif_fail:5;
        RBus_UInt32  ve_bist_vld_0_fail:10;
        RBus_UInt32  ve_bist_vld_1_fail:10;
        RBus_UInt32  ve_bist_p2_fail:5;
        RBus_UInt32  res1:2;
    };
}ve_mbist_ve_bist_rif_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rif_fail:5;
        RBus_UInt32  ve_drf_vld_0_fail:10;
        RBus_UInt32  ve_drf_vld_1_fail:10;
        RBus_UInt32  ve_drf_p2_fail:5;
        RBus_UInt32  res1:2;
    };
}ve_mbist_ve_drf_rif_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_vm_0_fail:10;
        RBus_UInt32  ve_bist_vm_1_fail:10;
        RBus_UInt32  ve_bist_vm_2_fail:7;
        RBus_UInt32  res1:5;
    };
}ve_mbist_ve_bist_vm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_vm_0_fail:10;
        RBus_UInt32  ve_drf_vm_1_fail:10;
        RBus_UInt32  ve_drf_vm_2_fail:7;
        RBus_UInt32  res1:5;
    };
}ve_mbist_ve_drf_vm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_it_0_0_fail:10;
        RBus_UInt32  ve_bist_it_0_1_fail:10;
        RBus_UInt32  ve_bist_it_1_fail:6;
        RBus_UInt32  ve_bist_it_bs_fail:4;
        RBus_UInt32  res1:2;
    };
}ve_mbist_ve_bist_it_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_it_0_0_fail:10;
        RBus_UInt32  ve_drf_it_0_1_fail:10;
        RBus_UInt32  ve_drf_it_1_fail:6;
        RBus_UInt32  ve_drf_it_bs_fail:4;
        RBus_UInt32  res1:2;
    };
}ve_mbist_ve_drf_it_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_sao_fail:3;
        RBus_UInt32  res1:29;
    };
}ve_mbist_ve_bist_sao_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_sao_fail:3;
        RBus_UInt32  res1:29;
    };
}ve_mbist_ve_drf_sao_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_brg_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_bist_brg_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_brg_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_drf_brg_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cm1_fail:10;
        RBus_UInt32  ve_bist_cm2_fail:10;
        RBus_UInt32  res1:12;
    };
}ve_mbist_ve_bist_cm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cm1_fail:10;
        RBus_UInt32  ve_drf_cm2_fail:10;
        RBus_UInt32  res1:12;
    };
}ve_mbist_ve_drf_cm_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_rlrmem_mvbuf_fail:7;
        RBus_UInt32  ve_bist_rlrmem01_fail:8;
        RBus_UInt32  res1:17;
    };
}ve_mbist_ve_bist_rlrmem_mvbuf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_rlrmem_mvbuf_fail:7;
        RBus_UInt32  ve_drf_rlrmem01_fail:8;
        RBus_UInt32  res1:17;
    };
}ve_mbist_ve_drf_rlrmem_mvbuf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_seg_mvd_fail:9;
        RBus_UInt32  res1:23;
    };
}ve_mbist_ve_bist_seg_mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_seg_mvd_fail:9;
        RBus_UInt32  res1:23;
    };
}ve_mbist_ve_drf_seg_mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_dbk_fail:10;
        RBus_UInt32  ve_bist_cmprs_fail:4;
        RBus_UInt32  ve_bist_cmprs_1_fail:5;
        RBus_UInt32  res1:13;
    };
}ve_mbist_ve_bist_dbk_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_dbk_fail:10;
        RBus_UInt32  ve_drf_cmprs_fail:4;
        RBus_UInt32  ve_drf_cmprs_1_fail:5;
        RBus_UInt32  res1:13;
    };
}ve_mbist_ve_drf_dbk_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cah_1p_fail:2;
        RBus_UInt32  ve_bist_cah_2p_0_fail:8;
        RBus_UInt32  ve_bist_cah_2p_1_fail:4;
        RBus_UInt32  res1:18;
    };
}ve_mbist_ve_bist_cah_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cah_1p_fail:2;
        RBus_UInt32  ve_drf_cah_2p_0_fail:8;
        RBus_UInt32  ve_drf_cah_2p_1_fail:4;
        RBus_UInt32  res1:18;
    };
}ve_mbist_ve_drf_cah_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_pred_0_fail:10;
        RBus_UInt32  ve_bist_pred_1_fail:8;
        RBus_UInt32  ve_bist_pred_2_fail:6;
        RBus_UInt32  ve_bist_pred_2e_fail:6;
        RBus_UInt32  res1:2;
    };
}ve_mbist_ve_bist_pred_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_pred_0_fail:10;
        RBus_UInt32  ve_drf_pred_1_fail:8;
        RBus_UInt32  ve_drf_pred_2_fail:6;
        RBus_UInt32  ve_drf_pred_2e_fail:6;
        RBus_UInt32  res1:2;
    };
}ve_mbist_ve_drf_pred_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_ciblk_fail:7;
        RBus_UInt32  ve_bist_pred_3_fail:9;
        RBus_UInt32  ve_bist_pred_3_2p_fail:6;
        RBus_UInt32  res1:10;
    };
}ve_mbist_ve_bist_ciblk_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_ciblk_fail:7;
        RBus_UInt32  ve_drf_pred_3_fail:9;
        RBus_UInt32  ve_drf_pred_3_2p_fail:6;
        RBus_UInt32  res1:10;
    };
}ve_mbist_ve_drf_ciblk_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_dcmprs_fail:9;
        RBus_UInt32  ve_bist_dcmprs_outbuf_fail:6;
        RBus_UInt32  res1:17;
    };
}ve_mbist_ve_bist_dcmprs_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_dcmprs_fail:9;
        RBus_UInt32  ve_drf_dcmprs_outbuf_fail:6;
        RBus_UInt32  res1:17;
    };
}ve_mbist_ve_drf_dcmprs_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_clmp_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_bist_clmp_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_clmp_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_drf_clmp_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_p2mvd_fail:10;
        RBus_UInt32  res1:22;
    };
}ve_mbist_ve_bist_p2mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_p2mvd_fail:10;
        RBus_UInt32  res1:22;
    };
}ve_mbist_ve_drf_p2mvd_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_mf0_fail:8;
        RBus_UInt32  ve_bist_mf1_fail:8;
        RBus_UInt32  ve_bist_mf2_fail:8;
        RBus_UInt32  res1:8;
    };
}ve_mbist_ve_bist_mf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_mf0_fail:8;
        RBus_UInt32  ve_drf_mf1_fail:8;
        RBus_UInt32  ve_drf_mf2_fail:8;
        RBus_UInt32  res1:8;
    };
}ve_mbist_ve_drf_mf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_lr_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_bist_lr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_lr_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_drf_lr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_cdef_fail:4;
        RBus_UInt32  res1:28;
    };
}ve_mbist_ve_bist_cdef_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cdef_fail:4;
        RBus_UInt32  res1:28;
    };
}ve_mbist_ve_drf_cdef_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_bist_sr_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_bist_sr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_sr_fail:5;
        RBus_UInt32  res1:27;
    };
}ve_mbist_ve_drf_sr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_cah_bisr_fail:2;
        RBus_UInt32  res1:29;
        RBus_UInt32  ve_cah_bisr_repaired:1;
    };
}ve_mbist_ve_cah_bsir_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_cah_bisr_fail:2;
        RBus_UInt32  res1:30;
    };
}ve_mbist_ve_drf_cah_bisr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_ngh_bisr_fail:1;
        RBus_UInt32  ve_ngh_2_bisr_fail:1;
        RBus_UInt32  res1:28;
        RBus_UInt32  ve_ngh_bisr_repaired:1;
        RBus_UInt32  ve_ngh_2_bisr_repaired:1;
    };
}ve_mbist_ve_ngh_bisr_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ve_drf_ngh_bisr_fail:1;
        RBus_UInt32  ve_drf_ngh_2_bisr_fail:1;
        RBus_UInt32  res1:30;
    };
}ve_mbist_ve_drf_ngh_bisr_fail_RBUS;




#endif 


#endif 
