/**
* @file Merlin5_VE_SEG_SPEC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SEG_REG_H_
#define _RBUS_SEG_REG_H_

#include "rbus_types.h"



//  SEG Register Address
#define  SEG_CTRL                                                               0x1800E740
#define  SEG_CTRL_reg_addr                                                       "0xB800E740"
#define  SEG_CTRL_reg                                                            0xB800E740
#define  SEG_CTRL_inst_addr                                                      "0x0000"
#define  SEG_CTRL_inst_adr                                                       "0x00D0"
#define  SEG_CTRL_inst                                                           0x00D0
#define  set_SEG_CTRL_reg(data)                                                  (*((volatile unsigned int*)SEG_CTRL_reg)=data)
#define  get_SEG_CTRL_reg                                                        (*((volatile unsigned int*)SEG_CTRL_reg))
#define  SEG_CTRL_SegReset_shift                                                 (2)
#define  SEG_CTRL_ResetReadPointer_shift                                         (1)
#define  SEG_CTRL_SegEnable_shift                                                (0)
#define  SEG_CTRL_SegReset_mask                                                  (0x00000004)
#define  SEG_CTRL_ResetReadPointer_mask                                          (0x00000002)
#define  SEG_CTRL_SegEnable_mask                                                 (0x00000001)
#define  SEG_CTRL_SegReset(data)                                                 (0x00000004&((data)<<2))
#define  SEG_CTRL_ResetReadPointer(data)                                         (0x00000002&((data)<<1))
#define  SEG_CTRL_SegEnable(data)                                                (0x00000001&(data))
#define  SEG_CTRL_get_SegReset(data)                                             ((0x00000004&(data))>>2)
#define  SEG_CTRL_get_ResetReadPointer(data)                                     ((0x00000002&(data))>>1)
#define  SEG_CTRL_get_SegEnable(data)                                            (0x00000001&(data))
#define  SEG_CTRL_SegReset_src(data)                                             ((0x00000004&(data))>>2)
#define  SEG_CTRL_ResetReadPointer_src(data)                                     ((0x00000002&(data))>>1)
#define  SEG_CTRL_SegEnable_src(data)                                            (0x00000001&(data))

#define  SEG_TBCMD                                                              0x1800E744
#define  SEG_TBCMD_reg_addr                                                      "0xB800E744"
#define  SEG_TBCMD_reg                                                           0xB800E744
#define  SEG_TBCMD_inst_addr                                                     "0x0001"
#define  SEG_TBCMD_inst_adr                                                      "0x00D1"
#define  SEG_TBCMD_inst                                                          0x00D1
#define  set_SEG_TBCMD_reg(data)                                                 (*((volatile unsigned int*)SEG_TBCMD_reg)=data)
#define  get_SEG_TBCMD_reg                                                       (*((volatile unsigned int*)SEG_TBCMD_reg))
#define  SEG_TBCMD_StartAddr_shift                                               (0)
#define  SEG_TBCMD_StartAddr_mask                                                (0xFFFFFFFF)
#define  SEG_TBCMD_StartAddr(data)                                               (0xFFFFFFFF&(data))
#define  SEG_TBCMD_get_StartAddr(data)                                           (0xFFFFFFFF&(data))
#define  SEG_TBCMD_StartAddr_src(data)                                           (0xFFFFFFFF&(data))

#define  SEG_TBCMD1                                                             0x1800E748
#define  SEG_TBCMD1_reg_addr                                                     "0xB800E748"
#define  SEG_TBCMD1_reg                                                          0xB800E748
#define  SEG_TBCMD1_inst_addr                                                    "0x0002"
#define  SEG_TBCMD1_inst_adr                                                     "0x00D2"
#define  SEG_TBCMD1_inst                                                         0x00D2
#define  set_SEG_TBCMD1_reg(data)                                                (*((volatile unsigned int*)SEG_TBCMD1_reg)=data)
#define  get_SEG_TBCMD1_reg                                                      (*((volatile unsigned int*)SEG_TBCMD1_reg))
#define  SEG_TBCMD1_WritePointer_shift                                           (0)
#define  SEG_TBCMD1_WritePointer_mask                                            (0x0000FFFF)
#define  SEG_TBCMD1_WritePointer(data)                                           (0x0000FFFF&(data))
#define  SEG_TBCMD1_get_WritePointer(data)                                       (0x0000FFFF&(data))
#define  SEG_TBCMD1_WritePointer_src(data)                                       (0x0000FFFF&(data))

#define  SEG_SLCCFG                                                             0x1800E74C
#define  SEG_SLCCFG_reg_addr                                                     "0xB800E74C"
#define  SEG_SLCCFG_reg                                                          0xB800E74C
#define  SEG_SLCCFG_inst_addr                                                    "0x0003"
#define  SEG_SLCCFG_inst_adr                                                     "0x00D3"
#define  SEG_SLCCFG_inst                                                         0x00D3
#define  set_SEG_SLCCFG_reg(data)                                                (*((volatile unsigned int*)SEG_SLCCFG_reg)=data)
#define  get_SEG_SLCCFG_reg                                                      (*((volatile unsigned int*)SEG_SLCCFG_reg))
#define  SEG_SLCCFG_StartAddr_shift                                              (0)
#define  SEG_SLCCFG_StartAddr_mask                                               (0xFFFFFFFF)
#define  SEG_SLCCFG_StartAddr(data)                                              (0xFFFFFFFF&(data))
#define  SEG_SLCCFG_get_StartAddr(data)                                          (0xFFFFFFFF&(data))
#define  SEG_SLCCFG_StartAddr_src(data)                                          (0xFFFFFFFF&(data))

#define  SEG_SYNC                                                               0x1800E750
#define  SEG_SYNC_reg_addr                                                       "0xB800E750"
#define  SEG_SYNC_reg                                                            0xB800E750
#define  SEG_SYNC_inst_addr                                                      "0x0004"
#define  SEG_SYNC_inst_adr                                                       "0x00D4"
#define  SEG_SYNC_inst                                                           0x00D4
#define  set_SEG_SYNC_reg(data)                                                  (*((volatile unsigned int*)SEG_SYNC_reg)=data)
#define  get_SEG_SYNC_reg                                                        (*((volatile unsigned int*)SEG_SYNC_reg))
#define  SEG_SYNC_EnableAltMinC_shift                                            (31)
#define  SEG_SYNC_AltMinC_shift                                                  (18)
#define  SEG_SYNC_Select_shift                                                   (17)
#define  SEG_SYNC_Enable_shift                                                   (16)
#define  SEG_SYNC_MinC_shift                                                     (0)
#define  SEG_SYNC_EnableAltMinC_mask                                             (0x80000000)
#define  SEG_SYNC_AltMinC_mask                                                   (0x7FFC0000)
#define  SEG_SYNC_Select_mask                                                    (0x00020000)
#define  SEG_SYNC_Enable_mask                                                    (0x00010000)
#define  SEG_SYNC_MinC_mask                                                      (0x0000FFFF)
#define  SEG_SYNC_EnableAltMinC(data)                                            (0x80000000&((data)<<31))
#define  SEG_SYNC_AltMinC(data)                                                  (0x7FFC0000&((data)<<18))
#define  SEG_SYNC_Select(data)                                                   (0x00020000&((data)<<17))
#define  SEG_SYNC_Enable(data)                                                   (0x00010000&((data)<<16))
#define  SEG_SYNC_MinC(data)                                                     (0x0000FFFF&(data))
#define  SEG_SYNC_get_EnableAltMinC(data)                                        ((0x80000000&(data))>>31)
#define  SEG_SYNC_get_AltMinC(data)                                              ((0x7FFC0000&(data))>>18)
#define  SEG_SYNC_get_Select(data)                                               ((0x00020000&(data))>>17)
#define  SEG_SYNC_get_Enable(data)                                               ((0x00010000&(data))>>16)
#define  SEG_SYNC_get_MinC(data)                                                 (0x0000FFFF&(data))
#define  SEG_SYNC_EnableAltMinC_src(data)                                        ((0x80000000&(data))>>31)
#define  SEG_SYNC_AltMinC_src(data)                                              ((0x7FFC0000&(data))>>18)
#define  SEG_SYNC_Select_src(data)                                               ((0x00020000&(data))>>17)
#define  SEG_SYNC_Enable_src(data)                                               ((0x00010000&(data))>>16)
#define  SEG_SYNC_MinC_src(data)                                                 (0x0000FFFF&(data))

#define  SEG_DEBUG                                                              0x1800E754
#define  SEG_DEBUG_reg_addr                                                      "0xB800E754"
#define  SEG_DEBUG_reg                                                           0xB800E754
#define  SEG_DEBUG_inst_addr                                                     "0x0005"
#define  SEG_DEBUG_inst_adr                                                      "0x00D5"
#define  SEG_DEBUG_inst                                                          0x00D5
#define  set_SEG_DEBUG_reg(data)                                                 (*((volatile unsigned int*)SEG_DEBUG_reg)=data)
#define  get_SEG_DEBUG_reg                                                       (*((volatile unsigned int*)SEG_DEBUG_reg))
#define  SEG_DEBUG_SegExport_shift                                               (19)
#define  SEG_DEBUG_Enable_shift                                                  (18)
#define  SEG_DEBUG_CtbAddr_shift                                                 (0)
#define  SEG_DEBUG_SegExport_mask                                                (0x00080000)
#define  SEG_DEBUG_Enable_mask                                                   (0x00040000)
#define  SEG_DEBUG_CtbAddr_mask                                                  (0x0003FFFF)
#define  SEG_DEBUG_SegExport(data)                                               (0x00080000&((data)<<19))
#define  SEG_DEBUG_Enable(data)                                                  (0x00040000&((data)<<18))
#define  SEG_DEBUG_CtbAddr(data)                                                 (0x0003FFFF&(data))
#define  SEG_DEBUG_get_SegExport(data)                                           ((0x00080000&(data))>>19)
#define  SEG_DEBUG_get_Enable(data)                                              ((0x00040000&(data))>>18)
#define  SEG_DEBUG_get_CtbAddr(data)                                             (0x0003FFFF&(data))
#define  SEG_DEBUG_SegExport_src(data)                                           ((0x00080000&(data))>>19)
#define  SEG_DEBUG_Enable_src(data)                                              ((0x00040000&(data))>>18)
#define  SEG_DEBUG_CtbAddr_src(data)                                             (0x0003FFFF&(data))

#define  SEG_DEBUG1                                                             0x1800E758
#define  SEG_DEBUG1_reg_addr                                                     "0xB800E758"
#define  SEG_DEBUG1_reg                                                          0xB800E758
#define  SEG_DEBUG1_inst_addr                                                    "0x0006"
#define  SEG_DEBUG1_inst_adr                                                     "0x00D6"
#define  SEG_DEBUG1_inst                                                         0x00D6
#define  set_SEG_DEBUG1_reg(data)                                                (*((volatile unsigned int*)SEG_DEBUG1_reg)=data)
#define  get_SEG_DEBUG1_reg                                                      (*((volatile unsigned int*)SEG_DEBUG1_reg))
#define  SEG_DEBUG1_QpDeltaAbs_shift                                             (14)
#define  SEG_DEBUG1_Size_shift                                                   (11)
#define  SEG_DEBUG1_zIdx_shift                                                   (3)
#define  SEG_DEBUG1_TuGo_shift                                                   (2)
#define  SEG_DEBUG1_CuGo_shift                                                   (1)
#define  SEG_DEBUG1_SaoGo_shift                                                  (0)
#define  SEG_DEBUG1_QpDeltaAbs_mask                                              (0x00004000)
#define  SEG_DEBUG1_Size_mask                                                    (0x00003800)
#define  SEG_DEBUG1_zIdx_mask                                                    (0x000007F8)
#define  SEG_DEBUG1_TuGo_mask                                                    (0x00000004)
#define  SEG_DEBUG1_CuGo_mask                                                    (0x00000002)
#define  SEG_DEBUG1_SaoGo_mask                                                   (0x00000001)
#define  SEG_DEBUG1_QpDeltaAbs(data)                                             (0x00004000&((data)<<14))
#define  SEG_DEBUG1_Size(data)                                                   (0x00003800&((data)<<11))
#define  SEG_DEBUG1_zIdx(data)                                                   (0x000007F8&((data)<<3))
#define  SEG_DEBUG1_TuGo(data)                                                   (0x00000004&((data)<<2))
#define  SEG_DEBUG1_CuGo(data)                                                   (0x00000002&((data)<<1))
#define  SEG_DEBUG1_SaoGo(data)                                                  (0x00000001&(data))
#define  SEG_DEBUG1_get_QpDeltaAbs(data)                                         ((0x00004000&(data))>>14)
#define  SEG_DEBUG1_get_Size(data)                                               ((0x00003800&(data))>>11)
#define  SEG_DEBUG1_get_zIdx(data)                                               ((0x000007F8&(data))>>3)
#define  SEG_DEBUG1_get_TuGo(data)                                               ((0x00000004&(data))>>2)
#define  SEG_DEBUG1_get_CuGo(data)                                               ((0x00000002&(data))>>1)
#define  SEG_DEBUG1_get_SaoGo(data)                                              (0x00000001&(data))
#define  SEG_DEBUG1_QpDeltaAbs_src(data)                                         ((0x00004000&(data))>>14)
#define  SEG_DEBUG1_Size_src(data)                                               ((0x00003800&(data))>>11)
#define  SEG_DEBUG1_zIdx_src(data)                                               ((0x000007F8&(data))>>3)
#define  SEG_DEBUG1_TuGo_src(data)                                               ((0x00000004&(data))>>2)
#define  SEG_DEBUG1_CuGo_src(data)                                               ((0x00000002&(data))>>1)
#define  SEG_DEBUG1_SaoGo_src(data)                                              (0x00000001&(data))

#define  SEG_DEBUG2                                                             0x1800E75C
#define  SEG_DEBUG2_reg_addr                                                     "0xB800E75C"
#define  SEG_DEBUG2_reg                                                          0xB800E75C
#define  SEG_DEBUG2_inst_addr                                                    "0x0007"
#define  SEG_DEBUG2_inst_adr                                                     "0x00D7"
#define  SEG_DEBUG2_inst                                                         0x00D7
#define  set_SEG_DEBUG2_reg(data)                                                (*((volatile unsigned int*)SEG_DEBUG2_reg)=data)
#define  get_SEG_DEBUG2_reg                                                      (*((volatile unsigned int*)SEG_DEBUG2_reg))
#define  SEG_DEBUG2_PicCount_shift                                               (0)
#define  SEG_DEBUG2_PicCount_mask                                                (0x00007FFF)
#define  SEG_DEBUG2_PicCount(data)                                               (0x00007FFF&(data))
#define  SEG_DEBUG2_get_PicCount(data)                                           (0x00007FFF&(data))
#define  SEG_DEBUG2_PicCount_src(data)                                           (0x00007FFF&(data))

#define  SEG_DEBUG3                                                             0x1800E760
#define  SEG_DEBUG3_reg_addr                                                     "0xB800E760"
#define  SEG_DEBUG3_reg                                                          0xB800E760
#define  SEG_DEBUG3_inst_addr                                                    "0x0008"
#define  SEG_DEBUG3_inst_adr                                                     "0x00D8"
#define  SEG_DEBUG3_inst                                                         0x00D8
#define  set_SEG_DEBUG3_reg(data)                                                (*((volatile unsigned int*)SEG_DEBUG3_reg)=data)
#define  get_SEG_DEBUG3_reg                                                      (*((volatile unsigned int*)SEG_DEBUG3_reg))
#define  SEG_DEBUG3_SdeSAddr_shift                                               (0)
#define  SEG_DEBUG3_SdeSAddr_mask                                                (0xFFFFFFFF)
#define  SEG_DEBUG3_SdeSAddr(data)                                               (0xFFFFFFFF&(data))
#define  SEG_DEBUG3_get_SdeSAddr(data)                                           (0xFFFFFFFF&(data))
#define  SEG_DEBUG3_SdeSAddr_src(data)                                           (0xFFFFFFFF&(data))

#define  SEG_DEBUG4                                                             0x1800E764
#define  SEG_DEBUG4_reg_addr                                                     "0xB800E764"
#define  SEG_DEBUG4_reg                                                          0xB800E764
#define  SEG_DEBUG4_inst_addr                                                    "0x0009"
#define  SEG_DEBUG4_inst_adr                                                     "0x00D9"
#define  SEG_DEBUG4_inst                                                         0x00D9
#define  set_SEG_DEBUG4_reg(data)                                                (*((volatile unsigned int*)SEG_DEBUG4_reg)=data)
#define  get_SEG_DEBUG4_reg                                                      (*((volatile unsigned int*)SEG_DEBUG4_reg))
#define  SEG_DEBUG4_MvdSAddr_shift                                               (0)
#define  SEG_DEBUG4_MvdSAddr_mask                                                (0xFFFFFFFF)
#define  SEG_DEBUG4_MvdSAddr(data)                                               (0xFFFFFFFF&(data))
#define  SEG_DEBUG4_get_MvdSAddr(data)                                           (0xFFFFFFFF&(data))
#define  SEG_DEBUG4_MvdSAddr_src(data)                                           (0xFFFFFFFF&(data))

#define  SEG_DEBUG5                                                             0x1800E768
#define  SEG_DEBUG5_reg_addr                                                     "0xB800E768"
#define  SEG_DEBUG5_reg                                                          0xB800E768
#define  SEG_DEBUG5_inst_addr                                                    "0x000A"
#define  SEG_DEBUG5_inst_adr                                                     "0x00DA"
#define  SEG_DEBUG5_inst                                                         0x00DA
#define  set_SEG_DEBUG5_reg(data)                                                (*((volatile unsigned int*)SEG_DEBUG5_reg)=data)
#define  get_SEG_DEBUG5_reg                                                      (*((volatile unsigned int*)SEG_DEBUG5_reg))
#define  SEG_DEBUG5_ItSAddr_shift                                                (0)
#define  SEG_DEBUG5_ItSAddr_mask                                                 (0xFFFFFFFF)
#define  SEG_DEBUG5_ItSAddr(data)                                                (0xFFFFFFFF&(data))
#define  SEG_DEBUG5_get_ItSAddr(data)                                            (0xFFFFFFFF&(data))
#define  SEG_DEBUG5_ItSAddr_src(data)                                            (0xFFFFFFFF&(data))

#define  SEG_DEBUG6                                                             0x1800E76C
#define  SEG_DEBUG6_reg_addr                                                     "0xB800E76C"
#define  SEG_DEBUG6_reg                                                          0xB800E76C
#define  SEG_DEBUG6_inst_addr                                                    "0x000B"
#define  SEG_DEBUG6_inst_adr                                                     "0x00DB"
#define  SEG_DEBUG6_inst                                                         0x00DB
#define  set_SEG_DEBUG6_reg(data)                                                (*((volatile unsigned int*)SEG_DEBUG6_reg)=data)
#define  get_SEG_DEBUG6_reg                                                      (*((volatile unsigned int*)SEG_DEBUG6_reg))
#define  SEG_DEBUG6_CmSAddr_shift                                                (0)
#define  SEG_DEBUG6_CmSAddr_mask                                                 (0xFFFFFFFF)
#define  SEG_DEBUG6_CmSAddr(data)                                                (0xFFFFFFFF&(data))
#define  SEG_DEBUG6_get_CmSAddr(data)                                            (0xFFFFFFFF&(data))
#define  SEG_DEBUG6_CmSAddr_src(data)                                            (0xFFFFFFFF&(data))

#define  SEG_SEGMENT_0                                                          0x1800E770
#define  SEG_SEGMENT_0_reg_addr                                                  "0xB800E770"
#define  SEG_SEGMENT_0_reg                                                       0xB800E770
#define  SEG_SEGMENT_0_inst_addr                                                 "0x000C"
#define  SEG_SEGMENT_0_inst_adr                                                  "0x00DC"
#define  SEG_SEGMENT_0_inst                                                      0x00DC
#define  set_SEG_SEGMENT_0_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_0_reg)=data)
#define  get_SEG_SEGMENT_0_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_0_reg))
#define  SEG_SEGMENT_MaskLossless_shift                                          (23)
#define  SEG_SEGMENT_MaskQindex_shift                                            (22)
#define  SEG_SEGMENT_MaskFilterLevel_shift                                       (21)
#define  SEG_SEGMENT_MaskRefidx_shift                                            (20)
#define  SEG_SEGMENT_MaskSkip_shift                                              (19)
#define  SEG_SEGMENT_Qindex_shift                                                (10)
#define  SEG_SEGMENT_FilterLevel_shift                                           (3)
#define  SEG_SEGMENT_Refidx_shift                                                (0)
#define  SEG_SEGMENT_MaskLossless_mask                                           (0x00800000)
#define  SEG_SEGMENT_MaskQindex_mask                                             (0x00400000)
#define  SEG_SEGMENT_MaskFilterLevel_mask                                        (0x00200000)
#define  SEG_SEGMENT_MaskRefidx_mask                                             (0x00100000)
#define  SEG_SEGMENT_MaskSkip_mask                                               (0x00080000)
#define  SEG_SEGMENT_Qindex_mask                                                 (0x0007FC00)
#define  SEG_SEGMENT_FilterLevel_mask                                            (0x000003F8)
#define  SEG_SEGMENT_Refidx_mask                                                 (0x00000007)
#define  SEG_SEGMENT_MaskLossless(data)                                          (0x00800000&((data)<<23))
#define  SEG_SEGMENT_MaskQindex(data)                                            (0x00400000&((data)<<22))
#define  SEG_SEGMENT_MaskFilterLevel(data)                                       (0x00200000&((data)<<21))
#define  SEG_SEGMENT_MaskRefidx(data)                                            (0x00100000&((data)<<20))
#define  SEG_SEGMENT_MaskSkip(data)                                              (0x00080000&((data)<<19))
#define  SEG_SEGMENT_Qindex(data)                                                (0x0007FC00&((data)<<10))
#define  SEG_SEGMENT_FilterLevel(data)                                           (0x000003F8&((data)<<3))
#define  SEG_SEGMENT_Refidx(data)                                                (0x00000007&(data))
#define  SEG_SEGMENT_get_MaskLossless(data)                                      ((0x00800000&(data))>>23)
#define  SEG_SEGMENT_get_MaskQindex(data)                                        ((0x00400000&(data))>>22)
#define  SEG_SEGMENT_get_MaskFilterLevel(data)                                   ((0x00200000&(data))>>21)
#define  SEG_SEGMENT_get_MaskRefidx(data)                                        ((0x00100000&(data))>>20)
#define  SEG_SEGMENT_get_MaskSkip(data)                                          ((0x00080000&(data))>>19)
#define  SEG_SEGMENT_get_Qindex(data)                                            ((0x0007FC00&(data))>>10)
#define  SEG_SEGMENT_get_FilterLevel(data)                                       ((0x000003F8&(data))>>3)
#define  SEG_SEGMENT_get_Refidx(data)                                            (0x00000007&(data))
#define  SEG_SEGMENT_MaskLossless_src(data)                                      ((0x00800000&(data))>>23)
#define  SEG_SEGMENT_MaskQindex_src(data)                                        ((0x00400000&(data))>>22)
#define  SEG_SEGMENT_MaskFilterLevel_src(data)                                   ((0x00200000&(data))>>21)
#define  SEG_SEGMENT_MaskRefidx_src(data)                                        ((0x00100000&(data))>>20)
#define  SEG_SEGMENT_MaskSkip_src(data)                                          ((0x00080000&(data))>>19)
#define  SEG_SEGMENT_Qindex_src(data)                                            ((0x0007FC00&(data))>>10)
#define  SEG_SEGMENT_FilterLevel_src(data)                                       ((0x000003F8&(data))>>3)
#define  SEG_SEGMENT_Refidx_src(data)                                            (0x00000007&(data))

#define  SEG_SEGMENT_1                                                          0x1800E774
#define  SEG_SEGMENT_1_reg_addr                                                  "0xB800E774"
#define  SEG_SEGMENT_1_reg                                                       0xB800E774
#define  SEG_SEGMENT_1_inst_addr                                                 "0x000D"
#define  SEG_SEGMENT_1_inst_adr                                                  "0x00DD"
#define  SEG_SEGMENT_1_inst                                                      0x00DD
#define  set_SEG_SEGMENT_1_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_1_reg)=data)
#define  get_SEG_SEGMENT_1_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_1_reg))

#define  SEG_SEGMENT_2                                                          0x1800E778
#define  SEG_SEGMENT_2_reg_addr                                                  "0xB800E778"
#define  SEG_SEGMENT_2_reg                                                       0xB800E778
#define  SEG_SEGMENT_2_inst_addr                                                 "0x000E"
#define  SEG_SEGMENT_2_inst_adr                                                  "0x00DE"
#define  SEG_SEGMENT_2_inst                                                      0x00DE
#define  set_SEG_SEGMENT_2_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_2_reg)=data)
#define  get_SEG_SEGMENT_2_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_2_reg))

#define  SEG_SEGMENT_3                                                          0x1800E77C
#define  SEG_SEGMENT_3_reg_addr                                                  "0xB800E77C"
#define  SEG_SEGMENT_3_reg                                                       0xB800E77C
#define  SEG_SEGMENT_3_inst_addr                                                 "0x000F"
#define  SEG_SEGMENT_3_inst_adr                                                  "0x00DF"
#define  SEG_SEGMENT_3_inst                                                      0x00DF
#define  set_SEG_SEGMENT_3_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_3_reg)=data)
#define  get_SEG_SEGMENT_3_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_3_reg))

#define  SEG_SEGMENT_4                                                          0x1800E780
#define  SEG_SEGMENT_4_reg_addr                                                  "0xB800E780"
#define  SEG_SEGMENT_4_reg                                                       0xB800E780
#define  SEG_SEGMENT_4_inst_addr                                                 "0x0010"
#define  SEG_SEGMENT_4_inst_adr                                                  "0x00E0"
#define  SEG_SEGMENT_4_inst                                                      0x00E0
#define  set_SEG_SEGMENT_4_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_4_reg)=data)
#define  get_SEG_SEGMENT_4_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_4_reg))

#define  SEG_SEGMENT_5                                                          0x1800E784
#define  SEG_SEGMENT_5_reg_addr                                                  "0xB800E784"
#define  SEG_SEGMENT_5_reg                                                       0xB800E784
#define  SEG_SEGMENT_5_inst_addr                                                 "0x0011"
#define  SEG_SEGMENT_5_inst_adr                                                  "0x00E1"
#define  SEG_SEGMENT_5_inst                                                      0x00E1
#define  set_SEG_SEGMENT_5_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_5_reg)=data)
#define  get_SEG_SEGMENT_5_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_5_reg))

#define  SEG_SEGMENT_6                                                          0x1800E788
#define  SEG_SEGMENT_6_reg_addr                                                  "0xB800E788"
#define  SEG_SEGMENT_6_reg                                                       0xB800E788
#define  SEG_SEGMENT_6_inst_addr                                                 "0x0012"
#define  SEG_SEGMENT_6_inst_adr                                                  "0x00E2"
#define  SEG_SEGMENT_6_inst                                                      0x00E2
#define  set_SEG_SEGMENT_6_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_6_reg)=data)
#define  get_SEG_SEGMENT_6_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_6_reg))

#define  SEG_SEGMENT_7                                                          0x1800E78C
#define  SEG_SEGMENT_7_reg_addr                                                  "0xB800E78C"
#define  SEG_SEGMENT_7_reg                                                       0xB800E78C
#define  SEG_SEGMENT_7_inst_addr                                                 "0x0013"
#define  SEG_SEGMENT_7_inst_adr                                                  "0x00E3"
#define  SEG_SEGMENT_7_inst                                                      0x00E3
#define  set_SEG_SEGMENT_7_reg(data)                                             (*((volatile unsigned int*)SEG_SEGMENT_7_reg)=data)
#define  get_SEG_SEGMENT_7_reg                                                   (*((volatile unsigned int*)SEG_SEGMENT_7_reg))

#define  SEG_SEGMENT1_0                                                         0x1800E790
#define  SEG_SEGMENT1_0_reg_addr                                                 "0xB800E790"
#define  SEG_SEGMENT1_0_reg                                                      0xB800E790
#define  SEG_SEGMENT1_0_inst_addr                                                "0x0014"
#define  SEG_SEGMENT1_0_inst_adr                                                 "0x00E4"
#define  SEG_SEGMENT1_0_inst                                                     0x00E4
#define  set_SEG_SEGMENT1_0_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_0_reg)=data)
#define  get_SEG_SEGMENT1_0_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_0_reg))
#define  SEG_SEGMENT1_MaskFilterLevelV_shift                                     (23)
#define  SEG_SEGMENT1_MaskFilterLevelU_shift                                     (22)
#define  SEG_SEGMENT1_MaskFilterLevelHori_shift                                  (21)
#define  SEG_SEGMENT1_FilterLevelV_shift                                         (14)
#define  SEG_SEGMENT1_FilterLevelU_shift                                         (7)
#define  SEG_SEGMENT1_FilterLevelHori_shift                                      (0)
#define  SEG_SEGMENT1_MaskFilterLevelV_mask                                      (0x00800000)
#define  SEG_SEGMENT1_MaskFilterLevelU_mask                                      (0x00400000)
#define  SEG_SEGMENT1_MaskFilterLevelHori_mask                                   (0x00200000)
#define  SEG_SEGMENT1_FilterLevelV_mask                                          (0x001FC000)
#define  SEG_SEGMENT1_FilterLevelU_mask                                          (0x00003F80)
#define  SEG_SEGMENT1_FilterLevelHori_mask                                       (0x0000007F)
#define  SEG_SEGMENT1_MaskFilterLevelV(data)                                     (0x00800000&((data)<<23))
#define  SEG_SEGMENT1_MaskFilterLevelU(data)                                     (0x00400000&((data)<<22))
#define  SEG_SEGMENT1_MaskFilterLevelHori(data)                                  (0x00200000&((data)<<21))
#define  SEG_SEGMENT1_FilterLevelV(data)                                         (0x001FC000&((data)<<14))
#define  SEG_SEGMENT1_FilterLevelU(data)                                         (0x00003F80&((data)<<7))
#define  SEG_SEGMENT1_FilterLevelHori(data)                                      (0x0000007F&(data))
#define  SEG_SEGMENT1_get_MaskFilterLevelV(data)                                 ((0x00800000&(data))>>23)
#define  SEG_SEGMENT1_get_MaskFilterLevelU(data)                                 ((0x00400000&(data))>>22)
#define  SEG_SEGMENT1_get_MaskFilterLevelHori(data)                              ((0x00200000&(data))>>21)
#define  SEG_SEGMENT1_get_FilterLevelV(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_SEGMENT1_get_FilterLevelU(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_SEGMENT1_get_FilterLevelHori(data)                                  (0x0000007F&(data))
#define  SEG_SEGMENT1_MaskFilterLevelV_src(data)                                 ((0x00800000&(data))>>23)
#define  SEG_SEGMENT1_MaskFilterLevelU_src(data)                                 ((0x00400000&(data))>>22)
#define  SEG_SEGMENT1_MaskFilterLevelHori_src(data)                              ((0x00200000&(data))>>21)
#define  SEG_SEGMENT1_FilterLevelV_src(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_SEGMENT1_FilterLevelU_src(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_SEGMENT1_FilterLevelHori_src(data)                                  (0x0000007F&(data))

#define  SEG_SEGMENT1_1                                                         0x1800E794
#define  SEG_SEGMENT1_1_reg_addr                                                 "0xB800E794"
#define  SEG_SEGMENT1_1_reg                                                      0xB800E794
#define  SEG_SEGMENT1_1_inst_addr                                                "0x0015"
#define  SEG_SEGMENT1_1_inst_adr                                                 "0x00E5"
#define  SEG_SEGMENT1_1_inst                                                     0x00E5
#define  set_SEG_SEGMENT1_1_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_1_reg)=data)
#define  get_SEG_SEGMENT1_1_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_1_reg))

#define  SEG_SEGMENT1_2                                                         0x1800E798
#define  SEG_SEGMENT1_2_reg_addr                                                 "0xB800E798"
#define  SEG_SEGMENT1_2_reg                                                      0xB800E798
#define  SEG_SEGMENT1_2_inst_addr                                                "0x0016"
#define  SEG_SEGMENT1_2_inst_adr                                                 "0x00E6"
#define  SEG_SEGMENT1_2_inst                                                     0x00E6
#define  set_SEG_SEGMENT1_2_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_2_reg)=data)
#define  get_SEG_SEGMENT1_2_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_2_reg))

#define  SEG_SEGMENT1_3                                                         0x1800E79C
#define  SEG_SEGMENT1_3_reg_addr                                                 "0xB800E79C"
#define  SEG_SEGMENT1_3_reg                                                      0xB800E79C
#define  SEG_SEGMENT1_3_inst_addr                                                "0x0017"
#define  SEG_SEGMENT1_3_inst_adr                                                 "0x00E7"
#define  SEG_SEGMENT1_3_inst                                                     0x00E7
#define  set_SEG_SEGMENT1_3_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_3_reg)=data)
#define  get_SEG_SEGMENT1_3_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_3_reg))

#define  SEG_SEGMENT1_4                                                         0x1800E7A0
#define  SEG_SEGMENT1_4_reg_addr                                                 "0xB800E7A0"
#define  SEG_SEGMENT1_4_reg                                                      0xB800E7A0
#define  SEG_SEGMENT1_4_inst_addr                                                "0x0018"
#define  SEG_SEGMENT1_4_inst_adr                                                 "0x00E8"
#define  SEG_SEGMENT1_4_inst                                                     0x00E8
#define  set_SEG_SEGMENT1_4_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_4_reg)=data)
#define  get_SEG_SEGMENT1_4_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_4_reg))

#define  SEG_SEGMENT1_5                                                         0x1800E7A4
#define  SEG_SEGMENT1_5_reg_addr                                                 "0xB800E7A4"
#define  SEG_SEGMENT1_5_reg                                                      0xB800E7A4
#define  SEG_SEGMENT1_5_inst_addr                                                "0x0019"
#define  SEG_SEGMENT1_5_inst_adr                                                 "0x00E9"
#define  SEG_SEGMENT1_5_inst                                                     0x00E9
#define  set_SEG_SEGMENT1_5_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_5_reg)=data)
#define  get_SEG_SEGMENT1_5_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_5_reg))

#define  SEG_SEGMENT1_6                                                         0x1800E7A8
#define  SEG_SEGMENT1_6_reg_addr                                                 "0xB800E7A8"
#define  SEG_SEGMENT1_6_reg                                                      0xB800E7A8
#define  SEG_SEGMENT1_6_inst_addr                                                "0x001A"
#define  SEG_SEGMENT1_6_inst_adr                                                 "0x00EA"
#define  SEG_SEGMENT1_6_inst                                                     0x00EA
#define  set_SEG_SEGMENT1_6_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_6_reg)=data)
#define  get_SEG_SEGMENT1_6_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_6_reg))

#define  SEG_SEGMENT1_7                                                         0x1800E7AC
#define  SEG_SEGMENT1_7_reg_addr                                                 "0xB800E7AC"
#define  SEG_SEGMENT1_7_reg                                                      0xB800E7AC
#define  SEG_SEGMENT1_7_inst_addr                                                "0x001B"
#define  SEG_SEGMENT1_7_inst_adr                                                 "0x00EB"
#define  SEG_SEGMENT1_7_inst                                                     0x00EB
#define  set_SEG_SEGMENT1_7_reg(data)                                            (*((volatile unsigned int*)SEG_SEGMENT1_7_reg)=data)
#define  get_SEG_SEGMENT1_7_reg                                                  (*((volatile unsigned int*)SEG_SEGMENT1_7_reg))

#define  SEG_PIC                                                                0x1800E7B0
#define  SEG_PIC_reg_addr                                                        "0xB800E7B0"
#define  SEG_PIC_reg                                                             0xB800E7B0
#define  SEG_PIC_inst_addr                                                       "0x001C"
#define  SEG_PIC_inst_adr                                                        "0x00EC"
#define  SEG_PIC_inst                                                            0x00EC
#define  set_SEG_PIC_reg(data)                                                   (*((volatile unsigned int*)SEG_PIC_reg)=data)
#define  get_SEG_PIC_reg                                                         (*((volatile unsigned int*)SEG_PIC_reg))
#define  SEG_PIC_DisableMvdLdComem_shift                                         (11)
#define  SEG_PIC_DisableMvdStComem_shift                                         (10)
#define  SEG_PIC_IntraOnly_shift                                                 (9)
#define  SEG_PIC_AbsDelta_shift                                                  (8)
#define  SEG_PIC_Qindex_shift                                                    (0)
#define  SEG_PIC_DisableMvdLdComem_mask                                          (0x00000800)
#define  SEG_PIC_DisableMvdStComem_mask                                          (0x00000400)
#define  SEG_PIC_IntraOnly_mask                                                  (0x00000200)
#define  SEG_PIC_AbsDelta_mask                                                   (0x00000100)
#define  SEG_PIC_Qindex_mask                                                     (0x000000FF)
#define  SEG_PIC_DisableMvdLdComem(data)                                         (0x00000800&((data)<<11))
#define  SEG_PIC_DisableMvdStComem(data)                                         (0x00000400&((data)<<10))
#define  SEG_PIC_IntraOnly(data)                                                 (0x00000200&((data)<<9))
#define  SEG_PIC_AbsDelta(data)                                                  (0x00000100&((data)<<8))
#define  SEG_PIC_Qindex(data)                                                    (0x000000FF&(data))
#define  SEG_PIC_get_DisableMvdLdComem(data)                                     ((0x00000800&(data))>>11)
#define  SEG_PIC_get_DisableMvdStComem(data)                                     ((0x00000400&(data))>>10)
#define  SEG_PIC_get_IntraOnly(data)                                             ((0x00000200&(data))>>9)
#define  SEG_PIC_get_AbsDelta(data)                                              ((0x00000100&(data))>>8)
#define  SEG_PIC_get_Qindex(data)                                                (0x000000FF&(data))
#define  SEG_PIC_DisableMvdLdComem_src(data)                                     ((0x00000800&(data))>>11)
#define  SEG_PIC_DisableMvdStComem_src(data)                                     ((0x00000400&(data))>>10)
#define  SEG_PIC_IntraOnly_src(data)                                             ((0x00000200&(data))>>9)
#define  SEG_PIC_AbsDelta_src(data)                                              ((0x00000100&(data))>>8)
#define  SEG_PIC_Qindex_src(data)                                                (0x000000FF&(data))

#define  SEG_REFDELTA0                                                          0x1800E7B4
#define  SEG_REFDELTA0_reg_addr                                                  "0xB800E7B4"
#define  SEG_REFDELTA0_reg                                                       0xB800E7B4
#define  SEG_REFDELTA0_inst_addr                                                 "0x001D"
#define  SEG_REFDELTA0_inst_adr                                                  "0x00ED"
#define  SEG_REFDELTA0_inst                                                      0x00ED
#define  set_SEG_REFDELTA0_reg(data)                                             (*((volatile unsigned int*)SEG_REFDELTA0_reg)=data)
#define  get_SEG_REFDELTA0_reg                                                   (*((volatile unsigned int*)SEG_REFDELTA0_reg))
#define  SEG_REFDELTA0_Ref_delta_3_shift                                         (21)
#define  SEG_REFDELTA0_Ref_delta_2_shift                                         (14)
#define  SEG_REFDELTA0_Ref_delta_1_shift                                         (7)
#define  SEG_REFDELTA0_Ref_delta_0_shift                                         (0)
#define  SEG_REFDELTA0_Ref_delta_3_mask                                          (0x0FE00000)
#define  SEG_REFDELTA0_Ref_delta_2_mask                                          (0x001FC000)
#define  SEG_REFDELTA0_Ref_delta_1_mask                                          (0x00003F80)
#define  SEG_REFDELTA0_Ref_delta_0_mask                                          (0x0000007F)
#define  SEG_REFDELTA0_Ref_delta_3(data)                                         (0x0FE00000&((data)<<21))
#define  SEG_REFDELTA0_Ref_delta_2(data)                                         (0x001FC000&((data)<<14))
#define  SEG_REFDELTA0_Ref_delta_1(data)                                         (0x00003F80&((data)<<7))
#define  SEG_REFDELTA0_Ref_delta_0(data)                                         (0x0000007F&(data))
#define  SEG_REFDELTA0_get_Ref_delta_3(data)                                     ((0x0FE00000&(data))>>21)
#define  SEG_REFDELTA0_get_Ref_delta_2(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_REFDELTA0_get_Ref_delta_1(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_REFDELTA0_get_Ref_delta_0(data)                                     (0x0000007F&(data))
#define  SEG_REFDELTA0_Ref_delta_3_src(data)                                     ((0x0FE00000&(data))>>21)
#define  SEG_REFDELTA0_Ref_delta_2_src(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_REFDELTA0_Ref_delta_1_src(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_REFDELTA0_Ref_delta_0_src(data)                                     (0x0000007F&(data))

#define  SEG_REFDELTA1                                                          0x1800E7B8
#define  SEG_REFDELTA1_reg_addr                                                  "0xB800E7B8"
#define  SEG_REFDELTA1_reg                                                       0xB800E7B8
#define  SEG_REFDELTA1_inst_addr                                                 "0x001E"
#define  SEG_REFDELTA1_inst_adr                                                  "0x00EE"
#define  SEG_REFDELTA1_inst                                                      0x00EE
#define  set_SEG_REFDELTA1_reg(data)                                             (*((volatile unsigned int*)SEG_REFDELTA1_reg)=data)
#define  get_SEG_REFDELTA1_reg                                                   (*((volatile unsigned int*)SEG_REFDELTA1_reg))
#define  SEG_REFDELTA1_Ref_delta_7_shift                                         (21)
#define  SEG_REFDELTA1_Ref_delta_6_shift                                         (14)
#define  SEG_REFDELTA1_Ref_delta_5_shift                                         (7)
#define  SEG_REFDELTA1_Ref_delta_4_shift                                         (0)
#define  SEG_REFDELTA1_Ref_delta_7_mask                                          (0x0FE00000)
#define  SEG_REFDELTA1_Ref_delta_6_mask                                          (0x001FC000)
#define  SEG_REFDELTA1_Ref_delta_5_mask                                          (0x00003F80)
#define  SEG_REFDELTA1_Ref_delta_4_mask                                          (0x0000007F)
#define  SEG_REFDELTA1_Ref_delta_7(data)                                         (0x0FE00000&((data)<<21))
#define  SEG_REFDELTA1_Ref_delta_6(data)                                         (0x001FC000&((data)<<14))
#define  SEG_REFDELTA1_Ref_delta_5(data)                                         (0x00003F80&((data)<<7))
#define  SEG_REFDELTA1_Ref_delta_4(data)                                         (0x0000007F&(data))
#define  SEG_REFDELTA1_get_Ref_delta_7(data)                                     ((0x0FE00000&(data))>>21)
#define  SEG_REFDELTA1_get_Ref_delta_6(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_REFDELTA1_get_Ref_delta_5(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_REFDELTA1_get_Ref_delta_4(data)                                     (0x0000007F&(data))
#define  SEG_REFDELTA1_Ref_delta_7_src(data)                                     ((0x0FE00000&(data))>>21)
#define  SEG_REFDELTA1_Ref_delta_6_src(data)                                     ((0x001FC000&(data))>>14)
#define  SEG_REFDELTA1_Ref_delta_5_src(data)                                     ((0x00003F80&(data))>>7)
#define  SEG_REFDELTA1_Ref_delta_4_src(data)                                     (0x0000007F&(data))

#define  SEG_MODEDELTA                                                          0x1800E7BC
#define  SEG_MODEDELTA_reg_addr                                                  "0xB800E7BC"
#define  SEG_MODEDELTA_reg                                                       0xB800E7BC
#define  SEG_MODEDELTA_inst_addr                                                 "0x001F"
#define  SEG_MODEDELTA_inst_adr                                                  "0x00EF"
#define  SEG_MODEDELTA_inst                                                      0x00EF
#define  set_SEG_MODEDELTA_reg(data)                                             (*((volatile unsigned int*)SEG_MODEDELTA_reg)=data)
#define  get_SEG_MODEDELTA_reg                                                   (*((volatile unsigned int*)SEG_MODEDELTA_reg))
#define  SEG_MODEDELTA_Mode_delta_1_shift                                        (7)
#define  SEG_MODEDELTA_Mode_delta_0_shift                                        (0)
#define  SEG_MODEDELTA_Mode_delta_1_mask                                         (0x00003F80)
#define  SEG_MODEDELTA_Mode_delta_0_mask                                         (0x0000007F)
#define  SEG_MODEDELTA_Mode_delta_1(data)                                        (0x00003F80&((data)<<7))
#define  SEG_MODEDELTA_Mode_delta_0(data)                                        (0x0000007F&(data))
#define  SEG_MODEDELTA_get_Mode_delta_1(data)                                    ((0x00003F80&(data))>>7)
#define  SEG_MODEDELTA_get_Mode_delta_0(data)                                    (0x0000007F&(data))
#define  SEG_MODEDELTA_Mode_delta_1_src(data)                                    ((0x00003F80&(data))>>7)
#define  SEG_MODEDELTA_Mode_delta_0_src(data)                                    (0x0000007F&(data))

#ifdef _SEG_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SEG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  SegReset:1;
        RBus_UInt32  ResetReadPointer:1;
        RBus_UInt32  SegEnable:1;
    };
}SEG_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StartAddr:32;
    };
}SEG_TBCMD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  WritePointer:16;
    };
}SEG_TBCMD1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StartAddr:32;
    };
}SEG_SLCCFG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  EnableAltMinC:1;
        RBus_UInt32  AltMinC:13;
        RBus_UInt32  Select:1;
        RBus_UInt32  Enable:1;
        RBus_UInt32  MinC:16;
    };
}SEG_SYNC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  SegExport:1;
        RBus_UInt32  Enable:1;
        RBus_UInt32  CtbAddr:18;
    };
}SEG_DEBUG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  QpDeltaAbs:1;
        RBus_UInt32  Size:3;
        RBus_UInt32  zIdx:8;
        RBus_UInt32  TuGo:1;
        RBus_UInt32  CuGo:1;
        RBus_UInt32  SaoGo:1;
    };
}SEG_DEBUG1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  PicCount:15;
    };
}SEG_DEBUG2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SdeSAddr:32;
    };
}SEG_DEBUG3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MvdSAddr:32;
    };
}SEG_DEBUG4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ItSAddr:32;
    };
}SEG_DEBUG5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CmSAddr:32;
    };
}SEG_DEBUG6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  MaskLossless:1;
        RBus_UInt32  MaskQindex:1;
        RBus_UInt32  MaskFilterLevel:1;
        RBus_UInt32  MaskRefidx:1;
        RBus_UInt32  MaskSkip:1;
        RBus_UInt32  Qindex:9;
        RBus_UInt32  FilterLevel:7;
        RBus_UInt32  Refidx:3;
    };
}SEG_SEGMENT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  MaskFilterLevelV:1;
        RBus_UInt32  MaskFilterLevelU:1;
        RBus_UInt32  MaskFilterLevelHori:1;
        RBus_UInt32  FilterLevelV:7;
        RBus_UInt32  FilterLevelU:7;
        RBus_UInt32  FilterLevelHori:7;
    };
}SEG_SEGMENT1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  DisableMvdLdComem:1;
        RBus_UInt32  DisableMvdStComem:1;
        RBus_UInt32  IntraOnly:1;
        RBus_UInt32  AbsDelta:1;
        RBus_UInt32  Qindex:8;
    };
}SEG_PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  Ref_delta_3:7;
        RBus_UInt32  Ref_delta_2:7;
        RBus_UInt32  Ref_delta_1:7;
        RBus_UInt32  Ref_delta_0:7;
    };
}SEG_REFDELTA0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  Ref_delta_7:7;
        RBus_UInt32  Ref_delta_6:7;
        RBus_UInt32  Ref_delta_5:7;
        RBus_UInt32  Ref_delta_4:7;
    };
}SEG_REFDELTA1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  Mode_delta_1:7;
        RBus_UInt32  Mode_delta_0:7;
    };
}SEG_MODEDELTA_RBUS;

#else //apply LITTLE_ENDIAN

//======SEG register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SegEnable:1;
        RBus_UInt32  ResetReadPointer:1;
        RBus_UInt32  SegReset:1;
        RBus_UInt32  res1:29;
    };
}SEG_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StartAddr:32;
    };
}SEG_TBCMD_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  WritePointer:16;
        RBus_UInt32  res1:16;
    };
}SEG_TBCMD1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StartAddr:32;
    };
}SEG_SLCCFG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MinC:16;
        RBus_UInt32  Enable:1;
        RBus_UInt32  Select:1;
        RBus_UInt32  AltMinC:13;
        RBus_UInt32  EnableAltMinC:1;
    };
}SEG_SYNC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CtbAddr:18;
        RBus_UInt32  Enable:1;
        RBus_UInt32  SegExport:1;
        RBus_UInt32  res1:12;
    };
}SEG_DEBUG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SaoGo:1;
        RBus_UInt32  CuGo:1;
        RBus_UInt32  TuGo:1;
        RBus_UInt32  zIdx:8;
        RBus_UInt32  Size:3;
        RBus_UInt32  QpDeltaAbs:1;
        RBus_UInt32  res1:17;
    };
}SEG_DEBUG1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  PicCount:15;
        RBus_UInt32  res1:17;
    };
}SEG_DEBUG2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SdeSAddr:32;
    };
}SEG_DEBUG3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MvdSAddr:32;
    };
}SEG_DEBUG4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ItSAddr:32;
    };
}SEG_DEBUG5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CmSAddr:32;
    };
}SEG_DEBUG6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Refidx:3;
        RBus_UInt32  FilterLevel:7;
        RBus_UInt32  Qindex:9;
        RBus_UInt32  MaskSkip:1;
        RBus_UInt32  MaskRefidx:1;
        RBus_UInt32  MaskFilterLevel:1;
        RBus_UInt32  MaskQindex:1;
        RBus_UInt32  MaskLossless:1;
        RBus_UInt32  res1:8;
    };
}SEG_SEGMENT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  FilterLevelHori:7;
        RBus_UInt32  FilterLevelU:7;
        RBus_UInt32  FilterLevelV:7;
        RBus_UInt32  MaskFilterLevelHori:1;
        RBus_UInt32  MaskFilterLevelU:1;
        RBus_UInt32  MaskFilterLevelV:1;
        RBus_UInt32  res1:8;
    };
}SEG_SEGMENT1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Qindex:8;
        RBus_UInt32  AbsDelta:1;
        RBus_UInt32  IntraOnly:1;
        RBus_UInt32  DisableMvdStComem:1;
        RBus_UInt32  DisableMvdLdComem:1;
        RBus_UInt32  res1:20;
    };
}SEG_PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Ref_delta_0:7;
        RBus_UInt32  Ref_delta_1:7;
        RBus_UInt32  Ref_delta_2:7;
        RBus_UInt32  Ref_delta_3:7;
        RBus_UInt32  res1:4;
    };
}SEG_REFDELTA0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Ref_delta_4:7;
        RBus_UInt32  Ref_delta_5:7;
        RBus_UInt32  Ref_delta_6:7;
        RBus_UInt32  Ref_delta_7:7;
        RBus_UInt32  res1:4;
    };
}SEG_REFDELTA1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Mode_delta_0:7;
        RBus_UInt32  Mode_delta_1:7;
        RBus_UInt32  res1:18;
    };
}SEG_MODEDELTA_RBUS;




#endif 


#endif 
#endif 
