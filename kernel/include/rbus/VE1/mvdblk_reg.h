/*  @Auther Jeffrey_zhang  */

#ifndef _RBUS_MVDBLK_REG_H_
#define _RBUS_MVDBLK_REG_H_

#include "rbusTypes.h"

#define  MVDBLK_COMM                                                            0x1800E660
#define  MVDBLK_COMM_reg_addr                                                    "0xB800E660"
#define  MVDBLK_COMM_reg                                                         0xB800E660
#define  MVDBLK_COMM_inst_adr                                                    "0x0098"
#define  MVDBLK_COMM_inst                                                        0x0098
#define  set_MVDBLK_COMM_reg(data)                                               (*((volatile unsigned int*)MVDBLK_COMM_reg)=data)
#define  get_MVDBLK_COMM_reg                                                     (*((volatile unsigned int*)MVDBLK_COMM_reg))
#define  MVDBLK_COMM_PicType_shift                                               (2)
#define  MVDBLK_COMM_FirstMbOfPic_shift                                          (1)
#define  MVDBLK_COMM_FirstMbOfSlice_shift                                        (0)
#define  MVDBLK_COMM_PicType_mask                                                (0x0000001C)
#define  MVDBLK_COMM_FirstMbOfPic_mask                                           (0x00000002)
#define  MVDBLK_COMM_FirstMbOfSlice_mask                                         (0x00000001)
#define  MVDBLK_COMM_PicType(data)                                               (0x0000001C&((data)<<2))
#define  MVDBLK_COMM_FirstMbOfPic(data)                                          (0x00000002&((data)<<1))
#define  MVDBLK_COMM_FirstMbOfSlice(data)                                        (0x00000001&(data))
#define  MVDBLK_COMM_get_PicType(data)                                           ((0x0000001C&(data))>>2)
#define  MVDBLK_COMM_get_FirstMbOfPic(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_COMM_get_FirstMbOfSlice(data)                                    (0x00000001&(data))
#define  MVDBLK_COMM_PicType_src(data)                                           ((0x0000001C&(data))>>2)
#define  MVDBLK_COMM_FirstMbOfPic_src(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_COMM_FirstMbOfSlice_src(data)                                    (0x00000001&(data))

#define  MVDBLK_COMM1                                                           0x1800E664
#define  MVDBLK_COMM1_reg_addr                                                   "0xB800E664"
#define  MVDBLK_COMM1_reg                                                        0xB800E664
#define  MVDBLK_COMM1_inst_adr                                                   "0x0099"
#define  MVDBLK_COMM1_inst                                                       0x0099
#define  set_MVDBLK_COMM1_reg(data)                                              (*((volatile unsigned int*)MVDBLK_COMM1_reg)=data)
#define  get_MVDBLK_COMM1_reg                                                    (*((volatile unsigned int*)MVDBLK_COMM1_reg))
#define  MVDBLK_COMM1_LdPxmemCount_shift                                         (0)
#define  MVDBLK_COMM1_LdPxmemCount_mask                                          (0x0000FFFF)
#define  MVDBLK_COMM1_LdPxmemCount(data)                                         (0x0000FFFF&(data))
#define  MVDBLK_COMM1_get_LdPxmemCount(data)                                     (0x0000FFFF&(data))
#define  MVDBLK_COMM1_LdPxmemCount_src(data)                                     (0x0000FFFF&(data))

#define  MVDBLK_COMM2                                                           0x1800E668
#define  MVDBLK_COMM2_reg_addr                                                   "0xB800E668"
#define  MVDBLK_COMM2_reg                                                        0xB800E668
#define  MVDBLK_COMM2_inst_adr                                                   "0x009A"
#define  MVDBLK_COMM2_inst                                                       0x009A
#define  set_MVDBLK_COMM2_reg(data)                                              (*((volatile unsigned int*)MVDBLK_COMM2_reg)=data)
#define  get_MVDBLK_COMM2_reg                                                    (*((volatile unsigned int*)MVDBLK_COMM2_reg))
#define  MVDBLK_COMM2_DbgDumpCount_shift                                         (0)
#define  MVDBLK_COMM2_DbgDumpCount_mask                                          (0x0000FFFF)
#define  MVDBLK_COMM2_DbgDumpCount(data)                                         (0x0000FFFF&(data))
#define  MVDBLK_COMM2_get_DbgDumpCount(data)                                     (0x0000FFFF&(data))
#define  MVDBLK_COMM2_DbgDumpCount_src(data)                                     (0x0000FFFF&(data))

#define  MVDBLK_COMM3                                                           0x1800E66C
#define  MVDBLK_COMM3_reg_addr                                                   "0xB800E66C"
#define  MVDBLK_COMM3_reg                                                        0xB800E66C
#define  MVDBLK_COMM3_inst_adr                                                   "0x009B"
#define  MVDBLK_COMM3_inst                                                       0x009B
#define  set_MVDBLK_COMM3_reg(data)                                              (*((volatile unsigned int*)MVDBLK_COMM3_reg)=data)
#define  get_MVDBLK_COMM3_reg                                                    (*((volatile unsigned int*)MVDBLK_COMM3_reg))
#define  MVDBLK_COMM3_SetAddr_shift                                              (27)
#define  MVDBLK_COMM3_MbAddrY_shift                                              (20)
#define  MVDBLK_COMM3_MbAddrX_shift                                              (13)
#define  MVDBLK_COMM3_MbAddr_shift                                               (0)
#define  MVDBLK_COMM3_SetAddr_mask                                               (0x08000000)
#define  MVDBLK_COMM3_MbAddrY_mask                                               (0x07F00000)
#define  MVDBLK_COMM3_MbAddrX_mask                                               (0x000FE000)
#define  MVDBLK_COMM3_MbAddr_mask                                                (0x00001FFF)
#define  MVDBLK_COMM3_SetAddr(data)                                              (0x08000000&((data)<<27))
#define  MVDBLK_COMM3_MbAddrY(data)                                              (0x07F00000&((data)<<20))
#define  MVDBLK_COMM3_MbAddrX(data)                                              (0x000FE000&((data)<<13))
#define  MVDBLK_COMM3_MbAddr(data)                                               (0x00001FFF&(data))
#define  MVDBLK_COMM3_get_SetAddr(data)                                          ((0x08000000&(data))>>27)
#define  MVDBLK_COMM3_get_MbAddrY(data)                                          ((0x07F00000&(data))>>20)
#define  MVDBLK_COMM3_get_MbAddrX(data)                                          ((0x000FE000&(data))>>13)
#define  MVDBLK_COMM3_get_MbAddr(data)                                           (0x00001FFF&(data))
#define  MVDBLK_COMM3_SetAddr_src(data)                                          ((0x08000000&(data))>>27)
#define  MVDBLK_COMM3_MbAddrY_src(data)                                          ((0x07F00000&(data))>>20)
#define  MVDBLK_COMM3_MbAddrX_src(data)                                          ((0x000FE000&(data))>>13)
#define  MVDBLK_COMM3_MbAddr_src(data)                                           (0x00001FFF&(data))

#define  MVDBLK_COMM4                                                           0x1800E670
#define  MVDBLK_COMM4_reg_addr                                                   "0xB800E670"
#define  MVDBLK_COMM4_reg                                                        0xB800E670
#define  MVDBLK_COMM4_inst_adr                                                   "0x009C"
#define  MVDBLK_COMM4_inst                                                       0x009C
#define  set_MVDBLK_COMM4_reg(data)                                              (*((volatile unsigned int*)MVDBLK_COMM4_reg)=data)
#define  get_MVDBLK_COMM4_reg                                                    (*((volatile unsigned int*)MVDBLK_COMM4_reg))
#define  MVDBLK_COMM4_HwCtrl_shift                                               (1)
#define  MVDBLK_COMM4_SoftReset_shift                                            (0)
#define  MVDBLK_COMM4_HwCtrl_mask                                                (0x000000FE)
#define  MVDBLK_COMM4_SoftReset_mask                                             (0x00000001)
#define  MVDBLK_COMM4_HwCtrl(data)                                               (0x000000FE&((data)<<1))
#define  MVDBLK_COMM4_SoftReset(data)                                            (0x00000001&(data))
#define  MVDBLK_COMM4_get_HwCtrl(data)                                           ((0x000000FE&(data))>>1)
#define  MVDBLK_COMM4_get_SoftReset(data)                                        (0x00000001&(data))
#define  MVDBLK_COMM4_HwCtrl_src(data)                                           ((0x000000FE&(data))>>1)
#define  MVDBLK_COMM4_SoftReset_src(data)                                        (0x00000001&(data))

#define  MVDBLK_COMM5_0                                                         0x1800E674
#define  MVDBLK_COMM5_0_reg_addr                                                 "0xB800E674"
#define  MVDBLK_COMM5_0_reg                                                      0xB800E674
#define  MVDBLK_COMM5_0_inst_adr                                                 "0x009D"
#define  MVDBLK_COMM5_0_inst                                                     0x009D
#define  set_MVDBLK_COMM5_0_reg(data)                                            (*((volatile unsigned int*)MVDBLK_COMM5_0_reg)=data)
#define  get_MVDBLK_COMM5_0_reg                                                  (*((volatile unsigned int*)MVDBLK_COMM5_0_reg))
#define  MVDBLK_COMM5_DbgWriteBuf_shift                                          (0)
#define  MVDBLK_COMM5_DbgWriteBuf_mask                                           (0xFFFFFFFF)
#define  MVDBLK_COMM5_DbgWriteBuf(data)                                          (0xFFFFFFFF&(data))
#define  MVDBLK_COMM5_get_DbgWriteBuf(data)                                      (0xFFFFFFFF&(data))
#define  MVDBLK_COMM5_DbgWriteBuf_src(data)                                      (0xFFFFFFFF&(data))

#define  MVDBLK_COMM5_1                                                         0x1800E678
#define  MVDBLK_COMM5_1_reg_addr                                                 "0xB800E678"
#define  MVDBLK_COMM5_1_reg                                                      0xB800E678
#define  MVDBLK_COMM5_1_inst_adr                                                 "0x009E"
#define  MVDBLK_COMM5_1_inst                                                     0x009E
#define  set_MVDBLK_COMM5_1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_COMM5_1_reg)=data)
#define  get_MVDBLK_COMM5_1_reg                                                  (*((volatile unsigned int*)MVDBLK_COMM5_1_reg))

#define  MVDBLK_COMM5_2                                                         0x1800E67C
#define  MVDBLK_COMM5_2_reg_addr                                                 "0xB800E67C"
#define  MVDBLK_COMM5_2_reg                                                      0xB800E67C
#define  MVDBLK_COMM5_2_inst_adr                                                 "0x009F"
#define  MVDBLK_COMM5_2_inst                                                     0x009F
#define  set_MVDBLK_COMM5_2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_COMM5_2_reg)=data)
#define  get_MVDBLK_COMM5_2_reg                                                  (*((volatile unsigned int*)MVDBLK_COMM5_2_reg))

#define  MVDBLK_COMM6                                                           0x1800E690
#define  MVDBLK_COMM6_reg_addr                                                   "0xB800E690"
#define  MVDBLK_COMM6_reg                                                        0xB800E690
#define  MVDBLK_COMM6_inst_adr                                                   "0x00A4"
#define  MVDBLK_COMM6_inst                                                       0x00A4
#define  set_MVDBLK_COMM6_reg(data)                                              (*((volatile unsigned int*)MVDBLK_COMM6_reg)=data)
#define  get_MVDBLK_COMM6_reg                                                    (*((volatile unsigned int*)MVDBLK_COMM6_reg))
#define  MVDBLK_COMM6_DbgStoreCount_shift                                        (0)
#define  MVDBLK_COMM6_DbgStoreCount_mask                                         (0x0000FFFF)
#define  MVDBLK_COMM6_DbgStoreCount(data)                                        (0x0000FFFF&(data))
#define  MVDBLK_COMM6_get_DbgStoreCount(data)                                    (0x0000FFFF&(data))
#define  MVDBLK_COMM6_DbgStoreCount_src(data)                                    (0x0000FFFF&(data))

#define  MVDBLK_H264PIC                                                         0x1800E600
#define  MVDBLK_H264PIC_reg_addr                                                 "0xB800E600"
#define  MVDBLK_H264PIC_reg                                                      0xB800E600
#define  MVDBLK_H264PIC_inst_adr                                                 "0x0080"
#define  MVDBLK_H264PIC_inst                                                     0x0080
#define  set_MVDBLK_H264PIC_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PIC_reg)=data)
#define  get_MVDBLK_H264PIC_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PIC_reg))
#define  MVDBLK_H264PIC_RefPicList10Short_shift                                  (7)
#define  MVDBLK_H264PIC_BotLeTopAbsDiffPOC_shift                                 (6)
#define  MVDBLK_H264PIC_DirectSpatial_shift                                      (5)
#define  MVDBLK_H264PIC_ColPicStruct_shift                                       (3)
#define  MVDBLK_H264PIC_CurrPicStruct_shift                                      (1)
#define  MVDBLK_H264PIC_Direct8x8Inf_shift                                       (0)
#define  MVDBLK_H264PIC_RefPicList10Short_mask                                   (0x00000080)
#define  MVDBLK_H264PIC_BotLeTopAbsDiffPOC_mask                                  (0x00000040)
#define  MVDBLK_H264PIC_DirectSpatial_mask                                       (0x00000020)
#define  MVDBLK_H264PIC_ColPicStruct_mask                                        (0x00000018)
#define  MVDBLK_H264PIC_CurrPicStruct_mask                                       (0x00000006)
#define  MVDBLK_H264PIC_Direct8x8Inf_mask                                        (0x00000001)
#define  MVDBLK_H264PIC_RefPicList10Short(data)                                  (0x00000080&((data)<<7))
#define  MVDBLK_H264PIC_BotLeTopAbsDiffPOC(data)                                 (0x00000040&((data)<<6))
#define  MVDBLK_H264PIC_DirectSpatial(data)                                      (0x00000020&((data)<<5))
#define  MVDBLK_H264PIC_ColPicStruct(data)                                       (0x00000018&((data)<<3))
#define  MVDBLK_H264PIC_CurrPicStruct(data)                                      (0x00000006&((data)<<1))
#define  MVDBLK_H264PIC_Direct8x8Inf(data)                                       (0x00000001&(data))
#define  MVDBLK_H264PIC_get_RefPicList10Short(data)                              ((0x00000080&(data))>>7)
#define  MVDBLK_H264PIC_get_BotLeTopAbsDiffPOC(data)                             ((0x00000040&(data))>>6)
#define  MVDBLK_H264PIC_get_DirectSpatial(data)                                  ((0x00000020&(data))>>5)
#define  MVDBLK_H264PIC_get_ColPicStruct(data)                                   ((0x00000018&(data))>>3)
#define  MVDBLK_H264PIC_get_CurrPicStruct(data)                                  ((0x00000006&(data))>>1)
#define  MVDBLK_H264PIC_get_Direct8x8Inf(data)                                   (0x00000001&(data))
#define  MVDBLK_H264PIC_RefPicList10Short_src(data)                              ((0x00000080&(data))>>7)
#define  MVDBLK_H264PIC_BotLeTopAbsDiffPOC_src(data)                             ((0x00000040&(data))>>6)
#define  MVDBLK_H264PIC_DirectSpatial_src(data)                                  ((0x00000020&(data))>>5)
#define  MVDBLK_H264PIC_ColPicStruct_src(data)                                   ((0x00000018&(data))>>3)
#define  MVDBLK_H264PIC_CurrPicStruct_src(data)                                  ((0x00000006&(data))>>1)
#define  MVDBLK_H264PIC_Direct8x8Inf_src(data)                                   (0x00000001&(data))

