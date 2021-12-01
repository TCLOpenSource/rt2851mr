/**
* @file Merlin5_LGCY_VE_VMBLK
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LGCY_VMA_REG_H_
#define _RBUS_LGCY_VMA_REG_H_

#include "rbus_types.h"



//  LGCY_VMA Register Address
#define  LGCY_VMA_DMAREG1A_0                                                    0x1800EE00
#define  LGCY_VMA_DMAREG1A_0_reg_addr                                            "0xB800EE00"
#define  LGCY_VMA_DMAREG1A_0_reg                                                 0xB800EE00
#define  LGCY_VMA_DMAREG1A_0_inst_addr                                           "0x0000"
#define  set_LGCY_VMA_DMAREG1A_0_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_0_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_0_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_0_reg))
#define  LGCY_VMA_DMAREG1A_0_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_0_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_0_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_0_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_0_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_0_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_0_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_0_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG1A_1                                                    0x1800EE04
#define  LGCY_VMA_DMAREG1A_1_reg_addr                                            "0xB800EE04"
#define  LGCY_VMA_DMAREG1A_1_reg                                                 0xB800EE04
#define  LGCY_VMA_DMAREG1A_1_inst_addr                                           "0x0001"
#define  set_LGCY_VMA_DMAREG1A_1_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_1_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_1_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_1_reg))
#define  LGCY_VMA_DMAREG1A_1_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_1_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_1_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_1_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_1_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_1_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_1_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_1_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG1A_2                                                    0x1800EE08
#define  LGCY_VMA_DMAREG1A_2_reg_addr                                            "0xB800EE08"
#define  LGCY_VMA_DMAREG1A_2_reg                                                 0xB800EE08
#define  LGCY_VMA_DMAREG1A_2_inst_addr                                           "0x0002"
#define  set_LGCY_VMA_DMAREG1A_2_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_2_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_2_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_2_reg))
#define  LGCY_VMA_DMAREG1A_2_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_2_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_2_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_2_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_2_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_2_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_2_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_2_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG1A_3                                                    0x1800EE0C
#define  LGCY_VMA_DMAREG1A_3_reg_addr                                            "0xB800EE0C"
#define  LGCY_VMA_DMAREG1A_3_reg                                                 0xB800EE0C
#define  LGCY_VMA_DMAREG1A_3_inst_addr                                           "0x0003"
#define  set_LGCY_VMA_DMAREG1A_3_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_3_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_3_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_3_reg))
#define  LGCY_VMA_DMAREG1A_3_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_3_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_3_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_3_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_3_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_3_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_3_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_3_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG1A_4                                                    0x1800EE10
#define  LGCY_VMA_DMAREG1A_4_reg_addr                                            "0xB800EE10"
#define  LGCY_VMA_DMAREG1A_4_reg                                                 0xB800EE10
#define  LGCY_VMA_DMAREG1A_4_inst_addr                                           "0x0004"
#define  set_LGCY_VMA_DMAREG1A_4_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_4_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_4_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_4_reg))
#define  LGCY_VMA_DMAREG1A_4_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_4_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_4_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_4_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_4_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_4_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_4_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_4_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG1A_5                                                    0x1800EE14
#define  LGCY_VMA_DMAREG1A_5_reg_addr                                            "0xB800EE14"
#define  LGCY_VMA_DMAREG1A_5_reg                                                 0xB800EE14
#define  LGCY_VMA_DMAREG1A_5_inst_addr                                           "0x0005"
#define  set_LGCY_VMA_DMAREG1A_5_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_5_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_5_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_5_reg))
#define  LGCY_VMA_DMAREG1A_5_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_5_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_5_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_5_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_5_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_5_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_5_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_5_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG1A_6                                                    0x1800EE18
#define  LGCY_VMA_DMAREG1A_6_reg_addr                                            "0xB800EE18"
#define  LGCY_VMA_DMAREG1A_6_reg                                                 0xB800EE18
#define  LGCY_VMA_DMAREG1A_6_inst_addr                                           "0x0006"
#define  set_LGCY_VMA_DMAREG1A_6_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_6_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_6_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_6_reg))
#define  LGCY_VMA_DMAREG1A_6_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_6_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_6_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_6_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_6_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_6_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_6_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_6_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG1A_7                                                    0x1800EE1C
#define  LGCY_VMA_DMAREG1A_7_reg_addr                                            "0xB800EE1C"
#define  LGCY_VMA_DMAREG1A_7_reg                                                 0xB800EE1C
#define  LGCY_VMA_DMAREG1A_7_inst_addr                                           "0x0007"
#define  set_LGCY_VMA_DMAREG1A_7_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_7_reg)=data)
#define  get_LGCY_VMA_DMAREG1A_7_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG1A_7_reg))
#define  LGCY_VMA_DMAREG1A_7_x_shift                                             (14)
#define  LGCY_VMA_DMAREG1A_7_y_shift                                             (0)
#define  LGCY_VMA_DMAREG1A_7_x_mask                                              (0x07FFC000)
#define  LGCY_VMA_DMAREG1A_7_y_mask                                              (0x00003FFF)
#define  LGCY_VMA_DMAREG1A_7_x(data)                                             (0x07FFC000&((data)<<14))
#define  LGCY_VMA_DMAREG1A_7_y(data)                                             (0x00003FFF&(data))
#define  LGCY_VMA_DMAREG1A_7_get_x(data)                                         ((0x07FFC000&(data))>>14)
#define  LGCY_VMA_DMAREG1A_7_get_y(data)                                         (0x00003FFF&(data))

#define  LGCY_VMA_DMAREG2A_0                                                    0x1800EE20
#define  LGCY_VMA_DMAREG2A_0_reg_addr                                            "0xB800EE20"
#define  LGCY_VMA_DMAREG2A_0_reg                                                 0xB800EE20
#define  LGCY_VMA_DMAREG2A_0_inst_addr                                           "0x0008"
#define  set_LGCY_VMA_DMAREG2A_0_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_0_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_0_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_0_reg))
#define  LGCY_VMA_DMAREG2A_0_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_0_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_0_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_0_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_0_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_0_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_0_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_0_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_0_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_0_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_0_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_0_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_0_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_0_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_0_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_0_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_0_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_0_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_0_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_0_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_0_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_0_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_0_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_0_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_0_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_0_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_0_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_0_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG2A_1                                                    0x1800EE24
#define  LGCY_VMA_DMAREG2A_1_reg_addr                                            "0xB800EE24"
#define  LGCY_VMA_DMAREG2A_1_reg                                                 0xB800EE24
#define  LGCY_VMA_DMAREG2A_1_inst_addr                                           "0x0009"
#define  set_LGCY_VMA_DMAREG2A_1_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_1_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_1_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_1_reg))
#define  LGCY_VMA_DMAREG2A_1_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_1_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_1_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_1_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_1_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_1_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_1_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_1_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_1_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_1_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_1_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_1_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_1_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_1_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_1_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_1_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_1_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_1_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_1_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_1_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_1_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_1_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_1_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_1_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_1_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_1_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_1_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_1_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG2A_2                                                    0x1800EE28
#define  LGCY_VMA_DMAREG2A_2_reg_addr                                            "0xB800EE28"
#define  LGCY_VMA_DMAREG2A_2_reg                                                 0xB800EE28
#define  LGCY_VMA_DMAREG2A_2_inst_addr                                           "0x000A"
#define  set_LGCY_VMA_DMAREG2A_2_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_2_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_2_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_2_reg))
#define  LGCY_VMA_DMAREG2A_2_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_2_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_2_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_2_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_2_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_2_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_2_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_2_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_2_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_2_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_2_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_2_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_2_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_2_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_2_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_2_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_2_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_2_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_2_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_2_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_2_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_2_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_2_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_2_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_2_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_2_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_2_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_2_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG2A_3                                                    0x1800EE2C
#define  LGCY_VMA_DMAREG2A_3_reg_addr                                            "0xB800EE2C"
#define  LGCY_VMA_DMAREG2A_3_reg                                                 0xB800EE2C
#define  LGCY_VMA_DMAREG2A_3_inst_addr                                           "0x000B"
#define  set_LGCY_VMA_DMAREG2A_3_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_3_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_3_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_3_reg))
#define  LGCY_VMA_DMAREG2A_3_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_3_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_3_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_3_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_3_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_3_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_3_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_3_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_3_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_3_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_3_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_3_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_3_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_3_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_3_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_3_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_3_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_3_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_3_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_3_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_3_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_3_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_3_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_3_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_3_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_3_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_3_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_3_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG2A_4                                                    0x1800EE30
#define  LGCY_VMA_DMAREG2A_4_reg_addr                                            "0xB800EE30"
#define  LGCY_VMA_DMAREG2A_4_reg                                                 0xB800EE30
#define  LGCY_VMA_DMAREG2A_4_inst_addr                                           "0x000C"
#define  set_LGCY_VMA_DMAREG2A_4_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_4_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_4_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_4_reg))
#define  LGCY_VMA_DMAREG2A_4_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_4_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_4_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_4_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_4_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_4_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_4_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_4_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_4_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_4_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_4_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_4_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_4_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_4_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_4_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_4_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_4_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_4_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_4_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_4_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_4_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_4_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_4_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_4_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_4_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_4_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_4_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_4_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG2A_5                                                    0x1800EE34
#define  LGCY_VMA_DMAREG2A_5_reg_addr                                            "0xB800EE34"
#define  LGCY_VMA_DMAREG2A_5_reg                                                 0xB800EE34
#define  LGCY_VMA_DMAREG2A_5_inst_addr                                           "0x000D"
#define  set_LGCY_VMA_DMAREG2A_5_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_5_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_5_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_5_reg))
#define  LGCY_VMA_DMAREG2A_5_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_5_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_5_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_5_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_5_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_5_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_5_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_5_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_5_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_5_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_5_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_5_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_5_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_5_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_5_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_5_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_5_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_5_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_5_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_5_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_5_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_5_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_5_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_5_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_5_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_5_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_5_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_5_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG2A_6                                                    0x1800EE38
#define  LGCY_VMA_DMAREG2A_6_reg_addr                                            "0xB800EE38"
#define  LGCY_VMA_DMAREG2A_6_reg                                                 0xB800EE38
#define  LGCY_VMA_DMAREG2A_6_inst_addr                                           "0x000E"
#define  set_LGCY_VMA_DMAREG2A_6_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_6_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_6_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_6_reg))
#define  LGCY_VMA_DMAREG2A_6_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_6_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_6_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_6_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_6_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_6_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_6_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_6_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_6_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_6_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_6_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_6_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_6_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_6_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_6_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_6_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_6_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_6_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_6_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_6_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_6_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_6_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_6_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_6_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_6_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_6_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_6_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_6_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG2A_7                                                    0x1800EE3C
#define  LGCY_VMA_DMAREG2A_7_reg_addr                                            "0xB800EE3C"
#define  LGCY_VMA_DMAREG2A_7_reg                                                 0xB800EE3C
#define  LGCY_VMA_DMAREG2A_7_inst_addr                                           "0x000F"
#define  set_LGCY_VMA_DMAREG2A_7_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_7_reg)=data)
#define  get_LGCY_VMA_DMAREG2A_7_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG2A_7_reg))
#define  LGCY_VMA_DMAREG2A_7_cbcr_vmoffset_shift                                 (23)
#define  LGCY_VMA_DMAREG2A_7_mode_shift                                          (22)
#define  LGCY_VMA_DMAREG2A_7_right_offset_shift                                  (19)
#define  LGCY_VMA_DMAREG2A_7_left_offset_shift                                   (16)
#define  LGCY_VMA_DMAREG2A_7_addr_idx_shift                                      (8)
#define  LGCY_VMA_DMAREG2A_7_post_inc_sel_shift                                  (7)
#define  LGCY_VMA_DMAREG2A_7_post_inc_shift                                      (0)
#define  LGCY_VMA_DMAREG2A_7_cbcr_vmoffset_mask                                  (0x3F800000)
#define  LGCY_VMA_DMAREG2A_7_mode_mask                                           (0x00400000)
#define  LGCY_VMA_DMAREG2A_7_right_offset_mask                                   (0x00380000)
#define  LGCY_VMA_DMAREG2A_7_left_offset_mask                                    (0x00070000)
#define  LGCY_VMA_DMAREG2A_7_addr_idx_mask                                       (0x00007F00)
#define  LGCY_VMA_DMAREG2A_7_post_inc_sel_mask                                   (0x00000080)
#define  LGCY_VMA_DMAREG2A_7_post_inc_mask                                       (0x0000003F)
#define  LGCY_VMA_DMAREG2A_7_cbcr_vmoffset(data)                                 (0x3F800000&((data)<<23))
#define  LGCY_VMA_DMAREG2A_7_mode(data)                                          (0x00400000&((data)<<22))
#define  LGCY_VMA_DMAREG2A_7_right_offset(data)                                  (0x00380000&((data)<<19))
#define  LGCY_VMA_DMAREG2A_7_left_offset(data)                                   (0x00070000&((data)<<16))
#define  LGCY_VMA_DMAREG2A_7_addr_idx(data)                                      (0x00007F00&((data)<<8))
#define  LGCY_VMA_DMAREG2A_7_post_inc_sel(data)                                  (0x00000080&((data)<<7))
#define  LGCY_VMA_DMAREG2A_7_post_inc(data)                                      (0x0000003F&(data))
#define  LGCY_VMA_DMAREG2A_7_get_cbcr_vmoffset(data)                             ((0x3F800000&(data))>>23)
#define  LGCY_VMA_DMAREG2A_7_get_mode(data)                                      ((0x00400000&(data))>>22)
#define  LGCY_VMA_DMAREG2A_7_get_right_offset(data)                              ((0x00380000&(data))>>19)
#define  LGCY_VMA_DMAREG2A_7_get_left_offset(data)                               ((0x00070000&(data))>>16)
#define  LGCY_VMA_DMAREG2A_7_get_addr_idx(data)                                  ((0x00007F00&(data))>>8)
#define  LGCY_VMA_DMAREG2A_7_get_post_inc_sel(data)                              ((0x00000080&(data))>>7)
#define  LGCY_VMA_DMAREG2A_7_get_post_inc(data)                                  (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_0                                                    0x1800EE40
#define  LGCY_VMA_DMAREG3A_0_reg_addr                                            "0xB800EE40"
#define  LGCY_VMA_DMAREG3A_0_reg                                                 0xB800EE40
#define  LGCY_VMA_DMAREG3A_0_inst_addr                                           "0x0010"
#define  set_LGCY_VMA_DMAREG3A_0_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_0_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_0_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_0_reg))
#define  LGCY_VMA_DMAREG3A_0_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_0_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_0_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_0_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_0_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_0_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_0_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_0_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_0_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_0_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_0_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_0_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_0_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_0_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_0_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_0_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_0_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_0_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_0_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_0_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_1                                                    0x1800EE44
#define  LGCY_VMA_DMAREG3A_1_reg_addr                                            "0xB800EE44"
#define  LGCY_VMA_DMAREG3A_1_reg                                                 0xB800EE44
#define  LGCY_VMA_DMAREG3A_1_inst_addr                                           "0x0011"
#define  set_LGCY_VMA_DMAREG3A_1_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_1_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_1_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_1_reg))
#define  LGCY_VMA_DMAREG3A_1_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_1_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_1_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_1_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_1_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_1_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_1_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_1_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_1_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_1_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_1_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_1_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_1_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_1_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_1_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_1_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_1_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_1_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_1_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_1_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_2                                                    0x1800EE48
#define  LGCY_VMA_DMAREG3A_2_reg_addr                                            "0xB800EE48"
#define  LGCY_VMA_DMAREG3A_2_reg                                                 0xB800EE48
#define  LGCY_VMA_DMAREG3A_2_inst_addr                                           "0x0012"
#define  set_LGCY_VMA_DMAREG3A_2_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_2_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_2_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_2_reg))
#define  LGCY_VMA_DMAREG3A_2_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_2_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_2_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_2_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_2_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_2_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_2_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_2_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_2_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_2_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_2_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_2_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_2_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_2_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_2_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_2_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_2_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_2_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_2_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_2_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_3                                                    0x1800EE4C
#define  LGCY_VMA_DMAREG3A_3_reg_addr                                            "0xB800EE4C"
#define  LGCY_VMA_DMAREG3A_3_reg                                                 0xB800EE4C
#define  LGCY_VMA_DMAREG3A_3_inst_addr                                           "0x0013"
#define  set_LGCY_VMA_DMAREG3A_3_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_3_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_3_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_3_reg))
#define  LGCY_VMA_DMAREG3A_3_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_3_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_3_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_3_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_3_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_3_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_3_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_3_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_3_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_3_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_3_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_3_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_3_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_3_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_3_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_3_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_3_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_3_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_3_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_3_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_4                                                    0x1800EE50
#define  LGCY_VMA_DMAREG3A_4_reg_addr                                            "0xB800EE50"
#define  LGCY_VMA_DMAREG3A_4_reg                                                 0xB800EE50
#define  LGCY_VMA_DMAREG3A_4_inst_addr                                           "0x0014"
#define  set_LGCY_VMA_DMAREG3A_4_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_4_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_4_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_4_reg))
#define  LGCY_VMA_DMAREG3A_4_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_4_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_4_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_4_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_4_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_4_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_4_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_4_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_4_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_4_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_4_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_4_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_4_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_4_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_4_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_4_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_4_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_4_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_4_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_4_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_5                                                    0x1800EE54
#define  LGCY_VMA_DMAREG3A_5_reg_addr                                            "0xB800EE54"
#define  LGCY_VMA_DMAREG3A_5_reg                                                 0xB800EE54
#define  LGCY_VMA_DMAREG3A_5_inst_addr                                           "0x0015"
#define  set_LGCY_VMA_DMAREG3A_5_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_5_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_5_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_5_reg))
#define  LGCY_VMA_DMAREG3A_5_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_5_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_5_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_5_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_5_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_5_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_5_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_5_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_5_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_5_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_5_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_5_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_5_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_5_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_5_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_5_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_5_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_5_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_5_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_5_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_6                                                    0x1800EE58
#define  LGCY_VMA_DMAREG3A_6_reg_addr                                            "0xB800EE58"
#define  LGCY_VMA_DMAREG3A_6_reg                                                 0xB800EE58
#define  LGCY_VMA_DMAREG3A_6_inst_addr                                           "0x0016"
#define  set_LGCY_VMA_DMAREG3A_6_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_6_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_6_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_6_reg))
#define  LGCY_VMA_DMAREG3A_6_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_6_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_6_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_6_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_6_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_6_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_6_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_6_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_6_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_6_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_6_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_6_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_6_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_6_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_6_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_6_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_6_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_6_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_6_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_6_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_DMAREG3A_7                                                    0x1800EE5C
#define  LGCY_VMA_DMAREG3A_7_reg_addr                                            "0xB800EE5C"
#define  LGCY_VMA_DMAREG3A_7_reg                                                 0xB800EE5C
#define  LGCY_VMA_DMAREG3A_7_inst_addr                                           "0x0017"
#define  set_LGCY_VMA_DMAREG3A_7_reg(data)                                       (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_7_reg)=data)
#define  get_LGCY_VMA_DMAREG3A_7_reg                                             (*((volatile unsigned int*)LGCY_VMA_DMAREG3A_7_reg))
#define  LGCY_VMA_DMAREG3A_7_line_off_shift                                      (28)
#define  LGCY_VMA_DMAREG3A_7_vmrowoffset_shift                                   (22)
#define  LGCY_VMA_DMAREG3A_7_vm_addr_shift                                       (12)
#define  LGCY_VMA_DMAREG3A_7_h_shift                                             (6)
#define  LGCY_VMA_DMAREG3A_7_w_shift                                             (0)
#define  LGCY_VMA_DMAREG3A_7_line_off_mask                                       (0x10000000)
#define  LGCY_VMA_DMAREG3A_7_vmrowoffset_mask                                    (0x07C00000)
#define  LGCY_VMA_DMAREG3A_7_vm_addr_mask                                        (0x0007F000)
#define  LGCY_VMA_DMAREG3A_7_h_mask                                              (0x00000FC0)
#define  LGCY_VMA_DMAREG3A_7_w_mask                                              (0x0000003F)
#define  LGCY_VMA_DMAREG3A_7_line_off(data)                                      (0x10000000&((data)<<28))
#define  LGCY_VMA_DMAREG3A_7_vmrowoffset(data)                                   (0x07C00000&((data)<<22))
#define  LGCY_VMA_DMAREG3A_7_vm_addr(data)                                       (0x0007F000&((data)<<12))
#define  LGCY_VMA_DMAREG3A_7_h(data)                                             (0x00000FC0&((data)<<6))
#define  LGCY_VMA_DMAREG3A_7_w(data)                                             (0x0000003F&(data))
#define  LGCY_VMA_DMAREG3A_7_get_line_off(data)                                  ((0x10000000&(data))>>28)
#define  LGCY_VMA_DMAREG3A_7_get_vmrowoffset(data)                               ((0x07C00000&(data))>>22)
#define  LGCY_VMA_DMAREG3A_7_get_vm_addr(data)                                   ((0x0007F000&(data))>>12)
#define  LGCY_VMA_DMAREG3A_7_get_h(data)                                         ((0x00000FC0&(data))>>6)
#define  LGCY_VMA_DMAREG3A_7_get_w(data)                                         (0x0000003F&(data))

#define  LGCY_VMA_SDMACNTLA                                                     0x1800EE60
#define  LGCY_VMA_SDMACNTLA_reg_addr                                             "0xB800EE60"
#define  LGCY_VMA_SDMACNTLA_reg                                                  0xB800EE60
#define  LGCY_VMA_SDMACNTLA_inst_addr                                            "0x0018"
#define  set_LGCY_VMA_SDMACNTLA_reg(data)                                        (*((volatile unsigned int*)LGCY_VMA_SDMACNTLA_reg)=data)
#define  get_LGCY_VMA_SDMACNTLA_reg                                              (*((volatile unsigned int*)LGCY_VMA_SDMACNTLA_reg))
#define  LGCY_VMA_SDMACNTLA_seq_vmem_addr_shift                                  (16)
#define  LGCY_VMA_SDMACNTLA_seq_10byte_sel_shift                                 (9)
#define  LGCY_VMA_SDMACNTLA_seq_xsfr_size_shift                                  (0)
#define  LGCY_VMA_SDMACNTLA_seq_vmem_addr_mask                                   (0x1FFF0000)
#define  LGCY_VMA_SDMACNTLA_seq_10byte_sel_mask                                  (0x00000200)
#define  LGCY_VMA_SDMACNTLA_seq_xsfr_size_mask                                   (0x000001FF)
#define  LGCY_VMA_SDMACNTLA_seq_vmem_addr(data)                                  (0x1FFF0000&((data)<<16))
#define  LGCY_VMA_SDMACNTLA_seq_10byte_sel(data)                                 (0x00000200&((data)<<9))
#define  LGCY_VMA_SDMACNTLA_seq_xsfr_size(data)                                  (0x000001FF&(data))
#define  LGCY_VMA_SDMACNTLA_get_seq_vmem_addr(data)                              ((0x1FFF0000&(data))>>16)
#define  LGCY_VMA_SDMACNTLA_get_seq_10byte_sel(data)                             ((0x00000200&(data))>>9)
#define  LGCY_VMA_SDMACNTLA_get_seq_xsfr_size(data)                              (0x000001FF&(data))

#define  LGCY_VMA_SDMAADRA                                                      0x1800EE64
#define  LGCY_VMA_SDMAADRA_reg_addr                                              "0xB800EE64"
#define  LGCY_VMA_SDMAADRA_reg                                                   0xB800EE64
#define  LGCY_VMA_SDMAADRA_inst_addr                                             "0x0019"
#define  set_LGCY_VMA_SDMAADRA_reg(data)                                         (*((volatile unsigned int*)LGCY_VMA_SDMAADRA_reg)=data)
#define  get_LGCY_VMA_SDMAADRA_reg                                               (*((volatile unsigned int*)LGCY_VMA_SDMAADRA_reg))
#define  LGCY_VMA_SDMAADRA_seq_line_addr_shift                                   (0)
#define  LGCY_VMA_SDMAADRA_seq_line_addr_mask                                    (0xFFFFFFFF)
#define  LGCY_VMA_SDMAADRA_seq_line_addr(data)                                   (0xFFFFFFFF&(data))
#define  LGCY_VMA_SDMAADRA_get_seq_line_addr(data)                               (0xFFFFFFFF&(data))

#define  LGCY_VMA_DMACTLA                                                       0x1800EE68
#define  LGCY_VMA_DMACTLA_reg_addr                                               "0xB800EE68"
#define  LGCY_VMA_DMACTLA_reg                                                    0xB800EE68
#define  LGCY_VMA_DMACTLA_inst_addr                                              "0x001A"
#define  set_LGCY_VMA_DMACTLA_reg(data)                                          (*((volatile unsigned int*)LGCY_VMA_DMACTLA_reg)=data)
#define  get_LGCY_VMA_DMACTLA_reg                                                (*((volatile unsigned int*)LGCY_VMA_DMACTLA_reg))
#define  LGCY_VMA_DMACTLA_crc_sel_shift                                          (30)
#define  LGCY_VMA_DMACTLA_write_enable7_shift                                    (29)
#define  LGCY_VMA_DMACTLA_h264_dummy_info_shift                                  (27)
#define  LGCY_VMA_DMACTLA_write_enable6_shift                                    (26)
#define  LGCY_VMA_DMACTLA_hevc_debug_shift                                       (25)
#define  LGCY_VMA_DMACTLA_write_enable5_shift                                    (24)
#define  LGCY_VMA_DMACTLA_reset_valid_shift                                      (23)
#define  LGCY_VMA_DMACTLA_write_enable3_shift                                    (20)
#define  LGCY_VMA_DMACTLA_dmem_path_shift                                        (19)
#define  LGCY_VMA_DMACTLA_write_enable2_shift                                    (18)
#define  LGCY_VMA_DMACTLA_ldst_vmem_count_shift                                  (2)
#define  LGCY_VMA_DMACTLA_write_enable1_shift                                    (1)
#define  LGCY_VMA_DMACTLA_post_write_disable_shift                               (0)
#define  LGCY_VMA_DMACTLA_crc_sel_mask                                           (0x40000000)
#define  LGCY_VMA_DMACTLA_write_enable7_mask                                     (0x20000000)
#define  LGCY_VMA_DMACTLA_h264_dummy_info_mask                                   (0x18000000)
#define  LGCY_VMA_DMACTLA_write_enable6_mask                                     (0x04000000)
#define  LGCY_VMA_DMACTLA_hevc_debug_mask                                        (0x02000000)
#define  LGCY_VMA_DMACTLA_write_enable5_mask                                     (0x01000000)
#define  LGCY_VMA_DMACTLA_reset_valid_mask                                       (0x00800000)
#define  LGCY_VMA_DMACTLA_write_enable3_mask                                     (0x00100000)
#define  LGCY_VMA_DMACTLA_dmem_path_mask                                         (0x00080000)
#define  LGCY_VMA_DMACTLA_write_enable2_mask                                     (0x00040000)
#define  LGCY_VMA_DMACTLA_ldst_vmem_count_mask                                   (0x0003FFFC)
#define  LGCY_VMA_DMACTLA_write_enable1_mask                                     (0x00000002)
#define  LGCY_VMA_DMACTLA_post_write_disable_mask                                (0x00000001)
#define  LGCY_VMA_DMACTLA_crc_sel(data)                                          (0x40000000&((data)<<30))
#define  LGCY_VMA_DMACTLA_write_enable7(data)                                    (0x20000000&((data)<<29))
#define  LGCY_VMA_DMACTLA_h264_dummy_info(data)                                  (0x18000000&((data)<<27))
#define  LGCY_VMA_DMACTLA_write_enable6(data)                                    (0x04000000&((data)<<26))
#define  LGCY_VMA_DMACTLA_hevc_debug(data)                                       (0x02000000&((data)<<25))
#define  LGCY_VMA_DMACTLA_write_enable5(data)                                    (0x01000000&((data)<<24))
#define  LGCY_VMA_DMACTLA_reset_valid(data)                                      (0x00800000&((data)<<23))
#define  LGCY_VMA_DMACTLA_write_enable3(data)                                    (0x00100000&((data)<<20))
#define  LGCY_VMA_DMACTLA_dmem_path(data)                                        (0x00080000&((data)<<19))
#define  LGCY_VMA_DMACTLA_write_enable2(data)                                    (0x00040000&((data)<<18))
#define  LGCY_VMA_DMACTLA_ldst_vmem_count(data)                                  (0x0003FFFC&((data)<<2))
#define  LGCY_VMA_DMACTLA_write_enable1(data)                                    (0x00000002&((data)<<1))
#define  LGCY_VMA_DMACTLA_post_write_disable(data)                               (0x00000001&(data))
#define  LGCY_VMA_DMACTLA_get_crc_sel(data)                                      ((0x40000000&(data))>>30)
#define  LGCY_VMA_DMACTLA_get_write_enable7(data)                                ((0x20000000&(data))>>29)
#define  LGCY_VMA_DMACTLA_get_h264_dummy_info(data)                              ((0x18000000&(data))>>27)
#define  LGCY_VMA_DMACTLA_get_write_enable6(data)                                ((0x04000000&(data))>>26)
#define  LGCY_VMA_DMACTLA_get_hevc_debug(data)                                   ((0x02000000&(data))>>25)
#define  LGCY_VMA_DMACTLA_get_write_enable5(data)                                ((0x01000000&(data))>>24)
#define  LGCY_VMA_DMACTLA_get_reset_valid(data)                                  ((0x00800000&(data))>>23)
#define  LGCY_VMA_DMACTLA_get_write_enable3(data)                                ((0x00100000&(data))>>20)
#define  LGCY_VMA_DMACTLA_get_dmem_path(data)                                    ((0x00080000&(data))>>19)
#define  LGCY_VMA_DMACTLA_get_write_enable2(data)                                ((0x00040000&(data))>>18)
#define  LGCY_VMA_DMACTLA_get_ldst_vmem_count(data)                              ((0x0003FFFC&(data))>>2)
#define  LGCY_VMA_DMACTLA_get_write_enable1(data)                                ((0x00000002&(data))>>1)
#define  LGCY_VMA_DMACTLA_get_post_write_disable(data)                           (0x00000001&(data))

#define  LGCY_VMA_CRCA                                                          0x1800EE7C
#define  LGCY_VMA_CRCA_reg_addr                                                  "0xB800EE7C"
#define  LGCY_VMA_CRCA_reg                                                       0xB800EE7C
#define  LGCY_VMA_CRCA_inst_addr                                                 "0x001B"
#define  set_LGCY_VMA_CRCA_reg(data)                                             (*((volatile unsigned int*)LGCY_VMA_CRCA_reg)=data)
#define  get_LGCY_VMA_CRCA_reg                                                   (*((volatile unsigned int*)LGCY_VMA_CRCA_reg))
#define  LGCY_VMA_CRCA_crc_sum_shift                                             (0)
#define  LGCY_VMA_CRCA_crc_sum_mask                                              (0xFFFFFFFF)
#define  LGCY_VMA_CRCA_crc_sum(data)                                             (0xFFFFFFFF&(data))
#define  LGCY_VMA_CRCA_get_crc_sum(data)                                         (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LGCY_VMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  x:13;
        RBus_UInt32  y:14;
    };
}lgcy_vma_dmareg1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cbcr_vmoffset:7;
        RBus_UInt32  mode:1;
        RBus_UInt32  right_offset:3;
        RBus_UInt32  left_offset:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  addr_idx:7;
        RBus_UInt32  post_inc_sel:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  post_inc:6;
    };
}lgcy_vma_dmareg2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  line_off:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  vmrowoffset:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  vm_addr:7;
        RBus_UInt32  h:6;
        RBus_UInt32  w:6;
    };
}lgcy_vma_dmareg3a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  seq_vmem_addr:13;
        RBus_UInt32  res2:6;
        RBus_UInt32  seq_10byte_sel:1;
        RBus_UInt32  seq_xsfr_size:9;
    };
}lgcy_vma_sdmacntla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seq_line_addr:32;
    };
}lgcy_vma_sdmaadra_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_sel:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  h264_dummy_info:2;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  hevc_debug:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  reset_valid:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  dmem_path:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  ldst_vmem_count:16;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  post_write_disable:1;
    };
}lgcy_vma_dmactla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_sum:32;
    };
}lgcy_vma_crca_RBUS;

#else //apply LITTLE_ENDIAN

//======LGCY_VMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:14;
        RBus_UInt32  x:13;
        RBus_UInt32  res1:5;
    };
}lgcy_vma_dmareg1a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_inc:6;
        RBus_UInt32  res1:1;
        RBus_UInt32  post_inc_sel:1;
        RBus_UInt32  addr_idx:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  left_offset:3;
        RBus_UInt32  right_offset:3;
        RBus_UInt32  mode:1;
        RBus_UInt32  cbcr_vmoffset:7;
        RBus_UInt32  res3:2;
    };
}lgcy_vma_dmareg2a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  w:6;
        RBus_UInt32  h:6;
        RBus_UInt32  vm_addr:7;
        RBus_UInt32  res1:3;
        RBus_UInt32  vmrowoffset:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  line_off:1;
        RBus_UInt32  res3:3;
    };
}lgcy_vma_dmareg3a_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seq_xsfr_size:9;
        RBus_UInt32  seq_10byte_sel:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  seq_vmem_addr:13;
        RBus_UInt32  res2:3;
    };
}lgcy_vma_sdmacntla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seq_line_addr:32;
    };
}lgcy_vma_sdmaadra_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  post_write_disable:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  ldst_vmem_count:16;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  dmem_path:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reset_valid:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  hevc_debug:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  h264_dummy_info:2;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  crc_sel:1;
        RBus_UInt32  res2:1;
    };
}lgcy_vma_dmactla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_sum:32;
    };
}lgcy_vma_crca_RBUS;




#endif 


#endif 
