/**
* @file Merlin5-DesignSpec-D-Domain_ISP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_ISP_REG_H_
#define _RBUS_ISP_REG_H_

#include "rbus_types.h"



//  ISP Register Address
#define  ISP_ISP_EN                                                             0x1802D100
#define  ISP_ISP_EN_reg_addr                                                     "0xB802D100"
#define  ISP_ISP_EN_reg                                                          0xB802D100
#define  ISP_ISP_EN_inst_addr                                                    "0x0000"
#define  set_ISP_ISP_EN_reg(data)                                                (*((volatile unsigned int*)ISP_ISP_EN_reg)=data)
#define  get_ISP_ISP_EN_reg                                                      (*((volatile unsigned int*)ISP_ISP_EN_reg))
#define  ISP_ISP_EN_sdunlock_irq_en_shift                                        (30)
#define  ISP_ISP_EN_sdunlock_irq_shift                                           (29)
#define  ISP_ISP_EN_dbg_en_shift                                                 (28)
#define  ISP_ISP_EN_dbg_sel_shift                                                (20)
#define  ISP_ISP_EN_pasel_shift                                                  (4)
#define  ISP_ISP_EN_isp_en_shift                                                 (0)
#define  ISP_ISP_EN_sdunlock_irq_en_mask                                         (0x40000000)
#define  ISP_ISP_EN_sdunlock_irq_mask                                            (0x20000000)
#define  ISP_ISP_EN_dbg_en_mask                                                  (0x10000000)
#define  ISP_ISP_EN_dbg_sel_mask                                                 (0x03F00000)
#define  ISP_ISP_EN_pasel_mask                                                   (0x00000010)
#define  ISP_ISP_EN_isp_en_mask                                                  (0x00000001)
#define  ISP_ISP_EN_sdunlock_irq_en(data)                                        (0x40000000&((data)<<30))
#define  ISP_ISP_EN_sdunlock_irq(data)                                           (0x20000000&((data)<<29))
#define  ISP_ISP_EN_dbg_en(data)                                                 (0x10000000&((data)<<28))
#define  ISP_ISP_EN_dbg_sel(data)                                                (0x03F00000&((data)<<20))
#define  ISP_ISP_EN_pasel(data)                                                  (0x00000010&((data)<<4))
#define  ISP_ISP_EN_isp_en(data)                                                 (0x00000001&(data))
#define  ISP_ISP_EN_get_sdunlock_irq_en(data)                                    ((0x40000000&(data))>>30)
#define  ISP_ISP_EN_get_sdunlock_irq(data)                                       ((0x20000000&(data))>>29)
#define  ISP_ISP_EN_get_dbg_en(data)                                             ((0x10000000&(data))>>28)
#define  ISP_ISP_EN_get_dbg_sel(data)                                            ((0x03F00000&(data))>>20)
#define  ISP_ISP_EN_get_pasel(data)                                              ((0x00000010&(data))>>4)
#define  ISP_ISP_EN_get_isp_en(data)                                             (0x00000001&(data))

#define  ISP_ISP_TCON_SEL                                                       0x1802D104
#define  ISP_ISP_TCON_SEL_reg_addr                                               "0xB802D104"
#define  ISP_ISP_TCON_SEL_reg                                                    0xB802D104
#define  ISP_ISP_TCON_SEL_inst_addr                                              "0x0001"
#define  set_ISP_ISP_TCON_SEL_reg(data)                                          (*((volatile unsigned int*)ISP_ISP_TCON_SEL_reg)=data)
#define  get_ISP_ISP_TCON_SEL_reg                                                (*((volatile unsigned int*)ISP_ISP_TCON_SEL_reg))
#define  ISP_ISP_TCON_SEL_scrambler_func_shift                                   (30)
#define  ISP_ISP_TCON_SEL_scrambler_sel_shift                                    (29)
#define  ISP_ISP_TCON_SEL_scrambler_en_shift                                     (28)
#define  ISP_ISP_TCON_SEL_bit_cnt_shift                                          (24)
#define  ISP_ISP_TCON_SEL_bkpol_sel_shift                                        (16)
#define  ISP_ISP_TCON_SEL_pol_bit1_sel_shift                                     (8)
#define  ISP_ISP_TCON_SEL_pol_bit0_sel_shift                                     (0)
#define  ISP_ISP_TCON_SEL_scrambler_func_mask                                    (0x40000000)
#define  ISP_ISP_TCON_SEL_scrambler_sel_mask                                     (0x20000000)
#define  ISP_ISP_TCON_SEL_scrambler_en_mask                                      (0x10000000)
#define  ISP_ISP_TCON_SEL_bit_cnt_mask                                           (0x03000000)
#define  ISP_ISP_TCON_SEL_bkpol_sel_mask                                         (0x001F0000)
#define  ISP_ISP_TCON_SEL_pol_bit1_sel_mask                                      (0x00001F00)
#define  ISP_ISP_TCON_SEL_pol_bit0_sel_mask                                      (0x0000001F)
#define  ISP_ISP_TCON_SEL_scrambler_func(data)                                   (0x40000000&((data)<<30))
#define  ISP_ISP_TCON_SEL_scrambler_sel(data)                                    (0x20000000&((data)<<29))
#define  ISP_ISP_TCON_SEL_scrambler_en(data)                                     (0x10000000&((data)<<28))
#define  ISP_ISP_TCON_SEL_bit_cnt(data)                                          (0x03000000&((data)<<24))
#define  ISP_ISP_TCON_SEL_bkpol_sel(data)                                        (0x001F0000&((data)<<16))
#define  ISP_ISP_TCON_SEL_pol_bit1_sel(data)                                     (0x00001F00&((data)<<8))
#define  ISP_ISP_TCON_SEL_pol_bit0_sel(data)                                     (0x0000001F&(data))
#define  ISP_ISP_TCON_SEL_get_scrambler_func(data)                               ((0x40000000&(data))>>30)
#define  ISP_ISP_TCON_SEL_get_scrambler_sel(data)                                ((0x20000000&(data))>>29)
#define  ISP_ISP_TCON_SEL_get_scrambler_en(data)                                 ((0x10000000&(data))>>28)
#define  ISP_ISP_TCON_SEL_get_bit_cnt(data)                                      ((0x03000000&(data))>>24)
#define  ISP_ISP_TCON_SEL_get_bkpol_sel(data)                                    ((0x001F0000&(data))>>16)
#define  ISP_ISP_TCON_SEL_get_pol_bit1_sel(data)                                 ((0x00001F00&(data))>>8)
#define  ISP_ISP_TCON_SEL_get_pol_bit0_sel(data)                                 (0x0000001F&(data))

#define  ISP_ISP_TD                                                             0x1802D108
#define  ISP_ISP_TD_reg_addr                                                     "0xB802D108"
#define  ISP_ISP_TD_reg                                                          0xB802D108
#define  ISP_ISP_TD_inst_addr                                                    "0x0002"
#define  set_ISP_ISP_TD_reg(data)                                                (*((volatile unsigned int*)ISP_ISP_TD_reg)=data)
#define  get_ISP_ISP_TD_reg                                                      (*((volatile unsigned int*)ISP_ISP_TD_reg))
#define  ISP_ISP_TD_hs_to_den_distance_shift                                     (16)
#define  ISP_ISP_TD_sdlock_manual_value_shift                                    (13)
#define  ISP_ISP_TD_sdlock_manual_mode_shift                                     (12)
#define  ISP_ISP_TD_td_shift                                                     (0)
#define  ISP_ISP_TD_hs_to_den_distance_mask                                      (0x00FF0000)
#define  ISP_ISP_TD_sdlock_manual_value_mask                                     (0x00002000)
#define  ISP_ISP_TD_sdlock_manual_mode_mask                                      (0x00001000)
#define  ISP_ISP_TD_td_mask                                                      (0x000007FF)
#define  ISP_ISP_TD_hs_to_den_distance(data)                                     (0x00FF0000&((data)<<16))
#define  ISP_ISP_TD_sdlock_manual_value(data)                                    (0x00002000&((data)<<13))
#define  ISP_ISP_TD_sdlock_manual_mode(data)                                     (0x00001000&((data)<<12))
#define  ISP_ISP_TD_td(data)                                                     (0x000007FF&(data))
#define  ISP_ISP_TD_get_hs_to_den_distance(data)                                 ((0x00FF0000&(data))>>16)
#define  ISP_ISP_TD_get_sdlock_manual_value(data)                                ((0x00002000&(data))>>13)
#define  ISP_ISP_TD_get_sdlock_manual_mode(data)                                 ((0x00001000&(data))>>12)
#define  ISP_ISP_TD_get_td(data)                                                 (0x000007FF&(data))

#define  ISP_ISP_VD_SD_SET_FRM                                                  0x1802D10C
#define  ISP_ISP_VD_SD_SET_FRM_reg_addr                                          "0xB802D10C"
#define  ISP_ISP_VD_SD_SET_FRM_reg                                               0xB802D10C
#define  ISP_ISP_VD_SD_SET_FRM_inst_addr                                         "0x0003"
#define  set_ISP_ISP_VD_SD_SET_FRM_reg(data)                                     (*((volatile unsigned int*)ISP_ISP_VD_SD_SET_FRM_reg)=data)
#define  get_ISP_ISP_VD_SD_SET_FRM_reg                                           (*((volatile unsigned int*)ISP_ISP_VD_SD_SET_FRM_reg))
#define  ISP_ISP_VD_SD_SET_FRM_vb_sd_set_frm_shift                               (0)
#define  ISP_ISP_VD_SD_SET_FRM_vb_sd_set_frm_mask                                (0x000000FF)
#define  ISP_ISP_VD_SD_SET_FRM_vb_sd_set_frm(data)                               (0x000000FF&(data))
#define  ISP_ISP_VD_SD_SET_FRM_get_vb_sd_set_frm(data)                           (0x000000FF&(data))

#define  ISP_ISP_TBK                                                            0x1802D110
#define  ISP_ISP_TBK_reg_addr                                                    "0xB802D110"
#define  ISP_ISP_TBK_reg                                                         0xB802D110
#define  ISP_ISP_TBK_inst_addr                                                   "0x0004"
#define  set_ISP_ISP_TBK_reg(data)                                               (*((volatile unsigned int*)ISP_ISP_TBK_reg)=data)
#define  get_ISP_ISP_TBK_reg                                                     (*((volatile unsigned int*)ISP_ISP_TBK_reg))
#define  ISP_ISP_TBK_sd_lock_type_shift                                          (31)
#define  ISP_ISP_TBK_tbk_en_shift                                                (30)
#define  ISP_ISP_TBK_tbk1_shift                                                  (20)
#define  ISP_ISP_TBK_tbk2_shift                                                  (8)
#define  ISP_ISP_TBK_isp_dummy_shift                                             (0)
#define  ISP_ISP_TBK_sd_lock_type_mask                                           (0x80000000)
#define  ISP_ISP_TBK_tbk_en_mask                                                 (0x40000000)
#define  ISP_ISP_TBK_tbk1_mask                                                   (0x1FF00000)
#define  ISP_ISP_TBK_tbk2_mask                                                   (0x0001FF00)
#define  ISP_ISP_TBK_isp_dummy_mask                                              (0x000000FF)
#define  ISP_ISP_TBK_sd_lock_type(data)                                          (0x80000000&((data)<<31))
#define  ISP_ISP_TBK_tbk_en(data)                                                (0x40000000&((data)<<30))
#define  ISP_ISP_TBK_tbk1(data)                                                  (0x1FF00000&((data)<<20))
#define  ISP_ISP_TBK_tbk2(data)                                                  (0x0001FF00&((data)<<8))
#define  ISP_ISP_TBK_isp_dummy(data)                                             (0x000000FF&(data))
#define  ISP_ISP_TBK_get_sd_lock_type(data)                                      ((0x80000000&(data))>>31)
#define  ISP_ISP_TBK_get_tbk_en(data)                                            ((0x40000000&(data))>>30)
#define  ISP_ISP_TBK_get_tbk1(data)                                              ((0x1FF00000&(data))>>20)
#define  ISP_ISP_TBK_get_tbk2(data)                                              ((0x0001FF00&(data))>>8)
#define  ISP_ISP_TBK_get_isp_dummy(data)                                         (0x000000FF&(data))

#define  ISP_ISP_BAC                                                            0x1802D114
#define  ISP_ISP_BAC_reg_addr                                                    "0xB802D114"
#define  ISP_ISP_BAC_reg                                                         0xB802D114
#define  ISP_ISP_BAC_inst_addr                                                   "0x0005"
#define  set_ISP_ISP_BAC_reg(data)                                               (*((volatile unsigned int*)ISP_ISP_BAC_reg)=data)
#define  get_ISP_ISP_BAC_reg                                                     (*((volatile unsigned int*)ISP_ISP_BAC_reg))
#define  ISP_ISP_BAC_bac_shift                                                   (16)
#define  ISP_ISP_BAC_set_shift                                                   (0)
#define  ISP_ISP_BAC_bac_mask                                                    (0x01FF0000)
#define  ISP_ISP_BAC_set_mask                                                    (0x000001FF)
#define  ISP_ISP_BAC_bac(data)                                                   (0x01FF0000&((data)<<16))
#define  ISP_ISP_BAC_set(data)                                                   (0x000001FF&(data))
#define  ISP_ISP_BAC_get_bac(data)                                               ((0x01FF0000&(data))>>16)
#define  ISP_ISP_BAC_get_set(data)                                               (0x000001FF&(data))

#define  ISP_ISP_EOL                                                            0x1802D118
#define  ISP_ISP_EOL_reg_addr                                                    "0xB802D118"
#define  ISP_ISP_EOL_reg                                                         0xB802D118
#define  ISP_ISP_EOL_inst_addr                                                   "0x0006"
#define  set_ISP_ISP_EOL_reg(data)                                               (*((volatile unsigned int*)ISP_ISP_EOL_reg)=data)
#define  get_ISP_ISP_EOL_reg                                                     (*((volatile unsigned int*)ISP_ISP_EOL_reg))
#define  ISP_ISP_EOL_eol_shift                                                   (0)
#define  ISP_ISP_EOL_eol_mask                                                    (0x000001FF)
#define  ISP_ISP_EOL_eol(data)                                                   (0x000001FF&(data))
#define  ISP_ISP_EOL_get_eol(data)                                               (0x000001FF&(data))

#define  ISP_ISP_BKPOL                                                          0x1802D11C
#define  ISP_ISP_BKPOL_reg_addr                                                  "0xB802D11C"
#define  ISP_ISP_BKPOL_reg                                                       0xB802D11C
#define  ISP_ISP_BKPOL_inst_addr                                                 "0x0007"
#define  set_ISP_ISP_BKPOL_reg(data)                                             (*((volatile unsigned int*)ISP_ISP_BKPOL_reg)=data)
#define  get_ISP_ISP_BKPOL_reg                                                   (*((volatile unsigned int*)ISP_ISP_BKPOL_reg))
#define  ISP_ISP_BKPOL_bkpolp_shift                                              (16)
#define  ISP_ISP_BKPOL_bkpoln_shift                                              (0)
#define  ISP_ISP_BKPOL_bkpolp_mask                                               (0x01FF0000)
#define  ISP_ISP_BKPOL_bkpoln_mask                                               (0x000001FF)
#define  ISP_ISP_BKPOL_bkpolp(data)                                              (0x01FF0000&((data)<<16))
#define  ISP_ISP_BKPOL_bkpoln(data)                                              (0x000001FF&(data))
#define  ISP_ISP_BKPOL_get_bkpolp(data)                                          ((0x01FF0000&(data))>>16)
#define  ISP_ISP_BKPOL_get_bkpoln(data)                                          (0x000001FF&(data))

#define  ISP_ISP_POLP                                                           0x1802D120
#define  ISP_ISP_POLP_reg_addr                                                   "0xB802D120"
#define  ISP_ISP_POLP_reg                                                        0xB802D120
#define  ISP_ISP_POLP_inst_addr                                                  "0x0008"
#define  set_ISP_ISP_POLP_reg(data)                                              (*((volatile unsigned int*)ISP_ISP_POLP_reg)=data)
#define  get_ISP_ISP_POLP_reg                                                    (*((volatile unsigned int*)ISP_ISP_POLP_reg))
#define  ISP_ISP_POLP_polp_gseln_shift                                           (16)
#define  ISP_ISP_POLP_polp_gselp_shift                                           (0)
#define  ISP_ISP_POLP_polp_gseln_mask                                            (0x01FF0000)
#define  ISP_ISP_POLP_polp_gselp_mask                                            (0x000001FF)
#define  ISP_ISP_POLP_polp_gseln(data)                                           (0x01FF0000&((data)<<16))
#define  ISP_ISP_POLP_polp_gselp(data)                                           (0x000001FF&(data))
#define  ISP_ISP_POLP_get_polp_gseln(data)                                       ((0x01FF0000&(data))>>16)
#define  ISP_ISP_POLP_get_polp_gselp(data)                                       (0x000001FF&(data))

#define  ISP_ISP_POLN                                                           0x1802D124
#define  ISP_ISP_POLN_reg_addr                                                   "0xB802D124"
#define  ISP_ISP_POLN_reg                                                        0xB802D124
#define  ISP_ISP_POLN_inst_addr                                                  "0x0009"
#define  set_ISP_ISP_POLN_reg(data)                                              (*((volatile unsigned int*)ISP_ISP_POLN_reg)=data)
#define  get_ISP_ISP_POLN_reg                                                    (*((volatile unsigned int*)ISP_ISP_POLN_reg))
#define  ISP_ISP_POLN_poln_gseln_shift                                           (16)
#define  ISP_ISP_POLN_poln_gselp_shift                                           (0)
#define  ISP_ISP_POLN_poln_gseln_mask                                            (0x01FF0000)
#define  ISP_ISP_POLN_poln_gselp_mask                                            (0x000001FF)
#define  ISP_ISP_POLN_poln_gseln(data)                                           (0x01FF0000&((data)<<16))
#define  ISP_ISP_POLN_poln_gselp(data)                                           (0x000001FF&(data))
#define  ISP_ISP_POLN_get_poln_gseln(data)                                       ((0x01FF0000&(data))>>16)
#define  ISP_ISP_POLN_get_poln_gselp(data)                                       (0x000001FF&(data))

#define  ISP_ISP_SETTING00_00                                                   0x1802D128
#define  ISP_ISP_SETTING00_00_reg_addr                                           "0xB802D128"
#define  ISP_ISP_SETTING00_00_reg                                                0xB802D128
#define  ISP_ISP_SETTING00_00_inst_addr                                          "0x000A"
#define  set_ISP_ISP_SETTING00_00_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING00_00_reg)=data)
#define  get_ISP_ISP_SETTING00_00_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING00_00_reg))
#define  ISP_ISP_SETTING00_00_setting00_00_shift                                 (24)
#define  ISP_ISP_SETTING00_00_setting00_01_shift                                 (16)
#define  ISP_ISP_SETTING00_00_setting00_02_shift                                 (8)
#define  ISP_ISP_SETTING00_00_setting00_03_shift                                 (0)
#define  ISP_ISP_SETTING00_00_setting00_00_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING00_00_setting00_01_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING00_00_setting00_02_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING00_00_setting00_03_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING00_00_setting00_00(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING00_00_setting00_01(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING00_00_setting00_02(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING00_00_setting00_03(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING00_00_get_setting00_00(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING00_00_get_setting00_01(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING00_00_get_setting00_02(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING00_00_get_setting00_03(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING00_04                                                   0x1802D12C
#define  ISP_ISP_SETTING00_04_reg_addr                                           "0xB802D12C"
#define  ISP_ISP_SETTING00_04_reg                                                0xB802D12C
#define  ISP_ISP_SETTING00_04_inst_addr                                          "0x000B"
#define  set_ISP_ISP_SETTING00_04_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING00_04_reg)=data)
#define  get_ISP_ISP_SETTING00_04_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING00_04_reg))
#define  ISP_ISP_SETTING00_04_setting00_04_shift                                 (24)
#define  ISP_ISP_SETTING00_04_setting00_05_shift                                 (16)
#define  ISP_ISP_SETTING00_04_setting00_06_shift                                 (8)
#define  ISP_ISP_SETTING00_04_setting00_07_shift                                 (0)
#define  ISP_ISP_SETTING00_04_setting00_04_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING00_04_setting00_05_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING00_04_setting00_06_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING00_04_setting00_07_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING00_04_setting00_04(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING00_04_setting00_05(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING00_04_setting00_06(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING00_04_setting00_07(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING00_04_get_setting00_04(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING00_04_get_setting00_05(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING00_04_get_setting00_06(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING00_04_get_setting00_07(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING00_08                                                   0x1802D130
#define  ISP_ISP_SETTING00_08_reg_addr                                           "0xB802D130"
#define  ISP_ISP_SETTING00_08_reg                                                0xB802D130
#define  ISP_ISP_SETTING00_08_inst_addr                                          "0x000C"
#define  set_ISP_ISP_SETTING00_08_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING00_08_reg)=data)
#define  get_ISP_ISP_SETTING00_08_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING00_08_reg))
#define  ISP_ISP_SETTING00_08_setting00_08_shift                                 (24)
#define  ISP_ISP_SETTING00_08_setting00_09_shift                                 (16)
#define  ISP_ISP_SETTING00_08_setting00_10_shift                                 (8)
#define  ISP_ISP_SETTING00_08_setting00_11_shift                                 (0)
#define  ISP_ISP_SETTING00_08_setting00_08_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING00_08_setting00_09_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING00_08_setting00_10_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING00_08_setting00_11_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING00_08_setting00_08(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING00_08_setting00_09(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING00_08_setting00_10(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING00_08_setting00_11(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING00_08_get_setting00_08(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING00_08_get_setting00_09(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING00_08_get_setting00_10(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING00_08_get_setting00_11(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING01_00                                                   0x1802D134
#define  ISP_ISP_SETTING01_00_reg_addr                                           "0xB802D134"
#define  ISP_ISP_SETTING01_00_reg                                                0xB802D134
#define  ISP_ISP_SETTING01_00_inst_addr                                          "0x000D"
#define  set_ISP_ISP_SETTING01_00_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING01_00_reg)=data)
#define  get_ISP_ISP_SETTING01_00_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING01_00_reg))
#define  ISP_ISP_SETTING01_00_setting01_00_shift                                 (24)
#define  ISP_ISP_SETTING01_00_setting01_01_shift                                 (16)
#define  ISP_ISP_SETTING01_00_setting01_02_shift                                 (8)
#define  ISP_ISP_SETTING01_00_setting01_03_shift                                 (0)
#define  ISP_ISP_SETTING01_00_setting01_00_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING01_00_setting01_01_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING01_00_setting01_02_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING01_00_setting01_03_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING01_00_setting01_00(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING01_00_setting01_01(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING01_00_setting01_02(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING01_00_setting01_03(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING01_00_get_setting01_00(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING01_00_get_setting01_01(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING01_00_get_setting01_02(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING01_00_get_setting01_03(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING01_04                                                   0x1802D138
#define  ISP_ISP_SETTING01_04_reg_addr                                           "0xB802D138"
#define  ISP_ISP_SETTING01_04_reg                                                0xB802D138
#define  ISP_ISP_SETTING01_04_inst_addr                                          "0x000E"
#define  set_ISP_ISP_SETTING01_04_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING01_04_reg)=data)
#define  get_ISP_ISP_SETTING01_04_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING01_04_reg))
#define  ISP_ISP_SETTING01_04_setting01_04_shift                                 (24)
#define  ISP_ISP_SETTING01_04_setting01_05_shift                                 (16)
#define  ISP_ISP_SETTING01_04_setting01_06_shift                                 (8)
#define  ISP_ISP_SETTING01_04_setting01_07_shift                                 (0)
#define  ISP_ISP_SETTING01_04_setting01_04_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING01_04_setting01_05_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING01_04_setting01_06_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING01_04_setting01_07_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING01_04_setting01_04(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING01_04_setting01_05(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING01_04_setting01_06(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING01_04_setting01_07(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING01_04_get_setting01_04(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING01_04_get_setting01_05(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING01_04_get_setting01_06(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING01_04_get_setting01_07(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING01_08                                                   0x1802D13C
#define  ISP_ISP_SETTING01_08_reg_addr                                           "0xB802D13C"
#define  ISP_ISP_SETTING01_08_reg                                                0xB802D13C
#define  ISP_ISP_SETTING01_08_inst_addr                                          "0x000F"
#define  set_ISP_ISP_SETTING01_08_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING01_08_reg)=data)
#define  get_ISP_ISP_SETTING01_08_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING01_08_reg))
#define  ISP_ISP_SETTING01_08_setting01_08_shift                                 (24)
#define  ISP_ISP_SETTING01_08_setting01_09_shift                                 (16)
#define  ISP_ISP_SETTING01_08_setting01_10_shift                                 (8)
#define  ISP_ISP_SETTING01_08_setting01_11_shift                                 (0)
#define  ISP_ISP_SETTING01_08_setting01_08_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING01_08_setting01_09_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING01_08_setting01_10_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING01_08_setting01_11_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING01_08_setting01_08(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING01_08_setting01_09(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING01_08_setting01_10(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING01_08_setting01_11(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING01_08_get_setting01_08(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING01_08_get_setting01_09(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING01_08_get_setting01_10(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING01_08_get_setting01_11(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING02_00                                                   0x1802D140
#define  ISP_ISP_SETTING02_00_reg_addr                                           "0xB802D140"
#define  ISP_ISP_SETTING02_00_reg                                                0xB802D140
#define  ISP_ISP_SETTING02_00_inst_addr                                          "0x0010"
#define  set_ISP_ISP_SETTING02_00_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING02_00_reg)=data)
#define  get_ISP_ISP_SETTING02_00_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING02_00_reg))
#define  ISP_ISP_SETTING02_00_setting02_00_shift                                 (24)
#define  ISP_ISP_SETTING02_00_setting02_01_shift                                 (16)
#define  ISP_ISP_SETTING02_00_setting02_02_shift                                 (8)
#define  ISP_ISP_SETTING02_00_setting02_03_shift                                 (0)
#define  ISP_ISP_SETTING02_00_setting02_00_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING02_00_setting02_01_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING02_00_setting02_02_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING02_00_setting02_03_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING02_00_setting02_00(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING02_00_setting02_01(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING02_00_setting02_02(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING02_00_setting02_03(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING02_00_get_setting02_00(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING02_00_get_setting02_01(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING02_00_get_setting02_02(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING02_00_get_setting02_03(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING02_04                                                   0x1802D144
#define  ISP_ISP_SETTING02_04_reg_addr                                           "0xB802D144"
#define  ISP_ISP_SETTING02_04_reg                                                0xB802D144
#define  ISP_ISP_SETTING02_04_inst_addr                                          "0x0011"
#define  set_ISP_ISP_SETTING02_04_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING02_04_reg)=data)
#define  get_ISP_ISP_SETTING02_04_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING02_04_reg))
#define  ISP_ISP_SETTING02_04_setting02_04_shift                                 (24)
#define  ISP_ISP_SETTING02_04_setting02_05_shift                                 (16)
#define  ISP_ISP_SETTING02_04_setting02_06_shift                                 (8)
#define  ISP_ISP_SETTING02_04_setting02_07_shift                                 (0)
#define  ISP_ISP_SETTING02_04_setting02_04_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING02_04_setting02_05_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING02_04_setting02_06_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING02_04_setting02_07_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING02_04_setting02_04(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING02_04_setting02_05(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING02_04_setting02_06(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING02_04_setting02_07(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING02_04_get_setting02_04(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING02_04_get_setting02_05(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING02_04_get_setting02_06(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING02_04_get_setting02_07(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING02_08                                                   0x1802D148
#define  ISP_ISP_SETTING02_08_reg_addr                                           "0xB802D148"
#define  ISP_ISP_SETTING02_08_reg                                                0xB802D148
#define  ISP_ISP_SETTING02_08_inst_addr                                          "0x0012"
#define  set_ISP_ISP_SETTING02_08_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING02_08_reg)=data)
#define  get_ISP_ISP_SETTING02_08_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING02_08_reg))
#define  ISP_ISP_SETTING02_08_setting02_08_shift                                 (24)
#define  ISP_ISP_SETTING02_08_setting02_09_shift                                 (16)
#define  ISP_ISP_SETTING02_08_setting02_10_shift                                 (8)
#define  ISP_ISP_SETTING02_08_setting02_11_shift                                 (0)
#define  ISP_ISP_SETTING02_08_setting02_08_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING02_08_setting02_09_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING02_08_setting02_10_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING02_08_setting02_11_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING02_08_setting02_08(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING02_08_setting02_09(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING02_08_setting02_10(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING02_08_setting02_11(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING02_08_get_setting02_08(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING02_08_get_setting02_09(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING02_08_get_setting02_10(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING02_08_get_setting02_11(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING03_00                                                   0x1802D14C
#define  ISP_ISP_SETTING03_00_reg_addr                                           "0xB802D14C"
#define  ISP_ISP_SETTING03_00_reg                                                0xB802D14C
#define  ISP_ISP_SETTING03_00_inst_addr                                          "0x0013"
#define  set_ISP_ISP_SETTING03_00_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING03_00_reg)=data)
#define  get_ISP_ISP_SETTING03_00_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING03_00_reg))
#define  ISP_ISP_SETTING03_00_setting03_00_shift                                 (24)
#define  ISP_ISP_SETTING03_00_setting03_01_shift                                 (16)
#define  ISP_ISP_SETTING03_00_setting03_02_shift                                 (8)
#define  ISP_ISP_SETTING03_00_setting03_03_shift                                 (0)
#define  ISP_ISP_SETTING03_00_setting03_00_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING03_00_setting03_01_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING03_00_setting03_02_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING03_00_setting03_03_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING03_00_setting03_00(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING03_00_setting03_01(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING03_00_setting03_02(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING03_00_setting03_03(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING03_00_get_setting03_00(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING03_00_get_setting03_01(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING03_00_get_setting03_02(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING03_00_get_setting03_03(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING03_04                                                   0x1802D150
#define  ISP_ISP_SETTING03_04_reg_addr                                           "0xB802D150"
#define  ISP_ISP_SETTING03_04_reg                                                0xB802D150
#define  ISP_ISP_SETTING03_04_inst_addr                                          "0x0014"
#define  set_ISP_ISP_SETTING03_04_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING03_04_reg)=data)
#define  get_ISP_ISP_SETTING03_04_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING03_04_reg))
#define  ISP_ISP_SETTING03_04_setting03_04_shift                                 (24)
#define  ISP_ISP_SETTING03_04_setting03_05_shift                                 (16)
#define  ISP_ISP_SETTING03_04_setting03_06_shift                                 (8)
#define  ISP_ISP_SETTING03_04_setting03_07_shift                                 (0)
#define  ISP_ISP_SETTING03_04_setting03_04_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING03_04_setting03_05_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING03_04_setting03_06_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING03_04_setting03_07_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING03_04_setting03_04(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING03_04_setting03_05(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING03_04_setting03_06(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING03_04_setting03_07(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING03_04_get_setting03_04(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING03_04_get_setting03_05(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING03_04_get_setting03_06(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING03_04_get_setting03_07(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING03_08                                                   0x1802D154
#define  ISP_ISP_SETTING03_08_reg_addr                                           "0xB802D154"
#define  ISP_ISP_SETTING03_08_reg                                                0xB802D154
#define  ISP_ISP_SETTING03_08_inst_addr                                          "0x0015"
#define  set_ISP_ISP_SETTING03_08_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING03_08_reg)=data)
#define  get_ISP_ISP_SETTING03_08_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING03_08_reg))
#define  ISP_ISP_SETTING03_08_setting03_08_shift                                 (24)
#define  ISP_ISP_SETTING03_08_setting03_09_shift                                 (16)
#define  ISP_ISP_SETTING03_08_setting03_10_shift                                 (8)
#define  ISP_ISP_SETTING03_08_setting03_11_shift                                 (0)
#define  ISP_ISP_SETTING03_08_setting03_08_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING03_08_setting03_09_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING03_08_setting03_10_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING03_08_setting03_11_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING03_08_setting03_08(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING03_08_setting03_09(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING03_08_setting03_10(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING03_08_setting03_11(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING03_08_get_setting03_08(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING03_08_get_setting03_09(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING03_08_get_setting03_10(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING03_08_get_setting03_11(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING04                                                      0x1802D158
#define  ISP_ISP_SETTING04_reg_addr                                              "0xB802D158"
#define  ISP_ISP_SETTING04_reg                                                   0xB802D158
#define  ISP_ISP_SETTING04_inst_addr                                             "0x0016"
#define  set_ISP_ISP_SETTING04_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING04_reg)=data)
#define  get_ISP_ISP_SETTING04_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING04_reg))
#define  ISP_ISP_SETTING04_setting04_shift                                       (24)
#define  ISP_ISP_SETTING04_setting05_shift                                       (16)
#define  ISP_ISP_SETTING04_setting06_shift                                       (8)
#define  ISP_ISP_SETTING04_setting07_shift                                       (0)
#define  ISP_ISP_SETTING04_setting04_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING04_setting05_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING04_setting06_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING04_setting07_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING04_setting04(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING04_setting05(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING04_setting06(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING04_setting07(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING04_get_setting04(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING04_get_setting05(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING04_get_setting06(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING04_get_setting07(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING08                                                      0x1802D15C
#define  ISP_ISP_SETTING08_reg_addr                                              "0xB802D15C"
#define  ISP_ISP_SETTING08_reg                                                   0xB802D15C
#define  ISP_ISP_SETTING08_inst_addr                                             "0x0017"
#define  set_ISP_ISP_SETTING08_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING08_reg)=data)
#define  get_ISP_ISP_SETTING08_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING08_reg))
#define  ISP_ISP_SETTING08_setting08_shift                                       (24)
#define  ISP_ISP_SETTING08_setting09_shift                                       (16)
#define  ISP_ISP_SETTING08_setting10_shift                                       (8)
#define  ISP_ISP_SETTING08_setting11_shift                                       (0)
#define  ISP_ISP_SETTING08_setting08_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING08_setting09_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING08_setting10_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING08_setting11_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING08_setting08(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING08_setting09(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING08_setting10(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING08_setting11(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING08_get_setting08(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING08_get_setting09(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING08_get_setting10(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING08_get_setting11(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING12                                                      0x1802D160
#define  ISP_ISP_SETTING12_reg_addr                                              "0xB802D160"
#define  ISP_ISP_SETTING12_reg                                                   0xB802D160
#define  ISP_ISP_SETTING12_inst_addr                                             "0x0018"
#define  set_ISP_ISP_SETTING12_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING12_reg)=data)
#define  get_ISP_ISP_SETTING12_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING12_reg))
#define  ISP_ISP_SETTING12_setting12_shift                                       (24)
#define  ISP_ISP_SETTING12_setting13_shift                                       (16)
#define  ISP_ISP_SETTING12_setting14_shift                                       (8)
#define  ISP_ISP_SETTING12_setting15_shift                                       (0)
#define  ISP_ISP_SETTING12_setting12_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING12_setting13_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING12_setting14_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING12_setting15_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING12_setting12(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING12_setting13(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING12_setting14(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING12_setting15(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING12_get_setting12(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING12_get_setting13(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING12_get_setting14(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING12_get_setting15(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING16                                                      0x1802D164
#define  ISP_ISP_SETTING16_reg_addr                                              "0xB802D164"
#define  ISP_ISP_SETTING16_reg                                                   0xB802D164
#define  ISP_ISP_SETTING16_inst_addr                                             "0x0019"
#define  set_ISP_ISP_SETTING16_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING16_reg)=data)
#define  get_ISP_ISP_SETTING16_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING16_reg))
#define  ISP_ISP_SETTING16_setting16_shift                                       (24)
#define  ISP_ISP_SETTING16_setting17_shift                                       (16)
#define  ISP_ISP_SETTING16_setting18_shift                                       (8)
#define  ISP_ISP_SETTING16_setting19_shift                                       (0)
#define  ISP_ISP_SETTING16_setting16_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING16_setting17_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING16_setting18_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING16_setting19_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING16_setting16(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING16_setting17(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING16_setting18(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING16_setting19(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING16_get_setting16(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING16_get_setting17(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING16_get_setting18(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING16_get_setting19(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING20                                                      0x1802D168
#define  ISP_ISP_SETTING20_reg_addr                                              "0xB802D168"
#define  ISP_ISP_SETTING20_reg                                                   0xB802D168
#define  ISP_ISP_SETTING20_inst_addr                                             "0x001A"
#define  set_ISP_ISP_SETTING20_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING20_reg)=data)
#define  get_ISP_ISP_SETTING20_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING20_reg))
#define  ISP_ISP_SETTING20_setting20_shift                                       (24)
#define  ISP_ISP_SETTING20_setting21_shift                                       (16)
#define  ISP_ISP_SETTING20_setting22_shift                                       (8)
#define  ISP_ISP_SETTING20_setting23_shift                                       (0)
#define  ISP_ISP_SETTING20_setting20_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING20_setting21_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING20_setting22_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING20_setting23_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING20_setting20(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING20_setting21(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING20_setting22(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING20_setting23(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING20_get_setting20(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING20_get_setting21(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING20_get_setting22(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING20_get_setting23(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING24                                                      0x1802D16C
#define  ISP_ISP_SETTING24_reg_addr                                              "0xB802D16C"
#define  ISP_ISP_SETTING24_reg                                                   0xB802D16C
#define  ISP_ISP_SETTING24_inst_addr                                             "0x001B"
#define  set_ISP_ISP_SETTING24_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING24_reg)=data)
#define  get_ISP_ISP_SETTING24_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING24_reg))
#define  ISP_ISP_SETTING24_setting24_shift                                       (24)
#define  ISP_ISP_SETTING24_setting25_shift                                       (16)
#define  ISP_ISP_SETTING24_setting26_shift                                       (8)
#define  ISP_ISP_SETTING24_setting27_shift                                       (0)
#define  ISP_ISP_SETTING24_setting24_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING24_setting25_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING24_setting26_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING24_setting27_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING24_setting24(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING24_setting25(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING24_setting26(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING24_setting27(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING24_get_setting24(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING24_get_setting25(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING24_get_setting26(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING24_get_setting27(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING28                                                      0x1802D170
#define  ISP_ISP_SETTING28_reg_addr                                              "0xB802D170"
#define  ISP_ISP_SETTING28_reg                                                   0xB802D170
#define  ISP_ISP_SETTING28_inst_addr                                             "0x001C"
#define  set_ISP_ISP_SETTING28_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING28_reg)=data)
#define  get_ISP_ISP_SETTING28_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING28_reg))
#define  ISP_ISP_SETTING28_setting28_shift                                       (24)
#define  ISP_ISP_SETTING28_setting29_shift                                       (16)
#define  ISP_ISP_SETTING28_setting30_shift                                       (8)
#define  ISP_ISP_SETTING28_setting31_shift                                       (0)
#define  ISP_ISP_SETTING28_setting28_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING28_setting29_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING28_setting30_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING28_setting31_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING28_setting28(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING28_setting29(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING28_setting30(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING28_setting31(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING28_get_setting28(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING28_get_setting29(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING28_get_setting30(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING28_get_setting31(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING32                                                      0x1802D174
#define  ISP_ISP_SETTING32_reg_addr                                              "0xB802D174"
#define  ISP_ISP_SETTING32_reg                                                   0xB802D174
#define  ISP_ISP_SETTING32_inst_addr                                             "0x001D"
#define  set_ISP_ISP_SETTING32_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING32_reg)=data)
#define  get_ISP_ISP_SETTING32_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING32_reg))
#define  ISP_ISP_SETTING32_setting32_shift                                       (24)
#define  ISP_ISP_SETTING32_setting33_shift                                       (16)
#define  ISP_ISP_SETTING32_setting34_shift                                       (8)
#define  ISP_ISP_SETTING32_setting35_shift                                       (0)
#define  ISP_ISP_SETTING32_setting32_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING32_setting33_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING32_setting34_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING32_setting35_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING32_setting32(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING32_setting33(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING32_setting34(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING32_setting35(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING32_get_setting32(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING32_get_setting33(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING32_get_setting34(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING32_get_setting35(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING36                                                      0x1802D178
#define  ISP_ISP_SETTING36_reg_addr                                              "0xB802D178"
#define  ISP_ISP_SETTING36_reg                                                   0xB802D178
#define  ISP_ISP_SETTING36_inst_addr                                             "0x001E"
#define  set_ISP_ISP_SETTING36_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING36_reg)=data)
#define  get_ISP_ISP_SETTING36_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING36_reg))
#define  ISP_ISP_SETTING36_setting36_shift                                       (24)
#define  ISP_ISP_SETTING36_setting37_shift                                       (16)
#define  ISP_ISP_SETTING36_setting38_shift                                       (8)
#define  ISP_ISP_SETTING36_setting39_shift                                       (0)
#define  ISP_ISP_SETTING36_setting36_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING36_setting37_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING36_setting38_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING36_setting39_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING36_setting36(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING36_setting37(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING36_setting38(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING36_setting39(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING36_get_setting36(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING36_get_setting37(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING36_get_setting38(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING36_get_setting39(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING40                                                      0x1802D17C
#define  ISP_ISP_SETTING40_reg_addr                                              "0xB802D17C"
#define  ISP_ISP_SETTING40_reg                                                   0xB802D17C
#define  ISP_ISP_SETTING40_inst_addr                                             "0x001F"
#define  set_ISP_ISP_SETTING40_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING40_reg)=data)
#define  get_ISP_ISP_SETTING40_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING40_reg))
#define  ISP_ISP_SETTING40_setting40_shift                                       (24)
#define  ISP_ISP_SETTING40_setting41_shift                                       (16)
#define  ISP_ISP_SETTING40_setting42_shift                                       (8)
#define  ISP_ISP_SETTING40_setting43_shift                                       (0)
#define  ISP_ISP_SETTING40_setting40_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING40_setting41_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING40_setting42_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING40_setting43_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING40_setting40(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING40_setting41(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING40_setting42(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING40_setting43(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING40_get_setting40(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING40_get_setting41(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING40_get_setting42(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING40_get_setting43(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING44                                                      0x1802D180
#define  ISP_ISP_SETTING44_reg_addr                                              "0xB802D180"
#define  ISP_ISP_SETTING44_reg                                                   0xB802D180
#define  ISP_ISP_SETTING44_inst_addr                                             "0x0020"
#define  set_ISP_ISP_SETTING44_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING44_reg)=data)
#define  get_ISP_ISP_SETTING44_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING44_reg))
#define  ISP_ISP_SETTING44_setting44_shift                                       (24)
#define  ISP_ISP_SETTING44_setting45_shift                                       (16)
#define  ISP_ISP_SETTING44_setting46_shift                                       (8)
#define  ISP_ISP_SETTING44_setting47_shift                                       (0)
#define  ISP_ISP_SETTING44_setting44_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING44_setting45_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING44_setting46_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING44_setting47_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING44_setting44(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING44_setting45(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING44_setting46(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING44_setting47(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING44_get_setting44(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING44_get_setting45(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING44_get_setting46(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING44_get_setting47(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING48                                                      0x1802D184
#define  ISP_ISP_SETTING48_reg_addr                                              "0xB802D184"
#define  ISP_ISP_SETTING48_reg                                                   0xB802D184
#define  ISP_ISP_SETTING48_inst_addr                                             "0x0021"
#define  set_ISP_ISP_SETTING48_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING48_reg)=data)
#define  get_ISP_ISP_SETTING48_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING48_reg))
#define  ISP_ISP_SETTING48_setting48_shift                                       (24)
#define  ISP_ISP_SETTING48_setting49_shift                                       (16)
#define  ISP_ISP_SETTING48_setting50_shift                                       (8)
#define  ISP_ISP_SETTING48_setting51_shift                                       (0)
#define  ISP_ISP_SETTING48_setting48_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING48_setting49_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING48_setting50_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING48_setting51_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING48_setting48(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING48_setting49(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING48_setting50(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING48_setting51(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING48_get_setting48(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING48_get_setting49(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING48_get_setting50(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING48_get_setting51(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING52                                                      0x1802D188
#define  ISP_ISP_SETTING52_reg_addr                                              "0xB802D188"
#define  ISP_ISP_SETTING52_reg                                                   0xB802D188
#define  ISP_ISP_SETTING52_inst_addr                                             "0x0022"
#define  set_ISP_ISP_SETTING52_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING52_reg)=data)
#define  get_ISP_ISP_SETTING52_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING52_reg))
#define  ISP_ISP_SETTING52_setting52_shift                                       (24)
#define  ISP_ISP_SETTING52_setting53_shift                                       (16)
#define  ISP_ISP_SETTING52_setting54_shift                                       (8)
#define  ISP_ISP_SETTING52_setting55_shift                                       (0)
#define  ISP_ISP_SETTING52_setting52_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING52_setting53_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING52_setting54_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING52_setting55_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING52_setting52(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING52_setting53(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING52_setting54(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING52_setting55(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING52_get_setting52(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING52_get_setting53(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING52_get_setting54(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING52_get_setting55(data)                                   (0x000000FF&(data))

#define  ISP_ISP_SETTING56                                                      0x1802D18C
#define  ISP_ISP_SETTING56_reg_addr                                              "0xB802D18C"
#define  ISP_ISP_SETTING56_reg                                                   0xB802D18C
#define  ISP_ISP_SETTING56_inst_addr                                             "0x0023"
#define  set_ISP_ISP_SETTING56_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_SETTING56_reg)=data)
#define  get_ISP_ISP_SETTING56_reg                                               (*((volatile unsigned int*)ISP_ISP_SETTING56_reg))
#define  ISP_ISP_SETTING56_setting56_shift                                       (24)
#define  ISP_ISP_SETTING56_setting57_shift                                       (16)
#define  ISP_ISP_SETTING56_setting58_shift                                       (8)
#define  ISP_ISP_SETTING56_setting59_shift                                       (0)
#define  ISP_ISP_SETTING56_setting56_mask                                        (0xFF000000)
#define  ISP_ISP_SETTING56_setting57_mask                                        (0x00FF0000)
#define  ISP_ISP_SETTING56_setting58_mask                                        (0x0000FF00)
#define  ISP_ISP_SETTING56_setting59_mask                                        (0x000000FF)
#define  ISP_ISP_SETTING56_setting56(data)                                       (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING56_setting57(data)                                       (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING56_setting58(data)                                       (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING56_setting59(data)                                       (0x000000FF&(data))
#define  ISP_ISP_SETTING56_get_setting56(data)                                   ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING56_get_setting57(data)                                   ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING56_get_setting58(data)                                   ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING56_get_setting59(data)                                   (0x000000FF&(data))

#define  ISP_ISP_Dummy0                                                         0x1802D198
#define  ISP_ISP_Dummy0_reg_addr                                                 "0xB802D198"
#define  ISP_ISP_Dummy0_reg                                                      0xB802D198
#define  ISP_ISP_Dummy0_inst_addr                                                "0x0024"
#define  set_ISP_ISP_Dummy0_reg(data)                                            (*((volatile unsigned int*)ISP_ISP_Dummy0_reg)=data)
#define  get_ISP_ISP_Dummy0_reg                                                  (*((volatile unsigned int*)ISP_ISP_Dummy0_reg))
#define  ISP_ISP_Dummy0_dummy_31_0_shift                                         (0)
#define  ISP_ISP_Dummy0_dummy_31_0_mask                                          (0xFFFFFFFF)
#define  ISP_ISP_Dummy0_dummy_31_0(data)                                         (0xFFFFFFFF&(data))
#define  ISP_ISP_Dummy0_get_dummy_31_0(data)                                     (0xFFFFFFFF&(data))

#define  ISP_ISP_Dummy1                                                         0x1802D19C
#define  ISP_ISP_Dummy1_reg_addr                                                 "0xB802D19C"
#define  ISP_ISP_Dummy1_reg                                                      0xB802D19C
#define  ISP_ISP_Dummy1_inst_addr                                                "0x0025"
#define  set_ISP_ISP_Dummy1_reg(data)                                            (*((volatile unsigned int*)ISP_ISP_Dummy1_reg)=data)
#define  get_ISP_ISP_Dummy1_reg                                                  (*((volatile unsigned int*)ISP_ISP_Dummy1_reg))
#define  ISP_ISP_Dummy1_dummy_31_0_shift                                         (0)
#define  ISP_ISP_Dummy1_dummy_31_0_mask                                          (0xFFFFFFFF)
#define  ISP_ISP_Dummy1_dummy_31_0(data)                                         (0xFFFFFFFF&(data))
#define  ISP_ISP_Dummy1_get_dummy_31_0(data)                                     (0xFFFFFFFF&(data))

#define  ISP_ISP_CRC_CTRL                                                       0x1802D1A0
#define  ISP_ISP_CRC_CTRL_reg_addr                                               "0xB802D1A0"
#define  ISP_ISP_CRC_CTRL_reg                                                    0xB802D1A0
#define  ISP_ISP_CRC_CTRL_inst_addr                                              "0x0026"
#define  set_ISP_ISP_CRC_CTRL_reg(data)                                          (*((volatile unsigned int*)ISP_ISP_CRC_CTRL_reg)=data)
#define  get_ISP_ISP_CRC_CTRL_reg                                                (*((volatile unsigned int*)ISP_ISP_CRC_CTRL_reg))
#define  ISP_ISP_CRC_CTRL_crc_err_cnt_shift                                      (16)
#define  ISP_ISP_CRC_CTRL_crc_port_en_shift                                      (4)
#define  ISP_ISP_CRC_CTRL_crc_auto_cmp_en_shift                                  (2)
#define  ISP_ISP_CRC_CTRL_crc_conti_shift                                        (1)
#define  ISP_ISP_CRC_CTRL_crc_start_shift                                        (0)
#define  ISP_ISP_CRC_CTRL_crc_err_cnt_mask                                       (0xFFFF0000)
#define  ISP_ISP_CRC_CTRL_crc_port_en_mask                                       (0x0000FFF0)
#define  ISP_ISP_CRC_CTRL_crc_auto_cmp_en_mask                                   (0x00000004)
#define  ISP_ISP_CRC_CTRL_crc_conti_mask                                         (0x00000002)
#define  ISP_ISP_CRC_CTRL_crc_start_mask                                         (0x00000001)
#define  ISP_ISP_CRC_CTRL_crc_err_cnt(data)                                      (0xFFFF0000&((data)<<16))
#define  ISP_ISP_CRC_CTRL_crc_port_en(data)                                      (0x0000FFF0&((data)<<4))
#define  ISP_ISP_CRC_CTRL_crc_auto_cmp_en(data)                                  (0x00000004&((data)<<2))
#define  ISP_ISP_CRC_CTRL_crc_conti(data)                                        (0x00000002&((data)<<1))
#define  ISP_ISP_CRC_CTRL_crc_start(data)                                        (0x00000001&(data))
#define  ISP_ISP_CRC_CTRL_get_crc_err_cnt(data)                                  ((0xFFFF0000&(data))>>16)
#define  ISP_ISP_CRC_CTRL_get_crc_port_en(data)                                  ((0x0000FFF0&(data))>>4)
#define  ISP_ISP_CRC_CTRL_get_crc_auto_cmp_en(data)                              ((0x00000004&(data))>>2)
#define  ISP_ISP_CRC_CTRL_get_crc_conti(data)                                    ((0x00000002&(data))>>1)
#define  ISP_ISP_CRC_CTRL_get_crc_start(data)                                    (0x00000001&(data))

#define  ISP_ISP_CRC_RESULT                                                     0x1802D1A4
#define  ISP_ISP_CRC_RESULT_reg_addr                                             "0xB802D1A4"
#define  ISP_ISP_CRC_RESULT_reg                                                  0xB802D1A4
#define  ISP_ISP_CRC_RESULT_inst_addr                                            "0x0027"
#define  set_ISP_ISP_CRC_RESULT_reg(data)                                        (*((volatile unsigned int*)ISP_ISP_CRC_RESULT_reg)=data)
#define  get_ISP_ISP_CRC_RESULT_reg                                              (*((volatile unsigned int*)ISP_ISP_CRC_RESULT_reg))
#define  ISP_ISP_CRC_RESULT_crc_result_shift                                     (0)
#define  ISP_ISP_CRC_RESULT_crc_result_mask                                      (0xFFFFFFFF)
#define  ISP_ISP_CRC_RESULT_crc_result(data)                                     (0xFFFFFFFF&(data))
#define  ISP_ISP_CRC_RESULT_get_crc_result(data)                                 (0xFFFFFFFF&(data))

#define  ISP_ISP_CRC_GOLDEN                                                     0x1802D1A8
#define  ISP_ISP_CRC_GOLDEN_reg_addr                                             "0xB802D1A8"
#define  ISP_ISP_CRC_GOLDEN_reg                                                  0xB802D1A8
#define  ISP_ISP_CRC_GOLDEN_inst_addr                                            "0x0028"
#define  set_ISP_ISP_CRC_GOLDEN_reg(data)                                        (*((volatile unsigned int*)ISP_ISP_CRC_GOLDEN_reg)=data)
#define  get_ISP_ISP_CRC_GOLDEN_reg                                              (*((volatile unsigned int*)ISP_ISP_CRC_GOLDEN_reg))
#define  ISP_ISP_CRC_GOLDEN_crc_golden_shift                                     (0)
#define  ISP_ISP_CRC_GOLDEN_crc_golden_mask                                      (0xFFFFFFFF)
#define  ISP_ISP_CRC_GOLDEN_crc_golden(data)                                     (0xFFFFFFFF&(data))
#define  ISP_ISP_CRC_GOLDEN_get_crc_golden(data)                                 (0xFFFFFFFF&(data))

#define  ISP_ISP_TST_OUT                                                        0x1802D1AC
#define  ISP_ISP_TST_OUT_reg_addr                                                "0xB802D1AC"
#define  ISP_ISP_TST_OUT_reg                                                     0xB802D1AC
#define  ISP_ISP_TST_OUT_inst_addr                                               "0x0029"
#define  set_ISP_ISP_TST_OUT_reg(data)                                           (*((volatile unsigned int*)ISP_ISP_TST_OUT_reg)=data)
#define  get_ISP_ISP_TST_OUT_reg                                                 (*((volatile unsigned int*)ISP_ISP_TST_OUT_reg))
#define  ISP_ISP_TST_OUT_isp_tst_out_shift                                       (0)
#define  ISP_ISP_TST_OUT_isp_tst_out_mask                                        (0xFFFFFFFF)
#define  ISP_ISP_TST_OUT_isp_tst_out(data)                                       (0xFFFFFFFF&(data))
#define  ISP_ISP_TST_OUT_get_isp_tst_out(data)                                   (0xFFFFFFFF&(data))

#define  ISP_ISP_FIFO_BIST                                                      0x1802D1B0
#define  ISP_ISP_FIFO_BIST_reg_addr                                              "0xB802D1B0"
#define  ISP_ISP_FIFO_BIST_reg                                                   0xB802D1B0
#define  ISP_ISP_FIFO_BIST_inst_addr                                             "0x002A"
#define  set_ISP_ISP_FIFO_BIST_reg(data)                                         (*((volatile unsigned int*)ISP_ISP_FIFO_BIST_reg)=data)
#define  get_ISP_ISP_FIFO_BIST_reg                                               (*((volatile unsigned int*)ISP_ISP_FIFO_BIST_reg))
#define  ISP_ISP_FIFO_BIST_isp_bist_enable_shift                                 (31)
#define  ISP_ISP_FIFO_BIST_isp_bist_done_shift                                   (30)
#define  ISP_ISP_FIFO_BIST_isp_bist_result_shift                                 (29)
#define  ISP_ISP_FIFO_BIST_isp_bist_length_shift                                 (0)
#define  ISP_ISP_FIFO_BIST_isp_bist_enable_mask                                  (0x80000000)
#define  ISP_ISP_FIFO_BIST_isp_bist_done_mask                                    (0x40000000)
#define  ISP_ISP_FIFO_BIST_isp_bist_result_mask                                  (0x20000000)
#define  ISP_ISP_FIFO_BIST_isp_bist_length_mask                                  (0x000FFFFF)
#define  ISP_ISP_FIFO_BIST_isp_bist_enable(data)                                 (0x80000000&((data)<<31))
#define  ISP_ISP_FIFO_BIST_isp_bist_done(data)                                   (0x40000000&((data)<<30))
#define  ISP_ISP_FIFO_BIST_isp_bist_result(data)                                 (0x20000000&((data)<<29))
#define  ISP_ISP_FIFO_BIST_isp_bist_length(data)                                 (0x000FFFFF&(data))
#define  ISP_ISP_FIFO_BIST_get_isp_bist_enable(data)                             ((0x80000000&(data))>>31)
#define  ISP_ISP_FIFO_BIST_get_isp_bist_done(data)                               ((0x40000000&(data))>>30)
#define  ISP_ISP_FIFO_BIST_get_isp_bist_result(data)                             ((0x20000000&(data))>>29)
#define  ISP_ISP_FIFO_BIST_get_isp_bist_length(data)                             (0x000FFFFF&(data))

#define  ISP_ISP_SETTING10_01                                                   0x1802D1B4
#define  ISP_ISP_SETTING10_01_reg_addr                                           "0xB802D1B4"
#define  ISP_ISP_SETTING10_01_reg                                                0xB802D1B4
#define  ISP_ISP_SETTING10_01_inst_addr                                          "0x002B"
#define  set_ISP_ISP_SETTING10_01_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_01_reg)=data)
#define  get_ISP_ISP_SETTING10_01_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_01_reg))
#define  ISP_ISP_SETTING10_01_setting10_01_shift                                 (24)
#define  ISP_ISP_SETTING10_01_setting11_01_shift                                 (16)
#define  ISP_ISP_SETTING10_01_setting12_01_shift                                 (8)
#define  ISP_ISP_SETTING10_01_setting13_01_shift                                 (0)
#define  ISP_ISP_SETTING10_01_setting10_01_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_01_setting11_01_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_01_setting12_01_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_01_setting13_01_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_01_setting10_01(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_01_setting11_01(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_01_setting12_01(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_01_setting13_01(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_01_get_setting10_01(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_01_get_setting11_01(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_01_get_setting12_01(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_01_get_setting13_01(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_02                                                   0x1802D1B8
#define  ISP_ISP_SETTING10_02_reg_addr                                           "0xB802D1B8"
#define  ISP_ISP_SETTING10_02_reg                                                0xB802D1B8
#define  ISP_ISP_SETTING10_02_inst_addr                                          "0x002C"
#define  set_ISP_ISP_SETTING10_02_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_02_reg)=data)
#define  get_ISP_ISP_SETTING10_02_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_02_reg))
#define  ISP_ISP_SETTING10_02_setting10_02_shift                                 (24)
#define  ISP_ISP_SETTING10_02_setting11_02_shift                                 (16)
#define  ISP_ISP_SETTING10_02_setting12_02_shift                                 (8)
#define  ISP_ISP_SETTING10_02_setting13_02_shift                                 (0)
#define  ISP_ISP_SETTING10_02_setting10_02_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_02_setting11_02_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_02_setting12_02_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_02_setting13_02_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_02_setting10_02(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_02_setting11_02(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_02_setting12_02(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_02_setting13_02(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_02_get_setting10_02(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_02_get_setting11_02(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_02_get_setting12_02(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_02_get_setting13_02(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_03                                                   0x1802D1BC
#define  ISP_ISP_SETTING10_03_reg_addr                                           "0xB802D1BC"
#define  ISP_ISP_SETTING10_03_reg                                                0xB802D1BC
#define  ISP_ISP_SETTING10_03_inst_addr                                          "0x002D"
#define  set_ISP_ISP_SETTING10_03_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_03_reg)=data)
#define  get_ISP_ISP_SETTING10_03_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_03_reg))
#define  ISP_ISP_SETTING10_03_setting10_03_shift                                 (24)
#define  ISP_ISP_SETTING10_03_setting11_03_shift                                 (16)
#define  ISP_ISP_SETTING10_03_setting12_03_shift                                 (8)
#define  ISP_ISP_SETTING10_03_setting13_03_shift                                 (0)
#define  ISP_ISP_SETTING10_03_setting10_03_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_03_setting11_03_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_03_setting12_03_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_03_setting13_03_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_03_setting10_03(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_03_setting11_03(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_03_setting12_03(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_03_setting13_03(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_03_get_setting10_03(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_03_get_setting11_03(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_03_get_setting12_03(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_03_get_setting13_03(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_04                                                   0x1802D1C0
#define  ISP_ISP_SETTING10_04_reg_addr                                           "0xB802D1C0"
#define  ISP_ISP_SETTING10_04_reg                                                0xB802D1C0
#define  ISP_ISP_SETTING10_04_inst_addr                                          "0x002E"
#define  set_ISP_ISP_SETTING10_04_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_04_reg)=data)
#define  get_ISP_ISP_SETTING10_04_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_04_reg))
#define  ISP_ISP_SETTING10_04_setting10_04_shift                                 (24)
#define  ISP_ISP_SETTING10_04_setting11_04_shift                                 (16)
#define  ISP_ISP_SETTING10_04_setting12_04_shift                                 (8)
#define  ISP_ISP_SETTING10_04_setting13_04_shift                                 (0)
#define  ISP_ISP_SETTING10_04_setting10_04_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_04_setting11_04_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_04_setting12_04_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_04_setting13_04_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_04_setting10_04(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_04_setting11_04(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_04_setting12_04(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_04_setting13_04(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_04_get_setting10_04(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_04_get_setting11_04(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_04_get_setting12_04(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_04_get_setting13_04(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_05                                                   0x1802D1C4
#define  ISP_ISP_SETTING10_05_reg_addr                                           "0xB802D1C4"
#define  ISP_ISP_SETTING10_05_reg                                                0xB802D1C4
#define  ISP_ISP_SETTING10_05_inst_addr                                          "0x002F"
#define  set_ISP_ISP_SETTING10_05_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_05_reg)=data)
#define  get_ISP_ISP_SETTING10_05_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_05_reg))
#define  ISP_ISP_SETTING10_05_setting10_05_shift                                 (24)
#define  ISP_ISP_SETTING10_05_setting11_05_shift                                 (16)
#define  ISP_ISP_SETTING10_05_setting12_05_shift                                 (8)
#define  ISP_ISP_SETTING10_05_setting13_05_shift                                 (0)
#define  ISP_ISP_SETTING10_05_setting10_05_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_05_setting11_05_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_05_setting12_05_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_05_setting13_05_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_05_setting10_05(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_05_setting11_05(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_05_setting12_05(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_05_setting13_05(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_05_get_setting10_05(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_05_get_setting11_05(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_05_get_setting12_05(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_05_get_setting13_05(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_06                                                   0x1802D1C8
#define  ISP_ISP_SETTING10_06_reg_addr                                           "0xB802D1C8"
#define  ISP_ISP_SETTING10_06_reg                                                0xB802D1C8
#define  ISP_ISP_SETTING10_06_inst_addr                                          "0x0030"
#define  set_ISP_ISP_SETTING10_06_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_06_reg)=data)
#define  get_ISP_ISP_SETTING10_06_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_06_reg))
#define  ISP_ISP_SETTING10_06_setting10_06_shift                                 (24)
#define  ISP_ISP_SETTING10_06_setting11_06_shift                                 (16)
#define  ISP_ISP_SETTING10_06_setting12_06_shift                                 (8)
#define  ISP_ISP_SETTING10_06_setting13_06_shift                                 (0)
#define  ISP_ISP_SETTING10_06_setting10_06_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_06_setting11_06_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_06_setting12_06_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_06_setting13_06_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_06_setting10_06(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_06_setting11_06(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_06_setting12_06(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_06_setting13_06(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_06_get_setting10_06(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_06_get_setting11_06(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_06_get_setting12_06(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_06_get_setting13_06(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_07                                                   0x1802D1CC
#define  ISP_ISP_SETTING10_07_reg_addr                                           "0xB802D1CC"
#define  ISP_ISP_SETTING10_07_reg                                                0xB802D1CC
#define  ISP_ISP_SETTING10_07_inst_addr                                          "0x0031"
#define  set_ISP_ISP_SETTING10_07_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_07_reg)=data)
#define  get_ISP_ISP_SETTING10_07_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_07_reg))
#define  ISP_ISP_SETTING10_07_setting10_07_shift                                 (24)
#define  ISP_ISP_SETTING10_07_setting11_07_shift                                 (16)
#define  ISP_ISP_SETTING10_07_setting12_07_shift                                 (8)
#define  ISP_ISP_SETTING10_07_setting13_07_shift                                 (0)
#define  ISP_ISP_SETTING10_07_setting10_07_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_07_setting11_07_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_07_setting12_07_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_07_setting13_07_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_07_setting10_07(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_07_setting11_07(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_07_setting12_07(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_07_setting13_07(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_07_get_setting10_07(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_07_get_setting11_07(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_07_get_setting12_07(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_07_get_setting13_07(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_08                                                   0x1802D1D0
#define  ISP_ISP_SETTING10_08_reg_addr                                           "0xB802D1D0"
#define  ISP_ISP_SETTING10_08_reg                                                0xB802D1D0
#define  ISP_ISP_SETTING10_08_inst_addr                                          "0x0032"
#define  set_ISP_ISP_SETTING10_08_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_08_reg)=data)
#define  get_ISP_ISP_SETTING10_08_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_08_reg))
#define  ISP_ISP_SETTING10_08_setting10_08_shift                                 (24)
#define  ISP_ISP_SETTING10_08_setting11_08_shift                                 (16)
#define  ISP_ISP_SETTING10_08_setting12_08_shift                                 (8)
#define  ISP_ISP_SETTING10_08_setting13_08_shift                                 (0)
#define  ISP_ISP_SETTING10_08_setting10_08_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_08_setting11_08_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_08_setting12_08_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_08_setting13_08_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_08_setting10_08(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_08_setting11_08(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_08_setting12_08(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_08_setting13_08(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_08_get_setting10_08(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_08_get_setting11_08(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_08_get_setting12_08(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_08_get_setting13_08(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_09                                                   0x1802D1D4
#define  ISP_ISP_SETTING10_09_reg_addr                                           "0xB802D1D4"
#define  ISP_ISP_SETTING10_09_reg                                                0xB802D1D4
#define  ISP_ISP_SETTING10_09_inst_addr                                          "0x0033"
#define  set_ISP_ISP_SETTING10_09_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_09_reg)=data)
#define  get_ISP_ISP_SETTING10_09_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_09_reg))
#define  ISP_ISP_SETTING10_09_setting10_09_shift                                 (24)
#define  ISP_ISP_SETTING10_09_setting11_09_shift                                 (16)
#define  ISP_ISP_SETTING10_09_setting12_09_shift                                 (8)
#define  ISP_ISP_SETTING10_09_setting13_09_shift                                 (0)
#define  ISP_ISP_SETTING10_09_setting10_09_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_09_setting11_09_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_09_setting12_09_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_09_setting13_09_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_09_setting10_09(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_09_setting11_09(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_09_setting12_09(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_09_setting13_09(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_09_get_setting10_09(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_09_get_setting11_09(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_09_get_setting12_09(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_09_get_setting13_09(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_10                                                   0x1802D1D8
#define  ISP_ISP_SETTING10_10_reg_addr                                           "0xB802D1D8"
#define  ISP_ISP_SETTING10_10_reg                                                0xB802D1D8
#define  ISP_ISP_SETTING10_10_inst_addr                                          "0x0034"
#define  set_ISP_ISP_SETTING10_10_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_10_reg)=data)
#define  get_ISP_ISP_SETTING10_10_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_10_reg))
#define  ISP_ISP_SETTING10_10_setting10_10_shift                                 (24)
#define  ISP_ISP_SETTING10_10_setting11_10_shift                                 (16)
#define  ISP_ISP_SETTING10_10_setting12_10_shift                                 (8)
#define  ISP_ISP_SETTING10_10_setting13_10_shift                                 (0)
#define  ISP_ISP_SETTING10_10_setting10_10_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_10_setting11_10_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_10_setting12_10_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_10_setting13_10_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_10_setting10_10(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_10_setting11_10(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_10_setting12_10(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_10_setting13_10(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_10_get_setting10_10(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_10_get_setting11_10(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_10_get_setting12_10(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_10_get_setting13_10(data)                             (0x000000FF&(data))

#define  ISP_ISP_SETTING10_11                                                   0x1802D1DC
#define  ISP_ISP_SETTING10_11_reg_addr                                           "0xB802D1DC"
#define  ISP_ISP_SETTING10_11_reg                                                0xB802D1DC
#define  ISP_ISP_SETTING10_11_inst_addr                                          "0x0035"
#define  set_ISP_ISP_SETTING10_11_reg(data)                                      (*((volatile unsigned int*)ISP_ISP_SETTING10_11_reg)=data)
#define  get_ISP_ISP_SETTING10_11_reg                                            (*((volatile unsigned int*)ISP_ISP_SETTING10_11_reg))
#define  ISP_ISP_SETTING10_11_setting10_11_shift                                 (24)
#define  ISP_ISP_SETTING10_11_setting11_11_shift                                 (16)
#define  ISP_ISP_SETTING10_11_setting12_11_shift                                 (8)
#define  ISP_ISP_SETTING10_11_setting13_11_shift                                 (0)
#define  ISP_ISP_SETTING10_11_setting10_11_mask                                  (0xFF000000)
#define  ISP_ISP_SETTING10_11_setting11_11_mask                                  (0x00FF0000)
#define  ISP_ISP_SETTING10_11_setting12_11_mask                                  (0x0000FF00)
#define  ISP_ISP_SETTING10_11_setting13_11_mask                                  (0x000000FF)
#define  ISP_ISP_SETTING10_11_setting10_11(data)                                 (0xFF000000&((data)<<24))
#define  ISP_ISP_SETTING10_11_setting11_11(data)                                 (0x00FF0000&((data)<<16))
#define  ISP_ISP_SETTING10_11_setting12_11(data)                                 (0x0000FF00&((data)<<8))
#define  ISP_ISP_SETTING10_11_setting13_11(data)                                 (0x000000FF&(data))
#define  ISP_ISP_SETTING10_11_get_setting10_11(data)                             ((0xFF000000&(data))>>24)
#define  ISP_ISP_SETTING10_11_get_setting11_11(data)                             ((0x00FF0000&(data))>>16)
#define  ISP_ISP_SETTING10_11_get_setting12_11(data)                             ((0x0000FF00&(data))>>8)
#define  ISP_ISP_SETTING10_11_get_setting13_11(data)                             (0x000000FF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======ISP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  sdunlock_irq_en:1;
        RBus_UInt32  sdunlock_irq:1;
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dbg_sel:6;
        RBus_UInt32  res3:15;
        RBus_UInt32  pasel:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  isp_en:1;
    };
}isp_isp_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  scrambler_func:1;
        RBus_UInt32  scrambler_sel:1;
        RBus_UInt32  scrambler_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  bit_cnt:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  bkpol_sel:5;
        RBus_UInt32  res4:3;
        RBus_UInt32  pol_bit1_sel:5;
        RBus_UInt32  res5:3;
        RBus_UInt32  pol_bit0_sel:5;
    };
}isp_isp_tcon_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  hs_to_den_distance:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  sdlock_manual_value:1;
        RBus_UInt32  sdlock_manual_mode:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  td:11;
    };
}isp_isp_td_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  vb_sd_set_frm:8;
    };
}isp_isp_vd_sd_set_frm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sd_lock_type:1;
        RBus_UInt32  tbk_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  tbk1:9;
        RBus_UInt32  res2:3;
        RBus_UInt32  tbk2:9;
        RBus_UInt32  isp_dummy:8;
    };
}isp_isp_tbk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  bac:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  set:9;
    };
}isp_isp_bac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  eol:9;
    };
}isp_isp_eol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  bkpolp:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  bkpoln:9;
    };
}isp_isp_bkpol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  polp_gseln:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  polp_gselp:9;
    };
}isp_isp_polp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  poln_gseln:9;
        RBus_UInt32  res2:7;
        RBus_UInt32  poln_gselp:9;
    };
}isp_isp_poln_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting00_00:8;
        RBus_UInt32  setting00_01:8;
        RBus_UInt32  setting00_02:8;
        RBus_UInt32  setting00_03:8;
    };
}isp_isp_setting00_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting00_04:8;
        RBus_UInt32  setting00_05:8;
        RBus_UInt32  setting00_06:8;
        RBus_UInt32  setting00_07:8;
    };
}isp_isp_setting00_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting00_08:8;
        RBus_UInt32  setting00_09:8;
        RBus_UInt32  setting00_10:8;
        RBus_UInt32  setting00_11:8;
    };
}isp_isp_setting00_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting01_00:8;
        RBus_UInt32  setting01_01:8;
        RBus_UInt32  setting01_02:8;
        RBus_UInt32  setting01_03:8;
    };
}isp_isp_setting01_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting01_04:8;
        RBus_UInt32  setting01_05:8;
        RBus_UInt32  setting01_06:8;
        RBus_UInt32  setting01_07:8;
    };
}isp_isp_setting01_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting01_08:8;
        RBus_UInt32  setting01_09:8;
        RBus_UInt32  setting01_10:8;
        RBus_UInt32  setting01_11:8;
    };
}isp_isp_setting01_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting02_00:8;
        RBus_UInt32  setting02_01:8;
        RBus_UInt32  setting02_02:8;
        RBus_UInt32  setting02_03:8;
    };
}isp_isp_setting02_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting02_04:8;
        RBus_UInt32  setting02_05:8;
        RBus_UInt32  setting02_06:8;
        RBus_UInt32  setting02_07:8;
    };
}isp_isp_setting02_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting02_08:8;
        RBus_UInt32  setting02_09:8;
        RBus_UInt32  setting02_10:8;
        RBus_UInt32  setting02_11:8;
    };
}isp_isp_setting02_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting03_00:8;
        RBus_UInt32  setting03_01:8;
        RBus_UInt32  setting03_02:8;
        RBus_UInt32  setting03_03:8;
    };
}isp_isp_setting03_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting03_04:8;
        RBus_UInt32  setting03_05:8;
        RBus_UInt32  setting03_06:8;
        RBus_UInt32  setting03_07:8;
    };
}isp_isp_setting03_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting03_08:8;
        RBus_UInt32  setting03_09:8;
        RBus_UInt32  setting03_10:8;
        RBus_UInt32  setting03_11:8;
    };
}isp_isp_setting03_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting04:8;
        RBus_UInt32  setting05:8;
        RBus_UInt32  setting06:8;
        RBus_UInt32  setting07:8;
    };
}isp_isp_setting04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting08:8;
        RBus_UInt32  setting09:8;
        RBus_UInt32  setting10:8;
        RBus_UInt32  setting11:8;
    };
}isp_isp_setting08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting12:8;
        RBus_UInt32  setting13:8;
        RBus_UInt32  setting14:8;
        RBus_UInt32  setting15:8;
    };
}isp_isp_setting12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting16:8;
        RBus_UInt32  setting17:8;
        RBus_UInt32  setting18:8;
        RBus_UInt32  setting19:8;
    };
}isp_isp_setting16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting20:8;
        RBus_UInt32  setting21:8;
        RBus_UInt32  setting22:8;
        RBus_UInt32  setting23:8;
    };
}isp_isp_setting20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting24:8;
        RBus_UInt32  setting25:8;
        RBus_UInt32  setting26:8;
        RBus_UInt32  setting27:8;
    };
}isp_isp_setting24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting28:8;
        RBus_UInt32  setting29:8;
        RBus_UInt32  setting30:8;
        RBus_UInt32  setting31:8;
    };
}isp_isp_setting28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting32:8;
        RBus_UInt32  setting33:8;
        RBus_UInt32  setting34:8;
        RBus_UInt32  setting35:8;
    };
}isp_isp_setting32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting36:8;
        RBus_UInt32  setting37:8;
        RBus_UInt32  setting38:8;
        RBus_UInt32  setting39:8;
    };
}isp_isp_setting36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting40:8;
        RBus_UInt32  setting41:8;
        RBus_UInt32  setting42:8;
        RBus_UInt32  setting43:8;
    };
}isp_isp_setting40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting44:8;
        RBus_UInt32  setting45:8;
        RBus_UInt32  setting46:8;
        RBus_UInt32  setting47:8;
    };
}isp_isp_setting44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting48:8;
        RBus_UInt32  setting49:8;
        RBus_UInt32  setting50:8;
        RBus_UInt32  setting51:8;
    };
}isp_isp_setting48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting52:8;
        RBus_UInt32  setting53:8;
        RBus_UInt32  setting54:8;
        RBus_UInt32  setting55:8;
    };
}isp_isp_setting52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting56:8;
        RBus_UInt32  setting57:8;
        RBus_UInt32  setting58:8;
        RBus_UInt32  setting59:8;
    };
}isp_isp_setting56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d198_31_0:32;
    };
}isp_isp_dummy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d19c_31_0:32;
    };
}isp_isp_dummy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  crc_port_en:12;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_start:1;
    };
}isp_isp_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}isp_isp_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_golden:32;
    };
}isp_isp_crc_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  isp_tst_out:32;
    };
}isp_isp_tst_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  isp_bist_enable:1;
        RBus_UInt32  isp_bist_done:1;
        RBus_UInt32  isp_bist_result:1;
        RBus_UInt32  res1:9;
        RBus_UInt32  isp_bist_length:20;
    };
}isp_isp_fifo_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_01:8;
        RBus_UInt32  setting11_01:8;
        RBus_UInt32  setting12_01:8;
        RBus_UInt32  setting13_01:8;
    };
}isp_isp_setting10_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_02:8;
        RBus_UInt32  setting11_02:8;
        RBus_UInt32  setting12_02:8;
        RBus_UInt32  setting13_02:8;
    };
}isp_isp_setting10_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_03:8;
        RBus_UInt32  setting11_03:8;
        RBus_UInt32  setting12_03:8;
        RBus_UInt32  setting13_03:8;
    };
}isp_isp_setting10_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_04:8;
        RBus_UInt32  setting11_04:8;
        RBus_UInt32  setting12_04:8;
        RBus_UInt32  setting13_04:8;
    };
}isp_isp_setting10_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_05:8;
        RBus_UInt32  setting11_05:8;
        RBus_UInt32  setting12_05:8;
        RBus_UInt32  setting13_05:8;
    };
}isp_isp_setting10_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_06:8;
        RBus_UInt32  setting11_06:8;
        RBus_UInt32  setting12_06:8;
        RBus_UInt32  setting13_06:8;
    };
}isp_isp_setting10_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_07:8;
        RBus_UInt32  setting11_07:8;
        RBus_UInt32  setting12_07:8;
        RBus_UInt32  setting13_07:8;
    };
}isp_isp_setting10_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_08:8;
        RBus_UInt32  setting11_08:8;
        RBus_UInt32  setting12_08:8;
        RBus_UInt32  setting13_08:8;
    };
}isp_isp_setting10_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_09:8;
        RBus_UInt32  setting11_09:8;
        RBus_UInt32  setting12_09:8;
        RBus_UInt32  setting13_09:8;
    };
}isp_isp_setting10_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_10:8;
        RBus_UInt32  setting11_10:8;
        RBus_UInt32  setting12_10:8;
        RBus_UInt32  setting13_10:8;
    };
}isp_isp_setting10_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting10_11:8;
        RBus_UInt32  setting11_11:8;
        RBus_UInt32  setting12_11:8;
        RBus_UInt32  setting13_11:8;
    };
}isp_isp_setting10_11_RBUS;

#else //apply LITTLE_ENDIAN

//======ISP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  isp_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  pasel:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  dbg_sel:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  sdunlock_irq:1;
        RBus_UInt32  sdunlock_irq_en:1;
        RBus_UInt32  res4:1;
    };
}isp_isp_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pol_bit0_sel:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  pol_bit1_sel:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  bkpol_sel:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  bit_cnt:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  scrambler_en:1;
        RBus_UInt32  scrambler_sel:1;
        RBus_UInt32  scrambler_func:1;
        RBus_UInt32  res5:1;
    };
}isp_isp_tcon_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  td:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  sdlock_manual_mode:1;
        RBus_UInt32  sdlock_manual_value:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hs_to_den_distance:8;
        RBus_UInt32  res3:8;
    };
}isp_isp_td_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vb_sd_set_frm:8;
        RBus_UInt32  res1:24;
    };
}isp_isp_vd_sd_set_frm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  isp_dummy:8;
        RBus_UInt32  tbk2:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  tbk1:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  tbk_en:1;
        RBus_UInt32  sd_lock_type:1;
    };
}isp_isp_tbk_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  set:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  bac:9;
        RBus_UInt32  res2:7;
    };
}isp_isp_bac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eol:9;
        RBus_UInt32  res1:23;
    };
}isp_isp_eol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bkpoln:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  bkpolp:9;
        RBus_UInt32  res2:7;
    };
}isp_isp_bkpol_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  polp_gselp:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  polp_gseln:9;
        RBus_UInt32  res2:7;
    };
}isp_isp_polp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  poln_gselp:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  poln_gseln:9;
        RBus_UInt32  res2:7;
    };
}isp_isp_poln_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting00_03:8;
        RBus_UInt32  setting00_02:8;
        RBus_UInt32  setting00_01:8;
        RBus_UInt32  setting00_00:8;
    };
}isp_isp_setting00_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting00_07:8;
        RBus_UInt32  setting00_06:8;
        RBus_UInt32  setting00_05:8;
        RBus_UInt32  setting00_04:8;
    };
}isp_isp_setting00_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting00_11:8;
        RBus_UInt32  setting00_10:8;
        RBus_UInt32  setting00_09:8;
        RBus_UInt32  setting00_08:8;
    };
}isp_isp_setting00_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting01_03:8;
        RBus_UInt32  setting01_02:8;
        RBus_UInt32  setting01_01:8;
        RBus_UInt32  setting01_00:8;
    };
}isp_isp_setting01_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting01_07:8;
        RBus_UInt32  setting01_06:8;
        RBus_UInt32  setting01_05:8;
        RBus_UInt32  setting01_04:8;
    };
}isp_isp_setting01_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting01_11:8;
        RBus_UInt32  setting01_10:8;
        RBus_UInt32  setting01_09:8;
        RBus_UInt32  setting01_08:8;
    };
}isp_isp_setting01_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting02_03:8;
        RBus_UInt32  setting02_02:8;
        RBus_UInt32  setting02_01:8;
        RBus_UInt32  setting02_00:8;
    };
}isp_isp_setting02_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting02_07:8;
        RBus_UInt32  setting02_06:8;
        RBus_UInt32  setting02_05:8;
        RBus_UInt32  setting02_04:8;
    };
}isp_isp_setting02_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting02_11:8;
        RBus_UInt32  setting02_10:8;
        RBus_UInt32  setting02_09:8;
        RBus_UInt32  setting02_08:8;
    };
}isp_isp_setting02_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting03_03:8;
        RBus_UInt32  setting03_02:8;
        RBus_UInt32  setting03_01:8;
        RBus_UInt32  setting03_00:8;
    };
}isp_isp_setting03_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting03_07:8;
        RBus_UInt32  setting03_06:8;
        RBus_UInt32  setting03_05:8;
        RBus_UInt32  setting03_04:8;
    };
}isp_isp_setting03_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting03_11:8;
        RBus_UInt32  setting03_10:8;
        RBus_UInt32  setting03_09:8;
        RBus_UInt32  setting03_08:8;
    };
}isp_isp_setting03_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting07:8;
        RBus_UInt32  setting06:8;
        RBus_UInt32  setting05:8;
        RBus_UInt32  setting04:8;
    };
}isp_isp_setting04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting11:8;
        RBus_UInt32  setting10:8;
        RBus_UInt32  setting09:8;
        RBus_UInt32  setting08:8;
    };
}isp_isp_setting08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting15:8;
        RBus_UInt32  setting14:8;
        RBus_UInt32  setting13:8;
        RBus_UInt32  setting12:8;
    };
}isp_isp_setting12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting19:8;
        RBus_UInt32  setting18:8;
        RBus_UInt32  setting17:8;
        RBus_UInt32  setting16:8;
    };
}isp_isp_setting16_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting23:8;
        RBus_UInt32  setting22:8;
        RBus_UInt32  setting21:8;
        RBus_UInt32  setting20:8;
    };
}isp_isp_setting20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting27:8;
        RBus_UInt32  setting26:8;
        RBus_UInt32  setting25:8;
        RBus_UInt32  setting24:8;
    };
}isp_isp_setting24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting31:8;
        RBus_UInt32  setting30:8;
        RBus_UInt32  setting29:8;
        RBus_UInt32  setting28:8;
    };
}isp_isp_setting28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting35:8;
        RBus_UInt32  setting34:8;
        RBus_UInt32  setting33:8;
        RBus_UInt32  setting32:8;
    };
}isp_isp_setting32_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting39:8;
        RBus_UInt32  setting38:8;
        RBus_UInt32  setting37:8;
        RBus_UInt32  setting36:8;
    };
}isp_isp_setting36_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting43:8;
        RBus_UInt32  setting42:8;
        RBus_UInt32  setting41:8;
        RBus_UInt32  setting40:8;
    };
}isp_isp_setting40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting47:8;
        RBus_UInt32  setting46:8;
        RBus_UInt32  setting45:8;
        RBus_UInt32  setting44:8;
    };
}isp_isp_setting44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting51:8;
        RBus_UInt32  setting50:8;
        RBus_UInt32  setting49:8;
        RBus_UInt32  setting48:8;
    };
}isp_isp_setting48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting55:8;
        RBus_UInt32  setting54:8;
        RBus_UInt32  setting53:8;
        RBus_UInt32  setting52:8;
    };
}isp_isp_setting52_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting59:8;
        RBus_UInt32  setting58:8;
        RBus_UInt32  setting57:8;
        RBus_UInt32  setting56:8;
    };
}isp_isp_setting56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d198_31_0:32;
    };
}isp_isp_dummy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1802d19c_31_0:32;
    };
}isp_isp_dummy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_start:1;
        RBus_UInt32  crc_conti:1;
        RBus_UInt32  crc_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_port_en:12;
        RBus_UInt32  crc_err_cnt:16;
    };
}isp_isp_crc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_result:32;
    };
}isp_isp_crc_result_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_golden:32;
    };
}isp_isp_crc_golden_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  isp_tst_out:32;
    };
}isp_isp_tst_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  isp_bist_length:20;
        RBus_UInt32  res1:9;
        RBus_UInt32  isp_bist_result:1;
        RBus_UInt32  isp_bist_done:1;
        RBus_UInt32  isp_bist_enable:1;
    };
}isp_isp_fifo_bist_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_01:8;
        RBus_UInt32  setting12_01:8;
        RBus_UInt32  setting11_01:8;
        RBus_UInt32  setting10_01:8;
    };
}isp_isp_setting10_01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_02:8;
        RBus_UInt32  setting12_02:8;
        RBus_UInt32  setting11_02:8;
        RBus_UInt32  setting10_02:8;
    };
}isp_isp_setting10_02_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_03:8;
        RBus_UInt32  setting12_03:8;
        RBus_UInt32  setting11_03:8;
        RBus_UInt32  setting10_03:8;
    };
}isp_isp_setting10_03_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_04:8;
        RBus_UInt32  setting12_04:8;
        RBus_UInt32  setting11_04:8;
        RBus_UInt32  setting10_04:8;
    };
}isp_isp_setting10_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_05:8;
        RBus_UInt32  setting12_05:8;
        RBus_UInt32  setting11_05:8;
        RBus_UInt32  setting10_05:8;
    };
}isp_isp_setting10_05_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_06:8;
        RBus_UInt32  setting12_06:8;
        RBus_UInt32  setting11_06:8;
        RBus_UInt32  setting10_06:8;
    };
}isp_isp_setting10_06_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_07:8;
        RBus_UInt32  setting12_07:8;
        RBus_UInt32  setting11_07:8;
        RBus_UInt32  setting10_07:8;
    };
}isp_isp_setting10_07_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_08:8;
        RBus_UInt32  setting12_08:8;
        RBus_UInt32  setting11_08:8;
        RBus_UInt32  setting10_08:8;
    };
}isp_isp_setting10_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_09:8;
        RBus_UInt32  setting12_09:8;
        RBus_UInt32  setting11_09:8;
        RBus_UInt32  setting10_09:8;
    };
}isp_isp_setting10_09_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_10:8;
        RBus_UInt32  setting12_10:8;
        RBus_UInt32  setting11_10:8;
        RBus_UInt32  setting10_10:8;
    };
}isp_isp_setting10_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  setting13_11:8;
        RBus_UInt32  setting12_11:8;
        RBus_UInt32  setting11_11:8;
        RBus_UInt32  setting10_11:8;
    };
}isp_isp_setting10_11_RBUS;




#endif 


#endif 