#define  MVDBLK_H264PIC1                                                        0x1800E604
#define  MVDBLK_H264PIC1_reg_addr                                                "0xB800E604"
#define  MVDBLK_H264PIC1_reg                                                     0xB800E604
#define  MVDBLK_H264PIC1_inst_adr                                                "0x0081"
#define  MVDBLK_H264PIC1_inst                                                    0x0081
#define  set_MVDBLK_H264PIC1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_H264PIC1_reg)=data)
#define  get_MVDBLK_H264PIC1_reg                                                 (*((volatile unsigned int*)MVDBLK_H264PIC1_reg))
#define  MVDBLK_H264PIC1_CurrFrmPoc_shift                                        (0)
#define  MVDBLK_H264PIC1_CurrFrmPoc_mask                                         (0xFFFFFFFF)
#define  MVDBLK_H264PIC1_CurrFrmPoc(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_H264PIC1_get_CurrFrmPoc(data)                                    (0xFFFFFFFF&(data))
#define  MVDBLK_H264PIC1_CurrFrmPoc_src(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_H264PIC2                                                        0x1800E608
#define  MVDBLK_H264PIC2_reg_addr                                                "0xB800E608"
#define  MVDBLK_H264PIC2_reg                                                     0xB800E608
#define  MVDBLK_H264PIC2_inst_adr                                                "0x0082"
#define  MVDBLK_H264PIC2_inst                                                    0x0082
#define  set_MVDBLK_H264PIC2_reg(data)                                           (*((volatile unsigned int*)MVDBLK_H264PIC2_reg)=data)
#define  get_MVDBLK_H264PIC2_reg                                                 (*((volatile unsigned int*)MVDBLK_H264PIC2_reg))
#define  MVDBLK_H264PIC2_CurrTopPoc_shift                                        (0)
#define  MVDBLK_H264PIC2_CurrTopPoc_mask                                         (0xFFFFFFFF)
#define  MVDBLK_H264PIC2_CurrTopPoc(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_H264PIC2_get_CurrTopPoc(data)                                    (0xFFFFFFFF&(data))
#define  MVDBLK_H264PIC2_CurrTopPoc_src(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_H264PIC3                                                        0x1800E60C
#define  MVDBLK_H264PIC3_reg_addr                                                "0xB800E60C"
#define  MVDBLK_H264PIC3_reg                                                     0xB800E60C
#define  MVDBLK_H264PIC3_inst_adr                                                "0x0083"
#define  MVDBLK_H264PIC3_inst                                                    0x0083
#define  set_MVDBLK_H264PIC3_reg(data)                                           (*((volatile unsigned int*)MVDBLK_H264PIC3_reg)=data)
#define  get_MVDBLK_H264PIC3_reg                                                 (*((volatile unsigned int*)MVDBLK_H264PIC3_reg))
#define  MVDBLK_H264PIC3_CurrBotPoc_shift                                        (0)
#define  MVDBLK_H264PIC3_CurrBotPoc_mask                                         (0xFFFFFFFF)
#define  MVDBLK_H264PIC3_CurrBotPoc(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_H264PIC3_get_CurrBotPoc(data)                                    (0xFFFFFFFF&(data))
#define  MVDBLK_H264PIC3_CurrBotPoc_src(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_H264CO                                                          0x1800E610
#define  MVDBLK_H264CO_reg_addr                                                  "0xB800E610"
#define  MVDBLK_H264CO_reg                                                       0xB800E610
#define  MVDBLK_H264CO_inst_adr                                                  "0x0084"
#define  MVDBLK_H264CO_inst                                                      0x0084
#define  set_MVDBLK_H264CO_reg(data)                                             (*((volatile unsigned int*)MVDBLK_H264CO_reg)=data)
#define  get_MVDBLK_H264CO_reg                                                   (*((volatile unsigned int*)MVDBLK_H264CO_reg))
#define  MVDBLK_H264CO_CoMem8x8_shift                                            (0)
#define  MVDBLK_H264CO_CoMem8x8_mask                                             (0x0000000F)
#define  MVDBLK_H264CO_CoMem8x8(data)                                            (0x0000000F&(data))
#define  MVDBLK_H264CO_get_CoMem8x8(data)                                        (0x0000000F&(data))
#define  MVDBLK_H264CO_CoMem8x8_src(data)                                        (0x0000000F&(data))

#define  MVDBLK_H264CO1                                                         0x1800E614
#define  MVDBLK_H264CO1_reg_addr                                                 "0xB800E614"
#define  MVDBLK_H264CO1_reg                                                      0xB800E614
#define  MVDBLK_H264CO1_inst_adr                                                 "0x0085"
#define  MVDBLK_H264CO1_inst                                                     0x0085
#define  set_MVDBLK_H264CO1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264CO1_reg)=data)
#define  get_MVDBLK_H264CO1_reg                                                  (*((volatile unsigned int*)MVDBLK_H264CO1_reg))
#define  MVDBLK_H264CO1_StCoMemSAddr_shift                                       (0)
#define  MVDBLK_H264CO1_StCoMemSAddr_mask                                        (0xFFFFFFFF)
#define  MVDBLK_H264CO1_StCoMemSAddr(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_H264CO1_get_StCoMemSAddr(data)                                   (0xFFFFFFFF&(data))
#define  MVDBLK_H264CO1_StCoMemSAddr_src(data)                                   (0xFFFFFFFF&(data))

#define  MVDBLK_H264CO2                                                         0x1800E618
#define  MVDBLK_H264CO2_reg_addr                                                 "0xB800E618"
#define  MVDBLK_H264CO2_reg                                                      0xB800E618
#define  MVDBLK_H264CO2_inst_adr                                                 "0x0086"
#define  MVDBLK_H264CO2_inst                                                     0x0086
#define  set_MVDBLK_H264CO2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264CO2_reg)=data)
#define  get_MVDBLK_H264CO2_reg                                                  (*((volatile unsigned int*)MVDBLK_H264CO2_reg))
#define  MVDBLK_H264CO2_MbaffAddr_shift                                          (31)
#define  MVDBLK_H264CO2_LdCoMemSAddr_shift                                       (0)
#define  MVDBLK_H264CO2_MbaffAddr_mask                                           (0x80000000)
#define  MVDBLK_H264CO2_LdCoMemSAddr_mask                                        (0x7FFFFFFF)
#define  MVDBLK_H264CO2_MbaffAddr(data)                                          (0x80000000&((data)<<31))
#define  MVDBLK_H264CO2_LdCoMemSAddr(data)                                       (0x7FFFFFFF&(data))
#define  MVDBLK_H264CO2_get_MbaffAddr(data)                                      ((0x80000000&(data))>>31)
#define  MVDBLK_H264CO2_get_LdCoMemSAddr(data)                                   (0x7FFFFFFF&(data))
#define  MVDBLK_H264CO2_MbaffAddr_src(data)                                      ((0x80000000&(data))>>31)
#define  MVDBLK_H264CO2_LdCoMemSAddr_src(data)                                   (0x7FFFFFFF&(data))

#define  MVDBLK_H264CO3                                                         0x1800E61C
#define  MVDBLK_H264CO3_reg_addr                                                 "0xB800E61C"
#define  MVDBLK_H264CO3_reg                                                      0xB800E61C
#define  MVDBLK_H264CO3_inst_adr                                                 "0x0087"
#define  MVDBLK_H264CO3_inst                                                     0x0087
#define  set_MVDBLK_H264CO3_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264CO3_reg)=data)
#define  get_MVDBLK_H264CO3_reg                                                  (*((volatile unsigned int*)MVDBLK_H264CO3_reg))
#define  MVDBLK_H264CO3_EnableLdCoMem1_shift                                     (31)
#define  MVDBLK_H264CO3_LdCoMemSAddr1_shift                                      (0)
#define  MVDBLK_H264CO3_EnableLdCoMem1_mask                                      (0x80000000)
#define  MVDBLK_H264CO3_LdCoMemSAddr1_mask                                       (0x7FFFFFFF)
#define  MVDBLK_H264CO3_EnableLdCoMem1(data)                                     (0x80000000&((data)<<31))
#define  MVDBLK_H264CO3_LdCoMemSAddr1(data)                                      (0x7FFFFFFF&(data))
#define  MVDBLK_H264CO3_get_EnableLdCoMem1(data)                                 ((0x80000000&(data))>>31)
#define  MVDBLK_H264CO3_get_LdCoMemSAddr1(data)                                  (0x7FFFFFFF&(data))
#define  MVDBLK_H264CO3_EnableLdCoMem1_src(data)                                 ((0x80000000&(data))>>31)
#define  MVDBLK_H264CO3_LdCoMemSAddr1_src(data)                                  (0x7FFFFFFF&(data))

#define  MVDBLK_H264NH                                                          0x1800E6D0
#define  MVDBLK_H264NH_reg_addr                                                  "0xB800E6D0"
#define  MVDBLK_H264NH_reg                                                       0xB800E6D0
#define  MVDBLK_H264NH_inst_adr                                                  "0x00B4"
#define  MVDBLK_H264NH_inst                                                      0x00B4
#define  set_MVDBLK_H264NH_reg(data)                                             (*((volatile unsigned int*)MVDBLK_H264NH_reg)=data)
#define  get_MVDBLK_H264NH_reg                                                   (*((volatile unsigned int*)MVDBLK_H264NH_reg))
#define  MVDBLK_H264NH_AutoLdStOff_shift                                         (3)
#define  MVDBLK_H264NH_InitNhMemCmd_shift                                        (2)
#define  MVDBLK_H264NH_LdNhMemCmd_shift                                          (1)
#define  MVDBLK_H264NH_StNhMemCmd_shift                                          (0)
#define  MVDBLK_H264NH_AutoLdStOff_mask                                          (0x00000008)
#define  MVDBLK_H264NH_InitNhMemCmd_mask                                         (0x00000004)
#define  MVDBLK_H264NH_LdNhMemCmd_mask                                           (0x00000002)
#define  MVDBLK_H264NH_StNhMemCmd_mask                                           (0x00000001)
#define  MVDBLK_H264NH_AutoLdStOff(data)                                         (0x00000008&((data)<<3))
#define  MVDBLK_H264NH_InitNhMemCmd(data)                                        (0x00000004&((data)<<2))
#define  MVDBLK_H264NH_LdNhMemCmd(data)                                          (0x00000002&((data)<<1))
#define  MVDBLK_H264NH_StNhMemCmd(data)                                          (0x00000001&(data))
#define  MVDBLK_H264NH_get_AutoLdStOff(data)                                     ((0x00000008&(data))>>3)
#define  MVDBLK_H264NH_get_InitNhMemCmd(data)                                    ((0x00000004&(data))>>2)
#define  MVDBLK_H264NH_get_LdNhMemCmd(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_H264NH_get_StNhMemCmd(data)                                      (0x00000001&(data))
#define  MVDBLK_H264NH_AutoLdStOff_src(data)                                     ((0x00000008&(data))>>3)
#define  MVDBLK_H264NH_InitNhMemCmd_src(data)                                    ((0x00000004&(data))>>2)
#define  MVDBLK_H264NH_LdNhMemCmd_src(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_H264NH_StNhMemCmd_src(data)                                      (0x00000001&(data))

#define  MVDBLK_H264NH1                                                         0x1800E6D4
#define  MVDBLK_H264NH1_reg_addr                                                 "0xB800E6D4"
#define  MVDBLK_H264NH1_reg                                                      0xB800E6D4
#define  MVDBLK_H264NH1_inst_adr                                                 "0x00B5"
#define  MVDBLK_H264NH1_inst                                                     0x00B5
#define  set_MVDBLK_H264NH1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264NH1_reg)=data)
#define  get_MVDBLK_H264NH1_reg                                                  (*((volatile unsigned int*)MVDBLK_H264NH1_reg))
#define  MVDBLK_H264NH1_StNhMemSAddr_shift                                       (0)
#define  MVDBLK_H264NH1_StNhMemSAddr_mask                                        (0xFFFFFFFF)
#define  MVDBLK_H264NH1_StNhMemSAddr(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_H264NH1_get_StNhMemSAddr(data)                                   (0xFFFFFFFF&(data))
#define  MVDBLK_H264NH1_StNhMemSAddr_src(data)                                   (0xFFFFFFFF&(data))

#define  MVDBLK_H264NH2                                                         0x1800E6D8
#define  MVDBLK_H264NH2_reg_addr                                                 "0xB800E6D8"
#define  MVDBLK_H264NH2_reg                                                      0xB800E6D8
#define  MVDBLK_H264NH2_inst_adr                                                 "0x00B6"
#define  MVDBLK_H264NH2_inst                                                     0x00B6
#define  set_MVDBLK_H264NH2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264NH2_reg)=data)
#define  get_MVDBLK_H264NH2_reg                                                  (*((volatile unsigned int*)MVDBLK_H264NH2_reg))
#define  MVDBLK_H264NH2_LdNhMemSAddr_shift                                       (0)
#define  MVDBLK_H264NH2_LdNhMemSAddr_mask                                        (0xFFFFFFFF)
#define  MVDBLK_H264NH2_LdNhMemSAddr(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_H264NH2_get_LdNhMemSAddr(data)                                   (0xFFFFFFFF&(data))
#define  MVDBLK_H264NH2_LdNhMemSAddr_src(data)                                   (0xFFFFFFFF&(data))

#define  MVDBLK_HEVCSAO                                                         0x1800E6E4
#define  MVDBLK_HEVCSAO_reg_addr                                                 "0xB800E6E4"
#define  MVDBLK_HEVCSAO_reg                                                      0xB800E6E4
#define  MVDBLK_HEVCSAO_inst_adr                                                 "0x00B9"
#define  MVDBLK_HEVCSAO_inst                                                     0x00B9
#define  set_MVDBLK_HEVCSAO_reg(data)                                            (*((volatile unsigned int*)MVDBLK_HEVCSAO_reg)=data)
#define  get_MVDBLK_HEVCSAO_reg                                                  (*((volatile unsigned int*)MVDBLK_HEVCSAO_reg))
#define  MVDBLK_HEVCSAO_StSAddr_shift                                            (0)
#define  MVDBLK_HEVCSAO_StSAddr_mask                                             (0xFFFFFFFF)
#define  MVDBLK_HEVCSAO_StSAddr(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_HEVCSAO_get_StSAddr(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_HEVCSAO_StSAddr_src(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_HEVCSAO1                                                        0x1800E6E8
#define  MVDBLK_HEVCSAO1_reg_addr                                                "0xB800E6E8"
#define  MVDBLK_HEVCSAO1_reg                                                     0xB800E6E8
#define  MVDBLK_HEVCSAO1_inst_adr                                                "0x00BA"
#define  MVDBLK_HEVCSAO1_inst                                                    0x00BA
#define  set_MVDBLK_HEVCSAO1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_HEVCSAO1_reg)=data)
#define  get_MVDBLK_HEVCSAO1_reg                                                 (*((volatile unsigned int*)MVDBLK_HEVCSAO1_reg))
#define  MVDBLK_HEVCSAO1_LdSAddr_shift                                           (0)
#define  MVDBLK_HEVCSAO1_LdSAddr_mask                                            (0xFFFFFFFF)
#define  MVDBLK_HEVCSAO1_LdSAddr(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_HEVCSAO1_get_LdSAddr(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_HEVCSAO1_LdSAddr_src(data)                                       (0xFFFFFFFF&(data))

#define  MVDBLK_H264PX                                                          0x1800E620
#define  MVDBLK_H264PX_reg_addr                                                  "0xB800E620"
#define  MVDBLK_H264PX_reg                                                       0xB800E620
#define  MVDBLK_H264PX_inst_adr                                                  "0x0088"
#define  MVDBLK_H264PX_inst                                                      0x0088
#define  set_MVDBLK_H264PX_reg(data)                                             (*((volatile unsigned int*)MVDBLK_H264PX_reg)=data)
#define  get_MVDBLK_H264PX_reg                                                   (*((volatile unsigned int*)MVDBLK_H264PX_reg))
#define  MVDBLK_H264PX_List1Size_shift                                           (5)
#define  MVDBLK_H264PX_List0Size_shift                                           (0)
#define  MVDBLK_H264PX_List1Size_mask                                            (0x000003E0)
#define  MVDBLK_H264PX_List0Size_mask                                            (0x0000001F)
#define  MVDBLK_H264PX_List1Size(data)                                           (0x000003E0&((data)<<5))
#define  MVDBLK_H264PX_List0Size(data)                                           (0x0000001F&(data))
#define  MVDBLK_H264PX_get_List1Size(data)                                       ((0x000003E0&(data))>>5)
#define  MVDBLK_H264PX_get_List0Size(data)                                       (0x0000001F&(data))
#define  MVDBLK_H264PX_List1Size_src(data)                                       ((0x000003E0&(data))>>5)
#define  MVDBLK_H264PX_List0Size_src(data)                                       (0x0000001F&(data))

#define  MVDBLK_H264PX1                                                         0x1800E624
#define  MVDBLK_H264PX1_reg_addr                                                 "0xB800E624"
#define  MVDBLK_H264PX1_reg                                                      0xB800E624
#define  MVDBLK_H264PX1_inst_adr                                                 "0x0089"
#define  MVDBLK_H264PX1_inst                                                     0x0089
#define  set_MVDBLK_H264PX1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PX1_reg)=data)
#define  get_MVDBLK_H264PX1_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PX1_reg))
#define  MVDBLK_H264PX1_FrmPocAddrL0_shift                                       (0)
#define  MVDBLK_H264PX1_FrmPocAddrL0_mask                                        (0x0000FFFF)
#define  MVDBLK_H264PX1_FrmPocAddrL0(data)                                       (0x0000FFFF&(data))
#define  MVDBLK_H264PX1_get_FrmPocAddrL0(data)                                   (0x0000FFFF&(data))
#define  MVDBLK_H264PX1_FrmPocAddrL0_src(data)                                   (0x0000FFFF&(data))

