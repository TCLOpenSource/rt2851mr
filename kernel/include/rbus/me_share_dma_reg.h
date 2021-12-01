/**
* @file Merlin5_MEMC_ME_share_DMA
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ME_SHARE_DMA_REG_H_
#define _RBUS_ME_SHARE_DMA_REG_H_

#include "rbus_types.h"



//  ME_SHARE_DMA Register Address
#define  ME_SHARE_DMA_KME_WR_client_en                                          0x1809B720
#define  ME_SHARE_DMA_KME_WR_client_en_reg_addr                                  "0xB809B720"
#define  ME_SHARE_DMA_KME_WR_client_en_reg                                       0xB809B720
#define  ME_SHARE_DMA_KME_WR_client_en_inst_addr                                 "0x0000"
#define  set_ME_SHARE_DMA_KME_WR_client_en_reg(data)                             (*((volatile unsigned int*)ME_SHARE_DMA_KME_WR_client_en_reg)=data)
#define  get_ME_SHARE_DMA_KME_WR_client_en_reg                                   (*((volatile unsigned int*)ME_SHARE_DMA_KME_WR_client_en_reg))
#define  ME_SHARE_DMA_KME_WR_client_en_me1_1_enable_shift                        (1)
#define  ME_SHARE_DMA_KME_WR_client_en_me1_0_enable_shift                        (0)
#define  ME_SHARE_DMA_KME_WR_client_en_me1_1_enable_mask                         (0x00000002)
#define  ME_SHARE_DMA_KME_WR_client_en_me1_0_enable_mask                         (0x00000001)
#define  ME_SHARE_DMA_KME_WR_client_en_me1_1_enable(data)                        (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_KME_WR_client_en_me1_0_enable(data)                        (0x00000001&(data))
#define  ME_SHARE_DMA_KME_WR_client_en_get_me1_1_enable(data)                    ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_KME_WR_client_en_get_me1_0_enable(data)                    (0x00000001&(data))

#define  ME_SHARE_DMA_ME1_WDMA0_CTRL                                            0x1809B700
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_reg_addr                                    "0xB809B700"
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_reg                                         0xB809B700
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_inst_addr                                   "0x0001"
#define  set_ME_SHARE_DMA_ME1_WDMA0_CTRL_reg(data)                               (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_CTRL_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA0_CTRL_reg                                     (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_CTRL_reg))
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_height_shift                                (12)
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_width_shift                                 (0)
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_height_mask                                 (0x00FFF000)
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_width_mask                                  (0x00000FFF)
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_height(data)                                (0x00FFF000&((data)<<12))
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_width(data)                                 (0x00000FFF&(data))
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_get_height(data)                            ((0x00FFF000&(data))>>12)
#define  ME_SHARE_DMA_ME1_WDMA0_CTRL_get_width(data)                             (0x00000FFF&(data))

#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL                                          0x1809B704
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_reg_addr                                  "0xB809B704"
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_reg                                       0xB809B704
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_inst_addr                                 "0x0002"
#define  set_ME_SHARE_DMA_ME1_WDMA0_NUM_BL_reg(data)                             (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_NUM_BL_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA0_NUM_BL_reg                                   (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_NUM_BL_reg))
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_num_shift                                 (16)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_bl_shift                                  (9)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_remain_shift                              (1)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_num_mask                                  (0x03FF0000)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_bl_mask                                   (0x0000FE00)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_remain_mask                               (0x000000FE)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_num(data)                                 (0x03FF0000&((data)<<16))
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_bl(data)                                  (0x0000FE00&((data)<<9))
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_remain(data)                              (0x000000FE&((data)<<1))
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_get_num(data)                             ((0x03FF0000&(data))>>16)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_get_bl(data)                              ((0x0000FE00&(data))>>9)
#define  ME_SHARE_DMA_ME1_WDMA0_NUM_BL_get_remain(data)                          ((0x000000FE&(data))>>1)

#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP                                           0x1809B708
#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg_addr                                   "0xB809B708"
#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg                                        0xB809B708
#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP_inst_addr                                  "0x0003"
#define  set_ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg))
#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP_line_step_shift                            (4)
#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP_line_step_mask                             (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP_line_step(data)                            (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA0_LSTEP_get_line_step(data)                        ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0                                         0x1809B70C
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg_addr                                 "0xB809B70C"
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg                                      0xB809B70C
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0_inst_addr                                "0x0004"
#define  set_ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg))
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0_start_address0_shift                     (4)
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0_start_address0_mask                      (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0_start_address0(data)                     (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART0_get_start_address0(data)                 ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1                                         0x1809B710
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg_addr                                 "0xB809B710"
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg                                      0xB809B710
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1_inst_addr                                "0x0005"
#define  set_ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg))
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1_start_address1_shift                     (4)
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1_start_address1_mask                      (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1_start_address1(data)                     (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA0_MSTART1_get_start_address1(data)                 ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA0_MEND0                                           0x1809B714
#define  ME_SHARE_DMA_ME1_WDMA0_MEND0_reg_addr                                   "0xB809B714"
#define  ME_SHARE_DMA_ME1_WDMA0_MEND0_reg                                        0xB809B714
#define  ME_SHARE_DMA_ME1_WDMA0_MEND0_inst_addr                                  "0x0006"
#define  set_ME_SHARE_DMA_ME1_WDMA0_MEND0_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MEND0_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA0_MEND0_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MEND0_reg))
#define  ME_SHARE_DMA_ME1_WDMA0_MEND0_end_address0_shift                         (4)
#define  ME_SHARE_DMA_ME1_WDMA0_MEND0_end_address0_mask                          (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA0_MEND0_end_address0(data)                         (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA0_MEND0_get_end_address0(data)                     ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA0_MEND1                                           0x1809B718
#define  ME_SHARE_DMA_ME1_WDMA0_MEND1_reg_addr                                   "0xB809B718"
#define  ME_SHARE_DMA_ME1_WDMA0_MEND1_reg                                        0xB809B718
#define  ME_SHARE_DMA_ME1_WDMA0_MEND1_inst_addr                                  "0x0007"
#define  set_ME_SHARE_DMA_ME1_WDMA0_MEND1_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MEND1_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA0_MEND1_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA0_MEND1_reg))
#define  ME_SHARE_DMA_ME1_WDMA0_MEND1_end_address1_shift                         (4)
#define  ME_SHARE_DMA_ME1_WDMA0_MEND1_end_address1_mask                          (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA0_MEND1_end_address1(data)                         (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA0_MEND1_get_end_address1(data)                     ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP                                           0x1809B724
#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg_addr                                   "0xB809B724"
#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg                                        0xB809B724
#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP_inst_addr                                  "0x0008"
#define  set_ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg))
#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP_line_step_shift                            (4)
#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP_line_step_mask                             (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP_line_step(data)                            (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA1_LSTEP_get_line_step(data)                        ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0                                         0x1809B728
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg_addr                                 "0xB809B728"
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg                                      0xB809B728
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0_inst_addr                                "0x0009"
#define  set_ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg))
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0_start_address0_shift                     (4)
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0_start_address0_mask                      (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0_start_address0(data)                     (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART0_get_start_address0(data)                 ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1                                         0x1809B72C
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg_addr                                 "0xB809B72C"
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg                                      0xB809B72C
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1_inst_addr                                "0x000A"
#define  set_ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg))
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1_start_address1_shift                     (4)
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1_start_address1_mask                      (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1_start_address1(data)                     (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART1_get_start_address1(data)                 ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2                                         0x1809B730
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg_addr                                 "0xB809B730"
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg                                      0xB809B730
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2_inst_addr                                "0x000B"
#define  set_ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg))
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2_start_address2_shift                     (4)
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2_start_address2_mask                      (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2_start_address2(data)                     (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA1_MSTART2_get_start_address2(data)                 ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA1_MEND0                                           0x1809B734
#define  ME_SHARE_DMA_ME1_WDMA1_MEND0_reg_addr                                   "0xB809B734"
#define  ME_SHARE_DMA_ME1_WDMA1_MEND0_reg                                        0xB809B734
#define  ME_SHARE_DMA_ME1_WDMA1_MEND0_inst_addr                                  "0x000C"
#define  set_ME_SHARE_DMA_ME1_WDMA1_MEND0_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MEND0_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA1_MEND0_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MEND0_reg))
#define  ME_SHARE_DMA_ME1_WDMA1_MEND0_end_address0_shift                         (4)
#define  ME_SHARE_DMA_ME1_WDMA1_MEND0_end_address0_mask                          (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA1_MEND0_end_address0(data)                         (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA1_MEND0_get_end_address0(data)                     ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA1_MEND1                                           0x1809B738
#define  ME_SHARE_DMA_ME1_WDMA1_MEND1_reg_addr                                   "0xB809B738"
#define  ME_SHARE_DMA_ME1_WDMA1_MEND1_reg                                        0xB809B738
#define  ME_SHARE_DMA_ME1_WDMA1_MEND1_inst_addr                                  "0x000D"
#define  set_ME_SHARE_DMA_ME1_WDMA1_MEND1_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MEND1_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA1_MEND1_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MEND1_reg))
#define  ME_SHARE_DMA_ME1_WDMA1_MEND1_end_address1_shift                         (4)
#define  ME_SHARE_DMA_ME1_WDMA1_MEND1_end_address1_mask                          (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA1_MEND1_end_address1(data)                         (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA1_MEND1_get_end_address1(data)                     ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME1_WDMA1_MEND2                                           0x1809B73C
#define  ME_SHARE_DMA_ME1_WDMA1_MEND2_reg_addr                                   "0xB809B73C"
#define  ME_SHARE_DMA_ME1_WDMA1_MEND2_reg                                        0xB809B73C
#define  ME_SHARE_DMA_ME1_WDMA1_MEND2_inst_addr                                  "0x000E"
#define  set_ME_SHARE_DMA_ME1_WDMA1_MEND2_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MEND2_reg)=data)
#define  get_ME_SHARE_DMA_ME1_WDMA1_MEND2_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_ME1_WDMA1_MEND2_reg))
#define  ME_SHARE_DMA_ME1_WDMA1_MEND2_end_address2_shift                         (4)
#define  ME_SHARE_DMA_ME1_WDMA1_MEND2_end_address2_mask                          (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME1_WDMA1_MEND2_end_address2(data)                         (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME1_WDMA1_MEND2_get_end_address2(data)                     ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up                                   0x1809B78C
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_reg_addr                           "0xB809B78C"
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_reg                                0xB809B78C
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_inst_addr                          "0x000F"
#define  set_ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_reg(data)                      (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_reg                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_reg))
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_dma_up_limit_shift                 (4)
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_dma_up_limit_mask                  (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_dma_up_limit(data)                 (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_up_get_dma_up_limit(data)             ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low                                  0x1809B790
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_reg_addr                          "0xB809B790"
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_reg                               0xB809B790
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_inst_addr                         "0x0010"
#define  set_ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_reg(data)                     (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_reg                           (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_reg))
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_dma_low_limit_shift               (4)
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_dma_low_limit_mask                (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_dma_low_limit(data)               (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_WR_Rule_check_low_get_dma_low_limit(data)           ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl                                            0x1809B794
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg_addr                                    "0xB809B794"
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg                                         0xB809B794
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_inst_addr                                   "0x0011"
#define  set_ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg(data)                               (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg                                     (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Ctrl_reg))
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dummy_31_10_shift                           (10)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_max_outstanding_shift                       (8)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dummy_7_2_shift                             (2)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_force_all_rst_shift                         (1)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dma_enable_shift                            (0)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dummy_31_10_mask                            (0xFFFFFC00)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_max_outstanding_mask                        (0x00000300)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dummy_7_2_mask                              (0x000000FC)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_force_all_rst_mask                          (0x00000002)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dma_enable_mask                             (0x00000001)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dummy_31_10(data)                           (0xFFFFFC00&((data)<<10))
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_max_outstanding(data)                       (0x00000300&((data)<<8))
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dummy_7_2(data)                             (0x000000FC&((data)<<2))
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_force_all_rst(data)                         (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_dma_enable(data)                            (0x00000001&(data))
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_get_dummy_31_10(data)                       ((0xFFFFFC00&(data))>>10)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_get_max_outstanding(data)                   ((0x00000300&(data))>>8)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_get_dummy_7_2(data)                         ((0x000000FC&(data))>>2)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_get_force_all_rst(data)                     ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_ME_DMA_WR_Ctrl_get_dma_enable(data)                        (0x00000001&(data))

#define  ME_SHARE_DMA_ME_DMA_WR_status                                          0x1809B798
#define  ME_SHARE_DMA_ME_DMA_WR_status_reg_addr                                  "0xB809B798"
#define  ME_SHARE_DMA_ME_DMA_WR_status_reg                                       0xB809B798
#define  ME_SHARE_DMA_ME_DMA_WR_status_inst_addr                                 "0x0012"
#define  set_ME_SHARE_DMA_ME_DMA_WR_status_reg(data)                             (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_status_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_WR_status_reg                                   (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_status_reg))
#define  ME_SHARE_DMA_ME_DMA_WR_status_dma_cmd_water_shift                       (28)
#define  ME_SHARE_DMA_ME_DMA_WR_status_dma_data_water_shift                      (16)
#define  ME_SHARE_DMA_ME_DMA_WR_status_cur_outstanding_shift                     (8)
#define  ME_SHARE_DMA_ME_DMA_WR_status_soft_rst_before_cmd_finish_shift          (4)
#define  ME_SHARE_DMA_ME_DMA_WR_status_soft_rst_with_data_left_shift             (3)
#define  ME_SHARE_DMA_ME_DMA_WR_status_data_fifo_underflow_err_shift             (2)
#define  ME_SHARE_DMA_ME_DMA_WR_status_exceed_range_err_shift                    (1)
#define  ME_SHARE_DMA_ME_DMA_WR_status_zero_length_err_shift                     (0)
#define  ME_SHARE_DMA_ME_DMA_WR_status_dma_cmd_water_mask                        (0x70000000)
#define  ME_SHARE_DMA_ME_DMA_WR_status_dma_data_water_mask                       (0x003F0000)
#define  ME_SHARE_DMA_ME_DMA_WR_status_cur_outstanding_mask                      (0x00000700)
#define  ME_SHARE_DMA_ME_DMA_WR_status_soft_rst_before_cmd_finish_mask           (0x00000010)
#define  ME_SHARE_DMA_ME_DMA_WR_status_soft_rst_with_data_left_mask              (0x00000008)
#define  ME_SHARE_DMA_ME_DMA_WR_status_data_fifo_underflow_err_mask              (0x00000004)
#define  ME_SHARE_DMA_ME_DMA_WR_status_exceed_range_err_mask                     (0x00000002)
#define  ME_SHARE_DMA_ME_DMA_WR_status_zero_length_err_mask                      (0x00000001)
#define  ME_SHARE_DMA_ME_DMA_WR_status_dma_cmd_water(data)                       (0x70000000&((data)<<28))
#define  ME_SHARE_DMA_ME_DMA_WR_status_dma_data_water(data)                      (0x003F0000&((data)<<16))
#define  ME_SHARE_DMA_ME_DMA_WR_status_cur_outstanding(data)                     (0x00000700&((data)<<8))
#define  ME_SHARE_DMA_ME_DMA_WR_status_soft_rst_before_cmd_finish(data)          (0x00000010&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_WR_status_soft_rst_with_data_left(data)             (0x00000008&((data)<<3))
#define  ME_SHARE_DMA_ME_DMA_WR_status_data_fifo_underflow_err(data)             (0x00000004&((data)<<2))
#define  ME_SHARE_DMA_ME_DMA_WR_status_exceed_range_err(data)                    (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_ME_DMA_WR_status_zero_length_err(data)                     (0x00000001&(data))
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_dma_cmd_water(data)                   ((0x70000000&(data))>>28)
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_dma_data_water(data)                  ((0x003F0000&(data))>>16)
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_cur_outstanding(data)                 ((0x00000700&(data))>>8)
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_soft_rst_before_cmd_finish(data)      ((0x00000010&(data))>>4)
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_soft_rst_with_data_left(data)         ((0x00000008&(data))>>3)
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_data_fifo_underflow_err(data)         ((0x00000004&(data))>>2)
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_exceed_range_err(data)                ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_ME_DMA_WR_status_get_zero_length_err(data)                 (0x00000001&(data))

#define  ME_SHARE_DMA_ME_DMA_WR_status1                                         0x1809B79C
#define  ME_SHARE_DMA_ME_DMA_WR_status1_reg_addr                                 "0xB809B79C"
#define  ME_SHARE_DMA_ME_DMA_WR_status1_reg                                      0xB809B79C
#define  ME_SHARE_DMA_ME_DMA_WR_status1_inst_addr                                "0x0013"
#define  set_ME_SHARE_DMA_ME_DMA_WR_status1_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_status1_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_WR_status1_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_status1_reg))
#define  ME_SHARE_DMA_ME_DMA_WR_status1_ack_num_error_shift                      (31)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_last_no_ack_error_shift                  (30)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_target_ack_num_shift                     (16)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_last_ack_num_shift                       (8)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_selected_bl_shift                        (0)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_ack_num_error_mask                       (0x80000000)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_last_no_ack_error_mask                   (0x40000000)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_target_ack_num_mask                      (0x007F0000)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_last_ack_num_mask                        (0x00007F00)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_selected_bl_mask                         (0x0000007F)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_ack_num_error(data)                      (0x80000000&((data)<<31))
#define  ME_SHARE_DMA_ME_DMA_WR_status1_last_no_ack_error(data)                  (0x40000000&((data)<<30))
#define  ME_SHARE_DMA_ME_DMA_WR_status1_target_ack_num(data)                     (0x007F0000&((data)<<16))
#define  ME_SHARE_DMA_ME_DMA_WR_status1_last_ack_num(data)                       (0x00007F00&((data)<<8))
#define  ME_SHARE_DMA_ME_DMA_WR_status1_selected_bl(data)                        (0x0000007F&(data))
#define  ME_SHARE_DMA_ME_DMA_WR_status1_get_ack_num_error(data)                  ((0x80000000&(data))>>31)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_get_last_no_ack_error(data)              ((0x40000000&(data))>>30)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_get_target_ack_num(data)                 ((0x007F0000&(data))>>16)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_get_last_ack_num(data)                   ((0x00007F00&(data))>>8)
#define  ME_SHARE_DMA_ME_DMA_WR_status1_get_selected_bl(data)                    (0x0000007F&(data))

#define  ME_SHARE_DMA_ME_DMA_WR_status2                                         0x1809B7A0
#define  ME_SHARE_DMA_ME_DMA_WR_status2_reg_addr                                 "0xB809B7A0"
#define  ME_SHARE_DMA_ME_DMA_WR_status2_reg                                      0xB809B7A0
#define  ME_SHARE_DMA_ME_DMA_WR_status2_inst_addr                                "0x0014"
#define  set_ME_SHARE_DMA_ME_DMA_WR_status2_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_status2_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_WR_status2_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_status2_reg))
#define  ME_SHARE_DMA_ME_DMA_WR_status2_selected_addr_shift                      (4)
#define  ME_SHARE_DMA_ME_DMA_WR_status2_addr_bl_sel_shift                        (0)
#define  ME_SHARE_DMA_ME_DMA_WR_status2_selected_addr_mask                       (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME_DMA_WR_status2_addr_bl_sel_mask                         (0x00000003)
#define  ME_SHARE_DMA_ME_DMA_WR_status2_selected_addr(data)                      (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_WR_status2_addr_bl_sel(data)                        (0x00000003&(data))
#define  ME_SHARE_DMA_ME_DMA_WR_status2_get_selected_addr(data)                  ((0xFFFFFFF0&(data))>>4)
#define  ME_SHARE_DMA_ME_DMA_WR_status2_get_addr_bl_sel(data)                    (0x00000003&(data))

#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor                                   0x1809B7A4
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reg_addr                           "0xB809B7A4"
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reg                                0xB809B7A4
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_inst_addr                          "0x0015"
#define  set_ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reg(data)                      (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reg                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reg))
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_en_shift                   (31)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_conti_shift                (30)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reach_thd_shift                    (24)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_thd_shift                  (16)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_highest_water_level_shift          (0)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_en_mask                    (0x80000000)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_conti_mask                 (0x40000000)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reach_thd_mask                     (0x01000000)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_thd_mask                   (0x003F0000)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_highest_water_level_mask           (0x0000003F)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_en(data)                   (0x80000000&((data)<<31))
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_conti(data)                (0x40000000&((data)<<30))
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_reach_thd(data)                    (0x01000000&((data)<<24))
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_monitor_thd(data)                  (0x003F0000&((data)<<16))
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_highest_water_level(data)          (0x0000003F&(data))
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_get_monitor_en(data)               ((0x80000000&(data))>>31)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_get_monitor_conti(data)            ((0x40000000&(data))>>30)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_get_reach_thd(data)                ((0x01000000&(data))>>24)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_get_monitor_thd(data)              ((0x003F0000&(data))>>16)
#define  ME_SHARE_DMA_ME_DMA_WR_Water_Monitor_get_highest_water_level(data)      (0x0000003F&(data))

#define  ME_SHARE_DMA_KME_RD_client_en                                          0x1809B7B0
#define  ME_SHARE_DMA_KME_RD_client_en_reg_addr                                  "0xB809B7B0"
#define  ME_SHARE_DMA_KME_RD_client_en_reg                                       0xB809B7B0
#define  ME_SHARE_DMA_KME_RD_client_en_inst_addr                                 "0x0016"
#define  set_ME_SHARE_DMA_KME_RD_client_en_reg(data)                             (*((volatile unsigned int*)ME_SHARE_DMA_KME_RD_client_en_reg)=data)
#define  get_ME_SHARE_DMA_KME_RD_client_en_reg                                   (*((volatile unsigned int*)ME_SHARE_DMA_KME_RD_client_en_reg))
#define  ME_SHARE_DMA_KME_RD_client_en_dh_1_enable_shift                         (1)
#define  ME_SHARE_DMA_KME_RD_client_en_dh_0_enable_shift                         (0)
#define  ME_SHARE_DMA_KME_RD_client_en_dh_1_enable_mask                          (0x00000002)
#define  ME_SHARE_DMA_KME_RD_client_en_dh_0_enable_mask                          (0x00000001)
#define  ME_SHARE_DMA_KME_RD_client_en_dh_1_enable(data)                         (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_KME_RD_client_en_dh_0_enable(data)                         (0x00000001&(data))
#define  ME_SHARE_DMA_KME_RD_client_en_get_dh_1_enable(data)                     ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_KME_RD_client_en_get_dh_0_enable(data)                     (0x00000001&(data))

#define  ME_SHARE_DMA_DH_RDMA0_CTRL                                             0x1809B7A8
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_reg_addr                                     "0xB809B7A8"
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_reg                                          0xB809B7A8
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_inst_addr                                    "0x0017"
#define  set_ME_SHARE_DMA_DH_RDMA0_CTRL_reg(data)                                (*((volatile unsigned int*)ME_SHARE_DMA_DH_RDMA0_CTRL_reg)=data)
#define  get_ME_SHARE_DMA_DH_RDMA0_CTRL_reg                                      (*((volatile unsigned int*)ME_SHARE_DMA_DH_RDMA0_CTRL_reg))
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_height_shift                                 (12)
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_width_shift                                  (0)
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_height_mask                                  (0x00FFF000)
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_width_mask                                   (0x00000FFF)
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_height(data)                                 (0x00FFF000&((data)<<12))
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_width(data)                                  (0x00000FFF&(data))
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_get_height(data)                             ((0x00FFF000&(data))>>12)
#define  ME_SHARE_DMA_DH_RDMA0_CTRL_get_width(data)                              (0x00000FFF&(data))

#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL                                           0x1809B7AC
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_reg_addr                                   "0xB809B7AC"
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_reg                                        0xB809B7AC
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_inst_addr                                  "0x0018"
#define  set_ME_SHARE_DMA_DH_RDMA0_NUM_BL_reg(data)                              (*((volatile unsigned int*)ME_SHARE_DMA_DH_RDMA0_NUM_BL_reg)=data)
#define  get_ME_SHARE_DMA_DH_RDMA0_NUM_BL_reg                                    (*((volatile unsigned int*)ME_SHARE_DMA_DH_RDMA0_NUM_BL_reg))
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_num_shift                                  (16)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_bl_shift                                   (9)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_remain_shift                               (1)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_num_mask                                   (0x03FF0000)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_bl_mask                                    (0x0000FE00)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_remain_mask                                (0x000000FE)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_num(data)                                  (0x03FF0000&((data)<<16))
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_bl(data)                                   (0x0000FE00&((data)<<9))
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_remain(data)                               (0x000000FE&((data)<<1))
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_get_num(data)                              ((0x03FF0000&(data))>>16)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_get_bl(data)                               ((0x0000FE00&(data))>>9)
#define  ME_SHARE_DMA_DH_RDMA0_NUM_BL_get_remain(data)                           ((0x000000FE&(data))>>1)

#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up                                   0x1809B7D8
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_reg_addr                           "0xB809B7D8"
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_reg                                0xB809B7D8
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_inst_addr                          "0x0019"
#define  set_ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_reg(data)                      (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_reg                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_reg))
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_dma_up_limit_shift                 (4)
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_dma_up_limit_mask                  (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_dma_up_limit(data)                 (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_up_get_dma_up_limit(data)             ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low                                  0x1809B7DC
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_reg_addr                          "0xB809B7DC"
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_reg                               0xB809B7DC
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_inst_addr                         "0x001A"
#define  set_ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_reg(data)                     (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_reg                           (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_reg))
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_dma_low_limit_shift               (4)
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_dma_low_limit_mask                (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_dma_low_limit(data)               (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_RD_Rule_check_low_get_dma_low_limit(data)           ((0xFFFFFFF0&(data))>>4)

#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl                                            0x1809B7E0
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg_addr                                    "0xB809B7E0"
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg                                         0xB809B7E0
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_inst_addr                                   "0x001B"
#define  set_ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg(data)                               (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg                                     (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Ctrl_reg))
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dummy_31_10_shift                           (10)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_max_outstanding_shift                       (8)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dummy_7_2_shift                             (2)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_force_all_rst_shift                         (1)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dma_enable_shift                            (0)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dummy_31_10_mask                            (0xFFFFFC00)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_max_outstanding_mask                        (0x00000300)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dummy_7_2_mask                              (0x000000FC)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_force_all_rst_mask                          (0x00000002)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dma_enable_mask                             (0x00000001)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dummy_31_10(data)                           (0xFFFFFC00&((data)<<10))
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_max_outstanding(data)                       (0x00000300&((data)<<8))
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dummy_7_2(data)                             (0x000000FC&((data)<<2))
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_force_all_rst(data)                         (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_dma_enable(data)                            (0x00000001&(data))
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_get_dummy_31_10(data)                       ((0xFFFFFC00&(data))>>10)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_get_max_outstanding(data)                   ((0x00000300&(data))>>8)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_get_dummy_7_2(data)                         ((0x000000FC&(data))>>2)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_get_force_all_rst(data)                     ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_ME_DMA_RD_Ctrl_get_dma_enable(data)                        (0x00000001&(data))

#define  ME_SHARE_DMA_ME_DMA_RD_status                                          0x1809B7E4
#define  ME_SHARE_DMA_ME_DMA_RD_status_reg_addr                                  "0xB809B7E4"
#define  ME_SHARE_DMA_ME_DMA_RD_status_reg                                       0xB809B7E4
#define  ME_SHARE_DMA_ME_DMA_RD_status_inst_addr                                 "0x001C"
#define  set_ME_SHARE_DMA_ME_DMA_RD_status_reg(data)                             (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_status_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_RD_status_reg                                   (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_status_reg))
#define  ME_SHARE_DMA_ME_DMA_RD_status_dma_cmd_water_shift                       (28)
#define  ME_SHARE_DMA_ME_DMA_RD_status_dma_data_water_shift                      (16)
#define  ME_SHARE_DMA_ME_DMA_RD_status_cur_outstanding_shift                     (8)
#define  ME_SHARE_DMA_ME_DMA_RD_status_soft_rst_before_cmd_finish_shift          (4)
#define  ME_SHARE_DMA_ME_DMA_RD_status_soft_rst_with_data_left_shift             (3)
#define  ME_SHARE_DMA_ME_DMA_RD_status_data_fifo_overflow_err_shift              (2)
#define  ME_SHARE_DMA_ME_DMA_RD_status_exceed_range_err_shift                    (1)
#define  ME_SHARE_DMA_ME_DMA_RD_status_zero_length_err_shift                     (0)
#define  ME_SHARE_DMA_ME_DMA_RD_status_dma_cmd_water_mask                        (0x70000000)
#define  ME_SHARE_DMA_ME_DMA_RD_status_dma_data_water_mask                       (0x003F0000)
#define  ME_SHARE_DMA_ME_DMA_RD_status_cur_outstanding_mask                      (0x00000700)
#define  ME_SHARE_DMA_ME_DMA_RD_status_soft_rst_before_cmd_finish_mask           (0x00000010)
#define  ME_SHARE_DMA_ME_DMA_RD_status_soft_rst_with_data_left_mask              (0x00000008)
#define  ME_SHARE_DMA_ME_DMA_RD_status_data_fifo_overflow_err_mask               (0x00000004)
#define  ME_SHARE_DMA_ME_DMA_RD_status_exceed_range_err_mask                     (0x00000002)
#define  ME_SHARE_DMA_ME_DMA_RD_status_zero_length_err_mask                      (0x00000001)
#define  ME_SHARE_DMA_ME_DMA_RD_status_dma_cmd_water(data)                       (0x70000000&((data)<<28))
#define  ME_SHARE_DMA_ME_DMA_RD_status_dma_data_water(data)                      (0x003F0000&((data)<<16))
#define  ME_SHARE_DMA_ME_DMA_RD_status_cur_outstanding(data)                     (0x00000700&((data)<<8))
#define  ME_SHARE_DMA_ME_DMA_RD_status_soft_rst_before_cmd_finish(data)          (0x00000010&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_RD_status_soft_rst_with_data_left(data)             (0x00000008&((data)<<3))
#define  ME_SHARE_DMA_ME_DMA_RD_status_data_fifo_overflow_err(data)              (0x00000004&((data)<<2))
#define  ME_SHARE_DMA_ME_DMA_RD_status_exceed_range_err(data)                    (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_ME_DMA_RD_status_zero_length_err(data)                     (0x00000001&(data))
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_dma_cmd_water(data)                   ((0x70000000&(data))>>28)
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_dma_data_water(data)                  ((0x003F0000&(data))>>16)
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_cur_outstanding(data)                 ((0x00000700&(data))>>8)
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_soft_rst_before_cmd_finish(data)      ((0x00000010&(data))>>4)
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_soft_rst_with_data_left(data)         ((0x00000008&(data))>>3)
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_data_fifo_overflow_err(data)          ((0x00000004&(data))>>2)
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_exceed_range_err(data)                ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_ME_DMA_RD_status_get_zero_length_err(data)                 (0x00000001&(data))

#define  ME_SHARE_DMA_ME_DMA_RD_status1                                         0x1809B7E8
#define  ME_SHARE_DMA_ME_DMA_RD_status1_reg_addr                                 "0xB809B7E8"
#define  ME_SHARE_DMA_ME_DMA_RD_status1_reg                                      0xB809B7E8
#define  ME_SHARE_DMA_ME_DMA_RD_status1_inst_addr                                "0x001D"
#define  set_ME_SHARE_DMA_ME_DMA_RD_status1_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_status1_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_RD_status1_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_status1_reg))
#define  ME_SHARE_DMA_ME_DMA_RD_status1_ack_num_error_shift                      (31)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_last_no_ack_error_shift                  (30)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_target_ack_num_shift                     (16)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_last_ack_num_shift                       (8)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_selected_bl_shift                        (0)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_ack_num_error_mask                       (0x80000000)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_last_no_ack_error_mask                   (0x40000000)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_target_ack_num_mask                      (0x007F0000)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_last_ack_num_mask                        (0x00007F00)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_selected_bl_mask                         (0x0000007F)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_ack_num_error(data)                      (0x80000000&((data)<<31))
#define  ME_SHARE_DMA_ME_DMA_RD_status1_last_no_ack_error(data)                  (0x40000000&((data)<<30))
#define  ME_SHARE_DMA_ME_DMA_RD_status1_target_ack_num(data)                     (0x007F0000&((data)<<16))
#define  ME_SHARE_DMA_ME_DMA_RD_status1_last_ack_num(data)                       (0x00007F00&((data)<<8))
#define  ME_SHARE_DMA_ME_DMA_RD_status1_selected_bl(data)                        (0x0000007F&(data))
#define  ME_SHARE_DMA_ME_DMA_RD_status1_get_ack_num_error(data)                  ((0x80000000&(data))>>31)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_get_last_no_ack_error(data)              ((0x40000000&(data))>>30)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_get_target_ack_num(data)                 ((0x007F0000&(data))>>16)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_get_last_ack_num(data)                   ((0x00007F00&(data))>>8)
#define  ME_SHARE_DMA_ME_DMA_RD_status1_get_selected_bl(data)                    (0x0000007F&(data))

#define  ME_SHARE_DMA_ME_DMA_RD_status2                                         0x1809B7EC
#define  ME_SHARE_DMA_ME_DMA_RD_status2_reg_addr                                 "0xB809B7EC"
#define  ME_SHARE_DMA_ME_DMA_RD_status2_reg                                      0xB809B7EC
#define  ME_SHARE_DMA_ME_DMA_RD_status2_inst_addr                                "0x001E"
#define  set_ME_SHARE_DMA_ME_DMA_RD_status2_reg(data)                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_status2_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_RD_status2_reg                                  (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_status2_reg))
#define  ME_SHARE_DMA_ME_DMA_RD_status2_selected_addr_shift                      (4)
#define  ME_SHARE_DMA_ME_DMA_RD_status2_addr_bl_sel_shift                        (0)
#define  ME_SHARE_DMA_ME_DMA_RD_status2_selected_addr_mask                       (0xFFFFFFF0)
#define  ME_SHARE_DMA_ME_DMA_RD_status2_addr_bl_sel_mask                         (0x00000003)
#define  ME_SHARE_DMA_ME_DMA_RD_status2_selected_addr(data)                      (0xFFFFFFF0&((data)<<4))
#define  ME_SHARE_DMA_ME_DMA_RD_status2_addr_bl_sel(data)                        (0x00000003&(data))
#define  ME_SHARE_DMA_ME_DMA_RD_status2_get_selected_addr(data)                  ((0xFFFFFFF0&(data))>>4)
#define  ME_SHARE_DMA_ME_DMA_RD_status2_get_addr_bl_sel(data)                    (0x00000003&(data))

#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor                                   0x1809B7F0
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reg_addr                           "0xB809B7F0"
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reg                                0xB809B7F0
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_inst_addr                          "0x001F"
#define  set_ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reg(data)                      (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reg                            (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reg))
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_en_shift                   (31)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_conti_shift                (30)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reach_thd_shift                    (24)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_thd_shift                  (16)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_lowest_water_level_shift           (0)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_en_mask                    (0x80000000)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_conti_mask                 (0x40000000)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reach_thd_mask                     (0x01000000)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_thd_mask                   (0x003F0000)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_lowest_water_level_mask            (0x0000003F)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_en(data)                   (0x80000000&((data)<<31))
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_conti(data)                (0x40000000&((data)<<30))
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_reach_thd(data)                    (0x01000000&((data)<<24))
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_monitor_thd(data)                  (0x003F0000&((data)<<16))
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_lowest_water_level(data)           (0x0000003F&(data))
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_get_monitor_en(data)               ((0x80000000&(data))>>31)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_get_monitor_conti(data)            ((0x40000000&(data))>>30)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_get_reach_thd(data)                ((0x01000000&(data))>>24)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_get_monitor_thd(data)              ((0x003F0000&(data))>>16)
#define  ME_SHARE_DMA_ME_DMA_RD_Water_Monitor_get_lowest_water_level(data)       (0x0000003F&(data))

#define  ME_SHARE_DMA_KME_DMA_STATUS                                            0x1809B7C0
#define  ME_SHARE_DMA_KME_DMA_STATUS_reg_addr                                    "0xB809B7C0"
#define  ME_SHARE_DMA_KME_DMA_STATUS_reg                                         0xB809B7C0
#define  ME_SHARE_DMA_KME_DMA_STATUS_inst_addr                                   "0x0020"
#define  set_ME_SHARE_DMA_KME_DMA_STATUS_reg(data)                               (*((volatile unsigned int*)ME_SHARE_DMA_KME_DMA_STATUS_reg)=data)
#define  get_ME_SHARE_DMA_KME_DMA_STATUS_reg                                     (*((volatile unsigned int*)ME_SHARE_DMA_KME_DMA_STATUS_reg))
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_cmd_fifo_underflow_shift               (23)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_cmd_fifo_overflow_shift                (22)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_datmem_overflow_1_shift                (17)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_datmem_overflow_0_shift                (16)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_afifo_in_data_trdy_is_low_1_shift      (7)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_afifo_in_data_trdy_is_low_0_shift      (6)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_wr_data_trdy_is_low_1_shift            (4)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_wr_data_trdy_is_low_0_shift            (3)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_datmem_underflow_1_shift               (1)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_datmem_underflow_0_shift               (0)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_cmd_fifo_underflow_mask                (0x00800000)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_cmd_fifo_overflow_mask                 (0x00400000)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_datmem_overflow_1_mask                 (0x00020000)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_datmem_overflow_0_mask                 (0x00010000)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_afifo_in_data_trdy_is_low_1_mask       (0x00000080)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_afifo_in_data_trdy_is_low_0_mask       (0x00000040)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_wr_data_trdy_is_low_1_mask             (0x00000010)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_wr_data_trdy_is_low_0_mask             (0x00000008)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_datmem_underflow_1_mask                (0x00000002)
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_datmem_underflow_0_mask                (0x00000001)
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_cmd_fifo_underflow(data)               (0x00800000&((data)<<23))
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_cmd_fifo_overflow(data)                (0x00400000&((data)<<22))
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_datmem_overflow_1(data)                (0x00020000&((data)<<17))
#define  ME_SHARE_DMA_KME_DMA_STATUS_rdma_datmem_overflow_0(data)                (0x00010000&((data)<<16))
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_afifo_in_data_trdy_is_low_1(data)      (0x00000080&((data)<<7))
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_afifo_in_data_trdy_is_low_0(data)      (0x00000040&((data)<<6))
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_wr_data_trdy_is_low_1(data)            (0x00000010&((data)<<4))
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_wr_data_trdy_is_low_0(data)            (0x00000008&((data)<<3))
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_datmem_underflow_1(data)               (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_KME_DMA_STATUS_wdma_datmem_underflow_0(data)               (0x00000001&(data))
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_rdma_cmd_fifo_underflow(data)           ((0x00800000&(data))>>23)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_rdma_cmd_fifo_overflow(data)            ((0x00400000&(data))>>22)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_rdma_datmem_overflow_1(data)            ((0x00020000&(data))>>17)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_rdma_datmem_overflow_0(data)            ((0x00010000&(data))>>16)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_wdma_afifo_in_data_trdy_is_low_1(data)  ((0x00000080&(data))>>7)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_wdma_afifo_in_data_trdy_is_low_0(data)  ((0x00000040&(data))>>6)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_wdma_wr_data_trdy_is_low_1(data)        ((0x00000010&(data))>>4)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_wdma_wr_data_trdy_is_low_0(data)        ((0x00000008&(data))>>3)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_wdma_datmem_underflow_1(data)           ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_KME_DMA_STATUS_get_wdma_datmem_underflow_0(data)           (0x00000001&(data))

#define  ME_SHARE_DMA_ME_DMA_INT                                                0x1809B7FC
#define  ME_SHARE_DMA_ME_DMA_INT_reg_addr                                        "0xB809B7FC"
#define  ME_SHARE_DMA_ME_DMA_INT_reg                                             0xB809B7FC
#define  ME_SHARE_DMA_ME_DMA_INT_inst_addr                                       "0x0021"
#define  set_ME_SHARE_DMA_ME_DMA_INT_reg(data)                                   (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_INT_reg)=data)
#define  get_ME_SHARE_DMA_ME_DMA_INT_reg                                         (*((volatile unsigned int*)ME_SHARE_DMA_ME_DMA_INT_reg))
#define  ME_SHARE_DMA_ME_DMA_INT_wdma_irq_en_shift                               (17)
#define  ME_SHARE_DMA_ME_DMA_INT_rdma_irq_en_shift                               (16)
#define  ME_SHARE_DMA_ME_DMA_INT_wdma_irq_shift                                  (1)
#define  ME_SHARE_DMA_ME_DMA_INT_rdma_irq_shift                                  (0)
#define  ME_SHARE_DMA_ME_DMA_INT_wdma_irq_en_mask                                (0x00020000)
#define  ME_SHARE_DMA_ME_DMA_INT_rdma_irq_en_mask                                (0x00010000)
#define  ME_SHARE_DMA_ME_DMA_INT_wdma_irq_mask                                   (0x00000002)
#define  ME_SHARE_DMA_ME_DMA_INT_rdma_irq_mask                                   (0x00000001)
#define  ME_SHARE_DMA_ME_DMA_INT_wdma_irq_en(data)                               (0x00020000&((data)<<17))
#define  ME_SHARE_DMA_ME_DMA_INT_rdma_irq_en(data)                               (0x00010000&((data)<<16))
#define  ME_SHARE_DMA_ME_DMA_INT_wdma_irq(data)                                  (0x00000002&((data)<<1))
#define  ME_SHARE_DMA_ME_DMA_INT_rdma_irq(data)                                  (0x00000001&(data))
#define  ME_SHARE_DMA_ME_DMA_INT_get_wdma_irq_en(data)                           ((0x00020000&(data))>>17)
#define  ME_SHARE_DMA_ME_DMA_INT_get_rdma_irq_en(data)                           ((0x00010000&(data))>>16)
#define  ME_SHARE_DMA_ME_DMA_INT_get_wdma_irq(data)                              ((0x00000002&(data))>>1)
#define  ME_SHARE_DMA_ME_DMA_INT_get_rdma_irq(data)                              (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ME_SHARE_DMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  me1_1_enable:1;
        RBus_UInt32  me1_0_enable:1;
    };
}me_share_dma_kme_wr_client_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  height:12;
        RBus_UInt32  width:12;
    };
}me_share_dma_me1_wdma0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  num:10;
        RBus_UInt32  bl:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res3:1;
    };
}me_share_dma_me1_wdma0_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_step:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma0_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address0:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma0_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address1:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma0_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address0:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma0_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address1:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma0_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_step:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma1_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address0:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma1_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address1:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma1_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  start_address2:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma1_mstart2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address0:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma1_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address1:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma1_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  end_address2:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me1_wdma1_mend2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809b794_31_10:22;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  dummy1809b794_7_2:6;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}me_share_dma_me_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  dma_data_water:6;
        RBus_UInt32  res3:5;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}me_share_dma_me_dma_wr_status_RBUS;

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
}me_share_dma_me_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}me_share_dma_me_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  monitor_thd:6;
        RBus_UInt32  res3:10;
        RBus_UInt32  highest_water_level:6;
    };
}me_share_dma_me_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  dh_1_enable:1;
        RBus_UInt32  dh_0_enable:1;
    };
}me_share_dma_kme_rd_client_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  height:12;
        RBus_UInt32  width:12;
    };
}me_share_dma_dh_rdma0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  num:10;
        RBus_UInt32  bl:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res3:1;
    };
}me_share_dma_dh_rdma0_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}me_share_dma_me_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1809b7e0_31_10:22;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  dummy1809b7e0_7_2:6;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dma_enable:1;
    };
}me_share_dma_me_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:6;
        RBus_UInt32  dma_data_water:6;
        RBus_UInt32  res3:5;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}me_share_dma_me_dma_rd_status_RBUS;

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
}me_share_dma_me_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}me_share_dma_me_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_en:1;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  monitor_thd:6;
        RBus_UInt32  res3:10;
        RBus_UInt32  lowest_water_level:6;
    };
}me_share_dma_me_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  rdma_cmd_fifo_underflow:1;
        RBus_UInt32  rdma_cmd_fifo_overflow:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  rdma_datmem_overflow_1:1;
        RBus_UInt32  rdma_datmem_overflow_0:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  wdma_afifo_in_data_trdy_is_low_1:1;
        RBus_UInt32  wdma_afifo_in_data_trdy_is_low_0:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  wdma_wr_data_trdy_is_low_1:1;
        RBus_UInt32  wdma_wr_data_trdy_is_low_0:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  wdma_datmem_underflow_1:1;
        RBus_UInt32  wdma_datmem_underflow_0:1;
    };
}me_share_dma_kme_dma_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  wdma_irq_en:1;
        RBus_UInt32  rdma_irq_en:1;
        RBus_UInt32  res2:14;
        RBus_UInt32  wdma_irq:1;
        RBus_UInt32  rdma_irq:1;
    };
}me_share_dma_me_dma_int_RBUS;

#else //apply LITTLE_ENDIAN

//======ME_SHARE_DMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_0_enable:1;
        RBus_UInt32  me1_1_enable:1;
        RBus_UInt32  res1:30;
    };
}me_share_dma_kme_wr_client_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  width:12;
        RBus_UInt32  height:12;
        RBus_UInt32  res1:8;
    };
}me_share_dma_me1_wdma0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:10;
        RBus_UInt32  res3:6;
    };
}me_share_dma_me1_wdma0_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  line_step:28;
    };
}me_share_dma_me1_wdma0_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address0:28;
    };
}me_share_dma_me1_wdma0_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address1:28;
    };
}me_share_dma_me1_wdma0_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address0:28;
    };
}me_share_dma_me1_wdma0_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address1:28;
    };
}me_share_dma_me1_wdma0_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  line_step:28;
    };
}me_share_dma_me1_wdma1_lstep_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address0:28;
    };
}me_share_dma_me1_wdma1_mstart0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address1:28;
    };
}me_share_dma_me1_wdma1_mstart1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  start_address2:28;
    };
}me_share_dma_me1_wdma1_mstart2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address0:28;
    };
}me_share_dma_me1_wdma1_mend0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address1:28;
    };
}me_share_dma_me1_wdma1_mend1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  end_address2:28;
    };
}me_share_dma_me1_wdma1_mend2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}me_share_dma_me_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}me_share_dma_me_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dummy1809b794_7_2:6;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  dummy1809b794_31_10:22;
    };
}me_share_dma_me_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dma_data_water:6;
        RBus_UInt32  res3:6;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}me_share_dma_me_dma_wr_status_RBUS;

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
}me_share_dma_me_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}me_share_dma_me_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  highest_water_level:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  monitor_thd:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}me_share_dma_me_dma_wr_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dh_0_enable:1;
        RBus_UInt32  dh_1_enable:1;
        RBus_UInt32  res1:30;
    };
}me_share_dma_kme_rd_client_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  width:12;
        RBus_UInt32  height:12;
        RBus_UInt32  res1:8;
    };
}me_share_dma_dh_rdma0_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  remain:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  bl:7;
        RBus_UInt32  num:10;
        RBus_UInt32  res3:6;
    };
}me_share_dma_dh_rdma0_num_bl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}me_share_dma_me_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}me_share_dma_me_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_enable:1;
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  dummy1809b7e0_7_2:6;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  dummy1809b7e0_31_10:22;
    };
}me_share_dma_me_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dma_data_water:6;
        RBus_UInt32  res3:6;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}me_share_dma_me_dma_rd_status_RBUS;

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
}me_share_dma_me_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}me_share_dma_me_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lowest_water_level:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  monitor_thd:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  reach_thd:1;
        RBus_UInt32  res3:5;
        RBus_UInt32  monitor_conti:1;
        RBus_UInt32  monitor_en:1;
    };
}me_share_dma_me_dma_rd_water_monitor_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wdma_datmem_underflow_0:1;
        RBus_UInt32  wdma_datmem_underflow_1:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  wdma_wr_data_trdy_is_low_0:1;
        RBus_UInt32  wdma_wr_data_trdy_is_low_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  wdma_afifo_in_data_trdy_is_low_0:1;
        RBus_UInt32  wdma_afifo_in_data_trdy_is_low_1:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  rdma_datmem_overflow_0:1;
        RBus_UInt32  rdma_datmem_overflow_1:1;
        RBus_UInt32  res4:4;
        RBus_UInt32  rdma_cmd_fifo_overflow:1;
        RBus_UInt32  rdma_cmd_fifo_underflow:1;
        RBus_UInt32  res5:8;
    };
}me_share_dma_kme_dma_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdma_irq:1;
        RBus_UInt32  wdma_irq:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  rdma_irq_en:1;
        RBus_UInt32  wdma_irq_en:1;
        RBus_UInt32  res2:14;
    };
}me_share_dma_me_dma_int_RBUS;




#endif 


#endif 
