/**
* @file Merlin5-DesignSpec-D-Domain_FCIC_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_FCIC_TOP_REG_H_
#define _RBUS_FCIC_TOP_REG_H_

#include "rbus_types.h"



//  FCIC_TOP Register Address
#define  FCIC_TOP_FCIC_CTRL_1                                                   0x1802A7B0
#define  FCIC_TOP_FCIC_CTRL_1_reg_addr                                           "0xB802A7B0"
#define  FCIC_TOP_FCIC_CTRL_1_reg                                                0xB802A7B0
#define  FCIC_TOP_FCIC_CTRL_1_inst_addr                                          "0x0000"
#define  set_FCIC_TOP_FCIC_CTRL_1_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_CTRL_1_reg)=data)
#define  get_FCIC_TOP_FCIC_CTRL_1_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_CTRL_1_reg))
#define  FCIC_TOP_FCIC_CTRL_1_dummy_31_1_shift                                   (1)
#define  FCIC_TOP_FCIC_CTRL_1_fcic_rbus_if_enable_shift                          (0)
#define  FCIC_TOP_FCIC_CTRL_1_dummy_31_1_mask                                    (0xFFFFFFFE)
#define  FCIC_TOP_FCIC_CTRL_1_fcic_rbus_if_enable_mask                           (0x00000001)
#define  FCIC_TOP_FCIC_CTRL_1_dummy_31_1(data)                                   (0xFFFFFFFE&((data)<<1))
#define  FCIC_TOP_FCIC_CTRL_1_fcic_rbus_if_enable(data)                          (0x00000001&(data))
#define  FCIC_TOP_FCIC_CTRL_1_get_dummy_31_1(data)                               ((0xFFFFFFFE&(data))>>1)
#define  FCIC_TOP_FCIC_CTRL_1_get_fcic_rbus_if_enable(data)                      (0x00000001&(data))

#define  FCIC_TOP_FCIC_CRTL_2                                                   0x1802A7B4
#define  FCIC_TOP_FCIC_CRTL_2_reg_addr                                           "0xB802A7B4"
#define  FCIC_TOP_FCIC_CRTL_2_reg                                                0xB802A7B4
#define  FCIC_TOP_FCIC_CRTL_2_inst_addr                                          "0x0001"
#define  set_FCIC_TOP_FCIC_CRTL_2_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_CRTL_2_reg)=data)
#define  get_FCIC_TOP_FCIC_CRTL_2_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_CRTL_2_reg))
#define  FCIC_TOP_FCIC_CRTL_2_multi_access_en_shift                              (1)
#define  FCIC_TOP_FCIC_CRTL_2_flash_write_enable_shift                           (0)
#define  FCIC_TOP_FCIC_CRTL_2_multi_access_en_mask                               (0x00000002)
#define  FCIC_TOP_FCIC_CRTL_2_flash_write_enable_mask                            (0x00000001)
#define  FCIC_TOP_FCIC_CRTL_2_multi_access_en(data)                              (0x00000002&((data)<<1))
#define  FCIC_TOP_FCIC_CRTL_2_flash_write_enable(data)                           (0x00000001&(data))
#define  FCIC_TOP_FCIC_CRTL_2_get_multi_access_en(data)                          ((0x00000002&(data))>>1)
#define  FCIC_TOP_FCIC_CRTL_2_get_flash_write_enable(data)                       (0x00000001&(data))

#define  FCIC_TOP_FCIC_FLASH_IF_1                                               0x1802A7B8
#define  FCIC_TOP_FCIC_FLASH_IF_1_reg_addr                                       "0xB802A7B8"
#define  FCIC_TOP_FCIC_FLASH_IF_1_reg                                            0xB802A7B8
#define  FCIC_TOP_FCIC_FLASH_IF_1_inst_addr                                      "0x0002"
#define  set_FCIC_TOP_FCIC_FLASH_IF_1_reg(data)                                  (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_1_reg)=data)
#define  get_FCIC_TOP_FCIC_FLASH_IF_1_reg                                        (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_1_reg))
#define  FCIC_TOP_FCIC_FLASH_IF_1_flash_done_shift                               (17)
#define  FCIC_TOP_FCIC_FLASH_IF_1_flash_addr_shift                               (0)
#define  FCIC_TOP_FCIC_FLASH_IF_1_flash_done_mask                                (0x00020000)
#define  FCIC_TOP_FCIC_FLASH_IF_1_flash_addr_mask                                (0x0001FFFF)
#define  FCIC_TOP_FCIC_FLASH_IF_1_flash_done(data)                               (0x00020000&((data)<<17))
#define  FCIC_TOP_FCIC_FLASH_IF_1_flash_addr(data)                               (0x0001FFFF&(data))
#define  FCIC_TOP_FCIC_FLASH_IF_1_get_flash_done(data)                           ((0x00020000&(data))>>17)
#define  FCIC_TOP_FCIC_FLASH_IF_1_get_flash_addr(data)                           (0x0001FFFF&(data))

#define  FCIC_TOP_FCIC_FLASH_IF_2                                               0x1802A7BC
#define  FCIC_TOP_FCIC_FLASH_IF_2_reg_addr                                       "0xB802A7BC"
#define  FCIC_TOP_FCIC_FLASH_IF_2_reg                                            0xB802A7BC
#define  FCIC_TOP_FCIC_FLASH_IF_2_inst_addr                                      "0x0003"
#define  set_FCIC_TOP_FCIC_FLASH_IF_2_reg(data)                                  (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_2_reg)=data)
#define  get_FCIC_TOP_FCIC_FLASH_IF_2_reg                                        (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_2_reg))
#define  FCIC_TOP_FCIC_FLASH_IF_2_flash_data_0_shift                             (0)
#define  FCIC_TOP_FCIC_FLASH_IF_2_flash_data_0_mask                              (0xFFFFFFFF)
#define  FCIC_TOP_FCIC_FLASH_IF_2_flash_data_0(data)                             (0xFFFFFFFF&(data))
#define  FCIC_TOP_FCIC_FLASH_IF_2_get_flash_data_0(data)                         (0xFFFFFFFF&(data))

#define  FCIC_TOP_FCIC_FLASH_IF_3                                               0x1802A7C0
#define  FCIC_TOP_FCIC_FLASH_IF_3_reg_addr                                       "0xB802A7C0"
#define  FCIC_TOP_FCIC_FLASH_IF_3_reg                                            0xB802A7C0
#define  FCIC_TOP_FCIC_FLASH_IF_3_inst_addr                                      "0x0004"
#define  set_FCIC_TOP_FCIC_FLASH_IF_3_reg(data)                                  (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_3_reg)=data)
#define  get_FCIC_TOP_FCIC_FLASH_IF_3_reg                                        (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_3_reg))
#define  FCIC_TOP_FCIC_FLASH_IF_3_flash_data_1_shift                             (0)
#define  FCIC_TOP_FCIC_FLASH_IF_3_flash_data_1_mask                              (0xFFFFFFFF)
#define  FCIC_TOP_FCIC_FLASH_IF_3_flash_data_1(data)                             (0xFFFFFFFF&(data))
#define  FCIC_TOP_FCIC_FLASH_IF_3_get_flash_data_1(data)                         (0xFFFFFFFF&(data))

#define  FCIC_TOP_FCIC_FLASH_IF_4                                               0x1802A7C4
#define  FCIC_TOP_FCIC_FLASH_IF_4_reg_addr                                       "0xB802A7C4"
#define  FCIC_TOP_FCIC_FLASH_IF_4_reg                                            0xB802A7C4
#define  FCIC_TOP_FCIC_FLASH_IF_4_inst_addr                                      "0x0005"
#define  set_FCIC_TOP_FCIC_FLASH_IF_4_reg(data)                                  (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_4_reg)=data)
#define  get_FCIC_TOP_FCIC_FLASH_IF_4_reg                                        (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_4_reg))
#define  FCIC_TOP_FCIC_FLASH_IF_4_flash_data_2_shift                             (0)
#define  FCIC_TOP_FCIC_FLASH_IF_4_flash_data_2_mask                              (0xFFFFFFFF)
#define  FCIC_TOP_FCIC_FLASH_IF_4_flash_data_2(data)                             (0xFFFFFFFF&(data))
#define  FCIC_TOP_FCIC_FLASH_IF_4_get_flash_data_2(data)                         (0xFFFFFFFF&(data))

#define  FCIC_TOP_FCIC_FLASH_IF_5                                               0x1802A7C8
#define  FCIC_TOP_FCIC_FLASH_IF_5_reg_addr                                       "0xB802A7C8"
#define  FCIC_TOP_FCIC_FLASH_IF_5_reg                                            0xB802A7C8
#define  FCIC_TOP_FCIC_FLASH_IF_5_inst_addr                                      "0x0006"
#define  set_FCIC_TOP_FCIC_FLASH_IF_5_reg(data)                                  (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_5_reg)=data)
#define  get_FCIC_TOP_FCIC_FLASH_IF_5_reg                                        (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_IF_5_reg))
#define  FCIC_TOP_FCIC_FLASH_IF_5_flash_data_3_shift                             (0)
#define  FCIC_TOP_FCIC_FLASH_IF_5_flash_data_3_mask                              (0xFFFFFFFF)
#define  FCIC_TOP_FCIC_FLASH_IF_5_flash_data_3(data)                             (0xFFFFFFFF&(data))
#define  FCIC_TOP_FCIC_FLASH_IF_5_get_flash_data_3(data)                         (0xFFFFFFFF&(data))

#define  FCIC_TOP_FCIC_FLASH_dbg_1                                              0x1802A7CC
#define  FCIC_TOP_FCIC_FLASH_dbg_1_reg_addr                                      "0xB802A7CC"
#define  FCIC_TOP_FCIC_FLASH_dbg_1_reg                                           0xB802A7CC
#define  FCIC_TOP_FCIC_FLASH_dbg_1_inst_addr                                     "0x0007"
#define  set_FCIC_TOP_FCIC_FLASH_dbg_1_reg(data)                                 (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_dbg_1_reg)=data)
#define  get_FCIC_TOP_FCIC_FLASH_dbg_1_reg                                       (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_dbg_1_reg))
#define  FCIC_TOP_FCIC_FLASH_dbg_1_rd_addr_shift                                 (16)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_flash_dbg_rd_en_shift                         (7)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_flash_dbg_mux_shift                           (0)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_rd_addr_mask                                  (0x7FFF0000)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_flash_dbg_rd_en_mask                          (0x00000080)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_flash_dbg_mux_mask                            (0x0000000F)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_rd_addr(data)                                 (0x7FFF0000&((data)<<16))
#define  FCIC_TOP_FCIC_FLASH_dbg_1_flash_dbg_rd_en(data)                         (0x00000080&((data)<<7))
#define  FCIC_TOP_FCIC_FLASH_dbg_1_flash_dbg_mux(data)                           (0x0000000F&(data))
#define  FCIC_TOP_FCIC_FLASH_dbg_1_get_rd_addr(data)                             ((0x7FFF0000&(data))>>16)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_get_flash_dbg_rd_en(data)                     ((0x00000080&(data))>>7)
#define  FCIC_TOP_FCIC_FLASH_dbg_1_get_flash_dbg_mux(data)                       (0x0000000F&(data))

#define  FCIC_TOP_FCIC_FLASH_dbg_2                                              0x1802A7D0
#define  FCIC_TOP_FCIC_FLASH_dbg_2_reg_addr                                      "0xB802A7D0"
#define  FCIC_TOP_FCIC_FLASH_dbg_2_reg                                           0xB802A7D0
#define  FCIC_TOP_FCIC_FLASH_dbg_2_inst_addr                                     "0x0008"
#define  set_FCIC_TOP_FCIC_FLASH_dbg_2_reg(data)                                 (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_dbg_2_reg)=data)
#define  get_FCIC_TOP_FCIC_FLASH_dbg_2_reg                                       (*((volatile unsigned int*)FCIC_TOP_FCIC_FLASH_dbg_2_reg))
#define  FCIC_TOP_FCIC_FLASH_dbg_2_flash_rdata_0_shift                           (0)
#define  FCIC_TOP_FCIC_FLASH_dbg_2_flash_rdata_0_mask                            (0xFFFFFFFF)
#define  FCIC_TOP_FCIC_FLASH_dbg_2_flash_rdata_0(data)                           (0xFFFFFFFF&(data))
#define  FCIC_TOP_FCIC_FLASH_dbg_2_get_flash_rdata_0(data)                       (0xFFFFFFFF&(data))

#define  FCIC_TOP_FCIC_IO_reg                                                   0x1802A7F0
#define  FCIC_TOP_FCIC_IO_reg_reg_addr                                           "0xB802A7F0"
#define  FCIC_TOP_FCIC_IO_reg_reg                                                0xB802A7F0
#define  FCIC_TOP_FCIC_IO_reg_inst_addr                                          "0x0009"
#define  set_FCIC_TOP_FCIC_IO_reg_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_IO_reg_reg)=data)
#define  get_FCIC_TOP_FCIC_IO_reg_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_IO_reg_reg))
#define  FCIC_TOP_FCIC_IO_reg_mplus_en_shift                                     (9)
#define  FCIC_TOP_FCIC_IO_reg_fcic_io_reg_en_shift                               (8)
#define  FCIC_TOP_FCIC_IO_reg_color_4_shift                                      (6)
#define  FCIC_TOP_FCIC_IO_reg_color_3_shift                                      (4)
#define  FCIC_TOP_FCIC_IO_reg_color_2_shift                                      (2)
#define  FCIC_TOP_FCIC_IO_reg_color_1_shift                                      (0)
#define  FCIC_TOP_FCIC_IO_reg_mplus_en_mask                                      (0x00000200)
#define  FCIC_TOP_FCIC_IO_reg_fcic_io_reg_en_mask                                (0x00000100)
#define  FCIC_TOP_FCIC_IO_reg_color_4_mask                                       (0x000000C0)
#define  FCIC_TOP_FCIC_IO_reg_color_3_mask                                       (0x00000030)
#define  FCIC_TOP_FCIC_IO_reg_color_2_mask                                       (0x0000000C)
#define  FCIC_TOP_FCIC_IO_reg_color_1_mask                                       (0x00000003)
#define  FCIC_TOP_FCIC_IO_reg_mplus_en(data)                                     (0x00000200&((data)<<9))
#define  FCIC_TOP_FCIC_IO_reg_fcic_io_reg_en(data)                               (0x00000100&((data)<<8))
#define  FCIC_TOP_FCIC_IO_reg_color_4(data)                                      (0x000000C0&((data)<<6))
#define  FCIC_TOP_FCIC_IO_reg_color_3(data)                                      (0x00000030&((data)<<4))
#define  FCIC_TOP_FCIC_IO_reg_color_2(data)                                      (0x0000000C&((data)<<2))
#define  FCIC_TOP_FCIC_IO_reg_color_1(data)                                      (0x00000003&(data))
#define  FCIC_TOP_FCIC_IO_reg_get_mplus_en(data)                                 ((0x00000200&(data))>>9)
#define  FCIC_TOP_FCIC_IO_reg_get_fcic_io_reg_en(data)                           ((0x00000100&(data))>>8)
#define  FCIC_TOP_FCIC_IO_reg_get_color_4(data)                                  ((0x000000C0&(data))>>6)
#define  FCIC_TOP_FCIC_IO_reg_get_color_3(data)                                  ((0x00000030&(data))>>4)
#define  FCIC_TOP_FCIC_IO_reg_get_color_2(data)                                  ((0x0000000C&(data))>>2)
#define  FCIC_TOP_FCIC_IO_reg_get_color_1(data)                                  (0x00000003&(data))

#define  FCIC_TOP_FCIC_BISR_1                                                   0x1802A7D8
#define  FCIC_TOP_FCIC_BISR_1_reg_addr                                           "0xB802A7D8"
#define  FCIC_TOP_FCIC_BISR_1_reg                                                0xB802A7D8
#define  FCIC_TOP_FCIC_BISR_1_inst_addr                                          "0x000A"
#define  set_FCIC_TOP_FCIC_BISR_1_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_BISR_1_reg)=data)
#define  get_FCIC_TOP_FCIC_BISR_1_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_BISR_1_reg))
#define  FCIC_TOP_FCIC_BISR_1_fcic1_ls_shift                                     (31)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_test1_shift                                  (30)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rme_0_shift                                  (14)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rme_1_shift                                  (13)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rm_0_shift                                   (8)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rm_1_shift                                   (4)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_ls_mask                                      (0x80000000)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_test1_mask                                   (0x40000000)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rme_0_mask                                   (0x00004000)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rme_1_mask                                   (0x00002000)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rm_0_mask                                    (0x00000F00)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rm_1_mask                                    (0x000000F0)
#define  FCIC_TOP_FCIC_BISR_1_fcic1_ls(data)                                     (0x80000000&((data)<<31))
#define  FCIC_TOP_FCIC_BISR_1_fcic1_test1(data)                                  (0x40000000&((data)<<30))
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rme_0(data)                                  (0x00004000&((data)<<14))
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rme_1(data)                                  (0x00002000&((data)<<13))
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rm_0(data)                                   (0x00000F00&((data)<<8))
#define  FCIC_TOP_FCIC_BISR_1_fcic1_rm_1(data)                                   (0x000000F0&((data)<<4))
#define  FCIC_TOP_FCIC_BISR_1_get_fcic1_ls(data)                                 ((0x80000000&(data))>>31)
#define  FCIC_TOP_FCIC_BISR_1_get_fcic1_test1(data)                              ((0x40000000&(data))>>30)
#define  FCIC_TOP_FCIC_BISR_1_get_fcic1_rme_0(data)                              ((0x00004000&(data))>>14)
#define  FCIC_TOP_FCIC_BISR_1_get_fcic1_rme_1(data)                              ((0x00002000&(data))>>13)
#define  FCIC_TOP_FCIC_BISR_1_get_fcic1_rm_0(data)                               ((0x00000F00&(data))>>8)
#define  FCIC_TOP_FCIC_BISR_1_get_fcic1_rm_1(data)                               ((0x000000F0&(data))>>4)

#define  FCIC_TOP_FCIC_BISR_2                                                   0x1802A7DC
#define  FCIC_TOP_FCIC_BISR_2_reg_addr                                           "0xB802A7DC"
#define  FCIC_TOP_FCIC_BISR_2_reg                                                0xB802A7DC
#define  FCIC_TOP_FCIC_BISR_2_inst_addr                                          "0x000B"
#define  set_FCIC_TOP_FCIC_BISR_2_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_BISR_2_reg)=data)
#define  get_FCIC_TOP_FCIC_BISR_2_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_BISR_2_reg))
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_repaired_shift                          (31)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_fail_0_shift                            (5)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_fail_1_shift                            (4)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_drf_bisr_fail_0_shift                        (2)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_drf_bisr_fail_1_shift                        (1)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_repaired_mask                           (0x80000000)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_fail_0_mask                             (0x00000020)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_fail_1_mask                             (0x00000010)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_drf_bisr_fail_0_mask                         (0x00000004)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_drf_bisr_fail_1_mask                         (0x00000002)
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_repaired(data)                          (0x80000000&((data)<<31))
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_fail_0(data)                            (0x00000020&((data)<<5))
#define  FCIC_TOP_FCIC_BISR_2_fcic1_bisr_fail_1(data)                            (0x00000010&((data)<<4))
#define  FCIC_TOP_FCIC_BISR_2_fcic1_drf_bisr_fail_0(data)                        (0x00000004&((data)<<2))
#define  FCIC_TOP_FCIC_BISR_2_fcic1_drf_bisr_fail_1(data)                        (0x00000002&((data)<<1))
#define  FCIC_TOP_FCIC_BISR_2_get_fcic1_bisr_repaired(data)                      ((0x80000000&(data))>>31)
#define  FCIC_TOP_FCIC_BISR_2_get_fcic1_bisr_fail_0(data)                        ((0x00000020&(data))>>5)
#define  FCIC_TOP_FCIC_BISR_2_get_fcic1_bisr_fail_1(data)                        ((0x00000010&(data))>>4)
#define  FCIC_TOP_FCIC_BISR_2_get_fcic1_drf_bisr_fail_0(data)                    ((0x00000004&(data))>>2)
#define  FCIC_TOP_FCIC_BISR_2_get_fcic1_drf_bisr_fail_1(data)                    ((0x00000002&(data))>>1)

#define  FCIC_TOP_FCIC_BIST_1                                                   0x1802A7E0
#define  FCIC_TOP_FCIC_BIST_1_reg_addr                                           "0xB802A7E0"
#define  FCIC_TOP_FCIC_BIST_1_reg                                                0xB802A7E0
#define  FCIC_TOP_FCIC_BIST_1_inst_addr                                          "0x000C"
#define  set_FCIC_TOP_FCIC_BIST_1_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_1_reg)=data)
#define  get_FCIC_TOP_FCIC_BIST_1_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_1_reg))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_ls_shift                                     (31)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_test1_shift                                  (30)
#define  FCIC_TOP_FCIC_BIST_1_fcic5_ls_shift                                     (29)
#define  FCIC_TOP_FCIC_BIST_1_fcic5_test1_shift                                  (28)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_0_shift                                  (14)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_1_shift                                  (13)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_2_shift                                  (12)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_3_shift                                  (11)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_4_shift                                  (10)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_5_shift                                  (9)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_6_shift                                  (8)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_7_shift                                  (7)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_8_shift                                  (6)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_9_shift                                  (5)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_10_shift                                 (4)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_11_shift                                 (3)
#define  FCIC_TOP_FCIC_BIST_1_fcic5_rme_0_shift                                  (0)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_ls_mask                                      (0x80000000)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_test1_mask                                   (0x40000000)
#define  FCIC_TOP_FCIC_BIST_1_fcic5_ls_mask                                      (0x20000000)
#define  FCIC_TOP_FCIC_BIST_1_fcic5_test1_mask                                   (0x10000000)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_0_mask                                   (0x00004000)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_1_mask                                   (0x00002000)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_2_mask                                   (0x00001000)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_3_mask                                   (0x00000800)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_4_mask                                   (0x00000400)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_5_mask                                   (0x00000200)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_6_mask                                   (0x00000100)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_7_mask                                   (0x00000080)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_8_mask                                   (0x00000040)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_9_mask                                   (0x00000020)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_10_mask                                  (0x00000010)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_11_mask                                  (0x00000008)
#define  FCIC_TOP_FCIC_BIST_1_fcic5_rme_0_mask                                   (0x00000001)
#define  FCIC_TOP_FCIC_BIST_1_fcic6_ls(data)                                     (0x80000000&((data)<<31))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_test1(data)                                  (0x40000000&((data)<<30))
#define  FCIC_TOP_FCIC_BIST_1_fcic5_ls(data)                                     (0x20000000&((data)<<29))
#define  FCIC_TOP_FCIC_BIST_1_fcic5_test1(data)                                  (0x10000000&((data)<<28))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_0(data)                                  (0x00004000&((data)<<14))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_1(data)                                  (0x00002000&((data)<<13))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_2(data)                                  (0x00001000&((data)<<12))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_3(data)                                  (0x00000800&((data)<<11))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_4(data)                                  (0x00000400&((data)<<10))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_5(data)                                  (0x00000200&((data)<<9))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_6(data)                                  (0x00000100&((data)<<8))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_7(data)                                  (0x00000080&((data)<<7))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_8(data)                                  (0x00000040&((data)<<6))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_9(data)                                  (0x00000020&((data)<<5))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_10(data)                                 (0x00000010&((data)<<4))
#define  FCIC_TOP_FCIC_BIST_1_fcic6_rme_11(data)                                 (0x00000008&((data)<<3))
#define  FCIC_TOP_FCIC_BIST_1_fcic5_rme_0(data)                                  (0x00000001&(data))
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_ls(data)                                 ((0x80000000&(data))>>31)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_test1(data)                              ((0x40000000&(data))>>30)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic5_ls(data)                                 ((0x20000000&(data))>>29)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic5_test1(data)                              ((0x10000000&(data))>>28)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_0(data)                              ((0x00004000&(data))>>14)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_1(data)                              ((0x00002000&(data))>>13)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_2(data)                              ((0x00001000&(data))>>12)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_3(data)                              ((0x00000800&(data))>>11)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_4(data)                              ((0x00000400&(data))>>10)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_5(data)                              ((0x00000200&(data))>>9)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_6(data)                              ((0x00000100&(data))>>8)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_7(data)                              ((0x00000080&(data))>>7)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_8(data)                              ((0x00000040&(data))>>6)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_9(data)                              ((0x00000020&(data))>>5)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_10(data)                             ((0x00000010&(data))>>4)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic6_rme_11(data)                             ((0x00000008&(data))>>3)
#define  FCIC_TOP_FCIC_BIST_1_get_fcic5_rme_0(data)                              (0x00000001&(data))

#define  FCIC_TOP_FCIC_BIST_2                                                   0x1802A7E4
#define  FCIC_TOP_FCIC_BIST_2_reg_addr                                           "0xB802A7E4"
#define  FCIC_TOP_FCIC_BIST_2_reg                                                0xB802A7E4
#define  FCIC_TOP_FCIC_BIST_2_inst_addr                                          "0x000D"
#define  set_FCIC_TOP_FCIC_BIST_2_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_2_reg)=data)
#define  get_FCIC_TOP_FCIC_BIST_2_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_2_reg))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_0_shift                                   (28)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_1_shift                                   (24)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_2_shift                                   (20)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_3_shift                                   (16)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_4_shift                                   (12)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_5_shift                                   (8)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_6_shift                                   (4)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_7_shift                                   (0)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_0_mask                                    (0xF0000000)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_1_mask                                    (0x0F000000)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_2_mask                                    (0x00F00000)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_3_mask                                    (0x000F0000)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_4_mask                                    (0x0000F000)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_5_mask                                    (0x00000F00)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_6_mask                                    (0x000000F0)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_7_mask                                    (0x0000000F)
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_0(data)                                   (0xF0000000&((data)<<28))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_1(data)                                   (0x0F000000&((data)<<24))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_2(data)                                   (0x00F00000&((data)<<20))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_3(data)                                   (0x000F0000&((data)<<16))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_4(data)                                   (0x0000F000&((data)<<12))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_5(data)                                   (0x00000F00&((data)<<8))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_6(data)                                   (0x000000F0&((data)<<4))
#define  FCIC_TOP_FCIC_BIST_2_fcic6_rm_7(data)                                   (0x0000000F&(data))
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_0(data)                               ((0xF0000000&(data))>>28)
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_1(data)                               ((0x0F000000&(data))>>24)
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_2(data)                               ((0x00F00000&(data))>>20)
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_3(data)                               ((0x000F0000&(data))>>16)
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_4(data)                               ((0x0000F000&(data))>>12)
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_5(data)                               ((0x00000F00&(data))>>8)
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_6(data)                               ((0x000000F0&(data))>>4)
#define  FCIC_TOP_FCIC_BIST_2_get_fcic6_rm_7(data)                               (0x0000000F&(data))

#define  FCIC_TOP_FCIC_BIST_3                                                   0x1802A7E8
#define  FCIC_TOP_FCIC_BIST_3_reg_addr                                           "0xB802A7E8"
#define  FCIC_TOP_FCIC_BIST_3_reg                                                0xB802A7E8
#define  FCIC_TOP_FCIC_BIST_3_inst_addr                                          "0x000E"
#define  set_FCIC_TOP_FCIC_BIST_3_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_3_reg)=data)
#define  get_FCIC_TOP_FCIC_BIST_3_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_3_reg))
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_8_shift                                   (28)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_9_shift                                   (24)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_10_shift                                  (20)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_11_shift                                  (16)
#define  FCIC_TOP_FCIC_BIST_3_fcic5_rm_0_shift                                   (4)
#define  FCIC_TOP_FCIC_BIST_3_fcic5_testrwm_0_shift                              (3)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_8_mask                                    (0xF0000000)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_9_mask                                    (0x0F000000)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_10_mask                                   (0x00F00000)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_11_mask                                   (0x000F0000)
#define  FCIC_TOP_FCIC_BIST_3_fcic5_rm_0_mask                                    (0x000000F0)
#define  FCIC_TOP_FCIC_BIST_3_fcic5_testrwm_0_mask                               (0x00000008)
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_8(data)                                   (0xF0000000&((data)<<28))
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_9(data)                                   (0x0F000000&((data)<<24))
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_10(data)                                  (0x00F00000&((data)<<20))
#define  FCIC_TOP_FCIC_BIST_3_fcic6_rm_11(data)                                  (0x000F0000&((data)<<16))
#define  FCIC_TOP_FCIC_BIST_3_fcic5_rm_0(data)                                   (0x000000F0&((data)<<4))
#define  FCIC_TOP_FCIC_BIST_3_fcic5_testrwm_0(data)                              (0x00000008&((data)<<3))
#define  FCIC_TOP_FCIC_BIST_3_get_fcic6_rm_8(data)                               ((0xF0000000&(data))>>28)
#define  FCIC_TOP_FCIC_BIST_3_get_fcic6_rm_9(data)                               ((0x0F000000&(data))>>24)
#define  FCIC_TOP_FCIC_BIST_3_get_fcic6_rm_10(data)                              ((0x00F00000&(data))>>20)
#define  FCIC_TOP_FCIC_BIST_3_get_fcic6_rm_11(data)                              ((0x000F0000&(data))>>16)
#define  FCIC_TOP_FCIC_BIST_3_get_fcic5_rm_0(data)                               ((0x000000F0&(data))>>4)
#define  FCIC_TOP_FCIC_BIST_3_get_fcic5_testrwm_0(data)                          ((0x00000008&(data))>>3)

#define  FCIC_TOP_FCIC_BIST_4                                                   0x1802A7EC
#define  FCIC_TOP_FCIC_BIST_4_reg_addr                                           "0xB802A7EC"
#define  FCIC_TOP_FCIC_BIST_4_reg                                                0xB802A7EC
#define  FCIC_TOP_FCIC_BIST_4_inst_addr                                          "0x000F"
#define  set_FCIC_TOP_FCIC_BIST_4_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_4_reg)=data)
#define  get_FCIC_TOP_FCIC_BIST_4_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_4_reg))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_0_shift                            (30)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_1_shift                            (29)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_2_shift                            (28)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_3_shift                            (27)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_4_shift                            (26)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_5_shift                            (25)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_6_shift                            (24)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_7_shift                            (23)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_8_shift                            (22)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_9_shift                            (21)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_10_shift                           (20)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_11_shift                           (19)
#define  FCIC_TOP_FCIC_BIST_4_fcic5_bist_fail_0_shift                            (16)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_0_shift                        (14)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_1_shift                        (13)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_2_shift                        (12)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_3_shift                        (11)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_4_shift                        (10)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_5_shift                        (9)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_6_shift                        (8)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_7_shift                        (7)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_8_shift                        (6)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_9_shift                        (5)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_10_shift                       (4)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_11_shift                       (3)
#define  FCIC_TOP_FCIC_BIST_4_fcic5_drf_bist_fail_0_shift                        (0)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_0_mask                             (0x40000000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_1_mask                             (0x20000000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_2_mask                             (0x10000000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_3_mask                             (0x08000000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_4_mask                             (0x04000000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_5_mask                             (0x02000000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_6_mask                             (0x01000000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_7_mask                             (0x00800000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_8_mask                             (0x00400000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_9_mask                             (0x00200000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_10_mask                            (0x00100000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_11_mask                            (0x00080000)
#define  FCIC_TOP_FCIC_BIST_4_fcic5_bist_fail_0_mask                             (0x00010000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_0_mask                         (0x00004000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_1_mask                         (0x00002000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_2_mask                         (0x00001000)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_3_mask                         (0x00000800)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_4_mask                         (0x00000400)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_5_mask                         (0x00000200)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_6_mask                         (0x00000100)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_7_mask                         (0x00000080)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_8_mask                         (0x00000040)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_9_mask                         (0x00000020)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_10_mask                        (0x00000010)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_11_mask                        (0x00000008)
#define  FCIC_TOP_FCIC_BIST_4_fcic5_drf_bist_fail_0_mask                         (0x00000001)
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_0(data)                            (0x40000000&((data)<<30))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_1(data)                            (0x20000000&((data)<<29))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_2(data)                            (0x10000000&((data)<<28))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_3(data)                            (0x08000000&((data)<<27))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_4(data)                            (0x04000000&((data)<<26))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_5(data)                            (0x02000000&((data)<<25))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_6(data)                            (0x01000000&((data)<<24))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_7(data)                            (0x00800000&((data)<<23))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_8(data)                            (0x00400000&((data)<<22))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_9(data)                            (0x00200000&((data)<<21))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_10(data)                           (0x00100000&((data)<<20))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_bist_fail_11(data)                           (0x00080000&((data)<<19))
#define  FCIC_TOP_FCIC_BIST_4_fcic5_bist_fail_0(data)                            (0x00010000&((data)<<16))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_0(data)                        (0x00004000&((data)<<14))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_1(data)                        (0x00002000&((data)<<13))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_2(data)                        (0x00001000&((data)<<12))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_3(data)                        (0x00000800&((data)<<11))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_4(data)                        (0x00000400&((data)<<10))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_5(data)                        (0x00000200&((data)<<9))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_6(data)                        (0x00000100&((data)<<8))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_7(data)                        (0x00000080&((data)<<7))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_8(data)                        (0x00000040&((data)<<6))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_9(data)                        (0x00000020&((data)<<5))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_10(data)                       (0x00000010&((data)<<4))
#define  FCIC_TOP_FCIC_BIST_4_fcic6_drf_bist_fail_11(data)                       (0x00000008&((data)<<3))
#define  FCIC_TOP_FCIC_BIST_4_fcic5_drf_bist_fail_0(data)                        (0x00000001&(data))
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_0(data)                        ((0x40000000&(data))>>30)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_1(data)                        ((0x20000000&(data))>>29)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_2(data)                        ((0x10000000&(data))>>28)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_3(data)                        ((0x08000000&(data))>>27)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_4(data)                        ((0x04000000&(data))>>26)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_5(data)                        ((0x02000000&(data))>>25)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_6(data)                        ((0x01000000&(data))>>24)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_7(data)                        ((0x00800000&(data))>>23)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_8(data)                        ((0x00400000&(data))>>22)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_9(data)                        ((0x00200000&(data))>>21)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_10(data)                       ((0x00100000&(data))>>20)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_bist_fail_11(data)                       ((0x00080000&(data))>>19)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic5_bist_fail_0(data)                        ((0x00010000&(data))>>16)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_0(data)                    ((0x00004000&(data))>>14)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_1(data)                    ((0x00002000&(data))>>13)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_2(data)                    ((0x00001000&(data))>>12)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_3(data)                    ((0x00000800&(data))>>11)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_4(data)                    ((0x00000400&(data))>>10)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_5(data)                    ((0x00000200&(data))>>9)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_6(data)                    ((0x00000100&(data))>>8)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_7(data)                    ((0x00000080&(data))>>7)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_8(data)                    ((0x00000040&(data))>>6)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_9(data)                    ((0x00000020&(data))>>5)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_10(data)                   ((0x00000010&(data))>>4)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic6_drf_bist_fail_11(data)                   ((0x00000008&(data))>>3)
#define  FCIC_TOP_FCIC_BIST_4_get_fcic5_drf_bist_fail_0(data)                    (0x00000001&(data))

#define  FCIC_TOP_FCIC_BIST_5                                                   0x1802A7F4
#define  FCIC_TOP_FCIC_BIST_5_reg_addr                                           "0xB802A7F4"
#define  FCIC_TOP_FCIC_BIST_5_reg                                                0xB802A7F4
#define  FCIC_TOP_FCIC_BIST_5_inst_addr                                          "0x0010"
#define  set_FCIC_TOP_FCIC_BIST_5_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_5_reg)=data)
#define  get_FCIC_TOP_FCIC_BIST_5_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_BIST_5_reg))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_12_shift                           (30)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_13_shift                           (29)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_14_shift                           (28)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_15_shift                           (27)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_16_shift                           (26)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_17_shift                           (25)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_18_shift                           (24)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_19_shift                           (23)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_20_shift                           (22)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_21_shift                           (21)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_22_shift                           (20)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_23_shift                           (19)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_12_shift                       (14)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_13_shift                       (13)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_14_shift                       (12)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_15_shift                       (11)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_16_shift                       (10)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_17_shift                       (9)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_18_shift                       (8)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_19_shift                       (7)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_20_shift                       (6)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_21_shift                       (5)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_22_shift                       (4)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_23_shift                       (3)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_12_mask                            (0x40000000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_13_mask                            (0x20000000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_14_mask                            (0x10000000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_15_mask                            (0x08000000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_16_mask                            (0x04000000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_17_mask                            (0x02000000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_18_mask                            (0x01000000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_19_mask                            (0x00800000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_20_mask                            (0x00400000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_21_mask                            (0x00200000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_22_mask                            (0x00100000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_23_mask                            (0x00080000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_12_mask                        (0x00004000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_13_mask                        (0x00002000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_14_mask                        (0x00001000)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_15_mask                        (0x00000800)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_16_mask                        (0x00000400)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_17_mask                        (0x00000200)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_18_mask                        (0x00000100)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_19_mask                        (0x00000080)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_20_mask                        (0x00000040)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_21_mask                        (0x00000020)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_22_mask                        (0x00000010)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_23_mask                        (0x00000008)
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_12(data)                           (0x40000000&((data)<<30))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_13(data)                           (0x20000000&((data)<<29))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_14(data)                           (0x10000000&((data)<<28))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_15(data)                           (0x08000000&((data)<<27))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_16(data)                           (0x04000000&((data)<<26))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_17(data)                           (0x02000000&((data)<<25))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_18(data)                           (0x01000000&((data)<<24))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_19(data)                           (0x00800000&((data)<<23))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_20(data)                           (0x00400000&((data)<<22))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_21(data)                           (0x00200000&((data)<<21))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_22(data)                           (0x00100000&((data)<<20))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_bist_fail_23(data)                           (0x00080000&((data)<<19))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_12(data)                       (0x00004000&((data)<<14))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_13(data)                       (0x00002000&((data)<<13))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_14(data)                       (0x00001000&((data)<<12))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_15(data)                       (0x00000800&((data)<<11))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_16(data)                       (0x00000400&((data)<<10))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_17(data)                       (0x00000200&((data)<<9))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_18(data)                       (0x00000100&((data)<<8))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_19(data)                       (0x00000080&((data)<<7))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_20(data)                       (0x00000040&((data)<<6))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_21(data)                       (0x00000020&((data)<<5))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_22(data)                       (0x00000010&((data)<<4))
#define  FCIC_TOP_FCIC_BIST_5_fcic6_drf_bist_fail_23(data)                       (0x00000008&((data)<<3))
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_12(data)                       ((0x40000000&(data))>>30)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_13(data)                       ((0x20000000&(data))>>29)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_14(data)                       ((0x10000000&(data))>>28)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_15(data)                       ((0x08000000&(data))>>27)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_16(data)                       ((0x04000000&(data))>>26)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_17(data)                       ((0x02000000&(data))>>25)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_18(data)                       ((0x01000000&(data))>>24)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_19(data)                       ((0x00800000&(data))>>23)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_20(data)                       ((0x00400000&(data))>>22)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_21(data)                       ((0x00200000&(data))>>21)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_22(data)                       ((0x00100000&(data))>>20)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_bist_fail_23(data)                       ((0x00080000&(data))>>19)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_12(data)                   ((0x00004000&(data))>>14)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_13(data)                   ((0x00002000&(data))>>13)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_14(data)                   ((0x00001000&(data))>>12)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_15(data)                   ((0x00000800&(data))>>11)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_16(data)                   ((0x00000400&(data))>>10)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_17(data)                   ((0x00000200&(data))>>9)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_18(data)                   ((0x00000100&(data))>>8)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_19(data)                   ((0x00000080&(data))>>7)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_20(data)                   ((0x00000040&(data))>>6)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_21(data)                   ((0x00000020&(data))>>5)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_22(data)                   ((0x00000010&(data))>>4)
#define  FCIC_TOP_FCIC_BIST_5_get_fcic6_drf_bist_fail_23(data)                   ((0x00000008&(data))>>3)

#define  FCIC_TOP_FCIC_reg000                                                   0x1802A500
#define  FCIC_TOP_FCIC_reg000_reg_addr                                           "0xB802A500"
#define  FCIC_TOP_FCIC_reg000_reg                                                0xB802A500
#define  FCIC_TOP_FCIC_reg000_inst_addr                                          "0x0011"
#define  set_FCIC_TOP_FCIC_reg000_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg000_reg)=data)
#define  get_FCIC_TOP_FCIC_reg000_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg000_reg))
#define  FCIC_TOP_FCIC_reg000_fcic_reg000_shift                                  (24)
#define  FCIC_TOP_FCIC_reg000_fcic_reg001_shift                                  (16)
#define  FCIC_TOP_FCIC_reg000_fcic_reg002_shift                                  (8)
#define  FCIC_TOP_FCIC_reg000_fcic_reg003_shift                                  (0)
#define  FCIC_TOP_FCIC_reg000_fcic_reg000_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg000_fcic_reg001_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg000_fcic_reg002_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg000_fcic_reg003_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg000_fcic_reg000(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg000_fcic_reg001(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg000_fcic_reg002(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg000_fcic_reg003(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg000_get_fcic_reg000(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg000_get_fcic_reg001(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg000_get_fcic_reg002(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg000_get_fcic_reg003(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg004                                                   0x1802A504
#define  FCIC_TOP_FCIC_reg004_reg_addr                                           "0xB802A504"
#define  FCIC_TOP_FCIC_reg004_reg                                                0xB802A504
#define  FCIC_TOP_FCIC_reg004_inst_addr                                          "0x0012"
#define  set_FCIC_TOP_FCIC_reg004_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg004_reg)=data)
#define  get_FCIC_TOP_FCIC_reg004_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg004_reg))
#define  FCIC_TOP_FCIC_reg004_fcic_reg004_shift                                  (24)
#define  FCIC_TOP_FCIC_reg004_fcic_reg005_shift                                  (16)
#define  FCIC_TOP_FCIC_reg004_fcic_reg006_shift                                  (8)
#define  FCIC_TOP_FCIC_reg004_fcic_reg007_shift                                  (0)
#define  FCIC_TOP_FCIC_reg004_fcic_reg004_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg004_fcic_reg005_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg004_fcic_reg006_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg004_fcic_reg007_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg004_fcic_reg004(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg004_fcic_reg005(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg004_fcic_reg006(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg004_fcic_reg007(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg004_get_fcic_reg004(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg004_get_fcic_reg005(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg004_get_fcic_reg006(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg004_get_fcic_reg007(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg008                                                   0x1802A508
#define  FCIC_TOP_FCIC_reg008_reg_addr                                           "0xB802A508"
#define  FCIC_TOP_FCIC_reg008_reg                                                0xB802A508
#define  FCIC_TOP_FCIC_reg008_inst_addr                                          "0x0013"
#define  set_FCIC_TOP_FCIC_reg008_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg008_reg)=data)
#define  get_FCIC_TOP_FCIC_reg008_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg008_reg))
#define  FCIC_TOP_FCIC_reg008_fcic_reg008_shift                                  (24)
#define  FCIC_TOP_FCIC_reg008_fcic_reg009_shift                                  (16)
#define  FCIC_TOP_FCIC_reg008_fcic_reg010_shift                                  (8)
#define  FCIC_TOP_FCIC_reg008_fcic_reg011_shift                                  (0)
#define  FCIC_TOP_FCIC_reg008_fcic_reg008_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg008_fcic_reg009_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg008_fcic_reg010_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg008_fcic_reg011_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg008_fcic_reg008(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg008_fcic_reg009(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg008_fcic_reg010(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg008_fcic_reg011(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg008_get_fcic_reg008(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg008_get_fcic_reg009(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg008_get_fcic_reg010(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg008_get_fcic_reg011(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg00c                                                   0x1802A50C
#define  FCIC_TOP_FCIC_reg00c_reg_addr                                           "0xB802A50C"
#define  FCIC_TOP_FCIC_reg00c_reg                                                0xB802A50C
#define  FCIC_TOP_FCIC_reg00c_inst_addr                                          "0x0014"
#define  set_FCIC_TOP_FCIC_reg00c_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg00c_reg)=data)
#define  get_FCIC_TOP_FCIC_reg00c_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg00c_reg))
#define  FCIC_TOP_FCIC_reg00c_fcic_reg012_shift                                  (24)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg013_shift                                  (16)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg014_shift                                  (8)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg015_shift                                  (0)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg012_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg013_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg014_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg015_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg00c_fcic_reg012(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg00c_fcic_reg013(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg00c_fcic_reg014(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg00c_fcic_reg015(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg00c_get_fcic_reg012(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg00c_get_fcic_reg013(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg00c_get_fcic_reg014(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg00c_get_fcic_reg015(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg010                                                   0x1802A510
#define  FCIC_TOP_FCIC_reg010_reg_addr                                           "0xB802A510"
#define  FCIC_TOP_FCIC_reg010_reg                                                0xB802A510
#define  FCIC_TOP_FCIC_reg010_inst_addr                                          "0x0015"
#define  set_FCIC_TOP_FCIC_reg010_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg010_reg)=data)
#define  get_FCIC_TOP_FCIC_reg010_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg010_reg))
#define  FCIC_TOP_FCIC_reg010_fcic_reg016_shift                                  (24)
#define  FCIC_TOP_FCIC_reg010_fcic_reg017_shift                                  (16)
#define  FCIC_TOP_FCIC_reg010_fcic_reg018_shift                                  (8)
#define  FCIC_TOP_FCIC_reg010_fcic_reg019_shift                                  (0)
#define  FCIC_TOP_FCIC_reg010_fcic_reg016_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg010_fcic_reg017_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg010_fcic_reg018_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg010_fcic_reg019_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg010_fcic_reg016(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg010_fcic_reg017(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg010_fcic_reg018(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg010_fcic_reg019(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg010_get_fcic_reg016(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg010_get_fcic_reg017(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg010_get_fcic_reg018(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg010_get_fcic_reg019(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg014                                                   0x1802A514
#define  FCIC_TOP_FCIC_reg014_reg_addr                                           "0xB802A514"
#define  FCIC_TOP_FCIC_reg014_reg                                                0xB802A514
#define  FCIC_TOP_FCIC_reg014_inst_addr                                          "0x0016"
#define  set_FCIC_TOP_FCIC_reg014_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg014_reg)=data)
#define  get_FCIC_TOP_FCIC_reg014_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg014_reg))
#define  FCIC_TOP_FCIC_reg014_fcic_reg020_shift                                  (24)
#define  FCIC_TOP_FCIC_reg014_fcic_reg021_shift                                  (16)
#define  FCIC_TOP_FCIC_reg014_fcic_reg022_shift                                  (8)
#define  FCIC_TOP_FCIC_reg014_fcic_reg023_shift                                  (0)
#define  FCIC_TOP_FCIC_reg014_fcic_reg020_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg014_fcic_reg021_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg014_fcic_reg022_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg014_fcic_reg023_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg014_fcic_reg020(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg014_fcic_reg021(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg014_fcic_reg022(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg014_fcic_reg023(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg014_get_fcic_reg020(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg014_get_fcic_reg021(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg014_get_fcic_reg022(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg014_get_fcic_reg023(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg018                                                   0x1802A518
#define  FCIC_TOP_FCIC_reg018_reg_addr                                           "0xB802A518"
#define  FCIC_TOP_FCIC_reg018_reg                                                0xB802A518
#define  FCIC_TOP_FCIC_reg018_inst_addr                                          "0x0017"
#define  set_FCIC_TOP_FCIC_reg018_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg018_reg)=data)
#define  get_FCIC_TOP_FCIC_reg018_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg018_reg))
#define  FCIC_TOP_FCIC_reg018_fcic_reg024_shift                                  (24)
#define  FCIC_TOP_FCIC_reg018_fcic_reg025_shift                                  (16)
#define  FCIC_TOP_FCIC_reg018_fcic_reg026_shift                                  (8)
#define  FCIC_TOP_FCIC_reg018_fcic_reg027_shift                                  (0)
#define  FCIC_TOP_FCIC_reg018_fcic_reg024_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg018_fcic_reg025_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg018_fcic_reg026_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg018_fcic_reg027_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg018_fcic_reg024(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg018_fcic_reg025(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg018_fcic_reg026(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg018_fcic_reg027(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg018_get_fcic_reg024(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg018_get_fcic_reg025(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg018_get_fcic_reg026(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg018_get_fcic_reg027(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg01c                                                   0x1802A51C
#define  FCIC_TOP_FCIC_reg01c_reg_addr                                           "0xB802A51C"
#define  FCIC_TOP_FCIC_reg01c_reg                                                0xB802A51C
#define  FCIC_TOP_FCIC_reg01c_inst_addr                                          "0x0018"
#define  set_FCIC_TOP_FCIC_reg01c_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg01c_reg)=data)
#define  get_FCIC_TOP_FCIC_reg01c_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg01c_reg))
#define  FCIC_TOP_FCIC_reg01c_fcic_reg028_shift                                  (24)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg029_shift                                  (16)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg030_shift                                  (8)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg031_shift                                  (0)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg028_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg029_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg030_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg031_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg01c_fcic_reg028(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg01c_fcic_reg029(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg01c_fcic_reg030(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg01c_fcic_reg031(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg01c_get_fcic_reg028(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg01c_get_fcic_reg029(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg01c_get_fcic_reg030(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg01c_get_fcic_reg031(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg020                                                   0x1802A520
#define  FCIC_TOP_FCIC_reg020_reg_addr                                           "0xB802A520"
#define  FCIC_TOP_FCIC_reg020_reg                                                0xB802A520
#define  FCIC_TOP_FCIC_reg020_inst_addr                                          "0x0019"
#define  set_FCIC_TOP_FCIC_reg020_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg020_reg)=data)
#define  get_FCIC_TOP_FCIC_reg020_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg020_reg))
#define  FCIC_TOP_FCIC_reg020_fcic_reg032_shift                                  (24)
#define  FCIC_TOP_FCIC_reg020_fcic_reg033_shift                                  (16)
#define  FCIC_TOP_FCIC_reg020_fcic_reg034_shift                                  (8)
#define  FCIC_TOP_FCIC_reg020_fcic_reg035_shift                                  (0)
#define  FCIC_TOP_FCIC_reg020_fcic_reg032_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg020_fcic_reg033_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg020_fcic_reg034_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg020_fcic_reg035_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg020_fcic_reg032(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg020_fcic_reg033(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg020_fcic_reg034(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg020_fcic_reg035(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg020_get_fcic_reg032(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg020_get_fcic_reg033(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg020_get_fcic_reg034(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg020_get_fcic_reg035(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg024                                                   0x1802A524
#define  FCIC_TOP_FCIC_reg024_reg_addr                                           "0xB802A524"
#define  FCIC_TOP_FCIC_reg024_reg                                                0xB802A524
#define  FCIC_TOP_FCIC_reg024_inst_addr                                          "0x001A"
#define  set_FCIC_TOP_FCIC_reg024_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg024_reg)=data)
#define  get_FCIC_TOP_FCIC_reg024_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg024_reg))
#define  FCIC_TOP_FCIC_reg024_fcic_reg036_shift                                  (24)
#define  FCIC_TOP_FCIC_reg024_fcic_reg037_shift                                  (16)
#define  FCIC_TOP_FCIC_reg024_fcic_reg038_shift                                  (8)
#define  FCIC_TOP_FCIC_reg024_fcic_reg039_shift                                  (0)
#define  FCIC_TOP_FCIC_reg024_fcic_reg036_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg024_fcic_reg037_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg024_fcic_reg038_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg024_fcic_reg039_mask                                   (0x000000FF)
#define  FCIC_TOP_FCIC_reg024_fcic_reg036(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg024_fcic_reg037(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg024_fcic_reg038(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg024_fcic_reg039(data)                                  (0x000000FF&(data))
#define  FCIC_TOP_FCIC_reg024_get_fcic_reg036(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg024_get_fcic_reg037(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg024_get_fcic_reg038(data)                              ((0x0000FF00&(data))>>8)
#define  FCIC_TOP_FCIC_reg024_get_fcic_reg039(data)                              (0x000000FF&(data))

#define  FCIC_TOP_FCIC_reg028                                                   0x1802A528
#define  FCIC_TOP_FCIC_reg028_reg_addr                                           "0xB802A528"
#define  FCIC_TOP_FCIC_reg028_reg                                                0xB802A528
#define  FCIC_TOP_FCIC_reg028_inst_addr                                          "0x001B"
#define  set_FCIC_TOP_FCIC_reg028_reg(data)                                      (*((volatile unsigned int*)FCIC_TOP_FCIC_reg028_reg)=data)
#define  get_FCIC_TOP_FCIC_reg028_reg                                            (*((volatile unsigned int*)FCIC_TOP_FCIC_reg028_reg))
#define  FCIC_TOP_FCIC_reg028_fcic_reg040_shift                                  (24)
#define  FCIC_TOP_FCIC_reg028_fcic_reg041_shift                                  (16)
#define  FCIC_TOP_FCIC_reg028_fcic_reg042_shift                                  (8)
#define  FCIC_TOP_FCIC_reg028_fcic_reg040_mask                                   (0xFF000000)
#define  FCIC_TOP_FCIC_reg028_fcic_reg041_mask                                   (0x00FF0000)
#define  FCIC_TOP_FCIC_reg028_fcic_reg042_mask                                   (0x0000FF00)
#define  FCIC_TOP_FCIC_reg028_fcic_reg040(data)                                  (0xFF000000&((data)<<24))
#define  FCIC_TOP_FCIC_reg028_fcic_reg041(data)                                  (0x00FF0000&((data)<<16))
#define  FCIC_TOP_FCIC_reg028_fcic_reg042(data)                                  (0x0000FF00&((data)<<8))
#define  FCIC_TOP_FCIC_reg028_get_fcic_reg040(data)                              ((0xFF000000&(data))>>24)
#define  FCIC_TOP_FCIC_reg028_get_fcic_reg041(data)                              ((0x00FF0000&(data))>>16)
#define  FCIC_TOP_FCIC_reg028_get_fcic_reg042(data)                              ((0x0000FF00&(data))>>8)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======FCIC_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802a7b0_31_1:31;
        RBus_UInt32  fcic_rbus_if_enable:1;
    };
}fcic_top_fcic_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  multi_access_en:1;
        RBus_UInt32  flash_write_enable:1;
    };
}fcic_top_fcic_crtl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  flash_done:1;
        RBus_UInt32  flash_addr:17;
    };
}fcic_top_fcic_flash_if_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_0:32;
    };
}fcic_top_fcic_flash_if_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_1:32;
    };
}fcic_top_fcic_flash_if_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_2:32;
    };
}fcic_top_fcic_flash_if_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_3:32;
    };
}fcic_top_fcic_flash_if_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rd_addr:15;
        RBus_UInt32  res2:8;
        RBus_UInt32  flash_dbg_rd_en:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  flash_dbg_mux:4;
    };
}fcic_top_fcic_flash_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_rdata_0:32;
    };
}fcic_top_fcic_flash_dbg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mplus_en:1;
        RBus_UInt32  fcic_io_reg_en:1;
        RBus_UInt32  color_4:2;
        RBus_UInt32  color_3:2;
        RBus_UInt32  color_2:2;
        RBus_UInt32  color_1:2;
    };
}fcic_top_fcic_io_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic1_ls:1;
        RBus_UInt32  fcic1_test1:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  fcic1_rme_0:1;
        RBus_UInt32  fcic1_rme_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  fcic1_rm_0:4;
        RBus_UInt32  fcic1_rm_1:4;
        RBus_UInt32  res3:4;
    };
}fcic_top_fcic_bisr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic1_bisr_repaired:1;
        RBus_UInt32  res1:25;
        RBus_UInt32  fcic1_bisr_fail_0:1;
        RBus_UInt32  fcic1_bisr_fail_1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  fcic1_drf_bisr_fail_0:1;
        RBus_UInt32  fcic1_drf_bisr_fail_1:1;
        RBus_UInt32  res3:1;
    };
}fcic_top_fcic_bisr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic6_ls:1;
        RBus_UInt32  fcic6_test1:1;
        RBus_UInt32  fcic5_ls:1;
        RBus_UInt32  fcic5_test1:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  fcic6_rme_0:1;
        RBus_UInt32  fcic6_rme_1:1;
        RBus_UInt32  fcic6_rme_2:1;
        RBus_UInt32  fcic6_rme_3:1;
        RBus_UInt32  fcic6_rme_4:1;
        RBus_UInt32  fcic6_rme_5:1;
        RBus_UInt32  fcic6_rme_6:1;
        RBus_UInt32  fcic6_rme_7:1;
        RBus_UInt32  fcic6_rme_8:1;
        RBus_UInt32  fcic6_rme_9:1;
        RBus_UInt32  fcic6_rme_10:1;
        RBus_UInt32  fcic6_rme_11:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  fcic5_rme_0:1;
    };
}fcic_top_fcic_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic6_rm_0:4;
        RBus_UInt32  fcic6_rm_1:4;
        RBus_UInt32  fcic6_rm_2:4;
        RBus_UInt32  fcic6_rm_3:4;
        RBus_UInt32  fcic6_rm_4:4;
        RBus_UInt32  fcic6_rm_5:4;
        RBus_UInt32  fcic6_rm_6:4;
        RBus_UInt32  fcic6_rm_7:4;
    };
}fcic_top_fcic_bist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic6_rm_8:4;
        RBus_UInt32  fcic6_rm_9:4;
        RBus_UInt32  fcic6_rm_10:4;
        RBus_UInt32  fcic6_rm_11:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  fcic5_rm_0:4;
        RBus_UInt32  fcic5_testrwm_0:1;
        RBus_UInt32  res2:3;
    };
}fcic_top_fcic_bist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fcic6_bist_fail_0:1;
        RBus_UInt32  fcic6_bist_fail_1:1;
        RBus_UInt32  fcic6_bist_fail_2:1;
        RBus_UInt32  fcic6_bist_fail_3:1;
        RBus_UInt32  fcic6_bist_fail_4:1;
        RBus_UInt32  fcic6_bist_fail_5:1;
        RBus_UInt32  fcic6_bist_fail_6:1;
        RBus_UInt32  fcic6_bist_fail_7:1;
        RBus_UInt32  fcic6_bist_fail_8:1;
        RBus_UInt32  fcic6_bist_fail_9:1;
        RBus_UInt32  fcic6_bist_fail_10:1;
        RBus_UInt32  fcic6_bist_fail_11:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  fcic5_bist_fail_0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  fcic6_drf_bist_fail_0:1;
        RBus_UInt32  fcic6_drf_bist_fail_1:1;
        RBus_UInt32  fcic6_drf_bist_fail_2:1;
        RBus_UInt32  fcic6_drf_bist_fail_3:1;
        RBus_UInt32  fcic6_drf_bist_fail_4:1;
        RBus_UInt32  fcic6_drf_bist_fail_5:1;
        RBus_UInt32  fcic6_drf_bist_fail_6:1;
        RBus_UInt32  fcic6_drf_bist_fail_7:1;
        RBus_UInt32  fcic6_drf_bist_fail_8:1;
        RBus_UInt32  fcic6_drf_bist_fail_9:1;
        RBus_UInt32  fcic6_drf_bist_fail_10:1;
        RBus_UInt32  fcic6_drf_bist_fail_11:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  fcic5_drf_bist_fail_0:1;
    };
}fcic_top_fcic_bist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fcic6_bist_fail_12:1;
        RBus_UInt32  fcic6_bist_fail_13:1;
        RBus_UInt32  fcic6_bist_fail_14:1;
        RBus_UInt32  fcic6_bist_fail_15:1;
        RBus_UInt32  fcic6_bist_fail_16:1;
        RBus_UInt32  fcic6_bist_fail_17:1;
        RBus_UInt32  fcic6_bist_fail_18:1;
        RBus_UInt32  fcic6_bist_fail_19:1;
        RBus_UInt32  fcic6_bist_fail_20:1;
        RBus_UInt32  fcic6_bist_fail_21:1;
        RBus_UInt32  fcic6_bist_fail_22:1;
        RBus_UInt32  fcic6_bist_fail_23:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  fcic6_drf_bist_fail_12:1;
        RBus_UInt32  fcic6_drf_bist_fail_13:1;
        RBus_UInt32  fcic6_drf_bist_fail_14:1;
        RBus_UInt32  fcic6_drf_bist_fail_15:1;
        RBus_UInt32  fcic6_drf_bist_fail_16:1;
        RBus_UInt32  fcic6_drf_bist_fail_17:1;
        RBus_UInt32  fcic6_drf_bist_fail_18:1;
        RBus_UInt32  fcic6_drf_bist_fail_19:1;
        RBus_UInt32  fcic6_drf_bist_fail_20:1;
        RBus_UInt32  fcic6_drf_bist_fail_21:1;
        RBus_UInt32  fcic6_drf_bist_fail_22:1;
        RBus_UInt32  fcic6_drf_bist_fail_23:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:1;
    };
}fcic_top_fcic_bist_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg000:8;
        RBus_UInt32  fcic_reg001:8;
        RBus_UInt32  fcic_reg002:8;
        RBus_UInt32  fcic_reg003:8;
    };
}fcic_top_fcic_reg000_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg004:8;
        RBus_UInt32  fcic_reg005:8;
        RBus_UInt32  fcic_reg006:8;
        RBus_UInt32  fcic_reg007:8;
    };
}fcic_top_fcic_reg004_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg008:8;
        RBus_UInt32  fcic_reg009:8;
        RBus_UInt32  fcic_reg010:8;
        RBus_UInt32  fcic_reg011:8;
    };
}fcic_top_fcic_reg008_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg012:8;
        RBus_UInt32  fcic_reg013:8;
        RBus_UInt32  fcic_reg014:8;
        RBus_UInt32  fcic_reg015:8;
    };
}fcic_top_fcic_reg00c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg016:8;
        RBus_UInt32  fcic_reg017:8;
        RBus_UInt32  fcic_reg018:8;
        RBus_UInt32  fcic_reg019:8;
    };
}fcic_top_fcic_reg010_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg020:8;
        RBus_UInt32  fcic_reg021:8;
        RBus_UInt32  fcic_reg022:8;
        RBus_UInt32  fcic_reg023:8;
    };
}fcic_top_fcic_reg014_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg024:8;
        RBus_UInt32  fcic_reg025:8;
        RBus_UInt32  fcic_reg026:8;
        RBus_UInt32  fcic_reg027:8;
    };
}fcic_top_fcic_reg018_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg028:8;
        RBus_UInt32  fcic_reg029:8;
        RBus_UInt32  fcic_reg030:8;
        RBus_UInt32  fcic_reg031:8;
    };
}fcic_top_fcic_reg01c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg032:8;
        RBus_UInt32  fcic_reg033:8;
        RBus_UInt32  fcic_reg034:8;
        RBus_UInt32  fcic_reg035:8;
    };
}fcic_top_fcic_reg020_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg036:8;
        RBus_UInt32  fcic_reg037:8;
        RBus_UInt32  fcic_reg038:8;
        RBus_UInt32  fcic_reg039:8;
    };
}fcic_top_fcic_reg024_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg040:8;
        RBus_UInt32  fcic_reg041:8;
        RBus_UInt32  fcic_reg042:8;
        RBus_UInt32  res1:8;
    };
}fcic_top_fcic_reg028_RBUS;

#else //apply LITTLE_ENDIAN

//======FCIC_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_rbus_if_enable:1;
        RBus_UInt32  dummy1802a7b0_31_1:31;
    };
}fcic_top_fcic_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_write_enable:1;
        RBus_UInt32  multi_access_en:1;
        RBus_UInt32  res1:30;
    };
}fcic_top_fcic_crtl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_addr:17;
        RBus_UInt32  flash_done:1;
        RBus_UInt32  res1:14;
    };
}fcic_top_fcic_flash_if_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_0:32;
    };
}fcic_top_fcic_flash_if_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_1:32;
    };
}fcic_top_fcic_flash_if_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_2:32;
    };
}fcic_top_fcic_flash_if_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_data_3:32;
    };
}fcic_top_fcic_flash_if_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_dbg_mux:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  flash_dbg_rd_en:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  rd_addr:15;
        RBus_UInt32  res3:1;
    };
}fcic_top_fcic_flash_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_rdata_0:32;
    };
}fcic_top_fcic_flash_dbg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  color_1:2;
        RBus_UInt32  color_2:2;
        RBus_UInt32  color_3:2;
        RBus_UInt32  color_4:2;
        RBus_UInt32  fcic_io_reg_en:1;
        RBus_UInt32  mplus_en:1;
        RBus_UInt32  res1:22;
    };
}fcic_top_fcic_io_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  fcic1_rm_1:4;
        RBus_UInt32  fcic1_rm_0:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  fcic1_rme_1:1;
        RBus_UInt32  fcic1_rme_0:1;
        RBus_UInt32  res3:15;
        RBus_UInt32  fcic1_test1:1;
        RBus_UInt32  fcic1_ls:1;
    };
}fcic_top_fcic_bisr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fcic1_drf_bisr_fail_1:1;
        RBus_UInt32  fcic1_drf_bisr_fail_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  fcic1_bisr_fail_1:1;
        RBus_UInt32  fcic1_bisr_fail_0:1;
        RBus_UInt32  res3:25;
        RBus_UInt32  fcic1_bisr_repaired:1;
    };
}fcic_top_fcic_bisr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic5_rme_0:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  fcic6_rme_11:1;
        RBus_UInt32  fcic6_rme_10:1;
        RBus_UInt32  fcic6_rme_9:1;
        RBus_UInt32  fcic6_rme_8:1;
        RBus_UInt32  fcic6_rme_7:1;
        RBus_UInt32  fcic6_rme_6:1;
        RBus_UInt32  fcic6_rme_5:1;
        RBus_UInt32  fcic6_rme_4:1;
        RBus_UInt32  fcic6_rme_3:1;
        RBus_UInt32  fcic6_rme_2:1;
        RBus_UInt32  fcic6_rme_1:1;
        RBus_UInt32  fcic6_rme_0:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  fcic5_test1:1;
        RBus_UInt32  fcic5_ls:1;
        RBus_UInt32  fcic6_test1:1;
        RBus_UInt32  fcic6_ls:1;
    };
}fcic_top_fcic_bist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic6_rm_7:4;
        RBus_UInt32  fcic6_rm_6:4;
        RBus_UInt32  fcic6_rm_5:4;
        RBus_UInt32  fcic6_rm_4:4;
        RBus_UInt32  fcic6_rm_3:4;
        RBus_UInt32  fcic6_rm_2:4;
        RBus_UInt32  fcic6_rm_1:4;
        RBus_UInt32  fcic6_rm_0:4;
    };
}fcic_top_fcic_bist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  fcic5_testrwm_0:1;
        RBus_UInt32  fcic5_rm_0:4;
        RBus_UInt32  res2:8;
        RBus_UInt32  fcic6_rm_11:4;
        RBus_UInt32  fcic6_rm_10:4;
        RBus_UInt32  fcic6_rm_9:4;
        RBus_UInt32  fcic6_rm_8:4;
    };
}fcic_top_fcic_bist_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic5_drf_bist_fail_0:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  fcic6_drf_bist_fail_11:1;
        RBus_UInt32  fcic6_drf_bist_fail_10:1;
        RBus_UInt32  fcic6_drf_bist_fail_9:1;
        RBus_UInt32  fcic6_drf_bist_fail_8:1;
        RBus_UInt32  fcic6_drf_bist_fail_7:1;
        RBus_UInt32  fcic6_drf_bist_fail_6:1;
        RBus_UInt32  fcic6_drf_bist_fail_5:1;
        RBus_UInt32  fcic6_drf_bist_fail_4:1;
        RBus_UInt32  fcic6_drf_bist_fail_3:1;
        RBus_UInt32  fcic6_drf_bist_fail_2:1;
        RBus_UInt32  fcic6_drf_bist_fail_1:1;
        RBus_UInt32  fcic6_drf_bist_fail_0:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  fcic5_bist_fail_0:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  fcic6_bist_fail_11:1;
        RBus_UInt32  fcic6_bist_fail_10:1;
        RBus_UInt32  fcic6_bist_fail_9:1;
        RBus_UInt32  fcic6_bist_fail_8:1;
        RBus_UInt32  fcic6_bist_fail_7:1;
        RBus_UInt32  fcic6_bist_fail_6:1;
        RBus_UInt32  fcic6_bist_fail_5:1;
        RBus_UInt32  fcic6_bist_fail_4:1;
        RBus_UInt32  fcic6_bist_fail_3:1;
        RBus_UInt32  fcic6_bist_fail_2:1;
        RBus_UInt32  fcic6_bist_fail_1:1;
        RBus_UInt32  fcic6_bist_fail_0:1;
        RBus_UInt32  res4:1;
    };
}fcic_top_fcic_bist_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  fcic6_drf_bist_fail_23:1;
        RBus_UInt32  fcic6_drf_bist_fail_22:1;
        RBus_UInt32  fcic6_drf_bist_fail_21:1;
        RBus_UInt32  fcic6_drf_bist_fail_20:1;
        RBus_UInt32  fcic6_drf_bist_fail_19:1;
        RBus_UInt32  fcic6_drf_bist_fail_18:1;
        RBus_UInt32  fcic6_drf_bist_fail_17:1;
        RBus_UInt32  fcic6_drf_bist_fail_16:1;
        RBus_UInt32  fcic6_drf_bist_fail_15:1;
        RBus_UInt32  fcic6_drf_bist_fail_14:1;
        RBus_UInt32  fcic6_drf_bist_fail_13:1;
        RBus_UInt32  fcic6_drf_bist_fail_12:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  fcic6_bist_fail_23:1;
        RBus_UInt32  fcic6_bist_fail_22:1;
        RBus_UInt32  fcic6_bist_fail_21:1;
        RBus_UInt32  fcic6_bist_fail_20:1;
        RBus_UInt32  fcic6_bist_fail_19:1;
        RBus_UInt32  fcic6_bist_fail_18:1;
        RBus_UInt32  fcic6_bist_fail_17:1;
        RBus_UInt32  fcic6_bist_fail_16:1;
        RBus_UInt32  fcic6_bist_fail_15:1;
        RBus_UInt32  fcic6_bist_fail_14:1;
        RBus_UInt32  fcic6_bist_fail_13:1;
        RBus_UInt32  fcic6_bist_fail_12:1;
        RBus_UInt32  res6:1;
    };
}fcic_top_fcic_bist_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg003:8;
        RBus_UInt32  fcic_reg002:8;
        RBus_UInt32  fcic_reg001:8;
        RBus_UInt32  fcic_reg000:8;
    };
}fcic_top_fcic_reg000_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg007:8;
        RBus_UInt32  fcic_reg006:8;
        RBus_UInt32  fcic_reg005:8;
        RBus_UInt32  fcic_reg004:8;
    };
}fcic_top_fcic_reg004_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg011:8;
        RBus_UInt32  fcic_reg010:8;
        RBus_UInt32  fcic_reg009:8;
        RBus_UInt32  fcic_reg008:8;
    };
}fcic_top_fcic_reg008_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg015:8;
        RBus_UInt32  fcic_reg014:8;
        RBus_UInt32  fcic_reg013:8;
        RBus_UInt32  fcic_reg012:8;
    };
}fcic_top_fcic_reg00c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg019:8;
        RBus_UInt32  fcic_reg018:8;
        RBus_UInt32  fcic_reg017:8;
        RBus_UInt32  fcic_reg016:8;
    };
}fcic_top_fcic_reg010_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg023:8;
        RBus_UInt32  fcic_reg022:8;
        RBus_UInt32  fcic_reg021:8;
        RBus_UInt32  fcic_reg020:8;
    };
}fcic_top_fcic_reg014_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg027:8;
        RBus_UInt32  fcic_reg026:8;
        RBus_UInt32  fcic_reg025:8;
        RBus_UInt32  fcic_reg024:8;
    };
}fcic_top_fcic_reg018_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg031:8;
        RBus_UInt32  fcic_reg030:8;
        RBus_UInt32  fcic_reg029:8;
        RBus_UInt32  fcic_reg028:8;
    };
}fcic_top_fcic_reg01c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg035:8;
        RBus_UInt32  fcic_reg034:8;
        RBus_UInt32  fcic_reg033:8;
        RBus_UInt32  fcic_reg032:8;
    };
}fcic_top_fcic_reg020_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fcic_reg039:8;
        RBus_UInt32  fcic_reg038:8;
        RBus_UInt32  fcic_reg037:8;
        RBus_UInt32  fcic_reg036:8;
    };
}fcic_top_fcic_reg024_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  fcic_reg042:8;
        RBus_UInt32  fcic_reg041:8;
        RBus_UInt32  fcic_reg040:8;
    };
}fcic_top_fcic_reg028_RBUS;




#endif 


#endif 
