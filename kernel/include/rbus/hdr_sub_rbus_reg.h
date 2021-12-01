/**
* @file Merlin5-DesignSpec-HDR_Sub_rbus
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDR_SUB_RBUS_REG_H_
#define _RBUS_HDR_SUB_RBUS_REG_H_

#include "rbus_types.h"



//  HDR_SUB_RBUS Register Address
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0                                            0x1806BA00
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_reg_addr                                    "0xB806BA00"
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_reg                                         0xB806BA00
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_inst_addr                                   "0x0000"
#define  set_HDR_SUB_RBUS_HDR2_CRC_CTRL0_reg(data)                               (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_CRC_CTRL0_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_CRC_CTRL0_reg                                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_CRC_CTRL0_reg))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_l_crc_err_cnt_shift                    (16)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_res_sel_shift                      (12)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_done_shift                         (5)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_crc_done_tog_shift                          (4)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_l_auto_cmp_en_shift                    (2)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_conti_shift                        (1)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_start_shift                        (0)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_l_crc_err_cnt_mask                     (0xFFFF0000)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_res_sel_mask                       (0x0000F000)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_done_mask                          (0x00000020)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_crc_done_tog_mask                           (0x00000010)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_l_auto_cmp_en_mask                     (0x00000004)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_conti_mask                         (0x00000002)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_start_mask                         (0x00000001)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_l_crc_err_cnt(data)                    (0xFFFF0000&((data)<<16))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_res_sel(data)                      (0x0000F000&((data)<<12))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_done(data)                         (0x00000020&((data)<<5))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_crc_done_tog(data)                          (0x00000010&((data)<<4))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_l_auto_cmp_en(data)                    (0x00000004&((data)<<2))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_conti(data)                        (0x00000002&((data)<<1))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_hdr2_crc_start(data)                        (0x00000001&(data))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_get_hdr2_l_crc_err_cnt(data)                ((0xFFFF0000&(data))>>16)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_get_hdr2_crc_res_sel(data)                  ((0x0000F000&(data))>>12)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_get_hdr2_crc_done(data)                     ((0x00000020&(data))>>5)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_get_crc_done_tog(data)                      ((0x00000010&(data))>>4)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_get_hdr2_l_auto_cmp_en(data)                ((0x00000004&(data))>>2)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_get_hdr2_crc_conti(data)                    ((0x00000002&(data))>>1)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL0_get_hdr2_crc_start(data)                    (0x00000001&(data))

#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1                                            0x1806BA04
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1_reg_addr                                    "0xB806BA04"
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1_reg                                         0xB806BA04
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1_inst_addr                                   "0x0001"
#define  set_HDR_SUB_RBUS_HDR2_CRC_CTRL1_reg(data)                               (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_CRC_CTRL1_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_CRC_CTRL1_reg                                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_CRC_CTRL1_reg))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1_hdr2_l_des_crc_shift                        (0)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1_hdr2_l_des_crc_mask                         (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1_hdr2_l_des_crc(data)                        (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL1_get_hdr2_l_des_crc(data)                    (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2                                            0x1806BA08
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2_reg_addr                                    "0xB806BA08"
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2_reg                                         0xB806BA08
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2_inst_addr                                   "0x0002"
#define  set_HDR_SUB_RBUS_HDR2_CRC_CTRL2_reg(data)                               (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_CRC_CTRL2_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_CRC_CTRL2_reg                                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_CRC_CTRL2_reg))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2_hdr2_crc_l_result_shift                     (0)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2_hdr2_crc_l_result_mask                      (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2_hdr2_crc_l_result(data)                     (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_CRC_CTRL2_get_hdr2_crc_l_result(data)                 (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0                                    0x1806BA0C
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_reg_addr                            "0xB806BA0C"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_reg                                 0xB806BA0C
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_inst_addr                           "0x0003"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_reg(data)                       (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_reg                             (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_access_cross_bar_en_shift      (4)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_wr_en_shift         (1)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_rd_en_shift         (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_access_cross_bar_en_mask       (0x00000010)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_wr_en_mask          (0x00000002)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_rd_en_mask          (0x00000001)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_access_cross_bar_en(data)      (0x00000010&((data)<<4))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_wr_en(data)         (0x00000002&((data)<<1))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_rd_en(data)         (0x00000001&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_get_hdr2_access_cross_bar_en(data)  ((0x00000010&(data))>>4)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_get_hdr2_accessdata_wr_en(data)     ((0x00000002&(data))>>1)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL0_get_hdr2_accessdata_rd_en(data)     (0x00000001&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1                                    0x1806BA10
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_reg_addr                            "0xB806BA10"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_reg                                 0xB806BA10
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_inst_addr                           "0x0004"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_reg(data)                       (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_reg                             (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_starty_shift        (16)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_startx_shift        (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_starty_mask         (0x1FFF0000)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_startx_mask         (0x00001FFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_starty(data)        (0x1FFF0000&((data)<<16))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_startx(data)        (0x00001FFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_get_hdr2_accessdata_starty(data)    ((0x1FFF0000&(data))>>16)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL1_get_hdr2_accessdata_startx(data)    (0x00001FFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2                                    0x1806BA14
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_reg_addr                            "0xB806BA14"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_reg                                 0xB806BA14
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_inst_addr                           "0x0005"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_reg(data)                       (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_reg                             (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_hdr2_access_wrdata_r_shift          (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_hdr2_access_wrdata_r_mask           (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_hdr2_access_wrdata_r(data)          (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL2_get_hdr2_access_wrdata_r(data)      (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3                                    0x1806BA18
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_reg_addr                            "0xB806BA18"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_reg                                 0xB806BA18
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_inst_addr                           "0x0006"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_reg(data)                       (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_reg                             (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_hdr2_access_wrdata_g_shift          (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_hdr2_access_wrdata_g_mask           (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_hdr2_access_wrdata_g(data)          (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL3_get_hdr2_access_wrdata_g(data)      (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4                                    0x1806BA1C
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_reg_addr                            "0xB806BA1C"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_reg                                 0xB806BA1C
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_inst_addr                           "0x0007"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_reg(data)                       (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_reg                             (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_hdr2_access_wrdata_b_shift          (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_hdr2_access_wrdata_b_mask           (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_hdr2_access_wrdata_b(data)          (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_CTRL4_get_hdr2_access_wrdata_b(data)      (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0                                  0x1806BA20
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_reg_addr                          "0xB806BA20"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_reg                               0xB806BA20
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_inst_addr                         "0x0008"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_reg(data)                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_reg                           (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_hdr2_access_rdata_r00_shift       (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_hdr2_access_rdata_r00_mask        (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_hdr2_access_rdata_r00(data)       (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS0_get_hdr2_access_rdata_r00(data)   (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1                                  0x1806BA24
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_reg_addr                          "0xB806BA24"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_reg                               0xB806BA24
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_inst_addr                         "0x0009"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_reg(data)                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_reg                           (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_hdr2_access_rdata_r01_shift       (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_hdr2_access_rdata_r01_mask        (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_hdr2_access_rdata_r01(data)       (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS1_get_hdr2_access_rdata_r01(data)   (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4                                  0x1806BA30
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_reg_addr                          "0xB806BA30"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_reg                               0xB806BA30
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_inst_addr                         "0x000A"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_reg(data)                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_reg                           (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_hdr2_access_rdata_g00_shift       (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_hdr2_access_rdata_g00_mask        (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_hdr2_access_rdata_g00(data)       (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS4_get_hdr2_access_rdata_g00(data)   (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5                                  0x1806BA34
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_reg_addr                          "0xB806BA34"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_reg                               0xB806BA34
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_inst_addr                         "0x000B"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_reg(data)                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_reg                           (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_hdr2_access_rdata_g01_shift       (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_hdr2_access_rdata_g01_mask        (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_hdr2_access_rdata_g01(data)       (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS5_get_hdr2_access_rdata_g01(data)   (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8                                  0x1806BA40
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_reg_addr                          "0xB806BA40"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_reg                               0xB806BA40
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_inst_addr                         "0x000C"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_reg(data)                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_reg                           (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_hdr2_access_rdata_b00_shift       (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_hdr2_access_rdata_b00_mask        (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_hdr2_access_rdata_b00(data)       (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS8_get_hdr2_access_rdata_b00(data)   (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9                                  0x1806BA44
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_reg_addr                          "0xB806BA44"
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_reg                               0xB806BA44
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_inst_addr                         "0x000D"
#define  set_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_reg(data)                     (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_reg                           (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_reg))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_hdr2_access_rdata_b01_shift       (0)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_hdr2_access_rdata_b01_mask        (0xFFFFFFFF)
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_hdr2_access_rdata_b01(data)       (0xFFFFFFFF&(data))
#define  HDR_SUB_RBUS_HDR2_ACCESS_DATA_STATUS9_get_hdr2_access_rdata_b01(data)   (0xFFFFFFFF&(data))

#define  HDR_SUB_RBUS_HDR2_TOP_CTL2                                             0x1806BA50
#define  HDR_SUB_RBUS_HDR2_TOP_CTL2_reg_addr                                     "0xB806BA50"
#define  HDR_SUB_RBUS_HDR2_TOP_CTL2_reg                                          0xB806BA50
#define  HDR_SUB_RBUS_HDR2_TOP_CTL2_inst_addr                                    "0x000E"
#define  set_HDR_SUB_RBUS_HDR2_TOP_CTL2_reg(data)                                (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_TOP_CTL2_reg)=data)
#define  get_HDR_SUB_RBUS_HDR2_TOP_CTL2_reg                                      (*((volatile unsigned int*)HDR_SUB_RBUS_HDR2_TOP_CTL2_reg))
#define  HDR_SUB_RBUS_HDR2_TOP_CTL2_hdr2_in_sel_shift                            (0)
#define  HDR_SUB_RBUS_HDR2_TOP_CTL2_hdr2_in_sel_mask                             (0x00000001)
#define  HDR_SUB_RBUS_HDR2_TOP_CTL2_hdr2_in_sel(data)                            (0x00000001&(data))
#define  HDR_SUB_RBUS_HDR2_TOP_CTL2_get_hdr2_in_sel(data)                        (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDR_SUB_RBUS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_l_crc_err_cnt:16;
        RBus_UInt32  hdr2_crc_res_sel:4;
        RBus_UInt32  res1:6;
        RBus_UInt32  hdr2_crc_done:1;
        RBus_UInt32  crc_done_tog:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdr2_l_auto_cmp_en:1;
        RBus_UInt32  hdr2_crc_conti:1;
        RBus_UInt32  hdr2_crc_start:1;
    };
}hdr_sub_rbus_hdr2_crc_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_l_des_crc:32;
    };
}hdr_sub_rbus_hdr2_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_crc_l_result:32;
    };
}hdr_sub_rbus_hdr2_crc_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  hdr2_access_cross_bar_en:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  hdr2_accessdata_wr_en:1;
        RBus_UInt32  hdr2_accessdata_rd_en:1;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hdr2_accessdata_starty:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hdr2_accessdata_startx:13;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_r:32;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_g:32;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_b:32;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r00:32;
    };
}hdr_sub_rbus_hdr2_access_data_status0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r01:32;
    };
}hdr_sub_rbus_hdr2_access_data_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g00:32;
    };
}hdr_sub_rbus_hdr2_access_data_status4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g01:32;
    };
}hdr_sub_rbus_hdr2_access_data_status5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b00:32;
    };
}hdr_sub_rbus_hdr2_access_data_status8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b01:32;
    };
}hdr_sub_rbus_hdr2_access_data_status9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  hdr2_in_sel:1;
    };
}hdr_sub_rbus_hdr2_top_ctl2_RBUS;

#else //apply LITTLE_ENDIAN

//======HDR_SUB_RBUS register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_crc_start:1;
        RBus_UInt32  hdr2_crc_conti:1;
        RBus_UInt32  hdr2_l_auto_cmp_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  crc_done_tog:1;
        RBus_UInt32  hdr2_crc_done:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  hdr2_crc_res_sel:4;
        RBus_UInt32  hdr2_l_crc_err_cnt:16;
    };
}hdr_sub_rbus_hdr2_crc_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_l_des_crc:32;
    };
}hdr_sub_rbus_hdr2_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_crc_l_result:32;
    };
}hdr_sub_rbus_hdr2_crc_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_accessdata_rd_en:1;
        RBus_UInt32  hdr2_accessdata_wr_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  hdr2_access_cross_bar_en:1;
        RBus_UInt32  res2:27;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_accessdata_startx:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hdr2_accessdata_starty:13;
        RBus_UInt32  res2:3;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_r:32;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_g:32;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_b:32;
    };
}hdr_sub_rbus_hdr2_access_data_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r00:32;
    };
}hdr_sub_rbus_hdr2_access_data_status0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r01:32;
    };
}hdr_sub_rbus_hdr2_access_data_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g00:32;
    };
}hdr_sub_rbus_hdr2_access_data_status4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g01:32;
    };
}hdr_sub_rbus_hdr2_access_data_status5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b00:32;
    };
}hdr_sub_rbus_hdr2_access_data_status8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b01:32;
    };
}hdr_sub_rbus_hdr2_access_data_status9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_in_sel:1;
        RBus_UInt32  res1:31;
    };
}hdr_sub_rbus_hdr2_top_ctl2_RBUS;




#endif 


#endif 