#define  MVDBLK_H264PX2                                                         0x1800E628
#define  MVDBLK_H264PX2_reg_addr                                                 "0xB800E628"
#define  MVDBLK_H264PX2_reg                                                      0xB800E628
#define  MVDBLK_H264PX2_inst_adr                                                 "0x008A"
#define  MVDBLK_H264PX2_inst                                                     0x008A
#define  set_MVDBLK_H264PX2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PX2_reg)=data)
#define  get_MVDBLK_H264PX2_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PX2_reg))
#define  MVDBLK_H264PX2_TopPocAddrL0_shift                                       (0)
#define  MVDBLK_H264PX2_TopPocAddrL0_mask                                        (0x0000FFFF)
#define  MVDBLK_H264PX2_TopPocAddrL0(data)                                       (0x0000FFFF&(data))
#define  MVDBLK_H264PX2_get_TopPocAddrL0(data)                                   (0x0000FFFF&(data))
#define  MVDBLK_H264PX2_TopPocAddrL0_src(data)                                   (0x0000FFFF&(data))

#define  MVDBLK_H264PX3                                                         0x1800E62C
#define  MVDBLK_H264PX3_reg_addr                                                 "0xB800E62C"
#define  MVDBLK_H264PX3_reg                                                      0xB800E62C
#define  MVDBLK_H264PX3_inst_adr                                                 "0x008B"
#define  MVDBLK_H264PX3_inst                                                     0x008B
#define  set_MVDBLK_H264PX3_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PX3_reg)=data)
#define  get_MVDBLK_H264PX3_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PX3_reg))
#define  MVDBLK_H264PX3_BotPocAddrL0_shift                                       (0)
#define  MVDBLK_H264PX3_BotPocAddrL0_mask                                        (0x0000FFFF)
#define  MVDBLK_H264PX3_BotPocAddrL0(data)                                       (0x0000FFFF&(data))
#define  MVDBLK_H264PX3_get_BotPocAddrL0(data)                                   (0x0000FFFF&(data))
#define  MVDBLK_H264PX3_BotPocAddrL0_src(data)                                   (0x0000FFFF&(data))

#define  MVDBLK_H264PX4                                                         0x1800E630
#define  MVDBLK_H264PX4_reg_addr                                                 "0xB800E630"
#define  MVDBLK_H264PX4_reg                                                      0xB800E630
#define  MVDBLK_H264PX4_inst_adr                                                 "0x008C"
#define  MVDBLK_H264PX4_inst                                                     0x008C
#define  set_MVDBLK_H264PX4_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PX4_reg)=data)
#define  get_MVDBLK_H264PX4_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PX4_reg))
#define  MVDBLK_H264PX4_FrmPocAddrL1_shift                                       (0)
#define  MVDBLK_H264PX4_FrmPocAddrL1_mask                                        (0x0000FFFF)
#define  MVDBLK_H264PX4_FrmPocAddrL1(data)                                       (0x0000FFFF&(data))
#define  MVDBLK_H264PX4_get_FrmPocAddrL1(data)                                   (0x0000FFFF&(data))
#define  MVDBLK_H264PX4_FrmPocAddrL1_src(data)                                   (0x0000FFFF&(data))

#define  MVDBLK_H264PX5                                                         0x1800E634
#define  MVDBLK_H264PX5_reg_addr                                                 "0xB800E634"
#define  MVDBLK_H264PX5_reg                                                      0xB800E634
#define  MVDBLK_H264PX5_inst_adr                                                 "0x008D"
#define  MVDBLK_H264PX5_inst                                                     0x008D
#define  set_MVDBLK_H264PX5_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PX5_reg)=data)
#define  get_MVDBLK_H264PX5_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PX5_reg))
#define  MVDBLK_H264PX5_TopPocAddrL1_shift                                       (0)
#define  MVDBLK_H264PX5_TopPocAddrL1_mask                                        (0x0000FFFF)
#define  MVDBLK_H264PX5_TopPocAddrL1(data)                                       (0x0000FFFF&(data))
#define  MVDBLK_H264PX5_get_TopPocAddrL1(data)                                   (0x0000FFFF&(data))
#define  MVDBLK_H264PX5_TopPocAddrL1_src(data)                                   (0x0000FFFF&(data))

#define  MVDBLK_H264PX6                                                         0x1800E638
#define  MVDBLK_H264PX6_reg_addr                                                 "0xB800E638"
#define  MVDBLK_H264PX6_reg                                                      0xB800E638
#define  MVDBLK_H264PX6_inst_adr                                                 "0x008E"
#define  MVDBLK_H264PX6_inst                                                     0x008E
#define  set_MVDBLK_H264PX6_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PX6_reg)=data)
#define  get_MVDBLK_H264PX6_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PX6_reg))
#define  MVDBLK_H264PX6_BotPocAddrL1_shift                                       (0)
#define  MVDBLK_H264PX6_BotPocAddrL1_mask                                        (0x0000FFFF)
#define  MVDBLK_H264PX6_BotPocAddrL1(data)                                       (0x0000FFFF&(data))
#define  MVDBLK_H264PX6_get_BotPocAddrL1(data)                                   (0x0000FFFF&(data))
#define  MVDBLK_H264PX6_BotPocAddrL1_src(data)                                   (0x0000FFFF&(data))

#define  MVDBLK_H264PX7                                                         0x1800E63C
#define  MVDBLK_H264PX7_reg_addr                                                 "0xB800E63C"
#define  MVDBLK_H264PX7_reg                                                      0xB800E63C
#define  MVDBLK_H264PX7_inst_adr                                                 "0x008F"
#define  MVDBLK_H264PX7_inst                                                     0x008F
#define  set_MVDBLK_H264PX7_reg(data)                                            (*((volatile unsigned int*)MVDBLK_H264PX7_reg)=data)
#define  get_MVDBLK_H264PX7_reg                                                  (*((volatile unsigned int*)MVDBLK_H264PX7_reg))
#define  MVDBLK_H264PX7_PicInfoAddr_shift                                        (0)
#define  MVDBLK_H264PX7_PicInfoAddr_mask                                         (0x0000FFFF)
#define  MVDBLK_H264PX7_PicInfoAddr(data)                                        (0x0000FFFF&(data))
#define  MVDBLK_H264PX7_get_PicInfoAddr(data)                                    (0x0000FFFF&(data))
#define  MVDBLK_H264PX7_PicInfoAddr_src(data)                                    (0x0000FFFF&(data))

#define  MVDBLK_VC1PIC                                                          0x1800E640
#define  MVDBLK_VC1PIC_reg_addr                                                  "0xB800E640"
#define  MVDBLK_VC1PIC_reg                                                       0xB800E640
#define  MVDBLK_VC1PIC_inst_adr                                                  "0x0090"
#define  MVDBLK_VC1PIC_inst                                                      0x0090
#define  set_MVDBLK_VC1PIC_reg(data)                                             (*((volatile unsigned int*)MVDBLK_VC1PIC_reg)=data)
#define  get_MVDBLK_VC1PIC_reg                                                   (*((volatile unsigned int*)MVDBLK_VC1PIC_reg))
#define  MVDBLK_VC1PIC_RefField_shift                                            (12)
#define  MVDBLK_VC1PIC_FastUVmc_shift                                            (11)
#define  MVDBLK_VC1PIC_ScaleFactor_shift                                         (0)
#define  MVDBLK_VC1PIC_RefField_mask                                             (0x00001000)
#define  MVDBLK_VC1PIC_FastUVmc_mask                                             (0x00000800)
#define  MVDBLK_VC1PIC_ScaleFactor_mask                                          (0x000007FF)
#define  MVDBLK_VC1PIC_RefField(data)                                            (0x00001000&((data)<<12))
#define  MVDBLK_VC1PIC_FastUVmc(data)                                            (0x00000800&((data)<<11))
#define  MVDBLK_VC1PIC_ScaleFactor(data)                                         (0x000007FF&(data))
#define  MVDBLK_VC1PIC_get_RefField(data)                                        ((0x00001000&(data))>>12)
#define  MVDBLK_VC1PIC_get_FastUVmc(data)                                        ((0x00000800&(data))>>11)
#define  MVDBLK_VC1PIC_get_ScaleFactor(data)                                     (0x000007FF&(data))
#define  MVDBLK_VC1PIC_RefField_src(data)                                        ((0x00001000&(data))>>12)
#define  MVDBLK_VC1PIC_FastUVmc_src(data)                                        ((0x00000800&(data))>>11)
#define  MVDBLK_VC1PIC_ScaleFactor_src(data)                                     (0x000007FF&(data))

#define  MVDBLK_VC1PIC1                                                         0x1800E644
#define  MVDBLK_VC1PIC1_reg_addr                                                 "0xB800E644"
#define  MVDBLK_VC1PIC1_reg                                                      0xB800E644
#define  MVDBLK_VC1PIC1_inst_adr                                                 "0x0091"
#define  MVDBLK_VC1PIC1_inst                                                     0x0091
#define  set_MVDBLK_VC1PIC1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_VC1PIC1_reg)=data)
#define  get_MVDBLK_VC1PIC1_reg                                                  (*((volatile unsigned int*)MVDBLK_VC1PIC1_reg))
#define  MVDBLK_VC1PIC1_Scale_fw_shift                                           (20)
#define  MVDBLK_VC1PIC1_Scale1_fw_shift                                          (8)
#define  MVDBLK_VC1PIC1_Scale2_fw_shift                                          (0)
#define  MVDBLK_VC1PIC1_Scale_fw_mask                                            (0x0FF00000)
#define  MVDBLK_VC1PIC1_Scale1_fw_mask                                           (0x000FFF00)
#define  MVDBLK_VC1PIC1_Scale2_fw_mask                                           (0x000000FF)
#define  MVDBLK_VC1PIC1_Scale_fw(data)                                           (0x0FF00000&((data)<<20))
#define  MVDBLK_VC1PIC1_Scale1_fw(data)                                          (0x000FFF00&((data)<<8))
#define  MVDBLK_VC1PIC1_Scale2_fw(data)                                          (0x000000FF&(data))
#define  MVDBLK_VC1PIC1_get_Scale_fw(data)                                       ((0x0FF00000&(data))>>20)
#define  MVDBLK_VC1PIC1_get_Scale1_fw(data)                                      ((0x000FFF00&(data))>>8)
#define  MVDBLK_VC1PIC1_get_Scale2_fw(data)                                      (0x000000FF&(data))
#define  MVDBLK_VC1PIC1_Scale_fw_src(data)                                       ((0x0FF00000&(data))>>20)
#define  MVDBLK_VC1PIC1_Scale1_fw_src(data)                                      ((0x000FFF00&(data))>>8)
#define  MVDBLK_VC1PIC1_Scale2_fw_src(data)                                      (0x000000FF&(data))

#define  MVDBLK_VC1PIC2                                                         0x1800E648
#define  MVDBLK_VC1PIC2_reg_addr                                                 "0xB800E648"
#define  MVDBLK_VC1PIC2_reg                                                      0xB800E648
#define  MVDBLK_VC1PIC2_inst_adr                                                 "0x0092"
#define  MVDBLK_VC1PIC2_inst                                                     0x0092
#define  set_MVDBLK_VC1PIC2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_VC1PIC2_reg)=data)
#define  get_MVDBLK_VC1PIC2_reg                                                  (*((volatile unsigned int*)MVDBLK_VC1PIC2_reg))
#define  MVDBLK_VC1PIC2_ScaleUpOpp_fw_shift                                      (20)
#define  MVDBLK_VC1PIC2_ScaleZone1X_fw_shift                                     (14)
#define  MVDBLK_VC1PIC2_ScaleZone1Y_fw_shift                                     (10)
#define  MVDBLK_VC1PIC2_Zone1OffsetX_fw_shift                                    (4)
#define  MVDBLK_VC1PIC2_Zone1OffsetY_fw_shift                                    (0)
#define  MVDBLK_VC1PIC2_ScaleUpOpp_fw_mask                                       (0x00100000)
#define  MVDBLK_VC1PIC2_ScaleZone1X_fw_mask                                      (0x000FC000)
#define  MVDBLK_VC1PIC2_ScaleZone1Y_fw_mask                                      (0x00003C00)
#define  MVDBLK_VC1PIC2_Zone1OffsetX_fw_mask                                     (0x000003F0)
#define  MVDBLK_VC1PIC2_Zone1OffsetY_fw_mask                                     (0x0000000F)
#define  MVDBLK_VC1PIC2_ScaleUpOpp_fw(data)                                      (0x00100000&((data)<<20))
#define  MVDBLK_VC1PIC2_ScaleZone1X_fw(data)                                     (0x000FC000&((data)<<14))
#define  MVDBLK_VC1PIC2_ScaleZone1Y_fw(data)                                     (0x00003C00&((data)<<10))
#define  MVDBLK_VC1PIC2_Zone1OffsetX_fw(data)                                    (0x000003F0&((data)<<4))
#define  MVDBLK_VC1PIC2_Zone1OffsetY_fw(data)                                    (0x0000000F&(data))
#define  MVDBLK_VC1PIC2_get_ScaleUpOpp_fw(data)                                  ((0x00100000&(data))>>20)
#define  MVDBLK_VC1PIC2_get_ScaleZone1X_fw(data)                                 ((0x000FC000&(data))>>14)
#define  MVDBLK_VC1PIC2_get_ScaleZone1Y_fw(data)                                 ((0x00003C00&(data))>>10)
#define  MVDBLK_VC1PIC2_get_Zone1OffsetX_fw(data)                                ((0x000003F0&(data))>>4)
#define  MVDBLK_VC1PIC2_get_Zone1OffsetY_fw(data)                                (0x0000000F&(data))
#define  MVDBLK_VC1PIC2_ScaleUpOpp_fw_src(data)                                  ((0x00100000&(data))>>20)
#define  MVDBLK_VC1PIC2_ScaleZone1X_fw_src(data)                                 ((0x000FC000&(data))>>14)
#define  MVDBLK_VC1PIC2_ScaleZone1Y_fw_src(data)                                 ((0x00003C00&(data))>>10)
#define  MVDBLK_VC1PIC2_Zone1OffsetX_fw_src(data)                                ((0x000003F0&(data))>>4)
#define  MVDBLK_VC1PIC2_Zone1OffsetY_fw_src(data)                                (0x0000000F&(data))

#define  MVDBLK_VC1PIC3                                                         0x1800E64C
#define  MVDBLK_VC1PIC3_reg_addr                                                 "0xB800E64C"
#define  MVDBLK_VC1PIC3_reg                                                      0xB800E64C
#define  MVDBLK_VC1PIC3_inst_adr                                                 "0x0093"
#define  MVDBLK_VC1PIC3_inst                                                     0x0093
#define  set_MVDBLK_VC1PIC3_reg(data)                                            (*((volatile unsigned int*)MVDBLK_VC1PIC3_reg)=data)
#define  get_MVDBLK_VC1PIC3_reg                                                  (*((volatile unsigned int*)MVDBLK_VC1PIC3_reg))
#define  MVDBLK_VC1PIC3_Scale_bw_shift                                           (20)
#define  MVDBLK_VC1PIC3_Scale1_bw_shift                                          (8)
#define  MVDBLK_VC1PIC3_Scale2_bw_shift                                          (0)
#define  MVDBLK_VC1PIC3_Scale_bw_mask                                            (0x0FF00000)
#define  MVDBLK_VC1PIC3_Scale1_bw_mask                                           (0x000FFF00)
#define  MVDBLK_VC1PIC3_Scale2_bw_mask                                           (0x000000FF)
#define  MVDBLK_VC1PIC3_Scale_bw(data)                                           (0x0FF00000&((data)<<20))
#define  MVDBLK_VC1PIC3_Scale1_bw(data)                                          (0x000FFF00&((data)<<8))
#define  MVDBLK_VC1PIC3_Scale2_bw(data)                                          (0x000000FF&(data))
#define  MVDBLK_VC1PIC3_get_Scale_bw(data)                                       ((0x0FF00000&(data))>>20)
#define  MVDBLK_VC1PIC3_get_Scale1_bw(data)                                      ((0x000FFF00&(data))>>8)
#define  MVDBLK_VC1PIC3_get_Scale2_bw(data)                                      (0x000000FF&(data))
#define  MVDBLK_VC1PIC3_Scale_bw_src(data)                                       ((0x0FF00000&(data))>>20)
#define  MVDBLK_VC1PIC3_Scale1_bw_src(data)                                      ((0x000FFF00&(data))>>8)
#define  MVDBLK_VC1PIC3_Scale2_bw_src(data)                                      (0x000000FF&(data))

