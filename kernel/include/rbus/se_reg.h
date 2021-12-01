/**
* @file Merlin5_DesignSpec_SE_Arch_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SE_REG_H_
#define _RBUS_SE_REG_H_

#include "rbus_types.h"



//  SE Register Address
#define  SE_CMDBASE_0                                                           0x1800C000
#define  SE_CMDBASE_0_reg_addr                                                   "0xB800C000"
#define  SE_CMDBASE_0_reg                                                        0xB800C000
#define  SE_CMDBASE_0_inst_addr                                                  "0x0000"
#define  set_SE_CMDBASE_0_reg(data)                                              (*((volatile unsigned int*)SE_CMDBASE_0_reg)=data)
#define  get_SE_CMDBASE_0_reg                                                    (*((volatile unsigned int*)SE_CMDBASE_0_reg))
#define  SE_CMDBASE_0_base_shift                                                 (4)
#define  SE_CMDBASE_0_base_mask                                                  (0xFFFFFFF0)
#define  SE_CMDBASE_0_base(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDBASE_0_get_base(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_CMDBASE_1                                                           0x1800C004
#define  SE_CMDBASE_1_reg_addr                                                   "0xB800C004"
#define  SE_CMDBASE_1_reg                                                        0xB800C004
#define  SE_CMDBASE_1_inst_addr                                                  "0x0001"
#define  set_SE_CMDBASE_1_reg(data)                                              (*((volatile unsigned int*)SE_CMDBASE_1_reg)=data)
#define  get_SE_CMDBASE_1_reg                                                    (*((volatile unsigned int*)SE_CMDBASE_1_reg))
#define  SE_CMDBASE_1_base_shift                                                 (4)
#define  SE_CMDBASE_1_base_mask                                                  (0xFFFFFFF0)
#define  SE_CMDBASE_1_base(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDBASE_1_get_base(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_CMDLMT_0                                                            0x1800C010
#define  SE_CMDLMT_0_reg_addr                                                    "0xB800C010"
#define  SE_CMDLMT_0_reg                                                         0xB800C010
#define  SE_CMDLMT_0_inst_addr                                                   "0x0002"
#define  set_SE_CMDLMT_0_reg(data)                                               (*((volatile unsigned int*)SE_CMDLMT_0_reg)=data)
#define  get_SE_CMDLMT_0_reg                                                     (*((volatile unsigned int*)SE_CMDLMT_0_reg))
#define  SE_CMDLMT_0_limit_shift                                                 (4)
#define  SE_CMDLMT_0_limit_mask                                                  (0xFFFFFFF0)
#define  SE_CMDLMT_0_limit(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDLMT_0_get_limit(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_CMDLMT_1                                                            0x1800C014
#define  SE_CMDLMT_1_reg_addr                                                    "0xB800C014"
#define  SE_CMDLMT_1_reg                                                         0xB800C014
#define  SE_CMDLMT_1_inst_addr                                                   "0x0003"
#define  set_SE_CMDLMT_1_reg(data)                                               (*((volatile unsigned int*)SE_CMDLMT_1_reg)=data)
#define  get_SE_CMDLMT_1_reg                                                     (*((volatile unsigned int*)SE_CMDLMT_1_reg))
#define  SE_CMDLMT_1_limit_shift                                                 (4)
#define  SE_CMDLMT_1_limit_mask                                                  (0xFFFFFFF0)
#define  SE_CMDLMT_1_limit(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDLMT_1_get_limit(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_CMDRPTR_0                                                           0x1800C020
#define  SE_CMDRPTR_0_reg_addr                                                   "0xB800C020"
#define  SE_CMDRPTR_0_reg                                                        0xB800C020
#define  SE_CMDRPTR_0_inst_addr                                                  "0x0004"
#define  set_SE_CMDRPTR_0_reg(data)                                              (*((volatile unsigned int*)SE_CMDRPTR_0_reg)=data)
#define  get_SE_CMDRPTR_0_reg                                                    (*((volatile unsigned int*)SE_CMDRPTR_0_reg))
#define  SE_CMDRPTR_0_rptr_shift                                                 (4)
#define  SE_CMDRPTR_0_rptr_mask                                                  (0xFFFFFFF0)
#define  SE_CMDRPTR_0_rptr(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDRPTR_0_get_rptr(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_CMDRPTR_1                                                           0x1800C024
#define  SE_CMDRPTR_1_reg_addr                                                   "0xB800C024"
#define  SE_CMDRPTR_1_reg                                                        0xB800C024
#define  SE_CMDRPTR_1_inst_addr                                                  "0x0005"
#define  set_SE_CMDRPTR_1_reg(data)                                              (*((volatile unsigned int*)SE_CMDRPTR_1_reg)=data)
#define  get_SE_CMDRPTR_1_reg                                                    (*((volatile unsigned int*)SE_CMDRPTR_1_reg))
#define  SE_CMDRPTR_1_rptr_shift                                                 (4)
#define  SE_CMDRPTR_1_rptr_mask                                                  (0xFFFFFFF0)
#define  SE_CMDRPTR_1_rptr(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDRPTR_1_get_rptr(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_CMDWPTR_0                                                           0x1800C030
#define  SE_CMDWPTR_0_reg_addr                                                   "0xB800C030"
#define  SE_CMDWPTR_0_reg                                                        0xB800C030
#define  SE_CMDWPTR_0_inst_addr                                                  "0x0006"
#define  set_SE_CMDWPTR_0_reg(data)                                              (*((volatile unsigned int*)SE_CMDWPTR_0_reg)=data)
#define  get_SE_CMDWPTR_0_reg                                                    (*((volatile unsigned int*)SE_CMDWPTR_0_reg))
#define  SE_CMDWPTR_0_wptr_shift                                                 (4)
#define  SE_CMDWPTR_0_wptr_mask                                                  (0xFFFFFFF0)
#define  SE_CMDWPTR_0_wptr(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDWPTR_0_get_wptr(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_CMDWPTR_1                                                           0x1800C034
#define  SE_CMDWPTR_1_reg_addr                                                   "0xB800C034"
#define  SE_CMDWPTR_1_reg                                                        0xB800C034
#define  SE_CMDWPTR_1_inst_addr                                                  "0x0007"
#define  set_SE_CMDWPTR_1_reg(data)                                              (*((volatile unsigned int*)SE_CMDWPTR_1_reg)=data)
#define  get_SE_CMDWPTR_1_reg                                                    (*((volatile unsigned int*)SE_CMDWPTR_1_reg))
#define  SE_CMDWPTR_1_wptr_shift                                                 (4)
#define  SE_CMDWPTR_1_wptr_mask                                                  (0xFFFFFFF0)
#define  SE_CMDWPTR_1_wptr(data)                                                 (0xFFFFFFF0&((data)<<4))
#define  SE_CMDWPTR_1_get_wptr(data)                                             ((0xFFFFFFF0&(data))>>4)

#define  SE_SRWORDCNT_0                                                         0x1800C040
#define  SE_SRWORDCNT_0_reg_addr                                                 "0xB800C040"
#define  SE_SRWORDCNT_0_reg                                                      0xB800C040
#define  SE_SRWORDCNT_0_inst_addr                                                "0x0008"
#define  set_SE_SRWORDCNT_0_reg(data)                                            (*((volatile unsigned int*)SE_SRWORDCNT_0_reg)=data)
#define  get_SE_SRWORDCNT_0_reg                                                  (*((volatile unsigned int*)SE_SRWORDCNT_0_reg))
#define  SE_SRWORDCNT_0_srwordcnt_shift                                          (0)
#define  SE_SRWORDCNT_0_srwordcnt_mask                                           (0x0000007F)
#define  SE_SRWORDCNT_0_srwordcnt(data)                                          (0x0000007F&(data))
#define  SE_SRWORDCNT_0_get_srwordcnt(data)                                      (0x0000007F&(data))

#define  SE_SRWORDCNT_1                                                         0x1800C044
#define  SE_SRWORDCNT_1_reg_addr                                                 "0xB800C044"
#define  SE_SRWORDCNT_1_reg                                                      0xB800C044
#define  SE_SRWORDCNT_1_inst_addr                                                "0x0009"
#define  set_SE_SRWORDCNT_1_reg(data)                                            (*((volatile unsigned int*)SE_SRWORDCNT_1_reg)=data)
#define  get_SE_SRWORDCNT_1_reg                                                  (*((volatile unsigned int*)SE_SRWORDCNT_1_reg))
#define  SE_SRWORDCNT_1_srwordcnt_shift                                          (0)
#define  SE_SRWORDCNT_1_srwordcnt_mask                                           (0x0000007F)
#define  SE_SRWORDCNT_1_srwordcnt(data)                                          (0x0000007F&(data))
#define  SE_SRWORDCNT_1_get_srwordcnt(data)                                      (0x0000007F&(data))

#define  SE_Q_Priority                                                          0x1800C050
#define  SE_Q_Priority_reg_addr                                                  "0xB800C050"
#define  SE_Q_Priority_reg                                                       0xB800C050
#define  SE_Q_Priority_inst_addr                                                 "0x000A"
#define  set_SE_Q_Priority_reg(data)                                             (*((volatile unsigned int*)SE_Q_Priority_reg)=data)
#define  get_SE_Q_Priority_reg                                                   (*((volatile unsigned int*)SE_Q_Priority_reg))
#define  SE_Q_Priority_disable_shift                                             (8)
#define  SE_Q_Priority_pri2_shift                                                (2)
#define  SE_Q_Priority_pri1_shift                                                (0)
#define  SE_Q_Priority_disable_mask                                              (0x00000F00)
#define  SE_Q_Priority_pri2_mask                                                 (0x0000000C)
#define  SE_Q_Priority_pri1_mask                                                 (0x00000003)
#define  SE_Q_Priority_disable(data)                                             (0x00000F00&((data)<<8))
#define  SE_Q_Priority_pri2(data)                                                (0x0000000C&((data)<<2))
#define  SE_Q_Priority_pri1(data)                                                (0x00000003&(data))
#define  SE_Q_Priority_get_disable(data)                                         ((0x00000F00&(data))>>8)
#define  SE_Q_Priority_get_pri2(data)                                            ((0x0000000C&(data))>>2)
#define  SE_Q_Priority_get_pri1(data)                                            (0x00000003&(data))

#define  SE_CLR_FMT_0                                                           0x1800C060
#define  SE_CLR_FMT_0_reg_addr                                                   "0xB800C060"
#define  SE_CLR_FMT_0_reg                                                        0xB800C060
#define  SE_CLR_FMT_0_inst_addr                                                  "0x000B"
#define  set_SE_CLR_FMT_0_reg(data)                                              (*((volatile unsigned int*)SE_CLR_FMT_0_reg)=data)
#define  get_SE_CLR_FMT_0_reg                                                    (*((volatile unsigned int*)SE_CLR_FMT_0_reg))
#define  SE_CLR_FMT_0_write_enable10_shift                                       (22)
#define  SE_CLR_FMT_0_rounding_en_shift                                          (21)
#define  SE_CLR_FMT_0_write_enable8_shift                                        (20)
#define  SE_CLR_FMT_0_big_endian_o_shift                                         (19)
#define  SE_CLR_FMT_0_write_enable7_shift                                        (18)
#define  SE_CLR_FMT_0_big_endian_i2_shift                                        (17)
#define  SE_CLR_FMT_0_write_enable6_shift                                        (16)
#define  SE_CLR_FMT_0_big_endian_i1_shift                                        (15)
#define  SE_CLR_FMT_0_write_enable5_shift                                        (14)
#define  SE_CLR_FMT_0_alpha_loc2_shift                                           (13)
#define  SE_CLR_FMT_0_write_enable3_shift                                        (8)
#define  SE_CLR_FMT_0_alpha_loc_rslt_shift                                       (7)
#define  SE_CLR_FMT_0_write_enable2_shift                                        (6)
#define  SE_CLR_FMT_0_alpha_loc_shift                                            (5)
#define  SE_CLR_FMT_0_write_enable1_shift                                        (4)
#define  SE_CLR_FMT_0_format_shift                                               (0)
#define  SE_CLR_FMT_0_write_enable10_mask                                        (0x00400000)
#define  SE_CLR_FMT_0_rounding_en_mask                                           (0x00200000)
#define  SE_CLR_FMT_0_write_enable8_mask                                         (0x00100000)
#define  SE_CLR_FMT_0_big_endian_o_mask                                          (0x00080000)
#define  SE_CLR_FMT_0_write_enable7_mask                                         (0x00040000)
#define  SE_CLR_FMT_0_big_endian_i2_mask                                         (0x00020000)
#define  SE_CLR_FMT_0_write_enable6_mask                                         (0x00010000)
#define  SE_CLR_FMT_0_big_endian_i1_mask                                         (0x00008000)
#define  SE_CLR_FMT_0_write_enable5_mask                                         (0x00004000)
#define  SE_CLR_FMT_0_alpha_loc2_mask                                            (0x00002000)
#define  SE_CLR_FMT_0_write_enable3_mask                                         (0x00000100)
#define  SE_CLR_FMT_0_alpha_loc_rslt_mask                                        (0x00000080)
#define  SE_CLR_FMT_0_write_enable2_mask                                         (0x00000040)
#define  SE_CLR_FMT_0_alpha_loc_mask                                             (0x00000020)
#define  SE_CLR_FMT_0_write_enable1_mask                                         (0x00000010)
#define  SE_CLR_FMT_0_format_mask                                                (0x0000000F)
#define  SE_CLR_FMT_0_write_enable10(data)                                       (0x00400000&((data)<<22))
#define  SE_CLR_FMT_0_rounding_en(data)                                          (0x00200000&((data)<<21))
#define  SE_CLR_FMT_0_write_enable8(data)                                        (0x00100000&((data)<<20))
#define  SE_CLR_FMT_0_big_endian_o(data)                                         (0x00080000&((data)<<19))
#define  SE_CLR_FMT_0_write_enable7(data)                                        (0x00040000&((data)<<18))
#define  SE_CLR_FMT_0_big_endian_i2(data)                                        (0x00020000&((data)<<17))
#define  SE_CLR_FMT_0_write_enable6(data)                                        (0x00010000&((data)<<16))
#define  SE_CLR_FMT_0_big_endian_i1(data)                                        (0x00008000&((data)<<15))
#define  SE_CLR_FMT_0_write_enable5(data)                                        (0x00004000&((data)<<14))
#define  SE_CLR_FMT_0_alpha_loc2(data)                                           (0x00002000&((data)<<13))
#define  SE_CLR_FMT_0_write_enable3(data)                                        (0x00000100&((data)<<8))
#define  SE_CLR_FMT_0_alpha_loc_rslt(data)                                       (0x00000080&((data)<<7))
#define  SE_CLR_FMT_0_write_enable2(data)                                        (0x00000040&((data)<<6))
#define  SE_CLR_FMT_0_alpha_loc(data)                                            (0x00000020&((data)<<5))
#define  SE_CLR_FMT_0_write_enable1(data)                                        (0x00000010&((data)<<4))
#define  SE_CLR_FMT_0_format(data)                                               (0x0000000F&(data))
#define  SE_CLR_FMT_0_get_write_enable10(data)                                   ((0x00400000&(data))>>22)
#define  SE_CLR_FMT_0_get_rounding_en(data)                                      ((0x00200000&(data))>>21)
#define  SE_CLR_FMT_0_get_write_enable8(data)                                    ((0x00100000&(data))>>20)
#define  SE_CLR_FMT_0_get_big_endian_o(data)                                     ((0x00080000&(data))>>19)
#define  SE_CLR_FMT_0_get_write_enable7(data)                                    ((0x00040000&(data))>>18)
#define  SE_CLR_FMT_0_get_big_endian_i2(data)                                    ((0x00020000&(data))>>17)
#define  SE_CLR_FMT_0_get_write_enable6(data)                                    ((0x00010000&(data))>>16)
#define  SE_CLR_FMT_0_get_big_endian_i1(data)                                    ((0x00008000&(data))>>15)
#define  SE_CLR_FMT_0_get_write_enable5(data)                                    ((0x00004000&(data))>>14)
#define  SE_CLR_FMT_0_get_alpha_loc2(data)                                       ((0x00002000&(data))>>13)
#define  SE_CLR_FMT_0_get_write_enable3(data)                                    ((0x00000100&(data))>>8)
#define  SE_CLR_FMT_0_get_alpha_loc_rslt(data)                                   ((0x00000080&(data))>>7)
#define  SE_CLR_FMT_0_get_write_enable2(data)                                    ((0x00000040&(data))>>6)
#define  SE_CLR_FMT_0_get_alpha_loc(data)                                        ((0x00000020&(data))>>5)
#define  SE_CLR_FMT_0_get_write_enable1(data)                                    ((0x00000010&(data))>>4)
#define  SE_CLR_FMT_0_get_format(data)                                           (0x0000000F&(data))

#define  SE_CLR_FMT_1                                                           0x1800C064
#define  SE_CLR_FMT_1_reg_addr                                                   "0xB800C064"
#define  SE_CLR_FMT_1_reg                                                        0xB800C064
#define  SE_CLR_FMT_1_inst_addr                                                  "0x000C"
#define  set_SE_CLR_FMT_1_reg(data)                                              (*((volatile unsigned int*)SE_CLR_FMT_1_reg)=data)
#define  get_SE_CLR_FMT_1_reg                                                    (*((volatile unsigned int*)SE_CLR_FMT_1_reg))
#define  SE_CLR_FMT_1_write_enable10_shift                                       (22)
#define  SE_CLR_FMT_1_rounding_en_shift                                          (21)
#define  SE_CLR_FMT_1_write_enable8_shift                                        (20)
#define  SE_CLR_FMT_1_big_endian_o_shift                                         (19)
#define  SE_CLR_FMT_1_write_enable7_shift                                        (18)
#define  SE_CLR_FMT_1_big_endian_i2_shift                                        (17)
#define  SE_CLR_FMT_1_write_enable6_shift                                        (16)
#define  SE_CLR_FMT_1_big_endian_i1_shift                                        (15)
#define  SE_CLR_FMT_1_write_enable5_shift                                        (14)
#define  SE_CLR_FMT_1_alpha_loc2_shift                                           (13)
#define  SE_CLR_FMT_1_write_enable3_shift                                        (8)
#define  SE_CLR_FMT_1_alpha_loc_rslt_shift                                       (7)
#define  SE_CLR_FMT_1_write_enable2_shift                                        (6)
#define  SE_CLR_FMT_1_alpha_loc_shift                                            (5)
#define  SE_CLR_FMT_1_write_enable1_shift                                        (4)
#define  SE_CLR_FMT_1_format_shift                                               (0)
#define  SE_CLR_FMT_1_write_enable10_mask                                        (0x00400000)
#define  SE_CLR_FMT_1_rounding_en_mask                                           (0x00200000)
#define  SE_CLR_FMT_1_write_enable8_mask                                         (0x00100000)
#define  SE_CLR_FMT_1_big_endian_o_mask                                          (0x00080000)
#define  SE_CLR_FMT_1_write_enable7_mask                                         (0x00040000)
#define  SE_CLR_FMT_1_big_endian_i2_mask                                         (0x00020000)
#define  SE_CLR_FMT_1_write_enable6_mask                                         (0x00010000)
#define  SE_CLR_FMT_1_big_endian_i1_mask                                         (0x00008000)
#define  SE_CLR_FMT_1_write_enable5_mask                                         (0x00004000)
#define  SE_CLR_FMT_1_alpha_loc2_mask                                            (0x00002000)
#define  SE_CLR_FMT_1_write_enable3_mask                                         (0x00000100)
#define  SE_CLR_FMT_1_alpha_loc_rslt_mask                                        (0x00000080)
#define  SE_CLR_FMT_1_write_enable2_mask                                         (0x00000040)
#define  SE_CLR_FMT_1_alpha_loc_mask                                             (0x00000020)
#define  SE_CLR_FMT_1_write_enable1_mask                                         (0x00000010)
#define  SE_CLR_FMT_1_format_mask                                                (0x0000000F)
#define  SE_CLR_FMT_1_write_enable10(data)                                       (0x00400000&((data)<<22))
#define  SE_CLR_FMT_1_rounding_en(data)                                          (0x00200000&((data)<<21))
#define  SE_CLR_FMT_1_write_enable8(data)                                        (0x00100000&((data)<<20))
#define  SE_CLR_FMT_1_big_endian_o(data)                                         (0x00080000&((data)<<19))
#define  SE_CLR_FMT_1_write_enable7(data)                                        (0x00040000&((data)<<18))
#define  SE_CLR_FMT_1_big_endian_i2(data)                                        (0x00020000&((data)<<17))
#define  SE_CLR_FMT_1_write_enable6(data)                                        (0x00010000&((data)<<16))
#define  SE_CLR_FMT_1_big_endian_i1(data)                                        (0x00008000&((data)<<15))
#define  SE_CLR_FMT_1_write_enable5(data)                                        (0x00004000&((data)<<14))
#define  SE_CLR_FMT_1_alpha_loc2(data)                                           (0x00002000&((data)<<13))
#define  SE_CLR_FMT_1_write_enable3(data)                                        (0x00000100&((data)<<8))
#define  SE_CLR_FMT_1_alpha_loc_rslt(data)                                       (0x00000080&((data)<<7))
#define  SE_CLR_FMT_1_write_enable2(data)                                        (0x00000040&((data)<<6))
#define  SE_CLR_FMT_1_alpha_loc(data)                                            (0x00000020&((data)<<5))
#define  SE_CLR_FMT_1_write_enable1(data)                                        (0x00000010&((data)<<4))
#define  SE_CLR_FMT_1_format(data)                                               (0x0000000F&(data))
#define  SE_CLR_FMT_1_get_write_enable10(data)                                   ((0x00400000&(data))>>22)
#define  SE_CLR_FMT_1_get_rounding_en(data)                                      ((0x00200000&(data))>>21)
#define  SE_CLR_FMT_1_get_write_enable8(data)                                    ((0x00100000&(data))>>20)
#define  SE_CLR_FMT_1_get_big_endian_o(data)                                     ((0x00080000&(data))>>19)
#define  SE_CLR_FMT_1_get_write_enable7(data)                                    ((0x00040000&(data))>>18)
#define  SE_CLR_FMT_1_get_big_endian_i2(data)                                    ((0x00020000&(data))>>17)
#define  SE_CLR_FMT_1_get_write_enable6(data)                                    ((0x00010000&(data))>>16)
#define  SE_CLR_FMT_1_get_big_endian_i1(data)                                    ((0x00008000&(data))>>15)
#define  SE_CLR_FMT_1_get_write_enable5(data)                                    ((0x00004000&(data))>>14)
#define  SE_CLR_FMT_1_get_alpha_loc2(data)                                       ((0x00002000&(data))>>13)
#define  SE_CLR_FMT_1_get_write_enable3(data)                                    ((0x00000100&(data))>>8)
#define  SE_CLR_FMT_1_get_alpha_loc_rslt(data)                                   ((0x00000080&(data))>>7)
#define  SE_CLR_FMT_1_get_write_enable2(data)                                    ((0x00000040&(data))>>6)
#define  SE_CLR_FMT_1_get_alpha_loc(data)                                        ((0x00000020&(data))>>5)
#define  SE_CLR_FMT_1_get_write_enable1(data)                                    ((0x00000010&(data))>>4)
#define  SE_CLR_FMT_1_get_format(data)                                           (0x0000000F&(data))

#define  SE_COLOR_KEY_0                                                         0x1800C070
#define  SE_COLOR_KEY_0_reg_addr                                                 "0xB800C070"
#define  SE_COLOR_KEY_0_reg                                                      0xB800C070
#define  SE_COLOR_KEY_0_inst_addr                                                "0x000D"
#define  set_SE_COLOR_KEY_0_reg(data)                                            (*((volatile unsigned int*)SE_COLOR_KEY_0_reg)=data)
#define  get_SE_COLOR_KEY_0_reg                                                  (*((volatile unsigned int*)SE_COLOR_KEY_0_reg))
#define  SE_COLOR_KEY_0_color_key_shift                                          (0)
#define  SE_COLOR_KEY_0_color_key_mask                                           (0x00FFFFFF)
#define  SE_COLOR_KEY_0_color_key(data)                                          (0x00FFFFFF&(data))
#define  SE_COLOR_KEY_0_get_color_key(data)                                      (0x00FFFFFF&(data))

#define  SE_COLOR_KEY_1                                                         0x1800C074
#define  SE_COLOR_KEY_1_reg_addr                                                 "0xB800C074"
#define  SE_COLOR_KEY_1_reg                                                      0xB800C074
#define  SE_COLOR_KEY_1_inst_addr                                                "0x000E"
#define  set_SE_COLOR_KEY_1_reg(data)                                            (*((volatile unsigned int*)SE_COLOR_KEY_1_reg)=data)
#define  get_SE_COLOR_KEY_1_reg                                                  (*((volatile unsigned int*)SE_COLOR_KEY_1_reg))
#define  SE_COLOR_KEY_1_color_key_shift                                          (0)
#define  SE_COLOR_KEY_1_color_key_mask                                           (0x00FFFFFF)
#define  SE_COLOR_KEY_1_color_key(data)                                          (0x00FFFFFF&(data))
#define  SE_COLOR_KEY_1_get_color_key(data)                                      (0x00FFFFFF&(data))

#define  SE_DST_COLOR_KEY_0                                                     0x1800C080
#define  SE_DST_COLOR_KEY_0_reg_addr                                             "0xB800C080"
#define  SE_DST_COLOR_KEY_0_reg                                                  0xB800C080
#define  SE_DST_COLOR_KEY_0_inst_addr                                            "0x000F"
#define  set_SE_DST_COLOR_KEY_0_reg(data)                                        (*((volatile unsigned int*)SE_DST_COLOR_KEY_0_reg)=data)
#define  get_SE_DST_COLOR_KEY_0_reg                                              (*((volatile unsigned int*)SE_DST_COLOR_KEY_0_reg))
#define  SE_DST_COLOR_KEY_0_dst_color_key_shift                                  (0)
#define  SE_DST_COLOR_KEY_0_dst_color_key_mask                                   (0x00FFFFFF)
#define  SE_DST_COLOR_KEY_0_dst_color_key(data)                                  (0x00FFFFFF&(data))
#define  SE_DST_COLOR_KEY_0_get_dst_color_key(data)                              (0x00FFFFFF&(data))

#define  SE_DST_COLOR_KEY_1                                                     0x1800C084
#define  SE_DST_COLOR_KEY_1_reg_addr                                             "0xB800C084"
#define  SE_DST_COLOR_KEY_1_reg                                                  0xB800C084
#define  SE_DST_COLOR_KEY_1_inst_addr                                            "0x0010"
#define  set_SE_DST_COLOR_KEY_1_reg(data)                                        (*((volatile unsigned int*)SE_DST_COLOR_KEY_1_reg)=data)
#define  get_SE_DST_COLOR_KEY_1_reg                                              (*((volatile unsigned int*)SE_DST_COLOR_KEY_1_reg))
#define  SE_DST_COLOR_KEY_1_dst_color_key_shift                                  (0)
#define  SE_DST_COLOR_KEY_1_dst_color_key_mask                                   (0x00FFFFFF)
#define  SE_DST_COLOR_KEY_1_dst_color_key(data)                                  (0x00FFFFFF&(data))
#define  SE_DST_COLOR_KEY_1_get_dst_color_key(data)                              (0x00FFFFFF&(data))

#define  SE_SRC_COLOR_0                                                         0x1800C0D0
#define  SE_SRC_COLOR_0_reg_addr                                                 "0xB800C0D0"
#define  SE_SRC_COLOR_0_reg                                                      0xB800C0D0
#define  SE_SRC_COLOR_0_inst_addr                                                "0x0011"
#define  set_SE_SRC_COLOR_0_reg(data)                                            (*((volatile unsigned int*)SE_SRC_COLOR_0_reg)=data)
#define  get_SE_SRC_COLOR_0_reg                                                  (*((volatile unsigned int*)SE_SRC_COLOR_0_reg))
#define  SE_SRC_COLOR_0_src_color_shift                                          (0)
#define  SE_SRC_COLOR_0_src_color_mask                                           (0xFFFFFFFF)
#define  SE_SRC_COLOR_0_src_color(data)                                          (0xFFFFFFFF&(data))
#define  SE_SRC_COLOR_0_get_src_color(data)                                      (0xFFFFFFFF&(data))

#define  SE_SRC_COLOR_1                                                         0x1800C0D4
#define  SE_SRC_COLOR_1_reg_addr                                                 "0xB800C0D4"
#define  SE_SRC_COLOR_1_reg                                                      0xB800C0D4
#define  SE_SRC_COLOR_1_inst_addr                                                "0x0012"
#define  set_SE_SRC_COLOR_1_reg(data)                                            (*((volatile unsigned int*)SE_SRC_COLOR_1_reg)=data)
#define  get_SE_SRC_COLOR_1_reg                                                  (*((volatile unsigned int*)SE_SRC_COLOR_1_reg))
#define  SE_SRC_COLOR_1_src_color_shift                                          (0)
#define  SE_SRC_COLOR_1_src_color_mask                                           (0xFFFFFFFF)
#define  SE_SRC_COLOR_1_src_color(data)                                          (0xFFFFFFFF&(data))
#define  SE_SRC_COLOR_1_get_src_color(data)                                      (0xFFFFFFFF&(data))

#define  SE_SRC_ALPHA_0                                                         0x1800C0E0
#define  SE_SRC_ALPHA_0_reg_addr                                                 "0xB800C0E0"
#define  SE_SRC_ALPHA_0_reg                                                      0xB800C0E0
#define  SE_SRC_ALPHA_0_inst_addr                                                "0x0013"
#define  set_SE_SRC_ALPHA_0_reg(data)                                            (*((volatile unsigned int*)SE_SRC_ALPHA_0_reg)=data)
#define  get_SE_SRC_ALPHA_0_reg                                                  (*((volatile unsigned int*)SE_SRC_ALPHA_0_reg))
#define  SE_SRC_ALPHA_0_src_alpha_shift                                          (0)
#define  SE_SRC_ALPHA_0_src_alpha_mask                                           (0x000000FF)
#define  SE_SRC_ALPHA_0_src_alpha(data)                                          (0x000000FF&(data))
#define  SE_SRC_ALPHA_0_get_src_alpha(data)                                      (0x000000FF&(data))

#define  SE_SRC_ALPHA_1                                                         0x1800C0E4
#define  SE_SRC_ALPHA_1_reg_addr                                                 "0xB800C0E4"
#define  SE_SRC_ALPHA_1_reg                                                      0xB800C0E4
#define  SE_SRC_ALPHA_1_inst_addr                                                "0x0014"
#define  set_SE_SRC_ALPHA_1_reg(data)                                            (*((volatile unsigned int*)SE_SRC_ALPHA_1_reg)=data)
#define  get_SE_SRC_ALPHA_1_reg                                                  (*((volatile unsigned int*)SE_SRC_ALPHA_1_reg))
#define  SE_SRC_ALPHA_1_src_alpha_shift                                          (0)
#define  SE_SRC_ALPHA_1_src_alpha_mask                                           (0x000000FF)
#define  SE_SRC_ALPHA_1_src_alpha(data)                                          (0x000000FF&(data))
#define  SE_SRC_ALPHA_1_get_src_alpha(data)                                      (0x000000FF&(data))

#define  SE_DEST_ALPHA_0                                                        0x1800C0F0
#define  SE_DEST_ALPHA_0_reg_addr                                                "0xB800C0F0"
#define  SE_DEST_ALPHA_0_reg                                                     0xB800C0F0
#define  SE_DEST_ALPHA_0_inst_addr                                               "0x0015"
#define  set_SE_DEST_ALPHA_0_reg(data)                                           (*((volatile unsigned int*)SE_DEST_ALPHA_0_reg)=data)
#define  get_SE_DEST_ALPHA_0_reg                                                 (*((volatile unsigned int*)SE_DEST_ALPHA_0_reg))
#define  SE_DEST_ALPHA_0_dest_alpha_shift                                        (0)
#define  SE_DEST_ALPHA_0_dest_alpha_mask                                         (0x000000FF)
#define  SE_DEST_ALPHA_0_dest_alpha(data)                                        (0x000000FF&(data))
#define  SE_DEST_ALPHA_0_get_dest_alpha(data)                                    (0x000000FF&(data))

#define  SE_DEST_ALPHA_1                                                        0x1800C0F4
#define  SE_DEST_ALPHA_1_reg_addr                                                "0xB800C0F4"
#define  SE_DEST_ALPHA_1_reg                                                     0xB800C0F4
#define  SE_DEST_ALPHA_1_inst_addr                                               "0x0016"
#define  set_SE_DEST_ALPHA_1_reg(data)                                           (*((volatile unsigned int*)SE_DEST_ALPHA_1_reg)=data)
#define  get_SE_DEST_ALPHA_1_reg                                                 (*((volatile unsigned int*)SE_DEST_ALPHA_1_reg))
#define  SE_DEST_ALPHA_1_dest_alpha_shift                                        (0)
#define  SE_DEST_ALPHA_1_dest_alpha_mask                                         (0x000000FF)
#define  SE_DEST_ALPHA_1_dest_alpha(data)                                        (0x000000FF&(data))
#define  SE_DEST_ALPHA_1_get_dest_alpha(data)                                    (0x000000FF&(data))

#define  SE_RSLT_ALPHA_0                                                        0x1800C100
#define  SE_RSLT_ALPHA_0_reg_addr                                                "0xB800C100"
#define  SE_RSLT_ALPHA_0_reg                                                     0xB800C100
#define  SE_RSLT_ALPHA_0_inst_addr                                               "0x0017"
#define  set_SE_RSLT_ALPHA_0_reg(data)                                           (*((volatile unsigned int*)SE_RSLT_ALPHA_0_reg)=data)
#define  get_SE_RSLT_ALPHA_0_reg                                                 (*((volatile unsigned int*)SE_RSLT_ALPHA_0_reg))
#define  SE_RSLT_ALPHA_0_rslt_alpha_shift                                        (0)
#define  SE_RSLT_ALPHA_0_rslt_alpha_mask                                         (0x000000FF)
#define  SE_RSLT_ALPHA_0_rslt_alpha(data)                                        (0x000000FF&(data))
#define  SE_RSLT_ALPHA_0_get_rslt_alpha(data)                                    (0x000000FF&(data))

#define  SE_RSLT_ALPHA_1                                                        0x1800C104
#define  SE_RSLT_ALPHA_1_reg_addr                                                "0xB800C104"
#define  SE_RSLT_ALPHA_1_reg                                                     0xB800C104
#define  SE_RSLT_ALPHA_1_inst_addr                                               "0x0018"
#define  set_SE_RSLT_ALPHA_1_reg(data)                                           (*((volatile unsigned int*)SE_RSLT_ALPHA_1_reg)=data)
#define  get_SE_RSLT_ALPHA_1_reg                                                 (*((volatile unsigned int*)SE_RSLT_ALPHA_1_reg))
#define  SE_RSLT_ALPHA_1_rslt_alpha_shift                                        (0)
#define  SE_RSLT_ALPHA_1_rslt_alpha_mask                                         (0x000000FF)
#define  SE_RSLT_ALPHA_1_rslt_alpha(data)                                        (0x000000FF&(data))
#define  SE_RSLT_ALPHA_1_get_rslt_alpha(data)                                    (0x000000FF&(data))

#define  SE_RSLT_COLOR_0                                                        0x1800C110
#define  SE_RSLT_COLOR_0_reg_addr                                                "0xB800C110"
#define  SE_RSLT_COLOR_0_reg                                                     0xB800C110
#define  SE_RSLT_COLOR_0_inst_addr                                               "0x0019"
#define  set_SE_RSLT_COLOR_0_reg(data)                                           (*((volatile unsigned int*)SE_RSLT_COLOR_0_reg)=data)
#define  get_SE_RSLT_COLOR_0_reg                                                 (*((volatile unsigned int*)SE_RSLT_COLOR_0_reg))
#define  SE_RSLT_COLOR_0_rslt_color_shift                                        (0)
#define  SE_RSLT_COLOR_0_rslt_color_mask                                         (0xFFFFFFFF)
#define  SE_RSLT_COLOR_0_rslt_color(data)                                        (0xFFFFFFFF&(data))
#define  SE_RSLT_COLOR_0_get_rslt_color(data)                                    (0xFFFFFFFF&(data))

#define  SE_RSLT_COLOR_1                                                        0x1800C114
#define  SE_RSLT_COLOR_1_reg_addr                                                "0xB800C114"
#define  SE_RSLT_COLOR_1_reg                                                     0xB800C114
#define  SE_RSLT_COLOR_1_inst_addr                                               "0x001A"
#define  set_SE_RSLT_COLOR_1_reg(data)                                           (*((volatile unsigned int*)SE_RSLT_COLOR_1_reg)=data)
#define  get_SE_RSLT_COLOR_1_reg                                                 (*((volatile unsigned int*)SE_RSLT_COLOR_1_reg))
#define  SE_RSLT_COLOR_1_rslt_color_shift                                        (0)
#define  SE_RSLT_COLOR_1_rslt_color_mask                                         (0xFFFFFFFF)
#define  SE_RSLT_COLOR_1_rslt_color(data)                                        (0xFFFFFFFF&(data))
#define  SE_RSLT_COLOR_1_get_rslt_color(data)                                    (0xFFFFFFFF&(data))

#define  SE_BADDR1_0                                                            0x1800C180
#define  SE_BADDR1_0_reg_addr                                                    "0xB800C180"
#define  SE_BADDR1_0_reg                                                         0xB800C180
#define  SE_BADDR1_0_inst_addr                                                   "0x001B"
#define  set_SE_BADDR1_0_reg(data)                                               (*((volatile unsigned int*)SE_BADDR1_0_reg)=data)
#define  get_SE_BADDR1_0_reg                                                     (*((volatile unsigned int*)SE_BADDR1_0_reg))
#define  SE_BADDR1_0_baddr_shift                                                 (0)
#define  SE_BADDR1_0_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR1_0_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR1_0_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_BADDR1_1                                                            0x1800C184
#define  SE_BADDR1_1_reg_addr                                                    "0xB800C184"
#define  SE_BADDR1_1_reg                                                         0xB800C184
#define  SE_BADDR1_1_inst_addr                                                   "0x001C"
#define  set_SE_BADDR1_1_reg(data)                                               (*((volatile unsigned int*)SE_BADDR1_1_reg)=data)
#define  get_SE_BADDR1_1_reg                                                     (*((volatile unsigned int*)SE_BADDR1_1_reg))
#define  SE_BADDR1_1_baddr_shift                                                 (0)
#define  SE_BADDR1_1_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR1_1_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR1_1_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_BADDR1_2                                                            0x1800C188
#define  SE_BADDR1_2_reg_addr                                                    "0xB800C188"
#define  SE_BADDR1_2_reg                                                         0xB800C188
#define  SE_BADDR1_2_inst_addr                                                   "0x001D"
#define  set_SE_BADDR1_2_reg(data)                                               (*((volatile unsigned int*)SE_BADDR1_2_reg)=data)
#define  get_SE_BADDR1_2_reg                                                     (*((volatile unsigned int*)SE_BADDR1_2_reg))
#define  SE_BADDR1_2_baddr_shift                                                 (0)
#define  SE_BADDR1_2_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR1_2_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR1_2_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_BADDR1_3                                                            0x1800C18C
#define  SE_BADDR1_3_reg_addr                                                    "0xB800C18C"
#define  SE_BADDR1_3_reg                                                         0xB800C18C
#define  SE_BADDR1_3_inst_addr                                                   "0x001E"
#define  set_SE_BADDR1_3_reg(data)                                               (*((volatile unsigned int*)SE_BADDR1_3_reg)=data)
#define  get_SE_BADDR1_3_reg                                                     (*((volatile unsigned int*)SE_BADDR1_3_reg))
#define  SE_BADDR1_3_baddr_shift                                                 (0)
#define  SE_BADDR1_3_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR1_3_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR1_3_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_PITCH1_0                                                            0x1800C190
#define  SE_PITCH1_0_reg_addr                                                    "0xB800C190"
#define  SE_PITCH1_0_reg                                                         0xB800C190
#define  SE_PITCH1_0_inst_addr                                                   "0x001F"
#define  set_SE_PITCH1_0_reg(data)                                               (*((volatile unsigned int*)SE_PITCH1_0_reg)=data)
#define  get_SE_PITCH1_0_reg                                                     (*((volatile unsigned int*)SE_PITCH1_0_reg))
#define  SE_PITCH1_0_interleave_shift                                            (16)
#define  SE_PITCH1_0_pitch_shift                                                 (0)
#define  SE_PITCH1_0_interleave_mask                                             (0x00010000)
#define  SE_PITCH1_0_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH1_0_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH1_0_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH1_0_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH1_0_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_PITCH1_1                                                            0x1800C194
#define  SE_PITCH1_1_reg_addr                                                    "0xB800C194"
#define  SE_PITCH1_1_reg                                                         0xB800C194
#define  SE_PITCH1_1_inst_addr                                                   "0x0020"
#define  set_SE_PITCH1_1_reg(data)                                               (*((volatile unsigned int*)SE_PITCH1_1_reg)=data)
#define  get_SE_PITCH1_1_reg                                                     (*((volatile unsigned int*)SE_PITCH1_1_reg))
#define  SE_PITCH1_1_interleave_shift                                            (16)
#define  SE_PITCH1_1_pitch_shift                                                 (0)
#define  SE_PITCH1_1_interleave_mask                                             (0x00010000)
#define  SE_PITCH1_1_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH1_1_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH1_1_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH1_1_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH1_1_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_PITCH1_2                                                            0x1800C198
#define  SE_PITCH1_2_reg_addr                                                    "0xB800C198"
#define  SE_PITCH1_2_reg                                                         0xB800C198
#define  SE_PITCH1_2_inst_addr                                                   "0x0021"
#define  set_SE_PITCH1_2_reg(data)                                               (*((volatile unsigned int*)SE_PITCH1_2_reg)=data)
#define  get_SE_PITCH1_2_reg                                                     (*((volatile unsigned int*)SE_PITCH1_2_reg))
#define  SE_PITCH1_2_interleave_shift                                            (16)
#define  SE_PITCH1_2_pitch_shift                                                 (0)
#define  SE_PITCH1_2_interleave_mask                                             (0x00010000)
#define  SE_PITCH1_2_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH1_2_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH1_2_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH1_2_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH1_2_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_PITCH1_3                                                            0x1800C19C
#define  SE_PITCH1_3_reg_addr                                                    "0xB800C19C"
#define  SE_PITCH1_3_reg                                                         0xB800C19C
#define  SE_PITCH1_3_inst_addr                                                   "0x0022"
#define  set_SE_PITCH1_3_reg(data)                                               (*((volatile unsigned int*)SE_PITCH1_3_reg)=data)
#define  get_SE_PITCH1_3_reg                                                     (*((volatile unsigned int*)SE_PITCH1_3_reg))
#define  SE_PITCH1_3_interleave_shift                                            (16)
#define  SE_PITCH1_3_pitch_shift                                                 (0)
#define  SE_PITCH1_3_interleave_mask                                             (0x00010000)
#define  SE_PITCH1_3_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH1_3_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH1_3_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH1_3_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH1_3_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_BADDR2_0                                                            0x1800C1A0
#define  SE_BADDR2_0_reg_addr                                                    "0xB800C1A0"
#define  SE_BADDR2_0_reg                                                         0xB800C1A0
#define  SE_BADDR2_0_inst_addr                                                   "0x0023"
#define  set_SE_BADDR2_0_reg(data)                                               (*((volatile unsigned int*)SE_BADDR2_0_reg)=data)
#define  get_SE_BADDR2_0_reg                                                     (*((volatile unsigned int*)SE_BADDR2_0_reg))
#define  SE_BADDR2_0_baddr_shift                                                 (0)
#define  SE_BADDR2_0_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR2_0_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR2_0_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_BADDR2_1                                                            0x1800C1A4
#define  SE_BADDR2_1_reg_addr                                                    "0xB800C1A4"
#define  SE_BADDR2_1_reg                                                         0xB800C1A4
#define  SE_BADDR2_1_inst_addr                                                   "0x0024"
#define  set_SE_BADDR2_1_reg(data)                                               (*((volatile unsigned int*)SE_BADDR2_1_reg)=data)
#define  get_SE_BADDR2_1_reg                                                     (*((volatile unsigned int*)SE_BADDR2_1_reg))
#define  SE_BADDR2_1_baddr_shift                                                 (0)
#define  SE_BADDR2_1_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR2_1_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR2_1_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_BADDR2_2                                                            0x1800C1A8
#define  SE_BADDR2_2_reg_addr                                                    "0xB800C1A8"
#define  SE_BADDR2_2_reg                                                         0xB800C1A8
#define  SE_BADDR2_2_inst_addr                                                   "0x0025"
#define  set_SE_BADDR2_2_reg(data)                                               (*((volatile unsigned int*)SE_BADDR2_2_reg)=data)
#define  get_SE_BADDR2_2_reg                                                     (*((volatile unsigned int*)SE_BADDR2_2_reg))
#define  SE_BADDR2_2_baddr_shift                                                 (0)
#define  SE_BADDR2_2_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR2_2_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR2_2_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_BADDR2_3                                                            0x1800C1AC
#define  SE_BADDR2_3_reg_addr                                                    "0xB800C1AC"
#define  SE_BADDR2_3_reg                                                         0xB800C1AC
#define  SE_BADDR2_3_inst_addr                                                   "0x0026"
#define  set_SE_BADDR2_3_reg(data)                                               (*((volatile unsigned int*)SE_BADDR2_3_reg)=data)
#define  get_SE_BADDR2_3_reg                                                     (*((volatile unsigned int*)SE_BADDR2_3_reg))
#define  SE_BADDR2_3_baddr_shift                                                 (0)
#define  SE_BADDR2_3_baddr_mask                                                  (0xFFFFFFFF)
#define  SE_BADDR2_3_baddr(data)                                                 (0xFFFFFFFF&(data))
#define  SE_BADDR2_3_get_baddr(data)                                             (0xFFFFFFFF&(data))

#define  SE_PITCH2_0                                                            0x1800C1B0
#define  SE_PITCH2_0_reg_addr                                                    "0xB800C1B0"
#define  SE_PITCH2_0_reg                                                         0xB800C1B0
#define  SE_PITCH2_0_inst_addr                                                   "0x0027"
#define  set_SE_PITCH2_0_reg(data)                                               (*((volatile unsigned int*)SE_PITCH2_0_reg)=data)
#define  get_SE_PITCH2_0_reg                                                     (*((volatile unsigned int*)SE_PITCH2_0_reg))
#define  SE_PITCH2_0_interleave_shift                                            (16)
#define  SE_PITCH2_0_pitch_shift                                                 (0)
#define  SE_PITCH2_0_interleave_mask                                             (0x00010000)
#define  SE_PITCH2_0_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH2_0_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH2_0_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH2_0_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH2_0_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_PITCH2_1                                                            0x1800C1B4
#define  SE_PITCH2_1_reg_addr                                                    "0xB800C1B4"
#define  SE_PITCH2_1_reg                                                         0xB800C1B4
#define  SE_PITCH2_1_inst_addr                                                   "0x0028"
#define  set_SE_PITCH2_1_reg(data)                                               (*((volatile unsigned int*)SE_PITCH2_1_reg)=data)
#define  get_SE_PITCH2_1_reg                                                     (*((volatile unsigned int*)SE_PITCH2_1_reg))
#define  SE_PITCH2_1_interleave_shift                                            (16)
#define  SE_PITCH2_1_pitch_shift                                                 (0)
#define  SE_PITCH2_1_interleave_mask                                             (0x00010000)
#define  SE_PITCH2_1_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH2_1_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH2_1_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH2_1_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH2_1_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_PITCH2_2                                                            0x1800C1B8
#define  SE_PITCH2_2_reg_addr                                                    "0xB800C1B8"
#define  SE_PITCH2_2_reg                                                         0xB800C1B8
#define  SE_PITCH2_2_inst_addr                                                   "0x0029"
#define  set_SE_PITCH2_2_reg(data)                                               (*((volatile unsigned int*)SE_PITCH2_2_reg)=data)
#define  get_SE_PITCH2_2_reg                                                     (*((volatile unsigned int*)SE_PITCH2_2_reg))
#define  SE_PITCH2_2_interleave_shift                                            (16)
#define  SE_PITCH2_2_pitch_shift                                                 (0)
#define  SE_PITCH2_2_interleave_mask                                             (0x00010000)
#define  SE_PITCH2_2_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH2_2_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH2_2_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH2_2_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH2_2_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_PITCH2_3                                                            0x1800C1BC
#define  SE_PITCH2_3_reg_addr                                                    "0xB800C1BC"
#define  SE_PITCH2_3_reg                                                         0xB800C1BC
#define  SE_PITCH2_3_inst_addr                                                   "0x002A"
#define  set_SE_PITCH2_3_reg(data)                                               (*((volatile unsigned int*)SE_PITCH2_3_reg)=data)
#define  get_SE_PITCH2_3_reg                                                     (*((volatile unsigned int*)SE_PITCH2_3_reg))
#define  SE_PITCH2_3_interleave_shift                                            (16)
#define  SE_PITCH2_3_pitch_shift                                                 (0)
#define  SE_PITCH2_3_interleave_mask                                             (0x00010000)
#define  SE_PITCH2_3_pitch_mask                                                  (0x0000FFFF)
#define  SE_PITCH2_3_interleave(data)                                            (0x00010000&((data)<<16))
#define  SE_PITCH2_3_pitch(data)                                                 (0x0000FFFF&(data))
#define  SE_PITCH2_3_get_interleave(data)                                        ((0x00010000&(data))>>16)
#define  SE_PITCH2_3_get_pitch(data)                                             (0x0000FFFF&(data))

#define  SE_CLUT_LOCK_ST                                                        0x1800C1C0
#define  SE_CLUT_LOCK_ST_reg_addr                                                "0xB800C1C0"
#define  SE_CLUT_LOCK_ST_reg                                                     0xB800C1C0
#define  SE_CLUT_LOCK_ST_inst_addr                                               "0x002B"
#define  set_SE_CLUT_LOCK_ST_reg(data)                                           (*((volatile unsigned int*)SE_CLUT_LOCK_ST_reg)=data)
#define  get_SE_CLUT_LOCK_ST_reg                                                 (*((volatile unsigned int*)SE_CLUT_LOCK_ST_reg))
#define  SE_CLUT_LOCK_ST_clut_lock_st_shift                                      (0)
#define  SE_CLUT_LOCK_ST_clut_lock_st_mask                                       (0x00000007)
#define  SE_CLUT_LOCK_ST_clut_lock_st(data)                                      (0x00000007&(data))
#define  SE_CLUT_LOCK_ST_get_clut_lock_st(data)                                  (0x00000007&(data))

#define  SE_CONVSCALING_0                                                       0x1800C1D0
#define  SE_CONVSCALING_0_reg_addr                                               "0xB800C1D0"
#define  SE_CONVSCALING_0_reg                                                    0xB800C1D0
#define  SE_CONVSCALING_0_inst_addr                                              "0x002C"
#define  set_SE_CONVSCALING_0_reg(data)                                          (*((volatile unsigned int*)SE_CONVSCALING_0_reg)=data)
#define  get_SE_CONVSCALING_0_reg                                                (*((volatile unsigned int*)SE_CONVSCALING_0_reg))
#define  SE_CONVSCALING_0_hdown_shift                                            (3)
#define  SE_CONVSCALING_0_vdown_shift                                            (2)
#define  SE_CONVSCALING_0_hup_shift                                              (1)
#define  SE_CONVSCALING_0_vup_shift                                              (0)
#define  SE_CONVSCALING_0_hdown_mask                                             (0x00000008)
#define  SE_CONVSCALING_0_vdown_mask                                             (0x00000004)
#define  SE_CONVSCALING_0_hup_mask                                               (0x00000002)
#define  SE_CONVSCALING_0_vup_mask                                               (0x00000001)
#define  SE_CONVSCALING_0_hdown(data)                                            (0x00000008&((data)<<3))
#define  SE_CONVSCALING_0_vdown(data)                                            (0x00000004&((data)<<2))
#define  SE_CONVSCALING_0_hup(data)                                              (0x00000002&((data)<<1))
#define  SE_CONVSCALING_0_vup(data)                                              (0x00000001&(data))
#define  SE_CONVSCALING_0_get_hdown(data)                                        ((0x00000008&(data))>>3)
#define  SE_CONVSCALING_0_get_vdown(data)                                        ((0x00000004&(data))>>2)
#define  SE_CONVSCALING_0_get_hup(data)                                          ((0x00000002&(data))>>1)
#define  SE_CONVSCALING_0_get_vup(data)                                          (0x00000001&(data))

#define  SE_CONVSCALING_1                                                       0x1800C1D4
#define  SE_CONVSCALING_1_reg_addr                                               "0xB800C1D4"
#define  SE_CONVSCALING_1_reg                                                    0xB800C1D4
#define  SE_CONVSCALING_1_inst_addr                                              "0x002D"
#define  set_SE_CONVSCALING_1_reg(data)                                          (*((volatile unsigned int*)SE_CONVSCALING_1_reg)=data)
#define  get_SE_CONVSCALING_1_reg                                                (*((volatile unsigned int*)SE_CONVSCALING_1_reg))
#define  SE_CONVSCALING_1_hdown_shift                                            (3)
#define  SE_CONVSCALING_1_vdown_shift                                            (2)
#define  SE_CONVSCALING_1_hup_shift                                              (1)
#define  SE_CONVSCALING_1_vup_shift                                              (0)
#define  SE_CONVSCALING_1_hdown_mask                                             (0x00000008)
#define  SE_CONVSCALING_1_vdown_mask                                             (0x00000004)
#define  SE_CONVSCALING_1_hup_mask                                               (0x00000002)
#define  SE_CONVSCALING_1_vup_mask                                               (0x00000001)
#define  SE_CONVSCALING_1_hdown(data)                                            (0x00000008&((data)<<3))
#define  SE_CONVSCALING_1_vdown(data)                                            (0x00000004&((data)<<2))
#define  SE_CONVSCALING_1_hup(data)                                              (0x00000002&((data)<<1))
#define  SE_CONVSCALING_1_vup(data)                                              (0x00000001&(data))
#define  SE_CONVSCALING_1_get_hdown(data)                                        ((0x00000008&(data))>>3)
#define  SE_CONVSCALING_1_get_vdown(data)                                        ((0x00000004&(data))>>2)
#define  SE_CONVSCALING_1_get_hup(data)                                          ((0x00000002&(data))>>1)
#define  SE_CONVSCALING_1_get_vup(data)                                          (0x00000001&(data))

#define  SE_CONVCOEF1_0                                                         0x1800C1E0
#define  SE_CONVCOEF1_0_reg_addr                                                 "0xB800C1E0"
#define  SE_CONVCOEF1_0_reg                                                      0xB800C1E0
#define  SE_CONVCOEF1_0_inst_addr                                                "0x002E"
#define  set_SE_CONVCOEF1_0_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF1_0_reg)=data)
#define  get_SE_CONVCOEF1_0_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF1_0_reg))
#define  SE_CONVCOEF1_0_m01_shift                                                (13)
#define  SE_CONVCOEF1_0_m00_shift                                                (0)
#define  SE_CONVCOEF1_0_m01_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF1_0_m00_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF1_0_m01(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF1_0_m00(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF1_0_get_m01(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF1_0_get_m00(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF1_1                                                         0x1800C1E4
#define  SE_CONVCOEF1_1_reg_addr                                                 "0xB800C1E4"
#define  SE_CONVCOEF1_1_reg                                                      0xB800C1E4
#define  SE_CONVCOEF1_1_inst_addr                                                "0x002F"
#define  set_SE_CONVCOEF1_1_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF1_1_reg)=data)
#define  get_SE_CONVCOEF1_1_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF1_1_reg))
#define  SE_CONVCOEF1_1_m01_shift                                                (13)
#define  SE_CONVCOEF1_1_m00_shift                                                (0)
#define  SE_CONVCOEF1_1_m01_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF1_1_m00_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF1_1_m01(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF1_1_m00(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF1_1_get_m01(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF1_1_get_m00(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF2_0                                                         0x1800C1F0
#define  SE_CONVCOEF2_0_reg_addr                                                 "0xB800C1F0"
#define  SE_CONVCOEF2_0_reg                                                      0xB800C1F0
#define  SE_CONVCOEF2_0_inst_addr                                                "0x0030"
#define  set_SE_CONVCOEF2_0_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF2_0_reg)=data)
#define  get_SE_CONVCOEF2_0_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF2_0_reg))
#define  SE_CONVCOEF2_0_m10_shift                                                (13)
#define  SE_CONVCOEF2_0_m02_shift                                                (0)
#define  SE_CONVCOEF2_0_m10_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF2_0_m02_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF2_0_m10(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF2_0_m02(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF2_0_get_m10(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF2_0_get_m02(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF2_1                                                         0x1800C1F4
#define  SE_CONVCOEF2_1_reg_addr                                                 "0xB800C1F4"
#define  SE_CONVCOEF2_1_reg                                                      0xB800C1F4
#define  SE_CONVCOEF2_1_inst_addr                                                "0x0031"
#define  set_SE_CONVCOEF2_1_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF2_1_reg)=data)
#define  get_SE_CONVCOEF2_1_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF2_1_reg))
#define  SE_CONVCOEF2_1_m10_shift                                                (13)
#define  SE_CONVCOEF2_1_m02_shift                                                (0)
#define  SE_CONVCOEF2_1_m10_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF2_1_m02_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF2_1_m10(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF2_1_m02(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF2_1_get_m10(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF2_1_get_m02(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF3_0                                                         0x1800C200
#define  SE_CONVCOEF3_0_reg_addr                                                 "0xB800C200"
#define  SE_CONVCOEF3_0_reg                                                      0xB800C200
#define  SE_CONVCOEF3_0_inst_addr                                                "0x0032"
#define  set_SE_CONVCOEF3_0_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF3_0_reg)=data)
#define  get_SE_CONVCOEF3_0_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF3_0_reg))
#define  SE_CONVCOEF3_0_m12_shift                                                (13)
#define  SE_CONVCOEF3_0_m11_shift                                                (0)
#define  SE_CONVCOEF3_0_m12_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF3_0_m11_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF3_0_m12(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF3_0_m11(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF3_0_get_m12(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF3_0_get_m11(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF3_1                                                         0x1800C204
#define  SE_CONVCOEF3_1_reg_addr                                                 "0xB800C204"
#define  SE_CONVCOEF3_1_reg                                                      0xB800C204
#define  SE_CONVCOEF3_1_inst_addr                                                "0x0033"
#define  set_SE_CONVCOEF3_1_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF3_1_reg)=data)
#define  get_SE_CONVCOEF3_1_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF3_1_reg))
#define  SE_CONVCOEF3_1_m12_shift                                                (13)
#define  SE_CONVCOEF3_1_m11_shift                                                (0)
#define  SE_CONVCOEF3_1_m12_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF3_1_m11_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF3_1_m12(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF3_1_m11(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF3_1_get_m12(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF3_1_get_m11(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF4_0                                                         0x1800C210
#define  SE_CONVCOEF4_0_reg_addr                                                 "0xB800C210"
#define  SE_CONVCOEF4_0_reg                                                      0xB800C210
#define  SE_CONVCOEF4_0_inst_addr                                                "0x0034"
#define  set_SE_CONVCOEF4_0_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF4_0_reg)=data)
#define  get_SE_CONVCOEF4_0_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF4_0_reg))
#define  SE_CONVCOEF4_0_m21_shift                                                (13)
#define  SE_CONVCOEF4_0_m20_shift                                                (0)
#define  SE_CONVCOEF4_0_m21_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF4_0_m20_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF4_0_m21(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF4_0_m20(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF4_0_get_m21(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF4_0_get_m20(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF4_1                                                         0x1800C214
#define  SE_CONVCOEF4_1_reg_addr                                                 "0xB800C214"
#define  SE_CONVCOEF4_1_reg                                                      0xB800C214
#define  SE_CONVCOEF4_1_inst_addr                                                "0x0035"
#define  set_SE_CONVCOEF4_1_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF4_1_reg)=data)
#define  get_SE_CONVCOEF4_1_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF4_1_reg))
#define  SE_CONVCOEF4_1_m21_shift                                                (13)
#define  SE_CONVCOEF4_1_m20_shift                                                (0)
#define  SE_CONVCOEF4_1_m21_mask                                                 (0x03FFE000)
#define  SE_CONVCOEF4_1_m20_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF4_1_m21(data)                                                (0x03FFE000&((data)<<13))
#define  SE_CONVCOEF4_1_m20(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF4_1_get_m21(data)                                            ((0x03FFE000&(data))>>13)
#define  SE_CONVCOEF4_1_get_m20(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF5_0                                                         0x1800C220
#define  SE_CONVCOEF5_0_reg_addr                                                 "0xB800C220"
#define  SE_CONVCOEF5_0_reg                                                      0xB800C220
#define  SE_CONVCOEF5_0_inst_addr                                                "0x0036"
#define  set_SE_CONVCOEF5_0_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF5_0_reg)=data)
#define  get_SE_CONVCOEF5_0_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF5_0_reg))
#define  SE_CONVCOEF5_0_m22_shift                                                (0)
#define  SE_CONVCOEF5_0_m22_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF5_0_m22(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF5_0_get_m22(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF5_1                                                         0x1800C224
#define  SE_CONVCOEF5_1_reg_addr                                                 "0xB800C224"
#define  SE_CONVCOEF5_1_reg                                                      0xB800C224
#define  SE_CONVCOEF5_1_inst_addr                                                "0x0037"
#define  set_SE_CONVCOEF5_1_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF5_1_reg)=data)
#define  get_SE_CONVCOEF5_1_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF5_1_reg))
#define  SE_CONVCOEF5_1_m22_shift                                                (0)
#define  SE_CONVCOEF5_1_m22_mask                                                 (0x00001FFF)
#define  SE_CONVCOEF5_1_m22(data)                                                (0x00001FFF&(data))
#define  SE_CONVCOEF5_1_get_m22(data)                                            (0x00001FFF&(data))

#define  SE_CONVCOEF6_0                                                         0x1800C230
#define  SE_CONVCOEF6_0_reg_addr                                                 "0xB800C230"
#define  SE_CONVCOEF6_0_reg                                                      0xB800C230
#define  SE_CONVCOEF6_0_inst_addr                                                "0x0038"
#define  set_SE_CONVCOEF6_0_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF6_0_reg)=data)
#define  get_SE_CONVCOEF6_0_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF6_0_reg))
#define  SE_CONVCOEF6_0_a2_shift                                                 (20)
#define  SE_CONVCOEF6_0_a1_shift                                                 (10)
#define  SE_CONVCOEF6_0_a0_shift                                                 (0)
#define  SE_CONVCOEF6_0_a2_mask                                                  (0x3FF00000)
#define  SE_CONVCOEF6_0_a1_mask                                                  (0x000FFC00)
#define  SE_CONVCOEF6_0_a0_mask                                                  (0x000003FF)
#define  SE_CONVCOEF6_0_a2(data)                                                 (0x3FF00000&((data)<<20))
#define  SE_CONVCOEF6_0_a1(data)                                                 (0x000FFC00&((data)<<10))
#define  SE_CONVCOEF6_0_a0(data)                                                 (0x000003FF&(data))
#define  SE_CONVCOEF6_0_get_a2(data)                                             ((0x3FF00000&(data))>>20)
#define  SE_CONVCOEF6_0_get_a1(data)                                             ((0x000FFC00&(data))>>10)
#define  SE_CONVCOEF6_0_get_a0(data)                                             (0x000003FF&(data))

#define  SE_CONVCOEF6_1                                                         0x1800C234
#define  SE_CONVCOEF6_1_reg_addr                                                 "0xB800C234"
#define  SE_CONVCOEF6_1_reg                                                      0xB800C234
#define  SE_CONVCOEF6_1_inst_addr                                                "0x0039"
#define  set_SE_CONVCOEF6_1_reg(data)                                            (*((volatile unsigned int*)SE_CONVCOEF6_1_reg)=data)
#define  get_SE_CONVCOEF6_1_reg                                                  (*((volatile unsigned int*)SE_CONVCOEF6_1_reg))
#define  SE_CONVCOEF6_1_a2_shift                                                 (20)
#define  SE_CONVCOEF6_1_a1_shift                                                 (10)
#define  SE_CONVCOEF6_1_a0_shift                                                 (0)
#define  SE_CONVCOEF6_1_a2_mask                                                  (0x3FF00000)
#define  SE_CONVCOEF6_1_a1_mask                                                  (0x000FFC00)
#define  SE_CONVCOEF6_1_a0_mask                                                  (0x000003FF)
#define  SE_CONVCOEF6_1_a2(data)                                                 (0x3FF00000&((data)<<20))
#define  SE_CONVCOEF6_1_a1(data)                                                 (0x000FFC00&((data)<<10))
#define  SE_CONVCOEF6_1_a0(data)                                                 (0x000003FF&(data))
#define  SE_CONVCOEF6_1_get_a2(data)                                             ((0x3FF00000&(data))>>20)
#define  SE_CONVCOEF6_1_get_a1(data)                                             ((0x000FFC00&(data))>>10)
#define  SE_CONVCOEF6_1_get_a0(data)                                             (0x000003FF&(data))

#define  SE_FCV_BITBLIT_COLOR_KEY_0                                             0x1800C240
#define  SE_FCV_BITBLIT_COLOR_KEY_0_reg_addr                                     "0xB800C240"
#define  SE_FCV_BITBLIT_COLOR_KEY_0_reg                                          0xB800C240
#define  SE_FCV_BITBLIT_COLOR_KEY_0_inst_addr                                    "0x003A"
#define  set_SE_FCV_BITBLIT_COLOR_KEY_0_reg(data)                                (*((volatile unsigned int*)SE_FCV_BITBLIT_COLOR_KEY_0_reg)=data)
#define  get_SE_FCV_BITBLIT_COLOR_KEY_0_reg                                      (*((volatile unsigned int*)SE_FCV_BITBLIT_COLOR_KEY_0_reg))
#define  SE_FCV_BITBLIT_COLOR_KEY_0_color_key_shift                              (0)
#define  SE_FCV_BITBLIT_COLOR_KEY_0_color_key_mask                               (0x00FFFFFF)
#define  SE_FCV_BITBLIT_COLOR_KEY_0_color_key(data)                              (0x00FFFFFF&(data))
#define  SE_FCV_BITBLIT_COLOR_KEY_0_get_color_key(data)                          (0x00FFFFFF&(data))

#define  SE_FCV_BITBLIT_COLOR_KEY_1                                             0x1800C244
#define  SE_FCV_BITBLIT_COLOR_KEY_1_reg_addr                                     "0xB800C244"
#define  SE_FCV_BITBLIT_COLOR_KEY_1_reg                                          0xB800C244
#define  SE_FCV_BITBLIT_COLOR_KEY_1_inst_addr                                    "0x003B"
#define  set_SE_FCV_BITBLIT_COLOR_KEY_1_reg(data)                                (*((volatile unsigned int*)SE_FCV_BITBLIT_COLOR_KEY_1_reg)=data)
#define  get_SE_FCV_BITBLIT_COLOR_KEY_1_reg                                      (*((volatile unsigned int*)SE_FCV_BITBLIT_COLOR_KEY_1_reg))
#define  SE_FCV_BITBLIT_COLOR_KEY_1_color_key_shift                              (0)
#define  SE_FCV_BITBLIT_COLOR_KEY_1_color_key_mask                               (0x00FFFFFF)
#define  SE_FCV_BITBLIT_COLOR_KEY_1_color_key(data)                              (0x00FFFFFF&(data))
#define  SE_FCV_BITBLIT_COLOR_KEY_1_get_color_key(data)                          (0x00FFFFFF&(data))

#define  SE_SRC_CLR_RED_0                                                       0x1800C250
#define  SE_SRC_CLR_RED_0_reg_addr                                               "0xB800C250"
#define  SE_SRC_CLR_RED_0_reg                                                    0xB800C250
#define  SE_SRC_CLR_RED_0_inst_addr                                              "0x003C"
#define  set_SE_SRC_CLR_RED_0_reg(data)                                          (*((volatile unsigned int*)SE_SRC_CLR_RED_0_reg)=data)
#define  get_SE_SRC_CLR_RED_0_reg                                                (*((volatile unsigned int*)SE_SRC_CLR_RED_0_reg))
#define  SE_SRC_CLR_RED_0_src_clr_add_red_shift                                  (16)
#define  SE_SRC_CLR_RED_0_src_clr_mul_red_shift                                  (0)
#define  SE_SRC_CLR_RED_0_src_clr_add_red_mask                                   (0x01FF0000)
#define  SE_SRC_CLR_RED_0_src_clr_mul_red_mask                                   (0x000001FF)
#define  SE_SRC_CLR_RED_0_src_clr_add_red(data)                                  (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_RED_0_src_clr_mul_red(data)                                  (0x000001FF&(data))
#define  SE_SRC_CLR_RED_0_get_src_clr_add_red(data)                              ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_RED_0_get_src_clr_mul_red(data)                              (0x000001FF&(data))

#define  SE_SRC_CLR_RED_1                                                       0x1800C254
#define  SE_SRC_CLR_RED_1_reg_addr                                               "0xB800C254"
#define  SE_SRC_CLR_RED_1_reg                                                    0xB800C254
#define  SE_SRC_CLR_RED_1_inst_addr                                              "0x003D"
#define  set_SE_SRC_CLR_RED_1_reg(data)                                          (*((volatile unsigned int*)SE_SRC_CLR_RED_1_reg)=data)
#define  get_SE_SRC_CLR_RED_1_reg                                                (*((volatile unsigned int*)SE_SRC_CLR_RED_1_reg))
#define  SE_SRC_CLR_RED_1_src_clr_add_red_shift                                  (16)
#define  SE_SRC_CLR_RED_1_src_clr_mul_red_shift                                  (0)
#define  SE_SRC_CLR_RED_1_src_clr_add_red_mask                                   (0x01FF0000)
#define  SE_SRC_CLR_RED_1_src_clr_mul_red_mask                                   (0x000001FF)
#define  SE_SRC_CLR_RED_1_src_clr_add_red(data)                                  (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_RED_1_src_clr_mul_red(data)                                  (0x000001FF&(data))
#define  SE_SRC_CLR_RED_1_get_src_clr_add_red(data)                              ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_RED_1_get_src_clr_mul_red(data)                              (0x000001FF&(data))

#define  SE_SRC_CLR_GREEN_0                                                     0x1800C260
#define  SE_SRC_CLR_GREEN_0_reg_addr                                             "0xB800C260"
#define  SE_SRC_CLR_GREEN_0_reg                                                  0xB800C260
#define  SE_SRC_CLR_GREEN_0_inst_addr                                            "0x003E"
#define  set_SE_SRC_CLR_GREEN_0_reg(data)                                        (*((volatile unsigned int*)SE_SRC_CLR_GREEN_0_reg)=data)
#define  get_SE_SRC_CLR_GREEN_0_reg                                              (*((volatile unsigned int*)SE_SRC_CLR_GREEN_0_reg))
#define  SE_SRC_CLR_GREEN_0_src_clr_add_green_shift                              (16)
#define  SE_SRC_CLR_GREEN_0_src_clr_mul_green_shift                              (0)
#define  SE_SRC_CLR_GREEN_0_src_clr_add_green_mask                               (0x01FF0000)
#define  SE_SRC_CLR_GREEN_0_src_clr_mul_green_mask                               (0x000001FF)
#define  SE_SRC_CLR_GREEN_0_src_clr_add_green(data)                              (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_GREEN_0_src_clr_mul_green(data)                              (0x000001FF&(data))
#define  SE_SRC_CLR_GREEN_0_get_src_clr_add_green(data)                          ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_GREEN_0_get_src_clr_mul_green(data)                          (0x000001FF&(data))

#define  SE_SRC_CLR_GREEN_1                                                     0x1800C264
#define  SE_SRC_CLR_GREEN_1_reg_addr                                             "0xB800C264"
#define  SE_SRC_CLR_GREEN_1_reg                                                  0xB800C264
#define  SE_SRC_CLR_GREEN_1_inst_addr                                            "0x003F"
#define  set_SE_SRC_CLR_GREEN_1_reg(data)                                        (*((volatile unsigned int*)SE_SRC_CLR_GREEN_1_reg)=data)
#define  get_SE_SRC_CLR_GREEN_1_reg                                              (*((volatile unsigned int*)SE_SRC_CLR_GREEN_1_reg))
#define  SE_SRC_CLR_GREEN_1_src_clr_add_green_shift                              (16)
#define  SE_SRC_CLR_GREEN_1_src_clr_mul_green_shift                              (0)
#define  SE_SRC_CLR_GREEN_1_src_clr_add_green_mask                               (0x01FF0000)
#define  SE_SRC_CLR_GREEN_1_src_clr_mul_green_mask                               (0x000001FF)
#define  SE_SRC_CLR_GREEN_1_src_clr_add_green(data)                              (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_GREEN_1_src_clr_mul_green(data)                              (0x000001FF&(data))
#define  SE_SRC_CLR_GREEN_1_get_src_clr_add_green(data)                          ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_GREEN_1_get_src_clr_mul_green(data)                          (0x000001FF&(data))

#define  SE_SRC_CLR_BLUE_0                                                      0x1800C270
#define  SE_SRC_CLR_BLUE_0_reg_addr                                              "0xB800C270"
#define  SE_SRC_CLR_BLUE_0_reg                                                   0xB800C270
#define  SE_SRC_CLR_BLUE_0_inst_addr                                             "0x0040"
#define  set_SE_SRC_CLR_BLUE_0_reg(data)                                         (*((volatile unsigned int*)SE_SRC_CLR_BLUE_0_reg)=data)
#define  get_SE_SRC_CLR_BLUE_0_reg                                               (*((volatile unsigned int*)SE_SRC_CLR_BLUE_0_reg))
#define  SE_SRC_CLR_BLUE_0_src_clr_add_blue_shift                                (16)
#define  SE_SRC_CLR_BLUE_0_src_clr_mul_blue_shift                                (0)
#define  SE_SRC_CLR_BLUE_0_src_clr_add_blue_mask                                 (0x01FF0000)
#define  SE_SRC_CLR_BLUE_0_src_clr_mul_blue_mask                                 (0x000001FF)
#define  SE_SRC_CLR_BLUE_0_src_clr_add_blue(data)                                (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_BLUE_0_src_clr_mul_blue(data)                                (0x000001FF&(data))
#define  SE_SRC_CLR_BLUE_0_get_src_clr_add_blue(data)                            ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_BLUE_0_get_src_clr_mul_blue(data)                            (0x000001FF&(data))

#define  SE_SRC_CLR_BLUE_1                                                      0x1800C274
#define  SE_SRC_CLR_BLUE_1_reg_addr                                              "0xB800C274"
#define  SE_SRC_CLR_BLUE_1_reg                                                   0xB800C274
#define  SE_SRC_CLR_BLUE_1_inst_addr                                             "0x0041"
#define  set_SE_SRC_CLR_BLUE_1_reg(data)                                         (*((volatile unsigned int*)SE_SRC_CLR_BLUE_1_reg)=data)
#define  get_SE_SRC_CLR_BLUE_1_reg                                               (*((volatile unsigned int*)SE_SRC_CLR_BLUE_1_reg))
#define  SE_SRC_CLR_BLUE_1_src_clr_add_blue_shift                                (16)
#define  SE_SRC_CLR_BLUE_1_src_clr_mul_blue_shift                                (0)
#define  SE_SRC_CLR_BLUE_1_src_clr_add_blue_mask                                 (0x01FF0000)
#define  SE_SRC_CLR_BLUE_1_src_clr_mul_blue_mask                                 (0x000001FF)
#define  SE_SRC_CLR_BLUE_1_src_clr_add_blue(data)                                (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_BLUE_1_src_clr_mul_blue(data)                                (0x000001FF&(data))
#define  SE_SRC_CLR_BLUE_1_get_src_clr_add_blue(data)                            ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_BLUE_1_get_src_clr_mul_blue(data)                            (0x000001FF&(data))

#define  SE_SRC_CLR_ALPHA_0                                                     0x1800C280
#define  SE_SRC_CLR_ALPHA_0_reg_addr                                             "0xB800C280"
#define  SE_SRC_CLR_ALPHA_0_reg                                                  0xB800C280
#define  SE_SRC_CLR_ALPHA_0_inst_addr                                            "0x0042"
#define  set_SE_SRC_CLR_ALPHA_0_reg(data)                                        (*((volatile unsigned int*)SE_SRC_CLR_ALPHA_0_reg)=data)
#define  get_SE_SRC_CLR_ALPHA_0_reg                                              (*((volatile unsigned int*)SE_SRC_CLR_ALPHA_0_reg))
#define  SE_SRC_CLR_ALPHA_0_src_clr_add_alpha_shift                              (16)
#define  SE_SRC_CLR_ALPHA_0_src_clr_mul_alpha_shift                              (0)
#define  SE_SRC_CLR_ALPHA_0_src_clr_add_alpha_mask                               (0x01FF0000)
#define  SE_SRC_CLR_ALPHA_0_src_clr_mul_alpha_mask                               (0x000001FF)
#define  SE_SRC_CLR_ALPHA_0_src_clr_add_alpha(data)                              (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_ALPHA_0_src_clr_mul_alpha(data)                              (0x000001FF&(data))
#define  SE_SRC_CLR_ALPHA_0_get_src_clr_add_alpha(data)                          ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_ALPHA_0_get_src_clr_mul_alpha(data)                          (0x000001FF&(data))

#define  SE_SRC_CLR_ALPHA_1                                                     0x1800C284
#define  SE_SRC_CLR_ALPHA_1_reg_addr                                             "0xB800C284"
#define  SE_SRC_CLR_ALPHA_1_reg                                                  0xB800C284
#define  SE_SRC_CLR_ALPHA_1_inst_addr                                            "0x0043"
#define  set_SE_SRC_CLR_ALPHA_1_reg(data)                                        (*((volatile unsigned int*)SE_SRC_CLR_ALPHA_1_reg)=data)
#define  get_SE_SRC_CLR_ALPHA_1_reg                                              (*((volatile unsigned int*)SE_SRC_CLR_ALPHA_1_reg))
#define  SE_SRC_CLR_ALPHA_1_src_clr_add_alpha_shift                              (16)
#define  SE_SRC_CLR_ALPHA_1_src_clr_mul_alpha_shift                              (0)
#define  SE_SRC_CLR_ALPHA_1_src_clr_add_alpha_mask                               (0x01FF0000)
#define  SE_SRC_CLR_ALPHA_1_src_clr_mul_alpha_mask                               (0x000001FF)
#define  SE_SRC_CLR_ALPHA_1_src_clr_add_alpha(data)                              (0x01FF0000&((data)<<16))
#define  SE_SRC_CLR_ALPHA_1_src_clr_mul_alpha(data)                              (0x000001FF&(data))
#define  SE_SRC_CLR_ALPHA_1_get_src_clr_add_alpha(data)                          ((0x01FF0000&(data))>>16)
#define  SE_SRC_CLR_ALPHA_1_get_src_clr_mul_alpha(data)                          (0x000001FF&(data))

#define  SE_FB_COLORALPHA_0                                                     0x1800C2C0
#define  SE_FB_COLORALPHA_0_reg_addr                                             "0xB800C2C0"
#define  SE_FB_COLORALPHA_0_reg                                                  0xB800C2C0
#define  SE_FB_COLORALPHA_0_inst_addr                                            "0x0044"
#define  set_SE_FB_COLORALPHA_0_reg(data)                                        (*((volatile unsigned int*)SE_FB_COLORALPHA_0_reg)=data)
#define  get_SE_FB_COLORALPHA_0_reg                                              (*((volatile unsigned int*)SE_FB_COLORALPHA_0_reg))
#define  SE_FB_COLORALPHA_0_color_alpha_shift                                    (0)
#define  SE_FB_COLORALPHA_0_color_alpha_mask                                     (0x000000FF)
#define  SE_FB_COLORALPHA_0_color_alpha(data)                                    (0x000000FF&(data))
#define  SE_FB_COLORALPHA_0_get_color_alpha(data)                                (0x000000FF&(data))

#define  SE_FB_COLORALPHA_1                                                     0x1800C2C4
#define  SE_FB_COLORALPHA_1_reg_addr                                             "0xB800C2C4"
#define  SE_FB_COLORALPHA_1_reg                                                  0xB800C2C4
#define  SE_FB_COLORALPHA_1_inst_addr                                            "0x0045"
#define  set_SE_FB_COLORALPHA_1_reg(data)                                        (*((volatile unsigned int*)SE_FB_COLORALPHA_1_reg)=data)
#define  get_SE_FB_COLORALPHA_1_reg                                              (*((volatile unsigned int*)SE_FB_COLORALPHA_1_reg))
#define  SE_FB_COLORALPHA_1_color_alpha_shift                                    (0)
#define  SE_FB_COLORALPHA_1_color_alpha_mask                                     (0x000000FF)
#define  SE_FB_COLORALPHA_1_color_alpha(data)                                    (0x000000FF&(data))
#define  SE_FB_COLORALPHA_1_get_color_alpha(data)                                (0x000000FF&(data))

#define  SE_SE20_STRETCH_0                                                      0x1800C320
#define  SE_SE20_STRETCH_0_reg_addr                                              "0xB800C320"
#define  SE_SE20_STRETCH_0_reg                                                   0xB800C320
#define  SE_SE20_STRETCH_0_inst_addr                                             "0x0046"
#define  set_SE_SE20_STRETCH_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_STRETCH_0_reg)=data)
#define  get_SE_SE20_STRETCH_0_reg                                               (*((volatile unsigned int*)SE_SE20_STRETCH_0_reg))
#define  SE_SE20_STRETCH_0_repl_alpha_shift                                      (7)
#define  SE_SE20_STRETCH_0_repl_color_shift                                      (6)
#define  SE_SE20_STRETCH_0_ref_alpha_shift                                       (5)
#define  SE_SE20_STRETCH_0_htype_shift                                           (3)
#define  SE_SE20_STRETCH_0_vtype_shift                                           (2)
#define  SE_SE20_STRETCH_0_hodd_shift                                            (1)
#define  SE_SE20_STRETCH_0_vodd_shift                                            (0)
#define  SE_SE20_STRETCH_0_repl_alpha_mask                                       (0x00000080)
#define  SE_SE20_STRETCH_0_repl_color_mask                                       (0x00000040)
#define  SE_SE20_STRETCH_0_ref_alpha_mask                                        (0x00000020)
#define  SE_SE20_STRETCH_0_htype_mask                                            (0x00000018)
#define  SE_SE20_STRETCH_0_vtype_mask                                            (0x00000004)
#define  SE_SE20_STRETCH_0_hodd_mask                                             (0x00000002)
#define  SE_SE20_STRETCH_0_vodd_mask                                             (0x00000001)
#define  SE_SE20_STRETCH_0_repl_alpha(data)                                      (0x00000080&((data)<<7))
#define  SE_SE20_STRETCH_0_repl_color(data)                                      (0x00000040&((data)<<6))
#define  SE_SE20_STRETCH_0_ref_alpha(data)                                       (0x00000020&((data)<<5))
#define  SE_SE20_STRETCH_0_htype(data)                                           (0x00000018&((data)<<3))
#define  SE_SE20_STRETCH_0_vtype(data)                                           (0x00000004&((data)<<2))
#define  SE_SE20_STRETCH_0_hodd(data)                                            (0x00000002&((data)<<1))
#define  SE_SE20_STRETCH_0_vodd(data)                                            (0x00000001&(data))
#define  SE_SE20_STRETCH_0_get_repl_alpha(data)                                  ((0x00000080&(data))>>7)
#define  SE_SE20_STRETCH_0_get_repl_color(data)                                  ((0x00000040&(data))>>6)
#define  SE_SE20_STRETCH_0_get_ref_alpha(data)                                   ((0x00000020&(data))>>5)
#define  SE_SE20_STRETCH_0_get_htype(data)                                       ((0x00000018&(data))>>3)
#define  SE_SE20_STRETCH_0_get_vtype(data)                                       ((0x00000004&(data))>>2)
#define  SE_SE20_STRETCH_0_get_hodd(data)                                        ((0x00000002&(data))>>1)
#define  SE_SE20_STRETCH_0_get_vodd(data)                                        (0x00000001&(data))

#define  SE_SE20_STRETCH_1                                                      0x1800C324
#define  SE_SE20_STRETCH_1_reg_addr                                              "0xB800C324"
#define  SE_SE20_STRETCH_1_reg                                                   0xB800C324
#define  SE_SE20_STRETCH_1_inst_addr                                             "0x0047"
#define  set_SE_SE20_STRETCH_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_STRETCH_1_reg)=data)
#define  get_SE_SE20_STRETCH_1_reg                                               (*((volatile unsigned int*)SE_SE20_STRETCH_1_reg))
#define  SE_SE20_STRETCH_1_repl_alpha_shift                                      (7)
#define  SE_SE20_STRETCH_1_repl_color_shift                                      (6)
#define  SE_SE20_STRETCH_1_ref_alpha_shift                                       (5)
#define  SE_SE20_STRETCH_1_htype_shift                                           (3)
#define  SE_SE20_STRETCH_1_vtype_shift                                           (2)
#define  SE_SE20_STRETCH_1_hodd_shift                                            (1)
#define  SE_SE20_STRETCH_1_vodd_shift                                            (0)
#define  SE_SE20_STRETCH_1_repl_alpha_mask                                       (0x00000080)
#define  SE_SE20_STRETCH_1_repl_color_mask                                       (0x00000040)
#define  SE_SE20_STRETCH_1_ref_alpha_mask                                        (0x00000020)
#define  SE_SE20_STRETCH_1_htype_mask                                            (0x00000018)
#define  SE_SE20_STRETCH_1_vtype_mask                                            (0x00000004)
#define  SE_SE20_STRETCH_1_hodd_mask                                             (0x00000002)
#define  SE_SE20_STRETCH_1_vodd_mask                                             (0x00000001)
#define  SE_SE20_STRETCH_1_repl_alpha(data)                                      (0x00000080&((data)<<7))
#define  SE_SE20_STRETCH_1_repl_color(data)                                      (0x00000040&((data)<<6))
#define  SE_SE20_STRETCH_1_ref_alpha(data)                                       (0x00000020&((data)<<5))
#define  SE_SE20_STRETCH_1_htype(data)                                           (0x00000018&((data)<<3))
#define  SE_SE20_STRETCH_1_vtype(data)                                           (0x00000004&((data)<<2))
#define  SE_SE20_STRETCH_1_hodd(data)                                            (0x00000002&((data)<<1))
#define  SE_SE20_STRETCH_1_vodd(data)                                            (0x00000001&(data))
#define  SE_SE20_STRETCH_1_get_repl_alpha(data)                                  ((0x00000080&(data))>>7)
#define  SE_SE20_STRETCH_1_get_repl_color(data)                                  ((0x00000040&(data))>>6)
#define  SE_SE20_STRETCH_1_get_ref_alpha(data)                                   ((0x00000020&(data))>>5)
#define  SE_SE20_STRETCH_1_get_htype(data)                                       ((0x00000018&(data))>>3)
#define  SE_SE20_STRETCH_1_get_vtype(data)                                       ((0x00000004&(data))>>2)
#define  SE_SE20_STRETCH_1_get_hodd(data)                                        ((0x00000002&(data))>>1)
#define  SE_SE20_STRETCH_1_get_vodd(data)                                        (0x00000001&(data))

#define  SE_SE20_HDHS_0                                                         0x1800C330
#define  SE_SE20_HDHS_0_reg_addr                                                 "0xB800C330"
#define  SE_SE20_HDHS_0_reg                                                      0xB800C330
#define  SE_SE20_HDHS_0_inst_addr                                                "0x0048"
#define  set_SE_SE20_HDHS_0_reg(data)                                            (*((volatile unsigned int*)SE_SE20_HDHS_0_reg)=data)
#define  get_SE_SE20_HDHS_0_reg                                                  (*((volatile unsigned int*)SE_SE20_HDHS_0_reg))
#define  SE_SE20_HDHS_0_h_scaling_iniph_shift                                    (18)
#define  SE_SE20_HDHS_0_h_scaling_dph_msb_shift                                  (14)
#define  SE_SE20_HDHS_0_h_scaling_dph_lsb_shift                                  (0)
#define  SE_SE20_HDHS_0_h_scaling_iniph_mask                                     (0x01FC0000)
#define  SE_SE20_HDHS_0_h_scaling_dph_msb_mask                                   (0x0003C000)
#define  SE_SE20_HDHS_0_h_scaling_dph_lsb_mask                                   (0x00003FFF)
#define  SE_SE20_HDHS_0_h_scaling_iniph(data)                                    (0x01FC0000&((data)<<18))
#define  SE_SE20_HDHS_0_h_scaling_dph_msb(data)                                  (0x0003C000&((data)<<14))
#define  SE_SE20_HDHS_0_h_scaling_dph_lsb(data)                                  (0x00003FFF&(data))
#define  SE_SE20_HDHS_0_get_h_scaling_iniph(data)                                ((0x01FC0000&(data))>>18)
#define  SE_SE20_HDHS_0_get_h_scaling_dph_msb(data)                              ((0x0003C000&(data))>>14)
#define  SE_SE20_HDHS_0_get_h_scaling_dph_lsb(data)                              (0x00003FFF&(data))

#define  SE_SE20_HDHS_1                                                         0x1800C334
#define  SE_SE20_HDHS_1_reg_addr                                                 "0xB800C334"
#define  SE_SE20_HDHS_1_reg                                                      0xB800C334
#define  SE_SE20_HDHS_1_inst_addr                                                "0x0049"
#define  set_SE_SE20_HDHS_1_reg(data)                                            (*((volatile unsigned int*)SE_SE20_HDHS_1_reg)=data)
#define  get_SE_SE20_HDHS_1_reg                                                  (*((volatile unsigned int*)SE_SE20_HDHS_1_reg))
#define  SE_SE20_HDHS_1_h_scaling_iniph_shift                                    (18)
#define  SE_SE20_HDHS_1_h_scaling_dph_msb_shift                                  (14)
#define  SE_SE20_HDHS_1_h_scaling_dph_lsb_shift                                  (0)
#define  SE_SE20_HDHS_1_h_scaling_iniph_mask                                     (0x01FC0000)
#define  SE_SE20_HDHS_1_h_scaling_dph_msb_mask                                   (0x0003C000)
#define  SE_SE20_HDHS_1_h_scaling_dph_lsb_mask                                   (0x00003FFF)
#define  SE_SE20_HDHS_1_h_scaling_iniph(data)                                    (0x01FC0000&((data)<<18))
#define  SE_SE20_HDHS_1_h_scaling_dph_msb(data)                                  (0x0003C000&((data)<<14))
#define  SE_SE20_HDHS_1_h_scaling_dph_lsb(data)                                  (0x00003FFF&(data))
#define  SE_SE20_HDHS_1_get_h_scaling_iniph(data)                                ((0x01FC0000&(data))>>18)
#define  SE_SE20_HDHS_1_get_h_scaling_dph_msb(data)                              ((0x0003C000&(data))>>14)
#define  SE_SE20_HDHS_1_get_h_scaling_dph_lsb(data)                              (0x00003FFF&(data))

#define  SE_SE20_VDHS_0                                                         0x1800C340
#define  SE_SE20_VDHS_0_reg_addr                                                 "0xB800C340"
#define  SE_SE20_VDHS_0_reg                                                      0xB800C340
#define  SE_SE20_VDHS_0_inst_addr                                                "0x004A"
#define  set_SE_SE20_VDHS_0_reg(data)                                            (*((volatile unsigned int*)SE_SE20_VDHS_0_reg)=data)
#define  get_SE_SE20_VDHS_0_reg                                                  (*((volatile unsigned int*)SE_SE20_VDHS_0_reg))
#define  SE_SE20_VDHS_0_v_scaling_iniph_shift                                    (18)
#define  SE_SE20_VDHS_0_v_scaling_dph_msb_shift                                  (14)
#define  SE_SE20_VDHS_0_v_scaling_dph_lsb_shift                                  (0)
#define  SE_SE20_VDHS_0_v_scaling_iniph_mask                                     (0x01FC0000)
#define  SE_SE20_VDHS_0_v_scaling_dph_msb_mask                                   (0x0003C000)
#define  SE_SE20_VDHS_0_v_scaling_dph_lsb_mask                                   (0x00003FFF)
#define  SE_SE20_VDHS_0_v_scaling_iniph(data)                                    (0x01FC0000&((data)<<18))
#define  SE_SE20_VDHS_0_v_scaling_dph_msb(data)                                  (0x0003C000&((data)<<14))
#define  SE_SE20_VDHS_0_v_scaling_dph_lsb(data)                                  (0x00003FFF&(data))
#define  SE_SE20_VDHS_0_get_v_scaling_iniph(data)                                ((0x01FC0000&(data))>>18)
#define  SE_SE20_VDHS_0_get_v_scaling_dph_msb(data)                              ((0x0003C000&(data))>>14)
#define  SE_SE20_VDHS_0_get_v_scaling_dph_lsb(data)                              (0x00003FFF&(data))

#define  SE_SE20_VDHS_1                                                         0x1800C344
#define  SE_SE20_VDHS_1_reg_addr                                                 "0xB800C344"
#define  SE_SE20_VDHS_1_reg                                                      0xB800C344
#define  SE_SE20_VDHS_1_inst_addr                                                "0x004B"
#define  set_SE_SE20_VDHS_1_reg(data)                                            (*((volatile unsigned int*)SE_SE20_VDHS_1_reg)=data)
#define  get_SE_SE20_VDHS_1_reg                                                  (*((volatile unsigned int*)SE_SE20_VDHS_1_reg))
#define  SE_SE20_VDHS_1_v_scaling_iniph_shift                                    (18)
#define  SE_SE20_VDHS_1_v_scaling_dph_msb_shift                                  (14)
#define  SE_SE20_VDHS_1_v_scaling_dph_lsb_shift                                  (0)
#define  SE_SE20_VDHS_1_v_scaling_iniph_mask                                     (0x01FC0000)
#define  SE_SE20_VDHS_1_v_scaling_dph_msb_mask                                   (0x0003C000)
#define  SE_SE20_VDHS_1_v_scaling_dph_lsb_mask                                   (0x00003FFF)
#define  SE_SE20_VDHS_1_v_scaling_iniph(data)                                    (0x01FC0000&((data)<<18))
#define  SE_SE20_VDHS_1_v_scaling_dph_msb(data)                                  (0x0003C000&((data)<<14))
#define  SE_SE20_VDHS_1_v_scaling_dph_lsb(data)                                  (0x00003FFF&(data))
#define  SE_SE20_VDHS_1_get_v_scaling_iniph(data)                                ((0x01FC0000&(data))>>18)
#define  SE_SE20_VDHS_1_get_v_scaling_dph_msb(data)                              ((0x0003C000&(data))>>14)
#define  SE_SE20_VDHS_1_get_v_scaling_dph_lsb(data)                              (0x00003FFF&(data))

#define  SE_FILM_DET_C_SET_0_0                                                  0x1800C350
#define  SE_FILM_DET_C_SET_0_0_reg_addr                                          "0xB800C350"
#define  SE_FILM_DET_C_SET_0_0_reg                                               0xB800C350
#define  SE_FILM_DET_C_SET_0_0_inst_addr                                         "0x004C"
#define  set_SE_FILM_DET_C_SET_0_0_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_C_SET_0_0_reg)=data)
#define  get_SE_FILM_DET_C_SET_0_0_reg                                           (*((volatile unsigned int*)SE_FILM_DET_C_SET_0_0_reg))
#define  SE_FILM_DET_C_SET_0_0_fmdet_c_v1_shift                                  (10)
#define  SE_FILM_DET_C_SET_0_0_fmdet_c_v0_shift                                  (0)
#define  SE_FILM_DET_C_SET_0_0_fmdet_c_v1_mask                                   (0x000FFC00)
#define  SE_FILM_DET_C_SET_0_0_fmdet_c_v0_mask                                   (0x000003FF)
#define  SE_FILM_DET_C_SET_0_0_fmdet_c_v1(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_C_SET_0_0_fmdet_c_v0(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_C_SET_0_0_get_fmdet_c_v1(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_C_SET_0_0_get_fmdet_c_v0(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_C_SET_0_1                                                  0x1800C354
#define  SE_FILM_DET_C_SET_0_1_reg_addr                                          "0xB800C354"
#define  SE_FILM_DET_C_SET_0_1_reg                                               0xB800C354
#define  SE_FILM_DET_C_SET_0_1_inst_addr                                         "0x004D"
#define  set_SE_FILM_DET_C_SET_0_1_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_C_SET_0_1_reg)=data)
#define  get_SE_FILM_DET_C_SET_0_1_reg                                           (*((volatile unsigned int*)SE_FILM_DET_C_SET_0_1_reg))
#define  SE_FILM_DET_C_SET_0_1_fmdet_c_v1_shift                                  (10)
#define  SE_FILM_DET_C_SET_0_1_fmdet_c_v0_shift                                  (0)
#define  SE_FILM_DET_C_SET_0_1_fmdet_c_v1_mask                                   (0x000FFC00)
#define  SE_FILM_DET_C_SET_0_1_fmdet_c_v0_mask                                   (0x000003FF)
#define  SE_FILM_DET_C_SET_0_1_fmdet_c_v1(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_C_SET_0_1_fmdet_c_v0(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_C_SET_0_1_get_fmdet_c_v1(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_C_SET_0_1_get_fmdet_c_v0(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_C_SET_1_0                                                  0x1800C360
#define  SE_FILM_DET_C_SET_1_0_reg_addr                                          "0xB800C360"
#define  SE_FILM_DET_C_SET_1_0_reg                                               0xB800C360
#define  SE_FILM_DET_C_SET_1_0_inst_addr                                         "0x004E"
#define  set_SE_FILM_DET_C_SET_1_0_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_C_SET_1_0_reg)=data)
#define  get_SE_FILM_DET_C_SET_1_0_reg                                           (*((volatile unsigned int*)SE_FILM_DET_C_SET_1_0_reg))
#define  SE_FILM_DET_C_SET_1_0_fmdet_c_h1_shift                                  (10)
#define  SE_FILM_DET_C_SET_1_0_fmdet_c_h0_shift                                  (0)
#define  SE_FILM_DET_C_SET_1_0_fmdet_c_h1_mask                                   (0x000FFC00)
#define  SE_FILM_DET_C_SET_1_0_fmdet_c_h0_mask                                   (0x000003FF)
#define  SE_FILM_DET_C_SET_1_0_fmdet_c_h1(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_C_SET_1_0_fmdet_c_h0(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_C_SET_1_0_get_fmdet_c_h1(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_C_SET_1_0_get_fmdet_c_h0(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_C_SET_1_1                                                  0x1800C364
#define  SE_FILM_DET_C_SET_1_1_reg_addr                                          "0xB800C364"
#define  SE_FILM_DET_C_SET_1_1_reg                                               0xB800C364
#define  SE_FILM_DET_C_SET_1_1_inst_addr                                         "0x004F"
#define  set_SE_FILM_DET_C_SET_1_1_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_C_SET_1_1_reg)=data)
#define  get_SE_FILM_DET_C_SET_1_1_reg                                           (*((volatile unsigned int*)SE_FILM_DET_C_SET_1_1_reg))
#define  SE_FILM_DET_C_SET_1_1_fmdet_c_h1_shift                                  (10)
#define  SE_FILM_DET_C_SET_1_1_fmdet_c_h0_shift                                  (0)
#define  SE_FILM_DET_C_SET_1_1_fmdet_c_h1_mask                                   (0x000FFC00)
#define  SE_FILM_DET_C_SET_1_1_fmdet_c_h0_mask                                   (0x000003FF)
#define  SE_FILM_DET_C_SET_1_1_fmdet_c_h1(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_C_SET_1_1_fmdet_c_h0(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_C_SET_1_1_get_fmdet_c_h1(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_C_SET_1_1_get_fmdet_c_h0(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_0_0                                                  0x1800C370
#define  SE_FILM_DET_9_SET_0_0_reg_addr                                          "0xB800C370"
#define  SE_FILM_DET_9_SET_0_0_reg                                               0xB800C370
#define  SE_FILM_DET_9_SET_0_0_inst_addr                                         "0x0050"
#define  set_SE_FILM_DET_9_SET_0_0_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_0_0_reg)=data)
#define  get_SE_FILM_DET_9_SET_0_0_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_0_0_reg))
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v2_shift                                  (20)
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v1_shift                                  (10)
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v0_shift                                  (0)
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v2_mask                                   (0x3FF00000)
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v1_mask                                   (0x000FFC00)
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v0_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v2(data)                                  (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v1(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_9_SET_0_0_fmdet_9_v0(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_0_0_get_fmdet_9_v2(data)                              ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_9_SET_0_0_get_fmdet_9_v1(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_9_SET_0_0_get_fmdet_9_v0(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_0_1                                                  0x1800C374
#define  SE_FILM_DET_9_SET_0_1_reg_addr                                          "0xB800C374"
#define  SE_FILM_DET_9_SET_0_1_reg                                               0xB800C374
#define  SE_FILM_DET_9_SET_0_1_inst_addr                                         "0x0051"
#define  set_SE_FILM_DET_9_SET_0_1_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_0_1_reg)=data)
#define  get_SE_FILM_DET_9_SET_0_1_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_0_1_reg))
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v2_shift                                  (20)
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v1_shift                                  (10)
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v0_shift                                  (0)
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v2_mask                                   (0x3FF00000)
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v1_mask                                   (0x000FFC00)
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v0_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v2(data)                                  (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v1(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_9_SET_0_1_fmdet_9_v0(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_0_1_get_fmdet_9_v2(data)                              ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_9_SET_0_1_get_fmdet_9_v1(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_9_SET_0_1_get_fmdet_9_v0(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_1_0                                                  0x1800C380
#define  SE_FILM_DET_9_SET_1_0_reg_addr                                          "0xB800C380"
#define  SE_FILM_DET_9_SET_1_0_reg                                               0xB800C380
#define  SE_FILM_DET_9_SET_1_0_inst_addr                                         "0x0052"
#define  set_SE_FILM_DET_9_SET_1_0_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_1_0_reg)=data)
#define  get_SE_FILM_DET_9_SET_1_0_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_1_0_reg))
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v5_shift                                  (20)
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v4_shift                                  (10)
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v3_shift                                  (0)
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v5_mask                                   (0x3FF00000)
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v4_mask                                   (0x000FFC00)
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v3_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v5(data)                                  (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v4(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_9_SET_1_0_fmdet_9_v3(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_1_0_get_fmdet_9_v5(data)                              ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_9_SET_1_0_get_fmdet_9_v4(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_9_SET_1_0_get_fmdet_9_v3(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_1_1                                                  0x1800C384
#define  SE_FILM_DET_9_SET_1_1_reg_addr                                          "0xB800C384"
#define  SE_FILM_DET_9_SET_1_1_reg                                               0xB800C384
#define  SE_FILM_DET_9_SET_1_1_inst_addr                                         "0x0053"
#define  set_SE_FILM_DET_9_SET_1_1_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_1_1_reg)=data)
#define  get_SE_FILM_DET_9_SET_1_1_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_1_1_reg))
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v5_shift                                  (20)
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v4_shift                                  (10)
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v3_shift                                  (0)
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v5_mask                                   (0x3FF00000)
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v4_mask                                   (0x000FFC00)
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v3_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v5(data)                                  (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v4(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_9_SET_1_1_fmdet_9_v3(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_1_1_get_fmdet_9_v5(data)                              ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_9_SET_1_1_get_fmdet_9_v4(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_9_SET_1_1_get_fmdet_9_v3(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_2_0                                                  0x1800C390
#define  SE_FILM_DET_9_SET_2_0_reg_addr                                          "0xB800C390"
#define  SE_FILM_DET_9_SET_2_0_reg                                               0xB800C390
#define  SE_FILM_DET_9_SET_2_0_inst_addr                                         "0x0054"
#define  set_SE_FILM_DET_9_SET_2_0_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_2_0_reg)=data)
#define  get_SE_FILM_DET_9_SET_2_0_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_2_0_reg))
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v8_shift                                  (20)
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v7_shift                                  (10)
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v6_shift                                  (0)
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v8_mask                                   (0x3FF00000)
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v7_mask                                   (0x000FFC00)
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v6_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v8(data)                                  (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v7(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_9_SET_2_0_fmdet_9_v6(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_2_0_get_fmdet_9_v8(data)                              ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_9_SET_2_0_get_fmdet_9_v7(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_9_SET_2_0_get_fmdet_9_v6(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_2_1                                                  0x1800C394
#define  SE_FILM_DET_9_SET_2_1_reg_addr                                          "0xB800C394"
#define  SE_FILM_DET_9_SET_2_1_reg                                               0xB800C394
#define  SE_FILM_DET_9_SET_2_1_inst_addr                                         "0x0055"
#define  set_SE_FILM_DET_9_SET_2_1_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_2_1_reg)=data)
#define  get_SE_FILM_DET_9_SET_2_1_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_2_1_reg))
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v8_shift                                  (20)
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v7_shift                                  (10)
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v6_shift                                  (0)
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v8_mask                                   (0x3FF00000)
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v7_mask                                   (0x000FFC00)
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v6_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v8(data)                                  (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v7(data)                                  (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_9_SET_2_1_fmdet_9_v6(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_2_1_get_fmdet_9_v8(data)                              ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_9_SET_2_1_get_fmdet_9_v7(data)                              ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_9_SET_2_1_get_fmdet_9_v6(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_3_0                                                  0x1800C3A0
#define  SE_FILM_DET_9_SET_3_0_reg_addr                                          "0xB800C3A0"
#define  SE_FILM_DET_9_SET_3_0_reg                                               0xB800C3A0
#define  SE_FILM_DET_9_SET_3_0_inst_addr                                         "0x0056"
#define  set_SE_FILM_DET_9_SET_3_0_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_3_0_reg)=data)
#define  get_SE_FILM_DET_9_SET_3_0_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_3_0_reg))
#define  SE_FILM_DET_9_SET_3_0_fmdet_9_v9_shift                                  (0)
#define  SE_FILM_DET_9_SET_3_0_fmdet_9_v9_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_3_0_fmdet_9_v9(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_3_0_get_fmdet_9_v9(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_9_SET_3_1                                                  0x1800C3A4
#define  SE_FILM_DET_9_SET_3_1_reg_addr                                          "0xB800C3A4"
#define  SE_FILM_DET_9_SET_3_1_reg                                               0xB800C3A4
#define  SE_FILM_DET_9_SET_3_1_inst_addr                                         "0x0057"
#define  set_SE_FILM_DET_9_SET_3_1_reg(data)                                     (*((volatile unsigned int*)SE_FILM_DET_9_SET_3_1_reg)=data)
#define  get_SE_FILM_DET_9_SET_3_1_reg                                           (*((volatile unsigned int*)SE_FILM_DET_9_SET_3_1_reg))
#define  SE_FILM_DET_9_SET_3_1_fmdet_9_v9_shift                                  (0)
#define  SE_FILM_DET_9_SET_3_1_fmdet_9_v9_mask                                   (0x000003FF)
#define  SE_FILM_DET_9_SET_3_1_fmdet_9_v9(data)                                  (0x000003FF&(data))
#define  SE_FILM_DET_9_SET_3_1_get_fmdet_9_v9(data)                              (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_0_0                                                 0x1800C3B0
#define  SE_FILM_DET_25_SET_0_0_reg_addr                                         "0xB800C3B0"
#define  SE_FILM_DET_25_SET_0_0_reg                                              0xB800C3B0
#define  SE_FILM_DET_25_SET_0_0_inst_addr                                        "0x0058"
#define  set_SE_FILM_DET_25_SET_0_0_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_0_0_reg)=data)
#define  get_SE_FILM_DET_25_SET_0_0_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_0_0_reg))
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v2_shift                                (20)
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v1_shift                                (10)
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v0_shift                                (0)
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v2_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v1_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v0_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v2(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v1(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_0_0_fmdet_25_v0(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_0_0_get_fmdet_25_v2(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_0_0_get_fmdet_25_v1(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_0_0_get_fmdet_25_v0(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_0_1                                                 0x1800C3B4
#define  SE_FILM_DET_25_SET_0_1_reg_addr                                         "0xB800C3B4"
#define  SE_FILM_DET_25_SET_0_1_reg                                              0xB800C3B4
#define  SE_FILM_DET_25_SET_0_1_inst_addr                                        "0x0059"
#define  set_SE_FILM_DET_25_SET_0_1_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_0_1_reg)=data)
#define  get_SE_FILM_DET_25_SET_0_1_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_0_1_reg))
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v2_shift                                (20)
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v1_shift                                (10)
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v0_shift                                (0)
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v2_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v1_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v0_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v2(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v1(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_0_1_fmdet_25_v0(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_0_1_get_fmdet_25_v2(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_0_1_get_fmdet_25_v1(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_0_1_get_fmdet_25_v0(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_1_0                                                 0x1800C3C0
#define  SE_FILM_DET_25_SET_1_0_reg_addr                                         "0xB800C3C0"
#define  SE_FILM_DET_25_SET_1_0_reg                                              0xB800C3C0
#define  SE_FILM_DET_25_SET_1_0_inst_addr                                        "0x005A"
#define  set_SE_FILM_DET_25_SET_1_0_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_1_0_reg)=data)
#define  get_SE_FILM_DET_25_SET_1_0_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_1_0_reg))
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v5_shift                                (20)
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v4_shift                                (10)
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v3_shift                                (0)
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v5_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v4_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v3_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v5(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v4(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_1_0_fmdet_25_v3(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_1_0_get_fmdet_25_v5(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_1_0_get_fmdet_25_v4(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_1_0_get_fmdet_25_v3(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_1_1                                                 0x1800C3C4
#define  SE_FILM_DET_25_SET_1_1_reg_addr                                         "0xB800C3C4"
#define  SE_FILM_DET_25_SET_1_1_reg                                              0xB800C3C4
#define  SE_FILM_DET_25_SET_1_1_inst_addr                                        "0x005B"
#define  set_SE_FILM_DET_25_SET_1_1_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_1_1_reg)=data)
#define  get_SE_FILM_DET_25_SET_1_1_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_1_1_reg))
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v5_shift                                (20)
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v4_shift                                (10)
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v3_shift                                (0)
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v5_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v4_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v3_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v5(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v4(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_1_1_fmdet_25_v3(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_1_1_get_fmdet_25_v5(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_1_1_get_fmdet_25_v4(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_1_1_get_fmdet_25_v3(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_2_0                                                 0x1800C3D0
#define  SE_FILM_DET_25_SET_2_0_reg_addr                                         "0xB800C3D0"
#define  SE_FILM_DET_25_SET_2_0_reg                                              0xB800C3D0
#define  SE_FILM_DET_25_SET_2_0_inst_addr                                        "0x005C"
#define  set_SE_FILM_DET_25_SET_2_0_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_2_0_reg)=data)
#define  get_SE_FILM_DET_25_SET_2_0_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_2_0_reg))
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h2_shift                                (20)
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h1_shift                                (10)
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h0_shift                                (0)
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h2_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h1_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h0_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h2(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h1(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_2_0_fmdet_25_h0(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_2_0_get_fmdet_25_h2(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_2_0_get_fmdet_25_h1(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_2_0_get_fmdet_25_h0(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_2_1                                                 0x1800C3D4
#define  SE_FILM_DET_25_SET_2_1_reg_addr                                         "0xB800C3D4"
#define  SE_FILM_DET_25_SET_2_1_reg                                              0xB800C3D4
#define  SE_FILM_DET_25_SET_2_1_inst_addr                                        "0x005D"
#define  set_SE_FILM_DET_25_SET_2_1_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_2_1_reg)=data)
#define  get_SE_FILM_DET_25_SET_2_1_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_2_1_reg))
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h2_shift                                (20)
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h1_shift                                (10)
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h0_shift                                (0)
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h2_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h1_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h0_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h2(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h1(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_2_1_fmdet_25_h0(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_2_1_get_fmdet_25_h2(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_2_1_get_fmdet_25_h1(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_2_1_get_fmdet_25_h0(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_3_0                                                 0x1800C3E0
#define  SE_FILM_DET_25_SET_3_0_reg_addr                                         "0xB800C3E0"
#define  SE_FILM_DET_25_SET_3_0_reg                                              0xB800C3E0
#define  SE_FILM_DET_25_SET_3_0_inst_addr                                        "0x005E"
#define  set_SE_FILM_DET_25_SET_3_0_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_3_0_reg)=data)
#define  get_SE_FILM_DET_25_SET_3_0_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_3_0_reg))
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h5_shift                                (20)
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h4_shift                                (10)
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h3_shift                                (0)
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h5_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h4_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h3_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h5(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h4(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_3_0_fmdet_25_h3(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_3_0_get_fmdet_25_h5(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_3_0_get_fmdet_25_h4(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_3_0_get_fmdet_25_h3(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_25_SET_3_1                                                 0x1800C3E4
#define  SE_FILM_DET_25_SET_3_1_reg_addr                                         "0xB800C3E4"
#define  SE_FILM_DET_25_SET_3_1_reg                                              0xB800C3E4
#define  SE_FILM_DET_25_SET_3_1_inst_addr                                        "0x005F"
#define  set_SE_FILM_DET_25_SET_3_1_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_25_SET_3_1_reg)=data)
#define  get_SE_FILM_DET_25_SET_3_1_reg                                          (*((volatile unsigned int*)SE_FILM_DET_25_SET_3_1_reg))
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h5_shift                                (20)
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h4_shift                                (10)
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h3_shift                                (0)
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h5_mask                                 (0x3FF00000)
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h4_mask                                 (0x000FFC00)
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h3_mask                                 (0x000003FF)
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h5(data)                                (0x3FF00000&((data)<<20))
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h4(data)                                (0x000FFC00&((data)<<10))
#define  SE_FILM_DET_25_SET_3_1_fmdet_25_h3(data)                                (0x000003FF&(data))
#define  SE_FILM_DET_25_SET_3_1_get_fmdet_25_h5(data)                            ((0x3FF00000&(data))>>20)
#define  SE_FILM_DET_25_SET_3_1_get_fmdet_25_h4(data)                            ((0x000FFC00&(data))>>10)
#define  SE_FILM_DET_25_SET_3_1_get_fmdet_25_h3(data)                            (0x000003FF&(data))

#define  SE_FILM_DET_ALL_RESULT_0                                               0x1800C3F0
#define  SE_FILM_DET_ALL_RESULT_0_reg_addr                                       "0xB800C3F0"
#define  SE_FILM_DET_ALL_RESULT_0_reg                                            0xB800C3F0
#define  SE_FILM_DET_ALL_RESULT_0_inst_addr                                      "0x0060"
#define  set_SE_FILM_DET_ALL_RESULT_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_ALL_RESULT_0_reg)=data)
#define  get_SE_FILM_DET_ALL_RESULT_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_ALL_RESULT_0_reg))
#define  SE_FILM_DET_ALL_RESULT_0_fmdet_motion_all_shift                         (0)
#define  SE_FILM_DET_ALL_RESULT_0_fmdet_motion_all_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_ALL_RESULT_0_fmdet_motion_all(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_ALL_RESULT_0_get_fmdet_motion_all(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_ALL_RESULT_1                                               0x1800C3F4
#define  SE_FILM_DET_ALL_RESULT_1_reg_addr                                       "0xB800C3F4"
#define  SE_FILM_DET_ALL_RESULT_1_reg                                            0xB800C3F4
#define  SE_FILM_DET_ALL_RESULT_1_inst_addr                                      "0x0061"
#define  set_SE_FILM_DET_ALL_RESULT_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_ALL_RESULT_1_reg)=data)
#define  get_SE_FILM_DET_ALL_RESULT_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_ALL_RESULT_1_reg))
#define  SE_FILM_DET_ALL_RESULT_1_fmdet_motion_all_shift                         (0)
#define  SE_FILM_DET_ALL_RESULT_1_fmdet_motion_all_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_ALL_RESULT_1_fmdet_motion_all(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_ALL_RESULT_1_get_fmdet_motion_all(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_C_RESULT_0                                                 0x1800C400
#define  SE_FILM_DET_C_RESULT_0_reg_addr                                         "0xB800C400"
#define  SE_FILM_DET_C_RESULT_0_reg                                              0xB800C400
#define  SE_FILM_DET_C_RESULT_0_inst_addr                                        "0x0062"
#define  set_SE_FILM_DET_C_RESULT_0_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_C_RESULT_0_reg)=data)
#define  get_SE_FILM_DET_C_RESULT_0_reg                                          (*((volatile unsigned int*)SE_FILM_DET_C_RESULT_0_reg))
#define  SE_FILM_DET_C_RESULT_0_fmdet_c_motion_shift                             (0)
#define  SE_FILM_DET_C_RESULT_0_fmdet_c_motion_mask                              (0x07FFFFFF)
#define  SE_FILM_DET_C_RESULT_0_fmdet_c_motion(data)                             (0x07FFFFFF&(data))
#define  SE_FILM_DET_C_RESULT_0_get_fmdet_c_motion(data)                         (0x07FFFFFF&(data))

#define  SE_FILM_DET_C_RESULT_1                                                 0x1800C404
#define  SE_FILM_DET_C_RESULT_1_reg_addr                                         "0xB800C404"
#define  SE_FILM_DET_C_RESULT_1_reg                                              0xB800C404
#define  SE_FILM_DET_C_RESULT_1_inst_addr                                        "0x0063"
#define  set_SE_FILM_DET_C_RESULT_1_reg(data)                                    (*((volatile unsigned int*)SE_FILM_DET_C_RESULT_1_reg)=data)
#define  get_SE_FILM_DET_C_RESULT_1_reg                                          (*((volatile unsigned int*)SE_FILM_DET_C_RESULT_1_reg))
#define  SE_FILM_DET_C_RESULT_1_fmdet_c_motion_shift                             (0)
#define  SE_FILM_DET_C_RESULT_1_fmdet_c_motion_mask                              (0x07FFFFFF)
#define  SE_FILM_DET_C_RESULT_1_fmdet_c_motion(data)                             (0x07FFFFFF&(data))
#define  SE_FILM_DET_C_RESULT_1_get_fmdet_c_motion(data)                         (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_0_0                                               0x1800C420
#define  SE_FILM_DET_9_RESULT_0_0_reg_addr                                       "0xB800C420"
#define  SE_FILM_DET_9_RESULT_0_0_reg                                            0xB800C420
#define  SE_FILM_DET_9_RESULT_0_0_inst_addr                                      "0x0064"
#define  set_SE_FILM_DET_9_RESULT_0_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_0_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_0_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_0_0_reg))
#define  SE_FILM_DET_9_RESULT_0_0_fmdet_9_motion_0_shift                         (0)
#define  SE_FILM_DET_9_RESULT_0_0_fmdet_9_motion_0_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_0_0_fmdet_9_motion_0(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_0_0_get_fmdet_9_motion_0(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_0_1                                               0x1800C424
#define  SE_FILM_DET_9_RESULT_0_1_reg_addr                                       "0xB800C424"
#define  SE_FILM_DET_9_RESULT_0_1_reg                                            0xB800C424
#define  SE_FILM_DET_9_RESULT_0_1_inst_addr                                      "0x0065"
#define  set_SE_FILM_DET_9_RESULT_0_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_0_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_0_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_0_1_reg))
#define  SE_FILM_DET_9_RESULT_0_1_fmdet_9_motion_0_shift                         (0)
#define  SE_FILM_DET_9_RESULT_0_1_fmdet_9_motion_0_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_0_1_fmdet_9_motion_0(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_0_1_get_fmdet_9_motion_0(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_1_0                                               0x1800C430
#define  SE_FILM_DET_9_RESULT_1_0_reg_addr                                       "0xB800C430"
#define  SE_FILM_DET_9_RESULT_1_0_reg                                            0xB800C430
#define  SE_FILM_DET_9_RESULT_1_0_inst_addr                                      "0x0066"
#define  set_SE_FILM_DET_9_RESULT_1_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_1_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_1_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_1_0_reg))
#define  SE_FILM_DET_9_RESULT_1_0_fmdet_9_motion_1_shift                         (0)
#define  SE_FILM_DET_9_RESULT_1_0_fmdet_9_motion_1_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_1_0_fmdet_9_motion_1(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_1_0_get_fmdet_9_motion_1(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_1_1                                               0x1800C434
#define  SE_FILM_DET_9_RESULT_1_1_reg_addr                                       "0xB800C434"
#define  SE_FILM_DET_9_RESULT_1_1_reg                                            0xB800C434
#define  SE_FILM_DET_9_RESULT_1_1_inst_addr                                      "0x0067"
#define  set_SE_FILM_DET_9_RESULT_1_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_1_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_1_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_1_1_reg))
#define  SE_FILM_DET_9_RESULT_1_1_fmdet_9_motion_1_shift                         (0)
#define  SE_FILM_DET_9_RESULT_1_1_fmdet_9_motion_1_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_1_1_fmdet_9_motion_1(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_1_1_get_fmdet_9_motion_1(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_2_0                                               0x1800C440
#define  SE_FILM_DET_9_RESULT_2_0_reg_addr                                       "0xB800C440"
#define  SE_FILM_DET_9_RESULT_2_0_reg                                            0xB800C440
#define  SE_FILM_DET_9_RESULT_2_0_inst_addr                                      "0x0068"
#define  set_SE_FILM_DET_9_RESULT_2_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_2_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_2_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_2_0_reg))
#define  SE_FILM_DET_9_RESULT_2_0_fmdet_9_motion_2_shift                         (0)
#define  SE_FILM_DET_9_RESULT_2_0_fmdet_9_motion_2_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_2_0_fmdet_9_motion_2(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_2_0_get_fmdet_9_motion_2(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_2_1                                               0x1800C444
#define  SE_FILM_DET_9_RESULT_2_1_reg_addr                                       "0xB800C444"
#define  SE_FILM_DET_9_RESULT_2_1_reg                                            0xB800C444
#define  SE_FILM_DET_9_RESULT_2_1_inst_addr                                      "0x0069"
#define  set_SE_FILM_DET_9_RESULT_2_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_2_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_2_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_2_1_reg))
#define  SE_FILM_DET_9_RESULT_2_1_fmdet_9_motion_2_shift                         (0)
#define  SE_FILM_DET_9_RESULT_2_1_fmdet_9_motion_2_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_2_1_fmdet_9_motion_2(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_2_1_get_fmdet_9_motion_2(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_3_0                                               0x1800C450
#define  SE_FILM_DET_9_RESULT_3_0_reg_addr                                       "0xB800C450"
#define  SE_FILM_DET_9_RESULT_3_0_reg                                            0xB800C450
#define  SE_FILM_DET_9_RESULT_3_0_inst_addr                                      "0x006A"
#define  set_SE_FILM_DET_9_RESULT_3_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_3_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_3_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_3_0_reg))
#define  SE_FILM_DET_9_RESULT_3_0_fmdet_9_motion_3_shift                         (0)
#define  SE_FILM_DET_9_RESULT_3_0_fmdet_9_motion_3_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_3_0_fmdet_9_motion_3(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_3_0_get_fmdet_9_motion_3(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_3_1                                               0x1800C454
#define  SE_FILM_DET_9_RESULT_3_1_reg_addr                                       "0xB800C454"
#define  SE_FILM_DET_9_RESULT_3_1_reg                                            0xB800C454
#define  SE_FILM_DET_9_RESULT_3_1_inst_addr                                      "0x006B"
#define  set_SE_FILM_DET_9_RESULT_3_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_3_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_3_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_3_1_reg))
#define  SE_FILM_DET_9_RESULT_3_1_fmdet_9_motion_3_shift                         (0)
#define  SE_FILM_DET_9_RESULT_3_1_fmdet_9_motion_3_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_3_1_fmdet_9_motion_3(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_3_1_get_fmdet_9_motion_3(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_4_0                                               0x1800C460
#define  SE_FILM_DET_9_RESULT_4_0_reg_addr                                       "0xB800C460"
#define  SE_FILM_DET_9_RESULT_4_0_reg                                            0xB800C460
#define  SE_FILM_DET_9_RESULT_4_0_inst_addr                                      "0x006C"
#define  set_SE_FILM_DET_9_RESULT_4_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_4_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_4_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_4_0_reg))
#define  SE_FILM_DET_9_RESULT_4_0_fmdet_9_motion_4_shift                         (0)
#define  SE_FILM_DET_9_RESULT_4_0_fmdet_9_motion_4_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_4_0_fmdet_9_motion_4(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_4_0_get_fmdet_9_motion_4(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_4_1                                               0x1800C464
#define  SE_FILM_DET_9_RESULT_4_1_reg_addr                                       "0xB800C464"
#define  SE_FILM_DET_9_RESULT_4_1_reg                                            0xB800C464
#define  SE_FILM_DET_9_RESULT_4_1_inst_addr                                      "0x006D"
#define  set_SE_FILM_DET_9_RESULT_4_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_4_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_4_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_4_1_reg))
#define  SE_FILM_DET_9_RESULT_4_1_fmdet_9_motion_4_shift                         (0)
#define  SE_FILM_DET_9_RESULT_4_1_fmdet_9_motion_4_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_4_1_fmdet_9_motion_4(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_4_1_get_fmdet_9_motion_4(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_5_0                                               0x1800C470
#define  SE_FILM_DET_9_RESULT_5_0_reg_addr                                       "0xB800C470"
#define  SE_FILM_DET_9_RESULT_5_0_reg                                            0xB800C470
#define  SE_FILM_DET_9_RESULT_5_0_inst_addr                                      "0x006E"
#define  set_SE_FILM_DET_9_RESULT_5_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_5_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_5_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_5_0_reg))
#define  SE_FILM_DET_9_RESULT_5_0_fmdet_9_motion_5_shift                         (0)
#define  SE_FILM_DET_9_RESULT_5_0_fmdet_9_motion_5_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_5_0_fmdet_9_motion_5(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_5_0_get_fmdet_9_motion_5(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_5_1                                               0x1800C474
#define  SE_FILM_DET_9_RESULT_5_1_reg_addr                                       "0xB800C474"
#define  SE_FILM_DET_9_RESULT_5_1_reg                                            0xB800C474
#define  SE_FILM_DET_9_RESULT_5_1_inst_addr                                      "0x006F"
#define  set_SE_FILM_DET_9_RESULT_5_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_5_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_5_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_5_1_reg))
#define  SE_FILM_DET_9_RESULT_5_1_fmdet_9_motion_5_shift                         (0)
#define  SE_FILM_DET_9_RESULT_5_1_fmdet_9_motion_5_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_5_1_fmdet_9_motion_5(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_5_1_get_fmdet_9_motion_5(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_6_0                                               0x1800C480
#define  SE_FILM_DET_9_RESULT_6_0_reg_addr                                       "0xB800C480"
#define  SE_FILM_DET_9_RESULT_6_0_reg                                            0xB800C480
#define  SE_FILM_DET_9_RESULT_6_0_inst_addr                                      "0x0070"
#define  set_SE_FILM_DET_9_RESULT_6_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_6_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_6_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_6_0_reg))
#define  SE_FILM_DET_9_RESULT_6_0_fmdet_9_motion_6_shift                         (0)
#define  SE_FILM_DET_9_RESULT_6_0_fmdet_9_motion_6_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_6_0_fmdet_9_motion_6(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_6_0_get_fmdet_9_motion_6(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_6_1                                               0x1800C484
#define  SE_FILM_DET_9_RESULT_6_1_reg_addr                                       "0xB800C484"
#define  SE_FILM_DET_9_RESULT_6_1_reg                                            0xB800C484
#define  SE_FILM_DET_9_RESULT_6_1_inst_addr                                      "0x0071"
#define  set_SE_FILM_DET_9_RESULT_6_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_6_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_6_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_6_1_reg))
#define  SE_FILM_DET_9_RESULT_6_1_fmdet_9_motion_6_shift                         (0)
#define  SE_FILM_DET_9_RESULT_6_1_fmdet_9_motion_6_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_6_1_fmdet_9_motion_6(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_6_1_get_fmdet_9_motion_6(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_7_0                                               0x1800C490
#define  SE_FILM_DET_9_RESULT_7_0_reg_addr                                       "0xB800C490"
#define  SE_FILM_DET_9_RESULT_7_0_reg                                            0xB800C490
#define  SE_FILM_DET_9_RESULT_7_0_inst_addr                                      "0x0072"
#define  set_SE_FILM_DET_9_RESULT_7_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_7_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_7_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_7_0_reg))
#define  SE_FILM_DET_9_RESULT_7_0_fmdet_9_motion_7_shift                         (0)
#define  SE_FILM_DET_9_RESULT_7_0_fmdet_9_motion_7_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_7_0_fmdet_9_motion_7(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_7_0_get_fmdet_9_motion_7(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_7_1                                               0x1800C494
#define  SE_FILM_DET_9_RESULT_7_1_reg_addr                                       "0xB800C494"
#define  SE_FILM_DET_9_RESULT_7_1_reg                                            0xB800C494
#define  SE_FILM_DET_9_RESULT_7_1_inst_addr                                      "0x0073"
#define  set_SE_FILM_DET_9_RESULT_7_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_7_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_7_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_7_1_reg))
#define  SE_FILM_DET_9_RESULT_7_1_fmdet_9_motion_7_shift                         (0)
#define  SE_FILM_DET_9_RESULT_7_1_fmdet_9_motion_7_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_7_1_fmdet_9_motion_7(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_7_1_get_fmdet_9_motion_7(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_8_0                                               0x1800C4A0
#define  SE_FILM_DET_9_RESULT_8_0_reg_addr                                       "0xB800C4A0"
#define  SE_FILM_DET_9_RESULT_8_0_reg                                            0xB800C4A0
#define  SE_FILM_DET_9_RESULT_8_0_inst_addr                                      "0x0074"
#define  set_SE_FILM_DET_9_RESULT_8_0_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_8_0_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_8_0_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_8_0_reg))
#define  SE_FILM_DET_9_RESULT_8_0_fmdet_9_motion_8_shift                         (0)
#define  SE_FILM_DET_9_RESULT_8_0_fmdet_9_motion_8_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_8_0_fmdet_9_motion_8(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_8_0_get_fmdet_9_motion_8(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_9_RESULT_8_1                                               0x1800C4A4
#define  SE_FILM_DET_9_RESULT_8_1_reg_addr                                       "0xB800C4A4"
#define  SE_FILM_DET_9_RESULT_8_1_reg                                            0xB800C4A4
#define  SE_FILM_DET_9_RESULT_8_1_inst_addr                                      "0x0075"
#define  set_SE_FILM_DET_9_RESULT_8_1_reg(data)                                  (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_8_1_reg)=data)
#define  get_SE_FILM_DET_9_RESULT_8_1_reg                                        (*((volatile unsigned int*)SE_FILM_DET_9_RESULT_8_1_reg))
#define  SE_FILM_DET_9_RESULT_8_1_fmdet_9_motion_8_shift                         (0)
#define  SE_FILM_DET_9_RESULT_8_1_fmdet_9_motion_8_mask                          (0x07FFFFFF)
#define  SE_FILM_DET_9_RESULT_8_1_fmdet_9_motion_8(data)                         (0x07FFFFFF&(data))
#define  SE_FILM_DET_9_RESULT_8_1_get_fmdet_9_motion_8(data)                     (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_00_0                                             0x1800C4B0
#define  SE_FILM_DET_25_RESULT_00_0_reg_addr                                     "0xB800C4B0"
#define  SE_FILM_DET_25_RESULT_00_0_reg                                          0xB800C4B0
#define  SE_FILM_DET_25_RESULT_00_0_inst_addr                                    "0x0076"
#define  set_SE_FILM_DET_25_RESULT_00_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_00_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_00_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_00_0_reg))
#define  SE_FILM_DET_25_RESULT_00_0_fmdet_25_motion_r00_shift                    (0)
#define  SE_FILM_DET_25_RESULT_00_0_fmdet_25_motion_r00_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_00_0_fmdet_25_motion_r00(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_00_0_get_fmdet_25_motion_r00(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_00_1                                             0x1800C4B4
#define  SE_FILM_DET_25_RESULT_00_1_reg_addr                                     "0xB800C4B4"
#define  SE_FILM_DET_25_RESULT_00_1_reg                                          0xB800C4B4
#define  SE_FILM_DET_25_RESULT_00_1_inst_addr                                    "0x0077"
#define  set_SE_FILM_DET_25_RESULT_00_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_00_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_00_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_00_1_reg))
#define  SE_FILM_DET_25_RESULT_00_1_fmdet_25_motion_r00_shift                    (0)
#define  SE_FILM_DET_25_RESULT_00_1_fmdet_25_motion_r00_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_00_1_fmdet_25_motion_r00(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_00_1_get_fmdet_25_motion_r00(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_01_0                                             0x1800C4C0
#define  SE_FILM_DET_25_RESULT_01_0_reg_addr                                     "0xB800C4C0"
#define  SE_FILM_DET_25_RESULT_01_0_reg                                          0xB800C4C0
#define  SE_FILM_DET_25_RESULT_01_0_inst_addr                                    "0x0078"
#define  set_SE_FILM_DET_25_RESULT_01_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_01_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_01_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_01_0_reg))
#define  SE_FILM_DET_25_RESULT_01_0_fmdet_25_motion_r01_shift                    (0)
#define  SE_FILM_DET_25_RESULT_01_0_fmdet_25_motion_r01_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_01_0_fmdet_25_motion_r01(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_01_0_get_fmdet_25_motion_r01(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_01_1                                             0x1800C4C4
#define  SE_FILM_DET_25_RESULT_01_1_reg_addr                                     "0xB800C4C4"
#define  SE_FILM_DET_25_RESULT_01_1_reg                                          0xB800C4C4
#define  SE_FILM_DET_25_RESULT_01_1_inst_addr                                    "0x0079"
#define  set_SE_FILM_DET_25_RESULT_01_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_01_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_01_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_01_1_reg))
#define  SE_FILM_DET_25_RESULT_01_1_fmdet_25_motion_r01_shift                    (0)
#define  SE_FILM_DET_25_RESULT_01_1_fmdet_25_motion_r01_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_01_1_fmdet_25_motion_r01(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_01_1_get_fmdet_25_motion_r01(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_02_0                                             0x1800C4D0
#define  SE_FILM_DET_25_RESULT_02_0_reg_addr                                     "0xB800C4D0"
#define  SE_FILM_DET_25_RESULT_02_0_reg                                          0xB800C4D0
#define  SE_FILM_DET_25_RESULT_02_0_inst_addr                                    "0x007A"
#define  set_SE_FILM_DET_25_RESULT_02_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_02_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_02_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_02_0_reg))
#define  SE_FILM_DET_25_RESULT_02_0_fmdet_25_motion_r02_shift                    (0)
#define  SE_FILM_DET_25_RESULT_02_0_fmdet_25_motion_r02_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_02_0_fmdet_25_motion_r02(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_02_0_get_fmdet_25_motion_r02(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_02_1                                             0x1800C4D4
#define  SE_FILM_DET_25_RESULT_02_1_reg_addr                                     "0xB800C4D4"
#define  SE_FILM_DET_25_RESULT_02_1_reg                                          0xB800C4D4
#define  SE_FILM_DET_25_RESULT_02_1_inst_addr                                    "0x007B"
#define  set_SE_FILM_DET_25_RESULT_02_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_02_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_02_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_02_1_reg))
#define  SE_FILM_DET_25_RESULT_02_1_fmdet_25_motion_r02_shift                    (0)
#define  SE_FILM_DET_25_RESULT_02_1_fmdet_25_motion_r02_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_02_1_fmdet_25_motion_r02(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_02_1_get_fmdet_25_motion_r02(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_03_0                                             0x1800C4E0
#define  SE_FILM_DET_25_RESULT_03_0_reg_addr                                     "0xB800C4E0"
#define  SE_FILM_DET_25_RESULT_03_0_reg                                          0xB800C4E0
#define  SE_FILM_DET_25_RESULT_03_0_inst_addr                                    "0x007C"
#define  set_SE_FILM_DET_25_RESULT_03_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_03_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_03_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_03_0_reg))
#define  SE_FILM_DET_25_RESULT_03_0_fmdet_25_motion_r03_shift                    (0)
#define  SE_FILM_DET_25_RESULT_03_0_fmdet_25_motion_r03_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_03_0_fmdet_25_motion_r03(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_03_0_get_fmdet_25_motion_r03(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_03_1                                             0x1800C4E4
#define  SE_FILM_DET_25_RESULT_03_1_reg_addr                                     "0xB800C4E4"
#define  SE_FILM_DET_25_RESULT_03_1_reg                                          0xB800C4E4
#define  SE_FILM_DET_25_RESULT_03_1_inst_addr                                    "0x007D"
#define  set_SE_FILM_DET_25_RESULT_03_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_03_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_03_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_03_1_reg))
#define  SE_FILM_DET_25_RESULT_03_1_fmdet_25_motion_r03_shift                    (0)
#define  SE_FILM_DET_25_RESULT_03_1_fmdet_25_motion_r03_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_03_1_fmdet_25_motion_r03(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_03_1_get_fmdet_25_motion_r03(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_04_0                                             0x1800C4F0
#define  SE_FILM_DET_25_RESULT_04_0_reg_addr                                     "0xB800C4F0"
#define  SE_FILM_DET_25_RESULT_04_0_reg                                          0xB800C4F0
#define  SE_FILM_DET_25_RESULT_04_0_inst_addr                                    "0x007E"
#define  set_SE_FILM_DET_25_RESULT_04_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_04_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_04_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_04_0_reg))
#define  SE_FILM_DET_25_RESULT_04_0_fmdet_25_motion_r04_shift                    (0)
#define  SE_FILM_DET_25_RESULT_04_0_fmdet_25_motion_r04_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_04_0_fmdet_25_motion_r04(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_04_0_get_fmdet_25_motion_r04(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_04_1                                             0x1800C4F4
#define  SE_FILM_DET_25_RESULT_04_1_reg_addr                                     "0xB800C4F4"
#define  SE_FILM_DET_25_RESULT_04_1_reg                                          0xB800C4F4
#define  SE_FILM_DET_25_RESULT_04_1_inst_addr                                    "0x007F"
#define  set_SE_FILM_DET_25_RESULT_04_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_04_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_04_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_04_1_reg))
#define  SE_FILM_DET_25_RESULT_04_1_fmdet_25_motion_r04_shift                    (0)
#define  SE_FILM_DET_25_RESULT_04_1_fmdet_25_motion_r04_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_04_1_fmdet_25_motion_r04(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_04_1_get_fmdet_25_motion_r04(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_05_0                                             0x1800C500
#define  SE_FILM_DET_25_RESULT_05_0_reg_addr                                     "0xB800C500"
#define  SE_FILM_DET_25_RESULT_05_0_reg                                          0xB800C500
#define  SE_FILM_DET_25_RESULT_05_0_inst_addr                                    "0x0080"
#define  set_SE_FILM_DET_25_RESULT_05_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_05_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_05_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_05_0_reg))
#define  SE_FILM_DET_25_RESULT_05_0_fmdet_25_motion_r05_shift                    (0)
#define  SE_FILM_DET_25_RESULT_05_0_fmdet_25_motion_r05_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_05_0_fmdet_25_motion_r05(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_05_0_get_fmdet_25_motion_r05(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_05_1                                             0x1800C504
#define  SE_FILM_DET_25_RESULT_05_1_reg_addr                                     "0xB800C504"
#define  SE_FILM_DET_25_RESULT_05_1_reg                                          0xB800C504
#define  SE_FILM_DET_25_RESULT_05_1_inst_addr                                    "0x0081"
#define  set_SE_FILM_DET_25_RESULT_05_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_05_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_05_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_05_1_reg))
#define  SE_FILM_DET_25_RESULT_05_1_fmdet_25_motion_r05_shift                    (0)
#define  SE_FILM_DET_25_RESULT_05_1_fmdet_25_motion_r05_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_05_1_fmdet_25_motion_r05(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_05_1_get_fmdet_25_motion_r05(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_06_0                                             0x1800C510
#define  SE_FILM_DET_25_RESULT_06_0_reg_addr                                     "0xB800C510"
#define  SE_FILM_DET_25_RESULT_06_0_reg                                          0xB800C510
#define  SE_FILM_DET_25_RESULT_06_0_inst_addr                                    "0x0082"
#define  set_SE_FILM_DET_25_RESULT_06_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_06_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_06_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_06_0_reg))
#define  SE_FILM_DET_25_RESULT_06_0_fmdet_25_motion_r06_shift                    (0)
#define  SE_FILM_DET_25_RESULT_06_0_fmdet_25_motion_r06_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_06_0_fmdet_25_motion_r06(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_06_0_get_fmdet_25_motion_r06(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_06_1                                             0x1800C514
#define  SE_FILM_DET_25_RESULT_06_1_reg_addr                                     "0xB800C514"
#define  SE_FILM_DET_25_RESULT_06_1_reg                                          0xB800C514
#define  SE_FILM_DET_25_RESULT_06_1_inst_addr                                    "0x0083"
#define  set_SE_FILM_DET_25_RESULT_06_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_06_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_06_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_06_1_reg))
#define  SE_FILM_DET_25_RESULT_06_1_fmdet_25_motion_r06_shift                    (0)
#define  SE_FILM_DET_25_RESULT_06_1_fmdet_25_motion_r06_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_06_1_fmdet_25_motion_r06(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_06_1_get_fmdet_25_motion_r06(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_07_0                                             0x1800C520
#define  SE_FILM_DET_25_RESULT_07_0_reg_addr                                     "0xB800C520"
#define  SE_FILM_DET_25_RESULT_07_0_reg                                          0xB800C520
#define  SE_FILM_DET_25_RESULT_07_0_inst_addr                                    "0x0084"
#define  set_SE_FILM_DET_25_RESULT_07_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_07_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_07_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_07_0_reg))
#define  SE_FILM_DET_25_RESULT_07_0_fmdet_25_motion_r07_shift                    (0)
#define  SE_FILM_DET_25_RESULT_07_0_fmdet_25_motion_r07_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_07_0_fmdet_25_motion_r07(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_07_0_get_fmdet_25_motion_r07(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_07_1                                             0x1800C524
#define  SE_FILM_DET_25_RESULT_07_1_reg_addr                                     "0xB800C524"
#define  SE_FILM_DET_25_RESULT_07_1_reg                                          0xB800C524
#define  SE_FILM_DET_25_RESULT_07_1_inst_addr                                    "0x0085"
#define  set_SE_FILM_DET_25_RESULT_07_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_07_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_07_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_07_1_reg))
#define  SE_FILM_DET_25_RESULT_07_1_fmdet_25_motion_r07_shift                    (0)
#define  SE_FILM_DET_25_RESULT_07_1_fmdet_25_motion_r07_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_07_1_fmdet_25_motion_r07(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_07_1_get_fmdet_25_motion_r07(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_08_0                                             0x1800C530
#define  SE_FILM_DET_25_RESULT_08_0_reg_addr                                     "0xB800C530"
#define  SE_FILM_DET_25_RESULT_08_0_reg                                          0xB800C530
#define  SE_FILM_DET_25_RESULT_08_0_inst_addr                                    "0x0086"
#define  set_SE_FILM_DET_25_RESULT_08_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_08_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_08_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_08_0_reg))
#define  SE_FILM_DET_25_RESULT_08_0_fmdet_25_motion_r08_shift                    (0)
#define  SE_FILM_DET_25_RESULT_08_0_fmdet_25_motion_r08_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_08_0_fmdet_25_motion_r08(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_08_0_get_fmdet_25_motion_r08(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_08_1                                             0x1800C534
#define  SE_FILM_DET_25_RESULT_08_1_reg_addr                                     "0xB800C534"
#define  SE_FILM_DET_25_RESULT_08_1_reg                                          0xB800C534
#define  SE_FILM_DET_25_RESULT_08_1_inst_addr                                    "0x0087"
#define  set_SE_FILM_DET_25_RESULT_08_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_08_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_08_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_08_1_reg))
#define  SE_FILM_DET_25_RESULT_08_1_fmdet_25_motion_r08_shift                    (0)
#define  SE_FILM_DET_25_RESULT_08_1_fmdet_25_motion_r08_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_08_1_fmdet_25_motion_r08(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_08_1_get_fmdet_25_motion_r08(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_09_0                                             0x1800C540
#define  SE_FILM_DET_25_RESULT_09_0_reg_addr                                     "0xB800C540"
#define  SE_FILM_DET_25_RESULT_09_0_reg                                          0xB800C540
#define  SE_FILM_DET_25_RESULT_09_0_inst_addr                                    "0x0088"
#define  set_SE_FILM_DET_25_RESULT_09_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_09_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_09_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_09_0_reg))
#define  SE_FILM_DET_25_RESULT_09_0_fmdet_25_motion_r09_shift                    (0)
#define  SE_FILM_DET_25_RESULT_09_0_fmdet_25_motion_r09_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_09_0_fmdet_25_motion_r09(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_09_0_get_fmdet_25_motion_r09(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_09_1                                             0x1800C544
#define  SE_FILM_DET_25_RESULT_09_1_reg_addr                                     "0xB800C544"
#define  SE_FILM_DET_25_RESULT_09_1_reg                                          0xB800C544
#define  SE_FILM_DET_25_RESULT_09_1_inst_addr                                    "0x0089"
#define  set_SE_FILM_DET_25_RESULT_09_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_09_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_09_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_09_1_reg))
#define  SE_FILM_DET_25_RESULT_09_1_fmdet_25_motion_r09_shift                    (0)
#define  SE_FILM_DET_25_RESULT_09_1_fmdet_25_motion_r09_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_09_1_fmdet_25_motion_r09(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_09_1_get_fmdet_25_motion_r09(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_10_0                                             0x1800C550
#define  SE_FILM_DET_25_RESULT_10_0_reg_addr                                     "0xB800C550"
#define  SE_FILM_DET_25_RESULT_10_0_reg                                          0xB800C550
#define  SE_FILM_DET_25_RESULT_10_0_inst_addr                                    "0x008A"
#define  set_SE_FILM_DET_25_RESULT_10_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_10_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_10_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_10_0_reg))
#define  SE_FILM_DET_25_RESULT_10_0_fmdet_25_motion_r10_shift                    (0)
#define  SE_FILM_DET_25_RESULT_10_0_fmdet_25_motion_r10_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_10_0_fmdet_25_motion_r10(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_10_0_get_fmdet_25_motion_r10(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_10_1                                             0x1800C554
#define  SE_FILM_DET_25_RESULT_10_1_reg_addr                                     "0xB800C554"
#define  SE_FILM_DET_25_RESULT_10_1_reg                                          0xB800C554
#define  SE_FILM_DET_25_RESULT_10_1_inst_addr                                    "0x008B"
#define  set_SE_FILM_DET_25_RESULT_10_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_10_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_10_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_10_1_reg))
#define  SE_FILM_DET_25_RESULT_10_1_fmdet_25_motion_r10_shift                    (0)
#define  SE_FILM_DET_25_RESULT_10_1_fmdet_25_motion_r10_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_10_1_fmdet_25_motion_r10(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_10_1_get_fmdet_25_motion_r10(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_11_0                                             0x1800C560
#define  SE_FILM_DET_25_RESULT_11_0_reg_addr                                     "0xB800C560"
#define  SE_FILM_DET_25_RESULT_11_0_reg                                          0xB800C560
#define  SE_FILM_DET_25_RESULT_11_0_inst_addr                                    "0x008C"
#define  set_SE_FILM_DET_25_RESULT_11_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_11_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_11_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_11_0_reg))
#define  SE_FILM_DET_25_RESULT_11_0_fmdet_25_motion_r11_shift                    (0)
#define  SE_FILM_DET_25_RESULT_11_0_fmdet_25_motion_r11_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_11_0_fmdet_25_motion_r11(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_11_0_get_fmdet_25_motion_r11(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_11_1                                             0x1800C564
#define  SE_FILM_DET_25_RESULT_11_1_reg_addr                                     "0xB800C564"
#define  SE_FILM_DET_25_RESULT_11_1_reg                                          0xB800C564
#define  SE_FILM_DET_25_RESULT_11_1_inst_addr                                    "0x008D"
#define  set_SE_FILM_DET_25_RESULT_11_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_11_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_11_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_11_1_reg))
#define  SE_FILM_DET_25_RESULT_11_1_fmdet_25_motion_r11_shift                    (0)
#define  SE_FILM_DET_25_RESULT_11_1_fmdet_25_motion_r11_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_11_1_fmdet_25_motion_r11(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_11_1_get_fmdet_25_motion_r11(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_12_0                                             0x1800C570
#define  SE_FILM_DET_25_RESULT_12_0_reg_addr                                     "0xB800C570"
#define  SE_FILM_DET_25_RESULT_12_0_reg                                          0xB800C570
#define  SE_FILM_DET_25_RESULT_12_0_inst_addr                                    "0x008E"
#define  set_SE_FILM_DET_25_RESULT_12_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_12_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_12_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_12_0_reg))
#define  SE_FILM_DET_25_RESULT_12_0_fmdet_25_motion_r12_shift                    (0)
#define  SE_FILM_DET_25_RESULT_12_0_fmdet_25_motion_r12_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_12_0_fmdet_25_motion_r12(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_12_0_get_fmdet_25_motion_r12(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_12_1                                             0x1800C574
#define  SE_FILM_DET_25_RESULT_12_1_reg_addr                                     "0xB800C574"
#define  SE_FILM_DET_25_RESULT_12_1_reg                                          0xB800C574
#define  SE_FILM_DET_25_RESULT_12_1_inst_addr                                    "0x008F"
#define  set_SE_FILM_DET_25_RESULT_12_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_12_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_12_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_12_1_reg))
#define  SE_FILM_DET_25_RESULT_12_1_fmdet_25_motion_r12_shift                    (0)
#define  SE_FILM_DET_25_RESULT_12_1_fmdet_25_motion_r12_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_12_1_fmdet_25_motion_r12(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_12_1_get_fmdet_25_motion_r12(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_13_0                                             0x1800C580
#define  SE_FILM_DET_25_RESULT_13_0_reg_addr                                     "0xB800C580"
#define  SE_FILM_DET_25_RESULT_13_0_reg                                          0xB800C580
#define  SE_FILM_DET_25_RESULT_13_0_inst_addr                                    "0x0090"
#define  set_SE_FILM_DET_25_RESULT_13_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_13_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_13_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_13_0_reg))
#define  SE_FILM_DET_25_RESULT_13_0_fmdet_25_motion_r13_shift                    (0)
#define  SE_FILM_DET_25_RESULT_13_0_fmdet_25_motion_r13_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_13_0_fmdet_25_motion_r13(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_13_0_get_fmdet_25_motion_r13(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_13_1                                             0x1800C584
#define  SE_FILM_DET_25_RESULT_13_1_reg_addr                                     "0xB800C584"
#define  SE_FILM_DET_25_RESULT_13_1_reg                                          0xB800C584
#define  SE_FILM_DET_25_RESULT_13_1_inst_addr                                    "0x0091"
#define  set_SE_FILM_DET_25_RESULT_13_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_13_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_13_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_13_1_reg))
#define  SE_FILM_DET_25_RESULT_13_1_fmdet_25_motion_r13_shift                    (0)
#define  SE_FILM_DET_25_RESULT_13_1_fmdet_25_motion_r13_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_13_1_fmdet_25_motion_r13(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_13_1_get_fmdet_25_motion_r13(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_14_0                                             0x1800C590
#define  SE_FILM_DET_25_RESULT_14_0_reg_addr                                     "0xB800C590"
#define  SE_FILM_DET_25_RESULT_14_0_reg                                          0xB800C590
#define  SE_FILM_DET_25_RESULT_14_0_inst_addr                                    "0x0092"
#define  set_SE_FILM_DET_25_RESULT_14_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_14_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_14_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_14_0_reg))
#define  SE_FILM_DET_25_RESULT_14_0_fmdet_25_motion_r14_shift                    (0)
#define  SE_FILM_DET_25_RESULT_14_0_fmdet_25_motion_r14_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_14_0_fmdet_25_motion_r14(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_14_0_get_fmdet_25_motion_r14(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_14_1                                             0x1800C594
#define  SE_FILM_DET_25_RESULT_14_1_reg_addr                                     "0xB800C594"
#define  SE_FILM_DET_25_RESULT_14_1_reg                                          0xB800C594
#define  SE_FILM_DET_25_RESULT_14_1_inst_addr                                    "0x0093"
#define  set_SE_FILM_DET_25_RESULT_14_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_14_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_14_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_14_1_reg))
#define  SE_FILM_DET_25_RESULT_14_1_fmdet_25_motion_r14_shift                    (0)
#define  SE_FILM_DET_25_RESULT_14_1_fmdet_25_motion_r14_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_14_1_fmdet_25_motion_r14(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_14_1_get_fmdet_25_motion_r14(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_15_0                                             0x1800C5A0
#define  SE_FILM_DET_25_RESULT_15_0_reg_addr                                     "0xB800C5A0"
#define  SE_FILM_DET_25_RESULT_15_0_reg                                          0xB800C5A0
#define  SE_FILM_DET_25_RESULT_15_0_inst_addr                                    "0x0094"
#define  set_SE_FILM_DET_25_RESULT_15_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_15_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_15_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_15_0_reg))
#define  SE_FILM_DET_25_RESULT_15_0_fmdet_25_motion_r15_shift                    (0)
#define  SE_FILM_DET_25_RESULT_15_0_fmdet_25_motion_r15_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_15_0_fmdet_25_motion_r15(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_15_0_get_fmdet_25_motion_r15(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_15_1                                             0x1800C5A4
#define  SE_FILM_DET_25_RESULT_15_1_reg_addr                                     "0xB800C5A4"
#define  SE_FILM_DET_25_RESULT_15_1_reg                                          0xB800C5A4
#define  SE_FILM_DET_25_RESULT_15_1_inst_addr                                    "0x0095"
#define  set_SE_FILM_DET_25_RESULT_15_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_15_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_15_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_15_1_reg))
#define  SE_FILM_DET_25_RESULT_15_1_fmdet_25_motion_r15_shift                    (0)
#define  SE_FILM_DET_25_RESULT_15_1_fmdet_25_motion_r15_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_15_1_fmdet_25_motion_r15(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_15_1_get_fmdet_25_motion_r15(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_16_0                                             0x1800C5B0
#define  SE_FILM_DET_25_RESULT_16_0_reg_addr                                     "0xB800C5B0"
#define  SE_FILM_DET_25_RESULT_16_0_reg                                          0xB800C5B0
#define  SE_FILM_DET_25_RESULT_16_0_inst_addr                                    "0x0096"
#define  set_SE_FILM_DET_25_RESULT_16_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_16_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_16_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_16_0_reg))
#define  SE_FILM_DET_25_RESULT_16_0_fmdet_25_motion_r16_shift                    (0)
#define  SE_FILM_DET_25_RESULT_16_0_fmdet_25_motion_r16_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_16_0_fmdet_25_motion_r16(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_16_0_get_fmdet_25_motion_r16(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_16_1                                             0x1800C5B4
#define  SE_FILM_DET_25_RESULT_16_1_reg_addr                                     "0xB800C5B4"
#define  SE_FILM_DET_25_RESULT_16_1_reg                                          0xB800C5B4
#define  SE_FILM_DET_25_RESULT_16_1_inst_addr                                    "0x0097"
#define  set_SE_FILM_DET_25_RESULT_16_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_16_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_16_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_16_1_reg))
#define  SE_FILM_DET_25_RESULT_16_1_fmdet_25_motion_r16_shift                    (0)
#define  SE_FILM_DET_25_RESULT_16_1_fmdet_25_motion_r16_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_16_1_fmdet_25_motion_r16(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_16_1_get_fmdet_25_motion_r16(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_17_0                                             0x1800C5C0
#define  SE_FILM_DET_25_RESULT_17_0_reg_addr                                     "0xB800C5C0"
#define  SE_FILM_DET_25_RESULT_17_0_reg                                          0xB800C5C0
#define  SE_FILM_DET_25_RESULT_17_0_inst_addr                                    "0x0098"
#define  set_SE_FILM_DET_25_RESULT_17_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_17_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_17_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_17_0_reg))
#define  SE_FILM_DET_25_RESULT_17_0_fmdet_25_motion_r17_shift                    (0)
#define  SE_FILM_DET_25_RESULT_17_0_fmdet_25_motion_r17_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_17_0_fmdet_25_motion_r17(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_17_0_get_fmdet_25_motion_r17(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_17_1                                             0x1800C5C4
#define  SE_FILM_DET_25_RESULT_17_1_reg_addr                                     "0xB800C5C4"
#define  SE_FILM_DET_25_RESULT_17_1_reg                                          0xB800C5C4
#define  SE_FILM_DET_25_RESULT_17_1_inst_addr                                    "0x0099"
#define  set_SE_FILM_DET_25_RESULT_17_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_17_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_17_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_17_1_reg))
#define  SE_FILM_DET_25_RESULT_17_1_fmdet_25_motion_r17_shift                    (0)
#define  SE_FILM_DET_25_RESULT_17_1_fmdet_25_motion_r17_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_17_1_fmdet_25_motion_r17(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_17_1_get_fmdet_25_motion_r17(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_18_0                                             0x1800C5D0
#define  SE_FILM_DET_25_RESULT_18_0_reg_addr                                     "0xB800C5D0"
#define  SE_FILM_DET_25_RESULT_18_0_reg                                          0xB800C5D0
#define  SE_FILM_DET_25_RESULT_18_0_inst_addr                                    "0x009A"
#define  set_SE_FILM_DET_25_RESULT_18_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_18_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_18_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_18_0_reg))
#define  SE_FILM_DET_25_RESULT_18_0_fmdet_25_motion_r18_shift                    (0)
#define  SE_FILM_DET_25_RESULT_18_0_fmdet_25_motion_r18_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_18_0_fmdet_25_motion_r18(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_18_0_get_fmdet_25_motion_r18(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_18_1                                             0x1800C5D4
#define  SE_FILM_DET_25_RESULT_18_1_reg_addr                                     "0xB800C5D4"
#define  SE_FILM_DET_25_RESULT_18_1_reg                                          0xB800C5D4
#define  SE_FILM_DET_25_RESULT_18_1_inst_addr                                    "0x009B"
#define  set_SE_FILM_DET_25_RESULT_18_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_18_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_18_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_18_1_reg))
#define  SE_FILM_DET_25_RESULT_18_1_fmdet_25_motion_r18_shift                    (0)
#define  SE_FILM_DET_25_RESULT_18_1_fmdet_25_motion_r18_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_18_1_fmdet_25_motion_r18(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_18_1_get_fmdet_25_motion_r18(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_19_0                                             0x1800C5E0
#define  SE_FILM_DET_25_RESULT_19_0_reg_addr                                     "0xB800C5E0"
#define  SE_FILM_DET_25_RESULT_19_0_reg                                          0xB800C5E0
#define  SE_FILM_DET_25_RESULT_19_0_inst_addr                                    "0x009C"
#define  set_SE_FILM_DET_25_RESULT_19_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_19_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_19_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_19_0_reg))
#define  SE_FILM_DET_25_RESULT_19_0_fmdet_25_motion_r19_shift                    (0)
#define  SE_FILM_DET_25_RESULT_19_0_fmdet_25_motion_r19_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_19_0_fmdet_25_motion_r19(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_19_0_get_fmdet_25_motion_r19(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_19_1                                             0x1800C5E4
#define  SE_FILM_DET_25_RESULT_19_1_reg_addr                                     "0xB800C5E4"
#define  SE_FILM_DET_25_RESULT_19_1_reg                                          0xB800C5E4
#define  SE_FILM_DET_25_RESULT_19_1_inst_addr                                    "0x009D"
#define  set_SE_FILM_DET_25_RESULT_19_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_19_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_19_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_19_1_reg))
#define  SE_FILM_DET_25_RESULT_19_1_fmdet_25_motion_r19_shift                    (0)
#define  SE_FILM_DET_25_RESULT_19_1_fmdet_25_motion_r19_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_19_1_fmdet_25_motion_r19(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_19_1_get_fmdet_25_motion_r19(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_20_0                                             0x1800C5F0
#define  SE_FILM_DET_25_RESULT_20_0_reg_addr                                     "0xB800C5F0"
#define  SE_FILM_DET_25_RESULT_20_0_reg                                          0xB800C5F0
#define  SE_FILM_DET_25_RESULT_20_0_inst_addr                                    "0x009E"
#define  set_SE_FILM_DET_25_RESULT_20_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_20_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_20_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_20_0_reg))
#define  SE_FILM_DET_25_RESULT_20_0_fmdet_25_motion_r20_shift                    (0)
#define  SE_FILM_DET_25_RESULT_20_0_fmdet_25_motion_r20_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_20_0_fmdet_25_motion_r20(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_20_0_get_fmdet_25_motion_r20(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_20_1                                             0x1800C5F4
#define  SE_FILM_DET_25_RESULT_20_1_reg_addr                                     "0xB800C5F4"
#define  SE_FILM_DET_25_RESULT_20_1_reg                                          0xB800C5F4
#define  SE_FILM_DET_25_RESULT_20_1_inst_addr                                    "0x009F"
#define  set_SE_FILM_DET_25_RESULT_20_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_20_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_20_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_20_1_reg))
#define  SE_FILM_DET_25_RESULT_20_1_fmdet_25_motion_r20_shift                    (0)
#define  SE_FILM_DET_25_RESULT_20_1_fmdet_25_motion_r20_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_20_1_fmdet_25_motion_r20(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_20_1_get_fmdet_25_motion_r20(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_21_0                                             0x1800C610
#define  SE_FILM_DET_25_RESULT_21_0_reg_addr                                     "0xB800C610"
#define  SE_FILM_DET_25_RESULT_21_0_reg                                          0xB800C610
#define  SE_FILM_DET_25_RESULT_21_0_inst_addr                                    "0x00A0"
#define  set_SE_FILM_DET_25_RESULT_21_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_21_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_21_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_21_0_reg))
#define  SE_FILM_DET_25_RESULT_21_0_fmdet_25_motion_r21_shift                    (0)
#define  SE_FILM_DET_25_RESULT_21_0_fmdet_25_motion_r21_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_21_0_fmdet_25_motion_r21(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_21_0_get_fmdet_25_motion_r21(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_21_1                                             0x1800C614
#define  SE_FILM_DET_25_RESULT_21_1_reg_addr                                     "0xB800C614"
#define  SE_FILM_DET_25_RESULT_21_1_reg                                          0xB800C614
#define  SE_FILM_DET_25_RESULT_21_1_inst_addr                                    "0x00A1"
#define  set_SE_FILM_DET_25_RESULT_21_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_21_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_21_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_21_1_reg))
#define  SE_FILM_DET_25_RESULT_21_1_fmdet_25_motion_r21_shift                    (0)
#define  SE_FILM_DET_25_RESULT_21_1_fmdet_25_motion_r21_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_21_1_fmdet_25_motion_r21(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_21_1_get_fmdet_25_motion_r21(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_22_0                                             0x1800C620
#define  SE_FILM_DET_25_RESULT_22_0_reg_addr                                     "0xB800C620"
#define  SE_FILM_DET_25_RESULT_22_0_reg                                          0xB800C620
#define  SE_FILM_DET_25_RESULT_22_0_inst_addr                                    "0x00A2"
#define  set_SE_FILM_DET_25_RESULT_22_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_22_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_22_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_22_0_reg))
#define  SE_FILM_DET_25_RESULT_22_0_fmdet_25_motion_r22_shift                    (0)
#define  SE_FILM_DET_25_RESULT_22_0_fmdet_25_motion_r22_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_22_0_fmdet_25_motion_r22(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_22_0_get_fmdet_25_motion_r22(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_22_1                                             0x1800C624
#define  SE_FILM_DET_25_RESULT_22_1_reg_addr                                     "0xB800C624"
#define  SE_FILM_DET_25_RESULT_22_1_reg                                          0xB800C624
#define  SE_FILM_DET_25_RESULT_22_1_inst_addr                                    "0x00A3"
#define  set_SE_FILM_DET_25_RESULT_22_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_22_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_22_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_22_1_reg))
#define  SE_FILM_DET_25_RESULT_22_1_fmdet_25_motion_r22_shift                    (0)
#define  SE_FILM_DET_25_RESULT_22_1_fmdet_25_motion_r22_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_22_1_fmdet_25_motion_r22(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_22_1_get_fmdet_25_motion_r22(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_23_0                                             0x1800C630
#define  SE_FILM_DET_25_RESULT_23_0_reg_addr                                     "0xB800C630"
#define  SE_FILM_DET_25_RESULT_23_0_reg                                          0xB800C630
#define  SE_FILM_DET_25_RESULT_23_0_inst_addr                                    "0x00A4"
#define  set_SE_FILM_DET_25_RESULT_23_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_23_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_23_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_23_0_reg))
#define  SE_FILM_DET_25_RESULT_23_0_fmdet_25_motion_r23_shift                    (0)
#define  SE_FILM_DET_25_RESULT_23_0_fmdet_25_motion_r23_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_23_0_fmdet_25_motion_r23(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_23_0_get_fmdet_25_motion_r23(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_23_1                                             0x1800C634
#define  SE_FILM_DET_25_RESULT_23_1_reg_addr                                     "0xB800C634"
#define  SE_FILM_DET_25_RESULT_23_1_reg                                          0xB800C634
#define  SE_FILM_DET_25_RESULT_23_1_inst_addr                                    "0x00A5"
#define  set_SE_FILM_DET_25_RESULT_23_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_23_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_23_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_23_1_reg))
#define  SE_FILM_DET_25_RESULT_23_1_fmdet_25_motion_r23_shift                    (0)
#define  SE_FILM_DET_25_RESULT_23_1_fmdet_25_motion_r23_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_23_1_fmdet_25_motion_r23(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_23_1_get_fmdet_25_motion_r23(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_24_0                                             0x1800C640
#define  SE_FILM_DET_25_RESULT_24_0_reg_addr                                     "0xB800C640"
#define  SE_FILM_DET_25_RESULT_24_0_reg                                          0xB800C640
#define  SE_FILM_DET_25_RESULT_24_0_inst_addr                                    "0x00A6"
#define  set_SE_FILM_DET_25_RESULT_24_0_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_24_0_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_24_0_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_24_0_reg))
#define  SE_FILM_DET_25_RESULT_24_0_fmdet_25_motion_r24_shift                    (0)
#define  SE_FILM_DET_25_RESULT_24_0_fmdet_25_motion_r24_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_24_0_fmdet_25_motion_r24(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_24_0_get_fmdet_25_motion_r24(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_25_RESULT_24_1                                             0x1800C644
#define  SE_FILM_DET_25_RESULT_24_1_reg_addr                                     "0xB800C644"
#define  SE_FILM_DET_25_RESULT_24_1_reg                                          0xB800C644
#define  SE_FILM_DET_25_RESULT_24_1_inst_addr                                    "0x00A7"
#define  set_SE_FILM_DET_25_RESULT_24_1_reg(data)                                (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_24_1_reg)=data)
#define  get_SE_FILM_DET_25_RESULT_24_1_reg                                      (*((volatile unsigned int*)SE_FILM_DET_25_RESULT_24_1_reg))
#define  SE_FILM_DET_25_RESULT_24_1_fmdet_25_motion_r24_shift                    (0)
#define  SE_FILM_DET_25_RESULT_24_1_fmdet_25_motion_r24_mask                     (0x07FFFFFF)
#define  SE_FILM_DET_25_RESULT_24_1_fmdet_25_motion_r24(data)                    (0x07FFFFFF&(data))
#define  SE_FILM_DET_25_RESULT_24_1_get_fmdet_25_motion_r24(data)                (0x07FFFFFF&(data))

#define  SE_FILM_DET_TH_0                                                       0x1800C650
#define  SE_FILM_DET_TH_0_reg_addr                                               "0xB800C650"
#define  SE_FILM_DET_TH_0_reg                                                    0xB800C650
#define  SE_FILM_DET_TH_0_inst_addr                                              "0x00A8"
#define  set_SE_FILM_DET_TH_0_reg(data)                                          (*((volatile unsigned int*)SE_FILM_DET_TH_0_reg)=data)
#define  get_SE_FILM_DET_TH_0_reg                                                (*((volatile unsigned int*)SE_FILM_DET_TH_0_reg))
#define  SE_FILM_DET_TH_0_fmdet_mode_sel_shift                                   (16)
#define  SE_FILM_DET_TH_0_fmdet_th_shift                                         (8)
#define  SE_FILM_DET_TH_0_fmdet_coring_shift                                     (0)
#define  SE_FILM_DET_TH_0_fmdet_mode_sel_mask                                    (0x00030000)
#define  SE_FILM_DET_TH_0_fmdet_th_mask                                          (0x0000FF00)
#define  SE_FILM_DET_TH_0_fmdet_coring_mask                                      (0x000000FF)
#define  SE_FILM_DET_TH_0_fmdet_mode_sel(data)                                   (0x00030000&((data)<<16))
#define  SE_FILM_DET_TH_0_fmdet_th(data)                                         (0x0000FF00&((data)<<8))
#define  SE_FILM_DET_TH_0_fmdet_coring(data)                                     (0x000000FF&(data))
#define  SE_FILM_DET_TH_0_get_fmdet_mode_sel(data)                               ((0x00030000&(data))>>16)
#define  SE_FILM_DET_TH_0_get_fmdet_th(data)                                     ((0x0000FF00&(data))>>8)
#define  SE_FILM_DET_TH_0_get_fmdet_coring(data)                                 (0x000000FF&(data))

#define  SE_FILM_DET_TH_1                                                       0x1800C654
#define  SE_FILM_DET_TH_1_reg_addr                                               "0xB800C654"
#define  SE_FILM_DET_TH_1_reg                                                    0xB800C654
#define  SE_FILM_DET_TH_1_inst_addr                                              "0x00A9"
#define  set_SE_FILM_DET_TH_1_reg(data)                                          (*((volatile unsigned int*)SE_FILM_DET_TH_1_reg)=data)
#define  get_SE_FILM_DET_TH_1_reg                                                (*((volatile unsigned int*)SE_FILM_DET_TH_1_reg))
#define  SE_FILM_DET_TH_1_fmdet_mode_sel_shift                                   (16)
#define  SE_FILM_DET_TH_1_fmdet_th_shift                                         (8)
#define  SE_FILM_DET_TH_1_fmdet_coring_shift                                     (0)
#define  SE_FILM_DET_TH_1_fmdet_mode_sel_mask                                    (0x00030000)
#define  SE_FILM_DET_TH_1_fmdet_th_mask                                          (0x0000FF00)
#define  SE_FILM_DET_TH_1_fmdet_coring_mask                                      (0x000000FF)
#define  SE_FILM_DET_TH_1_fmdet_mode_sel(data)                                   (0x00030000&((data)<<16))
#define  SE_FILM_DET_TH_1_fmdet_th(data)                                         (0x0000FF00&((data)<<8))
#define  SE_FILM_DET_TH_1_fmdet_coring(data)                                     (0x000000FF&(data))
#define  SE_FILM_DET_TH_1_get_fmdet_mode_sel(data)                               ((0x00030000&(data))>>16)
#define  SE_FILM_DET_TH_1_get_fmdet_th(data)                                     ((0x0000FF00&(data))>>8)
#define  SE_FILM_DET_TH_1_get_fmdet_coring(data)                                 (0x000000FF&(data))

#define  SE_FILM_DET_TH2_0                                                      0x1800C660
#define  SE_FILM_DET_TH2_0_reg_addr                                              "0xB800C660"
#define  SE_FILM_DET_TH2_0_reg                                                   0xB800C660
#define  SE_FILM_DET_TH2_0_inst_addr                                             "0x00AA"
#define  set_SE_FILM_DET_TH2_0_reg(data)                                         (*((volatile unsigned int*)SE_FILM_DET_TH2_0_reg)=data)
#define  get_SE_FILM_DET_TH2_0_reg                                               (*((volatile unsigned int*)SE_FILM_DET_TH2_0_reg))
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_4_shift                              (20)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_3_shift                              (15)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_2_shift                              (10)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_1_shift                              (5)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_0_shift                              (0)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_4_mask                               (0x01F00000)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_3_mask                               (0x000F8000)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_2_mask                               (0x00007C00)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_1_mask                               (0x000003E0)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_0_mask                               (0x0000001F)
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_4(data)                              (0x01F00000&((data)<<20))
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_3(data)                              (0x000F8000&((data)<<15))
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_2(data)                              (0x00007C00&((data)<<10))
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_1(data)                              (0x000003E0&((data)<<5))
#define  SE_FILM_DET_TH2_0_fmdet_diff_count_0(data)                              (0x0000001F&(data))
#define  SE_FILM_DET_TH2_0_get_fmdet_diff_count_4(data)                          ((0x01F00000&(data))>>20)
#define  SE_FILM_DET_TH2_0_get_fmdet_diff_count_3(data)                          ((0x000F8000&(data))>>15)
#define  SE_FILM_DET_TH2_0_get_fmdet_diff_count_2(data)                          ((0x00007C00&(data))>>10)
#define  SE_FILM_DET_TH2_0_get_fmdet_diff_count_1(data)                          ((0x000003E0&(data))>>5)
#define  SE_FILM_DET_TH2_0_get_fmdet_diff_count_0(data)                          (0x0000001F&(data))

#define  SE_FILM_DET_TH2_1                                                      0x1800C664
#define  SE_FILM_DET_TH2_1_reg_addr                                              "0xB800C664"
#define  SE_FILM_DET_TH2_1_reg                                                   0xB800C664
#define  SE_FILM_DET_TH2_1_inst_addr                                             "0x00AB"
#define  set_SE_FILM_DET_TH2_1_reg(data)                                         (*((volatile unsigned int*)SE_FILM_DET_TH2_1_reg)=data)
#define  get_SE_FILM_DET_TH2_1_reg                                               (*((volatile unsigned int*)SE_FILM_DET_TH2_1_reg))
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_4_shift                              (20)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_3_shift                              (15)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_2_shift                              (10)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_1_shift                              (5)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_0_shift                              (0)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_4_mask                               (0x01F00000)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_3_mask                               (0x000F8000)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_2_mask                               (0x00007C00)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_1_mask                               (0x000003E0)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_0_mask                               (0x0000001F)
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_4(data)                              (0x01F00000&((data)<<20))
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_3(data)                              (0x000F8000&((data)<<15))
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_2(data)                              (0x00007C00&((data)<<10))
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_1(data)                              (0x000003E0&((data)<<5))
#define  SE_FILM_DET_TH2_1_fmdet_diff_count_0(data)                              (0x0000001F&(data))
#define  SE_FILM_DET_TH2_1_get_fmdet_diff_count_4(data)                          ((0x01F00000&(data))>>20)
#define  SE_FILM_DET_TH2_1_get_fmdet_diff_count_3(data)                          ((0x000F8000&(data))>>15)
#define  SE_FILM_DET_TH2_1_get_fmdet_diff_count_2(data)                          ((0x00007C00&(data))>>10)
#define  SE_FILM_DET_TH2_1_get_fmdet_diff_count_1(data)                          ((0x000003E0&(data))>>5)
#define  SE_FILM_DET_TH2_1_get_fmdet_diff_count_0(data)                          (0x0000001F&(data))

#define  SE_SE20_S1_HCOEFF_0_0                                                  0x1800C680
#define  SE_SE20_S1_HCOEFF_0_0_reg_addr                                          "0xB800C680"
#define  SE_SE20_S1_HCOEFF_0_0_reg                                               0xB800C680
#define  SE_SE20_S1_HCOEFF_0_0_inst_addr                                         "0x00AC"
#define  set_SE_SE20_S1_HCOEFF_0_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_0_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_0_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_0_0_reg))
#define  SE_SE20_S1_HCOEFF_0_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_0_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_0_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_0_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_0_1                                                  0x1800C684
#define  SE_SE20_S1_HCOEFF_0_1_reg_addr                                          "0xB800C684"
#define  SE_SE20_S1_HCOEFF_0_1_reg                                               0xB800C684
#define  SE_SE20_S1_HCOEFF_0_1_inst_addr                                         "0x00AD"
#define  set_SE_SE20_S1_HCOEFF_0_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_0_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_0_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_0_1_reg))
#define  SE_SE20_S1_HCOEFF_0_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_0_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_0_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_0_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_1_0                                                  0x1800C690
#define  SE_SE20_S1_HCOEFF_1_0_reg_addr                                          "0xB800C690"
#define  SE_SE20_S1_HCOEFF_1_0_reg                                               0xB800C690
#define  SE_SE20_S1_HCOEFF_1_0_inst_addr                                         "0x00AE"
#define  set_SE_SE20_S1_HCOEFF_1_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_1_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_1_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_1_0_reg))
#define  SE_SE20_S1_HCOEFF_1_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_1_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_1_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_1_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_1_1                                                  0x1800C694
#define  SE_SE20_S1_HCOEFF_1_1_reg_addr                                          "0xB800C694"
#define  SE_SE20_S1_HCOEFF_1_1_reg                                               0xB800C694
#define  SE_SE20_S1_HCOEFF_1_1_inst_addr                                         "0x00AF"
#define  set_SE_SE20_S1_HCOEFF_1_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_1_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_1_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_1_1_reg))
#define  SE_SE20_S1_HCOEFF_1_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_1_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_1_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_1_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_2_0                                                  0x1800C6A0
#define  SE_SE20_S1_HCOEFF_2_0_reg_addr                                          "0xB800C6A0"
#define  SE_SE20_S1_HCOEFF_2_0_reg                                               0xB800C6A0
#define  SE_SE20_S1_HCOEFF_2_0_inst_addr                                         "0x00B0"
#define  set_SE_SE20_S1_HCOEFF_2_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_2_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_2_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_2_0_reg))
#define  SE_SE20_S1_HCOEFF_2_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_2_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_2_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_2_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_2_1                                                  0x1800C6A4
#define  SE_SE20_S1_HCOEFF_2_1_reg_addr                                          "0xB800C6A4"
#define  SE_SE20_S1_HCOEFF_2_1_reg                                               0xB800C6A4
#define  SE_SE20_S1_HCOEFF_2_1_inst_addr                                         "0x00B1"
#define  set_SE_SE20_S1_HCOEFF_2_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_2_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_2_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_2_1_reg))
#define  SE_SE20_S1_HCOEFF_2_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_2_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_2_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_2_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_3_0                                                  0x1800C6B0
#define  SE_SE20_S1_HCOEFF_3_0_reg_addr                                          "0xB800C6B0"
#define  SE_SE20_S1_HCOEFF_3_0_reg                                               0xB800C6B0
#define  SE_SE20_S1_HCOEFF_3_0_inst_addr                                         "0x00B2"
#define  set_SE_SE20_S1_HCOEFF_3_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_3_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_3_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_3_0_reg))
#define  SE_SE20_S1_HCOEFF_3_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_3_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_3_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_3_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_3_1                                                  0x1800C6B4
#define  SE_SE20_S1_HCOEFF_3_1_reg_addr                                          "0xB800C6B4"
#define  SE_SE20_S1_HCOEFF_3_1_reg                                               0xB800C6B4
#define  SE_SE20_S1_HCOEFF_3_1_inst_addr                                         "0x00B3"
#define  set_SE_SE20_S1_HCOEFF_3_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_3_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_3_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_3_1_reg))
#define  SE_SE20_S1_HCOEFF_3_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_3_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_3_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_3_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_4_0                                                  0x1800C6C0
#define  SE_SE20_S1_HCOEFF_4_0_reg_addr                                          "0xB800C6C0"
#define  SE_SE20_S1_HCOEFF_4_0_reg                                               0xB800C6C0
#define  SE_SE20_S1_HCOEFF_4_0_inst_addr                                         "0x00B4"
#define  set_SE_SE20_S1_HCOEFF_4_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_4_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_4_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_4_0_reg))
#define  SE_SE20_S1_HCOEFF_4_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_4_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_4_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_4_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_4_1                                                  0x1800C6C4
#define  SE_SE20_S1_HCOEFF_4_1_reg_addr                                          "0xB800C6C4"
#define  SE_SE20_S1_HCOEFF_4_1_reg                                               0xB800C6C4
#define  SE_SE20_S1_HCOEFF_4_1_inst_addr                                         "0x00B5"
#define  set_SE_SE20_S1_HCOEFF_4_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_4_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_4_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_4_1_reg))
#define  SE_SE20_S1_HCOEFF_4_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_4_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_4_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_4_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_5_0                                                  0x1800C6D0
#define  SE_SE20_S1_HCOEFF_5_0_reg_addr                                          "0xB800C6D0"
#define  SE_SE20_S1_HCOEFF_5_0_reg                                               0xB800C6D0
#define  SE_SE20_S1_HCOEFF_5_0_inst_addr                                         "0x00B6"
#define  set_SE_SE20_S1_HCOEFF_5_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_5_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_5_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_5_0_reg))
#define  SE_SE20_S1_HCOEFF_5_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_5_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_5_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_5_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_5_1                                                  0x1800C6D4
#define  SE_SE20_S1_HCOEFF_5_1_reg_addr                                          "0xB800C6D4"
#define  SE_SE20_S1_HCOEFF_5_1_reg                                               0xB800C6D4
#define  SE_SE20_S1_HCOEFF_5_1_inst_addr                                         "0x00B7"
#define  set_SE_SE20_S1_HCOEFF_5_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_5_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_5_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_5_1_reg))
#define  SE_SE20_S1_HCOEFF_5_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_5_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_5_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_5_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_6_0                                                  0x1800C6E0
#define  SE_SE20_S1_HCOEFF_6_0_reg_addr                                          "0xB800C6E0"
#define  SE_SE20_S1_HCOEFF_6_0_reg                                               0xB800C6E0
#define  SE_SE20_S1_HCOEFF_6_0_inst_addr                                         "0x00B8"
#define  set_SE_SE20_S1_HCOEFF_6_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_6_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_6_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_6_0_reg))
#define  SE_SE20_S1_HCOEFF_6_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_6_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_6_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_6_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_6_1                                                  0x1800C6E4
#define  SE_SE20_S1_HCOEFF_6_1_reg_addr                                          "0xB800C6E4"
#define  SE_SE20_S1_HCOEFF_6_1_reg                                               0xB800C6E4
#define  SE_SE20_S1_HCOEFF_6_1_inst_addr                                         "0x00B9"
#define  set_SE_SE20_S1_HCOEFF_6_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_6_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_6_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_6_1_reg))
#define  SE_SE20_S1_HCOEFF_6_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_6_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_6_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_6_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_7_0                                                  0x1800C6F0
#define  SE_SE20_S1_HCOEFF_7_0_reg_addr                                          "0xB800C6F0"
#define  SE_SE20_S1_HCOEFF_7_0_reg                                               0xB800C6F0
#define  SE_SE20_S1_HCOEFF_7_0_inst_addr                                         "0x00BA"
#define  set_SE_SE20_S1_HCOEFF_7_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_7_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_7_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_7_0_reg))
#define  SE_SE20_S1_HCOEFF_7_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_7_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_7_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_7_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_7_1                                                  0x1800C6F4
#define  SE_SE20_S1_HCOEFF_7_1_reg_addr                                          "0xB800C6F4"
#define  SE_SE20_S1_HCOEFF_7_1_reg                                               0xB800C6F4
#define  SE_SE20_S1_HCOEFF_7_1_inst_addr                                         "0x00BB"
#define  set_SE_SE20_S1_HCOEFF_7_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_7_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_7_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_7_1_reg))
#define  SE_SE20_S1_HCOEFF_7_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_7_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_7_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_7_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_8_0                                                  0x1800C700
#define  SE_SE20_S1_HCOEFF_8_0_reg_addr                                          "0xB800C700"
#define  SE_SE20_S1_HCOEFF_8_0_reg                                               0xB800C700
#define  SE_SE20_S1_HCOEFF_8_0_inst_addr                                         "0x00BC"
#define  set_SE_SE20_S1_HCOEFF_8_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_8_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_8_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_8_0_reg))
#define  SE_SE20_S1_HCOEFF_8_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_8_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_8_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_8_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_8_1                                                  0x1800C704
#define  SE_SE20_S1_HCOEFF_8_1_reg_addr                                          "0xB800C704"
#define  SE_SE20_S1_HCOEFF_8_1_reg                                               0xB800C704
#define  SE_SE20_S1_HCOEFF_8_1_inst_addr                                         "0x00BD"
#define  set_SE_SE20_S1_HCOEFF_8_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_8_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_8_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_8_1_reg))
#define  SE_SE20_S1_HCOEFF_8_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_8_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_8_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_8_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_9_0                                                  0x1800C710
#define  SE_SE20_S1_HCOEFF_9_0_reg_addr                                          "0xB800C710"
#define  SE_SE20_S1_HCOEFF_9_0_reg                                               0xB800C710
#define  SE_SE20_S1_HCOEFF_9_0_inst_addr                                         "0x00BE"
#define  set_SE_SE20_S1_HCOEFF_9_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_9_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_9_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_9_0_reg))
#define  SE_SE20_S1_HCOEFF_9_0_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_9_0_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_9_0_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_9_0_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_9_1                                                  0x1800C714
#define  SE_SE20_S1_HCOEFF_9_1_reg_addr                                          "0xB800C714"
#define  SE_SE20_S1_HCOEFF_9_1_reg                                               0xB800C714
#define  SE_SE20_S1_HCOEFF_9_1_inst_addr                                         "0x00BF"
#define  set_SE_SE20_S1_HCOEFF_9_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_9_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_9_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_9_1_reg))
#define  SE_SE20_S1_HCOEFF_9_1_hcoef_shift                                       (0)
#define  SE_SE20_S1_HCOEFF_9_1_hcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_9_1_hcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_9_1_get_hcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_10_0                                                 0x1800C720
#define  SE_SE20_S1_HCOEFF_10_0_reg_addr                                         "0xB800C720"
#define  SE_SE20_S1_HCOEFF_10_0_reg                                              0xB800C720
#define  SE_SE20_S1_HCOEFF_10_0_inst_addr                                        "0x00C0"
#define  set_SE_SE20_S1_HCOEFF_10_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_10_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_10_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_10_0_reg))
#define  SE_SE20_S1_HCOEFF_10_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_10_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_10_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_10_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_10_1                                                 0x1800C724
#define  SE_SE20_S1_HCOEFF_10_1_reg_addr                                         "0xB800C724"
#define  SE_SE20_S1_HCOEFF_10_1_reg                                              0xB800C724
#define  SE_SE20_S1_HCOEFF_10_1_inst_addr                                        "0x00C1"
#define  set_SE_SE20_S1_HCOEFF_10_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_10_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_10_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_10_1_reg))
#define  SE_SE20_S1_HCOEFF_10_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_10_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_10_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_10_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_11_0                                                 0x1800C730
#define  SE_SE20_S1_HCOEFF_11_0_reg_addr                                         "0xB800C730"
#define  SE_SE20_S1_HCOEFF_11_0_reg                                              0xB800C730
#define  SE_SE20_S1_HCOEFF_11_0_inst_addr                                        "0x00C2"
#define  set_SE_SE20_S1_HCOEFF_11_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_11_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_11_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_11_0_reg))
#define  SE_SE20_S1_HCOEFF_11_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_11_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_11_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_11_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_11_1                                                 0x1800C734
#define  SE_SE20_S1_HCOEFF_11_1_reg_addr                                         "0xB800C734"
#define  SE_SE20_S1_HCOEFF_11_1_reg                                              0xB800C734
#define  SE_SE20_S1_HCOEFF_11_1_inst_addr                                        "0x00C3"
#define  set_SE_SE20_S1_HCOEFF_11_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_11_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_11_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_11_1_reg))
#define  SE_SE20_S1_HCOEFF_11_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_11_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_11_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_11_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_12_0                                                 0x1800C740
#define  SE_SE20_S1_HCOEFF_12_0_reg_addr                                         "0xB800C740"
#define  SE_SE20_S1_HCOEFF_12_0_reg                                              0xB800C740
#define  SE_SE20_S1_HCOEFF_12_0_inst_addr                                        "0x00C4"
#define  set_SE_SE20_S1_HCOEFF_12_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_12_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_12_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_12_0_reg))
#define  SE_SE20_S1_HCOEFF_12_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_12_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_12_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_12_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_12_1                                                 0x1800C744
#define  SE_SE20_S1_HCOEFF_12_1_reg_addr                                         "0xB800C744"
#define  SE_SE20_S1_HCOEFF_12_1_reg                                              0xB800C744
#define  SE_SE20_S1_HCOEFF_12_1_inst_addr                                        "0x00C5"
#define  set_SE_SE20_S1_HCOEFF_12_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_12_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_12_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_12_1_reg))
#define  SE_SE20_S1_HCOEFF_12_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_12_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_12_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_12_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_13_0                                                 0x1800C750
#define  SE_SE20_S1_HCOEFF_13_0_reg_addr                                         "0xB800C750"
#define  SE_SE20_S1_HCOEFF_13_0_reg                                              0xB800C750
#define  SE_SE20_S1_HCOEFF_13_0_inst_addr                                        "0x00C6"
#define  set_SE_SE20_S1_HCOEFF_13_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_13_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_13_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_13_0_reg))
#define  SE_SE20_S1_HCOEFF_13_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_13_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_13_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_13_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_13_1                                                 0x1800C754
#define  SE_SE20_S1_HCOEFF_13_1_reg_addr                                         "0xB800C754"
#define  SE_SE20_S1_HCOEFF_13_1_reg                                              0xB800C754
#define  SE_SE20_S1_HCOEFF_13_1_inst_addr                                        "0x00C7"
#define  set_SE_SE20_S1_HCOEFF_13_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_13_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_13_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_13_1_reg))
#define  SE_SE20_S1_HCOEFF_13_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_13_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_13_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_13_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_14_0                                                 0x1800C760
#define  SE_SE20_S1_HCOEFF_14_0_reg_addr                                         "0xB800C760"
#define  SE_SE20_S1_HCOEFF_14_0_reg                                              0xB800C760
#define  SE_SE20_S1_HCOEFF_14_0_inst_addr                                        "0x00C8"
#define  set_SE_SE20_S1_HCOEFF_14_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_14_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_14_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_14_0_reg))
#define  SE_SE20_S1_HCOEFF_14_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_14_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_14_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_14_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_14_1                                                 0x1800C764
#define  SE_SE20_S1_HCOEFF_14_1_reg_addr                                         "0xB800C764"
#define  SE_SE20_S1_HCOEFF_14_1_reg                                              0xB800C764
#define  SE_SE20_S1_HCOEFF_14_1_inst_addr                                        "0x00C9"
#define  set_SE_SE20_S1_HCOEFF_14_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_14_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_14_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_14_1_reg))
#define  SE_SE20_S1_HCOEFF_14_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_14_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_14_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_14_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_15_0                                                 0x1800C770
#define  SE_SE20_S1_HCOEFF_15_0_reg_addr                                         "0xB800C770"
#define  SE_SE20_S1_HCOEFF_15_0_reg                                              0xB800C770
#define  SE_SE20_S1_HCOEFF_15_0_inst_addr                                        "0x00CA"
#define  set_SE_SE20_S1_HCOEFF_15_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_15_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_15_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_15_0_reg))
#define  SE_SE20_S1_HCOEFF_15_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_15_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_15_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_15_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_15_1                                                 0x1800C774
#define  SE_SE20_S1_HCOEFF_15_1_reg_addr                                         "0xB800C774"
#define  SE_SE20_S1_HCOEFF_15_1_reg                                              0xB800C774
#define  SE_SE20_S1_HCOEFF_15_1_inst_addr                                        "0x00CB"
#define  set_SE_SE20_S1_HCOEFF_15_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_15_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_15_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_15_1_reg))
#define  SE_SE20_S1_HCOEFF_15_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_15_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_15_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_15_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_16_0                                                 0x1800C780
#define  SE_SE20_S1_HCOEFF_16_0_reg_addr                                         "0xB800C780"
#define  SE_SE20_S1_HCOEFF_16_0_reg                                              0xB800C780
#define  SE_SE20_S1_HCOEFF_16_0_inst_addr                                        "0x00CC"
#define  set_SE_SE20_S1_HCOEFF_16_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_16_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_16_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_16_0_reg))
#define  SE_SE20_S1_HCOEFF_16_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_16_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_16_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_16_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_16_1                                                 0x1800C784
#define  SE_SE20_S1_HCOEFF_16_1_reg_addr                                         "0xB800C784"
#define  SE_SE20_S1_HCOEFF_16_1_reg                                              0xB800C784
#define  SE_SE20_S1_HCOEFF_16_1_inst_addr                                        "0x00CD"
#define  set_SE_SE20_S1_HCOEFF_16_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_16_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_16_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_16_1_reg))
#define  SE_SE20_S1_HCOEFF_16_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_16_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_16_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_16_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_17_0                                                 0x1800C790
#define  SE_SE20_S1_HCOEFF_17_0_reg_addr                                         "0xB800C790"
#define  SE_SE20_S1_HCOEFF_17_0_reg                                              0xB800C790
#define  SE_SE20_S1_HCOEFF_17_0_inst_addr                                        "0x00CE"
#define  set_SE_SE20_S1_HCOEFF_17_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_17_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_17_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_17_0_reg))
#define  SE_SE20_S1_HCOEFF_17_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_17_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_17_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_17_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_17_1                                                 0x1800C794
#define  SE_SE20_S1_HCOEFF_17_1_reg_addr                                         "0xB800C794"
#define  SE_SE20_S1_HCOEFF_17_1_reg                                              0xB800C794
#define  SE_SE20_S1_HCOEFF_17_1_inst_addr                                        "0x00CF"
#define  set_SE_SE20_S1_HCOEFF_17_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_17_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_17_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_17_1_reg))
#define  SE_SE20_S1_HCOEFF_17_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_17_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_17_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_17_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_18_0                                                 0x1800C7A0
#define  SE_SE20_S1_HCOEFF_18_0_reg_addr                                         "0xB800C7A0"
#define  SE_SE20_S1_HCOEFF_18_0_reg                                              0xB800C7A0
#define  SE_SE20_S1_HCOEFF_18_0_inst_addr                                        "0x00D0"
#define  set_SE_SE20_S1_HCOEFF_18_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_18_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_18_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_18_0_reg))
#define  SE_SE20_S1_HCOEFF_18_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_18_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_18_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_18_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_18_1                                                 0x1800C7A4
#define  SE_SE20_S1_HCOEFF_18_1_reg_addr                                         "0xB800C7A4"
#define  SE_SE20_S1_HCOEFF_18_1_reg                                              0xB800C7A4
#define  SE_SE20_S1_HCOEFF_18_1_inst_addr                                        "0x00D1"
#define  set_SE_SE20_S1_HCOEFF_18_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_18_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_18_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_18_1_reg))
#define  SE_SE20_S1_HCOEFF_18_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_18_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_18_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_18_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_19_0                                                 0x1800C7B0
#define  SE_SE20_S1_HCOEFF_19_0_reg_addr                                         "0xB800C7B0"
#define  SE_SE20_S1_HCOEFF_19_0_reg                                              0xB800C7B0
#define  SE_SE20_S1_HCOEFF_19_0_inst_addr                                        "0x00D2"
#define  set_SE_SE20_S1_HCOEFF_19_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_19_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_19_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_19_0_reg))
#define  SE_SE20_S1_HCOEFF_19_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_19_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_19_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_19_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_19_1                                                 0x1800C7B4
#define  SE_SE20_S1_HCOEFF_19_1_reg_addr                                         "0xB800C7B4"
#define  SE_SE20_S1_HCOEFF_19_1_reg                                              0xB800C7B4
#define  SE_SE20_S1_HCOEFF_19_1_inst_addr                                        "0x00D3"
#define  set_SE_SE20_S1_HCOEFF_19_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_19_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_19_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_19_1_reg))
#define  SE_SE20_S1_HCOEFF_19_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_19_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_19_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_19_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_20_0                                                 0x1800C7C0
#define  SE_SE20_S1_HCOEFF_20_0_reg_addr                                         "0xB800C7C0"
#define  SE_SE20_S1_HCOEFF_20_0_reg                                              0xB800C7C0
#define  SE_SE20_S1_HCOEFF_20_0_inst_addr                                        "0x00D4"
#define  set_SE_SE20_S1_HCOEFF_20_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_20_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_20_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_20_0_reg))
#define  SE_SE20_S1_HCOEFF_20_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_20_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_20_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_20_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_20_1                                                 0x1800C7C4
#define  SE_SE20_S1_HCOEFF_20_1_reg_addr                                         "0xB800C7C4"
#define  SE_SE20_S1_HCOEFF_20_1_reg                                              0xB800C7C4
#define  SE_SE20_S1_HCOEFF_20_1_inst_addr                                        "0x00D5"
#define  set_SE_SE20_S1_HCOEFF_20_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_20_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_20_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_20_1_reg))
#define  SE_SE20_S1_HCOEFF_20_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_20_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_20_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_20_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_21_0                                                 0x1800C7D0
#define  SE_SE20_S1_HCOEFF_21_0_reg_addr                                         "0xB800C7D0"
#define  SE_SE20_S1_HCOEFF_21_0_reg                                              0xB800C7D0
#define  SE_SE20_S1_HCOEFF_21_0_inst_addr                                        "0x00D6"
#define  set_SE_SE20_S1_HCOEFF_21_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_21_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_21_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_21_0_reg))
#define  SE_SE20_S1_HCOEFF_21_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_21_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_21_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_21_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_21_1                                                 0x1800C7D4
#define  SE_SE20_S1_HCOEFF_21_1_reg_addr                                         "0xB800C7D4"
#define  SE_SE20_S1_HCOEFF_21_1_reg                                              0xB800C7D4
#define  SE_SE20_S1_HCOEFF_21_1_inst_addr                                        "0x00D7"
#define  set_SE_SE20_S1_HCOEFF_21_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_21_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_21_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_21_1_reg))
#define  SE_SE20_S1_HCOEFF_21_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_21_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_21_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_21_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_22_0                                                 0x1800C7E0
#define  SE_SE20_S1_HCOEFF_22_0_reg_addr                                         "0xB800C7E0"
#define  SE_SE20_S1_HCOEFF_22_0_reg                                              0xB800C7E0
#define  SE_SE20_S1_HCOEFF_22_0_inst_addr                                        "0x00D8"
#define  set_SE_SE20_S1_HCOEFF_22_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_22_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_22_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_22_0_reg))
#define  SE_SE20_S1_HCOEFF_22_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_22_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_22_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_22_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_22_1                                                 0x1800C7E4
#define  SE_SE20_S1_HCOEFF_22_1_reg_addr                                         "0xB800C7E4"
#define  SE_SE20_S1_HCOEFF_22_1_reg                                              0xB800C7E4
#define  SE_SE20_S1_HCOEFF_22_1_inst_addr                                        "0x00D9"
#define  set_SE_SE20_S1_HCOEFF_22_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_22_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_22_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_22_1_reg))
#define  SE_SE20_S1_HCOEFF_22_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_22_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_22_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_22_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_23_0                                                 0x1800C7F0
#define  SE_SE20_S1_HCOEFF_23_0_reg_addr                                         "0xB800C7F0"
#define  SE_SE20_S1_HCOEFF_23_0_reg                                              0xB800C7F0
#define  SE_SE20_S1_HCOEFF_23_0_inst_addr                                        "0x00DA"
#define  set_SE_SE20_S1_HCOEFF_23_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_23_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_23_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_23_0_reg))
#define  SE_SE20_S1_HCOEFF_23_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_23_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_23_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_23_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_23_1                                                 0x1800C7F4
#define  SE_SE20_S1_HCOEFF_23_1_reg_addr                                         "0xB800C7F4"
#define  SE_SE20_S1_HCOEFF_23_1_reg                                              0xB800C7F4
#define  SE_SE20_S1_HCOEFF_23_1_inst_addr                                        "0x00DB"
#define  set_SE_SE20_S1_HCOEFF_23_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_23_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_23_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_23_1_reg))
#define  SE_SE20_S1_HCOEFF_23_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_23_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_23_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_23_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_24_0                                                 0x1800C800
#define  SE_SE20_S1_HCOEFF_24_0_reg_addr                                         "0xB800C800"
#define  SE_SE20_S1_HCOEFF_24_0_reg                                              0xB800C800
#define  SE_SE20_S1_HCOEFF_24_0_inst_addr                                        "0x00DC"
#define  set_SE_SE20_S1_HCOEFF_24_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_24_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_24_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_24_0_reg))
#define  SE_SE20_S1_HCOEFF_24_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_24_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_24_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_24_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_24_1                                                 0x1800C804
#define  SE_SE20_S1_HCOEFF_24_1_reg_addr                                         "0xB800C804"
#define  SE_SE20_S1_HCOEFF_24_1_reg                                              0xB800C804
#define  SE_SE20_S1_HCOEFF_24_1_inst_addr                                        "0x00DD"
#define  set_SE_SE20_S1_HCOEFF_24_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_24_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_24_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_24_1_reg))
#define  SE_SE20_S1_HCOEFF_24_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_24_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_24_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_24_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_25_0                                                 0x1800C810
#define  SE_SE20_S1_HCOEFF_25_0_reg_addr                                         "0xB800C810"
#define  SE_SE20_S1_HCOEFF_25_0_reg                                              0xB800C810
#define  SE_SE20_S1_HCOEFF_25_0_inst_addr                                        "0x00DE"
#define  set_SE_SE20_S1_HCOEFF_25_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_25_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_25_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_25_0_reg))
#define  SE_SE20_S1_HCOEFF_25_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_25_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_25_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_25_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_25_1                                                 0x1800C814
#define  SE_SE20_S1_HCOEFF_25_1_reg_addr                                         "0xB800C814"
#define  SE_SE20_S1_HCOEFF_25_1_reg                                              0xB800C814
#define  SE_SE20_S1_HCOEFF_25_1_inst_addr                                        "0x00DF"
#define  set_SE_SE20_S1_HCOEFF_25_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_25_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_25_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_25_1_reg))
#define  SE_SE20_S1_HCOEFF_25_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_25_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_25_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_25_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_26_0                                                 0x1800C820
#define  SE_SE20_S1_HCOEFF_26_0_reg_addr                                         "0xB800C820"
#define  SE_SE20_S1_HCOEFF_26_0_reg                                              0xB800C820
#define  SE_SE20_S1_HCOEFF_26_0_inst_addr                                        "0x00E0"
#define  set_SE_SE20_S1_HCOEFF_26_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_26_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_26_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_26_0_reg))
#define  SE_SE20_S1_HCOEFF_26_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_26_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_26_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_26_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_26_1                                                 0x1800C824
#define  SE_SE20_S1_HCOEFF_26_1_reg_addr                                         "0xB800C824"
#define  SE_SE20_S1_HCOEFF_26_1_reg                                              0xB800C824
#define  SE_SE20_S1_HCOEFF_26_1_inst_addr                                        "0x00E1"
#define  set_SE_SE20_S1_HCOEFF_26_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_26_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_26_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_26_1_reg))
#define  SE_SE20_S1_HCOEFF_26_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_26_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_26_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_26_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_27_0                                                 0x1800C830
#define  SE_SE20_S1_HCOEFF_27_0_reg_addr                                         "0xB800C830"
#define  SE_SE20_S1_HCOEFF_27_0_reg                                              0xB800C830
#define  SE_SE20_S1_HCOEFF_27_0_inst_addr                                        "0x00E2"
#define  set_SE_SE20_S1_HCOEFF_27_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_27_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_27_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_27_0_reg))
#define  SE_SE20_S1_HCOEFF_27_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_27_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_27_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_27_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_27_1                                                 0x1800C834
#define  SE_SE20_S1_HCOEFF_27_1_reg_addr                                         "0xB800C834"
#define  SE_SE20_S1_HCOEFF_27_1_reg                                              0xB800C834
#define  SE_SE20_S1_HCOEFF_27_1_inst_addr                                        "0x00E3"
#define  set_SE_SE20_S1_HCOEFF_27_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_27_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_27_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_27_1_reg))
#define  SE_SE20_S1_HCOEFF_27_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_27_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_27_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_27_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_28_0                                                 0x1800C840
#define  SE_SE20_S1_HCOEFF_28_0_reg_addr                                         "0xB800C840"
#define  SE_SE20_S1_HCOEFF_28_0_reg                                              0xB800C840
#define  SE_SE20_S1_HCOEFF_28_0_inst_addr                                        "0x00E4"
#define  set_SE_SE20_S1_HCOEFF_28_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_28_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_28_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_28_0_reg))
#define  SE_SE20_S1_HCOEFF_28_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_28_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_28_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_28_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_28_1                                                 0x1800C844
#define  SE_SE20_S1_HCOEFF_28_1_reg_addr                                         "0xB800C844"
#define  SE_SE20_S1_HCOEFF_28_1_reg                                              0xB800C844
#define  SE_SE20_S1_HCOEFF_28_1_inst_addr                                        "0x00E5"
#define  set_SE_SE20_S1_HCOEFF_28_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_28_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_28_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_28_1_reg))
#define  SE_SE20_S1_HCOEFF_28_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_28_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_28_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_28_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_29_0                                                 0x1800C850
#define  SE_SE20_S1_HCOEFF_29_0_reg_addr                                         "0xB800C850"
#define  SE_SE20_S1_HCOEFF_29_0_reg                                              0xB800C850
#define  SE_SE20_S1_HCOEFF_29_0_inst_addr                                        "0x00E6"
#define  set_SE_SE20_S1_HCOEFF_29_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_29_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_29_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_29_0_reg))
#define  SE_SE20_S1_HCOEFF_29_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_29_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_29_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_29_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_29_1                                                 0x1800C854
#define  SE_SE20_S1_HCOEFF_29_1_reg_addr                                         "0xB800C854"
#define  SE_SE20_S1_HCOEFF_29_1_reg                                              0xB800C854
#define  SE_SE20_S1_HCOEFF_29_1_inst_addr                                        "0x00E7"
#define  set_SE_SE20_S1_HCOEFF_29_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_29_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_29_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_29_1_reg))
#define  SE_SE20_S1_HCOEFF_29_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_29_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_29_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_29_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_30_0                                                 0x1800C860
#define  SE_SE20_S1_HCOEFF_30_0_reg_addr                                         "0xB800C860"
#define  SE_SE20_S1_HCOEFF_30_0_reg                                              0xB800C860
#define  SE_SE20_S1_HCOEFF_30_0_inst_addr                                        "0x00E8"
#define  set_SE_SE20_S1_HCOEFF_30_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_30_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_30_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_30_0_reg))
#define  SE_SE20_S1_HCOEFF_30_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_30_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_30_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_30_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_30_1                                                 0x1800C864
#define  SE_SE20_S1_HCOEFF_30_1_reg_addr                                         "0xB800C864"
#define  SE_SE20_S1_HCOEFF_30_1_reg                                              0xB800C864
#define  SE_SE20_S1_HCOEFF_30_1_inst_addr                                        "0x00E9"
#define  set_SE_SE20_S1_HCOEFF_30_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_30_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_30_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_30_1_reg))
#define  SE_SE20_S1_HCOEFF_30_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_30_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_30_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_30_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_31_0                                                 0x1800C870
#define  SE_SE20_S1_HCOEFF_31_0_reg_addr                                         "0xB800C870"
#define  SE_SE20_S1_HCOEFF_31_0_reg                                              0xB800C870
#define  SE_SE20_S1_HCOEFF_31_0_inst_addr                                        "0x00EA"
#define  set_SE_SE20_S1_HCOEFF_31_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_31_0_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_31_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_31_0_reg))
#define  SE_SE20_S1_HCOEFF_31_0_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_31_0_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_31_0_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_31_0_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_HCOEFF_31_1                                                 0x1800C874
#define  SE_SE20_S1_HCOEFF_31_1_reg_addr                                         "0xB800C874"
#define  SE_SE20_S1_HCOEFF_31_1_reg                                              0xB800C874
#define  SE_SE20_S1_HCOEFF_31_1_inst_addr                                        "0x00EB"
#define  set_SE_SE20_S1_HCOEFF_31_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_31_1_reg)=data)
#define  get_SE_SE20_S1_HCOEFF_31_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_HCOEFF_31_1_reg))
#define  SE_SE20_S1_HCOEFF_31_1_hcoef_shift                                      (0)
#define  SE_SE20_S1_HCOEFF_31_1_hcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_HCOEFF_31_1_hcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_HCOEFF_31_1_get_hcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_0_0                                                  0x1800C880
#define  SE_SE20_S1_VCOEFF_0_0_reg_addr                                          "0xB800C880"
#define  SE_SE20_S1_VCOEFF_0_0_reg                                               0xB800C880
#define  SE_SE20_S1_VCOEFF_0_0_inst_addr                                         "0x00EC"
#define  set_SE_SE20_S1_VCOEFF_0_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_0_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_0_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_0_0_reg))
#define  SE_SE20_S1_VCOEFF_0_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_0_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_0_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_0_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_0_1                                                  0x1800C884
#define  SE_SE20_S1_VCOEFF_0_1_reg_addr                                          "0xB800C884"
#define  SE_SE20_S1_VCOEFF_0_1_reg                                               0xB800C884
#define  SE_SE20_S1_VCOEFF_0_1_inst_addr                                         "0x00ED"
#define  set_SE_SE20_S1_VCOEFF_0_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_0_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_0_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_0_1_reg))
#define  SE_SE20_S1_VCOEFF_0_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_0_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_0_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_0_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_1_0                                                  0x1800C890
#define  SE_SE20_S1_VCOEFF_1_0_reg_addr                                          "0xB800C890"
#define  SE_SE20_S1_VCOEFF_1_0_reg                                               0xB800C890
#define  SE_SE20_S1_VCOEFF_1_0_inst_addr                                         "0x00EE"
#define  set_SE_SE20_S1_VCOEFF_1_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_1_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_1_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_1_0_reg))
#define  SE_SE20_S1_VCOEFF_1_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_1_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_1_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_1_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_1_1                                                  0x1800C894
#define  SE_SE20_S1_VCOEFF_1_1_reg_addr                                          "0xB800C894"
#define  SE_SE20_S1_VCOEFF_1_1_reg                                               0xB800C894
#define  SE_SE20_S1_VCOEFF_1_1_inst_addr                                         "0x00EF"
#define  set_SE_SE20_S1_VCOEFF_1_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_1_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_1_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_1_1_reg))
#define  SE_SE20_S1_VCOEFF_1_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_1_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_1_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_1_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_2_0                                                  0x1800C8A0
#define  SE_SE20_S1_VCOEFF_2_0_reg_addr                                          "0xB800C8A0"
#define  SE_SE20_S1_VCOEFF_2_0_reg                                               0xB800C8A0
#define  SE_SE20_S1_VCOEFF_2_0_inst_addr                                         "0x00F0"
#define  set_SE_SE20_S1_VCOEFF_2_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_2_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_2_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_2_0_reg))
#define  SE_SE20_S1_VCOEFF_2_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_2_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_2_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_2_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_2_1                                                  0x1800C8A4
#define  SE_SE20_S1_VCOEFF_2_1_reg_addr                                          "0xB800C8A4"
#define  SE_SE20_S1_VCOEFF_2_1_reg                                               0xB800C8A4
#define  SE_SE20_S1_VCOEFF_2_1_inst_addr                                         "0x00F1"
#define  set_SE_SE20_S1_VCOEFF_2_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_2_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_2_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_2_1_reg))
#define  SE_SE20_S1_VCOEFF_2_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_2_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_2_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_2_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_3_0                                                  0x1800C8B0
#define  SE_SE20_S1_VCOEFF_3_0_reg_addr                                          "0xB800C8B0"
#define  SE_SE20_S1_VCOEFF_3_0_reg                                               0xB800C8B0
#define  SE_SE20_S1_VCOEFF_3_0_inst_addr                                         "0x00F2"
#define  set_SE_SE20_S1_VCOEFF_3_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_3_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_3_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_3_0_reg))
#define  SE_SE20_S1_VCOEFF_3_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_3_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_3_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_3_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_3_1                                                  0x1800C8B4
#define  SE_SE20_S1_VCOEFF_3_1_reg_addr                                          "0xB800C8B4"
#define  SE_SE20_S1_VCOEFF_3_1_reg                                               0xB800C8B4
#define  SE_SE20_S1_VCOEFF_3_1_inst_addr                                         "0x00F3"
#define  set_SE_SE20_S1_VCOEFF_3_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_3_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_3_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_3_1_reg))
#define  SE_SE20_S1_VCOEFF_3_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_3_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_3_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_3_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_4_0                                                  0x1800C8C0
#define  SE_SE20_S1_VCOEFF_4_0_reg_addr                                          "0xB800C8C0"
#define  SE_SE20_S1_VCOEFF_4_0_reg                                               0xB800C8C0
#define  SE_SE20_S1_VCOEFF_4_0_inst_addr                                         "0x00F4"
#define  set_SE_SE20_S1_VCOEFF_4_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_4_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_4_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_4_0_reg))
#define  SE_SE20_S1_VCOEFF_4_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_4_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_4_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_4_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_4_1                                                  0x1800C8C4
#define  SE_SE20_S1_VCOEFF_4_1_reg_addr                                          "0xB800C8C4"
#define  SE_SE20_S1_VCOEFF_4_1_reg                                               0xB800C8C4
#define  SE_SE20_S1_VCOEFF_4_1_inst_addr                                         "0x00F5"
#define  set_SE_SE20_S1_VCOEFF_4_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_4_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_4_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_4_1_reg))
#define  SE_SE20_S1_VCOEFF_4_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_4_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_4_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_4_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_5_0                                                  0x1800C8D0
#define  SE_SE20_S1_VCOEFF_5_0_reg_addr                                          "0xB800C8D0"
#define  SE_SE20_S1_VCOEFF_5_0_reg                                               0xB800C8D0
#define  SE_SE20_S1_VCOEFF_5_0_inst_addr                                         "0x00F6"
#define  set_SE_SE20_S1_VCOEFF_5_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_5_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_5_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_5_0_reg))
#define  SE_SE20_S1_VCOEFF_5_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_5_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_5_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_5_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_5_1                                                  0x1800C8D4
#define  SE_SE20_S1_VCOEFF_5_1_reg_addr                                          "0xB800C8D4"
#define  SE_SE20_S1_VCOEFF_5_1_reg                                               0xB800C8D4
#define  SE_SE20_S1_VCOEFF_5_1_inst_addr                                         "0x00F7"
#define  set_SE_SE20_S1_VCOEFF_5_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_5_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_5_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_5_1_reg))
#define  SE_SE20_S1_VCOEFF_5_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_5_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_5_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_5_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_6_0                                                  0x1800C8E0
#define  SE_SE20_S1_VCOEFF_6_0_reg_addr                                          "0xB800C8E0"
#define  SE_SE20_S1_VCOEFF_6_0_reg                                               0xB800C8E0
#define  SE_SE20_S1_VCOEFF_6_0_inst_addr                                         "0x00F8"
#define  set_SE_SE20_S1_VCOEFF_6_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_6_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_6_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_6_0_reg))
#define  SE_SE20_S1_VCOEFF_6_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_6_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_6_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_6_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_6_1                                                  0x1800C8E4
#define  SE_SE20_S1_VCOEFF_6_1_reg_addr                                          "0xB800C8E4"
#define  SE_SE20_S1_VCOEFF_6_1_reg                                               0xB800C8E4
#define  SE_SE20_S1_VCOEFF_6_1_inst_addr                                         "0x00F9"
#define  set_SE_SE20_S1_VCOEFF_6_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_6_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_6_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_6_1_reg))
#define  SE_SE20_S1_VCOEFF_6_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_6_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_6_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_6_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_7_0                                                  0x1800C8F0
#define  SE_SE20_S1_VCOEFF_7_0_reg_addr                                          "0xB800C8F0"
#define  SE_SE20_S1_VCOEFF_7_0_reg                                               0xB800C8F0
#define  SE_SE20_S1_VCOEFF_7_0_inst_addr                                         "0x00FA"
#define  set_SE_SE20_S1_VCOEFF_7_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_7_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_7_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_7_0_reg))
#define  SE_SE20_S1_VCOEFF_7_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_7_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_7_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_7_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_7_1                                                  0x1800C8F4
#define  SE_SE20_S1_VCOEFF_7_1_reg_addr                                          "0xB800C8F4"
#define  SE_SE20_S1_VCOEFF_7_1_reg                                               0xB800C8F4
#define  SE_SE20_S1_VCOEFF_7_1_inst_addr                                         "0x00FB"
#define  set_SE_SE20_S1_VCOEFF_7_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_7_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_7_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_7_1_reg))
#define  SE_SE20_S1_VCOEFF_7_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_7_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_7_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_7_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_8_0                                                  0x1800C900
#define  SE_SE20_S1_VCOEFF_8_0_reg_addr                                          "0xB800C900"
#define  SE_SE20_S1_VCOEFF_8_0_reg                                               0xB800C900
#define  SE_SE20_S1_VCOEFF_8_0_inst_addr                                         "0x00FC"
#define  set_SE_SE20_S1_VCOEFF_8_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_8_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_8_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_8_0_reg))
#define  SE_SE20_S1_VCOEFF_8_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_8_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_8_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_8_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_8_1                                                  0x1800C904
#define  SE_SE20_S1_VCOEFF_8_1_reg_addr                                          "0xB800C904"
#define  SE_SE20_S1_VCOEFF_8_1_reg                                               0xB800C904
#define  SE_SE20_S1_VCOEFF_8_1_inst_addr                                         "0x00FD"
#define  set_SE_SE20_S1_VCOEFF_8_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_8_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_8_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_8_1_reg))
#define  SE_SE20_S1_VCOEFF_8_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_8_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_8_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_8_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_9_0                                                  0x1800C910
#define  SE_SE20_S1_VCOEFF_9_0_reg_addr                                          "0xB800C910"
#define  SE_SE20_S1_VCOEFF_9_0_reg                                               0xB800C910
#define  SE_SE20_S1_VCOEFF_9_0_inst_addr                                         "0x00FE"
#define  set_SE_SE20_S1_VCOEFF_9_0_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_9_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_9_0_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_9_0_reg))
#define  SE_SE20_S1_VCOEFF_9_0_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_9_0_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_9_0_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_9_0_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_9_1                                                  0x1800C914
#define  SE_SE20_S1_VCOEFF_9_1_reg_addr                                          "0xB800C914"
#define  SE_SE20_S1_VCOEFF_9_1_reg                                               0xB800C914
#define  SE_SE20_S1_VCOEFF_9_1_inst_addr                                         "0x00FF"
#define  set_SE_SE20_S1_VCOEFF_9_1_reg(data)                                     (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_9_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_9_1_reg                                           (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_9_1_reg))
#define  SE_SE20_S1_VCOEFF_9_1_vcoef_shift                                       (0)
#define  SE_SE20_S1_VCOEFF_9_1_vcoef_mask                                        (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_9_1_vcoef(data)                                       (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_9_1_get_vcoef(data)                                   (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_10_0                                                 0x1800C920
#define  SE_SE20_S1_VCOEFF_10_0_reg_addr                                         "0xB800C920"
#define  SE_SE20_S1_VCOEFF_10_0_reg                                              0xB800C920
#define  SE_SE20_S1_VCOEFF_10_0_inst_addr                                        "0x0100"
#define  set_SE_SE20_S1_VCOEFF_10_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_10_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_10_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_10_0_reg))
#define  SE_SE20_S1_VCOEFF_10_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_10_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_10_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_10_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_10_1                                                 0x1800C924
#define  SE_SE20_S1_VCOEFF_10_1_reg_addr                                         "0xB800C924"
#define  SE_SE20_S1_VCOEFF_10_1_reg                                              0xB800C924
#define  SE_SE20_S1_VCOEFF_10_1_inst_addr                                        "0x0101"
#define  set_SE_SE20_S1_VCOEFF_10_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_10_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_10_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_10_1_reg))
#define  SE_SE20_S1_VCOEFF_10_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_10_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_10_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_10_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_11_0                                                 0x1800C930
#define  SE_SE20_S1_VCOEFF_11_0_reg_addr                                         "0xB800C930"
#define  SE_SE20_S1_VCOEFF_11_0_reg                                              0xB800C930
#define  SE_SE20_S1_VCOEFF_11_0_inst_addr                                        "0x0102"
#define  set_SE_SE20_S1_VCOEFF_11_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_11_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_11_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_11_0_reg))
#define  SE_SE20_S1_VCOEFF_11_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_11_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_11_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_11_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_11_1                                                 0x1800C934
#define  SE_SE20_S1_VCOEFF_11_1_reg_addr                                         "0xB800C934"
#define  SE_SE20_S1_VCOEFF_11_1_reg                                              0xB800C934
#define  SE_SE20_S1_VCOEFF_11_1_inst_addr                                        "0x0103"
#define  set_SE_SE20_S1_VCOEFF_11_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_11_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_11_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_11_1_reg))
#define  SE_SE20_S1_VCOEFF_11_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_11_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_11_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_11_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_12_0                                                 0x1800C940
#define  SE_SE20_S1_VCOEFF_12_0_reg_addr                                         "0xB800C940"
#define  SE_SE20_S1_VCOEFF_12_0_reg                                              0xB800C940
#define  SE_SE20_S1_VCOEFF_12_0_inst_addr                                        "0x0104"
#define  set_SE_SE20_S1_VCOEFF_12_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_12_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_12_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_12_0_reg))
#define  SE_SE20_S1_VCOEFF_12_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_12_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_12_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_12_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_12_1                                                 0x1800C944
#define  SE_SE20_S1_VCOEFF_12_1_reg_addr                                         "0xB800C944"
#define  SE_SE20_S1_VCOEFF_12_1_reg                                              0xB800C944
#define  SE_SE20_S1_VCOEFF_12_1_inst_addr                                        "0x0105"
#define  set_SE_SE20_S1_VCOEFF_12_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_12_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_12_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_12_1_reg))
#define  SE_SE20_S1_VCOEFF_12_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_12_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_12_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_12_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_13_0                                                 0x1800C950
#define  SE_SE20_S1_VCOEFF_13_0_reg_addr                                         "0xB800C950"
#define  SE_SE20_S1_VCOEFF_13_0_reg                                              0xB800C950
#define  SE_SE20_S1_VCOEFF_13_0_inst_addr                                        "0x0106"
#define  set_SE_SE20_S1_VCOEFF_13_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_13_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_13_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_13_0_reg))
#define  SE_SE20_S1_VCOEFF_13_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_13_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_13_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_13_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_13_1                                                 0x1800C954
#define  SE_SE20_S1_VCOEFF_13_1_reg_addr                                         "0xB800C954"
#define  SE_SE20_S1_VCOEFF_13_1_reg                                              0xB800C954
#define  SE_SE20_S1_VCOEFF_13_1_inst_addr                                        "0x0107"
#define  set_SE_SE20_S1_VCOEFF_13_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_13_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_13_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_13_1_reg))
#define  SE_SE20_S1_VCOEFF_13_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_13_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_13_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_13_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_14_0                                                 0x1800C960
#define  SE_SE20_S1_VCOEFF_14_0_reg_addr                                         "0xB800C960"
#define  SE_SE20_S1_VCOEFF_14_0_reg                                              0xB800C960
#define  SE_SE20_S1_VCOEFF_14_0_inst_addr                                        "0x0108"
#define  set_SE_SE20_S1_VCOEFF_14_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_14_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_14_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_14_0_reg))
#define  SE_SE20_S1_VCOEFF_14_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_14_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_14_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_14_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_14_1                                                 0x1800C964
#define  SE_SE20_S1_VCOEFF_14_1_reg_addr                                         "0xB800C964"
#define  SE_SE20_S1_VCOEFF_14_1_reg                                              0xB800C964
#define  SE_SE20_S1_VCOEFF_14_1_inst_addr                                        "0x0109"
#define  set_SE_SE20_S1_VCOEFF_14_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_14_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_14_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_14_1_reg))
#define  SE_SE20_S1_VCOEFF_14_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_14_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_14_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_14_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_15_0                                                 0x1800C970
#define  SE_SE20_S1_VCOEFF_15_0_reg_addr                                         "0xB800C970"
#define  SE_SE20_S1_VCOEFF_15_0_reg                                              0xB800C970
#define  SE_SE20_S1_VCOEFF_15_0_inst_addr                                        "0x010A"
#define  set_SE_SE20_S1_VCOEFF_15_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_15_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_15_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_15_0_reg))
#define  SE_SE20_S1_VCOEFF_15_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_15_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_15_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_15_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_15_1                                                 0x1800C974
#define  SE_SE20_S1_VCOEFF_15_1_reg_addr                                         "0xB800C974"
#define  SE_SE20_S1_VCOEFF_15_1_reg                                              0xB800C974
#define  SE_SE20_S1_VCOEFF_15_1_inst_addr                                        "0x010B"
#define  set_SE_SE20_S1_VCOEFF_15_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_15_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_15_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_15_1_reg))
#define  SE_SE20_S1_VCOEFF_15_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_15_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_15_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_15_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_16_0                                                 0x1800C980
#define  SE_SE20_S1_VCOEFF_16_0_reg_addr                                         "0xB800C980"
#define  SE_SE20_S1_VCOEFF_16_0_reg                                              0xB800C980
#define  SE_SE20_S1_VCOEFF_16_0_inst_addr                                        "0x010C"
#define  set_SE_SE20_S1_VCOEFF_16_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_16_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_16_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_16_0_reg))
#define  SE_SE20_S1_VCOEFF_16_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_16_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_16_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_16_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_16_1                                                 0x1800C984
#define  SE_SE20_S1_VCOEFF_16_1_reg_addr                                         "0xB800C984"
#define  SE_SE20_S1_VCOEFF_16_1_reg                                              0xB800C984
#define  SE_SE20_S1_VCOEFF_16_1_inst_addr                                        "0x010D"
#define  set_SE_SE20_S1_VCOEFF_16_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_16_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_16_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_16_1_reg))
#define  SE_SE20_S1_VCOEFF_16_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_16_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_16_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_16_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_17_0                                                 0x1800C990
#define  SE_SE20_S1_VCOEFF_17_0_reg_addr                                         "0xB800C990"
#define  SE_SE20_S1_VCOEFF_17_0_reg                                              0xB800C990
#define  SE_SE20_S1_VCOEFF_17_0_inst_addr                                        "0x010E"
#define  set_SE_SE20_S1_VCOEFF_17_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_17_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_17_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_17_0_reg))
#define  SE_SE20_S1_VCOEFF_17_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_17_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_17_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_17_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_17_1                                                 0x1800C994
#define  SE_SE20_S1_VCOEFF_17_1_reg_addr                                         "0xB800C994"
#define  SE_SE20_S1_VCOEFF_17_1_reg                                              0xB800C994
#define  SE_SE20_S1_VCOEFF_17_1_inst_addr                                        "0x010F"
#define  set_SE_SE20_S1_VCOEFF_17_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_17_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_17_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_17_1_reg))
#define  SE_SE20_S1_VCOEFF_17_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_17_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_17_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_17_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_18_0                                                 0x1800C9A0
#define  SE_SE20_S1_VCOEFF_18_0_reg_addr                                         "0xB800C9A0"
#define  SE_SE20_S1_VCOEFF_18_0_reg                                              0xB800C9A0
#define  SE_SE20_S1_VCOEFF_18_0_inst_addr                                        "0x0110"
#define  set_SE_SE20_S1_VCOEFF_18_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_18_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_18_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_18_0_reg))
#define  SE_SE20_S1_VCOEFF_18_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_18_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_18_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_18_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_18_1                                                 0x1800C9A4
#define  SE_SE20_S1_VCOEFF_18_1_reg_addr                                         "0xB800C9A4"
#define  SE_SE20_S1_VCOEFF_18_1_reg                                              0xB800C9A4
#define  SE_SE20_S1_VCOEFF_18_1_inst_addr                                        "0x0111"
#define  set_SE_SE20_S1_VCOEFF_18_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_18_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_18_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_18_1_reg))
#define  SE_SE20_S1_VCOEFF_18_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_18_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_18_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_18_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_19_0                                                 0x1800C9B0
#define  SE_SE20_S1_VCOEFF_19_0_reg_addr                                         "0xB800C9B0"
#define  SE_SE20_S1_VCOEFF_19_0_reg                                              0xB800C9B0
#define  SE_SE20_S1_VCOEFF_19_0_inst_addr                                        "0x0112"
#define  set_SE_SE20_S1_VCOEFF_19_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_19_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_19_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_19_0_reg))
#define  SE_SE20_S1_VCOEFF_19_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_19_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_19_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_19_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_19_1                                                 0x1800C9B4
#define  SE_SE20_S1_VCOEFF_19_1_reg_addr                                         "0xB800C9B4"
#define  SE_SE20_S1_VCOEFF_19_1_reg                                              0xB800C9B4
#define  SE_SE20_S1_VCOEFF_19_1_inst_addr                                        "0x0113"
#define  set_SE_SE20_S1_VCOEFF_19_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_19_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_19_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_19_1_reg))
#define  SE_SE20_S1_VCOEFF_19_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_19_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_19_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_19_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_20_0                                                 0x1800C9C0
#define  SE_SE20_S1_VCOEFF_20_0_reg_addr                                         "0xB800C9C0"
#define  SE_SE20_S1_VCOEFF_20_0_reg                                              0xB800C9C0
#define  SE_SE20_S1_VCOEFF_20_0_inst_addr                                        "0x0114"
#define  set_SE_SE20_S1_VCOEFF_20_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_20_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_20_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_20_0_reg))
#define  SE_SE20_S1_VCOEFF_20_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_20_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_20_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_20_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_20_1                                                 0x1800C9C4
#define  SE_SE20_S1_VCOEFF_20_1_reg_addr                                         "0xB800C9C4"
#define  SE_SE20_S1_VCOEFF_20_1_reg                                              0xB800C9C4
#define  SE_SE20_S1_VCOEFF_20_1_inst_addr                                        "0x0115"
#define  set_SE_SE20_S1_VCOEFF_20_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_20_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_20_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_20_1_reg))
#define  SE_SE20_S1_VCOEFF_20_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_20_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_20_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_20_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_21_0                                                 0x1800C9D0
#define  SE_SE20_S1_VCOEFF_21_0_reg_addr                                         "0xB800C9D0"
#define  SE_SE20_S1_VCOEFF_21_0_reg                                              0xB800C9D0
#define  SE_SE20_S1_VCOEFF_21_0_inst_addr                                        "0x0116"
#define  set_SE_SE20_S1_VCOEFF_21_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_21_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_21_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_21_0_reg))
#define  SE_SE20_S1_VCOEFF_21_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_21_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_21_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_21_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_21_1                                                 0x1800C9D4
#define  SE_SE20_S1_VCOEFF_21_1_reg_addr                                         "0xB800C9D4"
#define  SE_SE20_S1_VCOEFF_21_1_reg                                              0xB800C9D4
#define  SE_SE20_S1_VCOEFF_21_1_inst_addr                                        "0x0117"
#define  set_SE_SE20_S1_VCOEFF_21_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_21_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_21_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_21_1_reg))
#define  SE_SE20_S1_VCOEFF_21_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_21_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_21_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_21_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_22_0                                                 0x1800C9E0
#define  SE_SE20_S1_VCOEFF_22_0_reg_addr                                         "0xB800C9E0"
#define  SE_SE20_S1_VCOEFF_22_0_reg                                              0xB800C9E0
#define  SE_SE20_S1_VCOEFF_22_0_inst_addr                                        "0x0118"
#define  set_SE_SE20_S1_VCOEFF_22_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_22_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_22_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_22_0_reg))
#define  SE_SE20_S1_VCOEFF_22_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_22_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_22_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_22_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_22_1                                                 0x1800C9E4
#define  SE_SE20_S1_VCOEFF_22_1_reg_addr                                         "0xB800C9E4"
#define  SE_SE20_S1_VCOEFF_22_1_reg                                              0xB800C9E4
#define  SE_SE20_S1_VCOEFF_22_1_inst_addr                                        "0x0119"
#define  set_SE_SE20_S1_VCOEFF_22_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_22_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_22_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_22_1_reg))
#define  SE_SE20_S1_VCOEFF_22_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_22_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_22_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_22_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_23_0                                                 0x1800C9F0
#define  SE_SE20_S1_VCOEFF_23_0_reg_addr                                         "0xB800C9F0"
#define  SE_SE20_S1_VCOEFF_23_0_reg                                              0xB800C9F0
#define  SE_SE20_S1_VCOEFF_23_0_inst_addr                                        "0x011A"
#define  set_SE_SE20_S1_VCOEFF_23_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_23_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_23_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_23_0_reg))
#define  SE_SE20_S1_VCOEFF_23_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_23_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_23_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_23_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_23_1                                                 0x1800C9F4
#define  SE_SE20_S1_VCOEFF_23_1_reg_addr                                         "0xB800C9F4"
#define  SE_SE20_S1_VCOEFF_23_1_reg                                              0xB800C9F4
#define  SE_SE20_S1_VCOEFF_23_1_inst_addr                                        "0x011B"
#define  set_SE_SE20_S1_VCOEFF_23_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_23_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_23_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_23_1_reg))
#define  SE_SE20_S1_VCOEFF_23_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_23_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_23_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_23_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_24_0                                                 0x1800CA00
#define  SE_SE20_S1_VCOEFF_24_0_reg_addr                                         "0xB800CA00"
#define  SE_SE20_S1_VCOEFF_24_0_reg                                              0xB800CA00
#define  SE_SE20_S1_VCOEFF_24_0_inst_addr                                        "0x011C"
#define  set_SE_SE20_S1_VCOEFF_24_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_24_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_24_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_24_0_reg))
#define  SE_SE20_S1_VCOEFF_24_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_24_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_24_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_24_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_24_1                                                 0x1800CA04
#define  SE_SE20_S1_VCOEFF_24_1_reg_addr                                         "0xB800CA04"
#define  SE_SE20_S1_VCOEFF_24_1_reg                                              0xB800CA04
#define  SE_SE20_S1_VCOEFF_24_1_inst_addr                                        "0x011D"
#define  set_SE_SE20_S1_VCOEFF_24_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_24_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_24_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_24_1_reg))
#define  SE_SE20_S1_VCOEFF_24_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_24_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_24_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_24_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_25_0                                                 0x1800CA10
#define  SE_SE20_S1_VCOEFF_25_0_reg_addr                                         "0xB800CA10"
#define  SE_SE20_S1_VCOEFF_25_0_reg                                              0xB800CA10
#define  SE_SE20_S1_VCOEFF_25_0_inst_addr                                        "0x011E"
#define  set_SE_SE20_S1_VCOEFF_25_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_25_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_25_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_25_0_reg))
#define  SE_SE20_S1_VCOEFF_25_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_25_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_25_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_25_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_25_1                                                 0x1800CA14
#define  SE_SE20_S1_VCOEFF_25_1_reg_addr                                         "0xB800CA14"
#define  SE_SE20_S1_VCOEFF_25_1_reg                                              0xB800CA14
#define  SE_SE20_S1_VCOEFF_25_1_inst_addr                                        "0x011F"
#define  set_SE_SE20_S1_VCOEFF_25_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_25_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_25_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_25_1_reg))
#define  SE_SE20_S1_VCOEFF_25_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_25_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_25_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_25_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_26_0                                                 0x1800CA20
#define  SE_SE20_S1_VCOEFF_26_0_reg_addr                                         "0xB800CA20"
#define  SE_SE20_S1_VCOEFF_26_0_reg                                              0xB800CA20
#define  SE_SE20_S1_VCOEFF_26_0_inst_addr                                        "0x0120"
#define  set_SE_SE20_S1_VCOEFF_26_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_26_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_26_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_26_0_reg))
#define  SE_SE20_S1_VCOEFF_26_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_26_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_26_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_26_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_26_1                                                 0x1800CA24
#define  SE_SE20_S1_VCOEFF_26_1_reg_addr                                         "0xB800CA24"
#define  SE_SE20_S1_VCOEFF_26_1_reg                                              0xB800CA24
#define  SE_SE20_S1_VCOEFF_26_1_inst_addr                                        "0x0121"
#define  set_SE_SE20_S1_VCOEFF_26_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_26_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_26_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_26_1_reg))
#define  SE_SE20_S1_VCOEFF_26_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_26_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_26_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_26_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_27_0                                                 0x1800CA30
#define  SE_SE20_S1_VCOEFF_27_0_reg_addr                                         "0xB800CA30"
#define  SE_SE20_S1_VCOEFF_27_0_reg                                              0xB800CA30
#define  SE_SE20_S1_VCOEFF_27_0_inst_addr                                        "0x0122"
#define  set_SE_SE20_S1_VCOEFF_27_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_27_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_27_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_27_0_reg))
#define  SE_SE20_S1_VCOEFF_27_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_27_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_27_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_27_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_27_1                                                 0x1800CA34
#define  SE_SE20_S1_VCOEFF_27_1_reg_addr                                         "0xB800CA34"
#define  SE_SE20_S1_VCOEFF_27_1_reg                                              0xB800CA34
#define  SE_SE20_S1_VCOEFF_27_1_inst_addr                                        "0x0123"
#define  set_SE_SE20_S1_VCOEFF_27_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_27_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_27_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_27_1_reg))
#define  SE_SE20_S1_VCOEFF_27_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_27_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_27_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_27_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_28_0                                                 0x1800CA40
#define  SE_SE20_S1_VCOEFF_28_0_reg_addr                                         "0xB800CA40"
#define  SE_SE20_S1_VCOEFF_28_0_reg                                              0xB800CA40
#define  SE_SE20_S1_VCOEFF_28_0_inst_addr                                        "0x0124"
#define  set_SE_SE20_S1_VCOEFF_28_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_28_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_28_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_28_0_reg))
#define  SE_SE20_S1_VCOEFF_28_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_28_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_28_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_28_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_28_1                                                 0x1800CA44
#define  SE_SE20_S1_VCOEFF_28_1_reg_addr                                         "0xB800CA44"
#define  SE_SE20_S1_VCOEFF_28_1_reg                                              0xB800CA44
#define  SE_SE20_S1_VCOEFF_28_1_inst_addr                                        "0x0125"
#define  set_SE_SE20_S1_VCOEFF_28_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_28_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_28_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_28_1_reg))
#define  SE_SE20_S1_VCOEFF_28_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_28_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_28_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_28_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_29_0                                                 0x1800CA50
#define  SE_SE20_S1_VCOEFF_29_0_reg_addr                                         "0xB800CA50"
#define  SE_SE20_S1_VCOEFF_29_0_reg                                              0xB800CA50
#define  SE_SE20_S1_VCOEFF_29_0_inst_addr                                        "0x0126"
#define  set_SE_SE20_S1_VCOEFF_29_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_29_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_29_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_29_0_reg))
#define  SE_SE20_S1_VCOEFF_29_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_29_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_29_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_29_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_29_1                                                 0x1800CA54
#define  SE_SE20_S1_VCOEFF_29_1_reg_addr                                         "0xB800CA54"
#define  SE_SE20_S1_VCOEFF_29_1_reg                                              0xB800CA54
#define  SE_SE20_S1_VCOEFF_29_1_inst_addr                                        "0x0127"
#define  set_SE_SE20_S1_VCOEFF_29_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_29_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_29_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_29_1_reg))
#define  SE_SE20_S1_VCOEFF_29_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_29_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_29_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_29_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_30_0                                                 0x1800CA60
#define  SE_SE20_S1_VCOEFF_30_0_reg_addr                                         "0xB800CA60"
#define  SE_SE20_S1_VCOEFF_30_0_reg                                              0xB800CA60
#define  SE_SE20_S1_VCOEFF_30_0_inst_addr                                        "0x0128"
#define  set_SE_SE20_S1_VCOEFF_30_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_30_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_30_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_30_0_reg))
#define  SE_SE20_S1_VCOEFF_30_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_30_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_30_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_30_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_30_1                                                 0x1800CA64
#define  SE_SE20_S1_VCOEFF_30_1_reg_addr                                         "0xB800CA64"
#define  SE_SE20_S1_VCOEFF_30_1_reg                                              0xB800CA64
#define  SE_SE20_S1_VCOEFF_30_1_inst_addr                                        "0x0129"
#define  set_SE_SE20_S1_VCOEFF_30_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_30_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_30_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_30_1_reg))
#define  SE_SE20_S1_VCOEFF_30_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_30_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_30_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_30_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_31_0                                                 0x1800CA70
#define  SE_SE20_S1_VCOEFF_31_0_reg_addr                                         "0xB800CA70"
#define  SE_SE20_S1_VCOEFF_31_0_reg                                              0xB800CA70
#define  SE_SE20_S1_VCOEFF_31_0_inst_addr                                        "0x012A"
#define  set_SE_SE20_S1_VCOEFF_31_0_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_31_0_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_31_0_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_31_0_reg))
#define  SE_SE20_S1_VCOEFF_31_0_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_31_0_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_31_0_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_31_0_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SE20_S1_VCOEFF_31_1                                                 0x1800CA74
#define  SE_SE20_S1_VCOEFF_31_1_reg_addr                                         "0xB800CA74"
#define  SE_SE20_S1_VCOEFF_31_1_reg                                              0xB800CA74
#define  SE_SE20_S1_VCOEFF_31_1_inst_addr                                        "0x012B"
#define  set_SE_SE20_S1_VCOEFF_31_1_reg(data)                                    (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_31_1_reg)=data)
#define  get_SE_SE20_S1_VCOEFF_31_1_reg                                          (*((volatile unsigned int*)SE_SE20_S1_VCOEFF_31_1_reg))
#define  SE_SE20_S1_VCOEFF_31_1_vcoef_shift                                      (0)
#define  SE_SE20_S1_VCOEFF_31_1_vcoef_mask                                       (0x00003FFF)
#define  SE_SE20_S1_VCOEFF_31_1_vcoef(data)                                      (0x00003FFF&(data))
#define  SE_SE20_S1_VCOEFF_31_1_get_vcoef(data)                                  (0x00003FFF&(data))

#define  SE_SC_BITBLIT_COLOR_KEY_0                                              0x1800CA80
#define  SE_SC_BITBLIT_COLOR_KEY_0_reg_addr                                      "0xB800CA80"
#define  SE_SC_BITBLIT_COLOR_KEY_0_reg                                           0xB800CA80
#define  SE_SC_BITBLIT_COLOR_KEY_0_inst_addr                                     "0x012C"
#define  set_SE_SC_BITBLIT_COLOR_KEY_0_reg(data)                                 (*((volatile unsigned int*)SE_SC_BITBLIT_COLOR_KEY_0_reg)=data)
#define  get_SE_SC_BITBLIT_COLOR_KEY_0_reg                                       (*((volatile unsigned int*)SE_SC_BITBLIT_COLOR_KEY_0_reg))
#define  SE_SC_BITBLIT_COLOR_KEY_0_color_key_shift                               (0)
#define  SE_SC_BITBLIT_COLOR_KEY_0_color_key_mask                                (0x00FFFFFF)
#define  SE_SC_BITBLIT_COLOR_KEY_0_color_key(data)                               (0x00FFFFFF&(data))
#define  SE_SC_BITBLIT_COLOR_KEY_0_get_color_key(data)                           (0x00FFFFFF&(data))

#define  SE_SC_BITBLIT_COLOR_KEY_1                                              0x1800CA84
#define  SE_SC_BITBLIT_COLOR_KEY_1_reg_addr                                      "0xB800CA84"
#define  SE_SC_BITBLIT_COLOR_KEY_1_reg                                           0xB800CA84
#define  SE_SC_BITBLIT_COLOR_KEY_1_inst_addr                                     "0x012D"
#define  set_SE_SC_BITBLIT_COLOR_KEY_1_reg(data)                                 (*((volatile unsigned int*)SE_SC_BITBLIT_COLOR_KEY_1_reg)=data)
#define  get_SE_SC_BITBLIT_COLOR_KEY_1_reg                                       (*((volatile unsigned int*)SE_SC_BITBLIT_COLOR_KEY_1_reg))
#define  SE_SC_BITBLIT_COLOR_KEY_1_color_key_shift                               (0)
#define  SE_SC_BITBLIT_COLOR_KEY_1_color_key_mask                                (0x00FFFFFF)
#define  SE_SC_BITBLIT_COLOR_KEY_1_color_key(data)                               (0x00FFFFFF&(data))
#define  SE_SC_BITBLIT_COLOR_KEY_1_get_color_key(data)                           (0x00FFFFFF&(data))

#define  SE_SRC_LG_2_0                                                          0x1800CA90
#define  SE_SRC_LG_2_0_reg_addr                                                  "0xB800CA90"
#define  SE_SRC_LG_2_0_reg                                                       0xB800CA90
#define  SE_SRC_LG_2_0_inst_addr                                                 "0x012E"
#define  set_SE_SRC_LG_2_0_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_2_0_reg)=data)
#define  get_SE_SRC_LG_2_0_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_2_0_reg))
#define  SE_SRC_LG_2_0_src_x_color_g_step_shift                                  (16)
#define  SE_SRC_LG_2_0_src_x_color_r_step_shift                                  (0)
#define  SE_SRC_LG_2_0_src_x_color_g_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_2_0_src_x_color_r_step_mask                                   (0x00001FFF)
#define  SE_SRC_LG_2_0_src_x_color_g_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_2_0_src_x_color_r_step(data)                                  (0x00001FFF&(data))
#define  SE_SRC_LG_2_0_get_src_x_color_g_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_2_0_get_src_x_color_r_step(data)                              (0x00001FFF&(data))

#define  SE_SRC_LG_2_1                                                          0x1800CA94
#define  SE_SRC_LG_2_1_reg_addr                                                  "0xB800CA94"
#define  SE_SRC_LG_2_1_reg                                                       0xB800CA94
#define  SE_SRC_LG_2_1_inst_addr                                                 "0x012F"
#define  set_SE_SRC_LG_2_1_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_2_1_reg)=data)
#define  get_SE_SRC_LG_2_1_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_2_1_reg))
#define  SE_SRC_LG_2_1_src_x_color_g_step_shift                                  (16)
#define  SE_SRC_LG_2_1_src_x_color_r_step_shift                                  (0)
#define  SE_SRC_LG_2_1_src_x_color_g_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_2_1_src_x_color_r_step_mask                                   (0x00001FFF)
#define  SE_SRC_LG_2_1_src_x_color_g_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_2_1_src_x_color_r_step(data)                                  (0x00001FFF&(data))
#define  SE_SRC_LG_2_1_get_src_x_color_g_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_2_1_get_src_x_color_r_step(data)                              (0x00001FFF&(data))

#define  SE_SRC_LG_3_0                                                          0x1800CAA0
#define  SE_SRC_LG_3_0_reg_addr                                                  "0xB800CAA0"
#define  SE_SRC_LG_3_0_reg                                                       0xB800CAA0
#define  SE_SRC_LG_3_0_inst_addr                                                 "0x0130"
#define  set_SE_SRC_LG_3_0_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_3_0_reg)=data)
#define  get_SE_SRC_LG_3_0_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_3_0_reg))
#define  SE_SRC_LG_3_0_src_x_color_b_step_shift                                  (16)
#define  SE_SRC_LG_3_0_src_x_alpha_step_shift                                    (0)
#define  SE_SRC_LG_3_0_src_x_color_b_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_3_0_src_x_alpha_step_mask                                     (0x00001FFF)
#define  SE_SRC_LG_3_0_src_x_color_b_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_3_0_src_x_alpha_step(data)                                    (0x00001FFF&(data))
#define  SE_SRC_LG_3_0_get_src_x_color_b_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_3_0_get_src_x_alpha_step(data)                                (0x00001FFF&(data))

#define  SE_SRC_LG_3_1                                                          0x1800CAA4
#define  SE_SRC_LG_3_1_reg_addr                                                  "0xB800CAA4"
#define  SE_SRC_LG_3_1_reg                                                       0xB800CAA4
#define  SE_SRC_LG_3_1_inst_addr                                                 "0x0131"
#define  set_SE_SRC_LG_3_1_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_3_1_reg)=data)
#define  get_SE_SRC_LG_3_1_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_3_1_reg))
#define  SE_SRC_LG_3_1_src_x_color_b_step_shift                                  (16)
#define  SE_SRC_LG_3_1_src_x_alpha_step_shift                                    (0)
#define  SE_SRC_LG_3_1_src_x_color_b_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_3_1_src_x_alpha_step_mask                                     (0x00001FFF)
#define  SE_SRC_LG_3_1_src_x_color_b_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_3_1_src_x_alpha_step(data)                                    (0x00001FFF&(data))
#define  SE_SRC_LG_3_1_get_src_x_color_b_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_3_1_get_src_x_alpha_step(data)                                (0x00001FFF&(data))

#define  SE_SRC_LG_4_0                                                          0x1800CAB0
#define  SE_SRC_LG_4_0_reg_addr                                                  "0xB800CAB0"
#define  SE_SRC_LG_4_0_reg                                                       0xB800CAB0
#define  SE_SRC_LG_4_0_inst_addr                                                 "0x0132"
#define  set_SE_SRC_LG_4_0_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_4_0_reg)=data)
#define  get_SE_SRC_LG_4_0_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_4_0_reg))
#define  SE_SRC_LG_4_0_src_y_color_g_step_shift                                  (16)
#define  SE_SRC_LG_4_0_src_y_color_r_step_shift                                  (0)
#define  SE_SRC_LG_4_0_src_y_color_g_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_4_0_src_y_color_r_step_mask                                   (0x00001FFF)
#define  SE_SRC_LG_4_0_src_y_color_g_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_4_0_src_y_color_r_step(data)                                  (0x00001FFF&(data))
#define  SE_SRC_LG_4_0_get_src_y_color_g_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_4_0_get_src_y_color_r_step(data)                              (0x00001FFF&(data))

#define  SE_SRC_LG_4_1                                                          0x1800CAB4
#define  SE_SRC_LG_4_1_reg_addr                                                  "0xB800CAB4"
#define  SE_SRC_LG_4_1_reg                                                       0xB800CAB4
#define  SE_SRC_LG_4_1_inst_addr                                                 "0x0133"
#define  set_SE_SRC_LG_4_1_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_4_1_reg)=data)
#define  get_SE_SRC_LG_4_1_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_4_1_reg))
#define  SE_SRC_LG_4_1_src_y_color_g_step_shift                                  (16)
#define  SE_SRC_LG_4_1_src_y_color_r_step_shift                                  (0)
#define  SE_SRC_LG_4_1_src_y_color_g_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_4_1_src_y_color_r_step_mask                                   (0x00001FFF)
#define  SE_SRC_LG_4_1_src_y_color_g_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_4_1_src_y_color_r_step(data)                                  (0x00001FFF&(data))
#define  SE_SRC_LG_4_1_get_src_y_color_g_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_4_1_get_src_y_color_r_step(data)                              (0x00001FFF&(data))

#define  SE_SRC_LG_5_0                                                          0x1800CAC0
#define  SE_SRC_LG_5_0_reg_addr                                                  "0xB800CAC0"
#define  SE_SRC_LG_5_0_reg                                                       0xB800CAC0
#define  SE_SRC_LG_5_0_inst_addr                                                 "0x0134"
#define  set_SE_SRC_LG_5_0_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_5_0_reg)=data)
#define  get_SE_SRC_LG_5_0_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_5_0_reg))
#define  SE_SRC_LG_5_0_src_y_color_b_step_shift                                  (16)
#define  SE_SRC_LG_5_0_src_y_alpha_step_shift                                    (0)
#define  SE_SRC_LG_5_0_src_y_color_b_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_5_0_src_y_alpha_step_mask                                     (0x00001FFF)
#define  SE_SRC_LG_5_0_src_y_color_b_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_5_0_src_y_alpha_step(data)                                    (0x00001FFF&(data))
#define  SE_SRC_LG_5_0_get_src_y_color_b_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_5_0_get_src_y_alpha_step(data)                                (0x00001FFF&(data))

#define  SE_SRC_LG_5_1                                                          0x1800CAC4
#define  SE_SRC_LG_5_1_reg_addr                                                  "0xB800CAC4"
#define  SE_SRC_LG_5_1_reg                                                       0xB800CAC4
#define  SE_SRC_LG_5_1_inst_addr                                                 "0x0135"
#define  set_SE_SRC_LG_5_1_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_5_1_reg)=data)
#define  get_SE_SRC_LG_5_1_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_5_1_reg))
#define  SE_SRC_LG_5_1_src_y_color_b_step_shift                                  (16)
#define  SE_SRC_LG_5_1_src_y_alpha_step_shift                                    (0)
#define  SE_SRC_LG_5_1_src_y_color_b_step_mask                                   (0x1FFF0000)
#define  SE_SRC_LG_5_1_src_y_alpha_step_mask                                     (0x00001FFF)
#define  SE_SRC_LG_5_1_src_y_color_b_step(data)                                  (0x1FFF0000&((data)<<16))
#define  SE_SRC_LG_5_1_src_y_alpha_step(data)                                    (0x00001FFF&(data))
#define  SE_SRC_LG_5_1_get_src_y_color_b_step(data)                              ((0x1FFF0000&(data))>>16)
#define  SE_SRC_LG_5_1_get_src_y_alpha_step(data)                                (0x00001FFF&(data))

#define  SE_SRC_LG_6_0                                                          0x1800CAD0
#define  SE_SRC_LG_6_0_reg_addr                                                  "0xB800CAD0"
#define  SE_SRC_LG_6_0_reg                                                       0xB800CAD0
#define  SE_SRC_LG_6_0_inst_addr                                                 "0x0136"
#define  set_SE_SRC_LG_6_0_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_6_0_reg)=data)
#define  get_SE_SRC_LG_6_0_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_6_0_reg))
#define  SE_SRC_LG_6_0_src_color_direction_shift                                 (0)
#define  SE_SRC_LG_6_0_src_color_direction_mask                                  (0x00000003)
#define  SE_SRC_LG_6_0_src_color_direction(data)                                 (0x00000003&(data))
#define  SE_SRC_LG_6_0_get_src_color_direction(data)                             (0x00000003&(data))

#define  SE_SRC_LG_6_1                                                          0x1800CAD4
#define  SE_SRC_LG_6_1_reg_addr                                                  "0xB800CAD4"
#define  SE_SRC_LG_6_1_reg                                                       0xB800CAD4
#define  SE_SRC_LG_6_1_inst_addr                                                 "0x0137"
#define  set_SE_SRC_LG_6_1_reg(data)                                             (*((volatile unsigned int*)SE_SRC_LG_6_1_reg)=data)
#define  get_SE_SRC_LG_6_1_reg                                                   (*((volatile unsigned int*)SE_SRC_LG_6_1_reg))
#define  SE_SRC_LG_6_1_src_color_direction_shift                                 (0)
#define  SE_SRC_LG_6_1_src_color_direction_mask                                  (0x00000003)
#define  SE_SRC_LG_6_1_src_color_direction(data)                                 (0x00000003&(data))
#define  SE_SRC_LG_6_1_get_src_color_direction(data)                             (0x00000003&(data))

#define  SE_SE20_BADDR_0_0                                                      0x1800CB80
#define  SE_SE20_BADDR_0_0_reg_addr                                              "0xB800CB80"
#define  SE_SE20_BADDR_0_0_reg                                                   0xB800CB80
#define  SE_SE20_BADDR_0_0_inst_addr                                             "0x0138"
#define  set_SE_SE20_BADDR_0_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_0_0_reg)=data)
#define  get_SE_SE20_BADDR_0_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_0_0_reg))
#define  SE_SE20_BADDR_0_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_0_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_0_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_0_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_0_1                                                      0x1800CB84
#define  SE_SE20_BADDR_0_1_reg_addr                                              "0xB800CB84"
#define  SE_SE20_BADDR_0_1_reg                                                   0xB800CB84
#define  SE_SE20_BADDR_0_1_inst_addr                                             "0x0139"
#define  set_SE_SE20_BADDR_0_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_0_1_reg)=data)
#define  get_SE_SE20_BADDR_0_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_0_1_reg))
#define  SE_SE20_BADDR_0_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_0_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_0_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_0_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_1_0                                                      0x1800CB90
#define  SE_SE20_BADDR_1_0_reg_addr                                              "0xB800CB90"
#define  SE_SE20_BADDR_1_0_reg                                                   0xB800CB90
#define  SE_SE20_BADDR_1_0_inst_addr                                             "0x013A"
#define  set_SE_SE20_BADDR_1_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_1_0_reg)=data)
#define  get_SE_SE20_BADDR_1_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_1_0_reg))
#define  SE_SE20_BADDR_1_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_1_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_1_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_1_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_1_1                                                      0x1800CB94
#define  SE_SE20_BADDR_1_1_reg_addr                                              "0xB800CB94"
#define  SE_SE20_BADDR_1_1_reg                                                   0xB800CB94
#define  SE_SE20_BADDR_1_1_inst_addr                                             "0x013B"
#define  set_SE_SE20_BADDR_1_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_1_1_reg)=data)
#define  get_SE_SE20_BADDR_1_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_1_1_reg))
#define  SE_SE20_BADDR_1_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_1_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_1_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_1_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_2_0                                                      0x1800CBA0
#define  SE_SE20_BADDR_2_0_reg_addr                                              "0xB800CBA0"
#define  SE_SE20_BADDR_2_0_reg                                                   0xB800CBA0
#define  SE_SE20_BADDR_2_0_inst_addr                                             "0x013C"
#define  set_SE_SE20_BADDR_2_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_2_0_reg)=data)
#define  get_SE_SE20_BADDR_2_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_2_0_reg))
#define  SE_SE20_BADDR_2_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_2_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_2_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_2_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_2_1                                                      0x1800CBA4
#define  SE_SE20_BADDR_2_1_reg_addr                                              "0xB800CBA4"
#define  SE_SE20_BADDR_2_1_reg                                                   0xB800CBA4
#define  SE_SE20_BADDR_2_1_inst_addr                                             "0x013D"
#define  set_SE_SE20_BADDR_2_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_2_1_reg)=data)
#define  get_SE_SE20_BADDR_2_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_2_1_reg))
#define  SE_SE20_BADDR_2_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_2_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_2_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_2_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_3_0                                                      0x1800CBB0
#define  SE_SE20_BADDR_3_0_reg_addr                                              "0xB800CBB0"
#define  SE_SE20_BADDR_3_0_reg                                                   0xB800CBB0
#define  SE_SE20_BADDR_3_0_inst_addr                                             "0x013E"
#define  set_SE_SE20_BADDR_3_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_3_0_reg)=data)
#define  get_SE_SE20_BADDR_3_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_3_0_reg))
#define  SE_SE20_BADDR_3_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_3_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_3_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_3_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_3_1                                                      0x1800CBB4
#define  SE_SE20_BADDR_3_1_reg_addr                                              "0xB800CBB4"
#define  SE_SE20_BADDR_3_1_reg                                                   0xB800CBB4
#define  SE_SE20_BADDR_3_1_inst_addr                                             "0x013F"
#define  set_SE_SE20_BADDR_3_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_3_1_reg)=data)
#define  get_SE_SE20_BADDR_3_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_3_1_reg))
#define  SE_SE20_BADDR_3_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_3_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_3_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_3_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_4_0                                                      0x1800CBC0
#define  SE_SE20_BADDR_4_0_reg_addr                                              "0xB800CBC0"
#define  SE_SE20_BADDR_4_0_reg                                                   0xB800CBC0
#define  SE_SE20_BADDR_4_0_inst_addr                                             "0x0140"
#define  set_SE_SE20_BADDR_4_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_4_0_reg)=data)
#define  get_SE_SE20_BADDR_4_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_4_0_reg))
#define  SE_SE20_BADDR_4_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_4_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_4_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_4_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_4_1                                                      0x1800CBC4
#define  SE_SE20_BADDR_4_1_reg_addr                                              "0xB800CBC4"
#define  SE_SE20_BADDR_4_1_reg                                                   0xB800CBC4
#define  SE_SE20_BADDR_4_1_inst_addr                                             "0x0141"
#define  set_SE_SE20_BADDR_4_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_4_1_reg)=data)
#define  get_SE_SE20_BADDR_4_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_4_1_reg))
#define  SE_SE20_BADDR_4_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_4_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_4_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_4_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_5_0                                                      0x1800CBD0
#define  SE_SE20_BADDR_5_0_reg_addr                                              "0xB800CBD0"
#define  SE_SE20_BADDR_5_0_reg                                                   0xB800CBD0
#define  SE_SE20_BADDR_5_0_inst_addr                                             "0x0142"
#define  set_SE_SE20_BADDR_5_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_5_0_reg)=data)
#define  get_SE_SE20_BADDR_5_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_5_0_reg))
#define  SE_SE20_BADDR_5_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_5_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_5_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_5_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_5_1                                                      0x1800CBD4
#define  SE_SE20_BADDR_5_1_reg_addr                                              "0xB800CBD4"
#define  SE_SE20_BADDR_5_1_reg                                                   0xB800CBD4
#define  SE_SE20_BADDR_5_1_inst_addr                                             "0x0143"
#define  set_SE_SE20_BADDR_5_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_5_1_reg)=data)
#define  get_SE_SE20_BADDR_5_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_5_1_reg))
#define  SE_SE20_BADDR_5_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_5_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_5_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_5_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_6_0                                                      0x1800CBE0
#define  SE_SE20_BADDR_6_0_reg_addr                                              "0xB800CBE0"
#define  SE_SE20_BADDR_6_0_reg                                                   0xB800CBE0
#define  SE_SE20_BADDR_6_0_inst_addr                                             "0x0144"
#define  set_SE_SE20_BADDR_6_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_6_0_reg)=data)
#define  get_SE_SE20_BADDR_6_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_6_0_reg))
#define  SE_SE20_BADDR_6_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_6_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_6_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_6_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_6_1                                                      0x1800CBE4
#define  SE_SE20_BADDR_6_1_reg_addr                                              "0xB800CBE4"
#define  SE_SE20_BADDR_6_1_reg                                                   0xB800CBE4
#define  SE_SE20_BADDR_6_1_inst_addr                                             "0x0145"
#define  set_SE_SE20_BADDR_6_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_6_1_reg)=data)
#define  get_SE_SE20_BADDR_6_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_6_1_reg))
#define  SE_SE20_BADDR_6_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_6_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_6_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_6_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_7_0                                                      0x1800CBF0
#define  SE_SE20_BADDR_7_0_reg_addr                                              "0xB800CBF0"
#define  SE_SE20_BADDR_7_0_reg                                                   0xB800CBF0
#define  SE_SE20_BADDR_7_0_inst_addr                                             "0x0146"
#define  set_SE_SE20_BADDR_7_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_7_0_reg)=data)
#define  get_SE_SE20_BADDR_7_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_7_0_reg))
#define  SE_SE20_BADDR_7_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_7_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_7_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_7_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_7_1                                                      0x1800CBF4
#define  SE_SE20_BADDR_7_1_reg_addr                                              "0xB800CBF4"
#define  SE_SE20_BADDR_7_1_reg                                                   0xB800CBF4
#define  SE_SE20_BADDR_7_1_inst_addr                                             "0x0147"
#define  set_SE_SE20_BADDR_7_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_7_1_reg)=data)
#define  get_SE_SE20_BADDR_7_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_7_1_reg))
#define  SE_SE20_BADDR_7_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_7_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_7_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_7_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_8_0                                                      0x1800CC00
#define  SE_SE20_BADDR_8_0_reg_addr                                              "0xB800CC00"
#define  SE_SE20_BADDR_8_0_reg                                                   0xB800CC00
#define  SE_SE20_BADDR_8_0_inst_addr                                             "0x0148"
#define  set_SE_SE20_BADDR_8_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_8_0_reg)=data)
#define  get_SE_SE20_BADDR_8_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_8_0_reg))
#define  SE_SE20_BADDR_8_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_8_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_8_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_8_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_8_1                                                      0x1800CC04
#define  SE_SE20_BADDR_8_1_reg_addr                                              "0xB800CC04"
#define  SE_SE20_BADDR_8_1_reg                                                   0xB800CC04
#define  SE_SE20_BADDR_8_1_inst_addr                                             "0x0149"
#define  set_SE_SE20_BADDR_8_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_8_1_reg)=data)
#define  get_SE_SE20_BADDR_8_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_8_1_reg))
#define  SE_SE20_BADDR_8_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_8_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_8_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_8_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_9_0                                                      0x1800CC10
#define  SE_SE20_BADDR_9_0_reg_addr                                              "0xB800CC10"
#define  SE_SE20_BADDR_9_0_reg                                                   0xB800CC10
#define  SE_SE20_BADDR_9_0_inst_addr                                             "0x014A"
#define  set_SE_SE20_BADDR_9_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_9_0_reg)=data)
#define  get_SE_SE20_BADDR_9_0_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_9_0_reg))
#define  SE_SE20_BADDR_9_0_baddr_shift                                           (0)
#define  SE_SE20_BADDR_9_0_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_9_0_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_9_0_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_9_1                                                      0x1800CC14
#define  SE_SE20_BADDR_9_1_reg_addr                                              "0xB800CC14"
#define  SE_SE20_BADDR_9_1_reg                                                   0xB800CC14
#define  SE_SE20_BADDR_9_1_inst_addr                                             "0x014B"
#define  set_SE_SE20_BADDR_9_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BADDR_9_1_reg)=data)
#define  get_SE_SE20_BADDR_9_1_reg                                               (*((volatile unsigned int*)SE_SE20_BADDR_9_1_reg))
#define  SE_SE20_BADDR_9_1_baddr_shift                                           (0)
#define  SE_SE20_BADDR_9_1_baddr_mask                                            (0xFFFFFFFF)
#define  SE_SE20_BADDR_9_1_baddr(data)                                           (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_9_1_get_baddr(data)                                       (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_10_0                                                     0x1800CC20
#define  SE_SE20_BADDR_10_0_reg_addr                                             "0xB800CC20"
#define  SE_SE20_BADDR_10_0_reg                                                  0xB800CC20
#define  SE_SE20_BADDR_10_0_inst_addr                                            "0x014C"
#define  set_SE_SE20_BADDR_10_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_10_0_reg)=data)
#define  get_SE_SE20_BADDR_10_0_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_10_0_reg))
#define  SE_SE20_BADDR_10_0_baddr_shift                                          (0)
#define  SE_SE20_BADDR_10_0_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_10_0_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_10_0_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_10_1                                                     0x1800CC24
#define  SE_SE20_BADDR_10_1_reg_addr                                             "0xB800CC24"
#define  SE_SE20_BADDR_10_1_reg                                                  0xB800CC24
#define  SE_SE20_BADDR_10_1_inst_addr                                            "0x014D"
#define  set_SE_SE20_BADDR_10_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_10_1_reg)=data)
#define  get_SE_SE20_BADDR_10_1_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_10_1_reg))
#define  SE_SE20_BADDR_10_1_baddr_shift                                          (0)
#define  SE_SE20_BADDR_10_1_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_10_1_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_10_1_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_11_0                                                     0x1800CC30
#define  SE_SE20_BADDR_11_0_reg_addr                                             "0xB800CC30"
#define  SE_SE20_BADDR_11_0_reg                                                  0xB800CC30
#define  SE_SE20_BADDR_11_0_inst_addr                                            "0x014E"
#define  set_SE_SE20_BADDR_11_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_11_0_reg)=data)
#define  get_SE_SE20_BADDR_11_0_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_11_0_reg))
#define  SE_SE20_BADDR_11_0_baddr_shift                                          (0)
#define  SE_SE20_BADDR_11_0_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_11_0_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_11_0_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_11_1                                                     0x1800CC34
#define  SE_SE20_BADDR_11_1_reg_addr                                             "0xB800CC34"
#define  SE_SE20_BADDR_11_1_reg                                                  0xB800CC34
#define  SE_SE20_BADDR_11_1_inst_addr                                            "0x014F"
#define  set_SE_SE20_BADDR_11_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_11_1_reg)=data)
#define  get_SE_SE20_BADDR_11_1_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_11_1_reg))
#define  SE_SE20_BADDR_11_1_baddr_shift                                          (0)
#define  SE_SE20_BADDR_11_1_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_11_1_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_11_1_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_12_0                                                     0x1800CC40
#define  SE_SE20_BADDR_12_0_reg_addr                                             "0xB800CC40"
#define  SE_SE20_BADDR_12_0_reg                                                  0xB800CC40
#define  SE_SE20_BADDR_12_0_inst_addr                                            "0x0150"
#define  set_SE_SE20_BADDR_12_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_12_0_reg)=data)
#define  get_SE_SE20_BADDR_12_0_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_12_0_reg))
#define  SE_SE20_BADDR_12_0_baddr_shift                                          (0)
#define  SE_SE20_BADDR_12_0_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_12_0_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_12_0_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_12_1                                                     0x1800CC44
#define  SE_SE20_BADDR_12_1_reg_addr                                             "0xB800CC44"
#define  SE_SE20_BADDR_12_1_reg                                                  0xB800CC44
#define  SE_SE20_BADDR_12_1_inst_addr                                            "0x0151"
#define  set_SE_SE20_BADDR_12_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_12_1_reg)=data)
#define  get_SE_SE20_BADDR_12_1_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_12_1_reg))
#define  SE_SE20_BADDR_12_1_baddr_shift                                          (0)
#define  SE_SE20_BADDR_12_1_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_12_1_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_12_1_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_13_0                                                     0x1800CC50
#define  SE_SE20_BADDR_13_0_reg_addr                                             "0xB800CC50"
#define  SE_SE20_BADDR_13_0_reg                                                  0xB800CC50
#define  SE_SE20_BADDR_13_0_inst_addr                                            "0x0152"
#define  set_SE_SE20_BADDR_13_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_13_0_reg)=data)
#define  get_SE_SE20_BADDR_13_0_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_13_0_reg))
#define  SE_SE20_BADDR_13_0_baddr_shift                                          (0)
#define  SE_SE20_BADDR_13_0_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_13_0_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_13_0_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_13_1                                                     0x1800CC54
#define  SE_SE20_BADDR_13_1_reg_addr                                             "0xB800CC54"
#define  SE_SE20_BADDR_13_1_reg                                                  0xB800CC54
#define  SE_SE20_BADDR_13_1_inst_addr                                            "0x0153"
#define  set_SE_SE20_BADDR_13_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_13_1_reg)=data)
#define  get_SE_SE20_BADDR_13_1_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_13_1_reg))
#define  SE_SE20_BADDR_13_1_baddr_shift                                          (0)
#define  SE_SE20_BADDR_13_1_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_13_1_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_13_1_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_14_0                                                     0x1800CC60
#define  SE_SE20_BADDR_14_0_reg_addr                                             "0xB800CC60"
#define  SE_SE20_BADDR_14_0_reg                                                  0xB800CC60
#define  SE_SE20_BADDR_14_0_inst_addr                                            "0x0154"
#define  set_SE_SE20_BADDR_14_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_14_0_reg)=data)
#define  get_SE_SE20_BADDR_14_0_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_14_0_reg))
#define  SE_SE20_BADDR_14_0_baddr_shift                                          (0)
#define  SE_SE20_BADDR_14_0_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_14_0_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_14_0_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_14_1                                                     0x1800CC64
#define  SE_SE20_BADDR_14_1_reg_addr                                             "0xB800CC64"
#define  SE_SE20_BADDR_14_1_reg                                                  0xB800CC64
#define  SE_SE20_BADDR_14_1_inst_addr                                            "0x0155"
#define  set_SE_SE20_BADDR_14_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_14_1_reg)=data)
#define  get_SE_SE20_BADDR_14_1_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_14_1_reg))
#define  SE_SE20_BADDR_14_1_baddr_shift                                          (0)
#define  SE_SE20_BADDR_14_1_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_14_1_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_14_1_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_15_0                                                     0x1800CC70
#define  SE_SE20_BADDR_15_0_reg_addr                                             "0xB800CC70"
#define  SE_SE20_BADDR_15_0_reg                                                  0xB800CC70
#define  SE_SE20_BADDR_15_0_inst_addr                                            "0x0156"
#define  set_SE_SE20_BADDR_15_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_15_0_reg)=data)
#define  get_SE_SE20_BADDR_15_0_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_15_0_reg))
#define  SE_SE20_BADDR_15_0_baddr_shift                                          (0)
#define  SE_SE20_BADDR_15_0_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_15_0_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_15_0_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_BADDR_15_1                                                     0x1800CC74
#define  SE_SE20_BADDR_15_1_reg_addr                                             "0xB800CC74"
#define  SE_SE20_BADDR_15_1_reg                                                  0xB800CC74
#define  SE_SE20_BADDR_15_1_inst_addr                                            "0x0157"
#define  set_SE_SE20_BADDR_15_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_BADDR_15_1_reg)=data)
#define  get_SE_SE20_BADDR_15_1_reg                                              (*((volatile unsigned int*)SE_SE20_BADDR_15_1_reg))
#define  SE_SE20_BADDR_15_1_baddr_shift                                          (0)
#define  SE_SE20_BADDR_15_1_baddr_mask                                           (0xFFFFFFFF)
#define  SE_SE20_BADDR_15_1_baddr(data)                                          (0xFFFFFFFF&(data))
#define  SE_SE20_BADDR_15_1_get_baddr(data)                                      (0xFFFFFFFF&(data))

#define  SE_SE20_PITCH_0_0                                                      0x1800CC80
#define  SE_SE20_PITCH_0_0_reg_addr                                              "0xB800CC80"
#define  SE_SE20_PITCH_0_0_reg                                                   0xB800CC80
#define  SE_SE20_PITCH_0_0_inst_addr                                             "0x0158"
#define  set_SE_SE20_PITCH_0_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_0_0_reg)=data)
#define  get_SE_SE20_PITCH_0_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_0_0_reg))
#define  SE_SE20_PITCH_0_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_0_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_0_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_0_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_0_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_0_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_0_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_0_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_0_1                                                      0x1800CC84
#define  SE_SE20_PITCH_0_1_reg_addr                                              "0xB800CC84"
#define  SE_SE20_PITCH_0_1_reg                                                   0xB800CC84
#define  SE_SE20_PITCH_0_1_inst_addr                                             "0x0159"
#define  set_SE_SE20_PITCH_0_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_0_1_reg)=data)
#define  get_SE_SE20_PITCH_0_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_0_1_reg))
#define  SE_SE20_PITCH_0_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_0_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_0_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_0_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_0_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_0_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_0_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_0_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_1_0                                                      0x1800CC90
#define  SE_SE20_PITCH_1_0_reg_addr                                              "0xB800CC90"
#define  SE_SE20_PITCH_1_0_reg                                                   0xB800CC90
#define  SE_SE20_PITCH_1_0_inst_addr                                             "0x015A"
#define  set_SE_SE20_PITCH_1_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_1_0_reg)=data)
#define  get_SE_SE20_PITCH_1_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_1_0_reg))
#define  SE_SE20_PITCH_1_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_1_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_1_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_1_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_1_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_1_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_1_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_1_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_1_1                                                      0x1800CC94
#define  SE_SE20_PITCH_1_1_reg_addr                                              "0xB800CC94"
#define  SE_SE20_PITCH_1_1_reg                                                   0xB800CC94
#define  SE_SE20_PITCH_1_1_inst_addr                                             "0x015B"
#define  set_SE_SE20_PITCH_1_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_1_1_reg)=data)
#define  get_SE_SE20_PITCH_1_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_1_1_reg))
#define  SE_SE20_PITCH_1_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_1_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_1_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_1_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_1_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_1_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_1_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_1_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_2_0                                                      0x1800CCA0
#define  SE_SE20_PITCH_2_0_reg_addr                                              "0xB800CCA0"
#define  SE_SE20_PITCH_2_0_reg                                                   0xB800CCA0
#define  SE_SE20_PITCH_2_0_inst_addr                                             "0x015C"
#define  set_SE_SE20_PITCH_2_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_2_0_reg)=data)
#define  get_SE_SE20_PITCH_2_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_2_0_reg))
#define  SE_SE20_PITCH_2_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_2_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_2_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_2_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_2_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_2_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_2_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_2_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_2_1                                                      0x1800CCA4
#define  SE_SE20_PITCH_2_1_reg_addr                                              "0xB800CCA4"
#define  SE_SE20_PITCH_2_1_reg                                                   0xB800CCA4
#define  SE_SE20_PITCH_2_1_inst_addr                                             "0x015D"
#define  set_SE_SE20_PITCH_2_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_2_1_reg)=data)
#define  get_SE_SE20_PITCH_2_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_2_1_reg))
#define  SE_SE20_PITCH_2_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_2_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_2_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_2_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_2_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_2_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_2_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_2_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_3_0                                                      0x1800CCB0
#define  SE_SE20_PITCH_3_0_reg_addr                                              "0xB800CCB0"
#define  SE_SE20_PITCH_3_0_reg                                                   0xB800CCB0
#define  SE_SE20_PITCH_3_0_inst_addr                                             "0x015E"
#define  set_SE_SE20_PITCH_3_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_3_0_reg)=data)
#define  get_SE_SE20_PITCH_3_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_3_0_reg))
#define  SE_SE20_PITCH_3_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_3_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_3_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_3_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_3_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_3_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_3_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_3_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_3_1                                                      0x1800CCB4
#define  SE_SE20_PITCH_3_1_reg_addr                                              "0xB800CCB4"
#define  SE_SE20_PITCH_3_1_reg                                                   0xB800CCB4
#define  SE_SE20_PITCH_3_1_inst_addr                                             "0x015F"
#define  set_SE_SE20_PITCH_3_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_3_1_reg)=data)
#define  get_SE_SE20_PITCH_3_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_3_1_reg))
#define  SE_SE20_PITCH_3_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_3_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_3_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_3_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_3_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_3_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_3_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_3_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_4_0                                                      0x1800CCC0
#define  SE_SE20_PITCH_4_0_reg_addr                                              "0xB800CCC0"
#define  SE_SE20_PITCH_4_0_reg                                                   0xB800CCC0
#define  SE_SE20_PITCH_4_0_inst_addr                                             "0x0160"
#define  set_SE_SE20_PITCH_4_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_4_0_reg)=data)
#define  get_SE_SE20_PITCH_4_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_4_0_reg))
#define  SE_SE20_PITCH_4_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_4_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_4_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_4_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_4_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_4_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_4_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_4_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_4_1                                                      0x1800CCC4
#define  SE_SE20_PITCH_4_1_reg_addr                                              "0xB800CCC4"
#define  SE_SE20_PITCH_4_1_reg                                                   0xB800CCC4
#define  SE_SE20_PITCH_4_1_inst_addr                                             "0x0161"
#define  set_SE_SE20_PITCH_4_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_4_1_reg)=data)
#define  get_SE_SE20_PITCH_4_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_4_1_reg))
#define  SE_SE20_PITCH_4_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_4_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_4_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_4_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_4_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_4_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_4_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_4_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_5_0                                                      0x1800CCD0
#define  SE_SE20_PITCH_5_0_reg_addr                                              "0xB800CCD0"
#define  SE_SE20_PITCH_5_0_reg                                                   0xB800CCD0
#define  SE_SE20_PITCH_5_0_inst_addr                                             "0x0162"
#define  set_SE_SE20_PITCH_5_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_5_0_reg)=data)
#define  get_SE_SE20_PITCH_5_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_5_0_reg))
#define  SE_SE20_PITCH_5_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_5_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_5_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_5_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_5_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_5_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_5_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_5_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_5_1                                                      0x1800CCD4
#define  SE_SE20_PITCH_5_1_reg_addr                                              "0xB800CCD4"
#define  SE_SE20_PITCH_5_1_reg                                                   0xB800CCD4
#define  SE_SE20_PITCH_5_1_inst_addr                                             "0x0163"
#define  set_SE_SE20_PITCH_5_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_5_1_reg)=data)
#define  get_SE_SE20_PITCH_5_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_5_1_reg))
#define  SE_SE20_PITCH_5_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_5_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_5_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_5_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_5_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_5_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_5_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_5_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_6_0                                                      0x1800CCE0
#define  SE_SE20_PITCH_6_0_reg_addr                                              "0xB800CCE0"
#define  SE_SE20_PITCH_6_0_reg                                                   0xB800CCE0
#define  SE_SE20_PITCH_6_0_inst_addr                                             "0x0164"
#define  set_SE_SE20_PITCH_6_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_6_0_reg)=data)
#define  get_SE_SE20_PITCH_6_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_6_0_reg))
#define  SE_SE20_PITCH_6_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_6_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_6_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_6_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_6_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_6_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_6_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_6_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_6_1                                                      0x1800CCE4
#define  SE_SE20_PITCH_6_1_reg_addr                                              "0xB800CCE4"
#define  SE_SE20_PITCH_6_1_reg                                                   0xB800CCE4
#define  SE_SE20_PITCH_6_1_inst_addr                                             "0x0165"
#define  set_SE_SE20_PITCH_6_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_6_1_reg)=data)
#define  get_SE_SE20_PITCH_6_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_6_1_reg))
#define  SE_SE20_PITCH_6_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_6_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_6_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_6_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_6_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_6_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_6_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_6_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_7_0                                                      0x1800CCF0
#define  SE_SE20_PITCH_7_0_reg_addr                                              "0xB800CCF0"
#define  SE_SE20_PITCH_7_0_reg                                                   0xB800CCF0
#define  SE_SE20_PITCH_7_0_inst_addr                                             "0x0166"
#define  set_SE_SE20_PITCH_7_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_7_0_reg)=data)
#define  get_SE_SE20_PITCH_7_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_7_0_reg))
#define  SE_SE20_PITCH_7_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_7_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_7_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_7_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_7_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_7_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_7_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_7_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_7_1                                                      0x1800CCF4
#define  SE_SE20_PITCH_7_1_reg_addr                                              "0xB800CCF4"
#define  SE_SE20_PITCH_7_1_reg                                                   0xB800CCF4
#define  SE_SE20_PITCH_7_1_inst_addr                                             "0x0167"
#define  set_SE_SE20_PITCH_7_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_7_1_reg)=data)
#define  get_SE_SE20_PITCH_7_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_7_1_reg))
#define  SE_SE20_PITCH_7_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_7_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_7_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_7_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_7_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_7_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_7_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_7_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_8_0                                                      0x1800CD00
#define  SE_SE20_PITCH_8_0_reg_addr                                              "0xB800CD00"
#define  SE_SE20_PITCH_8_0_reg                                                   0xB800CD00
#define  SE_SE20_PITCH_8_0_inst_addr                                             "0x0168"
#define  set_SE_SE20_PITCH_8_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_8_0_reg)=data)
#define  get_SE_SE20_PITCH_8_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_8_0_reg))
#define  SE_SE20_PITCH_8_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_8_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_8_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_8_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_8_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_8_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_8_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_8_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_8_1                                                      0x1800CD04
#define  SE_SE20_PITCH_8_1_reg_addr                                              "0xB800CD04"
#define  SE_SE20_PITCH_8_1_reg                                                   0xB800CD04
#define  SE_SE20_PITCH_8_1_inst_addr                                             "0x0169"
#define  set_SE_SE20_PITCH_8_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_8_1_reg)=data)
#define  get_SE_SE20_PITCH_8_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_8_1_reg))
#define  SE_SE20_PITCH_8_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_8_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_8_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_8_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_8_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_8_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_8_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_8_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_9_0                                                      0x1800CD10
#define  SE_SE20_PITCH_9_0_reg_addr                                              "0xB800CD10"
#define  SE_SE20_PITCH_9_0_reg                                                   0xB800CD10
#define  SE_SE20_PITCH_9_0_inst_addr                                             "0x016A"
#define  set_SE_SE20_PITCH_9_0_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_9_0_reg)=data)
#define  get_SE_SE20_PITCH_9_0_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_9_0_reg))
#define  SE_SE20_PITCH_9_0_interleave_shift                                      (16)
#define  SE_SE20_PITCH_9_0_pitch_shift                                           (0)
#define  SE_SE20_PITCH_9_0_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_9_0_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_9_0_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_9_0_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_9_0_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_9_0_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_9_1                                                      0x1800CD14
#define  SE_SE20_PITCH_9_1_reg_addr                                              "0xB800CD14"
#define  SE_SE20_PITCH_9_1_reg                                                   0xB800CD14
#define  SE_SE20_PITCH_9_1_inst_addr                                             "0x016B"
#define  set_SE_SE20_PITCH_9_1_reg(data)                                         (*((volatile unsigned int*)SE_SE20_PITCH_9_1_reg)=data)
#define  get_SE_SE20_PITCH_9_1_reg                                               (*((volatile unsigned int*)SE_SE20_PITCH_9_1_reg))
#define  SE_SE20_PITCH_9_1_interleave_shift                                      (16)
#define  SE_SE20_PITCH_9_1_pitch_shift                                           (0)
#define  SE_SE20_PITCH_9_1_interleave_mask                                       (0x00010000)
#define  SE_SE20_PITCH_9_1_pitch_mask                                            (0x0000FFFF)
#define  SE_SE20_PITCH_9_1_interleave(data)                                      (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_9_1_pitch(data)                                           (0x0000FFFF&(data))
#define  SE_SE20_PITCH_9_1_get_interleave(data)                                  ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_9_1_get_pitch(data)                                       (0x0000FFFF&(data))

#define  SE_SE20_PITCH_10_0                                                     0x1800CD20
#define  SE_SE20_PITCH_10_0_reg_addr                                             "0xB800CD20"
#define  SE_SE20_PITCH_10_0_reg                                                  0xB800CD20
#define  SE_SE20_PITCH_10_0_inst_addr                                            "0x016C"
#define  set_SE_SE20_PITCH_10_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_10_0_reg)=data)
#define  get_SE_SE20_PITCH_10_0_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_10_0_reg))
#define  SE_SE20_PITCH_10_0_interleave_shift                                     (16)
#define  SE_SE20_PITCH_10_0_pitch_shift                                          (0)
#define  SE_SE20_PITCH_10_0_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_10_0_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_10_0_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_10_0_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_10_0_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_10_0_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_10_1                                                     0x1800CD24
#define  SE_SE20_PITCH_10_1_reg_addr                                             "0xB800CD24"
#define  SE_SE20_PITCH_10_1_reg                                                  0xB800CD24
#define  SE_SE20_PITCH_10_1_inst_addr                                            "0x016D"
#define  set_SE_SE20_PITCH_10_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_10_1_reg)=data)
#define  get_SE_SE20_PITCH_10_1_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_10_1_reg))
#define  SE_SE20_PITCH_10_1_interleave_shift                                     (16)
#define  SE_SE20_PITCH_10_1_pitch_shift                                          (0)
#define  SE_SE20_PITCH_10_1_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_10_1_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_10_1_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_10_1_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_10_1_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_10_1_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_11_0                                                     0x1800CD30
#define  SE_SE20_PITCH_11_0_reg_addr                                             "0xB800CD30"
#define  SE_SE20_PITCH_11_0_reg                                                  0xB800CD30
#define  SE_SE20_PITCH_11_0_inst_addr                                            "0x016E"
#define  set_SE_SE20_PITCH_11_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_11_0_reg)=data)
#define  get_SE_SE20_PITCH_11_0_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_11_0_reg))
#define  SE_SE20_PITCH_11_0_interleave_shift                                     (16)
#define  SE_SE20_PITCH_11_0_pitch_shift                                          (0)
#define  SE_SE20_PITCH_11_0_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_11_0_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_11_0_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_11_0_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_11_0_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_11_0_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_11_1                                                     0x1800CD34
#define  SE_SE20_PITCH_11_1_reg_addr                                             "0xB800CD34"
#define  SE_SE20_PITCH_11_1_reg                                                  0xB800CD34
#define  SE_SE20_PITCH_11_1_inst_addr                                            "0x016F"
#define  set_SE_SE20_PITCH_11_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_11_1_reg)=data)
#define  get_SE_SE20_PITCH_11_1_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_11_1_reg))
#define  SE_SE20_PITCH_11_1_interleave_shift                                     (16)
#define  SE_SE20_PITCH_11_1_pitch_shift                                          (0)
#define  SE_SE20_PITCH_11_1_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_11_1_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_11_1_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_11_1_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_11_1_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_11_1_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_12_0                                                     0x1800CD40
#define  SE_SE20_PITCH_12_0_reg_addr                                             "0xB800CD40"
#define  SE_SE20_PITCH_12_0_reg                                                  0xB800CD40
#define  SE_SE20_PITCH_12_0_inst_addr                                            "0x0170"
#define  set_SE_SE20_PITCH_12_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_12_0_reg)=data)
#define  get_SE_SE20_PITCH_12_0_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_12_0_reg))
#define  SE_SE20_PITCH_12_0_interleave_shift                                     (16)
#define  SE_SE20_PITCH_12_0_pitch_shift                                          (0)
#define  SE_SE20_PITCH_12_0_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_12_0_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_12_0_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_12_0_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_12_0_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_12_0_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_12_1                                                     0x1800CD44
#define  SE_SE20_PITCH_12_1_reg_addr                                             "0xB800CD44"
#define  SE_SE20_PITCH_12_1_reg                                                  0xB800CD44
#define  SE_SE20_PITCH_12_1_inst_addr                                            "0x0171"
#define  set_SE_SE20_PITCH_12_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_12_1_reg)=data)
#define  get_SE_SE20_PITCH_12_1_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_12_1_reg))
#define  SE_SE20_PITCH_12_1_interleave_shift                                     (16)
#define  SE_SE20_PITCH_12_1_pitch_shift                                          (0)
#define  SE_SE20_PITCH_12_1_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_12_1_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_12_1_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_12_1_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_12_1_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_12_1_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_13_0                                                     0x1800CD50
#define  SE_SE20_PITCH_13_0_reg_addr                                             "0xB800CD50"
#define  SE_SE20_PITCH_13_0_reg                                                  0xB800CD50
#define  SE_SE20_PITCH_13_0_inst_addr                                            "0x0172"
#define  set_SE_SE20_PITCH_13_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_13_0_reg)=data)
#define  get_SE_SE20_PITCH_13_0_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_13_0_reg))
#define  SE_SE20_PITCH_13_0_interleave_shift                                     (16)
#define  SE_SE20_PITCH_13_0_pitch_shift                                          (0)
#define  SE_SE20_PITCH_13_0_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_13_0_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_13_0_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_13_0_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_13_0_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_13_0_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_13_1                                                     0x1800CD54
#define  SE_SE20_PITCH_13_1_reg_addr                                             "0xB800CD54"
#define  SE_SE20_PITCH_13_1_reg                                                  0xB800CD54
#define  SE_SE20_PITCH_13_1_inst_addr                                            "0x0173"
#define  set_SE_SE20_PITCH_13_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_13_1_reg)=data)
#define  get_SE_SE20_PITCH_13_1_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_13_1_reg))
#define  SE_SE20_PITCH_13_1_interleave_shift                                     (16)
#define  SE_SE20_PITCH_13_1_pitch_shift                                          (0)
#define  SE_SE20_PITCH_13_1_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_13_1_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_13_1_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_13_1_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_13_1_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_13_1_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_14_0                                                     0x1800CD60
#define  SE_SE20_PITCH_14_0_reg_addr                                             "0xB800CD60"
#define  SE_SE20_PITCH_14_0_reg                                                  0xB800CD60
#define  SE_SE20_PITCH_14_0_inst_addr                                            "0x0174"
#define  set_SE_SE20_PITCH_14_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_14_0_reg)=data)
#define  get_SE_SE20_PITCH_14_0_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_14_0_reg))
#define  SE_SE20_PITCH_14_0_interleave_shift                                     (16)
#define  SE_SE20_PITCH_14_0_pitch_shift                                          (0)
#define  SE_SE20_PITCH_14_0_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_14_0_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_14_0_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_14_0_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_14_0_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_14_0_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_14_1                                                     0x1800CD64
#define  SE_SE20_PITCH_14_1_reg_addr                                             "0xB800CD64"
#define  SE_SE20_PITCH_14_1_reg                                                  0xB800CD64
#define  SE_SE20_PITCH_14_1_inst_addr                                            "0x0175"
#define  set_SE_SE20_PITCH_14_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_14_1_reg)=data)
#define  get_SE_SE20_PITCH_14_1_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_14_1_reg))
#define  SE_SE20_PITCH_14_1_interleave_shift                                     (16)
#define  SE_SE20_PITCH_14_1_pitch_shift                                          (0)
#define  SE_SE20_PITCH_14_1_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_14_1_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_14_1_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_14_1_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_14_1_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_14_1_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_15_0                                                     0x1800CD70
#define  SE_SE20_PITCH_15_0_reg_addr                                             "0xB800CD70"
#define  SE_SE20_PITCH_15_0_reg                                                  0xB800CD70
#define  SE_SE20_PITCH_15_0_inst_addr                                            "0x0176"
#define  set_SE_SE20_PITCH_15_0_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_15_0_reg)=data)
#define  get_SE_SE20_PITCH_15_0_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_15_0_reg))
#define  SE_SE20_PITCH_15_0_interleave_shift                                     (16)
#define  SE_SE20_PITCH_15_0_pitch_shift                                          (0)
#define  SE_SE20_PITCH_15_0_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_15_0_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_15_0_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_15_0_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_15_0_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_15_0_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SE20_PITCH_15_1                                                     0x1800CD74
#define  SE_SE20_PITCH_15_1_reg_addr                                             "0xB800CD74"
#define  SE_SE20_PITCH_15_1_reg                                                  0xB800CD74
#define  SE_SE20_PITCH_15_1_inst_addr                                            "0x0177"
#define  set_SE_SE20_PITCH_15_1_reg(data)                                        (*((volatile unsigned int*)SE_SE20_PITCH_15_1_reg)=data)
#define  get_SE_SE20_PITCH_15_1_reg                                              (*((volatile unsigned int*)SE_SE20_PITCH_15_1_reg))
#define  SE_SE20_PITCH_15_1_interleave_shift                                     (16)
#define  SE_SE20_PITCH_15_1_pitch_shift                                          (0)
#define  SE_SE20_PITCH_15_1_interleave_mask                                      (0x00010000)
#define  SE_SE20_PITCH_15_1_pitch_mask                                           (0x0000FFFF)
#define  SE_SE20_PITCH_15_1_interleave(data)                                     (0x00010000&((data)<<16))
#define  SE_SE20_PITCH_15_1_pitch(data)                                          (0x0000FFFF&(data))
#define  SE_SE20_PITCH_15_1_get_interleave(data)                                 ((0x00010000&(data))>>16)
#define  SE_SE20_PITCH_15_1_get_pitch(data)                                      (0x0000FFFF&(data))

#define  SE_SWAP_0                                                              0x1800CD80
#define  SE_SWAP_0_reg_addr                                                      "0xB800CD80"
#define  SE_SWAP_0_reg                                                           0xB800CD80
#define  SE_SWAP_0_inst_addr                                                     "0x0178"
#define  set_SE_SWAP_0_reg(data)                                                 (*((volatile unsigned int*)SE_SWAP_0_reg)=data)
#define  get_SE_SWAP_0_reg                                                       (*((volatile unsigned int*)SE_SWAP_0_reg))
#define  SE_SWAP_0_s2_r_8byte_swap_shift                                         (11)
#define  SE_SWAP_0_s2_r_4byte_swap_shift                                         (10)
#define  SE_SWAP_0_s2_r_2byte_swap_shift                                         (9)
#define  SE_SWAP_0_s2_r_1byte_swap_shift                                         (8)
#define  SE_SWAP_0_s1_r_8byte_swap_shift                                         (7)
#define  SE_SWAP_0_s1_r_4byte_swap_shift                                         (6)
#define  SE_SWAP_0_s1_r_2byte_swap_shift                                         (5)
#define  SE_SWAP_0_s1_r_1byte_swap_shift                                         (4)
#define  SE_SWAP_0_rslt_w_8byte_swap_shift                                       (3)
#define  SE_SWAP_0_rslt_w_4byte_swap_shift                                       (2)
#define  SE_SWAP_0_rslt_w_2byte_swap_shift                                       (1)
#define  SE_SWAP_0_rslt_w_1byte_swap_shift                                       (0)
#define  SE_SWAP_0_s2_r_8byte_swap_mask                                          (0x00000800)
#define  SE_SWAP_0_s2_r_4byte_swap_mask                                          (0x00000400)
#define  SE_SWAP_0_s2_r_2byte_swap_mask                                          (0x00000200)
#define  SE_SWAP_0_s2_r_1byte_swap_mask                                          (0x00000100)
#define  SE_SWAP_0_s1_r_8byte_swap_mask                                          (0x00000080)
#define  SE_SWAP_0_s1_r_4byte_swap_mask                                          (0x00000040)
#define  SE_SWAP_0_s1_r_2byte_swap_mask                                          (0x00000020)
#define  SE_SWAP_0_s1_r_1byte_swap_mask                                          (0x00000010)
#define  SE_SWAP_0_rslt_w_8byte_swap_mask                                        (0x00000008)
#define  SE_SWAP_0_rslt_w_4byte_swap_mask                                        (0x00000004)
#define  SE_SWAP_0_rslt_w_2byte_swap_mask                                        (0x00000002)
#define  SE_SWAP_0_rslt_w_1byte_swap_mask                                        (0x00000001)
#define  SE_SWAP_0_s2_r_8byte_swap(data)                                         (0x00000800&((data)<<11))
#define  SE_SWAP_0_s2_r_4byte_swap(data)                                         (0x00000400&((data)<<10))
#define  SE_SWAP_0_s2_r_2byte_swap(data)                                         (0x00000200&((data)<<9))
#define  SE_SWAP_0_s2_r_1byte_swap(data)                                         (0x00000100&((data)<<8))
#define  SE_SWAP_0_s1_r_8byte_swap(data)                                         (0x00000080&((data)<<7))
#define  SE_SWAP_0_s1_r_4byte_swap(data)                                         (0x00000040&((data)<<6))
#define  SE_SWAP_0_s1_r_2byte_swap(data)                                         (0x00000020&((data)<<5))
#define  SE_SWAP_0_s1_r_1byte_swap(data)                                         (0x00000010&((data)<<4))
#define  SE_SWAP_0_rslt_w_8byte_swap(data)                                       (0x00000008&((data)<<3))
#define  SE_SWAP_0_rslt_w_4byte_swap(data)                                       (0x00000004&((data)<<2))
#define  SE_SWAP_0_rslt_w_2byte_swap(data)                                       (0x00000002&((data)<<1))
#define  SE_SWAP_0_rslt_w_1byte_swap(data)                                       (0x00000001&(data))
#define  SE_SWAP_0_get_s2_r_8byte_swap(data)                                     ((0x00000800&(data))>>11)
#define  SE_SWAP_0_get_s2_r_4byte_swap(data)                                     ((0x00000400&(data))>>10)
#define  SE_SWAP_0_get_s2_r_2byte_swap(data)                                     ((0x00000200&(data))>>9)
#define  SE_SWAP_0_get_s2_r_1byte_swap(data)                                     ((0x00000100&(data))>>8)
#define  SE_SWAP_0_get_s1_r_8byte_swap(data)                                     ((0x00000080&(data))>>7)
#define  SE_SWAP_0_get_s1_r_4byte_swap(data)                                     ((0x00000040&(data))>>6)
#define  SE_SWAP_0_get_s1_r_2byte_swap(data)                                     ((0x00000020&(data))>>5)
#define  SE_SWAP_0_get_s1_r_1byte_swap(data)                                     ((0x00000010&(data))>>4)
#define  SE_SWAP_0_get_rslt_w_8byte_swap(data)                                   ((0x00000008&(data))>>3)
#define  SE_SWAP_0_get_rslt_w_4byte_swap(data)                                   ((0x00000004&(data))>>2)
#define  SE_SWAP_0_get_rslt_w_2byte_swap(data)                                   ((0x00000002&(data))>>1)
#define  SE_SWAP_0_get_rslt_w_1byte_swap(data)                                   (0x00000001&(data))

#define  SE_SWAP_1                                                              0x1800CD84
#define  SE_SWAP_1_reg_addr                                                      "0xB800CD84"
#define  SE_SWAP_1_reg                                                           0xB800CD84
#define  SE_SWAP_1_inst_addr                                                     "0x0179"
#define  set_SE_SWAP_1_reg(data)                                                 (*((volatile unsigned int*)SE_SWAP_1_reg)=data)
#define  get_SE_SWAP_1_reg                                                       (*((volatile unsigned int*)SE_SWAP_1_reg))
#define  SE_SWAP_1_s2_r_8byte_swap_shift                                         (11)
#define  SE_SWAP_1_s2_r_4byte_swap_shift                                         (10)
#define  SE_SWAP_1_s2_r_2byte_swap_shift                                         (9)
#define  SE_SWAP_1_s2_r_1byte_swap_shift                                         (8)
#define  SE_SWAP_1_s1_r_8byte_swap_shift                                         (7)
#define  SE_SWAP_1_s1_r_4byte_swap_shift                                         (6)
#define  SE_SWAP_1_s1_r_2byte_swap_shift                                         (5)
#define  SE_SWAP_1_s1_r_1byte_swap_shift                                         (4)
#define  SE_SWAP_1_rslt_w_8byte_swap_shift                                       (3)
#define  SE_SWAP_1_rslt_w_4byte_swap_shift                                       (2)
#define  SE_SWAP_1_rslt_w_2byte_swap_shift                                       (1)
#define  SE_SWAP_1_rslt_w_1byte_swap_shift                                       (0)
#define  SE_SWAP_1_s2_r_8byte_swap_mask                                          (0x00000800)
#define  SE_SWAP_1_s2_r_4byte_swap_mask                                          (0x00000400)
#define  SE_SWAP_1_s2_r_2byte_swap_mask                                          (0x00000200)
#define  SE_SWAP_1_s2_r_1byte_swap_mask                                          (0x00000100)
#define  SE_SWAP_1_s1_r_8byte_swap_mask                                          (0x00000080)
#define  SE_SWAP_1_s1_r_4byte_swap_mask                                          (0x00000040)
#define  SE_SWAP_1_s1_r_2byte_swap_mask                                          (0x00000020)
#define  SE_SWAP_1_s1_r_1byte_swap_mask                                          (0x00000010)
#define  SE_SWAP_1_rslt_w_8byte_swap_mask                                        (0x00000008)
#define  SE_SWAP_1_rslt_w_4byte_swap_mask                                        (0x00000004)
#define  SE_SWAP_1_rslt_w_2byte_swap_mask                                        (0x00000002)
#define  SE_SWAP_1_rslt_w_1byte_swap_mask                                        (0x00000001)
#define  SE_SWAP_1_s2_r_8byte_swap(data)                                         (0x00000800&((data)<<11))
#define  SE_SWAP_1_s2_r_4byte_swap(data)                                         (0x00000400&((data)<<10))
#define  SE_SWAP_1_s2_r_2byte_swap(data)                                         (0x00000200&((data)<<9))
#define  SE_SWAP_1_s2_r_1byte_swap(data)                                         (0x00000100&((data)<<8))
#define  SE_SWAP_1_s1_r_8byte_swap(data)                                         (0x00000080&((data)<<7))
#define  SE_SWAP_1_s1_r_4byte_swap(data)                                         (0x00000040&((data)<<6))
#define  SE_SWAP_1_s1_r_2byte_swap(data)                                         (0x00000020&((data)<<5))
#define  SE_SWAP_1_s1_r_1byte_swap(data)                                         (0x00000010&((data)<<4))
#define  SE_SWAP_1_rslt_w_8byte_swap(data)                                       (0x00000008&((data)<<3))
#define  SE_SWAP_1_rslt_w_4byte_swap(data)                                       (0x00000004&((data)<<2))
#define  SE_SWAP_1_rslt_w_2byte_swap(data)                                       (0x00000002&((data)<<1))
#define  SE_SWAP_1_rslt_w_1byte_swap(data)                                       (0x00000001&(data))
#define  SE_SWAP_1_get_s2_r_8byte_swap(data)                                     ((0x00000800&(data))>>11)
#define  SE_SWAP_1_get_s2_r_4byte_swap(data)                                     ((0x00000400&(data))>>10)
#define  SE_SWAP_1_get_s2_r_2byte_swap(data)                                     ((0x00000200&(data))>>9)
#define  SE_SWAP_1_get_s2_r_1byte_swap(data)                                     ((0x00000100&(data))>>8)
#define  SE_SWAP_1_get_s1_r_8byte_swap(data)                                     ((0x00000080&(data))>>7)
#define  SE_SWAP_1_get_s1_r_4byte_swap(data)                                     ((0x00000040&(data))>>6)
#define  SE_SWAP_1_get_s1_r_2byte_swap(data)                                     ((0x00000020&(data))>>5)
#define  SE_SWAP_1_get_s1_r_1byte_swap(data)                                     ((0x00000010&(data))>>4)
#define  SE_SWAP_1_get_rslt_w_8byte_swap(data)                                   ((0x00000008&(data))>>3)
#define  SE_SWAP_1_get_rslt_w_4byte_swap(data)                                   ((0x00000004&(data))>>2)
#define  SE_SWAP_1_get_rslt_w_2byte_swap(data)                                   ((0x00000002&(data))>>1)
#define  SE_SWAP_1_get_rslt_w_1byte_swap(data)                                   (0x00000001&(data))

#define  SE_DFB_CTRL_0                                                          0x1800CD90
#define  SE_DFB_CTRL_0_reg_addr                                                  "0xB800CD90"
#define  SE_DFB_CTRL_0_reg                                                       0xB800CD90
#define  SE_DFB_CTRL_0_inst_addr                                                 "0x017A"
#define  set_SE_DFB_CTRL_0_reg(data)                                             (*((volatile unsigned int*)SE_DFB_CTRL_0_reg)=data)
#define  get_SE_DFB_CTRL_0_reg                                                   (*((volatile unsigned int*)SE_DFB_CTRL_0_reg))
#define  SE_DFB_CTRL_0_dst_dfb_alp_ctrl_shift                                    (1)
#define  SE_DFB_CTRL_0_src_dfb_alp_ctrl_shift                                    (0)
#define  SE_DFB_CTRL_0_dst_dfb_alp_ctrl_mask                                     (0x00000002)
#define  SE_DFB_CTRL_0_src_dfb_alp_ctrl_mask                                     (0x00000001)
#define  SE_DFB_CTRL_0_dst_dfb_alp_ctrl(data)                                    (0x00000002&((data)<<1))
#define  SE_DFB_CTRL_0_src_dfb_alp_ctrl(data)                                    (0x00000001&(data))
#define  SE_DFB_CTRL_0_get_dst_dfb_alp_ctrl(data)                                ((0x00000002&(data))>>1)
#define  SE_DFB_CTRL_0_get_src_dfb_alp_ctrl(data)                                (0x00000001&(data))

#define  SE_DFB_CTRL_1                                                          0x1800CD94
#define  SE_DFB_CTRL_1_reg_addr                                                  "0xB800CD94"
#define  SE_DFB_CTRL_1_reg                                                       0xB800CD94
#define  SE_DFB_CTRL_1_inst_addr                                                 "0x017B"
#define  set_SE_DFB_CTRL_1_reg(data)                                             (*((volatile unsigned int*)SE_DFB_CTRL_1_reg)=data)
#define  get_SE_DFB_CTRL_1_reg                                                   (*((volatile unsigned int*)SE_DFB_CTRL_1_reg))
#define  SE_DFB_CTRL_1_dst_dfb_alp_ctrl_shift                                    (1)
#define  SE_DFB_CTRL_1_src_dfb_alp_ctrl_shift                                    (0)
#define  SE_DFB_CTRL_1_dst_dfb_alp_ctrl_mask                                     (0x00000002)
#define  SE_DFB_CTRL_1_src_dfb_alp_ctrl_mask                                     (0x00000001)
#define  SE_DFB_CTRL_1_dst_dfb_alp_ctrl(data)                                    (0x00000002&((data)<<1))
#define  SE_DFB_CTRL_1_src_dfb_alp_ctrl(data)                                    (0x00000001&(data))
#define  SE_DFB_CTRL_1_get_dst_dfb_alp_ctrl(data)                                ((0x00000002&(data))>>1)
#define  SE_DFB_CTRL_1_get_src_dfb_alp_ctrl(data)                                (0x00000001&(data))

#define  SE_SE20_DUMMY_0                                                        0x1800CE20
#define  SE_SE20_DUMMY_0_reg_addr                                                "0xB800CE20"
#define  SE_SE20_DUMMY_0_reg                                                     0xB800CE20
#define  SE_SE20_DUMMY_0_inst_addr                                               "0x017C"
#define  set_SE_SE20_DUMMY_0_reg(data)                                           (*((volatile unsigned int*)SE_SE20_DUMMY_0_reg)=data)
#define  get_SE_SE20_DUMMY_0_reg                                                 (*((volatile unsigned int*)SE_SE20_DUMMY_0_reg))
#define  SE_SE20_DUMMY_0_reg1_shift                                              (16)
#define  SE_SE20_DUMMY_0_reg0_shift                                              (0)
#define  SE_SE20_DUMMY_0_reg1_mask                                               (0xFFFF0000)
#define  SE_SE20_DUMMY_0_reg0_mask                                               (0x0000FFFF)
#define  SE_SE20_DUMMY_0_reg1(data)                                              (0xFFFF0000&((data)<<16))
#define  SE_SE20_DUMMY_0_reg0(data)                                              (0x0000FFFF&(data))
#define  SE_SE20_DUMMY_0_get_reg1(data)                                          ((0xFFFF0000&(data))>>16)
#define  SE_SE20_DUMMY_0_get_reg0(data)                                          (0x0000FFFF&(data))

#define  SE_SE20_DUMMY_1                                                        0x1800CE24
#define  SE_SE20_DUMMY_1_reg_addr                                                "0xB800CE24"
#define  SE_SE20_DUMMY_1_reg                                                     0xB800CE24
#define  SE_SE20_DUMMY_1_inst_addr                                               "0x017D"
#define  set_SE_SE20_DUMMY_1_reg(data)                                           (*((volatile unsigned int*)SE_SE20_DUMMY_1_reg)=data)
#define  get_SE_SE20_DUMMY_1_reg                                                 (*((volatile unsigned int*)SE_SE20_DUMMY_1_reg))
#define  SE_SE20_DUMMY_1_reg1_shift                                              (16)
#define  SE_SE20_DUMMY_1_reg0_shift                                              (0)
#define  SE_SE20_DUMMY_1_reg1_mask                                               (0xFFFF0000)
#define  SE_SE20_DUMMY_1_reg0_mask                                               (0x0000FFFF)
#define  SE_SE20_DUMMY_1_reg1(data)                                              (0xFFFF0000&((data)<<16))
#define  SE_SE20_DUMMY_1_reg0(data)                                              (0x0000FFFF&(data))
#define  SE_SE20_DUMMY_1_get_reg1(data)                                          ((0xFFFF0000&(data))>>16)
#define  SE_SE20_DUMMY_1_get_reg0(data)                                          (0x0000FFFF&(data))

#define  SE_SE20_DBG_IDLE                                                       0x1800CE30
#define  SE_SE20_DBG_IDLE_reg_addr                                               "0xB800CE30"
#define  SE_SE20_DBG_IDLE_reg                                                    0xB800CE30
#define  SE_SE20_DBG_IDLE_inst_addr                                              "0x017E"
#define  set_SE_SE20_DBG_IDLE_reg(data)                                          (*((volatile unsigned int*)SE_SE20_DBG_IDLE_reg)=data)
#define  get_SE_SE20_DBG_IDLE_reg                                                (*((volatile unsigned int*)SE_SE20_DBG_IDLE_reg))
#define  SE_SE20_DBG_IDLE_dbg_data_shift                                         (0)
#define  SE_SE20_DBG_IDLE_dbg_data_mask                                          (0xFFFFFFFF)
#define  SE_SE20_DBG_IDLE_dbg_data(data)                                         (0xFFFFFFFF&(data))
#define  SE_SE20_DBG_IDLE_get_dbg_data(data)                                     (0xFFFFFFFF&(data))

#define  SE_SE20_DBG_WDMA                                                       0x1800CE34
#define  SE_SE20_DBG_WDMA_reg_addr                                               "0xB800CE34"
#define  SE_SE20_DBG_WDMA_reg                                                    0xB800CE34
#define  SE_SE20_DBG_WDMA_inst_addr                                              "0x017F"
#define  set_SE_SE20_DBG_WDMA_reg(data)                                          (*((volatile unsigned int*)SE_SE20_DBG_WDMA_reg)=data)
#define  get_SE_SE20_DBG_WDMA_reg                                                (*((volatile unsigned int*)SE_SE20_DBG_WDMA_reg))
#define  SE_SE20_DBG_WDMA_dbg_data_shift                                         (0)
#define  SE_SE20_DBG_WDMA_dbg_data_mask                                          (0xFFFFFFFF)
#define  SE_SE20_DBG_WDMA_dbg_data(data)                                         (0xFFFFFFFF&(data))
#define  SE_SE20_DBG_WDMA_get_dbg_data(data)                                     (0xFFFFFFFF&(data))

#define  SE_SE20_DBG_INTF                                                       0x1800CE38
#define  SE_SE20_DBG_INTF_reg_addr                                               "0xB800CE38"
#define  SE_SE20_DBG_INTF_reg                                                    0xB800CE38
#define  SE_SE20_DBG_INTF_inst_addr                                              "0x0180"
#define  set_SE_SE20_DBG_INTF_reg(data)                                          (*((volatile unsigned int*)SE_SE20_DBG_INTF_reg)=data)
#define  get_SE_SE20_DBG_INTF_reg                                                (*((volatile unsigned int*)SE_SE20_DBG_INTF_reg))
#define  SE_SE20_DBG_INTF_dbg_data_shift                                         (0)
#define  SE_SE20_DBG_INTF_dbg_data_mask                                          (0xFFFFFFFF)
#define  SE_SE20_DBG_INTF_dbg_data(data)                                         (0xFFFFFFFF&(data))
#define  SE_SE20_DBG_INTF_get_dbg_data(data)                                     (0xFFFFFFFF&(data))

#define  SE_SE20_PERF                                                           0x1800CE40
#define  SE_SE20_PERF_reg_addr                                                   "0xB800CE40"
#define  SE_SE20_PERF_reg                                                        0xB800CE40
#define  SE_SE20_PERF_inst_addr                                                  "0x0181"
#define  set_SE_SE20_PERF_reg(data)                                              (*((volatile unsigned int*)SE_SE20_PERF_reg)=data)
#define  get_SE_SE20_PERF_reg                                                    (*((volatile unsigned int*)SE_SE20_PERF_reg))
#define  SE_SE20_PERF_dc_space_sel_shift                                         (10)
#define  SE_SE20_PERF_cache_rep_algo_shift                                       (8)
#define  SE_SE20_PERF_wlast_sel_shift                                            (7)
#define  SE_SE20_PERF_arb_rw_rrobin_en_shift                                     (6)
#define  SE_SE20_PERF_rslt_wr_rgn_sz_shift                                       (4)
#define  SE_SE20_PERF_rslt_wr_rgn_en_shift                                       (3)
#define  SE_SE20_PERF_src_rd_rgn_sz_shift                                        (1)
#define  SE_SE20_PERF_src_rd_rgn_en_shift                                        (0)
#define  SE_SE20_PERF_dc_space_sel_mask                                          (0x00000400)
#define  SE_SE20_PERF_cache_rep_algo_mask                                        (0x00000300)
#define  SE_SE20_PERF_wlast_sel_mask                                             (0x00000080)
#define  SE_SE20_PERF_arb_rw_rrobin_en_mask                                      (0x00000040)
#define  SE_SE20_PERF_rslt_wr_rgn_sz_mask                                        (0x00000030)
#define  SE_SE20_PERF_rslt_wr_rgn_en_mask                                        (0x00000008)
#define  SE_SE20_PERF_src_rd_rgn_sz_mask                                         (0x00000006)
#define  SE_SE20_PERF_src_rd_rgn_en_mask                                         (0x00000001)
#define  SE_SE20_PERF_dc_space_sel(data)                                         (0x00000400&((data)<<10))
#define  SE_SE20_PERF_cache_rep_algo(data)                                       (0x00000300&((data)<<8))
#define  SE_SE20_PERF_wlast_sel(data)                                            (0x00000080&((data)<<7))
#define  SE_SE20_PERF_arb_rw_rrobin_en(data)                                     (0x00000040&((data)<<6))
#define  SE_SE20_PERF_rslt_wr_rgn_sz(data)                                       (0x00000030&((data)<<4))
#define  SE_SE20_PERF_rslt_wr_rgn_en(data)                                       (0x00000008&((data)<<3))
#define  SE_SE20_PERF_src_rd_rgn_sz(data)                                        (0x00000006&((data)<<1))
#define  SE_SE20_PERF_src_rd_rgn_en(data)                                        (0x00000001&(data))
#define  SE_SE20_PERF_get_dc_space_sel(data)                                     ((0x00000400&(data))>>10)
#define  SE_SE20_PERF_get_cache_rep_algo(data)                                   ((0x00000300&(data))>>8)
#define  SE_SE20_PERF_get_wlast_sel(data)                                        ((0x00000080&(data))>>7)
#define  SE_SE20_PERF_get_arb_rw_rrobin_en(data)                                 ((0x00000040&(data))>>6)
#define  SE_SE20_PERF_get_rslt_wr_rgn_sz(data)                                   ((0x00000030&(data))>>4)
#define  SE_SE20_PERF_get_rslt_wr_rgn_en(data)                                   ((0x00000008&(data))>>3)
#define  SE_SE20_PERF_get_src_rd_rgn_sz(data)                                    ((0x00000006&(data))>>1)
#define  SE_SE20_PERF_get_src_rd_rgn_en(data)                                    (0x00000001&(data))

#define  SE_SE20_OPTION                                                         0x1800CE44
#define  SE_SE20_OPTION_reg_addr                                                 "0xB800CE44"
#define  SE_SE20_OPTION_reg                                                      0xB800CE44
#define  SE_SE20_OPTION_inst_addr                                                "0x0182"
#define  set_SE_SE20_OPTION_reg(data)                                            (*((volatile unsigned int*)SE_SE20_OPTION_reg)=data)
#define  get_SE_SE20_OPTION_reg                                                  (*((volatile unsigned int*)SE_SE20_OPTION_reg))
#define  SE_SE20_OPTION_se20_csc_rep_alpha_shift                                 (15)
#define  SE_SE20_OPTION_se_fast_arb_en_shift                                     (14)
#define  SE_SE20_OPTION_se_dbs_ctl_clk_gt_en_shift                               (13)
#define  SE_SE20_OPTION_se_cmd_q_ext_clk_gt_en_shift                             (12)
#define  SE_SE20_OPTION_se_clut_clk_gt_en_shift                                  (11)
#define  SE_SE20_OPTION_se20_re_arr_opt0_off_shift                               (10)
#define  SE_SE20_OPTION_dma_no_gated_en_shift                                    (9)
#define  SE_SE20_OPTION_ori_bypass_blk_wrapper_shift                             (8)
#define  SE_SE20_OPTION_ori_wlast_sel_shift                                      (7)
#define  SE_SE20_OPTION_r_bbvo_holdq_en_shift                                    (6)
#define  SE_SE20_OPTION_r_bbvo_holdq_frm_shift                                   (2)
#define  SE_SE20_OPTION_cmd_swap_ctrl_shift                                      (1)
#define  SE_SE20_OPTION_se_op_clk_gt_shift                                       (0)
#define  SE_SE20_OPTION_se20_csc_rep_alpha_mask                                  (0x00008000)
#define  SE_SE20_OPTION_se_fast_arb_en_mask                                      (0x00004000)
#define  SE_SE20_OPTION_se_dbs_ctl_clk_gt_en_mask                                (0x00002000)
#define  SE_SE20_OPTION_se_cmd_q_ext_clk_gt_en_mask                              (0x00001000)
#define  SE_SE20_OPTION_se_clut_clk_gt_en_mask                                   (0x00000800)
#define  SE_SE20_OPTION_se20_re_arr_opt0_off_mask                                (0x00000400)
#define  SE_SE20_OPTION_dma_no_gated_en_mask                                     (0x00000200)
#define  SE_SE20_OPTION_ori_bypass_blk_wrapper_mask                              (0x00000100)
#define  SE_SE20_OPTION_ori_wlast_sel_mask                                       (0x00000080)
#define  SE_SE20_OPTION_r_bbvo_holdq_en_mask                                     (0x00000040)
#define  SE_SE20_OPTION_r_bbvo_holdq_frm_mask                                    (0x0000003C)
#define  SE_SE20_OPTION_cmd_swap_ctrl_mask                                       (0x00000002)
#define  SE_SE20_OPTION_se_op_clk_gt_mask                                        (0x00000001)
#define  SE_SE20_OPTION_se20_csc_rep_alpha(data)                                 (0x00008000&((data)<<15))
#define  SE_SE20_OPTION_se_fast_arb_en(data)                                     (0x00004000&((data)<<14))
#define  SE_SE20_OPTION_se_dbs_ctl_clk_gt_en(data)                               (0x00002000&((data)<<13))
#define  SE_SE20_OPTION_se_cmd_q_ext_clk_gt_en(data)                             (0x00001000&((data)<<12))
#define  SE_SE20_OPTION_se_clut_clk_gt_en(data)                                  (0x00000800&((data)<<11))
#define  SE_SE20_OPTION_se20_re_arr_opt0_off(data)                               (0x00000400&((data)<<10))
#define  SE_SE20_OPTION_dma_no_gated_en(data)                                    (0x00000200&((data)<<9))
#define  SE_SE20_OPTION_ori_bypass_blk_wrapper(data)                             (0x00000100&((data)<<8))
#define  SE_SE20_OPTION_ori_wlast_sel(data)                                      (0x00000080&((data)<<7))
#define  SE_SE20_OPTION_r_bbvo_holdq_en(data)                                    (0x00000040&((data)<<6))
#define  SE_SE20_OPTION_r_bbvo_holdq_frm(data)                                   (0x0000003C&((data)<<2))
#define  SE_SE20_OPTION_cmd_swap_ctrl(data)                                      (0x00000002&((data)<<1))
#define  SE_SE20_OPTION_se_op_clk_gt(data)                                       (0x00000001&(data))
#define  SE_SE20_OPTION_get_se20_csc_rep_alpha(data)                             ((0x00008000&(data))>>15)
#define  SE_SE20_OPTION_get_se_fast_arb_en(data)                                 ((0x00004000&(data))>>14)
#define  SE_SE20_OPTION_get_se_dbs_ctl_clk_gt_en(data)                           ((0x00002000&(data))>>13)
#define  SE_SE20_OPTION_get_se_cmd_q_ext_clk_gt_en(data)                         ((0x00001000&(data))>>12)
#define  SE_SE20_OPTION_get_se_clut_clk_gt_en(data)                              ((0x00000800&(data))>>11)
#define  SE_SE20_OPTION_get_se20_re_arr_opt0_off(data)                           ((0x00000400&(data))>>10)
#define  SE_SE20_OPTION_get_dma_no_gated_en(data)                                ((0x00000200&(data))>>9)
#define  SE_SE20_OPTION_get_ori_bypass_blk_wrapper(data)                         ((0x00000100&(data))>>8)
#define  SE_SE20_OPTION_get_ori_wlast_sel(data)                                  ((0x00000080&(data))>>7)
#define  SE_SE20_OPTION_get_r_bbvo_holdq_en(data)                                ((0x00000040&(data))>>6)
#define  SE_SE20_OPTION_get_r_bbvo_holdq_frm(data)                               ((0x0000003C&(data))>>2)
#define  SE_SE20_OPTION_get_cmd_swap_ctrl(data)                                  ((0x00000002&(data))>>1)
#define  SE_SE20_OPTION_get_se_op_clk_gt(data)                                   (0x00000001&(data))

#define  SE_SE20_IDLE_MASK                                                      0x1800CE48
#define  SE_SE20_IDLE_MASK_reg_addr                                              "0xB800CE48"
#define  SE_SE20_IDLE_MASK_reg                                                   0xB800CE48
#define  SE_SE20_IDLE_MASK_inst_addr                                             "0x0183"
#define  set_SE_SE20_IDLE_MASK_reg(data)                                         (*((volatile unsigned int*)SE_SE20_IDLE_MASK_reg)=data)
#define  get_SE_SE20_IDLE_MASK_reg                                               (*((volatile unsigned int*)SE_SE20_IDLE_MASK_reg))
#define  SE_SE20_IDLE_MASK_idle_mask_shift                                       (0)
#define  SE_SE20_IDLE_MASK_idle_mask_mask                                        (0xFFFFFFFF)
#define  SE_SE20_IDLE_MASK_idle_mask(data)                                       (0xFFFFFFFF&(data))
#define  SE_SE20_IDLE_MASK_get_idle_mask(data)                                   (0xFFFFFFFF&(data))

#define  SE_CTRL_0                                                              0x1800CE80
#define  SE_CTRL_0_reg_addr                                                      "0xB800CE80"
#define  SE_CTRL_0_reg                                                           0xB800CE80
#define  SE_CTRL_0_inst_addr                                                     "0x0184"
#define  set_SE_CTRL_0_reg(data)                                                 (*((volatile unsigned int*)SE_CTRL_0_reg)=data)
#define  get_SE_CTRL_0_reg                                                       (*((volatile unsigned int*)SE_CTRL_0_reg))
#define  SE_CTRL_0_endiswap_shift                                                (2)
#define  SE_CTRL_0_go_shift                                                      (1)
#define  SE_CTRL_0_write_data_shift                                              (0)
#define  SE_CTRL_0_endiswap_mask                                                 (0x00000004)
#define  SE_CTRL_0_go_mask                                                       (0x00000002)
#define  SE_CTRL_0_write_data_mask                                               (0x00000001)
#define  SE_CTRL_0_endiswap(data)                                                (0x00000004&((data)<<2))
#define  SE_CTRL_0_go(data)                                                      (0x00000002&((data)<<1))
#define  SE_CTRL_0_write_data(data)                                              (0x00000001&(data))
#define  SE_CTRL_0_get_endiswap(data)                                            ((0x00000004&(data))>>2)
#define  SE_CTRL_0_get_go(data)                                                  ((0x00000002&(data))>>1)
#define  SE_CTRL_0_get_write_data(data)                                          (0x00000001&(data))

#define  SE_CTRL_1                                                              0x1800CE84
#define  SE_CTRL_1_reg_addr                                                      "0xB800CE84"
#define  SE_CTRL_1_reg                                                           0xB800CE84
#define  SE_CTRL_1_inst_addr                                                     "0x0185"
#define  set_SE_CTRL_1_reg(data)                                                 (*((volatile unsigned int*)SE_CTRL_1_reg)=data)
#define  get_SE_CTRL_1_reg                                                       (*((volatile unsigned int*)SE_CTRL_1_reg))
#define  SE_CTRL_1_endiswap_shift                                                (2)
#define  SE_CTRL_1_go_shift                                                      (1)
#define  SE_CTRL_1_write_data_shift                                              (0)
#define  SE_CTRL_1_endiswap_mask                                                 (0x00000004)
#define  SE_CTRL_1_go_mask                                                       (0x00000002)
#define  SE_CTRL_1_write_data_mask                                               (0x00000001)
#define  SE_CTRL_1_endiswap(data)                                                (0x00000004&((data)<<2))
#define  SE_CTRL_1_go(data)                                                      (0x00000002&((data)<<1))
#define  SE_CTRL_1_write_data(data)                                              (0x00000001&(data))
#define  SE_CTRL_1_get_endiswap(data)                                            ((0x00000004&(data))>>2)
#define  SE_CTRL_1_get_go(data)                                                  ((0x00000002&(data))>>1)
#define  SE_CTRL_1_get_write_data(data)                                          (0x00000001&(data))

#define  SE_IDLE_0                                                              0x1800CE90
#define  SE_IDLE_0_reg_addr                                                      "0xB800CE90"
#define  SE_IDLE_0_reg                                                           0xB800CE90
#define  SE_IDLE_0_inst_addr                                                     "0x0186"
#define  set_SE_IDLE_0_reg(data)                                                 (*((volatile unsigned int*)SE_IDLE_0_reg)=data)
#define  get_SE_IDLE_0_reg                                                       (*((volatile unsigned int*)SE_IDLE_0_reg))
#define  SE_IDLE_0_idle_shift                                                    (0)
#define  SE_IDLE_0_idle_mask                                                     (0x00000001)
#define  SE_IDLE_0_idle(data)                                                    (0x00000001&(data))
#define  SE_IDLE_0_get_idle(data)                                                (0x00000001&(data))

#define  SE_IDLE_1                                                              0x1800CE94
#define  SE_IDLE_1_reg_addr                                                      "0xB800CE94"
#define  SE_IDLE_1_reg                                                           0xB800CE94
#define  SE_IDLE_1_inst_addr                                                     "0x0187"
#define  set_SE_IDLE_1_reg(data)                                                 (*((volatile unsigned int*)SE_IDLE_1_reg)=data)
#define  get_SE_IDLE_1_reg                                                       (*((volatile unsigned int*)SE_IDLE_1_reg))
#define  SE_IDLE_1_idle_shift                                                    (0)
#define  SE_IDLE_1_idle_mask                                                     (0x00000001)
#define  SE_IDLE_1_idle(data)                                                    (0x00000001&(data))
#define  SE_IDLE_1_get_idle(data)                                                (0x00000001&(data))

#define  SE_INTSEL                                                              0x1800CEA0
#define  SE_INTSEL_reg_addr                                                      "0xB800CEA0"
#define  SE_INTSEL_reg                                                           0xB800CEA0
#define  SE_INTSEL_inst_addr                                                     "0x0188"
#define  set_SE_INTSEL_reg(data)                                                 (*((volatile unsigned int*)SE_INTSEL_reg)=data)
#define  get_SE_INTSEL_reg                                                       (*((volatile unsigned int*)SE_INTSEL_reg))
#define  SE_INTSEL_sel2_shift                                                    (4)
#define  SE_INTSEL_sel1_shift                                                    (0)
#define  SE_INTSEL_sel2_mask                                                     (0x00000070)
#define  SE_INTSEL_sel1_mask                                                     (0x00000007)
#define  SE_INTSEL_sel2(data)                                                    (0x00000070&((data)<<4))
#define  SE_INTSEL_sel1(data)                                                    (0x00000007&(data))
#define  SE_INTSEL_get_sel2(data)                                                ((0x00000070&(data))>>4)
#define  SE_INTSEL_get_sel1(data)                                                (0x00000007&(data))

#define  SE_INTS_0                                                              0x1800CEB0
#define  SE_INTS_0_reg_addr                                                      "0xB800CEB0"
#define  SE_INTS_0_reg                                                           0xB800CEB0
#define  SE_INTS_0_inst_addr                                                     "0x0189"
#define  set_SE_INTS_0_reg(data)                                                 (*((volatile unsigned int*)SE_INTS_0_reg)=data)
#define  get_SE_INTS_0_reg                                                       (*((volatile unsigned int*)SE_INTS_0_reg))
#define  SE_INTS_0_fmt_err_shift                                                 (16)
#define  SE_INTS_0_com_empty_shift                                               (3)
#define  SE_INTS_0_com_err_shift                                                 (2)
#define  SE_INTS_0_write_data_shift                                              (0)
#define  SE_INTS_0_fmt_err_mask                                                  (0x00010000)
#define  SE_INTS_0_com_empty_mask                                                (0x00000008)
#define  SE_INTS_0_com_err_mask                                                  (0x00000004)
#define  SE_INTS_0_write_data_mask                                               (0x00000001)
#define  SE_INTS_0_fmt_err(data)                                                 (0x00010000&((data)<<16))
#define  SE_INTS_0_com_empty(data)                                               (0x00000008&((data)<<3))
#define  SE_INTS_0_com_err(data)                                                 (0x00000004&((data)<<2))
#define  SE_INTS_0_write_data(data)                                              (0x00000001&(data))
#define  SE_INTS_0_get_fmt_err(data)                                             ((0x00010000&(data))>>16)
#define  SE_INTS_0_get_com_empty(data)                                           ((0x00000008&(data))>>3)
#define  SE_INTS_0_get_com_err(data)                                             ((0x00000004&(data))>>2)
#define  SE_INTS_0_get_write_data(data)                                          (0x00000001&(data))

#define  SE_INTS_1                                                              0x1800CEB4
#define  SE_INTS_1_reg_addr                                                      "0xB800CEB4"
#define  SE_INTS_1_reg                                                           0xB800CEB4
#define  SE_INTS_1_inst_addr                                                     "0x018A"
#define  set_SE_INTS_1_reg(data)                                                 (*((volatile unsigned int*)SE_INTS_1_reg)=data)
#define  get_SE_INTS_1_reg                                                       (*((volatile unsigned int*)SE_INTS_1_reg))
#define  SE_INTS_1_fmt_err_shift                                                 (16)
#define  SE_INTS_1_com_empty_shift                                               (3)
#define  SE_INTS_1_com_err_shift                                                 (2)
#define  SE_INTS_1_write_data_shift                                              (0)
#define  SE_INTS_1_fmt_err_mask                                                  (0x00010000)
#define  SE_INTS_1_com_empty_mask                                                (0x00000008)
#define  SE_INTS_1_com_err_mask                                                  (0x00000004)
#define  SE_INTS_1_write_data_mask                                               (0x00000001)
#define  SE_INTS_1_fmt_err(data)                                                 (0x00010000&((data)<<16))
#define  SE_INTS_1_com_empty(data)                                               (0x00000008&((data)<<3))
#define  SE_INTS_1_com_err(data)                                                 (0x00000004&((data)<<2))
#define  SE_INTS_1_write_data(data)                                              (0x00000001&(data))
#define  SE_INTS_1_get_fmt_err(data)                                             ((0x00010000&(data))>>16)
#define  SE_INTS_1_get_com_empty(data)                                           ((0x00000008&(data))>>3)
#define  SE_INTS_1_get_com_err(data)                                             ((0x00000004&(data))>>2)
#define  SE_INTS_1_get_write_data(data)                                          (0x00000001&(data))

#define  SE_INTE_0                                                              0x1800CEC0
#define  SE_INTE_0_reg_addr                                                      "0xB800CEC0"
#define  SE_INTE_0_reg                                                           0xB800CEC0
#define  SE_INTE_0_inst_addr                                                     "0x018B"
#define  set_SE_INTE_0_reg(data)                                                 (*((volatile unsigned int*)SE_INTE_0_reg)=data)
#define  get_SE_INTE_0_reg                                                       (*((volatile unsigned int*)SE_INTE_0_reg))
#define  SE_INTE_0_fmt_err_shift                                                 (16)
#define  SE_INTE_0_com_empty_shift                                               (3)
#define  SE_INTE_0_com_err_shift                                                 (2)
#define  SE_INTE_0_write_data_shift                                              (0)
#define  SE_INTE_0_fmt_err_mask                                                  (0x00010000)
#define  SE_INTE_0_com_empty_mask                                                (0x00000008)
#define  SE_INTE_0_com_err_mask                                                  (0x00000004)
#define  SE_INTE_0_write_data_mask                                               (0x00000001)
#define  SE_INTE_0_fmt_err(data)                                                 (0x00010000&((data)<<16))
#define  SE_INTE_0_com_empty(data)                                               (0x00000008&((data)<<3))
#define  SE_INTE_0_com_err(data)                                                 (0x00000004&((data)<<2))
#define  SE_INTE_0_write_data(data)                                              (0x00000001&(data))
#define  SE_INTE_0_get_fmt_err(data)                                             ((0x00010000&(data))>>16)
#define  SE_INTE_0_get_com_empty(data)                                           ((0x00000008&(data))>>3)
#define  SE_INTE_0_get_com_err(data)                                             ((0x00000004&(data))>>2)
#define  SE_INTE_0_get_write_data(data)                                          (0x00000001&(data))

#define  SE_INTE_1                                                              0x1800CEC4
#define  SE_INTE_1_reg_addr                                                      "0xB800CEC4"
#define  SE_INTE_1_reg                                                           0xB800CEC4
#define  SE_INTE_1_inst_addr                                                     "0x018C"
#define  set_SE_INTE_1_reg(data)                                                 (*((volatile unsigned int*)SE_INTE_1_reg)=data)
#define  get_SE_INTE_1_reg                                                       (*((volatile unsigned int*)SE_INTE_1_reg))
#define  SE_INTE_1_fmt_err_shift                                                 (16)
#define  SE_INTE_1_com_empty_shift                                               (3)
#define  SE_INTE_1_com_err_shift                                                 (2)
#define  SE_INTE_1_write_data_shift                                              (0)
#define  SE_INTE_1_fmt_err_mask                                                  (0x00010000)
#define  SE_INTE_1_com_empty_mask                                                (0x00000008)
#define  SE_INTE_1_com_err_mask                                                  (0x00000004)
#define  SE_INTE_1_write_data_mask                                               (0x00000001)
#define  SE_INTE_1_fmt_err(data)                                                 (0x00010000&((data)<<16))
#define  SE_INTE_1_com_empty(data)                                               (0x00000008&((data)<<3))
#define  SE_INTE_1_com_err(data)                                                 (0x00000004&((data)<<2))
#define  SE_INTE_1_write_data(data)                                              (0x00000001&(data))
#define  SE_INTE_1_get_fmt_err(data)                                             ((0x00010000&(data))>>16)
#define  SE_INTE_1_get_com_empty(data)                                           ((0x00000008&(data))>>3)
#define  SE_INTE_1_get_com_err(data)                                             ((0x00000004&(data))>>2)
#define  SE_INTE_1_get_write_data(data)                                          (0x00000001&(data))

#define  SE_INSTCNT_L_0                                                         0x1800CED0
#define  SE_INSTCNT_L_0_reg_addr                                                 "0xB800CED0"
#define  SE_INSTCNT_L_0_reg                                                      0xB800CED0
#define  SE_INSTCNT_L_0_inst_addr                                                "0x018D"
#define  set_SE_INSTCNT_L_0_reg(data)                                            (*((volatile unsigned int*)SE_INSTCNT_L_0_reg)=data)
#define  get_SE_INSTCNT_L_0_reg                                                  (*((volatile unsigned int*)SE_INSTCNT_L_0_reg))
#define  SE_INSTCNT_L_0_instcnt_l_shift                                          (0)
#define  SE_INSTCNT_L_0_instcnt_l_mask                                           (0xFFFFFFFF)
#define  SE_INSTCNT_L_0_instcnt_l(data)                                          (0xFFFFFFFF&(data))
#define  SE_INSTCNT_L_0_get_instcnt_l(data)                                      (0xFFFFFFFF&(data))

#define  SE_INSTCNT_L_1                                                         0x1800CED4
#define  SE_INSTCNT_L_1_reg_addr                                                 "0xB800CED4"
#define  SE_INSTCNT_L_1_reg                                                      0xB800CED4
#define  SE_INSTCNT_L_1_inst_addr                                                "0x018E"
#define  set_SE_INSTCNT_L_1_reg(data)                                            (*((volatile unsigned int*)SE_INSTCNT_L_1_reg)=data)
#define  get_SE_INSTCNT_L_1_reg                                                  (*((volatile unsigned int*)SE_INSTCNT_L_1_reg))
#define  SE_INSTCNT_L_1_instcnt_l_shift                                          (0)
#define  SE_INSTCNT_L_1_instcnt_l_mask                                           (0xFFFFFFFF)
#define  SE_INSTCNT_L_1_instcnt_l(data)                                          (0xFFFFFFFF&(data))
#define  SE_INSTCNT_L_1_get_instcnt_l(data)                                      (0xFFFFFFFF&(data))

#define  SE_INSTCNT_H_0                                                         0x1800CEE0
#define  SE_INSTCNT_H_0_reg_addr                                                 "0xB800CEE0"
#define  SE_INSTCNT_H_0_reg                                                      0xB800CEE0
#define  SE_INSTCNT_H_0_inst_addr                                                "0x018F"
#define  set_SE_INSTCNT_H_0_reg(data)                                            (*((volatile unsigned int*)SE_INSTCNT_H_0_reg)=data)
#define  get_SE_INSTCNT_H_0_reg                                                  (*((volatile unsigned int*)SE_INSTCNT_H_0_reg))
#define  SE_INSTCNT_H_0_instcnt_h_shift                                          (0)
#define  SE_INSTCNT_H_0_instcnt_h_mask                                           (0xFFFFFFFF)
#define  SE_INSTCNT_H_0_instcnt_h(data)                                          (0xFFFFFFFF&(data))
#define  SE_INSTCNT_H_0_get_instcnt_h(data)                                      (0xFFFFFFFF&(data))

#define  SE_INSTCNT_H_1                                                         0x1800CEE4
#define  SE_INSTCNT_H_1_reg_addr                                                 "0xB800CEE4"
#define  SE_INSTCNT_H_1_reg                                                      0xB800CEE4
#define  SE_INSTCNT_H_1_inst_addr                                                "0x0190"
#define  set_SE_INSTCNT_H_1_reg(data)                                            (*((volatile unsigned int*)SE_INSTCNT_H_1_reg)=data)
#define  get_SE_INSTCNT_H_1_reg                                                  (*((volatile unsigned int*)SE_INSTCNT_H_1_reg))
#define  SE_INSTCNT_H_1_instcnt_h_shift                                          (0)
#define  SE_INSTCNT_H_1_instcnt_h_mask                                           (0xFFFFFFFF)
#define  SE_INSTCNT_H_1_instcnt_h(data)                                          (0xFFFFFFFF&(data))
#define  SE_INSTCNT_H_1_get_instcnt_h(data)                                      (0xFFFFFFFF&(data))

#define  SE_CLUT_RADR                                                           0x1800CEF0
#define  SE_CLUT_RADR_reg_addr                                                   "0xB800CEF0"
#define  SE_CLUT_RADR_reg                                                        0xB800CEF0
#define  SE_CLUT_RADR_inst_addr                                                  "0x0191"
#define  set_SE_CLUT_RADR_reg(data)                                              (*((volatile unsigned int*)SE_CLUT_RADR_reg)=data)
#define  get_SE_CLUT_RADR_reg                                                    (*((volatile unsigned int*)SE_CLUT_RADR_reg))
#define  SE_CLUT_RADR_radr_shift                                                 (0)
#define  SE_CLUT_RADR_radr_mask                                                  (0x000000FF)
#define  SE_CLUT_RADR_radr(data)                                                 (0x000000FF&(data))
#define  SE_CLUT_RADR_get_radr(data)                                             (0x000000FF&(data))

#define  SE_CLUT_VALUE                                                          0x1800CEF4
#define  SE_CLUT_VALUE_reg_addr                                                  "0xB800CEF4"
#define  SE_CLUT_VALUE_reg                                                       0xB800CEF4
#define  SE_CLUT_VALUE_inst_addr                                                 "0x0192"
#define  set_SE_CLUT_VALUE_reg(data)                                             (*((volatile unsigned int*)SE_CLUT_VALUE_reg)=data)
#define  get_SE_CLUT_VALUE_reg                                                   (*((volatile unsigned int*)SE_CLUT_VALUE_reg))
#define  SE_CLUT_VALUE_value_shift                                               (0)
#define  SE_CLUT_VALUE_value_mask                                                (0xFFFFFFFF)
#define  SE_CLUT_VALUE_value(data)                                               (0xFFFFFFFF&(data))
#define  SE_CLUT_VALUE_get_value(data)                                           (0xFFFFFFFF&(data))

#define  SE_DBG                                                                 0x1800CEF8
#define  SE_DBG_reg_addr                                                         "0xB800CEF8"
#define  SE_DBG_reg                                                              0xB800CEF8
#define  SE_DBG_inst_addr                                                        "0x0193"
#define  set_SE_DBG_reg(data)                                                    (*((volatile unsigned int*)SE_DBG_reg)=data)
#define  get_SE_DBG_reg                                                          (*((volatile unsigned int*)SE_DBG_reg))
#define  SE_DBG_dbg_change_shift                                                 (25)
#define  SE_DBG_dbg_en_shift                                                     (24)
#define  SE_DBG_dbg_module_sel1_shift                                            (20)
#define  SE_DBG_dbg_module_sel0_shift                                            (16)
#define  SE_DBG_dbg_sel1_shift                                                   (8)
#define  SE_DBG_dbg_sel0_shift                                                   (0)
#define  SE_DBG_dbg_change_mask                                                  (0x02000000)
#define  SE_DBG_dbg_en_mask                                                      (0x01000000)
#define  SE_DBG_dbg_module_sel1_mask                                             (0x00F00000)
#define  SE_DBG_dbg_module_sel0_mask                                             (0x000F0000)
#define  SE_DBG_dbg_sel1_mask                                                    (0x00001F00)
#define  SE_DBG_dbg_sel0_mask                                                    (0x0000001F)
#define  SE_DBG_dbg_change(data)                                                 (0x02000000&((data)<<25))
#define  SE_DBG_dbg_en(data)                                                     (0x01000000&((data)<<24))
#define  SE_DBG_dbg_module_sel1(data)                                            (0x00F00000&((data)<<20))
#define  SE_DBG_dbg_module_sel0(data)                                            (0x000F0000&((data)<<16))
#define  SE_DBG_dbg_sel1(data)                                                   (0x00001F00&((data)<<8))
#define  SE_DBG_dbg_sel0(data)                                                   (0x0000001F&(data))
#define  SE_DBG_get_dbg_change(data)                                             ((0x02000000&(data))>>25)
#define  SE_DBG_get_dbg_en(data)                                                 ((0x01000000&(data))>>24)
#define  SE_DBG_get_dbg_module_sel1(data)                                        ((0x00F00000&(data))>>20)
#define  SE_DBG_get_dbg_module_sel0(data)                                        ((0x000F0000&(data))>>16)
#define  SE_DBG_get_dbg_sel1(data)                                               ((0x00001F00&(data))>>8)
#define  SE_DBG_get_dbg_sel0(data)                                               (0x0000001F&(data))

#define  SE_SCTCH                                                               0x1800CEFC
#define  SE_SCTCH_reg_addr                                                       "0xB800CEFC"
#define  SE_SCTCH_reg                                                            0xB800CEFC
#define  SE_SCTCH_inst_addr                                                      "0x0194"
#define  set_SE_SCTCH_reg(data)                                                  (*((volatile unsigned int*)SE_SCTCH_reg)=data)
#define  get_SE_SCTCH_reg                                                        (*((volatile unsigned int*)SE_SCTCH_reg))
#define  SE_SCTCH_reg1_shift                                                     (16)
#define  SE_SCTCH_reg0_shift                                                     (0)
#define  SE_SCTCH_reg1_mask                                                      (0xFFFF0000)
#define  SE_SCTCH_reg0_mask                                                      (0x0000FFFF)
#define  SE_SCTCH_reg1(data)                                                     (0xFFFF0000&((data)<<16))
#define  SE_SCTCH_reg0(data)                                                     (0x0000FFFF&(data))
#define  SE_SCTCH_get_reg1(data)                                                 ((0xFFFF0000&(data))>>16)
#define  SE_SCTCH_get_reg0(data)                                                 (0x0000FFFF&(data))

#define  SE_SFT                                                                 0x1800CF00
#define  SE_SFT_reg_addr                                                         "0xB800CF00"
#define  SE_SFT_reg                                                              0xB800CF00
#define  SE_SFT_inst_addr                                                        "0x0195"
#define  set_SE_SFT_reg(data)                                                    (*((volatile unsigned int*)SE_SFT_reg)=data)
#define  get_SE_SFT_reg                                                          (*((volatile unsigned int*)SE_SFT_reg))
#define  SE_SFT_reg_sf_rx_err_ro_shift                                           (31)
#define  SE_SFT_reg_sf_rx_done_ro_shift                                          (30)
#define  SE_SFT_reg_sf_rx_gated_shift                                            (29)
#define  SE_SFT_reg_sf_rx_start_shift                                            (28)
#define  SE_SFT_reg_sf_rx_mode_shift                                             (27)
#define  SE_SFT_reg_sf_rx_debug_bit_sel_shift                                    (19)
#define  SE_SFT_reg_sf_rx_fail_bit_status_ro_shift                               (18)
#define  SE_SFT_reg_sf_tx_work_ro_shift                                          (2)
#define  SE_SFT_reg_sf_tx_start_shift                                            (1)
#define  SE_SFT_reg_sf_tx_mode_shift                                             (0)
#define  SE_SFT_reg_sf_rx_err_ro_mask                                            (0x80000000)
#define  SE_SFT_reg_sf_rx_done_ro_mask                                           (0x40000000)
#define  SE_SFT_reg_sf_rx_gated_mask                                             (0x20000000)
#define  SE_SFT_reg_sf_rx_start_mask                                             (0x10000000)
#define  SE_SFT_reg_sf_rx_mode_mask                                              (0x08000000)
#define  SE_SFT_reg_sf_rx_debug_bit_sel_mask                                     (0x07F80000)
#define  SE_SFT_reg_sf_rx_fail_bit_status_ro_mask                                (0x00040000)
#define  SE_SFT_reg_sf_tx_work_ro_mask                                           (0x00000004)
#define  SE_SFT_reg_sf_tx_start_mask                                             (0x00000002)
#define  SE_SFT_reg_sf_tx_mode_mask                                              (0x00000001)
#define  SE_SFT_reg_sf_rx_err_ro(data)                                           (0x80000000&((data)<<31))
#define  SE_SFT_reg_sf_rx_done_ro(data)                                          (0x40000000&((data)<<30))
#define  SE_SFT_reg_sf_rx_gated(data)                                            (0x20000000&((data)<<29))
#define  SE_SFT_reg_sf_rx_start(data)                                            (0x10000000&((data)<<28))
#define  SE_SFT_reg_sf_rx_mode(data)                                             (0x08000000&((data)<<27))
#define  SE_SFT_reg_sf_rx_debug_bit_sel(data)                                    (0x07F80000&((data)<<19))
#define  SE_SFT_reg_sf_rx_fail_bit_status_ro(data)                               (0x00040000&((data)<<18))
#define  SE_SFT_reg_sf_tx_work_ro(data)                                          (0x00000004&((data)<<2))
#define  SE_SFT_reg_sf_tx_start(data)                                            (0x00000002&((data)<<1))
#define  SE_SFT_reg_sf_tx_mode(data)                                             (0x00000001&(data))
#define  SE_SFT_get_reg_sf_rx_err_ro(data)                                       ((0x80000000&(data))>>31)
#define  SE_SFT_get_reg_sf_rx_done_ro(data)                                      ((0x40000000&(data))>>30)
#define  SE_SFT_get_reg_sf_rx_gated(data)                                        ((0x20000000&(data))>>29)
#define  SE_SFT_get_reg_sf_rx_start(data)                                        ((0x10000000&(data))>>28)
#define  SE_SFT_get_reg_sf_rx_mode(data)                                         ((0x08000000&(data))>>27)
#define  SE_SFT_get_reg_sf_rx_debug_bit_sel(data)                                ((0x07F80000&(data))>>19)
#define  SE_SFT_get_reg_sf_rx_fail_bit_status_ro(data)                           ((0x00040000&(data))>>18)
#define  SE_SFT_get_reg_sf_tx_work_ro(data)                                      ((0x00000004&(data))>>2)
#define  SE_SFT_get_reg_sf_tx_start(data)                                        ((0x00000002&(data))>>1)
#define  SE_SFT_get_reg_sf_tx_mode(data)                                         (0x00000001&(data))

#define  SE_READ_MARGIN                                                         0x1800CF80
#define  SE_READ_MARGIN_reg_addr                                                 "0xB800CF80"
#define  SE_READ_MARGIN_reg                                                      0xB800CF80
#define  SE_READ_MARGIN_inst_addr                                                "0x0196"
#define  set_SE_READ_MARGIN_reg(data)                                            (*((volatile unsigned int*)SE_READ_MARGIN_reg)=data)
#define  get_SE_READ_MARGIN_reg                                                  (*((volatile unsigned int*)SE_READ_MARGIN_reg))
#define  SE_READ_MARGIN_test1_shift                                              (6)
#define  SE_READ_MARGIN_ls_shift                                                 (5)
#define  SE_READ_MARGIN_rm_shift                                                 (1)
#define  SE_READ_MARGIN_rme_shift                                                (0)
#define  SE_READ_MARGIN_test1_mask                                               (0x00000040)
#define  SE_READ_MARGIN_ls_mask                                                  (0x00000020)
#define  SE_READ_MARGIN_rm_mask                                                  (0x0000001E)
#define  SE_READ_MARGIN_rme_mask                                                 (0x00000001)
#define  SE_READ_MARGIN_test1(data)                                              (0x00000040&((data)<<6))
#define  SE_READ_MARGIN_ls(data)                                                 (0x00000020&((data)<<5))
#define  SE_READ_MARGIN_rm(data)                                                 (0x0000001E&((data)<<1))
#define  SE_READ_MARGIN_rme(data)                                                (0x00000001&(data))
#define  SE_READ_MARGIN_get_test1(data)                                          ((0x00000040&(data))>>6)
#define  SE_READ_MARGIN_get_ls(data)                                             ((0x00000020&(data))>>5)
#define  SE_READ_MARGIN_get_rm(data)                                             ((0x0000001E&(data))>>1)
#define  SE_READ_MARGIN_get_rme(data)                                            (0x00000001&(data))

#define  SE_SE_BIST_MODE                                                        0x1800CF84
#define  SE_SE_BIST_MODE_reg_addr                                                "0xB800CF84"
#define  SE_SE_BIST_MODE_reg                                                     0xB800CF84
#define  SE_SE_BIST_MODE_inst_addr                                               "0x0197"
#define  set_SE_SE_BIST_MODE_reg(data)                                           (*((volatile unsigned int*)SE_SE_BIST_MODE_reg)=data)
#define  get_SE_SE_BIST_MODE_reg                                                 (*((volatile unsigned int*)SE_SE_BIST_MODE_reg))
#define  SE_SE_BIST_MODE_se_bist_mode_0_shift                                    (0)
#define  SE_SE_BIST_MODE_se_bist_mode_0_mask                                     (0x00000001)
#define  SE_SE_BIST_MODE_se_bist_mode_0(data)                                    (0x00000001&(data))
#define  SE_SE_BIST_MODE_get_se_bist_mode_0(data)                                (0x00000001&(data))

#define  SE_SE_BIST_DONE                                                        0x1800CF88
#define  SE_SE_BIST_DONE_reg_addr                                                "0xB800CF88"
#define  SE_SE_BIST_DONE_reg                                                     0xB800CF88
#define  SE_SE_BIST_DONE_inst_addr                                               "0x0198"
#define  set_SE_SE_BIST_DONE_reg(data)                                           (*((volatile unsigned int*)SE_SE_BIST_DONE_reg)=data)
#define  get_SE_SE_BIST_DONE_reg                                                 (*((volatile unsigned int*)SE_SE_BIST_DONE_reg))
#define  SE_SE_BIST_DONE_se_bist_done_0_shift                                    (0)
#define  SE_SE_BIST_DONE_se_bist_done_0_mask                                     (0x00000001)
#define  SE_SE_BIST_DONE_se_bist_done_0(data)                                    (0x00000001&(data))
#define  SE_SE_BIST_DONE_get_se_bist_done_0(data)                                (0x00000001&(data))

#define  SE_SE_BIST_FAIL_GROUP                                                  0x1800CF8C
#define  SE_SE_BIST_FAIL_GROUP_reg_addr                                          "0xB800CF8C"
#define  SE_SE_BIST_FAIL_GROUP_reg                                               0xB800CF8C
#define  SE_SE_BIST_FAIL_GROUP_inst_addr                                         "0x0199"
#define  set_SE_SE_BIST_FAIL_GROUP_reg(data)                                     (*((volatile unsigned int*)SE_SE_BIST_FAIL_GROUP_reg)=data)
#define  get_SE_SE_BIST_FAIL_GROUP_reg                                           (*((volatile unsigned int*)SE_SE_BIST_FAIL_GROUP_reg))
#define  SE_SE_BIST_FAIL_GROUP_se_bist_fail_group_0_shift                        (0)
#define  SE_SE_BIST_FAIL_GROUP_se_bist_fail_group_0_mask                         (0x00000001)
#define  SE_SE_BIST_FAIL_GROUP_se_bist_fail_group_0(data)                        (0x00000001&(data))
#define  SE_SE_BIST_FAIL_GROUP_get_se_bist_fail_group_0(data)                    (0x00000001&(data))

#define  SE_SE_BIST_0_FAIL                                                      0x1800CF90
#define  SE_SE_BIST_0_FAIL_reg_addr                                              "0xB800CF90"
#define  SE_SE_BIST_0_FAIL_reg                                                   0xB800CF90
#define  SE_SE_BIST_0_FAIL_inst_addr                                             "0x019A"
#define  set_SE_SE_BIST_0_FAIL_reg(data)                                         (*((volatile unsigned int*)SE_SE_BIST_0_FAIL_reg)=data)
#define  get_SE_SE_BIST_0_FAIL_reg                                               (*((volatile unsigned int*)SE_SE_BIST_0_FAIL_reg))
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_2_shift                                (2)
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_1_shift                                (1)
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_0_shift                                (0)
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_2_mask                                 (0x00000004)
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_1_mask                                 (0x00000002)
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_0_mask                                 (0x00000001)
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_2(data)                                (0x00000004&((data)<<2))
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_1(data)                                (0x00000002&((data)<<1))
#define  SE_SE_BIST_0_FAIL_se_bist_0_fail_0(data)                                (0x00000001&(data))
#define  SE_SE_BIST_0_FAIL_get_se_bist_0_fail_2(data)                            ((0x00000004&(data))>>2)
#define  SE_SE_BIST_0_FAIL_get_se_bist_0_fail_1(data)                            ((0x00000002&(data))>>1)
#define  SE_SE_BIST_0_FAIL_get_se_bist_0_fail_0(data)                            (0x00000001&(data))

#define  SE_SE_DRF_MODE                                                         0x1800CF98
#define  SE_SE_DRF_MODE_reg_addr                                                 "0xB800CF98"
#define  SE_SE_DRF_MODE_reg                                                      0xB800CF98
#define  SE_SE_DRF_MODE_inst_addr                                                "0x019B"
#define  set_SE_SE_DRF_MODE_reg(data)                                            (*((volatile unsigned int*)SE_SE_DRF_MODE_reg)=data)
#define  get_SE_SE_DRF_MODE_reg                                                  (*((volatile unsigned int*)SE_SE_DRF_MODE_reg))
#define  SE_SE_DRF_MODE_se_drf_mode_0_shift                                      (0)
#define  SE_SE_DRF_MODE_se_drf_mode_0_mask                                       (0x00000001)
#define  SE_SE_DRF_MODE_se_drf_mode_0(data)                                      (0x00000001&(data))
#define  SE_SE_DRF_MODE_get_se_drf_mode_0(data)                                  (0x00000001&(data))

#define  SE_SE_DRF_RESUME                                                       0x1800CF9C
#define  SE_SE_DRF_RESUME_reg_addr                                               "0xB800CF9C"
#define  SE_SE_DRF_RESUME_reg                                                    0xB800CF9C
#define  SE_SE_DRF_RESUME_inst_addr                                              "0x019C"
#define  set_SE_SE_DRF_RESUME_reg(data)                                          (*((volatile unsigned int*)SE_SE_DRF_RESUME_reg)=data)
#define  get_SE_SE_DRF_RESUME_reg                                                (*((volatile unsigned int*)SE_SE_DRF_RESUME_reg))
#define  SE_SE_DRF_RESUME_se_drf_resume_0_shift                                  (0)
#define  SE_SE_DRF_RESUME_se_drf_resume_0_mask                                   (0x00000001)
#define  SE_SE_DRF_RESUME_se_drf_resume_0(data)                                  (0x00000001&(data))
#define  SE_SE_DRF_RESUME_get_se_drf_resume_0(data)                              (0x00000001&(data))

#define  SE_SE_DRF_DONE                                                         0x1800CFA0
#define  SE_SE_DRF_DONE_reg_addr                                                 "0xB800CFA0"
#define  SE_SE_DRF_DONE_reg                                                      0xB800CFA0
#define  SE_SE_DRF_DONE_inst_addr                                                "0x019D"
#define  set_SE_SE_DRF_DONE_reg(data)                                            (*((volatile unsigned int*)SE_SE_DRF_DONE_reg)=data)
#define  get_SE_SE_DRF_DONE_reg                                                  (*((volatile unsigned int*)SE_SE_DRF_DONE_reg))
#define  SE_SE_DRF_DONE_se_drf_done_0_shift                                      (0)
#define  SE_SE_DRF_DONE_se_drf_done_0_mask                                       (0x00000001)
#define  SE_SE_DRF_DONE_se_drf_done_0(data)                                      (0x00000001&(data))
#define  SE_SE_DRF_DONE_get_se_drf_done_0(data)                                  (0x00000001&(data))

#define  SE_SE_DRF_PAUSE                                                        0x1800CFA4
#define  SE_SE_DRF_PAUSE_reg_addr                                                "0xB800CFA4"
#define  SE_SE_DRF_PAUSE_reg                                                     0xB800CFA4
#define  SE_SE_DRF_PAUSE_inst_addr                                               "0x019E"
#define  set_SE_SE_DRF_PAUSE_reg(data)                                           (*((volatile unsigned int*)SE_SE_DRF_PAUSE_reg)=data)
#define  get_SE_SE_DRF_PAUSE_reg                                                 (*((volatile unsigned int*)SE_SE_DRF_PAUSE_reg))
#define  SE_SE_DRF_PAUSE_se_drf_pause_0_shift                                    (0)
#define  SE_SE_DRF_PAUSE_se_drf_pause_0_mask                                     (0x00000001)
#define  SE_SE_DRF_PAUSE_se_drf_pause_0(data)                                    (0x00000001&(data))
#define  SE_SE_DRF_PAUSE_get_se_drf_pause_0(data)                                (0x00000001&(data))

#define  SE_SE_DRF_FAIL_GROUP                                                   0x1800CFA8
#define  SE_SE_DRF_FAIL_GROUP_reg_addr                                           "0xB800CFA8"
#define  SE_SE_DRF_FAIL_GROUP_reg                                                0xB800CFA8
#define  SE_SE_DRF_FAIL_GROUP_inst_addr                                          "0x019F"
#define  set_SE_SE_DRF_FAIL_GROUP_reg(data)                                      (*((volatile unsigned int*)SE_SE_DRF_FAIL_GROUP_reg)=data)
#define  get_SE_SE_DRF_FAIL_GROUP_reg                                            (*((volatile unsigned int*)SE_SE_DRF_FAIL_GROUP_reg))
#define  SE_SE_DRF_FAIL_GROUP_se_drf_fail_group_0_shift                          (0)
#define  SE_SE_DRF_FAIL_GROUP_se_drf_fail_group_0_mask                           (0x00000001)
#define  SE_SE_DRF_FAIL_GROUP_se_drf_fail_group_0(data)                          (0x00000001&(data))
#define  SE_SE_DRF_FAIL_GROUP_get_se_drf_fail_group_0(data)                      (0x00000001&(data))

#define  SE_SE_DRF_0_FAIL                                                       0x1800CFAC
#define  SE_SE_DRF_0_FAIL_reg_addr                                               "0xB800CFAC"
#define  SE_SE_DRF_0_FAIL_reg                                                    0xB800CFAC
#define  SE_SE_DRF_0_FAIL_inst_addr                                              "0x01A0"
#define  set_SE_SE_DRF_0_FAIL_reg(data)                                          (*((volatile unsigned int*)SE_SE_DRF_0_FAIL_reg)=data)
#define  get_SE_SE_DRF_0_FAIL_reg                                                (*((volatile unsigned int*)SE_SE_DRF_0_FAIL_reg))
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_2_shift                                  (2)
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_1_shift                                  (1)
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_0_shift                                  (0)
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_2_mask                                   (0x00000004)
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_1_mask                                   (0x00000002)
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_0_mask                                   (0x00000001)
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_2(data)                                  (0x00000004&((data)<<2))
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_1(data)                                  (0x00000002&((data)<<1))
#define  SE_SE_DRF_0_FAIL_se_drf_0_fail_0(data)                                  (0x00000001&(data))
#define  SE_SE_DRF_0_FAIL_get_se_drf_0_fail_2(data)                              ((0x00000004&(data))>>2)
#define  SE_SE_DRF_0_FAIL_get_se_drf_0_fail_1(data)                              ((0x00000002&(data))>>1)
#define  SE_SE_DRF_0_FAIL_get_se_drf_0_fail_0(data)                              (0x00000001&(data))

#define  SE_SE20_BIST_MODE                                                      0x1800CFC0
#define  SE_SE20_BIST_MODE_reg_addr                                              "0xB800CFC0"
#define  SE_SE20_BIST_MODE_reg                                                   0xB800CFC0
#define  SE_SE20_BIST_MODE_inst_addr                                             "0x01A1"
#define  set_SE_SE20_BIST_MODE_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BIST_MODE_reg)=data)
#define  get_SE_SE20_BIST_MODE_reg                                               (*((volatile unsigned int*)SE_SE20_BIST_MODE_reg))
#define  SE_SE20_BIST_MODE_se20_afbce_bist_mode_0_shift                          (5)
#define  SE_SE20_BIST_MODE_se20_wdma_bist_mode_0_shift                           (4)
#define  SE_SE20_BIST_MODE_se20_cache_bist_mode_0_shift                          (0)
#define  SE_SE20_BIST_MODE_se20_afbce_bist_mode_0_mask                           (0x00000020)
#define  SE_SE20_BIST_MODE_se20_wdma_bist_mode_0_mask                            (0x00000010)
#define  SE_SE20_BIST_MODE_se20_cache_bist_mode_0_mask                           (0x00000001)
#define  SE_SE20_BIST_MODE_se20_afbce_bist_mode_0(data)                          (0x00000020&((data)<<5))
#define  SE_SE20_BIST_MODE_se20_wdma_bist_mode_0(data)                           (0x00000010&((data)<<4))
#define  SE_SE20_BIST_MODE_se20_cache_bist_mode_0(data)                          (0x00000001&(data))
#define  SE_SE20_BIST_MODE_get_se20_afbce_bist_mode_0(data)                      ((0x00000020&(data))>>5)
#define  SE_SE20_BIST_MODE_get_se20_wdma_bist_mode_0(data)                       ((0x00000010&(data))>>4)
#define  SE_SE20_BIST_MODE_get_se20_cache_bist_mode_0(data)                      (0x00000001&(data))

#define  SE_SE20_BIST_DONE                                                      0x1800CFC4
#define  SE_SE20_BIST_DONE_reg_addr                                              "0xB800CFC4"
#define  SE_SE20_BIST_DONE_reg                                                   0xB800CFC4
#define  SE_SE20_BIST_DONE_inst_addr                                             "0x01A2"
#define  set_SE_SE20_BIST_DONE_reg(data)                                         (*((volatile unsigned int*)SE_SE20_BIST_DONE_reg)=data)
#define  get_SE_SE20_BIST_DONE_reg                                               (*((volatile unsigned int*)SE_SE20_BIST_DONE_reg))
#define  SE_SE20_BIST_DONE_se20_afbce_bist_done_0_shift                          (5)
#define  SE_SE20_BIST_DONE_se20_wdma_bist_done_0_shift                           (4)
#define  SE_SE20_BIST_DONE_se20_cache_bist_done_0_shift                          (0)
#define  SE_SE20_BIST_DONE_se20_afbce_bist_done_0_mask                           (0x00000020)
#define  SE_SE20_BIST_DONE_se20_wdma_bist_done_0_mask                            (0x00000010)
#define  SE_SE20_BIST_DONE_se20_cache_bist_done_0_mask                           (0x00000001)
#define  SE_SE20_BIST_DONE_se20_afbce_bist_done_0(data)                          (0x00000020&((data)<<5))
#define  SE_SE20_BIST_DONE_se20_wdma_bist_done_0(data)                           (0x00000010&((data)<<4))
#define  SE_SE20_BIST_DONE_se20_cache_bist_done_0(data)                          (0x00000001&(data))
#define  SE_SE20_BIST_DONE_get_se20_afbce_bist_done_0(data)                      ((0x00000020&(data))>>5)
#define  SE_SE20_BIST_DONE_get_se20_wdma_bist_done_0(data)                       ((0x00000010&(data))>>4)
#define  SE_SE20_BIST_DONE_get_se20_cache_bist_done_0(data)                      (0x00000001&(data))

#define  SE_SE20_BIST_FAIL_GROUP                                                0x1800CFC8
#define  SE_SE20_BIST_FAIL_GROUP_reg_addr                                        "0xB800CFC8"
#define  SE_SE20_BIST_FAIL_GROUP_reg                                             0xB800CFC8
#define  SE_SE20_BIST_FAIL_GROUP_inst_addr                                       "0x01A3"
#define  set_SE_SE20_BIST_FAIL_GROUP_reg(data)                                   (*((volatile unsigned int*)SE_SE20_BIST_FAIL_GROUP_reg)=data)
#define  get_SE_SE20_BIST_FAIL_GROUP_reg                                         (*((volatile unsigned int*)SE_SE20_BIST_FAIL_GROUP_reg))
#define  SE_SE20_BIST_FAIL_GROUP_se20_afbce_bist_fail_group_shift                (2)
#define  SE_SE20_BIST_FAIL_GROUP_se20_wdma_bist_fail_group_shift                 (1)
#define  SE_SE20_BIST_FAIL_GROUP_se20_cache_bist_fail_group_shift                (0)
#define  SE_SE20_BIST_FAIL_GROUP_se20_afbce_bist_fail_group_mask                 (0x00000004)
#define  SE_SE20_BIST_FAIL_GROUP_se20_wdma_bist_fail_group_mask                  (0x00000002)
#define  SE_SE20_BIST_FAIL_GROUP_se20_cache_bist_fail_group_mask                 (0x00000001)
#define  SE_SE20_BIST_FAIL_GROUP_se20_afbce_bist_fail_group(data)                (0x00000004&((data)<<2))
#define  SE_SE20_BIST_FAIL_GROUP_se20_wdma_bist_fail_group(data)                 (0x00000002&((data)<<1))
#define  SE_SE20_BIST_FAIL_GROUP_se20_cache_bist_fail_group(data)                (0x00000001&(data))
#define  SE_SE20_BIST_FAIL_GROUP_get_se20_afbce_bist_fail_group(data)            ((0x00000004&(data))>>2)
#define  SE_SE20_BIST_FAIL_GROUP_get_se20_wdma_bist_fail_group(data)             ((0x00000002&(data))>>1)
#define  SE_SE20_BIST_FAIL_GROUP_get_se20_cache_bist_fail_group(data)            (0x00000001&(data))

#define  SE_SE20_BIST_0_FAIL                                                    0x1800CFCC
#define  SE_SE20_BIST_0_FAIL_reg_addr                                            "0xB800CFCC"
#define  SE_SE20_BIST_0_FAIL_reg                                                 0xB800CFCC
#define  SE_SE20_BIST_0_FAIL_inst_addr                                           "0x01A4"
#define  set_SE_SE20_BIST_0_FAIL_reg(data)                                       (*((volatile unsigned int*)SE_SE20_BIST_0_FAIL_reg)=data)
#define  get_SE_SE20_BIST_0_FAIL_reg                                             (*((volatile unsigned int*)SE_SE20_BIST_0_FAIL_reg))
#define  SE_SE20_BIST_0_FAIL_se20_afbce_bist_fail_1_shift                        (11)
#define  SE_SE20_BIST_0_FAIL_se20_afbce_bist_fail_0_shift                        (10)
#define  SE_SE20_BIST_0_FAIL_se20_wdma_bist_fail_1_shift                         (9)
#define  SE_SE20_BIST_0_FAIL_se20_wdma_bist_fail_0_shift                         (8)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_3_shift                        (3)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_2_shift                        (2)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_1_shift                        (1)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_0_shift                        (0)
#define  SE_SE20_BIST_0_FAIL_se20_afbce_bist_fail_1_mask                         (0x00000800)
#define  SE_SE20_BIST_0_FAIL_se20_afbce_bist_fail_0_mask                         (0x00000400)
#define  SE_SE20_BIST_0_FAIL_se20_wdma_bist_fail_1_mask                          (0x00000200)
#define  SE_SE20_BIST_0_FAIL_se20_wdma_bist_fail_0_mask                          (0x00000100)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_3_mask                         (0x00000008)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_2_mask                         (0x00000004)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_1_mask                         (0x00000002)
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_0_mask                         (0x00000001)
#define  SE_SE20_BIST_0_FAIL_se20_afbce_bist_fail_1(data)                        (0x00000800&((data)<<11))
#define  SE_SE20_BIST_0_FAIL_se20_afbce_bist_fail_0(data)                        (0x00000400&((data)<<10))
#define  SE_SE20_BIST_0_FAIL_se20_wdma_bist_fail_1(data)                         (0x00000200&((data)<<9))
#define  SE_SE20_BIST_0_FAIL_se20_wdma_bist_fail_0(data)                         (0x00000100&((data)<<8))
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_3(data)                        (0x00000008&((data)<<3))
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_2(data)                        (0x00000004&((data)<<2))
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_1(data)                        (0x00000002&((data)<<1))
#define  SE_SE20_BIST_0_FAIL_se20_cache_bist_fail_0(data)                        (0x00000001&(data))
#define  SE_SE20_BIST_0_FAIL_get_se20_afbce_bist_fail_1(data)                    ((0x00000800&(data))>>11)
#define  SE_SE20_BIST_0_FAIL_get_se20_afbce_bist_fail_0(data)                    ((0x00000400&(data))>>10)
#define  SE_SE20_BIST_0_FAIL_get_se20_wdma_bist_fail_1(data)                     ((0x00000200&(data))>>9)
#define  SE_SE20_BIST_0_FAIL_get_se20_wdma_bist_fail_0(data)                     ((0x00000100&(data))>>8)
#define  SE_SE20_BIST_0_FAIL_get_se20_cache_bist_fail_3(data)                    ((0x00000008&(data))>>3)
#define  SE_SE20_BIST_0_FAIL_get_se20_cache_bist_fail_2(data)                    ((0x00000004&(data))>>2)
#define  SE_SE20_BIST_0_FAIL_get_se20_cache_bist_fail_1(data)                    ((0x00000002&(data))>>1)
#define  SE_SE20_BIST_0_FAIL_get_se20_cache_bist_fail_0(data)                    (0x00000001&(data))

#define  SE_SE20_DRF_MODE                                                       0x1800CFD0
#define  SE_SE20_DRF_MODE_reg_addr                                               "0xB800CFD0"
#define  SE_SE20_DRF_MODE_reg                                                    0xB800CFD0
#define  SE_SE20_DRF_MODE_inst_addr                                              "0x01A5"
#define  set_SE_SE20_DRF_MODE_reg(data)                                          (*((volatile unsigned int*)SE_SE20_DRF_MODE_reg)=data)
#define  get_SE_SE20_DRF_MODE_reg                                                (*((volatile unsigned int*)SE_SE20_DRF_MODE_reg))
#define  SE_SE20_DRF_MODE_se20_afbce_drf_mode_0_shift                            (5)
#define  SE_SE20_DRF_MODE_se20_wdma_drf_mode_0_shift                             (4)
#define  SE_SE20_DRF_MODE_se20_cache_drf_mode_0_shift                            (0)
#define  SE_SE20_DRF_MODE_se20_afbce_drf_mode_0_mask                             (0x00000020)
#define  SE_SE20_DRF_MODE_se20_wdma_drf_mode_0_mask                              (0x00000010)
#define  SE_SE20_DRF_MODE_se20_cache_drf_mode_0_mask                             (0x00000001)
#define  SE_SE20_DRF_MODE_se20_afbce_drf_mode_0(data)                            (0x00000020&((data)<<5))
#define  SE_SE20_DRF_MODE_se20_wdma_drf_mode_0(data)                             (0x00000010&((data)<<4))
#define  SE_SE20_DRF_MODE_se20_cache_drf_mode_0(data)                            (0x00000001&(data))
#define  SE_SE20_DRF_MODE_get_se20_afbce_drf_mode_0(data)                        ((0x00000020&(data))>>5)
#define  SE_SE20_DRF_MODE_get_se20_wdma_drf_mode_0(data)                         ((0x00000010&(data))>>4)
#define  SE_SE20_DRF_MODE_get_se20_cache_drf_mode_0(data)                        (0x00000001&(data))

#define  SE_SE20_DRF_RESUME                                                     0x1800CFD4
#define  SE_SE20_DRF_RESUME_reg_addr                                             "0xB800CFD4"
#define  SE_SE20_DRF_RESUME_reg                                                  0xB800CFD4
#define  SE_SE20_DRF_RESUME_inst_addr                                            "0x01A6"
#define  set_SE_SE20_DRF_RESUME_reg(data)                                        (*((volatile unsigned int*)SE_SE20_DRF_RESUME_reg)=data)
#define  get_SE_SE20_DRF_RESUME_reg                                              (*((volatile unsigned int*)SE_SE20_DRF_RESUME_reg))
#define  SE_SE20_DRF_RESUME_se20_afbce_drf_resume_0_shift                        (5)
#define  SE_SE20_DRF_RESUME_se20_wdma_drf_resume_0_shift                         (4)
#define  SE_SE20_DRF_RESUME_se20_cache_drf_resume_0_shift                        (0)
#define  SE_SE20_DRF_RESUME_se20_afbce_drf_resume_0_mask                         (0x00000020)
#define  SE_SE20_DRF_RESUME_se20_wdma_drf_resume_0_mask                          (0x00000010)
#define  SE_SE20_DRF_RESUME_se20_cache_drf_resume_0_mask                         (0x00000001)
#define  SE_SE20_DRF_RESUME_se20_afbce_drf_resume_0(data)                        (0x00000020&((data)<<5))
#define  SE_SE20_DRF_RESUME_se20_wdma_drf_resume_0(data)                         (0x00000010&((data)<<4))
#define  SE_SE20_DRF_RESUME_se20_cache_drf_resume_0(data)                        (0x00000001&(data))
#define  SE_SE20_DRF_RESUME_get_se20_afbce_drf_resume_0(data)                    ((0x00000020&(data))>>5)
#define  SE_SE20_DRF_RESUME_get_se20_wdma_drf_resume_0(data)                     ((0x00000010&(data))>>4)
#define  SE_SE20_DRF_RESUME_get_se20_cache_drf_resume_0(data)                    (0x00000001&(data))

#define  SE_SE20_DRF_DONE                                                       0x1800CFD8
#define  SE_SE20_DRF_DONE_reg_addr                                               "0xB800CFD8"
#define  SE_SE20_DRF_DONE_reg                                                    0xB800CFD8
#define  SE_SE20_DRF_DONE_inst_addr                                              "0x01A7"
#define  set_SE_SE20_DRF_DONE_reg(data)                                          (*((volatile unsigned int*)SE_SE20_DRF_DONE_reg)=data)
#define  get_SE_SE20_DRF_DONE_reg                                                (*((volatile unsigned int*)SE_SE20_DRF_DONE_reg))
#define  SE_SE20_DRF_DONE_se20_afbce_drf_done_0_shift                            (5)
#define  SE_SE20_DRF_DONE_se20_wdma_drf_done_0_shift                             (4)
#define  SE_SE20_DRF_DONE_se20_cache_drf_done_0_shift                            (0)
#define  SE_SE20_DRF_DONE_se20_afbce_drf_done_0_mask                             (0x00000020)
#define  SE_SE20_DRF_DONE_se20_wdma_drf_done_0_mask                              (0x00000010)
#define  SE_SE20_DRF_DONE_se20_cache_drf_done_0_mask                             (0x00000001)
#define  SE_SE20_DRF_DONE_se20_afbce_drf_done_0(data)                            (0x00000020&((data)<<5))
#define  SE_SE20_DRF_DONE_se20_wdma_drf_done_0(data)                             (0x00000010&((data)<<4))
#define  SE_SE20_DRF_DONE_se20_cache_drf_done_0(data)                            (0x00000001&(data))
#define  SE_SE20_DRF_DONE_get_se20_afbce_drf_done_0(data)                        ((0x00000020&(data))>>5)
#define  SE_SE20_DRF_DONE_get_se20_wdma_drf_done_0(data)                         ((0x00000010&(data))>>4)
#define  SE_SE20_DRF_DONE_get_se20_cache_drf_done_0(data)                        (0x00000001&(data))

#define  SE_SE20_DRF_PAUSE                                                      0x1800CFDC
#define  SE_SE20_DRF_PAUSE_reg_addr                                              "0xB800CFDC"
#define  SE_SE20_DRF_PAUSE_reg                                                   0xB800CFDC
#define  SE_SE20_DRF_PAUSE_inst_addr                                             "0x01A8"
#define  set_SE_SE20_DRF_PAUSE_reg(data)                                         (*((volatile unsigned int*)SE_SE20_DRF_PAUSE_reg)=data)
#define  get_SE_SE20_DRF_PAUSE_reg                                               (*((volatile unsigned int*)SE_SE20_DRF_PAUSE_reg))
#define  SE_SE20_DRF_PAUSE_se20_afbce_drf_pause_0_shift                          (5)
#define  SE_SE20_DRF_PAUSE_se20_wdma_drf_pause_0_shift                           (4)
#define  SE_SE20_DRF_PAUSE_se20_cache_drf_pause_0_shift                          (0)
#define  SE_SE20_DRF_PAUSE_se20_afbce_drf_pause_0_mask                           (0x00000020)
#define  SE_SE20_DRF_PAUSE_se20_wdma_drf_pause_0_mask                            (0x00000010)
#define  SE_SE20_DRF_PAUSE_se20_cache_drf_pause_0_mask                           (0x00000001)
#define  SE_SE20_DRF_PAUSE_se20_afbce_drf_pause_0(data)                          (0x00000020&((data)<<5))
#define  SE_SE20_DRF_PAUSE_se20_wdma_drf_pause_0(data)                           (0x00000010&((data)<<4))
#define  SE_SE20_DRF_PAUSE_se20_cache_drf_pause_0(data)                          (0x00000001&(data))
#define  SE_SE20_DRF_PAUSE_get_se20_afbce_drf_pause_0(data)                      ((0x00000020&(data))>>5)
#define  SE_SE20_DRF_PAUSE_get_se20_wdma_drf_pause_0(data)                       ((0x00000010&(data))>>4)
#define  SE_SE20_DRF_PAUSE_get_se20_cache_drf_pause_0(data)                      (0x00000001&(data))

#define  SE_SE20_DRF_FAIL_GROUP                                                 0x1800CFE0
#define  SE_SE20_DRF_FAIL_GROUP_reg_addr                                         "0xB800CFE0"
#define  SE_SE20_DRF_FAIL_GROUP_reg                                              0xB800CFE0
#define  SE_SE20_DRF_FAIL_GROUP_inst_addr                                        "0x01A9"
#define  set_SE_SE20_DRF_FAIL_GROUP_reg(data)                                    (*((volatile unsigned int*)SE_SE20_DRF_FAIL_GROUP_reg)=data)
#define  get_SE_SE20_DRF_FAIL_GROUP_reg                                          (*((volatile unsigned int*)SE_SE20_DRF_FAIL_GROUP_reg))
#define  SE_SE20_DRF_FAIL_GROUP_se20_afbce_drf_fail_group_shift                  (2)
#define  SE_SE20_DRF_FAIL_GROUP_se20_wdma_drf_fail_group_shift                   (1)
#define  SE_SE20_DRF_FAIL_GROUP_se20_cache_drf_fail_group_shift                  (0)
#define  SE_SE20_DRF_FAIL_GROUP_se20_afbce_drf_fail_group_mask                   (0x00000004)
#define  SE_SE20_DRF_FAIL_GROUP_se20_wdma_drf_fail_group_mask                    (0x00000002)
#define  SE_SE20_DRF_FAIL_GROUP_se20_cache_drf_fail_group_mask                   (0x00000001)
#define  SE_SE20_DRF_FAIL_GROUP_se20_afbce_drf_fail_group(data)                  (0x00000004&((data)<<2))
#define  SE_SE20_DRF_FAIL_GROUP_se20_wdma_drf_fail_group(data)                   (0x00000002&((data)<<1))
#define  SE_SE20_DRF_FAIL_GROUP_se20_cache_drf_fail_group(data)                  (0x00000001&(data))
#define  SE_SE20_DRF_FAIL_GROUP_get_se20_afbce_drf_fail_group(data)              ((0x00000004&(data))>>2)
#define  SE_SE20_DRF_FAIL_GROUP_get_se20_wdma_drf_fail_group(data)               ((0x00000002&(data))>>1)
#define  SE_SE20_DRF_FAIL_GROUP_get_se20_cache_drf_fail_group(data)              (0x00000001&(data))

#define  SE_SE20_DRF_0_FAIL                                                     0x1800CFE4
#define  SE_SE20_DRF_0_FAIL_reg_addr                                             "0xB800CFE4"
#define  SE_SE20_DRF_0_FAIL_reg                                                  0xB800CFE4
#define  SE_SE20_DRF_0_FAIL_inst_addr                                            "0x01AA"
#define  set_SE_SE20_DRF_0_FAIL_reg(data)                                        (*((volatile unsigned int*)SE_SE20_DRF_0_FAIL_reg)=data)
#define  get_SE_SE20_DRF_0_FAIL_reg                                              (*((volatile unsigned int*)SE_SE20_DRF_0_FAIL_reg))
#define  SE_SE20_DRF_0_FAIL_se20_afbce_drf_fail_1_shift                          (11)
#define  SE_SE20_DRF_0_FAIL_se20_afbce_drf_fail_0_shift                          (10)
#define  SE_SE20_DRF_0_FAIL_se20_wdma_drf_fail_1_shift                           (9)
#define  SE_SE20_DRF_0_FAIL_se20_wdma_drf_fail_0_shift                           (8)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_3_shift                          (3)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_2_shift                          (2)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_1_shift                          (1)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_0_shift                          (0)
#define  SE_SE20_DRF_0_FAIL_se20_afbce_drf_fail_1_mask                           (0x00000800)
#define  SE_SE20_DRF_0_FAIL_se20_afbce_drf_fail_0_mask                           (0x00000400)
#define  SE_SE20_DRF_0_FAIL_se20_wdma_drf_fail_1_mask                            (0x00000200)
#define  SE_SE20_DRF_0_FAIL_se20_wdma_drf_fail_0_mask                            (0x00000100)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_3_mask                           (0x00000008)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_2_mask                           (0x00000004)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_1_mask                           (0x00000002)
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_0_mask                           (0x00000001)
#define  SE_SE20_DRF_0_FAIL_se20_afbce_drf_fail_1(data)                          (0x00000800&((data)<<11))
#define  SE_SE20_DRF_0_FAIL_se20_afbce_drf_fail_0(data)                          (0x00000400&((data)<<10))
#define  SE_SE20_DRF_0_FAIL_se20_wdma_drf_fail_1(data)                           (0x00000200&((data)<<9))
#define  SE_SE20_DRF_0_FAIL_se20_wdma_drf_fail_0(data)                           (0x00000100&((data)<<8))
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_3(data)                          (0x00000008&((data)<<3))
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_2(data)                          (0x00000004&((data)<<2))
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_1(data)                          (0x00000002&((data)<<1))
#define  SE_SE20_DRF_0_FAIL_se20_cache_drf_fail_0(data)                          (0x00000001&(data))
#define  SE_SE20_DRF_0_FAIL_get_se20_afbce_drf_fail_1(data)                      ((0x00000800&(data))>>11)
#define  SE_SE20_DRF_0_FAIL_get_se20_afbce_drf_fail_0(data)                      ((0x00000400&(data))>>10)
#define  SE_SE20_DRF_0_FAIL_get_se20_wdma_drf_fail_1(data)                       ((0x00000200&(data))>>9)
#define  SE_SE20_DRF_0_FAIL_get_se20_wdma_drf_fail_0(data)                       ((0x00000100&(data))>>8)
#define  SE_SE20_DRF_0_FAIL_get_se20_cache_drf_fail_3(data)                      ((0x00000008&(data))>>3)
#define  SE_SE20_DRF_0_FAIL_get_se20_cache_drf_fail_2(data)                      ((0x00000004&(data))>>2)
#define  SE_SE20_DRF_0_FAIL_get_se20_cache_drf_fail_1(data)                      ((0x00000002&(data))>>1)
#define  SE_SE20_DRF_0_FAIL_get_se20_cache_drf_fail_0(data)                      (0x00000001&(data))

#define  SE_SE20_TEST_RWM                                                       0x1800CFE8
#define  SE_SE20_TEST_RWM_reg_addr                                               "0xB800CFE8"
#define  SE_SE20_TEST_RWM_reg                                                    0xB800CFE8
#define  SE_SE20_TEST_RWM_inst_addr                                              "0x01AB"
#define  set_SE_SE20_TEST_RWM_reg(data)                                          (*((volatile unsigned int*)SE_SE20_TEST_RWM_reg)=data)
#define  get_SE_SE20_TEST_RWM_reg                                                (*((volatile unsigned int*)SE_SE20_TEST_RWM_reg))
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_3_shift                             (3)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_2_shift                             (2)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_1_shift                             (1)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_0_shift                             (0)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_3_mask                              (0x00000008)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_2_mask                              (0x00000004)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_1_mask                              (0x00000002)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_0_mask                              (0x00000001)
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_3(data)                             (0x00000008&((data)<<3))
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_2(data)                             (0x00000004&((data)<<2))
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_1(data)                             (0x00000002&((data)<<1))
#define  SE_SE20_TEST_RWM_se20_cache_testrwm_0(data)                             (0x00000001&(data))
#define  SE_SE20_TEST_RWM_get_se20_cache_testrwm_3(data)                         ((0x00000008&(data))>>3)
#define  SE_SE20_TEST_RWM_get_se20_cache_testrwm_2(data)                         ((0x00000004&(data))>>2)
#define  SE_SE20_TEST_RWM_get_se20_cache_testrwm_1(data)                         ((0x00000002&(data))>>1)
#define  SE_SE20_TEST_RWM_get_se20_cache_testrwm_0(data)                         (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base:28;
        RBus_UInt32  res1:4;
    };
}se_cmdbase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit:28;
        RBus_UInt32  res1:4;
    };
}se_cmdlmt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rptr:28;
        RBus_UInt32  res1:4;
    };
}se_cmdrptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wptr:28;
        RBus_UInt32  res1:4;
    };
}se_cmdwptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  srwordcnt:7;
    };
}se_srwordcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  disable:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pri2:2;
        RBus_UInt32  pri1:2;
    };
}se_q_priority_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  write_enable10:1;
        RBus_UInt32  rounding_en:1;
        RBus_UInt32  write_enable8:1;
        RBus_UInt32  big_endian_o:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  big_endian_i2:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  big_endian_i1:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  alpha_loc2:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  alpha_loc_rslt:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  alpha_loc:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  format:4;
    };
}se_clr_fmt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  color_key:24;
    };
}se_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dst_color_key:24;
    };
}se_dst_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_color:32;
    };
}se_src_color_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  src_alpha:8;
    };
}se_src_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  dest_alpha:8;
    };
}se_dest_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rslt_alpha:8;
    };
}se_rslt_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rslt_color:32;
    };
}se_rslt_color_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_baddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_pitch1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_baddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_pitch2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  clut_lock_st:3;
    };
}se_clut_lock_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  hdown:1;
        RBus_UInt32  vdown:1;
        RBus_UInt32  hup:1;
        RBus_UInt32  vup:1;
    };
}se_convscaling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  m01:13;
        RBus_UInt32  m00:13;
    };
}se_convcoef1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  m10:13;
        RBus_UInt32  m02:13;
    };
}se_convcoef2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  m12:13;
        RBus_UInt32  m11:13;
    };
}se_convcoef3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  m21:13;
        RBus_UInt32  m20:13;
    };
}se_convcoef4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  m22:13;
    };
}se_convcoef5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  a2:10;
        RBus_UInt32  a1:10;
        RBus_UInt32  a0:10;
    };
}se_convcoef6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  color_key:24;
    };
}se_fcv_bitblit_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_red:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  src_clr_mul_red:9;
    };
}se_src_clr_red_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_green:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  src_clr_mul_green:9;
    };
}se_src_clr_green_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_blue:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  src_clr_mul_blue:9;
    };
}se_src_clr_blue_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_alpha:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  src_clr_mul_alpha:9;
    };
}se_src_clr_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  color_alpha:8;
    };
}se_fb_coloralpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  repl_alpha:1;
        RBus_UInt32  repl_color:1;
        RBus_UInt32  ref_alpha:1;
        RBus_UInt32  htype:2;
        RBus_UInt32  vtype:1;
        RBus_UInt32  hodd:1;
        RBus_UInt32  vodd:1;
    };
}se_se20_stretch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  h_scaling_iniph:7;
        RBus_UInt32  h_scaling_dph_msb:4;
        RBus_UInt32  h_scaling_dph_lsb:14;
    };
}se_se20_hdhs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  v_scaling_iniph:7;
        RBus_UInt32  v_scaling_dph_msb:4;
        RBus_UInt32  v_scaling_dph_lsb:14;
    };
}se_se20_vdhs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  fmdet_c_v1:10;
        RBus_UInt32  fmdet_c_v0:10;
    };
}se_film_det_c_set_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  fmdet_c_h1:10;
        RBus_UInt32  fmdet_c_h0:10;
    };
}se_film_det_c_set_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fmdet_9_v2:10;
        RBus_UInt32  fmdet_9_v1:10;
        RBus_UInt32  fmdet_9_v0:10;
    };
}se_film_det_9_set_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fmdet_9_v5:10;
        RBus_UInt32  fmdet_9_v4:10;
        RBus_UInt32  fmdet_9_v3:10;
    };
}se_film_det_9_set_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fmdet_9_v8:10;
        RBus_UInt32  fmdet_9_v7:10;
        RBus_UInt32  fmdet_9_v6:10;
    };
}se_film_det_9_set_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  fmdet_9_v9:10;
    };
}se_film_det_9_set_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fmdet_25_v2:10;
        RBus_UInt32  fmdet_25_v1:10;
        RBus_UInt32  fmdet_25_v0:10;
    };
}se_film_det_25_set_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fmdet_25_v5:10;
        RBus_UInt32  fmdet_25_v4:10;
        RBus_UInt32  fmdet_25_v3:10;
    };
}se_film_det_25_set_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fmdet_25_h2:10;
        RBus_UInt32  fmdet_25_h1:10;
        RBus_UInt32  fmdet_25_h0:10;
    };
}se_film_det_25_set_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  fmdet_25_h5:10;
        RBus_UInt32  fmdet_25_h4:10;
        RBus_UInt32  fmdet_25_h3:10;
    };
}se_film_det_25_set_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_motion_all:27;
    };
}se_film_det_all_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_c_motion:27;
    };
}se_film_det_c_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_0:27;
    };
}se_film_det_9_result_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_1:27;
    };
}se_film_det_9_result_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_2:27;
    };
}se_film_det_9_result_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_3:27;
    };
}se_film_det_9_result_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_4:27;
    };
}se_film_det_9_result_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_5:27;
    };
}se_film_det_9_result_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_6:27;
    };
}se_film_det_9_result_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_7:27;
    };
}se_film_det_9_result_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_9_motion_8:27;
    };
}se_film_det_9_result_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r00:27;
    };
}se_film_det_25_result_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r01:27;
    };
}se_film_det_25_result_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r02:27;
    };
}se_film_det_25_result_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r03:27;
    };
}se_film_det_25_result_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r04:27;
    };
}se_film_det_25_result_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r05:27;
    };
}se_film_det_25_result_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r06:27;
    };
}se_film_det_25_result_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r07:27;
    };
}se_film_det_25_result_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r08:27;
    };
}se_film_det_25_result_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r09:27;
    };
}se_film_det_25_result_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r10:27;
    };
}se_film_det_25_result_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r11:27;
    };
}se_film_det_25_result_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r12:27;
    };
}se_film_det_25_result_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r13:27;
    };
}se_film_det_25_result_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r14:27;
    };
}se_film_det_25_result_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r15:27;
    };
}se_film_det_25_result_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r16:27;
    };
}se_film_det_25_result_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r17:27;
    };
}se_film_det_25_result_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r18:27;
    };
}se_film_det_25_result_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r19:27;
    };
}se_film_det_25_result_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r20:27;
    };
}se_film_det_25_result_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r21:27;
    };
}se_film_det_25_result_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r22:27;
    };
}se_film_det_25_result_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r23:27;
    };
}se_film_det_25_result_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  fmdet_25_motion_r24:27;
    };
}se_film_det_25_result_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  fmdet_mode_sel:2;
        RBus_UInt32  fmdet_th:8;
        RBus_UInt32  fmdet_coring:8;
    };
}se_film_det_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fmdet_diff_count_4:5;
        RBus_UInt32  fmdet_diff_count_3:5;
        RBus_UInt32  fmdet_diff_count_2:5;
        RBus_UInt32  fmdet_diff_count_1:5;
        RBus_UInt32  fmdet_diff_count_0:5;
    };
}se_film_det_th2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  hcoef:14;
    };
}se_se20_s1_hcoeff_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vcoef:14;
    };
}se_se20_s1_vcoeff_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  color_key:24;
    };
}se_sc_bitblit_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  src_x_color_g_step:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  src_x_color_r_step:13;
    };
}se_src_lg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  src_x_color_b_step:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  src_x_alpha_step:13;
    };
}se_src_lg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  src_y_color_g_step:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  src_y_color_r_step:13;
    };
}se_src_lg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  src_y_color_b_step:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  src_y_alpha_step:13;
    };
}se_src_lg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  src_color_direction:2;
    };
}se_src_lg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  interleave:1;
        RBus_UInt32  pitch:16;
    };
}se_se20_pitch_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  s2_r_8byte_swap:1;
        RBus_UInt32  s2_r_4byte_swap:1;
        RBus_UInt32  s2_r_2byte_swap:1;
        RBus_UInt32  s2_r_1byte_swap:1;
        RBus_UInt32  s1_r_8byte_swap:1;
        RBus_UInt32  s1_r_4byte_swap:1;
        RBus_UInt32  s1_r_2byte_swap:1;
        RBus_UInt32  s1_r_1byte_swap:1;
        RBus_UInt32  rslt_w_8byte_swap:1;
        RBus_UInt32  rslt_w_4byte_swap:1;
        RBus_UInt32  rslt_w_2byte_swap:1;
        RBus_UInt32  rslt_w_1byte_swap:1;
    };
}se_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  dst_dfb_alp_ctrl:1;
        RBus_UInt32  src_dfb_alp_ctrl:1;
    };
}se_dfb_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg1:16;
        RBus_UInt32  reg0:16;
    };
}se_se20_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}se_se20_dbg_idle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}se_se20_dbg_wdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}se_se20_dbg_intf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  dc_space_sel:1;
        RBus_UInt32  cache_rep_algo:2;
        RBus_UInt32  wlast_sel:1;
        RBus_UInt32  arb_rw_rrobin_en:1;
        RBus_UInt32  rslt_wr_rgn_sz:2;
        RBus_UInt32  rslt_wr_rgn_en:1;
        RBus_UInt32  src_rd_rgn_sz:2;
        RBus_UInt32  src_rd_rgn_en:1;
    };
}se_se20_perf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  se20_csc_rep_alpha:1;
        RBus_UInt32  se_fast_arb_en:1;
        RBus_UInt32  se_dbs_ctl_clk_gt_en:1;
        RBus_UInt32  se_cmd_q_ext_clk_gt_en:1;
        RBus_UInt32  se_clut_clk_gt_en:1;
        RBus_UInt32  se20_re_arr_opt0_off:1;
        RBus_UInt32  dma_no_gated_en:1;
        RBus_UInt32  ori_bypass_blk_wrapper:1;
        RBus_UInt32  ori_wlast_sel:1;
        RBus_UInt32  r_bbvo_holdq_en:1;
        RBus_UInt32  r_bbvo_holdq_frm:4;
        RBus_UInt32  cmd_swap_ctrl:1;
        RBus_UInt32  se_op_clk_gt:1;
    };
}se_se20_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  idle_mask:32;
    };
}se_se20_idle_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  endiswap:1;
        RBus_UInt32  go:1;
        RBus_UInt32  write_data:1;
    };
}se_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  idle:1;
    };
}se_idle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  sel2:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  sel1:3;
    };
}se_intsel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  fmt_err:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  com_empty:1;
        RBus_UInt32  com_err:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  write_data:1;
    };
}se_ints_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  fmt_err:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  com_empty:1;
        RBus_UInt32  com_err:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  write_data:1;
    };
}se_inte_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  instcnt_l:32;
    };
}se_instcnt_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  instcnt_h:32;
    };
}se_instcnt_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  radr:8;
    };
}se_clut_radr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  value:32;
    };
}se_clut_value_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dbg_change:1;
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  dbg_module_sel1:4;
        RBus_UInt32  dbg_module_sel0:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  dbg_sel1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  dbg_sel0:5;
    };
}se_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg1:16;
        RBus_UInt32  reg0:16;
    };
}se_sctch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_sf_rx_err_ro:1;
        RBus_UInt32  reg_sf_rx_done_ro:1;
        RBus_UInt32  reg_sf_rx_gated:1;
        RBus_UInt32  reg_sf_rx_start:1;
        RBus_UInt32  reg_sf_rx_mode:1;
        RBus_UInt32  reg_sf_rx_debug_bit_sel:8;
        RBus_UInt32  reg_sf_rx_fail_bit_status_ro:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  reg_sf_tx_work_ro:1;
        RBus_UInt32  reg_sf_tx_start:1;
        RBus_UInt32  reg_sf_tx_mode:1;
    };
}se_sft_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  test1:1;
        RBus_UInt32  ls:1;
        RBus_UInt32  rm:4;
        RBus_UInt32  rme:1;
    };
}se_read_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_bist_mode_0:1;
    };
}se_se_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_bist_done_0:1;
    };
}se_se_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_bist_fail_group_0:1;
    };
}se_se_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  se_bist_0_fail_2:1;
        RBus_UInt32  se_bist_0_fail_1:1;
        RBus_UInt32  se_bist_0_fail_0:1;
    };
}se_se_bist_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_drf_mode_0:1;
    };
}se_se_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_drf_resume_0:1;
    };
}se_se_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_drf_done_0:1;
    };
}se_se_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_drf_pause_0:1;
    };
}se_se_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  se_drf_fail_group_0:1;
    };
}se_se_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  se_drf_0_fail_2:1;
        RBus_UInt32  se_drf_0_fail_1:1;
        RBus_UInt32  se_drf_0_fail_0:1;
    };
}se_se_drf_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  se20_afbce_bist_mode_0:1;
        RBus_UInt32  se20_wdma_bist_mode_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  se20_cache_bist_mode_0:1;
    };
}se_se20_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  se20_afbce_bist_done_0:1;
        RBus_UInt32  se20_wdma_bist_done_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  se20_cache_bist_done_0:1;
    };
}se_se20_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  se20_afbce_bist_fail_group:1;
        RBus_UInt32  se20_wdma_bist_fail_group:1;
        RBus_UInt32  se20_cache_bist_fail_group:1;
    };
}se_se20_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  se20_afbce_bist_fail_1:1;
        RBus_UInt32  se20_afbce_bist_fail_0:1;
        RBus_UInt32  se20_wdma_bist_fail_1:1;
        RBus_UInt32  se20_wdma_bist_fail_0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  se20_cache_bist_fail_3:1;
        RBus_UInt32  se20_cache_bist_fail_2:1;
        RBus_UInt32  se20_cache_bist_fail_1:1;
        RBus_UInt32  se20_cache_bist_fail_0:1;
    };
}se_se20_bist_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  se20_afbce_drf_mode_0:1;
        RBus_UInt32  se20_wdma_drf_mode_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  se20_cache_drf_mode_0:1;
    };
}se_se20_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  se20_afbce_drf_resume_0:1;
        RBus_UInt32  se20_wdma_drf_resume_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  se20_cache_drf_resume_0:1;
    };
}se_se20_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  se20_afbce_drf_done_0:1;
        RBus_UInt32  se20_wdma_drf_done_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  se20_cache_drf_done_0:1;
    };
}se_se20_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  se20_afbce_drf_pause_0:1;
        RBus_UInt32  se20_wdma_drf_pause_0:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  se20_cache_drf_pause_0:1;
    };
}se_se20_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  se20_afbce_drf_fail_group:1;
        RBus_UInt32  se20_wdma_drf_fail_group:1;
        RBus_UInt32  se20_cache_drf_fail_group:1;
    };
}se_se20_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  se20_afbce_drf_fail_1:1;
        RBus_UInt32  se20_afbce_drf_fail_0:1;
        RBus_UInt32  se20_wdma_drf_fail_1:1;
        RBus_UInt32  se20_wdma_drf_fail_0:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  se20_cache_drf_fail_3:1;
        RBus_UInt32  se20_cache_drf_fail_2:1;
        RBus_UInt32  se20_cache_drf_fail_1:1;
        RBus_UInt32  se20_cache_drf_fail_0:1;
    };
}se_se20_drf_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  se20_cache_testrwm_3:1;
        RBus_UInt32  se20_cache_testrwm_2:1;
        RBus_UInt32  se20_cache_testrwm_1:1;
        RBus_UInt32  se20_cache_testrwm_0:1;
    };
}se_se20_test_rwm_RBUS;

#else //apply LITTLE_ENDIAN

//======SE register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  base:28;
    };
}se_cmdbase_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  limit:28;
    };
}se_cmdlmt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  rptr:28;
    };
}se_cmdrptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  wptr:28;
    };
}se_cmdwptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  srwordcnt:7;
        RBus_UInt32  res1:25;
    };
}se_srwordcnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pri1:2;
        RBus_UInt32  pri2:2;
        RBus_UInt32  res1:4;
        RBus_UInt32  disable:4;
        RBus_UInt32  res2:20;
    };
}se_q_priority_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  format:4;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  alpha_loc:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  alpha_loc_rslt:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  alpha_loc2:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  big_endian_i1:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  big_endian_i2:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  big_endian_o:1;
        RBus_UInt32  write_enable8:1;
        RBus_UInt32  rounding_en:1;
        RBus_UInt32  write_enable10:1;
        RBus_UInt32  res2:9;
    };
}se_clr_fmt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  color_key:24;
        RBus_UInt32  res1:8;
    };
}se_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dst_color_key:24;
        RBus_UInt32  res1:8;
    };
}se_dst_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_color:32;
    };
}se_src_color_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_alpha:8;
        RBus_UInt32  res1:24;
    };
}se_src_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dest_alpha:8;
        RBus_UInt32  res1:24;
    };
}se_dest_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rslt_alpha:8;
        RBus_UInt32  res1:24;
    };
}se_rslt_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rslt_color:32;
    };
}se_rslt_color_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_baddr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_pitch1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_baddr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_pitch2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clut_lock_st:3;
        RBus_UInt32  res1:29;
    };
}se_clut_lock_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vup:1;
        RBus_UInt32  hup:1;
        RBus_UInt32  vdown:1;
        RBus_UInt32  hdown:1;
        RBus_UInt32  res1:28;
    };
}se_convscaling_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m00:13;
        RBus_UInt32  m01:13;
        RBus_UInt32  res1:6;
    };
}se_convcoef1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m02:13;
        RBus_UInt32  m10:13;
        RBus_UInt32  res1:6;
    };
}se_convcoef2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m11:13;
        RBus_UInt32  m12:13;
        RBus_UInt32  res1:6;
    };
}se_convcoef3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m20:13;
        RBus_UInt32  m21:13;
        RBus_UInt32  res1:6;
    };
}se_convcoef4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  m22:13;
        RBus_UInt32  res1:19;
    };
}se_convcoef5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  a0:10;
        RBus_UInt32  a1:10;
        RBus_UInt32  a2:10;
        RBus_UInt32  res1:2;
    };
}se_convcoef6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  color_key:24;
        RBus_UInt32  res1:8;
    };
}se_fcv_bitblit_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_clr_mul_red:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_red:9;
        RBus_UInt32  res2:7;
    };
}se_src_clr_red_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_clr_mul_green:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_green:9;
        RBus_UInt32  res2:7;
    };
}se_src_clr_green_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_clr_mul_blue:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_blue:9;
        RBus_UInt32  res2:7;
    };
}se_src_clr_blue_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_clr_mul_alpha:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  src_clr_add_alpha:9;
        RBus_UInt32  res2:7;
    };
}se_src_clr_alpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  color_alpha:8;
        RBus_UInt32  res1:24;
    };
}se_fb_coloralpha_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vodd:1;
        RBus_UInt32  hodd:1;
        RBus_UInt32  vtype:1;
        RBus_UInt32  htype:2;
        RBus_UInt32  ref_alpha:1;
        RBus_UInt32  repl_color:1;
        RBus_UInt32  repl_alpha:1;
        RBus_UInt32  res1:24;
    };
}se_se20_stretch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_scaling_dph_lsb:14;
        RBus_UInt32  h_scaling_dph_msb:4;
        RBus_UInt32  h_scaling_iniph:7;
        RBus_UInt32  res1:7;
    };
}se_se20_hdhs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  v_scaling_dph_lsb:14;
        RBus_UInt32  v_scaling_dph_msb:4;
        RBus_UInt32  v_scaling_iniph:7;
        RBus_UInt32  res1:7;
    };
}se_se20_vdhs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_c_v0:10;
        RBus_UInt32  fmdet_c_v1:10;
        RBus_UInt32  res1:12;
    };
}se_film_det_c_set_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_c_h0:10;
        RBus_UInt32  fmdet_c_h1:10;
        RBus_UInt32  res1:12;
    };
}se_film_det_c_set_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_v0:10;
        RBus_UInt32  fmdet_9_v1:10;
        RBus_UInt32  fmdet_9_v2:10;
        RBus_UInt32  res1:2;
    };
}se_film_det_9_set_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_v3:10;
        RBus_UInt32  fmdet_9_v4:10;
        RBus_UInt32  fmdet_9_v5:10;
        RBus_UInt32  res1:2;
    };
}se_film_det_9_set_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_v6:10;
        RBus_UInt32  fmdet_9_v7:10;
        RBus_UInt32  fmdet_9_v8:10;
        RBus_UInt32  res1:2;
    };
}se_film_det_9_set_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_v9:10;
        RBus_UInt32  res1:22;
    };
}se_film_det_9_set_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_v0:10;
        RBus_UInt32  fmdet_25_v1:10;
        RBus_UInt32  fmdet_25_v2:10;
        RBus_UInt32  res1:2;
    };
}se_film_det_25_set_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_v3:10;
        RBus_UInt32  fmdet_25_v4:10;
        RBus_UInt32  fmdet_25_v5:10;
        RBus_UInt32  res1:2;
    };
}se_film_det_25_set_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_h0:10;
        RBus_UInt32  fmdet_25_h1:10;
        RBus_UInt32  fmdet_25_h2:10;
        RBus_UInt32  res1:2;
    };
}se_film_det_25_set_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_h3:10;
        RBus_UInt32  fmdet_25_h4:10;
        RBus_UInt32  fmdet_25_h5:10;
        RBus_UInt32  res1:2;
    };
}se_film_det_25_set_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_motion_all:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_all_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_c_motion:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_c_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_0:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_1:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_2:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_3:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_4:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_5:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_6:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_7:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_9_motion_8:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_9_result_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r00:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r01:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r02:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r03:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r04:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r05:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r06:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r07:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r08:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r09:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r10:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r11:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r12:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r13:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r14:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r15:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r16:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r17:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r18:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r19:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r20:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r21:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r22:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r23:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_25_motion_r24:27;
        RBus_UInt32  res1:5;
    };
}se_film_det_25_result_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_coring:8;
        RBus_UInt32  fmdet_th:8;
        RBus_UInt32  fmdet_mode_sel:2;
        RBus_UInt32  res1:14;
    };
}se_film_det_th_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fmdet_diff_count_0:5;
        RBus_UInt32  fmdet_diff_count_1:5;
        RBus_UInt32  fmdet_diff_count_2:5;
        RBus_UInt32  fmdet_diff_count_3:5;
        RBus_UInt32  fmdet_diff_count_4:5;
        RBus_UInt32  res1:7;
    };
}se_film_det_th2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_hcoeff_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_17_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_19_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_25_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_26_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_27_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_29_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcoef:14;
        RBus_UInt32  res1:18;
    };
}se_se20_s1_vcoeff_31_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  color_key:24;
        RBus_UInt32  res1:8;
    };
}se_sc_bitblit_color_key_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_x_color_r_step:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  src_x_color_g_step:13;
        RBus_UInt32  res2:3;
    };
}se_src_lg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_x_alpha_step:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  src_x_color_b_step:13;
        RBus_UInt32  res2:3;
    };
}se_src_lg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_y_color_r_step:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  src_y_color_g_step:13;
        RBus_UInt32  res2:3;
    };
}se_src_lg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_y_alpha_step:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  src_y_color_b_step:13;
        RBus_UInt32  res2:3;
    };
}se_src_lg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_color_direction:2;
        RBus_UInt32  res1:30;
    };
}se_src_lg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  baddr:32;
    };
}se_se20_baddr_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pitch:16;
        RBus_UInt32  interleave:1;
        RBus_UInt32  res1:15;
    };
}se_se20_pitch_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rslt_w_1byte_swap:1;
        RBus_UInt32  rslt_w_2byte_swap:1;
        RBus_UInt32  rslt_w_4byte_swap:1;
        RBus_UInt32  rslt_w_8byte_swap:1;
        RBus_UInt32  s1_r_1byte_swap:1;
        RBus_UInt32  s1_r_2byte_swap:1;
        RBus_UInt32  s1_r_4byte_swap:1;
        RBus_UInt32  s1_r_8byte_swap:1;
        RBus_UInt32  s2_r_1byte_swap:1;
        RBus_UInt32  s2_r_2byte_swap:1;
        RBus_UInt32  s2_r_4byte_swap:1;
        RBus_UInt32  s2_r_8byte_swap:1;
        RBus_UInt32  res1:20;
    };
}se_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_dfb_alp_ctrl:1;
        RBus_UInt32  dst_dfb_alp_ctrl:1;
        RBus_UInt32  res1:30;
    };
}se_dfb_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg0:16;
        RBus_UInt32  reg1:16;
    };
}se_se20_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}se_se20_dbg_idle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}se_se20_dbg_wdma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data:32;
    };
}se_se20_dbg_intf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src_rd_rgn_en:1;
        RBus_UInt32  src_rd_rgn_sz:2;
        RBus_UInt32  rslt_wr_rgn_en:1;
        RBus_UInt32  rslt_wr_rgn_sz:2;
        RBus_UInt32  arb_rw_rrobin_en:1;
        RBus_UInt32  wlast_sel:1;
        RBus_UInt32  cache_rep_algo:2;
        RBus_UInt32  dc_space_sel:1;
        RBus_UInt32  res1:21;
    };
}se_se20_perf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_op_clk_gt:1;
        RBus_UInt32  cmd_swap_ctrl:1;
        RBus_UInt32  r_bbvo_holdq_frm:4;
        RBus_UInt32  r_bbvo_holdq_en:1;
        RBus_UInt32  ori_wlast_sel:1;
        RBus_UInt32  ori_bypass_blk_wrapper:1;
        RBus_UInt32  dma_no_gated_en:1;
        RBus_UInt32  se20_re_arr_opt0_off:1;
        RBus_UInt32  se_clut_clk_gt_en:1;
        RBus_UInt32  se_cmd_q_ext_clk_gt_en:1;
        RBus_UInt32  se_dbs_ctl_clk_gt_en:1;
        RBus_UInt32  se_fast_arb_en:1;
        RBus_UInt32  se20_csc_rep_alpha:1;
        RBus_UInt32  res1:16;
    };
}se_se20_option_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  idle_mask:32;
    };
}se_se20_idle_mask_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  go:1;
        RBus_UInt32  endiswap:1;
        RBus_UInt32  res1:29;
    };
}se_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  idle:1;
        RBus_UInt32  res1:31;
    };
}se_idle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sel1:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  sel2:3;
        RBus_UInt32  res2:25;
    };
}se_intsel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  com_err:1;
        RBus_UInt32  com_empty:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  fmt_err:1;
        RBus_UInt32  res3:15;
    };
}se_ints_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  com_err:1;
        RBus_UInt32  com_empty:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  fmt_err:1;
        RBus_UInt32  res3:15;
    };
}se_inte_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  instcnt_l:32;
    };
}se_instcnt_l_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  instcnt_h:32;
    };
}se_instcnt_h_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  radr:8;
        RBus_UInt32  res1:24;
    };
}se_clut_radr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  value:32;
    };
}se_clut_value_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_sel0:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  dbg_sel1:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  dbg_module_sel0:4;
        RBus_UInt32  dbg_module_sel1:4;
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  dbg_change:1;
        RBus_UInt32  res3:6;
    };
}se_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg0:16;
        RBus_UInt32  reg1:16;
    };
}se_sctch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_sf_tx_mode:1;
        RBus_UInt32  reg_sf_tx_start:1;
        RBus_UInt32  reg_sf_tx_work_ro:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  reg_sf_rx_fail_bit_status_ro:1;
        RBus_UInt32  reg_sf_rx_debug_bit_sel:8;
        RBus_UInt32  reg_sf_rx_mode:1;
        RBus_UInt32  reg_sf_rx_start:1;
        RBus_UInt32  reg_sf_rx_gated:1;
        RBus_UInt32  reg_sf_rx_done_ro:1;
        RBus_UInt32  reg_sf_rx_err_ro:1;
    };
}se_sft_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rme:1;
        RBus_UInt32  rm:4;
        RBus_UInt32  ls:1;
        RBus_UInt32  test1:1;
        RBus_UInt32  res1:25;
    };
}se_read_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_bist_mode_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_bist_done_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_bist_fail_group_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_bist_0_fail_0:1;
        RBus_UInt32  se_bist_0_fail_1:1;
        RBus_UInt32  se_bist_0_fail_2:1;
        RBus_UInt32  res1:29;
    };
}se_se_bist_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_drf_mode_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_drf_resume_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_drf_done_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_drf_pause_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_drf_fail_group_0:1;
        RBus_UInt32  res1:31;
    };
}se_se_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se_drf_0_fail_0:1;
        RBus_UInt32  se_drf_0_fail_1:1;
        RBus_UInt32  se_drf_0_fail_2:1;
        RBus_UInt32  res1:29;
    };
}se_se_drf_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_bist_mode_0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se20_wdma_bist_mode_0:1;
        RBus_UInt32  se20_afbce_bist_mode_0:1;
        RBus_UInt32  res2:26;
    };
}se_se20_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_bist_done_0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se20_wdma_bist_done_0:1;
        RBus_UInt32  se20_afbce_bist_done_0:1;
        RBus_UInt32  res2:26;
    };
}se_se20_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_bist_fail_group:1;
        RBus_UInt32  se20_wdma_bist_fail_group:1;
        RBus_UInt32  se20_afbce_bist_fail_group:1;
        RBus_UInt32  res1:29;
    };
}se_se20_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_bist_fail_0:1;
        RBus_UInt32  se20_cache_bist_fail_1:1;
        RBus_UInt32  se20_cache_bist_fail_2:1;
        RBus_UInt32  se20_cache_bist_fail_3:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  se20_wdma_bist_fail_0:1;
        RBus_UInt32  se20_wdma_bist_fail_1:1;
        RBus_UInt32  se20_afbce_bist_fail_0:1;
        RBus_UInt32  se20_afbce_bist_fail_1:1;
        RBus_UInt32  res2:20;
    };
}se_se20_bist_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_drf_mode_0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se20_wdma_drf_mode_0:1;
        RBus_UInt32  se20_afbce_drf_mode_0:1;
        RBus_UInt32  res2:26;
    };
}se_se20_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_drf_resume_0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se20_wdma_drf_resume_0:1;
        RBus_UInt32  se20_afbce_drf_resume_0:1;
        RBus_UInt32  res2:26;
    };
}se_se20_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_drf_done_0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se20_wdma_drf_done_0:1;
        RBus_UInt32  se20_afbce_drf_done_0:1;
        RBus_UInt32  res2:26;
    };
}se_se20_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_drf_pause_0:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se20_wdma_drf_pause_0:1;
        RBus_UInt32  se20_afbce_drf_pause_0:1;
        RBus_UInt32  res2:26;
    };
}se_se20_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_drf_fail_group:1;
        RBus_UInt32  se20_wdma_drf_fail_group:1;
        RBus_UInt32  se20_afbce_drf_fail_group:1;
        RBus_UInt32  res1:29;
    };
}se_se20_drf_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_drf_fail_0:1;
        RBus_UInt32  se20_cache_drf_fail_1:1;
        RBus_UInt32  se20_cache_drf_fail_2:1;
        RBus_UInt32  se20_cache_drf_fail_3:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  se20_wdma_drf_fail_0:1;
        RBus_UInt32  se20_wdma_drf_fail_1:1;
        RBus_UInt32  se20_afbce_drf_fail_0:1;
        RBus_UInt32  se20_afbce_drf_fail_1:1;
        RBus_UInt32  res2:20;
    };
}se_se20_drf_0_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  se20_cache_testrwm_0:1;
        RBus_UInt32  se20_cache_testrwm_1:1;
        RBus_UInt32  se20_cache_testrwm_2:1;
        RBus_UInt32  se20_cache_testrwm_3:1;
        RBus_UInt32  res1:28;
    };
}se_se20_test_rwm_RBUS;




#endif 


#endif 
