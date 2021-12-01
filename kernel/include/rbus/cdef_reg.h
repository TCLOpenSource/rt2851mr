/**
* @file Merlin5_VE_CDEF_SPEC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_CDEF_REG_H_
#define _RBUS_CDEF_REG_H_

#include "rbus_types.h"



//  CDEF Register Address
#define  CDEF_CDEF_CTRL                                                         0x1800F600
#define  CDEF_CDEF_CTRL_reg_addr                                                 "0xB800F600"
#define  CDEF_CDEF_CTRL_reg                                                      0xB800F600
#define  CDEF_CDEF_CTRL_inst_addr                                                "0x0000"
#define  set_CDEF_CDEF_CTRL_reg(data)                                            (*((volatile unsigned int*)CDEF_CDEF_CTRL_reg)=data)
#define  get_CDEF_CDEF_CTRL_reg                                                  (*((volatile unsigned int*)CDEF_CDEF_CTRL_reg))
#define  CDEF_CDEF_CTRL_cdef_wdone_1t_after_wlast_shift                          (3)
#define  CDEF_CDEF_CTRL_cdef_reset_shift                                         (2)
#define  CDEF_CDEF_CTRL_cdef_done_shift                                          (1)
#define  CDEF_CDEF_CTRL_cdef_busy_shift                                          (0)
#define  CDEF_CDEF_CTRL_cdef_wdone_1t_after_wlast_mask                           (0x00000008)
#define  CDEF_CDEF_CTRL_cdef_reset_mask                                          (0x00000004)
#define  CDEF_CDEF_CTRL_cdef_done_mask                                           (0x00000002)
#define  CDEF_CDEF_CTRL_cdef_busy_mask                                           (0x00000001)
#define  CDEF_CDEF_CTRL_cdef_wdone_1t_after_wlast(data)                          (0x00000008&((data)<<3))
#define  CDEF_CDEF_CTRL_cdef_reset(data)                                         (0x00000004&((data)<<2))
#define  CDEF_CDEF_CTRL_cdef_done(data)                                          (0x00000002&((data)<<1))
#define  CDEF_CDEF_CTRL_cdef_busy(data)                                          (0x00000001&(data))
#define  CDEF_CDEF_CTRL_get_cdef_wdone_1t_after_wlast(data)                      ((0x00000008&(data))>>3)
#define  CDEF_CDEF_CTRL_get_cdef_reset(data)                                     ((0x00000004&(data))>>2)
#define  CDEF_CDEF_CTRL_get_cdef_done(data)                                      ((0x00000002&(data))>>1)
#define  CDEF_CDEF_CTRL_get_cdef_busy(data)                                      (0x00000001&(data))

#define  CDEF_CDEF_VM0                                                          0x1800F604
#define  CDEF_CDEF_VM0_reg_addr                                                  "0xB800F604"
#define  CDEF_CDEF_VM0_reg                                                       0xB800F604
#define  CDEF_CDEF_VM0_inst_addr                                                 "0x0001"
#define  set_CDEF_CDEF_VM0_reg(data)                                             (*((volatile unsigned int*)CDEF_CDEF_VM0_reg)=data)
#define  get_CDEF_CDEF_VM0_reg                                                   (*((volatile unsigned int*)CDEF_CDEF_VM0_reg))
#define  CDEF_CDEF_VM0_vm_basea0_shift                                           (21)
#define  CDEF_CDEF_VM0_vm_basea1_shift                                           (14)
#define  CDEF_CDEF_VM0_vm_sb_addr_shift                                          (0)
#define  CDEF_CDEF_VM0_vm_basea0_mask                                            (0x0FE00000)
#define  CDEF_CDEF_VM0_vm_basea1_mask                                            (0x001FC000)
#define  CDEF_CDEF_VM0_vm_sb_addr_mask                                           (0x0000003F)
#define  CDEF_CDEF_VM0_vm_basea0(data)                                           (0x0FE00000&((data)<<21))
#define  CDEF_CDEF_VM0_vm_basea1(data)                                           (0x001FC000&((data)<<14))
#define  CDEF_CDEF_VM0_vm_sb_addr(data)                                          (0x0000003F&(data))
#define  CDEF_CDEF_VM0_get_vm_basea0(data)                                       ((0x0FE00000&(data))>>21)
#define  CDEF_CDEF_VM0_get_vm_basea1(data)                                       ((0x001FC000&(data))>>14)
#define  CDEF_CDEF_VM0_get_vm_sb_addr(data)                                      (0x0000003F&(data))

#define  CDEF_CDEF_VM1                                                          0x1800F608
#define  CDEF_CDEF_VM1_reg_addr                                                  "0xB800F608"
#define  CDEF_CDEF_VM1_reg                                                       0xB800F608
#define  CDEF_CDEF_VM1_inst_addr                                                 "0x0002"
#define  set_CDEF_CDEF_VM1_reg(data)                                             (*((volatile unsigned int*)CDEF_CDEF_VM1_reg)=data)
#define  get_CDEF_CDEF_VM1_reg                                                   (*((volatile unsigned int*)CDEF_CDEF_VM1_reg))
#define  CDEF_CDEF_VM1_vm_basea0_ch_shift                                        (16)
#define  CDEF_CDEF_VM1_vm_basea1_ch_shift                                        (0)
#define  CDEF_CDEF_VM1_vm_basea0_ch_mask                                         (0x003F0000)
#define  CDEF_CDEF_VM1_vm_basea1_ch_mask                                         (0x0000003F)
#define  CDEF_CDEF_VM1_vm_basea0_ch(data)                                        (0x003F0000&((data)<<16))
#define  CDEF_CDEF_VM1_vm_basea1_ch(data)                                        (0x0000003F&(data))
#define  CDEF_CDEF_VM1_get_vm_basea0_ch(data)                                    ((0x003F0000&(data))>>16)
#define  CDEF_CDEF_VM1_get_vm_basea1_ch(data)                                    (0x0000003F&(data))

#define  CDEF_CDEF_DMA                                                          0x1800F60C
#define  CDEF_CDEF_DMA_reg_addr                                                  "0xB800F60C"
#define  CDEF_CDEF_DMA_reg                                                       0xB800F60C
#define  CDEF_CDEF_DMA_inst_addr                                                 "0x0003"
#define  set_CDEF_CDEF_DMA_reg(data)                                             (*((volatile unsigned int*)CDEF_CDEF_DMA_reg)=data)
#define  get_CDEF_CDEF_DMA_reg                                                   (*((volatile unsigned int*)CDEF_CDEF_DMA_reg))
#define  CDEF_CDEF_DMA_dma_busy_shift                                            (31)
#define  CDEF_CDEF_DMA_dma_addr_shift                                            (0)
#define  CDEF_CDEF_DMA_dma_busy_mask                                             (0x80000000)
#define  CDEF_CDEF_DMA_dma_addr_mask                                             (0x7FFFFFFF)
#define  CDEF_CDEF_DMA_dma_busy(data)                                            (0x80000000&((data)<<31))
#define  CDEF_CDEF_DMA_dma_addr(data)                                            (0x7FFFFFFF&(data))
#define  CDEF_CDEF_DMA_get_dma_busy(data)                                        ((0x80000000&(data))>>31)
#define  CDEF_CDEF_DMA_get_dma_addr(data)                                        (0x7FFFFFFF&(data))

#define  CDEF_CDEF_Damping_CDEF_bits                                            0x1800F610
#define  CDEF_CDEF_Damping_CDEF_bits_reg_addr                                    "0xB800F610"
#define  CDEF_CDEF_Damping_CDEF_bits_reg                                         0xB800F610
#define  CDEF_CDEF_Damping_CDEF_bits_inst_addr                                   "0x0004"
#define  set_CDEF_CDEF_Damping_CDEF_bits_reg(data)                               (*((volatile unsigned int*)CDEF_CDEF_Damping_CDEF_bits_reg)=data)
#define  get_CDEF_CDEF_Damping_CDEF_bits_reg                                     (*((volatile unsigned int*)CDEF_CDEF_Damping_CDEF_bits_reg))
#define  CDEF_CDEF_Damping_CDEF_bits_damping_shift                               (2)
#define  CDEF_CDEF_Damping_CDEF_bits_cdef_bits_shift                             (0)
#define  CDEF_CDEF_Damping_CDEF_bits_damping_mask                                (0x0000000C)
#define  CDEF_CDEF_Damping_CDEF_bits_cdef_bits_mask                              (0x00000003)
#define  CDEF_CDEF_Damping_CDEF_bits_damping(data)                               (0x0000000C&((data)<<2))
#define  CDEF_CDEF_Damping_CDEF_bits_cdef_bits(data)                             (0x00000003&(data))
#define  CDEF_CDEF_Damping_CDEF_bits_get_damping(data)                           ((0x0000000C&(data))>>2)
#define  CDEF_CDEF_Damping_CDEF_bits_get_cdef_bits(data)                         (0x00000003&(data))

#define  CDEF_CDEF_Preset0_1                                                    0x1800F614
#define  CDEF_CDEF_Preset0_1_reg_addr                                            "0xB800F614"
#define  CDEF_CDEF_Preset0_1_reg                                                 0xB800F614
#define  CDEF_CDEF_Preset0_1_inst_addr                                           "0x0005"
#define  set_CDEF_CDEF_Preset0_1_reg(data)                                       (*((volatile unsigned int*)CDEF_CDEF_Preset0_1_reg)=data)
#define  get_CDEF_CDEF_Preset0_1_reg                                             (*((volatile unsigned int*)CDEF_CDEF_Preset0_1_reg))
#define  CDEF_CDEF_Preset0_1_p1_luma_primary_strength_shift                      (24)
#define  CDEF_CDEF_Preset0_1_p1_chroma_primary_strength_shift                    (20)
#define  CDEF_CDEF_Preset0_1_p1_luma_secondary_strength_shift                    (18)
#define  CDEF_CDEF_Preset0_1_p1_chroma_secondary_strength_shift                  (16)
#define  CDEF_CDEF_Preset0_1_p0_luma_primary_strength_shift                      (8)
#define  CDEF_CDEF_Preset0_1_p0_chroma_primary_strength_shift                    (4)
#define  CDEF_CDEF_Preset0_1_p0_luma_secondary_strength_shift                    (2)
#define  CDEF_CDEF_Preset0_1_p0_chroma_secondary_strength_shift                  (0)
#define  CDEF_CDEF_Preset0_1_p1_luma_primary_strength_mask                       (0x0F000000)
#define  CDEF_CDEF_Preset0_1_p1_chroma_primary_strength_mask                     (0x00F00000)
#define  CDEF_CDEF_Preset0_1_p1_luma_secondary_strength_mask                     (0x000C0000)
#define  CDEF_CDEF_Preset0_1_p1_chroma_secondary_strength_mask                   (0x00030000)
#define  CDEF_CDEF_Preset0_1_p0_luma_primary_strength_mask                       (0x00000F00)
#define  CDEF_CDEF_Preset0_1_p0_chroma_primary_strength_mask                     (0x000000F0)
#define  CDEF_CDEF_Preset0_1_p0_luma_secondary_strength_mask                     (0x0000000C)
#define  CDEF_CDEF_Preset0_1_p0_chroma_secondary_strength_mask                   (0x00000003)
#define  CDEF_CDEF_Preset0_1_p1_luma_primary_strength(data)                      (0x0F000000&((data)<<24))
#define  CDEF_CDEF_Preset0_1_p1_chroma_primary_strength(data)                    (0x00F00000&((data)<<20))
#define  CDEF_CDEF_Preset0_1_p1_luma_secondary_strength(data)                    (0x000C0000&((data)<<18))
#define  CDEF_CDEF_Preset0_1_p1_chroma_secondary_strength(data)                  (0x00030000&((data)<<16))
#define  CDEF_CDEF_Preset0_1_p0_luma_primary_strength(data)                      (0x00000F00&((data)<<8))
#define  CDEF_CDEF_Preset0_1_p0_chroma_primary_strength(data)                    (0x000000F0&((data)<<4))
#define  CDEF_CDEF_Preset0_1_p0_luma_secondary_strength(data)                    (0x0000000C&((data)<<2))
#define  CDEF_CDEF_Preset0_1_p0_chroma_secondary_strength(data)                  (0x00000003&(data))
#define  CDEF_CDEF_Preset0_1_get_p1_luma_primary_strength(data)                  ((0x0F000000&(data))>>24)
#define  CDEF_CDEF_Preset0_1_get_p1_chroma_primary_strength(data)                ((0x00F00000&(data))>>20)
#define  CDEF_CDEF_Preset0_1_get_p1_luma_secondary_strength(data)                ((0x000C0000&(data))>>18)
#define  CDEF_CDEF_Preset0_1_get_p1_chroma_secondary_strength(data)              ((0x00030000&(data))>>16)
#define  CDEF_CDEF_Preset0_1_get_p0_luma_primary_strength(data)                  ((0x00000F00&(data))>>8)
#define  CDEF_CDEF_Preset0_1_get_p0_chroma_primary_strength(data)                ((0x000000F0&(data))>>4)
#define  CDEF_CDEF_Preset0_1_get_p0_luma_secondary_strength(data)                ((0x0000000C&(data))>>2)
#define  CDEF_CDEF_Preset0_1_get_p0_chroma_secondary_strength(data)              (0x00000003&(data))

#define  CDEF_CDEF_Preset2_3                                                    0x1800F618
#define  CDEF_CDEF_Preset2_3_reg_addr                                            "0xB800F618"
#define  CDEF_CDEF_Preset2_3_reg                                                 0xB800F618
#define  CDEF_CDEF_Preset2_3_inst_addr                                           "0x0006"
#define  set_CDEF_CDEF_Preset2_3_reg(data)                                       (*((volatile unsigned int*)CDEF_CDEF_Preset2_3_reg)=data)
#define  get_CDEF_CDEF_Preset2_3_reg                                             (*((volatile unsigned int*)CDEF_CDEF_Preset2_3_reg))
#define  CDEF_CDEF_Preset2_3_p3_luma_primary_strength_shift                      (24)
#define  CDEF_CDEF_Preset2_3_p3_chroma_primary_strength_shift                    (20)
#define  CDEF_CDEF_Preset2_3_p3_luma_secondary_strength_shift                    (18)
#define  CDEF_CDEF_Preset2_3_p3_chroma_secondary_strength_shift                  (16)
#define  CDEF_CDEF_Preset2_3_p2_luma_primary_strength_shift                      (8)
#define  CDEF_CDEF_Preset2_3_p2_chroma_primary_strength_shift                    (4)
#define  CDEF_CDEF_Preset2_3_p2_luma_secondary_strength_shift                    (2)
#define  CDEF_CDEF_Preset2_3_p2_chroma_secondary_strength_shift                  (0)
#define  CDEF_CDEF_Preset2_3_p3_luma_primary_strength_mask                       (0x0F000000)
#define  CDEF_CDEF_Preset2_3_p3_chroma_primary_strength_mask                     (0x00F00000)
#define  CDEF_CDEF_Preset2_3_p3_luma_secondary_strength_mask                     (0x000C0000)
#define  CDEF_CDEF_Preset2_3_p3_chroma_secondary_strength_mask                   (0x00030000)
#define  CDEF_CDEF_Preset2_3_p2_luma_primary_strength_mask                       (0x00000F00)
#define  CDEF_CDEF_Preset2_3_p2_chroma_primary_strength_mask                     (0x000000F0)
#define  CDEF_CDEF_Preset2_3_p2_luma_secondary_strength_mask                     (0x0000000C)
#define  CDEF_CDEF_Preset2_3_p2_chroma_secondary_strength_mask                   (0x00000003)
#define  CDEF_CDEF_Preset2_3_p3_luma_primary_strength(data)                      (0x0F000000&((data)<<24))
#define  CDEF_CDEF_Preset2_3_p3_chroma_primary_strength(data)                    (0x00F00000&((data)<<20))
#define  CDEF_CDEF_Preset2_3_p3_luma_secondary_strength(data)                    (0x000C0000&((data)<<18))
#define  CDEF_CDEF_Preset2_3_p3_chroma_secondary_strength(data)                  (0x00030000&((data)<<16))
#define  CDEF_CDEF_Preset2_3_p2_luma_primary_strength(data)                      (0x00000F00&((data)<<8))
#define  CDEF_CDEF_Preset2_3_p2_chroma_primary_strength(data)                    (0x000000F0&((data)<<4))
#define  CDEF_CDEF_Preset2_3_p2_luma_secondary_strength(data)                    (0x0000000C&((data)<<2))
#define  CDEF_CDEF_Preset2_3_p2_chroma_secondary_strength(data)                  (0x00000003&(data))
#define  CDEF_CDEF_Preset2_3_get_p3_luma_primary_strength(data)                  ((0x0F000000&(data))>>24)
#define  CDEF_CDEF_Preset2_3_get_p3_chroma_primary_strength(data)                ((0x00F00000&(data))>>20)
#define  CDEF_CDEF_Preset2_3_get_p3_luma_secondary_strength(data)                ((0x000C0000&(data))>>18)
#define  CDEF_CDEF_Preset2_3_get_p3_chroma_secondary_strength(data)              ((0x00030000&(data))>>16)
#define  CDEF_CDEF_Preset2_3_get_p2_luma_primary_strength(data)                  ((0x00000F00&(data))>>8)
#define  CDEF_CDEF_Preset2_3_get_p2_chroma_primary_strength(data)                ((0x000000F0&(data))>>4)
#define  CDEF_CDEF_Preset2_3_get_p2_luma_secondary_strength(data)                ((0x0000000C&(data))>>2)
#define  CDEF_CDEF_Preset2_3_get_p2_chroma_secondary_strength(data)              (0x00000003&(data))

#define  CDEF_CDEF_Preset4_5                                                    0x1800F61C
#define  CDEF_CDEF_Preset4_5_reg_addr                                            "0xB800F61C"
#define  CDEF_CDEF_Preset4_5_reg                                                 0xB800F61C
#define  CDEF_CDEF_Preset4_5_inst_addr                                           "0x0007"
#define  set_CDEF_CDEF_Preset4_5_reg(data)                                       (*((volatile unsigned int*)CDEF_CDEF_Preset4_5_reg)=data)
#define  get_CDEF_CDEF_Preset4_5_reg                                             (*((volatile unsigned int*)CDEF_CDEF_Preset4_5_reg))
#define  CDEF_CDEF_Preset4_5_p5_luma_primary_strength_shift                      (24)
#define  CDEF_CDEF_Preset4_5_p5_chroma_primary_strength_shift                    (20)
#define  CDEF_CDEF_Preset4_5_p5_luma_secondary_strength_shift                    (18)
#define  CDEF_CDEF_Preset4_5_p5_chroma_secondary_strength_shift                  (16)
#define  CDEF_CDEF_Preset4_5_p4_luma_primary_strength_shift                      (8)
#define  CDEF_CDEF_Preset4_5_p4_chroma_primary_strength_shift                    (4)
#define  CDEF_CDEF_Preset4_5_p4_luma_secondary_strength_shift                    (2)
#define  CDEF_CDEF_Preset4_5_p4_chroma_secondary_strength_shift                  (0)
#define  CDEF_CDEF_Preset4_5_p5_luma_primary_strength_mask                       (0x0F000000)
#define  CDEF_CDEF_Preset4_5_p5_chroma_primary_strength_mask                     (0x00F00000)
#define  CDEF_CDEF_Preset4_5_p5_luma_secondary_strength_mask                     (0x000C0000)
#define  CDEF_CDEF_Preset4_5_p5_chroma_secondary_strength_mask                   (0x00030000)
#define  CDEF_CDEF_Preset4_5_p4_luma_primary_strength_mask                       (0x00000F00)
#define  CDEF_CDEF_Preset4_5_p4_chroma_primary_strength_mask                     (0x000000F0)
#define  CDEF_CDEF_Preset4_5_p4_luma_secondary_strength_mask                     (0x0000000C)
#define  CDEF_CDEF_Preset4_5_p4_chroma_secondary_strength_mask                   (0x00000003)
#define  CDEF_CDEF_Preset4_5_p5_luma_primary_strength(data)                      (0x0F000000&((data)<<24))
#define  CDEF_CDEF_Preset4_5_p5_chroma_primary_strength(data)                    (0x00F00000&((data)<<20))
#define  CDEF_CDEF_Preset4_5_p5_luma_secondary_strength(data)                    (0x000C0000&((data)<<18))
#define  CDEF_CDEF_Preset4_5_p5_chroma_secondary_strength(data)                  (0x00030000&((data)<<16))
#define  CDEF_CDEF_Preset4_5_p4_luma_primary_strength(data)                      (0x00000F00&((data)<<8))
#define  CDEF_CDEF_Preset4_5_p4_chroma_primary_strength(data)                    (0x000000F0&((data)<<4))
#define  CDEF_CDEF_Preset4_5_p4_luma_secondary_strength(data)                    (0x0000000C&((data)<<2))
#define  CDEF_CDEF_Preset4_5_p4_chroma_secondary_strength(data)                  (0x00000003&(data))
#define  CDEF_CDEF_Preset4_5_get_p5_luma_primary_strength(data)                  ((0x0F000000&(data))>>24)
#define  CDEF_CDEF_Preset4_5_get_p5_chroma_primary_strength(data)                ((0x00F00000&(data))>>20)
#define  CDEF_CDEF_Preset4_5_get_p5_luma_secondary_strength(data)                ((0x000C0000&(data))>>18)
#define  CDEF_CDEF_Preset4_5_get_p5_chroma_secondary_strength(data)              ((0x00030000&(data))>>16)
#define  CDEF_CDEF_Preset4_5_get_p4_luma_primary_strength(data)                  ((0x00000F00&(data))>>8)
#define  CDEF_CDEF_Preset4_5_get_p4_chroma_primary_strength(data)                ((0x000000F0&(data))>>4)
#define  CDEF_CDEF_Preset4_5_get_p4_luma_secondary_strength(data)                ((0x0000000C&(data))>>2)
#define  CDEF_CDEF_Preset4_5_get_p4_chroma_secondary_strength(data)              (0x00000003&(data))

#define  CDEF_CDEF_Preset6_7                                                    0x1800F620
#define  CDEF_CDEF_Preset6_7_reg_addr                                            "0xB800F620"
#define  CDEF_CDEF_Preset6_7_reg                                                 0xB800F620
#define  CDEF_CDEF_Preset6_7_inst_addr                                           "0x0008"
#define  set_CDEF_CDEF_Preset6_7_reg(data)                                       (*((volatile unsigned int*)CDEF_CDEF_Preset6_7_reg)=data)
#define  get_CDEF_CDEF_Preset6_7_reg                                             (*((volatile unsigned int*)CDEF_CDEF_Preset6_7_reg))
#define  CDEF_CDEF_Preset6_7_p7_luma_primary_strength_shift                      (24)
#define  CDEF_CDEF_Preset6_7_p7_chroma_primary_strength_shift                    (20)
#define  CDEF_CDEF_Preset6_7_p7_luma_secondary_strength_shift                    (18)
#define  CDEF_CDEF_Preset6_7_p7_chroma_secondary_strength_shift                  (16)
#define  CDEF_CDEF_Preset6_7_p6_luma_primary_strength_shift                      (8)
#define  CDEF_CDEF_Preset6_7_p6_chroma_primary_strength_shift                    (4)
#define  CDEF_CDEF_Preset6_7_p6_luma_secondary_strength_shift                    (2)
#define  CDEF_CDEF_Preset6_7_p6_chroma_secondary_strength_shift                  (0)
#define  CDEF_CDEF_Preset6_7_p7_luma_primary_strength_mask                       (0x0F000000)
#define  CDEF_CDEF_Preset6_7_p7_chroma_primary_strength_mask                     (0x00F00000)
#define  CDEF_CDEF_Preset6_7_p7_luma_secondary_strength_mask                     (0x000C0000)
#define  CDEF_CDEF_Preset6_7_p7_chroma_secondary_strength_mask                   (0x00030000)
#define  CDEF_CDEF_Preset6_7_p6_luma_primary_strength_mask                       (0x00000F00)
#define  CDEF_CDEF_Preset6_7_p6_chroma_primary_strength_mask                     (0x000000F0)
#define  CDEF_CDEF_Preset6_7_p6_luma_secondary_strength_mask                     (0x0000000C)
#define  CDEF_CDEF_Preset6_7_p6_chroma_secondary_strength_mask                   (0x00000003)
#define  CDEF_CDEF_Preset6_7_p7_luma_primary_strength(data)                      (0x0F000000&((data)<<24))
#define  CDEF_CDEF_Preset6_7_p7_chroma_primary_strength(data)                    (0x00F00000&((data)<<20))
#define  CDEF_CDEF_Preset6_7_p7_luma_secondary_strength(data)                    (0x000C0000&((data)<<18))
#define  CDEF_CDEF_Preset6_7_p7_chroma_secondary_strength(data)                  (0x00030000&((data)<<16))
#define  CDEF_CDEF_Preset6_7_p6_luma_primary_strength(data)                      (0x00000F00&((data)<<8))
#define  CDEF_CDEF_Preset6_7_p6_chroma_primary_strength(data)                    (0x000000F0&((data)<<4))
#define  CDEF_CDEF_Preset6_7_p6_luma_secondary_strength(data)                    (0x0000000C&((data)<<2))
#define  CDEF_CDEF_Preset6_7_p6_chroma_secondary_strength(data)                  (0x00000003&(data))
#define  CDEF_CDEF_Preset6_7_get_p7_luma_primary_strength(data)                  ((0x0F000000&(data))>>24)
#define  CDEF_CDEF_Preset6_7_get_p7_chroma_primary_strength(data)                ((0x00F00000&(data))>>20)
#define  CDEF_CDEF_Preset6_7_get_p7_luma_secondary_strength(data)                ((0x000C0000&(data))>>18)
#define  CDEF_CDEF_Preset6_7_get_p7_chroma_secondary_strength(data)              ((0x00030000&(data))>>16)
#define  CDEF_CDEF_Preset6_7_get_p6_luma_primary_strength(data)                  ((0x00000F00&(data))>>8)
#define  CDEF_CDEF_Preset6_7_get_p6_chroma_primary_strength(data)                ((0x000000F0&(data))>>4)
#define  CDEF_CDEF_Preset6_7_get_p6_luma_secondary_strength(data)                ((0x0000000C&(data))>>2)
#define  CDEF_CDEF_Preset6_7_get_p6_chroma_secondary_strength(data)              (0x00000003&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======CDEF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  cdef_wdone_1t_after_wlast:1;
        RBus_UInt32  cdef_reset:1;
        RBus_UInt32  cdef_done:1;
        RBus_UInt32  cdef_busy:1;
    };
}cdef_cdef_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vm_basea0:7;
        RBus_UInt32  vm_basea1:7;
        RBus_UInt32  res2:8;
        RBus_UInt32  vm_sb_addr:6;
    };
}cdef_cdef_vm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_basea0_ch:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  vm_basea1_ch:6;
    };
}cdef_cdef_vm1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_busy:1;
        RBus_UInt32  dma_addr:31;
    };
}cdef_cdef_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  damping:2;
        RBus_UInt32  cdef_bits:2;
    };
}cdef_cdef_damping_cdef_bits_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  p1_luma_primary_strength:4;
        RBus_UInt32  p1_chroma_primary_strength:4;
        RBus_UInt32  p1_luma_secondary_strength:2;
        RBus_UInt32  p1_chroma_secondary_strength:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  p0_luma_primary_strength:4;
        RBus_UInt32  p0_chroma_primary_strength:4;
        RBus_UInt32  p0_luma_secondary_strength:2;
        RBus_UInt32  p0_chroma_secondary_strength:2;
    };
}cdef_cdef_preset0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  p3_luma_primary_strength:4;
        RBus_UInt32  p3_chroma_primary_strength:4;
        RBus_UInt32  p3_luma_secondary_strength:2;
        RBus_UInt32  p3_chroma_secondary_strength:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  p2_luma_primary_strength:4;
        RBus_UInt32  p2_chroma_primary_strength:4;
        RBus_UInt32  p2_luma_secondary_strength:2;
        RBus_UInt32  p2_chroma_secondary_strength:2;
    };
}cdef_cdef_preset2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  p5_luma_primary_strength:4;
        RBus_UInt32  p5_chroma_primary_strength:4;
        RBus_UInt32  p5_luma_secondary_strength:2;
        RBus_UInt32  p5_chroma_secondary_strength:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  p4_luma_primary_strength:4;
        RBus_UInt32  p4_chroma_primary_strength:4;
        RBus_UInt32  p4_luma_secondary_strength:2;
        RBus_UInt32  p4_chroma_secondary_strength:2;
    };
}cdef_cdef_preset4_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  p7_luma_primary_strength:4;
        RBus_UInt32  p7_chroma_primary_strength:4;
        RBus_UInt32  p7_luma_secondary_strength:2;
        RBus_UInt32  p7_chroma_secondary_strength:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  p6_luma_primary_strength:4;
        RBus_UInt32  p6_chroma_primary_strength:4;
        RBus_UInt32  p6_luma_secondary_strength:2;
        RBus_UInt32  p6_chroma_secondary_strength:2;
    };
}cdef_cdef_preset6_7_RBUS;

#else //apply LITTLE_ENDIAN

//======CDEF register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cdef_busy:1;
        RBus_UInt32  cdef_done:1;
        RBus_UInt32  cdef_reset:1;
        RBus_UInt32  cdef_wdone_1t_after_wlast:1;
        RBus_UInt32  res1:28;
    };
}cdef_cdef_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm_sb_addr:6;
        RBus_UInt32  res1:8;
        RBus_UInt32  vm_basea1:7;
        RBus_UInt32  vm_basea0:7;
        RBus_UInt32  res2:4;
    };
}cdef_cdef_vm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm_basea1_ch:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_basea0_ch:6;
        RBus_UInt32  res2:10;
    };
}cdef_cdef_vm1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_addr:31;
        RBus_UInt32  dma_busy:1;
    };
}cdef_cdef_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cdef_bits:2;
        RBus_UInt32  damping:2;
        RBus_UInt32  res1:28;
    };
}cdef_cdef_damping_cdef_bits_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_chroma_secondary_strength:2;
        RBus_UInt32  p0_luma_secondary_strength:2;
        RBus_UInt32  p0_chroma_primary_strength:4;
        RBus_UInt32  p0_luma_primary_strength:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  p1_chroma_secondary_strength:2;
        RBus_UInt32  p1_luma_secondary_strength:2;
        RBus_UInt32  p1_chroma_primary_strength:4;
        RBus_UInt32  p1_luma_primary_strength:4;
        RBus_UInt32  res2:4;
    };
}cdef_cdef_preset0_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p2_chroma_secondary_strength:2;
        RBus_UInt32  p2_luma_secondary_strength:2;
        RBus_UInt32  p2_chroma_primary_strength:4;
        RBus_UInt32  p2_luma_primary_strength:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  p3_chroma_secondary_strength:2;
        RBus_UInt32  p3_luma_secondary_strength:2;
        RBus_UInt32  p3_chroma_primary_strength:4;
        RBus_UInt32  p3_luma_primary_strength:4;
        RBus_UInt32  res2:4;
    };
}cdef_cdef_preset2_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p4_chroma_secondary_strength:2;
        RBus_UInt32  p4_luma_secondary_strength:2;
        RBus_UInt32  p4_chroma_primary_strength:4;
        RBus_UInt32  p4_luma_primary_strength:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  p5_chroma_secondary_strength:2;
        RBus_UInt32  p5_luma_secondary_strength:2;
        RBus_UInt32  p5_chroma_primary_strength:4;
        RBus_UInt32  p5_luma_primary_strength:4;
        RBus_UInt32  res2:4;
    };
}cdef_cdef_preset4_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p6_chroma_secondary_strength:2;
        RBus_UInt32  p6_luma_secondary_strength:2;
        RBus_UInt32  p6_chroma_primary_strength:4;
        RBus_UInt32  p6_luma_primary_strength:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  p7_chroma_secondary_strength:2;
        RBus_UInt32  p7_luma_secondary_strength:2;
        RBus_UInt32  p7_chroma_primary_strength:4;
        RBus_UInt32  p7_luma_primary_strength:4;
        RBus_UInt32  res2:4;
    };
}cdef_cdef_preset6_7_RBUS;




#endif 


#endif 
