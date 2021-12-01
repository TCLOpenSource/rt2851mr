/**
* @file Merlin5_MEMC_KMC_BIST_BISR_control
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KMC_BIST_BISR_REG_H_
#define _RBUS_KMC_BIST_BISR_REG_H_

#include "rbus_types.h"



//  KMC_BIST_BISR Register Address
#define  KMC_BIST_BISR_KMC_BIST_MODE                                            0x1809F100
#define  KMC_BIST_BISR_KMC_BIST_MODE_reg_addr                                    "0xB809F100"
#define  KMC_BIST_BISR_KMC_BIST_MODE_reg                                         0xB809F100
#define  KMC_BIST_BISR_KMC_BIST_MODE_inst_addr                                   "0x0000"
#define  set_KMC_BIST_BISR_KMC_BIST_MODE_reg(data)                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_MODE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_MODE_reg                                     (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_MODE_reg))
#define  KMC_BIST_BISR_KMC_BIST_MODE_hfp_pqdc2_bist_mode_shift                   (20)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfp_pqdc1_bist_mode_shift                   (19)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfp_pqdc2_bist_mode_shift                   (18)
#define  KMC_BIST_BISR_KMC_BIST_MODE_hfi_pqdc2_bist_mode_shift                   (17)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfi_pqdc1_bist_mode_shift                   (16)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfi_pqdc2_bist_mode_shift                   (15)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lf_pqc1_bist_mode_shift                     (14)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lf_pqc2_bist_mode_shift                     (13)
#define  KMC_BIST_BISR_KMC_BIST_MODE_hf_pqc2_bist_mode_shift                     (12)
#define  KMC_BIST_BISR_KMC_BIST_MODE_kmc_rdma_bist_mode_shift                    (11)
#define  KMC_BIST_BISR_KMC_BIST_MODE_kmc_wdma_bist_mode_shift                    (10)
#define  KMC_BIST_BISR_KMC_BIST_MODE_ipmc_bist_mode_shift                        (9)
#define  KMC_BIST_BISR_KMC_BIST_MODE_mc_mv_info_bist_mode_shift                  (8)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_7_shift                   (7)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_6_shift                   (6)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_5_shift                   (5)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_4_shift                   (4)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_3_shift                   (3)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_2_shift                   (2)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_1_shift                   (1)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_0_shift                   (0)
#define  KMC_BIST_BISR_KMC_BIST_MODE_hfp_pqdc2_bist_mode_mask                    (0x00100000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfp_pqdc1_bist_mode_mask                    (0x00080000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfp_pqdc2_bist_mode_mask                    (0x00040000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_hfi_pqdc2_bist_mode_mask                    (0x00020000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfi_pqdc1_bist_mode_mask                    (0x00010000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfi_pqdc2_bist_mode_mask                    (0x00008000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lf_pqc1_bist_mode_mask                      (0x00004000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lf_pqc2_bist_mode_mask                      (0x00002000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_hf_pqc2_bist_mode_mask                      (0x00001000)
#define  KMC_BIST_BISR_KMC_BIST_MODE_kmc_rdma_bist_mode_mask                     (0x00000800)
#define  KMC_BIST_BISR_KMC_BIST_MODE_kmc_wdma_bist_mode_mask                     (0x00000400)
#define  KMC_BIST_BISR_KMC_BIST_MODE_ipmc_bist_mode_mask                         (0x00000200)
#define  KMC_BIST_BISR_KMC_BIST_MODE_mc_mv_info_bist_mode_mask                   (0x00000100)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_7_mask                    (0x00000080)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_6_mask                    (0x00000040)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_5_mask                    (0x00000020)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_4_mask                    (0x00000010)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_3_mask                    (0x00000008)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_2_mask                    (0x00000004)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_1_mask                    (0x00000002)
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_0_mask                    (0x00000001)
#define  KMC_BIST_BISR_KMC_BIST_MODE_hfp_pqdc2_bist_mode(data)                   (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfp_pqdc1_bist_mode(data)                   (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfp_pqdc2_bist_mode(data)                   (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_BIST_MODE_hfi_pqdc2_bist_mode(data)                   (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfi_pqdc1_bist_mode(data)                   (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lfi_pqdc2_bist_mode(data)                   (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lf_pqc1_bist_mode(data)                     (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lf_pqc2_bist_mode(data)                     (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_BIST_MODE_hf_pqc2_bist_mode(data)                     (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_BIST_MODE_kmc_rdma_bist_mode(data)                    (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_BIST_MODE_kmc_wdma_bist_mode(data)                    (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_BIST_MODE_ipmc_bist_mode(data)                        (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_BIST_MODE_mc_mv_info_bist_mode(data)                  (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_7(data)                   (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_6(data)                   (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_5(data)                   (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_4(data)                   (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_3(data)                   (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_2(data)                   (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_1(data)                   (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BIST_MODE_lbmc_hf_bist_mode_0(data)                   (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_hfp_pqdc2_bist_mode(data)               ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lfp_pqdc1_bist_mode(data)               ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lfp_pqdc2_bist_mode(data)               ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_hfi_pqdc2_bist_mode(data)               ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lfi_pqdc1_bist_mode(data)               ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lfi_pqdc2_bist_mode(data)               ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lf_pqc1_bist_mode(data)                 ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lf_pqc2_bist_mode(data)                 ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_hf_pqc2_bist_mode(data)                 ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_kmc_rdma_bist_mode(data)                ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_kmc_wdma_bist_mode(data)                ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_ipmc_bist_mode(data)                    ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_mc_mv_info_bist_mode(data)              ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_7(data)               ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_6(data)               ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_5(data)               ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_4(data)               ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_3(data)               ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_2(data)               ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_1(data)               ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BIST_MODE_get_lbmc_hf_bist_mode_0(data)               (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BIST_DONE                                            0x1809F104
#define  KMC_BIST_BISR_KMC_BIST_DONE_reg_addr                                    "0xB809F104"
#define  KMC_BIST_BISR_KMC_BIST_DONE_reg                                         0xB809F104
#define  KMC_BIST_BISR_KMC_BIST_DONE_inst_addr                                   "0x0001"
#define  set_KMC_BIST_BISR_KMC_BIST_DONE_reg(data)                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_DONE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_DONE_reg                                     (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_DONE_reg))
#define  KMC_BIST_BISR_KMC_BIST_DONE_hfp_pqdc2_bist_done_shift                   (20)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfp_pqdc1_bist_done_shift                   (19)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfp_pqdc2_bist_done_shift                   (18)
#define  KMC_BIST_BISR_KMC_BIST_DONE_hfi_pqdc2_bist_done_shift                   (17)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfi_pqdc1_bist_done_shift                   (16)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfi_pqdc2_bist_done_shift                   (15)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lf_pqc1_bist_done_shift                     (14)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lf_pqc2_bist_done_shift                     (13)
#define  KMC_BIST_BISR_KMC_BIST_DONE_hf_pqc2_bist_done_shift                     (12)
#define  KMC_BIST_BISR_KMC_BIST_DONE_kmc_rdma_bist_done_shift                    (11)
#define  KMC_BIST_BISR_KMC_BIST_DONE_kmc_wdma_bist_done_shift                    (10)
#define  KMC_BIST_BISR_KMC_BIST_DONE_ipmc_bist_done_shift                        (9)
#define  KMC_BIST_BISR_KMC_BIST_DONE_mc_mv_info_bist_done_shift                  (8)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_7_shift                   (7)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_6_shift                   (6)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_5_shift                   (5)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_4_shift                   (4)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_3_shift                   (3)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_2_shift                   (2)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_1_shift                   (1)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_0_shift                   (0)
#define  KMC_BIST_BISR_KMC_BIST_DONE_hfp_pqdc2_bist_done_mask                    (0x00100000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfp_pqdc1_bist_done_mask                    (0x00080000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfp_pqdc2_bist_done_mask                    (0x00040000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_hfi_pqdc2_bist_done_mask                    (0x00020000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfi_pqdc1_bist_done_mask                    (0x00010000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfi_pqdc2_bist_done_mask                    (0x00008000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lf_pqc1_bist_done_mask                      (0x00004000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lf_pqc2_bist_done_mask                      (0x00002000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_hf_pqc2_bist_done_mask                      (0x00001000)
#define  KMC_BIST_BISR_KMC_BIST_DONE_kmc_rdma_bist_done_mask                     (0x00000800)
#define  KMC_BIST_BISR_KMC_BIST_DONE_kmc_wdma_bist_done_mask                     (0x00000400)
#define  KMC_BIST_BISR_KMC_BIST_DONE_ipmc_bist_done_mask                         (0x00000200)
#define  KMC_BIST_BISR_KMC_BIST_DONE_mc_mv_info_bist_done_mask                   (0x00000100)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_7_mask                    (0x00000080)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_6_mask                    (0x00000040)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_5_mask                    (0x00000020)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_4_mask                    (0x00000010)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_3_mask                    (0x00000008)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_2_mask                    (0x00000004)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_1_mask                    (0x00000002)
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_0_mask                    (0x00000001)
#define  KMC_BIST_BISR_KMC_BIST_DONE_hfp_pqdc2_bist_done(data)                   (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfp_pqdc1_bist_done(data)                   (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfp_pqdc2_bist_done(data)                   (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_BIST_DONE_hfi_pqdc2_bist_done(data)                   (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfi_pqdc1_bist_done(data)                   (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lfi_pqdc2_bist_done(data)                   (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lf_pqc1_bist_done(data)                     (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lf_pqc2_bist_done(data)                     (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_BIST_DONE_hf_pqc2_bist_done(data)                     (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_BIST_DONE_kmc_rdma_bist_done(data)                    (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_BIST_DONE_kmc_wdma_bist_done(data)                    (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_BIST_DONE_ipmc_bist_done(data)                        (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_BIST_DONE_mc_mv_info_bist_done(data)                  (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_7(data)                   (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_6(data)                   (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_5(data)                   (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_4(data)                   (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_3(data)                   (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_2(data)                   (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_1(data)                   (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BIST_DONE_lbmc_hf_bist_done_0(data)                   (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_hfp_pqdc2_bist_done(data)               ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lfp_pqdc1_bist_done(data)               ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lfp_pqdc2_bist_done(data)               ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_hfi_pqdc2_bist_done(data)               ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lfi_pqdc1_bist_done(data)               ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lfi_pqdc2_bist_done(data)               ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lf_pqc1_bist_done(data)                 ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lf_pqc2_bist_done(data)                 ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_hf_pqc2_bist_done(data)                 ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_kmc_rdma_bist_done(data)                ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_kmc_wdma_bist_done(data)                ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_ipmc_bist_done(data)                    ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_mc_mv_info_bist_done(data)              ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_7(data)               ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_6(data)               ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_5(data)               ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_4(data)               ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_3(data)               ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_2(data)               ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_1(data)               ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BIST_DONE_get_lbmc_hf_bist_done_0(data)               (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP                                      0x1809F108
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_reg_addr                              "0xB809F108"
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_reg                                   0xB809F108
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_inst_addr                             "0x0002"
#define  set_KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_reg(data)                         (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_reg                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_reg))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hfp_pqdc2_bist_fail_group_shift       (20)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfp_pqdc1_bist_fail_group_shift       (19)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfp_pqdc2_bist_fail_group_shift       (18)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hfi_pqdc2_bist_fail_group_shift       (17)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfi_pqdc1_bist_fail_group_shift       (16)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfi_pqdc2_bist_fail_group_shift       (15)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lf_pqc1_bist_fail_group_shift         (14)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lf_pqc2_bist_fail_group_shift         (13)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hf_pqc2_bist_fail_group_shift         (12)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_kmc_rdma_bist_fail_group_shift        (11)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_kmc_wdma_bist_fail_group_shift        (10)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_ipmc_bist_fail_group_shift            (9)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_mc_mv_info_bist_fail_group_shift      (8)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_7_shift       (7)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_6_shift       (6)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_5_shift       (5)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_4_shift       (4)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_3_shift       (3)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_2_shift       (2)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_1_shift       (1)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_0_shift       (0)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hfp_pqdc2_bist_fail_group_mask        (0x00100000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfp_pqdc1_bist_fail_group_mask        (0x00080000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfp_pqdc2_bist_fail_group_mask        (0x00040000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hfi_pqdc2_bist_fail_group_mask        (0x00020000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfi_pqdc1_bist_fail_group_mask        (0x00010000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfi_pqdc2_bist_fail_group_mask        (0x00008000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lf_pqc1_bist_fail_group_mask          (0x00004000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lf_pqc2_bist_fail_group_mask          (0x00002000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hf_pqc2_bist_fail_group_mask          (0x00001000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_kmc_rdma_bist_fail_group_mask         (0x00000800)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_kmc_wdma_bist_fail_group_mask         (0x00000400)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_ipmc_bist_fail_group_mask             (0x00000200)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_mc_mv_info_bist_fail_group_mask       (0x00000100)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_7_mask        (0x00000080)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_6_mask        (0x00000040)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_5_mask        (0x00000020)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_4_mask        (0x00000010)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_3_mask        (0x00000008)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_2_mask        (0x00000004)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_1_mask        (0x00000002)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_0_mask        (0x00000001)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hfp_pqdc2_bist_fail_group(data)       (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfp_pqdc1_bist_fail_group(data)       (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfp_pqdc2_bist_fail_group(data)       (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hfi_pqdc2_bist_fail_group(data)       (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfi_pqdc1_bist_fail_group(data)       (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lfi_pqdc2_bist_fail_group(data)       (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lf_pqc1_bist_fail_group(data)         (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lf_pqc2_bist_fail_group(data)         (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_hf_pqc2_bist_fail_group(data)         (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_kmc_rdma_bist_fail_group(data)        (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_kmc_wdma_bist_fail_group(data)        (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_ipmc_bist_fail_group(data)            (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_mc_mv_info_bist_fail_group(data)      (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_7(data)       (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_6(data)       (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_5(data)       (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_4(data)       (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_3(data)       (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_2(data)       (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_1(data)       (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_lbmc_hf_bist_fail_group_0(data)       (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_hfp_pqdc2_bist_fail_group(data)   ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lfp_pqdc1_bist_fail_group(data)   ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lfp_pqdc2_bist_fail_group(data)   ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_hfi_pqdc2_bist_fail_group(data)   ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lfi_pqdc1_bist_fail_group(data)   ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lfi_pqdc2_bist_fail_group(data)   ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lf_pqc1_bist_fail_group(data)     ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lf_pqc2_bist_fail_group(data)     ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_hf_pqc2_bist_fail_group(data)     ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_kmc_rdma_bist_fail_group(data)    ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_kmc_wdma_bist_fail_group(data)    ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_ipmc_bist_fail_group(data)        ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_mc_mv_info_bist_fail_group(data)  ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_7(data)   ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_6(data)   ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_5(data)   ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_4(data)   ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_3(data)   ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_2(data)   ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_1(data)   ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP_get_lbmc_hf_bist_fail_group_0(data)   (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BIST_MODE1                                           0x1809F170
#define  KMC_BIST_BISR_KMC_BIST_MODE1_reg_addr                                   "0xB809F170"
#define  KMC_BIST_BISR_KMC_BIST_MODE1_reg                                        0xB809F170
#define  KMC_BIST_BISR_KMC_BIST_MODE1_inst_addr                                  "0x0003"
#define  set_KMC_BIST_BISR_KMC_BIST_MODE1_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_MODE1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_MODE1_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_MODE1_reg))
#define  KMC_BIST_BISR_KMC_BIST_MODE1_pxl_logo_i_mbist_mode_shift                (3)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_blkeros_logo_i_mbist_mode_shift            (2)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_blk_logo_i_mbist_mode_shift                (1)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_ippre_bbd_bist_mode_shift                  (0)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_pxl_logo_i_mbist_mode_mask                 (0x00000008)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_blkeros_logo_i_mbist_mode_mask             (0x00000004)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_blk_logo_i_mbist_mode_mask                 (0x00000002)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_ippre_bbd_bist_mode_mask                   (0x00000001)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_pxl_logo_i_mbist_mode(data)                (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BIST_MODE1_blkeros_logo_i_mbist_mode(data)            (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BIST_MODE1_blk_logo_i_mbist_mode(data)                (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BIST_MODE1_ippre_bbd_bist_mode(data)                  (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BIST_MODE1_get_pxl_logo_i_mbist_mode(data)            ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_get_blkeros_logo_i_mbist_mode(data)        ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_get_blk_logo_i_mbist_mode(data)            ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BIST_MODE1_get_ippre_bbd_bist_mode(data)              (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BIST_DONE1                                           0x1809F174
#define  KMC_BIST_BISR_KMC_BIST_DONE1_reg_addr                                   "0xB809F174"
#define  KMC_BIST_BISR_KMC_BIST_DONE1_reg                                        0xB809F174
#define  KMC_BIST_BISR_KMC_BIST_DONE1_inst_addr                                  "0x0004"
#define  set_KMC_BIST_BISR_KMC_BIST_DONE1_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_DONE1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_DONE1_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_DONE1_reg))
#define  KMC_BIST_BISR_KMC_BIST_DONE1_pxl_logo_i_bist_done_shift                 (3)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_blkeros_logo_i_bist_done_shift             (2)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_blk_logo_i_bist_done_shift                 (1)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_ippre_bbd_bist_done_shift                  (0)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_pxl_logo_i_bist_done_mask                  (0x00000008)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_blkeros_logo_i_bist_done_mask              (0x00000004)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_blk_logo_i_bist_done_mask                  (0x00000002)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_ippre_bbd_bist_done_mask                   (0x00000001)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_pxl_logo_i_bist_done(data)                 (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BIST_DONE1_blkeros_logo_i_bist_done(data)             (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BIST_DONE1_blk_logo_i_bist_done(data)                 (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BIST_DONE1_ippre_bbd_bist_done(data)                  (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BIST_DONE1_get_pxl_logo_i_bist_done(data)             ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_get_blkeros_logo_i_bist_done(data)         ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_get_blk_logo_i_bist_done(data)             ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BIST_DONE1_get_ippre_bbd_bist_done(data)              (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1                                     0x1809F178
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_reg_addr                             "0xB809F178"
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_reg                                  0xB809F178
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_inst_addr                            "0x0005"
#define  set_KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_reg(data)                        (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_reg                              (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_reg))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_pxl_logo_i_bist_fail_group_shift     (3)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_blkeros_logo_i_bist_fail_group_shift (2)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_blk_logo_i_bist_fail_group_shift     (1)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_ippre_bbd_bist_fail_group_shift      (0)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_pxl_logo_i_bist_fail_group_mask      (0x00000008)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_blkeros_logo_i_bist_fail_group_mask  (0x00000004)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_blk_logo_i_bist_fail_group_mask      (0x00000002)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_ippre_bbd_bist_fail_group_mask       (0x00000001)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_pxl_logo_i_bist_fail_group(data)     (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_blkeros_logo_i_bist_fail_group(data) (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_blk_logo_i_bist_fail_group(data)     (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_ippre_bbd_bist_fail_group(data)      (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_get_pxl_logo_i_bist_fail_group(data) ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_get_blkeros_logo_i_bist_fail_group(data) ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_get_blk_logo_i_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_GROUP1_get_ippre_bbd_bist_fail_group(data)  (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_MODE                                             0x1809F10C
#define  KMC_BIST_BISR_KMC_DRF_MODE_reg_addr                                     "0xB809F10C"
#define  KMC_BIST_BISR_KMC_DRF_MODE_reg                                          0xB809F10C
#define  KMC_BIST_BISR_KMC_DRF_MODE_inst_addr                                    "0x0006"
#define  set_KMC_BIST_BISR_KMC_DRF_MODE_reg(data)                                (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_MODE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_MODE_reg                                      (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_MODE_reg))
#define  KMC_BIST_BISR_KMC_DRF_MODE_hfp_pqdc2_drf_mode_shift                     (20)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfp_pqdc1_drf_mode_shift                     (19)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfp_pqdc2_drf_mode_shift                     (18)
#define  KMC_BIST_BISR_KMC_DRF_MODE_hfi_pqdc2_drf_mode_shift                     (17)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfi_pqdc1_drf_mode_shift                     (16)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfi_pqdc2_drf_mode_shift                     (15)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lf_pqc1_drf_mode_shift                       (14)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lf_pqc2_drf_mode_shift                       (13)
#define  KMC_BIST_BISR_KMC_DRF_MODE_hf_pqc2_drf_mode_shift                       (12)
#define  KMC_BIST_BISR_KMC_DRF_MODE_kmc_rdma_drf_mode_shift                      (11)
#define  KMC_BIST_BISR_KMC_DRF_MODE_kmc_wdma_drf_mode_shift                      (10)
#define  KMC_BIST_BISR_KMC_DRF_MODE_ipmc_drf_bist_mode_shift                     (9)
#define  KMC_BIST_BISR_KMC_DRF_MODE_mc_mv_info_drf_bist_mode_shift               (8)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_7_shift                (7)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_6_shift                (6)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_5_shift                (5)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_4_shift                (4)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_3_shift                (3)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_2_shift                (2)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_1_shift                (1)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_0_shift                (0)
#define  KMC_BIST_BISR_KMC_DRF_MODE_hfp_pqdc2_drf_mode_mask                      (0x00100000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfp_pqdc1_drf_mode_mask                      (0x00080000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfp_pqdc2_drf_mode_mask                      (0x00040000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_hfi_pqdc2_drf_mode_mask                      (0x00020000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfi_pqdc1_drf_mode_mask                      (0x00010000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfi_pqdc2_drf_mode_mask                      (0x00008000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lf_pqc1_drf_mode_mask                        (0x00004000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lf_pqc2_drf_mode_mask                        (0x00002000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_hf_pqc2_drf_mode_mask                        (0x00001000)
#define  KMC_BIST_BISR_KMC_DRF_MODE_kmc_rdma_drf_mode_mask                       (0x00000800)
#define  KMC_BIST_BISR_KMC_DRF_MODE_kmc_wdma_drf_mode_mask                       (0x00000400)
#define  KMC_BIST_BISR_KMC_DRF_MODE_ipmc_drf_bist_mode_mask                      (0x00000200)
#define  KMC_BIST_BISR_KMC_DRF_MODE_mc_mv_info_drf_bist_mode_mask                (0x00000100)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_7_mask                 (0x00000080)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_6_mask                 (0x00000040)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_5_mask                 (0x00000020)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_4_mask                 (0x00000010)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_3_mask                 (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_2_mask                 (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_1_mask                 (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_0_mask                 (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_MODE_hfp_pqdc2_drf_mode(data)                     (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfp_pqdc1_drf_mode(data)                     (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfp_pqdc2_drf_mode(data)                     (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_DRF_MODE_hfi_pqdc2_drf_mode(data)                     (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfi_pqdc1_drf_mode(data)                     (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lfi_pqdc2_drf_mode(data)                     (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lf_pqc1_drf_mode(data)                       (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lf_pqc2_drf_mode(data)                       (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_DRF_MODE_hf_pqc2_drf_mode(data)                       (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_DRF_MODE_kmc_rdma_drf_mode(data)                      (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_DRF_MODE_kmc_wdma_drf_mode(data)                      (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_DRF_MODE_ipmc_drf_bist_mode(data)                     (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_DRF_MODE_mc_mv_info_drf_bist_mode(data)               (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_7(data)                (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_6(data)                (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_5(data)                (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_4(data)                (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_3(data)                (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_2(data)                (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_1(data)                (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_MODE_lbmc_hf_drf_bist_mode_0(data)                (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_hfp_pqdc2_drf_mode(data)                 ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lfp_pqdc1_drf_mode(data)                 ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lfp_pqdc2_drf_mode(data)                 ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_hfi_pqdc2_drf_mode(data)                 ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lfi_pqdc1_drf_mode(data)                 ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lfi_pqdc2_drf_mode(data)                 ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lf_pqc1_drf_mode(data)                   ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lf_pqc2_drf_mode(data)                   ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_hf_pqc2_drf_mode(data)                   ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_kmc_rdma_drf_mode(data)                  ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_kmc_wdma_drf_mode(data)                  ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_ipmc_drf_bist_mode(data)                 ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_mc_mv_info_drf_bist_mode(data)           ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_7(data)            ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_6(data)            ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_5(data)            ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_4(data)            ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_3(data)            ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_2(data)            ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_1(data)            ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_MODE_get_lbmc_hf_drf_bist_mode_0(data)            (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_RESUME                                           0x1809F110
#define  KMC_BIST_BISR_KMC_DRF_RESUME_reg_addr                                   "0xB809F110"
#define  KMC_BIST_BISR_KMC_DRF_RESUME_reg                                        0xB809F110
#define  KMC_BIST_BISR_KMC_DRF_RESUME_inst_addr                                  "0x0007"
#define  set_KMC_BIST_BISR_KMC_DRF_RESUME_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_RESUME_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_RESUME_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_RESUME_reg))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hfp_pqdc2_drf_test_resume_shift            (20)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfp_pqdc1_drf_test_resume_shift            (19)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfp_pqdc2_drf_test_resume_shift            (18)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hfi_pqdc2_drf_test_resume_shift            (17)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfi_pqdc1_drf_test_resume_shift            (16)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfi_pqdc2_drf_test_resume_shift            (15)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lf_pqc1_drf_test_resume_shift              (14)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lf_pqc2_drf_test_resume_shift              (13)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hf_pqc2_drf_test_resume_shift              (12)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_kmc_rdma_drf_test_resume_shift             (11)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_kmc_wdma_drf_test_resume_shift             (10)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_ipmc_drf_test_resume_shift                 (9)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_mc_mv_info_drf_test_resume_shift           (8)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_7_shift            (7)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_6_shift            (6)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_5_shift            (5)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_4_shift            (4)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_3_shift            (3)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_2_shift            (2)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_1_shift            (1)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_0_shift            (0)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hfp_pqdc2_drf_test_resume_mask             (0x00100000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfp_pqdc1_drf_test_resume_mask             (0x00080000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfp_pqdc2_drf_test_resume_mask             (0x00040000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hfi_pqdc2_drf_test_resume_mask             (0x00020000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfi_pqdc1_drf_test_resume_mask             (0x00010000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfi_pqdc2_drf_test_resume_mask             (0x00008000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lf_pqc1_drf_test_resume_mask               (0x00004000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lf_pqc2_drf_test_resume_mask               (0x00002000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hf_pqc2_drf_test_resume_mask               (0x00001000)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_kmc_rdma_drf_test_resume_mask              (0x00000800)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_kmc_wdma_drf_test_resume_mask              (0x00000400)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_ipmc_drf_test_resume_mask                  (0x00000200)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_mc_mv_info_drf_test_resume_mask            (0x00000100)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_7_mask             (0x00000080)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_6_mask             (0x00000040)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_5_mask             (0x00000020)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_4_mask             (0x00000010)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_3_mask             (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_2_mask             (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_1_mask             (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_0_mask             (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hfp_pqdc2_drf_test_resume(data)            (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfp_pqdc1_drf_test_resume(data)            (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfp_pqdc2_drf_test_resume(data)            (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hfi_pqdc2_drf_test_resume(data)            (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfi_pqdc1_drf_test_resume(data)            (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lfi_pqdc2_drf_test_resume(data)            (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lf_pqc1_drf_test_resume(data)              (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lf_pqc2_drf_test_resume(data)              (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_hf_pqc2_drf_test_resume(data)              (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_kmc_rdma_drf_test_resume(data)             (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_kmc_wdma_drf_test_resume(data)             (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_ipmc_drf_test_resume(data)                 (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_mc_mv_info_drf_test_resume(data)           (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_7(data)            (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_6(data)            (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_5(data)            (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_4(data)            (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_3(data)            (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_2(data)            (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_1(data)            (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_lbmc_hf_drf_test_resume_0(data)            (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_hfp_pqdc2_drf_test_resume(data)        ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lfp_pqdc1_drf_test_resume(data)        ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lfp_pqdc2_drf_test_resume(data)        ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_hfi_pqdc2_drf_test_resume(data)        ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lfi_pqdc1_drf_test_resume(data)        ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lfi_pqdc2_drf_test_resume(data)        ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lf_pqc1_drf_test_resume(data)          ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lf_pqc2_drf_test_resume(data)          ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_hf_pqc2_drf_test_resume(data)          ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_kmc_rdma_drf_test_resume(data)         ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_kmc_wdma_drf_test_resume(data)         ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_ipmc_drf_test_resume(data)             ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_mc_mv_info_drf_test_resume(data)       ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_7(data)        ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_6(data)        ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_5(data)        ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_4(data)        ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_3(data)        ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_2(data)        ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_1(data)        ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_RESUME_get_lbmc_hf_drf_test_resume_0(data)        (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_DONE                                             0x1809F114
#define  KMC_BIST_BISR_KMC_DRF_DONE_reg_addr                                     "0xB809F114"
#define  KMC_BIST_BISR_KMC_DRF_DONE_reg                                          0xB809F114
#define  KMC_BIST_BISR_KMC_DRF_DONE_inst_addr                                    "0x0008"
#define  set_KMC_BIST_BISR_KMC_DRF_DONE_reg(data)                                (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_DONE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_DONE_reg                                      (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_DONE_reg))
#define  KMC_BIST_BISR_KMC_DRF_DONE_hfp_pqdc2_drf_done_shift                     (20)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfp_pqdc1_drf_done_shift                     (19)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfp_pqdc2_drf_done_shift                     (18)
#define  KMC_BIST_BISR_KMC_DRF_DONE_hfi_pqdc2_drf_done_shift                     (17)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfi_pqdc1_drf_done_shift                     (16)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfi_pqdc2_drf_done_shift                     (15)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lf_pqc1_drf_done_shift                       (14)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lf_pqc2_drf_done_shift                       (13)
#define  KMC_BIST_BISR_KMC_DRF_DONE_hf_pqc2_drf_done_shift                       (12)
#define  KMC_BIST_BISR_KMC_DRF_DONE_kmc_rdma_drf_done_shift                      (11)
#define  KMC_BIST_BISR_KMC_DRF_DONE_kmc_wdma_drf_done_shift                      (10)
#define  KMC_BIST_BISR_KMC_DRF_DONE_ipmc_drf_bist_done_shift                     (9)
#define  KMC_BIST_BISR_KMC_DRF_DONE_mc_mv_info_drf_bist_done_shift               (8)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_7_shift                (7)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_6_shift                (6)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_5_shift                (5)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_4_shift                (4)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_3_shift                (3)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_2_shift                (2)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_1_shift                (1)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_0_shift                (0)
#define  KMC_BIST_BISR_KMC_DRF_DONE_hfp_pqdc2_drf_done_mask                      (0x00100000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfp_pqdc1_drf_done_mask                      (0x00080000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfp_pqdc2_drf_done_mask                      (0x00040000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_hfi_pqdc2_drf_done_mask                      (0x00020000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfi_pqdc1_drf_done_mask                      (0x00010000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfi_pqdc2_drf_done_mask                      (0x00008000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lf_pqc1_drf_done_mask                        (0x00004000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lf_pqc2_drf_done_mask                        (0x00002000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_hf_pqc2_drf_done_mask                        (0x00001000)
#define  KMC_BIST_BISR_KMC_DRF_DONE_kmc_rdma_drf_done_mask                       (0x00000800)
#define  KMC_BIST_BISR_KMC_DRF_DONE_kmc_wdma_drf_done_mask                       (0x00000400)
#define  KMC_BIST_BISR_KMC_DRF_DONE_ipmc_drf_bist_done_mask                      (0x00000200)
#define  KMC_BIST_BISR_KMC_DRF_DONE_mc_mv_info_drf_bist_done_mask                (0x00000100)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_7_mask                 (0x00000080)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_6_mask                 (0x00000040)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_5_mask                 (0x00000020)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_4_mask                 (0x00000010)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_3_mask                 (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_2_mask                 (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_1_mask                 (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_0_mask                 (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_DONE_hfp_pqdc2_drf_done(data)                     (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfp_pqdc1_drf_done(data)                     (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfp_pqdc2_drf_done(data)                     (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_DRF_DONE_hfi_pqdc2_drf_done(data)                     (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfi_pqdc1_drf_done(data)                     (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lfi_pqdc2_drf_done(data)                     (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lf_pqc1_drf_done(data)                       (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lf_pqc2_drf_done(data)                       (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_DRF_DONE_hf_pqc2_drf_done(data)                       (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_DRF_DONE_kmc_rdma_drf_done(data)                      (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_DRF_DONE_kmc_wdma_drf_done(data)                      (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_DRF_DONE_ipmc_drf_bist_done(data)                     (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_DRF_DONE_mc_mv_info_drf_bist_done(data)               (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_7(data)                (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_6(data)                (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_5(data)                (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_4(data)                (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_3(data)                (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_2(data)                (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_1(data)                (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_DONE_lbmc_hf_drf_bist_done_0(data)                (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_hfp_pqdc2_drf_done(data)                 ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lfp_pqdc1_drf_done(data)                 ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lfp_pqdc2_drf_done(data)                 ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_hfi_pqdc2_drf_done(data)                 ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lfi_pqdc1_drf_done(data)                 ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lfi_pqdc2_drf_done(data)                 ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lf_pqc1_drf_done(data)                   ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lf_pqc2_drf_done(data)                   ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_hf_pqc2_drf_done(data)                   ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_kmc_rdma_drf_done(data)                  ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_kmc_wdma_drf_done(data)                  ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_ipmc_drf_bist_done(data)                 ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_mc_mv_info_drf_bist_done(data)           ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_7(data)            ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_6(data)            ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_5(data)            ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_4(data)            ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_3(data)            ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_2(data)            ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_1(data)            ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_DONE_get_lbmc_hf_drf_bist_done_0(data)            (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_PAUSE                                            0x1809F118
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_reg_addr                                    "0xB809F118"
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_reg                                         0xB809F118
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_inst_addr                                   "0x0009"
#define  set_KMC_BIST_BISR_KMC_DRF_PAUSE_reg(data)                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_PAUSE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_PAUSE_reg                                     (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_PAUSE_reg))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hfp_pqdc2_drf_start_pause_shift             (20)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfp_pqdc1_drf_start_pause_shift             (19)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfp_pqdc2_drf_start_pause_shift             (18)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hfi_pqdc2_drf_start_pause_shift             (17)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfi_pqdc1_drf_start_pause_shift             (16)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfi_pqdc2_drf_start_pause_shift             (15)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lf_pqc1_drf_start_pause_shift               (14)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lf_pqc2_drf_start_pause_shift               (13)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hf_pqc2_drf_start_pause_shift               (12)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_kmc_rdma_drf_start_pause_shift              (11)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_kmc_wdma_drf_start_pause_shift              (10)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_ipmc_drf_start_pause_shift                  (9)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_mc_mv_info_drf_start_pause_shift            (8)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_7_shift             (7)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_6_shift             (6)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_5_shift             (5)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_4_shift             (4)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_3_shift             (3)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_2_shift             (2)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_1_shift             (1)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_0_shift             (0)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hfp_pqdc2_drf_start_pause_mask              (0x00100000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfp_pqdc1_drf_start_pause_mask              (0x00080000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfp_pqdc2_drf_start_pause_mask              (0x00040000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hfi_pqdc2_drf_start_pause_mask              (0x00020000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfi_pqdc1_drf_start_pause_mask              (0x00010000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfi_pqdc2_drf_start_pause_mask              (0x00008000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lf_pqc1_drf_start_pause_mask                (0x00004000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lf_pqc2_drf_start_pause_mask                (0x00002000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hf_pqc2_drf_start_pause_mask                (0x00001000)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_kmc_rdma_drf_start_pause_mask               (0x00000800)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_kmc_wdma_drf_start_pause_mask               (0x00000400)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_ipmc_drf_start_pause_mask                   (0x00000200)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_mc_mv_info_drf_start_pause_mask             (0x00000100)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_7_mask              (0x00000080)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_6_mask              (0x00000040)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_5_mask              (0x00000020)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_4_mask              (0x00000010)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_3_mask              (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_2_mask              (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_1_mask              (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_0_mask              (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hfp_pqdc2_drf_start_pause(data)             (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfp_pqdc1_drf_start_pause(data)             (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfp_pqdc2_drf_start_pause(data)             (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hfi_pqdc2_drf_start_pause(data)             (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfi_pqdc1_drf_start_pause(data)             (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lfi_pqdc2_drf_start_pause(data)             (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lf_pqc1_drf_start_pause(data)               (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lf_pqc2_drf_start_pause(data)               (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_hf_pqc2_drf_start_pause(data)               (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_kmc_rdma_drf_start_pause(data)              (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_kmc_wdma_drf_start_pause(data)              (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_ipmc_drf_start_pause(data)                  (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_mc_mv_info_drf_start_pause(data)            (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_7(data)             (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_6(data)             (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_5(data)             (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_4(data)             (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_3(data)             (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_2(data)             (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_1(data)             (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_lbmc_hf_drf_start_pause_0(data)             (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_hfp_pqdc2_drf_start_pause(data)         ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lfp_pqdc1_drf_start_pause(data)         ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lfp_pqdc2_drf_start_pause(data)         ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_hfi_pqdc2_drf_start_pause(data)         ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lfi_pqdc1_drf_start_pause(data)         ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lfi_pqdc2_drf_start_pause(data)         ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lf_pqc1_drf_start_pause(data)           ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lf_pqc2_drf_start_pause(data)           ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_hf_pqc2_drf_start_pause(data)           ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_kmc_rdma_drf_start_pause(data)          ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_kmc_wdma_drf_start_pause(data)          ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_ipmc_drf_start_pause(data)              ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_mc_mv_info_drf_start_pause(data)        ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_7(data)         ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_6(data)         ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_5(data)         ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_4(data)         ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_3(data)         ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_2(data)         ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_1(data)         ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE_get_lbmc_hf_drf_start_pause_0(data)         (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP                                       0x1809F11C
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_reg_addr                               "0xB809F11C"
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_reg                                    0xB809F11C
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_inst_addr                              "0x000A"
#define  set_KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_reg(data)                          (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_reg                                (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_reg))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hfp_pqdc2_drf_fail_group_shift         (20)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfp_pqdc1_drf_fail_group_shift         (19)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfp_pqdc2_drf_fail_group_shift         (18)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hfi_pqdc2_drf_fail_group_shift         (17)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfi_pqdc1_drf_fail_group_shift         (16)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfi_pqdc2_drf_fail_group_shift         (15)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lf_pqc1_drf_fail_group_shift           (14)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lf_pqc2_drf_fail_group_shift           (13)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hf_pqc2_drf_fail_group_shift           (12)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_kmc_rdma_drf_fail_group_shift          (11)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_kmc_wdma_drf_fail_group_shift          (10)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_ipmc_drf_bist_fail_group_shift         (9)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_mc_mv_info_drf_bist_fail_group_shift   (8)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_7_shift    (7)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_6_shift    (6)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_5_shift    (5)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_4_shift    (4)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_3_shift    (3)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_2_shift    (2)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_1_shift    (1)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_0_shift    (0)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hfp_pqdc2_drf_fail_group_mask          (0x00100000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfp_pqdc1_drf_fail_group_mask          (0x00080000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfp_pqdc2_drf_fail_group_mask          (0x00040000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hfi_pqdc2_drf_fail_group_mask          (0x00020000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfi_pqdc1_drf_fail_group_mask          (0x00010000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfi_pqdc2_drf_fail_group_mask          (0x00008000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lf_pqc1_drf_fail_group_mask            (0x00004000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lf_pqc2_drf_fail_group_mask            (0x00002000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hf_pqc2_drf_fail_group_mask            (0x00001000)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_kmc_rdma_drf_fail_group_mask           (0x00000800)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_kmc_wdma_drf_fail_group_mask           (0x00000400)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_ipmc_drf_bist_fail_group_mask          (0x00000200)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_mc_mv_info_drf_bist_fail_group_mask    (0x00000100)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_7_mask     (0x00000080)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_6_mask     (0x00000040)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_5_mask     (0x00000020)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_4_mask     (0x00000010)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_3_mask     (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_2_mask     (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_1_mask     (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_0_mask     (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hfp_pqdc2_drf_fail_group(data)         (0x00100000&((data)<<20))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfp_pqdc1_drf_fail_group(data)         (0x00080000&((data)<<19))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfp_pqdc2_drf_fail_group(data)         (0x00040000&((data)<<18))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hfi_pqdc2_drf_fail_group(data)         (0x00020000&((data)<<17))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfi_pqdc1_drf_fail_group(data)         (0x00010000&((data)<<16))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lfi_pqdc2_drf_fail_group(data)         (0x00008000&((data)<<15))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lf_pqc1_drf_fail_group(data)           (0x00004000&((data)<<14))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lf_pqc2_drf_fail_group(data)           (0x00002000&((data)<<13))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_hf_pqc2_drf_fail_group(data)           (0x00001000&((data)<<12))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_kmc_rdma_drf_fail_group(data)          (0x00000800&((data)<<11))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_kmc_wdma_drf_fail_group(data)          (0x00000400&((data)<<10))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_ipmc_drf_bist_fail_group(data)         (0x00000200&((data)<<9))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_mc_mv_info_drf_bist_fail_group(data)   (0x00000100&((data)<<8))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_7(data)    (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_6(data)    (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_5(data)    (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_4(data)    (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_3(data)    (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_2(data)    (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_1(data)    (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_lbmc_hf_drf_bist_fail_group_0(data)    (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_hfp_pqdc2_drf_fail_group(data)     ((0x00100000&(data))>>20)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lfp_pqdc1_drf_fail_group(data)     ((0x00080000&(data))>>19)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lfp_pqdc2_drf_fail_group(data)     ((0x00040000&(data))>>18)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_hfi_pqdc2_drf_fail_group(data)     ((0x00020000&(data))>>17)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lfi_pqdc1_drf_fail_group(data)     ((0x00010000&(data))>>16)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lfi_pqdc2_drf_fail_group(data)     ((0x00008000&(data))>>15)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lf_pqc1_drf_fail_group(data)       ((0x00004000&(data))>>14)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lf_pqc2_drf_fail_group(data)       ((0x00002000&(data))>>13)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_hf_pqc2_drf_fail_group(data)       ((0x00001000&(data))>>12)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_kmc_rdma_drf_fail_group(data)      ((0x00000800&(data))>>11)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_kmc_wdma_drf_fail_group(data)      ((0x00000400&(data))>>10)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_ipmc_drf_bist_fail_group(data)     ((0x00000200&(data))>>9)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_mc_mv_info_drf_bist_fail_group(data) ((0x00000100&(data))>>8)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_7(data) ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_6(data) ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_5(data) ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_4(data) ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_3(data) ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_2(data) ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_1(data) ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP_get_lbmc_hf_drf_bist_fail_group_0(data) (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_MODE1                                            0x1809F17C
#define  KMC_BIST_BISR_KMC_DRF_MODE1_reg_addr                                    "0xB809F17C"
#define  KMC_BIST_BISR_KMC_DRF_MODE1_reg                                         0xB809F17C
#define  KMC_BIST_BISR_KMC_DRF_MODE1_inst_addr                                   "0x000B"
#define  set_KMC_BIST_BISR_KMC_DRF_MODE1_reg(data)                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_MODE1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_MODE1_reg                                     (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_MODE1_reg))
#define  KMC_BIST_BISR_KMC_DRF_MODE1_pxl_logo_i_drf_mbist_mode_shift             (3)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_blkeros_logo_i_drf_mbist_mode_shift         (2)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_blk_logo_i_drf_mbist_mode_shift             (1)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_ippre_bbd_drf_bist_mode_shift               (0)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_pxl_logo_i_drf_mbist_mode_mask              (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_blkeros_logo_i_drf_mbist_mode_mask          (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_blk_logo_i_drf_mbist_mode_mask              (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_ippre_bbd_drf_bist_mode_mask                (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_pxl_logo_i_drf_mbist_mode(data)             (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_MODE1_blkeros_logo_i_drf_mbist_mode(data)         (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_MODE1_blk_logo_i_drf_mbist_mode(data)             (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_MODE1_ippre_bbd_drf_bist_mode(data)               (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_MODE1_get_pxl_logo_i_drf_mbist_mode(data)         ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_get_blkeros_logo_i_drf_mbist_mode(data)     ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_get_blk_logo_i_drf_mbist_mode(data)         ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_MODE1_get_ippre_bbd_drf_bist_mode(data)           (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_RESUME1                                          0x1809F180
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_reg_addr                                  "0xB809F180"
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_reg                                       0xB809F180
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_inst_addr                                 "0x000C"
#define  set_KMC_BIST_BISR_KMC_DRF_RESUME1_reg(data)                             (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_RESUME1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_RESUME1_reg                                   (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_RESUME1_reg))
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_pxl_logo_i_drf_test_resume_shift          (3)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_blkeros_logo_i_drf_test_resume_shift      (2)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_blk_logo_i_drf_test_resume_shift          (1)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_ippre_bbd_drf_test_resume_shift           (0)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_pxl_logo_i_drf_test_resume_mask           (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_blkeros_logo_i_drf_test_resume_mask       (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_blk_logo_i_drf_test_resume_mask           (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_ippre_bbd_drf_test_resume_mask            (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_pxl_logo_i_drf_test_resume(data)          (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_blkeros_logo_i_drf_test_resume(data)      (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_blk_logo_i_drf_test_resume(data)          (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_ippre_bbd_drf_test_resume(data)           (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_get_pxl_logo_i_drf_test_resume(data)      ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_get_blkeros_logo_i_drf_test_resume(data)  ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_get_blk_logo_i_drf_test_resume(data)      ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_RESUME1_get_ippre_bbd_drf_test_resume(data)       (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_DONE1                                            0x1809F184
#define  KMC_BIST_BISR_KMC_DRF_DONE1_reg_addr                                    "0xB809F184"
#define  KMC_BIST_BISR_KMC_DRF_DONE1_reg                                         0xB809F184
#define  KMC_BIST_BISR_KMC_DRF_DONE1_inst_addr                                   "0x000D"
#define  set_KMC_BIST_BISR_KMC_DRF_DONE1_reg(data)                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_DONE1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_DONE1_reg                                     (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_DONE1_reg))
#define  KMC_BIST_BISR_KMC_DRF_DONE1_pxl_logo_i_drf_bist_done_shift              (3)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_blkeros_logo_i_drf_bist_done_shift          (2)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_blk_logo_i_drf_bist_done_shift              (1)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_ippre_bbd_drf_bist_done_shift               (0)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_pxl_logo_i_drf_bist_done_mask               (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_blkeros_logo_i_drf_bist_done_mask           (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_blk_logo_i_drf_bist_done_mask               (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_ippre_bbd_drf_bist_done_mask                (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_pxl_logo_i_drf_bist_done(data)              (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_DONE1_blkeros_logo_i_drf_bist_done(data)          (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_DONE1_blk_logo_i_drf_bist_done(data)              (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_DONE1_ippre_bbd_drf_bist_done(data)               (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_DONE1_get_pxl_logo_i_drf_bist_done(data)          ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_get_blkeros_logo_i_drf_bist_done(data)      ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_get_blk_logo_i_drf_bist_done(data)          ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_DONE1_get_ippre_bbd_drf_bist_done(data)           (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_PAUSE1                                           0x1809F188
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_reg_addr                                   "0xB809F188"
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_reg                                        0xB809F188
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_inst_addr                                  "0x000E"
#define  set_KMC_BIST_BISR_KMC_DRF_PAUSE1_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_PAUSE1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_PAUSE1_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_PAUSE1_reg))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_pxl_logo_i_drf_start_pause_shift           (3)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_blkeros_logo_i_drf_start_pause_shift       (2)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_blk_logo_i_drf_start_pause_shift           (1)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_ippre_bbd_drf_start_pause_shift            (0)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_pxl_logo_i_drf_start_pause_mask            (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_blkeros_logo_i_drf_start_pause_mask        (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_blk_logo_i_drf_start_pause_mask            (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_ippre_bbd_drf_start_pause_mask             (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_pxl_logo_i_drf_start_pause(data)           (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_blkeros_logo_i_drf_start_pause(data)       (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_blk_logo_i_drf_start_pause(data)           (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_ippre_bbd_drf_start_pause(data)            (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_get_pxl_logo_i_drf_start_pause(data)       ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_get_blkeros_logo_i_drf_start_pause(data)   ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_get_blk_logo_i_drf_start_pause(data)       ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_PAUSE1_get_ippre_bbd_drf_start_pause(data)        (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1                                      0x1809F18C
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_reg_addr                              "0xB809F18C"
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_reg                                   0xB809F18C
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_inst_addr                             "0x000F"
#define  set_KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_reg(data)                         (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_reg                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_reg))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_pxl_logo_i_drf_bist_fail_group_shift  (3)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_blkeros_logo_i_drf_bist_fail_group_shift (2)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_blk_logo_i_drf_bist_fail_group_shift  (1)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_ippre_bbd_drf_bist_fail_group_shift   (0)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_pxl_logo_i_drf_bist_fail_group_mask   (0x00000008)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_blkeros_logo_i_drf_bist_fail_group_mask (0x00000004)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_blk_logo_i_drf_bist_fail_group_mask   (0x00000002)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_ippre_bbd_drf_bist_fail_group_mask    (0x00000001)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_pxl_logo_i_drf_bist_fail_group(data)  (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_blkeros_logo_i_drf_bist_fail_group(data) (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_blk_logo_i_drf_bist_fail_group(data)  (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_ippre_bbd_drf_bist_fail_group(data)   (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_get_pxl_logo_i_drf_bist_fail_group(data) ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_get_blkeros_logo_i_drf_bist_fail_group(data) ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_get_blk_logo_i_drf_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_DRF_FAIL_GROUP1_get_ippre_bbd_drf_bist_fail_group(data) (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN                                   0x1809F120
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_reg_addr                           "0xB809F120"
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_reg                                0xB809F120
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_inst_addr                          "0x0010"
#define  set_KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_reg(data)                      (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_reg                            (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_reg))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_7_shift     (7)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_6_shift     (6)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_5_shift     (5)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_4_shift     (4)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_3_shift     (3)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_2_shift     (2)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_1_shift     (1)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_0_shift     (0)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_7_mask      (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_6_mask      (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_5_mask      (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_4_mask      (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_3_mask      (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_2_mask      (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_1_mask      (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_0_mask      (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_7(data)     (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_6(data)     (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_5(data)     (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_4(data)     (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_3(data)     (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_2(data)     (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_1(data)     (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_lbmc_lfl_second_run_en_0(data)     (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_7(data) ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_6(data) ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_5(data) ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_4(data) ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_3(data) ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_2(data) ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_1(data) ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_SECOND_RUN_EN_get_lbmc_lfl_second_run_en_0(data) (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP                                      0x1809F124
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_reg_addr                              "0xB809F124"
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_reg                                   0xB809F124
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_inst_addr                             "0x0011"
#define  set_KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_reg(data)                         (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_reg                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_reg))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_7_shift      (7)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_6_shift      (6)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_5_shift      (5)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_4_shift      (4)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_3_shift      (3)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_2_shift      (2)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_1_shift      (1)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_0_shift      (0)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_7_mask       (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_6_mask       (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_5_mask       (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_4_mask       (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_3_mask       (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_2_mask       (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_1_mask       (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_0_mask       (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_7(data)      (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_6(data)      (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_5(data)      (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_4(data)      (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_3(data)      (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_2(data)      (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_1(data)      (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_lbmc_lfl_bisr_fail_group_0(data)      (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_7(data)  ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_6(data)  ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_5(data)  ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_4(data)  ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_3(data)  ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_2(data)  ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_1(data)  ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_FAIL_GROUP_get_lbmc_lfl_bisr_fail_group_0(data)  (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE                                        0x1809F128
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_reg_addr                                "0xB809F128"
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_reg                                     0xB809F128
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_inst_addr                               "0x0012"
#define  set_KMC_BIST_BISR_KMC_BISR_DRF_MODE_reg(data)                           (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_MODE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_DRF_MODE_reg                                 (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_MODE_reg))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_7_shift          (7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_6_shift          (6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_5_shift          (5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_4_shift          (4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_3_shift          (3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_2_shift          (2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_1_shift          (1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_0_shift          (0)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_7_mask           (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_6_mask           (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_5_mask           (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_4_mask           (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_3_mask           (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_2_mask           (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_1_mask           (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_0_mask           (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_7(data)          (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_6(data)          (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_5(data)          (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_4(data)          (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_3(data)          (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_2(data)          (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_1(data)          (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_lbmc_lfl_drf_bisr_mode_0(data)          (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_7(data)      ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_6(data)      ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_5(data)      ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_4(data)      ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_3(data)      ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_2(data)      ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_1(data)      ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_MODE_get_lbmc_lfl_drf_bisr_mode_0(data)      (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME                                      0x1809F12C
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_reg_addr                              "0xB809F12C"
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_reg                                   0xB809F12C
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_inst_addr                             "0x0013"
#define  set_KMC_BIST_BISR_KMC_BISR_DRF_RESUME_reg(data)                         (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_RESUME_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_DRF_RESUME_reg                               (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_RESUME_reg))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_7_shift      (7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_6_shift      (6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_5_shift      (5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_4_shift      (4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_3_shift      (3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_2_shift      (2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_1_shift      (1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_0_shift      (0)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_7_mask       (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_6_mask       (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_5_mask       (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_4_mask       (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_3_mask       (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_2_mask       (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_1_mask       (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_0_mask       (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_7(data)      (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_6(data)      (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_5(data)      (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_4(data)      (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_3(data)      (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_2(data)      (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_1(data)      (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_lbmc_lfl_drf_test_resume_0(data)      (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_7(data)  ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_6(data)  ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_5(data)  ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_4(data)  ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_3(data)  ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_2(data)  ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_1(data)  ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_RESUME_get_lbmc_lfl_drf_test_resume_0(data)  (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE                                        0x1809F130
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_reg_addr                                "0xB809F130"
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_reg                                     0xB809F130
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_inst_addr                               "0x0014"
#define  set_KMC_BIST_BISR_KMC_BISR_DRF_DONE_reg(data)                           (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_DONE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_DRF_DONE_reg                                 (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_DONE_reg))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_7_shift          (7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_6_shift          (6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_5_shift          (5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_4_shift          (4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_3_shift          (3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_2_shift          (2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_1_shift          (1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_0_shift          (0)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_7_mask           (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_6_mask           (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_5_mask           (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_4_mask           (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_3_mask           (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_2_mask           (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_1_mask           (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_0_mask           (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_7(data)          (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_6(data)          (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_5(data)          (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_4(data)          (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_3(data)          (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_2(data)          (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_1(data)          (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_lbmc_lfl_drf_bisr_done_0(data)          (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_7(data)      ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_6(data)      ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_5(data)      ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_4(data)      ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_3(data)      ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_2(data)      ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_1(data)      ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_DONE_get_lbmc_lfl_drf_bisr_done_0(data)      (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE                                       0x1809F134
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_reg_addr                               "0xB809F134"
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_reg                                    0xB809F134
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_inst_addr                              "0x0015"
#define  set_KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_reg(data)                          (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_reg                                (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_reg))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_7_shift       (7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_6_shift       (6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_5_shift       (5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_4_shift       (4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_3_shift       (3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_2_shift       (2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_1_shift       (1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_0_shift       (0)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_7_mask        (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_6_mask        (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_5_mask        (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_4_mask        (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_3_mask        (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_2_mask        (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_1_mask        (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_0_mask        (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_7(data)       (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_6(data)       (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_5(data)       (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_4(data)       (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_3(data)       (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_2(data)       (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_1(data)       (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_lbmc_lfl_drf_start_pause_0(data)       (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_7(data)   ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_6(data)   ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_5(data)   ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_4(data)   ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_3(data)   ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_2(data)   ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_1(data)   ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_PAUSE_get_lbmc_lfl_drf_start_pause_0(data)   (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP                                  0x1809F138
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_reg_addr                          "0xB809F138"
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_reg                               0xB809F138
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_inst_addr                         "0x0016"
#define  set_KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_reg(data)                     (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_reg                           (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_reg))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_7_shift (7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_6_shift (6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_5_shift (5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_4_shift (4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_3_shift (3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_2_shift (2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_1_shift (1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_0_shift (0)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_7_mask (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_6_mask (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_5_mask (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_4_mask (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_3_mask (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_2_mask (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_1_mask (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_0_mask (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_7(data) (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_6(data) (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_5(data) (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_4(data) (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_3(data) (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_2(data) (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_1(data) (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_lbmc_lfl_drf_bisr_fail_group_0(data) (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_7(data) ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_6(data) ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_5(data) ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_4(data) ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_3(data) ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_2(data) ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_1(data) ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_DRF_FAIL_GROUP_get_lbmc_lfl_drf_bisr_fail_group_0(data) (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_REPAIRED                                        0x1809F140
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_reg_addr                                "0xB809F140"
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_reg                                     0xB809F140
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_inst_addr                               "0x0017"
#define  set_KMC_BIST_BISR_KMC_BISR_REPAIRED_reg(data)                           (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_REPAIRED_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_REPAIRED_reg                                 (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_REPAIRED_reg))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_7_shift          (7)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_6_shift          (6)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_5_shift          (5)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_4_shift          (4)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_3_shift          (3)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_2_shift          (2)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_1_shift          (1)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_0_shift          (0)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_7_mask           (0x00000080)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_6_mask           (0x00000040)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_5_mask           (0x00000020)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_4_mask           (0x00000010)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_3_mask           (0x00000008)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_2_mask           (0x00000004)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_1_mask           (0x00000002)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_0_mask           (0x00000001)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_7(data)          (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_6(data)          (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_5(data)          (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_4(data)          (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_3(data)          (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_2(data)          (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_1(data)          (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_lbmc_lfl_bisr_repaired_0(data)          (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_7(data)      ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_6(data)      ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_5(data)      ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_4(data)      ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_3(data)      ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_2(data)      ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_1(data)      ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_BISR_REPAIRED_get_lbmc_lfl_bisr_repaired_0(data)      (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BISR_OUT_A                                           0x1809F144
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_reg_addr                                   "0xB809F144"
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_reg                                        0xB809F144
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_inst_addr                                  "0x0018"
#define  set_KMC_BIST_BISR_KMC_BISR_OUT_A_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_OUT_A_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_OUT_A_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_OUT_A_reg))
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_7_shift                  (24)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_6_shift                  (16)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_5_shift                  (8)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_4_shift                  (0)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_7_mask                   (0x3F000000)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_6_mask                   (0x003F0000)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_5_mask                   (0x00003F00)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_4_mask                   (0x0000003F)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_7(data)                  (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_6(data)                  (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_5(data)                  (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_lbmc_lfl_bisr_out_4(data)                  (0x0000003F&(data))
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_get_lbmc_lfl_bisr_out_7(data)              ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_get_lbmc_lfl_bisr_out_6(data)              ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_get_lbmc_lfl_bisr_out_5(data)              ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_KMC_BISR_OUT_A_get_lbmc_lfl_bisr_out_4(data)              (0x0000003F&(data))

#define  KMC_BIST_BISR_KMC_BISR_OUT_B                                           0x1809F148
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_reg_addr                                   "0xB809F148"
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_reg                                        0xB809F148
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_inst_addr                                  "0x0019"
#define  set_KMC_BIST_BISR_KMC_BISR_OUT_B_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_OUT_B_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BISR_OUT_B_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BISR_OUT_B_reg))
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_3_shift                  (24)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_2_shift                  (16)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_1_shift                  (8)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_0_shift                  (0)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_3_mask                   (0x3F000000)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_2_mask                   (0x003F0000)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_1_mask                   (0x00003F00)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_0_mask                   (0x0000003F)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_3(data)                  (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_2(data)                  (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_1(data)                  (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_lbmc_lfl_bisr_out_0(data)                  (0x0000003F&(data))
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_get_lbmc_lfl_bisr_out_3(data)              ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_get_lbmc_lfl_bisr_out_2(data)              ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_get_lbmc_lfl_bisr_out_1(data)              ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_KMC_BISR_OUT_B_get_lbmc_lfl_bisr_out_0(data)              (0x0000003F&(data))

#define  KMC_BIST_BISR_KMC_LS                                                   0x1809F150
#define  KMC_BIST_BISR_KMC_LS_reg_addr                                           "0xB809F150"
#define  KMC_BIST_BISR_KMC_LS_reg                                                0xB809F150
#define  KMC_BIST_BISR_KMC_LS_inst_addr                                          "0x001A"
#define  set_KMC_BIST_BISR_KMC_LS_reg(data)                                      (*((volatile unsigned int*)KMC_BIST_BISR_KMC_LS_reg)=data)
#define  get_KMC_BIST_BISR_KMC_LS_reg                                            (*((volatile unsigned int*)KMC_BIST_BISR_KMC_LS_reg))
#define  KMC_BIST_BISR_KMC_LS_ippre_bbd_ls_shift                                 (4)
#define  KMC_BIST_BISR_KMC_LS_ipmc_ls_shift                                      (3)
#define  KMC_BIST_BISR_KMC_LS_lbmc_lfl_ls_shift                                  (2)
#define  KMC_BIST_BISR_KMC_LS_lbmc_lfh_ls_shift                                  (1)
#define  KMC_BIST_BISR_KMC_LS_lbmc_hf_ls_shift                                   (0)
#define  KMC_BIST_BISR_KMC_LS_ippre_bbd_ls_mask                                  (0x00000010)
#define  KMC_BIST_BISR_KMC_LS_ipmc_ls_mask                                       (0x00000008)
#define  KMC_BIST_BISR_KMC_LS_lbmc_lfl_ls_mask                                   (0x00000004)
#define  KMC_BIST_BISR_KMC_LS_lbmc_lfh_ls_mask                                   (0x00000002)
#define  KMC_BIST_BISR_KMC_LS_lbmc_hf_ls_mask                                    (0x00000001)
#define  KMC_BIST_BISR_KMC_LS_ippre_bbd_ls(data)                                 (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_LS_ipmc_ls(data)                                      (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_LS_lbmc_lfl_ls(data)                                  (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_LS_lbmc_lfh_ls(data)                                  (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_LS_lbmc_hf_ls(data)                                   (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_LS_get_ippre_bbd_ls(data)                             ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_LS_get_ipmc_ls(data)                                  ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_LS_get_lbmc_lfl_ls(data)                              ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_LS_get_lbmc_lfh_ls(data)                              ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_LS_get_lbmc_hf_ls(data)                               (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_RME                                                  0x1809F154
#define  KMC_BIST_BISR_KMC_RME_reg_addr                                          "0xB809F154"
#define  KMC_BIST_BISR_KMC_RME_reg                                               0xB809F154
#define  KMC_BIST_BISR_KMC_RME_inst_addr                                         "0x001B"
#define  set_KMC_BIST_BISR_KMC_RME_reg(data)                                     (*((volatile unsigned int*)KMC_BIST_BISR_KMC_RME_reg)=data)
#define  get_KMC_BIST_BISR_KMC_RME_reg                                           (*((volatile unsigned int*)KMC_BIST_BISR_KMC_RME_reg))
#define  KMC_BIST_BISR_KMC_RME_mc_logo_rme_shift                                 (7)
#define  KMC_BIST_BISR_KMC_RME_ippre_bbd_rme_shift                               (6)
#define  KMC_BIST_BISR_KMC_RME_mc_fblvl_rme_shift                                (5)
#define  KMC_BIST_BISR_KMC_RME_mc_mv_info_rme_shift                              (4)
#define  KMC_BIST_BISR_KMC_RME_ipmc_rme_shift                                    (3)
#define  KMC_BIST_BISR_KMC_RME_lbmc_lfl_rme_shift                                (2)
#define  KMC_BIST_BISR_KMC_RME_lbmc_lfh_rme_shift                                (1)
#define  KMC_BIST_BISR_KMC_RME_lbmc_hf_rme_shift                                 (0)
#define  KMC_BIST_BISR_KMC_RME_mc_logo_rme_mask                                  (0x00000080)
#define  KMC_BIST_BISR_KMC_RME_ippre_bbd_rme_mask                                (0x00000040)
#define  KMC_BIST_BISR_KMC_RME_mc_fblvl_rme_mask                                 (0x00000020)
#define  KMC_BIST_BISR_KMC_RME_mc_mv_info_rme_mask                               (0x00000010)
#define  KMC_BIST_BISR_KMC_RME_ipmc_rme_mask                                     (0x00000008)
#define  KMC_BIST_BISR_KMC_RME_lbmc_lfl_rme_mask                                 (0x00000004)
#define  KMC_BIST_BISR_KMC_RME_lbmc_lfh_rme_mask                                 (0x00000002)
#define  KMC_BIST_BISR_KMC_RME_lbmc_hf_rme_mask                                  (0x00000001)
#define  KMC_BIST_BISR_KMC_RME_mc_logo_rme(data)                                 (0x00000080&((data)<<7))
#define  KMC_BIST_BISR_KMC_RME_ippre_bbd_rme(data)                               (0x00000040&((data)<<6))
#define  KMC_BIST_BISR_KMC_RME_mc_fblvl_rme(data)                                (0x00000020&((data)<<5))
#define  KMC_BIST_BISR_KMC_RME_mc_mv_info_rme(data)                              (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_RME_ipmc_rme(data)                                    (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_RME_lbmc_lfl_rme(data)                                (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_RME_lbmc_lfh_rme(data)                                (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_RME_lbmc_hf_rme(data)                                 (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_RME_get_mc_logo_rme(data)                             ((0x00000080&(data))>>7)
#define  KMC_BIST_BISR_KMC_RME_get_ippre_bbd_rme(data)                           ((0x00000040&(data))>>6)
#define  KMC_BIST_BISR_KMC_RME_get_mc_fblvl_rme(data)                            ((0x00000020&(data))>>5)
#define  KMC_BIST_BISR_KMC_RME_get_mc_mv_info_rme(data)                          ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_RME_get_ipmc_rme(data)                                ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_RME_get_lbmc_lfl_rme(data)                            ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_RME_get_lbmc_lfh_rme(data)                            ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_RME_get_lbmc_hf_rme(data)                             (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_RM                                                   0x1809F158
#define  KMC_BIST_BISR_KMC_RM_reg_addr                                           "0xB809F158"
#define  KMC_BIST_BISR_KMC_RM_reg                                                0xB809F158
#define  KMC_BIST_BISR_KMC_RM_inst_addr                                          "0x001C"
#define  set_KMC_BIST_BISR_KMC_RM_reg(data)                                      (*((volatile unsigned int*)KMC_BIST_BISR_KMC_RM_reg)=data)
#define  get_KMC_BIST_BISR_KMC_RM_reg                                            (*((volatile unsigned int*)KMC_BIST_BISR_KMC_RM_reg))
#define  KMC_BIST_BISR_KMC_RM_mc_logo_rm_shift                                   (28)
#define  KMC_BIST_BISR_KMC_RM_ippre_bbd_rm_shift                                 (24)
#define  KMC_BIST_BISR_KMC_RM_mc_fblvl_rm_shift                                  (20)
#define  KMC_BIST_BISR_KMC_RM_mc_mv_info_rm_shift                                (16)
#define  KMC_BIST_BISR_KMC_RM_ipmc_rm_shift                                      (12)
#define  KMC_BIST_BISR_KMC_RM_lbmc_lfl_rm_shift                                  (8)
#define  KMC_BIST_BISR_KMC_RM_lbmc_lfh_rm_shift                                  (4)
#define  KMC_BIST_BISR_KMC_RM_lbmc_hf_rm_shift                                   (0)
#define  KMC_BIST_BISR_KMC_RM_mc_logo_rm_mask                                    (0xF0000000)
#define  KMC_BIST_BISR_KMC_RM_ippre_bbd_rm_mask                                  (0x0F000000)
#define  KMC_BIST_BISR_KMC_RM_mc_fblvl_rm_mask                                   (0x00F00000)
#define  KMC_BIST_BISR_KMC_RM_mc_mv_info_rm_mask                                 (0x000F0000)
#define  KMC_BIST_BISR_KMC_RM_ipmc_rm_mask                                       (0x0000F000)
#define  KMC_BIST_BISR_KMC_RM_lbmc_lfl_rm_mask                                   (0x00000F00)
#define  KMC_BIST_BISR_KMC_RM_lbmc_lfh_rm_mask                                   (0x000000F0)
#define  KMC_BIST_BISR_KMC_RM_lbmc_hf_rm_mask                                    (0x0000000F)
#define  KMC_BIST_BISR_KMC_RM_mc_logo_rm(data)                                   (0xF0000000&((data)<<28))
#define  KMC_BIST_BISR_KMC_RM_ippre_bbd_rm(data)                                 (0x0F000000&((data)<<24))
#define  KMC_BIST_BISR_KMC_RM_mc_fblvl_rm(data)                                  (0x00F00000&((data)<<20))
#define  KMC_BIST_BISR_KMC_RM_mc_mv_info_rm(data)                                (0x000F0000&((data)<<16))
#define  KMC_BIST_BISR_KMC_RM_ipmc_rm(data)                                      (0x0000F000&((data)<<12))
#define  KMC_BIST_BISR_KMC_RM_lbmc_lfl_rm(data)                                  (0x00000F00&((data)<<8))
#define  KMC_BIST_BISR_KMC_RM_lbmc_lfh_rm(data)                                  (0x000000F0&((data)<<4))
#define  KMC_BIST_BISR_KMC_RM_lbmc_hf_rm(data)                                   (0x0000000F&(data))
#define  KMC_BIST_BISR_KMC_RM_get_mc_logo_rm(data)                               ((0xF0000000&(data))>>28)
#define  KMC_BIST_BISR_KMC_RM_get_ippre_bbd_rm(data)                             ((0x0F000000&(data))>>24)
#define  KMC_BIST_BISR_KMC_RM_get_mc_fblvl_rm(data)                              ((0x00F00000&(data))>>20)
#define  KMC_BIST_BISR_KMC_RM_get_mc_mv_info_rm(data)                            ((0x000F0000&(data))>>16)
#define  KMC_BIST_BISR_KMC_RM_get_ipmc_rm(data)                                  ((0x0000F000&(data))>>12)
#define  KMC_BIST_BISR_KMC_RM_get_lbmc_lfl_rm(data)                              ((0x00000F00&(data))>>8)
#define  KMC_BIST_BISR_KMC_RM_get_lbmc_lfh_rm(data)                              ((0x000000F0&(data))>>4)
#define  KMC_BIST_BISR_KMC_RM_get_lbmc_hf_rm(data)                               (0x0000000F&(data))

#define  KMC_BIST_BISR_KMC_TEST1                                                0x1809F15C
#define  KMC_BIST_BISR_KMC_TEST1_reg_addr                                        "0xB809F15C"
#define  KMC_BIST_BISR_KMC_TEST1_reg                                             0xB809F15C
#define  KMC_BIST_BISR_KMC_TEST1_inst_addr                                       "0x001D"
#define  set_KMC_BIST_BISR_KMC_TEST1_reg(data)                                   (*((volatile unsigned int*)KMC_BIST_BISR_KMC_TEST1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_TEST1_reg                                         (*((volatile unsigned int*)KMC_BIST_BISR_KMC_TEST1_reg))
#define  KMC_BIST_BISR_KMC_TEST1_ippre_bbd_test1_shift                           (4)
#define  KMC_BIST_BISR_KMC_TEST1_ipmc_test1_shift                                (3)
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_lfl_test1_shift                            (2)
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_lfh_test1_shift                            (1)
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_hf_test1_shift                             (0)
#define  KMC_BIST_BISR_KMC_TEST1_ippre_bbd_test1_mask                            (0x00000010)
#define  KMC_BIST_BISR_KMC_TEST1_ipmc_test1_mask                                 (0x00000008)
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_lfl_test1_mask                             (0x00000004)
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_lfh_test1_mask                             (0x00000002)
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_hf_test1_mask                              (0x00000001)
#define  KMC_BIST_BISR_KMC_TEST1_ippre_bbd_test1(data)                           (0x00000010&((data)<<4))
#define  KMC_BIST_BISR_KMC_TEST1_ipmc_test1(data)                                (0x00000008&((data)<<3))
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_lfl_test1(data)                            (0x00000004&((data)<<2))
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_lfh_test1(data)                            (0x00000002&((data)<<1))
#define  KMC_BIST_BISR_KMC_TEST1_lbmc_hf_test1(data)                             (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_TEST1_get_ippre_bbd_test1(data)                       ((0x00000010&(data))>>4)
#define  KMC_BIST_BISR_KMC_TEST1_get_ipmc_test1(data)                            ((0x00000008&(data))>>3)
#define  KMC_BIST_BISR_KMC_TEST1_get_lbmc_lfl_test1(data)                        ((0x00000004&(data))>>2)
#define  KMC_BIST_BISR_KMC_TEST1_get_lbmc_lfh_test1(data)                        ((0x00000002&(data))>>1)
#define  KMC_BIST_BISR_KMC_TEST1_get_lbmc_hf_test1(data)                         (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_TESTRWM                                              0x1809F160
#define  KMC_BIST_BISR_KMC_TESTRWM_reg_addr                                      "0xB809F160"
#define  KMC_BIST_BISR_KMC_TESTRWM_reg                                           0xB809F160
#define  KMC_BIST_BISR_KMC_TESTRWM_inst_addr                                     "0x001E"
#define  set_KMC_BIST_BISR_KMC_TESTRWM_reg(data)                                 (*((volatile unsigned int*)KMC_BIST_BISR_KMC_TESTRWM_reg)=data)
#define  get_KMC_BIST_BISR_KMC_TESTRWM_reg                                       (*((volatile unsigned int*)KMC_BIST_BISR_KMC_TESTRWM_reg))
#define  KMC_BIST_BISR_KMC_TESTRWM_ipmc_testrwm_shift                            (0)
#define  KMC_BIST_BISR_KMC_TESTRWM_ipmc_testrwm_mask                             (0x00000001)
#define  KMC_BIST_BISR_KMC_TESTRWM_ipmc_testrwm(data)                            (0x00000001&(data))
#define  KMC_BIST_BISR_KMC_TESTRWM_get_ipmc_testrwm(data)                        (0x00000001&(data))

#define  KMC_BIST_BISR_KMC_BIST_FAIL_0                                          0x1809F164
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_reg_addr                                  "0xB809F164"
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_reg                                       0xB809F164
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_inst_addr                                 "0x001F"
#define  set_KMC_BIST_BISR_KMC_BIST_FAIL_0_reg(data)                             (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_0_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_FAIL_0_reg                                   (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_0_reg))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_blk_logo_i_drf_bist_fail_shift            (22)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_blk_logo_i_bist_fail_shift                (20)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_pxl_logo_i_drf_bist_fail_shift            (12)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_pxl_logo_i_bist_fail_shift                (4)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_ipmc_drf_bist_fail_shift                  (2)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_ipmc_bist_fail_shift                      (0)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_blk_logo_i_drf_bist_fail_mask             (0x00C00000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_blk_logo_i_bist_fail_mask                 (0x00300000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_pxl_logo_i_drf_bist_fail_mask             (0x000FF000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_pxl_logo_i_bist_fail_mask                 (0x00000FF0)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_ipmc_drf_bist_fail_mask                   (0x0000000C)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_ipmc_bist_fail_mask                       (0x00000003)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_blk_logo_i_drf_bist_fail(data)            (0x00C00000&((data)<<22))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_blk_logo_i_bist_fail(data)                (0x00300000&((data)<<20))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_pxl_logo_i_drf_bist_fail(data)            (0x000FF000&((data)<<12))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_pxl_logo_i_bist_fail(data)                (0x00000FF0&((data)<<4))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_ipmc_drf_bist_fail(data)                  (0x0000000C&((data)<<2))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_ipmc_bist_fail(data)                      (0x00000003&(data))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_get_blk_logo_i_drf_bist_fail(data)        ((0x00C00000&(data))>>22)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_get_blk_logo_i_bist_fail(data)            ((0x00300000&(data))>>20)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_get_pxl_logo_i_drf_bist_fail(data)        ((0x000FF000&(data))>>12)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_get_pxl_logo_i_bist_fail(data)            ((0x00000FF0&(data))>>4)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_get_ipmc_drf_bist_fail(data)              ((0x0000000C&(data))>>2)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_0_get_ipmc_bist_fail(data)                  (0x00000003&(data))

#define  KMC_BIST_BISR_KMC_BIST_FAIL_1                                          0x1809F168
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_reg_addr                                  "0xB809F168"
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_reg                                       0xB809F168
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_inst_addr                                 "0x0020"
#define  set_KMC_BIST_BISR_KMC_BIST_FAIL_1_reg(data)                             (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_1_reg)=data)
#define  get_KMC_BIST_BISR_KMC_BIST_FAIL_1_reg                                   (*((volatile unsigned int*)KMC_BIST_BISR_KMC_BIST_FAIL_1_reg))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_blkeros_logo_i_drf_bist_fail_shift        (16)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_blkeros_logo_i_bist_fail_shift            (8)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_mc_mv_info_drf_bist_fail_shift            (4)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_mc_mv_info_bist_fail_shift                (0)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_blkeros_logo_i_drf_bist_fail_mask         (0x00FF0000)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_blkeros_logo_i_bist_fail_mask             (0x0000FF00)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_mc_mv_info_drf_bist_fail_mask             (0x000000F0)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_mc_mv_info_bist_fail_mask                 (0x0000000F)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_blkeros_logo_i_drf_bist_fail(data)        (0x00FF0000&((data)<<16))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_blkeros_logo_i_bist_fail(data)            (0x0000FF00&((data)<<8))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_mc_mv_info_drf_bist_fail(data)            (0x000000F0&((data)<<4))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_mc_mv_info_bist_fail(data)                (0x0000000F&(data))
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_get_blkeros_logo_i_drf_bist_fail(data)    ((0x00FF0000&(data))>>16)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_get_blkeros_logo_i_bist_fail(data)        ((0x0000FF00&(data))>>8)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_get_mc_mv_info_drf_bist_fail(data)        ((0x000000F0&(data))>>4)
#define  KMC_BIST_BISR_KMC_BIST_FAIL_1_get_mc_mv_info_bist_fail(data)            (0x0000000F&(data))

#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0                                          0x1809F190
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_reg_addr                                  "0xB809F190"
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_reg                                       0xB809F190
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_inst_addr                                 "0x0021"
#define  set_KMC_BIST_BISR_LBMC_LFL_FAIL_0_reg(data)                             (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_FAIL_0_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_LFL_FAIL_0_reg                                   (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_FAIL_0_reg))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_3_shift         (24)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_2_shift         (16)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_1_shift         (8)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_0_shift         (0)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_3_mask          (0x3F000000)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_2_mask          (0x003F0000)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_1_mask          (0x00003F00)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_0_mask          (0x0000003F)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_3(data)         (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_2(data)         (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_1(data)         (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_lbmc_bist_lfl_fail_single_0(data)         (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_get_lbmc_bist_lfl_fail_single_3(data)     ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_get_lbmc_bist_lfl_fail_single_2(data)     ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_get_lbmc_bist_lfl_fail_single_1(data)     ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_0_get_lbmc_bist_lfl_fail_single_0(data)     (0x0000003F&(data))

#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1                                          0x1809F194
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_reg_addr                                  "0xB809F194"
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_reg                                       0xB809F194
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_inst_addr                                 "0x0022"
#define  set_KMC_BIST_BISR_LBMC_LFL_FAIL_1_reg(data)                             (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_FAIL_1_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_LFL_FAIL_1_reg                                   (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_FAIL_1_reg))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_7_shift         (24)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_6_shift         (16)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_5_shift         (8)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_4_shift         (0)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_7_mask          (0x3F000000)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_6_mask          (0x003F0000)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_5_mask          (0x00003F00)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_4_mask          (0x0000003F)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_7(data)         (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_6(data)         (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_5(data)         (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_lbmc_bist_lfl_fail_single_4(data)         (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_get_lbmc_bist_lfl_fail_single_7(data)     ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_get_lbmc_bist_lfl_fail_single_6(data)     ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_get_lbmc_bist_lfl_fail_single_5(data)     ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_LFL_FAIL_1_get_lbmc_bist_lfl_fail_single_4(data)     (0x0000003F&(data))

#define  KMC_BIST_BISR_LBMC_HF_FAIL_0                                           0x1809F198
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_reg_addr                                   "0xB809F198"
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_reg                                        0xB809F198
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_inst_addr                                  "0x0023"
#define  set_KMC_BIST_BISR_LBMC_HF_FAIL_0_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_FAIL_0_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_HF_FAIL_0_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_FAIL_0_reg))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_3_shift           (24)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_2_shift           (16)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_1_shift           (8)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_0_shift           (0)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_3_mask            (0x3F000000)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_2_mask            (0x003F0000)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_1_mask            (0x00003F00)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_0_mask            (0x0000003F)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_3(data)           (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_2(data)           (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_1(data)           (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_lbmc_bist_hf_fail_single_0(data)           (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_get_lbmc_bist_hf_fail_single_3(data)       ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_get_lbmc_bist_hf_fail_single_2(data)       ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_get_lbmc_bist_hf_fail_single_1(data)       ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_0_get_lbmc_bist_hf_fail_single_0(data)       (0x0000003F&(data))

#define  KMC_BIST_BISR_LBMC_HF_FAIL_1                                           0x1809F19C
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_reg_addr                                   "0xB809F19C"
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_reg                                        0xB809F19C
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_inst_addr                                  "0x0024"
#define  set_KMC_BIST_BISR_LBMC_HF_FAIL_1_reg(data)                              (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_FAIL_1_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_HF_FAIL_1_reg                                    (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_FAIL_1_reg))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_7_shift           (24)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_6_shift           (16)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_5_shift           (8)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_4_shift           (0)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_7_mask            (0x3F000000)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_6_mask            (0x003F0000)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_5_mask            (0x00003F00)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_4_mask            (0x0000003F)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_7(data)           (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_6(data)           (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_5(data)           (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_lbmc_bist_hf_fail_single_4(data)           (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_get_lbmc_bist_hf_fail_single_7(data)       ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_get_lbmc_bist_hf_fail_single_6(data)       ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_get_lbmc_bist_hf_fail_single_5(data)       ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_HF_FAIL_1_get_lbmc_bist_hf_fail_single_4(data)       (0x0000003F&(data))

#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0                                 0x1809F1A0
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_reg_addr                         "0xB809F1A0"
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_reg                              0xB809F1A0
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_inst_addr                        "0x0025"
#define  set_KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_reg(data)                    (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_reg                          (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_reg))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_3_shift (24)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_2_shift (16)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_1_shift (8)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_0_shift (0)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_3_mask (0x3F000000)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_2_mask (0x003F0000)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_1_mask (0x00003F00)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_0_mask (0x0000003F)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_3(data) (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_2(data) (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_1(data) (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_lbmc_drf_bist_lfl_fail_single_0(data) (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_get_lbmc_drf_bist_lfl_fail_single_3(data) ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_get_lbmc_drf_bist_lfl_fail_single_2(data) ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_get_lbmc_drf_bist_lfl_fail_single_1(data) ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_0_get_lbmc_drf_bist_lfl_fail_single_0(data) (0x0000003F&(data))

#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1                                 0x1809F1A4
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_reg_addr                         "0xB809F1A4"
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_reg                              0xB809F1A4
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_inst_addr                        "0x0026"
#define  set_KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_reg(data)                    (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_reg                          (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_reg))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_7_shift (24)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_6_shift (16)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_5_shift (8)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_4_shift (0)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_7_mask (0x3F000000)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_6_mask (0x003F0000)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_5_mask (0x00003F00)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_4_mask (0x0000003F)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_7(data) (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_6(data) (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_5(data) (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_lbmc_drf_bist_lfl_fail_single_4(data) (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_get_lbmc_drf_bist_lfl_fail_single_7(data) ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_get_lbmc_drf_bist_lfl_fail_single_6(data) ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_get_lbmc_drf_bist_lfl_fail_single_5(data) ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_LFL_DRF_BIST_FAIL_1_get_lbmc_drf_bist_lfl_fail_single_4(data) (0x0000003F&(data))

#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0                                  0x1809F1A8
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_reg_addr                          "0xB809F1A8"
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_reg                               0xB809F1A8
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_inst_addr                         "0x0027"
#define  set_KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_reg(data)                     (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_reg                           (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_reg))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_3_shift (24)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_2_shift (16)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_1_shift (8)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_0_shift (0)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_3_mask (0x3F000000)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_2_mask (0x003F0000)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_1_mask (0x00003F00)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_0_mask (0x0000003F)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_3(data) (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_2(data) (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_1(data) (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_lbmc_drf_bist_hf_fail_single_0(data) (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_get_lbmc_drf_bist_hf_fail_single_3(data) ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_get_lbmc_drf_bist_hf_fail_single_2(data) ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_get_lbmc_drf_bist_hf_fail_single_1(data) ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_0_get_lbmc_drf_bist_hf_fail_single_0(data) (0x0000003F&(data))

#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1                                  0x1809F1AC
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_reg_addr                          "0xB809F1AC"
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_reg                               0xB809F1AC
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_inst_addr                         "0x0028"
#define  set_KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_reg(data)                     (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_reg)=data)
#define  get_KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_reg                           (*((volatile unsigned int*)KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_reg))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_7_shift (24)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_6_shift (16)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_5_shift (8)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_4_shift (0)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_7_mask (0x3F000000)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_6_mask (0x003F0000)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_5_mask (0x00003F00)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_4_mask (0x0000003F)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_7(data) (0x3F000000&((data)<<24))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_6(data) (0x003F0000&((data)<<16))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_5(data) (0x00003F00&((data)<<8))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_lbmc_drf_bist_hf_fail_single_4(data) (0x0000003F&(data))
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_get_lbmc_drf_bist_hf_fail_single_7(data) ((0x3F000000&(data))>>24)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_get_lbmc_drf_bist_hf_fail_single_6(data) ((0x003F0000&(data))>>16)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_get_lbmc_drf_bist_hf_fail_single_5(data) ((0x00003F00&(data))>>8)
#define  KMC_BIST_BISR_LBMC_HF_DRF_BIST_FAIL_1_get_lbmc_drf_bist_hf_fail_single_4(data) (0x0000003F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KMC_BIST_BISR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_bist_mode:1;
        RBus_UInt32  lfp_pqdc1_bist_mode:1;
        RBus_UInt32  lfp_pqdc2_bist_mode:1;
        RBus_UInt32  hfi_pqdc2_bist_mode:1;
        RBus_UInt32  lfi_pqdc1_bist_mode:1;
        RBus_UInt32  lfi_pqdc2_bist_mode:1;
        RBus_UInt32  lf_pqc1_bist_mode:1;
        RBus_UInt32  lf_pqc2_bist_mode:1;
        RBus_UInt32  hf_pqc2_bist_mode:1;
        RBus_UInt32  kmc_rdma_bist_mode:1;
        RBus_UInt32  kmc_wdma_bist_mode:1;
        RBus_UInt32  ipmc_bist_mode:1;
        RBus_UInt32  mc_mv_info_bist_mode:1;
        RBus_UInt32  lbmc_hf_bist_mode_7:1;
        RBus_UInt32  lbmc_hf_bist_mode_6:1;
        RBus_UInt32  lbmc_hf_bist_mode_5:1;
        RBus_UInt32  lbmc_hf_bist_mode_4:1;
        RBus_UInt32  lbmc_hf_bist_mode_3:1;
        RBus_UInt32  lbmc_hf_bist_mode_2:1;
        RBus_UInt32  lbmc_hf_bist_mode_1:1;
        RBus_UInt32  lbmc_hf_bist_mode_0:1;
    };
}kmc_bist_bisr_kmc_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_bist_done:1;
        RBus_UInt32  lfp_pqdc1_bist_done:1;
        RBus_UInt32  lfp_pqdc2_bist_done:1;
        RBus_UInt32  hfi_pqdc2_bist_done:1;
        RBus_UInt32  lfi_pqdc1_bist_done:1;
        RBus_UInt32  lfi_pqdc2_bist_done:1;
        RBus_UInt32  lf_pqc1_bist_done:1;
        RBus_UInt32  lf_pqc2_bist_done:1;
        RBus_UInt32  hf_pqc2_bist_done:1;
        RBus_UInt32  kmc_rdma_bist_done:1;
        RBus_UInt32  kmc_wdma_bist_done:1;
        RBus_UInt32  ipmc_bist_done:1;
        RBus_UInt32  mc_mv_info_bist_done:1;
        RBus_UInt32  lbmc_hf_bist_done_7:1;
        RBus_UInt32  lbmc_hf_bist_done_6:1;
        RBus_UInt32  lbmc_hf_bist_done_5:1;
        RBus_UInt32  lbmc_hf_bist_done_4:1;
        RBus_UInt32  lbmc_hf_bist_done_3:1;
        RBus_UInt32  lbmc_hf_bist_done_2:1;
        RBus_UInt32  lbmc_hf_bist_done_1:1;
        RBus_UInt32  lbmc_hf_bist_done_0:1;
    };
}kmc_bist_bisr_kmc_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_bist_fail_group:1;
        RBus_UInt32  lfp_pqdc1_bist_fail_group:1;
        RBus_UInt32  lfp_pqdc2_bist_fail_group:1;
        RBus_UInt32  hfi_pqdc2_bist_fail_group:1;
        RBus_UInt32  lfi_pqdc1_bist_fail_group:1;
        RBus_UInt32  lfi_pqdc2_bist_fail_group:1;
        RBus_UInt32  lf_pqc1_bist_fail_group:1;
        RBus_UInt32  lf_pqc2_bist_fail_group:1;
        RBus_UInt32  hf_pqc2_bist_fail_group:1;
        RBus_UInt32  kmc_rdma_bist_fail_group:1;
        RBus_UInt32  kmc_wdma_bist_fail_group:1;
        RBus_UInt32  ipmc_bist_fail_group:1;
        RBus_UInt32  mc_mv_info_bist_fail_group:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_7:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_6:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_5:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_4:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_3:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_2:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_1:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_0:1;
    };
}kmc_bist_bisr_kmc_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_mbist_mode:1;
        RBus_UInt32  blkeros_logo_i_mbist_mode:1;
        RBus_UInt32  blk_logo_i_mbist_mode:1;
        RBus_UInt32  ippre_bbd_bist_mode:1;
    };
}kmc_bist_bisr_kmc_bist_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_bist_done:1;
        RBus_UInt32  blkeros_logo_i_bist_done:1;
        RBus_UInt32  blk_logo_i_bist_done:1;
        RBus_UInt32  ippre_bbd_bist_done:1;
    };
}kmc_bist_bisr_kmc_bist_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_bist_fail_group:1;
        RBus_UInt32  blkeros_logo_i_bist_fail_group:1;
        RBus_UInt32  blk_logo_i_bist_fail_group:1;
        RBus_UInt32  ippre_bbd_bist_fail_group:1;
    };
}kmc_bist_bisr_kmc_bist_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_drf_mode:1;
        RBus_UInt32  lfp_pqdc1_drf_mode:1;
        RBus_UInt32  lfp_pqdc2_drf_mode:1;
        RBus_UInt32  hfi_pqdc2_drf_mode:1;
        RBus_UInt32  lfi_pqdc1_drf_mode:1;
        RBus_UInt32  lfi_pqdc2_drf_mode:1;
        RBus_UInt32  lf_pqc1_drf_mode:1;
        RBus_UInt32  lf_pqc2_drf_mode:1;
        RBus_UInt32  hf_pqc2_drf_mode:1;
        RBus_UInt32  kmc_rdma_drf_mode:1;
        RBus_UInt32  kmc_wdma_drf_mode:1;
        RBus_UInt32  ipmc_drf_bist_mode:1;
        RBus_UInt32  mc_mv_info_drf_bist_mode:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_7:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_6:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_5:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_4:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_3:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_2:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_1:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_0:1;
    };
}kmc_bist_bisr_kmc_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_drf_test_resume:1;
        RBus_UInt32  lfp_pqdc1_drf_test_resume:1;
        RBus_UInt32  lfp_pqdc2_drf_test_resume:1;
        RBus_UInt32  hfi_pqdc2_drf_test_resume:1;
        RBus_UInt32  lfi_pqdc1_drf_test_resume:1;
        RBus_UInt32  lfi_pqdc2_drf_test_resume:1;
        RBus_UInt32  lf_pqc1_drf_test_resume:1;
        RBus_UInt32  lf_pqc2_drf_test_resume:1;
        RBus_UInt32  hf_pqc2_drf_test_resume:1;
        RBus_UInt32  kmc_rdma_drf_test_resume:1;
        RBus_UInt32  kmc_wdma_drf_test_resume:1;
        RBus_UInt32  ipmc_drf_test_resume:1;
        RBus_UInt32  mc_mv_info_drf_test_resume:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_7:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_6:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_5:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_4:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_3:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_2:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_1:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_0:1;
    };
}kmc_bist_bisr_kmc_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_drf_done:1;
        RBus_UInt32  lfp_pqdc1_drf_done:1;
        RBus_UInt32  lfp_pqdc2_drf_done:1;
        RBus_UInt32  hfi_pqdc2_drf_done:1;
        RBus_UInt32  lfi_pqdc1_drf_done:1;
        RBus_UInt32  lfi_pqdc2_drf_done:1;
        RBus_UInt32  lf_pqc1_drf_done:1;
        RBus_UInt32  lf_pqc2_drf_done:1;
        RBus_UInt32  hf_pqc2_drf_done:1;
        RBus_UInt32  kmc_rdma_drf_done:1;
        RBus_UInt32  kmc_wdma_drf_done:1;
        RBus_UInt32  ipmc_drf_bist_done:1;
        RBus_UInt32  mc_mv_info_drf_bist_done:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_7:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_6:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_5:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_4:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_3:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_2:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_1:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_0:1;
    };
}kmc_bist_bisr_kmc_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_drf_start_pause:1;
        RBus_UInt32  lfp_pqdc1_drf_start_pause:1;
        RBus_UInt32  lfp_pqdc2_drf_start_pause:1;
        RBus_UInt32  hfi_pqdc2_drf_start_pause:1;
        RBus_UInt32  lfi_pqdc1_drf_start_pause:1;
        RBus_UInt32  lfi_pqdc2_drf_start_pause:1;
        RBus_UInt32  lf_pqc1_drf_start_pause:1;
        RBus_UInt32  lf_pqc2_drf_start_pause:1;
        RBus_UInt32  hf_pqc2_drf_start_pause:1;
        RBus_UInt32  kmc_rdma_drf_start_pause:1;
        RBus_UInt32  kmc_wdma_drf_start_pause:1;
        RBus_UInt32  ipmc_drf_start_pause:1;
        RBus_UInt32  mc_mv_info_drf_start_pause:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_7:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_6:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_5:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_4:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_3:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_2:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_1:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_0:1;
    };
}kmc_bist_bisr_kmc_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  hfp_pqdc2_drf_fail_group:1;
        RBus_UInt32  lfp_pqdc1_drf_fail_group:1;
        RBus_UInt32  lfp_pqdc2_drf_fail_group:1;
        RBus_UInt32  hfi_pqdc2_drf_fail_group:1;
        RBus_UInt32  lfi_pqdc1_drf_fail_group:1;
        RBus_UInt32  lfi_pqdc2_drf_fail_group:1;
        RBus_UInt32  lf_pqc1_drf_fail_group:1;
        RBus_UInt32  lf_pqc2_drf_fail_group:1;
        RBus_UInt32  hf_pqc2_drf_fail_group:1;
        RBus_UInt32  kmc_rdma_drf_fail_group:1;
        RBus_UInt32  kmc_wdma_drf_fail_group:1;
        RBus_UInt32  ipmc_drf_bist_fail_group:1;
        RBus_UInt32  mc_mv_info_drf_bist_fail_group:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_7:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_6:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_5:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_4:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_3:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_2:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_1:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_0:1;
    };
}kmc_bist_bisr_kmc_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_drf_mbist_mode:1;
        RBus_UInt32  blkeros_logo_i_drf_mbist_mode:1;
        RBus_UInt32  blk_logo_i_drf_mbist_mode:1;
        RBus_UInt32  ippre_bbd_drf_bist_mode:1;
    };
}kmc_bist_bisr_kmc_drf_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_drf_test_resume:1;
        RBus_UInt32  blkeros_logo_i_drf_test_resume:1;
        RBus_UInt32  blk_logo_i_drf_test_resume:1;
        RBus_UInt32  ippre_bbd_drf_test_resume:1;
    };
}kmc_bist_bisr_kmc_drf_resume1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_drf_bist_done:1;
        RBus_UInt32  blkeros_logo_i_drf_bist_done:1;
        RBus_UInt32  blk_logo_i_drf_bist_done:1;
        RBus_UInt32  ippre_bbd_drf_bist_done:1;
    };
}kmc_bist_bisr_kmc_drf_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_drf_start_pause:1;
        RBus_UInt32  blkeros_logo_i_drf_start_pause:1;
        RBus_UInt32  blk_logo_i_drf_start_pause:1;
        RBus_UInt32  ippre_bbd_drf_start_pause:1;
    };
}kmc_bist_bisr_kmc_drf_pause1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  pxl_logo_i_drf_bist_fail_group:1;
        RBus_UInt32  blkeros_logo_i_drf_bist_fail_group:1;
        RBus_UInt32  blk_logo_i_drf_bist_fail_group:1;
        RBus_UInt32  ippre_bbd_drf_bist_fail_group:1;
    };
}kmc_bist_bisr_kmc_drf_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_second_run_en_7:1;
        RBus_UInt32  lbmc_lfl_second_run_en_6:1;
        RBus_UInt32  lbmc_lfl_second_run_en_5:1;
        RBus_UInt32  lbmc_lfl_second_run_en_4:1;
        RBus_UInt32  lbmc_lfl_second_run_en_3:1;
        RBus_UInt32  lbmc_lfl_second_run_en_2:1;
        RBus_UInt32  lbmc_lfl_second_run_en_1:1;
        RBus_UInt32  lbmc_lfl_second_run_en_0:1;
    };
}kmc_bist_bisr_kmc_bisr_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_7:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_6:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_5:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_4:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_3:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_2:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_1:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_0:1;
    };
}kmc_bist_bisr_kmc_bisr_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_7:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_6:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_5:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_4:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_3:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_2:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_1:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_0:1;
    };
}kmc_bist_bisr_kmc_bisr_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_drf_test_resume_7:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_6:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_5:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_4:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_3:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_2:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_1:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_0:1;
    };
}kmc_bist_bisr_kmc_bisr_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_7:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_6:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_5:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_4:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_3:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_2:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_1:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_0:1;
    };
}kmc_bist_bisr_kmc_bisr_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_drf_start_pause_7:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_6:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_5:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_4:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_3:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_2:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_1:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_0:1;
    };
}kmc_bist_bisr_kmc_bisr_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_7:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_6:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_5:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_4:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_3:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_2:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_1:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_0:1;
    };
}kmc_bist_bisr_kmc_bisr_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  lbmc_lfl_bisr_repaired_7:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_6:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_5:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_4:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_3:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_2:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_1:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_0:1;
    };
}kmc_bist_bisr_kmc_bisr_repaired_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_lfl_bisr_out_7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_lfl_bisr_out_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_lfl_bisr_out_5:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_lfl_bisr_out_4:6;
    };
}kmc_bist_bisr_kmc_bisr_out_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_lfl_bisr_out_3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_lfl_bisr_out_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_lfl_bisr_out_1:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_lfl_bisr_out_0:6;
    };
}kmc_bist_bisr_kmc_bisr_out_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ippre_bbd_ls:1;
        RBus_UInt32  ipmc_ls:1;
        RBus_UInt32  lbmc_lfl_ls:1;
        RBus_UInt32  lbmc_lfh_ls:1;
        RBus_UInt32  lbmc_hf_ls:1;
    };
}kmc_bist_bisr_kmc_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  mc_logo_rme:1;
        RBus_UInt32  ippre_bbd_rme:1;
        RBus_UInt32  mc_fblvl_rme:1;
        RBus_UInt32  mc_mv_info_rme:1;
        RBus_UInt32  ipmc_rme:1;
        RBus_UInt32  lbmc_lfl_rme:1;
        RBus_UInt32  lbmc_lfh_rme:1;
        RBus_UInt32  lbmc_hf_rme:1;
    };
}kmc_bist_bisr_kmc_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_logo_rm:4;
        RBus_UInt32  ippre_bbd_rm:4;
        RBus_UInt32  mc_fblvl_rm:4;
        RBus_UInt32  mc_mv_info_rm:4;
        RBus_UInt32  ipmc_rm:4;
        RBus_UInt32  lbmc_lfl_rm:4;
        RBus_UInt32  lbmc_lfh_rm:4;
        RBus_UInt32  lbmc_hf_rm:4;
    };
}kmc_bist_bisr_kmc_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  ippre_bbd_test1:1;
        RBus_UInt32  ipmc_test1:1;
        RBus_UInt32  lbmc_lfl_test1:1;
        RBus_UInt32  lbmc_lfh_test1:1;
        RBus_UInt32  lbmc_hf_test1:1;
    };
}kmc_bist_bisr_kmc_test1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ipmc_testrwm:1;
    };
}kmc_bist_bisr_kmc_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  blk_logo_i_drf_bist_fail:2;
        RBus_UInt32  blk_logo_i_bist_fail:2;
        RBus_UInt32  pxl_logo_i_drf_bist_fail:8;
        RBus_UInt32  pxl_logo_i_bist_fail:8;
        RBus_UInt32  ipmc_drf_bist_fail:2;
        RBus_UInt32  ipmc_bist_fail:2;
    };
}kmc_bist_bisr_kmc_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  blkeros_logo_i_drf_bist_fail:8;
        RBus_UInt32  blkeros_logo_i_bist_fail:8;
        RBus_UInt32  mc_mv_info_drf_bist_fail:4;
        RBus_UInt32  mc_mv_info_bist_fail:4;
    };
}kmc_bist_bisr_kmc_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_1:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_0:6;
    };
}kmc_bist_bisr_lbmc_lfl_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_5:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_4:6;
    };
}kmc_bist_bisr_lbmc_lfl_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_1:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_0:6;
    };
}kmc_bist_bisr_lbmc_hf_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_5:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_4:6;
    };
}kmc_bist_bisr_lbmc_hf_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_1:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_0:6;
    };
}kmc_bist_bisr_lbmc_lfl_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_5:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_4:6;
    };
}kmc_bist_bisr_lbmc_lfl_drf_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_3:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_1:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_0:6;
    };
}kmc_bist_bisr_lbmc_hf_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_7:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_5:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_4:6;
    };
}kmc_bist_bisr_lbmc_hf_drf_bist_fail_1_RBUS;

#else //apply LITTLE_ENDIAN

//======KMC_BIST_BISR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_bist_mode_0:1;
        RBus_UInt32  lbmc_hf_bist_mode_1:1;
        RBus_UInt32  lbmc_hf_bist_mode_2:1;
        RBus_UInt32  lbmc_hf_bist_mode_3:1;
        RBus_UInt32  lbmc_hf_bist_mode_4:1;
        RBus_UInt32  lbmc_hf_bist_mode_5:1;
        RBus_UInt32  lbmc_hf_bist_mode_6:1;
        RBus_UInt32  lbmc_hf_bist_mode_7:1;
        RBus_UInt32  mc_mv_info_bist_mode:1;
        RBus_UInt32  ipmc_bist_mode:1;
        RBus_UInt32  kmc_wdma_bist_mode:1;
        RBus_UInt32  kmc_rdma_bist_mode:1;
        RBus_UInt32  hf_pqc2_bist_mode:1;
        RBus_UInt32  lf_pqc2_bist_mode:1;
        RBus_UInt32  lf_pqc1_bist_mode:1;
        RBus_UInt32  lfi_pqdc2_bist_mode:1;
        RBus_UInt32  lfi_pqdc1_bist_mode:1;
        RBus_UInt32  hfi_pqdc2_bist_mode:1;
        RBus_UInt32  lfp_pqdc2_bist_mode:1;
        RBus_UInt32  lfp_pqdc1_bist_mode:1;
        RBus_UInt32  hfp_pqdc2_bist_mode:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_bist_done_0:1;
        RBus_UInt32  lbmc_hf_bist_done_1:1;
        RBus_UInt32  lbmc_hf_bist_done_2:1;
        RBus_UInt32  lbmc_hf_bist_done_3:1;
        RBus_UInt32  lbmc_hf_bist_done_4:1;
        RBus_UInt32  lbmc_hf_bist_done_5:1;
        RBus_UInt32  lbmc_hf_bist_done_6:1;
        RBus_UInt32  lbmc_hf_bist_done_7:1;
        RBus_UInt32  mc_mv_info_bist_done:1;
        RBus_UInt32  ipmc_bist_done:1;
        RBus_UInt32  kmc_wdma_bist_done:1;
        RBus_UInt32  kmc_rdma_bist_done:1;
        RBus_UInt32  hf_pqc2_bist_done:1;
        RBus_UInt32  lf_pqc2_bist_done:1;
        RBus_UInt32  lf_pqc1_bist_done:1;
        RBus_UInt32  lfi_pqdc2_bist_done:1;
        RBus_UInt32  lfi_pqdc1_bist_done:1;
        RBus_UInt32  hfi_pqdc2_bist_done:1;
        RBus_UInt32  lfp_pqdc2_bist_done:1;
        RBus_UInt32  lfp_pqdc1_bist_done:1;
        RBus_UInt32  hfp_pqdc2_bist_done:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_bist_fail_group_0:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_1:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_2:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_3:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_4:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_5:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_6:1;
        RBus_UInt32  lbmc_hf_bist_fail_group_7:1;
        RBus_UInt32  mc_mv_info_bist_fail_group:1;
        RBus_UInt32  ipmc_bist_fail_group:1;
        RBus_UInt32  kmc_wdma_bist_fail_group:1;
        RBus_UInt32  kmc_rdma_bist_fail_group:1;
        RBus_UInt32  hf_pqc2_bist_fail_group:1;
        RBus_UInt32  lf_pqc2_bist_fail_group:1;
        RBus_UInt32  lf_pqc1_bist_fail_group:1;
        RBus_UInt32  lfi_pqdc2_bist_fail_group:1;
        RBus_UInt32  lfi_pqdc1_bist_fail_group:1;
        RBus_UInt32  hfi_pqdc2_bist_fail_group:1;
        RBus_UInt32  lfp_pqdc2_bist_fail_group:1;
        RBus_UInt32  lfp_pqdc1_bist_fail_group:1;
        RBus_UInt32  hfp_pqdc2_bist_fail_group:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_bist_mode:1;
        RBus_UInt32  blk_logo_i_mbist_mode:1;
        RBus_UInt32  blkeros_logo_i_mbist_mode:1;
        RBus_UInt32  pxl_logo_i_mbist_mode:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_bist_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_bist_done:1;
        RBus_UInt32  blk_logo_i_bist_done:1;
        RBus_UInt32  blkeros_logo_i_bist_done:1;
        RBus_UInt32  pxl_logo_i_bist_done:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_bist_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_bist_fail_group:1;
        RBus_UInt32  blk_logo_i_bist_fail_group:1;
        RBus_UInt32  blkeros_logo_i_bist_fail_group:1;
        RBus_UInt32  pxl_logo_i_bist_fail_group:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_bist_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_drf_bist_mode_0:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_1:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_2:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_3:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_4:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_5:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_6:1;
        RBus_UInt32  lbmc_hf_drf_bist_mode_7:1;
        RBus_UInt32  mc_mv_info_drf_bist_mode:1;
        RBus_UInt32  ipmc_drf_bist_mode:1;
        RBus_UInt32  kmc_wdma_drf_mode:1;
        RBus_UInt32  kmc_rdma_drf_mode:1;
        RBus_UInt32  hf_pqc2_drf_mode:1;
        RBus_UInt32  lf_pqc2_drf_mode:1;
        RBus_UInt32  lf_pqc1_drf_mode:1;
        RBus_UInt32  lfi_pqdc2_drf_mode:1;
        RBus_UInt32  lfi_pqdc1_drf_mode:1;
        RBus_UInt32  hfi_pqdc2_drf_mode:1;
        RBus_UInt32  lfp_pqdc2_drf_mode:1;
        RBus_UInt32  lfp_pqdc1_drf_mode:1;
        RBus_UInt32  hfp_pqdc2_drf_mode:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_drf_test_resume_0:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_1:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_2:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_3:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_4:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_5:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_6:1;
        RBus_UInt32  lbmc_hf_drf_test_resume_7:1;
        RBus_UInt32  mc_mv_info_drf_test_resume:1;
        RBus_UInt32  ipmc_drf_test_resume:1;
        RBus_UInt32  kmc_wdma_drf_test_resume:1;
        RBus_UInt32  kmc_rdma_drf_test_resume:1;
        RBus_UInt32  hf_pqc2_drf_test_resume:1;
        RBus_UInt32  lf_pqc2_drf_test_resume:1;
        RBus_UInt32  lf_pqc1_drf_test_resume:1;
        RBus_UInt32  lfi_pqdc2_drf_test_resume:1;
        RBus_UInt32  lfi_pqdc1_drf_test_resume:1;
        RBus_UInt32  hfi_pqdc2_drf_test_resume:1;
        RBus_UInt32  lfp_pqdc2_drf_test_resume:1;
        RBus_UInt32  lfp_pqdc1_drf_test_resume:1;
        RBus_UInt32  hfp_pqdc2_drf_test_resume:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_drf_bist_done_0:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_1:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_2:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_3:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_4:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_5:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_6:1;
        RBus_UInt32  lbmc_hf_drf_bist_done_7:1;
        RBus_UInt32  mc_mv_info_drf_bist_done:1;
        RBus_UInt32  ipmc_drf_bist_done:1;
        RBus_UInt32  kmc_wdma_drf_done:1;
        RBus_UInt32  kmc_rdma_drf_done:1;
        RBus_UInt32  hf_pqc2_drf_done:1;
        RBus_UInt32  lf_pqc2_drf_done:1;
        RBus_UInt32  lf_pqc1_drf_done:1;
        RBus_UInt32  lfi_pqdc2_drf_done:1;
        RBus_UInt32  lfi_pqdc1_drf_done:1;
        RBus_UInt32  hfi_pqdc2_drf_done:1;
        RBus_UInt32  lfp_pqdc2_drf_done:1;
        RBus_UInt32  lfp_pqdc1_drf_done:1;
        RBus_UInt32  hfp_pqdc2_drf_done:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_drf_start_pause_0:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_1:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_2:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_3:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_4:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_5:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_6:1;
        RBus_UInt32  lbmc_hf_drf_start_pause_7:1;
        RBus_UInt32  mc_mv_info_drf_start_pause:1;
        RBus_UInt32  ipmc_drf_start_pause:1;
        RBus_UInt32  kmc_wdma_drf_start_pause:1;
        RBus_UInt32  kmc_rdma_drf_start_pause:1;
        RBus_UInt32  hf_pqc2_drf_start_pause:1;
        RBus_UInt32  lf_pqc2_drf_start_pause:1;
        RBus_UInt32  lf_pqc1_drf_start_pause:1;
        RBus_UInt32  lfi_pqdc2_drf_start_pause:1;
        RBus_UInt32  lfi_pqdc1_drf_start_pause:1;
        RBus_UInt32  hfi_pqdc2_drf_start_pause:1;
        RBus_UInt32  lfp_pqdc2_drf_start_pause:1;
        RBus_UInt32  lfp_pqdc1_drf_start_pause:1;
        RBus_UInt32  hfp_pqdc2_drf_start_pause:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_0:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_1:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_2:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_3:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_4:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_5:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_6:1;
        RBus_UInt32  lbmc_hf_drf_bist_fail_group_7:1;
        RBus_UInt32  mc_mv_info_drf_bist_fail_group:1;
        RBus_UInt32  ipmc_drf_bist_fail_group:1;
        RBus_UInt32  kmc_wdma_drf_fail_group:1;
        RBus_UInt32  kmc_rdma_drf_fail_group:1;
        RBus_UInt32  hf_pqc2_drf_fail_group:1;
        RBus_UInt32  lf_pqc2_drf_fail_group:1;
        RBus_UInt32  lf_pqc1_drf_fail_group:1;
        RBus_UInt32  lfi_pqdc2_drf_fail_group:1;
        RBus_UInt32  lfi_pqdc1_drf_fail_group:1;
        RBus_UInt32  hfi_pqdc2_drf_fail_group:1;
        RBus_UInt32  lfp_pqdc2_drf_fail_group:1;
        RBus_UInt32  lfp_pqdc1_drf_fail_group:1;
        RBus_UInt32  hfp_pqdc2_drf_fail_group:1;
        RBus_UInt32  res1:11;
    };
}kmc_bist_bisr_kmc_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_drf_bist_mode:1;
        RBus_UInt32  blk_logo_i_drf_mbist_mode:1;
        RBus_UInt32  blkeros_logo_i_drf_mbist_mode:1;
        RBus_UInt32  pxl_logo_i_drf_mbist_mode:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_drf_mode1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_drf_test_resume:1;
        RBus_UInt32  blk_logo_i_drf_test_resume:1;
        RBus_UInt32  blkeros_logo_i_drf_test_resume:1;
        RBus_UInt32  pxl_logo_i_drf_test_resume:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_drf_resume1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_drf_bist_done:1;
        RBus_UInt32  blk_logo_i_drf_bist_done:1;
        RBus_UInt32  blkeros_logo_i_drf_bist_done:1;
        RBus_UInt32  pxl_logo_i_drf_bist_done:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_drf_done1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_drf_start_pause:1;
        RBus_UInt32  blk_logo_i_drf_start_pause:1;
        RBus_UInt32  blkeros_logo_i_drf_start_pause:1;
        RBus_UInt32  pxl_logo_i_drf_start_pause:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_drf_pause1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_bbd_drf_bist_fail_group:1;
        RBus_UInt32  blk_logo_i_drf_bist_fail_group:1;
        RBus_UInt32  blkeros_logo_i_drf_bist_fail_group:1;
        RBus_UInt32  pxl_logo_i_drf_bist_fail_group:1;
        RBus_UInt32  res1:28;
    };
}kmc_bist_bisr_kmc_drf_fail_group1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_second_run_en_0:1;
        RBus_UInt32  lbmc_lfl_second_run_en_1:1;
        RBus_UInt32  lbmc_lfl_second_run_en_2:1;
        RBus_UInt32  lbmc_lfl_second_run_en_3:1;
        RBus_UInt32  lbmc_lfl_second_run_en_4:1;
        RBus_UInt32  lbmc_lfl_second_run_en_5:1;
        RBus_UInt32  lbmc_lfl_second_run_en_6:1;
        RBus_UInt32  lbmc_lfl_second_run_en_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_second_run_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_bisr_fail_group_0:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_1:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_2:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_3:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_4:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_5:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_6:1;
        RBus_UInt32  lbmc_lfl_bisr_fail_group_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_0:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_1:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_2:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_3:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_4:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_5:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_6:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_mode_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_drf_test_resume_0:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_1:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_2:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_3:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_4:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_5:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_6:1;
        RBus_UInt32  lbmc_lfl_drf_test_resume_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_drf_bisr_done_0:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_1:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_2:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_3:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_4:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_5:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_6:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_done_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_drf_start_pause_0:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_1:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_2:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_3:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_4:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_5:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_6:1;
        RBus_UInt32  lbmc_lfl_drf_start_pause_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_0:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_1:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_2:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_3:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_4:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_5:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_6:1;
        RBus_UInt32  lbmc_lfl_drf_bisr_fail_group_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_bisr_repaired_0:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_1:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_2:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_3:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_4:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_5:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_6:1;
        RBus_UInt32  lbmc_lfl_bisr_repaired_7:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_bisr_repaired_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_bisr_out_4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_lfl_bisr_out_5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_lfl_bisr_out_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_lfl_bisr_out_7:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_kmc_bisr_out_a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_lfl_bisr_out_0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_lfl_bisr_out_1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_lfl_bisr_out_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_lfl_bisr_out_3:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_kmc_bisr_out_b_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_ls:1;
        RBus_UInt32  lbmc_lfh_ls:1;
        RBus_UInt32  lbmc_lfl_ls:1;
        RBus_UInt32  ipmc_ls:1;
        RBus_UInt32  ippre_bbd_ls:1;
        RBus_UInt32  res1:27;
    };
}kmc_bist_bisr_kmc_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_rme:1;
        RBus_UInt32  lbmc_lfh_rme:1;
        RBus_UInt32  lbmc_lfl_rme:1;
        RBus_UInt32  ipmc_rme:1;
        RBus_UInt32  mc_mv_info_rme:1;
        RBus_UInt32  mc_fblvl_rme:1;
        RBus_UInt32  ippre_bbd_rme:1;
        RBus_UInt32  mc_logo_rme:1;
        RBus_UInt32  res1:24;
    };
}kmc_bist_bisr_kmc_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_rm:4;
        RBus_UInt32  lbmc_lfh_rm:4;
        RBus_UInt32  lbmc_lfl_rm:4;
        RBus_UInt32  ipmc_rm:4;
        RBus_UInt32  mc_mv_info_rm:4;
        RBus_UInt32  mc_fblvl_rm:4;
        RBus_UInt32  ippre_bbd_rm:4;
        RBus_UInt32  mc_logo_rm:4;
    };
}kmc_bist_bisr_kmc_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_hf_test1:1;
        RBus_UInt32  lbmc_lfh_test1:1;
        RBus_UInt32  lbmc_lfl_test1:1;
        RBus_UInt32  ipmc_test1:1;
        RBus_UInt32  ippre_bbd_test1:1;
        RBus_UInt32  res1:27;
    };
}kmc_bist_bisr_kmc_test1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipmc_testrwm:1;
        RBus_UInt32  res1:31;
    };
}kmc_bist_bisr_kmc_testrwm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipmc_bist_fail:2;
        RBus_UInt32  ipmc_drf_bist_fail:2;
        RBus_UInt32  pxl_logo_i_bist_fail:8;
        RBus_UInt32  pxl_logo_i_drf_bist_fail:8;
        RBus_UInt32  blk_logo_i_bist_fail:2;
        RBus_UInt32  blk_logo_i_drf_bist_fail:2;
        RBus_UInt32  res1:8;
    };
}kmc_bist_bisr_kmc_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_mv_info_bist_fail:4;
        RBus_UInt32  mc_mv_info_drf_bist_fail:4;
        RBus_UInt32  blkeros_logo_i_bist_fail:8;
        RBus_UInt32  blkeros_logo_i_drf_bist_fail:8;
        RBus_UInt32  res1:8;
    };
}kmc_bist_bisr_kmc_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_bist_lfl_fail_single_0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_3:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_lfl_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_bist_lfl_fail_single_4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_lfl_fail_single_7:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_lfl_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_bist_hf_fail_single_0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_3:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_hf_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_bist_hf_fail_single_4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_bist_hf_fail_single_7:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_hf_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_3:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_lfl_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_lfl_fail_single_7:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_lfl_drf_bist_fail_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_0:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_1:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_2:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_3:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_hf_drf_bist_fail_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_4:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_5:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_6:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  lbmc_drf_bist_hf_fail_single_7:6;
        RBus_UInt32  res4:2;
    };
}kmc_bist_bisr_lbmc_hf_drf_bist_fail_1_RBUS;




#endif 


#endif 
