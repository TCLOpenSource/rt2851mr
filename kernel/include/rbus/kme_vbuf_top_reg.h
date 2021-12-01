/**
* @file Merlin5_MEMC_KME_VBUF_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_VBUF_TOP_REG_H_
#define _RBUS_KME_VBUF_TOP_REG_H_

#include "rbus_types.h"



//  KME_VBUF_TOP Register Address
#define  KME_VBUF_TOP_KME_VBUF_TOP_00                                           0x1809B200
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_reg_addr                                   "0xB809B200"
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_reg                                        0xB809B200
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_inst_addr                                  "0x0000"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_00_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_00_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_00_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_00_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_lfsr_seed_init_shift                  (29)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_dehalo_show_sel_shift                 (27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_lbme_update_num_1row_shift            (19)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_update_en_shift                       (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_vactive_shift                         (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_hactive_shift                         (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_lfsr_seed_init_mask                   (0x20000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_dehalo_show_sel_mask                  (0x18000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_lbme_update_num_1row_mask             (0x07F80000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_update_en_mask                        (0x00040000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_vactive_mask                          (0x0003FE00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_hactive_mask                          (0x000001FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_lfsr_seed_init(data)                  (0x20000000&((data)<<29))
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_dehalo_show_sel(data)                 (0x18000000&((data)<<27))
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_lbme_update_num_1row(data)            (0x07F80000&((data)<<19))
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_update_en(data)                       (0x00040000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_vactive(data)                         (0x0003FE00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_vbuf_hactive(data)                         (0x000001FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_get_vbuf_lfsr_seed_init(data)              ((0x20000000&(data))>>29)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_get_vbuf_dehalo_show_sel(data)             ((0x18000000&(data))>>27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_get_vbuf_lbme_update_num_1row(data)        ((0x07F80000&(data))>>19)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_get_vbuf_update_en(data)                   ((0x00040000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_get_vbuf_vactive(data)                     ((0x0003FE00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_00_get_vbuf_hactive(data)                     (0x000001FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_04                                           0x1809B204
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_reg_addr                                   "0xB809B204"
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_reg                                        0xB809B204
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_inst_addr                                  "0x0001"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_04_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_04_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_04_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_04_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_vbuf_ip_y_seed_init_shift                  (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_vbuf_ip_x_seed_init_shift                  (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_vbuf_ip_y_seed_init_mask                   (0xFFFF0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_vbuf_ip_x_seed_init_mask                   (0x0000FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_vbuf_ip_y_seed_init(data)                  (0xFFFF0000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_vbuf_ip_x_seed_init(data)                  (0x0000FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_get_vbuf_ip_y_seed_init(data)              ((0xFFFF0000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_04_get_vbuf_ip_x_seed_init(data)              (0x0000FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_08                                           0x1809B208
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_reg_addr                                   "0xB809B208"
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_reg                                        0xB809B208
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_inst_addr                                  "0x0002"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_08_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_08_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_08_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_08_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_vbuf_pi_y_seed_init_shift                  (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_vbuf_pi_x_seed_init_shift                  (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_vbuf_pi_y_seed_init_mask                   (0xFFFF0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_vbuf_pi_x_seed_init_mask                   (0x0000FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_vbuf_pi_y_seed_init(data)                  (0xFFFF0000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_vbuf_pi_x_seed_init(data)                  (0x0000FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_get_vbuf_pi_y_seed_init(data)              ((0xFFFF0000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_08_get_vbuf_pi_x_seed_init(data)              (0x0000FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_0C                                           0x1809B20C
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_reg_addr                                   "0xB809B20C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_reg                                        0xB809B20C
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_inst_addr                                  "0x0003"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_0C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_0C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_0C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_0C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask3_y_shift             (28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask3_x_shift             (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask2_y_shift             (20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask2_x_shift             (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask1_y_shift             (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask1_x_shift             (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask0_y_shift             (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask0_x_shift             (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask3_y_mask              (0xF0000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask3_x_mask              (0x0F000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask2_y_mask              (0x00F00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask2_x_mask              (0x000F0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask1_y_mask              (0x0000F000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask1_x_mask              (0x00000F00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask0_y_mask              (0x000000F0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask0_x_mask              (0x0000000F)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask3_y(data)             (0xF0000000&((data)<<28))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask3_x(data)             (0x0F000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask2_y(data)             (0x00F00000&((data)<<20))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask2_x(data)             (0x000F0000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask1_y(data)             (0x0000F000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask1_x(data)             (0x00000F00&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask0_y(data)             (0x000000F0&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_vbuf_ip_1st_lfsr_mask0_x(data)             (0x0000000F&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask3_y(data)         ((0xF0000000&(data))>>28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask3_x(data)         ((0x0F000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask2_y(data)         ((0x00F00000&(data))>>20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask2_x(data)         ((0x000F0000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask1_y(data)         ((0x0000F000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask1_x(data)         ((0x00000F00&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask0_y(data)         ((0x000000F0&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_0C_get_vbuf_ip_1st_lfsr_mask0_x(data)         (0x0000000F&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_10                                           0x1809B210
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_reg_addr                                   "0xB809B210"
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_reg                                        0xB809B210
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_inst_addr                                  "0x0004"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_10_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_10_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_10_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_10_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_zmv_en_shift                   (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_gmv_en_shift                   (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update3_en_shift               (14)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update2_en_shift               (13)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update1_en_shift               (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update0_en_shift               (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand9_en_shift                 (10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand8_en_shift                 (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand7_en_shift                 (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand6_en_shift                 (7)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand5_en_shift                 (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand4_en_shift                 (5)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand3_en_shift                 (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand2_en_shift                 (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand1_en_shift                 (2)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand0_en_shift                 (1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_en_shift                              (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_zmv_en_mask                    (0x00010000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_gmv_en_mask                    (0x00008000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update3_en_mask                (0x00004000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update2_en_mask                (0x00002000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update1_en_mask                (0x00001000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update0_en_mask                (0x00000800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand9_en_mask                  (0x00000400)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand8_en_mask                  (0x00000200)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand7_en_mask                  (0x00000100)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand6_en_mask                  (0x00000080)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand5_en_mask                  (0x00000040)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand4_en_mask                  (0x00000020)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand3_en_mask                  (0x00000010)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand2_en_mask                  (0x00000008)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand1_en_mask                  (0x00000004)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand0_en_mask                  (0x00000002)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_en_mask                               (0x00000001)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_zmv_en(data)                   (0x00010000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_gmv_en(data)                   (0x00008000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update3_en(data)               (0x00004000&((data)<<14))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update2_en(data)               (0x00002000&((data)<<13))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update1_en(data)               (0x00001000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_update0_en(data)               (0x00000800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand9_en(data)                 (0x00000400&((data)<<10))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand8_en(data)                 (0x00000200&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand7_en(data)                 (0x00000100&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand6_en(data)                 (0x00000080&((data)<<7))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand5_en(data)                 (0x00000040&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand4_en(data)                 (0x00000020&((data)<<5))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand3_en(data)                 (0x00000010&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand2_en(data)                 (0x00000008&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand1_en(data)                 (0x00000004&((data)<<2))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_ip_1st_cand0_en(data)                 (0x00000002&((data)<<1))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_vbuf_en(data)                              (0x00000001&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_zmv_en(data)               ((0x00010000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_gmv_en(data)               ((0x00008000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_update3_en(data)           ((0x00004000&(data))>>14)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_update2_en(data)           ((0x00002000&(data))>>13)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_update1_en(data)           ((0x00001000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_update0_en(data)           ((0x00000800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand9_en(data)             ((0x00000400&(data))>>10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand8_en(data)             ((0x00000200&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand7_en(data)             ((0x00000100&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand6_en(data)             ((0x00000080&(data))>>7)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand5_en(data)             ((0x00000040&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand4_en(data)             ((0x00000020&(data))>>5)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand3_en(data)             ((0x00000010&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand2_en(data)             ((0x00000008&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand1_en(data)             ((0x00000004&(data))>>2)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_ip_1st_cand0_en(data)             ((0x00000002&(data))>>1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_10_get_vbuf_en(data)                          (0x00000001&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_14                                           0x1809B214
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_reg_addr                                   "0xB809B214"
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_reg                                        0xB809B214
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_inst_addr                                  "0x0005"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_14_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_14_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_14_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_14_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_zmv_en_shift                   (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_gmv_en_shift                   (14)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update3_en_shift               (13)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update2_en_shift               (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update1_en_shift               (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update0_en_shift               (10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand9_en_shift                 (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand8_en_shift                 (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand7_en_shift                 (7)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand6_en_shift                 (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand5_en_shift                 (5)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand4_en_shift                 (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand3_en_shift                 (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand2_en_shift                 (2)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand1_en_shift                 (1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand0_en_shift                 (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_zmv_en_mask                    (0x00008000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_gmv_en_mask                    (0x00004000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update3_en_mask                (0x00002000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update2_en_mask                (0x00001000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update1_en_mask                (0x00000800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update0_en_mask                (0x00000400)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand9_en_mask                  (0x00000200)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand8_en_mask                  (0x00000100)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand7_en_mask                  (0x00000080)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand6_en_mask                  (0x00000040)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand5_en_mask                  (0x00000020)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand4_en_mask                  (0x00000010)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand3_en_mask                  (0x00000008)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand2_en_mask                  (0x00000004)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand1_en_mask                  (0x00000002)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand0_en_mask                  (0x00000001)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_zmv_en(data)                   (0x00008000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_gmv_en(data)                   (0x00004000&((data)<<14))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update3_en(data)               (0x00002000&((data)<<13))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update2_en(data)               (0x00001000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update1_en(data)               (0x00000800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_update0_en(data)               (0x00000400&((data)<<10))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand9_en(data)                 (0x00000200&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand8_en(data)                 (0x00000100&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand7_en(data)                 (0x00000080&((data)<<7))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand6_en(data)                 (0x00000040&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand5_en(data)                 (0x00000020&((data)<<5))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand4_en(data)                 (0x00000010&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand3_en(data)                 (0x00000008&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand2_en(data)                 (0x00000004&((data)<<2))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand1_en(data)                 (0x00000002&((data)<<1))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_vbuf_pi_1st_cand0_en(data)                 (0x00000001&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_zmv_en(data)               ((0x00008000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_gmv_en(data)               ((0x00004000&(data))>>14)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_update3_en(data)           ((0x00002000&(data))>>13)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_update2_en(data)           ((0x00001000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_update1_en(data)           ((0x00000800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_update0_en(data)           ((0x00000400&(data))>>10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand9_en(data)             ((0x00000200&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand8_en(data)             ((0x00000100&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand7_en(data)             ((0x00000080&(data))>>7)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand6_en(data)             ((0x00000040&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand5_en(data)             ((0x00000020&(data))>>5)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand4_en(data)             ((0x00000010&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand3_en(data)             ((0x00000008&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand2_en(data)             ((0x00000004&(data))>>2)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand1_en(data)             ((0x00000002&(data))>>1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_14_get_vbuf_pi_1st_cand0_en(data)             (0x00000001&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_18                                           0x1809B218
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_reg_addr                                   "0xB809B218"
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_reg                                        0xB809B218
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_inst_addr                                  "0x0006"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_18_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_18_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_18_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_18_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand4_offsety_shift            (27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand4_offsetx_shift            (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand3_offsety_shift            (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand3_offsetx_shift            (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand2_offsety_shift            (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand2_offsetx_shift            (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand1_offsety_shift            (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand1_offsetx_shift            (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand0_offsety_shift            (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand0_offsetx_shift            (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand4_offsety_mask             (0x38000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand4_offsetx_mask             (0x07000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand3_offsety_mask             (0x00E00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand3_offsetx_mask             (0x001C0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand2_offsety_mask             (0x00038000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand2_offsetx_mask             (0x00007000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand1_offsety_mask             (0x00000E00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand1_offsetx_mask             (0x000001C0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand0_offsety_mask             (0x00000038)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand0_offsetx_mask             (0x00000007)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand4_offsety(data)            (0x38000000&((data)<<27))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand4_offsetx(data)            (0x07000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand3_offsety(data)            (0x00E00000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand3_offsetx(data)            (0x001C0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand2_offsety(data)            (0x00038000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand2_offsetx(data)            (0x00007000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand1_offsety(data)            (0x00000E00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand1_offsetx(data)            (0x000001C0&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand0_offsety(data)            (0x00000038&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_vbuf_ip_1st_cand0_offsetx(data)            (0x00000007&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand4_offsety(data)        ((0x38000000&(data))>>27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand4_offsetx(data)        ((0x07000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand3_offsety(data)        ((0x00E00000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand3_offsetx(data)        ((0x001C0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand2_offsety(data)        ((0x00038000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand2_offsetx(data)        ((0x00007000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand1_offsety(data)        ((0x00000E00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand1_offsetx(data)        ((0x000001C0&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand0_offsety(data)        ((0x00000038&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_18_get_vbuf_ip_1st_cand0_offsetx(data)        (0x00000007&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_1C                                           0x1809B21C
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_reg_addr                                   "0xB809B21C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_reg                                        0xB809B21C
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_inst_addr                                  "0x0007"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_1C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_1C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_1C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_1C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand9_offsety_shift            (27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand9_offsetx_shift            (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand8_offsety_shift            (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand8_offsetx_shift            (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand7_offsety_shift            (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand7_offsetx_shift            (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand6_offsety_shift            (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand6_offsetx_shift            (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand5_offsety_shift            (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand5_offsetx_shift            (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand9_offsety_mask             (0x38000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand9_offsetx_mask             (0x07000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand8_offsety_mask             (0x00E00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand8_offsetx_mask             (0x001C0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand7_offsety_mask             (0x00038000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand7_offsetx_mask             (0x00007000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand6_offsety_mask             (0x00000E00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand6_offsetx_mask             (0x000001C0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand5_offsety_mask             (0x00000038)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand5_offsetx_mask             (0x00000007)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand9_offsety(data)            (0x38000000&((data)<<27))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand9_offsetx(data)            (0x07000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand8_offsety(data)            (0x00E00000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand8_offsetx(data)            (0x001C0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand7_offsety(data)            (0x00038000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand7_offsetx(data)            (0x00007000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand6_offsety(data)            (0x00000E00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand6_offsetx(data)            (0x000001C0&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand5_offsety(data)            (0x00000038&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_vbuf_ip_1st_cand5_offsetx(data)            (0x00000007&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand9_offsety(data)        ((0x38000000&(data))>>27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand9_offsetx(data)        ((0x07000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand8_offsety(data)        ((0x00E00000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand8_offsetx(data)        ((0x001C0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand7_offsety(data)        ((0x00038000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand7_offsetx(data)        ((0x00007000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand6_offsety(data)        ((0x00000E00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand6_offsetx(data)        ((0x000001C0&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand5_offsety(data)        ((0x00000038&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_1C_get_vbuf_ip_1st_cand5_offsetx(data)        (0x00000007&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_20                                           0x1809B220
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_reg_addr                                   "0xB809B220"
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_reg                                        0xB809B220
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_inst_addr                                  "0x0008"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_20_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_20_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_20_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_20_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update3_offsety_shift          (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update3_offsetx_shift          (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update2_offsety_shift          (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update2_offsetx_shift          (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update1_offsety_shift          (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update1_offsetx_shift          (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update0_offsety_shift          (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update0_offsetx_shift          (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update3_offsety_mask           (0x00E00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update3_offsetx_mask           (0x001C0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update2_offsety_mask           (0x00038000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update2_offsetx_mask           (0x00007000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update1_offsety_mask           (0x00000E00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update1_offsetx_mask           (0x000001C0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update0_offsety_mask           (0x00000038)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update0_offsetx_mask           (0x00000007)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update3_offsety(data)          (0x00E00000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update3_offsetx(data)          (0x001C0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update2_offsety(data)          (0x00038000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update2_offsetx(data)          (0x00007000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update1_offsety(data)          (0x00000E00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update1_offsetx(data)          (0x000001C0&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update0_offsety(data)          (0x00000038&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_vbuf_ip_1st_update0_offsetx(data)          (0x00000007&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update3_offsety(data)      ((0x00E00000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update3_offsetx(data)      ((0x001C0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update2_offsety(data)      ((0x00038000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update2_offsetx(data)      ((0x00007000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update1_offsety(data)      ((0x00000E00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update1_offsetx(data)      ((0x000001C0&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update0_offsety(data)      ((0x00000038&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_20_get_vbuf_ip_1st_update0_offsetx(data)      (0x00000007&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_24                                           0x1809B224
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_reg_addr                                   "0xB809B224"
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_reg                                        0xB809B224
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_inst_addr                                  "0x0009"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_24_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_24_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_24_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_24_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand4_offsety_shift            (27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand4_offsetx_shift            (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand3_offsety_shift            (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand3_offsetx_shift            (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand2_offsety_shift            (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand2_offsetx_shift            (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand1_offsety_shift            (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand1_offsetx_shift            (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand0_offsety_shift            (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand0_offsetx_shift            (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand4_offsety_mask             (0x38000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand4_offsetx_mask             (0x07000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand3_offsety_mask             (0x00E00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand3_offsetx_mask             (0x001C0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand2_offsety_mask             (0x00038000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand2_offsetx_mask             (0x00007000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand1_offsety_mask             (0x00000E00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand1_offsetx_mask             (0x000001C0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand0_offsety_mask             (0x00000038)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand0_offsetx_mask             (0x00000007)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand4_offsety(data)            (0x38000000&((data)<<27))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand4_offsetx(data)            (0x07000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand3_offsety(data)            (0x00E00000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand3_offsetx(data)            (0x001C0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand2_offsety(data)            (0x00038000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand2_offsetx(data)            (0x00007000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand1_offsety(data)            (0x00000E00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand1_offsetx(data)            (0x000001C0&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand0_offsety(data)            (0x00000038&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_vbuf_pi_1st_cand0_offsetx(data)            (0x00000007&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand4_offsety(data)        ((0x38000000&(data))>>27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand4_offsetx(data)        ((0x07000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand3_offsety(data)        ((0x00E00000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand3_offsetx(data)        ((0x001C0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand2_offsety(data)        ((0x00038000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand2_offsetx(data)        ((0x00007000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand1_offsety(data)        ((0x00000E00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand1_offsetx(data)        ((0x000001C0&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand0_offsety(data)        ((0x00000038&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_24_get_vbuf_pi_1st_cand0_offsetx(data)        (0x00000007&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_28                                           0x1809B228
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_reg_addr                                   "0xB809B228"
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_reg                                        0xB809B228
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_inst_addr                                  "0x000A"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_28_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_28_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_28_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_28_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand9_offsety_shift            (27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand9_offsetx_shift            (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand8_offsety_shift            (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand8_offsetx_shift            (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand7_offsety_shift            (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand7_offsetx_shift            (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand6_offsety_shift            (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand6_offsetx_shift            (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand5_offsety_shift            (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand5_offsetx_shift            (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand9_offsety_mask             (0x38000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand9_offsetx_mask             (0x07000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand8_offsety_mask             (0x00E00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand8_offsetx_mask             (0x001C0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand7_offsety_mask             (0x00038000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand7_offsetx_mask             (0x00007000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand6_offsety_mask             (0x00000E00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand6_offsetx_mask             (0x000001C0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand5_offsety_mask             (0x00000038)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand5_offsetx_mask             (0x00000007)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand9_offsety(data)            (0x38000000&((data)<<27))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand9_offsetx(data)            (0x07000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand8_offsety(data)            (0x00E00000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand8_offsetx(data)            (0x001C0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand7_offsety(data)            (0x00038000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand7_offsetx(data)            (0x00007000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand6_offsety(data)            (0x00000E00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand6_offsetx(data)            (0x000001C0&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand5_offsety(data)            (0x00000038&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_vbuf_pi_1st_cand5_offsetx(data)            (0x00000007&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand9_offsety(data)        ((0x38000000&(data))>>27)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand9_offsetx(data)        ((0x07000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand8_offsety(data)        ((0x00E00000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand8_offsetx(data)        ((0x001C0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand7_offsety(data)        ((0x00038000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand7_offsetx(data)        ((0x00007000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand6_offsety(data)        ((0x00000E00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand6_offsetx(data)        ((0x000001C0&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand5_offsety(data)        ((0x00000038&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_28_get_vbuf_pi_1st_cand5_offsetx(data)        (0x00000007&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_2C                                           0x1809B22C
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_reg_addr                                   "0xB809B22C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_reg                                        0xB809B22C
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_inst_addr                                  "0x000B"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_2C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_2C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_2C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_2C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_3dpr_l_mv_force_en_shift              (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update3_offsety_shift          (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update3_offsetx_shift          (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update2_offsety_shift          (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update2_offsetx_shift          (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update1_offsety_shift          (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update1_offsetx_shift          (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update0_offsety_shift          (3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update0_offsetx_shift          (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_3dpr_l_mv_force_en_mask               (0x01000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update3_offsety_mask           (0x00E00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update3_offsetx_mask           (0x001C0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update2_offsety_mask           (0x00038000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update2_offsetx_mask           (0x00007000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update1_offsety_mask           (0x00000E00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update1_offsetx_mask           (0x000001C0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update0_offsety_mask           (0x00000038)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update0_offsetx_mask           (0x00000007)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_3dpr_l_mv_force_en(data)              (0x01000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update3_offsety(data)          (0x00E00000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update3_offsetx(data)          (0x001C0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update2_offsety(data)          (0x00038000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update2_offsetx(data)          (0x00007000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update1_offsety(data)          (0x00000E00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update1_offsetx(data)          (0x000001C0&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update0_offsety(data)          (0x00000038&((data)<<3))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_vbuf_pi_1st_update0_offsetx(data)          (0x00000007&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_3dpr_l_mv_force_en(data)          ((0x01000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update3_offsety(data)      ((0x00E00000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update3_offsetx(data)      ((0x001C0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update2_offsety(data)      ((0x00038000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update2_offsetx(data)      ((0x00007000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update1_offsety(data)      ((0x00000E00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update1_offsetx(data)      ((0x000001C0&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update0_offsety(data)      ((0x00000038&(data))>>3)
#define  KME_VBUF_TOP_KME_VBUF_TOP_2C_get_vbuf_pi_1st_update0_offsetx(data)      (0x00000007&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_30                                           0x1809B230
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_reg_addr                                   "0xB809B230"
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_reg                                        0xB809B230
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_inst_addr                                  "0x000C"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_30_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_30_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_30_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_30_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_r_force_mv_shift                 (22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_l_force_mv_shift                 (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_r_mv_force_en_shift              (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_kme_me_work_mode_shift                     (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_lbme_trig_mid_row_num_shift           (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_r_force_mv_mask                  (0xFFC00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_l_force_mv_mask                  (0x003FF000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_r_mv_force_en_mask               (0x00000800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_kme_me_work_mode_mask                      (0x00000600)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_lbme_trig_mid_row_num_mask            (0x000001FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_r_force_mv(data)                 (0xFFC00000&((data)<<22))
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_l_force_mv(data)                 (0x003FF000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_3dpr_r_mv_force_en(data)              (0x00000800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_kme_me_work_mode(data)                     (0x00000600&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_vbuf_lbme_trig_mid_row_num(data)           (0x000001FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_get_vbuf_3dpr_r_force_mv(data)             ((0xFFC00000&(data))>>22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_get_vbuf_3dpr_l_force_mv(data)             ((0x003FF000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_get_vbuf_3dpr_r_mv_force_en(data)          ((0x00000800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_get_kme_me_work_mode(data)                 ((0x00000600&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_30_get_vbuf_lbme_trig_mid_row_num(data)       (0x000001FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_34                                           0x1809B234
#define  KME_VBUF_TOP_KME_VBUF_TOP_34_reg_addr                                   "0xB809B234"
#define  KME_VBUF_TOP_KME_VBUF_TOP_34_reg                                        0xB809B234
#define  KME_VBUF_TOP_KME_VBUF_TOP_34_inst_addr                                  "0x000D"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_34_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_34_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_34_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_34_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_34_vbuf_wait_cycle_frame2_mv_trig_shift       (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_34_vbuf_wait_cycle_frame2_mv_trig_mask        (0x0003FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_34_vbuf_wait_cycle_frame2_mv_trig(data)       (0x0003FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_34_get_vbuf_wait_cycle_frame2_mv_trig(data)   (0x0003FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_38                                           0x1809B238
#define  KME_VBUF_TOP_KME_VBUF_TOP_38_reg_addr                                   "0xB809B238"
#define  KME_VBUF_TOP_KME_VBUF_TOP_38_reg                                        0xB809B238
#define  KME_VBUF_TOP_KME_VBUF_TOP_38_inst_addr                                  "0x000E"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_38_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_38_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_38_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_38_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_38_vbuf_wait_cycle_frame2_me_trig_shift       (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_38_vbuf_wait_cycle_frame2_me_trig_mask        (0x0003FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_38_vbuf_wait_cycle_frame2_me_trig(data)       (0x0003FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_38_get_vbuf_wait_cycle_frame2_me_trig(data)   (0x0003FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_3C                                           0x1809B23C
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_reg_addr                                   "0xB809B23C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_reg                                        0xB809B23C
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_inst_addr                                  "0x000F"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_3C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_3C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_3C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_3C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_blk_rim_top_shift                     (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_mvy_range_shift                       (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_mvx_range_shift                       (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_blk_rim_top_mask                      (0x01FF0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_mvy_range_mask                        (0x0000FE00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_mvx_range_mask                        (0x000001FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_blk_rim_top(data)                     (0x01FF0000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_mvy_range(data)                       (0x0000FE00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_vbuf_mvx_range(data)                       (0x000001FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_get_vbuf_blk_rim_top(data)                 ((0x01FF0000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_get_vbuf_mvy_range(data)                   ((0x0000FE00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_3C_get_vbuf_mvx_range(data)                   (0x000001FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_40                                           0x1809B240
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_reg_addr                                   "0xB809B240"
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_reg                                        0xB809B240
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_inst_addr                                  "0x0010"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_40_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_40_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_40_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_40_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_bot_shift                     (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_right_shift                   (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_left_shift                    (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_bot_mask                      (0x07FC0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_right_mask                    (0x0003FE00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_left_mask                     (0x000001FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_bot(data)                     (0x07FC0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_right(data)                   (0x0003FE00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_vbuf_blk_rim_left(data)                    (0x000001FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_get_vbuf_blk_rim_bot(data)                 ((0x07FC0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_get_vbuf_blk_rim_right(data)               ((0x0003FE00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_40_get_vbuf_blk_rim_left(data)                (0x000001FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_44                                           0x1809B244
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_reg_addr                                   "0xB809B244"
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_reg                                        0xB809B244
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_inst_addr                                  "0x0011"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_44_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_44_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_44_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_44_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_vbuf_pix_rim_bot_shift                     (10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_vbuf_pix_rim_top_shift                     (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_vbuf_pix_rim_bot_mask                      (0x000FFC00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_vbuf_pix_rim_top_mask                      (0x000003FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_vbuf_pix_rim_bot(data)                     (0x000FFC00&((data)<<10))
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_vbuf_pix_rim_top(data)                     (0x000003FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_get_vbuf_pix_rim_bot(data)                 ((0x000FFC00&(data))>>10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_44_get_vbuf_pix_rim_top(data)                 (0x000003FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_48                                           0x1809B248
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_reg_addr                                   "0xB809B248"
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_reg                                        0xB809B248
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_inst_addr                                  "0x0012"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_48_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_48_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_48_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_48_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_hv_ratio_shift                   (22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_v_addr_shift_bit_shift           (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_h_addr_shift_bit_shift           (20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_pix_rim_right_shift                   (10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_pix_rim_left_shift                    (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_hv_ratio_mask                    (0x00400000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_v_addr_shift_bit_mask            (0x00200000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_h_addr_shift_bit_mask            (0x00100000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_pix_rim_right_mask                    (0x000FFC00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_pix_rim_left_mask                     (0x000003FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_hv_ratio(data)                   (0x00400000&((data)<<22))
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_v_addr_shift_bit(data)           (0x00200000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_lbme_h_addr_shift_bit(data)           (0x00100000&((data)<<20))
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_pix_rim_right(data)                   (0x000FFC00&((data)<<10))
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_vbuf_pix_rim_left(data)                    (0x000003FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_get_vbuf_lbme_hv_ratio(data)               ((0x00400000&(data))>>22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_get_vbuf_lbme_v_addr_shift_bit(data)       ((0x00200000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_get_vbuf_lbme_h_addr_shift_bit(data)       ((0x00100000&(data))>>20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_get_vbuf_pix_rim_right(data)               ((0x000FFC00&(data))>>10)
#define  KME_VBUF_TOP_KME_VBUF_TOP_48_get_vbuf_pix_rim_left(data)                (0x000003FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_4C                                           0x1809B24C
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_reg_addr                                   "0xB809B24C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_reg                                        0xB809B24C
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_inst_addr                                  "0x0013"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_4C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_4C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_4C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_4C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_ac_bypass_tag_shift                   (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_dc_bypass_tag_shift                   (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_invalid_cnt_th_shift                  (6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_out_of_range_cnt_th_shift             (1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_rim_shift_en_shift                    (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_ac_bypass_tag_mask                    (0x00001000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_dc_bypass_tag_mask                    (0x00000800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_invalid_cnt_th_mask                   (0x000007C0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_out_of_range_cnt_th_mask              (0x0000003E)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_rim_shift_en_mask                     (0x00000001)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_ac_bypass_tag(data)                   (0x00001000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_dc_bypass_tag(data)                   (0x00000800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_invalid_cnt_th(data)                  (0x000007C0&((data)<<6))
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_out_of_range_cnt_th(data)             (0x0000003E&((data)<<1))
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_vbuf_rim_shift_en(data)                    (0x00000001&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_get_vbuf_ac_bypass_tag(data)               ((0x00001000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_get_vbuf_dc_bypass_tag(data)               ((0x00000800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_get_vbuf_invalid_cnt_th(data)              ((0x000007C0&(data))>>6)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_get_vbuf_out_of_range_cnt_th(data)         ((0x0000003E&(data))>>1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_4C_get_vbuf_rim_shift_en(data)                (0x00000001&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_50                                           0x1809B250
#define  KME_VBUF_TOP_KME_VBUF_TOP_50_reg_addr                                   "0xB809B250"
#define  KME_VBUF_TOP_KME_VBUF_TOP_50_reg                                        0xB809B250
#define  KME_VBUF_TOP_KME_VBUF_TOP_50_inst_addr                                  "0x0014"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_50_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_50_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_50_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_50_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_50_vbuf_gmv_sel_shift                         (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_50_vbuf_gmv_sel_mask                          (0x00000003)
#define  KME_VBUF_TOP_KME_VBUF_TOP_50_vbuf_gmv_sel(data)                         (0x00000003&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_50_get_vbuf_gmv_sel(data)                     (0x00000003&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_54                                           0x1809B254
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_reg_addr                                   "0xB809B254"
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_reg                                        0xB809B254
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_inst_addr                                  "0x0015"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_54_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_54_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_54_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_54_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_enable_shift                     (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logolimit_coef_y_shift                (15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logolimit_coef_x_shift                (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_searchy_shift                    (7)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_searchx_shift                    (2)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_limit_mode_sel_shift             (1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_limit_en_shift                   (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_enable_mask                      (0x00040000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logolimit_coef_y_mask                 (0x00038000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logolimit_coef_x_mask                 (0x00007000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_searchy_mask                     (0x00000F80)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_searchx_mask                     (0x0000007C)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_limit_mode_sel_mask              (0x00000002)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_limit_en_mask                    (0x00000001)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_enable(data)                     (0x00040000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logolimit_coef_y(data)                (0x00038000&((data)<<15))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logolimit_coef_x(data)                (0x00007000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_searchy(data)                    (0x00000F80&((data)<<7))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_searchx(data)                    (0x0000007C&((data)<<2))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_limit_mode_sel(data)             (0x00000002&((data)<<1))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_vbuf_logo_limit_en(data)                   (0x00000001&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_get_vbuf_logo_enable(data)                 ((0x00040000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_get_vbuf_logolimit_coef_y(data)            ((0x00038000&(data))>>15)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_get_vbuf_logolimit_coef_x(data)            ((0x00007000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_get_vbuf_logo_searchy(data)                ((0x00000F80&(data))>>7)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_get_vbuf_logo_searchx(data)                ((0x0000007C&(data))>>2)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_get_vbuf_logo_limit_mode_sel(data)         ((0x00000002&(data))>>1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_54_get_vbuf_logo_limit_en(data)               (0x00000001&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_58                                           0x1809B258
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_reg_addr                                   "0xB809B258"
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_reg                                        0xB809B258
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_inst_addr                                  "0x0016"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_58_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_58_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_58_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_58_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_vbuf_self_upd_interval_shift               (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_vbuf_dm_req_interval_shift                 (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_vbuf_self_upd_interval_mask                (0x0000FF00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_vbuf_dm_req_interval_mask                  (0x000000FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_vbuf_self_upd_interval(data)               (0x0000FF00&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_vbuf_dm_req_interval(data)                 (0x000000FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_get_vbuf_self_upd_interval(data)           ((0x0000FF00&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_58_get_vbuf_dm_req_interval(data)             (0x000000FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_5C                                           0x1809B25C
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_reg_addr                                   "0xB809B25C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_reg                                        0xB809B25C
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_inst_addr                                  "0x0017"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_5C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_5C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_5C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_5C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask3_y_shift             (28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask3_x_shift             (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask2_y_shift             (20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask2_x_shift             (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask1_y_shift             (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask1_x_shift             (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask0_y_shift             (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask0_x_shift             (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask3_y_mask              (0xF0000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask3_x_mask              (0x0F000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask2_y_mask              (0x00F00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask2_x_mask              (0x000F0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask1_y_mask              (0x0000F000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask1_x_mask              (0x00000F00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask0_y_mask              (0x000000F0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask0_x_mask              (0x0000000F)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask3_y(data)             (0xF0000000&((data)<<28))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask3_x(data)             (0x0F000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask2_y(data)             (0x00F00000&((data)<<20))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask2_x(data)             (0x000F0000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask1_y(data)             (0x0000F000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask1_x(data)             (0x00000F00&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask0_y(data)             (0x000000F0&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_vbuf_pi_1st_lfsr_mask0_x(data)             (0x0000000F&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask3_y(data)         ((0xF0000000&(data))>>28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask3_x(data)         ((0x0F000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask2_y(data)         ((0x00F00000&(data))>>20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask2_x(data)         ((0x000F0000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask1_y(data)         ((0x0000F000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask1_x(data)         ((0x00000F00&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask0_y(data)         ((0x000000F0&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_5C_get_vbuf_pi_1st_lfsr_mask0_x(data)         (0x0000000F&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_60                                           0x1809B260
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_reg_addr                                   "0xB809B260"
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_reg                                        0xB809B260
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_inst_addr                                  "0x0018"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_60_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_60_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_60_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_60_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_sign_shift        (31)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_int_shift         (23)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_deci_shift        (21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_sign_shift        (20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_int_shift         (13)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_deci_shift        (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_wait_cycle_shift                   (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_en_shift                     (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_sign_mask         (0x80000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_int_mask          (0x7F800000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_deci_mask         (0x00600000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_sign_mask         (0x00100000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_int_mask          (0x000FE000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_deci_mask         (0x00001800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_wait_cycle_mask                    (0x000007F0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_en_mask                      (0x0000000F)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_sign(data)        (0x80000000&((data)<<31))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_int(data)         (0x7F800000&((data)<<23))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_x_deci(data)        (0x00600000&((data)<<21))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_sign(data)        (0x00100000&((data)<<20))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_int(data)         (0x000FE000&((data)<<13))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_force_mv_y_deci(data)        (0x00001800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_wait_cycle(data)                   (0x000007F0&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_vbuf_sc_debug_en(data)                     (0x0000000F&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_debug_force_mv_x_sign(data)    ((0x80000000&(data))>>31)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_debug_force_mv_x_int(data)     ((0x7F800000&(data))>>23)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_debug_force_mv_x_deci(data)    ((0x00600000&(data))>>21)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_debug_force_mv_y_sign(data)    ((0x00100000&(data))>>20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_debug_force_mv_y_int(data)     ((0x000FE000&(data))>>13)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_debug_force_mv_y_deci(data)    ((0x00001800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_wait_cycle(data)               ((0x000007F0&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_60_get_vbuf_sc_debug_en(data)                 (0x0000000F&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_64                                           0x1809B264
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_reg_addr                                   "0xB809B264"
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_reg                                        0xB809B264
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_inst_addr                                  "0x0019"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_64_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_64_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_64_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_64_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_ip_y_shift             (22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_ip_x_shift             (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_en_shift               (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_ip_y_mask              (0xFFC00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_ip_x_mask              (0x003FF800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_en_mask                (0x00000001)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_ip_y(data)             (0xFFC00000&((data)<<22))
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_ip_x(data)             (0x003FF800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_vbuf_multimin_debug_en(data)               (0x00000001&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_get_vbuf_multimin_debug_ip_y(data)         ((0xFFC00000&(data))>>22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_get_vbuf_multimin_debug_ip_x(data)         ((0x003FF800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_64_get_vbuf_multimin_debug_en(data)           (0x00000001&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_68                                           0x1809B268
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_reg_addr                                   "0xB809B268"
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_reg                                        0xB809B268
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_inst_addr                                  "0x001A"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_68_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_68_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_68_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_68_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_vbuf_multimin_debug_pi_y_shift             (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_vbuf_multimin_debug_pi_x_shift             (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_vbuf_multimin_debug_pi_y_mask              (0x001FF800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_vbuf_multimin_debug_pi_x_mask              (0x000007FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_vbuf_multimin_debug_pi_y(data)             (0x001FF800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_vbuf_multimin_debug_pi_x(data)             (0x000007FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_get_vbuf_multimin_debug_pi_y(data)         ((0x001FF800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_68_get_vbuf_multimin_debug_pi_x(data)         (0x000007FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_6C                                           0x1809B26C
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_reg_addr                                   "0xB809B26C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_reg                                        0xB809B26C
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_inst_addr                                  "0x001B"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_6C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_6C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_6C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_6C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_pi_v_idx_bit_sel_shift       (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_pi_h_idx_bit_sel_shift       (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_ip_v_idx_bit_sel_shift       (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_ip_h_idx_bit_sel_shift       (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_pi_v_idx_bit_sel_mask        (0x0000F000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_pi_h_idx_bit_sel_mask        (0x00000F00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_ip_v_idx_bit_sel_mask        (0x000000F0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_ip_h_idx_bit_sel_mask        (0x0000000F)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_pi_v_idx_bit_sel(data)       (0x0000F000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_pi_h_idx_bit_sel(data)       (0x00000F00&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_ip_v_idx_bit_sel(data)       (0x000000F0&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_vbuf_multimin_ip_h_idx_bit_sel(data)       (0x0000000F&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_get_vbuf_multimin_pi_v_idx_bit_sel(data)   ((0x0000F000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_get_vbuf_multimin_pi_h_idx_bit_sel(data)   ((0x00000F00&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_get_vbuf_multimin_ip_v_idx_bit_sel(data)   ((0x000000F0&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_6C_get_vbuf_multimin_ip_h_idx_bit_sel(data)   (0x0000000F&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_70                                           0x1809B270
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_reg_addr                                   "0xB809B270"
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_reg                                        0xB809B270
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_inst_addr                                  "0x001C"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_70_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_70_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_70_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_70_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_kme_vbuf_sram_ls_value_shift               (23)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_kme_vbuf_sram_ls_en_shift                  (22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_ppi_debug_mv_x_shift                  (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_ppi_debug_mv_y_shift                  (1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_dm_ppi_debug_en_shift                 (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_kme_vbuf_sram_ls_value_mask                (0x00800000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_kme_vbuf_sram_ls_en_mask                   (0x00400000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_ppi_debug_mv_x_mask                   (0x003FF800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_ppi_debug_mv_y_mask                   (0x000007FE)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_dm_ppi_debug_en_mask                  (0x00000001)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_kme_vbuf_sram_ls_value(data)               (0x00800000&((data)<<23))
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_kme_vbuf_sram_ls_en(data)                  (0x00400000&((data)<<22))
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_ppi_debug_mv_x(data)                  (0x003FF800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_ppi_debug_mv_y(data)                  (0x000007FE&((data)<<1))
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_vbuf_dm_ppi_debug_en(data)                 (0x00000001&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_get_kme_vbuf_sram_ls_value(data)           ((0x00800000&(data))>>23)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_get_kme_vbuf_sram_ls_en(data)              ((0x00400000&(data))>>22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_get_vbuf_ppi_debug_mv_x(data)              ((0x003FF800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_get_vbuf_ppi_debug_mv_y(data)              ((0x000007FE&(data))>>1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_70_get_vbuf_dm_ppi_debug_en(data)             (0x00000001&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_74                                           0x1809B274
#define  KME_VBUF_TOP_KME_VBUF_TOP_74_reg_addr                                   "0xB809B274"
#define  KME_VBUF_TOP_KME_VBUF_TOP_74_reg                                        0xB809B274
#define  KME_VBUF_TOP_KME_VBUF_TOP_74_inst_addr                                  "0x001D"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_74_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_74_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_74_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_74_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_74_vbuf_dm0_monitor_cnt_shift                 (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_74_vbuf_dm0_monitor_cnt_mask                  (0x0003FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_74_vbuf_dm0_monitor_cnt(data)                 (0x0003FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_74_get_vbuf_dm0_monitor_cnt(data)             (0x0003FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_78                                           0x1809B278
#define  KME_VBUF_TOP_KME_VBUF_TOP_78_reg_addr                                   "0xB809B278"
#define  KME_VBUF_TOP_KME_VBUF_TOP_78_reg                                        0xB809B278
#define  KME_VBUF_TOP_KME_VBUF_TOP_78_inst_addr                                  "0x001E"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_78_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_78_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_78_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_78_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_78_vbuf_dm1_monitor_cnt_shift                 (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_78_vbuf_dm1_monitor_cnt_mask                  (0x0003FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_78_vbuf_dm1_monitor_cnt(data)                 (0x0003FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_78_get_vbuf_dm1_monitor_cnt(data)             (0x0003FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_7C                                           0x1809B27C
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_reg_addr                                   "0xB809B27C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_reg                                        0xB809B27C
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_inst_addr                                  "0x001F"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_7C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_7C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_7C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_7C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask3_y_shift          (28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask3_x_shift          (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask2_y_shift          (20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask2_x_shift          (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask1_y_shift          (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask1_x_shift          (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask0_y_shift          (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask0_x_shift          (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask3_y_mask           (0xF0000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask3_x_mask           (0x0F000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask2_y_mask           (0x00F00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask2_x_mask           (0x000F0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask1_y_mask           (0x0000F000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask1_x_mask           (0x00000F00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask0_y_mask           (0x000000F0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask0_x_mask           (0x0000000F)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask3_y(data)          (0xF0000000&((data)<<28))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask3_x(data)          (0x0F000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask2_y(data)          (0x00F00000&((data)<<20))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask2_x(data)          (0x000F0000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask1_y(data)          (0x0000F000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask1_x(data)          (0x00000F00&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask0_y(data)          (0x000000F0&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_vbuf_ip_1st_sc_lfsr_mask0_x(data)          (0x0000000F&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask3_y(data)      ((0xF0000000&(data))>>28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask3_x(data)      ((0x0F000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask2_y(data)      ((0x00F00000&(data))>>20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask2_x(data)      ((0x000F0000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask1_y(data)      ((0x0000F000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask1_x(data)      ((0x00000F00&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask0_y(data)      ((0x000000F0&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_7C_get_vbuf_ip_1st_sc_lfsr_mask0_x(data)      (0x0000000F&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_80                                           0x1809B280
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_reg_addr                                   "0xB809B280"
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_reg                                        0xB809B280
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_inst_addr                                  "0x0020"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_80_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_80_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_80_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_80_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask3_y_shift          (28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask3_x_shift          (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask2_y_shift          (20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask2_x_shift          (16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask1_y_shift          (12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask1_x_shift          (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask0_y_shift          (4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask0_x_shift          (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask3_y_mask           (0xF0000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask3_x_mask           (0x0F000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask2_y_mask           (0x00F00000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask2_x_mask           (0x000F0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask1_y_mask           (0x0000F000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask1_x_mask           (0x00000F00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask0_y_mask           (0x000000F0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask0_x_mask           (0x0000000F)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask3_y(data)          (0xF0000000&((data)<<28))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask3_x(data)          (0x0F000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask2_y(data)          (0x00F00000&((data)<<20))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask2_x(data)          (0x000F0000&((data)<<16))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask1_y(data)          (0x0000F000&((data)<<12))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask1_x(data)          (0x00000F00&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask0_y(data)          (0x000000F0&((data)<<4))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_vbuf_pi_1st_sc_lfsr_mask0_x(data)          (0x0000000F&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask3_y(data)      ((0xF0000000&(data))>>28)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask3_x(data)      ((0x0F000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask2_y(data)      ((0x00F00000&(data))>>20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask2_x(data)      ((0x000F0000&(data))>>16)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask1_y(data)      ((0x0000F000&(data))>>12)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask1_x(data)      ((0x00000F00&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask0_y(data)      ((0x000000F0&(data))>>4)
#define  KME_VBUF_TOP_KME_VBUF_TOP_80_get_vbuf_pi_1st_sc_lfsr_mask0_x(data)      (0x0000000F&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_84                                           0x1809B284
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_reg_addr                                   "0xB809B284"
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_reg                                        0xB809B284
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_inst_addr                                  "0x0021"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_84_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_84_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_84_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_84_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_pix_rim_top_shift             (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_blk_rim_bot_shift             (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_blk_rim_top_shift             (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_pix_rim_top_mask              (0x0FFC0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_blk_rim_bot_mask              (0x0003FE00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_blk_rim_top_mask              (0x000001FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_pix_rim_top(data)             (0x0FFC0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_blk_rim_bot(data)             (0x0003FE00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_vbuf_meander_blk_rim_top(data)             (0x000001FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_get_vbuf_meander_pix_rim_top(data)         ((0x0FFC0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_get_vbuf_meander_blk_rim_bot(data)         ((0x0003FE00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_84_get_vbuf_meander_blk_rim_top(data)         (0x000001FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_88                                           0x1809B288
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_reg_addr                                   "0xB809B288"
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_reg                                        0xB809B288
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_inst_addr                                  "0x0022"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_88_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_88_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_88_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_88_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_vbuf_me1_rb_tempconsis_sel_shift           (1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_vbuf_logo_debug_en_shift                   (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_vbuf_me1_rb_tempconsis_sel_mask            (0x00000002)
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_vbuf_logo_debug_en_mask                    (0x00000001)
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_vbuf_me1_rb_tempconsis_sel(data)           (0x00000002&((data)<<1))
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_vbuf_logo_debug_en(data)                   (0x00000001&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_get_vbuf_me1_rb_tempconsis_sel(data)       ((0x00000002&(data))>>1)
#define  KME_VBUF_TOP_KME_VBUF_TOP_88_get_vbuf_logo_debug_en(data)               (0x00000001&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_8C                                           0x1809B28C
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_reg_addr                                   "0xB809B28C"
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_reg                                        0xB809B28C
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_inst_addr                                  "0x0023"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_8C_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_8C_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_8C_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_8C_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_ac_obme_mode_shift                 (26)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_ac_obme_mode_shift                 (24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_dc_obme_mode_sel_shift             (23)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_dc_obme_mode_sel_shift             (22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_dc_obme_mode_shift                 (20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_dc_obme_mode_shift                 (18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_rbk_bv_y_idx_shift                    (9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_rbk_bv_x_idx_shift                    (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_ac_obme_mode_mask                  (0x0C000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_ac_obme_mode_mask                  (0x03000000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_dc_obme_mode_sel_mask              (0x00800000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_dc_obme_mode_sel_mask              (0x00400000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_dc_obme_mode_mask                  (0x00300000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_dc_obme_mode_mask                  (0x000C0000)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_rbk_bv_y_idx_mask                     (0x0003FE00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_rbk_bv_x_idx_mask                     (0x000001FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_ac_obme_mode(data)                 (0x0C000000&((data)<<26))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_ac_obme_mode(data)                 (0x03000000&((data)<<24))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_dc_obme_mode_sel(data)             (0x00800000&((data)<<23))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_dc_obme_mode_sel(data)             (0x00400000&((data)<<22))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_pi_dc_obme_mode(data)                 (0x00300000&((data)<<20))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_ip_dc_obme_mode(data)                 (0x000C0000&((data)<<18))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_rbk_bv_y_idx(data)                    (0x0003FE00&((data)<<9))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_vbuf_rbk_bv_x_idx(data)                    (0x000001FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_pi_ac_obme_mode(data)             ((0x0C000000&(data))>>26)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_ip_ac_obme_mode(data)             ((0x03000000&(data))>>24)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_pi_dc_obme_mode_sel(data)         ((0x00800000&(data))>>23)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_ip_dc_obme_mode_sel(data)         ((0x00400000&(data))>>22)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_pi_dc_obme_mode(data)             ((0x00300000&(data))>>20)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_ip_dc_obme_mode(data)             ((0x000C0000&(data))>>18)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_rbk_bv_y_idx(data)                ((0x0003FE00&(data))>>9)
#define  KME_VBUF_TOP_KME_VBUF_TOP_8C_get_vbuf_rbk_bv_x_idx(data)                (0x000001FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_EC                                           0x1809B2EC
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_reg_addr                                   "0xB809B2EC"
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_reg                                        0xB809B2EC
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_inst_addr                                  "0x0024"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_EC_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_EC_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_EC_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_EC_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_regr_vbuf_mulitin_bv_y_shift               (11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_regr_vbuf_mulitin_bv_x_shift               (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_regr_vbuf_mulitin_bv_y_mask                (0x001FF800)
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_regr_vbuf_mulitin_bv_x_mask                (0x000007FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_regr_vbuf_mulitin_bv_y(data)               (0x001FF800&((data)<<11))
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_regr_vbuf_mulitin_bv_x(data)               (0x000007FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_get_regr_vbuf_mulitin_bv_y(data)           ((0x001FF800&(data))>>11)
#define  KME_VBUF_TOP_KME_VBUF_TOP_EC_get_regr_vbuf_mulitin_bv_x(data)           (0x000007FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_F0                                           0x1809B2F0
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_reg_addr                                   "0xB809B2F0"
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_reg                                        0xB809B2F0
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_inst_addr                                  "0x0025"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_F0_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_F0_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_F0_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_F0_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_regr_vbuf_dm1_err_cnt_shift                (8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_regr_vbuf_dm0_err_cnt_shift                (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_regr_vbuf_dm1_err_cnt_mask                 (0x0000FF00)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_regr_vbuf_dm0_err_cnt_mask                 (0x000000FF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_regr_vbuf_dm1_err_cnt(data)                (0x0000FF00&((data)<<8))
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_regr_vbuf_dm0_err_cnt(data)                (0x000000FF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_get_regr_vbuf_dm1_err_cnt(data)            ((0x0000FF00&(data))>>8)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F0_get_regr_vbuf_dm0_err_cnt(data)            (0x000000FF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_F4                                           0x1809B2F4
#define  KME_VBUF_TOP_KME_VBUF_TOP_F4_reg_addr                                   "0xB809B2F4"
#define  KME_VBUF_TOP_KME_VBUF_TOP_F4_reg                                        0xB809B2F4
#define  KME_VBUF_TOP_KME_VBUF_TOP_F4_inst_addr                                  "0x0026"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_F4_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_F4_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_F4_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_F4_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_F4_regr_vbuf_dm0_fetch_cnt_shift              (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F4_regr_vbuf_dm0_fetch_cnt_mask               (0x0003FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F4_regr_vbuf_dm0_fetch_cnt(data)              (0x0003FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_F4_get_regr_vbuf_dm0_fetch_cnt(data)          (0x0003FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_F8                                           0x1809B2F8
#define  KME_VBUF_TOP_KME_VBUF_TOP_F8_reg_addr                                   "0xB809B2F8"
#define  KME_VBUF_TOP_KME_VBUF_TOP_F8_reg                                        0xB809B2F8
#define  KME_VBUF_TOP_KME_VBUF_TOP_F8_inst_addr                                  "0x0027"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_F8_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_F8_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_F8_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_F8_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_F8_regr_vbuf_dm1_fetch_cnt_shift              (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F8_regr_vbuf_dm1_fetch_cnt_mask               (0x0003FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_F8_regr_vbuf_dm1_fetch_cnt(data)              (0x0003FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_F8_get_regr_vbuf_dm1_fetch_cnt(data)          (0x0003FFFF&(data))

#define  KME_VBUF_TOP_KME_VBUF_TOP_FC                                           0x1809B2FC
#define  KME_VBUF_TOP_KME_VBUF_TOP_FC_reg_addr                                   "0xB809B2FC"
#define  KME_VBUF_TOP_KME_VBUF_TOP_FC_reg                                        0xB809B2FC
#define  KME_VBUF_TOP_KME_VBUF_TOP_FC_inst_addr                                  "0x0028"
#define  set_KME_VBUF_TOP_KME_VBUF_TOP_FC_reg(data)                              (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_FC_reg)=data)
#define  get_KME_VBUF_TOP_KME_VBUF_TOP_FC_reg                                    (*((volatile unsigned int*)KME_VBUF_TOP_KME_VBUF_TOP_FC_reg))
#define  KME_VBUF_TOP_KME_VBUF_TOP_FC_regr_me1_bv_crc_out_shift                  (0)
#define  KME_VBUF_TOP_KME_VBUF_TOP_FC_regr_me1_bv_crc_out_mask                   (0x0000FFFF)
#define  KME_VBUF_TOP_KME_VBUF_TOP_FC_regr_me1_bv_crc_out(data)                  (0x0000FFFF&(data))
#define  KME_VBUF_TOP_KME_VBUF_TOP_FC_get_regr_me1_bv_crc_out(data)              (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_VBUF_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vbuf_lfsr_seed_init:1;
        RBus_UInt32  vbuf_dehalo_show_sel:2;
        RBus_UInt32  vbuf_lbme_update_num_1row:8;
        RBus_UInt32  vbuf_update_en:1;
        RBus_UInt32  vbuf_vactive:9;
        RBus_UInt32  vbuf_hactive:9;
    };
}kme_vbuf_top_kme_vbuf_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_y_seed_init:16;
        RBus_UInt32  vbuf_ip_x_seed_init:16;
    };
}kme_vbuf_top_kme_vbuf_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_y_seed_init:16;
        RBus_UInt32  vbuf_pi_x_seed_init:16;
    };
}kme_vbuf_top_kme_vbuf_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_1st_lfsr_mask3_y:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask0_x:4;
    };
}kme_vbuf_top_kme_vbuf_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  vbuf_ip_1st_zmv_en:1;
        RBus_UInt32  vbuf_ip_1st_gmv_en:1;
        RBus_UInt32  vbuf_ip_1st_update3_en:1;
        RBus_UInt32  vbuf_ip_1st_update2_en:1;
        RBus_UInt32  vbuf_ip_1st_update1_en:1;
        RBus_UInt32  vbuf_ip_1st_update0_en:1;
        RBus_UInt32  vbuf_ip_1st_cand9_en:1;
        RBus_UInt32  vbuf_ip_1st_cand8_en:1;
        RBus_UInt32  vbuf_ip_1st_cand7_en:1;
        RBus_UInt32  vbuf_ip_1st_cand6_en:1;
        RBus_UInt32  vbuf_ip_1st_cand5_en:1;
        RBus_UInt32  vbuf_ip_1st_cand4_en:1;
        RBus_UInt32  vbuf_ip_1st_cand3_en:1;
        RBus_UInt32  vbuf_ip_1st_cand2_en:1;
        RBus_UInt32  vbuf_ip_1st_cand1_en:1;
        RBus_UInt32  vbuf_ip_1st_cand0_en:1;
        RBus_UInt32  vbuf_en:1;
    };
}kme_vbuf_top_kme_vbuf_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vbuf_pi_1st_zmv_en:1;
        RBus_UInt32  vbuf_pi_1st_gmv_en:1;
        RBus_UInt32  vbuf_pi_1st_update3_en:1;
        RBus_UInt32  vbuf_pi_1st_update2_en:1;
        RBus_UInt32  vbuf_pi_1st_update1_en:1;
        RBus_UInt32  vbuf_pi_1st_update0_en:1;
        RBus_UInt32  vbuf_pi_1st_cand9_en:1;
        RBus_UInt32  vbuf_pi_1st_cand8_en:1;
        RBus_UInt32  vbuf_pi_1st_cand7_en:1;
        RBus_UInt32  vbuf_pi_1st_cand6_en:1;
        RBus_UInt32  vbuf_pi_1st_cand5_en:1;
        RBus_UInt32  vbuf_pi_1st_cand4_en:1;
        RBus_UInt32  vbuf_pi_1st_cand3_en:1;
        RBus_UInt32  vbuf_pi_1st_cand2_en:1;
        RBus_UInt32  vbuf_pi_1st_cand1_en:1;
        RBus_UInt32  vbuf_pi_1st_cand0_en:1;
    };
}kme_vbuf_top_kme_vbuf_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vbuf_ip_1st_cand4_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand4_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand3_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand3_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand2_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand2_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand1_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand1_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand0_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand0_offsetx:3;
    };
}kme_vbuf_top_kme_vbuf_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vbuf_ip_1st_cand9_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand9_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand8_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand8_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand7_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand7_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand6_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand6_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand5_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand5_offsetx:3;
    };
}kme_vbuf_top_kme_vbuf_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  vbuf_ip_1st_update3_offsety:3;
        RBus_UInt32  vbuf_ip_1st_update3_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_update2_offsety:3;
        RBus_UInt32  vbuf_ip_1st_update2_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_update1_offsety:3;
        RBus_UInt32  vbuf_ip_1st_update1_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_update0_offsety:3;
        RBus_UInt32  vbuf_ip_1st_update0_offsetx:3;
    };
}kme_vbuf_top_kme_vbuf_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vbuf_pi_1st_cand4_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand4_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand3_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand3_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand2_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand2_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand1_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand1_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand0_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand0_offsetx:3;
    };
}kme_vbuf_top_kme_vbuf_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vbuf_pi_1st_cand9_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand9_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand8_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand8_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand7_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand7_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand6_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand6_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand5_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand5_offsetx:3;
    };
}kme_vbuf_top_kme_vbuf_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  vbuf_3dpr_l_mv_force_en:1;
        RBus_UInt32  vbuf_pi_1st_update3_offsety:3;
        RBus_UInt32  vbuf_pi_1st_update3_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_update2_offsety:3;
        RBus_UInt32  vbuf_pi_1st_update2_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_update1_offsety:3;
        RBus_UInt32  vbuf_pi_1st_update1_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_update0_offsety:3;
        RBus_UInt32  vbuf_pi_1st_update0_offsetx:3;
    };
}kme_vbuf_top_kme_vbuf_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_3dpr_r_force_mv:10;
        RBus_UInt32  vbuf_3dpr_l_force_mv:10;
        RBus_UInt32  vbuf_3dpr_r_mv_force_en:1;
        RBus_UInt32  kme_me_work_mode:2;
        RBus_UInt32  vbuf_lbme_trig_mid_row_num:9;
    };
}kme_vbuf_top_kme_vbuf_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  vbuf_wait_cycle_frame2_mv_trig:18;
    };
}kme_vbuf_top_kme_vbuf_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  vbuf_wait_cycle_frame2_me_trig:18;
    };
}kme_vbuf_top_kme_vbuf_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  vbuf_blk_rim_top:9;
        RBus_UInt32  vbuf_mvy_range:7;
        RBus_UInt32  vbuf_mvx_range:9;
    };
}kme_vbuf_top_kme_vbuf_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  vbuf_blk_rim_bot:9;
        RBus_UInt32  vbuf_blk_rim_right:9;
        RBus_UInt32  vbuf_blk_rim_left:9;
    };
}kme_vbuf_top_kme_vbuf_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  vbuf_pix_rim_bot:10;
        RBus_UInt32  vbuf_pix_rim_top:10;
    };
}kme_vbuf_top_kme_vbuf_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  vbuf_lbme_hv_ratio:1;
        RBus_UInt32  vbuf_lbme_v_addr_shift_bit:1;
        RBus_UInt32  vbuf_lbme_h_addr_shift_bit:1;
        RBus_UInt32  vbuf_pix_rim_right:10;
        RBus_UInt32  vbuf_pix_rim_left:10;
    };
}kme_vbuf_top_kme_vbuf_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  vbuf_ac_bypass_tag:1;
        RBus_UInt32  vbuf_dc_bypass_tag:1;
        RBus_UInt32  vbuf_invalid_cnt_th:5;
        RBus_UInt32  vbuf_out_of_range_cnt_th:5;
        RBus_UInt32  vbuf_rim_shift_en:1;
    };
}kme_vbuf_top_kme_vbuf_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  vbuf_gmv_sel:2;
    };
}kme_vbuf_top_kme_vbuf_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  vbuf_logo_enable:1;
        RBus_UInt32  vbuf_logolimit_coef_y:3;
        RBus_UInt32  vbuf_logolimit_coef_x:3;
        RBus_UInt32  vbuf_logo_searchy:5;
        RBus_UInt32  vbuf_logo_searchx:5;
        RBus_UInt32  vbuf_logo_limit_mode_sel:1;
        RBus_UInt32  vbuf_logo_limit_en:1;
    };
}kme_vbuf_top_kme_vbuf_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vbuf_self_upd_interval:8;
        RBus_UInt32  vbuf_dm_req_interval:8;
    };
}kme_vbuf_top_kme_vbuf_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_lfsr_mask3_y:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask0_x:4;
    };
}kme_vbuf_top_kme_vbuf_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_sc_debug_force_mv_x_sign:1;
        RBus_UInt32  vbuf_sc_debug_force_mv_x_int:8;
        RBus_UInt32  vbuf_sc_debug_force_mv_x_deci:2;
        RBus_UInt32  vbuf_sc_debug_force_mv_y_sign:1;
        RBus_UInt32  vbuf_sc_debug_force_mv_y_int:7;
        RBus_UInt32  vbuf_sc_debug_force_mv_y_deci:2;
        RBus_UInt32  vbuf_sc_wait_cycle:7;
        RBus_UInt32  vbuf_sc_debug_en:4;
    };
}kme_vbuf_top_kme_vbuf_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_multimin_debug_ip_y:10;
        RBus_UInt32  vbuf_multimin_debug_ip_x:11;
        RBus_UInt32  res1:10;
        RBus_UInt32  vbuf_multimin_debug_en:1;
    };
}kme_vbuf_top_kme_vbuf_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  vbuf_multimin_debug_pi_y:10;
        RBus_UInt32  vbuf_multimin_debug_pi_x:11;
    };
}kme_vbuf_top_kme_vbuf_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vbuf_multimin_pi_v_idx_bit_sel:4;
        RBus_UInt32  vbuf_multimin_pi_h_idx_bit_sel:4;
        RBus_UInt32  vbuf_multimin_ip_v_idx_bit_sel:4;
        RBus_UInt32  vbuf_multimin_ip_h_idx_bit_sel:4;
    };
}kme_vbuf_top_kme_vbuf_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kme_vbuf_sram_ls_value:1;
        RBus_UInt32  kme_vbuf_sram_ls_en:1;
        RBus_UInt32  vbuf_ppi_debug_mv_x:11;
        RBus_UInt32  vbuf_ppi_debug_mv_y:10;
        RBus_UInt32  vbuf_dm_ppi_debug_en:1;
    };
}kme_vbuf_top_kme_vbuf_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  vbuf_dm0_monitor_cnt:18;
    };
}kme_vbuf_top_kme_vbuf_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  vbuf_dm1_monitor_cnt:18;
    };
}kme_vbuf_top_kme_vbuf_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask3_y:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask0_x:4;
    };
}kme_vbuf_top_kme_vbuf_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask3_y:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask0_x:4;
    };
}kme_vbuf_top_kme_vbuf_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vbuf_meander_pix_rim_top:10;
        RBus_UInt32  vbuf_meander_blk_rim_bot:9;
        RBus_UInt32  vbuf_meander_blk_rim_top:9;
    };
}kme_vbuf_top_kme_vbuf_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  vbuf_me1_rb_tempconsis_sel:1;
        RBus_UInt32  vbuf_logo_debug_en:1;
    };
}kme_vbuf_top_kme_vbuf_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vbuf_pi_ac_obme_mode:2;
        RBus_UInt32  vbuf_ip_ac_obme_mode:2;
        RBus_UInt32  vbuf_pi_dc_obme_mode_sel:1;
        RBus_UInt32  vbuf_ip_dc_obme_mode_sel:1;
        RBus_UInt32  vbuf_pi_dc_obme_mode:2;
        RBus_UInt32  vbuf_ip_dc_obme_mode:2;
        RBus_UInt32  vbuf_rbk_bv_y_idx:9;
        RBus_UInt32  vbuf_rbk_bv_x_idx:9;
    };
}kme_vbuf_top_kme_vbuf_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  regr_vbuf_mulitin_bv_y:10;
        RBus_UInt32  regr_vbuf_mulitin_bv_x:11;
    };
}kme_vbuf_top_kme_vbuf_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  regr_vbuf_dm1_err_cnt:8;
        RBus_UInt32  regr_vbuf_dm0_err_cnt:8;
    };
}kme_vbuf_top_kme_vbuf_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  regr_vbuf_dm0_fetch_cnt:18;
    };
}kme_vbuf_top_kme_vbuf_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  regr_vbuf_dm1_fetch_cnt:18;
    };
}kme_vbuf_top_kme_vbuf_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  regr_me1_bv_crc_out:16;
    };
}kme_vbuf_top_kme_vbuf_top_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_VBUF_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_hactive:9;
        RBus_UInt32  vbuf_vactive:9;
        RBus_UInt32  vbuf_update_en:1;
        RBus_UInt32  vbuf_lbme_update_num_1row:8;
        RBus_UInt32  vbuf_dehalo_show_sel:2;
        RBus_UInt32  vbuf_lfsr_seed_init:1;
        RBus_UInt32  res1:2;
    };
}kme_vbuf_top_kme_vbuf_top_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_x_seed_init:16;
        RBus_UInt32  vbuf_ip_y_seed_init:16;
    };
}kme_vbuf_top_kme_vbuf_top_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_x_seed_init:16;
        RBus_UInt32  vbuf_pi_y_seed_init:16;
    };
}kme_vbuf_top_kme_vbuf_top_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_1st_lfsr_mask0_x:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_ip_1st_lfsr_mask3_y:4;
    };
}kme_vbuf_top_kme_vbuf_top_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_en:1;
        RBus_UInt32  vbuf_ip_1st_cand0_en:1;
        RBus_UInt32  vbuf_ip_1st_cand1_en:1;
        RBus_UInt32  vbuf_ip_1st_cand2_en:1;
        RBus_UInt32  vbuf_ip_1st_cand3_en:1;
        RBus_UInt32  vbuf_ip_1st_cand4_en:1;
        RBus_UInt32  vbuf_ip_1st_cand5_en:1;
        RBus_UInt32  vbuf_ip_1st_cand6_en:1;
        RBus_UInt32  vbuf_ip_1st_cand7_en:1;
        RBus_UInt32  vbuf_ip_1st_cand8_en:1;
        RBus_UInt32  vbuf_ip_1st_cand9_en:1;
        RBus_UInt32  vbuf_ip_1st_update0_en:1;
        RBus_UInt32  vbuf_ip_1st_update1_en:1;
        RBus_UInt32  vbuf_ip_1st_update2_en:1;
        RBus_UInt32  vbuf_ip_1st_update3_en:1;
        RBus_UInt32  vbuf_ip_1st_gmv_en:1;
        RBus_UInt32  vbuf_ip_1st_zmv_en:1;
        RBus_UInt32  res1:15;
    };
}kme_vbuf_top_kme_vbuf_top_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_cand0_en:1;
        RBus_UInt32  vbuf_pi_1st_cand1_en:1;
        RBus_UInt32  vbuf_pi_1st_cand2_en:1;
        RBus_UInt32  vbuf_pi_1st_cand3_en:1;
        RBus_UInt32  vbuf_pi_1st_cand4_en:1;
        RBus_UInt32  vbuf_pi_1st_cand5_en:1;
        RBus_UInt32  vbuf_pi_1st_cand6_en:1;
        RBus_UInt32  vbuf_pi_1st_cand7_en:1;
        RBus_UInt32  vbuf_pi_1st_cand8_en:1;
        RBus_UInt32  vbuf_pi_1st_cand9_en:1;
        RBus_UInt32  vbuf_pi_1st_update0_en:1;
        RBus_UInt32  vbuf_pi_1st_update1_en:1;
        RBus_UInt32  vbuf_pi_1st_update2_en:1;
        RBus_UInt32  vbuf_pi_1st_update3_en:1;
        RBus_UInt32  vbuf_pi_1st_gmv_en:1;
        RBus_UInt32  vbuf_pi_1st_zmv_en:1;
        RBus_UInt32  res1:16;
    };
}kme_vbuf_top_kme_vbuf_top_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_1st_cand0_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand0_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand1_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand1_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand2_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand2_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand3_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand3_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand4_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand4_offsety:3;
        RBus_UInt32  res1:2;
    };
}kme_vbuf_top_kme_vbuf_top_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_1st_cand5_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand5_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand6_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand6_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand7_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand7_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand8_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand8_offsety:3;
        RBus_UInt32  vbuf_ip_1st_cand9_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_cand9_offsety:3;
        RBus_UInt32  res1:2;
    };
}kme_vbuf_top_kme_vbuf_top_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_1st_update0_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_update0_offsety:3;
        RBus_UInt32  vbuf_ip_1st_update1_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_update1_offsety:3;
        RBus_UInt32  vbuf_ip_1st_update2_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_update2_offsety:3;
        RBus_UInt32  vbuf_ip_1st_update3_offsetx:3;
        RBus_UInt32  vbuf_ip_1st_update3_offsety:3;
        RBus_UInt32  res1:8;
    };
}kme_vbuf_top_kme_vbuf_top_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_cand0_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand0_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand1_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand1_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand2_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand2_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand3_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand3_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand4_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand4_offsety:3;
        RBus_UInt32  res1:2;
    };
}kme_vbuf_top_kme_vbuf_top_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_cand5_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand5_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand6_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand6_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand7_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand7_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand8_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand8_offsety:3;
        RBus_UInt32  vbuf_pi_1st_cand9_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_cand9_offsety:3;
        RBus_UInt32  res1:2;
    };
}kme_vbuf_top_kme_vbuf_top_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_update0_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_update0_offsety:3;
        RBus_UInt32  vbuf_pi_1st_update1_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_update1_offsety:3;
        RBus_UInt32  vbuf_pi_1st_update2_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_update2_offsety:3;
        RBus_UInt32  vbuf_pi_1st_update3_offsetx:3;
        RBus_UInt32  vbuf_pi_1st_update3_offsety:3;
        RBus_UInt32  vbuf_3dpr_l_mv_force_en:1;
        RBus_UInt32  res1:7;
    };
}kme_vbuf_top_kme_vbuf_top_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_lbme_trig_mid_row_num:9;
        RBus_UInt32  kme_me_work_mode:2;
        RBus_UInt32  vbuf_3dpr_r_mv_force_en:1;
        RBus_UInt32  vbuf_3dpr_l_force_mv:10;
        RBus_UInt32  vbuf_3dpr_r_force_mv:10;
    };
}kme_vbuf_top_kme_vbuf_top_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_wait_cycle_frame2_mv_trig:18;
        RBus_UInt32  res1:14;
    };
}kme_vbuf_top_kme_vbuf_top_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_wait_cycle_frame2_me_trig:18;
        RBus_UInt32  res1:14;
    };
}kme_vbuf_top_kme_vbuf_top_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_mvx_range:9;
        RBus_UInt32  vbuf_mvy_range:7;
        RBus_UInt32  vbuf_blk_rim_top:9;
        RBus_UInt32  res1:7;
    };
}kme_vbuf_top_kme_vbuf_top_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_blk_rim_left:9;
        RBus_UInt32  vbuf_blk_rim_right:9;
        RBus_UInt32  vbuf_blk_rim_bot:9;
        RBus_UInt32  res1:5;
    };
}kme_vbuf_top_kme_vbuf_top_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pix_rim_top:10;
        RBus_UInt32  vbuf_pix_rim_bot:10;
        RBus_UInt32  res1:12;
    };
}kme_vbuf_top_kme_vbuf_top_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pix_rim_left:10;
        RBus_UInt32  vbuf_pix_rim_right:10;
        RBus_UInt32  vbuf_lbme_h_addr_shift_bit:1;
        RBus_UInt32  vbuf_lbme_v_addr_shift_bit:1;
        RBus_UInt32  vbuf_lbme_hv_ratio:1;
        RBus_UInt32  res1:9;
    };
}kme_vbuf_top_kme_vbuf_top_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_rim_shift_en:1;
        RBus_UInt32  vbuf_out_of_range_cnt_th:5;
        RBus_UInt32  vbuf_invalid_cnt_th:5;
        RBus_UInt32  vbuf_dc_bypass_tag:1;
        RBus_UInt32  vbuf_ac_bypass_tag:1;
        RBus_UInt32  res1:19;
    };
}kme_vbuf_top_kme_vbuf_top_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_gmv_sel:2;
        RBus_UInt32  res1:30;
    };
}kme_vbuf_top_kme_vbuf_top_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_logo_limit_en:1;
        RBus_UInt32  vbuf_logo_limit_mode_sel:1;
        RBus_UInt32  vbuf_logo_searchx:5;
        RBus_UInt32  vbuf_logo_searchy:5;
        RBus_UInt32  vbuf_logolimit_coef_x:3;
        RBus_UInt32  vbuf_logolimit_coef_y:3;
        RBus_UInt32  vbuf_logo_enable:1;
        RBus_UInt32  res1:13;
    };
}kme_vbuf_top_kme_vbuf_top_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_dm_req_interval:8;
        RBus_UInt32  vbuf_self_upd_interval:8;
        RBus_UInt32  res1:16;
    };
}kme_vbuf_top_kme_vbuf_top_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_lfsr_mask0_x:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_pi_1st_lfsr_mask3_y:4;
    };
}kme_vbuf_top_kme_vbuf_top_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_sc_debug_en:4;
        RBus_UInt32  vbuf_sc_wait_cycle:7;
        RBus_UInt32  vbuf_sc_debug_force_mv_y_deci:2;
        RBus_UInt32  vbuf_sc_debug_force_mv_y_int:7;
        RBus_UInt32  vbuf_sc_debug_force_mv_y_sign:1;
        RBus_UInt32  vbuf_sc_debug_force_mv_x_deci:2;
        RBus_UInt32  vbuf_sc_debug_force_mv_x_int:8;
        RBus_UInt32  vbuf_sc_debug_force_mv_x_sign:1;
    };
}kme_vbuf_top_kme_vbuf_top_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_multimin_debug_en:1;
        RBus_UInt32  res1:10;
        RBus_UInt32  vbuf_multimin_debug_ip_x:11;
        RBus_UInt32  vbuf_multimin_debug_ip_y:10;
    };
}kme_vbuf_top_kme_vbuf_top_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_multimin_debug_pi_x:11;
        RBus_UInt32  vbuf_multimin_debug_pi_y:10;
        RBus_UInt32  res1:11;
    };
}kme_vbuf_top_kme_vbuf_top_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_multimin_ip_h_idx_bit_sel:4;
        RBus_UInt32  vbuf_multimin_ip_v_idx_bit_sel:4;
        RBus_UInt32  vbuf_multimin_pi_h_idx_bit_sel:4;
        RBus_UInt32  vbuf_multimin_pi_v_idx_bit_sel:4;
        RBus_UInt32  res1:16;
    };
}kme_vbuf_top_kme_vbuf_top_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_dm_ppi_debug_en:1;
        RBus_UInt32  vbuf_ppi_debug_mv_y:10;
        RBus_UInt32  vbuf_ppi_debug_mv_x:11;
        RBus_UInt32  kme_vbuf_sram_ls_en:1;
        RBus_UInt32  kme_vbuf_sram_ls_value:1;
        RBus_UInt32  res1:8;
    };
}kme_vbuf_top_kme_vbuf_top_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_dm0_monitor_cnt:18;
        RBus_UInt32  res1:14;
    };
}kme_vbuf_top_kme_vbuf_top_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_dm1_monitor_cnt:18;
        RBus_UInt32  res1:14;
    };
}kme_vbuf_top_kme_vbuf_top_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask0_x:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_ip_1st_sc_lfsr_mask3_y:4;
    };
}kme_vbuf_top_kme_vbuf_top_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask0_x:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask0_y:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask1_x:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask1_y:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask2_x:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask2_y:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask3_x:4;
        RBus_UInt32  vbuf_pi_1st_sc_lfsr_mask3_y:4;
    };
}kme_vbuf_top_kme_vbuf_top_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_meander_blk_rim_top:9;
        RBus_UInt32  vbuf_meander_blk_rim_bot:9;
        RBus_UInt32  vbuf_meander_pix_rim_top:10;
        RBus_UInt32  res1:4;
    };
}kme_vbuf_top_kme_vbuf_top_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_logo_debug_en:1;
        RBus_UInt32  vbuf_me1_rb_tempconsis_sel:1;
        RBus_UInt32  res1:30;
    };
}kme_vbuf_top_kme_vbuf_top_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vbuf_rbk_bv_x_idx:9;
        RBus_UInt32  vbuf_rbk_bv_y_idx:9;
        RBus_UInt32  vbuf_ip_dc_obme_mode:2;
        RBus_UInt32  vbuf_pi_dc_obme_mode:2;
        RBus_UInt32  vbuf_ip_dc_obme_mode_sel:1;
        RBus_UInt32  vbuf_pi_dc_obme_mode_sel:1;
        RBus_UInt32  vbuf_ip_ac_obme_mode:2;
        RBus_UInt32  vbuf_pi_ac_obme_mode:2;
        RBus_UInt32  res1:4;
    };
}kme_vbuf_top_kme_vbuf_top_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vbuf_mulitin_bv_x:11;
        RBus_UInt32  regr_vbuf_mulitin_bv_y:10;
        RBus_UInt32  res1:11;
    };
}kme_vbuf_top_kme_vbuf_top_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vbuf_dm0_err_cnt:8;
        RBus_UInt32  regr_vbuf_dm1_err_cnt:8;
        RBus_UInt32  res1:16;
    };
}kme_vbuf_top_kme_vbuf_top_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vbuf_dm0_fetch_cnt:18;
        RBus_UInt32  res1:14;
    };
}kme_vbuf_top_kme_vbuf_top_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_vbuf_dm1_fetch_cnt:18;
        RBus_UInt32  res1:14;
    };
}kme_vbuf_top_kme_vbuf_top_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_bv_crc_out:16;
        RBus_UInt32  res1:16;
    };
}kme_vbuf_top_kme_vbuf_top_fc_RBUS;




#endif 


#endif 
