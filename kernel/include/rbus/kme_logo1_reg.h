/**
* @file Merlin5_MEMC_KME_LOGO1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_KME_LOGO1_REG_H_
#define _RBUS_KME_LOGO1_REG_H_

#include "rbus_types.h"



//  KME_LOGO1 Register Address
#define  KME_LOGO1_KME_LOGO1_00                                                 0x1809BF00
#define  KME_LOGO1_KME_LOGO1_00_reg_addr                                         "0xB809BF00"
#define  KME_LOGO1_KME_LOGO1_00_reg                                              0xB809BF00
#define  KME_LOGO1_KME_LOGO1_00_inst_addr                                        "0x0000"
#define  set_KME_LOGO1_KME_LOGO1_00_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_00_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_00_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_00_reg))
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_prevarth_shift                (16)
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_curvarth_shift                (8)
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_madth_shift                   (0)
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_prevarth_mask                 (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_curvarth_mask                 (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_madth_mask                    (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_prevarth(data)                (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_curvarth(data)                (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_00_km_logo_blklogodlt_madth(data)                   (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_00_get_km_logo_blklogodlt_prevarth(data)            ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_00_get_km_logo_blklogodlt_curvarth(data)            ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_00_get_km_logo_blklogodlt_madth(data)               (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_04                                                 0x1809BF04
#define  KME_LOGO1_KME_LOGO1_04_reg_addr                                         "0xB809BF04"
#define  KME_LOGO1_KME_LOGO1_04_reg                                              0xB809BF04
#define  KME_LOGO1_KME_LOGO1_04_inst_addr                                        "0x0001"
#define  set_KME_LOGO1_KME_LOGO1_04_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_04_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_04_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_04_reg))
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_v1_shift                         (24)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_v0_shift                         (16)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_h1_shift                         (8)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_h0_shift                         (0)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_v1_mask                          (0xFF000000)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_v0_mask                          (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_h1_mask                          (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_h0_mask                          (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_v1(data)                         (0xFF000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_v0(data)                         (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_h1(data)                         (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_04_km_logo_blk_rim_h0(data)                         (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_04_get_km_logo_blk_rim_v1(data)                     ((0xFF000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_04_get_km_logo_blk_rim_v0(data)                     ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_04_get_km_logo_blk_rim_h1(data)                     ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_04_get_km_logo_blk_rim_h0(data)                     (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_08                                                 0x1809BF08
#define  KME_LOGO1_KME_LOGO1_08_reg_addr                                         "0xB809BF08"
#define  KME_LOGO1_KME_LOGO1_08_reg                                              0xB809BF08
#define  KME_LOGO1_KME_LOGO1_08_inst_addr                                        "0x0002"
#define  set_KME_LOGO1_KME_LOGO1_08_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_08_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_08_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_08_reg))
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x3_shift                      (24)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x2_shift                      (16)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x1_shift                      (8)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x0_shift                      (0)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x3_mask                       (0xFF000000)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x2_mask                       (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x1_mask                       (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x0_mask                       (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x3(data)                      (0xFF000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x2(data)                      (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x1(data)                      (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_08_km_logo_region_blk_x0(data)                      (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_08_get_km_logo_region_blk_x3(data)                  ((0xFF000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_08_get_km_logo_region_blk_x2(data)                  ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_08_get_km_logo_region_blk_x1(data)                  ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_08_get_km_logo_region_blk_x0(data)                  (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_0C                                                 0x1809BF0C
#define  KME_LOGO1_KME_LOGO1_0C_reg_addr                                         "0xB809BF0C"
#define  KME_LOGO1_KME_LOGO1_0C_reg                                              0xB809BF0C
#define  KME_LOGO1_KME_LOGO1_0C_inst_addr                                        "0x0003"
#define  set_KME_LOGO1_KME_LOGO1_0C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_0C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_0C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_0C_reg))
#define  KME_LOGO1_KME_LOGO1_0C_km_logo_region_blk_y1_shift                      (8)
#define  KME_LOGO1_KME_LOGO1_0C_km_logo_region_blk_y0_shift                      (0)
#define  KME_LOGO1_KME_LOGO1_0C_km_logo_region_blk_y1_mask                       (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_0C_km_logo_region_blk_y0_mask                       (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_0C_km_logo_region_blk_y1(data)                      (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_0C_km_logo_region_blk_y0(data)                      (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_0C_get_km_logo_region_blk_y1(data)                  ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_0C_get_km_logo_region_blk_y0(data)                  (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_10                                                 0x1809BF10
#define  KME_LOGO1_KME_LOGO1_10_reg_addr                                         "0xB809BF10"
#define  KME_LOGO1_KME_LOGO1_10_reg                                              0xB809BF10
#define  KME_LOGO1_KME_LOGO1_10_inst_addr                                        "0x0004"
#define  set_KME_LOGO1_KME_LOGO1_10_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_10_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_10_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_10_reg))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx7_shift                  (28)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx6_shift                  (24)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx5_shift                  (20)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx4_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx3_shift                  (12)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx2_shift                  (8)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx1_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx0_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx7_mask                   (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx6_mask                   (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx5_mask                   (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx4_mask                   (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx3_mask                   (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx2_mask                   (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx1_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx0_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx7(data)                  (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx6(data)                  (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx5(data)                  (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx4(data)                  (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx3(data)                  (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx2(data)                  (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx1(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_10_km_logo_blkhsty_pth_bidx0(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx7(data)              ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx6(data)              ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx5(data)              ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx4(data)              ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx3(data)              ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx2(data)              ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx1(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_10_get_km_logo_blkhsty_pth_bidx0(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_14                                                 0x1809BF14
#define  KME_LOGO1_KME_LOGO1_14_reg_addr                                         "0xB809BF14"
#define  KME_LOGO1_KME_LOGO1_14_reg                                              0xB809BF14
#define  KME_LOGO1_KME_LOGO1_14_inst_addr                                        "0x0005"
#define  set_KME_LOGO1_KME_LOGO1_14_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_14_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_14_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_14_reg))
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx14_shift                 (24)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx13_shift                 (20)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx12_shift                 (16)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx11_shift                 (12)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx10_shift                 (8)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx9_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx8_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx14_mask                  (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx13_mask                  (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx12_mask                  (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx11_mask                  (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx10_mask                  (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx9_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx8_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx14(data)                 (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx13(data)                 (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx12(data)                 (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx11(data)                 (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx10(data)                 (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx9(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_14_km_logo_blkhsty_pth_bidx8(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_14_get_km_logo_blkhsty_pth_bidx14(data)             ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_14_get_km_logo_blkhsty_pth_bidx13(data)             ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_14_get_km_logo_blkhsty_pth_bidx12(data)             ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_14_get_km_logo_blkhsty_pth_bidx11(data)             ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_14_get_km_logo_blkhsty_pth_bidx10(data)             ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_14_get_km_logo_blkhsty_pth_bidx9(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_14_get_km_logo_blkhsty_pth_bidx8(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_18                                                 0x1809BF18
#define  KME_LOGO1_KME_LOGO1_18_reg_addr                                         "0xB809BF18"
#define  KME_LOGO1_KME_LOGO1_18_reg                                              0xB809BF18
#define  KME_LOGO1_KME_LOGO1_18_inst_addr                                        "0x0006"
#define  set_KME_LOGO1_KME_LOGO1_18_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_18_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_18_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_18_reg))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx7_shift                  (28)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx6_shift                  (24)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx5_shift                  (20)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx4_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx3_shift                  (12)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx2_shift                  (8)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx1_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx0_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx7_mask                   (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx6_mask                   (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx5_mask                   (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx4_mask                   (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx3_mask                   (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx2_mask                   (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx1_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx0_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx7(data)                  (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx6(data)                  (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx5(data)                  (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx4(data)                  (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx3(data)                  (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx2(data)                  (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx1(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_18_km_logo_blkhsty_nth_bidx0(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx7(data)              ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx6(data)              ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx5(data)              ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx4(data)              ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx3(data)              ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx2(data)              ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx1(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_18_get_km_logo_blkhsty_nth_bidx0(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_1C                                                 0x1809BF1C
#define  KME_LOGO1_KME_LOGO1_1C_reg_addr                                         "0xB809BF1C"
#define  KME_LOGO1_KME_LOGO1_1C_reg                                              0xB809BF1C
#define  KME_LOGO1_KME_LOGO1_1C_inst_addr                                        "0x0007"
#define  set_KME_LOGO1_KME_LOGO1_1C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_1C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_1C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_1C_reg))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blk_hsty_th_dlt_shift                    (28)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx14_shift                 (24)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx13_shift                 (20)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx12_shift                 (16)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx11_shift                 (12)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx10_shift                 (8)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx9_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx8_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blk_hsty_th_dlt_mask                     (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx14_mask                  (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx13_mask                  (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx12_mask                  (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx11_mask                  (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx10_mask                  (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx9_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx8_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blk_hsty_th_dlt(data)                    (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx14(data)                 (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx13(data)                 (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx12(data)                 (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx11(data)                 (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx10(data)                 (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx9(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_1C_km_logo_blkhsty_nth_bidx8(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blk_hsty_th_dlt(data)                ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blkhsty_nth_bidx14(data)             ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blkhsty_nth_bidx13(data)             ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blkhsty_nth_bidx12(data)             ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blkhsty_nth_bidx11(data)             ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blkhsty_nth_bidx10(data)             ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blkhsty_nth_bidx9(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_1C_get_km_logo_blkhsty_nth_bidx8(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_20                                                 0x1809BF20
#define  KME_LOGO1_KME_LOGO1_20_reg_addr                                         "0xB809BF20"
#define  KME_LOGO1_KME_LOGO1_20_reg                                              0xB809BF20
#define  KME_LOGO1_KME_LOGO1_20_inst_addr                                        "0x0008"
#define  set_KME_LOGO1_KME_LOGO1_20_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_20_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_20_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_20_reg))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx14_shift              (14)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx13_shift              (13)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx12_shift              (12)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx11_shift              (11)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx10_shift              (10)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx9_shift               (9)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx8_shift               (8)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx7_shift               (7)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx6_shift               (6)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx5_shift               (5)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx4_shift               (4)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx3_shift               (3)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx2_shift               (2)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx1_shift               (1)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx0_shift               (0)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx14_mask               (0x00004000)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx13_mask               (0x00002000)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx12_mask               (0x00001000)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx11_mask               (0x00000800)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx10_mask               (0x00000400)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx9_mask                (0x00000200)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx8_mask                (0x00000100)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx7_mask                (0x00000080)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx6_mask                (0x00000040)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx5_mask                (0x00000020)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx4_mask                (0x00000010)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx3_mask                (0x00000008)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx2_mask                (0x00000004)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx1_mask                (0x00000002)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx0_mask                (0x00000001)
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx14(data)              (0x00004000&((data)<<14))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx13(data)              (0x00002000&((data)<<13))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx12(data)              (0x00001000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx11(data)              (0x00000800&((data)<<11))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx10(data)              (0x00000400&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx9(data)               (0x00000200&((data)<<9))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx8(data)               (0x00000100&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx7(data)               (0x00000080&((data)<<7))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx6(data)               (0x00000040&((data)<<6))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx5(data)               (0x00000020&((data)<<5))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx4(data)               (0x00000010&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx3(data)               (0x00000008&((data)<<3))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx2(data)               (0x00000004&((data)<<2))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx1(data)               (0x00000002&((data)<<1))
#define  KME_LOGO1_KME_LOGO1_20_km_logo_blklogo_outmet_bidx0(data)               (0x00000001&(data))
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx14(data)          ((0x00004000&(data))>>14)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx13(data)          ((0x00002000&(data))>>13)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx12(data)          ((0x00001000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx11(data)          ((0x00000800&(data))>>11)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx10(data)          ((0x00000400&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx9(data)           ((0x00000200&(data))>>9)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx8(data)           ((0x00000100&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx7(data)           ((0x00000080&(data))>>7)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx6(data)           ((0x00000040&(data))>>6)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx5(data)           ((0x00000020&(data))>>5)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx4(data)           ((0x00000010&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx3(data)           ((0x00000008&(data))>>3)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx2(data)           ((0x00000004&(data))>>2)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx1(data)           ((0x00000002&(data))>>1)
#define  KME_LOGO1_KME_LOGO1_20_get_km_logo_blklogo_outmet_bidx0(data)           (0x00000001&(data))

#define  KME_LOGO1_KME_LOGO1_2C                                                 0x1809BF2C
#define  KME_LOGO1_KME_LOGO1_2C_reg_addr                                         "0xB809BF2C"
#define  KME_LOGO1_KME_LOGO1_2C_reg                                              0xB809BF2C
#define  KME_LOGO1_KME_LOGO1_2C_inst_addr                                        "0x0009"
#define  set_KME_LOGO1_KME_LOGO1_2C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_2C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_2C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_2C_reg))
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x2_shift                   (19)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x1_shift                   (14)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x0_shift                   (9)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_hsty_base_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x2_mask                    (0x00F80000)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x1_mask                    (0x0007C000)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x0_mask                    (0x00003E00)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_hsty_base_mask                   (0x000001FF)
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x2(data)                   (0x00F80000&((data)<<19))
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x1(data)                   (0x0007C000&((data)<<14))
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_lgcnt_x0(data)                   (0x00003E00&((data)<<9))
#define  KME_LOGO1_KME_LOGO1_2C_km_logo_pxldfth_hsty_base(data)                  (0x000001FF&(data))
#define  KME_LOGO1_KME_LOGO1_2C_get_km_logo_pxldfth_lgcnt_x2(data)               ((0x00F80000&(data))>>19)
#define  KME_LOGO1_KME_LOGO1_2C_get_km_logo_pxldfth_lgcnt_x1(data)               ((0x0007C000&(data))>>14)
#define  KME_LOGO1_KME_LOGO1_2C_get_km_logo_pxldfth_lgcnt_x0(data)               ((0x00003E00&(data))>>9)
#define  KME_LOGO1_KME_LOGO1_2C_get_km_logo_pxldfth_hsty_base(data)              (0x000001FF&(data))

#define  KME_LOGO1_KME_LOGO1_30                                                 0x1809BF30
#define  KME_LOGO1_KME_LOGO1_30_reg_addr                                         "0xB809BF30"
#define  KME_LOGO1_KME_LOGO1_30_reg                                              0xB809BF30
#define  KME_LOGO1_KME_LOGO1_30_inst_addr                                        "0x000A"
#define  set_KME_LOGO1_KME_LOGO1_30_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_30_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_30_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_30_reg))
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y2_shift                   (16)
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y1_shift                   (8)
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y0_shift                   (0)
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y2_mask                    (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y1_mask                    (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y0_mask                    (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y2(data)                   (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y1(data)                   (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_30_km_logo_pxldfth_lgcnt_y0(data)                   (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_30_get_km_logo_pxldfth_lgcnt_y2(data)               ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_30_get_km_logo_pxldfth_lgcnt_y1(data)               ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_30_get_km_logo_pxldfth_lgcnt_y0(data)               (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_34                                                 0x1809BF34
#define  KME_LOGO1_KME_LOGO1_34_reg_addr                                         "0xB809BF34"
#define  KME_LOGO1_KME_LOGO1_34_reg                                              0xB809BF34
#define  KME_LOGO1_KME_LOGO1_34_inst_addr                                        "0x000B"
#define  set_KME_LOGO1_KME_LOGO1_34_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_34_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_34_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_34_reg))
#define  KME_LOGO1_KME_LOGO1_34_km_logo_pxldfth_lgcnt_slop1_shift                (5)
#define  KME_LOGO1_KME_LOGO1_34_km_logo_pxldfth_lgcnt_slop0_shift                (0)
#define  KME_LOGO1_KME_LOGO1_34_km_logo_pxldfth_lgcnt_slop1_mask                 (0x000003E0)
#define  KME_LOGO1_KME_LOGO1_34_km_logo_pxldfth_lgcnt_slop0_mask                 (0x0000001F)
#define  KME_LOGO1_KME_LOGO1_34_km_logo_pxldfth_lgcnt_slop1(data)                (0x000003E0&((data)<<5))
#define  KME_LOGO1_KME_LOGO1_34_km_logo_pxldfth_lgcnt_slop0(data)                (0x0000001F&(data))
#define  KME_LOGO1_KME_LOGO1_34_get_km_logo_pxldfth_lgcnt_slop1(data)            ((0x000003E0&(data))>>5)
#define  KME_LOGO1_KME_LOGO1_34_get_km_logo_pxldfth_lgcnt_slop0(data)            (0x0000001F&(data))

#define  KME_LOGO1_KME_LOGO1_38                                                 0x1809BF38
#define  KME_LOGO1_KME_LOGO1_38_reg_addr                                         "0xB809BF38"
#define  KME_LOGO1_KME_LOGO1_38_reg                                              0xB809BF38
#define  KME_LOGO1_KME_LOGO1_38_inst_addr                                        "0x000C"
#define  set_KME_LOGO1_KME_LOGO1_38_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_38_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_38_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_38_reg))
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x2_shift                (16)
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x1_shift                (8)
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x0_shift                (0)
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x2_mask                 (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x1_mask                 (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x0_mask                 (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x2(data)                (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x1(data)                (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_38_km_logo_pxldfth_hsty_pos_x0(data)                (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_38_get_km_logo_pxldfth_hsty_pos_x2(data)            ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_38_get_km_logo_pxldfth_hsty_pos_x1(data)            ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_38_get_km_logo_pxldfth_hsty_pos_x0(data)            (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_3C                                                 0x1809BF3C
#define  KME_LOGO1_KME_LOGO1_3C_reg_addr                                         "0xB809BF3C"
#define  KME_LOGO1_KME_LOGO1_3C_reg                                              0xB809BF3C
#define  KME_LOGO1_KME_LOGO1_3C_inst_addr                                        "0x000D"
#define  set_KME_LOGO1_KME_LOGO1_3C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_3C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_3C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_3C_reg))
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y2_shift                (16)
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y1_shift                (8)
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y0_shift                (0)
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y2_mask                 (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y1_mask                 (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y0_mask                 (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y2(data)                (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y1(data)                (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_3C_km_logo_pxldfth_hsty_pos_y0(data)                (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_3C_get_km_logo_pxldfth_hsty_pos_y2(data)            ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_3C_get_km_logo_pxldfth_hsty_pos_y1(data)            ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_3C_get_km_logo_pxldfth_hsty_pos_y0(data)            (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_40                                                 0x1809BF40
#define  KME_LOGO1_KME_LOGO1_40_reg_addr                                         "0xB809BF40"
#define  KME_LOGO1_KME_LOGO1_40_reg                                              0xB809BF40
#define  KME_LOGO1_KME_LOGO1_40_inst_addr                                        "0x000E"
#define  set_KME_LOGO1_KME_LOGO1_40_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_40_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_40_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_40_reg))
#define  KME_LOGO1_KME_LOGO1_40_km_logo_pxldfth_hsty_pos_slop1_shift             (6)
#define  KME_LOGO1_KME_LOGO1_40_km_logo_pxldfth_hsty_pos_slop0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_40_km_logo_pxldfth_hsty_pos_slop1_mask              (0x00000FC0)
#define  KME_LOGO1_KME_LOGO1_40_km_logo_pxldfth_hsty_pos_slop0_mask              (0x0000003F)
#define  KME_LOGO1_KME_LOGO1_40_km_logo_pxldfth_hsty_pos_slop1(data)             (0x00000FC0&((data)<<6))
#define  KME_LOGO1_KME_LOGO1_40_km_logo_pxldfth_hsty_pos_slop0(data)             (0x0000003F&(data))
#define  KME_LOGO1_KME_LOGO1_40_get_km_logo_pxldfth_hsty_pos_slop1(data)         ((0x00000FC0&(data))>>6)
#define  KME_LOGO1_KME_LOGO1_40_get_km_logo_pxldfth_hsty_pos_slop0(data)         (0x0000003F&(data))

#define  KME_LOGO1_KME_LOGO1_44                                                 0x1809BF44
#define  KME_LOGO1_KME_LOGO1_44_reg_addr                                         "0xB809BF44"
#define  KME_LOGO1_KME_LOGO1_44_reg                                              0xB809BF44
#define  KME_LOGO1_KME_LOGO1_44_inst_addr                                        "0x000F"
#define  set_KME_LOGO1_KME_LOGO1_44_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_44_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_44_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_44_reg))
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x2_shift                (16)
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x1_shift                (8)
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x0_shift                (0)
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x2_mask                 (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x1_mask                 (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x0_mask                 (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x2(data)                (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x1(data)                (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_44_km_logo_pxldfth_hsty_neg_x0(data)                (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_44_get_km_logo_pxldfth_hsty_neg_x2(data)            ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_44_get_km_logo_pxldfth_hsty_neg_x1(data)            ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_44_get_km_logo_pxldfth_hsty_neg_x0(data)            (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_48                                                 0x1809BF48
#define  KME_LOGO1_KME_LOGO1_48_reg_addr                                         "0xB809BF48"
#define  KME_LOGO1_KME_LOGO1_48_reg                                              0xB809BF48
#define  KME_LOGO1_KME_LOGO1_48_inst_addr                                        "0x0010"
#define  set_KME_LOGO1_KME_LOGO1_48_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_48_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_48_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_48_reg))
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y2_shift                (16)
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y1_shift                (8)
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y0_shift                (0)
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y2_mask                 (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y1_mask                 (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y0_mask                 (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y2(data)                (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y1(data)                (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_48_km_logo_pxldfth_hsty_neg_y0(data)                (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_48_get_km_logo_pxldfth_hsty_neg_y2(data)            ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_48_get_km_logo_pxldfth_hsty_neg_y1(data)            ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_48_get_km_logo_pxldfth_hsty_neg_y0(data)            (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_4C                                                 0x1809BF4C
#define  KME_LOGO1_KME_LOGO1_4C_reg_addr                                         "0xB809BF4C"
#define  KME_LOGO1_KME_LOGO1_4C_reg                                              0xB809BF4C
#define  KME_LOGO1_KME_LOGO1_4C_inst_addr                                        "0x0011"
#define  set_KME_LOGO1_KME_LOGO1_4C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_4C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_4C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_4C_reg))
#define  KME_LOGO1_KME_LOGO1_4C_km_logo_pxldfth_hsty_neg_slop1_shift             (6)
#define  KME_LOGO1_KME_LOGO1_4C_km_logo_pxldfth_hsty_neg_slop0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_4C_km_logo_pxldfth_hsty_neg_slop1_mask              (0x00000FC0)
#define  KME_LOGO1_KME_LOGO1_4C_km_logo_pxldfth_hsty_neg_slop0_mask              (0x0000003F)
#define  KME_LOGO1_KME_LOGO1_4C_km_logo_pxldfth_hsty_neg_slop1(data)             (0x00000FC0&((data)<<6))
#define  KME_LOGO1_KME_LOGO1_4C_km_logo_pxldfth_hsty_neg_slop0(data)             (0x0000003F&(data))
#define  KME_LOGO1_KME_LOGO1_4C_get_km_logo_pxldfth_hsty_neg_slop1(data)         ((0x00000FC0&(data))>>6)
#define  KME_LOGO1_KME_LOGO1_4C_get_km_logo_pxldfth_hsty_neg_slop0(data)         (0x0000003F&(data))

#define  KME_LOGO1_KME_LOGO1_50                                                 0x1809BF50
#define  KME_LOGO1_KME_LOGO1_50_reg_addr                                         "0xB809BF50"
#define  KME_LOGO1_KME_LOGO1_50_reg                                              0xB809BF50
#define  KME_LOGO1_KME_LOGO1_50_inst_addr                                        "0x0012"
#define  set_KME_LOGO1_KME_LOGO1_50_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_50_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_50_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_50_reg))
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x2_shift             (16)
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x1_shift             (8)
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x2_mask              (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x1_mask              (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x0_mask              (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x2(data)             (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x1(data)             (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_50_km_logo_pxldfth_blksame_pos_x0(data)             (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_50_get_km_logo_pxldfth_blksame_pos_x2(data)         ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_50_get_km_logo_pxldfth_blksame_pos_x1(data)         ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_50_get_km_logo_pxldfth_blksame_pos_x0(data)         (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_54                                                 0x1809BF54
#define  KME_LOGO1_KME_LOGO1_54_reg_addr                                         "0xB809BF54"
#define  KME_LOGO1_KME_LOGO1_54_reg                                              0xB809BF54
#define  KME_LOGO1_KME_LOGO1_54_inst_addr                                        "0x0013"
#define  set_KME_LOGO1_KME_LOGO1_54_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_54_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_54_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_54_reg))
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y2_shift             (16)
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y1_shift             (8)
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y2_mask              (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y1_mask              (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y0_mask              (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y2(data)             (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y1(data)             (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_54_km_logo_pxldfth_blksame_pos_y0(data)             (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_54_get_km_logo_pxldfth_blksame_pos_y2(data)         ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_54_get_km_logo_pxldfth_blksame_pos_y1(data)         ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_54_get_km_logo_pxldfth_blksame_pos_y0(data)         (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_58                                                 0x1809BF58
#define  KME_LOGO1_KME_LOGO1_58_reg_addr                                         "0xB809BF58"
#define  KME_LOGO1_KME_LOGO1_58_reg                                              0xB809BF58
#define  KME_LOGO1_KME_LOGO1_58_inst_addr                                        "0x0014"
#define  set_KME_LOGO1_KME_LOGO1_58_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_58_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_58_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_58_reg))
#define  KME_LOGO1_KME_LOGO1_58_km_logo_pxldfth_blksame_pos_slop1_shift          (6)
#define  KME_LOGO1_KME_LOGO1_58_km_logo_pxldfth_blksame_pos_slop0_shift          (0)
#define  KME_LOGO1_KME_LOGO1_58_km_logo_pxldfth_blksame_pos_slop1_mask           (0x00000FC0)
#define  KME_LOGO1_KME_LOGO1_58_km_logo_pxldfth_blksame_pos_slop0_mask           (0x0000003F)
#define  KME_LOGO1_KME_LOGO1_58_km_logo_pxldfth_blksame_pos_slop1(data)          (0x00000FC0&((data)<<6))
#define  KME_LOGO1_KME_LOGO1_58_km_logo_pxldfth_blksame_pos_slop0(data)          (0x0000003F&(data))
#define  KME_LOGO1_KME_LOGO1_58_get_km_logo_pxldfth_blksame_pos_slop1(data)      ((0x00000FC0&(data))>>6)
#define  KME_LOGO1_KME_LOGO1_58_get_km_logo_pxldfth_blksame_pos_slop0(data)      (0x0000003F&(data))

#define  KME_LOGO1_KME_LOGO1_5C                                                 0x1809BF5C
#define  KME_LOGO1_KME_LOGO1_5C_reg_addr                                         "0xB809BF5C"
#define  KME_LOGO1_KME_LOGO1_5C_reg                                              0xB809BF5C
#define  KME_LOGO1_KME_LOGO1_5C_inst_addr                                        "0x0015"
#define  set_KME_LOGO1_KME_LOGO1_5C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_5C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_5C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_5C_reg))
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x2_shift             (16)
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x1_shift             (8)
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x2_mask              (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x1_mask              (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x0_mask              (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x2(data)             (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x1(data)             (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_5C_km_logo_pxldfth_blksame_neg_x0(data)             (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_5C_get_km_logo_pxldfth_blksame_neg_x2(data)         ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_5C_get_km_logo_pxldfth_blksame_neg_x1(data)         ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_5C_get_km_logo_pxldfth_blksame_neg_x0(data)         (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_60                                                 0x1809BF60
#define  KME_LOGO1_KME_LOGO1_60_reg_addr                                         "0xB809BF60"
#define  KME_LOGO1_KME_LOGO1_60_reg                                              0xB809BF60
#define  KME_LOGO1_KME_LOGO1_60_inst_addr                                        "0x0016"
#define  set_KME_LOGO1_KME_LOGO1_60_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_60_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_60_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_60_reg))
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y2_shift             (16)
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y1_shift             (8)
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y2_mask              (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y1_mask              (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y0_mask              (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y2(data)             (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y1(data)             (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_60_km_logo_pxldfth_blksame_neg_y0(data)             (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_60_get_km_logo_pxldfth_blksame_neg_y2(data)         ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_60_get_km_logo_pxldfth_blksame_neg_y1(data)         ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_60_get_km_logo_pxldfth_blksame_neg_y0(data)         (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_64                                                 0x1809BF64
#define  KME_LOGO1_KME_LOGO1_64_reg_addr                                         "0xB809BF64"
#define  KME_LOGO1_KME_LOGO1_64_reg                                              0xB809BF64
#define  KME_LOGO1_KME_LOGO1_64_inst_addr                                        "0x0017"
#define  set_KME_LOGO1_KME_LOGO1_64_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_64_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_64_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_64_reg))
#define  KME_LOGO1_KME_LOGO1_64_km_logo_pxldfth_blksame_neg_slop1_shift          (6)
#define  KME_LOGO1_KME_LOGO1_64_km_logo_pxldfth_blksame_neg_slop0_shift          (0)
#define  KME_LOGO1_KME_LOGO1_64_km_logo_pxldfth_blksame_neg_slop1_mask           (0x00000FC0)
#define  KME_LOGO1_KME_LOGO1_64_km_logo_pxldfth_blksame_neg_slop0_mask           (0x0000003F)
#define  KME_LOGO1_KME_LOGO1_64_km_logo_pxldfth_blksame_neg_slop1(data)          (0x00000FC0&((data)<<6))
#define  KME_LOGO1_KME_LOGO1_64_km_logo_pxldfth_blksame_neg_slop0(data)          (0x0000003F&(data))
#define  KME_LOGO1_KME_LOGO1_64_get_km_logo_pxldfth_blksame_neg_slop1(data)      ((0x00000FC0&(data))>>6)
#define  KME_LOGO1_KME_LOGO1_64_get_km_logo_pxldfth_blksame_neg_slop0(data)      (0x0000003F&(data))

#define  KME_LOGO1_KME_LOGO1_68                                                 0x1809BF68
#define  KME_LOGO1_KME_LOGO1_68_reg_addr                                         "0xB809BF68"
#define  KME_LOGO1_KME_LOGO1_68_reg                                              0xB809BF68
#define  KME_LOGO1_KME_LOGO1_68_inst_addr                                        "0x0018"
#define  set_KME_LOGO1_KME_LOGO1_68_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_68_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_68_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_68_reg))
#define  KME_LOGO1_KME_LOGO1_68_km_logo_pxldfth_pxl_x1_shift                     (10)
#define  KME_LOGO1_KME_LOGO1_68_km_logo_pxldfth_pxl_x0_shift                     (0)
#define  KME_LOGO1_KME_LOGO1_68_km_logo_pxldfth_pxl_x1_mask                      (0x000FFC00)
#define  KME_LOGO1_KME_LOGO1_68_km_logo_pxldfth_pxl_x0_mask                      (0x000003FF)
#define  KME_LOGO1_KME_LOGO1_68_km_logo_pxldfth_pxl_x1(data)                     (0x000FFC00&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_68_km_logo_pxldfth_pxl_x0(data)                     (0x000003FF&(data))
#define  KME_LOGO1_KME_LOGO1_68_get_km_logo_pxldfth_pxl_x1(data)                 ((0x000FFC00&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_68_get_km_logo_pxldfth_pxl_x0(data)                 (0x000003FF&(data))

#define  KME_LOGO1_KME_LOGO1_6C                                                 0x1809BF6C
#define  KME_LOGO1_KME_LOGO1_6C_reg_addr                                         "0xB809BF6C"
#define  KME_LOGO1_KME_LOGO1_6C_reg                                              0xB809BF6C
#define  KME_LOGO1_KME_LOGO1_6C_inst_addr                                        "0x0019"
#define  set_KME_LOGO1_KME_LOGO1_6C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_6C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_6C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_6C_reg))
#define  KME_LOGO1_KME_LOGO1_6C_km_logo_pxldfth_pxl_x3_shift                     (10)
#define  KME_LOGO1_KME_LOGO1_6C_km_logo_pxldfth_pxl_x2_shift                     (0)
#define  KME_LOGO1_KME_LOGO1_6C_km_logo_pxldfth_pxl_x3_mask                      (0x000FFC00)
#define  KME_LOGO1_KME_LOGO1_6C_km_logo_pxldfth_pxl_x2_mask                      (0x000003FF)
#define  KME_LOGO1_KME_LOGO1_6C_km_logo_pxldfth_pxl_x3(data)                     (0x000FFC00&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_6C_km_logo_pxldfth_pxl_x2(data)                     (0x000003FF&(data))
#define  KME_LOGO1_KME_LOGO1_6C_get_km_logo_pxldfth_pxl_x3(data)                 ((0x000FFC00&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_6C_get_km_logo_pxldfth_pxl_x2(data)                 (0x000003FF&(data))

#define  KME_LOGO1_KME_LOGO1_70                                                 0x1809BF70
#define  KME_LOGO1_KME_LOGO1_70_reg_addr                                         "0xB809BF70"
#define  KME_LOGO1_KME_LOGO1_70_reg                                              0xB809BF70
#define  KME_LOGO1_KME_LOGO1_70_inst_addr                                        "0x001A"
#define  set_KME_LOGO1_KME_LOGO1_70_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_70_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_70_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_70_reg))
#define  KME_LOGO1_KME_LOGO1_70_km_logo_pxldfth_pxl_y1_shift                     (10)
#define  KME_LOGO1_KME_LOGO1_70_km_logo_pxldfth_pxl_y0_shift                     (0)
#define  KME_LOGO1_KME_LOGO1_70_km_logo_pxldfth_pxl_y1_mask                      (0x000FFC00)
#define  KME_LOGO1_KME_LOGO1_70_km_logo_pxldfth_pxl_y0_mask                      (0x000003FF)
#define  KME_LOGO1_KME_LOGO1_70_km_logo_pxldfth_pxl_y1(data)                     (0x000FFC00&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_70_km_logo_pxldfth_pxl_y0(data)                     (0x000003FF&(data))
#define  KME_LOGO1_KME_LOGO1_70_get_km_logo_pxldfth_pxl_y1(data)                 ((0x000FFC00&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_70_get_km_logo_pxldfth_pxl_y0(data)                 (0x000003FF&(data))

#define  KME_LOGO1_KME_LOGO1_74                                                 0x1809BF74
#define  KME_LOGO1_KME_LOGO1_74_reg_addr                                         "0xB809BF74"
#define  KME_LOGO1_KME_LOGO1_74_reg                                              0xB809BF74
#define  KME_LOGO1_KME_LOGO1_74_inst_addr                                        "0x001B"
#define  set_KME_LOGO1_KME_LOGO1_74_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_74_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_74_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_74_reg))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx7_shift                  (28)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx6_shift                  (24)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx5_shift                  (20)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx4_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx3_shift                  (12)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx2_shift                  (8)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx1_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx0_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx7_mask                   (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx6_mask                   (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx5_mask                   (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx4_mask                   (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx3_mask                   (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx2_mask                   (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx1_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx0_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx7(data)                  (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx6(data)                  (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx5(data)                  (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx4(data)                  (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx3(data)                  (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx2(data)                  (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx1(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_74_km_logo_pxlhsty_pth_pidx0(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx7(data)              ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx6(data)              ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx5(data)              ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx4(data)              ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx3(data)              ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx2(data)              ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx1(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_74_get_km_logo_pxlhsty_pth_pidx0(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_78                                                 0x1809BF78
#define  KME_LOGO1_KME_LOGO1_78_reg_addr                                         "0xB809BF78"
#define  KME_LOGO1_KME_LOGO1_78_reg                                              0xB809BF78
#define  KME_LOGO1_KME_LOGO1_78_inst_addr                                        "0x001C"
#define  set_KME_LOGO1_KME_LOGO1_78_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_78_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_78_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_78_reg))
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx14_shift                 (24)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx13_shift                 (20)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx12_shift                 (16)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx11_shift                 (12)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx10_shift                 (8)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx9_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx8_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx14_mask                  (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx13_mask                  (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx12_mask                  (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx11_mask                  (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx10_mask                  (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx9_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx8_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx14(data)                 (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx13(data)                 (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx12(data)                 (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx11(data)                 (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx10(data)                 (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx9(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_78_km_logo_pxlhsty_pth_pidx8(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_78_get_km_logo_pxlhsty_pth_pidx14(data)             ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_78_get_km_logo_pxlhsty_pth_pidx13(data)             ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_78_get_km_logo_pxlhsty_pth_pidx12(data)             ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_78_get_km_logo_pxlhsty_pth_pidx11(data)             ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_78_get_km_logo_pxlhsty_pth_pidx10(data)             ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_78_get_km_logo_pxlhsty_pth_pidx9(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_78_get_km_logo_pxlhsty_pth_pidx8(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_7C                                                 0x1809BF7C
#define  KME_LOGO1_KME_LOGO1_7C_reg_addr                                         "0xB809BF7C"
#define  KME_LOGO1_KME_LOGO1_7C_reg                                              0xB809BF7C
#define  KME_LOGO1_KME_LOGO1_7C_inst_addr                                        "0x001D"
#define  set_KME_LOGO1_KME_LOGO1_7C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_7C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_7C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_7C_reg))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx7_shift                  (28)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx6_shift                  (24)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx5_shift                  (20)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx4_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx3_shift                  (12)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx2_shift                  (8)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx1_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx0_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx7_mask                   (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx6_mask                   (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx5_mask                   (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx4_mask                   (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx3_mask                   (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx2_mask                   (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx1_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx0_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx7(data)                  (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx6(data)                  (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx5(data)                  (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx4(data)                  (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx3(data)                  (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx2(data)                  (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx1(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_7C_km_logo_pxlhsty_nth_pidx0(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx7(data)              ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx6(data)              ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx5(data)              ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx4(data)              ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx3(data)              ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx2(data)              ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx1(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_7C_get_km_logo_pxlhsty_nth_pidx0(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_80                                                 0x1809BF80
#define  KME_LOGO1_KME_LOGO1_80_reg_addr                                         "0xB809BF80"
#define  KME_LOGO1_KME_LOGO1_80_reg                                              0xB809BF80
#define  KME_LOGO1_KME_LOGO1_80_inst_addr                                        "0x001E"
#define  set_KME_LOGO1_KME_LOGO1_80_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_80_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_80_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_80_reg))
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx14_shift                 (24)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx13_shift                 (20)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx12_shift                 (16)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx11_shift                 (12)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx10_shift                 (8)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx9_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx8_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx14_mask                  (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx13_mask                  (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx12_mask                  (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx11_mask                  (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx10_mask                  (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx9_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx8_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx14(data)                 (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx13(data)                 (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx12(data)                 (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx11(data)                 (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx10(data)                 (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx9(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_80_km_logo_pxlhsty_nth_pidx8(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_80_get_km_logo_pxlhsty_nth_pidx14(data)             ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_80_get_km_logo_pxlhsty_nth_pidx13(data)             ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_80_get_km_logo_pxlhsty_nth_pidx12(data)             ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_80_get_km_logo_pxlhsty_nth_pidx11(data)             ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_80_get_km_logo_pxlhsty_nth_pidx10(data)             ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_80_get_km_logo_pxlhsty_nth_pidx9(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_80_get_km_logo_pxlhsty_nth_pidx8(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_84                                                 0x1809BF84
#define  KME_LOGO1_KME_LOGO1_84_reg_addr                                         "0xB809BF84"
#define  KME_LOGO1_KME_LOGO1_84_reg                                              0xB809BF84
#define  KME_LOGO1_KME_LOGO1_84_inst_addr                                        "0x001F"
#define  set_KME_LOGO1_KME_LOGO1_84_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_84_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_84_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_84_reg))
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx3_shift                   (24)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx2_shift                   (16)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx1_shift                   (8)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx0_shift                   (0)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx3_mask                    (0xFF000000)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx2_mask                    (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx1_mask                    (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx0_mask                    (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx3(data)                   (0xFF000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx2(data)                   (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx1(data)                   (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_84_km_logo_pxldf_th_a_pidx0(data)                   (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_84_get_km_logo_pxldf_th_a_pidx3(data)               ((0xFF000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_84_get_km_logo_pxldf_th_a_pidx2(data)               ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_84_get_km_logo_pxldf_th_a_pidx1(data)               ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_84_get_km_logo_pxldf_th_a_pidx0(data)               (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_88                                                 0x1809BF88
#define  KME_LOGO1_KME_LOGO1_88_reg_addr                                         "0xB809BF88"
#define  KME_LOGO1_KME_LOGO1_88_reg                                              0xB809BF88
#define  KME_LOGO1_KME_LOGO1_88_inst_addr                                        "0x0020"
#define  set_KME_LOGO1_KME_LOGO1_88_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_88_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_88_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_88_reg))
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx7_shift                   (24)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx6_shift                   (16)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx5_shift                   (8)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx4_shift                   (0)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx7_mask                    (0xFF000000)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx6_mask                    (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx5_mask                    (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx4_mask                    (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx7(data)                   (0xFF000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx6(data)                   (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx5(data)                   (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_88_km_logo_pxldf_th_a_pidx4(data)                   (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_88_get_km_logo_pxldf_th_a_pidx7(data)               ((0xFF000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_88_get_km_logo_pxldf_th_a_pidx6(data)               ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_88_get_km_logo_pxldf_th_a_pidx5(data)               ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_88_get_km_logo_pxldf_th_a_pidx4(data)               (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_8C                                                 0x1809BF8C
#define  KME_LOGO1_KME_LOGO1_8C_reg_addr                                         "0xB809BF8C"
#define  KME_LOGO1_KME_LOGO1_8C_reg                                              0xB809BF8C
#define  KME_LOGO1_KME_LOGO1_8C_inst_addr                                        "0x0021"
#define  set_KME_LOGO1_KME_LOGO1_8C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_8C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_8C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_8C_reg))
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx11_shift                  (24)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx10_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx9_shift                   (8)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx8_shift                   (0)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx11_mask                   (0xFF000000)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx10_mask                   (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx9_mask                    (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx8_mask                    (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx11(data)                  (0xFF000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx10(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx9(data)                   (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_8C_km_logo_pxldf_th_a_pidx8(data)                   (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_8C_get_km_logo_pxldf_th_a_pidx11(data)              ((0xFF000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_8C_get_km_logo_pxldf_th_a_pidx10(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_8C_get_km_logo_pxldf_th_a_pidx9(data)               ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_8C_get_km_logo_pxldf_th_a_pidx8(data)               (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_90                                                 0x1809BF90
#define  KME_LOGO1_KME_LOGO1_90_reg_addr                                         "0xB809BF90"
#define  KME_LOGO1_KME_LOGO1_90_reg                                              0xB809BF90
#define  KME_LOGO1_KME_LOGO1_90_inst_addr                                        "0x0022"
#define  set_KME_LOGO1_KME_LOGO1_90_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_90_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_90_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_90_reg))
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx14_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx13_shift                  (8)
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx12_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx14_mask                   (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx13_mask                   (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx12_mask                   (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx14(data)                  (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx13(data)                  (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_90_km_logo_pxldf_th_a_pidx12(data)                  (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_90_get_km_logo_pxldf_th_a_pidx14(data)              ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_90_get_km_logo_pxldf_th_a_pidx13(data)              ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_90_get_km_logo_pxldf_th_a_pidx12(data)              (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_94                                                 0x1809BF94
#define  KME_LOGO1_KME_LOGO1_94_reg_addr                                         "0xB809BF94"
#define  KME_LOGO1_KME_LOGO1_94_reg                                              0xB809BF94
#define  KME_LOGO1_KME_LOGO1_94_inst_addr                                        "0x0023"
#define  set_KME_LOGO1_KME_LOGO1_94_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_94_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_94_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_94_reg))
#define  KME_LOGO1_KME_LOGO1_94_km_logo_adppxldfth_en_shift                      (8)
#define  KME_LOGO1_KME_LOGO1_94_km_logo_pxldf_th_m_shift                         (0)
#define  KME_LOGO1_KME_LOGO1_94_km_logo_adppxldfth_en_mask                       (0x00000100)
#define  KME_LOGO1_KME_LOGO1_94_km_logo_pxldf_th_m_mask                          (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_94_km_logo_adppxldfth_en(data)                      (0x00000100&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_94_km_logo_pxldf_th_m(data)                         (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_94_get_km_logo_adppxldfth_en(data)                  ((0x00000100&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_94_get_km_logo_pxldf_th_m(data)                     (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_98                                                 0x1809BF98
#define  KME_LOGO1_KME_LOGO1_98_reg_addr                                         "0xB809BF98"
#define  KME_LOGO1_KME_LOGO1_98_reg                                              0xB809BF98
#define  KME_LOGO1_KME_LOGO1_98_inst_addr                                        "0x0024"
#define  set_KME_LOGO1_KME_LOGO1_98_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_98_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_98_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_98_reg))
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxl_hsty_upmet_shift                     (11)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxladphstystep_en_shift                  (10)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_blksame_plus_shift                       (2)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxldf_met_shift                          (0)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxl_hsty_upmet_mask                      (0x00000800)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxladphstystep_en_mask                   (0x00000400)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_blksame_plus_mask                        (0x000003FC)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxldf_met_mask                           (0x00000003)
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxl_hsty_upmet(data)                     (0x00000800&((data)<<11))
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxladphstystep_en(data)                  (0x00000400&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_98_km_logo_blksame_plus(data)                       (0x000003FC&((data)<<2))
#define  KME_LOGO1_KME_LOGO1_98_km_logo_pxldf_met(data)                          (0x00000003&(data))
#define  KME_LOGO1_KME_LOGO1_98_get_km_logo_pxl_hsty_upmet(data)                 ((0x00000800&(data))>>11)
#define  KME_LOGO1_KME_LOGO1_98_get_km_logo_pxladphstystep_en(data)              ((0x00000400&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_98_get_km_logo_blksame_plus(data)                   ((0x000003FC&(data))>>2)
#define  KME_LOGO1_KME_LOGO1_98_get_km_logo_pxldf_met(data)                      (0x00000003&(data))

#define  KME_LOGO1_KME_LOGO1_9C                                                 0x1809BF9C
#define  KME_LOGO1_KME_LOGO1_9C_reg_addr                                         "0xB809BF9C"
#define  KME_LOGO1_KME_LOGO1_9C_reg                                              0xB809BF9C
#define  KME_LOGO1_KME_LOGO1_9C_inst_addr                                        "0x0025"
#define  set_KME_LOGO1_KME_LOGO1_9C_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_9C_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_9C_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_9C_reg))
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x2_shift             (16)
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x1_shift             (8)
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x2_mask              (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x1_mask              (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x0_mask              (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x2(data)             (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x1(data)             (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_9C_km_logo_pxlhsty_pxldf_nstep_x0(data)             (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_9C_get_km_logo_pxlhsty_pxldf_nstep_x2(data)         ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_9C_get_km_logo_pxlhsty_pxldf_nstep_x1(data)         ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_9C_get_km_logo_pxlhsty_pxldf_nstep_x0(data)         (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_A0                                                 0x1809BFA0
#define  KME_LOGO1_KME_LOGO1_A0_reg_addr                                         "0xB809BFA0"
#define  KME_LOGO1_KME_LOGO1_A0_reg                                              0xB809BFA0
#define  KME_LOGO1_KME_LOGO1_A0_inst_addr                                        "0x0026"
#define  set_KME_LOGO1_KME_LOGO1_A0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_A0_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_A0_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_A0_reg))
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_slp1_shift           (18)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_slp0_shift           (12)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y2_shift             (8)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y1_shift             (4)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_slp1_mask            (0x00FC0000)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_slp0_mask            (0x0003F000)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y2_mask              (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y1_mask              (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y0_mask              (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_slp1(data)           (0x00FC0000&((data)<<18))
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_slp0(data)           (0x0003F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y2(data)             (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y1(data)             (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_A0_km_logo_pxlhsty_pxldf_nstep_y0(data)             (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_A0_get_km_logo_pxlhsty_pxldf_nstep_slp1(data)       ((0x00FC0000&(data))>>18)
#define  KME_LOGO1_KME_LOGO1_A0_get_km_logo_pxlhsty_pxldf_nstep_slp0(data)       ((0x0003F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_A0_get_km_logo_pxlhsty_pxldf_nstep_y2(data)         ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_A0_get_km_logo_pxlhsty_pxldf_nstep_y1(data)         ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_A0_get_km_logo_pxlhsty_pxldf_nstep_y0(data)         (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_A4                                                 0x1809BFA4
#define  KME_LOGO1_KME_LOGO1_A4_reg_addr                                         "0xB809BFA4"
#define  KME_LOGO1_KME_LOGO1_A4_reg                                              0xB809BFA4
#define  KME_LOGO1_KME_LOGO1_A4_inst_addr                                        "0x0027"
#define  set_KME_LOGO1_KME_LOGO1_A4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_A4_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_A4_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_A4_reg))
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x2_shift             (16)
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x1_shift             (8)
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x2_mask              (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x1_mask              (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x0_mask              (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x2(data)             (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x1(data)             (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_A4_km_logo_pxlhsty_pxldf_pstep_x0(data)             (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_A4_get_km_logo_pxlhsty_pxldf_pstep_x2(data)         ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_A4_get_km_logo_pxlhsty_pxldf_pstep_x1(data)         ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_A4_get_km_logo_pxlhsty_pxldf_pstep_x0(data)         (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_A8                                                 0x1809BFA8
#define  KME_LOGO1_KME_LOGO1_A8_reg_addr                                         "0xB809BFA8"
#define  KME_LOGO1_KME_LOGO1_A8_reg                                              0xB809BFA8
#define  KME_LOGO1_KME_LOGO1_A8_inst_addr                                        "0x0028"
#define  set_KME_LOGO1_KME_LOGO1_A8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_A8_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_A8_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_A8_reg))
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_slp1_shift           (18)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_slp0_shift           (12)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y2_shift             (8)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y1_shift             (4)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y0_shift             (0)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_slp1_mask            (0x00FC0000)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_slp0_mask            (0x0003F000)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y2_mask              (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y1_mask              (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y0_mask              (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_slp1(data)           (0x00FC0000&((data)<<18))
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_slp0(data)           (0x0003F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y2(data)             (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y1(data)             (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_A8_km_logo_pxlhsty_pxldf_pstep_y0(data)             (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_A8_get_km_logo_pxlhsty_pxldf_pstep_slp1(data)       ((0x00FC0000&(data))>>18)
#define  KME_LOGO1_KME_LOGO1_A8_get_km_logo_pxlhsty_pxldf_pstep_slp0(data)       ((0x0003F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_A8_get_km_logo_pxlhsty_pxldf_pstep_y2(data)         ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_A8_get_km_logo_pxlhsty_pxldf_pstep_y1(data)         ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_A8_get_km_logo_pxlhsty_pxldf_pstep_y0(data)         (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_AC                                                 0x1809BFAC
#define  KME_LOGO1_KME_LOGO1_AC_reg_addr                                         "0xB809BFAC"
#define  KME_LOGO1_KME_LOGO1_AC_reg                                              0xB809BFAC
#define  KME_LOGO1_KME_LOGO1_AC_inst_addr                                        "0x0029"
#define  set_KME_LOGO1_KME_LOGO1_AC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_AC_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_AC_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_AC_reg))
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x2_shift           (16)
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x1_shift           (8)
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x0_shift           (0)
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x2_mask            (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x1_mask            (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x0_mask            (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x2(data)           (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x1(data)           (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_AC_km_logo_pxlhsty_blksame_nstep_x0(data)           (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_AC_get_km_logo_pxlhsty_blksame_nstep_x2(data)       ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_AC_get_km_logo_pxlhsty_blksame_nstep_x1(data)       ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_AC_get_km_logo_pxlhsty_blksame_nstep_x0(data)       (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_B0                                                 0x1809BFB0
#define  KME_LOGO1_KME_LOGO1_B0_reg_addr                                         "0xB809BFB0"
#define  KME_LOGO1_KME_LOGO1_B0_reg                                              0xB809BFB0
#define  KME_LOGO1_KME_LOGO1_B0_inst_addr                                        "0x002A"
#define  set_KME_LOGO1_KME_LOGO1_B0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_B0_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_B0_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_B0_reg))
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_slp1_shift         (18)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_slp0_shift         (12)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y2_shift           (8)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y1_shift           (4)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y0_shift           (0)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_slp1_mask          (0x00FC0000)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_slp0_mask          (0x0003F000)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y2_mask            (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y1_mask            (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y0_mask            (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_slp1(data)         (0x00FC0000&((data)<<18))
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_slp0(data)         (0x0003F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y2(data)           (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y1(data)           (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_B0_km_logo_pxlhsty_blksame_nstep_y0(data)           (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_B0_get_km_logo_pxlhsty_blksame_nstep_slp1(data)     ((0x00FC0000&(data))>>18)
#define  KME_LOGO1_KME_LOGO1_B0_get_km_logo_pxlhsty_blksame_nstep_slp0(data)     ((0x0003F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_B0_get_km_logo_pxlhsty_blksame_nstep_y2(data)       ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_B0_get_km_logo_pxlhsty_blksame_nstep_y1(data)       ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_B0_get_km_logo_pxlhsty_blksame_nstep_y0(data)       (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_B4                                                 0x1809BFB4
#define  KME_LOGO1_KME_LOGO1_B4_reg_addr                                         "0xB809BFB4"
#define  KME_LOGO1_KME_LOGO1_B4_reg                                              0xB809BFB4
#define  KME_LOGO1_KME_LOGO1_B4_inst_addr                                        "0x002B"
#define  set_KME_LOGO1_KME_LOGO1_B4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_B4_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_B4_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_B4_reg))
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x2_shift           (16)
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x1_shift           (8)
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x0_shift           (0)
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x2_mask            (0x00FF0000)
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x1_mask            (0x0000FF00)
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x0_mask            (0x000000FF)
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x2(data)           (0x00FF0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x1(data)           (0x0000FF00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_B4_km_logo_pxlhsty_blksame_pstep_x0(data)           (0x000000FF&(data))
#define  KME_LOGO1_KME_LOGO1_B4_get_km_logo_pxlhsty_blksame_pstep_x2(data)       ((0x00FF0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_B4_get_km_logo_pxlhsty_blksame_pstep_x1(data)       ((0x0000FF00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_B4_get_km_logo_pxlhsty_blksame_pstep_x0(data)       (0x000000FF&(data))

#define  KME_LOGO1_KME_LOGO1_B8                                                 0x1809BFB8
#define  KME_LOGO1_KME_LOGO1_B8_reg_addr                                         "0xB809BFB8"
#define  KME_LOGO1_KME_LOGO1_B8_reg                                              0xB809BFB8
#define  KME_LOGO1_KME_LOGO1_B8_inst_addr                                        "0x002C"
#define  set_KME_LOGO1_KME_LOGO1_B8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_B8_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_B8_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_B8_reg))
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_slp1_shift         (18)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_slp0_shift         (12)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y2_shift           (8)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y1_shift           (4)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y0_shift           (0)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_slp1_mask          (0x00FC0000)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_slp0_mask          (0x0003F000)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y2_mask            (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y1_mask            (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y0_mask            (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_slp1(data)         (0x00FC0000&((data)<<18))
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_slp0(data)         (0x0003F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y2(data)           (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y1(data)           (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_B8_km_logo_pxlhsty_blksame_pstep_y0(data)           (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_B8_get_km_logo_pxlhsty_blksame_pstep_slp1(data)     ((0x00FC0000&(data))>>18)
#define  KME_LOGO1_KME_LOGO1_B8_get_km_logo_pxlhsty_blksame_pstep_slp0(data)     ((0x0003F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_B8_get_km_logo_pxlhsty_blksame_pstep_y2(data)       ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_B8_get_km_logo_pxlhsty_blksame_pstep_y1(data)       ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_B8_get_km_logo_pxlhsty_blksame_pstep_y0(data)       (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_BC                                                 0x1809BFBC
#define  KME_LOGO1_KME_LOGO1_BC_reg_addr                                         "0xB809BFBC"
#define  KME_LOGO1_KME_LOGO1_BC_reg                                              0xB809BFBC
#define  KME_LOGO1_KME_LOGO1_BC_inst_addr                                        "0x002D"
#define  set_KME_LOGO1_KME_LOGO1_BC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_BC_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_BC_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_BC_reg))
#define  KME_LOGO1_KME_LOGO1_BC_km_logo_pxlhsty_nstep_shift                      (4)
#define  KME_LOGO1_KME_LOGO1_BC_km_logo_pxlhsty_pstep_shift                      (0)
#define  KME_LOGO1_KME_LOGO1_BC_km_logo_pxlhsty_nstep_mask                       (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_BC_km_logo_pxlhsty_pstep_mask                       (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_BC_km_logo_pxlhsty_nstep(data)                      (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_BC_km_logo_pxlhsty_pstep(data)                      (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_BC_get_km_logo_pxlhsty_nstep(data)                  ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_BC_get_km_logo_pxlhsty_pstep(data)                  (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_C0                                                 0x1809BFC0
#define  KME_LOGO1_KME_LOGO1_C0_reg_addr                                         "0xB809BFC0"
#define  KME_LOGO1_KME_LOGO1_C0_reg                                              0xB809BFC0
#define  KME_LOGO1_KME_LOGO1_C0_inst_addr                                        "0x002E"
#define  set_KME_LOGO1_KME_LOGO1_C0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_C0_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_C0_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_C0_reg))
#define  KME_LOGO1_KME_LOGO1_C0_km_logo_pxl_blgsel_0_14_shift                    (0)
#define  KME_LOGO1_KME_LOGO1_C0_km_logo_pxl_blgsel_0_14_mask                     (0x3FFFFFFF)
#define  KME_LOGO1_KME_LOGO1_C0_km_logo_pxl_blgsel_0_14(data)                    (0x3FFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_C0_get_km_logo_pxl_blgsel_0_14(data)                (0x3FFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_C4                                                 0x1809BFC4
#define  KME_LOGO1_KME_LOGO1_C4_reg_addr                                         "0xB809BFC4"
#define  KME_LOGO1_KME_LOGO1_C4_reg                                              0xB809BFC4
#define  KME_LOGO1_KME_LOGO1_C4_inst_addr                                        "0x002F"
#define  set_KME_LOGO1_KME_LOGO1_C4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_C4_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_C4_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_C4_reg))
#define  KME_LOGO1_KME_LOGO1_C4_km_logo_pxllogo_cur_sel_0_14_shift               (0)
#define  KME_LOGO1_KME_LOGO1_C4_km_logo_pxllogo_cur_sel_0_14_mask                (0x3FFFFFFF)
#define  KME_LOGO1_KME_LOGO1_C4_km_logo_pxllogo_cur_sel_0_14(data)               (0x3FFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_C4_get_km_logo_pxllogo_cur_sel_0_14(data)           (0x3FFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_C8                                                 0x1809BFC8
#define  KME_LOGO1_KME_LOGO1_C8_reg_addr                                         "0xB809BFC8"
#define  KME_LOGO1_KME_LOGO1_C8_reg                                              0xB809BFC8
#define  KME_LOGO1_KME_LOGO1_C8_inst_addr                                        "0x0030"
#define  set_KME_LOGO1_KME_LOGO1_C8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_C8_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_C8_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_C8_reg))
#define  KME_LOGO1_KME_LOGO1_C8_km_logo_page1_dummy0_shift                       (0)
#define  KME_LOGO1_KME_LOGO1_C8_km_logo_page1_dummy0_mask                        (0x00007FFF)
#define  KME_LOGO1_KME_LOGO1_C8_km_logo_page1_dummy0(data)                       (0x00007FFF&(data))
#define  KME_LOGO1_KME_LOGO1_C8_get_km_logo_page1_dummy0(data)                   (0x00007FFF&(data))

#define  KME_LOGO1_KME_LOGO1_CC                                                 0x1809BFCC
#define  KME_LOGO1_KME_LOGO1_CC_reg_addr                                         "0xB809BFCC"
#define  KME_LOGO1_KME_LOGO1_CC_reg                                              0xB809BFCC
#define  KME_LOGO1_KME_LOGO1_CC_inst_addr                                        "0x0031"
#define  set_KME_LOGO1_KME_LOGO1_CC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_CC_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_CC_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_CC_reg))
#define  KME_LOGO1_KME_LOGO1_CC_km_logo_pxl_afhsty_blgsel_0_14_shift             (0)
#define  KME_LOGO1_KME_LOGO1_CC_km_logo_pxl_afhsty_blgsel_0_14_mask              (0x3FFFFFFF)
#define  KME_LOGO1_KME_LOGO1_CC_km_logo_pxl_afhsty_blgsel_0_14(data)             (0x3FFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_CC_get_km_logo_pxl_afhsty_blgsel_0_14(data)         (0x3FFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_D0                                                 0x1809BFD0
#define  KME_LOGO1_KME_LOGO1_D0_reg_addr                                         "0xB809BFD0"
#define  KME_LOGO1_KME_LOGO1_D0_reg                                              0xB809BFD0
#define  KME_LOGO1_KME_LOGO1_D0_inst_addr                                        "0x0032"
#define  set_KME_LOGO1_KME_LOGO1_D0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_D0_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_D0_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_D0_reg))
#define  KME_LOGO1_KME_LOGO1_D0_km_logo_pxllogo_outmet_0_14_shift                (0)
#define  KME_LOGO1_KME_LOGO1_D0_km_logo_pxllogo_outmet_0_14_mask                 (0x3FFFFFFF)
#define  KME_LOGO1_KME_LOGO1_D0_km_logo_pxllogo_outmet_0_14(data)                (0x3FFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_D0_get_km_logo_pxllogo_outmet_0_14(data)            (0x3FFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_D4                                                 0x1809BFD4
#define  KME_LOGO1_KME_LOGO1_D4_reg_addr                                         "0xB809BFD4"
#define  KME_LOGO1_KME_LOGO1_D4_reg                                              0xB809BFD4
#define  KME_LOGO1_KME_LOGO1_D4_inst_addr                                        "0x0033"
#define  set_KME_LOGO1_KME_LOGO1_D4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_D4_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_D4_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_D4_reg))
#define  KME_LOGO1_KME_LOGO1_D4_km_logo_pxlogo_final_sel_0_14_shift              (0)
#define  KME_LOGO1_KME_LOGO1_D4_km_logo_pxlogo_final_sel_0_14_mask               (0x3FFFFFFF)
#define  KME_LOGO1_KME_LOGO1_D4_km_logo_pxlogo_final_sel_0_14(data)              (0x3FFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_D4_get_km_logo_pxlogo_final_sel_0_14(data)          (0x3FFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_D8                                                 0x1809BFD8
#define  KME_LOGO1_KME_LOGO1_D8_reg_addr                                         "0xB809BFD8"
#define  KME_LOGO1_KME_LOGO1_D8_reg                                              0xB809BFD8
#define  KME_LOGO1_KME_LOGO1_D8_inst_addr                                        "0x0034"
#define  set_KME_LOGO1_KME_LOGO1_D8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_D8_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_D8_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_D8_reg))
#define  KME_LOGO1_KME_LOGO1_D8_km_logo_pxlrim_h1_shift                          (10)
#define  KME_LOGO1_KME_LOGO1_D8_km_logo_pxlrim_h0_shift                          (0)
#define  KME_LOGO1_KME_LOGO1_D8_km_logo_pxlrim_h1_mask                           (0x000FFC00)
#define  KME_LOGO1_KME_LOGO1_D8_km_logo_pxlrim_h0_mask                           (0x000003FF)
#define  KME_LOGO1_KME_LOGO1_D8_km_logo_pxlrim_h1(data)                          (0x000FFC00&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_D8_km_logo_pxlrim_h0(data)                          (0x000003FF&(data))
#define  KME_LOGO1_KME_LOGO1_D8_get_km_logo_pxlrim_h1(data)                      ((0x000FFC00&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_D8_get_km_logo_pxlrim_h0(data)                      (0x000003FF&(data))

#define  KME_LOGO1_KME_LOGO1_DC                                                 0x1809BFDC
#define  KME_LOGO1_KME_LOGO1_DC_reg_addr                                         "0xB809BFDC"
#define  KME_LOGO1_KME_LOGO1_DC_reg                                              0xB809BFDC
#define  KME_LOGO1_KME_LOGO1_DC_inst_addr                                        "0x0035"
#define  set_KME_LOGO1_KME_LOGO1_DC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_DC_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_DC_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_DC_reg))
#define  KME_LOGO1_KME_LOGO1_DC_km_logo_pxlrim_v1_shift                          (10)
#define  KME_LOGO1_KME_LOGO1_DC_km_logo_pxlrim_v0_shift                          (0)
#define  KME_LOGO1_KME_LOGO1_DC_km_logo_pxlrim_v1_mask                           (0x000FFC00)
#define  KME_LOGO1_KME_LOGO1_DC_km_logo_pxlrim_v0_mask                           (0x000003FF)
#define  KME_LOGO1_KME_LOGO1_DC_km_logo_pxlrim_v1(data)                          (0x000FFC00&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_DC_km_logo_pxlrim_v0(data)                          (0x000003FF&(data))
#define  KME_LOGO1_KME_LOGO1_DC_get_km_logo_pxlrim_v1(data)                      ((0x000FFC00&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_DC_get_km_logo_pxlrim_v0(data)                      (0x000003FF&(data))

#define  KME_LOGO1_KME_LOGO1_E0                                                 0x1809BFE0
#define  KME_LOGO1_KME_LOGO1_E0_reg_addr                                         "0xB809BFE0"
#define  KME_LOGO1_KME_LOGO1_E0_reg                                              0xB809BFE0
#define  KME_LOGO1_KME_LOGO1_E0_inst_addr                                        "0x0036"
#define  set_KME_LOGO1_KME_LOGO1_E0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_E0_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_E0_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_E0_reg))
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxlrgclr_hw_en_shift                     (30)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxllogo_en_shift                       (29)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxllogo_en_sel_shift                   (28)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxlhsty_en_shift                       (27)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxlhsty_en_sel_shift                   (26)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blklogo_en_shift                       (25)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blklogo_en_sel_shift                   (24)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blkhsty_en_shift                       (23)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blkhsty_en_sel_shift                   (22)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_iir_en_shift                           (21)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_iir_en_sel_shift                       (20)
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxl_v_active_shift                       (10)
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxl_h_active_shift                       (0)
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxlrgclr_hw_en_mask                      (0x40000000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxllogo_en_mask                        (0x20000000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxllogo_en_sel_mask                    (0x10000000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxlhsty_en_mask                        (0x08000000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxlhsty_en_sel_mask                    (0x04000000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blklogo_en_mask                        (0x02000000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blklogo_en_sel_mask                    (0x01000000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blkhsty_en_mask                        (0x00800000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blkhsty_en_sel_mask                    (0x00400000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_iir_en_mask                            (0x00200000)
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_iir_en_sel_mask                        (0x00100000)
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxl_v_active_mask                        (0x000FFC00)
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxl_h_active_mask                        (0x000003FF)
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxlrgclr_hw_en(data)                     (0x40000000&((data)<<30))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxllogo_en(data)                       (0x20000000&((data)<<29))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxllogo_en_sel(data)                   (0x10000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxlhsty_en(data)                       (0x08000000&((data)<<27))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_pxlhsty_en_sel(data)                   (0x04000000&((data)<<26))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blklogo_en(data)                       (0x02000000&((data)<<25))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blklogo_en_sel(data)                   (0x01000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blkhsty_en(data)                       (0x00800000&((data)<<23))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_blkhsty_en_sel(data)                   (0x00400000&((data)<<22))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_iir_en(data)                           (0x00200000&((data)<<21))
#define  KME_LOGO1_KME_LOGO1_E0_cadnewfrm_iir_en_sel(data)                       (0x00100000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxl_v_active(data)                       (0x000FFC00&((data)<<10))
#define  KME_LOGO1_KME_LOGO1_E0_km_logo_pxl_h_active(data)                       (0x000003FF&(data))
#define  KME_LOGO1_KME_LOGO1_E0_get_km_logo_pxlrgclr_hw_en(data)                 ((0x40000000&(data))>>30)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_pxllogo_en(data)                   ((0x20000000&(data))>>29)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_pxllogo_en_sel(data)               ((0x10000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_pxlhsty_en(data)                   ((0x08000000&(data))>>27)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_pxlhsty_en_sel(data)               ((0x04000000&(data))>>26)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_blklogo_en(data)                   ((0x02000000&(data))>>25)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_blklogo_en_sel(data)               ((0x01000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_blkhsty_en(data)                   ((0x00800000&(data))>>23)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_blkhsty_en_sel(data)               ((0x00400000&(data))>>22)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_iir_en(data)                       ((0x00200000&(data))>>21)
#define  KME_LOGO1_KME_LOGO1_E0_get_cadnewfrm_iir_en_sel(data)                   ((0x00100000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_E0_get_km_logo_pxl_v_active(data)                   ((0x000FFC00&(data))>>10)
#define  KME_LOGO1_KME_LOGO1_E0_get_km_logo_pxl_h_active(data)                   (0x000003FF&(data))

#define  KME_LOGO1_KME_LOGO1_E4                                                 0x1809BFE4
#define  KME_LOGO1_KME_LOGO1_E4_reg_addr                                         "0xB809BFE4"
#define  KME_LOGO1_KME_LOGO1_E4_reg                                              0xB809BFE4
#define  KME_LOGO1_KME_LOGO1_E4_inst_addr                                        "0x0037"
#define  set_KME_LOGO1_KME_LOGO1_E4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_E4_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_E4_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_E4_reg))
#define  KME_LOGO1_KME_LOGO1_E4_km_logo_pxlrgclr_en_shift                        (0)
#define  KME_LOGO1_KME_LOGO1_E4_km_logo_pxlrgclr_en_mask                         (0xFFFFFFFF)
#define  KME_LOGO1_KME_LOGO1_E4_km_logo_pxlrgclr_en(data)                        (0xFFFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_E4_get_km_logo_pxlrgclr_en(data)                    (0xFFFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_E8                                                 0x1809BFE8
#define  KME_LOGO1_KME_LOGO1_E8_reg_addr                                         "0xB809BFE8"
#define  KME_LOGO1_KME_LOGO1_E8_reg                                              0xB809BFE8
#define  KME_LOGO1_KME_LOGO1_E8_inst_addr                                        "0x0038"
#define  set_KME_LOGO1_KME_LOGO1_E8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_E8_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_E8_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_E8_reg))
#define  KME_LOGO1_KME_LOGO1_E8_km_logo_pxlrgclrpxlhsty_en_shift                 (0)
#define  KME_LOGO1_KME_LOGO1_E8_km_logo_pxlrgclrpxlhsty_en_mask                  (0xFFFFFFFF)
#define  KME_LOGO1_KME_LOGO1_E8_km_logo_pxlrgclrpxlhsty_en(data)                 (0xFFFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_E8_get_km_logo_pxlrgclrpxlhsty_en(data)             (0xFFFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_EC                                                 0x1809BFEC
#define  KME_LOGO1_KME_LOGO1_EC_reg_addr                                         "0xB809BFEC"
#define  KME_LOGO1_KME_LOGO1_EC_reg                                              0xB809BFEC
#define  KME_LOGO1_KME_LOGO1_EC_inst_addr                                        "0x0039"
#define  set_KME_LOGO1_KME_LOGO1_EC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_EC_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_EC_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_EC_reg))
#define  KME_LOGO1_KME_LOGO1_EC_km_logo_pxlrgclrblkhsty_en_shift                 (0)
#define  KME_LOGO1_KME_LOGO1_EC_km_logo_pxlrgclrblkhsty_en_mask                  (0xFFFFFFFF)
#define  KME_LOGO1_KME_LOGO1_EC_km_logo_pxlrgclrblkhsty_en(data)                 (0xFFFFFFFF&(data))
#define  KME_LOGO1_KME_LOGO1_EC_get_km_logo_pxlrgclrblkhsty_en(data)             (0xFFFFFFFF&(data))

#define  KME_LOGO1_KME_LOGO1_F0                                                 0x1809BFF0
#define  KME_LOGO1_KME_LOGO1_F0_reg_addr                                         "0xB809BFF0"
#define  KME_LOGO1_KME_LOGO1_F0_reg                                              0xB809BFF0
#define  KME_LOGO1_KME_LOGO1_F0_inst_addr                                        "0x003A"
#define  set_KME_LOGO1_KME_LOGO1_F0_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_F0_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_F0_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_F0_reg))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut7_shift                   (28)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut6_shift                   (24)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut5_shift                   (20)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut4_shift                   (16)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut3_shift                   (12)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut2_shift                   (8)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut1_shift                   (4)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut0_shift                   (0)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut7_mask                    (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut6_mask                    (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut5_mask                    (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut4_mask                    (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut3_mask                    (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut2_mask                    (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut1_mask                    (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut0_mask                    (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut7(data)                   (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut6(data)                   (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut5(data)                   (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut4(data)                   (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut3(data)                   (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut2(data)                   (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut1(data)                   (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_F0_km_logo_pxldfth_hstylut0(data)                   (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut7(data)               ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut6(data)               ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut5(data)               ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut4(data)               ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut3(data)               ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut2(data)               ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut1(data)               ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_F0_get_km_logo_pxldfth_hstylut0(data)               (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_F4                                                 0x1809BFF4
#define  KME_LOGO1_KME_LOGO1_F4_reg_addr                                         "0xB809BFF4"
#define  KME_LOGO1_KME_LOGO1_F4_reg                                              0xB809BFF4
#define  KME_LOGO1_KME_LOGO1_F4_inst_addr                                        "0x003B"
#define  set_KME_LOGO1_KME_LOGO1_F4_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_F4_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_F4_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_F4_reg))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut15_shift                  (28)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut14_shift                  (24)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut13_shift                  (20)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut12_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut11_shift                  (12)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut10_shift                  (8)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut9_shift                   (4)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut8_shift                   (0)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut15_mask                   (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut14_mask                   (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut13_mask                   (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut12_mask                   (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut11_mask                   (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut10_mask                   (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut9_mask                    (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut8_mask                    (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut15(data)                  (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut14(data)                  (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut13(data)                  (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut12(data)                  (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut11(data)                  (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut10(data)                  (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut9(data)                   (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_F4_km_logo_pxldfth_hstylut8(data)                   (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut15(data)              ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut14(data)              ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut13(data)              ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut12(data)              ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut11(data)              ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut10(data)              ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut9(data)               ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_F4_get_km_logo_pxldfth_hstylut8(data)               (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_F8                                                 0x1809BFF8
#define  KME_LOGO1_KME_LOGO1_F8_reg_addr                                         "0xB809BFF8"
#define  KME_LOGO1_KME_LOGO1_F8_reg                                              0xB809BFF8
#define  KME_LOGO1_KME_LOGO1_F8_inst_addr                                        "0x003C"
#define  set_KME_LOGO1_KME_LOGO1_F8_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_F8_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_F8_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_F8_reg))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx7_shift                  (28)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx6_shift                  (24)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx5_shift                  (20)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx4_shift                  (16)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx3_shift                  (12)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx2_shift                  (8)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx1_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx0_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx7_mask                   (0xF0000000)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx6_mask                   (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx5_mask                   (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx4_mask                   (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx3_mask                   (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx2_mask                   (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx1_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx0_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx7(data)                  (0xF0000000&((data)<<28))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx6(data)                  (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx5(data)                  (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx4(data)                  (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx3(data)                  (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx2(data)                  (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx1(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_F8_km_logo_pxlhsty_mth_pidx0(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx7(data)              ((0xF0000000&(data))>>28)
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx6(data)              ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx5(data)              ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx4(data)              ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx3(data)              ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx2(data)              ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx1(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_F8_get_km_logo_pxlhsty_mth_pidx0(data)              (0x0000000F&(data))

#define  KME_LOGO1_KME_LOGO1_FC                                                 0x1809BFFC
#define  KME_LOGO1_KME_LOGO1_FC_reg_addr                                         "0xB809BFFC"
#define  KME_LOGO1_KME_LOGO1_FC_reg                                              0xB809BFFC
#define  KME_LOGO1_KME_LOGO1_FC_inst_addr                                        "0x003D"
#define  set_KME_LOGO1_KME_LOGO1_FC_reg(data)                                    (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_FC_reg)=data)
#define  get_KME_LOGO1_KME_LOGO1_FC_reg                                          (*((volatile unsigned int*)KME_LOGO1_KME_LOGO1_FC_reg))
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx14_shift                 (24)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx13_shift                 (20)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx12_shift                 (16)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx11_shift                 (12)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx10_shift                 (8)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx9_shift                  (4)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx8_shift                  (0)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx14_mask                  (0x0F000000)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx13_mask                  (0x00F00000)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx12_mask                  (0x000F0000)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx11_mask                  (0x0000F000)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx10_mask                  (0x00000F00)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx9_mask                   (0x000000F0)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx8_mask                   (0x0000000F)
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx14(data)                 (0x0F000000&((data)<<24))
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx13(data)                 (0x00F00000&((data)<<20))
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx12(data)                 (0x000F0000&((data)<<16))
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx11(data)                 (0x0000F000&((data)<<12))
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx10(data)                 (0x00000F00&((data)<<8))
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx9(data)                  (0x000000F0&((data)<<4))
#define  KME_LOGO1_KME_LOGO1_FC_km_logo_pxlhsty_mth_pidx8(data)                  (0x0000000F&(data))
#define  KME_LOGO1_KME_LOGO1_FC_get_km_logo_pxlhsty_mth_pidx14(data)             ((0x0F000000&(data))>>24)
#define  KME_LOGO1_KME_LOGO1_FC_get_km_logo_pxlhsty_mth_pidx13(data)             ((0x00F00000&(data))>>20)
#define  KME_LOGO1_KME_LOGO1_FC_get_km_logo_pxlhsty_mth_pidx12(data)             ((0x000F0000&(data))>>16)
#define  KME_LOGO1_KME_LOGO1_FC_get_km_logo_pxlhsty_mth_pidx11(data)             ((0x0000F000&(data))>>12)
#define  KME_LOGO1_KME_LOGO1_FC_get_km_logo_pxlhsty_mth_pidx10(data)             ((0x00000F00&(data))>>8)
#define  KME_LOGO1_KME_LOGO1_FC_get_km_logo_pxlhsty_mth_pidx9(data)              ((0x000000F0&(data))>>4)
#define  KME_LOGO1_KME_LOGO1_FC_get_km_logo_pxlhsty_mth_pidx8(data)              (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======KME_LOGO1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_blklogodlt_prevarth:8;
        RBus_UInt32  km_logo_blklogodlt_curvarth:8;
        RBus_UInt32  km_logo_blklogodlt_madth:8;
    };
}kme_logo1_kme_logo1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_rim_v1:8;
        RBus_UInt32  km_logo_blk_rim_v0:8;
        RBus_UInt32  km_logo_blk_rim_h1:8;
        RBus_UInt32  km_logo_blk_rim_h0:8;
    };
}kme_logo1_kme_logo1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_region_blk_x3:8;
        RBus_UInt32  km_logo_region_blk_x2:8;
        RBus_UInt32  km_logo_region_blk_x1:8;
        RBus_UInt32  km_logo_region_blk_x0:8;
    };
}kme_logo1_kme_logo1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  km_logo_region_blk_y1:8;
        RBus_UInt32  km_logo_region_blk_y0:8;
    };
}kme_logo1_kme_logo1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_pth_bidx7:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx6:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx5:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx4:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx3:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx2:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx1:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx0:4;
    };
}kme_logo1_kme_logo1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx14:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx13:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx12:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx11:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx10:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx9:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx8:4;
    };
}kme_logo1_kme_logo1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_nth_bidx7:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx6:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx5:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx4:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx3:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx2:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx1:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx0:4;
    };
}kme_logo1_kme_logo1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_hsty_th_dlt:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx14:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx13:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx12:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx11:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx10:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx9:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx8:4;
    };
}kme_logo1_kme_logo1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  km_logo_blklogo_outmet_bidx14:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx13:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx12:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx11:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx10:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx9:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx8:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx7:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx6:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx5:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx4:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx3:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx2:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx1:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx0:1;
    };
}kme_logo1_kme_logo1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_lgcnt_x2:5;
        RBus_UInt32  km_logo_pxldfth_lgcnt_x1:5;
        RBus_UInt32  km_logo_pxldfth_lgcnt_x0:5;
        RBus_UInt32  km_logo_pxldfth_hsty_base:9;
    };
}kme_logo1_kme_logo1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_lgcnt_y2:8;
        RBus_UInt32  km_logo_pxldfth_lgcnt_y1:8;
        RBus_UInt32  km_logo_pxldfth_lgcnt_y0:8;
    };
}kme_logo1_kme_logo1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  km_logo_pxldfth_lgcnt_slop1:5;
        RBus_UInt32  km_logo_pxldfth_lgcnt_slop0:5;
    };
}kme_logo1_kme_logo1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_x2:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_x1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_x0:8;
    };
}kme_logo1_kme_logo1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_y2:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_y1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_y0:8;
    };
}kme_logo1_kme_logo1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_slop1:6;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_slop0:6;
    };
}kme_logo1_kme_logo1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_x2:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_x1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_x0:8;
    };
}kme_logo1_kme_logo1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_y2:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_y1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_y0:8;
    };
}kme_logo1_kme_logo1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_slop1:6;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_slop0:6;
    };
}kme_logo1_kme_logo1_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_x2:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_x1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_x0:8;
    };
}kme_logo1_kme_logo1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_y2:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_y1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_y0:8;
    };
}kme_logo1_kme_logo1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_slop1:6;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_slop0:6;
    };
}kme_logo1_kme_logo1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_x2:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_x1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_x0:8;
    };
}kme_logo1_kme_logo1_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_y2:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_y1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_y0:8;
    };
}kme_logo1_kme_logo1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_slop1:6;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_slop0:6;
    };
}kme_logo1_kme_logo1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  km_logo_pxldfth_pxl_x1:10;
        RBus_UInt32  km_logo_pxldfth_pxl_x0:10;
    };
}kme_logo1_kme_logo1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  km_logo_pxldfth_pxl_x3:10;
        RBus_UInt32  km_logo_pxldfth_pxl_x2:10;
    };
}kme_logo1_kme_logo1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  km_logo_pxldfth_pxl_y1:10;
        RBus_UInt32  km_logo_pxldfth_pxl_y0:10;
    };
}kme_logo1_kme_logo1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pth_pidx7:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx6:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx5:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx4:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx3:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx2:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx1:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx0:4;
    };
}kme_logo1_kme_logo1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx14:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx13:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx12:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx11:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx10:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx9:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx8:4;
    };
}kme_logo1_kme_logo1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_nth_pidx7:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx6:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx5:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx4:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx3:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx2:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx1:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx0:4;
    };
}kme_logo1_kme_logo1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx14:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx13:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx12:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx11:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx10:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx9:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx8:4;
    };
}kme_logo1_kme_logo1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_a_pidx3:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx2:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx1:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx0:8;
    };
}kme_logo1_kme_logo1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_a_pidx7:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx6:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx5:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx4:8;
    };
}kme_logo1_kme_logo1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_a_pidx11:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx10:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx9:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx8:8;
    };
}kme_logo1_kme_logo1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx14:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx13:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx12:8;
    };
}kme_logo1_kme_logo1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  km_logo_adppxldfth_en:1;
        RBus_UInt32  km_logo_pxldf_th_m:8;
    };
}kme_logo1_kme_logo1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  km_logo_pxl_hsty_upmet:1;
        RBus_UInt32  km_logo_pxladphstystep_en:1;
        RBus_UInt32  km_logo_blksame_plus:8;
        RBus_UInt32  km_logo_pxldf_met:2;
    };
}kme_logo1_kme_logo1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_x2:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_x0:8;
    };
}kme_logo1_kme_logo1_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_slp1:6;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_y0:4;
    };
}kme_logo1_kme_logo1_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_x2:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_x0:8;
    };
}kme_logo1_kme_logo1_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_slp1:6;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_y0:4;
    };
}kme_logo1_kme_logo1_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_x2:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_x0:8;
    };
}kme_logo1_kme_logo1_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_slp1:6;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_y0:4;
    };
}kme_logo1_kme_logo1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_x2:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_x0:8;
    };
}kme_logo1_kme_logo1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_slp1:6;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_y0:4;
    };
}kme_logo1_kme_logo1_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  km_logo_pxlhsty_nstep:4;
        RBus_UInt32  km_logo_pxlhsty_pstep:4;
    };
}kme_logo1_kme_logo1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_pxl_blgsel_0_14:30;
    };
}kme_logo1_kme_logo1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_pxllogo_cur_sel_0_14:30;
    };
}kme_logo1_kme_logo1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  km_logo_page1_dummy0:15;
    };
}kme_logo1_kme_logo1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_pxl_afhsty_blgsel_0_14:30;
    };
}kme_logo1_kme_logo1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_pxllogo_outmet_0_14:30;
    };
}kme_logo1_kme_logo1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  km_logo_pxlogo_final_sel_0_14:30;
    };
}kme_logo1_kme_logo1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  km_logo_pxlrim_h1:10;
        RBus_UInt32  km_logo_pxlrim_h0:10;
    };
}kme_logo1_kme_logo1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  km_logo_pxlrim_v1:10;
        RBus_UInt32  km_logo_pxlrim_v0:10;
    };
}kme_logo1_kme_logo1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  km_logo_pxlrgclr_hw_en:1;
        RBus_UInt32  cadnewfrm_pxllogo_en:1;
        RBus_UInt32  cadnewfrm_pxllogo_en_sel:1;
        RBus_UInt32  cadnewfrm_pxlhsty_en:1;
        RBus_UInt32  cadnewfrm_pxlhsty_en_sel:1;
        RBus_UInt32  cadnewfrm_blklogo_en:1;
        RBus_UInt32  cadnewfrm_blklogo_en_sel:1;
        RBus_UInt32  cadnewfrm_blkhsty_en:1;
        RBus_UInt32  cadnewfrm_blkhsty_en_sel:1;
        RBus_UInt32  cadnewfrm_iir_en:1;
        RBus_UInt32  cadnewfrm_iir_en_sel:1;
        RBus_UInt32  km_logo_pxl_v_active:10;
        RBus_UInt32  km_logo_pxl_h_active:10;
    };
}kme_logo1_kme_logo1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgclr_en:32;
    };
}kme_logo1_kme_logo1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgclrpxlhsty_en:32;
    };
}kme_logo1_kme_logo1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgclrblkhsty_en:32;
    };
}kme_logo1_kme_logo1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hstylut7:4;
        RBus_UInt32  km_logo_pxldfth_hstylut6:4;
        RBus_UInt32  km_logo_pxldfth_hstylut5:4;
        RBus_UInt32  km_logo_pxldfth_hstylut4:4;
        RBus_UInt32  km_logo_pxldfth_hstylut3:4;
        RBus_UInt32  km_logo_pxldfth_hstylut2:4;
        RBus_UInt32  km_logo_pxldfth_hstylut1:4;
        RBus_UInt32  km_logo_pxldfth_hstylut0:4;
    };
}kme_logo1_kme_logo1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hstylut15:4;
        RBus_UInt32  km_logo_pxldfth_hstylut14:4;
        RBus_UInt32  km_logo_pxldfth_hstylut13:4;
        RBus_UInt32  km_logo_pxldfth_hstylut12:4;
        RBus_UInt32  km_logo_pxldfth_hstylut11:4;
        RBus_UInt32  km_logo_pxldfth_hstylut10:4;
        RBus_UInt32  km_logo_pxldfth_hstylut9:4;
        RBus_UInt32  km_logo_pxldfth_hstylut8:4;
    };
}kme_logo1_kme_logo1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_mth_pidx7:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx6:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx5:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx4:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx3:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx2:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx1:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx0:4;
    };
}kme_logo1_kme_logo1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx14:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx13:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx12:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx11:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx10:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx9:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx8:4;
    };
}kme_logo1_kme_logo1_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======KME_LOGO1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blklogodlt_madth:8;
        RBus_UInt32  km_logo_blklogodlt_curvarth:8;
        RBus_UInt32  km_logo_blklogodlt_prevarth:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blk_rim_h0:8;
        RBus_UInt32  km_logo_blk_rim_h1:8;
        RBus_UInt32  km_logo_blk_rim_v0:8;
        RBus_UInt32  km_logo_blk_rim_v1:8;
    };
}kme_logo1_kme_logo1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_region_blk_x0:8;
        RBus_UInt32  km_logo_region_blk_x1:8;
        RBus_UInt32  km_logo_region_blk_x2:8;
        RBus_UInt32  km_logo_region_blk_x3:8;
    };
}kme_logo1_kme_logo1_08_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_region_blk_y0:8;
        RBus_UInt32  km_logo_region_blk_y1:8;
        RBus_UInt32  res1:16;
    };
}kme_logo1_kme_logo1_0c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_pth_bidx0:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx1:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx2:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx3:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx4:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx5:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx6:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx7:4;
    };
}kme_logo1_kme_logo1_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_pth_bidx8:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx9:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx10:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx11:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx12:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx13:4;
        RBus_UInt32  km_logo_blkhsty_pth_bidx14:4;
        RBus_UInt32  res1:4;
    };
}kme_logo1_kme_logo1_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_nth_bidx0:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx1:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx2:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx3:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx4:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx5:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx6:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx7:4;
    };
}kme_logo1_kme_logo1_18_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blkhsty_nth_bidx8:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx9:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx10:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx11:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx12:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx13:4;
        RBus_UInt32  km_logo_blkhsty_nth_bidx14:4;
        RBus_UInt32  km_logo_blk_hsty_th_dlt:4;
    };
}kme_logo1_kme_logo1_1c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_blklogo_outmet_bidx0:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx1:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx2:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx3:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx4:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx5:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx6:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx7:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx8:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx9:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx10:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx11:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx12:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx13:1;
        RBus_UInt32  km_logo_blklogo_outmet_bidx14:1;
        RBus_UInt32  res1:17;
    };
}kme_logo1_kme_logo1_20_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hsty_base:9;
        RBus_UInt32  km_logo_pxldfth_lgcnt_x0:5;
        RBus_UInt32  km_logo_pxldfth_lgcnt_x1:5;
        RBus_UInt32  km_logo_pxldfth_lgcnt_x2:5;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_2c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_lgcnt_y0:8;
        RBus_UInt32  km_logo_pxldfth_lgcnt_y1:8;
        RBus_UInt32  km_logo_pxldfth_lgcnt_y2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_30_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_lgcnt_slop0:5;
        RBus_UInt32  km_logo_pxldfth_lgcnt_slop1:5;
        RBus_UInt32  res1:22;
    };
}kme_logo1_kme_logo1_34_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hsty_pos_x0:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_x1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_38_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hsty_pos_y0:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_y1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_y2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_3c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hsty_pos_slop0:6;
        RBus_UInt32  km_logo_pxldfth_hsty_pos_slop1:6;
        RBus_UInt32  res1:20;
    };
}kme_logo1_kme_logo1_40_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hsty_neg_x0:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_x1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_44_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hsty_neg_y0:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_y1:8;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_y2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_48_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hsty_neg_slop0:6;
        RBus_UInt32  km_logo_pxldfth_hsty_neg_slop1:6;
        RBus_UInt32  res1:20;
    };
}kme_logo1_kme_logo1_4c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_blksame_pos_x0:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_x1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_50_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_blksame_pos_y0:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_y1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_y2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_54_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_blksame_pos_slop0:6;
        RBus_UInt32  km_logo_pxldfth_blksame_pos_slop1:6;
        RBus_UInt32  res1:20;
    };
}kme_logo1_kme_logo1_58_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_blksame_neg_x0:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_x1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_5c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_blksame_neg_y0:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_y1:8;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_y2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_60_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_blksame_neg_slop0:6;
        RBus_UInt32  km_logo_pxldfth_blksame_neg_slop1:6;
        RBus_UInt32  res1:20;
    };
}kme_logo1_kme_logo1_64_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_pxl_x0:10;
        RBus_UInt32  km_logo_pxldfth_pxl_x1:10;
        RBus_UInt32  res1:12;
    };
}kme_logo1_kme_logo1_68_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_pxl_x2:10;
        RBus_UInt32  km_logo_pxldfth_pxl_x3:10;
        RBus_UInt32  res1:12;
    };
}kme_logo1_kme_logo1_6c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_pxl_y0:10;
        RBus_UInt32  km_logo_pxldfth_pxl_y1:10;
        RBus_UInt32  res1:12;
    };
}kme_logo1_kme_logo1_70_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pth_pidx0:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx1:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx2:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx3:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx4:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx5:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx6:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx7:4;
    };
}kme_logo1_kme_logo1_74_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pth_pidx8:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx9:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx10:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx11:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx12:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx13:4;
        RBus_UInt32  km_logo_pxlhsty_pth_pidx14:4;
        RBus_UInt32  res1:4;
    };
}kme_logo1_kme_logo1_78_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_nth_pidx0:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx1:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx2:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx3:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx4:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx5:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx6:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx7:4;
    };
}kme_logo1_kme_logo1_7c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_nth_pidx8:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx9:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx10:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx11:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx12:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx13:4;
        RBus_UInt32  km_logo_pxlhsty_nth_pidx14:4;
        RBus_UInt32  res1:4;
    };
}kme_logo1_kme_logo1_80_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_a_pidx0:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx1:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx2:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx3:8;
    };
}kme_logo1_kme_logo1_84_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_a_pidx4:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx5:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx6:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx7:8;
    };
}kme_logo1_kme_logo1_88_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_a_pidx8:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx9:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx10:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx11:8;
    };
}kme_logo1_kme_logo1_8c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_a_pidx12:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx13:8;
        RBus_UInt32  km_logo_pxldf_th_a_pidx14:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_90_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_th_m:8;
        RBus_UInt32  km_logo_adppxldfth_en:1;
        RBus_UInt32  res1:23;
    };
}kme_logo1_kme_logo1_94_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldf_met:2;
        RBus_UInt32  km_logo_blksame_plus:8;
        RBus_UInt32  km_logo_pxladphstystep_en:1;
        RBus_UInt32  km_logo_pxl_hsty_upmet:1;
        RBus_UInt32  res1:20;
    };
}kme_logo1_kme_logo1_98_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_x0:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_9c_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_y0:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_pxldf_nstep_slp1:6;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_a0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_x0:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_a4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_y0:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_pxldf_pstep_slp1:6;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_a8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_x0:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_ac_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_y0:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_blksame_nstep_slp1:6;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_b0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_x0:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_x1:8;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_x2:8;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_b4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_y0:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_y1:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_y2:4;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_slp0:6;
        RBus_UInt32  km_logo_pxlhsty_blksame_pstep_slp1:6;
        RBus_UInt32  res1:8;
    };
}kme_logo1_kme_logo1_b8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_pstep:4;
        RBus_UInt32  km_logo_pxlhsty_nstep:4;
        RBus_UInt32  res1:24;
    };
}kme_logo1_kme_logo1_bc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxl_blgsel_0_14:30;
        RBus_UInt32  res1:2;
    };
}kme_logo1_kme_logo1_c0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxllogo_cur_sel_0_14:30;
        RBus_UInt32  res1:2;
    };
}kme_logo1_kme_logo1_c4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_page1_dummy0:15;
        RBus_UInt32  res1:17;
    };
}kme_logo1_kme_logo1_c8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxl_afhsty_blgsel_0_14:30;
        RBus_UInt32  res1:2;
    };
}kme_logo1_kme_logo1_cc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxllogo_outmet_0_14:30;
        RBus_UInt32  res1:2;
    };
}kme_logo1_kme_logo1_d0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlogo_final_sel_0_14:30;
        RBus_UInt32  res1:2;
    };
}kme_logo1_kme_logo1_d4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrim_h0:10;
        RBus_UInt32  km_logo_pxlrim_h1:10;
        RBus_UInt32  res1:12;
    };
}kme_logo1_kme_logo1_d8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrim_v0:10;
        RBus_UInt32  km_logo_pxlrim_v1:10;
        RBus_UInt32  res1:12;
    };
}kme_logo1_kme_logo1_dc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxl_h_active:10;
        RBus_UInt32  km_logo_pxl_v_active:10;
        RBus_UInt32  cadnewfrm_iir_en_sel:1;
        RBus_UInt32  cadnewfrm_iir_en:1;
        RBus_UInt32  cadnewfrm_blkhsty_en_sel:1;
        RBus_UInt32  cadnewfrm_blkhsty_en:1;
        RBus_UInt32  cadnewfrm_blklogo_en_sel:1;
        RBus_UInt32  cadnewfrm_blklogo_en:1;
        RBus_UInt32  cadnewfrm_pxlhsty_en_sel:1;
        RBus_UInt32  cadnewfrm_pxlhsty_en:1;
        RBus_UInt32  cadnewfrm_pxllogo_en_sel:1;
        RBus_UInt32  cadnewfrm_pxllogo_en:1;
        RBus_UInt32  km_logo_pxlrgclr_hw_en:1;
        RBus_UInt32  res1:1;
    };
}kme_logo1_kme_logo1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgclr_en:32;
    };
}kme_logo1_kme_logo1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgclrpxlhsty_en:32;
    };
}kme_logo1_kme_logo1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlrgclrblkhsty_en:32;
    };
}kme_logo1_kme_logo1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hstylut0:4;
        RBus_UInt32  km_logo_pxldfth_hstylut1:4;
        RBus_UInt32  km_logo_pxldfth_hstylut2:4;
        RBus_UInt32  km_logo_pxldfth_hstylut3:4;
        RBus_UInt32  km_logo_pxldfth_hstylut4:4;
        RBus_UInt32  km_logo_pxldfth_hstylut5:4;
        RBus_UInt32  km_logo_pxldfth_hstylut6:4;
        RBus_UInt32  km_logo_pxldfth_hstylut7:4;
    };
}kme_logo1_kme_logo1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxldfth_hstylut8:4;
        RBus_UInt32  km_logo_pxldfth_hstylut9:4;
        RBus_UInt32  km_logo_pxldfth_hstylut10:4;
        RBus_UInt32  km_logo_pxldfth_hstylut11:4;
        RBus_UInt32  km_logo_pxldfth_hstylut12:4;
        RBus_UInt32  km_logo_pxldfth_hstylut13:4;
        RBus_UInt32  km_logo_pxldfth_hstylut14:4;
        RBus_UInt32  km_logo_pxldfth_hstylut15:4;
    };
}kme_logo1_kme_logo1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_mth_pidx0:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx1:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx2:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx3:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx4:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx5:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx6:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx7:4;
    };
}kme_logo1_kme_logo1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  km_logo_pxlhsty_mth_pidx8:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx9:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx10:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx11:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx12:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx13:4;
        RBus_UInt32  km_logo_pxlhsty_mth_pidx14:4;
        RBus_UInt32  res1:4;
    };
}kme_logo1_kme_logo1_fc_RBUS;




#endif 


#endif 