#define  MVDBLK_VC1PIC4                                                         0x1800E650
#define  MVDBLK_VC1PIC4_reg_addr                                                 "0xB800E650"
#define  MVDBLK_VC1PIC4_reg                                                      0xB800E650
#define  MVDBLK_VC1PIC4_inst_adr                                                 "0x0094"
#define  MVDBLK_VC1PIC4_inst                                                     0x0094
#define  set_MVDBLK_VC1PIC4_reg(data)                                            (*((volatile unsigned int*)MVDBLK_VC1PIC4_reg)=data)
#define  get_MVDBLK_VC1PIC4_reg                                                  (*((volatile unsigned int*)MVDBLK_VC1PIC4_reg))
#define  MVDBLK_VC1PIC4_ScaleUpOpp_bw_shift                                      (20)
#define  MVDBLK_VC1PIC4_ScaleZone1X_bw_shift                                     (14)
#define  MVDBLK_VC1PIC4_ScaleZone1Y_bw_shift                                     (10)
#define  MVDBLK_VC1PIC4_Zone1OffsetX_bw_shift                                    (4)
#define  MVDBLK_VC1PIC4_Zone1OffsetY_bw_shift                                    (0)
#define  MVDBLK_VC1PIC4_ScaleUpOpp_bw_mask                                       (0x00100000)
#define  MVDBLK_VC1PIC4_ScaleZone1X_bw_mask                                      (0x000FC000)
#define  MVDBLK_VC1PIC4_ScaleZone1Y_bw_mask                                      (0x00003C00)
#define  MVDBLK_VC1PIC4_Zone1OffsetX_bw_mask                                     (0x000003F0)
#define  MVDBLK_VC1PIC4_Zone1OffsetY_bw_mask                                     (0x0000000F)
#define  MVDBLK_VC1PIC4_ScaleUpOpp_bw(data)                                      (0x00100000&((data)<<20))
#define  MVDBLK_VC1PIC4_ScaleZone1X_bw(data)                                     (0x000FC000&((data)<<14))
#define  MVDBLK_VC1PIC4_ScaleZone1Y_bw(data)                                     (0x00003C00&((data)<<10))
#define  MVDBLK_VC1PIC4_Zone1OffsetX_bw(data)                                    (0x000003F0&((data)<<4))
#define  MVDBLK_VC1PIC4_Zone1OffsetY_bw(data)                                    (0x0000000F&(data))
#define  MVDBLK_VC1PIC4_get_ScaleUpOpp_bw(data)                                  ((0x00100000&(data))>>20)
#define  MVDBLK_VC1PIC4_get_ScaleZone1X_bw(data)                                 ((0x000FC000&(data))>>14)
#define  MVDBLK_VC1PIC4_get_ScaleZone1Y_bw(data)                                 ((0x00003C00&(data))>>10)
#define  MVDBLK_VC1PIC4_get_Zone1OffsetX_bw(data)                                ((0x000003F0&(data))>>4)
#define  MVDBLK_VC1PIC4_get_Zone1OffsetY_bw(data)                                (0x0000000F&(data))
#define  MVDBLK_VC1PIC4_ScaleUpOpp_bw_src(data)                                  ((0x00100000&(data))>>20)
#define  MVDBLK_VC1PIC4_ScaleZone1X_bw_src(data)                                 ((0x000FC000&(data))>>14)
#define  MVDBLK_VC1PIC4_ScaleZone1Y_bw_src(data)                                 ((0x00003C00&(data))>>10)
#define  MVDBLK_VC1PIC4_Zone1OffsetX_bw_src(data)                                ((0x000003F0&(data))>>4)
#define  MVDBLK_VC1PIC4_Zone1OffsetY_bw_src(data)                                (0x0000000F&(data))

#define  MVDBLK_VC1PIC5                                                         0x1800E654
#define  MVDBLK_VC1PIC5_reg_addr                                                 "0xB800E654"
#define  MVDBLK_VC1PIC5_reg                                                      0xB800E654
#define  MVDBLK_VC1PIC5_inst_adr                                                 "0x0095"
#define  MVDBLK_VC1PIC5_inst                                                     0x0095
#define  set_MVDBLK_VC1PIC5_reg(data)                                            (*((volatile unsigned int*)MVDBLK_VC1PIC5_reg)=data)
#define  get_MVDBLK_VC1PIC5_reg                                                  (*((volatile unsigned int*)MVDBLK_VC1PIC5_reg))
#define  MVDBLK_VC1PIC5_RangeY_shift                                             (13)
#define  MVDBLK_VC1PIC5_RangeX_shift                                             (0)
#define  MVDBLK_VC1PIC5_RangeY_mask                                              (0x01FFE000)
#define  MVDBLK_VC1PIC5_RangeX_mask                                              (0x00001FFF)
#define  MVDBLK_VC1PIC5_RangeY(data)                                             (0x01FFE000&((data)<<13))
#define  MVDBLK_VC1PIC5_RangeX(data)                                             (0x00001FFF&(data))
#define  MVDBLK_VC1PIC5_get_RangeY(data)                                         ((0x01FFE000&(data))>>13)
#define  MVDBLK_VC1PIC5_get_RangeX(data)                                         (0x00001FFF&(data))
#define  MVDBLK_VC1PIC5_RangeY_src(data)                                         ((0x01FFE000&(data))>>13)
#define  MVDBLK_VC1PIC5_RangeX_src(data)                                         (0x00001FFF&(data))

#define  MVDBLK_AVSPIC                                                          0x1800E7D0
#define  MVDBLK_AVSPIC_reg_addr                                                  "0xB800E7D0"
#define  MVDBLK_AVSPIC_reg                                                       0xB800E7D0
#define  MVDBLK_AVSPIC_inst_adr                                                  "0x00F4"
#define  MVDBLK_AVSPIC_inst                                                      0x00F4
#define  set_MVDBLK_AVSPIC_reg(data)                                             (*((volatile unsigned int*)MVDBLK_AVSPIC_reg)=data)
#define  get_MVDBLK_AVSPIC_reg                                                   (*((volatile unsigned int*)MVDBLK_AVSPIC_reg))
#define  MVDBLK_AVSPIC_AecEnable_shift                                           (4)
#define  MVDBLK_AVSPIC_PFieldSkip_shift                                          (3)
#define  MVDBLK_AVSPIC_BFieldEnhanced_shift                                      (2)
#define  MVDBLK_AVSPIC_PicRefFlag_shift                                          (1)
#define  MVDBLK_AVSPIC_PicStructure_shift                                        (0)
#define  MVDBLK_AVSPIC_AecEnable_mask                                            (0x00000010)
#define  MVDBLK_AVSPIC_PFieldSkip_mask                                           (0x00000008)
#define  MVDBLK_AVSPIC_BFieldEnhanced_mask                                       (0x00000004)
#define  MVDBLK_AVSPIC_PicRefFlag_mask                                           (0x00000002)
#define  MVDBLK_AVSPIC_PicStructure_mask                                         (0x00000001)
#define  MVDBLK_AVSPIC_AecEnable(data)                                           (0x00000010&((data)<<4))
#define  MVDBLK_AVSPIC_PFieldSkip(data)                                          (0x00000008&((data)<<3))
#define  MVDBLK_AVSPIC_BFieldEnhanced(data)                                      (0x00000004&((data)<<2))
#define  MVDBLK_AVSPIC_PicRefFlag(data)                                          (0x00000002&((data)<<1))
#define  MVDBLK_AVSPIC_PicStructure(data)                                        (0x00000001&(data))
#define  MVDBLK_AVSPIC_get_AecEnable(data)                                       ((0x00000010&(data))>>4)
#define  MVDBLK_AVSPIC_get_PFieldSkip(data)                                      ((0x00000008&(data))>>3)
#define  MVDBLK_AVSPIC_get_BFieldEnhanced(data)                                  ((0x00000004&(data))>>2)
#define  MVDBLK_AVSPIC_get_PicRefFlag(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_AVSPIC_get_PicStructure(data)                                    (0x00000001&(data))
#define  MVDBLK_AVSPIC_AecEnable_src(data)                                       ((0x00000010&(data))>>4)
#define  MVDBLK_AVSPIC_PFieldSkip_src(data)                                      ((0x00000008&(data))>>3)
#define  MVDBLK_AVSPIC_BFieldEnhanced_src(data)                                  ((0x00000004&(data))>>2)
#define  MVDBLK_AVSPIC_PicRefFlag_src(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_AVSPIC_PicStructure_src(data)                                    (0x00000001&(data))

#define  MVDBLK_AVSPIC1                                                         0x1800E7D4
#define  MVDBLK_AVSPIC1_reg_addr                                                 "0xB800E7D4"
#define  MVDBLK_AVSPIC1_reg                                                      0xB800E7D4
#define  MVDBLK_AVSPIC1_inst_adr                                                 "0x00F5"
#define  MVDBLK_AVSPIC1_inst                                                     0x00F5
#define  set_MVDBLK_AVSPIC1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVSPIC1_reg)=data)
#define  get_MVDBLK_AVSPIC1_reg                                                  (*((volatile unsigned int*)MVDBLK_AVSPIC1_reg))
#define  MVDBLK_AVSPIC1_BlockDist0_shift                                         (16)
#define  MVDBLK_AVSPIC1_BlockDist1_shift                                         (0)
#define  MVDBLK_AVSPIC1_BlockDist0_mask                                          (0x01FF0000)
#define  MVDBLK_AVSPIC1_BlockDist1_mask                                          (0x000001FF)
#define  MVDBLK_AVSPIC1_BlockDist0(data)                                         (0x01FF0000&((data)<<16))
#define  MVDBLK_AVSPIC1_BlockDist1(data)                                         (0x000001FF&(data))
#define  MVDBLK_AVSPIC1_get_BlockDist0(data)                                     ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC1_get_BlockDist1(data)                                     (0x000001FF&(data))
#define  MVDBLK_AVSPIC1_BlockDist0_src(data)                                     ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC1_BlockDist1_src(data)                                     (0x000001FF&(data))

#define  MVDBLK_AVSPIC2                                                         0x1800E7D8
#define  MVDBLK_AVSPIC2_reg_addr                                                 "0xB800E7D8"
#define  MVDBLK_AVSPIC2_reg                                                      0xB800E7D8
#define  MVDBLK_AVSPIC2_inst_adr                                                 "0x00F6"
#define  MVDBLK_AVSPIC2_inst                                                     0x00F6
#define  set_MVDBLK_AVSPIC2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVSPIC2_reg)=data)
#define  get_MVDBLK_AVSPIC2_reg                                                  (*((volatile unsigned int*)MVDBLK_AVSPIC2_reg))
#define  MVDBLK_AVSPIC2_BlockDist2_shift                                         (16)
#define  MVDBLK_AVSPIC2_BlockDist3_shift                                         (0)
#define  MVDBLK_AVSPIC2_BlockDist2_mask                                          (0x01FF0000)
#define  MVDBLK_AVSPIC2_BlockDist3_mask                                          (0x000001FF)
#define  MVDBLK_AVSPIC2_BlockDist2(data)                                         (0x01FF0000&((data)<<16))
#define  MVDBLK_AVSPIC2_BlockDist3(data)                                         (0x000001FF&(data))
#define  MVDBLK_AVSPIC2_get_BlockDist2(data)                                     ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC2_get_BlockDist3(data)                                     (0x000001FF&(data))
#define  MVDBLK_AVSPIC2_BlockDist2_src(data)                                     ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC2_BlockDist3_src(data)                                     (0x000001FF&(data))

#define  MVDBLK_AVSPIC3                                                         0x1800E7DC
#define  MVDBLK_AVSPIC3_reg_addr                                                 "0xB800E7DC"
#define  MVDBLK_AVSPIC3_reg                                                      0xB800E7DC
#define  MVDBLK_AVSPIC3_inst_adr                                                 "0x00F7"
#define  MVDBLK_AVSPIC3_inst                                                     0x00F7
#define  set_MVDBLK_AVSPIC3_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVSPIC3_reg)=data)
#define  get_MVDBLK_AVSPIC3_reg                                                  (*((volatile unsigned int*)MVDBLK_AVSPIC3_reg))
#define  MVDBLK_AVSPIC3_B16384DiviTRp0_shift                                     (16)
#define  MVDBLK_AVSPIC3_B16384DiviTRp1_shift                                     (0)
#define  MVDBLK_AVSPIC3_B16384DiviTRp0_mask                                      (0xFFFF0000)
#define  MVDBLK_AVSPIC3_B16384DiviTRp1_mask                                      (0x0000FFFF)
#define  MVDBLK_AVSPIC3_B16384DiviTRp0(data)                                     (0xFFFF0000&((data)<<16))
#define  MVDBLK_AVSPIC3_B16384DiviTRp1(data)                                     (0x0000FFFF&(data))
#define  MVDBLK_AVSPIC3_get_B16384DiviTRp0(data)                                 ((0xFFFF0000&(data))>>16)
#define  MVDBLK_AVSPIC3_get_B16384DiviTRp1(data)                                 (0x0000FFFF&(data))
#define  MVDBLK_AVSPIC3_B16384DiviTRp0_src(data)                                 ((0xFFFF0000&(data))>>16)
#define  MVDBLK_AVSPIC3_B16384DiviTRp1_src(data)                                 (0x0000FFFF&(data))

#define  MVDBLK_AVSPIC4                                                         0x1800E7E0
#define  MVDBLK_AVSPIC4_reg_addr                                                 "0xB800E7E0"
#define  MVDBLK_AVSPIC4_reg                                                      0xB800E7E0
#define  MVDBLK_AVSPIC4_inst_adr                                                 "0x00F8"
#define  MVDBLK_AVSPIC4_inst                                                     0x00F8
#define  set_MVDBLK_AVSPIC4_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVSPIC4_reg)=data)
#define  get_MVDBLK_AVSPIC4_reg                                                  (*((volatile unsigned int*)MVDBLK_AVSPIC4_reg))
#define  MVDBLK_AVSPIC4_B16384DiviTRp2_shift                                     (16)
#define  MVDBLK_AVSPIC4_B16384DiviTRp3_shift                                     (0)
#define  MVDBLK_AVSPIC4_B16384DiviTRp2_mask                                      (0xFFFF0000)
#define  MVDBLK_AVSPIC4_B16384DiviTRp3_mask                                      (0x0000FFFF)
#define  MVDBLK_AVSPIC4_B16384DiviTRp2(data)                                     (0xFFFF0000&((data)<<16))
#define  MVDBLK_AVSPIC4_B16384DiviTRp3(data)                                     (0x0000FFFF&(data))
#define  MVDBLK_AVSPIC4_get_B16384DiviTRp2(data)                                 ((0xFFFF0000&(data))>>16)
#define  MVDBLK_AVSPIC4_get_B16384DiviTRp3(data)                                 (0x0000FFFF&(data))
#define  MVDBLK_AVSPIC4_B16384DiviTRp2_src(data)                                 ((0xFFFF0000&(data))>>16)
#define  MVDBLK_AVSPIC4_B16384DiviTRp3_src(data)                                 (0x0000FFFF&(data))

#define  MVDBLK_AVSPIC5                                                         0x1800E7E4
#define  MVDBLK_AVSPIC5_reg_addr                                                 "0xB800E7E4"
#define  MVDBLK_AVSPIC5_reg                                                      0xB800E7E4
#define  MVDBLK_AVSPIC5_inst_adr                                                 "0x00F9"
#define  MVDBLK_AVSPIC5_inst                                                     0x00F9
#define  set_MVDBLK_AVSPIC5_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVSPIC5_reg)=data)
#define  get_MVDBLK_AVSPIC5_reg                                                  (*((volatile unsigned int*)MVDBLK_AVSPIC5_reg))
#define  MVDBLK_AVSPIC5_iTRb0_shift                                              (16)
#define  MVDBLK_AVSPIC5_iTRb1_shift                                              (0)
#define  MVDBLK_AVSPIC5_iTRb0_mask                                               (0x01FF0000)
#define  MVDBLK_AVSPIC5_iTRb1_mask                                               (0x000001FF)
#define  MVDBLK_AVSPIC5_iTRb0(data)                                              (0x01FF0000&((data)<<16))
#define  MVDBLK_AVSPIC5_iTRb1(data)                                              (0x000001FF&(data))
#define  MVDBLK_AVSPIC5_get_iTRb0(data)                                          ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC5_get_iTRb1(data)                                          (0x000001FF&(data))
#define  MVDBLK_AVSPIC5_iTRb0_src(data)                                          ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC5_iTRb1_src(data)                                          (0x000001FF&(data))

