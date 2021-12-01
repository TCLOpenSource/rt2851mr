/**
* @file Merlin5_VE_SAO_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SAO_REG_H_
#define _RBUS_SAO_REG_H_

#include "rbus_types.h"



//  SAO Register Address
#define  SAO_SAO_CTRL                                                           0x1800FC00
#define  SAO_SAO_CTRL_reg_addr                                                   "0xB800FC00"
#define  SAO_SAO_CTRL_reg                                                        0xB800FC00
#define  SAO_SAO_CTRL_inst_addr                                                  "0x0000"
#define  SAO_SAO_CTRL_inst_adr                                                   "0x0000"
#define  SAO_SAO_CTRL_inst                                                       0x0000
#define  set_SAO_SAO_CTRL_reg(data)                                              (*((volatile unsigned int*)SAO_SAO_CTRL_reg)=data)
#define  get_SAO_SAO_CTRL_reg                                                    (*((volatile unsigned int*)SAO_SAO_CTRL_reg))
#define  SAO_SAO_CTRL_sao_wdone_1t_after_wlast_shift                             (3)
#define  SAO_SAO_CTRL_sao_reset_shift                                            (2)
#define  SAO_SAO_CTRL_sao_done_shift                                             (1)
#define  SAO_SAO_CTRL_sao_busy_shift                                             (0)
#define  SAO_SAO_CTRL_sao_wdone_1t_after_wlast_mask                              (0x00000008)
#define  SAO_SAO_CTRL_sao_reset_mask                                             (0x00000004)
#define  SAO_SAO_CTRL_sao_done_mask                                              (0x00000002)
#define  SAO_SAO_CTRL_sao_busy_mask                                              (0x00000001)
#define  SAO_SAO_CTRL_sao_wdone_1t_after_wlast(data)                             (0x00000008&((data)<<3))
#define  SAO_SAO_CTRL_sao_reset(data)                                            (0x00000004&((data)<<2))
#define  SAO_SAO_CTRL_sao_done(data)                                             (0x00000002&((data)<<1))
#define  SAO_SAO_CTRL_sao_busy(data)                                             (0x00000001&(data))
#define  SAO_SAO_CTRL_get_sao_wdone_1t_after_wlast(data)                         ((0x00000008&(data))>>3)
#define  SAO_SAO_CTRL_get_sao_reset(data)                                        ((0x00000004&(data))>>2)
#define  SAO_SAO_CTRL_get_sao_done(data)                                         ((0x00000002&(data))>>1)
#define  SAO_SAO_CTRL_get_sao_busy(data)                                         (0x00000001&(data))
#define  SAO_SAO_CTRL_sao_wdone_1t_after_wlast_src(data)                         ((0x00000008&(data))>>3)
#define  SAO_SAO_CTRL_sao_reset_src(data)                                        ((0x00000004&(data))>>2)
#define  SAO_SAO_CTRL_sao_done_src(data)                                         ((0x00000002&(data))>>1)
#define  SAO_SAO_CTRL_sao_busy_src(data)                                         (0x00000001&(data))

#define  SAO_SAO_VM0                                                            0x1800FC04
#define  SAO_SAO_VM0_reg_addr                                                    "0xB800FC04"
#define  SAO_SAO_VM0_reg                                                         0xB800FC04
#define  SAO_SAO_VM0_inst_addr                                                   "0x0001"
#define  SAO_SAO_VM0_inst_adr                                                    "0x0001"
#define  SAO_SAO_VM0_inst                                                        0x0001
#define  set_SAO_SAO_VM0_reg(data)                                               (*((volatile unsigned int*)SAO_SAO_VM0_reg)=data)
#define  get_SAO_SAO_VM0_reg                                                     (*((volatile unsigned int*)SAO_SAO_VM0_reg))
#define  SAO_SAO_VM0_vm_basea0_shift                                             (21)
#define  SAO_SAO_VM0_vm_basea1_shift                                             (14)
#define  SAO_SAO_VM0_vm_sb_adr_shift                                             (0)
#define  SAO_SAO_VM0_vm_basea0_mask                                              (0x0FE00000)
#define  SAO_SAO_VM0_vm_basea1_mask                                              (0x001FC000)
#define  SAO_SAO_VM0_vm_sb_adr_mask                                              (0x0000003F)
#define  SAO_SAO_VM0_vm_basea0(data)                                             (0x0FE00000&((data)<<21))
#define  SAO_SAO_VM0_vm_basea1(data)                                             (0x001FC000&((data)<<14))
#define  SAO_SAO_VM0_vm_sb_adr(data)                                             (0x0000003F&(data))
#define  SAO_SAO_VM0_get_vm_basea0(data)                                         ((0x0FE00000&(data))>>21)
#define  SAO_SAO_VM0_get_vm_basea1(data)                                         ((0x001FC000&(data))>>14)
#define  SAO_SAO_VM0_get_vm_sb_adr(data)                                         (0x0000003F&(data))
#define  SAO_SAO_VM0_vm_basea0_src(data)                                         ((0x0FE00000&(data))>>21)
#define  SAO_SAO_VM0_vm_basea1_src(data)                                         ((0x001FC000&(data))>>14)
#define  SAO_SAO_VM0_vm_sb_adr_src(data)                                         (0x0000003F&(data))

#define  SAO_SAO_VM1                                                            0x1800FC08
#define  SAO_SAO_VM1_reg_addr                                                    "0xB800FC08"
#define  SAO_SAO_VM1_reg                                                         0xB800FC08
#define  SAO_SAO_VM1_inst_addr                                                   "0x0002"
#define  SAO_SAO_VM1_inst_adr                                                    "0x0002"
#define  SAO_SAO_VM1_inst                                                        0x0002
#define  set_SAO_SAO_VM1_reg(data)                                               (*((volatile unsigned int*)SAO_SAO_VM1_reg)=data)
#define  get_SAO_SAO_VM1_reg                                                     (*((volatile unsigned int*)SAO_SAO_VM1_reg))
#define  SAO_SAO_VM1_vm_offseta0_shift                                           (16)
#define  SAO_SAO_VM1_vm_offseta1_shift                                           (0)
#define  SAO_SAO_VM1_vm_offseta0_mask                                            (0x003F0000)
#define  SAO_SAO_VM1_vm_offseta1_mask                                            (0x0000003F)
#define  SAO_SAO_VM1_vm_offseta0(data)                                           (0x003F0000&((data)<<16))
#define  SAO_SAO_VM1_vm_offseta1(data)                                           (0x0000003F&(data))
#define  SAO_SAO_VM1_get_vm_offseta0(data)                                       ((0x003F0000&(data))>>16)
#define  SAO_SAO_VM1_get_vm_offseta1(data)                                       (0x0000003F&(data))
#define  SAO_SAO_VM1_vm_offseta0_src(data)                                       ((0x003F0000&(data))>>16)
#define  SAO_SAO_VM1_vm_offseta1_src(data)                                       (0x0000003F&(data))

#define  SAO_SAO_DMA                                                            0x1800FC0C
#define  SAO_SAO_DMA_reg_addr                                                    "0xB800FC0C"
#define  SAO_SAO_DMA_reg                                                         0xB800FC0C
#define  SAO_SAO_DMA_inst_addr                                                   "0x0003"
#define  SAO_SAO_DMA_inst_adr                                                    "0x0003"
#define  SAO_SAO_DMA_inst                                                        0x0003
#define  set_SAO_SAO_DMA_reg(data)                                               (*((volatile unsigned int*)SAO_SAO_DMA_reg)=data)
#define  get_SAO_SAO_DMA_reg                                                     (*((volatile unsigned int*)SAO_SAO_DMA_reg))
#define  SAO_SAO_DMA_dma_busy_shift                                              (31)
#define  SAO_SAO_DMA_dma_adr_shift                                               (0)
#define  SAO_SAO_DMA_dma_busy_mask                                               (0x80000000)
#define  SAO_SAO_DMA_dma_adr_mask                                                (0x7FFFFFFF)
#define  SAO_SAO_DMA_dma_busy(data)                                              (0x80000000&((data)<<31))
#define  SAO_SAO_DMA_dma_adr(data)                                               (0x7FFFFFFF&(data))
#define  SAO_SAO_DMA_get_dma_busy(data)                                          ((0x80000000&(data))>>31)
#define  SAO_SAO_DMA_get_dma_adr(data)                                           (0x7FFFFFFF&(data))
#define  SAO_SAO_DMA_dma_busy_src(data)                                          ((0x80000000&(data))>>31)
#define  SAO_SAO_DMA_dma_adr_src(data)                                           (0x7FFFFFFF&(data))

#ifdef _SAO_USE_STRUCT
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SAO register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  sao_wdone_1t_after_wlast:1;
        RBus_UInt32  sao_reset:1;
        RBus_UInt32  sao_done:1;
        RBus_UInt32  sao_busy:1;
    };
}SAO_SAO_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vm_basea0:7;
        RBus_UInt32  vm_basea1:7;
        RBus_UInt32  res2:8;
        RBus_UInt32  vm_sb_adr:6;
    };
}SAO_SAO_VM0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_offseta0:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  vm_offseta1:6;
    };
}SAO_SAO_VM1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_busy:1;
        RBus_UInt32  dma_adr:31;
    };
}SAO_SAO_DMA_RBUS;

#else //apply LITTLE_ENDIAN

//======SAO register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sao_busy:1;
        RBus_UInt32  sao_done:1;
        RBus_UInt32  sao_reset:1;
        RBus_UInt32  sao_wdone_1t_after_wlast:1;
        RBus_UInt32  res1:28;
    };
}SAO_SAO_CTRL_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm_sb_adr:6;
        RBus_UInt32  res1:8;
        RBus_UInt32  vm_basea1:7;
        RBus_UInt32  vm_basea0:7;
        RBus_UInt32  res2:4;
    };
}SAO_SAO_VM0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm_offseta1:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_offseta0:6;
        RBus_UInt32  res2:10;
    };
}SAO_SAO_VM1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_adr:31;
        RBus_UInt32  dma_busy:1;
    };
}SAO_SAO_DMA_RBUS;




#endif 


#endif 
#endif 
