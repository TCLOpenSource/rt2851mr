/**
* @file Merlin5_MEMC_KME_IPME1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_IPME1_REG_H_
#define _RBUS_KME_IPME1_REG_H_

#include "rbus_types.h"



//  KME_IPME1 Register Address
#define  KME_IPME1_KME_IPME1_00                                                 0x1809BD00
#define  KME_IPME1_KME_IPME1_00_reg_addr                                         "0xB809BD00"
#define  KME_IPME1_KME_IPME1_00_reg                                              0xB809BD00
#define  KME_IPME1_KME_IPME1_00_inst_addr                                        "0x0000"
#define  set_KME_IPME1_KME_IPME1_00_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_00_reg)=data)
#define  get_KME_IPME1_KME_IPME1_00_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_00_reg))
#define  KME_IPME1_KME_IPME1_00_kme_ipme_sram_ls_value_shift                     (26)
#define  KME_IPME1_KME_IPME1_00_kme_ipme_sram_ls_en_shift                        (25)
#define  KME_IPME1_KME_IPME1_00_ipme_film_det_rb_start_p_shift                   (24)
#define  KME_IPME1_KME_IPME1_00_ipme_film_det_rb_sel_shift                       (20)
#define  KME_IPME1_KME_IPME1_00_ipme_fmdet_v_active_shift                        (10)
#define  KME_IPME1_KME_IPME1_00_ipme_fmdet_h_active_shift                        (0)
#define  KME_IPME1_KME_IPME1_00_kme_ipme_sram_ls_value_mask                      (0x04000000)
#define  KME_IPME1_KME_IPME1_00_kme_ipme_sram_ls_en_mask                         (0x02000000)
#define  KME_IPME1_KME_IPME1_00_ipme_film_det_rb_start_p_mask                    (0x01000000)
#define  KME_IPME1_KME_IPME1_00_ipme_film_det_rb_sel_mask                        (0x00F00000)
#define  KME_IPME1_KME_IPME1_00_ipme_fmdet_v_active_mask                         (0x000FFC00)
#define  KME_IPME1_KME_IPME1_00_ipme_fmdet_h_active_mask                         (0x000003FF)
#define  KME_IPME1_KME_IPME1_00_kme_ipme_sram_ls_value(data)                     (0x04000000&((data)<<26))
#define  KME_IPME1_KME_IPME1_00_kme_ipme_sram_ls_en(data)                        (0x02000000&((data)<<25))
#define  KME_IPME1_KME_IPME1_00_ipme_film_det_rb_start_p(data)                   (0x01000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_00_ipme_film_det_rb_sel(data)                       (0x00F00000&((data)<<20))
#define  KME_IPME1_KME_IPME1_00_ipme_fmdet_v_active(data)                        (0x000FFC00&((data)<<10))
#define  KME_IPME1_KME_IPME1_00_ipme_fmdet_h_active(data)                        (0x000003FF&(data))
#define  KME_IPME1_KME_IPME1_00_get_kme_ipme_sram_ls_value(data)                 ((0x04000000&(data))>>26)
#define  KME_IPME1_KME_IPME1_00_get_kme_ipme_sram_ls_en(data)                    ((0x02000000&(data))>>25)
#define  KME_IPME1_KME_IPME1_00_get_ipme_film_det_rb_start_p(data)               ((0x01000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_00_get_ipme_film_det_rb_sel(data)                   ((0x00F00000&(data))>>20)
#define  KME_IPME1_KME_IPME1_00_get_ipme_fmdet_v_active(data)                    ((0x000FFC00&(data))>>10)
#define  KME_IPME1_KME_IPME1_00_get_ipme_fmdet_h_active(data)                    (0x000003FF&(data))

#define  KME_IPME1_KME_IPME1_04                                                 0x1809BD04
#define  KME_IPME1_KME_IPME1_04_reg_addr                                         "0xB809BD04"
#define  KME_IPME1_KME_IPME1_04_reg                                              0xB809BD04
#define  KME_IPME1_KME_IPME1_04_inst_addr                                        "0x0001"
#define  set_KME_IPME1_KME_IPME1_04_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_04_reg)=data)
#define  get_KME_IPME1_KME_IPME1_04_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_04_reg))
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_sub_y_num_shift                  (8)
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_sub_x_num_shift                  (4)
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_shift_shift                      (0)
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_sub_y_num_mask                   (0x00000F00)
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_sub_x_num_mask                   (0x000000F0)
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_shift_mask                       (0x0000000F)
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_sub_y_num(data)                  (0x00000F00&((data)<<8))
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_sub_x_num(data)                  (0x000000F0&((data)<<4))
#define  KME_IPME1_KME_IPME1_04_ipme_cprs_mdiff_shift(data)                      (0x0000000F&(data))
#define  KME_IPME1_KME_IPME1_04_get_ipme_cprs_mdiff_sub_y_num(data)              ((0x00000F00&(data))>>8)
#define  KME_IPME1_KME_IPME1_04_get_ipme_cprs_mdiff_sub_x_num(data)              ((0x000000F0&(data))>>4)
#define  KME_IPME1_KME_IPME1_04_get_ipme_cprs_mdiff_shift(data)                  (0x0000000F&(data))

#define  KME_IPME1_KME_IPME1_08                                                 0x1809BD08
#define  KME_IPME1_KME_IPME1_08_reg_addr                                         "0xB809BD08"
#define  KME_IPME1_KME_IPME1_08_reg                                              0xB809BD08
#define  KME_IPME1_KME_IPME1_08_inst_addr                                        "0x0002"
#define  set_KME_IPME1_KME_IPME1_08_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_08_reg)=data)
#define  get_KME_IPME1_KME_IPME1_08_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_08_reg))
#define  KME_IPME1_KME_IPME1_08_dummy0_shift                                     (0)
#define  KME_IPME1_KME_IPME1_08_dummy0_mask                                      (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_08_dummy0(data)                                     (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_08_get_dummy0(data)                                 (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_0C                                                 0x1809BD0C
#define  KME_IPME1_KME_IPME1_0C_reg_addr                                         "0xB809BD0C"
#define  KME_IPME1_KME_IPME1_0C_reg                                              0xB809BD0C
#define  KME_IPME1_KME_IPME1_0C_inst_addr                                        "0x0003"
#define  set_KME_IPME1_KME_IPME1_0C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_0C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_0C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_0C_reg))
#define  KME_IPME1_KME_IPME1_0C_dummy1_shift                                     (0)
#define  KME_IPME1_KME_IPME1_0C_dummy1_mask                                      (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_0C_dummy1(data)                                     (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_0C_get_dummy1(data)                                 (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_10                                                 0x1809BD10
#define  KME_IPME1_KME_IPME1_10_reg_addr                                         "0xB809BD10"
#define  KME_IPME1_KME_IPME1_10_reg                                              0xB809BD10
#define  KME_IPME1_KME_IPME1_10_inst_addr                                        "0x0004"
#define  set_KME_IPME1_KME_IPME1_10_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_10_reg)=data)
#define  get_KME_IPME1_KME_IPME1_10_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_10_reg))
#define  KME_IPME1_KME_IPME1_10_regr_ipme0_film0_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_10_regr_ipme0_film0_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_10_regr_ipme0_film0_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_10_get_regr_ipme0_film0_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_14                                                 0x1809BD14
#define  KME_IPME1_KME_IPME1_14_reg_addr                                         "0xB809BD14"
#define  KME_IPME1_KME_IPME1_14_reg                                              0xB809BD14
#define  KME_IPME1_KME_IPME1_14_inst_addr                                        "0x0005"
#define  set_KME_IPME1_KME_IPME1_14_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_14_reg)=data)
#define  get_KME_IPME1_KME_IPME1_14_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_14_reg))
#define  KME_IPME1_KME_IPME1_14_regr_ipme0_film1_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_14_regr_ipme0_film1_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_14_regr_ipme0_film1_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_14_get_regr_ipme0_film1_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_18                                                 0x1809BD18
#define  KME_IPME1_KME_IPME1_18_reg_addr                                         "0xB809BD18"
#define  KME_IPME1_KME_IPME1_18_reg                                              0xB809BD18
#define  KME_IPME1_KME_IPME1_18_inst_addr                                        "0x0006"
#define  set_KME_IPME1_KME_IPME1_18_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_18_reg)=data)
#define  get_KME_IPME1_KME_IPME1_18_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_18_reg))
#define  KME_IPME1_KME_IPME1_18_regr_ipme0_film2_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_18_regr_ipme0_film2_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_18_regr_ipme0_film2_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_18_get_regr_ipme0_film2_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_1C                                                 0x1809BD1C
#define  KME_IPME1_KME_IPME1_1C_reg_addr                                         "0xB809BD1C"
#define  KME_IPME1_KME_IPME1_1C_reg                                              0xB809BD1C
#define  KME_IPME1_KME_IPME1_1C_inst_addr                                        "0x0007"
#define  set_KME_IPME1_KME_IPME1_1C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_1C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_1C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_1C_reg))
#define  KME_IPME1_KME_IPME1_1C_regr_ipme0_film3_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_1C_regr_ipme0_film3_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_1C_regr_ipme0_film3_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_1C_get_regr_ipme0_film3_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_20                                                 0x1809BD20
#define  KME_IPME1_KME_IPME1_20_reg_addr                                         "0xB809BD20"
#define  KME_IPME1_KME_IPME1_20_reg                                              0xB809BD20
#define  KME_IPME1_KME_IPME1_20_inst_addr                                        "0x0008"
#define  set_KME_IPME1_KME_IPME1_20_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_20_reg)=data)
#define  get_KME_IPME1_KME_IPME1_20_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_20_reg))
#define  KME_IPME1_KME_IPME1_20_regr_ipme0_film4_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_20_regr_ipme0_film4_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_20_regr_ipme0_film4_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_20_get_regr_ipme0_film4_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_24                                                 0x1809BD24
#define  KME_IPME1_KME_IPME1_24_reg_addr                                         "0xB809BD24"
#define  KME_IPME1_KME_IPME1_24_reg                                              0xB809BD24
#define  KME_IPME1_KME_IPME1_24_inst_addr                                        "0x0009"
#define  set_KME_IPME1_KME_IPME1_24_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_24_reg)=data)
#define  get_KME_IPME1_KME_IPME1_24_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_24_reg))
#define  KME_IPME1_KME_IPME1_24_regr_ipme0_film5_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_24_regr_ipme0_film5_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_24_regr_ipme0_film5_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_24_get_regr_ipme0_film5_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_28                                                 0x1809BD28
#define  KME_IPME1_KME_IPME1_28_reg_addr                                         "0xB809BD28"
#define  KME_IPME1_KME_IPME1_28_reg                                              0xB809BD28
#define  KME_IPME1_KME_IPME1_28_inst_addr                                        "0x000A"
#define  set_KME_IPME1_KME_IPME1_28_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_28_reg)=data)
#define  get_KME_IPME1_KME_IPME1_28_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_28_reg))
#define  KME_IPME1_KME_IPME1_28_regr_ipme0_film6_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_28_regr_ipme0_film6_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_28_regr_ipme0_film6_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_28_get_regr_ipme0_film6_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_2C                                                 0x1809BD2C
#define  KME_IPME1_KME_IPME1_2C_reg_addr                                         "0xB809BD2C"
#define  KME_IPME1_KME_IPME1_2C_reg                                              0xB809BD2C
#define  KME_IPME1_KME_IPME1_2C_inst_addr                                        "0x000B"
#define  set_KME_IPME1_KME_IPME1_2C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_2C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_2C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_2C_reg))
#define  KME_IPME1_KME_IPME1_2C_regr_ipme0_film7_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_2C_regr_ipme0_film7_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_2C_regr_ipme0_film7_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_2C_get_regr_ipme0_film7_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_30                                                 0x1809BD30
#define  KME_IPME1_KME_IPME1_30_reg_addr                                         "0xB809BD30"
#define  KME_IPME1_KME_IPME1_30_reg                                              0xB809BD30
#define  KME_IPME1_KME_IPME1_30_inst_addr                                        "0x000C"
#define  set_KME_IPME1_KME_IPME1_30_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_30_reg)=data)
#define  get_KME_IPME1_KME_IPME1_30_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_30_reg))
#define  KME_IPME1_KME_IPME1_30_regr_ipme0_film8_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_30_regr_ipme0_film8_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_30_regr_ipme0_film8_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_30_get_regr_ipme0_film8_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_34                                                 0x1809BD34
#define  KME_IPME1_KME_IPME1_34_reg_addr                                         "0xB809BD34"
#define  KME_IPME1_KME_IPME1_34_reg                                              0xB809BD34
#define  KME_IPME1_KME_IPME1_34_inst_addr                                        "0x000D"
#define  set_KME_IPME1_KME_IPME1_34_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_34_reg)=data)
#define  get_KME_IPME1_KME_IPME1_34_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_34_reg))
#define  KME_IPME1_KME_IPME1_34_regr_ipme0_film9_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_34_regr_ipme0_film9_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_34_regr_ipme0_film9_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_34_get_regr_ipme0_film9_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_38                                                 0x1809BD38
#define  KME_IPME1_KME_IPME1_38_reg_addr                                         "0xB809BD38"
#define  KME_IPME1_KME_IPME1_38_reg                                              0xB809BD38
#define  KME_IPME1_KME_IPME1_38_inst_addr                                        "0x000E"
#define  set_KME_IPME1_KME_IPME1_38_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_38_reg)=data)
#define  get_KME_IPME1_KME_IPME1_38_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_38_reg))
#define  KME_IPME1_KME_IPME1_38_regr_ipme0_film10_film_det_shift                 (0)
#define  KME_IPME1_KME_IPME1_38_regr_ipme0_film10_film_det_mask                  (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_38_regr_ipme0_film10_film_det(data)                 (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_38_get_regr_ipme0_film10_film_det(data)             (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_3C                                                 0x1809BD3C
#define  KME_IPME1_KME_IPME1_3C_reg_addr                                         "0xB809BD3C"
#define  KME_IPME1_KME_IPME1_3C_reg                                              0xB809BD3C
#define  KME_IPME1_KME_IPME1_3C_inst_addr                                        "0x000F"
#define  set_KME_IPME1_KME_IPME1_3C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_3C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_3C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_3C_reg))
#define  KME_IPME1_KME_IPME1_3C_regr_ipme0_film11_film_det_shift                 (0)
#define  KME_IPME1_KME_IPME1_3C_regr_ipme0_film11_film_det_mask                  (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_3C_regr_ipme0_film11_film_det(data)                 (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_3C_get_regr_ipme0_film11_film_det(data)             (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_40                                                 0x1809BD40
#define  KME_IPME1_KME_IPME1_40_reg_addr                                         "0xB809BD40"
#define  KME_IPME1_KME_IPME1_40_reg                                              0xB809BD40
#define  KME_IPME1_KME_IPME1_40_inst_addr                                        "0x0010"
#define  set_KME_IPME1_KME_IPME1_40_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_40_reg)=data)
#define  get_KME_IPME1_KME_IPME1_40_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_40_reg))
#define  KME_IPME1_KME_IPME1_40_regr_ipme1_film0_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_40_regr_ipme1_film0_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_40_regr_ipme1_film0_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_40_get_regr_ipme1_film0_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_44                                                 0x1809BD44
#define  KME_IPME1_KME_IPME1_44_reg_addr                                         "0xB809BD44"
#define  KME_IPME1_KME_IPME1_44_reg                                              0xB809BD44
#define  KME_IPME1_KME_IPME1_44_inst_addr                                        "0x0011"
#define  set_KME_IPME1_KME_IPME1_44_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_44_reg)=data)
#define  get_KME_IPME1_KME_IPME1_44_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_44_reg))
#define  KME_IPME1_KME_IPME1_44_regr_ipme1_film1_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_44_regr_ipme1_film1_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_44_regr_ipme1_film1_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_44_get_regr_ipme1_film1_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_48                                                 0x1809BD48
#define  KME_IPME1_KME_IPME1_48_reg_addr                                         "0xB809BD48"
#define  KME_IPME1_KME_IPME1_48_reg                                              0xB809BD48
#define  KME_IPME1_KME_IPME1_48_inst_addr                                        "0x0012"
#define  set_KME_IPME1_KME_IPME1_48_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_48_reg)=data)
#define  get_KME_IPME1_KME_IPME1_48_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_48_reg))
#define  KME_IPME1_KME_IPME1_48_regr_ipme1_film2_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_48_regr_ipme1_film2_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_48_regr_ipme1_film2_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_48_get_regr_ipme1_film2_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_4C                                                 0x1809BD4C
#define  KME_IPME1_KME_IPME1_4C_reg_addr                                         "0xB809BD4C"
#define  KME_IPME1_KME_IPME1_4C_reg                                              0xB809BD4C
#define  KME_IPME1_KME_IPME1_4C_inst_addr                                        "0x0013"
#define  set_KME_IPME1_KME_IPME1_4C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_4C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_4C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_4C_reg))
#define  KME_IPME1_KME_IPME1_4C_regr_ipme1_film3_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_4C_regr_ipme1_film3_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_4C_regr_ipme1_film3_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_4C_get_regr_ipme1_film3_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_50                                                 0x1809BD50
#define  KME_IPME1_KME_IPME1_50_reg_addr                                         "0xB809BD50"
#define  KME_IPME1_KME_IPME1_50_reg                                              0xB809BD50
#define  KME_IPME1_KME_IPME1_50_inst_addr                                        "0x0014"
#define  set_KME_IPME1_KME_IPME1_50_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_50_reg)=data)
#define  get_KME_IPME1_KME_IPME1_50_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_50_reg))
#define  KME_IPME1_KME_IPME1_50_regr_ipme1_film4_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_50_regr_ipme1_film4_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_50_regr_ipme1_film4_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_50_get_regr_ipme1_film4_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_54                                                 0x1809BD54
#define  KME_IPME1_KME_IPME1_54_reg_addr                                         "0xB809BD54"
#define  KME_IPME1_KME_IPME1_54_reg                                              0xB809BD54
#define  KME_IPME1_KME_IPME1_54_inst_addr                                        "0x0015"
#define  set_KME_IPME1_KME_IPME1_54_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_54_reg)=data)
#define  get_KME_IPME1_KME_IPME1_54_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_54_reg))
#define  KME_IPME1_KME_IPME1_54_regr_ipme1_film5_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_54_regr_ipme1_film5_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_54_regr_ipme1_film5_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_54_get_regr_ipme1_film5_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_58                                                 0x1809BD58
#define  KME_IPME1_KME_IPME1_58_reg_addr                                         "0xB809BD58"
#define  KME_IPME1_KME_IPME1_58_reg                                              0xB809BD58
#define  KME_IPME1_KME_IPME1_58_inst_addr                                        "0x0016"
#define  set_KME_IPME1_KME_IPME1_58_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_58_reg)=data)
#define  get_KME_IPME1_KME_IPME1_58_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_58_reg))
#define  KME_IPME1_KME_IPME1_58_regr_ipme1_film6_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_58_regr_ipme1_film6_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_58_regr_ipme1_film6_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_58_get_regr_ipme1_film6_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_5C                                                 0x1809BD5C
#define  KME_IPME1_KME_IPME1_5C_reg_addr                                         "0xB809BD5C"
#define  KME_IPME1_KME_IPME1_5C_reg                                              0xB809BD5C
#define  KME_IPME1_KME_IPME1_5C_inst_addr                                        "0x0017"
#define  set_KME_IPME1_KME_IPME1_5C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_5C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_5C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_5C_reg))
#define  KME_IPME1_KME_IPME1_5C_regr_ipme1_film7_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_5C_regr_ipme1_film7_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_5C_regr_ipme1_film7_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_5C_get_regr_ipme1_film7_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_60                                                 0x1809BD60
#define  KME_IPME1_KME_IPME1_60_reg_addr                                         "0xB809BD60"
#define  KME_IPME1_KME_IPME1_60_reg                                              0xB809BD60
#define  KME_IPME1_KME_IPME1_60_inst_addr                                        "0x0018"
#define  set_KME_IPME1_KME_IPME1_60_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_60_reg)=data)
#define  get_KME_IPME1_KME_IPME1_60_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_60_reg))
#define  KME_IPME1_KME_IPME1_60_regr_ipme1_film8_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_60_regr_ipme1_film8_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_60_regr_ipme1_film8_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_60_get_regr_ipme1_film8_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_64                                                 0x1809BD64
#define  KME_IPME1_KME_IPME1_64_reg_addr                                         "0xB809BD64"
#define  KME_IPME1_KME_IPME1_64_reg                                              0xB809BD64
#define  KME_IPME1_KME_IPME1_64_inst_addr                                        "0x0019"
#define  set_KME_IPME1_KME_IPME1_64_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_64_reg)=data)
#define  get_KME_IPME1_KME_IPME1_64_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_64_reg))
#define  KME_IPME1_KME_IPME1_64_regr_ipme1_film9_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_64_regr_ipme1_film9_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_64_regr_ipme1_film9_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_64_get_regr_ipme1_film9_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_68                                                 0x1809BD68
#define  KME_IPME1_KME_IPME1_68_reg_addr                                         "0xB809BD68"
#define  KME_IPME1_KME_IPME1_68_reg                                              0xB809BD68
#define  KME_IPME1_KME_IPME1_68_inst_addr                                        "0x001A"
#define  set_KME_IPME1_KME_IPME1_68_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_68_reg)=data)
#define  get_KME_IPME1_KME_IPME1_68_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_68_reg))
#define  KME_IPME1_KME_IPME1_68_regr_ipme1_film10_film_det_shift                 (0)
#define  KME_IPME1_KME_IPME1_68_regr_ipme1_film10_film_det_mask                  (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_68_regr_ipme1_film10_film_det(data)                 (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_68_get_regr_ipme1_film10_film_det(data)             (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_6C                                                 0x1809BD6C
#define  KME_IPME1_KME_IPME1_6C_reg_addr                                         "0xB809BD6C"
#define  KME_IPME1_KME_IPME1_6C_reg                                              0xB809BD6C
#define  KME_IPME1_KME_IPME1_6C_inst_addr                                        "0x001B"
#define  set_KME_IPME1_KME_IPME1_6C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_6C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_6C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_6C_reg))
#define  KME_IPME1_KME_IPME1_6C_regr_ipme1_film11_film_det_shift                 (0)
#define  KME_IPME1_KME_IPME1_6C_regr_ipme1_film11_film_det_mask                  (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_6C_regr_ipme1_film11_film_det(data)                 (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_6C_get_regr_ipme1_film11_film_det(data)             (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_70                                                 0x1809BD70
#define  KME_IPME1_KME_IPME1_70_reg_addr                                         "0xB809BD70"
#define  KME_IPME1_KME_IPME1_70_reg                                              0xB809BD70
#define  KME_IPME1_KME_IPME1_70_inst_addr                                        "0x001C"
#define  set_KME_IPME1_KME_IPME1_70_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_70_reg)=data)
#define  get_KME_IPME1_KME_IPME1_70_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_70_reg))
#define  KME_IPME1_KME_IPME1_70_regr_ipme2_film0_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_70_regr_ipme2_film0_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_70_regr_ipme2_film0_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_70_get_regr_ipme2_film0_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_74                                                 0x1809BD74
#define  KME_IPME1_KME_IPME1_74_reg_addr                                         "0xB809BD74"
#define  KME_IPME1_KME_IPME1_74_reg                                              0xB809BD74
#define  KME_IPME1_KME_IPME1_74_inst_addr                                        "0x001D"
#define  set_KME_IPME1_KME_IPME1_74_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_74_reg)=data)
#define  get_KME_IPME1_KME_IPME1_74_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_74_reg))
#define  KME_IPME1_KME_IPME1_74_regr_ipme2_film1_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_74_regr_ipme2_film1_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_74_regr_ipme2_film1_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_74_get_regr_ipme2_film1_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_78                                                 0x1809BD78
#define  KME_IPME1_KME_IPME1_78_reg_addr                                         "0xB809BD78"
#define  KME_IPME1_KME_IPME1_78_reg                                              0xB809BD78
#define  KME_IPME1_KME_IPME1_78_inst_addr                                        "0x001E"
#define  set_KME_IPME1_KME_IPME1_78_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_78_reg)=data)
#define  get_KME_IPME1_KME_IPME1_78_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_78_reg))
#define  KME_IPME1_KME_IPME1_78_regr_ipme2_film2_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_78_regr_ipme2_film2_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_78_regr_ipme2_film2_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_78_get_regr_ipme2_film2_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_7C                                                 0x1809BD7C
#define  KME_IPME1_KME_IPME1_7C_reg_addr                                         "0xB809BD7C"
#define  KME_IPME1_KME_IPME1_7C_reg                                              0xB809BD7C
#define  KME_IPME1_KME_IPME1_7C_inst_addr                                        "0x001F"
#define  set_KME_IPME1_KME_IPME1_7C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_7C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_7C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_7C_reg))
#define  KME_IPME1_KME_IPME1_7C_regr_ipme2_film3_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_7C_regr_ipme2_film3_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_7C_regr_ipme2_film3_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_7C_get_regr_ipme2_film3_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_80                                                 0x1809BD80
#define  KME_IPME1_KME_IPME1_80_reg_addr                                         "0xB809BD80"
#define  KME_IPME1_KME_IPME1_80_reg                                              0xB809BD80
#define  KME_IPME1_KME_IPME1_80_inst_addr                                        "0x0020"
#define  set_KME_IPME1_KME_IPME1_80_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_80_reg)=data)
#define  get_KME_IPME1_KME_IPME1_80_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_80_reg))
#define  KME_IPME1_KME_IPME1_80_regr_ipme2_film4_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_80_regr_ipme2_film4_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_80_regr_ipme2_film4_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_80_get_regr_ipme2_film4_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_84                                                 0x1809BD84
#define  KME_IPME1_KME_IPME1_84_reg_addr                                         "0xB809BD84"
#define  KME_IPME1_KME_IPME1_84_reg                                              0xB809BD84
#define  KME_IPME1_KME_IPME1_84_inst_addr                                        "0x0021"
#define  set_KME_IPME1_KME_IPME1_84_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_84_reg)=data)
#define  get_KME_IPME1_KME_IPME1_84_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_84_reg))
#define  KME_IPME1_KME_IPME1_84_regr_ipme2_film5_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_84_regr_ipme2_film5_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_84_regr_ipme2_film5_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_84_get_regr_ipme2_film5_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_88                                                 0x1809BD88
#define  KME_IPME1_KME_IPME1_88_reg_addr                                         "0xB809BD88"
#define  KME_IPME1_KME_IPME1_88_reg                                              0xB809BD88
#define  KME_IPME1_KME_IPME1_88_inst_addr                                        "0x0022"
#define  set_KME_IPME1_KME_IPME1_88_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_88_reg)=data)
#define  get_KME_IPME1_KME_IPME1_88_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_88_reg))
#define  KME_IPME1_KME_IPME1_88_regr_ipme2_film6_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_88_regr_ipme2_film6_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_88_regr_ipme2_film6_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_88_get_regr_ipme2_film6_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_8C                                                 0x1809BD8C
#define  KME_IPME1_KME_IPME1_8C_reg_addr                                         "0xB809BD8C"
#define  KME_IPME1_KME_IPME1_8C_reg                                              0xB809BD8C
#define  KME_IPME1_KME_IPME1_8C_inst_addr                                        "0x0023"
#define  set_KME_IPME1_KME_IPME1_8C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_8C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_8C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_8C_reg))
#define  KME_IPME1_KME_IPME1_8C_regr_ipme2_film7_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_8C_regr_ipme2_film7_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_8C_regr_ipme2_film7_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_8C_get_regr_ipme2_film7_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_90                                                 0x1809BD90
#define  KME_IPME1_KME_IPME1_90_reg_addr                                         "0xB809BD90"
#define  KME_IPME1_KME_IPME1_90_reg                                              0xB809BD90
#define  KME_IPME1_KME_IPME1_90_inst_addr                                        "0x0024"
#define  set_KME_IPME1_KME_IPME1_90_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_90_reg)=data)
#define  get_KME_IPME1_KME_IPME1_90_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_90_reg))
#define  KME_IPME1_KME_IPME1_90_regr_ipme2_film8_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_90_regr_ipme2_film8_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_90_regr_ipme2_film8_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_90_get_regr_ipme2_film8_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_94                                                 0x1809BD94
#define  KME_IPME1_KME_IPME1_94_reg_addr                                         "0xB809BD94"
#define  KME_IPME1_KME_IPME1_94_reg                                              0xB809BD94
#define  KME_IPME1_KME_IPME1_94_inst_addr                                        "0x0025"
#define  set_KME_IPME1_KME_IPME1_94_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_94_reg)=data)
#define  get_KME_IPME1_KME_IPME1_94_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_94_reg))
#define  KME_IPME1_KME_IPME1_94_regr_ipme2_film9_film_det_shift                  (0)
#define  KME_IPME1_KME_IPME1_94_regr_ipme2_film9_film_det_mask                   (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_94_regr_ipme2_film9_film_det(data)                  (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_94_get_regr_ipme2_film9_film_det(data)              (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_98                                                 0x1809BD98
#define  KME_IPME1_KME_IPME1_98_reg_addr                                         "0xB809BD98"
#define  KME_IPME1_KME_IPME1_98_reg                                              0xB809BD98
#define  KME_IPME1_KME_IPME1_98_inst_addr                                        "0x0026"
#define  set_KME_IPME1_KME_IPME1_98_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_98_reg)=data)
#define  get_KME_IPME1_KME_IPME1_98_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_98_reg))
#define  KME_IPME1_KME_IPME1_98_regr_ipme2_film10_film_det_shift                 (0)
#define  KME_IPME1_KME_IPME1_98_regr_ipme2_film10_film_det_mask                  (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_98_regr_ipme2_film10_film_det(data)                 (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_98_get_regr_ipme2_film10_film_det(data)             (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_9C                                                 0x1809BD9C
#define  KME_IPME1_KME_IPME1_9C_reg_addr                                         "0xB809BD9C"
#define  KME_IPME1_KME_IPME1_9C_reg                                              0xB809BD9C
#define  KME_IPME1_KME_IPME1_9C_inst_addr                                        "0x0027"
#define  set_KME_IPME1_KME_IPME1_9C_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_9C_reg)=data)
#define  get_KME_IPME1_KME_IPME1_9C_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_9C_reg))
#define  KME_IPME1_KME_IPME1_9C_regr_ipme2_film11_film_det_shift                 (0)
#define  KME_IPME1_KME_IPME1_9C_regr_ipme2_film11_film_det_mask                  (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_9C_regr_ipme2_film11_film_det(data)                 (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_9C_get_regr_ipme2_film11_film_det(data)             (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_A0                                                 0x1809BDA0
#define  KME_IPME1_KME_IPME1_A0_reg_addr                                         "0xB809BDA0"
#define  KME_IPME1_KME_IPME1_A0_reg                                              0xB809BDA0
#define  KME_IPME1_KME_IPME1_A0_inst_addr                                        "0x0028"
#define  set_KME_IPME1_KME_IPME1_A0_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_A0_reg)=data)
#define  get_KME_IPME1_KME_IPME1_A0_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_A0_reg))
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_4_apl_shift              (24)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_3_apl_shift              (16)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_2_apl_shift              (8)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_1_apl_shift              (0)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_4_apl_mask               (0xFF000000)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_3_apl_mask               (0x00FF0000)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_2_apl_mask               (0x0000FF00)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_1_apl_mask               (0x000000FF)
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_4_apl(data)              (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_3_apl(data)              (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_2_apl(data)              (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_A0_regr_ipme_fdet_region32_1_apl(data)              (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_A0_get_regr_ipme_fdet_region32_4_apl(data)          ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_A0_get_regr_ipme_fdet_region32_3_apl(data)          ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_A0_get_regr_ipme_fdet_region32_2_apl(data)          ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_A0_get_regr_ipme_fdet_region32_1_apl(data)          (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_A4                                                 0x1809BDA4
#define  KME_IPME1_KME_IPME1_A4_reg_addr                                         "0xB809BDA4"
#define  KME_IPME1_KME_IPME1_A4_reg                                              0xB809BDA4
#define  KME_IPME1_KME_IPME1_A4_inst_addr                                        "0x0029"
#define  set_KME_IPME1_KME_IPME1_A4_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_A4_reg)=data)
#define  get_KME_IPME1_KME_IPME1_A4_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_A4_reg))
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_8_apl_shift              (24)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_7_apl_shift              (16)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_6_apl_shift              (8)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_5_apl_shift              (0)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_8_apl_mask               (0xFF000000)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_7_apl_mask               (0x00FF0000)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_6_apl_mask               (0x0000FF00)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_5_apl_mask               (0x000000FF)
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_8_apl(data)              (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_7_apl(data)              (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_6_apl(data)              (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_A4_regr_ipme_fdet_region32_5_apl(data)              (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_A4_get_regr_ipme_fdet_region32_8_apl(data)          ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_A4_get_regr_ipme_fdet_region32_7_apl(data)          ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_A4_get_regr_ipme_fdet_region32_6_apl(data)          ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_A4_get_regr_ipme_fdet_region32_5_apl(data)          (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_A8                                                 0x1809BDA8
#define  KME_IPME1_KME_IPME1_A8_reg_addr                                         "0xB809BDA8"
#define  KME_IPME1_KME_IPME1_A8_reg                                              0xB809BDA8
#define  KME_IPME1_KME_IPME1_A8_inst_addr                                        "0x002A"
#define  set_KME_IPME1_KME_IPME1_A8_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_A8_reg)=data)
#define  get_KME_IPME1_KME_IPME1_A8_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_A8_reg))
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_12_apl_shift             (24)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_11_apl_shift             (16)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_10_apl_shift             (8)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_9_apl_shift              (0)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_12_apl_mask              (0xFF000000)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_11_apl_mask              (0x00FF0000)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_10_apl_mask              (0x0000FF00)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_9_apl_mask               (0x000000FF)
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_12_apl(data)             (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_11_apl(data)             (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_10_apl(data)             (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_A8_regr_ipme_fdet_region32_9_apl(data)              (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_A8_get_regr_ipme_fdet_region32_12_apl(data)         ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_A8_get_regr_ipme_fdet_region32_11_apl(data)         ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_A8_get_regr_ipme_fdet_region32_10_apl(data)         ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_A8_get_regr_ipme_fdet_region32_9_apl(data)          (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_AC                                                 0x1809BDAC
#define  KME_IPME1_KME_IPME1_AC_reg_addr                                         "0xB809BDAC"
#define  KME_IPME1_KME_IPME1_AC_reg                                              0xB809BDAC
#define  KME_IPME1_KME_IPME1_AC_inst_addr                                        "0x002B"
#define  set_KME_IPME1_KME_IPME1_AC_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_AC_reg)=data)
#define  get_KME_IPME1_KME_IPME1_AC_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_AC_reg))
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_16_apl_shift             (24)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_15_apl_shift             (16)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_14_apl_shift             (8)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_13_apl_shift             (0)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_16_apl_mask              (0xFF000000)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_15_apl_mask              (0x00FF0000)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_14_apl_mask              (0x0000FF00)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_13_apl_mask              (0x000000FF)
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_16_apl(data)             (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_15_apl(data)             (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_14_apl(data)             (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_AC_regr_ipme_fdet_region32_13_apl(data)             (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_AC_get_regr_ipme_fdet_region32_16_apl(data)         ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_AC_get_regr_ipme_fdet_region32_15_apl(data)         ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_AC_get_regr_ipme_fdet_region32_14_apl(data)         ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_AC_get_regr_ipme_fdet_region32_13_apl(data)         (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_B0                                                 0x1809BDB0
#define  KME_IPME1_KME_IPME1_B0_reg_addr                                         "0xB809BDB0"
#define  KME_IPME1_KME_IPME1_B0_reg                                              0xB809BDB0
#define  KME_IPME1_KME_IPME1_B0_inst_addr                                        "0x002C"
#define  set_KME_IPME1_KME_IPME1_B0_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_B0_reg)=data)
#define  get_KME_IPME1_KME_IPME1_B0_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_B0_reg))
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_20_apl_shift             (24)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_19_apl_shift             (16)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_18_apl_shift             (8)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_17_apl_shift             (0)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_20_apl_mask              (0xFF000000)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_19_apl_mask              (0x00FF0000)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_18_apl_mask              (0x0000FF00)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_17_apl_mask              (0x000000FF)
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_20_apl(data)             (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_19_apl(data)             (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_18_apl(data)             (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_B0_regr_ipme_fdet_region32_17_apl(data)             (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_B0_get_regr_ipme_fdet_region32_20_apl(data)         ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_B0_get_regr_ipme_fdet_region32_19_apl(data)         ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_B0_get_regr_ipme_fdet_region32_18_apl(data)         ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_B0_get_regr_ipme_fdet_region32_17_apl(data)         (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_B4                                                 0x1809BDB4
#define  KME_IPME1_KME_IPME1_B4_reg_addr                                         "0xB809BDB4"
#define  KME_IPME1_KME_IPME1_B4_reg                                              0xB809BDB4
#define  KME_IPME1_KME_IPME1_B4_inst_addr                                        "0x002D"
#define  set_KME_IPME1_KME_IPME1_B4_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_B4_reg)=data)
#define  get_KME_IPME1_KME_IPME1_B4_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_B4_reg))
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_24_apl_shift             (24)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_23_apl_shift             (16)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_22_apl_shift             (8)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_21_apl_shift             (0)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_24_apl_mask              (0xFF000000)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_23_apl_mask              (0x00FF0000)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_22_apl_mask              (0x0000FF00)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_21_apl_mask              (0x000000FF)
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_24_apl(data)             (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_23_apl(data)             (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_22_apl(data)             (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_B4_regr_ipme_fdet_region32_21_apl(data)             (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_B4_get_regr_ipme_fdet_region32_24_apl(data)         ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_B4_get_regr_ipme_fdet_region32_23_apl(data)         ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_B4_get_regr_ipme_fdet_region32_22_apl(data)         ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_B4_get_regr_ipme_fdet_region32_21_apl(data)         (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_B8                                                 0x1809BDB8
#define  KME_IPME1_KME_IPME1_B8_reg_addr                                         "0xB809BDB8"
#define  KME_IPME1_KME_IPME1_B8_reg                                              0xB809BDB8
#define  KME_IPME1_KME_IPME1_B8_inst_addr                                        "0x002E"
#define  set_KME_IPME1_KME_IPME1_B8_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_B8_reg)=data)
#define  get_KME_IPME1_KME_IPME1_B8_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_B8_reg))
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_28_apl_shift             (24)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_27_apl_shift             (16)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_26_apl_shift             (8)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_25_apl_shift             (0)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_28_apl_mask              (0xFF000000)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_27_apl_mask              (0x00FF0000)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_26_apl_mask              (0x0000FF00)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_25_apl_mask              (0x000000FF)
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_28_apl(data)             (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_27_apl(data)             (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_26_apl(data)             (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_B8_regr_ipme_fdet_region32_25_apl(data)             (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_B8_get_regr_ipme_fdet_region32_28_apl(data)         ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_B8_get_regr_ipme_fdet_region32_27_apl(data)         ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_B8_get_regr_ipme_fdet_region32_26_apl(data)         ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_B8_get_regr_ipme_fdet_region32_25_apl(data)         (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_BC                                                 0x1809BDBC
#define  KME_IPME1_KME_IPME1_BC_reg_addr                                         "0xB809BDBC"
#define  KME_IPME1_KME_IPME1_BC_reg                                              0xB809BDBC
#define  KME_IPME1_KME_IPME1_BC_inst_addr                                        "0x002F"
#define  set_KME_IPME1_KME_IPME1_BC_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_BC_reg)=data)
#define  get_KME_IPME1_KME_IPME1_BC_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_BC_reg))
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_32_apl_shift             (24)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_31_apl_shift             (16)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_30_apl_shift             (8)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_29_apl_shift             (0)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_32_apl_mask              (0xFF000000)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_31_apl_mask              (0x00FF0000)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_30_apl_mask              (0x0000FF00)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_29_apl_mask              (0x000000FF)
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_32_apl(data)             (0xFF000000&((data)<<24))
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_31_apl(data)             (0x00FF0000&((data)<<16))
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_30_apl(data)             (0x0000FF00&((data)<<8))
#define  KME_IPME1_KME_IPME1_BC_regr_ipme_fdet_region32_29_apl(data)             (0x000000FF&(data))
#define  KME_IPME1_KME_IPME1_BC_get_regr_ipme_fdet_region32_32_apl(data)         ((0xFF000000&(data))>>24)
#define  KME_IPME1_KME_IPME1_BC_get_regr_ipme_fdet_region32_31_apl(data)         ((0x00FF0000&(data))>>16)
#define  KME_IPME1_KME_IPME1_BC_get_regr_ipme_fdet_region32_30_apl(data)         ((0x0000FF00&(data))>>8)
#define  KME_IPME1_KME_IPME1_BC_get_regr_ipme_fdet_region32_29_apl(data)         (0x000000FF&(data))

#define  KME_IPME1_KME_IPME1_C0                                                 0x1809BDC0
#define  KME_IPME1_KME_IPME1_C0_reg_addr                                         "0xB809BDC0"
#define  KME_IPME1_KME_IPME1_C0_reg                                              0xB809BDC0
#define  KME_IPME1_KME_IPME1_C0_inst_addr                                        "0x0030"
#define  set_KME_IPME1_KME_IPME1_C0_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_C0_reg)=data)
#define  get_KME_IPME1_KME_IPME1_C0_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_C0_reg))
#define  KME_IPME1_KME_IPME1_C0_regr_ipme_cprs_motion_diff_00_shift              (0)
#define  KME_IPME1_KME_IPME1_C0_regr_ipme_cprs_motion_diff_00_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_C0_regr_ipme_cprs_motion_diff_00(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_C0_get_regr_ipme_cprs_motion_diff_00(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_C4                                                 0x1809BDC4
#define  KME_IPME1_KME_IPME1_C4_reg_addr                                         "0xB809BDC4"
#define  KME_IPME1_KME_IPME1_C4_reg                                              0xB809BDC4
#define  KME_IPME1_KME_IPME1_C4_inst_addr                                        "0x0031"
#define  set_KME_IPME1_KME_IPME1_C4_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_C4_reg)=data)
#define  get_KME_IPME1_KME_IPME1_C4_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_C4_reg))
#define  KME_IPME1_KME_IPME1_C4_regr_ipme_cprs_motion_diff_01_shift              (0)
#define  KME_IPME1_KME_IPME1_C4_regr_ipme_cprs_motion_diff_01_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_C4_regr_ipme_cprs_motion_diff_01(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_C4_get_regr_ipme_cprs_motion_diff_01(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_C8                                                 0x1809BDC8
#define  KME_IPME1_KME_IPME1_C8_reg_addr                                         "0xB809BDC8"
#define  KME_IPME1_KME_IPME1_C8_reg                                              0xB809BDC8
#define  KME_IPME1_KME_IPME1_C8_inst_addr                                        "0x0032"
#define  set_KME_IPME1_KME_IPME1_C8_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_C8_reg)=data)
#define  get_KME_IPME1_KME_IPME1_C8_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_C8_reg))
#define  KME_IPME1_KME_IPME1_C8_regr_ipme_cprs_motion_diff_10_shift              (0)
#define  KME_IPME1_KME_IPME1_C8_regr_ipme_cprs_motion_diff_10_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_C8_regr_ipme_cprs_motion_diff_10(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_C8_get_regr_ipme_cprs_motion_diff_10(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_CC                                                 0x1809BDCC
#define  KME_IPME1_KME_IPME1_CC_reg_addr                                         "0xB809BDCC"
#define  KME_IPME1_KME_IPME1_CC_reg                                              0xB809BDCC
#define  KME_IPME1_KME_IPME1_CC_inst_addr                                        "0x0033"
#define  set_KME_IPME1_KME_IPME1_CC_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_CC_reg)=data)
#define  get_KME_IPME1_KME_IPME1_CC_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_CC_reg))
#define  KME_IPME1_KME_IPME1_CC_regr_ipme_cprs_motion_diff_11_shift              (0)
#define  KME_IPME1_KME_IPME1_CC_regr_ipme_cprs_motion_diff_11_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_CC_regr_ipme_cprs_motion_diff_11(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_CC_get_regr_ipme_cprs_motion_diff_11(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_D0                                                 0x1809BDD0
#define  KME_IPME1_KME_IPME1_D0_reg_addr                                         "0xB809BDD0"
#define  KME_IPME1_KME_IPME1_D0_reg                                              0xB809BDD0
#define  KME_IPME1_KME_IPME1_D0_inst_addr                                        "0x0034"
#define  set_KME_IPME1_KME_IPME1_D0_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_D0_reg)=data)
#define  get_KME_IPME1_KME_IPME1_D0_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_D0_reg))
#define  KME_IPME1_KME_IPME1_D0_regr_ipme_cprs_motion_diff_20_shift              (0)
#define  KME_IPME1_KME_IPME1_D0_regr_ipme_cprs_motion_diff_20_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_D0_regr_ipme_cprs_motion_diff_20(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_D0_get_regr_ipme_cprs_motion_diff_20(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_D4                                                 0x1809BDD4
#define  KME_IPME1_KME_IPME1_D4_reg_addr                                         "0xB809BDD4"
#define  KME_IPME1_KME_IPME1_D4_reg                                              0xB809BDD4
#define  KME_IPME1_KME_IPME1_D4_inst_addr                                        "0x0035"
#define  set_KME_IPME1_KME_IPME1_D4_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_D4_reg)=data)
#define  get_KME_IPME1_KME_IPME1_D4_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_D4_reg))
#define  KME_IPME1_KME_IPME1_D4_regr_ipme_cprs_motion_diff_21_shift              (0)
#define  KME_IPME1_KME_IPME1_D4_regr_ipme_cprs_motion_diff_21_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_D4_regr_ipme_cprs_motion_diff_21(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_D4_get_regr_ipme_cprs_motion_diff_21(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_D8                                                 0x1809BDD8
#define  KME_IPME1_KME_IPME1_D8_reg_addr                                         "0xB809BDD8"
#define  KME_IPME1_KME_IPME1_D8_reg                                              0xB809BDD8
#define  KME_IPME1_KME_IPME1_D8_inst_addr                                        "0x0036"
#define  set_KME_IPME1_KME_IPME1_D8_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_D8_reg)=data)
#define  get_KME_IPME1_KME_IPME1_D8_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_D8_reg))
#define  KME_IPME1_KME_IPME1_D8_regr_ipme_cprs_motion_diff_30_shift              (0)
#define  KME_IPME1_KME_IPME1_D8_regr_ipme_cprs_motion_diff_30_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_D8_regr_ipme_cprs_motion_diff_30(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_D8_get_regr_ipme_cprs_motion_diff_30(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_DC                                                 0x1809BDDC
#define  KME_IPME1_KME_IPME1_DC_reg_addr                                         "0xB809BDDC"
#define  KME_IPME1_KME_IPME1_DC_reg                                              0xB809BDDC
#define  KME_IPME1_KME_IPME1_DC_inst_addr                                        "0x0037"
#define  set_KME_IPME1_KME_IPME1_DC_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_DC_reg)=data)
#define  get_KME_IPME1_KME_IPME1_DC_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_DC_reg))
#define  KME_IPME1_KME_IPME1_DC_regr_ipme_cprs_motion_diff_31_shift              (0)
#define  KME_IPME1_KME_IPME1_DC_regr_ipme_cprs_motion_diff_31_mask               (0xFFFFFFFF)
#define  KME_IPME1_KME_IPME1_DC_regr_ipme_cprs_motion_diff_31(data)              (0xFFFFFFFF&(data))
#define  KME_IPME1_KME_IPME1_DC_get_regr_ipme_cprs_motion_diff_31(data)          (0xFFFFFFFF&(data))

#define  KME_IPME1_KME_IPME1_E0                                                 0x1809BDE0
#define  KME_IPME1_KME_IPME1_E0_reg_addr                                         "0xB809BDE0"
#define  KME_IPME1_KME_IPME1_E0_reg                                              0xB809BDE0
#define  KME_IPME1_KME_IPME1_E0_inst_addr                                        "0x0038"
#define  set_KME_IPME1_KME_IPME1_E0_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_E0_reg)=data)
#define  get_KME_IPME1_KME_IPME1_E0_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_E0_reg))
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v2_shift                     (20)
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v1_shift                     (10)
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v0_shift                     (0)
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v2_mask                      (0x3FF00000)
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v1_mask                      (0x000FFC00)
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v0_mask                      (0x000003FF)
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v2(data)                     (0x3FF00000&((data)<<20))
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v1(data)                     (0x000FFC00&((data)<<10))
#define  KME_IPME1_KME_IPME1_E0_ipme_fmdet_9region1_v0(data)                     (0x000003FF&(data))
#define  KME_IPME1_KME_IPME1_E0_get_ipme_fmdet_9region1_v2(data)                 ((0x3FF00000&(data))>>20)
#define  KME_IPME1_KME_IPME1_E0_get_ipme_fmdet_9region1_v1(data)                 ((0x000FFC00&(data))>>10)
#define  KME_IPME1_KME_IPME1_E0_get_ipme_fmdet_9region1_v0(data)                 (0x000003FF&(data))

#define  KME_IPME1_KME_IPME1_E4                                                 0x1809BDE4
#define  KME_IPME1_KME_IPME1_E4_reg_addr                                         "0xB809BDE4"
#define  KME_IPME1_KME_IPME1_E4_reg                                              0xB809BDE4
#define  KME_IPME1_KME_IPME1_E4_inst_addr                                        "0x0039"
#define  set_KME_IPME1_KME_IPME1_E4_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_E4_reg)=data)
#define  get_KME_IPME1_KME_IPME1_E4_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_E4_reg))
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v5_shift                     (20)
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v4_shift                     (10)
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v3_shift                     (0)
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v5_mask                      (0x3FF00000)
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v4_mask                      (0x000FFC00)
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v3_mask                      (0x000003FF)
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v5(data)                     (0x3FF00000&((data)<<20))
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v4(data)                     (0x000FFC00&((data)<<10))
#define  KME_IPME1_KME_IPME1_E4_ipme_fmdet_9region1_v3(data)                     (0x000003FF&(data))
#define  KME_IPME1_KME_IPME1_E4_get_ipme_fmdet_9region1_v5(data)                 ((0x3FF00000&(data))>>20)
#define  KME_IPME1_KME_IPME1_E4_get_ipme_fmdet_9region1_v4(data)                 ((0x000FFC00&(data))>>10)
#define  KME_IPME1_KME_IPME1_E4_get_ipme_fmdet_9region1_v3(data)                 (0x000003FF&(data))

#define  KME_IPME1_KME_IPME1_E8                                                 0x1809BDE8
#define  KME_IPME1_KME_IPME1_E8_reg_addr                                         "0xB809BDE8"
#define  KME_IPME1_KME_IPME1_E8_reg                                              0xB809BDE8
#define  KME_IPME1_KME_IPME1_E8_inst_addr                                        "0x003A"
#define  set_KME_IPME1_KME_IPME1_E8_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_E8_reg)=data)
#define  get_KME_IPME1_KME_IPME1_E8_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_E8_reg))
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v8_shift                     (20)
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v7_shift                     (10)
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v6_shift                     (0)
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v8_mask                      (0x3FF00000)
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v7_mask                      (0x000FFC00)
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v6_mask                      (0x000003FF)
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v8(data)                     (0x3FF00000&((data)<<20))
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v7(data)                     (0x000FFC00&((data)<<10))
#define  KME_IPME1_KME_IPME1_E8_ipme_fmdet_9region1_v6(data)                     (0x000003FF&(data))
#define  KME_IPME1_KME_IPME1_E8_get_ipme_fmdet_9region1_v8(data)                 ((0x3FF00000&(data))>>20)
#define  KME_IPME1_KME_IPME1_E8_get_ipme_fmdet_9region1_v7(data)                 ((0x000FFC00&(data))>>10)
#define  KME_IPME1_KME_IPME1_E8_get_ipme_fmdet_9region1_v6(data)                 (0x000003FF&(data))

#define  KME_IPME1_KME_IPME1_EC                                                 0x1809BDEC
#define  KME_IPME1_KME_IPME1_EC_reg_addr                                         "0xB809BDEC"
#define  KME_IPME1_KME_IPME1_EC_reg                                              0xB809BDEC
#define  KME_IPME1_KME_IPME1_EC_inst_addr                                        "0x003B"
#define  set_KME_IPME1_KME_IPME1_EC_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_EC_reg)=data)
#define  get_KME_IPME1_KME_IPME1_EC_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_EC_reg))
#define  KME_IPME1_KME_IPME1_EC_ipme_fmdet_9region1_v9_shift                     (0)
#define  KME_IPME1_KME_IPME1_EC_ipme_fmdet_9region1_v9_mask                      (0x000003FF)
#define  KME_IPME1_KME_IPME1_EC_ipme_fmdet_9region1_v9(data)                     (0x000003FF&(data))
#define  KME_IPME1_KME_IPME1_EC_get_ipme_fmdet_9region1_v9(data)                 (0x000003FF&(data))

#define  KME_IPME1_KME_IPME1_F0                                                 0x1809BDF0
#define  KME_IPME1_KME_IPME1_F0_reg_addr                                         "0xB809BDF0"
#define  KME_IPME1_KME_IPME1_F0_reg                                              0xB809BDF0
#define  KME_IPME1_KME_IPME1_F0_inst_addr                                        "0x003C"
#define  set_KME_IPME1_KME_IPME1_F0_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_F0_reg)=data)
#define  get_KME_IPME1_KME_IPME1_F0_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_F0_reg))
#define  KME_IPME1_KME_IPME1_F0_ipme_fdet_mot_16region12_shift                   (0)
#define  KME_IPME1_KME_IPME1_F0_ipme_fdet_mot_16region12_mask                    (0x07FFFFFF)
#define  KME_IPME1_KME_IPME1_F0_ipme_fdet_mot_16region12(data)                   (0x07FFFFFF&(data))
#define  KME_IPME1_KME_IPME1_F0_get_ipme_fdet_mot_16region12(data)               (0x07FFFFFF&(data))

#define  KME_IPME1_KME_IPME1_F4                                                 0x1809BDF4
#define  KME_IPME1_KME_IPME1_F4_reg_addr                                         "0xB809BDF4"
#define  KME_IPME1_KME_IPME1_F4_reg                                              0xB809BDF4
#define  KME_IPME1_KME_IPME1_F4_inst_addr                                        "0x003D"
#define  set_KME_IPME1_KME_IPME1_F4_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_F4_reg)=data)
#define  get_KME_IPME1_KME_IPME1_F4_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_F4_reg))
#define  KME_IPME1_KME_IPME1_F4_ipme_fdet_mot_16region13_shift                   (0)
#define  KME_IPME1_KME_IPME1_F4_ipme_fdet_mot_16region13_mask                    (0x07FFFFFF)
#define  KME_IPME1_KME_IPME1_F4_ipme_fdet_mot_16region13(data)                   (0x07FFFFFF&(data))
#define  KME_IPME1_KME_IPME1_F4_get_ipme_fdet_mot_16region13(data)               (0x07FFFFFF&(data))

#define  KME_IPME1_KME_IPME1_F8                                                 0x1809BDF8
#define  KME_IPME1_KME_IPME1_F8_reg_addr                                         "0xB809BDF8"
#define  KME_IPME1_KME_IPME1_F8_reg                                              0xB809BDF8
#define  KME_IPME1_KME_IPME1_F8_inst_addr                                        "0x003E"
#define  set_KME_IPME1_KME_IPME1_F8_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_F8_reg)=data)
#define  get_KME_IPME1_KME_IPME1_F8_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_F8_reg))
#define  KME_IPME1_KME_IPME1_F8_ipme_fdet_mot_16region14_shift                   (0)
#define  KME_IPME1_KME_IPME1_F8_ipme_fdet_mot_16region14_mask                    (0x07FFFFFF)
#define  KME_IPME1_KME_IPME1_F8_ipme_fdet_mot_16region14(data)                   (0x07FFFFFF&(data))
#define  KME_IPME1_KME_IPME1_F8_get_ipme_fdet_mot_16region14(data)               (0x07FFFFFF&(data))

#define  KME_IPME1_KME_IPME1_FC                                                 0x1809BDFC
#define  KME_IPME1_KME_IPME1_FC_reg_addr                                         "0xB809BDFC"
#define  KME_IPME1_KME_IPME1_FC_reg                                              0xB809BDFC
#define  KME_IPME1_KME_IPME1_FC_inst_addr                                        "0x003F"
#define  set_KME_IPME1_KME_IPME1_FC_reg(data)                                    (*((volatile unsigned int*)KME_IPME1_KME_IPME1_FC_reg)=data)
#define  get_KME_IPME1_KME_IPME1_FC_reg                                          (*((volatile unsigned int*)KME_IPME1_KME_IPME1_FC_reg))
#define  KME_IPME1_KME_IPME1_FC_ipme_fdet_mot_16region15_shift                   (0)
#define  KME_IPME1_KME_IPME1_FC_ipme_fdet_mot_16region15_mask                    (0x07FFFFFF)
#define  KME_IPME1_KME_IPME1_FC_ipme_fdet_mot_16region15(data)                   (0x07FFFFFF&(data))
#define  KME_IPME1_KME_IPME1_FC_get_ipme_fdet_mot_16region15(data)               (0x07FFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_IPME1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  kme_ipme_sram_ls_value:1;
        RBus_UInt32  kme_ipme_sram_ls_en:1;
        RBus_UInt32  ipme_film_det_rb_start_p:1;
        RBus_UInt32  ipme_film_det_rb_sel:4;
        RBus_UInt32  ipme_fmdet_v_active:10;
        RBus_UInt32  ipme_fmdet_h_active:10;
    };
}kme_ipme1_kme_ipme1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  ipme_cprs_mdiff_sub_y_num:4;
        RBus_UInt32  ipme_cprs_mdiff_sub_x_num:4;
        RBus_UInt32  ipme_cprs_mdiff_shift:4;
    };
}kme_ipme1_kme_ipme1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy0:32;
    };
}kme_ipme1_kme_ipme1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1:32;
    };
}kme_ipme1_kme_ipme1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film0_film_det:32;
    };
}kme_ipme1_kme_ipme1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film1_film_det:32;
    };
}kme_ipme1_kme_ipme1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film2_film_det:32;
    };
}kme_ipme1_kme_ipme1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film3_film_det:32;
    };
}kme_ipme1_kme_ipme1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film4_film_det:32;
    };
}kme_ipme1_kme_ipme1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film5_film_det:32;
    };
}kme_ipme1_kme_ipme1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film6_film_det:32;
    };
}kme_ipme1_kme_ipme1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film7_film_det:32;
    };
}kme_ipme1_kme_ipme1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film8_film_det:32;
    };
}kme_ipme1_kme_ipme1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film9_film_det:32;
    };
}kme_ipme1_kme_ipme1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film10_film_det:32;
    };
}kme_ipme1_kme_ipme1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film11_film_det:32;
    };
}kme_ipme1_kme_ipme1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film0_film_det:32;
    };
}kme_ipme1_kme_ipme1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film1_film_det:32;
    };
}kme_ipme1_kme_ipme1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film2_film_det:32;
    };
}kme_ipme1_kme_ipme1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film3_film_det:32;
    };
}kme_ipme1_kme_ipme1_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film4_film_det:32;
    };
}kme_ipme1_kme_ipme1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film5_film_det:32;
    };
}kme_ipme1_kme_ipme1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film6_film_det:32;
    };
}kme_ipme1_kme_ipme1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film7_film_det:32;
    };
}kme_ipme1_kme_ipme1_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film8_film_det:32;
    };
}kme_ipme1_kme_ipme1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film9_film_det:32;
    };
}kme_ipme1_kme_ipme1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film10_film_det:32;
    };
}kme_ipme1_kme_ipme1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film11_film_det:32;
    };
}kme_ipme1_kme_ipme1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film0_film_det:32;
    };
}kme_ipme1_kme_ipme1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film1_film_det:32;
    };
}kme_ipme1_kme_ipme1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film2_film_det:32;
    };
}kme_ipme1_kme_ipme1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film3_film_det:32;
    };
}kme_ipme1_kme_ipme1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film4_film_det:32;
    };
}kme_ipme1_kme_ipme1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film5_film_det:32;
    };
}kme_ipme1_kme_ipme1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film6_film_det:32;
    };
}kme_ipme1_kme_ipme1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film7_film_det:32;
    };
}kme_ipme1_kme_ipme1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film8_film_det:32;
    };
}kme_ipme1_kme_ipme1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film9_film_det:32;
    };
}kme_ipme1_kme_ipme1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film10_film_det:32;
    };
}kme_ipme1_kme_ipme1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film11_film_det:32;
    };
}kme_ipme1_kme_ipme1_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_4_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_3_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_2_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_1_apl:8;
    };
}kme_ipme1_kme_ipme1_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_8_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_7_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_6_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_5_apl:8;
    };
}kme_ipme1_kme_ipme1_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_12_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_11_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_10_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_9_apl:8;
    };
}kme_ipme1_kme_ipme1_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_16_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_15_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_14_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_13_apl:8;
    };
}kme_ipme1_kme_ipme1_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_20_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_19_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_18_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_17_apl:8;
    };
}kme_ipme1_kme_ipme1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_24_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_23_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_22_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_21_apl:8;
    };
}kme_ipme1_kme_ipme1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_28_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_27_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_26_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_25_apl:8;
    };
}kme_ipme1_kme_ipme1_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_32_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_31_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_30_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_29_apl:8;
    };
}kme_ipme1_kme_ipme1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_00:32;
    };
}kme_ipme1_kme_ipme1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_01:32;
    };
}kme_ipme1_kme_ipme1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_10:32;
    };
}kme_ipme1_kme_ipme1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_11:32;
    };
}kme_ipme1_kme_ipme1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_20:32;
    };
}kme_ipme1_kme_ipme1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_21:32;
    };
}kme_ipme1_kme_ipme1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_30:32;
    };
}kme_ipme1_kme_ipme1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_31:32;
    };
}kme_ipme1_kme_ipme1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ipme_fmdet_9region1_v2:10;
        RBus_UInt32  ipme_fmdet_9region1_v1:10;
        RBus_UInt32  ipme_fmdet_9region1_v0:10;
    };
}kme_ipme1_kme_ipme1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ipme_fmdet_9region1_v5:10;
        RBus_UInt32  ipme_fmdet_9region1_v4:10;
        RBus_UInt32  ipme_fmdet_9region1_v3:10;
    };
}kme_ipme1_kme_ipme1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ipme_fmdet_9region1_v8:10;
        RBus_UInt32  ipme_fmdet_9region1_v7:10;
        RBus_UInt32  ipme_fmdet_9region1_v6:10;
    };
}kme_ipme1_kme_ipme1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  ipme_fmdet_9region1_v9:10;
    };
}kme_ipme1_kme_ipme1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_16region12:27;
    };
}kme_ipme1_kme_ipme1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_16region13:27;
    };
}kme_ipme1_kme_ipme1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_16region14:27;
    };
}kme_ipme1_kme_ipme1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  ipme_fdet_mot_16region15:27;
    };
}kme_ipme1_kme_ipme1_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_IPME1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_h_active:10;
        RBus_UInt32  ipme_fmdet_v_active:10;
        RBus_UInt32  ipme_film_det_rb_sel:4;
        RBus_UInt32  ipme_film_det_rb_start_p:1;
        RBus_UInt32  kme_ipme_sram_ls_en:1;
        RBus_UInt32  kme_ipme_sram_ls_value:1;
        RBus_UInt32  res1:5;
    };
}kme_ipme1_kme_ipme1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_cprs_mdiff_shift:4;
        RBus_UInt32  ipme_cprs_mdiff_sub_x_num:4;
        RBus_UInt32  ipme_cprs_mdiff_sub_y_num:4;
        RBus_UInt32  res1:20;
    };
}kme_ipme1_kme_ipme1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy0:32;
    };
}kme_ipme1_kme_ipme1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1:32;
    };
}kme_ipme1_kme_ipme1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film0_film_det:32;
    };
}kme_ipme1_kme_ipme1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film1_film_det:32;
    };
}kme_ipme1_kme_ipme1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film2_film_det:32;
    };
}kme_ipme1_kme_ipme1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film3_film_det:32;
    };
}kme_ipme1_kme_ipme1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film4_film_det:32;
    };
}kme_ipme1_kme_ipme1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film5_film_det:32;
    };
}kme_ipme1_kme_ipme1_24_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film6_film_det:32;
    };
}kme_ipme1_kme_ipme1_28_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film7_film_det:32;
    };
}kme_ipme1_kme_ipme1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film8_film_det:32;
    };
}kme_ipme1_kme_ipme1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film9_film_det:32;
    };
}kme_ipme1_kme_ipme1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film10_film_det:32;
    };
}kme_ipme1_kme_ipme1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme0_film11_film_det:32;
    };
}kme_ipme1_kme_ipme1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film0_film_det:32;
    };
}kme_ipme1_kme_ipme1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film1_film_det:32;
    };
}kme_ipme1_kme_ipme1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film2_film_det:32;
    };
}kme_ipme1_kme_ipme1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film3_film_det:32;
    };
}kme_ipme1_kme_ipme1_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film4_film_det:32;
    };
}kme_ipme1_kme_ipme1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film5_film_det:32;
    };
}kme_ipme1_kme_ipme1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film6_film_det:32;
    };
}kme_ipme1_kme_ipme1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film7_film_det:32;
    };
}kme_ipme1_kme_ipme1_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film8_film_det:32;
    };
}kme_ipme1_kme_ipme1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film9_film_det:32;
    };
}kme_ipme1_kme_ipme1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film10_film_det:32;
    };
}kme_ipme1_kme_ipme1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme1_film11_film_det:32;
    };
}kme_ipme1_kme_ipme1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film0_film_det:32;
    };
}kme_ipme1_kme_ipme1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film1_film_det:32;
    };
}kme_ipme1_kme_ipme1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film2_film_det:32;
    };
}kme_ipme1_kme_ipme1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film3_film_det:32;
    };
}kme_ipme1_kme_ipme1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film4_film_det:32;
    };
}kme_ipme1_kme_ipme1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film5_film_det:32;
    };
}kme_ipme1_kme_ipme1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film6_film_det:32;
    };
}kme_ipme1_kme_ipme1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film7_film_det:32;
    };
}kme_ipme1_kme_ipme1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film8_film_det:32;
    };
}kme_ipme1_kme_ipme1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film9_film_det:32;
    };
}kme_ipme1_kme_ipme1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film10_film_det:32;
    };
}kme_ipme1_kme_ipme1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme2_film11_film_det:32;
    };
}kme_ipme1_kme_ipme1_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_1_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_2_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_3_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_4_apl:8;
    };
}kme_ipme1_kme_ipme1_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_5_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_6_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_7_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_8_apl:8;
    };
}kme_ipme1_kme_ipme1_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_9_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_10_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_11_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_12_apl:8;
    };
}kme_ipme1_kme_ipme1_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_13_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_14_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_15_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_16_apl:8;
    };
}kme_ipme1_kme_ipme1_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_17_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_18_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_19_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_20_apl:8;
    };
}kme_ipme1_kme_ipme1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_21_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_22_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_23_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_24_apl:8;
    };
}kme_ipme1_kme_ipme1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_25_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_26_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_27_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_28_apl:8;
    };
}kme_ipme1_kme_ipme1_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_fdet_region32_29_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_30_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_31_apl:8;
        RBus_UInt32  regr_ipme_fdet_region32_32_apl:8;
    };
}kme_ipme1_kme_ipme1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_00:32;
    };
}kme_ipme1_kme_ipme1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_01:32;
    };
}kme_ipme1_kme_ipme1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_10:32;
    };
}kme_ipme1_kme_ipme1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_11:32;
    };
}kme_ipme1_kme_ipme1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_20:32;
    };
}kme_ipme1_kme_ipme1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_21:32;
    };
}kme_ipme1_kme_ipme1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_30:32;
    };
}kme_ipme1_kme_ipme1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ipme_cprs_motion_diff_31:32;
    };
}kme_ipme1_kme_ipme1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_9region1_v0:10;
        RBus_UInt32  ipme_fmdet_9region1_v1:10;
        RBus_UInt32  ipme_fmdet_9region1_v2:10;
        RBus_UInt32  res1:2;
    };
}kme_ipme1_kme_ipme1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_9region1_v3:10;
        RBus_UInt32  ipme_fmdet_9region1_v4:10;
        RBus_UInt32  ipme_fmdet_9region1_v5:10;
        RBus_UInt32  res1:2;
    };
}kme_ipme1_kme_ipme1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_9region1_v6:10;
        RBus_UInt32  ipme_fmdet_9region1_v7:10;
        RBus_UInt32  ipme_fmdet_9region1_v8:10;
        RBus_UInt32  res1:2;
    };
}kme_ipme1_kme_ipme1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fmdet_9region1_v9:10;
        RBus_UInt32  res1:22;
    };
}kme_ipme1_kme_ipme1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_16region12:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme1_kme_ipme1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_16region13:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme1_kme_ipme1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_16region14:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme1_kme_ipme1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ipme_fdet_mot_16region15:27;
        RBus_UInt32  res1:5;
    };
}kme_ipme1_kme_ipme1_fc_RBUS;




#endif 


#endif 