#define  MVDBLK_AVSPIC6                                                         0x1800E7E8
#define  MVDBLK_AVSPIC6_reg_addr                                                 "0xB800E7E8"
#define  MVDBLK_AVSPIC6_reg                                                      0xB800E7E8
#define  MVDBLK_AVSPIC6_inst_adr                                                 "0x00FA"
#define  MVDBLK_AVSPIC6_inst                                                     0x00FA
#define  set_MVDBLK_AVSPIC6_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVSPIC6_reg)=data)
#define  get_MVDBLK_AVSPIC6_reg                                                  (*((volatile unsigned int*)MVDBLK_AVSPIC6_reg))
#define  MVDBLK_AVSPIC6_iTRb2_shift                                              (16)
#define  MVDBLK_AVSPIC6_iTRb3_shift                                              (0)
#define  MVDBLK_AVSPIC6_iTRb2_mask                                               (0x01FF0000)
#define  MVDBLK_AVSPIC6_iTRb3_mask                                               (0x000001FF)
#define  MVDBLK_AVSPIC6_iTRb2(data)                                              (0x01FF0000&((data)<<16))
#define  MVDBLK_AVSPIC6_iTRb3(data)                                              (0x000001FF&(data))
#define  MVDBLK_AVSPIC6_get_iTRb2(data)                                          ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC6_get_iTRb3(data)                                          (0x000001FF&(data))
#define  MVDBLK_AVSPIC6_iTRb2_src(data)                                          ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVSPIC6_iTRb3_src(data)                                          (0x000001FF&(data))

#define  MVDBLK_AVSPIC7                                                         0x1800E7EC
#define  MVDBLK_AVSPIC7_reg_addr                                                 "0xB800E7EC"
#define  MVDBLK_AVSPIC7_reg                                                      0xB800E7EC
#define  MVDBLK_AVSPIC7_inst_adr                                                 "0x00FB"
#define  MVDBLK_AVSPIC7_inst                                                     0x00FB
#define  set_MVDBLK_AVSPIC7_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVSPIC7_reg)=data)
#define  get_MVDBLK_AVSPIC7_reg                                                  (*((volatile unsigned int*)MVDBLK_AVSPIC7_reg))
#define  MVDBLK_AVSPIC7_iTRd_shift                                               (0)
#define  MVDBLK_AVSPIC7_iTRd_mask                                                (0x000001FF)
#define  MVDBLK_AVSPIC7_iTRd(data)                                               (0x000001FF&(data))
#define  MVDBLK_AVSPIC7_get_iTRd(data)                                           (0x000001FF&(data))
#define  MVDBLK_AVSPIC7_iTRd_src(data)                                           (0x000001FF&(data))

#define  MVDBLK_RM89PIC                                                         0x1800E7C0
#define  MVDBLK_RM89PIC_reg_addr                                                 "0xB800E7C0"
#define  MVDBLK_RM89PIC_reg                                                      0xB800E7C0
#define  MVDBLK_RM89PIC_inst_adr                                                 "0x00F0"
#define  MVDBLK_RM89PIC_inst                                                     0x00F0
#define  set_MVDBLK_RM89PIC_reg(data)                                            (*((volatile unsigned int*)MVDBLK_RM89PIC_reg)=data)
#define  get_MVDBLK_RM89PIC_reg                                                  (*((volatile unsigned int*)MVDBLK_RM89PIC_reg))
#define  MVDBLK_RM89PIC_iRatio0_shift                                            (0)
#define  MVDBLK_RM89PIC_iRatio0_mask                                             (0xFFFFFFFF)
#define  MVDBLK_RM89PIC_iRatio0(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_RM89PIC_get_iRatio0(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_RM89PIC_iRatio0_src(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_RM89PIC1                                                        0x1800E7C4
#define  MVDBLK_RM89PIC1_reg_addr                                                "0xB800E7C4"
#define  MVDBLK_RM89PIC1_reg                                                     0xB800E7C4
#define  MVDBLK_RM89PIC1_inst_adr                                                "0x00F1"
#define  MVDBLK_RM89PIC1_inst                                                    0x00F1
#define  set_MVDBLK_RM89PIC1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_RM89PIC1_reg)=data)
#define  get_MVDBLK_RM89PIC1_reg                                                 (*((volatile unsigned int*)MVDBLK_RM89PIC1_reg))
#define  MVDBLK_RM89PIC1_iRatio1_shift                                           (0)
#define  MVDBLK_RM89PIC1_iRatio1_mask                                            (0xFFFFFFFF)
#define  MVDBLK_RM89PIC1_iRatio1(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_RM89PIC1_get_iRatio1(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_RM89PIC1_iRatio1_src(data)                                       (0xFFFFFFFF&(data))

#define  MVDBLK_RM89DIRECT                                                      0x1800E7C8
#define  MVDBLK_RM89DIRECT_reg_addr                                              "0xB800E7C8"
#define  MVDBLK_RM89DIRECT_reg                                                   0xB800E7C8
#define  MVDBLK_RM89DIRECT_inst_adr                                              "0x00F2"
#define  MVDBLK_RM89DIRECT_inst                                                  0x00F2
#define  set_MVDBLK_RM89DIRECT_reg(data)                                         (*((volatile unsigned int*)MVDBLK_RM89DIRECT_reg)=data)
#define  get_MVDBLK_RM89DIRECT_reg                                               (*((volatile unsigned int*)MVDBLK_RM89DIRECT_reg))
#define  MVDBLK_RM89DIRECT_hix_shift                                             (16)
#define  MVDBLK_RM89DIRECT_lox_shift                                             (0)
#define  MVDBLK_RM89DIRECT_hix_mask                                              (0x3FFF0000)
#define  MVDBLK_RM89DIRECT_lox_mask                                              (0x00003FFF)
#define  MVDBLK_RM89DIRECT_hix(data)                                             (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT_lox(data)                                             (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT_get_hix(data)                                         ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT_get_lox(data)                                         (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT_hix_src(data)                                         ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT_lox_src(data)                                         (0x00003FFF&(data))

#define  MVDBLK_RM89DIRECT1                                                     0x1800E7CC
#define  MVDBLK_RM89DIRECT1_reg_addr                                             "0xB800E7CC"
#define  MVDBLK_RM89DIRECT1_reg                                                  0xB800E7CC
#define  MVDBLK_RM89DIRECT1_inst_adr                                             "0x00F3"
#define  MVDBLK_RM89DIRECT1_inst                                                 0x00F3
#define  set_MVDBLK_RM89DIRECT1_reg(data)                                        (*((volatile unsigned int*)MVDBLK_RM89DIRECT1_reg)=data)
#define  get_MVDBLK_RM89DIRECT1_reg                                              (*((volatile unsigned int*)MVDBLK_RM89DIRECT1_reg))
#define  MVDBLK_RM89DIRECT1_hiy_shift                                            (16)
#define  MVDBLK_RM89DIRECT1_loy_shift                                            (0)
#define  MVDBLK_RM89DIRECT1_hiy_mask                                             (0x3FFF0000)
#define  MVDBLK_RM89DIRECT1_loy_mask                                             (0x00003FFF)
#define  MVDBLK_RM89DIRECT1_hiy(data)                                            (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT1_loy(data)                                            (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT1_get_hiy(data)                                        ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT1_get_loy(data)                                        (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT1_hiy_src(data)                                        ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT1_loy_src(data)                                        (0x00003FFF&(data))

#define  MVDBLK_RM89DIRECT2                                                     0x1800E7F0
#define  MVDBLK_RM89DIRECT2_reg_addr                                             "0xB800E7F0"
#define  MVDBLK_RM89DIRECT2_reg                                                  0xB800E7F0
#define  MVDBLK_RM89DIRECT2_inst_adr                                             "0x00FC"
#define  MVDBLK_RM89DIRECT2_inst                                                 0x00FC
#define  set_MVDBLK_RM89DIRECT2_reg(data)                                        (*((volatile unsigned int*)MVDBLK_RM89DIRECT2_reg)=data)
#define  get_MVDBLK_RM89DIRECT2_reg                                              (*((volatile unsigned int*)MVDBLK_RM89DIRECT2_reg))
#define  MVDBLK_RM89DIRECT2_hicx_shift                                           (16)
#define  MVDBLK_RM89DIRECT2_locx_shift                                           (0)
#define  MVDBLK_RM89DIRECT2_hicx_mask                                            (0x3FFF0000)
#define  MVDBLK_RM89DIRECT2_locx_mask                                            (0x00003FFF)
#define  MVDBLK_RM89DIRECT2_hicx(data)                                           (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT2_locx(data)                                           (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT2_get_hicx(data)                                       ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT2_get_locx(data)                                       (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT2_hicx_src(data)                                       ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT2_locx_src(data)                                       (0x00003FFF&(data))

#define  MVDBLK_RM89DIRECT3                                                     0x1800E7F4
#define  MVDBLK_RM89DIRECT3_reg_addr                                             "0xB800E7F4"
#define  MVDBLK_RM89DIRECT3_reg                                                  0xB800E7F4
#define  MVDBLK_RM89DIRECT3_inst_adr                                             "0x00FD"
#define  MVDBLK_RM89DIRECT3_inst                                                 0x00FD
#define  set_MVDBLK_RM89DIRECT3_reg(data)                                        (*((volatile unsigned int*)MVDBLK_RM89DIRECT3_reg)=data)
#define  get_MVDBLK_RM89DIRECT3_reg                                              (*((volatile unsigned int*)MVDBLK_RM89DIRECT3_reg))
#define  MVDBLK_RM89DIRECT3_hicy_shift                                           (16)
#define  MVDBLK_RM89DIRECT3_locy_shift                                           (0)
#define  MVDBLK_RM89DIRECT3_hicy_mask                                            (0x3FFF0000)
#define  MVDBLK_RM89DIRECT3_locy_mask                                            (0x00003FFF)
#define  MVDBLK_RM89DIRECT3_hicy(data)                                           (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT3_locy(data)                                           (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT3_get_hicy(data)                                       ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT3_get_locy(data)                                       (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT3_hicy_src(data)                                       ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT3_locy_src(data)                                       (0x00003FFF&(data))

#define  MVDBLK_RM89PIC2                                                        0x1800E7F8
#define  MVDBLK_RM89PIC2_reg_addr                                                "0xB800E7F8"
#define  MVDBLK_RM89PIC2_reg                                                     0xB800E7F8
#define  MVDBLK_RM89PIC2_inst_adr                                                "0x00FE"
#define  MVDBLK_RM89PIC2_inst                                                    0x00FE
#define  set_MVDBLK_RM89PIC2_reg(data)                                           (*((volatile unsigned int*)MVDBLK_RM89PIC2_reg)=data)
#define  get_MVDBLK_RM89PIC2_reg                                                 (*((volatile unsigned int*)MVDBLK_RM89PIC2_reg))
#define  MVDBLK_RM89PIC2_ZeroMvd_shift                                           (0)
#define  MVDBLK_RM89PIC2_ZeroMvd_mask                                            (0x00000001)
#define  MVDBLK_RM89PIC2_ZeroMvd(data)                                           (0x00000001&(data))
#define  MVDBLK_RM89PIC2_get_ZeroMvd(data)                                       (0x00000001&(data))
#define  MVDBLK_RM89PIC2_ZeroMvd_src(data)                                       (0x00000001&(data))

#define  MVDBLK_RM89DIRECT4                                                     0x1800E7FC
#define  MVDBLK_RM89DIRECT4_reg_addr                                             "0xB800E7FC"
#define  MVDBLK_RM89DIRECT4_reg                                                  0xB800E7FC
#define  MVDBLK_RM89DIRECT4_inst_adr                                             "0x00FF"
#define  MVDBLK_RM89DIRECT4_inst                                                 0x00FF
#define  set_MVDBLK_RM89DIRECT4_reg(data)                                        (*((volatile unsigned int*)MVDBLK_RM89DIRECT4_reg)=data)
#define  get_MVDBLK_RM89DIRECT4_reg                                              (*((volatile unsigned int*)MVDBLK_RM89DIRECT4_reg))
#define  MVDBLK_RM89DIRECT4_hix_4v_shift                                         (16)
#define  MVDBLK_RM89DIRECT4_lox_4v_shift                                         (0)
#define  MVDBLK_RM89DIRECT4_hix_4v_mask                                          (0x3FFF0000)
#define  MVDBLK_RM89DIRECT4_lox_4v_mask                                          (0x00003FFF)
#define  MVDBLK_RM89DIRECT4_hix_4v(data)                                         (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT4_lox_4v(data)                                         (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT4_get_hix_4v(data)                                     ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT4_get_lox_4v(data)                                     (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT4_hix_4v_src(data)                                     ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT4_lox_4v_src(data)                                     (0x00003FFF&(data))

#define  MVDBLK_RM89DIRECT5                                                     0x1800E6CC
#define  MVDBLK_RM89DIRECT5_reg_addr                                             "0xB800E6CC"
#define  MVDBLK_RM89DIRECT5_reg                                                  0xB800E6CC
#define  MVDBLK_RM89DIRECT5_inst_adr                                             "0x00B3"
#define  MVDBLK_RM89DIRECT5_inst                                                 0x00B3
#define  set_MVDBLK_RM89DIRECT5_reg(data)                                        (*((volatile unsigned int*)MVDBLK_RM89DIRECT5_reg)=data)
#define  get_MVDBLK_RM89DIRECT5_reg                                              (*((volatile unsigned int*)MVDBLK_RM89DIRECT5_reg))
#define  MVDBLK_RM89DIRECT5_hiy_4v_shift                                         (16)
#define  MVDBLK_RM89DIRECT5_loy_4v_shift                                         (0)
#define  MVDBLK_RM89DIRECT5_hiy_4v_mask                                          (0x3FFF0000)
#define  MVDBLK_RM89DIRECT5_loy_4v_mask                                          (0x00003FFF)
#define  MVDBLK_RM89DIRECT5_hiy_4v(data)                                         (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT5_loy_4v(data)                                         (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT5_get_hiy_4v(data)                                     ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT5_get_loy_4v(data)                                     (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT5_hiy_4v_src(data)                                     ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT5_loy_4v_src(data)                                     (0x00003FFF&(data))

#define  MVDBLK_RM89DIRECT6                                                     0x1800E658
#define  MVDBLK_RM89DIRECT6_reg_addr                                             "0xB800E658"
#define  MVDBLK_RM89DIRECT6_reg                                                  0xB800E658
#define  MVDBLK_RM89DIRECT6_inst_adr                                             "0x0096"
#define  MVDBLK_RM89DIRECT6_inst                                                 0x0096
#define  set_MVDBLK_RM89DIRECT6_reg(data)                                        (*((volatile unsigned int*)MVDBLK_RM89DIRECT6_reg)=data)
#define  get_MVDBLK_RM89DIRECT6_reg                                              (*((volatile unsigned int*)MVDBLK_RM89DIRECT6_reg))
#define  MVDBLK_RM89DIRECT6_hicx_4v_shift                                        (16)
#define  MVDBLK_RM89DIRECT6_locx_4v_shift                                        (0)
#define  MVDBLK_RM89DIRECT6_hicx_4v_mask                                         (0x3FFF0000)
#define  MVDBLK_RM89DIRECT6_locx_4v_mask                                         (0x00003FFF)
#define  MVDBLK_RM89DIRECT6_hicx_4v(data)                                        (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT6_locx_4v(data)                                        (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT6_get_hicx_4v(data)                                    ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT6_get_locx_4v(data)                                    (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT6_hicx_4v_src(data)                                    ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT6_locx_4v_src(data)                                    (0x00003FFF&(data))

#define  MVDBLK_RM89DIRECT7                                                     0x1800E65C
#define  MVDBLK_RM89DIRECT7_reg_addr                                             "0xB800E65C"
#define  MVDBLK_RM89DIRECT7_reg                                                  0xB800E65C
#define  MVDBLK_RM89DIRECT7_inst_adr                                             "0x0097"
#define  MVDBLK_RM89DIRECT7_inst                                                 0x0097
#define  set_MVDBLK_RM89DIRECT7_reg(data)                                        (*((volatile unsigned int*)MVDBLK_RM89DIRECT7_reg)=data)
#define  get_MVDBLK_RM89DIRECT7_reg                                              (*((volatile unsigned int*)MVDBLK_RM89DIRECT7_reg))
#define  MVDBLK_RM89DIRECT7_hicy_4v_shift                                        (16)
#define  MVDBLK_RM89DIRECT7_locy_4v_shift                                        (0)
#define  MVDBLK_RM89DIRECT7_hicy_4v_mask                                         (0x3FFF0000)
#define  MVDBLK_RM89DIRECT7_locy_4v_mask                                         (0x00003FFF)
#define  MVDBLK_RM89DIRECT7_hicy_4v(data)                                        (0x3FFF0000&((data)<<16))
#define  MVDBLK_RM89DIRECT7_locy_4v(data)                                        (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT7_get_hicy_4v(data)                                    ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT7_get_locy_4v(data)                                    (0x00003FFF&(data))
#define  MVDBLK_RM89DIRECT7_hicy_4v_src(data)                                    ((0x3FFF0000&(data))>>16)
#define  MVDBLK_RM89DIRECT7_locy_4v_src(data)                                    (0x00003FFF&(data))

