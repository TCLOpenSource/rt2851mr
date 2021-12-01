/**
* @file Merlin5_VE_LR_Spec
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LR_REG_H_
#define _RBUS_LR_REG_H_

#include "rbus_types.h"



//  LR Register Address
#define  LR_LR_CTRL                                                             0x1800F680
#define  LR_LR_CTRL_reg_addr                                                     "0xB800F680"
#define  LR_LR_CTRL_reg                                                          0xB800F680
#define  LR_LR_CTRL_inst_addr                                                    "0x0000"
#define  set_LR_LR_CTRL_reg(data)                                                (*((volatile unsigned int*)LR_LR_CTRL_reg)=data)
#define  get_LR_LR_CTRL_reg                                                      (*((volatile unsigned int*)LR_LR_CTRL_reg))
#define  LR_LR_CTRL_lr_wdone_1t_after_wlast_shift                                (3)
#define  LR_LR_CTRL_lr_reset_shift                                               (2)
#define  LR_LR_CTRL_lr_done_shift                                                (1)
#define  LR_LR_CTRL_lr_busy_shift                                                (0)
#define  LR_LR_CTRL_lr_wdone_1t_after_wlast_mask                                 (0x00000008)
#define  LR_LR_CTRL_lr_reset_mask                                                (0x00000004)
#define  LR_LR_CTRL_lr_done_mask                                                 (0x00000002)
#define  LR_LR_CTRL_lr_busy_mask                                                 (0x00000001)
#define  LR_LR_CTRL_lr_wdone_1t_after_wlast(data)                                (0x00000008&((data)<<3))
#define  LR_LR_CTRL_lr_reset(data)                                               (0x00000004&((data)<<2))
#define  LR_LR_CTRL_lr_done(data)                                                (0x00000002&((data)<<1))
#define  LR_LR_CTRL_lr_busy(data)                                                (0x00000001&(data))
#define  LR_LR_CTRL_get_lr_wdone_1t_after_wlast(data)                            ((0x00000008&(data))>>3)
#define  LR_LR_CTRL_get_lr_reset(data)                                           ((0x00000004&(data))>>2)
#define  LR_LR_CTRL_get_lr_done(data)                                            ((0x00000002&(data))>>1)
#define  LR_LR_CTRL_get_lr_busy(data)                                            (0x00000001&(data))

#define  LR_LR_VM0                                                              0x1800F684
#define  LR_LR_VM0_reg_addr                                                      "0xB800F684"
#define  LR_LR_VM0_reg                                                           0xB800F684
#define  LR_LR_VM0_inst_addr                                                     "0x0001"
#define  set_LR_LR_VM0_reg(data)                                                 (*((volatile unsigned int*)LR_LR_VM0_reg)=data)
#define  get_LR_LR_VM0_reg                                                       (*((volatile unsigned int*)LR_LR_VM0_reg))
#define  LR_LR_VM0_vm_basea0_shift                                               (21)
#define  LR_LR_VM0_vm_basea1_shift                                               (14)
#define  LR_LR_VM0_vm_sb_adr_shift                                               (0)
#define  LR_LR_VM0_vm_basea0_mask                                                (0x0FE00000)
#define  LR_LR_VM0_vm_basea1_mask                                                (0x001FC000)
#define  LR_LR_VM0_vm_sb_adr_mask                                                (0x0000003F)
#define  LR_LR_VM0_vm_basea0(data)                                               (0x0FE00000&((data)<<21))
#define  LR_LR_VM0_vm_basea1(data)                                               (0x001FC000&((data)<<14))
#define  LR_LR_VM0_vm_sb_adr(data)                                               (0x0000003F&(data))
#define  LR_LR_VM0_get_vm_basea0(data)                                           ((0x0FE00000&(data))>>21)
#define  LR_LR_VM0_get_vm_basea1(data)                                           ((0x001FC000&(data))>>14)
#define  LR_LR_VM0_get_vm_sb_adr(data)                                           (0x0000003F&(data))

#define  LR_LR_VM1                                                              0x1800F688
#define  LR_LR_VM1_reg_addr                                                      "0xB800F688"
#define  LR_LR_VM1_reg                                                           0xB800F688
#define  LR_LR_VM1_inst_addr                                                     "0x0002"
#define  set_LR_LR_VM1_reg(data)                                                 (*((volatile unsigned int*)LR_LR_VM1_reg)=data)
#define  get_LR_LR_VM1_reg                                                       (*((volatile unsigned int*)LR_LR_VM1_reg))
#define  LR_LR_VM1_vm_offseta0_shift                                             (16)
#define  LR_LR_VM1_vm_offseta1_shift                                             (0)
#define  LR_LR_VM1_vm_offseta0_mask                                              (0x003F0000)
#define  LR_LR_VM1_vm_offseta1_mask                                              (0x0000003F)
#define  LR_LR_VM1_vm_offseta0(data)                                             (0x003F0000&((data)<<16))
#define  LR_LR_VM1_vm_offseta1(data)                                             (0x0000003F&(data))
#define  LR_LR_VM1_get_vm_offseta0(data)                                         ((0x003F0000&(data))>>16)
#define  LR_LR_VM1_get_vm_offseta1(data)                                         (0x0000003F&(data))

#define  LR_LU_LR_PARM_DMA                                                      0x1800F68C
#define  LR_LU_LR_PARM_DMA_reg_addr                                              "0xB800F68C"
#define  LR_LU_LR_PARM_DMA_reg                                                   0xB800F68C
#define  LR_LU_LR_PARM_DMA_inst_addr                                             "0x0003"
#define  set_LR_LU_LR_PARM_DMA_reg(data)                                         (*((volatile unsigned int*)LR_LU_LR_PARM_DMA_reg)=data)
#define  get_LR_LU_LR_PARM_DMA_reg                                               (*((volatile unsigned int*)LR_LU_LR_PARM_DMA_reg))
#define  LR_LU_LR_PARM_DMA_lu_parm_dma_busy_shift                                (31)
#define  LR_LU_LR_PARM_DMA_lu_parm_dma_adr_shift                                 (0)
#define  LR_LU_LR_PARM_DMA_lu_parm_dma_busy_mask                                 (0x80000000)
#define  LR_LU_LR_PARM_DMA_lu_parm_dma_adr_mask                                  (0x7FFFFFFF)
#define  LR_LU_LR_PARM_DMA_lu_parm_dma_busy(data)                                (0x80000000&((data)<<31))
#define  LR_LU_LR_PARM_DMA_lu_parm_dma_adr(data)                                 (0x7FFFFFFF&(data))
#define  LR_LU_LR_PARM_DMA_get_lu_parm_dma_busy(data)                            ((0x80000000&(data))>>31)
#define  LR_LU_LR_PARM_DMA_get_lu_parm_dma_adr(data)                             (0x7FFFFFFF&(data))

#define  LR_CB_LR_PARM_DMA                                                      0x1800F690
#define  LR_CB_LR_PARM_DMA_reg_addr                                              "0xB800F690"
#define  LR_CB_LR_PARM_DMA_reg                                                   0xB800F690
#define  LR_CB_LR_PARM_DMA_inst_addr                                             "0x0004"
#define  set_LR_CB_LR_PARM_DMA_reg(data)                                         (*((volatile unsigned int*)LR_CB_LR_PARM_DMA_reg)=data)
#define  get_LR_CB_LR_PARM_DMA_reg                                               (*((volatile unsigned int*)LR_CB_LR_PARM_DMA_reg))
#define  LR_CB_LR_PARM_DMA_cb_parm_dma_busy_shift                                (31)
#define  LR_CB_LR_PARM_DMA_cb_parm_dma_adr_shift                                 (0)
#define  LR_CB_LR_PARM_DMA_cb_parm_dma_busy_mask                                 (0x80000000)
#define  LR_CB_LR_PARM_DMA_cb_parm_dma_adr_mask                                  (0x7FFFFFFF)
#define  LR_CB_LR_PARM_DMA_cb_parm_dma_busy(data)                                (0x80000000&((data)<<31))
#define  LR_CB_LR_PARM_DMA_cb_parm_dma_adr(data)                                 (0x7FFFFFFF&(data))
#define  LR_CB_LR_PARM_DMA_get_cb_parm_dma_busy(data)                            ((0x80000000&(data))>>31)
#define  LR_CB_LR_PARM_DMA_get_cb_parm_dma_adr(data)                             (0x7FFFFFFF&(data))

#define  LR_CR_LR_PARM_DMA                                                      0x1800F694
#define  LR_CR_LR_PARM_DMA_reg_addr                                              "0xB800F694"
#define  LR_CR_LR_PARM_DMA_reg                                                   0xB800F694
#define  LR_CR_LR_PARM_DMA_inst_addr                                             "0x0005"
#define  set_LR_CR_LR_PARM_DMA_reg(data)                                         (*((volatile unsigned int*)LR_CR_LR_PARM_DMA_reg)=data)
#define  get_LR_CR_LR_PARM_DMA_reg                                               (*((volatile unsigned int*)LR_CR_LR_PARM_DMA_reg))
#define  LR_CR_LR_PARM_DMA_cr_parm_dma_busy_shift                                (31)
#define  LR_CR_LR_PARM_DMA_cr_parm_dma_adr_shift                                 (0)
#define  LR_CR_LR_PARM_DMA_cr_parm_dma_busy_mask                                 (0x80000000)
#define  LR_CR_LR_PARM_DMA_cr_parm_dma_adr_mask                                  (0x7FFFFFFF)
#define  LR_CR_LR_PARM_DMA_cr_parm_dma_busy(data)                                (0x80000000&((data)<<31))
#define  LR_CR_LR_PARM_DMA_cr_parm_dma_adr(data)                                 (0x7FFFFFFF&(data))
#define  LR_CR_LR_PARM_DMA_get_cr_parm_dma_busy(data)                            ((0x80000000&(data))>>31)
#define  LR_CR_LR_PARM_DMA_get_cr_parm_dma_adr(data)                             (0x7FFFFFFF&(data))

#define  LR_LR_DMA                                                              0x1800F698
#define  LR_LR_DMA_reg_addr                                                      "0xB800F698"
#define  LR_LR_DMA_reg                                                           0xB800F698
#define  LR_LR_DMA_inst_addr                                                     "0x0006"
#define  set_LR_LR_DMA_reg(data)                                                 (*((volatile unsigned int*)LR_LR_DMA_reg)=data)
#define  get_LR_LR_DMA_reg                                                       (*((volatile unsigned int*)LR_LR_DMA_reg))
#define  LR_LR_DMA_dma_busy_shift                                                (31)
#define  LR_LR_DMA_dma_adr_shift                                                 (0)
#define  LR_LR_DMA_dma_busy_mask                                                 (0x80000000)
#define  LR_LR_DMA_dma_adr_mask                                                  (0x7FFFFFFF)
#define  LR_LR_DMA_dma_busy(data)                                                (0x80000000&((data)<<31))
#define  LR_LR_DMA_dma_adr(data)                                                 (0x7FFFFFFF&(data))
#define  LR_LR_DMA_get_dma_busy(data)                                            ((0x80000000&(data))>>31)
#define  LR_LR_DMA_get_dma_adr(data)                                             (0x7FFFFFFF&(data))

#define  LR_LR_PIC_INFO                                                         0x1800F69C
#define  LR_LR_PIC_INFO_reg_addr                                                 "0xB800F69C"
#define  LR_LR_PIC_INFO_reg                                                      0xB800F69C
#define  LR_LR_PIC_INFO_inst_addr                                                "0x0007"
#define  set_LR_LR_PIC_INFO_reg(data)                                            (*((volatile unsigned int*)LR_LR_PIC_INFO_reg)=data)
#define  get_LR_LR_PIC_INFO_reg                                                  (*((volatile unsigned int*)LR_LR_PIC_INFO_reg))
#define  LR_LR_PIC_INFO_luma_res_type_shift                                      (8)
#define  LR_LR_PIC_INFO_cb_res_type_shift                                        (6)
#define  LR_LR_PIC_INFO_cr_res_type_shift                                        (4)
#define  LR_LR_PIC_INFO_lu_res_unit_size_shift                                   (2)
#define  LR_LR_PIC_INFO_ch_res_unit_size_shift                                   (0)
#define  LR_LR_PIC_INFO_luma_res_type_mask                                       (0x00000300)
#define  LR_LR_PIC_INFO_cb_res_type_mask                                         (0x000000C0)
#define  LR_LR_PIC_INFO_cr_res_type_mask                                         (0x00000030)
#define  LR_LR_PIC_INFO_lu_res_unit_size_mask                                    (0x0000000C)
#define  LR_LR_PIC_INFO_ch_res_unit_size_mask                                    (0x00000003)
#define  LR_LR_PIC_INFO_luma_res_type(data)                                      (0x00000300&((data)<<8))
#define  LR_LR_PIC_INFO_cb_res_type(data)                                        (0x000000C0&((data)<<6))
#define  LR_LR_PIC_INFO_cr_res_type(data)                                        (0x00000030&((data)<<4))
#define  LR_LR_PIC_INFO_lu_res_unit_size(data)                                   (0x0000000C&((data)<<2))
#define  LR_LR_PIC_INFO_ch_res_unit_size(data)                                   (0x00000003&(data))
#define  LR_LR_PIC_INFO_get_luma_res_type(data)                                  ((0x00000300&(data))>>8)
#define  LR_LR_PIC_INFO_get_cb_res_type(data)                                    ((0x000000C0&(data))>>6)
#define  LR_LR_PIC_INFO_get_cr_res_type(data)                                    ((0x00000030&(data))>>4)
#define  LR_LR_PIC_INFO_get_lu_res_unit_size(data)                               ((0x0000000C&(data))>>2)
#define  LR_LR_PIC_INFO_get_ch_res_unit_size(data)                               (0x00000003&(data))

#define  LR_LR_HOR_UPSACLE                                                      0x1800F6A0
#define  LR_LR_HOR_UPSACLE_reg_addr                                              "0xB800F6A0"
#define  LR_LR_HOR_UPSACLE_reg                                                   0xB800F6A0
#define  LR_LR_HOR_UPSACLE_inst_addr                                             "0x0008"
#define  set_LR_LR_HOR_UPSACLE_reg(data)                                         (*((volatile unsigned int*)LR_LR_HOR_UPSACLE_reg)=data)
#define  get_LR_LR_HOR_UPSACLE_reg                                               (*((volatile unsigned int*)LR_LR_HOR_UPSACLE_reg))
#define  LR_LR_HOR_UPSACLE_use_superres_shift                                    (3)
#define  LR_LR_HOR_UPSACLE_superres_denom_shift                                  (0)
#define  LR_LR_HOR_UPSACLE_use_superres_mask                                     (0x00000008)
#define  LR_LR_HOR_UPSACLE_superres_denom_mask                                   (0x00000007)
#define  LR_LR_HOR_UPSACLE_use_superres(data)                                    (0x00000008&((data)<<3))
#define  LR_LR_HOR_UPSACLE_superres_denom(data)                                  (0x00000007&(data))
#define  LR_LR_HOR_UPSACLE_get_use_superres(data)                                ((0x00000008&(data))>>3)
#define  LR_LR_HOR_UPSACLE_get_superres_denom(data)                              (0x00000007&(data))

#define  LR_SR_LU_PARM                                                          0x1800F6A4
#define  LR_SR_LU_PARM_reg_addr                                                  "0xB800F6A4"
#define  LR_SR_LU_PARM_reg                                                       0xB800F6A4
#define  LR_SR_LU_PARM_inst_addr                                                 "0x0009"
#define  set_LR_SR_LU_PARM_reg(data)                                             (*((volatile unsigned int*)LR_SR_LU_PARM_reg)=data)
#define  get_LR_SR_LU_PARM_reg                                                   (*((volatile unsigned int*)LR_SR_LU_PARM_reg))
#define  LR_SR_LU_PARM_lu_step_x_shift                                           (14)
#define  LR_SR_LU_PARM_lu_init_x_shift                                           (0)
#define  LR_SR_LU_PARM_lu_step_x_mask                                            (0x1FFFC000)
#define  LR_SR_LU_PARM_lu_init_x_mask                                            (0x00003FFF)
#define  LR_SR_LU_PARM_lu_step_x(data)                                           (0x1FFFC000&((data)<<14))
#define  LR_SR_LU_PARM_lu_init_x(data)                                           (0x00003FFF&(data))
#define  LR_SR_LU_PARM_get_lu_step_x(data)                                       ((0x1FFFC000&(data))>>14)
#define  LR_SR_LU_PARM_get_lu_init_x(data)                                       (0x00003FFF&(data))

#define  LR_SR_CH_PARM                                                          0x1800F6A8
#define  LR_SR_CH_PARM_reg_addr                                                  "0xB800F6A8"
#define  LR_SR_CH_PARM_reg                                                       0xB800F6A8
#define  LR_SR_CH_PARM_inst_addr                                                 "0x000A"
#define  set_LR_SR_CH_PARM_reg(data)                                             (*((volatile unsigned int*)LR_SR_CH_PARM_reg)=data)
#define  get_LR_SR_CH_PARM_reg                                                   (*((volatile unsigned int*)LR_SR_CH_PARM_reg))
#define  LR_SR_CH_PARM_ch_step_x_shift                                           (14)
#define  LR_SR_CH_PARM_ch_init_x_shift                                           (0)
#define  LR_SR_CH_PARM_ch_step_x_mask                                            (0x1FFFC000)
#define  LR_SR_CH_PARM_ch_init_x_mask                                            (0x00003FFF)
#define  LR_SR_CH_PARM_ch_step_x(data)                                           (0x1FFFC000&((data)<<14))
#define  LR_SR_CH_PARM_ch_init_x(data)                                           (0x00003FFF&(data))
#define  LR_SR_CH_PARM_get_ch_step_x(data)                                       ((0x1FFFC000&(data))>>14)
#define  LR_SR_CH_PARM_get_ch_init_x(data)                                       (0x00003FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  lr_wdone_1t_after_wlast:1;
        RBus_UInt32  lr_reset:1;
        RBus_UInt32  lr_done:1;
        RBus_UInt32  lr_busy:1;
    };
}lr_lr_ctrl_RBUS;

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
}lr_lr_vm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_offseta0:6;
        RBus_UInt32  res2:10;
        RBus_UInt32  vm_offseta1:6;
    };
}lr_lr_vm1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lu_parm_dma_busy:1;
        RBus_UInt32  lu_parm_dma_adr:31;
    };
}lr_lu_lr_parm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_parm_dma_busy:1;
        RBus_UInt32  cb_parm_dma_adr:31;
    };
}lr_cb_lr_parm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_parm_dma_busy:1;
        RBus_UInt32  cr_parm_dma_adr:31;
    };
}lr_cr_lr_parm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_busy:1;
        RBus_UInt32  dma_adr:31;
    };
}lr_lr_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  luma_res_type:2;
        RBus_UInt32  cb_res_type:2;
        RBus_UInt32  cr_res_type:2;
        RBus_UInt32  lu_res_unit_size:2;
        RBus_UInt32  ch_res_unit_size:2;
    };
}lr_lr_pic_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  use_superres:1;
        RBus_UInt32  superres_denom:3;
    };
}lr_lr_hor_upsacle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  lu_step_x:15;
        RBus_UInt32  lu_init_x:14;
    };
}lr_sr_lu_parm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  ch_step_x:15;
        RBus_UInt32  ch_init_x:14;
    };
}lr_sr_ch_parm_RBUS;

#else //apply LITTLE_ENDIAN

//======LR register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lr_busy:1;
        RBus_UInt32  lr_done:1;
        RBus_UInt32  lr_reset:1;
        RBus_UInt32  lr_wdone_1t_after_wlast:1;
        RBus_UInt32  res1:28;
    };
}lr_lr_ctrl_RBUS;

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
}lr_lr_vm0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vm_offseta1:6;
        RBus_UInt32  res1:10;
        RBus_UInt32  vm_offseta0:6;
        RBus_UInt32  res2:10;
    };
}lr_lr_vm1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lu_parm_dma_adr:31;
        RBus_UInt32  lu_parm_dma_busy:1;
    };
}lr_lu_lr_parm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cb_parm_dma_adr:31;
        RBus_UInt32  cb_parm_dma_busy:1;
    };
}lr_cb_lr_parm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cr_parm_dma_adr:31;
        RBus_UInt32  cr_parm_dma_busy:1;
    };
}lr_cr_lr_parm_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_adr:31;
        RBus_UInt32  dma_busy:1;
    };
}lr_lr_dma_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_res_unit_size:2;
        RBus_UInt32  lu_res_unit_size:2;
        RBus_UInt32  cr_res_type:2;
        RBus_UInt32  cb_res_type:2;
        RBus_UInt32  luma_res_type:2;
        RBus_UInt32  res1:22;
    };
}lr_lr_pic_info_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  superres_denom:3;
        RBus_UInt32  use_superres:1;
        RBus_UInt32  res1:28;
    };
}lr_lr_hor_upsacle_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lu_init_x:14;
        RBus_UInt32  lu_step_x:15;
        RBus_UInt32  res1:3;
    };
}lr_sr_lu_parm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch_init_x:14;
        RBus_UInt32  ch_step_x:15;
        RBus_UInt32  res1:3;
    };
}lr_sr_ch_parm_RBUS;




#endif 


#endif 
