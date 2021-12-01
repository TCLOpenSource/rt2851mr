/**
* @file RL6617-DesignSpec-HDMI_RX_PHY_2P0_p2p3
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDMIRX_2P0_PHY_REG_H_
#define _RBUS_HDMIRX_2P0_PHY_REG_H_

#include "rbus_types.h"



//  HDMIRX_2P0_PHY Register Address
#define  HDMIRX_2P0_PHY_MD                                                      0x1803CA04
#define  HDMIRX_2P0_PHY_MD_reg_addr                                              "0xB803CA04"
#define  HDMIRX_2P0_PHY_MD_reg                                                   0xB803CA04
#define  HDMIRX_2P0_PHY_MD_inst_addr                                             "0x0000"
#define  set_HDMIRX_2P0_PHY_MD_reg(data)                                         (*((volatile unsigned int*)HDMIRX_2P0_PHY_MD_reg)=data)
#define  get_HDMIRX_2P0_PHY_MD_reg                                               (*((volatile unsigned int*)HDMIRX_2P0_PHY_MD_reg))
#define  HDMIRX_2P0_PHY_MD_reg_ck_latch_shift                                    (5)
#define  HDMIRX_2P0_PHY_MD_reg_ck_ckdet_shift                                    (0)
#define  HDMIRX_2P0_PHY_MD_reg_ck_latch_mask                                     (0x00000020)
#define  HDMIRX_2P0_PHY_MD_reg_ck_ckdet_mask                                     (0x00000007)
#define  HDMIRX_2P0_PHY_MD_reg_ck_latch(data)                                    (0x00000020&((data)<<5))
#define  HDMIRX_2P0_PHY_MD_reg_ck_ckdet(data)                                    (0x00000007&(data))
#define  HDMIRX_2P0_PHY_MD_get_reg_ck_latch(data)                                ((0x00000020&(data))>>5)
#define  HDMIRX_2P0_PHY_MD_get_reg_ck_ckdet(data)                                (0x00000007&(data))

#define  HDMIRX_2P0_PHY_LDO                                                     0x1803CA08
#define  HDMIRX_2P0_PHY_LDO_reg_addr                                             "0xB803CA08"
#define  HDMIRX_2P0_PHY_LDO_reg                                                  0xB803CA08
#define  HDMIRX_2P0_PHY_LDO_inst_addr                                            "0x0001"
#define  set_HDMIRX_2P0_PHY_LDO_reg(data)                                        (*((volatile unsigned int*)HDMIRX_2P0_PHY_LDO_reg)=data)
#define  get_HDMIRX_2P0_PHY_LDO_reg                                              (*((volatile unsigned int*)HDMIRX_2P0_PHY_LDO_reg))
#define  HDMIRX_2P0_PHY_LDO_reg_ldo_mossel_shift                                 (12)
#define  HDMIRX_2P0_PHY_LDO_reg_p1_ldo_sel_shift                                 (6)
#define  HDMIRX_2P0_PHY_LDO_reg_p0_ldo_sel_shift                                 (4)
#define  HDMIRX_2P0_PHY_LDO_reg_p1_ldo_pow_shift                                 (1)
#define  HDMIRX_2P0_PHY_LDO_reg_p0_ldo_pow_shift                                 (0)
#define  HDMIRX_2P0_PHY_LDO_reg_ldo_mossel_mask                                  (0x00007000)
#define  HDMIRX_2P0_PHY_LDO_reg_p1_ldo_sel_mask                                  (0x000000C0)
#define  HDMIRX_2P0_PHY_LDO_reg_p0_ldo_sel_mask                                  (0x00000030)
#define  HDMIRX_2P0_PHY_LDO_reg_p1_ldo_pow_mask                                  (0x00000002)
#define  HDMIRX_2P0_PHY_LDO_reg_p0_ldo_pow_mask                                  (0x00000001)
#define  HDMIRX_2P0_PHY_LDO_reg_ldo_mossel(data)                                 (0x00007000&((data)<<12))
#define  HDMIRX_2P0_PHY_LDO_reg_p1_ldo_sel(data)                                 (0x000000C0&((data)<<6))
#define  HDMIRX_2P0_PHY_LDO_reg_p0_ldo_sel(data)                                 (0x00000030&((data)<<4))
#define  HDMIRX_2P0_PHY_LDO_reg_p1_ldo_pow(data)                                 (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_LDO_reg_p0_ldo_pow(data)                                 (0x00000001&(data))
#define  HDMIRX_2P0_PHY_LDO_get_reg_ldo_mossel(data)                             ((0x00007000&(data))>>12)
#define  HDMIRX_2P0_PHY_LDO_get_reg_p1_ldo_sel(data)                             ((0x000000C0&(data))>>6)
#define  HDMIRX_2P0_PHY_LDO_get_reg_p0_ldo_sel(data)                             ((0x00000030&(data))>>4)
#define  HDMIRX_2P0_PHY_LDO_get_reg_p1_ldo_pow(data)                             ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_LDO_get_reg_p0_ldo_pow(data)                             (0x00000001&(data))

#define  HDMIRX_2P0_PHY_ENABLE                                                  0x1803CA10
#define  HDMIRX_2P0_PHY_ENABLE_reg_addr                                          "0xB803CA10"
#define  HDMIRX_2P0_PHY_ENABLE_reg                                               0xB803CA10
#define  HDMIRX_2P0_PHY_ENABLE_inst_addr                                         "0x0002"
#define  set_HDMIRX_2P0_PHY_ENABLE_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_ENABLE_reg)=data)
#define  get_HDMIRX_2P0_PHY_ENABLE_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_ENABLE_reg))
#define  HDMIRX_2P0_PHY_ENABLE_reg_p1_en_cmu_shift                               (10)
#define  HDMIRX_2P0_PHY_ENABLE_reg_p0_en_cmu_shift                               (3)
#define  HDMIRX_2P0_PHY_ENABLE_reg_p1_en_cmu_mask                                (0x00000400)
#define  HDMIRX_2P0_PHY_ENABLE_reg_p0_en_cmu_mask                                (0x00000008)
#define  HDMIRX_2P0_PHY_ENABLE_reg_p1_en_cmu(data)                               (0x00000400&((data)<<10))
#define  HDMIRX_2P0_PHY_ENABLE_reg_p0_en_cmu(data)                               (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_ENABLE_get_reg_p1_en_cmu(data)                           ((0x00000400&(data))>>10)
#define  HDMIRX_2P0_PHY_ENABLE_get_reg_p0_en_cmu(data)                           ((0x00000008&(data))>>3)

#define  HDMIRX_2P0_PHY_TEST                                                    0x1803CA14
#define  HDMIRX_2P0_PHY_TEST_reg_addr                                            "0xB803CA14"
#define  HDMIRX_2P0_PHY_TEST_reg                                                 0xB803CA14
#define  HDMIRX_2P0_PHY_TEST_inst_addr                                           "0x0003"
#define  set_HDMIRX_2P0_PHY_TEST_reg(data)                                       (*((volatile unsigned int*)HDMIRX_2P0_PHY_TEST_reg)=data)
#define  get_HDMIRX_2P0_PHY_TEST_reg                                             (*((volatile unsigned int*)HDMIRX_2P0_PHY_TEST_reg))
#define  HDMIRX_2P0_PHY_TEST_reg_tst_spad_shift                                  (4)
#define  HDMIRX_2P0_PHY_TEST_reg_stst_shift                                      (0)
#define  HDMIRX_2P0_PHY_TEST_reg_tst_spad_mask                                   (0x00000010)
#define  HDMIRX_2P0_PHY_TEST_reg_stst_mask                                       (0x0000000F)
#define  HDMIRX_2P0_PHY_TEST_reg_tst_spad(data)                                  (0x00000010&((data)<<4))
#define  HDMIRX_2P0_PHY_TEST_reg_stst(data)                                      (0x0000000F&(data))
#define  HDMIRX_2P0_PHY_TEST_get_reg_tst_spad(data)                              ((0x00000010&(data))>>4)
#define  HDMIRX_2P0_PHY_TEST_get_reg_stst(data)                                  (0x0000000F&(data))

#define  HDMIRX_2P0_PHY_TOP_IN                                                  0x1803CA18
#define  HDMIRX_2P0_PHY_TOP_IN_reg_addr                                          "0xB803CA18"
#define  HDMIRX_2P0_PHY_TOP_IN_reg                                               0xB803CA18
#define  HDMIRX_2P0_PHY_TOP_IN_inst_addr                                         "0x0004"
#define  set_HDMIRX_2P0_PHY_TOP_IN_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_TOP_IN_reg)=data)
#define  get_HDMIRX_2P0_PHY_TOP_IN_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_TOP_IN_reg))
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_4_shift                                (24)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_3_shift                                (16)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_2_shift                                (8)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_1_shift                                (0)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_4_mask                                 (0xFF000000)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_3_mask                                 (0x00FF0000)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_2_mask                                 (0x0000FF00)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_1_mask                                 (0x000000FF)
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_4(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_3(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_2(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_TOP_IN_reg_top_in_1(data)                                (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_TOP_IN_get_reg_top_in_4(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_TOP_IN_get_reg_top_in_3(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_TOP_IN_get_reg_top_in_2(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_TOP_IN_get_reg_top_in_1(data)                            (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_TOP_OUT                                                 0x1803CA1C
#define  HDMIRX_2P0_PHY_TOP_OUT_reg_addr                                         "0xB803CA1C"
#define  HDMIRX_2P0_PHY_TOP_OUT_reg                                              0xB803CA1C
#define  HDMIRX_2P0_PHY_TOP_OUT_inst_addr                                        "0x0005"
#define  set_HDMIRX_2P0_PHY_TOP_OUT_reg(data)                                    (*((volatile unsigned int*)HDMIRX_2P0_PHY_TOP_OUT_reg)=data)
#define  get_HDMIRX_2P0_PHY_TOP_OUT_reg                                          (*((volatile unsigned int*)HDMIRX_2P0_PHY_TOP_OUT_reg))
#define  HDMIRX_2P0_PHY_TOP_OUT_reg_top_out_4_shift                              (24)
#define  HDMIRX_2P0_PHY_TOP_OUT_reg_top_out_4_mask                               (0xFF000000)
#define  HDMIRX_2P0_PHY_TOP_OUT_reg_top_out_4(data)                              (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_TOP_OUT_get_reg_top_out_4(data)                          ((0xFF000000&(data))>>24)

#define  HDMIRX_2P0_PHY_Z0POW                                                   0x1803CA20
#define  HDMIRX_2P0_PHY_Z0POW_reg_addr                                           "0xB803CA20"
#define  HDMIRX_2P0_PHY_Z0POW_reg                                                0xB803CA20
#define  HDMIRX_2P0_PHY_Z0POW_inst_addr                                          "0x0006"
#define  set_HDMIRX_2P0_PHY_Z0POW_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_Z0POW_reg)=data)
#define  get_HDMIRX_2P0_PHY_Z0POW_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_Z0POW_reg))
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z300_sel_shift                              (24)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z300pow_shift                               (20)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z100_en_shift                               (16)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_r_shift                               (12)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_g_shift                               (8)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_ck_shift                              (4)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_b_shift                               (0)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z300_sel_mask                               (0x07000000)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z300pow_mask                                (0x00700000)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z100_en_mask                                (0x00070000)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_r_mask                                (0x00007000)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_g_mask                                (0x00000700)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_ck_mask                               (0x00000070)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_b_mask                                (0x00000007)
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z300_sel(data)                              (0x07000000&((data)<<24))
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z300pow(data)                               (0x00700000&((data)<<20))
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z100_en(data)                               (0x00070000&((data)<<16))
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_r(data)                               (0x00007000&((data)<<12))
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_g(data)                               (0x00000700&((data)<<8))
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_ck(data)                              (0x00000070&((data)<<4))
#define  HDMIRX_2P0_PHY_Z0POW_reg_z0_z0pow_b(data)                               (0x00000007&(data))
#define  HDMIRX_2P0_PHY_Z0POW_get_reg_z0_z300_sel(data)                          ((0x07000000&(data))>>24)
#define  HDMIRX_2P0_PHY_Z0POW_get_reg_z0_z300pow(data)                           ((0x00700000&(data))>>20)
#define  HDMIRX_2P0_PHY_Z0POW_get_reg_z0_z100_en(data)                           ((0x00070000&(data))>>16)
#define  HDMIRX_2P0_PHY_Z0POW_get_reg_z0_z0pow_r(data)                           ((0x00007000&(data))>>12)
#define  HDMIRX_2P0_PHY_Z0POW_get_reg_z0_z0pow_g(data)                           ((0x00000700&(data))>>8)
#define  HDMIRX_2P0_PHY_Z0POW_get_reg_z0_z0pow_ck(data)                          ((0x00000070&(data))>>4)
#define  HDMIRX_2P0_PHY_Z0POW_get_reg_z0_z0pow_b(data)                           (0x00000007&(data))

#define  HDMIRX_2P0_PHY_Z0K                                                     0x1803CA24
#define  HDMIRX_2P0_PHY_Z0K_reg_addr                                             "0xB803CA24"
#define  HDMIRX_2P0_PHY_Z0K_reg                                                  0xB803CA24
#define  HDMIRX_2P0_PHY_Z0K_inst_addr                                            "0x0007"
#define  set_HDMIRX_2P0_PHY_Z0K_reg(data)                                        (*((volatile unsigned int*)HDMIRX_2P0_PHY_Z0K_reg)=data)
#define  get_HDMIRX_2P0_PHY_Z0K_reg                                              (*((volatile unsigned int*)HDMIRX_2P0_PHY_Z0K_reg))
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_2_shift                                  (14)
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_1_shift                                  (9)
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_0_shift                                  (4)
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_2_mask                                   (0x0007C000)
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_1_mask                                   (0x00003E00)
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_0_mask                                   (0x000001F0)
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_2(data)                                  (0x0007C000&((data)<<14))
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_1(data)                                  (0x00003E00&((data)<<9))
#define  HDMIRX_2P0_PHY_Z0K_reg_z0_adjr_0(data)                                  (0x000001F0&((data)<<4))
#define  HDMIRX_2P0_PHY_Z0K_get_reg_z0_adjr_2(data)                              ((0x0007C000&(data))>>14)
#define  HDMIRX_2P0_PHY_Z0K_get_reg_z0_adjr_1(data)                              ((0x00003E00&(data))>>9)
#define  HDMIRX_2P0_PHY_Z0K_get_reg_z0_adjr_0(data)                              ((0x000001F0&(data))>>4)

#define  HDMIRX_2P0_PHY_P0_B1                                                   0x1803CA40
#define  HDMIRX_2P0_PHY_P0_B1_reg_addr                                           "0xB803CA40"
#define  HDMIRX_2P0_PHY_P0_B1_reg                                                0xB803CA40
#define  HDMIRX_2P0_PHY_P0_B1_inst_addr                                          "0x0008"
#define  set_HDMIRX_2P0_PHY_P0_B1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_B1_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B1_reg))
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_4_shift                                   (24)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_3_shift                                   (16)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_2_shift                                   (8)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_1_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_4_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_1_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_B1_reg_p0_b_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_B1_get_reg_p0_b_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_B1_get_reg_p0_b_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_B1_get_reg_p0_b_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_B1_get_reg_p0_b_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_B2                                                   0x1803CA44
#define  HDMIRX_2P0_PHY_P0_B2_reg_addr                                           "0xB803CA44"
#define  HDMIRX_2P0_PHY_P0_B2_reg                                                0xB803CA44
#define  HDMIRX_2P0_PHY_P0_B2_inst_addr                                          "0x0009"
#define  set_HDMIRX_2P0_PHY_P0_B2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_B2_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B2_reg))
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_8_shift                                   (24)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_7_shift                                   (16)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_6_shift                                   (8)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_5_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_8_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_5_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_B2_reg_p0_b_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_B2_get_reg_p0_b_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_B2_get_reg_p0_b_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_B2_get_reg_p0_b_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_B2_get_reg_p0_b_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_B3                                                   0x1803CA48
#define  HDMIRX_2P0_PHY_P0_B3_reg_addr                                           "0xB803CA48"
#define  HDMIRX_2P0_PHY_P0_B3_reg                                                0xB803CA48
#define  HDMIRX_2P0_PHY_P0_B3_inst_addr                                          "0x000A"
#define  set_HDMIRX_2P0_PHY_P0_B3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_B3_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B3_reg))
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_12_shift                                  (24)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_11_shift                                  (16)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_10_shift                                  (8)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_9_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_12_mask                                   (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_9_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_B3_reg_p0_b_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_B3_get_reg_p0_b_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_B3_get_reg_p0_b_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_B3_get_reg_p0_b_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_B3_get_reg_p0_b_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_B4                                                   0x1803CA4C
#define  HDMIRX_2P0_PHY_P0_B4_reg_addr                                           "0xB803CA4C"
#define  HDMIRX_2P0_PHY_P0_B4_reg                                                0xB803CA4C
#define  HDMIRX_2P0_PHY_P0_B4_inst_addr                                          "0x000B"
#define  set_HDMIRX_2P0_PHY_P0_B4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_B4_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_B4_reg))
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koff_sel_shift                            (10)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koff_bound_shift                          (9)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koffok_shift                              (8)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_13_shift                                  (0)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koff_sel_mask                             (0x00007C00)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koff_bound_mask                           (0x00000200)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koffok_mask                               (0x00000100)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_13_mask                                   (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koff_sel(data)                            (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koff_bound(data)                          (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_koffok(data)                              (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_B4_reg_p0_b_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_B4_get_reg_p0_b_koff_sel(data)                        ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_P0_B4_get_reg_p0_b_koff_bound(data)                      ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_P0_B4_get_reg_p0_b_koffok(data)                          ((0x00000100&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_B4_get_reg_p0_b_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_CK1                                                  0x1803CA50
#define  HDMIRX_2P0_PHY_P0_CK1_reg_addr                                          "0xB803CA50"
#define  HDMIRX_2P0_PHY_P0_CK1_reg                                               0xB803CA50
#define  HDMIRX_2P0_PHY_P0_CK1_inst_addr                                         "0x000C"
#define  set_HDMIRX_2P0_PHY_P0_CK1_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_CK1_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK1_reg))
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_4_shift                                 (24)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_3_shift                                 (16)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_2_shift                                 (8)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_1_shift                                 (0)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_4_mask                                  (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_3_mask                                  (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_2_mask                                  (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_1_mask                                  (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_4(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_3(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_2(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_CK1_reg_p0_ck_1(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_CK1_get_reg_p0_ck_4(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_CK1_get_reg_p0_ck_3(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_CK1_get_reg_p0_ck_2(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_CK1_get_reg_p0_ck_1(data)                             (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_CK2                                                  0x1803CA54
#define  HDMIRX_2P0_PHY_P0_CK2_reg_addr                                          "0xB803CA54"
#define  HDMIRX_2P0_PHY_P0_CK2_reg                                               0xB803CA54
#define  HDMIRX_2P0_PHY_P0_CK2_inst_addr                                         "0x000D"
#define  set_HDMIRX_2P0_PHY_P0_CK2_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_CK2_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK2_reg))
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_8_shift                                 (24)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_7_shift                                 (16)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_6_shift                                 (8)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_5_shift                                 (0)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_8_mask                                  (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_7_mask                                  (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_6_mask                                  (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_5_mask                                  (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_8(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_7(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_6(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_CK2_reg_p0_ck_5(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_CK2_get_reg_p0_ck_8(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_CK2_get_reg_p0_ck_7(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_CK2_get_reg_p0_ck_6(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_CK2_get_reg_p0_ck_5(data)                             (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_CK3                                                  0x1803CA58
#define  HDMIRX_2P0_PHY_P0_CK3_reg_addr                                          "0xB803CA58"
#define  HDMIRX_2P0_PHY_P0_CK3_reg                                               0xB803CA58
#define  HDMIRX_2P0_PHY_P0_CK3_inst_addr                                         "0x000E"
#define  set_HDMIRX_2P0_PHY_P0_CK3_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_CK3_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK3_reg))
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_12_shift                                (24)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_11_shift                                (16)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_10_shift                                (8)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_9_shift                                 (0)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_12_mask                                 (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_11_mask                                 (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_10_mask                                 (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_9_mask                                  (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_12(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_11(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_10(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_CK3_reg_p0_ck_9(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_CK3_get_reg_p0_ck_12(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_CK3_get_reg_p0_ck_11(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_CK3_get_reg_p0_ck_10(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_CK3_get_reg_p0_ck_9(data)                             (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_CK4                                                  0x1803CA5C
#define  HDMIRX_2P0_PHY_P0_CK4_reg_addr                                          "0xB803CA5C"
#define  HDMIRX_2P0_PHY_P0_CK4_reg                                               0xB803CA5C
#define  HDMIRX_2P0_PHY_P0_CK4_inst_addr                                         "0x000F"
#define  set_HDMIRX_2P0_PHY_P0_CK4_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_CK4_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_CK4_reg))
#define  HDMIRX_2P0_PHY_P0_CK4_reg_p0_ck_13_shift                                (0)
#define  HDMIRX_2P0_PHY_P0_CK4_reg_p0_ck_13_mask                                 (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_CK4_reg_p0_ck_13(data)                                (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_CK4_get_reg_p0_ck_13(data)                            (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_G1                                                   0x1803CA60
#define  HDMIRX_2P0_PHY_P0_G1_reg_addr                                           "0xB803CA60"
#define  HDMIRX_2P0_PHY_P0_G1_reg                                                0xB803CA60
#define  HDMIRX_2P0_PHY_P0_G1_inst_addr                                          "0x0010"
#define  set_HDMIRX_2P0_PHY_P0_G1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_G1_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G1_reg))
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_4_shift                                   (24)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_3_shift                                   (16)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_2_shift                                   (8)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_1_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_4_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_1_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_G1_reg_p0_g_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_G1_get_reg_p0_g_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_G1_get_reg_p0_g_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_G1_get_reg_p0_g_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_G1_get_reg_p0_g_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_G2                                                   0x1803CA64
#define  HDMIRX_2P0_PHY_P0_G2_reg_addr                                           "0xB803CA64"
#define  HDMIRX_2P0_PHY_P0_G2_reg                                                0xB803CA64
#define  HDMIRX_2P0_PHY_P0_G2_inst_addr                                          "0x0011"
#define  set_HDMIRX_2P0_PHY_P0_G2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_G2_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G2_reg))
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_8_shift                                   (24)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_7_shift                                   (16)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_6_shift                                   (8)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_5_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_8_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_5_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_G2_reg_p0_g_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_G2_get_reg_p0_g_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_G2_get_reg_p0_g_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_G2_get_reg_p0_g_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_G2_get_reg_p0_g_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_G3                                                   0x1803CA68
#define  HDMIRX_2P0_PHY_P0_G3_reg_addr                                           "0xB803CA68"
#define  HDMIRX_2P0_PHY_P0_G3_reg                                                0xB803CA68
#define  HDMIRX_2P0_PHY_P0_G3_inst_addr                                          "0x0012"
#define  set_HDMIRX_2P0_PHY_P0_G3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_G3_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G3_reg))
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_12_shift                                  (24)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_11_shift                                  (16)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_10_shift                                  (8)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_9_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_12_mask                                   (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_9_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_G3_reg_p0_g_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_G3_get_reg_p0_g_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_G3_get_reg_p0_g_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_G3_get_reg_p0_g_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_G3_get_reg_p0_g_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_G4                                                   0x1803CA6C
#define  HDMIRX_2P0_PHY_P0_G4_reg_addr                                           "0xB803CA6C"
#define  HDMIRX_2P0_PHY_P0_G4_reg                                                0xB803CA6C
#define  HDMIRX_2P0_PHY_P0_G4_inst_addr                                          "0x0013"
#define  set_HDMIRX_2P0_PHY_P0_G4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_G4_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_G4_reg))
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koff_sel_shift                            (10)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koff_bound_shift                          (9)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koffok_shift                              (8)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_13_shift                                  (0)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koff_sel_mask                             (0x00007C00)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koff_bound_mask                           (0x00000200)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koffok_mask                               (0x00000100)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_13_mask                                   (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koff_sel(data)                            (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koff_bound(data)                          (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_koffok(data)                              (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_G4_reg_p0_g_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_G4_get_reg_p0_g_koff_sel(data)                        ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_P0_G4_get_reg_p0_g_koff_bound(data)                      ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_P0_G4_get_reg_p0_g_koffok(data)                          ((0x00000100&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_G4_get_reg_p0_g_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_R1                                                   0x1803CA70
#define  HDMIRX_2P0_PHY_P0_R1_reg_addr                                           "0xB803CA70"
#define  HDMIRX_2P0_PHY_P0_R1_reg                                                0xB803CA70
#define  HDMIRX_2P0_PHY_P0_R1_inst_addr                                          "0x0014"
#define  set_HDMIRX_2P0_PHY_P0_R1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_R1_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R1_reg))
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_4_shift                                   (24)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_3_shift                                   (16)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_2_shift                                   (8)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_1_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_4_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_1_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_R1_reg_p0_r_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_R1_get_reg_p0_r_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_R1_get_reg_p0_r_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_R1_get_reg_p0_r_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_R1_get_reg_p0_r_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_R2                                                   0x1803CA74
#define  HDMIRX_2P0_PHY_P0_R2_reg_addr                                           "0xB803CA74"
#define  HDMIRX_2P0_PHY_P0_R2_reg                                                0xB803CA74
#define  HDMIRX_2P0_PHY_P0_R2_inst_addr                                          "0x0015"
#define  set_HDMIRX_2P0_PHY_P0_R2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_R2_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R2_reg))
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_8_shift                                   (24)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_7_shift                                   (16)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_6_shift                                   (8)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_5_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_8_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_5_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_R2_reg_p0_r_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_R2_get_reg_p0_r_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_R2_get_reg_p0_r_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_R2_get_reg_p0_r_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_R2_get_reg_p0_r_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_R3                                                   0x1803CA78
#define  HDMIRX_2P0_PHY_P0_R3_reg_addr                                           "0xB803CA78"
#define  HDMIRX_2P0_PHY_P0_R3_reg                                                0xB803CA78
#define  HDMIRX_2P0_PHY_P0_R3_inst_addr                                          "0x0016"
#define  set_HDMIRX_2P0_PHY_P0_R3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_R3_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R3_reg))
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_12_shift                                  (24)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_11_shift                                  (16)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_10_shift                                  (8)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_9_shift                                   (0)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_12_mask                                   (0xFF000000)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_9_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_R3_reg_p0_r_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_R3_get_reg_p0_r_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P0_R3_get_reg_p0_r_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P0_R3_get_reg_p0_r_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_R3_get_reg_p0_r_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P0_R4                                                   0x1803CA7C
#define  HDMIRX_2P0_PHY_P0_R4_reg_addr                                           "0xB803CA7C"
#define  HDMIRX_2P0_PHY_P0_R4_reg                                                0xB803CA7C
#define  HDMIRX_2P0_PHY_P0_R4_inst_addr                                          "0x0017"
#define  set_HDMIRX_2P0_PHY_P0_R4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P0_R4_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P0_R4_reg))
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koff_sel_shift                            (10)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koff_bound_shift                          (9)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koffok_shift                              (8)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_13_shift                                  (0)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koff_sel_mask                             (0x00007C00)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koff_bound_mask                           (0x00000200)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koffok_mask                               (0x00000100)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_13_mask                                   (0x000000FF)
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koff_sel(data)                            (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koff_bound(data)                          (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_koffok(data)                              (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_P0_R4_reg_p0_r_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P0_R4_get_reg_p0_r_koff_sel(data)                        ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_P0_R4_get_reg_p0_r_koff_bound(data)                      ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_P0_R4_get_reg_p0_r_koffok(data)                          ((0x00000100&(data))>>8)
#define  HDMIRX_2P0_PHY_P0_R4_get_reg_p0_r_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_B1                                                   0x1803CA90
#define  HDMIRX_2P0_PHY_P1_B1_reg_addr                                           "0xB803CA90"
#define  HDMIRX_2P0_PHY_P1_B1_reg                                                0xB803CA90
#define  HDMIRX_2P0_PHY_P1_B1_inst_addr                                          "0x0018"
#define  set_HDMIRX_2P0_PHY_P1_B1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_B1_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B1_reg))
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_4_shift                                   (24)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_3_shift                                   (16)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_2_shift                                   (8)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_1_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_4_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_1_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_B1_reg_p1_b_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_B1_get_reg_p1_b_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_B1_get_reg_p1_b_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_B1_get_reg_p1_b_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_B1_get_reg_p1_b_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_B2                                                   0x1803CA94
#define  HDMIRX_2P0_PHY_P1_B2_reg_addr                                           "0xB803CA94"
#define  HDMIRX_2P0_PHY_P1_B2_reg                                                0xB803CA94
#define  HDMIRX_2P0_PHY_P1_B2_inst_addr                                          "0x0019"
#define  set_HDMIRX_2P0_PHY_P1_B2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_B2_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B2_reg))
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_8_shift                                   (24)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_7_shift                                   (16)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_6_shift                                   (8)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_5_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_8_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_5_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_B2_reg_p1_b_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_B2_get_reg_p1_b_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_B2_get_reg_p1_b_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_B2_get_reg_p1_b_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_B2_get_reg_p1_b_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_B3                                                   0x1803CA98
#define  HDMIRX_2P0_PHY_P1_B3_reg_addr                                           "0xB803CA98"
#define  HDMIRX_2P0_PHY_P1_B3_reg                                                0xB803CA98
#define  HDMIRX_2P0_PHY_P1_B3_inst_addr                                          "0x001A"
#define  set_HDMIRX_2P0_PHY_P1_B3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_B3_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B3_reg))
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_12_shift                                  (24)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_11_shift                                  (16)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_10_shift                                  (8)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_9_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_12_mask                                   (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_9_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_B3_reg_p1_b_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_B3_get_reg_p1_b_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_B3_get_reg_p1_b_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_B3_get_reg_p1_b_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_B3_get_reg_p1_b_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_B4                                                   0x1803CA9C
#define  HDMIRX_2P0_PHY_P1_B4_reg_addr                                           "0xB803CA9C"
#define  HDMIRX_2P0_PHY_P1_B4_reg                                                0xB803CA9C
#define  HDMIRX_2P0_PHY_P1_B4_inst_addr                                          "0x001B"
#define  set_HDMIRX_2P0_PHY_P1_B4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_B4_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_B4_reg))
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koff_sel_shift                            (10)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koff_bound_shift                          (9)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koffok_shift                              (8)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_13_shift                                  (0)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koff_sel_mask                             (0x00007C00)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koff_bound_mask                           (0x00000200)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koffok_mask                               (0x00000100)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_13_mask                                   (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koff_sel(data)                            (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koff_bound(data)                          (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_koffok(data)                              (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_B4_reg_p1_b_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_B4_get_reg_p1_b_koff_sel(data)                        ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_P1_B4_get_reg_p1_b_koff_bound(data)                      ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_P1_B4_get_reg_p1_b_koffok(data)                          ((0x00000100&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_B4_get_reg_p1_b_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_CK1                                                  0x1803CAA0
#define  HDMIRX_2P0_PHY_P1_CK1_reg_addr                                          "0xB803CAA0"
#define  HDMIRX_2P0_PHY_P1_CK1_reg                                               0xB803CAA0
#define  HDMIRX_2P0_PHY_P1_CK1_inst_addr                                         "0x001C"
#define  set_HDMIRX_2P0_PHY_P1_CK1_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_CK1_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK1_reg))
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_4_shift                                 (24)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_3_shift                                 (16)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_2_shift                                 (8)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_1_shift                                 (0)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_4_mask                                  (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_3_mask                                  (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_2_mask                                  (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_1_mask                                  (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_4(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_3(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_2(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_CK1_reg_p1_ck_1(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_CK1_get_reg_p1_ck_4(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_CK1_get_reg_p1_ck_3(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_CK1_get_reg_p1_ck_2(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_CK1_get_reg_p1_ck_1(data)                             (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_CK2                                                  0x1803CAA4
#define  HDMIRX_2P0_PHY_P1_CK2_reg_addr                                          "0xB803CAA4"
#define  HDMIRX_2P0_PHY_P1_CK2_reg                                               0xB803CAA4
#define  HDMIRX_2P0_PHY_P1_CK2_inst_addr                                         "0x001D"
#define  set_HDMIRX_2P0_PHY_P1_CK2_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_CK2_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK2_reg))
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_8_shift                                 (24)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_7_shift                                 (16)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_6_shift                                 (8)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_5_shift                                 (0)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_8_mask                                  (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_7_mask                                  (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_6_mask                                  (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_5_mask                                  (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_8(data)                                 (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_7(data)                                 (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_6(data)                                 (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_CK2_reg_p1_ck_5(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_CK2_get_reg_p1_ck_8(data)                             ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_CK2_get_reg_p1_ck_7(data)                             ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_CK2_get_reg_p1_ck_6(data)                             ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_CK2_get_reg_p1_ck_5(data)                             (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_CK3                                                  0x1803CAA8
#define  HDMIRX_2P0_PHY_P1_CK3_reg_addr                                          "0xB803CAA8"
#define  HDMIRX_2P0_PHY_P1_CK3_reg                                               0xB803CAA8
#define  HDMIRX_2P0_PHY_P1_CK3_inst_addr                                         "0x001E"
#define  set_HDMIRX_2P0_PHY_P1_CK3_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_CK3_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK3_reg))
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_12_shift                                (24)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_11_shift                                (16)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_10_shift                                (8)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_9_shift                                 (0)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_12_mask                                 (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_11_mask                                 (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_10_mask                                 (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_9_mask                                  (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_12(data)                                (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_11(data)                                (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_10(data)                                (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_CK3_reg_p1_ck_9(data)                                 (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_CK3_get_reg_p1_ck_12(data)                            ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_CK3_get_reg_p1_ck_11(data)                            ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_CK3_get_reg_p1_ck_10(data)                            ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_CK3_get_reg_p1_ck_9(data)                             (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_CK4                                                  0x1803CAAC
#define  HDMIRX_2P0_PHY_P1_CK4_reg_addr                                          "0xB803CAAC"
#define  HDMIRX_2P0_PHY_P1_CK4_reg                                               0xB803CAAC
#define  HDMIRX_2P0_PHY_P1_CK4_inst_addr                                         "0x001F"
#define  set_HDMIRX_2P0_PHY_P1_CK4_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_CK4_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_CK4_reg))
#define  HDMIRX_2P0_PHY_P1_CK4_reg_p1_ck_13_shift                                (0)
#define  HDMIRX_2P0_PHY_P1_CK4_reg_p1_ck_13_mask                                 (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_CK4_reg_p1_ck_13(data)                                (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_CK4_get_reg_p1_ck_13(data)                            (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_G1                                                   0x1803CAB0
#define  HDMIRX_2P0_PHY_P1_G1_reg_addr                                           "0xB803CAB0"
#define  HDMIRX_2P0_PHY_P1_G1_reg                                                0xB803CAB0
#define  HDMIRX_2P0_PHY_P1_G1_inst_addr                                          "0x0020"
#define  set_HDMIRX_2P0_PHY_P1_G1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_G1_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G1_reg))
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_4_shift                                   (24)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_3_shift                                   (16)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_2_shift                                   (8)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_1_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_4_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_1_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_G1_reg_p1_g_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_G1_get_reg_p1_g_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_G1_get_reg_p1_g_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_G1_get_reg_p1_g_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_G1_get_reg_p1_g_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_G2                                                   0x1803CAB4
#define  HDMIRX_2P0_PHY_P1_G2_reg_addr                                           "0xB803CAB4"
#define  HDMIRX_2P0_PHY_P1_G2_reg                                                0xB803CAB4
#define  HDMIRX_2P0_PHY_P1_G2_inst_addr                                          "0x0021"
#define  set_HDMIRX_2P0_PHY_P1_G2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_G2_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G2_reg))
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_8_shift                                   (24)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_7_shift                                   (16)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_6_shift                                   (8)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_5_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_8_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_5_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_G2_reg_p1_g_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_G2_get_reg_p1_g_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_G2_get_reg_p1_g_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_G2_get_reg_p1_g_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_G2_get_reg_p1_g_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_G3                                                   0x1803CAB8
#define  HDMIRX_2P0_PHY_P1_G3_reg_addr                                           "0xB803CAB8"
#define  HDMIRX_2P0_PHY_P1_G3_reg                                                0xB803CAB8
#define  HDMIRX_2P0_PHY_P1_G3_inst_addr                                          "0x0022"
#define  set_HDMIRX_2P0_PHY_P1_G3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_G3_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G3_reg))
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_12_shift                                  (24)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_11_shift                                  (16)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_10_shift                                  (8)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_9_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_12_mask                                   (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_9_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_G3_reg_p1_g_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_G3_get_reg_p1_g_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_G3_get_reg_p1_g_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_G3_get_reg_p1_g_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_G3_get_reg_p1_g_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_G4                                                   0x1803CABC
#define  HDMIRX_2P0_PHY_P1_G4_reg_addr                                           "0xB803CABC"
#define  HDMIRX_2P0_PHY_P1_G4_reg                                                0xB803CABC
#define  HDMIRX_2P0_PHY_P1_G4_inst_addr                                          "0x0023"
#define  set_HDMIRX_2P0_PHY_P1_G4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_G4_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_G4_reg))
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koff_sel_shift                            (10)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koff_bound_shift                          (9)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koffok_shift                              (8)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_13_shift                                  (0)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koff_sel_mask                             (0x00007C00)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koff_bound_mask                           (0x00000200)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koffok_mask                               (0x00000100)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_13_mask                                   (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koff_sel(data)                            (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koff_bound(data)                          (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_koffok(data)                              (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_G4_reg_p1_g_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_G4_get_reg_p1_g_koff_sel(data)                        ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_P1_G4_get_reg_p1_g_koff_bound(data)                      ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_P1_G4_get_reg_p1_g_koffok(data)                          ((0x00000100&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_G4_get_reg_p1_g_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_R1                                                   0x1803CAC0
#define  HDMIRX_2P0_PHY_P1_R1_reg_addr                                           "0xB803CAC0"
#define  HDMIRX_2P0_PHY_P1_R1_reg                                                0xB803CAC0
#define  HDMIRX_2P0_PHY_P1_R1_inst_addr                                          "0x0024"
#define  set_HDMIRX_2P0_PHY_P1_R1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R1_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_R1_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R1_reg))
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_4_shift                                   (24)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_3_shift                                   (16)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_2_shift                                   (8)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_1_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_4_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_3_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_2_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_1_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_4(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_3(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_2(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_R1_reg_p1_r_1(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_R1_get_reg_p1_r_4(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_R1_get_reg_p1_r_3(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_R1_get_reg_p1_r_2(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_R1_get_reg_p1_r_1(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_R2                                                   0x1803CAC4
#define  HDMIRX_2P0_PHY_P1_R2_reg_addr                                           "0xB803CAC4"
#define  HDMIRX_2P0_PHY_P1_R2_reg                                                0xB803CAC4
#define  HDMIRX_2P0_PHY_P1_R2_inst_addr                                          "0x0025"
#define  set_HDMIRX_2P0_PHY_P1_R2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R2_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_R2_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R2_reg))
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_8_shift                                   (24)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_7_shift                                   (16)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_6_shift                                   (8)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_5_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_8_mask                                    (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_7_mask                                    (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_6_mask                                    (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_5_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_8(data)                                   (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_7(data)                                   (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_6(data)                                   (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_R2_reg_p1_r_5(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_R2_get_reg_p1_r_8(data)                               ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_R2_get_reg_p1_r_7(data)                               ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_R2_get_reg_p1_r_6(data)                               ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_R2_get_reg_p1_r_5(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_R3                                                   0x1803CAC8
#define  HDMIRX_2P0_PHY_P1_R3_reg_addr                                           "0xB803CAC8"
#define  HDMIRX_2P0_PHY_P1_R3_reg                                                0xB803CAC8
#define  HDMIRX_2P0_PHY_P1_R3_inst_addr                                          "0x0026"
#define  set_HDMIRX_2P0_PHY_P1_R3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R3_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_R3_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R3_reg))
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_12_shift                                  (24)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_11_shift                                  (16)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_10_shift                                  (8)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_9_shift                                   (0)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_12_mask                                   (0xFF000000)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_11_mask                                   (0x00FF0000)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_10_mask                                   (0x0000FF00)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_9_mask                                    (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_12(data)                                  (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_11(data)                                  (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_10(data)                                  (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_R3_reg_p1_r_9(data)                                   (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_R3_get_reg_p1_r_12(data)                              ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_P1_R3_get_reg_p1_r_11(data)                              ((0x00FF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_P1_R3_get_reg_p1_r_10(data)                              ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_R3_get_reg_p1_r_9(data)                               (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_P1_R4                                                   0x1803CACC
#define  HDMIRX_2P0_PHY_P1_R4_reg_addr                                           "0xB803CACC"
#define  HDMIRX_2P0_PHY_P1_R4_reg                                                0xB803CACC
#define  HDMIRX_2P0_PHY_P1_R4_inst_addr                                          "0x0027"
#define  set_HDMIRX_2P0_PHY_P1_R4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R4_reg)=data)
#define  get_HDMIRX_2P0_PHY_P1_R4_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_P1_R4_reg))
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koff_sel_shift                            (10)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koff_bound_shift                          (9)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koffok_shift                              (8)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_13_shift                                  (0)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koff_sel_mask                             (0x00007C00)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koff_bound_mask                           (0x00000200)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koffok_mask                               (0x00000100)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_13_mask                                   (0x000000FF)
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koff_sel(data)                            (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koff_bound(data)                          (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_koffok(data)                              (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_P1_R4_reg_p1_r_13(data)                                  (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_P1_R4_get_reg_p1_r_koff_sel(data)                        ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_P1_R4_get_reg_p1_r_koff_bound(data)                      ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_P1_R4_get_reg_p1_r_koffok(data)                          ((0x00000100&(data))>>8)
#define  HDMIRX_2P0_PHY_P1_R4_get_reg_p1_r_13(data)                              (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_RST                                                     0x1803CAD0
#define  HDMIRX_2P0_PHY_RST_reg_addr                                             "0xB803CAD0"
#define  HDMIRX_2P0_PHY_RST_reg                                                  0xB803CAD0
#define  HDMIRX_2P0_PHY_RST_inst_addr                                            "0x0028"
#define  set_HDMIRX_2P0_PHY_RST_reg(data)                                        (*((volatile unsigned int*)HDMIRX_2P0_PHY_RST_reg)=data)
#define  get_HDMIRX_2P0_PHY_RST_reg                                              (*((volatile unsigned int*)HDMIRX_2P0_PHY_RST_reg))
#define  HDMIRX_2P0_PHY_RST_p1_r_demux_rstb_shift                                (5)
#define  HDMIRX_2P0_PHY_RST_p1_g_demux_rstb_shift                                (4)
#define  HDMIRX_2P0_PHY_RST_p1_b_demux_rstb_shift                                (3)
#define  HDMIRX_2P0_PHY_RST_p0_r_demux_rstb_shift                                (2)
#define  HDMIRX_2P0_PHY_RST_p0_g_demux_rstb_shift                                (1)
#define  HDMIRX_2P0_PHY_RST_p0_b_demux_rstb_shift                                (0)
#define  HDMIRX_2P0_PHY_RST_p1_r_demux_rstb_mask                                 (0x00000020)
#define  HDMIRX_2P0_PHY_RST_p1_g_demux_rstb_mask                                 (0x00000010)
#define  HDMIRX_2P0_PHY_RST_p1_b_demux_rstb_mask                                 (0x00000008)
#define  HDMIRX_2P0_PHY_RST_p0_r_demux_rstb_mask                                 (0x00000004)
#define  HDMIRX_2P0_PHY_RST_p0_g_demux_rstb_mask                                 (0x00000002)
#define  HDMIRX_2P0_PHY_RST_p0_b_demux_rstb_mask                                 (0x00000001)
#define  HDMIRX_2P0_PHY_RST_p1_r_demux_rstb(data)                                (0x00000020&((data)<<5))
#define  HDMIRX_2P0_PHY_RST_p1_g_demux_rstb(data)                                (0x00000010&((data)<<4))
#define  HDMIRX_2P0_PHY_RST_p1_b_demux_rstb(data)                                (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_RST_p0_r_demux_rstb(data)                                (0x00000004&((data)<<2))
#define  HDMIRX_2P0_PHY_RST_p0_g_demux_rstb(data)                                (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_RST_p0_b_demux_rstb(data)                                (0x00000001&(data))
#define  HDMIRX_2P0_PHY_RST_get_p1_r_demux_rstb(data)                            ((0x00000020&(data))>>5)
#define  HDMIRX_2P0_PHY_RST_get_p1_g_demux_rstb(data)                            ((0x00000010&(data))>>4)
#define  HDMIRX_2P0_PHY_RST_get_p1_b_demux_rstb(data)                            ((0x00000008&(data))>>3)
#define  HDMIRX_2P0_PHY_RST_get_p0_r_demux_rstb(data)                            ((0x00000004&(data))>>2)
#define  HDMIRX_2P0_PHY_RST_get_p0_g_demux_rstb(data)                            ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_RST_get_p0_b_demux_rstb(data)                            (0x00000001&(data))

#define  HDMIRX_2P0_PHY_REGD0                                                   0x1803CB8C
#define  HDMIRX_2P0_PHY_REGD0_reg_addr                                           "0xB803CB8C"
#define  HDMIRX_2P0_PHY_REGD0_reg                                                0xB803CB8C
#define  HDMIRX_2P0_PHY_REGD0_inst_addr                                          "0x0029"
#define  set_HDMIRX_2P0_PHY_REGD0_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD0_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD0_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD0_reg))
#define  HDMIRX_2P0_PHY_REGD0_p0_r_dig_rst_n_shift                               (31)
#define  HDMIRX_2P0_PHY_REGD0_p0_g_dig_rst_n_shift                               (30)
#define  HDMIRX_2P0_PHY_REGD0_p0_b_dig_rst_n_shift                               (29)
#define  HDMIRX_2P0_PHY_REGD0_p0_r_cdr_rst_n_shift                               (28)
#define  HDMIRX_2P0_PHY_REGD0_p0_g_cdr_rst_n_shift                               (27)
#define  HDMIRX_2P0_PHY_REGD0_p0_b_cdr_rst_n_shift                               (26)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_r_shift                           (25)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_g_shift                           (24)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_b_shift                           (23)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_r_shift                           (22)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_g_shift                           (21)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_b_shift                           (20)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_rate_sel_shift                              (17)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_kd_shift                                    (16)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_kp_shift                                    (8)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_ki_shift                                    (5)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_bypass_sdm_int_shift                        (4)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_data_order_shift                            (3)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_infifo_cnt_shift                            (0)
#define  HDMIRX_2P0_PHY_REGD0_p0_r_dig_rst_n_mask                                (0x80000000)
#define  HDMIRX_2P0_PHY_REGD0_p0_g_dig_rst_n_mask                                (0x40000000)
#define  HDMIRX_2P0_PHY_REGD0_p0_b_dig_rst_n_mask                                (0x20000000)
#define  HDMIRX_2P0_PHY_REGD0_p0_r_cdr_rst_n_mask                                (0x10000000)
#define  HDMIRX_2P0_PHY_REGD0_p0_g_cdr_rst_n_mask                                (0x08000000)
#define  HDMIRX_2P0_PHY_REGD0_p0_b_cdr_rst_n_mask                                (0x04000000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_r_mask                            (0x02000000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_g_mask                            (0x01000000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_b_mask                            (0x00800000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_r_mask                            (0x00400000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_g_mask                            (0x00200000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_b_mask                            (0x00100000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_rate_sel_mask                               (0x000E0000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_kd_mask                                     (0x00010000)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_kp_mask                                     (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_ki_mask                                     (0x000000E0)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_bypass_sdm_int_mask                         (0x00000010)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_data_order_mask                             (0x00000008)
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_infifo_cnt_mask                             (0x00000007)
#define  HDMIRX_2P0_PHY_REGD0_p0_r_dig_rst_n(data)                               (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD0_p0_g_dig_rst_n(data)                               (0x40000000&((data)<<30))
#define  HDMIRX_2P0_PHY_REGD0_p0_b_dig_rst_n(data)                               (0x20000000&((data)<<29))
#define  HDMIRX_2P0_PHY_REGD0_p0_r_cdr_rst_n(data)                               (0x10000000&((data)<<28))
#define  HDMIRX_2P0_PHY_REGD0_p0_g_cdr_rst_n(data)                               (0x08000000&((data)<<27))
#define  HDMIRX_2P0_PHY_REGD0_p0_b_cdr_rst_n(data)                               (0x04000000&((data)<<26))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_r(data)                           (0x02000000&((data)<<25))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_g(data)                           (0x01000000&((data)<<24))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_cdr_ckinv_b(data)                           (0x00800000&((data)<<23))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_r(data)                           (0x00400000&((data)<<22))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_g(data)                           (0x00200000&((data)<<21))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_shift_inv_b(data)                           (0x00100000&((data)<<20))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_rate_sel(data)                              (0x000E0000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_kd(data)                                    (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_kp(data)                                    (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_ki(data)                                    (0x000000E0&((data)<<5))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_bypass_sdm_int(data)                        (0x00000010&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_data_order(data)                            (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_REGD0_reg_p0_infifo_cnt(data)                            (0x00000007&(data))
#define  HDMIRX_2P0_PHY_REGD0_get_p0_r_dig_rst_n(data)                           ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD0_get_p0_g_dig_rst_n(data)                           ((0x40000000&(data))>>30)
#define  HDMIRX_2P0_PHY_REGD0_get_p0_b_dig_rst_n(data)                           ((0x20000000&(data))>>29)
#define  HDMIRX_2P0_PHY_REGD0_get_p0_r_cdr_rst_n(data)                           ((0x10000000&(data))>>28)
#define  HDMIRX_2P0_PHY_REGD0_get_p0_g_cdr_rst_n(data)                           ((0x08000000&(data))>>27)
#define  HDMIRX_2P0_PHY_REGD0_get_p0_b_cdr_rst_n(data)                           ((0x04000000&(data))>>26)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_cdr_ckinv_r(data)                       ((0x02000000&(data))>>25)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_cdr_ckinv_g(data)                       ((0x01000000&(data))>>24)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_cdr_ckinv_b(data)                       ((0x00800000&(data))>>23)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_shift_inv_r(data)                       ((0x00400000&(data))>>22)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_shift_inv_g(data)                       ((0x00200000&(data))>>21)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_shift_inv_b(data)                       ((0x00100000&(data))>>20)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_rate_sel(data)                          ((0x000E0000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_kd(data)                                ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_kp(data)                                ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_ki(data)                                ((0x000000E0&(data))>>5)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_bypass_sdm_int(data)                    ((0x00000010&(data))>>4)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_data_order(data)                        ((0x00000008&(data))>>3)
#define  HDMIRX_2P0_PHY_REGD0_get_reg_p0_infifo_cnt(data)                        (0x00000007&(data))

#define  HDMIRX_2P0_PHY_REGD1                                                   0x1803CB90
#define  HDMIRX_2P0_PHY_REGD1_reg_addr                                           "0xB803CB90"
#define  HDMIRX_2P0_PHY_REGD1_reg                                                0xB803CB90
#define  HDMIRX_2P0_PHY_REGD1_inst_addr                                          "0x002A"
#define  set_HDMIRX_2P0_PHY_REGD1_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD1_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD1_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD1_reg))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_int_init_shift                              (18)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_acc2_period_shift                           (8)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_squ_tri_shift                               (7)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_acc2_manual_shift                           (6)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_testout_sel_shift                           (4)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_ercnt_en_shift                              (3)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_edge_out_shift                              (2)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_pi_m_mode_r_shift                           (1)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_dyn_kp_en_shift                             (0)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_int_init_mask                               (0xFFFC0000)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_acc2_period_mask                            (0x0003FF00)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_squ_tri_mask                                (0x00000080)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_acc2_manual_mask                            (0x00000040)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_testout_sel_mask                            (0x00000030)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_ercnt_en_mask                               (0x00000008)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_edge_out_mask                               (0x00000004)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_pi_m_mode_r_mask                            (0x00000002)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_dyn_kp_en_mask                              (0x00000001)
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_int_init(data)                              (0xFFFC0000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_acc2_period(data)                           (0x0003FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_squ_tri(data)                               (0x00000080&((data)<<7))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_acc2_manual(data)                           (0x00000040&((data)<<6))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_testout_sel(data)                           (0x00000030&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_ercnt_en(data)                              (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_edge_out(data)                              (0x00000004&((data)<<2))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_pi_m_mode_r(data)                           (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_REGD1_reg_p0_dyn_kp_en(data)                             (0x00000001&(data))
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_int_init(data)                          ((0xFFFC0000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_acc2_period(data)                       ((0x0003FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_squ_tri(data)                           ((0x00000080&(data))>>7)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_acc2_manual(data)                       ((0x00000040&(data))>>6)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_testout_sel(data)                       ((0x00000030&(data))>>4)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_ercnt_en(data)                          ((0x00000008&(data))>>3)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_edge_out(data)                          ((0x00000004&(data))>>2)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_pi_m_mode_r(data)                       ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_REGD1_get_reg_p0_dyn_kp_en(data)                         (0x00000001&(data))

#define  HDMIRX_2P0_PHY_REGD2                                                   0x1803CB94
#define  HDMIRX_2P0_PHY_REGD2_reg_addr                                           "0xB803CB94"
#define  HDMIRX_2P0_PHY_REGD2_reg                                                0xB803CB94
#define  HDMIRX_2P0_PHY_REGD2_inst_addr                                          "0x002B"
#define  set_HDMIRX_2P0_PHY_REGD2_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD2_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD2_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD2_reg))
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_st_mode_shift                               (27)
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_pi_m_mode_g_shift                           (1)
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_pi_m_mode_b_shift                           (0)
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_st_mode_mask                                (0x08000000)
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_pi_m_mode_g_mask                            (0x00000002)
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_pi_m_mode_b_mask                            (0x00000001)
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_st_mode(data)                               (0x08000000&((data)<<27))
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_pi_m_mode_g(data)                           (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_REGD2_reg_p0_pi_m_mode_b(data)                           (0x00000001&(data))
#define  HDMIRX_2P0_PHY_REGD2_get_reg_p0_st_mode(data)                           ((0x08000000&(data))>>27)
#define  HDMIRX_2P0_PHY_REGD2_get_reg_p0_pi_m_mode_g(data)                       ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_REGD2_get_reg_p0_pi_m_mode_b(data)                       (0x00000001&(data))

#define  HDMIRX_2P0_PHY_REGD3                                                   0x1803CB98
#define  HDMIRX_2P0_PHY_REGD3_reg_addr                                           "0xB803CB98"
#define  HDMIRX_2P0_PHY_REGD3_reg                                                0xB803CB98
#define  HDMIRX_2P0_PHY_REGD3_inst_addr                                          "0x002C"
#define  set_HDMIRX_2P0_PHY_REGD3_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD3_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD3_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD3_reg))
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_r_shift                                   (24)
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_g_shift                                   (14)
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_b_shift                                   (4)
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_r_mask                                    (0x1F000000)
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_g_mask                                    (0x0007C000)
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_b_mask                                    (0x000001F0)
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_r(data)                                   (0x1F000000&((data)<<24))
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_g(data)                                   (0x0007C000&((data)<<14))
#define  HDMIRX_2P0_PHY_REGD3_p0_st_ro_b(data)                                   (0x000001F0&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD3_get_p0_st_ro_r(data)                               ((0x1F000000&(data))>>24)
#define  HDMIRX_2P0_PHY_REGD3_get_p0_st_ro_g(data)                               ((0x0007C000&(data))>>14)
#define  HDMIRX_2P0_PHY_REGD3_get_p0_st_ro_b(data)                               ((0x000001F0&(data))>>4)

#define  HDMIRX_2P0_PHY_REGD4                                                   0x1803CB9C
#define  HDMIRX_2P0_PHY_REGD4_reg_addr                                           "0xB803CB9C"
#define  HDMIRX_2P0_PHY_REGD4_reg                                                0xB803CB9C
#define  HDMIRX_2P0_PHY_REGD4_inst_addr                                          "0x002D"
#define  set_HDMIRX_2P0_PHY_REGD4_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD4_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD4_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD4_reg))
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_r_shift                                (20)
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_g_shift                                (10)
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_b_shift                                (0)
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_r_mask                                 (0x3FF00000)
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_g_mask                                 (0x000FFC00)
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_b_mask                                 (0x000003FF)
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_r(data)                                (0x3FF00000&((data)<<20))
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_g(data)                                (0x000FFC00&((data)<<10))
#define  HDMIRX_2P0_PHY_REGD4_p0_er_count_b(data)                                (0x000003FF&(data))
#define  HDMIRX_2P0_PHY_REGD4_get_p0_er_count_r(data)                            ((0x3FF00000&(data))>>20)
#define  HDMIRX_2P0_PHY_REGD4_get_p0_er_count_g(data)                            ((0x000FFC00&(data))>>10)
#define  HDMIRX_2P0_PHY_REGD4_get_p0_er_count_b(data)                            (0x000003FF&(data))

#define  HDMIRX_2P0_PHY_REGD5                                                   0x1803CBA0
#define  HDMIRX_2P0_PHY_REGD5_reg_addr                                           "0xB803CBA0"
#define  HDMIRX_2P0_PHY_REGD5_reg                                                0xB803CBA0
#define  HDMIRX_2P0_PHY_REGD5_inst_addr                                          "0x002E"
#define  set_HDMIRX_2P0_PHY_REGD5_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD5_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD5_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD5_reg))
#define  HDMIRX_2P0_PHY_REGD5_p1_r_dig_rst_n_shift                               (31)
#define  HDMIRX_2P0_PHY_REGD5_p1_g_dig_rst_n_shift                               (30)
#define  HDMIRX_2P0_PHY_REGD5_p1_b_dig_rst_n_shift                               (29)
#define  HDMIRX_2P0_PHY_REGD5_p1_r_cdr_rst_n_shift                               (28)
#define  HDMIRX_2P0_PHY_REGD5_p1_g_cdr_rst_n_shift                               (27)
#define  HDMIRX_2P0_PHY_REGD5_p1_b_cdr_rst_n_shift                               (26)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_r_shift                           (25)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_g_shift                           (24)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_b_shift                           (23)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_r_shift                           (22)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_g_shift                           (21)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_b_shift                           (20)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_rate_sel_shift                              (17)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_kd_shift                                    (16)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_kp_shift                                    (8)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_ki_shift                                    (5)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_bypass_sdm_int_shift                        (4)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_data_order_shift                            (3)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_infifo_cnt_shift                            (0)
#define  HDMIRX_2P0_PHY_REGD5_p1_r_dig_rst_n_mask                                (0x80000000)
#define  HDMIRX_2P0_PHY_REGD5_p1_g_dig_rst_n_mask                                (0x40000000)
#define  HDMIRX_2P0_PHY_REGD5_p1_b_dig_rst_n_mask                                (0x20000000)
#define  HDMIRX_2P0_PHY_REGD5_p1_r_cdr_rst_n_mask                                (0x10000000)
#define  HDMIRX_2P0_PHY_REGD5_p1_g_cdr_rst_n_mask                                (0x08000000)
#define  HDMIRX_2P0_PHY_REGD5_p1_b_cdr_rst_n_mask                                (0x04000000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_r_mask                            (0x02000000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_g_mask                            (0x01000000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_b_mask                            (0x00800000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_r_mask                            (0x00400000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_g_mask                            (0x00200000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_b_mask                            (0x00100000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_rate_sel_mask                               (0x000E0000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_kd_mask                                     (0x00010000)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_kp_mask                                     (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_ki_mask                                     (0x000000E0)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_bypass_sdm_int_mask                         (0x00000010)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_data_order_mask                             (0x00000008)
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_infifo_cnt_mask                             (0x00000007)
#define  HDMIRX_2P0_PHY_REGD5_p1_r_dig_rst_n(data)                               (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD5_p1_g_dig_rst_n(data)                               (0x40000000&((data)<<30))
#define  HDMIRX_2P0_PHY_REGD5_p1_b_dig_rst_n(data)                               (0x20000000&((data)<<29))
#define  HDMIRX_2P0_PHY_REGD5_p1_r_cdr_rst_n(data)                               (0x10000000&((data)<<28))
#define  HDMIRX_2P0_PHY_REGD5_p1_g_cdr_rst_n(data)                               (0x08000000&((data)<<27))
#define  HDMIRX_2P0_PHY_REGD5_p1_b_cdr_rst_n(data)                               (0x04000000&((data)<<26))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_r(data)                           (0x02000000&((data)<<25))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_g(data)                           (0x01000000&((data)<<24))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_cdr_ckinv_b(data)                           (0x00800000&((data)<<23))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_r(data)                           (0x00400000&((data)<<22))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_g(data)                           (0x00200000&((data)<<21))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_shift_inv_b(data)                           (0x00100000&((data)<<20))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_rate_sel(data)                              (0x000E0000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_kd(data)                                    (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_kp(data)                                    (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_ki(data)                                    (0x000000E0&((data)<<5))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_bypass_sdm_int(data)                        (0x00000010&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_data_order(data)                            (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_REGD5_reg_p1_infifo_cnt(data)                            (0x00000007&(data))
#define  HDMIRX_2P0_PHY_REGD5_get_p1_r_dig_rst_n(data)                           ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD5_get_p1_g_dig_rst_n(data)                           ((0x40000000&(data))>>30)
#define  HDMIRX_2P0_PHY_REGD5_get_p1_b_dig_rst_n(data)                           ((0x20000000&(data))>>29)
#define  HDMIRX_2P0_PHY_REGD5_get_p1_r_cdr_rst_n(data)                           ((0x10000000&(data))>>28)
#define  HDMIRX_2P0_PHY_REGD5_get_p1_g_cdr_rst_n(data)                           ((0x08000000&(data))>>27)
#define  HDMIRX_2P0_PHY_REGD5_get_p1_b_cdr_rst_n(data)                           ((0x04000000&(data))>>26)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_cdr_ckinv_r(data)                       ((0x02000000&(data))>>25)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_cdr_ckinv_g(data)                       ((0x01000000&(data))>>24)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_cdr_ckinv_b(data)                       ((0x00800000&(data))>>23)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_shift_inv_r(data)                       ((0x00400000&(data))>>22)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_shift_inv_g(data)                       ((0x00200000&(data))>>21)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_shift_inv_b(data)                       ((0x00100000&(data))>>20)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_rate_sel(data)                          ((0x000E0000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_kd(data)                                ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_kp(data)                                ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_ki(data)                                ((0x000000E0&(data))>>5)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_bypass_sdm_int(data)                    ((0x00000010&(data))>>4)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_data_order(data)                        ((0x00000008&(data))>>3)
#define  HDMIRX_2P0_PHY_REGD5_get_reg_p1_infifo_cnt(data)                        (0x00000007&(data))

#define  HDMIRX_2P0_PHY_REGD6                                                   0x1803CBA4
#define  HDMIRX_2P0_PHY_REGD6_reg_addr                                           "0xB803CBA4"
#define  HDMIRX_2P0_PHY_REGD6_reg                                                0xB803CBA4
#define  HDMIRX_2P0_PHY_REGD6_inst_addr                                          "0x002F"
#define  set_HDMIRX_2P0_PHY_REGD6_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD6_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD6_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD6_reg))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_int_init_shift                              (18)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_acc2_period_shift                           (8)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_squ_tri_shift                               (7)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_acc2_manual_shift                           (6)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_testout_sel_shift                           (4)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_ercnt_en_shift                              (3)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_edge_out_shift                              (2)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_pi_m_mode_r_shift                           (1)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_dyn_kp_en_shift                             (0)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_int_init_mask                               (0xFFFC0000)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_acc2_period_mask                            (0x0003FF00)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_squ_tri_mask                                (0x00000080)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_acc2_manual_mask                            (0x00000040)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_testout_sel_mask                            (0x00000030)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_ercnt_en_mask                               (0x00000008)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_edge_out_mask                               (0x00000004)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_pi_m_mode_r_mask                            (0x00000002)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_dyn_kp_en_mask                              (0x00000001)
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_int_init(data)                              (0xFFFC0000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_acc2_period(data)                           (0x0003FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_squ_tri(data)                               (0x00000080&((data)<<7))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_acc2_manual(data)                           (0x00000040&((data)<<6))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_testout_sel(data)                           (0x00000030&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_ercnt_en(data)                              (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_edge_out(data)                              (0x00000004&((data)<<2))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_pi_m_mode_r(data)                           (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_REGD6_reg_p1_dyn_kp_en(data)                             (0x00000001&(data))
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_int_init(data)                          ((0xFFFC0000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_acc2_period(data)                       ((0x0003FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_squ_tri(data)                           ((0x00000080&(data))>>7)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_acc2_manual(data)                       ((0x00000040&(data))>>6)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_testout_sel(data)                       ((0x00000030&(data))>>4)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_ercnt_en(data)                          ((0x00000008&(data))>>3)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_edge_out(data)                          ((0x00000004&(data))>>2)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_pi_m_mode_r(data)                       ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_REGD6_get_reg_p1_dyn_kp_en(data)                         (0x00000001&(data))

#define  HDMIRX_2P0_PHY_REGD7                                                   0x1803CBA8
#define  HDMIRX_2P0_PHY_REGD7_reg_addr                                           "0xB803CBA8"
#define  HDMIRX_2P0_PHY_REGD7_reg                                                0xB803CBA8
#define  HDMIRX_2P0_PHY_REGD7_inst_addr                                          "0x0030"
#define  set_HDMIRX_2P0_PHY_REGD7_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD7_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD7_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD7_reg))
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_st_mode_shift                               (27)
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_pi_m_mode_g_shift                           (1)
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_pi_m_mode_b_shift                           (0)
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_st_mode_mask                                (0x08000000)
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_pi_m_mode_g_mask                            (0x00000002)
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_pi_m_mode_b_mask                            (0x00000001)
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_st_mode(data)                               (0x08000000&((data)<<27))
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_pi_m_mode_g(data)                           (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_REGD7_reg_p1_pi_m_mode_b(data)                           (0x00000001&(data))
#define  HDMIRX_2P0_PHY_REGD7_get_reg_p1_st_mode(data)                           ((0x08000000&(data))>>27)
#define  HDMIRX_2P0_PHY_REGD7_get_reg_p1_pi_m_mode_g(data)                       ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_REGD7_get_reg_p1_pi_m_mode_b(data)                       (0x00000001&(data))

#define  HDMIRX_2P0_PHY_REGD8                                                   0x1803CBAC
#define  HDMIRX_2P0_PHY_REGD8_reg_addr                                           "0xB803CBAC"
#define  HDMIRX_2P0_PHY_REGD8_reg                                                0xB803CBAC
#define  HDMIRX_2P0_PHY_REGD8_inst_addr                                          "0x0031"
#define  set_HDMIRX_2P0_PHY_REGD8_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD8_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD8_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD8_reg))
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_r_shift                                   (24)
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_g_shift                                   (14)
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_b_shift                                   (4)
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_r_mask                                    (0x1F000000)
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_g_mask                                    (0x0007C000)
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_b_mask                                    (0x000001F0)
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_r(data)                                   (0x1F000000&((data)<<24))
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_g(data)                                   (0x0007C000&((data)<<14))
#define  HDMIRX_2P0_PHY_REGD8_p1_st_ro_b(data)                                   (0x000001F0&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD8_get_p1_st_ro_r(data)                               ((0x1F000000&(data))>>24)
#define  HDMIRX_2P0_PHY_REGD8_get_p1_st_ro_g(data)                               ((0x0007C000&(data))>>14)
#define  HDMIRX_2P0_PHY_REGD8_get_p1_st_ro_b(data)                               ((0x000001F0&(data))>>4)

#define  HDMIRX_2P0_PHY_REGD9                                                   0x1803CBB0
#define  HDMIRX_2P0_PHY_REGD9_reg_addr                                           "0xB803CBB0"
#define  HDMIRX_2P0_PHY_REGD9_reg                                                0xB803CBB0
#define  HDMIRX_2P0_PHY_REGD9_inst_addr                                          "0x0032"
#define  set_HDMIRX_2P0_PHY_REGD9_reg(data)                                      (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD9_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD9_reg                                            (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD9_reg))
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_r_shift                                (20)
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_g_shift                                (10)
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_b_shift                                (0)
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_r_mask                                 (0x3FF00000)
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_g_mask                                 (0x000FFC00)
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_b_mask                                 (0x000003FF)
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_r(data)                                (0x3FF00000&((data)<<20))
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_g(data)                                (0x000FFC00&((data)<<10))
#define  HDMIRX_2P0_PHY_REGD9_p1_er_count_b(data)                                (0x000003FF&(data))
#define  HDMIRX_2P0_PHY_REGD9_get_p1_er_count_r(data)                            ((0x3FF00000&(data))>>20)
#define  HDMIRX_2P0_PHY_REGD9_get_p1_er_count_g(data)                            ((0x000FFC00&(data))>>10)
#define  HDMIRX_2P0_PHY_REGD9_get_p1_er_count_b(data)                            (0x000003FF&(data))

#define  HDMIRX_2P0_PHY_REGD20                                                  0x1803CBDC
#define  HDMIRX_2P0_PHY_REGD20_reg_addr                                          "0xB803CBDC"
#define  HDMIRX_2P0_PHY_REGD20_reg                                               0xB803CBDC
#define  HDMIRX_2P0_PHY_REGD20_inst_addr                                         "0x0033"
#define  set_HDMIRX_2P0_PHY_REGD20_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD20_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD20_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD20_reg))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_clk_rdy_shift                       (31)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_eqen_rdy_shift                      (30)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_data_rdy_shift                      (29)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_pi_shift                            (28)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_data_rdy_time_shift                        (24)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_clkout_manual_shift                     (23)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_eqen_manual_shift                       (22)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_data_manual_shift                       (21)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_eqen_rdy_time_shift                        (17)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_order_shift                                (16)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_base_time_shift                     (13)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_en_shift                            (12)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_rst_wid_shift                       (10)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_time_rdy_shift                      (8)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_acdr_l0_en_shift                           (7)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_eqen_rdy_l0_shift                   (6)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_data_rdy_l0_shift                   (5)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_eqen_manual_l0_shift                    (4)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_data_manual_l0_shift                    (3)
#define  HDMIRX_2P0_PHY_REGD20_p0_pll_wd_ckrdy_ro_shift                          (2)
#define  HDMIRX_2P0_PHY_REGD20_p0_pll_wd_rst_wc_shift                            (1)
#define  HDMIRX_2P0_PHY_REGD20_p0_wdog_rst_n_shift                               (0)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_clk_rdy_mask                        (0x80000000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_eqen_rdy_mask                       (0x40000000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_data_rdy_mask                       (0x20000000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_pi_mask                             (0x10000000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_data_rdy_time_mask                         (0x0F000000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_clkout_manual_mask                      (0x00800000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_eqen_manual_mask                        (0x00400000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_data_manual_mask                        (0x00200000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_eqen_rdy_time_mask                         (0x001E0000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_order_mask                                 (0x00010000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_base_time_mask                      (0x0000E000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_en_mask                             (0x00001000)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_rst_wid_mask                        (0x00000C00)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_time_rdy_mask                       (0x00000300)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_acdr_l0_en_mask                            (0x00000080)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_eqen_rdy_l0_mask                    (0x00000040)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_data_rdy_l0_mask                    (0x00000020)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_eqen_manual_l0_mask                     (0x00000010)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_data_manual_l0_mask                     (0x00000008)
#define  HDMIRX_2P0_PHY_REGD20_p0_pll_wd_ckrdy_ro_mask                           (0x00000004)
#define  HDMIRX_2P0_PHY_REGD20_p0_pll_wd_rst_wc_mask                             (0x00000002)
#define  HDMIRX_2P0_PHY_REGD20_p0_wdog_rst_n_mask                                (0x00000001)
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_clk_rdy(data)                       (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_eqen_rdy(data)                      (0x40000000&((data)<<30))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_data_rdy(data)                      (0x20000000&((data)<<29))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_pi(data)                            (0x10000000&((data)<<28))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_data_rdy_time(data)                        (0x0F000000&((data)<<24))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_clkout_manual(data)                     (0x00800000&((data)<<23))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_eqen_manual(data)                       (0x00400000&((data)<<22))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_data_manual(data)                       (0x00200000&((data)<<21))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_eqen_rdy_time(data)                        (0x001E0000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_order(data)                                (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_base_time(data)                     (0x0000E000&((data)<<13))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_en(data)                            (0x00001000&((data)<<12))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_rst_wid(data)                       (0x00000C00&((data)<<10))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_pll_wd_time_rdy(data)                      (0x00000300&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_acdr_l0_en(data)                           (0x00000080&((data)<<7))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_eqen_rdy_l0(data)                   (0x00000040&((data)<<6))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_bypass_data_rdy_l0(data)                   (0x00000020&((data)<<5))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_eqen_manual_l0(data)                    (0x00000010&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD20_reg_p0_en_data_manual_l0(data)                    (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_REGD20_p0_pll_wd_ckrdy_ro(data)                          (0x00000004&((data)<<2))
#define  HDMIRX_2P0_PHY_REGD20_p0_pll_wd_rst_wc(data)                            (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_REGD20_p0_wdog_rst_n(data)                               (0x00000001&(data))
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_bypass_clk_rdy(data)                   ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_bypass_eqen_rdy(data)                  ((0x40000000&(data))>>30)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_bypass_data_rdy(data)                  ((0x20000000&(data))>>29)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_bypass_pi(data)                        ((0x10000000&(data))>>28)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_data_rdy_time(data)                    ((0x0F000000&(data))>>24)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_en_clkout_manual(data)                 ((0x00800000&(data))>>23)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_en_eqen_manual(data)                   ((0x00400000&(data))>>22)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_en_data_manual(data)                   ((0x00200000&(data))>>21)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_eqen_rdy_time(data)                    ((0x001E0000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_order(data)                            ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_pll_wd_base_time(data)                 ((0x0000E000&(data))>>13)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_pll_wd_en(data)                        ((0x00001000&(data))>>12)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_pll_wd_rst_wid(data)                   ((0x00000C00&(data))>>10)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_pll_wd_time_rdy(data)                  ((0x00000300&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_acdr_l0_en(data)                       ((0x00000080&(data))>>7)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_bypass_eqen_rdy_l0(data)               ((0x00000040&(data))>>6)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_bypass_data_rdy_l0(data)               ((0x00000020&(data))>>5)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_en_eqen_manual_l0(data)                ((0x00000010&(data))>>4)
#define  HDMIRX_2P0_PHY_REGD20_get_reg_p0_en_data_manual_l0(data)                ((0x00000008&(data))>>3)
#define  HDMIRX_2P0_PHY_REGD20_get_p0_pll_wd_ckrdy_ro(data)                      ((0x00000004&(data))>>2)
#define  HDMIRX_2P0_PHY_REGD20_get_p0_pll_wd_rst_wc(data)                        ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_REGD20_get_p0_wdog_rst_n(data)                           (0x00000001&(data))

#define  HDMIRX_2P0_PHY_REGD21                                                  0x1803CBE0
#define  HDMIRX_2P0_PHY_REGD21_reg_addr                                          "0xB803CBE0"
#define  HDMIRX_2P0_PHY_REGD21_reg                                               0xB803CBE0
#define  HDMIRX_2P0_PHY_REGD21_inst_addr                                         "0x0034"
#define  set_HDMIRX_2P0_PHY_REGD21_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD21_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD21_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD21_reg))
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_wd_sdm_en_shift                            (31)
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_f_code_shift                               (16)
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_n_code_shift                               (0)
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_wd_sdm_en_mask                             (0x80000000)
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_f_code_mask                                (0x0FFF0000)
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_n_code_mask                                (0x000001FF)
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_wd_sdm_en(data)                            (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_f_code(data)                               (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD21_reg_p0_n_code(data)                               (0x000001FF&(data))
#define  HDMIRX_2P0_PHY_REGD21_get_reg_p0_wd_sdm_en(data)                        ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD21_get_reg_p0_f_code(data)                           ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD21_get_reg_p0_n_code(data)                           (0x000001FF&(data))

#define  HDMIRX_2P0_PHY_REGD22                                                  0x1803CBE4
#define  HDMIRX_2P0_PHY_REGD22_reg_addr                                          "0xB803CBE4"
#define  HDMIRX_2P0_PHY_REGD22_reg                                               0xB803CBE4
#define  HDMIRX_2P0_PHY_REGD22_inst_addr                                         "0x0035"
#define  set_HDMIRX_2P0_PHY_REGD22_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD22_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD22_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD22_reg))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_clk_rdy_shift                       (31)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_eqen_rdy_shift                      (30)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_data_rdy_shift                      (29)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_pi_shift                            (28)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_data_rdy_time_shift                        (24)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_clkout_manual_shift                     (23)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_eqen_manual_shift                       (22)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_data_manual_shift                       (21)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_eqen_rdy_time_shift                        (17)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_order_shift                                (16)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_base_time_shift                     (13)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_en_shift                            (12)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_rst_wid_shift                       (10)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_time_rdy_shift                      (8)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_acdr_l0_en_shift                           (7)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_eqen_rdy_l0_shift                   (6)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_data_rdy_l0_shift                   (5)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_eqen_manual_l0_shift                    (4)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_data_manual_l0_shift                    (3)
#define  HDMIRX_2P0_PHY_REGD22_p1_pll_wd_ckrdy_ro_shift                          (2)
#define  HDMIRX_2P0_PHY_REGD22_p1_pll_wd_rst_wc_shift                            (1)
#define  HDMIRX_2P0_PHY_REGD22_p1_wdog_rst_n_shift                               (0)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_clk_rdy_mask                        (0x80000000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_eqen_rdy_mask                       (0x40000000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_data_rdy_mask                       (0x20000000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_pi_mask                             (0x10000000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_data_rdy_time_mask                         (0x0F000000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_clkout_manual_mask                      (0x00800000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_eqen_manual_mask                        (0x00400000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_data_manual_mask                        (0x00200000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_eqen_rdy_time_mask                         (0x001E0000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_order_mask                                 (0x00010000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_base_time_mask                      (0x0000E000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_en_mask                             (0x00001000)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_rst_wid_mask                        (0x00000C00)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_time_rdy_mask                       (0x00000300)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_acdr_l0_en_mask                            (0x00000080)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_eqen_rdy_l0_mask                    (0x00000040)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_data_rdy_l0_mask                    (0x00000020)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_eqen_manual_l0_mask                     (0x00000010)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_data_manual_l0_mask                     (0x00000008)
#define  HDMIRX_2P0_PHY_REGD22_p1_pll_wd_ckrdy_ro_mask                           (0x00000004)
#define  HDMIRX_2P0_PHY_REGD22_p1_pll_wd_rst_wc_mask                             (0x00000002)
#define  HDMIRX_2P0_PHY_REGD22_p1_wdog_rst_n_mask                                (0x00000001)
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_clk_rdy(data)                       (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_eqen_rdy(data)                      (0x40000000&((data)<<30))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_data_rdy(data)                      (0x20000000&((data)<<29))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_pi(data)                            (0x10000000&((data)<<28))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_data_rdy_time(data)                        (0x0F000000&((data)<<24))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_clkout_manual(data)                     (0x00800000&((data)<<23))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_eqen_manual(data)                       (0x00400000&((data)<<22))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_data_manual(data)                       (0x00200000&((data)<<21))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_eqen_rdy_time(data)                        (0x001E0000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_order(data)                                (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_base_time(data)                     (0x0000E000&((data)<<13))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_en(data)                            (0x00001000&((data)<<12))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_rst_wid(data)                       (0x00000C00&((data)<<10))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_pll_wd_time_rdy(data)                      (0x00000300&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_acdr_l0_en(data)                           (0x00000080&((data)<<7))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_eqen_rdy_l0(data)                   (0x00000040&((data)<<6))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_bypass_data_rdy_l0(data)                   (0x00000020&((data)<<5))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_eqen_manual_l0(data)                    (0x00000010&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD22_reg_p1_en_data_manual_l0(data)                    (0x00000008&((data)<<3))
#define  HDMIRX_2P0_PHY_REGD22_p1_pll_wd_ckrdy_ro(data)                          (0x00000004&((data)<<2))
#define  HDMIRX_2P0_PHY_REGD22_p1_pll_wd_rst_wc(data)                            (0x00000002&((data)<<1))
#define  HDMIRX_2P0_PHY_REGD22_p1_wdog_rst_n(data)                               (0x00000001&(data))
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_bypass_clk_rdy(data)                   ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_bypass_eqen_rdy(data)                  ((0x40000000&(data))>>30)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_bypass_data_rdy(data)                  ((0x20000000&(data))>>29)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_bypass_pi(data)                        ((0x10000000&(data))>>28)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_data_rdy_time(data)                    ((0x0F000000&(data))>>24)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_en_clkout_manual(data)                 ((0x00800000&(data))>>23)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_en_eqen_manual(data)                   ((0x00400000&(data))>>22)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_en_data_manual(data)                   ((0x00200000&(data))>>21)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_eqen_rdy_time(data)                    ((0x001E0000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_order(data)                            ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_pll_wd_base_time(data)                 ((0x0000E000&(data))>>13)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_pll_wd_en(data)                        ((0x00001000&(data))>>12)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_pll_wd_rst_wid(data)                   ((0x00000C00&(data))>>10)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_pll_wd_time_rdy(data)                  ((0x00000300&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_acdr_l0_en(data)                       ((0x00000080&(data))>>7)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_bypass_eqen_rdy_l0(data)               ((0x00000040&(data))>>6)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_bypass_data_rdy_l0(data)               ((0x00000020&(data))>>5)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_en_eqen_manual_l0(data)                ((0x00000010&(data))>>4)
#define  HDMIRX_2P0_PHY_REGD22_get_reg_p1_en_data_manual_l0(data)                ((0x00000008&(data))>>3)
#define  HDMIRX_2P0_PHY_REGD22_get_p1_pll_wd_ckrdy_ro(data)                      ((0x00000004&(data))>>2)
#define  HDMIRX_2P0_PHY_REGD22_get_p1_pll_wd_rst_wc(data)                        ((0x00000002&(data))>>1)
#define  HDMIRX_2P0_PHY_REGD22_get_p1_wdog_rst_n(data)                           (0x00000001&(data))

#define  HDMIRX_2P0_PHY_REGD23                                                  0x1803CBE8
#define  HDMIRX_2P0_PHY_REGD23_reg_addr                                          "0xB803CBE8"
#define  HDMIRX_2P0_PHY_REGD23_reg                                               0xB803CBE8
#define  HDMIRX_2P0_PHY_REGD23_inst_addr                                         "0x0036"
#define  set_HDMIRX_2P0_PHY_REGD23_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD23_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD23_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD23_reg))
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_wd_sdm_en_shift                            (31)
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_f_code_shift                               (16)
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_n_code_shift                               (0)
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_wd_sdm_en_mask                             (0x80000000)
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_f_code_mask                                (0x0FFF0000)
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_n_code_mask                                (0x000001FF)
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_wd_sdm_en(data)                            (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_f_code(data)                               (0x0FFF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD23_reg_p1_n_code(data)                               (0x000001FF&(data))
#define  HDMIRX_2P0_PHY_REGD23_get_reg_p1_wd_sdm_en(data)                        ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD23_get_reg_p1_f_code(data)                           ((0x0FFF0000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD23_get_reg_p1_n_code(data)                           (0x000001FF&(data))

#define  HDMIRX_2P0_PHY_REGD56                                                  0x1803CC6C
#define  HDMIRX_2P0_PHY_REGD56_reg_addr                                          "0xB803CC6C"
#define  HDMIRX_2P0_PHY_REGD56_reg                                               0xB803CC6C
#define  HDMIRX_2P0_PHY_REGD56_inst_addr                                         "0x0037"
#define  set_HDMIRX_2P0_PHY_REGD56_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD56_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD56_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD56_reg))
#define  HDMIRX_2P0_PHY_REGD56_p0_ck_md_rstb_shift                               (31)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_threshold_shift                      (25)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_debounce_shift                       (18)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_sel_shift                            (16)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_auto_shift                           (15)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_adj_shift                            (11)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_error_limit_shift                       (6)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_reserved_shift                       (2)
#define  HDMIRX_2P0_PHY_REGD56_p0_ck_md_rstb_mask                                (0x80000000)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_threshold_mask                       (0x7E000000)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_debounce_mask                        (0x01FC0000)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_sel_mask                             (0x00030000)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_auto_mask                            (0x00008000)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_adj_mask                             (0x00007800)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_error_limit_mask                        (0x000007C0)
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_reserved_mask                        (0x0000003C)
#define  HDMIRX_2P0_PHY_REGD56_p0_ck_md_rstb(data)                               (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_threshold(data)                      (0x7E000000&((data)<<25))
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_debounce(data)                       (0x01FC0000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_sel(data)                            (0x00030000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_auto(data)                           (0x00008000&((data)<<15))
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_adj(data)                            (0x00007800&((data)<<11))
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_error_limit(data)                       (0x000007C0&((data)<<6))
#define  HDMIRX_2P0_PHY_REGD56_reg_p0_ck_md_reserved(data)                       (0x0000003C&((data)<<2))
#define  HDMIRX_2P0_PHY_REGD56_get_p0_ck_md_rstb(data)                           ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD56_get_reg_p0_ck_md_threshold(data)                  ((0x7E000000&(data))>>25)
#define  HDMIRX_2P0_PHY_REGD56_get_reg_p0_ck_md_debounce(data)                   ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD56_get_reg_p0_ck_md_sel(data)                        ((0x00030000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD56_get_reg_p0_ck_md_auto(data)                       ((0x00008000&(data))>>15)
#define  HDMIRX_2P0_PHY_REGD56_get_reg_p0_ck_md_adj(data)                        ((0x00007800&(data))>>11)
#define  HDMIRX_2P0_PHY_REGD56_get_reg_p0_ck_error_limit(data)                   ((0x000007C0&(data))>>6)
#define  HDMIRX_2P0_PHY_REGD56_get_reg_p0_ck_md_reserved(data)                   ((0x0000003C&(data))>>2)

#define  HDMIRX_2P0_PHY_REGD57                                                  0x1803CC70
#define  HDMIRX_2P0_PHY_REGD57_reg_addr                                          "0xB803CC70"
#define  HDMIRX_2P0_PHY_REGD57_reg                                               0xB803CC70
#define  HDMIRX_2P0_PHY_REGD57_inst_addr                                         "0x0038"
#define  set_HDMIRX_2P0_PHY_REGD57_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD57_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD57_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD57_reg))
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_md_count_shift                              (19)
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_rate_shift                                  (15)
#define  HDMIRX_2P0_PHY_REGD57_p0_unstable_count_shift                           (10)
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_md_ok_shift                                 (9)
#define  HDMIRX_2P0_PHY_REGD57_p0_clock_unstable_flag_shift                      (8)
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_md_count_mask                               (0xFFF80000)
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_rate_mask                                   (0x00078000)
#define  HDMIRX_2P0_PHY_REGD57_p0_unstable_count_mask                            (0x00007C00)
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_md_ok_mask                                  (0x00000200)
#define  HDMIRX_2P0_PHY_REGD57_p0_clock_unstable_flag_mask                       (0x00000100)
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_md_count(data)                              (0xFFF80000&((data)<<19))
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_rate(data)                                  (0x00078000&((data)<<15))
#define  HDMIRX_2P0_PHY_REGD57_p0_unstable_count(data)                           (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_REGD57_p0_ck_md_ok(data)                                 (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_REGD57_p0_clock_unstable_flag(data)                      (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD57_get_p0_ck_md_count(data)                          ((0xFFF80000&(data))>>19)
#define  HDMIRX_2P0_PHY_REGD57_get_p0_ck_rate(data)                              ((0x00078000&(data))>>15)
#define  HDMIRX_2P0_PHY_REGD57_get_p0_unstable_count(data)                       ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_REGD57_get_p0_ck_md_ok(data)                             ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_REGD57_get_p0_clock_unstable_flag(data)                  ((0x00000100&(data))>>8)

#define  HDMIRX_2P0_PHY_REGD58                                                  0x1803CC74
#define  HDMIRX_2P0_PHY_REGD58_reg_addr                                          "0xB803CC74"
#define  HDMIRX_2P0_PHY_REGD58_reg                                               0xB803CC74
#define  HDMIRX_2P0_PHY_REGD58_inst_addr                                         "0x0039"
#define  set_HDMIRX_2P0_PHY_REGD58_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD58_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD58_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD58_reg))
#define  HDMIRX_2P0_PHY_REGD58_p1_ck_md_rstb_shift                               (31)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_threshold_shift                      (25)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_debounce_shift                       (18)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_sel_shift                            (16)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_auto_shift                           (15)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_adj_shift                            (11)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_error_limit_shift                       (6)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_reserved_shift                       (2)
#define  HDMIRX_2P0_PHY_REGD58_p1_ck_md_rstb_mask                                (0x80000000)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_threshold_mask                       (0x7E000000)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_debounce_mask                        (0x01FC0000)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_sel_mask                             (0x00030000)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_auto_mask                            (0x00008000)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_adj_mask                             (0x00007800)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_error_limit_mask                        (0x000007C0)
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_reserved_mask                        (0x0000003C)
#define  HDMIRX_2P0_PHY_REGD58_p1_ck_md_rstb(data)                               (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_threshold(data)                      (0x7E000000&((data)<<25))
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_debounce(data)                       (0x01FC0000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_sel(data)                            (0x00030000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_auto(data)                           (0x00008000&((data)<<15))
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_adj(data)                            (0x00007800&((data)<<11))
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_error_limit(data)                       (0x000007C0&((data)<<6))
#define  HDMIRX_2P0_PHY_REGD58_reg_p1_ck_md_reserved(data)                       (0x0000003C&((data)<<2))
#define  HDMIRX_2P0_PHY_REGD58_get_p1_ck_md_rstb(data)                           ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD58_get_reg_p1_ck_md_threshold(data)                  ((0x7E000000&(data))>>25)
#define  HDMIRX_2P0_PHY_REGD58_get_reg_p1_ck_md_debounce(data)                   ((0x01FC0000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD58_get_reg_p1_ck_md_sel(data)                        ((0x00030000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD58_get_reg_p1_ck_md_auto(data)                       ((0x00008000&(data))>>15)
#define  HDMIRX_2P0_PHY_REGD58_get_reg_p1_ck_md_adj(data)                        ((0x00007800&(data))>>11)
#define  HDMIRX_2P0_PHY_REGD58_get_reg_p1_ck_error_limit(data)                   ((0x000007C0&(data))>>6)
#define  HDMIRX_2P0_PHY_REGD58_get_reg_p1_ck_md_reserved(data)                   ((0x0000003C&(data))>>2)

#define  HDMIRX_2P0_PHY_REGD59                                                  0x1803CC78
#define  HDMIRX_2P0_PHY_REGD59_reg_addr                                          "0xB803CC78"
#define  HDMIRX_2P0_PHY_REGD59_reg                                               0xB803CC78
#define  HDMIRX_2P0_PHY_REGD59_inst_addr                                         "0x003A"
#define  set_HDMIRX_2P0_PHY_REGD59_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD59_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD59_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD59_reg))
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_md_count_shift                              (19)
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_rate_shift                                  (15)
#define  HDMIRX_2P0_PHY_REGD59_p1_unstable_count_shift                           (10)
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_md_ok_shift                                 (9)
#define  HDMIRX_2P0_PHY_REGD59_p1_clock_unstable_flag_shift                      (8)
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_md_count_mask                               (0xFFF80000)
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_rate_mask                                   (0x00078000)
#define  HDMIRX_2P0_PHY_REGD59_p1_unstable_count_mask                            (0x00007C00)
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_md_ok_mask                                  (0x00000200)
#define  HDMIRX_2P0_PHY_REGD59_p1_clock_unstable_flag_mask                       (0x00000100)
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_md_count(data)                              (0xFFF80000&((data)<<19))
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_rate(data)                                  (0x00078000&((data)<<15))
#define  HDMIRX_2P0_PHY_REGD59_p1_unstable_count(data)                           (0x00007C00&((data)<<10))
#define  HDMIRX_2P0_PHY_REGD59_p1_ck_md_ok(data)                                 (0x00000200&((data)<<9))
#define  HDMIRX_2P0_PHY_REGD59_p1_clock_unstable_flag(data)                      (0x00000100&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD59_get_p1_ck_md_count(data)                          ((0xFFF80000&(data))>>19)
#define  HDMIRX_2P0_PHY_REGD59_get_p1_ck_rate(data)                              ((0x00078000&(data))>>15)
#define  HDMIRX_2P0_PHY_REGD59_get_p1_unstable_count(data)                       ((0x00007C00&(data))>>10)
#define  HDMIRX_2P0_PHY_REGD59_get_p1_ck_md_ok(data)                             ((0x00000200&(data))>>9)
#define  HDMIRX_2P0_PHY_REGD59_get_p1_clock_unstable_flag(data)                  ((0x00000100&(data))>>8)

#define  HDMIRX_2P0_PHY_REGD64                                                  0x1803CC8C
#define  HDMIRX_2P0_PHY_REGD64_reg_addr                                          "0xB803CC8C"
#define  HDMIRX_2P0_PHY_REGD64_reg                                               0xB803CC8C
#define  HDMIRX_2P0_PHY_REGD64_inst_addr                                         "0x003B"
#define  set_HDMIRX_2P0_PHY_REGD64_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD64_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD64_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD64_reg))
#define  HDMIRX_2P0_PHY_REGD64_reg_dig_reserved_0_shift                          (24)
#define  HDMIRX_2P0_PHY_REGD64_reg_dig_reserved_1_shift                          (16)
#define  HDMIRX_2P0_PHY_REGD64_reg_dig_reserved_0_mask                           (0xFF000000)
#define  HDMIRX_2P0_PHY_REGD64_reg_dig_reserved_1_mask                           (0x00FF0000)
#define  HDMIRX_2P0_PHY_REGD64_reg_dig_reserved_0(data)                          (0xFF000000&((data)<<24))
#define  HDMIRX_2P0_PHY_REGD64_reg_dig_reserved_1(data)                          (0x00FF0000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD64_get_reg_dig_reserved_0(data)                      ((0xFF000000&(data))>>24)
#define  HDMIRX_2P0_PHY_REGD64_get_reg_dig_reserved_1(data)                      ((0x00FF0000&(data))>>16)

#define  HDMIRX_2P0_PHY_REGD65                                                  0x1803CC90
#define  HDMIRX_2P0_PHY_REGD65_reg_addr                                          "0xB803CC90"
#define  HDMIRX_2P0_PHY_REGD65_reg                                               0xB803CC90
#define  HDMIRX_2P0_PHY_REGD65_inst_addr                                         "0x003C"
#define  set_HDMIRX_2P0_PHY_REGD65_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD65_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD65_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD65_reg))
#define  HDMIRX_2P0_PHY_REGD65_reg_dig_debug_sel_shift                           (27)
#define  HDMIRX_2P0_PHY_REGD65_reg_dig_debug_sel_mask                            (0xF8000000)
#define  HDMIRX_2P0_PHY_REGD65_reg_dig_debug_sel(data)                           (0xF8000000&((data)<<27))
#define  HDMIRX_2P0_PHY_REGD65_get_reg_dig_debug_sel(data)                       ((0xF8000000&(data))>>27)

#define  HDMIRX_2P0_PHY_REGD66                                                  0x1803CC94
#define  HDMIRX_2P0_PHY_REGD66_reg_addr                                          "0xB803CC94"
#define  HDMIRX_2P0_PHY_REGD66_reg                                               0xB803CC94
#define  HDMIRX_2P0_PHY_REGD66_inst_addr                                         "0x003D"
#define  set_HDMIRX_2P0_PHY_REGD66_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD66_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD66_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD66_reg))
#define  HDMIRX_2P0_PHY_REGD66_reg_p0_st_m_value_r_shift                         (0)
#define  HDMIRX_2P0_PHY_REGD66_reg_p0_st_m_value_r_mask                          (0xFFFFFFFF)
#define  HDMIRX_2P0_PHY_REGD66_reg_p0_st_m_value_r(data)                         (0xFFFFFFFF&(data))
#define  HDMIRX_2P0_PHY_REGD66_get_reg_p0_st_m_value_r(data)                     (0xFFFFFFFF&(data))

#define  HDMIRX_2P0_PHY_REGD67                                                  0x1803CC98
#define  HDMIRX_2P0_PHY_REGD67_reg_addr                                          "0xB803CC98"
#define  HDMIRX_2P0_PHY_REGD67_reg                                               0xB803CC98
#define  HDMIRX_2P0_PHY_REGD67_inst_addr                                         "0x003E"
#define  set_HDMIRX_2P0_PHY_REGD67_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD67_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD67_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD67_reg))
#define  HDMIRX_2P0_PHY_REGD67_reg_p1_st_m_value_r_shift                         (0)
#define  HDMIRX_2P0_PHY_REGD67_reg_p1_st_m_value_r_mask                          (0xFFFFFFFF)
#define  HDMIRX_2P0_PHY_REGD67_reg_p1_st_m_value_r(data)                         (0xFFFFFFFF&(data))
#define  HDMIRX_2P0_PHY_REGD67_get_reg_p1_st_m_value_r(data)                     (0xFFFFFFFF&(data))

#define  HDMIRX_2P0_PHY_REGD71                                                  0x1803CCA8
#define  HDMIRX_2P0_PHY_REGD71_reg_addr                                          "0xB803CCA8"
#define  HDMIRX_2P0_PHY_REGD71_reg                                               0xB803CCA8
#define  HDMIRX_2P0_PHY_REGD71_inst_addr                                         "0x003F"
#define  set_HDMIRX_2P0_PHY_REGD71_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD71_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD71_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD71_reg))
#define  HDMIRX_2P0_PHY_REGD71_reg_p0_st_m_value_g_shift                         (0)
#define  HDMIRX_2P0_PHY_REGD71_reg_p0_st_m_value_g_mask                          (0xFFFFFFFF)
#define  HDMIRX_2P0_PHY_REGD71_reg_p0_st_m_value_g(data)                         (0xFFFFFFFF&(data))
#define  HDMIRX_2P0_PHY_REGD71_get_reg_p0_st_m_value_g(data)                     (0xFFFFFFFF&(data))

#define  HDMIRX_2P0_PHY_REGD72                                                  0x1803CCAC
#define  HDMIRX_2P0_PHY_REGD72_reg_addr                                          "0xB803CCAC"
#define  HDMIRX_2P0_PHY_REGD72_reg                                               0xB803CCAC
#define  HDMIRX_2P0_PHY_REGD72_inst_addr                                         "0x0040"
#define  set_HDMIRX_2P0_PHY_REGD72_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD72_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD72_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD72_reg))
#define  HDMIRX_2P0_PHY_REGD72_reg_p1_st_m_value_g_shift                         (0)
#define  HDMIRX_2P0_PHY_REGD72_reg_p1_st_m_value_g_mask                          (0xFFFFFFFF)
#define  HDMIRX_2P0_PHY_REGD72_reg_p1_st_m_value_g(data)                         (0xFFFFFFFF&(data))
#define  HDMIRX_2P0_PHY_REGD72_get_reg_p1_st_m_value_g(data)                     (0xFFFFFFFF&(data))

#define  HDMIRX_2P0_PHY_REGD75                                                  0x1803CCB8
#define  HDMIRX_2P0_PHY_REGD75_reg_addr                                          "0xB803CCB8"
#define  HDMIRX_2P0_PHY_REGD75_reg                                               0xB803CCB8
#define  HDMIRX_2P0_PHY_REGD75_inst_addr                                         "0x0041"
#define  set_HDMIRX_2P0_PHY_REGD75_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD75_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD75_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD75_reg))
#define  HDMIRX_2P0_PHY_REGD75_reg_p0_st_m_value_b_shift                         (0)
#define  HDMIRX_2P0_PHY_REGD75_reg_p0_st_m_value_b_mask                          (0xFFFFFFFF)
#define  HDMIRX_2P0_PHY_REGD75_reg_p0_st_m_value_b(data)                         (0xFFFFFFFF&(data))
#define  HDMIRX_2P0_PHY_REGD75_get_reg_p0_st_m_value_b(data)                     (0xFFFFFFFF&(data))

#define  HDMIRX_2P0_PHY_REGD76                                                  0x1803CCBC
#define  HDMIRX_2P0_PHY_REGD76_reg_addr                                          "0xB803CCBC"
#define  HDMIRX_2P0_PHY_REGD76_reg                                               0xB803CCBC
#define  HDMIRX_2P0_PHY_REGD76_inst_addr                                         "0x0042"
#define  set_HDMIRX_2P0_PHY_REGD76_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD76_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD76_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD76_reg))
#define  HDMIRX_2P0_PHY_REGD76_reg_p1_st_m_value_b_shift                         (0)
#define  HDMIRX_2P0_PHY_REGD76_reg_p1_st_m_value_b_mask                          (0xFFFFFFFF)
#define  HDMIRX_2P0_PHY_REGD76_reg_p1_st_m_value_b(data)                         (0xFFFFFFFF&(data))
#define  HDMIRX_2P0_PHY_REGD76_get_reg_p1_st_m_value_b(data)                     (0xFFFFFFFF&(data))

#define  HDMIRX_2P0_PHY_REGD79                                                  0x1803CCC8
#define  HDMIRX_2P0_PHY_REGD79_reg_addr                                          "0xB803CCC8"
#define  HDMIRX_2P0_PHY_REGD79_reg                                               0xB803CCC8
#define  HDMIRX_2P0_PHY_REGD79_inst_addr                                         "0x0043"
#define  set_HDMIRX_2P0_PHY_REGD79_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD79_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD79_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD79_reg))
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_enable_one_zero_r_shift                    (18)
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_prbs_invs_r_shift                          (17)
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_pattern_sel_r_shift                        (16)
#define  HDMIRX_2P0_PHY_REGD79_p0_pkt_count_r_shift                              (8)
#define  HDMIRX_2P0_PHY_REGD79_p0_err_count_r_shift                              (0)
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_enable_one_zero_r_mask                     (0x00040000)
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_prbs_invs_r_mask                           (0x00020000)
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_pattern_sel_r_mask                         (0x00010000)
#define  HDMIRX_2P0_PHY_REGD79_p0_pkt_count_r_mask                               (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD79_p0_err_count_r_mask                               (0x000000FF)
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_enable_one_zero_r(data)                    (0x00040000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_prbs_invs_r(data)                          (0x00020000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD79_reg_p0_pattern_sel_r(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD79_p0_pkt_count_r(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD79_p0_err_count_r(data)                              (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_REGD79_get_reg_p0_enable_one_zero_r(data)                ((0x00040000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD79_get_reg_p0_prbs_invs_r(data)                      ((0x00020000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD79_get_reg_p0_pattern_sel_r(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD79_get_p0_pkt_count_r(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD79_get_p0_err_count_r(data)                          (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_REGD80                                                  0x1803CCCC
#define  HDMIRX_2P0_PHY_REGD80_reg_addr                                          "0xB803CCCC"
#define  HDMIRX_2P0_PHY_REGD80_reg                                               0xB803CCCC
#define  HDMIRX_2P0_PHY_REGD80_inst_addr                                         "0x0044"
#define  set_HDMIRX_2P0_PHY_REGD80_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD80_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD80_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD80_reg))
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_enable_one_zero_g_shift                    (18)
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_prbs_invs_g_shift                          (17)
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_pattern_sel_g_shift                        (16)
#define  HDMIRX_2P0_PHY_REGD80_p0_pkt_count_g_shift                              (8)
#define  HDMIRX_2P0_PHY_REGD80_p0_err_count_g_shift                              (0)
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_enable_one_zero_g_mask                     (0x00040000)
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_prbs_invs_g_mask                           (0x00020000)
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_pattern_sel_g_mask                         (0x00010000)
#define  HDMIRX_2P0_PHY_REGD80_p0_pkt_count_g_mask                               (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD80_p0_err_count_g_mask                               (0x000000FF)
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_enable_one_zero_g(data)                    (0x00040000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_prbs_invs_g(data)                          (0x00020000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD80_reg_p0_pattern_sel_g(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD80_p0_pkt_count_g(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD80_p0_err_count_g(data)                              (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_REGD80_get_reg_p0_enable_one_zero_g(data)                ((0x00040000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD80_get_reg_p0_prbs_invs_g(data)                      ((0x00020000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD80_get_reg_p0_pattern_sel_g(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD80_get_p0_pkt_count_g(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD80_get_p0_err_count_g(data)                          (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_REGD81                                                  0x1803CCD0
#define  HDMIRX_2P0_PHY_REGD81_reg_addr                                          "0xB803CCD0"
#define  HDMIRX_2P0_PHY_REGD81_reg                                               0xB803CCD0
#define  HDMIRX_2P0_PHY_REGD81_inst_addr                                         "0x0045"
#define  set_HDMIRX_2P0_PHY_REGD81_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD81_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD81_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD81_reg))
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_enable_one_zero_b_shift                    (18)
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_prbs_invs_b_shift                          (17)
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_pattern_sel_b_shift                        (16)
#define  HDMIRX_2P0_PHY_REGD81_p0_pkt_count_b_shift                              (8)
#define  HDMIRX_2P0_PHY_REGD81_p0_err_count_b_shift                              (0)
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_enable_one_zero_b_mask                     (0x00040000)
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_prbs_invs_b_mask                           (0x00020000)
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_pattern_sel_b_mask                         (0x00010000)
#define  HDMIRX_2P0_PHY_REGD81_p0_pkt_count_b_mask                               (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD81_p0_err_count_b_mask                               (0x000000FF)
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_enable_one_zero_b(data)                    (0x00040000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_prbs_invs_b(data)                          (0x00020000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD81_reg_p0_pattern_sel_b(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD81_p0_pkt_count_b(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD81_p0_err_count_b(data)                              (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_REGD81_get_reg_p0_enable_one_zero_b(data)                ((0x00040000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD81_get_reg_p0_prbs_invs_b(data)                      ((0x00020000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD81_get_reg_p0_pattern_sel_b(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD81_get_p0_pkt_count_b(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD81_get_p0_err_count_b(data)                          (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_REGD82                                                  0x1803CCD4
#define  HDMIRX_2P0_PHY_REGD82_reg_addr                                          "0xB803CCD4"
#define  HDMIRX_2P0_PHY_REGD82_reg                                               0xB803CCD4
#define  HDMIRX_2P0_PHY_REGD82_inst_addr                                         "0x0046"
#define  set_HDMIRX_2P0_PHY_REGD82_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD82_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD82_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD82_reg))
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_enable_one_zero_r_shift                    (18)
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_prbs_invs_r_shift                          (17)
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_pattern_sel_r_shift                        (16)
#define  HDMIRX_2P0_PHY_REGD82_p1_pkt_count_r_shift                              (8)
#define  HDMIRX_2P0_PHY_REGD82_p1_err_count_r_shift                              (0)
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_enable_one_zero_r_mask                     (0x00040000)
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_prbs_invs_r_mask                           (0x00020000)
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_pattern_sel_r_mask                         (0x00010000)
#define  HDMIRX_2P0_PHY_REGD82_p1_pkt_count_r_mask                               (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD82_p1_err_count_r_mask                               (0x000000FF)
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_enable_one_zero_r(data)                    (0x00040000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_prbs_invs_r(data)                          (0x00020000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD82_reg_p1_pattern_sel_r(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD82_p1_pkt_count_r(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD82_p1_err_count_r(data)                              (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_REGD82_get_reg_p1_enable_one_zero_r(data)                ((0x00040000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD82_get_reg_p1_prbs_invs_r(data)                      ((0x00020000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD82_get_reg_p1_pattern_sel_r(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD82_get_p1_pkt_count_r(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD82_get_p1_err_count_r(data)                          (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_REGD83                                                  0x1803CCD8
#define  HDMIRX_2P0_PHY_REGD83_reg_addr                                          "0xB803CCD8"
#define  HDMIRX_2P0_PHY_REGD83_reg                                               0xB803CCD8
#define  HDMIRX_2P0_PHY_REGD83_inst_addr                                         "0x0047"
#define  set_HDMIRX_2P0_PHY_REGD83_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD83_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD83_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD83_reg))
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_enable_one_zero_g_shift                    (18)
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_prbs_invs_g_shift                          (17)
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_pattern_sel_g_shift                        (16)
#define  HDMIRX_2P0_PHY_REGD83_p1_pkt_count_g_shift                              (8)
#define  HDMIRX_2P0_PHY_REGD83_p1_err_count_g_shift                              (0)
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_enable_one_zero_g_mask                     (0x00040000)
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_prbs_invs_g_mask                           (0x00020000)
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_pattern_sel_g_mask                         (0x00010000)
#define  HDMIRX_2P0_PHY_REGD83_p1_pkt_count_g_mask                               (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD83_p1_err_count_g_mask                               (0x000000FF)
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_enable_one_zero_g(data)                    (0x00040000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_prbs_invs_g(data)                          (0x00020000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD83_reg_p1_pattern_sel_g(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD83_p1_pkt_count_g(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD83_p1_err_count_g(data)                              (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_REGD83_get_reg_p1_enable_one_zero_g(data)                ((0x00040000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD83_get_reg_p1_prbs_invs_g(data)                      ((0x00020000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD83_get_reg_p1_pattern_sel_g(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD83_get_p1_pkt_count_g(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD83_get_p1_err_count_g(data)                          (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_REGD84                                                  0x1803CCDC
#define  HDMIRX_2P0_PHY_REGD84_reg_addr                                          "0xB803CCDC"
#define  HDMIRX_2P0_PHY_REGD84_reg                                               0xB803CCDC
#define  HDMIRX_2P0_PHY_REGD84_inst_addr                                         "0x0048"
#define  set_HDMIRX_2P0_PHY_REGD84_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD84_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD84_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD84_reg))
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_enable_one_zero_b_shift                    (18)
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_prbs_invs_b_shift                          (17)
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_pattern_sel_b_shift                        (16)
#define  HDMIRX_2P0_PHY_REGD84_p1_pkt_count_b_shift                              (8)
#define  HDMIRX_2P0_PHY_REGD84_p1_err_count_b_shift                              (0)
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_enable_one_zero_b_mask                     (0x00040000)
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_prbs_invs_b_mask                           (0x00020000)
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_pattern_sel_b_mask                         (0x00010000)
#define  HDMIRX_2P0_PHY_REGD84_p1_pkt_count_b_mask                               (0x0000FF00)
#define  HDMIRX_2P0_PHY_REGD84_p1_err_count_b_mask                               (0x000000FF)
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_enable_one_zero_b(data)                    (0x00040000&((data)<<18))
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_prbs_invs_b(data)                          (0x00020000&((data)<<17))
#define  HDMIRX_2P0_PHY_REGD84_reg_p1_pattern_sel_b(data)                        (0x00010000&((data)<<16))
#define  HDMIRX_2P0_PHY_REGD84_p1_pkt_count_b(data)                              (0x0000FF00&((data)<<8))
#define  HDMIRX_2P0_PHY_REGD84_p1_err_count_b(data)                              (0x000000FF&(data))
#define  HDMIRX_2P0_PHY_REGD84_get_reg_p1_enable_one_zero_b(data)                ((0x00040000&(data))>>18)
#define  HDMIRX_2P0_PHY_REGD84_get_reg_p1_prbs_invs_b(data)                      ((0x00020000&(data))>>17)
#define  HDMIRX_2P0_PHY_REGD84_get_reg_p1_pattern_sel_b(data)                    ((0x00010000&(data))>>16)
#define  HDMIRX_2P0_PHY_REGD84_get_p1_pkt_count_b(data)                          ((0x0000FF00&(data))>>8)
#define  HDMIRX_2P0_PHY_REGD84_get_p1_err_count_b(data)                          (0x000000FF&(data))

#define  HDMIRX_2P0_PHY_REGD85                                                  0x1803CCE0
#define  HDMIRX_2P0_PHY_REGD85_reg_addr                                          "0xB803CCE0"
#define  HDMIRX_2P0_PHY_REGD85_reg                                               0xB803CCE0
#define  HDMIRX_2P0_PHY_REGD85_inst_addr                                         "0x0049"
#define  set_HDMIRX_2P0_PHY_REGD85_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD85_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD85_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD85_reg))
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_save_bypass_shift                 (15)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_on_manual_en_shift                (14)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_on_manual_shift                   (13)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_save_fifo_rst_dly_sel_shift       (12)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_save_bypass_shift                 (7)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_on_manual_en_shift                (6)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_on_manual_shift                   (5)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_save_fifo_rst_dly_sel_shift       (4)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_save_bypass_mask                  (0x00008000)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_on_manual_en_mask                 (0x00004000)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_on_manual_mask                    (0x00002000)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_save_fifo_rst_dly_sel_mask        (0x00001000)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_save_bypass_mask                  (0x00000080)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_on_manual_en_mask                 (0x00000040)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_on_manual_mask                    (0x00000020)
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_save_fifo_rst_dly_sel_mask        (0x00000010)
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_save_bypass(data)                 (0x00008000&((data)<<15))
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_on_manual_en(data)                (0x00004000&((data)<<14))
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_on_manual(data)                   (0x00002000&((data)<<13))
#define  HDMIRX_2P0_PHY_REGD85_reg_p0_hd14_pow_save_fifo_rst_dly_sel(data)       (0x00001000&((data)<<12))
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_save_bypass(data)                 (0x00000080&((data)<<7))
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_on_manual_en(data)                (0x00000040&((data)<<6))
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_on_manual(data)                   (0x00000020&((data)<<5))
#define  HDMIRX_2P0_PHY_REGD85_reg_p1_hd14_pow_save_fifo_rst_dly_sel(data)       (0x00000010&((data)<<4))
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p0_hd14_pow_save_bypass(data)             ((0x00008000&(data))>>15)
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p0_hd14_pow_on_manual_en(data)            ((0x00004000&(data))>>14)
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p0_hd14_pow_on_manual(data)               ((0x00002000&(data))>>13)
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p0_hd14_pow_save_fifo_rst_dly_sel(data)   ((0x00001000&(data))>>12)
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p1_hd14_pow_save_bypass(data)             ((0x00000080&(data))>>7)
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p1_hd14_pow_on_manual_en(data)            ((0x00000040&(data))>>6)
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p1_hd14_pow_on_manual(data)               ((0x00000020&(data))>>5)
#define  HDMIRX_2P0_PHY_REGD85_get_reg_p1_hd14_pow_save_fifo_rst_dly_sel(data)   ((0x00000010&(data))>>4)

#define  HDMIRX_2P0_PHY_REGD86                                                  0x1803CCE4
#define  HDMIRX_2P0_PHY_REGD86_reg_addr                                          "0xB803CCE4"
#define  HDMIRX_2P0_PHY_REGD86_reg                                               0xB803CCE4
#define  HDMIRX_2P0_PHY_REGD86_inst_addr                                         "0x004A"
#define  set_HDMIRX_2P0_PHY_REGD86_reg(data)                                     (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD86_reg)=data)
#define  get_HDMIRX_2P0_PHY_REGD86_reg                                           (*((volatile unsigned int*)HDMIRX_2P0_PHY_REGD86_reg))
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_r_pn_swap_shift                            (31)
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_g_pn_swap_shift                            (30)
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_b_pn_swap_shift                            (29)
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_r_pn_swap_shift                            (28)
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_g_pn_swap_shift                            (27)
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_b_pn_swap_shift                            (26)
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_r_pn_swap_mask                             (0x80000000)
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_g_pn_swap_mask                             (0x40000000)
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_b_pn_swap_mask                             (0x20000000)
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_r_pn_swap_mask                             (0x10000000)
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_g_pn_swap_mask                             (0x08000000)
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_b_pn_swap_mask                             (0x04000000)
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_r_pn_swap(data)                            (0x80000000&((data)<<31))
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_g_pn_swap(data)                            (0x40000000&((data)<<30))
#define  HDMIRX_2P0_PHY_REGD86_reg_p0_b_pn_swap(data)                            (0x20000000&((data)<<29))
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_r_pn_swap(data)                            (0x10000000&((data)<<28))
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_g_pn_swap(data)                            (0x08000000&((data)<<27))
#define  HDMIRX_2P0_PHY_REGD86_reg_p1_b_pn_swap(data)                            (0x04000000&((data)<<26))
#define  HDMIRX_2P0_PHY_REGD86_get_reg_p0_r_pn_swap(data)                        ((0x80000000&(data))>>31)
#define  HDMIRX_2P0_PHY_REGD86_get_reg_p0_g_pn_swap(data)                        ((0x40000000&(data))>>30)
#define  HDMIRX_2P0_PHY_REGD86_get_reg_p0_b_pn_swap(data)                        ((0x20000000&(data))>>29)
#define  HDMIRX_2P0_PHY_REGD86_get_reg_p1_r_pn_swap(data)                        ((0x10000000&(data))>>28)
#define  HDMIRX_2P0_PHY_REGD86_get_reg_p1_g_pn_swap(data)                        ((0x08000000&(data))>>27)
#define  HDMIRX_2P0_PHY_REGD86_get_reg_p1_b_pn_swap(data)                        ((0x04000000&(data))>>26)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDMIRX_2P0_PHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  reg_ck_latch:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  reg_ck_ckdet:3;
    };
}hdmirx_2p0_phy_md_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_ldo_mossel:3;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_p1_ldo_sel:2;
        RBus_UInt32  reg_p0_ldo_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  reg_p1_ldo_pow:1;
        RBus_UInt32  reg_p0_ldo_pow:1;
    };
}hdmirx_2p0_phy_ldo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  reg_p1_en_cmu:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  reg_p0_en_cmu:1;
        RBus_UInt32  res3:3;
    };
}hdmirx_2p0_phy_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  reg_tst_spad:1;
        RBus_UInt32  reg_stst:4;
    };
}hdmirx_2p0_phy_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_4:8;
        RBus_UInt32  reg_top_in_3:8;
        RBus_UInt32  reg_top_in_2:8;
        RBus_UInt32  reg_top_in_1:8;
    };
}hdmirx_2p0_phy_top_in_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_out_4:8;
        RBus_UInt32  res1:24;
    };
}hdmirx_2p0_phy_top_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  reg_z0_z300_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_z0_z300pow:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_z0_z100_en:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  reg_z0_z0pow_r:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  reg_z0_z0pow_g:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  reg_z0_z0pow_ck:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  reg_z0_z0pow_b:3;
    };
}hdmirx_2p0_phy_z0pow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_z0_adjr_2:5;
        RBus_UInt32  reg_z0_adjr_1:5;
        RBus_UInt32  reg_z0_adjr_0:5;
        RBus_UInt32  res2:4;
    };
}hdmirx_2p0_phy_z0k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_4:8;
        RBus_UInt32  reg_p0_b_3:8;
        RBus_UInt32  reg_p0_b_2:8;
        RBus_UInt32  reg_p0_b_1:8;
    };
}hdmirx_2p0_phy_p0_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_8:8;
        RBus_UInt32  reg_p0_b_7:8;
        RBus_UInt32  reg_p0_b_6:8;
        RBus_UInt32  reg_p0_b_5:8;
    };
}hdmirx_2p0_phy_p0_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_12:8;
        RBus_UInt32  reg_p0_b_11:8;
        RBus_UInt32  reg_p0_b_10:8;
        RBus_UInt32  reg_p0_b_9:8;
    };
}hdmirx_2p0_phy_p0_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p0_b_koff_sel:5;
        RBus_UInt32  reg_p0_b_koff_bound:1;
        RBus_UInt32  reg_p0_b_koffok:1;
        RBus_UInt32  reg_p0_b_13:8;
    };
}hdmirx_2p0_phy_p0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_4:8;
        RBus_UInt32  reg_p0_ck_3:8;
        RBus_UInt32  reg_p0_ck_2:8;
        RBus_UInt32  reg_p0_ck_1:8;
    };
}hdmirx_2p0_phy_p0_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_8:8;
        RBus_UInt32  reg_p0_ck_7:8;
        RBus_UInt32  reg_p0_ck_6:8;
        RBus_UInt32  reg_p0_ck_5:8;
    };
}hdmirx_2p0_phy_p0_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_12:8;
        RBus_UInt32  reg_p0_ck_11:8;
        RBus_UInt32  reg_p0_ck_10:8;
        RBus_UInt32  reg_p0_ck_9:8;
    };
}hdmirx_2p0_phy_p0_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reg_p0_ck_13:8;
    };
}hdmirx_2p0_phy_p0_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_4:8;
        RBus_UInt32  reg_p0_g_3:8;
        RBus_UInt32  reg_p0_g_2:8;
        RBus_UInt32  reg_p0_g_1:8;
    };
}hdmirx_2p0_phy_p0_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_8:8;
        RBus_UInt32  reg_p0_g_7:8;
        RBus_UInt32  reg_p0_g_6:8;
        RBus_UInt32  reg_p0_g_5:8;
    };
}hdmirx_2p0_phy_p0_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_12:8;
        RBus_UInt32  reg_p0_g_11:8;
        RBus_UInt32  reg_p0_g_10:8;
        RBus_UInt32  reg_p0_g_9:8;
    };
}hdmirx_2p0_phy_p0_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p0_g_koff_sel:5;
        RBus_UInt32  reg_p0_g_koff_bound:1;
        RBus_UInt32  reg_p0_g_koffok:1;
        RBus_UInt32  reg_p0_g_13:8;
    };
}hdmirx_2p0_phy_p0_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_4:8;
        RBus_UInt32  reg_p0_r_3:8;
        RBus_UInt32  reg_p0_r_2:8;
        RBus_UInt32  reg_p0_r_1:8;
    };
}hdmirx_2p0_phy_p0_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_8:8;
        RBus_UInt32  reg_p0_r_7:8;
        RBus_UInt32  reg_p0_r_6:8;
        RBus_UInt32  reg_p0_r_5:8;
    };
}hdmirx_2p0_phy_p0_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_12:8;
        RBus_UInt32  reg_p0_r_11:8;
        RBus_UInt32  reg_p0_r_10:8;
        RBus_UInt32  reg_p0_r_9:8;
    };
}hdmirx_2p0_phy_p0_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p0_r_koff_sel:5;
        RBus_UInt32  reg_p0_r_koff_bound:1;
        RBus_UInt32  reg_p0_r_koffok:1;
        RBus_UInt32  reg_p0_r_13:8;
    };
}hdmirx_2p0_phy_p0_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_4:8;
        RBus_UInt32  reg_p1_b_3:8;
        RBus_UInt32  reg_p1_b_2:8;
        RBus_UInt32  reg_p1_b_1:8;
    };
}hdmirx_2p0_phy_p1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_8:8;
        RBus_UInt32  reg_p1_b_7:8;
        RBus_UInt32  reg_p1_b_6:8;
        RBus_UInt32  reg_p1_b_5:8;
    };
}hdmirx_2p0_phy_p1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_12:8;
        RBus_UInt32  reg_p1_b_11:8;
        RBus_UInt32  reg_p1_b_10:8;
        RBus_UInt32  reg_p1_b_9:8;
    };
}hdmirx_2p0_phy_p1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p1_b_koff_sel:5;
        RBus_UInt32  reg_p1_b_koff_bound:1;
        RBus_UInt32  reg_p1_b_koffok:1;
        RBus_UInt32  reg_p1_b_13:8;
    };
}hdmirx_2p0_phy_p1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_4:8;
        RBus_UInt32  reg_p1_ck_3:8;
        RBus_UInt32  reg_p1_ck_2:8;
        RBus_UInt32  reg_p1_ck_1:8;
    };
}hdmirx_2p0_phy_p1_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_8:8;
        RBus_UInt32  reg_p1_ck_7:8;
        RBus_UInt32  reg_p1_ck_6:8;
        RBus_UInt32  reg_p1_ck_5:8;
    };
}hdmirx_2p0_phy_p1_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_12:8;
        RBus_UInt32  reg_p1_ck_11:8;
        RBus_UInt32  reg_p1_ck_10:8;
        RBus_UInt32  reg_p1_ck_9:8;
    };
}hdmirx_2p0_phy_p1_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reg_p1_ck_13:8;
    };
}hdmirx_2p0_phy_p1_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_4:8;
        RBus_UInt32  reg_p1_g_3:8;
        RBus_UInt32  reg_p1_g_2:8;
        RBus_UInt32  reg_p1_g_1:8;
    };
}hdmirx_2p0_phy_p1_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_8:8;
        RBus_UInt32  reg_p1_g_7:8;
        RBus_UInt32  reg_p1_g_6:8;
        RBus_UInt32  reg_p1_g_5:8;
    };
}hdmirx_2p0_phy_p1_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_12:8;
        RBus_UInt32  reg_p1_g_11:8;
        RBus_UInt32  reg_p1_g_10:8;
        RBus_UInt32  reg_p1_g_9:8;
    };
}hdmirx_2p0_phy_p1_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p1_g_koff_sel:5;
        RBus_UInt32  reg_p1_g_koff_bound:1;
        RBus_UInt32  reg_p1_g_koffok:1;
        RBus_UInt32  reg_p1_g_13:8;
    };
}hdmirx_2p0_phy_p1_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_4:8;
        RBus_UInt32  reg_p1_r_3:8;
        RBus_UInt32  reg_p1_r_2:8;
        RBus_UInt32  reg_p1_r_1:8;
    };
}hdmirx_2p0_phy_p1_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_8:8;
        RBus_UInt32  reg_p1_r_7:8;
        RBus_UInt32  reg_p1_r_6:8;
        RBus_UInt32  reg_p1_r_5:8;
    };
}hdmirx_2p0_phy_p1_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_12:8;
        RBus_UInt32  reg_p1_r_11:8;
        RBus_UInt32  reg_p1_r_10:8;
        RBus_UInt32  reg_p1_r_9:8;
    };
}hdmirx_2p0_phy_p1_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  reg_p1_r_koff_sel:5;
        RBus_UInt32  reg_p1_r_koff_bound:1;
        RBus_UInt32  reg_p1_r_koffok:1;
        RBus_UInt32  reg_p1_r_13:8;
    };
}hdmirx_2p0_phy_p1_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  p1_r_demux_rstb:1;
        RBus_UInt32  p1_g_demux_rstb:1;
        RBus_UInt32  p1_b_demux_rstb:1;
        RBus_UInt32  p0_r_demux_rstb:1;
        RBus_UInt32  p0_g_demux_rstb:1;
        RBus_UInt32  p0_b_demux_rstb:1;
    };
}hdmirx_2p0_phy_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_r_dig_rst_n:1;
        RBus_UInt32  p0_g_dig_rst_n:1;
        RBus_UInt32  p0_b_dig_rst_n:1;
        RBus_UInt32  p0_r_cdr_rst_n:1;
        RBus_UInt32  p0_g_cdr_rst_n:1;
        RBus_UInt32  p0_b_cdr_rst_n:1;
        RBus_UInt32  reg_p0_cdr_ckinv_r:1;
        RBus_UInt32  reg_p0_cdr_ckinv_g:1;
        RBus_UInt32  reg_p0_cdr_ckinv_b:1;
        RBus_UInt32  reg_p0_shift_inv_r:1;
        RBus_UInt32  reg_p0_shift_inv_g:1;
        RBus_UInt32  reg_p0_shift_inv_b:1;
        RBus_UInt32  reg_p0_rate_sel:3;
        RBus_UInt32  reg_p0_kd:1;
        RBus_UInt32  reg_p0_kp:8;
        RBus_UInt32  reg_p0_ki:3;
        RBus_UInt32  reg_p0_bypass_sdm_int:1;
        RBus_UInt32  reg_p0_data_order:1;
        RBus_UInt32  reg_p0_infifo_cnt:3;
    };
}hdmirx_2p0_phy_regd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_int_init:14;
        RBus_UInt32  reg_p0_acc2_period:10;
        RBus_UInt32  reg_p0_squ_tri:1;
        RBus_UInt32  reg_p0_acc2_manual:1;
        RBus_UInt32  reg_p0_testout_sel:2;
        RBus_UInt32  reg_p0_ercnt_en:1;
        RBus_UInt32  reg_p0_edge_out:1;
        RBus_UInt32  reg_p0_pi_m_mode_r:1;
        RBus_UInt32  reg_p0_dyn_kp_en:1;
    };
}hdmirx_2p0_phy_regd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p0_st_mode:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:5;
        RBus_UInt32  res4:16;
        RBus_UInt32  reg_p0_pi_m_mode_g:1;
        RBus_UInt32  reg_p0_pi_m_mode_b:1;
    };
}hdmirx_2p0_phy_regd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  p0_st_ro_r:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  p0_st_ro_g:5;
        RBus_UInt32  res4:4;
        RBus_UInt32  res5:1;
        RBus_UInt32  p0_st_ro_b:5;
        RBus_UInt32  res6:4;
    };
}hdmirx_2p0_phy_regd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p0_er_count_r:10;
        RBus_UInt32  p0_er_count_g:10;
        RBus_UInt32  p0_er_count_b:10;
    };
}hdmirx_2p0_phy_regd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_r_dig_rst_n:1;
        RBus_UInt32  p1_g_dig_rst_n:1;
        RBus_UInt32  p1_b_dig_rst_n:1;
        RBus_UInt32  p1_r_cdr_rst_n:1;
        RBus_UInt32  p1_g_cdr_rst_n:1;
        RBus_UInt32  p1_b_cdr_rst_n:1;
        RBus_UInt32  reg_p1_cdr_ckinv_r:1;
        RBus_UInt32  reg_p1_cdr_ckinv_g:1;
        RBus_UInt32  reg_p1_cdr_ckinv_b:1;
        RBus_UInt32  reg_p1_shift_inv_r:1;
        RBus_UInt32  reg_p1_shift_inv_g:1;
        RBus_UInt32  reg_p1_shift_inv_b:1;
        RBus_UInt32  reg_p1_rate_sel:3;
        RBus_UInt32  reg_p1_kd:1;
        RBus_UInt32  reg_p1_kp:8;
        RBus_UInt32  reg_p1_ki:3;
        RBus_UInt32  reg_p1_bypass_sdm_int:1;
        RBus_UInt32  reg_p1_data_order:1;
        RBus_UInt32  reg_p1_infifo_cnt:3;
    };
}hdmirx_2p0_phy_regd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_int_init:14;
        RBus_UInt32  reg_p1_acc2_period:10;
        RBus_UInt32  reg_p1_squ_tri:1;
        RBus_UInt32  reg_p1_acc2_manual:1;
        RBus_UInt32  reg_p1_testout_sel:2;
        RBus_UInt32  reg_p1_ercnt_en:1;
        RBus_UInt32  reg_p1_edge_out:1;
        RBus_UInt32  reg_p1_pi_m_mode_r:1;
        RBus_UInt32  reg_p1_dyn_kp_en:1;
    };
}hdmirx_2p0_phy_regd6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_st_mode:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:5;
        RBus_UInt32  res4:16;
        RBus_UInt32  reg_p1_pi_m_mode_g:1;
        RBus_UInt32  reg_p1_pi_m_mode_b:1;
    };
}hdmirx_2p0_phy_regd7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  p1_st_ro_r:5;
        RBus_UInt32  res2:4;
        RBus_UInt32  res3:1;
        RBus_UInt32  p1_st_ro_g:5;
        RBus_UInt32  res4:4;
        RBus_UInt32  res5:1;
        RBus_UInt32  p1_st_ro_b:5;
        RBus_UInt32  res6:4;
    };
}hdmirx_2p0_phy_regd8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  p1_er_count_r:10;
        RBus_UInt32  p1_er_count_g:10;
        RBus_UInt32  p1_er_count_b:10;
    };
}hdmirx_2p0_phy_regd9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_bypass_clk_rdy:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p0_bypass_data_rdy:1;
        RBus_UInt32  reg_p0_bypass_pi:1;
        RBus_UInt32  reg_p0_data_rdy_time:4;
        RBus_UInt32  reg_p0_en_clkout_manual:1;
        RBus_UInt32  reg_p0_en_eqen_manual:1;
        RBus_UInt32  reg_p0_en_data_manual:1;
        RBus_UInt32  reg_p0_eqen_rdy_time:4;
        RBus_UInt32  reg_p0_order:1;
        RBus_UInt32  reg_p0_pll_wd_base_time:3;
        RBus_UInt32  reg_p0_pll_wd_en:1;
        RBus_UInt32  reg_p0_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p0_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p0_acdr_l0_en:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p0_en_data_manual_l0:1;
        RBus_UInt32  p0_pll_wd_ckrdy_ro:1;
        RBus_UInt32  p0_pll_wd_rst_wc:1;
        RBus_UInt32  p0_wdog_rst_n:1;
    };
}hdmirx_2p0_phy_regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_wd_sdm_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_f_code:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p0_n_code:9;
    };
}hdmirx_2p0_phy_regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_bypass_clk_rdy:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p1_bypass_data_rdy:1;
        RBus_UInt32  reg_p1_bypass_pi:1;
        RBus_UInt32  reg_p1_data_rdy_time:4;
        RBus_UInt32  reg_p1_en_clkout_manual:1;
        RBus_UInt32  reg_p1_en_eqen_manual:1;
        RBus_UInt32  reg_p1_en_data_manual:1;
        RBus_UInt32  reg_p1_eqen_rdy_time:4;
        RBus_UInt32  reg_p1_order:1;
        RBus_UInt32  reg_p1_pll_wd_base_time:3;
        RBus_UInt32  reg_p1_pll_wd_en:1;
        RBus_UInt32  reg_p1_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p1_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p1_acdr_l0_en:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p1_en_data_manual_l0:1;
        RBus_UInt32  p1_pll_wd_ckrdy_ro:1;
        RBus_UInt32  p1_pll_wd_rst_wc:1;
        RBus_UInt32  p1_wdog_rst_n:1;
    };
}hdmirx_2p0_phy_regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_wd_sdm_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p1_f_code:12;
        RBus_UInt32  res2:7;
        RBus_UInt32  reg_p1_n_code:9;
    };
}hdmirx_2p0_phy_regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_md_rstb:1;
        RBus_UInt32  reg_p0_ck_md_threshold:6;
        RBus_UInt32  reg_p0_ck_md_debounce:7;
        RBus_UInt32  reg_p0_ck_md_sel:2;
        RBus_UInt32  reg_p0_ck_md_auto:1;
        RBus_UInt32  reg_p0_ck_md_adj:4;
        RBus_UInt32  reg_p0_ck_error_limit:5;
        RBus_UInt32  reg_p0_ck_md_reserved:4;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p0_phy_regd56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_ck_md_count:13;
        RBus_UInt32  p0_ck_rate:4;
        RBus_UInt32  p0_unstable_count:5;
        RBus_UInt32  p0_ck_md_ok:1;
        RBus_UInt32  p0_clock_unstable_flag:1;
        RBus_UInt32  res1:8;
    };
}hdmirx_2p0_phy_regd57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_md_rstb:1;
        RBus_UInt32  reg_p1_ck_md_threshold:6;
        RBus_UInt32  reg_p1_ck_md_debounce:7;
        RBus_UInt32  reg_p1_ck_md_sel:2;
        RBus_UInt32  reg_p1_ck_md_auto:1;
        RBus_UInt32  reg_p1_ck_md_adj:4;
        RBus_UInt32  reg_p1_ck_error_limit:5;
        RBus_UInt32  reg_p1_ck_md_reserved:4;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p0_phy_regd58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_ck_md_count:13;
        RBus_UInt32  p1_ck_rate:4;
        RBus_UInt32  p1_unstable_count:5;
        RBus_UInt32  p1_ck_md_ok:1;
        RBus_UInt32  p1_clock_unstable_flag:1;
        RBus_UInt32  res1:8;
    };
}hdmirx_2p0_phy_regd59_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dig_reserved_0:8;
        RBus_UInt32  reg_dig_reserved_1:8;
        RBus_UInt32  res1:16;
    };
}hdmirx_2p0_phy_regd64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_dig_debug_sel:5;
        RBus_UInt32  res1:27;
    };
}hdmirx_2p0_phy_regd65_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_r:32;
    };
}hdmirx_2p0_phy_regd66_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_r:32;
    };
}hdmirx_2p0_phy_regd67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_g:32;
    };
}hdmirx_2p0_phy_regd71_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_g:32;
    };
}hdmirx_2p0_phy_regd72_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_b:32;
    };
}hdmirx_2p0_phy_regd75_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_b:32;
    };
}hdmirx_2p0_phy_regd76_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p0_enable_one_zero_r:1;
        RBus_UInt32  reg_p0_prbs_invs_r:1;
        RBus_UInt32  reg_p0_pattern_sel_r:1;
        RBus_UInt32  p0_pkt_count_r:8;
        RBus_UInt32  p0_err_count_r:8;
    };
}hdmirx_2p0_phy_regd79_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p0_enable_one_zero_g:1;
        RBus_UInt32  reg_p0_prbs_invs_g:1;
        RBus_UInt32  reg_p0_pattern_sel_g:1;
        RBus_UInt32  p0_pkt_count_g:8;
        RBus_UInt32  p0_err_count_g:8;
    };
}hdmirx_2p0_phy_regd80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p0_enable_one_zero_b:1;
        RBus_UInt32  reg_p0_prbs_invs_b:1;
        RBus_UInt32  reg_p0_pattern_sel_b:1;
        RBus_UInt32  p0_pkt_count_b:8;
        RBus_UInt32  p0_err_count_b:8;
    };
}hdmirx_2p0_phy_regd81_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p1_enable_one_zero_r:1;
        RBus_UInt32  reg_p1_prbs_invs_r:1;
        RBus_UInt32  reg_p1_pattern_sel_r:1;
        RBus_UInt32  p1_pkt_count_r:8;
        RBus_UInt32  p1_err_count_r:8;
    };
}hdmirx_2p0_phy_regd82_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p1_enable_one_zero_g:1;
        RBus_UInt32  reg_p1_prbs_invs_g:1;
        RBus_UInt32  reg_p1_pattern_sel_g:1;
        RBus_UInt32  p1_pkt_count_g:8;
        RBus_UInt32  p1_err_count_g:8;
    };
}hdmirx_2p0_phy_regd83_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  reg_p1_enable_one_zero_b:1;
        RBus_UInt32  reg_p1_prbs_invs_b:1;
        RBus_UInt32  reg_p1_pattern_sel_b:1;
        RBus_UInt32  p1_pkt_count_b:8;
        RBus_UInt32  p1_err_count_b:8;
    };
}hdmirx_2p0_phy_regd84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_p0_hd14_pow_save_bypass:1;
        RBus_UInt32  reg_p0_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p0_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p0_hd14_pow_save_fifo_rst_dly_sel:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_p1_hd14_pow_save_bypass:1;
        RBus_UInt32  reg_p1_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p1_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p1_hd14_pow_save_fifo_rst_dly_sel:1;
        RBus_UInt32  res3:4;
    };
}hdmirx_2p0_phy_regd85_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_pn_swap:1;
        RBus_UInt32  reg_p0_g_pn_swap:1;
        RBus_UInt32  reg_p0_b_pn_swap:1;
        RBus_UInt32  reg_p1_r_pn_swap:1;
        RBus_UInt32  reg_p1_g_pn_swap:1;
        RBus_UInt32  reg_p1_b_pn_swap:1;
        RBus_UInt32  res1:26;
    };
}hdmirx_2p0_phy_regd86_RBUS;

#else //apply LITTLE_ENDIAN

//======HDMIRX_2P0_PHY register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_ck_ckdet:3;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_ck_latch:1;
        RBus_UInt32  res2:26;
    };
}hdmirx_2p0_phy_md_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ldo_pow:1;
        RBus_UInt32  reg_p1_ldo_pow:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_ldo_sel:2;
        RBus_UInt32  reg_p1_ldo_sel:2;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_ldo_mossel:3;
        RBus_UInt32  res3:17;
    };
}hdmirx_2p0_phy_ldo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  reg_p0_en_cmu:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  reg_p1_en_cmu:1;
        RBus_UInt32  res3:21;
    };
}hdmirx_2p0_phy_enable_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_stst:4;
        RBus_UInt32  reg_tst_spad:1;
        RBus_UInt32  res1:27;
    };
}hdmirx_2p0_phy_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_top_in_1:8;
        RBus_UInt32  reg_top_in_2:8;
        RBus_UInt32  reg_top_in_3:8;
        RBus_UInt32  reg_top_in_4:8;
    };
}hdmirx_2p0_phy_top_in_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  reg_top_out_4:8;
    };
}hdmirx_2p0_phy_top_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_z0_z0pow_b:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  reg_z0_z0pow_ck:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  reg_z0_z0pow_g:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  reg_z0_z0pow_r:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  reg_z0_z100_en:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  reg_z0_z300pow:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  reg_z0_z300_sel:3;
        RBus_UInt32  res7:5;
    };
}hdmirx_2p0_phy_z0pow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_z0_adjr_0:5;
        RBus_UInt32  reg_z0_adjr_1:5;
        RBus_UInt32  reg_z0_adjr_2:5;
        RBus_UInt32  res2:13;
    };
}hdmirx_2p0_phy_z0k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_1:8;
        RBus_UInt32  reg_p0_b_2:8;
        RBus_UInt32  reg_p0_b_3:8;
        RBus_UInt32  reg_p0_b_4:8;
    };
}hdmirx_2p0_phy_p0_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_5:8;
        RBus_UInt32  reg_p0_b_6:8;
        RBus_UInt32  reg_p0_b_7:8;
        RBus_UInt32  reg_p0_b_8:8;
    };
}hdmirx_2p0_phy_p0_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_9:8;
        RBus_UInt32  reg_p0_b_10:8;
        RBus_UInt32  reg_p0_b_11:8;
        RBus_UInt32  reg_p0_b_12:8;
    };
}hdmirx_2p0_phy_p0_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_b_13:8;
        RBus_UInt32  reg_p0_b_koffok:1;
        RBus_UInt32  reg_p0_b_koff_bound:1;
        RBus_UInt32  reg_p0_b_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p0_phy_p0_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_1:8;
        RBus_UInt32  reg_p0_ck_2:8;
        RBus_UInt32  reg_p0_ck_3:8;
        RBus_UInt32  reg_p0_ck_4:8;
    };
}hdmirx_2p0_phy_p0_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_5:8;
        RBus_UInt32  reg_p0_ck_6:8;
        RBus_UInt32  reg_p0_ck_7:8;
        RBus_UInt32  reg_p0_ck_8:8;
    };
}hdmirx_2p0_phy_p0_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_9:8;
        RBus_UInt32  reg_p0_ck_10:8;
        RBus_UInt32  reg_p0_ck_11:8;
        RBus_UInt32  reg_p0_ck_12:8;
    };
}hdmirx_2p0_phy_p0_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_ck_13:8;
        RBus_UInt32  res1:24;
    };
}hdmirx_2p0_phy_p0_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_1:8;
        RBus_UInt32  reg_p0_g_2:8;
        RBus_UInt32  reg_p0_g_3:8;
        RBus_UInt32  reg_p0_g_4:8;
    };
}hdmirx_2p0_phy_p0_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_5:8;
        RBus_UInt32  reg_p0_g_6:8;
        RBus_UInt32  reg_p0_g_7:8;
        RBus_UInt32  reg_p0_g_8:8;
    };
}hdmirx_2p0_phy_p0_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_9:8;
        RBus_UInt32  reg_p0_g_10:8;
        RBus_UInt32  reg_p0_g_11:8;
        RBus_UInt32  reg_p0_g_12:8;
    };
}hdmirx_2p0_phy_p0_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_g_13:8;
        RBus_UInt32  reg_p0_g_koffok:1;
        RBus_UInt32  reg_p0_g_koff_bound:1;
        RBus_UInt32  reg_p0_g_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p0_phy_p0_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_1:8;
        RBus_UInt32  reg_p0_r_2:8;
        RBus_UInt32  reg_p0_r_3:8;
        RBus_UInt32  reg_p0_r_4:8;
    };
}hdmirx_2p0_phy_p0_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_5:8;
        RBus_UInt32  reg_p0_r_6:8;
        RBus_UInt32  reg_p0_r_7:8;
        RBus_UInt32  reg_p0_r_8:8;
    };
}hdmirx_2p0_phy_p0_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_9:8;
        RBus_UInt32  reg_p0_r_10:8;
        RBus_UInt32  reg_p0_r_11:8;
        RBus_UInt32  reg_p0_r_12:8;
    };
}hdmirx_2p0_phy_p0_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_r_13:8;
        RBus_UInt32  reg_p0_r_koffok:1;
        RBus_UInt32  reg_p0_r_koff_bound:1;
        RBus_UInt32  reg_p0_r_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p0_phy_p0_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_1:8;
        RBus_UInt32  reg_p1_b_2:8;
        RBus_UInt32  reg_p1_b_3:8;
        RBus_UInt32  reg_p1_b_4:8;
    };
}hdmirx_2p0_phy_p1_b1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_5:8;
        RBus_UInt32  reg_p1_b_6:8;
        RBus_UInt32  reg_p1_b_7:8;
        RBus_UInt32  reg_p1_b_8:8;
    };
}hdmirx_2p0_phy_p1_b2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_9:8;
        RBus_UInt32  reg_p1_b_10:8;
        RBus_UInt32  reg_p1_b_11:8;
        RBus_UInt32  reg_p1_b_12:8;
    };
}hdmirx_2p0_phy_p1_b3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_b_13:8;
        RBus_UInt32  reg_p1_b_koffok:1;
        RBus_UInt32  reg_p1_b_koff_bound:1;
        RBus_UInt32  reg_p1_b_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p0_phy_p1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_1:8;
        RBus_UInt32  reg_p1_ck_2:8;
        RBus_UInt32  reg_p1_ck_3:8;
        RBus_UInt32  reg_p1_ck_4:8;
    };
}hdmirx_2p0_phy_p1_ck1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_5:8;
        RBus_UInt32  reg_p1_ck_6:8;
        RBus_UInt32  reg_p1_ck_7:8;
        RBus_UInt32  reg_p1_ck_8:8;
    };
}hdmirx_2p0_phy_p1_ck2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_9:8;
        RBus_UInt32  reg_p1_ck_10:8;
        RBus_UInt32  reg_p1_ck_11:8;
        RBus_UInt32  reg_p1_ck_12:8;
    };
}hdmirx_2p0_phy_p1_ck3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_ck_13:8;
        RBus_UInt32  res1:24;
    };
}hdmirx_2p0_phy_p1_ck4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_1:8;
        RBus_UInt32  reg_p1_g_2:8;
        RBus_UInt32  reg_p1_g_3:8;
        RBus_UInt32  reg_p1_g_4:8;
    };
}hdmirx_2p0_phy_p1_g1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_5:8;
        RBus_UInt32  reg_p1_g_6:8;
        RBus_UInt32  reg_p1_g_7:8;
        RBus_UInt32  reg_p1_g_8:8;
    };
}hdmirx_2p0_phy_p1_g2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_9:8;
        RBus_UInt32  reg_p1_g_10:8;
        RBus_UInt32  reg_p1_g_11:8;
        RBus_UInt32  reg_p1_g_12:8;
    };
}hdmirx_2p0_phy_p1_g3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_g_13:8;
        RBus_UInt32  reg_p1_g_koffok:1;
        RBus_UInt32  reg_p1_g_koff_bound:1;
        RBus_UInt32  reg_p1_g_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p0_phy_p1_g4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_1:8;
        RBus_UInt32  reg_p1_r_2:8;
        RBus_UInt32  reg_p1_r_3:8;
        RBus_UInt32  reg_p1_r_4:8;
    };
}hdmirx_2p0_phy_p1_r1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_5:8;
        RBus_UInt32  reg_p1_r_6:8;
        RBus_UInt32  reg_p1_r_7:8;
        RBus_UInt32  reg_p1_r_8:8;
    };
}hdmirx_2p0_phy_p1_r2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_9:8;
        RBus_UInt32  reg_p1_r_10:8;
        RBus_UInt32  reg_p1_r_11:8;
        RBus_UInt32  reg_p1_r_12:8;
    };
}hdmirx_2p0_phy_p1_r3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_r_13:8;
        RBus_UInt32  reg_p1_r_koffok:1;
        RBus_UInt32  reg_p1_r_koff_bound:1;
        RBus_UInt32  reg_p1_r_koff_sel:5;
        RBus_UInt32  res1:17;
    };
}hdmirx_2p0_phy_p1_r4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_b_demux_rstb:1;
        RBus_UInt32  p0_g_demux_rstb:1;
        RBus_UInt32  p0_r_demux_rstb:1;
        RBus_UInt32  p1_b_demux_rstb:1;
        RBus_UInt32  p1_g_demux_rstb:1;
        RBus_UInt32  p1_r_demux_rstb:1;
        RBus_UInt32  res1:26;
    };
}hdmirx_2p0_phy_rst_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_infifo_cnt:3;
        RBus_UInt32  reg_p0_data_order:1;
        RBus_UInt32  reg_p0_bypass_sdm_int:1;
        RBus_UInt32  reg_p0_ki:3;
        RBus_UInt32  reg_p0_kp:8;
        RBus_UInt32  reg_p0_kd:1;
        RBus_UInt32  reg_p0_rate_sel:3;
        RBus_UInt32  reg_p0_shift_inv_b:1;
        RBus_UInt32  reg_p0_shift_inv_g:1;
        RBus_UInt32  reg_p0_shift_inv_r:1;
        RBus_UInt32  reg_p0_cdr_ckinv_b:1;
        RBus_UInt32  reg_p0_cdr_ckinv_g:1;
        RBus_UInt32  reg_p0_cdr_ckinv_r:1;
        RBus_UInt32  p0_b_cdr_rst_n:1;
        RBus_UInt32  p0_g_cdr_rst_n:1;
        RBus_UInt32  p0_r_cdr_rst_n:1;
        RBus_UInt32  p0_b_dig_rst_n:1;
        RBus_UInt32  p0_g_dig_rst_n:1;
        RBus_UInt32  p0_r_dig_rst_n:1;
    };
}hdmirx_2p0_phy_regd0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_dyn_kp_en:1;
        RBus_UInt32  reg_p0_pi_m_mode_r:1;
        RBus_UInt32  reg_p0_edge_out:1;
        RBus_UInt32  reg_p0_ercnt_en:1;
        RBus_UInt32  reg_p0_testout_sel:2;
        RBus_UInt32  reg_p0_acc2_manual:1;
        RBus_UInt32  reg_p0_squ_tri:1;
        RBus_UInt32  reg_p0_acc2_period:10;
        RBus_UInt32  reg_p0_int_init:14;
    };
}hdmirx_2p0_phy_regd1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_pi_m_mode_b:1;
        RBus_UInt32  reg_p0_pi_m_mode_g:1;
        RBus_UInt32  res1:16;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:4;
        RBus_UInt32  reg_p0_st_mode:1;
        RBus_UInt32  res4:4;
    };
}hdmirx_2p0_phy_regd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  p0_st_ro_b:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  p0_st_ro_g:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:4;
        RBus_UInt32  p0_st_ro_r:5;
        RBus_UInt32  res6:3;
    };
}hdmirx_2p0_phy_regd3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_er_count_b:10;
        RBus_UInt32  p0_er_count_g:10;
        RBus_UInt32  p0_er_count_r:10;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p0_phy_regd4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_infifo_cnt:3;
        RBus_UInt32  reg_p1_data_order:1;
        RBus_UInt32  reg_p1_bypass_sdm_int:1;
        RBus_UInt32  reg_p1_ki:3;
        RBus_UInt32  reg_p1_kp:8;
        RBus_UInt32  reg_p1_kd:1;
        RBus_UInt32  reg_p1_rate_sel:3;
        RBus_UInt32  reg_p1_shift_inv_b:1;
        RBus_UInt32  reg_p1_shift_inv_g:1;
        RBus_UInt32  reg_p1_shift_inv_r:1;
        RBus_UInt32  reg_p1_cdr_ckinv_b:1;
        RBus_UInt32  reg_p1_cdr_ckinv_g:1;
        RBus_UInt32  reg_p1_cdr_ckinv_r:1;
        RBus_UInt32  p1_b_cdr_rst_n:1;
        RBus_UInt32  p1_g_cdr_rst_n:1;
        RBus_UInt32  p1_r_cdr_rst_n:1;
        RBus_UInt32  p1_b_dig_rst_n:1;
        RBus_UInt32  p1_g_dig_rst_n:1;
        RBus_UInt32  p1_r_dig_rst_n:1;
    };
}hdmirx_2p0_phy_regd5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_dyn_kp_en:1;
        RBus_UInt32  reg_p1_pi_m_mode_r:1;
        RBus_UInt32  reg_p1_edge_out:1;
        RBus_UInt32  reg_p1_ercnt_en:1;
        RBus_UInt32  reg_p1_testout_sel:2;
        RBus_UInt32  reg_p1_acc2_manual:1;
        RBus_UInt32  reg_p1_squ_tri:1;
        RBus_UInt32  reg_p1_acc2_period:10;
        RBus_UInt32  reg_p1_int_init:14;
    };
}hdmirx_2p0_phy_regd6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_pi_m_mode_b:1;
        RBus_UInt32  reg_p1_pi_m_mode_g:1;
        RBus_UInt32  res1:16;
        RBus_UInt32  res2:5;
        RBus_UInt32  res3:4;
        RBus_UInt32  reg_p1_st_mode:1;
        RBus_UInt32  res4:4;
    };
}hdmirx_2p0_phy_regd7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  p1_st_ro_b:5;
        RBus_UInt32  res2:1;
        RBus_UInt32  res3:4;
        RBus_UInt32  p1_st_ro_g:5;
        RBus_UInt32  res4:1;
        RBus_UInt32  res5:4;
        RBus_UInt32  p1_st_ro_r:5;
        RBus_UInt32  res6:3;
    };
}hdmirx_2p0_phy_regd8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_er_count_b:10;
        RBus_UInt32  p1_er_count_g:10;
        RBus_UInt32  p1_er_count_r:10;
        RBus_UInt32  res1:2;
    };
}hdmirx_2p0_phy_regd9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_wdog_rst_n:1;
        RBus_UInt32  p0_pll_wd_rst_wc:1;
        RBus_UInt32  p0_pll_wd_ckrdy_ro:1;
        RBus_UInt32  reg_p0_en_data_manual_l0:1;
        RBus_UInt32  reg_p0_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p0_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p0_acdr_l0_en:1;
        RBus_UInt32  reg_p0_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p0_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p0_pll_wd_en:1;
        RBus_UInt32  reg_p0_pll_wd_base_time:3;
        RBus_UInt32  reg_p0_order:1;
        RBus_UInt32  reg_p0_eqen_rdy_time:4;
        RBus_UInt32  reg_p0_en_data_manual:1;
        RBus_UInt32  reg_p0_en_eqen_manual:1;
        RBus_UInt32  reg_p0_en_clkout_manual:1;
        RBus_UInt32  reg_p0_data_rdy_time:4;
        RBus_UInt32  reg_p0_bypass_pi:1;
        RBus_UInt32  reg_p0_bypass_data_rdy:1;
        RBus_UInt32  reg_p0_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p0_bypass_clk_rdy:1;
    };
}hdmirx_2p0_phy_regd20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_n_code:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_p0_f_code:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_p0_wd_sdm_en:1;
    };
}hdmirx_2p0_phy_regd21_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_wdog_rst_n:1;
        RBus_UInt32  p1_pll_wd_rst_wc:1;
        RBus_UInt32  p1_pll_wd_ckrdy_ro:1;
        RBus_UInt32  reg_p1_en_data_manual_l0:1;
        RBus_UInt32  reg_p1_en_eqen_manual_l0:1;
        RBus_UInt32  reg_p1_bypass_data_rdy_l0:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy_l0:1;
        RBus_UInt32  reg_p1_acdr_l0_en:1;
        RBus_UInt32  reg_p1_pll_wd_time_rdy:2;
        RBus_UInt32  reg_p1_pll_wd_rst_wid:2;
        RBus_UInt32  reg_p1_pll_wd_en:1;
        RBus_UInt32  reg_p1_pll_wd_base_time:3;
        RBus_UInt32  reg_p1_order:1;
        RBus_UInt32  reg_p1_eqen_rdy_time:4;
        RBus_UInt32  reg_p1_en_data_manual:1;
        RBus_UInt32  reg_p1_en_eqen_manual:1;
        RBus_UInt32  reg_p1_en_clkout_manual:1;
        RBus_UInt32  reg_p1_data_rdy_time:4;
        RBus_UInt32  reg_p1_bypass_pi:1;
        RBus_UInt32  reg_p1_bypass_data_rdy:1;
        RBus_UInt32  reg_p1_bypass_eqen_rdy:1;
        RBus_UInt32  reg_p1_bypass_clk_rdy:1;
    };
}hdmirx_2p0_phy_regd22_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_n_code:9;
        RBus_UInt32  res1:7;
        RBus_UInt32  reg_p1_f_code:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  reg_p1_wd_sdm_en:1;
    };
}hdmirx_2p0_phy_regd23_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p0_ck_md_reserved:4;
        RBus_UInt32  reg_p0_ck_error_limit:5;
        RBus_UInt32  reg_p0_ck_md_adj:4;
        RBus_UInt32  reg_p0_ck_md_auto:1;
        RBus_UInt32  reg_p0_ck_md_sel:2;
        RBus_UInt32  reg_p0_ck_md_debounce:7;
        RBus_UInt32  reg_p0_ck_md_threshold:6;
        RBus_UInt32  p0_ck_md_rstb:1;
    };
}hdmirx_2p0_phy_regd56_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  p0_clock_unstable_flag:1;
        RBus_UInt32  p0_ck_md_ok:1;
        RBus_UInt32  p0_unstable_count:5;
        RBus_UInt32  p0_ck_rate:4;
        RBus_UInt32  p0_ck_md_count:13;
    };
}hdmirx_2p0_phy_regd57_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  reg_p1_ck_md_reserved:4;
        RBus_UInt32  reg_p1_ck_error_limit:5;
        RBus_UInt32  reg_p1_ck_md_adj:4;
        RBus_UInt32  reg_p1_ck_md_auto:1;
        RBus_UInt32  reg_p1_ck_md_sel:2;
        RBus_UInt32  reg_p1_ck_md_debounce:7;
        RBus_UInt32  reg_p1_ck_md_threshold:6;
        RBus_UInt32  p1_ck_md_rstb:1;
    };
}hdmirx_2p0_phy_regd58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  p1_clock_unstable_flag:1;
        RBus_UInt32  p1_ck_md_ok:1;
        RBus_UInt32  p1_unstable_count:5;
        RBus_UInt32  p1_ck_rate:4;
        RBus_UInt32  p1_ck_md_count:13;
    };
}hdmirx_2p0_phy_regd59_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  reg_dig_reserved_1:8;
        RBus_UInt32  reg_dig_reserved_0:8;
    };
}hdmirx_2p0_phy_regd64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  reg_dig_debug_sel:5;
    };
}hdmirx_2p0_phy_regd65_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_r:32;
    };
}hdmirx_2p0_phy_regd66_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_r:32;
    };
}hdmirx_2p0_phy_regd67_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_g:32;
    };
}hdmirx_2p0_phy_regd71_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_g:32;
    };
}hdmirx_2p0_phy_regd72_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p0_st_m_value_b:32;
    };
}hdmirx_2p0_phy_regd75_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_p1_st_m_value_b:32;
    };
}hdmirx_2p0_phy_regd76_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_r:8;
        RBus_UInt32  p0_pkt_count_r:8;
        RBus_UInt32  reg_p0_pattern_sel_r:1;
        RBus_UInt32  reg_p0_prbs_invs_r:1;
        RBus_UInt32  reg_p0_enable_one_zero_r:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p0_phy_regd79_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_g:8;
        RBus_UInt32  p0_pkt_count_g:8;
        RBus_UInt32  reg_p0_pattern_sel_g:1;
        RBus_UInt32  reg_p0_prbs_invs_g:1;
        RBus_UInt32  reg_p0_enable_one_zero_g:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p0_phy_regd80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_err_count_b:8;
        RBus_UInt32  p0_pkt_count_b:8;
        RBus_UInt32  reg_p0_pattern_sel_b:1;
        RBus_UInt32  reg_p0_prbs_invs_b:1;
        RBus_UInt32  reg_p0_enable_one_zero_b:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p0_phy_regd81_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_r:8;
        RBus_UInt32  p1_pkt_count_r:8;
        RBus_UInt32  reg_p1_pattern_sel_r:1;
        RBus_UInt32  reg_p1_prbs_invs_r:1;
        RBus_UInt32  reg_p1_enable_one_zero_r:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p0_phy_regd82_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_g:8;
        RBus_UInt32  p1_pkt_count_g:8;
        RBus_UInt32  reg_p1_pattern_sel_g:1;
        RBus_UInt32  reg_p1_prbs_invs_g:1;
        RBus_UInt32  reg_p1_enable_one_zero_g:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p0_phy_regd83_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_err_count_b:8;
        RBus_UInt32  p1_pkt_count_b:8;
        RBus_UInt32  reg_p1_pattern_sel_b:1;
        RBus_UInt32  reg_p1_prbs_invs_b:1;
        RBus_UInt32  reg_p1_enable_one_zero_b:1;
        RBus_UInt32  res1:13;
    };
}hdmirx_2p0_phy_regd84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  reg_p1_hd14_pow_save_fifo_rst_dly_sel:1;
        RBus_UInt32  reg_p1_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p1_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p1_hd14_pow_save_bypass:1;
        RBus_UInt32  res2:4;
        RBus_UInt32  reg_p0_hd14_pow_save_fifo_rst_dly_sel:1;
        RBus_UInt32  reg_p0_hd14_pow_on_manual:1;
        RBus_UInt32  reg_p0_hd14_pow_on_manual_en:1;
        RBus_UInt32  reg_p0_hd14_pow_save_bypass:1;
        RBus_UInt32  res3:16;
    };
}hdmirx_2p0_phy_regd85_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  reg_p1_b_pn_swap:1;
        RBus_UInt32  reg_p1_g_pn_swap:1;
        RBus_UInt32  reg_p1_r_pn_swap:1;
        RBus_UInt32  reg_p0_b_pn_swap:1;
        RBus_UInt32  reg_p0_g_pn_swap:1;
        RBus_UInt32  reg_p0_r_pn_swap:1;
    };
}hdmirx_2p0_phy_regd86_RBUS;




#endif 


#endif 