#define  MVDBLK_SEPOOL_0                                                        0x1800E700
#define  MVDBLK_SEPOOL_0_reg_addr                                                "0xB800E700"
#define  MVDBLK_SEPOOL_0_reg                                                     0xB800E700
#define  MVDBLK_SEPOOL_0_inst_adr                                                "0x00C0"
#define  MVDBLK_SEPOOL_0_inst                                                    0x00C0
#define  set_MVDBLK_SEPOOL_0_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_0_reg)=data)
#define  get_MVDBLK_SEPOOL_0_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_0_reg))
#define  MVDBLK_SEPOOL_entry_shift                                               (0)
#define  MVDBLK_SEPOOL_entry_mask                                                (0xFFFFFFFF)
#define  MVDBLK_SEPOOL_entry(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_SEPOOL_get_entry(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_SEPOOL_entry_src(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_SEPOOL_1                                                        0x1800E704
#define  MVDBLK_SEPOOL_1_reg_addr                                                "0xB800E704"
#define  MVDBLK_SEPOOL_1_reg                                                     0xB800E704
#define  MVDBLK_SEPOOL_1_inst_adr                                                "0x00C1"
#define  MVDBLK_SEPOOL_1_inst                                                    0x00C1
#define  set_MVDBLK_SEPOOL_1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_1_reg)=data)
#define  get_MVDBLK_SEPOOL_1_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_1_reg))

#define  MVDBLK_SEPOOL_2                                                        0x1800E708
#define  MVDBLK_SEPOOL_2_reg_addr                                                "0xB800E708"
#define  MVDBLK_SEPOOL_2_reg                                                     0xB800E708
#define  MVDBLK_SEPOOL_2_inst_adr                                                "0x00C2"
#define  MVDBLK_SEPOOL_2_inst                                                    0x00C2
#define  set_MVDBLK_SEPOOL_2_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_2_reg)=data)
#define  get_MVDBLK_SEPOOL_2_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_2_reg))

#define  MVDBLK_SEPOOL_3                                                        0x1800E70C
#define  MVDBLK_SEPOOL_3_reg_addr                                                "0xB800E70C"
#define  MVDBLK_SEPOOL_3_reg                                                     0xB800E70C
#define  MVDBLK_SEPOOL_3_inst_adr                                                "0x00C3"
#define  MVDBLK_SEPOOL_3_inst                                                    0x00C3
#define  set_MVDBLK_SEPOOL_3_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_3_reg)=data)
#define  get_MVDBLK_SEPOOL_3_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_3_reg))

#define  MVDBLK_SEPOOL_4                                                        0x1800E710
#define  MVDBLK_SEPOOL_4_reg_addr                                                "0xB800E710"
#define  MVDBLK_SEPOOL_4_reg                                                     0xB800E710
#define  MVDBLK_SEPOOL_4_inst_adr                                                "0x00C4"
#define  MVDBLK_SEPOOL_4_inst                                                    0x00C4
#define  set_MVDBLK_SEPOOL_4_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_4_reg)=data)
#define  get_MVDBLK_SEPOOL_4_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_4_reg))

#define  MVDBLK_SEPOOL_5                                                        0x1800E714
#define  MVDBLK_SEPOOL_5_reg_addr                                                "0xB800E714"
#define  MVDBLK_SEPOOL_5_reg                                                     0xB800E714
#define  MVDBLK_SEPOOL_5_inst_adr                                                "0x00C5"
#define  MVDBLK_SEPOOL_5_inst                                                    0x00C5
#define  set_MVDBLK_SEPOOL_5_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_5_reg)=data)
#define  get_MVDBLK_SEPOOL_5_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_5_reg))

#define  MVDBLK_SEPOOL_6                                                        0x1800E718
#define  MVDBLK_SEPOOL_6_reg_addr                                                "0xB800E718"
#define  MVDBLK_SEPOOL_6_reg                                                     0xB800E718
#define  MVDBLK_SEPOOL_6_inst_adr                                                "0x00C6"
#define  MVDBLK_SEPOOL_6_inst                                                    0x00C6
#define  set_MVDBLK_SEPOOL_6_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_6_reg)=data)
#define  get_MVDBLK_SEPOOL_6_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_6_reg))

#define  MVDBLK_SEPOOL_7                                                        0x1800E71C
#define  MVDBLK_SEPOOL_7_reg_addr                                                "0xB800E71C"
#define  MVDBLK_SEPOOL_7_reg                                                     0xB800E71C
#define  MVDBLK_SEPOOL_7_inst_adr                                                "0x00C7"
#define  MVDBLK_SEPOOL_7_inst                                                    0x00C7
#define  set_MVDBLK_SEPOOL_7_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_7_reg)=data)
#define  get_MVDBLK_SEPOOL_7_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_7_reg))

#define  MVDBLK_SEPOOL_8                                                        0x1800E720
#define  MVDBLK_SEPOOL_8_reg_addr                                                "0xB800E720"
#define  MVDBLK_SEPOOL_8_reg                                                     0xB800E720
#define  MVDBLK_SEPOOL_8_inst_adr                                                "0x00C8"
#define  MVDBLK_SEPOOL_8_inst                                                    0x00C8
#define  set_MVDBLK_SEPOOL_8_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_8_reg)=data)
#define  get_MVDBLK_SEPOOL_8_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_8_reg))

#define  MVDBLK_SEPOOL_9                                                        0x1800E724
#define  MVDBLK_SEPOOL_9_reg_addr                                                "0xB800E724"
#define  MVDBLK_SEPOOL_9_reg                                                     0xB800E724
#define  MVDBLK_SEPOOL_9_inst_adr                                                "0x00C9"
#define  MVDBLK_SEPOOL_9_inst                                                    0x00C9
#define  set_MVDBLK_SEPOOL_9_reg(data)                                           (*((volatile unsigned int*)MVDBLK_SEPOOL_9_reg)=data)
#define  get_MVDBLK_SEPOOL_9_reg                                                 (*((volatile unsigned int*)MVDBLK_SEPOOL_9_reg))

#define  MVDBLK_SEPOOL_10                                                       0x1800E728
#define  MVDBLK_SEPOOL_10_reg_addr                                               "0xB800E728"
#define  MVDBLK_SEPOOL_10_reg                                                    0xB800E728
#define  MVDBLK_SEPOOL_10_inst_adr                                               "0x00CA"
#define  MVDBLK_SEPOOL_10_inst                                                   0x00CA
#define  set_MVDBLK_SEPOOL_10_reg(data)                                          (*((volatile unsigned int*)MVDBLK_SEPOOL_10_reg)=data)
#define  get_MVDBLK_SEPOOL_10_reg                                                (*((volatile unsigned int*)MVDBLK_SEPOOL_10_reg))

#define  MVDBLK_SEPOOL_11                                                       0x1800E72C
#define  MVDBLK_SEPOOL_11_reg_addr                                               "0xB800E72C"
#define  MVDBLK_SEPOOL_11_reg                                                    0xB800E72C
#define  MVDBLK_SEPOOL_11_inst_adr                                               "0x00CB"
#define  MVDBLK_SEPOOL_11_inst                                                   0x00CB
#define  set_MVDBLK_SEPOOL_11_reg(data)                                          (*((volatile unsigned int*)MVDBLK_SEPOOL_11_reg)=data)
#define  get_MVDBLK_SEPOOL_11_reg                                                (*((volatile unsigned int*)MVDBLK_SEPOOL_11_reg))

#define  MVDBLK_SEPOOL_12                                                       0x1800E730
#define  MVDBLK_SEPOOL_12_reg_addr                                               "0xB800E730"
#define  MVDBLK_SEPOOL_12_reg                                                    0xB800E730
#define  MVDBLK_SEPOOL_12_inst_adr                                               "0x00CC"
#define  MVDBLK_SEPOOL_12_inst                                                   0x00CC
#define  set_MVDBLK_SEPOOL_12_reg(data)                                          (*((volatile unsigned int*)MVDBLK_SEPOOL_12_reg)=data)
#define  get_MVDBLK_SEPOOL_12_reg                                                (*((volatile unsigned int*)MVDBLK_SEPOOL_12_reg))

#define  MVDBLK_SEPOOL_13                                                       0x1800E734
#define  MVDBLK_SEPOOL_13_reg_addr                                               "0xB800E734"
#define  MVDBLK_SEPOOL_13_reg                                                    0xB800E734
#define  MVDBLK_SEPOOL_13_inst_adr                                               "0x00CD"
#define  MVDBLK_SEPOOL_13_inst                                                   0x00CD
#define  set_MVDBLK_SEPOOL_13_reg(data)                                          (*((volatile unsigned int*)MVDBLK_SEPOOL_13_reg)=data)
#define  get_MVDBLK_SEPOOL_13_reg                                                (*((volatile unsigned int*)MVDBLK_SEPOOL_13_reg))

#define  MVDBLK_SEPOOL_14                                                       0x1800E738
#define  MVDBLK_SEPOOL_14_reg_addr                                               "0xB800E738"
#define  MVDBLK_SEPOOL_14_reg                                                    0xB800E738
#define  MVDBLK_SEPOOL_14_inst_adr                                               "0x00CE"
#define  MVDBLK_SEPOOL_14_inst                                                   0x00CE
#define  set_MVDBLK_SEPOOL_14_reg(data)                                          (*((volatile unsigned int*)MVDBLK_SEPOOL_14_reg)=data)
#define  get_MVDBLK_SEPOOL_14_reg                                                (*((volatile unsigned int*)MVDBLK_SEPOOL_14_reg))

#define  MVDBLK_SEPOOL_15                                                       0x1800E73C
#define  MVDBLK_SEPOOL_15_reg_addr                                               "0xB800E73C"
#define  MVDBLK_SEPOOL_15_reg                                                    0xB800E73C
#define  MVDBLK_SEPOOL_15_inst_adr                                               "0x00CF"
#define  MVDBLK_SEPOOL_15_inst                                                   0x00CF
#define  set_MVDBLK_SEPOOL_15_reg(data)                                          (*((volatile unsigned int*)MVDBLK_SEPOOL_15_reg)=data)
#define  get_MVDBLK_SEPOOL_15_reg                                                (*((volatile unsigned int*)MVDBLK_SEPOOL_15_reg))

#define  MVDBLK_H264BASE                                                        0x1800E6C0
#define  MVDBLK_H264BASE_reg_addr                                                "0xB800E6C0"
#define  MVDBLK_H264BASE_reg                                                     0xB800E6C0
#define  MVDBLK_H264BASE_inst_adr                                                "0x00B0"
#define  MVDBLK_H264BASE_inst                                                    0x00B0
#define  set_MVDBLK_H264BASE_reg(data)                                           (*((volatile unsigned int*)MVDBLK_H264BASE_reg)=data)
#define  get_MVDBLK_H264BASE_reg                                                 (*((volatile unsigned int*)MVDBLK_H264BASE_reg))
#define  MVDBLK_H264BASE_SetNhAvail_shift                                        (0)
#define  MVDBLK_H264BASE_SetNhAvail_mask                                         (0x00000001)
#define  MVDBLK_H264BASE_SetNhAvail(data)                                        (0x00000001&(data))
#define  MVDBLK_H264BASE_get_SetNhAvail(data)                                    (0x00000001&(data))
#define  MVDBLK_H264BASE_SetNhAvail_src(data)                                    (0x00000001&(data))

#define  MVDBLK_H264BASE1                                                       0x1800E6C4
#define  MVDBLK_H264BASE1_reg_addr                                               "0xB800E6C4"
#define  MVDBLK_H264BASE1_reg                                                    0xB800E6C4
#define  MVDBLK_H264BASE1_inst_adr                                               "0x00B1"
#define  MVDBLK_H264BASE1_inst                                                   0x00B1
#define  set_MVDBLK_H264BASE1_reg(data)                                          (*((volatile unsigned int*)MVDBLK_H264BASE1_reg)=data)
#define  get_MVDBLK_H264BASE1_reg                                                (*((volatile unsigned int*)MVDBLK_H264BASE1_reg))
#define  MVDBLK_H264BASE1_LeftAvail_shift                                        (3)
#define  MVDBLK_H264BASE1_TopAvail_shift                                         (2)
#define  MVDBLK_H264BASE1_TopRightAvail_shift                                    (1)
#define  MVDBLK_H264BASE1_TopLeftAvail_shift                                     (0)
#define  MVDBLK_H264BASE1_LeftAvail_mask                                         (0x00000008)
#define  MVDBLK_H264BASE1_TopAvail_mask                                          (0x00000004)
#define  MVDBLK_H264BASE1_TopRightAvail_mask                                     (0x00000002)
#define  MVDBLK_H264BASE1_TopLeftAvail_mask                                      (0x00000001)
#define  MVDBLK_H264BASE1_LeftAvail(data)                                        (0x00000008&((data)<<3))
#define  MVDBLK_H264BASE1_TopAvail(data)                                         (0x00000004&((data)<<2))
#define  MVDBLK_H264BASE1_TopRightAvail(data)                                    (0x00000002&((data)<<1))
#define  MVDBLK_H264BASE1_TopLeftAvail(data)                                     (0x00000001&(data))
#define  MVDBLK_H264BASE1_get_LeftAvail(data)                                    ((0x00000008&(data))>>3)
#define  MVDBLK_H264BASE1_get_TopAvail(data)                                     ((0x00000004&(data))>>2)
#define  MVDBLK_H264BASE1_get_TopRightAvail(data)                                ((0x00000002&(data))>>1)
#define  MVDBLK_H264BASE1_get_TopLeftAvail(data)                                 (0x00000001&(data))
#define  MVDBLK_H264BASE1_LeftAvail_src(data)                                    ((0x00000008&(data))>>3)
#define  MVDBLK_H264BASE1_TopAvail_src(data)                                     ((0x00000004&(data))>>2)
#define  MVDBLK_H264BASE1_TopRightAvail_src(data)                                ((0x00000002&(data))>>1)
#define  MVDBLK_H264BASE1_TopLeftAvail_src(data)                                 (0x00000001&(data))

#define  MVDBLK_DBG                                                             0x1800E6C8
#define  MVDBLK_DBG_reg_addr                                                     "0xB800E6C8"
#define  MVDBLK_DBG_reg                                                          0xB800E6C8
#define  MVDBLK_DBG_inst_adr                                                     "0x00B2"
#define  MVDBLK_DBG_inst                                                         0x00B2
#define  set_MVDBLK_DBG_reg(data)                                                (*((volatile unsigned int*)MVDBLK_DBG_reg)=data)
#define  get_MVDBLK_DBG_reg                                                      (*((volatile unsigned int*)MVDBLK_DBG_reg))
#define  MVDBLK_DBG_GenPulse_shift                                               (31)
#define  MVDBLK_DBG_PicCount_shift                                               (16)
#define  MVDBLK_DBG_DbgCtrl_shift                                                (13)
#define  MVDBLK_DBG_MbAddr_shift                                                 (0)
#define  MVDBLK_DBG_GenPulse_mask                                                (0x80000000)
#define  MVDBLK_DBG_PicCount_mask                                                (0x7FFF0000)
#define  MVDBLK_DBG_DbgCtrl_mask                                                 (0x0000E000)
#define  MVDBLK_DBG_MbAddr_mask                                                  (0x00001FFF)
#define  MVDBLK_DBG_GenPulse(data)                                               (0x80000000&((data)<<31))
#define  MVDBLK_DBG_PicCount(data)                                               (0x7FFF0000&((data)<<16))
#define  MVDBLK_DBG_DbgCtrl(data)                                                (0x0000E000&((data)<<13))
#define  MVDBLK_DBG_MbAddr(data)                                                 (0x00001FFF&(data))
#define  MVDBLK_DBG_get_GenPulse(data)                                           ((0x80000000&(data))>>31)
#define  MVDBLK_DBG_get_PicCount(data)                                           ((0x7FFF0000&(data))>>16)
#define  MVDBLK_DBG_get_DbgCtrl(data)                                            ((0x0000E000&(data))>>13)
#define  MVDBLK_DBG_get_MbAddr(data)                                             (0x00001FFF&(data))
#define  MVDBLK_DBG_GenPulse_src(data)                                           ((0x80000000&(data))>>31)
#define  MVDBLK_DBG_PicCount_src(data)                                           ((0x7FFF0000&(data))>>16)
#define  MVDBLK_DBG_DbgCtrl_src(data)                                            ((0x0000E000&(data))>>13)
#define  MVDBLK_DBG_MbAddr_src(data)                                             (0x00001FFF&(data))

