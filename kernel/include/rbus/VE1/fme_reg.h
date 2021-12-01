/**
* @file Merlin5_LGCY_VE_FME_Arch_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_FME_REG_H_
#define _RBUS_FME_REG_H_

#include "rbus_types.h"



//  FME Register Address
#define  FME_COMM                                                               0x1800F000
#define  FME_COMM_reg_addr                                                       "0xB800F000"
#define  FME_COMM_reg                                                            0xB800F000
#define  FME_COMM_inst_addr                                                      "0x0000"
#define  FME_COMM_inst_adr                                                       "0x0000"
#define  FME_COMM_inst                                                           0x0000
#define  set_FME_COMM_reg(data)                                                  (*((volatile unsigned int*)FME_COMM_reg)=data)
#define  get_FME_COMM_reg                                                        (*((volatile unsigned int*)FME_COMM_reg))
#define  FME_COMM_EncodeType_shift                                               (6)
#define  FME_COMM_EnableMVC_shift                                                (5)
#define  FME_COMM_PicType_shift                                                  (3)
#define  FME_COMM_FirstMbOfPic_shift                                             (2)
#define  FME_COMM_LastMbOfSlice_shift                                            (1)
#define  FME_COMM_FirstMbOfSlice_shift                                           (0)
#define  FME_COMM_EncodeType_mask                                                (0x000000C0)
#define  FME_COMM_EnableMVC_mask                                                 (0x00000020)
#define  FME_COMM_PicType_mask                                                   (0x00000018)
#define  FME_COMM_FirstMbOfPic_mask                                              (0x00000004)
#define  FME_COMM_LastMbOfSlice_mask                                             (0x00000002)
#define  FME_COMM_FirstMbOfSlice_mask                                            (0x00000001)
#define  FME_COMM_EncodeType(data)                                               (0x000000C0&((data)<<6))
#define  FME_COMM_EnableMVC(data)                                                (0x00000020&((data)<<5))
#define  FME_COMM_PicType(data)                                                  (0x00000018&((data)<<3))
#define  FME_COMM_FirstMbOfPic(data)                                             (0x00000004&((data)<<2))
#define  FME_COMM_LastMbOfSlice(data)                                            (0x00000002&((data)<<1))
#define  FME_COMM_FirstMbOfSlice(data)                                           (0x00000001&(data))
#define  FME_COMM_get_EncodeType(data)                                           ((0x000000C0&(data))>>6)
#define  FME_COMM_get_EnableMVC(data)                                            ((0x00000020&(data))>>5)
#define  FME_COMM_get_PicType(data)                                              ((0x00000018&(data))>>3)
#define  FME_COMM_get_FirstMbOfPic(data)                                         ((0x00000004&(data))>>2)
#define  FME_COMM_get_LastMbOfSlice(data)                                        ((0x00000002&(data))>>1)
#define  FME_COMM_get_FirstMbOfSlice(data)                                       (0x00000001&(data))
#define  FME_COMM_EncodeType_src(data)                                           ((0x000000C0&(data))>>6)
#define  FME_COMM_EnableMVC_src(data)                                            ((0x00000020&(data))>>5)
#define  FME_COMM_PicType_src(data)                                              ((0x00000018&(data))>>3)
#define  FME_COMM_FirstMbOfPic_src(data)                                         ((0x00000004&(data))>>2)
#define  FME_COMM_LastMbOfSlice_src(data)                                        ((0x00000002&(data))>>1)
#define  FME_COMM_FirstMbOfSlice_src(data)                                       (0x00000001&(data))

#define  FME_CTRL                                                               0x1800F004
#define  FME_CTRL_reg_addr                                                       "0xB800F004"
#define  FME_CTRL_reg                                                            0xB800F004
#define  FME_CTRL_inst_addr                                                      "0x0001"
#define  FME_CTRL_inst_adr                                                       "0x0001"
#define  FME_CTRL_inst                                                           0x0001
#define  set_FME_CTRL_reg(data)                                                  (*((volatile unsigned int*)FME_CTRL_reg)=data)
#define  get_FME_CTRL_reg                                                        (*((volatile unsigned int*)FME_CTRL_reg))
#define  FME_CTRL_hardware_shift                                                 (12)
#define  FME_CTRL_disable16x16BiDir_shift                                        (4)
#define  FME_CTRL_disable8x8BiDir_shift                                          (3)
#define  FME_CTRL_only16x16_shift                                                (2)
#define  FME_CTRL_search_shift                                                   (0)
#define  FME_CTRL_hardware_mask                                                  (0xFFFFF000)
#define  FME_CTRL_disable16x16BiDir_mask                                         (0x00000010)
#define  FME_CTRL_disable8x8BiDir_mask                                           (0x00000008)
#define  FME_CTRL_only16x16_mask                                                 (0x00000004)
#define  FME_CTRL_search_mask                                                    (0x00000003)
#define  FME_CTRL_hardware(data)                                                 (0xFFFFF000&((data)<<12))
#define  FME_CTRL_disable16x16BiDir(data)                                        (0x00000010&((data)<<4))
#define  FME_CTRL_disable8x8BiDir(data)                                          (0x00000008&((data)<<3))
#define  FME_CTRL_only16x16(data)                                                (0x00000004&((data)<<2))
#define  FME_CTRL_search(data)                                                   (0x00000003&(data))
#define  FME_CTRL_get_hardware(data)                                             ((0xFFFFF000&(data))>>12)
#define  FME_CTRL_get_disable16x16BiDir(data)                                    ((0x00000010&(data))>>4)
#define  FME_CTRL_get_disable8x8BiDir(data)                                      ((0x00000008&(data))>>3)
#define  FME_CTRL_get_only16x16(data)                                            ((0x00000004&(data))>>2)
#define  FME_CTRL_get_search(data)                                               (0x00000003&(data))
#define  FME_CTRL_hardware_src(data)                                             ((0xFFFFF000&(data))>>12)
#define  FME_CTRL_disable16x16BiDir_src(data)                                    ((0x00000010&(data))>>4)
#define  FME_CTRL_disable8x8BiDir_src(data)                                      ((0x00000008&(data))>>3)
#define  FME_CTRL_only16x16_src(data)                                            ((0x00000004&(data))>>2)
#define  FME_CTRL_search_src(data)                                               (0x00000003&(data))

#define  FME_MD0                                                                0x1800F008
#define  FME_MD0_reg_addr                                                        "0xB800F008"
#define  FME_MD0_reg                                                             0xB800F008
#define  FME_MD0_inst_addr                                                       "0x0002"
#define  FME_MD0_inst_adr                                                        "0x0002"
#define  FME_MD0_inst                                                            0x0002
#define  set_FME_MD0_reg(data)                                                   (*((volatile unsigned int*)FME_MD0_reg)=data)
#define  get_FME_MD0_reg                                                         (*((volatile unsigned int*)FME_MD0_reg))
#define  FME_MD0_reg_pskip_8x8th_shift                                           (24)
#define  FME_MD0_reg_pskip_coeffMax_shift                                        (16)
#define  FME_MD0_reg_xvid_sum4x4th_shift                                         (8)
#define  FME_MD0_reg_xvid_firstNZ4x4th_shift                                     (0)
#define  FME_MD0_reg_pskip_8x8th_mask                                            (0xFF000000)
#define  FME_MD0_reg_pskip_coeffMax_mask                                         (0x00FF0000)
#define  FME_MD0_reg_xvid_sum4x4th_mask                                          (0x0000FF00)
#define  FME_MD0_reg_xvid_firstNZ4x4th_mask                                      (0x000000FF)
#define  FME_MD0_reg_pskip_8x8th(data)                                           (0xFF000000&((data)<<24))
#define  FME_MD0_reg_pskip_coeffMax(data)                                        (0x00FF0000&((data)<<16))
#define  FME_MD0_reg_xvid_sum4x4th(data)                                         (0x0000FF00&((data)<<8))
#define  FME_MD0_reg_xvid_firstNZ4x4th(data)                                     (0x000000FF&(data))
#define  FME_MD0_get_reg_pskip_8x8th(data)                                       ((0xFF000000&(data))>>24)
#define  FME_MD0_get_reg_pskip_coeffMax(data)                                    ((0x00FF0000&(data))>>16)
#define  FME_MD0_get_reg_xvid_sum4x4th(data)                                     ((0x0000FF00&(data))>>8)
#define  FME_MD0_get_reg_xvid_firstNZ4x4th(data)                                 (0x000000FF&(data))
#define  FME_MD0_reg_pskip_8x8th_src(data)                                       ((0xFF000000&(data))>>24)
#define  FME_MD0_reg_pskip_coeffMax_src(data)                                    ((0x00FF0000&(data))>>16)
#define  FME_MD0_reg_xvid_sum4x4th_src(data)                                     ((0x0000FF00&(data))>>8)
#define  FME_MD0_reg_xvid_firstNZ4x4th_src(data)                                 (0x000000FF&(data))

#define  FME_MD1                                                                0x1800F00C
#define  FME_MD1_reg_addr                                                        "0xB800F00C"
#define  FME_MD1_reg                                                             0xB800F00C
#define  FME_MD1_inst_addr                                                       "0x0003"
#define  FME_MD1_inst_adr                                                        "0x0003"
#define  FME_MD1_inst                                                            0x0003
#define  set_FME_MD1_reg(data)                                                   (*((volatile unsigned int*)FME_MD1_reg)=data)
#define  get_FME_MD1_reg                                                         (*((volatile unsigned int*)FME_MD1_reg))
#define  FME_MD1_subMbCostP8x8_shift                                             (16)
#define  FME_MD1_reg_pskip_mbth_shift                                            (8)
#define  FME_MD1_skip_cost_weight_shift                                          (0)
#define  FME_MD1_subMbCostP8x8_mask                                              (0x00FF0000)
#define  FME_MD1_reg_pskip_mbth_mask                                             (0x0000FF00)
#define  FME_MD1_skip_cost_weight_mask                                           (0x000000FF)
#define  FME_MD1_subMbCostP8x8(data)                                             (0x00FF0000&((data)<<16))
#define  FME_MD1_reg_pskip_mbth(data)                                            (0x0000FF00&((data)<<8))
#define  FME_MD1_skip_cost_weight(data)                                          (0x000000FF&(data))
#define  FME_MD1_get_subMbCostP8x8(data)                                         ((0x00FF0000&(data))>>16)
#define  FME_MD1_get_reg_pskip_mbth(data)                                        ((0x0000FF00&(data))>>8)
#define  FME_MD1_get_skip_cost_weight(data)                                      (0x000000FF&(data))
#define  FME_MD1_subMbCostP8x8_src(data)                                         ((0x00FF0000&(data))>>16)
#define  FME_MD1_reg_pskip_mbth_src(data)                                        ((0x0000FF00&(data))>>8)
#define  FME_MD1_skip_cost_weight_src(data)                                      (0x000000FF&(data))

#define  FME_MD2                                                                0x1800F010
#define  FME_MD2_reg_addr                                                        "0xB800F010"
#define  FME_MD2_reg                                                             0xB800F010
#define  FME_MD2_inst_addr                                                       "0x0004"
#define  FME_MD2_inst_adr                                                        "0x0004"
#define  FME_MD2_inst                                                            0x0004
#define  set_FME_MD2_reg(data)                                                   (*((volatile unsigned int*)FME_MD2_reg)=data)
#define  get_FME_MD2_reg                                                         (*((volatile unsigned int*)FME_MD2_reg))
#define  FME_MD2_mbCost16x16L0_shift                                             (24)
#define  FME_MD2_mbCost16x16L1_shift                                             (16)
#define  FME_MD2_subMbCost8x8L0_shift                                            (8)
#define  FME_MD2_subMbCost8x8L1_shift                                            (0)
#define  FME_MD2_mbCost16x16L0_mask                                              (0xFF000000)
#define  FME_MD2_mbCost16x16L1_mask                                              (0x00FF0000)
#define  FME_MD2_subMbCost8x8L0_mask                                             (0x0000FF00)
#define  FME_MD2_subMbCost8x8L1_mask                                             (0x000000FF)
#define  FME_MD2_mbCost16x16L0(data)                                             (0xFF000000&((data)<<24))
#define  FME_MD2_mbCost16x16L1(data)                                             (0x00FF0000&((data)<<16))
#define  FME_MD2_subMbCost8x8L0(data)                                            (0x0000FF00&((data)<<8))
#define  FME_MD2_subMbCost8x8L1(data)                                            (0x000000FF&(data))
#define  FME_MD2_get_mbCost16x16L0(data)                                         ((0xFF000000&(data))>>24)
#define  FME_MD2_get_mbCost16x16L1(data)                                         ((0x00FF0000&(data))>>16)
#define  FME_MD2_get_subMbCost8x8L0(data)                                        ((0x0000FF00&(data))>>8)
#define  FME_MD2_get_subMbCost8x8L1(data)                                        (0x000000FF&(data))
#define  FME_MD2_mbCost16x16L0_src(data)                                         ((0xFF000000&(data))>>24)
#define  FME_MD2_mbCost16x16L1_src(data)                                         ((0x00FF0000&(data))>>16)
#define  FME_MD2_subMbCost8x8L0_src(data)                                        ((0x0000FF00&(data))>>8)
#define  FME_MD2_subMbCost8x8L1_src(data)                                        (0x000000FF&(data))

#define  FME_MD3                                                                0x1800F014
#define  FME_MD3_reg_addr                                                        "0xB800F014"
#define  FME_MD3_reg                                                             0xB800F014
#define  FME_MD3_inst_addr                                                       "0x0005"
#define  FME_MD3_inst_adr                                                        "0x0005"
#define  FME_MD3_inst                                                            0x0005
#define  set_FME_MD3_reg(data)                                                   (*((volatile unsigned int*)FME_MD3_reg)=data)
#define  get_FME_MD3_reg                                                         (*((volatile unsigned int*)FME_MD3_reg))
#define  FME_MD3_mbCostB8x8_shift                                                (16)
#define  FME_MD3_mbCost16x16Bi_shift                                             (8)
#define  FME_MD3_subMbCost8x8Bi_shift                                            (0)
#define  FME_MD3_mbCostB8x8_mask                                                 (0x00FF0000)
#define  FME_MD3_mbCost16x16Bi_mask                                              (0x0000FF00)
#define  FME_MD3_subMbCost8x8Bi_mask                                             (0x000000FF)
#define  FME_MD3_mbCostB8x8(data)                                                (0x00FF0000&((data)<<16))
#define  FME_MD3_mbCost16x16Bi(data)                                             (0x0000FF00&((data)<<8))
#define  FME_MD3_subMbCost8x8Bi(data)                                            (0x000000FF&(data))
#define  FME_MD3_get_mbCostB8x8(data)                                            ((0x00FF0000&(data))>>16)
#define  FME_MD3_get_mbCost16x16Bi(data)                                         ((0x0000FF00&(data))>>8)
#define  FME_MD3_get_subMbCost8x8Bi(data)                                        (0x000000FF&(data))
#define  FME_MD3_mbCostB8x8_src(data)                                            ((0x00FF0000&(data))>>16)
#define  FME_MD3_mbCost16x16Bi_src(data)                                         ((0x0000FF00&(data))>>8)
#define  FME_MD3_subMbCost8x8Bi_src(data)                                        (0x000000FF&(data))

#define  FME_MD4                                                                0x1800F018
#define  FME_MD4_reg_addr                                                        "0xB800F018"
#define  FME_MD4_reg                                                             0xB800F018
#define  FME_MD4_inst_addr                                                       "0x0006"
#define  FME_MD4_inst_adr                                                        "0x0006"
#define  FME_MD4_inst                                                            0x0006
#define  set_FME_MD4_reg(data)                                                   (*((volatile unsigned int*)FME_MD4_reg)=data)
#define  get_FME_MD4_reg                                                         (*((volatile unsigned int*)FME_MD4_reg))
#define  FME_MD4_M_shift                                                         (16)
#define  FME_MD4_subMbCost8x8direct_shift                                        (8)
#define  FME_MD4_mbCost16x16direct_shift                                         (0)
#define  FME_MD4_M_mask                                                          (0xFFFF0000)
#define  FME_MD4_subMbCost8x8direct_mask                                         (0x0000FF00)
#define  FME_MD4_mbCost16x16direct_mask                                          (0x000000FF)
#define  FME_MD4_M(data)                                                         (0xFFFF0000&((data)<<16))
#define  FME_MD4_subMbCost8x8direct(data)                                        (0x0000FF00&((data)<<8))
#define  FME_MD4_mbCost16x16direct(data)                                         (0x000000FF&(data))
#define  FME_MD4_get_M(data)                                                     ((0xFFFF0000&(data))>>16)
#define  FME_MD4_get_subMbCost8x8direct(data)                                    ((0x0000FF00&(data))>>8)
#define  FME_MD4_get_mbCost16x16direct(data)                                     (0x000000FF&(data))
#define  FME_MD4_M_src(data)                                                     ((0xFFFF0000&(data))>>16)
#define  FME_MD4_subMbCost8x8direct_src(data)                                    ((0x0000FF00&(data))>>8)
#define  FME_MD4_mbCost16x16direct_src(data)                                     (0x000000FF&(data))

#define  FME_TOPRR_B2_FW                                                        0x1800F01C
#define  FME_TOPRR_B2_FW_reg_addr                                                "0xB800F01C"
#define  FME_TOPRR_B2_FW_reg                                                     0xB800F01C
#define  FME_TOPRR_B2_FW_inst_addr                                               "0x0007"
#define  FME_TOPRR_B2_FW_inst_adr                                                "0x0007"
#define  FME_TOPRR_B2_FW_inst                                                    0x0007
#define  set_FME_TOPRR_B2_FW_reg(data)                                           (*((volatile unsigned int*)FME_TOPRR_B2_FW_reg)=data)
#define  get_FME_TOPRR_B2_FW_reg                                                 (*((volatile unsigned int*)FME_TOPRR_B2_FW_reg))
#define  FME_TOPRR_B2_FW_refidx_shift                                            (21)
#define  FME_TOPRR_B2_FW_mvx_shift                                               (9)
#define  FME_TOPRR_B2_FW_mvy_shift                                               (0)
#define  FME_TOPRR_B2_FW_refidx_mask                                             (0x00600000)
#define  FME_TOPRR_B2_FW_mvx_mask                                                (0x001FFE00)
#define  FME_TOPRR_B2_FW_mvy_mask                                                (0x000001FF)
#define  FME_TOPRR_B2_FW_refidx(data)                                            (0x00600000&((data)<<21))
#define  FME_TOPRR_B2_FW_mvx(data)                                               (0x001FFE00&((data)<<9))
#define  FME_TOPRR_B2_FW_mvy(data)                                               (0x000001FF&(data))
#define  FME_TOPRR_B2_FW_get_refidx(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B2_FW_get_mvx(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B2_FW_get_mvy(data)                                           (0x000001FF&(data))
#define  FME_TOPRR_B2_FW_refidx_src(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B2_FW_mvx_src(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B2_FW_mvy_src(data)                                           (0x000001FF&(data))

#define  FME_TOPRR_B2_BW                                                        0x1800F020
#define  FME_TOPRR_B2_BW_reg_addr                                                "0xB800F020"
#define  FME_TOPRR_B2_BW_reg                                                     0xB800F020
#define  FME_TOPRR_B2_BW_inst_addr                                               "0x0008"
#define  FME_TOPRR_B2_BW_inst_adr                                                "0x0008"
#define  FME_TOPRR_B2_BW_inst                                                    0x0008
#define  set_FME_TOPRR_B2_BW_reg(data)                                           (*((volatile unsigned int*)FME_TOPRR_B2_BW_reg)=data)
#define  get_FME_TOPRR_B2_BW_reg                                                 (*((volatile unsigned int*)FME_TOPRR_B2_BW_reg))
#define  FME_TOPRR_B2_BW_refidx_shift                                            (21)
#define  FME_TOPRR_B2_BW_mvx_shift                                               (9)
#define  FME_TOPRR_B2_BW_mvy_shift                                               (0)
#define  FME_TOPRR_B2_BW_refidx_mask                                             (0x00600000)
#define  FME_TOPRR_B2_BW_mvx_mask                                                (0x001FFE00)
#define  FME_TOPRR_B2_BW_mvy_mask                                                (0x000001FF)
#define  FME_TOPRR_B2_BW_refidx(data)                                            (0x00600000&((data)<<21))
#define  FME_TOPRR_B2_BW_mvx(data)                                               (0x001FFE00&((data)<<9))
#define  FME_TOPRR_B2_BW_mvy(data)                                               (0x000001FF&(data))
#define  FME_TOPRR_B2_BW_get_refidx(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B2_BW_get_mvx(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B2_BW_get_mvy(data)                                           (0x000001FF&(data))
#define  FME_TOPRR_B2_BW_refidx_src(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B2_BW_mvx_src(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B2_BW_mvy_src(data)                                           (0x000001FF&(data))

#define  FME_TOPRR_B3_FW                                                        0x1800F024
#define  FME_TOPRR_B3_FW_reg_addr                                                "0xB800F024"
#define  FME_TOPRR_B3_FW_reg                                                     0xB800F024
#define  FME_TOPRR_B3_FW_inst_addr                                               "0x0009"
#define  FME_TOPRR_B3_FW_inst_adr                                                "0x0009"
#define  FME_TOPRR_B3_FW_inst                                                    0x0009
#define  set_FME_TOPRR_B3_FW_reg(data)                                           (*((volatile unsigned int*)FME_TOPRR_B3_FW_reg)=data)
#define  get_FME_TOPRR_B3_FW_reg                                                 (*((volatile unsigned int*)FME_TOPRR_B3_FW_reg))
#define  FME_TOPRR_B3_FW_refidx_shift                                            (21)
#define  FME_TOPRR_B3_FW_mvx_shift                                               (9)
#define  FME_TOPRR_B3_FW_mvy_shift                                               (0)
#define  FME_TOPRR_B3_FW_refidx_mask                                             (0x00600000)
#define  FME_TOPRR_B3_FW_mvx_mask                                                (0x001FFE00)
#define  FME_TOPRR_B3_FW_mvy_mask                                                (0x000001FF)
#define  FME_TOPRR_B3_FW_refidx(data)                                            (0x00600000&((data)<<21))
#define  FME_TOPRR_B3_FW_mvx(data)                                               (0x001FFE00&((data)<<9))
#define  FME_TOPRR_B3_FW_mvy(data)                                               (0x000001FF&(data))
#define  FME_TOPRR_B3_FW_get_refidx(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B3_FW_get_mvx(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B3_FW_get_mvy(data)                                           (0x000001FF&(data))
#define  FME_TOPRR_B3_FW_refidx_src(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B3_FW_mvx_src(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B3_FW_mvy_src(data)                                           (0x000001FF&(data))

#define  FME_TOPRR_B3_BW                                                        0x1800F028
#define  FME_TOPRR_B3_BW_reg_addr                                                "0xB800F028"
#define  FME_TOPRR_B3_BW_reg                                                     0xB800F028
#define  FME_TOPRR_B3_BW_inst_addr                                               "0x000A"
#define  FME_TOPRR_B3_BW_inst_adr                                                "0x000A"
#define  FME_TOPRR_B3_BW_inst                                                    0x000A
#define  set_FME_TOPRR_B3_BW_reg(data)                                           (*((volatile unsigned int*)FME_TOPRR_B3_BW_reg)=data)
#define  get_FME_TOPRR_B3_BW_reg                                                 (*((volatile unsigned int*)FME_TOPRR_B3_BW_reg))
#define  FME_TOPRR_B3_BW_refidx_shift                                            (21)
#define  FME_TOPRR_B3_BW_mvx_shift                                               (9)
#define  FME_TOPRR_B3_BW_mvy_shift                                               (0)
#define  FME_TOPRR_B3_BW_refidx_mask                                             (0x00600000)
#define  FME_TOPRR_B3_BW_mvx_mask                                                (0x001FFE00)
#define  FME_TOPRR_B3_BW_mvy_mask                                                (0x000001FF)
#define  FME_TOPRR_B3_BW_refidx(data)                                            (0x00600000&((data)<<21))
#define  FME_TOPRR_B3_BW_mvx(data)                                               (0x001FFE00&((data)<<9))
#define  FME_TOPRR_B3_BW_mvy(data)                                               (0x000001FF&(data))
#define  FME_TOPRR_B3_BW_get_refidx(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B3_BW_get_mvx(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B3_BW_get_mvy(data)                                           (0x000001FF&(data))
#define  FME_TOPRR_B3_BW_refidx_src(data)                                        ((0x00600000&(data))>>21)
#define  FME_TOPRR_B3_BW_mvx_src(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_TOPRR_B3_BW_mvy_src(data)                                           (0x000001FF&(data))

#define  FME_COL                                                                0x1800F02C
#define  FME_COL_reg_addr                                                        "0xB800F02C"
#define  FME_COL_reg                                                             0xB800F02C
#define  FME_COL_inst_addr                                                       "0x000B"
#define  FME_COL_inst_adr                                                        "0x000B"
#define  FME_COL_inst                                                            0x000B
#define  set_FME_COL_reg(data)                                                   (*((volatile unsigned int*)FME_COL_reg)=data)
#define  get_FME_COL_reg                                                         (*((volatile unsigned int*)FME_COL_reg))
#define  FME_COL_zero_shift                                                      (0)
#define  FME_COL_zero_mask                                                       (0x0000000F)
#define  FME_COL_zero(data)                                                      (0x0000000F&(data))
#define  FME_COL_get_zero(data)                                                  (0x0000000F&(data))
#define  FME_COL_zero_src(data)                                                  (0x0000000F&(data))

#define  FME_MVCOST                                                             0x1800F030
#define  FME_MVCOST_reg_addr                                                     "0xB800F030"
#define  FME_MVCOST_reg                                                          0xB800F030
#define  FME_MVCOST_inst_addr                                                    "0x000C"
#define  FME_MVCOST_inst_adr                                                     "0x000C"
#define  FME_MVCOST_inst                                                         0x000C
#define  set_FME_MVCOST_reg(data)                                                (*((volatile unsigned int*)FME_MVCOST_reg)=data)
#define  get_FME_MVCOST_reg                                                      (*((volatile unsigned int*)FME_MVCOST_reg))
#define  FME_MVCOST_maxfrac_shift                                                (24)
#define  FME_MVCOST_maxintg_shift                                                (16)
#define  FME_MVCOST_bfrac_shift                                                  (12)
#define  FME_MVCOST_bintg_shift                                                  (8)
#define  FME_MVCOST_lambda_shift                                                 (0)
#define  FME_MVCOST_maxfrac_mask                                                 (0x1F000000)
#define  FME_MVCOST_maxintg_mask                                                 (0x000F0000)
#define  FME_MVCOST_bfrac_mask                                                   (0x0000F000)
#define  FME_MVCOST_bintg_mask                                                   (0x00000F00)
#define  FME_MVCOST_lambda_mask                                                  (0x0000007F)
#define  FME_MVCOST_maxfrac(data)                                                (0x1F000000&((data)<<24))
#define  FME_MVCOST_maxintg(data)                                                (0x000F0000&((data)<<16))
#define  FME_MVCOST_bfrac(data)                                                  (0x0000F000&((data)<<12))
#define  FME_MVCOST_bintg(data)                                                  (0x00000F00&((data)<<8))
#define  FME_MVCOST_lambda(data)                                                 (0x0000007F&(data))
#define  FME_MVCOST_get_maxfrac(data)                                            ((0x1F000000&(data))>>24)
#define  FME_MVCOST_get_maxintg(data)                                            ((0x000F0000&(data))>>16)
#define  FME_MVCOST_get_bfrac(data)                                              ((0x0000F000&(data))>>12)
#define  FME_MVCOST_get_bintg(data)                                              ((0x00000F00&(data))>>8)
#define  FME_MVCOST_get_lambda(data)                                             (0x0000007F&(data))
#define  FME_MVCOST_maxfrac_src(data)                                            ((0x1F000000&(data))>>24)
#define  FME_MVCOST_maxintg_src(data)                                            ((0x000F0000&(data))>>16)
#define  FME_MVCOST_bfrac_src(data)                                              ((0x0000F000&(data))>>12)
#define  FME_MVCOST_bintg_src(data)                                              ((0x00000F00&(data))>>8)
#define  FME_MVCOST_lambda_src(data)                                             (0x0000007F&(data))

#define  FME_PSKIPCOST0                                                         0x1800F034
#define  FME_PSKIPCOST0_reg_addr                                                 "0xB800F034"
#define  FME_PSKIPCOST0_reg                                                      0xB800F034
#define  FME_PSKIPCOST0_inst_addr                                                "0x000D"
#define  FME_PSKIPCOST0_inst_adr                                                 "0x000D"
#define  FME_PSKIPCOST0_inst                                                     0x000D
#define  set_FME_PSKIPCOST0_reg(data)                                            (*((volatile unsigned int*)FME_PSKIPCOST0_reg)=data)
#define  get_FME_PSKIPCOST0_reg                                                  (*((volatile unsigned int*)FME_PSKIPCOST0_reg))
#define  FME_PSKIPCOST0_run0_shift                                               (28)
#define  FME_PSKIPCOST0_run1_shift                                               (24)
#define  FME_PSKIPCOST0_run2_shift                                               (20)
#define  FME_PSKIPCOST0_run3_shift                                               (16)
#define  FME_PSKIPCOST0_run4_shift                                               (12)
#define  FME_PSKIPCOST0_run5_shift                                               (8)
#define  FME_PSKIPCOST0_run6_shift                                               (4)
#define  FME_PSKIPCOST0_run7_shift                                               (0)
#define  FME_PSKIPCOST0_run0_mask                                                (0xF0000000)
#define  FME_PSKIPCOST0_run1_mask                                                (0x0F000000)
#define  FME_PSKIPCOST0_run2_mask                                                (0x00F00000)
#define  FME_PSKIPCOST0_run3_mask                                                (0x000F0000)
#define  FME_PSKIPCOST0_run4_mask                                                (0x0000F000)
#define  FME_PSKIPCOST0_run5_mask                                                (0x00000F00)
#define  FME_PSKIPCOST0_run6_mask                                                (0x000000F0)
#define  FME_PSKIPCOST0_run7_mask                                                (0x0000000F)
#define  FME_PSKIPCOST0_run0(data)                                               (0xF0000000&((data)<<28))
#define  FME_PSKIPCOST0_run1(data)                                               (0x0F000000&((data)<<24))
#define  FME_PSKIPCOST0_run2(data)                                               (0x00F00000&((data)<<20))
#define  FME_PSKIPCOST0_run3(data)                                               (0x000F0000&((data)<<16))
#define  FME_PSKIPCOST0_run4(data)                                               (0x0000F000&((data)<<12))
#define  FME_PSKIPCOST0_run5(data)                                               (0x00000F00&((data)<<8))
#define  FME_PSKIPCOST0_run6(data)                                               (0x000000F0&((data)<<4))
#define  FME_PSKIPCOST0_run7(data)                                               (0x0000000F&(data))
#define  FME_PSKIPCOST0_get_run0(data)                                           ((0xF0000000&(data))>>28)
#define  FME_PSKIPCOST0_get_run1(data)                                           ((0x0F000000&(data))>>24)
#define  FME_PSKIPCOST0_get_run2(data)                                           ((0x00F00000&(data))>>20)
#define  FME_PSKIPCOST0_get_run3(data)                                           ((0x000F0000&(data))>>16)
#define  FME_PSKIPCOST0_get_run4(data)                                           ((0x0000F000&(data))>>12)
#define  FME_PSKIPCOST0_get_run5(data)                                           ((0x00000F00&(data))>>8)
#define  FME_PSKIPCOST0_get_run6(data)                                           ((0x000000F0&(data))>>4)
#define  FME_PSKIPCOST0_get_run7(data)                                           (0x0000000F&(data))
#define  FME_PSKIPCOST0_run0_src(data)                                           ((0xF0000000&(data))>>28)
#define  FME_PSKIPCOST0_run1_src(data)                                           ((0x0F000000&(data))>>24)
#define  FME_PSKIPCOST0_run2_src(data)                                           ((0x00F00000&(data))>>20)
#define  FME_PSKIPCOST0_run3_src(data)                                           ((0x000F0000&(data))>>16)
#define  FME_PSKIPCOST0_run4_src(data)                                           ((0x0000F000&(data))>>12)
#define  FME_PSKIPCOST0_run5_src(data)                                           ((0x00000F00&(data))>>8)
#define  FME_PSKIPCOST0_run6_src(data)                                           ((0x000000F0&(data))>>4)
#define  FME_PSKIPCOST0_run7_src(data)                                           (0x0000000F&(data))

#define  FME_PSKIPCOST1                                                         0x1800F038
#define  FME_PSKIPCOST1_reg_addr                                                 "0xB800F038"
#define  FME_PSKIPCOST1_reg                                                      0xB800F038
#define  FME_PSKIPCOST1_inst_addr                                                "0x000E"
#define  FME_PSKIPCOST1_inst_adr                                                 "0x000E"
#define  FME_PSKIPCOST1_inst                                                     0x000E
#define  set_FME_PSKIPCOST1_reg(data)                                            (*((volatile unsigned int*)FME_PSKIPCOST1_reg)=data)
#define  get_FME_PSKIPCOST1_reg                                                  (*((volatile unsigned int*)FME_PSKIPCOST1_reg))
#define  FME_PSKIPCOST1_run8_shift                                               (28)
#define  FME_PSKIPCOST1_run9_shift                                               (24)
#define  FME_PSKIPCOST1_run10_shift                                              (20)
#define  FME_PSKIPCOST1_run11_shift                                              (16)
#define  FME_PSKIPCOST1_run12_shift                                              (12)
#define  FME_PSKIPCOST1_run13_shift                                              (8)
#define  FME_PSKIPCOST1_run14_shift                                              (4)
#define  FME_PSKIPCOST1_run15_shift                                              (0)
#define  FME_PSKIPCOST1_run8_mask                                                (0xF0000000)
#define  FME_PSKIPCOST1_run9_mask                                                (0x0F000000)
#define  FME_PSKIPCOST1_run10_mask                                               (0x00F00000)
#define  FME_PSKIPCOST1_run11_mask                                               (0x000F0000)
#define  FME_PSKIPCOST1_run12_mask                                               (0x0000F000)
#define  FME_PSKIPCOST1_run13_mask                                               (0x00000F00)
#define  FME_PSKIPCOST1_run14_mask                                               (0x000000F0)
#define  FME_PSKIPCOST1_run15_mask                                               (0x0000000F)
#define  FME_PSKIPCOST1_run8(data)                                               (0xF0000000&((data)<<28))
#define  FME_PSKIPCOST1_run9(data)                                               (0x0F000000&((data)<<24))
#define  FME_PSKIPCOST1_run10(data)                                              (0x00F00000&((data)<<20))
#define  FME_PSKIPCOST1_run11(data)                                              (0x000F0000&((data)<<16))
#define  FME_PSKIPCOST1_run12(data)                                              (0x0000F000&((data)<<12))
#define  FME_PSKIPCOST1_run13(data)                                              (0x00000F00&((data)<<8))
#define  FME_PSKIPCOST1_run14(data)                                              (0x000000F0&((data)<<4))
#define  FME_PSKIPCOST1_run15(data)                                              (0x0000000F&(data))
#define  FME_PSKIPCOST1_get_run8(data)                                           ((0xF0000000&(data))>>28)
#define  FME_PSKIPCOST1_get_run9(data)                                           ((0x0F000000&(data))>>24)
#define  FME_PSKIPCOST1_get_run10(data)                                          ((0x00F00000&(data))>>20)
#define  FME_PSKIPCOST1_get_run11(data)                                          ((0x000F0000&(data))>>16)
#define  FME_PSKIPCOST1_get_run12(data)                                          ((0x0000F000&(data))>>12)
#define  FME_PSKIPCOST1_get_run13(data)                                          ((0x00000F00&(data))>>8)
#define  FME_PSKIPCOST1_get_run14(data)                                          ((0x000000F0&(data))>>4)
#define  FME_PSKIPCOST1_get_run15(data)                                          (0x0000000F&(data))
#define  FME_PSKIPCOST1_run8_src(data)                                           ((0xF0000000&(data))>>28)
#define  FME_PSKIPCOST1_run9_src(data)                                           ((0x0F000000&(data))>>24)
#define  FME_PSKIPCOST1_run10_src(data)                                          ((0x00F00000&(data))>>20)
#define  FME_PSKIPCOST1_run11_src(data)                                          ((0x000F0000&(data))>>16)
#define  FME_PSKIPCOST1_run12_src(data)                                          ((0x0000F000&(data))>>12)
#define  FME_PSKIPCOST1_run13_src(data)                                          ((0x00000F00&(data))>>8)
#define  FME_PSKIPCOST1_run14_src(data)                                          ((0x000000F0&(data))>>4)
#define  FME_PSKIPCOST1_run15_src(data)                                          (0x0000000F&(data))

#define  FME_SKIPDMA                                                            0x1800F03C
#define  FME_SKIPDMA_reg_addr                                                    "0xB800F03C"
#define  FME_SKIPDMA_reg                                                         0xB800F03C
#define  FME_SKIPDMA_inst_addr                                                   "0x000F"
#define  FME_SKIPDMA_inst_adr                                                    "0x000F"
#define  FME_SKIPDMA_inst                                                        0x000F
#define  set_FME_SKIPDMA_reg(data)                                               (*((volatile unsigned int*)FME_SKIPDMA_reg)=data)
#define  get_FME_SKIPDMA_reg                                                     (*((volatile unsigned int*)FME_SKIPDMA_reg))
#define  FME_SKIPDMA_chromapicidx_fw_shift                                       (7)
#define  FME_SKIPDMA_chromapicidx_bw_shift                                       (0)
#define  FME_SKIPDMA_chromapicidx_fw_mask                                        (0x00003F80)
#define  FME_SKIPDMA_chromapicidx_bw_mask                                        (0x0000007F)
#define  FME_SKIPDMA_chromapicidx_fw(data)                                       (0x00003F80&((data)<<7))
#define  FME_SKIPDMA_chromapicidx_bw(data)                                       (0x0000007F&(data))
#define  FME_SKIPDMA_get_chromapicidx_fw(data)                                   ((0x00003F80&(data))>>7)
#define  FME_SKIPDMA_get_chromapicidx_bw(data)                                   (0x0000007F&(data))
#define  FME_SKIPDMA_chromapicidx_fw_src(data)                                   ((0x00003F80&(data))>>7)
#define  FME_SKIPDMA_chromapicidx_bw_src(data)                                   (0x0000007F&(data))

#define  FME_TQ_CNTL                                                            0x1800F040
#define  FME_TQ_CNTL_reg_addr                                                    "0xB800F040"
#define  FME_TQ_CNTL_reg                                                         0xB800F040
#define  FME_TQ_CNTL_inst_addr                                                   "0x0010"
#define  FME_TQ_CNTL_inst_adr                                                    "0x0010"
#define  FME_TQ_CNTL_inst                                                        0x0010
#define  set_FME_TQ_CNTL_reg(data)                                               (*((volatile unsigned int*)FME_TQ_CNTL_reg)=data)
#define  get_FME_TQ_CNTL_reg                                                     (*((volatile unsigned int*)FME_TQ_CNTL_reg))
#define  FME_TQ_CNTL_flat_qtable_shift                                           (12)
#define  FME_TQ_CNTL_qpy_shift                                                   (6)
#define  FME_TQ_CNTL_qpc_shift                                                   (0)
#define  FME_TQ_CNTL_flat_qtable_mask                                            (0x00001000)
#define  FME_TQ_CNTL_qpy_mask                                                    (0x00000FC0)
#define  FME_TQ_CNTL_qpc_mask                                                    (0x0000003F)
#define  FME_TQ_CNTL_flat_qtable(data)                                           (0x00001000&((data)<<12))
#define  FME_TQ_CNTL_qpy(data)                                                   (0x00000FC0&((data)<<6))
#define  FME_TQ_CNTL_qpc(data)                                                   (0x0000003F&(data))
#define  FME_TQ_CNTL_get_flat_qtable(data)                                       ((0x00001000&(data))>>12)
#define  FME_TQ_CNTL_get_qpy(data)                                               ((0x00000FC0&(data))>>6)
#define  FME_TQ_CNTL_get_qpc(data)                                               (0x0000003F&(data))
#define  FME_TQ_CNTL_flat_qtable_src(data)                                       ((0x00001000&(data))>>12)
#define  FME_TQ_CNTL_qpy_src(data)                                               ((0x00000FC0&(data))>>6)
#define  FME_TQ_CNTL_qpc_src(data)                                               (0x0000003F&(data))

#define  FME_RLT_MB                                                             0x1800F044
#define  FME_RLT_MB_reg_addr                                                     "0xB800F044"
#define  FME_RLT_MB_reg                                                          0xB800F044
#define  FME_RLT_MB_inst_addr                                                    "0x0011"
#define  FME_RLT_MB_inst_adr                                                     "0x0011"
#define  FME_RLT_MB_inst                                                         0x0011
#define  set_FME_RLT_MB_reg(data)                                                (*((volatile unsigned int*)FME_RLT_MB_reg)=data)
#define  get_FME_RLT_MB_reg                                                      (*((volatile unsigned int*)FME_RLT_MB_reg))
#define  FME_RLT_MB_type_shift                                                   (27)
#define  FME_RLT_MB_partition_shift                                              (24)
#define  FME_RLT_MB_b8x8_0_pred_shift                                            (22)
#define  FME_RLT_MB_b8x8_1_pred_shift                                            (20)
#define  FME_RLT_MB_b8x8_2_pred_shift                                            (18)
#define  FME_RLT_MB_b8x8_3_pred_shift                                            (16)
#define  FME_RLT_MB_b8x8_0_list0_shift                                           (14)
#define  FME_RLT_MB_b8x8_1_list0_shift                                           (12)
#define  FME_RLT_MB_b8x8_2_list0_shift                                           (10)
#define  FME_RLT_MB_b8x8_3_list0_shift                                           (8)
#define  FME_RLT_MB_b8x8_0_list1_shift                                           (6)
#define  FME_RLT_MB_b8x8_1_list1_shift                                           (4)
#define  FME_RLT_MB_b8x8_2_list1_shift                                           (2)
#define  FME_RLT_MB_b8x8_3_list1_shift                                           (0)
#define  FME_RLT_MB_type_mask                                                    (0x18000000)
#define  FME_RLT_MB_partition_mask                                               (0x07000000)
#define  FME_RLT_MB_b8x8_0_pred_mask                                             (0x00C00000)
#define  FME_RLT_MB_b8x8_1_pred_mask                                             (0x00300000)
#define  FME_RLT_MB_b8x8_2_pred_mask                                             (0x000C0000)
#define  FME_RLT_MB_b8x8_3_pred_mask                                             (0x00030000)
#define  FME_RLT_MB_b8x8_0_list0_mask                                            (0x0000C000)
#define  FME_RLT_MB_b8x8_1_list0_mask                                            (0x00003000)
#define  FME_RLT_MB_b8x8_2_list0_mask                                            (0x00000C00)
#define  FME_RLT_MB_b8x8_3_list0_mask                                            (0x00000300)
#define  FME_RLT_MB_b8x8_0_list1_mask                                            (0x000000C0)
#define  FME_RLT_MB_b8x8_1_list1_mask                                            (0x00000030)
#define  FME_RLT_MB_b8x8_2_list1_mask                                            (0x0000000C)
#define  FME_RLT_MB_b8x8_3_list1_mask                                            (0x00000003)
#define  FME_RLT_MB_type(data)                                                   (0x18000000&((data)<<27))
#define  FME_RLT_MB_partition(data)                                              (0x07000000&((data)<<24))
#define  FME_RLT_MB_b8x8_0_pred(data)                                            (0x00C00000&((data)<<22))
#define  FME_RLT_MB_b8x8_1_pred(data)                                            (0x00300000&((data)<<20))
#define  FME_RLT_MB_b8x8_2_pred(data)                                            (0x000C0000&((data)<<18))
#define  FME_RLT_MB_b8x8_3_pred(data)                                            (0x00030000&((data)<<16))
#define  FME_RLT_MB_b8x8_0_list0(data)                                           (0x0000C000&((data)<<14))
#define  FME_RLT_MB_b8x8_1_list0(data)                                           (0x00003000&((data)<<12))
#define  FME_RLT_MB_b8x8_2_list0(data)                                           (0x00000C00&((data)<<10))
#define  FME_RLT_MB_b8x8_3_list0(data)                                           (0x00000300&((data)<<8))
#define  FME_RLT_MB_b8x8_0_list1(data)                                           (0x000000C0&((data)<<6))
#define  FME_RLT_MB_b8x8_1_list1(data)                                           (0x00000030&((data)<<4))
#define  FME_RLT_MB_b8x8_2_list1(data)                                           (0x0000000C&((data)<<2))
#define  FME_RLT_MB_b8x8_3_list1(data)                                           (0x00000003&(data))
#define  FME_RLT_MB_get_type(data)                                               ((0x18000000&(data))>>27)
#define  FME_RLT_MB_get_partition(data)                                          ((0x07000000&(data))>>24)
#define  FME_RLT_MB_get_b8x8_0_pred(data)                                        ((0x00C00000&(data))>>22)
#define  FME_RLT_MB_get_b8x8_1_pred(data)                                        ((0x00300000&(data))>>20)
#define  FME_RLT_MB_get_b8x8_2_pred(data)                                        ((0x000C0000&(data))>>18)
#define  FME_RLT_MB_get_b8x8_3_pred(data)                                        ((0x00030000&(data))>>16)
#define  FME_RLT_MB_get_b8x8_0_list0(data)                                       ((0x0000C000&(data))>>14)
#define  FME_RLT_MB_get_b8x8_1_list0(data)                                       ((0x00003000&(data))>>12)
#define  FME_RLT_MB_get_b8x8_2_list0(data)                                       ((0x00000C00&(data))>>10)
#define  FME_RLT_MB_get_b8x8_3_list0(data)                                       ((0x00000300&(data))>>8)
#define  FME_RLT_MB_get_b8x8_0_list1(data)                                       ((0x000000C0&(data))>>6)
#define  FME_RLT_MB_get_b8x8_1_list1(data)                                       ((0x00000030&(data))>>4)
#define  FME_RLT_MB_get_b8x8_2_list1(data)                                       ((0x0000000C&(data))>>2)
#define  FME_RLT_MB_get_b8x8_3_list1(data)                                       (0x00000003&(data))
#define  FME_RLT_MB_type_src(data)                                               ((0x18000000&(data))>>27)
#define  FME_RLT_MB_partition_src(data)                                          ((0x07000000&(data))>>24)
#define  FME_RLT_MB_b8x8_0_pred_src(data)                                        ((0x00C00000&(data))>>22)
#define  FME_RLT_MB_b8x8_1_pred_src(data)                                        ((0x00300000&(data))>>20)
#define  FME_RLT_MB_b8x8_2_pred_src(data)                                        ((0x000C0000&(data))>>18)
#define  FME_RLT_MB_b8x8_3_pred_src(data)                                        ((0x00030000&(data))>>16)
#define  FME_RLT_MB_b8x8_0_list0_src(data)                                       ((0x0000C000&(data))>>14)
#define  FME_RLT_MB_b8x8_1_list0_src(data)                                       ((0x00003000&(data))>>12)
#define  FME_RLT_MB_b8x8_2_list0_src(data)                                       ((0x00000C00&(data))>>10)
#define  FME_RLT_MB_b8x8_3_list0_src(data)                                       ((0x00000300&(data))>>8)
#define  FME_RLT_MB_b8x8_0_list1_src(data)                                       ((0x000000C0&(data))>>6)
#define  FME_RLT_MB_b8x8_1_list1_src(data)                                       ((0x00000030&(data))>>4)
#define  FME_RLT_MB_b8x8_2_list1_src(data)                                       ((0x0000000C&(data))>>2)
#define  FME_RLT_MB_b8x8_3_list1_src(data)                                       (0x00000003&(data))

#define  FME_RLT_FW_0                                                           0x1800F048
#define  FME_RLT_FW_0_reg_addr                                                   "0xB800F048"
#define  FME_RLT_FW_0_reg                                                        0xB800F048
#define  FME_RLT_FW_0_inst_addr                                                  "0x0012"
#define  FME_RLT_FW_0_inst_adr                                                   "0x0012"
#define  FME_RLT_FW_0_inst                                                       0x0012
#define  set_FME_RLT_FW_0_reg(data)                                              (*((volatile unsigned int*)FME_RLT_FW_0_reg)=data)
#define  get_FME_RLT_FW_0_reg                                                    (*((volatile unsigned int*)FME_RLT_FW_0_reg))
#define  FME_RLT_FW_mvx_shift                                                    (9)
#define  FME_RLT_FW_mvy_shift                                                    (0)
#define  FME_RLT_FW_mvx_mask                                                     (0x001FFE00)
#define  FME_RLT_FW_mvy_mask                                                     (0x000001FF)
#define  FME_RLT_FW_mvx(data)                                                    (0x001FFE00&((data)<<9))
#define  FME_RLT_FW_mvy(data)                                                    (0x000001FF&(data))
#define  FME_RLT_FW_get_mvx(data)                                                ((0x001FFE00&(data))>>9)
#define  FME_RLT_FW_get_mvy(data)                                                (0x000001FF&(data))
#define  FME_RLT_FW_mvx_src(data)                                                ((0x001FFE00&(data))>>9)
#define  FME_RLT_FW_mvy_src(data)                                                (0x000001FF&(data))

#define  FME_RLT_FW_1                                                           0x1800F04C
#define  FME_RLT_FW_1_reg_addr                                                   "0xB800F04C"
#define  FME_RLT_FW_1_reg                                                        0xB800F04C
#define  FME_RLT_FW_1_inst_addr                                                  "0x0013"
#define  FME_RLT_FW_1_inst_adr                                                   "0x0013"
#define  FME_RLT_FW_1_inst                                                       0x0013
#define  set_FME_RLT_FW_1_reg(data)                                              (*((volatile unsigned int*)FME_RLT_FW_1_reg)=data)
#define  get_FME_RLT_FW_1_reg                                                    (*((volatile unsigned int*)FME_RLT_FW_1_reg))

#define  FME_RLT_FW_2                                                           0x1800F050
#define  FME_RLT_FW_2_reg_addr                                                   "0xB800F050"
#define  FME_RLT_FW_2_reg                                                        0xB800F050
#define  FME_RLT_FW_2_inst_addr                                                  "0x0014"
#define  FME_RLT_FW_2_inst_adr                                                   "0x0014"
#define  FME_RLT_FW_2_inst                                                       0x0014
#define  set_FME_RLT_FW_2_reg(data)                                              (*((volatile unsigned int*)FME_RLT_FW_2_reg)=data)
#define  get_FME_RLT_FW_2_reg                                                    (*((volatile unsigned int*)FME_RLT_FW_2_reg))

#define  FME_RLT_FW_3                                                           0x1800F054
#define  FME_RLT_FW_3_reg_addr                                                   "0xB800F054"
#define  FME_RLT_FW_3_reg                                                        0xB800F054
#define  FME_RLT_FW_3_inst_addr                                                  "0x0015"
#define  FME_RLT_FW_3_inst_adr                                                   "0x0015"
#define  FME_RLT_FW_3_inst                                                       0x0015
#define  set_FME_RLT_FW_3_reg(data)                                              (*((volatile unsigned int*)FME_RLT_FW_3_reg)=data)
#define  get_FME_RLT_FW_3_reg                                                    (*((volatile unsigned int*)FME_RLT_FW_3_reg))

#define  FME_RLT_BW_0                                                           0x1800F058
#define  FME_RLT_BW_0_reg_addr                                                   "0xB800F058"
#define  FME_RLT_BW_0_reg                                                        0xB800F058
#define  FME_RLT_BW_0_inst_addr                                                  "0x0016"
#define  FME_RLT_BW_0_inst_adr                                                   "0x0016"
#define  FME_RLT_BW_0_inst                                                       0x0016
#define  set_FME_RLT_BW_0_reg(data)                                              (*((volatile unsigned int*)FME_RLT_BW_0_reg)=data)
#define  get_FME_RLT_BW_0_reg                                                    (*((volatile unsigned int*)FME_RLT_BW_0_reg))
#define  FME_RLT_BW_mvx_shift                                                    (9)
#define  FME_RLT_BW_mvy_shift                                                    (0)
#define  FME_RLT_BW_mvx_mask                                                     (0x001FFE00)
#define  FME_RLT_BW_mvy_mask                                                     (0x000001FF)
#define  FME_RLT_BW_mvx(data)                                                    (0x001FFE00&((data)<<9))
#define  FME_RLT_BW_mvy(data)                                                    (0x000001FF&(data))
#define  FME_RLT_BW_get_mvx(data)                                                ((0x001FFE00&(data))>>9)
#define  FME_RLT_BW_get_mvy(data)                                                (0x000001FF&(data))
#define  FME_RLT_BW_mvx_src(data)                                                ((0x001FFE00&(data))>>9)
#define  FME_RLT_BW_mvy_src(data)                                                (0x000001FF&(data))

#define  FME_RLT_BW_1                                                           0x1800F05C
#define  FME_RLT_BW_1_reg_addr                                                   "0xB800F05C"
#define  FME_RLT_BW_1_reg                                                        0xB800F05C
#define  FME_RLT_BW_1_inst_addr                                                  "0x0017"
#define  FME_RLT_BW_1_inst_adr                                                   "0x0017"
#define  FME_RLT_BW_1_inst                                                       0x0017
#define  set_FME_RLT_BW_1_reg(data)                                              (*((volatile unsigned int*)FME_RLT_BW_1_reg)=data)
#define  get_FME_RLT_BW_1_reg                                                    (*((volatile unsigned int*)FME_RLT_BW_1_reg))

#define  FME_RLT_BW_2                                                           0x1800F060
#define  FME_RLT_BW_2_reg_addr                                                   "0xB800F060"
#define  FME_RLT_BW_2_reg                                                        0xB800F060
#define  FME_RLT_BW_2_inst_addr                                                  "0x0018"
#define  FME_RLT_BW_2_inst_adr                                                   "0x0018"
#define  FME_RLT_BW_2_inst                                                       0x0018
#define  set_FME_RLT_BW_2_reg(data)                                              (*((volatile unsigned int*)FME_RLT_BW_2_reg)=data)
#define  get_FME_RLT_BW_2_reg                                                    (*((volatile unsigned int*)FME_RLT_BW_2_reg))

#define  FME_RLT_BW_3                                                           0x1800F064
#define  FME_RLT_BW_3_reg_addr                                                   "0xB800F064"
#define  FME_RLT_BW_3_reg                                                        0xB800F064
#define  FME_RLT_BW_3_inst_addr                                                  "0x0019"
#define  FME_RLT_BW_3_inst_adr                                                   "0x0019"
#define  FME_RLT_BW_3_inst                                                       0x0019
#define  set_FME_RLT_BW_3_reg(data)                                              (*((volatile unsigned int*)FME_RLT_BW_3_reg)=data)
#define  get_FME_RLT_BW_3_reg                                                    (*((volatile unsigned int*)FME_RLT_BW_3_reg))

#define  FME_RLT_16X16FW                                                        0x1800F068
#define  FME_RLT_16X16FW_reg_addr                                                "0xB800F068"
#define  FME_RLT_16X16FW_reg                                                     0xB800F068
#define  FME_RLT_16X16FW_inst_addr                                               "0x001A"
#define  FME_RLT_16X16FW_inst_adr                                                "0x001A"
#define  FME_RLT_16X16FW_inst                                                    0x001A
#define  set_FME_RLT_16X16FW_reg(data)                                           (*((volatile unsigned int*)FME_RLT_16X16FW_reg)=data)
#define  get_FME_RLT_16X16FW_reg                                                 (*((volatile unsigned int*)FME_RLT_16X16FW_reg))
#define  FME_RLT_16X16FW_pred_shift                                              (21)
#define  FME_RLT_16X16FW_mvx_shift                                               (9)
#define  FME_RLT_16X16FW_mvy_shift                                               (0)
#define  FME_RLT_16X16FW_pred_mask                                               (0x00600000)
#define  FME_RLT_16X16FW_mvx_mask                                                (0x001FFE00)
#define  FME_RLT_16X16FW_mvy_mask                                                (0x000001FF)
#define  FME_RLT_16X16FW_pred(data)                                              (0x00600000&((data)<<21))
#define  FME_RLT_16X16FW_mvx(data)                                               (0x001FFE00&((data)<<9))
#define  FME_RLT_16X16FW_mvy(data)                                               (0x000001FF&(data))
#define  FME_RLT_16X16FW_get_pred(data)                                          ((0x00600000&(data))>>21)
#define  FME_RLT_16X16FW_get_mvx(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_RLT_16X16FW_get_mvy(data)                                           (0x000001FF&(data))
#define  FME_RLT_16X16FW_pred_src(data)                                          ((0x00600000&(data))>>21)
#define  FME_RLT_16X16FW_mvx_src(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_RLT_16X16FW_mvy_src(data)                                           (0x000001FF&(data))

#define  FME_RLT_16X16BW                                                        0x1800F06C
#define  FME_RLT_16X16BW_reg_addr                                                "0xB800F06C"
#define  FME_RLT_16X16BW_reg                                                     0xB800F06C
#define  FME_RLT_16X16BW_inst_addr                                               "0x001B"
#define  FME_RLT_16X16BW_inst_adr                                                "0x001B"
#define  FME_RLT_16X16BW_inst                                                    0x001B
#define  set_FME_RLT_16X16BW_reg(data)                                           (*((volatile unsigned int*)FME_RLT_16X16BW_reg)=data)
#define  get_FME_RLT_16X16BW_reg                                                 (*((volatile unsigned int*)FME_RLT_16X16BW_reg))
#define  FME_RLT_16X16BW_mvx_shift                                               (9)
#define  FME_RLT_16X16BW_mvy_shift                                               (0)
#define  FME_RLT_16X16BW_mvx_mask                                                (0x001FFE00)
#define  FME_RLT_16X16BW_mvy_mask                                                (0x000001FF)
#define  FME_RLT_16X16BW_mvx(data)                                               (0x001FFE00&((data)<<9))
#define  FME_RLT_16X16BW_mvy(data)                                               (0x000001FF&(data))
#define  FME_RLT_16X16BW_get_mvx(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_RLT_16X16BW_get_mvy(data)                                           (0x000001FF&(data))
#define  FME_RLT_16X16BW_mvx_src(data)                                           ((0x001FFE00&(data))>>9)
#define  FME_RLT_16X16BW_mvy_src(data)                                           (0x000001FF&(data))

#define  FME_RLT_COL                                                            0x1800F070
#define  FME_RLT_COL_reg_addr                                                    "0xB800F070"
#define  FME_RLT_COL_reg                                                         0xB800F070
#define  FME_RLT_COL_inst_addr                                                   "0x001C"
#define  FME_RLT_COL_inst_adr                                                    "0x001C"
#define  FME_RLT_COL_inst                                                        0x001C
#define  set_FME_RLT_COL_reg(data)                                               (*((volatile unsigned int*)FME_RLT_COL_reg)=data)
#define  get_FME_RLT_COL_reg                                                     (*((volatile unsigned int*)FME_RLT_COL_reg))
#define  FME_RLT_COL_zero_shift                                                  (0)
#define  FME_RLT_COL_zero_mask                                                   (0x0000000F)
#define  FME_RLT_COL_zero(data)                                                  (0x0000000F&(data))
#define  FME_RLT_COL_get_zero(data)                                              (0x0000000F&(data))
#define  FME_RLT_COL_zero_src(data)                                              (0x0000000F&(data))

#define  FME_RLT_16X16                                                          0x1800F074
#define  FME_RLT_16X16_reg_addr                                                  "0xB800F074"
#define  FME_RLT_16X16_reg                                                       0xB800F074
#define  FME_RLT_16X16_inst_addr                                                 "0x001D"
#define  FME_RLT_16X16_inst_adr                                                  "0x001D"
#define  FME_RLT_16X16_inst                                                      0x001D
#define  set_FME_RLT_16X16_reg(data)                                             (*((volatile unsigned int*)FME_RLT_16X16_reg)=data)
#define  get_FME_RLT_16X16_reg                                                   (*((volatile unsigned int*)FME_RLT_16X16_reg))
#define  FME_RLT_16X16_cost_shift                                                (0)
#define  FME_RLT_16X16_cost_mask                                                 (0x0003FFFF)
#define  FME_RLT_16X16_cost(data)                                                (0x0003FFFF&(data))
#define  FME_RLT_16X16_get_cost(data)                                            (0x0003FFFF&(data))
#define  FME_RLT_16X16_cost_src(data)                                            (0x0003FFFF&(data))

#define  FME_RLT_16X16DIRECT                                                    0x1800F078
#define  FME_RLT_16X16DIRECT_reg_addr                                            "0xB800F078"
#define  FME_RLT_16X16DIRECT_reg                                                 0xB800F078
#define  FME_RLT_16X16DIRECT_inst_addr                                           "0x001E"
#define  FME_RLT_16X16DIRECT_inst_adr                                            "0x001E"
#define  FME_RLT_16X16DIRECT_inst                                                0x001E
#define  set_FME_RLT_16X16DIRECT_reg(data)                                       (*((volatile unsigned int*)FME_RLT_16X16DIRECT_reg)=data)
#define  get_FME_RLT_16X16DIRECT_reg                                             (*((volatile unsigned int*)FME_RLT_16X16DIRECT_reg))
#define  FME_RLT_16X16DIRECT_cost_shift                                          (0)
#define  FME_RLT_16X16DIRECT_cost_mask                                           (0x0003FFFF)
#define  FME_RLT_16X16DIRECT_cost(data)                                          (0x0003FFFF&(data))
#define  FME_RLT_16X16DIRECT_get_cost(data)                                      (0x0003FFFF&(data))
#define  FME_RLT_16X16DIRECT_cost_src(data)                                      (0x0003FFFF&(data))

#define  FME_RLT_8X8                                                            0x1800F07C
#define  FME_RLT_8X8_reg_addr                                                    "0xB800F07C"
#define  FME_RLT_8X8_reg                                                         0xB800F07C
#define  FME_RLT_8X8_inst_addr                                                   "0x001F"
#define  FME_RLT_8X8_inst_adr                                                    "0x001F"
#define  FME_RLT_8X8_inst                                                        0x001F
#define  set_FME_RLT_8X8_reg(data)                                               (*((volatile unsigned int*)FME_RLT_8X8_reg)=data)
#define  get_FME_RLT_8X8_reg                                                     (*((volatile unsigned int*)FME_RLT_8X8_reg))
#define  FME_RLT_8X8_cost_shift                                                  (0)
#define  FME_RLT_8X8_cost_mask                                                   (0x0003FFFF)
#define  FME_RLT_8X8_cost(data)                                                  (0x0003FFFF&(data))
#define  FME_RLT_8X8_get_cost(data)                                              (0x0003FFFF&(data))
#define  FME_RLT_8X8_cost_src(data)                                              (0x0003FFFF&(data))

#define  FME_RLT_SKIP                                                           0x1800F080
#define  FME_RLT_SKIP_reg_addr                                                   "0xB800F080"
#define  FME_RLT_SKIP_reg                                                        0xB800F080
#define  FME_RLT_SKIP_inst_addr                                                  "0x0020"
#define  FME_RLT_SKIP_inst_adr                                                   "0x0020"
#define  FME_RLT_SKIP_inst                                                       0x0020
#define  set_FME_RLT_SKIP_reg(data)                                              (*((volatile unsigned int*)FME_RLT_SKIP_reg)=data)
#define  get_FME_RLT_SKIP_reg                                                    (*((volatile unsigned int*)FME_RLT_SKIP_reg))
#define  FME_RLT_SKIP_skipable_shift                                             (18)
#define  FME_RLT_SKIP_cost_shift                                                 (0)
#define  FME_RLT_SKIP_skipable_mask                                              (0x00040000)
#define  FME_RLT_SKIP_cost_mask                                                  (0x0003FFFF)
#define  FME_RLT_SKIP_skipable(data)                                             (0x00040000&((data)<<18))
#define  FME_RLT_SKIP_cost(data)                                                 (0x0003FFFF&(data))
#define  FME_RLT_SKIP_get_skipable(data)                                         ((0x00040000&(data))>>18)
#define  FME_RLT_SKIP_get_cost(data)                                             (0x0003FFFF&(data))
#define  FME_RLT_SKIP_skipable_src(data)                                         ((0x00040000&(data))>>18)
#define  FME_RLT_SKIP_cost_src(data)                                             (0x0003FFFF&(data))

#define  FME_DEBUG0                                                             0x1800F084
#define  FME_DEBUG0_reg_addr                                                     "0xB800F084"
#define  FME_DEBUG0_reg                                                          0xB800F084
#define  FME_DEBUG0_inst_addr                                                    "0x0021"
#define  FME_DEBUG0_inst_adr                                                     "0x0021"
#define  FME_DEBUG0_inst                                                         0x0021
#define  set_FME_DEBUG0_reg(data)                                                (*((volatile unsigned int*)FME_DEBUG0_reg)=data)
#define  get_FME_DEBUG0_reg                                                      (*((volatile unsigned int*)FME_DEBUG0_reg))
#define  FME_DEBUG0_status_shift                                                 (0)
#define  FME_DEBUG0_status_mask                                                  (0xFFFFFFFF)
#define  FME_DEBUG0_status(data)                                                 (0xFFFFFFFF&(data))
#define  FME_DEBUG0_get_status(data)                                             (0xFFFFFFFF&(data))
#define  FME_DEBUG0_status_src(data)                                             (0xFFFFFFFF&(data))

#define  FME_DEBUG1                                                             0x1800F088
#define  FME_DEBUG1_reg_addr                                                     "0xB800F088"
#define  FME_DEBUG1_reg                                                          0xB800F088
#define  FME_DEBUG1_inst_addr                                                    "0x0022"
#define  FME_DEBUG1_inst_adr                                                     "0x0022"
#define  FME_DEBUG1_inst                                                         0x0022
#define  set_FME_DEBUG1_reg(data)                                                (*((volatile unsigned int*)FME_DEBUG1_reg)=data)
#define  get_FME_DEBUG1_reg                                                      (*((volatile unsigned int*)FME_DEBUG1_reg))
#define  FME_DEBUG1_status_shift                                                 (0)
#define  FME_DEBUG1_status_mask                                                  (0xFFFFFFFF)
#define  FME_DEBUG1_status(data)                                                 (0xFFFFFFFF&(data))
#define  FME_DEBUG1_get_status(data)                                             (0xFFFFFFFF&(data))
#define  FME_DEBUG1_status_src(data)                                             (0xFFFFFFFF&(data))

#ifdef _FME_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======FME register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  EncodeType:2;
        RBus_UInt32  EnableMVC:1;
        RBus_UInt32  PicType:2;
        RBus_UInt32  FirstMbOfPic:1;
        RBus_UInt32  LastMbOfSlice:1;
        RBus_UInt32  FirstMbOfSlice:1;
    };
}FME_COMM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hardware:20;
        RBus_UInt32  res1:7;
        RBus_UInt32  disable16x16BiDir:1;
        RBus_UInt32  disable8x8BiDir:1;
        RBus_UInt32  only16x16:1;
        RBus_UInt32  search:2;
    };
}FME_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_pskip_8x8th:8;
        RBus_UInt32  reg_pskip_coeffMax:8;
        RBus_UInt32  reg_xvid_sum4x4th:8;
        RBus_UInt32  reg_xvid_firstNZ4x4th:8;
    };
}FME_MD0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  subMbCostP8x8:8;
        RBus_UInt32  reg_pskip_mbth:8;
        RBus_UInt32  skip_cost_weight:8;
    };
}FME_MD1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbCost16x16L0:8;
        RBus_UInt32  mbCost16x16L1:8;
        RBus_UInt32  subMbCost8x8L0:8;
        RBus_UInt32  subMbCost8x8L1:8;
    };
}FME_MD2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mbCostB8x8:8;
        RBus_UInt32  mbCost16x16Bi:8;
        RBus_UInt32  subMbCost8x8Bi:8;
    };
}FME_MD3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  M:16;
        RBus_UInt32  subMbCost8x8direct:8;
        RBus_UInt32  mbCost16x16direct:8;
    };
}FME_MD4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  refidx:2;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_TOPRR_B2_FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  refidx:2;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_TOPRR_B2_BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  refidx:2;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_TOPRR_B3_FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  refidx:2;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_TOPRR_B3_BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  zero:4;
    };
}FME_COL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  maxfrac:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  maxintg:4;
        RBus_UInt32  bfrac:4;
        RBus_UInt32  bintg:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  lambda:7;
    };
}FME_MVCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  run0:4;
        RBus_UInt32  run1:4;
        RBus_UInt32  run2:4;
        RBus_UInt32  run3:4;
        RBus_UInt32  run4:4;
        RBus_UInt32  run5:4;
        RBus_UInt32  run6:4;
        RBus_UInt32  run7:4;
    };
}FME_PSKIPCOST0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  run8:4;
        RBus_UInt32  run9:4;
        RBus_UInt32  run10:4;
        RBus_UInt32  run11:4;
        RBus_UInt32  run12:4;
        RBus_UInt32  run13:4;
        RBus_UInt32  run14:4;
        RBus_UInt32  run15:4;
    };
}FME_PSKIPCOST1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  chromapicidx_fw:7;
        RBus_UInt32  chromapicidx_bw:7;
    };
}FME_SKIPDMA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  flat_qtable:1;
        RBus_UInt32  qpy:6;
        RBus_UInt32  qpc:6;
    };
}FME_TQ_CNTL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  type:2;
        RBus_UInt32  partition:3;
        RBus_UInt32  b8x8_0_pred:2;
        RBus_UInt32  b8x8_1_pred:2;
        RBus_UInt32  b8x8_2_pred:2;
        RBus_UInt32  b8x8_3_pred:2;
        RBus_UInt32  b8x8_0_list0:2;
        RBus_UInt32  b8x8_1_list0:2;
        RBus_UInt32  b8x8_2_list0:2;
        RBus_UInt32  b8x8_3_list0:2;
        RBus_UInt32  b8x8_0_list1:2;
        RBus_UInt32  b8x8_1_list1:2;
        RBus_UInt32  b8x8_2_list1:2;
        RBus_UInt32  b8x8_3_list1:2;
    };
}FME_RLT_MB_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_RLT_FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_RLT_BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  pred:2;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_RLT_16X16FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  mvx:12;
        RBus_UInt32  mvy:9;
    };
}FME_RLT_16X16BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  zero:4;
    };
}FME_RLT_COL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  cost:18;
    };
}FME_RLT_16X16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  cost:18;
    };
}FME_RLT_16X16DIRECT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  cost:18;
    };
}FME_RLT_8X8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  skipable:1;
        RBus_UInt32  cost:18;
    };
}FME_RLT_SKIP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  status:32;
    };
}FME_DEBUG0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  status:32;
    };
}FME_DEBUG1_RBUS;

#else //apply LITTLE_ENDIAN

//======FME register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  FirstMbOfSlice:1;
        RBus_UInt32  LastMbOfSlice:1;
        RBus_UInt32  FirstMbOfPic:1;
        RBus_UInt32  PicType:2;
        RBus_UInt32  EnableMVC:1;
        RBus_UInt32  EncodeType:2;
        RBus_UInt32  res1:24;
    };
}FME_COMM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  search:2;
        RBus_UInt32  only16x16:1;
        RBus_UInt32  disable8x8BiDir:1;
        RBus_UInt32  disable16x16BiDir:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  hardware:20;
    };
}FME_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_xvid_firstNZ4x4th:8;
        RBus_UInt32  reg_xvid_sum4x4th:8;
        RBus_UInt32  reg_pskip_coeffMax:8;
        RBus_UInt32  reg_pskip_8x8th:8;
    };
}FME_MD0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  skip_cost_weight:8;
        RBus_UInt32  reg_pskip_mbth:8;
        RBus_UInt32  subMbCostP8x8:8;
        RBus_UInt32  res1:8;
    };
}FME_MD1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  subMbCost8x8L1:8;
        RBus_UInt32  subMbCost8x8L0:8;
        RBus_UInt32  mbCost16x16L1:8;
        RBus_UInt32  mbCost16x16L0:8;
    };
}FME_MD2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  subMbCost8x8Bi:8;
        RBus_UInt32  mbCost16x16Bi:8;
        RBus_UInt32  mbCostB8x8:8;
        RBus_UInt32  res1:8;
    };
}FME_MD3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbCost16x16direct:8;
        RBus_UInt32  subMbCost8x8direct:8;
        RBus_UInt32  M:16;
    };
}FME_MD4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  refidx:2;
        RBus_UInt32  res1:9;
    };
}FME_TOPRR_B2_FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  refidx:2;
        RBus_UInt32  res1:9;
    };
}FME_TOPRR_B2_BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  refidx:2;
        RBus_UInt32  res1:9;
    };
}FME_TOPRR_B3_FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  refidx:2;
        RBus_UInt32  res1:9;
    };
}FME_TOPRR_B3_BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero:4;
        RBus_UInt32  res1:28;
    };
}FME_COL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lambda:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  bintg:4;
        RBus_UInt32  bfrac:4;
        RBus_UInt32  maxintg:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  maxfrac:5;
        RBus_UInt32  res3:3;
    };
}FME_MVCOST_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  run7:4;
        RBus_UInt32  run6:4;
        RBus_UInt32  run5:4;
        RBus_UInt32  run4:4;
        RBus_UInt32  run3:4;
        RBus_UInt32  run2:4;
        RBus_UInt32  run1:4;
        RBus_UInt32  run0:4;
    };
}FME_PSKIPCOST0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  run15:4;
        RBus_UInt32  run14:4;
        RBus_UInt32  run13:4;
        RBus_UInt32  run12:4;
        RBus_UInt32  run11:4;
        RBus_UInt32  run10:4;
        RBus_UInt32  run9:4;
        RBus_UInt32  run8:4;
    };
}FME_PSKIPCOST1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  chromapicidx_bw:7;
        RBus_UInt32  chromapicidx_fw:7;
        RBus_UInt32  res1:18;
    };
}FME_SKIPDMA_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qpc:6;
        RBus_UInt32  qpy:6;
        RBus_UInt32  flat_qtable:1;
        RBus_UInt32  res1:19;
    };
}FME_TQ_CNTL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b8x8_3_list1:2;
        RBus_UInt32  b8x8_2_list1:2;
        RBus_UInt32  b8x8_1_list1:2;
        RBus_UInt32  b8x8_0_list1:2;
        RBus_UInt32  b8x8_3_list0:2;
        RBus_UInt32  b8x8_2_list0:2;
        RBus_UInt32  b8x8_1_list0:2;
        RBus_UInt32  b8x8_0_list0:2;
        RBus_UInt32  b8x8_3_pred:2;
        RBus_UInt32  b8x8_2_pred:2;
        RBus_UInt32  b8x8_1_pred:2;
        RBus_UInt32  b8x8_0_pred:2;
        RBus_UInt32  partition:3;
        RBus_UInt32  type:2;
        RBus_UInt32  res1:3;
    };
}FME_RLT_MB_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  res1:11;
    };
}FME_RLT_FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  res1:11;
    };
}FME_RLT_BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  pred:2;
        RBus_UInt32  res1:9;
    };
}FME_RLT_16X16FW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mvy:9;
        RBus_UInt32  mvx:12;
        RBus_UInt32  res1:11;
    };
}FME_RLT_16X16BW_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero:4;
        RBus_UInt32  res1:28;
    };
}FME_RLT_COL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cost:18;
        RBus_UInt32  res1:14;
    };
}FME_RLT_16X16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cost:18;
        RBus_UInt32  res1:14;
    };
}FME_RLT_16X16DIRECT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cost:18;
        RBus_UInt32  res1:14;
    };
}FME_RLT_8X8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cost:18;
        RBus_UInt32  skipable:1;
        RBus_UInt32  res1:13;
    };
}FME_RLT_SKIP_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  status:32;
    };
}FME_DEBUG0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  status:32;
    };
}FME_DEBUG1_RBUS;




#endif 


#endif 
#endif 
