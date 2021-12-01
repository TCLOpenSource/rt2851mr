/**
* @file Merlin5_VE_VMBLK
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_VMA_REG_H_
#define _RBUS_VMA_REG_H_

#include "rbus_types.h"



//  VMA Register Address
#define  VMA_DMAREG1A_0                                                         0x1800EE00
#define  VMA_DMAREG1A_0_reg_addr                                                 "0xB800EE00"
#define  VMA_DMAREG1A_0_reg                                                      0xB800EE00
#define  VMA_DMAREG1A_0_inst_addr                                                "0x0000"
#define  set_VMA_DMAREG1A_0_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG1A_0_reg)=data)
#define  get_VMA_DMAREG1A_0_reg                                                  (*((volatile unsigned int*)VMA_DMAREG1A_0_reg))
#define  VMA_DMAREG1A_0_x_shift                                                  (14)
#define  VMA_DMAREG1A_0_y_shift                                                  (0)
#define  VMA_DMAREG1A_0_x_mask                                                   (0x07FFC000)
#define  VMA_DMAREG1A_0_y_mask                                                   (0x00003FFF)
#define  VMA_DMAREG1A_0_x(data)                                                  (0x07FFC000&((data)<<14))
#define  VMA_DMAREG1A_0_y(data)                                                  (0x00003FFF&(data))
#define  VMA_DMAREG1A_0_get_x(data)                                              ((0x07FFC000&(data))>>14)
#define  VMA_DMAREG1A_0_get_y(data)                                              (0x00003FFF&(data))

#define  VMA_DMAREG1A_1                                                         0x1800EE04
#define  VMA_DMAREG1A_1_reg_addr                                                 "0xB800EE04"
#define  VMA_DMAREG1A_1_reg                                                      0xB800EE04
#define  VMA_DMAREG1A_1_inst_addr                                                "0x0001"
#define  set_VMA_DMAREG1A_1_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG1A_1_reg)=data)
#define  get_VMA_DMAREG1A_1_reg                                                  (*((volatile unsigned int*)VMA_DMAREG1A_1_reg))
#define  VMA_DMAREG1A_1_x_shift                                                  (14)
#define  VMA_DMAREG1A_1_y_shift                                                  (0)
#define  VMA_DMAREG1A_1_x_mask                                                   (0x07FFC000)
#define  VMA_DMAREG1A_1_y_mask                                                   (0x00003FFF)
#define  VMA_DMAREG1A_1_x(data)                                                  (0x07FFC000&((data)<<14))
#define  VMA_DMAREG1A_1_y(data)                                                  (0x00003FFF&(data))
#define  VMA_DMAREG1A_1_get_x(data)                                              ((0x07FFC000&(data))>>14)
#define  VMA_DMAREG1A_1_get_y(data)                                              (0x00003FFF&(data))

#define  VMA_DMAREG1A_2                                                         0x1800EE08
#define  VMA_DMAREG1A_2_reg_addr                                                 "0xB800EE08"
#define  VMA_DMAREG1A_2_reg                                                      0xB800EE08
#define  VMA_DMAREG1A_2_inst_addr                                                "0x0002"
#define  set_VMA_DMAREG1A_2_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG1A_2_reg)=data)
#define  get_VMA_DMAREG1A_2_reg                                                  (*((volatile unsigned int*)VMA_DMAREG1A_2_reg))
#define  VMA_DMAREG1A_2_x_shift                                                  (14)
#define  VMA_DMAREG1A_2_y_shift                                                  (0)
#define  VMA_DMAREG1A_2_x_mask                                                   (0x07FFC000)
#define  VMA_DMAREG1A_2_y_mask                                                   (0x00003FFF)
#define  VMA_DMAREG1A_2_x(data)                                                  (0x07FFC000&((data)<<14))
#define  VMA_DMAREG1A_2_y(data)                                                  (0x00003FFF&(data))
#define  VMA_DMAREG1A_2_get_x(data)                                              ((0x07FFC000&(data))>>14)
#define  VMA_DMAREG1A_2_get_y(data)                                              (0x00003FFF&(data))

#define  VMA_DMAREG1A_3                                                         0x1800EE0C
#define  VMA_DMAREG1A_3_reg_addr                                                 "0xB800EE0C"
#define  VMA_DMAREG1A_3_reg                                                      0xB800EE0C
#define  VMA_DMAREG1A_3_inst_addr                                                "0x0003"
#define  set_VMA_DMAREG1A_3_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG1A_3_reg)=data)
#define  get_VMA_DMAREG1A_3_reg                                                  (*((volatile unsigned int*)VMA_DMAREG1A_3_reg))
#define  VMA_DMAREG1A_3_x_shift                                                  (14)
#define  VMA_DMAREG1A_3_y_shift                                                  (0)
#define  VMA_DMAREG1A_3_x_mask                                                   (0x07FFC000)
#define  VMA_DMAREG1A_3_y_mask                                                   (0x00003FFF)
#define  VMA_DMAREG1A_3_x(data)                                                  (0x07FFC000&((data)<<14))
#define  VMA_DMAREG1A_3_y(data)                                                  (0x00003FFF&(data))
#define  VMA_DMAREG1A_3_get_x(data)                                              ((0x07FFC000&(data))>>14)
#define  VMA_DMAREG1A_3_get_y(data)                                              (0x00003FFF&(data))

#define  VMA_DMAREG2A_0                                                         0x1800EE20
#define  VMA_DMAREG2A_0_reg_addr                                                 "0xB800EE20"
#define  VMA_DMAREG2A_0_reg                                                      0xB800EE20
#define  VMA_DMAREG2A_0_inst_addr                                                "0x0004"
#define  set_VMA_DMAREG2A_0_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG2A_0_reg)=data)
#define  get_VMA_DMAREG2A_0_reg                                                  (*((volatile unsigned int*)VMA_DMAREG2A_0_reg))
#define  VMA_DMAREG2A_0_cbcr_vmoffset_shift                                      (23)
#define  VMA_DMAREG2A_0_mode_shift                                               (22)
#define  VMA_DMAREG2A_0_right_offset_shift                                       (19)
#define  VMA_DMAREG2A_0_left_offset_shift                                        (16)
#define  VMA_DMAREG2A_0_addr_idx_shift                                           (8)
#define  VMA_DMAREG2A_0_post_inc_sel_shift                                       (7)
#define  VMA_DMAREG2A_0_post_inc_shift                                           (0)
#define  VMA_DMAREG2A_0_cbcr_vmoffset_mask                                       (0x3F800000)
#define  VMA_DMAREG2A_0_mode_mask                                                (0x00400000)
#define  VMA_DMAREG2A_0_right_offset_mask                                        (0x00380000)
#define  VMA_DMAREG2A_0_left_offset_mask                                         (0x00070000)
#define  VMA_DMAREG2A_0_addr_idx_mask                                            (0x00007F00)
#define  VMA_DMAREG2A_0_post_inc_sel_mask                                        (0x00000080)
#define  VMA_DMAREG2A_0_post_inc_mask                                            (0x0000003F)
#define  VMA_DMAREG2A_0_cbcr_vmoffset(data)                                      (0x3F800000&((data)<<23))
#define  VMA_DMAREG2A_0_mode(data)                                               (0x00400000&((data)<<22))
#define  VMA_DMAREG2A_0_right_offset(data)                                       (0x00380000&((data)<<19))
#define  VMA_DMAREG2A_0_left_offset(data)                                        (0x00070000&((data)<<16))
#define  VMA_DMAREG2A_0_addr_idx(data)                                           (0x00007F00&((data)<<8))
#define  VMA_DMAREG2A_0_post_inc_sel(data)                                       (0x00000080&((data)<<7))
#define  VMA_DMAREG2A_0_post_inc(data)                                           (0x0000003F&(data))
#define  VMA_DMAREG2A_0_get_cbcr_vmoffset(data)                                  ((0x3F800000&(data))>>23)
#define  VMA_DMAREG2A_0_get_mode(data)                                           ((0x00400000&(data))>>22)
#define  VMA_DMAREG2A_0_get_right_offset(data)                                   ((0x00380000&(data))>>19)
#define  VMA_DMAREG2A_0_get_left_offset(data)                                    ((0x00070000&(data))>>16)
#define  VMA_DMAREG2A_0_get_addr_idx(data)                                       ((0x00007F00&(data))>>8)
#define  VMA_DMAREG2A_0_get_post_inc_sel(data)                                   ((0x00000080&(data))>>7)
#define  VMA_DMAREG2A_0_get_post_inc(data)                                       (0x0000003F&(data))

#define  VMA_DMAREG2A_1                                                         0x1800EE24
#define  VMA_DMAREG2A_1_reg_addr                                                 "0xB800EE24"
#define  VMA_DMAREG2A_1_reg                                                      0xB800EE24
#define  VMA_DMAREG2A_1_inst_addr                                                "0x0005"
#define  set_VMA_DMAREG2A_1_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG2A_1_reg)=data)
#define  get_VMA_DMAREG2A_1_reg                                                  (*((volatile unsigned int*)VMA_DMAREG2A_1_reg))
#define  VMA_DMAREG2A_1_cbcr_vmoffset_shift                                      (23)
#define  VMA_DMAREG2A_1_mode_shift                                               (22)
#define  VMA_DMAREG2A_1_right_offset_shift                                       (19)
#define  VMA_DMAREG2A_1_left_offset_shift                                        (16)
#define  VMA_DMAREG2A_1_addr_idx_shift                                           (8)
#define  VMA_DMAREG2A_1_post_inc_sel_shift                                       (7)
#define  VMA_DMAREG2A_1_post_inc_shift                                           (0)
#define  VMA_DMAREG2A_1_cbcr_vmoffset_mask                                       (0x3F800000)
#define  VMA_DMAREG2A_1_mode_mask                                                (0x00400000)
#define  VMA_DMAREG2A_1_right_offset_mask                                        (0x00380000)
#define  VMA_DMAREG2A_1_left_offset_mask                                         (0x00070000)
#define  VMA_DMAREG2A_1_addr_idx_mask                                            (0x00007F00)
#define  VMA_DMAREG2A_1_post_inc_sel_mask                                        (0x00000080)
#define  VMA_DMAREG2A_1_post_inc_mask                                            (0x0000003F)
#define  VMA_DMAREG2A_1_cbcr_vmoffset(data)                                      (0x3F800000&((data)<<23))
#define  VMA_DMAREG2A_1_mode(data)                                               (0x00400000&((data)<<22))
#define  VMA_DMAREG2A_1_right_offset(data)                                       (0x00380000&((data)<<19))
#define  VMA_DMAREG2A_1_left_offset(data)                                        (0x00070000&((data)<<16))
#define  VMA_DMAREG2A_1_addr_idx(data)                                           (0x00007F00&((data)<<8))
#define  VMA_DMAREG2A_1_post_inc_sel(data)                                       (0x00000080&((data)<<7))
#define  VMA_DMAREG2A_1_post_inc(data)                                           (0x0000003F&(data))
#define  VMA_DMAREG2A_1_get_cbcr_vmoffset(data)                                  ((0x3F800000&(data))>>23)
#define  VMA_DMAREG2A_1_get_mode(data)                                           ((0x00400000&(data))>>22)
#define  VMA_DMAREG2A_1_get_right_offset(data)                                   ((0x00380000&(data))>>19)
#define  VMA_DMAREG2A_1_get_left_offset(data)                                    ((0x00070000&(data))>>16)
#define  VMA_DMAREG2A_1_get_addr_idx(data)                                       ((0x00007F00&(data))>>8)
#define  VMA_DMAREG2A_1_get_post_inc_sel(data)                                   ((0x00000080&(data))>>7)
#define  VMA_DMAREG2A_1_get_post_inc(data)                                       (0x0000003F&(data))

#define  VMA_DMAREG2A_2                                                         0x1800EE28
#define  VMA_DMAREG2A_2_reg_addr                                                 "0xB800EE28"
#define  VMA_DMAREG2A_2_reg                                                      0xB800EE28
#define  VMA_DMAREG2A_2_inst_addr                                                "0x0006"
#define  set_VMA_DMAREG2A_2_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG2A_2_reg)=data)
#define  get_VMA_DMAREG2A_2_reg                                                  (*((volatile unsigned int*)VMA_DMAREG2A_2_reg))
#define  VMA_DMAREG2A_2_cbcr_vmoffset_shift                                      (23)
#define  VMA_DMAREG2A_2_mode_shift                                               (22)
#define  VMA_DMAREG2A_2_right_offset_shift                                       (19)
#define  VMA_DMAREG2A_2_left_offset_shift                                        (16)
#define  VMA_DMAREG2A_2_addr_idx_shift                                           (8)
#define  VMA_DMAREG2A_2_post_inc_sel_shift                                       (7)
#define  VMA_DMAREG2A_2_post_inc_shift                                           (0)
#define  VMA_DMAREG2A_2_cbcr_vmoffset_mask                                       (0x3F800000)
#define  VMA_DMAREG2A_2_mode_mask                                                (0x00400000)
#define  VMA_DMAREG2A_2_right_offset_mask                                        (0x00380000)
#define  VMA_DMAREG2A_2_left_offset_mask                                         (0x00070000)
#define  VMA_DMAREG2A_2_addr_idx_mask                                            (0x00007F00)
#define  VMA_DMAREG2A_2_post_inc_sel_mask                                        (0x00000080)
#define  VMA_DMAREG2A_2_post_inc_mask                                            (0x0000003F)
#define  VMA_DMAREG2A_2_cbcr_vmoffset(data)                                      (0x3F800000&((data)<<23))
#define  VMA_DMAREG2A_2_mode(data)                                               (0x00400000&((data)<<22))
#define  VMA_DMAREG2A_2_right_offset(data)                                       (0x00380000&((data)<<19))
#define  VMA_DMAREG2A_2_left_offset(data)                                        (0x00070000&((data)<<16))
#define  VMA_DMAREG2A_2_addr_idx(data)                                           (0x00007F00&((data)<<8))
#define  VMA_DMAREG2A_2_post_inc_sel(data)                                       (0x00000080&((data)<<7))
#define  VMA_DMAREG2A_2_post_inc(data)                                           (0x0000003F&(data))
#define  VMA_DMAREG2A_2_get_cbcr_vmoffset(data)                                  ((0x3F800000&(data))>>23)
#define  VMA_DMAREG2A_2_get_mode(data)                                           ((0x00400000&(data))>>22)
#define  VMA_DMAREG2A_2_get_right_offset(data)                                   ((0x00380000&(data))>>19)
#define  VMA_DMAREG2A_2_get_left_offset(data)                                    ((0x00070000&(data))>>16)
#define  VMA_DMAREG2A_2_get_addr_idx(data)                                       ((0x00007F00&(data))>>8)
#define  VMA_DMAREG2A_2_get_post_inc_sel(data)                                   ((0x00000080&(data))>>7)
#define  VMA_DMAREG2A_2_get_post_inc(data)                                       (0x0000003F&(data))

#define  VMA_DMAREG2A_3                                                         0x1800EE2C
#define  VMA_DMAREG2A_3_reg_addr                                                 "0xB800EE2C"
#define  VMA_DMAREG2A_3_reg                                                      0xB800EE2C
#define  VMA_DMAREG2A_3_inst_addr                                                "0x0007"
#define  set_VMA_DMAREG2A_3_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG2A_3_reg)=data)
#define  get_VMA_DMAREG2A_3_reg                                                  (*((volatile unsigned int*)VMA_DMAREG2A_3_reg))
#define  VMA_DMAREG2A_3_cbcr_vmoffset_shift                                      (23)
#define  VMA_DMAREG2A_3_mode_shift                                               (22)
#define  VMA_DMAREG2A_3_right_offset_shift                                       (19)
#define  VMA_DMAREG2A_3_left_offset_shift                                        (16)
#define  VMA_DMAREG2A_3_addr_idx_shift                                           (8)
#define  VMA_DMAREG2A_3_post_inc_sel_shift                                       (7)
#define  VMA_DMAREG2A_3_post_inc_shift                                           (0)
#define  VMA_DMAREG2A_3_cbcr_vmoffset_mask                                       (0x3F800000)
#define  VMA_DMAREG2A_3_mode_mask                                                (0x00400000)
#define  VMA_DMAREG2A_3_right_offset_mask                                        (0x00380000)
#define  VMA_DMAREG2A_3_left_offset_mask                                         (0x00070000)
#define  VMA_DMAREG2A_3_addr_idx_mask                                            (0x00007F00)
#define  VMA_DMAREG2A_3_post_inc_sel_mask                                        (0x00000080)
#define  VMA_DMAREG2A_3_post_inc_mask                                            (0x0000003F)
#define  VMA_DMAREG2A_3_cbcr_vmoffset(data)                                      (0x3F800000&((data)<<23))
#define  VMA_DMAREG2A_3_mode(data)                                               (0x00400000&((data)<<22))
#define  VMA_DMAREG2A_3_right_offset(data)                                       (0x00380000&((data)<<19))
#define  VMA_DMAREG2A_3_left_offset(data)                                        (0x00070000&((data)<<16))
#define  VMA_DMAREG2A_3_addr_idx(data)                                           (0x00007F00&((data)<<8))
#define  VMA_DMAREG2A_3_post_inc_sel(data)                                       (0x00000080&((data)<<7))
#define  VMA_DMAREG2A_3_post_inc(data)                                           (0x0000003F&(data))
#define  VMA_DMAREG2A_3_get_cbcr_vmoffset(data)                                  ((0x3F800000&(data))>>23)
#define  VMA_DMAREG2A_3_get_mode(data)                                           ((0x00400000&(data))>>22)
#define  VMA_DMAREG2A_3_get_right_offset(data)                                   ((0x00380000&(data))>>19)
#define  VMA_DMAREG2A_3_get_left_offset(data)                                    ((0x00070000&(data))>>16)
#define  VMA_DMAREG2A_3_get_addr_idx(data)                                       ((0x00007F00&(data))>>8)
#define  VMA_DMAREG2A_3_get_post_inc_sel(data)                                   ((0x00000080&(data))>>7)
#define  VMA_DMAREG2A_3_get_post_inc(data)                                       (0x0000003F&(data))

#define  VMA_DMAREG3A_0                                                         0x1800EE40
#define  VMA_DMAREG3A_0_reg_addr                                                 "0xB800EE40"
#define  VMA_DMAREG3A_0_reg                                                      0xB800EE40
#define  VMA_DMAREG3A_0_inst_addr                                                "0x0008"
#define  set_VMA_DMAREG3A_0_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG3A_0_reg)=data)
#define  get_VMA_DMAREG3A_0_reg                                                  (*((volatile unsigned int*)VMA_DMAREG3A_0_reg))
#define  VMA_DMAREG3A_0_line_off_shift                                           (28)
#define  VMA_DMAREG3A_0_vmrowoffset_shift                                        (22)
#define  VMA_DMAREG3A_0_vm_addr_shift                                            (12)
#define  VMA_DMAREG3A_0_h_shift                                                  (6)
#define  VMA_DMAREG3A_0_w_shift                                                  (0)
#define  VMA_DMAREG3A_0_line_off_mask                                            (0x10000000)
#define  VMA_DMAREG3A_0_vmrowoffset_mask                                         (0x07C00000)
#define  VMA_DMAREG3A_0_vm_addr_mask                                             (0x0007F000)
#define  VMA_DMAREG3A_0_h_mask                                                   (0x00000FC0)
#define  VMA_DMAREG3A_0_w_mask                                                   (0x0000003F)
#define  VMA_DMAREG3A_0_line_off(data)                                           (0x10000000&((data)<<28))
#define  VMA_DMAREG3A_0_vmrowoffset(data)                                        (0x07C00000&((data)<<22))
#define  VMA_DMAREG3A_0_vm_addr(data)                                            (0x0007F000&((data)<<12))
#define  VMA_DMAREG3A_0_h(data)                                                  (0x00000FC0&((data)<<6))
#define  VMA_DMAREG3A_0_w(data)                                                  (0x0000003F&(data))
#define  VMA_DMAREG3A_0_get_line_off(data)                                       ((0x10000000&(data))>>28)
#define  VMA_DMAREG3A_0_get_vmrowoffset(data)                                    ((0x07C00000&(data))>>22)
#define  VMA_DMAREG3A_0_get_vm_addr(data)                                        ((0x0007F000&(data))>>12)
#define  VMA_DMAREG3A_0_get_h(data)                                              ((0x00000FC0&(data))>>6)
#define  VMA_DMAREG3A_0_get_w(data)                                              (0x0000003F&(data))

#define  VMA_DMAREG3A_1                                                         0x1800EE44
#define  VMA_DMAREG3A_1_reg_addr                                                 "0xB800EE44"
#define  VMA_DMAREG3A_1_reg                                                      0xB800EE44
#define  VMA_DMAREG3A_1_inst_addr                                                "0x0009"
#define  set_VMA_DMAREG3A_1_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG3A_1_reg)=data)
#define  get_VMA_DMAREG3A_1_reg                                                  (*((volatile unsigned int*)VMA_DMAREG3A_1_reg))
#define  VMA_DMAREG3A_1_line_off_shift                                           (28)
#define  VMA_DMAREG3A_1_vmrowoffset_shift                                        (22)
#define  VMA_DMAREG3A_1_vm_addr_shift                                            (12)
#define  VMA_DMAREG3A_1_h_shift                                                  (6)
#define  VMA_DMAREG3A_1_w_shift                                                  (0)
#define  VMA_DMAREG3A_1_line_off_mask                                            (0x10000000)
#define  VMA_DMAREG3A_1_vmrowoffset_mask                                         (0x07C00000)
#define  VMA_DMAREG3A_1_vm_addr_mask                                             (0x0007F000)
#define  VMA_DMAREG3A_1_h_mask                                                   (0x00000FC0)
#define  VMA_DMAREG3A_1_w_mask                                                   (0x0000003F)
#define  VMA_DMAREG3A_1_line_off(data)                                           (0x10000000&((data)<<28))
#define  VMA_DMAREG3A_1_vmrowoffset(data)                                        (0x07C00000&((data)<<22))
#define  VMA_DMAREG3A_1_vm_addr(data)                                            (0x0007F000&((data)<<12))
#define  VMA_DMAREG3A_1_h(data)                                                  (0x00000FC0&((data)<<6))
#define  VMA_DMAREG3A_1_w(data)                                                  (0x0000003F&(data))
#define  VMA_DMAREG3A_1_get_line_off(data)                                       ((0x10000000&(data))>>28)
#define  VMA_DMAREG3A_1_get_vmrowoffset(data)                                    ((0x07C00000&(data))>>22)
#define  VMA_DMAREG3A_1_get_vm_addr(data)                                        ((0x0007F000&(data))>>12)
#define  VMA_DMAREG3A_1_get_h(data)                                              ((0x00000FC0&(data))>>6)
#define  VMA_DMAREG3A_1_get_w(data)                                              (0x0000003F&(data))

#define  VMA_DMAREG3A_2                                                         0x1800EE48
#define  VMA_DMAREG3A_2_reg_addr                                                 "0xB800EE48"
#define  VMA_DMAREG3A_2_reg                                                      0xB800EE48
#define  VMA_DMAREG3A_2_inst_addr                                                "0x000A"
#define  set_VMA_DMAREG3A_2_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG3A_2_reg)=data)
#define  get_VMA_DMAREG3A_2_reg                                                  (*((volatile unsigned int*)VMA_DMAREG3A_2_reg))
#define  VMA_DMAREG3A_2_line_off_shift                                           (28)
#define  VMA_DMAREG3A_2_vmrowoffset_shift                                        (22)
#define  VMA_DMAREG3A_2_vm_addr_shift                                            (12)
#define  VMA_DMAREG3A_2_h_shift                                                  (6)
#define  VMA_DMAREG3A_2_w_shift                                                  (0)
#define  VMA_DMAREG3A_2_line_off_mask                                            (0x10000000)
#define  VMA_DMAREG3A_2_vmrowoffset_mask                                         (0x07C00000)
#define  VMA_DMAREG3A_2_vm_addr_mask                                             (0x0007F000)
#define  VMA_DMAREG3A_2_h_mask                                                   (0x00000FC0)
#define  VMA_DMAREG3A_2_w_mask                                                   (0x0000003F)
#define  VMA_DMAREG3A_2_line_off(data)                                           (0x10000000&((data)<<28))
#define  VMA_DMAREG3A_2_vmrowoffset(data)                                        (0x07C00000&((data)<<22))
#define  VMA_DMAREG3A_2_vm_addr(data)                                            (0x0007F000&((data)<<12))
#define  VMA_DMAREG3A_2_h(data)                                                  (0x00000FC0&((data)<<6))
#define  VMA_DMAREG3A_2_w(data)                                                  (0x0000003F&(data))
#define  VMA_DMAREG3A_2_get_line_off(data)                                       ((0x10000000&(data))>>28)
#define  VMA_DMAREG3A_2_get_vmrowoffset(data)                                    ((0x07C00000&(data))>>22)
#define  VMA_DMAREG3A_2_get_vm_addr(data)                                        ((0x0007F000&(data))>>12)
#define  VMA_DMAREG3A_2_get_h(data)                                              ((0x00000FC0&(data))>>6)
#define  VMA_DMAREG3A_2_get_w(data)                                              (0x0000003F&(data))

#define  VMA_DMAREG3A_3                                                         0x1800EE4C
#define  VMA_DMAREG3A_3_reg_addr                                                 "0xB800EE4C"
#define  VMA_DMAREG3A_3_reg                                                      0xB800EE4C
#define  VMA_DMAREG3A_3_inst_addr                                                "0x000B"
#define  set_VMA_DMAREG3A_3_reg(data)                                            (*((volatile unsigned int*)VMA_DMAREG3A_3_reg)=data)
#define  get_VMA_DMAREG3A_3_reg                                                  (*((volatile unsigned int*)VMA_DMAREG3A_3_reg))
#define  VMA_DMAREG3A_3_line_off_shift                                           (28)
#define  VMA_DMAREG3A_3_vmrowoffset_shift                                        (22)
#define  VMA_DMAREG3A_3_vm_addr_shift                                            (12)
#define  VMA_DMAREG3A_3_h_shift                                                  (6)
#define  VMA_DMAREG3A_3_w_shift                                                  (0)
#define  VMA_DMAREG3A_3_line_off_mask                                            (0x10000000)
#define  VMA_DMAREG3A_3_vmrowoffset_mask                                         (0x07C00000)
#define  VMA_DMAREG3A_3_vm_addr_mask                                             (0x0007F000)
#define  VMA_DMAREG3A_3_h_mask                                                   (0x00000FC0)
#define  VMA_DMAREG3A_3_w_mask                                                   (0x0000003F)
#define  VMA_DMAREG3A_3_line_off(data)                                           (0x10000000&((data)<<28))
#define  VMA_DMAREG3A_3_vmrowoffset(data)                                        (0x07C00000&((data)<<22))
#define  VMA_DMAREG3A_3_vm_addr(data)                                            (0x0007F000&((data)<<12))
#define  VMA_DMAREG3A_3_h(data)                                                  (0x00000FC0&((data)<<6))
#define  VMA_DMAREG3A_3_w(data)                                                  (0x0000003F&(data))
#define  VMA_DMAREG3A_3_get_line_off(data)                                       ((0x10000000&(data))>>28)
#define  VMA_DMAREG3A_3_get_vmrowoffset(data)                                    ((0x07C00000&(data))>>22)
#define  VMA_DMAREG3A_3_get_vm_addr(data)                                        ((0x0007F000&(data))>>12)
#define  VMA_DMAREG3A_3_get_h(data)                                              ((0x00000FC0&(data))>>6)
#define  VMA_DMAREG3A_3_get_w(data)                                              (0x0000003F&(data))

#define  VMA_SDMACNTLA                                                          0x1800EE60
#define  VMA_SDMACNTLA_reg_addr                                                  "0xB800EE60"
#define  VMA_SDMACNTLA_reg                                                       0xB800EE60
#define  VMA_SDMACNTLA_inst_addr                                                 "0x000C"
#define  set_VMA_SDMACNTLA_reg(data)                                             (*((volatile unsigned int*)VMA_SDMACNTLA_reg)=data)
#define  get_VMA_SDMACNTLA_reg                                                   (*((volatile unsigned int*)VMA_SDMACNTLA_reg))
#define  VMA_SDMACNTLA_seq_vmem_addr_shift                                       (16)
#define  VMA_SDMACNTLA_seq_10byte_sel_shift                                      (9)
#define  VMA_SDMACNTLA_seq_xsfr_size_shift                                       (0)
#define  VMA_SDMACNTLA_seq_vmem_addr_mask                                        (0x1FFF0000)
#define  VMA_SDMACNTLA_seq_10byte_sel_mask                                       (0x00000200)
#define  VMA_SDMACNTLA_seq_xsfr_size_mask                                        (0x000001FF)
#define  VMA_SDMACNTLA_seq_vmem_addr(data)                                       (0x1FFF0000&((data)<<16))
#define  VMA_SDMACNTLA_seq_10byte_sel(data)                                      (0x00000200&((data)<<9))
#define  VMA_SDMACNTLA_seq_xsfr_size(data)                                       (0x000001FF&(data))
#define  VMA_SDMACNTLA_get_seq_vmem_addr(data)                                   ((0x1FFF0000&(data))>>16)
#define  VMA_SDMACNTLA_get_seq_10byte_sel(data)                                  ((0x00000200&(data))>>9)
#define  VMA_SDMACNTLA_get_seq_xsfr_size(data)                                   (0x000001FF&(data))

#define  VMA_SDMAADRA                                                           0x1800EE64
#define  VMA_SDMAADRA_reg_addr                                                   "0xB800EE64"
#define  VMA_SDMAADRA_reg                                                        0xB800EE64
#define  VMA_SDMAADRA_inst_addr                                                  "0x000D"
#define  set_VMA_SDMAADRA_reg(data)                                              (*((volatile unsigned int*)VMA_SDMAADRA_reg)=data)
#define  get_VMA_SDMAADRA_reg                                                    (*((volatile unsigned int*)VMA_SDMAADRA_reg))
#define  VMA_SDMAADRA_seq_line_addr_shift                                        (0)
#define  VMA_SDMAADRA_seq_line_addr_mask                                         (0xFFFFFFFF)
#define  VMA_SDMAADRA_seq_line_addr(data)                                        (0xFFFFFFFF&(data))
#define  VMA_SDMAADRA_get_seq_line_addr(data)                                    (0xFFFFFFFF&(data))

#define  VMA_DMACTLA                                                            0x1800EE68
#define  VMA_DMACTLA_reg_addr                                                    "0xB800EE68"
#define  VMA_DMACTLA_reg                                                         0xB800EE68
#define  VMA_DMACTLA_inst_addr                                                   "0x000E"
#define  set_VMA_DMACTLA_reg(data)                                               (*((volatile unsigned int*)VMA_DMACTLA_reg)=data)
#define  get_VMA_DMACTLA_reg                                                     (*((volatile unsigned int*)VMA_DMACTLA_reg))
#define  VMA_DMACTLA_crc_sel_shift                                               (30)
#define  VMA_DMACTLA_write_enable7_shift                                         (29)
#define  VMA_DMACTLA_h264_dummy_info_shift                                       (27)
#define  VMA_DMACTLA_write_enable6_shift                                         (26)
#define  VMA_DMACTLA_hevc_debug_shift                                            (25)
#define  VMA_DMACTLA_write_enable5_shift                                         (24)
#define  VMA_DMACTLA_reset_valid_shift                                           (23)
#define  VMA_DMACTLA_write_enable3_shift                                         (20)
#define  VMA_DMACTLA_dmem_path_shift                                             (19)
#define  VMA_DMACTLA_write_enable2_shift                                         (18)
#define  VMA_DMACTLA_ldst_vmem_count_shift                                       (2)
#define  VMA_DMACTLA_write_enable1_shift                                         (1)
#define  VMA_DMACTLA_post_write_disable_shift                                    (0)
#define  VMA_DMACTLA_crc_sel_mask                                                (0x40000000)
#define  VMA_DMACTLA_write_enable7_mask                                          (0x20000000)
#define  VMA_DMACTLA_h264_dummy_info_mask                                        (0x18000000)
#define  VMA_DMACTLA_write_enable6_mask                                          (0x04000000)
#define  VMA_DMACTLA_hevc_debug_mask                                             (0x02000000)
#define  VMA_DMACTLA_write_enable5_mask                                          (0x01000000)
#define  VMA_DMACTLA_reset_valid_mask                                            (0x00800000)
#define  VMA_DMACTLA_write_enable3_mask                                          (0x00100000)
#define  VMA_DMACTLA_dmem_path_mask                                              (0x00080000)
#define  VMA_DMACTLA_write_enable2_mask                                          (0x00040000)
#define  VMA_DMACTLA_ldst_vmem_count_mask                                        (0x0003FFFC)
#define  VMA_DMACTLA_write_enable1_mask                                          (0x00000002)
#define  VMA_DMACTLA_post_write_disable_mask                                     (0x00000001)
#define  VMA_DMACTLA_crc_sel(data)                                               (0x40000000&((data)<<30))
#define  VMA_DMACTLA_write_enable7(data)                                         (0x20000000&((data)<<29))
#define  VMA_DMACTLA_h264_dummy_info(data)                                       (0x18000000&((data)<<27))
#define  VMA_DMACTLA_write_enable6(data)                                         (0x04000000&((data)<<26))
#define  VMA_DMACTLA_hevc_debug(data)                                            (0x02000000&((data)<<25))
#define  VMA_DMACTLA_write_enable5(data)                                         (0x01000000&((data)<<24))
#define  VMA_DMACTLA_reset_valid(data)                                           (0x00800000&((data)<<23))
#define  VMA_DMACTLA_write_enable3(data)                                         (0x00100000&((data)<<20))
#define  VMA_DMACTLA_dmem_path(data)                                             (0x00080000&((data)<<19))
#define  VMA_DMACTLA_write_enable2(data)                                         (0x00040000&((data)<<18))
#define  VMA_DMACTLA_ldst_vmem_count(data)                                       (0x0003FFFC&((data)<<2))
#define  VMA_DMACTLA_write_enable1(data)                                         (0x00000002&((data)<<1))
#define  VMA_DMACTLA_post_write_disable(data)                                    (0x00000001&(data))
#define  VMA_DMACTLA_get_crc_sel(data)                                           ((0x40000000&(data))>>30)
#define  VMA_DMACTLA_get_write_enable7(data)                                     ((0x20000000&(data))>>29)
#define  VMA_DMACTLA_get_h264_dummy_info(data)                                   ((0x18000000&(data))>>27)
#define  VMA_DMACTLA_get_write_enable6(data)                                     ((0x04000000&(data))>>26)
#define  VMA_DMACTLA_get_hevc_debug(data)                                        ((0x02000000&(data))>>25)
#define  VMA_DMACTLA_get_write_enable5(data)                                     ((0x01000000&(data))>>24)
#define  VMA_DMACTLA_get_reset_valid(data)                                       ((0x00800000&(data))>>23)
#define  VMA_DMACTLA_get_write_enable3(data)                                     ((0x00100000&(data))>>20)
#define  VMA_DMACTLA_get_dmem_path(data)                                         ((0x00080000&(data))>>19)
#define  VMA_DMACTLA_get_write_enable2(data)                                     ((0x00040000&(data))>>18)
#define  VMA_DMACTLA_get_ldst_vmem_count(data)                                   ((0x0003FFFC&(data))>>2)
#define  VMA_DMACTLA_get_write_enable1(data)                                     ((0x00000002&(data))>>1)
#define  VMA_DMACTLA_get_post_write_disable(data)                                (0x00000001&(data))

#define  VMA_BNKCTLA0                                                           0x1800EE6C
#define  VMA_BNKCTLA0_reg_addr                                                   "0xB800EE6C"
#define  VMA_BNKCTLA0_reg                                                        0xB800EE6C
#define  VMA_BNKCTLA0_inst_addr                                                  "0x000F"
#define  set_VMA_BNKCTLA0_reg(data)                                              (*((volatile unsigned int*)VMA_BNKCTLA0_reg)=data)
#define  get_VMA_BNKCTLA0_reg                                                    (*((volatile unsigned int*)VMA_BNKCTLA0_reg))
#define  VMA_BNKCTLA0_write_enable6_shift                                        (29)
#define  VMA_BNKCTLA0_bnk5_mstr_shift                                            (25)
#define  VMA_BNKCTLA0_write_enable5_shift                                        (24)
#define  VMA_BNKCTLA0_bnk4_mstr_shift                                            (20)
#define  VMA_BNKCTLA0_write_enable4_shift                                        (19)
#define  VMA_BNKCTLA0_bnk3_mstr_shift                                            (15)
#define  VMA_BNKCTLA0_write_enable3_shift                                        (14)
#define  VMA_BNKCTLA0_bnk2_mstr_shift                                            (10)
#define  VMA_BNKCTLA0_write_enable2_shift                                        (9)
#define  VMA_BNKCTLA0_bnk1_mstr_shift                                            (5)
#define  VMA_BNKCTLA0_write_enable1_shift                                        (4)
#define  VMA_BNKCTLA0_bnk0_mstr_shift                                            (0)
#define  VMA_BNKCTLA0_write_enable6_mask                                         (0x20000000)
#define  VMA_BNKCTLA0_bnk5_mstr_mask                                             (0x1E000000)
#define  VMA_BNKCTLA0_write_enable5_mask                                         (0x01000000)
#define  VMA_BNKCTLA0_bnk4_mstr_mask                                             (0x00F00000)
#define  VMA_BNKCTLA0_write_enable4_mask                                         (0x00080000)
#define  VMA_BNKCTLA0_bnk3_mstr_mask                                             (0x00078000)
#define  VMA_BNKCTLA0_write_enable3_mask                                         (0x00004000)
#define  VMA_BNKCTLA0_bnk2_mstr_mask                                             (0x00003C00)
#define  VMA_BNKCTLA0_write_enable2_mask                                         (0x00000200)
#define  VMA_BNKCTLA0_bnk1_mstr_mask                                             (0x000001E0)
#define  VMA_BNKCTLA0_write_enable1_mask                                         (0x00000010)
#define  VMA_BNKCTLA0_bnk0_mstr_mask                                             (0x0000000F)
#define  VMA_BNKCTLA0_write_enable6(data)                                        (0x20000000&((data)<<29))
#define  VMA_BNKCTLA0_bnk5_mstr(data)                                            (0x1E000000&((data)<<25))
#define  VMA_BNKCTLA0_write_enable5(data)                                        (0x01000000&((data)<<24))
#define  VMA_BNKCTLA0_bnk4_mstr(data)                                            (0x00F00000&((data)<<20))
#define  VMA_BNKCTLA0_write_enable4(data)                                        (0x00080000&((data)<<19))
#define  VMA_BNKCTLA0_bnk3_mstr(data)                                            (0x00078000&((data)<<15))
#define  VMA_BNKCTLA0_write_enable3(data)                                        (0x00004000&((data)<<14))
#define  VMA_BNKCTLA0_bnk2_mstr(data)                                            (0x00003C00&((data)<<10))
#define  VMA_BNKCTLA0_write_enable2(data)                                        (0x00000200&((data)<<9))
#define  VMA_BNKCTLA0_bnk1_mstr(data)                                            (0x000001E0&((data)<<5))
#define  VMA_BNKCTLA0_write_enable1(data)                                        (0x00000010&((data)<<4))
#define  VMA_BNKCTLA0_bnk0_mstr(data)                                            (0x0000000F&(data))
#define  VMA_BNKCTLA0_get_write_enable6(data)                                    ((0x20000000&(data))>>29)
#define  VMA_BNKCTLA0_get_bnk5_mstr(data)                                        ((0x1E000000&(data))>>25)
#define  VMA_BNKCTLA0_get_write_enable5(data)                                    ((0x01000000&(data))>>24)
#define  VMA_BNKCTLA0_get_bnk4_mstr(data)                                        ((0x00F00000&(data))>>20)
#define  VMA_BNKCTLA0_get_write_enable4(data)                                    ((0x00080000&(data))>>19)
#define  VMA_BNKCTLA0_get_bnk3_mstr(data)                                        ((0x00078000&(data))>>15)
#define  VMA_BNKCTLA0_get_write_enable3(data)                                    ((0x00004000&(data))>>14)
#define  VMA_BNKCTLA0_get_bnk2_mstr(data)                                        ((0x00003C00&(data))>>10)
#define  VMA_BNKCTLA0_get_write_enable2(data)                                    ((0x00000200&(data))>>9)
#define  VMA_BNKCTLA0_get_bnk1_mstr(data)                                        ((0x000001E0&(data))>>5)
#define  VMA_BNKCTLA0_get_write_enable1(data)                                    ((0x00000010&(data))>>4)
#define  VMA_BNKCTLA0_get_bnk0_mstr(data)                                        (0x0000000F&(data))

#define  VMA_BNKCTLA1                                                           0x1800EE70
#define  VMA_BNKCTLA1_reg_addr                                                   "0xB800EE70"
#define  VMA_BNKCTLA1_reg                                                        0xB800EE70
#define  VMA_BNKCTLA1_inst_addr                                                  "0x0010"
#define  set_VMA_BNKCTLA1_reg(data)                                              (*((volatile unsigned int*)VMA_BNKCTLA1_reg)=data)
#define  get_VMA_BNKCTLA1_reg                                                    (*((volatile unsigned int*)VMA_BNKCTLA1_reg))
#define  VMA_BNKCTLA1_write_enable5_shift                                        (29)
#define  VMA_BNKCTLA1_vm_vfiller0_shift                                          (25)
#define  VMA_BNKCTLA1_write_enable4_shift                                        (24)
#define  VMA_BNKCTLA1_vm_bnk_shift                                               (20)
#define  VMA_BNKCTLA1_write_enable3_shift                                        (19)
#define  VMA_BNKCTLA1_cmprs_bnk_shift                                            (15)
#define  VMA_BNKCTLA1_write_enable2_shift                                        (14)
#define  VMA_BNKCTLA1_sao_bnk_shift                                              (10)
#define  VMA_BNKCTLA1_write_enable1_shift                                        (9)
#define  VMA_BNKCTLA1_deblk_bnk_shift                                            (5)
#define  VMA_BNKCTLA1_write_enable0_shift                                        (4)
#define  VMA_BNKCTLA1_pred_bnk_shift                                             (0)
#define  VMA_BNKCTLA1_write_enable5_mask                                         (0x20000000)
#define  VMA_BNKCTLA1_vm_vfiller0_mask                                           (0x1E000000)
#define  VMA_BNKCTLA1_write_enable4_mask                                         (0x01000000)
#define  VMA_BNKCTLA1_vm_bnk_mask                                                (0x00F00000)
#define  VMA_BNKCTLA1_write_enable3_mask                                         (0x00080000)
#define  VMA_BNKCTLA1_cmprs_bnk_mask                                             (0x00078000)
#define  VMA_BNKCTLA1_write_enable2_mask                                         (0x00004000)
#define  VMA_BNKCTLA1_sao_bnk_mask                                               (0x00003C00)
#define  VMA_BNKCTLA1_write_enable1_mask                                         (0x00000200)
#define  VMA_BNKCTLA1_deblk_bnk_mask                                             (0x000001E0)
#define  VMA_BNKCTLA1_write_enable0_mask                                         (0x00000010)
#define  VMA_BNKCTLA1_pred_bnk_mask                                              (0x0000000F)
#define  VMA_BNKCTLA1_write_enable5(data)                                        (0x20000000&((data)<<29))
#define  VMA_BNKCTLA1_vm_vfiller0(data)                                          (0x1E000000&((data)<<25))
#define  VMA_BNKCTLA1_write_enable4(data)                                        (0x01000000&((data)<<24))
#define  VMA_BNKCTLA1_vm_bnk(data)                                               (0x00F00000&((data)<<20))
#define  VMA_BNKCTLA1_write_enable3(data)                                        (0x00080000&((data)<<19))
#define  VMA_BNKCTLA1_cmprs_bnk(data)                                            (0x00078000&((data)<<15))
#define  VMA_BNKCTLA1_write_enable2(data)                                        (0x00004000&((data)<<14))
#define  VMA_BNKCTLA1_sao_bnk(data)                                              (0x00003C00&((data)<<10))
#define  VMA_BNKCTLA1_write_enable1(data)                                        (0x00000200&((data)<<9))
#define  VMA_BNKCTLA1_deblk_bnk(data)                                            (0x000001E0&((data)<<5))
#define  VMA_BNKCTLA1_write_enable0(data)                                        (0x00000010&((data)<<4))
#define  VMA_BNKCTLA1_pred_bnk(data)                                             (0x0000000F&(data))
#define  VMA_BNKCTLA1_get_write_enable5(data)                                    ((0x20000000&(data))>>29)
#define  VMA_BNKCTLA1_get_vm_vfiller0(data)                                      ((0x1E000000&(data))>>25)
#define  VMA_BNKCTLA1_get_write_enable4(data)                                    ((0x01000000&(data))>>24)
#define  VMA_BNKCTLA1_get_vm_bnk(data)                                           ((0x00F00000&(data))>>20)
#define  VMA_BNKCTLA1_get_write_enable3(data)                                    ((0x00080000&(data))>>19)
#define  VMA_BNKCTLA1_get_cmprs_bnk(data)                                        ((0x00078000&(data))>>15)
#define  VMA_BNKCTLA1_get_write_enable2(data)                                    ((0x00004000&(data))>>14)
#define  VMA_BNKCTLA1_get_sao_bnk(data)                                          ((0x00003C00&(data))>>10)
#define  VMA_BNKCTLA1_get_write_enable1(data)                                    ((0x00000200&(data))>>9)
#define  VMA_BNKCTLA1_get_deblk_bnk(data)                                        ((0x000001E0&(data))>>5)
#define  VMA_BNKCTLA1_get_write_enable0(data)                                    ((0x00000010&(data))>>4)
#define  VMA_BNKCTLA1_get_pred_bnk(data)                                         (0x0000000F&(data))

#define  VMA_BNKCTLA2                                                           0x1800EE74
#define  VMA_BNKCTLA2_reg_addr                                                   "0xB800EE74"
#define  VMA_BNKCTLA2_reg                                                        0xB800EE74
#define  VMA_BNKCTLA2_inst_addr                                                  "0x0011"
#define  set_VMA_BNKCTLA2_reg(data)                                              (*((volatile unsigned int*)VMA_BNKCTLA2_reg)=data)
#define  get_VMA_BNKCTLA2_reg                                                    (*((volatile unsigned int*)VMA_BNKCTLA2_reg))
#define  VMA_BNKCTLA2_write_enable5_shift                                        (29)
#define  VMA_BNKCTLA2_bnk9_mstr_shift                                            (25)
#define  VMA_BNKCTLA2_write_enable4_shift                                        (24)
#define  VMA_BNKCTLA2_bnk8_mstr_shift                                            (20)
#define  VMA_BNKCTLA2_write_enable3_shift                                        (19)
#define  VMA_BNKCTLA2_vm_vfiller2_shift                                          (15)
#define  VMA_BNKCTLA2_write_enable2_shift                                        (14)
#define  VMA_BNKCTLA2_vm_vfiller1_shift                                          (10)
#define  VMA_BNKCTLA2_write_enable1_shift                                        (9)
#define  VMA_BNKCTLA2_lr_bnk_shift                                               (5)
#define  VMA_BNKCTLA2_write_enable0_shift                                        (4)
#define  VMA_BNKCTLA2_alf_bnk_shift                                              (0)
#define  VMA_BNKCTLA2_write_enable5_mask                                         (0x20000000)
#define  VMA_BNKCTLA2_bnk9_mstr_mask                                             (0x1E000000)
#define  VMA_BNKCTLA2_write_enable4_mask                                         (0x01000000)
#define  VMA_BNKCTLA2_bnk8_mstr_mask                                             (0x00F00000)
#define  VMA_BNKCTLA2_write_enable3_mask                                         (0x00080000)
#define  VMA_BNKCTLA2_vm_vfiller2_mask                                           (0x00078000)
#define  VMA_BNKCTLA2_write_enable2_mask                                         (0x00004000)
#define  VMA_BNKCTLA2_vm_vfiller1_mask                                           (0x00003C00)
#define  VMA_BNKCTLA2_write_enable1_mask                                         (0x00000200)
#define  VMA_BNKCTLA2_lr_bnk_mask                                                (0x000001E0)
#define  VMA_BNKCTLA2_write_enable0_mask                                         (0x00000010)
#define  VMA_BNKCTLA2_alf_bnk_mask                                               (0x0000000F)
#define  VMA_BNKCTLA2_write_enable5(data)                                        (0x20000000&((data)<<29))
#define  VMA_BNKCTLA2_bnk9_mstr(data)                                            (0x1E000000&((data)<<25))
#define  VMA_BNKCTLA2_write_enable4(data)                                        (0x01000000&((data)<<24))
#define  VMA_BNKCTLA2_bnk8_mstr(data)                                            (0x00F00000&((data)<<20))
#define  VMA_BNKCTLA2_write_enable3(data)                                        (0x00080000&((data)<<19))
#define  VMA_BNKCTLA2_vm_vfiller2(data)                                          (0x00078000&((data)<<15))
#define  VMA_BNKCTLA2_write_enable2(data)                                        (0x00004000&((data)<<14))
#define  VMA_BNKCTLA2_vm_vfiller1(data)                                          (0x00003C00&((data)<<10))
#define  VMA_BNKCTLA2_write_enable1(data)                                        (0x00000200&((data)<<9))
#define  VMA_BNKCTLA2_lr_bnk(data)                                               (0x000001E0&((data)<<5))
#define  VMA_BNKCTLA2_write_enable0(data)                                        (0x00000010&((data)<<4))
#define  VMA_BNKCTLA2_alf_bnk(data)                                              (0x0000000F&(data))
#define  VMA_BNKCTLA2_get_write_enable5(data)                                    ((0x20000000&(data))>>29)
#define  VMA_BNKCTLA2_get_bnk9_mstr(data)                                        ((0x1E000000&(data))>>25)
#define  VMA_BNKCTLA2_get_write_enable4(data)                                    ((0x01000000&(data))>>24)
#define  VMA_BNKCTLA2_get_bnk8_mstr(data)                                        ((0x00F00000&(data))>>20)
#define  VMA_BNKCTLA2_get_write_enable3(data)                                    ((0x00080000&(data))>>19)
#define  VMA_BNKCTLA2_get_vm_vfiller2(data)                                      ((0x00078000&(data))>>15)
#define  VMA_BNKCTLA2_get_write_enable2(data)                                    ((0x00004000&(data))>>14)
#define  VMA_BNKCTLA2_get_vm_vfiller1(data)                                      ((0x00003C00&(data))>>10)
#define  VMA_BNKCTLA2_get_write_enable1(data)                                    ((0x00000200&(data))>>9)
#define  VMA_BNKCTLA2_get_lr_bnk(data)                                           ((0x000001E0&(data))>>5)
#define  VMA_BNKCTLA2_get_write_enable0(data)                                    ((0x00000010&(data))>>4)
#define  VMA_BNKCTLA2_get_alf_bnk(data)                                          (0x0000000F&(data))

#define  VMA_BNKCTLA3                                                           0x1800EE78
#define  VMA_BNKCTLA3_reg_addr                                                   "0xB800EE78"
#define  VMA_BNKCTLA3_reg                                                        0xB800EE78
#define  VMA_BNKCTLA3_inst_addr                                                  "0x0012"
#define  set_VMA_BNKCTLA3_reg(data)                                              (*((volatile unsigned int*)VMA_BNKCTLA3_reg)=data)
#define  get_VMA_BNKCTLA3_reg                                                    (*((volatile unsigned int*)VMA_BNKCTLA3_reg))
#define  VMA_BNKCTLA3_write_enable7_shift                                        (27)
#define  VMA_BNKCTLA3_tmp1_mstr_shift                                            (26)
#define  VMA_BNKCTLA3_write_enable6_shift                                        (25)
#define  VMA_BNKCTLA3_tmp0_mstr_shift                                            (24)
#define  VMA_BNKCTLA3_write_enable5_shift                                        (23)
#define  VMA_BNKCTLA3_tmp_vm_shift                                               (22)
#define  VMA_BNKCTLA3_write_enable4_shift                                        (21)
#define  VMA_BNKCTLA3_tmp_cmprs_shift                                            (20)
#define  VMA_BNKCTLA3_write_enable3_shift                                        (19)
#define  VMA_BNKCTLA3_bnk11_mstr_shift                                           (15)
#define  VMA_BNKCTLA3_write_enable2_shift                                        (14)
#define  VMA_BNKCTLA3_bnk10_mstr_shift                                           (10)
#define  VMA_BNKCTLA3_write_enable1_shift                                        (9)
#define  VMA_BNKCTLA3_bnk7_mstr_shift                                            (5)
#define  VMA_BNKCTLA3_write_enable0_shift                                        (4)
#define  VMA_BNKCTLA3_bnk6_mstr_shift                                            (0)
#define  VMA_BNKCTLA3_write_enable7_mask                                         (0x08000000)
#define  VMA_BNKCTLA3_tmp1_mstr_mask                                             (0x04000000)
#define  VMA_BNKCTLA3_write_enable6_mask                                         (0x02000000)
#define  VMA_BNKCTLA3_tmp0_mstr_mask                                             (0x01000000)
#define  VMA_BNKCTLA3_write_enable5_mask                                         (0x00800000)
#define  VMA_BNKCTLA3_tmp_vm_mask                                                (0x00400000)
#define  VMA_BNKCTLA3_write_enable4_mask                                         (0x00200000)
#define  VMA_BNKCTLA3_tmp_cmprs_mask                                             (0x00100000)
#define  VMA_BNKCTLA3_write_enable3_mask                                         (0x00080000)
#define  VMA_BNKCTLA3_bnk11_mstr_mask                                            (0x00078000)
#define  VMA_BNKCTLA3_write_enable2_mask                                         (0x00004000)
#define  VMA_BNKCTLA3_bnk10_mstr_mask                                            (0x00003C00)
#define  VMA_BNKCTLA3_write_enable1_mask                                         (0x00000200)
#define  VMA_BNKCTLA3_bnk7_mstr_mask                                             (0x000001E0)
#define  VMA_BNKCTLA3_write_enable0_mask                                         (0x00000010)
#define  VMA_BNKCTLA3_bnk6_mstr_mask                                             (0x0000000F)
#define  VMA_BNKCTLA3_write_enable7(data)                                        (0x08000000&((data)<<27))
#define  VMA_BNKCTLA3_tmp1_mstr(data)                                            (0x04000000&((data)<<26))
#define  VMA_BNKCTLA3_write_enable6(data)                                        (0x02000000&((data)<<25))
#define  VMA_BNKCTLA3_tmp0_mstr(data)                                            (0x01000000&((data)<<24))
#define  VMA_BNKCTLA3_write_enable5(data)                                        (0x00800000&((data)<<23))
#define  VMA_BNKCTLA3_tmp_vm(data)                                               (0x00400000&((data)<<22))
#define  VMA_BNKCTLA3_write_enable4(data)                                        (0x00200000&((data)<<21))
#define  VMA_BNKCTLA3_tmp_cmprs(data)                                            (0x00100000&((data)<<20))
#define  VMA_BNKCTLA3_write_enable3(data)                                        (0x00080000&((data)<<19))
#define  VMA_BNKCTLA3_bnk11_mstr(data)                                           (0x00078000&((data)<<15))
#define  VMA_BNKCTLA3_write_enable2(data)                                        (0x00004000&((data)<<14))
#define  VMA_BNKCTLA3_bnk10_mstr(data)                                           (0x00003C00&((data)<<10))
#define  VMA_BNKCTLA3_write_enable1(data)                                        (0x00000200&((data)<<9))
#define  VMA_BNKCTLA3_bnk7_mstr(data)                                            (0x000001E0&((data)<<5))
#define  VMA_BNKCTLA3_write_enable0(data)                                        (0x00000010&((data)<<4))
#define  VMA_BNKCTLA3_bnk6_mstr(data)                                            (0x0000000F&(data))
#define  VMA_BNKCTLA3_get_write_enable7(data)                                    ((0x08000000&(data))>>27)
#define  VMA_BNKCTLA3_get_tmp1_mstr(data)                                        ((0x04000000&(data))>>26)
#define  VMA_BNKCTLA3_get_write_enable6(data)                                    ((0x02000000&(data))>>25)
#define  VMA_BNKCTLA3_get_tmp0_mstr(data)                                        ((0x01000000&(data))>>24)
#define  VMA_BNKCTLA3_get_write_enable5(data)                                    ((0x00800000&(data))>>23)
#define  VMA_BNKCTLA3_get_tmp_vm(data)                                           ((0x00400000&(data))>>22)
#define  VMA_BNKCTLA3_get_write_enable4(data)                                    ((0x00200000&(data))>>21)
#define  VMA_BNKCTLA3_get_tmp_cmprs(data)                                        ((0x00100000&(data))>>20)
#define  VMA_BNKCTLA3_get_write_enable3(data)                                    ((0x00080000&(data))>>19)
#define  VMA_BNKCTLA3_get_bnk11_mstr(data)                                       ((0x00078000&(data))>>15)
#define  VMA_BNKCTLA3_get_write_enable2(data)                                    ((0x00004000&(data))>>14)
#define  VMA_BNKCTLA3_get_bnk10_mstr(data)                                       ((0x00003C00&(data))>>10)
#define  VMA_BNKCTLA3_get_write_enable1(data)                                    ((0x00000200&(data))>>9)
#define  VMA_BNKCTLA3_get_bnk7_mstr(data)                                        ((0x000001E0&(data))>>5)
#define  VMA_BNKCTLA3_get_write_enable0(data)                                    ((0x00000010&(data))>>4)
#define  VMA_BNKCTLA3_get_bnk6_mstr(data)                                        (0x0000000F&(data))

#define  VMA_CRCA                                                               0x1800EE7C
#define  VMA_CRCA_reg_addr                                                       "0xB800EE7C"
#define  VMA_CRCA_reg                                                            0xB800EE7C
#define  VMA_CRCA_inst_addr                                                      "0x0013"
#define  set_VMA_CRCA_reg(data)                                                  (*((volatile unsigned int*)VMA_CRCA_reg)=data)
#define  get_VMA_CRCA_reg                                                        (*((volatile unsigned int*)VMA_CRCA_reg))
#define  VMA_CRCA_crc_sum_shift                                                  (0)
#define  VMA_CRCA_crc_sum_mask                                                   (0xFFFFFFFF)
#define  VMA_CRCA_crc_sum(data)                                                  (0xFFFFFFFF&(data))
#define  VMA_CRCA_get_crc_sum(data)                                              (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======VMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  x:13;
        RBus_UInt32  y:14;
    };
}vma_dmareg1a_RBUS;

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
}vma_dmareg2a_RBUS;

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
}vma_dmareg3a_RBUS;

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
}vma_sdmacntla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seq_line_addr:32;
    };
}vma_sdmaadra_RBUS;

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
}vma_dmactla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  bnk5_mstr:4;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  bnk4_mstr:4;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  bnk3_mstr:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  bnk2_mstr:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  bnk1_mstr:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  bnk0_mstr:4;
    };
}vma_bnkctla0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  vm_vfiller0:4;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  vm_bnk:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  cmprs_bnk:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  sao_bnk:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  deblk_bnk:4;
        RBus_UInt32  write_enable0:1;
        RBus_UInt32  pred_bnk:4;
    };
}vma_bnkctla1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  bnk9_mstr:4;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  bnk8_mstr:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  vm_vfiller2:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  vm_vfiller1:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  lr_bnk:4;
        RBus_UInt32  write_enable0:1;
        RBus_UInt32  alf_bnk:4;
    };
}vma_bnkctla2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  tmp1_mstr:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  tmp0_mstr:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  tmp_vm:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  tmp_cmprs:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  bnk11_mstr:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  bnk10_mstr:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  bnk7_mstr:4;
        RBus_UInt32  write_enable0:1;
        RBus_UInt32  bnk6_mstr:4;
    };
}vma_bnkctla3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_sum:32;
    };
}vma_crca_RBUS;

#else //apply LITTLE_ENDIAN

//======VMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:14;
        RBus_UInt32  x:13;
        RBus_UInt32  res1:5;
    };
}vma_dmareg1a_RBUS;

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
}vma_dmareg2a_RBUS;

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
}vma_dmareg3a_RBUS;

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
}vma_sdmacntla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  seq_line_addr:32;
    };
}vma_sdmaadra_RBUS;

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
}vma_dmactla_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bnk0_mstr:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  bnk1_mstr:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  bnk2_mstr:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  bnk3_mstr:4;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  bnk4_mstr:4;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  bnk5_mstr:4;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  res1:2;
    };
}vma_bnkctla0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pred_bnk:4;
        RBus_UInt32  write_enable0:1;
        RBus_UInt32  deblk_bnk:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  sao_bnk:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  cmprs_bnk:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  vm_bnk:4;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  vm_vfiller0:4;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  res1:2;
    };
}vma_bnkctla1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alf_bnk:4;
        RBus_UInt32  write_enable0:1;
        RBus_UInt32  lr_bnk:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  vm_vfiller1:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  vm_vfiller2:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  bnk8_mstr:4;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  bnk9_mstr:4;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  res1:2;
    };
}vma_bnkctla2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bnk6_mstr:4;
        RBus_UInt32  write_enable0:1;
        RBus_UInt32  bnk7_mstr:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  bnk10_mstr:4;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  bnk11_mstr:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  tmp_cmprs:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  tmp_vm:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  tmp0_mstr:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  tmp1_mstr:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  res1:4;
    };
}vma_bnkctla3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_sum:32;
    };
}vma_crca_RBUS;




#endif 


#endif 