#define  MVDBLK_AV1PIC                                                          0x1800E6EC
#define  MVDBLK_AV1PIC_reg_addr                                                  "0xB800E6EC"
#define  MVDBLK_AV1PIC_reg                                                       0xB800E6EC
#define  MVDBLK_AV1PIC_inst_adr                                                  "0x00BB"
#define  MVDBLK_AV1PIC_inst                                                      0x00BB
#define  set_MVDBLK_AV1PIC_reg(data)                                             (*((volatile unsigned int*)MVDBLK_AV1PIC_reg)=data)
#define  get_MVDBLK_AV1PIC_reg                                                   (*((volatile unsigned int*)MVDBLK_AV1PIC_reg))
#define  MVDBLK_AV1PIC_ForceIntMv_shift                                          (16)
#define  MVDBLK_AV1PIC_HwCtrl_shift                                              (0)
#define  MVDBLK_AV1PIC_ForceIntMv_mask                                           (0x00010000)
#define  MVDBLK_AV1PIC_HwCtrl_mask                                               (0x0000FFFF)
#define  MVDBLK_AV1PIC_ForceIntMv(data)                                          (0x00010000&((data)<<16))
#define  MVDBLK_AV1PIC_HwCtrl(data)                                              (0x0000FFFF&(data))
#define  MVDBLK_AV1PIC_get_ForceIntMv(data)                                      ((0x00010000&(data))>>16)
#define  MVDBLK_AV1PIC_get_HwCtrl(data)                                          (0x0000FFFF&(data))
#define  MVDBLK_AV1PIC_ForceIntMv_src(data)                                      ((0x00010000&(data))>>16)
#define  MVDBLK_AV1PIC_HwCtrl_src(data)                                          (0x0000FFFF&(data))

#define  MVDBLK_INDRBUS                                                         0x1800E6E0
#define  MVDBLK_INDRBUS_reg_addr                                                 "0xB800E6E0"
#define  MVDBLK_INDRBUS_reg                                                      0xB800E6E0
#define  MVDBLK_INDRBUS_inst_adr                                                 "0x00B8"
#define  MVDBLK_INDRBUS_inst                                                     0x00B8
#define  set_MVDBLK_INDRBUS_reg(data)                                            (*((volatile unsigned int*)MVDBLK_INDRBUS_reg)=data)
#define  get_MVDBLK_INDRBUS_reg                                                  (*((volatile unsigned int*)MVDBLK_INDRBUS_reg))
#define  MVDBLK_INDRBUS_Addr_shift                                               (2)
#define  MVDBLK_INDRBUS_Read_shift                                               (1)
#define  MVDBLK_INDRBUS_Write_shift                                              (0)
#define  MVDBLK_INDRBUS_Addr_mask                                                (0x000003FC)
#define  MVDBLK_INDRBUS_Read_mask                                                (0x00000002)
#define  MVDBLK_INDRBUS_Write_mask                                               (0x00000001)
#define  MVDBLK_INDRBUS_Addr(data)                                               (0x000003FC&((data)<<2))
#define  MVDBLK_INDRBUS_Read(data)                                               (0x00000002&((data)<<1))
#define  MVDBLK_INDRBUS_Write(data)                                              (0x00000001&(data))
#define  MVDBLK_INDRBUS_get_Addr(data)                                           ((0x000003FC&(data))>>2)
#define  MVDBLK_INDRBUS_get_Read(data)                                           ((0x00000002&(data))>>1)
#define  MVDBLK_INDRBUS_get_Write(data)                                          (0x00000001&(data))
#define  MVDBLK_INDRBUS_Addr_src(data)                                           ((0x000003FC&(data))>>2)
#define  MVDBLK_INDRBUS_Read_src(data)                                           ((0x00000002&(data))>>1)
#define  MVDBLK_INDRBUS_Write_src(data)                                          (0x00000001&(data))

#define  MVDBLK_INDRBUS0                                                        0x1800E6B0
#define  MVDBLK_INDRBUS0_reg_addr                                                "0xB800E6B0"
#define  MVDBLK_INDRBUS0_reg                                                     0xB800E6B0
#define  MVDBLK_INDRBUS0_inst_adr                                                "0x00AC"
#define  MVDBLK_INDRBUS0_inst                                                    0x00AC
#define  set_MVDBLK_INDRBUS0_reg(data)                                           (*((volatile unsigned int*)MVDBLK_INDRBUS0_reg)=data)
#define  get_MVDBLK_INDRBUS0_reg                                                 (*((volatile unsigned int*)MVDBLK_INDRBUS0_reg))
#define  MVDBLK_INDRBUS0_Dat_shift                                               (0)
#define  MVDBLK_INDRBUS0_Dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_INDRBUS0_Dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS0_get_Dat(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS0_Dat_src(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_INDRBUS1                                                        0x1800E6B4
#define  MVDBLK_INDRBUS1_reg_addr                                                "0xB800E6B4"
#define  MVDBLK_INDRBUS1_reg                                                     0xB800E6B4
#define  MVDBLK_INDRBUS1_inst_adr                                                "0x00AD"
#define  MVDBLK_INDRBUS1_inst                                                    0x00AD
#define  set_MVDBLK_INDRBUS1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_INDRBUS1_reg)=data)
#define  get_MVDBLK_INDRBUS1_reg                                                 (*((volatile unsigned int*)MVDBLK_INDRBUS1_reg))
#define  MVDBLK_INDRBUS1_Dat_shift                                               (0)
#define  MVDBLK_INDRBUS1_Dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_INDRBUS1_Dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS1_get_Dat(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS1_Dat_src(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_INDRBUS2                                                        0x1800E6B8
#define  MVDBLK_INDRBUS2_reg_addr                                                "0xB800E6B8"
#define  MVDBLK_INDRBUS2_reg                                                     0xB800E6B8
#define  MVDBLK_INDRBUS2_inst_adr                                                "0x00AE"
#define  MVDBLK_INDRBUS2_inst                                                    0x00AE
#define  set_MVDBLK_INDRBUS2_reg(data)                                           (*((volatile unsigned int*)MVDBLK_INDRBUS2_reg)=data)
#define  get_MVDBLK_INDRBUS2_reg                                                 (*((volatile unsigned int*)MVDBLK_INDRBUS2_reg))
#define  MVDBLK_INDRBUS2_Dat_shift                                               (0)
#define  MVDBLK_INDRBUS2_Dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_INDRBUS2_Dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS2_get_Dat(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS2_Dat_src(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_INDRBUS3                                                        0x1800E6BC
#define  MVDBLK_INDRBUS3_reg_addr                                                "0xB800E6BC"
#define  MVDBLK_INDRBUS3_reg                                                     0xB800E6BC
#define  MVDBLK_INDRBUS3_inst_adr                                                "0x00AF"
#define  MVDBLK_INDRBUS3_inst                                                    0x00AF
#define  set_MVDBLK_INDRBUS3_reg(data)                                           (*((volatile unsigned int*)MVDBLK_INDRBUS3_reg)=data)
#define  get_MVDBLK_INDRBUS3_reg                                                 (*((volatile unsigned int*)MVDBLK_INDRBUS3_reg))
#define  MVDBLK_INDRBUS3_Dat_shift                                               (0)
#define  MVDBLK_INDRBUS3_Dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_INDRBUS3_Dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS3_get_Dat(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_INDRBUS3_Dat_src(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_AVS2PIC                                                         0x1800E694
#define  MVDBLK_AVS2PIC_reg_addr                                                 "0xB800E694"
#define  MVDBLK_AVS2PIC_reg                                                      0xB800E694
#define  MVDBLK_AVS2PIC_inst_adr                                                 "0x00A5"
#define  MVDBLK_AVS2PIC_inst                                                     0x00A5
#define  set_MVDBLK_AVS2PIC_reg(data)                                            (*((volatile unsigned int*)MVDBLK_AVS2PIC_reg)=data)
#define  get_MVDBLK_AVS2PIC_reg                                                  (*((volatile unsigned int*)MVDBLK_AVS2PIC_reg))
#define  MVDBLK_AVS2PIC_HwCtrl_shift                                             (5)
#define  MVDBLK_AVS2PIC_SceneRefEnableFlag_shift                                 (4)
#define  MVDBLK_AVS2PIC_PmvrEnableFlag_shift                                     (3)
#define  MVDBLK_AVS2PIC_RefPicNumMinus1_shift                                    (0)
#define  MVDBLK_AVS2PIC_HwCtrl_mask                                              (0x00001FE0)
#define  MVDBLK_AVS2PIC_SceneRefEnableFlag_mask                                  (0x00000010)
#define  MVDBLK_AVS2PIC_PmvrEnableFlag_mask                                      (0x00000008)
#define  MVDBLK_AVS2PIC_RefPicNumMinus1_mask                                     (0x00000007)
#define  MVDBLK_AVS2PIC_HwCtrl(data)                                             (0x00001FE0&((data)<<5))
#define  MVDBLK_AVS2PIC_SceneRefEnableFlag(data)                                 (0x00000010&((data)<<4))
#define  MVDBLK_AVS2PIC_PmvrEnableFlag(data)                                     (0x00000008&((data)<<3))
#define  MVDBLK_AVS2PIC_RefPicNumMinus1(data)                                    (0x00000007&(data))
#define  MVDBLK_AVS2PIC_get_HwCtrl(data)                                         ((0x00001FE0&(data))>>5)
#define  MVDBLK_AVS2PIC_get_SceneRefEnableFlag(data)                             ((0x00000010&(data))>>4)
#define  MVDBLK_AVS2PIC_get_PmvrEnableFlag(data)                                 ((0x00000008&(data))>>3)
#define  MVDBLK_AVS2PIC_get_RefPicNumMinus1(data)                                (0x00000007&(data))
#define  MVDBLK_AVS2PIC_HwCtrl_src(data)                                         ((0x00001FE0&(data))>>5)
#define  MVDBLK_AVS2PIC_SceneRefEnableFlag_src(data)                             ((0x00000010&(data))>>4)
#define  MVDBLK_AVS2PIC_PmvrEnableFlag_src(data)                                 ((0x00000008&(data))>>3)
#define  MVDBLK_AVS2PIC_RefPicNumMinus1_src(data)                                (0x00000007&(data))

#define  MVDBLK_AVS2LIST0                                                       0x1800E680
#define  MVDBLK_AVS2LIST0_reg_addr                                               "0xB800E680"
#define  MVDBLK_AVS2LIST0_reg                                                    0xB800E680
#define  MVDBLK_AVS2LIST0_inst_adr                                               "0x00A0"
#define  MVDBLK_AVS2LIST0_inst                                                   0x00A0
#define  set_MVDBLK_AVS2LIST0_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST0_reg)=data)
#define  get_MVDBLK_AVS2LIST0_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST0_reg))
#define  MVDBLK_AVS2LIST0_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST0_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST0_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST0_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST0_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST0_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST0_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST0_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST0_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST0_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST0_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST0_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST0_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST0_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST0_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#define  MVDBLK_AVS2LIST1                                                       0x1800E684
#define  MVDBLK_AVS2LIST1_reg_addr                                               "0xB800E684"
#define  MVDBLK_AVS2LIST1_reg                                                    0xB800E684
#define  MVDBLK_AVS2LIST1_inst_adr                                               "0x00A1"
#define  MVDBLK_AVS2LIST1_inst                                                   0x00A1
#define  set_MVDBLK_AVS2LIST1_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST1_reg)=data)
#define  get_MVDBLK_AVS2LIST1_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST1_reg))
#define  MVDBLK_AVS2LIST1_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST1_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST1_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST1_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST1_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST1_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST1_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST1_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST1_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST1_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST1_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST1_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST1_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST1_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST1_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#define  MVDBLK_AVS2LIST2                                                       0x1800E688
#define  MVDBLK_AVS2LIST2_reg_addr                                               "0xB800E688"
#define  MVDBLK_AVS2LIST2_reg                                                    0xB800E688
#define  MVDBLK_AVS2LIST2_inst_adr                                               "0x00A2"
#define  MVDBLK_AVS2LIST2_inst                                                   0x00A2
#define  set_MVDBLK_AVS2LIST2_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST2_reg)=data)
#define  get_MVDBLK_AVS2LIST2_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST2_reg))
#define  MVDBLK_AVS2LIST2_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST2_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST2_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST2_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST2_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST2_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST2_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST2_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST2_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST2_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST2_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST2_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST2_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST2_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST2_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#define  MVDBLK_AVS2LIST3                                                       0x1800E68C
#define  MVDBLK_AVS2LIST3_reg_addr                                               "0xB800E68C"
#define  MVDBLK_AVS2LIST3_reg                                                    0xB800E68C
#define  MVDBLK_AVS2LIST3_inst_adr                                               "0x00A3"
#define  MVDBLK_AVS2LIST3_inst                                                   0x00A3
#define  set_MVDBLK_AVS2LIST3_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST3_reg)=data)
#define  get_MVDBLK_AVS2LIST3_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST3_reg))
#define  MVDBLK_AVS2LIST3_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST3_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST3_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST3_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST3_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST3_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST3_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST3_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST3_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST3_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST3_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST3_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST3_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST3_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST3_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#define  MVDBLK_AVS2LIST4                                                       0x1800E6A0
#define  MVDBLK_AVS2LIST4_reg_addr                                               "0xB800E6A0"
#define  MVDBLK_AVS2LIST4_reg                                                    0xB800E6A0
#define  MVDBLK_AVS2LIST4_inst_adr                                               "0x00A8"
#define  MVDBLK_AVS2LIST4_inst                                                   0x00A8
#define  set_MVDBLK_AVS2LIST4_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST4_reg)=data)
#define  get_MVDBLK_AVS2LIST4_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST4_reg))
#define  MVDBLK_AVS2LIST4_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST4_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST4_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST4_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST4_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST4_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST4_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST4_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST4_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST4_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST4_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST4_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST4_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST4_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST4_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#define  MVDBLK_AVS2LIST5                                                       0x1800E6A4
#define  MVDBLK_AVS2LIST5_reg_addr                                               "0xB800E6A4"
#define  MVDBLK_AVS2LIST5_reg                                                    0xB800E6A4
#define  MVDBLK_AVS2LIST5_inst_adr                                               "0x00A9"
#define  MVDBLK_AVS2LIST5_inst                                                   0x00A9
#define  set_MVDBLK_AVS2LIST5_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST5_reg)=data)
#define  get_MVDBLK_AVS2LIST5_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST5_reg))
#define  MVDBLK_AVS2LIST5_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST5_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST5_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST5_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST5_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST5_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST5_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST5_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST5_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST5_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST5_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST5_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST5_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST5_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST5_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#define  MVDBLK_AVS2LIST6                                                       0x1800E6A8
#define  MVDBLK_AVS2LIST6_reg_addr                                               "0xB800E6A8"
#define  MVDBLK_AVS2LIST6_reg                                                    0xB800E6A8
#define  MVDBLK_AVS2LIST6_inst_adr                                               "0x00AA"
#define  MVDBLK_AVS2LIST6_inst                                                   0x00AA
#define  set_MVDBLK_AVS2LIST6_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST6_reg)=data)
#define  get_MVDBLK_AVS2LIST6_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST6_reg))
#define  MVDBLK_AVS2LIST6_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST6_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST6_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST6_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST6_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST6_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST6_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST6_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST6_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST6_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST6_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST6_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST6_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST6_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST6_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#define  MVDBLK_AVS2LIST7                                                       0x1800E6AC
#define  MVDBLK_AVS2LIST7_reg_addr                                               "0xB800E6AC"
#define  MVDBLK_AVS2LIST7_reg                                                    0xB800E6AC
#define  MVDBLK_AVS2LIST7_inst_adr                                               "0x00AB"
#define  MVDBLK_AVS2LIST7_inst                                                   0x00AB
#define  set_MVDBLK_AVS2LIST7_reg(data)                                          (*((volatile unsigned int*)MVDBLK_AVS2LIST7_reg)=data)
#define  get_MVDBLK_AVS2LIST7_reg                                                (*((volatile unsigned int*)MVDBLK_AVS2LIST7_reg))
#define  MVDBLK_AVS2LIST7_Delta_shift                                            (25)
#define  MVDBLK_AVS2LIST7_BlockDist_shift                                        (16)
#define  MVDBLK_AVS2LIST7_B16384DivBlockDist_shift                               (0)
#define  MVDBLK_AVS2LIST7_Delta_mask                                             (0x06000000)
#define  MVDBLK_AVS2LIST7_BlockDist_mask                                         (0x01FF0000)
#define  MVDBLK_AVS2LIST7_B16384DivBlockDist_mask                                (0x00007FFF)
#define  MVDBLK_AVS2LIST7_Delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_AVS2LIST7_BlockDist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_AVS2LIST7_B16384DivBlockDist(data)                               (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST7_get_Delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST7_get_BlockDist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST7_get_B16384DivBlockDist(data)                           (0x00007FFF&(data))
#define  MVDBLK_AVS2LIST7_Delta_src(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_AVS2LIST7_BlockDist_src(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_AVS2LIST7_B16384DivBlockDist_src(data)                           (0x00007FFF&(data))

