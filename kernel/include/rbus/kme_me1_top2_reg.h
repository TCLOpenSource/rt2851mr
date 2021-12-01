/**
* @file Merlin5_MEMC_KME_ME1_TOP2
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_ME1_TOP2_REG_H_
#define _RBUS_KME_ME1_TOP2_REG_H_

#include "rbus_types.h"



//  KME_ME1_TOP2 Register Address
#define  KME_ME1_TOP2_KME_ME1_TOP2_00                                           0x1809B300
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_reg_addr                                   "0xB809B300"
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_reg                                        0xB809B300
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_inst_addr                                  "0x0000"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_00_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_00_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_00_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_00_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me2_gmvd_sel_shift                         (3)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me2_gmv_sel_shift                          (2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me1_gmvd_sel_shift                         (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me1_gmv_sel_shift                          (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me2_gmvd_sel_mask                          (0x00000008)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me2_gmv_sel_mask                           (0x00000004)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me1_gmvd_sel_mask                          (0x00000002)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me1_gmv_sel_mask                           (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me2_gmvd_sel(data)                         (0x00000008&((data)<<3))
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me2_gmv_sel(data)                          (0x00000004&((data)<<2))
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me1_gmvd_sel(data)                         (0x00000002&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_me1_gmv_sel(data)                          (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_get_me2_gmvd_sel(data)                     ((0x00000008&(data))>>3)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_get_me2_gmv_sel(data)                      ((0x00000004&(data))>>2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_get_me1_gmvd_sel(data)                     ((0x00000002&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_00_get_me1_gmv_sel(data)                      (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_04                                           0x1809B304
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_reg_addr                                   "0xB809B304"
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_reg                                        0xB809B304
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_inst_addr                                  "0x0001"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_04_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_04_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_04_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_04_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_me1_rmv_vact_shift                         (9)
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_me1_rmv_hact_shift                         (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_me1_rmv_vact_mask                          (0x0003FE00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_me1_rmv_hact_mask                          (0x000001FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_me1_rmv_vact(data)                         (0x0003FE00&((data)<<9))
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_me1_rmv_hact(data)                         (0x000001FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_get_me1_rmv_vact(data)                     ((0x0003FE00&(data))>>9)
#define  KME_ME1_TOP2_KME_ME1_TOP2_04_get_me1_rmv_hact(data)                     (0x000001FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_08                                           0x1809B308
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_reg_addr                                   "0xB809B308"
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_reg                                        0xB809B308
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_inst_addr                                  "0x0002"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_08_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_08_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_08_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_08_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_sad_thd_shift                      (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_init_sel_shift                     (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_init_mode_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_sad_thd_mask                       (0x1FFF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_init_sel_mask                      (0x00000002)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_init_mode_mask                     (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_sad_thd(data)                      (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_init_sel(data)                     (0x00000002&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_me1_rmv_init_mode(data)                    (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_get_me1_rmv_sad_thd(data)                  ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_get_me1_rmv_init_sel(data)                 ((0x00000002&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_08_get_me1_rmv_init_mode(data)                (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_0C                                           0x1809B30C
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_reg_addr                                   "0xB809B30C"
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_reg                                        0xB809B30C
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_inst_addr                                  "0x0003"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_0C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_0C_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_0C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_0C_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_me1_rmv_mvd_merge_thd_shift                (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_me1_rmv_mvd_cor_thd_shift                  (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_me1_rmv_mvd_merge_thd_mask                 (0x000FFF00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_me1_rmv_mvd_cor_thd_mask                   (0x000000FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_me1_rmv_mvd_merge_thd(data)                (0x000FFF00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_me1_rmv_mvd_cor_thd(data)                  (0x000000FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_get_me1_rmv_mvd_merge_thd(data)            ((0x000FFF00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_0C_get_me1_rmv_mvd_cor_thd(data)              (0x000000FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_10                                           0x1809B310
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_reg_addr                                   "0xB809B310"
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_reg                                        0xB809B310
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_inst_addr                                  "0x0004"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_10_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_10_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_10_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_10_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_me1_rmv_unconf_x2_shift                    (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_me1_rmv_unconf_x1_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_me1_rmv_unconf_x2_mask                     (0x0FFF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_me1_rmv_unconf_x1_mask                     (0x00000FFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_me1_rmv_unconf_x2(data)                    (0x0FFF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_me1_rmv_unconf_x1(data)                    (0x00000FFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_get_me1_rmv_unconf_x2(data)                ((0x0FFF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_10_get_me1_rmv_unconf_x1(data)                (0x00000FFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_14                                           0x1809B314
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_reg_addr                                   "0xB809B314"
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_reg                                        0xB809B314
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_inst_addr                                  "0x0005"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_14_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_14_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_14_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_14_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_me1_rmv_unconf_y2_shift                    (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_me1_rmv_unconf_y1_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_me1_rmv_unconf_y2_mask                     (0x0FFF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_me1_rmv_unconf_y1_mask                     (0x00000FFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_me1_rmv_unconf_y2(data)                    (0x0FFF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_me1_rmv_unconf_y1(data)                    (0x00000FFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_get_me1_rmv_unconf_y2(data)                ((0x0FFF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_14_get_me1_rmv_unconf_y1(data)                (0x00000FFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_18                                           0x1809B318
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_reg_addr                                   "0xB809B318"
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_reg                                        0xB809B318
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_inst_addr                                  "0x0006"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_18_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_18_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_18_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_18_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_me1_rmv_cnt_alpha_shift                    (10)
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_me1_rmv_unconf_slp_shift                   (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_me1_rmv_cnt_alpha_mask                     (0x00007C00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_me1_rmv_unconf_slp_mask                    (0x000003FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_me1_rmv_cnt_alpha(data)                    (0x00007C00&((data)<<10))
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_me1_rmv_unconf_slp(data)                   (0x000003FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_get_me1_rmv_cnt_alpha(data)                ((0x00007C00&(data))>>10)
#define  KME_ME1_TOP2_KME_ME1_TOP2_18_get_me1_rmv_unconf_slp(data)               (0x000003FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_1C                                           0x1809B31C
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_reg_addr                                   "0xB809B31C"
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_reg                                        0xB809B31C
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_inst_addr                                  "0x0007"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_1C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_1C_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_1C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_1C_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_me1_gmv_mode_shift                         (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_me1_gmv_init_mode_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_me1_gmv_mode_mask                          (0x00000006)
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_me1_gmv_init_mode_mask                     (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_me1_gmv_mode(data)                         (0x00000006&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_me1_gmv_init_mode(data)                    (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_get_me1_gmv_mode(data)                     ((0x00000006&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_1C_get_me1_gmv_init_mode(data)                (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_20                                           0x1809B320
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_reg_addr                                   "0xB809B320"
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_reg                                        0xB809B320
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_inst_addr                                  "0x0008"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_20_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_20_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_20_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_20_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_me1_gmv_mvd_merge_thd_shift                (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_me1_gmv_mvd_cor_thd_shift                  (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_me1_gmv_mvd_merge_thd_mask                 (0x000FFF00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_me1_gmv_mvd_cor_thd_mask                   (0x000000FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_me1_gmv_mvd_merge_thd(data)                (0x000FFF00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_me1_gmv_mvd_cor_thd(data)                  (0x000000FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_get_me1_gmv_mvd_merge_thd(data)            ((0x000FFF00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_20_get_me1_gmv_mvd_cor_thd(data)              (0x000000FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_24                                           0x1809B324
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_reg_addr                                   "0xB809B324"
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_reg                                        0xB809B324
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_inst_addr                                  "0x0009"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_24_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_24_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_24_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_24_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_me1_gmv_unconf_x2_shift                    (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_me1_gmv_unconf_x1_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_me1_gmv_unconf_x2_mask                     (0x0FFF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_me1_gmv_unconf_x1_mask                     (0x00000FFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_me1_gmv_unconf_x2(data)                    (0x0FFF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_me1_gmv_unconf_x1(data)                    (0x00000FFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_get_me1_gmv_unconf_x2(data)                ((0x0FFF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_24_get_me1_gmv_unconf_x1(data)                (0x00000FFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_28                                           0x1809B328
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_reg_addr                                   "0xB809B328"
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_reg                                        0xB809B328
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_inst_addr                                  "0x000A"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_28_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_28_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_28_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_28_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_me1_gmv_unconf_y2_shift                    (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_me1_gmv_unconf_y1_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_me1_gmv_unconf_y2_mask                     (0x0FFF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_me1_gmv_unconf_y1_mask                     (0x00000FFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_me1_gmv_unconf_y2(data)                    (0x0FFF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_me1_gmv_unconf_y1(data)                    (0x00000FFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_get_me1_gmv_unconf_y2(data)                ((0x0FFF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_28_get_me1_gmv_unconf_y1(data)                (0x00000FFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_2C                                           0x1809B32C
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_reg_addr                                   "0xB809B32C"
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_reg                                        0xB809B32C
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_inst_addr                                  "0x000B"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_2C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_2C_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_2C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_2C_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_psad_bld_alpha_sel_shift                   (21)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_psad_bld_alpha_in_shift                    (15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_me1_gmv_cnt_alpha_shift                    (10)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_me1_gmv_unconf_slp_shift                   (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_psad_bld_alpha_sel_mask                    (0x00200000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_psad_bld_alpha_in_mask                     (0x001F8000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_me1_gmv_cnt_alpha_mask                     (0x00007C00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_me1_gmv_unconf_slp_mask                    (0x000003FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_psad_bld_alpha_sel(data)                   (0x00200000&((data)<<21))
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_psad_bld_alpha_in(data)                    (0x001F8000&((data)<<15))
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_me1_gmv_cnt_alpha(data)                    (0x00007C00&((data)<<10))
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_me1_gmv_unconf_slp(data)                   (0x000003FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_get_psad_bld_alpha_sel(data)               ((0x00200000&(data))>>21)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_get_psad_bld_alpha_in(data)                ((0x001F8000&(data))>>15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_get_me1_gmv_cnt_alpha(data)                ((0x00007C00&(data))>>10)
#define  KME_ME1_TOP2_KME_ME1_TOP2_2C_get_me1_gmv_unconf_slp(data)               (0x000003FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_30                                           0x1809B330
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_reg_addr                                   "0xB809B330"
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_reg                                        0xB809B330
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_inst_addr                                  "0x000C"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_30_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_30_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_30_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_30_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_loop_bvpk_sad_th_shift            (15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_bv_mvdiff_thd_shift               (5)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_bv_mvdiff_force_en_shift          (4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_me1_ac_psad_bld_mode_shift                 (2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_me1_dc_psad_bld_mode_shift                 (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_loop_bvpk_sad_th_mask             (0x01FF8000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_bv_mvdiff_thd_mask                (0x00007FE0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_bv_mvdiff_force_en_mask           (0x00000010)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_me1_ac_psad_bld_mode_mask                  (0x0000000C)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_me1_dc_psad_bld_mode_mask                  (0x00000003)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_loop_bvpk_sad_th(data)            (0x01FF8000&((data)<<15))
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_bv_mvdiff_thd(data)               (0x00007FE0&((data)<<5))
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_vec_eval_bv_mvdiff_force_en(data)          (0x00000010&((data)<<4))
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_me1_ac_psad_bld_mode(data)                 (0x0000000C&((data)<<2))
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_me1_dc_psad_bld_mode(data)                 (0x00000003&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_get_vec_eval_loop_bvpk_sad_th(data)        ((0x01FF8000&(data))>>15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_get_vec_eval_bv_mvdiff_thd(data)           ((0x00007FE0&(data))>>5)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_get_vec_eval_bv_mvdiff_force_en(data)      ((0x00000010&(data))>>4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_get_me1_ac_psad_bld_mode(data)             ((0x0000000C&(data))>>2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_30_get_me1_dc_psad_bld_mode(data)             (0x00000003&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_34                                           0x1809B334
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_reg_addr                                   "0xB809B334"
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_reg                                        0xB809B334
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_inst_addr                                  "0x000D"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_34_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_34_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_34_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_34_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_mvdiff_th_shift                (15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_sad_diff_off_shift             (14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_sad_diff_th_shift              (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_en_shift                       (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_mvdiff_th_mask                 (0x01FF8000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_sad_diff_off_mask              (0x00004000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_sad_diff_th_mask               (0x00003FFE)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_en_mask                        (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_mvdiff_th(data)                (0x01FF8000&((data)<<15))
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_sad_diff_off(data)             (0x00004000&((data)<<14))
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_sad_diff_th(data)              (0x00003FFE&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_me1_acdc_pk_en(data)                       (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_get_me1_acdc_pk_mvdiff_th(data)            ((0x01FF8000&(data))>>15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_get_me1_acdc_pk_sad_diff_off(data)         ((0x00004000&(data))>>14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_get_me1_acdc_pk_sad_diff_th(data)          ((0x00003FFE&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_34_get_me1_acdc_pk_en(data)                   (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_38                                           0x1809B338
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_reg_addr                                   "0xB809B338"
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_reg                                        0xB809B338
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_inst_addr                                  "0x000E"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_38_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_38_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_38_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_38_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_bv_ac_sad_th_shift                (13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_small_mv_off_shift             (12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_s_off_shift             (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_s_th_shift              (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_off_shift               (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_bv_ac_sad_th_mask                 (0x03FFE000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_small_mv_off_mask              (0x00001000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_s_off_mask              (0x00000800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_s_th_mask               (0x000007FE)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_off_mask                (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_bv_ac_sad_th(data)                (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_small_mv_off(data)             (0x00001000&((data)<<12))
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_s_off(data)             (0x00000800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_s_th(data)              (0x000007FE&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_me1_acdc_pk_mvdiff_off(data)               (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_get_me1_acdc_bv_ac_sad_th(data)            ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_get_me1_acdc_pk_small_mv_off(data)         ((0x00001000&(data))>>12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_get_me1_acdc_pk_mvdiff_s_off(data)         ((0x00000800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_get_me1_acdc_pk_mvdiff_s_th(data)          ((0x000007FE&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_38_get_me1_acdc_pk_mvdiff_off(data)           (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_3C                                           0x1809B33C
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_reg_addr                                   "0xB809B33C"
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_reg                                        0xB809B33C
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_inst_addr                                  "0x000F"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_3C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_3C_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_3C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_3C_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_dtl_off_shift                  (31)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_dtl_th_shift                   (23)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_apl_off_shift                  (22)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_apl_th_shift                   (14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_bv1_follow_en_shift            (13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_bv1_ref_shift                  (12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_mvdiff_s_range_off_shift          (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_mvdiff_s_range_shift              (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_bv_ac_sad_off_shift               (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_dtl_off_mask                   (0x80000000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_dtl_th_mask                    (0x7F800000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_apl_off_mask                   (0x00400000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_apl_th_mask                    (0x003FC000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_bv1_follow_en_mask             (0x00002000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_bv1_ref_mask                   (0x00001000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_mvdiff_s_range_off_mask           (0x00000800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_mvdiff_s_range_mask               (0x000007FE)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_bv_ac_sad_off_mask                (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_dtl_off(data)                  (0x80000000&((data)<<31))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_dtl_th(data)                   (0x7F800000&((data)<<23))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_apl_off(data)                  (0x00400000&((data)<<22))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_apl_th(data)                   (0x003FC000&((data)<<14))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_bv1_follow_en(data)            (0x00002000&((data)<<13))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_pk_bv1_ref(data)                  (0x00001000&((data)<<12))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_mvdiff_s_range_off(data)          (0x00000800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_mvdiff_s_range(data)              (0x000007FE&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_me1_acdc_bv_ac_sad_off(data)               (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_pk_dtl_off(data)              ((0x80000000&(data))>>31)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_pk_dtl_th(data)               ((0x7F800000&(data))>>23)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_pk_apl_off(data)              ((0x00400000&(data))>>22)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_pk_apl_th(data)               ((0x003FC000&(data))>>14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_pk_bv1_follow_en(data)        ((0x00002000&(data))>>13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_pk_bv1_ref(data)              ((0x00001000&(data))>>12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_mvdiff_s_range_off(data)      ((0x00000800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_mvdiff_s_range(data)          ((0x000007FE&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_3C_get_me1_acdc_bv_ac_sad_off(data)           (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_40                                           0x1809B340
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_reg_addr                                   "0xB809B340"
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_reg                                        0xB809B340
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_inst_addr                                  "0x0010"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_40_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_40_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_40_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_40_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_vy_shift               (18)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_vx_shift               (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_gmv_gain_shift         (3)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_sel_shift              (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_en_shift               (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_vy_mask                (0x07FC0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_vx_mask                (0x0003FF00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_gmv_gain_mask          (0x000000F8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_sel_mask               (0x00000006)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_en_mask                (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_vy(data)               (0x07FC0000&((data)<<18))
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_vx(data)               (0x0003FF00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_gmv_gain(data)         (0x000000F8&((data)<<3))
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_sel(data)              (0x00000006&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_me1_loop_acbv_limit_en(data)               (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_get_me1_loop_acbv_limit_vy(data)           ((0x07FC0000&(data))>>18)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_get_me1_loop_acbv_limit_vx(data)           ((0x0003FF00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_get_me1_loop_acbv_limit_gmv_gain(data)     ((0x000000F8&(data))>>3)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_get_me1_loop_acbv_limit_sel(data)          ((0x00000006&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_40_get_me1_loop_acbv_limit_en(data)           (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_44                                           0x1809B344
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_reg_addr                                   "0xB809B344"
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_reg                                        0xB809B344
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_inst_addr                                  "0x0011"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_44_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_44_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_44_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_44_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_me1_loop_acbv_limit_mv_x2_shift            (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_me1_loop_acbv_limit_mv_x1_shift            (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_me1_loop_acbv_limit_mv_x2_mask             (0x003FF800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_me1_loop_acbv_limit_mv_x1_mask             (0x000007FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_me1_loop_acbv_limit_mv_x2(data)            (0x003FF800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_me1_loop_acbv_limit_mv_x1(data)            (0x000007FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_get_me1_loop_acbv_limit_mv_x2(data)        ((0x003FF800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_44_get_me1_loop_acbv_limit_mv_x1(data)        (0x000007FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_48                                           0x1809B348
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_reg_addr                                   "0xB809B348"
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_reg                                        0xB809B348
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_inst_addr                                  "0x0012"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_48_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_48_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_48_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_48_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_s_shift             (10)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_y2_shift            (5)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_y1_shift            (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_s_mask              (0x0007FC00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_y2_mask             (0x000003E0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_y1_mask             (0x0000001F)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_s(data)             (0x0007FC00&((data)<<10))
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_y2(data)            (0x000003E0&((data)<<5))
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_me1_loop_acbv_limit_mv_y1(data)            (0x0000001F&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_get_me1_loop_acbv_limit_mv_s(data)         ((0x0007FC00&(data))>>10)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_get_me1_loop_acbv_limit_mv_y2(data)        ((0x000003E0&(data))>>5)
#define  KME_ME1_TOP2_KME_ME1_TOP2_48_get_me1_loop_acbv_limit_mv_y1(data)        (0x0000001F&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_4C                                           0x1809B34C
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_reg_addr                                   "0xB809B34C"
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_reg                                        0xB809B34C
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_inst_addr                                  "0x0013"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_4C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_4C_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_4C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_4C_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_mvdiff_th_shift              (15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_sad_th_shift                 (2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_en_shift                     (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin_sel_shift                     (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_mvdiff_th_mask               (0x0FFF8000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_sad_th_mask                  (0x00007FFC)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_en_mask                      (0x00000002)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin_sel_mask                      (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_mvdiff_th(data)              (0x0FFF8000&((data)<<15))
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_sad_th(data)                 (0x00007FFC&((data)<<2))
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin1_en(data)                     (0x00000002&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_me1_multimin_sel(data)                     (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_get_me1_multimin1_mvdiff_th(data)          ((0x0FFF8000&(data))>>15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_get_me1_multimin1_sad_th(data)             ((0x00007FFC&(data))>>2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_get_me1_multimin1_en(data)                 ((0x00000002&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_4C_get_me1_multimin_sel(data)                 (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_50                                           0x1809B350
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_reg_addr                                   "0xB809B350"
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_reg                                        0xB809B350
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_inst_addr                                  "0x0014"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_50_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_50_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_50_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_50_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_multimin2_en_shift                     (27)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_multimin1_force_bv1_shift              (26)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_mv1_gmv_diff_th_shift                  (13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_mv0_gmv_diff_th_shift                  (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_multimin2_en_mask                      (0x08000000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_multimin1_force_bv1_mask               (0x04000000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_mv1_gmv_diff_th_mask                   (0x03FFE000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_mv0_gmv_diff_th_mask                   (0x00001FFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_multimin2_en(data)                     (0x08000000&((data)<<27))
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_multimin1_force_bv1(data)              (0x04000000&((data)<<26))
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_mv1_gmv_diff_th(data)                  (0x03FFE000&((data)<<13))
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_me1_mv0_gmv_diff_th(data)                  (0x00001FFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_get_me1_multimin2_en(data)                 ((0x08000000&(data))>>27)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_get_me1_multimin1_force_bv1(data)          ((0x04000000&(data))>>26)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_get_me1_mv1_gmv_diff_th(data)              ((0x03FFE000&(data))>>13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_50_get_me1_mv0_gmv_diff_th(data)              (0x00001FFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_54                                           0x1809B354
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_reg_addr                                   "0xB809B354"
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_reg                                        0xB809B354
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_inst_addr                                  "0x0015"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_54_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_54_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_54_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_54_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_mvdiff_th_shift              (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_apl_gain_shift               (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_sad_gain_shift               (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_mvdiff_th_mask               (0x1FFF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_apl_gain_mask                (0x0000FF00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_sad_gain_mask                (0x000000FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_mvdiff_th(data)              (0x1FFF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_apl_gain(data)               (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_me1_multimin2_sad_gain(data)               (0x000000FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_get_me1_multimin2_mvdiff_th(data)          ((0x1FFF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_get_me1_multimin2_apl_gain(data)           ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_54_get_me1_multimin2_sad_gain(data)           (0x000000FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_58                                           0x1809B358
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_reg_addr                                   "0xB809B358"
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_reg                                        0xB809B358
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_inst_addr                                  "0x0016"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_58_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_58_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_58_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_58_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_force_bv1_shift              (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_nonzero_off_shift            (15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_mv_small_off_shift           (14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_sad_th_shift                 (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_mvdiff_off_shift             (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_force_bv1_mask               (0x00010000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_nonzero_off_mask             (0x00008000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_mv_small_off_mask            (0x00004000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_sad_th_mask                  (0x00003FFE)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_mvdiff_off_mask              (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_force_bv1(data)              (0x00010000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_nonzero_off(data)            (0x00008000&((data)<<15))
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_mv_small_off(data)           (0x00004000&((data)<<14))
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_sad_th(data)                 (0x00003FFE&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_me1_multimin2_mvdiff_off(data)             (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_get_me1_multimin2_force_bv1(data)          ((0x00010000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_get_me1_multimin2_nonzero_off(data)        ((0x00008000&(data))>>15)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_get_me1_multimin2_mv_small_off(data)       ((0x00004000&(data))>>14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_get_me1_multimin2_sad_th(data)             ((0x00003FFE&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_58_get_me1_multimin2_mvdiff_off(data)         (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_5C                                           0x1809B35C
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_reg_addr                                   "0xB809B35C"
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_reg                                        0xB809B35C
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_inst_addr                                  "0x0017"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_5C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_5C_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_5C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_5C_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_dbg_force_bv1_shift                    (3)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_multimin_dbg_out_en_shift              (2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_ac_limit_dbg_out_en_shift              (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_acdc_dbg_out_en_shift                  (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_dbg_force_bv1_mask                     (0x00FFFFF8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_multimin_dbg_out_en_mask               (0x00000004)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_ac_limit_dbg_out_en_mask               (0x00000002)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_acdc_dbg_out_en_mask                   (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_dbg_force_bv1(data)                    (0x00FFFFF8&((data)<<3))
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_multimin_dbg_out_en(data)              (0x00000004&((data)<<2))
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_ac_limit_dbg_out_en(data)              (0x00000002&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_me1_acdc_dbg_out_en(data)                  (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_get_me1_dbg_force_bv1(data)                ((0x00FFFFF8&(data))>>3)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_get_me1_multimin_dbg_out_en(data)          ((0x00000004&(data))>>2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_get_me1_ac_limit_dbg_out_en(data)          ((0x00000002&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_5C_get_me1_acdc_dbg_out_en(data)              (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_60                                           0x1809B360
#define  KME_ME1_TOP2_KME_ME1_TOP2_60_reg_addr                                   "0xB809B360"
#define  KME_ME1_TOP2_KME_ME1_TOP2_60_reg                                        0xB809B360
#define  KME_ME1_TOP2_KME_ME1_TOP2_60_inst_addr                                  "0x0018"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_60_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_60_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_60_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_60_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_60_me1_dbg_force_bv2_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_60_me1_dbg_force_bv2_mask                     (0x001FFFFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_60_me1_dbg_force_bv2(data)                    (0x001FFFFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_60_get_me1_dbg_force_bv2(data)                (0x001FFFFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_64                                           0x1809B364
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_reg_addr                                   "0xB809B364"
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_reg                                        0xB809B364
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_inst_addr                                  "0x0019"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_64_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_64_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_64_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_64_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_loop_bvpk_sad_th_shift         (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_bv_mvdiff_thd_shift            (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_bv_mvdiff_force_en_shift       (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_loop_bvpk_sad_th_mask          (0x001FF800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_bv_mvdiff_thd_mask             (0x000007FE)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_bv_mvdiff_force_en_mask        (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_loop_bvpk_sad_th(data)         (0x001FF800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_bv_mvdiff_thd(data)            (0x000007FE&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_vec_eval_ac_bv_mvdiff_force_en(data)       (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_get_vec_eval_ac_loop_bvpk_sad_th(data)     ((0x001FF800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_get_vec_eval_ac_bv_mvdiff_thd(data)        ((0x000007FE&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_64_get_vec_eval_ac_bv_mvdiff_force_en(data)   (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_80                                           0x1809B380
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_reg_addr                                   "0xB809B380"
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_reg                                        0xB809B380
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_inst_addr                                  "0x001A"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_80_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_80_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_80_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_80_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_mvy_shift                       (19)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_mvx_shift                       (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_en_shift                        (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_mvy_mask                        (0x1FF80000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_mvx_mask                        (0x0007FF00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_en_mask                         (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_mvy(data)                       (0x1FF80000&((data)<<19))
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_mvx(data)                       (0x0007FF00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_me1_sw_gmv_en(data)                        (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_get_me1_sw_gmv_mvy(data)                   ((0x1FF80000&(data))>>19)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_get_me1_sw_gmv_mvx(data)                   ((0x0007FF00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_80_get_me1_sw_gmv_en(data)                    (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_84                                           0x1809B384
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_reg_addr                                   "0xB809B384"
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_reg                                        0xB809B384
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_inst_addr                                  "0x001B"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_84_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_84_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_84_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_84_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_me1_sw_gmv_unconf_shift                    (20)
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_me1_sw_gmv_cnt_shift                       (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_me1_sw_gmv_unconf_mask                     (0xFFF00000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_me1_sw_gmv_cnt_mask                        (0x0001FFFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_me1_sw_gmv_unconf(data)                    (0xFFF00000&((data)<<20))
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_me1_sw_gmv_cnt(data)                       (0x0001FFFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_get_me1_sw_gmv_unconf(data)                ((0xFFF00000&(data))>>20)
#define  KME_ME1_TOP2_KME_ME1_TOP2_84_get_me1_sw_gmv_cnt(data)                   (0x0001FFFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_88                                           0x1809B388
#define  KME_ME1_TOP2_KME_ME1_TOP2_88_reg_addr                                   "0xB809B388"
#define  KME_ME1_TOP2_KME_ME1_TOP2_88_reg                                        0xB809B388
#define  KME_ME1_TOP2_KME_ME1_TOP2_88_inst_addr                                  "0x001C"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_88_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_88_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_88_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_88_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_88_me1_sw_rmv_en_shift                        (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_88_me1_sw_rmv_en_mask                         (0xFFFFFFFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_88_me1_sw_rmv_en(data)                        (0xFFFFFFFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_88_get_me1_sw_rmv_en(data)                    (0xFFFFFFFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_8C                                           0x1809B38C
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_reg_addr                                   "0xB809B38C"
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_reg                                        0xB809B38C
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_inst_addr                                  "0x001D"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_8C_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_8C_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_8C_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_8C_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_prd_sad_diff_th_shift                  (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_prd_mvdiff_th_shift                    (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_gmv_prd_en_shift                       (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_prd_sad_diff_th_mask                   (0x00FFF800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_prd_mvdiff_th_mask                     (0x000007FE)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_gmv_prd_en_mask                        (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_prd_sad_diff_th(data)                  (0x00FFF800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_prd_mvdiff_th(data)                    (0x000007FE&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_me1_gmv_prd_en(data)                       (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_get_me1_prd_sad_diff_th(data)              ((0x00FFF800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_get_me1_prd_mvdiff_th(data)                ((0x000007FE&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_8C_get_me1_gmv_prd_en(data)                   (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_90                                           0x1809B390
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_reg_addr                                   "0xB809B390"
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_reg                                        0xB809B390
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_inst_addr                                  "0x001E"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_90_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_90_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_90_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_90_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_dtl_thr_high_shift                 (24)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_dtl_thr_low_shift                  (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_apl_thr_high_shift                 (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_apl_thr_low_shift                  (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_dtl_thr_high_mask                  (0xFF000000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_dtl_thr_low_mask                   (0x00FF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_apl_thr_high_mask                  (0x0000FF00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_apl_thr_low_mask                   (0x000000FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_dtl_thr_high(data)                 (0xFF000000&((data)<<24))
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_dtl_thr_low(data)                  (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_apl_thr_high(data)                 (0x0000FF00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_me1_prd_apl_thr_low(data)                  (0x000000FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_get_me1_prd_dtl_thr_high(data)             ((0xFF000000&(data))>>24)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_get_me1_prd_dtl_thr_low(data)              ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_get_me1_prd_apl_thr_high(data)             ((0x0000FF00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_90_get_me1_prd_apl_thr_low(data)              (0x000000FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_B0                                           0x1809B3B0
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_reg_addr                                   "0xB809B3B0"
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_reg                                        0xB809B3B0
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_inst_addr                                  "0x001F"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_B0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_B0_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_B0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_B0_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_regr_me1_gmv_grp0_mvy_shift                (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_regr_me1_gmv_grp0_mvx_shift                (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_regr_me1_gmv_grp0_mvy_mask                 (0x001FF800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_regr_me1_gmv_grp0_mvx_mask                 (0x000007FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_regr_me1_gmv_grp0_mvy(data)                (0x001FF800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_regr_me1_gmv_grp0_mvx(data)                (0x000007FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_get_regr_me1_gmv_grp0_mvy(data)            ((0x001FF800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B0_get_regr_me1_gmv_grp0_mvx(data)            (0x000007FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_B4                                           0x1809B3B4
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_reg_addr                                   "0xB809B3B4"
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_reg                                        0xB809B3B4
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_inst_addr                                  "0x0020"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_B4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_B4_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_B4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_B4_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_regr_me1_gmv_grp1_mvy_shift                (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_regr_me1_gmv_grp1_mvx_shift                (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_regr_me1_gmv_grp1_mvy_mask                 (0x001FF800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_regr_me1_gmv_grp1_mvx_mask                 (0x000007FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_regr_me1_gmv_grp1_mvy(data)                (0x001FF800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_regr_me1_gmv_grp1_mvx(data)                (0x000007FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_get_regr_me1_gmv_grp1_mvy(data)            ((0x001FF800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_B4_get_regr_me1_gmv_grp1_mvx(data)            (0x000007FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_BC                                           0x1809B3BC
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_reg_addr                                   "0xB809B3BC"
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_reg                                        0xB809B3BC
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_inst_addr                                  "0x0021"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_BC_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_BC_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_BC_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_BC_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_regr_me1_gmv_grp1_unconf_shift             (12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_regr_me1_gmv_grp0_unconf_shift             (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_regr_me1_gmv_grp1_unconf_mask              (0x00FFF000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_regr_me1_gmv_grp0_unconf_mask              (0x00000FFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_regr_me1_gmv_grp1_unconf(data)             (0x00FFF000&((data)<<12))
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_regr_me1_gmv_grp0_unconf(data)             (0x00000FFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_get_regr_me1_gmv_grp1_unconf(data)         ((0x00FFF000&(data))>>12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_BC_get_regr_me1_gmv_grp0_unconf(data)         (0x00000FFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_C0                                           0x1809B3C0
#define  KME_ME1_TOP2_KME_ME1_TOP2_C0_reg_addr                                   "0xB809B3C0"
#define  KME_ME1_TOP2_KME_ME1_TOP2_C0_reg                                        0xB809B3C0
#define  KME_ME1_TOP2_KME_ME1_TOP2_C0_inst_addr                                  "0x0022"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_C0_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_C0_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_C0_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_C0_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_C0_regr_me1_gmv_grp0_cnt_shift                (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_C0_regr_me1_gmv_grp0_cnt_mask                 (0x0001FFFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_C0_regr_me1_gmv_grp0_cnt(data)                (0x0001FFFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_C0_get_regr_me1_gmv_grp0_cnt(data)            (0x0001FFFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_C4                                           0x1809B3C4
#define  KME_ME1_TOP2_KME_ME1_TOP2_C4_reg_addr                                   "0xB809B3C4"
#define  KME_ME1_TOP2_KME_ME1_TOP2_C4_reg                                        0xB809B3C4
#define  KME_ME1_TOP2_KME_ME1_TOP2_C4_inst_addr                                  "0x0023"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_C4_reg(data)                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_C4_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_C4_reg                                    (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_C4_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_C4_regr_me1_gmv_grp1_cnt_shift                (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_C4_regr_me1_gmv_grp1_cnt_mask                 (0x0001FFFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_C4_regr_me1_gmv_grp1_cnt(data)                (0x0001FFFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_C4_get_regr_me1_gmv_grp1_cnt(data)            (0x0001FFFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0                                        0x1809B3C8
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_reg_addr                                "0xB809B3C8"
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_reg                                     0xB809B3C8
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_inst_addr                               "0x0024"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_reg(data)                           (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_reg                                 (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_dtl_h_shift                     (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_dtl_l_shift                     (9)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_force_en_shift                  (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_ac_alpha_shift                  (2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_det_en_shift                    (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_dtl_h_mask                      (0x00FF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_dtl_l_mask                      (0x00007E00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_force_en_mask                   (0x00000100)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_ac_alpha_mask                   (0x000000FC)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_det_en_mask                     (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_dtl_h(data)                     (0x00FF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_dtl_l(data)                     (0x00007E00&((data)<<9))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_force_en(data)                  (0x00000100&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_ac_alpha(data)                  (0x000000FC&((data)<<2))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_me1_shm_det_en(data)                    (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_get_me1_shm_dtl_h(data)                 ((0x00FF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_get_me1_shm_dtl_l(data)                 ((0x00007E00&(data))>>9)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_get_me1_shm_force_en(data)              ((0x00000100&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_get_me1_shm_ac_alpha(data)              ((0x000000FC&(data))>>2)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_0_get_me1_shm_det_en(data)                (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1                                        0x1809B3CC
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_reg_addr                                "0xB809B3CC"
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_reg                                     0xB809B3CC
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_inst_addr                               "0x0025"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_reg(data)                           (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_reg                                 (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_me1_shm_max_sad_th_shift                (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_me1_shm_min_sad_th_shift                (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_me1_shm_max_sad_th_mask                 (0x000FFF00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_me1_shm_min_sad_th_mask                 (0x000000FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_me1_shm_max_sad_th(data)                (0x000FFF00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_me1_shm_min_sad_th(data)                (0x000000FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_get_me1_shm_max_sad_th(data)            ((0x000FFF00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_SHM_1_get_me1_shm_min_sad_th(data)            (0x000000FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL                                  0x1809B3D0
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_reg_addr                          "0xB809B3D0"
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_reg                               0xB809B3D0
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_inst_addr                         "0x0026"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_reg(data)                     (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_reg                           (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_gmv_near_gain_shift           (29)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_gmv_near_th_max_shift         (24)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_sad_th0_shift       (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_sad_th1_shift       (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_occpred_range_shift           (4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_occpred_en_shift              (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_gmv_en_shift        (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_gmv_near_gain_mask            (0xE0000000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_gmv_near_th_max_mask          (0x1F000000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_sad_th0_mask        (0x001F0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_sad_th1_mask        (0x00001F00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_occpred_range_mask            (0x000000F0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_occpred_en_mask               (0x00000002)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_gmv_en_mask         (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_gmv_near_gain(data)           (0xE0000000&((data)<<29))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_gmv_near_th_max(data)         (0x1F000000&((data)<<24))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_sad_th0(data)       (0x001F0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_sad_th1(data)       (0x00001F00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_occpred_range(data)           (0x000000F0&((data)<<4))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_occpred_en(data)              (0x00000002&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_me1_post_near_gmv_en(data)        (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_get_me1_gmv_near_gain(data)       ((0xE0000000&(data))>>29)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_get_me1_gmv_near_th_max(data)     ((0x1F000000&(data))>>24)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_get_me1_post_near_sad_th0(data)   ((0x001F0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_get_me1_post_near_sad_th1(data)   ((0x00001F00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_get_me1_occpred_range(data)       ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_get_me1_occpred_en(data)          ((0x00000002&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_POST_MV_SEL_get_me1_post_near_gmv_en(data)    (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE                                    0x1809B3D4
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_reg_addr                            "0xB809B3D4"
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_reg                                 0xB809B3D4
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_inst_addr                           "0x0027"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_reg(data)                       (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_reg                             (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_post_apl_edge_th_shift          (14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_pfv_apl_range_shift             (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_apl_range_l_shift_shift         (4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_apl_range_h_shift_shift         (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_post_apl_edge_th_mask           (0x000FC000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_pfv_apl_range_mask              (0x00003F00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_apl_range_l_shift_mask          (0x000000F0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_apl_range_h_shift_mask          (0x0000000F)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_post_apl_edge_th(data)          (0x000FC000&((data)<<14))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_pfv_apl_range(data)             (0x00003F00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_apl_range_l_shift(data)         (0x000000F0&((data)<<4))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_me1_apl_range_h_shift(data)         (0x0000000F&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_get_me1_post_apl_edge_th(data)      ((0x000FC000&(data))>>14)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_get_me1_pfv_apl_range(data)         ((0x00003F00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_get_me1_apl_range_l_shift(data)     ((0x000000F0&(data))>>4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_get_me1_apl_range_h_shift(data)     (0x0000000F&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1                                  0x1809B3D8
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_reg_addr                          "0xB809B3D8"
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_reg                               0xB809B3D8
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_inst_addr                         "0x0028"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_reg(data)                     (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_reg                           (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_me1_pfv_apl_h_shift               (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_me1_pfv_apl_l_shift               (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_me1_pfv_apl_h_mask                (0x03FF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_me1_pfv_apl_l_mask                (0x000003FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_me1_pfv_apl_h(data)               (0x03FF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_me1_pfv_apl_l(data)               (0x000003FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_get_me1_pfv_apl_h(data)           ((0x03FF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_APL_JUDGE_1_get_me1_pfv_apl_l(data)           (0x000003FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET                                     0x1809B3DC
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_reg_addr                             "0xB809B3DC"
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_reg                                  0xB809B3DC
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_inst_addr                            "0x0029"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_reg(data)                        (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_reg                              (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_replace_mv_shift     (21)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_replace_type_shift   (20)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_limit_shift          (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_th_shift             (13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_en_shift             (12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_cddpnt_half_shift   (11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_th_shift            (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_en_shift            (7)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_mask_shift         (4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_th_shift           (1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_en_shift           (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_replace_mv_mask      (0x01E00000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_replace_type_mask    (0x00100000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_limit_mask           (0x000F0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_th_mask              (0x0000E000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_en_mask              (0x00001000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_cddpnt_half_mask    (0x00000800)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_th_mask             (0x00000700)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_en_mask             (0x00000080)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_mask_mask          (0x00000070)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_th_mask            (0x0000000E)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_en_mask            (0x00000001)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_replace_mv(data)     (0x01E00000&((data)<<21))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_replace_type(data)   (0x00100000&((data)<<20))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_limit(data)          (0x000F0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_th(data)             (0x0000E000&((data)<<13))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_bv_en(data)             (0x00001000&((data)<<12))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_cddpnt_half(data)   (0x00000800&((data)<<11))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_th(data)            (0x00000700&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_zmv_en(data)            (0x00000080&((data)<<7))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_mask(data)         (0x00000070&((data)<<4))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_th(data)           (0x0000000E&((data)<<1))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_me1_high_det_updt_en(data)           (0x00000001&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_bv_replace_mv(data) ((0x01E00000&(data))>>21)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_bv_replace_type(data) ((0x00100000&(data))>>20)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_bv_limit(data)      ((0x000F0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_bv_th(data)         ((0x0000E000&(data))>>13)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_bv_en(data)         ((0x00001000&(data))>>12)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_zmv_cddpnt_half(data) ((0x00000800&(data))>>11)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_zmv_th(data)        ((0x00000700&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_zmv_en(data)        ((0x00000080&(data))>>7)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_updt_mask(data)     ((0x00000070&(data))>>4)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_updt_th(data)       ((0x0000000E&(data))>>1)
#define  KME_ME1_TOP2_KME_ME1_TOP2_HIGH_DET_get_me1_high_det_updt_en(data)       (0x00000001&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3                                    0x1809B3E0
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_reg_addr                            "0xB809B3E0"
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_reg                                 0xB809B3E0
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_inst_addr                           "0x002A"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_reg(data)                       (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_reg                             (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_me1_smobj_penalty_en_shift          (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_me1_smobj_penalty_en_mask           (0xFFFFFFFF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_me1_smobj_penalty_en(data)          (0xFFFFFFFF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_3_get_me1_smobj_penalty_en(data)      (0xFFFFFFFF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4                                    0x1809B3E4
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_reg_addr                            "0xB809B3E4"
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_reg                                 0xB809B3E4
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_inst_addr                           "0x002B"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_reg(data)                       (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_reg                             (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt2_max_shift (24)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt2_min_shift (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt1_th_shift  (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt2_max_mask  (0x7F000000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt2_min_mask  (0x007F0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt1_th_mask   (0x000003FF)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt2_max(data) (0x7F000000&((data)<<24))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt2_min(data) (0x007F0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_me1_smobj_penalty_gmvcnt1_th(data)  (0x000003FF&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_get_me1_smobj_penalty_gmvcnt2_max(data) ((0x7F000000&(data))>>24)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_get_me1_smobj_penalty_gmvcnt2_min(data) ((0x007F0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_4_get_me1_smobj_penalty_gmvcnt1_th(data) (0x000003FF&(data))

#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5                                    0x1809B3E8
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_reg_addr                            "0xB809B3E8"
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_reg                                 0xB809B3E8
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_inst_addr                           "0x002C"
#define  set_KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_reg(data)                       (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_reg)=data)
#define  get_KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_reg                             (*((volatile unsigned int*)KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_reg))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_value_shift       (16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_gmvcnt2_mvdiff_th_shift (8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_gmvcnt1_mvdiff_th_shift (0)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_value_mask        (0x03FF0000)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_gmvcnt2_mvdiff_th_mask (0x00007F00)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_gmvcnt1_mvdiff_th_mask (0x0000007F)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_value(data)       (0x03FF0000&((data)<<16))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_gmvcnt2_mvdiff_th(data) (0x00007F00&((data)<<8))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_me1_smobj_penalty_gmvcnt1_mvdiff_th(data) (0x0000007F&(data))
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_get_me1_smobj_penalty_value(data)   ((0x03FF0000&(data))>>16)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_get_me1_smobj_penalty_gmvcnt2_mvdiff_th(data) ((0x00007F00&(data))>>8)
#define  KME_ME1_TOP2_KME_ME1_TOP2_GMVCOST_5_get_me1_smobj_penalty_gmvcnt1_mvdiff_th(data) (0x0000007F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_ME1_TOP2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  me2_gmvd_sel:1;
        RBus_UInt32  me2_gmv_sel:1;
        RBus_UInt32  me1_gmvd_sel:1;
        RBus_UInt32  me1_gmv_sel:1;
    };
}kme_me1_top2_kme_me1_top2_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  me1_rmv_vact:9;
        RBus_UInt32  me1_rmv_hact:9;
    };
}kme_me1_top2_kme_me1_top2_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_rmv_sad_thd:13;
        RBus_UInt32  res2:14;
        RBus_UInt32  me1_rmv_init_sel:1;
        RBus_UInt32  me1_rmv_init_mode:1;
    };
}kme_me1_top2_kme_me1_top2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  me1_rmv_mvd_merge_thd:12;
        RBus_UInt32  me1_rmv_mvd_cor_thd:8;
    };
}kme_me1_top2_kme_me1_top2_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_rmv_unconf_x2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  me1_rmv_unconf_x1:12;
    };
}kme_me1_top2_kme_me1_top2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_rmv_unconf_y2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  me1_rmv_unconf_y1:12;
    };
}kme_me1_top2_kme_me1_top2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  me1_rmv_cnt_alpha:5;
        RBus_UInt32  me1_rmv_unconf_slp:10;
    };
}kme_me1_top2_kme_me1_top2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  me1_gmv_mode:2;
        RBus_UInt32  me1_gmv_init_mode:1;
    };
}kme_me1_top2_kme_me1_top2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  me1_gmv_mvd_merge_thd:12;
        RBus_UInt32  me1_gmv_mvd_cor_thd:8;
    };
}kme_me1_top2_kme_me1_top2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_gmv_unconf_x2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  me1_gmv_unconf_x1:12;
    };
}kme_me1_top2_kme_me1_top2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_gmv_unconf_y2:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  me1_gmv_unconf_y1:12;
    };
}kme_me1_top2_kme_me1_top2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  psad_bld_alpha_sel:1;
        RBus_UInt32  psad_bld_alpha_in:6;
        RBus_UInt32  me1_gmv_cnt_alpha:5;
        RBus_UInt32  me1_gmv_unconf_slp:10;
    };
}kme_me1_top2_kme_me1_top2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  vec_eval_loop_bvpk_sad_th:10;
        RBus_UInt32  vec_eval_bv_mvdiff_thd:10;
        RBus_UInt32  vec_eval_bv_mvdiff_force_en:1;
        RBus_UInt32  me1_ac_psad_bld_mode:2;
        RBus_UInt32  me1_dc_psad_bld_mode:2;
    };
}kme_me1_top2_kme_me1_top2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  me1_acdc_pk_mvdiff_th:10;
        RBus_UInt32  me1_acdc_pk_sad_diff_off:1;
        RBus_UInt32  me1_acdc_pk_sad_diff_th:13;
        RBus_UInt32  me1_acdc_pk_en:1;
    };
}kme_me1_top2_kme_me1_top2_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_acdc_bv_ac_sad_th:13;
        RBus_UInt32  me1_acdc_pk_small_mv_off:1;
        RBus_UInt32  me1_acdc_pk_mvdiff_s_off:1;
        RBus_UInt32  me1_acdc_pk_mvdiff_s_th:10;
        RBus_UInt32  me1_acdc_pk_mvdiff_off:1;
    };
}kme_me1_top2_kme_me1_top2_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_acdc_pk_dtl_off:1;
        RBus_UInt32  me1_acdc_pk_dtl_th:8;
        RBus_UInt32  me1_acdc_pk_apl_off:1;
        RBus_UInt32  me1_acdc_pk_apl_th:8;
        RBus_UInt32  me1_acdc_pk_bv1_follow_en:1;
        RBus_UInt32  me1_acdc_pk_bv1_ref:1;
        RBus_UInt32  me1_acdc_mvdiff_s_range_off:1;
        RBus_UInt32  me1_acdc_mvdiff_s_range:10;
        RBus_UInt32  me1_acdc_bv_ac_sad_off:1;
    };
}kme_me1_top2_kme_me1_top2_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  me1_loop_acbv_limit_vy:9;
        RBus_UInt32  me1_loop_acbv_limit_vx:10;
        RBus_UInt32  me1_loop_acbv_limit_gmv_gain:5;
        RBus_UInt32  me1_loop_acbv_limit_sel:2;
        RBus_UInt32  me1_loop_acbv_limit_en:1;
    };
}kme_me1_top2_kme_me1_top2_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  me1_loop_acbv_limit_mv_x2:11;
        RBus_UInt32  me1_loop_acbv_limit_mv_x1:11;
    };
}kme_me1_top2_kme_me1_top2_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  me1_loop_acbv_limit_mv_s:9;
        RBus_UInt32  me1_loop_acbv_limit_mv_y2:5;
        RBus_UInt32  me1_loop_acbv_limit_mv_y1:5;
    };
}kme_me1_top2_kme_me1_top2_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_multimin1_mvdiff_th:13;
        RBus_UInt32  me1_multimin1_sad_th:13;
        RBus_UInt32  me1_multimin1_en:1;
        RBus_UInt32  me1_multimin_sel:1;
    };
}kme_me1_top2_kme_me1_top2_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_multimin2_en:1;
        RBus_UInt32  me1_multimin1_force_bv1:1;
        RBus_UInt32  me1_mv1_gmv_diff_th:13;
        RBus_UInt32  me1_mv0_gmv_diff_th:13;
    };
}kme_me1_top2_kme_me1_top2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_multimin2_mvdiff_th:13;
        RBus_UInt32  me1_multimin2_apl_gain:8;
        RBus_UInt32  me1_multimin2_sad_gain:8;
    };
}kme_me1_top2_kme_me1_top2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  me1_multimin2_force_bv1:1;
        RBus_UInt32  me1_multimin2_nonzero_off:1;
        RBus_UInt32  me1_multimin2_mv_small_off:1;
        RBus_UInt32  me1_multimin2_sad_th:13;
        RBus_UInt32  me1_multimin2_mvdiff_off:1;
    };
}kme_me1_top2_kme_me1_top2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_dbg_force_bv1:21;
        RBus_UInt32  me1_multimin_dbg_out_en:1;
        RBus_UInt32  me1_ac_limit_dbg_out_en:1;
        RBus_UInt32  me1_acdc_dbg_out_en:1;
    };
}kme_me1_top2_kme_me1_top2_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  me1_dbg_force_bv2:21;
    };
}kme_me1_top2_kme_me1_top2_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  vec_eval_ac_loop_bvpk_sad_th:10;
        RBus_UInt32  vec_eval_ac_bv_mvdiff_thd:10;
        RBus_UInt32  vec_eval_ac_bv_mvdiff_force_en:1;
    };
}kme_me1_top2_kme_me1_top2_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sw_gmv_mvy:10;
        RBus_UInt32  me1_sw_gmv_mvx:11;
        RBus_UInt32  res2:7;
        RBus_UInt32  me1_sw_gmv_en:1;
    };
}kme_me1_top2_kme_me1_top2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sw_gmv_unconf:12;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sw_gmv_cnt:17;
    };
}kme_me1_top2_kme_me1_top2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sw_rmv_en:32;
    };
}kme_me1_top2_kme_me1_top2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_prd_sad_diff_th:13;
        RBus_UInt32  me1_prd_mvdiff_th:10;
        RBus_UInt32  me1_gmv_prd_en:1;
    };
}kme_me1_top2_kme_me1_top2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_prd_dtl_thr_high:8;
        RBus_UInt32  me1_prd_dtl_thr_low:8;
        RBus_UInt32  me1_prd_apl_thr_high:8;
        RBus_UInt32  me1_prd_apl_thr_low:8;
    };
}kme_me1_top2_kme_me1_top2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  regr_me1_gmv_grp0_mvy:10;
        RBus_UInt32  regr_me1_gmv_grp0_mvx:11;
    };
}kme_me1_top2_kme_me1_top2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  regr_me1_gmv_grp1_mvy:10;
        RBus_UInt32  regr_me1_gmv_grp1_mvx:11;
    };
}kme_me1_top2_kme_me1_top2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  regr_me1_gmv_grp1_unconf:12;
        RBus_UInt32  regr_me1_gmv_grp0_unconf:12;
    };
}kme_me1_top2_kme_me1_top2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  regr_me1_gmv_grp0_cnt:17;
    };
}kme_me1_top2_kme_me1_top2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  regr_me1_gmv_grp1_cnt:17;
    };
}kme_me1_top2_kme_me1_top2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  me1_shm_dtl_h:8;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_shm_dtl_l:6;
        RBus_UInt32  me1_shm_force_en:1;
        RBus_UInt32  me1_shm_ac_alpha:6;
        RBus_UInt32  res3:1;
        RBus_UInt32  me1_shm_det_en:1;
    };
}kme_me1_top2_kme_me1_top2_shm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  me1_shm_max_sad_th:12;
        RBus_UInt32  me1_shm_min_sad_th:8;
    };
}kme_me1_top2_kme_me1_top2_shm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_near_gain:3;
        RBus_UInt32  me1_gmv_near_th_max:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_post_near_sad_th0:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_post_near_sad_th1:5;
        RBus_UInt32  me1_occpred_range:4;
        RBus_UInt32  res3:2;
        RBus_UInt32  me1_occpred_en:1;
        RBus_UInt32  me1_post_near_gmv_en:1;
    };
}kme_me1_top2_kme_me1_top2_post_mv_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  me1_post_apl_edge_th:6;
        RBus_UInt32  me1_pfv_apl_range:6;
        RBus_UInt32  me1_apl_range_l_shift:4;
        RBus_UInt32  me1_apl_range_h_shift:4;
    };
}kme_me1_top2_kme_me1_top2_apl_judge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_pfv_apl_h:10;
        RBus_UInt32  res2:6;
        RBus_UInt32  me1_pfv_apl_l:10;
    };
}kme_me1_top2_kme_me1_top2_apl_judge_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  me1_high_det_bv_replace_mv:4;
        RBus_UInt32  me1_high_det_bv_replace_type:1;
        RBus_UInt32  me1_high_det_bv_limit:4;
        RBus_UInt32  me1_high_det_bv_th:3;
        RBus_UInt32  me1_high_det_bv_en:1;
        RBus_UInt32  me1_high_det_zmv_cddpnt_half:1;
        RBus_UInt32  me1_high_det_zmv_th:3;
        RBus_UInt32  me1_high_det_zmv_en:1;
        RBus_UInt32  me1_high_det_updt_mask:3;
        RBus_UInt32  me1_high_det_updt_th:3;
        RBus_UInt32  me1_high_det_updt_en:1;
    };
}kme_me1_top2_kme_me1_top2_high_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_smobj_penalty_en:32;
    };
}kme_me1_top2_kme_me1_top2_gmvcost_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_smobj_penalty_gmvcnt2_max:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_smobj_penalty_gmvcnt2_min:7;
        RBus_UInt32  res3:6;
        RBus_UInt32  me1_smobj_penalty_gmvcnt1_th:10;
    };
}kme_me1_top2_kme_me1_top2_gmvcost_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_smobj_penalty_value:10;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_smobj_penalty_gmvcnt2_mvdiff_th:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  me1_smobj_penalty_gmvcnt1_mvdiff_th:7;
    };
}kme_me1_top2_kme_me1_top2_gmvcost_5_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_ME1_TOP2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_sel:1;
        RBus_UInt32  me1_gmvd_sel:1;
        RBus_UInt32  me2_gmv_sel:1;
        RBus_UInt32  me2_gmvd_sel:1;
        RBus_UInt32  res1:28;
    };
}kme_me1_top2_kme_me1_top2_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rmv_hact:9;
        RBus_UInt32  me1_rmv_vact:9;
        RBus_UInt32  res1:14;
    };
}kme_me1_top2_kme_me1_top2_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rmv_init_mode:1;
        RBus_UInt32  me1_rmv_init_sel:1;
        RBus_UInt32  res1:14;
        RBus_UInt32  me1_rmv_sad_thd:13;
        RBus_UInt32  res2:3;
    };
}kme_me1_top2_kme_me1_top2_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rmv_mvd_cor_thd:8;
        RBus_UInt32  me1_rmv_mvd_merge_thd:12;
        RBus_UInt32  res1:12;
    };
}kme_me1_top2_kme_me1_top2_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rmv_unconf_x1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_rmv_unconf_x2:12;
        RBus_UInt32  res2:4;
    };
}kme_me1_top2_kme_me1_top2_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rmv_unconf_y1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_rmv_unconf_y2:12;
        RBus_UInt32  res2:4;
    };
}kme_me1_top2_kme_me1_top2_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_rmv_unconf_slp:10;
        RBus_UInt32  me1_rmv_cnt_alpha:5;
        RBus_UInt32  res1:17;
    };
}kme_me1_top2_kme_me1_top2_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_init_mode:1;
        RBus_UInt32  me1_gmv_mode:2;
        RBus_UInt32  res1:29;
    };
}kme_me1_top2_kme_me1_top2_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_mvd_cor_thd:8;
        RBus_UInt32  me1_gmv_mvd_merge_thd:12;
        RBus_UInt32  res1:12;
    };
}kme_me1_top2_kme_me1_top2_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_unconf_x1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_gmv_unconf_x2:12;
        RBus_UInt32  res2:4;
    };
}kme_me1_top2_kme_me1_top2_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_unconf_y1:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  me1_gmv_unconf_y2:12;
        RBus_UInt32  res2:4;
    };
}kme_me1_top2_kme_me1_top2_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_unconf_slp:10;
        RBus_UInt32  me1_gmv_cnt_alpha:5;
        RBus_UInt32  psad_bld_alpha_in:6;
        RBus_UInt32  psad_bld_alpha_sel:1;
        RBus_UInt32  res1:10;
    };
}kme_me1_top2_kme_me1_top2_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_dc_psad_bld_mode:2;
        RBus_UInt32  me1_ac_psad_bld_mode:2;
        RBus_UInt32  vec_eval_bv_mvdiff_force_en:1;
        RBus_UInt32  vec_eval_bv_mvdiff_thd:10;
        RBus_UInt32  vec_eval_loop_bvpk_sad_th:10;
        RBus_UInt32  res1:7;
    };
}kme_me1_top2_kme_me1_top2_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_acdc_pk_en:1;
        RBus_UInt32  me1_acdc_pk_sad_diff_th:13;
        RBus_UInt32  me1_acdc_pk_sad_diff_off:1;
        RBus_UInt32  me1_acdc_pk_mvdiff_th:10;
        RBus_UInt32  res1:7;
    };
}kme_me1_top2_kme_me1_top2_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_acdc_pk_mvdiff_off:1;
        RBus_UInt32  me1_acdc_pk_mvdiff_s_th:10;
        RBus_UInt32  me1_acdc_pk_mvdiff_s_off:1;
        RBus_UInt32  me1_acdc_pk_small_mv_off:1;
        RBus_UInt32  me1_acdc_bv_ac_sad_th:13;
        RBus_UInt32  res1:6;
    };
}kme_me1_top2_kme_me1_top2_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_acdc_bv_ac_sad_off:1;
        RBus_UInt32  me1_acdc_mvdiff_s_range:10;
        RBus_UInt32  me1_acdc_mvdiff_s_range_off:1;
        RBus_UInt32  me1_acdc_pk_bv1_ref:1;
        RBus_UInt32  me1_acdc_pk_bv1_follow_en:1;
        RBus_UInt32  me1_acdc_pk_apl_th:8;
        RBus_UInt32  me1_acdc_pk_apl_off:1;
        RBus_UInt32  me1_acdc_pk_dtl_th:8;
        RBus_UInt32  me1_acdc_pk_dtl_off:1;
    };
}kme_me1_top2_kme_me1_top2_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_loop_acbv_limit_en:1;
        RBus_UInt32  me1_loop_acbv_limit_sel:2;
        RBus_UInt32  me1_loop_acbv_limit_gmv_gain:5;
        RBus_UInt32  me1_loop_acbv_limit_vx:10;
        RBus_UInt32  me1_loop_acbv_limit_vy:9;
        RBus_UInt32  res1:5;
    };
}kme_me1_top2_kme_me1_top2_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_loop_acbv_limit_mv_x1:11;
        RBus_UInt32  me1_loop_acbv_limit_mv_x2:11;
        RBus_UInt32  res1:10;
    };
}kme_me1_top2_kme_me1_top2_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_loop_acbv_limit_mv_y1:5;
        RBus_UInt32  me1_loop_acbv_limit_mv_y2:5;
        RBus_UInt32  me1_loop_acbv_limit_mv_s:9;
        RBus_UInt32  res1:13;
    };
}kme_me1_top2_kme_me1_top2_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_multimin_sel:1;
        RBus_UInt32  me1_multimin1_en:1;
        RBus_UInt32  me1_multimin1_sad_th:13;
        RBus_UInt32  me1_multimin1_mvdiff_th:13;
        RBus_UInt32  res1:4;
    };
}kme_me1_top2_kme_me1_top2_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_mv0_gmv_diff_th:13;
        RBus_UInt32  me1_mv1_gmv_diff_th:13;
        RBus_UInt32  me1_multimin1_force_bv1:1;
        RBus_UInt32  me1_multimin2_en:1;
        RBus_UInt32  res1:4;
    };
}kme_me1_top2_kme_me1_top2_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_multimin2_sad_gain:8;
        RBus_UInt32  me1_multimin2_apl_gain:8;
        RBus_UInt32  me1_multimin2_mvdiff_th:13;
        RBus_UInt32  res1:3;
    };
}kme_me1_top2_kme_me1_top2_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_multimin2_mvdiff_off:1;
        RBus_UInt32  me1_multimin2_sad_th:13;
        RBus_UInt32  me1_multimin2_mv_small_off:1;
        RBus_UInt32  me1_multimin2_nonzero_off:1;
        RBus_UInt32  me1_multimin2_force_bv1:1;
        RBus_UInt32  res1:15;
    };
}kme_me1_top2_kme_me1_top2_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_acdc_dbg_out_en:1;
        RBus_UInt32  me1_ac_limit_dbg_out_en:1;
        RBus_UInt32  me1_multimin_dbg_out_en:1;
        RBus_UInt32  me1_dbg_force_bv1:21;
        RBus_UInt32  res1:8;
    };
}kme_me1_top2_kme_me1_top2_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_dbg_force_bv2:21;
        RBus_UInt32  res1:11;
    };
}kme_me1_top2_kme_me1_top2_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vec_eval_ac_bv_mvdiff_force_en:1;
        RBus_UInt32  vec_eval_ac_bv_mvdiff_thd:10;
        RBus_UInt32  vec_eval_ac_loop_bvpk_sad_th:10;
        RBus_UInt32  res1:11;
    };
}kme_me1_top2_kme_me1_top2_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sw_gmv_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  me1_sw_gmv_mvx:11;
        RBus_UInt32  me1_sw_gmv_mvy:10;
        RBus_UInt32  res2:3;
    };
}kme_me1_top2_kme_me1_top2_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sw_gmv_cnt:17;
        RBus_UInt32  res1:3;
        RBus_UInt32  me1_sw_gmv_unconf:12;
    };
}kme_me1_top2_kme_me1_top2_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_sw_rmv_en:32;
    };
}kme_me1_top2_kme_me1_top2_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_gmv_prd_en:1;
        RBus_UInt32  me1_prd_mvdiff_th:10;
        RBus_UInt32  me1_prd_sad_diff_th:13;
        RBus_UInt32  res1:8;
    };
}kme_me1_top2_kme_me1_top2_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_prd_apl_thr_low:8;
        RBus_UInt32  me1_prd_apl_thr_high:8;
        RBus_UInt32  me1_prd_dtl_thr_low:8;
        RBus_UInt32  me1_prd_dtl_thr_high:8;
    };
}kme_me1_top2_kme_me1_top2_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_gmv_grp0_mvx:11;
        RBus_UInt32  regr_me1_gmv_grp0_mvy:10;
        RBus_UInt32  res1:11;
    };
}kme_me1_top2_kme_me1_top2_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_gmv_grp1_mvx:11;
        RBus_UInt32  regr_me1_gmv_grp1_mvy:10;
        RBus_UInt32  res1:11;
    };
}kme_me1_top2_kme_me1_top2_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_gmv_grp0_unconf:12;
        RBus_UInt32  regr_me1_gmv_grp1_unconf:12;
        RBus_UInt32  res1:8;
    };
}kme_me1_top2_kme_me1_top2_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_gmv_grp0_cnt:17;
        RBus_UInt32  res1:15;
    };
}kme_me1_top2_kme_me1_top2_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_me1_gmv_grp1_cnt:17;
        RBus_UInt32  res1:15;
    };
}kme_me1_top2_kme_me1_top2_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_shm_det_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_shm_ac_alpha:6;
        RBus_UInt32  me1_shm_force_en:1;
        RBus_UInt32  me1_shm_dtl_l:6;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_shm_dtl_h:8;
        RBus_UInt32  res3:8;
    };
}kme_me1_top2_kme_me1_top2_shm_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_shm_min_sad_th:8;
        RBus_UInt32  me1_shm_max_sad_th:12;
        RBus_UInt32  res1:12;
    };
}kme_me1_top2_kme_me1_top2_shm_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_post_near_gmv_en:1;
        RBus_UInt32  me1_occpred_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  me1_occpred_range:4;
        RBus_UInt32  me1_post_near_sad_th1:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  me1_post_near_sad_th0:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  me1_gmv_near_th_max:5;
        RBus_UInt32  me1_gmv_near_gain:3;
    };
}kme_me1_top2_kme_me1_top2_post_mv_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_apl_range_h_shift:4;
        RBus_UInt32  me1_apl_range_l_shift:4;
        RBus_UInt32  me1_pfv_apl_range:6;
        RBus_UInt32  me1_post_apl_edge_th:6;
        RBus_UInt32  res1:12;
    };
}kme_me1_top2_kme_me1_top2_apl_judge_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_pfv_apl_l:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_pfv_apl_h:10;
        RBus_UInt32  res2:6;
    };
}kme_me1_top2_kme_me1_top2_apl_judge_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_high_det_updt_en:1;
        RBus_UInt32  me1_high_det_updt_th:3;
        RBus_UInt32  me1_high_det_updt_mask:3;
        RBus_UInt32  me1_high_det_zmv_en:1;
        RBus_UInt32  me1_high_det_zmv_th:3;
        RBus_UInt32  me1_high_det_zmv_cddpnt_half:1;
        RBus_UInt32  me1_high_det_bv_en:1;
        RBus_UInt32  me1_high_det_bv_th:3;
        RBus_UInt32  me1_high_det_bv_limit:4;
        RBus_UInt32  me1_high_det_bv_replace_type:1;
        RBus_UInt32  me1_high_det_bv_replace_mv:4;
        RBus_UInt32  res1:7;
    };
}kme_me1_top2_kme_me1_top2_high_det_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_smobj_penalty_en:32;
    };
}kme_me1_top2_kme_me1_top2_gmvcost_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_smobj_penalty_gmvcnt1_th:10;
        RBus_UInt32  res1:6;
        RBus_UInt32  me1_smobj_penalty_gmvcnt2_min:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_smobj_penalty_gmvcnt2_max:7;
        RBus_UInt32  res3:1;
    };
}kme_me1_top2_kme_me1_top2_gmvcost_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  me1_smobj_penalty_gmvcnt1_mvdiff_th:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  me1_smobj_penalty_gmvcnt2_mvdiff_th:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  me1_smobj_penalty_value:10;
        RBus_UInt32  res3:6;
    };
}kme_me1_top2_kme_me1_top2_gmvcost_5_RBUS;




#endif 


#endif 
