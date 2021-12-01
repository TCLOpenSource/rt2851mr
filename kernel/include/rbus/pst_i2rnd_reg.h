/**
* @file Merlin5-DesignSpec-IMD_Pst_and_I2rnd
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PST_I2RND_REG_H_
#define _RBUS_PST_I2RND_REG_H_

#include "rbus_types.h"



//  PST_I2RND Register Address
#define  PST_I2RND_TOP_CTRL                                                     0x180B1000
#define  PST_I2RND_TOP_CTRL_reg_addr                                             "0xB80B1000"
#define  PST_I2RND_TOP_CTRL_reg                                                  0xB80B1000
#define  PST_I2RND_TOP_CTRL_inst_addr                                            "0x0000"
#define  set_PST_I2RND_TOP_CTRL_reg(data)                                        (*((volatile unsigned int*)PST_I2RND_TOP_CTRL_reg)=data)
#define  get_PST_I2RND_TOP_CTRL_reg                                              (*((volatile unsigned int*)PST_I2RND_TOP_CTRL_reg))
#define  PST_I2RND_TOP_CTRL_dispd_sw_load_en_shift                               (29)
#define  PST_I2RND_TOP_CTRL_dispd_dma_load_sw_shift                              (28)
#define  PST_I2RND_TOP_CTRL_i2_sw_load_en_shift                                  (27)
#define  PST_I2RND_TOP_CTRL_i2_dma_load_sw_shift                                 (26)
#define  PST_I2RND_TOP_CTRL_i1_sw_load_en_shift                                  (25)
#define  PST_I2RND_TOP_CTRL_i1_dma_load_sw_shift                                 (24)
#define  PST_I2RND_TOP_CTRL_memc_f_delay_shift                                   (20)
#define  PST_I2RND_TOP_CTRL_dispm_f_delay_shift                                  (16)
#define  PST_I2RND_TOP_CTRL_disps_f_delay_shift                                  (12)
#define  PST_I2RND_TOP_CTRL_d_main_from_vgip_m_shift                             (10)
#define  PST_I2RND_TOP_CTRL_gdma_from_vgip_m_shift                               (9)
#define  PST_I2RND_TOP_CTRL_d_sub_from_vgip_m_shift                              (8)
#define  PST_I2RND_TOP_CTRL_i_main_from_vgip_m_shift                             (7)
#define  PST_I2RND_TOP_CTRL_i_sub_from_vgip_s_shift                              (6)
#define  PST_I2RND_TOP_CTRL_i2rnd_en_shift                                       (5)
#define  PST_I2RND_TOP_CTRL_gdma_pst_en_shift                                    (4)
#define  PST_I2RND_TOP_CTRL_dispm_pst_en_shift                                   (3)
#define  PST_I2RND_TOP_CTRL_disps_pst_en_shift                                   (2)
#define  PST_I2RND_TOP_CTRL_i_main_pst_en_shift                                  (1)
#define  PST_I2RND_TOP_CTRL_i_sub_pst_en_shift                                   (0)
#define  PST_I2RND_TOP_CTRL_dispd_sw_load_en_mask                                (0x20000000)
#define  PST_I2RND_TOP_CTRL_dispd_dma_load_sw_mask                               (0x10000000)
#define  PST_I2RND_TOP_CTRL_i2_sw_load_en_mask                                   (0x08000000)
#define  PST_I2RND_TOP_CTRL_i2_dma_load_sw_mask                                  (0x04000000)
#define  PST_I2RND_TOP_CTRL_i1_sw_load_en_mask                                   (0x02000000)
#define  PST_I2RND_TOP_CTRL_i1_dma_load_sw_mask                                  (0x01000000)
#define  PST_I2RND_TOP_CTRL_memc_f_delay_mask                                    (0x00F00000)
#define  PST_I2RND_TOP_CTRL_dispm_f_delay_mask                                   (0x000F0000)
#define  PST_I2RND_TOP_CTRL_disps_f_delay_mask                                   (0x0000F000)
#define  PST_I2RND_TOP_CTRL_d_main_from_vgip_m_mask                              (0x00000400)
#define  PST_I2RND_TOP_CTRL_gdma_from_vgip_m_mask                                (0x00000200)
#define  PST_I2RND_TOP_CTRL_d_sub_from_vgip_m_mask                               (0x00000100)
#define  PST_I2RND_TOP_CTRL_i_main_from_vgip_m_mask                              (0x00000080)
#define  PST_I2RND_TOP_CTRL_i_sub_from_vgip_s_mask                               (0x00000040)
#define  PST_I2RND_TOP_CTRL_i2rnd_en_mask                                        (0x00000020)
#define  PST_I2RND_TOP_CTRL_gdma_pst_en_mask                                     (0x00000010)
#define  PST_I2RND_TOP_CTRL_dispm_pst_en_mask                                    (0x00000008)
#define  PST_I2RND_TOP_CTRL_disps_pst_en_mask                                    (0x00000004)
#define  PST_I2RND_TOP_CTRL_i_main_pst_en_mask                                   (0x00000002)
#define  PST_I2RND_TOP_CTRL_i_sub_pst_en_mask                                    (0x00000001)
#define  PST_I2RND_TOP_CTRL_dispd_sw_load_en(data)                               (0x20000000&((data)<<29))
#define  PST_I2RND_TOP_CTRL_dispd_dma_load_sw(data)                              (0x10000000&((data)<<28))
#define  PST_I2RND_TOP_CTRL_i2_sw_load_en(data)                                  (0x08000000&((data)<<27))
#define  PST_I2RND_TOP_CTRL_i2_dma_load_sw(data)                                 (0x04000000&((data)<<26))
#define  PST_I2RND_TOP_CTRL_i1_sw_load_en(data)                                  (0x02000000&((data)<<25))
#define  PST_I2RND_TOP_CTRL_i1_dma_load_sw(data)                                 (0x01000000&((data)<<24))
#define  PST_I2RND_TOP_CTRL_memc_f_delay(data)                                   (0x00F00000&((data)<<20))
#define  PST_I2RND_TOP_CTRL_dispm_f_delay(data)                                  (0x000F0000&((data)<<16))
#define  PST_I2RND_TOP_CTRL_disps_f_delay(data)                                  (0x0000F000&((data)<<12))
#define  PST_I2RND_TOP_CTRL_d_main_from_vgip_m(data)                             (0x00000400&((data)<<10))
#define  PST_I2RND_TOP_CTRL_gdma_from_vgip_m(data)                               (0x00000200&((data)<<9))
#define  PST_I2RND_TOP_CTRL_d_sub_from_vgip_m(data)                              (0x00000100&((data)<<8))
#define  PST_I2RND_TOP_CTRL_i_main_from_vgip_m(data)                             (0x00000080&((data)<<7))
#define  PST_I2RND_TOP_CTRL_i_sub_from_vgip_s(data)                              (0x00000040&((data)<<6))
#define  PST_I2RND_TOP_CTRL_i2rnd_en(data)                                       (0x00000020&((data)<<5))
#define  PST_I2RND_TOP_CTRL_gdma_pst_en(data)                                    (0x00000010&((data)<<4))
#define  PST_I2RND_TOP_CTRL_dispm_pst_en(data)                                   (0x00000008&((data)<<3))
#define  PST_I2RND_TOP_CTRL_disps_pst_en(data)                                   (0x00000004&((data)<<2))
#define  PST_I2RND_TOP_CTRL_i_main_pst_en(data)                                  (0x00000002&((data)<<1))
#define  PST_I2RND_TOP_CTRL_i_sub_pst_en(data)                                   (0x00000001&(data))
#define  PST_I2RND_TOP_CTRL_get_dispd_sw_load_en(data)                           ((0x20000000&(data))>>29)
#define  PST_I2RND_TOP_CTRL_get_dispd_dma_load_sw(data)                          ((0x10000000&(data))>>28)
#define  PST_I2RND_TOP_CTRL_get_i2_sw_load_en(data)                              ((0x08000000&(data))>>27)
#define  PST_I2RND_TOP_CTRL_get_i2_dma_load_sw(data)                             ((0x04000000&(data))>>26)
#define  PST_I2RND_TOP_CTRL_get_i1_sw_load_en(data)                              ((0x02000000&(data))>>25)
#define  PST_I2RND_TOP_CTRL_get_i1_dma_load_sw(data)                             ((0x01000000&(data))>>24)
#define  PST_I2RND_TOP_CTRL_get_memc_f_delay(data)                               ((0x00F00000&(data))>>20)
#define  PST_I2RND_TOP_CTRL_get_dispm_f_delay(data)                              ((0x000F0000&(data))>>16)
#define  PST_I2RND_TOP_CTRL_get_disps_f_delay(data)                              ((0x0000F000&(data))>>12)
#define  PST_I2RND_TOP_CTRL_get_d_main_from_vgip_m(data)                         ((0x00000400&(data))>>10)
#define  PST_I2RND_TOP_CTRL_get_gdma_from_vgip_m(data)                           ((0x00000200&(data))>>9)
#define  PST_I2RND_TOP_CTRL_get_d_sub_from_vgip_m(data)                          ((0x00000100&(data))>>8)
#define  PST_I2RND_TOP_CTRL_get_i_main_from_vgip_m(data)                         ((0x00000080&(data))>>7)
#define  PST_I2RND_TOP_CTRL_get_i_sub_from_vgip_s(data)                          ((0x00000040&(data))>>6)
#define  PST_I2RND_TOP_CTRL_get_i2rnd_en(data)                                   ((0x00000020&(data))>>5)
#define  PST_I2RND_TOP_CTRL_get_gdma_pst_en(data)                                ((0x00000010&(data))>>4)
#define  PST_I2RND_TOP_CTRL_get_dispm_pst_en(data)                               ((0x00000008&(data))>>3)
#define  PST_I2RND_TOP_CTRL_get_disps_pst_en(data)                               ((0x00000004&(data))>>2)
#define  PST_I2RND_TOP_CTRL_get_i_main_pst_en(data)                              ((0x00000002&(data))>>1)
#define  PST_I2RND_TOP_CTRL_get_i_sub_pst_en(data)                               (0x00000001&(data))

#define  PST_I2RND_DMA_CTRL                                                     0x180B1010
#define  PST_I2RND_DMA_CTRL_reg_addr                                             "0xB80B1010"
#define  PST_I2RND_DMA_CTRL_reg                                                  0xB80B1010
#define  PST_I2RND_DMA_CTRL_inst_addr                                            "0x0001"
#define  set_PST_I2RND_DMA_CTRL_reg(data)                                        (*((volatile unsigned int*)PST_I2RND_DMA_CTRL_reg)=data)
#define  get_PST_I2RND_DMA_CTRL_reg                                              (*((volatile unsigned int*)PST_I2RND_DMA_CTRL_reg))
#define  PST_I2RND_DMA_CTRL_dma_wtlvl_shift                                      (16)
#define  PST_I2RND_DMA_CTRL_dma_len_shift                                        (0)
#define  PST_I2RND_DMA_CTRL_dma_wtlvl_mask                                       (0x01FF0000)
#define  PST_I2RND_DMA_CTRL_dma_len_mask                                         (0x000000FF)
#define  PST_I2RND_DMA_CTRL_dma_wtlvl(data)                                      (0x01FF0000&((data)<<16))
#define  PST_I2RND_DMA_CTRL_dma_len(data)                                        (0x000000FF&(data))
#define  PST_I2RND_DMA_CTRL_get_dma_wtlvl(data)                                  ((0x01FF0000&(data))>>16)
#define  PST_I2RND_DMA_CTRL_get_dma_len(data)                                    (0x000000FF&(data))

#define  PST_I2RND_DMA_NUM0                                                     0x180B1014
#define  PST_I2RND_DMA_NUM0_reg_addr                                             "0xB80B1014"
#define  PST_I2RND_DMA_NUM0_reg                                                  0xB80B1014
#define  PST_I2RND_DMA_NUM0_inst_addr                                            "0x0002"
#define  set_PST_I2RND_DMA_NUM0_reg(data)                                        (*((volatile unsigned int*)PST_I2RND_DMA_NUM0_reg)=data)
#define  get_PST_I2RND_DMA_NUM0_reg                                              (*((volatile unsigned int*)PST_I2RND_DMA_NUM0_reg))
#define  PST_I2RND_DMA_NUM0_dma_num_i2rnd_src0_vo_shift                          (16)
#define  PST_I2RND_DMA_NUM0_dma_num_i2rnd_src0_vo_mask                           (0x0FFF0000)
#define  PST_I2RND_DMA_NUM0_dma_num_i2rnd_src0_vo(data)                          (0x0FFF0000&((data)<<16))
#define  PST_I2RND_DMA_NUM0_get_dma_num_i2rnd_src0_vo(data)                      ((0x0FFF0000&(data))>>16)

#define  PST_I2RND_DMA_NUM1                                                     0x180B1018
#define  PST_I2RND_DMA_NUM1_reg_addr                                             "0xB80B1018"
#define  PST_I2RND_DMA_NUM1_reg                                                  0xB80B1018
#define  PST_I2RND_DMA_NUM1_inst_addr                                            "0x0003"
#define  set_PST_I2RND_DMA_NUM1_reg(data)                                        (*((volatile unsigned int*)PST_I2RND_DMA_NUM1_reg)=data)
#define  get_PST_I2RND_DMA_NUM1_reg                                              (*((volatile unsigned int*)PST_I2RND_DMA_NUM1_reg))
#define  PST_I2RND_DMA_NUM1_dma_num_i2rnd_src1_vo_shift                          (16)
#define  PST_I2RND_DMA_NUM1_dma_num_i2rnd_src1_vo_mask                           (0x0FFF0000)
#define  PST_I2RND_DMA_NUM1_dma_num_i2rnd_src1_vo(data)                          (0x0FFF0000&((data)<<16))
#define  PST_I2RND_DMA_NUM1_get_dma_num_i2rnd_src1_vo(data)                      ((0x0FFF0000&(data))>>16)

#define  PST_I2RND_DMA_NUM2                                                     0x180B101C
#define  PST_I2RND_DMA_NUM2_reg_addr                                             "0xB80B101C"
#define  PST_I2RND_DMA_NUM2_reg                                                  0xB80B101C
#define  PST_I2RND_DMA_NUM2_inst_addr                                            "0x0004"
#define  set_PST_I2RND_DMA_NUM2_reg(data)                                        (*((volatile unsigned int*)PST_I2RND_DMA_NUM2_reg)=data)
#define  get_PST_I2RND_DMA_NUM2_reg                                              (*((volatile unsigned int*)PST_I2RND_DMA_NUM2_reg))
#define  PST_I2RND_DMA_NUM2_dma_num_pst_i_main_shift                             (16)
#define  PST_I2RND_DMA_NUM2_dma_num_pst_i_sub_shift                              (0)
#define  PST_I2RND_DMA_NUM2_dma_num_pst_i_main_mask                              (0x0FFF0000)
#define  PST_I2RND_DMA_NUM2_dma_num_pst_i_sub_mask                               (0x00000FFF)
#define  PST_I2RND_DMA_NUM2_dma_num_pst_i_main(data)                             (0x0FFF0000&((data)<<16))
#define  PST_I2RND_DMA_NUM2_dma_num_pst_i_sub(data)                              (0x00000FFF&(data))
#define  PST_I2RND_DMA_NUM2_get_dma_num_pst_i_main(data)                         ((0x0FFF0000&(data))>>16)
#define  PST_I2RND_DMA_NUM2_get_dma_num_pst_i_sub(data)                          (0x00000FFF&(data))

#define  PST_I2RND_DMA_NUM3                                                     0x180B1020
#define  PST_I2RND_DMA_NUM3_reg_addr                                             "0xB80B1020"
#define  PST_I2RND_DMA_NUM3_reg                                                  0xB80B1020
#define  PST_I2RND_DMA_NUM3_inst_addr                                            "0x0005"
#define  set_PST_I2RND_DMA_NUM3_reg(data)                                        (*((volatile unsigned int*)PST_I2RND_DMA_NUM3_reg)=data)
#define  get_PST_I2RND_DMA_NUM3_reg                                              (*((volatile unsigned int*)PST_I2RND_DMA_NUM3_reg))
#define  PST_I2RND_DMA_NUM3_dma_num_pst_dispm_shift                              (16)
#define  PST_I2RND_DMA_NUM3_dma_num_pst_disps_shift                              (0)
#define  PST_I2RND_DMA_NUM3_dma_num_pst_dispm_mask                               (0x0FFF0000)
#define  PST_I2RND_DMA_NUM3_dma_num_pst_disps_mask                               (0x00000FFF)
#define  PST_I2RND_DMA_NUM3_dma_num_pst_dispm(data)                              (0x0FFF0000&((data)<<16))
#define  PST_I2RND_DMA_NUM3_dma_num_pst_disps(data)                              (0x00000FFF&(data))
#define  PST_I2RND_DMA_NUM3_get_dma_num_pst_dispm(data)                          ((0x0FFF0000&(data))>>16)
#define  PST_I2RND_DMA_NUM3_get_dma_num_pst_disps(data)                          (0x00000FFF&(data))

#define  PST_I2RND_DMA_NUM4                                                     0x180B1024
#define  PST_I2RND_DMA_NUM4_reg_addr                                             "0xB80B1024"
#define  PST_I2RND_DMA_NUM4_reg                                                  0xB80B1024
#define  PST_I2RND_DMA_NUM4_inst_addr                                            "0x0006"
#define  set_PST_I2RND_DMA_NUM4_reg(data)                                        (*((volatile unsigned int*)PST_I2RND_DMA_NUM4_reg)=data)
#define  get_PST_I2RND_DMA_NUM4_reg                                              (*((volatile unsigned int*)PST_I2RND_DMA_NUM4_reg))
#define  PST_I2RND_DMA_NUM4_dma_num_pst_gdma_shift                               (0)
#define  PST_I2RND_DMA_NUM4_dma_num_pst_gdma_mask                                (0x00000FFF)
#define  PST_I2RND_DMA_NUM4_dma_num_pst_gdma(data)                               (0x00000FFF&(data))
#define  PST_I2RND_DMA_NUM4_get_dma_num_pst_gdma(data)                           (0x00000FFF&(data))

#define  PST_I2RND_DMA_ADDR0                                                    0x180B1028
#define  PST_I2RND_DMA_ADDR0_reg_addr                                            "0xB80B1028"
#define  PST_I2RND_DMA_ADDR0_reg                                                 0xB80B1028
#define  PST_I2RND_DMA_ADDR0_inst_addr                                           "0x0007"
#define  set_PST_I2RND_DMA_ADDR0_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_ADDR0_reg)=data)
#define  get_PST_I2RND_DMA_ADDR0_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_ADDR0_reg))
#define  PST_I2RND_DMA_ADDR0_i2rnd_src0_vo_read_addr_shift                       (3)
#define  PST_I2RND_DMA_ADDR0_i2rnd_src0_vo_read_addr_mask                        (0xFFFFFFF8)
#define  PST_I2RND_DMA_ADDR0_i2rnd_src0_vo_read_addr(data)                       (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_ADDR0_get_i2rnd_src0_vo_read_addr(data)                   ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_ADDR2                                                    0x180B1030
#define  PST_I2RND_DMA_ADDR2_reg_addr                                            "0xB80B1030"
#define  PST_I2RND_DMA_ADDR2_reg                                                 0xB80B1030
#define  PST_I2RND_DMA_ADDR2_inst_addr                                           "0x0008"
#define  set_PST_I2RND_DMA_ADDR2_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_ADDR2_reg)=data)
#define  get_PST_I2RND_DMA_ADDR2_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_ADDR2_reg))
#define  PST_I2RND_DMA_ADDR2_i2rnd_src1_vo_read_addr_shift                       (3)
#define  PST_I2RND_DMA_ADDR2_i2rnd_src1_vo_read_addr_mask                        (0xFFFFFFF8)
#define  PST_I2RND_DMA_ADDR2_i2rnd_src1_vo_read_addr(data)                       (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_ADDR2_get_i2rnd_src1_vo_read_addr(data)                   ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_ADDR4                                                    0x180B1038
#define  PST_I2RND_DMA_ADDR4_reg_addr                                            "0xB80B1038"
#define  PST_I2RND_DMA_ADDR4_reg                                                 0xB80B1038
#define  PST_I2RND_DMA_ADDR4_inst_addr                                           "0x0009"
#define  set_PST_I2RND_DMA_ADDR4_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_ADDR4_reg)=data)
#define  get_PST_I2RND_DMA_ADDR4_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_ADDR4_reg))
#define  PST_I2RND_DMA_ADDR4_pst_i_main_read_addr_shift                          (3)
#define  PST_I2RND_DMA_ADDR4_pst_i_main_read_addr_mask                           (0xFFFFFFF8)
#define  PST_I2RND_DMA_ADDR4_pst_i_main_read_addr(data)                          (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_ADDR4_get_pst_i_main_read_addr(data)                      ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_ADDR5                                                    0x180B103C
#define  PST_I2RND_DMA_ADDR5_reg_addr                                            "0xB80B103C"
#define  PST_I2RND_DMA_ADDR5_reg                                                 0xB80B103C
#define  PST_I2RND_DMA_ADDR5_inst_addr                                           "0x000A"
#define  set_PST_I2RND_DMA_ADDR5_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_ADDR5_reg)=data)
#define  get_PST_I2RND_DMA_ADDR5_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_ADDR5_reg))
#define  PST_I2RND_DMA_ADDR5_pst_i_sub_read_addr_shift                           (3)
#define  PST_I2RND_DMA_ADDR5_pst_i_sub_read_addr_mask                            (0xFFFFFFF8)
#define  PST_I2RND_DMA_ADDR5_pst_i_sub_read_addr(data)                           (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_ADDR5_get_pst_i_sub_read_addr(data)                       ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_ADDR6                                                    0x180B1040
#define  PST_I2RND_DMA_ADDR6_reg_addr                                            "0xB80B1040"
#define  PST_I2RND_DMA_ADDR6_reg                                                 0xB80B1040
#define  PST_I2RND_DMA_ADDR6_inst_addr                                           "0x000B"
#define  set_PST_I2RND_DMA_ADDR6_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_ADDR6_reg)=data)
#define  get_PST_I2RND_DMA_ADDR6_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_ADDR6_reg))
#define  PST_I2RND_DMA_ADDR6_pst_dispm_read_addr_shift                           (3)
#define  PST_I2RND_DMA_ADDR6_pst_dispm_read_addr_mask                            (0xFFFFFFF8)
#define  PST_I2RND_DMA_ADDR6_pst_dispm_read_addr(data)                           (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_ADDR6_get_pst_dispm_read_addr(data)                       ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_ADDR7                                                    0x180B1044
#define  PST_I2RND_DMA_ADDR7_reg_addr                                            "0xB80B1044"
#define  PST_I2RND_DMA_ADDR7_reg                                                 0xB80B1044
#define  PST_I2RND_DMA_ADDR7_inst_addr                                           "0x000C"
#define  set_PST_I2RND_DMA_ADDR7_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_ADDR7_reg)=data)
#define  get_PST_I2RND_DMA_ADDR7_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_ADDR7_reg))
#define  PST_I2RND_DMA_ADDR7_pst_disps_read_addr_shift                           (3)
#define  PST_I2RND_DMA_ADDR7_pst_disps_read_addr_mask                            (0xFFFFFFF8)
#define  PST_I2RND_DMA_ADDR7_pst_disps_read_addr(data)                           (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_ADDR7_get_pst_disps_read_addr(data)                       ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_ADDR8                                                    0x180B1048
#define  PST_I2RND_DMA_ADDR8_reg_addr                                            "0xB80B1048"
#define  PST_I2RND_DMA_ADDR8_reg                                                 0xB80B1048
#define  PST_I2RND_DMA_ADDR8_inst_addr                                           "0x000D"
#define  set_PST_I2RND_DMA_ADDR8_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_ADDR8_reg)=data)
#define  get_PST_I2RND_DMA_ADDR8_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_ADDR8_reg))
#define  PST_I2RND_DMA_ADDR8_pst_gdma_read_addr_shift                            (3)
#define  PST_I2RND_DMA_ADDR8_pst_gdma_read_addr_mask                             (0xFFFFFFF8)
#define  PST_I2RND_DMA_ADDR8_pst_gdma_read_addr(data)                            (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_ADDR8_get_pst_gdma_read_addr(data)                        ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_STEP0                                                    0x180B104C
#define  PST_I2RND_DMA_STEP0_reg_addr                                            "0xB80B104C"
#define  PST_I2RND_DMA_STEP0_reg                                                 0xB80B104C
#define  PST_I2RND_DMA_STEP0_inst_addr                                           "0x000E"
#define  set_PST_I2RND_DMA_STEP0_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_STEP0_reg)=data)
#define  get_PST_I2RND_DMA_STEP0_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_STEP0_reg))
#define  PST_I2RND_DMA_STEP0_i2rnd_src0_vo_block_step_shift                      (3)
#define  PST_I2RND_DMA_STEP0_i2rnd_src0_vo_block_step_mask                       (0xFFFFFFF8)
#define  PST_I2RND_DMA_STEP0_i2rnd_src0_vo_block_step(data)                      (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_STEP0_get_i2rnd_src0_vo_block_step(data)                  ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_STEP2                                                    0x180B1054
#define  PST_I2RND_DMA_STEP2_reg_addr                                            "0xB80B1054"
#define  PST_I2RND_DMA_STEP2_reg                                                 0xB80B1054
#define  PST_I2RND_DMA_STEP2_inst_addr                                           "0x000F"
#define  set_PST_I2RND_DMA_STEP2_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_STEP2_reg)=data)
#define  get_PST_I2RND_DMA_STEP2_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_STEP2_reg))
#define  PST_I2RND_DMA_STEP2_i2rnd_src1_vo_block_step_shift                      (3)
#define  PST_I2RND_DMA_STEP2_i2rnd_src1_vo_block_step_mask                       (0xFFFFFFF8)
#define  PST_I2RND_DMA_STEP2_i2rnd_src1_vo_block_step(data)                      (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_STEP2_get_i2rnd_src1_vo_block_step(data)                  ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_STEP4                                                    0x180B105C
#define  PST_I2RND_DMA_STEP4_reg_addr                                            "0xB80B105C"
#define  PST_I2RND_DMA_STEP4_reg                                                 0xB80B105C
#define  PST_I2RND_DMA_STEP4_inst_addr                                           "0x0010"
#define  set_PST_I2RND_DMA_STEP4_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_STEP4_reg)=data)
#define  get_PST_I2RND_DMA_STEP4_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_STEP4_reg))
#define  PST_I2RND_DMA_STEP4_pst_i_main_block_step_shift                         (3)
#define  PST_I2RND_DMA_STEP4_pst_i_main_block_step_mask                          (0xFFFFFFF8)
#define  PST_I2RND_DMA_STEP4_pst_i_main_block_step(data)                         (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_STEP4_get_pst_i_main_block_step(data)                     ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_STEP5                                                    0x180B1060
#define  PST_I2RND_DMA_STEP5_reg_addr                                            "0xB80B1060"
#define  PST_I2RND_DMA_STEP5_reg                                                 0xB80B1060
#define  PST_I2RND_DMA_STEP5_inst_addr                                           "0x0011"
#define  set_PST_I2RND_DMA_STEP5_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_STEP5_reg)=data)
#define  get_PST_I2RND_DMA_STEP5_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_STEP5_reg))
#define  PST_I2RND_DMA_STEP5_pst_i_sub_block_step_shift                          (3)
#define  PST_I2RND_DMA_STEP5_pst_i_sub_block_step_mask                           (0xFFFFFFF8)
#define  PST_I2RND_DMA_STEP5_pst_i_sub_block_step(data)                          (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_STEP5_get_pst_i_sub_block_step(data)                      ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_STEP6                                                    0x180B1064
#define  PST_I2RND_DMA_STEP6_reg_addr                                            "0xB80B1064"
#define  PST_I2RND_DMA_STEP6_reg                                                 0xB80B1064
#define  PST_I2RND_DMA_STEP6_inst_addr                                           "0x0012"
#define  set_PST_I2RND_DMA_STEP6_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_STEP6_reg)=data)
#define  get_PST_I2RND_DMA_STEP6_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_STEP6_reg))
#define  PST_I2RND_DMA_STEP6_pst_dispm_block_step_shift                          (3)
#define  PST_I2RND_DMA_STEP6_pst_dispm_block_step_mask                           (0xFFFFFFF8)
#define  PST_I2RND_DMA_STEP6_pst_dispm_block_step(data)                          (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_STEP6_get_pst_dispm_block_step(data)                      ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_STEP7                                                    0x180B1068
#define  PST_I2RND_DMA_STEP7_reg_addr                                            "0xB80B1068"
#define  PST_I2RND_DMA_STEP7_reg                                                 0xB80B1068
#define  PST_I2RND_DMA_STEP7_inst_addr                                           "0x0013"
#define  set_PST_I2RND_DMA_STEP7_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_STEP7_reg)=data)
#define  get_PST_I2RND_DMA_STEP7_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_STEP7_reg))
#define  PST_I2RND_DMA_STEP7_pst_disps_block_step_shift                          (3)
#define  PST_I2RND_DMA_STEP7_pst_disps_block_step_mask                           (0xFFFFFFF8)
#define  PST_I2RND_DMA_STEP7_pst_disps_block_step(data)                          (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_STEP7_get_pst_disps_block_step(data)                      ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_STEP8                                                    0x180B106C
#define  PST_I2RND_DMA_STEP8_reg_addr                                            "0xB80B106C"
#define  PST_I2RND_DMA_STEP8_reg                                                 0xB80B106C
#define  PST_I2RND_DMA_STEP8_inst_addr                                           "0x0014"
#define  set_PST_I2RND_DMA_STEP8_reg(data)                                       (*((volatile unsigned int*)PST_I2RND_DMA_STEP8_reg)=data)
#define  get_PST_I2RND_DMA_STEP8_reg                                             (*((volatile unsigned int*)PST_I2RND_DMA_STEP8_reg))
#define  PST_I2RND_DMA_STEP8_pst_gdma_block_step_shift                           (3)
#define  PST_I2RND_DMA_STEP8_pst_gdma_block_step_mask                            (0xFFFFFFF8)
#define  PST_I2RND_DMA_STEP8_pst_gdma_block_step(data)                           (0xFFFFFFF8&((data)<<3))
#define  PST_I2RND_DMA_STEP8_get_pst_gdma_block_step(data)                       ((0xFFFFFFF8&(data))>>3)

#define  PST_I2RND_DMA_BUF_NUM                                                  0x180B1070
#define  PST_I2RND_DMA_BUF_NUM_reg_addr                                          "0xB80B1070"
#define  PST_I2RND_DMA_BUF_NUM_reg                                               0xB80B1070
#define  PST_I2RND_DMA_BUF_NUM_inst_addr                                         "0x0015"
#define  set_PST_I2RND_DMA_BUF_NUM_reg(data)                                     (*((volatile unsigned int*)PST_I2RND_DMA_BUF_NUM_reg)=data)
#define  get_PST_I2RND_DMA_BUF_NUM_reg                                           (*((volatile unsigned int*)PST_I2RND_DMA_BUF_NUM_reg))
#define  PST_I2RND_DMA_BUF_NUM_dma_buffer_num_shift                              (0)
#define  PST_I2RND_DMA_BUF_NUM_dma_buffer_num_mask                               (0x0000001F)
#define  PST_I2RND_DMA_BUF_NUM_dma_buffer_num(data)                              (0x0000001F&(data))
#define  PST_I2RND_DMA_BUF_NUM_get_dma_buffer_num(data)                          (0x0000001F&(data))

#define  PST_I2RND_DMA_WRT_PNT0                                                 0x180B1080
#define  PST_I2RND_DMA_WRT_PNT0_reg_addr                                         "0xB80B1080"
#define  PST_I2RND_DMA_WRT_PNT0_reg                                              0xB80B1080
#define  PST_I2RND_DMA_WRT_PNT0_inst_addr                                        "0x0016"
#define  set_PST_I2RND_DMA_WRT_PNT0_reg(data)                                    (*((volatile unsigned int*)PST_I2RND_DMA_WRT_PNT0_reg)=data)
#define  get_PST_I2RND_DMA_WRT_PNT0_reg                                          (*((volatile unsigned int*)PST_I2RND_DMA_WRT_PNT0_reg))
#define  PST_I2RND_DMA_WRT_PNT0_i2rnd_src1_vo_write_pnt_shift                    (8)
#define  PST_I2RND_DMA_WRT_PNT0_i2rnd_src1_vo_write_pnt_mask                     (0x00001F00)
#define  PST_I2RND_DMA_WRT_PNT0_i2rnd_src1_vo_write_pnt(data)                    (0x00001F00&((data)<<8))
#define  PST_I2RND_DMA_WRT_PNT0_get_i2rnd_src1_vo_write_pnt(data)                ((0x00001F00&(data))>>8)

#define  PST_I2RND_DMA_WRT_PNT1                                                 0x180B1084
#define  PST_I2RND_DMA_WRT_PNT1_reg_addr                                         "0xB80B1084"
#define  PST_I2RND_DMA_WRT_PNT1_reg                                              0xB80B1084
#define  PST_I2RND_DMA_WRT_PNT1_inst_addr                                        "0x0017"
#define  set_PST_I2RND_DMA_WRT_PNT1_reg(data)                                    (*((volatile unsigned int*)PST_I2RND_DMA_WRT_PNT1_reg)=data)
#define  get_PST_I2RND_DMA_WRT_PNT1_reg                                          (*((volatile unsigned int*)PST_I2RND_DMA_WRT_PNT1_reg))
#define  PST_I2RND_DMA_WRT_PNT1_i2rnd_src0_vo_write_pnt_shift                    (24)
#define  PST_I2RND_DMA_WRT_PNT1_pst_i_main_write_pnt_shift                       (8)
#define  PST_I2RND_DMA_WRT_PNT1_pst_i_sub_write_pnt_shift                        (0)
#define  PST_I2RND_DMA_WRT_PNT1_i2rnd_src0_vo_write_pnt_mask                     (0x1F000000)
#define  PST_I2RND_DMA_WRT_PNT1_pst_i_main_write_pnt_mask                        (0x00001F00)
#define  PST_I2RND_DMA_WRT_PNT1_pst_i_sub_write_pnt_mask                         (0x0000001F)
#define  PST_I2RND_DMA_WRT_PNT1_i2rnd_src0_vo_write_pnt(data)                    (0x1F000000&((data)<<24))
#define  PST_I2RND_DMA_WRT_PNT1_pst_i_main_write_pnt(data)                       (0x00001F00&((data)<<8))
#define  PST_I2RND_DMA_WRT_PNT1_pst_i_sub_write_pnt(data)                        (0x0000001F&(data))
#define  PST_I2RND_DMA_WRT_PNT1_get_i2rnd_src0_vo_write_pnt(data)                ((0x1F000000&(data))>>24)
#define  PST_I2RND_DMA_WRT_PNT1_get_pst_i_main_write_pnt(data)                   ((0x00001F00&(data))>>8)
#define  PST_I2RND_DMA_WRT_PNT1_get_pst_i_sub_write_pnt(data)                    (0x0000001F&(data))

#define  PST_I2RND_DMA_WRT_PNT2                                                 0x180B1088
#define  PST_I2RND_DMA_WRT_PNT2_reg_addr                                         "0xB80B1088"
#define  PST_I2RND_DMA_WRT_PNT2_reg                                              0xB80B1088
#define  PST_I2RND_DMA_WRT_PNT2_inst_addr                                        "0x0018"
#define  set_PST_I2RND_DMA_WRT_PNT2_reg(data)                                    (*((volatile unsigned int*)PST_I2RND_DMA_WRT_PNT2_reg)=data)
#define  get_PST_I2RND_DMA_WRT_PNT2_reg                                          (*((volatile unsigned int*)PST_I2RND_DMA_WRT_PNT2_reg))
#define  PST_I2RND_DMA_WRT_PNT2_pst_dispm_write_pnt_shift                        (16)
#define  PST_I2RND_DMA_WRT_PNT2_pst_disps_write_pnt_shift                        (8)
#define  PST_I2RND_DMA_WRT_PNT2_pst_gdma_write_pnt_shift                         (0)
#define  PST_I2RND_DMA_WRT_PNT2_pst_dispm_write_pnt_mask                         (0x001F0000)
#define  PST_I2RND_DMA_WRT_PNT2_pst_disps_write_pnt_mask                         (0x00001F00)
#define  PST_I2RND_DMA_WRT_PNT2_pst_gdma_write_pnt_mask                          (0x0000001F)
#define  PST_I2RND_DMA_WRT_PNT2_pst_dispm_write_pnt(data)                        (0x001F0000&((data)<<16))
#define  PST_I2RND_DMA_WRT_PNT2_pst_disps_write_pnt(data)                        (0x00001F00&((data)<<8))
#define  PST_I2RND_DMA_WRT_PNT2_pst_gdma_write_pnt(data)                         (0x0000001F&(data))
#define  PST_I2RND_DMA_WRT_PNT2_get_pst_dispm_write_pnt(data)                    ((0x001F0000&(data))>>16)
#define  PST_I2RND_DMA_WRT_PNT2_get_pst_disps_write_pnt(data)                    ((0x00001F00&(data))>>8)
#define  PST_I2RND_DMA_WRT_PNT2_get_pst_gdma_write_pnt(data)                     (0x0000001F&(data))

#define  PST_I2RND_DMA_READ_PNT0                                                0x180B1090
#define  PST_I2RND_DMA_READ_PNT0_reg_addr                                        "0xB80B1090"
#define  PST_I2RND_DMA_READ_PNT0_reg                                             0xB80B1090
#define  PST_I2RND_DMA_READ_PNT0_inst_addr                                       "0x0019"
#define  set_PST_I2RND_DMA_READ_PNT0_reg(data)                                   (*((volatile unsigned int*)PST_I2RND_DMA_READ_PNT0_reg)=data)
#define  get_PST_I2RND_DMA_READ_PNT0_reg                                         (*((volatile unsigned int*)PST_I2RND_DMA_READ_PNT0_reg))
#define  PST_I2RND_DMA_READ_PNT0_i2rnd_src1_vo_read_pnt_shift                    (8)
#define  PST_I2RND_DMA_READ_PNT0_i2rnd_src1_vo_read_pnt_mask                     (0x00001F00)
#define  PST_I2RND_DMA_READ_PNT0_i2rnd_src1_vo_read_pnt(data)                    (0x00001F00&((data)<<8))
#define  PST_I2RND_DMA_READ_PNT0_get_i2rnd_src1_vo_read_pnt(data)                ((0x00001F00&(data))>>8)

#define  PST_I2RND_DMA_READ_PNT1                                                0x180B1094
#define  PST_I2RND_DMA_READ_PNT1_reg_addr                                        "0xB80B1094"
#define  PST_I2RND_DMA_READ_PNT1_reg                                             0xB80B1094
#define  PST_I2RND_DMA_READ_PNT1_inst_addr                                       "0x001A"
#define  set_PST_I2RND_DMA_READ_PNT1_reg(data)                                   (*((volatile unsigned int*)PST_I2RND_DMA_READ_PNT1_reg)=data)
#define  get_PST_I2RND_DMA_READ_PNT1_reg                                         (*((volatile unsigned int*)PST_I2RND_DMA_READ_PNT1_reg))
#define  PST_I2RND_DMA_READ_PNT1_i2rnd_src0_vo_read_pnt_shift                    (24)
#define  PST_I2RND_DMA_READ_PNT1_pst_i_main_read_pnt_shift                       (8)
#define  PST_I2RND_DMA_READ_PNT1_pst_i_sub_read_pnt_shift                        (0)
#define  PST_I2RND_DMA_READ_PNT1_i2rnd_src0_vo_read_pnt_mask                     (0x1F000000)
#define  PST_I2RND_DMA_READ_PNT1_pst_i_main_read_pnt_mask                        (0x00001F00)
#define  PST_I2RND_DMA_READ_PNT1_pst_i_sub_read_pnt_mask                         (0x0000001F)
#define  PST_I2RND_DMA_READ_PNT1_i2rnd_src0_vo_read_pnt(data)                    (0x1F000000&((data)<<24))
#define  PST_I2RND_DMA_READ_PNT1_pst_i_main_read_pnt(data)                       (0x00001F00&((data)<<8))
#define  PST_I2RND_DMA_READ_PNT1_pst_i_sub_read_pnt(data)                        (0x0000001F&(data))
#define  PST_I2RND_DMA_READ_PNT1_get_i2rnd_src0_vo_read_pnt(data)                ((0x1F000000&(data))>>24)
#define  PST_I2RND_DMA_READ_PNT1_get_pst_i_main_read_pnt(data)                   ((0x00001F00&(data))>>8)
#define  PST_I2RND_DMA_READ_PNT1_get_pst_i_sub_read_pnt(data)                    (0x0000001F&(data))

#define  PST_I2RND_DMA_READ_PNT2                                                0x180B1098
#define  PST_I2RND_DMA_READ_PNT2_reg_addr                                        "0xB80B1098"
#define  PST_I2RND_DMA_READ_PNT2_reg                                             0xB80B1098
#define  PST_I2RND_DMA_READ_PNT2_inst_addr                                       "0x001B"
#define  set_PST_I2RND_DMA_READ_PNT2_reg(data)                                   (*((volatile unsigned int*)PST_I2RND_DMA_READ_PNT2_reg)=data)
#define  get_PST_I2RND_DMA_READ_PNT2_reg                                         (*((volatile unsigned int*)PST_I2RND_DMA_READ_PNT2_reg))
#define  PST_I2RND_DMA_READ_PNT2_pst_dispm_read_pnt_shift                        (16)
#define  PST_I2RND_DMA_READ_PNT2_pst_disps_read_pnt_shift                        (8)
#define  PST_I2RND_DMA_READ_PNT2_pst_gdma_read_pnt_shift                         (0)
#define  PST_I2RND_DMA_READ_PNT2_pst_dispm_read_pnt_mask                         (0x001F0000)
#define  PST_I2RND_DMA_READ_PNT2_pst_disps_read_pnt_mask                         (0x00001F00)
#define  PST_I2RND_DMA_READ_PNT2_pst_gdma_read_pnt_mask                          (0x0000001F)
#define  PST_I2RND_DMA_READ_PNT2_pst_dispm_read_pnt(data)                        (0x001F0000&((data)<<16))
#define  PST_I2RND_DMA_READ_PNT2_pst_disps_read_pnt(data)                        (0x00001F00&((data)<<8))
#define  PST_I2RND_DMA_READ_PNT2_pst_gdma_read_pnt(data)                         (0x0000001F&(data))
#define  PST_I2RND_DMA_READ_PNT2_get_pst_dispm_read_pnt(data)                    ((0x001F0000&(data))>>16)
#define  PST_I2RND_DMA_READ_PNT2_get_pst_disps_read_pnt(data)                    ((0x00001F00&(data))>>8)
#define  PST_I2RND_DMA_READ_PNT2_get_pst_gdma_read_pnt(data)                     (0x0000001F&(data))

#define  PST_I2RND_DEBUG0                                                       0x180B10A0
#define  PST_I2RND_DEBUG0_reg_addr                                               "0xB80B10A0"
#define  PST_I2RND_DEBUG0_reg                                                    0xB80B10A0
#define  PST_I2RND_DEBUG0_inst_addr                                              "0x001C"
#define  set_PST_I2RND_DEBUG0_reg(data)                                          (*((volatile unsigned int*)PST_I2RND_DEBUG0_reg)=data)
#define  get_PST_I2RND_DEBUG0_reg                                                (*((volatile unsigned int*)PST_I2RND_DEBUG0_reg))
#define  PST_I2RND_DEBUG0_gdma_pst_1f_not_end_shift                              (4)
#define  PST_I2RND_DEBUG0_dispm_pst_1f_not_end_shift                             (3)
#define  PST_I2RND_DEBUG0_disps_pst_1f_not_end_shift                             (2)
#define  PST_I2RND_DEBUG0_i_main_pst_1f_not_end_shift                            (1)
#define  PST_I2RND_DEBUG0_i_sub_pst_1f_not_end_shift                             (0)
#define  PST_I2RND_DEBUG0_gdma_pst_1f_not_end_mask                               (0x00000010)
#define  PST_I2RND_DEBUG0_dispm_pst_1f_not_end_mask                              (0x00000008)
#define  PST_I2RND_DEBUG0_disps_pst_1f_not_end_mask                              (0x00000004)
#define  PST_I2RND_DEBUG0_i_main_pst_1f_not_end_mask                             (0x00000002)
#define  PST_I2RND_DEBUG0_i_sub_pst_1f_not_end_mask                              (0x00000001)
#define  PST_I2RND_DEBUG0_gdma_pst_1f_not_end(data)                              (0x00000010&((data)<<4))
#define  PST_I2RND_DEBUG0_dispm_pst_1f_not_end(data)                             (0x00000008&((data)<<3))
#define  PST_I2RND_DEBUG0_disps_pst_1f_not_end(data)                             (0x00000004&((data)<<2))
#define  PST_I2RND_DEBUG0_i_main_pst_1f_not_end(data)                            (0x00000002&((data)<<1))
#define  PST_I2RND_DEBUG0_i_sub_pst_1f_not_end(data)                             (0x00000001&(data))
#define  PST_I2RND_DEBUG0_get_gdma_pst_1f_not_end(data)                          ((0x00000010&(data))>>4)
#define  PST_I2RND_DEBUG0_get_dispm_pst_1f_not_end(data)                         ((0x00000008&(data))>>3)
#define  PST_I2RND_DEBUG0_get_disps_pst_1f_not_end(data)                         ((0x00000004&(data))>>2)
#define  PST_I2RND_DEBUG0_get_i_main_pst_1f_not_end(data)                        ((0x00000002&(data))>>1)
#define  PST_I2RND_DEBUG0_get_i_sub_pst_1f_not_end(data)                         (0x00000001&(data))

#define  PST_I2RND_DEBUG1                                                       0x180B10A4
#define  PST_I2RND_DEBUG1_reg_addr                                               "0xB80B10A4"
#define  PST_I2RND_DEBUG1_reg                                                    0xB80B10A4
#define  PST_I2RND_DEBUG1_inst_addr                                              "0x001D"
#define  set_PST_I2RND_DEBUG1_reg(data)                                          (*((volatile unsigned int*)PST_I2RND_DEBUG1_reg)=data)
#define  get_PST_I2RND_DEBUG1_reg                                                (*((volatile unsigned int*)PST_I2RND_DEBUG1_reg))
#define  PST_I2RND_DEBUG1_debug_clear_shift                                      (0)
#define  PST_I2RND_DEBUG1_debug_clear_mask                                       (0x00000001)
#define  PST_I2RND_DEBUG1_debug_clear(data)                                      (0x00000001&(data))
#define  PST_I2RND_DEBUG1_get_debug_clear(data)                                  (0x00000001&(data))

#define  PST_I2RND_DISPM_REPEAT_CTRL                                            0x180B10A8
#define  PST_I2RND_DISPM_REPEAT_CTRL_reg_addr                                    "0xB80B10A8"
#define  PST_I2RND_DISPM_REPEAT_CTRL_reg                                         0xB80B10A8
#define  PST_I2RND_DISPM_REPEAT_CTRL_inst_addr                                   "0x001E"
#define  set_PST_I2RND_DISPM_REPEAT_CTRL_reg(data)                               (*((volatile unsigned int*)PST_I2RND_DISPM_REPEAT_CTRL_reg)=data)
#define  get_PST_I2RND_DISPM_REPEAT_CTRL_reg                                     (*((volatile unsigned int*)PST_I2RND_DISPM_REPEAT_CTRL_reg))
#define  PST_I2RND_DISPM_REPEAT_CTRL_blk_sel_mux_disp_shift                      (16)
#define  PST_I2RND_DISPM_REPEAT_CTRL_blk_sel_mux_cap_shift                       (8)
#define  PST_I2RND_DISPM_REPEAT_CTRL_dispm_repeat_en_shift                       (0)
#define  PST_I2RND_DISPM_REPEAT_CTRL_blk_sel_mux_disp_mask                       (0x003F0000)
#define  PST_I2RND_DISPM_REPEAT_CTRL_blk_sel_mux_cap_mask                        (0x00003F00)
#define  PST_I2RND_DISPM_REPEAT_CTRL_dispm_repeat_en_mask                        (0x00000001)
#define  PST_I2RND_DISPM_REPEAT_CTRL_blk_sel_mux_disp(data)                      (0x003F0000&((data)<<16))
#define  PST_I2RND_DISPM_REPEAT_CTRL_blk_sel_mux_cap(data)                       (0x00003F00&((data)<<8))
#define  PST_I2RND_DISPM_REPEAT_CTRL_dispm_repeat_en(data)                       (0x00000001&(data))
#define  PST_I2RND_DISPM_REPEAT_CTRL_get_blk_sel_mux_disp(data)                  ((0x003F0000&(data))>>16)
#define  PST_I2RND_DISPM_REPEAT_CTRL_get_blk_sel_mux_cap(data)                   ((0x00003F00&(data))>>8)
#define  PST_I2RND_DISPM_REPEAT_CTRL_get_dispm_repeat_en(data)                   (0x00000001&(data))

#define  PST_I2RND_DISPM_REPEAT_DEBUG                                           0x180B10AC
#define  PST_I2RND_DISPM_REPEAT_DEBUG_reg_addr                                   "0xB80B10AC"
#define  PST_I2RND_DISPM_REPEAT_DEBUG_reg                                        0xB80B10AC
#define  PST_I2RND_DISPM_REPEAT_DEBUG_inst_addr                                  "0x001F"
#define  set_PST_I2RND_DISPM_REPEAT_DEBUG_reg(data)                              (*((volatile unsigned int*)PST_I2RND_DISPM_REPEAT_DEBUG_reg)=data)
#define  get_PST_I2RND_DISPM_REPEAT_DEBUG_reg                                    (*((volatile unsigned int*)PST_I2RND_DISPM_REPEAT_DEBUG_reg))
#define  PST_I2RND_DISPM_REPEAT_DEBUG_dispm_blk_sel_disp_shift                   (4)
#define  PST_I2RND_DISPM_REPEAT_DEBUG_dispm_blk_sel_cap_shift                    (0)
#define  PST_I2RND_DISPM_REPEAT_DEBUG_dispm_blk_sel_disp_mask                    (0x00000070)
#define  PST_I2RND_DISPM_REPEAT_DEBUG_dispm_blk_sel_cap_mask                     (0x00000007)
#define  PST_I2RND_DISPM_REPEAT_DEBUG_dispm_blk_sel_disp(data)                   (0x00000070&((data)<<4))
#define  PST_I2RND_DISPM_REPEAT_DEBUG_dispm_blk_sel_cap(data)                    (0x00000007&(data))
#define  PST_I2RND_DISPM_REPEAT_DEBUG_get_dispm_blk_sel_disp(data)               ((0x00000070&(data))>>4)
#define  PST_I2RND_DISPM_REPEAT_DEBUG_get_dispm_blk_sel_cap(data)                (0x00000007&(data))

#define  PST_I2RND_PST_MBIST_MODE                                               0x180B10B0
#define  PST_I2RND_PST_MBIST_MODE_reg_addr                                       "0xB80B10B0"
#define  PST_I2RND_PST_MBIST_MODE_reg                                            0xB80B10B0
#define  PST_I2RND_PST_MBIST_MODE_inst_addr                                      "0x0020"
#define  set_PST_I2RND_PST_MBIST_MODE_reg(data)                                  (*((volatile unsigned int*)PST_I2RND_PST_MBIST_MODE_reg)=data)
#define  get_PST_I2RND_PST_MBIST_MODE_reg                                        (*((volatile unsigned int*)PST_I2RND_PST_MBIST_MODE_reg))
#define  PST_I2RND_PST_MBIST_MODE_bist_mode_shift                                (0)
#define  PST_I2RND_PST_MBIST_MODE_bist_mode_mask                                 (0x00000001)
#define  PST_I2RND_PST_MBIST_MODE_bist_mode(data)                                (0x00000001&(data))
#define  PST_I2RND_PST_MBIST_MODE_get_bist_mode(data)                            (0x00000001&(data))

#define  PST_I2RND_PST_MBIST_DONE                                               0x180B10B4
#define  PST_I2RND_PST_MBIST_DONE_reg_addr                                       "0xB80B10B4"
#define  PST_I2RND_PST_MBIST_DONE_reg                                            0xB80B10B4
#define  PST_I2RND_PST_MBIST_DONE_inst_addr                                      "0x0021"
#define  set_PST_I2RND_PST_MBIST_DONE_reg(data)                                  (*((volatile unsigned int*)PST_I2RND_PST_MBIST_DONE_reg)=data)
#define  get_PST_I2RND_PST_MBIST_DONE_reg                                        (*((volatile unsigned int*)PST_I2RND_PST_MBIST_DONE_reg))
#define  PST_I2RND_PST_MBIST_DONE_bist_done_shift                                (0)
#define  PST_I2RND_PST_MBIST_DONE_bist_done_mask                                 (0x00000001)
#define  PST_I2RND_PST_MBIST_DONE_bist_done(data)                                (0x00000001&(data))
#define  PST_I2RND_PST_MBIST_DONE_get_bist_done(data)                            (0x00000001&(data))

#define  PST_I2RND_PST_MBIST_FAIL                                               0x180B10B8
#define  PST_I2RND_PST_MBIST_FAIL_reg_addr                                       "0xB80B10B8"
#define  PST_I2RND_PST_MBIST_FAIL_reg                                            0xB80B10B8
#define  PST_I2RND_PST_MBIST_FAIL_inst_addr                                      "0x0022"
#define  set_PST_I2RND_PST_MBIST_FAIL_reg(data)                                  (*((volatile unsigned int*)PST_I2RND_PST_MBIST_FAIL_reg)=data)
#define  get_PST_I2RND_PST_MBIST_FAIL_reg                                        (*((volatile unsigned int*)PST_I2RND_PST_MBIST_FAIL_reg))
#define  PST_I2RND_PST_MBIST_FAIL_bist_fail_0_shift                              (0)
#define  PST_I2RND_PST_MBIST_FAIL_bist_fail_0_mask                               (0x00000001)
#define  PST_I2RND_PST_MBIST_FAIL_bist_fail_0(data)                              (0x00000001&(data))
#define  PST_I2RND_PST_MBIST_FAIL_get_bist_fail_0(data)                          (0x00000001&(data))

#define  PST_I2RND_PST_DRF_MODE                                                 0x180B10BC
#define  PST_I2RND_PST_DRF_MODE_reg_addr                                         "0xB80B10BC"
#define  PST_I2RND_PST_DRF_MODE_reg                                              0xB80B10BC
#define  PST_I2RND_PST_DRF_MODE_inst_addr                                        "0x0023"
#define  set_PST_I2RND_PST_DRF_MODE_reg(data)                                    (*((volatile unsigned int*)PST_I2RND_PST_DRF_MODE_reg)=data)
#define  get_PST_I2RND_PST_DRF_MODE_reg                                          (*((volatile unsigned int*)PST_I2RND_PST_DRF_MODE_reg))
#define  PST_I2RND_PST_DRF_MODE_drf_mode_shift                                   (0)
#define  PST_I2RND_PST_DRF_MODE_drf_mode_mask                                    (0x00000001)
#define  PST_I2RND_PST_DRF_MODE_drf_mode(data)                                   (0x00000001&(data))
#define  PST_I2RND_PST_DRF_MODE_get_drf_mode(data)                               (0x00000001&(data))

#define  PST_I2RND_PST_DRF_RESUME                                               0x180B10C0
#define  PST_I2RND_PST_DRF_RESUME_reg_addr                                       "0xB80B10C0"
#define  PST_I2RND_PST_DRF_RESUME_reg                                            0xB80B10C0
#define  PST_I2RND_PST_DRF_RESUME_inst_addr                                      "0x0024"
#define  set_PST_I2RND_PST_DRF_RESUME_reg(data)                                  (*((volatile unsigned int*)PST_I2RND_PST_DRF_RESUME_reg)=data)
#define  get_PST_I2RND_PST_DRF_RESUME_reg                                        (*((volatile unsigned int*)PST_I2RND_PST_DRF_RESUME_reg))
#define  PST_I2RND_PST_DRF_RESUME_drf_resume_shift                               (0)
#define  PST_I2RND_PST_DRF_RESUME_drf_resume_mask                                (0x00000001)
#define  PST_I2RND_PST_DRF_RESUME_drf_resume(data)                               (0x00000001&(data))
#define  PST_I2RND_PST_DRF_RESUME_get_drf_resume(data)                           (0x00000001&(data))

#define  PST_I2RND_PST_DRF_DONE                                                 0x180B10C4
#define  PST_I2RND_PST_DRF_DONE_reg_addr                                         "0xB80B10C4"
#define  PST_I2RND_PST_DRF_DONE_reg                                              0xB80B10C4
#define  PST_I2RND_PST_DRF_DONE_inst_addr                                        "0x0025"
#define  set_PST_I2RND_PST_DRF_DONE_reg(data)                                    (*((volatile unsigned int*)PST_I2RND_PST_DRF_DONE_reg)=data)
#define  get_PST_I2RND_PST_DRF_DONE_reg                                          (*((volatile unsigned int*)PST_I2RND_PST_DRF_DONE_reg))
#define  PST_I2RND_PST_DRF_DONE_drf_done_shift                                   (0)
#define  PST_I2RND_PST_DRF_DONE_drf_done_mask                                    (0x00000001)
#define  PST_I2RND_PST_DRF_DONE_drf_done(data)                                   (0x00000001&(data))
#define  PST_I2RND_PST_DRF_DONE_get_drf_done(data)                               (0x00000001&(data))

#define  PST_I2RND_PST_DRF_PAUSE                                                0x180B10C8
#define  PST_I2RND_PST_DRF_PAUSE_reg_addr                                        "0xB80B10C8"
#define  PST_I2RND_PST_DRF_PAUSE_reg                                             0xB80B10C8
#define  PST_I2RND_PST_DRF_PAUSE_inst_addr                                       "0x0026"
#define  set_PST_I2RND_PST_DRF_PAUSE_reg(data)                                   (*((volatile unsigned int*)PST_I2RND_PST_DRF_PAUSE_reg)=data)
#define  get_PST_I2RND_PST_DRF_PAUSE_reg                                         (*((volatile unsigned int*)PST_I2RND_PST_DRF_PAUSE_reg))
#define  PST_I2RND_PST_DRF_PAUSE_drf_pause_shift                                 (0)
#define  PST_I2RND_PST_DRF_PAUSE_drf_pause_mask                                  (0x00000001)
#define  PST_I2RND_PST_DRF_PAUSE_drf_pause(data)                                 (0x00000001&(data))
#define  PST_I2RND_PST_DRF_PAUSE_get_drf_pause(data)                             (0x00000001&(data))

#define  PST_I2RND_PST_MBIST_DRF_FAIL                                           0x180B10CC
#define  PST_I2RND_PST_MBIST_DRF_FAIL_reg_addr                                   "0xB80B10CC"
#define  PST_I2RND_PST_MBIST_DRF_FAIL_reg                                        0xB80B10CC
#define  PST_I2RND_PST_MBIST_DRF_FAIL_inst_addr                                  "0x0027"
#define  set_PST_I2RND_PST_MBIST_DRF_FAIL_reg(data)                              (*((volatile unsigned int*)PST_I2RND_PST_MBIST_DRF_FAIL_reg)=data)
#define  get_PST_I2RND_PST_MBIST_DRF_FAIL_reg                                    (*((volatile unsigned int*)PST_I2RND_PST_MBIST_DRF_FAIL_reg))
#define  PST_I2RND_PST_MBIST_DRF_FAIL_drf_bist_fail_0_shift                      (0)
#define  PST_I2RND_PST_MBIST_DRF_FAIL_drf_bist_fail_0_mask                       (0x00000001)
#define  PST_I2RND_PST_MBIST_DRF_FAIL_drf_bist_fail_0(data)                      (0x00000001&(data))
#define  PST_I2RND_PST_MBIST_DRF_FAIL_get_drf_bist_fail_0(data)                  (0x00000001&(data))

#define  PST_I2RND_PST_MBIST_LS                                                 0x180B10D0
#define  PST_I2RND_PST_MBIST_LS_reg_addr                                         "0xB80B10D0"
#define  PST_I2RND_PST_MBIST_LS_reg                                              0xB80B10D0
#define  PST_I2RND_PST_MBIST_LS_inst_addr                                        "0x0028"
#define  set_PST_I2RND_PST_MBIST_LS_reg(data)                                    (*((volatile unsigned int*)PST_I2RND_PST_MBIST_LS_reg)=data)
#define  get_PST_I2RND_PST_MBIST_LS_reg                                          (*((volatile unsigned int*)PST_I2RND_PST_MBIST_LS_reg))
#define  PST_I2RND_PST_MBIST_LS_ls_0_shift                                       (0)
#define  PST_I2RND_PST_MBIST_LS_ls_0_mask                                        (0x00000001)
#define  PST_I2RND_PST_MBIST_LS_ls_0(data)                                       (0x00000001&(data))
#define  PST_I2RND_PST_MBIST_LS_get_ls_0(data)                                   (0x00000001&(data))

#define  PST_I2RND_PST_MBIST_RM                                                 0x180B10D4
#define  PST_I2RND_PST_MBIST_RM_reg_addr                                         "0xB80B10D4"
#define  PST_I2RND_PST_MBIST_RM_reg                                              0xB80B10D4
#define  PST_I2RND_PST_MBIST_RM_inst_addr                                        "0x0029"
#define  set_PST_I2RND_PST_MBIST_RM_reg(data)                                    (*((volatile unsigned int*)PST_I2RND_PST_MBIST_RM_reg)=data)
#define  get_PST_I2RND_PST_MBIST_RM_reg                                          (*((volatile unsigned int*)PST_I2RND_PST_MBIST_RM_reg))
#define  PST_I2RND_PST_MBIST_RM_rm_0_shift                                       (0)
#define  PST_I2RND_PST_MBIST_RM_rm_0_mask                                        (0x0000000F)
#define  PST_I2RND_PST_MBIST_RM_rm_0(data)                                       (0x0000000F&(data))
#define  PST_I2RND_PST_MBIST_RM_get_rm_0(data)                                   (0x0000000F&(data))

#define  PST_I2RND_PST_MBIST_RME                                                0x180B10D8
#define  PST_I2RND_PST_MBIST_RME_reg_addr                                        "0xB80B10D8"
#define  PST_I2RND_PST_MBIST_RME_reg                                             0xB80B10D8
#define  PST_I2RND_PST_MBIST_RME_inst_addr                                       "0x002A"
#define  set_PST_I2RND_PST_MBIST_RME_reg(data)                                   (*((volatile unsigned int*)PST_I2RND_PST_MBIST_RME_reg)=data)
#define  get_PST_I2RND_PST_MBIST_RME_reg                                         (*((volatile unsigned int*)PST_I2RND_PST_MBIST_RME_reg))
#define  PST_I2RND_PST_MBIST_RME_rme_0_shift                                     (0)
#define  PST_I2RND_PST_MBIST_RME_rme_0_mask                                      (0x00000001)
#define  PST_I2RND_PST_MBIST_RME_rme_0(data)                                     (0x00000001&(data))
#define  PST_I2RND_PST_MBIST_RME_get_rme_0(data)                                 (0x00000001&(data))

#define  PST_I2RND_PST_DEBUG_MODE                                               0x180B10DC
#define  PST_I2RND_PST_DEBUG_MODE_reg_addr                                       "0xB80B10DC"
#define  PST_I2RND_PST_DEBUG_MODE_reg                                            0xB80B10DC
#define  PST_I2RND_PST_DEBUG_MODE_inst_addr                                      "0x002B"
#define  set_PST_I2RND_PST_DEBUG_MODE_reg(data)                                  (*((volatile unsigned int*)PST_I2RND_PST_DEBUG_MODE_reg)=data)
#define  get_PST_I2RND_PST_DEBUG_MODE_reg                                        (*((volatile unsigned int*)PST_I2RND_PST_DEBUG_MODE_reg))
#define  PST_I2RND_PST_DEBUG_MODE_pst_debug_mode_en_shift                        (31)
#define  PST_I2RND_PST_DEBUG_MODE_i1topst_dma_load1_target_shift                 (30)
#define  PST_I2RND_PST_DEBUG_MODE_i2topst_dma_load1_target_shift                 (29)
#define  PST_I2RND_PST_DEBUG_MODE_pst2vodma1_m_done_target_shift                 (28)
#define  PST_I2RND_PST_DEBUG_MODE_pst2vodma1_s_done_target_shift                 (27)
#define  PST_I2RND_PST_DEBUG_MODE_psttodispd_enable_target_shift                 (26)
#define  PST_I2RND_PST_DEBUG_MODE_psttogdma_enable_target_shift                  (25)
#define  PST_I2RND_PST_DEBUG_MODE_psttomdomdisp_enable_target_shift              (24)
#define  PST_I2RND_PST_DEBUG_MODE_psttovodma1_enable_target_shift                (23)
#define  PST_I2RND_PST_DEBUG_MODE_pst_debug_mode_en_mask                         (0x80000000)
#define  PST_I2RND_PST_DEBUG_MODE_i1topst_dma_load1_target_mask                  (0x40000000)
#define  PST_I2RND_PST_DEBUG_MODE_i2topst_dma_load1_target_mask                  (0x20000000)
#define  PST_I2RND_PST_DEBUG_MODE_pst2vodma1_m_done_target_mask                  (0x10000000)
#define  PST_I2RND_PST_DEBUG_MODE_pst2vodma1_s_done_target_mask                  (0x08000000)
#define  PST_I2RND_PST_DEBUG_MODE_psttodispd_enable_target_mask                  (0x04000000)
#define  PST_I2RND_PST_DEBUG_MODE_psttogdma_enable_target_mask                   (0x02000000)
#define  PST_I2RND_PST_DEBUG_MODE_psttomdomdisp_enable_target_mask               (0x01000000)
#define  PST_I2RND_PST_DEBUG_MODE_psttovodma1_enable_target_mask                 (0x00800000)
#define  PST_I2RND_PST_DEBUG_MODE_pst_debug_mode_en(data)                        (0x80000000&((data)<<31))
#define  PST_I2RND_PST_DEBUG_MODE_i1topst_dma_load1_target(data)                 (0x40000000&((data)<<30))
#define  PST_I2RND_PST_DEBUG_MODE_i2topst_dma_load1_target(data)                 (0x20000000&((data)<<29))
#define  PST_I2RND_PST_DEBUG_MODE_pst2vodma1_m_done_target(data)                 (0x10000000&((data)<<28))
#define  PST_I2RND_PST_DEBUG_MODE_pst2vodma1_s_done_target(data)                 (0x08000000&((data)<<27))
#define  PST_I2RND_PST_DEBUG_MODE_psttodispd_enable_target(data)                 (0x04000000&((data)<<26))
#define  PST_I2RND_PST_DEBUG_MODE_psttogdma_enable_target(data)                  (0x02000000&((data)<<25))
#define  PST_I2RND_PST_DEBUG_MODE_psttomdomdisp_enable_target(data)              (0x01000000&((data)<<24))
#define  PST_I2RND_PST_DEBUG_MODE_psttovodma1_enable_target(data)                (0x00800000&((data)<<23))
#define  PST_I2RND_PST_DEBUG_MODE_get_pst_debug_mode_en(data)                    ((0x80000000&(data))>>31)
#define  PST_I2RND_PST_DEBUG_MODE_get_i1topst_dma_load1_target(data)             ((0x40000000&(data))>>30)
#define  PST_I2RND_PST_DEBUG_MODE_get_i2topst_dma_load1_target(data)             ((0x20000000&(data))>>29)
#define  PST_I2RND_PST_DEBUG_MODE_get_pst2vodma1_m_done_target(data)             ((0x10000000&(data))>>28)
#define  PST_I2RND_PST_DEBUG_MODE_get_pst2vodma1_s_done_target(data)             ((0x08000000&(data))>>27)
#define  PST_I2RND_PST_DEBUG_MODE_get_psttodispd_enable_target(data)             ((0x04000000&(data))>>26)
#define  PST_I2RND_PST_DEBUG_MODE_get_psttogdma_enable_target(data)              ((0x02000000&(data))>>25)
#define  PST_I2RND_PST_DEBUG_MODE_get_psttomdomdisp_enable_target(data)          ((0x01000000&(data))>>24)
#define  PST_I2RND_PST_DEBUG_MODE_get_psttovodma1_enable_target(data)            ((0x00800000&(data))>>23)

#define  PST_I2RND_PST_DEBUG_MODE1                                              0x180B10E0
#define  PST_I2RND_PST_DEBUG_MODE1_reg_addr                                      "0xB80B10E0"
#define  PST_I2RND_PST_DEBUG_MODE1_reg                                           0xB80B10E0
#define  PST_I2RND_PST_DEBUG_MODE1_inst_addr                                     "0x002C"
#define  set_PST_I2RND_PST_DEBUG_MODE1_reg(data)                                 (*((volatile unsigned int*)PST_I2RND_PST_DEBUG_MODE1_reg)=data)
#define  get_PST_I2RND_PST_DEBUG_MODE1_reg                                       (*((volatile unsigned int*)PST_I2RND_PST_DEBUG_MODE1_reg))
#define  PST_I2RND_PST_DEBUG_MODE1_d1topst_blk_sel_new_shift                     (29)
#define  PST_I2RND_PST_DEBUG_MODE1_d2topst_blk_sel_new_shift                     (26)
#define  PST_I2RND_PST_DEBUG_MODE1_dispdtopst_dma_load_shift                     (25)
#define  PST_I2RND_PST_DEBUG_MODE1_dispdtopst_vsync_shift                        (24)
#define  PST_I2RND_PST_DEBUG_MODE1_gdmatopst_dma_load_shift                      (23)
#define  PST_I2RND_PST_DEBUG_MODE1_gdmatopst_vsync_shift                         (22)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_blk_sel_new_shift                     (19)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_dma_load_shift                        (18)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_dma_load_new_shift                    (17)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_vsync_shift                           (16)
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_blk_sel_new_shift                     (13)
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_dma_load_shift                        (12)
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_vsync_shift                           (11)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1toi_i2rnd_src_flag_shift                (10)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_i2rnd_m_load_shift                (9)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_i2rnd_s_load_shift                (8)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_vsync_shift                       (7)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma2topst_vsync_shift                       (6)
#define  PST_I2RND_PST_DEBUG_MODE1_d1topst_blk_sel_new_mask                      (0xE0000000)
#define  PST_I2RND_PST_DEBUG_MODE1_d2topst_blk_sel_new_mask                      (0x1C000000)
#define  PST_I2RND_PST_DEBUG_MODE1_dispdtopst_dma_load_mask                      (0x02000000)
#define  PST_I2RND_PST_DEBUG_MODE1_dispdtopst_vsync_mask                         (0x01000000)
#define  PST_I2RND_PST_DEBUG_MODE1_gdmatopst_dma_load_mask                       (0x00800000)
#define  PST_I2RND_PST_DEBUG_MODE1_gdmatopst_vsync_mask                          (0x00400000)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_blk_sel_new_mask                      (0x00380000)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_dma_load_mask                         (0x00040000)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_dma_load_new_mask                     (0x00020000)
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_vsync_mask                            (0x00010000)
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_blk_sel_new_mask                      (0x0000E000)
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_dma_load_mask                         (0x00001000)
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_vsync_mask                            (0x00000800)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1toi_i2rnd_src_flag_mask                 (0x00000400)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_i2rnd_m_load_mask                 (0x00000200)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_i2rnd_s_load_mask                 (0x00000100)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_vsync_mask                        (0x00000080)
#define  PST_I2RND_PST_DEBUG_MODE1_vodma2topst_vsync_mask                        (0x00000040)
#define  PST_I2RND_PST_DEBUG_MODE1_d1topst_blk_sel_new(data)                     (0xE0000000&((data)<<29))
#define  PST_I2RND_PST_DEBUG_MODE1_d2topst_blk_sel_new(data)                     (0x1C000000&((data)<<26))
#define  PST_I2RND_PST_DEBUG_MODE1_dispdtopst_dma_load(data)                     (0x02000000&((data)<<25))
#define  PST_I2RND_PST_DEBUG_MODE1_dispdtopst_vsync(data)                        (0x01000000&((data)<<24))
#define  PST_I2RND_PST_DEBUG_MODE1_gdmatopst_dma_load(data)                      (0x00800000&((data)<<23))
#define  PST_I2RND_PST_DEBUG_MODE1_gdmatopst_vsync(data)                         (0x00400000&((data)<<22))
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_blk_sel_new(data)                     (0x00380000&((data)<<19))
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_dma_load(data)                        (0x00040000&((data)<<18))
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_dma_load_new(data)                    (0x00020000&((data)<<17))
#define  PST_I2RND_PST_DEBUG_MODE1_i1topst_vsync(data)                           (0x00010000&((data)<<16))
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_blk_sel_new(data)                     (0x0000E000&((data)<<13))
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_dma_load(data)                        (0x00001000&((data)<<12))
#define  PST_I2RND_PST_DEBUG_MODE1_i2topst_vsync(data)                           (0x00000800&((data)<<11))
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1toi_i2rnd_src_flag(data)                (0x00000400&((data)<<10))
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_i2rnd_m_load(data)                (0x00000200&((data)<<9))
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_i2rnd_s_load(data)                (0x00000100&((data)<<8))
#define  PST_I2RND_PST_DEBUG_MODE1_vodma1topst_vsync(data)                       (0x00000080&((data)<<7))
#define  PST_I2RND_PST_DEBUG_MODE1_vodma2topst_vsync(data)                       (0x00000040&((data)<<6))
#define  PST_I2RND_PST_DEBUG_MODE1_get_d1topst_blk_sel_new(data)                 ((0xE0000000&(data))>>29)
#define  PST_I2RND_PST_DEBUG_MODE1_get_d2topst_blk_sel_new(data)                 ((0x1C000000&(data))>>26)
#define  PST_I2RND_PST_DEBUG_MODE1_get_dispdtopst_dma_load(data)                 ((0x02000000&(data))>>25)
#define  PST_I2RND_PST_DEBUG_MODE1_get_dispdtopst_vsync(data)                    ((0x01000000&(data))>>24)
#define  PST_I2RND_PST_DEBUG_MODE1_get_gdmatopst_dma_load(data)                  ((0x00800000&(data))>>23)
#define  PST_I2RND_PST_DEBUG_MODE1_get_gdmatopst_vsync(data)                     ((0x00400000&(data))>>22)
#define  PST_I2RND_PST_DEBUG_MODE1_get_i1topst_blk_sel_new(data)                 ((0x00380000&(data))>>19)
#define  PST_I2RND_PST_DEBUG_MODE1_get_i1topst_dma_load(data)                    ((0x00040000&(data))>>18)
#define  PST_I2RND_PST_DEBUG_MODE1_get_i1topst_dma_load_new(data)                ((0x00020000&(data))>>17)
#define  PST_I2RND_PST_DEBUG_MODE1_get_i1topst_vsync(data)                       ((0x00010000&(data))>>16)
#define  PST_I2RND_PST_DEBUG_MODE1_get_i2topst_blk_sel_new(data)                 ((0x0000E000&(data))>>13)
#define  PST_I2RND_PST_DEBUG_MODE1_get_i2topst_dma_load(data)                    ((0x00001000&(data))>>12)
#define  PST_I2RND_PST_DEBUG_MODE1_get_i2topst_vsync(data)                       ((0x00000800&(data))>>11)
#define  PST_I2RND_PST_DEBUG_MODE1_get_vodma1toi_i2rnd_src_flag(data)            ((0x00000400&(data))>>10)
#define  PST_I2RND_PST_DEBUG_MODE1_get_vodma1topst_i2rnd_m_load(data)            ((0x00000200&(data))>>9)
#define  PST_I2RND_PST_DEBUG_MODE1_get_vodma1topst_i2rnd_s_load(data)            ((0x00000100&(data))>>8)
#define  PST_I2RND_PST_DEBUG_MODE1_get_vodma1topst_vsync(data)                   ((0x00000080&(data))>>7)
#define  PST_I2RND_PST_DEBUG_MODE1_get_vodma2topst_vsync(data)                   ((0x00000040&(data))>>6)

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PST_I2RND register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  dispd_sw_load_en:1;
        RBus_UInt32  dispd_dma_load_sw:1;
        RBus_UInt32  i2_sw_load_en:1;
        RBus_UInt32  i2_dma_load_sw:1;
        RBus_UInt32  i1_sw_load_en:1;
        RBus_UInt32  i1_dma_load_sw:1;
        RBus_UInt32  memc_f_delay:4;
        RBus_UInt32  dispm_f_delay:4;
        RBus_UInt32  disps_f_delay:4;
        RBus_UInt32  res2:1;
        RBus_UInt32  d_main_from_vgip_m:1;
        RBus_UInt32  gdma_from_vgip_m:1;
        RBus_UInt32  d_sub_from_vgip_m:1;
        RBus_UInt32  i_main_from_vgip_m:1;
        RBus_UInt32  i_sub_from_vgip_s:1;
        RBus_UInt32  i2rnd_en:1;
        RBus_UInt32  gdma_pst_en:1;
        RBus_UInt32  dispm_pst_en:1;
        RBus_UInt32  disps_pst_en:1;
        RBus_UInt32  i_main_pst_en:1;
        RBus_UInt32  i_sub_pst_en:1;
    };
}pst_i2rnd_top_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  dma_wtlvl:9;
        RBus_UInt32  res2:8;
        RBus_UInt32  dma_len:8;
    };
}pst_i2rnd_dma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_num_i2rnd_src0_vo:12;
        RBus_UInt32  res2:16;
    };
}pst_i2rnd_dma_num0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_num_i2rnd_src1_vo:12;
        RBus_UInt32  res2:16;
    };
}pst_i2rnd_dma_num1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_num_pst_i_main:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_num_pst_i_sub:12;
    };
}pst_i2rnd_dma_num2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_num_pst_dispm:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  dma_num_pst_disps:12;
    };
}pst_i2rnd_dma_num3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  dma_num_pst_gdma:12;
    };
}pst_i2rnd_dma_num4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_src0_vo_read_addr:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_addr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_src1_vo_read_addr:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_addr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_i_main_read_addr:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_addr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_i_sub_read_addr:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_addr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_dispm_read_addr:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_addr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_disps_read_addr:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_addr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_gdma_read_addr:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_addr8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_src0_vo_block_step:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_step0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i2rnd_src1_vo_block_step:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_step2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_i_main_block_step:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_step4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_i_sub_block_step:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_step5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_dispm_block_step:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_step6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_disps_block_step:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_step7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_gdma_block_step:29;
        RBus_UInt32  res1:3;
    };
}pst_i2rnd_dma_step8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dma_buffer_num:5;
    };
}pst_i2rnd_dma_buf_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  i2rnd_src1_vo_write_pnt:5;
        RBus_UInt32  res2:8;
    };
}pst_i2rnd_dma_wrt_pnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_src0_vo_write_pnt:5;
        RBus_UInt32  res2:11;
        RBus_UInt32  pst_i_main_write_pnt:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  pst_i_sub_write_pnt:5;
    };
}pst_i2rnd_dma_wrt_pnt1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  pst_dispm_write_pnt:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  pst_disps_write_pnt:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  pst_gdma_write_pnt:5;
    };
}pst_i2rnd_dma_wrt_pnt2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  i2rnd_src1_vo_read_pnt:5;
        RBus_UInt32  res2:8;
    };
}pst_i2rnd_dma_read_pnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_src0_vo_read_pnt:5;
        RBus_UInt32  res2:11;
        RBus_UInt32  pst_i_main_read_pnt:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  pst_i_sub_read_pnt:5;
    };
}pst_i2rnd_dma_read_pnt1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  pst_dispm_read_pnt:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  pst_disps_read_pnt:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  pst_gdma_read_pnt:5;
    };
}pst_i2rnd_dma_read_pnt2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  gdma_pst_1f_not_end:1;
        RBus_UInt32  dispm_pst_1f_not_end:1;
        RBus_UInt32  disps_pst_1f_not_end:1;
        RBus_UInt32  i_main_pst_1f_not_end:1;
        RBus_UInt32  i_sub_pst_1f_not_end:1;
    };
}pst_i2rnd_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  debug_clear:1;
    };
}pst_i2rnd_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  blk_sel_mux_disp:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  blk_sel_mux_cap:6;
        RBus_UInt32  res3:7;
        RBus_UInt32  dispm_repeat_en:1;
    };
}pst_i2rnd_dispm_repeat_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  dispm_blk_sel_disp:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  dispm_blk_sel_cap:3;
    };
}pst_i2rnd_dispm_repeat_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_mode:1;
    };
}pst_i2rnd_pst_mbist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_done:1;
    };
}pst_i2rnd_pst_mbist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_fail_0:1;
    };
}pst_i2rnd_pst_mbist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_mode:1;
    };
}pst_i2rnd_pst_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_resume:1;
    };
}pst_i2rnd_pst_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_done:1;
    };
}pst_i2rnd_pst_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_pause:1;
    };
}pst_i2rnd_pst_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  drf_bist_fail_0:1;
    };
}pst_i2rnd_pst_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  ls_0:1;
    };
}pst_i2rnd_pst_mbist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  rm_0:4;
    };
}pst_i2rnd_pst_mbist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  rme_0:1;
    };
}pst_i2rnd_pst_mbist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_debug_mode_en:1;
        RBus_UInt32  i1topst_dma_load1_target:1;
        RBus_UInt32  i2topst_dma_load1_target:1;
        RBus_UInt32  pst2vodma1_m_done_target:1;
        RBus_UInt32  pst2vodma1_s_done_target:1;
        RBus_UInt32  psttodispd_enable_target:1;
        RBus_UInt32  psttogdma_enable_target:1;
        RBus_UInt32  psttomdomdisp_enable_target:1;
        RBus_UInt32  psttovodma1_enable_target:1;
        RBus_UInt32  res1:23;
    };
}pst_i2rnd_pst_debug_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  d1topst_blk_sel_new:3;
        RBus_UInt32  d2topst_blk_sel_new:3;
        RBus_UInt32  dispdtopst_dma_load:1;
        RBus_UInt32  dispdtopst_vsync:1;
        RBus_UInt32  gdmatopst_dma_load:1;
        RBus_UInt32  gdmatopst_vsync:1;
        RBus_UInt32  i1topst_blk_sel_new:3;
        RBus_UInt32  i1topst_dma_load:1;
        RBus_UInt32  i1topst_dma_load_new:1;
        RBus_UInt32  i1topst_vsync:1;
        RBus_UInt32  i2topst_blk_sel_new:3;
        RBus_UInt32  i2topst_dma_load:1;
        RBus_UInt32  i2topst_vsync:1;
        RBus_UInt32  vodma1toi_i2rnd_src_flag:1;
        RBus_UInt32  vodma1topst_i2rnd_m_load:1;
        RBus_UInt32  vodma1topst_i2rnd_s_load:1;
        RBus_UInt32  vodma1topst_vsync:1;
        RBus_UInt32  vodma2topst_vsync:1;
        RBus_UInt32  res1:6;
    };
}pst_i2rnd_pst_debug_mode1_RBUS;

#else //apply LITTLE_ENDIAN

//======PST_I2RND register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_sub_pst_en:1;
        RBus_UInt32  i_main_pst_en:1;
        RBus_UInt32  disps_pst_en:1;
        RBus_UInt32  dispm_pst_en:1;
        RBus_UInt32  gdma_pst_en:1;
        RBus_UInt32  i2rnd_en:1;
        RBus_UInt32  i_sub_from_vgip_s:1;
        RBus_UInt32  i_main_from_vgip_m:1;
        RBus_UInt32  d_sub_from_vgip_m:1;
        RBus_UInt32  gdma_from_vgip_m:1;
        RBus_UInt32  d_main_from_vgip_m:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  disps_f_delay:4;
        RBus_UInt32  dispm_f_delay:4;
        RBus_UInt32  memc_f_delay:4;
        RBus_UInt32  i1_dma_load_sw:1;
        RBus_UInt32  i1_sw_load_en:1;
        RBus_UInt32  i2_dma_load_sw:1;
        RBus_UInt32  i2_sw_load_en:1;
        RBus_UInt32  dispd_dma_load_sw:1;
        RBus_UInt32  dispd_sw_load_en:1;
        RBus_UInt32  res2:2;
    };
}pst_i2rnd_top_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_len:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  dma_wtlvl:9;
        RBus_UInt32  res2:7;
    };
}pst_i2rnd_dma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dma_num_i2rnd_src0_vo:12;
        RBus_UInt32  res2:4;
    };
}pst_i2rnd_dma_num0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  dma_num_i2rnd_src1_vo:12;
        RBus_UInt32  res2:4;
    };
}pst_i2rnd_dma_num1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_num_pst_i_sub:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_num_pst_i_main:12;
        RBus_UInt32  res2:4;
    };
}pst_i2rnd_dma_num2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_num_pst_disps:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_num_pst_dispm:12;
        RBus_UInt32  res2:4;
    };
}pst_i2rnd_dma_num3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_num_pst_gdma:12;
        RBus_UInt32  res1:20;
    };
}pst_i2rnd_dma_num4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_src0_vo_read_addr:29;
    };
}pst_i2rnd_dma_addr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_src1_vo_read_addr:29;
    };
}pst_i2rnd_dma_addr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_i_main_read_addr:29;
    };
}pst_i2rnd_dma_addr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_i_sub_read_addr:29;
    };
}pst_i2rnd_dma_addr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_dispm_read_addr:29;
    };
}pst_i2rnd_dma_addr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_disps_read_addr:29;
    };
}pst_i2rnd_dma_addr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_gdma_read_addr:29;
    };
}pst_i2rnd_dma_addr8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_src0_vo_block_step:29;
    };
}pst_i2rnd_dma_step0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  i2rnd_src1_vo_block_step:29;
    };
}pst_i2rnd_dma_step2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_i_main_block_step:29;
    };
}pst_i2rnd_dma_step4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_i_sub_block_step:29;
    };
}pst_i2rnd_dma_step5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_dispm_block_step:29;
    };
}pst_i2rnd_dma_step6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_disps_block_step:29;
    };
}pst_i2rnd_dma_step7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_gdma_block_step:29;
    };
}pst_i2rnd_dma_step8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_buffer_num:5;
        RBus_UInt32  res1:27;
    };
}pst_i2rnd_dma_buf_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  i2rnd_src1_vo_write_pnt:5;
        RBus_UInt32  res2:19;
    };
}pst_i2rnd_dma_wrt_pnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_i_sub_write_pnt:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_i_main_write_pnt:5;
        RBus_UInt32  res2:11;
        RBus_UInt32  i2rnd_src0_vo_write_pnt:5;
        RBus_UInt32  res3:3;
    };
}pst_i2rnd_dma_wrt_pnt1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_gdma_write_pnt:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_disps_write_pnt:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  pst_dispm_write_pnt:5;
        RBus_UInt32  res3:11;
    };
}pst_i2rnd_dma_wrt_pnt2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  i2rnd_src1_vo_read_pnt:5;
        RBus_UInt32  res2:19;
    };
}pst_i2rnd_dma_read_pnt0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_i_sub_read_pnt:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_i_main_read_pnt:5;
        RBus_UInt32  res2:11;
        RBus_UInt32  i2rnd_src0_vo_read_pnt:5;
        RBus_UInt32  res3:3;
    };
}pst_i2rnd_dma_read_pnt1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pst_gdma_read_pnt:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  pst_disps_read_pnt:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  pst_dispm_read_pnt:5;
        RBus_UInt32  res3:11;
    };
}pst_i2rnd_dma_read_pnt2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  i_sub_pst_1f_not_end:1;
        RBus_UInt32  i_main_pst_1f_not_end:1;
        RBus_UInt32  disps_pst_1f_not_end:1;
        RBus_UInt32  dispm_pst_1f_not_end:1;
        RBus_UInt32  gdma_pst_1f_not_end:1;
        RBus_UInt32  res1:27;
    };
}pst_i2rnd_debug0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_clear:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_debug1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_repeat_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  blk_sel_mux_cap:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  blk_sel_mux_disp:6;
        RBus_UInt32  res3:10;
    };
}pst_i2rnd_dispm_repeat_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dispm_blk_sel_cap:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  dispm_blk_sel_disp:3;
        RBus_UInt32  res2:25;
    };
}pst_i2rnd_dispm_repeat_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_mode:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_mbist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_done:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_mbist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_fail_0:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_mbist_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_mode:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_resume:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_done:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_pause:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  drf_bist_fail_0:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_mbist_drf_fail_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ls_0:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_mbist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_0:4;
        RBus_UInt32  res1:28;
    };
}pst_i2rnd_pst_mbist_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rme_0:1;
        RBus_UInt32  res1:31;
    };
}pst_i2rnd_pst_mbist_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  psttovodma1_enable_target:1;
        RBus_UInt32  psttomdomdisp_enable_target:1;
        RBus_UInt32  psttogdma_enable_target:1;
        RBus_UInt32  psttodispd_enable_target:1;
        RBus_UInt32  pst2vodma1_s_done_target:1;
        RBus_UInt32  pst2vodma1_m_done_target:1;
        RBus_UInt32  i2topst_dma_load1_target:1;
        RBus_UInt32  i1topst_dma_load1_target:1;
        RBus_UInt32  pst_debug_mode_en:1;
    };
}pst_i2rnd_pst_debug_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vodma2topst_vsync:1;
        RBus_UInt32  vodma1topst_vsync:1;
        RBus_UInt32  vodma1topst_i2rnd_s_load:1;
        RBus_UInt32  vodma1topst_i2rnd_m_load:1;
        RBus_UInt32  vodma1toi_i2rnd_src_flag:1;
        RBus_UInt32  i2topst_vsync:1;
        RBus_UInt32  i2topst_dma_load:1;
        RBus_UInt32  i2topst_blk_sel_new:3;
        RBus_UInt32  i1topst_vsync:1;
        RBus_UInt32  i1topst_dma_load_new:1;
        RBus_UInt32  i1topst_dma_load:1;
        RBus_UInt32  i1topst_blk_sel_new:3;
        RBus_UInt32  gdmatopst_vsync:1;
        RBus_UInt32  gdmatopst_dma_load:1;
        RBus_UInt32  dispdtopst_vsync:1;
        RBus_UInt32  dispdtopst_dma_load:1;
        RBus_UInt32  d2topst_blk_sel_new:3;
        RBus_UInt32  d1topst_blk_sel_new:3;
    };
}pst_i2rnd_pst_debug_mode1_RBUS;




#endif 


#endif 
