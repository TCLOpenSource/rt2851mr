/**
* @file Merlin5_MEMC_IPPRE1
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_IPPRE1_REG_H_
#define _RBUS_IPPRE1_REG_H_

#include "rbus_types.h"



//  IPPRE1 Register Address
#define  IPPRE1_IPPRE1_00                                                       0x18099500
#define  IPPRE1_IPPRE1_00_reg_addr                                               "0xB8099500"
#define  IPPRE1_IPPRE1_00_reg                                                    0xB8099500
#define  IPPRE1_IPPRE1_00_inst_addr                                              "0x0000"
#define  set_IPPRE1_IPPRE1_00_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_00_reg)=data)
#define  get_IPPRE1_IPPRE1_00_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_00_reg))
#define  IPPRE1_IPPRE1_00_ippre_color_amount_hact_shift                          (20)
#define  IPPRE1_IPPRE1_00_ippre_color_amount_center_v_shift                      (10)
#define  IPPRE1_IPPRE1_00_ippre_color_amount_center_u_shift                      (0)
#define  IPPRE1_IPPRE1_00_ippre_color_amount_hact_mask                           (0xFFF00000)
#define  IPPRE1_IPPRE1_00_ippre_color_amount_center_v_mask                       (0x000FFC00)
#define  IPPRE1_IPPRE1_00_ippre_color_amount_center_u_mask                       (0x000003FF)
#define  IPPRE1_IPPRE1_00_ippre_color_amount_hact(data)                          (0xFFF00000&((data)<<20))
#define  IPPRE1_IPPRE1_00_ippre_color_amount_center_v(data)                      (0x000FFC00&((data)<<10))
#define  IPPRE1_IPPRE1_00_ippre_color_amount_center_u(data)                      (0x000003FF&(data))
#define  IPPRE1_IPPRE1_00_get_ippre_color_amount_hact(data)                      ((0xFFF00000&(data))>>20)
#define  IPPRE1_IPPRE1_00_get_ippre_color_amount_center_v(data)                  ((0x000FFC00&(data))>>10)
#define  IPPRE1_IPPRE1_00_get_ippre_color_amount_center_u(data)                  (0x000003FF&(data))

#define  IPPRE1_IPPRE1_04                                                       0x18099504
#define  IPPRE1_IPPRE1_04_reg_addr                                               "0xB8099504"
#define  IPPRE1_IPPRE1_04_reg                                                    0xB8099504
#define  IPPRE1_IPPRE1_04_inst_addr                                              "0x0001"
#define  set_IPPRE1_IPPRE1_04_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_04_reg)=data)
#define  get_IPPRE1_IPPRE1_04_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_04_reg))
#define  IPPRE1_IPPRE1_04_ippre_color_amount_shft_shift                          (12)
#define  IPPRE1_IPPRE1_04_ippre_color_amount_vact_shift                          (0)
#define  IPPRE1_IPPRE1_04_ippre_color_amount_shft_mask                           (0x00003000)
#define  IPPRE1_IPPRE1_04_ippre_color_amount_vact_mask                           (0x00000FFF)
#define  IPPRE1_IPPRE1_04_ippre_color_amount_shft(data)                          (0x00003000&((data)<<12))
#define  IPPRE1_IPPRE1_04_ippre_color_amount_vact(data)                          (0x00000FFF&(data))
#define  IPPRE1_IPPRE1_04_get_ippre_color_amount_shft(data)                      ((0x00003000&(data))>>12)
#define  IPPRE1_IPPRE1_04_get_ippre_color_amount_vact(data)                      (0x00000FFF&(data))

#define  IPPRE1_IPPRE1_E0                                                       0x180995E0
#define  IPPRE1_IPPRE1_E0_reg_addr                                               "0xB80995E0"
#define  IPPRE1_IPPRE1_E0_reg                                                    0xB80995E0
#define  IPPRE1_IPPRE1_E0_inst_addr                                              "0x0002"
#define  set_IPPRE1_IPPRE1_E0_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_E0_reg)=data)
#define  get_IPPRE1_IPPRE1_E0_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_E0_reg))
#define  IPPRE1_IPPRE1_E0_regr_ippre_rgn0_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_E0_regr_ippre_rgn0_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_E0_regr_ippre_rgn0_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_E0_regr_ippre_rgn0_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_E0_regr_ippre_rgn0_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_E0_regr_ippre_rgn0_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_E0_get_regr_ippre_rgn0_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_E0_get_regr_ippre_rgn0_cnt_u(data)                        (0x0000FFFF&(data))

#define  IPPRE1_IPPRE1_E4                                                       0x180995E4
#define  IPPRE1_IPPRE1_E4_reg_addr                                               "0xB80995E4"
#define  IPPRE1_IPPRE1_E4_reg                                                    0xB80995E4
#define  IPPRE1_IPPRE1_E4_inst_addr                                              "0x0003"
#define  set_IPPRE1_IPPRE1_E4_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_E4_reg)=data)
#define  get_IPPRE1_IPPRE1_E4_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_E4_reg))
#define  IPPRE1_IPPRE1_E4_regr_ippre_rgn1_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_E4_regr_ippre_rgn1_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_E4_regr_ippre_rgn1_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_E4_regr_ippre_rgn1_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_E4_regr_ippre_rgn1_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_E4_regr_ippre_rgn1_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_E4_get_regr_ippre_rgn1_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_E4_get_regr_ippre_rgn1_cnt_u(data)                        (0x0000FFFF&(data))

#define  IPPRE1_IPPRE1_E8                                                       0x180995E8
#define  IPPRE1_IPPRE1_E8_reg_addr                                               "0xB80995E8"
#define  IPPRE1_IPPRE1_E8_reg                                                    0xB80995E8
#define  IPPRE1_IPPRE1_E8_inst_addr                                              "0x0004"
#define  set_IPPRE1_IPPRE1_E8_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_E8_reg)=data)
#define  get_IPPRE1_IPPRE1_E8_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_E8_reg))
#define  IPPRE1_IPPRE1_E8_regr_ippre_rgn2_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_E8_regr_ippre_rgn2_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_E8_regr_ippre_rgn2_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_E8_regr_ippre_rgn2_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_E8_regr_ippre_rgn2_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_E8_regr_ippre_rgn2_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_E8_get_regr_ippre_rgn2_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_E8_get_regr_ippre_rgn2_cnt_u(data)                        (0x0000FFFF&(data))

#define  IPPRE1_IPPRE1_EC                                                       0x180995EC
#define  IPPRE1_IPPRE1_EC_reg_addr                                               "0xB80995EC"
#define  IPPRE1_IPPRE1_EC_reg                                                    0xB80995EC
#define  IPPRE1_IPPRE1_EC_inst_addr                                              "0x0005"
#define  set_IPPRE1_IPPRE1_EC_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_EC_reg)=data)
#define  get_IPPRE1_IPPRE1_EC_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_EC_reg))
#define  IPPRE1_IPPRE1_EC_regr_ippre_rgn3_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_EC_regr_ippre_rgn3_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_EC_regr_ippre_rgn3_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_EC_regr_ippre_rgn3_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_EC_regr_ippre_rgn3_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_EC_regr_ippre_rgn3_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_EC_get_regr_ippre_rgn3_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_EC_get_regr_ippre_rgn3_cnt_u(data)                        (0x0000FFFF&(data))

#define  IPPRE1_IPPRE1_F0                                                       0x180995F0
#define  IPPRE1_IPPRE1_F0_reg_addr                                               "0xB80995F0"
#define  IPPRE1_IPPRE1_F0_reg                                                    0xB80995F0
#define  IPPRE1_IPPRE1_F0_inst_addr                                              "0x0006"
#define  set_IPPRE1_IPPRE1_F0_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_F0_reg)=data)
#define  get_IPPRE1_IPPRE1_F0_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_F0_reg))
#define  IPPRE1_IPPRE1_F0_regr_ippre_rgn4_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_F0_regr_ippre_rgn4_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_F0_regr_ippre_rgn4_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_F0_regr_ippre_rgn4_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_F0_regr_ippre_rgn4_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_F0_regr_ippre_rgn4_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_F0_get_regr_ippre_rgn4_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_F0_get_regr_ippre_rgn4_cnt_u(data)                        (0x0000FFFF&(data))

#define  IPPRE1_IPPRE1_F4                                                       0x180995F4
#define  IPPRE1_IPPRE1_F4_reg_addr                                               "0xB80995F4"
#define  IPPRE1_IPPRE1_F4_reg                                                    0xB80995F4
#define  IPPRE1_IPPRE1_F4_inst_addr                                              "0x0007"
#define  set_IPPRE1_IPPRE1_F4_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_F4_reg)=data)
#define  get_IPPRE1_IPPRE1_F4_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_F4_reg))
#define  IPPRE1_IPPRE1_F4_regr_ippre_rgn5_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_F4_regr_ippre_rgn5_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_F4_regr_ippre_rgn5_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_F4_regr_ippre_rgn5_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_F4_regr_ippre_rgn5_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_F4_regr_ippre_rgn5_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_F4_get_regr_ippre_rgn5_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_F4_get_regr_ippre_rgn5_cnt_u(data)                        (0x0000FFFF&(data))

#define  IPPRE1_IPPRE1_F8                                                       0x180995F8
#define  IPPRE1_IPPRE1_F8_reg_addr                                               "0xB80995F8"
#define  IPPRE1_IPPRE1_F8_reg                                                    0xB80995F8
#define  IPPRE1_IPPRE1_F8_inst_addr                                              "0x0008"
#define  set_IPPRE1_IPPRE1_F8_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_F8_reg)=data)
#define  get_IPPRE1_IPPRE1_F8_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_F8_reg))
#define  IPPRE1_IPPRE1_F8_regr_ippre_rgn6_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_F8_regr_ippre_rgn6_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_F8_regr_ippre_rgn6_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_F8_regr_ippre_rgn6_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_F8_regr_ippre_rgn6_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_F8_regr_ippre_rgn6_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_F8_get_regr_ippre_rgn6_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_F8_get_regr_ippre_rgn6_cnt_u(data)                        (0x0000FFFF&(data))

#define  IPPRE1_IPPRE1_FC                                                       0x180995FC
#define  IPPRE1_IPPRE1_FC_reg_addr                                               "0xB80995FC"
#define  IPPRE1_IPPRE1_FC_reg                                                    0xB80995FC
#define  IPPRE1_IPPRE1_FC_inst_addr                                              "0x0009"
#define  set_IPPRE1_IPPRE1_FC_reg(data)                                          (*((volatile unsigned int*)IPPRE1_IPPRE1_FC_reg)=data)
#define  get_IPPRE1_IPPRE1_FC_reg                                                (*((volatile unsigned int*)IPPRE1_IPPRE1_FC_reg))
#define  IPPRE1_IPPRE1_FC_regr_ippre_rgn7_cnt_v_shift                            (16)
#define  IPPRE1_IPPRE1_FC_regr_ippre_rgn7_cnt_u_shift                            (0)
#define  IPPRE1_IPPRE1_FC_regr_ippre_rgn7_cnt_v_mask                             (0xFFFF0000)
#define  IPPRE1_IPPRE1_FC_regr_ippre_rgn7_cnt_u_mask                             (0x0000FFFF)
#define  IPPRE1_IPPRE1_FC_regr_ippre_rgn7_cnt_v(data)                            (0xFFFF0000&((data)<<16))
#define  IPPRE1_IPPRE1_FC_regr_ippre_rgn7_cnt_u(data)                            (0x0000FFFF&(data))
#define  IPPRE1_IPPRE1_FC_get_regr_ippre_rgn7_cnt_v(data)                        ((0xFFFF0000&(data))>>16)
#define  IPPRE1_IPPRE1_FC_get_regr_ippre_rgn7_cnt_u(data)                        (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======IPPRE1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_color_amount_hact:12;
        RBus_UInt32  ippre_color_amount_center_v:10;
        RBus_UInt32  ippre_color_amount_center_u:10;
    };
}ippre1_ippre1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:18;
        RBus_UInt32  ippre_color_amount_shft:2;
        RBus_UInt32  ippre_color_amount_vact:12;
    };
}ippre1_ippre1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn0_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn0_cnt_u:16;
    };
}ippre1_ippre1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn1_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn1_cnt_u:16;
    };
}ippre1_ippre1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn2_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn2_cnt_u:16;
    };
}ippre1_ippre1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn3_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn3_cnt_u:16;
    };
}ippre1_ippre1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn4_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn4_cnt_u:16;
    };
}ippre1_ippre1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn5_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn5_cnt_u:16;
    };
}ippre1_ippre1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn6_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn6_cnt_u:16;
    };
}ippre1_ippre1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn7_cnt_v:16;
        RBus_UInt32  regr_ippre_rgn7_cnt_u:16;
    };
}ippre1_ippre1_fc_RBUS;

#else //apply LITTLE_ENDIAN

//======IPPRE1 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_color_amount_center_u:10;
        RBus_UInt32  ippre_color_amount_center_v:10;
        RBus_UInt32  ippre_color_amount_hact:12;
    };
}ippre1_ippre1_00_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ippre_color_amount_vact:12;
        RBus_UInt32  ippre_color_amount_shft:2;
        RBus_UInt32  res1:18;
    };
}ippre1_ippre1_04_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn0_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn0_cnt_v:16;
    };
}ippre1_ippre1_e0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn1_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn1_cnt_v:16;
    };
}ippre1_ippre1_e4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn2_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn2_cnt_v:16;
    };
}ippre1_ippre1_e8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn3_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn3_cnt_v:16;
    };
}ippre1_ippre1_ec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn4_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn4_cnt_v:16;
    };
}ippre1_ippre1_f0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn5_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn5_cnt_v:16;
    };
}ippre1_ippre1_f4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn6_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn6_cnt_v:16;
    };
}ippre1_ippre1_f8_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  regr_ippre_rgn7_cnt_u:16;
        RBus_UInt32  regr_ippre_rgn7_cnt_v:16;
    };
}ippre1_ippre1_fc_RBUS;




#endif 


#endif 
