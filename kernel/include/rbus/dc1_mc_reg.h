/**
* @file Merlin5_DesignSpec-DC_MC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DC1_MC_REG_H_
#define _RBUS_DC1_MC_REG_H_

#include "rbus_types.h"



//  DC1_MC Register Address
#define  DC1_MC_TMCTRL0                                                         0x18008800
#define  DC1_MC_TMCTRL0_reg_addr                                                 "0xB8008800"
#define  DC1_MC_TMCTRL0_reg                                                      0xB8008800
#define  DC1_MC_TMCTRL0_inst_addr                                                "0x0000"
#define  set_DC1_MC_TMCTRL0_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL0_reg)=data)
#define  get_DC1_MC_TMCTRL0_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL0_reg))
#define  DC1_MC_TMCTRL0_tmras_shift                                              (16)
#define  DC1_MC_TMCTRL0_tmrcl_shift                                              (8)
#define  DC1_MC_TMCTRL0_tmcl_shift                                               (0)
#define  DC1_MC_TMCTRL0_tmras_mask                                               (0x00FF0000)
#define  DC1_MC_TMCTRL0_tmrcl_mask                                               (0x00003F00)
#define  DC1_MC_TMCTRL0_tmcl_mask                                                (0x0000003F)
#define  DC1_MC_TMCTRL0_tmras(data)                                              (0x00FF0000&((data)<<16))
#define  DC1_MC_TMCTRL0_tmrcl(data)                                              (0x00003F00&((data)<<8))
#define  DC1_MC_TMCTRL0_tmcl(data)                                               (0x0000003F&(data))
#define  DC1_MC_TMCTRL0_get_tmras(data)                                          ((0x00FF0000&(data))>>16)
#define  DC1_MC_TMCTRL0_get_tmrcl(data)                                          ((0x00003F00&(data))>>8)
#define  DC1_MC_TMCTRL0_get_tmcl(data)                                           (0x0000003F&(data))

#define  DC1_MC_TMCTRL1                                                         0x18008804
#define  DC1_MC_TMCTRL1_reg_addr                                                 "0xB8008804"
#define  DC1_MC_TMCTRL1_reg                                                      0xB8008804
#define  DC1_MC_TMCTRL1_inst_addr                                                "0x0001"
#define  set_DC1_MC_TMCTRL1_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL1_reg)=data)
#define  get_DC1_MC_TMCTRL1_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL1_reg))
#define  DC1_MC_TMCTRL1_tmrrd_shift                                              (24)
#define  DC1_MC_TMCTRL1_tmrp_shift                                               (16)
#define  DC1_MC_TMCTRL1_tmrcdrd_shift                                            (8)
#define  DC1_MC_TMCTRL1_tmrc_shift                                               (0)
#define  DC1_MC_TMCTRL1_tmrrd_mask                                               (0x1F000000)
#define  DC1_MC_TMCTRL1_tmrp_mask                                                (0x003F0000)
#define  DC1_MC_TMCTRL1_tmrcdrd_mask                                             (0x00003F00)
#define  DC1_MC_TMCTRL1_tmrc_mask                                                (0x000000FF)
#define  DC1_MC_TMCTRL1_tmrrd(data)                                              (0x1F000000&((data)<<24))
#define  DC1_MC_TMCTRL1_tmrp(data)                                               (0x003F0000&((data)<<16))
#define  DC1_MC_TMCTRL1_tmrcdrd(data)                                            (0x00003F00&((data)<<8))
#define  DC1_MC_TMCTRL1_tmrc(data)                                               (0x000000FF&(data))
#define  DC1_MC_TMCTRL1_get_tmrrd(data)                                          ((0x1F000000&(data))>>24)
#define  DC1_MC_TMCTRL1_get_tmrp(data)                                           ((0x003F0000&(data))>>16)
#define  DC1_MC_TMCTRL1_get_tmrcdrd(data)                                        ((0x00003F00&(data))>>8)
#define  DC1_MC_TMCTRL1_get_tmrc(data)                                           (0x000000FF&(data))

#define  DC1_MC_TMCTRL2                                                         0x18008808
#define  DC1_MC_TMCTRL2_reg_addr                                                 "0xB8008808"
#define  DC1_MC_TMCTRL2_reg                                                      0xB8008808
#define  DC1_MC_TMCTRL2_inst_addr                                                "0x0002"
#define  set_DC1_MC_TMCTRL2_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL2_reg)=data)
#define  get_DC1_MC_TMCTRL2_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL2_reg))
#define  DC1_MC_TMCTRL2_tmccd_shift                                              (24)
#define  DC1_MC_TMCTRL2_trtp_shift                                               (16)
#define  DC1_MC_TMCTRL2_tmwtr_shift                                              (8)
#define  DC1_MC_TMCTRL2_tmwr_shift                                               (0)
#define  DC1_MC_TMCTRL2_tmccd_mask                                               (0x0F000000)
#define  DC1_MC_TMCTRL2_trtp_mask                                                (0x007F0000)
#define  DC1_MC_TMCTRL2_tmwtr_mask                                               (0x00001F00)
#define  DC1_MC_TMCTRL2_tmwr_mask                                                (0x0000003F)
#define  DC1_MC_TMCTRL2_tmccd(data)                                              (0x0F000000&((data)<<24))
#define  DC1_MC_TMCTRL2_trtp(data)                                               (0x007F0000&((data)<<16))
#define  DC1_MC_TMCTRL2_tmwtr(data)                                              (0x00001F00&((data)<<8))
#define  DC1_MC_TMCTRL2_tmwr(data)                                               (0x0000003F&(data))
#define  DC1_MC_TMCTRL2_get_tmccd(data)                                          ((0x0F000000&(data))>>24)
#define  DC1_MC_TMCTRL2_get_trtp(data)                                           ((0x007F0000&(data))>>16)
#define  DC1_MC_TMCTRL2_get_tmwtr(data)                                          ((0x00001F00&(data))>>8)
#define  DC1_MC_TMCTRL2_get_tmwr(data)                                           (0x0000003F&(data))

#define  DC1_MC_TMCTRL3                                                         0x1800880C
#define  DC1_MC_TMCTRL3_reg_addr                                                 "0xB800880C"
#define  DC1_MC_TMCTRL3_reg                                                      0xB800880C
#define  DC1_MC_TMCTRL3_inst_addr                                                "0x0003"
#define  set_DC1_MC_TMCTRL3_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL3_reg)=data)
#define  get_DC1_MC_TMCTRL3_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL3_reg))
#define  DC1_MC_TMCTRL3_tmfaw_shift                                              (24)
#define  DC1_MC_TMCTRL3_refcycle_shift                                           (12)
#define  DC1_MC_TMCTRL3_tmrfc_shift                                              (0)
#define  DC1_MC_TMCTRL3_tmfaw_mask                                               (0xFF000000)
#define  DC1_MC_TMCTRL3_refcycle_mask                                            (0x00FFF000)
#define  DC1_MC_TMCTRL3_tmrfc_mask                                               (0x000007FF)
#define  DC1_MC_TMCTRL3_tmfaw(data)                                              (0xFF000000&((data)<<24))
#define  DC1_MC_TMCTRL3_refcycle(data)                                           (0x00FFF000&((data)<<12))
#define  DC1_MC_TMCTRL3_tmrfc(data)                                              (0x000007FF&(data))
#define  DC1_MC_TMCTRL3_get_tmfaw(data)                                          ((0xFF000000&(data))>>24)
#define  DC1_MC_TMCTRL3_get_refcycle(data)                                       ((0x00FFF000&(data))>>12)
#define  DC1_MC_TMCTRL3_get_tmrfc(data)                                          (0x000007FF&(data))

#define  DC1_MC_TMCTRL4                                                         0x18008810
#define  DC1_MC_TMCTRL4_reg_addr                                                 "0xB8008810"
#define  DC1_MC_TMCTRL4_reg                                                      0xB8008810
#define  DC1_MC_TMCTRL4_inst_addr                                                "0x0004"
#define  set_DC1_MC_TMCTRL4_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL4_reg)=data)
#define  get_DC1_MC_TMCTRL4_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL4_reg))
#define  DC1_MC_TMCTRL4_tmaonpd_shift                                            (24)
#define  DC1_MC_TMCTRL4_tmaofpd_shift                                            (16)
#define  DC1_MC_TMCTRL4_tmmod_shift                                              (8)
#define  DC1_MC_TMCTRL4_tmmrd_shift                                              (0)
#define  DC1_MC_TMCTRL4_tmaonpd_mask                                             (0x3F000000)
#define  DC1_MC_TMCTRL4_tmaofpd_mask                                             (0x003F0000)
#define  DC1_MC_TMCTRL4_tmmod_mask                                               (0x0000FF00)
#define  DC1_MC_TMCTRL4_tmmrd_mask                                               (0x0000001F)
#define  DC1_MC_TMCTRL4_tmaonpd(data)                                            (0x3F000000&((data)<<24))
#define  DC1_MC_TMCTRL4_tmaofpd(data)                                            (0x003F0000&((data)<<16))
#define  DC1_MC_TMCTRL4_tmmod(data)                                              (0x0000FF00&((data)<<8))
#define  DC1_MC_TMCTRL4_tmmrd(data)                                              (0x0000001F&(data))
#define  DC1_MC_TMCTRL4_get_tmaonpd(data)                                        ((0x3F000000&(data))>>24)
#define  DC1_MC_TMCTRL4_get_tmaofpd(data)                                        ((0x003F0000&(data))>>16)
#define  DC1_MC_TMCTRL4_get_tmmod(data)                                          ((0x0000FF00&(data))>>8)
#define  DC1_MC_TMCTRL4_get_tmmrd(data)                                          (0x0000001F&(data))

#define  DC1_MC_TMCTRL5                                                         0x18008814
#define  DC1_MC_TMCTRL5_reg_addr                                                 "0xB8008814"
#define  DC1_MC_TMCTRL5_reg                                                      0xB8008814
#define  DC1_MC_TMCTRL5_inst_addr                                                "0x0005"
#define  set_DC1_MC_TMCTRL5_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL5_reg)=data)
#define  get_DC1_MC_TMCTRL5_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL5_reg))
#define  DC1_MC_TMCTRL5_tzqoper_shift                                            (12)
#define  DC1_MC_TMCTRL5_tzqinit_shift                                            (0)
#define  DC1_MC_TMCTRL5_tzqoper_mask                                             (0x00FFF000)
#define  DC1_MC_TMCTRL5_tzqinit_mask                                             (0x00000FFF)
#define  DC1_MC_TMCTRL5_tzqoper(data)                                            (0x00FFF000&((data)<<12))
#define  DC1_MC_TMCTRL5_tzqinit(data)                                            (0x00000FFF&(data))
#define  DC1_MC_TMCTRL5_get_tzqoper(data)                                        ((0x00FFF000&(data))>>12)
#define  DC1_MC_TMCTRL5_get_tzqinit(data)                                        (0x00000FFF&(data))

#define  DC1_MC_TMCTRL6                                                         0x18008818
#define  DC1_MC_TMCTRL6_reg_addr                                                 "0xB8008818"
#define  DC1_MC_TMCTRL6_reg                                                      0xB8008818
#define  DC1_MC_TMCTRL6_inst_addr                                                "0x0006"
#define  set_DC1_MC_TMCTRL6_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL6_reg)=data)
#define  get_DC1_MC_TMCTRL6_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL6_reg))
#define  DC1_MC_TMCTRL6_tdllk_shift                                              (12)
#define  DC1_MC_TMCTRL6_tzqcs_shift                                              (0)
#define  DC1_MC_TMCTRL6_tdllk_mask                                               (0x00FFF000)
#define  DC1_MC_TMCTRL6_tzqcs_mask                                               (0x00000FFF)
#define  DC1_MC_TMCTRL6_tdllk(data)                                              (0x00FFF000&((data)<<12))
#define  DC1_MC_TMCTRL6_tzqcs(data)                                              (0x00000FFF&(data))
#define  DC1_MC_TMCTRL6_get_tdllk(data)                                          ((0x00FFF000&(data))>>12)
#define  DC1_MC_TMCTRL6_get_tzqcs(data)                                          (0x00000FFF&(data))

#define  DC1_MC_TMCTRL7                                                         0x1800886C
#define  DC1_MC_TMCTRL7_reg_addr                                                 "0xB800886C"
#define  DC1_MC_TMCTRL7_reg                                                      0xB800886C
#define  DC1_MC_TMCTRL7_inst_addr                                                "0x0007"
#define  set_DC1_MC_TMCTRL7_reg(data)                                            (*((volatile unsigned int*)DC1_MC_TMCTRL7_reg)=data)
#define  get_DC1_MC_TMCTRL7_reg                                                  (*((volatile unsigned int*)DC1_MC_TMCTRL7_reg))
#define  DC1_MC_TMCTRL7_tmwrp_a_shift                                            (8)
#define  DC1_MC_TMCTRL7_tmrrp_a_shift                                            (0)
#define  DC1_MC_TMCTRL7_tmwrp_a_mask                                             (0x0000FF00)
#define  DC1_MC_TMCTRL7_tmrrp_a_mask                                             (0x000000FF)
#define  DC1_MC_TMCTRL7_tmwrp_a(data)                                            (0x0000FF00&((data)<<8))
#define  DC1_MC_TMCTRL7_tmrrp_a(data)                                            (0x000000FF&(data))
#define  DC1_MC_TMCTRL7_get_tmwrp_a(data)                                        ((0x0000FF00&(data))>>8)
#define  DC1_MC_TMCTRL7_get_tmrrp_a(data)                                        (0x000000FF&(data))

#define  DC1_MC_BKFREE_CTRL0                                                    0x1800881C
#define  DC1_MC_BKFREE_CTRL0_reg_addr                                            "0xB800881C"
#define  DC1_MC_BKFREE_CTRL0_reg                                                 0xB800881C
#define  DC1_MC_BKFREE_CTRL0_inst_addr                                           "0x0008"
#define  set_DC1_MC_BKFREE_CTRL0_reg(data)                                       (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL0_reg)=data)
#define  get_DC1_MC_BKFREE_CTRL0_reg                                             (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL0_reg))
#define  DC1_MC_BKFREE_CTRL0_bank_free_bl_adj_shift                              (31)
#define  DC1_MC_BKFREE_CTRL0_bank_free_offset_updn_shift                         (30)
#define  DC1_MC_BKFREE_CTRL0_bank_free_offset_shift                              (24)
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrcd_shift                               (16)
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrp_rd_shift                             (8)
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrp_wr_shift                             (0)
#define  DC1_MC_BKFREE_CTRL0_bank_free_bl_adj_mask                               (0x80000000)
#define  DC1_MC_BKFREE_CTRL0_bank_free_offset_updn_mask                          (0x40000000)
#define  DC1_MC_BKFREE_CTRL0_bank_free_offset_mask                               (0x3F000000)
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrcd_mask                                (0x00FF0000)
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrp_rd_mask                              (0x0000FF00)
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrp_wr_mask                              (0x000000FF)
#define  DC1_MC_BKFREE_CTRL0_bank_free_bl_adj(data)                              (0x80000000&((data)<<31))
#define  DC1_MC_BKFREE_CTRL0_bank_free_offset_updn(data)                         (0x40000000&((data)<<30))
#define  DC1_MC_BKFREE_CTRL0_bank_free_offset(data)                              (0x3F000000&((data)<<24))
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrcd(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrp_rd(data)                             (0x0000FF00&((data)<<8))
#define  DC1_MC_BKFREE_CTRL0_bank_free_tmrp_wr(data)                             (0x000000FF&(data))
#define  DC1_MC_BKFREE_CTRL0_get_bank_free_bl_adj(data)                          ((0x80000000&(data))>>31)
#define  DC1_MC_BKFREE_CTRL0_get_bank_free_offset_updn(data)                     ((0x40000000&(data))>>30)
#define  DC1_MC_BKFREE_CTRL0_get_bank_free_offset(data)                          ((0x3F000000&(data))>>24)
#define  DC1_MC_BKFREE_CTRL0_get_bank_free_tmrcd(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_BKFREE_CTRL0_get_bank_free_tmrp_rd(data)                         ((0x0000FF00&(data))>>8)
#define  DC1_MC_BKFREE_CTRL0_get_bank_free_tmrp_wr(data)                         (0x000000FF&(data))

#define  DC1_MC_BKFREE_CTRL1                                                    0x18008880
#define  DC1_MC_BKFREE_CTRL1_reg_addr                                            "0xB8008880"
#define  DC1_MC_BKFREE_CTRL1_reg                                                 0xB8008880
#define  DC1_MC_BKFREE_CTRL1_inst_addr                                           "0x0009"
#define  set_DC1_MC_BKFREE_CTRL1_reg(data)                                       (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL1_reg)=data)
#define  get_DC1_MC_BKFREE_CTRL1_reg                                             (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL1_reg))
#define  DC1_MC_BKFREE_CTRL1_bf_rd_interval_shift                                (20)
#define  DC1_MC_BKFREE_CTRL1_bf_wr_interval_shift                                (12)
#define  DC1_MC_BKFREE_CTRL1_bf_rd_thr_shift                                     (8)
#define  DC1_MC_BKFREE_CTRL1_bf_wr_thr_shift                                     (4)
#define  DC1_MC_BKFREE_CTRL1_bf_en_shift                                         (0)
#define  DC1_MC_BKFREE_CTRL1_bf_rd_interval_mask                                 (0x0FF00000)
#define  DC1_MC_BKFREE_CTRL1_bf_wr_interval_mask                                 (0x000FF000)
#define  DC1_MC_BKFREE_CTRL1_bf_rd_thr_mask                                      (0x00000F00)
#define  DC1_MC_BKFREE_CTRL1_bf_wr_thr_mask                                      (0x000000F0)
#define  DC1_MC_BKFREE_CTRL1_bf_en_mask                                          (0x00000001)
#define  DC1_MC_BKFREE_CTRL1_bf_rd_interval(data)                                (0x0FF00000&((data)<<20))
#define  DC1_MC_BKFREE_CTRL1_bf_wr_interval(data)                                (0x000FF000&((data)<<12))
#define  DC1_MC_BKFREE_CTRL1_bf_rd_thr(data)                                     (0x00000F00&((data)<<8))
#define  DC1_MC_BKFREE_CTRL1_bf_wr_thr(data)                                     (0x000000F0&((data)<<4))
#define  DC1_MC_BKFREE_CTRL1_bf_en(data)                                         (0x00000001&(data))
#define  DC1_MC_BKFREE_CTRL1_get_bf_rd_interval(data)                            ((0x0FF00000&(data))>>20)
#define  DC1_MC_BKFREE_CTRL1_get_bf_wr_interval(data)                            ((0x000FF000&(data))>>12)
#define  DC1_MC_BKFREE_CTRL1_get_bf_rd_thr(data)                                 ((0x00000F00&(data))>>8)
#define  DC1_MC_BKFREE_CTRL1_get_bf_wr_thr(data)                                 ((0x000000F0&(data))>>4)
#define  DC1_MC_BKFREE_CTRL1_get_bf_en(data)                                     (0x00000001&(data))

#define  DC1_MC_BKFREE_CTRL2                                                    0x18008884
#define  DC1_MC_BKFREE_CTRL2_reg_addr                                            "0xB8008884"
#define  DC1_MC_BKFREE_CTRL2_reg                                                 0xB8008884
#define  DC1_MC_BKFREE_CTRL2_inst_addr                                           "0x000A"
#define  set_DC1_MC_BKFREE_CTRL2_reg(data)                                       (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL2_reg)=data)
#define  get_DC1_MC_BKFREE_CTRL2_reg                                             (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL2_reg))
#define  DC1_MC_BKFREE_CTRL2_bf_tmrrd_l_shift                                    (24)
#define  DC1_MC_BKFREE_CTRL2_bf_tmrrd_s_shift                                    (16)
#define  DC1_MC_BKFREE_CTRL2_bf_tmrp_shift                                       (8)
#define  DC1_MC_BKFREE_CTRL2_bf_init_interval_shift                              (0)
#define  DC1_MC_BKFREE_CTRL2_bf_tmrrd_l_mask                                     (0x1F000000)
#define  DC1_MC_BKFREE_CTRL2_bf_tmrrd_s_mask                                     (0x001F0000)
#define  DC1_MC_BKFREE_CTRL2_bf_tmrp_mask                                        (0x00003F00)
#define  DC1_MC_BKFREE_CTRL2_bf_init_interval_mask                               (0x000000FF)
#define  DC1_MC_BKFREE_CTRL2_bf_tmrrd_l(data)                                    (0x1F000000&((data)<<24))
#define  DC1_MC_BKFREE_CTRL2_bf_tmrrd_s(data)                                    (0x001F0000&((data)<<16))
#define  DC1_MC_BKFREE_CTRL2_bf_tmrp(data)                                       (0x00003F00&((data)<<8))
#define  DC1_MC_BKFREE_CTRL2_bf_init_interval(data)                              (0x000000FF&(data))
#define  DC1_MC_BKFREE_CTRL2_get_bf_tmrrd_l(data)                                ((0x1F000000&(data))>>24)
#define  DC1_MC_BKFREE_CTRL2_get_bf_tmrrd_s(data)                                ((0x001F0000&(data))>>16)
#define  DC1_MC_BKFREE_CTRL2_get_bf_tmrp(data)                                   ((0x00003F00&(data))>>8)
#define  DC1_MC_BKFREE_CTRL2_get_bf_init_interval(data)                          (0x000000FF&(data))

#define  DC1_MC_BKFREE_CTRL3                                                    0x18008888
#define  DC1_MC_BKFREE_CTRL3_reg_addr                                            "0xB8008888"
#define  DC1_MC_BKFREE_CTRL3_reg                                                 0xB8008888
#define  DC1_MC_BKFREE_CTRL3_inst_addr                                           "0x000B"
#define  set_DC1_MC_BKFREE_CTRL3_reg(data)                                       (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL3_reg)=data)
#define  get_DC1_MC_BKFREE_CTRL3_reg                                             (*((volatile unsigned int*)DC1_MC_BKFREE_CTRL3_reg))
#define  DC1_MC_BKFREE_CTRL3_bf_tmrtw_shift                                      (20)
#define  DC1_MC_BKFREE_CTRL3_bf_tmwtr_l_shift                                    (12)
#define  DC1_MC_BKFREE_CTRL3_bf_tmwtr_s_shift                                    (4)
#define  DC1_MC_BKFREE_CTRL3_bf_tmccd_diff_shift                                 (0)
#define  DC1_MC_BKFREE_CTRL3_bf_tmrtw_mask                                       (0x01F00000)
#define  DC1_MC_BKFREE_CTRL3_bf_tmwtr_l_mask                                     (0x0001F000)
#define  DC1_MC_BKFREE_CTRL3_bf_tmwtr_s_mask                                     (0x000001F0)
#define  DC1_MC_BKFREE_CTRL3_bf_tmccd_diff_mask                                  (0x00000003)
#define  DC1_MC_BKFREE_CTRL3_bf_tmrtw(data)                                      (0x01F00000&((data)<<20))
#define  DC1_MC_BKFREE_CTRL3_bf_tmwtr_l(data)                                    (0x0001F000&((data)<<12))
#define  DC1_MC_BKFREE_CTRL3_bf_tmwtr_s(data)                                    (0x000001F0&((data)<<4))
#define  DC1_MC_BKFREE_CTRL3_bf_tmccd_diff(data)                                 (0x00000003&(data))
#define  DC1_MC_BKFREE_CTRL3_get_bf_tmrtw(data)                                  ((0x01F00000&(data))>>20)
#define  DC1_MC_BKFREE_CTRL3_get_bf_tmwtr_l(data)                                ((0x0001F000&(data))>>12)
#define  DC1_MC_BKFREE_CTRL3_get_bf_tmwtr_s(data)                                ((0x000001F0&(data))>>4)
#define  DC1_MC_BKFREE_CTRL3_get_bf_tmccd_diff(data)                             (0x00000003&(data))

#define  DC1_MC_REF_CTRL                                                        0x1800883C
#define  DC1_MC_REF_CTRL_reg_addr                                                "0xB800883C"
#define  DC1_MC_REF_CTRL_reg                                                     0xB800883C
#define  DC1_MC_REF_CTRL_inst_addr                                               "0x000C"
#define  set_DC1_MC_REF_CTRL_reg(data)                                           (*((volatile unsigned int*)DC1_MC_REF_CTRL_reg)=data)
#define  get_DC1_MC_REF_CTRL_reg                                                 (*((volatile unsigned int*)DC1_MC_REF_CTRL_reg))
#define  DC1_MC_REF_CTRL_ref_disable_tmrfc_offset_shift                          (16)
#define  DC1_MC_REF_CTRL_aref_num_ref_pullin_shift                               (12)
#define  DC1_MC_REF_CTRL_aref_num_ref_limit_shift                                (8)
#define  DC1_MC_REF_CTRL_cmd_wr_chg_ref_shift                                    (7)
#define  DC1_MC_REF_CTRL_cmd_cnt_ref_limit_shift                                 (0)
#define  DC1_MC_REF_CTRL_ref_disable_tmrfc_offset_mask                           (0x0FFF0000)
#define  DC1_MC_REF_CTRL_aref_num_ref_pullin_mask                                (0x0000F000)
#define  DC1_MC_REF_CTRL_aref_num_ref_limit_mask                                 (0x00000F00)
#define  DC1_MC_REF_CTRL_cmd_wr_chg_ref_mask                                     (0x00000080)
#define  DC1_MC_REF_CTRL_cmd_cnt_ref_limit_mask                                  (0x0000000F)
#define  DC1_MC_REF_CTRL_ref_disable_tmrfc_offset(data)                          (0x0FFF0000&((data)<<16))
#define  DC1_MC_REF_CTRL_aref_num_ref_pullin(data)                               (0x0000F000&((data)<<12))
#define  DC1_MC_REF_CTRL_aref_num_ref_limit(data)                                (0x00000F00&((data)<<8))
#define  DC1_MC_REF_CTRL_cmd_wr_chg_ref(data)                                    (0x00000080&((data)<<7))
#define  DC1_MC_REF_CTRL_cmd_cnt_ref_limit(data)                                 (0x0000000F&(data))
#define  DC1_MC_REF_CTRL_get_ref_disable_tmrfc_offset(data)                      ((0x0FFF0000&(data))>>16)
#define  DC1_MC_REF_CTRL_get_aref_num_ref_pullin(data)                           ((0x0000F000&(data))>>12)
#define  DC1_MC_REF_CTRL_get_aref_num_ref_limit(data)                            ((0x00000F00&(data))>>8)
#define  DC1_MC_REF_CTRL_get_cmd_wr_chg_ref(data)                                ((0x00000080&(data))>>7)
#define  DC1_MC_REF_CTRL_get_cmd_cnt_ref_limit(data)                             (0x0000000F&(data))

#define  DC1_MC_GRP_CTRL                                                        0x1800885C
#define  DC1_MC_GRP_CTRL_reg_addr                                                "0xB800885C"
#define  DC1_MC_GRP_CTRL_reg                                                     0xB800885C
#define  DC1_MC_GRP_CTRL_inst_addr                                               "0x000D"
#define  set_DC1_MC_GRP_CTRL_reg(data)                                           (*((volatile unsigned int*)DC1_MC_GRP_CTRL_reg)=data)
#define  get_DC1_MC_GRP_CTRL_reg                                                 (*((volatile unsigned int*)DC1_MC_GRP_CTRL_reg))
#define  DC1_MC_GRP_CTRL_dis_acc_interlave_shift                                 (2)
#define  DC1_MC_GRP_CTRL_dis_cmd_grp_in_order_shift                              (1)
#define  DC1_MC_GRP_CTRL_en_cmd_bg_in_order_shift                                (0)
#define  DC1_MC_GRP_CTRL_dis_acc_interlave_mask                                  (0x00000004)
#define  DC1_MC_GRP_CTRL_dis_cmd_grp_in_order_mask                               (0x00000002)
#define  DC1_MC_GRP_CTRL_en_cmd_bg_in_order_mask                                 (0x00000001)
#define  DC1_MC_GRP_CTRL_dis_acc_interlave(data)                                 (0x00000004&((data)<<2))
#define  DC1_MC_GRP_CTRL_dis_cmd_grp_in_order(data)                              (0x00000002&((data)<<1))
#define  DC1_MC_GRP_CTRL_en_cmd_bg_in_order(data)                                (0x00000001&(data))
#define  DC1_MC_GRP_CTRL_get_dis_acc_interlave(data)                             ((0x00000004&(data))>>2)
#define  DC1_MC_GRP_CTRL_get_dis_cmd_grp_in_order(data)                          ((0x00000002&(data))>>1)
#define  DC1_MC_GRP_CTRL_get_en_cmd_bg_in_order(data)                            (0x00000001&(data))

#define  DC1_MC_ODT_CTRL                                                        0x18008820
#define  DC1_MC_ODT_CTRL_reg_addr                                                "0xB8008820"
#define  DC1_MC_ODT_CTRL_reg                                                     0xB8008820
#define  DC1_MC_ODT_CTRL_inst_addr                                               "0x000E"
#define  set_DC1_MC_ODT_CTRL_reg(data)                                           (*((volatile unsigned int*)DC1_MC_ODT_CTRL_reg)=data)
#define  get_DC1_MC_ODT_CTRL_reg                                                 (*((volatile unsigned int*)DC1_MC_ODT_CTRL_reg))
#define  DC1_MC_ODT_CTRL_odt_post_3t_en_shift                                    (31)
#define  DC1_MC_ODT_CTRL_odt_post_2t_en_shift                                    (30)
#define  DC1_MC_ODT_CTRL_odt_post_1t_en_shift                                    (29)
#define  DC1_MC_ODT_CTRL_odt_pre_1t_en_shift                                     (28)
#define  DC1_MC_ODT_CTRL_odt_first_cycle_dis_shift                               (27)
#define  DC1_MC_ODT_CTRL_odt_force_sel_shift                                     (23)
#define  DC1_MC_ODT_CTRL_odt_force_sig_shift                                     (22)
#define  DC1_MC_ODT_CTRL_odt_post_3t_en_mask                                     (0x80000000)
#define  DC1_MC_ODT_CTRL_odt_post_2t_en_mask                                     (0x40000000)
#define  DC1_MC_ODT_CTRL_odt_post_1t_en_mask                                     (0x20000000)
#define  DC1_MC_ODT_CTRL_odt_pre_1t_en_mask                                      (0x10000000)
#define  DC1_MC_ODT_CTRL_odt_first_cycle_dis_mask                                (0x08000000)
#define  DC1_MC_ODT_CTRL_odt_force_sel_mask                                      (0x00800000)
#define  DC1_MC_ODT_CTRL_odt_force_sig_mask                                      (0x00400000)
#define  DC1_MC_ODT_CTRL_odt_post_3t_en(data)                                    (0x80000000&((data)<<31))
#define  DC1_MC_ODT_CTRL_odt_post_2t_en(data)                                    (0x40000000&((data)<<30))
#define  DC1_MC_ODT_CTRL_odt_post_1t_en(data)                                    (0x20000000&((data)<<29))
#define  DC1_MC_ODT_CTRL_odt_pre_1t_en(data)                                     (0x10000000&((data)<<28))
#define  DC1_MC_ODT_CTRL_odt_first_cycle_dis(data)                               (0x08000000&((data)<<27))
#define  DC1_MC_ODT_CTRL_odt_force_sel(data)                                     (0x00800000&((data)<<23))
#define  DC1_MC_ODT_CTRL_odt_force_sig(data)                                     (0x00400000&((data)<<22))
#define  DC1_MC_ODT_CTRL_get_odt_post_3t_en(data)                                ((0x80000000&(data))>>31)
#define  DC1_MC_ODT_CTRL_get_odt_post_2t_en(data)                                ((0x40000000&(data))>>30)
#define  DC1_MC_ODT_CTRL_get_odt_post_1t_en(data)                                ((0x20000000&(data))>>29)
#define  DC1_MC_ODT_CTRL_get_odt_pre_1t_en(data)                                 ((0x10000000&(data))>>28)
#define  DC1_MC_ODT_CTRL_get_odt_first_cycle_dis(data)                           ((0x08000000&(data))>>27)
#define  DC1_MC_ODT_CTRL_get_odt_force_sel(data)                                 ((0x00800000&(data))>>23)
#define  DC1_MC_ODT_CTRL_get_odt_force_sig(data)                                 ((0x00400000&(data))>>22)

#define  DC1_MC_ODT_CTRL2                                                       0x18008824
#define  DC1_MC_ODT_CTRL2_reg_addr                                               "0xB8008824"
#define  DC1_MC_ODT_CTRL2_reg                                                    0xB8008824
#define  DC1_MC_ODT_CTRL2_inst_addr                                              "0x000F"
#define  set_DC1_MC_ODT_CTRL2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ODT_CTRL2_reg)=data)
#define  get_DC1_MC_ODT_CTRL2_reg                                                (*((volatile unsigned int*)DC1_MC_ODT_CTRL2_reg))
#define  DC1_MC_ODT_CTRL2_odt_en_shift                                           (1)
#define  DC1_MC_ODT_CTRL2_odt_dis_shift                                          (0)
#define  DC1_MC_ODT_CTRL2_odt_en_mask                                            (0x00000002)
#define  DC1_MC_ODT_CTRL2_odt_dis_mask                                           (0x00000001)
#define  DC1_MC_ODT_CTRL2_odt_en(data)                                           (0x00000002&((data)<<1))
#define  DC1_MC_ODT_CTRL2_odt_dis(data)                                          (0x00000001&(data))
#define  DC1_MC_ODT_CTRL2_get_odt_en(data)                                       ((0x00000002&(data))>>1)
#define  DC1_MC_ODT_CTRL2_get_odt_dis(data)                                      (0x00000001&(data))

#define  DC1_MC_DC_MIS                                                          0x1800882C
#define  DC1_MC_DC_MIS_reg_addr                                                  "0xB800882C"
#define  DC1_MC_DC_MIS_reg                                                       0xB800882C
#define  DC1_MC_DC_MIS_inst_addr                                                 "0x0010"
#define  set_DC1_MC_DC_MIS_reg(data)                                             (*((volatile unsigned int*)DC1_MC_DC_MIS_reg)=data)
#define  get_DC1_MC_DC_MIS_reg                                                   (*((volatile unsigned int*)DC1_MC_DC_MIS_reg))
#define  DC1_MC_DC_MIS_ddr2_odt_dly_shift                                        (1)
#define  DC1_MC_DC_MIS_ddr3_shift                                                (0)
#define  DC1_MC_DC_MIS_ddr2_odt_dly_mask                                         (0x0000000E)
#define  DC1_MC_DC_MIS_ddr3_mask                                                 (0x00000001)
#define  DC1_MC_DC_MIS_ddr2_odt_dly(data)                                        (0x0000000E&((data)<<1))
#define  DC1_MC_DC_MIS_ddr3(data)                                                (0x00000001&(data))
#define  DC1_MC_DC_MIS_get_ddr2_odt_dly(data)                                    ((0x0000000E&(data))>>1)
#define  DC1_MC_DC_MIS_get_ddr3(data)                                            (0x00000001&(data))

#define  DC1_MC_DC_MISb                                                         0x18008834
#define  DC1_MC_DC_MISb_reg_addr                                                 "0xB8008834"
#define  DC1_MC_DC_MISb_reg                                                      0xB8008834
#define  DC1_MC_DC_MISb_inst_addr                                                "0x0011"
#define  set_DC1_MC_DC_MISb_reg(data)                                            (*((volatile unsigned int*)DC1_MC_DC_MISb_reg)=data)
#define  get_DC1_MC_DC_MISb_reg                                                  (*((volatile unsigned int*)DC1_MC_DC_MISb_reg))
#define  DC1_MC_DC_MISb_tmrp_a_sel_shift                                         (29)
#define  DC1_MC_DC_MISb_tmrc_sel_shift                                           (28)
#define  DC1_MC_DC_MISb_tmrp_a_sel_mask                                          (0x20000000)
#define  DC1_MC_DC_MISb_tmrc_sel_mask                                            (0x10000000)
#define  DC1_MC_DC_MISb_tmrp_a_sel(data)                                         (0x20000000&((data)<<29))
#define  DC1_MC_DC_MISb_tmrc_sel(data)                                           (0x10000000&((data)<<28))
#define  DC1_MC_DC_MISb_get_tmrp_a_sel(data)                                     ((0x20000000&(data))>>29)
#define  DC1_MC_DC_MISb_get_tmrc_sel(data)                                       ((0x10000000&(data))>>28)

#define  DC1_MC_MPSM_EXIT_1                                                     0x18008838
#define  DC1_MC_MPSM_EXIT_1_reg_addr                                             "0xB8008838"
#define  DC1_MC_MPSM_EXIT_1_reg                                                  0xB8008838
#define  DC1_MC_MPSM_EXIT_1_inst_addr                                            "0x0012"
#define  set_DC1_MC_MPSM_EXIT_1_reg(data)                                        (*((volatile unsigned int*)DC1_MC_MPSM_EXIT_1_reg)=data)
#define  get_DC1_MC_MPSM_EXIT_1_reg                                              (*((volatile unsigned int*)DC1_MC_MPSM_EXIT_1_reg))
#define  DC1_MC_MPSM_EXIT_1_tmmpx_lh_shift                                       (16)
#define  DC1_MC_MPSM_EXIT_1_tmckmpx_shift                                        (8)
#define  DC1_MC_MPSM_EXIT_1_ddr4_max_pw_sav_exit_shift                           (0)
#define  DC1_MC_MPSM_EXIT_1_tmmpx_lh_mask                                        (0x01FF0000)
#define  DC1_MC_MPSM_EXIT_1_tmckmpx_mask                                         (0x00000F00)
#define  DC1_MC_MPSM_EXIT_1_ddr4_max_pw_sav_exit_mask                            (0x00000001)
#define  DC1_MC_MPSM_EXIT_1_tmmpx_lh(data)                                       (0x01FF0000&((data)<<16))
#define  DC1_MC_MPSM_EXIT_1_tmckmpx(data)                                        (0x00000F00&((data)<<8))
#define  DC1_MC_MPSM_EXIT_1_ddr4_max_pw_sav_exit(data)                           (0x00000001&(data))
#define  DC1_MC_MPSM_EXIT_1_get_tmmpx_lh(data)                                   ((0x01FF0000&(data))>>16)
#define  DC1_MC_MPSM_EXIT_1_get_tmckmpx(data)                                    ((0x00000F00&(data))>>8)
#define  DC1_MC_MPSM_EXIT_1_get_ddr4_max_pw_sav_exit(data)                       (0x00000001&(data))

#define  DC1_MC_MPSM_EXIT_2                                                     0x1800884C
#define  DC1_MC_MPSM_EXIT_2_reg_addr                                             "0xB800884C"
#define  DC1_MC_MPSM_EXIT_2_reg                                                  0xB800884C
#define  DC1_MC_MPSM_EXIT_2_inst_addr                                            "0x0013"
#define  set_DC1_MC_MPSM_EXIT_2_reg(data)                                        (*((volatile unsigned int*)DC1_MC_MPSM_EXIT_2_reg)=data)
#define  get_DC1_MC_MPSM_EXIT_2_reg                                              (*((volatile unsigned int*)DC1_MC_MPSM_EXIT_2_reg))
#define  DC1_MC_MPSM_EXIT_2_tmxmpdll_shift                                       (0)
#define  DC1_MC_MPSM_EXIT_2_tmxmpdll_mask                                        (0x000007FF)
#define  DC1_MC_MPSM_EXIT_2_tmxmpdll(data)                                       (0x000007FF&(data))
#define  DC1_MC_MPSM_EXIT_2_get_tmxmpdll(data)                                   (0x000007FF&(data))

#define  DC1_MC_DC_MIS2                                                         0x18008828
#define  DC1_MC_DC_MIS2_reg_addr                                                 "0xB8008828"
#define  DC1_MC_DC_MIS2_reg                                                      0xB8008828
#define  DC1_MC_DC_MIS2_inst_addr                                                "0x0014"
#define  set_DC1_MC_DC_MIS2_reg(data)                                            (*((volatile unsigned int*)DC1_MC_DC_MIS2_reg)=data)
#define  get_DC1_MC_DC_MIS2_reg                                                  (*((volatile unsigned int*)DC1_MC_DC_MIS2_reg))
#define  DC1_MC_DC_MIS2_issue_nop_after_sre_shift                                (5)
#define  DC1_MC_DC_MIS2_init_shift                                               (4)
#define  DC1_MC_DC_MIS2_sren_shift                                               (3)
#define  DC1_MC_DC_MIS2_srex_shift                                               (2)
#define  DC1_MC_DC_MIS2_exe_emr_shift                                            (1)
#define  DC1_MC_DC_MIS2_exe_mr_shift                                             (0)
#define  DC1_MC_DC_MIS2_issue_nop_after_sre_mask                                 (0x00000020)
#define  DC1_MC_DC_MIS2_init_mask                                                (0x00000010)
#define  DC1_MC_DC_MIS2_sren_mask                                                (0x00000008)
#define  DC1_MC_DC_MIS2_srex_mask                                                (0x00000004)
#define  DC1_MC_DC_MIS2_exe_emr_mask                                             (0x00000002)
#define  DC1_MC_DC_MIS2_exe_mr_mask                                              (0x00000001)
#define  DC1_MC_DC_MIS2_issue_nop_after_sre(data)                                (0x00000020&((data)<<5))
#define  DC1_MC_DC_MIS2_init(data)                                               (0x00000010&((data)<<4))
#define  DC1_MC_DC_MIS2_sren(data)                                               (0x00000008&((data)<<3))
#define  DC1_MC_DC_MIS2_srex(data)                                               (0x00000004&((data)<<2))
#define  DC1_MC_DC_MIS2_exe_emr(data)                                            (0x00000002&((data)<<1))
#define  DC1_MC_DC_MIS2_exe_mr(data)                                             (0x00000001&(data))
#define  DC1_MC_DC_MIS2_get_issue_nop_after_sre(data)                            ((0x00000020&(data))>>5)
#define  DC1_MC_DC_MIS2_get_init(data)                                           ((0x00000010&(data))>>4)
#define  DC1_MC_DC_MIS2_get_sren(data)                                           ((0x00000008&(data))>>3)
#define  DC1_MC_DC_MIS2_get_srex(data)                                           ((0x00000004&(data))>>2)
#define  DC1_MC_DC_MIS2_get_exe_emr(data)                                        ((0x00000002&(data))>>1)
#define  DC1_MC_DC_MIS2_get_exe_mr(data)                                         (0x00000001&(data))

#define  DC1_MC_DC_MISa                                                         0x18008830
#define  DC1_MC_DC_MISa_reg_addr                                                 "0xB8008830"
#define  DC1_MC_DC_MISa_reg                                                      0xB8008830
#define  DC1_MC_DC_MISa_inst_addr                                                "0x0015"
#define  set_DC1_MC_DC_MISa_reg(data)                                            (*((volatile unsigned int*)DC1_MC_DC_MISa_reg)=data)
#define  get_DC1_MC_DC_MISa_reg                                                  (*((volatile unsigned int*)DC1_MC_DC_MISa_reg))
#define  DC1_MC_DC_MISa_lbk_en_shift                                             (2)
#define  DC1_MC_DC_MISa_lbk_en_mask                                              (0x00000004)
#define  DC1_MC_DC_MISa_lbk_en(data)                                             (0x00000004&((data)<<2))
#define  DC1_MC_DC_MISa_get_lbk_en(data)                                         ((0x00000004&(data))>>2)

#define  DC1_MC_DC_DDR3_CTL                                                     0x18008840
#define  DC1_MC_DC_DDR3_CTL_reg_addr                                             "0xB8008840"
#define  DC1_MC_DC_DDR3_CTL_reg                                                  0xB8008840
#define  DC1_MC_DC_DDR3_CTL_inst_addr                                            "0x0016"
#define  set_DC1_MC_DC_DDR3_CTL_reg(data)                                        (*((volatile unsigned int*)DC1_MC_DC_DDR3_CTL_reg)=data)
#define  get_DC1_MC_DC_DDR3_CTL_reg                                              (*((volatile unsigned int*)DC1_MC_DC_DDR3_CTL_reg))
#define  DC1_MC_DC_DDR3_CTL_write_en_15_shift                                    (31)
#define  DC1_MC_DC_DDR3_CTL_dis_ap_shift                                         (30)
#define  DC1_MC_DC_DDR3_CTL_write_en_14_shift                                    (29)
#define  DC1_MC_DC_DDR3_CTL_ddr3_swap_shift                                      (28)
#define  DC1_MC_DC_DDR3_CTL_write_en_13_shift                                    (27)
#define  DC1_MC_DC_DDR3_CTL_end_500us_shift                                      (26)
#define  DC1_MC_DC_DDR3_CTL_write_en_12_shift                                    (25)
#define  DC1_MC_DC_DDR3_CTL_end_200us_shift                                      (24)
#define  DC1_MC_DC_DDR3_CTL_write_en_11_shift                                    (23)
#define  DC1_MC_DC_DDR3_CTL_write_en_10_shift                                    (21)
#define  DC1_MC_DC_DDR3_CTL_write_en_9_shift                                     (19)
#define  DC1_MC_DC_DDR3_CTL_write_en_8_shift                                     (17)
#define  DC1_MC_DC_DDR3_CTL_use_tmmrd_shift                                      (16)
#define  DC1_MC_DC_DDR3_CTL_write_en_7_shift                                     (15)
#define  DC1_MC_DC_DDR3_CTL_write_en_6_shift                                     (13)
#define  DC1_MC_DC_DDR3_CTL_ddr3_zqcl_short_shift                                (12)
#define  DC1_MC_DC_DDR3_CTL_write_en_5_shift                                     (11)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_zqcl_shift                                  (10)
#define  DC1_MC_DC_DDR3_CTL_write_en_4_shift                                     (9)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr3_shift                                   (8)
#define  DC1_MC_DC_DDR3_CTL_write_en_3_shift                                     (7)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr2_shift                                   (6)
#define  DC1_MC_DC_DDR3_CTL_write_en_2_shift                                     (5)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr1_shift                                   (4)
#define  DC1_MC_DC_DDR3_CTL_write_en_1_shift                                     (3)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr0_shift                                   (2)
#define  DC1_MC_DC_DDR3_CTL_write_en_0_shift                                     (1)
#define  DC1_MC_DC_DDR3_CTL_ddr3_init_shift                                      (0)
#define  DC1_MC_DC_DDR3_CTL_write_en_15_mask                                     (0x80000000)
#define  DC1_MC_DC_DDR3_CTL_dis_ap_mask                                          (0x40000000)
#define  DC1_MC_DC_DDR3_CTL_write_en_14_mask                                     (0x20000000)
#define  DC1_MC_DC_DDR3_CTL_ddr3_swap_mask                                       (0x10000000)
#define  DC1_MC_DC_DDR3_CTL_write_en_13_mask                                     (0x08000000)
#define  DC1_MC_DC_DDR3_CTL_end_500us_mask                                       (0x04000000)
#define  DC1_MC_DC_DDR3_CTL_write_en_12_mask                                     (0x02000000)
#define  DC1_MC_DC_DDR3_CTL_end_200us_mask                                       (0x01000000)
#define  DC1_MC_DC_DDR3_CTL_write_en_11_mask                                     (0x00800000)
#define  DC1_MC_DC_DDR3_CTL_write_en_10_mask                                     (0x00200000)
#define  DC1_MC_DC_DDR3_CTL_write_en_9_mask                                      (0x00080000)
#define  DC1_MC_DC_DDR3_CTL_write_en_8_mask                                      (0x00020000)
#define  DC1_MC_DC_DDR3_CTL_use_tmmrd_mask                                       (0x00010000)
#define  DC1_MC_DC_DDR3_CTL_write_en_7_mask                                      (0x00008000)
#define  DC1_MC_DC_DDR3_CTL_write_en_6_mask                                      (0x00002000)
#define  DC1_MC_DC_DDR3_CTL_ddr3_zqcl_short_mask                                 (0x00001000)
#define  DC1_MC_DC_DDR3_CTL_write_en_5_mask                                      (0x00000800)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_zqcl_mask                                   (0x00000400)
#define  DC1_MC_DC_DDR3_CTL_write_en_4_mask                                      (0x00000200)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr3_mask                                    (0x00000100)
#define  DC1_MC_DC_DDR3_CTL_write_en_3_mask                                      (0x00000080)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr2_mask                                    (0x00000040)
#define  DC1_MC_DC_DDR3_CTL_write_en_2_mask                                      (0x00000020)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr1_mask                                    (0x00000010)
#define  DC1_MC_DC_DDR3_CTL_write_en_1_mask                                      (0x00000008)
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr0_mask                                    (0x00000004)
#define  DC1_MC_DC_DDR3_CTL_write_en_0_mask                                      (0x00000002)
#define  DC1_MC_DC_DDR3_CTL_ddr3_init_mask                                       (0x00000001)
#define  DC1_MC_DC_DDR3_CTL_write_en_15(data)                                    (0x80000000&((data)<<31))
#define  DC1_MC_DC_DDR3_CTL_dis_ap(data)                                         (0x40000000&((data)<<30))
#define  DC1_MC_DC_DDR3_CTL_write_en_14(data)                                    (0x20000000&((data)<<29))
#define  DC1_MC_DC_DDR3_CTL_ddr3_swap(data)                                      (0x10000000&((data)<<28))
#define  DC1_MC_DC_DDR3_CTL_write_en_13(data)                                    (0x08000000&((data)<<27))
#define  DC1_MC_DC_DDR3_CTL_end_500us(data)                                      (0x04000000&((data)<<26))
#define  DC1_MC_DC_DDR3_CTL_write_en_12(data)                                    (0x02000000&((data)<<25))
#define  DC1_MC_DC_DDR3_CTL_end_200us(data)                                      (0x01000000&((data)<<24))
#define  DC1_MC_DC_DDR3_CTL_write_en_11(data)                                    (0x00800000&((data)<<23))
#define  DC1_MC_DC_DDR3_CTL_write_en_10(data)                                    (0x00200000&((data)<<21))
#define  DC1_MC_DC_DDR3_CTL_write_en_9(data)                                     (0x00080000&((data)<<19))
#define  DC1_MC_DC_DDR3_CTL_write_en_8(data)                                     (0x00020000&((data)<<17))
#define  DC1_MC_DC_DDR3_CTL_use_tmmrd(data)                                      (0x00010000&((data)<<16))
#define  DC1_MC_DC_DDR3_CTL_write_en_7(data)                                     (0x00008000&((data)<<15))
#define  DC1_MC_DC_DDR3_CTL_write_en_6(data)                                     (0x00002000&((data)<<13))
#define  DC1_MC_DC_DDR3_CTL_ddr3_zqcl_short(data)                                (0x00001000&((data)<<12))
#define  DC1_MC_DC_DDR3_CTL_write_en_5(data)                                     (0x00000800&((data)<<11))
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_zqcl(data)                                  (0x00000400&((data)<<10))
#define  DC1_MC_DC_DDR3_CTL_write_en_4(data)                                     (0x00000200&((data)<<9))
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr3(data)                                   (0x00000100&((data)<<8))
#define  DC1_MC_DC_DDR3_CTL_write_en_3(data)                                     (0x00000080&((data)<<7))
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr2(data)                                   (0x00000040&((data)<<6))
#define  DC1_MC_DC_DDR3_CTL_write_en_2(data)                                     (0x00000020&((data)<<5))
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr1(data)                                   (0x00000010&((data)<<4))
#define  DC1_MC_DC_DDR3_CTL_write_en_1(data)                                     (0x00000008&((data)<<3))
#define  DC1_MC_DC_DDR3_CTL_ddr3_exe_mr0(data)                                   (0x00000004&((data)<<2))
#define  DC1_MC_DC_DDR3_CTL_write_en_0(data)                                     (0x00000002&((data)<<1))
#define  DC1_MC_DC_DDR3_CTL_ddr3_init(data)                                      (0x00000001&(data))
#define  DC1_MC_DC_DDR3_CTL_get_write_en_15(data)                                ((0x80000000&(data))>>31)
#define  DC1_MC_DC_DDR3_CTL_get_dis_ap(data)                                     ((0x40000000&(data))>>30)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_14(data)                                ((0x20000000&(data))>>29)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_swap(data)                                  ((0x10000000&(data))>>28)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_13(data)                                ((0x08000000&(data))>>27)
#define  DC1_MC_DC_DDR3_CTL_get_end_500us(data)                                  ((0x04000000&(data))>>26)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_12(data)                                ((0x02000000&(data))>>25)
#define  DC1_MC_DC_DDR3_CTL_get_end_200us(data)                                  ((0x01000000&(data))>>24)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_11(data)                                ((0x00800000&(data))>>23)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_10(data)                                ((0x00200000&(data))>>21)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_9(data)                                 ((0x00080000&(data))>>19)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_8(data)                                 ((0x00020000&(data))>>17)
#define  DC1_MC_DC_DDR3_CTL_get_use_tmmrd(data)                                  ((0x00010000&(data))>>16)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_7(data)                                 ((0x00008000&(data))>>15)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_6(data)                                 ((0x00002000&(data))>>13)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_zqcl_short(data)                            ((0x00001000&(data))>>12)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_5(data)                                 ((0x00000800&(data))>>11)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_exe_zqcl(data)                              ((0x00000400&(data))>>10)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_4(data)                                 ((0x00000200&(data))>>9)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_exe_mr3(data)                               ((0x00000100&(data))>>8)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_3(data)                                 ((0x00000080&(data))>>7)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_exe_mr2(data)                               ((0x00000040&(data))>>6)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_2(data)                                 ((0x00000020&(data))>>5)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_exe_mr1(data)                               ((0x00000010&(data))>>4)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_1(data)                                 ((0x00000008&(data))>>3)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_exe_mr0(data)                               ((0x00000004&(data))>>2)
#define  DC1_MC_DC_DDR3_CTL_get_write_en_0(data)                                 ((0x00000002&(data))>>1)
#define  DC1_MC_DC_DDR3_CTL_get_ddr3_init(data)                                  (0x00000001&(data))

#define  DC1_MC_DC_WRITE_LEVEL                                                  0x18008854
#define  DC1_MC_DC_WRITE_LEVEL_reg_addr                                          "0xB8008854"
#define  DC1_MC_DC_WRITE_LEVEL_reg                                               0xB8008854
#define  DC1_MC_DC_WRITE_LEVEL_inst_addr                                         "0x0017"
#define  set_DC1_MC_DC_WRITE_LEVEL_reg(data)                                     (*((volatile unsigned int*)DC1_MC_DC_WRITE_LEVEL_reg)=data)
#define  get_DC1_MC_DC_WRITE_LEVEL_reg                                           (*((volatile unsigned int*)DC1_MC_DC_WRITE_LEVEL_reg))
#define  DC1_MC_DC_WRITE_LEVEL_hppr_mode_shift                                   (31)
#define  DC1_MC_DC_WRITE_LEVEL_sppr_mode_shift                                   (30)
#define  DC1_MC_DC_WRITE_LEVEL_precharge_type_shift                              (4)
#define  DC1_MC_DC_WRITE_LEVEL_exe_prea_shift                                    (3)
#define  DC1_MC_DC_WRITE_LEVEL_dis_refresh_shift                                 (2)
#define  DC1_MC_DC_WRITE_LEVEL_hppr_mode_mask                                    (0x80000000)
#define  DC1_MC_DC_WRITE_LEVEL_sppr_mode_mask                                    (0x40000000)
#define  DC1_MC_DC_WRITE_LEVEL_precharge_type_mask                               (0x00000010)
#define  DC1_MC_DC_WRITE_LEVEL_exe_prea_mask                                     (0x00000008)
#define  DC1_MC_DC_WRITE_LEVEL_dis_refresh_mask                                  (0x00000004)
#define  DC1_MC_DC_WRITE_LEVEL_hppr_mode(data)                                   (0x80000000&((data)<<31))
#define  DC1_MC_DC_WRITE_LEVEL_sppr_mode(data)                                   (0x40000000&((data)<<30))
#define  DC1_MC_DC_WRITE_LEVEL_precharge_type(data)                              (0x00000010&((data)<<4))
#define  DC1_MC_DC_WRITE_LEVEL_exe_prea(data)                                    (0x00000008&((data)<<3))
#define  DC1_MC_DC_WRITE_LEVEL_dis_refresh(data)                                 (0x00000004&((data)<<2))
#define  DC1_MC_DC_WRITE_LEVEL_get_hppr_mode(data)                               ((0x80000000&(data))>>31)
#define  DC1_MC_DC_WRITE_LEVEL_get_sppr_mode(data)                               ((0x40000000&(data))>>30)
#define  DC1_MC_DC_WRITE_LEVEL_get_precharge_type(data)                          ((0x00000010&(data))>>4)
#define  DC1_MC_DC_WRITE_LEVEL_get_exe_prea(data)                                ((0x00000008&(data))>>3)
#define  DC1_MC_DC_WRITE_LEVEL_get_dis_refresh(data)                             ((0x00000004&(data))>>2)

#define  DC1_MC_AUTO_SHORT_ZQ_CAL                                               0x1800887C
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_reg_addr                                       "0xB800887C"
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_reg                                            0xB800887C
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_inst_addr                                      "0x0018"
#define  set_DC1_MC_AUTO_SHORT_ZQ_CAL_reg(data)                                  (*((volatile unsigned int*)DC1_MC_AUTO_SHORT_ZQ_CAL_reg)=data)
#define  get_DC1_MC_AUTO_SHORT_ZQ_CAL_reg                                        (*((volatile unsigned int*)DC1_MC_AUTO_SHORT_ZQ_CAL_reg))
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_short_zqcl_per_sel_shift                       (1)
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_auto_short_zqcl_en_shift                       (0)
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_short_zqcl_per_sel_mask                        (0x0000000E)
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_auto_short_zqcl_en_mask                        (0x00000001)
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_short_zqcl_per_sel(data)                       (0x0000000E&((data)<<1))
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_auto_short_zqcl_en(data)                       (0x00000001&(data))
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_get_short_zqcl_per_sel(data)                   ((0x0000000E&(data))>>1)
#define  DC1_MC_AUTO_SHORT_ZQ_CAL_get_auto_short_zqcl_en(data)                   (0x00000001&(data))

#define  DC1_MC_DUMMY_REG                                                       0x18008870
#define  DC1_MC_DUMMY_REG_reg_addr                                               "0xB8008870"
#define  DC1_MC_DUMMY_REG_reg                                                    0xB8008870
#define  DC1_MC_DUMMY_REG_inst_addr                                              "0x0019"
#define  set_DC1_MC_DUMMY_REG_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_REG_reg)=data)
#define  get_DC1_MC_DUMMY_REG_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_REG_reg))
#define  DC1_MC_DUMMY_REG_dummy_reg_shift                                        (0)
#define  DC1_MC_DUMMY_REG_dummy_reg_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_REG_dummy_reg(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_REG_get_dummy_reg(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_MOD_REG                                                         0x18008844
#define  DC1_MC_MOD_REG_reg_addr                                                 "0xB8008844"
#define  DC1_MC_MOD_REG_reg                                                      0xB8008844
#define  DC1_MC_MOD_REG_inst_addr                                                "0x001A"
#define  set_DC1_MC_MOD_REG_reg(data)                                            (*((volatile unsigned int*)DC1_MC_MOD_REG_reg)=data)
#define  get_DC1_MC_MOD_REG_reg                                                  (*((volatile unsigned int*)DC1_MC_MOD_REG_reg))
#define  DC1_MC_MOD_REG_exmod_reg_shift                                          (16)
#define  DC1_MC_MOD_REG_mod_reg_shift                                            (0)
#define  DC1_MC_MOD_REG_exmod_reg_mask                                           (0xFFFF0000)
#define  DC1_MC_MOD_REG_mod_reg_mask                                             (0x0000FFFF)
#define  DC1_MC_MOD_REG_exmod_reg(data)                                          (0xFFFF0000&((data)<<16))
#define  DC1_MC_MOD_REG_mod_reg(data)                                            (0x0000FFFF&(data))
#define  DC1_MC_MOD_REG_get_exmod_reg(data)                                      ((0xFFFF0000&(data))>>16)
#define  DC1_MC_MOD_REG_get_mod_reg(data)                                        (0x0000FFFF&(data))

#define  DC1_MC_MOD23_REG                                                       0x18008848
#define  DC1_MC_MOD23_REG_reg_addr                                               "0xB8008848"
#define  DC1_MC_MOD23_REG_reg                                                    0xB8008848
#define  DC1_MC_MOD23_REG_inst_addr                                              "0x001B"
#define  set_DC1_MC_MOD23_REG_reg(data)                                          (*((volatile unsigned int*)DC1_MC_MOD23_REG_reg)=data)
#define  get_DC1_MC_MOD23_REG_reg                                                (*((volatile unsigned int*)DC1_MC_MOD23_REG_reg))
#define  DC1_MC_MOD23_REG_mod3_reg_shift                                         (16)
#define  DC1_MC_MOD23_REG_mod2_reg_shift                                         (0)
#define  DC1_MC_MOD23_REG_mod3_reg_mask                                          (0xFFFF0000)
#define  DC1_MC_MOD23_REG_mod2_reg_mask                                          (0x0000FFFF)
#define  DC1_MC_MOD23_REG_mod3_reg(data)                                         (0xFFFF0000&((data)<<16))
#define  DC1_MC_MOD23_REG_mod2_reg(data)                                         (0x0000FFFF&(data))
#define  DC1_MC_MOD23_REG_get_mod3_reg(data)                                     ((0xFFFF0000&(data))>>16)
#define  DC1_MC_MOD23_REG_get_mod2_reg(data)                                     (0x0000FFFF&(data))

#define  DC1_MC_ERR_STATUS                                                      0x18008850
#define  DC1_MC_ERR_STATUS_reg_addr                                              "0xB8008850"
#define  DC1_MC_ERR_STATUS_reg                                                   0xB8008850
#define  DC1_MC_ERR_STATUS_inst_addr                                             "0x001C"
#define  set_DC1_MC_ERR_STATUS_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ERR_STATUS_reg)=data)
#define  get_DC1_MC_ERR_STATUS_reg                                               (*((volatile unsigned int*)DC1_MC_ERR_STATUS_reg))
#define  DC1_MC_ERR_STATUS_mc_fifo_err_int_shift                                 (8)
#define  DC1_MC_ERR_STATUS_ddr4_parity_err_1_shift                               (5)
#define  DC1_MC_ERR_STATUS_ddr4_crc_err_1_shift                                  (4)
#define  DC1_MC_ERR_STATUS_ddr4_parity_err_0_shift                               (3)
#define  DC1_MC_ERR_STATUS_ddr4_crc_err_0_shift                                  (2)
#define  DC1_MC_ERR_STATUS_err_active_shift                                      (0)
#define  DC1_MC_ERR_STATUS_mc_fifo_err_int_mask                                  (0x00000100)
#define  DC1_MC_ERR_STATUS_ddr4_parity_err_1_mask                                (0x00000020)
#define  DC1_MC_ERR_STATUS_ddr4_crc_err_1_mask                                   (0x00000010)
#define  DC1_MC_ERR_STATUS_ddr4_parity_err_0_mask                                (0x00000008)
#define  DC1_MC_ERR_STATUS_ddr4_crc_err_0_mask                                   (0x00000004)
#define  DC1_MC_ERR_STATUS_err_active_mask                                       (0x00000001)
#define  DC1_MC_ERR_STATUS_mc_fifo_err_int(data)                                 (0x00000100&((data)<<8))
#define  DC1_MC_ERR_STATUS_ddr4_parity_err_1(data)                               (0x00000020&((data)<<5))
#define  DC1_MC_ERR_STATUS_ddr4_crc_err_1(data)                                  (0x00000010&((data)<<4))
#define  DC1_MC_ERR_STATUS_ddr4_parity_err_0(data)                               (0x00000008&((data)<<3))
#define  DC1_MC_ERR_STATUS_ddr4_crc_err_0(data)                                  (0x00000004&((data)<<2))
#define  DC1_MC_ERR_STATUS_err_active(data)                                      (0x00000001&(data))
#define  DC1_MC_ERR_STATUS_get_mc_fifo_err_int(data)                             ((0x00000100&(data))>>8)
#define  DC1_MC_ERR_STATUS_get_ddr4_parity_err_1(data)                           ((0x00000020&(data))>>5)
#define  DC1_MC_ERR_STATUS_get_ddr4_crc_err_1(data)                              ((0x00000010&(data))>>4)
#define  DC1_MC_ERR_STATUS_get_ddr4_parity_err_0(data)                           ((0x00000008&(data))>>3)
#define  DC1_MC_ERR_STATUS_get_ddr4_crc_err_0(data)                              ((0x00000004&(data))>>2)
#define  DC1_MC_ERR_STATUS_get_err_active(data)                                  (0x00000001&(data))

#define  DC1_MC_INT_ENABLE                                                      0x18008858
#define  DC1_MC_INT_ENABLE_reg_addr                                              "0xB8008858"
#define  DC1_MC_INT_ENABLE_reg                                                   0xB8008858
#define  DC1_MC_INT_ENABLE_inst_addr                                             "0x001D"
#define  set_DC1_MC_INT_ENABLE_reg(data)                                         (*((volatile unsigned int*)DC1_MC_INT_ENABLE_reg)=data)
#define  get_DC1_MC_INT_ENABLE_reg                                               (*((volatile unsigned int*)DC1_MC_INT_ENABLE_reg))
#define  DC1_MC_INT_ENABLE_mc_fifo_err_int_en_shift                              (8)
#define  DC1_MC_INT_ENABLE_crc_err_int_en_1_shift                                (6)
#define  DC1_MC_INT_ENABLE_parity_err_int_en_1_shift                             (5)
#define  DC1_MC_INT_ENABLE_crc_err_int_en_0_shift                                (4)
#define  DC1_MC_INT_ENABLE_parity_err_int_en_0_shift                             (3)
#define  DC1_MC_INT_ENABLE_int_err_active_en_shift                               (1)
#define  DC1_MC_INT_ENABLE_mc_fifo_err_int_en_mask                               (0x00000100)
#define  DC1_MC_INT_ENABLE_crc_err_int_en_1_mask                                 (0x00000040)
#define  DC1_MC_INT_ENABLE_parity_err_int_en_1_mask                              (0x00000020)
#define  DC1_MC_INT_ENABLE_crc_err_int_en_0_mask                                 (0x00000010)
#define  DC1_MC_INT_ENABLE_parity_err_int_en_0_mask                              (0x00000008)
#define  DC1_MC_INT_ENABLE_int_err_active_en_mask                                (0x00000002)
#define  DC1_MC_INT_ENABLE_mc_fifo_err_int_en(data)                              (0x00000100&((data)<<8))
#define  DC1_MC_INT_ENABLE_crc_err_int_en_1(data)                                (0x00000040&((data)<<6))
#define  DC1_MC_INT_ENABLE_parity_err_int_en_1(data)                             (0x00000020&((data)<<5))
#define  DC1_MC_INT_ENABLE_crc_err_int_en_0(data)                                (0x00000010&((data)<<4))
#define  DC1_MC_INT_ENABLE_parity_err_int_en_0(data)                             (0x00000008&((data)<<3))
#define  DC1_MC_INT_ENABLE_int_err_active_en(data)                               (0x00000002&((data)<<1))
#define  DC1_MC_INT_ENABLE_get_mc_fifo_err_int_en(data)                          ((0x00000100&(data))>>8)
#define  DC1_MC_INT_ENABLE_get_crc_err_int_en_1(data)                            ((0x00000040&(data))>>6)
#define  DC1_MC_INT_ENABLE_get_parity_err_int_en_1(data)                         ((0x00000020&(data))>>5)
#define  DC1_MC_INT_ENABLE_get_crc_err_int_en_0(data)                            ((0x00000010&(data))>>4)
#define  DC1_MC_INT_ENABLE_get_parity_err_int_en_0(data)                         ((0x00000008&(data))>>3)
#define  DC1_MC_INT_ENABLE_get_int_err_active_en(data)                           ((0x00000002&(data))>>1)

#define  DC1_MC_SM_STATUS_1                                                     0x18008860
#define  DC1_MC_SM_STATUS_1_reg_addr                                             "0xB8008860"
#define  DC1_MC_SM_STATUS_1_reg                                                  0xB8008860
#define  DC1_MC_SM_STATUS_1_inst_addr                                            "0x001E"
#define  set_DC1_MC_SM_STATUS_1_reg(data)                                        (*((volatile unsigned int*)DC1_MC_SM_STATUS_1_reg)=data)
#define  get_DC1_MC_SM_STATUS_1_reg                                              (*((volatile unsigned int*)DC1_MC_SM_STATUS_1_reg))
#define  DC1_MC_SM_STATUS_1_bank_act_shift                                       (24)
#define  DC1_MC_SM_STATUS_1_bg1_cmd_cnt_shift                                    (20)
#define  DC1_MC_SM_STATUS_1_bg0_cmd_cnt_shift                                    (16)
#define  DC1_MC_SM_STATUS_1_par_st_36_32_shift                                   (0)
#define  DC1_MC_SM_STATUS_1_bank_act_mask                                        (0xFF000000)
#define  DC1_MC_SM_STATUS_1_bg1_cmd_cnt_mask                                     (0x00F00000)
#define  DC1_MC_SM_STATUS_1_bg0_cmd_cnt_mask                                     (0x000F0000)
#define  DC1_MC_SM_STATUS_1_par_st_36_32_mask                                    (0x0000001F)
#define  DC1_MC_SM_STATUS_1_bank_act(data)                                       (0xFF000000&((data)<<24))
#define  DC1_MC_SM_STATUS_1_bg1_cmd_cnt(data)                                    (0x00F00000&((data)<<20))
#define  DC1_MC_SM_STATUS_1_bg0_cmd_cnt(data)                                    (0x000F0000&((data)<<16))
#define  DC1_MC_SM_STATUS_1_par_st_36_32(data)                                   (0x0000001F&(data))
#define  DC1_MC_SM_STATUS_1_get_bank_act(data)                                   ((0xFF000000&(data))>>24)
#define  DC1_MC_SM_STATUS_1_get_bg1_cmd_cnt(data)                                ((0x00F00000&(data))>>20)
#define  DC1_MC_SM_STATUS_1_get_bg0_cmd_cnt(data)                                ((0x000F0000&(data))>>16)
#define  DC1_MC_SM_STATUS_1_get_par_st_36_32(data)                               (0x0000001F&(data))

#define  DC1_MC_SM_STATUS_2                                                     0x18008864
#define  DC1_MC_SM_STATUS_2_reg_addr                                             "0xB8008864"
#define  DC1_MC_SM_STATUS_2_reg                                                  0xB8008864
#define  DC1_MC_SM_STATUS_2_inst_addr                                            "0x001F"
#define  set_DC1_MC_SM_STATUS_2_reg(data)                                        (*((volatile unsigned int*)DC1_MC_SM_STATUS_2_reg)=data)
#define  get_DC1_MC_SM_STATUS_2_reg                                              (*((volatile unsigned int*)DC1_MC_SM_STATUS_2_reg))
#define  DC1_MC_SM_STATUS_2_par_st_31_0_shift                                    (0)
#define  DC1_MC_SM_STATUS_2_par_st_31_0_mask                                     (0xFFFFFFFF)
#define  DC1_MC_SM_STATUS_2_par_st_31_0(data)                                    (0xFFFFFFFF&(data))
#define  DC1_MC_SM_STATUS_2_get_par_st_31_0(data)                                (0xFFFFFFFF&(data))

#define  DC1_MC_DC_DEBUG                                                        0x18008868
#define  DC1_MC_DC_DEBUG_reg_addr                                                "0xB8008868"
#define  DC1_MC_DC_DEBUG_reg                                                     0xB8008868
#define  DC1_MC_DC_DEBUG_inst_addr                                               "0x0020"
#define  set_DC1_MC_DC_DEBUG_reg(data)                                           (*((volatile unsigned int*)DC1_MC_DC_DEBUG_reg)=data)
#define  get_DC1_MC_DC_DEBUG_reg                                                 (*((volatile unsigned int*)DC1_MC_DC_DEBUG_reg))
#define  DC1_MC_DC_DEBUG_dbg_mod_shift                                           (0)
#define  DC1_MC_DC_DEBUG_dbg_mod_mask                                            (0x0000003F)
#define  DC1_MC_DC_DEBUG_dbg_mod(data)                                           (0x0000003F&(data))
#define  DC1_MC_DC_DEBUG_get_dbg_mod(data)                                       (0x0000003F&(data))

#define  DC1_MC_par_dbg_sel                                                     0x180088A0
#define  DC1_MC_par_dbg_sel_reg_addr                                             "0xB80088A0"
#define  DC1_MC_par_dbg_sel_reg                                                  0xB80088A0
#define  DC1_MC_par_dbg_sel_inst_addr                                            "0x0021"
#define  set_DC1_MC_par_dbg_sel_reg(data)                                        (*((volatile unsigned int*)DC1_MC_par_dbg_sel_reg)=data)
#define  get_DC1_MC_par_dbg_sel_reg                                              (*((volatile unsigned int*)DC1_MC_par_dbg_sel_reg))
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_bg1_sel_shift                        (12)
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_bg0_sel_shift                        (8)
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_sel_shift                            (0)
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_bg1_sel_mask                         (0x00007000)
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_bg0_sel_mask                         (0x00000700)
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_sel_mask                             (0x0000001F)
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_bg1_sel(data)                        (0x00007000&((data)<<12))
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_bg0_sel(data)                        (0x00000700&((data)<<8))
#define  DC1_MC_par_dbg_sel_parser_rbus_dbg_sel(data)                            (0x0000001F&(data))
#define  DC1_MC_par_dbg_sel_get_parser_rbus_dbg_bg1_sel(data)                    ((0x00007000&(data))>>12)
#define  DC1_MC_par_dbg_sel_get_parser_rbus_dbg_bg0_sel(data)                    ((0x00000700&(data))>>8)
#define  DC1_MC_par_dbg_sel_get_parser_rbus_dbg_sel(data)                        (0x0000001F&(data))

#define  DC1_MC_par_dbg_data                                                    0x180088A4
#define  DC1_MC_par_dbg_data_reg_addr                                            "0xB80088A4"
#define  DC1_MC_par_dbg_data_reg                                                 0xB80088A4
#define  DC1_MC_par_dbg_data_inst_addr                                           "0x0022"
#define  set_DC1_MC_par_dbg_data_reg(data)                                       (*((volatile unsigned int*)DC1_MC_par_dbg_data_reg)=data)
#define  get_DC1_MC_par_dbg_data_reg                                             (*((volatile unsigned int*)DC1_MC_par_dbg_data_reg))
#define  DC1_MC_par_dbg_data_parser_rbus_dbg_shift                               (0)
#define  DC1_MC_par_dbg_data_parser_rbus_dbg_mask                                (0xFFFFFFFF)
#define  DC1_MC_par_dbg_data_parser_rbus_dbg(data)                               (0xFFFFFFFF&(data))
#define  DC1_MC_par_dbg_data_get_parser_rbus_dbg(data)                           (0xFFFFFFFF&(data))

#define  DC1_MC_DEBUG01                                                         0x18008F64
#define  DC1_MC_DEBUG01_reg_addr                                                 "0xB8008F64"
#define  DC1_MC_DEBUG01_reg                                                      0xB8008F64
#define  DC1_MC_DEBUG01_inst_addr                                                "0x0023"
#define  set_DC1_MC_DEBUG01_reg(data)                                            (*((volatile unsigned int*)DC1_MC_DEBUG01_reg)=data)
#define  get_DC1_MC_DEBUG01_reg                                                  (*((volatile unsigned int*)DC1_MC_DEBUG01_reg))
#define  DC1_MC_DEBUG01_dc_dbg_out1_shift                                        (16)
#define  DC1_MC_DEBUG01_dc_dbg_out0_shift                                        (0)
#define  DC1_MC_DEBUG01_dc_dbg_out1_mask                                         (0xFFFF0000)
#define  DC1_MC_DEBUG01_dc_dbg_out0_mask                                         (0x0000FFFF)
#define  DC1_MC_DEBUG01_dc_dbg_out1(data)                                        (0xFFFF0000&((data)<<16))
#define  DC1_MC_DEBUG01_dc_dbg_out0(data)                                        (0x0000FFFF&(data))
#define  DC1_MC_DEBUG01_get_dc_dbg_out1(data)                                    ((0xFFFF0000&(data))>>16)
#define  DC1_MC_DEBUG01_get_dc_dbg_out0(data)                                    (0x0000FFFF&(data))

#define  DC1_MC_DEBUG23                                                         0x18008F68
#define  DC1_MC_DEBUG23_reg_addr                                                 "0xB8008F68"
#define  DC1_MC_DEBUG23_reg                                                      0xB8008F68
#define  DC1_MC_DEBUG23_inst_addr                                                "0x0024"
#define  set_DC1_MC_DEBUG23_reg(data)                                            (*((volatile unsigned int*)DC1_MC_DEBUG23_reg)=data)
#define  get_DC1_MC_DEBUG23_reg                                                  (*((volatile unsigned int*)DC1_MC_DEBUG23_reg))
#define  DC1_MC_DEBUG23_dc_dbg_out3_shift                                        (16)
#define  DC1_MC_DEBUG23_dc_dbg_out2_shift                                        (0)
#define  DC1_MC_DEBUG23_dc_dbg_out3_mask                                         (0xFFFF0000)
#define  DC1_MC_DEBUG23_dc_dbg_out2_mask                                         (0x0000FFFF)
#define  DC1_MC_DEBUG23_dc_dbg_out3(data)                                        (0xFFFF0000&((data)<<16))
#define  DC1_MC_DEBUG23_dc_dbg_out2(data)                                        (0x0000FFFF&(data))
#define  DC1_MC_DEBUG23_get_dc_dbg_out3(data)                                    ((0xFFFF0000&(data))>>16)
#define  DC1_MC_DEBUG23_get_dc_dbg_out2(data)                                    (0x0000FFFF&(data))

#define  DC1_MC_MC_RDC_DBG                                                      0x1800889C
#define  DC1_MC_MC_RDC_DBG_reg_addr                                              "0xB800889C"
#define  DC1_MC_MC_RDC_DBG_reg                                                   0xB800889C
#define  DC1_MC_MC_RDC_DBG_inst_addr                                             "0x0025"
#define  set_DC1_MC_MC_RDC_DBG_reg(data)                                         (*((volatile unsigned int*)DC1_MC_MC_RDC_DBG_reg)=data)
#define  get_DC1_MC_MC_RDC_DBG_reg                                               (*((volatile unsigned int*)DC1_MC_MC_RDC_DBG_reg))
#define  DC1_MC_MC_RDC_DBG_rdc_dbg_clr_shift                                     (31)
#define  DC1_MC_MC_RDC_DBG_rdc_dbg_out_shift                                     (0)
#define  DC1_MC_MC_RDC_DBG_rdc_dbg_clr_mask                                      (0x80000000)
#define  DC1_MC_MC_RDC_DBG_rdc_dbg_out_mask                                      (0x7FFFFFFF)
#define  DC1_MC_MC_RDC_DBG_rdc_dbg_clr(data)                                     (0x80000000&((data)<<31))
#define  DC1_MC_MC_RDC_DBG_rdc_dbg_out(data)                                     (0x7FFFFFFF&(data))
#define  DC1_MC_MC_RDC_DBG_get_rdc_dbg_clr(data)                                 ((0x80000000&(data))>>31)
#define  DC1_MC_MC_RDC_DBG_get_rdc_dbg_out(data)                                 (0x7FFFFFFF&(data))

#define  DC1_MC_MC_WDC_DBG                                                      0x18008898
#define  DC1_MC_MC_WDC_DBG_reg_addr                                              "0xB8008898"
#define  DC1_MC_MC_WDC_DBG_reg                                                   0xB8008898
#define  DC1_MC_MC_WDC_DBG_inst_addr                                             "0x0026"
#define  set_DC1_MC_MC_WDC_DBG_reg(data)                                         (*((volatile unsigned int*)DC1_MC_MC_WDC_DBG_reg)=data)
#define  get_DC1_MC_MC_WDC_DBG_reg                                               (*((volatile unsigned int*)DC1_MC_MC_WDC_DBG_reg))
#define  DC1_MC_MC_WDC_DBG_wdc_dbg_clr_shift                                     (31)
#define  DC1_MC_MC_WDC_DBG_wdc_dbg_out_shift                                     (0)
#define  DC1_MC_MC_WDC_DBG_wdc_dbg_clr_mask                                      (0x80000000)
#define  DC1_MC_MC_WDC_DBG_wdc_dbg_out_mask                                      (0x7FFFFFFF)
#define  DC1_MC_MC_WDC_DBG_wdc_dbg_clr(data)                                     (0x80000000&((data)<<31))
#define  DC1_MC_MC_WDC_DBG_wdc_dbg_out(data)                                     (0x7FFFFFFF&(data))
#define  DC1_MC_MC_WDC_DBG_get_wdc_dbg_clr(data)                                 ((0x80000000&(data))>>31)
#define  DC1_MC_MC_WDC_DBG_get_wdc_dbg_out(data)                                 (0x7FFFFFFF&(data))

#define  DC1_MC_MC_EFF_DBG                                                      0x18008894
#define  DC1_MC_MC_EFF_DBG_reg_addr                                              "0xB8008894"
#define  DC1_MC_MC_EFF_DBG_reg                                                   0xB8008894
#define  DC1_MC_MC_EFF_DBG_inst_addr                                             "0x0027"
#define  set_DC1_MC_MC_EFF_DBG_reg(data)                                         (*((volatile unsigned int*)DC1_MC_MC_EFF_DBG_reg)=data)
#define  get_DC1_MC_MC_EFF_DBG_reg                                               (*((volatile unsigned int*)DC1_MC_MC_EFF_DBG_reg))
#define  DC1_MC_MC_EFF_DBG_eff_dbg_clr_shift                                     (31)
#define  DC1_MC_MC_EFF_DBG_eff_dbg_out_shift                                     (0)
#define  DC1_MC_MC_EFF_DBG_eff_dbg_clr_mask                                      (0x80000000)
#define  DC1_MC_MC_EFF_DBG_eff_dbg_out_mask                                      (0x7FFFFFFF)
#define  DC1_MC_MC_EFF_DBG_eff_dbg_clr(data)                                     (0x80000000&((data)<<31))
#define  DC1_MC_MC_EFF_DBG_eff_dbg_out(data)                                     (0x7FFFFFFF&(data))
#define  DC1_MC_MC_EFF_DBG_get_eff_dbg_clr(data)                                 ((0x80000000&(data))>>31)
#define  DC1_MC_MC_EFF_DBG_get_eff_dbg_out(data)                                 (0x7FFFFFFF&(data))

#define  DC1_MC_CAL_MODE                                                        0x18008874
#define  DC1_MC_CAL_MODE_reg_addr                                                "0xB8008874"
#define  DC1_MC_CAL_MODE_reg                                                     0xB8008874
#define  DC1_MC_CAL_MODE_inst_addr                                               "0x0028"
#define  set_DC1_MC_CAL_MODE_reg(data)                                           (*((volatile unsigned int*)DC1_MC_CAL_MODE_reg)=data)
#define  get_DC1_MC_CAL_MODE_reg                                                 (*((volatile unsigned int*)DC1_MC_CAL_MODE_reg))
#define  DC1_MC_CAL_MODE_alert_sel_shift                                         (30)
#define  DC1_MC_CAL_MODE_udq_msb_sel_shift                                       (20)
#define  DC1_MC_CAL_MODE_udq_lsb_sel_shift                                       (16)
#define  DC1_MC_CAL_MODE_mdq_msb_sel_shift                                       (12)
#define  DC1_MC_CAL_MODE_mdq_lsb_sel_shift                                       (8)
#define  DC1_MC_CAL_MODE_ldq_msb_sel_shift                                       (4)
#define  DC1_MC_CAL_MODE_ldq_lsb_sel_shift                                       (0)
#define  DC1_MC_CAL_MODE_alert_sel_mask                                          (0xC0000000)
#define  DC1_MC_CAL_MODE_udq_msb_sel_mask                                        (0x00700000)
#define  DC1_MC_CAL_MODE_udq_lsb_sel_mask                                        (0x00070000)
#define  DC1_MC_CAL_MODE_mdq_msb_sel_mask                                        (0x00007000)
#define  DC1_MC_CAL_MODE_mdq_lsb_sel_mask                                        (0x00000700)
#define  DC1_MC_CAL_MODE_ldq_msb_sel_mask                                        (0x00000070)
#define  DC1_MC_CAL_MODE_ldq_lsb_sel_mask                                        (0x00000007)
#define  DC1_MC_CAL_MODE_alert_sel(data)                                         (0xC0000000&((data)<<30))
#define  DC1_MC_CAL_MODE_udq_msb_sel(data)                                       (0x00700000&((data)<<20))
#define  DC1_MC_CAL_MODE_udq_lsb_sel(data)                                       (0x00070000&((data)<<16))
#define  DC1_MC_CAL_MODE_mdq_msb_sel(data)                                       (0x00007000&((data)<<12))
#define  DC1_MC_CAL_MODE_mdq_lsb_sel(data)                                       (0x00000700&((data)<<8))
#define  DC1_MC_CAL_MODE_ldq_msb_sel(data)                                       (0x00000070&((data)<<4))
#define  DC1_MC_CAL_MODE_ldq_lsb_sel(data)                                       (0x00000007&(data))
#define  DC1_MC_CAL_MODE_get_alert_sel(data)                                     ((0xC0000000&(data))>>30)
#define  DC1_MC_CAL_MODE_get_udq_msb_sel(data)                                   ((0x00700000&(data))>>20)
#define  DC1_MC_CAL_MODE_get_udq_lsb_sel(data)                                   ((0x00070000&(data))>>16)
#define  DC1_MC_CAL_MODE_get_mdq_msb_sel(data)                                   ((0x00007000&(data))>>12)
#define  DC1_MC_CAL_MODE_get_mdq_lsb_sel(data)                                   ((0x00000700&(data))>>8)
#define  DC1_MC_CAL_MODE_get_ldq_msb_sel(data)                                   ((0x00000070&(data))>>4)
#define  DC1_MC_CAL_MODE_get_ldq_lsb_sel(data)                                   (0x00000007&(data))

#define  DC1_MC_FIFO_ARB_0                                                      0x18008878
#define  DC1_MC_FIFO_ARB_0_reg_addr                                              "0xB8008878"
#define  DC1_MC_FIFO_ARB_0_reg                                                   0xB8008878
#define  DC1_MC_FIFO_ARB_0_inst_addr                                             "0x0029"
#define  set_DC1_MC_FIFO_ARB_0_reg(data)                                         (*((volatile unsigned int*)DC1_MC_FIFO_ARB_0_reg)=data)
#define  get_DC1_MC_FIFO_ARB_0_reg                                               (*((volatile unsigned int*)DC1_MC_FIFO_ARB_0_reg))
#define  DC1_MC_FIFO_ARB_0_mem_num_sel_shift                                     (0)
#define  DC1_MC_FIFO_ARB_0_mem_num_sel_mask                                      (0x00000001)
#define  DC1_MC_FIFO_ARB_0_mem_num_sel(data)                                     (0x00000001&(data))
#define  DC1_MC_FIFO_ARB_0_get_mem_num_sel(data)                                 (0x00000001&(data))

#define  DC1_MC_DUMMY_WDG_RST_FW0                                               0x18008E60
#define  DC1_MC_DUMMY_WDG_RST_FW0_reg_addr                                       "0xB8008E60"
#define  DC1_MC_DUMMY_WDG_RST_FW0_reg                                            0xB8008E60
#define  DC1_MC_DUMMY_WDG_RST_FW0_inst_addr                                      "0x002A"
#define  set_DC1_MC_DUMMY_WDG_RST_FW0_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW0_reg)=data)
#define  get_DC1_MC_DUMMY_WDG_RST_FW0_reg                                        (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW0_reg))
#define  DC1_MC_DUMMY_WDG_RST_FW0_dummy_wdg_rst_fw0_shift                        (0)
#define  DC1_MC_DUMMY_WDG_RST_FW0_dummy_wdg_rst_fw0_mask                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_WDG_RST_FW0_dummy_wdg_rst_fw0(data)                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_WDG_RST_FW0_get_dummy_wdg_rst_fw0(data)                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_WDG_RST_FW1                                               0x18008E64
#define  DC1_MC_DUMMY_WDG_RST_FW1_reg_addr                                       "0xB8008E64"
#define  DC1_MC_DUMMY_WDG_RST_FW1_reg                                            0xB8008E64
#define  DC1_MC_DUMMY_WDG_RST_FW1_inst_addr                                      "0x002B"
#define  set_DC1_MC_DUMMY_WDG_RST_FW1_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW1_reg)=data)
#define  get_DC1_MC_DUMMY_WDG_RST_FW1_reg                                        (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW1_reg))
#define  DC1_MC_DUMMY_WDG_RST_FW1_dummy_wdg_rst_fw1_shift                        (0)
#define  DC1_MC_DUMMY_WDG_RST_FW1_dummy_wdg_rst_fw1_mask                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_WDG_RST_FW1_dummy_wdg_rst_fw1(data)                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_WDG_RST_FW1_get_dummy_wdg_rst_fw1(data)                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_WDG_RST_FW2                                               0x18008E68
#define  DC1_MC_DUMMY_WDG_RST_FW2_reg_addr                                       "0xB8008E68"
#define  DC1_MC_DUMMY_WDG_RST_FW2_reg                                            0xB8008E68
#define  DC1_MC_DUMMY_WDG_RST_FW2_inst_addr                                      "0x002C"
#define  set_DC1_MC_DUMMY_WDG_RST_FW2_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW2_reg)=data)
#define  get_DC1_MC_DUMMY_WDG_RST_FW2_reg                                        (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW2_reg))
#define  DC1_MC_DUMMY_WDG_RST_FW2_dummy_wdg_rst_fw2_shift                        (0)
#define  DC1_MC_DUMMY_WDG_RST_FW2_dummy_wdg_rst_fw2_mask                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_WDG_RST_FW2_dummy_wdg_rst_fw2(data)                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_WDG_RST_FW2_get_dummy_wdg_rst_fw2(data)                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_WDG_RST_FW3                                               0x18008E6C
#define  DC1_MC_DUMMY_WDG_RST_FW3_reg_addr                                       "0xB8008E6C"
#define  DC1_MC_DUMMY_WDG_RST_FW3_reg                                            0xB8008E6C
#define  DC1_MC_DUMMY_WDG_RST_FW3_inst_addr                                      "0x002D"
#define  set_DC1_MC_DUMMY_WDG_RST_FW3_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW3_reg)=data)
#define  get_DC1_MC_DUMMY_WDG_RST_FW3_reg                                        (*((volatile unsigned int*)DC1_MC_DUMMY_WDG_RST_FW3_reg))
#define  DC1_MC_DUMMY_WDG_RST_FW3_dummy_wdg_rst_fw3_shift                        (0)
#define  DC1_MC_DUMMY_WDG_RST_FW3_dummy_wdg_rst_fw3_mask                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_WDG_RST_FW3_dummy_wdg_rst_fw3(data)                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_WDG_RST_FW3_get_dummy_wdg_rst_fw3(data)                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW0                                                       0x18008E80
#define  DC1_MC_DUMMY_FW0_reg_addr                                               "0xB8008E80"
#define  DC1_MC_DUMMY_FW0_reg                                                    0xB8008E80
#define  DC1_MC_DUMMY_FW0_inst_addr                                              "0x002E"
#define  set_DC1_MC_DUMMY_FW0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW0_reg)=data)
#define  get_DC1_MC_DUMMY_FW0_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW0_reg))
#define  DC1_MC_DUMMY_FW0_dummy_fw0_shift                                        (0)
#define  DC1_MC_DUMMY_FW0_dummy_fw0_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW0_dummy_fw0(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW0_get_dummy_fw0(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW1                                                       0x18008E84
#define  DC1_MC_DUMMY_FW1_reg_addr                                               "0xB8008E84"
#define  DC1_MC_DUMMY_FW1_reg                                                    0xB8008E84
#define  DC1_MC_DUMMY_FW1_inst_addr                                              "0x002F"
#define  set_DC1_MC_DUMMY_FW1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW1_reg)=data)
#define  get_DC1_MC_DUMMY_FW1_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW1_reg))
#define  DC1_MC_DUMMY_FW1_dummy_fw1_shift                                        (0)
#define  DC1_MC_DUMMY_FW1_dummy_fw1_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW1_dummy_fw1(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW1_get_dummy_fw1(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW2                                                       0x18008E88
#define  DC1_MC_DUMMY_FW2_reg_addr                                               "0xB8008E88"
#define  DC1_MC_DUMMY_FW2_reg                                                    0xB8008E88
#define  DC1_MC_DUMMY_FW2_inst_addr                                              "0x0030"
#define  set_DC1_MC_DUMMY_FW2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW2_reg)=data)
#define  get_DC1_MC_DUMMY_FW2_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW2_reg))
#define  DC1_MC_DUMMY_FW2_dummy_fw2_shift                                        (0)
#define  DC1_MC_DUMMY_FW2_dummy_fw2_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW2_dummy_fw2(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW2_get_dummy_fw2(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW3                                                       0x18008E8C
#define  DC1_MC_DUMMY_FW3_reg_addr                                               "0xB8008E8C"
#define  DC1_MC_DUMMY_FW3_reg                                                    0xB8008E8C
#define  DC1_MC_DUMMY_FW3_inst_addr                                              "0x0031"
#define  set_DC1_MC_DUMMY_FW3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW3_reg)=data)
#define  get_DC1_MC_DUMMY_FW3_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW3_reg))
#define  DC1_MC_DUMMY_FW3_dummy_fw3_shift                                        (0)
#define  DC1_MC_DUMMY_FW3_dummy_fw3_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW3_dummy_fw3(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW3_get_dummy_fw3(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW4                                                       0x18008E90
#define  DC1_MC_DUMMY_FW4_reg_addr                                               "0xB8008E90"
#define  DC1_MC_DUMMY_FW4_reg                                                    0xB8008E90
#define  DC1_MC_DUMMY_FW4_inst_addr                                              "0x0032"
#define  set_DC1_MC_DUMMY_FW4_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW4_reg)=data)
#define  get_DC1_MC_DUMMY_FW4_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW4_reg))
#define  DC1_MC_DUMMY_FW4_dummy_fw4_shift                                        (0)
#define  DC1_MC_DUMMY_FW4_dummy_fw4_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW4_dummy_fw4(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW4_get_dummy_fw4(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW5                                                       0x18008E94
#define  DC1_MC_DUMMY_FW5_reg_addr                                               "0xB8008E94"
#define  DC1_MC_DUMMY_FW5_reg                                                    0xB8008E94
#define  DC1_MC_DUMMY_FW5_inst_addr                                              "0x0033"
#define  set_DC1_MC_DUMMY_FW5_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW5_reg)=data)
#define  get_DC1_MC_DUMMY_FW5_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW5_reg))
#define  DC1_MC_DUMMY_FW5_dummy_fw5_shift                                        (0)
#define  DC1_MC_DUMMY_FW5_dummy_fw5_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW5_dummy_fw5(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW5_get_dummy_fw5(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW6                                                       0x18008E98
#define  DC1_MC_DUMMY_FW6_reg_addr                                               "0xB8008E98"
#define  DC1_MC_DUMMY_FW6_reg                                                    0xB8008E98
#define  DC1_MC_DUMMY_FW6_inst_addr                                              "0x0034"
#define  set_DC1_MC_DUMMY_FW6_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW6_reg)=data)
#define  get_DC1_MC_DUMMY_FW6_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW6_reg))
#define  DC1_MC_DUMMY_FW6_dummy_fw6_shift                                        (0)
#define  DC1_MC_DUMMY_FW6_dummy_fw6_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW6_dummy_fw6(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW6_get_dummy_fw6(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW7                                                       0x18008E9C
#define  DC1_MC_DUMMY_FW7_reg_addr                                               "0xB8008E9C"
#define  DC1_MC_DUMMY_FW7_reg                                                    0xB8008E9C
#define  DC1_MC_DUMMY_FW7_inst_addr                                              "0x0035"
#define  set_DC1_MC_DUMMY_FW7_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW7_reg)=data)
#define  get_DC1_MC_DUMMY_FW7_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW7_reg))
#define  DC1_MC_DUMMY_FW7_dummy_fw7_shift                                        (0)
#define  DC1_MC_DUMMY_FW7_dummy_fw7_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW7_dummy_fw7(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW7_get_dummy_fw7(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW8                                                       0x18008EA0
#define  DC1_MC_DUMMY_FW8_reg_addr                                               "0xB8008EA0"
#define  DC1_MC_DUMMY_FW8_reg                                                    0xB8008EA0
#define  DC1_MC_DUMMY_FW8_inst_addr                                              "0x0036"
#define  set_DC1_MC_DUMMY_FW8_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW8_reg)=data)
#define  get_DC1_MC_DUMMY_FW8_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW8_reg))
#define  DC1_MC_DUMMY_FW8_dummy_fw8_shift                                        (0)
#define  DC1_MC_DUMMY_FW8_dummy_fw8_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW8_dummy_fw8(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW8_get_dummy_fw8(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW9                                                       0x18008EA4
#define  DC1_MC_DUMMY_FW9_reg_addr                                               "0xB8008EA4"
#define  DC1_MC_DUMMY_FW9_reg                                                    0xB8008EA4
#define  DC1_MC_DUMMY_FW9_inst_addr                                              "0x0037"
#define  set_DC1_MC_DUMMY_FW9_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DUMMY_FW9_reg)=data)
#define  get_DC1_MC_DUMMY_FW9_reg                                                (*((volatile unsigned int*)DC1_MC_DUMMY_FW9_reg))
#define  DC1_MC_DUMMY_FW9_dummy_fw9_shift                                        (0)
#define  DC1_MC_DUMMY_FW9_dummy_fw9_mask                                         (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW9_dummy_fw9(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW9_get_dummy_fw9(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW10                                                      0x18008EA8
#define  DC1_MC_DUMMY_FW10_reg_addr                                              "0xB8008EA8"
#define  DC1_MC_DUMMY_FW10_reg                                                   0xB8008EA8
#define  DC1_MC_DUMMY_FW10_inst_addr                                             "0x0038"
#define  set_DC1_MC_DUMMY_FW10_reg(data)                                         (*((volatile unsigned int*)DC1_MC_DUMMY_FW10_reg)=data)
#define  get_DC1_MC_DUMMY_FW10_reg                                               (*((volatile unsigned int*)DC1_MC_DUMMY_FW10_reg))
#define  DC1_MC_DUMMY_FW10_dummy_fw10_shift                                      (0)
#define  DC1_MC_DUMMY_FW10_dummy_fw10_mask                                       (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW10_dummy_fw10(data)                                      (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW10_get_dummy_fw10(data)                                  (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW11                                                      0x18008EAC
#define  DC1_MC_DUMMY_FW11_reg_addr                                              "0xB8008EAC"
#define  DC1_MC_DUMMY_FW11_reg                                                   0xB8008EAC
#define  DC1_MC_DUMMY_FW11_inst_addr                                             "0x0039"
#define  set_DC1_MC_DUMMY_FW11_reg(data)                                         (*((volatile unsigned int*)DC1_MC_DUMMY_FW11_reg)=data)
#define  get_DC1_MC_DUMMY_FW11_reg                                               (*((volatile unsigned int*)DC1_MC_DUMMY_FW11_reg))
#define  DC1_MC_DUMMY_FW11_dummy_fw11_shift                                      (0)
#define  DC1_MC_DUMMY_FW11_dummy_fw11_mask                                       (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW11_dummy_fw11(data)                                      (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW11_get_dummy_fw11(data)                                  (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW12                                                      0x18008EB0
#define  DC1_MC_DUMMY_FW12_reg_addr                                              "0xB8008EB0"
#define  DC1_MC_DUMMY_FW12_reg                                                   0xB8008EB0
#define  DC1_MC_DUMMY_FW12_inst_addr                                             "0x003A"
#define  set_DC1_MC_DUMMY_FW12_reg(data)                                         (*((volatile unsigned int*)DC1_MC_DUMMY_FW12_reg)=data)
#define  get_DC1_MC_DUMMY_FW12_reg                                               (*((volatile unsigned int*)DC1_MC_DUMMY_FW12_reg))
#define  DC1_MC_DUMMY_FW12_dummy_fw12_shift                                      (0)
#define  DC1_MC_DUMMY_FW12_dummy_fw12_mask                                       (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW12_dummy_fw12(data)                                      (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW12_get_dummy_fw12(data)                                  (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW13                                                      0x18008EB4
#define  DC1_MC_DUMMY_FW13_reg_addr                                              "0xB8008EB4"
#define  DC1_MC_DUMMY_FW13_reg                                                   0xB8008EB4
#define  DC1_MC_DUMMY_FW13_inst_addr                                             "0x003B"
#define  set_DC1_MC_DUMMY_FW13_reg(data)                                         (*((volatile unsigned int*)DC1_MC_DUMMY_FW13_reg)=data)
#define  get_DC1_MC_DUMMY_FW13_reg                                               (*((volatile unsigned int*)DC1_MC_DUMMY_FW13_reg))
#define  DC1_MC_DUMMY_FW13_dummy_fw13_shift                                      (0)
#define  DC1_MC_DUMMY_FW13_dummy_fw13_mask                                       (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW13_dummy_fw13(data)                                      (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW13_get_dummy_fw13(data)                                  (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW14                                                      0x18008EB8
#define  DC1_MC_DUMMY_FW14_reg_addr                                              "0xB8008EB8"
#define  DC1_MC_DUMMY_FW14_reg                                                   0xB8008EB8
#define  DC1_MC_DUMMY_FW14_inst_addr                                             "0x003C"
#define  set_DC1_MC_DUMMY_FW14_reg(data)                                         (*((volatile unsigned int*)DC1_MC_DUMMY_FW14_reg)=data)
#define  get_DC1_MC_DUMMY_FW14_reg                                               (*((volatile unsigned int*)DC1_MC_DUMMY_FW14_reg))
#define  DC1_MC_DUMMY_FW14_dummy_fw14_shift                                      (0)
#define  DC1_MC_DUMMY_FW14_dummy_fw14_mask                                       (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW14_dummy_fw14(data)                                      (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW14_get_dummy_fw14(data)                                  (0xFFFFFFFF&(data))

#define  DC1_MC_DUMMY_FW15                                                      0x18008EBC
#define  DC1_MC_DUMMY_FW15_reg_addr                                              "0xB8008EBC"
#define  DC1_MC_DUMMY_FW15_reg                                                   0xB8008EBC
#define  DC1_MC_DUMMY_FW15_inst_addr                                             "0x003D"
#define  set_DC1_MC_DUMMY_FW15_reg(data)                                         (*((volatile unsigned int*)DC1_MC_DUMMY_FW15_reg)=data)
#define  get_DC1_MC_DUMMY_FW15_reg                                               (*((volatile unsigned int*)DC1_MC_DUMMY_FW15_reg))
#define  DC1_MC_DUMMY_FW15_dummy_fw15_shift                                      (0)
#define  DC1_MC_DUMMY_FW15_dummy_fw15_mask                                       (0xFFFFFFFF)
#define  DC1_MC_DUMMY_FW15_dummy_fw15(data)                                      (0xFFFFFFFF&(data))
#define  DC1_MC_DUMMY_FW15_get_dummy_fw15(data)                                  (0xFFFFFFFF&(data))

#define  DC1_MC_cs_ctrl                                                         0x18008EF8
#define  DC1_MC_cs_ctrl_reg_addr                                                 "0xB8008EF8"
#define  DC1_MC_cs_ctrl_reg                                                      0xB8008EF8
#define  DC1_MC_cs_ctrl_inst_addr                                                "0x003E"
#define  set_DC1_MC_cs_ctrl_reg(data)                                            (*((volatile unsigned int*)DC1_MC_cs_ctrl_reg)=data)
#define  get_DC1_MC_cs_ctrl_reg                                                  (*((volatile unsigned int*)DC1_MC_cs_ctrl_reg))
#define  DC1_MC_cs_ctrl_swap_2ddr_addr_shift                                     (9)
#define  DC1_MC_cs_ctrl_ddrx2_csx1_mode_shift                                    (8)
#define  DC1_MC_cs_ctrl_cs_mask_mrs_sel_shift                                    (4)
#define  DC1_MC_cs_ctrl_cs_mask_shift                                            (2)
#define  DC1_MC_cs_ctrl_cs1_mask_shift                                           (1)
#define  DC1_MC_cs_ctrl_cs_swap_shift                                            (0)
#define  DC1_MC_cs_ctrl_swap_2ddr_addr_mask                                      (0x00000200)
#define  DC1_MC_cs_ctrl_ddrx2_csx1_mode_mask                                     (0x00000100)
#define  DC1_MC_cs_ctrl_cs_mask_mrs_sel_mask                                     (0x00000030)
#define  DC1_MC_cs_ctrl_cs_mask_mask                                             (0x00000004)
#define  DC1_MC_cs_ctrl_cs1_mask_mask                                            (0x00000002)
#define  DC1_MC_cs_ctrl_cs_swap_mask                                             (0x00000001)
#define  DC1_MC_cs_ctrl_swap_2ddr_addr(data)                                     (0x00000200&((data)<<9))
#define  DC1_MC_cs_ctrl_ddrx2_csx1_mode(data)                                    (0x00000100&((data)<<8))
#define  DC1_MC_cs_ctrl_cs_mask_mrs_sel(data)                                    (0x00000030&((data)<<4))
#define  DC1_MC_cs_ctrl_cs_mask(data)                                            (0x00000004&((data)<<2))
#define  DC1_MC_cs_ctrl_cs1_mask(data)                                           (0x00000002&((data)<<1))
#define  DC1_MC_cs_ctrl_cs_swap(data)                                            (0x00000001&(data))
#define  DC1_MC_cs_ctrl_get_swap_2ddr_addr(data)                                 ((0x00000200&(data))>>9)
#define  DC1_MC_cs_ctrl_get_ddrx2_csx1_mode(data)                                ((0x00000100&(data))>>8)
#define  DC1_MC_cs_ctrl_get_cs_mask_mrs_sel(data)                                ((0x00000030&(data))>>4)
#define  DC1_MC_cs_ctrl_get_cs_mask(data)                                        ((0x00000004&(data))>>2)
#define  DC1_MC_cs_ctrl_get_cs1_mask(data)                                       ((0x00000002&(data))>>1)
#define  DC1_MC_cs_ctrl_get_cs_swap(data)                                        (0x00000001&(data))

#define  DC1_MC_CMD_DLY_1T                                                      0x18008F00
#define  DC1_MC_CMD_DLY_1T_reg_addr                                              "0xB8008F00"
#define  DC1_MC_CMD_DLY_1T_reg                                                   0xB8008F00
#define  DC1_MC_CMD_DLY_1T_inst_addr                                             "0x003F"
#define  set_DC1_MC_CMD_DLY_1T_reg(data)                                         (*((volatile unsigned int*)DC1_MC_CMD_DLY_1T_reg)=data)
#define  get_DC1_MC_CMD_DLY_1T_reg                                               (*((volatile unsigned int*)DC1_MC_CMD_DLY_1T_reg))
#define  DC1_MC_CMD_DLY_1T_cmd_addr_2t_en_shift                                  (1)
#define  DC1_MC_CMD_DLY_1T_cmd_addr_2t_en_mask                                   (0x00000002)
#define  DC1_MC_CMD_DLY_1T_cmd_addr_2t_en(data)                                  (0x00000002&((data)<<1))
#define  DC1_MC_CMD_DLY_1T_get_cmd_addr_2t_en(data)                              ((0x00000002&(data))>>1)

#define  DC1_MC_GCK_CTRL                                                        0x18008F38
#define  DC1_MC_GCK_CTRL_reg_addr                                                "0xB8008F38"
#define  DC1_MC_GCK_CTRL_reg                                                     0xB8008F38
#define  DC1_MC_GCK_CTRL_inst_addr                                               "0x0040"
#define  set_DC1_MC_GCK_CTRL_reg(data)                                           (*((volatile unsigned int*)DC1_MC_GCK_CTRL_reg)=data)
#define  get_DC1_MC_GCK_CTRL_reg                                                 (*((volatile unsigned int*)DC1_MC_GCK_CTRL_reg))
#define  DC1_MC_GCK_CTRL_gck_ext_cyc_shift                                       (8)
#define  DC1_MC_GCK_CTRL_par_gck_en_shift                                        (2)
#define  DC1_MC_GCK_CTRL_fsm_gck_en_shift                                        (1)
#define  DC1_MC_GCK_CTRL_ioblk_gck_en_shift                                      (0)
#define  DC1_MC_GCK_CTRL_gck_ext_cyc_mask                                        (0x00003F00)
#define  DC1_MC_GCK_CTRL_par_gck_en_mask                                         (0x00000004)
#define  DC1_MC_GCK_CTRL_fsm_gck_en_mask                                         (0x00000002)
#define  DC1_MC_GCK_CTRL_ioblk_gck_en_mask                                       (0x00000001)
#define  DC1_MC_GCK_CTRL_gck_ext_cyc(data)                                       (0x00003F00&((data)<<8))
#define  DC1_MC_GCK_CTRL_par_gck_en(data)                                        (0x00000004&((data)<<2))
#define  DC1_MC_GCK_CTRL_fsm_gck_en(data)                                        (0x00000002&((data)<<1))
#define  DC1_MC_GCK_CTRL_ioblk_gck_en(data)                                      (0x00000001&(data))
#define  DC1_MC_GCK_CTRL_get_gck_ext_cyc(data)                                   ((0x00003F00&(data))>>8)
#define  DC1_MC_GCK_CTRL_get_par_gck_en(data)                                    ((0x00000004&(data))>>2)
#define  DC1_MC_GCK_CTRL_get_fsm_gck_en(data)                                    ((0x00000002&(data))>>1)
#define  DC1_MC_GCK_CTRL_get_ioblk_gck_en(data)                                  (0x00000001&(data))

#define  DC1_MC_SCRAMBLE_CTRL                                                   0x18008E74
#define  DC1_MC_SCRAMBLE_CTRL_reg_addr                                           "0xB8008E74"
#define  DC1_MC_SCRAMBLE_CTRL_reg                                                0xB8008E74
#define  DC1_MC_SCRAMBLE_CTRL_inst_addr                                          "0x0041"
#define  set_DC1_MC_SCRAMBLE_CTRL_reg(data)                                      (*((volatile unsigned int*)DC1_MC_SCRAMBLE_CTRL_reg)=data)
#define  get_DC1_MC_SCRAMBLE_CTRL_reg                                            (*((volatile unsigned int*)DC1_MC_SCRAMBLE_CTRL_reg))
#define  DC1_MC_SCRAMBLE_CTRL_dummy_sc_shift                                     (1)
#define  DC1_MC_SCRAMBLE_CTRL_emi_scramble_en_shift                              (0)
#define  DC1_MC_SCRAMBLE_CTRL_dummy_sc_mask                                      (0xFFFFFFFE)
#define  DC1_MC_SCRAMBLE_CTRL_emi_scramble_en_mask                               (0x00000001)
#define  DC1_MC_SCRAMBLE_CTRL_dummy_sc(data)                                     (0xFFFFFFFE&((data)<<1))
#define  DC1_MC_SCRAMBLE_CTRL_emi_scramble_en(data)                              (0x00000001&(data))
#define  DC1_MC_SCRAMBLE_CTRL_get_dummy_sc(data)                                 ((0xFFFFFFFE&(data))>>1)
#define  DC1_MC_SCRAMBLE_CTRL_get_emi_scramble_en(data)                          (0x00000001&(data))

#define  DC1_MC_SCPU_CTL                                                        0x18008F04
#define  DC1_MC_SCPU_CTL_reg_addr                                                "0xB8008F04"
#define  DC1_MC_SCPU_CTL_reg                                                     0xB8008F04
#define  DC1_MC_SCPU_CTL_inst_addr                                               "0x0042"
#define  set_DC1_MC_SCPU_CTL_reg(data)                                           (*((volatile unsigned int*)DC1_MC_SCPU_CTL_reg)=data)
#define  get_DC1_MC_SCPU_CTL_reg                                                 (*((volatile unsigned int*)DC1_MC_SCPU_CTL_reg))
#define  DC1_MC_SCPU_CTL_scpu_option_shift                                       (28)
#define  DC1_MC_SCPU_CTL_merge_bl_limt_shift                                     (23)
#define  DC1_MC_SCPU_CTL_merge_bl_shift                                          (16)
#define  DC1_MC_SCPU_CTL_scpu_wfifo_thr_shift                                    (8)
#define  DC1_MC_SCPU_CTL_scpu_qfifo_thr_shift                                    (0)
#define  DC1_MC_SCPU_CTL_scpu_option_mask                                        (0xF0000000)
#define  DC1_MC_SCPU_CTL_merge_bl_limt_mask                                      (0x00800000)
#define  DC1_MC_SCPU_CTL_merge_bl_mask                                           (0x007F0000)
#define  DC1_MC_SCPU_CTL_scpu_wfifo_thr_mask                                     (0x00000F00)
#define  DC1_MC_SCPU_CTL_scpu_qfifo_thr_mask                                     (0x0000000F)
#define  DC1_MC_SCPU_CTL_scpu_option(data)                                       (0xF0000000&((data)<<28))
#define  DC1_MC_SCPU_CTL_merge_bl_limt(data)                                     (0x00800000&((data)<<23))
#define  DC1_MC_SCPU_CTL_merge_bl(data)                                          (0x007F0000&((data)<<16))
#define  DC1_MC_SCPU_CTL_scpu_wfifo_thr(data)                                    (0x00000F00&((data)<<8))
#define  DC1_MC_SCPU_CTL_scpu_qfifo_thr(data)                                    (0x0000000F&(data))
#define  DC1_MC_SCPU_CTL_get_scpu_option(data)                                   ((0xF0000000&(data))>>28)
#define  DC1_MC_SCPU_CTL_get_merge_bl_limt(data)                                 ((0x00800000&(data))>>23)
#define  DC1_MC_SCPU_CTL_get_merge_bl(data)                                      ((0x007F0000&(data))>>16)
#define  DC1_MC_SCPU_CTL_get_scpu_wfifo_thr(data)                                ((0x00000F00&(data))>>8)
#define  DC1_MC_SCPU_CTL_get_scpu_qfifo_thr(data)                                (0x0000000F&(data))

#define  DC1_MC_SCPU_debug_0                                                    0x18008F08
#define  DC1_MC_SCPU_debug_0_reg_addr                                            "0xB8008F08"
#define  DC1_MC_SCPU_debug_0_reg                                                 0xB8008F08
#define  DC1_MC_SCPU_debug_0_inst_addr                                           "0x0043"
#define  set_DC1_MC_SCPU_debug_0_reg(data)                                       (*((volatile unsigned int*)DC1_MC_SCPU_debug_0_reg)=data)
#define  get_DC1_MC_SCPU_debug_0_reg                                             (*((volatile unsigned int*)DC1_MC_SCPU_debug_0_reg))
#define  DC1_MC_SCPU_debug_0_cmd_merge_en_shift                                  (31)
#define  DC1_MC_SCPU_debug_0_meg_buf_thr_sel_shift                               (30)
#define  DC1_MC_SCPU_debug_0_meg_cmd_chg_rw_shift                                (29)
#define  DC1_MC_SCPU_debug_0_meg_cmd_en_shift                                    (28)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_total_dly_shift                            (24)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_dly_shift                                  (20)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_total_dly_shift                            (16)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_dly_shift                                  (12)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_num_shift                                  (10)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_num_shift                                  (8)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_sel_shift                              (7)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_3_shift                                (6)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_2_shift                                (5)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_1_shift                                (4)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_sel_shift                              (3)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_3_shift                                (2)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_2_shift                                (1)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_1_shift                                (0)
#define  DC1_MC_SCPU_debug_0_cmd_merge_en_mask                                   (0x80000000)
#define  DC1_MC_SCPU_debug_0_meg_buf_thr_sel_mask                                (0x40000000)
#define  DC1_MC_SCPU_debug_0_meg_cmd_chg_rw_mask                                 (0x20000000)
#define  DC1_MC_SCPU_debug_0_meg_cmd_en_mask                                     (0x10000000)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_total_dly_mask                             (0x0F000000)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_dly_mask                                   (0x00F00000)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_total_dly_mask                             (0x000F0000)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_dly_mask                                   (0x0000F000)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_num_mask                                   (0x00000C00)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_num_mask                                   (0x00000300)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_sel_mask                               (0x00000080)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_3_mask                                 (0x00000040)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_2_mask                                 (0x00000020)
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_1_mask                                 (0x00000010)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_sel_mask                               (0x00000008)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_3_mask                                 (0x00000004)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_2_mask                                 (0x00000002)
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_1_mask                                 (0x00000001)
#define  DC1_MC_SCPU_debug_0_cmd_merge_en(data)                                  (0x80000000&((data)<<31))
#define  DC1_MC_SCPU_debug_0_meg_buf_thr_sel(data)                               (0x40000000&((data)<<30))
#define  DC1_MC_SCPU_debug_0_meg_cmd_chg_rw(data)                                (0x20000000&((data)<<29))
#define  DC1_MC_SCPU_debug_0_meg_cmd_en(data)                                    (0x10000000&((data)<<28))
#define  DC1_MC_SCPU_debug_0_meg_rcmd_total_dly(data)                            (0x0F000000&((data)<<24))
#define  DC1_MC_SCPU_debug_0_meg_rcmd_dly(data)                                  (0x00F00000&((data)<<20))
#define  DC1_MC_SCPU_debug_0_meg_wcmd_total_dly(data)                            (0x000F0000&((data)<<16))
#define  DC1_MC_SCPU_debug_0_meg_wcmd_dly(data)                                  (0x0000F000&((data)<<12))
#define  DC1_MC_SCPU_debug_0_meg_rcmd_num(data)                                  (0x00000C00&((data)<<10))
#define  DC1_MC_SCPU_debug_0_meg_wcmd_num(data)                                  (0x00000300&((data)<<8))
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_sel(data)                              (0x00000080&((data)<<7))
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_3(data)                                (0x00000040&((data)<<6))
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_2(data)                                (0x00000020&((data)<<5))
#define  DC1_MC_SCPU_debug_0_meg_rcmd_cod_1(data)                                (0x00000010&((data)<<4))
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_sel(data)                              (0x00000008&((data)<<3))
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_3(data)                                (0x00000004&((data)<<2))
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_2(data)                                (0x00000002&((data)<<1))
#define  DC1_MC_SCPU_debug_0_meg_wcmd_cod_1(data)                                (0x00000001&(data))
#define  DC1_MC_SCPU_debug_0_get_cmd_merge_en(data)                              ((0x80000000&(data))>>31)
#define  DC1_MC_SCPU_debug_0_get_meg_buf_thr_sel(data)                           ((0x40000000&(data))>>30)
#define  DC1_MC_SCPU_debug_0_get_meg_cmd_chg_rw(data)                            ((0x20000000&(data))>>29)
#define  DC1_MC_SCPU_debug_0_get_meg_cmd_en(data)                                ((0x10000000&(data))>>28)
#define  DC1_MC_SCPU_debug_0_get_meg_rcmd_total_dly(data)                        ((0x0F000000&(data))>>24)
#define  DC1_MC_SCPU_debug_0_get_meg_rcmd_dly(data)                              ((0x00F00000&(data))>>20)
#define  DC1_MC_SCPU_debug_0_get_meg_wcmd_total_dly(data)                        ((0x000F0000&(data))>>16)
#define  DC1_MC_SCPU_debug_0_get_meg_wcmd_dly(data)                              ((0x0000F000&(data))>>12)
#define  DC1_MC_SCPU_debug_0_get_meg_rcmd_num(data)                              ((0x00000C00&(data))>>10)
#define  DC1_MC_SCPU_debug_0_get_meg_wcmd_num(data)                              ((0x00000300&(data))>>8)
#define  DC1_MC_SCPU_debug_0_get_meg_rcmd_cod_sel(data)                          ((0x00000080&(data))>>7)
#define  DC1_MC_SCPU_debug_0_get_meg_rcmd_cod_3(data)                            ((0x00000040&(data))>>6)
#define  DC1_MC_SCPU_debug_0_get_meg_rcmd_cod_2(data)                            ((0x00000020&(data))>>5)
#define  DC1_MC_SCPU_debug_0_get_meg_rcmd_cod_1(data)                            ((0x00000010&(data))>>4)
#define  DC1_MC_SCPU_debug_0_get_meg_wcmd_cod_sel(data)                          ((0x00000008&(data))>>3)
#define  DC1_MC_SCPU_debug_0_get_meg_wcmd_cod_3(data)                            ((0x00000004&(data))>>2)
#define  DC1_MC_SCPU_debug_0_get_meg_wcmd_cod_2(data)                            ((0x00000002&(data))>>1)
#define  DC1_MC_SCPU_debug_0_get_meg_wcmd_cod_1(data)                            (0x00000001&(data))

#define  DC1_MC_SCPU_debug_1                                                    0x18008F0C
#define  DC1_MC_SCPU_debug_1_reg_addr                                            "0xB8008F0C"
#define  DC1_MC_SCPU_debug_1_reg                                                 0xB8008F0C
#define  DC1_MC_SCPU_debug_1_inst_addr                                           "0x0044"
#define  set_DC1_MC_SCPU_debug_1_reg(data)                                       (*((volatile unsigned int*)DC1_MC_SCPU_debug_1_reg)=data)
#define  get_DC1_MC_SCPU_debug_1_reg                                             (*((volatile unsigned int*)DC1_MC_SCPU_debug_1_reg))
#define  DC1_MC_SCPU_debug_1_scpu_err_flag_clr_shift                             (28)
#define  DC1_MC_SCPU_debug_1_scpu_exp_debug_sel_shift                            (24)
#define  DC1_MC_SCPU_debug_1_scpu_exp_debug_shift                                (0)
#define  DC1_MC_SCPU_debug_1_scpu_err_flag_clr_mask                              (0x10000000)
#define  DC1_MC_SCPU_debug_1_scpu_exp_debug_sel_mask                             (0x0F000000)
#define  DC1_MC_SCPU_debug_1_scpu_exp_debug_mask                                 (0x00FFFFFF)
#define  DC1_MC_SCPU_debug_1_scpu_err_flag_clr(data)                             (0x10000000&((data)<<28))
#define  DC1_MC_SCPU_debug_1_scpu_exp_debug_sel(data)                            (0x0F000000&((data)<<24))
#define  DC1_MC_SCPU_debug_1_scpu_exp_debug(data)                                (0x00FFFFFF&(data))
#define  DC1_MC_SCPU_debug_1_get_scpu_err_flag_clr(data)                         ((0x10000000&(data))>>28)
#define  DC1_MC_SCPU_debug_1_get_scpu_exp_debug_sel(data)                        ((0x0F000000&(data))>>24)
#define  DC1_MC_SCPU_debug_1_get_scpu_exp_debug(data)                            (0x00FFFFFF&(data))

#define  DC1_MC_SCPU_sf_0                                                       0x18008F10
#define  DC1_MC_SCPU_sf_0_reg_addr                                               "0xB8008F10"
#define  DC1_MC_SCPU_sf_0_reg                                                    0xB8008F10
#define  DC1_MC_SCPU_sf_0_inst_addr                                              "0x0045"
#define  set_DC1_MC_SCPU_sf_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_SCPU_sf_0_reg)=data)
#define  get_DC1_MC_SCPU_sf_0_reg                                                (*((volatile unsigned int*)DC1_MC_SCPU_sf_0_reg))
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_debug_bit_sel_shift                         (24)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_gated_shift                                 (4)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_mode_shift                                  (3)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_start_shift                                 (2)
#define  DC1_MC_SCPU_sf_0_scpu_sf_tx_mode_shift                                  (1)
#define  DC1_MC_SCPU_sf_0_scpu_sf_tx_start_shift                                 (0)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_debug_bit_sel_mask                          (0xFF000000)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_gated_mask                                  (0x00000010)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_mode_mask                                   (0x00000008)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_start_mask                                  (0x00000004)
#define  DC1_MC_SCPU_sf_0_scpu_sf_tx_mode_mask                                   (0x00000002)
#define  DC1_MC_SCPU_sf_0_scpu_sf_tx_start_mask                                  (0x00000001)
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_debug_bit_sel(data)                         (0xFF000000&((data)<<24))
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_gated(data)                                 (0x00000010&((data)<<4))
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_mode(data)                                  (0x00000008&((data)<<3))
#define  DC1_MC_SCPU_sf_0_scpu_sf_rx_start(data)                                 (0x00000004&((data)<<2))
#define  DC1_MC_SCPU_sf_0_scpu_sf_tx_mode(data)                                  (0x00000002&((data)<<1))
#define  DC1_MC_SCPU_sf_0_scpu_sf_tx_start(data)                                 (0x00000001&(data))
#define  DC1_MC_SCPU_sf_0_get_scpu_sf_rx_debug_bit_sel(data)                     ((0xFF000000&(data))>>24)
#define  DC1_MC_SCPU_sf_0_get_scpu_sf_rx_gated(data)                             ((0x00000010&(data))>>4)
#define  DC1_MC_SCPU_sf_0_get_scpu_sf_rx_mode(data)                              ((0x00000008&(data))>>3)
#define  DC1_MC_SCPU_sf_0_get_scpu_sf_rx_start(data)                             ((0x00000004&(data))>>2)
#define  DC1_MC_SCPU_sf_0_get_scpu_sf_tx_mode(data)                              ((0x00000002&(data))>>1)
#define  DC1_MC_SCPU_sf_0_get_scpu_sf_tx_start(data)                             (0x00000001&(data))

#define  DC1_MC_SCPU_sf_1                                                       0x18008F14
#define  DC1_MC_SCPU_sf_1_reg_addr                                               "0xB8008F14"
#define  DC1_MC_SCPU_sf_1_reg                                                    0xB8008F14
#define  DC1_MC_SCPU_sf_1_inst_addr                                              "0x0046"
#define  set_DC1_MC_SCPU_sf_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_SCPU_sf_1_reg)=data)
#define  get_DC1_MC_SCPU_sf_1_reg                                                (*((volatile unsigned int*)DC1_MC_SCPU_sf_1_reg))
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_fail_bit_status_ro_shift                    (3)
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_done_ro_shift                               (2)
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_err_ro_shift                                (1)
#define  DC1_MC_SCPU_sf_1_scpu_sf_tx_work_ro_shift                               (0)
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_fail_bit_status_ro_mask                     (0x00000008)
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_done_ro_mask                                (0x00000004)
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_err_ro_mask                                 (0x00000002)
#define  DC1_MC_SCPU_sf_1_scpu_sf_tx_work_ro_mask                                (0x00000001)
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_fail_bit_status_ro(data)                    (0x00000008&((data)<<3))
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_done_ro(data)                               (0x00000004&((data)<<2))
#define  DC1_MC_SCPU_sf_1_scpu_sf_rx_err_ro(data)                                (0x00000002&((data)<<1))
#define  DC1_MC_SCPU_sf_1_scpu_sf_tx_work_ro(data)                               (0x00000001&(data))
#define  DC1_MC_SCPU_sf_1_get_scpu_sf_rx_fail_bit_status_ro(data)                ((0x00000008&(data))>>3)
#define  DC1_MC_SCPU_sf_1_get_scpu_sf_rx_done_ro(data)                           ((0x00000004&(data))>>2)
#define  DC1_MC_SCPU_sf_1_get_scpu_sf_rx_err_ro(data)                            ((0x00000002&(data))>>1)
#define  DC1_MC_SCPU_sf_1_get_scpu_sf_tx_work_ro(data)                           (0x00000001&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT8                                                0x18008F20
#define  DC1_MC_DDR4_MPR_RD_DAT8_reg_addr                                        "0xB8008F20"
#define  DC1_MC_DDR4_MPR_RD_DAT8_reg                                             0xB8008F20
#define  DC1_MC_DDR4_MPR_RD_DAT8_inst_addr                                       "0x0047"
#define  set_DC1_MC_DDR4_MPR_RD_DAT8_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT8_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT8_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT8_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_35_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_34_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_33_shift                               (8)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_32_shift                               (0)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_35_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_34_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_33_mask                                (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_32_mask                                (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_35(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_34(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_33(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT8_mpr_data_32(data)                               (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT8_get_mpr_data_35(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT8_get_mpr_data_34(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT8_get_mpr_data_33(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT8_get_mpr_data_32(data)                           (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT9                                                0x18008F24
#define  DC1_MC_DDR4_MPR_RD_DAT9_reg_addr                                        "0xB8008F24"
#define  DC1_MC_DDR4_MPR_RD_DAT9_reg                                             0xB8008F24
#define  DC1_MC_DDR4_MPR_RD_DAT9_inst_addr                                       "0x0048"
#define  set_DC1_MC_DDR4_MPR_RD_DAT9_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT9_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT9_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT9_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_39_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_38_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_37_shift                               (8)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_36_shift                               (0)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_39_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_38_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_37_mask                                (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_36_mask                                (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_39(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_38(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_37(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT9_mpr_data_36(data)                               (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT9_get_mpr_data_39(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT9_get_mpr_data_38(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT9_get_mpr_data_37(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT9_get_mpr_data_36(data)                           (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT10                                               0x18008F28
#define  DC1_MC_DDR4_MPR_RD_DAT10_reg_addr                                       "0xB8008F28"
#define  DC1_MC_DDR4_MPR_RD_DAT10_reg                                            0xB8008F28
#define  DC1_MC_DDR4_MPR_RD_DAT10_inst_addr                                      "0x0049"
#define  set_DC1_MC_DDR4_MPR_RD_DAT10_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT10_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT10_reg                                        (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT10_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_43_shift                              (24)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_42_shift                              (16)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_41_shift                              (8)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_40_shift                              (0)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_43_mask                               (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_42_mask                               (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_41_mask                               (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_40_mask                               (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_43(data)                              (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_42(data)                              (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_41(data)                              (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT10_mpr_data_40(data)                              (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT10_get_mpr_data_43(data)                          ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT10_get_mpr_data_42(data)                          ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT10_get_mpr_data_41(data)                          ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT10_get_mpr_data_40(data)                          (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT11                                               0x18008F2C
#define  DC1_MC_DDR4_MPR_RD_DAT11_reg_addr                                       "0xB8008F2C"
#define  DC1_MC_DDR4_MPR_RD_DAT11_reg                                            0xB8008F2C
#define  DC1_MC_DDR4_MPR_RD_DAT11_inst_addr                                      "0x004A"
#define  set_DC1_MC_DDR4_MPR_RD_DAT11_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT11_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT11_reg                                        (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT11_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_47_shift                              (24)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_46_shift                              (16)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_45_shift                              (8)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_44_shift                              (0)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_47_mask                               (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_46_mask                               (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_45_mask                               (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_44_mask                               (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_47(data)                              (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_46(data)                              (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_45(data)                              (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT11_mpr_data_44(data)                              (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT11_get_mpr_data_47(data)                          ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT11_get_mpr_data_46(data)                          ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT11_get_mpr_data_45(data)                          ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT11_get_mpr_data_44(data)                          (0x000000FF&(data))

#define  DC1_MC_DC_PHY_bist_mode                                                0x18008FC0
#define  DC1_MC_DC_PHY_bist_mode_reg_addr                                        "0xB8008FC0"
#define  DC1_MC_DC_PHY_bist_mode_reg                                             0xB8008FC0
#define  DC1_MC_DC_PHY_bist_mode_inst_addr                                       "0x004B"
#define  set_DC1_MC_DC_PHY_bist_mode_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_mode_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_mode_reg                                         (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_mode_reg))
#define  DC1_MC_DC_PHY_bist_mode_mmu_bist_mode_shift                             (8)
#define  DC1_MC_DC_PHY_bist_mode_eff_bist_mode_shift                             (0)
#define  DC1_MC_DC_PHY_bist_mode_mmu_bist_mode_mask                              (0x00000100)
#define  DC1_MC_DC_PHY_bist_mode_eff_bist_mode_mask                              (0x00000001)
#define  DC1_MC_DC_PHY_bist_mode_mmu_bist_mode(data)                             (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_mode_eff_bist_mode(data)                             (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_mode_get_mmu_bist_mode(data)                         ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_mode_get_eff_bist_mode(data)                         (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_done                                                0x18008FC4
#define  DC1_MC_DC_PHY_bist_done_reg_addr                                        "0xB8008FC4"
#define  DC1_MC_DC_PHY_bist_done_reg                                             0xB8008FC4
#define  DC1_MC_DC_PHY_bist_done_inst_addr                                       "0x004C"
#define  set_DC1_MC_DC_PHY_bist_done_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_done_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_done_reg                                         (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_done_reg))
#define  DC1_MC_DC_PHY_bist_done_mmu_bist_done_shift                             (8)
#define  DC1_MC_DC_PHY_bist_done_eff_bist_done_shift                             (0)
#define  DC1_MC_DC_PHY_bist_done_mmu_bist_done_mask                              (0x00000100)
#define  DC1_MC_DC_PHY_bist_done_eff_bist_done_mask                              (0x00000001)
#define  DC1_MC_DC_PHY_bist_done_mmu_bist_done(data)                             (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_done_eff_bist_done(data)                             (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_done_get_mmu_bist_done(data)                         ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_done_get_eff_bist_done(data)                         (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_fail                                                0x18008FC8
#define  DC1_MC_DC_PHY_bist_fail_reg_addr                                        "0xB8008FC8"
#define  DC1_MC_DC_PHY_bist_fail_reg                                             0xB8008FC8
#define  DC1_MC_DC_PHY_bist_fail_inst_addr                                       "0x004D"
#define  set_DC1_MC_DC_PHY_bist_fail_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_fail_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_fail_reg                                         (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_fail_reg))
#define  DC1_MC_DC_PHY_bist_fail_mmu_bist_fail_0_shift                           (8)
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_all_shift                         (2)
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_1_shift                           (1)
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_0_shift                           (0)
#define  DC1_MC_DC_PHY_bist_fail_mmu_bist_fail_0_mask                            (0x00000100)
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_all_mask                          (0x00000004)
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_1_mask                            (0x00000002)
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_0_mask                            (0x00000001)
#define  DC1_MC_DC_PHY_bist_fail_mmu_bist_fail_0(data)                           (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_all(data)                         (0x00000004&((data)<<2))
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_1(data)                           (0x00000002&((data)<<1))
#define  DC1_MC_DC_PHY_bist_fail_eff_bist_fail_0(data)                           (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_fail_get_mmu_bist_fail_0(data)                       ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_fail_get_eff_bist_fail_all(data)                     ((0x00000004&(data))>>2)
#define  DC1_MC_DC_PHY_bist_fail_get_eff_bist_fail_1(data)                       ((0x00000002&(data))>>1)
#define  DC1_MC_DC_PHY_bist_fail_get_eff_bist_fail_0(data)                       (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_drf                                                 0x18008FCC
#define  DC1_MC_DC_PHY_bist_drf_reg_addr                                         "0xB8008FCC"
#define  DC1_MC_DC_PHY_bist_drf_reg                                              0xB8008FCC
#define  DC1_MC_DC_PHY_bist_drf_inst_addr                                        "0x004E"
#define  set_DC1_MC_DC_PHY_bist_drf_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_drf_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_drf_reg                                          (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_drf_reg))
#define  DC1_MC_DC_PHY_bist_drf_mmu_drf_mode_shift                               (8)
#define  DC1_MC_DC_PHY_bist_drf_eff_drf_mode_shift                               (0)
#define  DC1_MC_DC_PHY_bist_drf_mmu_drf_mode_mask                                (0x00000100)
#define  DC1_MC_DC_PHY_bist_drf_eff_drf_mode_mask                                (0x00000001)
#define  DC1_MC_DC_PHY_bist_drf_mmu_drf_mode(data)                               (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_drf_eff_drf_mode(data)                               (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_drf_get_mmu_drf_mode(data)                           ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_drf_get_eff_drf_mode(data)                           (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_resume                                              0x18008FD0
#define  DC1_MC_DC_PHY_bist_resume_reg_addr                                      "0xB8008FD0"
#define  DC1_MC_DC_PHY_bist_resume_reg                                           0xB8008FD0
#define  DC1_MC_DC_PHY_bist_resume_inst_addr                                     "0x004F"
#define  set_DC1_MC_DC_PHY_bist_resume_reg(data)                                 (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_resume_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_resume_reg                                       (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_resume_reg))
#define  DC1_MC_DC_PHY_bist_resume_mmu_drf_resume_shift                          (8)
#define  DC1_MC_DC_PHY_bist_resume_eff_drf_resume_shift                          (0)
#define  DC1_MC_DC_PHY_bist_resume_mmu_drf_resume_mask                           (0x00000100)
#define  DC1_MC_DC_PHY_bist_resume_eff_drf_resume_mask                           (0x00000001)
#define  DC1_MC_DC_PHY_bist_resume_mmu_drf_resume(data)                          (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_resume_eff_drf_resume(data)                          (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_resume_get_mmu_drf_resume(data)                      ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_resume_get_eff_drf_resume(data)                      (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist0_drf_done                                           0x18008FD4
#define  DC1_MC_DC_PHY_bist0_drf_done_reg_addr                                   "0xB8008FD4"
#define  DC1_MC_DC_PHY_bist0_drf_done_reg                                        0xB8008FD4
#define  DC1_MC_DC_PHY_bist0_drf_done_inst_addr                                  "0x0050"
#define  set_DC1_MC_DC_PHY_bist0_drf_done_reg(data)                              (*((volatile unsigned int*)DC1_MC_DC_PHY_bist0_drf_done_reg)=data)
#define  get_DC1_MC_DC_PHY_bist0_drf_done_reg                                    (*((volatile unsigned int*)DC1_MC_DC_PHY_bist0_drf_done_reg))
#define  DC1_MC_DC_PHY_bist0_drf_done_mmu_drf_done_shift                         (8)
#define  DC1_MC_DC_PHY_bist0_drf_done_eff_drf_done_shift                         (0)
#define  DC1_MC_DC_PHY_bist0_drf_done_mmu_drf_done_mask                          (0x00000100)
#define  DC1_MC_DC_PHY_bist0_drf_done_eff_drf_done_mask                          (0x00000001)
#define  DC1_MC_DC_PHY_bist0_drf_done_mmu_drf_done(data)                         (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist0_drf_done_eff_drf_done(data)                         (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist0_drf_done_get_mmu_drf_done(data)                     ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist0_drf_done_get_eff_drf_done(data)                     (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_drf_pause                                           0x18008FD8
#define  DC1_MC_DC_PHY_bist_drf_pause_reg_addr                                   "0xB8008FD8"
#define  DC1_MC_DC_PHY_bist_drf_pause_reg                                        0xB8008FD8
#define  DC1_MC_DC_PHY_bist_drf_pause_inst_addr                                  "0x0051"
#define  set_DC1_MC_DC_PHY_bist_drf_pause_reg(data)                              (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_drf_pause_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_drf_pause_reg                                    (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_drf_pause_reg))
#define  DC1_MC_DC_PHY_bist_drf_pause_mmu_drf_pause_shift                        (8)
#define  DC1_MC_DC_PHY_bist_drf_pause_eff_drf_pause_shift                        (0)
#define  DC1_MC_DC_PHY_bist_drf_pause_mmu_drf_pause_mask                         (0x00000100)
#define  DC1_MC_DC_PHY_bist_drf_pause_eff_drf_pause_mask                         (0x00000001)
#define  DC1_MC_DC_PHY_bist_drf_pause_mmu_drf_pause(data)                        (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_drf_pause_eff_drf_pause(data)                        (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_drf_pause_get_mmu_drf_pause(data)                    ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_drf_pause_get_eff_drf_pause(data)                    (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_drf_fail                                            0x18008FDC
#define  DC1_MC_DC_PHY_bist_drf_fail_reg_addr                                    "0xB8008FDC"
#define  DC1_MC_DC_PHY_bist_drf_fail_reg                                         0xB8008FDC
#define  DC1_MC_DC_PHY_bist_drf_fail_inst_addr                                   "0x0052"
#define  set_DC1_MC_DC_PHY_bist_drf_fail_reg(data)                               (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_drf_fail_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_drf_fail_reg                                     (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_drf_fail_reg))
#define  DC1_MC_DC_PHY_bist_drf_fail_mmu_drf_bist_fail_0_shift                   (8)
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_all_shift                 (2)
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_1_shift                   (1)
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_0_shift                   (0)
#define  DC1_MC_DC_PHY_bist_drf_fail_mmu_drf_bist_fail_0_mask                    (0x00000100)
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_all_mask                  (0x00000004)
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_1_mask                    (0x00000002)
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_0_mask                    (0x00000001)
#define  DC1_MC_DC_PHY_bist_drf_fail_mmu_drf_bist_fail_0(data)                   (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_all(data)                 (0x00000004&((data)<<2))
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_1(data)                   (0x00000002&((data)<<1))
#define  DC1_MC_DC_PHY_bist_drf_fail_eff_drf_bist_fail_0(data)                   (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_drf_fail_get_mmu_drf_bist_fail_0(data)               ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_drf_fail_get_eff_drf_bist_fail_all(data)             ((0x00000004&(data))>>2)
#define  DC1_MC_DC_PHY_bist_drf_fail_get_eff_drf_bist_fail_1(data)               ((0x00000002&(data))>>1)
#define  DC1_MC_DC_PHY_bist_drf_fail_get_eff_drf_bist_fail_0(data)               (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_detail                                              0x18008FE0
#define  DC1_MC_DC_PHY_bist_detail_reg_addr                                      "0xB8008FE0"
#define  DC1_MC_DC_PHY_bist_detail_reg                                           0xB8008FE0
#define  DC1_MC_DC_PHY_bist_detail_inst_addr                                     "0x0053"
#define  set_DC1_MC_DC_PHY_bist_detail_reg(data)                                 (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_detail_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_detail_reg                                       (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_detail_reg))
#define  DC1_MC_DC_PHY_bist_detail_mbist_dummy_shift                             (0)
#define  DC1_MC_DC_PHY_bist_detail_mbist_dummy_mask                              (0xFFFFFFFF)
#define  DC1_MC_DC_PHY_bist_detail_mbist_dummy(data)                             (0xFFFFFFFF&(data))
#define  DC1_MC_DC_PHY_bist_detail_get_mbist_dummy(data)                         (0xFFFFFFFF&(data))

#define  DC1_MC_DC_PHY_bist_rm                                                  0x18008FE4
#define  DC1_MC_DC_PHY_bist_rm_reg_addr                                          "0xB8008FE4"
#define  DC1_MC_DC_PHY_bist_rm_reg                                               0xB8008FE4
#define  DC1_MC_DC_PHY_bist_rm_inst_addr                                         "0x0054"
#define  set_DC1_MC_DC_PHY_bist_rm_reg(data)                                     (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_rm_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_rm_reg                                           (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_rm_reg))
#define  DC1_MC_DC_PHY_bist_rm_mmu_sram_rme_shift                                (12)
#define  DC1_MC_DC_PHY_bist_rm_mmu_sram_rm_shift                                 (8)
#define  DC1_MC_DC_PHY_bist_rm_eff_sram_rme_shift                                (4)
#define  DC1_MC_DC_PHY_bist_rm_eff_sram_rm_shift                                 (0)
#define  DC1_MC_DC_PHY_bist_rm_mmu_sram_rme_mask                                 (0x00001000)
#define  DC1_MC_DC_PHY_bist_rm_mmu_sram_rm_mask                                  (0x00000F00)
#define  DC1_MC_DC_PHY_bist_rm_eff_sram_rme_mask                                 (0x00000010)
#define  DC1_MC_DC_PHY_bist_rm_eff_sram_rm_mask                                  (0x0000000F)
#define  DC1_MC_DC_PHY_bist_rm_mmu_sram_rme(data)                                (0x00001000&((data)<<12))
#define  DC1_MC_DC_PHY_bist_rm_mmu_sram_rm(data)                                 (0x00000F00&((data)<<8))
#define  DC1_MC_DC_PHY_bist_rm_eff_sram_rme(data)                                (0x00000010&((data)<<4))
#define  DC1_MC_DC_PHY_bist_rm_eff_sram_rm(data)                                 (0x0000000F&(data))
#define  DC1_MC_DC_PHY_bist_rm_get_mmu_sram_rme(data)                            ((0x00001000&(data))>>12)
#define  DC1_MC_DC_PHY_bist_rm_get_mmu_sram_rm(data)                             ((0x00000F00&(data))>>8)
#define  DC1_MC_DC_PHY_bist_rm_get_eff_sram_rme(data)                            ((0x00000010&(data))>>4)
#define  DC1_MC_DC_PHY_bist_rm_get_eff_sram_rm(data)                             (0x0000000F&(data))

#define  DC1_MC_DC_PHY_bist_ls                                                  0x18008FE8
#define  DC1_MC_DC_PHY_bist_ls_reg_addr                                          "0xB8008FE8"
#define  DC1_MC_DC_PHY_bist_ls_reg                                               0xB8008FE8
#define  DC1_MC_DC_PHY_bist_ls_inst_addr                                         "0x0055"
#define  set_DC1_MC_DC_PHY_bist_ls_reg(data)                                     (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_ls_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_ls_reg                                           (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_ls_reg))
#define  DC1_MC_DC_PHY_bist_ls_mmu_sram_ls_shift                                 (8)
#define  DC1_MC_DC_PHY_bist_ls_eff_sram_ls_shift                                 (0)
#define  DC1_MC_DC_PHY_bist_ls_mmu_sram_ls_mask                                  (0x00000100)
#define  DC1_MC_DC_PHY_bist_ls_eff_sram_ls_mask                                  (0x00000001)
#define  DC1_MC_DC_PHY_bist_ls_mmu_sram_ls(data)                                 (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_ls_eff_sram_ls(data)                                 (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_ls_get_mmu_sram_ls(data)                             ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_ls_get_eff_sram_ls(data)                             (0x00000001&(data))

#define  DC1_MC_DC_PHY_bist_test1                                               0x18008FEC
#define  DC1_MC_DC_PHY_bist_test1_reg_addr                                       "0xB8008FEC"
#define  DC1_MC_DC_PHY_bist_test1_reg                                            0xB8008FEC
#define  DC1_MC_DC_PHY_bist_test1_inst_addr                                      "0x0056"
#define  set_DC1_MC_DC_PHY_bist_test1_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_test1_reg)=data)
#define  get_DC1_MC_DC_PHY_bist_test1_reg                                        (*((volatile unsigned int*)DC1_MC_DC_PHY_bist_test1_reg))
#define  DC1_MC_DC_PHY_bist_test1_mmu_sram_test1_shift                           (8)
#define  DC1_MC_DC_PHY_bist_test1_eff_sram_test1_shift                           (0)
#define  DC1_MC_DC_PHY_bist_test1_mmu_sram_test1_mask                            (0x00000100)
#define  DC1_MC_DC_PHY_bist_test1_eff_sram_test1_mask                            (0x00000001)
#define  DC1_MC_DC_PHY_bist_test1_mmu_sram_test1(data)                           (0x00000100&((data)<<8))
#define  DC1_MC_DC_PHY_bist_test1_eff_sram_test1(data)                           (0x00000001&(data))
#define  DC1_MC_DC_PHY_bist_test1_get_mmu_sram_test1(data)                       ((0x00000100&(data))>>8)
#define  DC1_MC_DC_PHY_bist_test1_get_eff_sram_test1(data)                       (0x00000001&(data))

#define  DC1_MC_EFF_MEAS_CTRL                                                   0x18008D80
#define  DC1_MC_EFF_MEAS_CTRL_reg_addr                                           "0xB8008D80"
#define  DC1_MC_EFF_MEAS_CTRL_reg                                                0xB8008D80
#define  DC1_MC_EFF_MEAS_CTRL_inst_addr                                          "0x0057"
#define  set_DC1_MC_EFF_MEAS_CTRL_reg(data)                                      (*((volatile unsigned int*)DC1_MC_EFF_MEAS_CTRL_reg)=data)
#define  get_DC1_MC_EFF_MEAS_CTRL_reg                                            (*((volatile unsigned int*)DC1_MC_EFF_MEAS_CTRL_reg))
#define  DC1_MC_EFF_MEAS_CTRL_meas_period_shift                                  (8)
#define  DC1_MC_EFF_MEAS_CTRL_meas_id_ddrsel_shift                               (4)
#define  DC1_MC_EFF_MEAS_CTRL_rwcnt_ddrsel_shift                                 (2)
#define  DC1_MC_EFF_MEAS_CTRL_meas_int_src_shift                                 (1)
#define  DC1_MC_EFF_MEAS_CTRL_eff_meas_en_shift                                  (0)
#define  DC1_MC_EFF_MEAS_CTRL_meas_period_mask                                   (0x00FFFF00)
#define  DC1_MC_EFF_MEAS_CTRL_meas_id_ddrsel_mask                                (0x00000030)
#define  DC1_MC_EFF_MEAS_CTRL_rwcnt_ddrsel_mask                                  (0x0000000C)
#define  DC1_MC_EFF_MEAS_CTRL_meas_int_src_mask                                  (0x00000002)
#define  DC1_MC_EFF_MEAS_CTRL_eff_meas_en_mask                                   (0x00000001)
#define  DC1_MC_EFF_MEAS_CTRL_meas_period(data)                                  (0x00FFFF00&((data)<<8))
#define  DC1_MC_EFF_MEAS_CTRL_meas_id_ddrsel(data)                               (0x00000030&((data)<<4))
#define  DC1_MC_EFF_MEAS_CTRL_rwcnt_ddrsel(data)                                 (0x0000000C&((data)<<2))
#define  DC1_MC_EFF_MEAS_CTRL_meas_int_src(data)                                 (0x00000002&((data)<<1))
#define  DC1_MC_EFF_MEAS_CTRL_eff_meas_en(data)                                  (0x00000001&(data))
#define  DC1_MC_EFF_MEAS_CTRL_get_meas_period(data)                              ((0x00FFFF00&(data))>>8)
#define  DC1_MC_EFF_MEAS_CTRL_get_meas_id_ddrsel(data)                           ((0x00000030&(data))>>4)
#define  DC1_MC_EFF_MEAS_CTRL_get_rwcnt_ddrsel(data)                             ((0x0000000C&(data))>>2)
#define  DC1_MC_EFF_MEAS_CTRL_get_meas_int_src(data)                             ((0x00000002&(data))>>1)
#define  DC1_MC_EFF_MEAS_CTRL_get_eff_meas_en(data)                              (0x00000001&(data))

#define  DC1_MC_READ_CMD                                                        0x18008D84
#define  DC1_MC_READ_CMD_reg_addr                                                "0xB8008D84"
#define  DC1_MC_READ_CMD_reg                                                     0xB8008D84
#define  DC1_MC_READ_CMD_inst_addr                                               "0x0058"
#define  set_DC1_MC_READ_CMD_reg(data)                                           (*((volatile unsigned int*)DC1_MC_READ_CMD_reg)=data)
#define  get_DC1_MC_READ_CMD_reg                                                 (*((volatile unsigned int*)DC1_MC_READ_CMD_reg))
#define  DC1_MC_READ_CMD_rd_cnt_shift                                            (0)
#define  DC1_MC_READ_CMD_rd_cnt_mask                                             (0x1FFFFFFF)
#define  DC1_MC_READ_CMD_rd_cnt(data)                                            (0x1FFFFFFF&(data))
#define  DC1_MC_READ_CMD_get_rd_cnt(data)                                        (0x1FFFFFFF&(data))

#define  DC1_MC_WRITE_CMD                                                       0x18008D88
#define  DC1_MC_WRITE_CMD_reg_addr                                               "0xB8008D88"
#define  DC1_MC_WRITE_CMD_reg                                                    0xB8008D88
#define  DC1_MC_WRITE_CMD_inst_addr                                              "0x0059"
#define  set_DC1_MC_WRITE_CMD_reg(data)                                          (*((volatile unsigned int*)DC1_MC_WRITE_CMD_reg)=data)
#define  get_DC1_MC_WRITE_CMD_reg                                                (*((volatile unsigned int*)DC1_MC_WRITE_CMD_reg))
#define  DC1_MC_WRITE_CMD_wr_cnt_shift                                           (0)
#define  DC1_MC_WRITE_CMD_wr_cnt_mask                                            (0x1FFFFFFF)
#define  DC1_MC_WRITE_CMD_wr_cnt(data)                                           (0x1FFFFFFF&(data))
#define  DC1_MC_WRITE_CMD_get_wr_cnt(data)                                       (0x1FFFFFFF&(data))

#define  DC1_MC_READ_CHOP_CMD                                                   0x18008D8C
#define  DC1_MC_READ_CHOP_CMD_reg_addr                                           "0xB8008D8C"
#define  DC1_MC_READ_CHOP_CMD_reg                                                0xB8008D8C
#define  DC1_MC_READ_CHOP_CMD_inst_addr                                          "0x005A"
#define  set_DC1_MC_READ_CHOP_CMD_reg(data)                                      (*((volatile unsigned int*)DC1_MC_READ_CHOP_CMD_reg)=data)
#define  get_DC1_MC_READ_CHOP_CMD_reg                                            (*((volatile unsigned int*)DC1_MC_READ_CHOP_CMD_reg))
#define  DC1_MC_READ_CHOP_CMD_rd_chop_cnt_shift                                  (0)
#define  DC1_MC_READ_CHOP_CMD_rd_chop_cnt_mask                                   (0x1FFFFFFF)
#define  DC1_MC_READ_CHOP_CMD_rd_chop_cnt(data)                                  (0x1FFFFFFF&(data))
#define  DC1_MC_READ_CHOP_CMD_get_rd_chop_cnt(data)                              (0x1FFFFFFF&(data))

#define  DC1_MC_WRITE_CHOP_CMD                                                  0x18008D90
#define  DC1_MC_WRITE_CHOP_CMD_reg_addr                                          "0xB8008D90"
#define  DC1_MC_WRITE_CHOP_CMD_reg                                               0xB8008D90
#define  DC1_MC_WRITE_CHOP_CMD_inst_addr                                         "0x005B"
#define  set_DC1_MC_WRITE_CHOP_CMD_reg(data)                                     (*((volatile unsigned int*)DC1_MC_WRITE_CHOP_CMD_reg)=data)
#define  get_DC1_MC_WRITE_CHOP_CMD_reg                                           (*((volatile unsigned int*)DC1_MC_WRITE_CHOP_CMD_reg))
#define  DC1_MC_WRITE_CHOP_CMD_wr_chop_cnt_shift                                 (0)
#define  DC1_MC_WRITE_CHOP_CMD_wr_chop_cnt_mask                                  (0x1FFFFFFF)
#define  DC1_MC_WRITE_CHOP_CMD_wr_chop_cnt(data)                                 (0x1FFFFFFF&(data))
#define  DC1_MC_WRITE_CHOP_CMD_get_wr_chop_cnt(data)                             (0x1FFFFFFF&(data))

#define  DC1_MC_PARST_ACC_RD_CNT                                                0x18008D94
#define  DC1_MC_PARST_ACC_RD_CNT_reg_addr                                        "0xB8008D94"
#define  DC1_MC_PARST_ACC_RD_CNT_reg                                             0xB8008D94
#define  DC1_MC_PARST_ACC_RD_CNT_inst_addr                                       "0x005C"
#define  set_DC1_MC_PARST_ACC_RD_CNT_reg(data)                                   (*((volatile unsigned int*)DC1_MC_PARST_ACC_RD_CNT_reg)=data)
#define  get_DC1_MC_PARST_ACC_RD_CNT_reg                                         (*((volatile unsigned int*)DC1_MC_PARST_ACC_RD_CNT_reg))
#define  DC1_MC_PARST_ACC_RD_CNT_parst_acc_rd_cnt_shift                          (0)
#define  DC1_MC_PARST_ACC_RD_CNT_parst_acc_rd_cnt_mask                           (0x1FFFFFFF)
#define  DC1_MC_PARST_ACC_RD_CNT_parst_acc_rd_cnt(data)                          (0x1FFFFFFF&(data))
#define  DC1_MC_PARST_ACC_RD_CNT_get_parst_acc_rd_cnt(data)                      (0x1FFFFFFF&(data))

#define  DC1_MC_PARST_ACC_WR_CNT                                                0x18008D98
#define  DC1_MC_PARST_ACC_WR_CNT_reg_addr                                        "0xB8008D98"
#define  DC1_MC_PARST_ACC_WR_CNT_reg                                             0xB8008D98
#define  DC1_MC_PARST_ACC_WR_CNT_inst_addr                                       "0x005D"
#define  set_DC1_MC_PARST_ACC_WR_CNT_reg(data)                                   (*((volatile unsigned int*)DC1_MC_PARST_ACC_WR_CNT_reg)=data)
#define  get_DC1_MC_PARST_ACC_WR_CNT_reg                                         (*((volatile unsigned int*)DC1_MC_PARST_ACC_WR_CNT_reg))
#define  DC1_MC_PARST_ACC_WR_CNT_parst_acc_wr_cnt_shift                          (0)
#define  DC1_MC_PARST_ACC_WR_CNT_parst_acc_wr_cnt_mask                           (0x1FFFFFFF)
#define  DC1_MC_PARST_ACC_WR_CNT_parst_acc_wr_cnt(data)                          (0x1FFFFFFF&(data))
#define  DC1_MC_PARST_ACC_WR_CNT_get_parst_acc_wr_cnt(data)                      (0x1FFFFFFF&(data))

#define  DC1_MC_PAR_IDLE_CNT                                                    0x18008D9C
#define  DC1_MC_PAR_IDLE_CNT_reg_addr                                            "0xB8008D9C"
#define  DC1_MC_PAR_IDLE_CNT_reg                                                 0xB8008D9C
#define  DC1_MC_PAR_IDLE_CNT_inst_addr                                           "0x005E"
#define  set_DC1_MC_PAR_IDLE_CNT_reg(data)                                       (*((volatile unsigned int*)DC1_MC_PAR_IDLE_CNT_reg)=data)
#define  get_DC1_MC_PAR_IDLE_CNT_reg                                             (*((volatile unsigned int*)DC1_MC_PAR_IDLE_CNT_reg))
#define  DC1_MC_PAR_IDLE_CNT_par_idle_cnt_shift                                  (0)
#define  DC1_MC_PAR_IDLE_CNT_par_idle_cnt_mask                                   (0x1FFFFFFF)
#define  DC1_MC_PAR_IDLE_CNT_par_idle_cnt(data)                                  (0x1FFFFFFF&(data))
#define  DC1_MC_PAR_IDLE_CNT_get_par_idle_cnt(data)                              (0x1FFFFFFF&(data))

#define  DC1_MC_ADR00_TOGL                                                      0x18008DA0
#define  DC1_MC_ADR00_TOGL_reg_addr                                              "0xB8008DA0"
#define  DC1_MC_ADR00_TOGL_reg                                                   0xB8008DA0
#define  DC1_MC_ADR00_TOGL_inst_addr                                             "0x005F"
#define  set_DC1_MC_ADR00_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR00_TOGL_reg)=data)
#define  get_DC1_MC_ADR00_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR00_TOGL_reg))
#define  DC1_MC_ADR00_TOGL_adr00_togl_shift                                      (0)
#define  DC1_MC_ADR00_TOGL_adr00_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR00_TOGL_adr00_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR00_TOGL_get_adr00_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR01_TOGL                                                      0x18008DA4
#define  DC1_MC_ADR01_TOGL_reg_addr                                              "0xB8008DA4"
#define  DC1_MC_ADR01_TOGL_reg                                                   0xB8008DA4
#define  DC1_MC_ADR01_TOGL_inst_addr                                             "0x0060"
#define  set_DC1_MC_ADR01_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR01_TOGL_reg)=data)
#define  get_DC1_MC_ADR01_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR01_TOGL_reg))
#define  DC1_MC_ADR01_TOGL_adr01_togl_shift                                      (0)
#define  DC1_MC_ADR01_TOGL_adr01_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR01_TOGL_adr01_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR01_TOGL_get_adr01_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR02_TOGL                                                      0x18008DA8
#define  DC1_MC_ADR02_TOGL_reg_addr                                              "0xB8008DA8"
#define  DC1_MC_ADR02_TOGL_reg                                                   0xB8008DA8
#define  DC1_MC_ADR02_TOGL_inst_addr                                             "0x0061"
#define  set_DC1_MC_ADR02_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR02_TOGL_reg)=data)
#define  get_DC1_MC_ADR02_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR02_TOGL_reg))
#define  DC1_MC_ADR02_TOGL_adr02_togl_shift                                      (0)
#define  DC1_MC_ADR02_TOGL_adr02_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR02_TOGL_adr02_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR02_TOGL_get_adr02_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR03_TOGL                                                      0x18008DAC
#define  DC1_MC_ADR03_TOGL_reg_addr                                              "0xB8008DAC"
#define  DC1_MC_ADR03_TOGL_reg                                                   0xB8008DAC
#define  DC1_MC_ADR03_TOGL_inst_addr                                             "0x0062"
#define  set_DC1_MC_ADR03_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR03_TOGL_reg)=data)
#define  get_DC1_MC_ADR03_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR03_TOGL_reg))
#define  DC1_MC_ADR03_TOGL_adr03_togl_shift                                      (0)
#define  DC1_MC_ADR03_TOGL_adr03_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR03_TOGL_adr03_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR03_TOGL_get_adr03_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR04_TOGL                                                      0x18008DB0
#define  DC1_MC_ADR04_TOGL_reg_addr                                              "0xB8008DB0"
#define  DC1_MC_ADR04_TOGL_reg                                                   0xB8008DB0
#define  DC1_MC_ADR04_TOGL_inst_addr                                             "0x0063"
#define  set_DC1_MC_ADR04_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR04_TOGL_reg)=data)
#define  get_DC1_MC_ADR04_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR04_TOGL_reg))
#define  DC1_MC_ADR04_TOGL_adr04_togl_shift                                      (0)
#define  DC1_MC_ADR04_TOGL_adr04_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR04_TOGL_adr04_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR04_TOGL_get_adr04_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR05_TOGL                                                      0x18008DB4
#define  DC1_MC_ADR05_TOGL_reg_addr                                              "0xB8008DB4"
#define  DC1_MC_ADR05_TOGL_reg                                                   0xB8008DB4
#define  DC1_MC_ADR05_TOGL_inst_addr                                             "0x0064"
#define  set_DC1_MC_ADR05_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR05_TOGL_reg)=data)
#define  get_DC1_MC_ADR05_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR05_TOGL_reg))
#define  DC1_MC_ADR05_TOGL_adr05_togl_shift                                      (0)
#define  DC1_MC_ADR05_TOGL_adr05_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR05_TOGL_adr05_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR05_TOGL_get_adr05_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR06_TOGL                                                      0x18008DB8
#define  DC1_MC_ADR06_TOGL_reg_addr                                              "0xB8008DB8"
#define  DC1_MC_ADR06_TOGL_reg                                                   0xB8008DB8
#define  DC1_MC_ADR06_TOGL_inst_addr                                             "0x0065"
#define  set_DC1_MC_ADR06_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR06_TOGL_reg)=data)
#define  get_DC1_MC_ADR06_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR06_TOGL_reg))
#define  DC1_MC_ADR06_TOGL_adr06_togl_shift                                      (0)
#define  DC1_MC_ADR06_TOGL_adr06_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR06_TOGL_adr06_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR06_TOGL_get_adr06_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR07_TOGL                                                      0x18008DBC
#define  DC1_MC_ADR07_TOGL_reg_addr                                              "0xB8008DBC"
#define  DC1_MC_ADR07_TOGL_reg                                                   0xB8008DBC
#define  DC1_MC_ADR07_TOGL_inst_addr                                             "0x0066"
#define  set_DC1_MC_ADR07_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR07_TOGL_reg)=data)
#define  get_DC1_MC_ADR07_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR07_TOGL_reg))
#define  DC1_MC_ADR07_TOGL_adr07_togl_shift                                      (0)
#define  DC1_MC_ADR07_TOGL_adr07_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR07_TOGL_adr07_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR07_TOGL_get_adr07_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR08_TOGL                                                      0x18008DC0
#define  DC1_MC_ADR08_TOGL_reg_addr                                              "0xB8008DC0"
#define  DC1_MC_ADR08_TOGL_reg                                                   0xB8008DC0
#define  DC1_MC_ADR08_TOGL_inst_addr                                             "0x0067"
#define  set_DC1_MC_ADR08_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR08_TOGL_reg)=data)
#define  get_DC1_MC_ADR08_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR08_TOGL_reg))
#define  DC1_MC_ADR08_TOGL_adr08_togl_shift                                      (0)
#define  DC1_MC_ADR08_TOGL_adr08_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR08_TOGL_adr08_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR08_TOGL_get_adr08_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR09_TOGL                                                      0x18008DC4
#define  DC1_MC_ADR09_TOGL_reg_addr                                              "0xB8008DC4"
#define  DC1_MC_ADR09_TOGL_reg                                                   0xB8008DC4
#define  DC1_MC_ADR09_TOGL_inst_addr                                             "0x0068"
#define  set_DC1_MC_ADR09_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR09_TOGL_reg)=data)
#define  get_DC1_MC_ADR09_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR09_TOGL_reg))
#define  DC1_MC_ADR09_TOGL_adr09_togl_shift                                      (0)
#define  DC1_MC_ADR09_TOGL_adr09_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR09_TOGL_adr09_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR09_TOGL_get_adr09_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR10_TOGL                                                      0x18008DC8
#define  DC1_MC_ADR10_TOGL_reg_addr                                              "0xB8008DC8"
#define  DC1_MC_ADR10_TOGL_reg                                                   0xB8008DC8
#define  DC1_MC_ADR10_TOGL_inst_addr                                             "0x0069"
#define  set_DC1_MC_ADR10_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR10_TOGL_reg)=data)
#define  get_DC1_MC_ADR10_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR10_TOGL_reg))
#define  DC1_MC_ADR10_TOGL_adr10_togl_shift                                      (0)
#define  DC1_MC_ADR10_TOGL_adr10_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR10_TOGL_adr10_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR10_TOGL_get_adr10_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR11_TOGL                                                      0x18008DCC
#define  DC1_MC_ADR11_TOGL_reg_addr                                              "0xB8008DCC"
#define  DC1_MC_ADR11_TOGL_reg                                                   0xB8008DCC
#define  DC1_MC_ADR11_TOGL_inst_addr                                             "0x006A"
#define  set_DC1_MC_ADR11_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR11_TOGL_reg)=data)
#define  get_DC1_MC_ADR11_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR11_TOGL_reg))
#define  DC1_MC_ADR11_TOGL_adr11_togl_shift                                      (0)
#define  DC1_MC_ADR11_TOGL_adr11_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR11_TOGL_adr11_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR11_TOGL_get_adr11_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR12_TOGL                                                      0x18008DD0
#define  DC1_MC_ADR12_TOGL_reg_addr                                              "0xB8008DD0"
#define  DC1_MC_ADR12_TOGL_reg                                                   0xB8008DD0
#define  DC1_MC_ADR12_TOGL_inst_addr                                             "0x006B"
#define  set_DC1_MC_ADR12_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR12_TOGL_reg)=data)
#define  get_DC1_MC_ADR12_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR12_TOGL_reg))
#define  DC1_MC_ADR12_TOGL_adr12_togl_shift                                      (0)
#define  DC1_MC_ADR12_TOGL_adr12_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR12_TOGL_adr12_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR12_TOGL_get_adr12_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR13_TOGL                                                      0x18008DD4
#define  DC1_MC_ADR13_TOGL_reg_addr                                              "0xB8008DD4"
#define  DC1_MC_ADR13_TOGL_reg                                                   0xB8008DD4
#define  DC1_MC_ADR13_TOGL_inst_addr                                             "0x006C"
#define  set_DC1_MC_ADR13_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR13_TOGL_reg)=data)
#define  get_DC1_MC_ADR13_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR13_TOGL_reg))
#define  DC1_MC_ADR13_TOGL_adr13_togl_shift                                      (0)
#define  DC1_MC_ADR13_TOGL_adr13_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR13_TOGL_adr13_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR13_TOGL_get_adr13_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR14_TOGL                                                      0x18008DD8
#define  DC1_MC_ADR14_TOGL_reg_addr                                              "0xB8008DD8"
#define  DC1_MC_ADR14_TOGL_reg                                                   0xB8008DD8
#define  DC1_MC_ADR14_TOGL_inst_addr                                             "0x006D"
#define  set_DC1_MC_ADR14_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR14_TOGL_reg)=data)
#define  get_DC1_MC_ADR14_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR14_TOGL_reg))
#define  DC1_MC_ADR14_TOGL_adr14_togl_shift                                      (0)
#define  DC1_MC_ADR14_TOGL_adr14_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR14_TOGL_adr14_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR14_TOGL_get_adr14_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR15_TOGL                                                      0x18008DDC
#define  DC1_MC_ADR15_TOGL_reg_addr                                              "0xB8008DDC"
#define  DC1_MC_ADR15_TOGL_reg                                                   0xB8008DDC
#define  DC1_MC_ADR15_TOGL_inst_addr                                             "0x006E"
#define  set_DC1_MC_ADR15_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR15_TOGL_reg)=data)
#define  get_DC1_MC_ADR15_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR15_TOGL_reg))
#define  DC1_MC_ADR15_TOGL_adr15_togl_shift                                      (0)
#define  DC1_MC_ADR15_TOGL_adr15_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR15_TOGL_adr15_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR15_TOGL_get_adr15_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR16_TOGL                                                      0x18008DE0
#define  DC1_MC_ADR16_TOGL_reg_addr                                              "0xB8008DE0"
#define  DC1_MC_ADR16_TOGL_reg                                                   0xB8008DE0
#define  DC1_MC_ADR16_TOGL_inst_addr                                             "0x006F"
#define  set_DC1_MC_ADR16_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR16_TOGL_reg)=data)
#define  get_DC1_MC_ADR16_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR16_TOGL_reg))
#define  DC1_MC_ADR16_TOGL_adr16_togl_shift                                      (0)
#define  DC1_MC_ADR16_TOGL_adr16_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR16_TOGL_adr16_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR16_TOGL_get_adr16_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR17_TOGL                                                      0x18008DE4
#define  DC1_MC_ADR17_TOGL_reg_addr                                              "0xB8008DE4"
#define  DC1_MC_ADR17_TOGL_reg                                                   0xB8008DE4
#define  DC1_MC_ADR17_TOGL_inst_addr                                             "0x0070"
#define  set_DC1_MC_ADR17_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR17_TOGL_reg)=data)
#define  get_DC1_MC_ADR17_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR17_TOGL_reg))
#define  DC1_MC_ADR17_TOGL_adr17_togl_shift                                      (0)
#define  DC1_MC_ADR17_TOGL_adr17_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR17_TOGL_adr17_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR17_TOGL_get_adr17_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR18_TOGL                                                      0x18008DE8
#define  DC1_MC_ADR18_TOGL_reg_addr                                              "0xB8008DE8"
#define  DC1_MC_ADR18_TOGL_reg                                                   0xB8008DE8
#define  DC1_MC_ADR18_TOGL_inst_addr                                             "0x0071"
#define  set_DC1_MC_ADR18_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR18_TOGL_reg)=data)
#define  get_DC1_MC_ADR18_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR18_TOGL_reg))
#define  DC1_MC_ADR18_TOGL_adr18_togl_shift                                      (0)
#define  DC1_MC_ADR18_TOGL_adr18_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR18_TOGL_adr18_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR18_TOGL_get_adr18_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR19_TOGL                                                      0x18008DEC
#define  DC1_MC_ADR19_TOGL_reg_addr                                              "0xB8008DEC"
#define  DC1_MC_ADR19_TOGL_reg                                                   0xB8008DEC
#define  DC1_MC_ADR19_TOGL_inst_addr                                             "0x0072"
#define  set_DC1_MC_ADR19_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR19_TOGL_reg)=data)
#define  get_DC1_MC_ADR19_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR19_TOGL_reg))
#define  DC1_MC_ADR19_TOGL_adr19_togl_shift                                      (0)
#define  DC1_MC_ADR19_TOGL_adr19_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR19_TOGL_adr19_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR19_TOGL_get_adr19_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_BG_UNBALANCE_CNT                                                0x18008DF0
#define  DC1_MC_BG_UNBALANCE_CNT_reg_addr                                        "0xB8008DF0"
#define  DC1_MC_BG_UNBALANCE_CNT_reg                                             0xB8008DF0
#define  DC1_MC_BG_UNBALANCE_CNT_inst_addr                                       "0x0073"
#define  set_DC1_MC_BG_UNBALANCE_CNT_reg(data)                                   (*((volatile unsigned int*)DC1_MC_BG_UNBALANCE_CNT_reg)=data)
#define  get_DC1_MC_BG_UNBALANCE_CNT_reg                                         (*((volatile unsigned int*)DC1_MC_BG_UNBALANCE_CNT_reg))
#define  DC1_MC_BG_UNBALANCE_CNT_bg_unbalance_cnt_shift                          (0)
#define  DC1_MC_BG_UNBALANCE_CNT_bg_unbalance_cnt_mask                           (0x1FFFFFFF)
#define  DC1_MC_BG_UNBALANCE_CNT_bg_unbalance_cnt(data)                          (0x1FFFFFFF&(data))
#define  DC1_MC_BG_UNBALANCE_CNT_get_bg_unbalance_cnt(data)                      (0x1FFFFFFF&(data))

#define  DC1_MC_EFF_DMY1                                                        0x18008DF4
#define  DC1_MC_EFF_DMY1_reg_addr                                                "0xB8008DF4"
#define  DC1_MC_EFF_DMY1_reg                                                     0xB8008DF4
#define  DC1_MC_EFF_DMY1_inst_addr                                               "0x0074"
#define  set_DC1_MC_EFF_DMY1_reg(data)                                           (*((volatile unsigned int*)DC1_MC_EFF_DMY1_reg)=data)
#define  get_DC1_MC_EFF_DMY1_reg                                                 (*((volatile unsigned int*)DC1_MC_EFF_DMY1_reg))
#define  DC1_MC_EFF_DMY1_eff_dummy_shift                                         (0)
#define  DC1_MC_EFF_DMY1_eff_dummy_mask                                          (0xFFFFFFFF)
#define  DC1_MC_EFF_DMY1_eff_dummy(data)                                         (0xFFFFFFFF&(data))
#define  DC1_MC_EFF_DMY1_get_eff_dummy(data)                                     (0xFFFFFFFF&(data))

#define  DC1_MC_SR_REF_SEL                                                      0x18008DF8
#define  DC1_MC_SR_REF_SEL_reg_addr                                              "0xB8008DF8"
#define  DC1_MC_SR_REF_SEL_reg                                                   0xB8008DF8
#define  DC1_MC_SR_REF_SEL_inst_addr                                             "0x0075"
#define  set_DC1_MC_SR_REF_SEL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_SR_REF_SEL_reg)=data)
#define  get_DC1_MC_SR_REF_SEL_reg                                               (*((volatile unsigned int*)DC1_MC_SR_REF_SEL_reg))
#define  DC1_MC_SR_REF_SEL_sr_ref_mode_enable_shift                              (31)
#define  DC1_MC_SR_REF_SEL_sr_ref_total_cyc_shift                                (0)
#define  DC1_MC_SR_REF_SEL_sr_ref_mode_enable_mask                               (0x80000000)
#define  DC1_MC_SR_REF_SEL_sr_ref_total_cyc_mask                                 (0x0003FFFF)
#define  DC1_MC_SR_REF_SEL_sr_ref_mode_enable(data)                              (0x80000000&((data)<<31))
#define  DC1_MC_SR_REF_SEL_sr_ref_total_cyc(data)                                (0x0003FFFF&(data))
#define  DC1_MC_SR_REF_SEL_get_sr_ref_mode_enable(data)                          ((0x80000000&(data))>>31)
#define  DC1_MC_SR_REF_SEL_get_sr_ref_total_cyc(data)                            (0x0003FFFF&(data))

#define  DC1_MC_CLIENT_MEAS_0                                                   0x18008DFC
#define  DC1_MC_CLIENT_MEAS_0_reg_addr                                           "0xB8008DFC"
#define  DC1_MC_CLIENT_MEAS_0_reg                                                0xB8008DFC
#define  DC1_MC_CLIENT_MEAS_0_inst_addr                                          "0x0076"
#define  set_DC1_MC_CLIENT_MEAS_0_reg(data)                                      (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_0_reg)=data)
#define  get_DC1_MC_CLIENT_MEAS_0_reg                                            (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_0_reg))
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_func2_en_shift                           (2)
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_record_mode_shift                        (1)
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_record_en_shift                          (0)
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_func2_en_mask                            (0x00000004)
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_record_mode_mask                         (0x00000002)
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_record_en_mask                           (0x00000001)
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_func2_en(data)                           (0x00000004&((data)<<2))
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_record_mode(data)                        (0x00000002&((data)<<1))
#define  DC1_MC_CLIENT_MEAS_0_meas_sram_record_en(data)                          (0x00000001&(data))
#define  DC1_MC_CLIENT_MEAS_0_get_meas_sram_func2_en(data)                       ((0x00000004&(data))>>2)
#define  DC1_MC_CLIENT_MEAS_0_get_meas_sram_record_mode(data)                    ((0x00000002&(data))>>1)
#define  DC1_MC_CLIENT_MEAS_0_get_meas_sram_record_en(data)                      (0x00000001&(data))

#define  DC1_MC_CLIENT_MEAS_1                                                   0x18008E00
#define  DC1_MC_CLIENT_MEAS_1_reg_addr                                           "0xB8008E00"
#define  DC1_MC_CLIENT_MEAS_1_reg                                                0xB8008E00
#define  DC1_MC_CLIENT_MEAS_1_inst_addr                                          "0x0077"
#define  set_DC1_MC_CLIENT_MEAS_1_reg(data)                                      (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_1_reg)=data)
#define  get_DC1_MC_CLIENT_MEAS_1_reg                                            (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_1_reg))
#define  DC1_MC_CLIENT_MEAS_1_meas_id_update_done_shift                          (31)
#define  DC1_MC_CLIENT_MEAS_1_meas_sram_num_shift                                (8)
#define  DC1_MC_CLIENT_MEAS_1_meas_sram_address_shift                            (0)
#define  DC1_MC_CLIENT_MEAS_1_meas_id_update_done_mask                           (0x80000000)
#define  DC1_MC_CLIENT_MEAS_1_meas_sram_num_mask                                 (0x00000700)
#define  DC1_MC_CLIENT_MEAS_1_meas_sram_address_mask                             (0x000000FF)
#define  DC1_MC_CLIENT_MEAS_1_meas_id_update_done(data)                          (0x80000000&((data)<<31))
#define  DC1_MC_CLIENT_MEAS_1_meas_sram_num(data)                                (0x00000700&((data)<<8))
#define  DC1_MC_CLIENT_MEAS_1_meas_sram_address(data)                            (0x000000FF&(data))
#define  DC1_MC_CLIENT_MEAS_1_get_meas_id_update_done(data)                      ((0x80000000&(data))>>31)
#define  DC1_MC_CLIENT_MEAS_1_get_meas_sram_num(data)                            ((0x00000700&(data))>>8)
#define  DC1_MC_CLIENT_MEAS_1_get_meas_sram_address(data)                        (0x000000FF&(data))

#define  DC1_MC_CLIENT_MEAS_2                                                   0x18008E04
#define  DC1_MC_CLIENT_MEAS_2_reg_addr                                           "0xB8008E04"
#define  DC1_MC_CLIENT_MEAS_2_reg                                                0xB8008E04
#define  DC1_MC_CLIENT_MEAS_2_inst_addr                                          "0x0078"
#define  set_DC1_MC_CLIENT_MEAS_2_reg(data)                                      (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_2_reg)=data)
#define  get_DC1_MC_CLIENT_MEAS_2_reg                                            (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_2_reg))
#define  DC1_MC_CLIENT_MEAS_2_meas_read_cnt_shift                                (0)
#define  DC1_MC_CLIENT_MEAS_2_meas_read_cnt_mask                                 (0xFFFFFFFF)
#define  DC1_MC_CLIENT_MEAS_2_meas_read_cnt(data)                                (0xFFFFFFFF&(data))
#define  DC1_MC_CLIENT_MEAS_2_get_meas_read_cnt(data)                            (0xFFFFFFFF&(data))

#define  DC1_MC_CLIENT_MEAS_3                                                   0x18008E08
#define  DC1_MC_CLIENT_MEAS_3_reg_addr                                           "0xB8008E08"
#define  DC1_MC_CLIENT_MEAS_3_reg                                                0xB8008E08
#define  DC1_MC_CLIENT_MEAS_3_inst_addr                                          "0x0079"
#define  set_DC1_MC_CLIENT_MEAS_3_reg(data)                                      (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_3_reg)=data)
#define  get_DC1_MC_CLIENT_MEAS_3_reg                                            (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_3_reg))
#define  DC1_MC_CLIENT_MEAS_3_meas_write_cnt_shift                               (0)
#define  DC1_MC_CLIENT_MEAS_3_meas_write_cnt_mask                                (0xFFFFFFFF)
#define  DC1_MC_CLIENT_MEAS_3_meas_write_cnt(data)                               (0xFFFFFFFF&(data))
#define  DC1_MC_CLIENT_MEAS_3_get_meas_write_cnt(data)                           (0xFFFFFFFF&(data))

#define  DC1_MC_CLIENT_MEAS_4                                                   0x18008E0C
#define  DC1_MC_CLIENT_MEAS_4_reg_addr                                           "0xB8008E0C"
#define  DC1_MC_CLIENT_MEAS_4_reg                                                0xB8008E0C
#define  DC1_MC_CLIENT_MEAS_4_inst_addr                                          "0x007A"
#define  set_DC1_MC_CLIENT_MEAS_4_reg(data)                                      (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_4_reg)=data)
#define  get_DC1_MC_CLIENT_MEAS_4_reg                                            (*((volatile unsigned int*)DC1_MC_CLIENT_MEAS_4_reg))
#define  DC1_MC_CLIENT_MEAS_4_current_accessing_sram_shift                       (0)
#define  DC1_MC_CLIENT_MEAS_4_current_accessing_sram_mask                        (0x00000007)
#define  DC1_MC_CLIENT_MEAS_4_current_accessing_sram(data)                       (0x00000007&(data))
#define  DC1_MC_CLIENT_MEAS_4_get_current_accessing_sram(data)                   (0x00000007&(data))

#define  DC1_MC_MEAS_CYC                                                        0x18008E10
#define  DC1_MC_MEAS_CYC_reg_addr                                                "0xB8008E10"
#define  DC1_MC_MEAS_CYC_reg                                                     0xB8008E10
#define  DC1_MC_MEAS_CYC_inst_addr                                               "0x007B"
#define  set_DC1_MC_MEAS_CYC_reg(data)                                           (*((volatile unsigned int*)DC1_MC_MEAS_CYC_reg)=data)
#define  get_DC1_MC_MEAS_CYC_reg                                                 (*((volatile unsigned int*)DC1_MC_MEAS_CYC_reg))
#define  DC1_MC_MEAS_CYC_meas_cyc_cnt_shift                                      (0)
#define  DC1_MC_MEAS_CYC_meas_cyc_cnt_mask                                       (0xFFFFFFFF)
#define  DC1_MC_MEAS_CYC_meas_cyc_cnt(data)                                      (0xFFFFFFFF&(data))
#define  DC1_MC_MEAS_CYC_get_meas_cyc_cnt(data)                                  (0xFFFFFFFF&(data))

#define  DC1_MC_REFRESH_CYC                                                     0x18008E14
#define  DC1_MC_REFRESH_CYC_reg_addr                                             "0xB8008E14"
#define  DC1_MC_REFRESH_CYC_reg                                                  0xB8008E14
#define  DC1_MC_REFRESH_CYC_inst_addr                                            "0x007C"
#define  set_DC1_MC_REFRESH_CYC_reg(data)                                        (*((volatile unsigned int*)DC1_MC_REFRESH_CYC_reg)=data)
#define  get_DC1_MC_REFRESH_CYC_reg                                              (*((volatile unsigned int*)DC1_MC_REFRESH_CYC_reg))
#define  DC1_MC_REFRESH_CYC_ref_cyc_cnt_shift                                    (0)
#define  DC1_MC_REFRESH_CYC_ref_cyc_cnt_mask                                     (0xFFFFFFFF)
#define  DC1_MC_REFRESH_CYC_ref_cyc_cnt(data)                                    (0xFFFFFFFF&(data))
#define  DC1_MC_REFRESH_CYC_get_ref_cyc_cnt(data)                                (0xFFFFFFFF&(data))

#define  DC1_MC_MC_MESTRA_0                                                     0x18008E20
#define  DC1_MC_MC_MESTRA_0_reg_addr                                             "0xB8008E20"
#define  DC1_MC_MC_MESTRA_0_reg                                                  0xB8008E20
#define  DC1_MC_MC_MESTRA_0_inst_addr                                            "0x007D"
#define  set_DC1_MC_MC_MESTRA_0_reg(data)                                        (*((volatile unsigned int*)DC1_MC_MC_MESTRA_0_reg)=data)
#define  get_DC1_MC_MC_MESTRA_0_reg                                              (*((volatile unsigned int*)DC1_MC_MC_MESTRA_0_reg))
#define  DC1_MC_MC_MESTRA_0_mes_mem_cmp_id_shift                                 (16)
#define  DC1_MC_MC_MESTRA_0_mes_mem_cmp_dir_shift                                (8)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_adr_shift                               (3)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_rw_shift                                (2)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_id_shift                                (1)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_en_shift                                (0)
#define  DC1_MC_MC_MESTRA_0_mes_mem_cmp_id_mask                                  (0x00FF0000)
#define  DC1_MC_MC_MESTRA_0_mes_mem_cmp_dir_mask                                 (0x00000100)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_adr_mask                                (0x00000008)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_rw_mask                                 (0x00000004)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_id_mask                                 (0x00000002)
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_en_mask                                 (0x00000001)
#define  DC1_MC_MC_MESTRA_0_mes_mem_cmp_id(data)                                 (0x00FF0000&((data)<<16))
#define  DC1_MC_MC_MESTRA_0_mes_mem_cmp_dir(data)                                (0x00000100&((data)<<8))
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_adr(data)                               (0x00000008&((data)<<3))
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_rw(data)                                (0x00000004&((data)<<2))
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_id(data)                                (0x00000002&((data)<<1))
#define  DC1_MC_MC_MESTRA_0_mes_mem_tras_en(data)                                (0x00000001&(data))
#define  DC1_MC_MC_MESTRA_0_get_mes_mem_cmp_id(data)                             ((0x00FF0000&(data))>>16)
#define  DC1_MC_MC_MESTRA_0_get_mes_mem_cmp_dir(data)                            ((0x00000100&(data))>>8)
#define  DC1_MC_MC_MESTRA_0_get_mes_mem_tras_adr(data)                           ((0x00000008&(data))>>3)
#define  DC1_MC_MC_MESTRA_0_get_mes_mem_tras_rw(data)                            ((0x00000004&(data))>>2)
#define  DC1_MC_MC_MESTRA_0_get_mes_mem_tras_id(data)                            ((0x00000002&(data))>>1)
#define  DC1_MC_MC_MESTRA_0_get_mes_mem_tras_en(data)                            (0x00000001&(data))

#define  DC1_MC_MC_MESTRA_1                                                     0x18008E24
#define  DC1_MC_MC_MESTRA_1_reg_addr                                             "0xB8008E24"
#define  DC1_MC_MC_MESTRA_1_reg                                                  0xB8008E24
#define  DC1_MC_MC_MESTRA_1_inst_addr                                            "0x007E"
#define  set_DC1_MC_MC_MESTRA_1_reg(data)                                        (*((volatile unsigned int*)DC1_MC_MC_MESTRA_1_reg)=data)
#define  get_DC1_MC_MC_MESTRA_1_reg                                              (*((volatile unsigned int*)DC1_MC_MC_MESTRA_1_reg))
#define  DC1_MC_MC_MESTRA_1_mes_cmp_addr_shift                                   (3)
#define  DC1_MC_MC_MESTRA_1_mes_cmp_addr_mask                                    (0xFFFFFFF8)
#define  DC1_MC_MC_MESTRA_1_mes_cmp_addr(data)                                   (0xFFFFFFF8&((data)<<3))
#define  DC1_MC_MC_MESTRA_1_get_mes_cmp_addr(data)                               ((0xFFFFFFF8&(data))>>3)

#define  DC1_MC_MC_MESTRA_2                                                     0x18008E28
#define  DC1_MC_MC_MESTRA_2_reg_addr                                             "0xB8008E28"
#define  DC1_MC_MC_MESTRA_2_reg                                                  0xB8008E28
#define  DC1_MC_MC_MESTRA_2_inst_addr                                            "0x007F"
#define  set_DC1_MC_MC_MESTRA_2_reg(data)                                        (*((volatile unsigned int*)DC1_MC_MC_MESTRA_2_reg)=data)
#define  get_DC1_MC_MC_MESTRA_2_reg                                              (*((volatile unsigned int*)DC1_MC_MC_MESTRA_2_reg))
#define  DC1_MC_MC_MESTRA_2_mes_cmp_addr_mask_shift                              (3)
#define  DC1_MC_MC_MESTRA_2_mes_cmp_addr_mask_mask                               (0xFFFFFFF8)
#define  DC1_MC_MC_MESTRA_2_mes_cmp_addr_mask(data)                              (0xFFFFFFF8&((data)<<3))
#define  DC1_MC_MC_MESTRA_2_get_mes_cmp_addr_mask(data)                          ((0xFFFFFFF8&(data))>>3)

#define  DC1_MC_ADR20_TOGL                                                      0x18008EC0
#define  DC1_MC_ADR20_TOGL_reg_addr                                              "0xB8008EC0"
#define  DC1_MC_ADR20_TOGL_reg                                                   0xB8008EC0
#define  DC1_MC_ADR20_TOGL_inst_addr                                             "0x0080"
#define  set_DC1_MC_ADR20_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR20_TOGL_reg)=data)
#define  get_DC1_MC_ADR20_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR20_TOGL_reg))
#define  DC1_MC_ADR20_TOGL_adr20_togl_shift                                      (0)
#define  DC1_MC_ADR20_TOGL_adr20_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR20_TOGL_adr20_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR20_TOGL_get_adr20_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR21_TOGL                                                      0x18008EC4
#define  DC1_MC_ADR21_TOGL_reg_addr                                              "0xB8008EC4"
#define  DC1_MC_ADR21_TOGL_reg                                                   0xB8008EC4
#define  DC1_MC_ADR21_TOGL_inst_addr                                             "0x0081"
#define  set_DC1_MC_ADR21_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR21_TOGL_reg)=data)
#define  get_DC1_MC_ADR21_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR21_TOGL_reg))
#define  DC1_MC_ADR21_TOGL_adr21_togl_shift                                      (0)
#define  DC1_MC_ADR21_TOGL_adr21_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR21_TOGL_adr21_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR21_TOGL_get_adr21_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR22_TOGL                                                      0x18008EC8
#define  DC1_MC_ADR22_TOGL_reg_addr                                              "0xB8008EC8"
#define  DC1_MC_ADR22_TOGL_reg                                                   0xB8008EC8
#define  DC1_MC_ADR22_TOGL_inst_addr                                             "0x0082"
#define  set_DC1_MC_ADR22_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR22_TOGL_reg)=data)
#define  get_DC1_MC_ADR22_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR22_TOGL_reg))
#define  DC1_MC_ADR22_TOGL_adr22_togl_shift                                      (0)
#define  DC1_MC_ADR22_TOGL_adr22_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR22_TOGL_adr22_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR22_TOGL_get_adr22_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR23_TOGL                                                      0x18008ECC
#define  DC1_MC_ADR23_TOGL_reg_addr                                              "0xB8008ECC"
#define  DC1_MC_ADR23_TOGL_reg                                                   0xB8008ECC
#define  DC1_MC_ADR23_TOGL_inst_addr                                             "0x0083"
#define  set_DC1_MC_ADR23_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR23_TOGL_reg)=data)
#define  get_DC1_MC_ADR23_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR23_TOGL_reg))
#define  DC1_MC_ADR23_TOGL_adr23_togl_shift                                      (0)
#define  DC1_MC_ADR23_TOGL_adr23_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR23_TOGL_adr23_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR23_TOGL_get_adr23_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR24_TOGL                                                      0x18008ED0
#define  DC1_MC_ADR24_TOGL_reg_addr                                              "0xB8008ED0"
#define  DC1_MC_ADR24_TOGL_reg                                                   0xB8008ED0
#define  DC1_MC_ADR24_TOGL_inst_addr                                             "0x0084"
#define  set_DC1_MC_ADR24_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR24_TOGL_reg)=data)
#define  get_DC1_MC_ADR24_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR24_TOGL_reg))
#define  DC1_MC_ADR24_TOGL_adr24_togl_shift                                      (0)
#define  DC1_MC_ADR24_TOGL_adr24_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR24_TOGL_adr24_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR24_TOGL_get_adr24_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR25_TOGL                                                      0x18008ED4
#define  DC1_MC_ADR25_TOGL_reg_addr                                              "0xB8008ED4"
#define  DC1_MC_ADR25_TOGL_reg                                                   0xB8008ED4
#define  DC1_MC_ADR25_TOGL_inst_addr                                             "0x0085"
#define  set_DC1_MC_ADR25_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR25_TOGL_reg)=data)
#define  get_DC1_MC_ADR25_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR25_TOGL_reg))
#define  DC1_MC_ADR25_TOGL_adr25_togl_shift                                      (0)
#define  DC1_MC_ADR25_TOGL_adr25_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR25_TOGL_adr25_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR25_TOGL_get_adr25_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR26_TOGL                                                      0x18008ED8
#define  DC1_MC_ADR26_TOGL_reg_addr                                              "0xB8008ED8"
#define  DC1_MC_ADR26_TOGL_reg                                                   0xB8008ED8
#define  DC1_MC_ADR26_TOGL_inst_addr                                             "0x0086"
#define  set_DC1_MC_ADR26_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR26_TOGL_reg)=data)
#define  get_DC1_MC_ADR26_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR26_TOGL_reg))
#define  DC1_MC_ADR26_TOGL_adr26_togl_shift                                      (0)
#define  DC1_MC_ADR26_TOGL_adr26_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR26_TOGL_adr26_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR26_TOGL_get_adr26_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR27_TOGL                                                      0x18008EDC
#define  DC1_MC_ADR27_TOGL_reg_addr                                              "0xB8008EDC"
#define  DC1_MC_ADR27_TOGL_reg                                                   0xB8008EDC
#define  DC1_MC_ADR27_TOGL_inst_addr                                             "0x0087"
#define  set_DC1_MC_ADR27_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR27_TOGL_reg)=data)
#define  get_DC1_MC_ADR27_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR27_TOGL_reg))
#define  DC1_MC_ADR27_TOGL_adr27_togl_shift                                      (0)
#define  DC1_MC_ADR27_TOGL_adr27_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR27_TOGL_adr27_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR27_TOGL_get_adr27_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR28_TOGL                                                      0x18008EE0
#define  DC1_MC_ADR28_TOGL_reg_addr                                              "0xB8008EE0"
#define  DC1_MC_ADR28_TOGL_reg                                                   0xB8008EE0
#define  DC1_MC_ADR28_TOGL_inst_addr                                             "0x0088"
#define  set_DC1_MC_ADR28_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR28_TOGL_reg)=data)
#define  get_DC1_MC_ADR28_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR28_TOGL_reg))
#define  DC1_MC_ADR28_TOGL_adr28_togl_shift                                      (0)
#define  DC1_MC_ADR28_TOGL_adr28_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR28_TOGL_adr28_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR28_TOGL_get_adr28_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR29_TOGL                                                      0x18008EE4
#define  DC1_MC_ADR29_TOGL_reg_addr                                              "0xB8008EE4"
#define  DC1_MC_ADR29_TOGL_reg                                                   0xB8008EE4
#define  DC1_MC_ADR29_TOGL_inst_addr                                             "0x0089"
#define  set_DC1_MC_ADR29_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR29_TOGL_reg)=data)
#define  get_DC1_MC_ADR29_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR29_TOGL_reg))
#define  DC1_MC_ADR29_TOGL_adr29_togl_shift                                      (0)
#define  DC1_MC_ADR29_TOGL_adr29_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR29_TOGL_adr29_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR29_TOGL_get_adr29_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR30_TOGL                                                      0x18008EE8
#define  DC1_MC_ADR30_TOGL_reg_addr                                              "0xB8008EE8"
#define  DC1_MC_ADR30_TOGL_reg                                                   0xB8008EE8
#define  DC1_MC_ADR30_TOGL_inst_addr                                             "0x008A"
#define  set_DC1_MC_ADR30_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR30_TOGL_reg)=data)
#define  get_DC1_MC_ADR30_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR30_TOGL_reg))
#define  DC1_MC_ADR30_TOGL_adr30_togl_shift                                      (0)
#define  DC1_MC_ADR30_TOGL_adr30_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR30_TOGL_adr30_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR30_TOGL_get_adr30_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_ADR31_TOGL                                                      0x18008EEC
#define  DC1_MC_ADR31_TOGL_reg_addr                                              "0xB8008EEC"
#define  DC1_MC_ADR31_TOGL_reg                                                   0xB8008EEC
#define  DC1_MC_ADR31_TOGL_inst_addr                                             "0x008B"
#define  set_DC1_MC_ADR31_TOGL_reg(data)                                         (*((volatile unsigned int*)DC1_MC_ADR31_TOGL_reg)=data)
#define  get_DC1_MC_ADR31_TOGL_reg                                               (*((volatile unsigned int*)DC1_MC_ADR31_TOGL_reg))
#define  DC1_MC_ADR31_TOGL_adr31_togl_shift                                      (0)
#define  DC1_MC_ADR31_TOGL_adr31_togl_mask                                       (0x1FFFFFFF)
#define  DC1_MC_ADR31_TOGL_adr31_togl(data)                                      (0x1FFFFFFF&(data))
#define  DC1_MC_ADR31_TOGL_get_adr31_togl(data)                                  (0x1FFFFFFF&(data))

#define  DC1_MC_Qos_ctl_0                                                       0x18008A00
#define  DC1_MC_Qos_ctl_0_reg_addr                                               "0xB8008A00"
#define  DC1_MC_Qos_ctl_0_reg                                                    0xB8008A00
#define  DC1_MC_Qos_ctl_0_inst_addr                                              "0x008C"
#define  set_DC1_MC_Qos_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_0_reg)=data)
#define  get_DC1_MC_Qos_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_0_reg))
#define  DC1_MC_Qos_ctl_0_hi_priority_id6_en_shift                               (22)
#define  DC1_MC_Qos_ctl_0_hi_priority_id3_en_shift                               (19)
#define  DC1_MC_Qos_ctl_0_hi_priority_id2_en_shift                               (18)
#define  DC1_MC_Qos_ctl_0_hi_priority_id1_en_shift                               (17)
#define  DC1_MC_Qos_ctl_0_hi_priority_id0_en_shift                               (16)
#define  DC1_MC_Qos_ctl_0_dis_tracking_gp1_id_en_shift                           (15)
#define  DC1_MC_Qos_ctl_0_dis_tracking_gp0_id_en_shift                           (14)
#define  DC1_MC_Qos_ctl_0_dis_tracking_id0_en_shift                              (13)
#define  DC1_MC_Qos_ctl_0_dis_tracking_id1_en_shift                              (12)
#define  DC1_MC_Qos_ctl_0_ch_ref_bl_gt_sel_shift                                 (11)
#define  DC1_MC_Qos_ctl_0_ch_un_match_id_pg_wt_shift                             (10)
#define  DC1_MC_Qos_ctl_0_ch_tag_tracking_shift                                  (9)
#define  DC1_MC_Qos_ctl_0_ch_dir_cont_chg_sel_shift                              (8)
#define  DC1_MC_Qos_ctl_0_ch_parser_cmd_limt_sel_shift                           (7)
#define  DC1_MC_Qos_ctl_0_ch_dir_short_dly_en_shift                              (6)
#define  DC1_MC_Qos_ctl_0_ch_dir_cont_bl_mode_shift                              (4)
#define  DC1_MC_Qos_ctl_0_tracking_sel_shift                                     (3)
#define  DC1_MC_Qos_ctl_0_bank_wr_sel_shift                                      (2)
#define  DC1_MC_Qos_ctl_0_channel_id_weight_en_shift                             (1)
#define  DC1_MC_Qos_ctl_0_channel_rw_weight_en_shift                             (0)
#define  DC1_MC_Qos_ctl_0_hi_priority_id6_en_mask                                (0x00400000)
#define  DC1_MC_Qos_ctl_0_hi_priority_id3_en_mask                                (0x00080000)
#define  DC1_MC_Qos_ctl_0_hi_priority_id2_en_mask                                (0x00040000)
#define  DC1_MC_Qos_ctl_0_hi_priority_id1_en_mask                                (0x00020000)
#define  DC1_MC_Qos_ctl_0_hi_priority_id0_en_mask                                (0x00010000)
#define  DC1_MC_Qos_ctl_0_dis_tracking_gp1_id_en_mask                            (0x00008000)
#define  DC1_MC_Qos_ctl_0_dis_tracking_gp0_id_en_mask                            (0x00004000)
#define  DC1_MC_Qos_ctl_0_dis_tracking_id0_en_mask                               (0x00002000)
#define  DC1_MC_Qos_ctl_0_dis_tracking_id1_en_mask                               (0x00001000)
#define  DC1_MC_Qos_ctl_0_ch_ref_bl_gt_sel_mask                                  (0x00000800)
#define  DC1_MC_Qos_ctl_0_ch_un_match_id_pg_wt_mask                              (0x00000400)
#define  DC1_MC_Qos_ctl_0_ch_tag_tracking_mask                                   (0x00000200)
#define  DC1_MC_Qos_ctl_0_ch_dir_cont_chg_sel_mask                               (0x00000100)
#define  DC1_MC_Qos_ctl_0_ch_parser_cmd_limt_sel_mask                            (0x00000080)
#define  DC1_MC_Qos_ctl_0_ch_dir_short_dly_en_mask                               (0x00000040)
#define  DC1_MC_Qos_ctl_0_ch_dir_cont_bl_mode_mask                               (0x00000030)
#define  DC1_MC_Qos_ctl_0_tracking_sel_mask                                      (0x00000008)
#define  DC1_MC_Qos_ctl_0_bank_wr_sel_mask                                       (0x00000004)
#define  DC1_MC_Qos_ctl_0_channel_id_weight_en_mask                              (0x00000002)
#define  DC1_MC_Qos_ctl_0_channel_rw_weight_en_mask                              (0x00000001)
#define  DC1_MC_Qos_ctl_0_hi_priority_id6_en(data)                               (0x00400000&((data)<<22))
#define  DC1_MC_Qos_ctl_0_hi_priority_id3_en(data)                               (0x00080000&((data)<<19))
#define  DC1_MC_Qos_ctl_0_hi_priority_id2_en(data)                               (0x00040000&((data)<<18))
#define  DC1_MC_Qos_ctl_0_hi_priority_id1_en(data)                               (0x00020000&((data)<<17))
#define  DC1_MC_Qos_ctl_0_hi_priority_id0_en(data)                               (0x00010000&((data)<<16))
#define  DC1_MC_Qos_ctl_0_dis_tracking_gp1_id_en(data)                           (0x00008000&((data)<<15))
#define  DC1_MC_Qos_ctl_0_dis_tracking_gp0_id_en(data)                           (0x00004000&((data)<<14))
#define  DC1_MC_Qos_ctl_0_dis_tracking_id0_en(data)                              (0x00002000&((data)<<13))
#define  DC1_MC_Qos_ctl_0_dis_tracking_id1_en(data)                              (0x00001000&((data)<<12))
#define  DC1_MC_Qos_ctl_0_ch_ref_bl_gt_sel(data)                                 (0x00000800&((data)<<11))
#define  DC1_MC_Qos_ctl_0_ch_un_match_id_pg_wt(data)                             (0x00000400&((data)<<10))
#define  DC1_MC_Qos_ctl_0_ch_tag_tracking(data)                                  (0x00000200&((data)<<9))
#define  DC1_MC_Qos_ctl_0_ch_dir_cont_chg_sel(data)                              (0x00000100&((data)<<8))
#define  DC1_MC_Qos_ctl_0_ch_parser_cmd_limt_sel(data)                           (0x00000080&((data)<<7))
#define  DC1_MC_Qos_ctl_0_ch_dir_short_dly_en(data)                              (0x00000040&((data)<<6))
#define  DC1_MC_Qos_ctl_0_ch_dir_cont_bl_mode(data)                              (0x00000030&((data)<<4))
#define  DC1_MC_Qos_ctl_0_tracking_sel(data)                                     (0x00000008&((data)<<3))
#define  DC1_MC_Qos_ctl_0_bank_wr_sel(data)                                      (0x00000004&((data)<<2))
#define  DC1_MC_Qos_ctl_0_channel_id_weight_en(data)                             (0x00000002&((data)<<1))
#define  DC1_MC_Qos_ctl_0_channel_rw_weight_en(data)                             (0x00000001&(data))
#define  DC1_MC_Qos_ctl_0_get_hi_priority_id6_en(data)                           ((0x00400000&(data))>>22)
#define  DC1_MC_Qos_ctl_0_get_hi_priority_id3_en(data)                           ((0x00080000&(data))>>19)
#define  DC1_MC_Qos_ctl_0_get_hi_priority_id2_en(data)                           ((0x00040000&(data))>>18)
#define  DC1_MC_Qos_ctl_0_get_hi_priority_id1_en(data)                           ((0x00020000&(data))>>17)
#define  DC1_MC_Qos_ctl_0_get_hi_priority_id0_en(data)                           ((0x00010000&(data))>>16)
#define  DC1_MC_Qos_ctl_0_get_dis_tracking_gp1_id_en(data)                       ((0x00008000&(data))>>15)
#define  DC1_MC_Qos_ctl_0_get_dis_tracking_gp0_id_en(data)                       ((0x00004000&(data))>>14)
#define  DC1_MC_Qos_ctl_0_get_dis_tracking_id0_en(data)                          ((0x00002000&(data))>>13)
#define  DC1_MC_Qos_ctl_0_get_dis_tracking_id1_en(data)                          ((0x00001000&(data))>>12)
#define  DC1_MC_Qos_ctl_0_get_ch_ref_bl_gt_sel(data)                             ((0x00000800&(data))>>11)
#define  DC1_MC_Qos_ctl_0_get_ch_un_match_id_pg_wt(data)                         ((0x00000400&(data))>>10)
#define  DC1_MC_Qos_ctl_0_get_ch_tag_tracking(data)                              ((0x00000200&(data))>>9)
#define  DC1_MC_Qos_ctl_0_get_ch_dir_cont_chg_sel(data)                          ((0x00000100&(data))>>8)
#define  DC1_MC_Qos_ctl_0_get_ch_parser_cmd_limt_sel(data)                       ((0x00000080&(data))>>7)
#define  DC1_MC_Qos_ctl_0_get_ch_dir_short_dly_en(data)                          ((0x00000040&(data))>>6)
#define  DC1_MC_Qos_ctl_0_get_ch_dir_cont_bl_mode(data)                          ((0x00000030&(data))>>4)
#define  DC1_MC_Qos_ctl_0_get_tracking_sel(data)                                 ((0x00000008&(data))>>3)
#define  DC1_MC_Qos_ctl_0_get_bank_wr_sel(data)                                  ((0x00000004&(data))>>2)
#define  DC1_MC_Qos_ctl_0_get_channel_id_weight_en(data)                         ((0x00000002&(data))>>1)
#define  DC1_MC_Qos_ctl_0_get_channel_rw_weight_en(data)                         (0x00000001&(data))

#define  DC1_MC_Qos_ctl_1                                                       0x18008A10
#define  DC1_MC_Qos_ctl_1_reg_addr                                               "0xB8008A10"
#define  DC1_MC_Qos_ctl_1_reg                                                    0xB8008A10
#define  DC1_MC_Qos_ctl_1_inst_addr                                              "0x008D"
#define  set_DC1_MC_Qos_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_1_reg)=data)
#define  get_DC1_MC_Qos_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_1_reg))
#define  DC1_MC_Qos_ctl_1_hi_priority_id3_shift                                  (24)
#define  DC1_MC_Qos_ctl_1_hi_priority_id2_shift                                  (16)
#define  DC1_MC_Qos_ctl_1_hi_priority_id1_shift                                  (8)
#define  DC1_MC_Qos_ctl_1_hi_priority_id0_shift                                  (0)
#define  DC1_MC_Qos_ctl_1_hi_priority_id3_mask                                   (0xFF000000)
#define  DC1_MC_Qos_ctl_1_hi_priority_id2_mask                                   (0x00FF0000)
#define  DC1_MC_Qos_ctl_1_hi_priority_id1_mask                                   (0x0000FF00)
#define  DC1_MC_Qos_ctl_1_hi_priority_id0_mask                                   (0x000000FF)
#define  DC1_MC_Qos_ctl_1_hi_priority_id3(data)                                  (0xFF000000&((data)<<24))
#define  DC1_MC_Qos_ctl_1_hi_priority_id2(data)                                  (0x00FF0000&((data)<<16))
#define  DC1_MC_Qos_ctl_1_hi_priority_id1(data)                                  (0x0000FF00&((data)<<8))
#define  DC1_MC_Qos_ctl_1_hi_priority_id0(data)                                  (0x000000FF&(data))
#define  DC1_MC_Qos_ctl_1_get_hi_priority_id3(data)                              ((0xFF000000&(data))>>24)
#define  DC1_MC_Qos_ctl_1_get_hi_priority_id2(data)                              ((0x00FF0000&(data))>>16)
#define  DC1_MC_Qos_ctl_1_get_hi_priority_id1(data)                              ((0x0000FF00&(data))>>8)
#define  DC1_MC_Qos_ctl_1_get_hi_priority_id0(data)                              (0x000000FF&(data))

#define  DC1_MC_Qos_ctl_2                                                       0x18008A14
#define  DC1_MC_Qos_ctl_2_reg_addr                                               "0xB8008A14"
#define  DC1_MC_Qos_ctl_2_reg                                                    0xB8008A14
#define  DC1_MC_Qos_ctl_2_inst_addr                                              "0x008E"
#define  set_DC1_MC_Qos_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_2_reg)=data)
#define  get_DC1_MC_Qos_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_2_reg))
#define  DC1_MC_Qos_ctl_2_hi_priority_mask_id6_shift                             (24)
#define  DC1_MC_Qos_ctl_2_hi_priority_id6_shift                                  (16)
#define  DC1_MC_Qos_ctl_2_hi_priority_mask_id6_mask                              (0xFF000000)
#define  DC1_MC_Qos_ctl_2_hi_priority_id6_mask                                   (0x00FF0000)
#define  DC1_MC_Qos_ctl_2_hi_priority_mask_id6(data)                             (0xFF000000&((data)<<24))
#define  DC1_MC_Qos_ctl_2_hi_priority_id6(data)                                  (0x00FF0000&((data)<<16))
#define  DC1_MC_Qos_ctl_2_get_hi_priority_mask_id6(data)                         ((0xFF000000&(data))>>24)
#define  DC1_MC_Qos_ctl_2_get_hi_priority_id6(data)                              ((0x00FF0000&(data))>>16)

#define  DC1_MC_Qos_ctl_3                                                       0x18008A18
#define  DC1_MC_Qos_ctl_3_reg_addr                                               "0xB8008A18"
#define  DC1_MC_Qos_ctl_3_reg                                                    0xB8008A18
#define  DC1_MC_Qos_ctl_3_inst_addr                                              "0x008F"
#define  set_DC1_MC_Qos_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_3_reg)=data)
#define  get_DC1_MC_Qos_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_3_reg))
#define  DC1_MC_Qos_ctl_3_ch_dir_max_bl_shift                                    (20)
#define  DC1_MC_Qos_ctl_3_ch_dir_max_bl_mask                                     (0xFFF00000)
#define  DC1_MC_Qos_ctl_3_ch_dir_max_bl(data)                                    (0xFFF00000&((data)<<20))
#define  DC1_MC_Qos_ctl_3_get_ch_dir_max_bl(data)                                ((0xFFF00000&(data))>>20)

#define  DC1_MC_Qos_ctl_4                                                       0x18008A1C
#define  DC1_MC_Qos_ctl_4_reg_addr                                               "0xB8008A1C"
#define  DC1_MC_Qos_ctl_4_reg                                                    0xB8008A1C
#define  DC1_MC_Qos_ctl_4_inst_addr                                              "0x0090"
#define  set_DC1_MC_Qos_ctl_4_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_4_reg)=data)
#define  get_DC1_MC_Qos_ctl_4_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_4_reg))
#define  DC1_MC_Qos_ctl_4_total_rw_bl_low_bound_2_shift                          (16)
#define  DC1_MC_Qos_ctl_4_total_rw_bl_low_bound_2_mask                           (0x1FFF0000)
#define  DC1_MC_Qos_ctl_4_total_rw_bl_low_bound_2(data)                          (0x1FFF0000&((data)<<16))
#define  DC1_MC_Qos_ctl_4_get_total_rw_bl_low_bound_2(data)                      ((0x1FFF0000&(data))>>16)

#define  DC1_MC_Qos_ctl_5                                                       0x18008A20
#define  DC1_MC_Qos_ctl_5_reg_addr                                               "0xB8008A20"
#define  DC1_MC_Qos_ctl_5_reg                                                    0xB8008A20
#define  DC1_MC_Qos_ctl_5_inst_addr                                              "0x0091"
#define  set_DC1_MC_Qos_ctl_5_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_5_reg)=data)
#define  get_DC1_MC_Qos_ctl_5_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_5_reg))
#define  DC1_MC_Qos_ctl_5_total_rw_bl_low_bound_w_shift                          (16)
#define  DC1_MC_Qos_ctl_5_total_rw_bl_low_bound_r_shift                          (0)
#define  DC1_MC_Qos_ctl_5_total_rw_bl_low_bound_w_mask                           (0x1FFF0000)
#define  DC1_MC_Qos_ctl_5_total_rw_bl_low_bound_r_mask                           (0x00001FFF)
#define  DC1_MC_Qos_ctl_5_total_rw_bl_low_bound_w(data)                          (0x1FFF0000&((data)<<16))
#define  DC1_MC_Qos_ctl_5_total_rw_bl_low_bound_r(data)                          (0x00001FFF&(data))
#define  DC1_MC_Qos_ctl_5_get_total_rw_bl_low_bound_w(data)                      ((0x1FFF0000&(data))>>16)
#define  DC1_MC_Qos_ctl_5_get_total_rw_bl_low_bound_r(data)                      (0x00001FFF&(data))

#define  DC1_MC_Qos_ctl_6                                                       0x18008A24
#define  DC1_MC_Qos_ctl_6_reg_addr                                               "0xB8008A24"
#define  DC1_MC_Qos_ctl_6_reg                                                    0xB8008A24
#define  DC1_MC_Qos_ctl_6_inst_addr                                              "0x0092"
#define  set_DC1_MC_Qos_ctl_6_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_6_reg)=data)
#define  get_DC1_MC_Qos_ctl_6_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_6_reg))
#define  DC1_MC_Qos_ctl_6_long_bl_thr_shift                                      (16)
#define  DC1_MC_Qos_ctl_6_short_rw_ps_bl_thr_shift                               (8)
#define  DC1_MC_Qos_ctl_6_short_rw_bl_thr_shift                                  (0)
#define  DC1_MC_Qos_ctl_6_long_bl_thr_mask                                       (0x003F0000)
#define  DC1_MC_Qos_ctl_6_short_rw_ps_bl_thr_mask                                (0x00001F00)
#define  DC1_MC_Qos_ctl_6_short_rw_bl_thr_mask                                   (0x000000FF)
#define  DC1_MC_Qos_ctl_6_long_bl_thr(data)                                      (0x003F0000&((data)<<16))
#define  DC1_MC_Qos_ctl_6_short_rw_ps_bl_thr(data)                               (0x00001F00&((data)<<8))
#define  DC1_MC_Qos_ctl_6_short_rw_bl_thr(data)                                  (0x000000FF&(data))
#define  DC1_MC_Qos_ctl_6_get_long_bl_thr(data)                                  ((0x003F0000&(data))>>16)
#define  DC1_MC_Qos_ctl_6_get_short_rw_ps_bl_thr(data)                           ((0x00001F00&(data))>>8)
#define  DC1_MC_Qos_ctl_6_get_short_rw_bl_thr(data)                              (0x000000FF&(data))

#define  DC1_MC_Qos_ctl_7                                                       0x18008A28
#define  DC1_MC_Qos_ctl_7_reg_addr                                               "0xB8008A28"
#define  DC1_MC_Qos_ctl_7_reg                                                    0xB8008A28
#define  DC1_MC_Qos_ctl_7_inst_addr                                              "0x0093"
#define  set_DC1_MC_Qos_ctl_7_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_7_reg)=data)
#define  get_DC1_MC_Qos_ctl_7_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_7_reg))
#define  DC1_MC_Qos_ctl_7_ref_mask_dir_shift                                     (14)
#define  DC1_MC_Qos_ctl_7_ref_mask_urg2_ch_shift                                 (8)
#define  DC1_MC_Qos_ctl_7_ref_mask_id3_en_shift                                  (7)
#define  DC1_MC_Qos_ctl_7_ref_mask_id2_en_shift                                  (6)
#define  DC1_MC_Qos_ctl_7_ref_mask_id1_en_shift                                  (5)
#define  DC1_MC_Qos_ctl_7_ref_mask_id0_en_shift                                  (4)
#define  DC1_MC_Qos_ctl_7_ref_mask_ch_shift                                      (1)
#define  DC1_MC_Qos_ctl_7_ch_ahead_en_shift                                      (0)
#define  DC1_MC_Qos_ctl_7_ref_mask_dir_mask                                      (0x0000C000)
#define  DC1_MC_Qos_ctl_7_ref_mask_urg2_ch_mask                                  (0x00003F00)
#define  DC1_MC_Qos_ctl_7_ref_mask_id3_en_mask                                   (0x00000080)
#define  DC1_MC_Qos_ctl_7_ref_mask_id2_en_mask                                   (0x00000040)
#define  DC1_MC_Qos_ctl_7_ref_mask_id1_en_mask                                   (0x00000020)
#define  DC1_MC_Qos_ctl_7_ref_mask_id0_en_mask                                   (0x00000010)
#define  DC1_MC_Qos_ctl_7_ref_mask_ch_mask                                       (0x0000000E)
#define  DC1_MC_Qos_ctl_7_ch_ahead_en_mask                                       (0x00000001)
#define  DC1_MC_Qos_ctl_7_ref_mask_dir(data)                                     (0x0000C000&((data)<<14))
#define  DC1_MC_Qos_ctl_7_ref_mask_urg2_ch(data)                                 (0x00003F00&((data)<<8))
#define  DC1_MC_Qos_ctl_7_ref_mask_id3_en(data)                                  (0x00000080&((data)<<7))
#define  DC1_MC_Qos_ctl_7_ref_mask_id2_en(data)                                  (0x00000040&((data)<<6))
#define  DC1_MC_Qos_ctl_7_ref_mask_id1_en(data)                                  (0x00000020&((data)<<5))
#define  DC1_MC_Qos_ctl_7_ref_mask_id0_en(data)                                  (0x00000010&((data)<<4))
#define  DC1_MC_Qos_ctl_7_ref_mask_ch(data)                                      (0x0000000E&((data)<<1))
#define  DC1_MC_Qos_ctl_7_ch_ahead_en(data)                                      (0x00000001&(data))
#define  DC1_MC_Qos_ctl_7_get_ref_mask_dir(data)                                 ((0x0000C000&(data))>>14)
#define  DC1_MC_Qos_ctl_7_get_ref_mask_urg2_ch(data)                             ((0x00003F00&(data))>>8)
#define  DC1_MC_Qos_ctl_7_get_ref_mask_id3_en(data)                              ((0x00000080&(data))>>7)
#define  DC1_MC_Qos_ctl_7_get_ref_mask_id2_en(data)                              ((0x00000040&(data))>>6)
#define  DC1_MC_Qos_ctl_7_get_ref_mask_id1_en(data)                              ((0x00000020&(data))>>5)
#define  DC1_MC_Qos_ctl_7_get_ref_mask_id0_en(data)                              ((0x00000010&(data))>>4)
#define  DC1_MC_Qos_ctl_7_get_ref_mask_ch(data)                                  ((0x0000000E&(data))>>1)
#define  DC1_MC_Qos_ctl_7_get_ch_ahead_en(data)                                  (0x00000001&(data))

#define  DC1_MC_Qos_ctl_8                                                       0x18008A2C
#define  DC1_MC_Qos_ctl_8_reg_addr                                               "0xB8008A2C"
#define  DC1_MC_Qos_ctl_8_reg                                                    0xB8008A2C
#define  DC1_MC_Qos_ctl_8_inst_addr                                              "0x0094"
#define  set_DC1_MC_Qos_ctl_8_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_8_reg)=data)
#define  get_DC1_MC_Qos_ctl_8_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_8_reg))
#define  DC1_MC_Qos_ctl_8_ch_parser_total_bl_max_shift                           (16)
#define  DC1_MC_Qos_ctl_8_ch_ddr4_balance_cmd_max_shift                          (4)
#define  DC1_MC_Qos_ctl_8_ch_parser_cmd_max_shift                                (0)
#define  DC1_MC_Qos_ctl_8_ch_parser_total_bl_max_mask                            (0x03FF0000)
#define  DC1_MC_Qos_ctl_8_ch_ddr4_balance_cmd_max_mask                           (0x000000F0)
#define  DC1_MC_Qos_ctl_8_ch_parser_cmd_max_mask                                 (0x0000000F)
#define  DC1_MC_Qos_ctl_8_ch_parser_total_bl_max(data)                           (0x03FF0000&((data)<<16))
#define  DC1_MC_Qos_ctl_8_ch_ddr4_balance_cmd_max(data)                          (0x000000F0&((data)<<4))
#define  DC1_MC_Qos_ctl_8_ch_parser_cmd_max(data)                                (0x0000000F&(data))
#define  DC1_MC_Qos_ctl_8_get_ch_parser_total_bl_max(data)                       ((0x03FF0000&(data))>>16)
#define  DC1_MC_Qos_ctl_8_get_ch_ddr4_balance_cmd_max(data)                      ((0x000000F0&(data))>>4)
#define  DC1_MC_Qos_ctl_8_get_ch_parser_cmd_max(data)                            (0x0000000F&(data))

#define  DC1_MC_Qos_ctl_9                                                       0x18008A30
#define  DC1_MC_Qos_ctl_9_reg_addr                                               "0xB8008A30"
#define  DC1_MC_Qos_ctl_9_reg                                                    0xB8008A30
#define  DC1_MC_Qos_ctl_9_inst_addr                                              "0x0095"
#define  set_DC1_MC_Qos_ctl_9_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_ctl_9_reg)=data)
#define  get_DC1_MC_Qos_ctl_9_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_ctl_9_reg))
#define  DC1_MC_Qos_ctl_9_ddr4_balance_bl_thr_shift                              (16)
#define  DC1_MC_Qos_ctl_9_ddr4_db_tracking_shift                                 (2)
#define  DC1_MC_Qos_ctl_9_ddr4_fast_con_shift                                    (1)
#define  DC1_MC_Qos_ctl_9_ddr4_balance_con_shift                                 (0)
#define  DC1_MC_Qos_ctl_9_ddr4_balance_bl_thr_mask                               (0x003F0000)
#define  DC1_MC_Qos_ctl_9_ddr4_db_tracking_mask                                  (0x00000004)
#define  DC1_MC_Qos_ctl_9_ddr4_fast_con_mask                                     (0x00000002)
#define  DC1_MC_Qos_ctl_9_ddr4_balance_con_mask                                  (0x00000001)
#define  DC1_MC_Qos_ctl_9_ddr4_balance_bl_thr(data)                              (0x003F0000&((data)<<16))
#define  DC1_MC_Qos_ctl_9_ddr4_db_tracking(data)                                 (0x00000004&((data)<<2))
#define  DC1_MC_Qos_ctl_9_ddr4_fast_con(data)                                    (0x00000002&((data)<<1))
#define  DC1_MC_Qos_ctl_9_ddr4_balance_con(data)                                 (0x00000001&(data))
#define  DC1_MC_Qos_ctl_9_get_ddr4_balance_bl_thr(data)                          ((0x003F0000&(data))>>16)
#define  DC1_MC_Qos_ctl_9_get_ddr4_db_tracking(data)                             ((0x00000004&(data))>>2)
#define  DC1_MC_Qos_ctl_9_get_ddr4_fast_con(data)                                ((0x00000002&(data))>>1)
#define  DC1_MC_Qos_ctl_9_get_ddr4_balance_con(data)                             (0x00000001&(data))

#define  DC1_MC_Qos_ctl_11                                                      0x18008A34
#define  DC1_MC_Qos_ctl_11_reg_addr                                              "0xB8008A34"
#define  DC1_MC_Qos_ctl_11_reg                                                   0xB8008A34
#define  DC1_MC_Qos_ctl_11_inst_addr                                             "0x0096"
#define  set_DC1_MC_Qos_ctl_11_reg(data)                                         (*((volatile unsigned int*)DC1_MC_Qos_ctl_11_reg)=data)
#define  get_DC1_MC_Qos_ctl_11_reg                                               (*((volatile unsigned int*)DC1_MC_Qos_ctl_11_reg))
#define  DC1_MC_Qos_ctl_11_ch_max_id_bl_thr_shift                                (16)
#define  DC1_MC_Qos_ctl_11_ch_max_id_bl_en_shift                                 (0)
#define  DC1_MC_Qos_ctl_11_ch_max_id_bl_thr_mask                                 (0x03FF0000)
#define  DC1_MC_Qos_ctl_11_ch_max_id_bl_en_mask                                  (0x00000001)
#define  DC1_MC_Qos_ctl_11_ch_max_id_bl_thr(data)                                (0x03FF0000&((data)<<16))
#define  DC1_MC_Qos_ctl_11_ch_max_id_bl_en(data)                                 (0x00000001&(data))
#define  DC1_MC_Qos_ctl_11_get_ch_max_id_bl_thr(data)                            ((0x03FF0000&(data))>>16)
#define  DC1_MC_Qos_ctl_11_get_ch_max_id_bl_en(data)                             (0x00000001&(data))

#define  DC1_MC_Qos_ctl_12                                                      0x18008A3C
#define  DC1_MC_Qos_ctl_12_reg_addr                                              "0xB8008A3C"
#define  DC1_MC_Qos_ctl_12_reg                                                   0xB8008A3C
#define  DC1_MC_Qos_ctl_12_inst_addr                                             "0x0097"
#define  set_DC1_MC_Qos_ctl_12_reg(data)                                         (*((volatile unsigned int*)DC1_MC_Qos_ctl_12_reg)=data)
#define  get_DC1_MC_Qos_ctl_12_reg                                               (*((volatile unsigned int*)DC1_MC_Qos_ctl_12_reg))
#define  DC1_MC_Qos_ctl_12_dis_tracking_gp0_id_shift                             (20)
#define  DC1_MC_Qos_ctl_12_dis_tracking_gp1_id_shift                             (16)
#define  DC1_MC_Qos_ctl_12_dis_tracking_id1_shift                                (8)
#define  DC1_MC_Qos_ctl_12_dis_tracking_id0_shift                                (0)
#define  DC1_MC_Qos_ctl_12_dis_tracking_gp0_id_mask                              (0x00F00000)
#define  DC1_MC_Qos_ctl_12_dis_tracking_gp1_id_mask                              (0x000F0000)
#define  DC1_MC_Qos_ctl_12_dis_tracking_id1_mask                                 (0x0000FF00)
#define  DC1_MC_Qos_ctl_12_dis_tracking_id0_mask                                 (0x000000FF)
#define  DC1_MC_Qos_ctl_12_dis_tracking_gp0_id(data)                             (0x00F00000&((data)<<20))
#define  DC1_MC_Qos_ctl_12_dis_tracking_gp1_id(data)                             (0x000F0000&((data)<<16))
#define  DC1_MC_Qos_ctl_12_dis_tracking_id1(data)                                (0x0000FF00&((data)<<8))
#define  DC1_MC_Qos_ctl_12_dis_tracking_id0(data)                                (0x000000FF&(data))
#define  DC1_MC_Qos_ctl_12_get_dis_tracking_gp0_id(data)                         ((0x00F00000&(data))>>20)
#define  DC1_MC_Qos_ctl_12_get_dis_tracking_gp1_id(data)                         ((0x000F0000&(data))>>16)
#define  DC1_MC_Qos_ctl_12_get_dis_tracking_id1(data)                            ((0x0000FF00&(data))>>8)
#define  DC1_MC_Qos_ctl_12_get_dis_tracking_id0(data)                            (0x000000FF&(data))

#define  DC1_MC_ch0_ctl_0                                                       0x18008A40
#define  DC1_MC_ch0_ctl_0_reg_addr                                               "0xB8008A40"
#define  DC1_MC_ch0_ctl_0_reg                                                    0xB8008A40
#define  DC1_MC_ch0_ctl_0_inst_addr                                              "0x0098"
#define  set_DC1_MC_ch0_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch0_ctl_0_reg)=data)
#define  get_DC1_MC_ch0_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_ch0_ctl_0_reg))
#define  DC1_MC_ch0_ctl_0_ch0_page_insert_mapping_shift                          (24)
#define  DC1_MC_ch0_ctl_0_ch0_bank_free_mapping_shift                            (20)
#define  DC1_MC_ch0_ctl_0_ch0_dir_insert_mapping_shift                           (16)
#define  DC1_MC_ch0_ctl_0_ch0_acc_trigger_sel_shift                              (11)
#define  DC1_MC_ch0_ctl_0_ch0_acc_mode_shift                                     (10)
#define  DC1_MC_ch0_ctl_0_ch0_acc_clr_mode_shift                                 (8)
#define  DC1_MC_ch0_ctl_0_ch0_urg2_wr_brk_en_shift                               (7)
#define  DC1_MC_ch0_ctl_0_ch0_urg2_strong_en_shift                               (4)
#define  DC1_MC_ch0_ctl_0_ch0_oldest_timer_2_en_shift                            (3)
#define  DC1_MC_ch0_ctl_0_ch0_oldest_timer_en_shift                              (2)
#define  DC1_MC_ch0_ctl_0_ch0_oldest_cmd_select_en_shift                         (1)
#define  DC1_MC_ch0_ctl_0_ch0_page_insert_mapping_mask                           (0x0F000000)
#define  DC1_MC_ch0_ctl_0_ch0_bank_free_mapping_mask                             (0x00F00000)
#define  DC1_MC_ch0_ctl_0_ch0_dir_insert_mapping_mask                            (0x000F0000)
#define  DC1_MC_ch0_ctl_0_ch0_acc_trigger_sel_mask                               (0x00000800)
#define  DC1_MC_ch0_ctl_0_ch0_acc_mode_mask                                      (0x00000400)
#define  DC1_MC_ch0_ctl_0_ch0_acc_clr_mode_mask                                  (0x00000300)
#define  DC1_MC_ch0_ctl_0_ch0_urg2_wr_brk_en_mask                                (0x00000080)
#define  DC1_MC_ch0_ctl_0_ch0_urg2_strong_en_mask                                (0x00000010)
#define  DC1_MC_ch0_ctl_0_ch0_oldest_timer_2_en_mask                             (0x00000008)
#define  DC1_MC_ch0_ctl_0_ch0_oldest_timer_en_mask                               (0x00000004)
#define  DC1_MC_ch0_ctl_0_ch0_oldest_cmd_select_en_mask                          (0x00000002)
#define  DC1_MC_ch0_ctl_0_ch0_page_insert_mapping(data)                          (0x0F000000&((data)<<24))
#define  DC1_MC_ch0_ctl_0_ch0_bank_free_mapping(data)                            (0x00F00000&((data)<<20))
#define  DC1_MC_ch0_ctl_0_ch0_dir_insert_mapping(data)                           (0x000F0000&((data)<<16))
#define  DC1_MC_ch0_ctl_0_ch0_acc_trigger_sel(data)                              (0x00000800&((data)<<11))
#define  DC1_MC_ch0_ctl_0_ch0_acc_mode(data)                                     (0x00000400&((data)<<10))
#define  DC1_MC_ch0_ctl_0_ch0_acc_clr_mode(data)                                 (0x00000300&((data)<<8))
#define  DC1_MC_ch0_ctl_0_ch0_urg2_wr_brk_en(data)                               (0x00000080&((data)<<7))
#define  DC1_MC_ch0_ctl_0_ch0_urg2_strong_en(data)                               (0x00000010&((data)<<4))
#define  DC1_MC_ch0_ctl_0_ch0_oldest_timer_2_en(data)                            (0x00000008&((data)<<3))
#define  DC1_MC_ch0_ctl_0_ch0_oldest_timer_en(data)                              (0x00000004&((data)<<2))
#define  DC1_MC_ch0_ctl_0_ch0_oldest_cmd_select_en(data)                         (0x00000002&((data)<<1))
#define  DC1_MC_ch0_ctl_0_get_ch0_page_insert_mapping(data)                      ((0x0F000000&(data))>>24)
#define  DC1_MC_ch0_ctl_0_get_ch0_bank_free_mapping(data)                        ((0x00F00000&(data))>>20)
#define  DC1_MC_ch0_ctl_0_get_ch0_dir_insert_mapping(data)                       ((0x000F0000&(data))>>16)
#define  DC1_MC_ch0_ctl_0_get_ch0_acc_trigger_sel(data)                          ((0x00000800&(data))>>11)
#define  DC1_MC_ch0_ctl_0_get_ch0_acc_mode(data)                                 ((0x00000400&(data))>>10)
#define  DC1_MC_ch0_ctl_0_get_ch0_acc_clr_mode(data)                             ((0x00000300&(data))>>8)
#define  DC1_MC_ch0_ctl_0_get_ch0_urg2_wr_brk_en(data)                           ((0x00000080&(data))>>7)
#define  DC1_MC_ch0_ctl_0_get_ch0_urg2_strong_en(data)                           ((0x00000010&(data))>>4)
#define  DC1_MC_ch0_ctl_0_get_ch0_oldest_timer_2_en(data)                        ((0x00000008&(data))>>3)
#define  DC1_MC_ch0_ctl_0_get_ch0_oldest_timer_en(data)                          ((0x00000004&(data))>>2)
#define  DC1_MC_ch0_ctl_0_get_ch0_oldest_cmd_select_en(data)                     ((0x00000002&(data))>>1)

#define  DC1_MC_ch0_ctl_1                                                       0x18008A44
#define  DC1_MC_ch0_ctl_1_reg_addr                                               "0xB8008A44"
#define  DC1_MC_ch0_ctl_1_reg                                                    0xB8008A44
#define  DC1_MC_ch0_ctl_1_inst_addr                                              "0x0099"
#define  set_DC1_MC_ch0_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch0_ctl_1_reg)=data)
#define  get_DC1_MC_ch0_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_ch0_ctl_1_reg))
#define  DC1_MC_ch0_ctl_1_ch0_quota_bw_ini_shift                                 (24)
#define  DC1_MC_ch0_ctl_1_ch0_bw_quota_max_shift                                 (8)
#define  DC1_MC_ch0_ctl_1_ch0_quota_bw_ini_mask                                  (0xFF000000)
#define  DC1_MC_ch0_ctl_1_ch0_bw_quota_max_mask                                  (0x0000FF00)
#define  DC1_MC_ch0_ctl_1_ch0_quota_bw_ini(data)                                 (0xFF000000&((data)<<24))
#define  DC1_MC_ch0_ctl_1_ch0_bw_quota_max(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_ch0_ctl_1_get_ch0_quota_bw_ini(data)                             ((0xFF000000&(data))>>24)
#define  DC1_MC_ch0_ctl_1_get_ch0_bw_quota_max(data)                             ((0x0000FF00&(data))>>8)

#define  DC1_MC_ch0_ctl_2                                                       0x18008A48
#define  DC1_MC_ch0_ctl_2_reg_addr                                               "0xB8008A48"
#define  DC1_MC_ch0_ctl_2_reg                                                    0xB8008A48
#define  DC1_MC_ch0_ctl_2_inst_addr                                              "0x009A"
#define  set_DC1_MC_ch0_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch0_ctl_2_reg)=data)
#define  get_DC1_MC_ch0_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_ch0_ctl_2_reg))
#define  DC1_MC_ch0_ctl_2_ch0_oldest_time_2_shift                                (20)
#define  DC1_MC_ch0_ctl_2_ch0_oldest_time_shift                                  (8)
#define  DC1_MC_ch0_ctl_2_ch0_bw_acc_unit_shift                                  (0)
#define  DC1_MC_ch0_ctl_2_ch0_oldest_time_2_mask                                 (0xFFF00000)
#define  DC1_MC_ch0_ctl_2_ch0_oldest_time_mask                                   (0x000FFF00)
#define  DC1_MC_ch0_ctl_2_ch0_bw_acc_unit_mask                                   (0x0000000F)
#define  DC1_MC_ch0_ctl_2_ch0_oldest_time_2(data)                                (0xFFF00000&((data)<<20))
#define  DC1_MC_ch0_ctl_2_ch0_oldest_time(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch0_ctl_2_ch0_bw_acc_unit(data)                                  (0x0000000F&(data))
#define  DC1_MC_ch0_ctl_2_get_ch0_oldest_time_2(data)                            ((0xFFF00000&(data))>>20)
#define  DC1_MC_ch0_ctl_2_get_ch0_oldest_time(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch0_ctl_2_get_ch0_bw_acc_unit(data)                              (0x0000000F&(data))

#define  DC1_MC_ch0_ctl_3                                                       0x18008A4C
#define  DC1_MC_ch0_ctl_3_reg_addr                                               "0xB8008A4C"
#define  DC1_MC_ch0_ctl_3_reg                                                    0xB8008A4C
#define  DC1_MC_ch0_ctl_3_inst_addr                                              "0x009B"
#define  set_DC1_MC_ch0_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch0_ctl_3_reg)=data)
#define  get_DC1_MC_ch0_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_ch0_ctl_3_reg))
#define  DC1_MC_ch0_ctl_3_ch0_cmd_extend_num_shift                               (28)
#define  DC1_MC_ch0_ctl_3_ch0_extend_bl_max_shift                                (20)
#define  DC1_MC_ch0_ctl_3_ch0_ostd_bl_max_shift                                  (8)
#define  DC1_MC_ch0_ctl_3_ch0_ostd_cmd_max_shift                                 (4)
#define  DC1_MC_ch0_ctl_3_ch0_outstand_en_shift                                  (0)
#define  DC1_MC_ch0_ctl_3_ch0_cmd_extend_num_mask                                (0xF0000000)
#define  DC1_MC_ch0_ctl_3_ch0_extend_bl_max_mask                                 (0x03F00000)
#define  DC1_MC_ch0_ctl_3_ch0_ostd_bl_max_mask                                   (0x000FFF00)
#define  DC1_MC_ch0_ctl_3_ch0_ostd_cmd_max_mask                                  (0x000000F0)
#define  DC1_MC_ch0_ctl_3_ch0_outstand_en_mask                                   (0x00000001)
#define  DC1_MC_ch0_ctl_3_ch0_cmd_extend_num(data)                               (0xF0000000&((data)<<28))
#define  DC1_MC_ch0_ctl_3_ch0_extend_bl_max(data)                                (0x03F00000&((data)<<20))
#define  DC1_MC_ch0_ctl_3_ch0_ostd_bl_max(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch0_ctl_3_ch0_ostd_cmd_max(data)                                 (0x000000F0&((data)<<4))
#define  DC1_MC_ch0_ctl_3_ch0_outstand_en(data)                                  (0x00000001&(data))
#define  DC1_MC_ch0_ctl_3_get_ch0_cmd_extend_num(data)                           ((0xF0000000&(data))>>28)
#define  DC1_MC_ch0_ctl_3_get_ch0_extend_bl_max(data)                            ((0x03F00000&(data))>>20)
#define  DC1_MC_ch0_ctl_3_get_ch0_ostd_bl_max(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch0_ctl_3_get_ch0_ostd_cmd_max(data)                             ((0x000000F0&(data))>>4)
#define  DC1_MC_ch0_ctl_3_get_ch0_outstand_en(data)                              (0x00000001&(data))

#define  DC1_MC_ch1_ctl_0                                                       0x18008A50
#define  DC1_MC_ch1_ctl_0_reg_addr                                               "0xB8008A50"
#define  DC1_MC_ch1_ctl_0_reg                                                    0xB8008A50
#define  DC1_MC_ch1_ctl_0_inst_addr                                              "0x009C"
#define  set_DC1_MC_ch1_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch1_ctl_0_reg)=data)
#define  get_DC1_MC_ch1_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_ch1_ctl_0_reg))
#define  DC1_MC_ch1_ctl_0_ch1_page_insert_mapping_shift                          (24)
#define  DC1_MC_ch1_ctl_0_ch1_bank_free_mapping_shift                            (20)
#define  DC1_MC_ch1_ctl_0_ch1_dir_insert_mapping_shift                           (16)
#define  DC1_MC_ch1_ctl_0_ch1_acc_trigger_sel_shift                              (11)
#define  DC1_MC_ch1_ctl_0_ch1_acc_mode_shift                                     (10)
#define  DC1_MC_ch1_ctl_0_ch1_acc_clr_mode_shift                                 (8)
#define  DC1_MC_ch1_ctl_0_ch1_urg2_wr_brk_en_shift                               (7)
#define  DC1_MC_ch1_ctl_0_ch1_urg2_strong_en_shift                               (4)
#define  DC1_MC_ch1_ctl_0_ch1_oldest_timer_2_en_shift                            (3)
#define  DC1_MC_ch1_ctl_0_ch1_oldest_timer_en_shift                              (2)
#define  DC1_MC_ch1_ctl_0_ch1_oldest_cmd_select_en_shift                         (1)
#define  DC1_MC_ch1_ctl_0_ch1_page_insert_mapping_mask                           (0x0F000000)
#define  DC1_MC_ch1_ctl_0_ch1_bank_free_mapping_mask                             (0x00F00000)
#define  DC1_MC_ch1_ctl_0_ch1_dir_insert_mapping_mask                            (0x000F0000)
#define  DC1_MC_ch1_ctl_0_ch1_acc_trigger_sel_mask                               (0x00000800)
#define  DC1_MC_ch1_ctl_0_ch1_acc_mode_mask                                      (0x00000400)
#define  DC1_MC_ch1_ctl_0_ch1_acc_clr_mode_mask                                  (0x00000300)
#define  DC1_MC_ch1_ctl_0_ch1_urg2_wr_brk_en_mask                                (0x00000080)
#define  DC1_MC_ch1_ctl_0_ch1_urg2_strong_en_mask                                (0x00000010)
#define  DC1_MC_ch1_ctl_0_ch1_oldest_timer_2_en_mask                             (0x00000008)
#define  DC1_MC_ch1_ctl_0_ch1_oldest_timer_en_mask                               (0x00000004)
#define  DC1_MC_ch1_ctl_0_ch1_oldest_cmd_select_en_mask                          (0x00000002)
#define  DC1_MC_ch1_ctl_0_ch1_page_insert_mapping(data)                          (0x0F000000&((data)<<24))
#define  DC1_MC_ch1_ctl_0_ch1_bank_free_mapping(data)                            (0x00F00000&((data)<<20))
#define  DC1_MC_ch1_ctl_0_ch1_dir_insert_mapping(data)                           (0x000F0000&((data)<<16))
#define  DC1_MC_ch1_ctl_0_ch1_acc_trigger_sel(data)                              (0x00000800&((data)<<11))
#define  DC1_MC_ch1_ctl_0_ch1_acc_mode(data)                                     (0x00000400&((data)<<10))
#define  DC1_MC_ch1_ctl_0_ch1_acc_clr_mode(data)                                 (0x00000300&((data)<<8))
#define  DC1_MC_ch1_ctl_0_ch1_urg2_wr_brk_en(data)                               (0x00000080&((data)<<7))
#define  DC1_MC_ch1_ctl_0_ch1_urg2_strong_en(data)                               (0x00000010&((data)<<4))
#define  DC1_MC_ch1_ctl_0_ch1_oldest_timer_2_en(data)                            (0x00000008&((data)<<3))
#define  DC1_MC_ch1_ctl_0_ch1_oldest_timer_en(data)                              (0x00000004&((data)<<2))
#define  DC1_MC_ch1_ctl_0_ch1_oldest_cmd_select_en(data)                         (0x00000002&((data)<<1))
#define  DC1_MC_ch1_ctl_0_get_ch1_page_insert_mapping(data)                      ((0x0F000000&(data))>>24)
#define  DC1_MC_ch1_ctl_0_get_ch1_bank_free_mapping(data)                        ((0x00F00000&(data))>>20)
#define  DC1_MC_ch1_ctl_0_get_ch1_dir_insert_mapping(data)                       ((0x000F0000&(data))>>16)
#define  DC1_MC_ch1_ctl_0_get_ch1_acc_trigger_sel(data)                          ((0x00000800&(data))>>11)
#define  DC1_MC_ch1_ctl_0_get_ch1_acc_mode(data)                                 ((0x00000400&(data))>>10)
#define  DC1_MC_ch1_ctl_0_get_ch1_acc_clr_mode(data)                             ((0x00000300&(data))>>8)
#define  DC1_MC_ch1_ctl_0_get_ch1_urg2_wr_brk_en(data)                           ((0x00000080&(data))>>7)
#define  DC1_MC_ch1_ctl_0_get_ch1_urg2_strong_en(data)                           ((0x00000010&(data))>>4)
#define  DC1_MC_ch1_ctl_0_get_ch1_oldest_timer_2_en(data)                        ((0x00000008&(data))>>3)
#define  DC1_MC_ch1_ctl_0_get_ch1_oldest_timer_en(data)                          ((0x00000004&(data))>>2)
#define  DC1_MC_ch1_ctl_0_get_ch1_oldest_cmd_select_en(data)                     ((0x00000002&(data))>>1)

#define  DC1_MC_ch1_ctl_1                                                       0x18008A54
#define  DC1_MC_ch1_ctl_1_reg_addr                                               "0xB8008A54"
#define  DC1_MC_ch1_ctl_1_reg                                                    0xB8008A54
#define  DC1_MC_ch1_ctl_1_inst_addr                                              "0x009D"
#define  set_DC1_MC_ch1_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch1_ctl_1_reg)=data)
#define  get_DC1_MC_ch1_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_ch1_ctl_1_reg))
#define  DC1_MC_ch1_ctl_1_ch1_quota_bw_ini_shift                                 (24)
#define  DC1_MC_ch1_ctl_1_ch1_bw_quota_max_shift                                 (8)
#define  DC1_MC_ch1_ctl_1_ch1_quota_bw_ini_mask                                  (0xFF000000)
#define  DC1_MC_ch1_ctl_1_ch1_bw_quota_max_mask                                  (0x0000FF00)
#define  DC1_MC_ch1_ctl_1_ch1_quota_bw_ini(data)                                 (0xFF000000&((data)<<24))
#define  DC1_MC_ch1_ctl_1_ch1_bw_quota_max(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_ch1_ctl_1_get_ch1_quota_bw_ini(data)                             ((0xFF000000&(data))>>24)
#define  DC1_MC_ch1_ctl_1_get_ch1_bw_quota_max(data)                             ((0x0000FF00&(data))>>8)

#define  DC1_MC_ch1_ctl_2                                                       0x18008A58
#define  DC1_MC_ch1_ctl_2_reg_addr                                               "0xB8008A58"
#define  DC1_MC_ch1_ctl_2_reg                                                    0xB8008A58
#define  DC1_MC_ch1_ctl_2_inst_addr                                              "0x009E"
#define  set_DC1_MC_ch1_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch1_ctl_2_reg)=data)
#define  get_DC1_MC_ch1_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_ch1_ctl_2_reg))
#define  DC1_MC_ch1_ctl_2_ch1_oldest_time_2_shift                                (20)
#define  DC1_MC_ch1_ctl_2_ch1_oldest_time_shift                                  (8)
#define  DC1_MC_ch1_ctl_2_ch1_bw_acc_unit_shift                                  (0)
#define  DC1_MC_ch1_ctl_2_ch1_oldest_time_2_mask                                 (0xFFF00000)
#define  DC1_MC_ch1_ctl_2_ch1_oldest_time_mask                                   (0x000FFF00)
#define  DC1_MC_ch1_ctl_2_ch1_bw_acc_unit_mask                                   (0x0000000F)
#define  DC1_MC_ch1_ctl_2_ch1_oldest_time_2(data)                                (0xFFF00000&((data)<<20))
#define  DC1_MC_ch1_ctl_2_ch1_oldest_time(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch1_ctl_2_ch1_bw_acc_unit(data)                                  (0x0000000F&(data))
#define  DC1_MC_ch1_ctl_2_get_ch1_oldest_time_2(data)                            ((0xFFF00000&(data))>>20)
#define  DC1_MC_ch1_ctl_2_get_ch1_oldest_time(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch1_ctl_2_get_ch1_bw_acc_unit(data)                              (0x0000000F&(data))

#define  DC1_MC_ch1_ctl_3                                                       0x18008A5C
#define  DC1_MC_ch1_ctl_3_reg_addr                                               "0xB8008A5C"
#define  DC1_MC_ch1_ctl_3_reg                                                    0xB8008A5C
#define  DC1_MC_ch1_ctl_3_inst_addr                                              "0x009F"
#define  set_DC1_MC_ch1_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch1_ctl_3_reg)=data)
#define  get_DC1_MC_ch1_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_ch1_ctl_3_reg))
#define  DC1_MC_ch1_ctl_3_ch1_cmd_extend_num_shift                               (28)
#define  DC1_MC_ch1_ctl_3_ch1_extend_bl_max_shift                                (20)
#define  DC1_MC_ch1_ctl_3_ch1_ostd_bl_max_shift                                  (8)
#define  DC1_MC_ch1_ctl_3_ch1_ostd_cmd_max_shift                                 (4)
#define  DC1_MC_ch1_ctl_3_ch1_outstand_en_shift                                  (0)
#define  DC1_MC_ch1_ctl_3_ch1_cmd_extend_num_mask                                (0xF0000000)
#define  DC1_MC_ch1_ctl_3_ch1_extend_bl_max_mask                                 (0x03F00000)
#define  DC1_MC_ch1_ctl_3_ch1_ostd_bl_max_mask                                   (0x000FFF00)
#define  DC1_MC_ch1_ctl_3_ch1_ostd_cmd_max_mask                                  (0x000000F0)
#define  DC1_MC_ch1_ctl_3_ch1_outstand_en_mask                                   (0x00000001)
#define  DC1_MC_ch1_ctl_3_ch1_cmd_extend_num(data)                               (0xF0000000&((data)<<28))
#define  DC1_MC_ch1_ctl_3_ch1_extend_bl_max(data)                                (0x03F00000&((data)<<20))
#define  DC1_MC_ch1_ctl_3_ch1_ostd_bl_max(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch1_ctl_3_ch1_ostd_cmd_max(data)                                 (0x000000F0&((data)<<4))
#define  DC1_MC_ch1_ctl_3_ch1_outstand_en(data)                                  (0x00000001&(data))
#define  DC1_MC_ch1_ctl_3_get_ch1_cmd_extend_num(data)                           ((0xF0000000&(data))>>28)
#define  DC1_MC_ch1_ctl_3_get_ch1_extend_bl_max(data)                            ((0x03F00000&(data))>>20)
#define  DC1_MC_ch1_ctl_3_get_ch1_ostd_bl_max(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch1_ctl_3_get_ch1_ostd_cmd_max(data)                             ((0x000000F0&(data))>>4)
#define  DC1_MC_ch1_ctl_3_get_ch1_outstand_en(data)                              (0x00000001&(data))

#define  DC1_MC_ch2_ctl_0                                                       0x18008A60
#define  DC1_MC_ch2_ctl_0_reg_addr                                               "0xB8008A60"
#define  DC1_MC_ch2_ctl_0_reg                                                    0xB8008A60
#define  DC1_MC_ch2_ctl_0_inst_addr                                              "0x00A0"
#define  set_DC1_MC_ch2_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch2_ctl_0_reg)=data)
#define  get_DC1_MC_ch2_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_ch2_ctl_0_reg))
#define  DC1_MC_ch2_ctl_0_ch2_page_insert_mapping_shift                          (24)
#define  DC1_MC_ch2_ctl_0_ch2_bank_free_mapping_shift                            (20)
#define  DC1_MC_ch2_ctl_0_ch2_dir_insert_mapping_shift                           (16)
#define  DC1_MC_ch2_ctl_0_ch2_acc_trigger_sel_shift                              (11)
#define  DC1_MC_ch2_ctl_0_ch2_acc_mode_shift                                     (10)
#define  DC1_MC_ch2_ctl_0_ch2_acc_clr_mode_shift                                 (8)
#define  DC1_MC_ch2_ctl_0_ch2_urg2_wr_brk_en_shift                               (7)
#define  DC1_MC_ch2_ctl_0_ch2_urg2_strong_en_shift                               (4)
#define  DC1_MC_ch2_ctl_0_ch2_oldest_timer_2_en_shift                            (3)
#define  DC1_MC_ch2_ctl_0_ch2_oldest_timer_en_shift                              (2)
#define  DC1_MC_ch2_ctl_0_ch2_oldest_cmd_select_en_shift                         (1)
#define  DC1_MC_ch2_ctl_0_ch2_page_insert_mapping_mask                           (0x0F000000)
#define  DC1_MC_ch2_ctl_0_ch2_bank_free_mapping_mask                             (0x00F00000)
#define  DC1_MC_ch2_ctl_0_ch2_dir_insert_mapping_mask                            (0x000F0000)
#define  DC1_MC_ch2_ctl_0_ch2_acc_trigger_sel_mask                               (0x00000800)
#define  DC1_MC_ch2_ctl_0_ch2_acc_mode_mask                                      (0x00000400)
#define  DC1_MC_ch2_ctl_0_ch2_acc_clr_mode_mask                                  (0x00000300)
#define  DC1_MC_ch2_ctl_0_ch2_urg2_wr_brk_en_mask                                (0x00000080)
#define  DC1_MC_ch2_ctl_0_ch2_urg2_strong_en_mask                                (0x00000010)
#define  DC1_MC_ch2_ctl_0_ch2_oldest_timer_2_en_mask                             (0x00000008)
#define  DC1_MC_ch2_ctl_0_ch2_oldest_timer_en_mask                               (0x00000004)
#define  DC1_MC_ch2_ctl_0_ch2_oldest_cmd_select_en_mask                          (0x00000002)
#define  DC1_MC_ch2_ctl_0_ch2_page_insert_mapping(data)                          (0x0F000000&((data)<<24))
#define  DC1_MC_ch2_ctl_0_ch2_bank_free_mapping(data)                            (0x00F00000&((data)<<20))
#define  DC1_MC_ch2_ctl_0_ch2_dir_insert_mapping(data)                           (0x000F0000&((data)<<16))
#define  DC1_MC_ch2_ctl_0_ch2_acc_trigger_sel(data)                              (0x00000800&((data)<<11))
#define  DC1_MC_ch2_ctl_0_ch2_acc_mode(data)                                     (0x00000400&((data)<<10))
#define  DC1_MC_ch2_ctl_0_ch2_acc_clr_mode(data)                                 (0x00000300&((data)<<8))
#define  DC1_MC_ch2_ctl_0_ch2_urg2_wr_brk_en(data)                               (0x00000080&((data)<<7))
#define  DC1_MC_ch2_ctl_0_ch2_urg2_strong_en(data)                               (0x00000010&((data)<<4))
#define  DC1_MC_ch2_ctl_0_ch2_oldest_timer_2_en(data)                            (0x00000008&((data)<<3))
#define  DC1_MC_ch2_ctl_0_ch2_oldest_timer_en(data)                              (0x00000004&((data)<<2))
#define  DC1_MC_ch2_ctl_0_ch2_oldest_cmd_select_en(data)                         (0x00000002&((data)<<1))
#define  DC1_MC_ch2_ctl_0_get_ch2_page_insert_mapping(data)                      ((0x0F000000&(data))>>24)
#define  DC1_MC_ch2_ctl_0_get_ch2_bank_free_mapping(data)                        ((0x00F00000&(data))>>20)
#define  DC1_MC_ch2_ctl_0_get_ch2_dir_insert_mapping(data)                       ((0x000F0000&(data))>>16)
#define  DC1_MC_ch2_ctl_0_get_ch2_acc_trigger_sel(data)                          ((0x00000800&(data))>>11)
#define  DC1_MC_ch2_ctl_0_get_ch2_acc_mode(data)                                 ((0x00000400&(data))>>10)
#define  DC1_MC_ch2_ctl_0_get_ch2_acc_clr_mode(data)                             ((0x00000300&(data))>>8)
#define  DC1_MC_ch2_ctl_0_get_ch2_urg2_wr_brk_en(data)                           ((0x00000080&(data))>>7)
#define  DC1_MC_ch2_ctl_0_get_ch2_urg2_strong_en(data)                           ((0x00000010&(data))>>4)
#define  DC1_MC_ch2_ctl_0_get_ch2_oldest_timer_2_en(data)                        ((0x00000008&(data))>>3)
#define  DC1_MC_ch2_ctl_0_get_ch2_oldest_timer_en(data)                          ((0x00000004&(data))>>2)
#define  DC1_MC_ch2_ctl_0_get_ch2_oldest_cmd_select_en(data)                     ((0x00000002&(data))>>1)

#define  DC1_MC_ch2_ctl_1                                                       0x18008A64
#define  DC1_MC_ch2_ctl_1_reg_addr                                               "0xB8008A64"
#define  DC1_MC_ch2_ctl_1_reg                                                    0xB8008A64
#define  DC1_MC_ch2_ctl_1_inst_addr                                              "0x00A1"
#define  set_DC1_MC_ch2_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch2_ctl_1_reg)=data)
#define  get_DC1_MC_ch2_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_ch2_ctl_1_reg))
#define  DC1_MC_ch2_ctl_1_ch2_quota_bw_ini_shift                                 (24)
#define  DC1_MC_ch2_ctl_1_ch2_bw_quota_max_shift                                 (8)
#define  DC1_MC_ch2_ctl_1_ch2_quota_bw_ini_mask                                  (0xFF000000)
#define  DC1_MC_ch2_ctl_1_ch2_bw_quota_max_mask                                  (0x0000FF00)
#define  DC1_MC_ch2_ctl_1_ch2_quota_bw_ini(data)                                 (0xFF000000&((data)<<24))
#define  DC1_MC_ch2_ctl_1_ch2_bw_quota_max(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_ch2_ctl_1_get_ch2_quota_bw_ini(data)                             ((0xFF000000&(data))>>24)
#define  DC1_MC_ch2_ctl_1_get_ch2_bw_quota_max(data)                             ((0x0000FF00&(data))>>8)

#define  DC1_MC_ch2_ctl_2                                                       0x18008A68
#define  DC1_MC_ch2_ctl_2_reg_addr                                               "0xB8008A68"
#define  DC1_MC_ch2_ctl_2_reg                                                    0xB8008A68
#define  DC1_MC_ch2_ctl_2_inst_addr                                              "0x00A2"
#define  set_DC1_MC_ch2_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch2_ctl_2_reg)=data)
#define  get_DC1_MC_ch2_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_ch2_ctl_2_reg))
#define  DC1_MC_ch2_ctl_2_ch2_oldest_time_2_shift                                (20)
#define  DC1_MC_ch2_ctl_2_ch2_oldest_time_shift                                  (8)
#define  DC1_MC_ch2_ctl_2_ch2_bw_acc_unit_shift                                  (0)
#define  DC1_MC_ch2_ctl_2_ch2_oldest_time_2_mask                                 (0xFFF00000)
#define  DC1_MC_ch2_ctl_2_ch2_oldest_time_mask                                   (0x000FFF00)
#define  DC1_MC_ch2_ctl_2_ch2_bw_acc_unit_mask                                   (0x0000000F)
#define  DC1_MC_ch2_ctl_2_ch2_oldest_time_2(data)                                (0xFFF00000&((data)<<20))
#define  DC1_MC_ch2_ctl_2_ch2_oldest_time(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch2_ctl_2_ch2_bw_acc_unit(data)                                  (0x0000000F&(data))
#define  DC1_MC_ch2_ctl_2_get_ch2_oldest_time_2(data)                            ((0xFFF00000&(data))>>20)
#define  DC1_MC_ch2_ctl_2_get_ch2_oldest_time(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch2_ctl_2_get_ch2_bw_acc_unit(data)                              (0x0000000F&(data))

#define  DC1_MC_ch2_ctl_3                                                       0x18008A6C
#define  DC1_MC_ch2_ctl_3_reg_addr                                               "0xB8008A6C"
#define  DC1_MC_ch2_ctl_3_reg                                                    0xB8008A6C
#define  DC1_MC_ch2_ctl_3_inst_addr                                              "0x00A3"
#define  set_DC1_MC_ch2_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch2_ctl_3_reg)=data)
#define  get_DC1_MC_ch2_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_ch2_ctl_3_reg))
#define  DC1_MC_ch2_ctl_3_ch2_cmd_extend_num_shift                               (28)
#define  DC1_MC_ch2_ctl_3_ch2_extend_bl_max_shift                                (20)
#define  DC1_MC_ch2_ctl_3_ch2_ostd_bl_max_shift                                  (8)
#define  DC1_MC_ch2_ctl_3_ch2_ostd_cmd_max_shift                                 (4)
#define  DC1_MC_ch2_ctl_3_ch2_outstand_en_shift                                  (0)
#define  DC1_MC_ch2_ctl_3_ch2_cmd_extend_num_mask                                (0xF0000000)
#define  DC1_MC_ch2_ctl_3_ch2_extend_bl_max_mask                                 (0x03F00000)
#define  DC1_MC_ch2_ctl_3_ch2_ostd_bl_max_mask                                   (0x000FFF00)
#define  DC1_MC_ch2_ctl_3_ch2_ostd_cmd_max_mask                                  (0x000000F0)
#define  DC1_MC_ch2_ctl_3_ch2_outstand_en_mask                                   (0x00000001)
#define  DC1_MC_ch2_ctl_3_ch2_cmd_extend_num(data)                               (0xF0000000&((data)<<28))
#define  DC1_MC_ch2_ctl_3_ch2_extend_bl_max(data)                                (0x03F00000&((data)<<20))
#define  DC1_MC_ch2_ctl_3_ch2_ostd_bl_max(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch2_ctl_3_ch2_ostd_cmd_max(data)                                 (0x000000F0&((data)<<4))
#define  DC1_MC_ch2_ctl_3_ch2_outstand_en(data)                                  (0x00000001&(data))
#define  DC1_MC_ch2_ctl_3_get_ch2_cmd_extend_num(data)                           ((0xF0000000&(data))>>28)
#define  DC1_MC_ch2_ctl_3_get_ch2_extend_bl_max(data)                            ((0x03F00000&(data))>>20)
#define  DC1_MC_ch2_ctl_3_get_ch2_ostd_bl_max(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch2_ctl_3_get_ch2_ostd_cmd_max(data)                             ((0x000000F0&(data))>>4)
#define  DC1_MC_ch2_ctl_3_get_ch2_outstand_en(data)                              (0x00000001&(data))

#define  DC1_MC_ch3_ctl_0                                                       0x18008A70
#define  DC1_MC_ch3_ctl_0_reg_addr                                               "0xB8008A70"
#define  DC1_MC_ch3_ctl_0_reg                                                    0xB8008A70
#define  DC1_MC_ch3_ctl_0_inst_addr                                              "0x00A4"
#define  set_DC1_MC_ch3_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch3_ctl_0_reg)=data)
#define  get_DC1_MC_ch3_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_ch3_ctl_0_reg))
#define  DC1_MC_ch3_ctl_0_ch3_page_insert_mapping_shift                          (24)
#define  DC1_MC_ch3_ctl_0_ch3_bank_free_mapping_shift                            (20)
#define  DC1_MC_ch3_ctl_0_ch3_dir_insert_mapping_shift                           (16)
#define  DC1_MC_ch3_ctl_0_ch3_acc_trigger_sel_shift                              (11)
#define  DC1_MC_ch3_ctl_0_ch3_acc_mode_shift                                     (10)
#define  DC1_MC_ch3_ctl_0_ch3_acc_clr_mode_shift                                 (8)
#define  DC1_MC_ch3_ctl_0_ch3_urg2_wr_brk_en_shift                               (7)
#define  DC1_MC_ch3_ctl_0_ch3_urg2_strong_en_shift                               (4)
#define  DC1_MC_ch3_ctl_0_ch3_oldest_timer_2_en_shift                            (3)
#define  DC1_MC_ch3_ctl_0_ch3_oldest_timer_en_shift                              (2)
#define  DC1_MC_ch3_ctl_0_ch3_oldest_cmd_select_en_shift                         (1)
#define  DC1_MC_ch3_ctl_0_ch3_page_insert_mapping_mask                           (0x0F000000)
#define  DC1_MC_ch3_ctl_0_ch3_bank_free_mapping_mask                             (0x00F00000)
#define  DC1_MC_ch3_ctl_0_ch3_dir_insert_mapping_mask                            (0x000F0000)
#define  DC1_MC_ch3_ctl_0_ch3_acc_trigger_sel_mask                               (0x00000800)
#define  DC1_MC_ch3_ctl_0_ch3_acc_mode_mask                                      (0x00000400)
#define  DC1_MC_ch3_ctl_0_ch3_acc_clr_mode_mask                                  (0x00000300)
#define  DC1_MC_ch3_ctl_0_ch3_urg2_wr_brk_en_mask                                (0x00000080)
#define  DC1_MC_ch3_ctl_0_ch3_urg2_strong_en_mask                                (0x00000010)
#define  DC1_MC_ch3_ctl_0_ch3_oldest_timer_2_en_mask                             (0x00000008)
#define  DC1_MC_ch3_ctl_0_ch3_oldest_timer_en_mask                               (0x00000004)
#define  DC1_MC_ch3_ctl_0_ch3_oldest_cmd_select_en_mask                          (0x00000002)
#define  DC1_MC_ch3_ctl_0_ch3_page_insert_mapping(data)                          (0x0F000000&((data)<<24))
#define  DC1_MC_ch3_ctl_0_ch3_bank_free_mapping(data)                            (0x00F00000&((data)<<20))
#define  DC1_MC_ch3_ctl_0_ch3_dir_insert_mapping(data)                           (0x000F0000&((data)<<16))
#define  DC1_MC_ch3_ctl_0_ch3_acc_trigger_sel(data)                              (0x00000800&((data)<<11))
#define  DC1_MC_ch3_ctl_0_ch3_acc_mode(data)                                     (0x00000400&((data)<<10))
#define  DC1_MC_ch3_ctl_0_ch3_acc_clr_mode(data)                                 (0x00000300&((data)<<8))
#define  DC1_MC_ch3_ctl_0_ch3_urg2_wr_brk_en(data)                               (0x00000080&((data)<<7))
#define  DC1_MC_ch3_ctl_0_ch3_urg2_strong_en(data)                               (0x00000010&((data)<<4))
#define  DC1_MC_ch3_ctl_0_ch3_oldest_timer_2_en(data)                            (0x00000008&((data)<<3))
#define  DC1_MC_ch3_ctl_0_ch3_oldest_timer_en(data)                              (0x00000004&((data)<<2))
#define  DC1_MC_ch3_ctl_0_ch3_oldest_cmd_select_en(data)                         (0x00000002&((data)<<1))
#define  DC1_MC_ch3_ctl_0_get_ch3_page_insert_mapping(data)                      ((0x0F000000&(data))>>24)
#define  DC1_MC_ch3_ctl_0_get_ch3_bank_free_mapping(data)                        ((0x00F00000&(data))>>20)
#define  DC1_MC_ch3_ctl_0_get_ch3_dir_insert_mapping(data)                       ((0x000F0000&(data))>>16)
#define  DC1_MC_ch3_ctl_0_get_ch3_acc_trigger_sel(data)                          ((0x00000800&(data))>>11)
#define  DC1_MC_ch3_ctl_0_get_ch3_acc_mode(data)                                 ((0x00000400&(data))>>10)
#define  DC1_MC_ch3_ctl_0_get_ch3_acc_clr_mode(data)                             ((0x00000300&(data))>>8)
#define  DC1_MC_ch3_ctl_0_get_ch3_urg2_wr_brk_en(data)                           ((0x00000080&(data))>>7)
#define  DC1_MC_ch3_ctl_0_get_ch3_urg2_strong_en(data)                           ((0x00000010&(data))>>4)
#define  DC1_MC_ch3_ctl_0_get_ch3_oldest_timer_2_en(data)                        ((0x00000008&(data))>>3)
#define  DC1_MC_ch3_ctl_0_get_ch3_oldest_timer_en(data)                          ((0x00000004&(data))>>2)
#define  DC1_MC_ch3_ctl_0_get_ch3_oldest_cmd_select_en(data)                     ((0x00000002&(data))>>1)

#define  DC1_MC_ch3_ctl_1                                                       0x18008A74
#define  DC1_MC_ch3_ctl_1_reg_addr                                               "0xB8008A74"
#define  DC1_MC_ch3_ctl_1_reg                                                    0xB8008A74
#define  DC1_MC_ch3_ctl_1_inst_addr                                              "0x00A5"
#define  set_DC1_MC_ch3_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch3_ctl_1_reg)=data)
#define  get_DC1_MC_ch3_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_ch3_ctl_1_reg))
#define  DC1_MC_ch3_ctl_1_ch3_quota_bw_ini_shift                                 (24)
#define  DC1_MC_ch3_ctl_1_ch3_bw_quota_max_shift                                 (8)
#define  DC1_MC_ch3_ctl_1_ch3_quota_bw_ini_mask                                  (0xFF000000)
#define  DC1_MC_ch3_ctl_1_ch3_bw_quota_max_mask                                  (0x0000FF00)
#define  DC1_MC_ch3_ctl_1_ch3_quota_bw_ini(data)                                 (0xFF000000&((data)<<24))
#define  DC1_MC_ch3_ctl_1_ch3_bw_quota_max(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_ch3_ctl_1_get_ch3_quota_bw_ini(data)                             ((0xFF000000&(data))>>24)
#define  DC1_MC_ch3_ctl_1_get_ch3_bw_quota_max(data)                             ((0x0000FF00&(data))>>8)

#define  DC1_MC_ch3_ctl_2                                                       0x18008A78
#define  DC1_MC_ch3_ctl_2_reg_addr                                               "0xB8008A78"
#define  DC1_MC_ch3_ctl_2_reg                                                    0xB8008A78
#define  DC1_MC_ch3_ctl_2_inst_addr                                              "0x00A6"
#define  set_DC1_MC_ch3_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch3_ctl_2_reg)=data)
#define  get_DC1_MC_ch3_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_ch3_ctl_2_reg))
#define  DC1_MC_ch3_ctl_2_ch3_oldest_time_2_shift                                (20)
#define  DC1_MC_ch3_ctl_2_ch3_oldest_time_shift                                  (8)
#define  DC1_MC_ch3_ctl_2_ch3_bw_acc_unit_shift                                  (0)
#define  DC1_MC_ch3_ctl_2_ch3_oldest_time_2_mask                                 (0xFFF00000)
#define  DC1_MC_ch3_ctl_2_ch3_oldest_time_mask                                   (0x000FFF00)
#define  DC1_MC_ch3_ctl_2_ch3_bw_acc_unit_mask                                   (0x0000000F)
#define  DC1_MC_ch3_ctl_2_ch3_oldest_time_2(data)                                (0xFFF00000&((data)<<20))
#define  DC1_MC_ch3_ctl_2_ch3_oldest_time(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch3_ctl_2_ch3_bw_acc_unit(data)                                  (0x0000000F&(data))
#define  DC1_MC_ch3_ctl_2_get_ch3_oldest_time_2(data)                            ((0xFFF00000&(data))>>20)
#define  DC1_MC_ch3_ctl_2_get_ch3_oldest_time(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch3_ctl_2_get_ch3_bw_acc_unit(data)                              (0x0000000F&(data))

#define  DC1_MC_ch3_ctl_3                                                       0x18008A7C
#define  DC1_MC_ch3_ctl_3_reg_addr                                               "0xB8008A7C"
#define  DC1_MC_ch3_ctl_3_reg                                                    0xB8008A7C
#define  DC1_MC_ch3_ctl_3_inst_addr                                              "0x00A7"
#define  set_DC1_MC_ch3_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch3_ctl_3_reg)=data)
#define  get_DC1_MC_ch3_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_ch3_ctl_3_reg))
#define  DC1_MC_ch3_ctl_3_ch3_cmd_extend_num_shift                               (28)
#define  DC1_MC_ch3_ctl_3_ch3_extend_bl_max_shift                                (20)
#define  DC1_MC_ch3_ctl_3_ch3_ostd_bl_max_shift                                  (8)
#define  DC1_MC_ch3_ctl_3_ch3_ostd_cmd_max_shift                                 (4)
#define  DC1_MC_ch3_ctl_3_ch3_outstand_en_shift                                  (0)
#define  DC1_MC_ch3_ctl_3_ch3_cmd_extend_num_mask                                (0xF0000000)
#define  DC1_MC_ch3_ctl_3_ch3_extend_bl_max_mask                                 (0x03F00000)
#define  DC1_MC_ch3_ctl_3_ch3_ostd_bl_max_mask                                   (0x000FFF00)
#define  DC1_MC_ch3_ctl_3_ch3_ostd_cmd_max_mask                                  (0x000000F0)
#define  DC1_MC_ch3_ctl_3_ch3_outstand_en_mask                                   (0x00000001)
#define  DC1_MC_ch3_ctl_3_ch3_cmd_extend_num(data)                               (0xF0000000&((data)<<28))
#define  DC1_MC_ch3_ctl_3_ch3_extend_bl_max(data)                                (0x03F00000&((data)<<20))
#define  DC1_MC_ch3_ctl_3_ch3_ostd_bl_max(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch3_ctl_3_ch3_ostd_cmd_max(data)                                 (0x000000F0&((data)<<4))
#define  DC1_MC_ch3_ctl_3_ch3_outstand_en(data)                                  (0x00000001&(data))
#define  DC1_MC_ch3_ctl_3_get_ch3_cmd_extend_num(data)                           ((0xF0000000&(data))>>28)
#define  DC1_MC_ch3_ctl_3_get_ch3_extend_bl_max(data)                            ((0x03F00000&(data))>>20)
#define  DC1_MC_ch3_ctl_3_get_ch3_ostd_bl_max(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch3_ctl_3_get_ch3_ostd_cmd_max(data)                             ((0x000000F0&(data))>>4)
#define  DC1_MC_ch3_ctl_3_get_ch3_outstand_en(data)                              (0x00000001&(data))

#define  DC1_MC_ch4_ctl_0                                                       0x18008A80
#define  DC1_MC_ch4_ctl_0_reg_addr                                               "0xB8008A80"
#define  DC1_MC_ch4_ctl_0_reg                                                    0xB8008A80
#define  DC1_MC_ch4_ctl_0_inst_addr                                              "0x00A8"
#define  set_DC1_MC_ch4_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch4_ctl_0_reg)=data)
#define  get_DC1_MC_ch4_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_ch4_ctl_0_reg))
#define  DC1_MC_ch4_ctl_0_ch4_page_insert_mapping_shift                          (24)
#define  DC1_MC_ch4_ctl_0_ch4_bank_free_mapping_shift                            (20)
#define  DC1_MC_ch4_ctl_0_ch4_dir_insert_mapping_shift                           (16)
#define  DC1_MC_ch4_ctl_0_ch4_acc_trigger_sel_shift                              (11)
#define  DC1_MC_ch4_ctl_0_ch4_acc_mode_shift                                     (10)
#define  DC1_MC_ch4_ctl_0_ch4_acc_clr_mode_shift                                 (8)
#define  DC1_MC_ch4_ctl_0_ch4_urg2_wr_brk_en_shift                               (7)
#define  DC1_MC_ch4_ctl_0_ch4_urg2_strong_en_shift                               (4)
#define  DC1_MC_ch4_ctl_0_ch4_oldest_timer_2_en_shift                            (3)
#define  DC1_MC_ch4_ctl_0_ch4_oldest_timer_en_shift                              (2)
#define  DC1_MC_ch4_ctl_0_ch4_oldest_cmd_select_en_shift                         (1)
#define  DC1_MC_ch4_ctl_0_ch4_page_insert_mapping_mask                           (0x0F000000)
#define  DC1_MC_ch4_ctl_0_ch4_bank_free_mapping_mask                             (0x00F00000)
#define  DC1_MC_ch4_ctl_0_ch4_dir_insert_mapping_mask                            (0x000F0000)
#define  DC1_MC_ch4_ctl_0_ch4_acc_trigger_sel_mask                               (0x00000800)
#define  DC1_MC_ch4_ctl_0_ch4_acc_mode_mask                                      (0x00000400)
#define  DC1_MC_ch4_ctl_0_ch4_acc_clr_mode_mask                                  (0x00000300)
#define  DC1_MC_ch4_ctl_0_ch4_urg2_wr_brk_en_mask                                (0x00000080)
#define  DC1_MC_ch4_ctl_0_ch4_urg2_strong_en_mask                                (0x00000010)
#define  DC1_MC_ch4_ctl_0_ch4_oldest_timer_2_en_mask                             (0x00000008)
#define  DC1_MC_ch4_ctl_0_ch4_oldest_timer_en_mask                               (0x00000004)
#define  DC1_MC_ch4_ctl_0_ch4_oldest_cmd_select_en_mask                          (0x00000002)
#define  DC1_MC_ch4_ctl_0_ch4_page_insert_mapping(data)                          (0x0F000000&((data)<<24))
#define  DC1_MC_ch4_ctl_0_ch4_bank_free_mapping(data)                            (0x00F00000&((data)<<20))
#define  DC1_MC_ch4_ctl_0_ch4_dir_insert_mapping(data)                           (0x000F0000&((data)<<16))
#define  DC1_MC_ch4_ctl_0_ch4_acc_trigger_sel(data)                              (0x00000800&((data)<<11))
#define  DC1_MC_ch4_ctl_0_ch4_acc_mode(data)                                     (0x00000400&((data)<<10))
#define  DC1_MC_ch4_ctl_0_ch4_acc_clr_mode(data)                                 (0x00000300&((data)<<8))
#define  DC1_MC_ch4_ctl_0_ch4_urg2_wr_brk_en(data)                               (0x00000080&((data)<<7))
#define  DC1_MC_ch4_ctl_0_ch4_urg2_strong_en(data)                               (0x00000010&((data)<<4))
#define  DC1_MC_ch4_ctl_0_ch4_oldest_timer_2_en(data)                            (0x00000008&((data)<<3))
#define  DC1_MC_ch4_ctl_0_ch4_oldest_timer_en(data)                              (0x00000004&((data)<<2))
#define  DC1_MC_ch4_ctl_0_ch4_oldest_cmd_select_en(data)                         (0x00000002&((data)<<1))
#define  DC1_MC_ch4_ctl_0_get_ch4_page_insert_mapping(data)                      ((0x0F000000&(data))>>24)
#define  DC1_MC_ch4_ctl_0_get_ch4_bank_free_mapping(data)                        ((0x00F00000&(data))>>20)
#define  DC1_MC_ch4_ctl_0_get_ch4_dir_insert_mapping(data)                       ((0x000F0000&(data))>>16)
#define  DC1_MC_ch4_ctl_0_get_ch4_acc_trigger_sel(data)                          ((0x00000800&(data))>>11)
#define  DC1_MC_ch4_ctl_0_get_ch4_acc_mode(data)                                 ((0x00000400&(data))>>10)
#define  DC1_MC_ch4_ctl_0_get_ch4_acc_clr_mode(data)                             ((0x00000300&(data))>>8)
#define  DC1_MC_ch4_ctl_0_get_ch4_urg2_wr_brk_en(data)                           ((0x00000080&(data))>>7)
#define  DC1_MC_ch4_ctl_0_get_ch4_urg2_strong_en(data)                           ((0x00000010&(data))>>4)
#define  DC1_MC_ch4_ctl_0_get_ch4_oldest_timer_2_en(data)                        ((0x00000008&(data))>>3)
#define  DC1_MC_ch4_ctl_0_get_ch4_oldest_timer_en(data)                          ((0x00000004&(data))>>2)
#define  DC1_MC_ch4_ctl_0_get_ch4_oldest_cmd_select_en(data)                     ((0x00000002&(data))>>1)

#define  DC1_MC_ch4_ctl_1                                                       0x18008A84
#define  DC1_MC_ch4_ctl_1_reg_addr                                               "0xB8008A84"
#define  DC1_MC_ch4_ctl_1_reg                                                    0xB8008A84
#define  DC1_MC_ch4_ctl_1_inst_addr                                              "0x00A9"
#define  set_DC1_MC_ch4_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch4_ctl_1_reg)=data)
#define  get_DC1_MC_ch4_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_ch4_ctl_1_reg))
#define  DC1_MC_ch4_ctl_1_ch4_quota_bw_ini_shift                                 (24)
#define  DC1_MC_ch4_ctl_1_ch4_bw_quota_max_shift                                 (8)
#define  DC1_MC_ch4_ctl_1_ch4_quota_bw_ini_mask                                  (0xFF000000)
#define  DC1_MC_ch4_ctl_1_ch4_bw_quota_max_mask                                  (0x0000FF00)
#define  DC1_MC_ch4_ctl_1_ch4_quota_bw_ini(data)                                 (0xFF000000&((data)<<24))
#define  DC1_MC_ch4_ctl_1_ch4_bw_quota_max(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_ch4_ctl_1_get_ch4_quota_bw_ini(data)                             ((0xFF000000&(data))>>24)
#define  DC1_MC_ch4_ctl_1_get_ch4_bw_quota_max(data)                             ((0x0000FF00&(data))>>8)

#define  DC1_MC_ch4_ctl_2                                                       0x18008A88
#define  DC1_MC_ch4_ctl_2_reg_addr                                               "0xB8008A88"
#define  DC1_MC_ch4_ctl_2_reg                                                    0xB8008A88
#define  DC1_MC_ch4_ctl_2_inst_addr                                              "0x00AA"
#define  set_DC1_MC_ch4_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch4_ctl_2_reg)=data)
#define  get_DC1_MC_ch4_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_ch4_ctl_2_reg))
#define  DC1_MC_ch4_ctl_2_ch4_oldest_time_2_shift                                (20)
#define  DC1_MC_ch4_ctl_2_ch4_oldest_time_shift                                  (8)
#define  DC1_MC_ch4_ctl_2_ch4_bw_acc_unit_shift                                  (0)
#define  DC1_MC_ch4_ctl_2_ch4_oldest_time_2_mask                                 (0xFFF00000)
#define  DC1_MC_ch4_ctl_2_ch4_oldest_time_mask                                   (0x000FFF00)
#define  DC1_MC_ch4_ctl_2_ch4_bw_acc_unit_mask                                   (0x0000000F)
#define  DC1_MC_ch4_ctl_2_ch4_oldest_time_2(data)                                (0xFFF00000&((data)<<20))
#define  DC1_MC_ch4_ctl_2_ch4_oldest_time(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch4_ctl_2_ch4_bw_acc_unit(data)                                  (0x0000000F&(data))
#define  DC1_MC_ch4_ctl_2_get_ch4_oldest_time_2(data)                            ((0xFFF00000&(data))>>20)
#define  DC1_MC_ch4_ctl_2_get_ch4_oldest_time(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch4_ctl_2_get_ch4_bw_acc_unit(data)                              (0x0000000F&(data))

#define  DC1_MC_ch4_ctl_3                                                       0x18008A8C
#define  DC1_MC_ch4_ctl_3_reg_addr                                               "0xB8008A8C"
#define  DC1_MC_ch4_ctl_3_reg                                                    0xB8008A8C
#define  DC1_MC_ch4_ctl_3_inst_addr                                              "0x00AB"
#define  set_DC1_MC_ch4_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch4_ctl_3_reg)=data)
#define  get_DC1_MC_ch4_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_ch4_ctl_3_reg))
#define  DC1_MC_ch4_ctl_3_ch4_cmd_extend_num_shift                               (28)
#define  DC1_MC_ch4_ctl_3_ch4_extend_bl_max_shift                                (20)
#define  DC1_MC_ch4_ctl_3_ch4_ostd_bl_max_shift                                  (8)
#define  DC1_MC_ch4_ctl_3_ch4_ostd_cmd_max_shift                                 (4)
#define  DC1_MC_ch4_ctl_3_ch4_outstand_en_shift                                  (0)
#define  DC1_MC_ch4_ctl_3_ch4_cmd_extend_num_mask                                (0xF0000000)
#define  DC1_MC_ch4_ctl_3_ch4_extend_bl_max_mask                                 (0x03F00000)
#define  DC1_MC_ch4_ctl_3_ch4_ostd_bl_max_mask                                   (0x000FFF00)
#define  DC1_MC_ch4_ctl_3_ch4_ostd_cmd_max_mask                                  (0x000000F0)
#define  DC1_MC_ch4_ctl_3_ch4_outstand_en_mask                                   (0x00000001)
#define  DC1_MC_ch4_ctl_3_ch4_cmd_extend_num(data)                               (0xF0000000&((data)<<28))
#define  DC1_MC_ch4_ctl_3_ch4_extend_bl_max(data)                                (0x03F00000&((data)<<20))
#define  DC1_MC_ch4_ctl_3_ch4_ostd_bl_max(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch4_ctl_3_ch4_ostd_cmd_max(data)                                 (0x000000F0&((data)<<4))
#define  DC1_MC_ch4_ctl_3_ch4_outstand_en(data)                                  (0x00000001&(data))
#define  DC1_MC_ch4_ctl_3_get_ch4_cmd_extend_num(data)                           ((0xF0000000&(data))>>28)
#define  DC1_MC_ch4_ctl_3_get_ch4_extend_bl_max(data)                            ((0x03F00000&(data))>>20)
#define  DC1_MC_ch4_ctl_3_get_ch4_ostd_bl_max(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch4_ctl_3_get_ch4_ostd_cmd_max(data)                             ((0x000000F0&(data))>>4)
#define  DC1_MC_ch4_ctl_3_get_ch4_outstand_en(data)                              (0x00000001&(data))

#define  DC1_MC_ch5_ctl_0                                                       0x18008A90
#define  DC1_MC_ch5_ctl_0_reg_addr                                               "0xB8008A90"
#define  DC1_MC_ch5_ctl_0_reg                                                    0xB8008A90
#define  DC1_MC_ch5_ctl_0_inst_addr                                              "0x00AC"
#define  set_DC1_MC_ch5_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch5_ctl_0_reg)=data)
#define  get_DC1_MC_ch5_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_ch5_ctl_0_reg))
#define  DC1_MC_ch5_ctl_0_ch5_page_insert_mapping_shift                          (24)
#define  DC1_MC_ch5_ctl_0_ch5_bank_free_mapping_shift                            (20)
#define  DC1_MC_ch5_ctl_0_ch5_dir_insert_mapping_shift                           (16)
#define  DC1_MC_ch5_ctl_0_ch5_acc_trigger_sel_shift                              (11)
#define  DC1_MC_ch5_ctl_0_ch5_acc_mode_shift                                     (10)
#define  DC1_MC_ch5_ctl_0_ch5_acc_clr_mode_shift                                 (8)
#define  DC1_MC_ch5_ctl_0_ch5_urg2_wr_brk_en_shift                               (7)
#define  DC1_MC_ch5_ctl_0_ch5_urg2_strong_en_shift                               (4)
#define  DC1_MC_ch5_ctl_0_ch5_oldest_timer_2_en_shift                            (3)
#define  DC1_MC_ch5_ctl_0_ch5_oldest_timer_en_shift                              (2)
#define  DC1_MC_ch5_ctl_0_ch5_oldest_cmd_select_en_shift                         (1)
#define  DC1_MC_ch5_ctl_0_ch5_page_insert_mapping_mask                           (0x0F000000)
#define  DC1_MC_ch5_ctl_0_ch5_bank_free_mapping_mask                             (0x00F00000)
#define  DC1_MC_ch5_ctl_0_ch5_dir_insert_mapping_mask                            (0x000F0000)
#define  DC1_MC_ch5_ctl_0_ch5_acc_trigger_sel_mask                               (0x00000800)
#define  DC1_MC_ch5_ctl_0_ch5_acc_mode_mask                                      (0x00000400)
#define  DC1_MC_ch5_ctl_0_ch5_acc_clr_mode_mask                                  (0x00000300)
#define  DC1_MC_ch5_ctl_0_ch5_urg2_wr_brk_en_mask                                (0x00000080)
#define  DC1_MC_ch5_ctl_0_ch5_urg2_strong_en_mask                                (0x00000010)
#define  DC1_MC_ch5_ctl_0_ch5_oldest_timer_2_en_mask                             (0x00000008)
#define  DC1_MC_ch5_ctl_0_ch5_oldest_timer_en_mask                               (0x00000004)
#define  DC1_MC_ch5_ctl_0_ch5_oldest_cmd_select_en_mask                          (0x00000002)
#define  DC1_MC_ch5_ctl_0_ch5_page_insert_mapping(data)                          (0x0F000000&((data)<<24))
#define  DC1_MC_ch5_ctl_0_ch5_bank_free_mapping(data)                            (0x00F00000&((data)<<20))
#define  DC1_MC_ch5_ctl_0_ch5_dir_insert_mapping(data)                           (0x000F0000&((data)<<16))
#define  DC1_MC_ch5_ctl_0_ch5_acc_trigger_sel(data)                              (0x00000800&((data)<<11))
#define  DC1_MC_ch5_ctl_0_ch5_acc_mode(data)                                     (0x00000400&((data)<<10))
#define  DC1_MC_ch5_ctl_0_ch5_acc_clr_mode(data)                                 (0x00000300&((data)<<8))
#define  DC1_MC_ch5_ctl_0_ch5_urg2_wr_brk_en(data)                               (0x00000080&((data)<<7))
#define  DC1_MC_ch5_ctl_0_ch5_urg2_strong_en(data)                               (0x00000010&((data)<<4))
#define  DC1_MC_ch5_ctl_0_ch5_oldest_timer_2_en(data)                            (0x00000008&((data)<<3))
#define  DC1_MC_ch5_ctl_0_ch5_oldest_timer_en(data)                              (0x00000004&((data)<<2))
#define  DC1_MC_ch5_ctl_0_ch5_oldest_cmd_select_en(data)                         (0x00000002&((data)<<1))
#define  DC1_MC_ch5_ctl_0_get_ch5_page_insert_mapping(data)                      ((0x0F000000&(data))>>24)
#define  DC1_MC_ch5_ctl_0_get_ch5_bank_free_mapping(data)                        ((0x00F00000&(data))>>20)
#define  DC1_MC_ch5_ctl_0_get_ch5_dir_insert_mapping(data)                       ((0x000F0000&(data))>>16)
#define  DC1_MC_ch5_ctl_0_get_ch5_acc_trigger_sel(data)                          ((0x00000800&(data))>>11)
#define  DC1_MC_ch5_ctl_0_get_ch5_acc_mode(data)                                 ((0x00000400&(data))>>10)
#define  DC1_MC_ch5_ctl_0_get_ch5_acc_clr_mode(data)                             ((0x00000300&(data))>>8)
#define  DC1_MC_ch5_ctl_0_get_ch5_urg2_wr_brk_en(data)                           ((0x00000080&(data))>>7)
#define  DC1_MC_ch5_ctl_0_get_ch5_urg2_strong_en(data)                           ((0x00000010&(data))>>4)
#define  DC1_MC_ch5_ctl_0_get_ch5_oldest_timer_2_en(data)                        ((0x00000008&(data))>>3)
#define  DC1_MC_ch5_ctl_0_get_ch5_oldest_timer_en(data)                          ((0x00000004&(data))>>2)
#define  DC1_MC_ch5_ctl_0_get_ch5_oldest_cmd_select_en(data)                     ((0x00000002&(data))>>1)

#define  DC1_MC_ch5_ctl_1                                                       0x18008A94
#define  DC1_MC_ch5_ctl_1_reg_addr                                               "0xB8008A94"
#define  DC1_MC_ch5_ctl_1_reg                                                    0xB8008A94
#define  DC1_MC_ch5_ctl_1_inst_addr                                              "0x00AD"
#define  set_DC1_MC_ch5_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch5_ctl_1_reg)=data)
#define  get_DC1_MC_ch5_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_ch5_ctl_1_reg))
#define  DC1_MC_ch5_ctl_1_ch5_quota_bw_ini_shift                                 (24)
#define  DC1_MC_ch5_ctl_1_ch5_bw_quota_max_shift                                 (8)
#define  DC1_MC_ch5_ctl_1_ch5_quota_bw_ini_mask                                  (0xFF000000)
#define  DC1_MC_ch5_ctl_1_ch5_bw_quota_max_mask                                  (0x0000FF00)
#define  DC1_MC_ch5_ctl_1_ch5_quota_bw_ini(data)                                 (0xFF000000&((data)<<24))
#define  DC1_MC_ch5_ctl_1_ch5_bw_quota_max(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_ch5_ctl_1_get_ch5_quota_bw_ini(data)                             ((0xFF000000&(data))>>24)
#define  DC1_MC_ch5_ctl_1_get_ch5_bw_quota_max(data)                             ((0x0000FF00&(data))>>8)

#define  DC1_MC_ch5_ctl_2                                                       0x18008A98
#define  DC1_MC_ch5_ctl_2_reg_addr                                               "0xB8008A98"
#define  DC1_MC_ch5_ctl_2_reg                                                    0xB8008A98
#define  DC1_MC_ch5_ctl_2_inst_addr                                              "0x00AE"
#define  set_DC1_MC_ch5_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch5_ctl_2_reg)=data)
#define  get_DC1_MC_ch5_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_ch5_ctl_2_reg))
#define  DC1_MC_ch5_ctl_2_ch5_oldest_time_2_shift                                (20)
#define  DC1_MC_ch5_ctl_2_ch5_oldest_time_shift                                  (8)
#define  DC1_MC_ch5_ctl_2_ch5_bw_acc_unit_shift                                  (0)
#define  DC1_MC_ch5_ctl_2_ch5_oldest_time_2_mask                                 (0xFFF00000)
#define  DC1_MC_ch5_ctl_2_ch5_oldest_time_mask                                   (0x000FFF00)
#define  DC1_MC_ch5_ctl_2_ch5_bw_acc_unit_mask                                   (0x0000000F)
#define  DC1_MC_ch5_ctl_2_ch5_oldest_time_2(data)                                (0xFFF00000&((data)<<20))
#define  DC1_MC_ch5_ctl_2_ch5_oldest_time(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch5_ctl_2_ch5_bw_acc_unit(data)                                  (0x0000000F&(data))
#define  DC1_MC_ch5_ctl_2_get_ch5_oldest_time_2(data)                            ((0xFFF00000&(data))>>20)
#define  DC1_MC_ch5_ctl_2_get_ch5_oldest_time(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch5_ctl_2_get_ch5_bw_acc_unit(data)                              (0x0000000F&(data))

#define  DC1_MC_ch5_ctl_3                                                       0x18008A9C
#define  DC1_MC_ch5_ctl_3_reg_addr                                               "0xB8008A9C"
#define  DC1_MC_ch5_ctl_3_reg                                                    0xB8008A9C
#define  DC1_MC_ch5_ctl_3_inst_addr                                              "0x00AF"
#define  set_DC1_MC_ch5_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch5_ctl_3_reg)=data)
#define  get_DC1_MC_ch5_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_ch5_ctl_3_reg))
#define  DC1_MC_ch5_ctl_3_ch5_cmd_extend_num_shift                               (28)
#define  DC1_MC_ch5_ctl_3_ch5_extend_bl_max_shift                                (20)
#define  DC1_MC_ch5_ctl_3_ch5_ostd_bl_max_shift                                  (8)
#define  DC1_MC_ch5_ctl_3_ch5_ostd_cmd_max_shift                                 (4)
#define  DC1_MC_ch5_ctl_3_ch5_outstand_en_shift                                  (0)
#define  DC1_MC_ch5_ctl_3_ch5_cmd_extend_num_mask                                (0xF0000000)
#define  DC1_MC_ch5_ctl_3_ch5_extend_bl_max_mask                                 (0x03F00000)
#define  DC1_MC_ch5_ctl_3_ch5_ostd_bl_max_mask                                   (0x000FFF00)
#define  DC1_MC_ch5_ctl_3_ch5_ostd_cmd_max_mask                                  (0x000000F0)
#define  DC1_MC_ch5_ctl_3_ch5_outstand_en_mask                                   (0x00000001)
#define  DC1_MC_ch5_ctl_3_ch5_cmd_extend_num(data)                               (0xF0000000&((data)<<28))
#define  DC1_MC_ch5_ctl_3_ch5_extend_bl_max(data)                                (0x03F00000&((data)<<20))
#define  DC1_MC_ch5_ctl_3_ch5_ostd_bl_max(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch5_ctl_3_ch5_ostd_cmd_max(data)                                 (0x000000F0&((data)<<4))
#define  DC1_MC_ch5_ctl_3_ch5_outstand_en(data)                                  (0x00000001&(data))
#define  DC1_MC_ch5_ctl_3_get_ch5_cmd_extend_num(data)                           ((0xF0000000&(data))>>28)
#define  DC1_MC_ch5_ctl_3_get_ch5_extend_bl_max(data)                            ((0x03F00000&(data))>>20)
#define  DC1_MC_ch5_ctl_3_get_ch5_ostd_bl_max(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch5_ctl_3_get_ch5_ostd_cmd_max(data)                             ((0x000000F0&(data))>>4)
#define  DC1_MC_ch5_ctl_3_get_ch5_outstand_en(data)                              (0x00000001&(data))

#define  DC1_MC_ch6_ctl_0                                                       0x18008AA0
#define  DC1_MC_ch6_ctl_0_reg_addr                                               "0xB8008AA0"
#define  DC1_MC_ch6_ctl_0_reg                                                    0xB8008AA0
#define  DC1_MC_ch6_ctl_0_inst_addr                                              "0x00B0"
#define  set_DC1_MC_ch6_ctl_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch6_ctl_0_reg)=data)
#define  get_DC1_MC_ch6_ctl_0_reg                                                (*((volatile unsigned int*)DC1_MC_ch6_ctl_0_reg))
#define  DC1_MC_ch6_ctl_0_ch6_page_insert_mapping_shift                          (24)
#define  DC1_MC_ch6_ctl_0_ch6_bank_free_mapping_shift                            (20)
#define  DC1_MC_ch6_ctl_0_ch6_dir_insert_mapping_shift                           (16)
#define  DC1_MC_ch6_ctl_0_ch6_acc_trigger_sel_shift                              (11)
#define  DC1_MC_ch6_ctl_0_ch6_acc_mode_shift                                     (10)
#define  DC1_MC_ch6_ctl_0_ch6_acc_clr_mode_shift                                 (8)
#define  DC1_MC_ch6_ctl_0_ch6_urg2_wr_brk_en_shift                               (7)
#define  DC1_MC_ch6_ctl_0_ch6_urg2_strong_en_shift                               (4)
#define  DC1_MC_ch6_ctl_0_ch6_oldest_timer_2_en_shift                            (3)
#define  DC1_MC_ch6_ctl_0_ch6_oldest_timer_en_shift                              (2)
#define  DC1_MC_ch6_ctl_0_ch6_oldest_cmd_select_en_shift                         (1)
#define  DC1_MC_ch6_ctl_0_ch6_page_insert_mapping_mask                           (0x0F000000)
#define  DC1_MC_ch6_ctl_0_ch6_bank_free_mapping_mask                             (0x00F00000)
#define  DC1_MC_ch6_ctl_0_ch6_dir_insert_mapping_mask                            (0x000F0000)
#define  DC1_MC_ch6_ctl_0_ch6_acc_trigger_sel_mask                               (0x00000800)
#define  DC1_MC_ch6_ctl_0_ch6_acc_mode_mask                                      (0x00000400)
#define  DC1_MC_ch6_ctl_0_ch6_acc_clr_mode_mask                                  (0x00000300)
#define  DC1_MC_ch6_ctl_0_ch6_urg2_wr_brk_en_mask                                (0x00000080)
#define  DC1_MC_ch6_ctl_0_ch6_urg2_strong_en_mask                                (0x00000010)
#define  DC1_MC_ch6_ctl_0_ch6_oldest_timer_2_en_mask                             (0x00000008)
#define  DC1_MC_ch6_ctl_0_ch6_oldest_timer_en_mask                               (0x00000004)
#define  DC1_MC_ch6_ctl_0_ch6_oldest_cmd_select_en_mask                          (0x00000002)
#define  DC1_MC_ch6_ctl_0_ch6_page_insert_mapping(data)                          (0x0F000000&((data)<<24))
#define  DC1_MC_ch6_ctl_0_ch6_bank_free_mapping(data)                            (0x00F00000&((data)<<20))
#define  DC1_MC_ch6_ctl_0_ch6_dir_insert_mapping(data)                           (0x000F0000&((data)<<16))
#define  DC1_MC_ch6_ctl_0_ch6_acc_trigger_sel(data)                              (0x00000800&((data)<<11))
#define  DC1_MC_ch6_ctl_0_ch6_acc_mode(data)                                     (0x00000400&((data)<<10))
#define  DC1_MC_ch6_ctl_0_ch6_acc_clr_mode(data)                                 (0x00000300&((data)<<8))
#define  DC1_MC_ch6_ctl_0_ch6_urg2_wr_brk_en(data)                               (0x00000080&((data)<<7))
#define  DC1_MC_ch6_ctl_0_ch6_urg2_strong_en(data)                               (0x00000010&((data)<<4))
#define  DC1_MC_ch6_ctl_0_ch6_oldest_timer_2_en(data)                            (0x00000008&((data)<<3))
#define  DC1_MC_ch6_ctl_0_ch6_oldest_timer_en(data)                              (0x00000004&((data)<<2))
#define  DC1_MC_ch6_ctl_0_ch6_oldest_cmd_select_en(data)                         (0x00000002&((data)<<1))
#define  DC1_MC_ch6_ctl_0_get_ch6_page_insert_mapping(data)                      ((0x0F000000&(data))>>24)
#define  DC1_MC_ch6_ctl_0_get_ch6_bank_free_mapping(data)                        ((0x00F00000&(data))>>20)
#define  DC1_MC_ch6_ctl_0_get_ch6_dir_insert_mapping(data)                       ((0x000F0000&(data))>>16)
#define  DC1_MC_ch6_ctl_0_get_ch6_acc_trigger_sel(data)                          ((0x00000800&(data))>>11)
#define  DC1_MC_ch6_ctl_0_get_ch6_acc_mode(data)                                 ((0x00000400&(data))>>10)
#define  DC1_MC_ch6_ctl_0_get_ch6_acc_clr_mode(data)                             ((0x00000300&(data))>>8)
#define  DC1_MC_ch6_ctl_0_get_ch6_urg2_wr_brk_en(data)                           ((0x00000080&(data))>>7)
#define  DC1_MC_ch6_ctl_0_get_ch6_urg2_strong_en(data)                           ((0x00000010&(data))>>4)
#define  DC1_MC_ch6_ctl_0_get_ch6_oldest_timer_2_en(data)                        ((0x00000008&(data))>>3)
#define  DC1_MC_ch6_ctl_0_get_ch6_oldest_timer_en(data)                          ((0x00000004&(data))>>2)
#define  DC1_MC_ch6_ctl_0_get_ch6_oldest_cmd_select_en(data)                     ((0x00000002&(data))>>1)

#define  DC1_MC_ch6_ctl_1                                                       0x18008AA4
#define  DC1_MC_ch6_ctl_1_reg_addr                                               "0xB8008AA4"
#define  DC1_MC_ch6_ctl_1_reg                                                    0xB8008AA4
#define  DC1_MC_ch6_ctl_1_inst_addr                                              "0x00B1"
#define  set_DC1_MC_ch6_ctl_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch6_ctl_1_reg)=data)
#define  get_DC1_MC_ch6_ctl_1_reg                                                (*((volatile unsigned int*)DC1_MC_ch6_ctl_1_reg))
#define  DC1_MC_ch6_ctl_1_ch6_quota_bw_ini_shift                                 (24)
#define  DC1_MC_ch6_ctl_1_ch6_bw_quota_max_shift                                 (8)
#define  DC1_MC_ch6_ctl_1_ch6_quota_bw_ini_mask                                  (0xFF000000)
#define  DC1_MC_ch6_ctl_1_ch6_bw_quota_max_mask                                  (0x0000FF00)
#define  DC1_MC_ch6_ctl_1_ch6_quota_bw_ini(data)                                 (0xFF000000&((data)<<24))
#define  DC1_MC_ch6_ctl_1_ch6_bw_quota_max(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_ch6_ctl_1_get_ch6_quota_bw_ini(data)                             ((0xFF000000&(data))>>24)
#define  DC1_MC_ch6_ctl_1_get_ch6_bw_quota_max(data)                             ((0x0000FF00&(data))>>8)

#define  DC1_MC_ch6_ctl_2                                                       0x18008AA8
#define  DC1_MC_ch6_ctl_2_reg_addr                                               "0xB8008AA8"
#define  DC1_MC_ch6_ctl_2_reg                                                    0xB8008AA8
#define  DC1_MC_ch6_ctl_2_inst_addr                                              "0x00B2"
#define  set_DC1_MC_ch6_ctl_2_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch6_ctl_2_reg)=data)
#define  get_DC1_MC_ch6_ctl_2_reg                                                (*((volatile unsigned int*)DC1_MC_ch6_ctl_2_reg))
#define  DC1_MC_ch6_ctl_2_ch6_oldest_time_2_shift                                (20)
#define  DC1_MC_ch6_ctl_2_ch6_oldest_time_shift                                  (8)
#define  DC1_MC_ch6_ctl_2_ch6_bw_acc_unit_shift                                  (0)
#define  DC1_MC_ch6_ctl_2_ch6_oldest_time_2_mask                                 (0xFFF00000)
#define  DC1_MC_ch6_ctl_2_ch6_oldest_time_mask                                   (0x000FFF00)
#define  DC1_MC_ch6_ctl_2_ch6_bw_acc_unit_mask                                   (0x0000000F)
#define  DC1_MC_ch6_ctl_2_ch6_oldest_time_2(data)                                (0xFFF00000&((data)<<20))
#define  DC1_MC_ch6_ctl_2_ch6_oldest_time(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch6_ctl_2_ch6_bw_acc_unit(data)                                  (0x0000000F&(data))
#define  DC1_MC_ch6_ctl_2_get_ch6_oldest_time_2(data)                            ((0xFFF00000&(data))>>20)
#define  DC1_MC_ch6_ctl_2_get_ch6_oldest_time(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch6_ctl_2_get_ch6_bw_acc_unit(data)                              (0x0000000F&(data))

#define  DC1_MC_ch6_ctl_3                                                       0x18008AAC
#define  DC1_MC_ch6_ctl_3_reg_addr                                               "0xB8008AAC"
#define  DC1_MC_ch6_ctl_3_reg                                                    0xB8008AAC
#define  DC1_MC_ch6_ctl_3_inst_addr                                              "0x00B3"
#define  set_DC1_MC_ch6_ctl_3_reg(data)                                          (*((volatile unsigned int*)DC1_MC_ch6_ctl_3_reg)=data)
#define  get_DC1_MC_ch6_ctl_3_reg                                                (*((volatile unsigned int*)DC1_MC_ch6_ctl_3_reg))
#define  DC1_MC_ch6_ctl_3_ch6_cmd_extend_num_shift                               (28)
#define  DC1_MC_ch6_ctl_3_ch6_extend_bl_max_shift                                (20)
#define  DC1_MC_ch6_ctl_3_ch6_ostd_bl_max_shift                                  (8)
#define  DC1_MC_ch6_ctl_3_ch6_ostd_cmd_max_shift                                 (4)
#define  DC1_MC_ch6_ctl_3_ch6_outstand_en_shift                                  (0)
#define  DC1_MC_ch6_ctl_3_ch6_cmd_extend_num_mask                                (0xF0000000)
#define  DC1_MC_ch6_ctl_3_ch6_extend_bl_max_mask                                 (0x03F00000)
#define  DC1_MC_ch6_ctl_3_ch6_ostd_bl_max_mask                                   (0x000FFF00)
#define  DC1_MC_ch6_ctl_3_ch6_ostd_cmd_max_mask                                  (0x000000F0)
#define  DC1_MC_ch6_ctl_3_ch6_outstand_en_mask                                   (0x00000001)
#define  DC1_MC_ch6_ctl_3_ch6_cmd_extend_num(data)                               (0xF0000000&((data)<<28))
#define  DC1_MC_ch6_ctl_3_ch6_extend_bl_max(data)                                (0x03F00000&((data)<<20))
#define  DC1_MC_ch6_ctl_3_ch6_ostd_bl_max(data)                                  (0x000FFF00&((data)<<8))
#define  DC1_MC_ch6_ctl_3_ch6_ostd_cmd_max(data)                                 (0x000000F0&((data)<<4))
#define  DC1_MC_ch6_ctl_3_ch6_outstand_en(data)                                  (0x00000001&(data))
#define  DC1_MC_ch6_ctl_3_get_ch6_cmd_extend_num(data)                           ((0xF0000000&(data))>>28)
#define  DC1_MC_ch6_ctl_3_get_ch6_extend_bl_max(data)                            ((0x03F00000&(data))>>20)
#define  DC1_MC_ch6_ctl_3_get_ch6_ostd_bl_max(data)                              ((0x000FFF00&(data))>>8)
#define  DC1_MC_ch6_ctl_3_get_ch6_ostd_cmd_max(data)                             ((0x000000F0&(data))>>4)
#define  DC1_MC_ch6_ctl_3_get_ch6_outstand_en(data)                              (0x00000001&(data))

#define  DC1_MC_Qos_dbg_0                                                       0x18008AF0
#define  DC1_MC_Qos_dbg_0_reg_addr                                               "0xB8008AF0"
#define  DC1_MC_Qos_dbg_0_reg                                                    0xB8008AF0
#define  DC1_MC_Qos_dbg_0_inst_addr                                              "0x00B4"
#define  set_DC1_MC_Qos_dbg_0_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_dbg_0_reg)=data)
#define  get_DC1_MC_Qos_dbg_0_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_dbg_0_reg))
#define  DC1_MC_Qos_dbg_0_qos_dbg_sel_shift                                      (24)
#define  DC1_MC_Qos_dbg_0_qos_dummy_shift                                        (16)
#define  DC1_MC_Qos_dbg_0_qos_dbg_sel_mask                                       (0x0F000000)
#define  DC1_MC_Qos_dbg_0_qos_dummy_mask                                         (0x00FF0000)
#define  DC1_MC_Qos_dbg_0_qos_dbg_sel(data)                                      (0x0F000000&((data)<<24))
#define  DC1_MC_Qos_dbg_0_qos_dummy(data)                                        (0x00FF0000&((data)<<16))
#define  DC1_MC_Qos_dbg_0_get_qos_dbg_sel(data)                                  ((0x0F000000&(data))>>24)
#define  DC1_MC_Qos_dbg_0_get_qos_dummy(data)                                    ((0x00FF0000&(data))>>16)

#define  DC1_MC_Qos_dbg_1                                                       0x18008AF4
#define  DC1_MC_Qos_dbg_1_reg_addr                                               "0xB8008AF4"
#define  DC1_MC_Qos_dbg_1_reg                                                    0xB8008AF4
#define  DC1_MC_Qos_dbg_1_inst_addr                                              "0x00B5"
#define  set_DC1_MC_Qos_dbg_1_reg(data)                                          (*((volatile unsigned int*)DC1_MC_Qos_dbg_1_reg)=data)
#define  get_DC1_MC_Qos_dbg_1_reg                                                (*((volatile unsigned int*)DC1_MC_Qos_dbg_1_reg))
#define  DC1_MC_Qos_dbg_1_qos_debug_shift                                        (0)
#define  DC1_MC_Qos_dbg_1_qos_debug_mask                                         (0xFFFFFFFF)
#define  DC1_MC_Qos_dbg_1_qos_debug(data)                                        (0xFFFFFFFF&(data))
#define  DC1_MC_Qos_dbg_1_get_qos_debug(data)                                    (0xFFFFFFFF&(data))

#define  DC1_MC_DDR4_CTRL                                                       0x18008C00
#define  DC1_MC_DDR4_CTRL_reg_addr                                               "0xB8008C00"
#define  DC1_MC_DDR4_CTRL_reg                                                    0xB8008C00
#define  DC1_MC_DDR4_CTRL_inst_addr                                              "0x00B6"
#define  set_DC1_MC_DDR4_CTRL_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DDR4_CTRL_reg)=data)
#define  get_DC1_MC_DDR4_CTRL_reg                                                (*((volatile unsigned int*)DC1_MC_DDR4_CTRL_reg))
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_bc4_use_dm_shift                           (21)
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_bl8_use_dm_shift                           (20)
#define  DC1_MC_DDR4_CTRL_ddr4_pda_mrs_dram_sel_shift                            (17)
#define  DC1_MC_DDR4_CTRL_ddr4_gear_set_dpi_sel_shift                            (16)
#define  DC1_MC_DDR4_CTRL_alert_n_pw_judge_shift                                 (8)
#define  DC1_MC_DDR4_CTRL_geardown_entry_shift                                   (7)
#define  DC1_MC_DDR4_CTRL_ddr4_record_cmd_en_shift                               (6)
#define  DC1_MC_DDR4_CTRL_ddr4_rd_dbi_en_shift                                   (5)
#define  DC1_MC_DDR4_CTRL_ddr4_ca_parity_en_shift                                (3)
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_en_shift                                   (2)
#define  DC1_MC_DDR4_CTRL_ddr4_shift                                             (0)
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_bc4_use_dm_mask                            (0x00200000)
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_bl8_use_dm_mask                            (0x00100000)
#define  DC1_MC_DDR4_CTRL_ddr4_pda_mrs_dram_sel_mask                             (0x000E0000)
#define  DC1_MC_DDR4_CTRL_ddr4_gear_set_dpi_sel_mask                             (0x00010000)
#define  DC1_MC_DDR4_CTRL_alert_n_pw_judge_mask                                  (0x0000FF00)
#define  DC1_MC_DDR4_CTRL_geardown_entry_mask                                    (0x00000080)
#define  DC1_MC_DDR4_CTRL_ddr4_record_cmd_en_mask                                (0x00000040)
#define  DC1_MC_DDR4_CTRL_ddr4_rd_dbi_en_mask                                    (0x00000020)
#define  DC1_MC_DDR4_CTRL_ddr4_ca_parity_en_mask                                 (0x00000008)
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_en_mask                                    (0x00000004)
#define  DC1_MC_DDR4_CTRL_ddr4_mask                                              (0x00000001)
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_bc4_use_dm(data)                           (0x00200000&((data)<<21))
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_bl8_use_dm(data)                           (0x00100000&((data)<<20))
#define  DC1_MC_DDR4_CTRL_ddr4_pda_mrs_dram_sel(data)                            (0x000E0000&((data)<<17))
#define  DC1_MC_DDR4_CTRL_ddr4_gear_set_dpi_sel(data)                            (0x00010000&((data)<<16))
#define  DC1_MC_DDR4_CTRL_alert_n_pw_judge(data)                                 (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_CTRL_geardown_entry(data)                                   (0x00000080&((data)<<7))
#define  DC1_MC_DDR4_CTRL_ddr4_record_cmd_en(data)                               (0x00000040&((data)<<6))
#define  DC1_MC_DDR4_CTRL_ddr4_rd_dbi_en(data)                                   (0x00000020&((data)<<5))
#define  DC1_MC_DDR4_CTRL_ddr4_ca_parity_en(data)                                (0x00000008&((data)<<3))
#define  DC1_MC_DDR4_CTRL_ddr4_wr_crc_en(data)                                   (0x00000004&((data)<<2))
#define  DC1_MC_DDR4_CTRL_ddr4(data)                                             (0x00000001&(data))
#define  DC1_MC_DDR4_CTRL_get_ddr4_wr_crc_bc4_use_dm(data)                       ((0x00200000&(data))>>21)
#define  DC1_MC_DDR4_CTRL_get_ddr4_wr_crc_bl8_use_dm(data)                       ((0x00100000&(data))>>20)
#define  DC1_MC_DDR4_CTRL_get_ddr4_pda_mrs_dram_sel(data)                        ((0x000E0000&(data))>>17)
#define  DC1_MC_DDR4_CTRL_get_ddr4_gear_set_dpi_sel(data)                        ((0x00010000&(data))>>16)
#define  DC1_MC_DDR4_CTRL_get_alert_n_pw_judge(data)                             ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_CTRL_get_geardown_entry(data)                               ((0x00000080&(data))>>7)
#define  DC1_MC_DDR4_CTRL_get_ddr4_record_cmd_en(data)                           ((0x00000040&(data))>>6)
#define  DC1_MC_DDR4_CTRL_get_ddr4_rd_dbi_en(data)                               ((0x00000020&(data))>>5)
#define  DC1_MC_DDR4_CTRL_get_ddr4_ca_parity_en(data)                            ((0x00000008&(data))>>3)
#define  DC1_MC_DDR4_CTRL_get_ddr4_wr_crc_en(data)                               ((0x00000004&(data))>>2)
#define  DC1_MC_DDR4_CTRL_get_ddr4(data)                                         (0x00000001&(data))

#define  DC1_MC_DDR4_TM0                                                        0x18008C04
#define  DC1_MC_DDR4_TM0_reg_addr                                                "0xB8008C04"
#define  DC1_MC_DDR4_TM0_reg                                                     0xB8008C04
#define  DC1_MC_DDR4_TM0_inst_addr                                               "0x00B7"
#define  set_DC1_MC_DDR4_TM0_reg(data)                                           (*((volatile unsigned int*)DC1_MC_DDR4_TM0_reg)=data)
#define  get_DC1_MC_DDR4_TM0_reg                                                 (*((volatile unsigned int*)DC1_MC_DDR4_TM0_reg))
#define  DC1_MC_DDR4_TM0_tmwtr_l_shift                                           (12)
#define  DC1_MC_DDR4_TM0_tmrrd_l_shift                                           (4)
#define  DC1_MC_DDR4_TM0_tmccd_l_shift                                           (0)
#define  DC1_MC_DDR4_TM0_tmwtr_l_mask                                            (0x0001F000)
#define  DC1_MC_DDR4_TM0_tmrrd_l_mask                                            (0x000001F0)
#define  DC1_MC_DDR4_TM0_tmccd_l_mask                                            (0x0000000F)
#define  DC1_MC_DDR4_TM0_tmwtr_l(data)                                           (0x0001F000&((data)<<12))
#define  DC1_MC_DDR4_TM0_tmrrd_l(data)                                           (0x000001F0&((data)<<4))
#define  DC1_MC_DDR4_TM0_tmccd_l(data)                                           (0x0000000F&(data))
#define  DC1_MC_DDR4_TM0_get_tmwtr_l(data)                                       ((0x0001F000&(data))>>12)
#define  DC1_MC_DDR4_TM0_get_tmrrd_l(data)                                       ((0x000001F0&(data))>>4)
#define  DC1_MC_DDR4_TM0_get_tmccd_l(data)                                       (0x0000000F&(data))

#define  DC1_MC_DDR4_MR45                                                       0x18008C08
#define  DC1_MC_DDR4_MR45_reg_addr                                               "0xB8008C08"
#define  DC1_MC_DDR4_MR45_reg                                                    0xB8008C08
#define  DC1_MC_DDR4_MR45_inst_addr                                              "0x00B8"
#define  set_DC1_MC_DDR4_MR45_reg(data)                                          (*((volatile unsigned int*)DC1_MC_DDR4_MR45_reg)=data)
#define  get_DC1_MC_DDR4_MR45_reg                                                (*((volatile unsigned int*)DC1_MC_DDR4_MR45_reg))
#define  DC1_MC_DDR4_MR45_mode_reg5_shift                                        (16)
#define  DC1_MC_DDR4_MR45_mode_reg4_shift                                        (0)
#define  DC1_MC_DDR4_MR45_mode_reg5_mask                                         (0xFFFF0000)
#define  DC1_MC_DDR4_MR45_mode_reg4_mask                                         (0x0000FFFF)
#define  DC1_MC_DDR4_MR45_mode_reg5(data)                                        (0xFFFF0000&((data)<<16))
#define  DC1_MC_DDR4_MR45_mode_reg4(data)                                        (0x0000FFFF&(data))
#define  DC1_MC_DDR4_MR45_get_mode_reg5(data)                                    ((0xFFFF0000&(data))>>16)
#define  DC1_MC_DDR4_MR45_get_mode_reg4(data)                                    (0x0000FFFF&(data))

#define  DC1_MC_DDR4_MR6                                                        0x18008C0C
#define  DC1_MC_DDR4_MR6_reg_addr                                                "0xB8008C0C"
#define  DC1_MC_DDR4_MR6_reg                                                     0xB8008C0C
#define  DC1_MC_DDR4_MR6_inst_addr                                               "0x00B9"
#define  set_DC1_MC_DDR4_MR6_reg(data)                                           (*((volatile unsigned int*)DC1_MC_DDR4_MR6_reg)=data)
#define  get_DC1_MC_DDR4_MR6_reg                                                 (*((volatile unsigned int*)DC1_MC_DDR4_MR6_reg))
#define  DC1_MC_DDR4_MR6_mode_reg6_shift                                         (0)
#define  DC1_MC_DDR4_MR6_mode_reg6_mask                                          (0x0000FFFF)
#define  DC1_MC_DDR4_MR6_mode_reg6(data)                                         (0x0000FFFF&(data))
#define  DC1_MC_DDR4_MR6_get_mode_reg6(data)                                     (0x0000FFFF&(data))

#define  DC1_MC_DDR4_ALERT_STATUS                                               0x18008C10
#define  DC1_MC_DDR4_ALERT_STATUS_reg_addr                                       "0xB8008C10"
#define  DC1_MC_DDR4_ALERT_STATUS_reg                                            0xB8008C10
#define  DC1_MC_DDR4_ALERT_STATUS_inst_addr                                      "0x00BA"
#define  set_DC1_MC_DDR4_ALERT_STATUS_reg(data)                                  (*((volatile unsigned int*)DC1_MC_DDR4_ALERT_STATUS_reg)=data)
#define  get_DC1_MC_DDR4_ALERT_STATUS_reg                                        (*((volatile unsigned int*)DC1_MC_DDR4_ALERT_STATUS_reg))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_read_preamble_en_shift                    (24)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_write_preamble_en_shift                   (23)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_pda_en_shift                              (22)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_rd_dbi_en_shift                           (21)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_max_pw_sav_en_shift                       (20)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_gear_down_en_shift                        (19)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_mpr_rw_en_shift                           (18)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_wr_crc_en_shift                           (17)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_parity_en_shift                           (16)
#define  DC1_MC_DDR4_ALERT_STATUS_alert_n_pw_1_shift                             (8)
#define  DC1_MC_DDR4_ALERT_STATUS_alert_n_pw_0_shift                             (0)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_read_preamble_en_mask                     (0x01000000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_write_preamble_en_mask                    (0x00800000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_pda_en_mask                               (0x00400000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_rd_dbi_en_mask                            (0x00200000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_max_pw_sav_en_mask                        (0x00100000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_gear_down_en_mask                         (0x00080000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_mpr_rw_en_mask                            (0x00040000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_wr_crc_en_mask                            (0x00020000)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_parity_en_mask                            (0x00010000)
#define  DC1_MC_DDR4_ALERT_STATUS_alert_n_pw_1_mask                              (0x0000FF00)
#define  DC1_MC_DDR4_ALERT_STATUS_alert_n_pw_0_mask                              (0x000000FF)
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_read_preamble_en(data)                    (0x01000000&((data)<<24))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_write_preamble_en(data)                   (0x00800000&((data)<<23))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_pda_en(data)                              (0x00400000&((data)<<22))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_rd_dbi_en(data)                           (0x00200000&((data)<<21))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_max_pw_sav_en(data)                       (0x00100000&((data)<<20))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_gear_down_en(data)                        (0x00080000&((data)<<19))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_mpr_rw_en(data)                           (0x00040000&((data)<<18))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_wr_crc_en(data)                           (0x00020000&((data)<<17))
#define  DC1_MC_DDR4_ALERT_STATUS_ddr4_parity_en(data)                           (0x00010000&((data)<<16))
#define  DC1_MC_DDR4_ALERT_STATUS_alert_n_pw_1(data)                             (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_ALERT_STATUS_alert_n_pw_0(data)                             (0x000000FF&(data))
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_read_preamble_en(data)                ((0x01000000&(data))>>24)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_write_preamble_en(data)               ((0x00800000&(data))>>23)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_pda_en(data)                          ((0x00400000&(data))>>22)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_rd_dbi_en(data)                       ((0x00200000&(data))>>21)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_max_pw_sav_en(data)                   ((0x00100000&(data))>>20)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_gear_down_en(data)                    ((0x00080000&(data))>>19)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_mpr_rw_en(data)                       ((0x00040000&(data))>>18)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_wr_crc_en(data)                       ((0x00020000&(data))>>17)
#define  DC1_MC_DDR4_ALERT_STATUS_get_ddr4_parity_en(data)                       ((0x00010000&(data))>>16)
#define  DC1_MC_DDR4_ALERT_STATUS_get_alert_n_pw_1(data)                         ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_ALERT_STATUS_get_alert_n_pw_0(data)                         (0x000000FF&(data))

#define  DC1_MC_DC_DDR4_CTL                                                     0x18008C14
#define  DC1_MC_DC_DDR4_CTL_reg_addr                                             "0xB8008C14"
#define  DC1_MC_DC_DDR4_CTL_reg                                                  0xB8008C14
#define  DC1_MC_DC_DDR4_CTL_inst_addr                                            "0x00BB"
#define  set_DC1_MC_DC_DDR4_CTL_reg(data)                                        (*((volatile unsigned int*)DC1_MC_DC_DDR4_CTL_reg)=data)
#define  get_DC1_MC_DC_DDR4_CTL_reg                                              (*((volatile unsigned int*)DC1_MC_DC_DDR4_CTL_reg))
#define  DC1_MC_DC_DDR4_CTL_write_en_4_shift                                     (9)
#define  DC1_MC_DC_DDR4_CTL_exe_mpr_wr_shift                                     (8)
#define  DC1_MC_DC_DDR4_CTL_write_en_3_shift                                     (7)
#define  DC1_MC_DC_DDR4_CTL_exe_mpr_rd_shift                                     (6)
#define  DC1_MC_DC_DDR4_CTL_write_en_2_shift                                     (5)
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr6_shift                                   (4)
#define  DC1_MC_DC_DDR4_CTL_write_en_1_shift                                     (3)
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr5_shift                                   (2)
#define  DC1_MC_DC_DDR4_CTL_write_en_0_shift                                     (1)
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr4_shift                                   (0)
#define  DC1_MC_DC_DDR4_CTL_write_en_4_mask                                      (0x00000200)
#define  DC1_MC_DC_DDR4_CTL_exe_mpr_wr_mask                                      (0x00000100)
#define  DC1_MC_DC_DDR4_CTL_write_en_3_mask                                      (0x00000080)
#define  DC1_MC_DC_DDR4_CTL_exe_mpr_rd_mask                                      (0x00000040)
#define  DC1_MC_DC_DDR4_CTL_write_en_2_mask                                      (0x00000020)
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr6_mask                                    (0x00000010)
#define  DC1_MC_DC_DDR4_CTL_write_en_1_mask                                      (0x00000008)
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr5_mask                                    (0x00000004)
#define  DC1_MC_DC_DDR4_CTL_write_en_0_mask                                      (0x00000002)
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr4_mask                                    (0x00000001)
#define  DC1_MC_DC_DDR4_CTL_write_en_4(data)                                     (0x00000200&((data)<<9))
#define  DC1_MC_DC_DDR4_CTL_exe_mpr_wr(data)                                     (0x00000100&((data)<<8))
#define  DC1_MC_DC_DDR4_CTL_write_en_3(data)                                     (0x00000080&((data)<<7))
#define  DC1_MC_DC_DDR4_CTL_exe_mpr_rd(data)                                     (0x00000040&((data)<<6))
#define  DC1_MC_DC_DDR4_CTL_write_en_2(data)                                     (0x00000020&((data)<<5))
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr6(data)                                   (0x00000010&((data)<<4))
#define  DC1_MC_DC_DDR4_CTL_write_en_1(data)                                     (0x00000008&((data)<<3))
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr5(data)                                   (0x00000004&((data)<<2))
#define  DC1_MC_DC_DDR4_CTL_write_en_0(data)                                     (0x00000002&((data)<<1))
#define  DC1_MC_DC_DDR4_CTL_ddr4_exe_mr4(data)                                   (0x00000001&(data))
#define  DC1_MC_DC_DDR4_CTL_get_write_en_4(data)                                 ((0x00000200&(data))>>9)
#define  DC1_MC_DC_DDR4_CTL_get_exe_mpr_wr(data)                                 ((0x00000100&(data))>>8)
#define  DC1_MC_DC_DDR4_CTL_get_write_en_3(data)                                 ((0x00000080&(data))>>7)
#define  DC1_MC_DC_DDR4_CTL_get_exe_mpr_rd(data)                                 ((0x00000040&(data))>>6)
#define  DC1_MC_DC_DDR4_CTL_get_write_en_2(data)                                 ((0x00000020&(data))>>5)
#define  DC1_MC_DC_DDR4_CTL_get_ddr4_exe_mr6(data)                               ((0x00000010&(data))>>4)
#define  DC1_MC_DC_DDR4_CTL_get_write_en_1(data)                                 ((0x00000008&(data))>>3)
#define  DC1_MC_DC_DDR4_CTL_get_ddr4_exe_mr5(data)                               ((0x00000004&(data))>>2)
#define  DC1_MC_DC_DDR4_CTL_get_write_en_0(data)                                 ((0x00000002&(data))>>1)
#define  DC1_MC_DC_DDR4_CTL_get_ddr4_exe_mr4(data)                               (0x00000001&(data))

#define  DC1_MC_DDR4_EXE_RW_CMD                                                 0x18008C18
#define  DC1_MC_DDR4_EXE_RW_CMD_reg_addr                                         "0xB8008C18"
#define  DC1_MC_DDR4_EXE_RW_CMD_reg                                              0xB8008C18
#define  DC1_MC_DDR4_EXE_RW_CMD_inst_addr                                        "0x00BC"
#define  set_DC1_MC_DDR4_EXE_RW_CMD_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_EXE_RW_CMD_reg)=data)
#define  get_DC1_MC_DDR4_EXE_RW_CMD_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_EXE_RW_CMD_reg))
#define  DC1_MC_DDR4_EXE_RW_CMD_geardown_setuphold_shift                         (28)
#define  DC1_MC_DDR4_EXE_RW_CMD_mpr_rw_bank_shift                                (8)
#define  DC1_MC_DDR4_EXE_RW_CMD_mpr_rw_add_shift                                 (0)
#define  DC1_MC_DDR4_EXE_RW_CMD_geardown_setuphold_mask                          (0xF0000000)
#define  DC1_MC_DDR4_EXE_RW_CMD_mpr_rw_bank_mask                                 (0x00000300)
#define  DC1_MC_DDR4_EXE_RW_CMD_mpr_rw_add_mask                                  (0x000000FF)
#define  DC1_MC_DDR4_EXE_RW_CMD_geardown_setuphold(data)                         (0xF0000000&((data)<<28))
#define  DC1_MC_DDR4_EXE_RW_CMD_mpr_rw_bank(data)                                (0x00000300&((data)<<8))
#define  DC1_MC_DDR4_EXE_RW_CMD_mpr_rw_add(data)                                 (0x000000FF&(data))
#define  DC1_MC_DDR4_EXE_RW_CMD_get_geardown_setuphold(data)                     ((0xF0000000&(data))>>28)
#define  DC1_MC_DDR4_EXE_RW_CMD_get_mpr_rw_bank(data)                            ((0x00000300&(data))>>8)
#define  DC1_MC_DDR4_EXE_RW_CMD_get_mpr_rw_add(data)                             (0x000000FF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_0                                                 0x18008C20
#define  DC1_MC_DDR4_FAIL_CMD_0_reg_addr                                         "0xB8008C20"
#define  DC1_MC_DDR4_FAIL_CMD_0_reg                                              0xB8008C20
#define  DC1_MC_DDR4_FAIL_CMD_0_inst_addr                                        "0x00BD"
#define  set_DC1_MC_DDR4_FAIL_CMD_0_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_0_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_0_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_0_reg))
#define  DC1_MC_DDR4_FAIL_CMD_0_fail_cmd_0_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_0_fail_cmd_0_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_0_fail_cmd_0(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_0_get_fail_cmd_0(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_1                                                 0x18008C24
#define  DC1_MC_DDR4_FAIL_CMD_1_reg_addr                                         "0xB8008C24"
#define  DC1_MC_DDR4_FAIL_CMD_1_reg                                              0xB8008C24
#define  DC1_MC_DDR4_FAIL_CMD_1_inst_addr                                        "0x00BE"
#define  set_DC1_MC_DDR4_FAIL_CMD_1_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_1_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_1_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_1_reg))
#define  DC1_MC_DDR4_FAIL_CMD_1_fail_cmd_1_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_1_fail_cmd_1_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_1_fail_cmd_1(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_1_get_fail_cmd_1(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_2                                                 0x18008C28
#define  DC1_MC_DDR4_FAIL_CMD_2_reg_addr                                         "0xB8008C28"
#define  DC1_MC_DDR4_FAIL_CMD_2_reg                                              0xB8008C28
#define  DC1_MC_DDR4_FAIL_CMD_2_inst_addr                                        "0x00BF"
#define  set_DC1_MC_DDR4_FAIL_CMD_2_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_2_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_2_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_2_reg))
#define  DC1_MC_DDR4_FAIL_CMD_2_fail_cmd_2_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_2_fail_cmd_2_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_2_fail_cmd_2(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_2_get_fail_cmd_2(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_3                                                 0x18008C2C
#define  DC1_MC_DDR4_FAIL_CMD_3_reg_addr                                         "0xB8008C2C"
#define  DC1_MC_DDR4_FAIL_CMD_3_reg                                              0xB8008C2C
#define  DC1_MC_DDR4_FAIL_CMD_3_inst_addr                                        "0x00C0"
#define  set_DC1_MC_DDR4_FAIL_CMD_3_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_3_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_3_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_3_reg))
#define  DC1_MC_DDR4_FAIL_CMD_3_fail_cmd_3_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_3_fail_cmd_3_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_3_fail_cmd_3(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_3_get_fail_cmd_3(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_4                                                 0x18008C30
#define  DC1_MC_DDR4_FAIL_CMD_4_reg_addr                                         "0xB8008C30"
#define  DC1_MC_DDR4_FAIL_CMD_4_reg                                              0xB8008C30
#define  DC1_MC_DDR4_FAIL_CMD_4_inst_addr                                        "0x00C1"
#define  set_DC1_MC_DDR4_FAIL_CMD_4_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_4_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_4_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_4_reg))
#define  DC1_MC_DDR4_FAIL_CMD_4_fail_cmd_4_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_4_fail_cmd_4_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_4_fail_cmd_4(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_4_get_fail_cmd_4(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_5                                                 0x18008C34
#define  DC1_MC_DDR4_FAIL_CMD_5_reg_addr                                         "0xB8008C34"
#define  DC1_MC_DDR4_FAIL_CMD_5_reg                                              0xB8008C34
#define  DC1_MC_DDR4_FAIL_CMD_5_inst_addr                                        "0x00C2"
#define  set_DC1_MC_DDR4_FAIL_CMD_5_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_5_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_5_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_5_reg))
#define  DC1_MC_DDR4_FAIL_CMD_5_fail_cmd_5_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_5_fail_cmd_5_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_5_fail_cmd_5(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_5_get_fail_cmd_5(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_6                                                 0x18008C38
#define  DC1_MC_DDR4_FAIL_CMD_6_reg_addr                                         "0xB8008C38"
#define  DC1_MC_DDR4_FAIL_CMD_6_reg                                              0xB8008C38
#define  DC1_MC_DDR4_FAIL_CMD_6_inst_addr                                        "0x00C3"
#define  set_DC1_MC_DDR4_FAIL_CMD_6_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_6_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_6_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_6_reg))
#define  DC1_MC_DDR4_FAIL_CMD_6_fail_cmd_6_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_6_fail_cmd_6_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_6_fail_cmd_6(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_6_get_fail_cmd_6(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_7                                                 0x18008C3C
#define  DC1_MC_DDR4_FAIL_CMD_7_reg_addr                                         "0xB8008C3C"
#define  DC1_MC_DDR4_FAIL_CMD_7_reg                                              0xB8008C3C
#define  DC1_MC_DDR4_FAIL_CMD_7_inst_addr                                        "0x00C4"
#define  set_DC1_MC_DDR4_FAIL_CMD_7_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_7_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_7_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_7_reg))
#define  DC1_MC_DDR4_FAIL_CMD_7_fail_cmd_7_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_7_fail_cmd_7_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_7_fail_cmd_7(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_7_get_fail_cmd_7(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_8                                                 0x18008C40
#define  DC1_MC_DDR4_FAIL_CMD_8_reg_addr                                         "0xB8008C40"
#define  DC1_MC_DDR4_FAIL_CMD_8_reg                                              0xB8008C40
#define  DC1_MC_DDR4_FAIL_CMD_8_inst_addr                                        "0x00C5"
#define  set_DC1_MC_DDR4_FAIL_CMD_8_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_8_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_8_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_8_reg))
#define  DC1_MC_DDR4_FAIL_CMD_8_fail_cmd_8_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_8_fail_cmd_8_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_8_fail_cmd_8(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_8_get_fail_cmd_8(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_9                                                 0x18008C44
#define  DC1_MC_DDR4_FAIL_CMD_9_reg_addr                                         "0xB8008C44"
#define  DC1_MC_DDR4_FAIL_CMD_9_reg                                              0xB8008C44
#define  DC1_MC_DDR4_FAIL_CMD_9_inst_addr                                        "0x00C6"
#define  set_DC1_MC_DDR4_FAIL_CMD_9_reg(data)                                    (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_9_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_9_reg                                          (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_9_reg))
#define  DC1_MC_DDR4_FAIL_CMD_9_fail_cmd_9_shift                                 (0)
#define  DC1_MC_DDR4_FAIL_CMD_9_fail_cmd_9_mask                                  (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_9_fail_cmd_9(data)                                 (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_9_get_fail_cmd_9(data)                             (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_10                                                0x18008C48
#define  DC1_MC_DDR4_FAIL_CMD_10_reg_addr                                        "0xB8008C48"
#define  DC1_MC_DDR4_FAIL_CMD_10_reg                                             0xB8008C48
#define  DC1_MC_DDR4_FAIL_CMD_10_inst_addr                                       "0x00C7"
#define  set_DC1_MC_DDR4_FAIL_CMD_10_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_10_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_10_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_10_reg))
#define  DC1_MC_DDR4_FAIL_CMD_10_fail_cmd_10_shift                               (0)
#define  DC1_MC_DDR4_FAIL_CMD_10_fail_cmd_10_mask                                (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_10_fail_cmd_10(data)                               (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_10_get_fail_cmd_10(data)                           (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_11                                                0x18008C4C
#define  DC1_MC_DDR4_FAIL_CMD_11_reg_addr                                        "0xB8008C4C"
#define  DC1_MC_DDR4_FAIL_CMD_11_reg                                             0xB8008C4C
#define  DC1_MC_DDR4_FAIL_CMD_11_inst_addr                                       "0x00C8"
#define  set_DC1_MC_DDR4_FAIL_CMD_11_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_11_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_11_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_11_reg))
#define  DC1_MC_DDR4_FAIL_CMD_11_fail_cmd_11_shift                               (0)
#define  DC1_MC_DDR4_FAIL_CMD_11_fail_cmd_11_mask                                (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_11_fail_cmd_11(data)                               (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_11_get_fail_cmd_11(data)                           (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_12                                                0x18008C50
#define  DC1_MC_DDR4_FAIL_CMD_12_reg_addr                                        "0xB8008C50"
#define  DC1_MC_DDR4_FAIL_CMD_12_reg                                             0xB8008C50
#define  DC1_MC_DDR4_FAIL_CMD_12_inst_addr                                       "0x00C9"
#define  set_DC1_MC_DDR4_FAIL_CMD_12_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_12_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_12_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_12_reg))
#define  DC1_MC_DDR4_FAIL_CMD_12_fail_cmd_12_shift                               (0)
#define  DC1_MC_DDR4_FAIL_CMD_12_fail_cmd_12_mask                                (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_12_fail_cmd_12(data)                               (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_12_get_fail_cmd_12(data)                           (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_13                                                0x18008C54
#define  DC1_MC_DDR4_FAIL_CMD_13_reg_addr                                        "0xB8008C54"
#define  DC1_MC_DDR4_FAIL_CMD_13_reg                                             0xB8008C54
#define  DC1_MC_DDR4_FAIL_CMD_13_inst_addr                                       "0x00CA"
#define  set_DC1_MC_DDR4_FAIL_CMD_13_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_13_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_13_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_13_reg))
#define  DC1_MC_DDR4_FAIL_CMD_13_fail_cmd_13_shift                               (0)
#define  DC1_MC_DDR4_FAIL_CMD_13_fail_cmd_13_mask                                (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_13_fail_cmd_13(data)                               (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_13_get_fail_cmd_13(data)                           (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_14                                                0x18008C58
#define  DC1_MC_DDR4_FAIL_CMD_14_reg_addr                                        "0xB8008C58"
#define  DC1_MC_DDR4_FAIL_CMD_14_reg                                             0xB8008C58
#define  DC1_MC_DDR4_FAIL_CMD_14_inst_addr                                       "0x00CB"
#define  set_DC1_MC_DDR4_FAIL_CMD_14_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_14_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_14_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_14_reg))
#define  DC1_MC_DDR4_FAIL_CMD_14_fail_cmd_14_shift                               (0)
#define  DC1_MC_DDR4_FAIL_CMD_14_fail_cmd_14_mask                                (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_14_fail_cmd_14(data)                               (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_14_get_fail_cmd_14(data)                           (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_FAIL_CMD_15                                                0x18008C5C
#define  DC1_MC_DDR4_FAIL_CMD_15_reg_addr                                        "0xB8008C5C"
#define  DC1_MC_DDR4_FAIL_CMD_15_reg                                             0xB8008C5C
#define  DC1_MC_DDR4_FAIL_CMD_15_inst_addr                                       "0x00CC"
#define  set_DC1_MC_DDR4_FAIL_CMD_15_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_15_reg)=data)
#define  get_DC1_MC_DDR4_FAIL_CMD_15_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_FAIL_CMD_15_reg))
#define  DC1_MC_DDR4_FAIL_CMD_15_fail_cmd_15_shift                               (0)
#define  DC1_MC_DDR4_FAIL_CMD_15_fail_cmd_15_mask                                (0x01FFFFFF)
#define  DC1_MC_DDR4_FAIL_CMD_15_fail_cmd_15(data)                               (0x01FFFFFF&(data))
#define  DC1_MC_DDR4_FAIL_CMD_15_get_fail_cmd_15(data)                           (0x01FFFFFF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT0                                                0x18008C60
#define  DC1_MC_DDR4_MPR_RD_DAT0_reg_addr                                        "0xB8008C60"
#define  DC1_MC_DDR4_MPR_RD_DAT0_reg                                             0xB8008C60
#define  DC1_MC_DDR4_MPR_RD_DAT0_inst_addr                                       "0x00CD"
#define  set_DC1_MC_DDR4_MPR_RD_DAT0_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT0_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT0_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT0_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_3_shift                                (24)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_2_shift                                (16)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_1_shift                                (8)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_0_shift                                (0)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_3_mask                                 (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_2_mask                                 (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_1_mask                                 (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_0_mask                                 (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_3(data)                                (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_2(data)                                (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_1(data)                                (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT0_mpr_data_0(data)                                (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT0_get_mpr_data_3(data)                            ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT0_get_mpr_data_2(data)                            ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT0_get_mpr_data_1(data)                            ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT0_get_mpr_data_0(data)                            (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT1                                                0x18008C64
#define  DC1_MC_DDR4_MPR_RD_DAT1_reg_addr                                        "0xB8008C64"
#define  DC1_MC_DDR4_MPR_RD_DAT1_reg                                             0xB8008C64
#define  DC1_MC_DDR4_MPR_RD_DAT1_inst_addr                                       "0x00CE"
#define  set_DC1_MC_DDR4_MPR_RD_DAT1_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT1_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT1_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT1_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_7_shift                                (24)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_6_shift                                (16)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_5_shift                                (8)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_4_shift                                (0)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_7_mask                                 (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_6_mask                                 (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_5_mask                                 (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_4_mask                                 (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_7(data)                                (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_6(data)                                (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_5(data)                                (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT1_mpr_data_4(data)                                (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT1_get_mpr_data_7(data)                            ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT1_get_mpr_data_6(data)                            ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT1_get_mpr_data_5(data)                            ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT1_get_mpr_data_4(data)                            (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT2                                                0x18008C68
#define  DC1_MC_DDR4_MPR_RD_DAT2_reg_addr                                        "0xB8008C68"
#define  DC1_MC_DDR4_MPR_RD_DAT2_reg                                             0xB8008C68
#define  DC1_MC_DDR4_MPR_RD_DAT2_inst_addr                                       "0x00CF"
#define  set_DC1_MC_DDR4_MPR_RD_DAT2_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT2_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT2_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT2_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_11_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_10_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_9_shift                                (8)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_8_shift                                (0)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_11_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_10_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_9_mask                                 (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_8_mask                                 (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_11(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_10(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_9(data)                                (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT2_mpr_data_8(data)                                (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT2_get_mpr_data_11(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT2_get_mpr_data_10(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT2_get_mpr_data_9(data)                            ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT2_get_mpr_data_8(data)                            (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT3                                                0x18008C6C
#define  DC1_MC_DDR4_MPR_RD_DAT3_reg_addr                                        "0xB8008C6C"
#define  DC1_MC_DDR4_MPR_RD_DAT3_reg                                             0xB8008C6C
#define  DC1_MC_DDR4_MPR_RD_DAT3_inst_addr                                       "0x00D0"
#define  set_DC1_MC_DDR4_MPR_RD_DAT3_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT3_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT3_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT3_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_15_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_14_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_13_shift                               (8)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_12_shift                               (0)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_15_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_14_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_13_mask                                (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_12_mask                                (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_15(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_14(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_13(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT3_mpr_data_12(data)                               (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT3_get_mpr_data_15(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT3_get_mpr_data_14(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT3_get_mpr_data_13(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT3_get_mpr_data_12(data)                           (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT4                                                0x18008C70
#define  DC1_MC_DDR4_MPR_RD_DAT4_reg_addr                                        "0xB8008C70"
#define  DC1_MC_DDR4_MPR_RD_DAT4_reg                                             0xB8008C70
#define  DC1_MC_DDR4_MPR_RD_DAT4_inst_addr                                       "0x00D1"
#define  set_DC1_MC_DDR4_MPR_RD_DAT4_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT4_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT4_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT4_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_19_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_18_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_17_shift                               (8)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_16_shift                               (0)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_19_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_18_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_17_mask                                (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_16_mask                                (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_19(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_18(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_17(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT4_mpr_data_16(data)                               (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT4_get_mpr_data_19(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT4_get_mpr_data_18(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT4_get_mpr_data_17(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT4_get_mpr_data_16(data)                           (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT5                                                0x18008C74
#define  DC1_MC_DDR4_MPR_RD_DAT5_reg_addr                                        "0xB8008C74"
#define  DC1_MC_DDR4_MPR_RD_DAT5_reg                                             0xB8008C74
#define  DC1_MC_DDR4_MPR_RD_DAT5_inst_addr                                       "0x00D2"
#define  set_DC1_MC_DDR4_MPR_RD_DAT5_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT5_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT5_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT5_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_23_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_22_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_21_shift                               (8)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_20_shift                               (0)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_23_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_22_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_21_mask                                (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_20_mask                                (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_23(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_22(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_21(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT5_mpr_data_20(data)                               (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT5_get_mpr_data_23(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT5_get_mpr_data_22(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT5_get_mpr_data_21(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT5_get_mpr_data_20(data)                           (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT6                                                0x18008C78
#define  DC1_MC_DDR4_MPR_RD_DAT6_reg_addr                                        "0xB8008C78"
#define  DC1_MC_DDR4_MPR_RD_DAT6_reg                                             0xB8008C78
#define  DC1_MC_DDR4_MPR_RD_DAT6_inst_addr                                       "0x00D3"
#define  set_DC1_MC_DDR4_MPR_RD_DAT6_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT6_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT6_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT6_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_27_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_26_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_25_shift                               (8)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_24_shift                               (0)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_27_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_26_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_25_mask                                (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_24_mask                                (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_27(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_26(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_25(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT6_mpr_data_24(data)                               (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT6_get_mpr_data_27(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT6_get_mpr_data_26(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT6_get_mpr_data_25(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT6_get_mpr_data_24(data)                           (0x000000FF&(data))

#define  DC1_MC_DDR4_MPR_RD_DAT7                                                0x18008C7C
#define  DC1_MC_DDR4_MPR_RD_DAT7_reg_addr                                        "0xB8008C7C"
#define  DC1_MC_DDR4_MPR_RD_DAT7_reg                                             0xB8008C7C
#define  DC1_MC_DDR4_MPR_RD_DAT7_inst_addr                                       "0x00D4"
#define  set_DC1_MC_DDR4_MPR_RD_DAT7_reg(data)                                   (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT7_reg)=data)
#define  get_DC1_MC_DDR4_MPR_RD_DAT7_reg                                         (*((volatile unsigned int*)DC1_MC_DDR4_MPR_RD_DAT7_reg))
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_31_shift                               (24)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_30_shift                               (16)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_29_shift                               (8)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_28_shift                               (0)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_31_mask                                (0xFF000000)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_30_mask                                (0x00FF0000)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_29_mask                                (0x0000FF00)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_28_mask                                (0x000000FF)
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_31(data)                               (0xFF000000&((data)<<24))
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_30(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_29(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_DDR4_MPR_RD_DAT7_mpr_data_28(data)                               (0x000000FF&(data))
#define  DC1_MC_DDR4_MPR_RD_DAT7_get_mpr_data_31(data)                           ((0xFF000000&(data))>>24)
#define  DC1_MC_DDR4_MPR_RD_DAT7_get_mpr_data_30(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_DDR4_MPR_RD_DAT7_get_mpr_data_29(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_DDR4_MPR_RD_DAT7_get_mpr_data_28(data)                           (0x000000FF&(data))

#define  DC1_MC_CTS_FIFO_CTRL                                                   0x18008C80
#define  DC1_MC_CTS_FIFO_CTRL_reg_addr                                           "0xB8008C80"
#define  DC1_MC_CTS_FIFO_CTRL_reg                                                0xB8008C80
#define  DC1_MC_CTS_FIFO_CTRL_inst_addr                                          "0x00D5"
#define  set_DC1_MC_CTS_FIFO_CTRL_reg(data)                                      (*((volatile unsigned int*)DC1_MC_CTS_FIFO_CTRL_reg)=data)
#define  get_DC1_MC_CTS_FIFO_CTRL_reg                                            (*((volatile unsigned int*)DC1_MC_CTS_FIFO_CTRL_reg))
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_rx_dpi2_shift                          (27)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_rx_dpi2_shift                           (26)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_tx_dpi2_shift                          (25)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_tx_dpi2_shift                           (24)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_dly_rx_shift                               (16)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_dly_tx_shift                               (8)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_rx_shift                               (6)
#define  DC1_MC_CTS_FIFO_CTRL_bypass_en_rx_shift                                 (5)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_rx_shift                                (4)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_tx_shift                               (2)
#define  DC1_MC_CTS_FIFO_CTRL_bypass_en_tx_shift                                 (1)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_tx_shift                                (0)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_rx_dpi2_mask                           (0x08000000)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_rx_dpi2_mask                            (0x04000000)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_tx_dpi2_mask                           (0x02000000)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_tx_dpi2_mask                            (0x01000000)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_dly_rx_mask                                (0x00FF0000)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_dly_tx_mask                                (0x0000FF00)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_rx_mask                                (0x00000040)
#define  DC1_MC_CTS_FIFO_CTRL_bypass_en_rx_mask                                  (0x00000020)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_rx_mask                                 (0x00000010)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_tx_mask                                (0x00000004)
#define  DC1_MC_CTS_FIFO_CTRL_bypass_en_tx_mask                                  (0x00000002)
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_tx_mask                                 (0x00000001)
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_rx_dpi2(data)                          (0x08000000&((data)<<27))
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_rx_dpi2(data)                           (0x04000000&((data)<<26))
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_tx_dpi2(data)                          (0x02000000&((data)<<25))
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_tx_dpi2(data)                           (0x01000000&((data)<<24))
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_dly_rx(data)                               (0x00FF0000&((data)<<16))
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_dly_tx(data)                               (0x0000FF00&((data)<<8))
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_rx(data)                               (0x00000040&((data)<<6))
#define  DC1_MC_CTS_FIFO_CTRL_bypass_en_rx(data)                                 (0x00000020&((data)<<5))
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_rx(data)                                (0x00000010&((data)<<4))
#define  DC1_MC_CTS_FIFO_CTRL_force_rst_n_tx(data)                               (0x00000004&((data)<<2))
#define  DC1_MC_CTS_FIFO_CTRL_bypass_en_tx(data)                                 (0x00000002&((data)<<1))
#define  DC1_MC_CTS_FIFO_CTRL_ref_rst_en_tx(data)                                (0x00000001&(data))
#define  DC1_MC_CTS_FIFO_CTRL_get_force_rst_n_rx_dpi2(data)                      ((0x08000000&(data))>>27)
#define  DC1_MC_CTS_FIFO_CTRL_get_ref_rst_en_rx_dpi2(data)                       ((0x04000000&(data))>>26)
#define  DC1_MC_CTS_FIFO_CTRL_get_force_rst_n_tx_dpi2(data)                      ((0x02000000&(data))>>25)
#define  DC1_MC_CTS_FIFO_CTRL_get_ref_rst_en_tx_dpi2(data)                       ((0x01000000&(data))>>24)
#define  DC1_MC_CTS_FIFO_CTRL_get_ref_rst_dly_rx(data)                           ((0x00FF0000&(data))>>16)
#define  DC1_MC_CTS_FIFO_CTRL_get_ref_rst_dly_tx(data)                           ((0x0000FF00&(data))>>8)
#define  DC1_MC_CTS_FIFO_CTRL_get_force_rst_n_rx(data)                           ((0x00000040&(data))>>6)
#define  DC1_MC_CTS_FIFO_CTRL_get_bypass_en_rx(data)                             ((0x00000020&(data))>>5)
#define  DC1_MC_CTS_FIFO_CTRL_get_ref_rst_en_rx(data)                            ((0x00000010&(data))>>4)
#define  DC1_MC_CTS_FIFO_CTRL_get_force_rst_n_tx(data)                           ((0x00000004&(data))>>2)
#define  DC1_MC_CTS_FIFO_CTRL_get_bypass_en_tx(data)                             ((0x00000002&(data))>>1)
#define  DC1_MC_CTS_FIFO_CTRL_get_ref_rst_en_tx(data)                            (0x00000001&(data))

#define  DC1_MC_MCFIFO_CTRL_FUNC0                                               0x18008900
#define  DC1_MC_MCFIFO_CTRL_FUNC0_reg_addr                                       "0xB8008900"
#define  DC1_MC_MCFIFO_CTRL_FUNC0_reg                                            0xB8008900
#define  DC1_MC_MCFIFO_CTRL_FUNC0_inst_addr                                      "0x00D6"
#define  set_DC1_MC_MCFIFO_CTRL_FUNC0_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC0_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_FUNC0_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC0_reg))
#define  DC1_MC_MCFIFO_CTRL_FUNC0_cmd_rdata_bypass_dis_shift                     (31)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_dummy_mcfifo_shift                             (3)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_rw_in_order_shift                          (2)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_no_new_cmd_shift                           (1)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_cmd_in_order_shift                         (0)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_cmd_rdata_bypass_dis_mask                      (0x80000000)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_dummy_mcfifo_mask                              (0x7FFFFFF8)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_rw_in_order_mask                           (0x00000004)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_no_new_cmd_mask                            (0x00000002)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_cmd_in_order_mask                          (0x00000001)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_cmd_rdata_bypass_dis(data)                     (0x80000000&((data)<<31))
#define  DC1_MC_MCFIFO_CTRL_FUNC0_dummy_mcfifo(data)                             (0x7FFFFFF8&((data)<<3))
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_rw_in_order(data)                          (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_no_new_cmd(data)                           (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_CTRL_FUNC0_exp_cmd_in_order(data)                         (0x00000001&(data))
#define  DC1_MC_MCFIFO_CTRL_FUNC0_get_cmd_rdata_bypass_dis(data)                 ((0x80000000&(data))>>31)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_get_dummy_mcfifo(data)                         ((0x7FFFFFF8&(data))>>3)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_get_exp_rw_in_order(data)                      ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_get_exp_no_new_cmd(data)                       ((0x00000002&(data))>>1)
#define  DC1_MC_MCFIFO_CTRL_FUNC0_get_exp_cmd_in_order(data)                     (0x00000001&(data))

#define  DC1_MC_MCFIFO_CTRL_FUNC1                                               0x18008904
#define  DC1_MC_MCFIFO_CTRL_FUNC1_reg_addr                                       "0xB8008904"
#define  DC1_MC_MCFIFO_CTRL_FUNC1_reg                                            0xB8008904
#define  DC1_MC_MCFIFO_CTRL_FUNC1_inst_addr                                      "0x00D7"
#define  set_DC1_MC_MCFIFO_CTRL_FUNC1_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC1_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_FUNC1_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC1_reg))
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_cmd_no_sel_shift                           (3)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_no_new_cmd_shift                           (1)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_cmd_in_order_shift                         (0)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_cmd_no_sel_mask                            (0x00000008)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_no_new_cmd_mask                            (0x00000002)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_cmd_in_order_mask                          (0x00000001)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_cmd_no_sel(data)                           (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_no_new_cmd(data)                           (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_CTRL_FUNC1_sys_cmd_in_order(data)                         (0x00000001&(data))
#define  DC1_MC_MCFIFO_CTRL_FUNC1_get_sys_cmd_no_sel(data)                       ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_get_sys_no_new_cmd(data)                       ((0x00000002&(data))>>1)
#define  DC1_MC_MCFIFO_CTRL_FUNC1_get_sys_cmd_in_order(data)                     (0x00000001&(data))

#define  DC1_MC_MCFIFO_CTRL_FUNC2                                               0x18008908
#define  DC1_MC_MCFIFO_CTRL_FUNC2_reg_addr                                       "0xB8008908"
#define  DC1_MC_MCFIFO_CTRL_FUNC2_reg                                            0xB8008908
#define  DC1_MC_MCFIFO_CTRL_FUNC2_inst_addr                                      "0x00D8"
#define  set_DC1_MC_MCFIFO_CTRL_FUNC2_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC2_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_FUNC2_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC2_reg))
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_cmd_no_sel_shift                          (3)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_rw_in_order_shift                         (2)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_no_new_cmd_shift                          (1)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_cmd_in_order_shift                        (0)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_cmd_no_sel_mask                           (0x00000008)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_rw_in_order_mask                          (0x00000004)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_no_new_cmd_mask                           (0x00000002)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_cmd_in_order_mask                         (0x00000001)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_cmd_no_sel(data)                          (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_rw_in_order(data)                         (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_no_new_cmd(data)                          (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_CTRL_FUNC2_sys2_cmd_in_order(data)                        (0x00000001&(data))
#define  DC1_MC_MCFIFO_CTRL_FUNC2_get_sys2_cmd_no_sel(data)                      ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_get_sys2_rw_in_order(data)                     ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_get_sys2_no_new_cmd(data)                      ((0x00000002&(data))>>1)
#define  DC1_MC_MCFIFO_CTRL_FUNC2_get_sys2_cmd_in_order(data)                    (0x00000001&(data))

#define  DC1_MC_MCFIFO_CTRL_FUNC3                                               0x1800890C
#define  DC1_MC_MCFIFO_CTRL_FUNC3_reg_addr                                       "0xB800890C"
#define  DC1_MC_MCFIFO_CTRL_FUNC3_reg                                            0xB800890C
#define  DC1_MC_MCFIFO_CTRL_FUNC3_inst_addr                                      "0x00D9"
#define  set_DC1_MC_MCFIFO_CTRL_FUNC3_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC3_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_FUNC3_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_FUNC3_reg))
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_cmd_no_sel_shift                          (3)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_rw_in_order_shift                         (2)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_no_new_cmd_shift                          (1)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_cmd_in_order_shift                        (0)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_cmd_no_sel_mask                           (0x00000008)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_rw_in_order_mask                          (0x00000004)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_no_new_cmd_mask                           (0x00000002)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_cmd_in_order_mask                         (0x00000001)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_cmd_no_sel(data)                          (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_rw_in_order(data)                         (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_no_new_cmd(data)                          (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_CTRL_FUNC3_sys3_cmd_in_order(data)                        (0x00000001&(data))
#define  DC1_MC_MCFIFO_CTRL_FUNC3_get_sys3_cmd_no_sel(data)                      ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_get_sys3_rw_in_order(data)                     ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_get_sys3_no_new_cmd(data)                      ((0x00000002&(data))>>1)
#define  DC1_MC_MCFIFO_CTRL_FUNC3_get_sys3_cmd_in_order(data)                    (0x00000001&(data))

#define  DC1_MC_MCFIFO_CTRL_CMD0                                                0x18008910
#define  DC1_MC_MCFIFO_CTRL_CMD0_reg_addr                                        "0xB8008910"
#define  DC1_MC_MCFIFO_CTRL_CMD0_reg                                             0xB8008910
#define  DC1_MC_MCFIFO_CTRL_CMD0_inst_addr                                       "0x00DA"
#define  set_DC1_MC_MCFIFO_CTRL_CMD0_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD0_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_CMD0_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD0_reg))
#define  DC1_MC_MCFIFO_CTRL_CMD0_exp_wcmd_fifo_th_shift                          (8)
#define  DC1_MC_MCFIFO_CTRL_CMD0_exp_rcmd_fifo_th_shift                          (0)
#define  DC1_MC_MCFIFO_CTRL_CMD0_exp_wcmd_fifo_th_mask                           (0x00000700)
#define  DC1_MC_MCFIFO_CTRL_CMD0_exp_rcmd_fifo_th_mask                           (0x00000007)
#define  DC1_MC_MCFIFO_CTRL_CMD0_exp_wcmd_fifo_th(data)                          (0x00000700&((data)<<8))
#define  DC1_MC_MCFIFO_CTRL_CMD0_exp_rcmd_fifo_th(data)                          (0x00000007&(data))
#define  DC1_MC_MCFIFO_CTRL_CMD0_get_exp_wcmd_fifo_th(data)                      ((0x00000700&(data))>>8)
#define  DC1_MC_MCFIFO_CTRL_CMD0_get_exp_rcmd_fifo_th(data)                      (0x00000007&(data))

#define  DC1_MC_MCFIFO_CTRL_CMD1                                                0x18008914
#define  DC1_MC_MCFIFO_CTRL_CMD1_reg_addr                                        "0xB8008914"
#define  DC1_MC_MCFIFO_CTRL_CMD1_reg                                             0xB8008914
#define  DC1_MC_MCFIFO_CTRL_CMD1_inst_addr                                       "0x00DB"
#define  set_DC1_MC_MCFIFO_CTRL_CMD1_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD1_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_CMD1_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD1_reg))
#define  DC1_MC_MCFIFO_CTRL_CMD1_sys_cmd_fifo_th_shift                           (0)
#define  DC1_MC_MCFIFO_CTRL_CMD1_sys_cmd_fifo_th_mask                            (0x0000000F)
#define  DC1_MC_MCFIFO_CTRL_CMD1_sys_cmd_fifo_th(data)                           (0x0000000F&(data))
#define  DC1_MC_MCFIFO_CTRL_CMD1_get_sys_cmd_fifo_th(data)                       (0x0000000F&(data))

#define  DC1_MC_MCFIFO_CTRL_CMD2                                                0x18008918
#define  DC1_MC_MCFIFO_CTRL_CMD2_reg_addr                                        "0xB8008918"
#define  DC1_MC_MCFIFO_CTRL_CMD2_reg                                             0xB8008918
#define  DC1_MC_MCFIFO_CTRL_CMD2_inst_addr                                       "0x00DC"
#define  set_DC1_MC_MCFIFO_CTRL_CMD2_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD2_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_CMD2_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD2_reg))
#define  DC1_MC_MCFIFO_CTRL_CMD2_sys2_wcmd_fifo_th_shift                         (8)
#define  DC1_MC_MCFIFO_CTRL_CMD2_sys2_rcmd_fifo_th_shift                         (0)
#define  DC1_MC_MCFIFO_CTRL_CMD2_sys2_wcmd_fifo_th_mask                          (0x00001F00)
#define  DC1_MC_MCFIFO_CTRL_CMD2_sys2_rcmd_fifo_th_mask                          (0x0000001F)
#define  DC1_MC_MCFIFO_CTRL_CMD2_sys2_wcmd_fifo_th(data)                         (0x00001F00&((data)<<8))
#define  DC1_MC_MCFIFO_CTRL_CMD2_sys2_rcmd_fifo_th(data)                         (0x0000001F&(data))
#define  DC1_MC_MCFIFO_CTRL_CMD2_get_sys2_wcmd_fifo_th(data)                     ((0x00001F00&(data))>>8)
#define  DC1_MC_MCFIFO_CTRL_CMD2_get_sys2_rcmd_fifo_th(data)                     (0x0000001F&(data))

#define  DC1_MC_MCFIFO_CTRL_CMD3                                                0x1800891C
#define  DC1_MC_MCFIFO_CTRL_CMD3_reg_addr                                        "0xB800891C"
#define  DC1_MC_MCFIFO_CTRL_CMD3_reg                                             0xB800891C
#define  DC1_MC_MCFIFO_CTRL_CMD3_inst_addr                                       "0x00DD"
#define  set_DC1_MC_MCFIFO_CTRL_CMD3_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD3_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_CMD3_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_CMD3_reg))
#define  DC1_MC_MCFIFO_CTRL_CMD3_sys3_wcmd_fifo_th_shift                         (8)
#define  DC1_MC_MCFIFO_CTRL_CMD3_sys3_rcmd_fifo_th_shift                         (0)
#define  DC1_MC_MCFIFO_CTRL_CMD3_sys3_wcmd_fifo_th_mask                          (0x00001F00)
#define  DC1_MC_MCFIFO_CTRL_CMD3_sys3_rcmd_fifo_th_mask                          (0x0000001F)
#define  DC1_MC_MCFIFO_CTRL_CMD3_sys3_wcmd_fifo_th(data)                         (0x00001F00&((data)<<8))
#define  DC1_MC_MCFIFO_CTRL_CMD3_sys3_rcmd_fifo_th(data)                         (0x0000001F&(data))
#define  DC1_MC_MCFIFO_CTRL_CMD3_get_sys3_wcmd_fifo_th(data)                     ((0x00001F00&(data))>>8)
#define  DC1_MC_MCFIFO_CTRL_CMD3_get_sys3_rcmd_fifo_th(data)                     (0x0000001F&(data))

#define  DC1_MC_MCFIFO_CTRL_DAT0                                                0x18008920
#define  DC1_MC_MCFIFO_CTRL_DAT0_reg_addr                                        "0xB8008920"
#define  DC1_MC_MCFIFO_CTRL_DAT0_reg                                             0xB8008920
#define  DC1_MC_MCFIFO_CTRL_DAT0_inst_addr                                       "0x00DE"
#define  set_DC1_MC_MCFIFO_CTRL_DAT0_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT0_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_DAT0_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT0_reg))
#define  DC1_MC_MCFIFO_CTRL_DAT0_exp_wdata_fifo_th_shift                         (12)
#define  DC1_MC_MCFIFO_CTRL_DAT0_exp_rdata_fifo_th_shift                         (0)
#define  DC1_MC_MCFIFO_CTRL_DAT0_exp_wdata_fifo_th_mask                          (0x0003F000)
#define  DC1_MC_MCFIFO_CTRL_DAT0_exp_rdata_fifo_th_mask                          (0x0000007F)
#define  DC1_MC_MCFIFO_CTRL_DAT0_exp_wdata_fifo_th(data)                         (0x0003F000&((data)<<12))
#define  DC1_MC_MCFIFO_CTRL_DAT0_exp_rdata_fifo_th(data)                         (0x0000007F&(data))
#define  DC1_MC_MCFIFO_CTRL_DAT0_get_exp_wdata_fifo_th(data)                     ((0x0003F000&(data))>>12)
#define  DC1_MC_MCFIFO_CTRL_DAT0_get_exp_rdata_fifo_th(data)                     (0x0000007F&(data))

#define  DC1_MC_MCFIFO_CTRL_DAT1                                                0x18008924
#define  DC1_MC_MCFIFO_CTRL_DAT1_reg_addr                                        "0xB8008924"
#define  DC1_MC_MCFIFO_CTRL_DAT1_reg                                             0xB8008924
#define  DC1_MC_MCFIFO_CTRL_DAT1_inst_addr                                       "0x00DF"
#define  set_DC1_MC_MCFIFO_CTRL_DAT1_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT1_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_DAT1_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT1_reg))
#define  DC1_MC_MCFIFO_CTRL_DAT1_sys_wdata_fifo_th_shift                         (12)
#define  DC1_MC_MCFIFO_CTRL_DAT1_sys_rdata_fifo_th_shift                         (0)
#define  DC1_MC_MCFIFO_CTRL_DAT1_sys_wdata_fifo_th_mask                          (0x0003F000)
#define  DC1_MC_MCFIFO_CTRL_DAT1_sys_rdata_fifo_th_mask                          (0x0000007F)
#define  DC1_MC_MCFIFO_CTRL_DAT1_sys_wdata_fifo_th(data)                         (0x0003F000&((data)<<12))
#define  DC1_MC_MCFIFO_CTRL_DAT1_sys_rdata_fifo_th(data)                         (0x0000007F&(data))
#define  DC1_MC_MCFIFO_CTRL_DAT1_get_sys_wdata_fifo_th(data)                     ((0x0003F000&(data))>>12)
#define  DC1_MC_MCFIFO_CTRL_DAT1_get_sys_rdata_fifo_th(data)                     (0x0000007F&(data))

#define  DC1_MC_MCFIFO_CTRL_DAT2                                                0x18008928
#define  DC1_MC_MCFIFO_CTRL_DAT2_reg_addr                                        "0xB8008928"
#define  DC1_MC_MCFIFO_CTRL_DAT2_reg                                             0xB8008928
#define  DC1_MC_MCFIFO_CTRL_DAT2_inst_addr                                       "0x00E0"
#define  set_DC1_MC_MCFIFO_CTRL_DAT2_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT2_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_DAT2_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT2_reg))
#define  DC1_MC_MCFIFO_CTRL_DAT2_sys2_wdata_fifo_th_shift                        (12)
#define  DC1_MC_MCFIFO_CTRL_DAT2_sys2_rdata_fifo_th_shift                        (0)
#define  DC1_MC_MCFIFO_CTRL_DAT2_sys2_wdata_fifo_th_mask                         (0x000FF000)
#define  DC1_MC_MCFIFO_CTRL_DAT2_sys2_rdata_fifo_th_mask                         (0x000001FF)
#define  DC1_MC_MCFIFO_CTRL_DAT2_sys2_wdata_fifo_th(data)                        (0x000FF000&((data)<<12))
#define  DC1_MC_MCFIFO_CTRL_DAT2_sys2_rdata_fifo_th(data)                        (0x000001FF&(data))
#define  DC1_MC_MCFIFO_CTRL_DAT2_get_sys2_wdata_fifo_th(data)                    ((0x000FF000&(data))>>12)
#define  DC1_MC_MCFIFO_CTRL_DAT2_get_sys2_rdata_fifo_th(data)                    (0x000001FF&(data))

#define  DC1_MC_MCFIFO_CTRL_DAT3                                                0x1800892C
#define  DC1_MC_MCFIFO_CTRL_DAT3_reg_addr                                        "0xB800892C"
#define  DC1_MC_MCFIFO_CTRL_DAT3_reg                                             0xB800892C
#define  DC1_MC_MCFIFO_CTRL_DAT3_inst_addr                                       "0x00E1"
#define  set_DC1_MC_MCFIFO_CTRL_DAT3_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT3_reg)=data)
#define  get_DC1_MC_MCFIFO_CTRL_DAT3_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_CTRL_DAT3_reg))
#define  DC1_MC_MCFIFO_CTRL_DAT3_sys3_wdata_fifo_th_shift                        (12)
#define  DC1_MC_MCFIFO_CTRL_DAT3_sys3_rdata_fifo_th_shift                        (0)
#define  DC1_MC_MCFIFO_CTRL_DAT3_sys3_wdata_fifo_th_mask                         (0x000FF000)
#define  DC1_MC_MCFIFO_CTRL_DAT3_sys3_rdata_fifo_th_mask                         (0x000001FF)
#define  DC1_MC_MCFIFO_CTRL_DAT3_sys3_wdata_fifo_th(data)                        (0x000FF000&((data)<<12))
#define  DC1_MC_MCFIFO_CTRL_DAT3_sys3_rdata_fifo_th(data)                        (0x000001FF&(data))
#define  DC1_MC_MCFIFO_CTRL_DAT3_get_sys3_wdata_fifo_th(data)                    ((0x000FF000&(data))>>12)
#define  DC1_MC_MCFIFO_CTRL_DAT3_get_sys3_rdata_fifo_th(data)                    (0x000001FF&(data))

#define  DC1_MC_MCFIFO_DBG_CMD0                                                 0x18008930
#define  DC1_MC_MCFIFO_DBG_CMD0_reg_addr                                         "0xB8008930"
#define  DC1_MC_MCFIFO_DBG_CMD0_reg                                              0xB8008930
#define  DC1_MC_MCFIFO_DBG_CMD0_inst_addr                                        "0x00E2"
#define  set_DC1_MC_MCFIFO_DBG_CMD0_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD0_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_CMD0_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD0_reg))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_dbg_clr_shift                                (31)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_wdata_afifo_overflow_shift                   (30)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_cmd_afifo_overflow_shift                     (29)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_rdata_sram_overflow_shift                    (28)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_wdata_sram_underflow_shift                   (27)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_err_wbl_mis_shift                            (25)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_err_rbl_mis_shift                            (24)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_wcmd_fifo_shift                          (16)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_wcmd_bank_shift                          (12)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_rcmd_fifo_shift                          (4)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_rcmd_bank_shift                          (0)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_dbg_clr_mask                                 (0x80000000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_wdata_afifo_overflow_mask                    (0x40000000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_cmd_afifo_overflow_mask                      (0x20000000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_rdata_sram_overflow_mask                     (0x10000000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_wdata_sram_underflow_mask                    (0x08000000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_err_wbl_mis_mask                             (0x02000000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_err_rbl_mis_mask                             (0x01000000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_wcmd_fifo_mask                           (0x000F0000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_wcmd_bank_mask                           (0x00007000)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_rcmd_fifo_mask                           (0x000000F0)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_rcmd_bank_mask                           (0x00000007)
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_dbg_clr(data)                                (0x80000000&((data)<<31))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_wdata_afifo_overflow(data)                   (0x40000000&((data)<<30))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_cmd_afifo_overflow(data)                     (0x20000000&((data)<<29))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_rdata_sram_overflow(data)                    (0x10000000&((data)<<28))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_wdata_sram_underflow(data)                   (0x08000000&((data)<<27))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_err_wbl_mis(data)                            (0x02000000&((data)<<25))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_err_rbl_mis(data)                            (0x01000000&((data)<<24))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_wcmd_fifo(data)                          (0x000F0000&((data)<<16))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_wcmd_bank(data)                          (0x00007000&((data)<<12))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_rcmd_fifo(data)                          (0x000000F0&((data)<<4))
#define  DC1_MC_MCFIFO_DBG_CMD0_exp_max_rcmd_bank(data)                          (0x00000007&(data))
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_dbg_clr(data)                            ((0x80000000&(data))>>31)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_wdata_afifo_overflow(data)               ((0x40000000&(data))>>30)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_cmd_afifo_overflow(data)                 ((0x20000000&(data))>>29)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_rdata_sram_overflow(data)                ((0x10000000&(data))>>28)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_wdata_sram_underflow(data)               ((0x08000000&(data))>>27)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_err_wbl_mis(data)                        ((0x02000000&(data))>>25)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_err_rbl_mis(data)                        ((0x01000000&(data))>>24)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_max_wcmd_fifo(data)                      ((0x000F0000&(data))>>16)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_max_wcmd_bank(data)                      ((0x00007000&(data))>>12)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_max_rcmd_fifo(data)                      ((0x000000F0&(data))>>4)
#define  DC1_MC_MCFIFO_DBG_CMD0_get_exp_max_rcmd_bank(data)                      (0x00000007&(data))

#define  DC1_MC_MCFIFO_DBG_CMD1                                                 0x18008934
#define  DC1_MC_MCFIFO_DBG_CMD1_reg_addr                                         "0xB8008934"
#define  DC1_MC_MCFIFO_DBG_CMD1_reg                                              0xB8008934
#define  DC1_MC_MCFIFO_DBG_CMD1_inst_addr                                        "0x00E3"
#define  set_DC1_MC_MCFIFO_DBG_CMD1_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD1_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_CMD1_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD1_reg))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_dbg_clr_shift                                (31)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_wdata_afifo_overflow_shift                   (30)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_cmd_afifo_overflow_shift                     (29)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_rdata_sram_overflow_shift                    (28)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_wdata_sram_underflow_shift                   (27)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_err_wbl_mis_shift                            (25)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_err_rbl_mis_shift                            (24)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_max_cmd_fifo_shift                           (4)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_max_cmd_bank_shift                           (0)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_dbg_clr_mask                                 (0x80000000)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_wdata_afifo_overflow_mask                    (0x40000000)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_cmd_afifo_overflow_mask                      (0x20000000)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_rdata_sram_overflow_mask                     (0x10000000)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_wdata_sram_underflow_mask                    (0x08000000)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_err_wbl_mis_mask                             (0x02000000)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_err_rbl_mis_mask                             (0x01000000)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_max_cmd_fifo_mask                            (0x000001F0)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_max_cmd_bank_mask                            (0x00000007)
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_dbg_clr(data)                                (0x80000000&((data)<<31))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_wdata_afifo_overflow(data)                   (0x40000000&((data)<<30))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_cmd_afifo_overflow(data)                     (0x20000000&((data)<<29))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_rdata_sram_overflow(data)                    (0x10000000&((data)<<28))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_wdata_sram_underflow(data)                   (0x08000000&((data)<<27))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_err_wbl_mis(data)                            (0x02000000&((data)<<25))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_err_rbl_mis(data)                            (0x01000000&((data)<<24))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_max_cmd_fifo(data)                           (0x000001F0&((data)<<4))
#define  DC1_MC_MCFIFO_DBG_CMD1_sys_max_cmd_bank(data)                           (0x00000007&(data))
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_dbg_clr(data)                            ((0x80000000&(data))>>31)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_wdata_afifo_overflow(data)               ((0x40000000&(data))>>30)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_cmd_afifo_overflow(data)                 ((0x20000000&(data))>>29)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_rdata_sram_overflow(data)                ((0x10000000&(data))>>28)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_wdata_sram_underflow(data)               ((0x08000000&(data))>>27)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_err_wbl_mis(data)                        ((0x02000000&(data))>>25)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_err_rbl_mis(data)                        ((0x01000000&(data))>>24)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_max_cmd_fifo(data)                       ((0x000001F0&(data))>>4)
#define  DC1_MC_MCFIFO_DBG_CMD1_get_sys_max_cmd_bank(data)                       (0x00000007&(data))

#define  DC1_MC_MCFIFO_DBG_CMD2                                                 0x18008938
#define  DC1_MC_MCFIFO_DBG_CMD2_reg_addr                                         "0xB8008938"
#define  DC1_MC_MCFIFO_DBG_CMD2_reg                                              0xB8008938
#define  DC1_MC_MCFIFO_DBG_CMD2_inst_addr                                        "0x00E4"
#define  set_DC1_MC_MCFIFO_DBG_CMD2_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD2_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_CMD2_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD2_reg))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_dbg_clr_shift                               (31)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_wdata_afifo_overflow_shift                  (30)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_cmd_afifo_overflow_shift                    (29)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_rdata_sram_overflow_shift                   (28)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_wdata_sram_underflow_shift                  (27)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_err_wbl_mis_shift                           (25)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_err_rbl_mis_shift                           (24)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_wcmd_fifo_shift                         (16)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_wcmd_bank_shift                         (12)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_rcmd_fifo_shift                         (4)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_rcmd_bank_shift                         (0)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_dbg_clr_mask                                (0x80000000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_wdata_afifo_overflow_mask                   (0x40000000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_cmd_afifo_overflow_mask                     (0x20000000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_rdata_sram_overflow_mask                    (0x10000000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_wdata_sram_underflow_mask                   (0x08000000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_err_wbl_mis_mask                            (0x02000000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_err_rbl_mis_mask                            (0x01000000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_wcmd_fifo_mask                          (0x003F0000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_wcmd_bank_mask                          (0x00007000)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_rcmd_fifo_mask                          (0x000003F0)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_rcmd_bank_mask                          (0x00000007)
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_dbg_clr(data)                               (0x80000000&((data)<<31))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_wdata_afifo_overflow(data)                  (0x40000000&((data)<<30))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_cmd_afifo_overflow(data)                    (0x20000000&((data)<<29))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_rdata_sram_overflow(data)                   (0x10000000&((data)<<28))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_wdata_sram_underflow(data)                  (0x08000000&((data)<<27))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_err_wbl_mis(data)                           (0x02000000&((data)<<25))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_err_rbl_mis(data)                           (0x01000000&((data)<<24))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_wcmd_fifo(data)                         (0x003F0000&((data)<<16))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_wcmd_bank(data)                         (0x00007000&((data)<<12))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_rcmd_fifo(data)                         (0x000003F0&((data)<<4))
#define  DC1_MC_MCFIFO_DBG_CMD2_sys2_max_rcmd_bank(data)                         (0x00000007&(data))
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_dbg_clr(data)                           ((0x80000000&(data))>>31)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_wdata_afifo_overflow(data)              ((0x40000000&(data))>>30)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_cmd_afifo_overflow(data)                ((0x20000000&(data))>>29)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_rdata_sram_overflow(data)               ((0x10000000&(data))>>28)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_wdata_sram_underflow(data)              ((0x08000000&(data))>>27)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_err_wbl_mis(data)                       ((0x02000000&(data))>>25)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_err_rbl_mis(data)                       ((0x01000000&(data))>>24)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_max_wcmd_fifo(data)                     ((0x003F0000&(data))>>16)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_max_wcmd_bank(data)                     ((0x00007000&(data))>>12)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_max_rcmd_fifo(data)                     ((0x000003F0&(data))>>4)
#define  DC1_MC_MCFIFO_DBG_CMD2_get_sys2_max_rcmd_bank(data)                     (0x00000007&(data))

#define  DC1_MC_MCFIFO_DBG_CMD3                                                 0x1800893C
#define  DC1_MC_MCFIFO_DBG_CMD3_reg_addr                                         "0xB800893C"
#define  DC1_MC_MCFIFO_DBG_CMD3_reg                                              0xB800893C
#define  DC1_MC_MCFIFO_DBG_CMD3_inst_addr                                        "0x00E5"
#define  set_DC1_MC_MCFIFO_DBG_CMD3_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD3_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_CMD3_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_CMD3_reg))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_dbg_clr_shift                               (31)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_wdata_afifo_overflow_shift                  (30)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_cmd_afifo_overflow_shift                    (29)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_rdata_sram_overflow_shift                   (28)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_wdata_sram_underflow_shift                  (27)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_err_wbl_mis_shift                           (25)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_err_rbl_mis_shift                           (24)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_wcmd_fifo_shift                         (16)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_wcmd_bank_shift                         (12)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_rcmd_fifo_shift                         (4)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_rcmd_bank_shift                         (0)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_dbg_clr_mask                                (0x80000000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_wdata_afifo_overflow_mask                   (0x40000000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_cmd_afifo_overflow_mask                     (0x20000000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_rdata_sram_overflow_mask                    (0x10000000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_wdata_sram_underflow_mask                   (0x08000000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_err_wbl_mis_mask                            (0x02000000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_err_rbl_mis_mask                            (0x01000000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_wcmd_fifo_mask                          (0x003F0000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_wcmd_bank_mask                          (0x00007000)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_rcmd_fifo_mask                          (0x000003F0)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_rcmd_bank_mask                          (0x00000007)
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_dbg_clr(data)                               (0x80000000&((data)<<31))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_wdata_afifo_overflow(data)                  (0x40000000&((data)<<30))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_cmd_afifo_overflow(data)                    (0x20000000&((data)<<29))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_rdata_sram_overflow(data)                   (0x10000000&((data)<<28))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_wdata_sram_underflow(data)                  (0x08000000&((data)<<27))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_err_wbl_mis(data)                           (0x02000000&((data)<<25))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_err_rbl_mis(data)                           (0x01000000&((data)<<24))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_wcmd_fifo(data)                         (0x003F0000&((data)<<16))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_wcmd_bank(data)                         (0x00007000&((data)<<12))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_rcmd_fifo(data)                         (0x000003F0&((data)<<4))
#define  DC1_MC_MCFIFO_DBG_CMD3_sys3_max_rcmd_bank(data)                         (0x00000007&(data))
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_dbg_clr(data)                           ((0x80000000&(data))>>31)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_wdata_afifo_overflow(data)              ((0x40000000&(data))>>30)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_cmd_afifo_overflow(data)                ((0x20000000&(data))>>29)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_rdata_sram_overflow(data)               ((0x10000000&(data))>>28)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_wdata_sram_underflow(data)              ((0x08000000&(data))>>27)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_err_wbl_mis(data)                       ((0x02000000&(data))>>25)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_err_rbl_mis(data)                       ((0x01000000&(data))>>24)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_max_wcmd_fifo(data)                     ((0x003F0000&(data))>>16)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_max_wcmd_bank(data)                     ((0x00007000&(data))>>12)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_max_rcmd_fifo(data)                     ((0x000003F0&(data))>>4)
#define  DC1_MC_MCFIFO_DBG_CMD3_get_sys3_max_rcmd_bank(data)                     (0x00000007&(data))

#define  DC1_MC_MCFIFO_DBG_DAT0                                                 0x18008940
#define  DC1_MC_MCFIFO_DBG_DAT0_reg_addr                                         "0xB8008940"
#define  DC1_MC_MCFIFO_DBG_DAT0_reg                                              0xB8008940
#define  DC1_MC_MCFIFO_DBG_DAT0_inst_addr                                        "0x00E6"
#define  set_DC1_MC_MCFIFO_DBG_DAT0_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT0_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_DAT0_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT0_reg))
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_cmd_no_dif_shift                         (22)
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_wdata_fifo_shift                         (12)
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_rdata_fifo_shift                         (0)
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_cmd_no_dif_mask                          (0xFFC00000)
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_wdata_fifo_mask                          (0x0007F000)
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_rdata_fifo_mask                          (0x000000FF)
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_cmd_no_dif(data)                         (0xFFC00000&((data)<<22))
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_wdata_fifo(data)                         (0x0007F000&((data)<<12))
#define  DC1_MC_MCFIFO_DBG_DAT0_exp_max_rdata_fifo(data)                         (0x000000FF&(data))
#define  DC1_MC_MCFIFO_DBG_DAT0_get_exp_max_cmd_no_dif(data)                     ((0xFFC00000&(data))>>22)
#define  DC1_MC_MCFIFO_DBG_DAT0_get_exp_max_wdata_fifo(data)                     ((0x0007F000&(data))>>12)
#define  DC1_MC_MCFIFO_DBG_DAT0_get_exp_max_rdata_fifo(data)                     (0x000000FF&(data))

#define  DC1_MC_MCFIFO_DBG_DAT1                                                 0x18008944
#define  DC1_MC_MCFIFO_DBG_DAT1_reg_addr                                         "0xB8008944"
#define  DC1_MC_MCFIFO_DBG_DAT1_reg                                              0xB8008944
#define  DC1_MC_MCFIFO_DBG_DAT1_inst_addr                                        "0x00E7"
#define  set_DC1_MC_MCFIFO_DBG_DAT1_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT1_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_DAT1_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT1_reg))
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_cmd_no_dif_shift                         (22)
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_wdata_fifo_shift                         (12)
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_rdata_fifo_shift                         (0)
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_cmd_no_dif_mask                          (0xFFC00000)
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_wdata_fifo_mask                          (0x0007F000)
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_rdata_fifo_mask                          (0x000000FF)
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_cmd_no_dif(data)                         (0xFFC00000&((data)<<22))
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_wdata_fifo(data)                         (0x0007F000&((data)<<12))
#define  DC1_MC_MCFIFO_DBG_DAT1_sys_max_rdata_fifo(data)                         (0x000000FF&(data))
#define  DC1_MC_MCFIFO_DBG_DAT1_get_sys_max_cmd_no_dif(data)                     ((0xFFC00000&(data))>>22)
#define  DC1_MC_MCFIFO_DBG_DAT1_get_sys_max_wdata_fifo(data)                     ((0x0007F000&(data))>>12)
#define  DC1_MC_MCFIFO_DBG_DAT1_get_sys_max_rdata_fifo(data)                     (0x000000FF&(data))

#define  DC1_MC_MCFIFO_DBG_DAT2                                                 0x18008948
#define  DC1_MC_MCFIFO_DBG_DAT2_reg_addr                                         "0xB8008948"
#define  DC1_MC_MCFIFO_DBG_DAT2_reg                                              0xB8008948
#define  DC1_MC_MCFIFO_DBG_DAT2_inst_addr                                        "0x00E8"
#define  set_DC1_MC_MCFIFO_DBG_DAT2_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT2_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_DAT2_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT2_reg))
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_cmd_no_dif_shift                        (22)
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_wdata_fifo_shift                        (12)
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_rdata_fifo_shift                        (0)
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_cmd_no_dif_mask                         (0xFFC00000)
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_wdata_fifo_mask                         (0x001FF000)
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_rdata_fifo_mask                         (0x000003FF)
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_cmd_no_dif(data)                        (0xFFC00000&((data)<<22))
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_wdata_fifo(data)                        (0x001FF000&((data)<<12))
#define  DC1_MC_MCFIFO_DBG_DAT2_sys2_max_rdata_fifo(data)                        (0x000003FF&(data))
#define  DC1_MC_MCFIFO_DBG_DAT2_get_sys2_max_cmd_no_dif(data)                    ((0xFFC00000&(data))>>22)
#define  DC1_MC_MCFIFO_DBG_DAT2_get_sys2_max_wdata_fifo(data)                    ((0x001FF000&(data))>>12)
#define  DC1_MC_MCFIFO_DBG_DAT2_get_sys2_max_rdata_fifo(data)                    (0x000003FF&(data))

#define  DC1_MC_MCFIFO_DBG_DAT3                                                 0x1800894C
#define  DC1_MC_MCFIFO_DBG_DAT3_reg_addr                                         "0xB800894C"
#define  DC1_MC_MCFIFO_DBG_DAT3_reg                                              0xB800894C
#define  DC1_MC_MCFIFO_DBG_DAT3_inst_addr                                        "0x00E9"
#define  set_DC1_MC_MCFIFO_DBG_DAT3_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT3_reg)=data)
#define  get_DC1_MC_MCFIFO_DBG_DAT3_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DBG_DAT3_reg))
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_cmd_no_dif_shift                        (22)
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_wdata_fifo_shift                        (12)
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_rdata_fifo_shift                        (0)
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_cmd_no_dif_mask                         (0xFFC00000)
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_wdata_fifo_mask                         (0x001FF000)
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_rdata_fifo_mask                         (0x000003FF)
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_cmd_no_dif(data)                        (0xFFC00000&((data)<<22))
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_wdata_fifo(data)                        (0x001FF000&((data)<<12))
#define  DC1_MC_MCFIFO_DBG_DAT3_sys3_max_rdata_fifo(data)                        (0x000003FF&(data))
#define  DC1_MC_MCFIFO_DBG_DAT3_get_sys3_max_cmd_no_dif(data)                    ((0xFFC00000&(data))>>22)
#define  DC1_MC_MCFIFO_DBG_DAT3_get_sys3_max_wdata_fifo(data)                    ((0x001FF000&(data))>>12)
#define  DC1_MC_MCFIFO_DBG_DAT3_get_sys3_max_rdata_fifo(data)                    (0x000003FF&(data))

#define  DC1_MC_MCFIFO_SRAM_CTRL0                                               0x18008970
#define  DC1_MC_MCFIFO_SRAM_CTRL0_reg_addr                                       "0xB8008970"
#define  DC1_MC_MCFIFO_SRAM_CTRL0_reg                                            0xB8008970
#define  DC1_MC_MCFIFO_SRAM_CTRL0_inst_addr                                      "0x00EA"
#define  set_DC1_MC_MCFIFO_SRAM_CTRL0_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_SRAM_CTRL0_reg)=data)
#define  get_DC1_MC_MCFIFO_SRAM_CTRL0_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_SRAM_CTRL0_reg))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_exp_shift                         (31)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys_shift                         (30)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys2_shift                        (29)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys3_shift                        (28)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_exp_r_shift                      (27)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_exp_w_shift                      (26)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys_r_shift                      (25)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys_w_shift                      (24)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys2_r_shift                     (23)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys2_w_shift                     (22)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys3_r_shift                     (21)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys3_w_shift                     (20)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_rm_exp_shift                         (4)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_rm_sys_shift                         (0)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_exp_mask                          (0x80000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys_mask                          (0x40000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys2_mask                         (0x20000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys3_mask                         (0x10000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_exp_r_mask                       (0x08000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_exp_w_mask                       (0x04000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys_r_mask                       (0x02000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys_w_mask                       (0x01000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys2_r_mask                      (0x00800000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys2_w_mask                      (0x00400000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys3_r_mask                      (0x00200000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys3_w_mask                      (0x00100000)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_rm_exp_mask                          (0x000000F0)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_rm_sys_mask                          (0x0000000F)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_exp(data)                         (0x80000000&((data)<<31))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys(data)                         (0x40000000&((data)<<30))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys2(data)                        (0x20000000&((data)<<29))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_ls_sys3(data)                        (0x10000000&((data)<<28))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_exp_r(data)                      (0x08000000&((data)<<27))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_exp_w(data)                      (0x04000000&((data)<<26))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys_r(data)                      (0x02000000&((data)<<25))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys_w(data)                      (0x01000000&((data)<<24))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys2_r(data)                     (0x00800000&((data)<<23))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys2_w(data)                     (0x00400000&((data)<<22))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys3_r(data)                     (0x00200000&((data)<<21))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_data_2p_ls_sys3_w(data)                     (0x00100000&((data)<<20))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_rm_exp(data)                         (0x000000F0&((data)<<4))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_mf_cmd_2p_rm_sys(data)                         (0x0000000F&(data))
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_cmd_2p_ls_exp(data)                     ((0x80000000&(data))>>31)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_cmd_2p_ls_sys(data)                     ((0x40000000&(data))>>30)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_cmd_2p_ls_sys2(data)                    ((0x20000000&(data))>>29)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_cmd_2p_ls_sys3(data)                    ((0x10000000&(data))>>28)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_exp_r(data)                  ((0x08000000&(data))>>27)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_exp_w(data)                  ((0x04000000&(data))>>26)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_sys_r(data)                  ((0x02000000&(data))>>25)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_sys_w(data)                  ((0x01000000&(data))>>24)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_sys2_r(data)                 ((0x00800000&(data))>>23)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_sys2_w(data)                 ((0x00400000&(data))>>22)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_sys3_r(data)                 ((0x00200000&(data))>>21)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_data_2p_ls_sys3_w(data)                 ((0x00100000&(data))>>20)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_cmd_2p_rm_exp(data)                     ((0x000000F0&(data))>>4)
#define  DC1_MC_MCFIFO_SRAM_CTRL0_get_mf_cmd_2p_rm_sys(data)                     (0x0000000F&(data))

#define  DC1_MC_MCFIFO_SRAM_CTRL1                                               0x18008974
#define  DC1_MC_MCFIFO_SRAM_CTRL1_reg_addr                                       "0xB8008974"
#define  DC1_MC_MCFIFO_SRAM_CTRL1_reg                                            0xB8008974
#define  DC1_MC_MCFIFO_SRAM_CTRL1_inst_addr                                      "0x00EB"
#define  set_DC1_MC_MCFIFO_SRAM_CTRL1_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_SRAM_CTRL1_reg)=data)
#define  get_DC1_MC_MCFIFO_SRAM_CTRL1_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_SRAM_CTRL1_reg))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_exp_shift                        (31)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys_shift                        (30)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys2_shift                       (29)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys3_shift                       (28)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_exp_r_shift                     (27)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_exp_w_shift                     (26)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys_r_shift                     (25)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys_w_shift                     (24)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys2_r_shift                    (23)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys2_w_shift                    (22)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys3_r_shift                    (21)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys3_w_shift                    (20)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rm_sys2_shift                        (4)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rm_sys3_shift                        (0)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_exp_mask                         (0x80000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys_mask                         (0x40000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys2_mask                        (0x20000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys3_mask                        (0x10000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_exp_r_mask                      (0x08000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_exp_w_mask                      (0x04000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys_r_mask                      (0x02000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys_w_mask                      (0x01000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys2_r_mask                     (0x00800000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys2_w_mask                     (0x00400000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys3_r_mask                     (0x00200000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys3_w_mask                     (0x00100000)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rm_sys2_mask                         (0x000000F0)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rm_sys3_mask                         (0x0000000F)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_exp(data)                        (0x80000000&((data)<<31))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys(data)                        (0x40000000&((data)<<30))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys2(data)                       (0x20000000&((data)<<29))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rme_sys3(data)                       (0x10000000&((data)<<28))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_exp_r(data)                     (0x08000000&((data)<<27))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_exp_w(data)                     (0x04000000&((data)<<26))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys_r(data)                     (0x02000000&((data)<<25))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys_w(data)                     (0x01000000&((data)<<24))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys2_r(data)                    (0x00800000&((data)<<23))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys2_w(data)                    (0x00400000&((data)<<22))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys3_r(data)                    (0x00200000&((data)<<21))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_data_2p_rme_sys3_w(data)                    (0x00100000&((data)<<20))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rm_sys2(data)                        (0x000000F0&((data)<<4))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_mf_cmd_2p_rm_sys3(data)                        (0x0000000F&(data))
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_cmd_2p_rme_exp(data)                    ((0x80000000&(data))>>31)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_cmd_2p_rme_sys(data)                    ((0x40000000&(data))>>30)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_cmd_2p_rme_sys2(data)                   ((0x20000000&(data))>>29)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_cmd_2p_rme_sys3(data)                   ((0x10000000&(data))>>28)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_exp_r(data)                 ((0x08000000&(data))>>27)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_exp_w(data)                 ((0x04000000&(data))>>26)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_sys_r(data)                 ((0x02000000&(data))>>25)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_sys_w(data)                 ((0x01000000&(data))>>24)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_sys2_r(data)                ((0x00800000&(data))>>23)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_sys2_w(data)                ((0x00400000&(data))>>22)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_sys3_r(data)                ((0x00200000&(data))>>21)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_data_2p_rme_sys3_w(data)                ((0x00100000&(data))>>20)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_cmd_2p_rm_sys2(data)                    ((0x000000F0&(data))>>4)
#define  DC1_MC_MCFIFO_SRAM_CTRL1_get_mf_cmd_2p_rm_sys3(data)                    (0x0000000F&(data))

#define  DC1_MC_MCFIFO_SRAM_CTRL2                                               0x18008978
#define  DC1_MC_MCFIFO_SRAM_CTRL2_reg_addr                                       "0xB8008978"
#define  DC1_MC_MCFIFO_SRAM_CTRL2_reg                                            0xB8008978
#define  DC1_MC_MCFIFO_SRAM_CTRL2_inst_addr                                      "0x00EC"
#define  set_DC1_MC_MCFIFO_SRAM_CTRL2_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_SRAM_CTRL2_reg)=data)
#define  get_DC1_MC_MCFIFO_SRAM_CTRL2_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_SRAM_CTRL2_reg))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_exp_r_shift                      (28)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_exp_w_shift                      (24)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys_r_shift                      (20)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys_w_shift                      (16)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys2_r_shift                     (12)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys2_w_shift                     (8)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys3_r_shift                     (4)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys3_w_shift                     (0)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_exp_r_mask                       (0xF0000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_exp_w_mask                       (0x0F000000)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys_r_mask                       (0x00F00000)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys_w_mask                       (0x000F0000)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys2_r_mask                      (0x0000F000)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys2_w_mask                      (0x00000F00)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys3_r_mask                      (0x000000F0)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys3_w_mask                      (0x0000000F)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_exp_r(data)                      (0xF0000000&((data)<<28))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_exp_w(data)                      (0x0F000000&((data)<<24))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys_r(data)                      (0x00F00000&((data)<<20))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys_w(data)                      (0x000F0000&((data)<<16))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys2_r(data)                     (0x0000F000&((data)<<12))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys2_w(data)                     (0x00000F00&((data)<<8))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys3_r(data)                     (0x000000F0&((data)<<4))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_mf_data_2p_rm_sys3_w(data)                     (0x0000000F&(data))
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_exp_r(data)                  ((0xF0000000&(data))>>28)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_exp_w(data)                  ((0x0F000000&(data))>>24)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_sys_r(data)                  ((0x00F00000&(data))>>20)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_sys_w(data)                  ((0x000F0000&(data))>>16)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_sys2_r(data)                 ((0x0000F000&(data))>>12)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_sys2_w(data)                 ((0x00000F00&(data))>>8)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_sys3_r(data)                 ((0x000000F0&(data))>>4)
#define  DC1_MC_MCFIFO_SRAM_CTRL2_get_mf_data_2p_rm_sys3_w(data)                 (0x0000000F&(data))

#define  DC1_MC_MCFIFO_BIST_MODE                                                0x18008980
#define  DC1_MC_MCFIFO_BIST_MODE_reg_addr                                        "0xB8008980"
#define  DC1_MC_MCFIFO_BIST_MODE_reg                                             0xB8008980
#define  DC1_MC_MCFIFO_BIST_MODE_inst_addr                                       "0x00ED"
#define  set_DC1_MC_MCFIFO_BIST_MODE_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_MODE_reg)=data)
#define  get_DC1_MC_MCFIFO_BIST_MODE_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_MODE_reg))
#define  DC1_MC_MCFIFO_BIST_MODE_mf_cmd_2p_bist_mode_shift                       (2)
#define  DC1_MC_MCFIFO_BIST_MODE_mf_data_2p_bist_mode_shift                      (1)
#define  DC1_MC_MCFIFO_BIST_MODE_mf_cmd_2p_bist_mode_mask                        (0x00000004)
#define  DC1_MC_MCFIFO_BIST_MODE_mf_data_2p_bist_mode_mask                       (0x00000002)
#define  DC1_MC_MCFIFO_BIST_MODE_mf_cmd_2p_bist_mode(data)                       (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_BIST_MODE_mf_data_2p_bist_mode(data)                      (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_BIST_MODE_get_mf_cmd_2p_bist_mode(data)                   ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_BIST_MODE_get_mf_data_2p_bist_mode(data)                  ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_BIST_DONE                                                0x18008984
#define  DC1_MC_MCFIFO_BIST_DONE_reg_addr                                        "0xB8008984"
#define  DC1_MC_MCFIFO_BIST_DONE_reg                                             0xB8008984
#define  DC1_MC_MCFIFO_BIST_DONE_inst_addr                                       "0x00EE"
#define  set_DC1_MC_MCFIFO_BIST_DONE_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_DONE_reg)=data)
#define  get_DC1_MC_MCFIFO_BIST_DONE_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_DONE_reg))
#define  DC1_MC_MCFIFO_BIST_DONE_mf_cmd_2p_bist_done_shift                       (3)
#define  DC1_MC_MCFIFO_BIST_DONE_mf_data_2p_bist_done_0_shift                    (2)
#define  DC1_MC_MCFIFO_BIST_DONE_mf_data_2p_bist_done_1_shift                    (1)
#define  DC1_MC_MCFIFO_BIST_DONE_mf_cmd_2p_bist_done_mask                        (0x00000008)
#define  DC1_MC_MCFIFO_BIST_DONE_mf_data_2p_bist_done_0_mask                     (0x00000004)
#define  DC1_MC_MCFIFO_BIST_DONE_mf_data_2p_bist_done_1_mask                     (0x00000002)
#define  DC1_MC_MCFIFO_BIST_DONE_mf_cmd_2p_bist_done(data)                       (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_BIST_DONE_mf_data_2p_bist_done_0(data)                    (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_BIST_DONE_mf_data_2p_bist_done_1(data)                    (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_BIST_DONE_get_mf_cmd_2p_bist_done(data)                   ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_BIST_DONE_get_mf_data_2p_bist_done_0(data)                ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_BIST_DONE_get_mf_data_2p_bist_done_1(data)                ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_BIST_FAIL_GRP                                            0x18008988
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_reg_addr                                    "0xB8008988"
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_reg                                         0xB8008988
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_inst_addr                                   "0x00EF"
#define  set_DC1_MC_MCFIFO_BIST_FAIL_GRP_reg(data)                               (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_FAIL_GRP_reg)=data)
#define  get_DC1_MC_MCFIFO_BIST_FAIL_GRP_reg                                     (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_FAIL_GRP_reg))
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_cmd_2p_bist_fail_grp_shift               (3)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_data_2p_bist_fail_grp_shift              (2)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_data_2p_bist_fail_grp1_shift             (1)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_cmd_2p_bist_fail_grp_mask                (0x00000008)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_data_2p_bist_fail_grp_mask               (0x00000004)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_data_2p_bist_fail_grp1_mask              (0x00000002)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_cmd_2p_bist_fail_grp(data)               (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_data_2p_bist_fail_grp(data)              (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_mf_data_2p_bist_fail_grp1(data)             (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_get_mf_cmd_2p_bist_fail_grp(data)           ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_get_mf_data_2p_bist_fail_grp(data)          ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_BIST_FAIL_GRP_get_mf_data_2p_bist_fail_grp1(data)         ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL                                         0x1800898C
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_reg_addr                                 "0xB800898C"
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_reg                                      0xB800898C
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_inst_addr                                "0x00F0"
#define  set_DC1_MC_MCFIFO_BIST_FAIL_DETAIL_reg(data)                            (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_FAIL_DETAIL_reg)=data)
#define  get_DC1_MC_MCFIFO_BIST_FAIL_DETAIL_reg                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_BIST_FAIL_DETAIL_reg))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_exp_shift            (19)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys_shift            (18)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys2_shift           (17)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys3_shift           (16)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_r_shift         (15)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_w_shift         (14)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_r_shift         (13)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_w_shift         (12)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_r_shift        (11)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_w_shift        (10)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_r_shift        (9)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_w_shift        (8)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_r1_shift        (7)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_w1_shift        (6)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_r1_shift        (5)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_w1_shift        (4)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_w1_shift       (3)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_w1_shift       (2)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_exp_mask             (0x00080000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys_mask             (0x00040000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys2_mask            (0x00020000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys3_mask            (0x00010000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_r_mask          (0x00008000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_w_mask          (0x00004000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_r_mask          (0x00002000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_w_mask          (0x00001000)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_r_mask         (0x00000800)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_w_mask         (0x00000400)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_r_mask         (0x00000200)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_w_mask         (0x00000100)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_r1_mask         (0x00000080)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_w1_mask         (0x00000040)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_r1_mask         (0x00000020)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_w1_mask         (0x00000010)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_w1_mask        (0x00000008)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_w1_mask        (0x00000004)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_exp(data)            (0x00080000&((data)<<19))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys(data)            (0x00040000&((data)<<18))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys2(data)           (0x00020000&((data)<<17))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_cmd_2p_bist_fail_sys3(data)           (0x00010000&((data)<<16))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_r(data)         (0x00008000&((data)<<15))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_w(data)         (0x00004000&((data)<<14))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_r(data)         (0x00002000&((data)<<13))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_w(data)         (0x00001000&((data)<<12))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_r(data)        (0x00000800&((data)<<11))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_w(data)        (0x00000400&((data)<<10))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_r(data)        (0x00000200&((data)<<9))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_w(data)        (0x00000100&((data)<<8))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_r1(data)        (0x00000080&((data)<<7))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_exp_w1(data)        (0x00000040&((data)<<6))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_r1(data)        (0x00000020&((data)<<5))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys_w1(data)        (0x00000010&((data)<<4))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys2_w1(data)       (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_mf_data_2p_bist_fail_sys3_w1(data)       (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_cmd_2p_bist_fail_exp(data)        ((0x00080000&(data))>>19)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_cmd_2p_bist_fail_sys(data)        ((0x00040000&(data))>>18)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_cmd_2p_bist_fail_sys2(data)       ((0x00020000&(data))>>17)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_cmd_2p_bist_fail_sys3(data)       ((0x00010000&(data))>>16)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_exp_r(data)     ((0x00008000&(data))>>15)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_exp_w(data)     ((0x00004000&(data))>>14)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys_r(data)     ((0x00002000&(data))>>13)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys_w(data)     ((0x00001000&(data))>>12)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys2_r(data)    ((0x00000800&(data))>>11)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys2_w(data)    ((0x00000400&(data))>>10)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys3_r(data)    ((0x00000200&(data))>>9)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys3_w(data)    ((0x00000100&(data))>>8)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_exp_r1(data)    ((0x00000080&(data))>>7)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_exp_w1(data)    ((0x00000040&(data))>>6)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys_r1(data)    ((0x00000020&(data))>>5)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys_w1(data)    ((0x00000010&(data))>>4)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys2_w1(data)   ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_BIST_FAIL_DETAIL_get_mf_data_2p_bist_fail_sys3_w1(data)   ((0x00000004&(data))>>2)

#define  DC1_MC_MCFIFO_DRF_MODE                                                 0x18008990
#define  DC1_MC_MCFIFO_DRF_MODE_reg_addr                                         "0xB8008990"
#define  DC1_MC_MCFIFO_DRF_MODE_reg                                              0xB8008990
#define  DC1_MC_MCFIFO_DRF_MODE_inst_addr                                        "0x00F1"
#define  set_DC1_MC_MCFIFO_DRF_MODE_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_MODE_reg)=data)
#define  get_DC1_MC_MCFIFO_DRF_MODE_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_MODE_reg))
#define  DC1_MC_MCFIFO_DRF_MODE_mf_cmd_2p_drf_mode_shift                         (2)
#define  DC1_MC_MCFIFO_DRF_MODE_mf_data_2p_drf_mode_shift                        (1)
#define  DC1_MC_MCFIFO_DRF_MODE_mf_cmd_2p_drf_mode_mask                          (0x00000004)
#define  DC1_MC_MCFIFO_DRF_MODE_mf_data_2p_drf_mode_mask                         (0x00000002)
#define  DC1_MC_MCFIFO_DRF_MODE_mf_cmd_2p_drf_mode(data)                         (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_DRF_MODE_mf_data_2p_drf_mode(data)                        (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_DRF_MODE_get_mf_cmd_2p_drf_mode(data)                     ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_DRF_MODE_get_mf_data_2p_drf_mode(data)                    ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_DRF_RESUME                                               0x18008994
#define  DC1_MC_MCFIFO_DRF_RESUME_reg_addr                                       "0xB8008994"
#define  DC1_MC_MCFIFO_DRF_RESUME_reg                                            0xB8008994
#define  DC1_MC_MCFIFO_DRF_RESUME_inst_addr                                      "0x00F2"
#define  set_DC1_MC_MCFIFO_DRF_RESUME_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_RESUME_reg)=data)
#define  get_DC1_MC_MCFIFO_DRF_RESUME_reg                                        (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_RESUME_reg))
#define  DC1_MC_MCFIFO_DRF_RESUME_mf_cmd_2p_drf_resume_shift                     (2)
#define  DC1_MC_MCFIFO_DRF_RESUME_mf_data_2p_drf_resume_shift                    (1)
#define  DC1_MC_MCFIFO_DRF_RESUME_mf_cmd_2p_drf_resume_mask                      (0x00000004)
#define  DC1_MC_MCFIFO_DRF_RESUME_mf_data_2p_drf_resume_mask                     (0x00000002)
#define  DC1_MC_MCFIFO_DRF_RESUME_mf_cmd_2p_drf_resume(data)                     (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_DRF_RESUME_mf_data_2p_drf_resume(data)                    (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_DRF_RESUME_get_mf_cmd_2p_drf_resume(data)                 ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_DRF_RESUME_get_mf_data_2p_drf_resume(data)                ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_DRF_DONE                                                 0x18008998
#define  DC1_MC_MCFIFO_DRF_DONE_reg_addr                                         "0xB8008998"
#define  DC1_MC_MCFIFO_DRF_DONE_reg                                              0xB8008998
#define  DC1_MC_MCFIFO_DRF_DONE_inst_addr                                        "0x00F3"
#define  set_DC1_MC_MCFIFO_DRF_DONE_reg(data)                                    (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_DONE_reg)=data)
#define  get_DC1_MC_MCFIFO_DRF_DONE_reg                                          (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_DONE_reg))
#define  DC1_MC_MCFIFO_DRF_DONE_mf_cmd_2p_drf_done_shift                         (3)
#define  DC1_MC_MCFIFO_DRF_DONE_mf_data_2p_drf_done_0_shift                      (2)
#define  DC1_MC_MCFIFO_DRF_DONE_mf_data_2p_drf_done_1_shift                      (1)
#define  DC1_MC_MCFIFO_DRF_DONE_mf_cmd_2p_drf_done_mask                          (0x00000008)
#define  DC1_MC_MCFIFO_DRF_DONE_mf_data_2p_drf_done_0_mask                       (0x00000004)
#define  DC1_MC_MCFIFO_DRF_DONE_mf_data_2p_drf_done_1_mask                       (0x00000002)
#define  DC1_MC_MCFIFO_DRF_DONE_mf_cmd_2p_drf_done(data)                         (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_DRF_DONE_mf_data_2p_drf_done_0(data)                      (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_DRF_DONE_mf_data_2p_drf_done_1(data)                      (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_DRF_DONE_get_mf_cmd_2p_drf_done(data)                     ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_DRF_DONE_get_mf_data_2p_drf_done_0(data)                  ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_DRF_DONE_get_mf_data_2p_drf_done_1(data)                  ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_DRF_PAUSE                                                0x1800899C
#define  DC1_MC_MCFIFO_DRF_PAUSE_reg_addr                                        "0xB800899C"
#define  DC1_MC_MCFIFO_DRF_PAUSE_reg                                             0xB800899C
#define  DC1_MC_MCFIFO_DRF_PAUSE_inst_addr                                       "0x00F4"
#define  set_DC1_MC_MCFIFO_DRF_PAUSE_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_PAUSE_reg)=data)
#define  get_DC1_MC_MCFIFO_DRF_PAUSE_reg                                         (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_PAUSE_reg))
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_cmd_2p_drf_pause_shift                       (3)
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_data_2p_drf_pause_0_shift                    (2)
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_data_2p_drf_pause_1_shift                    (1)
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_cmd_2p_drf_pause_mask                        (0x00000008)
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_data_2p_drf_pause_0_mask                     (0x00000004)
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_data_2p_drf_pause_1_mask                     (0x00000002)
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_cmd_2p_drf_pause(data)                       (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_data_2p_drf_pause_0(data)                    (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_DRF_PAUSE_mf_data_2p_drf_pause_1(data)                    (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_DRF_PAUSE_get_mf_cmd_2p_drf_pause(data)                   ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_DRF_PAUSE_get_mf_data_2p_drf_pause_0(data)                ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_DRF_PAUSE_get_mf_data_2p_drf_pause_1(data)                ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_DRF_FAIL_GRP                                             0x180089A0
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_reg_addr                                     "0xB80089A0"
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_reg                                          0xB80089A0
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_inst_addr                                    "0x00F5"
#define  set_DC1_MC_MCFIFO_DRF_FAIL_GRP_reg(data)                                (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_FAIL_GRP_reg)=data)
#define  get_DC1_MC_MCFIFO_DRF_FAIL_GRP_reg                                      (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_FAIL_GRP_reg))
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_cmd_2p_drf_fail_grp_shift                 (3)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_data_2p_drf_fail_grp_shift                (2)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_data_2p_drf_fail_grp1_shift               (1)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_cmd_2p_drf_fail_grp_mask                  (0x00000008)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_data_2p_drf_fail_grp_mask                 (0x00000004)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_data_2p_drf_fail_grp1_mask                (0x00000002)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_cmd_2p_drf_fail_grp(data)                 (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_data_2p_drf_fail_grp(data)                (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_mf_data_2p_drf_fail_grp1(data)               (0x00000002&((data)<<1))
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_get_mf_cmd_2p_drf_fail_grp(data)             ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_get_mf_data_2p_drf_fail_grp(data)            ((0x00000004&(data))>>2)
#define  DC1_MC_MCFIFO_DRF_FAIL_GRP_get_mf_data_2p_drf_fail_grp1(data)           ((0x00000002&(data))>>1)

#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL                                          0x180089A4
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_reg_addr                                  "0xB80089A4"
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_reg                                       0xB80089A4
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_inst_addr                                 "0x00F6"
#define  set_DC1_MC_MCFIFO_DRF_FAIL_DETAIL_reg(data)                             (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_FAIL_DETAIL_reg)=data)
#define  get_DC1_MC_MCFIFO_DRF_FAIL_DETAIL_reg                                   (*((volatile unsigned int*)DC1_MC_MCFIFO_DRF_FAIL_DETAIL_reg))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_exp_shift              (19)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys_shift              (18)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys2_shift             (17)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys3_shift             (16)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_r_shift           (15)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_w_shift           (14)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_r_shift           (13)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_w_shift           (12)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_r_shift          (11)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_w_shift          (10)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_r_shift          (9)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_w_shift          (8)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_r1_shift          (7)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_w1_shift          (6)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_r1_shift          (5)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_w1_shift          (4)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_w1_shift         (3)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_w1_shift         (2)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_exp_mask               (0x00080000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys_mask               (0x00040000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys2_mask              (0x00020000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys3_mask              (0x00010000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_r_mask            (0x00008000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_w_mask            (0x00004000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_r_mask            (0x00002000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_w_mask            (0x00001000)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_r_mask           (0x00000800)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_w_mask           (0x00000400)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_r_mask           (0x00000200)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_w_mask           (0x00000100)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_r1_mask           (0x00000080)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_w1_mask           (0x00000040)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_r1_mask           (0x00000020)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_w1_mask           (0x00000010)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_w1_mask          (0x00000008)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_w1_mask          (0x00000004)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_exp(data)              (0x00080000&((data)<<19))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys(data)              (0x00040000&((data)<<18))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys2(data)             (0x00020000&((data)<<17))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_cmd_2p_drf_fail_sys3(data)             (0x00010000&((data)<<16))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_r(data)           (0x00008000&((data)<<15))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_w(data)           (0x00004000&((data)<<14))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_r(data)           (0x00002000&((data)<<13))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_w(data)           (0x00001000&((data)<<12))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_r(data)          (0x00000800&((data)<<11))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_w(data)          (0x00000400&((data)<<10))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_r(data)          (0x00000200&((data)<<9))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_w(data)          (0x00000100&((data)<<8))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_r1(data)          (0x00000080&((data)<<7))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_exp_w1(data)          (0x00000040&((data)<<6))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_r1(data)          (0x00000020&((data)<<5))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys_w1(data)          (0x00000010&((data)<<4))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys2_w1(data)         (0x00000008&((data)<<3))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_mf_data_2p_drf_fail_sys3_w1(data)         (0x00000004&((data)<<2))
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_cmd_2p_drf_fail_exp(data)          ((0x00080000&(data))>>19)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_cmd_2p_drf_fail_sys(data)          ((0x00040000&(data))>>18)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_cmd_2p_drf_fail_sys2(data)         ((0x00020000&(data))>>17)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_cmd_2p_drf_fail_sys3(data)         ((0x00010000&(data))>>16)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_exp_r(data)       ((0x00008000&(data))>>15)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_exp_w(data)       ((0x00004000&(data))>>14)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys_r(data)       ((0x00002000&(data))>>13)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys_w(data)       ((0x00001000&(data))>>12)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys2_r(data)      ((0x00000800&(data))>>11)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys2_w(data)      ((0x00000400&(data))>>10)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys3_r(data)      ((0x00000200&(data))>>9)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys3_w(data)      ((0x00000100&(data))>>8)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_exp_r1(data)      ((0x00000080&(data))>>7)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_exp_w1(data)      ((0x00000040&(data))>>6)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys_r1(data)      ((0x00000020&(data))>>5)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys_w1(data)      ((0x00000010&(data))>>4)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys2_w1(data)     ((0x00000008&(data))>>3)
#define  DC1_MC_MCFIFO_DRF_FAIL_DETAIL_get_mf_data_2p_drf_fail_sys3_w1(data)     ((0x00000004&(data))>>2)

#define  DC1_MC_MCCACHE_CTRL0                                                   0x180089C0
#define  DC1_MC_MCCACHE_CTRL0_reg_addr                                           "0xB80089C0"
#define  DC1_MC_MCCACHE_CTRL0_reg                                                0xB80089C0
#define  DC1_MC_MCCACHE_CTRL0_inst_addr                                          "0x00F7"
#define  set_DC1_MC_MCCACHE_CTRL0_reg(data)                                      (*((volatile unsigned int*)DC1_MC_MCCACHE_CTRL0_reg)=data)
#define  get_DC1_MC_MCCACHE_CTRL0_reg                                            (*((volatile unsigned int*)DC1_MC_MCCACHE_CTRL0_reg))
#define  DC1_MC_MCCACHE_CTRL0_cache_flush_shift                                  (28)
#define  DC1_MC_MCCACHE_CTRL0_sys3_cache_write_chk_dis_shift                     (19)
#define  DC1_MC_MCCACHE_CTRL0_sys2_cache_write_chk_dis_shift                     (18)
#define  DC1_MC_MCCACHE_CTRL0_sys_cache_write_chk_dis_shift                      (17)
#define  DC1_MC_MCCACHE_CTRL0_exp_cache_write_chk_dis_shift                      (16)
#define  DC1_MC_MCCACHE_CTRL0_cache_sys_sel_shift                                (12)
#define  DC1_MC_MCCACHE_CTRL0_dummy_cache_shift                                  (8)
#define  DC1_MC_MCCACHE_CTRL0_scpu_cache_en_shift                                (4)
#define  DC1_MC_MCCACHE_CTRL0_nn_cache_en_shift                                  (3)
#define  DC1_MC_MCCACHE_CTRL0_se_cache_en_shift                                  (2)
#define  DC1_MC_MCCACHE_CTRL0_ve_cache_en_shift                                  (1)
#define  DC1_MC_MCCACHE_CTRL0_gpu_cache_en_shift                                 (0)
#define  DC1_MC_MCCACHE_CTRL0_cache_flush_mask                                   (0x10000000)
#define  DC1_MC_MCCACHE_CTRL0_sys3_cache_write_chk_dis_mask                      (0x00080000)
#define  DC1_MC_MCCACHE_CTRL0_sys2_cache_write_chk_dis_mask                      (0x00040000)
#define  DC1_MC_MCCACHE_CTRL0_sys_cache_write_chk_dis_mask                       (0x00020000)
#define  DC1_MC_MCCACHE_CTRL0_exp_cache_write_chk_dis_mask                       (0x00010000)
#define  DC1_MC_MCCACHE_CTRL0_cache_sys_sel_mask                                 (0x00003000)
#define  DC1_MC_MCCACHE_CTRL0_dummy_cache_mask                                   (0x00000F00)
#define  DC1_MC_MCCACHE_CTRL0_scpu_cache_en_mask                                 (0x00000010)
#define  DC1_MC_MCCACHE_CTRL0_nn_cache_en_mask                                   (0x00000008)
#define  DC1_MC_MCCACHE_CTRL0_se_cache_en_mask                                   (0x00000004)
#define  DC1_MC_MCCACHE_CTRL0_ve_cache_en_mask                                   (0x00000002)
#define  DC1_MC_MCCACHE_CTRL0_gpu_cache_en_mask                                  (0x00000001)
#define  DC1_MC_MCCACHE_CTRL0_cache_flush(data)                                  (0x10000000&((data)<<28))
#define  DC1_MC_MCCACHE_CTRL0_sys3_cache_write_chk_dis(data)                     (0x00080000&((data)<<19))
#define  DC1_MC_MCCACHE_CTRL0_sys2_cache_write_chk_dis(data)                     (0x00040000&((data)<<18))
#define  DC1_MC_MCCACHE_CTRL0_sys_cache_write_chk_dis(data)                      (0x00020000&((data)<<17))
#define  DC1_MC_MCCACHE_CTRL0_exp_cache_write_chk_dis(data)                      (0x00010000&((data)<<16))
#define  DC1_MC_MCCACHE_CTRL0_cache_sys_sel(data)                                (0x00003000&((data)<<12))
#define  DC1_MC_MCCACHE_CTRL0_dummy_cache(data)                                  (0x00000F00&((data)<<8))
#define  DC1_MC_MCCACHE_CTRL0_scpu_cache_en(data)                                (0x00000010&((data)<<4))
#define  DC1_MC_MCCACHE_CTRL0_nn_cache_en(data)                                  (0x00000008&((data)<<3))
#define  DC1_MC_MCCACHE_CTRL0_se_cache_en(data)                                  (0x00000004&((data)<<2))
#define  DC1_MC_MCCACHE_CTRL0_ve_cache_en(data)                                  (0x00000002&((data)<<1))
#define  DC1_MC_MCCACHE_CTRL0_gpu_cache_en(data)                                 (0x00000001&(data))
#define  DC1_MC_MCCACHE_CTRL0_get_cache_flush(data)                              ((0x10000000&(data))>>28)
#define  DC1_MC_MCCACHE_CTRL0_get_sys3_cache_write_chk_dis(data)                 ((0x00080000&(data))>>19)
#define  DC1_MC_MCCACHE_CTRL0_get_sys2_cache_write_chk_dis(data)                 ((0x00040000&(data))>>18)
#define  DC1_MC_MCCACHE_CTRL0_get_sys_cache_write_chk_dis(data)                  ((0x00020000&(data))>>17)
#define  DC1_MC_MCCACHE_CTRL0_get_exp_cache_write_chk_dis(data)                  ((0x00010000&(data))>>16)
#define  DC1_MC_MCCACHE_CTRL0_get_cache_sys_sel(data)                            ((0x00003000&(data))>>12)
#define  DC1_MC_MCCACHE_CTRL0_get_dummy_cache(data)                              ((0x00000F00&(data))>>8)
#define  DC1_MC_MCCACHE_CTRL0_get_scpu_cache_en(data)                            ((0x00000010&(data))>>4)
#define  DC1_MC_MCCACHE_CTRL0_get_nn_cache_en(data)                              ((0x00000008&(data))>>3)
#define  DC1_MC_MCCACHE_CTRL0_get_se_cache_en(data)                              ((0x00000004&(data))>>2)
#define  DC1_MC_MCCACHE_CTRL0_get_ve_cache_en(data)                              ((0x00000002&(data))>>1)
#define  DC1_MC_MCCACHE_CTRL0_get_gpu_cache_en(data)                             (0x00000001&(data))

#define  DC1_MC_MCCACHE_CTRL1                                                   0x180089C4
#define  DC1_MC_MCCACHE_CTRL1_reg_addr                                           "0xB80089C4"
#define  DC1_MC_MCCACHE_CTRL1_reg                                                0xB80089C4
#define  DC1_MC_MCCACHE_CTRL1_inst_addr                                          "0x00F8"
#define  set_DC1_MC_MCCACHE_CTRL1_reg(data)                                      (*((volatile unsigned int*)DC1_MC_MCCACHE_CTRL1_reg)=data)
#define  get_DC1_MC_MCCACHE_CTRL1_reg                                            (*((volatile unsigned int*)DC1_MC_MCCACHE_CTRL1_reg))
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id3_shift                          (24)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id2_shift                          (16)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id1_shift                          (8)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id0_shift                          (0)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id3_mask                           (0xFF000000)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id2_mask                           (0x00FF0000)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id1_mask                           (0x0000FF00)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id0_mask                           (0x000000FF)
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id3(data)                          (0xFF000000&((data)<<24))
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id2(data)                          (0x00FF0000&((data)<<16))
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id1(data)                          (0x0000FF00&((data)<<8))
#define  DC1_MC_MCCACHE_CTRL1_cache_write_chk_id0(data)                          (0x000000FF&(data))
#define  DC1_MC_MCCACHE_CTRL1_get_cache_write_chk_id3(data)                      ((0xFF000000&(data))>>24)
#define  DC1_MC_MCCACHE_CTRL1_get_cache_write_chk_id2(data)                      ((0x00FF0000&(data))>>16)
#define  DC1_MC_MCCACHE_CTRL1_get_cache_write_chk_id1(data)                      ((0x0000FF00&(data))>>8)
#define  DC1_MC_MCCACHE_CTRL1_get_cache_write_chk_id0(data)                      (0x000000FF&(data))

#define  DC1_MC_MCCACHE_MON_CTRL                                                0x180089C8
#define  DC1_MC_MCCACHE_MON_CTRL_reg_addr                                        "0xB80089C8"
#define  DC1_MC_MCCACHE_MON_CTRL_reg                                             0xB80089C8
#define  DC1_MC_MCCACHE_MON_CTRL_inst_addr                                       "0x00F9"
#define  set_DC1_MC_MCCACHE_MON_CTRL_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_CTRL_reg)=data)
#define  get_DC1_MC_MCCACHE_MON_CTRL_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_CTRL_reg))
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_go_shift                              (28)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_rcmd_only_shift                       (12)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_bridge_only_shift                     (8)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_id_shift                              (0)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_go_mask                               (0x10000000)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_rcmd_only_mask                        (0x00001000)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_bridge_only_mask                      (0x00000100)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_id_mask                               (0x000000FF)
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_go(data)                              (0x10000000&((data)<<28))
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_rcmd_only(data)                       (0x00001000&((data)<<12))
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_bridge_only(data)                     (0x00000100&((data)<<8))
#define  DC1_MC_MCCACHE_MON_CTRL_cache_mon_id(data)                              (0x000000FF&(data))
#define  DC1_MC_MCCACHE_MON_CTRL_get_cache_mon_go(data)                          ((0x10000000&(data))>>28)
#define  DC1_MC_MCCACHE_MON_CTRL_get_cache_mon_rcmd_only(data)                   ((0x00001000&(data))>>12)
#define  DC1_MC_MCCACHE_MON_CTRL_get_cache_mon_bridge_only(data)                 ((0x00000100&(data))>>8)
#define  DC1_MC_MCCACHE_MON_CTRL_get_cache_mon_id(data)                          (0x000000FF&(data))

#define  DC1_MC_MCCACHE_MON_OUT0                                                0x180089CC
#define  DC1_MC_MCCACHE_MON_OUT0_reg_addr                                        "0xB80089CC"
#define  DC1_MC_MCCACHE_MON_OUT0_reg                                             0xB80089CC
#define  DC1_MC_MCCACHE_MON_OUT0_inst_addr                                       "0x00FA"
#define  set_DC1_MC_MCCACHE_MON_OUT0_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT0_reg)=data)
#define  get_DC1_MC_MCCACHE_MON_OUT0_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT0_reg))
#define  DC1_MC_MCCACHE_MON_OUT0_total_mon_cycle_shift                           (0)
#define  DC1_MC_MCCACHE_MON_OUT0_total_mon_cycle_mask                            (0xFFFFFFFF)
#define  DC1_MC_MCCACHE_MON_OUT0_total_mon_cycle(data)                           (0xFFFFFFFF&(data))
#define  DC1_MC_MCCACHE_MON_OUT0_get_total_mon_cycle(data)                       (0xFFFFFFFF&(data))

#define  DC1_MC_MCCACHE_MON_OUT1                                                0x180089D0
#define  DC1_MC_MCCACHE_MON_OUT1_reg_addr                                        "0xB80089D0"
#define  DC1_MC_MCCACHE_MON_OUT1_reg                                             0xB80089D0
#define  DC1_MC_MCCACHE_MON_OUT1_inst_addr                                       "0x00FB"
#define  set_DC1_MC_MCCACHE_MON_OUT1_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT1_reg)=data)
#define  get_DC1_MC_MCCACHE_MON_OUT1_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT1_reg))
#define  DC1_MC_MCCACHE_MON_OUT1_total_mon_dat_dc_shift                          (0)
#define  DC1_MC_MCCACHE_MON_OUT1_total_mon_dat_dc_mask                           (0xFFFFFFFF)
#define  DC1_MC_MCCACHE_MON_OUT1_total_mon_dat_dc(data)                          (0xFFFFFFFF&(data))
#define  DC1_MC_MCCACHE_MON_OUT1_get_total_mon_dat_dc(data)                      (0xFFFFFFFF&(data))

#define  DC1_MC_MCCACHE_MON_OUT2                                                0x180089D4
#define  DC1_MC_MCCACHE_MON_OUT2_reg_addr                                        "0xB80089D4"
#define  DC1_MC_MCCACHE_MON_OUT2_reg                                             0xB80089D4
#define  DC1_MC_MCCACHE_MON_OUT2_inst_addr                                       "0x00FC"
#define  set_DC1_MC_MCCACHE_MON_OUT2_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT2_reg)=data)
#define  get_DC1_MC_MCCACHE_MON_OUT2_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT2_reg))
#define  DC1_MC_MCCACHE_MON_OUT2_total_mon_dmy_dc_shift                          (0)
#define  DC1_MC_MCCACHE_MON_OUT2_total_mon_dmy_dc_mask                           (0xFFFFFFFF)
#define  DC1_MC_MCCACHE_MON_OUT2_total_mon_dmy_dc(data)                          (0xFFFFFFFF&(data))
#define  DC1_MC_MCCACHE_MON_OUT2_get_total_mon_dmy_dc(data)                      (0xFFFFFFFF&(data))

#define  DC1_MC_MCCACHE_MON_OUT3                                                0x180089D8
#define  DC1_MC_MCCACHE_MON_OUT3_reg_addr                                        "0xB80089D8"
#define  DC1_MC_MCCACHE_MON_OUT3_reg                                             0xB80089D8
#define  DC1_MC_MCCACHE_MON_OUT3_inst_addr                                       "0x00FD"
#define  set_DC1_MC_MCCACHE_MON_OUT3_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT3_reg)=data)
#define  get_DC1_MC_MCCACHE_MON_OUT3_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT3_reg))
#define  DC1_MC_MCCACHE_MON_OUT3_total_mon_dat_mc_shift                          (0)
#define  DC1_MC_MCCACHE_MON_OUT3_total_mon_dat_mc_mask                           (0xFFFFFFFF)
#define  DC1_MC_MCCACHE_MON_OUT3_total_mon_dat_mc(data)                          (0xFFFFFFFF&(data))
#define  DC1_MC_MCCACHE_MON_OUT3_get_total_mon_dat_mc(data)                      (0xFFFFFFFF&(data))

#define  DC1_MC_MCCACHE_MON_OUT4                                                0x180089DC
#define  DC1_MC_MCCACHE_MON_OUT4_reg_addr                                        "0xB80089DC"
#define  DC1_MC_MCCACHE_MON_OUT4_reg                                             0xB80089DC
#define  DC1_MC_MCCACHE_MON_OUT4_inst_addr                                       "0x00FE"
#define  set_DC1_MC_MCCACHE_MON_OUT4_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT4_reg)=data)
#define  get_DC1_MC_MCCACHE_MON_OUT4_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_MON_OUT4_reg))
#define  DC1_MC_MCCACHE_MON_OUT4_total_mon_dmy_mc_shift                          (0)
#define  DC1_MC_MCCACHE_MON_OUT4_total_mon_dmy_mc_mask                           (0xFFFFFFFF)
#define  DC1_MC_MCCACHE_MON_OUT4_total_mon_dmy_mc(data)                          (0xFFFFFFFF&(data))
#define  DC1_MC_MCCACHE_MON_OUT4_get_total_mon_dmy_mc(data)                      (0xFFFFFFFF&(data))

#define  DC1_MC_MCCACHE_SRAM_CTRL                                               0x180089E0
#define  DC1_MC_MCCACHE_SRAM_CTRL_reg_addr                                       "0xB80089E0"
#define  DC1_MC_MCCACHE_SRAM_CTRL_reg                                            0xB80089E0
#define  DC1_MC_MCCACHE_SRAM_CTRL_inst_addr                                      "0x00FF"
#define  set_DC1_MC_MCCACHE_SRAM_CTRL_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCCACHE_SRAM_CTRL_reg)=data)
#define  get_DC1_MC_MCCACHE_SRAM_CTRL_reg                                        (*((volatile unsigned int*)DC1_MC_MCCACHE_SRAM_CTRL_reg))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_3_shift                   (28)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_2_shift                   (24)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_1_shift                   (20)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_0_shift                   (16)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_3_shift                  (15)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_2_shift                  (14)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_1_shift                  (13)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_0_shift                  (12)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rm_1_shift                    (8)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rm_0_shift                    (4)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rme_1_shift                   (3)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rme_0_shift                   (2)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_ls_shift                     (1)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_ls_shift                      (0)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_3_mask                    (0xF0000000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_2_mask                    (0x0F000000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_1_mask                    (0x00F00000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_0_mask                    (0x000F0000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_3_mask                   (0x00008000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_2_mask                   (0x00004000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_1_mask                   (0x00002000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_0_mask                   (0x00001000)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rm_1_mask                     (0x00000F00)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rm_0_mask                     (0x000000F0)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rme_1_mask                    (0x00000008)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rme_0_mask                    (0x00000004)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_ls_mask                      (0x00000002)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_ls_mask                       (0x00000001)
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_3(data)                   (0xF0000000&((data)<<28))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_2(data)                   (0x0F000000&((data)<<24))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_1(data)                   (0x00F00000&((data)<<20))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rm_0(data)                   (0x000F0000&((data)<<16))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_3(data)                  (0x00008000&((data)<<15))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_2(data)                  (0x00004000&((data)<<14))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_1(data)                  (0x00002000&((data)<<13))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_rme_0(data)                  (0x00001000&((data)<<12))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rm_1(data)                    (0x00000F00&((data)<<8))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rm_0(data)                    (0x000000F0&((data)<<4))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rme_1(data)                   (0x00000008&((data)<<3))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_rme_0(data)                   (0x00000004&((data)<<2))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_table_2p_ls(data)                     (0x00000002&((data)<<1))
#define  DC1_MC_MCCACHE_SRAM_CTRL_mf_cache_data_2p_ls(data)                      (0x00000001&(data))
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rm_3(data)               ((0xF0000000&(data))>>28)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rm_2(data)               ((0x0F000000&(data))>>24)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rm_1(data)               ((0x00F00000&(data))>>20)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rm_0(data)               ((0x000F0000&(data))>>16)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rme_3(data)              ((0x00008000&(data))>>15)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rme_2(data)              ((0x00004000&(data))>>14)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rme_1(data)              ((0x00002000&(data))>>13)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_rme_0(data)              ((0x00001000&(data))>>12)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_data_2p_rm_1(data)                ((0x00000F00&(data))>>8)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_data_2p_rm_0(data)                ((0x000000F0&(data))>>4)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_data_2p_rme_1(data)               ((0x00000008&(data))>>3)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_data_2p_rme_0(data)               ((0x00000004&(data))>>2)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_table_2p_ls(data)                 ((0x00000002&(data))>>1)
#define  DC1_MC_MCCACHE_SRAM_CTRL_get_mf_cache_data_2p_ls(data)                  (0x00000001&(data))

#define  DC1_MC_MCCACHE_BIST_CTRL                                               0x180089E4
#define  DC1_MC_MCCACHE_BIST_CTRL_reg_addr                                       "0xB80089E4"
#define  DC1_MC_MCCACHE_BIST_CTRL_reg                                            0xB80089E4
#define  DC1_MC_MCCACHE_BIST_CTRL_inst_addr                                      "0x0100"
#define  set_DC1_MC_MCCACHE_BIST_CTRL_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCCACHE_BIST_CTRL_reg)=data)
#define  get_DC1_MC_MCCACHE_BIST_CTRL_reg                                        (*((volatile unsigned int*)DC1_MC_MCCACHE_BIST_CTRL_reg))
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_table_2p_bist_done_shift              (5)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_data_2p_bist_done_shift               (4)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_table_2p_bist_mode_shift              (1)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_data_2p_bist_mode_shift               (0)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_table_2p_bist_done_mask               (0x00000020)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_data_2p_bist_done_mask                (0x00000010)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_table_2p_bist_mode_mask               (0x00000002)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_data_2p_bist_mode_mask                (0x00000001)
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_table_2p_bist_done(data)              (0x00000020&((data)<<5))
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_data_2p_bist_done(data)               (0x00000010&((data)<<4))
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_table_2p_bist_mode(data)              (0x00000002&((data)<<1))
#define  DC1_MC_MCCACHE_BIST_CTRL_mf_cache_data_2p_bist_mode(data)               (0x00000001&(data))
#define  DC1_MC_MCCACHE_BIST_CTRL_get_mf_cache_table_2p_bist_done(data)          ((0x00000020&(data))>>5)
#define  DC1_MC_MCCACHE_BIST_CTRL_get_mf_cache_data_2p_bist_done(data)           ((0x00000010&(data))>>4)
#define  DC1_MC_MCCACHE_BIST_CTRL_get_mf_cache_table_2p_bist_mode(data)          ((0x00000002&(data))>>1)
#define  DC1_MC_MCCACHE_BIST_CTRL_get_mf_cache_data_2p_bist_mode(data)           (0x00000001&(data))

#define  DC1_MC_MCCACHE_BIST_FAIL                                               0x180089E8
#define  DC1_MC_MCCACHE_BIST_FAIL_reg_addr                                       "0xB80089E8"
#define  DC1_MC_MCCACHE_BIST_FAIL_reg                                            0xB80089E8
#define  DC1_MC_MCCACHE_BIST_FAIL_inst_addr                                      "0x0101"
#define  set_DC1_MC_MCCACHE_BIST_FAIL_reg(data)                                  (*((volatile unsigned int*)DC1_MC_MCCACHE_BIST_FAIL_reg)=data)
#define  get_DC1_MC_MCCACHE_BIST_FAIL_reg                                        (*((volatile unsigned int*)DC1_MC_MCCACHE_BIST_FAIL_reg))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_3_shift            (9)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_2_shift            (8)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_1_shift            (7)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_0_shift            (6)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_1_shift             (5)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_0_shift             (4)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_grp_shift          (1)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_grp_shift           (0)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_3_mask             (0x00000200)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_2_mask             (0x00000100)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_1_mask             (0x00000080)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_0_mask             (0x00000040)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_1_mask              (0x00000020)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_0_mask              (0x00000010)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_grp_mask           (0x00000002)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_grp_mask            (0x00000001)
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_3(data)            (0x00000200&((data)<<9))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_2(data)            (0x00000100&((data)<<8))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_1(data)            (0x00000080&((data)<<7))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_0(data)            (0x00000040&((data)<<6))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_1(data)             (0x00000020&((data)<<5))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_0(data)             (0x00000010&((data)<<4))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_table_2p_bist_fail_grp(data)          (0x00000002&((data)<<1))
#define  DC1_MC_MCCACHE_BIST_FAIL_mf_cache_data_2p_bist_fail_grp(data)           (0x00000001&(data))
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_table_2p_bist_fail_3(data)        ((0x00000200&(data))>>9)
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_table_2p_bist_fail_2(data)        ((0x00000100&(data))>>8)
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_table_2p_bist_fail_1(data)        ((0x00000080&(data))>>7)
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_table_2p_bist_fail_0(data)        ((0x00000040&(data))>>6)
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_data_2p_bist_fail_1(data)         ((0x00000020&(data))>>5)
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_data_2p_bist_fail_0(data)         ((0x00000010&(data))>>4)
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_table_2p_bist_fail_grp(data)      ((0x00000002&(data))>>1)
#define  DC1_MC_MCCACHE_BIST_FAIL_get_mf_cache_data_2p_bist_fail_grp(data)       (0x00000001&(data))

#define  DC1_MC_MCCACHE_DRF_CTRL                                                0x180089F0
#define  DC1_MC_MCCACHE_DRF_CTRL_reg_addr                                        "0xB80089F0"
#define  DC1_MC_MCCACHE_DRF_CTRL_reg                                             0xB80089F0
#define  DC1_MC_MCCACHE_DRF_CTRL_inst_addr                                       "0x0102"
#define  set_DC1_MC_MCCACHE_DRF_CTRL_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_DRF_CTRL_reg)=data)
#define  get_DC1_MC_MCCACHE_DRF_CTRL_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_DRF_CTRL_reg))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_done_shift                (13)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_done_shift                 (12)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_pause_shift               (9)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_pause_shift                (8)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_resume_shift              (5)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_resume_shift               (4)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_mode_shift                (1)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_mode_shift                 (0)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_done_mask                 (0x00002000)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_done_mask                  (0x00001000)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_pause_mask                (0x00000200)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_pause_mask                 (0x00000100)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_resume_mask               (0x00000020)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_resume_mask                (0x00000010)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_mode_mask                 (0x00000002)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_mode_mask                  (0x00000001)
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_done(data)                (0x00002000&((data)<<13))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_done(data)                 (0x00001000&((data)<<12))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_pause(data)               (0x00000200&((data)<<9))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_pause(data)                (0x00000100&((data)<<8))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_resume(data)              (0x00000020&((data)<<5))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_resume(data)               (0x00000010&((data)<<4))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_table_2p_drf_mode(data)                (0x00000002&((data)<<1))
#define  DC1_MC_MCCACHE_DRF_CTRL_mf_cache_data_2p_drf_mode(data)                 (0x00000001&(data))
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_table_2p_drf_done(data)            ((0x00002000&(data))>>13)
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_data_2p_drf_done(data)             ((0x00001000&(data))>>12)
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_table_2p_drf_pause(data)           ((0x00000200&(data))>>9)
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_data_2p_drf_pause(data)            ((0x00000100&(data))>>8)
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_table_2p_drf_resume(data)          ((0x00000020&(data))>>5)
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_data_2p_drf_resume(data)           ((0x00000010&(data))>>4)
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_table_2p_drf_mode(data)            ((0x00000002&(data))>>1)
#define  DC1_MC_MCCACHE_DRF_CTRL_get_mf_cache_data_2p_drf_mode(data)             (0x00000001&(data))

#define  DC1_MC_MCCACHE_DRF_FAIL                                                0x180089F4
#define  DC1_MC_MCCACHE_DRF_FAIL_reg_addr                                        "0xB80089F4"
#define  DC1_MC_MCCACHE_DRF_FAIL_reg                                             0xB80089F4
#define  DC1_MC_MCCACHE_DRF_FAIL_inst_addr                                       "0x0103"
#define  set_DC1_MC_MCCACHE_DRF_FAIL_reg(data)                                   (*((volatile unsigned int*)DC1_MC_MCCACHE_DRF_FAIL_reg)=data)
#define  get_DC1_MC_MCCACHE_DRF_FAIL_reg                                         (*((volatile unsigned int*)DC1_MC_MCCACHE_DRF_FAIL_reg))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_3_shift              (9)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_2_shift              (8)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_1_shift              (7)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_0_shift              (6)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_1_shift               (5)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_0_shift               (4)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_grp_shift            (1)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_grp_shift             (0)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_3_mask               (0x00000200)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_2_mask               (0x00000100)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_1_mask               (0x00000080)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_0_mask               (0x00000040)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_1_mask                (0x00000020)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_0_mask                (0x00000010)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_grp_mask             (0x00000002)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_grp_mask              (0x00000001)
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_3(data)              (0x00000200&((data)<<9))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_2(data)              (0x00000100&((data)<<8))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_1(data)              (0x00000080&((data)<<7))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_0(data)              (0x00000040&((data)<<6))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_1(data)               (0x00000020&((data)<<5))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_0(data)               (0x00000010&((data)<<4))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_table_2p_drf_fail_grp(data)            (0x00000002&((data)<<1))
#define  DC1_MC_MCCACHE_DRF_FAIL_mf_cache_data_2p_drf_fail_grp(data)             (0x00000001&(data))
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_table_2p_drf_fail_3(data)          ((0x00000200&(data))>>9)
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_table_2p_drf_fail_2(data)          ((0x00000100&(data))>>8)
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_table_2p_drf_fail_1(data)          ((0x00000080&(data))>>7)
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_table_2p_drf_fail_0(data)          ((0x00000040&(data))>>6)
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_data_2p_drf_fail_1(data)           ((0x00000020&(data))>>5)
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_data_2p_drf_fail_0(data)           ((0x00000010&(data))>>4)
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_table_2p_drf_fail_grp(data)        ((0x00000002&(data))>>1)
#define  DC1_MC_MCCACHE_DRF_FAIL_get_mf_cache_data_2p_drf_fail_grp(data)         (0x00000001&(data))

#define  DC1_MC_MMU_CTRL                                                        0x18008B00
#define  DC1_MC_MMU_CTRL_reg_addr                                                "0xB8008B00"
#define  DC1_MC_MMU_CTRL_reg                                                     0xB8008B00
#define  DC1_MC_MMU_CTRL_inst_addr                                               "0x0104"
#define  set_DC1_MC_MMU_CTRL_reg(data)                                           (*((volatile unsigned int*)DC1_MC_MMU_CTRL_reg)=data)
#define  get_DC1_MC_MMU_CTRL_reg                                                 (*((volatile unsigned int*)DC1_MC_MMU_CTRL_reg))
#define  DC1_MC_MMU_CTRL_virtual_start_page_shift                                (15)
#define  DC1_MC_MMU_CTRL_mmu_irq_en_shift                                        (3)
#define  DC1_MC_MMU_CTRL_map_table_clr_shift                                     (2)
#define  DC1_MC_MMU_CTRL_map_en_shift                                            (1)
#define  DC1_MC_MMU_CTRL_mmu_en_shift                                            (0)
#define  DC1_MC_MMU_CTRL_virtual_start_page_mask                                 (0xFFFF8000)
#define  DC1_MC_MMU_CTRL_mmu_irq_en_mask                                         (0x00000008)
#define  DC1_MC_MMU_CTRL_map_table_clr_mask                                      (0x00000004)
#define  DC1_MC_MMU_CTRL_map_en_mask                                             (0x00000002)
#define  DC1_MC_MMU_CTRL_mmu_en_mask                                             (0x00000001)
#define  DC1_MC_MMU_CTRL_virtual_start_page(data)                                (0xFFFF8000&((data)<<15))
#define  DC1_MC_MMU_CTRL_mmu_irq_en(data)                                        (0x00000008&((data)<<3))
#define  DC1_MC_MMU_CTRL_map_table_clr(data)                                     (0x00000004&((data)<<2))
#define  DC1_MC_MMU_CTRL_map_en(data)                                            (0x00000002&((data)<<1))
#define  DC1_MC_MMU_CTRL_mmu_en(data)                                            (0x00000001&(data))
#define  DC1_MC_MMU_CTRL_get_virtual_start_page(data)                            ((0xFFFF8000&(data))>>15)
#define  DC1_MC_MMU_CTRL_get_mmu_irq_en(data)                                    ((0x00000008&(data))>>3)
#define  DC1_MC_MMU_CTRL_get_map_table_clr(data)                                 ((0x00000004&(data))>>2)
#define  DC1_MC_MMU_CTRL_get_map_en(data)                                        ((0x00000002&(data))>>1)
#define  DC1_MC_MMU_CTRL_get_mmu_en(data)                                        (0x00000001&(data))

#define  DC1_MC_MMU_AP                                                          0x18008B04
#define  DC1_MC_MMU_AP_reg_addr                                                  "0xB8008B04"
#define  DC1_MC_MMU_AP_reg                                                       0xB8008B04
#define  DC1_MC_MMU_AP_inst_addr                                                 "0x0105"
#define  set_DC1_MC_MMU_AP_reg(data)                                             (*((volatile unsigned int*)DC1_MC_MMU_AP_reg)=data)
#define  get_DC1_MC_MMU_AP_reg                                                   (*((volatile unsigned int*)DC1_MC_MMU_AP_reg))
#define  DC1_MC_MMU_AP_map_table_ap_shift                                        (0)
#define  DC1_MC_MMU_AP_map_table_ap_mask                                         (0x000003FF)
#define  DC1_MC_MMU_AP_map_table_ap(data)                                        (0x000003FF&(data))
#define  DC1_MC_MMU_AP_get_map_table_ap(data)                                    (0x000003FF&(data))

#define  DC1_MC_MMU_DP                                                          0x18008B08
#define  DC1_MC_MMU_DP_reg_addr                                                  "0xB8008B08"
#define  DC1_MC_MMU_DP_reg                                                       0xB8008B08
#define  DC1_MC_MMU_DP_inst_addr                                                 "0x0106"
#define  set_DC1_MC_MMU_DP_reg(data)                                             (*((volatile unsigned int*)DC1_MC_MMU_DP_reg)=data)
#define  get_DC1_MC_MMU_DP_reg                                                   (*((volatile unsigned int*)DC1_MC_MMU_DP_reg))
#define  DC1_MC_MMU_DP_map_table_dp_shift                                        (0)
#define  DC1_MC_MMU_DP_map_table_dp_mask                                         (0x00003FFF)
#define  DC1_MC_MMU_DP_map_table_dp(data)                                        (0x00003FFF&(data))
#define  DC1_MC_MMU_DP_get_map_table_dp(data)                                    (0x00003FFF&(data))

#define  DC1_MC_MMU_STATUS1                                                     0x18008B0C
#define  DC1_MC_MMU_STATUS1_reg_addr                                             "0xB8008B0C"
#define  DC1_MC_MMU_STATUS1_reg                                                  0xB8008B0C
#define  DC1_MC_MMU_STATUS1_inst_addr                                            "0x0107"
#define  set_DC1_MC_MMU_STATUS1_reg(data)                                        (*((volatile unsigned int*)DC1_MC_MMU_STATUS1_reg)=data)
#define  get_DC1_MC_MMU_STATUS1_reg                                              (*((volatile unsigned int*)DC1_MC_MMU_STATUS1_reg))
#define  DC1_MC_MMU_STATUS1_invalid_id_shift                                     (4)
#define  DC1_MC_MMU_STATUS1_mmu_pending_shift                                    (3)
#define  DC1_MC_MMU_STATUS1_invalid_access_flag_shift                            (2)
#define  DC1_MC_MMU_STATUS1_map_table_read_done_shift                            (1)
#define  DC1_MC_MMU_STATUS1_map_table_write_done_shift                           (0)
#define  DC1_MC_MMU_STATUS1_invalid_id_mask                                      (0x00000FF0)
#define  DC1_MC_MMU_STATUS1_mmu_pending_mask                                     (0x00000008)
#define  DC1_MC_MMU_STATUS1_invalid_access_flag_mask                             (0x00000004)
#define  DC1_MC_MMU_STATUS1_map_table_read_done_mask                             (0x00000002)
#define  DC1_MC_MMU_STATUS1_map_table_write_done_mask                            (0x00000001)
#define  DC1_MC_MMU_STATUS1_invalid_id(data)                                     (0x00000FF0&((data)<<4))
#define  DC1_MC_MMU_STATUS1_mmu_pending(data)                                    (0x00000008&((data)<<3))
#define  DC1_MC_MMU_STATUS1_invalid_access_flag(data)                            (0x00000004&((data)<<2))
#define  DC1_MC_MMU_STATUS1_map_table_read_done(data)                            (0x00000002&((data)<<1))
#define  DC1_MC_MMU_STATUS1_map_table_write_done(data)                           (0x00000001&(data))
#define  DC1_MC_MMU_STATUS1_get_invalid_id(data)                                 ((0x00000FF0&(data))>>4)
#define  DC1_MC_MMU_STATUS1_get_mmu_pending(data)                                ((0x00000008&(data))>>3)
#define  DC1_MC_MMU_STATUS1_get_invalid_access_flag(data)                        ((0x00000004&(data))>>2)
#define  DC1_MC_MMU_STATUS1_get_map_table_read_done(data)                        ((0x00000002&(data))>>1)
#define  DC1_MC_MMU_STATUS1_get_map_table_write_done(data)                       (0x00000001&(data))

#define  DC1_MC_MMU_STATUS2                                                     0x18008B10
#define  DC1_MC_MMU_STATUS2_reg_addr                                             "0xB8008B10"
#define  DC1_MC_MMU_STATUS2_reg                                                  0xB8008B10
#define  DC1_MC_MMU_STATUS2_inst_addr                                            "0x0108"
#define  set_DC1_MC_MMU_STATUS2_reg(data)                                        (*((volatile unsigned int*)DC1_MC_MMU_STATUS2_reg)=data)
#define  get_DC1_MC_MMU_STATUS2_reg                                              (*((volatile unsigned int*)DC1_MC_MMU_STATUS2_reg))
#define  DC1_MC_MMU_STATUS2_invalid_adr_shift                                    (0)
#define  DC1_MC_MMU_STATUS2_invalid_adr_mask                                     (0xFFFFFFFF)
#define  DC1_MC_MMU_STATUS2_invalid_adr(data)                                    (0xFFFFFFFF&(data))
#define  DC1_MC_MMU_STATUS2_get_invalid_adr(data)                                (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DC1_MC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tmras:8;
        RBus_UInt32  res2:2;
        RBus_UInt32  tmrcl:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  tmcl:6;
    };
}dc1_mc_tmctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  tmrrd:5;
        RBus_UInt32  res2:2;
        RBus_UInt32  tmrp:6;
        RBus_UInt32  res3:2;
        RBus_UInt32  tmrcdrd:6;
        RBus_UInt32  tmrc:8;
    };
}dc1_mc_tmctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  tmccd:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  trtp:7;
        RBus_UInt32  res3:3;
        RBus_UInt32  tmwtr:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  tmwr:6;
    };
}dc1_mc_tmctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmfaw:8;
        RBus_UInt32  refcycle:12;
        RBus_UInt32  res1:1;
        RBus_UInt32  tmrfc:11;
    };
}dc1_mc_tmctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  tmaonpd:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tmaofpd:6;
        RBus_UInt32  tmmod:8;
        RBus_UInt32  res3:3;
        RBus_UInt32  tmmrd:5;
    };
}dc1_mc_tmctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  tzqoper:12;
        RBus_UInt32  tzqinit:12;
    };
}dc1_mc_tmctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  tdllk:12;
        RBus_UInt32  tzqcs:12;
    };
}dc1_mc_tmctrl6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tmwrp_a:8;
        RBus_UInt32  tmrrp_a:8;
    };
}dc1_mc_tmctrl7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bank_free_bl_adj:1;
        RBus_UInt32  bank_free_offset_updn:1;
        RBus_UInt32  bank_free_offset:6;
        RBus_UInt32  bank_free_tmrcd:8;
        RBus_UInt32  bank_free_tmrp_rd:8;
        RBus_UInt32  bank_free_tmrp_wr:8;
    };
}dc1_mc_bkfree_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bf_rd_interval:8;
        RBus_UInt32  bf_wr_interval:8;
        RBus_UInt32  bf_rd_thr:4;
        RBus_UInt32  bf_wr_thr:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  bf_en:1;
    };
}dc1_mc_bkfree_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  bf_tmrrd_l:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  bf_tmrrd_s:5;
        RBus_UInt32  res3:2;
        RBus_UInt32  bf_tmrp:6;
        RBus_UInt32  bf_init_interval:8;
    };
}dc1_mc_bkfree_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  bf_tmrtw:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  bf_tmwtr_l:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  bf_tmwtr_s:5;
        RBus_UInt32  res4:2;
        RBus_UInt32  bf_tmccd_diff:2;
    };
}dc1_mc_bkfree_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ref_disable_tmrfc_offset:12;
        RBus_UInt32  aref_num_ref_pullin:4;
        RBus_UInt32  aref_num_ref_limit:4;
        RBus_UInt32  cmd_wr_chg_ref:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  cmd_cnt_ref_limit:4;
    };
}dc1_mc_ref_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dis_acc_interlave:1;
        RBus_UInt32  dis_cmd_grp_in_order:1;
        RBus_UInt32  en_cmd_bg_in_order:1;
    };
}dc1_mc_grp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  odt_post_3t_en:1;
        RBus_UInt32  odt_post_2t_en:1;
        RBus_UInt32  odt_post_1t_en:1;
        RBus_UInt32  odt_pre_1t_en:1;
        RBus_UInt32  odt_first_cycle_dis:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  odt_force_sel:1;
        RBus_UInt32  odt_force_sig:1;
        RBus_UInt32  res4:22;
    };
}dc1_mc_odt_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  res2:12;
        RBus_UInt32  odt_en:1;
        RBus_UInt32  odt_dis:1;
    };
}dc1_mc_odt_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  res4:6;
        RBus_UInt32  res5:2;
        RBus_UInt32  res6:10;
        RBus_UInt32  ddr2_odt_dly:3;
        RBus_UInt32  ddr3:1;
    };
}dc1_mc_dc_mis_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  tmrp_a_sel:1;
        RBus_UInt32  tmrc_sel:1;
        RBus_UInt32  res2:28;
    };
}dc1_mc_dc_misb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  tmmpx_lh:9;
        RBus_UInt32  res2:4;
        RBus_UInt32  tmckmpx:4;
        RBus_UInt32  res3:7;
        RBus_UInt32  ddr4_max_pw_sav_exit:1;
    };
}dc1_mc_mpsm_exit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  tmxmpdll:11;
    };
}dc1_mc_mpsm_exit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  issue_nop_after_sre:1;
        RBus_UInt32  init:1;
        RBus_UInt32  sren:1;
        RBus_UInt32  srex:1;
        RBus_UInt32  exe_emr:1;
        RBus_UInt32  exe_mr:1;
    };
}dc1_mc_dc_mis2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:9;
        RBus_UInt32  lbk_en:1;
        RBus_UInt32  res5:2;
    };
}dc1_mc_dc_misa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_en_15:1;
        RBus_UInt32  dis_ap:1;
        RBus_UInt32  write_en_14:1;
        RBus_UInt32  ddr3_swap:1;
        RBus_UInt32  write_en_13:1;
        RBus_UInt32  end_500us:1;
        RBus_UInt32  write_en_12:1;
        RBus_UInt32  end_200us:1;
        RBus_UInt32  write_en_11:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  write_en_10:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  write_en_9:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  write_en_8:1;
        RBus_UInt32  use_tmmrd:1;
        RBus_UInt32  write_en_7:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  write_en_6:1;
        RBus_UInt32  ddr3_zqcl_short:1;
        RBus_UInt32  write_en_5:1;
        RBus_UInt32  ddr3_exe_zqcl:1;
        RBus_UInt32  write_en_4:1;
        RBus_UInt32  ddr3_exe_mr3:1;
        RBus_UInt32  write_en_3:1;
        RBus_UInt32  ddr3_exe_mr2:1;
        RBus_UInt32  write_en_2:1;
        RBus_UInt32  ddr3_exe_mr1:1;
        RBus_UInt32  write_en_1:1;
        RBus_UInt32  ddr3_exe_mr0:1;
        RBus_UInt32  write_en_0:1;
        RBus_UInt32  ddr3_init:1;
    };
}dc1_mc_dc_ddr3_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hppr_mode:1;
        RBus_UInt32  sppr_mode:1;
        RBus_UInt32  res1:25;
        RBus_UInt32  precharge_type:1;
        RBus_UInt32  exe_prea:1;
        RBus_UInt32  dis_refresh:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
    };
}dc1_mc_dc_write_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  short_zqcl_per_sel:3;
        RBus_UInt32  auto_short_zqcl_en:1;
    };
}dc1_mc_auto_short_zq_cal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_reg:32;
    };
}dc1_mc_dummy_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exmod_reg:16;
        RBus_UInt32  mod_reg:16;
    };
}dc1_mc_mod_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mod3_reg:16;
        RBus_UInt32  mod2_reg:16;
    };
}dc1_mc_mod23_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mc_fifo_err_int:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ddr4_parity_err_1:1;
        RBus_UInt32  ddr4_crc_err_1:1;
        RBus_UInt32  ddr4_parity_err_0:1;
        RBus_UInt32  ddr4_crc_err_0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  err_active:1;
    };
}dc1_mc_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mc_fifo_err_int_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  crc_err_int_en_1:1;
        RBus_UInt32  parity_err_int_en_1:1;
        RBus_UInt32  crc_err_int_en_0:1;
        RBus_UInt32  parity_err_int_en_0:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  int_err_active_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_int_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bank_act:8;
        RBus_UInt32  bg1_cmd_cnt:4;
        RBus_UInt32  bg0_cmd_cnt:4;
        RBus_UInt32  res1:11;
        RBus_UInt32  par_st_36_32:5;
    };
}dc1_mc_sm_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  par_st_31_0:32;
    };
}dc1_mc_sm_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:4;
        RBus_UInt32  res6:7;
        RBus_UInt32  res7:3;
        RBus_UInt32  dbg_mod:6;
    };
}dc1_mc_dc_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  parser_rbus_dbg_bg1_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  parser_rbus_dbg_bg0_sel:3;
        RBus_UInt32  res3:3;
        RBus_UInt32  parser_rbus_dbg_sel:5;
    };
}dc1_mc_par_dbg_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  parser_rbus_dbg:32;
    };
}dc1_mc_par_dbg_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_dbg_out1:16;
        RBus_UInt32  dc_dbg_out0:16;
    };
}dc1_mc_debug01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_dbg_out3:16;
        RBus_UInt32  dc_dbg_out2:16;
    };
}dc1_mc_debug23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdc_dbg_clr:1;
        RBus_UInt32  rdc_dbg_out:31;
    };
}dc1_mc_mc_rdc_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wdc_dbg_clr:1;
        RBus_UInt32  wdc_dbg_out:31;
    };
}dc1_mc_mc_wdc_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_dbg_clr:1;
        RBus_UInt32  eff_dbg_out:31;
    };
}dc1_mc_mc_eff_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alert_sel:2;
        RBus_UInt32  res1:7;
        RBus_UInt32  udq_msb_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  udq_lsb_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  mdq_msb_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  mdq_lsb_sel:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  ldq_msb_sel:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  ldq_lsb_sel:3;
    };
}dc1_mc_cal_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  mem_num_sel:1;
    };
}dc1_mc_fifo_arb_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw0:32;
    };
}dc1_mc_dummy_wdg_rst_fw0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw1:32;
    };
}dc1_mc_dummy_wdg_rst_fw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw2:32;
    };
}dc1_mc_dummy_wdg_rst_fw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw3:32;
    };
}dc1_mc_dummy_wdg_rst_fw3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw0:32;
    };
}dc1_mc_dummy_fw0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw1:32;
    };
}dc1_mc_dummy_fw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw2:32;
    };
}dc1_mc_dummy_fw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw3:32;
    };
}dc1_mc_dummy_fw3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw4:32;
    };
}dc1_mc_dummy_fw4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw5:32;
    };
}dc1_mc_dummy_fw5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw6:32;
    };
}dc1_mc_dummy_fw6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw7:32;
    };
}dc1_mc_dummy_fw7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw8:32;
    };
}dc1_mc_dummy_fw8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw9:32;
    };
}dc1_mc_dummy_fw9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw10:32;
    };
}dc1_mc_dummy_fw10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw11:32;
    };
}dc1_mc_dummy_fw11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw12:32;
    };
}dc1_mc_dummy_fw12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw13:32;
    };
}dc1_mc_dummy_fw13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw14:32;
    };
}dc1_mc_dummy_fw14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw15:32;
    };
}dc1_mc_dummy_fw15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  swap_2ddr_addr:1;
        RBus_UInt32  ddrx2_csx1_mode:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  cs_mask_mrs_sel:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  cs_mask:1;
        RBus_UInt32  cs1_mask:1;
        RBus_UInt32  cs_swap:1;
    };
}dc1_mc_cs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  res2:1;
        RBus_UInt32  cmd_addr_2t_en:1;
        RBus_UInt32  res3:1;
    };
}dc1_mc_cmd_dly_1t_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  gck_ext_cyc:6;
        RBus_UInt32  res2:5;
        RBus_UInt32  par_gck_en:1;
        RBus_UInt32  fsm_gck_en:1;
        RBus_UInt32  ioblk_gck_en:1;
    };
}dc1_mc_gck_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_sc:31;
        RBus_UInt32  emi_scramble_en:1;
    };
}dc1_mc_scramble_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_option:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  merge_bl_limt:1;
        RBus_UInt32  merge_bl:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  scpu_wfifo_thr:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  scpu_qfifo_thr:4;
    };
}dc1_mc_scpu_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_merge_en:1;
        RBus_UInt32  meg_buf_thr_sel:1;
        RBus_UInt32  meg_cmd_chg_rw:1;
        RBus_UInt32  meg_cmd_en:1;
        RBus_UInt32  meg_rcmd_total_dly:4;
        RBus_UInt32  meg_rcmd_dly:4;
        RBus_UInt32  meg_wcmd_total_dly:4;
        RBus_UInt32  meg_wcmd_dly:4;
        RBus_UInt32  meg_rcmd_num:2;
        RBus_UInt32  meg_wcmd_num:2;
        RBus_UInt32  meg_rcmd_cod_sel:1;
        RBus_UInt32  meg_rcmd_cod_3:1;
        RBus_UInt32  meg_rcmd_cod_2:1;
        RBus_UInt32  meg_rcmd_cod_1:1;
        RBus_UInt32  meg_wcmd_cod_sel:1;
        RBus_UInt32  meg_wcmd_cod_3:1;
        RBus_UInt32  meg_wcmd_cod_2:1;
        RBus_UInt32  meg_wcmd_cod_1:1;
    };
}dc1_mc_scpu_debug_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  scpu_err_flag_clr:1;
        RBus_UInt32  scpu_exp_debug_sel:4;
        RBus_UInt32  scpu_exp_debug:24;
    };
}dc1_mc_scpu_debug_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_sf_rx_debug_bit_sel:8;
        RBus_UInt32  res1:19;
        RBus_UInt32  scpu_sf_rx_gated:1;
        RBus_UInt32  scpu_sf_rx_mode:1;
        RBus_UInt32  scpu_sf_rx_start:1;
        RBus_UInt32  scpu_sf_tx_mode:1;
        RBus_UInt32  scpu_sf_tx_start:1;
    };
}dc1_mc_scpu_sf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  scpu_sf_rx_fail_bit_status_ro:1;
        RBus_UInt32  scpu_sf_rx_done_ro:1;
        RBus_UInt32  scpu_sf_rx_err_ro:1;
        RBus_UInt32  scpu_sf_tx_work_ro:1;
    };
}dc1_mc_scpu_sf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_35:8;
        RBus_UInt32  mpr_data_34:8;
        RBus_UInt32  mpr_data_33:8;
        RBus_UInt32  mpr_data_32:8;
    };
}dc1_mc_ddr4_mpr_rd_dat8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_39:8;
        RBus_UInt32  mpr_data_38:8;
        RBus_UInt32  mpr_data_37:8;
        RBus_UInt32  mpr_data_36:8;
    };
}dc1_mc_ddr4_mpr_rd_dat9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_43:8;
        RBus_UInt32  mpr_data_42:8;
        RBus_UInt32  mpr_data_41:8;
        RBus_UInt32  mpr_data_40:8;
    };
}dc1_mc_ddr4_mpr_rd_dat10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_47:8;
        RBus_UInt32  mpr_data_46:8;
        RBus_UInt32  mpr_data_45:8;
        RBus_UInt32  mpr_data_44:8;
    };
}dc1_mc_ddr4_mpr_rd_dat11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_bist_mode:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_bist_mode:1;
    };
}dc1_mc_dc_phy_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_bist_done:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_bist_done:1;
    };
}dc1_mc_dc_phy_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_bist_fail_0:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  eff_bist_fail_all:1;
        RBus_UInt32  eff_bist_fail_1:1;
        RBus_UInt32  eff_bist_fail_0:1;
    };
}dc1_mc_dc_phy_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_drf_mode:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_drf_mode:1;
    };
}dc1_mc_dc_phy_bist_drf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_drf_resume:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_drf_resume:1;
    };
}dc1_mc_dc_phy_bist_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_drf_done:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_drf_done:1;
    };
}dc1_mc_dc_phy_bist0_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_drf_pause:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_drf_pause:1;
    };
}dc1_mc_dc_phy_bist_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_drf_bist_fail_0:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  eff_drf_bist_fail_all:1;
        RBus_UInt32  eff_drf_bist_fail_1:1;
        RBus_UInt32  eff_drf_bist_fail_0:1;
    };
}dc1_mc_dc_phy_bist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_dummy:32;
    };
}dc1_mc_dc_phy_bist_detail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  mmu_sram_rme:1;
        RBus_UInt32  mmu_sram_rm:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  eff_sram_rme:1;
        RBus_UInt32  eff_sram_rm:4;
    };
}dc1_mc_dc_phy_bist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_sram_ls:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_sram_ls:1;
    };
}dc1_mc_dc_phy_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  mmu_sram_test1:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  eff_sram_test1:1;
    };
}dc1_mc_dc_phy_bist_test1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dc1_mc_ptg_ready_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dc1_mc_ptg_select_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  meas_period:16;
        RBus_UInt32  res2:2;
        RBus_UInt32  meas_id_ddrsel:2;
        RBus_UInt32  rwcnt_ddrsel:2;
        RBus_UInt32  meas_int_src:1;
        RBus_UInt32  eff_meas_en:1;
    };
}dc1_mc_eff_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  rd_cnt:29;
    };
}dc1_mc_read_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wr_cnt:29;
    };
}dc1_mc_write_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  rd_chop_cnt:29;
    };
}dc1_mc_read_chop_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  wr_chop_cnt:29;
    };
}dc1_mc_write_chop_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  parst_acc_rd_cnt:29;
    };
}dc1_mc_parst_acc_rd_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  parst_acc_wr_cnt:29;
    };
}dc1_mc_parst_acc_wr_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  par_idle_cnt:29;
    };
}dc1_mc_par_idle_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr00_togl:29;
    };
}dc1_mc_adr00_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr01_togl:29;
    };
}dc1_mc_adr01_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr02_togl:29;
    };
}dc1_mc_adr02_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr03_togl:29;
    };
}dc1_mc_adr03_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr04_togl:29;
    };
}dc1_mc_adr04_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr05_togl:29;
    };
}dc1_mc_adr05_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr06_togl:29;
    };
}dc1_mc_adr06_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr07_togl:29;
    };
}dc1_mc_adr07_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr08_togl:29;
    };
}dc1_mc_adr08_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr09_togl:29;
    };
}dc1_mc_adr09_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr10_togl:29;
    };
}dc1_mc_adr10_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr11_togl:29;
    };
}dc1_mc_adr11_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr12_togl:29;
    };
}dc1_mc_adr12_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr13_togl:29;
    };
}dc1_mc_adr13_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr14_togl:29;
    };
}dc1_mc_adr14_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr15_togl:29;
    };
}dc1_mc_adr15_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr16_togl:29;
    };
}dc1_mc_adr16_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr17_togl:29;
    };
}dc1_mc_adr17_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr18_togl:29;
    };
}dc1_mc_adr18_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr19_togl:29;
    };
}dc1_mc_adr19_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  bg_unbalance_cnt:29;
    };
}dc1_mc_bg_unbalance_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_dummy:32;
    };
}dc1_mc_eff_dmy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_ref_mode_enable:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  sr_ref_total_cyc:18;
    };
}dc1_mc_sr_ref_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  meas_sram_func2_en:1;
        RBus_UInt32  meas_sram_record_mode:1;
        RBus_UInt32  meas_sram_record_en:1;
    };
}dc1_mc_client_meas_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_id_update_done:1;
        RBus_UInt32  res1:20;
        RBus_UInt32  meas_sram_num:3;
        RBus_UInt32  meas_sram_address:8;
    };
}dc1_mc_client_meas_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_read_cnt:32;
    };
}dc1_mc_client_meas_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_write_cnt:32;
    };
}dc1_mc_client_meas_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  current_accessing_sram:3;
    };
}dc1_mc_client_meas_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_cyc_cnt:32;
    };
}dc1_mc_meas_cyc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_cyc_cnt:32;
    };
}dc1_mc_refresh_cyc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  mes_mem_cmp_id:8;
        RBus_UInt32  res2:7;
        RBus_UInt32  mes_mem_cmp_dir:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  mes_mem_tras_adr:1;
        RBus_UInt32  mes_mem_tras_rw:1;
        RBus_UInt32  mes_mem_tras_id:1;
        RBus_UInt32  mes_mem_tras_en:1;
    };
}dc1_mc_mc_mestra_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mes_cmp_addr:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_mc_mestra_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mes_cmp_addr_mask:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_mc_mestra_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr20_togl:29;
    };
}dc1_mc_adr20_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr21_togl:29;
    };
}dc1_mc_adr21_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr22_togl:29;
    };
}dc1_mc_adr22_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr23_togl:29;
    };
}dc1_mc_adr23_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr24_togl:29;
    };
}dc1_mc_adr24_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr25_togl:29;
    };
}dc1_mc_adr25_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr26_togl:29;
    };
}dc1_mc_adr26_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr27_togl:29;
    };
}dc1_mc_adr27_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr28_togl:29;
    };
}dc1_mc_adr28_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr29_togl:29;
    };
}dc1_mc_adr29_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr30_togl:29;
    };
}dc1_mc_adr30_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  adr31_togl:29;
    };
}dc1_mc_adr31_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  hi_priority_id6_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hi_priority_id3_en:1;
        RBus_UInt32  hi_priority_id2_en:1;
        RBus_UInt32  hi_priority_id1_en:1;
        RBus_UInt32  hi_priority_id0_en:1;
        RBus_UInt32  dis_tracking_gp1_id_en:1;
        RBus_UInt32  dis_tracking_gp0_id_en:1;
        RBus_UInt32  dis_tracking_id0_en:1;
        RBus_UInt32  dis_tracking_id1_en:1;
        RBus_UInt32  ch_ref_bl_gt_sel:1;
        RBus_UInt32  ch_un_match_id_pg_wt:1;
        RBus_UInt32  ch_tag_tracking:1;
        RBus_UInt32  ch_dir_cont_chg_sel:1;
        RBus_UInt32  ch_parser_cmd_limt_sel:1;
        RBus_UInt32  ch_dir_short_dly_en:1;
        RBus_UInt32  ch_dir_cont_bl_mode:2;
        RBus_UInt32  tracking_sel:1;
        RBus_UInt32  bank_wr_sel:1;
        RBus_UInt32  channel_id_weight_en:1;
        RBus_UInt32  channel_rw_weight_en:1;
    };
}dc1_mc_qos_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hi_priority_id3:8;
        RBus_UInt32  hi_priority_id2:8;
        RBus_UInt32  hi_priority_id1:8;
        RBus_UInt32  hi_priority_id0:8;
    };
}dc1_mc_qos_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hi_priority_mask_id6:8;
        RBus_UInt32  hi_priority_id6:8;
        RBus_UInt32  res1:16;
    };
}dc1_mc_qos_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_dir_max_bl:12;
        RBus_UInt32  res1:20;
    };
}dc1_mc_qos_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  total_rw_bl_low_bound_2:13;
        RBus_UInt32  res2:16;
    };
}dc1_mc_qos_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  total_rw_bl_low_bound_w:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  total_rw_bl_low_bound_r:13;
    };
}dc1_mc_qos_ctl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  long_bl_thr:6;
        RBus_UInt32  res2:3;
        RBus_UInt32  short_rw_ps_bl_thr:5;
        RBus_UInt32  short_rw_bl_thr:8;
    };
}dc1_mc_qos_ctl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  ref_mask_dir:2;
        RBus_UInt32  ref_mask_urg2_ch:6;
        RBus_UInt32  ref_mask_id3_en:1;
        RBus_UInt32  ref_mask_id2_en:1;
        RBus_UInt32  ref_mask_id1_en:1;
        RBus_UInt32  ref_mask_id0_en:1;
        RBus_UInt32  ref_mask_ch:3;
        RBus_UInt32  ch_ahead_en:1;
    };
}dc1_mc_qos_ctl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  ch_parser_total_bl_max:10;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch_ddr4_balance_cmd_max:4;
        RBus_UInt32  ch_parser_cmd_max:4;
    };
}dc1_mc_qos_ctl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  ddr4_balance_bl_thr:6;
        RBus_UInt32  res2:13;
        RBus_UInt32  ddr4_db_tracking:1;
        RBus_UInt32  ddr4_fast_con:1;
        RBus_UInt32  ddr4_balance_con:1;
    };
}dc1_mc_qos_ctl_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  ch_max_id_bl_thr:10;
        RBus_UInt32  res2:15;
        RBus_UInt32  ch_max_id_bl_en:1;
    };
}dc1_mc_qos_ctl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dis_tracking_gp0_id:4;
        RBus_UInt32  dis_tracking_gp1_id:4;
        RBus_UInt32  dis_tracking_id1:8;
        RBus_UInt32  dis_tracking_id0:8;
    };
}dc1_mc_qos_ctl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch0_page_insert_mapping:4;
        RBus_UInt32  ch0_bank_free_mapping:4;
        RBus_UInt32  ch0_dir_insert_mapping:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  ch0_acc_trigger_sel:1;
        RBus_UInt32  ch0_acc_mode:1;
        RBus_UInt32  ch0_acc_clr_mode:2;
        RBus_UInt32  ch0_urg2_wr_brk_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ch0_urg2_strong_en:1;
        RBus_UInt32  ch0_oldest_timer_2_en:1;
        RBus_UInt32  ch0_oldest_timer_en:1;
        RBus_UInt32  ch0_oldest_cmd_select_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_ch0_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch0_quota_bw_ini:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch0_bw_quota_max:8;
        RBus_UInt32  res2:8;
    };
}dc1_mc_ch0_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch0_oldest_time_2:12;
        RBus_UInt32  ch0_oldest_time:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch0_bw_acc_unit:4;
    };
}dc1_mc_ch0_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch0_cmd_extend_num:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ch0_extend_bl_max:6;
        RBus_UInt32  ch0_ostd_bl_max:12;
        RBus_UInt32  ch0_ostd_cmd_max:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch0_outstand_en:1;
    };
}dc1_mc_ch0_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch1_page_insert_mapping:4;
        RBus_UInt32  ch1_bank_free_mapping:4;
        RBus_UInt32  ch1_dir_insert_mapping:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  ch1_acc_trigger_sel:1;
        RBus_UInt32  ch1_acc_mode:1;
        RBus_UInt32  ch1_acc_clr_mode:2;
        RBus_UInt32  ch1_urg2_wr_brk_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ch1_urg2_strong_en:1;
        RBus_UInt32  ch1_oldest_timer_2_en:1;
        RBus_UInt32  ch1_oldest_timer_en:1;
        RBus_UInt32  ch1_oldest_cmd_select_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_ch1_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch1_quota_bw_ini:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch1_bw_quota_max:8;
        RBus_UInt32  res2:8;
    };
}dc1_mc_ch1_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch1_oldest_time_2:12;
        RBus_UInt32  ch1_oldest_time:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch1_bw_acc_unit:4;
    };
}dc1_mc_ch1_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch1_cmd_extend_num:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ch1_extend_bl_max:6;
        RBus_UInt32  ch1_ostd_bl_max:12;
        RBus_UInt32  ch1_ostd_cmd_max:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch1_outstand_en:1;
    };
}dc1_mc_ch1_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch2_page_insert_mapping:4;
        RBus_UInt32  ch2_bank_free_mapping:4;
        RBus_UInt32  ch2_dir_insert_mapping:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  ch2_acc_trigger_sel:1;
        RBus_UInt32  ch2_acc_mode:1;
        RBus_UInt32  ch2_acc_clr_mode:2;
        RBus_UInt32  ch2_urg2_wr_brk_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ch2_urg2_strong_en:1;
        RBus_UInt32  ch2_oldest_timer_2_en:1;
        RBus_UInt32  ch2_oldest_timer_en:1;
        RBus_UInt32  ch2_oldest_cmd_select_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_ch2_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch2_quota_bw_ini:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch2_bw_quota_max:8;
        RBus_UInt32  res2:8;
    };
}dc1_mc_ch2_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch2_oldest_time_2:12;
        RBus_UInt32  ch2_oldest_time:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch2_bw_acc_unit:4;
    };
}dc1_mc_ch2_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch2_cmd_extend_num:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ch2_extend_bl_max:6;
        RBus_UInt32  ch2_ostd_bl_max:12;
        RBus_UInt32  ch2_ostd_cmd_max:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch2_outstand_en:1;
    };
}dc1_mc_ch2_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch3_page_insert_mapping:4;
        RBus_UInt32  ch3_bank_free_mapping:4;
        RBus_UInt32  ch3_dir_insert_mapping:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  ch3_acc_trigger_sel:1;
        RBus_UInt32  ch3_acc_mode:1;
        RBus_UInt32  ch3_acc_clr_mode:2;
        RBus_UInt32  ch3_urg2_wr_brk_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ch3_urg2_strong_en:1;
        RBus_UInt32  ch3_oldest_timer_2_en:1;
        RBus_UInt32  ch3_oldest_timer_en:1;
        RBus_UInt32  ch3_oldest_cmd_select_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_ch3_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch3_quota_bw_ini:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch3_bw_quota_max:8;
        RBus_UInt32  res2:8;
    };
}dc1_mc_ch3_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch3_oldest_time_2:12;
        RBus_UInt32  ch3_oldest_time:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch3_bw_acc_unit:4;
    };
}dc1_mc_ch3_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch3_cmd_extend_num:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ch3_extend_bl_max:6;
        RBus_UInt32  ch3_ostd_bl_max:12;
        RBus_UInt32  ch3_ostd_cmd_max:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch3_outstand_en:1;
    };
}dc1_mc_ch3_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch4_page_insert_mapping:4;
        RBus_UInt32  ch4_bank_free_mapping:4;
        RBus_UInt32  ch4_dir_insert_mapping:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  ch4_acc_trigger_sel:1;
        RBus_UInt32  ch4_acc_mode:1;
        RBus_UInt32  ch4_acc_clr_mode:2;
        RBus_UInt32  ch4_urg2_wr_brk_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ch4_urg2_strong_en:1;
        RBus_UInt32  ch4_oldest_timer_2_en:1;
        RBus_UInt32  ch4_oldest_timer_en:1;
        RBus_UInt32  ch4_oldest_cmd_select_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_ch4_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch4_quota_bw_ini:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch4_bw_quota_max:8;
        RBus_UInt32  res2:8;
    };
}dc1_mc_ch4_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch4_oldest_time_2:12;
        RBus_UInt32  ch4_oldest_time:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch4_bw_acc_unit:4;
    };
}dc1_mc_ch4_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch4_cmd_extend_num:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ch4_extend_bl_max:6;
        RBus_UInt32  ch4_ostd_bl_max:12;
        RBus_UInt32  ch4_ostd_cmd_max:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch4_outstand_en:1;
    };
}dc1_mc_ch4_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch5_page_insert_mapping:4;
        RBus_UInt32  ch5_bank_free_mapping:4;
        RBus_UInt32  ch5_dir_insert_mapping:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  ch5_acc_trigger_sel:1;
        RBus_UInt32  ch5_acc_mode:1;
        RBus_UInt32  ch5_acc_clr_mode:2;
        RBus_UInt32  ch5_urg2_wr_brk_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ch5_urg2_strong_en:1;
        RBus_UInt32  ch5_oldest_timer_2_en:1;
        RBus_UInt32  ch5_oldest_timer_en:1;
        RBus_UInt32  ch5_oldest_cmd_select_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_ch5_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch5_quota_bw_ini:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch5_bw_quota_max:8;
        RBus_UInt32  res2:8;
    };
}dc1_mc_ch5_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch5_oldest_time_2:12;
        RBus_UInt32  ch5_oldest_time:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch5_bw_acc_unit:4;
    };
}dc1_mc_ch5_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch5_cmd_extend_num:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ch5_extend_bl_max:6;
        RBus_UInt32  ch5_ostd_bl_max:12;
        RBus_UInt32  ch5_ostd_cmd_max:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch5_outstand_en:1;
    };
}dc1_mc_ch5_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  ch6_page_insert_mapping:4;
        RBus_UInt32  ch6_bank_free_mapping:4;
        RBus_UInt32  ch6_dir_insert_mapping:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  ch6_acc_trigger_sel:1;
        RBus_UInt32  ch6_acc_mode:1;
        RBus_UInt32  ch6_acc_clr_mode:2;
        RBus_UInt32  ch6_urg2_wr_brk_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ch6_urg2_strong_en:1;
        RBus_UInt32  ch6_oldest_timer_2_en:1;
        RBus_UInt32  ch6_oldest_timer_en:1;
        RBus_UInt32  ch6_oldest_cmd_select_en:1;
        RBus_UInt32  res4:1;
    };
}dc1_mc_ch6_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch6_quota_bw_ini:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch6_bw_quota_max:8;
        RBus_UInt32  res2:8;
    };
}dc1_mc_ch6_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch6_oldest_time_2:12;
        RBus_UInt32  ch6_oldest_time:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch6_bw_acc_unit:4;
    };
}dc1_mc_ch6_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch6_cmd_extend_num:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  ch6_extend_bl_max:6;
        RBus_UInt32  ch6_ostd_bl_max:12;
        RBus_UInt32  ch6_ostd_cmd_max:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  ch6_outstand_en:1;
    };
}dc1_mc_ch6_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  qos_dbg_sel:4;
        RBus_UInt32  qos_dummy:8;
        RBus_UInt32  res2:16;
    };
}dc1_mc_qos_dbg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qos_debug:32;
    };
}dc1_mc_qos_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  ddr4_wr_crc_bc4_use_dm:1;
        RBus_UInt32  ddr4_wr_crc_bl8_use_dm:1;
        RBus_UInt32  ddr4_pda_mrs_dram_sel:3;
        RBus_UInt32  ddr4_gear_set_dpi_sel:1;
        RBus_UInt32  alert_n_pw_judge:8;
        RBus_UInt32  geardown_entry:1;
        RBus_UInt32  ddr4_record_cmd_en:1;
        RBus_UInt32  ddr4_rd_dbi_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ddr4_ca_parity_en:1;
        RBus_UInt32  ddr4_wr_crc_en:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  ddr4:1;
    };
}dc1_mc_ddr4_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  tmwtr_l:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  tmrrd_l:5;
        RBus_UInt32  tmccd_l:4;
    };
}dc1_mc_ddr4_tm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode_reg5:16;
        RBus_UInt32  mode_reg4:16;
    };
}dc1_mc_ddr4_mr45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  mode_reg6:16;
    };
}dc1_mc_ddr4_mr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  ddr4_read_preamble_en:1;
        RBus_UInt32  ddr4_write_preamble_en:1;
        RBus_UInt32  ddr4_pda_en:1;
        RBus_UInt32  ddr4_rd_dbi_en:1;
        RBus_UInt32  ddr4_max_pw_sav_en:1;
        RBus_UInt32  ddr4_gear_down_en:1;
        RBus_UInt32  ddr4_mpr_rw_en:1;
        RBus_UInt32  ddr4_wr_crc_en:1;
        RBus_UInt32  ddr4_parity_en:1;
        RBus_UInt32  alert_n_pw_1:8;
        RBus_UInt32  alert_n_pw_0:8;
    };
}dc1_mc_ddr4_alert_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  write_en_4:1;
        RBus_UInt32  exe_mpr_wr:1;
        RBus_UInt32  write_en_3:1;
        RBus_UInt32  exe_mpr_rd:1;
        RBus_UInt32  write_en_2:1;
        RBus_UInt32  ddr4_exe_mr6:1;
        RBus_UInt32  write_en_1:1;
        RBus_UInt32  ddr4_exe_mr5:1;
        RBus_UInt32  write_en_0:1;
        RBus_UInt32  ddr4_exe_mr4:1;
    };
}dc1_mc_dc_ddr4_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  geardown_setuphold:4;
        RBus_UInt32  res1:18;
        RBus_UInt32  mpr_rw_bank:2;
        RBus_UInt32  mpr_rw_add:8;
    };
}dc1_mc_ddr4_exe_rw_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_0:25;
    };
}dc1_mc_ddr4_fail_cmd_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_1:25;
    };
}dc1_mc_ddr4_fail_cmd_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_2:25;
    };
}dc1_mc_ddr4_fail_cmd_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_3:25;
    };
}dc1_mc_ddr4_fail_cmd_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_4:25;
    };
}dc1_mc_ddr4_fail_cmd_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_5:25;
    };
}dc1_mc_ddr4_fail_cmd_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_6:25;
    };
}dc1_mc_ddr4_fail_cmd_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_7:25;
    };
}dc1_mc_ddr4_fail_cmd_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_8:25;
    };
}dc1_mc_ddr4_fail_cmd_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_9:25;
    };
}dc1_mc_ddr4_fail_cmd_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_10:25;
    };
}dc1_mc_ddr4_fail_cmd_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_11:25;
    };
}dc1_mc_ddr4_fail_cmd_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_12:25;
    };
}dc1_mc_ddr4_fail_cmd_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_13:25;
    };
}dc1_mc_ddr4_fail_cmd_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_14:25;
    };
}dc1_mc_ddr4_fail_cmd_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  fail_cmd_15:25;
    };
}dc1_mc_ddr4_fail_cmd_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_3:8;
        RBus_UInt32  mpr_data_2:8;
        RBus_UInt32  mpr_data_1:8;
        RBus_UInt32  mpr_data_0:8;
    };
}dc1_mc_ddr4_mpr_rd_dat0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_7:8;
        RBus_UInt32  mpr_data_6:8;
        RBus_UInt32  mpr_data_5:8;
        RBus_UInt32  mpr_data_4:8;
    };
}dc1_mc_ddr4_mpr_rd_dat1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_11:8;
        RBus_UInt32  mpr_data_10:8;
        RBus_UInt32  mpr_data_9:8;
        RBus_UInt32  mpr_data_8:8;
    };
}dc1_mc_ddr4_mpr_rd_dat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_15:8;
        RBus_UInt32  mpr_data_14:8;
        RBus_UInt32  mpr_data_13:8;
        RBus_UInt32  mpr_data_12:8;
    };
}dc1_mc_ddr4_mpr_rd_dat3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_19:8;
        RBus_UInt32  mpr_data_18:8;
        RBus_UInt32  mpr_data_17:8;
        RBus_UInt32  mpr_data_16:8;
    };
}dc1_mc_ddr4_mpr_rd_dat4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_23:8;
        RBus_UInt32  mpr_data_22:8;
        RBus_UInt32  mpr_data_21:8;
        RBus_UInt32  mpr_data_20:8;
    };
}dc1_mc_ddr4_mpr_rd_dat5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_27:8;
        RBus_UInt32  mpr_data_26:8;
        RBus_UInt32  mpr_data_25:8;
        RBus_UInt32  mpr_data_24:8;
    };
}dc1_mc_ddr4_mpr_rd_dat6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_31:8;
        RBus_UInt32  mpr_data_30:8;
        RBus_UInt32  mpr_data_29:8;
        RBus_UInt32  mpr_data_28:8;
    };
}dc1_mc_ddr4_mpr_rd_dat7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  force_rst_n_rx_dpi2:1;
        RBus_UInt32  ref_rst_en_rx_dpi2:1;
        RBus_UInt32  force_rst_n_tx_dpi2:1;
        RBus_UInt32  ref_rst_en_tx_dpi2:1;
        RBus_UInt32  ref_rst_dly_rx:8;
        RBus_UInt32  ref_rst_dly_tx:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  force_rst_n_rx:1;
        RBus_UInt32  bypass_en_rx:1;
        RBus_UInt32  ref_rst_en_rx:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  force_rst_n_tx:1;
        RBus_UInt32  bypass_en_tx:1;
        RBus_UInt32  ref_rst_en_tx:1;
    };
}dc1_mc_cts_fifo_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_rdata_bypass_dis:1;
        RBus_UInt32  dummy_mcfifo:28;
        RBus_UInt32  exp_rw_in_order:1;
        RBus_UInt32  exp_no_new_cmd:1;
        RBus_UInt32  exp_cmd_in_order:1;
    };
}dc1_mc_mcfifo_ctrl_func0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sys_cmd_no_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  sys_no_new_cmd:1;
        RBus_UInt32  sys_cmd_in_order:1;
    };
}dc1_mc_mcfifo_ctrl_func1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sys2_cmd_no_sel:1;
        RBus_UInt32  sys2_rw_in_order:1;
        RBus_UInt32  sys2_no_new_cmd:1;
        RBus_UInt32  sys2_cmd_in_order:1;
    };
}dc1_mc_mcfifo_ctrl_func2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sys3_cmd_no_sel:1;
        RBus_UInt32  sys3_rw_in_order:1;
        RBus_UInt32  sys3_no_new_cmd:1;
        RBus_UInt32  sys3_cmd_in_order:1;
    };
}dc1_mc_mcfifo_ctrl_func3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  exp_wcmd_fifo_th:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  exp_rcmd_fifo_th:3;
    };
}dc1_mc_mcfifo_ctrl_cmd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sys_cmd_fifo_th:4;
    };
}dc1_mc_mcfifo_ctrl_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  sys2_wcmd_fifo_th:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  sys2_rcmd_fifo_th:5;
    };
}dc1_mc_mcfifo_ctrl_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  sys3_wcmd_fifo_th:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  sys3_rcmd_fifo_th:5;
    };
}dc1_mc_mcfifo_ctrl_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  exp_wdata_fifo_th:6;
        RBus_UInt32  res2:5;
        RBus_UInt32  exp_rdata_fifo_th:7;
    };
}dc1_mc_mcfifo_ctrl_dat0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  sys_wdata_fifo_th:6;
        RBus_UInt32  res2:5;
        RBus_UInt32  sys_rdata_fifo_th:7;
    };
}dc1_mc_mcfifo_ctrl_dat1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  sys2_wdata_fifo_th:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  sys2_rdata_fifo_th:9;
    };
}dc1_mc_mcfifo_ctrl_dat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  sys3_wdata_fifo_th:8;
        RBus_UInt32  res2:3;
        RBus_UInt32  sys3_rdata_fifo_th:9;
    };
}dc1_mc_mcfifo_ctrl_dat3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exp_dbg_clr:1;
        RBus_UInt32  exp_wdata_afifo_overflow:1;
        RBus_UInt32  exp_cmd_afifo_overflow:1;
        RBus_UInt32  exp_rdata_sram_overflow:1;
        RBus_UInt32  exp_wdata_sram_underflow:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  exp_err_wbl_mis:1;
        RBus_UInt32  exp_err_rbl_mis:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  exp_max_wcmd_fifo:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  exp_max_wcmd_bank:3;
        RBus_UInt32  res4:4;
        RBus_UInt32  exp_max_rcmd_fifo:4;
        RBus_UInt32  res5:1;
        RBus_UInt32  exp_max_rcmd_bank:3;
    };
}dc1_mc_mcfifo_dbg_cmd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys_dbg_clr:1;
        RBus_UInt32  sys_wdata_afifo_overflow:1;
        RBus_UInt32  sys_cmd_afifo_overflow:1;
        RBus_UInt32  sys_rdata_sram_overflow:1;
        RBus_UInt32  sys_wdata_sram_underflow:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys_err_wbl_mis:1;
        RBus_UInt32  sys_err_rbl_mis:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  sys_max_cmd_fifo:5;
        RBus_UInt32  res3:1;
        RBus_UInt32  sys_max_cmd_bank:3;
    };
}dc1_mc_mcfifo_dbg_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys2_dbg_clr:1;
        RBus_UInt32  sys2_wdata_afifo_overflow:1;
        RBus_UInt32  sys2_cmd_afifo_overflow:1;
        RBus_UInt32  sys2_rdata_sram_overflow:1;
        RBus_UInt32  sys2_wdata_sram_underflow:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys2_err_wbl_mis:1;
        RBus_UInt32  sys2_err_rbl_mis:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  sys2_max_wcmd_fifo:6;
        RBus_UInt32  res3:1;
        RBus_UInt32  sys2_max_wcmd_bank:3;
        RBus_UInt32  res4:2;
        RBus_UInt32  sys2_max_rcmd_fifo:6;
        RBus_UInt32  res5:1;
        RBus_UInt32  sys2_max_rcmd_bank:3;
    };
}dc1_mc_mcfifo_dbg_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys3_dbg_clr:1;
        RBus_UInt32  sys3_wdata_afifo_overflow:1;
        RBus_UInt32  sys3_cmd_afifo_overflow:1;
        RBus_UInt32  sys3_rdata_sram_overflow:1;
        RBus_UInt32  sys3_wdata_sram_underflow:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys3_err_wbl_mis:1;
        RBus_UInt32  sys3_err_rbl_mis:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  sys3_max_wcmd_fifo:6;
        RBus_UInt32  res3:1;
        RBus_UInt32  sys3_max_wcmd_bank:3;
        RBus_UInt32  res4:2;
        RBus_UInt32  sys3_max_rcmd_fifo:6;
        RBus_UInt32  res5:1;
        RBus_UInt32  sys3_max_rcmd_bank:3;
    };
}dc1_mc_mcfifo_dbg_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exp_max_cmd_no_dif:10;
        RBus_UInt32  res1:3;
        RBus_UInt32  exp_max_wdata_fifo:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  exp_max_rdata_fifo:8;
    };
}dc1_mc_mcfifo_dbg_dat0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys_max_cmd_no_dif:10;
        RBus_UInt32  res1:3;
        RBus_UInt32  sys_max_wdata_fifo:7;
        RBus_UInt32  res2:4;
        RBus_UInt32  sys_max_rdata_fifo:8;
    };
}dc1_mc_mcfifo_dbg_dat1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys2_max_cmd_no_dif:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys2_max_wdata_fifo:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  sys2_max_rdata_fifo:10;
    };
}dc1_mc_mcfifo_dbg_dat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys3_max_cmd_no_dif:10;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys3_max_wdata_fifo:9;
        RBus_UInt32  res2:2;
        RBus_UInt32  sys3_max_rdata_fifo:10;
    };
}dc1_mc_mcfifo_dbg_dat3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cmd_2p_ls_exp:1;
        RBus_UInt32  mf_cmd_2p_ls_sys:1;
        RBus_UInt32  mf_cmd_2p_ls_sys2:1;
        RBus_UInt32  mf_cmd_2p_ls_sys3:1;
        RBus_UInt32  mf_data_2p_ls_exp_r:1;
        RBus_UInt32  mf_data_2p_ls_exp_w:1;
        RBus_UInt32  mf_data_2p_ls_sys_r:1;
        RBus_UInt32  mf_data_2p_ls_sys_w:1;
        RBus_UInt32  mf_data_2p_ls_sys2_r:1;
        RBus_UInt32  mf_data_2p_ls_sys2_w:1;
        RBus_UInt32  mf_data_2p_ls_sys3_r:1;
        RBus_UInt32  mf_data_2p_ls_sys3_w:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  mf_cmd_2p_rm_exp:4;
        RBus_UInt32  mf_cmd_2p_rm_sys:4;
    };
}dc1_mc_mcfifo_sram_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cmd_2p_rme_exp:1;
        RBus_UInt32  mf_cmd_2p_rme_sys:1;
        RBus_UInt32  mf_cmd_2p_rme_sys2:1;
        RBus_UInt32  mf_cmd_2p_rme_sys3:1;
        RBus_UInt32  mf_data_2p_rme_exp_r:1;
        RBus_UInt32  mf_data_2p_rme_exp_w:1;
        RBus_UInt32  mf_data_2p_rme_sys_r:1;
        RBus_UInt32  mf_data_2p_rme_sys_w:1;
        RBus_UInt32  mf_data_2p_rme_sys2_r:1;
        RBus_UInt32  mf_data_2p_rme_sys2_w:1;
        RBus_UInt32  mf_data_2p_rme_sys3_r:1;
        RBus_UInt32  mf_data_2p_rme_sys3_w:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  mf_cmd_2p_rm_sys2:4;
        RBus_UInt32  mf_cmd_2p_rm_sys3:4;
    };
}dc1_mc_mcfifo_sram_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_data_2p_rm_exp_r:4;
        RBus_UInt32  mf_data_2p_rm_exp_w:4;
        RBus_UInt32  mf_data_2p_rm_sys_r:4;
        RBus_UInt32  mf_data_2p_rm_sys_w:4;
        RBus_UInt32  mf_data_2p_rm_sys2_r:4;
        RBus_UInt32  mf_data_2p_rm_sys2_w:4;
        RBus_UInt32  mf_data_2p_rm_sys3_r:4;
        RBus_UInt32  mf_data_2p_rm_sys3_w:4;
    };
}dc1_mc_mcfifo_sram_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mf_cmd_2p_bist_mode:1;
        RBus_UInt32  mf_data_2p_bist_mode:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mf_cmd_2p_bist_done:1;
        RBus_UInt32  mf_data_2p_bist_done_0:1;
        RBus_UInt32  mf_data_2p_bist_done_1:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mf_cmd_2p_bist_fail_grp:1;
        RBus_UInt32  mf_data_2p_bist_fail_grp:1;
        RBus_UInt32  mf_data_2p_bist_fail_grp1:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_bist_fail_grp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mf_cmd_2p_bist_fail_exp:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_sys:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_sys2:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_sys3:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_r:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_r:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys2_r:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys2_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys3_r:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys3_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_r1:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_w1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_r1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_w1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys2_w1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys3_w1:1;
        RBus_UInt32  res2:2;
    };
}dc1_mc_mcfifo_bist_fail_detail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mf_cmd_2p_drf_mode:1;
        RBus_UInt32  mf_data_2p_drf_mode:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  mf_cmd_2p_drf_resume:1;
        RBus_UInt32  mf_data_2p_drf_resume:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mf_cmd_2p_drf_done:1;
        RBus_UInt32  mf_data_2p_drf_done_0:1;
        RBus_UInt32  mf_data_2p_drf_done_1:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mf_cmd_2p_drf_pause:1;
        RBus_UInt32  mf_data_2p_drf_pause_0:1;
        RBus_UInt32  mf_data_2p_drf_pause_1:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  mf_cmd_2p_drf_fail_grp:1;
        RBus_UInt32  mf_data_2p_drf_fail_grp:1;
        RBus_UInt32  mf_data_2p_drf_fail_grp1:1;
        RBus_UInt32  res2:1;
    };
}dc1_mc_mcfifo_drf_fail_grp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  mf_cmd_2p_drf_fail_exp:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_sys:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_sys2:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_sys3:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_r:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_r:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys2_r:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys2_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys3_r:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys3_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_r1:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_w1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_r1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_w1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys2_w1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys3_w1:1;
        RBus_UInt32  res2:2;
    };
}dc1_mc_mcfifo_drf_fail_detail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cache_flush:1;
        RBus_UInt32  res2:8;
        RBus_UInt32  sys3_cache_write_chk_dis:1;
        RBus_UInt32  sys2_cache_write_chk_dis:1;
        RBus_UInt32  sys_cache_write_chk_dis:1;
        RBus_UInt32  exp_cache_write_chk_dis:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  cache_sys_sel:2;
        RBus_UInt32  dummy_cache:4;
        RBus_UInt32  res4:3;
        RBus_UInt32  scpu_cache_en:1;
        RBus_UInt32  nn_cache_en:1;
        RBus_UInt32  se_cache_en:1;
        RBus_UInt32  ve_cache_en:1;
        RBus_UInt32  gpu_cache_en:1;
    };
}dc1_mc_mccache_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cache_write_chk_id3:8;
        RBus_UInt32  cache_write_chk_id2:8;
        RBus_UInt32  cache_write_chk_id1:8;
        RBus_UInt32  cache_write_chk_id0:8;
    };
}dc1_mc_mccache_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cache_mon_go:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  cache_mon_rcmd_only:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  cache_mon_bridge_only:1;
        RBus_UInt32  cache_mon_id:8;
    };
}dc1_mc_mccache_mon_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_cycle:32;
    };
}dc1_mc_mccache_mon_out0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dat_dc:32;
    };
}dc1_mc_mccache_mon_out1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dmy_dc:32;
    };
}dc1_mc_mccache_mon_out2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dat_mc:32;
    };
}dc1_mc_mccache_mon_out3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dmy_mc:32;
    };
}dc1_mc_mccache_mon_out4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cache_table_2p_rm_3:4;
        RBus_UInt32  mf_cache_table_2p_rm_2:4;
        RBus_UInt32  mf_cache_table_2p_rm_1:4;
        RBus_UInt32  mf_cache_table_2p_rm_0:4;
        RBus_UInt32  mf_cache_table_2p_rme_3:1;
        RBus_UInt32  mf_cache_table_2p_rme_2:1;
        RBus_UInt32  mf_cache_table_2p_rme_1:1;
        RBus_UInt32  mf_cache_table_2p_rme_0:1;
        RBus_UInt32  mf_cache_data_2p_rm_1:4;
        RBus_UInt32  mf_cache_data_2p_rm_0:4;
        RBus_UInt32  mf_cache_data_2p_rme_1:1;
        RBus_UInt32  mf_cache_data_2p_rme_0:1;
        RBus_UInt32  mf_cache_table_2p_ls:1;
        RBus_UInt32  mf_cache_data_2p_ls:1;
    };
}dc1_mc_mccache_sram_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  mf_cache_table_2p_bist_done:1;
        RBus_UInt32  mf_cache_data_2p_bist_done:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mf_cache_table_2p_bist_mode:1;
        RBus_UInt32  mf_cache_data_2p_bist_mode:1;
    };
}dc1_mc_mccache_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mf_cache_table_2p_bist_fail_3:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_2:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_1:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_0:1;
        RBus_UInt32  mf_cache_data_2p_bist_fail_1:1;
        RBus_UInt32  mf_cache_data_2p_bist_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mf_cache_table_2p_bist_fail_grp:1;
        RBus_UInt32  mf_cache_data_2p_bist_fail_grp:1;
    };
}dc1_mc_mccache_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  mf_cache_table_2p_drf_done:1;
        RBus_UInt32  mf_cache_data_2p_drf_done:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mf_cache_table_2p_drf_pause:1;
        RBus_UInt32  mf_cache_data_2p_drf_pause:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  mf_cache_table_2p_drf_resume:1;
        RBus_UInt32  mf_cache_data_2p_drf_resume:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  mf_cache_table_2p_drf_mode:1;
        RBus_UInt32  mf_cache_data_2p_drf_mode:1;
    };
}dc1_mc_mccache_drf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  mf_cache_table_2p_drf_fail_3:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_2:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_1:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_0:1;
        RBus_UInt32  mf_cache_data_2p_drf_fail_1:1;
        RBus_UInt32  mf_cache_data_2p_drf_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mf_cache_table_2p_drf_fail_grp:1;
        RBus_UInt32  mf_cache_data_2p_drf_fail_grp:1;
    };
}dc1_mc_mccache_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  virtual_start_page:17;
        RBus_UInt32  res1:11;
        RBus_UInt32  mmu_irq_en:1;
        RBus_UInt32  map_table_clr:1;
        RBus_UInt32  map_en:1;
        RBus_UInt32  mmu_en:1;
    };
}dc1_mc_mmu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  map_table_ap:10;
    };
}dc1_mc_mmu_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  map_table_dp:14;
    };
}dc1_mc_mmu_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  invalid_id:8;
        RBus_UInt32  mmu_pending:1;
        RBus_UInt32  invalid_access_flag:1;
        RBus_UInt32  map_table_read_done:1;
        RBus_UInt32  map_table_write_done:1;
    };
}dc1_mc_mmu_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  invalid_adr:32;
    };
}dc1_mc_mmu_status2_RBUS;

#else //apply LITTLE_ENDIAN

//======DC1_MC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmcl:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  tmrcl:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tmras:8;
        RBus_UInt32  res3:8;
    };
}dc1_mc_tmctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmrc:8;
        RBus_UInt32  tmrcdrd:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  tmrp:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tmrrd:5;
        RBus_UInt32  res3:3;
    };
}dc1_mc_tmctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmwr:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  tmwtr:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  trtp:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  tmccd:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_tmctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmrfc:11;
        RBus_UInt32  res1:1;
        RBus_UInt32  refcycle:12;
        RBus_UInt32  tmfaw:8;
    };
}dc1_mc_tmctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmmrd:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  tmmod:8;
        RBus_UInt32  tmaofpd:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  tmaonpd:6;
        RBus_UInt32  res3:2;
    };
}dc1_mc_tmctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tzqinit:12;
        RBus_UInt32  tzqoper:12;
        RBus_UInt32  res1:8;
    };
}dc1_mc_tmctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tzqcs:12;
        RBus_UInt32  tdllk:12;
        RBus_UInt32  res1:7;
        RBus_UInt32  res2:1;
    };
}dc1_mc_tmctrl6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmrrp_a:8;
        RBus_UInt32  tmwrp_a:8;
        RBus_UInt32  res1:16;
    };
}dc1_mc_tmctrl7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bank_free_tmrp_wr:8;
        RBus_UInt32  bank_free_tmrp_rd:8;
        RBus_UInt32  bank_free_tmrcd:8;
        RBus_UInt32  bank_free_offset:6;
        RBus_UInt32  bank_free_offset_updn:1;
        RBus_UInt32  bank_free_bl_adj:1;
    };
}dc1_mc_bkfree_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bf_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  bf_wr_thr:4;
        RBus_UInt32  bf_rd_thr:4;
        RBus_UInt32  bf_wr_interval:8;
        RBus_UInt32  bf_rd_interval:8;
        RBus_UInt32  res2:4;
    };
}dc1_mc_bkfree_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bf_init_interval:8;
        RBus_UInt32  bf_tmrp:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  bf_tmrrd_s:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  bf_tmrrd_l:5;
        RBus_UInt32  res3:3;
    };
}dc1_mc_bkfree_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bf_tmccd_diff:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  bf_tmwtr_s:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  bf_tmwtr_l:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  bf_tmrtw:5;
        RBus_UInt32  res4:7;
    };
}dc1_mc_bkfree_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_cnt_ref_limit:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  cmd_wr_chg_ref:1;
        RBus_UInt32  aref_num_ref_limit:4;
        RBus_UInt32  aref_num_ref_pullin:4;
        RBus_UInt32  ref_disable_tmrfc_offset:12;
        RBus_UInt32  res2:4;
    };
}dc1_mc_ref_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en_cmd_bg_in_order:1;
        RBus_UInt32  dis_cmd_grp_in_order:1;
        RBus_UInt32  dis_acc_interlave:1;
        RBus_UInt32  res1:29;
    };
}dc1_mc_grp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  odt_force_sig:1;
        RBus_UInt32  odt_force_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  odt_first_cycle_dis:1;
        RBus_UInt32  odt_pre_1t_en:1;
        RBus_UInt32  odt_post_1t_en:1;
        RBus_UInt32  odt_post_2t_en:1;
        RBus_UInt32  odt_post_3t_en:1;
    };
}dc1_mc_odt_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  odt_dis:1;
        RBus_UInt32  odt_en:1;
        RBus_UInt32  res1:12;
        RBus_UInt32  res2:18;
    };
}dc1_mc_odt_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddr3:1;
        RBus_UInt32  ddr2_odt_dly:3;
        RBus_UInt32  res1:10;
        RBus_UInt32  res2:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:7;
    };
}dc1_mc_dc_mis_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  tmrc_sel:1;
        RBus_UInt32  tmrp_a_sel:1;
        RBus_UInt32  res2:2;
    };
}dc1_mc_dc_misb_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddr4_max_pw_sav_exit:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  tmckmpx:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  tmmpx_lh:9;
        RBus_UInt32  res3:7;
    };
}dc1_mc_mpsm_exit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmxmpdll:11;
        RBus_UInt32  res1:21;
    };
}dc1_mc_mpsm_exit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exe_mr:1;
        RBus_UInt32  exe_emr:1;
        RBus_UInt32  srex:1;
        RBus_UInt32  sren:1;
        RBus_UInt32  init:1;
        RBus_UInt32  issue_nop_after_sre:1;
        RBus_UInt32  res1:26;
    };
}dc1_mc_dc_mis2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  lbk_en:1;
        RBus_UInt32  res2:9;
        RBus_UInt32  res3:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:18;
    };
}dc1_mc_dc_misa_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddr3_init:1;
        RBus_UInt32  write_en_0:1;
        RBus_UInt32  ddr3_exe_mr0:1;
        RBus_UInt32  write_en_1:1;
        RBus_UInt32  ddr3_exe_mr1:1;
        RBus_UInt32  write_en_2:1;
        RBus_UInt32  ddr3_exe_mr2:1;
        RBus_UInt32  write_en_3:1;
        RBus_UInt32  ddr3_exe_mr3:1;
        RBus_UInt32  write_en_4:1;
        RBus_UInt32  ddr3_exe_zqcl:1;
        RBus_UInt32  write_en_5:1;
        RBus_UInt32  ddr3_zqcl_short:1;
        RBus_UInt32  write_en_6:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  write_en_7:1;
        RBus_UInt32  use_tmmrd:1;
        RBus_UInt32  write_en_8:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  write_en_9:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  write_en_10:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  write_en_11:1;
        RBus_UInt32  end_200us:1;
        RBus_UInt32  write_en_12:1;
        RBus_UInt32  end_500us:1;
        RBus_UInt32  write_en_13:1;
        RBus_UInt32  ddr3_swap:1;
        RBus_UInt32  write_en_14:1;
        RBus_UInt32  dis_ap:1;
        RBus_UInt32  write_en_15:1;
    };
}dc1_mc_dc_ddr3_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  dis_refresh:1;
        RBus_UInt32  exe_prea:1;
        RBus_UInt32  precharge_type:1;
        RBus_UInt32  res3:25;
        RBus_UInt32  sppr_mode:1;
        RBus_UInt32  hppr_mode:1;
    };
}dc1_mc_dc_write_level_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  auto_short_zqcl_en:1;
        RBus_UInt32  short_zqcl_per_sel:3;
        RBus_UInt32  res1:28;
    };
}dc1_mc_auto_short_zq_cal_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_reg:32;
    };
}dc1_mc_dummy_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mod_reg:16;
        RBus_UInt32  exmod_reg:16;
    };
}dc1_mc_mod_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mod2_reg:16;
        RBus_UInt32  mod3_reg:16;
    };
}dc1_mc_mod23_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  err_active:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ddr4_crc_err_0:1;
        RBus_UInt32  ddr4_parity_err_0:1;
        RBus_UInt32  ddr4_crc_err_1:1;
        RBus_UInt32  ddr4_parity_err_1:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mc_fifo_err_int:1;
        RBus_UInt32  res3:23;
    };
}dc1_mc_err_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  int_err_active_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  parity_err_int_en_0:1;
        RBus_UInt32  crc_err_int_en_0:1;
        RBus_UInt32  parity_err_int_en_1:1;
        RBus_UInt32  crc_err_int_en_1:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  mc_fifo_err_int_en:1;
        RBus_UInt32  res4:23;
    };
}dc1_mc_int_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  par_st_36_32:5;
        RBus_UInt32  res1:11;
        RBus_UInt32  bg0_cmd_cnt:4;
        RBus_UInt32  bg1_cmd_cnt:4;
        RBus_UInt32  bank_act:8;
    };
}dc1_mc_sm_status_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  par_st_31_0:32;
    };
}dc1_mc_sm_status_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_mod:6;
        RBus_UInt32  res1:3;
        RBus_UInt32  res2:7;
        RBus_UInt32  res3:4;
        RBus_UInt32  res4:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  res6:3;
        RBus_UInt32  res7:5;
    };
}dc1_mc_dc_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  parser_rbus_dbg_sel:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  parser_rbus_dbg_bg0_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  parser_rbus_dbg_bg1_sel:3;
        RBus_UInt32  res3:17;
    };
}dc1_mc_par_dbg_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  parser_rbus_dbg:32;
    };
}dc1_mc_par_dbg_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_dbg_out0:16;
        RBus_UInt32  dc_dbg_out1:16;
    };
}dc1_mc_debug01_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dc_dbg_out2:16;
        RBus_UInt32  dc_dbg_out3:16;
    };
}dc1_mc_debug23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdc_dbg_out:31;
        RBus_UInt32  rdc_dbg_clr:1;
    };
}dc1_mc_mc_rdc_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wdc_dbg_out:31;
        RBus_UInt32  wdc_dbg_clr:1;
    };
}dc1_mc_mc_wdc_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_dbg_out:31;
        RBus_UInt32  eff_dbg_clr:1;
    };
}dc1_mc_mc_eff_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ldq_lsb_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  ldq_msb_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  mdq_lsb_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  mdq_msb_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  udq_lsb_sel:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  udq_msb_sel:3;
        RBus_UInt32  res6:7;
        RBus_UInt32  alert_sel:2;
    };
}dc1_mc_cal_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mem_num_sel:1;
        RBus_UInt32  res1:31;
    };
}dc1_mc_fifo_arb_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw0:32;
    };
}dc1_mc_dummy_wdg_rst_fw0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw1:32;
    };
}dc1_mc_dummy_wdg_rst_fw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw2:32;
    };
}dc1_mc_dummy_wdg_rst_fw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_wdg_rst_fw3:32;
    };
}dc1_mc_dummy_wdg_rst_fw3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw0:32;
    };
}dc1_mc_dummy_fw0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw1:32;
    };
}dc1_mc_dummy_fw1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw2:32;
    };
}dc1_mc_dummy_fw2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw3:32;
    };
}dc1_mc_dummy_fw3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw4:32;
    };
}dc1_mc_dummy_fw4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw5:32;
    };
}dc1_mc_dummy_fw5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw6:32;
    };
}dc1_mc_dummy_fw6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw7:32;
    };
}dc1_mc_dummy_fw7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw8:32;
    };
}dc1_mc_dummy_fw8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw9:32;
    };
}dc1_mc_dummy_fw9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw10:32;
    };
}dc1_mc_dummy_fw10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw11:32;
    };
}dc1_mc_dummy_fw11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw12:32;
    };
}dc1_mc_dummy_fw12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw13:32;
    };
}dc1_mc_dummy_fw13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw14:32;
    };
}dc1_mc_dummy_fw14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy_fw15:32;
    };
}dc1_mc_dummy_fw15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cs_swap:1;
        RBus_UInt32  cs1_mask:1;
        RBus_UInt32  cs_mask:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  cs_mask_mrs_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  ddrx2_csx1_mode:1;
        RBus_UInt32  swap_2ddr_addr:1;
        RBus_UInt32  res3:22;
    };
}dc1_mc_cs_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  cmd_addr_2t_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:29;
    };
}dc1_mc_cmd_dly_1t_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ioblk_gck_en:1;
        RBus_UInt32  fsm_gck_en:1;
        RBus_UInt32  par_gck_en:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  gck_ext_cyc:6;
        RBus_UInt32  res2:18;
    };
}dc1_mc_gck_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emi_scramble_en:1;
        RBus_UInt32  dummy_sc:31;
    };
}dc1_mc_scramble_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_qfifo_thr:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  scpu_wfifo_thr:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  merge_bl:7;
        RBus_UInt32  merge_bl_limt:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  scpu_option:4;
    };
}dc1_mc_scpu_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meg_wcmd_cod_1:1;
        RBus_UInt32  meg_wcmd_cod_2:1;
        RBus_UInt32  meg_wcmd_cod_3:1;
        RBus_UInt32  meg_wcmd_cod_sel:1;
        RBus_UInt32  meg_rcmd_cod_1:1;
        RBus_UInt32  meg_rcmd_cod_2:1;
        RBus_UInt32  meg_rcmd_cod_3:1;
        RBus_UInt32  meg_rcmd_cod_sel:1;
        RBus_UInt32  meg_wcmd_num:2;
        RBus_UInt32  meg_rcmd_num:2;
        RBus_UInt32  meg_wcmd_dly:4;
        RBus_UInt32  meg_wcmd_total_dly:4;
        RBus_UInt32  meg_rcmd_dly:4;
        RBus_UInt32  meg_rcmd_total_dly:4;
        RBus_UInt32  meg_cmd_en:1;
        RBus_UInt32  meg_cmd_chg_rw:1;
        RBus_UInt32  meg_buf_thr_sel:1;
        RBus_UInt32  cmd_merge_en:1;
    };
}dc1_mc_scpu_debug_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_exp_debug:24;
        RBus_UInt32  scpu_exp_debug_sel:4;
        RBus_UInt32  scpu_err_flag_clr:1;
        RBus_UInt32  res1:3;
    };
}dc1_mc_scpu_debug_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_sf_tx_start:1;
        RBus_UInt32  scpu_sf_tx_mode:1;
        RBus_UInt32  scpu_sf_rx_start:1;
        RBus_UInt32  scpu_sf_rx_mode:1;
        RBus_UInt32  scpu_sf_rx_gated:1;
        RBus_UInt32  res1:19;
        RBus_UInt32  scpu_sf_rx_debug_bit_sel:8;
    };
}dc1_mc_scpu_sf_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_sf_tx_work_ro:1;
        RBus_UInt32  scpu_sf_rx_err_ro:1;
        RBus_UInt32  scpu_sf_rx_done_ro:1;
        RBus_UInt32  scpu_sf_rx_fail_bit_status_ro:1;
        RBus_UInt32  res1:28;
    };
}dc1_mc_scpu_sf_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_32:8;
        RBus_UInt32  mpr_data_33:8;
        RBus_UInt32  mpr_data_34:8;
        RBus_UInt32  mpr_data_35:8;
    };
}dc1_mc_ddr4_mpr_rd_dat8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_36:8;
        RBus_UInt32  mpr_data_37:8;
        RBus_UInt32  mpr_data_38:8;
        RBus_UInt32  mpr_data_39:8;
    };
}dc1_mc_ddr4_mpr_rd_dat9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_40:8;
        RBus_UInt32  mpr_data_41:8;
        RBus_UInt32  mpr_data_42:8;
        RBus_UInt32  mpr_data_43:8;
    };
}dc1_mc_ddr4_mpr_rd_dat10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_44:8;
        RBus_UInt32  mpr_data_45:8;
        RBus_UInt32  mpr_data_46:8;
        RBus_UInt32  mpr_data_47:8;
    };
}dc1_mc_ddr4_mpr_rd_dat11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_bist_mode:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_bist_mode:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_bist_done:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_bist_done:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_bist_fail_0:1;
        RBus_UInt32  eff_bist_fail_1:1;
        RBus_UInt32  eff_bist_fail_all:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  mmu_bist_fail_0:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_drf_mode:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_drf_mode:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_drf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_drf_resume:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_drf_resume:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_drf_done:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_drf_done:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist0_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_drf_pause:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_drf_pause:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_drf_bist_fail_0:1;
        RBus_UInt32  eff_drf_bist_fail_1:1;
        RBus_UInt32  eff_drf_bist_fail_all:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  mmu_drf_bist_fail_0:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mbist_dummy:32;
    };
}dc1_mc_dc_phy_bist_detail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_sram_rm:4;
        RBus_UInt32  eff_sram_rme:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  mmu_sram_rm:4;
        RBus_UInt32  mmu_sram_rme:1;
        RBus_UInt32  res2:19;
    };
}dc1_mc_dc_phy_bist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_sram_ls:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_sram_ls:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_sram_test1:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  mmu_sram_test1:1;
        RBus_UInt32  res2:23;
    };
}dc1_mc_dc_phy_bist_test1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dc1_mc_ptg_ready_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}dc1_mc_ptg_select_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_meas_en:1;
        RBus_UInt32  meas_int_src:1;
        RBus_UInt32  rwcnt_ddrsel:2;
        RBus_UInt32  meas_id_ddrsel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  meas_period:16;
        RBus_UInt32  res2:8;
    };
}dc1_mc_eff_meas_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_read_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_write_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rd_chop_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_read_chop_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_chop_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_write_chop_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  parst_acc_rd_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_parst_acc_rd_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  parst_acc_wr_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_parst_acc_wr_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  par_idle_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_par_idle_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr00_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr00_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr01_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr01_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr02_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr02_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr03_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr03_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr04_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr04_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr05_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr05_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr06_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr06_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr07_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr07_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr08_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr08_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr09_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr09_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr10_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr10_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr11_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr11_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr12_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr12_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr13_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr13_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr14_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr14_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr15_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr15_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr16_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr16_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr17_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr17_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr18_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr18_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr19_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr19_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bg_unbalance_cnt:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_bg_unbalance_cnt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  eff_dummy:32;
    };
}dc1_mc_eff_dmy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sr_ref_total_cyc:18;
        RBus_UInt32  res1:13;
        RBus_UInt32  sr_ref_mode_enable:1;
    };
}dc1_mc_sr_ref_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_sram_record_en:1;
        RBus_UInt32  meas_sram_record_mode:1;
        RBus_UInt32  meas_sram_func2_en:1;
        RBus_UInt32  res1:29;
    };
}dc1_mc_client_meas_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_sram_address:8;
        RBus_UInt32  meas_sram_num:3;
        RBus_UInt32  res1:20;
        RBus_UInt32  meas_id_update_done:1;
    };
}dc1_mc_client_meas_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_read_cnt:32;
    };
}dc1_mc_client_meas_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_write_cnt:32;
    };
}dc1_mc_client_meas_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  current_accessing_sram:3;
        RBus_UInt32  res1:29;
    };
}dc1_mc_client_meas_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  meas_cyc_cnt:32;
    };
}dc1_mc_meas_cyc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_cyc_cnt:32;
    };
}dc1_mc_refresh_cyc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mes_mem_tras_en:1;
        RBus_UInt32  mes_mem_tras_id:1;
        RBus_UInt32  mes_mem_tras_rw:1;
        RBus_UInt32  mes_mem_tras_adr:1;
        RBus_UInt32  res1:4;
        RBus_UInt32  mes_mem_cmp_dir:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  mes_mem_cmp_id:8;
        RBus_UInt32  res3:8;
    };
}dc1_mc_mc_mestra_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mes_cmp_addr:29;
    };
}dc1_mc_mc_mestra_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  mes_cmp_addr_mask:29;
    };
}dc1_mc_mc_mestra_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr20_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr20_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr21_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr21_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr22_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr22_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr23_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr23_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr24_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr24_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr25_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr25_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr26_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr26_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr27_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr27_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr28_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr28_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr29_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr29_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr30_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr30_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr31_togl:29;
        RBus_UInt32  res1:3;
    };
}dc1_mc_adr31_togl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  channel_rw_weight_en:1;
        RBus_UInt32  channel_id_weight_en:1;
        RBus_UInt32  bank_wr_sel:1;
        RBus_UInt32  tracking_sel:1;
        RBus_UInt32  ch_dir_cont_bl_mode:2;
        RBus_UInt32  ch_dir_short_dly_en:1;
        RBus_UInt32  ch_parser_cmd_limt_sel:1;
        RBus_UInt32  ch_dir_cont_chg_sel:1;
        RBus_UInt32  ch_tag_tracking:1;
        RBus_UInt32  ch_un_match_id_pg_wt:1;
        RBus_UInt32  ch_ref_bl_gt_sel:1;
        RBus_UInt32  dis_tracking_id1_en:1;
        RBus_UInt32  dis_tracking_id0_en:1;
        RBus_UInt32  dis_tracking_gp0_id_en:1;
        RBus_UInt32  dis_tracking_gp1_id_en:1;
        RBus_UInt32  hi_priority_id0_en:1;
        RBus_UInt32  hi_priority_id1_en:1;
        RBus_UInt32  hi_priority_id2_en:1;
        RBus_UInt32  hi_priority_id3_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  hi_priority_id6_en:1;
        RBus_UInt32  res2:9;
    };
}dc1_mc_qos_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hi_priority_id0:8;
        RBus_UInt32  hi_priority_id1:8;
        RBus_UInt32  hi_priority_id2:8;
        RBus_UInt32  hi_priority_id3:8;
    };
}dc1_mc_qos_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hi_priority_id6:8;
        RBus_UInt32  hi_priority_mask_id6:8;
    };
}dc1_mc_qos_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ch_dir_max_bl:12;
    };
}dc1_mc_qos_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  total_rw_bl_low_bound_2:13;
        RBus_UInt32  res2:3;
    };
}dc1_mc_qos_ctl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_rw_bl_low_bound_r:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  total_rw_bl_low_bound_w:13;
        RBus_UInt32  res2:3;
    };
}dc1_mc_qos_ctl_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  short_rw_bl_thr:8;
        RBus_UInt32  short_rw_ps_bl_thr:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  long_bl_thr:6;
        RBus_UInt32  res2:10;
    };
}dc1_mc_qos_ctl_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_ahead_en:1;
        RBus_UInt32  ref_mask_ch:3;
        RBus_UInt32  ref_mask_id0_en:1;
        RBus_UInt32  ref_mask_id1_en:1;
        RBus_UInt32  ref_mask_id2_en:1;
        RBus_UInt32  ref_mask_id3_en:1;
        RBus_UInt32  ref_mask_urg2_ch:6;
        RBus_UInt32  ref_mask_dir:2;
        RBus_UInt32  res1:16;
    };
}dc1_mc_qos_ctl_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_parser_cmd_max:4;
        RBus_UInt32  ch_ddr4_balance_cmd_max:4;
        RBus_UInt32  res1:8;
        RBus_UInt32  ch_parser_total_bl_max:10;
        RBus_UInt32  res2:6;
    };
}dc1_mc_qos_ctl_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddr4_balance_con:1;
        RBus_UInt32  ddr4_fast_con:1;
        RBus_UInt32  ddr4_db_tracking:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  ddr4_balance_bl_thr:6;
        RBus_UInt32  res2:10;
    };
}dc1_mc_qos_ctl_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_max_id_bl_en:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  ch_max_id_bl_thr:10;
        RBus_UInt32  res2:6;
    };
}dc1_mc_qos_ctl_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dis_tracking_id0:8;
        RBus_UInt32  dis_tracking_id1:8;
        RBus_UInt32  dis_tracking_gp1_id:4;
        RBus_UInt32  dis_tracking_gp0_id:4;
        RBus_UInt32  res1:8;
    };
}dc1_mc_qos_ctl_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ch0_oldest_cmd_select_en:1;
        RBus_UInt32  ch0_oldest_timer_en:1;
        RBus_UInt32  ch0_oldest_timer_2_en:1;
        RBus_UInt32  ch0_urg2_strong_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch0_urg2_wr_brk_en:1;
        RBus_UInt32  ch0_acc_clr_mode:2;
        RBus_UInt32  ch0_acc_mode:1;
        RBus_UInt32  ch0_acc_trigger_sel:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  ch0_dir_insert_mapping:4;
        RBus_UInt32  ch0_bank_free_mapping:4;
        RBus_UInt32  ch0_page_insert_mapping:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_ch0_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ch0_bw_quota_max:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch0_quota_bw_ini:8;
    };
}dc1_mc_ch0_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch0_bw_acc_unit:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch0_oldest_time:12;
        RBus_UInt32  ch0_oldest_time_2:12;
    };
}dc1_mc_ch0_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch0_outstand_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ch0_ostd_cmd_max:4;
        RBus_UInt32  ch0_ostd_bl_max:12;
        RBus_UInt32  ch0_extend_bl_max:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch0_cmd_extend_num:4;
    };
}dc1_mc_ch0_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ch1_oldest_cmd_select_en:1;
        RBus_UInt32  ch1_oldest_timer_en:1;
        RBus_UInt32  ch1_oldest_timer_2_en:1;
        RBus_UInt32  ch1_urg2_strong_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch1_urg2_wr_brk_en:1;
        RBus_UInt32  ch1_acc_clr_mode:2;
        RBus_UInt32  ch1_acc_mode:1;
        RBus_UInt32  ch1_acc_trigger_sel:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  ch1_dir_insert_mapping:4;
        RBus_UInt32  ch1_bank_free_mapping:4;
        RBus_UInt32  ch1_page_insert_mapping:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_ch1_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ch1_bw_quota_max:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch1_quota_bw_ini:8;
    };
}dc1_mc_ch1_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch1_bw_acc_unit:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch1_oldest_time:12;
        RBus_UInt32  ch1_oldest_time_2:12;
    };
}dc1_mc_ch1_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch1_outstand_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ch1_ostd_cmd_max:4;
        RBus_UInt32  ch1_ostd_bl_max:12;
        RBus_UInt32  ch1_extend_bl_max:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch1_cmd_extend_num:4;
    };
}dc1_mc_ch1_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ch2_oldest_cmd_select_en:1;
        RBus_UInt32  ch2_oldest_timer_en:1;
        RBus_UInt32  ch2_oldest_timer_2_en:1;
        RBus_UInt32  ch2_urg2_strong_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch2_urg2_wr_brk_en:1;
        RBus_UInt32  ch2_acc_clr_mode:2;
        RBus_UInt32  ch2_acc_mode:1;
        RBus_UInt32  ch2_acc_trigger_sel:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  ch2_dir_insert_mapping:4;
        RBus_UInt32  ch2_bank_free_mapping:4;
        RBus_UInt32  ch2_page_insert_mapping:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_ch2_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ch2_bw_quota_max:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch2_quota_bw_ini:8;
    };
}dc1_mc_ch2_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch2_bw_acc_unit:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch2_oldest_time:12;
        RBus_UInt32  ch2_oldest_time_2:12;
    };
}dc1_mc_ch2_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch2_outstand_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ch2_ostd_cmd_max:4;
        RBus_UInt32  ch2_ostd_bl_max:12;
        RBus_UInt32  ch2_extend_bl_max:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch2_cmd_extend_num:4;
    };
}dc1_mc_ch2_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ch3_oldest_cmd_select_en:1;
        RBus_UInt32  ch3_oldest_timer_en:1;
        RBus_UInt32  ch3_oldest_timer_2_en:1;
        RBus_UInt32  ch3_urg2_strong_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch3_urg2_wr_brk_en:1;
        RBus_UInt32  ch3_acc_clr_mode:2;
        RBus_UInt32  ch3_acc_mode:1;
        RBus_UInt32  ch3_acc_trigger_sel:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  ch3_dir_insert_mapping:4;
        RBus_UInt32  ch3_bank_free_mapping:4;
        RBus_UInt32  ch3_page_insert_mapping:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_ch3_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ch3_bw_quota_max:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch3_quota_bw_ini:8;
    };
}dc1_mc_ch3_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch3_bw_acc_unit:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch3_oldest_time:12;
        RBus_UInt32  ch3_oldest_time_2:12;
    };
}dc1_mc_ch3_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch3_outstand_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ch3_ostd_cmd_max:4;
        RBus_UInt32  ch3_ostd_bl_max:12;
        RBus_UInt32  ch3_extend_bl_max:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch3_cmd_extend_num:4;
    };
}dc1_mc_ch3_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ch4_oldest_cmd_select_en:1;
        RBus_UInt32  ch4_oldest_timer_en:1;
        RBus_UInt32  ch4_oldest_timer_2_en:1;
        RBus_UInt32  ch4_urg2_strong_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch4_urg2_wr_brk_en:1;
        RBus_UInt32  ch4_acc_clr_mode:2;
        RBus_UInt32  ch4_acc_mode:1;
        RBus_UInt32  ch4_acc_trigger_sel:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  ch4_dir_insert_mapping:4;
        RBus_UInt32  ch4_bank_free_mapping:4;
        RBus_UInt32  ch4_page_insert_mapping:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_ch4_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ch4_bw_quota_max:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch4_quota_bw_ini:8;
    };
}dc1_mc_ch4_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch4_bw_acc_unit:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch4_oldest_time:12;
        RBus_UInt32  ch4_oldest_time_2:12;
    };
}dc1_mc_ch4_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch4_outstand_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ch4_ostd_cmd_max:4;
        RBus_UInt32  ch4_ostd_bl_max:12;
        RBus_UInt32  ch4_extend_bl_max:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch4_cmd_extend_num:4;
    };
}dc1_mc_ch4_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ch5_oldest_cmd_select_en:1;
        RBus_UInt32  ch5_oldest_timer_en:1;
        RBus_UInt32  ch5_oldest_timer_2_en:1;
        RBus_UInt32  ch5_urg2_strong_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch5_urg2_wr_brk_en:1;
        RBus_UInt32  ch5_acc_clr_mode:2;
        RBus_UInt32  ch5_acc_mode:1;
        RBus_UInt32  ch5_acc_trigger_sel:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  ch5_dir_insert_mapping:4;
        RBus_UInt32  ch5_bank_free_mapping:4;
        RBus_UInt32  ch5_page_insert_mapping:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_ch5_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ch5_bw_quota_max:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch5_quota_bw_ini:8;
    };
}dc1_mc_ch5_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch5_bw_acc_unit:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch5_oldest_time:12;
        RBus_UInt32  ch5_oldest_time_2:12;
    };
}dc1_mc_ch5_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch5_outstand_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ch5_ostd_cmd_max:4;
        RBus_UInt32  ch5_ostd_bl_max:12;
        RBus_UInt32  ch5_extend_bl_max:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch5_cmd_extend_num:4;
    };
}dc1_mc_ch5_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ch6_oldest_cmd_select_en:1;
        RBus_UInt32  ch6_oldest_timer_en:1;
        RBus_UInt32  ch6_oldest_timer_2_en:1;
        RBus_UInt32  ch6_urg2_strong_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch6_urg2_wr_brk_en:1;
        RBus_UInt32  ch6_acc_clr_mode:2;
        RBus_UInt32  ch6_acc_mode:1;
        RBus_UInt32  ch6_acc_trigger_sel:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  ch6_dir_insert_mapping:4;
        RBus_UInt32  ch6_bank_free_mapping:4;
        RBus_UInt32  ch6_page_insert_mapping:4;
        RBus_UInt32  res4:4;
    };
}dc1_mc_ch6_ctl_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  ch6_bw_quota_max:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  ch6_quota_bw_ini:8;
    };
}dc1_mc_ch6_ctl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch6_bw_acc_unit:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  ch6_oldest_time:12;
        RBus_UInt32  ch6_oldest_time_2:12;
    };
}dc1_mc_ch6_ctl_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch6_outstand_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  ch6_ostd_cmd_max:4;
        RBus_UInt32  ch6_ostd_bl_max:12;
        RBus_UInt32  ch6_extend_bl_max:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  ch6_cmd_extend_num:4;
    };
}dc1_mc_ch6_ctl_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  qos_dummy:8;
        RBus_UInt32  qos_dbg_sel:4;
        RBus_UInt32  res2:4;
    };
}dc1_mc_qos_dbg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  qos_debug:32;
    };
}dc1_mc_qos_dbg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddr4:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ddr4_wr_crc_en:1;
        RBus_UInt32  ddr4_ca_parity_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ddr4_rd_dbi_en:1;
        RBus_UInt32  ddr4_record_cmd_en:1;
        RBus_UInt32  geardown_entry:1;
        RBus_UInt32  alert_n_pw_judge:8;
        RBus_UInt32  ddr4_gear_set_dpi_sel:1;
        RBus_UInt32  ddr4_pda_mrs_dram_sel:3;
        RBus_UInt32  ddr4_wr_crc_bl8_use_dm:1;
        RBus_UInt32  ddr4_wr_crc_bc4_use_dm:1;
        RBus_UInt32  res3:10;
    };
}dc1_mc_ddr4_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tmccd_l:4;
        RBus_UInt32  tmrrd_l:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  tmwtr_l:5;
        RBus_UInt32  res2:15;
    };
}dc1_mc_ddr4_tm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode_reg4:16;
        RBus_UInt32  mode_reg5:16;
    };
}dc1_mc_ddr4_mr45_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mode_reg6:16;
        RBus_UInt32  res1:16;
    };
}dc1_mc_ddr4_mr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  alert_n_pw_0:8;
        RBus_UInt32  alert_n_pw_1:8;
        RBus_UInt32  ddr4_parity_en:1;
        RBus_UInt32  ddr4_wr_crc_en:1;
        RBus_UInt32  ddr4_mpr_rw_en:1;
        RBus_UInt32  ddr4_gear_down_en:1;
        RBus_UInt32  ddr4_max_pw_sav_en:1;
        RBus_UInt32  ddr4_rd_dbi_en:1;
        RBus_UInt32  ddr4_pda_en:1;
        RBus_UInt32  ddr4_write_preamble_en:1;
        RBus_UInt32  ddr4_read_preamble_en:1;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_alert_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ddr4_exe_mr4:1;
        RBus_UInt32  write_en_0:1;
        RBus_UInt32  ddr4_exe_mr5:1;
        RBus_UInt32  write_en_1:1;
        RBus_UInt32  ddr4_exe_mr6:1;
        RBus_UInt32  write_en_2:1;
        RBus_UInt32  exe_mpr_rd:1;
        RBus_UInt32  write_en_3:1;
        RBus_UInt32  exe_mpr_wr:1;
        RBus_UInt32  write_en_4:1;
        RBus_UInt32  res1:22;
    };
}dc1_mc_dc_ddr4_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_rw_add:8;
        RBus_UInt32  mpr_rw_bank:2;
        RBus_UInt32  res1:18;
        RBus_UInt32  geardown_setuphold:4;
    };
}dc1_mc_ddr4_exe_rw_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_0:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_1:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_2:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_3:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_4:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_5:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_6:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_7:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_8:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_9:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_10:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_11:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_12:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_13:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_14:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fail_cmd_15:25;
        RBus_UInt32  res1:7;
    };
}dc1_mc_ddr4_fail_cmd_15_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_0:8;
        RBus_UInt32  mpr_data_1:8;
        RBus_UInt32  mpr_data_2:8;
        RBus_UInt32  mpr_data_3:8;
    };
}dc1_mc_ddr4_mpr_rd_dat0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_4:8;
        RBus_UInt32  mpr_data_5:8;
        RBus_UInt32  mpr_data_6:8;
        RBus_UInt32  mpr_data_7:8;
    };
}dc1_mc_ddr4_mpr_rd_dat1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_8:8;
        RBus_UInt32  mpr_data_9:8;
        RBus_UInt32  mpr_data_10:8;
        RBus_UInt32  mpr_data_11:8;
    };
}dc1_mc_ddr4_mpr_rd_dat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_12:8;
        RBus_UInt32  mpr_data_13:8;
        RBus_UInt32  mpr_data_14:8;
        RBus_UInt32  mpr_data_15:8;
    };
}dc1_mc_ddr4_mpr_rd_dat3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_16:8;
        RBus_UInt32  mpr_data_17:8;
        RBus_UInt32  mpr_data_18:8;
        RBus_UInt32  mpr_data_19:8;
    };
}dc1_mc_ddr4_mpr_rd_dat4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_20:8;
        RBus_UInt32  mpr_data_21:8;
        RBus_UInt32  mpr_data_22:8;
        RBus_UInt32  mpr_data_23:8;
    };
}dc1_mc_ddr4_mpr_rd_dat5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_24:8;
        RBus_UInt32  mpr_data_25:8;
        RBus_UInt32  mpr_data_26:8;
        RBus_UInt32  mpr_data_27:8;
    };
}dc1_mc_ddr4_mpr_rd_dat6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mpr_data_28:8;
        RBus_UInt32  mpr_data_29:8;
        RBus_UInt32  mpr_data_30:8;
        RBus_UInt32  mpr_data_31:8;
    };
}dc1_mc_ddr4_mpr_rd_dat7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ref_rst_en_tx:1;
        RBus_UInt32  bypass_en_tx:1;
        RBus_UInt32  force_rst_n_tx:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ref_rst_en_rx:1;
        RBus_UInt32  bypass_en_rx:1;
        RBus_UInt32  force_rst_n_rx:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  ref_rst_dly_tx:8;
        RBus_UInt32  ref_rst_dly_rx:8;
        RBus_UInt32  ref_rst_en_tx_dpi2:1;
        RBus_UInt32  force_rst_n_tx_dpi2:1;
        RBus_UInt32  ref_rst_en_rx_dpi2:1;
        RBus_UInt32  force_rst_n_rx_dpi2:1;
        RBus_UInt32  res3:4;
    };
}dc1_mc_cts_fifo_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exp_cmd_in_order:1;
        RBus_UInt32  exp_no_new_cmd:1;
        RBus_UInt32  exp_rw_in_order:1;
        RBus_UInt32  dummy_mcfifo:28;
        RBus_UInt32  cmd_rdata_bypass_dis:1;
    };
}dc1_mc_mcfifo_ctrl_func0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys_cmd_in_order:1;
        RBus_UInt32  sys_no_new_cmd:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys_cmd_no_sel:1;
        RBus_UInt32  res2:28;
    };
}dc1_mc_mcfifo_ctrl_func1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys2_cmd_in_order:1;
        RBus_UInt32  sys2_no_new_cmd:1;
        RBus_UInt32  sys2_rw_in_order:1;
        RBus_UInt32  sys2_cmd_no_sel:1;
        RBus_UInt32  res1:28;
    };
}dc1_mc_mcfifo_ctrl_func2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys3_cmd_in_order:1;
        RBus_UInt32  sys3_no_new_cmd:1;
        RBus_UInt32  sys3_rw_in_order:1;
        RBus_UInt32  sys3_cmd_no_sel:1;
        RBus_UInt32  res1:28;
    };
}dc1_mc_mcfifo_ctrl_func3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exp_rcmd_fifo_th:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  exp_wcmd_fifo_th:3;
        RBus_UInt32  res2:21;
    };
}dc1_mc_mcfifo_ctrl_cmd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys_cmd_fifo_th:4;
        RBus_UInt32  res1:28;
    };
}dc1_mc_mcfifo_ctrl_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys2_rcmd_fifo_th:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  sys2_wcmd_fifo_th:5;
        RBus_UInt32  res2:19;
    };
}dc1_mc_mcfifo_ctrl_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys3_rcmd_fifo_th:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  sys3_wcmd_fifo_th:5;
        RBus_UInt32  res2:19;
    };
}dc1_mc_mcfifo_ctrl_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exp_rdata_fifo_th:7;
        RBus_UInt32  res1:5;
        RBus_UInt32  exp_wdata_fifo_th:6;
        RBus_UInt32  res2:14;
    };
}dc1_mc_mcfifo_ctrl_dat0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys_rdata_fifo_th:7;
        RBus_UInt32  res1:5;
        RBus_UInt32  sys_wdata_fifo_th:6;
        RBus_UInt32  res2:14;
    };
}dc1_mc_mcfifo_ctrl_dat1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys2_rdata_fifo_th:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  sys2_wdata_fifo_th:8;
        RBus_UInt32  res2:12;
    };
}dc1_mc_mcfifo_ctrl_dat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys3_rdata_fifo_th:9;
        RBus_UInt32  res1:3;
        RBus_UInt32  sys3_wdata_fifo_th:8;
        RBus_UInt32  res2:12;
    };
}dc1_mc_mcfifo_ctrl_dat3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exp_max_rcmd_bank:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  exp_max_rcmd_fifo:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  exp_max_wcmd_bank:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  exp_max_wcmd_fifo:4;
        RBus_UInt32  res4:4;
        RBus_UInt32  exp_err_rbl_mis:1;
        RBus_UInt32  exp_err_wbl_mis:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  exp_wdata_sram_underflow:1;
        RBus_UInt32  exp_rdata_sram_overflow:1;
        RBus_UInt32  exp_cmd_afifo_overflow:1;
        RBus_UInt32  exp_wdata_afifo_overflow:1;
        RBus_UInt32  exp_dbg_clr:1;
    };
}dc1_mc_mcfifo_dbg_cmd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys_max_cmd_bank:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys_max_cmd_fifo:5;
        RBus_UInt32  res2:15;
        RBus_UInt32  sys_err_rbl_mis:1;
        RBus_UInt32  sys_err_wbl_mis:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  sys_wdata_sram_underflow:1;
        RBus_UInt32  sys_rdata_sram_overflow:1;
        RBus_UInt32  sys_cmd_afifo_overflow:1;
        RBus_UInt32  sys_wdata_afifo_overflow:1;
        RBus_UInt32  sys_dbg_clr:1;
    };
}dc1_mc_mcfifo_dbg_cmd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys2_max_rcmd_bank:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys2_max_rcmd_fifo:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  sys2_max_wcmd_bank:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  sys2_max_wcmd_fifo:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  sys2_err_rbl_mis:1;
        RBus_UInt32  sys2_err_wbl_mis:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  sys2_wdata_sram_underflow:1;
        RBus_UInt32  sys2_rdata_sram_overflow:1;
        RBus_UInt32  sys2_cmd_afifo_overflow:1;
        RBus_UInt32  sys2_wdata_afifo_overflow:1;
        RBus_UInt32  sys2_dbg_clr:1;
    };
}dc1_mc_mcfifo_dbg_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys3_max_rcmd_bank:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  sys3_max_rcmd_fifo:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  sys3_max_wcmd_bank:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  sys3_max_wcmd_fifo:6;
        RBus_UInt32  res4:2;
        RBus_UInt32  sys3_err_rbl_mis:1;
        RBus_UInt32  sys3_err_wbl_mis:1;
        RBus_UInt32  res5:1;
        RBus_UInt32  sys3_wdata_sram_underflow:1;
        RBus_UInt32  sys3_rdata_sram_overflow:1;
        RBus_UInt32  sys3_cmd_afifo_overflow:1;
        RBus_UInt32  sys3_wdata_afifo_overflow:1;
        RBus_UInt32  sys3_dbg_clr:1;
    };
}dc1_mc_mcfifo_dbg_cmd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  exp_max_rdata_fifo:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  exp_max_wdata_fifo:7;
        RBus_UInt32  res2:3;
        RBus_UInt32  exp_max_cmd_no_dif:10;
    };
}dc1_mc_mcfifo_dbg_dat0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys_max_rdata_fifo:8;
        RBus_UInt32  res1:4;
        RBus_UInt32  sys_max_wdata_fifo:7;
        RBus_UInt32  res2:3;
        RBus_UInt32  sys_max_cmd_no_dif:10;
    };
}dc1_mc_mcfifo_dbg_dat1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys2_max_rdata_fifo:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  sys2_max_wdata_fifo:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  sys2_max_cmd_no_dif:10;
    };
}dc1_mc_mcfifo_dbg_dat2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sys3_max_rdata_fifo:10;
        RBus_UInt32  res1:2;
        RBus_UInt32  sys3_max_wdata_fifo:9;
        RBus_UInt32  res2:1;
        RBus_UInt32  sys3_max_cmd_no_dif:10;
    };
}dc1_mc_mcfifo_dbg_dat3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cmd_2p_rm_sys:4;
        RBus_UInt32  mf_cmd_2p_rm_exp:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  mf_data_2p_ls_sys3_w:1;
        RBus_UInt32  mf_data_2p_ls_sys3_r:1;
        RBus_UInt32  mf_data_2p_ls_sys2_w:1;
        RBus_UInt32  mf_data_2p_ls_sys2_r:1;
        RBus_UInt32  mf_data_2p_ls_sys_w:1;
        RBus_UInt32  mf_data_2p_ls_sys_r:1;
        RBus_UInt32  mf_data_2p_ls_exp_w:1;
        RBus_UInt32  mf_data_2p_ls_exp_r:1;
        RBus_UInt32  mf_cmd_2p_ls_sys3:1;
        RBus_UInt32  mf_cmd_2p_ls_sys2:1;
        RBus_UInt32  mf_cmd_2p_ls_sys:1;
        RBus_UInt32  mf_cmd_2p_ls_exp:1;
    };
}dc1_mc_mcfifo_sram_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cmd_2p_rm_sys3:4;
        RBus_UInt32  mf_cmd_2p_rm_sys2:4;
        RBus_UInt32  res1:12;
        RBus_UInt32  mf_data_2p_rme_sys3_w:1;
        RBus_UInt32  mf_data_2p_rme_sys3_r:1;
        RBus_UInt32  mf_data_2p_rme_sys2_w:1;
        RBus_UInt32  mf_data_2p_rme_sys2_r:1;
        RBus_UInt32  mf_data_2p_rme_sys_w:1;
        RBus_UInt32  mf_data_2p_rme_sys_r:1;
        RBus_UInt32  mf_data_2p_rme_exp_w:1;
        RBus_UInt32  mf_data_2p_rme_exp_r:1;
        RBus_UInt32  mf_cmd_2p_rme_sys3:1;
        RBus_UInt32  mf_cmd_2p_rme_sys2:1;
        RBus_UInt32  mf_cmd_2p_rme_sys:1;
        RBus_UInt32  mf_cmd_2p_rme_exp:1;
    };
}dc1_mc_mcfifo_sram_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_data_2p_rm_sys3_w:4;
        RBus_UInt32  mf_data_2p_rm_sys3_r:4;
        RBus_UInt32  mf_data_2p_rm_sys2_w:4;
        RBus_UInt32  mf_data_2p_rm_sys2_r:4;
        RBus_UInt32  mf_data_2p_rm_sys_w:4;
        RBus_UInt32  mf_data_2p_rm_sys_r:4;
        RBus_UInt32  mf_data_2p_rm_exp_w:4;
        RBus_UInt32  mf_data_2p_rm_exp_r:4;
    };
}dc1_mc_mcfifo_sram_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_bist_mode:1;
        RBus_UInt32  mf_cmd_2p_bist_mode:1;
        RBus_UInt32  res2:29;
    };
}dc1_mc_mcfifo_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_bist_done_1:1;
        RBus_UInt32  mf_data_2p_bist_done_0:1;
        RBus_UInt32  mf_cmd_2p_bist_done:1;
        RBus_UInt32  res2:28;
    };
}dc1_mc_mcfifo_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_bist_fail_grp1:1;
        RBus_UInt32  mf_data_2p_bist_fail_grp:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_grp:1;
        RBus_UInt32  res2:28;
    };
}dc1_mc_mcfifo_bist_fail_grp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mf_data_2p_bist_fail_sys3_w1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys2_w1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_w1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_r1:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_w1:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_r1:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys3_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys3_r:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys2_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys2_r:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_sys_r:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_w:1;
        RBus_UInt32  mf_data_2p_bist_fail_exp_r:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_sys3:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_sys2:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_sys:1;
        RBus_UInt32  mf_cmd_2p_bist_fail_exp:1;
        RBus_UInt32  res2:12;
    };
}dc1_mc_mcfifo_bist_fail_detail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_drf_mode:1;
        RBus_UInt32  mf_cmd_2p_drf_mode:1;
        RBus_UInt32  res2:29;
    };
}dc1_mc_mcfifo_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_drf_resume:1;
        RBus_UInt32  mf_cmd_2p_drf_resume:1;
        RBus_UInt32  res2:29;
    };
}dc1_mc_mcfifo_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_drf_done_1:1;
        RBus_UInt32  mf_data_2p_drf_done_0:1;
        RBus_UInt32  mf_cmd_2p_drf_done:1;
        RBus_UInt32  res2:28;
    };
}dc1_mc_mcfifo_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_drf_pause_1:1;
        RBus_UInt32  mf_data_2p_drf_pause_0:1;
        RBus_UInt32  mf_cmd_2p_drf_pause:1;
        RBus_UInt32  res2:28;
    };
}dc1_mc_mcfifo_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  mf_data_2p_drf_fail_grp1:1;
        RBus_UInt32  mf_data_2p_drf_fail_grp:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_grp:1;
        RBus_UInt32  res2:28;
    };
}dc1_mc_mcfifo_drf_fail_grp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  mf_data_2p_drf_fail_sys3_w1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys2_w1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_w1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_r1:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_w1:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_r1:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys3_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys3_r:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys2_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys2_r:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_sys_r:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_w:1;
        RBus_UInt32  mf_data_2p_drf_fail_exp_r:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_sys3:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_sys2:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_sys:1;
        RBus_UInt32  mf_cmd_2p_drf_fail_exp:1;
        RBus_UInt32  res2:12;
    };
}dc1_mc_mcfifo_drf_fail_detail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpu_cache_en:1;
        RBus_UInt32  ve_cache_en:1;
        RBus_UInt32  se_cache_en:1;
        RBus_UInt32  nn_cache_en:1;
        RBus_UInt32  scpu_cache_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  dummy_cache:4;
        RBus_UInt32  cache_sys_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  exp_cache_write_chk_dis:1;
        RBus_UInt32  sys_cache_write_chk_dis:1;
        RBus_UInt32  sys2_cache_write_chk_dis:1;
        RBus_UInt32  sys3_cache_write_chk_dis:1;
        RBus_UInt32  res3:8;
        RBus_UInt32  cache_flush:1;
        RBus_UInt32  res4:3;
    };
}dc1_mc_mccache_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cache_write_chk_id0:8;
        RBus_UInt32  cache_write_chk_id1:8;
        RBus_UInt32  cache_write_chk_id2:8;
        RBus_UInt32  cache_write_chk_id3:8;
    };
}dc1_mc_mccache_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cache_mon_id:8;
        RBus_UInt32  cache_mon_bridge_only:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cache_mon_rcmd_only:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  cache_mon_go:1;
        RBus_UInt32  res3:3;
    };
}dc1_mc_mccache_mon_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_cycle:32;
    };
}dc1_mc_mccache_mon_out0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dat_dc:32;
    };
}dc1_mc_mccache_mon_out1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dmy_dc:32;
    };
}dc1_mc_mccache_mon_out2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dat_mc:32;
    };
}dc1_mc_mccache_mon_out3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  total_mon_dmy_mc:32;
    };
}dc1_mc_mccache_mon_out4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cache_data_2p_ls:1;
        RBus_UInt32  mf_cache_table_2p_ls:1;
        RBus_UInt32  mf_cache_data_2p_rme_0:1;
        RBus_UInt32  mf_cache_data_2p_rme_1:1;
        RBus_UInt32  mf_cache_data_2p_rm_0:4;
        RBus_UInt32  mf_cache_data_2p_rm_1:4;
        RBus_UInt32  mf_cache_table_2p_rme_0:1;
        RBus_UInt32  mf_cache_table_2p_rme_1:1;
        RBus_UInt32  mf_cache_table_2p_rme_2:1;
        RBus_UInt32  mf_cache_table_2p_rme_3:1;
        RBus_UInt32  mf_cache_table_2p_rm_0:4;
        RBus_UInt32  mf_cache_table_2p_rm_1:4;
        RBus_UInt32  mf_cache_table_2p_rm_2:4;
        RBus_UInt32  mf_cache_table_2p_rm_3:4;
    };
}dc1_mc_mccache_sram_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cache_data_2p_bist_mode:1;
        RBus_UInt32  mf_cache_table_2p_bist_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mf_cache_data_2p_bist_done:1;
        RBus_UInt32  mf_cache_table_2p_bist_done:1;
        RBus_UInt32  res2:26;
    };
}dc1_mc_mccache_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cache_data_2p_bist_fail_grp:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_grp:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mf_cache_data_2p_bist_fail_0:1;
        RBus_UInt32  mf_cache_data_2p_bist_fail_1:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_0:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_1:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_2:1;
        RBus_UInt32  mf_cache_table_2p_bist_fail_3:1;
        RBus_UInt32  res2:22;
    };
}dc1_mc_mccache_bist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cache_data_2p_drf_mode:1;
        RBus_UInt32  mf_cache_table_2p_drf_mode:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mf_cache_data_2p_drf_resume:1;
        RBus_UInt32  mf_cache_table_2p_drf_resume:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  mf_cache_data_2p_drf_pause:1;
        RBus_UInt32  mf_cache_table_2p_drf_pause:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  mf_cache_data_2p_drf_done:1;
        RBus_UInt32  mf_cache_table_2p_drf_done:1;
        RBus_UInt32  res4:18;
    };
}dc1_mc_mccache_drf_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mf_cache_data_2p_drf_fail_grp:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_grp:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  mf_cache_data_2p_drf_fail_0:1;
        RBus_UInt32  mf_cache_data_2p_drf_fail_1:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_0:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_1:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_2:1;
        RBus_UInt32  mf_cache_table_2p_drf_fail_3:1;
        RBus_UInt32  res2:22;
    };
}dc1_mc_mccache_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mmu_en:1;
        RBus_UInt32  map_en:1;
        RBus_UInt32  map_table_clr:1;
        RBus_UInt32  mmu_irq_en:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  virtual_start_page:17;
    };
}dc1_mc_mmu_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  map_table_ap:10;
        RBus_UInt32  res1:22;
    };
}dc1_mc_mmu_ap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  map_table_dp:14;
        RBus_UInt32  res1:18;
    };
}dc1_mc_mmu_dp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  map_table_write_done:1;
        RBus_UInt32  map_table_read_done:1;
        RBus_UInt32  invalid_access_flag:1;
        RBus_UInt32  mmu_pending:1;
        RBus_UInt32  invalid_id:8;
        RBus_UInt32  res1:20;
    };
}dc1_mc_mmu_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  invalid_adr:32;
    };
}dc1_mc_mmu_status2_RBUS;




#endif 


#endif 
