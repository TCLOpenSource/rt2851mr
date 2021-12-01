/**
* @file Merlin5-DesignSpec-HDR_Sub
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_HDR_SUB_REG_H_
#define _RBUS_HDR_SUB_REG_H_

#include "rbus_types.h"



//  HDR_SUB Register Address
#define  HDR_SUB_HDR2_TOP_CTL                                                   0x1806B900
#define  HDR_SUB_HDR2_TOP_CTL_reg_addr                                           "0xB806B900"
#define  HDR_SUB_HDR2_TOP_CTL_reg                                                0xB806B900
#define  HDR_SUB_HDR2_TOP_CTL_inst_addr                                          "0x0000"
#define  set_HDR_SUB_HDR2_TOP_CTL_reg(data)                                      (*((volatile unsigned int*)HDR_SUB_HDR2_TOP_CTL_reg)=data)
#define  get_HDR_SUB_HDR2_TOP_CTL_reg                                            (*((volatile unsigned int*)HDR_SUB_HDR2_TOP_CTL_reg))
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_sel_sign_1_shift                              (11)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_cr_dly_cb_1_shift                             (10)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_dup_1_shift                                   (9)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_en_422to444_1_shift                           (8)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_en_shift                                      (0)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_sel_sign_1_mask                               (0x00000800)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_cr_dly_cb_1_mask                              (0x00000400)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_dup_1_mask                                    (0x00000200)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_en_422to444_1_mask                            (0x00000100)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_en_mask                                       (0x00000001)
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_sel_sign_1(data)                              (0x00000800&((data)<<11))
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_cr_dly_cb_1(data)                             (0x00000400&((data)<<10))
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_dup_1(data)                                   (0x00000200&((data)<<9))
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_en_422to444_1(data)                           (0x00000100&((data)<<8))
#define  HDR_SUB_HDR2_TOP_CTL_hdr2_en(data)                                      (0x00000001&(data))
#define  HDR_SUB_HDR2_TOP_CTL_get_hdr2_sel_sign_1(data)                          ((0x00000800&(data))>>11)
#define  HDR_SUB_HDR2_TOP_CTL_get_hdr2_cr_dly_cb_1(data)                         ((0x00000400&(data))>>10)
#define  HDR_SUB_HDR2_TOP_CTL_get_hdr2_dup_1(data)                               ((0x00000200&(data))>>9)
#define  HDR_SUB_HDR2_TOP_CTL_get_hdr2_en_422to444_1(data)                       ((0x00000100&(data))>>8)
#define  HDR_SUB_HDR2_TOP_CTL_get_hdr2_en(data)                                  (0x00000001&(data))

#define  HDR_SUB_HDR2_TOP_PIC_SIZE                                              0x1806B904
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_reg_addr                                      "0xB806B904"
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_reg                                           0xB806B904
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_inst_addr                                     "0x0001"
#define  set_HDR_SUB_HDR2_TOP_PIC_SIZE_reg(data)                                 (*((volatile unsigned int*)HDR_SUB_HDR2_TOP_PIC_SIZE_reg)=data)
#define  get_HDR_SUB_HDR2_TOP_PIC_SIZE_reg                                       (*((volatile unsigned int*)HDR_SUB_HDR2_TOP_PIC_SIZE_reg))
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_hdr2_vsize_shift                              (16)
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_hdr2_hsize_shift                              (0)
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_hdr2_vsize_mask                               (0x0FFF0000)
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_hdr2_hsize_mask                               (0x00001FFF)
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_hdr2_vsize(data)                              (0x0FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_hdr2_hsize(data)                              (0x00001FFF&(data))
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_get_hdr2_vsize(data)                          ((0x0FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_TOP_PIC_SIZE_get_hdr2_hsize(data)                          (0x00001FFF&(data))

#define  HDR_SUB_HDR2_TOP_D_BUF                                                 0x1806B908
#define  HDR_SUB_HDR2_TOP_D_BUF_reg_addr                                         "0xB806B908"
#define  HDR_SUB_HDR2_TOP_D_BUF_reg                                              0xB806B908
#define  HDR_SUB_HDR2_TOP_D_BUF_inst_addr                                        "0x0002"
#define  set_HDR_SUB_HDR2_TOP_D_BUF_reg(data)                                    (*((volatile unsigned int*)HDR_SUB_HDR2_TOP_D_BUF_reg)=data)
#define  get_HDR_SUB_HDR2_TOP_D_BUF_reg                                          (*((volatile unsigned int*)HDR_SUB_HDR2_TOP_D_BUF_reg))
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_read_sel_shift                              (31)
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_double_apply_shift                          (1)
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_double_en_shift                             (0)
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_read_sel_mask                               (0x80000000)
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_double_apply_mask                           (0x00000002)
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_double_en_mask                              (0x00000001)
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_read_sel(data)                              (0x80000000&((data)<<31))
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_double_apply(data)                          (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_TOP_D_BUF_hdr2_double_en(data)                             (0x00000001&(data))
#define  HDR_SUB_HDR2_TOP_D_BUF_get_hdr2_read_sel(data)                          ((0x80000000&(data))>>31)
#define  HDR_SUB_HDR2_TOP_D_BUF_get_hdr2_double_apply(data)                      ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_TOP_D_BUF_get_hdr2_double_en(data)                         (0x00000001&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Control                                           0x1806B910
#define  HDR_SUB_HDR2_YUV2RGB_Control_reg_addr                                   "0xB806B910"
#define  HDR_SUB_HDR2_YUV2RGB_Control_reg                                        0xB806B910
#define  HDR_SUB_HDR2_YUV2RGB_Control_inst_addr                                  "0x0003"
#define  set_HDR_SUB_HDR2_YUV2RGB_Control_reg(data)                              (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Control_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Control_reg                                    (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Control_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Control_yuv2rgb_out_shift_shift                    (2)
#define  HDR_SUB_HDR2_YUV2RGB_Control_yuv2rgb_en_shift                           (0)
#define  HDR_SUB_HDR2_YUV2RGB_Control_yuv2rgb_out_shift_mask                     (0x00000004)
#define  HDR_SUB_HDR2_YUV2RGB_Control_yuv2rgb_en_mask                            (0x00000001)
#define  HDR_SUB_HDR2_YUV2RGB_Control_yuv2rgb_out_shift(data)                    (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_YUV2RGB_Control_yuv2rgb_en(data)                           (0x00000001&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Control_get_yuv2rgb_out_shift(data)                ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_YUV2RGB_Control_get_yuv2rgb_en(data)                       (0x00000001&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp                                    0x1806B914
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_reg_addr                            "0xB806B914"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_reg                                 0xB806B914
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_inst_addr                           "0x0004"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_reg(data)                       (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_reg                             (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_bt2020_en_shift                     (2)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_cb_cr_clamp_shift                   (1)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_y_clamp_shift                       (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_bt2020_en_mask                      (0x00000004)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_cb_cr_clamp_mask                    (0x00000002)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_y_clamp_mask                        (0x00000001)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_bt2020_en(data)                     (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_cb_cr_clamp(data)                   (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_y_clamp(data)                       (0x00000001&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_get_bt2020_en(data)                 ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_get_cb_cr_clamp(data)               ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_Clamp_get_y_clamp(data)                   (0x00000001&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0                                        0x1806B918
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_reg_addr                                "0xB806B918"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_reg                                     0xB806B918
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_inst_addr                               "0x0005"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_yuv2rgb_k11_shift                       (16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_yuv2rgb_k12_shift                       (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_yuv2rgb_k11_mask                        (0x7FFF0000)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_yuv2rgb_k12_mask                        (0x000007FF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_yuv2rgb_k11(data)                       (0x7FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_yuv2rgb_k12(data)                       (0x000007FF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_get_yuv2rgb_k11(data)                   ((0x7FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_0_get_yuv2rgb_k12(data)                   (0x000007FF&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1                                        0x1806B91C
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_reg_addr                                "0xB806B91C"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_reg                                     0xB806B91C
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_inst_addr                               "0x0006"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_yuv2rgb_k13_shift                       (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_yuv2rgb_k13_mask                        (0x000007FF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_yuv2rgb_k13(data)                       (0x000007FF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_1_get_yuv2rgb_k13(data)                   (0x000007FF&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2                                        0x1806B920
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_reg_addr                                "0xB806B920"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_reg                                     0xB806B920
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_inst_addr                               "0x0007"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_yuv2rgb_k22_shift                       (16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_yuv2rgb_k23_shift                       (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_yuv2rgb_k22_mask                        (0x07FF0000)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_yuv2rgb_k23_mask                        (0x000007FF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_yuv2rgb_k22(data)                       (0x07FF0000&((data)<<16))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_yuv2rgb_k23(data)                       (0x000007FF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_get_yuv2rgb_k22(data)                   ((0x07FF0000&(data))>>16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_2_get_yuv2rgb_k23(data)                   (0x000007FF&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3                                        0x1806B924
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_reg_addr                                "0xB806B924"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_reg                                     0xB806B924
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_inst_addr                               "0x0008"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_yuv2rgb_k32_shift                       (16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_yuv2rgb_k33_shift                       (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_yuv2rgb_k32_mask                        (0x07FF0000)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_yuv2rgb_k33_mask                        (0x000007FF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_yuv2rgb_k32(data)                       (0x07FF0000&((data)<<16))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_yuv2rgb_k33(data)                       (0x000007FF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_get_yuv2rgb_k32(data)                   ((0x07FF0000&(data))>>16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_3_get_yuv2rgb_k33(data)                   (0x000007FF&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4                                        0x1806B928
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_reg_addr                                "0xB806B928"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_reg                                     0xB806B928
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_inst_addr                               "0x0009"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_yuv2rgb_roffset_shift                   (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_yuv2rgb_roffset_mask                    (0x00007FFF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_yuv2rgb_roffset(data)                   (0x00007FFF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_4_get_yuv2rgb_roffset(data)               (0x00007FFF&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5                                        0x1806B92C
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_reg_addr                                "0xB806B92C"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_reg                                     0xB806B92C
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_inst_addr                               "0x000A"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_yuv2rgb_goffset_shift                   (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_yuv2rgb_goffset_mask                    (0x00007FFF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_yuv2rgb_goffset(data)                   (0x00007FFF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_5_get_yuv2rgb_goffset(data)               (0x00007FFF&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6                                        0x1806B930
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_reg_addr                                "0xB806B930"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_reg                                     0xB806B930
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_inst_addr                               "0x000B"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_yuv2rgb_boffset_shift                   (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_yuv2rgb_boffset_mask                    (0x00007FFF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_yuv2rgb_boffset(data)                   (0x00007FFF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_6_get_yuv2rgb_boffset(data)               (0x00007FFF&(data))

#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7                                        0x1806B934
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_reg_addr                                "0xB806B934"
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_reg                                     0xB806B934
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_inst_addr                               "0x000C"
#define  set_HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_reg(data)                           (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_reg)=data)
#define  get_HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_reg                                 (*((volatile unsigned int*)HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_reg))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_yuv2rgb_k132_shift                      (16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_yuv2rgb_k322_shift                      (0)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_yuv2rgb_k132_mask                       (0x07FF0000)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_yuv2rgb_k322_mask                       (0x000007FF)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_yuv2rgb_k132(data)                      (0x07FF0000&((data)<<16))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_yuv2rgb_k322(data)                      (0x000007FF&(data))
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_get_yuv2rgb_k132(data)                  ((0x07FF0000&(data))>>16)
#define  HDR_SUB_HDR2_YUV2RGB_Tab_Data_7_get_yuv2rgb_k322(data)                  (0x000007FF&(data))

#define  HDR_SUB_HDR2_GAMMA_CTRL                                                0x1806B950
#define  HDR_SUB_HDR2_GAMMA_CTRL_reg_addr                                        "0xB806B950"
#define  HDR_SUB_HDR2_GAMMA_CTRL_reg                                             0xB806B950
#define  HDR_SUB_HDR2_GAMMA_CTRL_inst_addr                                       "0x000D"
#define  set_HDR_SUB_HDR2_GAMMA_CTRL_reg(data)                                   (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA_CTRL_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA_CTRL_reg                                         (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA_CTRL_reg))
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_gamma2_en_shift                            (2)
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_3x3_en_shift                               (1)
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_gamma1_en_shift                            (0)
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_gamma2_en_mask                             (0x00000004)
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_3x3_en_mask                                (0x00000002)
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_gamma1_en_mask                             (0x00000001)
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_gamma2_en(data)                            (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_3x3_en(data)                               (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_GAMMA_CTRL_hdr2_gamma1_en(data)                            (0x00000001&(data))
#define  HDR_SUB_HDR2_GAMMA_CTRL_get_hdr2_gamma2_en(data)                        ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_GAMMA_CTRL_get_hdr2_3x3_en(data)                           ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_GAMMA_CTRL_get_hdr2_gamma1_en(data)                        (0x00000001&(data))

#define  HDR_SUB_HDR2_GAMMA1_port                                               0x1806B954
#define  HDR_SUB_HDR2_GAMMA1_port_reg_addr                                       "0xB806B954"
#define  HDR_SUB_HDR2_GAMMA1_port_reg                                            0xB806B954
#define  HDR_SUB_HDR2_GAMMA1_port_inst_addr                                      "0x000E"
#define  set_HDR_SUB_HDR2_GAMMA1_port_reg(data)                                  (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_port_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA1_port_reg                                        (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_port_reg))
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_index_shift                    (16)
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_d0_shift                       (8)
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_d1_shift                       (0)
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_index_mask                     (0x0FFF0000)
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_d0_mask                        (0x00007F00)
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_d1_mask                        (0x0000007F)
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_index(data)                    (0x0FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_d0(data)                       (0x00007F00&((data)<<8))
#define  HDR_SUB_HDR2_GAMMA1_port_hdr2_gamma1_tab_d1(data)                       (0x0000007F&(data))
#define  HDR_SUB_HDR2_GAMMA1_port_get_hdr2_gamma1_tab_index(data)                ((0x0FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_GAMMA1_port_get_hdr2_gamma1_tab_d0(data)                   ((0x00007F00&(data))>>8)
#define  HDR_SUB_HDR2_GAMMA1_port_get_hdr2_gamma1_tab_d1(data)                   (0x0000007F&(data))

#define  HDR_SUB_HDR2_GAMMA1_CTRL_1                                             0x1806B958
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_reg_addr                                     "0xB806B958"
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_reg                                          0xB806B958
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_inst_addr                                    "0x000F"
#define  set_HDR_SUB_HDR2_GAMMA1_CTRL_1_reg(data)                                (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_CTRL_1_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA1_CTRL_1_reg                                      (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_CTRL_1_reg))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_read_tab_sel_shift               (28)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_tab_addr_shift                   (16)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_ax_rw_sel_shift                  (8)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_ax_ch_sel_shift                  (5)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_fifo_empty_shift                 (4)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_fifo_full_shift                  (3)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_wr_error_shift                   (2)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_dummy_1_shift                                (1)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_read_tab_sel_mask                (0x10000000)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_tab_addr_mask                    (0x007F0000)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_ax_rw_sel_mask                   (0x00000300)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_ax_ch_sel_mask                   (0x00000060)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_fifo_empty_mask                  (0x00000010)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_fifo_full_mask                   (0x00000008)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_wr_error_mask                    (0x00000004)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_dummy_1_mask                                 (0x00000002)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_read_tab_sel(data)               (0x10000000&((data)<<28))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_tab_addr(data)                   (0x007F0000&((data)<<16))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_ax_rw_sel(data)                  (0x00000300&((data)<<8))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_ax_ch_sel(data)                  (0x00000060&((data)<<5))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_fifo_empty(data)                 (0x00000010&((data)<<4))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_fifo_full(data)                  (0x00000008&((data)<<3))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_hdr2_gamma1_wr_error(data)                   (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_dummy_1(data)                                (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_hdr2_gamma1_read_tab_sel(data)           ((0x10000000&(data))>>28)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_hdr2_gamma1_tab_addr(data)               ((0x007F0000&(data))>>16)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_hdr2_gamma1_ax_rw_sel(data)              ((0x00000300&(data))>>8)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_hdr2_gamma1_ax_ch_sel(data)              ((0x00000060&(data))>>5)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_hdr2_gamma1_fifo_empty(data)             ((0x00000010&(data))>>4)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_hdr2_gamma1_fifo_full(data)              ((0x00000008&(data))>>3)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_hdr2_gamma1_wr_error(data)               ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_GAMMA1_CTRL_1_get_dummy_1(data)                            ((0x00000002&(data))>>1)

#define  HDR_SUB_HDR2_GAMMA2_port                                               0x1806B95C
#define  HDR_SUB_HDR2_GAMMA2_port_reg_addr                                       "0xB806B95C"
#define  HDR_SUB_HDR2_GAMMA2_port_reg                                            0xB806B95C
#define  HDR_SUB_HDR2_GAMMA2_port_inst_addr                                      "0x0010"
#define  set_HDR_SUB_HDR2_GAMMA2_port_reg(data)                                  (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_port_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA2_port_reg                                        (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_port_reg))
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_index_shift                    (16)
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_d0_shift                       (8)
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_d1_shift                       (0)
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_index_mask                     (0x0FFF0000)
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_d0_mask                        (0x00007F00)
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_d1_mask                        (0x0000007F)
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_index(data)                    (0x0FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_d0(data)                       (0x00007F00&((data)<<8))
#define  HDR_SUB_HDR2_GAMMA2_port_hdr2_gamma2_tab_d1(data)                       (0x0000007F&(data))
#define  HDR_SUB_HDR2_GAMMA2_port_get_hdr2_gamma2_tab_index(data)                ((0x0FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_GAMMA2_port_get_hdr2_gamma2_tab_d0(data)                   ((0x00007F00&(data))>>8)
#define  HDR_SUB_HDR2_GAMMA2_port_get_hdr2_gamma2_tab_d1(data)                   (0x0000007F&(data))

#define  HDR_SUB_HDR2_GAMMA2_CTRL_1                                             0x1806B960
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_reg_addr                                     "0xB806B960"
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_reg                                          0xB806B960
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_inst_addr                                    "0x0011"
#define  set_HDR_SUB_HDR2_GAMMA2_CTRL_1_reg(data)                                (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_CTRL_1_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA2_CTRL_1_reg                                      (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_CTRL_1_reg))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_read_tab_sel_shift               (28)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_tab_addr_shift                   (16)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_ax_rw_sel_shift                  (8)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_ax_ch_sel_shift                  (5)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_fifo_empty_shift                 (4)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_fifo_full_shift                  (3)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_wr_error_shift                   (2)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_dummy_1_shift                                (1)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_read_tab_sel_mask                (0x10000000)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_tab_addr_mask                    (0x007F0000)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_ax_rw_sel_mask                   (0x00000300)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_ax_ch_sel_mask                   (0x00000060)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_fifo_empty_mask                  (0x00000010)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_fifo_full_mask                   (0x00000008)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_wr_error_mask                    (0x00000004)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_dummy_1_mask                                 (0x00000002)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_read_tab_sel(data)               (0x10000000&((data)<<28))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_tab_addr(data)                   (0x007F0000&((data)<<16))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_ax_rw_sel(data)                  (0x00000300&((data)<<8))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_ax_ch_sel(data)                  (0x00000060&((data)<<5))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_fifo_empty(data)                 (0x00000010&((data)<<4))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_fifo_full(data)                  (0x00000008&((data)<<3))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_hdr2_gamma2_wr_error(data)                   (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_dummy_1(data)                                (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_hdr2_gamma2_read_tab_sel(data)           ((0x10000000&(data))>>28)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_hdr2_gamma2_tab_addr(data)               ((0x007F0000&(data))>>16)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_hdr2_gamma2_ax_rw_sel(data)              ((0x00000300&(data))>>8)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_hdr2_gamma2_ax_ch_sel(data)              ((0x00000060&(data))>>5)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_hdr2_gamma2_fifo_empty(data)             ((0x00000010&(data))>>4)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_hdr2_gamma2_fifo_full(data)              ((0x00000008&(data))>>3)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_hdr2_gamma2_wr_error(data)               ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_GAMMA2_CTRL_1_get_dummy_1(data)                            ((0x00000002&(data))>>1)

#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL                                          0x1806B964
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_reg_addr                                  "0xB806B964"
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_reg                                       0xB806B964
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_inst_addr                                 "0x0012"
#define  set_HDR_SUB_HDR2_GAMMA1_BIST_CTRL_reg(data)                             (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_BIST_CTRL_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA1_BIST_CTRL_reg                                   (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_BIST_CTRL_reg))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_ls_shift                      (5)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_rme_shift                     (4)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_rm_shift                      (0)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_ls_mask                       (0x00000020)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_rme_mask                      (0x00000010)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_rm_mask                       (0x0000000F)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_ls(data)                      (0x00000020&((data)<<5))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_rme(data)                     (0x00000010&((data)<<4))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_hdr2_gamma1_rm(data)                      (0x0000000F&(data))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_get_hdr2_gamma1_ls(data)                  ((0x00000020&(data))>>5)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_get_hdr2_gamma1_rme(data)                 ((0x00000010&(data))>>4)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL_get_hdr2_gamma1_rm(data)                  (0x0000000F&(data))

#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2                                         0x1806B968
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_reg_addr                                 "0xB806B968"
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_reg                                      0xB806B968
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_inst_addr                                "0x0013"
#define  set_HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_reg(data)                            (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_reg                                  (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_reg))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_r_drf_bist_fail_shift        (18)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_g_drf_bist_fail_shift        (17)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_b_drf_bist_fail_shift        (16)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_r_bist_fail_shift            (2)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_g_bist_fail_shift            (1)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_b_bist_fail_shift            (0)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_r_drf_bist_fail_mask         (0x00040000)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_g_drf_bist_fail_mask         (0x00020000)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_b_drf_bist_fail_mask         (0x00010000)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_r_bist_fail_mask             (0x00000004)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_g_bist_fail_mask             (0x00000002)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_b_bist_fail_mask             (0x00000001)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_r_drf_bist_fail(data)        (0x00040000&((data)<<18))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_g_drf_bist_fail(data)        (0x00020000&((data)<<17))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_b_drf_bist_fail(data)        (0x00010000&((data)<<16))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_r_bist_fail(data)            (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_g_bist_fail(data)            (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_hdr2_gamma1_b_bist_fail(data)            (0x00000001&(data))
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_get_hdr2_gamma1_r_drf_bist_fail(data)    ((0x00040000&(data))>>18)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_get_hdr2_gamma1_g_drf_bist_fail(data)    ((0x00020000&(data))>>17)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_get_hdr2_gamma1_b_drf_bist_fail(data)    ((0x00010000&(data))>>16)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_get_hdr2_gamma1_r_bist_fail(data)        ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_get_hdr2_gamma1_g_bist_fail(data)        ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_GAMMA1_BIST_CTRL2_get_hdr2_gamma1_b_bist_fail(data)        (0x00000001&(data))

#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL                                          0x1806B96C
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_reg_addr                                  "0xB806B96C"
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_reg                                       0xB806B96C
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_inst_addr                                 "0x0014"
#define  set_HDR_SUB_HDR2_GAMMA2_BIST_CTRL_reg(data)                             (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_BIST_CTRL_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA2_BIST_CTRL_reg                                   (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_BIST_CTRL_reg))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_ls_shift                      (5)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_rme_shift                     (4)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_rm_shift                      (0)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_ls_mask                       (0x00000020)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_rme_mask                      (0x00000010)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_rm_mask                       (0x0000000F)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_ls(data)                      (0x00000020&((data)<<5))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_rme(data)                     (0x00000010&((data)<<4))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_hdr2_gamma2_rm(data)                      (0x0000000F&(data))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_get_hdr2_gamma2_ls(data)                  ((0x00000020&(data))>>5)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_get_hdr2_gamma2_rme(data)                 ((0x00000010&(data))>>4)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL_get_hdr2_gamma2_rm(data)                  (0x0000000F&(data))

#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2                                         0x1806B970
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_reg_addr                                 "0xB806B970"
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_reg                                      0xB806B970
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_inst_addr                                "0x0015"
#define  set_HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_reg(data)                            (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_reg)=data)
#define  get_HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_reg                                  (*((volatile unsigned int*)HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_reg))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_r_drf_bist_fail_shift        (18)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_g_drf_bist_fail_shift        (17)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_b_drf_bist_fail_shift        (16)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_r_bist_fail_shift            (2)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_g_bist_fail_shift            (1)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_b_bist_fail_shift            (0)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_r_drf_bist_fail_mask         (0x00040000)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_g_drf_bist_fail_mask         (0x00020000)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_b_drf_bist_fail_mask         (0x00010000)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_r_bist_fail_mask             (0x00000004)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_g_bist_fail_mask             (0x00000002)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_b_bist_fail_mask             (0x00000001)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_r_drf_bist_fail(data)        (0x00040000&((data)<<18))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_g_drf_bist_fail(data)        (0x00020000&((data)<<17))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_b_drf_bist_fail(data)        (0x00010000&((data)<<16))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_r_bist_fail(data)            (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_g_bist_fail(data)            (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_hdr2_gamma2_b_bist_fail(data)            (0x00000001&(data))
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_get_hdr2_gamma2_r_drf_bist_fail(data)    ((0x00040000&(data))>>18)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_get_hdr2_gamma2_g_drf_bist_fail(data)    ((0x00020000&(data))>>17)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_get_hdr2_gamma2_b_drf_bist_fail(data)    ((0x00010000&(data))>>16)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_get_hdr2_gamma2_r_bist_fail(data)        ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_get_hdr2_gamma2_g_bist_fail(data)        ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_GAMMA2_BIST_CTRL2_get_hdr2_gamma2_b_bist_fail(data)        (0x00000001&(data))

#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0                                      0x1806B974
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_reg_addr                              "0xB806B974"
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_reg                                   0xB806B974
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_inst_addr                             "0x0016"
#define  set_HDR_SUB_HDR2_3x3_Data_In_Offset_0_reg(data)                         (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_In_Offset_0_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Data_In_Offset_0_reg                               (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_In_Offset_0_reg))
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_cm_y_offset_shift                     (16)
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_cm_x_offset_shift                     (0)
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_cm_y_offset_mask                      (0x1FFF0000)
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_cm_x_offset_mask                      (0x00001FFF)
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_cm_y_offset(data)                     (0x1FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_cm_x_offset(data)                     (0x00001FFF&(data))
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_get_cm_y_offset(data)                 ((0x1FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_0_get_cm_x_offset(data)                 (0x00001FFF&(data))

#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1                                      0x1806B978
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1_reg_addr                              "0xB806B978"
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1_reg                                   0xB806B978
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1_inst_addr                             "0x0017"
#define  set_HDR_SUB_HDR2_3x3_Data_In_Offset_1_reg(data)                         (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_In_Offset_1_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Data_In_Offset_1_reg                               (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_In_Offset_1_reg))
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1_cm_z_offset_shift                     (0)
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1_cm_z_offset_mask                      (0x00001FFF)
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1_cm_z_offset(data)                     (0x00001FFF&(data))
#define  HDR_SUB_HDR2_3x3_Data_In_Offset_1_get_cm_z_offset(data)                 (0x00001FFF&(data))

#define  HDR_SUB_HDR2_3x3_Data_0                                                0x1806B97C
#define  HDR_SUB_HDR2_3x3_Data_0_reg_addr                                        "0xB806B97C"
#define  HDR_SUB_HDR2_3x3_Data_0_reg                                             0xB806B97C
#define  HDR_SUB_HDR2_3x3_Data_0_inst_addr                                       "0x0018"
#define  set_HDR_SUB_HDR2_3x3_Data_0_reg(data)                                   (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_0_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Data_0_reg                                         (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_0_reg))
#define  HDR_SUB_HDR2_3x3_Data_0_cm_k12_shift                                    (16)
#define  HDR_SUB_HDR2_3x3_Data_0_cm_k11_shift                                    (0)
#define  HDR_SUB_HDR2_3x3_Data_0_cm_k12_mask                                     (0x3FFF0000)
#define  HDR_SUB_HDR2_3x3_Data_0_cm_k11_mask                                     (0x00003FFF)
#define  HDR_SUB_HDR2_3x3_Data_0_cm_k12(data)                                    (0x3FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_3x3_Data_0_cm_k11(data)                                    (0x00003FFF&(data))
#define  HDR_SUB_HDR2_3x3_Data_0_get_cm_k12(data)                                ((0x3FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_3x3_Data_0_get_cm_k11(data)                                (0x00003FFF&(data))

#define  HDR_SUB_HDR2_3x3_Data_1                                                0x1806B980
#define  HDR_SUB_HDR2_3x3_Data_1_reg_addr                                        "0xB806B980"
#define  HDR_SUB_HDR2_3x3_Data_1_reg                                             0xB806B980
#define  HDR_SUB_HDR2_3x3_Data_1_inst_addr                                       "0x0019"
#define  set_HDR_SUB_HDR2_3x3_Data_1_reg(data)                                   (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_1_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Data_1_reg                                         (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_1_reg))
#define  HDR_SUB_HDR2_3x3_Data_1_cm_k21_shift                                    (16)
#define  HDR_SUB_HDR2_3x3_Data_1_cm_k13_shift                                    (0)
#define  HDR_SUB_HDR2_3x3_Data_1_cm_k21_mask                                     (0x3FFF0000)
#define  HDR_SUB_HDR2_3x3_Data_1_cm_k13_mask                                     (0x00003FFF)
#define  HDR_SUB_HDR2_3x3_Data_1_cm_k21(data)                                    (0x3FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_3x3_Data_1_cm_k13(data)                                    (0x00003FFF&(data))
#define  HDR_SUB_HDR2_3x3_Data_1_get_cm_k21(data)                                ((0x3FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_3x3_Data_1_get_cm_k13(data)                                (0x00003FFF&(data))

#define  HDR_SUB_HDR2_3x3_Data_2                                                0x1806B984
#define  HDR_SUB_HDR2_3x3_Data_2_reg_addr                                        "0xB806B984"
#define  HDR_SUB_HDR2_3x3_Data_2_reg                                             0xB806B984
#define  HDR_SUB_HDR2_3x3_Data_2_inst_addr                                       "0x001A"
#define  set_HDR_SUB_HDR2_3x3_Data_2_reg(data)                                   (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_2_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Data_2_reg                                         (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_2_reg))
#define  HDR_SUB_HDR2_3x3_Data_2_cm_k23_shift                                    (16)
#define  HDR_SUB_HDR2_3x3_Data_2_cm_k22_shift                                    (0)
#define  HDR_SUB_HDR2_3x3_Data_2_cm_k23_mask                                     (0x3FFF0000)
#define  HDR_SUB_HDR2_3x3_Data_2_cm_k22_mask                                     (0x00003FFF)
#define  HDR_SUB_HDR2_3x3_Data_2_cm_k23(data)                                    (0x3FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_3x3_Data_2_cm_k22(data)                                    (0x00003FFF&(data))
#define  HDR_SUB_HDR2_3x3_Data_2_get_cm_k23(data)                                ((0x3FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_3x3_Data_2_get_cm_k22(data)                                (0x00003FFF&(data))

#define  HDR_SUB_HDR2_3x3_Data_3                                                0x1806B988
#define  HDR_SUB_HDR2_3x3_Data_3_reg_addr                                        "0xB806B988"
#define  HDR_SUB_HDR2_3x3_Data_3_reg                                             0xB806B988
#define  HDR_SUB_HDR2_3x3_Data_3_inst_addr                                       "0x001B"
#define  set_HDR_SUB_HDR2_3x3_Data_3_reg(data)                                   (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_3_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Data_3_reg                                         (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_3_reg))
#define  HDR_SUB_HDR2_3x3_Data_3_cm_k32_shift                                    (16)
#define  HDR_SUB_HDR2_3x3_Data_3_cm_k31_shift                                    (0)
#define  HDR_SUB_HDR2_3x3_Data_3_cm_k32_mask                                     (0x3FFF0000)
#define  HDR_SUB_HDR2_3x3_Data_3_cm_k31_mask                                     (0x00003FFF)
#define  HDR_SUB_HDR2_3x3_Data_3_cm_k32(data)                                    (0x3FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_3x3_Data_3_cm_k31(data)                                    (0x00003FFF&(data))
#define  HDR_SUB_HDR2_3x3_Data_3_get_cm_k32(data)                                ((0x3FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_3x3_Data_3_get_cm_k31(data)                                (0x00003FFF&(data))

#define  HDR_SUB_HDR2_3x3_Data_4                                                0x1806B98C
#define  HDR_SUB_HDR2_3x3_Data_4_reg_addr                                        "0xB806B98C"
#define  HDR_SUB_HDR2_3x3_Data_4_reg                                             0xB806B98C
#define  HDR_SUB_HDR2_3x3_Data_4_inst_addr                                       "0x001C"
#define  set_HDR_SUB_HDR2_3x3_Data_4_reg(data)                                   (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_4_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Data_4_reg                                         (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Data_4_reg))
#define  HDR_SUB_HDR2_3x3_Data_4_cm_k33_shift                                    (0)
#define  HDR_SUB_HDR2_3x3_Data_4_cm_k33_mask                                     (0x00003FFF)
#define  HDR_SUB_HDR2_3x3_Data_4_cm_k33(data)                                    (0x00003FFF&(data))
#define  HDR_SUB_HDR2_3x3_Data_4_get_cm_k33(data)                                (0x00003FFF&(data))

#define  HDR_SUB_HDR2_3x3_Out_offset_0                                          0x1806B990
#define  HDR_SUB_HDR2_3x3_Out_offset_0_reg_addr                                  "0xB806B990"
#define  HDR_SUB_HDR2_3x3_Out_offset_0_reg                                       0xB806B990
#define  HDR_SUB_HDR2_3x3_Out_offset_0_inst_addr                                 "0x001D"
#define  set_HDR_SUB_HDR2_3x3_Out_offset_0_reg(data)                             (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Out_offset_0_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Out_offset_0_reg                                   (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Out_offset_0_reg))
#define  HDR_SUB_HDR2_3x3_Out_offset_0_cm_goffset_shift                          (16)
#define  HDR_SUB_HDR2_3x3_Out_offset_0_cm_roffset_shift                          (0)
#define  HDR_SUB_HDR2_3x3_Out_offset_0_cm_goffset_mask                           (0x1FFF0000)
#define  HDR_SUB_HDR2_3x3_Out_offset_0_cm_roffset_mask                           (0x00001FFF)
#define  HDR_SUB_HDR2_3x3_Out_offset_0_cm_goffset(data)                          (0x1FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_3x3_Out_offset_0_cm_roffset(data)                          (0x00001FFF&(data))
#define  HDR_SUB_HDR2_3x3_Out_offset_0_get_cm_goffset(data)                      ((0x1FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_3x3_Out_offset_0_get_cm_roffset(data)                      (0x00001FFF&(data))

#define  HDR_SUB_HDR2_3x3_Out_offset_1                                          0x1806B994
#define  HDR_SUB_HDR2_3x3_Out_offset_1_reg_addr                                  "0xB806B994"
#define  HDR_SUB_HDR2_3x3_Out_offset_1_reg                                       0xB806B994
#define  HDR_SUB_HDR2_3x3_Out_offset_1_inst_addr                                 "0x001E"
#define  set_HDR_SUB_HDR2_3x3_Out_offset_1_reg(data)                             (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Out_offset_1_reg)=data)
#define  get_HDR_SUB_HDR2_3x3_Out_offset_1_reg                                   (*((volatile unsigned int*)HDR_SUB_HDR2_3x3_Out_offset_1_reg))
#define  HDR_SUB_HDR2_3x3_Out_offset_1_cm_boffset_shift                          (0)
#define  HDR_SUB_HDR2_3x3_Out_offset_1_cm_boffset_mask                           (0x00001FFF)
#define  HDR_SUB_HDR2_3x3_Out_offset_1_cm_boffset(data)                          (0x00001FFF&(data))
#define  HDR_SUB_HDR2_3x3_Out_offset_1_get_cm_boffset(data)                      (0x00001FFF&(data))

#define  HDR_SUB_HDR2_BIST_MODE                                                 0x1806B9A0
#define  HDR_SUB_HDR2_BIST_MODE_reg_addr                                         "0xB806B9A0"
#define  HDR_SUB_HDR2_BIST_MODE_reg                                              0xB806B9A0
#define  HDR_SUB_HDR2_BIST_MODE_inst_addr                                        "0x001F"
#define  set_HDR_SUB_HDR2_BIST_MODE_reg(data)                                    (*((volatile unsigned int*)HDR_SUB_HDR2_BIST_MODE_reg)=data)
#define  get_HDR_SUB_HDR2_BIST_MODE_reg                                          (*((volatile unsigned int*)HDR_SUB_HDR2_BIST_MODE_reg))
#define  HDR_SUB_HDR2_BIST_MODE_hdr2_gamma2_bist_mode_shift                      (1)
#define  HDR_SUB_HDR2_BIST_MODE_hdr2_gamma1_bist_mode_shift                      (0)
#define  HDR_SUB_HDR2_BIST_MODE_hdr2_gamma2_bist_mode_mask                       (0x00000002)
#define  HDR_SUB_HDR2_BIST_MODE_hdr2_gamma1_bist_mode_mask                       (0x00000001)
#define  HDR_SUB_HDR2_BIST_MODE_hdr2_gamma2_bist_mode(data)                      (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_BIST_MODE_hdr2_gamma1_bist_mode(data)                      (0x00000001&(data))
#define  HDR_SUB_HDR2_BIST_MODE_get_hdr2_gamma2_bist_mode(data)                  ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_BIST_MODE_get_hdr2_gamma1_bist_mode(data)                  (0x00000001&(data))

#define  HDR_SUB_HDR2_BIST_DONE                                                 0x1806B9A4
#define  HDR_SUB_HDR2_BIST_DONE_reg_addr                                         "0xB806B9A4"
#define  HDR_SUB_HDR2_BIST_DONE_reg                                              0xB806B9A4
#define  HDR_SUB_HDR2_BIST_DONE_inst_addr                                        "0x0020"
#define  set_HDR_SUB_HDR2_BIST_DONE_reg(data)                                    (*((volatile unsigned int*)HDR_SUB_HDR2_BIST_DONE_reg)=data)
#define  get_HDR_SUB_HDR2_BIST_DONE_reg                                          (*((volatile unsigned int*)HDR_SUB_HDR2_BIST_DONE_reg))
#define  HDR_SUB_HDR2_BIST_DONE_hdr2_gamma2_bist_done_shift                      (1)
#define  HDR_SUB_HDR2_BIST_DONE_hdr2_gamma1_bist_done_shift                      (0)
#define  HDR_SUB_HDR2_BIST_DONE_hdr2_gamma2_bist_done_mask                       (0x00000002)
#define  HDR_SUB_HDR2_BIST_DONE_hdr2_gamma1_bist_done_mask                       (0x00000001)
#define  HDR_SUB_HDR2_BIST_DONE_hdr2_gamma2_bist_done(data)                      (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_BIST_DONE_hdr2_gamma1_bist_done(data)                      (0x00000001&(data))
#define  HDR_SUB_HDR2_BIST_DONE_get_hdr2_gamma2_bist_done(data)                  ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_BIST_DONE_get_hdr2_gamma1_bist_done(data)                  (0x00000001&(data))

#define  HDR_SUB_HDR2_BIST_FAIL_GROUP                                           0x1806B9A8
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_reg_addr                                   "0xB806B9A8"
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_reg                                        0xB806B9A8
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_inst_addr                                  "0x0021"
#define  set_HDR_SUB_HDR2_BIST_FAIL_GROUP_reg(data)                              (*((volatile unsigned int*)HDR_SUB_HDR2_BIST_FAIL_GROUP_reg)=data)
#define  get_HDR_SUB_HDR2_BIST_FAIL_GROUP_reg                                    (*((volatile unsigned int*)HDR_SUB_HDR2_BIST_FAIL_GROUP_reg))
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_hdr2_gamma2_bist_fail_group_shift          (1)
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_hdr2_gamma1_bist_fail_group_shift          (0)
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_hdr2_gamma2_bist_fail_group_mask           (0x00000002)
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_hdr2_gamma1_bist_fail_group_mask           (0x00000001)
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_hdr2_gamma2_bist_fail_group(data)          (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_hdr2_gamma1_bist_fail_group(data)          (0x00000001&(data))
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_get_hdr2_gamma2_bist_fail_group(data)      ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_BIST_FAIL_GROUP_get_hdr2_gamma1_bist_fail_group(data)      (0x00000001&(data))

#define  HDR_SUB_HDR2_DRF_MODE                                                  0x1806B9AC
#define  HDR_SUB_HDR2_DRF_MODE_reg_addr                                          "0xB806B9AC"
#define  HDR_SUB_HDR2_DRF_MODE_reg                                               0xB806B9AC
#define  HDR_SUB_HDR2_DRF_MODE_inst_addr                                         "0x0022"
#define  set_HDR_SUB_HDR2_DRF_MODE_reg(data)                                     (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_MODE_reg)=data)
#define  get_HDR_SUB_HDR2_DRF_MODE_reg                                           (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_MODE_reg))
#define  HDR_SUB_HDR2_DRF_MODE_hdr2_gamma2_drf_mode_shift                        (1)
#define  HDR_SUB_HDR2_DRF_MODE_hdr2_gamma1_drf_mode_shift                        (0)
#define  HDR_SUB_HDR2_DRF_MODE_hdr2_gamma2_drf_mode_mask                         (0x00000002)
#define  HDR_SUB_HDR2_DRF_MODE_hdr2_gamma1_drf_mode_mask                         (0x00000001)
#define  HDR_SUB_HDR2_DRF_MODE_hdr2_gamma2_drf_mode(data)                        (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_DRF_MODE_hdr2_gamma1_drf_mode(data)                        (0x00000001&(data))
#define  HDR_SUB_HDR2_DRF_MODE_get_hdr2_gamma2_drf_mode(data)                    ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_DRF_MODE_get_hdr2_gamma1_drf_mode(data)                    (0x00000001&(data))

#define  HDR_SUB_HDR2_DRF_TEST_MODE                                             0x1806B9B0
#define  HDR_SUB_HDR2_DRF_TEST_MODE_reg_addr                                     "0xB806B9B0"
#define  HDR_SUB_HDR2_DRF_TEST_MODE_reg                                          0xB806B9B0
#define  HDR_SUB_HDR2_DRF_TEST_MODE_inst_addr                                    "0x0023"
#define  set_HDR_SUB_HDR2_DRF_TEST_MODE_reg(data)                                (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_TEST_MODE_reg)=data)
#define  get_HDR_SUB_HDR2_DRF_TEST_MODE_reg                                      (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_TEST_MODE_reg))
#define  HDR_SUB_HDR2_DRF_TEST_MODE_hdr2_gamma2_drf_test_resume_shift            (1)
#define  HDR_SUB_HDR2_DRF_TEST_MODE_hdr2_gamma1_drf_test_resume_shift            (0)
#define  HDR_SUB_HDR2_DRF_TEST_MODE_hdr2_gamma2_drf_test_resume_mask             (0x00000002)
#define  HDR_SUB_HDR2_DRF_TEST_MODE_hdr2_gamma1_drf_test_resume_mask             (0x00000001)
#define  HDR_SUB_HDR2_DRF_TEST_MODE_hdr2_gamma2_drf_test_resume(data)            (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_DRF_TEST_MODE_hdr2_gamma1_drf_test_resume(data)            (0x00000001&(data))
#define  HDR_SUB_HDR2_DRF_TEST_MODE_get_hdr2_gamma2_drf_test_resume(data)        ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_DRF_TEST_MODE_get_hdr2_gamma1_drf_test_resume(data)        (0x00000001&(data))

#define  HDR_SUB_HDR2_DRF_DONE                                                  0x1806B9B4
#define  HDR_SUB_HDR2_DRF_DONE_reg_addr                                          "0xB806B9B4"
#define  HDR_SUB_HDR2_DRF_DONE_reg                                               0xB806B9B4
#define  HDR_SUB_HDR2_DRF_DONE_inst_addr                                         "0x0024"
#define  set_HDR_SUB_HDR2_DRF_DONE_reg(data)                                     (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_DONE_reg)=data)
#define  get_HDR_SUB_HDR2_DRF_DONE_reg                                           (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_DONE_reg))
#define  HDR_SUB_HDR2_DRF_DONE_hdr2_gamma2_drf_done_shift                        (1)
#define  HDR_SUB_HDR2_DRF_DONE_hdr2_gamma1_drf_done_shift                        (0)
#define  HDR_SUB_HDR2_DRF_DONE_hdr2_gamma2_drf_done_mask                         (0x00000002)
#define  HDR_SUB_HDR2_DRF_DONE_hdr2_gamma1_drf_done_mask                         (0x00000001)
#define  HDR_SUB_HDR2_DRF_DONE_hdr2_gamma2_drf_done(data)                        (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_DRF_DONE_hdr2_gamma1_drf_done(data)                        (0x00000001&(data))
#define  HDR_SUB_HDR2_DRF_DONE_get_hdr2_gamma2_drf_done(data)                    ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_DRF_DONE_get_hdr2_gamma1_drf_done(data)                    (0x00000001&(data))

#define  HDR_SUB_HDR2_DRF_START_PAUSE                                           0x1806B9B8
#define  HDR_SUB_HDR2_DRF_START_PAUSE_reg_addr                                   "0xB806B9B8"
#define  HDR_SUB_HDR2_DRF_START_PAUSE_reg                                        0xB806B9B8
#define  HDR_SUB_HDR2_DRF_START_PAUSE_inst_addr                                  "0x0025"
#define  set_HDR_SUB_HDR2_DRF_START_PAUSE_reg(data)                              (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_START_PAUSE_reg)=data)
#define  get_HDR_SUB_HDR2_DRF_START_PAUSE_reg                                    (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_START_PAUSE_reg))
#define  HDR_SUB_HDR2_DRF_START_PAUSE_hdr2_gamma2_drf_start_pause_shift          (1)
#define  HDR_SUB_HDR2_DRF_START_PAUSE_hdr2_gamma1_drf_start_pause_shift          (0)
#define  HDR_SUB_HDR2_DRF_START_PAUSE_hdr2_gamma2_drf_start_pause_mask           (0x00000002)
#define  HDR_SUB_HDR2_DRF_START_PAUSE_hdr2_gamma1_drf_start_pause_mask           (0x00000001)
#define  HDR_SUB_HDR2_DRF_START_PAUSE_hdr2_gamma2_drf_start_pause(data)          (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_DRF_START_PAUSE_hdr2_gamma1_drf_start_pause(data)          (0x00000001&(data))
#define  HDR_SUB_HDR2_DRF_START_PAUSE_get_hdr2_gamma2_drf_start_pause(data)      ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_DRF_START_PAUSE_get_hdr2_gamma1_drf_start_pause(data)      (0x00000001&(data))

#define  HDR_SUB_HDR2_DRF_FAIL_GROUP                                            0x1806B9BC
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_reg_addr                                    "0xB806B9BC"
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_reg                                         0xB806B9BC
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_inst_addr                                   "0x0026"
#define  set_HDR_SUB_HDR2_DRF_FAIL_GROUP_reg(data)                               (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_FAIL_GROUP_reg)=data)
#define  get_HDR_SUB_HDR2_DRF_FAIL_GROUP_reg                                     (*((volatile unsigned int*)HDR_SUB_HDR2_DRF_FAIL_GROUP_reg))
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_hdr2_gamma2_drf_fail_group_shift            (1)
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_hdr2_gamma1_drf_fail_group_shift            (0)
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_hdr2_gamma2_drf_fail_group_mask             (0x00000002)
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_hdr2_gamma1_drf_fail_group_mask             (0x00000001)
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_hdr2_gamma2_drf_fail_group(data)            (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_hdr2_gamma1_drf_fail_group(data)            (0x00000001&(data))
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_get_hdr2_gamma2_drf_fail_group(data)        ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_DRF_FAIL_GROUP_get_hdr2_gamma1_drf_fail_group(data)        (0x00000001&(data))

#define  HDR_SUB_HDR2_CRC_CTRL0                                                 0x1806BA00
#define  HDR_SUB_HDR2_CRC_CTRL0_reg_addr                                         "0xB806BA00"
#define  HDR_SUB_HDR2_CRC_CTRL0_reg                                              0xB806BA00
#define  HDR_SUB_HDR2_CRC_CTRL0_inst_addr                                        "0x0027"
#define  set_HDR_SUB_HDR2_CRC_CTRL0_reg(data)                                    (*((volatile unsigned int*)HDR_SUB_HDR2_CRC_CTRL0_reg)=data)
#define  get_HDR_SUB_HDR2_CRC_CTRL0_reg                                          (*((volatile unsigned int*)HDR_SUB_HDR2_CRC_CTRL0_reg))
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_l_crc_err_cnt_shift                         (16)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_res_sel_shift                           (12)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_done_shift                              (5)
#define  HDR_SUB_HDR2_CRC_CTRL0_crc_done_tog_shift                               (4)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_l_auto_cmp_en_shift                         (2)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_conti_shift                             (1)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_start_shift                             (0)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_l_crc_err_cnt_mask                          (0xFFFF0000)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_res_sel_mask                            (0x0000F000)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_done_mask                               (0x00000020)
#define  HDR_SUB_HDR2_CRC_CTRL0_crc_done_tog_mask                                (0x00000010)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_l_auto_cmp_en_mask                          (0x00000004)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_conti_mask                              (0x00000002)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_start_mask                              (0x00000001)
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_l_crc_err_cnt(data)                         (0xFFFF0000&((data)<<16))
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_res_sel(data)                           (0x0000F000&((data)<<12))
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_done(data)                              (0x00000020&((data)<<5))
#define  HDR_SUB_HDR2_CRC_CTRL0_crc_done_tog(data)                               (0x00000010&((data)<<4))
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_l_auto_cmp_en(data)                         (0x00000004&((data)<<2))
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_conti(data)                             (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_CRC_CTRL0_hdr2_crc_start(data)                             (0x00000001&(data))
#define  HDR_SUB_HDR2_CRC_CTRL0_get_hdr2_l_crc_err_cnt(data)                     ((0xFFFF0000&(data))>>16)
#define  HDR_SUB_HDR2_CRC_CTRL0_get_hdr2_crc_res_sel(data)                       ((0x0000F000&(data))>>12)
#define  HDR_SUB_HDR2_CRC_CTRL0_get_hdr2_crc_done(data)                          ((0x00000020&(data))>>5)
#define  HDR_SUB_HDR2_CRC_CTRL0_get_crc_done_tog(data)                           ((0x00000010&(data))>>4)
#define  HDR_SUB_HDR2_CRC_CTRL0_get_hdr2_l_auto_cmp_en(data)                     ((0x00000004&(data))>>2)
#define  HDR_SUB_HDR2_CRC_CTRL0_get_hdr2_crc_conti(data)                         ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_CRC_CTRL0_get_hdr2_crc_start(data)                         (0x00000001&(data))

#define  HDR_SUB_HDR2_CRC_CTRL1                                                 0x1806BA04
#define  HDR_SUB_HDR2_CRC_CTRL1_reg_addr                                         "0xB806BA04"
#define  HDR_SUB_HDR2_CRC_CTRL1_reg                                              0xB806BA04
#define  HDR_SUB_HDR2_CRC_CTRL1_inst_addr                                        "0x0028"
#define  set_HDR_SUB_HDR2_CRC_CTRL1_reg(data)                                    (*((volatile unsigned int*)HDR_SUB_HDR2_CRC_CTRL1_reg)=data)
#define  get_HDR_SUB_HDR2_CRC_CTRL1_reg                                          (*((volatile unsigned int*)HDR_SUB_HDR2_CRC_CTRL1_reg))
#define  HDR_SUB_HDR2_CRC_CTRL1_hdr2_l_des_crc_shift                             (0)
#define  HDR_SUB_HDR2_CRC_CTRL1_hdr2_l_des_crc_mask                              (0xFFFFFFFF)
#define  HDR_SUB_HDR2_CRC_CTRL1_hdr2_l_des_crc(data)                             (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_CRC_CTRL1_get_hdr2_l_des_crc(data)                         (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_CRC_CTRL2                                                 0x1806BA08
#define  HDR_SUB_HDR2_CRC_CTRL2_reg_addr                                         "0xB806BA08"
#define  HDR_SUB_HDR2_CRC_CTRL2_reg                                              0xB806BA08
#define  HDR_SUB_HDR2_CRC_CTRL2_inst_addr                                        "0x0029"
#define  set_HDR_SUB_HDR2_CRC_CTRL2_reg(data)                                    (*((volatile unsigned int*)HDR_SUB_HDR2_CRC_CTRL2_reg)=data)
#define  get_HDR_SUB_HDR2_CRC_CTRL2_reg                                          (*((volatile unsigned int*)HDR_SUB_HDR2_CRC_CTRL2_reg))
#define  HDR_SUB_HDR2_CRC_CTRL2_hdr2_crc_l_result_shift                          (0)
#define  HDR_SUB_HDR2_CRC_CTRL2_hdr2_crc_l_result_mask                           (0xFFFFFFFF)
#define  HDR_SUB_HDR2_CRC_CTRL2_hdr2_crc_l_result(data)                          (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_CRC_CTRL2_get_hdr2_crc_l_result(data)                      (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0                                         0x1806BA0C
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_reg_addr                                 "0xB806BA0C"
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_reg                                      0xB806BA0C
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_inst_addr                                "0x002A"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_CTRL0_reg(data)                            (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL0_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_CTRL0_reg                                  (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL0_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_access_cross_bar_en_shift           (4)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_wr_en_shift              (1)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_rd_en_shift              (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_access_cross_bar_en_mask            (0x00000010)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_wr_en_mask               (0x00000002)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_rd_en_mask               (0x00000001)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_access_cross_bar_en(data)           (0x00000010&((data)<<4))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_wr_en(data)              (0x00000002&((data)<<1))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_hdr2_accessdata_rd_en(data)              (0x00000001&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_get_hdr2_access_cross_bar_en(data)       ((0x00000010&(data))>>4)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_get_hdr2_accessdata_wr_en(data)          ((0x00000002&(data))>>1)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL0_get_hdr2_accessdata_rd_en(data)          (0x00000001&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1                                         0x1806BA10
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_reg_addr                                 "0xB806BA10"
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_reg                                      0xB806BA10
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_inst_addr                                "0x002B"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_CTRL1_reg(data)                            (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL1_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_CTRL1_reg                                  (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL1_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_starty_shift             (16)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_startx_shift             (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_starty_mask              (0x1FFF0000)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_startx_mask              (0x00001FFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_starty(data)             (0x1FFF0000&((data)<<16))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_hdr2_accessdata_startx(data)             (0x00001FFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_get_hdr2_accessdata_starty(data)         ((0x1FFF0000&(data))>>16)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL1_get_hdr2_accessdata_startx(data)         (0x00001FFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2                                         0x1806BA14
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2_reg_addr                                 "0xB806BA14"
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2_reg                                      0xB806BA14
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2_inst_addr                                "0x002C"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_CTRL2_reg(data)                            (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL2_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_CTRL2_reg                                  (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL2_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2_hdr2_access_wrdata_r_shift               (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2_hdr2_access_wrdata_r_mask                (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2_hdr2_access_wrdata_r(data)               (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL2_get_hdr2_access_wrdata_r(data)           (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3                                         0x1806BA18
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3_reg_addr                                 "0xB806BA18"
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3_reg                                      0xB806BA18
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3_inst_addr                                "0x002D"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_CTRL3_reg(data)                            (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL3_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_CTRL3_reg                                  (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL3_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3_hdr2_access_wrdata_g_shift               (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3_hdr2_access_wrdata_g_mask                (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3_hdr2_access_wrdata_g(data)               (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL3_get_hdr2_access_wrdata_g(data)           (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4                                         0x1806BA1C
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4_reg_addr                                 "0xB806BA1C"
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4_reg                                      0xB806BA1C
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4_inst_addr                                "0x002E"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_CTRL4_reg(data)                            (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL4_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_CTRL4_reg                                  (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_CTRL4_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4_hdr2_access_wrdata_b_shift               (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4_hdr2_access_wrdata_b_mask                (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4_hdr2_access_wrdata_b(data)               (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_CTRL4_get_hdr2_access_wrdata_b(data)           (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0                                       0x1806BA20
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0_reg_addr                               "0xB806BA20"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0_reg                                    0xB806BA20
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0_inst_addr                              "0x002F"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS0_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS0_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS0_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS0_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0_hdr2_access_rdata_r00_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0_hdr2_access_rdata_r00_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0_hdr2_access_rdata_r00(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS0_get_hdr2_access_rdata_r00(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1                                       0x1806BA24
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1_reg_addr                               "0xB806BA24"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1_reg                                    0xB806BA24
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1_inst_addr                              "0x0030"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS1_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS1_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS1_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS1_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1_hdr2_access_rdata_r01_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1_hdr2_access_rdata_r01_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1_hdr2_access_rdata_r01(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS1_get_hdr2_access_rdata_r01(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2                                       0x1806BA28
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2_reg_addr                               "0xB806BA28"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2_reg                                    0xB806BA28
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2_inst_addr                              "0x0031"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS2_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS2_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS2_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS2_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2_hdr2_access_rdata_r10_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2_hdr2_access_rdata_r10_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2_hdr2_access_rdata_r10(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS2_get_hdr2_access_rdata_r10(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3                                       0x1806BA2C
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3_reg_addr                               "0xB806BA2C"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3_reg                                    0xB806BA2C
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3_inst_addr                              "0x0032"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS3_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS3_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS3_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS3_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3_hdr2_access_rdata_r11_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3_hdr2_access_rdata_r11_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3_hdr2_access_rdata_r11(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS3_get_hdr2_access_rdata_r11(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4                                       0x1806BA30
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4_reg_addr                               "0xB806BA30"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4_reg                                    0xB806BA30
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4_inst_addr                              "0x0033"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS4_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS4_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS4_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS4_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4_hdr2_access_rdata_g00_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4_hdr2_access_rdata_g00_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4_hdr2_access_rdata_g00(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS4_get_hdr2_access_rdata_g00(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5                                       0x1806BA34
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5_reg_addr                               "0xB806BA34"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5_reg                                    0xB806BA34
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5_inst_addr                              "0x0034"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS5_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS5_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS5_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS5_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5_hdr2_access_rdata_g01_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5_hdr2_access_rdata_g01_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5_hdr2_access_rdata_g01(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS5_get_hdr2_access_rdata_g01(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6                                       0x1806BA38
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6_reg_addr                               "0xB806BA38"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6_reg                                    0xB806BA38
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6_inst_addr                              "0x0035"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS6_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS6_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS6_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS6_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6_hdr2_access_rdata_g10_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6_hdr2_access_rdata_g10_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6_hdr2_access_rdata_g10(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS6_get_hdr2_access_rdata_g10(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7                                       0x1806BA3C
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7_reg_addr                               "0xB806BA3C"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7_reg                                    0xB806BA3C
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7_inst_addr                              "0x0036"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS7_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS7_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS7_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS7_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7_hdr2_access_rdata_g11_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7_hdr2_access_rdata_g11_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7_hdr2_access_rdata_g11(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS7_get_hdr2_access_rdata_g11(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8                                       0x1806BA40
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8_reg_addr                               "0xB806BA40"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8_reg                                    0xB806BA40
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8_inst_addr                              "0x0037"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS8_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS8_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS8_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS8_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8_hdr2_access_rdata_b00_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8_hdr2_access_rdata_b00_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8_hdr2_access_rdata_b00(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS8_get_hdr2_access_rdata_b00(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9                                       0x1806BA44
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9_reg_addr                               "0xB806BA44"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9_reg                                    0xB806BA44
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9_inst_addr                              "0x0038"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS9_reg(data)                          (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS9_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS9_reg                                (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS9_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9_hdr2_access_rdata_b01_shift            (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9_hdr2_access_rdata_b01_mask             (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9_hdr2_access_rdata_b01(data)            (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS9_get_hdr2_access_rdata_b01(data)        (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10                                      0x1806BA48
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10_reg_addr                              "0xB806BA48"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10_reg                                   0xB806BA48
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10_inst_addr                             "0x0039"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS10_reg(data)                         (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS10_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS10_reg                               (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS10_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10_hdr2_access_rdata_b10_shift           (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10_hdr2_access_rdata_b10_mask            (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10_hdr2_access_rdata_b10(data)           (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS10_get_hdr2_access_rdata_b10(data)       (0xFFFFFFFF&(data))

#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11                                      0x1806BA4C
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11_reg_addr                              "0xB806BA4C"
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11_reg                                   0xB806BA4C
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11_inst_addr                             "0x003A"
#define  set_HDR_SUB_HDR2_ACCESS_DATA_STATUS11_reg(data)                         (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS11_reg)=data)
#define  get_HDR_SUB_HDR2_ACCESS_DATA_STATUS11_reg                               (*((volatile unsigned int*)HDR_SUB_HDR2_ACCESS_DATA_STATUS11_reg))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11_hdr2_access_rdata_b11_shift           (0)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11_hdr2_access_rdata_b11_mask            (0xFFFFFFFF)
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11_hdr2_access_rdata_b11(data)           (0xFFFFFFFF&(data))
#define  HDR_SUB_HDR2_ACCESS_DATA_STATUS11_get_hdr2_access_rdata_b11(data)       (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======HDR_SUB register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  hdr2_sel_sign_1:1;
        RBus_UInt32  hdr2_cr_dly_cb_1:1;
        RBus_UInt32  hdr2_dup_1:1;
        RBus_UInt32  hdr2_en_422to444_1:1;
        RBus_UInt32  res2:7;
        RBus_UInt32  hdr2_en:1;
    };
}hdr_sub_hdr2_top_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hdr2_vsize:12;
        RBus_UInt32  res2:3;
        RBus_UInt32  hdr2_hsize:13;
    };
}hdr_sub_hdr2_top_pic_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_read_sel:1;
        RBus_UInt32  res1:29;
        RBus_UInt32  hdr2_double_apply:1;
        RBus_UInt32  hdr2_double_en:1;
    };
}hdr_sub_hdr2_top_d_buf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  yuv2rgb_out_shift:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  yuv2rgb_en:1;
    };
}hdr_sub_hdr2_yuv2rgb_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  bt2020_en:1;
        RBus_UInt32  cb_cr_clamp:1;
        RBus_UInt32  y_clamp:1;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  yuv2rgb_k11:15;
        RBus_UInt32  res2:5;
        RBus_UInt32  yuv2rgb_k12:11;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  yuv2rgb_k13:11;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  yuv2rgb_k22:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  yuv2rgb_k23:11;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  yuv2rgb_k32:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  yuv2rgb_k33:11;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  yuv2rgb_roffset:15;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  yuv2rgb_goffset:15;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:17;
        RBus_UInt32  yuv2rgb_boffset:15;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  yuv2rgb_k132:11;
        RBus_UInt32  res2:5;
        RBus_UInt32  yuv2rgb_k322:11;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  hdr2_gamma2_en:1;
        RBus_UInt32  hdr2_3x3_en:1;
        RBus_UInt32  hdr2_gamma1_en:1;
    };
}hdr_sub_hdr2_gamma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hdr2_gamma1_tab_index:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdr2_gamma1_tab_d0:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  hdr2_gamma1_tab_d1:7;
    };
}hdr_sub_hdr2_gamma1_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hdr2_gamma1_read_tab_sel:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  hdr2_gamma1_tab_addr:7;
        RBus_UInt32  res3:6;
        RBus_UInt32  hdr2_gamma1_ax_rw_sel:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  hdr2_gamma1_ax_ch_sel:2;
        RBus_UInt32  hdr2_gamma1_fifo_empty:1;
        RBus_UInt32  hdr2_gamma1_fifo_full:1;
        RBus_UInt32  hdr2_gamma1_wr_error:1;
        RBus_UInt32  dummy1806b958_1:1;
        RBus_UInt32  res5:1;
    };
}hdr_sub_hdr2_gamma1_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  hdr2_gamma2_tab_index:12;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdr2_gamma2_tab_d0:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  hdr2_gamma2_tab_d1:7;
    };
}hdr_sub_hdr2_gamma2_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hdr2_gamma2_read_tab_sel:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  hdr2_gamma2_tab_addr:7;
        RBus_UInt32  res3:6;
        RBus_UInt32  hdr2_gamma2_ax_rw_sel:2;
        RBus_UInt32  res4:1;
        RBus_UInt32  hdr2_gamma2_ax_ch_sel:2;
        RBus_UInt32  hdr2_gamma2_fifo_empty:1;
        RBus_UInt32  hdr2_gamma2_fifo_full:1;
        RBus_UInt32  hdr2_gamma2_wr_error:1;
        RBus_UInt32  dummy1806b960_1:1;
        RBus_UInt32  res5:1;
    };
}hdr_sub_hdr2_gamma2_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  hdr2_gamma1_ls:1;
        RBus_UInt32  hdr2_gamma1_rme:1;
        RBus_UInt32  hdr2_gamma1_rm:4;
    };
}hdr_sub_hdr2_gamma1_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  hdr2_gamma1_r_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_g_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_b_drf_bist_fail:1;
        RBus_UInt32  res2:13;
        RBus_UInt32  hdr2_gamma1_r_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_g_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_b_bist_fail:1;
    };
}hdr_sub_hdr2_gamma1_bist_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  hdr2_gamma2_ls:1;
        RBus_UInt32  hdr2_gamma2_rme:1;
        RBus_UInt32  hdr2_gamma2_rm:4;
    };
}hdr_sub_hdr2_gamma2_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  hdr2_gamma2_r_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_g_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_b_drf_bist_fail:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  res3:1;
        RBus_UInt32  hdr2_gamma2_r_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_g_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_b_bist_fail:1;
    };
}hdr_sub_hdr2_gamma2_bist_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cm_y_offset:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  cm_x_offset:13;
    };
}hdr_sub_hdr2_3x3_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  cm_z_offset:13;
    };
}hdr_sub_hdr2_3x3_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k12:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  cm_k11:14;
    };
}hdr_sub_hdr2_3x3_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k21:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  cm_k13:14;
    };
}hdr_sub_hdr2_3x3_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k23:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  cm_k22:14;
    };
}hdr_sub_hdr2_3x3_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k32:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  cm_k31:14;
    };
}hdr_sub_hdr2_3x3_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  cm_k33:14;
    };
}hdr_sub_hdr2_3x3_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  cm_goffset:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  cm_roffset:13;
    };
}hdr_sub_hdr2_3x3_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  cm_boffset:13;
    };
}hdr_sub_hdr2_3x3_out_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_bist_mode:1;
        RBus_UInt32  hdr2_gamma1_bist_mode:1;
    };
}hdr_sub_hdr2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_bist_done:1;
        RBus_UInt32  hdr2_gamma1_bist_done:1;
    };
}hdr_sub_hdr2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_bist_fail_group:1;
        RBus_UInt32  hdr2_gamma1_bist_fail_group:1;
    };
}hdr_sub_hdr2_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_drf_mode:1;
        RBus_UInt32  hdr2_gamma1_drf_mode:1;
    };
}hdr_sub_hdr2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_drf_test_resume:1;
        RBus_UInt32  hdr2_gamma1_drf_test_resume:1;
    };
}hdr_sub_hdr2_drf_test_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_drf_done:1;
        RBus_UInt32  hdr2_gamma1_drf_done:1;
    };
}hdr_sub_hdr2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_drf_start_pause:1;
        RBus_UInt32  hdr2_gamma1_drf_start_pause:1;
    };
}hdr_sub_hdr2_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hdr2_gamma2_drf_fail_group:1;
        RBus_UInt32  hdr2_gamma1_drf_fail_group:1;
    };
}hdr_sub_hdr2_drf_fail_group_RBUS;

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
}hdr_sub_hdr2_crc_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_l_des_crc:32;
    };
}hdr_sub_hdr2_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_crc_l_result:32;
    };
}hdr_sub_hdr2_crc_ctrl2_RBUS;

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
}hdr_sub_hdr2_access_data_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:3;
        RBus_UInt32  hdr2_accessdata_starty:13;
        RBus_UInt32  res2:3;
        RBus_UInt32  hdr2_accessdata_startx:13;
    };
}hdr_sub_hdr2_access_data_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_r:32;
    };
}hdr_sub_hdr2_access_data_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_g:32;
    };
}hdr_sub_hdr2_access_data_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_b:32;
    };
}hdr_sub_hdr2_access_data_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r00:32;
    };
}hdr_sub_hdr2_access_data_status0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r01:32;
    };
}hdr_sub_hdr2_access_data_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r10:32;
    };
}hdr_sub_hdr2_access_data_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r11:32;
    };
}hdr_sub_hdr2_access_data_status3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g00:32;
    };
}hdr_sub_hdr2_access_data_status4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g01:32;
    };
}hdr_sub_hdr2_access_data_status5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g10:32;
    };
}hdr_sub_hdr2_access_data_status6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g11:32;
    };
}hdr_sub_hdr2_access_data_status7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b00:32;
    };
}hdr_sub_hdr2_access_data_status8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b01:32;
    };
}hdr_sub_hdr2_access_data_status9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b10:32;
    };
}hdr_sub_hdr2_access_data_status10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b11:32;
    };
}hdr_sub_hdr2_access_data_status11_RBUS;

#else //apply LITTLE_ENDIAN

//======HDR_SUB register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_en:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  hdr2_en_422to444_1:1;
        RBus_UInt32  hdr2_dup_1:1;
        RBus_UInt32  hdr2_cr_dly_cb_1:1;
        RBus_UInt32  hdr2_sel_sign_1:1;
        RBus_UInt32  res2:20;
    };
}hdr_sub_hdr2_top_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_hsize:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hdr2_vsize:12;
        RBus_UInt32  res2:4;
    };
}hdr_sub_hdr2_top_pic_size_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_double_en:1;
        RBus_UInt32  hdr2_double_apply:1;
        RBus_UInt32  res1:29;
        RBus_UInt32  hdr2_read_sel:1;
    };
}hdr_sub_hdr2_top_d_buf_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_en:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  yuv2rgb_out_shift:1;
        RBus_UInt32  res2:29;
    };
}hdr_sub_hdr2_yuv2rgb_control_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  y_clamp:1;
        RBus_UInt32  cb_cr_clamp:1;
        RBus_UInt32  bt2020_en:1;
        RBus_UInt32  res1:29;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_clamp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_k12:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  yuv2rgb_k11:15;
        RBus_UInt32  res2:1;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_k13:11;
        RBus_UInt32  res1:21;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_k23:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  yuv2rgb_k22:11;
        RBus_UInt32  res2:5;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_k33:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  yuv2rgb_k32:11;
        RBus_UInt32  res2:5;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_roffset:15;
        RBus_UInt32  res1:17;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_goffset:15;
        RBus_UInt32  res1:17;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_boffset:15;
        RBus_UInt32  res1:17;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  yuv2rgb_k322:11;
        RBus_UInt32  res1:5;
        RBus_UInt32  yuv2rgb_k132:11;
        RBus_UInt32  res2:5;
    };
}hdr_sub_hdr2_yuv2rgb_tab_data_7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_en:1;
        RBus_UInt32  hdr2_3x3_en:1;
        RBus_UInt32  hdr2_gamma2_en:1;
        RBus_UInt32  res1:29;
    };
}hdr_sub_hdr2_gamma_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_tab_d1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  hdr2_gamma1_tab_d0:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdr2_gamma1_tab_index:12;
        RBus_UInt32  res3:4;
    };
}hdr_sub_hdr2_gamma1_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dummy1806b958_1:1;
        RBus_UInt32  hdr2_gamma1_wr_error:1;
        RBus_UInt32  hdr2_gamma1_fifo_full:1;
        RBus_UInt32  hdr2_gamma1_fifo_empty:1;
        RBus_UInt32  hdr2_gamma1_ax_ch_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdr2_gamma1_ax_rw_sel:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  hdr2_gamma1_tab_addr:7;
        RBus_UInt32  res4:5;
        RBus_UInt32  hdr2_gamma1_read_tab_sel:1;
        RBus_UInt32  res5:3;
    };
}hdr_sub_hdr2_gamma1_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma2_tab_d1:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  hdr2_gamma2_tab_d0:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdr2_gamma2_tab_index:12;
        RBus_UInt32  res3:4;
    };
}hdr_sub_hdr2_gamma2_port_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dummy1806b960_1:1;
        RBus_UInt32  hdr2_gamma2_wr_error:1;
        RBus_UInt32  hdr2_gamma2_fifo_full:1;
        RBus_UInt32  hdr2_gamma2_fifo_empty:1;
        RBus_UInt32  hdr2_gamma2_ax_ch_sel:2;
        RBus_UInt32  res2:1;
        RBus_UInt32  hdr2_gamma2_ax_rw_sel:2;
        RBus_UInt32  res3:6;
        RBus_UInt32  hdr2_gamma2_tab_addr:7;
        RBus_UInt32  res4:5;
        RBus_UInt32  hdr2_gamma2_read_tab_sel:1;
        RBus_UInt32  res5:3;
    };
}hdr_sub_hdr2_gamma2_ctrl_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_rm:4;
        RBus_UInt32  hdr2_gamma1_rme:1;
        RBus_UInt32  hdr2_gamma1_ls:1;
        RBus_UInt32  res1:26;
    };
}hdr_sub_hdr2_gamma1_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_b_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_g_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_r_bist_fail:1;
        RBus_UInt32  res1:13;
        RBus_UInt32  hdr2_gamma1_b_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_g_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma1_r_drf_bist_fail:1;
        RBus_UInt32  res2:13;
    };
}hdr_sub_hdr2_gamma1_bist_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma2_rm:4;
        RBus_UInt32  hdr2_gamma2_rme:1;
        RBus_UInt32  hdr2_gamma2_ls:1;
        RBus_UInt32  res1:26;
    };
}hdr_sub_hdr2_gamma2_bist_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma2_b_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_g_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_r_bist_fail:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  res2:12;
        RBus_UInt32  hdr2_gamma2_b_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_g_drf_bist_fail:1;
        RBus_UInt32  hdr2_gamma2_r_drf_bist_fail:1;
        RBus_UInt32  res3:13;
    };
}hdr_sub_hdr2_gamma2_bist_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_x_offset:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  cm_y_offset:13;
        RBus_UInt32  res2:3;
    };
}hdr_sub_hdr2_3x3_data_in_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_z_offset:13;
        RBus_UInt32  res1:19;
    };
}hdr_sub_hdr2_3x3_data_in_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_k11:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k12:14;
        RBus_UInt32  res2:2;
    };
}hdr_sub_hdr2_3x3_data_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_k13:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k21:14;
        RBus_UInt32  res2:2;
    };
}hdr_sub_hdr2_3x3_data_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_k22:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k23:14;
        RBus_UInt32  res2:2;
    };
}hdr_sub_hdr2_3x3_data_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_k31:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  cm_k32:14;
        RBus_UInt32  res2:2;
    };
}hdr_sub_hdr2_3x3_data_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_k33:14;
        RBus_UInt32  res1:18;
    };
}hdr_sub_hdr2_3x3_data_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_roffset:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  cm_goffset:13;
        RBus_UInt32  res2:3;
    };
}hdr_sub_hdr2_3x3_out_offset_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cm_boffset:13;
        RBus_UInt32  res1:19;
    };
}hdr_sub_hdr2_3x3_out_offset_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_bist_mode:1;
        RBus_UInt32  hdr2_gamma2_bist_mode:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_bist_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_bist_done:1;
        RBus_UInt32  hdr2_gamma2_bist_done:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_bist_fail_group:1;
        RBus_UInt32  hdr2_gamma2_bist_fail_group:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_bist_fail_group_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_drf_mode:1;
        RBus_UInt32  hdr2_gamma2_drf_mode:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_drf_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_drf_test_resume:1;
        RBus_UInt32  hdr2_gamma2_drf_test_resume:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_drf_test_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_drf_done:1;
        RBus_UInt32  hdr2_gamma2_drf_done:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_drf_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_drf_start_pause:1;
        RBus_UInt32  hdr2_gamma2_drf_start_pause:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_drf_start_pause_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_gamma1_drf_fail_group:1;
        RBus_UInt32  hdr2_gamma2_drf_fail_group:1;
        RBus_UInt32  res1:30;
    };
}hdr_sub_hdr2_drf_fail_group_RBUS;

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
}hdr_sub_hdr2_crc_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_l_des_crc:32;
    };
}hdr_sub_hdr2_crc_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_crc_l_result:32;
    };
}hdr_sub_hdr2_crc_ctrl2_RBUS;

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
}hdr_sub_hdr2_access_data_ctrl0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_accessdata_startx:13;
        RBus_UInt32  res1:3;
        RBus_UInt32  hdr2_accessdata_starty:13;
        RBus_UInt32  res2:3;
    };
}hdr_sub_hdr2_access_data_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_r:32;
    };
}hdr_sub_hdr2_access_data_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_g:32;
    };
}hdr_sub_hdr2_access_data_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_wrdata_b:32;
    };
}hdr_sub_hdr2_access_data_ctrl4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r00:32;
    };
}hdr_sub_hdr2_access_data_status0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r01:32;
    };
}hdr_sub_hdr2_access_data_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r10:32;
    };
}hdr_sub_hdr2_access_data_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_r11:32;
    };
}hdr_sub_hdr2_access_data_status3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g00:32;
    };
}hdr_sub_hdr2_access_data_status4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g01:32;
    };
}hdr_sub_hdr2_access_data_status5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g10:32;
    };
}hdr_sub_hdr2_access_data_status6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_g11:32;
    };
}hdr_sub_hdr2_access_data_status7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b00:32;
    };
}hdr_sub_hdr2_access_data_status8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b01:32;
    };
}hdr_sub_hdr2_access_data_status9_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b10:32;
    };
}hdr_sub_hdr2_access_data_status10_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hdr2_access_rdata_b11:32;
    };
}hdr_sub_hdr2_access_data_status11_RBUS;




#endif 


#endif 
