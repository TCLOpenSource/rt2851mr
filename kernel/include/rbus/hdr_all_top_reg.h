/**
* @file Merlin5-DesignSpec-HDR_ALL_TOP
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDR_ALL_TOP_REG_H_
#define _RBUS_HDR_ALL_TOP_REG_H_

#include "rbus_types.h"



//  HDR_ALL_TOP Register Address
#define  HDR_ALL_TOP_TOP_CTL                                                    0x1806B800
#define  HDR_ALL_TOP_TOP_CTL_reg_addr                                            "0xB806B800"
#define  HDR_ALL_TOP_TOP_CTL_reg                                                 0xB806B800
#define  HDR_ALL_TOP_TOP_CTL_inst_addr                                           "0x0000"
#define  set_HDR_ALL_TOP_TOP_CTL_reg(data)                                       (*((volatile unsigned int*)HDR_ALL_TOP_TOP_CTL_reg)=data)
#define  get_HDR_ALL_TOP_TOP_CTL_reg                                             (*((volatile unsigned int*)HDR_ALL_TOP_TOP_CTL_reg))
#define  HDR_ALL_TOP_TOP_CTL_hdr1_in_sel_shift                                   (18)
#define  HDR_ALL_TOP_TOP_CTL_end_out_mux_shift                                   (16)
#define  HDR_ALL_TOP_TOP_CTL_sel_sign_tc_shift                                   (15)
#define  HDR_ALL_TOP_TOP_CTL_cr_dly_cb_tc_shift                                  (14)
#define  HDR_ALL_TOP_TOP_CTL_dup_tc_shift                                        (13)
#define  HDR_ALL_TOP_TOP_CTL_en_422to444_tc_shift                                (12)
#define  HDR_ALL_TOP_TOP_CTL_sel_sign_1_shift                                    (11)
#define  HDR_ALL_TOP_TOP_CTL_cr_dly_cb_1_shift                                   (10)
#define  HDR_ALL_TOP_TOP_CTL_dup_1_shift                                         (9)
#define  HDR_ALL_TOP_TOP_CTL_en_422to444_1_shift                                 (8)
#define  HDR_ALL_TOP_TOP_CTL_hdmi_in_mux_shift                                   (5)
#define  HDR_ALL_TOP_TOP_CTL_dolby_mode_shift                                    (0)
#define  HDR_ALL_TOP_TOP_CTL_hdr1_in_sel_mask                                    (0x00040000)
#define  HDR_ALL_TOP_TOP_CTL_end_out_mux_mask                                    (0x00010000)
#define  HDR_ALL_TOP_TOP_CTL_sel_sign_tc_mask                                    (0x00008000)
#define  HDR_ALL_TOP_TOP_CTL_cr_dly_cb_tc_mask                                   (0x00004000)
#define  HDR_ALL_TOP_TOP_CTL_dup_tc_mask                                         (0x00002000)
#define  HDR_ALL_TOP_TOP_CTL_en_422to444_tc_mask                                 (0x00001000)
#define  HDR_ALL_TOP_TOP_CTL_sel_sign_1_mask                                     (0x00000800)
#define  HDR_ALL_TOP_TOP_CTL_cr_dly_cb_1_mask                                    (0x00000400)
#define  HDR_ALL_TOP_TOP_CTL_dup_1_mask                                          (0x00000200)
#define  HDR_ALL_TOP_TOP_CTL_en_422to444_1_mask                                  (0x00000100)
#define  HDR_ALL_TOP_TOP_CTL_hdmi_in_mux_mask                                    (0x00000020)
#define  HDR_ALL_TOP_TOP_CTL_dolby_mode_mask                                     (0x0000000F)
#define  HDR_ALL_TOP_TOP_CTL_hdr1_in_sel(data)                                   (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_TOP_CTL_end_out_mux(data)                                   (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_TOP_CTL_sel_sign_tc(data)                                   (0x00008000&((data)<<15))
#define  HDR_ALL_TOP_TOP_CTL_cr_dly_cb_tc(data)                                  (0x00004000&((data)<<14))
#define  HDR_ALL_TOP_TOP_CTL_dup_tc(data)                                        (0x00002000&((data)<<13))
#define  HDR_ALL_TOP_TOP_CTL_en_422to444_tc(data)                                (0x00001000&((data)<<12))
#define  HDR_ALL_TOP_TOP_CTL_sel_sign_1(data)                                    (0x00000800&((data)<<11))
#define  HDR_ALL_TOP_TOP_CTL_cr_dly_cb_1(data)                                   (0x00000400&((data)<<10))
#define  HDR_ALL_TOP_TOP_CTL_dup_1(data)                                         (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_TOP_CTL_en_422to444_1(data)                                 (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_TOP_CTL_hdmi_in_mux(data)                                   (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_TOP_CTL_dolby_mode(data)                                    (0x0000000F&(data))
#define  HDR_ALL_TOP_TOP_CTL_get_hdr1_in_sel(data)                               ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_TOP_CTL_get_end_out_mux(data)                               ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_TOP_CTL_get_sel_sign_tc(data)                               ((0x00008000&(data))>>15)
#define  HDR_ALL_TOP_TOP_CTL_get_cr_dly_cb_tc(data)                              ((0x00004000&(data))>>14)
#define  HDR_ALL_TOP_TOP_CTL_get_dup_tc(data)                                    ((0x00002000&(data))>>13)
#define  HDR_ALL_TOP_TOP_CTL_get_en_422to444_tc(data)                            ((0x00001000&(data))>>12)
#define  HDR_ALL_TOP_TOP_CTL_get_sel_sign_1(data)                                ((0x00000800&(data))>>11)
#define  HDR_ALL_TOP_TOP_CTL_get_cr_dly_cb_1(data)                               ((0x00000400&(data))>>10)
#define  HDR_ALL_TOP_TOP_CTL_get_dup_1(data)                                     ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_TOP_CTL_get_en_422to444_1(data)                             ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_TOP_CTL_get_hdmi_in_mux(data)                               ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_TOP_CTL_get_dolby_mode(data)                                (0x0000000F&(data))

#define  HDR_ALL_TOP_TOP_PIC_SIZE                                               0x1806B804
#define  HDR_ALL_TOP_TOP_PIC_SIZE_reg_addr                                       "0xB806B804"
#define  HDR_ALL_TOP_TOP_PIC_SIZE_reg                                            0xB806B804
#define  HDR_ALL_TOP_TOP_PIC_SIZE_inst_addr                                      "0x0001"
#define  set_HDR_ALL_TOP_TOP_PIC_SIZE_reg(data)                                  (*((volatile unsigned int*)HDR_ALL_TOP_TOP_PIC_SIZE_reg)=data)
#define  get_HDR_ALL_TOP_TOP_PIC_SIZE_reg                                        (*((volatile unsigned int*)HDR_ALL_TOP_TOP_PIC_SIZE_reg))
#define  HDR_ALL_TOP_TOP_PIC_SIZE_dolby_vsize_shift                              (16)
#define  HDR_ALL_TOP_TOP_PIC_SIZE_dolby_hsize_shift                              (0)
#define  HDR_ALL_TOP_TOP_PIC_SIZE_dolby_vsize_mask                               (0x0FFF0000)
#define  HDR_ALL_TOP_TOP_PIC_SIZE_dolby_hsize_mask                               (0x00001FFF)
#define  HDR_ALL_TOP_TOP_PIC_SIZE_dolby_vsize(data)                              (0x0FFF0000&((data)<<16))
#define  HDR_ALL_TOP_TOP_PIC_SIZE_dolby_hsize(data)                              (0x00001FFF&(data))
#define  HDR_ALL_TOP_TOP_PIC_SIZE_get_dolby_vsize(data)                          ((0x0FFF0000&(data))>>16)
#define  HDR_ALL_TOP_TOP_PIC_SIZE_get_dolby_hsize(data)                          (0x00001FFF&(data))

#define  HDR_ALL_TOP_TOP_PIC_TOTAL                                              0x1806B808
#define  HDR_ALL_TOP_TOP_PIC_TOTAL_reg_addr                                      "0xB806B808"
#define  HDR_ALL_TOP_TOP_PIC_TOTAL_reg                                           0xB806B808
#define  HDR_ALL_TOP_TOP_PIC_TOTAL_inst_addr                                     "0x0002"
#define  set_HDR_ALL_TOP_TOP_PIC_TOTAL_reg(data)                                 (*((volatile unsigned int*)HDR_ALL_TOP_TOP_PIC_TOTAL_reg)=data)
#define  get_HDR_ALL_TOP_TOP_PIC_TOTAL_reg                                       (*((volatile unsigned int*)HDR_ALL_TOP_TOP_PIC_TOTAL_reg))
#define  HDR_ALL_TOP_TOP_PIC_TOTAL_dolby_h_total_shift                           (0)
#define  HDR_ALL_TOP_TOP_PIC_TOTAL_dolby_h_total_mask                            (0x00001FFF)
#define  HDR_ALL_TOP_TOP_PIC_TOTAL_dolby_h_total(data)                           (0x00001FFF&(data))
#define  HDR_ALL_TOP_TOP_PIC_TOTAL_get_dolby_h_total(data)                       (0x00001FFF&(data))

#define  HDR_ALL_TOP_TOP_PIC_STA                                                0x1806B80C
#define  HDR_ALL_TOP_TOP_PIC_STA_reg_addr                                        "0xB806B80C"
#define  HDR_ALL_TOP_TOP_PIC_STA_reg                                             0xB806B80C
#define  HDR_ALL_TOP_TOP_PIC_STA_inst_addr                                       "0x0003"
#define  set_HDR_ALL_TOP_TOP_PIC_STA_reg(data)                                   (*((volatile unsigned int*)HDR_ALL_TOP_TOP_PIC_STA_reg)=data)
#define  get_HDR_ALL_TOP_TOP_PIC_STA_reg                                         (*((volatile unsigned int*)HDR_ALL_TOP_TOP_PIC_STA_reg))
#define  HDR_ALL_TOP_TOP_PIC_STA_dolby_v_den_sta_shift                           (16)
#define  HDR_ALL_TOP_TOP_PIC_STA_dolby_h_den_sta_shift                           (0)
#define  HDR_ALL_TOP_TOP_PIC_STA_dolby_v_den_sta_mask                            (0x00FF0000)
#define  HDR_ALL_TOP_TOP_PIC_STA_dolby_h_den_sta_mask                            (0x00000FFF)
#define  HDR_ALL_TOP_TOP_PIC_STA_dolby_v_den_sta(data)                           (0x00FF0000&((data)<<16))
#define  HDR_ALL_TOP_TOP_PIC_STA_dolby_h_den_sta(data)                           (0x00000FFF&(data))
#define  HDR_ALL_TOP_TOP_PIC_STA_get_dolby_v_den_sta(data)                       ((0x00FF0000&(data))>>16)
#define  HDR_ALL_TOP_TOP_PIC_STA_get_dolby_h_den_sta(data)                       (0x00000FFF&(data))

#define  HDR_ALL_TOP_TOP_D_BUF                                                  0x1806B810
#define  HDR_ALL_TOP_TOP_D_BUF_reg_addr                                          "0xB806B810"
#define  HDR_ALL_TOP_TOP_D_BUF_reg                                               0xB806B810
#define  HDR_ALL_TOP_TOP_D_BUF_inst_addr                                         "0x0004"
#define  set_HDR_ALL_TOP_TOP_D_BUF_reg(data)                                     (*((volatile unsigned int*)HDR_ALL_TOP_TOP_D_BUF_reg)=data)
#define  get_HDR_ALL_TOP_TOP_D_BUF_reg                                           (*((volatile unsigned int*)HDR_ALL_TOP_TOP_D_BUF_reg))
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_v_read_sel_shift                            (31)
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_double_apply_shift                          (1)
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_double_en_shift                             (0)
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_v_read_sel_mask                             (0x80000000)
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_double_apply_mask                           (0x00000002)
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_double_en_mask                              (0x00000001)
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_v_read_sel(data)                            (0x80000000&((data)<<31))
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_double_apply(data)                          (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_TOP_D_BUF_dolby_double_en(data)                             (0x00000001&(data))
#define  HDR_ALL_TOP_TOP_D_BUF_get_dolby_v_read_sel(data)                        ((0x80000000&(data))>>31)
#define  HDR_ALL_TOP_TOP_D_BUF_get_dolby_double_apply(data)                      ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_TOP_D_BUF_get_dolby_double_en(data)                         (0x00000001&(data))

#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS                                         0x1806B820
#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS_reg_addr                                 "0xB806B820"
#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS_reg                                      0xB806B820
#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS_inst_addr                                "0x0005"
#define  set_HDR_ALL_TOP_SENSIO_FIFO_STATUS_reg(data)                            (*((volatile unsigned int*)HDR_ALL_TOP_SENSIO_FIFO_STATUS_reg)=data)
#define  get_HDR_ALL_TOP_SENSIO_FIFO_STATUS_reg                                  (*((volatile unsigned int*)HDR_ALL_TOP_SENSIO_FIFO_STATUS_reg))
#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS_efuse_in_shift                           (1)
#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS_efuse_in_mask                            (0x0000000E)
#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS_efuse_in(data)                           (0x0000000E&((data)<<1))
#define  HDR_ALL_TOP_SENSIO_FIFO_STATUS_get_efuse_in(data)                       ((0x0000000E&(data))>>1)

#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC                                        0x1806B824
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_reg_addr                                "0xB806B824"
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_reg                                     0xB806B824
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_inst_addr                               "0x0006"
#define  set_HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_reg(data)                           (*((volatile unsigned int*)HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_reg)=data)
#define  get_HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_reg                                 (*((volatile unsigned int*)HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_reg))
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_active_end_cnt_shift                    (16)
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_active_start_cnt_shift                  (0)
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_active_end_cnt_mask                     (0x1FFF0000)
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_active_start_cnt_mask                   (0x00001FFF)
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_active_end_cnt(data)                    (0x1FFF0000&((data)<<16))
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_active_start_cnt(data)                  (0x00001FFF&(data))
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_get_active_end_cnt(data)                ((0x1FFF0000&(data))>>16)
#define  HDR_ALL_TOP_DMA_APPLY_ACTVIE_LC_get_active_start_cnt(data)              (0x00001FFF&(data))

#define  HDR_ALL_TOP_DMA_APPLY_LC                                               0x1806B828
#define  HDR_ALL_TOP_DMA_APPLY_LC_reg_addr                                       "0xB806B828"
#define  HDR_ALL_TOP_DMA_APPLY_LC_reg                                            0xB806B828
#define  HDR_ALL_TOP_DMA_APPLY_LC_inst_addr                                      "0x0007"
#define  set_HDR_ALL_TOP_DMA_APPLY_LC_reg(data)                                  (*((volatile unsigned int*)HDR_ALL_TOP_DMA_APPLY_LC_reg)=data)
#define  get_HDR_ALL_TOP_DMA_APPLY_LC_reg                                        (*((volatile unsigned int*)HDR_ALL_TOP_DMA_APPLY_LC_reg))
#define  HDR_ALL_TOP_DMA_APPLY_LC_current_cnt_shift                              (0)
#define  HDR_ALL_TOP_DMA_APPLY_LC_current_cnt_mask                               (0x00001FFF)
#define  HDR_ALL_TOP_DMA_APPLY_LC_current_cnt(data)                              (0x00001FFF&(data))
#define  HDR_ALL_TOP_DMA_APPLY_LC_get_current_cnt(data)                          (0x00001FFF&(data))

#define  HDR_ALL_TOP_DMA_FW                                                     0x1806B82C
#define  HDR_ALL_TOP_DMA_FW_reg_addr                                             "0xB806B82C"
#define  HDR_ALL_TOP_DMA_FW_reg                                                  0xB806B82C
#define  HDR_ALL_TOP_DMA_FW_inst_addr                                            "0x0008"
#define  set_HDR_ALL_TOP_DMA_FW_reg(data)                                        (*((volatile unsigned int*)HDR_ALL_TOP_DMA_FW_reg)=data)
#define  get_HDR_ALL_TOP_DMA_FW_reg                                              (*((volatile unsigned int*)HDR_ALL_TOP_DMA_FW_reg))
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_write_not_finish_shift               (2)
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_write_shift                          (1)
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_mode_shift                           (0)
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_write_not_finish_mask                (0x00000004)
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_write_mask                           (0x00000002)
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_mode_mask                            (0x00000001)
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_write_not_finish(data)               (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_write(data)                          (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DMA_FW_dmato3dtable_fw_mode(data)                           (0x00000001&(data))
#define  HDR_ALL_TOP_DMA_FW_get_dmato3dtable_fw_write_not_finish(data)           ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DMA_FW_get_dmato3dtable_fw_write(data)                      ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DMA_FW_get_dmato3dtable_fw_mode(data)                       (0x00000001&(data))

#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl                                          0x1806B830
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_reg_addr                                  "0xB806B830"
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_reg                                       0xB806B830
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_inst_addr                                 "0x0009"
#define  set_HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_reg(data)                             (*((volatile unsigned int*)HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_reg)=data)
#define  get_HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_reg                                   (*((volatile unsigned int*)HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_reg))
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_force_ctsfifo_rstn_shift                  (10)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_en_ctsfifo_vsrst_shift                    (9)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_en_ctsfifo_bypass_shift                   (8)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_force_ctsfifo_rstn_mask                   (0x00000400)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_en_ctsfifo_vsrst_mask                     (0x00000200)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_en_ctsfifo_bypass_mask                    (0x00000100)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_force_ctsfifo_rstn(data)                  (0x00000400&((data)<<10))
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_en_ctsfifo_vsrst(data)                    (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_en_ctsfifo_bypass(data)                   (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_get_force_ctsfifo_rstn(data)              ((0x00000400&(data))>>10)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_get_en_ctsfifo_vsrst(data)                ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_HDR_CTS_FIFO_ctrl_get_en_ctsfifo_bypass(data)               ((0x00000100&(data))>>8)

#define  HDR_ALL_TOP_Decomp_ctrl_4                                              0x1806B814
#define  HDR_ALL_TOP_Decomp_ctrl_4_reg_addr                                      "0xB806B814"
#define  HDR_ALL_TOP_Decomp_ctrl_4_reg                                           0xB806B814
#define  HDR_ALL_TOP_Decomp_ctrl_4_inst_addr                                     "0x000A"
#define  set_HDR_ALL_TOP_Decomp_ctrl_4_reg(data)                                 (*((volatile unsigned int*)HDR_ALL_TOP_Decomp_ctrl_4_reg)=data)
#define  get_HDR_ALL_TOP_Decomp_ctrl_4_reg                                       (*((volatile unsigned int*)HDR_ALL_TOP_Decomp_ctrl_4_reg))
#define  HDR_ALL_TOP_Decomp_ctrl_4_hs_width_shift                                (16)
#define  HDR_ALL_TOP_Decomp_ctrl_4_hs_width_mask                                 (0x003F0000)
#define  HDR_ALL_TOP_Decomp_ctrl_4_hs_width(data)                                (0x003F0000&((data)<<16))
#define  HDR_ALL_TOP_Decomp_ctrl_4_get_hs_width(data)                            ((0x003F0000&(data))>>16)

#define  HDR_ALL_TOP_Composer_BL_BIST_MODE                                      0x1806B880
#define  HDR_ALL_TOP_Composer_BL_BIST_MODE_reg_addr                              "0xB806B880"
#define  HDR_ALL_TOP_Composer_BL_BIST_MODE_reg                                   0xB806B880
#define  HDR_ALL_TOP_Composer_BL_BIST_MODE_inst_addr                             "0x000B"
#define  set_HDR_ALL_TOP_Composer_BL_BIST_MODE_reg(data)                         (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_BIST_MODE_reg)=data)
#define  get_HDR_ALL_TOP_Composer_BL_BIST_MODE_reg                               (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_BIST_MODE_reg))
#define  HDR_ALL_TOP_Composer_BL_BIST_MODE_composer_bl_bist_mode_shift           (0)
#define  HDR_ALL_TOP_Composer_BL_BIST_MODE_composer_bl_bist_mode_mask            (0x00000001)
#define  HDR_ALL_TOP_Composer_BL_BIST_MODE_composer_bl_bist_mode(data)           (0x00000001&(data))
#define  HDR_ALL_TOP_Composer_BL_BIST_MODE_get_composer_bl_bist_mode(data)       (0x00000001&(data))

#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE                                  0x1806B884
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_reg_addr                          "0xB806B884"
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_reg                               0xB806B884
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_inst_addr                         "0x000C"
#define  set_HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_reg(data)                     (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_reg)=data)
#define  get_HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_reg                           (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_reg))
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_composer_bl_drf_bist_mode_shift   (0)
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_composer_bl_drf_bist_mode_mask    (0x00000001)
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_composer_bl_drf_bist_mode(data)   (0x00000001&(data))
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_MODE_get_composer_bl_drf_bist_mode(data) (0x00000001&(data))

#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE                                  0x1806B888
#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_reg_addr                          "0xB806B888"
#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_reg                               0xB806B888
#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_inst_addr                         "0x000D"
#define  set_HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_reg(data)                     (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_reg)=data)
#define  get_HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_reg                           (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_reg))
#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_composer_bl_drf_test_resume_shift (0)
#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_composer_bl_drf_test_resume_mask  (0x00000001)
#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_composer_bl_drf_test_resume(data) (0x00000001&(data))
#define  HDR_ALL_TOP_Composer_BL_DRF_TEST_MODE_get_composer_bl_drf_test_resume(data) (0x00000001&(data))

#define  HDR_ALL_TOP_Composer_BL_BIST_DONE                                      0x1806B88C
#define  HDR_ALL_TOP_Composer_BL_BIST_DONE_reg_addr                              "0xB806B88C"
#define  HDR_ALL_TOP_Composer_BL_BIST_DONE_reg                                   0xB806B88C
#define  HDR_ALL_TOP_Composer_BL_BIST_DONE_inst_addr                             "0x000E"
#define  set_HDR_ALL_TOP_Composer_BL_BIST_DONE_reg(data)                         (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_BIST_DONE_reg)=data)
#define  get_HDR_ALL_TOP_Composer_BL_BIST_DONE_reg                               (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_BIST_DONE_reg))
#define  HDR_ALL_TOP_Composer_BL_BIST_DONE_composer_bl_bist_done_shift           (0)
#define  HDR_ALL_TOP_Composer_BL_BIST_DONE_composer_bl_bist_done_mask            (0x00000001)
#define  HDR_ALL_TOP_Composer_BL_BIST_DONE_composer_bl_bist_done(data)           (0x00000001&(data))
#define  HDR_ALL_TOP_Composer_BL_BIST_DONE_get_composer_bl_bist_done(data)       (0x00000001&(data))

#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE                                  0x1806B890
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_reg_addr                          "0xB806B890"
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_reg                               0xB806B890
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_inst_addr                         "0x000F"
#define  set_HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_reg(data)                     (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_reg)=data)
#define  get_HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_reg                           (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_reg))
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_composer_bl_drf_bist_done_shift   (0)
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_composer_bl_drf_bist_done_mask    (0x00000001)
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_composer_bl_drf_bist_done(data)   (0x00000001&(data))
#define  HDR_ALL_TOP_Composer_BL_DRF_BIST_DONE_get_composer_bl_drf_bist_done(data) (0x00000001&(data))

#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE                                0x1806B894
#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_reg_addr                        "0xB806B894"
#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_reg                             0xB806B894
#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_inst_addr                       "0x0010"
#define  set_HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_reg(data)                   (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_reg)=data)
#define  get_HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_reg                         (*((volatile unsigned int*)HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_reg))
#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_composer_bl_drf_start_pause_shift (0)
#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_composer_bl_drf_start_pause_mask (0x00000001)
#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_composer_bl_drf_start_pause(data) (0x00000001&(data))
#define  HDR_ALL_TOP_Composer_BL_DRF_START_PAUSE_get_composer_bl_drf_start_pause(data) (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE                                         0x1806B8B0
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_reg_addr                                 "0xB806B8B0"
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_reg                                      0xB806B8B0
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_inst_addr                                "0x0011"
#define  set_HDR_ALL_TOP_DM_MBIST_BIST_MODE_reg(data)                            (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_BIST_MODE_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_BIST_MODE_reg                                  (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_BIST_MODE_reg))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_tonemap_bist_mode_shift               (25)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_oetf_bist_mode_shift                  (24)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_eotf_bist_mode_shift                  (23)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_new_2_bist_mode_shift             (22)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_new_1_bist_mode_shift             (21)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_2_bist_mode_shift                 (20)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dmato3dtable_bist_mode_shift             (19)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_silut_bist_mode_shift              (18)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_plut_bist_mode_shift               (17)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_cdlut_bist_mode_shift              (16)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_3_bist_mode_shift                 (9)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_hist_1p_bist_mode_shift               (8)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_hist_2p_bist_mode_shift               (7)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_bist_mode_shift                   (6)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_2_bist_mode_shift                 (5)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_1_bist_mode_shift                 (4)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b02_bist_mode_shift                   (3)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0103_bist_mode_shift                 (2)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0101_2_bist_mode_shift               (1)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0101_1_bist_mode_shift               (0)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_tonemap_bist_mode_mask                (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_oetf_bist_mode_mask                   (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_eotf_bist_mode_mask                   (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_new_2_bist_mode_mask              (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_new_1_bist_mode_mask              (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_2_bist_mode_mask                  (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dmato3dtable_bist_mode_mask              (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_silut_bist_mode_mask               (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_plut_bist_mode_mask                (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_cdlut_bist_mode_mask               (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_3_bist_mode_mask                  (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_hist_1p_bist_mode_mask                (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_hist_2p_bist_mode_mask                (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_bist_mode_mask                    (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_2_bist_mode_mask                  (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_1_bist_mode_mask                  (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b02_bist_mode_mask                    (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0103_bist_mode_mask                  (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0101_2_bist_mode_mask                (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0101_1_bist_mode_mask                (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_tonemap_bist_mode(data)               (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_oetf_bist_mode(data)                  (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_eotf_bist_mode(data)                  (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_new_2_bist_mode(data)             (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_new_1_bist_mode(data)             (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_2_bist_mode(data)                 (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dmato3dtable_bist_mode(data)             (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_silut_bist_mode(data)              (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_plut_bist_mode(data)               (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_tchdr_cdlut_bist_mode(data)              (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_3_bist_mode(data)                 (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_hist_1p_bist_mode(data)               (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_hist_2p_bist_mode(data)               (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b05_bist_mode(data)                   (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_2_bist_mode(data)                 (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b03_1_bist_mode(data)                 (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b02_bist_mode(data)                   (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0103_bist_mode(data)                 (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0101_2_bist_mode(data)               (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_dm_b0101_1_bist_mode(data)               (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_tonemap_bist_mode(data)           ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_oetf_bist_mode(data)              ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_eotf_bist_mode(data)              ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b05_new_2_bist_mode(data)         ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b05_new_1_bist_mode(data)         ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b05_2_bist_mode(data)             ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dmato3dtable_bist_mode(data)         ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_tchdr_silut_bist_mode(data)          ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_tchdr_plut_bist_mode(data)           ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_tchdr_cdlut_bist_mode(data)          ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b03_3_bist_mode(data)             ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_hist_1p_bist_mode(data)           ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_hist_2p_bist_mode(data)           ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b05_bist_mode(data)               ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b03_2_bist_mode(data)             ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b03_1_bist_mode(data)             ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b02_bist_mode(data)               ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b0103_bist_mode(data)             ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b0101_2_bist_mode(data)           ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_BIST_MODE_get_dm_b0101_1_bist_mode(data)           (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE                                          0x1806B8B4
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_reg_addr                                  "0xB806B8B4"
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_reg                                       0xB806B8B4
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_inst_addr                                 "0x0012"
#define  set_HDR_ALL_TOP_DM_MBIST_DRF_MODE_reg(data)                             (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_MODE_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_DRF_MODE_reg                                   (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_MODE_reg))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_tonemap_drf_bist_mode_shift            (25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_oetf_drf_bist_mode_shift               (24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_eotf_drf_bist_mode_shift               (23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_new_2_drf_bist_mode_shift          (22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_new_1_drf_bist_mode_shift          (21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_2_drf_bist_mode_shift              (20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dmato3dtable_drf_bist_mode_shift          (19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_silut_drf_bist_mode_shift           (18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_plut_drf_bist_mode_shift            (17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_cdlut_drf_bist_mode_shift           (16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_3_drf_bist_mode_shift              (9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_hist_1p_drf_bist_mode_shift            (8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_hist_2p_drf_bist_mode_shift            (7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_drf_bist_mode_shift                (6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_2_drf_bist_mode_shift              (5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_1_drf_bist_mode_shift              (4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b02_drf_bist_mode_shift                (3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0103_drf_bist_mode_shift              (2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0101_2_drf_bist_mode_shift            (1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0101_1_drf_bist_mode_shift            (0)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_tonemap_drf_bist_mode_mask             (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_oetf_drf_bist_mode_mask                (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_eotf_drf_bist_mode_mask                (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_new_2_drf_bist_mode_mask           (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_new_1_drf_bist_mode_mask           (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_2_drf_bist_mode_mask               (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dmato3dtable_drf_bist_mode_mask           (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_silut_drf_bist_mode_mask            (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_plut_drf_bist_mode_mask             (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_cdlut_drf_bist_mode_mask            (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_3_drf_bist_mode_mask               (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_hist_1p_drf_bist_mode_mask             (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_hist_2p_drf_bist_mode_mask             (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_drf_bist_mode_mask                 (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_2_drf_bist_mode_mask               (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_1_drf_bist_mode_mask               (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b02_drf_bist_mode_mask                 (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0103_drf_bist_mode_mask               (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0101_2_drf_bist_mode_mask             (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0101_1_drf_bist_mode_mask             (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_tonemap_drf_bist_mode(data)            (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_oetf_drf_bist_mode(data)               (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_eotf_drf_bist_mode(data)               (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_new_2_drf_bist_mode(data)          (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_new_1_drf_bist_mode(data)          (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_2_drf_bist_mode(data)              (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dmato3dtable_drf_bist_mode(data)          (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_silut_drf_bist_mode(data)           (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_plut_drf_bist_mode(data)            (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_tchdr_cdlut_drf_bist_mode(data)           (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_3_drf_bist_mode(data)              (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_hist_1p_drf_bist_mode(data)            (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_hist_2p_drf_bist_mode(data)            (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b05_drf_bist_mode(data)                (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_2_drf_bist_mode(data)              (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b03_1_drf_bist_mode(data)              (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b02_drf_bist_mode(data)                (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0103_drf_bist_mode(data)              (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0101_2_drf_bist_mode(data)            (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_dm_b0101_1_drf_bist_mode(data)            (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_tonemap_drf_bist_mode(data)        ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_oetf_drf_bist_mode(data)           ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_eotf_drf_bist_mode(data)           ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b05_new_2_drf_bist_mode(data)      ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b05_new_1_drf_bist_mode(data)      ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b05_2_drf_bist_mode(data)          ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dmato3dtable_drf_bist_mode(data)      ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_tchdr_silut_drf_bist_mode(data)       ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_tchdr_plut_drf_bist_mode(data)        ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_tchdr_cdlut_drf_bist_mode(data)       ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b03_3_drf_bist_mode(data)          ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_hist_1p_drf_bist_mode(data)        ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_hist_2p_drf_bist_mode(data)        ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b05_drf_bist_mode(data)            ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b03_2_drf_bist_mode(data)          ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b03_1_drf_bist_mode(data)          ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b02_drf_bist_mode(data)            ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b0103_drf_bist_mode(data)          ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b0101_2_drf_bist_mode(data)        ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_MODE_get_dm_b0101_1_drf_bist_mode(data)        (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME                                        0x1806B8B8
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_reg_addr                                "0xB806B8B8"
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_reg                                     0xB806B8B8
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_inst_addr                               "0x0013"
#define  set_HDR_ALL_TOP_DM_MBIST_DRF_RESUME_reg(data)                           (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_RESUME_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_DRF_RESUME_reg                                 (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_RESUME_reg))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_tonemap_drf_test_resume_shift        (25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_oetf_drf_test_resume_shift           (24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_eotf_drf_test_resume_shift           (23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_new_2_drf_test_resume_shift      (22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_new_1_drf_test_resume_shift      (21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_2_drf_test_resume_shift          (20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dmato3dtable_drf_test_resume_shift      (19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_silut_drf_test_resume_shift       (18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_plut_drf_test_resume_shift        (17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_cdlut_drf_test_resume_shift       (16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_3_drf_test_resume_shift          (9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_hist_1p_drf_test_resume_shift        (8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_hist_2p_drf_test_resume_shift        (7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_drf_test_resume_shift            (6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_2_drf_test_resume_shift          (5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_1_drf_test_resume_shift          (4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b02_drf_test_resume_shift            (3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0103_drf_test_resume_shift          (2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0101_2_drf_test_resume_shift        (1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0101_1_drf_test_resume_shift        (0)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_tonemap_drf_test_resume_mask         (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_oetf_drf_test_resume_mask            (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_eotf_drf_test_resume_mask            (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_new_2_drf_test_resume_mask       (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_new_1_drf_test_resume_mask       (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_2_drf_test_resume_mask           (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dmato3dtable_drf_test_resume_mask       (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_silut_drf_test_resume_mask        (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_plut_drf_test_resume_mask         (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_cdlut_drf_test_resume_mask        (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_3_drf_test_resume_mask           (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_hist_1p_drf_test_resume_mask         (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_hist_2p_drf_test_resume_mask         (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_drf_test_resume_mask             (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_2_drf_test_resume_mask           (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_1_drf_test_resume_mask           (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b02_drf_test_resume_mask             (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0103_drf_test_resume_mask           (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0101_2_drf_test_resume_mask         (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0101_1_drf_test_resume_mask         (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_tonemap_drf_test_resume(data)        (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_oetf_drf_test_resume(data)           (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_eotf_drf_test_resume(data)           (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_new_2_drf_test_resume(data)      (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_new_1_drf_test_resume(data)      (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_2_drf_test_resume(data)          (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dmato3dtable_drf_test_resume(data)      (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_silut_drf_test_resume(data)       (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_plut_drf_test_resume(data)        (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_tchdr_cdlut_drf_test_resume(data)       (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_3_drf_test_resume(data)          (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_hist_1p_drf_test_resume(data)        (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_hist_2p_drf_test_resume(data)        (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b05_drf_test_resume(data)            (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_2_drf_test_resume(data)          (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b03_1_drf_test_resume(data)          (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b02_drf_test_resume(data)            (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0103_drf_test_resume(data)          (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0101_2_drf_test_resume(data)        (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_dm_b0101_1_drf_test_resume(data)        (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_tonemap_drf_test_resume(data)    ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_oetf_drf_test_resume(data)       ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_eotf_drf_test_resume(data)       ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b05_new_2_drf_test_resume(data)  ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b05_new_1_drf_test_resume(data)  ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b05_2_drf_test_resume(data)      ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dmato3dtable_drf_test_resume(data)  ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_tchdr_silut_drf_test_resume(data)   ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_tchdr_plut_drf_test_resume(data)    ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_tchdr_cdlut_drf_test_resume(data)   ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b03_3_drf_test_resume(data)      ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_hist_1p_drf_test_resume(data)    ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_hist_2p_drf_test_resume(data)    ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b05_drf_test_resume(data)        ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b03_2_drf_test_resume(data)      ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b03_1_drf_test_resume(data)      ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b02_drf_test_resume(data)        ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b0103_drf_test_resume(data)      ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b0101_2_drf_test_resume(data)    ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_RESUME_get_dm_b0101_1_drf_test_resume(data)    (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE                                         0x1806B8BC
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_reg_addr                                 "0xB806B8BC"
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_reg                                      0xB806B8BC
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_inst_addr                                "0x0014"
#define  set_HDR_ALL_TOP_DM_MBIST_BIST_DONE_reg(data)                            (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_BIST_DONE_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_BIST_DONE_reg                                  (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_BIST_DONE_reg))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_tonemap_bist_done_shift               (25)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_oetf_bist_done_shift                  (24)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_eotf_bist_done_shift                  (23)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_new_2_bist_done_shift             (22)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_new_1_bist_done_shift             (21)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_2_bist_done_shift                 (20)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dmato3dtable_bist_done_shift             (19)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_silut_bist_done_shift              (18)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_plut_bist_done_shift               (17)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_cdlut_bist_done_shift              (16)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_3_bist_done_shift                 (9)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_hist_1p_bist_done_shift               (8)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_hist_2p_bist_done_shift               (7)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_bist_done_shift                   (6)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_2_bist_done_shift                 (5)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_1_bist_done_shift                 (4)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b02_bist_done_shift                   (3)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0103_bist_done_shift                 (2)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0101_2_bist_done_shift               (1)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0101_1_bist_done_shift               (0)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_tonemap_bist_done_mask                (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_oetf_bist_done_mask                   (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_eotf_bist_done_mask                   (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_new_2_bist_done_mask              (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_new_1_bist_done_mask              (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_2_bist_done_mask                  (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dmato3dtable_bist_done_mask              (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_silut_bist_done_mask               (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_plut_bist_done_mask                (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_cdlut_bist_done_mask               (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_3_bist_done_mask                  (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_hist_1p_bist_done_mask                (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_hist_2p_bist_done_mask                (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_bist_done_mask                    (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_2_bist_done_mask                  (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_1_bist_done_mask                  (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b02_bist_done_mask                    (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0103_bist_done_mask                  (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0101_2_bist_done_mask                (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0101_1_bist_done_mask                (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_tonemap_bist_done(data)               (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_oetf_bist_done(data)                  (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_eotf_bist_done(data)                  (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_new_2_bist_done(data)             (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_new_1_bist_done(data)             (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_2_bist_done(data)                 (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dmato3dtable_bist_done(data)             (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_silut_bist_done(data)              (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_plut_bist_done(data)               (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_tchdr_cdlut_bist_done(data)              (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_3_bist_done(data)                 (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_hist_1p_bist_done(data)               (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_hist_2p_bist_done(data)               (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b05_bist_done(data)                   (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_2_bist_done(data)                 (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b03_1_bist_done(data)                 (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b02_bist_done(data)                   (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0103_bist_done(data)                 (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0101_2_bist_done(data)               (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_dm_b0101_1_bist_done(data)               (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_tonemap_bist_done(data)           ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_oetf_bist_done(data)              ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_eotf_bist_done(data)              ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b05_new_2_bist_done(data)         ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b05_new_1_bist_done(data)         ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b05_2_bist_done(data)             ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dmato3dtable_bist_done(data)         ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_tchdr_silut_bist_done(data)          ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_tchdr_plut_bist_done(data)           ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_tchdr_cdlut_bist_done(data)          ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b03_3_bist_done(data)             ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_hist_1p_bist_done(data)           ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_hist_2p_bist_done(data)           ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b05_bist_done(data)               ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b03_2_bist_done(data)             ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b03_1_bist_done(data)             ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b02_bist_done(data)               ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b0103_bist_done(data)             ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b0101_2_bist_done(data)           ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_BIST_DONE_get_dm_b0101_1_bist_done(data)           (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE                                     0x1806B8C0
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_reg_addr                             "0xB806B8C0"
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_reg                                  0xB806B8C0
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_inst_addr                            "0x0015"
#define  set_HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_reg(data)                        (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_reg                              (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_reg))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_tonemap_drf_bist_done_shift       (25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_oetf_drf_bist_done_shift          (24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_eotf_drf_bist_done_shift          (23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_new_2_drf_bist_done_shift     (22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_new_1_drf_bist_done_shift     (21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_2_drf_bist_done_shift         (20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dmato3dtable_drf_bist_done_shift     (19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_silut_drf_bist_done_shift      (18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_plut_drf_bist_done_shift       (17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_cdlut_drf_bist_done_shift      (16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_3_drf_bist_done_shift         (9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_hist_1p_drf_bist_done_shift       (8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_hist_2p_drf_bist_done_shift       (7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_drf_bist_done_shift           (6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_2_drf_bist_done_shift         (5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_1_drf_bist_done_shift         (4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b02_drf_bist_done_shift           (3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0103_drf_bist_done_shift         (2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0101_2_drf_bist_done_shift       (1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0101_1_drf_bist_done_shift       (0)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_tonemap_drf_bist_done_mask        (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_oetf_drf_bist_done_mask           (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_eotf_drf_bist_done_mask           (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_new_2_drf_bist_done_mask      (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_new_1_drf_bist_done_mask      (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_2_drf_bist_done_mask          (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dmato3dtable_drf_bist_done_mask      (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_silut_drf_bist_done_mask       (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_plut_drf_bist_done_mask        (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_cdlut_drf_bist_done_mask       (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_3_drf_bist_done_mask          (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_hist_1p_drf_bist_done_mask        (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_hist_2p_drf_bist_done_mask        (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_drf_bist_done_mask            (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_2_drf_bist_done_mask          (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_1_drf_bist_done_mask          (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b02_drf_bist_done_mask            (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0103_drf_bist_done_mask          (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0101_2_drf_bist_done_mask        (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0101_1_drf_bist_done_mask        (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_tonemap_drf_bist_done(data)       (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_oetf_drf_bist_done(data)          (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_eotf_drf_bist_done(data)          (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_new_2_drf_bist_done(data)     (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_new_1_drf_bist_done(data)     (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_2_drf_bist_done(data)         (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dmato3dtable_drf_bist_done(data)     (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_silut_drf_bist_done(data)      (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_plut_drf_bist_done(data)       (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_tchdr_cdlut_drf_bist_done(data)      (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_3_drf_bist_done(data)         (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_hist_1p_drf_bist_done(data)       (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_hist_2p_drf_bist_done(data)       (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b05_drf_bist_done(data)           (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_2_drf_bist_done(data)         (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b03_1_drf_bist_done(data)         (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b02_drf_bist_done(data)           (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0103_drf_bist_done(data)         (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0101_2_drf_bist_done(data)       (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_dm_b0101_1_drf_bist_done(data)       (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_tonemap_drf_bist_done(data)   ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_oetf_drf_bist_done(data)      ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_eotf_drf_bist_done(data)      ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b05_new_2_drf_bist_done(data) ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b05_new_1_drf_bist_done(data) ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b05_2_drf_bist_done(data)     ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dmato3dtable_drf_bist_done(data) ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_tchdr_silut_drf_bist_done(data)  ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_tchdr_plut_drf_bist_done(data)   ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_tchdr_cdlut_drf_bist_done(data)  ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b03_3_drf_bist_done(data)     ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_hist_1p_drf_bist_done(data)   ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_hist_2p_drf_bist_done(data)   ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b05_drf_bist_done(data)       ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b03_2_drf_bist_done(data)     ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b03_1_drf_bist_done(data)     ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b02_drf_bist_done(data)       ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b0103_drf_bist_done(data)     ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b0101_2_drf_bist_done(data)   ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_DONE_get_dm_b0101_1_drf_bist_done(data)   (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE                                         0x1806B8C4
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_reg_addr                                 "0xB806B8C4"
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_reg                                      0xB806B8C4
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_inst_addr                                "0x0016"
#define  set_HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_reg(data)                            (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_reg                                  (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_reg))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_tonemap_drf_start_pause_shift         (25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_oetf_drf_start_pause_shift            (24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_eotf_drf_start_pause_shift            (23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_new_2_drf_start_pause_shift       (22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_new_1_drf_start_pause_shift       (21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_2_drf_start_pause_shift           (20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dmato3dtable_drf_start_pause_shift       (19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_silut_drf_start_pause_shift        (18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_plut_drf_start_pause_shift         (17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_cdlut_drf_start_pause_shift        (16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_3_drf_start_pause_shift           (9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_hist_1p_drf_start_pause_shift         (8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_hist_2p_drf_start_pause_shift         (7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_drf_start_pause_shift             (6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_2_drf_start_pause_shift           (5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_1_drf_start_pause_shift           (4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b02_drf_start_pause_shift             (3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0103_drf_start_pause_shift           (2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0101_2_drf_start_pause_shift         (1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0101_1_drf_start_pause_shift         (0)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_tonemap_drf_start_pause_mask          (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_oetf_drf_start_pause_mask             (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_eotf_drf_start_pause_mask             (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_new_2_drf_start_pause_mask        (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_new_1_drf_start_pause_mask        (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_2_drf_start_pause_mask            (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dmato3dtable_drf_start_pause_mask        (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_silut_drf_start_pause_mask         (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_plut_drf_start_pause_mask          (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_cdlut_drf_start_pause_mask         (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_3_drf_start_pause_mask            (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_hist_1p_drf_start_pause_mask          (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_hist_2p_drf_start_pause_mask          (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_drf_start_pause_mask              (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_2_drf_start_pause_mask            (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_1_drf_start_pause_mask            (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b02_drf_start_pause_mask              (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0103_drf_start_pause_mask            (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0101_2_drf_start_pause_mask          (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0101_1_drf_start_pause_mask          (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_tonemap_drf_start_pause(data)         (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_oetf_drf_start_pause(data)            (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_eotf_drf_start_pause(data)            (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_new_2_drf_start_pause(data)       (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_new_1_drf_start_pause(data)       (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_2_drf_start_pause(data)           (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dmato3dtable_drf_start_pause(data)       (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_silut_drf_start_pause(data)        (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_plut_drf_start_pause(data)         (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_tchdr_cdlut_drf_start_pause(data)        (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_3_drf_start_pause(data)           (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_hist_1p_drf_start_pause(data)         (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_hist_2p_drf_start_pause(data)         (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b05_drf_start_pause(data)             (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_2_drf_start_pause(data)           (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b03_1_drf_start_pause(data)           (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b02_drf_start_pause(data)             (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0103_drf_start_pause(data)           (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0101_2_drf_start_pause(data)         (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_dm_b0101_1_drf_start_pause(data)         (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_tonemap_drf_start_pause(data)     ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_oetf_drf_start_pause(data)        ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_eotf_drf_start_pause(data)        ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b05_new_2_drf_start_pause(data)   ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b05_new_1_drf_start_pause(data)   ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b05_2_drf_start_pause(data)       ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dmato3dtable_drf_start_pause(data)   ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_tchdr_silut_drf_start_pause(data)    ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_tchdr_plut_drf_start_pause(data)     ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_tchdr_cdlut_drf_start_pause(data)    ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b03_3_drf_start_pause(data)       ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_hist_1p_drf_start_pause(data)     ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_hist_2p_drf_start_pause(data)     ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b05_drf_start_pause(data)         ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b03_2_drf_start_pause(data)       ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b03_1_drf_start_pause(data)       ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b02_drf_start_pause(data)         ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b0103_drf_start_pause(data)       ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b0101_2_drf_start_pause(data)     ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_PAUSE_get_dm_b0101_1_drf_start_pause(data)     (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP                                   0x1806B8C8
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_reg_addr                           "0xB806B8C8"
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_reg                                0xB806B8C8
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_inst_addr                          "0x0017"
#define  set_HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_reg(data)                      (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_reg                            (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_reg))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_tonemap_bist_fail_group_shift   (25)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_oetf_bist_fail_group_shift      (24)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_eotf_bist_fail_group_shift      (23)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_new_2_bist_fail_group_shift (22)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_new_1_bist_fail_group_shift (21)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_2_bist_fail_group_shift     (20)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dmato3dtable_bist_fail_group_shift (19)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_silut_bist_fail_group_shift  (18)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_plut_bist_fail_group_shift   (17)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_cdlut_bist_fail_group_shift  (16)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_3_bist_fail_group_shift     (9)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_hist_1p_bist_fail_group_shift   (8)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_hist_2p_bist_fail_group_shift   (7)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_bist_fail_group_shift       (6)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_2_bist_fail_group_shift     (5)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_1_bist_fail_group_shift     (4)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b02_bist_fail_group_shift       (3)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0103_bist_fail_group_shift     (2)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0101_2_bist_fail_group_shift   (1)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0101_1_bist_fail_group_shift   (0)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_tonemap_bist_fail_group_mask    (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_oetf_bist_fail_group_mask       (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_eotf_bist_fail_group_mask       (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_new_2_bist_fail_group_mask  (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_new_1_bist_fail_group_mask  (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_2_bist_fail_group_mask      (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dmato3dtable_bist_fail_group_mask  (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_silut_bist_fail_group_mask   (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_plut_bist_fail_group_mask    (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_cdlut_bist_fail_group_mask   (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_3_bist_fail_group_mask      (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_hist_1p_bist_fail_group_mask    (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_hist_2p_bist_fail_group_mask    (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_bist_fail_group_mask        (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_2_bist_fail_group_mask      (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_1_bist_fail_group_mask      (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b02_bist_fail_group_mask        (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0103_bist_fail_group_mask      (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0101_2_bist_fail_group_mask    (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0101_1_bist_fail_group_mask    (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_tonemap_bist_fail_group(data)   (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_oetf_bist_fail_group(data)      (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_eotf_bist_fail_group(data)      (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_new_2_bist_fail_group(data) (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_new_1_bist_fail_group(data) (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_2_bist_fail_group(data)     (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dmato3dtable_bist_fail_group(data) (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_silut_bist_fail_group(data)  (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_plut_bist_fail_group(data)   (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_tchdr_cdlut_bist_fail_group(data)  (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_3_bist_fail_group(data)     (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_hist_1p_bist_fail_group(data)   (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_hist_2p_bist_fail_group(data)   (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b05_bist_fail_group(data)       (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_2_bist_fail_group(data)     (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b03_1_bist_fail_group(data)     (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b02_bist_fail_group(data)       (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0103_bist_fail_group(data)     (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0101_2_bist_fail_group(data)   (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_dm_b0101_1_bist_fail_group(data)   (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_tonemap_bist_fail_group(data) ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_oetf_bist_fail_group(data)  ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_eotf_bist_fail_group(data)  ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b05_new_2_bist_fail_group(data) ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b05_new_1_bist_fail_group(data) ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b05_2_bist_fail_group(data) ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dmato3dtable_bist_fail_group(data) ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_tchdr_silut_bist_fail_group(data) ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_tchdr_plut_bist_fail_group(data) ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_tchdr_cdlut_bist_fail_group(data) ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b03_3_bist_fail_group(data) ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_hist_1p_bist_fail_group(data) ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_hist_2p_bist_fail_group(data) ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b05_bist_fail_group(data)   ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b03_2_bist_fail_group(data) ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b03_1_bist_fail_group(data) ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b02_bist_fail_group(data)   ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b0103_bist_fail_group(data) ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b0101_2_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_BIST_FAIL_GROUP_get_dm_b0101_1_bist_fail_group(data) (0x00000001&(data))

#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP                               0x1806B8CC
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_reg_addr                       "0xB806B8CC"
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_reg                            0xB806B8CC
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_inst_addr                      "0x0018"
#define  set_HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_reg(data)                  (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_reg)=data)
#define  get_HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_reg                        (*((volatile unsigned int*)HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_reg))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_tonemap_drf_bist_fail_group_shift (25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_oetf_drf_bist_fail_group_shift (24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_eotf_drf_bist_fail_group_shift (23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_new_2_drf_bist_fail_group_shift (22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_new_1_drf_bist_fail_group_shift (21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_2_drf_bist_fail_group_shift (20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dmato3dtable_drf_bist_fail_group_shift (19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_silut_drf_bist_fail_group_shift (18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_plut_drf_bist_fail_group_shift (17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_cdlut_drf_bist_fail_group_shift (16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_3_drf_bist_fail_group_shift (9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_hist_1p_drf_bist_fail_group_shift (8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_hist_2p_drf_bist_fail_group_shift (7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_drf_bist_fail_group_shift (6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_2_drf_bist_fail_group_shift (5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_1_drf_bist_fail_group_shift (4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b02_drf_bist_fail_group_shift (3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0103_drf_bist_fail_group_shift (2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0101_2_drf_bist_fail_group_shift (1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0101_1_drf_bist_fail_group_shift (0)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_tonemap_drf_bist_fail_group_mask (0x02000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_oetf_drf_bist_fail_group_mask (0x01000000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_eotf_drf_bist_fail_group_mask (0x00800000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_new_2_drf_bist_fail_group_mask (0x00400000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_new_1_drf_bist_fail_group_mask (0x00200000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_2_drf_bist_fail_group_mask (0x00100000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dmato3dtable_drf_bist_fail_group_mask (0x00080000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_silut_drf_bist_fail_group_mask (0x00040000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_plut_drf_bist_fail_group_mask (0x00020000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_cdlut_drf_bist_fail_group_mask (0x00010000)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_3_drf_bist_fail_group_mask (0x00000200)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_hist_1p_drf_bist_fail_group_mask (0x00000100)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_hist_2p_drf_bist_fail_group_mask (0x00000080)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_drf_bist_fail_group_mask (0x00000040)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_2_drf_bist_fail_group_mask (0x00000020)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_1_drf_bist_fail_group_mask (0x00000010)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b02_drf_bist_fail_group_mask (0x00000008)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0103_drf_bist_fail_group_mask (0x00000004)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0101_2_drf_bist_fail_group_mask (0x00000002)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0101_1_drf_bist_fail_group_mask (0x00000001)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_tonemap_drf_bist_fail_group(data) (0x02000000&((data)<<25))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_oetf_drf_bist_fail_group(data) (0x01000000&((data)<<24))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_eotf_drf_bist_fail_group(data) (0x00800000&((data)<<23))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_new_2_drf_bist_fail_group(data) (0x00400000&((data)<<22))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_new_1_drf_bist_fail_group(data) (0x00200000&((data)<<21))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_2_drf_bist_fail_group(data) (0x00100000&((data)<<20))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dmato3dtable_drf_bist_fail_group(data) (0x00080000&((data)<<19))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_silut_drf_bist_fail_group(data) (0x00040000&((data)<<18))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_plut_drf_bist_fail_group(data) (0x00020000&((data)<<17))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_tchdr_cdlut_drf_bist_fail_group(data) (0x00010000&((data)<<16))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_3_drf_bist_fail_group(data) (0x00000200&((data)<<9))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_hist_1p_drf_bist_fail_group(data) (0x00000100&((data)<<8))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_hist_2p_drf_bist_fail_group(data) (0x00000080&((data)<<7))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b05_drf_bist_fail_group(data) (0x00000040&((data)<<6))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_2_drf_bist_fail_group(data) (0x00000020&((data)<<5))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b03_1_drf_bist_fail_group(data) (0x00000010&((data)<<4))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b02_drf_bist_fail_group(data) (0x00000008&((data)<<3))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0103_drf_bist_fail_group(data) (0x00000004&((data)<<2))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0101_2_drf_bist_fail_group(data) (0x00000002&((data)<<1))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_dm_b0101_1_drf_bist_fail_group(data) (0x00000001&(data))
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_tonemap_drf_bist_fail_group(data) ((0x02000000&(data))>>25)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_oetf_drf_bist_fail_group(data) ((0x01000000&(data))>>24)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_eotf_drf_bist_fail_group(data) ((0x00800000&(data))>>23)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b05_new_2_drf_bist_fail_group(data) ((0x00400000&(data))>>22)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b05_new_1_drf_bist_fail_group(data) ((0x00200000&(data))>>21)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b05_2_drf_bist_fail_group(data) ((0x00100000&(data))>>20)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dmato3dtable_drf_bist_fail_group(data) ((0x00080000&(data))>>19)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_tchdr_silut_drf_bist_fail_group(data) ((0x00040000&(data))>>18)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_tchdr_plut_drf_bist_fail_group(data) ((0x00020000&(data))>>17)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_tchdr_cdlut_drf_bist_fail_group(data) ((0x00010000&(data))>>16)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b03_3_drf_bist_fail_group(data) ((0x00000200&(data))>>9)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_hist_1p_drf_bist_fail_group(data) ((0x00000100&(data))>>8)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_hist_2p_drf_bist_fail_group(data) ((0x00000080&(data))>>7)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b05_drf_bist_fail_group(data) ((0x00000040&(data))>>6)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b03_2_drf_bist_fail_group(data) ((0x00000020&(data))>>5)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b03_1_drf_bist_fail_group(data) ((0x00000010&(data))>>4)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b02_drf_bist_fail_group(data) ((0x00000008&(data))>>3)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b0103_drf_bist_fail_group(data) ((0x00000004&(data))>>2)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b0101_2_drf_bist_fail_group(data) ((0x00000002&(data))>>1)
#define  HDR_ALL_TOP_DM_MBIST_DRF_BIST_FAIL_GROUP_get_dm_b0101_1_drf_bist_fail_group(data) (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDR_ALL_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  hdr1_in_sel:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  end_out_mux:1;
        RBus_UInt32  sel_sign_tc:1;
        RBus_UInt32  cr_dly_cb_tc:1;
        RBus_UInt32  dup_tc:1;
        RBus_UInt32  en_422to444_tc:1;
        RBus_UInt32  sel_sign_1:1;
        RBus_UInt32  cr_dly_cb_1:1;
        RBus_UInt32  dup_1:1;
        RBus_UInt32  en_422to444_1:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  hdmi_in_mux:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  dolby_mode:4;
    };
}hdr_all_top_top_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dolby_vsize:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  dolby_hsize:13;
    };
}hdr_all_top_top_pic_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dolby_h_total:13;
    };
}hdr_all_top_top_pic_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  dolby_v_den_sta:8;
        RBus_UInt32  res2:4;
        RBus_UInt32  dolby_h_den_sta:12;
    };
}hdr_all_top_top_pic_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dolby_v_read_sel:1;
        RBus_UInt32  res1:29;
        RBus_UInt32  dolby_double_apply:1;
        RBus_UInt32  dolby_double_en:1;
    };
}hdr_all_top_top_d_buf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  efuse_in:3;
        RBus_UInt32  res2:1;
    };
}hdr_all_top_sensio_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  active_end_cnt:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  active_start_cnt:13;
    };
}hdr_all_top_dma_apply_actvie_lc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  current_cnt:13;
    };
}hdr_all_top_dma_apply_lc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  dmato3dtable_fw_write_not_finish:1;
        RBus_UInt32  dmato3dtable_fw_write:1;
        RBus_UInt32  dmato3dtable_fw_mode:1;
    };
}hdr_all_top_dma_fw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  force_ctsfifo_rstn:1;
        RBus_UInt32  en_ctsfifo_vsrst:1;
        RBus_UInt32  en_ctsfifo_bypass:1;
        RBus_UInt32  res2:8;
    };
}hdr_all_top_hdr_cts_fifo_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:10;
        RBus_UInt32  hs_width:6;
        RBus_UInt32  res2:16;
    };
}hdr_all_top_decomp_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  composer_bl_bist_mode:1;
    };
}hdr_all_top_composer_bl_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  composer_bl_drf_bist_mode:1;
    };
}hdr_all_top_composer_bl_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  composer_bl_drf_test_resume:1;
    };
}hdr_all_top_composer_bl_drf_test_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  composer_bl_bist_done:1;
    };
}hdr_all_top_composer_bl_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  composer_bl_drf_bist_done:1;
    };
}hdr_all_top_composer_bl_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  composer_bl_drf_start_pause:1;
    };
}hdr_all_top_composer_bl_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_bist_mode:1;
        RBus_UInt32  dm_oetf_bist_mode:1;
        RBus_UInt32  dm_eotf_bist_mode:1;
        RBus_UInt32  dm_b05_new_2_bist_mode:1;
        RBus_UInt32  dm_b05_new_1_bist_mode:1;
        RBus_UInt32  dm_b05_2_bist_mode:1;
        RBus_UInt32  dmato3dtable_bist_mode:1;
        RBus_UInt32  tchdr_silut_bist_mode:1;
        RBus_UInt32  tchdr_plut_bist_mode:1;
        RBus_UInt32  tchdr_cdlut_bist_mode:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_bist_mode:1;
        RBus_UInt32  dm_hist_1p_bist_mode:1;
        RBus_UInt32  dm_hist_2p_bist_mode:1;
        RBus_UInt32  dm_b05_bist_mode:1;
        RBus_UInt32  dm_b03_2_bist_mode:1;
        RBus_UInt32  dm_b03_1_bist_mode:1;
        RBus_UInt32  dm_b02_bist_mode:1;
        RBus_UInt32  dm_b0103_bist_mode:1;
        RBus_UInt32  dm_b0101_2_bist_mode:1;
        RBus_UInt32  dm_b0101_1_bist_mode:1;
    };
}hdr_all_top_dm_mbist_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_drf_bist_mode:1;
        RBus_UInt32  dm_oetf_drf_bist_mode:1;
        RBus_UInt32  dm_eotf_drf_bist_mode:1;
        RBus_UInt32  dm_b05_new_2_drf_bist_mode:1;
        RBus_UInt32  dm_b05_new_1_drf_bist_mode:1;
        RBus_UInt32  dm_b05_2_drf_bist_mode:1;
        RBus_UInt32  dmato3dtable_drf_bist_mode:1;
        RBus_UInt32  tchdr_silut_drf_bist_mode:1;
        RBus_UInt32  tchdr_plut_drf_bist_mode:1;
        RBus_UInt32  tchdr_cdlut_drf_bist_mode:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_drf_bist_mode:1;
        RBus_UInt32  dm_hist_1p_drf_bist_mode:1;
        RBus_UInt32  dm_hist_2p_drf_bist_mode:1;
        RBus_UInt32  dm_b05_drf_bist_mode:1;
        RBus_UInt32  dm_b03_2_drf_bist_mode:1;
        RBus_UInt32  dm_b03_1_drf_bist_mode:1;
        RBus_UInt32  dm_b02_drf_bist_mode:1;
        RBus_UInt32  dm_b0103_drf_bist_mode:1;
        RBus_UInt32  dm_b0101_2_drf_bist_mode:1;
        RBus_UInt32  dm_b0101_1_drf_bist_mode:1;
    };
}hdr_all_top_dm_mbist_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_drf_test_resume:1;
        RBus_UInt32  dm_oetf_drf_test_resume:1;
        RBus_UInt32  dm_eotf_drf_test_resume:1;
        RBus_UInt32  dm_b05_new_2_drf_test_resume:1;
        RBus_UInt32  dm_b05_new_1_drf_test_resume:1;
        RBus_UInt32  dm_b05_2_drf_test_resume:1;
        RBus_UInt32  dmato3dtable_drf_test_resume:1;
        RBus_UInt32  tchdr_silut_drf_test_resume:1;
        RBus_UInt32  tchdr_plut_drf_test_resume:1;
        RBus_UInt32  tchdr_cdlut_drf_test_resume:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_drf_test_resume:1;
        RBus_UInt32  dm_hist_1p_drf_test_resume:1;
        RBus_UInt32  dm_hist_2p_drf_test_resume:1;
        RBus_UInt32  dm_b05_drf_test_resume:1;
        RBus_UInt32  dm_b03_2_drf_test_resume:1;
        RBus_UInt32  dm_b03_1_drf_test_resume:1;
        RBus_UInt32  dm_b02_drf_test_resume:1;
        RBus_UInt32  dm_b0103_drf_test_resume:1;
        RBus_UInt32  dm_b0101_2_drf_test_resume:1;
        RBus_UInt32  dm_b0101_1_drf_test_resume:1;
    };
}hdr_all_top_dm_mbist_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_bist_done:1;
        RBus_UInt32  dm_oetf_bist_done:1;
        RBus_UInt32  dm_eotf_bist_done:1;
        RBus_UInt32  dm_b05_new_2_bist_done:1;
        RBus_UInt32  dm_b05_new_1_bist_done:1;
        RBus_UInt32  dm_b05_2_bist_done:1;
        RBus_UInt32  dmato3dtable_bist_done:1;
        RBus_UInt32  tchdr_silut_bist_done:1;
        RBus_UInt32  tchdr_plut_bist_done:1;
        RBus_UInt32  tchdr_cdlut_bist_done:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_bist_done:1;
        RBus_UInt32  dm_hist_1p_bist_done:1;
        RBus_UInt32  dm_hist_2p_bist_done:1;
        RBus_UInt32  dm_b05_bist_done:1;
        RBus_UInt32  dm_b03_2_bist_done:1;
        RBus_UInt32  dm_b03_1_bist_done:1;
        RBus_UInt32  dm_b02_bist_done:1;
        RBus_UInt32  dm_b0103_bist_done:1;
        RBus_UInt32  dm_b0101_2_bist_done:1;
        RBus_UInt32  dm_b0101_1_bist_done:1;
    };
}hdr_all_top_dm_mbist_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_drf_bist_done:1;
        RBus_UInt32  dm_oetf_drf_bist_done:1;
        RBus_UInt32  dm_eotf_drf_bist_done:1;
        RBus_UInt32  dm_b05_new_2_drf_bist_done:1;
        RBus_UInt32  dm_b05_new_1_drf_bist_done:1;
        RBus_UInt32  dm_b05_2_drf_bist_done:1;
        RBus_UInt32  dmato3dtable_drf_bist_done:1;
        RBus_UInt32  tchdr_silut_drf_bist_done:1;
        RBus_UInt32  tchdr_plut_drf_bist_done:1;
        RBus_UInt32  tchdr_cdlut_drf_bist_done:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_drf_bist_done:1;
        RBus_UInt32  dm_hist_1p_drf_bist_done:1;
        RBus_UInt32  dm_hist_2p_drf_bist_done:1;
        RBus_UInt32  dm_b05_drf_bist_done:1;
        RBus_UInt32  dm_b03_2_drf_bist_done:1;
        RBus_UInt32  dm_b03_1_drf_bist_done:1;
        RBus_UInt32  dm_b02_drf_bist_done:1;
        RBus_UInt32  dm_b0103_drf_bist_done:1;
        RBus_UInt32  dm_b0101_2_drf_bist_done:1;
        RBus_UInt32  dm_b0101_1_drf_bist_done:1;
    };
}hdr_all_top_dm_mbist_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_drf_start_pause:1;
        RBus_UInt32  dm_oetf_drf_start_pause:1;
        RBus_UInt32  dm_eotf_drf_start_pause:1;
        RBus_UInt32  dm_b05_new_2_drf_start_pause:1;
        RBus_UInt32  dm_b05_new_1_drf_start_pause:1;
        RBus_UInt32  dm_b05_2_drf_start_pause:1;
        RBus_UInt32  dmato3dtable_drf_start_pause:1;
        RBus_UInt32  tchdr_silut_drf_start_pause:1;
        RBus_UInt32  tchdr_plut_drf_start_pause:1;
        RBus_UInt32  tchdr_cdlut_drf_start_pause:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_drf_start_pause:1;
        RBus_UInt32  dm_hist_1p_drf_start_pause:1;
        RBus_UInt32  dm_hist_2p_drf_start_pause:1;
        RBus_UInt32  dm_b05_drf_start_pause:1;
        RBus_UInt32  dm_b03_2_drf_start_pause:1;
        RBus_UInt32  dm_b03_1_drf_start_pause:1;
        RBus_UInt32  dm_b02_drf_start_pause:1;
        RBus_UInt32  dm_b0103_drf_start_pause:1;
        RBus_UInt32  dm_b0101_2_drf_start_pause:1;
        RBus_UInt32  dm_b0101_1_drf_start_pause:1;
    };
}hdr_all_top_dm_mbist_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_bist_fail_group:1;
        RBus_UInt32  dm_oetf_bist_fail_group:1;
        RBus_UInt32  dm_eotf_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_2_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_1_bist_fail_group:1;
        RBus_UInt32  dm_b05_2_bist_fail_group:1;
        RBus_UInt32  dmato3dtable_bist_fail_group:1;
        RBus_UInt32  tchdr_silut_bist_fail_group:1;
        RBus_UInt32  tchdr_plut_bist_fail_group:1;
        RBus_UInt32  tchdr_cdlut_bist_fail_group:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_bist_fail_group:1;
        RBus_UInt32  dm_hist_1p_bist_fail_group:1;
        RBus_UInt32  dm_hist_2p_bist_fail_group:1;
        RBus_UInt32  dm_b05_bist_fail_group:1;
        RBus_UInt32  dm_b03_2_bist_fail_group:1;
        RBus_UInt32  dm_b03_1_bist_fail_group:1;
        RBus_UInt32  dm_b02_bist_fail_group:1;
        RBus_UInt32  dm_b0103_bist_fail_group:1;
        RBus_UInt32  dm_b0101_2_bist_fail_group:1;
        RBus_UInt32  dm_b0101_1_bist_fail_group:1;
    };
}hdr_all_top_dm_mbist_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  dm_tonemap_drf_bist_fail_group:1;
        RBus_UInt32  dm_oetf_drf_bist_fail_group:1;
        RBus_UInt32  dm_eotf_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_2_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_1_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_2_drf_bist_fail_group:1;
        RBus_UInt32  dmato3dtable_drf_bist_fail_group:1;
        RBus_UInt32  tchdr_silut_drf_bist_fail_group:1;
        RBus_UInt32  tchdr_plut_drf_bist_fail_group:1;
        RBus_UInt32  tchdr_cdlut_drf_bist_fail_group:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  dm_b03_3_drf_bist_fail_group:1;
        RBus_UInt32  dm_hist_1p_drf_bist_fail_group:1;
        RBus_UInt32  dm_hist_2p_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_drf_bist_fail_group:1;
        RBus_UInt32  dm_b03_2_drf_bist_fail_group:1;
        RBus_UInt32  dm_b03_1_drf_bist_fail_group:1;
        RBus_UInt32  dm_b02_drf_bist_fail_group:1;
        RBus_UInt32  dm_b0103_drf_bist_fail_group:1;
        RBus_UInt32  dm_b0101_2_drf_bist_fail_group:1;
        RBus_UInt32  dm_b0101_1_drf_bist_fail_group:1;
    };
}hdr_all_top_dm_mbist_drf_bist_fail_group_RBUS;

#else //apply LITTLE_ENDIAN

//======HDR_ALL_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dolby_mode:4;
        RBus_UInt32  res1:1;
        RBus_UInt32  hdmi_in_mux:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  en_422to444_1:1;
        RBus_UInt32  dup_1:1;
        RBus_UInt32  cr_dly_cb_1:1;
        RBus_UInt32  sel_sign_1:1;
        RBus_UInt32  en_422to444_tc:1;
        RBus_UInt32  dup_tc:1;
        RBus_UInt32  cr_dly_cb_tc:1;
        RBus_UInt32  sel_sign_tc:1;
        RBus_UInt32  end_out_mux:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  hdr1_in_sel:1;
        RBus_UInt32  res4:13;
    };
}hdr_all_top_top_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dolby_hsize:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  dolby_vsize:12;
        RBus_UInt32  res2:4;
    };
}hdr_all_top_top_pic_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dolby_h_total:13;
        RBus_UInt32  res1:19;
    };
}hdr_all_top_top_pic_total_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dolby_h_den_sta:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  dolby_v_den_sta:8;
        RBus_UInt32  res2:8;
    };
}hdr_all_top_top_pic_sta_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dolby_double_en:1;
        RBus_UInt32  dolby_double_apply:1;
        RBus_UInt32  res1:29;
        RBus_UInt32  dolby_v_read_sel:1;
    };
}hdr_all_top_top_d_buf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  efuse_in:3;
        RBus_UInt32  res2:28;
    };
}hdr_all_top_sensio_fifo_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  active_start_cnt:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  active_end_cnt:13;
        RBus_UInt32  res2:3;
    };
}hdr_all_top_dma_apply_actvie_lc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  current_cnt:13;
        RBus_UInt32  res1:19;
    };
}hdr_all_top_dma_apply_lc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dmato3dtable_fw_mode:1;
        RBus_UInt32  dmato3dtable_fw_write:1;
        RBus_UInt32  dmato3dtable_fw_write_not_finish:1;
        RBus_UInt32  res1:29;
    };
}hdr_all_top_dma_fw_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  en_ctsfifo_bypass:1;
        RBus_UInt32  en_ctsfifo_vsrst:1;
        RBus_UInt32  force_ctsfifo_rstn:1;
        RBus_UInt32  res2:21;
    };
}hdr_all_top_hdr_cts_fifo_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  hs_width:6;
        RBus_UInt32  res2:10;
    };
}hdr_all_top_decomp_ctrl_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  composer_bl_bist_mode:1;
        RBus_UInt32  res1:31;
    };
}hdr_all_top_composer_bl_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  composer_bl_drf_bist_mode:1;
        RBus_UInt32  res1:31;
    };
}hdr_all_top_composer_bl_drf_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  composer_bl_drf_test_resume:1;
        RBus_UInt32  res1:31;
    };
}hdr_all_top_composer_bl_drf_test_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  composer_bl_bist_done:1;
        RBus_UInt32  res1:31;
    };
}hdr_all_top_composer_bl_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  composer_bl_drf_bist_done:1;
        RBus_UInt32  res1:31;
    };
}hdr_all_top_composer_bl_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  composer_bl_drf_start_pause:1;
        RBus_UInt32  res1:31;
    };
}hdr_all_top_composer_bl_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_bist_mode:1;
        RBus_UInt32  dm_b0101_2_bist_mode:1;
        RBus_UInt32  dm_b0103_bist_mode:1;
        RBus_UInt32  dm_b02_bist_mode:1;
        RBus_UInt32  dm_b03_1_bist_mode:1;
        RBus_UInt32  dm_b03_2_bist_mode:1;
        RBus_UInt32  dm_b05_bist_mode:1;
        RBus_UInt32  dm_hist_2p_bist_mode:1;
        RBus_UInt32  dm_hist_1p_bist_mode:1;
        RBus_UInt32  dm_b03_3_bist_mode:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_bist_mode:1;
        RBus_UInt32  tchdr_plut_bist_mode:1;
        RBus_UInt32  tchdr_silut_bist_mode:1;
        RBus_UInt32  dmato3dtable_bist_mode:1;
        RBus_UInt32  dm_b05_2_bist_mode:1;
        RBus_UInt32  dm_b05_new_1_bist_mode:1;
        RBus_UInt32  dm_b05_new_2_bist_mode:1;
        RBus_UInt32  dm_eotf_bist_mode:1;
        RBus_UInt32  dm_oetf_bist_mode:1;
        RBus_UInt32  dm_tonemap_bist_mode:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_drf_bist_mode:1;
        RBus_UInt32  dm_b0101_2_drf_bist_mode:1;
        RBus_UInt32  dm_b0103_drf_bist_mode:1;
        RBus_UInt32  dm_b02_drf_bist_mode:1;
        RBus_UInt32  dm_b03_1_drf_bist_mode:1;
        RBus_UInt32  dm_b03_2_drf_bist_mode:1;
        RBus_UInt32  dm_b05_drf_bist_mode:1;
        RBus_UInt32  dm_hist_2p_drf_bist_mode:1;
        RBus_UInt32  dm_hist_1p_drf_bist_mode:1;
        RBus_UInt32  dm_b03_3_drf_bist_mode:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_drf_bist_mode:1;
        RBus_UInt32  tchdr_plut_drf_bist_mode:1;
        RBus_UInt32  tchdr_silut_drf_bist_mode:1;
        RBus_UInt32  dmato3dtable_drf_bist_mode:1;
        RBus_UInt32  dm_b05_2_drf_bist_mode:1;
        RBus_UInt32  dm_b05_new_1_drf_bist_mode:1;
        RBus_UInt32  dm_b05_new_2_drf_bist_mode:1;
        RBus_UInt32  dm_eotf_drf_bist_mode:1;
        RBus_UInt32  dm_oetf_drf_bist_mode:1;
        RBus_UInt32  dm_tonemap_drf_bist_mode:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_drf_test_resume:1;
        RBus_UInt32  dm_b0101_2_drf_test_resume:1;
        RBus_UInt32  dm_b0103_drf_test_resume:1;
        RBus_UInt32  dm_b02_drf_test_resume:1;
        RBus_UInt32  dm_b03_1_drf_test_resume:1;
        RBus_UInt32  dm_b03_2_drf_test_resume:1;
        RBus_UInt32  dm_b05_drf_test_resume:1;
        RBus_UInt32  dm_hist_2p_drf_test_resume:1;
        RBus_UInt32  dm_hist_1p_drf_test_resume:1;
        RBus_UInt32  dm_b03_3_drf_test_resume:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_drf_test_resume:1;
        RBus_UInt32  tchdr_plut_drf_test_resume:1;
        RBus_UInt32  tchdr_silut_drf_test_resume:1;
        RBus_UInt32  dmato3dtable_drf_test_resume:1;
        RBus_UInt32  dm_b05_2_drf_test_resume:1;
        RBus_UInt32  dm_b05_new_1_drf_test_resume:1;
        RBus_UInt32  dm_b05_new_2_drf_test_resume:1;
        RBus_UInt32  dm_eotf_drf_test_resume:1;
        RBus_UInt32  dm_oetf_drf_test_resume:1;
        RBus_UInt32  dm_tonemap_drf_test_resume:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_drf_resume_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_bist_done:1;
        RBus_UInt32  dm_b0101_2_bist_done:1;
        RBus_UInt32  dm_b0103_bist_done:1;
        RBus_UInt32  dm_b02_bist_done:1;
        RBus_UInt32  dm_b03_1_bist_done:1;
        RBus_UInt32  dm_b03_2_bist_done:1;
        RBus_UInt32  dm_b05_bist_done:1;
        RBus_UInt32  dm_hist_2p_bist_done:1;
        RBus_UInt32  dm_hist_1p_bist_done:1;
        RBus_UInt32  dm_b03_3_bist_done:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_bist_done:1;
        RBus_UInt32  tchdr_plut_bist_done:1;
        RBus_UInt32  tchdr_silut_bist_done:1;
        RBus_UInt32  dmato3dtable_bist_done:1;
        RBus_UInt32  dm_b05_2_bist_done:1;
        RBus_UInt32  dm_b05_new_1_bist_done:1;
        RBus_UInt32  dm_b05_new_2_bist_done:1;
        RBus_UInt32  dm_eotf_bist_done:1;
        RBus_UInt32  dm_oetf_bist_done:1;
        RBus_UInt32  dm_tonemap_bist_done:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_drf_bist_done:1;
        RBus_UInt32  dm_b0101_2_drf_bist_done:1;
        RBus_UInt32  dm_b0103_drf_bist_done:1;
        RBus_UInt32  dm_b02_drf_bist_done:1;
        RBus_UInt32  dm_b03_1_drf_bist_done:1;
        RBus_UInt32  dm_b03_2_drf_bist_done:1;
        RBus_UInt32  dm_b05_drf_bist_done:1;
        RBus_UInt32  dm_hist_2p_drf_bist_done:1;
        RBus_UInt32  dm_hist_1p_drf_bist_done:1;
        RBus_UInt32  dm_b03_3_drf_bist_done:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_drf_bist_done:1;
        RBus_UInt32  tchdr_plut_drf_bist_done:1;
        RBus_UInt32  tchdr_silut_drf_bist_done:1;
        RBus_UInt32  dmato3dtable_drf_bist_done:1;
        RBus_UInt32  dm_b05_2_drf_bist_done:1;
        RBus_UInt32  dm_b05_new_1_drf_bist_done:1;
        RBus_UInt32  dm_b05_new_2_drf_bist_done:1;
        RBus_UInt32  dm_eotf_drf_bist_done:1;
        RBus_UInt32  dm_oetf_drf_bist_done:1;
        RBus_UInt32  dm_tonemap_drf_bist_done:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_drf_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_drf_start_pause:1;
        RBus_UInt32  dm_b0101_2_drf_start_pause:1;
        RBus_UInt32  dm_b0103_drf_start_pause:1;
        RBus_UInt32  dm_b02_drf_start_pause:1;
        RBus_UInt32  dm_b03_1_drf_start_pause:1;
        RBus_UInt32  dm_b03_2_drf_start_pause:1;
        RBus_UInt32  dm_b05_drf_start_pause:1;
        RBus_UInt32  dm_hist_2p_drf_start_pause:1;
        RBus_UInt32  dm_hist_1p_drf_start_pause:1;
        RBus_UInt32  dm_b03_3_drf_start_pause:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_drf_start_pause:1;
        RBus_UInt32  tchdr_plut_drf_start_pause:1;
        RBus_UInt32  tchdr_silut_drf_start_pause:1;
        RBus_UInt32  dmato3dtable_drf_start_pause:1;
        RBus_UInt32  dm_b05_2_drf_start_pause:1;
        RBus_UInt32  dm_b05_new_1_drf_start_pause:1;
        RBus_UInt32  dm_b05_new_2_drf_start_pause:1;
        RBus_UInt32  dm_eotf_drf_start_pause:1;
        RBus_UInt32  dm_oetf_drf_start_pause:1;
        RBus_UInt32  dm_tonemap_drf_start_pause:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_drf_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_bist_fail_group:1;
        RBus_UInt32  dm_b0101_2_bist_fail_group:1;
        RBus_UInt32  dm_b0103_bist_fail_group:1;
        RBus_UInt32  dm_b02_bist_fail_group:1;
        RBus_UInt32  dm_b03_1_bist_fail_group:1;
        RBus_UInt32  dm_b03_2_bist_fail_group:1;
        RBus_UInt32  dm_b05_bist_fail_group:1;
        RBus_UInt32  dm_hist_2p_bist_fail_group:1;
        RBus_UInt32  dm_hist_1p_bist_fail_group:1;
        RBus_UInt32  dm_b03_3_bist_fail_group:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_bist_fail_group:1;
        RBus_UInt32  tchdr_plut_bist_fail_group:1;
        RBus_UInt32  tchdr_silut_bist_fail_group:1;
        RBus_UInt32  dmato3dtable_bist_fail_group:1;
        RBus_UInt32  dm_b05_2_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_1_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_2_bist_fail_group:1;
        RBus_UInt32  dm_eotf_bist_fail_group:1;
        RBus_UInt32  dm_oetf_bist_fail_group:1;
        RBus_UInt32  dm_tonemap_bist_fail_group:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dm_b0101_1_drf_bist_fail_group:1;
        RBus_UInt32  dm_b0101_2_drf_bist_fail_group:1;
        RBus_UInt32  dm_b0103_drf_bist_fail_group:1;
        RBus_UInt32  dm_b02_drf_bist_fail_group:1;
        RBus_UInt32  dm_b03_1_drf_bist_fail_group:1;
        RBus_UInt32  dm_b03_2_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_drf_bist_fail_group:1;
        RBus_UInt32  dm_hist_2p_drf_bist_fail_group:1;
        RBus_UInt32  dm_hist_1p_drf_bist_fail_group:1;
        RBus_UInt32  dm_b03_3_drf_bist_fail_group:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  tchdr_cdlut_drf_bist_fail_group:1;
        RBus_UInt32  tchdr_plut_drf_bist_fail_group:1;
        RBus_UInt32  tchdr_silut_drf_bist_fail_group:1;
        RBus_UInt32  dmato3dtable_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_2_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_1_drf_bist_fail_group:1;
        RBus_UInt32  dm_b05_new_2_drf_bist_fail_group:1;
        RBus_UInt32  dm_eotf_drf_bist_fail_group:1;
        RBus_UInt32  dm_oetf_drf_bist_fail_group:1;
        RBus_UInt32  dm_tonemap_drf_bist_fail_group:1;
        RBus_UInt32  res2:6;
    };
}hdr_all_top_dm_mbist_drf_bist_fail_group_RBUS;




#endif 


#endif 
