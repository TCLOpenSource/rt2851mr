/**
* @file Merlin5_MEMC_KME_DM_TOP1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_DM_TOP1_REG_H_
#define _RBUS_KME_DM_TOP1_REG_H_

#include "rbus_types.h"



//  KME_DM_TOP1 Register Address
#define  KME_DM_TOP1_KME_DM_TOP1_00                                             0x1809C100
#define  KME_DM_TOP1_KME_DM_TOP1_00_reg_addr                                     "0xB809C100"
#define  KME_DM_TOP1_KME_DM_TOP1_00_reg                                          0xB809C100
#define  KME_DM_TOP1_KME_DM_TOP1_00_inst_addr                                    "0x0000"
#define  set_KME_DM_TOP1_KME_DM_TOP1_00_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_00_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_00_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_00_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_00_kme_08_start_address0_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_00_kme_08_start_address0_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_00_kme_08_start_address0(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_00_get_kme_08_start_address0(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_04                                             0x1809C104
#define  KME_DM_TOP1_KME_DM_TOP1_04_reg_addr                                     "0xB809C104"
#define  KME_DM_TOP1_KME_DM_TOP1_04_reg                                          0xB809C104
#define  KME_DM_TOP1_KME_DM_TOP1_04_inst_addr                                    "0x0001"
#define  set_KME_DM_TOP1_KME_DM_TOP1_04_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_04_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_04_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_04_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_04_kme_08_start_address1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_04_kme_08_start_address1_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_04_kme_08_start_address1(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_04_get_kme_08_start_address1(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_08                                             0x1809C108
#define  KME_DM_TOP1_KME_DM_TOP1_08_reg_addr                                     "0xB809C108"
#define  KME_DM_TOP1_KME_DM_TOP1_08_reg                                          0xB809C108
#define  KME_DM_TOP1_KME_DM_TOP1_08_inst_addr                                    "0x0002"
#define  set_KME_DM_TOP1_KME_DM_TOP1_08_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_08_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_08_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_08_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_08_kme_08_end_address0_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_08_kme_08_end_address0_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_08_kme_08_end_address0(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_08_get_kme_08_end_address0(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_0C                                             0x1809C10C
#define  KME_DM_TOP1_KME_DM_TOP1_0C_reg_addr                                     "0xB809C10C"
#define  KME_DM_TOP1_KME_DM_TOP1_0C_reg                                          0xB809C10C
#define  KME_DM_TOP1_KME_DM_TOP1_0C_inst_addr                                    "0x0003"
#define  set_KME_DM_TOP1_KME_DM_TOP1_0C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_0C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_0C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_0C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_0C_kme_08_end_address1_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_0C_kme_08_end_address1_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_0C_kme_08_end_address1(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_0C_get_kme_08_end_address1(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_10                                             0x1809C110
#define  KME_DM_TOP1_KME_DM_TOP1_10_reg_addr                                     "0xB809C110"
#define  KME_DM_TOP1_KME_DM_TOP1_10_reg                                          0xB809C110
#define  KME_DM_TOP1_KME_DM_TOP1_10_inst_addr                                    "0x0004"
#define  set_KME_DM_TOP1_KME_DM_TOP1_10_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_10_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_10_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_10_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_10_kme_08_line_offset_addr_shift                (0)
#define  KME_DM_TOP1_KME_DM_TOP1_10_kme_08_line_offset_addr_mask                 (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_10_kme_08_line_offset_addr(data)                (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_10_get_kme_08_line_offset_addr(data)            (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_14                                             0x1809C114
#define  KME_DM_TOP1_KME_DM_TOP1_14_reg_addr                                     "0xB809C114"
#define  KME_DM_TOP1_KME_DM_TOP1_14_reg                                          0xB809C114
#define  KME_DM_TOP1_KME_DM_TOP1_14_inst_addr                                    "0x0005"
#define  set_KME_DM_TOP1_KME_DM_TOP1_14_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_14_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_14_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_14_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_mode_shift                            (21)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_write_enable_shift                    (20)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_mode_mask                             (0x00200000)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_write_enable_mask                     (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_mode(data)                            (0x00200000&((data)<<21))
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_write_enable(data)                    (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_14_kme_08_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_14_get_kme_08_mode(data)                        ((0x00200000&(data))>>21)
#define  KME_DM_TOP1_KME_DM_TOP1_14_get_kme_08_write_enable(data)                ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_14_get_kme_08_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_14_get_kme_08_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_14_get_kme_08_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_18                                             0x1809C118
#define  KME_DM_TOP1_KME_DM_TOP1_18_reg_addr                                     "0xB809C118"
#define  KME_DM_TOP1_KME_DM_TOP1_18_reg                                          0xB809C118
#define  KME_DM_TOP1_KME_DM_TOP1_18_inst_addr                                    "0x0006"
#define  set_KME_DM_TOP1_KME_DM_TOP1_18_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_18_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_18_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_18_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_18_kme_08_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_18_kme_08_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_18_kme_08_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_18_kme_08_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_18_kme_08_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_18_kme_08_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_18_get_kme_08_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_18_get_kme_08_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_1C                                             0x1809C11C
#define  KME_DM_TOP1_KME_DM_TOP1_1C_reg_addr                                     "0xB809C11C"
#define  KME_DM_TOP1_KME_DM_TOP1_1C_reg                                          0xB809C11C
#define  KME_DM_TOP1_KME_DM_TOP1_1C_inst_addr                                    "0x0007"
#define  set_KME_DM_TOP1_KME_DM_TOP1_1C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_1C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_1C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_1C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_read_enable_shift                     (20)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_read_enable_mask                      (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_read_enable(data)                     (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_1C_kme_09_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_1C_get_kme_09_read_enable(data)                 ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_get_kme_09_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_get_kme_09_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_1C_get_kme_09_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_20                                             0x1809C120
#define  KME_DM_TOP1_KME_DM_TOP1_20_reg_addr                                     "0xB809C120"
#define  KME_DM_TOP1_KME_DM_TOP1_20_reg                                          0xB809C120
#define  KME_DM_TOP1_KME_DM_TOP1_20_inst_addr                                    "0x0008"
#define  set_KME_DM_TOP1_KME_DM_TOP1_20_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_20_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_20_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_20_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_20_kme_09_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_20_kme_09_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_20_kme_09_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_20_kme_09_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_20_kme_09_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_20_kme_09_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_20_get_kme_09_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_20_get_kme_09_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_24                                             0x1809C124
#define  KME_DM_TOP1_KME_DM_TOP1_24_reg_addr                                     "0xB809C124"
#define  KME_DM_TOP1_KME_DM_TOP1_24_reg                                          0xB809C124
#define  KME_DM_TOP1_KME_DM_TOP1_24_inst_addr                                    "0x0009"
#define  set_KME_DM_TOP1_KME_DM_TOP1_24_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_24_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_24_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_24_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_24_kme_10_start_address0_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_24_kme_10_start_address0_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_24_kme_10_start_address0(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_24_get_kme_10_start_address0(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_28                                             0x1809C128
#define  KME_DM_TOP1_KME_DM_TOP1_28_reg_addr                                     "0xB809C128"
#define  KME_DM_TOP1_KME_DM_TOP1_28_reg                                          0xB809C128
#define  KME_DM_TOP1_KME_DM_TOP1_28_inst_addr                                    "0x000A"
#define  set_KME_DM_TOP1_KME_DM_TOP1_28_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_28_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_28_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_28_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_28_kme_10_start_address1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_28_kme_10_start_address1_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_28_kme_10_start_address1(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_28_get_kme_10_start_address1(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_2C                                             0x1809C12C
#define  KME_DM_TOP1_KME_DM_TOP1_2C_reg_addr                                     "0xB809C12C"
#define  KME_DM_TOP1_KME_DM_TOP1_2C_reg                                          0xB809C12C
#define  KME_DM_TOP1_KME_DM_TOP1_2C_inst_addr                                    "0x000B"
#define  set_KME_DM_TOP1_KME_DM_TOP1_2C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_2C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_2C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_2C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_2C_kme_10_end_address0_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_2C_kme_10_end_address0_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_2C_kme_10_end_address0(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_2C_get_kme_10_end_address0(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_30                                             0x1809C130
#define  KME_DM_TOP1_KME_DM_TOP1_30_reg_addr                                     "0xB809C130"
#define  KME_DM_TOP1_KME_DM_TOP1_30_reg                                          0xB809C130
#define  KME_DM_TOP1_KME_DM_TOP1_30_inst_addr                                    "0x000C"
#define  set_KME_DM_TOP1_KME_DM_TOP1_30_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_30_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_30_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_30_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_30_kme_10_end_address1_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_30_kme_10_end_address1_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_30_kme_10_end_address1(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_30_get_kme_10_end_address1(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_34                                             0x1809C134
#define  KME_DM_TOP1_KME_DM_TOP1_34_reg_addr                                     "0xB809C134"
#define  KME_DM_TOP1_KME_DM_TOP1_34_reg                                          0xB809C134
#define  KME_DM_TOP1_KME_DM_TOP1_34_inst_addr                                    "0x000D"
#define  set_KME_DM_TOP1_KME_DM_TOP1_34_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_34_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_34_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_34_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_34_kme_10_line_offset_addr_shift                (0)
#define  KME_DM_TOP1_KME_DM_TOP1_34_kme_10_line_offset_addr_mask                 (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_34_kme_10_line_offset_addr(data)                (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_34_get_kme_10_line_offset_addr(data)            (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_38                                             0x1809C138
#define  KME_DM_TOP1_KME_DM_TOP1_38_reg_addr                                     "0xB809C138"
#define  KME_DM_TOP1_KME_DM_TOP1_38_reg                                          0xB809C138
#define  KME_DM_TOP1_KME_DM_TOP1_38_inst_addr                                    "0x000E"
#define  set_KME_DM_TOP1_KME_DM_TOP1_38_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_38_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_38_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_38_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_mode_shift                            (21)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_write_enable_shift                    (20)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_mode_mask                             (0x00200000)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_write_enable_mask                     (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_mode(data)                            (0x00200000&((data)<<21))
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_write_enable(data)                    (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_38_kme_10_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_38_get_kme_10_mode(data)                        ((0x00200000&(data))>>21)
#define  KME_DM_TOP1_KME_DM_TOP1_38_get_kme_10_write_enable(data)                ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_38_get_kme_10_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_38_get_kme_10_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_38_get_kme_10_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_3C                                             0x1809C13C
#define  KME_DM_TOP1_KME_DM_TOP1_3C_reg_addr                                     "0xB809C13C"
#define  KME_DM_TOP1_KME_DM_TOP1_3C_reg                                          0xB809C13C
#define  KME_DM_TOP1_KME_DM_TOP1_3C_inst_addr                                    "0x000F"
#define  set_KME_DM_TOP1_KME_DM_TOP1_3C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_3C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_3C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_3C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_3C_kme_10_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_3C_kme_10_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_3C_kme_10_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_3C_kme_10_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_3C_kme_10_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_3C_kme_10_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_3C_get_kme_10_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_3C_get_kme_10_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_40                                             0x1809C140
#define  KME_DM_TOP1_KME_DM_TOP1_40_reg_addr                                     "0xB809C140"
#define  KME_DM_TOP1_KME_DM_TOP1_40_reg                                          0xB809C140
#define  KME_DM_TOP1_KME_DM_TOP1_40_inst_addr                                    "0x0010"
#define  set_KME_DM_TOP1_KME_DM_TOP1_40_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_40_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_40_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_40_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_read_enable_shift                     (20)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_read_enable_mask                      (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_read_enable(data)                     (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_40_kme_11_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_40_get_kme_11_read_enable(data)                 ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_40_get_kme_11_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_40_get_kme_11_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_40_get_kme_11_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_44                                             0x1809C144
#define  KME_DM_TOP1_KME_DM_TOP1_44_reg_addr                                     "0xB809C144"
#define  KME_DM_TOP1_KME_DM_TOP1_44_reg                                          0xB809C144
#define  KME_DM_TOP1_KME_DM_TOP1_44_inst_addr                                    "0x0011"
#define  set_KME_DM_TOP1_KME_DM_TOP1_44_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_44_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_44_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_44_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_44_kme_11_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_44_kme_11_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_44_kme_11_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_44_kme_11_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_44_kme_11_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_44_kme_11_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_44_get_kme_11_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_44_get_kme_11_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_48                                             0x1809C148
#define  KME_DM_TOP1_KME_DM_TOP1_48_reg_addr                                     "0xB809C148"
#define  KME_DM_TOP1_KME_DM_TOP1_48_reg                                          0xB809C148
#define  KME_DM_TOP1_KME_DM_TOP1_48_inst_addr                                    "0x0012"
#define  set_KME_DM_TOP1_KME_DM_TOP1_48_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_48_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_48_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_48_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_48_kme_12_start_address0_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_48_kme_12_start_address0_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_48_kme_12_start_address0(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_48_get_kme_12_start_address0(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_4C                                             0x1809C14C
#define  KME_DM_TOP1_KME_DM_TOP1_4C_reg_addr                                     "0xB809C14C"
#define  KME_DM_TOP1_KME_DM_TOP1_4C_reg                                          0xB809C14C
#define  KME_DM_TOP1_KME_DM_TOP1_4C_inst_addr                                    "0x0013"
#define  set_KME_DM_TOP1_KME_DM_TOP1_4C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_4C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_4C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_4C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_4C_kme_12_start_address1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_4C_kme_12_start_address1_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_4C_kme_12_start_address1(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_4C_get_kme_12_start_address1(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_50                                             0x1809C150
#define  KME_DM_TOP1_KME_DM_TOP1_50_reg_addr                                     "0xB809C150"
#define  KME_DM_TOP1_KME_DM_TOP1_50_reg                                          0xB809C150
#define  KME_DM_TOP1_KME_DM_TOP1_50_inst_addr                                    "0x0014"
#define  set_KME_DM_TOP1_KME_DM_TOP1_50_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_50_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_50_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_50_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_50_kme_12_end_address0_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_50_kme_12_end_address0_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_50_kme_12_end_address0(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_50_get_kme_12_end_address0(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_54                                             0x1809C154
#define  KME_DM_TOP1_KME_DM_TOP1_54_reg_addr                                     "0xB809C154"
#define  KME_DM_TOP1_KME_DM_TOP1_54_reg                                          0xB809C154
#define  KME_DM_TOP1_KME_DM_TOP1_54_inst_addr                                    "0x0015"
#define  set_KME_DM_TOP1_KME_DM_TOP1_54_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_54_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_54_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_54_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_54_kme_12_end_address1_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_54_kme_12_end_address1_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_54_kme_12_end_address1(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_54_get_kme_12_end_address1(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_58                                             0x1809C158
#define  KME_DM_TOP1_KME_DM_TOP1_58_reg_addr                                     "0xB809C158"
#define  KME_DM_TOP1_KME_DM_TOP1_58_reg                                          0xB809C158
#define  KME_DM_TOP1_KME_DM_TOP1_58_inst_addr                                    "0x0016"
#define  set_KME_DM_TOP1_KME_DM_TOP1_58_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_58_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_58_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_58_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_58_kme_12_line_offset_addr_shift                (0)
#define  KME_DM_TOP1_KME_DM_TOP1_58_kme_12_line_offset_addr_mask                 (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_58_kme_12_line_offset_addr(data)                (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_58_get_kme_12_line_offset_addr(data)            (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_5C                                             0x1809C15C
#define  KME_DM_TOP1_KME_DM_TOP1_5C_reg_addr                                     "0xB809C15C"
#define  KME_DM_TOP1_KME_DM_TOP1_5C_reg                                          0xB809C15C
#define  KME_DM_TOP1_KME_DM_TOP1_5C_inst_addr                                    "0x0017"
#define  set_KME_DM_TOP1_KME_DM_TOP1_5C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_5C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_5C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_5C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_mode_shift                            (21)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_write_enable_shift                    (20)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_mode_mask                             (0x00200000)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_write_enable_mask                     (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_mode(data)                            (0x00200000&((data)<<21))
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_write_enable(data)                    (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_5C_kme_12_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_5C_get_kme_12_mode(data)                        ((0x00200000&(data))>>21)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_get_kme_12_write_enable(data)                ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_get_kme_12_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_get_kme_12_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_5C_get_kme_12_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_60                                             0x1809C160
#define  KME_DM_TOP1_KME_DM_TOP1_60_reg_addr                                     "0xB809C160"
#define  KME_DM_TOP1_KME_DM_TOP1_60_reg                                          0xB809C160
#define  KME_DM_TOP1_KME_DM_TOP1_60_inst_addr                                    "0x0018"
#define  set_KME_DM_TOP1_KME_DM_TOP1_60_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_60_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_60_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_60_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_60_kme_12_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_60_kme_12_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_60_kme_12_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_60_kme_12_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_60_kme_12_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_60_kme_12_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_60_get_kme_12_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_60_get_kme_12_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_64                                             0x1809C164
#define  KME_DM_TOP1_KME_DM_TOP1_64_reg_addr                                     "0xB809C164"
#define  KME_DM_TOP1_KME_DM_TOP1_64_reg                                          0xB809C164
#define  KME_DM_TOP1_KME_DM_TOP1_64_inst_addr                                    "0x0019"
#define  set_KME_DM_TOP1_KME_DM_TOP1_64_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_64_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_64_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_64_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_read_enable_shift                     (20)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_read_enable_mask                      (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_read_enable(data)                     (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_64_kme_13_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_64_get_kme_13_read_enable(data)                 ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_64_get_kme_13_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_64_get_kme_13_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_64_get_kme_13_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_68                                             0x1809C168
#define  KME_DM_TOP1_KME_DM_TOP1_68_reg_addr                                     "0xB809C168"
#define  KME_DM_TOP1_KME_DM_TOP1_68_reg                                          0xB809C168
#define  KME_DM_TOP1_KME_DM_TOP1_68_inst_addr                                    "0x001A"
#define  set_KME_DM_TOP1_KME_DM_TOP1_68_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_68_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_68_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_68_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_68_kme_13_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_68_kme_13_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_68_kme_13_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_68_kme_13_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_68_kme_13_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_68_kme_13_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_68_get_kme_13_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_68_get_kme_13_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_6C                                             0x1809C16C
#define  KME_DM_TOP1_KME_DM_TOP1_6C_reg_addr                                     "0xB809C16C"
#define  KME_DM_TOP1_KME_DM_TOP1_6C_reg                                          0xB809C16C
#define  KME_DM_TOP1_KME_DM_TOP1_6C_inst_addr                                    "0x001B"
#define  set_KME_DM_TOP1_KME_DM_TOP1_6C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_6C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_6C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_6C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_6C_kme_14_start_address0_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_6C_kme_14_start_address0_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_6C_kme_14_start_address0(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_6C_get_kme_14_start_address0(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_70                                             0x1809C170
#define  KME_DM_TOP1_KME_DM_TOP1_70_reg_addr                                     "0xB809C170"
#define  KME_DM_TOP1_KME_DM_TOP1_70_reg                                          0xB809C170
#define  KME_DM_TOP1_KME_DM_TOP1_70_inst_addr                                    "0x001C"
#define  set_KME_DM_TOP1_KME_DM_TOP1_70_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_70_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_70_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_70_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_70_kme_14_start_address1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_70_kme_14_start_address1_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_70_kme_14_start_address1(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_70_get_kme_14_start_address1(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_74                                             0x1809C174
#define  KME_DM_TOP1_KME_DM_TOP1_74_reg_addr                                     "0xB809C174"
#define  KME_DM_TOP1_KME_DM_TOP1_74_reg                                          0xB809C174
#define  KME_DM_TOP1_KME_DM_TOP1_74_inst_addr                                    "0x001D"
#define  set_KME_DM_TOP1_KME_DM_TOP1_74_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_74_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_74_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_74_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_74_kme_14_end_address0_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_74_kme_14_end_address0_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_74_kme_14_end_address0(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_74_get_kme_14_end_address0(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_78                                             0x1809C178
#define  KME_DM_TOP1_KME_DM_TOP1_78_reg_addr                                     "0xB809C178"
#define  KME_DM_TOP1_KME_DM_TOP1_78_reg                                          0xB809C178
#define  KME_DM_TOP1_KME_DM_TOP1_78_inst_addr                                    "0x001E"
#define  set_KME_DM_TOP1_KME_DM_TOP1_78_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_78_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_78_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_78_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_78_kme_14_end_address1_shift                    (0)
#define  KME_DM_TOP1_KME_DM_TOP1_78_kme_14_end_address1_mask                     (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_78_kme_14_end_address1(data)                    (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_78_get_kme_14_end_address1(data)                (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_7C                                             0x1809C17C
#define  KME_DM_TOP1_KME_DM_TOP1_7C_reg_addr                                     "0xB809C17C"
#define  KME_DM_TOP1_KME_DM_TOP1_7C_reg                                          0xB809C17C
#define  KME_DM_TOP1_KME_DM_TOP1_7C_inst_addr                                    "0x001F"
#define  set_KME_DM_TOP1_KME_DM_TOP1_7C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_7C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_7C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_7C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_7C_kme_14_line_offset_addr_shift                (0)
#define  KME_DM_TOP1_KME_DM_TOP1_7C_kme_14_line_offset_addr_mask                 (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_7C_kme_14_line_offset_addr(data)                (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_7C_get_kme_14_line_offset_addr(data)            (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_80                                             0x1809C180
#define  KME_DM_TOP1_KME_DM_TOP1_80_reg_addr                                     "0xB809C180"
#define  KME_DM_TOP1_KME_DM_TOP1_80_reg                                          0xB809C180
#define  KME_DM_TOP1_KME_DM_TOP1_80_inst_addr                                    "0x0020"
#define  set_KME_DM_TOP1_KME_DM_TOP1_80_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_80_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_80_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_80_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_mode_shift                            (21)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_write_enable_shift                    (20)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_mode_mask                             (0x00200000)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_write_enable_mask                     (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_mode(data)                            (0x00200000&((data)<<21))
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_write_enable(data)                    (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_80_kme_14_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_80_get_kme_14_mode(data)                        ((0x00200000&(data))>>21)
#define  KME_DM_TOP1_KME_DM_TOP1_80_get_kme_14_write_enable(data)                ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_80_get_kme_14_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_80_get_kme_14_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_80_get_kme_14_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_84                                             0x1809C184
#define  KME_DM_TOP1_KME_DM_TOP1_84_reg_addr                                     "0xB809C184"
#define  KME_DM_TOP1_KME_DM_TOP1_84_reg                                          0xB809C184
#define  KME_DM_TOP1_KME_DM_TOP1_84_inst_addr                                    "0x0021"
#define  set_KME_DM_TOP1_KME_DM_TOP1_84_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_84_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_84_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_84_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_84_kme_14_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_84_kme_14_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_84_kme_14_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_84_kme_14_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_84_kme_14_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_84_kme_14_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_84_get_kme_14_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_84_get_kme_14_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_88                                             0x1809C188
#define  KME_DM_TOP1_KME_DM_TOP1_88_reg_addr                                     "0xB809C188"
#define  KME_DM_TOP1_KME_DM_TOP1_88_reg                                          0xB809C188
#define  KME_DM_TOP1_KME_DM_TOP1_88_inst_addr                                    "0x0022"
#define  set_KME_DM_TOP1_KME_DM_TOP1_88_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_88_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_88_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_88_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_read_enable_shift                     (20)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_cmdlen_shift                          (16)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_qos_shift                             (8)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_alen_shift                            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_read_enable_mask                      (0x00100000)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_cmdlen_mask                           (0x000F0000)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_qos_mask                              (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_alen_mask                             (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_read_enable(data)                     (0x00100000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_cmdlen(data)                          (0x000F0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_qos(data)                             (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_88_kme_15_alen(data)                            (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_88_get_kme_15_read_enable(data)                 ((0x00100000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_88_get_kme_15_cmdlen(data)                      ((0x000F0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_88_get_kme_15_qos(data)                         ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_88_get_kme_15_alen(data)                        (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_8C                                             0x1809C18C
#define  KME_DM_TOP1_KME_DM_TOP1_8C_reg_addr                                     "0xB809C18C"
#define  KME_DM_TOP1_KME_DM_TOP1_8C_reg                                          0xB809C18C
#define  KME_DM_TOP1_KME_DM_TOP1_8C_inst_addr                                    "0x0023"
#define  set_KME_DM_TOP1_KME_DM_TOP1_8C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_8C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_8C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_8C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_8C_kme_15_threshold_n_shift                     (9)
#define  KME_DM_TOP1_KME_DM_TOP1_8C_kme_15_threshold_m_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_8C_kme_15_threshold_n_mask                      (0x0003FE00)
#define  KME_DM_TOP1_KME_DM_TOP1_8C_kme_15_threshold_m_mask                      (0x000001FF)
#define  KME_DM_TOP1_KME_DM_TOP1_8C_kme_15_threshold_n(data)                     (0x0003FE00&((data)<<9))
#define  KME_DM_TOP1_KME_DM_TOP1_8C_kme_15_threshold_m(data)                     (0x000001FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_8C_get_kme_15_threshold_n(data)                 ((0x0003FE00&(data))>>9)
#define  KME_DM_TOP1_KME_DM_TOP1_8C_get_kme_15_threshold_m(data)                 (0x000001FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_90                                             0x1809C190
#define  KME_DM_TOP1_KME_DM_TOP1_90_reg_addr                                     "0xB809C190"
#define  KME_DM_TOP1_KME_DM_TOP1_90_reg                                          0xB809C190
#define  KME_DM_TOP1_KME_DM_TOP1_90_inst_addr                                    "0x0024"
#define  set_KME_DM_TOP1_KME_DM_TOP1_90_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_90_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_90_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_90_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_90_kme_iplogo_vactive_shift                     (12)
#define  KME_DM_TOP1_KME_DM_TOP1_90_kme_iplogo_hactive_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_90_kme_iplogo_vactive_mask                      (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_90_kme_iplogo_hactive_mask                      (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_90_kme_iplogo_vactive(data)                     (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_90_kme_iplogo_hactive(data)                     (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_90_get_kme_iplogo_vactive(data)                 ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_90_get_kme_iplogo_hactive(data)                 (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_94                                             0x1809C194
#define  KME_DM_TOP1_KME_DM_TOP1_94_reg_addr                                     "0xB809C194"
#define  KME_DM_TOP1_KME_DM_TOP1_94_reg                                          0xB809C194
#define  KME_DM_TOP1_KME_DM_TOP1_94_inst_addr                                    "0x0025"
#define  set_KME_DM_TOP1_KME_DM_TOP1_94_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_94_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_94_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_94_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_94_kme_mlogo_vactive_shift                      (12)
#define  KME_DM_TOP1_KME_DM_TOP1_94_kme_mlogo_hactive_shift                      (0)
#define  KME_DM_TOP1_KME_DM_TOP1_94_kme_mlogo_vactive_mask                       (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_94_kme_mlogo_hactive_mask                       (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_94_kme_mlogo_vactive(data)                      (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_94_kme_mlogo_hactive(data)                      (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_94_get_kme_mlogo_vactive(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_94_get_kme_mlogo_hactive(data)                  (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_98                                             0x1809C198
#define  KME_DM_TOP1_KME_DM_TOP1_98_reg_addr                                     "0xB809C198"
#define  KME_DM_TOP1_KME_DM_TOP1_98_reg                                          0xB809C198
#define  KME_DM_TOP1_KME_DM_TOP1_98_inst_addr                                    "0x0026"
#define  set_KME_DM_TOP1_KME_DM_TOP1_98_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_98_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_98_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_98_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_98_kme_plogo_vactive_shift                      (12)
#define  KME_DM_TOP1_KME_DM_TOP1_98_kme_plogo_hactive_shift                      (0)
#define  KME_DM_TOP1_KME_DM_TOP1_98_kme_plogo_vactive_mask                       (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_98_kme_plogo_hactive_mask                       (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_98_kme_plogo_vactive(data)                      (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_98_kme_plogo_hactive(data)                      (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_98_get_kme_plogo_vactive(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_98_get_kme_plogo_hactive(data)                  (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_9C                                             0x1809C19C
#define  KME_DM_TOP1_KME_DM_TOP1_9C_reg_addr                                     "0xB809C19C"
#define  KME_DM_TOP1_KME_DM_TOP1_9C_reg                                          0xB809C19C
#define  KME_DM_TOP1_KME_DM_TOP1_9C_inst_addr                                    "0x0027"
#define  set_KME_DM_TOP1_KME_DM_TOP1_9C_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_9C_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_9C_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_9C_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_9C_kme_hlogo_vactive_shift                      (12)
#define  KME_DM_TOP1_KME_DM_TOP1_9C_kme_hlogo_hactive_shift                      (0)
#define  KME_DM_TOP1_KME_DM_TOP1_9C_kme_hlogo_vactive_mask                       (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_9C_kme_hlogo_hactive_mask                       (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_9C_kme_hlogo_vactive(data)                      (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_9C_kme_hlogo_hactive(data)                      (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_9C_get_kme_hlogo_vactive(data)                  ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_9C_get_kme_hlogo_hactive(data)                  (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_A0                                             0x1809C1A0
#define  KME_DM_TOP1_KME_DM_TOP1_A0_reg_addr                                     "0xB809C1A0"
#define  KME_DM_TOP1_KME_DM_TOP1_A0_reg                                          0xB809C1A0
#define  KME_DM_TOP1_KME_DM_TOP1_A0_inst_addr                                    "0x0028"
#define  set_KME_DM_TOP1_KME_DM_TOP1_A0_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_A0_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_A0_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_A0_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_hlogo_hnum_shift                         (24)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_plogo_hnum_shift                         (16)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_masklogo_hnum_shift                      (8)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_iplogo_hnum_shift                        (0)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_hlogo_hnum_mask                          (0xFF000000)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_plogo_hnum_mask                          (0x00FF0000)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_masklogo_hnum_mask                       (0x0000FF00)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_iplogo_hnum_mask                         (0x000000FF)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_hlogo_hnum(data)                         (0xFF000000&((data)<<24))
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_plogo_hnum(data)                         (0x00FF0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_masklogo_hnum(data)                      (0x0000FF00&((data)<<8))
#define  KME_DM_TOP1_KME_DM_TOP1_A0_kme_iplogo_hnum(data)                        (0x000000FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_A0_get_kme_hlogo_hnum(data)                     ((0xFF000000&(data))>>24)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_get_kme_plogo_hnum(data)                     ((0x00FF0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_get_kme_masklogo_hnum(data)                  ((0x0000FF00&(data))>>8)
#define  KME_DM_TOP1_KME_DM_TOP1_A0_get_kme_iplogo_hnum(data)                    (0x000000FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_A4                                             0x1809C1A4
#define  KME_DM_TOP1_KME_DM_TOP1_A4_reg_addr                                     "0xB809C1A4"
#define  KME_DM_TOP1_KME_DM_TOP1_A4_reg                                          0xB809C1A4
#define  KME_DM_TOP1_KME_DM_TOP1_A4_inst_addr                                    "0x0029"
#define  set_KME_DM_TOP1_KME_DM_TOP1_A4_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_A4_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_A4_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_A4_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_frame_num_kme_dm_top1_shift                  (17)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_arb_num_shift                                (16)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_hs_force_hnum_kme_dm_top1_shift              (4)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_hs_force_hnum_en_kme_dm_top1_shift           (3)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_latency_clr_kme_dm_top1_shift                (2)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_mtr_data_clr_kme_dm_top1_shift               (1)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_clr_kme_dm_top1_shift                        (0)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_frame_num_kme_dm_top1_mask                   (0x07FE0000)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_arb_num_mask                                 (0x00010000)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_hs_force_hnum_kme_dm_top1_mask               (0x0000FFF0)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_hs_force_hnum_en_kme_dm_top1_mask            (0x00000008)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_latency_clr_kme_dm_top1_mask                 (0x00000004)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_mtr_data_clr_kme_dm_top1_mask                (0x00000002)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_clr_kme_dm_top1_mask                         (0x00000001)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_frame_num_kme_dm_top1(data)                  (0x07FE0000&((data)<<17))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_arb_num(data)                                (0x00010000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_hs_force_hnum_kme_dm_top1(data)              (0x0000FFF0&((data)<<4))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_hs_force_hnum_en_kme_dm_top1(data)           (0x00000008&((data)<<3))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_latency_clr_kme_dm_top1(data)                (0x00000004&((data)<<2))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_mtr_data_clr_kme_dm_top1(data)               (0x00000002&((data)<<1))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_clr_kme_dm_top1(data)                        (0x00000001&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_A4_get_frame_num_kme_dm_top1(data)              ((0x07FE0000&(data))>>17)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_get_arb_num(data)                            ((0x00010000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_get_hs_force_hnum_kme_dm_top1(data)          ((0x0000FFF0&(data))>>4)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_get_hs_force_hnum_en_kme_dm_top1(data)       ((0x00000008&(data))>>3)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_get_latency_clr_kme_dm_top1(data)            ((0x00000004&(data))>>2)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_get_mtr_data_clr_kme_dm_top1(data)           ((0x00000002&(data))>>1)
#define  KME_DM_TOP1_KME_DM_TOP1_A4_get_clr_kme_dm_top1(data)                    (0x00000001&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_A8                                             0x1809C1A8
#define  KME_DM_TOP1_KME_DM_TOP1_A8_reg_addr                                     "0xB809C1A8"
#define  KME_DM_TOP1_KME_DM_TOP1_A8_reg                                          0xB809C1A8
#define  KME_DM_TOP1_KME_DM_TOP1_A8_inst_addr                                    "0x002A"
#define  set_KME_DM_TOP1_KME_DM_TOP1_A8_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_A8_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_A8_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_A8_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_A8_logo_agent_num_shift                         (28)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_me_agent_num_shift                           (24)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_threshold0_kme_dm_top1_shift                 (12)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_h_number_kme_dm_top1_shift                   (0)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_logo_agent_num_mask                          (0x70000000)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_me_agent_num_mask                            (0x0F000000)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_threshold0_kme_dm_top1_mask                  (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_h_number_kme_dm_top1_mask                    (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_logo_agent_num(data)                         (0x70000000&((data)<<28))
#define  KME_DM_TOP1_KME_DM_TOP1_A8_me_agent_num(data)                           (0x0F000000&((data)<<24))
#define  KME_DM_TOP1_KME_DM_TOP1_A8_threshold0_kme_dm_top1(data)                 (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_A8_h_number_kme_dm_top1(data)                   (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_A8_get_logo_agent_num(data)                     ((0x70000000&(data))>>28)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_get_me_agent_num(data)                       ((0x0F000000&(data))>>24)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_get_threshold0_kme_dm_top1(data)             ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_A8_get_h_number_kme_dm_top1(data)               (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_AC                                             0x1809C1AC
#define  KME_DM_TOP1_KME_DM_TOP1_AC_reg_addr                                     "0xB809C1AC"
#define  KME_DM_TOP1_KME_DM_TOP1_AC_reg                                          0xB809C1AC
#define  KME_DM_TOP1_KME_DM_TOP1_AC_inst_addr                                    "0x002B"
#define  set_KME_DM_TOP1_KME_DM_TOP1_AC_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_AC_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_AC_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_AC_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_AC_threshold2_kme_dm_top1_shift                 (12)
#define  KME_DM_TOP1_KME_DM_TOP1_AC_threshold1_kme_dm_top1_shift                 (0)
#define  KME_DM_TOP1_KME_DM_TOP1_AC_threshold2_kme_dm_top1_mask                  (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_AC_threshold1_kme_dm_top1_mask                  (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_AC_threshold2_kme_dm_top1(data)                 (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_AC_threshold1_kme_dm_top1(data)                 (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_AC_get_threshold2_kme_dm_top1(data)             ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_AC_get_threshold1_kme_dm_top1(data)             (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_B0                                             0x1809C1B0
#define  KME_DM_TOP1_KME_DM_TOP1_B0_reg_addr                                     "0xB809C1B0"
#define  KME_DM_TOP1_KME_DM_TOP1_B0_reg                                          0xB809C1B0
#define  KME_DM_TOP1_KME_DM_TOP1_B0_inst_addr                                    "0x002C"
#define  set_KME_DM_TOP1_KME_DM_TOP1_B0_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_B0_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_B0_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_B0_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_B0_threshold4_kme_dm_top1_shift                 (12)
#define  KME_DM_TOP1_KME_DM_TOP1_B0_threshold3_kme_dm_top1_shift                 (0)
#define  KME_DM_TOP1_KME_DM_TOP1_B0_threshold4_kme_dm_top1_mask                  (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_B0_threshold3_kme_dm_top1_mask                  (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_B0_threshold4_kme_dm_top1(data)                 (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_B0_threshold3_kme_dm_top1(data)                 (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_B0_get_threshold4_kme_dm_top1(data)             ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_B0_get_threshold3_kme_dm_top1(data)             (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_B4                                             0x1809C1B4
#define  KME_DM_TOP1_KME_DM_TOP1_B4_reg_addr                                     "0xB809C1B4"
#define  KME_DM_TOP1_KME_DM_TOP1_B4_reg                                          0xB809C1B4
#define  KME_DM_TOP1_KME_DM_TOP1_B4_inst_addr                                    "0x002D"
#define  set_KME_DM_TOP1_KME_DM_TOP1_B4_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_B4_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_B4_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_B4_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_B4_kme_me_cnt_v_num_shift                       (12)
#define  KME_DM_TOP1_KME_DM_TOP1_B4_threshold5_kme_dm_top1_shift                 (0)
#define  KME_DM_TOP1_KME_DM_TOP1_B4_kme_me_cnt_v_num_mask                        (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_B4_threshold5_kme_dm_top1_mask                  (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_B4_kme_me_cnt_v_num(data)                       (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_B4_threshold5_kme_dm_top1(data)                 (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_B4_get_kme_me_cnt_v_num(data)                   ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_B4_get_threshold5_kme_dm_top1(data)             (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_B8                                             0x1809C1B8
#define  KME_DM_TOP1_KME_DM_TOP1_B8_reg_addr                                     "0xB809C1B8"
#define  KME_DM_TOP1_KME_DM_TOP1_B8_reg                                          0xB809C1B8
#define  KME_DM_TOP1_KME_DM_TOP1_B8_inst_addr                                    "0x002E"
#define  set_KME_DM_TOP1_KME_DM_TOP1_B8_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_B8_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_B8_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_B8_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_B8_kme_logo_cnt_v_num_shift                     (0)
#define  KME_DM_TOP1_KME_DM_TOP1_B8_kme_logo_cnt_v_num_mask                      (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_B8_kme_logo_cnt_v_num(data)                     (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_B8_get_kme_logo_cnt_v_num(data)                 (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_BC                                             0x1809C1BC
#define  KME_DM_TOP1_KME_DM_TOP1_BC_reg_addr                                     "0xB809C1BC"
#define  KME_DM_TOP1_KME_DM_TOP1_BC_reg                                          0xB809C1BC
#define  KME_DM_TOP1_KME_DM_TOP1_BC_inst_addr                                    "0x002F"
#define  set_KME_DM_TOP1_KME_DM_TOP1_BC_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_BC_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_BC_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_BC_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_BC_mtr_timer_kme_dm_top1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_BC_mtr_timer_kme_dm_top1_mask                   (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_BC_mtr_timer_kme_dm_top1(data)                  (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_BC_get_mtr_timer_kme_dm_top1(data)              (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_C0                                             0x1809C1C0
#define  KME_DM_TOP1_KME_DM_TOP1_C0_reg_addr                                     "0xB809C1C0"
#define  KME_DM_TOP1_KME_DM_TOP1_C0_reg                                          0xB809C1C0
#define  KME_DM_TOP1_KME_DM_TOP1_C0_inst_addr                                    "0x0030"
#define  set_KME_DM_TOP1_KME_DM_TOP1_C0_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_C0_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_C0_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_C0_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_C0_regr_total_number_shift                      (0)
#define  KME_DM_TOP1_KME_DM_TOP1_C0_regr_total_number_mask                       (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_C0_regr_total_number(data)                      (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_C0_get_regr_total_number(data)                  (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_C4                                             0x1809C1C4
#define  KME_DM_TOP1_KME_DM_TOP1_C4_reg_addr                                     "0xB809C1C4"
#define  KME_DM_TOP1_KME_DM_TOP1_C4_reg                                          0xB809C1C4
#define  KME_DM_TOP1_KME_DM_TOP1_C4_inst_addr                                    "0x0031"
#define  set_KME_DM_TOP1_KME_DM_TOP1_C4_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_C4_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_C4_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_C4_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt2_kme_dm_top1_shift                  (20)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt1_kme_dm_top1_shift                  (10)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt0_kme_dm_top1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt2_kme_dm_top1_mask                   (0x3FF00000)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt1_kme_dm_top1_mask                   (0x000FFC00)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt0_kme_dm_top1_mask                   (0x000003FF)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt2_kme_dm_top1(data)                  (0x3FF00000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt1_kme_dm_top1(data)                  (0x000FFC00&((data)<<10))
#define  KME_DM_TOP1_KME_DM_TOP1_C4_regr_cnt0_kme_dm_top1(data)                  (0x000003FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_C4_get_regr_cnt2_kme_dm_top1(data)              ((0x3FF00000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_get_regr_cnt1_kme_dm_top1(data)              ((0x000FFC00&(data))>>10)
#define  KME_DM_TOP1_KME_DM_TOP1_C4_get_regr_cnt0_kme_dm_top1(data)              (0x000003FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_C8                                             0x1809C1C8
#define  KME_DM_TOP1_KME_DM_TOP1_C8_reg_addr                                     "0xB809C1C8"
#define  KME_DM_TOP1_KME_DM_TOP1_C8_reg                                          0xB809C1C8
#define  KME_DM_TOP1_KME_DM_TOP1_C8_inst_addr                                    "0x0032"
#define  set_KME_DM_TOP1_KME_DM_TOP1_C8_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_C8_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_C8_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_C8_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt5_kme_dm_top1_shift                  (20)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt4_kme_dm_top1_shift                  (10)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt3_kme_dm_top1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt5_kme_dm_top1_mask                   (0x3FF00000)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt4_kme_dm_top1_mask                   (0x000FFC00)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt3_kme_dm_top1_mask                   (0x000003FF)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt5_kme_dm_top1(data)                  (0x3FF00000&((data)<<20))
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt4_kme_dm_top1(data)                  (0x000FFC00&((data)<<10))
#define  KME_DM_TOP1_KME_DM_TOP1_C8_regr_cnt3_kme_dm_top1(data)                  (0x000003FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_C8_get_regr_cnt5_kme_dm_top1(data)              ((0x3FF00000&(data))>>20)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_get_regr_cnt4_kme_dm_top1(data)              ((0x000FFC00&(data))>>10)
#define  KME_DM_TOP1_KME_DM_TOP1_C8_get_regr_cnt3_kme_dm_top1(data)              (0x000003FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_CC                                             0x1809C1CC
#define  KME_DM_TOP1_KME_DM_TOP1_CC_reg_addr                                     "0xB809C1CC"
#define  KME_DM_TOP1_KME_DM_TOP1_CC_reg                                          0xB809C1CC
#define  KME_DM_TOP1_KME_DM_TOP1_CC_inst_addr                                    "0x0033"
#define  set_KME_DM_TOP1_KME_DM_TOP1_CC_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_CC_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_CC_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_CC_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_CC_regr_hs_v_num_kme_dm_top1_shift              (10)
#define  KME_DM_TOP1_KME_DM_TOP1_CC_regr_cnt6_kme_dm_top1_shift                  (0)
#define  KME_DM_TOP1_KME_DM_TOP1_CC_regr_hs_v_num_kme_dm_top1_mask               (0x003FFC00)
#define  KME_DM_TOP1_KME_DM_TOP1_CC_regr_cnt6_kme_dm_top1_mask                   (0x000003FF)
#define  KME_DM_TOP1_KME_DM_TOP1_CC_regr_hs_v_num_kme_dm_top1(data)              (0x003FFC00&((data)<<10))
#define  KME_DM_TOP1_KME_DM_TOP1_CC_regr_cnt6_kme_dm_top1(data)                  (0x000003FF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_CC_get_regr_hs_v_num_kme_dm_top1(data)          ((0x003FFC00&(data))>>10)
#define  KME_DM_TOP1_KME_DM_TOP1_CC_get_regr_cnt6_kme_dm_top1(data)              (0x000003FF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_D0                                             0x1809C1D0
#define  KME_DM_TOP1_KME_DM_TOP1_D0_reg_addr                                     "0xB809C1D0"
#define  KME_DM_TOP1_KME_DM_TOP1_D0_reg                                          0xB809C1D0
#define  KME_DM_TOP1_KME_DM_TOP1_D0_inst_addr                                    "0x0034"
#define  set_KME_DM_TOP1_KME_DM_TOP1_D0_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_D0_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_D0_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_D0_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_D0_regr_kme_me_total_data_cnt_shift             (0)
#define  KME_DM_TOP1_KME_DM_TOP1_D0_regr_kme_me_total_data_cnt_mask              (0x003FFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_D0_regr_kme_me_total_data_cnt(data)             (0x003FFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_D0_get_regr_kme_me_total_data_cnt(data)         (0x003FFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_D4                                             0x1809C1D4
#define  KME_DM_TOP1_KME_DM_TOP1_D4_reg_addr                                     "0xB809C1D4"
#define  KME_DM_TOP1_KME_DM_TOP1_D4_reg                                          0xB809C1D4
#define  KME_DM_TOP1_KME_DM_TOP1_D4_inst_addr                                    "0x0035"
#define  set_KME_DM_TOP1_KME_DM_TOP1_D4_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_D4_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_D4_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_D4_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_D4_regr_kme_me_h_data_cnt_shift                 (12)
#define  KME_DM_TOP1_KME_DM_TOP1_D4_regr_kme_me_total_v_cnt_shift                (0)
#define  KME_DM_TOP1_KME_DM_TOP1_D4_regr_kme_me_h_data_cnt_mask                  (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_D4_regr_kme_me_total_v_cnt_mask                 (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_D4_regr_kme_me_h_data_cnt(data)                 (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_D4_regr_kme_me_total_v_cnt(data)                (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_D4_get_regr_kme_me_h_data_cnt(data)             ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_D4_get_regr_kme_me_total_v_cnt(data)            (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_D8                                             0x1809C1D8
#define  KME_DM_TOP1_KME_DM_TOP1_D8_reg_addr                                     "0xB809C1D8"
#define  KME_DM_TOP1_KME_DM_TOP1_D8_reg                                          0xB809C1D8
#define  KME_DM_TOP1_KME_DM_TOP1_D8_inst_addr                                    "0x0036"
#define  set_KME_DM_TOP1_KME_DM_TOP1_D8_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_D8_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_D8_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_D8_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_D8_regr_kme_me_hs_data_cnt_max_shift            (12)
#define  KME_DM_TOP1_KME_DM_TOP1_D8_regr_kme_me_hs_data_cnt_shift                (0)
#define  KME_DM_TOP1_KME_DM_TOP1_D8_regr_kme_me_hs_data_cnt_max_mask             (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_D8_regr_kme_me_hs_data_cnt_mask                 (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_D8_regr_kme_me_hs_data_cnt_max(data)            (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_D8_regr_kme_me_hs_data_cnt(data)                (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_D8_get_regr_kme_me_hs_data_cnt_max(data)        ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_D8_get_regr_kme_me_hs_data_cnt(data)            (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_DC                                             0x1809C1DC
#define  KME_DM_TOP1_KME_DM_TOP1_DC_reg_addr                                     "0xB809C1DC"
#define  KME_DM_TOP1_KME_DM_TOP1_DC_reg                                          0xB809C1DC
#define  KME_DM_TOP1_KME_DM_TOP1_DC_inst_addr                                    "0x0037"
#define  set_KME_DM_TOP1_KME_DM_TOP1_DC_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_DC_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_DC_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_DC_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_DC_regr_kme_me_mtr_timer_data_cnt_max_shift     (16)
#define  KME_DM_TOP1_KME_DM_TOP1_DC_regr_kme_me_mtr_timer_data_cnt_shift         (0)
#define  KME_DM_TOP1_KME_DM_TOP1_DC_regr_kme_me_mtr_timer_data_cnt_max_mask      (0xFFFF0000)
#define  KME_DM_TOP1_KME_DM_TOP1_DC_regr_kme_me_mtr_timer_data_cnt_mask          (0x0000FFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_DC_regr_kme_me_mtr_timer_data_cnt_max(data)     (0xFFFF0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_DC_regr_kme_me_mtr_timer_data_cnt(data)         (0x0000FFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_DC_get_regr_kme_me_mtr_timer_data_cnt_max(data) ((0xFFFF0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_DC_get_regr_kme_me_mtr_timer_data_cnt(data)     (0x0000FFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_E0                                             0x1809C1E0
#define  KME_DM_TOP1_KME_DM_TOP1_E0_reg_addr                                     "0xB809C1E0"
#define  KME_DM_TOP1_KME_DM_TOP1_E0_reg                                          0xB809C1E0
#define  KME_DM_TOP1_KME_DM_TOP1_E0_inst_addr                                    "0x0038"
#define  set_KME_DM_TOP1_KME_DM_TOP1_E0_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_E0_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_E0_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_E0_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_E0_regr_kme_logo_total_data_cnt_shift           (0)
#define  KME_DM_TOP1_KME_DM_TOP1_E0_regr_kme_logo_total_data_cnt_mask            (0x003FFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_E0_regr_kme_logo_total_data_cnt(data)           (0x003FFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_E0_get_regr_kme_logo_total_data_cnt(data)       (0x003FFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_E4                                             0x1809C1E4
#define  KME_DM_TOP1_KME_DM_TOP1_E4_reg_addr                                     "0xB809C1E4"
#define  KME_DM_TOP1_KME_DM_TOP1_E4_reg                                          0xB809C1E4
#define  KME_DM_TOP1_KME_DM_TOP1_E4_inst_addr                                    "0x0039"
#define  set_KME_DM_TOP1_KME_DM_TOP1_E4_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_E4_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_E4_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_E4_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_E4_regr_kme_logo_h_data_cnt_shift               (12)
#define  KME_DM_TOP1_KME_DM_TOP1_E4_regr_kme_logo_total_v_cnt_shift              (0)
#define  KME_DM_TOP1_KME_DM_TOP1_E4_regr_kme_logo_h_data_cnt_mask                (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_E4_regr_kme_logo_total_v_cnt_mask               (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_E4_regr_kme_logo_h_data_cnt(data)               (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_E4_regr_kme_logo_total_v_cnt(data)              (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_E4_get_regr_kme_logo_h_data_cnt(data)           ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_E4_get_regr_kme_logo_total_v_cnt(data)          (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_E8                                             0x1809C1E8
#define  KME_DM_TOP1_KME_DM_TOP1_E8_reg_addr                                     "0xB809C1E8"
#define  KME_DM_TOP1_KME_DM_TOP1_E8_reg                                          0xB809C1E8
#define  KME_DM_TOP1_KME_DM_TOP1_E8_inst_addr                                    "0x003A"
#define  set_KME_DM_TOP1_KME_DM_TOP1_E8_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_E8_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_E8_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_E8_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_E8_regr_kme_logo_hs_data_cnt_max_shift          (12)
#define  KME_DM_TOP1_KME_DM_TOP1_E8_regr_kme_logo_hs_data_cnt_shift              (0)
#define  KME_DM_TOP1_KME_DM_TOP1_E8_regr_kme_logo_hs_data_cnt_max_mask           (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_E8_regr_kme_logo_hs_data_cnt_mask               (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_E8_regr_kme_logo_hs_data_cnt_max(data)          (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_E8_regr_kme_logo_hs_data_cnt(data)              (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_E8_get_regr_kme_logo_hs_data_cnt_max(data)      ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_E8_get_regr_kme_logo_hs_data_cnt(data)          (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_EC                                             0x1809C1EC
#define  KME_DM_TOP1_KME_DM_TOP1_EC_reg_addr                                     "0xB809C1EC"
#define  KME_DM_TOP1_KME_DM_TOP1_EC_reg                                          0xB809C1EC
#define  KME_DM_TOP1_KME_DM_TOP1_EC_inst_addr                                    "0x003B"
#define  set_KME_DM_TOP1_KME_DM_TOP1_EC_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_EC_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_EC_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_EC_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_EC_regr_kme_logo_mtr_timer_data_cnt_max_shift   (16)
#define  KME_DM_TOP1_KME_DM_TOP1_EC_regr_kme_logo_mtr_timer_data_cnt_shift       (0)
#define  KME_DM_TOP1_KME_DM_TOP1_EC_regr_kme_logo_mtr_timer_data_cnt_max_mask    (0xFFFF0000)
#define  KME_DM_TOP1_KME_DM_TOP1_EC_regr_kme_logo_mtr_timer_data_cnt_mask        (0x0000FFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_EC_regr_kme_logo_mtr_timer_data_cnt_max(data)   (0xFFFF0000&((data)<<16))
#define  KME_DM_TOP1_KME_DM_TOP1_EC_regr_kme_logo_mtr_timer_data_cnt(data)       (0x0000FFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_EC_get_regr_kme_logo_mtr_timer_data_cnt_max(data) ((0xFFFF0000&(data))>>16)
#define  KME_DM_TOP1_KME_DM_TOP1_EC_get_regr_kme_logo_mtr_timer_data_cnt(data)   (0x0000FFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_F0                                             0x1809C1F0
#define  KME_DM_TOP1_KME_DM_TOP1_F0_reg_addr                                     "0xB809C1F0"
#define  KME_DM_TOP1_KME_DM_TOP1_F0_reg                                          0xB809C1F0
#define  KME_DM_TOP1_KME_DM_TOP1_F0_inst_addr                                    "0x003C"
#define  set_KME_DM_TOP1_KME_DM_TOP1_F0_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_F0_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_F0_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_F0_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_F0_regr_kme_logo_h_latency_max_shift            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_F0_regr_kme_logo_h_latency_max_mask             (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_F0_regr_kme_logo_h_latency_max(data)            (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_F0_get_regr_kme_logo_h_latency_max(data)        (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_F4                                             0x1809C1F4
#define  KME_DM_TOP1_KME_DM_TOP1_F4_reg_addr                                     "0xB809C1F4"
#define  KME_DM_TOP1_KME_DM_TOP1_F4_reg                                          0xB809C1F4
#define  KME_DM_TOP1_KME_DM_TOP1_F4_inst_addr                                    "0x003D"
#define  set_KME_DM_TOP1_KME_DM_TOP1_F4_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_F4_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_F4_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_F4_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_F4_regr_kme_logo_h_latency_min_shift            (0)
#define  KME_DM_TOP1_KME_DM_TOP1_F4_regr_kme_logo_h_latency_min_mask             (0xFFFFFFFF)
#define  KME_DM_TOP1_KME_DM_TOP1_F4_regr_kme_logo_h_latency_min(data)            (0xFFFFFFFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_F4_get_regr_kme_logo_h_latency_min(data)        (0xFFFFFFFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_F8                                             0x1809C1F8
#define  KME_DM_TOP1_KME_DM_TOP1_F8_reg_addr                                     "0xB809C1F8"
#define  KME_DM_TOP1_KME_DM_TOP1_F8_reg                                          0xB809C1F8
#define  KME_DM_TOP1_KME_DM_TOP1_F8_inst_addr                                    "0x003E"
#define  set_KME_DM_TOP1_KME_DM_TOP1_F8_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_F8_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_F8_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_F8_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_F8_regr_kme_logo_h_latency_max_hcnt_shift       (12)
#define  KME_DM_TOP1_KME_DM_TOP1_F8_regr_kme_logo_h_latency_hcnt_shift           (0)
#define  KME_DM_TOP1_KME_DM_TOP1_F8_regr_kme_logo_h_latency_max_hcnt_mask        (0x00FFF000)
#define  KME_DM_TOP1_KME_DM_TOP1_F8_regr_kme_logo_h_latency_hcnt_mask            (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_F8_regr_kme_logo_h_latency_max_hcnt(data)       (0x00FFF000&((data)<<12))
#define  KME_DM_TOP1_KME_DM_TOP1_F8_regr_kme_logo_h_latency_hcnt(data)           (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_F8_get_regr_kme_logo_h_latency_max_hcnt(data)   ((0x00FFF000&(data))>>12)
#define  KME_DM_TOP1_KME_DM_TOP1_F8_get_regr_kme_logo_h_latency_hcnt(data)       (0x00000FFF&(data))

#define  KME_DM_TOP1_KME_DM_TOP1_FC                                             0x1809C1FC
#define  KME_DM_TOP1_KME_DM_TOP1_FC_reg_addr                                     "0xB809C1FC"
#define  KME_DM_TOP1_KME_DM_TOP1_FC_reg                                          0xB809C1FC
#define  KME_DM_TOP1_KME_DM_TOP1_FC_inst_addr                                    "0x003F"
#define  set_KME_DM_TOP1_KME_DM_TOP1_FC_reg(data)                                (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_FC_reg)=data)
#define  get_KME_DM_TOP1_KME_DM_TOP1_FC_reg                                      (*((volatile unsigned int*)KME_DM_TOP1_KME_DM_TOP1_FC_reg))
#define  KME_DM_TOP1_KME_DM_TOP1_FC_regr_kme_logo_h_latency_min_hcnt_shift       (0)
#define  KME_DM_TOP1_KME_DM_TOP1_FC_regr_kme_logo_h_latency_min_hcnt_mask        (0x00000FFF)
#define  KME_DM_TOP1_KME_DM_TOP1_FC_regr_kme_logo_h_latency_min_hcnt(data)       (0x00000FFF&(data))
#define  KME_DM_TOP1_KME_DM_TOP1_FC_get_regr_kme_logo_h_latency_min_hcnt(data)   (0x00000FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_DM_TOP1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  kme_08_mode:1;
        RBus_UInt32  kme_08_write_enable:1;
        RBus_UInt32  kme_08_cmdlen:4;
        RBus_UInt32  kme_08_qos:8;
        RBus_UInt32  kme_08_alen:8;
    };
}kme_dm_top1_kme_dm_top1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_08_threshold_n:9;
        RBus_UInt32  kme_08_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  kme_09_read_enable:1;
        RBus_UInt32  kme_09_cmdlen:4;
        RBus_UInt32  kme_09_qos:8;
        RBus_UInt32  kme_09_alen:8;
    };
}kme_dm_top1_kme_dm_top1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_09_threshold_n:9;
        RBus_UInt32  kme_09_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  kme_10_mode:1;
        RBus_UInt32  kme_10_write_enable:1;
        RBus_UInt32  kme_10_cmdlen:4;
        RBus_UInt32  kme_10_qos:8;
        RBus_UInt32  kme_10_alen:8;
    };
}kme_dm_top1_kme_dm_top1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_10_threshold_n:9;
        RBus_UInt32  kme_10_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  kme_11_read_enable:1;
        RBus_UInt32  kme_11_cmdlen:4;
        RBus_UInt32  kme_11_qos:8;
        RBus_UInt32  kme_11_alen:8;
    };
}kme_dm_top1_kme_dm_top1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_11_threshold_n:9;
        RBus_UInt32  kme_11_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  kme_12_mode:1;
        RBus_UInt32  kme_12_write_enable:1;
        RBus_UInt32  kme_12_cmdlen:4;
        RBus_UInt32  kme_12_qos:8;
        RBus_UInt32  kme_12_alen:8;
    };
}kme_dm_top1_kme_dm_top1_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_12_threshold_n:9;
        RBus_UInt32  kme_12_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  kme_13_read_enable:1;
        RBus_UInt32  kme_13_cmdlen:4;
        RBus_UInt32  kme_13_qos:8;
        RBus_UInt32  kme_13_alen:8;
    };
}kme_dm_top1_kme_dm_top1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_13_threshold_n:9;
        RBus_UInt32  kme_13_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  kme_14_mode:1;
        RBus_UInt32  kme_14_write_enable:1;
        RBus_UInt32  kme_14_cmdlen:4;
        RBus_UInt32  kme_14_qos:8;
        RBus_UInt32  kme_14_alen:8;
    };
}kme_dm_top1_kme_dm_top1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_14_threshold_n:9;
        RBus_UInt32  kme_14_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  kme_15_read_enable:1;
        RBus_UInt32  kme_15_cmdlen:4;
        RBus_UInt32  kme_15_qos:8;
        RBus_UInt32  kme_15_alen:8;
    };
}kme_dm_top1_kme_dm_top1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  kme_15_threshold_n:9;
        RBus_UInt32  kme_15_threshold_m:9;
    };
}kme_dm_top1_kme_dm_top1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_iplogo_vactive:12;
        RBus_UInt32  kme_iplogo_hactive:12;
    };
}kme_dm_top1_kme_dm_top1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_mlogo_vactive:12;
        RBus_UInt32  kme_mlogo_hactive:12;
    };
}kme_dm_top1_kme_dm_top1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_plogo_vactive:12;
        RBus_UInt32  kme_plogo_hactive:12;
    };
}kme_dm_top1_kme_dm_top1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_hlogo_vactive:12;
        RBus_UInt32  kme_hlogo_hactive:12;
    };
}kme_dm_top1_kme_dm_top1_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_hlogo_hnum:8;
        RBus_UInt32  kme_plogo_hnum:8;
        RBus_UInt32  kme_masklogo_hnum:8;
        RBus_UInt32  kme_iplogo_hnum:8;
    };
}kme_dm_top1_kme_dm_top1_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  frame_num_kme_dm_top1:10;
        RBus_UInt32  arb_num:1;
        RBus_UInt32  hs_force_hnum_kme_dm_top1:12;
        RBus_UInt32  hs_force_hnum_en_kme_dm_top1:1;
        RBus_UInt32  latency_clr_kme_dm_top1:1;
        RBus_UInt32  mtr_data_clr_kme_dm_top1:1;
        RBus_UInt32  clr_kme_dm_top1:1;
    };
}kme_dm_top1_kme_dm_top1_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  logo_agent_num:3;
        RBus_UInt32  me_agent_num:4;
        RBus_UInt32  threshold0_kme_dm_top1:12;
        RBus_UInt32  h_number_kme_dm_top1:12;
    };
}kme_dm_top1_kme_dm_top1_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  threshold2_kme_dm_top1:12;
        RBus_UInt32  threshold1_kme_dm_top1:12;
    };
}kme_dm_top1_kme_dm_top1_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  threshold4_kme_dm_top1:12;
        RBus_UInt32  threshold3_kme_dm_top1:12;
    };
}kme_dm_top1_kme_dm_top1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_me_cnt_v_num:12;
        RBus_UInt32  threshold5_kme_dm_top1:12;
    };
}kme_dm_top1_kme_dm_top1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  kme_logo_cnt_v_num:12;
    };
}kme_dm_top1_kme_dm_top1_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mtr_timer_kme_dm_top1:32;
    };
}kme_dm_top1_kme_dm_top1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_total_number:32;
    };
}kme_dm_top1_kme_dm_top1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_cnt2_kme_dm_top1:10;
        RBus_UInt32  regr_cnt1_kme_dm_top1:10;
        RBus_UInt32  regr_cnt0_kme_dm_top1:10;
    };
}kme_dm_top1_kme_dm_top1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  regr_cnt5_kme_dm_top1:10;
        RBus_UInt32  regr_cnt4_kme_dm_top1:10;
        RBus_UInt32  regr_cnt3_kme_dm_top1:10;
    };
}kme_dm_top1_kme_dm_top1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  regr_hs_v_num_kme_dm_top1:12;
        RBus_UInt32  regr_cnt6_kme_dm_top1:10;
    };
}kme_dm_top1_kme_dm_top1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  regr_kme_me_total_data_cnt:22;
    };
}kme_dm_top1_kme_dm_top1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kme_me_h_data_cnt:12;
        RBus_UInt32  regr_kme_me_total_v_cnt:12;
    };
}kme_dm_top1_kme_dm_top1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kme_me_hs_data_cnt_max:12;
        RBus_UInt32  regr_kme_me_hs_data_cnt:12;
    };
}kme_dm_top1_kme_dm_top1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me_mtr_timer_data_cnt_max:16;
        RBus_UInt32  regr_kme_me_mtr_timer_data_cnt:16;
    };
}kme_dm_top1_kme_dm_top1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  regr_kme_logo_total_data_cnt:22;
    };
}kme_dm_top1_kme_dm_top1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kme_logo_h_data_cnt:12;
        RBus_UInt32  regr_kme_logo_total_v_cnt:12;
    };
}kme_dm_top1_kme_dm_top1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kme_logo_hs_data_cnt_max:12;
        RBus_UInt32  regr_kme_logo_hs_data_cnt:12;
    };
}kme_dm_top1_kme_dm_top1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_mtr_timer_data_cnt_max:16;
        RBus_UInt32  regr_kme_logo_mtr_timer_data_cnt:16;
    };
}kme_dm_top1_kme_dm_top1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_h_latency_max:32;
    };
}kme_dm_top1_kme_dm_top1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_h_latency_min:32;
    };
}kme_dm_top1_kme_dm_top1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_kme_logo_h_latency_max_hcnt:12;
        RBus_UInt32  regr_kme_logo_h_latency_hcnt:12;
    };
}kme_dm_top1_kme_dm_top1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  regr_kme_logo_h_latency_min_hcnt:12;
    };
}kme_dm_top1_kme_dm_top1_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_DM_TOP1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_alen:8;
        RBus_UInt32  kme_08_qos:8;
        RBus_UInt32  kme_08_cmdlen:4;
        RBus_UInt32  kme_08_write_enable:1;
        RBus_UInt32  kme_08_mode:1;
        RBus_UInt32  res1:10;
    };
}kme_dm_top1_kme_dm_top1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_08_threshold_m:9;
        RBus_UInt32  kme_08_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_09_alen:8;
        RBus_UInt32  kme_09_qos:8;
        RBus_UInt32  kme_09_cmdlen:4;
        RBus_UInt32  kme_09_read_enable:1;
        RBus_UInt32  res1:11;
    };
}kme_dm_top1_kme_dm_top1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_09_threshold_m:9;
        RBus_UInt32  kme_09_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_alen:8;
        RBus_UInt32  kme_10_qos:8;
        RBus_UInt32  kme_10_cmdlen:4;
        RBus_UInt32  kme_10_write_enable:1;
        RBus_UInt32  kme_10_mode:1;
        RBus_UInt32  res1:10;
    };
}kme_dm_top1_kme_dm_top1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_10_threshold_m:9;
        RBus_UInt32  kme_10_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_11_alen:8;
        RBus_UInt32  kme_11_qos:8;
        RBus_UInt32  kme_11_cmdlen:4;
        RBus_UInt32  kme_11_read_enable:1;
        RBus_UInt32  res1:11;
    };
}kme_dm_top1_kme_dm_top1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_11_threshold_m:9;
        RBus_UInt32  kme_11_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_alen:8;
        RBus_UInt32  kme_12_qos:8;
        RBus_UInt32  kme_12_cmdlen:4;
        RBus_UInt32  kme_12_write_enable:1;
        RBus_UInt32  kme_12_mode:1;
        RBus_UInt32  res1:10;
    };
}kme_dm_top1_kme_dm_top1_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_12_threshold_m:9;
        RBus_UInt32  kme_12_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_13_alen:8;
        RBus_UInt32  kme_13_qos:8;
        RBus_UInt32  kme_13_cmdlen:4;
        RBus_UInt32  kme_13_read_enable:1;
        RBus_UInt32  res1:11;
    };
}kme_dm_top1_kme_dm_top1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_13_threshold_m:9;
        RBus_UInt32  kme_13_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_start_address0:32;
    };
}kme_dm_top1_kme_dm_top1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_start_address1:32;
    };
}kme_dm_top1_kme_dm_top1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_end_address0:32;
    };
}kme_dm_top1_kme_dm_top1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_end_address1:32;
    };
}kme_dm_top1_kme_dm_top1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_line_offset_addr:32;
    };
}kme_dm_top1_kme_dm_top1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_alen:8;
        RBus_UInt32  kme_14_qos:8;
        RBus_UInt32  kme_14_cmdlen:4;
        RBus_UInt32  kme_14_write_enable:1;
        RBus_UInt32  kme_14_mode:1;
        RBus_UInt32  res1:10;
    };
}kme_dm_top1_kme_dm_top1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_14_threshold_m:9;
        RBus_UInt32  kme_14_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_15_alen:8;
        RBus_UInt32  kme_15_qos:8;
        RBus_UInt32  kme_15_cmdlen:4;
        RBus_UInt32  kme_15_read_enable:1;
        RBus_UInt32  res1:11;
    };
}kme_dm_top1_kme_dm_top1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_15_threshold_m:9;
        RBus_UInt32  kme_15_threshold_n:9;
        RBus_UInt32  res1:14;
    };
}kme_dm_top1_kme_dm_top1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_iplogo_hactive:12;
        RBus_UInt32  kme_iplogo_vactive:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_mlogo_hactive:12;
        RBus_UInt32  kme_mlogo_vactive:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_plogo_hactive:12;
        RBus_UInt32  kme_plogo_vactive:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_hlogo_hactive:12;
        RBus_UInt32  kme_hlogo_vactive:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_iplogo_hnum:8;
        RBus_UInt32  kme_masklogo_hnum:8;
        RBus_UInt32  kme_plogo_hnum:8;
        RBus_UInt32  kme_hlogo_hnum:8;
    };
}kme_dm_top1_kme_dm_top1_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  clr_kme_dm_top1:1;
        RBus_UInt32  mtr_data_clr_kme_dm_top1:1;
        RBus_UInt32  latency_clr_kme_dm_top1:1;
        RBus_UInt32  hs_force_hnum_en_kme_dm_top1:1;
        RBus_UInt32  hs_force_hnum_kme_dm_top1:12;
        RBus_UInt32  arb_num:1;
        RBus_UInt32  frame_num_kme_dm_top1:10;
        RBus_UInt32  res1:5;
    };
}kme_dm_top1_kme_dm_top1_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  h_number_kme_dm_top1:12;
        RBus_UInt32  threshold0_kme_dm_top1:12;
        RBus_UInt32  me_agent_num:4;
        RBus_UInt32  logo_agent_num:3;
        RBus_UInt32  res1:1;
    };
}kme_dm_top1_kme_dm_top1_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  threshold1_kme_dm_top1:12;
        RBus_UInt32  threshold2_kme_dm_top1:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  threshold3_kme_dm_top1:12;
        RBus_UInt32  threshold4_kme_dm_top1:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  threshold5_kme_dm_top1:12;
        RBus_UInt32  kme_me_cnt_v_num:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kme_logo_cnt_v_num:12;
        RBus_UInt32  res1:20;
    };
}kme_dm_top1_kme_dm_top1_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mtr_timer_kme_dm_top1:32;
    };
}kme_dm_top1_kme_dm_top1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_total_number:32;
    };
}kme_dm_top1_kme_dm_top1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_cnt0_kme_dm_top1:10;
        RBus_UInt32  regr_cnt1_kme_dm_top1:10;
        RBus_UInt32  regr_cnt2_kme_dm_top1:10;
        RBus_UInt32  res1:2;
    };
}kme_dm_top1_kme_dm_top1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_cnt3_kme_dm_top1:10;
        RBus_UInt32  regr_cnt4_kme_dm_top1:10;
        RBus_UInt32  regr_cnt5_kme_dm_top1:10;
        RBus_UInt32  res1:2;
    };
}kme_dm_top1_kme_dm_top1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_cnt6_kme_dm_top1:10;
        RBus_UInt32  regr_hs_v_num_kme_dm_top1:12;
        RBus_UInt32  res1:10;
    };
}kme_dm_top1_kme_dm_top1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me_total_data_cnt:22;
        RBus_UInt32  res1:10;
    };
}kme_dm_top1_kme_dm_top1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me_total_v_cnt:12;
        RBus_UInt32  regr_kme_me_h_data_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me_hs_data_cnt:12;
        RBus_UInt32  regr_kme_me_hs_data_cnt_max:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_me_mtr_timer_data_cnt:16;
        RBus_UInt32  regr_kme_me_mtr_timer_data_cnt_max:16;
    };
}kme_dm_top1_kme_dm_top1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_total_data_cnt:22;
        RBus_UInt32  res1:10;
    };
}kme_dm_top1_kme_dm_top1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_total_v_cnt:12;
        RBus_UInt32  regr_kme_logo_h_data_cnt:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_hs_data_cnt:12;
        RBus_UInt32  regr_kme_logo_hs_data_cnt_max:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_mtr_timer_data_cnt:16;
        RBus_UInt32  regr_kme_logo_mtr_timer_data_cnt_max:16;
    };
}kme_dm_top1_kme_dm_top1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_h_latency_max:32;
    };
}kme_dm_top1_kme_dm_top1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_h_latency_min:32;
    };
}kme_dm_top1_kme_dm_top1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_h_latency_hcnt:12;
        RBus_UInt32  regr_kme_logo_h_latency_max_hcnt:12;
        RBus_UInt32  res1:8;
    };
}kme_dm_top1_kme_dm_top1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_kme_logo_h_latency_min_hcnt:12;
        RBus_UInt32  res1:20;
    };
}kme_dm_top1_kme_dm_top1_fc_RBUS;




#endif 


#endif 
