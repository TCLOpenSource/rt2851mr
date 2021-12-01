/**
* @file Merlin5-DesignSpec-PINMUX
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PINMUX_REG_H_
#define _RBUS_PINMUX_REG_H_

#include "rbus_types.h"



//  PINMUX Register Address
#define  PINMUX_GPIO_TLEFT_CFG_0                                                0x18000800
#define  PINMUX_GPIO_TLEFT_CFG_0_reg_addr                                        "0xB8000800"
#define  PINMUX_GPIO_TLEFT_CFG_0_reg                                             0xB8000800
#define  PINMUX_GPIO_TLEFT_CFG_0_inst_addr                                       "0x0000"
#define  set_PINMUX_GPIO_TLEFT_CFG_0_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_0_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_0_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_0_reg))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_00_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_01_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_02_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_0_gpio_03_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_00_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_00_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_00_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_00_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_00_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_01_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_01_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_01_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_01_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_01_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_02_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_02_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_02_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_02_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_02_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_03_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_03_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_03_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_03_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_0_get_gpio_03_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_TLEFT_CFG_1                                                0x18000804
#define  PINMUX_GPIO_TLEFT_CFG_1_reg_addr                                        "0xB8000804"
#define  PINMUX_GPIO_TLEFT_CFG_1_reg                                             0xB8000804
#define  PINMUX_GPIO_TLEFT_CFG_1_inst_addr                                       "0x0001"
#define  set_PINMUX_GPIO_TLEFT_CFG_1_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_1_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_1_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_1_reg))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_04_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_05_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_06_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_1_gpio_07_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_04_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_04_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_04_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_04_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_04_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_05_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_05_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_05_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_05_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_05_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_06_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_06_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_06_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_06_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_06_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_07_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_07_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_07_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_07_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_1_get_gpio_07_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_TLEFT_CFG_2                                                0x18000808
#define  PINMUX_GPIO_TLEFT_CFG_2_reg_addr                                        "0xB8000808"
#define  PINMUX_GPIO_TLEFT_CFG_2_reg                                             0xB8000808
#define  PINMUX_GPIO_TLEFT_CFG_2_inst_addr                                       "0x0002"
#define  set_PINMUX_GPIO_TLEFT_CFG_2_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_2_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_2_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_2_reg))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_08_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_09_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_10_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_2_gpio_11_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_08_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_08_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_08_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_08_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_08_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_09_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_09_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_09_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_09_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_09_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_10_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_10_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_10_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_10_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_10_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_11_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_11_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_11_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_11_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_2_get_gpio_11_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_TLEFT_CFG_3                                                0x1800080C
#define  PINMUX_GPIO_TLEFT_CFG_3_reg_addr                                        "0xB800080C"
#define  PINMUX_GPIO_TLEFT_CFG_3_reg                                             0xB800080C
#define  PINMUX_GPIO_TLEFT_CFG_3_inst_addr                                       "0x0003"
#define  set_PINMUX_GPIO_TLEFT_CFG_3_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_3_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_3_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_3_reg))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_12_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_13_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_14_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_3_gpio_15_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_12_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_12_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_12_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_12_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_12_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_13_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_13_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_13_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_13_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_13_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_14_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_14_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_14_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_14_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_14_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_15_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_15_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_15_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_15_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_3_get_gpio_15_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_TLEFT_CFG_4                                                0x18000810
#define  PINMUX_GPIO_TLEFT_CFG_4_reg_addr                                        "0xB8000810"
#define  PINMUX_GPIO_TLEFT_CFG_4_reg                                             0xB8000810
#define  PINMUX_GPIO_TLEFT_CFG_4_inst_addr                                       "0x0004"
#define  set_PINMUX_GPIO_TLEFT_CFG_4_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_4_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_4_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_4_reg))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_16_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_17_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_18_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_4_gpio_19_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_16_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_16_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_16_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_16_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_16_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_17_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_17_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_17_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_17_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_17_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_18_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_18_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_18_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_18_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_18_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_19_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_19_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_19_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_19_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_4_get_gpio_19_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_TLEFT_CFG_5                                                0x18000814
#define  PINMUX_GPIO_TLEFT_CFG_5_reg_addr                                        "0xB8000814"
#define  PINMUX_GPIO_TLEFT_CFG_5_reg                                             0xB8000814
#define  PINMUX_GPIO_TLEFT_CFG_5_inst_addr                                       "0x0005"
#define  set_PINMUX_GPIO_TLEFT_CFG_5_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_5_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_5_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_5_reg))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_20_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_21_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_22_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_5_gpio_23_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_20_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_20_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_20_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_20_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_20_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_21_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_21_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_21_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_21_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_21_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_22_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_22_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_22_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_22_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_22_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_23_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_23_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_23_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_23_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_5_get_gpio_23_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_TLEFT_CFG_6                                                0x18000818
#define  PINMUX_GPIO_TLEFT_CFG_6_reg_addr                                        "0xB8000818"
#define  PINMUX_GPIO_TLEFT_CFG_6_reg                                             0xB8000818
#define  PINMUX_GPIO_TLEFT_CFG_6_inst_addr                                       "0x0006"
#define  set_PINMUX_GPIO_TLEFT_CFG_6_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_6_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_6_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_6_reg))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_24_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_25_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_26_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_6_gpio_27_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_24_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_24_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_24_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_24_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_24_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_25_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_25_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_25_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_25_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_25_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_26_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_26_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_26_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_26_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_26_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_27_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_27_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_27_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_27_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_6_get_gpio_27_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_TLEFT_CFG_7                                                0x1800081C
#define  PINMUX_GPIO_TLEFT_CFG_7_reg_addr                                        "0xB800081C"
#define  PINMUX_GPIO_TLEFT_CFG_7_reg                                             0xB800081C
#define  PINMUX_GPIO_TLEFT_CFG_7_inst_addr                                       "0x0007"
#define  set_PINMUX_GPIO_TLEFT_CFG_7_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_7_reg)=data)
#define  get_PINMUX_GPIO_TLEFT_CFG_7_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_TLEFT_CFG_7_reg))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_ps_shift                                (28)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_pu_shift                                (27)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_pd_shift                                (26)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_ds_shift                                (25)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_sr_shift                                (24)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_ps_shift                                (20)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_pu_shift                                (19)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_pd_shift                                (18)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_ds_shift                                (17)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_sr_shift                                (16)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_ps_shift                                (12)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_pu_shift                                (11)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_pd_shift                                (10)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_ds_shift                                (9)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_sr_shift                                (8)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_ps_shift                                (4)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_pu_shift                                (3)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_pd_shift                                (2)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_ds_shift                                (1)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_sr_shift                                (0)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_28_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_29_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_30_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_TLEFT_CFG_7_gpio_31_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_28_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_28_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_28_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_28_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_28_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_29_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_29_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_29_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_29_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_29_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_30_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_30_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_30_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_30_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_30_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_31_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_31_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_31_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_31_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_TLEFT_CFG_7_get_gpio_31_sr(data)                            (0x00000001&(data))

#define  PINMUX_TLEFT_SMT_0                                                     0x18000820
#define  PINMUX_TLEFT_SMT_0_reg_addr                                             "0xB8000820"
#define  PINMUX_TLEFT_SMT_0_reg                                                  0xB8000820
#define  PINMUX_TLEFT_SMT_0_inst_addr                                            "0x0008"
#define  set_PINMUX_TLEFT_SMT_0_reg(data)                                        (*((volatile unsigned int*)PINMUX_TLEFT_SMT_0_reg)=data)
#define  get_PINMUX_TLEFT_SMT_0_reg                                              (*((volatile unsigned int*)PINMUX_TLEFT_SMT_0_reg))
#define  PINMUX_TLEFT_SMT_0_gpio_00_smt_shift                                    (31)
#define  PINMUX_TLEFT_SMT_0_gpio_01_smt_shift                                    (30)
#define  PINMUX_TLEFT_SMT_0_gpio_02_smt_shift                                    (29)
#define  PINMUX_TLEFT_SMT_0_gpio_03_smt_shift                                    (28)
#define  PINMUX_TLEFT_SMT_0_gpio_04_smt_shift                                    (27)
#define  PINMUX_TLEFT_SMT_0_gpio_05_smt_shift                                    (26)
#define  PINMUX_TLEFT_SMT_0_gpio_06_smt_shift                                    (25)
#define  PINMUX_TLEFT_SMT_0_gpio_07_smt_shift                                    (24)
#define  PINMUX_TLEFT_SMT_0_gpio_08_smt_shift                                    (23)
#define  PINMUX_TLEFT_SMT_0_gpio_09_smt_shift                                    (22)
#define  PINMUX_TLEFT_SMT_0_gpio_10_smt_shift                                    (21)
#define  PINMUX_TLEFT_SMT_0_gpio_11_smt_shift                                    (20)
#define  PINMUX_TLEFT_SMT_0_gpio_12_smt_shift                                    (19)
#define  PINMUX_TLEFT_SMT_0_gpio_13_smt_shift                                    (18)
#define  PINMUX_TLEFT_SMT_0_gpio_14_smt_shift                                    (17)
#define  PINMUX_TLEFT_SMT_0_gpio_15_smt_shift                                    (16)
#define  PINMUX_TLEFT_SMT_0_gpio_16_smt_shift                                    (15)
#define  PINMUX_TLEFT_SMT_0_gpio_17_smt_shift                                    (14)
#define  PINMUX_TLEFT_SMT_0_gpio_18_smt_shift                                    (13)
#define  PINMUX_TLEFT_SMT_0_gpio_19_smt_shift                                    (12)
#define  PINMUX_TLEFT_SMT_0_gpio_20_smt_shift                                    (11)
#define  PINMUX_TLEFT_SMT_0_gpio_21_smt_shift                                    (10)
#define  PINMUX_TLEFT_SMT_0_gpio_22_smt_shift                                    (9)
#define  PINMUX_TLEFT_SMT_0_gpio_23_smt_shift                                    (8)
#define  PINMUX_TLEFT_SMT_0_gpio_24_smt_shift                                    (7)
#define  PINMUX_TLEFT_SMT_0_gpio_25_smt_shift                                    (6)
#define  PINMUX_TLEFT_SMT_0_gpio_26_smt_shift                                    (5)
#define  PINMUX_TLEFT_SMT_0_gpio_27_smt_shift                                    (4)
#define  PINMUX_TLEFT_SMT_0_gpio_28_smt_shift                                    (3)
#define  PINMUX_TLEFT_SMT_0_gpio_29_smt_shift                                    (2)
#define  PINMUX_TLEFT_SMT_0_gpio_30_smt_shift                                    (1)
#define  PINMUX_TLEFT_SMT_0_gpio_31_smt_shift                                    (0)
#define  PINMUX_TLEFT_SMT_0_gpio_00_smt_mask                                     (0x80000000)
#define  PINMUX_TLEFT_SMT_0_gpio_01_smt_mask                                     (0x40000000)
#define  PINMUX_TLEFT_SMT_0_gpio_02_smt_mask                                     (0x20000000)
#define  PINMUX_TLEFT_SMT_0_gpio_03_smt_mask                                     (0x10000000)
#define  PINMUX_TLEFT_SMT_0_gpio_04_smt_mask                                     (0x08000000)
#define  PINMUX_TLEFT_SMT_0_gpio_05_smt_mask                                     (0x04000000)
#define  PINMUX_TLEFT_SMT_0_gpio_06_smt_mask                                     (0x02000000)
#define  PINMUX_TLEFT_SMT_0_gpio_07_smt_mask                                     (0x01000000)
#define  PINMUX_TLEFT_SMT_0_gpio_08_smt_mask                                     (0x00800000)
#define  PINMUX_TLEFT_SMT_0_gpio_09_smt_mask                                     (0x00400000)
#define  PINMUX_TLEFT_SMT_0_gpio_10_smt_mask                                     (0x00200000)
#define  PINMUX_TLEFT_SMT_0_gpio_11_smt_mask                                     (0x00100000)
#define  PINMUX_TLEFT_SMT_0_gpio_12_smt_mask                                     (0x00080000)
#define  PINMUX_TLEFT_SMT_0_gpio_13_smt_mask                                     (0x00040000)
#define  PINMUX_TLEFT_SMT_0_gpio_14_smt_mask                                     (0x00020000)
#define  PINMUX_TLEFT_SMT_0_gpio_15_smt_mask                                     (0x00010000)
#define  PINMUX_TLEFT_SMT_0_gpio_16_smt_mask                                     (0x00008000)
#define  PINMUX_TLEFT_SMT_0_gpio_17_smt_mask                                     (0x00004000)
#define  PINMUX_TLEFT_SMT_0_gpio_18_smt_mask                                     (0x00002000)
#define  PINMUX_TLEFT_SMT_0_gpio_19_smt_mask                                     (0x00001000)
#define  PINMUX_TLEFT_SMT_0_gpio_20_smt_mask                                     (0x00000800)
#define  PINMUX_TLEFT_SMT_0_gpio_21_smt_mask                                     (0x00000400)
#define  PINMUX_TLEFT_SMT_0_gpio_22_smt_mask                                     (0x00000200)
#define  PINMUX_TLEFT_SMT_0_gpio_23_smt_mask                                     (0x00000100)
#define  PINMUX_TLEFT_SMT_0_gpio_24_smt_mask                                     (0x00000080)
#define  PINMUX_TLEFT_SMT_0_gpio_25_smt_mask                                     (0x00000040)
#define  PINMUX_TLEFT_SMT_0_gpio_26_smt_mask                                     (0x00000020)
#define  PINMUX_TLEFT_SMT_0_gpio_27_smt_mask                                     (0x00000010)
#define  PINMUX_TLEFT_SMT_0_gpio_28_smt_mask                                     (0x00000008)
#define  PINMUX_TLEFT_SMT_0_gpio_29_smt_mask                                     (0x00000004)
#define  PINMUX_TLEFT_SMT_0_gpio_30_smt_mask                                     (0x00000002)
#define  PINMUX_TLEFT_SMT_0_gpio_31_smt_mask                                     (0x00000001)
#define  PINMUX_TLEFT_SMT_0_gpio_00_smt(data)                                    (0x80000000&((data)<<31))
#define  PINMUX_TLEFT_SMT_0_gpio_01_smt(data)                                    (0x40000000&((data)<<30))
#define  PINMUX_TLEFT_SMT_0_gpio_02_smt(data)                                    (0x20000000&((data)<<29))
#define  PINMUX_TLEFT_SMT_0_gpio_03_smt(data)                                    (0x10000000&((data)<<28))
#define  PINMUX_TLEFT_SMT_0_gpio_04_smt(data)                                    (0x08000000&((data)<<27))
#define  PINMUX_TLEFT_SMT_0_gpio_05_smt(data)                                    (0x04000000&((data)<<26))
#define  PINMUX_TLEFT_SMT_0_gpio_06_smt(data)                                    (0x02000000&((data)<<25))
#define  PINMUX_TLEFT_SMT_0_gpio_07_smt(data)                                    (0x01000000&((data)<<24))
#define  PINMUX_TLEFT_SMT_0_gpio_08_smt(data)                                    (0x00800000&((data)<<23))
#define  PINMUX_TLEFT_SMT_0_gpio_09_smt(data)                                    (0x00400000&((data)<<22))
#define  PINMUX_TLEFT_SMT_0_gpio_10_smt(data)                                    (0x00200000&((data)<<21))
#define  PINMUX_TLEFT_SMT_0_gpio_11_smt(data)                                    (0x00100000&((data)<<20))
#define  PINMUX_TLEFT_SMT_0_gpio_12_smt(data)                                    (0x00080000&((data)<<19))
#define  PINMUX_TLEFT_SMT_0_gpio_13_smt(data)                                    (0x00040000&((data)<<18))
#define  PINMUX_TLEFT_SMT_0_gpio_14_smt(data)                                    (0x00020000&((data)<<17))
#define  PINMUX_TLEFT_SMT_0_gpio_15_smt(data)                                    (0x00010000&((data)<<16))
#define  PINMUX_TLEFT_SMT_0_gpio_16_smt(data)                                    (0x00008000&((data)<<15))
#define  PINMUX_TLEFT_SMT_0_gpio_17_smt(data)                                    (0x00004000&((data)<<14))
#define  PINMUX_TLEFT_SMT_0_gpio_18_smt(data)                                    (0x00002000&((data)<<13))
#define  PINMUX_TLEFT_SMT_0_gpio_19_smt(data)                                    (0x00001000&((data)<<12))
#define  PINMUX_TLEFT_SMT_0_gpio_20_smt(data)                                    (0x00000800&((data)<<11))
#define  PINMUX_TLEFT_SMT_0_gpio_21_smt(data)                                    (0x00000400&((data)<<10))
#define  PINMUX_TLEFT_SMT_0_gpio_22_smt(data)                                    (0x00000200&((data)<<9))
#define  PINMUX_TLEFT_SMT_0_gpio_23_smt(data)                                    (0x00000100&((data)<<8))
#define  PINMUX_TLEFT_SMT_0_gpio_24_smt(data)                                    (0x00000080&((data)<<7))
#define  PINMUX_TLEFT_SMT_0_gpio_25_smt(data)                                    (0x00000040&((data)<<6))
#define  PINMUX_TLEFT_SMT_0_gpio_26_smt(data)                                    (0x00000020&((data)<<5))
#define  PINMUX_TLEFT_SMT_0_gpio_27_smt(data)                                    (0x00000010&((data)<<4))
#define  PINMUX_TLEFT_SMT_0_gpio_28_smt(data)                                    (0x00000008&((data)<<3))
#define  PINMUX_TLEFT_SMT_0_gpio_29_smt(data)                                    (0x00000004&((data)<<2))
#define  PINMUX_TLEFT_SMT_0_gpio_30_smt(data)                                    (0x00000002&((data)<<1))
#define  PINMUX_TLEFT_SMT_0_gpio_31_smt(data)                                    (0x00000001&(data))
#define  PINMUX_TLEFT_SMT_0_get_gpio_00_smt(data)                                ((0x80000000&(data))>>31)
#define  PINMUX_TLEFT_SMT_0_get_gpio_01_smt(data)                                ((0x40000000&(data))>>30)
#define  PINMUX_TLEFT_SMT_0_get_gpio_02_smt(data)                                ((0x20000000&(data))>>29)
#define  PINMUX_TLEFT_SMT_0_get_gpio_03_smt(data)                                ((0x10000000&(data))>>28)
#define  PINMUX_TLEFT_SMT_0_get_gpio_04_smt(data)                                ((0x08000000&(data))>>27)
#define  PINMUX_TLEFT_SMT_0_get_gpio_05_smt(data)                                ((0x04000000&(data))>>26)
#define  PINMUX_TLEFT_SMT_0_get_gpio_06_smt(data)                                ((0x02000000&(data))>>25)
#define  PINMUX_TLEFT_SMT_0_get_gpio_07_smt(data)                                ((0x01000000&(data))>>24)
#define  PINMUX_TLEFT_SMT_0_get_gpio_08_smt(data)                                ((0x00800000&(data))>>23)
#define  PINMUX_TLEFT_SMT_0_get_gpio_09_smt(data)                                ((0x00400000&(data))>>22)
#define  PINMUX_TLEFT_SMT_0_get_gpio_10_smt(data)                                ((0x00200000&(data))>>21)
#define  PINMUX_TLEFT_SMT_0_get_gpio_11_smt(data)                                ((0x00100000&(data))>>20)
#define  PINMUX_TLEFT_SMT_0_get_gpio_12_smt(data)                                ((0x00080000&(data))>>19)
#define  PINMUX_TLEFT_SMT_0_get_gpio_13_smt(data)                                ((0x00040000&(data))>>18)
#define  PINMUX_TLEFT_SMT_0_get_gpio_14_smt(data)                                ((0x00020000&(data))>>17)
#define  PINMUX_TLEFT_SMT_0_get_gpio_15_smt(data)                                ((0x00010000&(data))>>16)
#define  PINMUX_TLEFT_SMT_0_get_gpio_16_smt(data)                                ((0x00008000&(data))>>15)
#define  PINMUX_TLEFT_SMT_0_get_gpio_17_smt(data)                                ((0x00004000&(data))>>14)
#define  PINMUX_TLEFT_SMT_0_get_gpio_18_smt(data)                                ((0x00002000&(data))>>13)
#define  PINMUX_TLEFT_SMT_0_get_gpio_19_smt(data)                                ((0x00001000&(data))>>12)
#define  PINMUX_TLEFT_SMT_0_get_gpio_20_smt(data)                                ((0x00000800&(data))>>11)
#define  PINMUX_TLEFT_SMT_0_get_gpio_21_smt(data)                                ((0x00000400&(data))>>10)
#define  PINMUX_TLEFT_SMT_0_get_gpio_22_smt(data)                                ((0x00000200&(data))>>9)
#define  PINMUX_TLEFT_SMT_0_get_gpio_23_smt(data)                                ((0x00000100&(data))>>8)
#define  PINMUX_TLEFT_SMT_0_get_gpio_24_smt(data)                                ((0x00000080&(data))>>7)
#define  PINMUX_TLEFT_SMT_0_get_gpio_25_smt(data)                                ((0x00000040&(data))>>6)
#define  PINMUX_TLEFT_SMT_0_get_gpio_26_smt(data)                                ((0x00000020&(data))>>5)
#define  PINMUX_TLEFT_SMT_0_get_gpio_27_smt(data)                                ((0x00000010&(data))>>4)
#define  PINMUX_TLEFT_SMT_0_get_gpio_28_smt(data)                                ((0x00000008&(data))>>3)
#define  PINMUX_TLEFT_SMT_0_get_gpio_29_smt(data)                                ((0x00000004&(data))>>2)
#define  PINMUX_TLEFT_SMT_0_get_gpio_30_smt(data)                                ((0x00000002&(data))>>1)
#define  PINMUX_TLEFT_SMT_0_get_gpio_31_smt(data)                                (0x00000001&(data))

#define  PINMUX_TLEFT_IEV18_EA_0                                                0x18000824
#define  PINMUX_TLEFT_IEV18_EA_0_reg_addr                                        "0xB8000824"
#define  PINMUX_TLEFT_IEV18_EA_0_reg                                             0xB8000824
#define  PINMUX_TLEFT_IEV18_EA_0_inst_addr                                       "0x0009"
#define  set_PINMUX_TLEFT_IEV18_EA_0_reg(data)                                   (*((volatile unsigned int*)PINMUX_TLEFT_IEV18_EA_0_reg)=data)
#define  get_PINMUX_TLEFT_IEV18_EA_0_reg                                         (*((volatile unsigned int*)PINMUX_TLEFT_IEV18_EA_0_reg))
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_27_ie_v18_shift                            (31)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_03_ie_v18_shift                            (30)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_02_ie_v18_shift                            (29)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_28_ie_v18_shift                            (28)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_26_ie_v18_shift                            (27)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_14_ea_shift                                (26)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_15_ea_shift                                (25)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_27_ie_v18_mask                             (0x80000000)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_03_ie_v18_mask                             (0x40000000)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_02_ie_v18_mask                             (0x20000000)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_28_ie_v18_mask                             (0x10000000)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_26_ie_v18_mask                             (0x08000000)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_14_ea_mask                                 (0x04000000)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_15_ea_mask                                 (0x02000000)
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_27_ie_v18(data)                            (0x80000000&((data)<<31))
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_03_ie_v18(data)                            (0x40000000&((data)<<30))
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_02_ie_v18(data)                            (0x20000000&((data)<<29))
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_28_ie_v18(data)                            (0x10000000&((data)<<28))
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_26_ie_v18(data)                            (0x08000000&((data)<<27))
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_14_ea(data)                                (0x04000000&((data)<<26))
#define  PINMUX_TLEFT_IEV18_EA_0_gpio_15_ea(data)                                (0x02000000&((data)<<25))
#define  PINMUX_TLEFT_IEV18_EA_0_get_gpio_27_ie_v18(data)                        ((0x80000000&(data))>>31)
#define  PINMUX_TLEFT_IEV18_EA_0_get_gpio_03_ie_v18(data)                        ((0x40000000&(data))>>30)
#define  PINMUX_TLEFT_IEV18_EA_0_get_gpio_02_ie_v18(data)                        ((0x20000000&(data))>>29)
#define  PINMUX_TLEFT_IEV18_EA_0_get_gpio_28_ie_v18(data)                        ((0x10000000&(data))>>28)
#define  PINMUX_TLEFT_IEV18_EA_0_get_gpio_26_ie_v18(data)                        ((0x08000000&(data))>>27)
#define  PINMUX_TLEFT_IEV18_EA_0_get_gpio_14_ea(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_TLEFT_IEV18_EA_0_get_gpio_15_ea(data)                            ((0x02000000&(data))>>25)

#define  PINMUX_BB_AUDIO_0                                                      0x18000828
#define  PINMUX_BB_AUDIO_0_reg_addr                                              "0xB8000828"
#define  PINMUX_BB_AUDIO_0_reg                                                   0xB8000828
#define  PINMUX_BB_AUDIO_0_inst_addr                                             "0x000A"
#define  set_PINMUX_BB_AUDIO_0_reg(data)                                         (*((volatile unsigned int*)PINMUX_BB_AUDIO_0_reg)=data)
#define  get_PINMUX_BB_AUDIO_0_reg                                               (*((volatile unsigned int*)PINMUX_BB_AUDIO_0_reg))
#define  PINMUX_BB_AUDIO_0_bb_ai2l_ps_shift                                      (28)
#define  PINMUX_BB_AUDIO_0_bb_ai2r_ps_shift                                      (24)
#define  PINMUX_BB_AUDIO_0_bb_ai3l_ps_shift                                      (20)
#define  PINMUX_BB_AUDIO_0_bb_ai3r_ps_shift                                      (16)
#define  PINMUX_BB_AUDIO_0_bb_aiol_ps_shift                                      (12)
#define  PINMUX_BB_AUDIO_0_bb_aior_ps_shift                                      (8)
#define  PINMUX_BB_AUDIO_0_bb_ai2l_gpi_en_shift                                  (5)
#define  PINMUX_BB_AUDIO_0_bb_ai2r_gpi_en_shift                                  (4)
#define  PINMUX_BB_AUDIO_0_bb_ai3l_gpi_en_shift                                  (3)
#define  PINMUX_BB_AUDIO_0_bb_ai3r_gpi_en_shift                                  (2)
#define  PINMUX_BB_AUDIO_0_bb_aiol_gpi_en_shift                                  (1)
#define  PINMUX_BB_AUDIO_0_bb_aior_gpi_en_shift                                  (0)
#define  PINMUX_BB_AUDIO_0_bb_ai2l_ps_mask                                       (0xF0000000)
#define  PINMUX_BB_AUDIO_0_bb_ai2r_ps_mask                                       (0x0F000000)
#define  PINMUX_BB_AUDIO_0_bb_ai3l_ps_mask                                       (0x00F00000)
#define  PINMUX_BB_AUDIO_0_bb_ai3r_ps_mask                                       (0x000F0000)
#define  PINMUX_BB_AUDIO_0_bb_aiol_ps_mask                                       (0x0000F000)
#define  PINMUX_BB_AUDIO_0_bb_aior_ps_mask                                       (0x00000F00)
#define  PINMUX_BB_AUDIO_0_bb_ai2l_gpi_en_mask                                   (0x00000020)
#define  PINMUX_BB_AUDIO_0_bb_ai2r_gpi_en_mask                                   (0x00000010)
#define  PINMUX_BB_AUDIO_0_bb_ai3l_gpi_en_mask                                   (0x00000008)
#define  PINMUX_BB_AUDIO_0_bb_ai3r_gpi_en_mask                                   (0x00000004)
#define  PINMUX_BB_AUDIO_0_bb_aiol_gpi_en_mask                                   (0x00000002)
#define  PINMUX_BB_AUDIO_0_bb_aior_gpi_en_mask                                   (0x00000001)
#define  PINMUX_BB_AUDIO_0_bb_ai2l_ps(data)                                      (0xF0000000&((data)<<28))
#define  PINMUX_BB_AUDIO_0_bb_ai2r_ps(data)                                      (0x0F000000&((data)<<24))
#define  PINMUX_BB_AUDIO_0_bb_ai3l_ps(data)                                      (0x00F00000&((data)<<20))
#define  PINMUX_BB_AUDIO_0_bb_ai3r_ps(data)                                      (0x000F0000&((data)<<16))
#define  PINMUX_BB_AUDIO_0_bb_aiol_ps(data)                                      (0x0000F000&((data)<<12))
#define  PINMUX_BB_AUDIO_0_bb_aior_ps(data)                                      (0x00000F00&((data)<<8))
#define  PINMUX_BB_AUDIO_0_bb_ai2l_gpi_en(data)                                  (0x00000020&((data)<<5))
#define  PINMUX_BB_AUDIO_0_bb_ai2r_gpi_en(data)                                  (0x00000010&((data)<<4))
#define  PINMUX_BB_AUDIO_0_bb_ai3l_gpi_en(data)                                  (0x00000008&((data)<<3))
#define  PINMUX_BB_AUDIO_0_bb_ai3r_gpi_en(data)                                  (0x00000004&((data)<<2))
#define  PINMUX_BB_AUDIO_0_bb_aiol_gpi_en(data)                                  (0x00000002&((data)<<1))
#define  PINMUX_BB_AUDIO_0_bb_aior_gpi_en(data)                                  (0x00000001&(data))
#define  PINMUX_BB_AUDIO_0_get_bb_ai2l_ps(data)                                  ((0xF0000000&(data))>>28)
#define  PINMUX_BB_AUDIO_0_get_bb_ai2r_ps(data)                                  ((0x0F000000&(data))>>24)
#define  PINMUX_BB_AUDIO_0_get_bb_ai3l_ps(data)                                  ((0x00F00000&(data))>>20)
#define  PINMUX_BB_AUDIO_0_get_bb_ai3r_ps(data)                                  ((0x000F0000&(data))>>16)
#define  PINMUX_BB_AUDIO_0_get_bb_aiol_ps(data)                                  ((0x0000F000&(data))>>12)
#define  PINMUX_BB_AUDIO_0_get_bb_aior_ps(data)                                  ((0x00000F00&(data))>>8)
#define  PINMUX_BB_AUDIO_0_get_bb_ai2l_gpi_en(data)                              ((0x00000020&(data))>>5)
#define  PINMUX_BB_AUDIO_0_get_bb_ai2r_gpi_en(data)                              ((0x00000010&(data))>>4)
#define  PINMUX_BB_AUDIO_0_get_bb_ai3l_gpi_en(data)                              ((0x00000008&(data))>>3)
#define  PINMUX_BB_AUDIO_0_get_bb_ai3r_gpi_en(data)                              ((0x00000004&(data))>>2)
#define  PINMUX_BB_AUDIO_0_get_bb_aiol_gpi_en(data)                              ((0x00000002&(data))>>1)
#define  PINMUX_BB_AUDIO_0_get_bb_aior_gpi_en(data)                              (0x00000001&(data))

#define  PINMUX_BB_AUDIO_1                                                      0x1800082C
#define  PINMUX_BB_AUDIO_1_reg_addr                                              "0xB800082C"
#define  PINMUX_BB_AUDIO_1_reg                                                   0xB800082C
#define  PINMUX_BB_AUDIO_1_inst_addr                                             "0x000B"
#define  set_PINMUX_BB_AUDIO_1_reg(data)                                         (*((volatile unsigned int*)PINMUX_BB_AUDIO_1_reg)=data)
#define  get_PINMUX_BB_AUDIO_1_reg                                               (*((volatile unsigned int*)PINMUX_BB_AUDIO_1_reg))
#define  PINMUX_BB_AUDIO_1_bb_hpol_ps_shift                                      (28)
#define  PINMUX_BB_AUDIO_1_bb_hpor_ps_shift                                      (24)
#define  PINMUX_BB_AUDIO_1_bb_hpol_gpi_en_shift                                  (1)
#define  PINMUX_BB_AUDIO_1_bb_hpor_gpi_en_shift                                  (0)
#define  PINMUX_BB_AUDIO_1_bb_hpol_ps_mask                                       (0xF0000000)
#define  PINMUX_BB_AUDIO_1_bb_hpor_ps_mask                                       (0x0F000000)
#define  PINMUX_BB_AUDIO_1_bb_hpol_gpi_en_mask                                   (0x00000002)
#define  PINMUX_BB_AUDIO_1_bb_hpor_gpi_en_mask                                   (0x00000001)
#define  PINMUX_BB_AUDIO_1_bb_hpol_ps(data)                                      (0xF0000000&((data)<<28))
#define  PINMUX_BB_AUDIO_1_bb_hpor_ps(data)                                      (0x0F000000&((data)<<24))
#define  PINMUX_BB_AUDIO_1_bb_hpol_gpi_en(data)                                  (0x00000002&((data)<<1))
#define  PINMUX_BB_AUDIO_1_bb_hpor_gpi_en(data)                                  (0x00000001&(data))
#define  PINMUX_BB_AUDIO_1_get_bb_hpol_ps(data)                                  ((0xF0000000&(data))>>28)
#define  PINMUX_BB_AUDIO_1_get_bb_hpor_ps(data)                                  ((0x0F000000&(data))>>24)
#define  PINMUX_BB_AUDIO_1_get_bb_hpol_gpi_en(data)                              ((0x00000002&(data))>>1)
#define  PINMUX_BB_AUDIO_1_get_bb_hpor_gpi_en(data)                              (0x00000001&(data))

#define  PINMUX_YPBPR_0                                                         0x18000830
#define  PINMUX_YPBPR_0_reg_addr                                                 "0xB8000830"
#define  PINMUX_YPBPR_0_reg                                                      0xB8000830
#define  PINMUX_YPBPR_0_inst_addr                                                "0x000C"
#define  set_PINMUX_YPBPR_0_reg(data)                                            (*((volatile unsigned int*)PINMUX_YPBPR_0_reg)=data)
#define  get_PINMUX_YPBPR_0_reg                                                  (*((volatile unsigned int*)PINMUX_YPBPR_0_reg))
#define  PINMUX_YPBPR_0_vsync_ps_shift                                           (28)
#define  PINMUX_YPBPR_0_hsync_ps_shift                                           (24)
#define  PINMUX_YPBPR_0_vin_0p_ps_shift                                          (20)
#define  PINMUX_YPBPR_0_vin_bn_ps_shift                                          (16)
#define  PINMUX_YPBPR_0_vin_1p_ps_shift                                          (12)
#define  PINMUX_YPBPR_0_vin_gn_ps_shift                                          (8)
#define  PINMUX_YPBPR_0_vsync_gpi_en_shift                                       (5)
#define  PINMUX_YPBPR_0_hsync_gpi_en_shift                                       (4)
#define  PINMUX_YPBPR_0_vin_0p_gpi_en_shift                                      (3)
#define  PINMUX_YPBPR_0_vin_bn_gpi_en_shift                                      (2)
#define  PINMUX_YPBPR_0_vin_1p_gpi_en_shift                                      (1)
#define  PINMUX_YPBPR_0_vin_gn_gpi_en_shift                                      (0)
#define  PINMUX_YPBPR_0_vsync_ps_mask                                            (0xF0000000)
#define  PINMUX_YPBPR_0_hsync_ps_mask                                            (0x0F000000)
#define  PINMUX_YPBPR_0_vin_0p_ps_mask                                           (0x00F00000)
#define  PINMUX_YPBPR_0_vin_bn_ps_mask                                           (0x000F0000)
#define  PINMUX_YPBPR_0_vin_1p_ps_mask                                           (0x0000F000)
#define  PINMUX_YPBPR_0_vin_gn_ps_mask                                           (0x00000F00)
#define  PINMUX_YPBPR_0_vsync_gpi_en_mask                                        (0x00000020)
#define  PINMUX_YPBPR_0_hsync_gpi_en_mask                                        (0x00000010)
#define  PINMUX_YPBPR_0_vin_0p_gpi_en_mask                                       (0x00000008)
#define  PINMUX_YPBPR_0_vin_bn_gpi_en_mask                                       (0x00000004)
#define  PINMUX_YPBPR_0_vin_1p_gpi_en_mask                                       (0x00000002)
#define  PINMUX_YPBPR_0_vin_gn_gpi_en_mask                                       (0x00000001)
#define  PINMUX_YPBPR_0_vsync_ps(data)                                           (0xF0000000&((data)<<28))
#define  PINMUX_YPBPR_0_hsync_ps(data)                                           (0x0F000000&((data)<<24))
#define  PINMUX_YPBPR_0_vin_0p_ps(data)                                          (0x00F00000&((data)<<20))
#define  PINMUX_YPBPR_0_vin_bn_ps(data)                                          (0x000F0000&((data)<<16))
#define  PINMUX_YPBPR_0_vin_1p_ps(data)                                          (0x0000F000&((data)<<12))
#define  PINMUX_YPBPR_0_vin_gn_ps(data)                                          (0x00000F00&((data)<<8))
#define  PINMUX_YPBPR_0_vsync_gpi_en(data)                                       (0x00000020&((data)<<5))
#define  PINMUX_YPBPR_0_hsync_gpi_en(data)                                       (0x00000010&((data)<<4))
#define  PINMUX_YPBPR_0_vin_0p_gpi_en(data)                                      (0x00000008&((data)<<3))
#define  PINMUX_YPBPR_0_vin_bn_gpi_en(data)                                      (0x00000004&((data)<<2))
#define  PINMUX_YPBPR_0_vin_1p_gpi_en(data)                                      (0x00000002&((data)<<1))
#define  PINMUX_YPBPR_0_vin_gn_gpi_en(data)                                      (0x00000001&(data))
#define  PINMUX_YPBPR_0_get_vsync_ps(data)                                       ((0xF0000000&(data))>>28)
#define  PINMUX_YPBPR_0_get_hsync_ps(data)                                       ((0x0F000000&(data))>>24)
#define  PINMUX_YPBPR_0_get_vin_0p_ps(data)                                      ((0x00F00000&(data))>>20)
#define  PINMUX_YPBPR_0_get_vin_bn_ps(data)                                      ((0x000F0000&(data))>>16)
#define  PINMUX_YPBPR_0_get_vin_1p_ps(data)                                      ((0x0000F000&(data))>>12)
#define  PINMUX_YPBPR_0_get_vin_gn_ps(data)                                      ((0x00000F00&(data))>>8)
#define  PINMUX_YPBPR_0_get_vsync_gpi_en(data)                                   ((0x00000020&(data))>>5)
#define  PINMUX_YPBPR_0_get_hsync_gpi_en(data)                                   ((0x00000010&(data))>>4)
#define  PINMUX_YPBPR_0_get_vin_0p_gpi_en(data)                                  ((0x00000008&(data))>>3)
#define  PINMUX_YPBPR_0_get_vin_bn_gpi_en(data)                                  ((0x00000004&(data))>>2)
#define  PINMUX_YPBPR_0_get_vin_1p_gpi_en(data)                                  ((0x00000002&(data))>>1)
#define  PINMUX_YPBPR_0_get_vin_gn_gpi_en(data)                                  (0x00000001&(data))

#define  PINMUX_YPBPR_1                                                         0x18000834
#define  PINMUX_YPBPR_1_reg_addr                                                 "0xB8000834"
#define  PINMUX_YPBPR_1_reg                                                      0xB8000834
#define  PINMUX_YPBPR_1_inst_addr                                                "0x000D"
#define  set_PINMUX_YPBPR_1_reg(data)                                            (*((volatile unsigned int*)PINMUX_YPBPR_1_reg)=data)
#define  get_PINMUX_YPBPR_1_reg                                                  (*((volatile unsigned int*)PINMUX_YPBPR_1_reg))
#define  PINMUX_YPBPR_1_vin_2p_ps_shift                                          (28)
#define  PINMUX_YPBPR_1_vin_rn_ps_shift                                          (24)
#define  PINMUX_YPBPR_1_vin_3p_ps_shift                                          (20)
#define  PINMUX_YPBPR_1_vin_y0n_ps_shift                                         (16)
#define  PINMUX_YPBPR_1_vin_4p_ps_shift                                          (12)
#define  PINMUX_YPBPR_1_vin_5p_ps_shift                                          (8)
#define  PINMUX_YPBPR_1_vin_2p_gpi_en_shift                                      (5)
#define  PINMUX_YPBPR_1_vin_rn_gpi_en_shift                                      (4)
#define  PINMUX_YPBPR_1_vin_3p_gpi_en_shift                                      (3)
#define  PINMUX_YPBPR_1_vin_y0n_gpi_en_shift                                     (2)
#define  PINMUX_YPBPR_1_vin_4p_gpi_en_shift                                      (1)
#define  PINMUX_YPBPR_1_vin_5p_gpi_en_shift                                      (0)
#define  PINMUX_YPBPR_1_vin_2p_ps_mask                                           (0xF0000000)
#define  PINMUX_YPBPR_1_vin_rn_ps_mask                                           (0x0F000000)
#define  PINMUX_YPBPR_1_vin_3p_ps_mask                                           (0x00F00000)
#define  PINMUX_YPBPR_1_vin_y0n_ps_mask                                          (0x000F0000)
#define  PINMUX_YPBPR_1_vin_4p_ps_mask                                           (0x0000F000)
#define  PINMUX_YPBPR_1_vin_5p_ps_mask                                           (0x00000F00)
#define  PINMUX_YPBPR_1_vin_2p_gpi_en_mask                                       (0x00000020)
#define  PINMUX_YPBPR_1_vin_rn_gpi_en_mask                                       (0x00000010)
#define  PINMUX_YPBPR_1_vin_3p_gpi_en_mask                                       (0x00000008)
#define  PINMUX_YPBPR_1_vin_y0n_gpi_en_mask                                      (0x00000004)
#define  PINMUX_YPBPR_1_vin_4p_gpi_en_mask                                       (0x00000002)
#define  PINMUX_YPBPR_1_vin_5p_gpi_en_mask                                       (0x00000001)
#define  PINMUX_YPBPR_1_vin_2p_ps(data)                                          (0xF0000000&((data)<<28))
#define  PINMUX_YPBPR_1_vin_rn_ps(data)                                          (0x0F000000&((data)<<24))
#define  PINMUX_YPBPR_1_vin_3p_ps(data)                                          (0x00F00000&((data)<<20))
#define  PINMUX_YPBPR_1_vin_y0n_ps(data)                                         (0x000F0000&((data)<<16))
#define  PINMUX_YPBPR_1_vin_4p_ps(data)                                          (0x0000F000&((data)<<12))
#define  PINMUX_YPBPR_1_vin_5p_ps(data)                                          (0x00000F00&((data)<<8))
#define  PINMUX_YPBPR_1_vin_2p_gpi_en(data)                                      (0x00000020&((data)<<5))
#define  PINMUX_YPBPR_1_vin_rn_gpi_en(data)                                      (0x00000010&((data)<<4))
#define  PINMUX_YPBPR_1_vin_3p_gpi_en(data)                                      (0x00000008&((data)<<3))
#define  PINMUX_YPBPR_1_vin_y0n_gpi_en(data)                                     (0x00000004&((data)<<2))
#define  PINMUX_YPBPR_1_vin_4p_gpi_en(data)                                      (0x00000002&((data)<<1))
#define  PINMUX_YPBPR_1_vin_5p_gpi_en(data)                                      (0x00000001&(data))
#define  PINMUX_YPBPR_1_get_vin_2p_ps(data)                                      ((0xF0000000&(data))>>28)
#define  PINMUX_YPBPR_1_get_vin_rn_ps(data)                                      ((0x0F000000&(data))>>24)
#define  PINMUX_YPBPR_1_get_vin_3p_ps(data)                                      ((0x00F00000&(data))>>20)
#define  PINMUX_YPBPR_1_get_vin_y0n_ps(data)                                     ((0x000F0000&(data))>>16)
#define  PINMUX_YPBPR_1_get_vin_4p_ps(data)                                      ((0x0000F000&(data))>>12)
#define  PINMUX_YPBPR_1_get_vin_5p_ps(data)                                      ((0x00000F00&(data))>>8)
#define  PINMUX_YPBPR_1_get_vin_2p_gpi_en(data)                                  ((0x00000020&(data))>>5)
#define  PINMUX_YPBPR_1_get_vin_rn_gpi_en(data)                                  ((0x00000010&(data))>>4)
#define  PINMUX_YPBPR_1_get_vin_3p_gpi_en(data)                                  ((0x00000008&(data))>>3)
#define  PINMUX_YPBPR_1_get_vin_y0n_gpi_en(data)                                 ((0x00000004&(data))>>2)
#define  PINMUX_YPBPR_1_get_vin_4p_gpi_en(data)                                  ((0x00000002&(data))>>1)
#define  PINMUX_YPBPR_1_get_vin_5p_gpi_en(data)                                  (0x00000001&(data))

#define  PINMUX_VD_ADC_0                                                        0x18000838
#define  PINMUX_VD_ADC_0_reg_addr                                                "0xB8000838"
#define  PINMUX_VD_ADC_0_reg                                                     0xB8000838
#define  PINMUX_VD_ADC_0_inst_addr                                               "0x000E"
#define  set_PINMUX_VD_ADC_0_reg(data)                                           (*((volatile unsigned int*)PINMUX_VD_ADC_0_reg)=data)
#define  get_PINMUX_VD_ADC_0_reg                                                 (*((volatile unsigned int*)PINMUX_VD_ADC_0_reg))
#define  PINMUX_VD_ADC_0_scart_fsw_0_ps_shift                                    (28)
#define  PINMUX_VD_ADC_0_vin_10p_ps_shift                                        (24)
#define  PINMUX_VD_ADC_0_vin_a0n_ps_shift                                        (20)
#define  PINMUX_VD_ADC_0_scart_fsw_0_gpi_en_shift                                (2)
#define  PINMUX_VD_ADC_0_vin_10p_gpi_en_shift                                    (1)
#define  PINMUX_VD_ADC_0_vin_a0n_gpi_en_shift                                    (0)
#define  PINMUX_VD_ADC_0_scart_fsw_0_ps_mask                                     (0xF0000000)
#define  PINMUX_VD_ADC_0_vin_10p_ps_mask                                         (0x0F000000)
#define  PINMUX_VD_ADC_0_vin_a0n_ps_mask                                         (0x00F00000)
#define  PINMUX_VD_ADC_0_scart_fsw_0_gpi_en_mask                                 (0x00000004)
#define  PINMUX_VD_ADC_0_vin_10p_gpi_en_mask                                     (0x00000002)
#define  PINMUX_VD_ADC_0_vin_a0n_gpi_en_mask                                     (0x00000001)
#define  PINMUX_VD_ADC_0_scart_fsw_0_ps(data)                                    (0xF0000000&((data)<<28))
#define  PINMUX_VD_ADC_0_vin_10p_ps(data)                                        (0x0F000000&((data)<<24))
#define  PINMUX_VD_ADC_0_vin_a0n_ps(data)                                        (0x00F00000&((data)<<20))
#define  PINMUX_VD_ADC_0_scart_fsw_0_gpi_en(data)                                (0x00000004&((data)<<2))
#define  PINMUX_VD_ADC_0_vin_10p_gpi_en(data)                                    (0x00000002&((data)<<1))
#define  PINMUX_VD_ADC_0_vin_a0n_gpi_en(data)                                    (0x00000001&(data))
#define  PINMUX_VD_ADC_0_get_scart_fsw_0_ps(data)                                ((0xF0000000&(data))>>28)
#define  PINMUX_VD_ADC_0_get_vin_10p_ps(data)                                    ((0x0F000000&(data))>>24)
#define  PINMUX_VD_ADC_0_get_vin_a0n_ps(data)                                    ((0x00F00000&(data))>>20)
#define  PINMUX_VD_ADC_0_get_scart_fsw_0_gpi_en(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_VD_ADC_0_get_vin_10p_gpi_en(data)                                ((0x00000002&(data))>>1)
#define  PINMUX_VD_ADC_0_get_vin_a0n_gpi_en(data)                                (0x00000001&(data))

#define  PINMUX_VD_DAC_0                                                        0x1800083C
#define  PINMUX_VD_DAC_0_reg_addr                                                "0xB800083C"
#define  PINMUX_VD_DAC_0_reg                                                     0xB800083C
#define  PINMUX_VD_DAC_0_inst_addr                                               "0x000F"
#define  set_PINMUX_VD_DAC_0_reg(data)                                           (*((volatile unsigned int*)PINMUX_VD_DAC_0_reg)=data)
#define  get_PINMUX_VD_DAC_0_reg                                                 (*((volatile unsigned int*)PINMUX_VD_DAC_0_reg))
#define  PINMUX_VD_DAC_0_vid_vdac_ps_shift                                       (28)
#define  PINMUX_VD_DAC_0_vid_vdbs_ps_shift                                       (24)
#define  PINMUX_VD_DAC_0_vid_vdac_gpi_en_shift                                   (1)
#define  PINMUX_VD_DAC_0_vid_vdbs_gpi_en_shift                                   (0)
#define  PINMUX_VD_DAC_0_vid_vdac_ps_mask                                        (0xF0000000)
#define  PINMUX_VD_DAC_0_vid_vdbs_ps_mask                                        (0x0F000000)
#define  PINMUX_VD_DAC_0_vid_vdac_gpi_en_mask                                    (0x00000002)
#define  PINMUX_VD_DAC_0_vid_vdbs_gpi_en_mask                                    (0x00000001)
#define  PINMUX_VD_DAC_0_vid_vdac_ps(data)                                       (0xF0000000&((data)<<28))
#define  PINMUX_VD_DAC_0_vid_vdbs_ps(data)                                       (0x0F000000&((data)<<24))
#define  PINMUX_VD_DAC_0_vid_vdac_gpi_en(data)                                   (0x00000002&((data)<<1))
#define  PINMUX_VD_DAC_0_vid_vdbs_gpi_en(data)                                   (0x00000001&(data))
#define  PINMUX_VD_DAC_0_get_vid_vdac_ps(data)                                   ((0xF0000000&(data))>>28)
#define  PINMUX_VD_DAC_0_get_vid_vdbs_ps(data)                                   ((0x0F000000&(data))>>24)
#define  PINMUX_VD_DAC_0_get_vid_vdac_gpi_en(data)                               ((0x00000002&(data))>>1)
#define  PINMUX_VD_DAC_0_get_vid_vdbs_gpi_en(data)                               (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_0                                                 0x18000840
#define  PINMUX_GPIO_LEFT_CFG_0_reg_addr                                         "0xB8000840"
#define  PINMUX_GPIO_LEFT_CFG_0_reg                                              0xB8000840
#define  PINMUX_GPIO_LEFT_CFG_0_inst_addr                                        "0x0010"
#define  set_PINMUX_GPIO_LEFT_CFG_0_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_0_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_0_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_0_reg))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_ps_shift                                 (28)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_pu_shift                                 (27)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_pd_shift                                 (26)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_ds_shift                                 (25)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_sr_shift                                 (24)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_ps_shift                                 (20)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_pu_shift                                 (19)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_pd_shift                                 (18)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_ds_shift                                 (17)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_sr_shift                                 (16)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_ps_shift                                 (12)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_pu_shift                                 (11)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_pd_shift                                 (10)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_ds_shift                                 (9)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_sr_shift                                 (8)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_ps_shift                                 (4)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_pu_shift                                 (3)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_pd_shift                                 (2)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_ds_shift                                 (1)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_sr_shift                                 (0)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_pu_mask                                  (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_pd_mask                                  (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_ds_mask                                  (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_sr_mask                                  (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_pu_mask                                  (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_pd_mask                                  (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_ds_mask                                  (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_sr_mask                                  (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_pu_mask                                  (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_pd_mask                                  (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_ds_mask                                  (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_sr_mask                                  (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_pu_mask                                  (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_pd_mask                                  (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_ds_mask                                  (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_sr_mask                                  (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_pu(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_pd(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_ds(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_57_sr(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_pu(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_pd(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_ds(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_58_sr(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_pu(data)                                 (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_pd(data)                                 (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_ds(data)                                 (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_59_sr(data)                                 (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_pu(data)                                 (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_pd(data)                                 (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_ds(data)                                 (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_0_gpio_60_sr(data)                                 (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_57_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_57_pu(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_57_pd(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_57_ds(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_57_sr(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_58_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_58_pu(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_58_pd(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_58_ds(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_58_sr(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_59_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_59_pu(data)                             ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_59_pd(data)                             ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_59_ds(data)                             ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_59_sr(data)                             ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_60_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_60_pu(data)                             ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_60_pd(data)                             ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_60_ds(data)                             ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_0_get_gpio_60_sr(data)                             (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_1                                                 0x18000844
#define  PINMUX_GPIO_LEFT_CFG_1_reg_addr                                         "0xB8000844"
#define  PINMUX_GPIO_LEFT_CFG_1_reg                                              0xB8000844
#define  PINMUX_GPIO_LEFT_CFG_1_inst_addr                                        "0x0011"
#define  set_PINMUX_GPIO_LEFT_CFG_1_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_1_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_1_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_1_reg))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_ps_shift                                 (28)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_pu_shift                                 (27)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_pd_shift                                 (26)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_ds_shift                                 (25)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_sr_shift                                 (24)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_ps_shift                                 (20)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_pu_shift                                 (19)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_pd_shift                                 (18)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_ds_shift                                 (17)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_sr_shift                                 (16)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_ps_shift                                 (12)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_pu_shift                                 (11)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_pd_shift                                 (10)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_ds_shift                                 (9)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_sr_shift                                 (8)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_ps_shift                                 (4)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_pu_shift                                 (3)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_pd_shift                                 (2)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_ds_shift                                 (1)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_sr_shift                                 (0)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_pu_mask                                  (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_pd_mask                                  (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_ds_mask                                  (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_sr_mask                                  (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_pu_mask                                  (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_pd_mask                                  (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_ds_mask                                  (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_sr_mask                                  (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_pu_mask                                  (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_pd_mask                                  (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_ds_mask                                  (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_sr_mask                                  (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_pu_mask                                  (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_pd_mask                                  (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_ds_mask                                  (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_sr_mask                                  (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_pu(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_pd(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_ds(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_61_sr(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_pu(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_pd(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_ds(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_62_sr(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_pu(data)                                 (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_pd(data)                                 (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_ds(data)                                 (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_63_sr(data)                                 (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_pu(data)                                 (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_pd(data)                                 (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_ds(data)                                 (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_1_gpio_64_sr(data)                                 (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_61_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_61_pu(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_61_pd(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_61_ds(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_61_sr(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_62_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_62_pu(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_62_pd(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_62_ds(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_62_sr(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_63_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_63_pu(data)                             ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_63_pd(data)                             ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_63_ds(data)                             ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_63_sr(data)                             ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_64_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_64_pu(data)                             ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_64_pd(data)                             ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_64_ds(data)                             ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_1_get_gpio_64_sr(data)                             (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_2                                                 0x18000848
#define  PINMUX_GPIO_LEFT_CFG_2_reg_addr                                         "0xB8000848"
#define  PINMUX_GPIO_LEFT_CFG_2_reg                                              0xB8000848
#define  PINMUX_GPIO_LEFT_CFG_2_inst_addr                                        "0x0012"
#define  set_PINMUX_GPIO_LEFT_CFG_2_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_2_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_2_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_2_reg))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_ps_shift                                 (28)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_pu_shift                                 (27)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_pd_shift                                 (26)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_ds_shift                                 (25)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_sr_shift                                 (24)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_ps_shift                                 (20)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_pu_shift                                 (19)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_pd_shift                                 (18)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_ds_shift                                 (17)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_sr_shift                                 (16)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_ps_shift                                 (12)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_pu_shift                                 (11)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_pd_shift                                 (10)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_ds_shift                                 (9)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_sr_shift                                 (8)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_ps_shift                                 (4)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_pu_shift                                 (3)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_pd_shift                                 (2)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_ds_shift                                 (1)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_sr_shift                                 (0)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_pu_mask                                  (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_pd_mask                                  (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_ds_mask                                  (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_sr_mask                                  (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_pu_mask                                  (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_pd_mask                                  (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_ds_mask                                  (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_sr_mask                                  (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_pu_mask                                  (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_pd_mask                                  (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_ds_mask                                  (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_sr_mask                                  (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_pu_mask                                  (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_pd_mask                                  (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_ds_mask                                  (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_sr_mask                                  (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_pu(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_pd(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_ds(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_65_sr(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_pu(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_pd(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_ds(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_66_sr(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_pu(data)                                 (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_pd(data)                                 (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_ds(data)                                 (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_67_sr(data)                                 (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_pu(data)                                 (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_pd(data)                                 (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_ds(data)                                 (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_2_gpio_68_sr(data)                                 (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_65_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_65_pu(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_65_pd(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_65_ds(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_65_sr(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_66_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_66_pu(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_66_pd(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_66_ds(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_66_sr(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_67_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_67_pu(data)                             ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_67_pd(data)                             ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_67_ds(data)                             ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_67_sr(data)                             ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_68_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_68_pu(data)                             ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_68_pd(data)                             ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_68_ds(data)                             ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_2_get_gpio_68_sr(data)                             (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_3                                                 0x1800084C
#define  PINMUX_GPIO_LEFT_CFG_3_reg_addr                                         "0xB800084C"
#define  PINMUX_GPIO_LEFT_CFG_3_reg                                              0xB800084C
#define  PINMUX_GPIO_LEFT_CFG_3_inst_addr                                        "0x0013"
#define  set_PINMUX_GPIO_LEFT_CFG_3_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_3_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_3_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_3_reg))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_ps_shift                                 (28)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_pu_shift                                 (27)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_pd_shift                                 (26)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_ds_shift                                 (25)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_sr_shift                                 (24)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_ps_shift                                 (20)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_pu_shift                                 (19)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_pd_shift                                 (18)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_ds_shift                                 (17)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_sr_shift                                 (16)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_ps_shift                                 (12)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_pu_shift                                 (11)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_pd_shift                                 (10)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_ds_shift                                 (9)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_sr_shift                                 (8)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_ps_shift                                 (4)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_pu_shift                                 (3)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_pd_shift                                 (2)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_ds_shift                                 (1)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_sr_shift                                 (0)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_pu_mask                                  (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_pd_mask                                  (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_ds_mask                                  (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_sr_mask                                  (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_pu_mask                                  (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_pd_mask                                  (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_ds_mask                                  (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_sr_mask                                  (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_pu_mask                                  (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_pd_mask                                  (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_ds_mask                                  (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_sr_mask                                  (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_pu_mask                                  (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_pd_mask                                  (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_ds_mask                                  (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_sr_mask                                  (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_pu(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_pd(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_ds(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_69_sr(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_pu(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_pd(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_ds(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_70_sr(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_pu(data)                                 (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_pd(data)                                 (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_ds(data)                                 (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_71_sr(data)                                 (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_pu(data)                                 (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_pd(data)                                 (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_ds(data)                                 (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_3_gpio_72_sr(data)                                 (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_69_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_69_pu(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_69_pd(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_69_ds(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_69_sr(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_70_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_70_pu(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_70_pd(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_70_ds(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_70_sr(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_71_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_71_pu(data)                             ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_71_pd(data)                             ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_71_ds(data)                             ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_71_sr(data)                             ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_72_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_72_pu(data)                             ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_72_pd(data)                             ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_72_ds(data)                             ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_3_get_gpio_72_sr(data)                             (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_4                                                 0x18000850
#define  PINMUX_GPIO_LEFT_CFG_4_reg_addr                                         "0xB8000850"
#define  PINMUX_GPIO_LEFT_CFG_4_reg                                              0xB8000850
#define  PINMUX_GPIO_LEFT_CFG_4_inst_addr                                        "0x0014"
#define  set_PINMUX_GPIO_LEFT_CFG_4_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_4_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_4_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_4_reg))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_ps_shift                                 (28)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_pu_shift                                 (27)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_pd_shift                                 (26)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_ds_shift                                 (25)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_sr_shift                                 (24)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_ps_shift                                 (20)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_pu_shift                                 (19)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_pd_shift                                 (18)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_ds_shift                                 (17)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_sr_shift                                 (16)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_ps_shift                                 (12)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_pu_shift                                 (11)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_pd_shift                                 (10)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_ds_shift                                 (9)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_sr_shift                                 (8)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_ps_shift                                 (4)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_pu_shift                                 (3)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_pd_shift                                 (2)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_ds_shift                                 (1)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_sr_shift                                 (0)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_pu_mask                                  (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_pd_mask                                  (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_ds_mask                                  (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_sr_mask                                  (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_pu_mask                                  (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_pd_mask                                  (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_ds_mask                                  (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_sr_mask                                  (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_pu_mask                                  (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_pd_mask                                  (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_ds_mask                                  (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_sr_mask                                  (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_pu_mask                                  (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_pd_mask                                  (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_ds_mask                                  (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_sr_mask                                  (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_pu(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_pd(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_ds(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_73_sr(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_pu(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_pd(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_ds(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_74_sr(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_pu(data)                                 (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_pd(data)                                 (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_ds(data)                                 (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_75_sr(data)                                 (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_pu(data)                                 (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_pd(data)                                 (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_ds(data)                                 (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_4_gpio_76_sr(data)                                 (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_73_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_73_pu(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_73_pd(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_73_ds(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_73_sr(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_74_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_74_pu(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_74_pd(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_74_ds(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_74_sr(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_75_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_75_pu(data)                             ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_75_pd(data)                             ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_75_ds(data)                             ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_75_sr(data)                             ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_76_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_76_pu(data)                             ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_76_pd(data)                             ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_76_ds(data)                             ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_4_get_gpio_76_sr(data)                             (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_5                                                 0x18000854
#define  PINMUX_GPIO_LEFT_CFG_5_reg_addr                                         "0xB8000854"
#define  PINMUX_GPIO_LEFT_CFG_5_reg                                              0xB8000854
#define  PINMUX_GPIO_LEFT_CFG_5_inst_addr                                        "0x0015"
#define  set_PINMUX_GPIO_LEFT_CFG_5_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_5_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_5_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_5_reg))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_ps_shift                                 (28)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_pu_shift                                 (27)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_pd_shift                                 (26)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_ds_shift                                 (25)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_sr_shift                                 (24)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_ps_shift                                 (20)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_pu_shift                                 (19)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_pd_shift                                 (18)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_ds_shift                                 (17)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_sr_shift                                 (16)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_ps_shift                                 (12)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_pu_shift                                 (11)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_pd_shift                                 (10)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_ds_shift                                 (9)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_sr_shift                                 (8)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_ps_shift                                 (4)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_pu_shift                                 (3)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_pd_shift                                 (2)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_ds_shift                                 (1)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_sr_shift                                 (0)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_pu_mask                                  (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_pd_mask                                  (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_ds_mask                                  (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_sr_mask                                  (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_pu_mask                                  (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_pd_mask                                  (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_ds_mask                                  (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_sr_mask                                  (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_pu_mask                                  (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_pd_mask                                  (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_ds_mask                                  (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_sr_mask                                  (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_pu_mask                                  (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_pd_mask                                  (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_ds_mask                                  (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_sr_mask                                  (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_pu(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_pd(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_ds(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_77_sr(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_pu(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_pd(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_ds(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_78_sr(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_pu(data)                                 (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_pd(data)                                 (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_ds(data)                                 (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_79_sr(data)                                 (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_pu(data)                                 (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_pd(data)                                 (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_ds(data)                                 (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_5_gpio_80_sr(data)                                 (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_77_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_77_pu(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_77_pd(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_77_ds(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_77_sr(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_78_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_78_pu(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_78_pd(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_78_ds(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_78_sr(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_79_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_79_pu(data)                             ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_79_pd(data)                             ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_79_ds(data)                             ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_79_sr(data)                             ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_80_ps(data)                             ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_80_pu(data)                             ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_80_pd(data)                             ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_80_ds(data)                             ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_5_get_gpio_80_sr(data)                             (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_6                                                 0x18000858
#define  PINMUX_GPIO_LEFT_CFG_6_reg_addr                                         "0xB8000858"
#define  PINMUX_GPIO_LEFT_CFG_6_reg                                              0xB8000858
#define  PINMUX_GPIO_LEFT_CFG_6_inst_addr                                        "0x0016"
#define  set_PINMUX_GPIO_LEFT_CFG_6_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_6_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_6_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_6_reg))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_ps_shift                                 (28)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_pu_shift                                 (27)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_pd_shift                                 (26)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_ds_shift                                 (25)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_sr_shift                                 (24)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_ps_shift                                 (20)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_pu_shift                                 (19)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_pd_shift                                 (18)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_ds_shift                                 (17)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_sr_shift                                 (16)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_ps_shift                                (12)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_pu_shift                                (11)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_pd_shift                                (10)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_ds_shift                                (9)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_sr_shift                                (8)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_ps_shift                                (4)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_pu_shift                                (3)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_pd_shift                                (2)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_ds_shift                                (1)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_sr_shift                                (0)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_pu_mask                                  (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_pd_mask                                  (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_ds_mask                                  (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_sr_mask                                  (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_pu_mask                                  (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_pd_mask                                  (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_ds_mask                                  (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_sr_mask                                  (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_pu(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_pd(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_ds(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_81_sr(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_pu(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_pd(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_ds(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_82_sr(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_154_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_6_gpio_155_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_81_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_81_pu(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_81_pd(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_81_ds(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_81_sr(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_82_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_82_pu(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_82_pd(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_82_ds(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_82_sr(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_154_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_154_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_154_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_154_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_154_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_155_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_155_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_155_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_155_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_6_get_gpio_155_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_7                                                 0x1800085C
#define  PINMUX_GPIO_LEFT_CFG_7_reg_addr                                         "0xB800085C"
#define  PINMUX_GPIO_LEFT_CFG_7_reg                                              0xB800085C
#define  PINMUX_GPIO_LEFT_CFG_7_inst_addr                                        "0x0017"
#define  set_PINMUX_GPIO_LEFT_CFG_7_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_7_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_7_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_7_reg))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_ps_shift                                (28)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_pu_shift                                (27)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_pd_shift                                (26)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_ds_shift                                (25)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_sr_shift                                (24)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_ps_shift                                (20)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_pu_shift                                (19)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_pd_shift                                (18)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_ds_shift                                (17)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_sr_shift                                (16)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_ps_shift                                (12)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_pu_shift                                (11)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_pd_shift                                (10)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_ds_shift                                (9)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_sr_shift                                (8)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_ps_shift                                (4)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_pu_shift                                (3)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_pd_shift                                (2)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_ds_shift                                (1)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_sr_shift                                (0)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_156_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_157_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_158_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_LEFT_CFG_7_gpio_159_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_156_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_156_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_156_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_156_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_156_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_157_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_157_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_157_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_157_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_157_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_158_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_158_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_158_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_158_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_158_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_159_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_159_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_159_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_159_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_LEFT_CFG_7_get_gpio_159_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_LEFT_CFG_8                                                 0x18000860
#define  PINMUX_GPIO_LEFT_CFG_8_reg_addr                                         "0xB8000860"
#define  PINMUX_GPIO_LEFT_CFG_8_reg                                              0xB8000860
#define  PINMUX_GPIO_LEFT_CFG_8_inst_addr                                        "0x0018"
#define  set_PINMUX_GPIO_LEFT_CFG_8_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_8_reg)=data)
#define  get_PINMUX_GPIO_LEFT_CFG_8_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_LEFT_CFG_8_reg))
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_ps_shift                                (28)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_pu_shift                                (27)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_pd_shift                                (26)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_ds_shift                                (25)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_sr_shift                                (24)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_LEFT_CFG_8_gpio_160_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_LEFT_CFG_8_get_gpio_160_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_LEFT_CFG_8_get_gpio_160_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_LEFT_CFG_8_get_gpio_160_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_LEFT_CFG_8_get_gpio_160_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_LEFT_CFG_8_get_gpio_160_sr(data)                            ((0x01000000&(data))>>24)

#define  PINMUX_LEFT_SMT_0                                                      0x18000864
#define  PINMUX_LEFT_SMT_0_reg_addr                                              "0xB8000864"
#define  PINMUX_LEFT_SMT_0_reg                                                   0xB8000864
#define  PINMUX_LEFT_SMT_0_inst_addr                                             "0x0019"
#define  set_PINMUX_LEFT_SMT_0_reg(data)                                         (*((volatile unsigned int*)PINMUX_LEFT_SMT_0_reg)=data)
#define  get_PINMUX_LEFT_SMT_0_reg                                               (*((volatile unsigned int*)PINMUX_LEFT_SMT_0_reg))
#define  PINMUX_LEFT_SMT_0_gpio_57_smt_shift                                     (31)
#define  PINMUX_LEFT_SMT_0_gpio_58_smt_shift                                     (30)
#define  PINMUX_LEFT_SMT_0_gpio_59_smt_shift                                     (29)
#define  PINMUX_LEFT_SMT_0_gpio_60_smt_shift                                     (28)
#define  PINMUX_LEFT_SMT_0_gpio_61_smt_shift                                     (27)
#define  PINMUX_LEFT_SMT_0_gpio_62_smt_shift                                     (26)
#define  PINMUX_LEFT_SMT_0_gpio_63_smt_shift                                     (25)
#define  PINMUX_LEFT_SMT_0_gpio_64_smt_shift                                     (24)
#define  PINMUX_LEFT_SMT_0_gpio_65_smt_shift                                     (23)
#define  PINMUX_LEFT_SMT_0_gpio_66_smt_shift                                     (22)
#define  PINMUX_LEFT_SMT_0_gpio_67_smt_shift                                     (21)
#define  PINMUX_LEFT_SMT_0_gpio_68_smt_shift                                     (20)
#define  PINMUX_LEFT_SMT_0_gpio_69_smt_shift                                     (19)
#define  PINMUX_LEFT_SMT_0_gpio_70_smt_shift                                     (18)
#define  PINMUX_LEFT_SMT_0_gpio_71_smt_shift                                     (17)
#define  PINMUX_LEFT_SMT_0_gpio_72_smt_shift                                     (16)
#define  PINMUX_LEFT_SMT_0_gpio_73_smt_shift                                     (15)
#define  PINMUX_LEFT_SMT_0_gpio_74_smt_shift                                     (14)
#define  PINMUX_LEFT_SMT_0_gpio_75_smt_shift                                     (13)
#define  PINMUX_LEFT_SMT_0_gpio_76_smt_shift                                     (12)
#define  PINMUX_LEFT_SMT_0_gpio_77_smt_shift                                     (11)
#define  PINMUX_LEFT_SMT_0_gpio_78_smt_shift                                     (10)
#define  PINMUX_LEFT_SMT_0_gpio_79_smt_shift                                     (9)
#define  PINMUX_LEFT_SMT_0_gpio_80_smt_shift                                     (8)
#define  PINMUX_LEFT_SMT_0_gpio_81_smt_shift                                     (7)
#define  PINMUX_LEFT_SMT_0_gpio_82_smt_shift                                     (6)
#define  PINMUX_LEFT_SMT_0_gpio_154_smt_shift                                    (5)
#define  PINMUX_LEFT_SMT_0_gpio_155_smt_shift                                    (4)
#define  PINMUX_LEFT_SMT_0_gpio_156_smt_shift                                    (3)
#define  PINMUX_LEFT_SMT_0_gpio_157_smt_shift                                    (2)
#define  PINMUX_LEFT_SMT_0_gpio_158_smt_shift                                    (1)
#define  PINMUX_LEFT_SMT_0_gpio_159_smt_shift                                    (0)
#define  PINMUX_LEFT_SMT_0_gpio_57_smt_mask                                      (0x80000000)
#define  PINMUX_LEFT_SMT_0_gpio_58_smt_mask                                      (0x40000000)
#define  PINMUX_LEFT_SMT_0_gpio_59_smt_mask                                      (0x20000000)
#define  PINMUX_LEFT_SMT_0_gpio_60_smt_mask                                      (0x10000000)
#define  PINMUX_LEFT_SMT_0_gpio_61_smt_mask                                      (0x08000000)
#define  PINMUX_LEFT_SMT_0_gpio_62_smt_mask                                      (0x04000000)
#define  PINMUX_LEFT_SMT_0_gpio_63_smt_mask                                      (0x02000000)
#define  PINMUX_LEFT_SMT_0_gpio_64_smt_mask                                      (0x01000000)
#define  PINMUX_LEFT_SMT_0_gpio_65_smt_mask                                      (0x00800000)
#define  PINMUX_LEFT_SMT_0_gpio_66_smt_mask                                      (0x00400000)
#define  PINMUX_LEFT_SMT_0_gpio_67_smt_mask                                      (0x00200000)
#define  PINMUX_LEFT_SMT_0_gpio_68_smt_mask                                      (0x00100000)
#define  PINMUX_LEFT_SMT_0_gpio_69_smt_mask                                      (0x00080000)
#define  PINMUX_LEFT_SMT_0_gpio_70_smt_mask                                      (0x00040000)
#define  PINMUX_LEFT_SMT_0_gpio_71_smt_mask                                      (0x00020000)
#define  PINMUX_LEFT_SMT_0_gpio_72_smt_mask                                      (0x00010000)
#define  PINMUX_LEFT_SMT_0_gpio_73_smt_mask                                      (0x00008000)
#define  PINMUX_LEFT_SMT_0_gpio_74_smt_mask                                      (0x00004000)
#define  PINMUX_LEFT_SMT_0_gpio_75_smt_mask                                      (0x00002000)
#define  PINMUX_LEFT_SMT_0_gpio_76_smt_mask                                      (0x00001000)
#define  PINMUX_LEFT_SMT_0_gpio_77_smt_mask                                      (0x00000800)
#define  PINMUX_LEFT_SMT_0_gpio_78_smt_mask                                      (0x00000400)
#define  PINMUX_LEFT_SMT_0_gpio_79_smt_mask                                      (0x00000200)
#define  PINMUX_LEFT_SMT_0_gpio_80_smt_mask                                      (0x00000100)
#define  PINMUX_LEFT_SMT_0_gpio_81_smt_mask                                      (0x00000080)
#define  PINMUX_LEFT_SMT_0_gpio_82_smt_mask                                      (0x00000040)
#define  PINMUX_LEFT_SMT_0_gpio_154_smt_mask                                     (0x00000020)
#define  PINMUX_LEFT_SMT_0_gpio_155_smt_mask                                     (0x00000010)
#define  PINMUX_LEFT_SMT_0_gpio_156_smt_mask                                     (0x00000008)
#define  PINMUX_LEFT_SMT_0_gpio_157_smt_mask                                     (0x00000004)
#define  PINMUX_LEFT_SMT_0_gpio_158_smt_mask                                     (0x00000002)
#define  PINMUX_LEFT_SMT_0_gpio_159_smt_mask                                     (0x00000001)
#define  PINMUX_LEFT_SMT_0_gpio_57_smt(data)                                     (0x80000000&((data)<<31))
#define  PINMUX_LEFT_SMT_0_gpio_58_smt(data)                                     (0x40000000&((data)<<30))
#define  PINMUX_LEFT_SMT_0_gpio_59_smt(data)                                     (0x20000000&((data)<<29))
#define  PINMUX_LEFT_SMT_0_gpio_60_smt(data)                                     (0x10000000&((data)<<28))
#define  PINMUX_LEFT_SMT_0_gpio_61_smt(data)                                     (0x08000000&((data)<<27))
#define  PINMUX_LEFT_SMT_0_gpio_62_smt(data)                                     (0x04000000&((data)<<26))
#define  PINMUX_LEFT_SMT_0_gpio_63_smt(data)                                     (0x02000000&((data)<<25))
#define  PINMUX_LEFT_SMT_0_gpio_64_smt(data)                                     (0x01000000&((data)<<24))
#define  PINMUX_LEFT_SMT_0_gpio_65_smt(data)                                     (0x00800000&((data)<<23))
#define  PINMUX_LEFT_SMT_0_gpio_66_smt(data)                                     (0x00400000&((data)<<22))
#define  PINMUX_LEFT_SMT_0_gpio_67_smt(data)                                     (0x00200000&((data)<<21))
#define  PINMUX_LEFT_SMT_0_gpio_68_smt(data)                                     (0x00100000&((data)<<20))
#define  PINMUX_LEFT_SMT_0_gpio_69_smt(data)                                     (0x00080000&((data)<<19))
#define  PINMUX_LEFT_SMT_0_gpio_70_smt(data)                                     (0x00040000&((data)<<18))
#define  PINMUX_LEFT_SMT_0_gpio_71_smt(data)                                     (0x00020000&((data)<<17))
#define  PINMUX_LEFT_SMT_0_gpio_72_smt(data)                                     (0x00010000&((data)<<16))
#define  PINMUX_LEFT_SMT_0_gpio_73_smt(data)                                     (0x00008000&((data)<<15))
#define  PINMUX_LEFT_SMT_0_gpio_74_smt(data)                                     (0x00004000&((data)<<14))
#define  PINMUX_LEFT_SMT_0_gpio_75_smt(data)                                     (0x00002000&((data)<<13))
#define  PINMUX_LEFT_SMT_0_gpio_76_smt(data)                                     (0x00001000&((data)<<12))
#define  PINMUX_LEFT_SMT_0_gpio_77_smt(data)                                     (0x00000800&((data)<<11))
#define  PINMUX_LEFT_SMT_0_gpio_78_smt(data)                                     (0x00000400&((data)<<10))
#define  PINMUX_LEFT_SMT_0_gpio_79_smt(data)                                     (0x00000200&((data)<<9))
#define  PINMUX_LEFT_SMT_0_gpio_80_smt(data)                                     (0x00000100&((data)<<8))
#define  PINMUX_LEFT_SMT_0_gpio_81_smt(data)                                     (0x00000080&((data)<<7))
#define  PINMUX_LEFT_SMT_0_gpio_82_smt(data)                                     (0x00000040&((data)<<6))
#define  PINMUX_LEFT_SMT_0_gpio_154_smt(data)                                    (0x00000020&((data)<<5))
#define  PINMUX_LEFT_SMT_0_gpio_155_smt(data)                                    (0x00000010&((data)<<4))
#define  PINMUX_LEFT_SMT_0_gpio_156_smt(data)                                    (0x00000008&((data)<<3))
#define  PINMUX_LEFT_SMT_0_gpio_157_smt(data)                                    (0x00000004&((data)<<2))
#define  PINMUX_LEFT_SMT_0_gpio_158_smt(data)                                    (0x00000002&((data)<<1))
#define  PINMUX_LEFT_SMT_0_gpio_159_smt(data)                                    (0x00000001&(data))
#define  PINMUX_LEFT_SMT_0_get_gpio_57_smt(data)                                 ((0x80000000&(data))>>31)
#define  PINMUX_LEFT_SMT_0_get_gpio_58_smt(data)                                 ((0x40000000&(data))>>30)
#define  PINMUX_LEFT_SMT_0_get_gpio_59_smt(data)                                 ((0x20000000&(data))>>29)
#define  PINMUX_LEFT_SMT_0_get_gpio_60_smt(data)                                 ((0x10000000&(data))>>28)
#define  PINMUX_LEFT_SMT_0_get_gpio_61_smt(data)                                 ((0x08000000&(data))>>27)
#define  PINMUX_LEFT_SMT_0_get_gpio_62_smt(data)                                 ((0x04000000&(data))>>26)
#define  PINMUX_LEFT_SMT_0_get_gpio_63_smt(data)                                 ((0x02000000&(data))>>25)
#define  PINMUX_LEFT_SMT_0_get_gpio_64_smt(data)                                 ((0x01000000&(data))>>24)
#define  PINMUX_LEFT_SMT_0_get_gpio_65_smt(data)                                 ((0x00800000&(data))>>23)
#define  PINMUX_LEFT_SMT_0_get_gpio_66_smt(data)                                 ((0x00400000&(data))>>22)
#define  PINMUX_LEFT_SMT_0_get_gpio_67_smt(data)                                 ((0x00200000&(data))>>21)
#define  PINMUX_LEFT_SMT_0_get_gpio_68_smt(data)                                 ((0x00100000&(data))>>20)
#define  PINMUX_LEFT_SMT_0_get_gpio_69_smt(data)                                 ((0x00080000&(data))>>19)
#define  PINMUX_LEFT_SMT_0_get_gpio_70_smt(data)                                 ((0x00040000&(data))>>18)
#define  PINMUX_LEFT_SMT_0_get_gpio_71_smt(data)                                 ((0x00020000&(data))>>17)
#define  PINMUX_LEFT_SMT_0_get_gpio_72_smt(data)                                 ((0x00010000&(data))>>16)
#define  PINMUX_LEFT_SMT_0_get_gpio_73_smt(data)                                 ((0x00008000&(data))>>15)
#define  PINMUX_LEFT_SMT_0_get_gpio_74_smt(data)                                 ((0x00004000&(data))>>14)
#define  PINMUX_LEFT_SMT_0_get_gpio_75_smt(data)                                 ((0x00002000&(data))>>13)
#define  PINMUX_LEFT_SMT_0_get_gpio_76_smt(data)                                 ((0x00001000&(data))>>12)
#define  PINMUX_LEFT_SMT_0_get_gpio_77_smt(data)                                 ((0x00000800&(data))>>11)
#define  PINMUX_LEFT_SMT_0_get_gpio_78_smt(data)                                 ((0x00000400&(data))>>10)
#define  PINMUX_LEFT_SMT_0_get_gpio_79_smt(data)                                 ((0x00000200&(data))>>9)
#define  PINMUX_LEFT_SMT_0_get_gpio_80_smt(data)                                 ((0x00000100&(data))>>8)
#define  PINMUX_LEFT_SMT_0_get_gpio_81_smt(data)                                 ((0x00000080&(data))>>7)
#define  PINMUX_LEFT_SMT_0_get_gpio_82_smt(data)                                 ((0x00000040&(data))>>6)
#define  PINMUX_LEFT_SMT_0_get_gpio_154_smt(data)                                ((0x00000020&(data))>>5)
#define  PINMUX_LEFT_SMT_0_get_gpio_155_smt(data)                                ((0x00000010&(data))>>4)
#define  PINMUX_LEFT_SMT_0_get_gpio_156_smt(data)                                ((0x00000008&(data))>>3)
#define  PINMUX_LEFT_SMT_0_get_gpio_157_smt(data)                                ((0x00000004&(data))>>2)
#define  PINMUX_LEFT_SMT_0_get_gpio_158_smt(data)                                ((0x00000002&(data))>>1)
#define  PINMUX_LEFT_SMT_0_get_gpio_159_smt(data)                                (0x00000001&(data))

#define  PINMUX_LEFT_SMT_1                                                      0x18000868
#define  PINMUX_LEFT_SMT_1_reg_addr                                              "0xB8000868"
#define  PINMUX_LEFT_SMT_1_reg                                                   0xB8000868
#define  PINMUX_LEFT_SMT_1_inst_addr                                             "0x001A"
#define  set_PINMUX_LEFT_SMT_1_reg(data)                                         (*((volatile unsigned int*)PINMUX_LEFT_SMT_1_reg)=data)
#define  get_PINMUX_LEFT_SMT_1_reg                                               (*((volatile unsigned int*)PINMUX_LEFT_SMT_1_reg))
#define  PINMUX_LEFT_SMT_1_gpio_160_smt_shift                                    (31)
#define  PINMUX_LEFT_SMT_1_gpio_17_ds2_shift                                     (30)
#define  PINMUX_LEFT_SMT_1_gpio_62_smt2_shift                                    (29)
#define  PINMUX_LEFT_SMT_1_gpio_63_smt2_shift                                    (28)
#define  PINMUX_LEFT_SMT_1_gpio_64_smt2_shift                                    (27)
#define  PINMUX_LEFT_SMT_1_gpio_65_smt2_shift                                    (26)
#define  PINMUX_LEFT_SMT_1_gpio_66_smt2_shift                                    (25)
#define  PINMUX_LEFT_SMT_1_gpio_67_smt2_shift                                    (24)
#define  PINMUX_LEFT_SMT_1_gpio_68_smt2_shift                                    (23)
#define  PINMUX_LEFT_SMT_1_gpio_69_smt2_shift                                    (22)
#define  PINMUX_LEFT_SMT_1_gpio_70_smt2_shift                                    (21)
#define  PINMUX_LEFT_SMT_1_gpio_71_smt2_shift                                    (20)
#define  PINMUX_LEFT_SMT_1_gpio_72_smt2_shift                                    (19)
#define  PINMUX_LEFT_SMT_1_gpio_74_smt2_shift                                    (18)
#define  PINMUX_LEFT_SMT_1_gpio_75_smt2_shift                                    (17)
#define  PINMUX_LEFT_SMT_1_gpio_76_smt2_shift                                    (16)
#define  PINMUX_LEFT_SMT_1_gpio_77_smt2_shift                                    (15)
#define  PINMUX_LEFT_SMT_1_gpio_154_smt2_shift                                   (14)
#define  PINMUX_LEFT_SMT_1_gpio_155_smt2_shift                                   (13)
#define  PINMUX_LEFT_SMT_1_gpio_156_smt2_shift                                   (12)
#define  PINMUX_LEFT_SMT_1_gpio_157_smt2_shift                                   (11)
#define  PINMUX_LEFT_SMT_1_gpio_158_smt2_shift                                   (10)
#define  PINMUX_LEFT_SMT_1_gpio_159_smt2_shift                                   (9)
#define  PINMUX_LEFT_SMT_1_gpio_160_smt2_shift                                   (8)
#define  PINMUX_LEFT_SMT_1_gpio_160_smt_mask                                     (0x80000000)
#define  PINMUX_LEFT_SMT_1_gpio_17_ds2_mask                                      (0x40000000)
#define  PINMUX_LEFT_SMT_1_gpio_62_smt2_mask                                     (0x20000000)
#define  PINMUX_LEFT_SMT_1_gpio_63_smt2_mask                                     (0x10000000)
#define  PINMUX_LEFT_SMT_1_gpio_64_smt2_mask                                     (0x08000000)
#define  PINMUX_LEFT_SMT_1_gpio_65_smt2_mask                                     (0x04000000)
#define  PINMUX_LEFT_SMT_1_gpio_66_smt2_mask                                     (0x02000000)
#define  PINMUX_LEFT_SMT_1_gpio_67_smt2_mask                                     (0x01000000)
#define  PINMUX_LEFT_SMT_1_gpio_68_smt2_mask                                     (0x00800000)
#define  PINMUX_LEFT_SMT_1_gpio_69_smt2_mask                                     (0x00400000)
#define  PINMUX_LEFT_SMT_1_gpio_70_smt2_mask                                     (0x00200000)
#define  PINMUX_LEFT_SMT_1_gpio_71_smt2_mask                                     (0x00100000)
#define  PINMUX_LEFT_SMT_1_gpio_72_smt2_mask                                     (0x00080000)
#define  PINMUX_LEFT_SMT_1_gpio_74_smt2_mask                                     (0x00040000)
#define  PINMUX_LEFT_SMT_1_gpio_75_smt2_mask                                     (0x00020000)
#define  PINMUX_LEFT_SMT_1_gpio_76_smt2_mask                                     (0x00010000)
#define  PINMUX_LEFT_SMT_1_gpio_77_smt2_mask                                     (0x00008000)
#define  PINMUX_LEFT_SMT_1_gpio_154_smt2_mask                                    (0x00004000)
#define  PINMUX_LEFT_SMT_1_gpio_155_smt2_mask                                    (0x00002000)
#define  PINMUX_LEFT_SMT_1_gpio_156_smt2_mask                                    (0x00001000)
#define  PINMUX_LEFT_SMT_1_gpio_157_smt2_mask                                    (0x00000800)
#define  PINMUX_LEFT_SMT_1_gpio_158_smt2_mask                                    (0x00000400)
#define  PINMUX_LEFT_SMT_1_gpio_159_smt2_mask                                    (0x00000200)
#define  PINMUX_LEFT_SMT_1_gpio_160_smt2_mask                                    (0x00000100)
#define  PINMUX_LEFT_SMT_1_gpio_160_smt(data)                                    (0x80000000&((data)<<31))
#define  PINMUX_LEFT_SMT_1_gpio_17_ds2(data)                                     (0x40000000&((data)<<30))
#define  PINMUX_LEFT_SMT_1_gpio_62_smt2(data)                                    (0x20000000&((data)<<29))
#define  PINMUX_LEFT_SMT_1_gpio_63_smt2(data)                                    (0x10000000&((data)<<28))
#define  PINMUX_LEFT_SMT_1_gpio_64_smt2(data)                                    (0x08000000&((data)<<27))
#define  PINMUX_LEFT_SMT_1_gpio_65_smt2(data)                                    (0x04000000&((data)<<26))
#define  PINMUX_LEFT_SMT_1_gpio_66_smt2(data)                                    (0x02000000&((data)<<25))
#define  PINMUX_LEFT_SMT_1_gpio_67_smt2(data)                                    (0x01000000&((data)<<24))
#define  PINMUX_LEFT_SMT_1_gpio_68_smt2(data)                                    (0x00800000&((data)<<23))
#define  PINMUX_LEFT_SMT_1_gpio_69_smt2(data)                                    (0x00400000&((data)<<22))
#define  PINMUX_LEFT_SMT_1_gpio_70_smt2(data)                                    (0x00200000&((data)<<21))
#define  PINMUX_LEFT_SMT_1_gpio_71_smt2(data)                                    (0x00100000&((data)<<20))
#define  PINMUX_LEFT_SMT_1_gpio_72_smt2(data)                                    (0x00080000&((data)<<19))
#define  PINMUX_LEFT_SMT_1_gpio_74_smt2(data)                                    (0x00040000&((data)<<18))
#define  PINMUX_LEFT_SMT_1_gpio_75_smt2(data)                                    (0x00020000&((data)<<17))
#define  PINMUX_LEFT_SMT_1_gpio_76_smt2(data)                                    (0x00010000&((data)<<16))
#define  PINMUX_LEFT_SMT_1_gpio_77_smt2(data)                                    (0x00008000&((data)<<15))
#define  PINMUX_LEFT_SMT_1_gpio_154_smt2(data)                                   (0x00004000&((data)<<14))
#define  PINMUX_LEFT_SMT_1_gpio_155_smt2(data)                                   (0x00002000&((data)<<13))
#define  PINMUX_LEFT_SMT_1_gpio_156_smt2(data)                                   (0x00001000&((data)<<12))
#define  PINMUX_LEFT_SMT_1_gpio_157_smt2(data)                                   (0x00000800&((data)<<11))
#define  PINMUX_LEFT_SMT_1_gpio_158_smt2(data)                                   (0x00000400&((data)<<10))
#define  PINMUX_LEFT_SMT_1_gpio_159_smt2(data)                                   (0x00000200&((data)<<9))
#define  PINMUX_LEFT_SMT_1_gpio_160_smt2(data)                                   (0x00000100&((data)<<8))
#define  PINMUX_LEFT_SMT_1_get_gpio_160_smt(data)                                ((0x80000000&(data))>>31)
#define  PINMUX_LEFT_SMT_1_get_gpio_17_ds2(data)                                 ((0x40000000&(data))>>30)
#define  PINMUX_LEFT_SMT_1_get_gpio_62_smt2(data)                                ((0x20000000&(data))>>29)
#define  PINMUX_LEFT_SMT_1_get_gpio_63_smt2(data)                                ((0x10000000&(data))>>28)
#define  PINMUX_LEFT_SMT_1_get_gpio_64_smt2(data)                                ((0x08000000&(data))>>27)
#define  PINMUX_LEFT_SMT_1_get_gpio_65_smt2(data)                                ((0x04000000&(data))>>26)
#define  PINMUX_LEFT_SMT_1_get_gpio_66_smt2(data)                                ((0x02000000&(data))>>25)
#define  PINMUX_LEFT_SMT_1_get_gpio_67_smt2(data)                                ((0x01000000&(data))>>24)
#define  PINMUX_LEFT_SMT_1_get_gpio_68_smt2(data)                                ((0x00800000&(data))>>23)
#define  PINMUX_LEFT_SMT_1_get_gpio_69_smt2(data)                                ((0x00400000&(data))>>22)
#define  PINMUX_LEFT_SMT_1_get_gpio_70_smt2(data)                                ((0x00200000&(data))>>21)
#define  PINMUX_LEFT_SMT_1_get_gpio_71_smt2(data)                                ((0x00100000&(data))>>20)
#define  PINMUX_LEFT_SMT_1_get_gpio_72_smt2(data)                                ((0x00080000&(data))>>19)
#define  PINMUX_LEFT_SMT_1_get_gpio_74_smt2(data)                                ((0x00040000&(data))>>18)
#define  PINMUX_LEFT_SMT_1_get_gpio_75_smt2(data)                                ((0x00020000&(data))>>17)
#define  PINMUX_LEFT_SMT_1_get_gpio_76_smt2(data)                                ((0x00010000&(data))>>16)
#define  PINMUX_LEFT_SMT_1_get_gpio_77_smt2(data)                                ((0x00008000&(data))>>15)
#define  PINMUX_LEFT_SMT_1_get_gpio_154_smt2(data)                               ((0x00004000&(data))>>14)
#define  PINMUX_LEFT_SMT_1_get_gpio_155_smt2(data)                               ((0x00002000&(data))>>13)
#define  PINMUX_LEFT_SMT_1_get_gpio_156_smt2(data)                               ((0x00001000&(data))>>12)
#define  PINMUX_LEFT_SMT_1_get_gpio_157_smt2(data)                               ((0x00000800&(data))>>11)
#define  PINMUX_LEFT_SMT_1_get_gpio_158_smt2(data)                               ((0x00000400&(data))>>10)
#define  PINMUX_LEFT_SMT_1_get_gpio_159_smt2(data)                               ((0x00000200&(data))>>9)
#define  PINMUX_LEFT_SMT_1_get_gpio_160_smt2(data)                               ((0x00000100&(data))>>8)

#define  PINMUX_Pin_Mux_Ctrl0                                                   0x180008F0
#define  PINMUX_Pin_Mux_Ctrl0_reg_addr                                           "0xB80008F0"
#define  PINMUX_Pin_Mux_Ctrl0_reg                                                0xB80008F0
#define  PINMUX_Pin_Mux_Ctrl0_inst_addr                                          "0x001B"
#define  set_PINMUX_Pin_Mux_Ctrl0_reg(data)                                      (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl0_reg)=data)
#define  get_PINMUX_Pin_Mux_Ctrl0_reg                                            (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl0_reg))
#define  PINMUX_Pin_Mux_Ctrl0_demod_dsc_22_in_sel_shift                          (24)
#define  PINMUX_Pin_Mux_Ctrl0_demod_dsc_in_sel_shift                             (20)
#define  PINMUX_Pin_Mux_Ctrl0_i2c2_scl_in_sel_shift                              (12)
#define  PINMUX_Pin_Mux_Ctrl0_i2c2_sda_in_sel_shift                              (8)
#define  PINMUX_Pin_Mux_Ctrl0_i2c3_scl_in_sel_shift                              (4)
#define  PINMUX_Pin_Mux_Ctrl0_i2c3_sda_in_sel_shift                              (0)
#define  PINMUX_Pin_Mux_Ctrl0_demod_dsc_22_in_sel_mask                           (0x03000000)
#define  PINMUX_Pin_Mux_Ctrl0_demod_dsc_in_sel_mask                              (0x00300000)
#define  PINMUX_Pin_Mux_Ctrl0_i2c2_scl_in_sel_mask                               (0x00003000)
#define  PINMUX_Pin_Mux_Ctrl0_i2c2_sda_in_sel_mask                               (0x00000300)
#define  PINMUX_Pin_Mux_Ctrl0_i2c3_scl_in_sel_mask                               (0x00000030)
#define  PINMUX_Pin_Mux_Ctrl0_i2c3_sda_in_sel_mask                               (0x00000003)
#define  PINMUX_Pin_Mux_Ctrl0_demod_dsc_22_in_sel(data)                          (0x03000000&((data)<<24))
#define  PINMUX_Pin_Mux_Ctrl0_demod_dsc_in_sel(data)                             (0x00300000&((data)<<20))
#define  PINMUX_Pin_Mux_Ctrl0_i2c2_scl_in_sel(data)                              (0x00003000&((data)<<12))
#define  PINMUX_Pin_Mux_Ctrl0_i2c2_sda_in_sel(data)                              (0x00000300&((data)<<8))
#define  PINMUX_Pin_Mux_Ctrl0_i2c3_scl_in_sel(data)                              (0x00000030&((data)<<4))
#define  PINMUX_Pin_Mux_Ctrl0_i2c3_sda_in_sel(data)                              (0x00000003&(data))
#define  PINMUX_Pin_Mux_Ctrl0_get_demod_dsc_22_in_sel(data)                      ((0x03000000&(data))>>24)
#define  PINMUX_Pin_Mux_Ctrl0_get_demod_dsc_in_sel(data)                         ((0x00300000&(data))>>20)
#define  PINMUX_Pin_Mux_Ctrl0_get_i2c2_scl_in_sel(data)                          ((0x00003000&(data))>>12)
#define  PINMUX_Pin_Mux_Ctrl0_get_i2c2_sda_in_sel(data)                          ((0x00000300&(data))>>8)
#define  PINMUX_Pin_Mux_Ctrl0_get_i2c3_scl_in_sel(data)                          ((0x00000030&(data))>>4)
#define  PINMUX_Pin_Mux_Ctrl0_get_i2c3_sda_in_sel(data)                          (0x00000003&(data))

#define  PINMUX_Pin_Mux_Ctrl1                                                   0x180008F4
#define  PINMUX_Pin_Mux_Ctrl1_reg_addr                                           "0xB80008F4"
#define  PINMUX_Pin_Mux_Ctrl1_reg                                                0xB80008F4
#define  PINMUX_Pin_Mux_Ctrl1_inst_addr                                          "0x001C"
#define  set_PINMUX_Pin_Mux_Ctrl1_reg(data)                                      (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl1_reg)=data)
#define  get_PINMUX_Pin_Mux_Ctrl1_reg                                            (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl1_reg))
#define  PINMUX_Pin_Mux_Ctrl1_i2c4_scl_in_sel_shift                              (28)
#define  PINMUX_Pin_Mux_Ctrl1_i2c4_sda_in_sel_shift                              (24)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data0_sel_shift                             (20)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data1_sel_shift                             (16)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data2_sel_shift                             (12)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data3_sel_shift                             (8)
#define  PINMUX_Pin_Mux_Ctrl1_ld_spi0_p2_sck_in_sel_shift                        (0)
#define  PINMUX_Pin_Mux_Ctrl1_i2c4_scl_in_sel_mask                               (0x30000000)
#define  PINMUX_Pin_Mux_Ctrl1_i2c4_sda_in_sel_mask                               (0x03000000)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data0_sel_mask                              (0x00700000)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data1_sel_mask                              (0x00070000)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data2_sel_mask                              (0x00003000)
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data3_sel_mask                              (0x00000300)
#define  PINMUX_Pin_Mux_Ctrl1_ld_spi0_p2_sck_in_sel_mask                         (0x00000007)
#define  PINMUX_Pin_Mux_Ctrl1_i2c4_scl_in_sel(data)                              (0x30000000&((data)<<28))
#define  PINMUX_Pin_Mux_Ctrl1_i2c4_sda_in_sel(data)                              (0x03000000&((data)<<24))
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data0_sel(data)                             (0x00700000&((data)<<20))
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data1_sel(data)                             (0x00070000&((data)<<16))
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data2_sel(data)                             (0x00003000&((data)<<12))
#define  PINMUX_Pin_Mux_Ctrl1_i2s_in_data3_sel(data)                             (0x00000300&((data)<<8))
#define  PINMUX_Pin_Mux_Ctrl1_ld_spi0_p2_sck_in_sel(data)                        (0x00000007&(data))
#define  PINMUX_Pin_Mux_Ctrl1_get_i2c4_scl_in_sel(data)                          ((0x30000000&(data))>>28)
#define  PINMUX_Pin_Mux_Ctrl1_get_i2c4_sda_in_sel(data)                          ((0x03000000&(data))>>24)
#define  PINMUX_Pin_Mux_Ctrl1_get_i2s_in_data0_sel(data)                         ((0x00700000&(data))>>20)
#define  PINMUX_Pin_Mux_Ctrl1_get_i2s_in_data1_sel(data)                         ((0x00070000&(data))>>16)
#define  PINMUX_Pin_Mux_Ctrl1_get_i2s_in_data2_sel(data)                         ((0x00003000&(data))>>12)
#define  PINMUX_Pin_Mux_Ctrl1_get_i2s_in_data3_sel(data)                         ((0x00000300&(data))>>8)
#define  PINMUX_Pin_Mux_Ctrl1_get_ld_spi0_p2_sck_in_sel(data)                    (0x00000007&(data))

#define  PINMUX_Pin_Mux_Ctrl2                                                   0x180008F8
#define  PINMUX_Pin_Mux_Ctrl2_reg_addr                                           "0xB80008F8"
#define  PINMUX_Pin_Mux_Ctrl2_reg                                                0xB80008F8
#define  PINMUX_Pin_Mux_Ctrl2_inst_addr                                          "0x001D"
#define  set_PINMUX_Pin_Mux_Ctrl2_reg(data)                                      (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl2_reg)=data)
#define  get_PINMUX_Pin_Mux_Ctrl2_reg                                            (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl2_reg))
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi0_p3_sdo_in_sel_shift                        (28)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi0_p4_sdi_sel_shift                           (24)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p2_sck_in_sel_shift                        (20)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p3_sdo_in_sel_shift                        (16)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p4_sdi_sel_shift                           (12)
#define  PINMUX_Pin_Mux_Ctrl2_sc_cd_sel_shift                                    (8)
#define  PINMUX_Pin_Mux_Ctrl2_sc_data_in_sel_shift                               (4)
#define  PINMUX_Pin_Mux_Ctrl2_spi_fcic_sel_shift                                 (0)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi0_p3_sdo_in_sel_mask                         (0x70000000)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi0_p4_sdi_sel_mask                            (0x07000000)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p2_sck_in_sel_mask                         (0x00700000)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p3_sdo_in_sel_mask                         (0x00070000)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p4_sdi_sel_mask                            (0x00007000)
#define  PINMUX_Pin_Mux_Ctrl2_sc_cd_sel_mask                                     (0x00000300)
#define  PINMUX_Pin_Mux_Ctrl2_sc_data_in_sel_mask                                (0x00000030)
#define  PINMUX_Pin_Mux_Ctrl2_spi_fcic_sel_mask                                  (0x00000003)
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi0_p3_sdo_in_sel(data)                        (0x70000000&((data)<<28))
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi0_p4_sdi_sel(data)                           (0x07000000&((data)<<24))
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p2_sck_in_sel(data)                        (0x00700000&((data)<<20))
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p3_sdo_in_sel(data)                        (0x00070000&((data)<<16))
#define  PINMUX_Pin_Mux_Ctrl2_ld_spi1_p4_sdi_sel(data)                           (0x00007000&((data)<<12))
#define  PINMUX_Pin_Mux_Ctrl2_sc_cd_sel(data)                                    (0x00000300&((data)<<8))
#define  PINMUX_Pin_Mux_Ctrl2_sc_data_in_sel(data)                               (0x00000030&((data)<<4))
#define  PINMUX_Pin_Mux_Ctrl2_spi_fcic_sel(data)                                 (0x00000003&(data))
#define  PINMUX_Pin_Mux_Ctrl2_get_ld_spi0_p3_sdo_in_sel(data)                    ((0x70000000&(data))>>28)
#define  PINMUX_Pin_Mux_Ctrl2_get_ld_spi0_p4_sdi_sel(data)                       ((0x07000000&(data))>>24)
#define  PINMUX_Pin_Mux_Ctrl2_get_ld_spi1_p2_sck_in_sel(data)                    ((0x00700000&(data))>>20)
#define  PINMUX_Pin_Mux_Ctrl2_get_ld_spi1_p3_sdo_in_sel(data)                    ((0x00070000&(data))>>16)
#define  PINMUX_Pin_Mux_Ctrl2_get_ld_spi1_p4_sdi_sel(data)                       ((0x00007000&(data))>>12)
#define  PINMUX_Pin_Mux_Ctrl2_get_sc_cd_sel(data)                                ((0x00000300&(data))>>8)
#define  PINMUX_Pin_Mux_Ctrl2_get_sc_data_in_sel(data)                           ((0x00000030&(data))>>4)
#define  PINMUX_Pin_Mux_Ctrl2_get_spi_fcic_sel(data)                             (0x00000003&(data))

#define  PINMUX_Pin_Mux_Ctrl3                                                   0x180008FC
#define  PINMUX_Pin_Mux_Ctrl3_reg_addr                                           "0xB80008FC"
#define  PINMUX_Pin_Mux_Ctrl3_reg                                                0xB80008FC
#define  PINMUX_Pin_Mux_Ctrl3_inst_addr                                          "0x001E"
#define  set_PINMUX_Pin_Mux_Ctrl3_reg(data)                                      (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl3_reg)=data)
#define  get_PINMUX_Pin_Mux_Ctrl3_reg                                            (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl3_reg))
#define  PINMUX_Pin_Mux_Ctrl3_spi_sel_shift                                      (28)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_clk_sel_shift                                  (24)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit0_sel_shift                            (20)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit1_sel_shift                            (16)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit2_sel_shift                            (12)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit3_sel_shift                            (8)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit4_sel_shift                            (4)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit5_sel_shift                            (0)
#define  PINMUX_Pin_Mux_Ctrl3_spi_sel_mask                                       (0x30000000)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_clk_sel_mask                                   (0x03000000)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit0_sel_mask                             (0x00300000)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit1_sel_mask                             (0x00030000)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit2_sel_mask                             (0x00003000)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit3_sel_mask                             (0x00000300)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit4_sel_mask                             (0x00000030)
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit5_sel_mask                             (0x00000003)
#define  PINMUX_Pin_Mux_Ctrl3_spi_sel(data)                                      (0x30000000&((data)<<28))
#define  PINMUX_Pin_Mux_Ctrl3_tp0_clk_sel(data)                                  (0x03000000&((data)<<24))
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit0_sel(data)                            (0x00300000&((data)<<20))
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit1_sel(data)                            (0x00030000&((data)<<16))
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit2_sel(data)                            (0x00003000&((data)<<12))
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit3_sel(data)                            (0x00000300&((data)<<8))
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit4_sel(data)                            (0x00000030&((data)<<4))
#define  PINMUX_Pin_Mux_Ctrl3_tp0_data_bit5_sel(data)                            (0x00000003&(data))
#define  PINMUX_Pin_Mux_Ctrl3_get_spi_sel(data)                                  ((0x30000000&(data))>>28)
#define  PINMUX_Pin_Mux_Ctrl3_get_tp0_clk_sel(data)                              ((0x03000000&(data))>>24)
#define  PINMUX_Pin_Mux_Ctrl3_get_tp0_data_bit0_sel(data)                        ((0x00300000&(data))>>20)
#define  PINMUX_Pin_Mux_Ctrl3_get_tp0_data_bit1_sel(data)                        ((0x00030000&(data))>>16)
#define  PINMUX_Pin_Mux_Ctrl3_get_tp0_data_bit2_sel(data)                        ((0x00003000&(data))>>12)
#define  PINMUX_Pin_Mux_Ctrl3_get_tp0_data_bit3_sel(data)                        ((0x00000300&(data))>>8)
#define  PINMUX_Pin_Mux_Ctrl3_get_tp0_data_bit4_sel(data)                        ((0x00000030&(data))>>4)
#define  PINMUX_Pin_Mux_Ctrl3_get_tp0_data_bit5_sel(data)                        (0x00000003&(data))

#define  PINMUX_Pin_Mux_Ctrl4                                                   0x18000900
#define  PINMUX_Pin_Mux_Ctrl4_reg_addr                                           "0xB8000900"
#define  PINMUX_Pin_Mux_Ctrl4_reg                                                0xB8000900
#define  PINMUX_Pin_Mux_Ctrl4_inst_addr                                          "0x001F"
#define  set_PINMUX_Pin_Mux_Ctrl4_reg(data)                                      (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl4_reg)=data)
#define  get_PINMUX_Pin_Mux_Ctrl4_reg                                            (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl4_reg))
#define  PINMUX_Pin_Mux_Ctrl4_tp0_data_bit6_sel_shift                            (28)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_data_bit7_sel_shift                            (24)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_sync_sel_shift                                 (20)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_val_sel_shift                                  (16)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_clk_sel_shift                                  (12)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_data_bit0_sel_shift                            (8)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_sync_sel_shift                                 (4)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_val_sel_shift                                  (0)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_data_bit6_sel_mask                             (0x30000000)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_data_bit7_sel_mask                             (0x03000000)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_sync_sel_mask                                  (0x00300000)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_val_sel_mask                                   (0x00030000)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_clk_sel_mask                                   (0x00003000)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_data_bit0_sel_mask                             (0x00000300)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_sync_sel_mask                                  (0x00000030)
#define  PINMUX_Pin_Mux_Ctrl4_tp1_val_sel_mask                                   (0x00000003)
#define  PINMUX_Pin_Mux_Ctrl4_tp0_data_bit6_sel(data)                            (0x30000000&((data)<<28))
#define  PINMUX_Pin_Mux_Ctrl4_tp0_data_bit7_sel(data)                            (0x03000000&((data)<<24))
#define  PINMUX_Pin_Mux_Ctrl4_tp0_sync_sel(data)                                 (0x00300000&((data)<<20))
#define  PINMUX_Pin_Mux_Ctrl4_tp0_val_sel(data)                                  (0x00030000&((data)<<16))
#define  PINMUX_Pin_Mux_Ctrl4_tp1_clk_sel(data)                                  (0x00003000&((data)<<12))
#define  PINMUX_Pin_Mux_Ctrl4_tp1_data_bit0_sel(data)                            (0x00000300&((data)<<8))
#define  PINMUX_Pin_Mux_Ctrl4_tp1_sync_sel(data)                                 (0x00000030&((data)<<4))
#define  PINMUX_Pin_Mux_Ctrl4_tp1_val_sel(data)                                  (0x00000003&(data))
#define  PINMUX_Pin_Mux_Ctrl4_get_tp0_data_bit6_sel(data)                        ((0x30000000&(data))>>28)
#define  PINMUX_Pin_Mux_Ctrl4_get_tp0_data_bit7_sel(data)                        ((0x03000000&(data))>>24)
#define  PINMUX_Pin_Mux_Ctrl4_get_tp0_sync_sel(data)                             ((0x00300000&(data))>>20)
#define  PINMUX_Pin_Mux_Ctrl4_get_tp0_val_sel(data)                              ((0x00030000&(data))>>16)
#define  PINMUX_Pin_Mux_Ctrl4_get_tp1_clk_sel(data)                              ((0x00003000&(data))>>12)
#define  PINMUX_Pin_Mux_Ctrl4_get_tp1_data_bit0_sel(data)                        ((0x00000300&(data))>>8)
#define  PINMUX_Pin_Mux_Ctrl4_get_tp1_sync_sel(data)                             ((0x00000030&(data))>>4)
#define  PINMUX_Pin_Mux_Ctrl4_get_tp1_val_sel(data)                              (0x00000003&(data))

#define  PINMUX_Pin_Mux_Ctrl5                                                   0x18000904
#define  PINMUX_Pin_Mux_Ctrl5_reg_addr                                           "0xB8000904"
#define  PINMUX_Pin_Mux_Ctrl5_reg                                                0xB8000904
#define  PINMUX_Pin_Mux_Ctrl5_inst_addr                                          "0x0020"
#define  set_PINMUX_Pin_Mux_Ctrl5_reg(data)                                      (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl5_reg)=data)
#define  get_PINMUX_Pin_Mux_Ctrl5_reg                                            (*((volatile unsigned int*)PINMUX_Pin_Mux_Ctrl5_reg))
#define  PINMUX_Pin_Mux_Ctrl5_tp2_clk_sel_shift                                  (28)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_data_bit0_sel_shift                            (24)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_sync_sel_shift                                 (20)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_val_sel_shift                                  (16)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_clk_sel_mask                                   (0x30000000)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_data_bit0_sel_mask                             (0x03000000)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_sync_sel_mask                                  (0x00300000)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_val_sel_mask                                   (0x00030000)
#define  PINMUX_Pin_Mux_Ctrl5_tp2_clk_sel(data)                                  (0x30000000&((data)<<28))
#define  PINMUX_Pin_Mux_Ctrl5_tp2_data_bit0_sel(data)                            (0x03000000&((data)<<24))
#define  PINMUX_Pin_Mux_Ctrl5_tp2_sync_sel(data)                                 (0x00300000&((data)<<20))
#define  PINMUX_Pin_Mux_Ctrl5_tp2_val_sel(data)                                  (0x00030000&((data)<<16))
#define  PINMUX_Pin_Mux_Ctrl5_get_tp2_clk_sel(data)                              ((0x30000000&(data))>>28)
#define  PINMUX_Pin_Mux_Ctrl5_get_tp2_data_bit0_sel(data)                        ((0x03000000&(data))>>24)
#define  PINMUX_Pin_Mux_Ctrl5_get_tp2_sync_sel(data)                             ((0x00300000&(data))>>20)
#define  PINMUX_Pin_Mux_Ctrl5_get_tp2_val_sel(data)                              ((0x00030000&(data))>>16)

#define  PINMUX_Pin_Mux_Debug                                                   0x180009F4
#define  PINMUX_Pin_Mux_Debug_reg_addr                                           "0xB80009F4"
#define  PINMUX_Pin_Mux_Debug_reg                                                0xB80009F4
#define  PINMUX_Pin_Mux_Debug_inst_addr                                          "0x0021"
#define  set_PINMUX_Pin_Mux_Debug_reg(data)                                      (*((volatile unsigned int*)PINMUX_Pin_Mux_Debug_reg)=data)
#define  get_PINMUX_Pin_Mux_Debug_reg                                            (*((volatile unsigned int*)PINMUX_Pin_Mux_Debug_reg))
#define  PINMUX_Pin_Mux_Debug_register_dbg_out_shift                             (0)
#define  PINMUX_Pin_Mux_Debug_register_dbg_out_mask                              (0xFFFFFFFF)
#define  PINMUX_Pin_Mux_Debug_register_dbg_out(data)                             (0xFFFFFFFF&(data))
#define  PINMUX_Pin_Mux_Debug_get_register_dbg_out(data)                         (0xFFFFFFFF&(data))

#define  PINMUX_Pin_Mux_Debug0                                                  0x180009F8
#define  PINMUX_Pin_Mux_Debug0_reg_addr                                          "0xB80009F8"
#define  PINMUX_Pin_Mux_Debug0_reg                                               0xB80009F8
#define  PINMUX_Pin_Mux_Debug0_inst_addr                                         "0x0022"
#define  set_PINMUX_Pin_Mux_Debug0_reg(data)                                     (*((volatile unsigned int*)PINMUX_Pin_Mux_Debug0_reg)=data)
#define  get_PINMUX_Pin_Mux_Debug0_reg                                           (*((volatile unsigned int*)PINMUX_Pin_Mux_Debug0_reg))
#define  PINMUX_Pin_Mux_Debug0_testpin_mux_shift                                 (24)
#define  PINMUX_Pin_Mux_Debug0_apr_testpin_mux_shift                             (20)
#define  PINMUX_Pin_Mux_Debug0_block_testpin_mux_shift                           (16)
#define  PINMUX_Pin_Mux_Debug0_spi_porl_release_shift                            (0)
#define  PINMUX_Pin_Mux_Debug0_testpin_mux_mask                                  (0xFF000000)
#define  PINMUX_Pin_Mux_Debug0_apr_testpin_mux_mask                              (0x00F00000)
#define  PINMUX_Pin_Mux_Debug0_block_testpin_mux_mask                            (0x000F0000)
#define  PINMUX_Pin_Mux_Debug0_spi_porl_release_mask                             (0x00000001)
#define  PINMUX_Pin_Mux_Debug0_testpin_mux(data)                                 (0xFF000000&((data)<<24))
#define  PINMUX_Pin_Mux_Debug0_apr_testpin_mux(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_Pin_Mux_Debug0_block_testpin_mux(data)                           (0x000F0000&((data)<<16))
#define  PINMUX_Pin_Mux_Debug0_spi_porl_release(data)                            (0x00000001&(data))
#define  PINMUX_Pin_Mux_Debug0_get_testpin_mux(data)                             ((0xFF000000&(data))>>24)
#define  PINMUX_Pin_Mux_Debug0_get_apr_testpin_mux(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_Pin_Mux_Debug0_get_block_testpin_mux(data)                       ((0x000F0000&(data))>>16)
#define  PINMUX_Pin_Mux_Debug0_get_spi_porl_release(data)                        (0x00000001&(data))

#define  PINMUX_Pin_Mux_Debug1                                                  0x180009FC
#define  PINMUX_Pin_Mux_Debug1_reg_addr                                          "0xB80009FC"
#define  PINMUX_Pin_Mux_Debug1_reg                                               0xB80009FC
#define  PINMUX_Pin_Mux_Debug1_inst_addr                                         "0x0023"
#define  set_PINMUX_Pin_Mux_Debug1_reg(data)                                     (*((volatile unsigned int*)PINMUX_Pin_Mux_Debug1_reg)=data)
#define  get_PINMUX_Pin_Mux_Debug1_reg                                           (*((volatile unsigned int*)PINMUX_Pin_Mux_Debug1_reg))
#define  PINMUX_Pin_Mux_Debug1_test_en_out_shift                                 (0)
#define  PINMUX_Pin_Mux_Debug1_test_en_out_mask                                  (0xFFFFFFFF)
#define  PINMUX_Pin_Mux_Debug1_test_en_out(data)                                 (0xFFFFFFFF&(data))
#define  PINMUX_Pin_Mux_Debug1_get_test_en_out(data)                             (0xFFFFFFFF&(data))

#define  PINMUX_GPIO_RIGHT_CFG_0                                                0x1800086C
#define  PINMUX_GPIO_RIGHT_CFG_0_reg_addr                                        "0xB800086C"
#define  PINMUX_GPIO_RIGHT_CFG_0_reg                                             0xB800086C
#define  PINMUX_GPIO_RIGHT_CFG_0_inst_addr                                       "0x0024"
#define  set_PINMUX_GPIO_RIGHT_CFG_0_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_0_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_0_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_0_reg))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_ps_shift                                (28)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_pu_shift                                (27)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_pd_shift                                (26)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_ds_shift                                (25)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_sr_shift                                (24)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_ps_shift                                (20)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_pu_shift                                (19)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_pd_shift                                (18)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_ds_shift                                (17)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_sr_shift                                (16)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_ps_shift                                (12)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_pu_shift                                (11)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_pd_shift                                (10)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_ds_shift                                (9)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_sr_shift                                (8)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_ps_shift                                (4)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_pu_shift                                (3)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_pd_shift                                (2)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_ds_shift                                (1)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_sr_shift                                (0)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_83_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_84_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_85_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_0_gpio_86_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_83_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_83_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_83_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_83_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_83_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_84_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_84_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_84_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_84_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_84_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_85_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_85_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_85_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_85_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_85_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_86_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_86_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_86_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_86_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_0_get_gpio_86_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_1                                                0x18000870
#define  PINMUX_GPIO_RIGHT_CFG_1_reg_addr                                        "0xB8000870"
#define  PINMUX_GPIO_RIGHT_CFG_1_reg                                             0xB8000870
#define  PINMUX_GPIO_RIGHT_CFG_1_inst_addr                                       "0x0025"
#define  set_PINMUX_GPIO_RIGHT_CFG_1_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_1_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_1_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_1_reg))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_ps_shift                                (28)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_pu_shift                                (27)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_pd_shift                                (26)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_ds_shift                                (25)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_sr_shift                                (24)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_ps_shift                                (20)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_pu_shift                                (19)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_pd_shift                                (18)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_ds_shift                                (17)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_sr_shift                                (16)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_ps_shift                                (12)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_pu_shift                                (11)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_pd_shift                                (10)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_ds_shift                                (9)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_sr_shift                                (8)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_ps_shift                                (4)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_pu_shift                                (3)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_pd_shift                                (2)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_ds_shift                                (1)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_sr_shift                                (0)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_87_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_88_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_89_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_1_gpio_90_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_87_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_87_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_87_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_87_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_87_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_88_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_88_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_88_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_88_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_88_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_89_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_89_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_89_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_89_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_89_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_90_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_90_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_90_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_90_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_1_get_gpio_90_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_2                                                0x18000874
#define  PINMUX_GPIO_RIGHT_CFG_2_reg_addr                                        "0xB8000874"
#define  PINMUX_GPIO_RIGHT_CFG_2_reg                                             0xB8000874
#define  PINMUX_GPIO_RIGHT_CFG_2_inst_addr                                       "0x0026"
#define  set_PINMUX_GPIO_RIGHT_CFG_2_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_2_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_2_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_2_reg))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_ps_shift                                (28)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_pu_shift                                (27)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_pd_shift                                (26)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_ds_shift                                (25)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_sr_shift                                (24)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_ps_shift                                (20)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_pu_shift                                (19)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_pd_shift                                (18)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_ds_shift                                (17)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_sr_shift                                (16)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_ps_shift                                (12)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_pu_shift                                (11)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_pd_shift                                (10)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_ds_shift                                (9)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_sr_shift                                (8)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_ps_shift                                (4)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_pu_shift                                (3)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_pd_shift                                (2)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_ds_shift                                (1)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_sr_shift                                (0)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_91_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_92_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_93_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_2_gpio_94_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_91_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_91_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_91_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_91_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_91_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_92_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_92_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_92_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_92_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_92_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_93_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_93_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_93_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_93_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_93_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_94_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_94_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_94_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_94_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_2_get_gpio_94_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_3                                                0x18000878
#define  PINMUX_GPIO_RIGHT_CFG_3_reg_addr                                        "0xB8000878"
#define  PINMUX_GPIO_RIGHT_CFG_3_reg                                             0xB8000878
#define  PINMUX_GPIO_RIGHT_CFG_3_inst_addr                                       "0x0027"
#define  set_PINMUX_GPIO_RIGHT_CFG_3_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_3_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_3_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_3_reg))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_ps_shift                                (28)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_pu_shift                                (27)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_pd_shift                                (26)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_ds_shift                                (25)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_sr_shift                                (24)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_ps_shift                                (20)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_pu_shift                                (19)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_pd_shift                                (18)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_ds_shift                                (17)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_sr_shift                                (16)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_ps_shift                                (12)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_pu_shift                                (11)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_pd_shift                                (10)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_ds_shift                                (9)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_sr_shift                                (8)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_ps_shift                                (4)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_pu_shift                                (3)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_pd_shift                                (2)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_ds_shift                                (1)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_sr_shift                                (0)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_ps_mask                                 (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_pu_mask                                 (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_pd_mask                                 (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_ds_mask                                 (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_sr_mask                                 (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_ps_mask                                 (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_pu_mask                                 (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_pd_mask                                 (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_ds_mask                                 (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_sr_mask                                 (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_ps_mask                                 (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_pu_mask                                 (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_pd_mask                                 (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_ds_mask                                 (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_sr_mask                                 (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_95_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_ps(data)                                (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_pu(data)                                (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_pd(data)                                (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_ds(data)                                (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_96_sr(data)                                (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_ps(data)                                (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_pu(data)                                (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_pd(data)                                (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_ds(data)                                (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_97_sr(data)                                (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_ps(data)                                (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_pu(data)                                (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_pd(data)                                (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_ds(data)                                (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_3_gpio_98_sr(data)                                (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_95_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_95_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_95_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_95_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_95_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_96_ps(data)                            ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_96_pu(data)                            ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_96_pd(data)                            ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_96_ds(data)                            ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_96_sr(data)                            ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_97_ps(data)                            ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_97_pu(data)                            ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_97_pd(data)                            ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_97_ds(data)                            ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_97_sr(data)                            ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_98_ps(data)                            ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_98_pu(data)                            ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_98_pd(data)                            ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_98_ds(data)                            ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_3_get_gpio_98_sr(data)                            (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_4                                                0x1800087C
#define  PINMUX_GPIO_RIGHT_CFG_4_reg_addr                                        "0xB800087C"
#define  PINMUX_GPIO_RIGHT_CFG_4_reg                                             0xB800087C
#define  PINMUX_GPIO_RIGHT_CFG_4_inst_addr                                       "0x0028"
#define  set_PINMUX_GPIO_RIGHT_CFG_4_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_4_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_4_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_4_reg))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_ps_shift                                (28)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_pu_shift                                (27)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_pd_shift                                (26)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_ds_shift                                (25)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_sr_shift                                (24)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_ps_shift                               (20)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_pu_shift                               (19)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_pd_shift                               (18)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_ds_shift                               (17)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_sr_shift                               (16)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_ps_shift                               (12)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_pu_shift                               (11)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_pd_shift                               (10)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_ds_shift                               (9)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_sr_shift                               (8)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_ps_shift                               (4)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_pu_shift                               (3)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_pd_shift                               (2)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_ds_shift                               (1)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_sr_shift                               (0)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_ps_mask                                 (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_pu_mask                                 (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_pd_mask                                 (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_ds_mask                                 (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_sr_mask                                 (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_ps_mask                                (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_pu_mask                                (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_pd_mask                                (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_ds_mask                                (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_sr_mask                                (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_ps_mask                                (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_pu_mask                                (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_pd_mask                                (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_ds_mask                                (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_sr_mask                                (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_ps_mask                                (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_pu_mask                                (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_pd_mask                                (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_ds_mask                                (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_sr_mask                                (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_ps(data)                                (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_pu(data)                                (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_pd(data)                                (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_ds(data)                                (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_99_sr(data)                                (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_ps(data)                               (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_pu(data)                               (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_pd(data)                               (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_ds(data)                               (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_100_sr(data)                               (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_ps(data)                               (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_pu(data)                               (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_pd(data)                               (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_ds(data)                               (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_101_sr(data)                               (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_ps(data)                               (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_pu(data)                               (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_pd(data)                               (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_ds(data)                               (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_4_gpio_102_sr(data)                               (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_99_ps(data)                            ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_99_pu(data)                            ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_99_pd(data)                            ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_99_ds(data)                            ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_99_sr(data)                            ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_100_ps(data)                           ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_100_pu(data)                           ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_100_pd(data)                           ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_100_ds(data)                           ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_100_sr(data)                           ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_101_ps(data)                           ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_101_pu(data)                           ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_101_pd(data)                           ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_101_ds(data)                           ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_101_sr(data)                           ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_102_ps(data)                           ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_102_pu(data)                           ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_102_pd(data)                           ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_102_ds(data)                           ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_4_get_gpio_102_sr(data)                           (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_5                                                0x18000880
#define  PINMUX_GPIO_RIGHT_CFG_5_reg_addr                                        "0xB8000880"
#define  PINMUX_GPIO_RIGHT_CFG_5_reg                                             0xB8000880
#define  PINMUX_GPIO_RIGHT_CFG_5_inst_addr                                       "0x0029"
#define  set_PINMUX_GPIO_RIGHT_CFG_5_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_5_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_5_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_5_reg))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_ps_shift                               (28)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_pu_shift                               (27)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_pd_shift                               (26)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_ds_shift                               (25)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_sr_shift                               (24)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_ps_shift                               (20)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_pu_shift                               (19)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_pd_shift                               (18)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_ds_shift                               (17)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_sr_shift                               (16)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_ps_shift                               (12)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_pu_shift                               (11)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_pd_shift                               (10)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_ds_shift                               (9)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_sr_shift                               (8)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_ps_shift                               (4)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_pu_shift                               (3)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_pd_shift                               (2)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_ds_shift                               (1)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_sr_shift                               (0)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_ps_mask                                (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_pu_mask                                (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_pd_mask                                (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_ds_mask                                (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_sr_mask                                (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_ps_mask                                (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_pu_mask                                (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_pd_mask                                (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_ds_mask                                (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_sr_mask                                (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_ps_mask                                (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_pu_mask                                (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_pd_mask                                (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_ds_mask                                (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_sr_mask                                (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_ps_mask                                (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_pu_mask                                (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_pd_mask                                (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_ds_mask                                (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_sr_mask                                (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_ps(data)                               (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_pu(data)                               (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_pd(data)                               (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_ds(data)                               (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_103_sr(data)                               (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_ps(data)                               (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_pu(data)                               (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_pd(data)                               (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_ds(data)                               (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_104_sr(data)                               (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_ps(data)                               (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_pu(data)                               (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_pd(data)                               (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_ds(data)                               (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_105_sr(data)                               (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_ps(data)                               (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_pu(data)                               (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_pd(data)                               (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_ds(data)                               (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_5_gpio_106_sr(data)                               (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_103_ps(data)                           ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_103_pu(data)                           ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_103_pd(data)                           ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_103_ds(data)                           ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_103_sr(data)                           ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_104_ps(data)                           ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_104_pu(data)                           ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_104_pd(data)                           ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_104_ds(data)                           ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_104_sr(data)                           ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_105_ps(data)                           ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_105_pu(data)                           ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_105_pd(data)                           ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_105_ds(data)                           ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_105_sr(data)                           ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_106_ps(data)                           ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_106_pu(data)                           ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_106_pd(data)                           ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_106_ds(data)                           ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_5_get_gpio_106_sr(data)                           (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_6                                                0x18000884
#define  PINMUX_GPIO_RIGHT_CFG_6_reg_addr                                        "0xB8000884"
#define  PINMUX_GPIO_RIGHT_CFG_6_reg                                             0xB8000884
#define  PINMUX_GPIO_RIGHT_CFG_6_inst_addr                                       "0x002A"
#define  set_PINMUX_GPIO_RIGHT_CFG_6_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_6_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_6_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_6_reg))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_ps_shift                               (28)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_pu_shift                               (27)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_pd_shift                               (26)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_ds_shift                               (25)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_sr_shift                               (24)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_ps_shift                               (20)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_pu_shift                               (19)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_pd_shift                               (18)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_ds_shift                               (17)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_sr_shift                               (16)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_ps_shift                               (12)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_pu_shift                               (11)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_pd_shift                               (10)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_ds_shift                               (9)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_sr_shift                               (8)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_ps_shift                               (4)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_pu_shift                               (3)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_pd_shift                               (2)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_ds_shift                               (1)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_sr_shift                               (0)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_ps_mask                                (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_pu_mask                                (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_pd_mask                                (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_ds_mask                                (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_sr_mask                                (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_ps_mask                                (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_pu_mask                                (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_pd_mask                                (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_ds_mask                                (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_sr_mask                                (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_ps_mask                                (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_pu_mask                                (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_pd_mask                                (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_ds_mask                                (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_sr_mask                                (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_ps_mask                                (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_pu_mask                                (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_pd_mask                                (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_ds_mask                                (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_sr_mask                                (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_ps(data)                               (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_pu(data)                               (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_pd(data)                               (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_ds(data)                               (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_107_sr(data)                               (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_ps(data)                               (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_pu(data)                               (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_pd(data)                               (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_ds(data)                               (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_108_sr(data)                               (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_ps(data)                               (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_pu(data)                               (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_pd(data)                               (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_ds(data)                               (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_109_sr(data)                               (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_ps(data)                               (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_pu(data)                               (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_pd(data)                               (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_ds(data)                               (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_6_gpio_110_sr(data)                               (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_107_ps(data)                           ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_107_pu(data)                           ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_107_pd(data)                           ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_107_ds(data)                           ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_107_sr(data)                           ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_108_ps(data)                           ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_108_pu(data)                           ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_108_pd(data)                           ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_108_ds(data)                           ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_108_sr(data)                           ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_109_ps(data)                           ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_109_pu(data)                           ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_109_pd(data)                           ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_109_ds(data)                           ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_109_sr(data)                           ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_110_ps(data)                           ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_110_pu(data)                           ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_110_pd(data)                           ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_110_ds(data)                           ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_6_get_gpio_110_sr(data)                           (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_7                                                0x18000888
#define  PINMUX_GPIO_RIGHT_CFG_7_reg_addr                                        "0xB8000888"
#define  PINMUX_GPIO_RIGHT_CFG_7_reg                                             0xB8000888
#define  PINMUX_GPIO_RIGHT_CFG_7_inst_addr                                       "0x002B"
#define  set_PINMUX_GPIO_RIGHT_CFG_7_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_7_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_7_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_7_reg))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_ps_shift                               (28)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_pu_shift                               (27)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_pd_shift                               (26)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_ds_shift                               (25)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_sr_shift                               (24)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_ps_shift                               (20)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_pu_shift                               (19)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_pd_shift                               (18)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_ds_shift                               (17)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_sr_shift                               (16)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_ps_shift                               (12)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_pu_shift                               (11)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_pd_shift                               (10)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_ds_shift                               (9)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_sr_shift                               (8)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_ps_shift                               (4)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_pu_shift                               (3)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_pd_shift                               (2)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_ds_shift                               (1)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_sr_shift                               (0)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_ps_mask                                (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_pu_mask                                (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_pd_mask                                (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_ds_mask                                (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_sr_mask                                (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_ps_mask                                (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_pu_mask                                (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_pd_mask                                (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_ds_mask                                (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_sr_mask                                (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_ps_mask                                (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_pu_mask                                (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_pd_mask                                (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_ds_mask                                (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_sr_mask                                (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_ps_mask                                (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_pu_mask                                (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_pd_mask                                (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_ds_mask                                (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_sr_mask                                (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_ps(data)                               (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_pu(data)                               (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_pd(data)                               (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_ds(data)                               (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_111_sr(data)                               (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_ps(data)                               (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_pu(data)                               (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_pd(data)                               (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_ds(data)                               (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_112_sr(data)                               (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_ps(data)                               (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_pu(data)                               (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_pd(data)                               (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_ds(data)                               (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_113_sr(data)                               (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_ps(data)                               (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_pu(data)                               (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_pd(data)                               (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_ds(data)                               (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_7_gpio_114_sr(data)                               (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_111_ps(data)                           ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_111_pu(data)                           ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_111_pd(data)                           ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_111_ds(data)                           ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_111_sr(data)                           ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_112_ps(data)                           ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_112_pu(data)                           ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_112_pd(data)                           ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_112_ds(data)                           ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_112_sr(data)                           ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_113_ps(data)                           ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_113_pu(data)                           ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_113_pd(data)                           ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_113_ds(data)                           ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_113_sr(data)                           ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_114_ps(data)                           ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_114_pu(data)                           ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_114_pd(data)                           ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_114_ds(data)                           ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_7_get_gpio_114_sr(data)                           (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_8                                                0x1800088C
#define  PINMUX_GPIO_RIGHT_CFG_8_reg_addr                                        "0xB800088C"
#define  PINMUX_GPIO_RIGHT_CFG_8_reg                                             0xB800088C
#define  PINMUX_GPIO_RIGHT_CFG_8_inst_addr                                       "0x002C"
#define  set_PINMUX_GPIO_RIGHT_CFG_8_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_8_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_8_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_8_reg))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_ps_shift                               (28)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_pu_shift                               (27)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_pd_shift                               (26)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_ds_shift                               (25)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_sr_shift                               (24)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_ps_shift                               (20)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_pu_shift                               (19)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_pd_shift                               (18)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_ds_shift                               (17)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_sr_shift                               (16)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_ps_shift                               (12)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_pu_shift                               (11)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_pd_shift                               (10)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_ds_shift                               (9)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_sr_shift                               (8)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_ps_shift                               (4)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_pu_shift                               (3)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_pd_shift                               (2)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_ds_shift                               (1)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_sr_shift                               (0)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_ps_mask                                (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_pu_mask                                (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_pd_mask                                (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_ds_mask                                (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_sr_mask                                (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_ps_mask                                (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_pu_mask                                (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_pd_mask                                (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_ds_mask                                (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_sr_mask                                (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_ps_mask                                (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_pu_mask                                (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_pd_mask                                (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_ds_mask                                (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_sr_mask                                (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_ps_mask                                (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_pu_mask                                (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_pd_mask                                (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_ds_mask                                (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_sr_mask                                (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_ps(data)                               (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_pu(data)                               (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_pd(data)                               (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_ds(data)                               (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_115_sr(data)                               (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_ps(data)                               (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_pu(data)                               (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_pd(data)                               (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_ds(data)                               (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_116_sr(data)                               (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_ps(data)                               (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_pu(data)                               (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_pd(data)                               (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_ds(data)                               (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_117_sr(data)                               (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_ps(data)                               (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_pu(data)                               (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_pd(data)                               (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_ds(data)                               (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_8_gpio_118_sr(data)                               (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_115_ps(data)                           ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_115_pu(data)                           ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_115_pd(data)                           ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_115_ds(data)                           ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_115_sr(data)                           ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_116_ps(data)                           ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_116_pu(data)                           ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_116_pd(data)                           ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_116_ds(data)                           ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_116_sr(data)                           ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_117_ps(data)                           ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_117_pu(data)                           ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_117_pd(data)                           ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_117_ds(data)                           ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_117_sr(data)                           ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_118_ps(data)                           ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_118_pu(data)                           ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_118_pd(data)                           ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_118_ds(data)                           ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_8_get_gpio_118_sr(data)                           (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_9                                                0x18000890
#define  PINMUX_GPIO_RIGHT_CFG_9_reg_addr                                        "0xB8000890"
#define  PINMUX_GPIO_RIGHT_CFG_9_reg                                             0xB8000890
#define  PINMUX_GPIO_RIGHT_CFG_9_inst_addr                                       "0x002D"
#define  set_PINMUX_GPIO_RIGHT_CFG_9_reg(data)                                   (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_9_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_9_reg                                         (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_9_reg))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_ps_shift                               (28)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_pu_shift                               (27)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_pd_shift                               (26)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_ds_shift                               (25)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_sr_shift                               (24)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_ps_shift                               (20)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_pu_shift                               (19)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_pd_shift                               (18)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_ds_shift                               (17)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_sr_shift                               (16)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_ps_shift                               (12)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_pu_shift                               (11)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_pd_shift                               (10)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_ds_shift                               (9)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_sr_shift                               (8)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_ps_shift                               (4)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_pu_shift                               (3)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_pd_shift                               (2)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_ds_shift                               (1)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_sr_shift                               (0)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_ps_mask                                (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_pu_mask                                (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_pd_mask                                (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_ds_mask                                (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_sr_mask                                (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_ps_mask                                (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_pu_mask                                (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_pd_mask                                (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_ds_mask                                (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_sr_mask                                (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_ps_mask                                (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_pu_mask                                (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_pd_mask                                (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_ds_mask                                (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_sr_mask                                (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_ps_mask                                (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_pu_mask                                (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_pd_mask                                (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_ds_mask                                (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_sr_mask                                (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_ps(data)                               (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_pu(data)                               (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_pd(data)                               (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_ds(data)                               (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_119_sr(data)                               (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_ps(data)                               (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_pu(data)                               (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_pd(data)                               (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_ds(data)                               (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_120_sr(data)                               (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_ps(data)                               (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_pu(data)                               (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_pd(data)                               (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_ds(data)                               (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_121_sr(data)                               (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_ps(data)                               (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_pu(data)                               (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_pd(data)                               (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_ds(data)                               (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_9_gpio_122_sr(data)                               (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_119_ps(data)                           ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_119_pu(data)                           ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_119_pd(data)                           ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_119_ds(data)                           ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_119_sr(data)                           ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_120_ps(data)                           ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_120_pu(data)                           ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_120_pd(data)                           ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_120_ds(data)                           ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_120_sr(data)                           ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_121_ps(data)                           ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_121_pu(data)                           ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_121_pd(data)                           ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_121_ds(data)                           ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_121_sr(data)                           ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_122_ps(data)                           ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_122_pu(data)                           ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_122_pd(data)                           ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_122_ds(data)                           ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_9_get_gpio_122_sr(data)                           (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_10                                               0x18000894
#define  PINMUX_GPIO_RIGHT_CFG_10_reg_addr                                       "0xB8000894"
#define  PINMUX_GPIO_RIGHT_CFG_10_reg                                            0xB8000894
#define  PINMUX_GPIO_RIGHT_CFG_10_inst_addr                                      "0x002E"
#define  set_PINMUX_GPIO_RIGHT_CFG_10_reg(data)                                  (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_10_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_10_reg                                        (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_10_reg))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_ps_shift                              (28)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_pu_shift                              (27)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_pd_shift                              (26)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_ds_shift                              (25)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_sr_shift                              (24)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_ps_shift                              (20)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_pu_shift                              (19)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_pd_shift                              (18)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_ds_shift                              (17)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_sr_shift                              (16)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_ps_shift                              (12)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_pu_shift                              (11)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_pd_shift                              (10)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_ds_shift                              (9)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_sr_shift                              (8)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_ps_shift                              (4)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_pu_shift                              (3)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_pd_shift                              (2)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_ds_shift                              (1)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_sr_shift                              (0)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_ps_mask                               (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_pu_mask                               (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_pd_mask                               (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_ds_mask                               (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_sr_mask                               (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_ps_mask                               (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_pu_mask                               (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_pd_mask                               (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_ds_mask                               (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_sr_mask                               (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_ps_mask                               (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_pu_mask                               (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_pd_mask                               (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_ds_mask                               (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_sr_mask                               (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_ps_mask                               (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_pu_mask                               (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_pd_mask                               (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_ds_mask                               (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_sr_mask                               (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_ps(data)                              (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_pu(data)                              (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_pd(data)                              (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_ds(data)                              (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_123_sr(data)                              (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_ps(data)                              (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_pu(data)                              (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_pd(data)                              (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_ds(data)                              (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_124_sr(data)                              (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_ps(data)                              (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_pu(data)                              (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_pd(data)                              (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_ds(data)                              (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_125_sr(data)                              (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_ps(data)                              (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_pu(data)                              (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_pd(data)                              (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_ds(data)                              (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_10_gpio_126_sr(data)                              (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_123_ps(data)                          ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_123_pu(data)                          ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_123_pd(data)                          ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_123_ds(data)                          ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_123_sr(data)                          ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_124_ps(data)                          ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_124_pu(data)                          ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_124_pd(data)                          ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_124_ds(data)                          ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_124_sr(data)                          ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_125_ps(data)                          ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_125_pu(data)                          ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_125_pd(data)                          ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_125_ds(data)                          ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_125_sr(data)                          ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_126_ps(data)                          ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_126_pu(data)                          ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_126_pd(data)                          ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_126_ds(data)                          ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_10_get_gpio_126_sr(data)                          (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_11                                               0x18000898
#define  PINMUX_GPIO_RIGHT_CFG_11_reg_addr                                       "0xB8000898"
#define  PINMUX_GPIO_RIGHT_CFG_11_reg                                            0xB8000898
#define  PINMUX_GPIO_RIGHT_CFG_11_inst_addr                                      "0x002F"
#define  set_PINMUX_GPIO_RIGHT_CFG_11_reg(data)                                  (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_11_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_11_reg                                        (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_11_reg))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_ps_shift                              (28)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_pu_shift                              (27)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_pd_shift                              (26)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_ds_shift                              (25)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_sr_shift                              (24)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_ps_shift                              (20)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_pu_shift                              (19)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_pd_shift                              (18)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_ds_shift                              (17)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_sr_shift                              (16)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_ps_shift                              (12)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_pu_shift                              (11)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_pd_shift                              (10)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_ds_shift                              (9)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_sr_shift                              (8)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_ps_shift                              (4)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_pu_shift                              (3)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_pd_shift                              (2)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_ds_shift                              (1)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_sr_shift                              (0)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_ps_mask                               (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_pu_mask                               (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_pd_mask                               (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_ds_mask                               (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_sr_mask                               (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_ps_mask                               (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_pu_mask                               (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_pd_mask                               (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_ds_mask                               (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_sr_mask                               (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_ps_mask                               (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_pu_mask                               (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_pd_mask                               (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_ds_mask                               (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_sr_mask                               (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_ps_mask                               (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_pu_mask                               (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_pd_mask                               (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_ds_mask                               (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_sr_mask                               (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_ps(data)                              (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_pu(data)                              (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_pd(data)                              (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_ds(data)                              (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_127_sr(data)                              (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_ps(data)                              (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_pu(data)                              (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_pd(data)                              (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_ds(data)                              (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_128_sr(data)                              (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_ps(data)                              (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_pu(data)                              (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_pd(data)                              (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_ds(data)                              (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_129_sr(data)                              (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_ps(data)                              (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_pu(data)                              (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_pd(data)                              (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_ds(data)                              (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_11_gpio_130_sr(data)                              (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_127_ps(data)                          ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_127_pu(data)                          ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_127_pd(data)                          ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_127_ds(data)                          ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_127_sr(data)                          ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_128_ps(data)                          ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_128_pu(data)                          ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_128_pd(data)                          ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_128_ds(data)                          ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_128_sr(data)                          ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_129_ps(data)                          ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_129_pu(data)                          ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_129_pd(data)                          ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_129_ds(data)                          ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_129_sr(data)                          ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_130_ps(data)                          ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_130_pu(data)                          ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_130_pd(data)                          ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_130_ds(data)                          ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_11_get_gpio_130_sr(data)                          (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_12                                               0x1800089C
#define  PINMUX_GPIO_RIGHT_CFG_12_reg_addr                                       "0xB800089C"
#define  PINMUX_GPIO_RIGHT_CFG_12_reg                                            0xB800089C
#define  PINMUX_GPIO_RIGHT_CFG_12_inst_addr                                      "0x0030"
#define  set_PINMUX_GPIO_RIGHT_CFG_12_reg(data)                                  (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_12_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_12_reg                                        (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_12_reg))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_ps_shift                              (28)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_pu_shift                              (27)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_pd_shift                              (26)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_ds_shift                              (25)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_sr_shift                              (24)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_ps_shift                              (20)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_pu_shift                              (19)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_pd_shift                              (18)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_ds_shift                              (17)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_sr_shift                              (16)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_ps_shift                              (12)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_pu_shift                              (11)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_pd_shift                              (10)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_ds_shift                              (9)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_sr_shift                              (8)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_ps_shift                              (4)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_pu_shift                              (3)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_pd_shift                              (2)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_ds_shift                              (1)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_sr_shift                              (0)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_ps_mask                               (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_pu_mask                               (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_pd_mask                               (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_ds_mask                               (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_sr_mask                               (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_ps_mask                               (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_pu_mask                               (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_pd_mask                               (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_ds_mask                               (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_sr_mask                               (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_ps_mask                               (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_pu_mask                               (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_pd_mask                               (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_ds_mask                               (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_sr_mask                               (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_ps_mask                               (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_pu_mask                               (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_pd_mask                               (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_ds_mask                               (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_sr_mask                               (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_ps(data)                              (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_pu(data)                              (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_pd(data)                              (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_ds(data)                              (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_131_sr(data)                              (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_ps(data)                              (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_pu(data)                              (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_pd(data)                              (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_ds(data)                              (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_132_sr(data)                              (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_ps(data)                              (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_pu(data)                              (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_pd(data)                              (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_ds(data)                              (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_133_sr(data)                              (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_ps(data)                              (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_pu(data)                              (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_pd(data)                              (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_ds(data)                              (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_12_gpio_134_sr(data)                              (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_131_ps(data)                          ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_131_pu(data)                          ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_131_pd(data)                          ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_131_ds(data)                          ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_131_sr(data)                          ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_132_ps(data)                          ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_132_pu(data)                          ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_132_pd(data)                          ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_132_ds(data)                          ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_132_sr(data)                          ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_133_ps(data)                          ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_133_pu(data)                          ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_133_pd(data)                          ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_133_ds(data)                          ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_133_sr(data)                          ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_134_ps(data)                          ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_134_pu(data)                          ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_134_pd(data)                          ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_134_ds(data)                          ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_12_get_gpio_134_sr(data)                          (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_13                                               0x180008A0
#define  PINMUX_GPIO_RIGHT_CFG_13_reg_addr                                       "0xB80008A0"
#define  PINMUX_GPIO_RIGHT_CFG_13_reg                                            0xB80008A0
#define  PINMUX_GPIO_RIGHT_CFG_13_inst_addr                                      "0x0031"
#define  set_PINMUX_GPIO_RIGHT_CFG_13_reg(data)                                  (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_13_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_13_reg                                        (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_13_reg))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_ps_shift                              (28)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_pu_shift                              (27)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_pd_shift                              (26)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_ds_shift                              (25)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_sr_shift                              (24)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_ps_shift                              (20)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_pu_shift                              (19)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_pd_shift                              (18)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_ds_shift                              (17)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_sr_shift                              (16)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_ps_shift                              (12)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_pu_shift                              (11)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_pd_shift                              (10)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_ds_shift                              (9)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_sr_shift                              (8)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_ps_shift                              (4)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_pu_shift                              (3)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_pd_shift                              (2)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_ds_shift                              (1)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_sr_shift                              (0)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_ps_mask                               (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_pu_mask                               (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_pd_mask                               (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_ds_mask                               (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_sr_mask                               (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_ps_mask                               (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_pu_mask                               (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_pd_mask                               (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_ds_mask                               (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_sr_mask                               (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_ps_mask                               (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_pu_mask                               (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_pd_mask                               (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_ds_mask                               (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_sr_mask                               (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_ps_mask                               (0x000000F0)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_pu_mask                               (0x00000008)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_pd_mask                               (0x00000004)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_ds_mask                               (0x00000002)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_sr_mask                               (0x00000001)
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_ps(data)                              (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_pu(data)                              (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_pd(data)                              (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_ds(data)                              (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_135_sr(data)                              (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_ps(data)                              (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_pu(data)                              (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_pd(data)                              (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_ds(data)                              (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_136_sr(data)                              (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_ps(data)                              (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_pu(data)                              (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_pd(data)                              (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_ds(data)                              (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_137_sr(data)                              (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_ps(data)                              (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_pu(data)                              (0x00000008&((data)<<3))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_pd(data)                              (0x00000004&((data)<<2))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_ds(data)                              (0x00000002&((data)<<1))
#define  PINMUX_GPIO_RIGHT_CFG_13_gpio_138_sr(data)                              (0x00000001&(data))
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_135_ps(data)                          ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_135_pu(data)                          ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_135_pd(data)                          ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_135_ds(data)                          ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_135_sr(data)                          ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_136_ps(data)                          ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_136_pu(data)                          ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_136_pd(data)                          ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_136_ds(data)                          ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_136_sr(data)                          ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_137_ps(data)                          ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_137_pu(data)                          ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_137_pd(data)                          ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_137_ds(data)                          ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_137_sr(data)                          ((0x00000100&(data))>>8)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_138_ps(data)                          ((0x000000F0&(data))>>4)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_138_pu(data)                          ((0x00000008&(data))>>3)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_138_pd(data)                          ((0x00000004&(data))>>2)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_138_ds(data)                          ((0x00000002&(data))>>1)
#define  PINMUX_GPIO_RIGHT_CFG_13_get_gpio_138_sr(data)                          (0x00000001&(data))

#define  PINMUX_GPIO_RIGHT_CFG_14                                               0x180008A4
#define  PINMUX_GPIO_RIGHT_CFG_14_reg_addr                                       "0xB80008A4"
#define  PINMUX_GPIO_RIGHT_CFG_14_reg                                            0xB80008A4
#define  PINMUX_GPIO_RIGHT_CFG_14_inst_addr                                      "0x0032"
#define  set_PINMUX_GPIO_RIGHT_CFG_14_reg(data)                                  (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_14_reg)=data)
#define  get_PINMUX_GPIO_RIGHT_CFG_14_reg                                        (*((volatile unsigned int*)PINMUX_GPIO_RIGHT_CFG_14_reg))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_ps_shift                              (28)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_pu_shift                              (27)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_pd_shift                              (26)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_ds_shift                              (25)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_sr_shift                              (24)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_ps_shift                              (20)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_pu_shift                              (19)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_pd_shift                              (18)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_ds_shift                              (17)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_sr_shift                              (16)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_ps_shift                              (12)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_pu_shift                              (11)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_pd_shift                              (10)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_ds_shift                              (9)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_sr_shift                              (8)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_ps_mask                               (0xF0000000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_pu_mask                               (0x08000000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_pd_mask                               (0x04000000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_ds_mask                               (0x02000000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_sr_mask                               (0x01000000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_ps_mask                               (0x00F00000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_pu_mask                               (0x00080000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_pd_mask                               (0x00040000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_ds_mask                               (0x00020000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_sr_mask                               (0x00010000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_ps_mask                               (0x0000F000)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_pu_mask                               (0x00000800)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_pd_mask                               (0x00000400)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_ds_mask                               (0x00000200)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_sr_mask                               (0x00000100)
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_ps(data)                              (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_pu(data)                              (0x08000000&((data)<<27))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_pd(data)                              (0x04000000&((data)<<26))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_ds(data)                              (0x02000000&((data)<<25))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_151_sr(data)                              (0x01000000&((data)<<24))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_ps(data)                              (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_pu(data)                              (0x00080000&((data)<<19))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_pd(data)                              (0x00040000&((data)<<18))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_ds(data)                              (0x00020000&((data)<<17))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_152_sr(data)                              (0x00010000&((data)<<16))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_ps(data)                              (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_pu(data)                              (0x00000800&((data)<<11))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_pd(data)                              (0x00000400&((data)<<10))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_ds(data)                              (0x00000200&((data)<<9))
#define  PINMUX_GPIO_RIGHT_CFG_14_gpio_153_sr(data)                              (0x00000100&((data)<<8))
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_151_ps(data)                          ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_151_pu(data)                          ((0x08000000&(data))>>27)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_151_pd(data)                          ((0x04000000&(data))>>26)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_151_ds(data)                          ((0x02000000&(data))>>25)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_151_sr(data)                          ((0x01000000&(data))>>24)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_152_ps(data)                          ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_152_pu(data)                          ((0x00080000&(data))>>19)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_152_pd(data)                          ((0x00040000&(data))>>18)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_152_ds(data)                          ((0x00020000&(data))>>17)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_152_sr(data)                          ((0x00010000&(data))>>16)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_153_ps(data)                          ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_153_pu(data)                          ((0x00000800&(data))>>11)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_153_pd(data)                          ((0x00000400&(data))>>10)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_153_ds(data)                          ((0x00000200&(data))>>9)
#define  PINMUX_GPIO_RIGHT_CFG_14_get_gpio_153_sr(data)                          ((0x00000100&(data))>>8)

#define  PINMUX_RIGHT_SMT_0                                                     0x180008A8
#define  PINMUX_RIGHT_SMT_0_reg_addr                                             "0xB80008A8"
#define  PINMUX_RIGHT_SMT_0_reg                                                  0xB80008A8
#define  PINMUX_RIGHT_SMT_0_inst_addr                                            "0x0033"
#define  set_PINMUX_RIGHT_SMT_0_reg(data)                                        (*((volatile unsigned int*)PINMUX_RIGHT_SMT_0_reg)=data)
#define  get_PINMUX_RIGHT_SMT_0_reg                                              (*((volatile unsigned int*)PINMUX_RIGHT_SMT_0_reg))
#define  PINMUX_RIGHT_SMT_0_gpio_83_smt_shift                                    (31)
#define  PINMUX_RIGHT_SMT_0_gpio_84_smt_shift                                    (30)
#define  PINMUX_RIGHT_SMT_0_gpio_85_smt_shift                                    (29)
#define  PINMUX_RIGHT_SMT_0_gpio_86_smt_shift                                    (28)
#define  PINMUX_RIGHT_SMT_0_gpio_87_smt_shift                                    (27)
#define  PINMUX_RIGHT_SMT_0_gpio_88_smt_shift                                    (26)
#define  PINMUX_RIGHT_SMT_0_gpio_89_smt_shift                                    (25)
#define  PINMUX_RIGHT_SMT_0_gpio_90_smt_shift                                    (24)
#define  PINMUX_RIGHT_SMT_0_gpio_91_smt_shift                                    (23)
#define  PINMUX_RIGHT_SMT_0_gpio_92_smt_shift                                    (22)
#define  PINMUX_RIGHT_SMT_0_gpio_93_smt_shift                                    (21)
#define  PINMUX_RIGHT_SMT_0_gpio_94_smt_shift                                    (20)
#define  PINMUX_RIGHT_SMT_0_gpio_95_smt_shift                                    (19)
#define  PINMUX_RIGHT_SMT_0_gpio_96_smt_shift                                    (18)
#define  PINMUX_RIGHT_SMT_0_gpio_97_smt_shift                                    (17)
#define  PINMUX_RIGHT_SMT_0_gpio_98_smt_shift                                    (16)
#define  PINMUX_RIGHT_SMT_0_gpio_99_smt_shift                                    (15)
#define  PINMUX_RIGHT_SMT_0_gpio_100_smt_shift                                   (14)
#define  PINMUX_RIGHT_SMT_0_gpio_101_smt_shift                                   (13)
#define  PINMUX_RIGHT_SMT_0_gpio_102_smt_shift                                   (12)
#define  PINMUX_RIGHT_SMT_0_gpio_103_smt_shift                                   (11)
#define  PINMUX_RIGHT_SMT_0_gpio_104_smt_shift                                   (10)
#define  PINMUX_RIGHT_SMT_0_gpio_105_smt_shift                                   (9)
#define  PINMUX_RIGHT_SMT_0_gpio_106_smt_shift                                   (8)
#define  PINMUX_RIGHT_SMT_0_gpio_107_smt_shift                                   (7)
#define  PINMUX_RIGHT_SMT_0_gpio_108_smt_shift                                   (6)
#define  PINMUX_RIGHT_SMT_0_gpio_109_smt_shift                                   (5)
#define  PINMUX_RIGHT_SMT_0_gpio_110_smt_shift                                   (4)
#define  PINMUX_RIGHT_SMT_0_gpio_111_smt_shift                                   (3)
#define  PINMUX_RIGHT_SMT_0_gpio_112_smt_shift                                   (2)
#define  PINMUX_RIGHT_SMT_0_gpio_113_smt_shift                                   (1)
#define  PINMUX_RIGHT_SMT_0_gpio_114_smt_shift                                   (0)
#define  PINMUX_RIGHT_SMT_0_gpio_83_smt_mask                                     (0x80000000)
#define  PINMUX_RIGHT_SMT_0_gpio_84_smt_mask                                     (0x40000000)
#define  PINMUX_RIGHT_SMT_0_gpio_85_smt_mask                                     (0x20000000)
#define  PINMUX_RIGHT_SMT_0_gpio_86_smt_mask                                     (0x10000000)
#define  PINMUX_RIGHT_SMT_0_gpio_87_smt_mask                                     (0x08000000)
#define  PINMUX_RIGHT_SMT_0_gpio_88_smt_mask                                     (0x04000000)
#define  PINMUX_RIGHT_SMT_0_gpio_89_smt_mask                                     (0x02000000)
#define  PINMUX_RIGHT_SMT_0_gpio_90_smt_mask                                     (0x01000000)
#define  PINMUX_RIGHT_SMT_0_gpio_91_smt_mask                                     (0x00800000)
#define  PINMUX_RIGHT_SMT_0_gpio_92_smt_mask                                     (0x00400000)
#define  PINMUX_RIGHT_SMT_0_gpio_93_smt_mask                                     (0x00200000)
#define  PINMUX_RIGHT_SMT_0_gpio_94_smt_mask                                     (0x00100000)
#define  PINMUX_RIGHT_SMT_0_gpio_95_smt_mask                                     (0x00080000)
#define  PINMUX_RIGHT_SMT_0_gpio_96_smt_mask                                     (0x00040000)
#define  PINMUX_RIGHT_SMT_0_gpio_97_smt_mask                                     (0x00020000)
#define  PINMUX_RIGHT_SMT_0_gpio_98_smt_mask                                     (0x00010000)
#define  PINMUX_RIGHT_SMT_0_gpio_99_smt_mask                                     (0x00008000)
#define  PINMUX_RIGHT_SMT_0_gpio_100_smt_mask                                    (0x00004000)
#define  PINMUX_RIGHT_SMT_0_gpio_101_smt_mask                                    (0x00002000)
#define  PINMUX_RIGHT_SMT_0_gpio_102_smt_mask                                    (0x00001000)
#define  PINMUX_RIGHT_SMT_0_gpio_103_smt_mask                                    (0x00000800)
#define  PINMUX_RIGHT_SMT_0_gpio_104_smt_mask                                    (0x00000400)
#define  PINMUX_RIGHT_SMT_0_gpio_105_smt_mask                                    (0x00000200)
#define  PINMUX_RIGHT_SMT_0_gpio_106_smt_mask                                    (0x00000100)
#define  PINMUX_RIGHT_SMT_0_gpio_107_smt_mask                                    (0x00000080)
#define  PINMUX_RIGHT_SMT_0_gpio_108_smt_mask                                    (0x00000040)
#define  PINMUX_RIGHT_SMT_0_gpio_109_smt_mask                                    (0x00000020)
#define  PINMUX_RIGHT_SMT_0_gpio_110_smt_mask                                    (0x00000010)
#define  PINMUX_RIGHT_SMT_0_gpio_111_smt_mask                                    (0x00000008)
#define  PINMUX_RIGHT_SMT_0_gpio_112_smt_mask                                    (0x00000004)
#define  PINMUX_RIGHT_SMT_0_gpio_113_smt_mask                                    (0x00000002)
#define  PINMUX_RIGHT_SMT_0_gpio_114_smt_mask                                    (0x00000001)
#define  PINMUX_RIGHT_SMT_0_gpio_83_smt(data)                                    (0x80000000&((data)<<31))
#define  PINMUX_RIGHT_SMT_0_gpio_84_smt(data)                                    (0x40000000&((data)<<30))
#define  PINMUX_RIGHT_SMT_0_gpio_85_smt(data)                                    (0x20000000&((data)<<29))
#define  PINMUX_RIGHT_SMT_0_gpio_86_smt(data)                                    (0x10000000&((data)<<28))
#define  PINMUX_RIGHT_SMT_0_gpio_87_smt(data)                                    (0x08000000&((data)<<27))
#define  PINMUX_RIGHT_SMT_0_gpio_88_smt(data)                                    (0x04000000&((data)<<26))
#define  PINMUX_RIGHT_SMT_0_gpio_89_smt(data)                                    (0x02000000&((data)<<25))
#define  PINMUX_RIGHT_SMT_0_gpio_90_smt(data)                                    (0x01000000&((data)<<24))
#define  PINMUX_RIGHT_SMT_0_gpio_91_smt(data)                                    (0x00800000&((data)<<23))
#define  PINMUX_RIGHT_SMT_0_gpio_92_smt(data)                                    (0x00400000&((data)<<22))
#define  PINMUX_RIGHT_SMT_0_gpio_93_smt(data)                                    (0x00200000&((data)<<21))
#define  PINMUX_RIGHT_SMT_0_gpio_94_smt(data)                                    (0x00100000&((data)<<20))
#define  PINMUX_RIGHT_SMT_0_gpio_95_smt(data)                                    (0x00080000&((data)<<19))
#define  PINMUX_RIGHT_SMT_0_gpio_96_smt(data)                                    (0x00040000&((data)<<18))
#define  PINMUX_RIGHT_SMT_0_gpio_97_smt(data)                                    (0x00020000&((data)<<17))
#define  PINMUX_RIGHT_SMT_0_gpio_98_smt(data)                                    (0x00010000&((data)<<16))
#define  PINMUX_RIGHT_SMT_0_gpio_99_smt(data)                                    (0x00008000&((data)<<15))
#define  PINMUX_RIGHT_SMT_0_gpio_100_smt(data)                                   (0x00004000&((data)<<14))
#define  PINMUX_RIGHT_SMT_0_gpio_101_smt(data)                                   (0x00002000&((data)<<13))
#define  PINMUX_RIGHT_SMT_0_gpio_102_smt(data)                                   (0x00001000&((data)<<12))
#define  PINMUX_RIGHT_SMT_0_gpio_103_smt(data)                                   (0x00000800&((data)<<11))
#define  PINMUX_RIGHT_SMT_0_gpio_104_smt(data)                                   (0x00000400&((data)<<10))
#define  PINMUX_RIGHT_SMT_0_gpio_105_smt(data)                                   (0x00000200&((data)<<9))
#define  PINMUX_RIGHT_SMT_0_gpio_106_smt(data)                                   (0x00000100&((data)<<8))
#define  PINMUX_RIGHT_SMT_0_gpio_107_smt(data)                                   (0x00000080&((data)<<7))
#define  PINMUX_RIGHT_SMT_0_gpio_108_smt(data)                                   (0x00000040&((data)<<6))
#define  PINMUX_RIGHT_SMT_0_gpio_109_smt(data)                                   (0x00000020&((data)<<5))
#define  PINMUX_RIGHT_SMT_0_gpio_110_smt(data)                                   (0x00000010&((data)<<4))
#define  PINMUX_RIGHT_SMT_0_gpio_111_smt(data)                                   (0x00000008&((data)<<3))
#define  PINMUX_RIGHT_SMT_0_gpio_112_smt(data)                                   (0x00000004&((data)<<2))
#define  PINMUX_RIGHT_SMT_0_gpio_113_smt(data)                                   (0x00000002&((data)<<1))
#define  PINMUX_RIGHT_SMT_0_gpio_114_smt(data)                                   (0x00000001&(data))
#define  PINMUX_RIGHT_SMT_0_get_gpio_83_smt(data)                                ((0x80000000&(data))>>31)
#define  PINMUX_RIGHT_SMT_0_get_gpio_84_smt(data)                                ((0x40000000&(data))>>30)
#define  PINMUX_RIGHT_SMT_0_get_gpio_85_smt(data)                                ((0x20000000&(data))>>29)
#define  PINMUX_RIGHT_SMT_0_get_gpio_86_smt(data)                                ((0x10000000&(data))>>28)
#define  PINMUX_RIGHT_SMT_0_get_gpio_87_smt(data)                                ((0x08000000&(data))>>27)
#define  PINMUX_RIGHT_SMT_0_get_gpio_88_smt(data)                                ((0x04000000&(data))>>26)
#define  PINMUX_RIGHT_SMT_0_get_gpio_89_smt(data)                                ((0x02000000&(data))>>25)
#define  PINMUX_RIGHT_SMT_0_get_gpio_90_smt(data)                                ((0x01000000&(data))>>24)
#define  PINMUX_RIGHT_SMT_0_get_gpio_91_smt(data)                                ((0x00800000&(data))>>23)
#define  PINMUX_RIGHT_SMT_0_get_gpio_92_smt(data)                                ((0x00400000&(data))>>22)
#define  PINMUX_RIGHT_SMT_0_get_gpio_93_smt(data)                                ((0x00200000&(data))>>21)
#define  PINMUX_RIGHT_SMT_0_get_gpio_94_smt(data)                                ((0x00100000&(data))>>20)
#define  PINMUX_RIGHT_SMT_0_get_gpio_95_smt(data)                                ((0x00080000&(data))>>19)
#define  PINMUX_RIGHT_SMT_0_get_gpio_96_smt(data)                                ((0x00040000&(data))>>18)
#define  PINMUX_RIGHT_SMT_0_get_gpio_97_smt(data)                                ((0x00020000&(data))>>17)
#define  PINMUX_RIGHT_SMT_0_get_gpio_98_smt(data)                                ((0x00010000&(data))>>16)
#define  PINMUX_RIGHT_SMT_0_get_gpio_99_smt(data)                                ((0x00008000&(data))>>15)
#define  PINMUX_RIGHT_SMT_0_get_gpio_100_smt(data)                               ((0x00004000&(data))>>14)
#define  PINMUX_RIGHT_SMT_0_get_gpio_101_smt(data)                               ((0x00002000&(data))>>13)
#define  PINMUX_RIGHT_SMT_0_get_gpio_102_smt(data)                               ((0x00001000&(data))>>12)
#define  PINMUX_RIGHT_SMT_0_get_gpio_103_smt(data)                               ((0x00000800&(data))>>11)
#define  PINMUX_RIGHT_SMT_0_get_gpio_104_smt(data)                               ((0x00000400&(data))>>10)
#define  PINMUX_RIGHT_SMT_0_get_gpio_105_smt(data)                               ((0x00000200&(data))>>9)
#define  PINMUX_RIGHT_SMT_0_get_gpio_106_smt(data)                               ((0x00000100&(data))>>8)
#define  PINMUX_RIGHT_SMT_0_get_gpio_107_smt(data)                               ((0x00000080&(data))>>7)
#define  PINMUX_RIGHT_SMT_0_get_gpio_108_smt(data)                               ((0x00000040&(data))>>6)
#define  PINMUX_RIGHT_SMT_0_get_gpio_109_smt(data)                               ((0x00000020&(data))>>5)
#define  PINMUX_RIGHT_SMT_0_get_gpio_110_smt(data)                               ((0x00000010&(data))>>4)
#define  PINMUX_RIGHT_SMT_0_get_gpio_111_smt(data)                               ((0x00000008&(data))>>3)
#define  PINMUX_RIGHT_SMT_0_get_gpio_112_smt(data)                               ((0x00000004&(data))>>2)
#define  PINMUX_RIGHT_SMT_0_get_gpio_113_smt(data)                               ((0x00000002&(data))>>1)
#define  PINMUX_RIGHT_SMT_0_get_gpio_114_smt(data)                               (0x00000001&(data))

#define  PINMUX_RIGHT_SMT_1                                                     0x180008AC
#define  PINMUX_RIGHT_SMT_1_reg_addr                                             "0xB80008AC"
#define  PINMUX_RIGHT_SMT_1_reg                                                  0xB80008AC
#define  PINMUX_RIGHT_SMT_1_inst_addr                                            "0x0034"
#define  set_PINMUX_RIGHT_SMT_1_reg(data)                                        (*((volatile unsigned int*)PINMUX_RIGHT_SMT_1_reg)=data)
#define  get_PINMUX_RIGHT_SMT_1_reg                                              (*((volatile unsigned int*)PINMUX_RIGHT_SMT_1_reg))
#define  PINMUX_RIGHT_SMT_1_gpio_115_smt_shift                                   (31)
#define  PINMUX_RIGHT_SMT_1_gpio_116_smt_shift                                   (30)
#define  PINMUX_RIGHT_SMT_1_gpio_117_smt_shift                                   (29)
#define  PINMUX_RIGHT_SMT_1_gpio_118_smt_shift                                   (28)
#define  PINMUX_RIGHT_SMT_1_gpio_119_smt_shift                                   (27)
#define  PINMUX_RIGHT_SMT_1_gpio_120_smt_shift                                   (26)
#define  PINMUX_RIGHT_SMT_1_gpio_121_smt_shift                                   (25)
#define  PINMUX_RIGHT_SMT_1_gpio_122_smt_shift                                   (24)
#define  PINMUX_RIGHT_SMT_1_gpio_123_smt_shift                                   (23)
#define  PINMUX_RIGHT_SMT_1_gpio_124_smt_shift                                   (22)
#define  PINMUX_RIGHT_SMT_1_gpio_125_smt_shift                                   (21)
#define  PINMUX_RIGHT_SMT_1_gpio_126_smt_shift                                   (20)
#define  PINMUX_RIGHT_SMT_1_gpio_127_smt_shift                                   (19)
#define  PINMUX_RIGHT_SMT_1_gpio_128_smt_shift                                   (18)
#define  PINMUX_RIGHT_SMT_1_gpio_129_smt_shift                                   (17)
#define  PINMUX_RIGHT_SMT_1_gpio_130_smt_shift                                   (16)
#define  PINMUX_RIGHT_SMT_1_gpio_131_smt_shift                                   (15)
#define  PINMUX_RIGHT_SMT_1_gpio_132_smt_shift                                   (14)
#define  PINMUX_RIGHT_SMT_1_gpio_133_smt_shift                                   (13)
#define  PINMUX_RIGHT_SMT_1_gpio_134_smt_shift                                   (12)
#define  PINMUX_RIGHT_SMT_1_gpio_135_smt_shift                                   (11)
#define  PINMUX_RIGHT_SMT_1_gpio_136_smt_shift                                   (10)
#define  PINMUX_RIGHT_SMT_1_gpio_137_smt_shift                                   (9)
#define  PINMUX_RIGHT_SMT_1_gpio_138_smt_shift                                   (8)
#define  PINMUX_RIGHT_SMT_1_gpio_151_smt_shift                                   (7)
#define  PINMUX_RIGHT_SMT_1_gpio_152_smt_shift                                   (6)
#define  PINMUX_RIGHT_SMT_1_gpio_153_smt_shift                                   (5)
#define  PINMUX_RIGHT_SMT_1_gpio_115_smt_mask                                    (0x80000000)
#define  PINMUX_RIGHT_SMT_1_gpio_116_smt_mask                                    (0x40000000)
#define  PINMUX_RIGHT_SMT_1_gpio_117_smt_mask                                    (0x20000000)
#define  PINMUX_RIGHT_SMT_1_gpio_118_smt_mask                                    (0x10000000)
#define  PINMUX_RIGHT_SMT_1_gpio_119_smt_mask                                    (0x08000000)
#define  PINMUX_RIGHT_SMT_1_gpio_120_smt_mask                                    (0x04000000)
#define  PINMUX_RIGHT_SMT_1_gpio_121_smt_mask                                    (0x02000000)
#define  PINMUX_RIGHT_SMT_1_gpio_122_smt_mask                                    (0x01000000)
#define  PINMUX_RIGHT_SMT_1_gpio_123_smt_mask                                    (0x00800000)
#define  PINMUX_RIGHT_SMT_1_gpio_124_smt_mask                                    (0x00400000)
#define  PINMUX_RIGHT_SMT_1_gpio_125_smt_mask                                    (0x00200000)
#define  PINMUX_RIGHT_SMT_1_gpio_126_smt_mask                                    (0x00100000)
#define  PINMUX_RIGHT_SMT_1_gpio_127_smt_mask                                    (0x00080000)
#define  PINMUX_RIGHT_SMT_1_gpio_128_smt_mask                                    (0x00040000)
#define  PINMUX_RIGHT_SMT_1_gpio_129_smt_mask                                    (0x00020000)
#define  PINMUX_RIGHT_SMT_1_gpio_130_smt_mask                                    (0x00010000)
#define  PINMUX_RIGHT_SMT_1_gpio_131_smt_mask                                    (0x00008000)
#define  PINMUX_RIGHT_SMT_1_gpio_132_smt_mask                                    (0x00004000)
#define  PINMUX_RIGHT_SMT_1_gpio_133_smt_mask                                    (0x00002000)
#define  PINMUX_RIGHT_SMT_1_gpio_134_smt_mask                                    (0x00001000)
#define  PINMUX_RIGHT_SMT_1_gpio_135_smt_mask                                    (0x00000800)
#define  PINMUX_RIGHT_SMT_1_gpio_136_smt_mask                                    (0x00000400)
#define  PINMUX_RIGHT_SMT_1_gpio_137_smt_mask                                    (0x00000200)
#define  PINMUX_RIGHT_SMT_1_gpio_138_smt_mask                                    (0x00000100)
#define  PINMUX_RIGHT_SMT_1_gpio_151_smt_mask                                    (0x00000080)
#define  PINMUX_RIGHT_SMT_1_gpio_152_smt_mask                                    (0x00000040)
#define  PINMUX_RIGHT_SMT_1_gpio_153_smt_mask                                    (0x00000020)
#define  PINMUX_RIGHT_SMT_1_gpio_115_smt(data)                                   (0x80000000&((data)<<31))
#define  PINMUX_RIGHT_SMT_1_gpio_116_smt(data)                                   (0x40000000&((data)<<30))
#define  PINMUX_RIGHT_SMT_1_gpio_117_smt(data)                                   (0x20000000&((data)<<29))
#define  PINMUX_RIGHT_SMT_1_gpio_118_smt(data)                                   (0x10000000&((data)<<28))
#define  PINMUX_RIGHT_SMT_1_gpio_119_smt(data)                                   (0x08000000&((data)<<27))
#define  PINMUX_RIGHT_SMT_1_gpio_120_smt(data)                                   (0x04000000&((data)<<26))
#define  PINMUX_RIGHT_SMT_1_gpio_121_smt(data)                                   (0x02000000&((data)<<25))
#define  PINMUX_RIGHT_SMT_1_gpio_122_smt(data)                                   (0x01000000&((data)<<24))
#define  PINMUX_RIGHT_SMT_1_gpio_123_smt(data)                                   (0x00800000&((data)<<23))
#define  PINMUX_RIGHT_SMT_1_gpio_124_smt(data)                                   (0x00400000&((data)<<22))
#define  PINMUX_RIGHT_SMT_1_gpio_125_smt(data)                                   (0x00200000&((data)<<21))
#define  PINMUX_RIGHT_SMT_1_gpio_126_smt(data)                                   (0x00100000&((data)<<20))
#define  PINMUX_RIGHT_SMT_1_gpio_127_smt(data)                                   (0x00080000&((data)<<19))
#define  PINMUX_RIGHT_SMT_1_gpio_128_smt(data)                                   (0x00040000&((data)<<18))
#define  PINMUX_RIGHT_SMT_1_gpio_129_smt(data)                                   (0x00020000&((data)<<17))
#define  PINMUX_RIGHT_SMT_1_gpio_130_smt(data)                                   (0x00010000&((data)<<16))
#define  PINMUX_RIGHT_SMT_1_gpio_131_smt(data)                                   (0x00008000&((data)<<15))
#define  PINMUX_RIGHT_SMT_1_gpio_132_smt(data)                                   (0x00004000&((data)<<14))
#define  PINMUX_RIGHT_SMT_1_gpio_133_smt(data)                                   (0x00002000&((data)<<13))
#define  PINMUX_RIGHT_SMT_1_gpio_134_smt(data)                                   (0x00001000&((data)<<12))
#define  PINMUX_RIGHT_SMT_1_gpio_135_smt(data)                                   (0x00000800&((data)<<11))
#define  PINMUX_RIGHT_SMT_1_gpio_136_smt(data)                                   (0x00000400&((data)<<10))
#define  PINMUX_RIGHT_SMT_1_gpio_137_smt(data)                                   (0x00000200&((data)<<9))
#define  PINMUX_RIGHT_SMT_1_gpio_138_smt(data)                                   (0x00000100&((data)<<8))
#define  PINMUX_RIGHT_SMT_1_gpio_151_smt(data)                                   (0x00000080&((data)<<7))
#define  PINMUX_RIGHT_SMT_1_gpio_152_smt(data)                                   (0x00000040&((data)<<6))
#define  PINMUX_RIGHT_SMT_1_gpio_153_smt(data)                                   (0x00000020&((data)<<5))
#define  PINMUX_RIGHT_SMT_1_get_gpio_115_smt(data)                               ((0x80000000&(data))>>31)
#define  PINMUX_RIGHT_SMT_1_get_gpio_116_smt(data)                               ((0x40000000&(data))>>30)
#define  PINMUX_RIGHT_SMT_1_get_gpio_117_smt(data)                               ((0x20000000&(data))>>29)
#define  PINMUX_RIGHT_SMT_1_get_gpio_118_smt(data)                               ((0x10000000&(data))>>28)
#define  PINMUX_RIGHT_SMT_1_get_gpio_119_smt(data)                               ((0x08000000&(data))>>27)
#define  PINMUX_RIGHT_SMT_1_get_gpio_120_smt(data)                               ((0x04000000&(data))>>26)
#define  PINMUX_RIGHT_SMT_1_get_gpio_121_smt(data)                               ((0x02000000&(data))>>25)
#define  PINMUX_RIGHT_SMT_1_get_gpio_122_smt(data)                               ((0x01000000&(data))>>24)
#define  PINMUX_RIGHT_SMT_1_get_gpio_123_smt(data)                               ((0x00800000&(data))>>23)
#define  PINMUX_RIGHT_SMT_1_get_gpio_124_smt(data)                               ((0x00400000&(data))>>22)
#define  PINMUX_RIGHT_SMT_1_get_gpio_125_smt(data)                               ((0x00200000&(data))>>21)
#define  PINMUX_RIGHT_SMT_1_get_gpio_126_smt(data)                               ((0x00100000&(data))>>20)
#define  PINMUX_RIGHT_SMT_1_get_gpio_127_smt(data)                               ((0x00080000&(data))>>19)
#define  PINMUX_RIGHT_SMT_1_get_gpio_128_smt(data)                               ((0x00040000&(data))>>18)
#define  PINMUX_RIGHT_SMT_1_get_gpio_129_smt(data)                               ((0x00020000&(data))>>17)
#define  PINMUX_RIGHT_SMT_1_get_gpio_130_smt(data)                               ((0x00010000&(data))>>16)
#define  PINMUX_RIGHT_SMT_1_get_gpio_131_smt(data)                               ((0x00008000&(data))>>15)
#define  PINMUX_RIGHT_SMT_1_get_gpio_132_smt(data)                               ((0x00004000&(data))>>14)
#define  PINMUX_RIGHT_SMT_1_get_gpio_133_smt(data)                               ((0x00002000&(data))>>13)
#define  PINMUX_RIGHT_SMT_1_get_gpio_134_smt(data)                               ((0x00001000&(data))>>12)
#define  PINMUX_RIGHT_SMT_1_get_gpio_135_smt(data)                               ((0x00000800&(data))>>11)
#define  PINMUX_RIGHT_SMT_1_get_gpio_136_smt(data)                               ((0x00000400&(data))>>10)
#define  PINMUX_RIGHT_SMT_1_get_gpio_137_smt(data)                               ((0x00000200&(data))>>9)
#define  PINMUX_RIGHT_SMT_1_get_gpio_138_smt(data)                               ((0x00000100&(data))>>8)
#define  PINMUX_RIGHT_SMT_1_get_gpio_151_smt(data)                               ((0x00000080&(data))>>7)
#define  PINMUX_RIGHT_SMT_1_get_gpio_152_smt(data)                               ((0x00000040&(data))>>6)
#define  PINMUX_RIGHT_SMT_1_get_gpio_153_smt(data)                               ((0x00000020&(data))>>5)

#define  PINMUX_GPIO_EMMCCLK_CFG_0                                              0x180008B0
#define  PINMUX_GPIO_EMMCCLK_CFG_0_reg_addr                                      "0xB80008B0"
#define  PINMUX_GPIO_EMMCCLK_CFG_0_reg                                           0xB80008B0
#define  PINMUX_GPIO_EMMCCLK_CFG_0_inst_addr                                     "0x0035"
#define  set_PINMUX_GPIO_EMMCCLK_CFG_0_reg(data)                                 (*((volatile unsigned int*)PINMUX_GPIO_EMMCCLK_CFG_0_reg)=data)
#define  get_PINMUX_GPIO_EMMCCLK_CFG_0_reg                                       (*((volatile unsigned int*)PINMUX_GPIO_EMMCCLK_CFG_0_reg))
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_rst_n_ps_shift                           (28)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_clk_ps_shift                             (20)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_cmd_ps_shift                             (12)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_rst_n_ps_mask                            (0xF0000000)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_clk_ps_mask                              (0x00F00000)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_cmd_ps_mask                              (0x0000F000)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_rst_n_ps(data)                           (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_clk_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_EMMCCLK_CFG_0_emmc_cmd_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_EMMCCLK_CFG_0_get_emmc_rst_n_ps(data)                       ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_get_emmc_clk_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_EMMCCLK_CFG_0_get_emmc_cmd_ps(data)                         ((0x0000F000&(data))>>12)

#define  PINMUX_GPIO_EMMC_CFG_0                                                 0x180008B4
#define  PINMUX_GPIO_EMMC_CFG_0_reg_addr                                         "0xB80008B4"
#define  PINMUX_GPIO_EMMC_CFG_0_reg                                              0xB80008B4
#define  PINMUX_GPIO_EMMC_CFG_0_inst_addr                                        "0x0036"
#define  set_PINMUX_GPIO_EMMC_CFG_0_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_EMMC_CFG_0_reg)=data)
#define  get_PINMUX_GPIO_EMMC_CFG_0_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_EMMC_CFG_0_reg))
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_ds_ps_shift                                 (28)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d5_ps_shift                                 (20)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d3_ps_shift                                 (12)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d4_ps_shift                                 (4)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_ds_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d5_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d3_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d4_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_ds_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d5_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d3_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_EMMC_CFG_0_emmc_d4_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_EMMC_CFG_0_get_emmc_ds_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_EMMC_CFG_0_get_emmc_d5_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_EMMC_CFG_0_get_emmc_d3_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_EMMC_CFG_0_get_emmc_d4_ps(data)                             ((0x000000F0&(data))>>4)

#define  PINMUX_GPIO_EMMC_CFG_1                                                 0x180008B8
#define  PINMUX_GPIO_EMMC_CFG_1_reg_addr                                         "0xB80008B8"
#define  PINMUX_GPIO_EMMC_CFG_1_reg                                              0xB80008B8
#define  PINMUX_GPIO_EMMC_CFG_1_inst_addr                                        "0x0037"
#define  set_PINMUX_GPIO_EMMC_CFG_1_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_EMMC_CFG_1_reg)=data)
#define  get_PINMUX_GPIO_EMMC_CFG_1_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_EMMC_CFG_1_reg))
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d0_ps_shift                                 (28)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d1_ps_shift                                 (20)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d2_ps_shift                                 (12)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d7_ps_shift                                 (4)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d0_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d1_ps_mask                                  (0x00F00000)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d2_ps_mask                                  (0x0000F000)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d7_ps_mask                                  (0x000000F0)
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d0_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d1_ps(data)                                 (0x00F00000&((data)<<20))
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d2_ps(data)                                 (0x0000F000&((data)<<12))
#define  PINMUX_GPIO_EMMC_CFG_1_emmc_d7_ps(data)                                 (0x000000F0&((data)<<4))
#define  PINMUX_GPIO_EMMC_CFG_1_get_emmc_d0_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_EMMC_CFG_1_get_emmc_d1_ps(data)                             ((0x00F00000&(data))>>20)
#define  PINMUX_GPIO_EMMC_CFG_1_get_emmc_d2_ps(data)                             ((0x0000F000&(data))>>12)
#define  PINMUX_GPIO_EMMC_CFG_1_get_emmc_d7_ps(data)                             ((0x000000F0&(data))>>4)

#define  PINMUX_GPIO_EMMC_CFG_2                                                 0x180008BC
#define  PINMUX_GPIO_EMMC_CFG_2_reg_addr                                         "0xB80008BC"
#define  PINMUX_GPIO_EMMC_CFG_2_reg                                              0xB80008BC
#define  PINMUX_GPIO_EMMC_CFG_2_inst_addr                                        "0x0038"
#define  set_PINMUX_GPIO_EMMC_CFG_2_reg(data)                                    (*((volatile unsigned int*)PINMUX_GPIO_EMMC_CFG_2_reg)=data)
#define  get_PINMUX_GPIO_EMMC_CFG_2_reg                                          (*((volatile unsigned int*)PINMUX_GPIO_EMMC_CFG_2_reg))
#define  PINMUX_GPIO_EMMC_CFG_2_emmc_d6_ps_shift                                 (28)
#define  PINMUX_GPIO_EMMC_CFG_2_emmc_sel_shift                                   (0)
#define  PINMUX_GPIO_EMMC_CFG_2_emmc_d6_ps_mask                                  (0xF0000000)
#define  PINMUX_GPIO_EMMC_CFG_2_emmc_sel_mask                                    (0x00000001)
#define  PINMUX_GPIO_EMMC_CFG_2_emmc_d6_ps(data)                                 (0xF0000000&((data)<<28))
#define  PINMUX_GPIO_EMMC_CFG_2_emmc_sel(data)                                   (0x00000001&(data))
#define  PINMUX_GPIO_EMMC_CFG_2_get_emmc_d6_ps(data)                             ((0xF0000000&(data))>>28)
#define  PINMUX_GPIO_EMMC_CFG_2_get_emmc_sel(data)                               (0x00000001&(data))

#define  PINMUX_EMMCCLK_CFG_0                                                   0x180108A0
#define  PINMUX_EMMCCLK_CFG_0_reg_addr                                           "0xB80108A0"
#define  PINMUX_EMMCCLK_CFG_0_reg                                                0xB80108A0
#define  PINMUX_EMMCCLK_CFG_0_inst_addr                                          "0x0039"
#define  set_PINMUX_EMMCCLK_CFG_0_reg(data)                                      (*((volatile unsigned int*)PINMUX_EMMCCLK_CFG_0_reg)=data)
#define  get_PINMUX_EMMCCLK_CFG_0_reg                                            (*((volatile unsigned int*)PINMUX_EMMCCLK_CFG_0_reg))
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_pu_shift                                (31)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_pd_shift                                (30)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_sr_shift                                (29)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_smt_shift                               (28)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_pu_shift                                  (27)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_pd_shift                                  (26)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_sr_shift                                  (25)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_smt_shift                                 (24)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_pu_shift                                  (23)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_pd_shift                                  (22)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_sr_shift                                  (21)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_smt_shift                                 (20)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_pu_mask                                 (0x80000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_pd_mask                                 (0x40000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_sr_mask                                 (0x20000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_smt_mask                                (0x10000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_pu_mask                                   (0x08000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_pd_mask                                   (0x04000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_sr_mask                                   (0x02000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_smt_mask                                  (0x01000000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_pu_mask                                   (0x00800000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_pd_mask                                   (0x00400000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_sr_mask                                   (0x00200000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_smt_mask                                  (0x00100000)
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_pu(data)                                (0x80000000&((data)<<31))
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_pd(data)                                (0x40000000&((data)<<30))
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_sr(data)                                (0x20000000&((data)<<29))
#define  PINMUX_EMMCCLK_CFG_0_emmc_rst_n_smt(data)                               (0x10000000&((data)<<28))
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_pu(data)                                  (0x08000000&((data)<<27))
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_pd(data)                                  (0x04000000&((data)<<26))
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_sr(data)                                  (0x02000000&((data)<<25))
#define  PINMUX_EMMCCLK_CFG_0_emmc_clk_smt(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_pu(data)                                  (0x00800000&((data)<<23))
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_pd(data)                                  (0x00400000&((data)<<22))
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_sr(data)                                  (0x00200000&((data)<<21))
#define  PINMUX_EMMCCLK_CFG_0_emmc_cmd_smt(data)                                 (0x00100000&((data)<<20))
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_rst_n_pu(data)                            ((0x80000000&(data))>>31)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_rst_n_pd(data)                            ((0x40000000&(data))>>30)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_rst_n_sr(data)                            ((0x20000000&(data))>>29)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_rst_n_smt(data)                           ((0x10000000&(data))>>28)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_clk_pu(data)                              ((0x08000000&(data))>>27)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_clk_pd(data)                              ((0x04000000&(data))>>26)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_clk_sr(data)                              ((0x02000000&(data))>>25)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_clk_smt(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_cmd_pu(data)                              ((0x00800000&(data))>>23)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_cmd_pd(data)                              ((0x00400000&(data))>>22)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_cmd_sr(data)                              ((0x00200000&(data))>>21)
#define  PINMUX_EMMCCLK_CFG_0_get_emmc_cmd_smt(data)                             ((0x00100000&(data))>>20)

#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0                                         0x180108A4
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_reg_addr                                 "0xB80108A4"
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_reg                                      0xB80108A4
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_inst_addr                                "0x003A"
#define  set_PINMUX_EMMCCLK_EXTRACFG_NP4E_0_reg(data)                            (*((volatile unsigned int*)PINMUX_EMMCCLK_EXTRACFG_NP4E_0_reg)=data)
#define  get_PINMUX_EMMCCLK_EXTRACFG_NP4E_0_reg                                  (*((volatile unsigned int*)PINMUX_EMMCCLK_EXTRACFG_NP4E_0_reg))
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_rst_n_ds_shift                      (26)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_rst_n_dc_shift                      (23)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_clk_ds_shift                        (17)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_clk_dc_shift                        (14)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_cmd_ds_shift                        (8)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_cmd_dc_shift                        (5)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_rst_n_ds_mask                       (0xFC000000)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_rst_n_dc_mask                       (0x03800000)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_clk_ds_mask                         (0x007E0000)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_clk_dc_mask                         (0x0001C000)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_cmd_ds_mask                         (0x00003F00)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_cmd_dc_mask                         (0x000000E0)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_rst_n_ds(data)                      (0xFC000000&((data)<<26))
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_rst_n_dc(data)                      (0x03800000&((data)<<23))
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_clk_ds(data)                        (0x007E0000&((data)<<17))
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_clk_dc(data)                        (0x0001C000&((data)<<14))
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_cmd_ds(data)                        (0x00003F00&((data)<<8))
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_emmc_cmd_dc(data)                        (0x000000E0&((data)<<5))
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_get_emmc_rst_n_ds(data)                  ((0xFC000000&(data))>>26)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_get_emmc_rst_n_dc(data)                  ((0x03800000&(data))>>23)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_get_emmc_clk_ds(data)                    ((0x007E0000&(data))>>17)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_get_emmc_clk_dc(data)                    ((0x0001C000&(data))>>14)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_get_emmc_cmd_ds(data)                    ((0x00003F00&(data))>>8)
#define  PINMUX_EMMCCLK_EXTRACFG_NP4E_0_get_emmc_cmd_dc(data)                    ((0x000000E0&(data))>>5)

#define  PINMUX_EMMC_CFG_0                                                      0x180108A8
#define  PINMUX_EMMC_CFG_0_reg_addr                                              "0xB80108A8"
#define  PINMUX_EMMC_CFG_0_reg                                                   0xB80108A8
#define  PINMUX_EMMC_CFG_0_inst_addr                                             "0x003B"
#define  set_PINMUX_EMMC_CFG_0_reg(data)                                         (*((volatile unsigned int*)PINMUX_EMMC_CFG_0_reg)=data)
#define  get_PINMUX_EMMC_CFG_0_reg                                               (*((volatile unsigned int*)PINMUX_EMMC_CFG_0_reg))
#define  PINMUX_EMMC_CFG_0_emmc_ds_pu_shift                                      (31)
#define  PINMUX_EMMC_CFG_0_emmc_ds_pd_shift                                      (30)
#define  PINMUX_EMMC_CFG_0_emmc_ds_sr_shift                                      (29)
#define  PINMUX_EMMC_CFG_0_emmc_ds_smt_shift                                     (28)
#define  PINMUX_EMMC_CFG_0_emmc_d5_pu_shift                                      (27)
#define  PINMUX_EMMC_CFG_0_emmc_d5_pd_shift                                      (26)
#define  PINMUX_EMMC_CFG_0_emmc_d5_sr_shift                                      (25)
#define  PINMUX_EMMC_CFG_0_emmc_d5_smt_shift                                     (24)
#define  PINMUX_EMMC_CFG_0_emmc_d3_pu_shift                                      (23)
#define  PINMUX_EMMC_CFG_0_emmc_d3_pd_shift                                      (22)
#define  PINMUX_EMMC_CFG_0_emmc_d3_sr_shift                                      (21)
#define  PINMUX_EMMC_CFG_0_emmc_d3_smt_shift                                     (20)
#define  PINMUX_EMMC_CFG_0_emmc_d4_pu_shift                                      (19)
#define  PINMUX_EMMC_CFG_0_emmc_d4_pd_shift                                      (18)
#define  PINMUX_EMMC_CFG_0_emmc_d4_sr_shift                                      (17)
#define  PINMUX_EMMC_CFG_0_emmc_d4_smt_shift                                     (16)
#define  PINMUX_EMMC_CFG_0_emmc_d0_pu_shift                                      (15)
#define  PINMUX_EMMC_CFG_0_emmc_d0_pd_shift                                      (14)
#define  PINMUX_EMMC_CFG_0_emmc_d0_sr_shift                                      (13)
#define  PINMUX_EMMC_CFG_0_emmc_d0_smt_shift                                     (12)
#define  PINMUX_EMMC_CFG_0_emmc_d1_pu_shift                                      (11)
#define  PINMUX_EMMC_CFG_0_emmc_d1_pd_shift                                      (10)
#define  PINMUX_EMMC_CFG_0_emmc_d1_sr_shift                                      (9)
#define  PINMUX_EMMC_CFG_0_emmc_d1_smt_shift                                     (8)
#define  PINMUX_EMMC_CFG_0_emmc_d2_pu_shift                                      (7)
#define  PINMUX_EMMC_CFG_0_emmc_d2_pd_shift                                      (6)
#define  PINMUX_EMMC_CFG_0_emmc_d2_sr_shift                                      (5)
#define  PINMUX_EMMC_CFG_0_emmc_d2_smt_shift                                     (4)
#define  PINMUX_EMMC_CFG_0_emmc_d7_pu_shift                                      (3)
#define  PINMUX_EMMC_CFG_0_emmc_d7_pd_shift                                      (2)
#define  PINMUX_EMMC_CFG_0_emmc_d7_sr_shift                                      (1)
#define  PINMUX_EMMC_CFG_0_emmc_d7_smt_shift                                     (0)
#define  PINMUX_EMMC_CFG_0_emmc_ds_pu_mask                                       (0x80000000)
#define  PINMUX_EMMC_CFG_0_emmc_ds_pd_mask                                       (0x40000000)
#define  PINMUX_EMMC_CFG_0_emmc_ds_sr_mask                                       (0x20000000)
#define  PINMUX_EMMC_CFG_0_emmc_ds_smt_mask                                      (0x10000000)
#define  PINMUX_EMMC_CFG_0_emmc_d5_pu_mask                                       (0x08000000)
#define  PINMUX_EMMC_CFG_0_emmc_d5_pd_mask                                       (0x04000000)
#define  PINMUX_EMMC_CFG_0_emmc_d5_sr_mask                                       (0x02000000)
#define  PINMUX_EMMC_CFG_0_emmc_d5_smt_mask                                      (0x01000000)
#define  PINMUX_EMMC_CFG_0_emmc_d3_pu_mask                                       (0x00800000)
#define  PINMUX_EMMC_CFG_0_emmc_d3_pd_mask                                       (0x00400000)
#define  PINMUX_EMMC_CFG_0_emmc_d3_sr_mask                                       (0x00200000)
#define  PINMUX_EMMC_CFG_0_emmc_d3_smt_mask                                      (0x00100000)
#define  PINMUX_EMMC_CFG_0_emmc_d4_pu_mask                                       (0x00080000)
#define  PINMUX_EMMC_CFG_0_emmc_d4_pd_mask                                       (0x00040000)
#define  PINMUX_EMMC_CFG_0_emmc_d4_sr_mask                                       (0x00020000)
#define  PINMUX_EMMC_CFG_0_emmc_d4_smt_mask                                      (0x00010000)
#define  PINMUX_EMMC_CFG_0_emmc_d0_pu_mask                                       (0x00008000)
#define  PINMUX_EMMC_CFG_0_emmc_d0_pd_mask                                       (0x00004000)
#define  PINMUX_EMMC_CFG_0_emmc_d0_sr_mask                                       (0x00002000)
#define  PINMUX_EMMC_CFG_0_emmc_d0_smt_mask                                      (0x00001000)
#define  PINMUX_EMMC_CFG_0_emmc_d1_pu_mask                                       (0x00000800)
#define  PINMUX_EMMC_CFG_0_emmc_d1_pd_mask                                       (0x00000400)
#define  PINMUX_EMMC_CFG_0_emmc_d1_sr_mask                                       (0x00000200)
#define  PINMUX_EMMC_CFG_0_emmc_d1_smt_mask                                      (0x00000100)
#define  PINMUX_EMMC_CFG_0_emmc_d2_pu_mask                                       (0x00000080)
#define  PINMUX_EMMC_CFG_0_emmc_d2_pd_mask                                       (0x00000040)
#define  PINMUX_EMMC_CFG_0_emmc_d2_sr_mask                                       (0x00000020)
#define  PINMUX_EMMC_CFG_0_emmc_d2_smt_mask                                      (0x00000010)
#define  PINMUX_EMMC_CFG_0_emmc_d7_pu_mask                                       (0x00000008)
#define  PINMUX_EMMC_CFG_0_emmc_d7_pd_mask                                       (0x00000004)
#define  PINMUX_EMMC_CFG_0_emmc_d7_sr_mask                                       (0x00000002)
#define  PINMUX_EMMC_CFG_0_emmc_d7_smt_mask                                      (0x00000001)
#define  PINMUX_EMMC_CFG_0_emmc_ds_pu(data)                                      (0x80000000&((data)<<31))
#define  PINMUX_EMMC_CFG_0_emmc_ds_pd(data)                                      (0x40000000&((data)<<30))
#define  PINMUX_EMMC_CFG_0_emmc_ds_sr(data)                                      (0x20000000&((data)<<29))
#define  PINMUX_EMMC_CFG_0_emmc_ds_smt(data)                                     (0x10000000&((data)<<28))
#define  PINMUX_EMMC_CFG_0_emmc_d5_pu(data)                                      (0x08000000&((data)<<27))
#define  PINMUX_EMMC_CFG_0_emmc_d5_pd(data)                                      (0x04000000&((data)<<26))
#define  PINMUX_EMMC_CFG_0_emmc_d5_sr(data)                                      (0x02000000&((data)<<25))
#define  PINMUX_EMMC_CFG_0_emmc_d5_smt(data)                                     (0x01000000&((data)<<24))
#define  PINMUX_EMMC_CFG_0_emmc_d3_pu(data)                                      (0x00800000&((data)<<23))
#define  PINMUX_EMMC_CFG_0_emmc_d3_pd(data)                                      (0x00400000&((data)<<22))
#define  PINMUX_EMMC_CFG_0_emmc_d3_sr(data)                                      (0x00200000&((data)<<21))
#define  PINMUX_EMMC_CFG_0_emmc_d3_smt(data)                                     (0x00100000&((data)<<20))
#define  PINMUX_EMMC_CFG_0_emmc_d4_pu(data)                                      (0x00080000&((data)<<19))
#define  PINMUX_EMMC_CFG_0_emmc_d4_pd(data)                                      (0x00040000&((data)<<18))
#define  PINMUX_EMMC_CFG_0_emmc_d4_sr(data)                                      (0x00020000&((data)<<17))
#define  PINMUX_EMMC_CFG_0_emmc_d4_smt(data)                                     (0x00010000&((data)<<16))
#define  PINMUX_EMMC_CFG_0_emmc_d0_pu(data)                                      (0x00008000&((data)<<15))
#define  PINMUX_EMMC_CFG_0_emmc_d0_pd(data)                                      (0x00004000&((data)<<14))
#define  PINMUX_EMMC_CFG_0_emmc_d0_sr(data)                                      (0x00002000&((data)<<13))
#define  PINMUX_EMMC_CFG_0_emmc_d0_smt(data)                                     (0x00001000&((data)<<12))
#define  PINMUX_EMMC_CFG_0_emmc_d1_pu(data)                                      (0x00000800&((data)<<11))
#define  PINMUX_EMMC_CFG_0_emmc_d1_pd(data)                                      (0x00000400&((data)<<10))
#define  PINMUX_EMMC_CFG_0_emmc_d1_sr(data)                                      (0x00000200&((data)<<9))
#define  PINMUX_EMMC_CFG_0_emmc_d1_smt(data)                                     (0x00000100&((data)<<8))
#define  PINMUX_EMMC_CFG_0_emmc_d2_pu(data)                                      (0x00000080&((data)<<7))
#define  PINMUX_EMMC_CFG_0_emmc_d2_pd(data)                                      (0x00000040&((data)<<6))
#define  PINMUX_EMMC_CFG_0_emmc_d2_sr(data)                                      (0x00000020&((data)<<5))
#define  PINMUX_EMMC_CFG_0_emmc_d2_smt(data)                                     (0x00000010&((data)<<4))
#define  PINMUX_EMMC_CFG_0_emmc_d7_pu(data)                                      (0x00000008&((data)<<3))
#define  PINMUX_EMMC_CFG_0_emmc_d7_pd(data)                                      (0x00000004&((data)<<2))
#define  PINMUX_EMMC_CFG_0_emmc_d7_sr(data)                                      (0x00000002&((data)<<1))
#define  PINMUX_EMMC_CFG_0_emmc_d7_smt(data)                                     (0x00000001&(data))
#define  PINMUX_EMMC_CFG_0_get_emmc_ds_pu(data)                                  ((0x80000000&(data))>>31)
#define  PINMUX_EMMC_CFG_0_get_emmc_ds_pd(data)                                  ((0x40000000&(data))>>30)
#define  PINMUX_EMMC_CFG_0_get_emmc_ds_sr(data)                                  ((0x20000000&(data))>>29)
#define  PINMUX_EMMC_CFG_0_get_emmc_ds_smt(data)                                 ((0x10000000&(data))>>28)
#define  PINMUX_EMMC_CFG_0_get_emmc_d5_pu(data)                                  ((0x08000000&(data))>>27)
#define  PINMUX_EMMC_CFG_0_get_emmc_d5_pd(data)                                  ((0x04000000&(data))>>26)
#define  PINMUX_EMMC_CFG_0_get_emmc_d5_sr(data)                                  ((0x02000000&(data))>>25)
#define  PINMUX_EMMC_CFG_0_get_emmc_d5_smt(data)                                 ((0x01000000&(data))>>24)
#define  PINMUX_EMMC_CFG_0_get_emmc_d3_pu(data)                                  ((0x00800000&(data))>>23)
#define  PINMUX_EMMC_CFG_0_get_emmc_d3_pd(data)                                  ((0x00400000&(data))>>22)
#define  PINMUX_EMMC_CFG_0_get_emmc_d3_sr(data)                                  ((0x00200000&(data))>>21)
#define  PINMUX_EMMC_CFG_0_get_emmc_d3_smt(data)                                 ((0x00100000&(data))>>20)
#define  PINMUX_EMMC_CFG_0_get_emmc_d4_pu(data)                                  ((0x00080000&(data))>>19)
#define  PINMUX_EMMC_CFG_0_get_emmc_d4_pd(data)                                  ((0x00040000&(data))>>18)
#define  PINMUX_EMMC_CFG_0_get_emmc_d4_sr(data)                                  ((0x00020000&(data))>>17)
#define  PINMUX_EMMC_CFG_0_get_emmc_d4_smt(data)                                 ((0x00010000&(data))>>16)
#define  PINMUX_EMMC_CFG_0_get_emmc_d0_pu(data)                                  ((0x00008000&(data))>>15)
#define  PINMUX_EMMC_CFG_0_get_emmc_d0_pd(data)                                  ((0x00004000&(data))>>14)
#define  PINMUX_EMMC_CFG_0_get_emmc_d0_sr(data)                                  ((0x00002000&(data))>>13)
#define  PINMUX_EMMC_CFG_0_get_emmc_d0_smt(data)                                 ((0x00001000&(data))>>12)
#define  PINMUX_EMMC_CFG_0_get_emmc_d1_pu(data)                                  ((0x00000800&(data))>>11)
#define  PINMUX_EMMC_CFG_0_get_emmc_d1_pd(data)                                  ((0x00000400&(data))>>10)
#define  PINMUX_EMMC_CFG_0_get_emmc_d1_sr(data)                                  ((0x00000200&(data))>>9)
#define  PINMUX_EMMC_CFG_0_get_emmc_d1_smt(data)                                 ((0x00000100&(data))>>8)
#define  PINMUX_EMMC_CFG_0_get_emmc_d2_pu(data)                                  ((0x00000080&(data))>>7)
#define  PINMUX_EMMC_CFG_0_get_emmc_d2_pd(data)                                  ((0x00000040&(data))>>6)
#define  PINMUX_EMMC_CFG_0_get_emmc_d2_sr(data)                                  ((0x00000020&(data))>>5)
#define  PINMUX_EMMC_CFG_0_get_emmc_d2_smt(data)                                 ((0x00000010&(data))>>4)
#define  PINMUX_EMMC_CFG_0_get_emmc_d7_pu(data)                                  ((0x00000008&(data))>>3)
#define  PINMUX_EMMC_CFG_0_get_emmc_d7_pd(data)                                  ((0x00000004&(data))>>2)
#define  PINMUX_EMMC_CFG_0_get_emmc_d7_sr(data)                                  ((0x00000002&(data))>>1)
#define  PINMUX_EMMC_CFG_0_get_emmc_d7_smt(data)                                 (0x00000001&(data))

#define  PINMUX_EMMC_CFG_1                                                      0x180108AC
#define  PINMUX_EMMC_CFG_1_reg_addr                                              "0xB80108AC"
#define  PINMUX_EMMC_CFG_1_reg                                                   0xB80108AC
#define  PINMUX_EMMC_CFG_1_inst_addr                                             "0x003C"
#define  set_PINMUX_EMMC_CFG_1_reg(data)                                         (*((volatile unsigned int*)PINMUX_EMMC_CFG_1_reg)=data)
#define  get_PINMUX_EMMC_CFG_1_reg                                               (*((volatile unsigned int*)PINMUX_EMMC_CFG_1_reg))
#define  PINMUX_EMMC_CFG_1_emmc_d6_pu_shift                                      (31)
#define  PINMUX_EMMC_CFG_1_emmc_d6_pd_shift                                      (30)
#define  PINMUX_EMMC_CFG_1_emmc_d6_sr_shift                                      (29)
#define  PINMUX_EMMC_CFG_1_emmc_d6_smt_shift                                     (28)
#define  PINMUX_EMMC_CFG_1_emmc_d6_pu_mask                                       (0x80000000)
#define  PINMUX_EMMC_CFG_1_emmc_d6_pd_mask                                       (0x40000000)
#define  PINMUX_EMMC_CFG_1_emmc_d6_sr_mask                                       (0x20000000)
#define  PINMUX_EMMC_CFG_1_emmc_d6_smt_mask                                      (0x10000000)
#define  PINMUX_EMMC_CFG_1_emmc_d6_pu(data)                                      (0x80000000&((data)<<31))
#define  PINMUX_EMMC_CFG_1_emmc_d6_pd(data)                                      (0x40000000&((data)<<30))
#define  PINMUX_EMMC_CFG_1_emmc_d6_sr(data)                                      (0x20000000&((data)<<29))
#define  PINMUX_EMMC_CFG_1_emmc_d6_smt(data)                                     (0x10000000&((data)<<28))
#define  PINMUX_EMMC_CFG_1_get_emmc_d6_pu(data)                                  ((0x80000000&(data))>>31)
#define  PINMUX_EMMC_CFG_1_get_emmc_d6_pd(data)                                  ((0x40000000&(data))>>30)
#define  PINMUX_EMMC_CFG_1_get_emmc_d6_sr(data)                                  ((0x20000000&(data))>>29)
#define  PINMUX_EMMC_CFG_1_get_emmc_d6_smt(data)                                 ((0x10000000&(data))>>28)

#define  PINMUX_EMMC_EXTRACFG_NP4E_0                                            0x180108B0
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_reg_addr                                    "0xB80108B0"
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_reg                                         0xB80108B0
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_inst_addr                                   "0x003D"
#define  set_PINMUX_EMMC_EXTRACFG_NP4E_0_reg(data)                               (*((volatile unsigned int*)PINMUX_EMMC_EXTRACFG_NP4E_0_reg)=data)
#define  get_PINMUX_EMMC_EXTRACFG_NP4E_0_reg                                     (*((volatile unsigned int*)PINMUX_EMMC_EXTRACFG_NP4E_0_reg))
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_ds_ds_shift                            (26)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_ds_dc_shift                            (23)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d5_ds_shift                            (17)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d5_dc_shift                            (14)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d3_ds_shift                            (8)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d3_dc_shift                            (5)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_ds_ds_mask                             (0xFC000000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_ds_dc_mask                             (0x03800000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d5_ds_mask                             (0x007E0000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d5_dc_mask                             (0x0001C000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d3_ds_mask                             (0x00003F00)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d3_dc_mask                             (0x000000E0)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_ds_ds(data)                            (0xFC000000&((data)<<26))
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_ds_dc(data)                            (0x03800000&((data)<<23))
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d5_ds(data)                            (0x007E0000&((data)<<17))
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d5_dc(data)                            (0x0001C000&((data)<<14))
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d3_ds(data)                            (0x00003F00&((data)<<8))
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_emmc_d3_dc(data)                            (0x000000E0&((data)<<5))
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_get_emmc_ds_ds(data)                        ((0xFC000000&(data))>>26)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_get_emmc_ds_dc(data)                        ((0x03800000&(data))>>23)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_get_emmc_d5_ds(data)                        ((0x007E0000&(data))>>17)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_get_emmc_d5_dc(data)                        ((0x0001C000&(data))>>14)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_get_emmc_d3_ds(data)                        ((0x00003F00&(data))>>8)
#define  PINMUX_EMMC_EXTRACFG_NP4E_0_get_emmc_d3_dc(data)                        ((0x000000E0&(data))>>5)

#define  PINMUX_EMMC_EXTRACFG_NP4E_1                                            0x180108B4
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_reg_addr                                    "0xB80108B4"
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_reg                                         0xB80108B4
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_inst_addr                                   "0x003E"
#define  set_PINMUX_EMMC_EXTRACFG_NP4E_1_reg(data)                               (*((volatile unsigned int*)PINMUX_EMMC_EXTRACFG_NP4E_1_reg)=data)
#define  get_PINMUX_EMMC_EXTRACFG_NP4E_1_reg                                     (*((volatile unsigned int*)PINMUX_EMMC_EXTRACFG_NP4E_1_reg))
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d4_ds_shift                            (26)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d4_dc_shift                            (23)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d0_ds_shift                            (17)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d0_dc_shift                            (14)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d1_ds_shift                            (8)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d1_dc_shift                            (5)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d4_ds_mask                             (0xFC000000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d4_dc_mask                             (0x03800000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d0_ds_mask                             (0x007E0000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d0_dc_mask                             (0x0001C000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d1_ds_mask                             (0x00003F00)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d1_dc_mask                             (0x000000E0)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d4_ds(data)                            (0xFC000000&((data)<<26))
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d4_dc(data)                            (0x03800000&((data)<<23))
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d0_ds(data)                            (0x007E0000&((data)<<17))
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d0_dc(data)                            (0x0001C000&((data)<<14))
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d1_ds(data)                            (0x00003F00&((data)<<8))
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_emmc_d1_dc(data)                            (0x000000E0&((data)<<5))
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_get_emmc_d4_ds(data)                        ((0xFC000000&(data))>>26)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_get_emmc_d4_dc(data)                        ((0x03800000&(data))>>23)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_get_emmc_d0_ds(data)                        ((0x007E0000&(data))>>17)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_get_emmc_d0_dc(data)                        ((0x0001C000&(data))>>14)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_get_emmc_d1_ds(data)                        ((0x00003F00&(data))>>8)
#define  PINMUX_EMMC_EXTRACFG_NP4E_1_get_emmc_d1_dc(data)                        ((0x000000E0&(data))>>5)

#define  PINMUX_EMMC_EXTRACFG_NP4E_2                                            0x180108B8
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_reg_addr                                    "0xB80108B8"
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_reg                                         0xB80108B8
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_inst_addr                                   "0x003F"
#define  set_PINMUX_EMMC_EXTRACFG_NP4E_2_reg(data)                               (*((volatile unsigned int*)PINMUX_EMMC_EXTRACFG_NP4E_2_reg)=data)
#define  get_PINMUX_EMMC_EXTRACFG_NP4E_2_reg                                     (*((volatile unsigned int*)PINMUX_EMMC_EXTRACFG_NP4E_2_reg))
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d2_ds_shift                            (26)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d2_dc_shift                            (23)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d7_ds_shift                            (17)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d7_dc_shift                            (14)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d6_ds_shift                            (8)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d6_dc_shift                            (5)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d2_ds_mask                             (0xFC000000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d2_dc_mask                             (0x03800000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d7_ds_mask                             (0x007E0000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d7_dc_mask                             (0x0001C000)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d6_ds_mask                             (0x00003F00)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d6_dc_mask                             (0x000000E0)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d2_ds(data)                            (0xFC000000&((data)<<26))
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d2_dc(data)                            (0x03800000&((data)<<23))
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d7_ds(data)                            (0x007E0000&((data)<<17))
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d7_dc(data)                            (0x0001C000&((data)<<14))
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d6_ds(data)                            (0x00003F00&((data)<<8))
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_emmc_d6_dc(data)                            (0x000000E0&((data)<<5))
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_get_emmc_d2_ds(data)                        ((0xFC000000&(data))>>26)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_get_emmc_d2_dc(data)                        ((0x03800000&(data))>>23)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_get_emmc_d7_ds(data)                        ((0x007E0000&(data))>>17)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_get_emmc_d7_dc(data)                        ((0x0001C000&(data))>>14)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_get_emmc_d6_ds(data)                        ((0x00003F00&(data))>>8)
#define  PINMUX_EMMC_EXTRACFG_NP4E_2_get_emmc_d6_dc(data)                        ((0x000000E0&(data))>>5)

#define  PINMUX_PIF_3                                                           0x18000CAC
#define  PINMUX_PIF_3_reg_addr                                                   "0xB8000CAC"
#define  PINMUX_PIF_3_reg                                                        0xB8000CAC
#define  PINMUX_PIF_3_inst_addr                                                  "0x0040"
#define  set_PINMUX_PIF_3_reg(data)                                              (*((volatile unsigned int*)PINMUX_PIF_3_reg)=data)
#define  get_PINMUX_PIF_3_reg                                                    (*((volatile unsigned int*)PINMUX_PIF_3_reg))
#define  PINMUX_PIF_3_pif_tx15p_ps_shift                                         (28)
#define  PINMUX_PIF_3_pif_tx15n_ps_shift                                         (24)
#define  PINMUX_PIF_3_pif_tx14p_ps_shift                                         (20)
#define  PINMUX_PIF_3_pif_tx14n_ps_shift                                         (16)
#define  PINMUX_PIF_3_pif_tx13p_ps_shift                                         (12)
#define  PINMUX_PIF_3_pif_tx13n_ps_shift                                         (8)
#define  PINMUX_PIF_3_pif_tx12p_ps_shift                                         (4)
#define  PINMUX_PIF_3_pif_tx12n_ps_shift                                         (0)
#define  PINMUX_PIF_3_pif_tx15p_ps_mask                                          (0xF0000000)
#define  PINMUX_PIF_3_pif_tx15n_ps_mask                                          (0x0F000000)
#define  PINMUX_PIF_3_pif_tx14p_ps_mask                                          (0x00F00000)
#define  PINMUX_PIF_3_pif_tx14n_ps_mask                                          (0x000F0000)
#define  PINMUX_PIF_3_pif_tx13p_ps_mask                                          (0x0000F000)
#define  PINMUX_PIF_3_pif_tx13n_ps_mask                                          (0x00000F00)
#define  PINMUX_PIF_3_pif_tx12p_ps_mask                                          (0x000000F0)
#define  PINMUX_PIF_3_pif_tx12n_ps_mask                                          (0x0000000F)
#define  PINMUX_PIF_3_pif_tx15p_ps(data)                                         (0xF0000000&((data)<<28))
#define  PINMUX_PIF_3_pif_tx15n_ps(data)                                         (0x0F000000&((data)<<24))
#define  PINMUX_PIF_3_pif_tx14p_ps(data)                                         (0x00F00000&((data)<<20))
#define  PINMUX_PIF_3_pif_tx14n_ps(data)                                         (0x000F0000&((data)<<16))
#define  PINMUX_PIF_3_pif_tx13p_ps(data)                                         (0x0000F000&((data)<<12))
#define  PINMUX_PIF_3_pif_tx13n_ps(data)                                         (0x00000F00&((data)<<8))
#define  PINMUX_PIF_3_pif_tx12p_ps(data)                                         (0x000000F0&((data)<<4))
#define  PINMUX_PIF_3_pif_tx12n_ps(data)                                         (0x0000000F&(data))
#define  PINMUX_PIF_3_get_pif_tx15p_ps(data)                                     ((0xF0000000&(data))>>28)
#define  PINMUX_PIF_3_get_pif_tx15n_ps(data)                                     ((0x0F000000&(data))>>24)
#define  PINMUX_PIF_3_get_pif_tx14p_ps(data)                                     ((0x00F00000&(data))>>20)
#define  PINMUX_PIF_3_get_pif_tx14n_ps(data)                                     ((0x000F0000&(data))>>16)
#define  PINMUX_PIF_3_get_pif_tx13p_ps(data)                                     ((0x0000F000&(data))>>12)
#define  PINMUX_PIF_3_get_pif_tx13n_ps(data)                                     ((0x00000F00&(data))>>8)
#define  PINMUX_PIF_3_get_pif_tx12p_ps(data)                                     ((0x000000F0&(data))>>4)
#define  PINMUX_PIF_3_get_pif_tx12n_ps(data)                                     (0x0000000F&(data))

#define  PINMUX_PIF_4                                                           0x18000CB0
#define  PINMUX_PIF_4_reg_addr                                                   "0xB8000CB0"
#define  PINMUX_PIF_4_reg                                                        0xB8000CB0
#define  PINMUX_PIF_4_inst_addr                                                  "0x0041"
#define  set_PINMUX_PIF_4_reg(data)                                              (*((volatile unsigned int*)PINMUX_PIF_4_reg)=data)
#define  get_PINMUX_PIF_4_reg                                                    (*((volatile unsigned int*)PINMUX_PIF_4_reg))
#define  PINMUX_PIF_4_pif_tx11p_ps_shift                                         (28)
#define  PINMUX_PIF_4_pif_tx11n_ps_shift                                         (24)
#define  PINMUX_PIF_4_pif_tx10p_ps_shift                                         (20)
#define  PINMUX_PIF_4_pif_tx10n_ps_shift                                         (16)
#define  PINMUX_PIF_4_pif_tx9p_ps_shift                                          (12)
#define  PINMUX_PIF_4_pif_tx9n_ps_shift                                          (8)
#define  PINMUX_PIF_4_pif_tx8p_ps_shift                                          (4)
#define  PINMUX_PIF_4_pif_tx8n_ps_shift                                          (0)
#define  PINMUX_PIF_4_pif_tx11p_ps_mask                                          (0xF0000000)
#define  PINMUX_PIF_4_pif_tx11n_ps_mask                                          (0x0F000000)
#define  PINMUX_PIF_4_pif_tx10p_ps_mask                                          (0x00F00000)
#define  PINMUX_PIF_4_pif_tx10n_ps_mask                                          (0x000F0000)
#define  PINMUX_PIF_4_pif_tx9p_ps_mask                                           (0x0000F000)
#define  PINMUX_PIF_4_pif_tx9n_ps_mask                                           (0x00000F00)
#define  PINMUX_PIF_4_pif_tx8p_ps_mask                                           (0x000000F0)
#define  PINMUX_PIF_4_pif_tx8n_ps_mask                                           (0x0000000F)
#define  PINMUX_PIF_4_pif_tx11p_ps(data)                                         (0xF0000000&((data)<<28))
#define  PINMUX_PIF_4_pif_tx11n_ps(data)                                         (0x0F000000&((data)<<24))
#define  PINMUX_PIF_4_pif_tx10p_ps(data)                                         (0x00F00000&((data)<<20))
#define  PINMUX_PIF_4_pif_tx10n_ps(data)                                         (0x000F0000&((data)<<16))
#define  PINMUX_PIF_4_pif_tx9p_ps(data)                                          (0x0000F000&((data)<<12))
#define  PINMUX_PIF_4_pif_tx9n_ps(data)                                          (0x00000F00&((data)<<8))
#define  PINMUX_PIF_4_pif_tx8p_ps(data)                                          (0x000000F0&((data)<<4))
#define  PINMUX_PIF_4_pif_tx8n_ps(data)                                          (0x0000000F&(data))
#define  PINMUX_PIF_4_get_pif_tx11p_ps(data)                                     ((0xF0000000&(data))>>28)
#define  PINMUX_PIF_4_get_pif_tx11n_ps(data)                                     ((0x0F000000&(data))>>24)
#define  PINMUX_PIF_4_get_pif_tx10p_ps(data)                                     ((0x00F00000&(data))>>20)
#define  PINMUX_PIF_4_get_pif_tx10n_ps(data)                                     ((0x000F0000&(data))>>16)
#define  PINMUX_PIF_4_get_pif_tx9p_ps(data)                                      ((0x0000F000&(data))>>12)
#define  PINMUX_PIF_4_get_pif_tx9n_ps(data)                                      ((0x00000F00&(data))>>8)
#define  PINMUX_PIF_4_get_pif_tx8p_ps(data)                                      ((0x000000F0&(data))>>4)
#define  PINMUX_PIF_4_get_pif_tx8n_ps(data)                                      (0x0000000F&(data))

#define  PINMUX_PIF_5                                                           0x18000CB4
#define  PINMUX_PIF_5_reg_addr                                                   "0xB8000CB4"
#define  PINMUX_PIF_5_reg                                                        0xB8000CB4
#define  PINMUX_PIF_5_inst_addr                                                  "0x0042"
#define  set_PINMUX_PIF_5_reg(data)                                              (*((volatile unsigned int*)PINMUX_PIF_5_reg)=data)
#define  get_PINMUX_PIF_5_reg                                                    (*((volatile unsigned int*)PINMUX_PIF_5_reg))
#define  PINMUX_PIF_5_pif_tx7p_ps_shift                                          (28)
#define  PINMUX_PIF_5_pif_tx7n_ps_shift                                          (24)
#define  PINMUX_PIF_5_pif_tx6p_ps_shift                                          (20)
#define  PINMUX_PIF_5_pif_tx6n_ps_shift                                          (16)
#define  PINMUX_PIF_5_pif_tx5p_ps_shift                                          (12)
#define  PINMUX_PIF_5_pif_tx5n_ps_shift                                          (8)
#define  PINMUX_PIF_5_pif_tx4p_ps_shift                                          (4)
#define  PINMUX_PIF_5_pif_tx4n_ps_shift                                          (0)
#define  PINMUX_PIF_5_pif_tx7p_ps_mask                                           (0xF0000000)
#define  PINMUX_PIF_5_pif_tx7n_ps_mask                                           (0x0F000000)
#define  PINMUX_PIF_5_pif_tx6p_ps_mask                                           (0x00F00000)
#define  PINMUX_PIF_5_pif_tx6n_ps_mask                                           (0x000F0000)
#define  PINMUX_PIF_5_pif_tx5p_ps_mask                                           (0x0000F000)
#define  PINMUX_PIF_5_pif_tx5n_ps_mask                                           (0x00000F00)
#define  PINMUX_PIF_5_pif_tx4p_ps_mask                                           (0x000000F0)
#define  PINMUX_PIF_5_pif_tx4n_ps_mask                                           (0x0000000F)
#define  PINMUX_PIF_5_pif_tx7p_ps(data)                                          (0xF0000000&((data)<<28))
#define  PINMUX_PIF_5_pif_tx7n_ps(data)                                          (0x0F000000&((data)<<24))
#define  PINMUX_PIF_5_pif_tx6p_ps(data)                                          (0x00F00000&((data)<<20))
#define  PINMUX_PIF_5_pif_tx6n_ps(data)                                          (0x000F0000&((data)<<16))
#define  PINMUX_PIF_5_pif_tx5p_ps(data)                                          (0x0000F000&((data)<<12))
#define  PINMUX_PIF_5_pif_tx5n_ps(data)                                          (0x00000F00&((data)<<8))
#define  PINMUX_PIF_5_pif_tx4p_ps(data)                                          (0x000000F0&((data)<<4))
#define  PINMUX_PIF_5_pif_tx4n_ps(data)                                          (0x0000000F&(data))
#define  PINMUX_PIF_5_get_pif_tx7p_ps(data)                                      ((0xF0000000&(data))>>28)
#define  PINMUX_PIF_5_get_pif_tx7n_ps(data)                                      ((0x0F000000&(data))>>24)
#define  PINMUX_PIF_5_get_pif_tx6p_ps(data)                                      ((0x00F00000&(data))>>20)
#define  PINMUX_PIF_5_get_pif_tx6n_ps(data)                                      ((0x000F0000&(data))>>16)
#define  PINMUX_PIF_5_get_pif_tx5p_ps(data)                                      ((0x0000F000&(data))>>12)
#define  PINMUX_PIF_5_get_pif_tx5n_ps(data)                                      ((0x00000F00&(data))>>8)
#define  PINMUX_PIF_5_get_pif_tx4p_ps(data)                                      ((0x000000F0&(data))>>4)
#define  PINMUX_PIF_5_get_pif_tx4n_ps(data)                                      (0x0000000F&(data))

#define  PINMUX_PIF_6                                                           0x18000CB8
#define  PINMUX_PIF_6_reg_addr                                                   "0xB8000CB8"
#define  PINMUX_PIF_6_reg                                                        0xB8000CB8
#define  PINMUX_PIF_6_inst_addr                                                  "0x0043"
#define  set_PINMUX_PIF_6_reg(data)                                              (*((volatile unsigned int*)PINMUX_PIF_6_reg)=data)
#define  get_PINMUX_PIF_6_reg                                                    (*((volatile unsigned int*)PINMUX_PIF_6_reg))
#define  PINMUX_PIF_6_pif_tx3p_ps_shift                                          (28)
#define  PINMUX_PIF_6_pif_tx3n_ps_shift                                          (24)
#define  PINMUX_PIF_6_pif_tx2p_ps_shift                                          (20)
#define  PINMUX_PIF_6_pif_tx2n_ps_shift                                          (16)
#define  PINMUX_PIF_6_pif_tx1p_ps_shift                                          (12)
#define  PINMUX_PIF_6_pif_tx1n_ps_shift                                          (8)
#define  PINMUX_PIF_6_pif_tx0p_ps_shift                                          (4)
#define  PINMUX_PIF_6_pif_tx0n_ps_shift                                          (0)
#define  PINMUX_PIF_6_pif_tx3p_ps_mask                                           (0xF0000000)
#define  PINMUX_PIF_6_pif_tx3n_ps_mask                                           (0x0F000000)
#define  PINMUX_PIF_6_pif_tx2p_ps_mask                                           (0x00F00000)
#define  PINMUX_PIF_6_pif_tx2n_ps_mask                                           (0x000F0000)
#define  PINMUX_PIF_6_pif_tx1p_ps_mask                                           (0x0000F000)
#define  PINMUX_PIF_6_pif_tx1n_ps_mask                                           (0x00000F00)
#define  PINMUX_PIF_6_pif_tx0p_ps_mask                                           (0x000000F0)
#define  PINMUX_PIF_6_pif_tx0n_ps_mask                                           (0x0000000F)
#define  PINMUX_PIF_6_pif_tx3p_ps(data)                                          (0xF0000000&((data)<<28))
#define  PINMUX_PIF_6_pif_tx3n_ps(data)                                          (0x0F000000&((data)<<24))
#define  PINMUX_PIF_6_pif_tx2p_ps(data)                                          (0x00F00000&((data)<<20))
#define  PINMUX_PIF_6_pif_tx2n_ps(data)                                          (0x000F0000&((data)<<16))
#define  PINMUX_PIF_6_pif_tx1p_ps(data)                                          (0x0000F000&((data)<<12))
#define  PINMUX_PIF_6_pif_tx1n_ps(data)                                          (0x00000F00&((data)<<8))
#define  PINMUX_PIF_6_pif_tx0p_ps(data)                                          (0x000000F0&((data)<<4))
#define  PINMUX_PIF_6_pif_tx0n_ps(data)                                          (0x0000000F&(data))
#define  PINMUX_PIF_6_get_pif_tx3p_ps(data)                                      ((0xF0000000&(data))>>28)
#define  PINMUX_PIF_6_get_pif_tx3n_ps(data)                                      ((0x0F000000&(data))>>24)
#define  PINMUX_PIF_6_get_pif_tx2p_ps(data)                                      ((0x00F00000&(data))>>20)
#define  PINMUX_PIF_6_get_pif_tx2n_ps(data)                                      ((0x000F0000&(data))>>16)
#define  PINMUX_PIF_6_get_pif_tx1p_ps(data)                                      ((0x0000F000&(data))>>12)
#define  PINMUX_PIF_6_get_pif_tx1n_ps(data)                                      ((0x00000F00&(data))>>8)
#define  PINMUX_PIF_6_get_pif_tx0p_ps(data)                                      ((0x000000F0&(data))>>4)
#define  PINMUX_PIF_6_get_pif_tx0n_ps(data)                                      (0x0000000F&(data))

#define  PINMUX_Pin_Mux_LVDS                                                    0x18000CBC
#define  PINMUX_Pin_Mux_LVDS_reg_addr                                            "0xB8000CBC"
#define  PINMUX_Pin_Mux_LVDS_reg                                                 0xB8000CBC
#define  PINMUX_Pin_Mux_LVDS_inst_addr                                           "0x0044"
#define  set_PINMUX_Pin_Mux_LVDS_reg(data)                                       (*((volatile unsigned int*)PINMUX_Pin_Mux_LVDS_reg)=data)
#define  get_PINMUX_Pin_Mux_LVDS_reg                                             (*((volatile unsigned int*)PINMUX_Pin_Mux_LVDS_reg))
#define  PINMUX_Pin_Mux_LVDS_vby1_osd_htpd_sel_shift                             (12)
#define  PINMUX_Pin_Mux_LVDS_vby1_osd_lock_sel_shift                             (10)
#define  PINMUX_Pin_Mux_LVDS_isp_sdlock_sel_shift                                (8)
#define  PINMUX_Pin_Mux_LVDS_boe_bcc_in_sel_shift                                (6)
#define  PINMUX_Pin_Mux_LVDS_vby1_htpd_sel_shift                                 (4)
#define  PINMUX_Pin_Mux_LVDS_vby1_lock_sel_shift                                 (2)
#define  PINMUX_Pin_Mux_LVDS_epi_lock_sel_shift                                  (0)
#define  PINMUX_Pin_Mux_LVDS_vby1_osd_htpd_sel_mask                              (0x00003000)
#define  PINMUX_Pin_Mux_LVDS_vby1_osd_lock_sel_mask                              (0x00000C00)
#define  PINMUX_Pin_Mux_LVDS_isp_sdlock_sel_mask                                 (0x00000300)
#define  PINMUX_Pin_Mux_LVDS_boe_bcc_in_sel_mask                                 (0x000000C0)
#define  PINMUX_Pin_Mux_LVDS_vby1_htpd_sel_mask                                  (0x00000030)
#define  PINMUX_Pin_Mux_LVDS_vby1_lock_sel_mask                                  (0x0000000C)
#define  PINMUX_Pin_Mux_LVDS_epi_lock_sel_mask                                   (0x00000003)
#define  PINMUX_Pin_Mux_LVDS_vby1_osd_htpd_sel(data)                             (0x00003000&((data)<<12))
#define  PINMUX_Pin_Mux_LVDS_vby1_osd_lock_sel(data)                             (0x00000C00&((data)<<10))
#define  PINMUX_Pin_Mux_LVDS_isp_sdlock_sel(data)                                (0x00000300&((data)<<8))
#define  PINMUX_Pin_Mux_LVDS_boe_bcc_in_sel(data)                                (0x000000C0&((data)<<6))
#define  PINMUX_Pin_Mux_LVDS_vby1_htpd_sel(data)                                 (0x00000030&((data)<<4))
#define  PINMUX_Pin_Mux_LVDS_vby1_lock_sel(data)                                 (0x0000000C&((data)<<2))
#define  PINMUX_Pin_Mux_LVDS_epi_lock_sel(data)                                  (0x00000003&(data))
#define  PINMUX_Pin_Mux_LVDS_get_vby1_osd_htpd_sel(data)                         ((0x00003000&(data))>>12)
#define  PINMUX_Pin_Mux_LVDS_get_vby1_osd_lock_sel(data)                         ((0x00000C00&(data))>>10)
#define  PINMUX_Pin_Mux_LVDS_get_isp_sdlock_sel(data)                            ((0x00000300&(data))>>8)
#define  PINMUX_Pin_Mux_LVDS_get_boe_bcc_in_sel(data)                            ((0x000000C0&(data))>>6)
#define  PINMUX_Pin_Mux_LVDS_get_vby1_htpd_sel(data)                             ((0x00000030&(data))>>4)
#define  PINMUX_Pin_Mux_LVDS_get_vby1_lock_sel(data)                             ((0x0000000C&(data))>>2)
#define  PINMUX_Pin_Mux_LVDS_get_epi_lock_sel(data)                              (0x00000003&(data))

#define  PINMUX_ST_STB_0                                                        0x18060200
#define  PINMUX_ST_STB_0_reg_addr                                                "0xB8060200"
#define  PINMUX_ST_STB_0_reg                                                     0xB8060200
#define  PINMUX_ST_STB_0_inst_addr                                               "0x0045"
#define  set_PINMUX_ST_STB_0_reg(data)                                           (*((volatile unsigned int*)PINMUX_ST_STB_0_reg)=data)
#define  get_PINMUX_ST_STB_0_reg                                                 (*((volatile unsigned int*)PINMUX_ST_STB_0_reg))
#define  PINMUX_ST_STB_0_lsadc10_ps_shift                                        (28)
#define  PINMUX_ST_STB_0_lsadc9_ps_shift                                         (24)
#define  PINMUX_ST_STB_0_lsadc8_ps_shift                                         (20)
#define  PINMUX_ST_STB_0_lsadc7_ps_shift                                         (16)
#define  PINMUX_ST_STB_0_lsadc6_ps_shift                                         (12)
#define  PINMUX_ST_STB_0_lsadc5_ps_shift                                         (8)
#define  PINMUX_ST_STB_0_lsadc10_gpi_en_shift                                    (5)
#define  PINMUX_ST_STB_0_lsadc9_gpi_en_shift                                     (4)
#define  PINMUX_ST_STB_0_lsadc8_gpi_en_shift                                     (3)
#define  PINMUX_ST_STB_0_lsadc7_gpi_en_shift                                     (2)
#define  PINMUX_ST_STB_0_lsadc6_gpi_en_shift                                     (1)
#define  PINMUX_ST_STB_0_lsadc5_gpi_en_shift                                     (0)
#define  PINMUX_ST_STB_0_lsadc10_ps_mask                                         (0xF0000000)
#define  PINMUX_ST_STB_0_lsadc9_ps_mask                                          (0x0F000000)
#define  PINMUX_ST_STB_0_lsadc8_ps_mask                                          (0x00F00000)
#define  PINMUX_ST_STB_0_lsadc7_ps_mask                                          (0x000F0000)
#define  PINMUX_ST_STB_0_lsadc6_ps_mask                                          (0x0000F000)
#define  PINMUX_ST_STB_0_lsadc5_ps_mask                                          (0x00000F00)
#define  PINMUX_ST_STB_0_lsadc10_gpi_en_mask                                     (0x00000020)
#define  PINMUX_ST_STB_0_lsadc9_gpi_en_mask                                      (0x00000010)
#define  PINMUX_ST_STB_0_lsadc8_gpi_en_mask                                      (0x00000008)
#define  PINMUX_ST_STB_0_lsadc7_gpi_en_mask                                      (0x00000004)
#define  PINMUX_ST_STB_0_lsadc6_gpi_en_mask                                      (0x00000002)
#define  PINMUX_ST_STB_0_lsadc5_gpi_en_mask                                      (0x00000001)
#define  PINMUX_ST_STB_0_lsadc10_ps(data)                                        (0xF0000000&((data)<<28))
#define  PINMUX_ST_STB_0_lsadc9_ps(data)                                         (0x0F000000&((data)<<24))
#define  PINMUX_ST_STB_0_lsadc8_ps(data)                                         (0x00F00000&((data)<<20))
#define  PINMUX_ST_STB_0_lsadc7_ps(data)                                         (0x000F0000&((data)<<16))
#define  PINMUX_ST_STB_0_lsadc6_ps(data)                                         (0x0000F000&((data)<<12))
#define  PINMUX_ST_STB_0_lsadc5_ps(data)                                         (0x00000F00&((data)<<8))
#define  PINMUX_ST_STB_0_lsadc10_gpi_en(data)                                    (0x00000020&((data)<<5))
#define  PINMUX_ST_STB_0_lsadc9_gpi_en(data)                                     (0x00000010&((data)<<4))
#define  PINMUX_ST_STB_0_lsadc8_gpi_en(data)                                     (0x00000008&((data)<<3))
#define  PINMUX_ST_STB_0_lsadc7_gpi_en(data)                                     (0x00000004&((data)<<2))
#define  PINMUX_ST_STB_0_lsadc6_gpi_en(data)                                     (0x00000002&((data)<<1))
#define  PINMUX_ST_STB_0_lsadc5_gpi_en(data)                                     (0x00000001&(data))
#define  PINMUX_ST_STB_0_get_lsadc10_ps(data)                                    ((0xF0000000&(data))>>28)
#define  PINMUX_ST_STB_0_get_lsadc9_ps(data)                                     ((0x0F000000&(data))>>24)
#define  PINMUX_ST_STB_0_get_lsadc8_ps(data)                                     ((0x00F00000&(data))>>20)
#define  PINMUX_ST_STB_0_get_lsadc7_ps(data)                                     ((0x000F0000&(data))>>16)
#define  PINMUX_ST_STB_0_get_lsadc6_ps(data)                                     ((0x0000F000&(data))>>12)
#define  PINMUX_ST_STB_0_get_lsadc5_ps(data)                                     ((0x00000F00&(data))>>8)
#define  PINMUX_ST_STB_0_get_lsadc10_gpi_en(data)                                ((0x00000020&(data))>>5)
#define  PINMUX_ST_STB_0_get_lsadc9_gpi_en(data)                                 ((0x00000010&(data))>>4)
#define  PINMUX_ST_STB_0_get_lsadc8_gpi_en(data)                                 ((0x00000008&(data))>>3)
#define  PINMUX_ST_STB_0_get_lsadc7_gpi_en(data)                                 ((0x00000004&(data))>>2)
#define  PINMUX_ST_STB_0_get_lsadc6_gpi_en(data)                                 ((0x00000002&(data))>>1)
#define  PINMUX_ST_STB_0_get_lsadc5_gpi_en(data)                                 (0x00000001&(data))

#define  PINMUX_ST_STB_1                                                        0x18060204
#define  PINMUX_ST_STB_1_reg_addr                                                "0xB8060204"
#define  PINMUX_ST_STB_1_reg                                                     0xB8060204
#define  PINMUX_ST_STB_1_inst_addr                                               "0x0046"
#define  set_PINMUX_ST_STB_1_reg(data)                                           (*((volatile unsigned int*)PINMUX_ST_STB_1_reg)=data)
#define  get_PINMUX_ST_STB_1_reg                                                 (*((volatile unsigned int*)PINMUX_ST_STB_1_reg))
#define  PINMUX_ST_STB_1_lsadc4_ps_shift                                         (28)
#define  PINMUX_ST_STB_1_lsadc3_ps_shift                                         (24)
#define  PINMUX_ST_STB_1_lsadc2_ps_shift                                         (20)
#define  PINMUX_ST_STB_1_lsadc1_ps_shift                                         (16)
#define  PINMUX_ST_STB_1_lsadc0_ps_shift                                         (12)
#define  PINMUX_ST_STB_1_lsadc4_gpi_en_shift                                     (4)
#define  PINMUX_ST_STB_1_lsadc3_gpi_en_shift                                     (3)
#define  PINMUX_ST_STB_1_lsadc2_gpi_en_shift                                     (2)
#define  PINMUX_ST_STB_1_lsadc1_gpi_en_shift                                     (1)
#define  PINMUX_ST_STB_1_lsadc0_gpi_en_shift                                     (0)
#define  PINMUX_ST_STB_1_lsadc4_ps_mask                                          (0xF0000000)
#define  PINMUX_ST_STB_1_lsadc3_ps_mask                                          (0x0F000000)
#define  PINMUX_ST_STB_1_lsadc2_ps_mask                                          (0x00F00000)
#define  PINMUX_ST_STB_1_lsadc1_ps_mask                                          (0x000F0000)
#define  PINMUX_ST_STB_1_lsadc0_ps_mask                                          (0x0000F000)
#define  PINMUX_ST_STB_1_lsadc4_gpi_en_mask                                      (0x00000010)
#define  PINMUX_ST_STB_1_lsadc3_gpi_en_mask                                      (0x00000008)
#define  PINMUX_ST_STB_1_lsadc2_gpi_en_mask                                      (0x00000004)
#define  PINMUX_ST_STB_1_lsadc1_gpi_en_mask                                      (0x00000002)
#define  PINMUX_ST_STB_1_lsadc0_gpi_en_mask                                      (0x00000001)
#define  PINMUX_ST_STB_1_lsadc4_ps(data)                                         (0xF0000000&((data)<<28))
#define  PINMUX_ST_STB_1_lsadc3_ps(data)                                         (0x0F000000&((data)<<24))
#define  PINMUX_ST_STB_1_lsadc2_ps(data)                                         (0x00F00000&((data)<<20))
#define  PINMUX_ST_STB_1_lsadc1_ps(data)                                         (0x000F0000&((data)<<16))
#define  PINMUX_ST_STB_1_lsadc0_ps(data)                                         (0x0000F000&((data)<<12))
#define  PINMUX_ST_STB_1_lsadc4_gpi_en(data)                                     (0x00000010&((data)<<4))
#define  PINMUX_ST_STB_1_lsadc3_gpi_en(data)                                     (0x00000008&((data)<<3))
#define  PINMUX_ST_STB_1_lsadc2_gpi_en(data)                                     (0x00000004&((data)<<2))
#define  PINMUX_ST_STB_1_lsadc1_gpi_en(data)                                     (0x00000002&((data)<<1))
#define  PINMUX_ST_STB_1_lsadc0_gpi_en(data)                                     (0x00000001&(data))
#define  PINMUX_ST_STB_1_get_lsadc4_ps(data)                                     ((0xF0000000&(data))>>28)
#define  PINMUX_ST_STB_1_get_lsadc3_ps(data)                                     ((0x0F000000&(data))>>24)
#define  PINMUX_ST_STB_1_get_lsadc2_ps(data)                                     ((0x00F00000&(data))>>20)
#define  PINMUX_ST_STB_1_get_lsadc1_ps(data)                                     ((0x000F0000&(data))>>16)
#define  PINMUX_ST_STB_1_get_lsadc0_ps(data)                                     ((0x0000F000&(data))>>12)
#define  PINMUX_ST_STB_1_get_lsadc4_gpi_en(data)                                 ((0x00000010&(data))>>4)
#define  PINMUX_ST_STB_1_get_lsadc3_gpi_en(data)                                 ((0x00000008&(data))>>3)
#define  PINMUX_ST_STB_1_get_lsadc2_gpi_en(data)                                 ((0x00000004&(data))>>2)
#define  PINMUX_ST_STB_1_get_lsadc1_gpi_en(data)                                 ((0x00000002&(data))>>1)
#define  PINMUX_ST_STB_1_get_lsadc0_gpi_en(data)                                 (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_0                                                0x18060208
#define  PINMUX_ST_GPIO_ST_CFG_0_reg_addr                                        "0xB8060208"
#define  PINMUX_ST_GPIO_ST_CFG_0_reg                                             0xB8060208
#define  PINMUX_ST_GPIO_ST_CFG_0_inst_addr                                       "0x0047"
#define  set_PINMUX_ST_GPIO_ST_CFG_0_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_0_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_0_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_0_reg))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_00_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_01_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_02_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_0_st_gpio_03_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_00_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_00_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_00_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_00_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_00_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_01_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_01_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_01_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_01_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_01_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_02_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_02_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_02_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_02_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_02_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_03_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_03_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_03_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_03_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_0_get_st_gpio_03_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_1                                                0x1806020C
#define  PINMUX_ST_GPIO_ST_CFG_1_reg_addr                                        "0xB806020C"
#define  PINMUX_ST_GPIO_ST_CFG_1_reg                                             0xB806020C
#define  PINMUX_ST_GPIO_ST_CFG_1_inst_addr                                       "0x0048"
#define  set_PINMUX_ST_GPIO_ST_CFG_1_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_1_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_1_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_1_reg))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_04_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_05_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_06_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_1_st_gpio_07_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_04_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_04_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_04_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_04_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_04_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_05_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_05_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_05_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_05_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_05_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_06_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_06_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_06_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_06_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_06_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_07_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_07_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_07_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_07_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_1_get_st_gpio_07_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_2                                                0x18060210
#define  PINMUX_ST_GPIO_ST_CFG_2_reg_addr                                        "0xB8060210"
#define  PINMUX_ST_GPIO_ST_CFG_2_reg                                             0xB8060210
#define  PINMUX_ST_GPIO_ST_CFG_2_inst_addr                                       "0x0049"
#define  set_PINMUX_ST_GPIO_ST_CFG_2_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_2_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_2_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_2_reg))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_08_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_09_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_10_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_2_st_gpio_11_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_08_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_08_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_08_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_08_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_08_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_09_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_09_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_09_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_09_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_09_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_10_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_10_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_10_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_10_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_10_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_11_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_11_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_11_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_11_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_2_get_st_gpio_11_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_3                                                0x18060214
#define  PINMUX_ST_GPIO_ST_CFG_3_reg_addr                                        "0xB8060214"
#define  PINMUX_ST_GPIO_ST_CFG_3_reg                                             0xB8060214
#define  PINMUX_ST_GPIO_ST_CFG_3_inst_addr                                       "0x004A"
#define  set_PINMUX_ST_GPIO_ST_CFG_3_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_3_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_3_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_3_reg))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_23_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_24_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_25_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_3_st_gpio_26_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_23_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_23_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_23_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_23_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_23_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_24_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_24_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_24_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_24_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_24_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_25_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_25_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_25_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_25_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_25_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_26_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_26_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_26_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_26_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_3_get_st_gpio_26_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_4                                                0x18060218
#define  PINMUX_ST_GPIO_ST_CFG_4_reg_addr                                        "0xB8060218"
#define  PINMUX_ST_GPIO_ST_CFG_4_reg                                             0xB8060218
#define  PINMUX_ST_GPIO_ST_CFG_4_inst_addr                                       "0x004B"
#define  set_PINMUX_ST_GPIO_ST_CFG_4_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_4_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_4_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_4_reg))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_27_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_28_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_29_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_4_st_gpio_30_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_27_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_27_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_27_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_27_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_27_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_28_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_28_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_28_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_28_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_28_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_29_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_29_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_29_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_29_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_29_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_30_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_30_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_30_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_30_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_4_get_st_gpio_30_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_5                                                0x1806021C
#define  PINMUX_ST_GPIO_ST_CFG_5_reg_addr                                        "0xB806021C"
#define  PINMUX_ST_GPIO_ST_CFG_5_reg                                             0xB806021C
#define  PINMUX_ST_GPIO_ST_CFG_5_inst_addr                                       "0x004C"
#define  set_PINMUX_ST_GPIO_ST_CFG_5_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_5_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_5_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_5_reg))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_31_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_32_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_33_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_5_st_gpio_34_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_31_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_31_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_31_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_31_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_31_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_32_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_32_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_32_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_32_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_32_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_33_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_33_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_33_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_33_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_33_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_34_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_34_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_34_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_34_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_5_get_st_gpio_34_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_6                                                0x18060220
#define  PINMUX_ST_GPIO_ST_CFG_6_reg_addr                                        "0xB8060220"
#define  PINMUX_ST_GPIO_ST_CFG_6_reg                                             0xB8060220
#define  PINMUX_ST_GPIO_ST_CFG_6_inst_addr                                       "0x004D"
#define  set_PINMUX_ST_GPIO_ST_CFG_6_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_6_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_6_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_6_reg))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_35_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_36_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_37_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_6_st_gpio_38_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_35_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_35_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_35_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_35_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_35_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_36_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_36_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_36_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_36_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_36_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_37_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_37_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_37_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_37_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_37_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_38_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_38_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_38_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_38_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_6_get_st_gpio_38_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_7                                                0x18060224
#define  PINMUX_ST_GPIO_ST_CFG_7_reg_addr                                        "0xB8060224"
#define  PINMUX_ST_GPIO_ST_CFG_7_reg                                             0xB8060224
#define  PINMUX_ST_GPIO_ST_CFG_7_inst_addr                                       "0x004E"
#define  set_PINMUX_ST_GPIO_ST_CFG_7_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_7_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_7_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_7_reg))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_39_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_40_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_41_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_7_st_gpio_42_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_39_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_39_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_39_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_39_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_39_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_40_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_40_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_40_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_40_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_40_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_41_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_41_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_41_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_41_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_41_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_42_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_42_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_42_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_42_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_7_get_st_gpio_42_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_8                                                0x18060228
#define  PINMUX_ST_GPIO_ST_CFG_8_reg_addr                                        "0xB8060228"
#define  PINMUX_ST_GPIO_ST_CFG_8_reg                                             0xB8060228
#define  PINMUX_ST_GPIO_ST_CFG_8_inst_addr                                       "0x004F"
#define  set_PINMUX_ST_GPIO_ST_CFG_8_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_8_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_8_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_8_reg))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_sr_shift                             (8)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_sr_mask                              (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_43_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_44_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_45_sr(data)                             (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_8_st_gpio_46_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_43_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_43_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_43_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_43_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_43_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_44_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_44_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_44_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_44_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_44_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_45_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_45_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_45_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_45_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_45_sr(data)                         ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_46_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_46_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_46_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_46_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_8_get_st_gpio_46_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_9                                                0x1806022C
#define  PINMUX_ST_GPIO_ST_CFG_9_reg_addr                                        "0xB806022C"
#define  PINMUX_ST_GPIO_ST_CFG_9_reg                                             0xB806022C
#define  PINMUX_ST_GPIO_ST_CFG_9_inst_addr                                       "0x0050"
#define  set_PINMUX_ST_GPIO_ST_CFG_9_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_9_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_9_reg                                         (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_9_reg))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_ps_shift                             (28)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_pu_shift                             (27)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_pd_shift                             (26)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_ds_shift                             (25)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_sr_shift                             (24)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_ps_shift                             (20)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_pu_shift                             (19)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_pd_shift                             (18)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_ds_shift                             (17)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_sr_shift                             (16)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_ps_shift                             (12)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_pu_shift                             (11)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_pd_shift                             (10)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_ds_shift                             (9)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_ps_shift                             (4)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_pu_shift                             (3)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_pd_shift                             (2)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_ds_shift                             (1)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_sr_shift                             (0)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_ps_mask                              (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_pu_mask                              (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_pd_mask                              (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_ds_mask                              (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_sr_mask                              (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_ps_mask                              (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_pu_mask                              (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_pd_mask                              (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_ds_mask                              (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_sr_mask                              (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_ps_mask                              (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_pu_mask                              (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_pd_mask                              (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_ds_mask                              (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_ps_mask                              (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_pu_mask                              (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_pd_mask                              (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_ds_mask                              (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_sr_mask                              (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_ps(data)                             (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_pu(data)                             (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_pd(data)                             (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_ds(data)                             (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_47_sr(data)                             (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_ps(data)                             (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_pu(data)                             (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_pd(data)                             (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_ds(data)                             (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_48_sr(data)                             (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_ps(data)                             (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_pu(data)                             (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_pd(data)                             (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_49_ds(data)                             (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_ps(data)                             (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_pu(data)                             (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_pd(data)                             (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_ds(data)                             (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_9_st_gpio_50_sr(data)                             (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_47_ps(data)                         ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_47_pu(data)                         ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_47_pd(data)                         ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_47_ds(data)                         ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_47_sr(data)                         ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_48_ps(data)                         ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_48_pu(data)                         ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_48_pd(data)                         ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_48_ds(data)                         ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_48_sr(data)                         ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_49_ps(data)                         ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_49_pu(data)                         ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_49_pd(data)                         ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_49_ds(data)                         ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_50_ps(data)                         ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_50_pu(data)                         ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_50_pd(data)                         ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_50_ds(data)                         ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_9_get_st_gpio_50_sr(data)                         (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_10                                               0x18060230
#define  PINMUX_ST_GPIO_ST_CFG_10_reg_addr                                       "0xB8060230"
#define  PINMUX_ST_GPIO_ST_CFG_10_reg                                            0xB8060230
#define  PINMUX_ST_GPIO_ST_CFG_10_inst_addr                                      "0x0051"
#define  set_PINMUX_ST_GPIO_ST_CFG_10_reg(data)                                  (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_10_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_10_reg                                        (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_10_reg))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_ps_shift                            (28)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_pu_shift                            (27)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_pd_shift                            (26)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_ds_shift                            (25)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_sr_shift                            (24)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_ps_shift                            (20)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_pu_shift                            (19)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_pd_shift                            (18)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_ds_shift                            (17)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_sr_shift                            (16)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_ps_shift                            (12)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_pu_shift                            (11)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_pd_shift                            (10)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_ds_shift                            (9)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_sr_shift                            (8)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_ps_shift                            (4)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_pu_shift                            (3)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_pd_shift                            (2)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_ds_shift                            (1)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_sr_shift                            (0)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_ps_mask                             (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_pu_mask                             (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_pd_mask                             (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_ds_mask                             (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_sr_mask                             (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_ps_mask                             (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_pu_mask                             (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_pd_mask                             (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_ds_mask                             (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_sr_mask                             (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_ps_mask                             (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_pu_mask                             (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_pd_mask                             (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_ds_mask                             (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_sr_mask                             (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_ps_mask                             (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_pu_mask                             (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_pd_mask                             (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_ds_mask                             (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_sr_mask                             (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_ps(data)                            (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_pu(data)                            (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_pd(data)                            (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_ds(data)                            (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_51_sr(data)                            (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_ps(data)                            (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_pu(data)                            (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_pd(data)                            (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_ds(data)                            (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_52_sr(data)                            (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_ps(data)                            (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_pu(data)                            (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_pd(data)                            (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_ds(data)                            (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_53_sr(data)                            (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_ps(data)                            (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_pu(data)                            (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_pd(data)                            (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_ds(data)                            (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_10_st_gpio_54_sr(data)                            (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_51_ps(data)                        ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_51_pu(data)                        ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_51_pd(data)                        ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_51_ds(data)                        ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_51_sr(data)                        ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_52_ps(data)                        ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_52_pu(data)                        ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_52_pd(data)                        ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_52_ds(data)                        ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_52_sr(data)                        ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_53_ps(data)                        ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_53_pu(data)                        ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_53_pd(data)                        ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_53_ds(data)                        ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_53_sr(data)                        ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_54_ps(data)                        ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_54_pu(data)                        ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_54_pd(data)                        ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_54_ds(data)                        ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_10_get_st_gpio_54_sr(data)                        (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_11                                               0x18060234
#define  PINMUX_ST_GPIO_ST_CFG_11_reg_addr                                       "0xB8060234"
#define  PINMUX_ST_GPIO_ST_CFG_11_reg                                            0xB8060234
#define  PINMUX_ST_GPIO_ST_CFG_11_inst_addr                                      "0x0052"
#define  set_PINMUX_ST_GPIO_ST_CFG_11_reg(data)                                  (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_11_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_11_reg                                        (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_11_reg))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_ps_shift                            (28)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_pu_shift                            (27)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_pd_shift                            (26)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_ds_shift                            (25)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_sr_shift                            (24)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_ps_shift                            (20)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_pu_shift                            (19)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_pd_shift                            (18)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_ds_shift                            (17)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_sr_shift                            (16)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_ps_shift                            (12)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_pu_shift                            (11)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_pd_shift                            (10)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_ds_shift                            (9)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_sr_shift                            (8)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_ps_shift                            (4)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_pu_shift                            (3)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_pd_shift                            (2)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_ds_shift                            (1)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_sr_shift                            (0)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_ps_mask                             (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_pu_mask                             (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_pd_mask                             (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_ds_mask                             (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_sr_mask                             (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_ps_mask                             (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_pu_mask                             (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_pd_mask                             (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_ds_mask                             (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_sr_mask                             (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_ps_mask                             (0x0000F000)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_pu_mask                             (0x00000800)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_pd_mask                             (0x00000400)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_ds_mask                             (0x00000200)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_sr_mask                             (0x00000100)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_ps_mask                             (0x000000F0)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_pu_mask                             (0x00000008)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_pd_mask                             (0x00000004)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_ds_mask                             (0x00000002)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_sr_mask                             (0x00000001)
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_ps(data)                            (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_pu(data)                            (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_pd(data)                            (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_ds(data)                            (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_55_sr(data)                            (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_ps(data)                            (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_pu(data)                            (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_pd(data)                            (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_ds(data)                            (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_56_sr(data)                            (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_ps(data)                            (0x0000F000&((data)<<12))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_pu(data)                            (0x00000800&((data)<<11))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_pd(data)                            (0x00000400&((data)<<10))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_ds(data)                            (0x00000200&((data)<<9))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_57_sr(data)                            (0x00000100&((data)<<8))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_ps(data)                            (0x000000F0&((data)<<4))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_pu(data)                            (0x00000008&((data)<<3))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_pd(data)                            (0x00000004&((data)<<2))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_ds(data)                            (0x00000002&((data)<<1))
#define  PINMUX_ST_GPIO_ST_CFG_11_st_gpio_58_sr(data)                            (0x00000001&(data))
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_55_ps(data)                        ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_55_pu(data)                        ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_55_pd(data)                        ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_55_ds(data)                        ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_55_sr(data)                        ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_56_ps(data)                        ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_56_pu(data)                        ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_56_pd(data)                        ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_56_ds(data)                        ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_56_sr(data)                        ((0x00010000&(data))>>16)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_57_ps(data)                        ((0x0000F000&(data))>>12)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_57_pu(data)                        ((0x00000800&(data))>>11)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_57_pd(data)                        ((0x00000400&(data))>>10)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_57_ds(data)                        ((0x00000200&(data))>>9)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_57_sr(data)                        ((0x00000100&(data))>>8)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_58_ps(data)                        ((0x000000F0&(data))>>4)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_58_pu(data)                        ((0x00000008&(data))>>3)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_58_pd(data)                        ((0x00000004&(data))>>2)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_58_ds(data)                        ((0x00000002&(data))>>1)
#define  PINMUX_ST_GPIO_ST_CFG_11_get_st_gpio_58_sr(data)                        (0x00000001&(data))

#define  PINMUX_ST_GPIO_ST_CFG_12                                               0x18060238
#define  PINMUX_ST_GPIO_ST_CFG_12_reg_addr                                       "0xB8060238"
#define  PINMUX_ST_GPIO_ST_CFG_12_reg                                            0xB8060238
#define  PINMUX_ST_GPIO_ST_CFG_12_inst_addr                                      "0x0053"
#define  set_PINMUX_ST_GPIO_ST_CFG_12_reg(data)                                  (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_12_reg)=data)
#define  get_PINMUX_ST_GPIO_ST_CFG_12_reg                                        (*((volatile unsigned int*)PINMUX_ST_GPIO_ST_CFG_12_reg))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_ps_shift                            (28)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_pu_shift                            (27)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_pd_shift                            (26)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_ds_shift                            (25)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_sr_shift                            (24)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_ps_shift                            (20)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_pu_shift                            (19)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_pd_shift                            (18)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_ds_shift                            (17)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_sr_shift                            (16)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_ps_mask                             (0xF0000000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_pu_mask                             (0x08000000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_pd_mask                             (0x04000000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_ds_mask                             (0x02000000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_sr_mask                             (0x01000000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_ps_mask                             (0x00F00000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_pu_mask                             (0x00080000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_pd_mask                             (0x00040000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_ds_mask                             (0x00020000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_sr_mask                             (0x00010000)
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_ps(data)                            (0xF0000000&((data)<<28))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_pu(data)                            (0x08000000&((data)<<27))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_pd(data)                            (0x04000000&((data)<<26))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_ds(data)                            (0x02000000&((data)<<25))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_59_sr(data)                            (0x01000000&((data)<<24))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_ps(data)                            (0x00F00000&((data)<<20))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_pu(data)                            (0x00080000&((data)<<19))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_pd(data)                            (0x00040000&((data)<<18))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_ds(data)                            (0x00020000&((data)<<17))
#define  PINMUX_ST_GPIO_ST_CFG_12_st_gpio_60_sr(data)                            (0x00010000&((data)<<16))
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_59_ps(data)                        ((0xF0000000&(data))>>28)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_59_pu(data)                        ((0x08000000&(data))>>27)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_59_pd(data)                        ((0x04000000&(data))>>26)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_59_ds(data)                        ((0x02000000&(data))>>25)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_59_sr(data)                        ((0x01000000&(data))>>24)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_60_ps(data)                        ((0x00F00000&(data))>>20)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_60_pu(data)                        ((0x00080000&(data))>>19)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_60_pd(data)                        ((0x00040000&(data))>>18)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_60_ds(data)                        ((0x00020000&(data))>>17)
#define  PINMUX_ST_GPIO_ST_CFG_12_get_st_gpio_60_sr(data)                        ((0x00010000&(data))>>16)

#define  PINMUX_ST_ST_SMT_0                                                     0x1806023C
#define  PINMUX_ST_ST_SMT_0_reg_addr                                             "0xB806023C"
#define  PINMUX_ST_ST_SMT_0_reg                                                  0xB806023C
#define  PINMUX_ST_ST_SMT_0_inst_addr                                            "0x0054"
#define  set_PINMUX_ST_ST_SMT_0_reg(data)                                        (*((volatile unsigned int*)PINMUX_ST_ST_SMT_0_reg)=data)
#define  get_PINMUX_ST_ST_SMT_0_reg                                              (*((volatile unsigned int*)PINMUX_ST_ST_SMT_0_reg))
#define  PINMUX_ST_ST_SMT_0_st_gpio_00_smt_shift                                 (31)
#define  PINMUX_ST_ST_SMT_0_st_gpio_01_smt_shift                                 (30)
#define  PINMUX_ST_ST_SMT_0_st_gpio_02_smt_shift                                 (29)
#define  PINMUX_ST_ST_SMT_0_st_gpio_03_smt_shift                                 (28)
#define  PINMUX_ST_ST_SMT_0_st_gpio_04_smt_shift                                 (27)
#define  PINMUX_ST_ST_SMT_0_st_gpio_05_smt_shift                                 (26)
#define  PINMUX_ST_ST_SMT_0_st_gpio_06_smt_shift                                 (25)
#define  PINMUX_ST_ST_SMT_0_st_gpio_07_smt_shift                                 (24)
#define  PINMUX_ST_ST_SMT_0_st_gpio_08_smt_shift                                 (23)
#define  PINMUX_ST_ST_SMT_0_st_gpio_09_smt_shift                                 (22)
#define  PINMUX_ST_ST_SMT_0_st_gpio_10_smt_shift                                 (21)
#define  PINMUX_ST_ST_SMT_0_st_gpio_11_smt_shift                                 (20)
#define  PINMUX_ST_ST_SMT_0_st_gpio_23_smt_shift                                 (19)
#define  PINMUX_ST_ST_SMT_0_st_gpio_24_smt_shift                                 (18)
#define  PINMUX_ST_ST_SMT_0_st_gpio_25_smt_shift                                 (17)
#define  PINMUX_ST_ST_SMT_0_st_gpio_26_smt_shift                                 (16)
#define  PINMUX_ST_ST_SMT_0_st_gpio_27_smt_shift                                 (15)
#define  PINMUX_ST_ST_SMT_0_st_gpio_28_smt_shift                                 (14)
#define  PINMUX_ST_ST_SMT_0_st_gpio_29_smt_shift                                 (13)
#define  PINMUX_ST_ST_SMT_0_st_gpio_30_smt_shift                                 (12)
#define  PINMUX_ST_ST_SMT_0_st_gpio_31_smt_shift                                 (11)
#define  PINMUX_ST_ST_SMT_0_st_gpio_32_smt_shift                                 (10)
#define  PINMUX_ST_ST_SMT_0_st_gpio_33_smt_shift                                 (9)
#define  PINMUX_ST_ST_SMT_0_st_gpio_34_smt_shift                                 (8)
#define  PINMUX_ST_ST_SMT_0_st_gpio_35_smt_shift                                 (7)
#define  PINMUX_ST_ST_SMT_0_st_gpio_36_smt_shift                                 (6)
#define  PINMUX_ST_ST_SMT_0_st_gpio_37_smt_shift                                 (5)
#define  PINMUX_ST_ST_SMT_0_st_gpio_38_smt_shift                                 (4)
#define  PINMUX_ST_ST_SMT_0_st_gpio_39_smt_shift                                 (3)
#define  PINMUX_ST_ST_SMT_0_st_gpio_40_smt_shift                                 (2)
#define  PINMUX_ST_ST_SMT_0_st_gpio_41_smt_shift                                 (1)
#define  PINMUX_ST_ST_SMT_0_st_gpio_42_smt_shift                                 (0)
#define  PINMUX_ST_ST_SMT_0_st_gpio_00_smt_mask                                  (0x80000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_01_smt_mask                                  (0x40000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_02_smt_mask                                  (0x20000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_03_smt_mask                                  (0x10000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_04_smt_mask                                  (0x08000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_05_smt_mask                                  (0x04000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_06_smt_mask                                  (0x02000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_07_smt_mask                                  (0x01000000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_08_smt_mask                                  (0x00800000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_09_smt_mask                                  (0x00400000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_10_smt_mask                                  (0x00200000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_11_smt_mask                                  (0x00100000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_23_smt_mask                                  (0x00080000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_24_smt_mask                                  (0x00040000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_25_smt_mask                                  (0x00020000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_26_smt_mask                                  (0x00010000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_27_smt_mask                                  (0x00008000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_28_smt_mask                                  (0x00004000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_29_smt_mask                                  (0x00002000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_30_smt_mask                                  (0x00001000)
#define  PINMUX_ST_ST_SMT_0_st_gpio_31_smt_mask                                  (0x00000800)
#define  PINMUX_ST_ST_SMT_0_st_gpio_32_smt_mask                                  (0x00000400)
#define  PINMUX_ST_ST_SMT_0_st_gpio_33_smt_mask                                  (0x00000200)
#define  PINMUX_ST_ST_SMT_0_st_gpio_34_smt_mask                                  (0x00000100)
#define  PINMUX_ST_ST_SMT_0_st_gpio_35_smt_mask                                  (0x00000080)
#define  PINMUX_ST_ST_SMT_0_st_gpio_36_smt_mask                                  (0x00000040)
#define  PINMUX_ST_ST_SMT_0_st_gpio_37_smt_mask                                  (0x00000020)
#define  PINMUX_ST_ST_SMT_0_st_gpio_38_smt_mask                                  (0x00000010)
#define  PINMUX_ST_ST_SMT_0_st_gpio_39_smt_mask                                  (0x00000008)
#define  PINMUX_ST_ST_SMT_0_st_gpio_40_smt_mask                                  (0x00000004)
#define  PINMUX_ST_ST_SMT_0_st_gpio_41_smt_mask                                  (0x00000002)
#define  PINMUX_ST_ST_SMT_0_st_gpio_42_smt_mask                                  (0x00000001)
#define  PINMUX_ST_ST_SMT_0_st_gpio_00_smt(data)                                 (0x80000000&((data)<<31))
#define  PINMUX_ST_ST_SMT_0_st_gpio_01_smt(data)                                 (0x40000000&((data)<<30))
#define  PINMUX_ST_ST_SMT_0_st_gpio_02_smt(data)                                 (0x20000000&((data)<<29))
#define  PINMUX_ST_ST_SMT_0_st_gpio_03_smt(data)                                 (0x10000000&((data)<<28))
#define  PINMUX_ST_ST_SMT_0_st_gpio_04_smt(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_ST_ST_SMT_0_st_gpio_05_smt(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_ST_ST_SMT_0_st_gpio_06_smt(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_ST_ST_SMT_0_st_gpio_07_smt(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_ST_ST_SMT_0_st_gpio_08_smt(data)                                 (0x00800000&((data)<<23))
#define  PINMUX_ST_ST_SMT_0_st_gpio_09_smt(data)                                 (0x00400000&((data)<<22))
#define  PINMUX_ST_ST_SMT_0_st_gpio_10_smt(data)                                 (0x00200000&((data)<<21))
#define  PINMUX_ST_ST_SMT_0_st_gpio_11_smt(data)                                 (0x00100000&((data)<<20))
#define  PINMUX_ST_ST_SMT_0_st_gpio_23_smt(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_ST_ST_SMT_0_st_gpio_24_smt(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_ST_ST_SMT_0_st_gpio_25_smt(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_ST_ST_SMT_0_st_gpio_26_smt(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_ST_ST_SMT_0_st_gpio_27_smt(data)                                 (0x00008000&((data)<<15))
#define  PINMUX_ST_ST_SMT_0_st_gpio_28_smt(data)                                 (0x00004000&((data)<<14))
#define  PINMUX_ST_ST_SMT_0_st_gpio_29_smt(data)                                 (0x00002000&((data)<<13))
#define  PINMUX_ST_ST_SMT_0_st_gpio_30_smt(data)                                 (0x00001000&((data)<<12))
#define  PINMUX_ST_ST_SMT_0_st_gpio_31_smt(data)                                 (0x00000800&((data)<<11))
#define  PINMUX_ST_ST_SMT_0_st_gpio_32_smt(data)                                 (0x00000400&((data)<<10))
#define  PINMUX_ST_ST_SMT_0_st_gpio_33_smt(data)                                 (0x00000200&((data)<<9))
#define  PINMUX_ST_ST_SMT_0_st_gpio_34_smt(data)                                 (0x00000100&((data)<<8))
#define  PINMUX_ST_ST_SMT_0_st_gpio_35_smt(data)                                 (0x00000080&((data)<<7))
#define  PINMUX_ST_ST_SMT_0_st_gpio_36_smt(data)                                 (0x00000040&((data)<<6))
#define  PINMUX_ST_ST_SMT_0_st_gpio_37_smt(data)                                 (0x00000020&((data)<<5))
#define  PINMUX_ST_ST_SMT_0_st_gpio_38_smt(data)                                 (0x00000010&((data)<<4))
#define  PINMUX_ST_ST_SMT_0_st_gpio_39_smt(data)                                 (0x00000008&((data)<<3))
#define  PINMUX_ST_ST_SMT_0_st_gpio_40_smt(data)                                 (0x00000004&((data)<<2))
#define  PINMUX_ST_ST_SMT_0_st_gpio_41_smt(data)                                 (0x00000002&((data)<<1))
#define  PINMUX_ST_ST_SMT_0_st_gpio_42_smt(data)                                 (0x00000001&(data))
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_00_smt(data)                             ((0x80000000&(data))>>31)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_01_smt(data)                             ((0x40000000&(data))>>30)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_02_smt(data)                             ((0x20000000&(data))>>29)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_03_smt(data)                             ((0x10000000&(data))>>28)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_04_smt(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_05_smt(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_06_smt(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_07_smt(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_08_smt(data)                             ((0x00800000&(data))>>23)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_09_smt(data)                             ((0x00400000&(data))>>22)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_10_smt(data)                             ((0x00200000&(data))>>21)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_11_smt(data)                             ((0x00100000&(data))>>20)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_23_smt(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_24_smt(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_25_smt(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_26_smt(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_27_smt(data)                             ((0x00008000&(data))>>15)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_28_smt(data)                             ((0x00004000&(data))>>14)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_29_smt(data)                             ((0x00002000&(data))>>13)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_30_smt(data)                             ((0x00001000&(data))>>12)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_31_smt(data)                             ((0x00000800&(data))>>11)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_32_smt(data)                             ((0x00000400&(data))>>10)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_33_smt(data)                             ((0x00000200&(data))>>9)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_34_smt(data)                             ((0x00000100&(data))>>8)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_35_smt(data)                             ((0x00000080&(data))>>7)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_36_smt(data)                             ((0x00000040&(data))>>6)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_37_smt(data)                             ((0x00000020&(data))>>5)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_38_smt(data)                             ((0x00000010&(data))>>4)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_39_smt(data)                             ((0x00000008&(data))>>3)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_40_smt(data)                             ((0x00000004&(data))>>2)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_41_smt(data)                             ((0x00000002&(data))>>1)
#define  PINMUX_ST_ST_SMT_0_get_st_gpio_42_smt(data)                             (0x00000001&(data))

#define  PINMUX_ST_ST_SMT_1                                                     0x18060240
#define  PINMUX_ST_ST_SMT_1_reg_addr                                             "0xB8060240"
#define  PINMUX_ST_ST_SMT_1_reg                                                  0xB8060240
#define  PINMUX_ST_ST_SMT_1_inst_addr                                            "0x0055"
#define  set_PINMUX_ST_ST_SMT_1_reg(data)                                        (*((volatile unsigned int*)PINMUX_ST_ST_SMT_1_reg)=data)
#define  get_PINMUX_ST_ST_SMT_1_reg                                              (*((volatile unsigned int*)PINMUX_ST_ST_SMT_1_reg))
#define  PINMUX_ST_ST_SMT_1_st_gpio_43_smt_shift                                 (31)
#define  PINMUX_ST_ST_SMT_1_st_gpio_44_smt_shift                                 (30)
#define  PINMUX_ST_ST_SMT_1_st_gpio_45_smt_shift                                 (29)
#define  PINMUX_ST_ST_SMT_1_st_gpio_46_smt_shift                                 (28)
#define  PINMUX_ST_ST_SMT_1_st_gpio_47_smt_shift                                 (27)
#define  PINMUX_ST_ST_SMT_1_st_gpio_48_smt_shift                                 (26)
#define  PINMUX_ST_ST_SMT_1_st_gpio_49_smt_shift                                 (25)
#define  PINMUX_ST_ST_SMT_1_st_gpio_50_smt_shift                                 (24)
#define  PINMUX_ST_ST_SMT_1_st_gpio_51_smt_shift                                 (23)
#define  PINMUX_ST_ST_SMT_1_st_gpio_52_smt_shift                                 (22)
#define  PINMUX_ST_ST_SMT_1_st_gpio_53_smt_shift                                 (21)
#define  PINMUX_ST_ST_SMT_1_st_gpio_54_smt_shift                                 (20)
#define  PINMUX_ST_ST_SMT_1_st_gpio_55_smt_shift                                 (19)
#define  PINMUX_ST_ST_SMT_1_st_gpio_56_smt_shift                                 (18)
#define  PINMUX_ST_ST_SMT_1_st_gpio_57_smt_shift                                 (17)
#define  PINMUX_ST_ST_SMT_1_st_gpio_58_smt_shift                                 (16)
#define  PINMUX_ST_ST_SMT_1_st_gpio_59_smt_shift                                 (15)
#define  PINMUX_ST_ST_SMT_1_st_gpio_60_smt_shift                                 (14)
#define  PINMUX_ST_ST_SMT_1_st_gpio_49_ten_shift                                 (13)
#define  PINMUX_ST_ST_SMT_1_st_gpio_43_smt_mask                                  (0x80000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_44_smt_mask                                  (0x40000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_45_smt_mask                                  (0x20000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_46_smt_mask                                  (0x10000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_47_smt_mask                                  (0x08000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_48_smt_mask                                  (0x04000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_49_smt_mask                                  (0x02000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_50_smt_mask                                  (0x01000000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_51_smt_mask                                  (0x00800000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_52_smt_mask                                  (0x00400000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_53_smt_mask                                  (0x00200000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_54_smt_mask                                  (0x00100000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_55_smt_mask                                  (0x00080000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_56_smt_mask                                  (0x00040000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_57_smt_mask                                  (0x00020000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_58_smt_mask                                  (0x00010000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_59_smt_mask                                  (0x00008000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_60_smt_mask                                  (0x00004000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_49_ten_mask                                  (0x00002000)
#define  PINMUX_ST_ST_SMT_1_st_gpio_43_smt(data)                                 (0x80000000&((data)<<31))
#define  PINMUX_ST_ST_SMT_1_st_gpio_44_smt(data)                                 (0x40000000&((data)<<30))
#define  PINMUX_ST_ST_SMT_1_st_gpio_45_smt(data)                                 (0x20000000&((data)<<29))
#define  PINMUX_ST_ST_SMT_1_st_gpio_46_smt(data)                                 (0x10000000&((data)<<28))
#define  PINMUX_ST_ST_SMT_1_st_gpio_47_smt(data)                                 (0x08000000&((data)<<27))
#define  PINMUX_ST_ST_SMT_1_st_gpio_48_smt(data)                                 (0x04000000&((data)<<26))
#define  PINMUX_ST_ST_SMT_1_st_gpio_49_smt(data)                                 (0x02000000&((data)<<25))
#define  PINMUX_ST_ST_SMT_1_st_gpio_50_smt(data)                                 (0x01000000&((data)<<24))
#define  PINMUX_ST_ST_SMT_1_st_gpio_51_smt(data)                                 (0x00800000&((data)<<23))
#define  PINMUX_ST_ST_SMT_1_st_gpio_52_smt(data)                                 (0x00400000&((data)<<22))
#define  PINMUX_ST_ST_SMT_1_st_gpio_53_smt(data)                                 (0x00200000&((data)<<21))
#define  PINMUX_ST_ST_SMT_1_st_gpio_54_smt(data)                                 (0x00100000&((data)<<20))
#define  PINMUX_ST_ST_SMT_1_st_gpio_55_smt(data)                                 (0x00080000&((data)<<19))
#define  PINMUX_ST_ST_SMT_1_st_gpio_56_smt(data)                                 (0x00040000&((data)<<18))
#define  PINMUX_ST_ST_SMT_1_st_gpio_57_smt(data)                                 (0x00020000&((data)<<17))
#define  PINMUX_ST_ST_SMT_1_st_gpio_58_smt(data)                                 (0x00010000&((data)<<16))
#define  PINMUX_ST_ST_SMT_1_st_gpio_59_smt(data)                                 (0x00008000&((data)<<15))
#define  PINMUX_ST_ST_SMT_1_st_gpio_60_smt(data)                                 (0x00004000&((data)<<14))
#define  PINMUX_ST_ST_SMT_1_st_gpio_49_ten(data)                                 (0x00002000&((data)<<13))
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_43_smt(data)                             ((0x80000000&(data))>>31)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_44_smt(data)                             ((0x40000000&(data))>>30)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_45_smt(data)                             ((0x20000000&(data))>>29)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_46_smt(data)                             ((0x10000000&(data))>>28)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_47_smt(data)                             ((0x08000000&(data))>>27)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_48_smt(data)                             ((0x04000000&(data))>>26)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_49_smt(data)                             ((0x02000000&(data))>>25)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_50_smt(data)                             ((0x01000000&(data))>>24)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_51_smt(data)                             ((0x00800000&(data))>>23)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_52_smt(data)                             ((0x00400000&(data))>>22)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_53_smt(data)                             ((0x00200000&(data))>>21)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_54_smt(data)                             ((0x00100000&(data))>>20)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_55_smt(data)                             ((0x00080000&(data))>>19)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_56_smt(data)                             ((0x00040000&(data))>>18)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_57_smt(data)                             ((0x00020000&(data))>>17)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_58_smt(data)                             ((0x00010000&(data))>>16)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_59_smt(data)                             ((0x00008000&(data))>>15)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_60_smt(data)                             ((0x00004000&(data))>>14)
#define  PINMUX_ST_ST_SMT_1_get_st_gpio_49_ten(data)                             ((0x00002000&(data))>>13)

#define  PINMUX_ST_Pin_Mux_Ctrl0                                                0x18060244
#define  PINMUX_ST_Pin_Mux_Ctrl0_reg_addr                                        "0xB8060244"
#define  PINMUX_ST_Pin_Mux_Ctrl0_reg                                             0xB8060244
#define  PINMUX_ST_Pin_Mux_Ctrl0_inst_addr                                       "0x0056"
#define  set_PINMUX_ST_Pin_Mux_Ctrl0_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_Pin_Mux_Ctrl0_reg)=data)
#define  get_PINMUX_ST_Pin_Mux_Ctrl0_reg                                         (*((volatile unsigned int*)PINMUX_ST_Pin_Mux_Ctrl0_reg))
#define  PINMUX_ST_Pin_Mux_Ctrl0_dmic_clk_data_0_sel_shift                       (28)
#define  PINMUX_ST_Pin_Mux_Ctrl0_dmic_clk_data_1_sel_shift                       (24)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tclk_clk_sel_shift                        (20)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tdi_sel_shift                             (16)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tms_in_sel_shift                          (12)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_trst_sel_shift                            (8)
#define  PINMUX_ST_Pin_Mux_Ctrl0_emcu_ejtag_tclk_clk_sel_shift                   (4)
#define  PINMUX_ST_Pin_Mux_Ctrl0_emcu_ejtag_tdi_sel_shift                        (0)
#define  PINMUX_ST_Pin_Mux_Ctrl0_dmic_clk_data_0_sel_mask                        (0x30000000)
#define  PINMUX_ST_Pin_Mux_Ctrl0_dmic_clk_data_1_sel_mask                        (0x03000000)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tclk_clk_sel_mask                         (0x00700000)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tdi_sel_mask                              (0x00030000)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tms_in_sel_mask                           (0x00007000)
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_trst_sel_mask                             (0x00000300)
#define  PINMUX_ST_Pin_Mux_Ctrl0_emcu_ejtag_tclk_clk_sel_mask                    (0x00000030)
#define  PINMUX_ST_Pin_Mux_Ctrl0_emcu_ejtag_tdi_sel_mask                         (0x00000003)
#define  PINMUX_ST_Pin_Mux_Ctrl0_dmic_clk_data_0_sel(data)                       (0x30000000&((data)<<28))
#define  PINMUX_ST_Pin_Mux_Ctrl0_dmic_clk_data_1_sel(data)                       (0x03000000&((data)<<24))
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tclk_clk_sel(data)                        (0x00700000&((data)<<20))
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tdi_sel(data)                             (0x00030000&((data)<<16))
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_tms_in_sel(data)                          (0x00007000&((data)<<12))
#define  PINMUX_ST_Pin_Mux_Ctrl0_ejtag_trst_sel(data)                            (0x00000300&((data)<<8))
#define  PINMUX_ST_Pin_Mux_Ctrl0_emcu_ejtag_tclk_clk_sel(data)                   (0x00000030&((data)<<4))
#define  PINMUX_ST_Pin_Mux_Ctrl0_emcu_ejtag_tdi_sel(data)                        (0x00000003&(data))
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_dmic_clk_data_0_sel(data)                   ((0x30000000&(data))>>28)
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_dmic_clk_data_1_sel(data)                   ((0x03000000&(data))>>24)
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_ejtag_tclk_clk_sel(data)                    ((0x00700000&(data))>>20)
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_ejtag_tdi_sel(data)                         ((0x00030000&(data))>>16)
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_ejtag_tms_in_sel(data)                      ((0x00007000&(data))>>12)
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_ejtag_trst_sel(data)                        ((0x00000300&(data))>>8)
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_emcu_ejtag_tclk_clk_sel(data)               ((0x00000030&(data))>>4)
#define  PINMUX_ST_Pin_Mux_Ctrl0_get_emcu_ejtag_tdi_sel(data)                    (0x00000003&(data))

#define  PINMUX_ST_Pin_Mux_Ctrl1                                                0x18060248
#define  PINMUX_ST_Pin_Mux_Ctrl1_reg_addr                                        "0xB8060248"
#define  PINMUX_ST_Pin_Mux_Ctrl1_reg                                             0xB8060248
#define  PINMUX_ST_Pin_Mux_Ctrl1_inst_addr                                       "0x0057"
#define  set_PINMUX_ST_Pin_Mux_Ctrl1_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_Pin_Mux_Ctrl1_reg)=data)
#define  get_PINMUX_ST_Pin_Mux_Ctrl1_reg                                         (*((volatile unsigned int*)PINMUX_ST_Pin_Mux_Ctrl1_reg))
#define  PINMUX_ST_Pin_Mux_Ctrl1_emcu_ejtag_tms_sel_shift                        (28)
#define  PINMUX_ST_Pin_Mux_Ctrl1_emcu_ejtag_trst_sel_shift                       (24)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c0_scl_in_sel_shift                           (20)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c0_sda_in_sel_shift                           (16)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c5_scl_in_sel_shift                           (12)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c5_sda_in_sel_shift                           (8)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c_ctrl_en_shift                               (4)
#define  PINMUX_ST_Pin_Mux_Ctrl1_uart0_rxdi_sel_shift                            (0)
#define  PINMUX_ST_Pin_Mux_Ctrl1_emcu_ejtag_tms_sel_mask                         (0x30000000)
#define  PINMUX_ST_Pin_Mux_Ctrl1_emcu_ejtag_trst_sel_mask                        (0x03000000)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c0_scl_in_sel_mask                            (0x00300000)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c0_sda_in_sel_mask                            (0x00030000)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c5_scl_in_sel_mask                            (0x00003000)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c5_sda_in_sel_mask                            (0x00000300)
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c_ctrl_en_mask                                (0x00000010)
#define  PINMUX_ST_Pin_Mux_Ctrl1_uart0_rxdi_sel_mask                             (0x00000007)
#define  PINMUX_ST_Pin_Mux_Ctrl1_emcu_ejtag_tms_sel(data)                        (0x30000000&((data)<<28))
#define  PINMUX_ST_Pin_Mux_Ctrl1_emcu_ejtag_trst_sel(data)                       (0x03000000&((data)<<24))
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c0_scl_in_sel(data)                           (0x00300000&((data)<<20))
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c0_sda_in_sel(data)                           (0x00030000&((data)<<16))
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c5_scl_in_sel(data)                           (0x00003000&((data)<<12))
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c5_sda_in_sel(data)                           (0x00000300&((data)<<8))
#define  PINMUX_ST_Pin_Mux_Ctrl1_i2c_ctrl_en(data)                               (0x00000010&((data)<<4))
#define  PINMUX_ST_Pin_Mux_Ctrl1_uart0_rxdi_sel(data)                            (0x00000007&(data))
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_emcu_ejtag_tms_sel(data)                    ((0x30000000&(data))>>28)
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_emcu_ejtag_trst_sel(data)                   ((0x03000000&(data))>>24)
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_i2c0_scl_in_sel(data)                       ((0x00300000&(data))>>20)
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_i2c0_sda_in_sel(data)                       ((0x00030000&(data))>>16)
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_i2c5_scl_in_sel(data)                       ((0x00003000&(data))>>12)
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_i2c5_sda_in_sel(data)                       ((0x00000300&(data))>>8)
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_i2c_ctrl_en(data)                           ((0x00000010&(data))>>4)
#define  PINMUX_ST_Pin_Mux_Ctrl1_get_uart0_rxdi_sel(data)                        (0x00000007&(data))

#define  PINMUX_ST_Pin_Mux_Ctrl2                                                0x1806024C
#define  PINMUX_ST_Pin_Mux_Ctrl2_reg_addr                                        "0xB806024C"
#define  PINMUX_ST_Pin_Mux_Ctrl2_reg                                             0xB806024C
#define  PINMUX_ST_Pin_Mux_Ctrl2_inst_addr                                       "0x0058"
#define  set_PINMUX_ST_Pin_Mux_Ctrl2_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_Pin_Mux_Ctrl2_reg)=data)
#define  get_PINMUX_ST_Pin_Mux_Ctrl2_reg                                         (*((volatile unsigned int*)PINMUX_ST_Pin_Mux_Ctrl2_reg))
#define  PINMUX_ST_Pin_Mux_Ctrl2_uart1_rxdi_sel_shift                            (28)
#define  PINMUX_ST_Pin_Mux_Ctrl2_uartrbus_rx_sel_shift                           (24)
#define  PINMUX_ST_Pin_Mux_Ctrl2_st_testpin_mux_shift                            (0)
#define  PINMUX_ST_Pin_Mux_Ctrl2_uart1_rxdi_sel_mask                             (0x70000000)
#define  PINMUX_ST_Pin_Mux_Ctrl2_uartrbus_rx_sel_mask                            (0x07000000)
#define  PINMUX_ST_Pin_Mux_Ctrl2_st_testpin_mux_mask                             (0x000000FF)
#define  PINMUX_ST_Pin_Mux_Ctrl2_uart1_rxdi_sel(data)                            (0x70000000&((data)<<28))
#define  PINMUX_ST_Pin_Mux_Ctrl2_uartrbus_rx_sel(data)                           (0x07000000&((data)<<24))
#define  PINMUX_ST_Pin_Mux_Ctrl2_st_testpin_mux(data)                            (0x000000FF&(data))
#define  PINMUX_ST_Pin_Mux_Ctrl2_get_uart1_rxdi_sel(data)                        ((0x70000000&(data))>>28)
#define  PINMUX_ST_Pin_Mux_Ctrl2_get_uartrbus_rx_sel(data)                       ((0x07000000&(data))>>24)
#define  PINMUX_ST_Pin_Mux_Ctrl2_get_st_testpin_mux(data)                        (0x000000FF&(data))

#define  PINMUX_ST_HPD_R1K_Ctrl0                                                0x180602F0
#define  PINMUX_ST_HPD_R1K_Ctrl0_reg_addr                                        "0xB80602F0"
#define  PINMUX_ST_HPD_R1K_Ctrl0_reg                                             0xB80602F0
#define  PINMUX_ST_HPD_R1K_Ctrl0_inst_addr                                       "0x0059"
#define  set_PINMUX_ST_HPD_R1K_Ctrl0_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_HPD_R1K_Ctrl0_reg)=data)
#define  get_PINMUX_ST_HPD_R1K_Ctrl0_reg                                         (*((volatile unsigned int*)PINMUX_ST_HPD_R1K_Ctrl0_reg))
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_h5vdet_shift                          (31)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_pd_shift                              (4)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_r1k_en_shift                          (3)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_reg_sel_shift                         (0)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_h5vdet_mask                           (0x80000000)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_pd_mask                               (0x00000010)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_r1k_en_mask                           (0x00000008)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_reg_sel_mask                          (0x00000007)
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_h5vdet(data)                          (0x80000000&((data)<<31))
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_pd(data)                              (0x00000010&((data)<<4))
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_r1k_en(data)                          (0x00000008&((data)<<3))
#define  PINMUX_ST_HPD_R1K_Ctrl0_hdmirx_p0_reg_sel(data)                         (0x00000007&(data))
#define  PINMUX_ST_HPD_R1K_Ctrl0_get_hdmirx_p0_h5vdet(data)                      ((0x80000000&(data))>>31)
#define  PINMUX_ST_HPD_R1K_Ctrl0_get_hdmirx_p0_pd(data)                          ((0x00000010&(data))>>4)
#define  PINMUX_ST_HPD_R1K_Ctrl0_get_hdmirx_p0_r1k_en(data)                      ((0x00000008&(data))>>3)
#define  PINMUX_ST_HPD_R1K_Ctrl0_get_hdmirx_p0_reg_sel(data)                     (0x00000007&(data))

#define  PINMUX_ST_HPD_R1K_Ctrl1                                                0x180602F4
#define  PINMUX_ST_HPD_R1K_Ctrl1_reg_addr                                        "0xB80602F4"
#define  PINMUX_ST_HPD_R1K_Ctrl1_reg                                             0xB80602F4
#define  PINMUX_ST_HPD_R1K_Ctrl1_inst_addr                                       "0x005A"
#define  set_PINMUX_ST_HPD_R1K_Ctrl1_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_HPD_R1K_Ctrl1_reg)=data)
#define  get_PINMUX_ST_HPD_R1K_Ctrl1_reg                                         (*((volatile unsigned int*)PINMUX_ST_HPD_R1K_Ctrl1_reg))
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_h5vdet_shift                          (31)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_pd_shift                              (4)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_r1k_en_shift                          (3)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_reg_sel_shift                         (0)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_h5vdet_mask                           (0x80000000)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_pd_mask                               (0x00000010)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_r1k_en_mask                           (0x00000008)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_reg_sel_mask                          (0x00000007)
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_h5vdet(data)                          (0x80000000&((data)<<31))
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_pd(data)                              (0x00000010&((data)<<4))
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_r1k_en(data)                          (0x00000008&((data)<<3))
#define  PINMUX_ST_HPD_R1K_Ctrl1_hdmirx_p1_reg_sel(data)                         (0x00000007&(data))
#define  PINMUX_ST_HPD_R1K_Ctrl1_get_hdmirx_p1_h5vdet(data)                      ((0x80000000&(data))>>31)
#define  PINMUX_ST_HPD_R1K_Ctrl1_get_hdmirx_p1_pd(data)                          ((0x00000010&(data))>>4)
#define  PINMUX_ST_HPD_R1K_Ctrl1_get_hdmirx_p1_r1k_en(data)                      ((0x00000008&(data))>>3)
#define  PINMUX_ST_HPD_R1K_Ctrl1_get_hdmirx_p1_reg_sel(data)                     (0x00000007&(data))

#define  PINMUX_ST_HPD_R1K_Ctrl2                                                0x180602F8
#define  PINMUX_ST_HPD_R1K_Ctrl2_reg_addr                                        "0xB80602F8"
#define  PINMUX_ST_HPD_R1K_Ctrl2_reg                                             0xB80602F8
#define  PINMUX_ST_HPD_R1K_Ctrl2_inst_addr                                       "0x005B"
#define  set_PINMUX_ST_HPD_R1K_Ctrl2_reg(data)                                   (*((volatile unsigned int*)PINMUX_ST_HPD_R1K_Ctrl2_reg)=data)
#define  get_PINMUX_ST_HPD_R1K_Ctrl2_reg                                         (*((volatile unsigned int*)PINMUX_ST_HPD_R1K_Ctrl2_reg))
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_h5vdet_shift                          (31)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_pd_shift                              (4)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_r1k_en_shift                          (3)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_reg_sel_shift                         (0)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_h5vdet_mask                           (0x80000000)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_pd_mask                               (0x00000010)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_r1k_en_mask                           (0x00000008)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_reg_sel_mask                          (0x00000007)
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_h5vdet(data)                          (0x80000000&((data)<<31))
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_pd(data)                              (0x00000010&((data)<<4))
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_r1k_en(data)                          (0x00000008&((data)<<3))
#define  PINMUX_ST_HPD_R1K_Ctrl2_hdmirx_p2_reg_sel(data)                         (0x00000007&(data))
#define  PINMUX_ST_HPD_R1K_Ctrl2_get_hdmirx_p2_h5vdet(data)                      ((0x80000000&(data))>>31)
#define  PINMUX_ST_HPD_R1K_Ctrl2_get_hdmirx_p2_pd(data)                          ((0x00000010&(data))>>4)
#define  PINMUX_ST_HPD_R1K_Ctrl2_get_hdmirx_p2_r1k_en(data)                      ((0x00000008&(data))>>3)
#define  PINMUX_ST_HPD_R1K_Ctrl2_get_hdmirx_p2_reg_sel(data)                     (0x00000007&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PINMUX register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_00_ps:4;
        RBus_UInt32  gpio_00_pu:1;
        RBus_UInt32  gpio_00_pd:1;
        RBus_UInt32  gpio_00_ds:1;
        RBus_UInt32  gpio_00_sr:1;
        RBus_UInt32  gpio_01_ps:4;
        RBus_UInt32  gpio_01_pu:1;
        RBus_UInt32  gpio_01_pd:1;
        RBus_UInt32  gpio_01_ds:1;
        RBus_UInt32  gpio_01_sr:1;
        RBus_UInt32  gpio_02_ps:4;
        RBus_UInt32  gpio_02_pu:1;
        RBus_UInt32  gpio_02_pd:1;
        RBus_UInt32  gpio_02_ds:1;
        RBus_UInt32  gpio_02_sr:1;
        RBus_UInt32  gpio_03_ps:4;
        RBus_UInt32  gpio_03_pu:1;
        RBus_UInt32  gpio_03_pd:1;
        RBus_UInt32  gpio_03_ds:1;
        RBus_UInt32  gpio_03_sr:1;
    };
}pinmux_gpio_tleft_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_04_ps:4;
        RBus_UInt32  gpio_04_pu:1;
        RBus_UInt32  gpio_04_pd:1;
        RBus_UInt32  gpio_04_ds:1;
        RBus_UInt32  gpio_04_sr:1;
        RBus_UInt32  gpio_05_ps:4;
        RBus_UInt32  gpio_05_pu:1;
        RBus_UInt32  gpio_05_pd:1;
        RBus_UInt32  gpio_05_ds:1;
        RBus_UInt32  gpio_05_sr:1;
        RBus_UInt32  gpio_06_ps:4;
        RBus_UInt32  gpio_06_pu:1;
        RBus_UInt32  gpio_06_pd:1;
        RBus_UInt32  gpio_06_ds:1;
        RBus_UInt32  gpio_06_sr:1;
        RBus_UInt32  gpio_07_ps:4;
        RBus_UInt32  gpio_07_pu:1;
        RBus_UInt32  gpio_07_pd:1;
        RBus_UInt32  gpio_07_ds:1;
        RBus_UInt32  gpio_07_sr:1;
    };
}pinmux_gpio_tleft_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_08_ps:4;
        RBus_UInt32  gpio_08_pu:1;
        RBus_UInt32  gpio_08_pd:1;
        RBus_UInt32  gpio_08_ds:1;
        RBus_UInt32  gpio_08_sr:1;
        RBus_UInt32  gpio_09_ps:4;
        RBus_UInt32  gpio_09_pu:1;
        RBus_UInt32  gpio_09_pd:1;
        RBus_UInt32  gpio_09_ds:1;
        RBus_UInt32  gpio_09_sr:1;
        RBus_UInt32  gpio_10_ps:4;
        RBus_UInt32  gpio_10_pu:1;
        RBus_UInt32  gpio_10_pd:1;
        RBus_UInt32  gpio_10_ds:1;
        RBus_UInt32  gpio_10_sr:1;
        RBus_UInt32  gpio_11_ps:4;
        RBus_UInt32  gpio_11_pu:1;
        RBus_UInt32  gpio_11_pd:1;
        RBus_UInt32  gpio_11_ds:1;
        RBus_UInt32  gpio_11_sr:1;
    };
}pinmux_gpio_tleft_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_12_ps:4;
        RBus_UInt32  gpio_12_pu:1;
        RBus_UInt32  gpio_12_pd:1;
        RBus_UInt32  gpio_12_ds:1;
        RBus_UInt32  gpio_12_sr:1;
        RBus_UInt32  gpio_13_ps:4;
        RBus_UInt32  gpio_13_pu:1;
        RBus_UInt32  gpio_13_pd:1;
        RBus_UInt32  gpio_13_ds:1;
        RBus_UInt32  gpio_13_sr:1;
        RBus_UInt32  gpio_14_ps:4;
        RBus_UInt32  gpio_14_pu:1;
        RBus_UInt32  gpio_14_pd:1;
        RBus_UInt32  gpio_14_ds:1;
        RBus_UInt32  gpio_14_sr:1;
        RBus_UInt32  gpio_15_ps:4;
        RBus_UInt32  gpio_15_pu:1;
        RBus_UInt32  gpio_15_pd:1;
        RBus_UInt32  gpio_15_ds:1;
        RBus_UInt32  gpio_15_sr:1;
    };
}pinmux_gpio_tleft_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_16_ps:4;
        RBus_UInt32  gpio_16_pu:1;
        RBus_UInt32  gpio_16_pd:1;
        RBus_UInt32  gpio_16_ds:1;
        RBus_UInt32  gpio_16_sr:1;
        RBus_UInt32  gpio_17_ps:4;
        RBus_UInt32  gpio_17_pu:1;
        RBus_UInt32  gpio_17_pd:1;
        RBus_UInt32  gpio_17_ds:1;
        RBus_UInt32  gpio_17_sr:1;
        RBus_UInt32  gpio_18_ps:4;
        RBus_UInt32  gpio_18_pu:1;
        RBus_UInt32  gpio_18_pd:1;
        RBus_UInt32  gpio_18_ds:1;
        RBus_UInt32  gpio_18_sr:1;
        RBus_UInt32  gpio_19_ps:4;
        RBus_UInt32  gpio_19_pu:1;
        RBus_UInt32  gpio_19_pd:1;
        RBus_UInt32  gpio_19_ds:1;
        RBus_UInt32  gpio_19_sr:1;
    };
}pinmux_gpio_tleft_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_20_ps:4;
        RBus_UInt32  gpio_20_pu:1;
        RBus_UInt32  gpio_20_pd:1;
        RBus_UInt32  gpio_20_ds:1;
        RBus_UInt32  gpio_20_sr:1;
        RBus_UInt32  gpio_21_ps:4;
        RBus_UInt32  gpio_21_pu:1;
        RBus_UInt32  gpio_21_pd:1;
        RBus_UInt32  gpio_21_ds:1;
        RBus_UInt32  gpio_21_sr:1;
        RBus_UInt32  gpio_22_ps:4;
        RBus_UInt32  gpio_22_pu:1;
        RBus_UInt32  gpio_22_pd:1;
        RBus_UInt32  gpio_22_ds:1;
        RBus_UInt32  gpio_22_sr:1;
        RBus_UInt32  gpio_23_ps:4;
        RBus_UInt32  gpio_23_pu:1;
        RBus_UInt32  gpio_23_pd:1;
        RBus_UInt32  gpio_23_ds:1;
        RBus_UInt32  gpio_23_sr:1;
    };
}pinmux_gpio_tleft_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_24_ps:4;
        RBus_UInt32  gpio_24_pu:1;
        RBus_UInt32  gpio_24_pd:1;
        RBus_UInt32  gpio_24_ds:1;
        RBus_UInt32  gpio_24_sr:1;
        RBus_UInt32  gpio_25_ps:4;
        RBus_UInt32  gpio_25_pu:1;
        RBus_UInt32  gpio_25_pd:1;
        RBus_UInt32  gpio_25_ds:1;
        RBus_UInt32  gpio_25_sr:1;
        RBus_UInt32  gpio_26_ps:4;
        RBus_UInt32  gpio_26_pu:1;
        RBus_UInt32  gpio_26_pd:1;
        RBus_UInt32  gpio_26_ds:1;
        RBus_UInt32  gpio_26_sr:1;
        RBus_UInt32  gpio_27_ps:4;
        RBus_UInt32  gpio_27_pu:1;
        RBus_UInt32  gpio_27_pd:1;
        RBus_UInt32  gpio_27_ds:1;
        RBus_UInt32  gpio_27_sr:1;
    };
}pinmux_gpio_tleft_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_28_ps:4;
        RBus_UInt32  gpio_28_pu:1;
        RBus_UInt32  gpio_28_pd:1;
        RBus_UInt32  gpio_28_ds:1;
        RBus_UInt32  gpio_28_sr:1;
        RBus_UInt32  gpio_29_ps:4;
        RBus_UInt32  gpio_29_pu:1;
        RBus_UInt32  gpio_29_pd:1;
        RBus_UInt32  gpio_29_ds:1;
        RBus_UInt32  gpio_29_sr:1;
        RBus_UInt32  gpio_30_ps:4;
        RBus_UInt32  gpio_30_pu:1;
        RBus_UInt32  gpio_30_pd:1;
        RBus_UInt32  gpio_30_ds:1;
        RBus_UInt32  gpio_30_sr:1;
        RBus_UInt32  gpio_31_ps:4;
        RBus_UInt32  gpio_31_pu:1;
        RBus_UInt32  gpio_31_pd:1;
        RBus_UInt32  gpio_31_ds:1;
        RBus_UInt32  gpio_31_sr:1;
    };
}pinmux_gpio_tleft_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_00_smt:1;
        RBus_UInt32  gpio_01_smt:1;
        RBus_UInt32  gpio_02_smt:1;
        RBus_UInt32  gpio_03_smt:1;
        RBus_UInt32  gpio_04_smt:1;
        RBus_UInt32  gpio_05_smt:1;
        RBus_UInt32  gpio_06_smt:1;
        RBus_UInt32  gpio_07_smt:1;
        RBus_UInt32  gpio_08_smt:1;
        RBus_UInt32  gpio_09_smt:1;
        RBus_UInt32  gpio_10_smt:1;
        RBus_UInt32  gpio_11_smt:1;
        RBus_UInt32  gpio_12_smt:1;
        RBus_UInt32  gpio_13_smt:1;
        RBus_UInt32  gpio_14_smt:1;
        RBus_UInt32  gpio_15_smt:1;
        RBus_UInt32  gpio_16_smt:1;
        RBus_UInt32  gpio_17_smt:1;
        RBus_UInt32  gpio_18_smt:1;
        RBus_UInt32  gpio_19_smt:1;
        RBus_UInt32  gpio_20_smt:1;
        RBus_UInt32  gpio_21_smt:1;
        RBus_UInt32  gpio_22_smt:1;
        RBus_UInt32  gpio_23_smt:1;
        RBus_UInt32  gpio_24_smt:1;
        RBus_UInt32  gpio_25_smt:1;
        RBus_UInt32  gpio_26_smt:1;
        RBus_UInt32  gpio_27_smt:1;
        RBus_UInt32  gpio_28_smt:1;
        RBus_UInt32  gpio_29_smt:1;
        RBus_UInt32  gpio_30_smt:1;
        RBus_UInt32  gpio_31_smt:1;
    };
}pinmux_tleft_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_27_ie_v18:1;
        RBus_UInt32  gpio_03_ie_v18:1;
        RBus_UInt32  gpio_02_ie_v18:1;
        RBus_UInt32  gpio_28_ie_v18:1;
        RBus_UInt32  gpio_26_ie_v18:1;
        RBus_UInt32  gpio_14_ea:1;
        RBus_UInt32  gpio_15_ea:1;
        RBus_UInt32  res1:25;
    };
}pinmux_tleft_iev18_ea_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bb_ai2l_ps:4;
        RBus_UInt32  bb_ai2r_ps:4;
        RBus_UInt32  bb_ai3l_ps:4;
        RBus_UInt32  bb_ai3r_ps:4;
        RBus_UInt32  bb_aiol_ps:4;
        RBus_UInt32  bb_aior_ps:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  bb_ai2l_gpi_en:1;
        RBus_UInt32  bb_ai2r_gpi_en:1;
        RBus_UInt32  bb_ai3l_gpi_en:1;
        RBus_UInt32  bb_ai3r_gpi_en:1;
        RBus_UInt32  bb_aiol_gpi_en:1;
        RBus_UInt32  bb_aior_gpi_en:1;
    };
}pinmux_bb_audio_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bb_hpol_ps:4;
        RBus_UInt32  bb_hpor_ps:4;
        RBus_UInt32  res1:22;
        RBus_UInt32  bb_hpol_gpi_en:1;
        RBus_UInt32  bb_hpor_gpi_en:1;
    };
}pinmux_bb_audio_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vsync_ps:4;
        RBus_UInt32  hsync_ps:4;
        RBus_UInt32  vin_0p_ps:4;
        RBus_UInt32  vin_bn_ps:4;
        RBus_UInt32  vin_1p_ps:4;
        RBus_UInt32  vin_gn_ps:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  vsync_gpi_en:1;
        RBus_UInt32  hsync_gpi_en:1;
        RBus_UInt32  vin_0p_gpi_en:1;
        RBus_UInt32  vin_bn_gpi_en:1;
        RBus_UInt32  vin_1p_gpi_en:1;
        RBus_UInt32  vin_gn_gpi_en:1;
    };
}pinmux_ypbpr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vin_2p_ps:4;
        RBus_UInt32  vin_rn_ps:4;
        RBus_UInt32  vin_3p_ps:4;
        RBus_UInt32  vin_y0n_ps:4;
        RBus_UInt32  vin_4p_ps:4;
        RBus_UInt32  vin_5p_ps:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  vin_2p_gpi_en:1;
        RBus_UInt32  vin_rn_gpi_en:1;
        RBus_UInt32  vin_3p_gpi_en:1;
        RBus_UInt32  vin_y0n_gpi_en:1;
        RBus_UInt32  vin_4p_gpi_en:1;
        RBus_UInt32  vin_5p_gpi_en:1;
    };
}pinmux_ypbpr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scart_fsw_0_ps:4;
        RBus_UInt32  vin_10p_ps:4;
        RBus_UInt32  vin_a0n_ps:4;
        RBus_UInt32  res1:17;
        RBus_UInt32  scart_fsw_0_gpi_en:1;
        RBus_UInt32  vin_10p_gpi_en:1;
        RBus_UInt32  vin_a0n_gpi_en:1;
    };
}pinmux_vd_adc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vid_vdac_ps:4;
        RBus_UInt32  vid_vdbs_ps:4;
        RBus_UInt32  res1:22;
        RBus_UInt32  vid_vdac_gpi_en:1;
        RBus_UInt32  vid_vdbs_gpi_en:1;
    };
}pinmux_vd_dac_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_57_ps:4;
        RBus_UInt32  gpio_57_pu:1;
        RBus_UInt32  gpio_57_pd:1;
        RBus_UInt32  gpio_57_ds:1;
        RBus_UInt32  gpio_57_sr:1;
        RBus_UInt32  gpio_58_ps:4;
        RBus_UInt32  gpio_58_pu:1;
        RBus_UInt32  gpio_58_pd:1;
        RBus_UInt32  gpio_58_ds:1;
        RBus_UInt32  gpio_58_sr:1;
        RBus_UInt32  gpio_59_ps:4;
        RBus_UInt32  gpio_59_pu:1;
        RBus_UInt32  gpio_59_pd:1;
        RBus_UInt32  gpio_59_ds:1;
        RBus_UInt32  gpio_59_sr:1;
        RBus_UInt32  gpio_60_ps:4;
        RBus_UInt32  gpio_60_pu:1;
        RBus_UInt32  gpio_60_pd:1;
        RBus_UInt32  gpio_60_ds:1;
        RBus_UInt32  gpio_60_sr:1;
    };
}pinmux_gpio_left_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_61_ps:4;
        RBus_UInt32  gpio_61_pu:1;
        RBus_UInt32  gpio_61_pd:1;
        RBus_UInt32  gpio_61_ds:1;
        RBus_UInt32  gpio_61_sr:1;
        RBus_UInt32  gpio_62_ps:4;
        RBus_UInt32  gpio_62_pu:1;
        RBus_UInt32  gpio_62_pd:1;
        RBus_UInt32  gpio_62_ds:1;
        RBus_UInt32  gpio_62_sr:1;
        RBus_UInt32  gpio_63_ps:4;
        RBus_UInt32  gpio_63_pu:1;
        RBus_UInt32  gpio_63_pd:1;
        RBus_UInt32  gpio_63_ds:1;
        RBus_UInt32  gpio_63_sr:1;
        RBus_UInt32  gpio_64_ps:4;
        RBus_UInt32  gpio_64_pu:1;
        RBus_UInt32  gpio_64_pd:1;
        RBus_UInt32  gpio_64_ds:1;
        RBus_UInt32  gpio_64_sr:1;
    };
}pinmux_gpio_left_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_65_ps:4;
        RBus_UInt32  gpio_65_pu:1;
        RBus_UInt32  gpio_65_pd:1;
        RBus_UInt32  gpio_65_ds:1;
        RBus_UInt32  gpio_65_sr:1;
        RBus_UInt32  gpio_66_ps:4;
        RBus_UInt32  gpio_66_pu:1;
        RBus_UInt32  gpio_66_pd:1;
        RBus_UInt32  gpio_66_ds:1;
        RBus_UInt32  gpio_66_sr:1;
        RBus_UInt32  gpio_67_ps:4;
        RBus_UInt32  gpio_67_pu:1;
        RBus_UInt32  gpio_67_pd:1;
        RBus_UInt32  gpio_67_ds:1;
        RBus_UInt32  gpio_67_sr:1;
        RBus_UInt32  gpio_68_ps:4;
        RBus_UInt32  gpio_68_pu:1;
        RBus_UInt32  gpio_68_pd:1;
        RBus_UInt32  gpio_68_ds:1;
        RBus_UInt32  gpio_68_sr:1;
    };
}pinmux_gpio_left_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_69_ps:4;
        RBus_UInt32  gpio_69_pu:1;
        RBus_UInt32  gpio_69_pd:1;
        RBus_UInt32  gpio_69_ds:1;
        RBus_UInt32  gpio_69_sr:1;
        RBus_UInt32  gpio_70_ps:4;
        RBus_UInt32  gpio_70_pu:1;
        RBus_UInt32  gpio_70_pd:1;
        RBus_UInt32  gpio_70_ds:1;
        RBus_UInt32  gpio_70_sr:1;
        RBus_UInt32  gpio_71_ps:4;
        RBus_UInt32  gpio_71_pu:1;
        RBus_UInt32  gpio_71_pd:1;
        RBus_UInt32  gpio_71_ds:1;
        RBus_UInt32  gpio_71_sr:1;
        RBus_UInt32  gpio_72_ps:4;
        RBus_UInt32  gpio_72_pu:1;
        RBus_UInt32  gpio_72_pd:1;
        RBus_UInt32  gpio_72_ds:1;
        RBus_UInt32  gpio_72_sr:1;
    };
}pinmux_gpio_left_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_73_ps:4;
        RBus_UInt32  gpio_73_pu:1;
        RBus_UInt32  gpio_73_pd:1;
        RBus_UInt32  gpio_73_ds:1;
        RBus_UInt32  gpio_73_sr:1;
        RBus_UInt32  gpio_74_ps:4;
        RBus_UInt32  gpio_74_pu:1;
        RBus_UInt32  gpio_74_pd:1;
        RBus_UInt32  gpio_74_ds:1;
        RBus_UInt32  gpio_74_sr:1;
        RBus_UInt32  gpio_75_ps:4;
        RBus_UInt32  gpio_75_pu:1;
        RBus_UInt32  gpio_75_pd:1;
        RBus_UInt32  gpio_75_ds:1;
        RBus_UInt32  gpio_75_sr:1;
        RBus_UInt32  gpio_76_ps:4;
        RBus_UInt32  gpio_76_pu:1;
        RBus_UInt32  gpio_76_pd:1;
        RBus_UInt32  gpio_76_ds:1;
        RBus_UInt32  gpio_76_sr:1;
    };
}pinmux_gpio_left_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_77_ps:4;
        RBus_UInt32  gpio_77_pu:1;
        RBus_UInt32  gpio_77_pd:1;
        RBus_UInt32  gpio_77_ds:1;
        RBus_UInt32  gpio_77_sr:1;
        RBus_UInt32  gpio_78_ps:4;
        RBus_UInt32  gpio_78_pu:1;
        RBus_UInt32  gpio_78_pd:1;
        RBus_UInt32  gpio_78_ds:1;
        RBus_UInt32  gpio_78_sr:1;
        RBus_UInt32  gpio_79_ps:4;
        RBus_UInt32  gpio_79_pu:1;
        RBus_UInt32  gpio_79_pd:1;
        RBus_UInt32  gpio_79_ds:1;
        RBus_UInt32  gpio_79_sr:1;
        RBus_UInt32  gpio_80_ps:4;
        RBus_UInt32  gpio_80_pu:1;
        RBus_UInt32  gpio_80_pd:1;
        RBus_UInt32  gpio_80_ds:1;
        RBus_UInt32  gpio_80_sr:1;
    };
}pinmux_gpio_left_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_81_ps:4;
        RBus_UInt32  gpio_81_pu:1;
        RBus_UInt32  gpio_81_pd:1;
        RBus_UInt32  gpio_81_ds:1;
        RBus_UInt32  gpio_81_sr:1;
        RBus_UInt32  gpio_82_ps:4;
        RBus_UInt32  gpio_82_pu:1;
        RBus_UInt32  gpio_82_pd:1;
        RBus_UInt32  gpio_82_ds:1;
        RBus_UInt32  gpio_82_sr:1;
        RBus_UInt32  gpio_154_ps:4;
        RBus_UInt32  gpio_154_pu:1;
        RBus_UInt32  gpio_154_pd:1;
        RBus_UInt32  gpio_154_ds:1;
        RBus_UInt32  gpio_154_sr:1;
        RBus_UInt32  gpio_155_ps:4;
        RBus_UInt32  gpio_155_pu:1;
        RBus_UInt32  gpio_155_pd:1;
        RBus_UInt32  gpio_155_ds:1;
        RBus_UInt32  gpio_155_sr:1;
    };
}pinmux_gpio_left_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_156_ps:4;
        RBus_UInt32  gpio_156_pu:1;
        RBus_UInt32  gpio_156_pd:1;
        RBus_UInt32  gpio_156_ds:1;
        RBus_UInt32  gpio_156_sr:1;
        RBus_UInt32  gpio_157_ps:4;
        RBus_UInt32  gpio_157_pu:1;
        RBus_UInt32  gpio_157_pd:1;
        RBus_UInt32  gpio_157_ds:1;
        RBus_UInt32  gpio_157_sr:1;
        RBus_UInt32  gpio_158_ps:4;
        RBus_UInt32  gpio_158_pu:1;
        RBus_UInt32  gpio_158_pd:1;
        RBus_UInt32  gpio_158_ds:1;
        RBus_UInt32  gpio_158_sr:1;
        RBus_UInt32  gpio_159_ps:4;
        RBus_UInt32  gpio_159_pu:1;
        RBus_UInt32  gpio_159_pd:1;
        RBus_UInt32  gpio_159_ds:1;
        RBus_UInt32  gpio_159_sr:1;
    };
}pinmux_gpio_left_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_160_ps:4;
        RBus_UInt32  gpio_160_pu:1;
        RBus_UInt32  gpio_160_pd:1;
        RBus_UInt32  gpio_160_ds:1;
        RBus_UInt32  gpio_160_sr:1;
        RBus_UInt32  res1:24;
    };
}pinmux_gpio_left_cfg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_57_smt:1;
        RBus_UInt32  gpio_58_smt:1;
        RBus_UInt32  gpio_59_smt:1;
        RBus_UInt32  gpio_60_smt:1;
        RBus_UInt32  gpio_61_smt:1;
        RBus_UInt32  gpio_62_smt:1;
        RBus_UInt32  gpio_63_smt:1;
        RBus_UInt32  gpio_64_smt:1;
        RBus_UInt32  gpio_65_smt:1;
        RBus_UInt32  gpio_66_smt:1;
        RBus_UInt32  gpio_67_smt:1;
        RBus_UInt32  gpio_68_smt:1;
        RBus_UInt32  gpio_69_smt:1;
        RBus_UInt32  gpio_70_smt:1;
        RBus_UInt32  gpio_71_smt:1;
        RBus_UInt32  gpio_72_smt:1;
        RBus_UInt32  gpio_73_smt:1;
        RBus_UInt32  gpio_74_smt:1;
        RBus_UInt32  gpio_75_smt:1;
        RBus_UInt32  gpio_76_smt:1;
        RBus_UInt32  gpio_77_smt:1;
        RBus_UInt32  gpio_78_smt:1;
        RBus_UInt32  gpio_79_smt:1;
        RBus_UInt32  gpio_80_smt:1;
        RBus_UInt32  gpio_81_smt:1;
        RBus_UInt32  gpio_82_smt:1;
        RBus_UInt32  gpio_154_smt:1;
        RBus_UInt32  gpio_155_smt:1;
        RBus_UInt32  gpio_156_smt:1;
        RBus_UInt32  gpio_157_smt:1;
        RBus_UInt32  gpio_158_smt:1;
        RBus_UInt32  gpio_159_smt:1;
    };
}pinmux_left_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_160_smt:1;
        RBus_UInt32  gpio_17_ds2:1;
        RBus_UInt32  gpio_62_smt2:1;
        RBus_UInt32  gpio_63_smt2:1;
        RBus_UInt32  gpio_64_smt2:1;
        RBus_UInt32  gpio_65_smt2:1;
        RBus_UInt32  gpio_66_smt2:1;
        RBus_UInt32  gpio_67_smt2:1;
        RBus_UInt32  gpio_68_smt2:1;
        RBus_UInt32  gpio_69_smt2:1;
        RBus_UInt32  gpio_70_smt2:1;
        RBus_UInt32  gpio_71_smt2:1;
        RBus_UInt32  gpio_72_smt2:1;
        RBus_UInt32  gpio_74_smt2:1;
        RBus_UInt32  gpio_75_smt2:1;
        RBus_UInt32  gpio_76_smt2:1;
        RBus_UInt32  gpio_77_smt2:1;
        RBus_UInt32  gpio_154_smt2:1;
        RBus_UInt32  gpio_155_smt2:1;
        RBus_UInt32  gpio_156_smt2:1;
        RBus_UInt32  gpio_157_smt2:1;
        RBus_UInt32  gpio_158_smt2:1;
        RBus_UInt32  gpio_159_smt2:1;
        RBus_UInt32  gpio_160_smt2:1;
        RBus_UInt32  res1:8;
    };
}pinmux_left_smt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  demod_dsc_22_in_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  demod_dsc_in_sel:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  i2c2_scl_in_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  i2c2_sda_in_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  i2c3_scl_in_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  i2c3_sda_in_sel:2;
    };
}pinmux_pin_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  i2c4_scl_in_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  i2c4_sda_in_sel:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  i2s_in_data0_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  i2s_in_data1_sel:3;
        RBus_UInt32  res5:2;
        RBus_UInt32  i2s_in_data2_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  i2s_in_data3_sel:2;
        RBus_UInt32  res7:5;
        RBus_UInt32  ld_spi0_p2_sck_in_sel:3;
    };
}pinmux_pin_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  ld_spi0_p3_sdo_in_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  ld_spi0_p4_sdi_sel:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  ld_spi1_p2_sck_in_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  ld_spi1_p3_sdo_in_sel:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  ld_spi1_p4_sdi_sel:3;
        RBus_UInt32  res6:2;
        RBus_UInt32  sc_cd_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  sc_data_in_sel:2;
        RBus_UInt32  res8:2;
        RBus_UInt32  spi_fcic_sel:2;
    };
}pinmux_pin_mux_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  spi_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  tp0_clk_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  tp0_data_bit0_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  tp0_data_bit1_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  tp0_data_bit2_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  tp0_data_bit3_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  tp0_data_bit4_sel:2;
        RBus_UInt32  res8:2;
        RBus_UInt32  tp0_data_bit5_sel:2;
    };
}pinmux_pin_mux_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  tp0_data_bit6_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  tp0_data_bit7_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  tp0_sync_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  tp0_val_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  tp1_clk_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  tp1_data_bit0_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  tp1_sync_sel:2;
        RBus_UInt32  res8:2;
        RBus_UInt32  tp1_val_sel:2;
    };
}pinmux_pin_mux_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  tp2_clk_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  tp2_data_bit0_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  tp2_sync_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  tp2_val_sel:2;
        RBus_UInt32  res5:16;
    };
}pinmux_pin_mux_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  register_dbg_out:32;
    };
}pinmux_pin_mux_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  testpin_mux:8;
        RBus_UInt32  apr_testpin_mux:4;
        RBus_UInt32  block_testpin_mux:4;
        RBus_UInt32  res1:15;
        RBus_UInt32  spi_porl_release:1;
    };
}pinmux_pin_mux_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_en_out:32;
    };
}pinmux_pin_mux_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_83_ps:4;
        RBus_UInt32  gpio_83_pu:1;
        RBus_UInt32  gpio_83_pd:1;
        RBus_UInt32  gpio_83_ds:1;
        RBus_UInt32  gpio_83_sr:1;
        RBus_UInt32  gpio_84_ps:4;
        RBus_UInt32  gpio_84_pu:1;
        RBus_UInt32  gpio_84_pd:1;
        RBus_UInt32  gpio_84_ds:1;
        RBus_UInt32  gpio_84_sr:1;
        RBus_UInt32  gpio_85_ps:4;
        RBus_UInt32  gpio_85_pu:1;
        RBus_UInt32  gpio_85_pd:1;
        RBus_UInt32  gpio_85_ds:1;
        RBus_UInt32  gpio_85_sr:1;
        RBus_UInt32  gpio_86_ps:4;
        RBus_UInt32  gpio_86_pu:1;
        RBus_UInt32  gpio_86_pd:1;
        RBus_UInt32  gpio_86_ds:1;
        RBus_UInt32  gpio_86_sr:1;
    };
}pinmux_gpio_right_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_87_ps:4;
        RBus_UInt32  gpio_87_pu:1;
        RBus_UInt32  gpio_87_pd:1;
        RBus_UInt32  gpio_87_ds:1;
        RBus_UInt32  gpio_87_sr:1;
        RBus_UInt32  gpio_88_ps:4;
        RBus_UInt32  gpio_88_pu:1;
        RBus_UInt32  gpio_88_pd:1;
        RBus_UInt32  gpio_88_ds:1;
        RBus_UInt32  gpio_88_sr:1;
        RBus_UInt32  gpio_89_ps:4;
        RBus_UInt32  gpio_89_pu:1;
        RBus_UInt32  gpio_89_pd:1;
        RBus_UInt32  gpio_89_ds:1;
        RBus_UInt32  gpio_89_sr:1;
        RBus_UInt32  gpio_90_ps:4;
        RBus_UInt32  gpio_90_pu:1;
        RBus_UInt32  gpio_90_pd:1;
        RBus_UInt32  gpio_90_ds:1;
        RBus_UInt32  gpio_90_sr:1;
    };
}pinmux_gpio_right_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_91_ps:4;
        RBus_UInt32  gpio_91_pu:1;
        RBus_UInt32  gpio_91_pd:1;
        RBus_UInt32  gpio_91_ds:1;
        RBus_UInt32  gpio_91_sr:1;
        RBus_UInt32  gpio_92_ps:4;
        RBus_UInt32  gpio_92_pu:1;
        RBus_UInt32  gpio_92_pd:1;
        RBus_UInt32  gpio_92_ds:1;
        RBus_UInt32  gpio_92_sr:1;
        RBus_UInt32  gpio_93_ps:4;
        RBus_UInt32  gpio_93_pu:1;
        RBus_UInt32  gpio_93_pd:1;
        RBus_UInt32  gpio_93_ds:1;
        RBus_UInt32  gpio_93_sr:1;
        RBus_UInt32  gpio_94_ps:4;
        RBus_UInt32  gpio_94_pu:1;
        RBus_UInt32  gpio_94_pd:1;
        RBus_UInt32  gpio_94_ds:1;
        RBus_UInt32  gpio_94_sr:1;
    };
}pinmux_gpio_right_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_95_ps:4;
        RBus_UInt32  gpio_95_pu:1;
        RBus_UInt32  gpio_95_pd:1;
        RBus_UInt32  gpio_95_ds:1;
        RBus_UInt32  gpio_95_sr:1;
        RBus_UInt32  gpio_96_ps:4;
        RBus_UInt32  gpio_96_pu:1;
        RBus_UInt32  gpio_96_pd:1;
        RBus_UInt32  gpio_96_ds:1;
        RBus_UInt32  gpio_96_sr:1;
        RBus_UInt32  gpio_97_ps:4;
        RBus_UInt32  gpio_97_pu:1;
        RBus_UInt32  gpio_97_pd:1;
        RBus_UInt32  gpio_97_ds:1;
        RBus_UInt32  gpio_97_sr:1;
        RBus_UInt32  gpio_98_ps:4;
        RBus_UInt32  gpio_98_pu:1;
        RBus_UInt32  gpio_98_pd:1;
        RBus_UInt32  gpio_98_ds:1;
        RBus_UInt32  gpio_98_sr:1;
    };
}pinmux_gpio_right_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_99_ps:4;
        RBus_UInt32  gpio_99_pu:1;
        RBus_UInt32  gpio_99_pd:1;
        RBus_UInt32  gpio_99_ds:1;
        RBus_UInt32  gpio_99_sr:1;
        RBus_UInt32  gpio_100_ps:4;
        RBus_UInt32  gpio_100_pu:1;
        RBus_UInt32  gpio_100_pd:1;
        RBus_UInt32  gpio_100_ds:1;
        RBus_UInt32  gpio_100_sr:1;
        RBus_UInt32  gpio_101_ps:4;
        RBus_UInt32  gpio_101_pu:1;
        RBus_UInt32  gpio_101_pd:1;
        RBus_UInt32  gpio_101_ds:1;
        RBus_UInt32  gpio_101_sr:1;
        RBus_UInt32  gpio_102_ps:4;
        RBus_UInt32  gpio_102_pu:1;
        RBus_UInt32  gpio_102_pd:1;
        RBus_UInt32  gpio_102_ds:1;
        RBus_UInt32  gpio_102_sr:1;
    };
}pinmux_gpio_right_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_103_ps:4;
        RBus_UInt32  gpio_103_pu:1;
        RBus_UInt32  gpio_103_pd:1;
        RBus_UInt32  gpio_103_ds:1;
        RBus_UInt32  gpio_103_sr:1;
        RBus_UInt32  gpio_104_ps:4;
        RBus_UInt32  gpio_104_pu:1;
        RBus_UInt32  gpio_104_pd:1;
        RBus_UInt32  gpio_104_ds:1;
        RBus_UInt32  gpio_104_sr:1;
        RBus_UInt32  gpio_105_ps:4;
        RBus_UInt32  gpio_105_pu:1;
        RBus_UInt32  gpio_105_pd:1;
        RBus_UInt32  gpio_105_ds:1;
        RBus_UInt32  gpio_105_sr:1;
        RBus_UInt32  gpio_106_ps:4;
        RBus_UInt32  gpio_106_pu:1;
        RBus_UInt32  gpio_106_pd:1;
        RBus_UInt32  gpio_106_ds:1;
        RBus_UInt32  gpio_106_sr:1;
    };
}pinmux_gpio_right_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_107_ps:4;
        RBus_UInt32  gpio_107_pu:1;
        RBus_UInt32  gpio_107_pd:1;
        RBus_UInt32  gpio_107_ds:1;
        RBus_UInt32  gpio_107_sr:1;
        RBus_UInt32  gpio_108_ps:4;
        RBus_UInt32  gpio_108_pu:1;
        RBus_UInt32  gpio_108_pd:1;
        RBus_UInt32  gpio_108_ds:1;
        RBus_UInt32  gpio_108_sr:1;
        RBus_UInt32  gpio_109_ps:4;
        RBus_UInt32  gpio_109_pu:1;
        RBus_UInt32  gpio_109_pd:1;
        RBus_UInt32  gpio_109_ds:1;
        RBus_UInt32  gpio_109_sr:1;
        RBus_UInt32  gpio_110_ps:4;
        RBus_UInt32  gpio_110_pu:1;
        RBus_UInt32  gpio_110_pd:1;
        RBus_UInt32  gpio_110_ds:1;
        RBus_UInt32  gpio_110_sr:1;
    };
}pinmux_gpio_right_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_111_ps:4;
        RBus_UInt32  gpio_111_pu:1;
        RBus_UInt32  gpio_111_pd:1;
        RBus_UInt32  gpio_111_ds:1;
        RBus_UInt32  gpio_111_sr:1;
        RBus_UInt32  gpio_112_ps:4;
        RBus_UInt32  gpio_112_pu:1;
        RBus_UInt32  gpio_112_pd:1;
        RBus_UInt32  gpio_112_ds:1;
        RBus_UInt32  gpio_112_sr:1;
        RBus_UInt32  gpio_113_ps:4;
        RBus_UInt32  gpio_113_pu:1;
        RBus_UInt32  gpio_113_pd:1;
        RBus_UInt32  gpio_113_ds:1;
        RBus_UInt32  gpio_113_sr:1;
        RBus_UInt32  gpio_114_ps:4;
        RBus_UInt32  gpio_114_pu:1;
        RBus_UInt32  gpio_114_pd:1;
        RBus_UInt32  gpio_114_ds:1;
        RBus_UInt32  gpio_114_sr:1;
    };
}pinmux_gpio_right_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_115_ps:4;
        RBus_UInt32  gpio_115_pu:1;
        RBus_UInt32  gpio_115_pd:1;
        RBus_UInt32  gpio_115_ds:1;
        RBus_UInt32  gpio_115_sr:1;
        RBus_UInt32  gpio_116_ps:4;
        RBus_UInt32  gpio_116_pu:1;
        RBus_UInt32  gpio_116_pd:1;
        RBus_UInt32  gpio_116_ds:1;
        RBus_UInt32  gpio_116_sr:1;
        RBus_UInt32  gpio_117_ps:4;
        RBus_UInt32  gpio_117_pu:1;
        RBus_UInt32  gpio_117_pd:1;
        RBus_UInt32  gpio_117_ds:1;
        RBus_UInt32  gpio_117_sr:1;
        RBus_UInt32  gpio_118_ps:4;
        RBus_UInt32  gpio_118_pu:1;
        RBus_UInt32  gpio_118_pd:1;
        RBus_UInt32  gpio_118_ds:1;
        RBus_UInt32  gpio_118_sr:1;
    };
}pinmux_gpio_right_cfg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_119_ps:4;
        RBus_UInt32  gpio_119_pu:1;
        RBus_UInt32  gpio_119_pd:1;
        RBus_UInt32  gpio_119_ds:1;
        RBus_UInt32  gpio_119_sr:1;
        RBus_UInt32  gpio_120_ps:4;
        RBus_UInt32  gpio_120_pu:1;
        RBus_UInt32  gpio_120_pd:1;
        RBus_UInt32  gpio_120_ds:1;
        RBus_UInt32  gpio_120_sr:1;
        RBus_UInt32  gpio_121_ps:4;
        RBus_UInt32  gpio_121_pu:1;
        RBus_UInt32  gpio_121_pd:1;
        RBus_UInt32  gpio_121_ds:1;
        RBus_UInt32  gpio_121_sr:1;
        RBus_UInt32  gpio_122_ps:4;
        RBus_UInt32  gpio_122_pu:1;
        RBus_UInt32  gpio_122_pd:1;
        RBus_UInt32  gpio_122_ds:1;
        RBus_UInt32  gpio_122_sr:1;
    };
}pinmux_gpio_right_cfg_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_123_ps:4;
        RBus_UInt32  gpio_123_pu:1;
        RBus_UInt32  gpio_123_pd:1;
        RBus_UInt32  gpio_123_ds:1;
        RBus_UInt32  gpio_123_sr:1;
        RBus_UInt32  gpio_124_ps:4;
        RBus_UInt32  gpio_124_pu:1;
        RBus_UInt32  gpio_124_pd:1;
        RBus_UInt32  gpio_124_ds:1;
        RBus_UInt32  gpio_124_sr:1;
        RBus_UInt32  gpio_125_ps:4;
        RBus_UInt32  gpio_125_pu:1;
        RBus_UInt32  gpio_125_pd:1;
        RBus_UInt32  gpio_125_ds:1;
        RBus_UInt32  gpio_125_sr:1;
        RBus_UInt32  gpio_126_ps:4;
        RBus_UInt32  gpio_126_pu:1;
        RBus_UInt32  gpio_126_pd:1;
        RBus_UInt32  gpio_126_ds:1;
        RBus_UInt32  gpio_126_sr:1;
    };
}pinmux_gpio_right_cfg_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_127_ps:4;
        RBus_UInt32  gpio_127_pu:1;
        RBus_UInt32  gpio_127_pd:1;
        RBus_UInt32  gpio_127_ds:1;
        RBus_UInt32  gpio_127_sr:1;
        RBus_UInt32  gpio_128_ps:4;
        RBus_UInt32  gpio_128_pu:1;
        RBus_UInt32  gpio_128_pd:1;
        RBus_UInt32  gpio_128_ds:1;
        RBus_UInt32  gpio_128_sr:1;
        RBus_UInt32  gpio_129_ps:4;
        RBus_UInt32  gpio_129_pu:1;
        RBus_UInt32  gpio_129_pd:1;
        RBus_UInt32  gpio_129_ds:1;
        RBus_UInt32  gpio_129_sr:1;
        RBus_UInt32  gpio_130_ps:4;
        RBus_UInt32  gpio_130_pu:1;
        RBus_UInt32  gpio_130_pd:1;
        RBus_UInt32  gpio_130_ds:1;
        RBus_UInt32  gpio_130_sr:1;
    };
}pinmux_gpio_right_cfg_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_131_ps:4;
        RBus_UInt32  gpio_131_pu:1;
        RBus_UInt32  gpio_131_pd:1;
        RBus_UInt32  gpio_131_ds:1;
        RBus_UInt32  gpio_131_sr:1;
        RBus_UInt32  gpio_132_ps:4;
        RBus_UInt32  gpio_132_pu:1;
        RBus_UInt32  gpio_132_pd:1;
        RBus_UInt32  gpio_132_ds:1;
        RBus_UInt32  gpio_132_sr:1;
        RBus_UInt32  gpio_133_ps:4;
        RBus_UInt32  gpio_133_pu:1;
        RBus_UInt32  gpio_133_pd:1;
        RBus_UInt32  gpio_133_ds:1;
        RBus_UInt32  gpio_133_sr:1;
        RBus_UInt32  gpio_134_ps:4;
        RBus_UInt32  gpio_134_pu:1;
        RBus_UInt32  gpio_134_pd:1;
        RBus_UInt32  gpio_134_ds:1;
        RBus_UInt32  gpio_134_sr:1;
    };
}pinmux_gpio_right_cfg_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_135_ps:4;
        RBus_UInt32  gpio_135_pu:1;
        RBus_UInt32  gpio_135_pd:1;
        RBus_UInt32  gpio_135_ds:1;
        RBus_UInt32  gpio_135_sr:1;
        RBus_UInt32  gpio_136_ps:4;
        RBus_UInt32  gpio_136_pu:1;
        RBus_UInt32  gpio_136_pd:1;
        RBus_UInt32  gpio_136_ds:1;
        RBus_UInt32  gpio_136_sr:1;
        RBus_UInt32  gpio_137_ps:4;
        RBus_UInt32  gpio_137_pu:1;
        RBus_UInt32  gpio_137_pd:1;
        RBus_UInt32  gpio_137_ds:1;
        RBus_UInt32  gpio_137_sr:1;
        RBus_UInt32  gpio_138_ps:4;
        RBus_UInt32  gpio_138_pu:1;
        RBus_UInt32  gpio_138_pd:1;
        RBus_UInt32  gpio_138_ds:1;
        RBus_UInt32  gpio_138_sr:1;
    };
}pinmux_gpio_right_cfg_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_151_ps:4;
        RBus_UInt32  gpio_151_pu:1;
        RBus_UInt32  gpio_151_pd:1;
        RBus_UInt32  gpio_151_ds:1;
        RBus_UInt32  gpio_151_sr:1;
        RBus_UInt32  gpio_152_ps:4;
        RBus_UInt32  gpio_152_pu:1;
        RBus_UInt32  gpio_152_pd:1;
        RBus_UInt32  gpio_152_ds:1;
        RBus_UInt32  gpio_152_sr:1;
        RBus_UInt32  gpio_153_ps:4;
        RBus_UInt32  gpio_153_pu:1;
        RBus_UInt32  gpio_153_pd:1;
        RBus_UInt32  gpio_153_ds:1;
        RBus_UInt32  gpio_153_sr:1;
        RBus_UInt32  res1:8;
    };
}pinmux_gpio_right_cfg_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_83_smt:1;
        RBus_UInt32  gpio_84_smt:1;
        RBus_UInt32  gpio_85_smt:1;
        RBus_UInt32  gpio_86_smt:1;
        RBus_UInt32  gpio_87_smt:1;
        RBus_UInt32  gpio_88_smt:1;
        RBus_UInt32  gpio_89_smt:1;
        RBus_UInt32  gpio_90_smt:1;
        RBus_UInt32  gpio_91_smt:1;
        RBus_UInt32  gpio_92_smt:1;
        RBus_UInt32  gpio_93_smt:1;
        RBus_UInt32  gpio_94_smt:1;
        RBus_UInt32  gpio_95_smt:1;
        RBus_UInt32  gpio_96_smt:1;
        RBus_UInt32  gpio_97_smt:1;
        RBus_UInt32  gpio_98_smt:1;
        RBus_UInt32  gpio_99_smt:1;
        RBus_UInt32  gpio_100_smt:1;
        RBus_UInt32  gpio_101_smt:1;
        RBus_UInt32  gpio_102_smt:1;
        RBus_UInt32  gpio_103_smt:1;
        RBus_UInt32  gpio_104_smt:1;
        RBus_UInt32  gpio_105_smt:1;
        RBus_UInt32  gpio_106_smt:1;
        RBus_UInt32  gpio_107_smt:1;
        RBus_UInt32  gpio_108_smt:1;
        RBus_UInt32  gpio_109_smt:1;
        RBus_UInt32  gpio_110_smt:1;
        RBus_UInt32  gpio_111_smt:1;
        RBus_UInt32  gpio_112_smt:1;
        RBus_UInt32  gpio_113_smt:1;
        RBus_UInt32  gpio_114_smt:1;
    };
}pinmux_right_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_115_smt:1;
        RBus_UInt32  gpio_116_smt:1;
        RBus_UInt32  gpio_117_smt:1;
        RBus_UInt32  gpio_118_smt:1;
        RBus_UInt32  gpio_119_smt:1;
        RBus_UInt32  gpio_120_smt:1;
        RBus_UInt32  gpio_121_smt:1;
        RBus_UInt32  gpio_122_smt:1;
        RBus_UInt32  gpio_123_smt:1;
        RBus_UInt32  gpio_124_smt:1;
        RBus_UInt32  gpio_125_smt:1;
        RBus_UInt32  gpio_126_smt:1;
        RBus_UInt32  gpio_127_smt:1;
        RBus_UInt32  gpio_128_smt:1;
        RBus_UInt32  gpio_129_smt:1;
        RBus_UInt32  gpio_130_smt:1;
        RBus_UInt32  gpio_131_smt:1;
        RBus_UInt32  gpio_132_smt:1;
        RBus_UInt32  gpio_133_smt:1;
        RBus_UInt32  gpio_134_smt:1;
        RBus_UInt32  gpio_135_smt:1;
        RBus_UInt32  gpio_136_smt:1;
        RBus_UInt32  gpio_137_smt:1;
        RBus_UInt32  gpio_138_smt:1;
        RBus_UInt32  gpio_151_smt:1;
        RBus_UInt32  gpio_152_smt:1;
        RBus_UInt32  gpio_153_smt:1;
        RBus_UInt32  res1:5;
    };
}pinmux_right_smt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_rst_n_ps:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  emmc_clk_ps:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  emmc_cmd_ps:4;
        RBus_UInt32  res3:12;
    };
}pinmux_gpio_emmcclk_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_ds_ps:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  emmc_d5_ps:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  emmc_d3_ps:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  emmc_d4_ps:4;
        RBus_UInt32  res4:4;
    };
}pinmux_gpio_emmc_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_d0_ps:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  emmc_d1_ps:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  emmc_d2_ps:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  emmc_d7_ps:4;
        RBus_UInt32  res4:4;
    };
}pinmux_gpio_emmc_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_d6_ps:4;
        RBus_UInt32  res1:27;
        RBus_UInt32  emmc_sel:1;
    };
}pinmux_gpio_emmc_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_rst_n_pu:1;
        RBus_UInt32  emmc_rst_n_pd:1;
        RBus_UInt32  emmc_rst_n_sr:1;
        RBus_UInt32  emmc_rst_n_smt:1;
        RBus_UInt32  emmc_clk_pu:1;
        RBus_UInt32  emmc_clk_pd:1;
        RBus_UInt32  emmc_clk_sr:1;
        RBus_UInt32  emmc_clk_smt:1;
        RBus_UInt32  emmc_cmd_pu:1;
        RBus_UInt32  emmc_cmd_pd:1;
        RBus_UInt32  emmc_cmd_sr:1;
        RBus_UInt32  emmc_cmd_smt:1;
        RBus_UInt32  res1:20;
    };
}pinmux_emmcclk_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_rst_n_ds:6;
        RBus_UInt32  emmc_rst_n_dc:3;
        RBus_UInt32  emmc_clk_ds:6;
        RBus_UInt32  emmc_clk_dc:3;
        RBus_UInt32  emmc_cmd_ds:6;
        RBus_UInt32  emmc_cmd_dc:3;
        RBus_UInt32  res1:5;
    };
}pinmux_emmcclk_extracfg_np4e_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_ds_pu:1;
        RBus_UInt32  emmc_ds_pd:1;
        RBus_UInt32  emmc_ds_sr:1;
        RBus_UInt32  emmc_ds_smt:1;
        RBus_UInt32  emmc_d5_pu:1;
        RBus_UInt32  emmc_d5_pd:1;
        RBus_UInt32  emmc_d5_sr:1;
        RBus_UInt32  emmc_d5_smt:1;
        RBus_UInt32  emmc_d3_pu:1;
        RBus_UInt32  emmc_d3_pd:1;
        RBus_UInt32  emmc_d3_sr:1;
        RBus_UInt32  emmc_d3_smt:1;
        RBus_UInt32  emmc_d4_pu:1;
        RBus_UInt32  emmc_d4_pd:1;
        RBus_UInt32  emmc_d4_sr:1;
        RBus_UInt32  emmc_d4_smt:1;
        RBus_UInt32  emmc_d0_pu:1;
        RBus_UInt32  emmc_d0_pd:1;
        RBus_UInt32  emmc_d0_sr:1;
        RBus_UInt32  emmc_d0_smt:1;
        RBus_UInt32  emmc_d1_pu:1;
        RBus_UInt32  emmc_d1_pd:1;
        RBus_UInt32  emmc_d1_sr:1;
        RBus_UInt32  emmc_d1_smt:1;
        RBus_UInt32  emmc_d2_pu:1;
        RBus_UInt32  emmc_d2_pd:1;
        RBus_UInt32  emmc_d2_sr:1;
        RBus_UInt32  emmc_d2_smt:1;
        RBus_UInt32  emmc_d7_pu:1;
        RBus_UInt32  emmc_d7_pd:1;
        RBus_UInt32  emmc_d7_sr:1;
        RBus_UInt32  emmc_d7_smt:1;
    };
}pinmux_emmc_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_d6_pu:1;
        RBus_UInt32  emmc_d6_pd:1;
        RBus_UInt32  emmc_d6_sr:1;
        RBus_UInt32  emmc_d6_smt:1;
        RBus_UInt32  res1:28;
    };
}pinmux_emmc_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_ds_ds:6;
        RBus_UInt32  emmc_ds_dc:3;
        RBus_UInt32  emmc_d5_ds:6;
        RBus_UInt32  emmc_d5_dc:3;
        RBus_UInt32  emmc_d3_ds:6;
        RBus_UInt32  emmc_d3_dc:3;
        RBus_UInt32  res1:5;
    };
}pinmux_emmc_extracfg_np4e_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_d4_ds:6;
        RBus_UInt32  emmc_d4_dc:3;
        RBus_UInt32  emmc_d0_ds:6;
        RBus_UInt32  emmc_d0_dc:3;
        RBus_UInt32  emmc_d1_ds:6;
        RBus_UInt32  emmc_d1_dc:3;
        RBus_UInt32  res1:5;
    };
}pinmux_emmc_extracfg_np4e_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_d2_ds:6;
        RBus_UInt32  emmc_d2_dc:3;
        RBus_UInt32  emmc_d7_ds:6;
        RBus_UInt32  emmc_d7_dc:3;
        RBus_UInt32  emmc_d6_ds:6;
        RBus_UInt32  emmc_d6_dc:3;
        RBus_UInt32  res1:5;
    };
}pinmux_emmc_extracfg_np4e_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx15p_ps:4;
        RBus_UInt32  pif_tx15n_ps:4;
        RBus_UInt32  pif_tx14p_ps:4;
        RBus_UInt32  pif_tx14n_ps:4;
        RBus_UInt32  pif_tx13p_ps:4;
        RBus_UInt32  pif_tx13n_ps:4;
        RBus_UInt32  pif_tx12p_ps:4;
        RBus_UInt32  pif_tx12n_ps:4;
    };
}pinmux_pif_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx11p_ps:4;
        RBus_UInt32  pif_tx11n_ps:4;
        RBus_UInt32  pif_tx10p_ps:4;
        RBus_UInt32  pif_tx10n_ps:4;
        RBus_UInt32  pif_tx9p_ps:4;
        RBus_UInt32  pif_tx9n_ps:4;
        RBus_UInt32  pif_tx8p_ps:4;
        RBus_UInt32  pif_tx8n_ps:4;
    };
}pinmux_pif_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx7p_ps:4;
        RBus_UInt32  pif_tx7n_ps:4;
        RBus_UInt32  pif_tx6p_ps:4;
        RBus_UInt32  pif_tx6n_ps:4;
        RBus_UInt32  pif_tx5p_ps:4;
        RBus_UInt32  pif_tx5n_ps:4;
        RBus_UInt32  pif_tx4p_ps:4;
        RBus_UInt32  pif_tx4n_ps:4;
    };
}pinmux_pif_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx3p_ps:4;
        RBus_UInt32  pif_tx3n_ps:4;
        RBus_UInt32  pif_tx2p_ps:4;
        RBus_UInt32  pif_tx2n_ps:4;
        RBus_UInt32  pif_tx1p_ps:4;
        RBus_UInt32  pif_tx1n_ps:4;
        RBus_UInt32  pif_tx0p_ps:4;
        RBus_UInt32  pif_tx0n_ps:4;
    };
}pinmux_pif_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  vby1_osd_htpd_sel:2;
        RBus_UInt32  vby1_osd_lock_sel:2;
        RBus_UInt32  isp_sdlock_sel:2;
        RBus_UInt32  boe_bcc_in_sel:2;
        RBus_UInt32  vby1_htpd_sel:2;
        RBus_UInt32  vby1_lock_sel:2;
        RBus_UInt32  epi_lock_sel:2;
    };
}pinmux_pin_mux_lvds_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsadc10_ps:4;
        RBus_UInt32  lsadc9_ps:4;
        RBus_UInt32  lsadc8_ps:4;
        RBus_UInt32  lsadc7_ps:4;
        RBus_UInt32  lsadc6_ps:4;
        RBus_UInt32  lsadc5_ps:4;
        RBus_UInt32  res1:2;
        RBus_UInt32  lsadc10_gpi_en:1;
        RBus_UInt32  lsadc9_gpi_en:1;
        RBus_UInt32  lsadc8_gpi_en:1;
        RBus_UInt32  lsadc7_gpi_en:1;
        RBus_UInt32  lsadc6_gpi_en:1;
        RBus_UInt32  lsadc5_gpi_en:1;
    };
}pinmux_st_stb_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsadc4_ps:4;
        RBus_UInt32  lsadc3_ps:4;
        RBus_UInt32  lsadc2_ps:4;
        RBus_UInt32  lsadc1_ps:4;
        RBus_UInt32  lsadc0_ps:4;
        RBus_UInt32  res1:7;
        RBus_UInt32  lsadc4_gpi_en:1;
        RBus_UInt32  lsadc3_gpi_en:1;
        RBus_UInt32  lsadc2_gpi_en:1;
        RBus_UInt32  lsadc1_gpi_en:1;
        RBus_UInt32  lsadc0_gpi_en:1;
    };
}pinmux_st_stb_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_00_ps:4;
        RBus_UInt32  st_gpio_00_pu:1;
        RBus_UInt32  st_gpio_00_pd:1;
        RBus_UInt32  st_gpio_00_ds:1;
        RBus_UInt32  st_gpio_00_sr:1;
        RBus_UInt32  st_gpio_01_ps:4;
        RBus_UInt32  st_gpio_01_pu:1;
        RBus_UInt32  st_gpio_01_pd:1;
        RBus_UInt32  st_gpio_01_ds:1;
        RBus_UInt32  st_gpio_01_sr:1;
        RBus_UInt32  st_gpio_02_ps:4;
        RBus_UInt32  st_gpio_02_pu:1;
        RBus_UInt32  st_gpio_02_pd:1;
        RBus_UInt32  st_gpio_02_ds:1;
        RBus_UInt32  st_gpio_02_sr:1;
        RBus_UInt32  st_gpio_03_ps:4;
        RBus_UInt32  st_gpio_03_pu:1;
        RBus_UInt32  st_gpio_03_pd:1;
        RBus_UInt32  st_gpio_03_ds:1;
        RBus_UInt32  st_gpio_03_sr:1;
    };
}pinmux_st_gpio_st_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_04_ps:4;
        RBus_UInt32  st_gpio_04_pu:1;
        RBus_UInt32  st_gpio_04_pd:1;
        RBus_UInt32  st_gpio_04_ds:1;
        RBus_UInt32  st_gpio_04_sr:1;
        RBus_UInt32  st_gpio_05_ps:4;
        RBus_UInt32  st_gpio_05_pu:1;
        RBus_UInt32  st_gpio_05_pd:1;
        RBus_UInt32  st_gpio_05_ds:1;
        RBus_UInt32  st_gpio_05_sr:1;
        RBus_UInt32  st_gpio_06_ps:4;
        RBus_UInt32  st_gpio_06_pu:1;
        RBus_UInt32  st_gpio_06_pd:1;
        RBus_UInt32  st_gpio_06_ds:1;
        RBus_UInt32  st_gpio_06_sr:1;
        RBus_UInt32  st_gpio_07_ps:4;
        RBus_UInt32  st_gpio_07_pu:1;
        RBus_UInt32  st_gpio_07_pd:1;
        RBus_UInt32  st_gpio_07_ds:1;
        RBus_UInt32  st_gpio_07_sr:1;
    };
}pinmux_st_gpio_st_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_08_ps:4;
        RBus_UInt32  st_gpio_08_pu:1;
        RBus_UInt32  st_gpio_08_pd:1;
        RBus_UInt32  st_gpio_08_ds:1;
        RBus_UInt32  st_gpio_08_sr:1;
        RBus_UInt32  st_gpio_09_ps:4;
        RBus_UInt32  st_gpio_09_pu:1;
        RBus_UInt32  st_gpio_09_pd:1;
        RBus_UInt32  st_gpio_09_ds:1;
        RBus_UInt32  st_gpio_09_sr:1;
        RBus_UInt32  st_gpio_10_ps:4;
        RBus_UInt32  st_gpio_10_pu:1;
        RBus_UInt32  st_gpio_10_pd:1;
        RBus_UInt32  st_gpio_10_ds:1;
        RBus_UInt32  st_gpio_10_sr:1;
        RBus_UInt32  st_gpio_11_ps:4;
        RBus_UInt32  st_gpio_11_pu:1;
        RBus_UInt32  st_gpio_11_pd:1;
        RBus_UInt32  st_gpio_11_ds:1;
        RBus_UInt32  st_gpio_11_sr:1;
    };
}pinmux_st_gpio_st_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_23_ps:4;
        RBus_UInt32  st_gpio_23_pu:1;
        RBus_UInt32  st_gpio_23_pd:1;
        RBus_UInt32  st_gpio_23_ds:1;
        RBus_UInt32  st_gpio_23_sr:1;
        RBus_UInt32  st_gpio_24_ps:4;
        RBus_UInt32  st_gpio_24_pu:1;
        RBus_UInt32  st_gpio_24_pd:1;
        RBus_UInt32  st_gpio_24_ds:1;
        RBus_UInt32  st_gpio_24_sr:1;
        RBus_UInt32  st_gpio_25_ps:4;
        RBus_UInt32  st_gpio_25_pu:1;
        RBus_UInt32  st_gpio_25_pd:1;
        RBus_UInt32  st_gpio_25_ds:1;
        RBus_UInt32  st_gpio_25_sr:1;
        RBus_UInt32  st_gpio_26_ps:4;
        RBus_UInt32  st_gpio_26_pu:1;
        RBus_UInt32  st_gpio_26_pd:1;
        RBus_UInt32  st_gpio_26_ds:1;
        RBus_UInt32  st_gpio_26_sr:1;
    };
}pinmux_st_gpio_st_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_27_ps:4;
        RBus_UInt32  st_gpio_27_pu:1;
        RBus_UInt32  st_gpio_27_pd:1;
        RBus_UInt32  st_gpio_27_ds:1;
        RBus_UInt32  st_gpio_27_sr:1;
        RBus_UInt32  st_gpio_28_ps:4;
        RBus_UInt32  st_gpio_28_pu:1;
        RBus_UInt32  st_gpio_28_pd:1;
        RBus_UInt32  st_gpio_28_ds:1;
        RBus_UInt32  st_gpio_28_sr:1;
        RBus_UInt32  st_gpio_29_ps:4;
        RBus_UInt32  st_gpio_29_pu:1;
        RBus_UInt32  st_gpio_29_pd:1;
        RBus_UInt32  st_gpio_29_ds:1;
        RBus_UInt32  st_gpio_29_sr:1;
        RBus_UInt32  st_gpio_30_ps:4;
        RBus_UInt32  st_gpio_30_pu:1;
        RBus_UInt32  st_gpio_30_pd:1;
        RBus_UInt32  st_gpio_30_ds:1;
        RBus_UInt32  st_gpio_30_sr:1;
    };
}pinmux_st_gpio_st_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_31_ps:4;
        RBus_UInt32  st_gpio_31_pu:1;
        RBus_UInt32  st_gpio_31_pd:1;
        RBus_UInt32  st_gpio_31_ds:1;
        RBus_UInt32  st_gpio_31_sr:1;
        RBus_UInt32  st_gpio_32_ps:4;
        RBus_UInt32  st_gpio_32_pu:1;
        RBus_UInt32  st_gpio_32_pd:1;
        RBus_UInt32  st_gpio_32_ds:1;
        RBus_UInt32  st_gpio_32_sr:1;
        RBus_UInt32  st_gpio_33_ps:4;
        RBus_UInt32  st_gpio_33_pu:1;
        RBus_UInt32  st_gpio_33_pd:1;
        RBus_UInt32  st_gpio_33_ds:1;
        RBus_UInt32  st_gpio_33_sr:1;
        RBus_UInt32  st_gpio_34_ps:4;
        RBus_UInt32  st_gpio_34_pu:1;
        RBus_UInt32  st_gpio_34_pd:1;
        RBus_UInt32  st_gpio_34_ds:1;
        RBus_UInt32  st_gpio_34_sr:1;
    };
}pinmux_st_gpio_st_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_35_ps:4;
        RBus_UInt32  st_gpio_35_pu:1;
        RBus_UInt32  st_gpio_35_pd:1;
        RBus_UInt32  st_gpio_35_ds:1;
        RBus_UInt32  st_gpio_35_sr:1;
        RBus_UInt32  st_gpio_36_ps:4;
        RBus_UInt32  st_gpio_36_pu:1;
        RBus_UInt32  st_gpio_36_pd:1;
        RBus_UInt32  st_gpio_36_ds:1;
        RBus_UInt32  st_gpio_36_sr:1;
        RBus_UInt32  st_gpio_37_ps:4;
        RBus_UInt32  st_gpio_37_pu:1;
        RBus_UInt32  st_gpio_37_pd:1;
        RBus_UInt32  st_gpio_37_ds:1;
        RBus_UInt32  st_gpio_37_sr:1;
        RBus_UInt32  st_gpio_38_ps:4;
        RBus_UInt32  st_gpio_38_pu:1;
        RBus_UInt32  st_gpio_38_pd:1;
        RBus_UInt32  st_gpio_38_ds:1;
        RBus_UInt32  st_gpio_38_sr:1;
    };
}pinmux_st_gpio_st_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_39_ps:4;
        RBus_UInt32  st_gpio_39_pu:1;
        RBus_UInt32  st_gpio_39_pd:1;
        RBus_UInt32  st_gpio_39_ds:1;
        RBus_UInt32  st_gpio_39_sr:1;
        RBus_UInt32  st_gpio_40_ps:4;
        RBus_UInt32  st_gpio_40_pu:1;
        RBus_UInt32  st_gpio_40_pd:1;
        RBus_UInt32  st_gpio_40_ds:1;
        RBus_UInt32  st_gpio_40_sr:1;
        RBus_UInt32  st_gpio_41_ps:4;
        RBus_UInt32  st_gpio_41_pu:1;
        RBus_UInt32  st_gpio_41_pd:1;
        RBus_UInt32  st_gpio_41_ds:1;
        RBus_UInt32  st_gpio_41_sr:1;
        RBus_UInt32  st_gpio_42_ps:4;
        RBus_UInt32  st_gpio_42_pu:1;
        RBus_UInt32  st_gpio_42_pd:1;
        RBus_UInt32  st_gpio_42_ds:1;
        RBus_UInt32  st_gpio_42_sr:1;
    };
}pinmux_st_gpio_st_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_43_ps:4;
        RBus_UInt32  st_gpio_43_pu:1;
        RBus_UInt32  st_gpio_43_pd:1;
        RBus_UInt32  st_gpio_43_ds:1;
        RBus_UInt32  st_gpio_43_sr:1;
        RBus_UInt32  st_gpio_44_ps:4;
        RBus_UInt32  st_gpio_44_pu:1;
        RBus_UInt32  st_gpio_44_pd:1;
        RBus_UInt32  st_gpio_44_ds:1;
        RBus_UInt32  st_gpio_44_sr:1;
        RBus_UInt32  st_gpio_45_ps:4;
        RBus_UInt32  st_gpio_45_pu:1;
        RBus_UInt32  st_gpio_45_pd:1;
        RBus_UInt32  st_gpio_45_ds:1;
        RBus_UInt32  st_gpio_45_sr:1;
        RBus_UInt32  st_gpio_46_ps:4;
        RBus_UInt32  st_gpio_46_pu:1;
        RBus_UInt32  st_gpio_46_pd:1;
        RBus_UInt32  st_gpio_46_ds:1;
        RBus_UInt32  st_gpio_46_sr:1;
    };
}pinmux_st_gpio_st_cfg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_47_ps:4;
        RBus_UInt32  st_gpio_47_pu:1;
        RBus_UInt32  st_gpio_47_pd:1;
        RBus_UInt32  st_gpio_47_ds:1;
        RBus_UInt32  st_gpio_47_sr:1;
        RBus_UInt32  st_gpio_48_ps:4;
        RBus_UInt32  st_gpio_48_pu:1;
        RBus_UInt32  st_gpio_48_pd:1;
        RBus_UInt32  st_gpio_48_ds:1;
        RBus_UInt32  st_gpio_48_sr:1;
        RBus_UInt32  st_gpio_49_ps:4;
        RBus_UInt32  st_gpio_49_pu:1;
        RBus_UInt32  st_gpio_49_pd:1;
        RBus_UInt32  st_gpio_49_ds:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  st_gpio_50_ps:4;
        RBus_UInt32  st_gpio_50_pu:1;
        RBus_UInt32  st_gpio_50_pd:1;
        RBus_UInt32  st_gpio_50_ds:1;
        RBus_UInt32  st_gpio_50_sr:1;
    };
}pinmux_st_gpio_st_cfg_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_51_ps:4;
        RBus_UInt32  st_gpio_51_pu:1;
        RBus_UInt32  st_gpio_51_pd:1;
        RBus_UInt32  st_gpio_51_ds:1;
        RBus_UInt32  st_gpio_51_sr:1;
        RBus_UInt32  st_gpio_52_ps:4;
        RBus_UInt32  st_gpio_52_pu:1;
        RBus_UInt32  st_gpio_52_pd:1;
        RBus_UInt32  st_gpio_52_ds:1;
        RBus_UInt32  st_gpio_52_sr:1;
        RBus_UInt32  st_gpio_53_ps:4;
        RBus_UInt32  st_gpio_53_pu:1;
        RBus_UInt32  st_gpio_53_pd:1;
        RBus_UInt32  st_gpio_53_ds:1;
        RBus_UInt32  st_gpio_53_sr:1;
        RBus_UInt32  st_gpio_54_ps:4;
        RBus_UInt32  st_gpio_54_pu:1;
        RBus_UInt32  st_gpio_54_pd:1;
        RBus_UInt32  st_gpio_54_ds:1;
        RBus_UInt32  st_gpio_54_sr:1;
    };
}pinmux_st_gpio_st_cfg_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_55_ps:4;
        RBus_UInt32  st_gpio_55_pu:1;
        RBus_UInt32  st_gpio_55_pd:1;
        RBus_UInt32  st_gpio_55_ds:1;
        RBus_UInt32  st_gpio_55_sr:1;
        RBus_UInt32  st_gpio_56_ps:4;
        RBus_UInt32  st_gpio_56_pu:1;
        RBus_UInt32  st_gpio_56_pd:1;
        RBus_UInt32  st_gpio_56_ds:1;
        RBus_UInt32  st_gpio_56_sr:1;
        RBus_UInt32  st_gpio_57_ps:4;
        RBus_UInt32  st_gpio_57_pu:1;
        RBus_UInt32  st_gpio_57_pd:1;
        RBus_UInt32  st_gpio_57_ds:1;
        RBus_UInt32  st_gpio_57_sr:1;
        RBus_UInt32  st_gpio_58_ps:4;
        RBus_UInt32  st_gpio_58_pu:1;
        RBus_UInt32  st_gpio_58_pd:1;
        RBus_UInt32  st_gpio_58_ds:1;
        RBus_UInt32  st_gpio_58_sr:1;
    };
}pinmux_st_gpio_st_cfg_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_59_ps:4;
        RBus_UInt32  st_gpio_59_pu:1;
        RBus_UInt32  st_gpio_59_pd:1;
        RBus_UInt32  st_gpio_59_ds:1;
        RBus_UInt32  st_gpio_59_sr:1;
        RBus_UInt32  st_gpio_60_ps:4;
        RBus_UInt32  st_gpio_60_pu:1;
        RBus_UInt32  st_gpio_60_pd:1;
        RBus_UInt32  st_gpio_60_ds:1;
        RBus_UInt32  st_gpio_60_sr:1;
        RBus_UInt32  res1:16;
    };
}pinmux_st_gpio_st_cfg_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_00_smt:1;
        RBus_UInt32  st_gpio_01_smt:1;
        RBus_UInt32  st_gpio_02_smt:1;
        RBus_UInt32  st_gpio_03_smt:1;
        RBus_UInt32  st_gpio_04_smt:1;
        RBus_UInt32  st_gpio_05_smt:1;
        RBus_UInt32  st_gpio_06_smt:1;
        RBus_UInt32  st_gpio_07_smt:1;
        RBus_UInt32  st_gpio_08_smt:1;
        RBus_UInt32  st_gpio_09_smt:1;
        RBus_UInt32  st_gpio_10_smt:1;
        RBus_UInt32  st_gpio_11_smt:1;
        RBus_UInt32  st_gpio_23_smt:1;
        RBus_UInt32  st_gpio_24_smt:1;
        RBus_UInt32  st_gpio_25_smt:1;
        RBus_UInt32  st_gpio_26_smt:1;
        RBus_UInt32  st_gpio_27_smt:1;
        RBus_UInt32  st_gpio_28_smt:1;
        RBus_UInt32  st_gpio_29_smt:1;
        RBus_UInt32  st_gpio_30_smt:1;
        RBus_UInt32  st_gpio_31_smt:1;
        RBus_UInt32  st_gpio_32_smt:1;
        RBus_UInt32  st_gpio_33_smt:1;
        RBus_UInt32  st_gpio_34_smt:1;
        RBus_UInt32  st_gpio_35_smt:1;
        RBus_UInt32  st_gpio_36_smt:1;
        RBus_UInt32  st_gpio_37_smt:1;
        RBus_UInt32  st_gpio_38_smt:1;
        RBus_UInt32  st_gpio_39_smt:1;
        RBus_UInt32  st_gpio_40_smt:1;
        RBus_UInt32  st_gpio_41_smt:1;
        RBus_UInt32  st_gpio_42_smt:1;
    };
}pinmux_st_st_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_43_smt:1;
        RBus_UInt32  st_gpio_44_smt:1;
        RBus_UInt32  st_gpio_45_smt:1;
        RBus_UInt32  st_gpio_46_smt:1;
        RBus_UInt32  st_gpio_47_smt:1;
        RBus_UInt32  st_gpio_48_smt:1;
        RBus_UInt32  st_gpio_49_smt:1;
        RBus_UInt32  st_gpio_50_smt:1;
        RBus_UInt32  st_gpio_51_smt:1;
        RBus_UInt32  st_gpio_52_smt:1;
        RBus_UInt32  st_gpio_53_smt:1;
        RBus_UInt32  st_gpio_54_smt:1;
        RBus_UInt32  st_gpio_55_smt:1;
        RBus_UInt32  st_gpio_56_smt:1;
        RBus_UInt32  st_gpio_57_smt:1;
        RBus_UInt32  st_gpio_58_smt:1;
        RBus_UInt32  st_gpio_59_smt:1;
        RBus_UInt32  st_gpio_60_smt:1;
        RBus_UInt32  st_gpio_49_ten:1;
        RBus_UInt32  res1:13;
    };
}pinmux_st_st_smt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dmic_clk_data_0_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  dmic_clk_data_1_sel:2;
        RBus_UInt32  res3:1;
        RBus_UInt32  ejtag_tclk_clk_sel:3;
        RBus_UInt32  res4:2;
        RBus_UInt32  ejtag_tdi_sel:2;
        RBus_UInt32  res5:1;
        RBus_UInt32  ejtag_tms_in_sel:3;
        RBus_UInt32  res6:2;
        RBus_UInt32  ejtag_trst_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  emcu_ejtag_tclk_clk_sel:2;
        RBus_UInt32  res8:2;
        RBus_UInt32  emcu_ejtag_tdi_sel:2;
    };
}pinmux_st_pin_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  emcu_ejtag_tms_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  emcu_ejtag_trst_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  i2c0_scl_in_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  i2c0_sda_in_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  i2c5_scl_in_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  i2c5_sda_in_sel:2;
        RBus_UInt32  res7:3;
        RBus_UInt32  i2c_ctrl_en:1;
        RBus_UInt32  res8:1;
        RBus_UInt32  uart0_rxdi_sel:3;
    };
}pinmux_st_pin_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  uart1_rxdi_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  uartrbus_rx_sel:3;
        RBus_UInt32  res3:16;
        RBus_UInt32  st_testpin_mux:8;
    };
}pinmux_st_pin_mux_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmirx_p0_h5vdet:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  hdmirx_p0_pd:1;
        RBus_UInt32  hdmirx_p0_r1k_en:1;
        RBus_UInt32  hdmirx_p0_reg_sel:3;
    };
}pinmux_st_hpd_r1k_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmirx_p1_h5vdet:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  hdmirx_p1_pd:1;
        RBus_UInt32  hdmirx_p1_r1k_en:1;
        RBus_UInt32  hdmirx_p1_reg_sel:3;
    };
}pinmux_st_hpd_r1k_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmirx_p2_h5vdet:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  hdmirx_p2_pd:1;
        RBus_UInt32  hdmirx_p2_r1k_en:1;
        RBus_UInt32  hdmirx_p2_reg_sel:3;
    };
}pinmux_st_hpd_r1k_ctrl2_RBUS;

#else //apply LITTLE_ENDIAN

//======PINMUX register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_03_sr:1;
        RBus_UInt32  gpio_03_ds:1;
        RBus_UInt32  gpio_03_pd:1;
        RBus_UInt32  gpio_03_pu:1;
        RBus_UInt32  gpio_03_ps:4;
        RBus_UInt32  gpio_02_sr:1;
        RBus_UInt32  gpio_02_ds:1;
        RBus_UInt32  gpio_02_pd:1;
        RBus_UInt32  gpio_02_pu:1;
        RBus_UInt32  gpio_02_ps:4;
        RBus_UInt32  gpio_01_sr:1;
        RBus_UInt32  gpio_01_ds:1;
        RBus_UInt32  gpio_01_pd:1;
        RBus_UInt32  gpio_01_pu:1;
        RBus_UInt32  gpio_01_ps:4;
        RBus_UInt32  gpio_00_sr:1;
        RBus_UInt32  gpio_00_ds:1;
        RBus_UInt32  gpio_00_pd:1;
        RBus_UInt32  gpio_00_pu:1;
        RBus_UInt32  gpio_00_ps:4;
    };
}pinmux_gpio_tleft_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_07_sr:1;
        RBus_UInt32  gpio_07_ds:1;
        RBus_UInt32  gpio_07_pd:1;
        RBus_UInt32  gpio_07_pu:1;
        RBus_UInt32  gpio_07_ps:4;
        RBus_UInt32  gpio_06_sr:1;
        RBus_UInt32  gpio_06_ds:1;
        RBus_UInt32  gpio_06_pd:1;
        RBus_UInt32  gpio_06_pu:1;
        RBus_UInt32  gpio_06_ps:4;
        RBus_UInt32  gpio_05_sr:1;
        RBus_UInt32  gpio_05_ds:1;
        RBus_UInt32  gpio_05_pd:1;
        RBus_UInt32  gpio_05_pu:1;
        RBus_UInt32  gpio_05_ps:4;
        RBus_UInt32  gpio_04_sr:1;
        RBus_UInt32  gpio_04_ds:1;
        RBus_UInt32  gpio_04_pd:1;
        RBus_UInt32  gpio_04_pu:1;
        RBus_UInt32  gpio_04_ps:4;
    };
}pinmux_gpio_tleft_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_11_sr:1;
        RBus_UInt32  gpio_11_ds:1;
        RBus_UInt32  gpio_11_pd:1;
        RBus_UInt32  gpio_11_pu:1;
        RBus_UInt32  gpio_11_ps:4;
        RBus_UInt32  gpio_10_sr:1;
        RBus_UInt32  gpio_10_ds:1;
        RBus_UInt32  gpio_10_pd:1;
        RBus_UInt32  gpio_10_pu:1;
        RBus_UInt32  gpio_10_ps:4;
        RBus_UInt32  gpio_09_sr:1;
        RBus_UInt32  gpio_09_ds:1;
        RBus_UInt32  gpio_09_pd:1;
        RBus_UInt32  gpio_09_pu:1;
        RBus_UInt32  gpio_09_ps:4;
        RBus_UInt32  gpio_08_sr:1;
        RBus_UInt32  gpio_08_ds:1;
        RBus_UInt32  gpio_08_pd:1;
        RBus_UInt32  gpio_08_pu:1;
        RBus_UInt32  gpio_08_ps:4;
    };
}pinmux_gpio_tleft_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_15_sr:1;
        RBus_UInt32  gpio_15_ds:1;
        RBus_UInt32  gpio_15_pd:1;
        RBus_UInt32  gpio_15_pu:1;
        RBus_UInt32  gpio_15_ps:4;
        RBus_UInt32  gpio_14_sr:1;
        RBus_UInt32  gpio_14_ds:1;
        RBus_UInt32  gpio_14_pd:1;
        RBus_UInt32  gpio_14_pu:1;
        RBus_UInt32  gpio_14_ps:4;
        RBus_UInt32  gpio_13_sr:1;
        RBus_UInt32  gpio_13_ds:1;
        RBus_UInt32  gpio_13_pd:1;
        RBus_UInt32  gpio_13_pu:1;
        RBus_UInt32  gpio_13_ps:4;
        RBus_UInt32  gpio_12_sr:1;
        RBus_UInt32  gpio_12_ds:1;
        RBus_UInt32  gpio_12_pd:1;
        RBus_UInt32  gpio_12_pu:1;
        RBus_UInt32  gpio_12_ps:4;
    };
}pinmux_gpio_tleft_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_19_sr:1;
        RBus_UInt32  gpio_19_ds:1;
        RBus_UInt32  gpio_19_pd:1;
        RBus_UInt32  gpio_19_pu:1;
        RBus_UInt32  gpio_19_ps:4;
        RBus_UInt32  gpio_18_sr:1;
        RBus_UInt32  gpio_18_ds:1;
        RBus_UInt32  gpio_18_pd:1;
        RBus_UInt32  gpio_18_pu:1;
        RBus_UInt32  gpio_18_ps:4;
        RBus_UInt32  gpio_17_sr:1;
        RBus_UInt32  gpio_17_ds:1;
        RBus_UInt32  gpio_17_pd:1;
        RBus_UInt32  gpio_17_pu:1;
        RBus_UInt32  gpio_17_ps:4;
        RBus_UInt32  gpio_16_sr:1;
        RBus_UInt32  gpio_16_ds:1;
        RBus_UInt32  gpio_16_pd:1;
        RBus_UInt32  gpio_16_pu:1;
        RBus_UInt32  gpio_16_ps:4;
    };
}pinmux_gpio_tleft_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_23_sr:1;
        RBus_UInt32  gpio_23_ds:1;
        RBus_UInt32  gpio_23_pd:1;
        RBus_UInt32  gpio_23_pu:1;
        RBus_UInt32  gpio_23_ps:4;
        RBus_UInt32  gpio_22_sr:1;
        RBus_UInt32  gpio_22_ds:1;
        RBus_UInt32  gpio_22_pd:1;
        RBus_UInt32  gpio_22_pu:1;
        RBus_UInt32  gpio_22_ps:4;
        RBus_UInt32  gpio_21_sr:1;
        RBus_UInt32  gpio_21_ds:1;
        RBus_UInt32  gpio_21_pd:1;
        RBus_UInt32  gpio_21_pu:1;
        RBus_UInt32  gpio_21_ps:4;
        RBus_UInt32  gpio_20_sr:1;
        RBus_UInt32  gpio_20_ds:1;
        RBus_UInt32  gpio_20_pd:1;
        RBus_UInt32  gpio_20_pu:1;
        RBus_UInt32  gpio_20_ps:4;
    };
}pinmux_gpio_tleft_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_27_sr:1;
        RBus_UInt32  gpio_27_ds:1;
        RBus_UInt32  gpio_27_pd:1;
        RBus_UInt32  gpio_27_pu:1;
        RBus_UInt32  gpio_27_ps:4;
        RBus_UInt32  gpio_26_sr:1;
        RBus_UInt32  gpio_26_ds:1;
        RBus_UInt32  gpio_26_pd:1;
        RBus_UInt32  gpio_26_pu:1;
        RBus_UInt32  gpio_26_ps:4;
        RBus_UInt32  gpio_25_sr:1;
        RBus_UInt32  gpio_25_ds:1;
        RBus_UInt32  gpio_25_pd:1;
        RBus_UInt32  gpio_25_pu:1;
        RBus_UInt32  gpio_25_ps:4;
        RBus_UInt32  gpio_24_sr:1;
        RBus_UInt32  gpio_24_ds:1;
        RBus_UInt32  gpio_24_pd:1;
        RBus_UInt32  gpio_24_pu:1;
        RBus_UInt32  gpio_24_ps:4;
    };
}pinmux_gpio_tleft_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_31_sr:1;
        RBus_UInt32  gpio_31_ds:1;
        RBus_UInt32  gpio_31_pd:1;
        RBus_UInt32  gpio_31_pu:1;
        RBus_UInt32  gpio_31_ps:4;
        RBus_UInt32  gpio_30_sr:1;
        RBus_UInt32  gpio_30_ds:1;
        RBus_UInt32  gpio_30_pd:1;
        RBus_UInt32  gpio_30_pu:1;
        RBus_UInt32  gpio_30_ps:4;
        RBus_UInt32  gpio_29_sr:1;
        RBus_UInt32  gpio_29_ds:1;
        RBus_UInt32  gpio_29_pd:1;
        RBus_UInt32  gpio_29_pu:1;
        RBus_UInt32  gpio_29_ps:4;
        RBus_UInt32  gpio_28_sr:1;
        RBus_UInt32  gpio_28_ds:1;
        RBus_UInt32  gpio_28_pd:1;
        RBus_UInt32  gpio_28_pu:1;
        RBus_UInt32  gpio_28_ps:4;
    };
}pinmux_gpio_tleft_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_31_smt:1;
        RBus_UInt32  gpio_30_smt:1;
        RBus_UInt32  gpio_29_smt:1;
        RBus_UInt32  gpio_28_smt:1;
        RBus_UInt32  gpio_27_smt:1;
        RBus_UInt32  gpio_26_smt:1;
        RBus_UInt32  gpio_25_smt:1;
        RBus_UInt32  gpio_24_smt:1;
        RBus_UInt32  gpio_23_smt:1;
        RBus_UInt32  gpio_22_smt:1;
        RBus_UInt32  gpio_21_smt:1;
        RBus_UInt32  gpio_20_smt:1;
        RBus_UInt32  gpio_19_smt:1;
        RBus_UInt32  gpio_18_smt:1;
        RBus_UInt32  gpio_17_smt:1;
        RBus_UInt32  gpio_16_smt:1;
        RBus_UInt32  gpio_15_smt:1;
        RBus_UInt32  gpio_14_smt:1;
        RBus_UInt32  gpio_13_smt:1;
        RBus_UInt32  gpio_12_smt:1;
        RBus_UInt32  gpio_11_smt:1;
        RBus_UInt32  gpio_10_smt:1;
        RBus_UInt32  gpio_09_smt:1;
        RBus_UInt32  gpio_08_smt:1;
        RBus_UInt32  gpio_07_smt:1;
        RBus_UInt32  gpio_06_smt:1;
        RBus_UInt32  gpio_05_smt:1;
        RBus_UInt32  gpio_04_smt:1;
        RBus_UInt32  gpio_03_smt:1;
        RBus_UInt32  gpio_02_smt:1;
        RBus_UInt32  gpio_01_smt:1;
        RBus_UInt32  gpio_00_smt:1;
    };
}pinmux_tleft_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  gpio_15_ea:1;
        RBus_UInt32  gpio_14_ea:1;
        RBus_UInt32  gpio_26_ie_v18:1;
        RBus_UInt32  gpio_28_ie_v18:1;
        RBus_UInt32  gpio_02_ie_v18:1;
        RBus_UInt32  gpio_03_ie_v18:1;
        RBus_UInt32  gpio_27_ie_v18:1;
    };
}pinmux_tleft_iev18_ea_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bb_aior_gpi_en:1;
        RBus_UInt32  bb_aiol_gpi_en:1;
        RBus_UInt32  bb_ai3r_gpi_en:1;
        RBus_UInt32  bb_ai3l_gpi_en:1;
        RBus_UInt32  bb_ai2r_gpi_en:1;
        RBus_UInt32  bb_ai2l_gpi_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  bb_aior_ps:4;
        RBus_UInt32  bb_aiol_ps:4;
        RBus_UInt32  bb_ai3r_ps:4;
        RBus_UInt32  bb_ai3l_ps:4;
        RBus_UInt32  bb_ai2r_ps:4;
        RBus_UInt32  bb_ai2l_ps:4;
    };
}pinmux_bb_audio_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bb_hpor_gpi_en:1;
        RBus_UInt32  bb_hpol_gpi_en:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  bb_hpor_ps:4;
        RBus_UInt32  bb_hpol_ps:4;
    };
}pinmux_bb_audio_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vin_gn_gpi_en:1;
        RBus_UInt32  vin_1p_gpi_en:1;
        RBus_UInt32  vin_bn_gpi_en:1;
        RBus_UInt32  vin_0p_gpi_en:1;
        RBus_UInt32  hsync_gpi_en:1;
        RBus_UInt32  vsync_gpi_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  vin_gn_ps:4;
        RBus_UInt32  vin_1p_ps:4;
        RBus_UInt32  vin_bn_ps:4;
        RBus_UInt32  vin_0p_ps:4;
        RBus_UInt32  hsync_ps:4;
        RBus_UInt32  vsync_ps:4;
    };
}pinmux_ypbpr_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vin_5p_gpi_en:1;
        RBus_UInt32  vin_4p_gpi_en:1;
        RBus_UInt32  vin_y0n_gpi_en:1;
        RBus_UInt32  vin_3p_gpi_en:1;
        RBus_UInt32  vin_rn_gpi_en:1;
        RBus_UInt32  vin_2p_gpi_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  vin_5p_ps:4;
        RBus_UInt32  vin_4p_ps:4;
        RBus_UInt32  vin_y0n_ps:4;
        RBus_UInt32  vin_3p_ps:4;
        RBus_UInt32  vin_rn_ps:4;
        RBus_UInt32  vin_2p_ps:4;
    };
}pinmux_ypbpr_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vin_a0n_gpi_en:1;
        RBus_UInt32  vin_10p_gpi_en:1;
        RBus_UInt32  scart_fsw_0_gpi_en:1;
        RBus_UInt32  res1:17;
        RBus_UInt32  vin_a0n_ps:4;
        RBus_UInt32  vin_10p_ps:4;
        RBus_UInt32  scart_fsw_0_ps:4;
    };
}pinmux_vd_adc_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vid_vdbs_gpi_en:1;
        RBus_UInt32  vid_vdac_gpi_en:1;
        RBus_UInt32  res1:22;
        RBus_UInt32  vid_vdbs_ps:4;
        RBus_UInt32  vid_vdac_ps:4;
    };
}pinmux_vd_dac_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_60_sr:1;
        RBus_UInt32  gpio_60_ds:1;
        RBus_UInt32  gpio_60_pd:1;
        RBus_UInt32  gpio_60_pu:1;
        RBus_UInt32  gpio_60_ps:4;
        RBus_UInt32  gpio_59_sr:1;
        RBus_UInt32  gpio_59_ds:1;
        RBus_UInt32  gpio_59_pd:1;
        RBus_UInt32  gpio_59_pu:1;
        RBus_UInt32  gpio_59_ps:4;
        RBus_UInt32  gpio_58_sr:1;
        RBus_UInt32  gpio_58_ds:1;
        RBus_UInt32  gpio_58_pd:1;
        RBus_UInt32  gpio_58_pu:1;
        RBus_UInt32  gpio_58_ps:4;
        RBus_UInt32  gpio_57_sr:1;
        RBus_UInt32  gpio_57_ds:1;
        RBus_UInt32  gpio_57_pd:1;
        RBus_UInt32  gpio_57_pu:1;
        RBus_UInt32  gpio_57_ps:4;
    };
}pinmux_gpio_left_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_64_sr:1;
        RBus_UInt32  gpio_64_ds:1;
        RBus_UInt32  gpio_64_pd:1;
        RBus_UInt32  gpio_64_pu:1;
        RBus_UInt32  gpio_64_ps:4;
        RBus_UInt32  gpio_63_sr:1;
        RBus_UInt32  gpio_63_ds:1;
        RBus_UInt32  gpio_63_pd:1;
        RBus_UInt32  gpio_63_pu:1;
        RBus_UInt32  gpio_63_ps:4;
        RBus_UInt32  gpio_62_sr:1;
        RBus_UInt32  gpio_62_ds:1;
        RBus_UInt32  gpio_62_pd:1;
        RBus_UInt32  gpio_62_pu:1;
        RBus_UInt32  gpio_62_ps:4;
        RBus_UInt32  gpio_61_sr:1;
        RBus_UInt32  gpio_61_ds:1;
        RBus_UInt32  gpio_61_pd:1;
        RBus_UInt32  gpio_61_pu:1;
        RBus_UInt32  gpio_61_ps:4;
    };
}pinmux_gpio_left_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_68_sr:1;
        RBus_UInt32  gpio_68_ds:1;
        RBus_UInt32  gpio_68_pd:1;
        RBus_UInt32  gpio_68_pu:1;
        RBus_UInt32  gpio_68_ps:4;
        RBus_UInt32  gpio_67_sr:1;
        RBus_UInt32  gpio_67_ds:1;
        RBus_UInt32  gpio_67_pd:1;
        RBus_UInt32  gpio_67_pu:1;
        RBus_UInt32  gpio_67_ps:4;
        RBus_UInt32  gpio_66_sr:1;
        RBus_UInt32  gpio_66_ds:1;
        RBus_UInt32  gpio_66_pd:1;
        RBus_UInt32  gpio_66_pu:1;
        RBus_UInt32  gpio_66_ps:4;
        RBus_UInt32  gpio_65_sr:1;
        RBus_UInt32  gpio_65_ds:1;
        RBus_UInt32  gpio_65_pd:1;
        RBus_UInt32  gpio_65_pu:1;
        RBus_UInt32  gpio_65_ps:4;
    };
}pinmux_gpio_left_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_72_sr:1;
        RBus_UInt32  gpio_72_ds:1;
        RBus_UInt32  gpio_72_pd:1;
        RBus_UInt32  gpio_72_pu:1;
        RBus_UInt32  gpio_72_ps:4;
        RBus_UInt32  gpio_71_sr:1;
        RBus_UInt32  gpio_71_ds:1;
        RBus_UInt32  gpio_71_pd:1;
        RBus_UInt32  gpio_71_pu:1;
        RBus_UInt32  gpio_71_ps:4;
        RBus_UInt32  gpio_70_sr:1;
        RBus_UInt32  gpio_70_ds:1;
        RBus_UInt32  gpio_70_pd:1;
        RBus_UInt32  gpio_70_pu:1;
        RBus_UInt32  gpio_70_ps:4;
        RBus_UInt32  gpio_69_sr:1;
        RBus_UInt32  gpio_69_ds:1;
        RBus_UInt32  gpio_69_pd:1;
        RBus_UInt32  gpio_69_pu:1;
        RBus_UInt32  gpio_69_ps:4;
    };
}pinmux_gpio_left_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_76_sr:1;
        RBus_UInt32  gpio_76_ds:1;
        RBus_UInt32  gpio_76_pd:1;
        RBus_UInt32  gpio_76_pu:1;
        RBus_UInt32  gpio_76_ps:4;
        RBus_UInt32  gpio_75_sr:1;
        RBus_UInt32  gpio_75_ds:1;
        RBus_UInt32  gpio_75_pd:1;
        RBus_UInt32  gpio_75_pu:1;
        RBus_UInt32  gpio_75_ps:4;
        RBus_UInt32  gpio_74_sr:1;
        RBus_UInt32  gpio_74_ds:1;
        RBus_UInt32  gpio_74_pd:1;
        RBus_UInt32  gpio_74_pu:1;
        RBus_UInt32  gpio_74_ps:4;
        RBus_UInt32  gpio_73_sr:1;
        RBus_UInt32  gpio_73_ds:1;
        RBus_UInt32  gpio_73_pd:1;
        RBus_UInt32  gpio_73_pu:1;
        RBus_UInt32  gpio_73_ps:4;
    };
}pinmux_gpio_left_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_80_sr:1;
        RBus_UInt32  gpio_80_ds:1;
        RBus_UInt32  gpio_80_pd:1;
        RBus_UInt32  gpio_80_pu:1;
        RBus_UInt32  gpio_80_ps:4;
        RBus_UInt32  gpio_79_sr:1;
        RBus_UInt32  gpio_79_ds:1;
        RBus_UInt32  gpio_79_pd:1;
        RBus_UInt32  gpio_79_pu:1;
        RBus_UInt32  gpio_79_ps:4;
        RBus_UInt32  gpio_78_sr:1;
        RBus_UInt32  gpio_78_ds:1;
        RBus_UInt32  gpio_78_pd:1;
        RBus_UInt32  gpio_78_pu:1;
        RBus_UInt32  gpio_78_ps:4;
        RBus_UInt32  gpio_77_sr:1;
        RBus_UInt32  gpio_77_ds:1;
        RBus_UInt32  gpio_77_pd:1;
        RBus_UInt32  gpio_77_pu:1;
        RBus_UInt32  gpio_77_ps:4;
    };
}pinmux_gpio_left_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_155_sr:1;
        RBus_UInt32  gpio_155_ds:1;
        RBus_UInt32  gpio_155_pd:1;
        RBus_UInt32  gpio_155_pu:1;
        RBus_UInt32  gpio_155_ps:4;
        RBus_UInt32  gpio_154_sr:1;
        RBus_UInt32  gpio_154_ds:1;
        RBus_UInt32  gpio_154_pd:1;
        RBus_UInt32  gpio_154_pu:1;
        RBus_UInt32  gpio_154_ps:4;
        RBus_UInt32  gpio_82_sr:1;
        RBus_UInt32  gpio_82_ds:1;
        RBus_UInt32  gpio_82_pd:1;
        RBus_UInt32  gpio_82_pu:1;
        RBus_UInt32  gpio_82_ps:4;
        RBus_UInt32  gpio_81_sr:1;
        RBus_UInt32  gpio_81_ds:1;
        RBus_UInt32  gpio_81_pd:1;
        RBus_UInt32  gpio_81_pu:1;
        RBus_UInt32  gpio_81_ps:4;
    };
}pinmux_gpio_left_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_159_sr:1;
        RBus_UInt32  gpio_159_ds:1;
        RBus_UInt32  gpio_159_pd:1;
        RBus_UInt32  gpio_159_pu:1;
        RBus_UInt32  gpio_159_ps:4;
        RBus_UInt32  gpio_158_sr:1;
        RBus_UInt32  gpio_158_ds:1;
        RBus_UInt32  gpio_158_pd:1;
        RBus_UInt32  gpio_158_pu:1;
        RBus_UInt32  gpio_158_ps:4;
        RBus_UInt32  gpio_157_sr:1;
        RBus_UInt32  gpio_157_ds:1;
        RBus_UInt32  gpio_157_pd:1;
        RBus_UInt32  gpio_157_pu:1;
        RBus_UInt32  gpio_157_ps:4;
        RBus_UInt32  gpio_156_sr:1;
        RBus_UInt32  gpio_156_ds:1;
        RBus_UInt32  gpio_156_pd:1;
        RBus_UInt32  gpio_156_pu:1;
        RBus_UInt32  gpio_156_ps:4;
    };
}pinmux_gpio_left_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  gpio_160_sr:1;
        RBus_UInt32  gpio_160_ds:1;
        RBus_UInt32  gpio_160_pd:1;
        RBus_UInt32  gpio_160_pu:1;
        RBus_UInt32  gpio_160_ps:4;
    };
}pinmux_gpio_left_cfg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_159_smt:1;
        RBus_UInt32  gpio_158_smt:1;
        RBus_UInt32  gpio_157_smt:1;
        RBus_UInt32  gpio_156_smt:1;
        RBus_UInt32  gpio_155_smt:1;
        RBus_UInt32  gpio_154_smt:1;
        RBus_UInt32  gpio_82_smt:1;
        RBus_UInt32  gpio_81_smt:1;
        RBus_UInt32  gpio_80_smt:1;
        RBus_UInt32  gpio_79_smt:1;
        RBus_UInt32  gpio_78_smt:1;
        RBus_UInt32  gpio_77_smt:1;
        RBus_UInt32  gpio_76_smt:1;
        RBus_UInt32  gpio_75_smt:1;
        RBus_UInt32  gpio_74_smt:1;
        RBus_UInt32  gpio_73_smt:1;
        RBus_UInt32  gpio_72_smt:1;
        RBus_UInt32  gpio_71_smt:1;
        RBus_UInt32  gpio_70_smt:1;
        RBus_UInt32  gpio_69_smt:1;
        RBus_UInt32  gpio_68_smt:1;
        RBus_UInt32  gpio_67_smt:1;
        RBus_UInt32  gpio_66_smt:1;
        RBus_UInt32  gpio_65_smt:1;
        RBus_UInt32  gpio_64_smt:1;
        RBus_UInt32  gpio_63_smt:1;
        RBus_UInt32  gpio_62_smt:1;
        RBus_UInt32  gpio_61_smt:1;
        RBus_UInt32  gpio_60_smt:1;
        RBus_UInt32  gpio_59_smt:1;
        RBus_UInt32  gpio_58_smt:1;
        RBus_UInt32  gpio_57_smt:1;
    };
}pinmux_left_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  gpio_160_smt2:1;
        RBus_UInt32  gpio_159_smt2:1;
        RBus_UInt32  gpio_158_smt2:1;
        RBus_UInt32  gpio_157_smt2:1;
        RBus_UInt32  gpio_156_smt2:1;
        RBus_UInt32  gpio_155_smt2:1;
        RBus_UInt32  gpio_154_smt2:1;
        RBus_UInt32  gpio_77_smt2:1;
        RBus_UInt32  gpio_76_smt2:1;
        RBus_UInt32  gpio_75_smt2:1;
        RBus_UInt32  gpio_74_smt2:1;
        RBus_UInt32  gpio_72_smt2:1;
        RBus_UInt32  gpio_71_smt2:1;
        RBus_UInt32  gpio_70_smt2:1;
        RBus_UInt32  gpio_69_smt2:1;
        RBus_UInt32  gpio_68_smt2:1;
        RBus_UInt32  gpio_67_smt2:1;
        RBus_UInt32  gpio_66_smt2:1;
        RBus_UInt32  gpio_65_smt2:1;
        RBus_UInt32  gpio_64_smt2:1;
        RBus_UInt32  gpio_63_smt2:1;
        RBus_UInt32  gpio_62_smt2:1;
        RBus_UInt32  gpio_17_ds2:1;
        RBus_UInt32  gpio_160_smt:1;
    };
}pinmux_left_smt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2c3_sda_in_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  i2c3_scl_in_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  i2c2_sda_in_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  i2c2_scl_in_sel:2;
        RBus_UInt32  res4:6;
        RBus_UInt32  demod_dsc_in_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  demod_dsc_22_in_sel:2;
        RBus_UInt32  res6:6;
    };
}pinmux_pin_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ld_spi0_p2_sck_in_sel:3;
        RBus_UInt32  res1:5;
        RBus_UInt32  i2s_in_data3_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  i2s_in_data2_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  i2s_in_data1_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  i2s_in_data0_sel:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  i2c4_sda_in_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  i2c4_scl_in_sel:2;
        RBus_UInt32  res7:2;
    };
}pinmux_pin_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_fcic_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  sc_data_in_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  sc_cd_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  ld_spi1_p4_sdi_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  ld_spi1_p3_sdo_in_sel:3;
        RBus_UInt32  res5:1;
        RBus_UInt32  ld_spi1_p2_sck_in_sel:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  ld_spi0_p4_sdi_sel:3;
        RBus_UInt32  res7:1;
        RBus_UInt32  ld_spi0_p3_sdo_in_sel:3;
        RBus_UInt32  res8:1;
    };
}pinmux_pin_mux_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tp0_data_bit5_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  tp0_data_bit4_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  tp0_data_bit3_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  tp0_data_bit2_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  tp0_data_bit1_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  tp0_data_bit0_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  tp0_clk_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  spi_sel:2;
        RBus_UInt32  res8:2;
    };
}pinmux_pin_mux_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tp1_val_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  tp1_sync_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  tp1_data_bit0_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  tp1_clk_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  tp0_val_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  tp0_sync_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  tp0_data_bit7_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  tp0_data_bit6_sel:2;
        RBus_UInt32  res8:2;
    };
}pinmux_pin_mux_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  tp2_val_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  tp2_sync_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  tp2_data_bit0_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  tp2_clk_sel:2;
        RBus_UInt32  res5:2;
    };
}pinmux_pin_mux_ctrl5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  register_dbg_out:32;
    };
}pinmux_pin_mux_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  spi_porl_release:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  block_testpin_mux:4;
        RBus_UInt32  apr_testpin_mux:4;
        RBus_UInt32  testpin_mux:8;
    };
}pinmux_pin_mux_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_en_out:32;
    };
}pinmux_pin_mux_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_86_sr:1;
        RBus_UInt32  gpio_86_ds:1;
        RBus_UInt32  gpio_86_pd:1;
        RBus_UInt32  gpio_86_pu:1;
        RBus_UInt32  gpio_86_ps:4;
        RBus_UInt32  gpio_85_sr:1;
        RBus_UInt32  gpio_85_ds:1;
        RBus_UInt32  gpio_85_pd:1;
        RBus_UInt32  gpio_85_pu:1;
        RBus_UInt32  gpio_85_ps:4;
        RBus_UInt32  gpio_84_sr:1;
        RBus_UInt32  gpio_84_ds:1;
        RBus_UInt32  gpio_84_pd:1;
        RBus_UInt32  gpio_84_pu:1;
        RBus_UInt32  gpio_84_ps:4;
        RBus_UInt32  gpio_83_sr:1;
        RBus_UInt32  gpio_83_ds:1;
        RBus_UInt32  gpio_83_pd:1;
        RBus_UInt32  gpio_83_pu:1;
        RBus_UInt32  gpio_83_ps:4;
    };
}pinmux_gpio_right_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_90_sr:1;
        RBus_UInt32  gpio_90_ds:1;
        RBus_UInt32  gpio_90_pd:1;
        RBus_UInt32  gpio_90_pu:1;
        RBus_UInt32  gpio_90_ps:4;
        RBus_UInt32  gpio_89_sr:1;
        RBus_UInt32  gpio_89_ds:1;
        RBus_UInt32  gpio_89_pd:1;
        RBus_UInt32  gpio_89_pu:1;
        RBus_UInt32  gpio_89_ps:4;
        RBus_UInt32  gpio_88_sr:1;
        RBus_UInt32  gpio_88_ds:1;
        RBus_UInt32  gpio_88_pd:1;
        RBus_UInt32  gpio_88_pu:1;
        RBus_UInt32  gpio_88_ps:4;
        RBus_UInt32  gpio_87_sr:1;
        RBus_UInt32  gpio_87_ds:1;
        RBus_UInt32  gpio_87_pd:1;
        RBus_UInt32  gpio_87_pu:1;
        RBus_UInt32  gpio_87_ps:4;
    };
}pinmux_gpio_right_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_94_sr:1;
        RBus_UInt32  gpio_94_ds:1;
        RBus_UInt32  gpio_94_pd:1;
        RBus_UInt32  gpio_94_pu:1;
        RBus_UInt32  gpio_94_ps:4;
        RBus_UInt32  gpio_93_sr:1;
        RBus_UInt32  gpio_93_ds:1;
        RBus_UInt32  gpio_93_pd:1;
        RBus_UInt32  gpio_93_pu:1;
        RBus_UInt32  gpio_93_ps:4;
        RBus_UInt32  gpio_92_sr:1;
        RBus_UInt32  gpio_92_ds:1;
        RBus_UInt32  gpio_92_pd:1;
        RBus_UInt32  gpio_92_pu:1;
        RBus_UInt32  gpio_92_ps:4;
        RBus_UInt32  gpio_91_sr:1;
        RBus_UInt32  gpio_91_ds:1;
        RBus_UInt32  gpio_91_pd:1;
        RBus_UInt32  gpio_91_pu:1;
        RBus_UInt32  gpio_91_ps:4;
    };
}pinmux_gpio_right_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_98_sr:1;
        RBus_UInt32  gpio_98_ds:1;
        RBus_UInt32  gpio_98_pd:1;
        RBus_UInt32  gpio_98_pu:1;
        RBus_UInt32  gpio_98_ps:4;
        RBus_UInt32  gpio_97_sr:1;
        RBus_UInt32  gpio_97_ds:1;
        RBus_UInt32  gpio_97_pd:1;
        RBus_UInt32  gpio_97_pu:1;
        RBus_UInt32  gpio_97_ps:4;
        RBus_UInt32  gpio_96_sr:1;
        RBus_UInt32  gpio_96_ds:1;
        RBus_UInt32  gpio_96_pd:1;
        RBus_UInt32  gpio_96_pu:1;
        RBus_UInt32  gpio_96_ps:4;
        RBus_UInt32  gpio_95_sr:1;
        RBus_UInt32  gpio_95_ds:1;
        RBus_UInt32  gpio_95_pd:1;
        RBus_UInt32  gpio_95_pu:1;
        RBus_UInt32  gpio_95_ps:4;
    };
}pinmux_gpio_right_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_102_sr:1;
        RBus_UInt32  gpio_102_ds:1;
        RBus_UInt32  gpio_102_pd:1;
        RBus_UInt32  gpio_102_pu:1;
        RBus_UInt32  gpio_102_ps:4;
        RBus_UInt32  gpio_101_sr:1;
        RBus_UInt32  gpio_101_ds:1;
        RBus_UInt32  gpio_101_pd:1;
        RBus_UInt32  gpio_101_pu:1;
        RBus_UInt32  gpio_101_ps:4;
        RBus_UInt32  gpio_100_sr:1;
        RBus_UInt32  gpio_100_ds:1;
        RBus_UInt32  gpio_100_pd:1;
        RBus_UInt32  gpio_100_pu:1;
        RBus_UInt32  gpio_100_ps:4;
        RBus_UInt32  gpio_99_sr:1;
        RBus_UInt32  gpio_99_ds:1;
        RBus_UInt32  gpio_99_pd:1;
        RBus_UInt32  gpio_99_pu:1;
        RBus_UInt32  gpio_99_ps:4;
    };
}pinmux_gpio_right_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_106_sr:1;
        RBus_UInt32  gpio_106_ds:1;
        RBus_UInt32  gpio_106_pd:1;
        RBus_UInt32  gpio_106_pu:1;
        RBus_UInt32  gpio_106_ps:4;
        RBus_UInt32  gpio_105_sr:1;
        RBus_UInt32  gpio_105_ds:1;
        RBus_UInt32  gpio_105_pd:1;
        RBus_UInt32  gpio_105_pu:1;
        RBus_UInt32  gpio_105_ps:4;
        RBus_UInt32  gpio_104_sr:1;
        RBus_UInt32  gpio_104_ds:1;
        RBus_UInt32  gpio_104_pd:1;
        RBus_UInt32  gpio_104_pu:1;
        RBus_UInt32  gpio_104_ps:4;
        RBus_UInt32  gpio_103_sr:1;
        RBus_UInt32  gpio_103_ds:1;
        RBus_UInt32  gpio_103_pd:1;
        RBus_UInt32  gpio_103_pu:1;
        RBus_UInt32  gpio_103_ps:4;
    };
}pinmux_gpio_right_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_110_sr:1;
        RBus_UInt32  gpio_110_ds:1;
        RBus_UInt32  gpio_110_pd:1;
        RBus_UInt32  gpio_110_pu:1;
        RBus_UInt32  gpio_110_ps:4;
        RBus_UInt32  gpio_109_sr:1;
        RBus_UInt32  gpio_109_ds:1;
        RBus_UInt32  gpio_109_pd:1;
        RBus_UInt32  gpio_109_pu:1;
        RBus_UInt32  gpio_109_ps:4;
        RBus_UInt32  gpio_108_sr:1;
        RBus_UInt32  gpio_108_ds:1;
        RBus_UInt32  gpio_108_pd:1;
        RBus_UInt32  gpio_108_pu:1;
        RBus_UInt32  gpio_108_ps:4;
        RBus_UInt32  gpio_107_sr:1;
        RBus_UInt32  gpio_107_ds:1;
        RBus_UInt32  gpio_107_pd:1;
        RBus_UInt32  gpio_107_pu:1;
        RBus_UInt32  gpio_107_ps:4;
    };
}pinmux_gpio_right_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_114_sr:1;
        RBus_UInt32  gpio_114_ds:1;
        RBus_UInt32  gpio_114_pd:1;
        RBus_UInt32  gpio_114_pu:1;
        RBus_UInt32  gpio_114_ps:4;
        RBus_UInt32  gpio_113_sr:1;
        RBus_UInt32  gpio_113_ds:1;
        RBus_UInt32  gpio_113_pd:1;
        RBus_UInt32  gpio_113_pu:1;
        RBus_UInt32  gpio_113_ps:4;
        RBus_UInt32  gpio_112_sr:1;
        RBus_UInt32  gpio_112_ds:1;
        RBus_UInt32  gpio_112_pd:1;
        RBus_UInt32  gpio_112_pu:1;
        RBus_UInt32  gpio_112_ps:4;
        RBus_UInt32  gpio_111_sr:1;
        RBus_UInt32  gpio_111_ds:1;
        RBus_UInt32  gpio_111_pd:1;
        RBus_UInt32  gpio_111_pu:1;
        RBus_UInt32  gpio_111_ps:4;
    };
}pinmux_gpio_right_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_118_sr:1;
        RBus_UInt32  gpio_118_ds:1;
        RBus_UInt32  gpio_118_pd:1;
        RBus_UInt32  gpio_118_pu:1;
        RBus_UInt32  gpio_118_ps:4;
        RBus_UInt32  gpio_117_sr:1;
        RBus_UInt32  gpio_117_ds:1;
        RBus_UInt32  gpio_117_pd:1;
        RBus_UInt32  gpio_117_pu:1;
        RBus_UInt32  gpio_117_ps:4;
        RBus_UInt32  gpio_116_sr:1;
        RBus_UInt32  gpio_116_ds:1;
        RBus_UInt32  gpio_116_pd:1;
        RBus_UInt32  gpio_116_pu:1;
        RBus_UInt32  gpio_116_ps:4;
        RBus_UInt32  gpio_115_sr:1;
        RBus_UInt32  gpio_115_ds:1;
        RBus_UInt32  gpio_115_pd:1;
        RBus_UInt32  gpio_115_pu:1;
        RBus_UInt32  gpio_115_ps:4;
    };
}pinmux_gpio_right_cfg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_122_sr:1;
        RBus_UInt32  gpio_122_ds:1;
        RBus_UInt32  gpio_122_pd:1;
        RBus_UInt32  gpio_122_pu:1;
        RBus_UInt32  gpio_122_ps:4;
        RBus_UInt32  gpio_121_sr:1;
        RBus_UInt32  gpio_121_ds:1;
        RBus_UInt32  gpio_121_pd:1;
        RBus_UInt32  gpio_121_pu:1;
        RBus_UInt32  gpio_121_ps:4;
        RBus_UInt32  gpio_120_sr:1;
        RBus_UInt32  gpio_120_ds:1;
        RBus_UInt32  gpio_120_pd:1;
        RBus_UInt32  gpio_120_pu:1;
        RBus_UInt32  gpio_120_ps:4;
        RBus_UInt32  gpio_119_sr:1;
        RBus_UInt32  gpio_119_ds:1;
        RBus_UInt32  gpio_119_pd:1;
        RBus_UInt32  gpio_119_pu:1;
        RBus_UInt32  gpio_119_ps:4;
    };
}pinmux_gpio_right_cfg_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_126_sr:1;
        RBus_UInt32  gpio_126_ds:1;
        RBus_UInt32  gpio_126_pd:1;
        RBus_UInt32  gpio_126_pu:1;
        RBus_UInt32  gpio_126_ps:4;
        RBus_UInt32  gpio_125_sr:1;
        RBus_UInt32  gpio_125_ds:1;
        RBus_UInt32  gpio_125_pd:1;
        RBus_UInt32  gpio_125_pu:1;
        RBus_UInt32  gpio_125_ps:4;
        RBus_UInt32  gpio_124_sr:1;
        RBus_UInt32  gpio_124_ds:1;
        RBus_UInt32  gpio_124_pd:1;
        RBus_UInt32  gpio_124_pu:1;
        RBus_UInt32  gpio_124_ps:4;
        RBus_UInt32  gpio_123_sr:1;
        RBus_UInt32  gpio_123_ds:1;
        RBus_UInt32  gpio_123_pd:1;
        RBus_UInt32  gpio_123_pu:1;
        RBus_UInt32  gpio_123_ps:4;
    };
}pinmux_gpio_right_cfg_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_130_sr:1;
        RBus_UInt32  gpio_130_ds:1;
        RBus_UInt32  gpio_130_pd:1;
        RBus_UInt32  gpio_130_pu:1;
        RBus_UInt32  gpio_130_ps:4;
        RBus_UInt32  gpio_129_sr:1;
        RBus_UInt32  gpio_129_ds:1;
        RBus_UInt32  gpio_129_pd:1;
        RBus_UInt32  gpio_129_pu:1;
        RBus_UInt32  gpio_129_ps:4;
        RBus_UInt32  gpio_128_sr:1;
        RBus_UInt32  gpio_128_ds:1;
        RBus_UInt32  gpio_128_pd:1;
        RBus_UInt32  gpio_128_pu:1;
        RBus_UInt32  gpio_128_ps:4;
        RBus_UInt32  gpio_127_sr:1;
        RBus_UInt32  gpio_127_ds:1;
        RBus_UInt32  gpio_127_pd:1;
        RBus_UInt32  gpio_127_pu:1;
        RBus_UInt32  gpio_127_ps:4;
    };
}pinmux_gpio_right_cfg_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_134_sr:1;
        RBus_UInt32  gpio_134_ds:1;
        RBus_UInt32  gpio_134_pd:1;
        RBus_UInt32  gpio_134_pu:1;
        RBus_UInt32  gpio_134_ps:4;
        RBus_UInt32  gpio_133_sr:1;
        RBus_UInt32  gpio_133_ds:1;
        RBus_UInt32  gpio_133_pd:1;
        RBus_UInt32  gpio_133_pu:1;
        RBus_UInt32  gpio_133_ps:4;
        RBus_UInt32  gpio_132_sr:1;
        RBus_UInt32  gpio_132_ds:1;
        RBus_UInt32  gpio_132_pd:1;
        RBus_UInt32  gpio_132_pu:1;
        RBus_UInt32  gpio_132_ps:4;
        RBus_UInt32  gpio_131_sr:1;
        RBus_UInt32  gpio_131_ds:1;
        RBus_UInt32  gpio_131_pd:1;
        RBus_UInt32  gpio_131_pu:1;
        RBus_UInt32  gpio_131_ps:4;
    };
}pinmux_gpio_right_cfg_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_138_sr:1;
        RBus_UInt32  gpio_138_ds:1;
        RBus_UInt32  gpio_138_pd:1;
        RBus_UInt32  gpio_138_pu:1;
        RBus_UInt32  gpio_138_ps:4;
        RBus_UInt32  gpio_137_sr:1;
        RBus_UInt32  gpio_137_ds:1;
        RBus_UInt32  gpio_137_pd:1;
        RBus_UInt32  gpio_137_pu:1;
        RBus_UInt32  gpio_137_ps:4;
        RBus_UInt32  gpio_136_sr:1;
        RBus_UInt32  gpio_136_ds:1;
        RBus_UInt32  gpio_136_pd:1;
        RBus_UInt32  gpio_136_pu:1;
        RBus_UInt32  gpio_136_ps:4;
        RBus_UInt32  gpio_135_sr:1;
        RBus_UInt32  gpio_135_ds:1;
        RBus_UInt32  gpio_135_pd:1;
        RBus_UInt32  gpio_135_pu:1;
        RBus_UInt32  gpio_135_ps:4;
    };
}pinmux_gpio_right_cfg_13_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  gpio_153_sr:1;
        RBus_UInt32  gpio_153_ds:1;
        RBus_UInt32  gpio_153_pd:1;
        RBus_UInt32  gpio_153_pu:1;
        RBus_UInt32  gpio_153_ps:4;
        RBus_UInt32  gpio_152_sr:1;
        RBus_UInt32  gpio_152_ds:1;
        RBus_UInt32  gpio_152_pd:1;
        RBus_UInt32  gpio_152_pu:1;
        RBus_UInt32  gpio_152_ps:4;
        RBus_UInt32  gpio_151_sr:1;
        RBus_UInt32  gpio_151_ds:1;
        RBus_UInt32  gpio_151_pd:1;
        RBus_UInt32  gpio_151_pu:1;
        RBus_UInt32  gpio_151_ps:4;
    };
}pinmux_gpio_right_cfg_14_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  gpio_114_smt:1;
        RBus_UInt32  gpio_113_smt:1;
        RBus_UInt32  gpio_112_smt:1;
        RBus_UInt32  gpio_111_smt:1;
        RBus_UInt32  gpio_110_smt:1;
        RBus_UInt32  gpio_109_smt:1;
        RBus_UInt32  gpio_108_smt:1;
        RBus_UInt32  gpio_107_smt:1;
        RBus_UInt32  gpio_106_smt:1;
        RBus_UInt32  gpio_105_smt:1;
        RBus_UInt32  gpio_104_smt:1;
        RBus_UInt32  gpio_103_smt:1;
        RBus_UInt32  gpio_102_smt:1;
        RBus_UInt32  gpio_101_smt:1;
        RBus_UInt32  gpio_100_smt:1;
        RBus_UInt32  gpio_99_smt:1;
        RBus_UInt32  gpio_98_smt:1;
        RBus_UInt32  gpio_97_smt:1;
        RBus_UInt32  gpio_96_smt:1;
        RBus_UInt32  gpio_95_smt:1;
        RBus_UInt32  gpio_94_smt:1;
        RBus_UInt32  gpio_93_smt:1;
        RBus_UInt32  gpio_92_smt:1;
        RBus_UInt32  gpio_91_smt:1;
        RBus_UInt32  gpio_90_smt:1;
        RBus_UInt32  gpio_89_smt:1;
        RBus_UInt32  gpio_88_smt:1;
        RBus_UInt32  gpio_87_smt:1;
        RBus_UInt32  gpio_86_smt:1;
        RBus_UInt32  gpio_85_smt:1;
        RBus_UInt32  gpio_84_smt:1;
        RBus_UInt32  gpio_83_smt:1;
    };
}pinmux_right_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  gpio_153_smt:1;
        RBus_UInt32  gpio_152_smt:1;
        RBus_UInt32  gpio_151_smt:1;
        RBus_UInt32  gpio_138_smt:1;
        RBus_UInt32  gpio_137_smt:1;
        RBus_UInt32  gpio_136_smt:1;
        RBus_UInt32  gpio_135_smt:1;
        RBus_UInt32  gpio_134_smt:1;
        RBus_UInt32  gpio_133_smt:1;
        RBus_UInt32  gpio_132_smt:1;
        RBus_UInt32  gpio_131_smt:1;
        RBus_UInt32  gpio_130_smt:1;
        RBus_UInt32  gpio_129_smt:1;
        RBus_UInt32  gpio_128_smt:1;
        RBus_UInt32  gpio_127_smt:1;
        RBus_UInt32  gpio_126_smt:1;
        RBus_UInt32  gpio_125_smt:1;
        RBus_UInt32  gpio_124_smt:1;
        RBus_UInt32  gpio_123_smt:1;
        RBus_UInt32  gpio_122_smt:1;
        RBus_UInt32  gpio_121_smt:1;
        RBus_UInt32  gpio_120_smt:1;
        RBus_UInt32  gpio_119_smt:1;
        RBus_UInt32  gpio_118_smt:1;
        RBus_UInt32  gpio_117_smt:1;
        RBus_UInt32  gpio_116_smt:1;
        RBus_UInt32  gpio_115_smt:1;
    };
}pinmux_right_smt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  emmc_cmd_ps:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  emmc_clk_ps:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  emmc_rst_n_ps:4;
    };
}pinmux_gpio_emmcclk_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  emmc_d4_ps:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  emmc_d3_ps:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  emmc_d5_ps:4;
        RBus_UInt32  res4:4;
        RBus_UInt32  emmc_ds_ps:4;
    };
}pinmux_gpio_emmc_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  emmc_d7_ps:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  emmc_d2_ps:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  emmc_d1_ps:4;
        RBus_UInt32  res4:4;
        RBus_UInt32  emmc_d0_ps:4;
    };
}pinmux_gpio_emmc_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_sel:1;
        RBus_UInt32  res1:27;
        RBus_UInt32  emmc_d6_ps:4;
    };
}pinmux_gpio_emmc_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  emmc_cmd_smt:1;
        RBus_UInt32  emmc_cmd_sr:1;
        RBus_UInt32  emmc_cmd_pd:1;
        RBus_UInt32  emmc_cmd_pu:1;
        RBus_UInt32  emmc_clk_smt:1;
        RBus_UInt32  emmc_clk_sr:1;
        RBus_UInt32  emmc_clk_pd:1;
        RBus_UInt32  emmc_clk_pu:1;
        RBus_UInt32  emmc_rst_n_smt:1;
        RBus_UInt32  emmc_rst_n_sr:1;
        RBus_UInt32  emmc_rst_n_pd:1;
        RBus_UInt32  emmc_rst_n_pu:1;
    };
}pinmux_emmcclk_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  emmc_cmd_dc:3;
        RBus_UInt32  emmc_cmd_ds:6;
        RBus_UInt32  emmc_clk_dc:3;
        RBus_UInt32  emmc_clk_ds:6;
        RBus_UInt32  emmc_rst_n_dc:3;
        RBus_UInt32  emmc_rst_n_ds:6;
    };
}pinmux_emmcclk_extracfg_np4e_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emmc_d7_smt:1;
        RBus_UInt32  emmc_d7_sr:1;
        RBus_UInt32  emmc_d7_pd:1;
        RBus_UInt32  emmc_d7_pu:1;
        RBus_UInt32  emmc_d2_smt:1;
        RBus_UInt32  emmc_d2_sr:1;
        RBus_UInt32  emmc_d2_pd:1;
        RBus_UInt32  emmc_d2_pu:1;
        RBus_UInt32  emmc_d1_smt:1;
        RBus_UInt32  emmc_d1_sr:1;
        RBus_UInt32  emmc_d1_pd:1;
        RBus_UInt32  emmc_d1_pu:1;
        RBus_UInt32  emmc_d0_smt:1;
        RBus_UInt32  emmc_d0_sr:1;
        RBus_UInt32  emmc_d0_pd:1;
        RBus_UInt32  emmc_d0_pu:1;
        RBus_UInt32  emmc_d4_smt:1;
        RBus_UInt32  emmc_d4_sr:1;
        RBus_UInt32  emmc_d4_pd:1;
        RBus_UInt32  emmc_d4_pu:1;
        RBus_UInt32  emmc_d3_smt:1;
        RBus_UInt32  emmc_d3_sr:1;
        RBus_UInt32  emmc_d3_pd:1;
        RBus_UInt32  emmc_d3_pu:1;
        RBus_UInt32  emmc_d5_smt:1;
        RBus_UInt32  emmc_d5_sr:1;
        RBus_UInt32  emmc_d5_pd:1;
        RBus_UInt32  emmc_d5_pu:1;
        RBus_UInt32  emmc_ds_smt:1;
        RBus_UInt32  emmc_ds_sr:1;
        RBus_UInt32  emmc_ds_pd:1;
        RBus_UInt32  emmc_ds_pu:1;
    };
}pinmux_emmc_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  emmc_d6_smt:1;
        RBus_UInt32  emmc_d6_sr:1;
        RBus_UInt32  emmc_d6_pd:1;
        RBus_UInt32  emmc_d6_pu:1;
    };
}pinmux_emmc_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  emmc_d3_dc:3;
        RBus_UInt32  emmc_d3_ds:6;
        RBus_UInt32  emmc_d5_dc:3;
        RBus_UInt32  emmc_d5_ds:6;
        RBus_UInt32  emmc_ds_dc:3;
        RBus_UInt32  emmc_ds_ds:6;
    };
}pinmux_emmc_extracfg_np4e_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  emmc_d1_dc:3;
        RBus_UInt32  emmc_d1_ds:6;
        RBus_UInt32  emmc_d0_dc:3;
        RBus_UInt32  emmc_d0_ds:6;
        RBus_UInt32  emmc_d4_dc:3;
        RBus_UInt32  emmc_d4_ds:6;
    };
}pinmux_emmc_extracfg_np4e_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  emmc_d6_dc:3;
        RBus_UInt32  emmc_d6_ds:6;
        RBus_UInt32  emmc_d7_dc:3;
        RBus_UInt32  emmc_d7_ds:6;
        RBus_UInt32  emmc_d2_dc:3;
        RBus_UInt32  emmc_d2_ds:6;
    };
}pinmux_emmc_extracfg_np4e_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx12n_ps:4;
        RBus_UInt32  pif_tx12p_ps:4;
        RBus_UInt32  pif_tx13n_ps:4;
        RBus_UInt32  pif_tx13p_ps:4;
        RBus_UInt32  pif_tx14n_ps:4;
        RBus_UInt32  pif_tx14p_ps:4;
        RBus_UInt32  pif_tx15n_ps:4;
        RBus_UInt32  pif_tx15p_ps:4;
    };
}pinmux_pif_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx8n_ps:4;
        RBus_UInt32  pif_tx8p_ps:4;
        RBus_UInt32  pif_tx9n_ps:4;
        RBus_UInt32  pif_tx9p_ps:4;
        RBus_UInt32  pif_tx10n_ps:4;
        RBus_UInt32  pif_tx10p_ps:4;
        RBus_UInt32  pif_tx11n_ps:4;
        RBus_UInt32  pif_tx11p_ps:4;
    };
}pinmux_pif_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx4n_ps:4;
        RBus_UInt32  pif_tx4p_ps:4;
        RBus_UInt32  pif_tx5n_ps:4;
        RBus_UInt32  pif_tx5p_ps:4;
        RBus_UInt32  pif_tx6n_ps:4;
        RBus_UInt32  pif_tx6p_ps:4;
        RBus_UInt32  pif_tx7n_ps:4;
        RBus_UInt32  pif_tx7p_ps:4;
    };
}pinmux_pif_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pif_tx0n_ps:4;
        RBus_UInt32  pif_tx0p_ps:4;
        RBus_UInt32  pif_tx1n_ps:4;
        RBus_UInt32  pif_tx1p_ps:4;
        RBus_UInt32  pif_tx2n_ps:4;
        RBus_UInt32  pif_tx2p_ps:4;
        RBus_UInt32  pif_tx3n_ps:4;
        RBus_UInt32  pif_tx3p_ps:4;
    };
}pinmux_pif_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  epi_lock_sel:2;
        RBus_UInt32  vby1_lock_sel:2;
        RBus_UInt32  vby1_htpd_sel:2;
        RBus_UInt32  boe_bcc_in_sel:2;
        RBus_UInt32  isp_sdlock_sel:2;
        RBus_UInt32  vby1_osd_lock_sel:2;
        RBus_UInt32  vby1_osd_htpd_sel:2;
        RBus_UInt32  res1:18;
    };
}pinmux_pin_mux_lvds_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsadc5_gpi_en:1;
        RBus_UInt32  lsadc6_gpi_en:1;
        RBus_UInt32  lsadc7_gpi_en:1;
        RBus_UInt32  lsadc8_gpi_en:1;
        RBus_UInt32  lsadc9_gpi_en:1;
        RBus_UInt32  lsadc10_gpi_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  lsadc5_ps:4;
        RBus_UInt32  lsadc6_ps:4;
        RBus_UInt32  lsadc7_ps:4;
        RBus_UInt32  lsadc8_ps:4;
        RBus_UInt32  lsadc9_ps:4;
        RBus_UInt32  lsadc10_ps:4;
    };
}pinmux_st_stb_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lsadc0_gpi_en:1;
        RBus_UInt32  lsadc1_gpi_en:1;
        RBus_UInt32  lsadc2_gpi_en:1;
        RBus_UInt32  lsadc3_gpi_en:1;
        RBus_UInt32  lsadc4_gpi_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  lsadc0_ps:4;
        RBus_UInt32  lsadc1_ps:4;
        RBus_UInt32  lsadc2_ps:4;
        RBus_UInt32  lsadc3_ps:4;
        RBus_UInt32  lsadc4_ps:4;
    };
}pinmux_st_stb_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_03_sr:1;
        RBus_UInt32  st_gpio_03_ds:1;
        RBus_UInt32  st_gpio_03_pd:1;
        RBus_UInt32  st_gpio_03_pu:1;
        RBus_UInt32  st_gpio_03_ps:4;
        RBus_UInt32  st_gpio_02_sr:1;
        RBus_UInt32  st_gpio_02_ds:1;
        RBus_UInt32  st_gpio_02_pd:1;
        RBus_UInt32  st_gpio_02_pu:1;
        RBus_UInt32  st_gpio_02_ps:4;
        RBus_UInt32  st_gpio_01_sr:1;
        RBus_UInt32  st_gpio_01_ds:1;
        RBus_UInt32  st_gpio_01_pd:1;
        RBus_UInt32  st_gpio_01_pu:1;
        RBus_UInt32  st_gpio_01_ps:4;
        RBus_UInt32  st_gpio_00_sr:1;
        RBus_UInt32  st_gpio_00_ds:1;
        RBus_UInt32  st_gpio_00_pd:1;
        RBus_UInt32  st_gpio_00_pu:1;
        RBus_UInt32  st_gpio_00_ps:4;
    };
}pinmux_st_gpio_st_cfg_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_07_sr:1;
        RBus_UInt32  st_gpio_07_ds:1;
        RBus_UInt32  st_gpio_07_pd:1;
        RBus_UInt32  st_gpio_07_pu:1;
        RBus_UInt32  st_gpio_07_ps:4;
        RBus_UInt32  st_gpio_06_sr:1;
        RBus_UInt32  st_gpio_06_ds:1;
        RBus_UInt32  st_gpio_06_pd:1;
        RBus_UInt32  st_gpio_06_pu:1;
        RBus_UInt32  st_gpio_06_ps:4;
        RBus_UInt32  st_gpio_05_sr:1;
        RBus_UInt32  st_gpio_05_ds:1;
        RBus_UInt32  st_gpio_05_pd:1;
        RBus_UInt32  st_gpio_05_pu:1;
        RBus_UInt32  st_gpio_05_ps:4;
        RBus_UInt32  st_gpio_04_sr:1;
        RBus_UInt32  st_gpio_04_ds:1;
        RBus_UInt32  st_gpio_04_pd:1;
        RBus_UInt32  st_gpio_04_pu:1;
        RBus_UInt32  st_gpio_04_ps:4;
    };
}pinmux_st_gpio_st_cfg_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_11_sr:1;
        RBus_UInt32  st_gpio_11_ds:1;
        RBus_UInt32  st_gpio_11_pd:1;
        RBus_UInt32  st_gpio_11_pu:1;
        RBus_UInt32  st_gpio_11_ps:4;
        RBus_UInt32  st_gpio_10_sr:1;
        RBus_UInt32  st_gpio_10_ds:1;
        RBus_UInt32  st_gpio_10_pd:1;
        RBus_UInt32  st_gpio_10_pu:1;
        RBus_UInt32  st_gpio_10_ps:4;
        RBus_UInt32  st_gpio_09_sr:1;
        RBus_UInt32  st_gpio_09_ds:1;
        RBus_UInt32  st_gpio_09_pd:1;
        RBus_UInt32  st_gpio_09_pu:1;
        RBus_UInt32  st_gpio_09_ps:4;
        RBus_UInt32  st_gpio_08_sr:1;
        RBus_UInt32  st_gpio_08_ds:1;
        RBus_UInt32  st_gpio_08_pd:1;
        RBus_UInt32  st_gpio_08_pu:1;
        RBus_UInt32  st_gpio_08_ps:4;
    };
}pinmux_st_gpio_st_cfg_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_26_sr:1;
        RBus_UInt32  st_gpio_26_ds:1;
        RBus_UInt32  st_gpio_26_pd:1;
        RBus_UInt32  st_gpio_26_pu:1;
        RBus_UInt32  st_gpio_26_ps:4;
        RBus_UInt32  st_gpio_25_sr:1;
        RBus_UInt32  st_gpio_25_ds:1;
        RBus_UInt32  st_gpio_25_pd:1;
        RBus_UInt32  st_gpio_25_pu:1;
        RBus_UInt32  st_gpio_25_ps:4;
        RBus_UInt32  st_gpio_24_sr:1;
        RBus_UInt32  st_gpio_24_ds:1;
        RBus_UInt32  st_gpio_24_pd:1;
        RBus_UInt32  st_gpio_24_pu:1;
        RBus_UInt32  st_gpio_24_ps:4;
        RBus_UInt32  st_gpio_23_sr:1;
        RBus_UInt32  st_gpio_23_ds:1;
        RBus_UInt32  st_gpio_23_pd:1;
        RBus_UInt32  st_gpio_23_pu:1;
        RBus_UInt32  st_gpio_23_ps:4;
    };
}pinmux_st_gpio_st_cfg_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_30_sr:1;
        RBus_UInt32  st_gpio_30_ds:1;
        RBus_UInt32  st_gpio_30_pd:1;
        RBus_UInt32  st_gpio_30_pu:1;
        RBus_UInt32  st_gpio_30_ps:4;
        RBus_UInt32  st_gpio_29_sr:1;
        RBus_UInt32  st_gpio_29_ds:1;
        RBus_UInt32  st_gpio_29_pd:1;
        RBus_UInt32  st_gpio_29_pu:1;
        RBus_UInt32  st_gpio_29_ps:4;
        RBus_UInt32  st_gpio_28_sr:1;
        RBus_UInt32  st_gpio_28_ds:1;
        RBus_UInt32  st_gpio_28_pd:1;
        RBus_UInt32  st_gpio_28_pu:1;
        RBus_UInt32  st_gpio_28_ps:4;
        RBus_UInt32  st_gpio_27_sr:1;
        RBus_UInt32  st_gpio_27_ds:1;
        RBus_UInt32  st_gpio_27_pd:1;
        RBus_UInt32  st_gpio_27_pu:1;
        RBus_UInt32  st_gpio_27_ps:4;
    };
}pinmux_st_gpio_st_cfg_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_34_sr:1;
        RBus_UInt32  st_gpio_34_ds:1;
        RBus_UInt32  st_gpio_34_pd:1;
        RBus_UInt32  st_gpio_34_pu:1;
        RBus_UInt32  st_gpio_34_ps:4;
        RBus_UInt32  st_gpio_33_sr:1;
        RBus_UInt32  st_gpio_33_ds:1;
        RBus_UInt32  st_gpio_33_pd:1;
        RBus_UInt32  st_gpio_33_pu:1;
        RBus_UInt32  st_gpio_33_ps:4;
        RBus_UInt32  st_gpio_32_sr:1;
        RBus_UInt32  st_gpio_32_ds:1;
        RBus_UInt32  st_gpio_32_pd:1;
        RBus_UInt32  st_gpio_32_pu:1;
        RBus_UInt32  st_gpio_32_ps:4;
        RBus_UInt32  st_gpio_31_sr:1;
        RBus_UInt32  st_gpio_31_ds:1;
        RBus_UInt32  st_gpio_31_pd:1;
        RBus_UInt32  st_gpio_31_pu:1;
        RBus_UInt32  st_gpio_31_ps:4;
    };
}pinmux_st_gpio_st_cfg_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_38_sr:1;
        RBus_UInt32  st_gpio_38_ds:1;
        RBus_UInt32  st_gpio_38_pd:1;
        RBus_UInt32  st_gpio_38_pu:1;
        RBus_UInt32  st_gpio_38_ps:4;
        RBus_UInt32  st_gpio_37_sr:1;
        RBus_UInt32  st_gpio_37_ds:1;
        RBus_UInt32  st_gpio_37_pd:1;
        RBus_UInt32  st_gpio_37_pu:1;
        RBus_UInt32  st_gpio_37_ps:4;
        RBus_UInt32  st_gpio_36_sr:1;
        RBus_UInt32  st_gpio_36_ds:1;
        RBus_UInt32  st_gpio_36_pd:1;
        RBus_UInt32  st_gpio_36_pu:1;
        RBus_UInt32  st_gpio_36_ps:4;
        RBus_UInt32  st_gpio_35_sr:1;
        RBus_UInt32  st_gpio_35_ds:1;
        RBus_UInt32  st_gpio_35_pd:1;
        RBus_UInt32  st_gpio_35_pu:1;
        RBus_UInt32  st_gpio_35_ps:4;
    };
}pinmux_st_gpio_st_cfg_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_42_sr:1;
        RBus_UInt32  st_gpio_42_ds:1;
        RBus_UInt32  st_gpio_42_pd:1;
        RBus_UInt32  st_gpio_42_pu:1;
        RBus_UInt32  st_gpio_42_ps:4;
        RBus_UInt32  st_gpio_41_sr:1;
        RBus_UInt32  st_gpio_41_ds:1;
        RBus_UInt32  st_gpio_41_pd:1;
        RBus_UInt32  st_gpio_41_pu:1;
        RBus_UInt32  st_gpio_41_ps:4;
        RBus_UInt32  st_gpio_40_sr:1;
        RBus_UInt32  st_gpio_40_ds:1;
        RBus_UInt32  st_gpio_40_pd:1;
        RBus_UInt32  st_gpio_40_pu:1;
        RBus_UInt32  st_gpio_40_ps:4;
        RBus_UInt32  st_gpio_39_sr:1;
        RBus_UInt32  st_gpio_39_ds:1;
        RBus_UInt32  st_gpio_39_pd:1;
        RBus_UInt32  st_gpio_39_pu:1;
        RBus_UInt32  st_gpio_39_ps:4;
    };
}pinmux_st_gpio_st_cfg_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_46_sr:1;
        RBus_UInt32  st_gpio_46_ds:1;
        RBus_UInt32  st_gpio_46_pd:1;
        RBus_UInt32  st_gpio_46_pu:1;
        RBus_UInt32  st_gpio_46_ps:4;
        RBus_UInt32  st_gpio_45_sr:1;
        RBus_UInt32  st_gpio_45_ds:1;
        RBus_UInt32  st_gpio_45_pd:1;
        RBus_UInt32  st_gpio_45_pu:1;
        RBus_UInt32  st_gpio_45_ps:4;
        RBus_UInt32  st_gpio_44_sr:1;
        RBus_UInt32  st_gpio_44_ds:1;
        RBus_UInt32  st_gpio_44_pd:1;
        RBus_UInt32  st_gpio_44_pu:1;
        RBus_UInt32  st_gpio_44_ps:4;
        RBus_UInt32  st_gpio_43_sr:1;
        RBus_UInt32  st_gpio_43_ds:1;
        RBus_UInt32  st_gpio_43_pd:1;
        RBus_UInt32  st_gpio_43_pu:1;
        RBus_UInt32  st_gpio_43_ps:4;
    };
}pinmux_st_gpio_st_cfg_8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_50_sr:1;
        RBus_UInt32  st_gpio_50_ds:1;
        RBus_UInt32  st_gpio_50_pd:1;
        RBus_UInt32  st_gpio_50_pu:1;
        RBus_UInt32  st_gpio_50_ps:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  st_gpio_49_ds:1;
        RBus_UInt32  st_gpio_49_pd:1;
        RBus_UInt32  st_gpio_49_pu:1;
        RBus_UInt32  st_gpio_49_ps:4;
        RBus_UInt32  st_gpio_48_sr:1;
        RBus_UInt32  st_gpio_48_ds:1;
        RBus_UInt32  st_gpio_48_pd:1;
        RBus_UInt32  st_gpio_48_pu:1;
        RBus_UInt32  st_gpio_48_ps:4;
        RBus_UInt32  st_gpio_47_sr:1;
        RBus_UInt32  st_gpio_47_ds:1;
        RBus_UInt32  st_gpio_47_pd:1;
        RBus_UInt32  st_gpio_47_pu:1;
        RBus_UInt32  st_gpio_47_ps:4;
    };
}pinmux_st_gpio_st_cfg_9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_54_sr:1;
        RBus_UInt32  st_gpio_54_ds:1;
        RBus_UInt32  st_gpio_54_pd:1;
        RBus_UInt32  st_gpio_54_pu:1;
        RBus_UInt32  st_gpio_54_ps:4;
        RBus_UInt32  st_gpio_53_sr:1;
        RBus_UInt32  st_gpio_53_ds:1;
        RBus_UInt32  st_gpio_53_pd:1;
        RBus_UInt32  st_gpio_53_pu:1;
        RBus_UInt32  st_gpio_53_ps:4;
        RBus_UInt32  st_gpio_52_sr:1;
        RBus_UInt32  st_gpio_52_ds:1;
        RBus_UInt32  st_gpio_52_pd:1;
        RBus_UInt32  st_gpio_52_pu:1;
        RBus_UInt32  st_gpio_52_ps:4;
        RBus_UInt32  st_gpio_51_sr:1;
        RBus_UInt32  st_gpio_51_ds:1;
        RBus_UInt32  st_gpio_51_pd:1;
        RBus_UInt32  st_gpio_51_pu:1;
        RBus_UInt32  st_gpio_51_ps:4;
    };
}pinmux_st_gpio_st_cfg_10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_58_sr:1;
        RBus_UInt32  st_gpio_58_ds:1;
        RBus_UInt32  st_gpio_58_pd:1;
        RBus_UInt32  st_gpio_58_pu:1;
        RBus_UInt32  st_gpio_58_ps:4;
        RBus_UInt32  st_gpio_57_sr:1;
        RBus_UInt32  st_gpio_57_ds:1;
        RBus_UInt32  st_gpio_57_pd:1;
        RBus_UInt32  st_gpio_57_pu:1;
        RBus_UInt32  st_gpio_57_ps:4;
        RBus_UInt32  st_gpio_56_sr:1;
        RBus_UInt32  st_gpio_56_ds:1;
        RBus_UInt32  st_gpio_56_pd:1;
        RBus_UInt32  st_gpio_56_pu:1;
        RBus_UInt32  st_gpio_56_ps:4;
        RBus_UInt32  st_gpio_55_sr:1;
        RBus_UInt32  st_gpio_55_ds:1;
        RBus_UInt32  st_gpio_55_pd:1;
        RBus_UInt32  st_gpio_55_pu:1;
        RBus_UInt32  st_gpio_55_ps:4;
    };
}pinmux_st_gpio_st_cfg_11_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  st_gpio_60_sr:1;
        RBus_UInt32  st_gpio_60_ds:1;
        RBus_UInt32  st_gpio_60_pd:1;
        RBus_UInt32  st_gpio_60_pu:1;
        RBus_UInt32  st_gpio_60_ps:4;
        RBus_UInt32  st_gpio_59_sr:1;
        RBus_UInt32  st_gpio_59_ds:1;
        RBus_UInt32  st_gpio_59_pd:1;
        RBus_UInt32  st_gpio_59_pu:1;
        RBus_UInt32  st_gpio_59_ps:4;
    };
}pinmux_st_gpio_st_cfg_12_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_gpio_42_smt:1;
        RBus_UInt32  st_gpio_41_smt:1;
        RBus_UInt32  st_gpio_40_smt:1;
        RBus_UInt32  st_gpio_39_smt:1;
        RBus_UInt32  st_gpio_38_smt:1;
        RBus_UInt32  st_gpio_37_smt:1;
        RBus_UInt32  st_gpio_36_smt:1;
        RBus_UInt32  st_gpio_35_smt:1;
        RBus_UInt32  st_gpio_34_smt:1;
        RBus_UInt32  st_gpio_33_smt:1;
        RBus_UInt32  st_gpio_32_smt:1;
        RBus_UInt32  st_gpio_31_smt:1;
        RBus_UInt32  st_gpio_30_smt:1;
        RBus_UInt32  st_gpio_29_smt:1;
        RBus_UInt32  st_gpio_28_smt:1;
        RBus_UInt32  st_gpio_27_smt:1;
        RBus_UInt32  st_gpio_26_smt:1;
        RBus_UInt32  st_gpio_25_smt:1;
        RBus_UInt32  st_gpio_24_smt:1;
        RBus_UInt32  st_gpio_23_smt:1;
        RBus_UInt32  st_gpio_11_smt:1;
        RBus_UInt32  st_gpio_10_smt:1;
        RBus_UInt32  st_gpio_09_smt:1;
        RBus_UInt32  st_gpio_08_smt:1;
        RBus_UInt32  st_gpio_07_smt:1;
        RBus_UInt32  st_gpio_06_smt:1;
        RBus_UInt32  st_gpio_05_smt:1;
        RBus_UInt32  st_gpio_04_smt:1;
        RBus_UInt32  st_gpio_03_smt:1;
        RBus_UInt32  st_gpio_02_smt:1;
        RBus_UInt32  st_gpio_01_smt:1;
        RBus_UInt32  st_gpio_00_smt:1;
    };
}pinmux_st_st_smt_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  st_gpio_49_ten:1;
        RBus_UInt32  st_gpio_60_smt:1;
        RBus_UInt32  st_gpio_59_smt:1;
        RBus_UInt32  st_gpio_58_smt:1;
        RBus_UInt32  st_gpio_57_smt:1;
        RBus_UInt32  st_gpio_56_smt:1;
        RBus_UInt32  st_gpio_55_smt:1;
        RBus_UInt32  st_gpio_54_smt:1;
        RBus_UInt32  st_gpio_53_smt:1;
        RBus_UInt32  st_gpio_52_smt:1;
        RBus_UInt32  st_gpio_51_smt:1;
        RBus_UInt32  st_gpio_50_smt:1;
        RBus_UInt32  st_gpio_49_smt:1;
        RBus_UInt32  st_gpio_48_smt:1;
        RBus_UInt32  st_gpio_47_smt:1;
        RBus_UInt32  st_gpio_46_smt:1;
        RBus_UInt32  st_gpio_45_smt:1;
        RBus_UInt32  st_gpio_44_smt:1;
        RBus_UInt32  st_gpio_43_smt:1;
    };
}pinmux_st_st_smt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  emcu_ejtag_tdi_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  emcu_ejtag_tclk_clk_sel:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  ejtag_trst_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  ejtag_tms_in_sel:3;
        RBus_UInt32  res4:1;
        RBus_UInt32  ejtag_tdi_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  ejtag_tclk_clk_sel:3;
        RBus_UInt32  res6:1;
        RBus_UInt32  dmic_clk_data_1_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  dmic_clk_data_0_sel:2;
        RBus_UInt32  res8:2;
    };
}pinmux_st_pin_mux_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  uart0_rxdi_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  i2c_ctrl_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  i2c5_sda_in_sel:2;
        RBus_UInt32  res3:2;
        RBus_UInt32  i2c5_scl_in_sel:2;
        RBus_UInt32  res4:2;
        RBus_UInt32  i2c0_sda_in_sel:2;
        RBus_UInt32  res5:2;
        RBus_UInt32  i2c0_scl_in_sel:2;
        RBus_UInt32  res6:2;
        RBus_UInt32  emcu_ejtag_trst_sel:2;
        RBus_UInt32  res7:2;
        RBus_UInt32  emcu_ejtag_tms_sel:2;
        RBus_UInt32  res8:2;
    };
}pinmux_st_pin_mux_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  st_testpin_mux:8;
        RBus_UInt32  res1:16;
        RBus_UInt32  uartrbus_rx_sel:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  uart1_rxdi_sel:3;
        RBus_UInt32  res3:1;
    };
}pinmux_st_pin_mux_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmirx_p0_reg_sel:3;
        RBus_UInt32  hdmirx_p0_r1k_en:1;
        RBus_UInt32  hdmirx_p0_pd:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  hdmirx_p0_h5vdet:1;
    };
}pinmux_st_hpd_r1k_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmirx_p1_reg_sel:3;
        RBus_UInt32  hdmirx_p1_r1k_en:1;
        RBus_UInt32  hdmirx_p1_pd:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  hdmirx_p1_h5vdet:1;
    };
}pinmux_st_hpd_r1k_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdmirx_p2_reg_sel:3;
        RBus_UInt32  hdmirx_p2_r1k_en:1;
        RBus_UInt32  hdmirx_p2_pd:1;
        RBus_UInt32  res1:26;
        RBus_UInt32  hdmirx_p2_h5vdet:1;
    };
}pinmux_st_hpd_r1k_ctrl2_RBUS;




#endif 


#endif 
