/**
* @file Merlin5_MEMC_KME_ME1_TOP6
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME1_TOP6_REG_H_
#define _RBUS_KME_ME1_TOP6_REG_H_

#include "rbus_types.h"



//  KME_ME1_TOP6 Register Address
#define  KME_ME1_TOP6_KME_ME1_TOP6_00                                           0x1809C900
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_reg_addr                                   "0xB809C900"
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_reg                                        0xB809C900
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_inst_addr                                  "0x0000"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_00_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_00_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_00_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_00_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_me1_statis_vact_shift                      (9)
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_me1_statis_hact_shift                      (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_me1_statis_vact_mask                       (0x0003FE00)
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_me1_statis_hact_mask                       (0x000001FF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_me1_statis_vact(data)                      (0x0003FE00&((data)<<9))
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_me1_statis_hact(data)                      (0x000001FF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_get_me1_statis_vact(data)                  ((0x0003FE00&(data))>>9)
#define  KME_ME1_TOP6_KME_ME1_TOP6_00_get_me1_statis_hact(data)                  (0x000001FF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_04                                           0x1809C904
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_reg_addr                                   "0xB809C904"
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_reg                                        0xB809C904
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_inst_addr                                  "0x0001"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_04_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_04_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_04_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_04_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_prd_loop_shift                  (22)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_bv_act_loop_shift               (20)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_bv_cnt_loop_shift               (18)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_pan_loop_shift                  (16)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_zmv_loop_shift                  (14)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_scss_loop_shift                 (12)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_sad_loop_shift                  (10)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_dtl_loop_shift                  (8)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_dtl_mode_shift                  (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_prd_loop_mask                   (0x00C00000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_bv_act_loop_mask                (0x00300000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_bv_cnt_loop_mask                (0x000C0000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_pan_loop_mask                   (0x00030000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_zmv_loop_mask                   (0x0000C000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_scss_loop_mask                  (0x00003000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_sad_loop_mask                   (0x00000C00)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_dtl_loop_mask                   (0x00000300)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_dtl_mode_mask                   (0x00000003)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_prd_loop(data)                  (0x00C00000&((data)<<22))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_bv_act_loop(data)               (0x00300000&((data)<<20))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_bv_cnt_loop(data)               (0x000C0000&((data)<<18))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_pan_loop(data)                  (0x00030000&((data)<<16))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_zmv_loop(data)                  (0x0000C000&((data)<<14))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_scss_loop(data)                 (0x00003000&((data)<<12))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_sad_loop(data)                  (0x00000C00&((data)<<10))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_dtl_loop(data)                  (0x00000300&((data)<<8))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_me1_statis_dtl_mode(data)                  (0x00000003&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_prd_loop(data)              ((0x00C00000&(data))>>22)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_bv_act_loop(data)           ((0x00300000&(data))>>20)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_bv_cnt_loop(data)           ((0x000C0000&(data))>>18)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_pan_loop(data)              ((0x00030000&(data))>>16)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_zmv_loop(data)              ((0x0000C000&(data))>>14)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_scss_loop(data)             ((0x00003000&(data))>>12)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_sad_loop(data)              ((0x00000C00&(data))>>10)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_dtl_loop(data)              ((0x00000300&(data))>>8)
#define  KME_ME1_TOP6_KME_ME1_TOP6_04_get_me1_statis_dtl_mode(data)              (0x00000003&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_08                                           0x1809C908
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_reg_addr                                   "0xB809C908"
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_reg                                        0xB809C908
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_inst_addr                                  "0x0002"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_08_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_08_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_08_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_08_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_mvy_th2_shift                   (18)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_mvy_th1_shift                   (8)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_zmv_dtl_th_shift                (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_mvy_th2_mask                    (0x0FFC0000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_mvy_th1_mask                    (0x0003FF00)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_zmv_dtl_th_mask                 (0x000000FF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_mvy_th2(data)                   (0x0FFC0000&((data)<<18))
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_mvy_th1(data)                   (0x0003FF00&((data)<<8))
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_me1_statis_zmv_dtl_th(data)                (0x000000FF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_get_me1_statis_mvy_th2(data)               ((0x0FFC0000&(data))>>18)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_get_me1_statis_mvy_th1(data)               ((0x0003FF00&(data))>>8)
#define  KME_ME1_TOP6_KME_ME1_TOP6_08_get_me1_statis_zmv_dtl_th(data)            (0x000000FF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_0C                                           0x1809C90C
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_reg_addr                                   "0xB809C90C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_reg                                        0xB809C90C
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_inst_addr                                  "0x0003"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_0C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_0C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_0C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_0C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_dtl_th_shift                    (20)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_mvy_th4_shift                   (10)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_mvy_th3_shift                   (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_dtl_th_mask                     (0x0FF00000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_mvy_th4_mask                    (0x000FFC00)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_mvy_th3_mask                    (0x000003FF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_dtl_th(data)                    (0x0FF00000&((data)<<20))
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_mvy_th4(data)                   (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_me1_statis_mvy_th3(data)                   (0x000003FF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_get_me1_statis_dtl_th(data)                ((0x0FF00000&(data))>>20)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_get_me1_statis_mvy_th4(data)               ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP6_KME_ME1_TOP6_0C_get_me1_statis_mvy_th3(data)               (0x000003FF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_10                                           0x1809C910
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_reg_addr                                   "0xB809C910"
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_reg                                        0xB809C910
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_inst_addr                                  "0x0004"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_10_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_10_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_10_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_10_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_vh_ratio_shift                  (27)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_hv_ratio_shift                  (22)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_vpan_th_shift                   (11)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_hpan_th_shift                   (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_vh_ratio_mask                   (0xF8000000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_hv_ratio_mask                   (0x07C00000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_vpan_th_mask                    (0x003FF800)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_hpan_th_mask                    (0x000007FF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_vh_ratio(data)                  (0xF8000000&((data)<<27))
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_hv_ratio(data)                  (0x07C00000&((data)<<22))
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_vpan_th(data)                   (0x003FF800&((data)<<11))
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_me1_statis_hpan_th(data)                   (0x000007FF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_get_me1_statis_vh_ratio(data)              ((0xF8000000&(data))>>27)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_get_me1_statis_hv_ratio(data)              ((0x07C00000&(data))>>22)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_get_me1_statis_vpan_th(data)               ((0x003FF800&(data))>>11)
#define  KME_ME1_TOP6_KME_ME1_TOP6_10_get_me1_statis_hpan_th(data)               (0x000007FF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_14                                           0x1809C914
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_reg_addr                                   "0xB809C914"
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_reg                                        0xB809C914
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_inst_addr                                  "0x0005"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_14_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_14_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_14_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_14_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_tc_dtl_th_shift                 (24)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_zrmv_ucf_th_shift               (12)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_zrmv_cnt_th_shift               (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_tc_dtl_th_mask                  (0xFF000000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_zrmv_ucf_th_mask                (0x00FFF000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_zrmv_cnt_th_mask                (0x00000FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_tc_dtl_th(data)                 (0xFF000000&((data)<<24))
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_zrmv_ucf_th(data)               (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_me1_statis_zrmv_cnt_th(data)               (0x00000FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_get_me1_statis_tc_dtl_th(data)             ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_get_me1_statis_zrmv_ucf_th(data)           ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP6_KME_ME1_TOP6_14_get_me1_statis_zrmv_cnt_th(data)           (0x00000FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_18                                           0x1809C918
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_reg_addr                                   "0xB809C918"
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_reg                                        0xB809C918
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_inst_addr                                  "0x0006"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_18_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_18_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_18_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_18_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_th_shift                 (16)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_ycoef_shift              (8)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_xcoef_shift              (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_th_mask                  (0xFFFF0000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_ycoef_mask               (0x0000FF00)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_xcoef_mask               (0x000000FF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_th(data)                 (0xFFFF0000&((data)<<16))
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_ycoef(data)              (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_me1_statis_bv_act_xcoef(data)              (0x000000FF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_get_me1_statis_bv_act_th(data)             ((0xFFFF0000&(data))>>16)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_get_me1_statis_bv_act_ycoef(data)          ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP6_KME_ME1_TOP6_18_get_me1_statis_bv_act_xcoef(data)          (0x000000FF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_1C                                           0x1809C91C
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_reg_addr                                   "0xB809C91C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_reg                                        0xB809C91C
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_inst_addr                                  "0x0007"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_1C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_1C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_1C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_1C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_me1_statis_zmv_sad_ac_pnt_shift            (16)
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_me1_statis_zmv_sad_dc_pnt_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_me1_statis_zmv_sad_ac_pnt_mask             (0x3FFF0000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_me1_statis_zmv_sad_dc_pnt_mask             (0x00003FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_me1_statis_zmv_sad_ac_pnt(data)            (0x3FFF0000&((data)<<16))
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_me1_statis_zmv_sad_dc_pnt(data)            (0x00003FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_get_me1_statis_zmv_sad_ac_pnt(data)        ((0x3FFF0000&(data))>>16)
#define  KME_ME1_TOP6_KME_ME1_TOP6_1C_get_me1_statis_zmv_sad_dc_pnt(data)        (0x00003FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_20                                           0x1809C920
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_reg_addr                                   "0xB809C920"
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_reg                                        0xB809C920
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_inst_addr                                  "0x0008"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_20_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_20_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_20_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_20_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th3_shift                  (20)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th2_shift                  (10)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th1_shift                  (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th3_mask                   (0x3FF00000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th2_mask                   (0x000FFC00)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th1_mask                   (0x000003FF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th3(data)                  (0x3FF00000&((data)<<20))
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th2(data)                  (0x000FFC00&((data)<<10))
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_me1_statis_tcss_th1(data)                  (0x000003FF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_get_me1_statis_tcss_th3(data)              ((0x3FF00000&(data))>>20)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_get_me1_statis_tcss_th2(data)              ((0x000FFC00&(data))>>10)
#define  KME_ME1_TOP6_KME_ME1_TOP6_20_get_me1_statis_tcss_th1(data)              (0x000003FF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_34                                           0x1809C934
#define  KME_ME1_TOP6_KME_ME1_TOP6_34_reg_addr                                   "0xB809C934"
#define  KME_ME1_TOP6_KME_ME1_TOP6_34_reg                                        0xB809C934
#define  KME_ME1_TOP6_KME_ME1_TOP6_34_inst_addr                                  "0x0009"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_34_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_34_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_34_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_34_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_34_regr_me1_statis_glb_ac_sad_shift           (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_34_regr_me1_statis_glb_ac_sad_mask            (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_34_regr_me1_statis_glb_ac_sad(data)           (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_34_get_regr_me1_statis_glb_ac_sad(data)       (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_38                                           0x1809C938
#define  KME_ME1_TOP6_KME_ME1_TOP6_38_reg_addr                                   "0xB809C938"
#define  KME_ME1_TOP6_KME_ME1_TOP6_38_reg                                        0xB809C938
#define  KME_ME1_TOP6_KME_ME1_TOP6_38_inst_addr                                  "0x000A"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_38_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_38_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_38_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_38_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_38_regr_me1_statis_glb_prd_shift              (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_38_regr_me1_statis_glb_prd_mask               (0x0007FFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_38_regr_me1_statis_glb_prd(data)              (0x0007FFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_38_get_regr_me1_statis_glb_prd(data)          (0x0007FFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_3C                                           0x1809C93C
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_reg_addr                                   "0xB809C93C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_reg                                        0xB809C93C
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_inst_addr                                  "0x000B"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_3C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_3C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_3C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_3C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_regr_me1_statis_rgn01_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_regr_me1_statis_rgn00_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_regr_me1_statis_rgn01_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_regr_me1_statis_rgn00_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_regr_me1_statis_rgn01_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_regr_me1_statis_rgn00_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_get_regr_me1_statis_rgn01_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_3C_get_regr_me1_statis_rgn00_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_40                                           0x1809C940
#define  KME_ME1_TOP6_KME_ME1_TOP6_40_reg_addr                                   "0xB809C940"
#define  KME_ME1_TOP6_KME_ME1_TOP6_40_reg                                        0xB809C940
#define  KME_ME1_TOP6_KME_ME1_TOP6_40_inst_addr                                  "0x000C"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_40_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_40_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_40_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_40_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_40_regr_me1_statis_zmv_cnt_shift              (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_40_regr_me1_statis_zmv_cnt_mask               (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_40_regr_me1_statis_zmv_cnt(data)              (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_40_get_regr_me1_statis_zmv_cnt(data)          (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_44                                           0x1809C944
#define  KME_ME1_TOP6_KME_ME1_TOP6_44_reg_addr                                   "0xB809C944"
#define  KME_ME1_TOP6_KME_ME1_TOP6_44_reg                                        0xB809C944
#define  KME_ME1_TOP6_KME_ME1_TOP6_44_inst_addr                                  "0x000D"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_44_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_44_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_44_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_44_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_44_regr_me1_statis_zmv_dtl_shift              (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_44_regr_me1_statis_zmv_dtl_mask               (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_44_regr_me1_statis_zmv_dtl(data)              (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_44_get_regr_me1_statis_zmv_dtl(data)          (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_48                                           0x1809C948
#define  KME_ME1_TOP6_KME_ME1_TOP6_48_reg_addr                                   "0xB809C948"
#define  KME_ME1_TOP6_KME_ME1_TOP6_48_reg                                        0xB809C948
#define  KME_ME1_TOP6_KME_ME1_TOP6_48_inst_addr                                  "0x000E"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_48_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_48_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_48_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_48_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_48_regr_me1_statis_bvy_pcnt0_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_48_regr_me1_statis_bvy_pcnt0_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_48_regr_me1_statis_bvy_pcnt0(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_48_get_regr_me1_statis_bvy_pcnt0(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_4C                                           0x1809C94C
#define  KME_ME1_TOP6_KME_ME1_TOP6_4C_reg_addr                                   "0xB809C94C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_4C_reg                                        0xB809C94C
#define  KME_ME1_TOP6_KME_ME1_TOP6_4C_inst_addr                                  "0x000F"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_4C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_4C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_4C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_4C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_4C_regr_me1_statis_bvy_pcnt1_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_4C_regr_me1_statis_bvy_pcnt1_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_4C_regr_me1_statis_bvy_pcnt1(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_4C_get_regr_me1_statis_bvy_pcnt1(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_50                                           0x1809C950
#define  KME_ME1_TOP6_KME_ME1_TOP6_50_reg_addr                                   "0xB809C950"
#define  KME_ME1_TOP6_KME_ME1_TOP6_50_reg                                        0xB809C950
#define  KME_ME1_TOP6_KME_ME1_TOP6_50_inst_addr                                  "0x0010"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_50_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_50_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_50_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_50_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_50_regr_me1_statis_bvy_pcnt2_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_50_regr_me1_statis_bvy_pcnt2_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_50_regr_me1_statis_bvy_pcnt2(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_50_get_regr_me1_statis_bvy_pcnt2(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_54                                           0x1809C954
#define  KME_ME1_TOP6_KME_ME1_TOP6_54_reg_addr                                   "0xB809C954"
#define  KME_ME1_TOP6_KME_ME1_TOP6_54_reg                                        0xB809C954
#define  KME_ME1_TOP6_KME_ME1_TOP6_54_inst_addr                                  "0x0011"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_54_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_54_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_54_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_54_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_54_regr_me1_statis_bvy_pcnt3_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_54_regr_me1_statis_bvy_pcnt3_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_54_regr_me1_statis_bvy_pcnt3(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_54_get_regr_me1_statis_bvy_pcnt3(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_58                                           0x1809C958
#define  KME_ME1_TOP6_KME_ME1_TOP6_58_reg_addr                                   "0xB809C958"
#define  KME_ME1_TOP6_KME_ME1_TOP6_58_reg                                        0xB809C958
#define  KME_ME1_TOP6_KME_ME1_TOP6_58_inst_addr                                  "0x0012"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_58_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_58_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_58_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_58_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_58_regr_me1_statis_bvy_ncnt0_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_58_regr_me1_statis_bvy_ncnt0_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_58_regr_me1_statis_bvy_ncnt0(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_58_get_regr_me1_statis_bvy_ncnt0(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_5C                                           0x1809C95C
#define  KME_ME1_TOP6_KME_ME1_TOP6_5C_reg_addr                                   "0xB809C95C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_5C_reg                                        0xB809C95C
#define  KME_ME1_TOP6_KME_ME1_TOP6_5C_inst_addr                                  "0x0013"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_5C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_5C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_5C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_5C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_5C_regr_me1_statis_bvy_ncnt1_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_5C_regr_me1_statis_bvy_ncnt1_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_5C_regr_me1_statis_bvy_ncnt1(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_5C_get_regr_me1_statis_bvy_ncnt1(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_60                                           0x1809C960
#define  KME_ME1_TOP6_KME_ME1_TOP6_60_reg_addr                                   "0xB809C960"
#define  KME_ME1_TOP6_KME_ME1_TOP6_60_reg                                        0xB809C960
#define  KME_ME1_TOP6_KME_ME1_TOP6_60_inst_addr                                  "0x0014"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_60_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_60_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_60_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_60_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_60_regr_me1_statis_bvy_ncnt2_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_60_regr_me1_statis_bvy_ncnt2_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_60_regr_me1_statis_bvy_ncnt2(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_60_get_regr_me1_statis_bvy_ncnt2(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_64                                           0x1809C964
#define  KME_ME1_TOP6_KME_ME1_TOP6_64_reg_addr                                   "0xB809C964"
#define  KME_ME1_TOP6_KME_ME1_TOP6_64_reg                                        0xB809C964
#define  KME_ME1_TOP6_KME_ME1_TOP6_64_inst_addr                                  "0x0015"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_64_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_64_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_64_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_64_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_64_regr_me1_statis_bvy_ncnt3_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_64_regr_me1_statis_bvy_ncnt3_mask             (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_64_regr_me1_statis_bvy_ncnt3(data)            (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_64_get_regr_me1_statis_bvy_ncnt3(data)        (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_68                                           0x1809C968
#define  KME_ME1_TOP6_KME_ME1_TOP6_68_reg_addr                                   "0xB809C968"
#define  KME_ME1_TOP6_KME_ME1_TOP6_68_reg                                        0xB809C968
#define  KME_ME1_TOP6_KME_ME1_TOP6_68_inst_addr                                  "0x0016"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_68_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_68_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_68_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_68_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_68_regr_me1_statis_dtl_th_sum_shift           (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_68_regr_me1_statis_dtl_th_sum_mask            (0x0FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_68_regr_me1_statis_dtl_th_sum(data)           (0x0FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_68_get_regr_me1_statis_dtl_th_sum(data)       (0x0FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_6C                                           0x1809C96C
#define  KME_ME1_TOP6_KME_ME1_TOP6_6C_reg_addr                                   "0xB809C96C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_6C_reg                                        0xB809C96C
#define  KME_ME1_TOP6_KME_ME1_TOP6_6C_inst_addr                                  "0x0017"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_6C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_6C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_6C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_6C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_6C_regr_me1_statis_dtl_th_cnt_shift           (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_6C_regr_me1_statis_dtl_th_cnt_mask            (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_6C_regr_me1_statis_dtl_th_cnt(data)           (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_6C_get_regr_me1_statis_dtl_th_cnt(data)       (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_70                                           0x1809C970
#define  KME_ME1_TOP6_KME_ME1_TOP6_70_reg_addr                                   "0xB809C970"
#define  KME_ME1_TOP6_KME_ME1_TOP6_70_reg                                        0xB809C970
#define  KME_ME1_TOP6_KME_ME1_TOP6_70_inst_addr                                  "0x0018"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_70_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_70_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_70_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_70_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_70_regr_me1_statis_hpan_cnt_shift             (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_70_regr_me1_statis_hpan_cnt_mask              (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_70_regr_me1_statis_hpan_cnt(data)             (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_70_get_regr_me1_statis_hpan_cnt(data)         (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_74                                           0x1809C974
#define  KME_ME1_TOP6_KME_ME1_TOP6_74_reg_addr                                   "0xB809C974"
#define  KME_ME1_TOP6_KME_ME1_TOP6_74_reg                                        0xB809C974
#define  KME_ME1_TOP6_KME_ME1_TOP6_74_inst_addr                                  "0x0019"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_74_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_74_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_74_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_74_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_74_regr_me1_statis_vpan_cnt_shift             (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_74_regr_me1_statis_vpan_cnt_mask              (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_74_regr_me1_statis_vpan_cnt(data)             (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_74_get_regr_me1_statis_vpan_cnt(data)         (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_78                                           0x1809C978
#define  KME_ME1_TOP6_KME_ME1_TOP6_78_reg_addr                                   "0xB809C978"
#define  KME_ME1_TOP6_KME_ME1_TOP6_78_reg                                        0xB809C978
#define  KME_ME1_TOP6_KME_ME1_TOP6_78_inst_addr                                  "0x001A"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_78_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_78_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_78_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_78_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_78_regr_me1_statis_zgmv_cnt_shift             (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_78_regr_me1_statis_zgmv_cnt_mask              (0x0000003F)
#define  KME_ME1_TOP6_KME_ME1_TOP6_78_regr_me1_statis_zgmv_cnt(data)             (0x0000003F&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_78_get_regr_me1_statis_zgmv_cnt(data)         (0x0000003F&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_7C                                           0x1809C97C
#define  KME_ME1_TOP6_KME_ME1_TOP6_7C_reg_addr                                   "0xB809C97C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_7C_reg                                        0xB809C97C
#define  KME_ME1_TOP6_KME_ME1_TOP6_7C_inst_addr                                  "0x001B"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_7C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_7C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_7C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_7C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_7C_regr_me1_statis_bv_act_cnt_shift           (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_7C_regr_me1_statis_bv_act_cnt_mask            (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_7C_regr_me1_statis_bv_act_cnt(data)           (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_7C_get_regr_me1_statis_bv_act_cnt(data)       (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_80                                           0x1809C980
#define  KME_ME1_TOP6_KME_ME1_TOP6_80_reg_addr                                   "0xB809C980"
#define  KME_ME1_TOP6_KME_ME1_TOP6_80_reg                                        0xB809C980
#define  KME_ME1_TOP6_KME_ME1_TOP6_80_inst_addr                                  "0x001C"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_80_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_80_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_80_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_80_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_80_regr_me1_statis_zmv_sad_dc_cnt_shift       (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_80_regr_me1_statis_zmv_sad_dc_cnt_mask        (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_80_regr_me1_statis_zmv_sad_dc_cnt(data)       (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_80_get_regr_me1_statis_zmv_sad_dc_cnt(data)   (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_84                                           0x1809C984
#define  KME_ME1_TOP6_KME_ME1_TOP6_84_reg_addr                                   "0xB809C984"
#define  KME_ME1_TOP6_KME_ME1_TOP6_84_reg                                        0xB809C984
#define  KME_ME1_TOP6_KME_ME1_TOP6_84_inst_addr                                  "0x001D"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_84_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_84_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_84_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_84_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_84_regr_me1_statis_zmv_sad_ac_cnt_shift       (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_84_regr_me1_statis_zmv_sad_ac_cnt_mask        (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_84_regr_me1_statis_zmv_sad_ac_cnt(data)       (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_84_get_regr_me1_statis_zmv_sad_ac_cnt(data)   (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_88                                           0x1809C988
#define  KME_ME1_TOP6_KME_ME1_TOP6_88_reg_addr                                   "0xB809C988"
#define  KME_ME1_TOP6_KME_ME1_TOP6_88_reg                                        0xB809C988
#define  KME_ME1_TOP6_KME_ME1_TOP6_88_inst_addr                                  "0x001E"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_88_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_88_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_88_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_88_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_88_regr_me1_statis_zmv_sad_dc_sum_shift       (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_88_regr_me1_statis_zmv_sad_dc_sum_mask        (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_88_regr_me1_statis_zmv_sad_dc_sum(data)       (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_88_get_regr_me1_statis_zmv_sad_dc_sum(data)   (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_8C                                           0x1809C98C
#define  KME_ME1_TOP6_KME_ME1_TOP6_8C_reg_addr                                   "0xB809C98C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_8C_reg                                        0xB809C98C
#define  KME_ME1_TOP6_KME_ME1_TOP6_8C_inst_addr                                  "0x001F"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_8C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_8C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_8C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_8C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_8C_regr_me1_statis_zmv_sad_ac_sum_shift       (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_8C_regr_me1_statis_zmv_sad_ac_sum_mask        (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_8C_regr_me1_statis_zmv_sad_ac_sum(data)       (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_8C_get_regr_me1_statis_zmv_sad_ac_sum(data)   (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_90                                           0x1809C990
#define  KME_ME1_TOP6_KME_ME1_TOP6_90_reg_addr                                   "0xB809C990"
#define  KME_ME1_TOP6_KME_ME1_TOP6_90_reg                                        0xB809C990
#define  KME_ME1_TOP6_KME_ME1_TOP6_90_inst_addr                                  "0x0020"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_90_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_90_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_90_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_90_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_90_regr_me1_statis_tcss_th_cnt1_shift         (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_90_regr_me1_statis_tcss_th_cnt1_mask          (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_90_regr_me1_statis_tcss_th_cnt1(data)         (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_90_get_regr_me1_statis_tcss_th_cnt1(data)     (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_94                                           0x1809C994
#define  KME_ME1_TOP6_KME_ME1_TOP6_94_reg_addr                                   "0xB809C994"
#define  KME_ME1_TOP6_KME_ME1_TOP6_94_reg                                        0xB809C994
#define  KME_ME1_TOP6_KME_ME1_TOP6_94_inst_addr                                  "0x0021"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_94_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_94_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_94_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_94_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_94_regr_me1_statis_tcss_th_cnt2_shift         (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_94_regr_me1_statis_tcss_th_cnt2_mask          (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_94_regr_me1_statis_tcss_th_cnt2(data)         (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_94_get_regr_me1_statis_tcss_th_cnt2(data)     (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_98                                           0x1809C998
#define  KME_ME1_TOP6_KME_ME1_TOP6_98_reg_addr                                   "0xB809C998"
#define  KME_ME1_TOP6_KME_ME1_TOP6_98_reg                                        0xB809C998
#define  KME_ME1_TOP6_KME_ME1_TOP6_98_inst_addr                                  "0x0022"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_98_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_98_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_98_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_98_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_98_regr_me1_statis_tcss_th_cnt3_shift         (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_98_regr_me1_statis_tcss_th_cnt3_mask          (0x000FFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_98_regr_me1_statis_tcss_th_cnt3(data)         (0x000FFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_98_get_regr_me1_statis_tcss_th_cnt3(data)     (0x000FFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_9C                                           0x1809C99C
#define  KME_ME1_TOP6_KME_ME1_TOP6_9C_reg_addr                                   "0xB809C99C"
#define  KME_ME1_TOP6_KME_ME1_TOP6_9C_reg                                        0xB809C99C
#define  KME_ME1_TOP6_KME_ME1_TOP6_9C_inst_addr                                  "0x0023"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_9C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_9C_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_9C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_9C_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_9C_regr_me1_statis_tcss_th_sum1_shift         (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_9C_regr_me1_statis_tcss_th_sum1_mask          (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_9C_regr_me1_statis_tcss_th_sum1(data)         (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_9C_get_regr_me1_statis_tcss_th_sum1(data)     (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_A0                                           0x1809C9A0
#define  KME_ME1_TOP6_KME_ME1_TOP6_A0_reg_addr                                   "0xB809C9A0"
#define  KME_ME1_TOP6_KME_ME1_TOP6_A0_reg                                        0xB809C9A0
#define  KME_ME1_TOP6_KME_ME1_TOP6_A0_inst_addr                                  "0x0024"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_A0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_A0_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_A0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_A0_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_A0_regr_me1_statis_tcss_th_sum2_shift         (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A0_regr_me1_statis_tcss_th_sum2_mask          (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A0_regr_me1_statis_tcss_th_sum2(data)         (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_A0_get_regr_me1_statis_tcss_th_sum2(data)     (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_A4                                           0x1809C9A4
#define  KME_ME1_TOP6_KME_ME1_TOP6_A4_reg_addr                                   "0xB809C9A4"
#define  KME_ME1_TOP6_KME_ME1_TOP6_A4_reg                                        0xB809C9A4
#define  KME_ME1_TOP6_KME_ME1_TOP6_A4_inst_addr                                  "0x0025"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_A4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_A4_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_A4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_A4_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_A4_regr_me1_statis_tcss_th_sum3_shift         (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A4_regr_me1_statis_tcss_th_sum3_mask          (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A4_regr_me1_statis_tcss_th_sum3(data)         (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_A4_get_regr_me1_statis_tcss_th_sum3(data)     (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_A8                                           0x1809C9A8
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_reg_addr                                   "0xB809C9A8"
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_reg                                        0xB809C9A8
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_inst_addr                                  "0x0026"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_A8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_A8_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_A8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_A8_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_regr_me1_statis_rgn03_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_regr_me1_statis_rgn02_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_regr_me1_statis_rgn03_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_regr_me1_statis_rgn02_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_regr_me1_statis_rgn03_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_regr_me1_statis_rgn02_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_get_regr_me1_statis_rgn03_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_A8_get_regr_me1_statis_rgn02_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_AC                                           0x1809C9AC
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_reg_addr                                   "0xB809C9AC"
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_reg                                        0xB809C9AC
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_inst_addr                                  "0x0027"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_AC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_AC_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_AC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_AC_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_regr_me1_statis_rgn05_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_regr_me1_statis_rgn04_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_regr_me1_statis_rgn05_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_regr_me1_statis_rgn04_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_regr_me1_statis_rgn05_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_regr_me1_statis_rgn04_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_get_regr_me1_statis_rgn05_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_AC_get_regr_me1_statis_rgn04_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_B0                                           0x1809C9B0
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_reg_addr                                   "0xB809C9B0"
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_reg                                        0xB809C9B0
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_inst_addr                                  "0x0028"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_B0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_B0_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_B0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_B0_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_regr_me1_statis_rgn07_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_regr_me1_statis_rgn06_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_regr_me1_statis_rgn07_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_regr_me1_statis_rgn06_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_regr_me1_statis_rgn07_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_regr_me1_statis_rgn06_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_get_regr_me1_statis_rgn07_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B0_get_regr_me1_statis_rgn06_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_B4                                           0x1809C9B4
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_reg_addr                                   "0xB809C9B4"
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_reg                                        0xB809C9B4
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_inst_addr                                  "0x0029"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_B4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_B4_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_B4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_B4_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_regr_me1_statis_rgn09_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_regr_me1_statis_rgn08_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_regr_me1_statis_rgn09_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_regr_me1_statis_rgn08_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_regr_me1_statis_rgn09_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_regr_me1_statis_rgn08_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_get_regr_me1_statis_rgn09_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B4_get_regr_me1_statis_rgn08_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_B8                                           0x1809C9B8
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_reg_addr                                   "0xB809C9B8"
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_reg                                        0xB809C9B8
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_inst_addr                                  "0x002A"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_B8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_B8_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_B8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_B8_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_regr_me1_statis_rgn11_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_regr_me1_statis_rgn10_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_regr_me1_statis_rgn11_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_regr_me1_statis_rgn10_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_regr_me1_statis_rgn11_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_regr_me1_statis_rgn10_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_get_regr_me1_statis_rgn11_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_B8_get_regr_me1_statis_rgn10_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_BC                                           0x1809C9BC
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_reg_addr                                   "0xB809C9BC"
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_reg                                        0xB809C9BC
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_inst_addr                                  "0x002B"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_BC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_BC_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_BC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_BC_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_regr_me1_statis_rgn13_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_regr_me1_statis_rgn12_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_regr_me1_statis_rgn13_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_regr_me1_statis_rgn12_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_regr_me1_statis_rgn13_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_regr_me1_statis_rgn12_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_get_regr_me1_statis_rgn13_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_BC_get_regr_me1_statis_rgn12_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_C0                                           0x1809C9C0
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_reg_addr                                   "0xB809C9C0"
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_reg                                        0xB809C9C0
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_inst_addr                                  "0x002C"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_C0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_C0_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_C0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_C0_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_regr_me1_statis_rgn15_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_regr_me1_statis_rgn14_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_regr_me1_statis_rgn15_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_regr_me1_statis_rgn14_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_regr_me1_statis_rgn15_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_regr_me1_statis_rgn14_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_get_regr_me1_statis_rgn15_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C0_get_regr_me1_statis_rgn14_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_C4                                           0x1809C9C4
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_reg_addr                                   "0xB809C9C4"
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_reg                                        0xB809C9C4
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_inst_addr                                  "0x002D"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_C4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_C4_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_C4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_C4_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_regr_me1_statis_rgn17_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_regr_me1_statis_rgn16_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_regr_me1_statis_rgn17_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_regr_me1_statis_rgn16_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_regr_me1_statis_rgn17_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_regr_me1_statis_rgn16_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_get_regr_me1_statis_rgn17_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C4_get_regr_me1_statis_rgn16_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_C8                                           0x1809C9C8
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_reg_addr                                   "0xB809C9C8"
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_reg                                        0xB809C9C8
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_inst_addr                                  "0x002E"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_C8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_C8_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_C8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_C8_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_regr_me1_statis_rgn19_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_regr_me1_statis_rgn18_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_regr_me1_statis_rgn19_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_regr_me1_statis_rgn18_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_regr_me1_statis_rgn19_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_regr_me1_statis_rgn18_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_get_regr_me1_statis_rgn19_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_C8_get_regr_me1_statis_rgn18_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_CC                                           0x1809C9CC
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_reg_addr                                   "0xB809C9CC"
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_reg                                        0xB809C9CC
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_inst_addr                                  "0x002F"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_CC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_CC_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_CC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_CC_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_regr_me1_statis_rgn21_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_regr_me1_statis_rgn20_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_regr_me1_statis_rgn21_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_regr_me1_statis_rgn20_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_regr_me1_statis_rgn21_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_regr_me1_statis_rgn20_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_get_regr_me1_statis_rgn21_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_CC_get_regr_me1_statis_rgn20_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_D0                                           0x1809C9D0
#define  KME_ME1_TOP6_KME_ME1_TOP6_D0_reg_addr                                   "0xB809C9D0"
#define  KME_ME1_TOP6_KME_ME1_TOP6_D0_reg                                        0xB809C9D0
#define  KME_ME1_TOP6_KME_ME1_TOP6_D0_inst_addr                                  "0x0030"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_D0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_D0_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_D0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_D0_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_D0_regr_me1_statis_glb_mot_shift              (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_D0_regr_me1_statis_glb_mot_mask               (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_D0_regr_me1_statis_glb_mot(data)              (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_D0_get_regr_me1_statis_glb_mot(data)          (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_D4                                           0x1809C9D4
#define  KME_ME1_TOP6_KME_ME1_TOP6_D4_reg_addr                                   "0xB809C9D4"
#define  KME_ME1_TOP6_KME_ME1_TOP6_D4_reg                                        0xB809C9D4
#define  KME_ME1_TOP6_KME_ME1_TOP6_D4_inst_addr                                  "0x0031"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_D4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_D4_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_D4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_D4_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_D4_regr_me1_statis_glb_sad_shift              (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_D4_regr_me1_statis_glb_sad_mask               (0x7FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_D4_regr_me1_statis_glb_sad(data)              (0x7FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_D4_get_regr_me1_statis_glb_sad(data)          (0x7FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_D8                                           0x1809C9D8
#define  KME_ME1_TOP6_KME_ME1_TOP6_D8_reg_addr                                   "0xB809C9D8"
#define  KME_ME1_TOP6_KME_ME1_TOP6_D8_reg                                        0xB809C9D8
#define  KME_ME1_TOP6_KME_ME1_TOP6_D8_inst_addr                                  "0x0032"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_D8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_D8_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_D8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_D8_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_D8_regr_me1_statis_glb_dtl_shift              (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_D8_regr_me1_statis_glb_dtl_mask               (0x03FFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_D8_regr_me1_statis_glb_dtl(data)              (0x03FFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_D8_get_regr_me1_statis_glb_dtl(data)          (0x03FFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_DC                                           0x1809C9DC
#define  KME_ME1_TOP6_KME_ME1_TOP6_DC_reg_addr                                   "0xB809C9DC"
#define  KME_ME1_TOP6_KME_ME1_TOP6_DC_reg                                        0xB809C9DC
#define  KME_ME1_TOP6_KME_ME1_TOP6_DC_inst_addr                                  "0x0033"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_DC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_DC_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_DC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_DC_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_DC_regr_me1_statis_glb_scss_shift             (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_DC_regr_me1_statis_glb_scss_mask              (0x0FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_DC_regr_me1_statis_glb_scss(data)             (0x0FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_DC_get_regr_me1_statis_glb_scss(data)         (0x0FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_E0                                           0x1809C9E0
#define  KME_ME1_TOP6_KME_ME1_TOP6_E0_reg_addr                                   "0xB809C9E0"
#define  KME_ME1_TOP6_KME_ME1_TOP6_E0_reg                                        0xB809C9E0
#define  KME_ME1_TOP6_KME_ME1_TOP6_E0_inst_addr                                  "0x0034"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_E0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_E0_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_E0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_E0_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_E0_regr_me1_statis_glb_tcss_shift             (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_E0_regr_me1_statis_glb_tcss_mask              (0x0FFFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_E0_regr_me1_statis_glb_tcss(data)             (0x0FFFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_E0_get_regr_me1_statis_glb_tcss(data)         (0x0FFFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_E4                                           0x1809C9E4
#define  KME_ME1_TOP6_KME_ME1_TOP6_E4_reg_addr                                   "0xB809C9E4"
#define  KME_ME1_TOP6_KME_ME1_TOP6_E4_reg                                        0xB809C9E4
#define  KME_ME1_TOP6_KME_ME1_TOP6_E4_inst_addr                                  "0x0035"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_E4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_E4_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_E4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_E4_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_E4_regr_me1_statis_glb_apli_shift             (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_E4_regr_me1_statis_glb_apli_mask              (0x03FFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_E4_regr_me1_statis_glb_apli(data)             (0x03FFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_E4_get_regr_me1_statis_glb_apli(data)         (0x03FFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_E8                                           0x1809C9E8
#define  KME_ME1_TOP6_KME_ME1_TOP6_E8_reg_addr                                   "0xB809C9E8"
#define  KME_ME1_TOP6_KME_ME1_TOP6_E8_reg                                        0xB809C9E8
#define  KME_ME1_TOP6_KME_ME1_TOP6_E8_inst_addr                                  "0x0036"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_E8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_E8_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_E8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_E8_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_E8_regr_me1_statis_glb_aplp_shift             (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_E8_regr_me1_statis_glb_aplp_mask              (0x03FFFFFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_E8_regr_me1_statis_glb_aplp(data)             (0x03FFFFFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_E8_get_regr_me1_statis_glb_aplp(data)         (0x03FFFFFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_EC                                           0x1809C9EC
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_reg_addr                                   "0xB809C9EC"
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_reg                                        0xB809C9EC
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_inst_addr                                  "0x0037"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_EC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_EC_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_EC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_EC_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_regr_me1_statis_rgn23_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_regr_me1_statis_rgn22_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_regr_me1_statis_rgn23_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_regr_me1_statis_rgn22_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_regr_me1_statis_rgn23_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_regr_me1_statis_rgn22_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_get_regr_me1_statis_rgn23_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_EC_get_regr_me1_statis_rgn22_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_F0                                           0x1809C9F0
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_reg_addr                                   "0xB809C9F0"
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_reg                                        0xB809C9F0
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_inst_addr                                  "0x0038"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_F0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_F0_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_F0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_F0_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_regr_me1_statis_rgn25_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_regr_me1_statis_rgn24_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_regr_me1_statis_rgn25_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_regr_me1_statis_rgn24_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_regr_me1_statis_rgn25_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_regr_me1_statis_rgn24_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_get_regr_me1_statis_rgn25_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F0_get_regr_me1_statis_rgn24_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_F4                                           0x1809C9F4
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_reg_addr                                   "0xB809C9F4"
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_reg                                        0xB809C9F4
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_inst_addr                                  "0x0039"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_F4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_F4_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_F4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_F4_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_regr_me1_statis_rgn27_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_regr_me1_statis_rgn26_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_regr_me1_statis_rgn27_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_regr_me1_statis_rgn26_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_regr_me1_statis_rgn27_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_regr_me1_statis_rgn26_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_get_regr_me1_statis_rgn27_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F4_get_regr_me1_statis_rgn26_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_F8                                           0x1809C9F8
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_reg_addr                                   "0xB809C9F8"
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_reg                                        0xB809C9F8
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_inst_addr                                  "0x003A"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_F8_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_F8_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_F8_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_F8_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_regr_me1_statis_rgn29_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_regr_me1_statis_rgn28_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_regr_me1_statis_rgn29_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_regr_me1_statis_rgn28_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_regr_me1_statis_rgn29_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_regr_me1_statis_rgn28_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_get_regr_me1_statis_rgn29_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_F8_get_regr_me1_statis_rgn28_prd(data)        (0x00001FFF&(data))

#define  KME_ME1_TOP6_KME_ME1_TOP6_FC                                           0x1809C9FC
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_reg_addr                                   "0xB809C9FC"
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_reg                                        0xB809C9FC
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_inst_addr                                  "0x003B"
#define  set_KME_ME1_TOP6_KME_ME1_TOP6_FC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_FC_reg)=data)
#define  get_KME_ME1_TOP6_KME_ME1_TOP6_FC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP6_KME_ME1_TOP6_FC_reg))
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_regr_me1_statis_rgn31_prd_shift            (13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_regr_me1_statis_rgn30_prd_shift            (0)
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_regr_me1_statis_rgn31_prd_mask             (0x03FFE000)
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_regr_me1_statis_rgn30_prd_mask             (0x00001FFF)
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_regr_me1_statis_rgn31_prd(data)            (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_regr_me1_statis_rgn30_prd(data)            (0x00001FFF&(data))
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_get_regr_me1_statis_rgn31_prd(data)        ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP6_KME_ME1_TOP6_FC_get_regr_me1_statis_rgn30_prd(data)        (0x00001FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME1_TOP6 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  me1_statis_vact:9;
        RBus_UInt32  me1_statis_hact:9;
    };
}kme_me1_top6_kme_me1_top6_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_statis_prd_loop:2;
        RBus_UInt32  me1_statis_bv_act_loop:2;
        RBus_UInt32  me1_statis_bv_cnt_loop:2;
        RBus_UInt32  me1_statis_pan_loop:2;
        RBus_UInt32  me1_statis_zmv_loop:2;
        RBus_UInt32  me1_statis_scss_loop:2;
        RBus_UInt32  me1_statis_sad_loop:2;
        RBus_UInt32  me1_statis_dtl_loop:2;
        RBus_UInt32  res2:6;
        RBus_UInt32  me1_statis_dtl_mode:2;
    };
}kme_me1_top6_kme_me1_top6_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_statis_mvy_th2:10;
        RBus_UInt32  me1_statis_mvy_th1:10;
        RBus_UInt32  me1_statis_zmv_dtl_th:8;
    };
}kme_me1_top6_kme_me1_top6_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_statis_dtl_th:8;
        RBus_UInt32  me1_statis_mvy_th4:10;
        RBus_UInt32  me1_statis_mvy_th3:10;
    };
}kme_me1_top6_kme_me1_top6_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_vh_ratio:5;
        RBus_UInt32  me1_statis_hv_ratio:5;
        RBus_UInt32  me1_statis_vpan_th:11;
        RBus_UInt32  me1_statis_hpan_th:11;
    };
}kme_me1_top6_kme_me1_top6_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_tc_dtl_th:8;
        RBus_UInt32  me1_statis_zrmv_ucf_th:12;
        RBus_UInt32  me1_statis_zrmv_cnt_th:12;
    };
}kme_me1_top6_kme_me1_top6_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_bv_act_th:16;
        RBus_UInt32  me1_statis_bv_act_ycoef:8;
        RBus_UInt32  me1_statis_bv_act_xcoef:8;
    };
}kme_me1_top6_kme_me1_top6_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_statis_zmv_sad_ac_pnt:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  me1_statis_zmv_sad_dc_pnt:14;
    };
}kme_me1_top6_kme_me1_top6_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_statis_tcss_th3:10;
        RBus_UInt32  me1_statis_tcss_th2:10;
        RBus_UInt32  me1_statis_tcss_th1:10;
    };
}kme_me1_top6_kme_me1_top6_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_glb_ac_sad:31;
    };
}kme_me1_top6_kme_me1_top6_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  regr_me1_statis_glb_prd:19;
    };
}kme_me1_top6_kme_me1_top6_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn01_prd:13;
        RBus_UInt32  regr_me1_statis_rgn00_prd:13;
    };
}kme_me1_top6_kme_me1_top6_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_zmv_cnt:20;
    };
}kme_me1_top6_kme_me1_top6_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_zmv_dtl:20;
    };
}kme_me1_top6_kme_me1_top6_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_pcnt0:20;
    };
}kme_me1_top6_kme_me1_top6_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_pcnt1:20;
    };
}kme_me1_top6_kme_me1_top6_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_pcnt2:20;
    };
}kme_me1_top6_kme_me1_top6_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_pcnt3:20;
    };
}kme_me1_top6_kme_me1_top6_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_ncnt0:20;
    };
}kme_me1_top6_kme_me1_top6_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_ncnt1:20;
    };
}kme_me1_top6_kme_me1_top6_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_ncnt2:20;
    };
}kme_me1_top6_kme_me1_top6_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bvy_ncnt3:20;
    };
}kme_me1_top6_kme_me1_top6_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me1_statis_dtl_th_sum:28;
    };
}kme_me1_top6_kme_me1_top6_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_dtl_th_cnt:20;
    };
}kme_me1_top6_kme_me1_top6_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_hpan_cnt:20;
    };
}kme_me1_top6_kme_me1_top6_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_vpan_cnt:20;
    };
}kme_me1_top6_kme_me1_top6_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  regr_me1_statis_zgmv_cnt:6;
    };
}kme_me1_top6_kme_me1_top6_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_bv_act_cnt:20;
    };
}kme_me1_top6_kme_me1_top6_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_zmv_sad_dc_cnt:20;
    };
}kme_me1_top6_kme_me1_top6_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_zmv_sad_ac_cnt:20;
    };
}kme_me1_top6_kme_me1_top6_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_zmv_sad_dc_sum:31;
    };
}kme_me1_top6_kme_me1_top6_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_zmv_sad_ac_sum:31;
    };
}kme_me1_top6_kme_me1_top6_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_tcss_th_cnt1:20;
    };
}kme_me1_top6_kme_me1_top6_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_tcss_th_cnt2:20;
    };
}kme_me1_top6_kme_me1_top6_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  regr_me1_statis_tcss_th_cnt3:20;
    };
}kme_me1_top6_kme_me1_top6_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_tcss_th_sum1:31;
    };
}kme_me1_top6_kme_me1_top6_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_tcss_th_sum2:31;
    };
}kme_me1_top6_kme_me1_top6_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_tcss_th_sum3:31;
    };
}kme_me1_top6_kme_me1_top6_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn03_prd:13;
        RBus_UInt32  regr_me1_statis_rgn02_prd:13;
    };
}kme_me1_top6_kme_me1_top6_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn05_prd:13;
        RBus_UInt32  regr_me1_statis_rgn04_prd:13;
    };
}kme_me1_top6_kme_me1_top6_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn07_prd:13;
        RBus_UInt32  regr_me1_statis_rgn06_prd:13;
    };
}kme_me1_top6_kme_me1_top6_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn09_prd:13;
        RBus_UInt32  regr_me1_statis_rgn08_prd:13;
    };
}kme_me1_top6_kme_me1_top6_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn11_prd:13;
        RBus_UInt32  regr_me1_statis_rgn10_prd:13;
    };
}kme_me1_top6_kme_me1_top6_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn13_prd:13;
        RBus_UInt32  regr_me1_statis_rgn12_prd:13;
    };
}kme_me1_top6_kme_me1_top6_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn15_prd:13;
        RBus_UInt32  regr_me1_statis_rgn14_prd:13;
    };
}kme_me1_top6_kme_me1_top6_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn17_prd:13;
        RBus_UInt32  regr_me1_statis_rgn16_prd:13;
    };
}kme_me1_top6_kme_me1_top6_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn19_prd:13;
        RBus_UInt32  regr_me1_statis_rgn18_prd:13;
    };
}kme_me1_top6_kme_me1_top6_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn21_prd:13;
        RBus_UInt32  regr_me1_statis_rgn20_prd:13;
    };
}kme_me1_top6_kme_me1_top6_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_glb_mot:31;
    };
}kme_me1_top6_kme_me1_top6_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  regr_me1_statis_glb_sad:31;
    };
}kme_me1_top6_kme_me1_top6_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_glb_dtl:26;
    };
}kme_me1_top6_kme_me1_top6_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me1_statis_glb_scss:28;
    };
}kme_me1_top6_kme_me1_top6_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  regr_me1_statis_glb_tcss:28;
    };
}kme_me1_top6_kme_me1_top6_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_glb_apli:26;
    };
}kme_me1_top6_kme_me1_top6_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_glb_aplp:26;
    };
}kme_me1_top6_kme_me1_top6_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn23_prd:13;
        RBus_UInt32  regr_me1_statis_rgn22_prd:13;
    };
}kme_me1_top6_kme_me1_top6_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn25_prd:13;
        RBus_UInt32  regr_me1_statis_rgn24_prd:13;
    };
}kme_me1_top6_kme_me1_top6_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn27_prd:13;
        RBus_UInt32  regr_me1_statis_rgn26_prd:13;
    };
}kme_me1_top6_kme_me1_top6_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn29_prd:13;
        RBus_UInt32  regr_me1_statis_rgn28_prd:13;
    };
}kme_me1_top6_kme_me1_top6_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  regr_me1_statis_rgn31_prd:13;
        RBus_UInt32  regr_me1_statis_rgn30_prd:13;
    };
}kme_me1_top6_kme_me1_top6_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME1_TOP6 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_hact:9;
        RBus_UInt32  me1_statis_vact:9;
        RBus_UInt32  res1:14;
    };
}kme_me1_top6_kme_me1_top6_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_dtl_mode:2;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_statis_dtl_loop:2;
        RBus_UInt32  me1_statis_sad_loop:2;
        RBus_UInt32  me1_statis_scss_loop:2;
        RBus_UInt32  me1_statis_zmv_loop:2;
        RBus_UInt32  me1_statis_pan_loop:2;
        RBus_UInt32  me1_statis_bv_cnt_loop:2;
        RBus_UInt32  me1_statis_bv_act_loop:2;
        RBus_UInt32  me1_statis_prd_loop:2;
        RBus_UInt32  res2:8;
    };
}kme_me1_top6_kme_me1_top6_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_zmv_dtl_th:8;
        RBus_UInt32  me1_statis_mvy_th1:10;
        RBus_UInt32  me1_statis_mvy_th2:10;
        RBus_UInt32  res1:4;
    };
}kme_me1_top6_kme_me1_top6_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_mvy_th3:10;
        RBus_UInt32  me1_statis_mvy_th4:10;
        RBus_UInt32  me1_statis_dtl_th:8;
        RBus_UInt32  res1:4;
    };
}kme_me1_top6_kme_me1_top6_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_hpan_th:11;
        RBus_UInt32  me1_statis_vpan_th:11;
        RBus_UInt32  me1_statis_hv_ratio:5;
        RBus_UInt32  me1_statis_vh_ratio:5;
    };
}kme_me1_top6_kme_me1_top6_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_zrmv_cnt_th:12;
        RBus_UInt32  me1_statis_zrmv_ucf_th:12;
        RBus_UInt32  me1_statis_tc_dtl_th:8;
    };
}kme_me1_top6_kme_me1_top6_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_bv_act_xcoef:8;
        RBus_UInt32  me1_statis_bv_act_ycoef:8;
        RBus_UInt32  me1_statis_bv_act_th:16;
    };
}kme_me1_top6_kme_me1_top6_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_zmv_sad_dc_pnt:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_statis_zmv_sad_ac_pnt:14;
        RBus_UInt32  res2:2;
    };
}kme_me1_top6_kme_me1_top6_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_statis_tcss_th1:10;
        RBus_UInt32  me1_statis_tcss_th2:10;
        RBus_UInt32  me1_statis_tcss_th3:10;
        RBus_UInt32  res1:2;
    };
}kme_me1_top6_kme_me1_top6_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_ac_sad:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_prd:19;
        RBus_UInt32  res1:13;
    };
}kme_me1_top6_kme_me1_top6_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn00_prd:13;
        RBus_UInt32  regr_me1_statis_rgn01_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_zmv_cnt:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_zmv_dtl:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_pcnt0:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_pcnt1:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_pcnt2:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_pcnt3:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_ncnt0:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_ncnt1:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_ncnt2:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bvy_ncnt3:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_dtl_th_sum:28;
        RBus_UInt32  res1:4;
    };
}kme_me1_top6_kme_me1_top6_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_dtl_th_cnt:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_hpan_cnt:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_vpan_cnt:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_zgmv_cnt:6;
        RBus_UInt32  res1:26;
    };
}kme_me1_top6_kme_me1_top6_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_bv_act_cnt:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_zmv_sad_dc_cnt:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_zmv_sad_ac_cnt:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_zmv_sad_dc_sum:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_zmv_sad_ac_sum:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_tcss_th_cnt1:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_tcss_th_cnt2:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_tcss_th_cnt3:20;
        RBus_UInt32  res1:12;
    };
}kme_me1_top6_kme_me1_top6_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_tcss_th_sum1:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_tcss_th_sum2:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_tcss_th_sum3:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn02_prd:13;
        RBus_UInt32  regr_me1_statis_rgn03_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn04_prd:13;
        RBus_UInt32  regr_me1_statis_rgn05_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn06_prd:13;
        RBus_UInt32  regr_me1_statis_rgn07_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn08_prd:13;
        RBus_UInt32  regr_me1_statis_rgn09_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn10_prd:13;
        RBus_UInt32  regr_me1_statis_rgn11_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn12_prd:13;
        RBus_UInt32  regr_me1_statis_rgn13_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn14_prd:13;
        RBus_UInt32  regr_me1_statis_rgn15_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn16_prd:13;
        RBus_UInt32  regr_me1_statis_rgn17_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn18_prd:13;
        RBus_UInt32  regr_me1_statis_rgn19_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn20_prd:13;
        RBus_UInt32  regr_me1_statis_rgn21_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_mot:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_sad:31;
        RBus_UInt32  res1:1;
    };
}kme_me1_top6_kme_me1_top6_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_dtl:26;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_scss:28;
        RBus_UInt32  res1:4;
    };
}kme_me1_top6_kme_me1_top6_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_tcss:28;
        RBus_UInt32  res1:4;
    };
}kme_me1_top6_kme_me1_top6_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_apli:26;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_glb_aplp:26;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn22_prd:13;
        RBus_UInt32  regr_me1_statis_rgn23_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn24_prd:13;
        RBus_UInt32  regr_me1_statis_rgn25_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn26_prd:13;
        RBus_UInt32  regr_me1_statis_rgn27_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn28_prd:13;
        RBus_UInt32  regr_me1_statis_rgn29_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_statis_rgn30_prd:13;
        RBus_UInt32  regr_me1_statis_rgn31_prd:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top6_kme_me1_top6_fc_RBUS;




#endif 


#endif 
