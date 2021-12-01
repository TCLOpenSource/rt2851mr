/**
* @file Merlin5_VE_MVDBLK_SPEC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_MVDBLK_REG_H_
#define _RBUS_MVDBLK_REG_H_

#include "rbus_types.h"



//  MVDBLK Register Address
#define  MVDBLK_comm                                                            0x1800E660
#define  MVDBLK_comm_reg_addr                                                    "0xB800E660"
#define  MVDBLK_comm_reg                                                         0xB800E660
#define  MVDBLK_comm_inst_addr                                                   "0x0000"
#define  set_MVDBLK_comm_reg(data)                                               (*((volatile unsigned int*)MVDBLK_comm_reg)=data)
#define  get_MVDBLK_comm_reg                                                     (*((volatile unsigned int*)MVDBLK_comm_reg))
#define  MVDBLK_comm_pictype_shift                                               (2)
#define  MVDBLK_comm_firstmbofpic_shift                                          (1)
#define  MVDBLK_comm_firstmbofslice_shift                                        (0)
#define  MVDBLK_comm_pictype_mask                                                (0x0000001C)
#define  MVDBLK_comm_firstmbofpic_mask                                           (0x00000002)
#define  MVDBLK_comm_firstmbofslice_mask                                         (0x00000001)
#define  MVDBLK_comm_pictype(data)                                               (0x0000001C&((data)<<2))
#define  MVDBLK_comm_firstmbofpic(data)                                          (0x00000002&((data)<<1))
#define  MVDBLK_comm_firstmbofslice(data)                                        (0x00000001&(data))
#define  MVDBLK_comm_get_pictype(data)                                           ((0x0000001C&(data))>>2)
#define  MVDBLK_comm_get_firstmbofpic(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_comm_get_firstmbofslice(data)                                    (0x00000001&(data))

#define  MVDBLK_comm1                                                           0x1800E664
#define  MVDBLK_comm1_reg_addr                                                   "0xB800E664"
#define  MVDBLK_comm1_reg                                                        0xB800E664
#define  MVDBLK_comm1_inst_addr                                                  "0x0001"
#define  set_MVDBLK_comm1_reg(data)                                              (*((volatile unsigned int*)MVDBLK_comm1_reg)=data)
#define  get_MVDBLK_comm1_reg                                                    (*((volatile unsigned int*)MVDBLK_comm1_reg))
#define  MVDBLK_comm1_ldpxmemcount_shift                                         (0)
#define  MVDBLK_comm1_ldpxmemcount_mask                                          (0x0000FFFF)
#define  MVDBLK_comm1_ldpxmemcount(data)                                         (0x0000FFFF&(data))
#define  MVDBLK_comm1_get_ldpxmemcount(data)                                     (0x0000FFFF&(data))

#define  MVDBLK_comm2                                                           0x1800E668
#define  MVDBLK_comm2_reg_addr                                                   "0xB800E668"
#define  MVDBLK_comm2_reg                                                        0xB800E668
#define  MVDBLK_comm2_inst_addr                                                  "0x0002"
#define  set_MVDBLK_comm2_reg(data)                                              (*((volatile unsigned int*)MVDBLK_comm2_reg)=data)
#define  get_MVDBLK_comm2_reg                                                    (*((volatile unsigned int*)MVDBLK_comm2_reg))
#define  MVDBLK_comm2_dbgdumpcount_shift                                         (0)
#define  MVDBLK_comm2_dbgdumpcount_mask                                          (0x0000FFFF)
#define  MVDBLK_comm2_dbgdumpcount(data)                                         (0x0000FFFF&(data))
#define  MVDBLK_comm2_get_dbgdumpcount(data)                                     (0x0000FFFF&(data))

#define  MVDBLK_comm3                                                           0x1800E66C
#define  MVDBLK_comm3_reg_addr                                                   "0xB800E66C"
#define  MVDBLK_comm3_reg                                                        0xB800E66C
#define  MVDBLK_comm3_inst_addr                                                  "0x0003"
#define  set_MVDBLK_comm3_reg(data)                                              (*((volatile unsigned int*)MVDBLK_comm3_reg)=data)
#define  get_MVDBLK_comm3_reg                                                    (*((volatile unsigned int*)MVDBLK_comm3_reg))
#define  MVDBLK_comm3_setaddr_shift                                              (27)
#define  MVDBLK_comm3_mbaddry_shift                                              (20)
#define  MVDBLK_comm3_mbaddrx_shift                                              (13)
#define  MVDBLK_comm3_mbaddr_shift                                               (0)
#define  MVDBLK_comm3_setaddr_mask                                               (0x08000000)
#define  MVDBLK_comm3_mbaddry_mask                                               (0x07F00000)
#define  MVDBLK_comm3_mbaddrx_mask                                               (0x000FE000)
#define  MVDBLK_comm3_mbaddr_mask                                                (0x00001FFF)
#define  MVDBLK_comm3_setaddr(data)                                              (0x08000000&((data)<<27))
#define  MVDBLK_comm3_mbaddry(data)                                              (0x07F00000&((data)<<20))
#define  MVDBLK_comm3_mbaddrx(data)                                              (0x000FE000&((data)<<13))
#define  MVDBLK_comm3_mbaddr(data)                                               (0x00001FFF&(data))
#define  MVDBLK_comm3_get_setaddr(data)                                          ((0x08000000&(data))>>27)
#define  MVDBLK_comm3_get_mbaddry(data)                                          ((0x07F00000&(data))>>20)
#define  MVDBLK_comm3_get_mbaddrx(data)                                          ((0x000FE000&(data))>>13)
#define  MVDBLK_comm3_get_mbaddr(data)                                           (0x00001FFF&(data))

#define  MVDBLK_comm4                                                           0x1800E670
#define  MVDBLK_comm4_reg_addr                                                   "0xB800E670"
#define  MVDBLK_comm4_reg                                                        0xB800E670
#define  MVDBLK_comm4_inst_addr                                                  "0x0004"
#define  set_MVDBLK_comm4_reg(data)                                              (*((volatile unsigned int*)MVDBLK_comm4_reg)=data)
#define  get_MVDBLK_comm4_reg                                                    (*((volatile unsigned int*)MVDBLK_comm4_reg))
#define  MVDBLK_comm4_hwctrl_shift                                               (1)
#define  MVDBLK_comm4_softreset_shift                                            (0)
#define  MVDBLK_comm4_hwctrl_mask                                                (0x000000FE)
#define  MVDBLK_comm4_softreset_mask                                             (0x00000001)
#define  MVDBLK_comm4_hwctrl(data)                                               (0x000000FE&((data)<<1))
#define  MVDBLK_comm4_softreset(data)                                            (0x00000001&(data))
#define  MVDBLK_comm4_get_hwctrl(data)                                           ((0x000000FE&(data))>>1)
#define  MVDBLK_comm4_get_softreset(data)                                        (0x00000001&(data))

#define  MVDBLK_comm5_0                                                         0x1800E674
#define  MVDBLK_comm5_0_reg_addr                                                 "0xB800E674"
#define  MVDBLK_comm5_0_reg                                                      0xB800E674
#define  MVDBLK_comm5_0_inst_addr                                                "0x0005"
#define  set_MVDBLK_comm5_0_reg(data)                                            (*((volatile unsigned int*)MVDBLK_comm5_0_reg)=data)
#define  get_MVDBLK_comm5_0_reg                                                  (*((volatile unsigned int*)MVDBLK_comm5_0_reg))
#define  MVDBLK_comm5_0_dbgwritebuf_shift                                        (0)
#define  MVDBLK_comm5_0_dbgwritebuf_mask                                         (0xFFFFFFFF)
#define  MVDBLK_comm5_0_dbgwritebuf(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_comm5_0_get_dbgwritebuf(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_comm5_1                                                         0x1800E678
#define  MVDBLK_comm5_1_reg_addr                                                 "0xB800E678"
#define  MVDBLK_comm5_1_reg                                                      0xB800E678
#define  MVDBLK_comm5_1_inst_addr                                                "0x0006"
#define  set_MVDBLK_comm5_1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_comm5_1_reg)=data)
#define  get_MVDBLK_comm5_1_reg                                                  (*((volatile unsigned int*)MVDBLK_comm5_1_reg))
#define  MVDBLK_comm5_1_dbgwritebuf_shift                                        (0)
#define  MVDBLK_comm5_1_dbgwritebuf_mask                                         (0xFFFFFFFF)
#define  MVDBLK_comm5_1_dbgwritebuf(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_comm5_1_get_dbgwritebuf(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_comm5_2                                                         0x1800E67C
#define  MVDBLK_comm5_2_reg_addr                                                 "0xB800E67C"
#define  MVDBLK_comm5_2_reg                                                      0xB800E67C
#define  MVDBLK_comm5_2_inst_addr                                                "0x0007"
#define  set_MVDBLK_comm5_2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_comm5_2_reg)=data)
#define  get_MVDBLK_comm5_2_reg                                                  (*((volatile unsigned int*)MVDBLK_comm5_2_reg))
#define  MVDBLK_comm5_2_dbgwritebuf_shift                                        (0)
#define  MVDBLK_comm5_2_dbgwritebuf_mask                                         (0xFFFFFFFF)
#define  MVDBLK_comm5_2_dbgwritebuf(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_comm5_2_get_dbgwritebuf(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_comm6                                                           0x1800E690
#define  MVDBLK_comm6_reg_addr                                                   "0xB800E690"
#define  MVDBLK_comm6_reg                                                        0xB800E690
#define  MVDBLK_comm6_inst_addr                                                  "0x0008"
#define  set_MVDBLK_comm6_reg(data)                                              (*((volatile unsigned int*)MVDBLK_comm6_reg)=data)
#define  get_MVDBLK_comm6_reg                                                    (*((volatile unsigned int*)MVDBLK_comm6_reg))
#define  MVDBLK_comm6_dbgstorecount_shift                                        (0)
#define  MVDBLK_comm6_dbgstorecount_mask                                         (0x0000FFFF)
#define  MVDBLK_comm6_dbgstorecount(data)                                        (0x0000FFFF&(data))
#define  MVDBLK_comm6_get_dbgstorecount(data)                                    (0x0000FFFF&(data))

#define  MVDBLK_h264pic                                                         0x1800E600
#define  MVDBLK_h264pic_reg_addr                                                 "0xB800E600"
#define  MVDBLK_h264pic_reg                                                      0xB800E600
#define  MVDBLK_h264pic_inst_addr                                                "0x0009"
#define  set_MVDBLK_h264pic_reg(data)                                            (*((volatile unsigned int*)MVDBLK_h264pic_reg)=data)
#define  get_MVDBLK_h264pic_reg                                                  (*((volatile unsigned int*)MVDBLK_h264pic_reg))
#define  MVDBLK_h264pic_refpiclist10short_shift                                  (7)
#define  MVDBLK_h264pic_botletopabsdiffpoc_shift                                 (6)
#define  MVDBLK_h264pic_directspatial_shift                                      (5)
#define  MVDBLK_h264pic_colpicstruct_shift                                       (3)
#define  MVDBLK_h264pic_currpicstruct_shift                                      (1)
#define  MVDBLK_h264pic_direct8x8inf_shift                                       (0)
#define  MVDBLK_h264pic_refpiclist10short_mask                                   (0x00000080)
#define  MVDBLK_h264pic_botletopabsdiffpoc_mask                                  (0x00000040)
#define  MVDBLK_h264pic_directspatial_mask                                       (0x00000020)
#define  MVDBLK_h264pic_colpicstruct_mask                                        (0x00000018)
#define  MVDBLK_h264pic_currpicstruct_mask                                       (0x00000006)
#define  MVDBLK_h264pic_direct8x8inf_mask                                        (0x00000001)
#define  MVDBLK_h264pic_refpiclist10short(data)                                  (0x00000080&((data)<<7))
#define  MVDBLK_h264pic_botletopabsdiffpoc(data)                                 (0x00000040&((data)<<6))
#define  MVDBLK_h264pic_directspatial(data)                                      (0x00000020&((data)<<5))
#define  MVDBLK_h264pic_colpicstruct(data)                                       (0x00000018&((data)<<3))
#define  MVDBLK_h264pic_currpicstruct(data)                                      (0x00000006&((data)<<1))
#define  MVDBLK_h264pic_direct8x8inf(data)                                       (0x00000001&(data))
#define  MVDBLK_h264pic_get_refpiclist10short(data)                              ((0x00000080&(data))>>7)
#define  MVDBLK_h264pic_get_botletopabsdiffpoc(data)                             ((0x00000040&(data))>>6)
#define  MVDBLK_h264pic_get_directspatial(data)                                  ((0x00000020&(data))>>5)
#define  MVDBLK_h264pic_get_colpicstruct(data)                                   ((0x00000018&(data))>>3)
#define  MVDBLK_h264pic_get_currpicstruct(data)                                  ((0x00000006&(data))>>1)
#define  MVDBLK_h264pic_get_direct8x8inf(data)                                   (0x00000001&(data))

#define  MVDBLK_h264pic1                                                        0x1800E604
#define  MVDBLK_h264pic1_reg_addr                                                "0xB800E604"
#define  MVDBLK_h264pic1_reg                                                     0xB800E604
#define  MVDBLK_h264pic1_inst_addr                                               "0x000A"
#define  set_MVDBLK_h264pic1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_h264pic1_reg)=data)
#define  get_MVDBLK_h264pic1_reg                                                 (*((volatile unsigned int*)MVDBLK_h264pic1_reg))
#define  MVDBLK_h264pic1_currfrmpoc_shift                                        (0)
#define  MVDBLK_h264pic1_currfrmpoc_mask                                         (0xFFFFFFFF)
#define  MVDBLK_h264pic1_currfrmpoc(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_h264pic1_get_currfrmpoc(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_h264pic2                                                        0x1800E608
#define  MVDBLK_h264pic2_reg_addr                                                "0xB800E608"
#define  MVDBLK_h264pic2_reg                                                     0xB800E608
#define  MVDBLK_h264pic2_inst_addr                                               "0x000B"
#define  set_MVDBLK_h264pic2_reg(data)                                           (*((volatile unsigned int*)MVDBLK_h264pic2_reg)=data)
#define  get_MVDBLK_h264pic2_reg                                                 (*((volatile unsigned int*)MVDBLK_h264pic2_reg))
#define  MVDBLK_h264pic2_currtoppoc_shift                                        (0)
#define  MVDBLK_h264pic2_currtoppoc_mask                                         (0xFFFFFFFF)
#define  MVDBLK_h264pic2_currtoppoc(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_h264pic2_get_currtoppoc(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_h264pic3                                                        0x1800E60C
#define  MVDBLK_h264pic3_reg_addr                                                "0xB800E60C"
#define  MVDBLK_h264pic3_reg                                                     0xB800E60C
#define  MVDBLK_h264pic3_inst_addr                                               "0x000C"
#define  set_MVDBLK_h264pic3_reg(data)                                           (*((volatile unsigned int*)MVDBLK_h264pic3_reg)=data)
#define  get_MVDBLK_h264pic3_reg                                                 (*((volatile unsigned int*)MVDBLK_h264pic3_reg))
#define  MVDBLK_h264pic3_currbotpoc_shift                                        (0)
#define  MVDBLK_h264pic3_currbotpoc_mask                                         (0xFFFFFFFF)
#define  MVDBLK_h264pic3_currbotpoc(data)                                        (0xFFFFFFFF&(data))
#define  MVDBLK_h264pic3_get_currbotpoc(data)                                    (0xFFFFFFFF&(data))

#define  MVDBLK_h264co                                                          0x1800E610
#define  MVDBLK_h264co_reg_addr                                                  "0xB800E610"
#define  MVDBLK_h264co_reg                                                       0xB800E610
#define  MVDBLK_h264co_inst_addr                                                 "0x000D"
#define  set_MVDBLK_h264co_reg(data)                                             (*((volatile unsigned int*)MVDBLK_h264co_reg)=data)
#define  get_MVDBLK_h264co_reg                                                   (*((volatile unsigned int*)MVDBLK_h264co_reg))
#define  MVDBLK_h264co_comem8x8_shift                                            (0)
#define  MVDBLK_h264co_comem8x8_mask                                             (0x0000000F)
#define  MVDBLK_h264co_comem8x8(data)                                            (0x0000000F&(data))
#define  MVDBLK_h264co_get_comem8x8(data)                                        (0x0000000F&(data))

#define  MVDBLK_h264co1                                                         0x1800E614
#define  MVDBLK_h264co1_reg_addr                                                 "0xB800E614"
#define  MVDBLK_h264co1_reg                                                      0xB800E614
#define  MVDBLK_h264co1_inst_addr                                                "0x000E"
#define  set_MVDBLK_h264co1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_h264co1_reg)=data)
#define  get_MVDBLK_h264co1_reg                                                  (*((volatile unsigned int*)MVDBLK_h264co1_reg))
#define  MVDBLK_h264co1_stcomemsaddr_shift                                       (0)
#define  MVDBLK_h264co1_stcomemsaddr_mask                                        (0xFFFFFFFF)
#define  MVDBLK_h264co1_stcomemsaddr(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_h264co1_get_stcomemsaddr(data)                                   (0xFFFFFFFF&(data))

#define  MVDBLK_h264co2                                                         0x1800E618
#define  MVDBLK_h264co2_reg_addr                                                 "0xB800E618"
#define  MVDBLK_h264co2_reg                                                      0xB800E618
#define  MVDBLK_h264co2_inst_addr                                                "0x000F"
#define  set_MVDBLK_h264co2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_h264co2_reg)=data)
#define  get_MVDBLK_h264co2_reg                                                  (*((volatile unsigned int*)MVDBLK_h264co2_reg))
#define  MVDBLK_h264co2_mbaffaddr_shift                                          (31)
#define  MVDBLK_h264co2_ldcomemsaddr_shift                                       (0)
#define  MVDBLK_h264co2_mbaffaddr_mask                                           (0x80000000)
#define  MVDBLK_h264co2_ldcomemsaddr_mask                                        (0x7FFFFFFF)
#define  MVDBLK_h264co2_mbaffaddr(data)                                          (0x80000000&((data)<<31))
#define  MVDBLK_h264co2_ldcomemsaddr(data)                                       (0x7FFFFFFF&(data))
#define  MVDBLK_h264co2_get_mbaffaddr(data)                                      ((0x80000000&(data))>>31)
#define  MVDBLK_h264co2_get_ldcomemsaddr(data)                                   (0x7FFFFFFF&(data))

#define  MVDBLK_h264co3                                                         0x1800E61C
#define  MVDBLK_h264co3_reg_addr                                                 "0xB800E61C"
#define  MVDBLK_h264co3_reg                                                      0xB800E61C
#define  MVDBLK_h264co3_inst_addr                                                "0x0010"
#define  set_MVDBLK_h264co3_reg(data)                                            (*((volatile unsigned int*)MVDBLK_h264co3_reg)=data)
#define  get_MVDBLK_h264co3_reg                                                  (*((volatile unsigned int*)MVDBLK_h264co3_reg))
#define  MVDBLK_h264co3_enableldcomem1_shift                                     (31)
#define  MVDBLK_h264co3_ldcomemsaddr1_shift                                      (0)
#define  MVDBLK_h264co3_enableldcomem1_mask                                      (0x80000000)
#define  MVDBLK_h264co3_ldcomemsaddr1_mask                                       (0x7FFFFFFF)
#define  MVDBLK_h264co3_enableldcomem1(data)                                     (0x80000000&((data)<<31))
#define  MVDBLK_h264co3_ldcomemsaddr1(data)                                      (0x7FFFFFFF&(data))
#define  MVDBLK_h264co3_get_enableldcomem1(data)                                 ((0x80000000&(data))>>31)
#define  MVDBLK_h264co3_get_ldcomemsaddr1(data)                                  (0x7FFFFFFF&(data))

#define  MVDBLK_h264nh                                                          0x1800E6D0
#define  MVDBLK_h264nh_reg_addr                                                  "0xB800E6D0"
#define  MVDBLK_h264nh_reg                                                       0xB800E6D0
#define  MVDBLK_h264nh_inst_addr                                                 "0x0011"
#define  set_MVDBLK_h264nh_reg(data)                                             (*((volatile unsigned int*)MVDBLK_h264nh_reg)=data)
#define  get_MVDBLK_h264nh_reg                                                   (*((volatile unsigned int*)MVDBLK_h264nh_reg))
#define  MVDBLK_h264nh_autoldstoff_shift                                         (3)
#define  MVDBLK_h264nh_initnhmemcmd_shift                                        (2)
#define  MVDBLK_h264nh_ldnhmemcmd_shift                                          (1)
#define  MVDBLK_h264nh_stnhmemcmd_shift                                          (0)
#define  MVDBLK_h264nh_autoldstoff_mask                                          (0x00000008)
#define  MVDBLK_h264nh_initnhmemcmd_mask                                         (0x00000004)
#define  MVDBLK_h264nh_ldnhmemcmd_mask                                           (0x00000002)
#define  MVDBLK_h264nh_stnhmemcmd_mask                                           (0x00000001)
#define  MVDBLK_h264nh_autoldstoff(data)                                         (0x00000008&((data)<<3))
#define  MVDBLK_h264nh_initnhmemcmd(data)                                        (0x00000004&((data)<<2))
#define  MVDBLK_h264nh_ldnhmemcmd(data)                                          (0x00000002&((data)<<1))
#define  MVDBLK_h264nh_stnhmemcmd(data)                                          (0x00000001&(data))
#define  MVDBLK_h264nh_get_autoldstoff(data)                                     ((0x00000008&(data))>>3)
#define  MVDBLK_h264nh_get_initnhmemcmd(data)                                    ((0x00000004&(data))>>2)
#define  MVDBLK_h264nh_get_ldnhmemcmd(data)                                      ((0x00000002&(data))>>1)
#define  MVDBLK_h264nh_get_stnhmemcmd(data)                                      (0x00000001&(data))

#define  MVDBLK_h264nh1                                                         0x1800E6D4
#define  MVDBLK_h264nh1_reg_addr                                                 "0xB800E6D4"
#define  MVDBLK_h264nh1_reg                                                      0xB800E6D4
#define  MVDBLK_h264nh1_inst_addr                                                "0x0012"
#define  set_MVDBLK_h264nh1_reg(data)                                            (*((volatile unsigned int*)MVDBLK_h264nh1_reg)=data)
#define  get_MVDBLK_h264nh1_reg                                                  (*((volatile unsigned int*)MVDBLK_h264nh1_reg))
#define  MVDBLK_h264nh1_stnhmemsaddr_shift                                       (0)
#define  MVDBLK_h264nh1_stnhmemsaddr_mask                                        (0xFFFFFFFF)
#define  MVDBLK_h264nh1_stnhmemsaddr(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_h264nh1_get_stnhmemsaddr(data)                                   (0xFFFFFFFF&(data))

#define  MVDBLK_h264nh2                                                         0x1800E6D8
#define  MVDBLK_h264nh2_reg_addr                                                 "0xB800E6D8"
#define  MVDBLK_h264nh2_reg                                                      0xB800E6D8
#define  MVDBLK_h264nh2_inst_addr                                                "0x0013"
#define  set_MVDBLK_h264nh2_reg(data)                                            (*((volatile unsigned int*)MVDBLK_h264nh2_reg)=data)
#define  get_MVDBLK_h264nh2_reg                                                  (*((volatile unsigned int*)MVDBLK_h264nh2_reg))
#define  MVDBLK_h264nh2_ldnhmemsaddr_shift                                       (0)
#define  MVDBLK_h264nh2_ldnhmemsaddr_mask                                        (0xFFFFFFFF)
#define  MVDBLK_h264nh2_ldnhmemsaddr(data)                                       (0xFFFFFFFF&(data))
#define  MVDBLK_h264nh2_get_ldnhmemsaddr(data)                                   (0xFFFFFFFF&(data))

#define  MVDBLK_hevcsao                                                         0x1800E6E4
#define  MVDBLK_hevcsao_reg_addr                                                 "0xB800E6E4"
#define  MVDBLK_hevcsao_reg                                                      0xB800E6E4
#define  MVDBLK_hevcsao_inst_addr                                                "0x0014"
#define  set_MVDBLK_hevcsao_reg(data)                                            (*((volatile unsigned int*)MVDBLK_hevcsao_reg)=data)
#define  get_MVDBLK_hevcsao_reg                                                  (*((volatile unsigned int*)MVDBLK_hevcsao_reg))
#define  MVDBLK_hevcsao_stsaddr_shift                                            (0)
#define  MVDBLK_hevcsao_stsaddr_mask                                             (0xFFFFFFFF)
#define  MVDBLK_hevcsao_stsaddr(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_hevcsao_get_stsaddr(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_hevcsao1                                                        0x1800E6E8
#define  MVDBLK_hevcsao1_reg_addr                                                "0xB800E6E8"
#define  MVDBLK_hevcsao1_reg                                                     0xB800E6E8
#define  MVDBLK_hevcsao1_inst_addr                                               "0x0015"
#define  set_MVDBLK_hevcsao1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_hevcsao1_reg)=data)
#define  get_MVDBLK_hevcsao1_reg                                                 (*((volatile unsigned int*)MVDBLK_hevcsao1_reg))
#define  MVDBLK_hevcsao1_ldsaddr_shift                                           (0)
#define  MVDBLK_hevcsao1_ldsaddr_mask                                            (0xFFFFFFFF)
#define  MVDBLK_hevcsao1_ldsaddr(data)                                           (0xFFFFFFFF&(data))
#define  MVDBLK_hevcsao1_get_ldsaddr(data)                                       (0xFFFFFFFF&(data))

#define  MVDBLK_av1pic                                                          0x1800E6EC
#define  MVDBLK_av1pic_reg_addr                                                  "0xB800E6EC"
#define  MVDBLK_av1pic_reg                                                       0xB800E6EC
#define  MVDBLK_av1pic_inst_addr                                                 "0x0016"
#define  set_MVDBLK_av1pic_reg(data)                                             (*((volatile unsigned int*)MVDBLK_av1pic_reg)=data)
#define  get_MVDBLK_av1pic_reg                                                   (*((volatile unsigned int*)MVDBLK_av1pic_reg))
#define  MVDBLK_av1pic_forceintmv_shift                                          (16)
#define  MVDBLK_av1pic_hwctrl_shift                                              (0)
#define  MVDBLK_av1pic_forceintmv_mask                                           (0x00010000)
#define  MVDBLK_av1pic_hwctrl_mask                                               (0x0000FFFF)
#define  MVDBLK_av1pic_forceintmv(data)                                          (0x00010000&((data)<<16))
#define  MVDBLK_av1pic_hwctrl(data)                                              (0x0000FFFF&(data))
#define  MVDBLK_av1pic_get_forceintmv(data)                                      ((0x00010000&(data))>>16)
#define  MVDBLK_av1pic_get_hwctrl(data)                                          (0x0000FFFF&(data))

#define  MVDBLK_indrbus                                                         0x1800E6E0
#define  MVDBLK_indrbus_reg_addr                                                 "0xB800E6E0"
#define  MVDBLK_indrbus_reg                                                      0xB800E6E0
#define  MVDBLK_indrbus_inst_addr                                                "0x0017"
#define  set_MVDBLK_indrbus_reg(data)                                            (*((volatile unsigned int*)MVDBLK_indrbus_reg)=data)
#define  get_MVDBLK_indrbus_reg                                                  (*((volatile unsigned int*)MVDBLK_indrbus_reg))
#define  MVDBLK_indrbus_addr_shift                                               (2)
#define  MVDBLK_indrbus_read_shift                                               (1)
#define  MVDBLK_indrbus_write_shift                                              (0)
#define  MVDBLK_indrbus_addr_mask                                                (0x000003FC)
#define  MVDBLK_indrbus_read_mask                                                (0x00000002)
#define  MVDBLK_indrbus_write_mask                                               (0x00000001)
#define  MVDBLK_indrbus_addr(data)                                               (0x000003FC&((data)<<2))
#define  MVDBLK_indrbus_read(data)                                               (0x00000002&((data)<<1))
#define  MVDBLK_indrbus_write(data)                                              (0x00000001&(data))
#define  MVDBLK_indrbus_get_addr(data)                                           ((0x000003FC&(data))>>2)
#define  MVDBLK_indrbus_get_read(data)                                           ((0x00000002&(data))>>1)
#define  MVDBLK_indrbus_get_write(data)                                          (0x00000001&(data))

#define  MVDBLK_indrbus0                                                        0x1800E6B0
#define  MVDBLK_indrbus0_reg_addr                                                "0xB800E6B0"
#define  MVDBLK_indrbus0_reg                                                     0xB800E6B0
#define  MVDBLK_indrbus0_inst_addr                                               "0x0018"
#define  set_MVDBLK_indrbus0_reg(data)                                           (*((volatile unsigned int*)MVDBLK_indrbus0_reg)=data)
#define  get_MVDBLK_indrbus0_reg                                                 (*((volatile unsigned int*)MVDBLK_indrbus0_reg))
#define  MVDBLK_indrbus0_dat_shift                                               (0)
#define  MVDBLK_indrbus0_dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_indrbus0_dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_indrbus0_get_dat(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_indrbus1                                                        0x1800E6B4
#define  MVDBLK_indrbus1_reg_addr                                                "0xB800E6B4"
#define  MVDBLK_indrbus1_reg                                                     0xB800E6B4
#define  MVDBLK_indrbus1_inst_addr                                               "0x0019"
#define  set_MVDBLK_indrbus1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_indrbus1_reg)=data)
#define  get_MVDBLK_indrbus1_reg                                                 (*((volatile unsigned int*)MVDBLK_indrbus1_reg))
#define  MVDBLK_indrbus1_dat_shift                                               (0)
#define  MVDBLK_indrbus1_dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_indrbus1_dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_indrbus1_get_dat(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_indrbus2                                                        0x1800E6B8
#define  MVDBLK_indrbus2_reg_addr                                                "0xB800E6B8"
#define  MVDBLK_indrbus2_reg                                                     0xB800E6B8
#define  MVDBLK_indrbus2_inst_addr                                               "0x001A"
#define  set_MVDBLK_indrbus2_reg(data)                                           (*((volatile unsigned int*)MVDBLK_indrbus2_reg)=data)
#define  get_MVDBLK_indrbus2_reg                                                 (*((volatile unsigned int*)MVDBLK_indrbus2_reg))
#define  MVDBLK_indrbus2_dat_shift                                               (0)
#define  MVDBLK_indrbus2_dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_indrbus2_dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_indrbus2_get_dat(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_indrbus3                                                        0x1800E6BC
#define  MVDBLK_indrbus3_reg_addr                                                "0xB800E6BC"
#define  MVDBLK_indrbus3_reg                                                     0xB800E6BC
#define  MVDBLK_indrbus3_inst_addr                                               "0x001B"
#define  set_MVDBLK_indrbus3_reg(data)                                           (*((volatile unsigned int*)MVDBLK_indrbus3_reg)=data)
#define  get_MVDBLK_indrbus3_reg                                                 (*((volatile unsigned int*)MVDBLK_indrbus3_reg))
#define  MVDBLK_indrbus3_dat_shift                                               (0)
#define  MVDBLK_indrbus3_dat_mask                                                (0xFFFFFFFF)
#define  MVDBLK_indrbus3_dat(data)                                               (0xFFFFFFFF&(data))
#define  MVDBLK_indrbus3_get_dat(data)                                           (0xFFFFFFFF&(data))

#define  MVDBLK_avs2pic                                                         0x1800E694
#define  MVDBLK_avs2pic_reg_addr                                                 "0xB800E694"
#define  MVDBLK_avs2pic_reg                                                      0xB800E694
#define  MVDBLK_avs2pic_inst_addr                                                "0x001C"
#define  set_MVDBLK_avs2pic_reg(data)                                            (*((volatile unsigned int*)MVDBLK_avs2pic_reg)=data)
#define  get_MVDBLK_avs2pic_reg                                                  (*((volatile unsigned int*)MVDBLK_avs2pic_reg))
#define  MVDBLK_avs2pic_hwctrl_shift                                             (5)
#define  MVDBLK_avs2pic_scenerefenableflag_shift                                 (4)
#define  MVDBLK_avs2pic_pmvrenableflag_shift                                     (3)
#define  MVDBLK_avs2pic_refpicnumminus1_shift                                    (0)
#define  MVDBLK_avs2pic_hwctrl_mask                                              (0x00001FE0)
#define  MVDBLK_avs2pic_scenerefenableflag_mask                                  (0x00000010)
#define  MVDBLK_avs2pic_pmvrenableflag_mask                                      (0x00000008)
#define  MVDBLK_avs2pic_refpicnumminus1_mask                                     (0x00000007)
#define  MVDBLK_avs2pic_hwctrl(data)                                             (0x00001FE0&((data)<<5))
#define  MVDBLK_avs2pic_scenerefenableflag(data)                                 (0x00000010&((data)<<4))
#define  MVDBLK_avs2pic_pmvrenableflag(data)                                     (0x00000008&((data)<<3))
#define  MVDBLK_avs2pic_refpicnumminus1(data)                                    (0x00000007&(data))
#define  MVDBLK_avs2pic_get_hwctrl(data)                                         ((0x00001FE0&(data))>>5)
#define  MVDBLK_avs2pic_get_scenerefenableflag(data)                             ((0x00000010&(data))>>4)
#define  MVDBLK_avs2pic_get_pmvrenableflag(data)                                 ((0x00000008&(data))>>3)
#define  MVDBLK_avs2pic_get_refpicnumminus1(data)                                (0x00000007&(data))

#define  MVDBLK_avs2list0                                                       0x1800E680
#define  MVDBLK_avs2list0_reg_addr                                               "0xB800E680"
#define  MVDBLK_avs2list0_reg                                                    0xB800E680
#define  MVDBLK_avs2list0_inst_addr                                              "0x001D"
#define  set_MVDBLK_avs2list0_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list0_reg)=data)
#define  get_MVDBLK_avs2list0_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list0_reg))
#define  MVDBLK_avs2list0_delta_shift                                            (25)
#define  MVDBLK_avs2list0_blockdist_shift                                        (16)
#define  MVDBLK_avs2list0_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list0_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list0_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list0_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list0_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list0_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list0_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list0_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list0_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list0_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_avs2list1                                                       0x1800E684
#define  MVDBLK_avs2list1_reg_addr                                               "0xB800E684"
#define  MVDBLK_avs2list1_reg                                                    0xB800E684
#define  MVDBLK_avs2list1_inst_addr                                              "0x001E"
#define  set_MVDBLK_avs2list1_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list1_reg)=data)
#define  get_MVDBLK_avs2list1_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list1_reg))
#define  MVDBLK_avs2list1_delta_shift                                            (25)
#define  MVDBLK_avs2list1_blockdist_shift                                        (16)
#define  MVDBLK_avs2list1_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list1_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list1_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list1_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list1_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list1_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list1_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list1_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list1_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list1_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_avs2list2                                                       0x1800E688
#define  MVDBLK_avs2list2_reg_addr                                               "0xB800E688"
#define  MVDBLK_avs2list2_reg                                                    0xB800E688
#define  MVDBLK_avs2list2_inst_addr                                              "0x001F"
#define  set_MVDBLK_avs2list2_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list2_reg)=data)
#define  get_MVDBLK_avs2list2_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list2_reg))
#define  MVDBLK_avs2list2_delta_shift                                            (25)
#define  MVDBLK_avs2list2_blockdist_shift                                        (16)
#define  MVDBLK_avs2list2_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list2_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list2_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list2_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list2_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list2_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list2_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list2_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list2_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list2_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_avs2list3                                                       0x1800E68C
#define  MVDBLK_avs2list3_reg_addr                                               "0xB800E68C"
#define  MVDBLK_avs2list3_reg                                                    0xB800E68C
#define  MVDBLK_avs2list3_inst_addr                                              "0x0020"
#define  set_MVDBLK_avs2list3_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list3_reg)=data)
#define  get_MVDBLK_avs2list3_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list3_reg))
#define  MVDBLK_avs2list3_delta_shift                                            (25)
#define  MVDBLK_avs2list3_blockdist_shift                                        (16)
#define  MVDBLK_avs2list3_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list3_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list3_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list3_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list3_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list3_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list3_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list3_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list3_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list3_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_avs2list4                                                       0x1800E6A0
#define  MVDBLK_avs2list4_reg_addr                                               "0xB800E6A0"
#define  MVDBLK_avs2list4_reg                                                    0xB800E6A0
#define  MVDBLK_avs2list4_inst_addr                                              "0x0021"
#define  set_MVDBLK_avs2list4_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list4_reg)=data)
#define  get_MVDBLK_avs2list4_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list4_reg))
#define  MVDBLK_avs2list4_delta_shift                                            (25)
#define  MVDBLK_avs2list4_blockdist_shift                                        (16)
#define  MVDBLK_avs2list4_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list4_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list4_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list4_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list4_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list4_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list4_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list4_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list4_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list4_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_avs2list5                                                       0x1800E6A4
#define  MVDBLK_avs2list5_reg_addr                                               "0xB800E6A4"
#define  MVDBLK_avs2list5_reg                                                    0xB800E6A4
#define  MVDBLK_avs2list5_inst_addr                                              "0x0022"
#define  set_MVDBLK_avs2list5_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list5_reg)=data)
#define  get_MVDBLK_avs2list5_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list5_reg))
#define  MVDBLK_avs2list5_delta_shift                                            (25)
#define  MVDBLK_avs2list5_blockdist_shift                                        (16)
#define  MVDBLK_avs2list5_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list5_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list5_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list5_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list5_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list5_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list5_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list5_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list5_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list5_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_avs2list6                                                       0x1800E6A8
#define  MVDBLK_avs2list6_reg_addr                                               "0xB800E6A8"
#define  MVDBLK_avs2list6_reg                                                    0xB800E6A8
#define  MVDBLK_avs2list6_inst_addr                                              "0x0023"
#define  set_MVDBLK_avs2list6_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list6_reg)=data)
#define  get_MVDBLK_avs2list6_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list6_reg))
#define  MVDBLK_avs2list6_delta_shift                                            (25)
#define  MVDBLK_avs2list6_blockdist_shift                                        (16)
#define  MVDBLK_avs2list6_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list6_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list6_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list6_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list6_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list6_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list6_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list6_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list6_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list6_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_avs2list7                                                       0x1800E6AC
#define  MVDBLK_avs2list7_reg_addr                                               "0xB800E6AC"
#define  MVDBLK_avs2list7_reg                                                    0xB800E6AC
#define  MVDBLK_avs2list7_inst_addr                                              "0x0024"
#define  set_MVDBLK_avs2list7_reg(data)                                          (*((volatile unsigned int*)MVDBLK_avs2list7_reg)=data)
#define  get_MVDBLK_avs2list7_reg                                                (*((volatile unsigned int*)MVDBLK_avs2list7_reg))
#define  MVDBLK_avs2list7_delta_shift                                            (25)
#define  MVDBLK_avs2list7_blockdist_shift                                        (16)
#define  MVDBLK_avs2list7_b16384divblockdist_shift                               (0)
#define  MVDBLK_avs2list7_delta_mask                                             (0x06000000)
#define  MVDBLK_avs2list7_blockdist_mask                                         (0x01FF0000)
#define  MVDBLK_avs2list7_b16384divblockdist_mask                                (0x00007FFF)
#define  MVDBLK_avs2list7_delta(data)                                            (0x06000000&((data)<<25))
#define  MVDBLK_avs2list7_blockdist(data)                                        (0x01FF0000&((data)<<16))
#define  MVDBLK_avs2list7_b16384divblockdist(data)                               (0x00007FFF&(data))
#define  MVDBLK_avs2list7_get_delta(data)                                        ((0x06000000&(data))>>25)
#define  MVDBLK_avs2list7_get_blockdist(data)                                    ((0x01FF0000&(data))>>16)
#define  MVDBLK_avs2list7_get_b16384divblockdist(data)                           (0x00007FFF&(data))

#define  MVDBLK_sepool_0                                                        0x1800E700
#define  MVDBLK_sepool_0_reg_addr                                                "0xB800E700"
#define  MVDBLK_sepool_0_reg                                                     0xB800E700
#define  MVDBLK_sepool_0_inst_addr                                               "0x0025"
#define  set_MVDBLK_sepool_0_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_0_reg)=data)
#define  get_MVDBLK_sepool_0_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_0_reg))
#define  MVDBLK_sepool_0_entry_shift                                             (0)
#define  MVDBLK_sepool_0_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_0_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_0_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_1                                                        0x1800E704
#define  MVDBLK_sepool_1_reg_addr                                                "0xB800E704"
#define  MVDBLK_sepool_1_reg                                                     0xB800E704
#define  MVDBLK_sepool_1_inst_addr                                               "0x0026"
#define  set_MVDBLK_sepool_1_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_1_reg)=data)
#define  get_MVDBLK_sepool_1_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_1_reg))
#define  MVDBLK_sepool_1_entry_shift                                             (0)
#define  MVDBLK_sepool_1_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_1_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_1_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_2                                                        0x1800E708
#define  MVDBLK_sepool_2_reg_addr                                                "0xB800E708"
#define  MVDBLK_sepool_2_reg                                                     0xB800E708
#define  MVDBLK_sepool_2_inst_addr                                               "0x0027"
#define  set_MVDBLK_sepool_2_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_2_reg)=data)
#define  get_MVDBLK_sepool_2_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_2_reg))
#define  MVDBLK_sepool_2_entry_shift                                             (0)
#define  MVDBLK_sepool_2_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_2_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_2_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_3                                                        0x1800E70C
#define  MVDBLK_sepool_3_reg_addr                                                "0xB800E70C"
#define  MVDBLK_sepool_3_reg                                                     0xB800E70C
#define  MVDBLK_sepool_3_inst_addr                                               "0x0028"
#define  set_MVDBLK_sepool_3_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_3_reg)=data)
#define  get_MVDBLK_sepool_3_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_3_reg))
#define  MVDBLK_sepool_3_entry_shift                                             (0)
#define  MVDBLK_sepool_3_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_3_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_3_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_4                                                        0x1800E710
#define  MVDBLK_sepool_4_reg_addr                                                "0xB800E710"
#define  MVDBLK_sepool_4_reg                                                     0xB800E710
#define  MVDBLK_sepool_4_inst_addr                                               "0x0029"
#define  set_MVDBLK_sepool_4_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_4_reg)=data)
#define  get_MVDBLK_sepool_4_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_4_reg))
#define  MVDBLK_sepool_4_entry_shift                                             (0)
#define  MVDBLK_sepool_4_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_4_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_4_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_5                                                        0x1800E714
#define  MVDBLK_sepool_5_reg_addr                                                "0xB800E714"
#define  MVDBLK_sepool_5_reg                                                     0xB800E714
#define  MVDBLK_sepool_5_inst_addr                                               "0x002A"
#define  set_MVDBLK_sepool_5_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_5_reg)=data)
#define  get_MVDBLK_sepool_5_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_5_reg))
#define  MVDBLK_sepool_5_entry_shift                                             (0)
#define  MVDBLK_sepool_5_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_5_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_5_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_6                                                        0x1800E718
#define  MVDBLK_sepool_6_reg_addr                                                "0xB800E718"
#define  MVDBLK_sepool_6_reg                                                     0xB800E718
#define  MVDBLK_sepool_6_inst_addr                                               "0x002B"
#define  set_MVDBLK_sepool_6_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_6_reg)=data)
#define  get_MVDBLK_sepool_6_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_6_reg))
#define  MVDBLK_sepool_6_entry_shift                                             (0)
#define  MVDBLK_sepool_6_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_6_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_6_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_7                                                        0x1800E71C
#define  MVDBLK_sepool_7_reg_addr                                                "0xB800E71C"
#define  MVDBLK_sepool_7_reg                                                     0xB800E71C
#define  MVDBLK_sepool_7_inst_addr                                               "0x002C"
#define  set_MVDBLK_sepool_7_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_7_reg)=data)
#define  get_MVDBLK_sepool_7_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_7_reg))
#define  MVDBLK_sepool_7_entry_shift                                             (0)
#define  MVDBLK_sepool_7_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_7_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_7_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_8                                                        0x1800E720
#define  MVDBLK_sepool_8_reg_addr                                                "0xB800E720"
#define  MVDBLK_sepool_8_reg                                                     0xB800E720
#define  MVDBLK_sepool_8_inst_addr                                               "0x002D"
#define  set_MVDBLK_sepool_8_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_8_reg)=data)
#define  get_MVDBLK_sepool_8_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_8_reg))
#define  MVDBLK_sepool_8_entry_shift                                             (0)
#define  MVDBLK_sepool_8_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_8_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_8_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_9                                                        0x1800E724
#define  MVDBLK_sepool_9_reg_addr                                                "0xB800E724"
#define  MVDBLK_sepool_9_reg                                                     0xB800E724
#define  MVDBLK_sepool_9_inst_addr                                               "0x002E"
#define  set_MVDBLK_sepool_9_reg(data)                                           (*((volatile unsigned int*)MVDBLK_sepool_9_reg)=data)
#define  get_MVDBLK_sepool_9_reg                                                 (*((volatile unsigned int*)MVDBLK_sepool_9_reg))
#define  MVDBLK_sepool_9_entry_shift                                             (0)
#define  MVDBLK_sepool_9_entry_mask                                              (0xFFFFFFFF)
#define  MVDBLK_sepool_9_entry(data)                                             (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_9_get_entry(data)                                         (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_10                                                       0x1800E728
#define  MVDBLK_sepool_10_reg_addr                                               "0xB800E728"
#define  MVDBLK_sepool_10_reg                                                    0xB800E728
#define  MVDBLK_sepool_10_inst_addr                                              "0x002F"
#define  set_MVDBLK_sepool_10_reg(data)                                          (*((volatile unsigned int*)MVDBLK_sepool_10_reg)=data)
#define  get_MVDBLK_sepool_10_reg                                                (*((volatile unsigned int*)MVDBLK_sepool_10_reg))
#define  MVDBLK_sepool_10_entry_shift                                            (0)
#define  MVDBLK_sepool_10_entry_mask                                             (0xFFFFFFFF)
#define  MVDBLK_sepool_10_entry(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_10_get_entry(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_11                                                       0x1800E72C
#define  MVDBLK_sepool_11_reg_addr                                               "0xB800E72C"
#define  MVDBLK_sepool_11_reg                                                    0xB800E72C
#define  MVDBLK_sepool_11_inst_addr                                              "0x0030"
#define  set_MVDBLK_sepool_11_reg(data)                                          (*((volatile unsigned int*)MVDBLK_sepool_11_reg)=data)
#define  get_MVDBLK_sepool_11_reg                                                (*((volatile unsigned int*)MVDBLK_sepool_11_reg))
#define  MVDBLK_sepool_11_entry_shift                                            (0)
#define  MVDBLK_sepool_11_entry_mask                                             (0xFFFFFFFF)
#define  MVDBLK_sepool_11_entry(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_11_get_entry(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_12                                                       0x1800E730
#define  MVDBLK_sepool_12_reg_addr                                               "0xB800E730"
#define  MVDBLK_sepool_12_reg                                                    0xB800E730
#define  MVDBLK_sepool_12_inst_addr                                              "0x0031"
#define  set_MVDBLK_sepool_12_reg(data)                                          (*((volatile unsigned int*)MVDBLK_sepool_12_reg)=data)
#define  get_MVDBLK_sepool_12_reg                                                (*((volatile unsigned int*)MVDBLK_sepool_12_reg))
#define  MVDBLK_sepool_12_entry_shift                                            (0)
#define  MVDBLK_sepool_12_entry_mask                                             (0xFFFFFFFF)
#define  MVDBLK_sepool_12_entry(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_12_get_entry(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_13                                                       0x1800E734
#define  MVDBLK_sepool_13_reg_addr                                               "0xB800E734"
#define  MVDBLK_sepool_13_reg                                                    0xB800E734
#define  MVDBLK_sepool_13_inst_addr                                              "0x0032"
#define  set_MVDBLK_sepool_13_reg(data)                                          (*((volatile unsigned int*)MVDBLK_sepool_13_reg)=data)
#define  get_MVDBLK_sepool_13_reg                                                (*((volatile unsigned int*)MVDBLK_sepool_13_reg))
#define  MVDBLK_sepool_13_entry_shift                                            (0)
#define  MVDBLK_sepool_13_entry_mask                                             (0xFFFFFFFF)
#define  MVDBLK_sepool_13_entry(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_13_get_entry(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_14                                                       0x1800E738
#define  MVDBLK_sepool_14_reg_addr                                               "0xB800E738"
#define  MVDBLK_sepool_14_reg                                                    0xB800E738
#define  MVDBLK_sepool_14_inst_addr                                              "0x0033"
#define  set_MVDBLK_sepool_14_reg(data)                                          (*((volatile unsigned int*)MVDBLK_sepool_14_reg)=data)
#define  get_MVDBLK_sepool_14_reg                                                (*((volatile unsigned int*)MVDBLK_sepool_14_reg))
#define  MVDBLK_sepool_14_entry_shift                                            (0)
#define  MVDBLK_sepool_14_entry_mask                                             (0xFFFFFFFF)
#define  MVDBLK_sepool_14_entry(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_14_get_entry(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_sepool_15                                                       0x1800E73C
#define  MVDBLK_sepool_15_reg_addr                                               "0xB800E73C"
#define  MVDBLK_sepool_15_reg                                                    0xB800E73C
#define  MVDBLK_sepool_15_inst_addr                                              "0x0034"
#define  set_MVDBLK_sepool_15_reg(data)                                          (*((volatile unsigned int*)MVDBLK_sepool_15_reg)=data)
#define  get_MVDBLK_sepool_15_reg                                                (*((volatile unsigned int*)MVDBLK_sepool_15_reg))
#define  MVDBLK_sepool_15_entry_shift                                            (0)
#define  MVDBLK_sepool_15_entry_mask                                             (0xFFFFFFFF)
#define  MVDBLK_sepool_15_entry(data)                                            (0xFFFFFFFF&(data))
#define  MVDBLK_sepool_15_get_entry(data)                                        (0xFFFFFFFF&(data))

#define  MVDBLK_h264base                                                        0x1800E6C0
#define  MVDBLK_h264base_reg_addr                                                "0xB800E6C0"
#define  MVDBLK_h264base_reg                                                     0xB800E6C0
#define  MVDBLK_h264base_inst_addr                                               "0x0035"
#define  set_MVDBLK_h264base_reg(data)                                           (*((volatile unsigned int*)MVDBLK_h264base_reg)=data)
#define  get_MVDBLK_h264base_reg                                                 (*((volatile unsigned int*)MVDBLK_h264base_reg))
#define  MVDBLK_h264base_setnhavail_shift                                        (0)
#define  MVDBLK_h264base_setnhavail_mask                                         (0x00000001)
#define  MVDBLK_h264base_setnhavail(data)                                        (0x00000001&(data))
#define  MVDBLK_h264base_get_setnhavail(data)                                    (0x00000001&(data))

#define  MVDBLK_h264base1                                                       0x1800E6C4
#define  MVDBLK_h264base1_reg_addr                                               "0xB800E6C4"
#define  MVDBLK_h264base1_reg                                                    0xB800E6C4
#define  MVDBLK_h264base1_inst_addr                                              "0x0036"
#define  set_MVDBLK_h264base1_reg(data)                                          (*((volatile unsigned int*)MVDBLK_h264base1_reg)=data)
#define  get_MVDBLK_h264base1_reg                                                (*((volatile unsigned int*)MVDBLK_h264base1_reg))
#define  MVDBLK_h264base1_leftavail_shift                                        (3)
#define  MVDBLK_h264base1_topavail_shift                                         (2)
#define  MVDBLK_h264base1_toprightavail_shift                                    (1)
#define  MVDBLK_h264base1_topleftavail_shift                                     (0)
#define  MVDBLK_h264base1_leftavail_mask                                         (0x00000008)
#define  MVDBLK_h264base1_topavail_mask                                          (0x00000004)
#define  MVDBLK_h264base1_toprightavail_mask                                     (0x00000002)
#define  MVDBLK_h264base1_topleftavail_mask                                      (0x00000001)
#define  MVDBLK_h264base1_leftavail(data)                                        (0x00000008&((data)<<3))
#define  MVDBLK_h264base1_topavail(data)                                         (0x00000004&((data)<<2))
#define  MVDBLK_h264base1_toprightavail(data)                                    (0x00000002&((data)<<1))
#define  MVDBLK_h264base1_topleftavail(data)                                     (0x00000001&(data))
#define  MVDBLK_h264base1_get_leftavail(data)                                    ((0x00000008&(data))>>3)
#define  MVDBLK_h264base1_get_topavail(data)                                     ((0x00000004&(data))>>2)
#define  MVDBLK_h264base1_get_toprightavail(data)                                ((0x00000002&(data))>>1)
#define  MVDBLK_h264base1_get_topleftavail(data)                                 (0x00000001&(data))

#define  MVDBLK_dbg                                                             0x1800E6C8
#define  MVDBLK_dbg_reg_addr                                                     "0xB800E6C8"
#define  MVDBLK_dbg_reg                                                          0xB800E6C8
#define  MVDBLK_dbg_inst_addr                                                    "0x0037"
#define  set_MVDBLK_dbg_reg(data)                                                (*((volatile unsigned int*)MVDBLK_dbg_reg)=data)
#define  get_MVDBLK_dbg_reg                                                      (*((volatile unsigned int*)MVDBLK_dbg_reg))
#define  MVDBLK_dbg_genpulse_shift                                               (31)
#define  MVDBLK_dbg_piccount_shift                                               (16)
#define  MVDBLK_dbg_dbgctrl_shift                                                (13)
#define  MVDBLK_dbg_mbaddr_shift                                                 (0)
#define  MVDBLK_dbg_genpulse_mask                                                (0x80000000)
#define  MVDBLK_dbg_piccount_mask                                                (0x7FFF0000)
#define  MVDBLK_dbg_dbgctrl_mask                                                 (0x0000E000)
#define  MVDBLK_dbg_mbaddr_mask                                                  (0x00001FFF)
#define  MVDBLK_dbg_genpulse(data)                                               (0x80000000&((data)<<31))
#define  MVDBLK_dbg_piccount(data)                                               (0x7FFF0000&((data)<<16))
#define  MVDBLK_dbg_dbgctrl(data)                                                (0x0000E000&((data)<<13))
#define  MVDBLK_dbg_mbaddr(data)                                                 (0x00001FFF&(data))
#define  MVDBLK_dbg_get_genpulse(data)                                           ((0x80000000&(data))>>31)
#define  MVDBLK_dbg_get_piccount(data)                                           ((0x7FFF0000&(data))>>16)
#define  MVDBLK_dbg_get_dbgctrl(data)                                            ((0x0000E000&(data))>>13)
#define  MVDBLK_dbg_get_mbaddr(data)                                             (0x00001FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======MVDBLK register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  pictype:3;
        RBus_UInt32  firstmbofpic:1;
        RBus_UInt32  firstmbofslice:1;
    };
}mvdblk_comm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ldpxmemcount:16;
    };
}mvdblk_comm1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dbgdumpcount:16;
    };
}mvdblk_comm2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  setaddr:1;
        RBus_UInt32  mbaddry:7;
        RBus_UInt32  mbaddrx:7;
        RBus_UInt32  mbaddr:13;
    };
}mvdblk_comm3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  hwctrl:7;
        RBus_UInt32  softreset:1;
    };
}mvdblk_comm4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbgwritebuf:32;
    };
}mvdblk_comm5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dbgstorecount:16;
    };
}mvdblk_comm6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  refpiclist10short:1;
        RBus_UInt32  botletopabsdiffpoc:1;
        RBus_UInt32  directspatial:1;
        RBus_UInt32  colpicstruct:2;
        RBus_UInt32  currpicstruct:2;
        RBus_UInt32  direct8x8inf:1;
    };
}mvdblk_h264pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  currfrmpoc:32;
    };
}mvdblk_h264pic1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  currtoppoc:32;
    };
}mvdblk_h264pic2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  currbotpoc:32;
    };
}mvdblk_h264pic3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  comem8x8:4;
    };
}mvdblk_h264co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stcomemsaddr:32;
    };
}mvdblk_h264co1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbaffaddr:1;
        RBus_UInt32  ldcomemsaddr:31;
    };
}mvdblk_h264co2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enableldcomem1:1;
        RBus_UInt32  ldcomemsaddr1:31;
    };
}mvdblk_h264co3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  autoldstoff:1;
        RBus_UInt32  initnhmemcmd:1;
        RBus_UInt32  ldnhmemcmd:1;
        RBus_UInt32  stnhmemcmd:1;
    };
}mvdblk_h264nh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stnhmemsaddr:32;
    };
}mvdblk_h264nh1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldnhmemsaddr:32;
    };
}mvdblk_h264nh2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stsaddr:32;
    };
}mvdblk_hevcsao_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldsaddr:32;
    };
}mvdblk_hevcsao1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  forceintmv:1;
        RBus_UInt32  hwctrl:16;
    };
}mvdblk_av1pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  addr:8;
        RBus_UInt32  read:1;
        RBus_UInt32  write:1;
    };
}mvdblk_indrbus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  hwctrl:8;
        RBus_UInt32  scenerefenableflag:1;
        RBus_UInt32  pmvrenableflag:1;
        RBus_UInt32  refpicnumminus1:3;
    };
}mvdblk_avs2pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  delta:2;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  b16384divblockdist:15;
    };
}mvdblk_avs2list7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  entry:32;
    };
}mvdblk_sepool_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  setnhavail:1;
    };
}mvdblk_h264base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  leftavail:1;
        RBus_UInt32  topavail:1;
        RBus_UInt32  toprightavail:1;
        RBus_UInt32  topleftavail:1;
    };
}mvdblk_h264base1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  genpulse:1;
        RBus_UInt32  piccount:15;
        RBus_UInt32  dbgctrl:3;
        RBus_UInt32  mbaddr:13;
    };
}mvdblk_dbg_RBUS;

#else //apply LITTLE_ENDIAN

//======MVDBLK register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  firstmbofslice:1;
        RBus_UInt32  firstmbofpic:1;
        RBus_UInt32  pictype:3;
        RBus_UInt32  res1:27;
    };
}mvdblk_comm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldpxmemcount:16;
        RBus_UInt32  res1:16;
    };
}mvdblk_comm1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbgdumpcount:16;
        RBus_UInt32  res1:16;
    };
}mvdblk_comm2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbaddr:13;
        RBus_UInt32  mbaddrx:7;
        RBus_UInt32  mbaddry:7;
        RBus_UInt32  setaddr:1;
        RBus_UInt32  res1:4;
    };
}mvdblk_comm3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  softreset:1;
        RBus_UInt32  hwctrl:7;
        RBus_UInt32  res1:24;
    };
}mvdblk_comm4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbgwritebuf:32;
    };
}mvdblk_comm5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbgstorecount:16;
        RBus_UInt32  res1:16;
    };
}mvdblk_comm6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  direct8x8inf:1;
        RBus_UInt32  currpicstruct:2;
        RBus_UInt32  colpicstruct:2;
        RBus_UInt32  directspatial:1;
        RBus_UInt32  botletopabsdiffpoc:1;
        RBus_UInt32  refpiclist10short:1;
        RBus_UInt32  res1:24;
    };
}mvdblk_h264pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  currfrmpoc:32;
    };
}mvdblk_h264pic1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  currtoppoc:32;
    };
}mvdblk_h264pic2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  currbotpoc:32;
    };
}mvdblk_h264pic3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comem8x8:4;
        RBus_UInt32  res1:28;
    };
}mvdblk_h264co_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stcomemsaddr:32;
    };
}mvdblk_h264co1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr:31;
        RBus_UInt32  mbaffaddr:1;
    };
}mvdblk_h264co2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldcomemsaddr1:31;
        RBus_UInt32  enableldcomem1:1;
    };
}mvdblk_h264co3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stnhmemcmd:1;
        RBus_UInt32  ldnhmemcmd:1;
        RBus_UInt32  initnhmemcmd:1;
        RBus_UInt32  autoldstoff:1;
        RBus_UInt32  res1:28;
    };
}mvdblk_h264nh_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stnhmemsaddr:32;
    };
}mvdblk_h264nh1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldnhmemsaddr:32;
    };
}mvdblk_h264nh2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  stsaddr:32;
    };
}mvdblk_hevcsao_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldsaddr:32;
    };
}mvdblk_hevcsao1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hwctrl:16;
        RBus_UInt32  forceintmv:1;
        RBus_UInt32  res1:15;
    };
}mvdblk_av1pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write:1;
        RBus_UInt32  read:1;
        RBus_UInt32  addr:8;
        RBus_UInt32  res1:22;
    };
}mvdblk_indrbus_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dat:32;
    };
}mvdblk_indrbus3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  refpicnumminus1:3;
        RBus_UInt32  pmvrenableflag:1;
        RBus_UInt32  scenerefenableflag:1;
        RBus_UInt32  hwctrl:8;
        RBus_UInt32  res1:19;
    };
}mvdblk_avs2pic_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  b16384divblockdist:15;
        RBus_UInt32  res1:1;
        RBus_UInt32  blockdist:9;
        RBus_UInt32  delta:2;
        RBus_UInt32  res2:5;
    };
}mvdblk_avs2list7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  entry:32;
    };
}mvdblk_sepool_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setnhavail:1;
        RBus_UInt32  res1:31;
    };
}mvdblk_h264base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  topleftavail:1;
        RBus_UInt32  toprightavail:1;
        RBus_UInt32  topavail:1;
        RBus_UInt32  leftavail:1;
        RBus_UInt32  res1:28;
    };
}mvdblk_h264base1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbaddr:13;
        RBus_UInt32  dbgctrl:3;
        RBus_UInt32  piccount:15;
        RBus_UInt32  genpulse:1;
    };
}mvdblk_dbg_RBUS;




#endif 


#endif 