#ifdef _MVDBLK_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MVDBLK register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  PicType:3;
        RBus_UInt32  FirstMbOfPic:1;
        RBus_UInt32  FirstMbOfSlice:1;
    };
}MVDBLK_COMM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  LdPxmemCount:16;
    };
}MVDBLK_COMM1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  DbgDumpCount:16;
    };
}MVDBLK_COMM2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  SetAddr:1;
        RBus_UInt32  MbAddrY:7;
        RBus_UInt32  MbAddrX:7;
        RBus_UInt32  MbAddr:13;
    };
}MVDBLK_COMM3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  HwCtrl:7;
        RBus_UInt32  SoftReset:1;
    };
}MVDBLK_COMM4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgWriteBuf:32;
    };
}MVDBLK_COMM5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  DbgStoreCount:16;
    };
}MVDBLK_COMM6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  RefPicList10Short:1;
        RBus_UInt32  BotLeTopAbsDiffPOC:1;
        RBus_UInt32  DirectSpatial:1;
        RBus_UInt32  ColPicStruct:2;
        RBus_UInt32  CurrPicStruct:2;
        RBus_UInt32  Direct8x8Inf:1;
    };
}MVDBLK_H264PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CurrFrmPoc:32;
    };
}MVDBLK_H264PIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CurrTopPoc:32;
    };
}MVDBLK_H264PIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CurrBotPoc:32;
    };
}MVDBLK_H264PIC3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  CoMem8x8:4;
    };
}MVDBLK_H264CO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StCoMemSAddr:32;
    };
}MVDBLK_H264CO1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MbaffAddr:1;
        RBus_UInt32  LdCoMemSAddr:31;
    };
}MVDBLK_H264CO2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  EnableLdCoMem1:1;
        RBus_UInt32  LdCoMemSAddr1:31;
    };
}MVDBLK_H264CO3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  AutoLdStOff:1;
        RBus_UInt32  InitNhMemCmd:1;
        RBus_UInt32  LdNhMemCmd:1;
        RBus_UInt32  StNhMemCmd:1;
    };
}MVDBLK_H264NH_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StNhMemSAddr:32;
    };
}MVDBLK_H264NH1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  LdNhMemSAddr:32;
    };
}MVDBLK_H264NH2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StSAddr:32;
    };
}MVDBLK_HEVCSAO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  LdSAddr:32;
    };
}MVDBLK_HEVCSAO1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  List1Size:5;
        RBus_UInt32  List0Size:5;
    };
}MVDBLK_H264PX_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  FrmPocAddrL0:16;
    };
}MVDBLK_H264PX1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  TopPocAddrL0:16;
    };
}MVDBLK_H264PX2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  BotPocAddrL0:16;
    };
}MVDBLK_H264PX3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  FrmPocAddrL1:16;
    };
}MVDBLK_H264PX4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  TopPocAddrL1:16;
    };
}MVDBLK_H264PX5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  BotPocAddrL1:16;
    };
}MVDBLK_H264PX6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  PicInfoAddr:16;
    };
}MVDBLK_H264PX7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  RefField:1;
        RBus_UInt32  FastUVmc:1;
        RBus_UInt32  ScaleFactor:11;
    };
}MVDBLK_VC1PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  Scale_fw:8;
        RBus_UInt32  Scale1_fw:12;
        RBus_UInt32  Scale2_fw:8;
    };
}MVDBLK_VC1PIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ScaleUpOpp_fw:1;
        RBus_UInt32  ScaleZone1X_fw:6;
        RBus_UInt32  ScaleZone1Y_fw:4;
        RBus_UInt32  Zone1OffsetX_fw:6;
        RBus_UInt32  Zone1OffsetY_fw:4;
    };
}MVDBLK_VC1PIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  Scale_bw:8;
        RBus_UInt32  Scale1_bw:12;
        RBus_UInt32  Scale2_bw:8;
    };
}MVDBLK_VC1PIC3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  ScaleUpOpp_bw:1;
        RBus_UInt32  ScaleZone1X_bw:6;
        RBus_UInt32  ScaleZone1Y_bw:4;
        RBus_UInt32  Zone1OffsetX_bw:6;
        RBus_UInt32  Zone1OffsetY_bw:4;
    };
}MVDBLK_VC1PIC4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  RangeY:12;
        RBus_UInt32  RangeX:13;
    };
}MVDBLK_VC1PIC5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  AecEnable:1;
        RBus_UInt32  PFieldSkip:1;
        RBus_UInt32  BFieldEnhanced:1;
        RBus_UInt32  PicRefFlag:1;
        RBus_UInt32  PicStructure:1;
    };
}MVDBLK_AVSPIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  BlockDist0:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  BlockDist1:9;
    };
}MVDBLK_AVSPIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  BlockDist2:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  BlockDist3:9;
    };
}MVDBLK_AVSPIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DiviTRp0:16;
        RBus_UInt32  B16384DiviTRp1:16;
    };
}MVDBLK_AVSPIC3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DiviTRp2:16;
        RBus_UInt32  B16384DiviTRp3:16;
    };
}MVDBLK_AVSPIC4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  iTRb0:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  iTRb1:9;
    };
}MVDBLK_AVSPIC5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  iTRb2:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  iTRb3:9;
    };
}MVDBLK_AVSPIC6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  iTRd:9;
    };
}MVDBLK_AVSPIC7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iRatio0:32;
    };
}MVDBLK_RM89PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iRatio1:32;
    };
}MVDBLK_RM89PIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hix:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  lox:14;
    };
}MVDBLK_RM89DIRECT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hiy:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  loy:14;
    };
}MVDBLK_RM89DIRECT1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hicx:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  locx:14;
    };
}MVDBLK_RM89DIRECT2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hicy:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  locy:14;
    };
}MVDBLK_RM89DIRECT3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ZeroMvd:1;
    };
}MVDBLK_RM89PIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hix_4v:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  lox_4v:14;
    };
}MVDBLK_RM89DIRECT4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hiy_4v:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  loy_4v:14;
    };
}MVDBLK_RM89DIRECT5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hicx_4v:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  locx_4v:14;
    };
}MVDBLK_RM89DIRECT6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hicy_4v:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  locy_4v:14;
    };
}MVDBLK_RM89DIRECT7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  entry:32;
    };
}MVDBLK_SEPOOL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  SetNhAvail:1;
    };
}MVDBLK_H264BASE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  LeftAvail:1;
        RBus_UInt32  TopAvail:1;
        RBus_UInt32  TopRightAvail:1;
        RBus_UInt32  TopLeftAvail:1;
    };
}MVDBLK_H264BASE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  GenPulse:1;
        RBus_UInt32  PicCount:15;
        RBus_UInt32  DbgCtrl:3;
        RBus_UInt32  MbAddr:13;
    };
}MVDBLK_DBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  ForceIntMv:1;
        RBus_UInt32  HwCtrl:16;
    };
}MVDBLK_AV1PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  Addr:8;
        RBus_UInt32  Read:1;
        RBus_UInt32  Write:1;
    };
}MVDBLK_INDRBUS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  HwCtrl:8;
        RBus_UInt32  SceneRefEnableFlag:1;
        RBus_UInt32  PmvrEnableFlag:1;
        RBus_UInt32  RefPicNumMinus1:3;
    };
}MVDBLK_AVS2PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  Delta:2;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  B16384DivBlockDist:15;
    };
}MVDBLK_AVS2LIST7_RBUS;

#else //apply LITTLE_ENDIAN
//======MVDBLK register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  FirstMbOfSlice:1;
        RBus_UInt32  FirstMbOfPic:1;
        RBus_UInt32  PicType:3;
        RBus_UInt32  res1:27;
    };
}MVDBLK_COMM_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  LdPxmemCount:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_COMM1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgDumpCount:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_COMM2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MbAddr:13;
        RBus_UInt32  MbAddrX:7;
        RBus_UInt32  MbAddrY:7;
        RBus_UInt32  SetAddr:1;
        RBus_UInt32  res1:4;
    };
}MVDBLK_COMM3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SoftReset:1;
        RBus_UInt32  HwCtrl:7;
        RBus_UInt32  res1:24;
    };
}MVDBLK_COMM4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgWriteBuf:32;
    };
}MVDBLK_COMM5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  DbgStoreCount:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_COMM6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Direct8x8Inf:1;
        RBus_UInt32  CurrPicStruct:2;
        RBus_UInt32  ColPicStruct:2;
        RBus_UInt32  DirectSpatial:1;
        RBus_UInt32  BotLeTopAbsDiffPOC:1;
        RBus_UInt32  RefPicList10Short:1;
        RBus_UInt32  res1:24;
    };
}MVDBLK_H264PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CurrFrmPoc:32;
    };
}MVDBLK_H264PIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CurrTopPoc:32;
    };
}MVDBLK_H264PIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CurrBotPoc:32;
    };
}MVDBLK_H264PIC3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  CoMem8x8:4;
        RBus_UInt32  res1:28;
    };
}MVDBLK_H264CO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StCoMemSAddr:32;
    };
}MVDBLK_H264CO1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  LdCoMemSAddr:31;
        RBus_UInt32  MbaffAddr:1;
    };
}MVDBLK_H264CO2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  LdCoMemSAddr1:31;
        RBus_UInt32  EnableLdCoMem1:1;
    };
}MVDBLK_H264CO3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StNhMemCmd:1;
        RBus_UInt32  LdNhMemCmd:1;
        RBus_UInt32  InitNhMemCmd:1;
        RBus_UInt32  AutoLdStOff:1;
        RBus_UInt32  res1:28;
    };
}MVDBLK_H264NH_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StNhMemSAddr:32;
    };
}MVDBLK_H264NH1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  LdNhMemSAddr:32;
    };
}MVDBLK_H264NH2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  StSAddr:32;
    };
}MVDBLK_HEVCSAO_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  LdSAddr:32;
    };
}MVDBLK_HEVCSAO1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  List0Size:5;
        RBus_UInt32  List1Size:5;
        RBus_UInt32  res1:22;
    };
}MVDBLK_H264PX_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  FrmPocAddrL0:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_H264PX1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  TopPocAddrL0:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_H264PX2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  BotPocAddrL0:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_H264PX3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  FrmPocAddrL1:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_H264PX4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  TopPocAddrL1:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_H264PX5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  BotPocAddrL1:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_H264PX6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  PicInfoAddr:16;
        RBus_UInt32  res1:16;
    };
}MVDBLK_H264PX7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ScaleFactor:11;
        RBus_UInt32  FastUVmc:1;
        RBus_UInt32  RefField:1;
        RBus_UInt32  res1:19;
    };
}MVDBLK_VC1PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Scale2_fw:8;
        RBus_UInt32  Scale1_fw:12;
        RBus_UInt32  Scale_fw:8;
        RBus_UInt32  res1:4;
    };
}MVDBLK_VC1PIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Zone1OffsetY_fw:4;
        RBus_UInt32  Zone1OffsetX_fw:6;
        RBus_UInt32  ScaleZone1Y_fw:4;
        RBus_UInt32  ScaleZone1X_fw:6;
        RBus_UInt32  ScaleUpOpp_fw:1;
        RBus_UInt32  res1:11;
    };
}MVDBLK_VC1PIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Scale2_bw:8;
        RBus_UInt32  Scale1_bw:12;
        RBus_UInt32  Scale_bw:8;
        RBus_UInt32  res1:4;
    };
}MVDBLK_VC1PIC3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Zone1OffsetY_bw:4;
        RBus_UInt32  Zone1OffsetX_bw:6;
        RBus_UInt32  ScaleZone1Y_bw:4;
        RBus_UInt32  ScaleZone1X_bw:6;
        RBus_UInt32  ScaleUpOpp_bw:1;
        RBus_UInt32  res1:11;
    };
}MVDBLK_VC1PIC4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  RangeX:13;
        RBus_UInt32  RangeY:12;
        RBus_UInt32  res1:7;
    };
}MVDBLK_VC1PIC5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  PicStructure:1;
        RBus_UInt32  PicRefFlag:1;
        RBus_UInt32  BFieldEnhanced:1;
        RBus_UInt32  PFieldSkip:1;
        RBus_UInt32  AecEnable:1;
        RBus_UInt32  res1:27;
    };
}MVDBLK_AVSPIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  BlockDist1:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  BlockDist0:9;
        RBus_UInt32  res2:7;
    };
}MVDBLK_AVSPIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  BlockDist3:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  BlockDist2:9;
        RBus_UInt32  res2:7;
    };
}MVDBLK_AVSPIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DiviTRp1:16;
        RBus_UInt32  B16384DiviTRp0:16;
    };
}MVDBLK_AVSPIC3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DiviTRp3:16;
        RBus_UInt32  B16384DiviTRp2:16;
    };
}MVDBLK_AVSPIC4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iTRb1:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  iTRb0:9;
        RBus_UInt32  res2:7;
    };
}MVDBLK_AVSPIC5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iTRb3:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  iTRb2:9;
        RBus_UInt32  res2:7;
    };
}MVDBLK_AVSPIC6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iTRd:9;
        RBus_UInt32  res1:23;
    };
}MVDBLK_AVSPIC7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iRatio0:32;
    };
}MVDBLK_RM89PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  iRatio1:32;
    };
}MVDBLK_RM89PIC1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lox:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hix:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loy:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hiy:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  locx:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hicx:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  locy:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hicy:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ZeroMvd:1;
        RBus_UInt32  res1:31;
    };
}MVDBLK_RM89PIC2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lox_4v:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hix_4v:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  loy_4v:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hiy_4v:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  locx_4v:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hicx_4v:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  locy_4v:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hicy_4v:14;
        RBus_UInt32  res2:2;
    };
}MVDBLK_RM89DIRECT7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  entry:32;
    };
}MVDBLK_SEPOOL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  SetNhAvail:1;
        RBus_UInt32  res1:31;
    };
}MVDBLK_H264BASE_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  TopLeftAvail:1;
        RBus_UInt32  TopRightAvail:1;
        RBus_UInt32  TopAvail:1;
        RBus_UInt32  LeftAvail:1;
        RBus_UInt32  res1:28;
    };
}MVDBLK_H264BASE1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  MbAddr:13;
        RBus_UInt32  DbgCtrl:3;
        RBus_UInt32  PicCount:15;
        RBus_UInt32  GenPulse:1;
    };
}MVDBLK_DBG_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  HwCtrl:16;
        RBus_UInt32  ForceIntMv:1;
        RBus_UInt32  res1:15;
    };
}MVDBLK_AV1PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Write:1;
        RBus_UInt32  Read:1;
        RBus_UInt32  Addr:8;
        RBus_UInt32  res1:22;
    };
}MVDBLK_INDRBUS_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  Dat:32;
    };
}MVDBLK_INDRBUS3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  RefPicNumMinus1:3;
        RBus_UInt32  PmvrEnableFlag:1;
        RBus_UInt32  SceneRefEnableFlag:1;
        RBus_UInt32  HwCtrl:8;
        RBus_UInt32  res1:19;
    };
}MVDBLK_AVS2PIC_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  B16384DivBlockDist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  BlockDist:9;
        RBus_UInt32  Delta:2;
        RBus_UInt32  res2:5;
    };
}MVDBLK_AVS2LIST7_RBUS;

#endif

#endif
#endif
