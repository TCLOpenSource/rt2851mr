/**
* @file Merlin5_LGCY_VE_IPMD_Arch_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IPMD_REG_H_
#define _RBUS_IPMD_REG_H_

#include "rbus_types.h"



//  IPMD Register Address
#define  IPMD_CTRL                                                              0x1800F100
#define  IPMD_CTRL_reg_addr                                                      "0xB800F100"
#define  IPMD_CTRL_reg                                                           0xB800F100
#define  IPMD_CTRL_inst_addr                                                     "0x0000"
#define  IPMD_CTRL_inst_adr                                                      "0x0040"
#define  IPMD_CTRL_inst                                                          0x0040
#define  set_IPMD_CTRL_reg(data)                                                 (*((volatile unsigned int*)IPMD_CTRL_reg)=data)
#define  get_IPMD_CTRL_reg                                                       (*((volatile unsigned int*)IPMD_CTRL_reg))
#define  IPMD_CTRL_write_enable7_shift                                           (13)
#define  IPMD_CTRL_Off4x4_shift                                                  (12)
#define  IPMD_CTRL_write_enable6_shift                                           (11)
#define  IPMD_CTRL_Flush_cmd_disable_shift                                       (10)
#define  IPMD_CTRL_write_enable5_shift                                           (9)
#define  IPMD_CTRL_Softrst_disable_shift                                         (8)
#define  IPMD_CTRL_write_enable4_shift                                           (7)
#define  IPMD_CTRL_Umem_bypass_shift                                             (6)
#define  IPMD_CTRL_write_enable3_shift                                           (5)
#define  IPMD_CTRL_SReset_busy_clr_shift                                         (4)
#define  IPMD_CTRL_write_enable2_shift                                           (3)
#define  IPMD_CTRL_Pwmem_override_shift                                          (2)
#define  IPMD_CTRL_write_enable1_shift                                           (1)
#define  IPMD_CTRL_Constr_intra_pred_shift                                       (0)
#define  IPMD_CTRL_write_enable7_mask                                            (0x00002000)
#define  IPMD_CTRL_Off4x4_mask                                                   (0x00001000)
#define  IPMD_CTRL_write_enable6_mask                                            (0x00000800)
#define  IPMD_CTRL_Flush_cmd_disable_mask                                        (0x00000400)
#define  IPMD_CTRL_write_enable5_mask                                            (0x00000200)
#define  IPMD_CTRL_Softrst_disable_mask                                          (0x00000100)
#define  IPMD_CTRL_write_enable4_mask                                            (0x00000080)
#define  IPMD_CTRL_Umem_bypass_mask                                              (0x00000040)
#define  IPMD_CTRL_write_enable3_mask                                            (0x00000020)
#define  IPMD_CTRL_SReset_busy_clr_mask                                          (0x00000010)
#define  IPMD_CTRL_write_enable2_mask                                            (0x00000008)
#define  IPMD_CTRL_Pwmem_override_mask                                           (0x00000004)
#define  IPMD_CTRL_write_enable1_mask                                            (0x00000002)
#define  IPMD_CTRL_Constr_intra_pred_mask                                        (0x00000001)
#define  IPMD_CTRL_write_enable7(data)                                           (0x00002000&((data)<<13))
#define  IPMD_CTRL_Off4x4(data)                                                  (0x00001000&((data)<<12))
#define  IPMD_CTRL_write_enable6(data)                                           (0x00000800&((data)<<11))
#define  IPMD_CTRL_Flush_cmd_disable(data)                                       (0x00000400&((data)<<10))
#define  IPMD_CTRL_write_enable5(data)                                           (0x00000200&((data)<<9))
#define  IPMD_CTRL_Softrst_disable(data)                                         (0x00000100&((data)<<8))
#define  IPMD_CTRL_write_enable4(data)                                           (0x00000080&((data)<<7))
#define  IPMD_CTRL_Umem_bypass(data)                                             (0x00000040&((data)<<6))
#define  IPMD_CTRL_write_enable3(data)                                           (0x00000020&((data)<<5))
#define  IPMD_CTRL_SReset_busy_clr(data)                                         (0x00000010&((data)<<4))
#define  IPMD_CTRL_write_enable2(data)                                           (0x00000008&((data)<<3))
#define  IPMD_CTRL_Pwmem_override(data)                                          (0x00000004&((data)<<2))
#define  IPMD_CTRL_write_enable1(data)                                           (0x00000002&((data)<<1))
#define  IPMD_CTRL_Constr_intra_pred(data)                                       (0x00000001&(data))
#define  IPMD_CTRL_get_write_enable7(data)                                       ((0x00002000&(data))>>13)
#define  IPMD_CTRL_get_Off4x4(data)                                              ((0x00001000&(data))>>12)
#define  IPMD_CTRL_get_write_enable6(data)                                       ((0x00000800&(data))>>11)
#define  IPMD_CTRL_get_Flush_cmd_disable(data)                                   ((0x00000400&(data))>>10)
#define  IPMD_CTRL_get_write_enable5(data)                                       ((0x00000200&(data))>>9)
#define  IPMD_CTRL_get_Softrst_disable(data)                                     ((0x00000100&(data))>>8)
#define  IPMD_CTRL_get_write_enable4(data)                                       ((0x00000080&(data))>>7)
#define  IPMD_CTRL_get_Umem_bypass(data)                                         ((0x00000040&(data))>>6)
#define  IPMD_CTRL_get_write_enable3(data)                                       ((0x00000020&(data))>>5)
#define  IPMD_CTRL_get_SReset_busy_clr(data)                                     ((0x00000010&(data))>>4)
#define  IPMD_CTRL_get_write_enable2(data)                                       ((0x00000008&(data))>>3)
#define  IPMD_CTRL_get_Pwmem_override(data)                                      ((0x00000004&(data))>>2)
#define  IPMD_CTRL_get_write_enable1(data)                                       ((0x00000002&(data))>>1)
#define  IPMD_CTRL_get_Constr_intra_pred(data)                                   (0x00000001&(data))
#define  IPMD_CTRL_write_enable7_src(data)                                       ((0x00002000&(data))>>13)
#define  IPMD_CTRL_Off4x4_src(data)                                              ((0x00001000&(data))>>12)
#define  IPMD_CTRL_write_enable6_src(data)                                       ((0x00000800&(data))>>11)
#define  IPMD_CTRL_Flush_cmd_disable_src(data)                                   ((0x00000400&(data))>>10)
#define  IPMD_CTRL_write_enable5_src(data)                                       ((0x00000200&(data))>>9)
#define  IPMD_CTRL_Softrst_disable_src(data)                                     ((0x00000100&(data))>>8)
#define  IPMD_CTRL_write_enable4_src(data)                                       ((0x00000080&(data))>>7)
#define  IPMD_CTRL_Umem_bypass_src(data)                                         ((0x00000040&(data))>>6)
#define  IPMD_CTRL_write_enable3_src(data)                                       ((0x00000020&(data))>>5)
#define  IPMD_CTRL_SReset_busy_clr_src(data)                                     ((0x00000010&(data))>>4)
#define  IPMD_CTRL_write_enable2_src(data)                                       ((0x00000008&(data))>>3)
#define  IPMD_CTRL_Pwmem_override_src(data)                                      ((0x00000004&(data))>>2)
#define  IPMD_CTRL_write_enable1_src(data)                                       ((0x00000002&(data))>>1)
#define  IPMD_CTRL_Constr_intra_pred_src(data)                                   (0x00000001&(data))

#define  IPMD_INTRA_0                                                           0x1800F10C
#define  IPMD_INTRA_0_reg_addr                                                   "0xB800F10C"
#define  IPMD_INTRA_0_reg                                                        0xB800F10C
#define  IPMD_INTRA_0_inst_addr                                                  "0x0001"
#define  IPMD_INTRA_0_inst_adr                                                   "0x0043"
#define  IPMD_INTRA_0_inst                                                       0x0043
#define  set_IPMD_INTRA_0_reg(data)                                              (*((volatile unsigned int*)IPMD_INTRA_0_reg)=data)
#define  get_IPMD_INTRA_0_reg                                                    (*((volatile unsigned int*)IPMD_INTRA_0_reg))
#define  IPMD_INTRA_intra_flag_shift                                             (0)
#define  IPMD_INTRA_intra_flag_mask                                              (0xFFFFFFFF)
#define  IPMD_INTRA_intra_flag(data)                                             (0xFFFFFFFF&(data))
#define  IPMD_INTRA_get_intra_flag(data)                                         (0xFFFFFFFF&(data))
#define  IPMD_INTRA_intra_flag_src(data)                                         (0xFFFFFFFF&(data))

#define  IPMD_INTRA_1                                                           0x1800F110
#define  IPMD_INTRA_1_reg_addr                                                   "0xB800F110"
#define  IPMD_INTRA_1_reg                                                        0xB800F110
#define  IPMD_INTRA_1_inst_addr                                                  "0x0002"
#define  IPMD_INTRA_1_inst_adr                                                   "0x0044"
#define  IPMD_INTRA_1_inst                                                       0x0044
#define  set_IPMD_INTRA_1_reg(data)                                              (*((volatile unsigned int*)IPMD_INTRA_1_reg)=data)
#define  get_IPMD_INTRA_1_reg                                                    (*((volatile unsigned int*)IPMD_INTRA_1_reg))

#define  IPMD_INTRA_2                                                           0x1800F114
#define  IPMD_INTRA_2_reg_addr                                                   "0xB800F114"
#define  IPMD_INTRA_2_reg                                                        0xB800F114
#define  IPMD_INTRA_2_inst_addr                                                  "0x0003"
#define  IPMD_INTRA_2_inst_adr                                                   "0x0045"
#define  IPMD_INTRA_2_inst                                                       0x0045
#define  set_IPMD_INTRA_2_reg(data)                                              (*((volatile unsigned int*)IPMD_INTRA_2_reg)=data)
#define  get_IPMD_INTRA_2_reg                                                    (*((volatile unsigned int*)IPMD_INTRA_2_reg))

#define  IPMD_INTRA_3                                                           0x1800F118
#define  IPMD_INTRA_3_reg_addr                                                   "0xB800F118"
#define  IPMD_INTRA_3_reg                                                        0xB800F118
#define  IPMD_INTRA_3_inst_addr                                                  "0x0004"
#define  IPMD_INTRA_3_inst_adr                                                   "0x0046"
#define  IPMD_INTRA_3_inst                                                       0x0046
#define  set_IPMD_INTRA_3_reg(data)                                              (*((volatile unsigned int*)IPMD_INTRA_3_reg)=data)
#define  get_IPMD_INTRA_3_reg                                                    (*((volatile unsigned int*)IPMD_INTRA_3_reg))

#define  IPMD_INTR_THRESH                                                       0x1800F120
#define  IPMD_INTR_THRESH_reg_addr                                               "0xB800F120"
#define  IPMD_INTR_THRESH_reg                                                    0xB800F120
#define  IPMD_INTR_THRESH_inst_addr                                              "0x0005"
#define  IPMD_INTR_THRESH_inst_adr                                               "0x0048"
#define  IPMD_INTR_THRESH_inst                                                   0x0048
#define  set_IPMD_INTR_THRESH_reg(data)                                          (*((volatile unsigned int*)IPMD_INTR_THRESH_reg)=data)
#define  get_IPMD_INTR_THRESH_reg                                                (*((volatile unsigned int*)IPMD_INTR_THRESH_reg))
#define  IPMD_INTR_THRESH_Value_shift                                            (0)
#define  IPMD_INTR_THRESH_Value_mask                                             (0x0FFFFFFF)
#define  IPMD_INTR_THRESH_Value(data)                                            (0x0FFFFFFF&(data))
#define  IPMD_INTR_THRESH_get_Value(data)                                        (0x0FFFFFFF&(data))
#define  IPMD_INTR_THRESH_Value_src(data)                                        (0x0FFFFFFF&(data))

#define  IPMD_BUSY                                                              0x1800F124
#define  IPMD_BUSY_reg_addr                                                      "0xB800F124"
#define  IPMD_BUSY_reg                                                           0xB800F124
#define  IPMD_BUSY_inst_addr                                                     "0x0006"
#define  IPMD_BUSY_inst_adr                                                      "0x0049"
#define  IPMD_BUSY_inst                                                          0x0049
#define  set_IPMD_BUSY_reg(data)                                                 (*((volatile unsigned int*)IPMD_BUSY_reg)=data)
#define  get_IPMD_BUSY_reg                                                       (*((volatile unsigned int*)IPMD_BUSY_reg))
#define  IPMD_BUSY_Reach_Thresh_shift                                            (28)
#define  IPMD_BUSY_Count_shift                                                   (0)
#define  IPMD_BUSY_Reach_Thresh_mask                                             (0x10000000)
#define  IPMD_BUSY_Count_mask                                                    (0x0FFFFFFF)
#define  IPMD_BUSY_Reach_Thresh(data)                                            (0x10000000&((data)<<28))
#define  IPMD_BUSY_Count(data)                                                   (0x0FFFFFFF&(data))
#define  IPMD_BUSY_get_Reach_Thresh(data)                                        ((0x10000000&(data))>>28)
#define  IPMD_BUSY_get_Count(data)                                               (0x0FFFFFFF&(data))
#define  IPMD_BUSY_Reach_Thresh_src(data)                                        ((0x10000000&(data))>>28)
#define  IPMD_BUSY_Count_src(data)                                               (0x0FFFFFFF&(data))

#define  IPMD_RESULT0                                                           0x1800F128
#define  IPMD_RESULT0_reg_addr                                                   "0xB800F128"
#define  IPMD_RESULT0_reg                                                        0xB800F128
#define  IPMD_RESULT0_inst_addr                                                  "0x0007"
#define  IPMD_RESULT0_inst_adr                                                   "0x004A"
#define  IPMD_RESULT0_inst                                                       0x004A
#define  set_IPMD_RESULT0_reg(data)                                              (*((volatile unsigned int*)IPMD_RESULT0_reg)=data)
#define  get_IPMD_RESULT0_reg                                                    (*((volatile unsigned int*)IPMD_RESULT0_reg))
#define  IPMD_RESULT0_Luma_Part_shift                                            (28)
#define  IPMD_RESULT0_Luma_Cost_shift                                            (0)
#define  IPMD_RESULT0_Luma_Part_mask                                             (0x30000000)
#define  IPMD_RESULT0_Luma_Cost_mask                                             (0x001FFFFF)
#define  IPMD_RESULT0_Luma_Part(data)                                            (0x30000000&((data)<<28))
#define  IPMD_RESULT0_Luma_Cost(data)                                            (0x001FFFFF&(data))
#define  IPMD_RESULT0_get_Luma_Part(data)                                        ((0x30000000&(data))>>28)
#define  IPMD_RESULT0_get_Luma_Cost(data)                                        (0x001FFFFF&(data))
#define  IPMD_RESULT0_Luma_Part_src(data)                                        ((0x30000000&(data))>>28)
#define  IPMD_RESULT0_Luma_Cost_src(data)                                        (0x001FFFFF&(data))

#define  IPMD_RESULT1                                                           0x1800F12C
#define  IPMD_RESULT1_reg_addr                                                   "0xB800F12C"
#define  IPMD_RESULT1_reg                                                        0xB800F12C
#define  IPMD_RESULT1_inst_addr                                                  "0x0008"
#define  IPMD_RESULT1_inst_adr                                                   "0x004B"
#define  IPMD_RESULT1_inst                                                       0x004B
#define  set_IPMD_RESULT1_reg(data)                                              (*((volatile unsigned int*)IPMD_RESULT1_reg)=data)
#define  get_IPMD_RESULT1_reg                                                    (*((volatile unsigned int*)IPMD_RESULT1_reg))
#define  IPMD_RESULT1_Chroma_Cost_shift                                          (0)
#define  IPMD_RESULT1_Chroma_Cost_mask                                           (0x001FFFFF)
#define  IPMD_RESULT1_Chroma_Cost(data)                                          (0x001FFFFF&(data))
#define  IPMD_RESULT1_get_Chroma_Cost(data)                                      (0x001FFFFF&(data))
#define  IPMD_RESULT1_Chroma_Cost_src(data)                                      (0x001FFFFF&(data))

#define  IPMD_LAMBDA                                                            0x1800F130
#define  IPMD_LAMBDA_reg_addr                                                    "0xB800F130"
#define  IPMD_LAMBDA_reg                                                         0xB800F130
#define  IPMD_LAMBDA_inst_addr                                                   "0x0009"
#define  IPMD_LAMBDA_inst_adr                                                    "0x004C"
#define  IPMD_LAMBDA_inst                                                        0x004C
#define  set_IPMD_LAMBDA_reg(data)                                               (*((volatile unsigned int*)IPMD_LAMBDA_reg)=data)
#define  get_IPMD_LAMBDA_reg                                                     (*((volatile unsigned int*)IPMD_LAMBDA_reg))
#define  IPMD_LAMBDA_Value_shift                                                 (0)
#define  IPMD_LAMBDA_Value_mask                                                  (0x0000007F)
#define  IPMD_LAMBDA_Value(data)                                                 (0x0000007F&(data))
#define  IPMD_LAMBDA_get_Value(data)                                             (0x0000007F&(data))
#define  IPMD_LAMBDA_Value_src(data)                                             (0x0000007F&(data))

#define  IPMD_WEIGHT_0                                                          0x1800F134
#define  IPMD_WEIGHT_0_reg_addr                                                  "0xB800F134"
#define  IPMD_WEIGHT_0_reg                                                       0xB800F134
#define  IPMD_WEIGHT_0_inst_addr                                                 "0x000A"
#define  IPMD_WEIGHT_0_inst_adr                                                  "0x004D"
#define  IPMD_WEIGHT_0_inst                                                      0x004D
#define  set_IPMD_WEIGHT_0_reg(data)                                             (*((volatile unsigned int*)IPMD_WEIGHT_0_reg)=data)
#define  get_IPMD_WEIGHT_0_reg                                                   (*((volatile unsigned int*)IPMD_WEIGHT_0_reg))
#define  IPMD_WEIGHT_Value_shift                                                 (0)
#define  IPMD_WEIGHT_Value_mask                                                  (0x001FFFFF)
#define  IPMD_WEIGHT_Value(data)                                                 (0x001FFFFF&(data))
#define  IPMD_WEIGHT_get_Value(data)                                             (0x001FFFFF&(data))
#define  IPMD_WEIGHT_Value_src(data)                                             (0x001FFFFF&(data))

#define  IPMD_WEIGHT_1                                                          0x1800F138
#define  IPMD_WEIGHT_1_reg_addr                                                  "0xB800F138"
#define  IPMD_WEIGHT_1_reg                                                       0xB800F138
#define  IPMD_WEIGHT_1_inst_addr                                                 "0x000B"
#define  IPMD_WEIGHT_1_inst_adr                                                  "0x004E"
#define  IPMD_WEIGHT_1_inst                                                      0x004E
#define  set_IPMD_WEIGHT_1_reg(data)                                             (*((volatile unsigned int*)IPMD_WEIGHT_1_reg)=data)
#define  get_IPMD_WEIGHT_1_reg                                                   (*((volatile unsigned int*)IPMD_WEIGHT_1_reg))

#define  IPMD_WEIGHT_2                                                          0x1800F13C
#define  IPMD_WEIGHT_2_reg_addr                                                  "0xB800F13C"
#define  IPMD_WEIGHT_2_reg                                                       0xB800F13C
#define  IPMD_WEIGHT_2_inst_addr                                                 "0x000C"
#define  IPMD_WEIGHT_2_inst_adr                                                  "0x004F"
#define  IPMD_WEIGHT_2_inst                                                      0x004F
#define  set_IPMD_WEIGHT_2_reg(data)                                             (*((volatile unsigned int*)IPMD_WEIGHT_2_reg)=data)
#define  get_IPMD_WEIGHT_2_reg                                                   (*((volatile unsigned int*)IPMD_WEIGHT_2_reg))

#define  IPMD_DBUS1                                                             0x1800F140
#define  IPMD_DBUS1_reg_addr                                                     "0xB800F140"
#define  IPMD_DBUS1_reg                                                          0xB800F140
#define  IPMD_DBUS1_inst_addr                                                    "0x000D"
#define  IPMD_DBUS1_inst_adr                                                     "0x0050"
#define  IPMD_DBUS1_inst                                                         0x0050
#define  set_IPMD_DBUS1_reg(data)                                                (*((volatile unsigned int*)IPMD_DBUS1_reg)=data)
#define  get_IPMD_DBUS1_reg                                                      (*((volatile unsigned int*)IPMD_DBUS1_reg))
#define  IPMD_DBUS1_GenPulse_shift                                               (31)
#define  IPMD_DBUS1_DbgCtrl_shift                                                (28)
#define  IPMD_DBUS1_PicCount_shift                                               (14)
#define  IPMD_DBUS1_MbAddrX_shift                                                (7)
#define  IPMD_DBUS1_MbAddrY_shift                                                (0)
#define  IPMD_DBUS1_GenPulse_mask                                                (0x80000000)
#define  IPMD_DBUS1_DbgCtrl_mask                                                 (0x70000000)
#define  IPMD_DBUS1_PicCount_mask                                                (0x0FFFC000)
#define  IPMD_DBUS1_MbAddrX_mask                                                 (0x00003F80)
#define  IPMD_DBUS1_MbAddrY_mask                                                 (0x0000007F)
#define  IPMD_DBUS1_GenPulse(data)                                               (0x80000000&((data)<<31))
#define  IPMD_DBUS1_DbgCtrl(data)                                                (0x70000000&((data)<<28))
#define  IPMD_DBUS1_PicCount(data)                                               (0x0FFFC000&((data)<<14))
#define  IPMD_DBUS1_MbAddrX(data)                                                (0x00003F80&((data)<<7))
#define  IPMD_DBUS1_MbAddrY(data)                                                (0x0000007F&(data))
#define  IPMD_DBUS1_get_GenPulse(data)                                           ((0x80000000&(data))>>31)
#define  IPMD_DBUS1_get_DbgCtrl(data)                                            ((0x70000000&(data))>>28)
#define  IPMD_DBUS1_get_PicCount(data)                                           ((0x0FFFC000&(data))>>14)
#define  IPMD_DBUS1_get_MbAddrX(data)                                            ((0x00003F80&(data))>>7)
#define  IPMD_DBUS1_get_MbAddrY(data)                                            (0x0000007F&(data))
#define  IPMD_DBUS1_GenPulse_src(data)                                           ((0x80000000&(data))>>31)
#define  IPMD_DBUS1_DbgCtrl_src(data)                                            ((0x70000000&(data))>>28)
#define  IPMD_DBUS1_PicCount_src(data)                                           ((0x0FFFC000&(data))>>14)
#define  IPMD_DBUS1_MbAddrX_src(data)                                            ((0x00003F80&(data))>>7)
#define  IPMD_DBUS1_MbAddrY_src(data)                                            (0x0000007F&(data))

#define  IPMD_DBUS2                                                             0x1800F144
#define  IPMD_DBUS2_reg_addr                                                     "0xB800F144"
#define  IPMD_DBUS2_reg                                                          0xB800F144
#define  IPMD_DBUS2_inst_addr                                                    "0x000E"
#define  IPMD_DBUS2_inst_adr                                                     "0x0051"
#define  IPMD_DBUS2_inst                                                         0x0051
#define  set_IPMD_DBUS2_reg(data)                                                (*((volatile unsigned int*)IPMD_DBUS2_reg)=data)
#define  get_IPMD_DBUS2_reg                                                      (*((volatile unsigned int*)IPMD_DBUS2_reg))
#define  IPMD_DBUS2_DbgCtrl_shift                                                (0)
#define  IPMD_DBUS2_DbgCtrl_mask                                                 (0xFFFFFFFF)
#define  IPMD_DBUS2_DbgCtrl(data)                                                (0xFFFFFFFF&(data))
#define  IPMD_DBUS2_get_DbgCtrl(data)                                            (0xFFFFFFFF&(data))
#define  IPMD_DBUS2_DbgCtrl_src(data)                                            (0xFFFFFFFF&(data))

#define  IPMD_COST0                                                             0x1800F148
#define  IPMD_COST0_reg_addr                                                     "0xB800F148"
#define  IPMD_COST0_reg                                                          0xB800F148
#define  IPMD_COST0_inst_addr                                                    "0x000F"
#define  IPMD_COST0_inst_adr                                                     "0x0052"
#define  IPMD_COST0_inst                                                         0x0052
#define  set_IPMD_COST0_reg(data)                                                (*((volatile unsigned int*)IPMD_COST0_reg)=data)
#define  get_IPMD_COST0_reg                                                      (*((volatile unsigned int*)IPMD_COST0_reg))
#define  IPMD_COST0_R_16x16_0_shift                                              (28)
#define  IPMD_COST0_R_16x16_1_shift                                              (24)
#define  IPMD_COST0_R_16x16_2_shift                                              (20)
#define  IPMD_COST0_R_16x16_3_shift                                              (16)
#define  IPMD_COST0_R_chroma_0_shift                                             (12)
#define  IPMD_COST0_R_chroma_1_shift                                             (8)
#define  IPMD_COST0_R_chroma_2_shift                                             (4)
#define  IPMD_COST0_R_chroma_3_shift                                             (0)
#define  IPMD_COST0_R_16x16_0_mask                                               (0xF0000000)
#define  IPMD_COST0_R_16x16_1_mask                                               (0x0F000000)
#define  IPMD_COST0_R_16x16_2_mask                                               (0x00F00000)
#define  IPMD_COST0_R_16x16_3_mask                                               (0x000F0000)
#define  IPMD_COST0_R_chroma_0_mask                                              (0x0000F000)
#define  IPMD_COST0_R_chroma_1_mask                                              (0x00000F00)
#define  IPMD_COST0_R_chroma_2_mask                                              (0x000000F0)
#define  IPMD_COST0_R_chroma_3_mask                                              (0x0000000F)
#define  IPMD_COST0_R_16x16_0(data)                                              (0xF0000000&((data)<<28))
#define  IPMD_COST0_R_16x16_1(data)                                              (0x0F000000&((data)<<24))
#define  IPMD_COST0_R_16x16_2(data)                                              (0x00F00000&((data)<<20))
#define  IPMD_COST0_R_16x16_3(data)                                              (0x000F0000&((data)<<16))
#define  IPMD_COST0_R_chroma_0(data)                                             (0x0000F000&((data)<<12))
#define  IPMD_COST0_R_chroma_1(data)                                             (0x00000F00&((data)<<8))
#define  IPMD_COST0_R_chroma_2(data)                                             (0x000000F0&((data)<<4))
#define  IPMD_COST0_R_chroma_3(data)                                             (0x0000000F&(data))
#define  IPMD_COST0_get_R_16x16_0(data)                                          ((0xF0000000&(data))>>28)
#define  IPMD_COST0_get_R_16x16_1(data)                                          ((0x0F000000&(data))>>24)
#define  IPMD_COST0_get_R_16x16_2(data)                                          ((0x00F00000&(data))>>20)
#define  IPMD_COST0_get_R_16x16_3(data)                                          ((0x000F0000&(data))>>16)
#define  IPMD_COST0_get_R_chroma_0(data)                                         ((0x0000F000&(data))>>12)
#define  IPMD_COST0_get_R_chroma_1(data)                                         ((0x00000F00&(data))>>8)
#define  IPMD_COST0_get_R_chroma_2(data)                                         ((0x000000F0&(data))>>4)
#define  IPMD_COST0_get_R_chroma_3(data)                                         (0x0000000F&(data))
#define  IPMD_COST0_R_16x16_0_src(data)                                          ((0xF0000000&(data))>>28)
#define  IPMD_COST0_R_16x16_1_src(data)                                          ((0x0F000000&(data))>>24)
#define  IPMD_COST0_R_16x16_2_src(data)                                          ((0x00F00000&(data))>>20)
#define  IPMD_COST0_R_16x16_3_src(data)                                          ((0x000F0000&(data))>>16)
#define  IPMD_COST0_R_chroma_0_src(data)                                         ((0x0000F000&(data))>>12)
#define  IPMD_COST0_R_chroma_1_src(data)                                         ((0x00000F00&(data))>>8)
#define  IPMD_COST0_R_chroma_2_src(data)                                         ((0x000000F0&(data))>>4)
#define  IPMD_COST0_R_chroma_3_src(data)                                         (0x0000000F&(data))

#define  IPMD_COST1                                                             0x1800F14C
#define  IPMD_COST1_reg_addr                                                     "0xB800F14C"
#define  IPMD_COST1_reg                                                          0xB800F14C
#define  IPMD_COST1_inst_addr                                                    "0x0010"
#define  IPMD_COST1_inst_adr                                                     "0x0053"
#define  IPMD_COST1_inst                                                         0x0053
#define  set_IPMD_COST1_reg(data)                                                (*((volatile unsigned int*)IPMD_COST1_reg)=data)
#define  get_IPMD_COST1_reg                                                      (*((volatile unsigned int*)IPMD_COST1_reg))
#define  IPMD_COST1_R_same_8x8_shift                                             (12)
#define  IPMD_COST1_R_diff_8x8_shift                                             (8)
#define  IPMD_COST1_R_same_4x4_shift                                             (4)
#define  IPMD_COST1_R_diff_4x4_shift                                             (0)
#define  IPMD_COST1_R_same_8x8_mask                                              (0x0000F000)
#define  IPMD_COST1_R_diff_8x8_mask                                              (0x00000F00)
#define  IPMD_COST1_R_same_4x4_mask                                              (0x000000F0)
#define  IPMD_COST1_R_diff_4x4_mask                                              (0x0000000F)
#define  IPMD_COST1_R_same_8x8(data)                                             (0x0000F000&((data)<<12))
#define  IPMD_COST1_R_diff_8x8(data)                                             (0x00000F00&((data)<<8))
#define  IPMD_COST1_R_same_4x4(data)                                             (0x000000F0&((data)<<4))
#define  IPMD_COST1_R_diff_4x4(data)                                             (0x0000000F&(data))
#define  IPMD_COST1_get_R_same_8x8(data)                                         ((0x0000F000&(data))>>12)
#define  IPMD_COST1_get_R_diff_8x8(data)                                         ((0x00000F00&(data))>>8)
#define  IPMD_COST1_get_R_same_4x4(data)                                         ((0x000000F0&(data))>>4)
#define  IPMD_COST1_get_R_diff_4x4(data)                                         (0x0000000F&(data))
#define  IPMD_COST1_R_same_8x8_src(data)                                         ((0x0000F000&(data))>>12)
#define  IPMD_COST1_R_diff_8x8_src(data)                                         ((0x00000F00&(data))>>8)
#define  IPMD_COST1_R_same_4x4_src(data)                                         ((0x000000F0&(data))>>4)
#define  IPMD_COST1_R_diff_4x4_src(data)                                         (0x0000000F&(data))

#define  IPMD_INTRAMODE_0                                                       0x1800F150
#define  IPMD_INTRAMODE_0_reg_addr                                               "0xB800F150"
#define  IPMD_INTRAMODE_0_reg                                                    0xB800F150
#define  IPMD_INTRAMODE_0_inst_addr                                              "0x0011"
#define  IPMD_INTRAMODE_0_inst_adr                                               "0x0054"
#define  IPMD_INTRAMODE_0_inst                                                   0x0054
#define  set_IPMD_INTRAMODE_0_reg(data)                                          (*((volatile unsigned int*)IPMD_INTRAMODE_0_reg)=data)
#define  get_IPMD_INTRAMODE_0_reg                                                (*((volatile unsigned int*)IPMD_INTRAMODE_0_reg))
#define  IPMD_INTRAMODE_Value_shift                                              (0)
#define  IPMD_INTRAMODE_Value_mask                                               (0xFFFFFFFF)
#define  IPMD_INTRAMODE_Value(data)                                              (0xFFFFFFFF&(data))
#define  IPMD_INTRAMODE_get_Value(data)                                          (0xFFFFFFFF&(data))
#define  IPMD_INTRAMODE_Value_src(data)                                          (0xFFFFFFFF&(data))

#define  IPMD_INTRAMODE_1                                                       0x1800F154
#define  IPMD_INTRAMODE_1_reg_addr                                               "0xB800F154"
#define  IPMD_INTRAMODE_1_reg                                                    0xB800F154
#define  IPMD_INTRAMODE_1_inst_addr                                              "0x0012"
#define  IPMD_INTRAMODE_1_inst_adr                                               "0x0055"
#define  IPMD_INTRAMODE_1_inst                                                   0x0055
#define  set_IPMD_INTRAMODE_1_reg(data)                                          (*((volatile unsigned int*)IPMD_INTRAMODE_1_reg)=data)
#define  get_IPMD_INTRAMODE_1_reg                                                (*((volatile unsigned int*)IPMD_INTRAMODE_1_reg))

#define  IPMD_INTRAMODE_2                                                       0x1800F158
#define  IPMD_INTRAMODE_2_reg_addr                                               "0xB800F158"
#define  IPMD_INTRAMODE_2_reg                                                    0xB800F158
#define  IPMD_INTRAMODE_2_inst_addr                                              "0x0013"
#define  IPMD_INTRAMODE_2_inst_adr                                               "0x0056"
#define  IPMD_INTRAMODE_2_inst                                                   0x0056
#define  set_IPMD_INTRAMODE_2_reg(data)                                          (*((volatile unsigned int*)IPMD_INTRAMODE_2_reg)=data)
#define  get_IPMD_INTRAMODE_2_reg                                                (*((volatile unsigned int*)IPMD_INTRAMODE_2_reg))

#define  IPMD_REMMODE_0                                                         0x1800F15C
#define  IPMD_REMMODE_0_reg_addr                                                 "0xB800F15C"
#define  IPMD_REMMODE_0_reg                                                      0xB800F15C
#define  IPMD_REMMODE_0_inst_addr                                                "0x0014"
#define  IPMD_REMMODE_0_inst_adr                                                 "0x0057"
#define  IPMD_REMMODE_0_inst                                                     0x0057
#define  set_IPMD_REMMODE_0_reg(data)                                            (*((volatile unsigned int*)IPMD_REMMODE_0_reg)=data)
#define  get_IPMD_REMMODE_0_reg                                                  (*((volatile unsigned int*)IPMD_REMMODE_0_reg))
#define  IPMD_REMMODE_Luma_shift                                                 (0)
#define  IPMD_REMMODE_Luma_mask                                                  (0xFFFFFFFF)
#define  IPMD_REMMODE_Luma(data)                                                 (0xFFFFFFFF&(data))
#define  IPMD_REMMODE_get_Luma(data)                                             (0xFFFFFFFF&(data))
#define  IPMD_REMMODE_Luma_src(data)                                             (0xFFFFFFFF&(data))

#define  IPMD_REMMODE_1                                                         0x1800F160
#define  IPMD_REMMODE_1_reg_addr                                                 "0xB800F160"
#define  IPMD_REMMODE_1_reg                                                      0xB800F160
#define  IPMD_REMMODE_1_inst_addr                                                "0x0015"
#define  IPMD_REMMODE_1_inst_adr                                                 "0x0058"
#define  IPMD_REMMODE_1_inst                                                     0x0058
#define  set_IPMD_REMMODE_1_reg(data)                                            (*((volatile unsigned int*)IPMD_REMMODE_1_reg)=data)
#define  get_IPMD_REMMODE_1_reg                                                  (*((volatile unsigned int*)IPMD_REMMODE_1_reg))

#define  IPMD_REMMODE_2                                                         0x1800F164
#define  IPMD_REMMODE_2_reg_addr                                                 "0xB800F164"
#define  IPMD_REMMODE_2_reg                                                      0xB800F164
#define  IPMD_REMMODE_2_inst_addr                                                "0x0016"
#define  IPMD_REMMODE_2_inst_adr                                                 "0x0059"
#define  IPMD_REMMODE_2_inst                                                     0x0059
#define  set_IPMD_REMMODE_2_reg(data)                                            (*((volatile unsigned int*)IPMD_REMMODE_2_reg)=data)
#define  get_IPMD_REMMODE_2_reg                                                  (*((volatile unsigned int*)IPMD_REMMODE_2_reg))

#define  IPMD_SLICE                                                             0x1800F168
#define  IPMD_SLICE_reg_addr                                                     "0xB800F168"
#define  IPMD_SLICE_reg                                                          0xB800F168
#define  IPMD_SLICE_inst_addr                                                    "0x0017"
#define  IPMD_SLICE_inst_adr                                                     "0x005A"
#define  IPMD_SLICE_inst                                                         0x005A
#define  set_IPMD_SLICE_reg(data)                                                (*((volatile unsigned int*)IPMD_SLICE_reg)=data)
#define  get_IPMD_SLICE_reg                                                      (*((volatile unsigned int*)IPMD_SLICE_reg))
#define  IPMD_SLICE_y_shift                                                      (0)
#define  IPMD_SLICE_y_mask                                                       (0x0000007F)
#define  IPMD_SLICE_y(data)                                                      (0x0000007F&(data))
#define  IPMD_SLICE_get_y(data)                                                  (0x0000007F&(data))
#define  IPMD_SLICE_y_src(data)                                                  (0x0000007F&(data))

#define  IPMD_NPM_CTRL                                                          0x1800F16C
#define  IPMD_NPM_CTRL_reg_addr                                                  "0xB800F16C"
#define  IPMD_NPM_CTRL_reg                                                       0xB800F16C
#define  IPMD_NPM_CTRL_inst_addr                                                 "0x0018"
#define  IPMD_NPM_CTRL_inst_adr                                                  "0x005B"
#define  IPMD_NPM_CTRL_inst                                                      0x005B
#define  set_IPMD_NPM_CTRL_reg(data)                                             (*((volatile unsigned int*)IPMD_NPM_CTRL_reg)=data)
#define  get_IPMD_NPM_CTRL_reg                                                   (*((volatile unsigned int*)IPMD_NPM_CTRL_reg))
#define  IPMD_NPM_CTRL_Write_Pulse_shift                                         (31)
#define  IPMD_NPM_CTRL_Read_Pulse_shift                                          (30)
#define  IPMD_NPM_CTRL_Address_shift                                             (20)
#define  IPMD_NPM_CTRL_IntraSel_shift                                            (16)
#define  IPMD_NPM_CTRL_SubPart0_shift                                            (12)
#define  IPMD_NPM_CTRL_SubPart1_shift                                            (8)
#define  IPMD_NPM_CTRL_SubPart2_shift                                            (4)
#define  IPMD_NPM_CTRL_SubPart3_shift                                            (0)
#define  IPMD_NPM_CTRL_Write_Pulse_mask                                          (0x80000000)
#define  IPMD_NPM_CTRL_Read_Pulse_mask                                           (0x40000000)
#define  IPMD_NPM_CTRL_Address_mask                                              (0x07F00000)
#define  IPMD_NPM_CTRL_IntraSel_mask                                             (0x00030000)
#define  IPMD_NPM_CTRL_SubPart0_mask                                             (0x0000F000)
#define  IPMD_NPM_CTRL_SubPart1_mask                                             (0x00000F00)
#define  IPMD_NPM_CTRL_SubPart2_mask                                             (0x000000F0)
#define  IPMD_NPM_CTRL_SubPart3_mask                                             (0x0000000F)
#define  IPMD_NPM_CTRL_Write_Pulse(data)                                         (0x80000000&((data)<<31))
#define  IPMD_NPM_CTRL_Read_Pulse(data)                                          (0x40000000&((data)<<30))
#define  IPMD_NPM_CTRL_Address(data)                                             (0x07F00000&((data)<<20))
#define  IPMD_NPM_CTRL_IntraSel(data)                                            (0x00030000&((data)<<16))
#define  IPMD_NPM_CTRL_SubPart0(data)                                            (0x0000F000&((data)<<12))
#define  IPMD_NPM_CTRL_SubPart1(data)                                            (0x00000F00&((data)<<8))
#define  IPMD_NPM_CTRL_SubPart2(data)                                            (0x000000F0&((data)<<4))
#define  IPMD_NPM_CTRL_SubPart3(data)                                            (0x0000000F&(data))
#define  IPMD_NPM_CTRL_get_Write_Pulse(data)                                     ((0x80000000&(data))>>31)
#define  IPMD_NPM_CTRL_get_Read_Pulse(data)                                      ((0x40000000&(data))>>30)
#define  IPMD_NPM_CTRL_get_Address(data)                                         ((0x07F00000&(data))>>20)
#define  IPMD_NPM_CTRL_get_IntraSel(data)                                        ((0x00030000&(data))>>16)
#define  IPMD_NPM_CTRL_get_SubPart0(data)                                        ((0x0000F000&(data))>>12)
#define  IPMD_NPM_CTRL_get_SubPart1(data)                                        ((0x00000F00&(data))>>8)
#define  IPMD_NPM_CTRL_get_SubPart2(data)                                        ((0x000000F0&(data))>>4)
#define  IPMD_NPM_CTRL_get_SubPart3(data)                                        (0x0000000F&(data))
#define  IPMD_NPM_CTRL_Write_Pulse_src(data)                                     ((0x80000000&(data))>>31)
#define  IPMD_NPM_CTRL_Read_Pulse_src(data)                                      ((0x40000000&(data))>>30)
#define  IPMD_NPM_CTRL_Address_src(data)                                         ((0x07F00000&(data))>>20)
#define  IPMD_NPM_CTRL_IntraSel_src(data)                                        ((0x00030000&(data))>>16)
#define  IPMD_NPM_CTRL_SubPart0_src(data)                                        ((0x0000F000&(data))>>12)
#define  IPMD_NPM_CTRL_SubPart1_src(data)                                        ((0x00000F00&(data))>>8)
#define  IPMD_NPM_CTRL_SubPart2_src(data)                                        ((0x000000F0&(data))>>4)
#define  IPMD_NPM_CTRL_SubPart3_src(data)                                        (0x0000000F&(data))

#define  IPMD_ULPRED                                                            0x1800F170
#define  IPMD_ULPRED_reg_addr                                                    "0xB800F170"
#define  IPMD_ULPRED_reg                                                         0xB800F170
#define  IPMD_ULPRED_inst_addr                                                   "0x0019"
#define  IPMD_ULPRED_inst_adr                                                    "0x005C"
#define  IPMD_ULPRED_inst                                                        0x005C
#define  set_IPMD_ULPRED_reg(data)                                               (*((volatile unsigned int*)IPMD_ULPRED_reg)=data)
#define  get_IPMD_ULPRED_reg                                                     (*((volatile unsigned int*)IPMD_ULPRED_reg))
#define  IPMD_ULPRED_Luma_wr_shift                                               (26)
#define  IPMD_ULPRED_CB_wr_shift                                                 (25)
#define  IPMD_ULPRED_CR_wr_shift                                                 (24)
#define  IPMD_ULPRED_Luma_shift                                                  (16)
#define  IPMD_ULPRED_CB_shift                                                    (8)
#define  IPMD_ULPRED_CR_shift                                                    (0)
#define  IPMD_ULPRED_Luma_wr_mask                                                (0x04000000)
#define  IPMD_ULPRED_CB_wr_mask                                                  (0x02000000)
#define  IPMD_ULPRED_CR_wr_mask                                                  (0x01000000)
#define  IPMD_ULPRED_Luma_mask                                                   (0x00FF0000)
#define  IPMD_ULPRED_CB_mask                                                     (0x0000FF00)
#define  IPMD_ULPRED_CR_mask                                                     (0x000000FF)
#define  IPMD_ULPRED_Luma_wr(data)                                               (0x04000000&((data)<<26))
#define  IPMD_ULPRED_CB_wr(data)                                                 (0x02000000&((data)<<25))
#define  IPMD_ULPRED_CR_wr(data)                                                 (0x01000000&((data)<<24))
#define  IPMD_ULPRED_Luma(data)                                                  (0x00FF0000&((data)<<16))
#define  IPMD_ULPRED_CB(data)                                                    (0x0000FF00&((data)<<8))
#define  IPMD_ULPRED_CR(data)                                                    (0x000000FF&(data))
#define  IPMD_ULPRED_get_Luma_wr(data)                                           ((0x04000000&(data))>>26)
#define  IPMD_ULPRED_get_CB_wr(data)                                             ((0x02000000&(data))>>25)
#define  IPMD_ULPRED_get_CR_wr(data)                                             ((0x01000000&(data))>>24)
#define  IPMD_ULPRED_get_Luma(data)                                              ((0x00FF0000&(data))>>16)
#define  IPMD_ULPRED_get_CB(data)                                                ((0x0000FF00&(data))>>8)
#define  IPMD_ULPRED_get_CR(data)                                                (0x000000FF&(data))
#define  IPMD_ULPRED_Luma_wr_src(data)                                           ((0x04000000&(data))>>26)
#define  IPMD_ULPRED_CB_wr_src(data)                                             ((0x02000000&(data))>>25)
#define  IPMD_ULPRED_CR_wr_src(data)                                             ((0x01000000&(data))>>24)
#define  IPMD_ULPRED_Luma_src(data)                                              ((0x00FF0000&(data))>>16)
#define  IPMD_ULPRED_CB_src(data)                                                ((0x0000FF00&(data))>>8)
#define  IPMD_ULPRED_CR_src(data)                                                (0x000000FF&(data))

#define  IPMD_CBPCTRL                                                           0x1800F174
#define  IPMD_CBPCTRL_reg_addr                                                   "0xB800F174"
#define  IPMD_CBPCTRL_reg                                                        0xB800F174
#define  IPMD_CBPCTRL_inst_addr                                                  "0x001A"
#define  IPMD_CBPCTRL_inst_adr                                                   "0x005D"
#define  IPMD_CBPCTRL_inst                                                       0x005D
#define  set_IPMD_CBPCTRL_reg(data)                                              (*((volatile unsigned int*)IPMD_CBPCTRL_reg)=data)
#define  get_IPMD_CBPCTRL_reg                                                    (*((volatile unsigned int*)IPMD_CBPCTRL_reg))
#define  IPMD_CBPCTRL_IntraLumaStyleSel_shift                                    (5)
#define  IPMD_CBPCTRL_IntraLumaStyleSel_mask                                     (0x00000020)
#define  IPMD_CBPCTRL_IntraLumaStyleSel(data)                                    (0x00000020&((data)<<5))
#define  IPMD_CBPCTRL_get_IntraLumaStyleSel(data)                                ((0x00000020&(data))>>5)
#define  IPMD_CBPCTRL_IntraLumaStyleSel_src(data)                                ((0x00000020&(data))>>5)

#define  IPMD_SUMRUNCOST_4X4_0                                                  0x1800F198
#define  IPMD_SUMRUNCOST_4X4_0_reg_addr                                          "0xB800F198"
#define  IPMD_SUMRUNCOST_4X4_0_reg                                               0xB800F198
#define  IPMD_SUMRUNCOST_4X4_0_inst_addr                                         "0x001B"
#define  IPMD_SUMRUNCOST_4X4_0_inst_adr                                          "0x0066"
#define  IPMD_SUMRUNCOST_4X4_0_inst                                              0x0066
#define  set_IPMD_SUMRUNCOST_4X4_0_reg(data)                                     (*((volatile unsigned int*)IPMD_SUMRUNCOST_4X4_0_reg)=data)
#define  get_IPMD_SUMRUNCOST_4X4_0_reg                                           (*((volatile unsigned int*)IPMD_SUMRUNCOST_4X4_0_reg))
#define  IPMD_SUMRUNCOST_4X4_Lookup_shift                                        (0)
#define  IPMD_SUMRUNCOST_4X4_Lookup_mask                                         (0xFFFFFFFF)
#define  IPMD_SUMRUNCOST_4X4_Lookup(data)                                        (0xFFFFFFFF&(data))
#define  IPMD_SUMRUNCOST_4X4_get_Lookup(data)                                    (0xFFFFFFFF&(data))
#define  IPMD_SUMRUNCOST_4X4_Lookup_src(data)                                    (0xFFFFFFFF&(data))

#define  IPMD_SUMRUNCOST_4X4_1                                                  0x1800F19C
#define  IPMD_SUMRUNCOST_4X4_1_reg_addr                                          "0xB800F19C"
#define  IPMD_SUMRUNCOST_4X4_1_reg                                               0xB800F19C
#define  IPMD_SUMRUNCOST_4X4_1_inst_addr                                         "0x001C"
#define  IPMD_SUMRUNCOST_4X4_1_inst_adr                                          "0x0067"
#define  IPMD_SUMRUNCOST_4X4_1_inst                                              0x0067
#define  set_IPMD_SUMRUNCOST_4X4_1_reg(data)                                     (*((volatile unsigned int*)IPMD_SUMRUNCOST_4X4_1_reg)=data)
#define  get_IPMD_SUMRUNCOST_4X4_1_reg                                           (*((volatile unsigned int*)IPMD_SUMRUNCOST_4X4_1_reg))

#define  IPMD_MBLEVEL_DROP                                                      0x1800F1A0
#define  IPMD_MBLEVEL_DROP_reg_addr                                              "0xB800F1A0"
#define  IPMD_MBLEVEL_DROP_reg                                                   0xB800F1A0
#define  IPMD_MBLEVEL_DROP_inst_addr                                             "0x001D"
#define  IPMD_MBLEVEL_DROP_inst_adr                                              "0x0068"
#define  IPMD_MBLEVEL_DROP_inst                                                  0x0068
#define  set_IPMD_MBLEVEL_DROP_reg(data)                                         (*((volatile unsigned int*)IPMD_MBLEVEL_DROP_reg)=data)
#define  get_IPMD_MBLEVEL_DROP_reg                                               (*((volatile unsigned int*)IPMD_MBLEVEL_DROP_reg))
#define  IPMD_MBLEVEL_DROP_Enable_shift                                          (13)
#define  IPMD_MBLEVEL_DROP_Thresh_shift                                          (0)
#define  IPMD_MBLEVEL_DROP_Enable_mask                                           (0x00002000)
#define  IPMD_MBLEVEL_DROP_Thresh_mask                                           (0x00001FFF)
#define  IPMD_MBLEVEL_DROP_Enable(data)                                          (0x00002000&((data)<<13))
#define  IPMD_MBLEVEL_DROP_Thresh(data)                                          (0x00001FFF&(data))
#define  IPMD_MBLEVEL_DROP_get_Enable(data)                                      ((0x00002000&(data))>>13)
#define  IPMD_MBLEVEL_DROP_get_Thresh(data)                                      (0x00001FFF&(data))
#define  IPMD_MBLEVEL_DROP_Enable_src(data)                                      ((0x00002000&(data))>>13)
#define  IPMD_MBLEVEL_DROP_Thresh_src(data)                                      (0x00001FFF&(data))

#define  IPMD_QUANTIZER                                                         0x1800F1A4
#define  IPMD_QUANTIZER_reg_addr                                                 "0xB800F1A4"
#define  IPMD_QUANTIZER_reg                                                      0xB800F1A4
#define  IPMD_QUANTIZER_inst_addr                                                "0x001E"
#define  IPMD_QUANTIZER_inst_adr                                                 "0x0069"
#define  IPMD_QUANTIZER_inst                                                     0x0069
#define  set_IPMD_QUANTIZER_reg(data)                                            (*((volatile unsigned int*)IPMD_QUANTIZER_reg)=data)
#define  get_IPMD_QUANTIZER_reg                                                  (*((volatile unsigned int*)IPMD_QUANTIZER_reg))
#define  IPMD_QUANTIZER_write_enable3_shift                                      (15)
#define  IPMD_QUANTIZER_flat_qtable_shift                                        (14)
#define  IPMD_QUANTIZER_write_enable2_shift                                      (13)
#define  IPMD_QUANTIZER_qpy_shift                                                (7)
#define  IPMD_QUANTIZER_write_enable1_shift                                      (6)
#define  IPMD_QUANTIZER_qpc_shift                                                (0)
#define  IPMD_QUANTIZER_write_enable3_mask                                       (0x00008000)
#define  IPMD_QUANTIZER_flat_qtable_mask                                         (0x00004000)
#define  IPMD_QUANTIZER_write_enable2_mask                                       (0x00002000)
#define  IPMD_QUANTIZER_qpy_mask                                                 (0x00001F80)
#define  IPMD_QUANTIZER_write_enable1_mask                                       (0x00000040)
#define  IPMD_QUANTIZER_qpc_mask                                                 (0x0000003F)
#define  IPMD_QUANTIZER_write_enable3(data)                                      (0x00008000&((data)<<15))
#define  IPMD_QUANTIZER_flat_qtable(data)                                        (0x00004000&((data)<<14))
#define  IPMD_QUANTIZER_write_enable2(data)                                      (0x00002000&((data)<<13))
#define  IPMD_QUANTIZER_qpy(data)                                                (0x00001F80&((data)<<7))
#define  IPMD_QUANTIZER_write_enable1(data)                                      (0x00000040&((data)<<6))
#define  IPMD_QUANTIZER_qpc(data)                                                (0x0000003F&(data))
#define  IPMD_QUANTIZER_get_write_enable3(data)                                  ((0x00008000&(data))>>15)
#define  IPMD_QUANTIZER_get_flat_qtable(data)                                    ((0x00004000&(data))>>14)
#define  IPMD_QUANTIZER_get_write_enable2(data)                                  ((0x00002000&(data))>>13)
#define  IPMD_QUANTIZER_get_qpy(data)                                            ((0x00001F80&(data))>>7)
#define  IPMD_QUANTIZER_get_write_enable1(data)                                  ((0x00000040&(data))>>6)
#define  IPMD_QUANTIZER_get_qpc(data)                                            (0x0000003F&(data))
#define  IPMD_QUANTIZER_write_enable3_src(data)                                  ((0x00008000&(data))>>15)
#define  IPMD_QUANTIZER_flat_qtable_src(data)                                    ((0x00004000&(data))>>14)
#define  IPMD_QUANTIZER_write_enable2_src(data)                                  ((0x00002000&(data))>>13)
#define  IPMD_QUANTIZER_qpy_src(data)                                            ((0x00001F80&(data))>>7)
#define  IPMD_QUANTIZER_write_enable1_src(data)                                  ((0x00000040&(data))>>6)
#define  IPMD_QUANTIZER_qpc_src(data)                                            (0x0000003F&(data))

#define  IPMD_MBINFO                                                            0x1800F1A8
#define  IPMD_MBINFO_reg_addr                                                    "0xB800F1A8"
#define  IPMD_MBINFO_reg                                                         0xB800F1A8
#define  IPMD_MBINFO_inst_addr                                                   "0x001F"
#define  IPMD_MBINFO_inst_adr                                                    "0x006A"
#define  IPMD_MBINFO_inst                                                        0x006A
#define  set_IPMD_MBINFO_reg(data)                                               (*((volatile unsigned int*)IPMD_MBINFO_reg)=data)
#define  get_IPMD_MBINFO_reg                                                     (*((volatile unsigned int*)IPMD_MBINFO_reg))
#define  IPMD_MBINFO_PictureType_shift                                           (21)
#define  IPMD_MBINFO_PictureType_mask                                            (0x00600000)
#define  IPMD_MBINFO_PictureType(data)                                           (0x00600000&((data)<<21))
#define  IPMD_MBINFO_get_PictureType(data)                                       ((0x00600000&(data))>>21)
#define  IPMD_MBINFO_PictureType_src(data)                                       ((0x00600000&(data))>>21)

#define  IPMD_CBP                                                               0x1800F1AC
#define  IPMD_CBP_reg_addr                                                       "0xB800F1AC"
#define  IPMD_CBP_reg                                                            0xB800F1AC
#define  IPMD_CBP_inst_addr                                                      "0x0020"
#define  IPMD_CBP_inst_adr                                                       "0x006B"
#define  IPMD_CBP_inst                                                           0x006B
#define  set_IPMD_CBP_reg(data)                                                  (*((volatile unsigned int*)IPMD_CBP_reg)=data)
#define  get_IPMD_CBP_reg                                                        (*((volatile unsigned int*)IPMD_CBP_reg))
#define  IPMD_CBP_cbp_stay_shift                                                 (4)
#define  IPMD_CBP_cbp_base_shift                                                 (0)
#define  IPMD_CBP_cbp_stay_mask                                                  (0x000000F0)
#define  IPMD_CBP_cbp_base_mask                                                  (0x0000000F)
#define  IPMD_CBP_cbp_stay(data)                                                 (0x000000F0&((data)<<4))
#define  IPMD_CBP_cbp_base(data)                                                 (0x0000000F&(data))
#define  IPMD_CBP_get_cbp_stay(data)                                             ((0x000000F0&(data))>>4)
#define  IPMD_CBP_get_cbp_base(data)                                             (0x0000000F&(data))
#define  IPMD_CBP_cbp_stay_src(data)                                             ((0x000000F0&(data))>>4)
#define  IPMD_CBP_cbp_base_src(data)                                             (0x0000000F&(data))

#ifdef _IPMD_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IPMD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  Off4x4:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  Flush_cmd_disable:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  Softrst_disable:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  Umem_bypass:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  SReset_busy_clr:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  Pwmem_override:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  Constr_intra_pred:1;
    };
}IPMD_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  intra_flag:32;
    };
}IPMD_INTRA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  Value:28;
    };
}IPMD_INTR_THRESH_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  Reach_Thresh:1;
        RBus_UInt32  Count:28;
    };
}IPMD_BUSY_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  Luma_Part:2;
        RBus_UInt32  res2:7;
        RBus_UInt32  Luma_Cost:21;
    };
}IPMD_RESULT0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  Chroma_Cost:21;
    };
}IPMD_RESULT1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  Value:7;
    };
}IPMD_LAMBDA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  Value:21;
    };
}IPMD_WEIGHT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  GenPulse:1;
        RBus_UInt32  DbgCtrl:3;
        RBus_UInt32  PicCount:14;
        RBus_UInt32  MbAddrX:7;
        RBus_UInt32  MbAddrY:7;
    };
}IPMD_DBUS1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgCtrl:32;
    };
}IPMD_DBUS2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  R_16x16_0:4;
        RBus_UInt32  R_16x16_1:4;
        RBus_UInt32  R_16x16_2:4;
        RBus_UInt32  R_16x16_3:4;
        RBus_UInt32  R_chroma_0:4;
        RBus_UInt32  R_chroma_1:4;
        RBus_UInt32  R_chroma_2:4;
        RBus_UInt32  R_chroma_3:4;
    };
}IPMD_COST0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  R_same_8x8:4;
        RBus_UInt32  R_diff_8x8:4;
        RBus_UInt32  R_same_4x4:4;
        RBus_UInt32  R_diff_4x4:4;
    };
}IPMD_COST1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}IPMD_INTRAMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Luma:32;
    };
}IPMD_REMMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  y:7;
    };
}IPMD_SLICE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Write_Pulse:1;
        RBus_UInt32  Read_Pulse:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  Address:7;
        RBus_UInt32  res2:2;
        RBus_UInt32  IntraSel:2;
        RBus_UInt32  SubPart0:4;
        RBus_UInt32  SubPart1:4;
        RBus_UInt32  SubPart2:4;
        RBus_UInt32  SubPart3:4;
    };
}IPMD_NPM_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Luma_wr:1;
        RBus_UInt32  CB_wr:1;
        RBus_UInt32  CR_wr:1;
        RBus_UInt32  Luma:8;
        RBus_UInt32  CB:8;
        RBus_UInt32  CR:8;
    };
}IPMD_ULPRED_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  IntraLumaStyleSel:1;
        RBus_UInt32  res2:5;
    };
}IPMD_CBPCTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Lookup:32;
    };
}IPMD_SUMRUNCOST_4X4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  Enable:1;
        RBus_UInt32  Thresh:13;
    };
}IPMD_MBLEVEL_DROP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  flat_qtable:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  qpc:6;
    };
}IPMD_QUANTIZER_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  PictureType:2;
        RBus_UInt32  res2:21;
    };
}IPMD_MBINFO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  cbp_stay:4;
        RBus_UInt32  cbp_base:4;
    };
}IPMD_CBP_RBUS;

#else //apply LITTLE_ENDIAN

//======IPMD register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Constr_intra_pred:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  Pwmem_override:1;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  SReset_busy_clr:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  Umem_bypass:1;
        RBus_UInt32  write_enable4:1;
        RBus_UInt32  Softrst_disable:1;
        RBus_UInt32  write_enable5:1;
        RBus_UInt32  Flush_cmd_disable:1;
        RBus_UInt32  write_enable6:1;
        RBus_UInt32  Off4x4:1;
        RBus_UInt32  write_enable7:1;
        RBus_UInt32  res1:18;
    };
}IPMD_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  intra_flag:32;
    };
}IPMD_INTRA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:28;
        RBus_UInt32  res1:4;
    };
}IPMD_INTR_THRESH_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Count:28;
        RBus_UInt32  Reach_Thresh:1;
        RBus_UInt32  res1:3;
    };
}IPMD_BUSY_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Luma_Cost:21;
        RBus_UInt32  res1:7;
        RBus_UInt32  Luma_Part:2;
        RBus_UInt32  res2:2;
    };
}IPMD_RESULT0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Chroma_Cost:21;
        RBus_UInt32  res1:11;
    };
}IPMD_RESULT1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:7;
        RBus_UInt32  res1:25;
    };
}IPMD_LAMBDA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:21;
        RBus_UInt32  res1:11;
    };
}IPMD_WEIGHT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MbAddrY:7;
        RBus_UInt32  MbAddrX:7;
        RBus_UInt32  PicCount:14;
        RBus_UInt32  DbgCtrl:3;
        RBus_UInt32  GenPulse:1;
    };
}IPMD_DBUS1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgCtrl:32;
    };
}IPMD_DBUS2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  R_chroma_3:4;
        RBus_UInt32  R_chroma_2:4;
        RBus_UInt32  R_chroma_1:4;
        RBus_UInt32  R_chroma_0:4;
        RBus_UInt32  R_16x16_3:4;
        RBus_UInt32  R_16x16_2:4;
        RBus_UInt32  R_16x16_1:4;
        RBus_UInt32  R_16x16_0:4;
    };
}IPMD_COST0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  R_diff_4x4:4;
        RBus_UInt32  R_same_4x4:4;
        RBus_UInt32  R_diff_8x8:4;
        RBus_UInt32  R_same_8x8:4;
        RBus_UInt32  res1:16;
    };
}IPMD_COST1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Value:32;
    };
}IPMD_INTRAMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Luma:32;
    };
}IPMD_REMMODE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y:7;
        RBus_UInt32  res1:25;
    };
}IPMD_SLICE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SubPart3:4;
        RBus_UInt32  SubPart2:4;
        RBus_UInt32  SubPart1:4;
        RBus_UInt32  SubPart0:4;
        RBus_UInt32  IntraSel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  Address:7;
        RBus_UInt32  res2:3;
        RBus_UInt32  Read_Pulse:1;
        RBus_UInt32  Write_Pulse:1;
    };
}IPMD_NPM_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CR:8;
        RBus_UInt32  CB:8;
        RBus_UInt32  Luma:8;
        RBus_UInt32  CR_wr:1;
        RBus_UInt32  CB_wr:1;
        RBus_UInt32  Luma_wr:1;
        RBus_UInt32  res1:5;
    };
}IPMD_ULPRED_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  IntraLumaStyleSel:1;
        RBus_UInt32  res2:26;
    };
}IPMD_CBPCTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Lookup:32;
    };
}IPMD_SUMRUNCOST_4X4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Thresh:13;
        RBus_UInt32  Enable:1;
        RBus_UInt32  res1:18;
    };
}IPMD_MBLEVEL_DROP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qpc:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  flat_qtable:1;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:16;
    };
}IPMD_QUANTIZER_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  PictureType:2;
        RBus_UInt32  res2:9;
    };
}IPMD_MBINFO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cbp_base:4;
        RBus_UInt32  cbp_stay:4;
        RBus_UInt32  res1:24;
    };
}IPMD_CBP_RBUS;




#endif 


#endif 
#endif 
