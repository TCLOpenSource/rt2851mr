/**
* @file Merlin5_MEMC_MC_DMA
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MC_DMA_REG_H_
#define _RBUS_MC_DMA_REG_H_

#include "rbus_types.h"



//  MC_DMA Register Address
#define  MC_DMA_MC_WDMA_CTRL0                                                   0x18099400
#define  MC_DMA_MC_WDMA_CTRL0_reg_addr                                           "0xB8099400"
#define  MC_DMA_MC_WDMA_CTRL0_reg                                                0xB8099400
#define  MC_DMA_MC_WDMA_CTRL0_inst_addr                                          "0x0000"
#define  set_MC_DMA_MC_WDMA_CTRL0_reg(data)                                      (*((volatile unsigned int*)MC_DMA_MC_WDMA_CTRL0_reg)=data)
#define  get_MC_DMA_MC_WDMA_CTRL0_reg                                            (*((volatile unsigned int*)MC_DMA_MC_WDMA_CTRL0_reg))
#define  MC_DMA_MC_WDMA_CTRL0_lf_hf_wdma_share_sram_disable_shift                (31)
#define  MC_DMA_MC_WDMA_CTRL0_kmc_disable_frame_hold_shift                       (4)
#define  MC_DMA_MC_WDMA_CTRL0_dat_fmt_shift                                      (3)
#define  MC_DMA_MC_WDMA_CTRL0_dat_bit_shift                                      (2)
#define  MC_DMA_MC_WDMA_CTRL0_lf_hf_wdma_share_sram_disable_mask                 (0x80000000)
#define  MC_DMA_MC_WDMA_CTRL0_kmc_disable_frame_hold_mask                        (0x00000010)
#define  MC_DMA_MC_WDMA_CTRL0_dat_fmt_mask                                       (0x00000008)
#define  MC_DMA_MC_WDMA_CTRL0_dat_bit_mask                                       (0x00000004)
#define  MC_DMA_MC_WDMA_CTRL0_lf_hf_wdma_share_sram_disable(data)                (0x80000000&((data)<<31))
#define  MC_DMA_MC_WDMA_CTRL0_kmc_disable_frame_hold(data)                       (0x00000010&((data)<<4))
#define  MC_DMA_MC_WDMA_CTRL0_dat_fmt(data)                                      (0x00000008&((data)<<3))
#define  MC_DMA_MC_WDMA_CTRL0_dat_bit(data)                                      (0x00000004&((data)<<2))
#define  MC_DMA_MC_WDMA_CTRL0_get_lf_hf_wdma_share_sram_disable(data)            ((0x80000000&(data))>>31)
#define  MC_DMA_MC_WDMA_CTRL0_get_kmc_disable_frame_hold(data)                   ((0x00000010&(data))>>4)
#define  MC_DMA_MC_WDMA_CTRL0_get_dat_fmt(data)                                  ((0x00000008&(data))>>3)
#define  MC_DMA_MC_WDMA_CTRL0_get_dat_bit(data)                                  ((0x00000004&(data))>>2)

#define  MC_DMA_MC_WDMA_CTRL1                                                   0x18099404
#define  MC_DMA_MC_WDMA_CTRL1_reg_addr                                           "0xB8099404"
#define  MC_DMA_MC_WDMA_CTRL1_reg                                                0xB8099404
#define  MC_DMA_MC_WDMA_CTRL1_inst_addr                                          "0x0001"
#define  set_MC_DMA_MC_WDMA_CTRL1_reg(data)                                      (*((volatile unsigned int*)MC_DMA_MC_WDMA_CTRL1_reg)=data)
#define  get_MC_DMA_MC_WDMA_CTRL1_reg                                            (*((volatile unsigned int*)MC_DMA_MC_WDMA_CTRL1_reg))
#define  MC_DMA_MC_WDMA_CTRL1_height_shift                                       (17)
#define  MC_DMA_MC_WDMA_CTRL1_width_shift                                        (0)
#define  MC_DMA_MC_WDMA_CTRL1_height_mask                                        (0x0FFE0000)
#define  MC_DMA_MC_WDMA_CTRL1_width_mask                                         (0x00000FFF)
#define  MC_DMA_MC_WDMA_CTRL1_height(data)                                       (0x0FFE0000&((data)<<17))
#define  MC_DMA_MC_WDMA_CTRL1_width(data)                                        (0x00000FFF&(data))
#define  MC_DMA_MC_WDMA_CTRL1_get_height(data)                                   ((0x0FFE0000&(data))>>17)
#define  MC_DMA_MC_WDMA_CTRL1_get_width(data)                                    (0x00000FFF&(data))

#define  MC_DMA_MC_LF_WDMA_NUM_BL                                               0x18099410
#define  MC_DMA_MC_LF_WDMA_NUM_BL_reg_addr                                       "0xB8099410"
#define  MC_DMA_MC_LF_WDMA_NUM_BL_reg                                            0xB8099410
#define  MC_DMA_MC_LF_WDMA_NUM_BL_inst_addr                                      "0x0002"
#define  set_MC_DMA_MC_LF_WDMA_NUM_BL_reg(data)                                  (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_NUM_BL_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_NUM_BL_reg                                        (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_NUM_BL_reg))
#define  MC_DMA_MC_LF_WDMA_NUM_BL_num_shift                                      (16)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_bl_shift                                       (9)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_remain_shift                                   (1)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_num_mask                                       (0xFFFF0000)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_bl_mask                                        (0x0000FE00)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_remain_mask                                    (0x000000FE)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_num(data)                                      (0xFFFF0000&((data)<<16))
#define  MC_DMA_MC_LF_WDMA_NUM_BL_bl(data)                                       (0x0000FE00&((data)<<9))
#define  MC_DMA_MC_LF_WDMA_NUM_BL_remain(data)                                   (0x000000FE&((data)<<1))
#define  MC_DMA_MC_LF_WDMA_NUM_BL_get_num(data)                                  ((0xFFFF0000&(data))>>16)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_get_bl(data)                                   ((0x0000FE00&(data))>>9)
#define  MC_DMA_MC_LF_WDMA_NUM_BL_get_remain(data)                               ((0x000000FE&(data))>>1)

#define  MC_DMA_MC_LF_WDMA_MSTART0                                              0x18099414
#define  MC_DMA_MC_LF_WDMA_MSTART0_reg_addr                                      "0xB8099414"
#define  MC_DMA_MC_LF_WDMA_MSTART0_reg                                           0xB8099414
#define  MC_DMA_MC_LF_WDMA_MSTART0_inst_addr                                     "0x0003"
#define  set_MC_DMA_MC_LF_WDMA_MSTART0_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART0_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART0_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART0_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART0_start_address0_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART0_start_address0_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART0_start_address0(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART0_get_start_address0(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MSTART1                                              0x18099418
#define  MC_DMA_MC_LF_WDMA_MSTART1_reg_addr                                      "0xB8099418"
#define  MC_DMA_MC_LF_WDMA_MSTART1_reg                                           0xB8099418
#define  MC_DMA_MC_LF_WDMA_MSTART1_inst_addr                                     "0x0004"
#define  set_MC_DMA_MC_LF_WDMA_MSTART1_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART1_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART1_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART1_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART1_start_address1_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART1_start_address1_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART1_start_address1(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART1_get_start_address1(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MSTART2                                              0x1809941C
#define  MC_DMA_MC_LF_WDMA_MSTART2_reg_addr                                      "0xB809941C"
#define  MC_DMA_MC_LF_WDMA_MSTART2_reg                                           0xB809941C
#define  MC_DMA_MC_LF_WDMA_MSTART2_inst_addr                                     "0x0005"
#define  set_MC_DMA_MC_LF_WDMA_MSTART2_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART2_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART2_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART2_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART2_start_address2_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART2_start_address2_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART2_start_address2(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART2_get_start_address2(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MSTART3                                              0x18099420
#define  MC_DMA_MC_LF_WDMA_MSTART3_reg_addr                                      "0xB8099420"
#define  MC_DMA_MC_LF_WDMA_MSTART3_reg                                           0xB8099420
#define  MC_DMA_MC_LF_WDMA_MSTART3_inst_addr                                     "0x0006"
#define  set_MC_DMA_MC_LF_WDMA_MSTART3_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART3_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART3_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART3_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART3_start_address3_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART3_start_address3_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART3_start_address3(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART3_get_start_address3(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MSTART4                                              0x18099424
#define  MC_DMA_MC_LF_WDMA_MSTART4_reg_addr                                      "0xB8099424"
#define  MC_DMA_MC_LF_WDMA_MSTART4_reg                                           0xB8099424
#define  MC_DMA_MC_LF_WDMA_MSTART4_inst_addr                                     "0x0007"
#define  set_MC_DMA_MC_LF_WDMA_MSTART4_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART4_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART4_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART4_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART4_start_address4_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART4_start_address4_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART4_start_address4(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART4_get_start_address4(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MSTART5                                              0x18099428
#define  MC_DMA_MC_LF_WDMA_MSTART5_reg_addr                                      "0xB8099428"
#define  MC_DMA_MC_LF_WDMA_MSTART5_reg                                           0xB8099428
#define  MC_DMA_MC_LF_WDMA_MSTART5_inst_addr                                     "0x0008"
#define  set_MC_DMA_MC_LF_WDMA_MSTART5_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART5_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART5_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART5_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART5_start_address5_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART5_start_address5_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART5_start_address5(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART5_get_start_address5(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MSTART6                                              0x1809942C
#define  MC_DMA_MC_LF_WDMA_MSTART6_reg_addr                                      "0xB809942C"
#define  MC_DMA_MC_LF_WDMA_MSTART6_reg                                           0xB809942C
#define  MC_DMA_MC_LF_WDMA_MSTART6_inst_addr                                     "0x0009"
#define  set_MC_DMA_MC_LF_WDMA_MSTART6_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART6_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART6_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART6_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART6_start_address6_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART6_start_address6_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART6_start_address6(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART6_get_start_address6(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MSTART7                                              0x18099430
#define  MC_DMA_MC_LF_WDMA_MSTART7_reg_addr                                      "0xB8099430"
#define  MC_DMA_MC_LF_WDMA_MSTART7_reg                                           0xB8099430
#define  MC_DMA_MC_LF_WDMA_MSTART7_inst_addr                                     "0x000A"
#define  set_MC_DMA_MC_LF_WDMA_MSTART7_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART7_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MSTART7_reg                                       (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MSTART7_reg))
#define  MC_DMA_MC_LF_WDMA_MSTART7_start_address7_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_MSTART7_start_address7_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MSTART7_start_address7(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MSTART7_get_start_address7(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND0                                                0x18099434
#define  MC_DMA_MC_LF_WDMA_MEND0_reg_addr                                        "0xB8099434"
#define  MC_DMA_MC_LF_WDMA_MEND0_reg                                             0xB8099434
#define  MC_DMA_MC_LF_WDMA_MEND0_inst_addr                                       "0x000B"
#define  set_MC_DMA_MC_LF_WDMA_MEND0_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND0_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND0_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND0_reg))
#define  MC_DMA_MC_LF_WDMA_MEND0_end_address0_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND0_end_address0_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND0_end_address0(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND0_get_end_address0(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND1                                                0x18099438
#define  MC_DMA_MC_LF_WDMA_MEND1_reg_addr                                        "0xB8099438"
#define  MC_DMA_MC_LF_WDMA_MEND1_reg                                             0xB8099438
#define  MC_DMA_MC_LF_WDMA_MEND1_inst_addr                                       "0x000C"
#define  set_MC_DMA_MC_LF_WDMA_MEND1_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND1_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND1_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND1_reg))
#define  MC_DMA_MC_LF_WDMA_MEND1_end_address1_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND1_end_address1_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND1_end_address1(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND1_get_end_address1(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND2                                                0x1809943C
#define  MC_DMA_MC_LF_WDMA_MEND2_reg_addr                                        "0xB809943C"
#define  MC_DMA_MC_LF_WDMA_MEND2_reg                                             0xB809943C
#define  MC_DMA_MC_LF_WDMA_MEND2_inst_addr                                       "0x000D"
#define  set_MC_DMA_MC_LF_WDMA_MEND2_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND2_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND2_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND2_reg))
#define  MC_DMA_MC_LF_WDMA_MEND2_end_address2_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND2_end_address2_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND2_end_address2(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND2_get_end_address2(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND3                                                0x18099440
#define  MC_DMA_MC_LF_WDMA_MEND3_reg_addr                                        "0xB8099440"
#define  MC_DMA_MC_LF_WDMA_MEND3_reg                                             0xB8099440
#define  MC_DMA_MC_LF_WDMA_MEND3_inst_addr                                       "0x000E"
#define  set_MC_DMA_MC_LF_WDMA_MEND3_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND3_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND3_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND3_reg))
#define  MC_DMA_MC_LF_WDMA_MEND3_end_address3_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND3_end_address3_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND3_end_address3(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND3_get_end_address3(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND4                                                0x18099444
#define  MC_DMA_MC_LF_WDMA_MEND4_reg_addr                                        "0xB8099444"
#define  MC_DMA_MC_LF_WDMA_MEND4_reg                                             0xB8099444
#define  MC_DMA_MC_LF_WDMA_MEND4_inst_addr                                       "0x000F"
#define  set_MC_DMA_MC_LF_WDMA_MEND4_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND4_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND4_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND4_reg))
#define  MC_DMA_MC_LF_WDMA_MEND4_end_address4_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND4_end_address4_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND4_end_address4(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND4_get_end_address4(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND5                                                0x18099448
#define  MC_DMA_MC_LF_WDMA_MEND5_reg_addr                                        "0xB8099448"
#define  MC_DMA_MC_LF_WDMA_MEND5_reg                                             0xB8099448
#define  MC_DMA_MC_LF_WDMA_MEND5_inst_addr                                       "0x0010"
#define  set_MC_DMA_MC_LF_WDMA_MEND5_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND5_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND5_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND5_reg))
#define  MC_DMA_MC_LF_WDMA_MEND5_end_address5_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND5_end_address5_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND5_end_address5(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND5_get_end_address5(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND6                                                0x1809944C
#define  MC_DMA_MC_LF_WDMA_MEND6_reg_addr                                        "0xB809944C"
#define  MC_DMA_MC_LF_WDMA_MEND6_reg                                             0xB809944C
#define  MC_DMA_MC_LF_WDMA_MEND6_inst_addr                                       "0x0011"
#define  set_MC_DMA_MC_LF_WDMA_MEND6_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND6_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND6_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND6_reg))
#define  MC_DMA_MC_LF_WDMA_MEND6_end_address6_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND6_end_address6_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND6_end_address6(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND6_get_end_address6(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_MEND7                                                0x18099450
#define  MC_DMA_MC_LF_WDMA_MEND7_reg_addr                                        "0xB8099450"
#define  MC_DMA_MC_LF_WDMA_MEND7_reg                                             0xB8099450
#define  MC_DMA_MC_LF_WDMA_MEND7_inst_addr                                       "0x0012"
#define  set_MC_DMA_MC_LF_WDMA_MEND7_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND7_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_MEND7_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_MEND7_reg))
#define  MC_DMA_MC_LF_WDMA_MEND7_end_address7_shift                              (4)
#define  MC_DMA_MC_LF_WDMA_MEND7_end_address7_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_MEND7_end_address7(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_MEND7_get_end_address7(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_WDMA_LSTEP                                                0x18099454
#define  MC_DMA_MC_LF_WDMA_LSTEP_reg_addr                                        "0xB8099454"
#define  MC_DMA_MC_LF_WDMA_LSTEP_reg                                             0xB8099454
#define  MC_DMA_MC_LF_WDMA_LSTEP_inst_addr                                       "0x0013"
#define  set_MC_DMA_MC_LF_WDMA_LSTEP_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_LSTEP_reg)=data)
#define  get_MC_DMA_MC_LF_WDMA_LSTEP_reg                                         (*((volatile unsigned int*)MC_DMA_MC_LF_WDMA_LSTEP_reg))
#define  MC_DMA_MC_LF_WDMA_LSTEP_line_offset_addr_shift                          (4)
#define  MC_DMA_MC_LF_WDMA_LSTEP_line_offset_addr_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_LF_WDMA_LSTEP_line_offset_addr(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_WDMA_LSTEP_get_line_offset_addr(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up                                      0x18099458
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg_addr                              "0xB8099458"
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg                                   0xB8099458
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up_inst_addr                             "0x0014"
#define  set_MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg(data)                         (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg)=data)
#define  get_MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg                               (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg))
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit_shift                    (4)
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit_mask                     (0xFFFFFFF0)
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up_dma_up_limit(data)                    (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_up_get_dma_up_limit(data)                ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low                                     0x1809945C
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg_addr                             "0xB809945C"
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg                                  0xB809945C
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low_inst_addr                            "0x0015"
#define  set_MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg(data)                        (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg)=data)
#define  get_MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg                              (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg))
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit_shift                  (4)
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit_mask                   (0xFFFFFFF0)
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low_dma_low_limit(data)                  (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_DMA_WR_Rule_check_low_get_dma_low_limit(data)              ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_DMA_WR_Ctrl                                               0x18099460
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_reg_addr                                       "0xB8099460"
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_reg                                            0xB8099460
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_inst_addr                                      "0x0016"
#define  set_MC_DMA_MC_LF_DMA_WR_Ctrl_reg(data)                                  (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Ctrl_reg)=data)
#define  get_MC_DMA_MC_LF_DMA_WR_Ctrl_reg                                        (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Ctrl_reg))
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_max_outstanding_shift                          (8)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_force_all_rst_shift                            (1)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_dma_enable_shift                               (0)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_max_outstanding_mask                           (0x00000F00)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_force_all_rst_mask                             (0x00000002)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_dma_enable_mask                                (0x00000001)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_max_outstanding(data)                          (0x00000F00&((data)<<8))
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_force_all_rst(data)                            (0x00000002&((data)<<1))
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_dma_enable(data)                               (0x00000001&(data))
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_get_max_outstanding(data)                      ((0x00000F00&(data))>>8)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_get_force_all_rst(data)                        ((0x00000002&(data))>>1)
#define  MC_DMA_MC_LF_DMA_WR_Ctrl_get_dma_enable(data)                           (0x00000001&(data))

#define  MC_DMA_MC_LF_DMA_WR_status                                             0x18099464
#define  MC_DMA_MC_LF_DMA_WR_status_reg_addr                                     "0xB8099464"
#define  MC_DMA_MC_LF_DMA_WR_status_reg                                          0xB8099464
#define  MC_DMA_MC_LF_DMA_WR_status_inst_addr                                    "0x0017"
#define  set_MC_DMA_MC_LF_DMA_WR_status_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_status_reg)=data)
#define  get_MC_DMA_MC_LF_DMA_WR_status_reg                                      (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_status_reg))
#define  MC_DMA_MC_LF_DMA_WR_status_dma_cmd_water_shift                          (28)
#define  MC_DMA_MC_LF_DMA_WR_status_dma_data_water_shift                         (16)
#define  MC_DMA_MC_LF_DMA_WR_status_cur_outstanding_shift                        (8)
#define  MC_DMA_MC_LF_DMA_WR_status_wdma_fifo_data_trdy_is_low_shift             (5)
#define  MC_DMA_MC_LF_DMA_WR_status_soft_rst_before_cmd_finish_shift             (4)
#define  MC_DMA_MC_LF_DMA_WR_status_soft_rst_with_data_left_shift                (3)
#define  MC_DMA_MC_LF_DMA_WR_status_data_fifo_underflow_err_shift                (2)
#define  MC_DMA_MC_LF_DMA_WR_status_exceed_range_err_shift                       (1)
#define  MC_DMA_MC_LF_DMA_WR_status_zero_length_err_shift                        (0)
#define  MC_DMA_MC_LF_DMA_WR_status_dma_cmd_water_mask                           (0x70000000)
#define  MC_DMA_MC_LF_DMA_WR_status_dma_data_water_mask                          (0x03FF0000)
#define  MC_DMA_MC_LF_DMA_WR_status_cur_outstanding_mask                         (0x00001F00)
#define  MC_DMA_MC_LF_DMA_WR_status_wdma_fifo_data_trdy_is_low_mask              (0x00000020)
#define  MC_DMA_MC_LF_DMA_WR_status_soft_rst_before_cmd_finish_mask              (0x00000010)
#define  MC_DMA_MC_LF_DMA_WR_status_soft_rst_with_data_left_mask                 (0x00000008)
#define  MC_DMA_MC_LF_DMA_WR_status_data_fifo_underflow_err_mask                 (0x00000004)
#define  MC_DMA_MC_LF_DMA_WR_status_exceed_range_err_mask                        (0x00000002)
#define  MC_DMA_MC_LF_DMA_WR_status_zero_length_err_mask                         (0x00000001)
#define  MC_DMA_MC_LF_DMA_WR_status_dma_cmd_water(data)                          (0x70000000&((data)<<28))
#define  MC_DMA_MC_LF_DMA_WR_status_dma_data_water(data)                         (0x03FF0000&((data)<<16))
#define  MC_DMA_MC_LF_DMA_WR_status_cur_outstanding(data)                        (0x00001F00&((data)<<8))
#define  MC_DMA_MC_LF_DMA_WR_status_wdma_fifo_data_trdy_is_low(data)             (0x00000020&((data)<<5))
#define  MC_DMA_MC_LF_DMA_WR_status_soft_rst_before_cmd_finish(data)             (0x00000010&((data)<<4))
#define  MC_DMA_MC_LF_DMA_WR_status_soft_rst_with_data_left(data)                (0x00000008&((data)<<3))
#define  MC_DMA_MC_LF_DMA_WR_status_data_fifo_underflow_err(data)                (0x00000004&((data)<<2))
#define  MC_DMA_MC_LF_DMA_WR_status_exceed_range_err(data)                       (0x00000002&((data)<<1))
#define  MC_DMA_MC_LF_DMA_WR_status_zero_length_err(data)                        (0x00000001&(data))
#define  MC_DMA_MC_LF_DMA_WR_status_get_dma_cmd_water(data)                      ((0x70000000&(data))>>28)
#define  MC_DMA_MC_LF_DMA_WR_status_get_dma_data_water(data)                     ((0x03FF0000&(data))>>16)
#define  MC_DMA_MC_LF_DMA_WR_status_get_cur_outstanding(data)                    ((0x00001F00&(data))>>8)
#define  MC_DMA_MC_LF_DMA_WR_status_get_wdma_fifo_data_trdy_is_low(data)         ((0x00000020&(data))>>5)
#define  MC_DMA_MC_LF_DMA_WR_status_get_soft_rst_before_cmd_finish(data)         ((0x00000010&(data))>>4)
#define  MC_DMA_MC_LF_DMA_WR_status_get_soft_rst_with_data_left(data)            ((0x00000008&(data))>>3)
#define  MC_DMA_MC_LF_DMA_WR_status_get_data_fifo_underflow_err(data)            ((0x00000004&(data))>>2)
#define  MC_DMA_MC_LF_DMA_WR_status_get_exceed_range_err(data)                   ((0x00000002&(data))>>1)
#define  MC_DMA_MC_LF_DMA_WR_status_get_zero_length_err(data)                    (0x00000001&(data))

#define  MC_DMA_MC_LF_DMA_WR_status1                                            0x18099468
#define  MC_DMA_MC_LF_DMA_WR_status1_reg_addr                                    "0xB8099468"
#define  MC_DMA_MC_LF_DMA_WR_status1_reg                                         0xB8099468
#define  MC_DMA_MC_LF_DMA_WR_status1_inst_addr                                   "0x0018"
#define  set_MC_DMA_MC_LF_DMA_WR_status1_reg(data)                               (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_status1_reg)=data)
#define  get_MC_DMA_MC_LF_DMA_WR_status1_reg                                     (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_status1_reg))
#define  MC_DMA_MC_LF_DMA_WR_status1_ack_num_error_shift                         (31)
#define  MC_DMA_MC_LF_DMA_WR_status1_last_no_ack_error_shift                     (30)
#define  MC_DMA_MC_LF_DMA_WR_status1_target_ack_num_shift                        (16)
#define  MC_DMA_MC_LF_DMA_WR_status1_last_ack_num_shift                          (8)
#define  MC_DMA_MC_LF_DMA_WR_status1_selected_bl_shift                           (0)
#define  MC_DMA_MC_LF_DMA_WR_status1_ack_num_error_mask                          (0x80000000)
#define  MC_DMA_MC_LF_DMA_WR_status1_last_no_ack_error_mask                      (0x40000000)
#define  MC_DMA_MC_LF_DMA_WR_status1_target_ack_num_mask                         (0x007F0000)
#define  MC_DMA_MC_LF_DMA_WR_status1_last_ack_num_mask                           (0x00007F00)
#define  MC_DMA_MC_LF_DMA_WR_status1_selected_bl_mask                            (0x0000007F)
#define  MC_DMA_MC_LF_DMA_WR_status1_ack_num_error(data)                         (0x80000000&((data)<<31))
#define  MC_DMA_MC_LF_DMA_WR_status1_last_no_ack_error(data)                     (0x40000000&((data)<<30))
#define  MC_DMA_MC_LF_DMA_WR_status1_target_ack_num(data)                        (0x007F0000&((data)<<16))
#define  MC_DMA_MC_LF_DMA_WR_status1_last_ack_num(data)                          (0x00007F00&((data)<<8))
#define  MC_DMA_MC_LF_DMA_WR_status1_selected_bl(data)                           (0x0000007F&(data))
#define  MC_DMA_MC_LF_DMA_WR_status1_get_ack_num_error(data)                     ((0x80000000&(data))>>31)
#define  MC_DMA_MC_LF_DMA_WR_status1_get_last_no_ack_error(data)                 ((0x40000000&(data))>>30)
#define  MC_DMA_MC_LF_DMA_WR_status1_get_target_ack_num(data)                    ((0x007F0000&(data))>>16)
#define  MC_DMA_MC_LF_DMA_WR_status1_get_last_ack_num(data)                      ((0x00007F00&(data))>>8)
#define  MC_DMA_MC_LF_DMA_WR_status1_get_selected_bl(data)                       (0x0000007F&(data))

#define  MC_DMA_MC_LF_DMA_WR_status2                                            0x1809946C
#define  MC_DMA_MC_LF_DMA_WR_status2_reg_addr                                    "0xB809946C"
#define  MC_DMA_MC_LF_DMA_WR_status2_reg                                         0xB809946C
#define  MC_DMA_MC_LF_DMA_WR_status2_inst_addr                                   "0x0019"
#define  set_MC_DMA_MC_LF_DMA_WR_status2_reg(data)                               (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_status2_reg)=data)
#define  get_MC_DMA_MC_LF_DMA_WR_status2_reg                                     (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_status2_reg))
#define  MC_DMA_MC_LF_DMA_WR_status2_selected_addr_shift                         (4)
#define  MC_DMA_MC_LF_DMA_WR_status2_addr_bl_sel_shift                           (0)
#define  MC_DMA_MC_LF_DMA_WR_status2_selected_addr_mask                          (0xFFFFFFF0)
#define  MC_DMA_MC_LF_DMA_WR_status2_addr_bl_sel_mask                            (0x00000003)
#define  MC_DMA_MC_LF_DMA_WR_status2_selected_addr(data)                         (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_DMA_WR_status2_addr_bl_sel(data)                           (0x00000003&(data))
#define  MC_DMA_MC_LF_DMA_WR_status2_get_selected_addr(data)                     ((0xFFFFFFF0&(data))>>4)
#define  MC_DMA_MC_LF_DMA_WR_status2_get_addr_bl_sel(data)                       (0x00000003&(data))

#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor                                      0x18099470
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_reg_addr                              "0xB8099470"
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_reg                                   0xB8099470
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_inst_addr                             "0x001A"
#define  set_MC_DMA_MC_LF_DMA_WR_Water_Monitor_reg(data)                         (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Water_Monitor_reg)=data)
#define  get_MC_DMA_MC_LF_DMA_WR_Water_Monitor_reg                               (*((volatile unsigned int*)MC_DMA_MC_LF_DMA_WR_Water_Monitor_reg))
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_en_shift                      (31)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_conti_shift                   (30)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_reach_thd_shift                       (24)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_thd_shift                     (14)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_highest_water_level_shift             (0)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_en_mask                       (0x80000000)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_conti_mask                    (0x40000000)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_reach_thd_mask                        (0x01000000)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_thd_mask                      (0x00FFC000)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_highest_water_level_mask              (0x000003FF)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_en(data)                      (0x80000000&((data)<<31))
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_conti(data)                   (0x40000000&((data)<<30))
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_reach_thd(data)                       (0x01000000&((data)<<24))
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_monitor_thd(data)                     (0x00FFC000&((data)<<14))
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_highest_water_level(data)             (0x000003FF&(data))
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_get_monitor_en(data)                  ((0x80000000&(data))>>31)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_get_monitor_conti(data)               ((0x40000000&(data))>>30)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_get_reach_thd(data)                   ((0x01000000&(data))>>24)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_get_monitor_thd(data)                 ((0x00FFC000&(data))>>14)
#define  MC_DMA_MC_LF_DMA_WR_Water_Monitor_get_highest_water_level(data)         (0x000003FF&(data))

#define  MC_DMA_MC_HF_WDMA_NUM_BL                                               0x18099480
#define  MC_DMA_MC_HF_WDMA_NUM_BL_reg_addr                                       "0xB8099480"
#define  MC_DMA_MC_HF_WDMA_NUM_BL_reg                                            0xB8099480
#define  MC_DMA_MC_HF_WDMA_NUM_BL_inst_addr                                      "0x001B"
#define  set_MC_DMA_MC_HF_WDMA_NUM_BL_reg(data)                                  (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_NUM_BL_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_NUM_BL_reg                                        (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_NUM_BL_reg))
#define  MC_DMA_MC_HF_WDMA_NUM_BL_num_shift                                      (16)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_bl_shift                                       (9)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_remain_shift                                   (1)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_num_mask                                       (0xFFFF0000)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_bl_mask                                        (0x0000FE00)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_remain_mask                                    (0x000000FE)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_num(data)                                      (0xFFFF0000&((data)<<16))
#define  MC_DMA_MC_HF_WDMA_NUM_BL_bl(data)                                       (0x0000FE00&((data)<<9))
#define  MC_DMA_MC_HF_WDMA_NUM_BL_remain(data)                                   (0x000000FE&((data)<<1))
#define  MC_DMA_MC_HF_WDMA_NUM_BL_get_num(data)                                  ((0xFFFF0000&(data))>>16)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_get_bl(data)                                   ((0x0000FE00&(data))>>9)
#define  MC_DMA_MC_HF_WDMA_NUM_BL_get_remain(data)                               ((0x000000FE&(data))>>1)

#define  MC_DMA_MC_HF_WDMA_MSTART0                                              0x18099484
#define  MC_DMA_MC_HF_WDMA_MSTART0_reg_addr                                      "0xB8099484"
#define  MC_DMA_MC_HF_WDMA_MSTART0_reg                                           0xB8099484
#define  MC_DMA_MC_HF_WDMA_MSTART0_inst_addr                                     "0x001C"
#define  set_MC_DMA_MC_HF_WDMA_MSTART0_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART0_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART0_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART0_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART0_start_address0_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART0_start_address0_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART0_start_address0(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART0_get_start_address0(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MSTART1                                              0x18099488
#define  MC_DMA_MC_HF_WDMA_MSTART1_reg_addr                                      "0xB8099488"
#define  MC_DMA_MC_HF_WDMA_MSTART1_reg                                           0xB8099488
#define  MC_DMA_MC_HF_WDMA_MSTART1_inst_addr                                     "0x001D"
#define  set_MC_DMA_MC_HF_WDMA_MSTART1_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART1_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART1_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART1_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART1_start_address1_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART1_start_address1_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART1_start_address1(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART1_get_start_address1(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MSTART2                                              0x1809948C
#define  MC_DMA_MC_HF_WDMA_MSTART2_reg_addr                                      "0xB809948C"
#define  MC_DMA_MC_HF_WDMA_MSTART2_reg                                           0xB809948C
#define  MC_DMA_MC_HF_WDMA_MSTART2_inst_addr                                     "0x001E"
#define  set_MC_DMA_MC_HF_WDMA_MSTART2_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART2_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART2_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART2_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART2_start_address2_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART2_start_address2_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART2_start_address2(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART2_get_start_address2(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MSTART3                                              0x18099490
#define  MC_DMA_MC_HF_WDMA_MSTART3_reg_addr                                      "0xB8099490"
#define  MC_DMA_MC_HF_WDMA_MSTART3_reg                                           0xB8099490
#define  MC_DMA_MC_HF_WDMA_MSTART3_inst_addr                                     "0x001F"
#define  set_MC_DMA_MC_HF_WDMA_MSTART3_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART3_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART3_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART3_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART3_start_address3_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART3_start_address3_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART3_start_address3(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART3_get_start_address3(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MSTART4                                              0x18099494
#define  MC_DMA_MC_HF_WDMA_MSTART4_reg_addr                                      "0xB8099494"
#define  MC_DMA_MC_HF_WDMA_MSTART4_reg                                           0xB8099494
#define  MC_DMA_MC_HF_WDMA_MSTART4_inst_addr                                     "0x0020"
#define  set_MC_DMA_MC_HF_WDMA_MSTART4_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART4_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART4_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART4_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART4_start_address4_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART4_start_address4_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART4_start_address4(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART4_get_start_address4(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MSTART5                                              0x18099498
#define  MC_DMA_MC_HF_WDMA_MSTART5_reg_addr                                      "0xB8099498"
#define  MC_DMA_MC_HF_WDMA_MSTART5_reg                                           0xB8099498
#define  MC_DMA_MC_HF_WDMA_MSTART5_inst_addr                                     "0x0021"
#define  set_MC_DMA_MC_HF_WDMA_MSTART5_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART5_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART5_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART5_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART5_start_address5_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART5_start_address5_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART5_start_address5(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART5_get_start_address5(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MSTART6                                              0x1809949C
#define  MC_DMA_MC_HF_WDMA_MSTART6_reg_addr                                      "0xB809949C"
#define  MC_DMA_MC_HF_WDMA_MSTART6_reg                                           0xB809949C
#define  MC_DMA_MC_HF_WDMA_MSTART6_inst_addr                                     "0x0022"
#define  set_MC_DMA_MC_HF_WDMA_MSTART6_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART6_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART6_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART6_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART6_start_address6_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART6_start_address6_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART6_start_address6(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART6_get_start_address6(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MSTART7                                              0x180994A0
#define  MC_DMA_MC_HF_WDMA_MSTART7_reg_addr                                      "0xB80994A0"
#define  MC_DMA_MC_HF_WDMA_MSTART7_reg                                           0xB80994A0
#define  MC_DMA_MC_HF_WDMA_MSTART7_inst_addr                                     "0x0023"
#define  set_MC_DMA_MC_HF_WDMA_MSTART7_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART7_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MSTART7_reg                                       (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MSTART7_reg))
#define  MC_DMA_MC_HF_WDMA_MSTART7_start_address7_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_MSTART7_start_address7_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MSTART7_start_address7(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MSTART7_get_start_address7(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND0                                                0x180994A4
#define  MC_DMA_MC_HF_WDMA_MEND0_reg_addr                                        "0xB80994A4"
#define  MC_DMA_MC_HF_WDMA_MEND0_reg                                             0xB80994A4
#define  MC_DMA_MC_HF_WDMA_MEND0_inst_addr                                       "0x0024"
#define  set_MC_DMA_MC_HF_WDMA_MEND0_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND0_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND0_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND0_reg))
#define  MC_DMA_MC_HF_WDMA_MEND0_end_address0_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND0_end_address0_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND0_end_address0(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND0_get_end_address0(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND1                                                0x180994A8
#define  MC_DMA_MC_HF_WDMA_MEND1_reg_addr                                        "0xB80994A8"
#define  MC_DMA_MC_HF_WDMA_MEND1_reg                                             0xB80994A8
#define  MC_DMA_MC_HF_WDMA_MEND1_inst_addr                                       "0x0025"
#define  set_MC_DMA_MC_HF_WDMA_MEND1_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND1_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND1_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND1_reg))
#define  MC_DMA_MC_HF_WDMA_MEND1_end_address1_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND1_end_address1_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND1_end_address1(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND1_get_end_address1(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND2                                                0x180994AC
#define  MC_DMA_MC_HF_WDMA_MEND2_reg_addr                                        "0xB80994AC"
#define  MC_DMA_MC_HF_WDMA_MEND2_reg                                             0xB80994AC
#define  MC_DMA_MC_HF_WDMA_MEND2_inst_addr                                       "0x0026"
#define  set_MC_DMA_MC_HF_WDMA_MEND2_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND2_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND2_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND2_reg))
#define  MC_DMA_MC_HF_WDMA_MEND2_end_address2_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND2_end_address2_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND2_end_address2(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND2_get_end_address2(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND3                                                0x180994B0
#define  MC_DMA_MC_HF_WDMA_MEND3_reg_addr                                        "0xB80994B0"
#define  MC_DMA_MC_HF_WDMA_MEND3_reg                                             0xB80994B0
#define  MC_DMA_MC_HF_WDMA_MEND3_inst_addr                                       "0x0027"
#define  set_MC_DMA_MC_HF_WDMA_MEND3_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND3_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND3_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND3_reg))
#define  MC_DMA_MC_HF_WDMA_MEND3_end_address3_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND3_end_address3_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND3_end_address3(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND3_get_end_address3(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND4                                                0x180994B4
#define  MC_DMA_MC_HF_WDMA_MEND4_reg_addr                                        "0xB80994B4"
#define  MC_DMA_MC_HF_WDMA_MEND4_reg                                             0xB80994B4
#define  MC_DMA_MC_HF_WDMA_MEND4_inst_addr                                       "0x0028"
#define  set_MC_DMA_MC_HF_WDMA_MEND4_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND4_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND4_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND4_reg))
#define  MC_DMA_MC_HF_WDMA_MEND4_end_address4_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND4_end_address4_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND4_end_address4(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND4_get_end_address4(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND5                                                0x180994B8
#define  MC_DMA_MC_HF_WDMA_MEND5_reg_addr                                        "0xB80994B8"
#define  MC_DMA_MC_HF_WDMA_MEND5_reg                                             0xB80994B8
#define  MC_DMA_MC_HF_WDMA_MEND5_inst_addr                                       "0x0029"
#define  set_MC_DMA_MC_HF_WDMA_MEND5_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND5_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND5_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND5_reg))
#define  MC_DMA_MC_HF_WDMA_MEND5_end_address5_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND5_end_address5_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND5_end_address5(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND5_get_end_address5(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND6                                                0x180994BC
#define  MC_DMA_MC_HF_WDMA_MEND6_reg_addr                                        "0xB80994BC"
#define  MC_DMA_MC_HF_WDMA_MEND6_reg                                             0xB80994BC
#define  MC_DMA_MC_HF_WDMA_MEND6_inst_addr                                       "0x002A"
#define  set_MC_DMA_MC_HF_WDMA_MEND6_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND6_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND6_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND6_reg))
#define  MC_DMA_MC_HF_WDMA_MEND6_end_address6_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND6_end_address6_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND6_end_address6(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND6_get_end_address6(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_MEND7                                                0x180994C0
#define  MC_DMA_MC_HF_WDMA_MEND7_reg_addr                                        "0xB80994C0"
#define  MC_DMA_MC_HF_WDMA_MEND7_reg                                             0xB80994C0
#define  MC_DMA_MC_HF_WDMA_MEND7_inst_addr                                       "0x002B"
#define  set_MC_DMA_MC_HF_WDMA_MEND7_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND7_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_MEND7_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_MEND7_reg))
#define  MC_DMA_MC_HF_WDMA_MEND7_end_address7_shift                              (4)
#define  MC_DMA_MC_HF_WDMA_MEND7_end_address7_mask                               (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_MEND7_end_address7(data)                              (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_MEND7_get_end_address7(data)                          ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_WDMA_LSTEP                                                0x180994C4
#define  MC_DMA_MC_HF_WDMA_LSTEP_reg_addr                                        "0xB80994C4"
#define  MC_DMA_MC_HF_WDMA_LSTEP_reg                                             0xB80994C4
#define  MC_DMA_MC_HF_WDMA_LSTEP_inst_addr                                       "0x002C"
#define  set_MC_DMA_MC_HF_WDMA_LSTEP_reg(data)                                   (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_LSTEP_reg)=data)
#define  get_MC_DMA_MC_HF_WDMA_LSTEP_reg                                         (*((volatile unsigned int*)MC_DMA_MC_HF_WDMA_LSTEP_reg))
#define  MC_DMA_MC_HF_WDMA_LSTEP_line_offset_addr_shift                          (4)
#define  MC_DMA_MC_HF_WDMA_LSTEP_line_offset_addr_mask                           (0xFFFFFFF0)
#define  MC_DMA_MC_HF_WDMA_LSTEP_line_offset_addr(data)                          (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_WDMA_LSTEP_get_line_offset_addr(data)                      ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up                                      0x180994D0
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg_addr                              "0xB80994D0"
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg                                   0xB80994D0
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up_inst_addr                             "0x002D"
#define  set_MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg(data)                         (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg)=data)
#define  get_MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg                               (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg))
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up_dma_up_limit_shift                    (4)
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up_dma_up_limit_mask                     (0xFFFFFFF0)
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up_dma_up_limit(data)                    (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_up_get_dma_up_limit(data)                ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low                                     0x180994D8
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg_addr                             "0xB80994D8"
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg                                  0xB80994D8
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low_inst_addr                            "0x002E"
#define  set_MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg(data)                        (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg)=data)
#define  get_MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg                              (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg))
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low_dma_low_limit_shift                  (4)
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low_dma_low_limit_mask                   (0xFFFFFFF0)
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low_dma_low_limit(data)                  (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_DMA_WR_Rule_check_low_get_dma_low_limit(data)              ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_DMA_WR_Ctrl                                               0x180994DC
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_reg_addr                                       "0xB80994DC"
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_reg                                            0xB80994DC
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_inst_addr                                      "0x002F"
#define  set_MC_DMA_MC_HF_DMA_WR_Ctrl_reg(data)                                  (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Ctrl_reg)=data)
#define  get_MC_DMA_MC_HF_DMA_WR_Ctrl_reg                                        (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Ctrl_reg))
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_max_outstanding_shift                          (8)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_force_all_rst_shift                            (1)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_dma_enable_shift                               (0)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_max_outstanding_mask                           (0x00000700)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_force_all_rst_mask                             (0x00000002)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_dma_enable_mask                                (0x00000001)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_max_outstanding(data)                          (0x00000700&((data)<<8))
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_force_all_rst(data)                            (0x00000002&((data)<<1))
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_dma_enable(data)                               (0x00000001&(data))
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_get_max_outstanding(data)                      ((0x00000700&(data))>>8)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_get_force_all_rst(data)                        ((0x00000002&(data))>>1)
#define  MC_DMA_MC_HF_DMA_WR_Ctrl_get_dma_enable(data)                           (0x00000001&(data))

#define  MC_DMA_MC_HF_DMA_WR_status                                             0x180994E0
#define  MC_DMA_MC_HF_DMA_WR_status_reg_addr                                     "0xB80994E0"
#define  MC_DMA_MC_HF_DMA_WR_status_reg                                          0xB80994E0
#define  MC_DMA_MC_HF_DMA_WR_status_inst_addr                                    "0x0030"
#define  set_MC_DMA_MC_HF_DMA_WR_status_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_status_reg)=data)
#define  get_MC_DMA_MC_HF_DMA_WR_status_reg                                      (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_status_reg))
#define  MC_DMA_MC_HF_DMA_WR_status_dma_cmd_water_shift                          (28)
#define  MC_DMA_MC_HF_DMA_WR_status_dma_data_water_shift                         (16)
#define  MC_DMA_MC_HF_DMA_WR_status_cur_outstanding_shift                        (8)
#define  MC_DMA_MC_HF_DMA_WR_status_wdma_fifo_data_trdy_is_low_shift             (5)
#define  MC_DMA_MC_HF_DMA_WR_status_soft_rst_before_cmd_finish_shift             (4)
#define  MC_DMA_MC_HF_DMA_WR_status_soft_rst_with_data_left_shift                (3)
#define  MC_DMA_MC_HF_DMA_WR_status_data_fifo_underflow_err_shift                (2)
#define  MC_DMA_MC_HF_DMA_WR_status_exceed_range_err_shift                       (1)
#define  MC_DMA_MC_HF_DMA_WR_status_zero_length_err_shift                        (0)
#define  MC_DMA_MC_HF_DMA_WR_status_dma_cmd_water_mask                           (0x70000000)
#define  MC_DMA_MC_HF_DMA_WR_status_dma_data_water_mask                          (0x01FF0000)
#define  MC_DMA_MC_HF_DMA_WR_status_cur_outstanding_mask                         (0x00000F00)
#define  MC_DMA_MC_HF_DMA_WR_status_wdma_fifo_data_trdy_is_low_mask              (0x00000020)
#define  MC_DMA_MC_HF_DMA_WR_status_soft_rst_before_cmd_finish_mask              (0x00000010)
#define  MC_DMA_MC_HF_DMA_WR_status_soft_rst_with_data_left_mask                 (0x00000008)
#define  MC_DMA_MC_HF_DMA_WR_status_data_fifo_underflow_err_mask                 (0x00000004)
#define  MC_DMA_MC_HF_DMA_WR_status_exceed_range_err_mask                        (0x00000002)
#define  MC_DMA_MC_HF_DMA_WR_status_zero_length_err_mask                         (0x00000001)
#define  MC_DMA_MC_HF_DMA_WR_status_dma_cmd_water(data)                          (0x70000000&((data)<<28))
#define  MC_DMA_MC_HF_DMA_WR_status_dma_data_water(data)                         (0x01FF0000&((data)<<16))
#define  MC_DMA_MC_HF_DMA_WR_status_cur_outstanding(data)                        (0x00000F00&((data)<<8))
#define  MC_DMA_MC_HF_DMA_WR_status_wdma_fifo_data_trdy_is_low(data)             (0x00000020&((data)<<5))
#define  MC_DMA_MC_HF_DMA_WR_status_soft_rst_before_cmd_finish(data)             (0x00000010&((data)<<4))
#define  MC_DMA_MC_HF_DMA_WR_status_soft_rst_with_data_left(data)                (0x00000008&((data)<<3))
#define  MC_DMA_MC_HF_DMA_WR_status_data_fifo_underflow_err(data)                (0x00000004&((data)<<2))
#define  MC_DMA_MC_HF_DMA_WR_status_exceed_range_err(data)                       (0x00000002&((data)<<1))
#define  MC_DMA_MC_HF_DMA_WR_status_zero_length_err(data)                        (0x00000001&(data))
#define  MC_DMA_MC_HF_DMA_WR_status_get_dma_cmd_water(data)                      ((0x70000000&(data))>>28)
#define  MC_DMA_MC_HF_DMA_WR_status_get_dma_data_water(data)                     ((0x01FF0000&(data))>>16)
#define  MC_DMA_MC_HF_DMA_WR_status_get_cur_outstanding(data)                    ((0x00000F00&(data))>>8)
#define  MC_DMA_MC_HF_DMA_WR_status_get_wdma_fifo_data_trdy_is_low(data)         ((0x00000020&(data))>>5)
#define  MC_DMA_MC_HF_DMA_WR_status_get_soft_rst_before_cmd_finish(data)         ((0x00000010&(data))>>4)
#define  MC_DMA_MC_HF_DMA_WR_status_get_soft_rst_with_data_left(data)            ((0x00000008&(data))>>3)
#define  MC_DMA_MC_HF_DMA_WR_status_get_data_fifo_underflow_err(data)            ((0x00000004&(data))>>2)
#define  MC_DMA_MC_HF_DMA_WR_status_get_exceed_range_err(data)                   ((0x00000002&(data))>>1)
#define  MC_DMA_MC_HF_DMA_WR_status_get_zero_length_err(data)                    (0x00000001&(data))

#define  MC_DMA_MC_HF_DMA_WR_status1                                            0x180994E4
#define  MC_DMA_MC_HF_DMA_WR_status1_reg_addr                                    "0xB80994E4"
#define  MC_DMA_MC_HF_DMA_WR_status1_reg                                         0xB80994E4
#define  MC_DMA_MC_HF_DMA_WR_status1_inst_addr                                   "0x0031"
#define  set_MC_DMA_MC_HF_DMA_WR_status1_reg(data)                               (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_status1_reg)=data)
#define  get_MC_DMA_MC_HF_DMA_WR_status1_reg                                     (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_status1_reg))
#define  MC_DMA_MC_HF_DMA_WR_status1_ack_num_error_shift                         (31)
#define  MC_DMA_MC_HF_DMA_WR_status1_last_no_ack_error_shift                     (30)
#define  MC_DMA_MC_HF_DMA_WR_status1_target_ack_num_shift                        (16)
#define  MC_DMA_MC_HF_DMA_WR_status1_last_ack_num_shift                          (8)
#define  MC_DMA_MC_HF_DMA_WR_status1_selected_bl_shift                           (0)
#define  MC_DMA_MC_HF_DMA_WR_status1_ack_num_error_mask                          (0x80000000)
#define  MC_DMA_MC_HF_DMA_WR_status1_last_no_ack_error_mask                      (0x40000000)
#define  MC_DMA_MC_HF_DMA_WR_status1_target_ack_num_mask                         (0x007F0000)
#define  MC_DMA_MC_HF_DMA_WR_status1_last_ack_num_mask                           (0x00007F00)
#define  MC_DMA_MC_HF_DMA_WR_status1_selected_bl_mask                            (0x0000007F)
#define  MC_DMA_MC_HF_DMA_WR_status1_ack_num_error(data)                         (0x80000000&((data)<<31))
#define  MC_DMA_MC_HF_DMA_WR_status1_last_no_ack_error(data)                     (0x40000000&((data)<<30))
#define  MC_DMA_MC_HF_DMA_WR_status1_target_ack_num(data)                        (0x007F0000&((data)<<16))
#define  MC_DMA_MC_HF_DMA_WR_status1_last_ack_num(data)                          (0x00007F00&((data)<<8))
#define  MC_DMA_MC_HF_DMA_WR_status1_selected_bl(data)                           (0x0000007F&(data))
#define  MC_DMA_MC_HF_DMA_WR_status1_get_ack_num_error(data)                     ((0x80000000&(data))>>31)
#define  MC_DMA_MC_HF_DMA_WR_status1_get_last_no_ack_error(data)                 ((0x40000000&(data))>>30)
#define  MC_DMA_MC_HF_DMA_WR_status1_get_target_ack_num(data)                    ((0x007F0000&(data))>>16)
#define  MC_DMA_MC_HF_DMA_WR_status1_get_last_ack_num(data)                      ((0x00007F00&(data))>>8)
#define  MC_DMA_MC_HF_DMA_WR_status1_get_selected_bl(data)                       (0x0000007F&(data))

#define  MC_DMA_MC_HF_DMA_WR_status2                                            0x180994E8
#define  MC_DMA_MC_HF_DMA_WR_status2_reg_addr                                    "0xB80994E8"
#define  MC_DMA_MC_HF_DMA_WR_status2_reg                                         0xB80994E8
#define  MC_DMA_MC_HF_DMA_WR_status2_inst_addr                                   "0x0032"
#define  set_MC_DMA_MC_HF_DMA_WR_status2_reg(data)                               (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_status2_reg)=data)
#define  get_MC_DMA_MC_HF_DMA_WR_status2_reg                                     (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_status2_reg))
#define  MC_DMA_MC_HF_DMA_WR_status2_selected_addr_shift                         (4)
#define  MC_DMA_MC_HF_DMA_WR_status2_addr_bl_sel_shift                           (0)
#define  MC_DMA_MC_HF_DMA_WR_status2_selected_addr_mask                          (0xFFFFFFF0)
#define  MC_DMA_MC_HF_DMA_WR_status2_addr_bl_sel_mask                            (0x00000003)
#define  MC_DMA_MC_HF_DMA_WR_status2_selected_addr(data)                         (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_DMA_WR_status2_addr_bl_sel(data)                           (0x00000003&(data))
#define  MC_DMA_MC_HF_DMA_WR_status2_get_selected_addr(data)                     ((0xFFFFFFF0&(data))>>4)
#define  MC_DMA_MC_HF_DMA_WR_status2_get_addr_bl_sel(data)                       (0x00000003&(data))

#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor                                      0x180994EC
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_reg_addr                              "0xB80994EC"
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_reg                                   0xB80994EC
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_inst_addr                             "0x0033"
#define  set_MC_DMA_MC_HF_DMA_WR_Water_Monitor_reg(data)                         (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Water_Monitor_reg)=data)
#define  get_MC_DMA_MC_HF_DMA_WR_Water_Monitor_reg                               (*((volatile unsigned int*)MC_DMA_MC_HF_DMA_WR_Water_Monitor_reg))
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_en_shift                      (31)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_conti_shift                   (30)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_reach_thd_shift                       (24)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_thd_shift                     (15)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_highest_water_level_shift             (0)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_en_mask                       (0x80000000)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_conti_mask                    (0x40000000)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_reach_thd_mask                        (0x01000000)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_thd_mask                      (0x00FF8000)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_highest_water_level_mask              (0x000001FF)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_en(data)                      (0x80000000&((data)<<31))
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_conti(data)                   (0x40000000&((data)<<30))
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_reach_thd(data)                       (0x01000000&((data)<<24))
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_monitor_thd(data)                     (0x00FF8000&((data)<<15))
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_highest_water_level(data)             (0x000001FF&(data))
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_get_monitor_en(data)                  ((0x80000000&(data))>>31)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_get_monitor_conti(data)               ((0x40000000&(data))>>30)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_get_reach_thd(data)                   ((0x01000000&(data))>>24)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_get_monitor_thd(data)                 ((0x00FF8000&(data))>>15)
#define  MC_DMA_MC_HF_DMA_WR_Water_Monitor_get_highest_water_level(data)         (0x000001FF&(data))

#define  MC_DMA_MC_WDMA_DB_CTRL                                                 0x180994F0
#define  MC_DMA_MC_WDMA_DB_CTRL_reg_addr                                         "0xB80994F0"
#define  MC_DMA_MC_WDMA_DB_CTRL_reg                                              0xB80994F0
#define  MC_DMA_MC_WDMA_DB_CTRL_inst_addr                                        "0x0034"
#define  set_MC_DMA_MC_WDMA_DB_CTRL_reg(data)                                    (*((volatile unsigned int*)MC_DMA_MC_WDMA_DB_CTRL_reg)=data)
#define  get_MC_DMA_MC_WDMA_DB_CTRL_reg                                          (*((volatile unsigned int*)MC_DMA_MC_WDMA_DB_CTRL_reg))
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_apply_shift                           (2)
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_rd_sel_shift                          (1)
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_en_shift                              (0)
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_apply_mask                            (0x00000004)
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_rd_sel_mask                           (0x00000002)
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_en_mask                               (0x00000001)
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_apply(data)                           (0x00000004&((data)<<2))
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_rd_sel(data)                          (0x00000002&((data)<<1))
#define  MC_DMA_MC_WDMA_DB_CTRL_mc_wdma_db_en(data)                              (0x00000001&(data))
#define  MC_DMA_MC_WDMA_DB_CTRL_get_mc_wdma_db_apply(data)                       ((0x00000004&(data))>>2)
#define  MC_DMA_MC_WDMA_DB_CTRL_get_mc_wdma_db_rd_sel(data)                      ((0x00000002&(data))>>1)
#define  MC_DMA_MC_WDMA_DB_CTRL_get_mc_wdma_db_en(data)                          (0x00000001&(data))

#define  MC_DMA_MC_RDMA_CTRL                                                    0x1809AE00
#define  MC_DMA_MC_RDMA_CTRL_reg_addr                                            "0xB809AE00"
#define  MC_DMA_MC_RDMA_CTRL_reg                                                 0xB809AE00
#define  MC_DMA_MC_RDMA_CTRL_inst_addr                                           "0x0035"
#define  set_MC_DMA_MC_RDMA_CTRL_reg(data)                                       (*((volatile unsigned int*)MC_DMA_MC_RDMA_CTRL_reg)=data)
#define  get_MC_DMA_MC_RDMA_CTRL_reg                                             (*((volatile unsigned int*)MC_DMA_MC_RDMA_CTRL_reg))
#define  MC_DMA_MC_RDMA_CTRL_vflip_enable_shift                                  (4)
#define  MC_DMA_MC_RDMA_CTRL_dat_fmt_shift                                       (3)
#define  MC_DMA_MC_RDMA_CTRL_dat_bit_shift                                       (2)
#define  MC_DMA_MC_RDMA_CTRL_vflip_enable_mask                                   (0x00000010)
#define  MC_DMA_MC_RDMA_CTRL_dat_fmt_mask                                        (0x00000008)
#define  MC_DMA_MC_RDMA_CTRL_dat_bit_mask                                        (0x00000004)
#define  MC_DMA_MC_RDMA_CTRL_vflip_enable(data)                                  (0x00000010&((data)<<4))
#define  MC_DMA_MC_RDMA_CTRL_dat_fmt(data)                                       (0x00000008&((data)<<3))
#define  MC_DMA_MC_RDMA_CTRL_dat_bit(data)                                       (0x00000004&((data)<<2))
#define  MC_DMA_MC_RDMA_CTRL_get_vflip_enable(data)                              ((0x00000010&(data))>>4)
#define  MC_DMA_MC_RDMA_CTRL_get_dat_fmt(data)                                   ((0x00000008&(data))>>3)
#define  MC_DMA_MC_RDMA_CTRL_get_dat_bit(data)                                   ((0x00000004&(data))>>2)

#define  MC_DMA_MC_RDMA_CTRL1                                                   0x1809AE04
#define  MC_DMA_MC_RDMA_CTRL1_reg_addr                                           "0xB809AE04"
#define  MC_DMA_MC_RDMA_CTRL1_reg                                                0xB809AE04
#define  MC_DMA_MC_RDMA_CTRL1_inst_addr                                          "0x0036"
#define  set_MC_DMA_MC_RDMA_CTRL1_reg(data)                                      (*((volatile unsigned int*)MC_DMA_MC_RDMA_CTRL1_reg)=data)
#define  get_MC_DMA_MC_RDMA_CTRL1_reg                                            (*((volatile unsigned int*)MC_DMA_MC_RDMA_CTRL1_reg))
#define  MC_DMA_MC_RDMA_CTRL1_height_shift                                       (17)
#define  MC_DMA_MC_RDMA_CTRL1_width_shift                                        (0)
#define  MC_DMA_MC_RDMA_CTRL1_height_mask                                        (0x0FFE0000)
#define  MC_DMA_MC_RDMA_CTRL1_width_mask                                         (0x00000FFF)
#define  MC_DMA_MC_RDMA_CTRL1_height(data)                                       (0x0FFE0000&((data)<<17))
#define  MC_DMA_MC_RDMA_CTRL1_width(data)                                        (0x00000FFF&(data))
#define  MC_DMA_MC_RDMA_CTRL1_get_height(data)                                   ((0x0FFE0000&(data))>>17)
#define  MC_DMA_MC_RDMA_CTRL1_get_width(data)                                    (0x00000FFF&(data))

#define  MC_DMA_MC_LF_I_RDMA_NUM_BL                                             0x1809AE10
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_reg_addr                                     "0xB809AE10"
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_reg                                          0xB809AE10
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_inst_addr                                    "0x0037"
#define  set_MC_DMA_MC_LF_I_RDMA_NUM_BL_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_LF_I_RDMA_NUM_BL_reg)=data)
#define  get_MC_DMA_MC_LF_I_RDMA_NUM_BL_reg                                      (*((volatile unsigned int*)MC_DMA_MC_LF_I_RDMA_NUM_BL_reg))
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_num_shift                                    (16)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_bl_shift                                     (9)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_remain_shift                                 (1)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_num_mask                                     (0xFFFF0000)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_bl_mask                                      (0x0000FE00)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_remain_mask                                  (0x000000FE)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_num(data)                                    (0xFFFF0000&((data)<<16))
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_bl(data)                                     (0x0000FE00&((data)<<9))
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_remain(data)                                 (0x000000FE&((data)<<1))
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_get_num(data)                                ((0xFFFF0000&(data))>>16)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_get_bl(data)                                 ((0x0000FE00&(data))>>9)
#define  MC_DMA_MC_LF_I_RDMA_NUM_BL_get_remain(data)                             ((0x000000FE&(data))>>1)

#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up                                    0x1809AE14
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg_addr                            "0xB809AE14"
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg                                 0xB809AE14
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_inst_addr                           "0x0038"
#define  set_MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg)=data)
#define  get_MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg                             (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg))
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_dma_up_limit_shift                  (4)
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_dma_up_limit_mask                   (0xFFFFFFF0)
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_dma_up_limit(data)                  (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_get_dma_up_limit(data)              ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low                                   0x1809AE18
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg_addr                           "0xB809AE18"
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg                                0xB809AE18
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_inst_addr                          "0x0039"
#define  set_MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg(data)                      (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg)=data)
#define  get_MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg                            (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg))
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_dma_low_limit_shift                (4)
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_dma_low_limit_mask                 (0xFFFFFFF0)
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_dma_low_limit(data)                (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_get_dma_low_limit(data)            ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl                                             0x1809AE1C
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg_addr                                     "0xB809AE1C"
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg                                          0xB809AE1C
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_inst_addr                                    "0x003A"
#define  set_MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg)=data)
#define  get_MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg                                      (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg))
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_max_outstanding_shift                        (8)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_force_all_rst_shift                          (1)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_dma_enable_shift                             (0)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_max_outstanding_mask                         (0x00000700)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_force_all_rst_mask                           (0x00000002)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_dma_enable_mask                              (0x00000001)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_max_outstanding(data)                        (0x00000700&((data)<<8))
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_force_all_rst(data)                          (0x00000002&((data)<<1))
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_dma_enable(data)                             (0x00000001&(data))
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_get_max_outstanding(data)                    ((0x00000700&(data))>>8)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_get_force_all_rst(data)                      ((0x00000002&(data))>>1)
#define  MC_DMA_MC_LF_I_DMA_RD_Ctrl_get_dma_enable(data)                         (0x00000001&(data))

#define  MC_DMA_MC_LF_I_DMA_RD_status                                           0x1809AE20
#define  MC_DMA_MC_LF_I_DMA_RD_status_reg_addr                                   "0xB809AE20"
#define  MC_DMA_MC_LF_I_DMA_RD_status_reg                                        0xB809AE20
#define  MC_DMA_MC_LF_I_DMA_RD_status_inst_addr                                  "0x003B"
#define  set_MC_DMA_MC_LF_I_DMA_RD_status_reg(data)                              (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_status_reg)=data)
#define  get_MC_DMA_MC_LF_I_DMA_RD_status_reg                                    (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_status_reg))
#define  MC_DMA_MC_LF_I_DMA_RD_status_dma_cmd_water_shift                        (28)
#define  MC_DMA_MC_LF_I_DMA_RD_status_dma_data_water_shift                       (16)
#define  MC_DMA_MC_LF_I_DMA_RD_status_cur_outstanding_shift                      (8)
#define  MC_DMA_MC_LF_I_DMA_RD_status_rdma_fifo_data_irdy_is_low_shift           (5)
#define  MC_DMA_MC_LF_I_DMA_RD_status_soft_rst_before_cmd_finish_shift           (4)
#define  MC_DMA_MC_LF_I_DMA_RD_status_soft_rst_with_data_left_shift              (3)
#define  MC_DMA_MC_LF_I_DMA_RD_status_data_fifo_overflow_err_shift               (2)
#define  MC_DMA_MC_LF_I_DMA_RD_status_exceed_range_err_shift                     (1)
#define  MC_DMA_MC_LF_I_DMA_RD_status_zero_length_err_shift                      (0)
#define  MC_DMA_MC_LF_I_DMA_RD_status_dma_cmd_water_mask                         (0x70000000)
#define  MC_DMA_MC_LF_I_DMA_RD_status_dma_data_water_mask                        (0x01FF0000)
#define  MC_DMA_MC_LF_I_DMA_RD_status_cur_outstanding_mask                       (0x00000F00)
#define  MC_DMA_MC_LF_I_DMA_RD_status_rdma_fifo_data_irdy_is_low_mask            (0x00000020)
#define  MC_DMA_MC_LF_I_DMA_RD_status_soft_rst_before_cmd_finish_mask            (0x00000010)
#define  MC_DMA_MC_LF_I_DMA_RD_status_soft_rst_with_data_left_mask               (0x00000008)
#define  MC_DMA_MC_LF_I_DMA_RD_status_data_fifo_overflow_err_mask                (0x00000004)
#define  MC_DMA_MC_LF_I_DMA_RD_status_exceed_range_err_mask                      (0x00000002)
#define  MC_DMA_MC_LF_I_DMA_RD_status_zero_length_err_mask                       (0x00000001)
#define  MC_DMA_MC_LF_I_DMA_RD_status_dma_cmd_water(data)                        (0x70000000&((data)<<28))
#define  MC_DMA_MC_LF_I_DMA_RD_status_dma_data_water(data)                       (0x01FF0000&((data)<<16))
#define  MC_DMA_MC_LF_I_DMA_RD_status_cur_outstanding(data)                      (0x00000F00&((data)<<8))
#define  MC_DMA_MC_LF_I_DMA_RD_status_rdma_fifo_data_irdy_is_low(data)           (0x00000020&((data)<<5))
#define  MC_DMA_MC_LF_I_DMA_RD_status_soft_rst_before_cmd_finish(data)           (0x00000010&((data)<<4))
#define  MC_DMA_MC_LF_I_DMA_RD_status_soft_rst_with_data_left(data)              (0x00000008&((data)<<3))
#define  MC_DMA_MC_LF_I_DMA_RD_status_data_fifo_overflow_err(data)               (0x00000004&((data)<<2))
#define  MC_DMA_MC_LF_I_DMA_RD_status_exceed_range_err(data)                     (0x00000002&((data)<<1))
#define  MC_DMA_MC_LF_I_DMA_RD_status_zero_length_err(data)                      (0x00000001&(data))
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_dma_cmd_water(data)                    ((0x70000000&(data))>>28)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_dma_data_water(data)                   ((0x01FF0000&(data))>>16)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_cur_outstanding(data)                  ((0x00000F00&(data))>>8)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_rdma_fifo_data_irdy_is_low(data)       ((0x00000020&(data))>>5)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_soft_rst_before_cmd_finish(data)       ((0x00000010&(data))>>4)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_soft_rst_with_data_left(data)          ((0x00000008&(data))>>3)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_data_fifo_overflow_err(data)           ((0x00000004&(data))>>2)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_exceed_range_err(data)                 ((0x00000002&(data))>>1)
#define  MC_DMA_MC_LF_I_DMA_RD_status_get_zero_length_err(data)                  (0x00000001&(data))

#define  MC_DMA_MC_LF_I_DMA_RD_status1                                          0x1809AE24
#define  MC_DMA_MC_LF_I_DMA_RD_status1_reg_addr                                  "0xB809AE24"
#define  MC_DMA_MC_LF_I_DMA_RD_status1_reg                                       0xB809AE24
#define  MC_DMA_MC_LF_I_DMA_RD_status1_inst_addr                                 "0x003C"
#define  set_MC_DMA_MC_LF_I_DMA_RD_status1_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_status1_reg)=data)
#define  get_MC_DMA_MC_LF_I_DMA_RD_status1_reg                                   (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_status1_reg))
#define  MC_DMA_MC_LF_I_DMA_RD_status1_ack_num_error_shift                       (31)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_last_no_ack_error_shift                   (30)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_target_ack_num_shift                      (16)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_last_ack_num_shift                        (8)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_selected_bl_shift                         (0)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_ack_num_error_mask                        (0x80000000)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_last_no_ack_error_mask                    (0x40000000)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_target_ack_num_mask                       (0x007F0000)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_last_ack_num_mask                         (0x00007F00)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_selected_bl_mask                          (0x0000007F)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_ack_num_error(data)                       (0x80000000&((data)<<31))
#define  MC_DMA_MC_LF_I_DMA_RD_status1_last_no_ack_error(data)                   (0x40000000&((data)<<30))
#define  MC_DMA_MC_LF_I_DMA_RD_status1_target_ack_num(data)                      (0x007F0000&((data)<<16))
#define  MC_DMA_MC_LF_I_DMA_RD_status1_last_ack_num(data)                        (0x00007F00&((data)<<8))
#define  MC_DMA_MC_LF_I_DMA_RD_status1_selected_bl(data)                         (0x0000007F&(data))
#define  MC_DMA_MC_LF_I_DMA_RD_status1_get_ack_num_error(data)                   ((0x80000000&(data))>>31)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_get_last_no_ack_error(data)               ((0x40000000&(data))>>30)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_get_target_ack_num(data)                  ((0x007F0000&(data))>>16)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_get_last_ack_num(data)                    ((0x00007F00&(data))>>8)
#define  MC_DMA_MC_LF_I_DMA_RD_status1_get_selected_bl(data)                     (0x0000007F&(data))

#define  MC_DMA_MC_LF_I_DMA_RD_status2                                          0x1809AE28
#define  MC_DMA_MC_LF_I_DMA_RD_status2_reg_addr                                  "0xB809AE28"
#define  MC_DMA_MC_LF_I_DMA_RD_status2_reg                                       0xB809AE28
#define  MC_DMA_MC_LF_I_DMA_RD_status2_inst_addr                                 "0x003D"
#define  set_MC_DMA_MC_LF_I_DMA_RD_status2_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_status2_reg)=data)
#define  get_MC_DMA_MC_LF_I_DMA_RD_status2_reg                                   (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_status2_reg))
#define  MC_DMA_MC_LF_I_DMA_RD_status2_selected_addr_shift                       (4)
#define  MC_DMA_MC_LF_I_DMA_RD_status2_addr_bl_sel_shift                         (0)
#define  MC_DMA_MC_LF_I_DMA_RD_status2_selected_addr_mask                        (0xFFFFFFF0)
#define  MC_DMA_MC_LF_I_DMA_RD_status2_addr_bl_sel_mask                          (0x00000003)
#define  MC_DMA_MC_LF_I_DMA_RD_status2_selected_addr(data)                       (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_I_DMA_RD_status2_addr_bl_sel(data)                         (0x00000003&(data))
#define  MC_DMA_MC_LF_I_DMA_RD_status2_get_selected_addr(data)                   ((0xFFFFFFF0&(data))>>4)
#define  MC_DMA_MC_LF_I_DMA_RD_status2_get_addr_bl_sel(data)                     (0x00000003&(data))

#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor                                    0x1809AE2C
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reg_addr                            "0xB809AE2C"
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reg                                 0xB809AE2C
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_inst_addr                           "0x003E"
#define  set_MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reg)=data)
#define  get_MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reg                             (*((volatile unsigned int*)MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reg))
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_en_shift                    (31)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_conti_shift                 (30)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reach_thd_shift                     (24)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_thd_shift                   (15)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_lowest_water_level_shift            (0)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_en_mask                     (0x80000000)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_conti_mask                  (0x40000000)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reach_thd_mask                      (0x01000000)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_thd_mask                    (0x00FF8000)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_lowest_water_level_mask             (0x000001FF)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_en(data)                    (0x80000000&((data)<<31))
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_conti(data)                 (0x40000000&((data)<<30))
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_reach_thd(data)                     (0x01000000&((data)<<24))
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_monitor_thd(data)                   (0x00FF8000&((data)<<15))
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_lowest_water_level(data)            (0x000001FF&(data))
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_get_monitor_en(data)                ((0x80000000&(data))>>31)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_get_monitor_conti(data)             ((0x40000000&(data))>>30)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_get_reach_thd(data)                 ((0x01000000&(data))>>24)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_get_monitor_thd(data)               ((0x00FF8000&(data))>>15)
#define  MC_DMA_MC_LF_I_DMA_RD_Water_Monitor_get_lowest_water_level(data)        (0x000001FF&(data))

#define  MC_DMA_MC_HF_I_RDMA_NUM_BL                                             0x1809AE30
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_reg_addr                                     "0xB809AE30"
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_reg                                          0xB809AE30
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_inst_addr                                    "0x003F"
#define  set_MC_DMA_MC_HF_I_RDMA_NUM_BL_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_HF_I_RDMA_NUM_BL_reg)=data)
#define  get_MC_DMA_MC_HF_I_RDMA_NUM_BL_reg                                      (*((volatile unsigned int*)MC_DMA_MC_HF_I_RDMA_NUM_BL_reg))
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_num_shift                                    (16)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_bl_shift                                     (9)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_remain_shift                                 (1)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_num_mask                                     (0xFFFF0000)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_bl_mask                                      (0x0000FE00)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_remain_mask                                  (0x000000FE)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_num(data)                                    (0xFFFF0000&((data)<<16))
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_bl(data)                                     (0x0000FE00&((data)<<9))
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_remain(data)                                 (0x000000FE&((data)<<1))
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_get_num(data)                                ((0xFFFF0000&(data))>>16)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_get_bl(data)                                 ((0x0000FE00&(data))>>9)
#define  MC_DMA_MC_HF_I_RDMA_NUM_BL_get_remain(data)                             ((0x000000FE&(data))>>1)

#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up                                    0x1809AE34
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg_addr                            "0xB809AE34"
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg                                 0xB809AE34
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_inst_addr                           "0x0040"
#define  set_MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg)=data)
#define  get_MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg                             (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg))
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_dma_up_limit_shift                  (4)
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_dma_up_limit_mask                   (0xFFFFFFF0)
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_dma_up_limit(data)                  (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_get_dma_up_limit(data)              ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low                                   0x1809AE38
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg_addr                           "0xB809AE38"
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg                                0xB809AE38
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_inst_addr                          "0x0041"
#define  set_MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg(data)                      (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg)=data)
#define  get_MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg                            (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg))
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_dma_low_limit_shift                (4)
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_dma_low_limit_mask                 (0xFFFFFFF0)
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_dma_low_limit(data)                (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_get_dma_low_limit(data)            ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl                                             0x1809AE3C
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg_addr                                     "0xB809AE3C"
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg                                          0xB809AE3C
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_inst_addr                                    "0x0042"
#define  set_MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg)=data)
#define  get_MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg                                      (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg))
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_max_outstanding_shift                        (8)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_force_all_rst_shift                          (1)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_dma_enable_shift                             (0)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_max_outstanding_mask                         (0x00000700)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_force_all_rst_mask                           (0x00000002)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_dma_enable_mask                              (0x00000001)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_max_outstanding(data)                        (0x00000700&((data)<<8))
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_force_all_rst(data)                          (0x00000002&((data)<<1))
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_dma_enable(data)                             (0x00000001&(data))
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_get_max_outstanding(data)                    ((0x00000700&(data))>>8)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_get_force_all_rst(data)                      ((0x00000002&(data))>>1)
#define  MC_DMA_MC_HF_I_DMA_RD_Ctrl_get_dma_enable(data)                         (0x00000001&(data))

#define  MC_DMA_MC_HF_I_DMA_RD_status                                           0x1809AE40
#define  MC_DMA_MC_HF_I_DMA_RD_status_reg_addr                                   "0xB809AE40"
#define  MC_DMA_MC_HF_I_DMA_RD_status_reg                                        0xB809AE40
#define  MC_DMA_MC_HF_I_DMA_RD_status_inst_addr                                  "0x0043"
#define  set_MC_DMA_MC_HF_I_DMA_RD_status_reg(data)                              (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_status_reg)=data)
#define  get_MC_DMA_MC_HF_I_DMA_RD_status_reg                                    (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_status_reg))
#define  MC_DMA_MC_HF_I_DMA_RD_status_dma_cmd_water_shift                        (28)
#define  MC_DMA_MC_HF_I_DMA_RD_status_dma_data_water_shift                       (16)
#define  MC_DMA_MC_HF_I_DMA_RD_status_cur_outstanding_shift                      (8)
#define  MC_DMA_MC_HF_I_DMA_RD_status_rdma_fifo_data_irdy_is_low_shift           (5)
#define  MC_DMA_MC_HF_I_DMA_RD_status_soft_rst_before_cmd_finish_shift           (4)
#define  MC_DMA_MC_HF_I_DMA_RD_status_soft_rst_with_data_left_shift              (3)
#define  MC_DMA_MC_HF_I_DMA_RD_status_data_fifo_overflow_err_shift               (2)
#define  MC_DMA_MC_HF_I_DMA_RD_status_exceed_range_err_shift                     (1)
#define  MC_DMA_MC_HF_I_DMA_RD_status_zero_length_err_shift                      (0)
#define  MC_DMA_MC_HF_I_DMA_RD_status_dma_cmd_water_mask                         (0x70000000)
#define  MC_DMA_MC_HF_I_DMA_RD_status_dma_data_water_mask                        (0x01FF0000)
#define  MC_DMA_MC_HF_I_DMA_RD_status_cur_outstanding_mask                       (0x00000F00)
#define  MC_DMA_MC_HF_I_DMA_RD_status_rdma_fifo_data_irdy_is_low_mask            (0x00000020)
#define  MC_DMA_MC_HF_I_DMA_RD_status_soft_rst_before_cmd_finish_mask            (0x00000010)
#define  MC_DMA_MC_HF_I_DMA_RD_status_soft_rst_with_data_left_mask               (0x00000008)
#define  MC_DMA_MC_HF_I_DMA_RD_status_data_fifo_overflow_err_mask                (0x00000004)
#define  MC_DMA_MC_HF_I_DMA_RD_status_exceed_range_err_mask                      (0x00000002)
#define  MC_DMA_MC_HF_I_DMA_RD_status_zero_length_err_mask                       (0x00000001)
#define  MC_DMA_MC_HF_I_DMA_RD_status_dma_cmd_water(data)                        (0x70000000&((data)<<28))
#define  MC_DMA_MC_HF_I_DMA_RD_status_dma_data_water(data)                       (0x01FF0000&((data)<<16))
#define  MC_DMA_MC_HF_I_DMA_RD_status_cur_outstanding(data)                      (0x00000F00&((data)<<8))
#define  MC_DMA_MC_HF_I_DMA_RD_status_rdma_fifo_data_irdy_is_low(data)           (0x00000020&((data)<<5))
#define  MC_DMA_MC_HF_I_DMA_RD_status_soft_rst_before_cmd_finish(data)           (0x00000010&((data)<<4))
#define  MC_DMA_MC_HF_I_DMA_RD_status_soft_rst_with_data_left(data)              (0x00000008&((data)<<3))
#define  MC_DMA_MC_HF_I_DMA_RD_status_data_fifo_overflow_err(data)               (0x00000004&((data)<<2))
#define  MC_DMA_MC_HF_I_DMA_RD_status_exceed_range_err(data)                     (0x00000002&((data)<<1))
#define  MC_DMA_MC_HF_I_DMA_RD_status_zero_length_err(data)                      (0x00000001&(data))
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_dma_cmd_water(data)                    ((0x70000000&(data))>>28)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_dma_data_water(data)                   ((0x01FF0000&(data))>>16)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_cur_outstanding(data)                  ((0x00000F00&(data))>>8)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_rdma_fifo_data_irdy_is_low(data)       ((0x00000020&(data))>>5)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_soft_rst_before_cmd_finish(data)       ((0x00000010&(data))>>4)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_soft_rst_with_data_left(data)          ((0x00000008&(data))>>3)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_data_fifo_overflow_err(data)           ((0x00000004&(data))>>2)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_exceed_range_err(data)                 ((0x00000002&(data))>>1)
#define  MC_DMA_MC_HF_I_DMA_RD_status_get_zero_length_err(data)                  (0x00000001&(data))

#define  MC_DMA_MC_HF_I_DMA_RD_status1                                          0x1809AE44
#define  MC_DMA_MC_HF_I_DMA_RD_status1_reg_addr                                  "0xB809AE44"
#define  MC_DMA_MC_HF_I_DMA_RD_status1_reg                                       0xB809AE44
#define  MC_DMA_MC_HF_I_DMA_RD_status1_inst_addr                                 "0x0044"
#define  set_MC_DMA_MC_HF_I_DMA_RD_status1_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_status1_reg)=data)
#define  get_MC_DMA_MC_HF_I_DMA_RD_status1_reg                                   (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_status1_reg))
#define  MC_DMA_MC_HF_I_DMA_RD_status1_ack_num_error_shift                       (31)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_last_no_ack_error_shift                   (30)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_target_ack_num_shift                      (16)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_last_ack_num_shift                        (8)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_selected_bl_shift                         (0)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_ack_num_error_mask                        (0x80000000)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_last_no_ack_error_mask                    (0x40000000)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_target_ack_num_mask                       (0x007F0000)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_last_ack_num_mask                         (0x00007F00)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_selected_bl_mask                          (0x0000007F)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_ack_num_error(data)                       (0x80000000&((data)<<31))
#define  MC_DMA_MC_HF_I_DMA_RD_status1_last_no_ack_error(data)                   (0x40000000&((data)<<30))
#define  MC_DMA_MC_HF_I_DMA_RD_status1_target_ack_num(data)                      (0x007F0000&((data)<<16))
#define  MC_DMA_MC_HF_I_DMA_RD_status1_last_ack_num(data)                        (0x00007F00&((data)<<8))
#define  MC_DMA_MC_HF_I_DMA_RD_status1_selected_bl(data)                         (0x0000007F&(data))
#define  MC_DMA_MC_HF_I_DMA_RD_status1_get_ack_num_error(data)                   ((0x80000000&(data))>>31)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_get_last_no_ack_error(data)               ((0x40000000&(data))>>30)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_get_target_ack_num(data)                  ((0x007F0000&(data))>>16)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_get_last_ack_num(data)                    ((0x00007F00&(data))>>8)
#define  MC_DMA_MC_HF_I_DMA_RD_status1_get_selected_bl(data)                     (0x0000007F&(data))

#define  MC_DMA_MC_HF_I_DMA_RD_status2                                          0x1809AE48
#define  MC_DMA_MC_HF_I_DMA_RD_status2_reg_addr                                  "0xB809AE48"
#define  MC_DMA_MC_HF_I_DMA_RD_status2_reg                                       0xB809AE48
#define  MC_DMA_MC_HF_I_DMA_RD_status2_inst_addr                                 "0x0045"
#define  set_MC_DMA_MC_HF_I_DMA_RD_status2_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_status2_reg)=data)
#define  get_MC_DMA_MC_HF_I_DMA_RD_status2_reg                                   (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_status2_reg))
#define  MC_DMA_MC_HF_I_DMA_RD_status2_selected_addr_shift                       (4)
#define  MC_DMA_MC_HF_I_DMA_RD_status2_addr_bl_sel_shift                         (0)
#define  MC_DMA_MC_HF_I_DMA_RD_status2_selected_addr_mask                        (0xFFFFFFF0)
#define  MC_DMA_MC_HF_I_DMA_RD_status2_addr_bl_sel_mask                          (0x00000003)
#define  MC_DMA_MC_HF_I_DMA_RD_status2_selected_addr(data)                       (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_I_DMA_RD_status2_addr_bl_sel(data)                         (0x00000003&(data))
#define  MC_DMA_MC_HF_I_DMA_RD_status2_get_selected_addr(data)                   ((0xFFFFFFF0&(data))>>4)
#define  MC_DMA_MC_HF_I_DMA_RD_status2_get_addr_bl_sel(data)                     (0x00000003&(data))

#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor                                    0x1809AE4C
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reg_addr                            "0xB809AE4C"
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reg                                 0xB809AE4C
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_inst_addr                           "0x0046"
#define  set_MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reg)=data)
#define  get_MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reg                             (*((volatile unsigned int*)MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reg))
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_en_shift                    (31)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_conti_shift                 (30)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reach_thd_shift                     (24)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_thd_shift                   (15)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_lowest_water_level_shift            (0)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_en_mask                     (0x80000000)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_conti_mask                  (0x40000000)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reach_thd_mask                      (0x01000000)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_thd_mask                    (0x00FF8000)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_lowest_water_level_mask             (0x000001FF)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_en(data)                    (0x80000000&((data)<<31))
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_conti(data)                 (0x40000000&((data)<<30))
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_reach_thd(data)                     (0x01000000&((data)<<24))
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_monitor_thd(data)                   (0x00FF8000&((data)<<15))
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_lowest_water_level(data)            (0x000001FF&(data))
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_get_monitor_en(data)                ((0x80000000&(data))>>31)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_get_monitor_conti(data)             ((0x40000000&(data))>>30)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_get_reach_thd(data)                 ((0x01000000&(data))>>24)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_get_monitor_thd(data)               ((0x00FF8000&(data))>>15)
#define  MC_DMA_MC_HF_I_DMA_RD_Water_Monitor_get_lowest_water_level(data)        (0x000001FF&(data))

#define  MC_DMA_MC_LF_P_RDMA_NUM_BL                                             0x1809AE50
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_reg_addr                                     "0xB809AE50"
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_reg                                          0xB809AE50
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_inst_addr                                    "0x0047"
#define  set_MC_DMA_MC_LF_P_RDMA_NUM_BL_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_LF_P_RDMA_NUM_BL_reg)=data)
#define  get_MC_DMA_MC_LF_P_RDMA_NUM_BL_reg                                      (*((volatile unsigned int*)MC_DMA_MC_LF_P_RDMA_NUM_BL_reg))
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_num_shift                                    (16)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_bl_shift                                     (9)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_remain_shift                                 (1)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_num_mask                                     (0xFFFF0000)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_bl_mask                                      (0x0000FE00)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_remain_mask                                  (0x000000FE)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_num(data)                                    (0xFFFF0000&((data)<<16))
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_bl(data)                                     (0x0000FE00&((data)<<9))
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_remain(data)                                 (0x000000FE&((data)<<1))
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_get_num(data)                                ((0xFFFF0000&(data))>>16)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_get_bl(data)                                 ((0x0000FE00&(data))>>9)
#define  MC_DMA_MC_LF_P_RDMA_NUM_BL_get_remain(data)                             ((0x000000FE&(data))>>1)

#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up                                    0x1809AE54
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg_addr                            "0xB809AE54"
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg                                 0xB809AE54
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_inst_addr                           "0x0048"
#define  set_MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg)=data)
#define  get_MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg                             (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg))
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_dma_up_limit_shift                  (4)
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_dma_up_limit_mask                   (0xFFFFFFF0)
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_dma_up_limit(data)                  (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_get_dma_up_limit(data)              ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low                                   0x1809AE58
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg_addr                           "0xB809AE58"
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg                                0xB809AE58
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_inst_addr                          "0x0049"
#define  set_MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg(data)                      (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg)=data)
#define  get_MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg                            (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg))
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_dma_low_limit_shift                (4)
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_dma_low_limit_mask                 (0xFFFFFFF0)
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_dma_low_limit(data)                (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_get_dma_low_limit(data)            ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl                                             0x1809AE5C
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg_addr                                     "0xB809AE5C"
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg                                          0xB809AE5C
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_inst_addr                                    "0x004A"
#define  set_MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg)=data)
#define  get_MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg                                      (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg))
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_max_outstanding_shift                        (8)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_force_all_rst_shift                          (1)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_dma_enable_shift                             (0)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_max_outstanding_mask                         (0x00000700)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_force_all_rst_mask                           (0x00000002)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_dma_enable_mask                              (0x00000001)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_max_outstanding(data)                        (0x00000700&((data)<<8))
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_force_all_rst(data)                          (0x00000002&((data)<<1))
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_dma_enable(data)                             (0x00000001&(data))
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_get_max_outstanding(data)                    ((0x00000700&(data))>>8)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_get_force_all_rst(data)                      ((0x00000002&(data))>>1)
#define  MC_DMA_MC_LF_P_DMA_RD_Ctrl_get_dma_enable(data)                         (0x00000001&(data))

#define  MC_DMA_MC_LF_P_DMA_RD_status                                           0x1809AE60
#define  MC_DMA_MC_LF_P_DMA_RD_status_reg_addr                                   "0xB809AE60"
#define  MC_DMA_MC_LF_P_DMA_RD_status_reg                                        0xB809AE60
#define  MC_DMA_MC_LF_P_DMA_RD_status_inst_addr                                  "0x004B"
#define  set_MC_DMA_MC_LF_P_DMA_RD_status_reg(data)                              (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_status_reg)=data)
#define  get_MC_DMA_MC_LF_P_DMA_RD_status_reg                                    (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_status_reg))
#define  MC_DMA_MC_LF_P_DMA_RD_status_dma_cmd_water_shift                        (28)
#define  MC_DMA_MC_LF_P_DMA_RD_status_dma_data_water_shift                       (16)
#define  MC_DMA_MC_LF_P_DMA_RD_status_cur_outstanding_shift                      (8)
#define  MC_DMA_MC_LF_P_DMA_RD_status_rdma_fifo_data_irdy_is_low_shift           (5)
#define  MC_DMA_MC_LF_P_DMA_RD_status_soft_rst_before_cmd_finish_shift           (4)
#define  MC_DMA_MC_LF_P_DMA_RD_status_soft_rst_with_data_left_shift              (3)
#define  MC_DMA_MC_LF_P_DMA_RD_status_data_fifo_overflow_err_shift               (2)
#define  MC_DMA_MC_LF_P_DMA_RD_status_exceed_range_err_shift                     (1)
#define  MC_DMA_MC_LF_P_DMA_RD_status_zero_length_err_shift                      (0)
#define  MC_DMA_MC_LF_P_DMA_RD_status_dma_cmd_water_mask                         (0x70000000)
#define  MC_DMA_MC_LF_P_DMA_RD_status_dma_data_water_mask                        (0x01FF0000)
#define  MC_DMA_MC_LF_P_DMA_RD_status_cur_outstanding_mask                       (0x00000F00)
#define  MC_DMA_MC_LF_P_DMA_RD_status_rdma_fifo_data_irdy_is_low_mask            (0x00000020)
#define  MC_DMA_MC_LF_P_DMA_RD_status_soft_rst_before_cmd_finish_mask            (0x00000010)
#define  MC_DMA_MC_LF_P_DMA_RD_status_soft_rst_with_data_left_mask               (0x00000008)
#define  MC_DMA_MC_LF_P_DMA_RD_status_data_fifo_overflow_err_mask                (0x00000004)
#define  MC_DMA_MC_LF_P_DMA_RD_status_exceed_range_err_mask                      (0x00000002)
#define  MC_DMA_MC_LF_P_DMA_RD_status_zero_length_err_mask                       (0x00000001)
#define  MC_DMA_MC_LF_P_DMA_RD_status_dma_cmd_water(data)                        (0x70000000&((data)<<28))
#define  MC_DMA_MC_LF_P_DMA_RD_status_dma_data_water(data)                       (0x01FF0000&((data)<<16))
#define  MC_DMA_MC_LF_P_DMA_RD_status_cur_outstanding(data)                      (0x00000F00&((data)<<8))
#define  MC_DMA_MC_LF_P_DMA_RD_status_rdma_fifo_data_irdy_is_low(data)           (0x00000020&((data)<<5))
#define  MC_DMA_MC_LF_P_DMA_RD_status_soft_rst_before_cmd_finish(data)           (0x00000010&((data)<<4))
#define  MC_DMA_MC_LF_P_DMA_RD_status_soft_rst_with_data_left(data)              (0x00000008&((data)<<3))
#define  MC_DMA_MC_LF_P_DMA_RD_status_data_fifo_overflow_err(data)               (0x00000004&((data)<<2))
#define  MC_DMA_MC_LF_P_DMA_RD_status_exceed_range_err(data)                     (0x00000002&((data)<<1))
#define  MC_DMA_MC_LF_P_DMA_RD_status_zero_length_err(data)                      (0x00000001&(data))
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_dma_cmd_water(data)                    ((0x70000000&(data))>>28)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_dma_data_water(data)                   ((0x01FF0000&(data))>>16)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_cur_outstanding(data)                  ((0x00000F00&(data))>>8)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_rdma_fifo_data_irdy_is_low(data)       ((0x00000020&(data))>>5)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_soft_rst_before_cmd_finish(data)       ((0x00000010&(data))>>4)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_soft_rst_with_data_left(data)          ((0x00000008&(data))>>3)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_data_fifo_overflow_err(data)           ((0x00000004&(data))>>2)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_exceed_range_err(data)                 ((0x00000002&(data))>>1)
#define  MC_DMA_MC_LF_P_DMA_RD_status_get_zero_length_err(data)                  (0x00000001&(data))

#define  MC_DMA_MC_LF_P_DMA_RD_status1                                          0x1809AE64
#define  MC_DMA_MC_LF_P_DMA_RD_status1_reg_addr                                  "0xB809AE64"
#define  MC_DMA_MC_LF_P_DMA_RD_status1_reg                                       0xB809AE64
#define  MC_DMA_MC_LF_P_DMA_RD_status1_inst_addr                                 "0x004C"
#define  set_MC_DMA_MC_LF_P_DMA_RD_status1_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_status1_reg)=data)
#define  get_MC_DMA_MC_LF_P_DMA_RD_status1_reg                                   (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_status1_reg))
#define  MC_DMA_MC_LF_P_DMA_RD_status1_ack_num_error_shift                       (31)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_last_no_ack_error_shift                   (30)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_target_ack_num_shift                      (16)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_last_ack_num_shift                        (8)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_selected_bl_shift                         (0)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_ack_num_error_mask                        (0x80000000)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_last_no_ack_error_mask                    (0x40000000)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_target_ack_num_mask                       (0x007F0000)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_last_ack_num_mask                         (0x00007F00)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_selected_bl_mask                          (0x0000007F)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_ack_num_error(data)                       (0x80000000&((data)<<31))
#define  MC_DMA_MC_LF_P_DMA_RD_status1_last_no_ack_error(data)                   (0x40000000&((data)<<30))
#define  MC_DMA_MC_LF_P_DMA_RD_status1_target_ack_num(data)                      (0x007F0000&((data)<<16))
#define  MC_DMA_MC_LF_P_DMA_RD_status1_last_ack_num(data)                        (0x00007F00&((data)<<8))
#define  MC_DMA_MC_LF_P_DMA_RD_status1_selected_bl(data)                         (0x0000007F&(data))
#define  MC_DMA_MC_LF_P_DMA_RD_status1_get_ack_num_error(data)                   ((0x80000000&(data))>>31)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_get_last_no_ack_error(data)               ((0x40000000&(data))>>30)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_get_target_ack_num(data)                  ((0x007F0000&(data))>>16)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_get_last_ack_num(data)                    ((0x00007F00&(data))>>8)
#define  MC_DMA_MC_LF_P_DMA_RD_status1_get_selected_bl(data)                     (0x0000007F&(data))

#define  MC_DMA_MC_LF_P_DMA_RD_status2                                          0x1809AE68
#define  MC_DMA_MC_LF_P_DMA_RD_status2_reg_addr                                  "0xB809AE68"
#define  MC_DMA_MC_LF_P_DMA_RD_status2_reg                                       0xB809AE68
#define  MC_DMA_MC_LF_P_DMA_RD_status2_inst_addr                                 "0x004D"
#define  set_MC_DMA_MC_LF_P_DMA_RD_status2_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_status2_reg)=data)
#define  get_MC_DMA_MC_LF_P_DMA_RD_status2_reg                                   (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_status2_reg))
#define  MC_DMA_MC_LF_P_DMA_RD_status2_selected_addr_shift                       (4)
#define  MC_DMA_MC_LF_P_DMA_RD_status2_addr_bl_sel_shift                         (0)
#define  MC_DMA_MC_LF_P_DMA_RD_status2_selected_addr_mask                        (0xFFFFFFF0)
#define  MC_DMA_MC_LF_P_DMA_RD_status2_addr_bl_sel_mask                          (0x00000003)
#define  MC_DMA_MC_LF_P_DMA_RD_status2_selected_addr(data)                       (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_LF_P_DMA_RD_status2_addr_bl_sel(data)                         (0x00000003&(data))
#define  MC_DMA_MC_LF_P_DMA_RD_status2_get_selected_addr(data)                   ((0xFFFFFFF0&(data))>>4)
#define  MC_DMA_MC_LF_P_DMA_RD_status2_get_addr_bl_sel(data)                     (0x00000003&(data))

#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor                                    0x1809AE6C
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reg_addr                            "0xB809AE6C"
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reg                                 0xB809AE6C
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_inst_addr                           "0x004E"
#define  set_MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reg)=data)
#define  get_MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reg                             (*((volatile unsigned int*)MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reg))
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_en_shift                    (31)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_conti_shift                 (30)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reach_thd_shift                     (24)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_thd_shift                   (15)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_lowest_water_level_shift            (0)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_en_mask                     (0x80000000)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_conti_mask                  (0x40000000)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reach_thd_mask                      (0x01000000)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_thd_mask                    (0x00FF8000)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_lowest_water_level_mask             (0x000001FF)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_en(data)                    (0x80000000&((data)<<31))
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_conti(data)                 (0x40000000&((data)<<30))
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_reach_thd(data)                     (0x01000000&((data)<<24))
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_monitor_thd(data)                   (0x00FF8000&((data)<<15))
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_lowest_water_level(data)            (0x000001FF&(data))
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_get_monitor_en(data)                ((0x80000000&(data))>>31)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_get_monitor_conti(data)             ((0x40000000&(data))>>30)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_get_reach_thd(data)                 ((0x01000000&(data))>>24)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_get_monitor_thd(data)               ((0x00FF8000&(data))>>15)
#define  MC_DMA_MC_LF_P_DMA_RD_Water_Monitor_get_lowest_water_level(data)        (0x000001FF&(data))

#define  MC_DMA_MC_HF_P_RDMA_NUM_BL                                             0x1809AE70
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_reg_addr                                     "0xB809AE70"
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_reg                                          0xB809AE70
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_inst_addr                                    "0x004F"
#define  set_MC_DMA_MC_HF_P_RDMA_NUM_BL_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_HF_P_RDMA_NUM_BL_reg)=data)
#define  get_MC_DMA_MC_HF_P_RDMA_NUM_BL_reg                                      (*((volatile unsigned int*)MC_DMA_MC_HF_P_RDMA_NUM_BL_reg))
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_num_shift                                    (16)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_bl_shift                                     (9)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_remain_shift                                 (1)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_num_mask                                     (0xFFFF0000)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_bl_mask                                      (0x0000FE00)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_remain_mask                                  (0x000000FE)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_num(data)                                    (0xFFFF0000&((data)<<16))
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_bl(data)                                     (0x0000FE00&((data)<<9))
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_remain(data)                                 (0x000000FE&((data)<<1))
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_get_num(data)                                ((0xFFFF0000&(data))>>16)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_get_bl(data)                                 ((0x0000FE00&(data))>>9)
#define  MC_DMA_MC_HF_P_RDMA_NUM_BL_get_remain(data)                             ((0x000000FE&(data))>>1)

#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up                                    0x1809AE74
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg_addr                            "0xB809AE74"
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg                                 0xB809AE74
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_inst_addr                           "0x0050"
#define  set_MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg)=data)
#define  get_MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg                             (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg))
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_dma_up_limit_shift                  (4)
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_dma_up_limit_mask                   (0xFFFFFFF0)
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_dma_up_limit(data)                  (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_get_dma_up_limit(data)              ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low                                   0x1809AE78
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg_addr                           "0xB809AE78"
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg                                0xB809AE78
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_inst_addr                          "0x0051"
#define  set_MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg(data)                      (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg)=data)
#define  get_MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg                            (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg))
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_dma_low_limit_shift                (4)
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_dma_low_limit_mask                 (0xFFFFFFF0)
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_dma_low_limit(data)                (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_get_dma_low_limit(data)            ((0xFFFFFFF0&(data))>>4)

#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl                                             0x1809AE7C
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg_addr                                     "0xB809AE7C"
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg                                          0xB809AE7C
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_inst_addr                                    "0x0052"
#define  set_MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg(data)                                (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg)=data)
#define  get_MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg                                      (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg))
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_max_outstanding_shift                        (8)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_force_all_rst_shift                          (1)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_dma_enable_shift                             (0)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_max_outstanding_mask                         (0x00000700)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_force_all_rst_mask                           (0x00000002)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_dma_enable_mask                              (0x00000001)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_max_outstanding(data)                        (0x00000700&((data)<<8))
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_force_all_rst(data)                          (0x00000002&((data)<<1))
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_dma_enable(data)                             (0x00000001&(data))
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_get_max_outstanding(data)                    ((0x00000700&(data))>>8)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_get_force_all_rst(data)                      ((0x00000002&(data))>>1)
#define  MC_DMA_MC_HF_P_DMA_RD_Ctrl_get_dma_enable(data)                         (0x00000001&(data))

#define  MC_DMA_MC_HF_P_DMA_RD_status                                           0x1809AE80
#define  MC_DMA_MC_HF_P_DMA_RD_status_reg_addr                                   "0xB809AE80"
#define  MC_DMA_MC_HF_P_DMA_RD_status_reg                                        0xB809AE80
#define  MC_DMA_MC_HF_P_DMA_RD_status_inst_addr                                  "0x0053"
#define  set_MC_DMA_MC_HF_P_DMA_RD_status_reg(data)                              (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_status_reg)=data)
#define  get_MC_DMA_MC_HF_P_DMA_RD_status_reg                                    (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_status_reg))
#define  MC_DMA_MC_HF_P_DMA_RD_status_dma_cmd_water_shift                        (28)
#define  MC_DMA_MC_HF_P_DMA_RD_status_dma_data_water_shift                       (16)
#define  MC_DMA_MC_HF_P_DMA_RD_status_cur_outstanding_shift                      (8)
#define  MC_DMA_MC_HF_P_DMA_RD_status_rdma_fifo_data_irdy_is_low_shift           (5)
#define  MC_DMA_MC_HF_P_DMA_RD_status_soft_rst_before_cmd_finish_shift           (4)
#define  MC_DMA_MC_HF_P_DMA_RD_status_soft_rst_with_data_left_shift              (3)
#define  MC_DMA_MC_HF_P_DMA_RD_status_data_fifo_overflow_err_shift               (2)
#define  MC_DMA_MC_HF_P_DMA_RD_status_exceed_range_err_shift                     (1)
#define  MC_DMA_MC_HF_P_DMA_RD_status_zero_length_err_shift                      (0)
#define  MC_DMA_MC_HF_P_DMA_RD_status_dma_cmd_water_mask                         (0x70000000)
#define  MC_DMA_MC_HF_P_DMA_RD_status_dma_data_water_mask                        (0x01FF0000)
#define  MC_DMA_MC_HF_P_DMA_RD_status_cur_outstanding_mask                       (0x00000F00)
#define  MC_DMA_MC_HF_P_DMA_RD_status_rdma_fifo_data_irdy_is_low_mask            (0x00000020)
#define  MC_DMA_MC_HF_P_DMA_RD_status_soft_rst_before_cmd_finish_mask            (0x00000010)
#define  MC_DMA_MC_HF_P_DMA_RD_status_soft_rst_with_data_left_mask               (0x00000008)
#define  MC_DMA_MC_HF_P_DMA_RD_status_data_fifo_overflow_err_mask                (0x00000004)
#define  MC_DMA_MC_HF_P_DMA_RD_status_exceed_range_err_mask                      (0x00000002)
#define  MC_DMA_MC_HF_P_DMA_RD_status_zero_length_err_mask                       (0x00000001)
#define  MC_DMA_MC_HF_P_DMA_RD_status_dma_cmd_water(data)                        (0x70000000&((data)<<28))
#define  MC_DMA_MC_HF_P_DMA_RD_status_dma_data_water(data)                       (0x01FF0000&((data)<<16))
#define  MC_DMA_MC_HF_P_DMA_RD_status_cur_outstanding(data)                      (0x00000F00&((data)<<8))
#define  MC_DMA_MC_HF_P_DMA_RD_status_rdma_fifo_data_irdy_is_low(data)           (0x00000020&((data)<<5))
#define  MC_DMA_MC_HF_P_DMA_RD_status_soft_rst_before_cmd_finish(data)           (0x00000010&((data)<<4))
#define  MC_DMA_MC_HF_P_DMA_RD_status_soft_rst_with_data_left(data)              (0x00000008&((data)<<3))
#define  MC_DMA_MC_HF_P_DMA_RD_status_data_fifo_overflow_err(data)               (0x00000004&((data)<<2))
#define  MC_DMA_MC_HF_P_DMA_RD_status_exceed_range_err(data)                     (0x00000002&((data)<<1))
#define  MC_DMA_MC_HF_P_DMA_RD_status_zero_length_err(data)                      (0x00000001&(data))
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_dma_cmd_water(data)                    ((0x70000000&(data))>>28)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_dma_data_water(data)                   ((0x01FF0000&(data))>>16)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_cur_outstanding(data)                  ((0x00000F00&(data))>>8)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_rdma_fifo_data_irdy_is_low(data)       ((0x00000020&(data))>>5)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_soft_rst_before_cmd_finish(data)       ((0x00000010&(data))>>4)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_soft_rst_with_data_left(data)          ((0x00000008&(data))>>3)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_data_fifo_overflow_err(data)           ((0x00000004&(data))>>2)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_exceed_range_err(data)                 ((0x00000002&(data))>>1)
#define  MC_DMA_MC_HF_P_DMA_RD_status_get_zero_length_err(data)                  (0x00000001&(data))

#define  MC_DMA_MC_HF_P_DMA_RD_status1                                          0x1809AE84
#define  MC_DMA_MC_HF_P_DMA_RD_status1_reg_addr                                  "0xB809AE84"
#define  MC_DMA_MC_HF_P_DMA_RD_status1_reg                                       0xB809AE84
#define  MC_DMA_MC_HF_P_DMA_RD_status1_inst_addr                                 "0x0054"
#define  set_MC_DMA_MC_HF_P_DMA_RD_status1_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_status1_reg)=data)
#define  get_MC_DMA_MC_HF_P_DMA_RD_status1_reg                                   (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_status1_reg))
#define  MC_DMA_MC_HF_P_DMA_RD_status1_ack_num_error_shift                       (31)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_last_no_ack_error_shift                   (30)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_target_ack_num_shift                      (16)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_last_ack_num_shift                        (8)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_selected_bl_shift                         (0)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_ack_num_error_mask                        (0x80000000)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_last_no_ack_error_mask                    (0x40000000)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_target_ack_num_mask                       (0x007F0000)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_last_ack_num_mask                         (0x00007F00)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_selected_bl_mask                          (0x0000007F)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_ack_num_error(data)                       (0x80000000&((data)<<31))
#define  MC_DMA_MC_HF_P_DMA_RD_status1_last_no_ack_error(data)                   (0x40000000&((data)<<30))
#define  MC_DMA_MC_HF_P_DMA_RD_status1_target_ack_num(data)                      (0x007F0000&((data)<<16))
#define  MC_DMA_MC_HF_P_DMA_RD_status1_last_ack_num(data)                        (0x00007F00&((data)<<8))
#define  MC_DMA_MC_HF_P_DMA_RD_status1_selected_bl(data)                         (0x0000007F&(data))
#define  MC_DMA_MC_HF_P_DMA_RD_status1_get_ack_num_error(data)                   ((0x80000000&(data))>>31)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_get_last_no_ack_error(data)               ((0x40000000&(data))>>30)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_get_target_ack_num(data)                  ((0x007F0000&(data))>>16)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_get_last_ack_num(data)                    ((0x00007F00&(data))>>8)
#define  MC_DMA_MC_HF_P_DMA_RD_status1_get_selected_bl(data)                     (0x0000007F&(data))

#define  MC_DMA_MC_HF_P_DMA_RD_status2                                          0x1809AE88
#define  MC_DMA_MC_HF_P_DMA_RD_status2_reg_addr                                  "0xB809AE88"
#define  MC_DMA_MC_HF_P_DMA_RD_status2_reg                                       0xB809AE88
#define  MC_DMA_MC_HF_P_DMA_RD_status2_inst_addr                                 "0x0055"
#define  set_MC_DMA_MC_HF_P_DMA_RD_status2_reg(data)                             (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_status2_reg)=data)
#define  get_MC_DMA_MC_HF_P_DMA_RD_status2_reg                                   (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_status2_reg))
#define  MC_DMA_MC_HF_P_DMA_RD_status2_selected_addr_shift                       (4)
#define  MC_DMA_MC_HF_P_DMA_RD_status2_addr_bl_sel_shift                         (0)
#define  MC_DMA_MC_HF_P_DMA_RD_status2_selected_addr_mask                        (0xFFFFFFF0)
#define  MC_DMA_MC_HF_P_DMA_RD_status2_addr_bl_sel_mask                          (0x00000003)
#define  MC_DMA_MC_HF_P_DMA_RD_status2_selected_addr(data)                       (0xFFFFFFF0&((data)<<4))
#define  MC_DMA_MC_HF_P_DMA_RD_status2_addr_bl_sel(data)                         (0x00000003&(data))
#define  MC_DMA_MC_HF_P_DMA_RD_status2_get_selected_addr(data)                   ((0xFFFFFFF0&(data))>>4)
#define  MC_DMA_MC_HF_P_DMA_RD_status2_get_addr_bl_sel(data)                     (0x00000003&(data))

#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor                                    0x1809AE8C
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reg_addr                            "0xB809AE8C"
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reg                                 0xB809AE8C
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_inst_addr                           "0x0056"
#define  set_MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reg(data)                       (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reg)=data)
#define  get_MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reg                             (*((volatile unsigned int*)MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reg))
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_en_shift                    (31)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_conti_shift                 (30)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reach_thd_shift                     (24)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_thd_shift                   (15)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_lowest_water_level_shift            (0)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_en_mask                     (0x80000000)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_conti_mask                  (0x40000000)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reach_thd_mask                      (0x01000000)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_thd_mask                    (0x00FF8000)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_lowest_water_level_mask             (0x000001FF)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_en(data)                    (0x80000000&((data)<<31))
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_conti(data)                 (0x40000000&((data)<<30))
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_reach_thd(data)                     (0x01000000&((data)<<24))
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_monitor_thd(data)                   (0x00FF8000&((data)<<15))
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_lowest_water_level(data)            (0x000001FF&(data))
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_get_monitor_en(data)                ((0x80000000&(data))>>31)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_get_monitor_conti(data)             ((0x40000000&(data))>>30)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_get_reach_thd(data)                 ((0x01000000&(data))>>24)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_get_monitor_thd(data)               ((0x00FF8000&(data))>>15)
#define  MC_DMA_MC_HF_P_DMA_RD_Water_Monitor_get_lowest_water_level(data)        (0x000001FF&(data))

#define  MC_DMA_MC_CPR_INT_EN                                                   0x1809AEB0
#define  MC_DMA_MC_CPR_INT_EN_reg_addr                                           "0xB809AEB0"
#define  MC_DMA_MC_CPR_INT_EN_reg                                                0xB809AEB0
#define  MC_DMA_MC_CPR_INT_EN_inst_addr                                          "0x0057"
#define  set_MC_DMA_MC_CPR_INT_EN_reg(data)                                      (*((volatile unsigned int*)MC_DMA_MC_CPR_INT_EN_reg)=data)
#define  get_MC_DMA_MC_CPR_INT_EN_reg                                            (*((volatile unsigned int*)MC_DMA_MC_CPR_INT_EN_reg))
#define  MC_DMA_MC_CPR_INT_EN_lf_pqc_irq_en_shift                                (11)
#define  MC_DMA_MC_CPR_INT_EN_hf_pqc_irq_en_shift                                (10)
#define  MC_DMA_MC_CPR_INT_EN_lf_i_pqdc_irq_en_shift                             (9)
#define  MC_DMA_MC_CPR_INT_EN_hf_i_pqdc_irq_en_shift                             (8)
#define  MC_DMA_MC_CPR_INT_EN_lf_p_pqdc_irq_en_shift                             (7)
#define  MC_DMA_MC_CPR_INT_EN_hf_p_pqdc_irq_en_shift                             (6)
#define  MC_DMA_MC_CPR_INT_EN_lf_wdma_irq_en_shift                               (5)
#define  MC_DMA_MC_CPR_INT_EN_hf_wdma_irq_en_shift                               (4)
#define  MC_DMA_MC_CPR_INT_EN_lf_i_rdma_irq_en_shift                             (3)
#define  MC_DMA_MC_CPR_INT_EN_hf_i_rdma_irq_en_shift                             (2)
#define  MC_DMA_MC_CPR_INT_EN_lf_p_rdma_irq_en_shift                             (1)
#define  MC_DMA_MC_CPR_INT_EN_hf_p_rdma_irq_en_shift                             (0)
#define  MC_DMA_MC_CPR_INT_EN_lf_pqc_irq_en_mask                                 (0x00000800)
#define  MC_DMA_MC_CPR_INT_EN_hf_pqc_irq_en_mask                                 (0x00000400)
#define  MC_DMA_MC_CPR_INT_EN_lf_i_pqdc_irq_en_mask                              (0x00000200)
#define  MC_DMA_MC_CPR_INT_EN_hf_i_pqdc_irq_en_mask                              (0x00000100)
#define  MC_DMA_MC_CPR_INT_EN_lf_p_pqdc_irq_en_mask                              (0x00000080)
#define  MC_DMA_MC_CPR_INT_EN_hf_p_pqdc_irq_en_mask                              (0x00000040)
#define  MC_DMA_MC_CPR_INT_EN_lf_wdma_irq_en_mask                                (0x00000020)
#define  MC_DMA_MC_CPR_INT_EN_hf_wdma_irq_en_mask                                (0x00000010)
#define  MC_DMA_MC_CPR_INT_EN_lf_i_rdma_irq_en_mask                              (0x00000008)
#define  MC_DMA_MC_CPR_INT_EN_hf_i_rdma_irq_en_mask                              (0x00000004)
#define  MC_DMA_MC_CPR_INT_EN_lf_p_rdma_irq_en_mask                              (0x00000002)
#define  MC_DMA_MC_CPR_INT_EN_hf_p_rdma_irq_en_mask                              (0x00000001)
#define  MC_DMA_MC_CPR_INT_EN_lf_pqc_irq_en(data)                                (0x00000800&((data)<<11))
#define  MC_DMA_MC_CPR_INT_EN_hf_pqc_irq_en(data)                                (0x00000400&((data)<<10))
#define  MC_DMA_MC_CPR_INT_EN_lf_i_pqdc_irq_en(data)                             (0x00000200&((data)<<9))
#define  MC_DMA_MC_CPR_INT_EN_hf_i_pqdc_irq_en(data)                             (0x00000100&((data)<<8))
#define  MC_DMA_MC_CPR_INT_EN_lf_p_pqdc_irq_en(data)                             (0x00000080&((data)<<7))
#define  MC_DMA_MC_CPR_INT_EN_hf_p_pqdc_irq_en(data)                             (0x00000040&((data)<<6))
#define  MC_DMA_MC_CPR_INT_EN_lf_wdma_irq_en(data)                               (0x00000020&((data)<<5))
#define  MC_DMA_MC_CPR_INT_EN_hf_wdma_irq_en(data)                               (0x00000010&((data)<<4))
#define  MC_DMA_MC_CPR_INT_EN_lf_i_rdma_irq_en(data)                             (0x00000008&((data)<<3))
#define  MC_DMA_MC_CPR_INT_EN_hf_i_rdma_irq_en(data)                             (0x00000004&((data)<<2))
#define  MC_DMA_MC_CPR_INT_EN_lf_p_rdma_irq_en(data)                             (0x00000002&((data)<<1))
#define  MC_DMA_MC_CPR_INT_EN_hf_p_rdma_irq_en(data)                             (0x00000001&(data))
#define  MC_DMA_MC_CPR_INT_EN_get_lf_pqc_irq_en(data)                            ((0x00000800&(data))>>11)
#define  MC_DMA_MC_CPR_INT_EN_get_hf_pqc_irq_en(data)                            ((0x00000400&(data))>>10)
#define  MC_DMA_MC_CPR_INT_EN_get_lf_i_pqdc_irq_en(data)                         ((0x00000200&(data))>>9)
#define  MC_DMA_MC_CPR_INT_EN_get_hf_i_pqdc_irq_en(data)                         ((0x00000100&(data))>>8)
#define  MC_DMA_MC_CPR_INT_EN_get_lf_p_pqdc_irq_en(data)                         ((0x00000080&(data))>>7)
#define  MC_DMA_MC_CPR_INT_EN_get_hf_p_pqdc_irq_en(data)                         ((0x00000040&(data))>>6)
#define  MC_DMA_MC_CPR_INT_EN_get_lf_wdma_irq_en(data)                           ((0x00000020&(data))>>5)
#define  MC_DMA_MC_CPR_INT_EN_get_hf_wdma_irq_en(data)                           ((0x00000010&(data))>>4)
#define  MC_DMA_MC_CPR_INT_EN_get_lf_i_rdma_irq_en(data)                         ((0x00000008&(data))>>3)
#define  MC_DMA_MC_CPR_INT_EN_get_hf_i_rdma_irq_en(data)                         ((0x00000004&(data))>>2)
#define  MC_DMA_MC_CPR_INT_EN_get_lf_p_rdma_irq_en(data)                         ((0x00000002&(data))>>1)
#define  MC_DMA_MC_CPR_INT_EN_get_hf_p_rdma_irq_en(data)                         (0x00000001&(data))

#define  MC_DMA_MC_CPR_INT_ST                                                   0x1809AEB4
#define  MC_DMA_MC_CPR_INT_ST_reg_addr                                           "0xB809AEB4"
#define  MC_DMA_MC_CPR_INT_ST_reg                                                0xB809AEB4
#define  MC_DMA_MC_CPR_INT_ST_inst_addr                                          "0x0058"
#define  set_MC_DMA_MC_CPR_INT_ST_reg(data)                                      (*((volatile unsigned int*)MC_DMA_MC_CPR_INT_ST_reg)=data)
#define  get_MC_DMA_MC_CPR_INT_ST_reg                                            (*((volatile unsigned int*)MC_DMA_MC_CPR_INT_ST_reg))
#define  MC_DMA_MC_CPR_INT_ST_lf_pqc_irq_shift                                   (11)
#define  MC_DMA_MC_CPR_INT_ST_hf_pqc_irq_shift                                   (10)
#define  MC_DMA_MC_CPR_INT_ST_lf_i_pqdc_irq_shift                                (9)
#define  MC_DMA_MC_CPR_INT_ST_hf_i_pqdc_irq_shift                                (8)
#define  MC_DMA_MC_CPR_INT_ST_lf_p_pqdc_irq_shift                                (7)
#define  MC_DMA_MC_CPR_INT_ST_hf_p_pqdc_irq_shift                                (6)
#define  MC_DMA_MC_CPR_INT_ST_lf_wdma_irq_shift                                  (5)
#define  MC_DMA_MC_CPR_INT_ST_hf_wdma_irq_shift                                  (4)
#define  MC_DMA_MC_CPR_INT_ST_lf_i_rdma_irq_shift                                (3)
#define  MC_DMA_MC_CPR_INT_ST_hf_i_rdma_irq_shift                                (2)
#define  MC_DMA_MC_CPR_INT_ST_lf_p_rdma_irq_shift                                (1)
#define  MC_DMA_MC_CPR_INT_ST_hf_p_rdma_irq_shift                                (0)
#define  MC_DMA_MC_CPR_INT_ST_lf_pqc_irq_mask                                    (0x00000800)
#define  MC_DMA_MC_CPR_INT_ST_hf_pqc_irq_mask                                    (0x00000400)
#define  MC_DMA_MC_CPR_INT_ST_lf_i_pqdc_irq_mask                                 (0x00000200)
#define  MC_DMA_MC_CPR_INT_ST_hf_i_pqdc_irq_mask                                 (0x00000100)
#define  MC_DMA_MC_CPR_INT_ST_lf_p_pqdc_irq_mask                                 (0x00000080)
#define  MC_DMA_MC_CPR_INT_ST_hf_p_pqdc_irq_mask                                 (0x00000040)
#define  MC_DMA_MC_CPR_INT_ST_lf_wdma_irq_mask                                   (0x00000020)
#define  MC_DMA_MC_CPR_INT_ST_hf_wdma_irq_mask                                   (0x00000010)
#define  MC_DMA_MC_CPR_INT_ST_lf_i_rdma_irq_mask                                 (0x00000008)
#define  MC_DMA_MC_CPR_INT_ST_hf_i_rdma_irq_mask                                 (0x00000004)
#define  MC_DMA_MC_CPR_INT_ST_lf_p_rdma_irq_mask                                 (0x00000002)
#define  MC_DMA_MC_CPR_INT_ST_hf_p_rdma_irq_mask                                 (0x00000001)
#define  MC_DMA_MC_CPR_INT_ST_lf_pqc_irq(data)                                   (0x00000800&((data)<<11))
#define  MC_DMA_MC_CPR_INT_ST_hf_pqc_irq(data)                                   (0x00000400&((data)<<10))
#define  MC_DMA_MC_CPR_INT_ST_lf_i_pqdc_irq(data)                                (0x00000200&((data)<<9))
#define  MC_DMA_MC_CPR_INT_ST_hf_i_pqdc_irq(data)                                (0x00000100&((data)<<8))
#define  MC_DMA_MC_CPR_INT_ST_lf_p_pqdc_irq(data)                                (0x00000080&((data)<<7))
#define  MC_DMA_MC_CPR_INT_ST_hf_p_pqdc_irq(data)                                (0x00000040&((data)<<6))
#define  MC_DMA_MC_CPR_INT_ST_lf_wdma_irq(data)                                  (0x00000020&((data)<<5))
#define  MC_DMA_MC_CPR_INT_ST_hf_wdma_irq(data)                                  (0x00000010&((data)<<4))
#define  MC_DMA_MC_CPR_INT_ST_lf_i_rdma_irq(data)                                (0x00000008&((data)<<3))
#define  MC_DMA_MC_CPR_INT_ST_hf_i_rdma_irq(data)                                (0x00000004&((data)<<2))
#define  MC_DMA_MC_CPR_INT_ST_lf_p_rdma_irq(data)                                (0x00000002&((data)<<1))
#define  MC_DMA_MC_CPR_INT_ST_hf_p_rdma_irq(data)                                (0x00000001&(data))
#define  MC_DMA_MC_CPR_INT_ST_get_lf_pqc_irq(data)                               ((0x00000800&(data))>>11)
#define  MC_DMA_MC_CPR_INT_ST_get_hf_pqc_irq(data)                               ((0x00000400&(data))>>10)
#define  MC_DMA_MC_CPR_INT_ST_get_lf_i_pqdc_irq(data)                            ((0x00000200&(data))>>9)
#define  MC_DMA_MC_CPR_INT_ST_get_hf_i_pqdc_irq(data)                            ((0x00000100&(data))>>8)
#define  MC_DMA_MC_CPR_INT_ST_get_lf_p_pqdc_irq(data)                            ((0x00000080&(data))>>7)
#define  MC_DMA_MC_CPR_INT_ST_get_hf_p_pqdc_irq(data)                            ((0x00000040&(data))>>6)
#define  MC_DMA_MC_CPR_INT_ST_get_lf_wdma_irq(data)                              ((0x00000020&(data))>>5)
#define  MC_DMA_MC_CPR_INT_ST_get_hf_wdma_irq(data)                              ((0x00000010&(data))>>4)
#define  MC_DMA_MC_CPR_INT_ST_get_lf_i_rdma_irq(data)                            ((0x00000008&(data))>>3)
#define  MC_DMA_MC_CPR_INT_ST_get_hf_i_rdma_irq(data)                            ((0x00000004&(data))>>2)
#define  MC_DMA_MC_CPR_INT_ST_get_lf_p_rdma_irq(data)                            ((0x00000002&(data))>>1)
#define  MC_DMA_MC_CPR_INT_ST_get_hf_p_rdma_irq(data)                            (0x00000001&(data))

#define  MC_DMA_MC_DMA_index                                                    0x1809AEB8
#define  MC_DMA_MC_DMA_index_reg_addr                                            "0xB809AEB8"
#define  MC_DMA_MC_DMA_index_reg                                                 0xB809AEB8
#define  MC_DMA_MC_DMA_index_inst_addr                                           "0x0059"
#define  set_MC_DMA_MC_DMA_index_reg(data)                                       (*((volatile unsigned int*)MC_DMA_MC_DMA_index_reg)=data)
#define  get_MC_DMA_MC_DMA_index_reg                                             (*((volatile unsigned int*)MC_DMA_MC_DMA_index_reg))
#define  MC_DMA_MC_DMA_index_wr_index_shift                                      (8)
#define  MC_DMA_MC_DMA_index_rd_i_index_shift                                    (4)
#define  MC_DMA_MC_DMA_index_rd_p_index_shift                                    (0)
#define  MC_DMA_MC_DMA_index_wr_index_mask                                       (0x00000700)
#define  MC_DMA_MC_DMA_index_rd_i_index_mask                                     (0x00000070)
#define  MC_DMA_MC_DMA_index_rd_p_index_mask                                     (0x00000007)
#define  MC_DMA_MC_DMA_index_wr_index(data)                                      (0x00000700&((data)<<8))
#define  MC_DMA_MC_DMA_index_rd_i_index(data)                                    (0x00000070&((data)<<4))
#define  MC_DMA_MC_DMA_index_rd_p_index(data)                                    (0x00000007&(data))
#define  MC_DMA_MC_DMA_index_get_wr_index(data)                                  ((0x00000700&(data))>>8)
#define  MC_DMA_MC_DMA_index_get_rd_i_index(data)                                ((0x00000070&(data))>>4)
#define  MC_DMA_MC_DMA_index_get_rd_p_index(data)                                (0x00000007&(data))

#define  MC_DMA_MC_DMA_BIST_STATUS                                              0x1809AE94
#define  MC_DMA_MC_DMA_BIST_STATUS_reg_addr                                      "0xB809AE94"
#define  MC_DMA_MC_DMA_BIST_STATUS_reg                                           0xB809AE94
#define  MC_DMA_MC_DMA_BIST_STATUS_inst_addr                                     "0x005A"
#define  set_MC_DMA_MC_DMA_BIST_STATUS_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_DMA_BIST_STATUS_reg)=data)
#define  get_MC_DMA_MC_DMA_BIST_STATUS_reg                                       (*((volatile unsigned int*)MC_DMA_MC_DMA_BIST_STATUS_reg))
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_0_shift                    (21)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_1_shift                    (20)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_2_shift                    (19)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_3_shift                    (18)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_wdma_bist_fail_0_shift                    (17)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_wdma_bist_fail_1_shift                    (16)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_0_mask                     (0x00200000)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_1_mask                     (0x00100000)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_2_mask                     (0x00080000)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_3_mask                     (0x00040000)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_wdma_bist_fail_0_mask                     (0x00020000)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_wdma_bist_fail_1_mask                     (0x00010000)
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_0(data)                    (0x00200000&((data)<<21))
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_1(data)                    (0x00100000&((data)<<20))
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_2(data)                    (0x00080000&((data)<<19))
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_rdma_bist_fail_3(data)                    (0x00040000&((data)<<18))
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_wdma_bist_fail_0(data)                    (0x00020000&((data)<<17))
#define  MC_DMA_MC_DMA_BIST_STATUS_kmc_wdma_bist_fail_1(data)                    (0x00010000&((data)<<16))
#define  MC_DMA_MC_DMA_BIST_STATUS_get_kmc_rdma_bist_fail_0(data)                ((0x00200000&(data))>>21)
#define  MC_DMA_MC_DMA_BIST_STATUS_get_kmc_rdma_bist_fail_1(data)                ((0x00100000&(data))>>20)
#define  MC_DMA_MC_DMA_BIST_STATUS_get_kmc_rdma_bist_fail_2(data)                ((0x00080000&(data))>>19)
#define  MC_DMA_MC_DMA_BIST_STATUS_get_kmc_rdma_bist_fail_3(data)                ((0x00040000&(data))>>18)
#define  MC_DMA_MC_DMA_BIST_STATUS_get_kmc_wdma_bist_fail_0(data)                ((0x00020000&(data))>>17)
#define  MC_DMA_MC_DMA_BIST_STATUS_get_kmc_wdma_bist_fail_1(data)                ((0x00010000&(data))>>16)

#define  MC_DMA_MC_DMA_DRF_STATUS                                               0x1809AE9C
#define  MC_DMA_MC_DMA_DRF_STATUS_reg_addr                                       "0xB809AE9C"
#define  MC_DMA_MC_DMA_DRF_STATUS_reg                                            0xB809AE9C
#define  MC_DMA_MC_DMA_DRF_STATUS_inst_addr                                      "0x005B"
#define  set_MC_DMA_MC_DMA_DRF_STATUS_reg(data)                                  (*((volatile unsigned int*)MC_DMA_MC_DMA_DRF_STATUS_reg)=data)
#define  get_MC_DMA_MC_DMA_DRF_STATUS_reg                                        (*((volatile unsigned int*)MC_DMA_MC_DMA_DRF_STATUS_reg))
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_0_shift                      (21)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_1_shift                      (20)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_2_shift                      (19)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_3_shift                      (18)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_wdma_drf_fail_0_shift                      (17)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_wdma_drf_fail_1_shift                      (16)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_0_mask                       (0x00200000)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_1_mask                       (0x00100000)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_2_mask                       (0x00080000)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_3_mask                       (0x00040000)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_wdma_drf_fail_0_mask                       (0x00020000)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_wdma_drf_fail_1_mask                       (0x00010000)
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_0(data)                      (0x00200000&((data)<<21))
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_1(data)                      (0x00100000&((data)<<20))
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_2(data)                      (0x00080000&((data)<<19))
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_rdma_drf_fail_3(data)                      (0x00040000&((data)<<18))
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_wdma_drf_fail_0(data)                      (0x00020000&((data)<<17))
#define  MC_DMA_MC_DMA_DRF_STATUS_kmc_wdma_drf_fail_1(data)                      (0x00010000&((data)<<16))
#define  MC_DMA_MC_DMA_DRF_STATUS_get_kmc_rdma_drf_fail_0(data)                  ((0x00200000&(data))>>21)
#define  MC_DMA_MC_DMA_DRF_STATUS_get_kmc_rdma_drf_fail_1(data)                  ((0x00100000&(data))>>20)
#define  MC_DMA_MC_DMA_DRF_STATUS_get_kmc_rdma_drf_fail_2(data)                  ((0x00080000&(data))>>19)
#define  MC_DMA_MC_DMA_DRF_STATUS_get_kmc_rdma_drf_fail_3(data)                  ((0x00040000&(data))>>18)
#define  MC_DMA_MC_DMA_DRF_STATUS_get_kmc_wdma_drf_fail_0(data)                  ((0x00020000&(data))>>17)
#define  MC_DMA_MC_DMA_DRF_STATUS_get_kmc_wdma_drf_fail_1(data)                  ((0x00010000&(data))>>16)

#define  MC_DMA_MC_DMA_BIST_LS                                                  0x1809AEA0
#define  MC_DMA_MC_DMA_BIST_LS_reg_addr                                          "0xB809AEA0"
#define  MC_DMA_MC_DMA_BIST_LS_reg                                               0xB809AEA0
#define  MC_DMA_MC_DMA_BIST_LS_inst_addr                                         "0x005C"
#define  set_MC_DMA_MC_DMA_BIST_LS_reg(data)                                     (*((volatile unsigned int*)MC_DMA_MC_DMA_BIST_LS_reg)=data)
#define  get_MC_DMA_MC_DMA_BIST_LS_reg                                           (*((volatile unsigned int*)MC_DMA_MC_DMA_BIST_LS_reg))
#define  MC_DMA_MC_DMA_BIST_LS_kmc_rdma_ls_shift                                 (1)
#define  MC_DMA_MC_DMA_BIST_LS_kmc_wdma_ls_shift                                 (0)
#define  MC_DMA_MC_DMA_BIST_LS_kmc_rdma_ls_mask                                  (0x00000002)
#define  MC_DMA_MC_DMA_BIST_LS_kmc_wdma_ls_mask                                  (0x00000001)
#define  MC_DMA_MC_DMA_BIST_LS_kmc_rdma_ls(data)                                 (0x00000002&((data)<<1))
#define  MC_DMA_MC_DMA_BIST_LS_kmc_wdma_ls(data)                                 (0x00000001&(data))
#define  MC_DMA_MC_DMA_BIST_LS_get_kmc_rdma_ls(data)                             ((0x00000002&(data))>>1)
#define  MC_DMA_MC_DMA_BIST_LS_get_kmc_wdma_ls(data)                             (0x00000001&(data))

#define  MC_DMA_MC_DMA_BIST_RME_RM                                              0x1809AEA4
#define  MC_DMA_MC_DMA_BIST_RME_RM_reg_addr                                      "0xB809AEA4"
#define  MC_DMA_MC_DMA_BIST_RME_RM_reg                                           0xB809AEA4
#define  MC_DMA_MC_DMA_BIST_RME_RM_inst_addr                                     "0x005D"
#define  set_MC_DMA_MC_DMA_BIST_RME_RM_reg(data)                                 (*((volatile unsigned int*)MC_DMA_MC_DMA_BIST_RME_RM_reg)=data)
#define  get_MC_DMA_MC_DMA_BIST_RME_RM_reg                                       (*((volatile unsigned int*)MC_DMA_MC_DMA_BIST_RME_RM_reg))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmea_shift                           (19)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmeb_shift                           (18)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmea_shift                           (17)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmeb_shift                           (16)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rma_shift                            (12)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmb_shift                            (8)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rma_shift                            (4)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmb_shift                            (0)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmea_mask                            (0x00080000)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmeb_mask                            (0x00040000)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmea_mask                            (0x00020000)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmeb_mask                            (0x00010000)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rma_mask                             (0x0000F000)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmb_mask                             (0x00000F00)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rma_mask                             (0x000000F0)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmb_mask                             (0x0000000F)
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmea(data)                           (0x00080000&((data)<<19))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmeb(data)                           (0x00040000&((data)<<18))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmea(data)                           (0x00020000&((data)<<17))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmeb(data)                           (0x00010000&((data)<<16))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rma(data)                            (0x0000F000&((data)<<12))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_rdma_rmb(data)                            (0x00000F00&((data)<<8))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rma(data)                            (0x000000F0&((data)<<4))
#define  MC_DMA_MC_DMA_BIST_RME_RM_kmc_wdma_rmb(data)                            (0x0000000F&(data))
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_rdma_rmea(data)                       ((0x00080000&(data))>>19)
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_rdma_rmeb(data)                       ((0x00040000&(data))>>18)
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_wdma_rmea(data)                       ((0x00020000&(data))>>17)
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_wdma_rmeb(data)                       ((0x00010000&(data))>>16)
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_rdma_rma(data)                        ((0x0000F000&(data))>>12)
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_rdma_rmb(data)                        ((0x00000F00&(data))>>8)
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_wdma_rma(data)                        ((0x000000F0&(data))>>4)
#define  MC_DMA_MC_DMA_BIST_RME_RM_get_kmc_wdma_rmb(data)                        (0x0000000F&(data))

#define  MC_DMA_MC_RDMA_DB_CTRL                                                 0x1809AEA8
#define  MC_DMA_MC_RDMA_DB_CTRL_reg_addr                                         "0xB809AEA8"
#define  MC_DMA_MC_RDMA_DB_CTRL_reg                                              0xB809AEA8
#define  MC_DMA_MC_RDMA_DB_CTRL_inst_addr                                        "0x005E"
#define  set_MC_DMA_MC_RDMA_DB_CTRL_reg(data)                                    (*((volatile unsigned int*)MC_DMA_MC_RDMA_DB_CTRL_reg)=data)
#define  get_MC_DMA_MC_RDMA_DB_CTRL_reg                                          (*((volatile unsigned int*)MC_DMA_MC_RDMA_DB_CTRL_reg))
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_apply_shift                           (2)
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_rd_sel_shift                          (1)
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_en_shift                              (0)
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_apply_mask                            (0x00000004)
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_rd_sel_mask                           (0x00000002)
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_en_mask                               (0x00000001)
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_apply(data)                           (0x00000004&((data)<<2))
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_rd_sel(data)                          (0x00000002&((data)<<1))
#define  MC_DMA_MC_RDMA_DB_CTRL_mc_rdma_db_en(data)                              (0x00000001&(data))
#define  MC_DMA_MC_RDMA_DB_CTRL_get_mc_rdma_db_apply(data)                       ((0x00000004&(data))>>2)
#define  MC_DMA_MC_RDMA_DB_CTRL_get_mc_rdma_db_rd_sel(data)                      ((0x00000002&(data))>>1)
#define  MC_DMA_MC_RDMA_DB_CTRL_get_mc_rdma_db_en(data)                          (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MC_DMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lf_hf_wdma_share_sram_disable:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  kmc_disable_frame_hold:1;
        RBus_UInt32  dat_fmt:1;
        RBus_UInt32  dat_bit:1;
        RBus_UInt32  res2:2;
    };
}mc_dma_mc_wdma_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  height:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  width:12;
    };
}mc_dma_mc_wdma_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num:16;
        RBus_UInt32  bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
    };
}mc_dma_mc_lf_wdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address0:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address1:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address2:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address3:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address4:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address5:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address6:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address7:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mstart7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address0:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address1:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address2:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address3:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address4:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address5:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address6:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address7:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_mend7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_offset_addr:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_wdma_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  max_outstanding:4;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}mc_dma_mc_lf_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:2;
        RBus_UInt32  dma_data_water:10;
        RBus_UInt32  res3:3;
        RBus_UInt32  cur_outstanding:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  wdma_fifo_data_trdy_is_low:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}mc_dma_mc_lf_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}mc_dma_mc_lf_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}mc_dma_mc_lf_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_thd:10;
        RBus_UInt32  res2:4;
        RBus_UInt32  highest_water_level:10;
    };
}mc_dma_mc_lf_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num:16;
        RBus_UInt32  bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
    };
}mc_dma_mc_hf_wdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address0:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address1:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address2:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address3:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address4:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address5:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address6:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address7:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mstart7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address0:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address1:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address2:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address3:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address4:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address5:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address6:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address7:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_mend7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_offset_addr:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_wdma_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}mc_dma_mc_hf_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:4;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  wdma_fifo_data_trdy_is_low:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}mc_dma_mc_hf_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}mc_dma_mc_hf_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}mc_dma_mc_hf_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  highest_water_level:9;
    };
}mc_dma_mc_hf_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mc_wdma_db_apply:1;
        RBus_UInt32  mc_wdma_db_rd_sel:1;
        RBus_UInt32  mc_wdma_db_en:1;
    };
}mc_dma_mc_wdma_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  vflip_enable:1;
        RBus_UInt32  dat_fmt:1;
        RBus_UInt32  dat_bit:1;
        RBus_UInt32  res2:2;
    };
}mc_dma_mc_rdma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  height:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  width:12;
    };
}mc_dma_mc_rdma_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num:16;
        RBus_UInt32  bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
    };
}mc_dma_mc_lf_i_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_i_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_i_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}mc_dma_mc_lf_i_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:4;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}mc_dma_mc_lf_i_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}mc_dma_mc_lf_i_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}mc_dma_mc_lf_i_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  lowest_water_level:9;
    };
}mc_dma_mc_lf_i_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num:16;
        RBus_UInt32  bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
    };
}mc_dma_mc_hf_i_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_i_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_i_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}mc_dma_mc_hf_i_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:4;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}mc_dma_mc_hf_i_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}mc_dma_mc_hf_i_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}mc_dma_mc_hf_i_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  lowest_water_level:9;
    };
}mc_dma_mc_hf_i_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num:16;
        RBus_UInt32  bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
    };
}mc_dma_mc_lf_p_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_p_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_lf_p_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}mc_dma_mc_lf_p_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:4;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}mc_dma_mc_lf_p_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}mc_dma_mc_lf_p_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}mc_dma_mc_lf_p_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  lowest_water_level:9;
    };
}mc_dma_mc_lf_p_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  num:16;
        RBus_UInt32  bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
    };
}mc_dma_mc_hf_p_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_p_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}mc_dma_mc_hf_p_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}mc_dma_mc_hf_p_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:4;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res4:2;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}mc_dma_mc_hf_p_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}mc_dma_mc_hf_p_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}mc_dma_mc_hf_p_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  res2:6;
        RBus_UInt32  lowest_water_level:9;
    };
}mc_dma_mc_hf_p_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  lf_pqc_irq_en:1;
        RBus_UInt32  hf_pqc_irq_en:1;
        RBus_UInt32  lf_i_pqdc_irq_en:1;
        RBus_UInt32  hf_i_pqdc_irq_en:1;
        RBus_UInt32  lf_p_pqdc_irq_en:1;
        RBus_UInt32  hf_p_pqdc_irq_en:1;
        RBus_UInt32  lf_wdma_irq_en:1;
        RBus_UInt32  hf_wdma_irq_en:1;
        RBus_UInt32  lf_i_rdma_irq_en:1;
        RBus_UInt32  hf_i_rdma_irq_en:1;
        RBus_UInt32  lf_p_rdma_irq_en:1;
        RBus_UInt32  hf_p_rdma_irq_en:1;
    };
}mc_dma_mc_cpr_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  lf_pqc_irq:1;
        RBus_UInt32  hf_pqc_irq:1;
        RBus_UInt32  lf_i_pqdc_irq:1;
        RBus_UInt32  hf_i_pqdc_irq:1;
        RBus_UInt32  lf_p_pqdc_irq:1;
        RBus_UInt32  hf_p_pqdc_irq:1;
        RBus_UInt32  lf_wdma_irq:1;
        RBus_UInt32  hf_wdma_irq:1;
        RBus_UInt32  lf_i_rdma_irq:1;
        RBus_UInt32  hf_i_rdma_irq:1;
        RBus_UInt32  lf_p_rdma_irq:1;
        RBus_UInt32  hf_p_rdma_irq:1;
    };
}mc_dma_mc_cpr_int_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  wr_index:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  rd_i_index:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  rd_p_index:3;
    };
}mc_dma_mc_dma_index_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}mc_dma_mc_dma_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  kmc_rdma_bist_fail_0:1;
        RBus_UInt32  kmc_rdma_bist_fail_1:1;
        RBus_UInt32  kmc_rdma_bist_fail_2:1;
        RBus_UInt32  kmc_rdma_bist_fail_3:1;
        RBus_UInt32  kmc_wdma_bist_fail_0:1;
        RBus_UInt32  kmc_wdma_bist_fail_1:1;
        RBus_UInt32  res2:16;
    };
}mc_dma_mc_dma_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}mc_dma_mc_dma_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  kmc_rdma_drf_fail_0:1;
        RBus_UInt32  kmc_rdma_drf_fail_1:1;
        RBus_UInt32  kmc_rdma_drf_fail_2:1;
        RBus_UInt32  kmc_rdma_drf_fail_3:1;
        RBus_UInt32  kmc_wdma_drf_fail_0:1;
        RBus_UInt32  kmc_wdma_drf_fail_1:1;
        RBus_UInt32  res2:16;
    };
}mc_dma_mc_dma_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  kmc_rdma_ls:1;
        RBus_UInt32  kmc_wdma_ls:1;
    };
}mc_dma_mc_dma_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  kmc_rdma_rmea:1;
        RBus_UInt32  kmc_rdma_rmeb:1;
        RBus_UInt32  kmc_wdma_rmea:1;
        RBus_UInt32  kmc_wdma_rmeb:1;
        RBus_UInt32  kmc_rdma_rma:4;
        RBus_UInt32  kmc_rdma_rmb:4;
        RBus_UInt32  kmc_wdma_rma:4;
        RBus_UInt32  kmc_wdma_rmb:4;
    };
}mc_dma_mc_dma_bist_rme_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mc_rdma_db_apply:1;
        RBus_UInt32  mc_rdma_db_rd_sel:1;
        RBus_UInt32  mc_rdma_db_en:1;
    };
}mc_dma_mc_rdma_db_ctrl_RBUS;

#else //apply LITTLE_ENDIAN

//======MC_DMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dat_bit:1;
        RBus_UInt32  dat_fmt:1;
        RBus_UInt32  kmc_disable_frame_hold:1;
        RBus_UInt32  res2:26;
        RBus_UInt32  lf_hf_wdma_share_sram_disable:1;
    };
}mc_dma_mc_wdma_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  width:12;
        RBus_UInt32  res1:5;
        RBus_UInt32  height:11;
        RBus_UInt32  res2:4;
    };
}mc_dma_mc_wdma_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:16;
    };
}mc_dma_mc_lf_wdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address0:28;
    };
}mc_dma_mc_lf_wdma_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address1:28;
    };
}mc_dma_mc_lf_wdma_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address2:28;
    };
}mc_dma_mc_lf_wdma_mstart2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address3:28;
    };
}mc_dma_mc_lf_wdma_mstart3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address4:28;
    };
}mc_dma_mc_lf_wdma_mstart4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address5:28;
    };
}mc_dma_mc_lf_wdma_mstart5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address6:28;
    };
}mc_dma_mc_lf_wdma_mstart6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address7:28;
    };
}mc_dma_mc_lf_wdma_mstart7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address0:28;
    };
}mc_dma_mc_lf_wdma_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address1:28;
    };
}mc_dma_mc_lf_wdma_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address2:28;
    };
}mc_dma_mc_lf_wdma_mend2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address3:28;
    };
}mc_dma_mc_lf_wdma_mend3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address4:28;
    };
}mc_dma_mc_lf_wdma_mend4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address5:28;
    };
}mc_dma_mc_lf_wdma_mend5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address6:28;
    };
}mc_dma_mc_lf_wdma_mend6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address7:28;
    };
}mc_dma_mc_lf_wdma_mend7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  line_offset_addr:28;
    };
}mc_dma_mc_lf_wdma_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}mc_dma_mc_lf_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}mc_dma_mc_lf_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  max_outstanding:4;
        RBus_UInt32  res3:20;
    };
}mc_dma_mc_lf_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  wdma_fifo_data_trdy_is_low:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cur_outstanding:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  dma_data_water:10;
        RBus_UInt32  res3:2;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}mc_dma_mc_lf_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}mc_dma_mc_lf_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}mc_dma_mc_lf_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  highest_water_level:10;
        RBus_UInt32  res1:4;
        RBus_UInt32  monitor_thd:10;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}mc_dma_mc_lf_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:16;
    };
}mc_dma_mc_hf_wdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address0:28;
    };
}mc_dma_mc_hf_wdma_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address1:28;
    };
}mc_dma_mc_hf_wdma_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address2:28;
    };
}mc_dma_mc_hf_wdma_mstart2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address3:28;
    };
}mc_dma_mc_hf_wdma_mstart3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address4:28;
    };
}mc_dma_mc_hf_wdma_mstart4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address5:28;
    };
}mc_dma_mc_hf_wdma_mstart5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address6:28;
    };
}mc_dma_mc_hf_wdma_mstart6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address7:28;
    };
}mc_dma_mc_hf_wdma_mstart7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address0:28;
    };
}mc_dma_mc_hf_wdma_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address1:28;
    };
}mc_dma_mc_hf_wdma_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address2:28;
    };
}mc_dma_mc_hf_wdma_mend2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address3:28;
    };
}mc_dma_mc_hf_wdma_mend3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address4:28;
    };
}mc_dma_mc_hf_wdma_mend4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address5:28;
    };
}mc_dma_mc_hf_wdma_mend5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address6:28;
    };
}mc_dma_mc_hf_wdma_mend6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address7:28;
    };
}mc_dma_mc_hf_wdma_mend7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  line_offset_addr:28;
    };
}mc_dma_mc_hf_wdma_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}mc_dma_mc_hf_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}mc_dma_mc_hf_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res2:21;
    };
}mc_dma_mc_hf_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  wdma_fifo_data_trdy_is_low:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}mc_dma_mc_hf_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}mc_dma_mc_hf_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}mc_dma_mc_hf_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  highest_water_level:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}mc_dma_mc_hf_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_wdma_db_en:1;
        RBus_UInt32  mc_wdma_db_rd_sel:1;
        RBus_UInt32  mc_wdma_db_apply:1;
        RBus_UInt32  res1:29;
    };
}mc_dma_mc_wdma_db_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dat_bit:1;
        RBus_UInt32  dat_fmt:1;
        RBus_UInt32  vflip_enable:1;
        RBus_UInt32  res2:27;
    };
}mc_dma_mc_rdma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  width:12;
        RBus_UInt32  res1:5;
        RBus_UInt32  height:11;
        RBus_UInt32  res2:4;
    };
}mc_dma_mc_rdma_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:16;
    };
}mc_dma_mc_lf_i_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}mc_dma_mc_lf_i_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}mc_dma_mc_lf_i_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res3:21;
    };
}mc_dma_mc_lf_i_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}mc_dma_mc_lf_i_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}mc_dma_mc_lf_i_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}mc_dma_mc_lf_i_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}mc_dma_mc_lf_i_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:16;
    };
}mc_dma_mc_hf_i_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}mc_dma_mc_hf_i_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}mc_dma_mc_hf_i_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res3:21;
    };
}mc_dma_mc_hf_i_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}mc_dma_mc_hf_i_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}mc_dma_mc_hf_i_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}mc_dma_mc_hf_i_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}mc_dma_mc_hf_i_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:16;
    };
}mc_dma_mc_lf_p_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}mc_dma_mc_lf_p_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}mc_dma_mc_lf_p_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res3:21;
    };
}mc_dma_mc_lf_p_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}mc_dma_mc_lf_p_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}mc_dma_mc_lf_p_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}mc_dma_mc_lf_p_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}mc_dma_mc_lf_p_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:16;
    };
}mc_dma_mc_hf_p_rdma_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}mc_dma_mc_hf_p_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}mc_dma_mc_hf_p_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  max_outstanding:3;
        RBus_UInt32  res3:21;
    };
}mc_dma_mc_hf_p_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  rdma_fifo_data_irdy_is_low:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cur_outstanding:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_data_water:9;
        RBus_UInt32  res3:3;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}mc_dma_mc_hf_p_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}mc_dma_mc_hf_p_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}mc_dma_mc_hf_p_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:9;
        RBus_UInt32  res1:6;
        RBus_UInt32  monitor_thd:9;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}mc_dma_mc_hf_p_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hf_p_rdma_irq_en:1;
        RBus_UInt32  lf_p_rdma_irq_en:1;
        RBus_UInt32  hf_i_rdma_irq_en:1;
        RBus_UInt32  lf_i_rdma_irq_en:1;
        RBus_UInt32  hf_wdma_irq_en:1;
        RBus_UInt32  lf_wdma_irq_en:1;
        RBus_UInt32  hf_p_pqdc_irq_en:1;
        RBus_UInt32  lf_p_pqdc_irq_en:1;
        RBus_UInt32  hf_i_pqdc_irq_en:1;
        RBus_UInt32  lf_i_pqdc_irq_en:1;
        RBus_UInt32  hf_pqc_irq_en:1;
        RBus_UInt32  lf_pqc_irq_en:1;
        RBus_UInt32  res1:20;
    };
}mc_dma_mc_cpr_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hf_p_rdma_irq:1;
        RBus_UInt32  lf_p_rdma_irq:1;
        RBus_UInt32  hf_i_rdma_irq:1;
        RBus_UInt32  lf_i_rdma_irq:1;
        RBus_UInt32  hf_wdma_irq:1;
        RBus_UInt32  lf_wdma_irq:1;
        RBus_UInt32  hf_p_pqdc_irq:1;
        RBus_UInt32  lf_p_pqdc_irq:1;
        RBus_UInt32  hf_i_pqdc_irq:1;
        RBus_UInt32  lf_i_pqdc_irq:1;
        RBus_UInt32  hf_pqc_irq:1;
        RBus_UInt32  lf_pqc_irq:1;
        RBus_UInt32  res1:20;
    };
}mc_dma_mc_cpr_int_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_p_index:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  rd_i_index:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  wr_index:3;
        RBus_UInt32  res3:21;
    };
}mc_dma_mc_dma_index_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}mc_dma_mc_dma_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  kmc_wdma_bist_fail_1:1;
        RBus_UInt32  kmc_wdma_bist_fail_0:1;
        RBus_UInt32  kmc_rdma_bist_fail_3:1;
        RBus_UInt32  kmc_rdma_bist_fail_2:1;
        RBus_UInt32  kmc_rdma_bist_fail_1:1;
        RBus_UInt32  kmc_rdma_bist_fail_0:1;
        RBus_UInt32  res2:10;
    };
}mc_dma_mc_dma_bist_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}mc_dma_mc_dma_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  kmc_wdma_drf_fail_1:1;
        RBus_UInt32  kmc_wdma_drf_fail_0:1;
        RBus_UInt32  kmc_rdma_drf_fail_3:1;
        RBus_UInt32  kmc_rdma_drf_fail_2:1;
        RBus_UInt32  kmc_rdma_drf_fail_1:1;
        RBus_UInt32  kmc_rdma_drf_fail_0:1;
        RBus_UInt32  res2:10;
    };
}mc_dma_mc_dma_drf_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_wdma_ls:1;
        RBus_UInt32  kmc_rdma_ls:1;
        RBus_UInt32  res1:30;
    };
}mc_dma_mc_dma_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kmc_wdma_rmb:4;
        RBus_UInt32  kmc_wdma_rma:4;
        RBus_UInt32  kmc_rdma_rmb:4;
        RBus_UInt32  kmc_rdma_rma:4;
        RBus_UInt32  kmc_wdma_rmeb:1;
        RBus_UInt32  kmc_wdma_rmea:1;
        RBus_UInt32  kmc_rdma_rmeb:1;
        RBus_UInt32  kmc_rdma_rmea:1;
        RBus_UInt32  res1:12;
    };
}mc_dma_mc_dma_bist_rme_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mc_rdma_db_en:1;
        RBus_UInt32  mc_rdma_db_rd_sel:1;
        RBus_UInt32  mc_rdma_db_apply:1;
        RBus_UInt32  res1:29;
    };
}mc_dma_mc_rdma_db_ctrl_RBUS;




#endif 


#endif 
