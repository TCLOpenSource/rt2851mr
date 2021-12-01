/**
* @file Merlin5-DesignSpec-I-Domain_2Pto1L
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PTOL_REG_H_
#define _RBUS_PTOL_REG_H_

#include "rbus_types.h"



//  PTOL Register Address
#define  PTOL_PtoL_ctrl                                                         0x18023C80
#define  PTOL_PtoL_ctrl_reg_addr                                                 "0xB8023C80"
#define  PTOL_PtoL_ctrl_reg                                                      0xB8023C80
#define  PTOL_PtoL_ctrl_inst_addr                                                "0x0000"
#define  set_PTOL_PtoL_ctrl_reg(data)                                            (*((volatile unsigned int*)PTOL_PtoL_ctrl_reg)=data)
#define  get_PTOL_PtoL_ctrl_reg                                                  (*((volatile unsigned int*)PTOL_PtoL_ctrl_reg))
#define  PTOL_PtoL_ctrl_den_height_shift                                         (16)
#define  PTOL_PtoL_ctrl_den_width_shift                                          (0)
#define  PTOL_PtoL_ctrl_den_height_mask                                          (0x3FFF0000)
#define  PTOL_PtoL_ctrl_den_width_mask                                           (0x00003FFF)
#define  PTOL_PtoL_ctrl_den_height(data)                                         (0x3FFF0000&((data)<<16))
#define  PTOL_PtoL_ctrl_den_width(data)                                          (0x00003FFF&(data))
#define  PTOL_PtoL_ctrl_get_den_height(data)                                     ((0x3FFF0000&(data))>>16)
#define  PTOL_PtoL_ctrl_get_den_width(data)                                      (0x00003FFF&(data))

#define  PTOL_PtoL_ctrl2                                                        0x18023C84
#define  PTOL_PtoL_ctrl2_reg_addr                                                "0xB8023C84"
#define  PTOL_PtoL_ctrl2_reg                                                     0xB8023C84
#define  PTOL_PtoL_ctrl2_inst_addr                                               "0x0001"
#define  set_PTOL_PtoL_ctrl2_reg(data)                                           (*((volatile unsigned int*)PTOL_PtoL_ctrl2_reg)=data)
#define  get_PTOL_PtoL_ctrl2_reg                                                 (*((volatile unsigned int*)PTOL_PtoL_ctrl2_reg))
#define  PTOL_PtoL_ctrl2_end_phase_shift                                         (8)
#define  PTOL_PtoL_ctrl2_line_swap_en_shift                                      (4)
#define  PTOL_PtoL_ctrl2_ptol_en_shift                                           (0)
#define  PTOL_PtoL_ctrl2_end_phase_mask                                          (0x00000100)
#define  PTOL_PtoL_ctrl2_line_swap_en_mask                                       (0x00000010)
#define  PTOL_PtoL_ctrl2_ptol_en_mask                                            (0x00000001)
#define  PTOL_PtoL_ctrl2_end_phase(data)                                         (0x00000100&((data)<<8))
#define  PTOL_PtoL_ctrl2_line_swap_en(data)                                      (0x00000010&((data)<<4))
#define  PTOL_PtoL_ctrl2_ptol_en(data)                                           (0x00000001&(data))
#define  PTOL_PtoL_ctrl2_get_end_phase(data)                                     ((0x00000100&(data))>>8)
#define  PTOL_PtoL_ctrl2_get_line_swap_en(data)                                  ((0x00000010&(data))>>4)
#define  PTOL_PtoL_ctrl2_get_ptol_en(data)                                       (0x00000001&(data))

#define  PTOL_PtoL_conti_ctrl                                                   0x18023C88
#define  PTOL_PtoL_conti_ctrl_reg_addr                                           "0xB8023C88"
#define  PTOL_PtoL_conti_ctrl_reg                                                0xB8023C88
#define  PTOL_PtoL_conti_ctrl_inst_addr                                          "0x0002"
#define  set_PTOL_PtoL_conti_ctrl_reg(data)                                      (*((volatile unsigned int*)PTOL_PtoL_conti_ctrl_reg)=data)
#define  get_PTOL_PtoL_conti_ctrl_reg                                            (*((volatile unsigned int*)PTOL_PtoL_conti_ctrl_reg))
#define  PTOL_PtoL_conti_ctrl_conti_cap_width_shift                              (4)
#define  PTOL_PtoL_conti_ctrl_conti_cap_en_shift                                 (0)
#define  PTOL_PtoL_conti_ctrl_conti_cap_width_mask                               (0x0003FFF0)
#define  PTOL_PtoL_conti_ctrl_conti_cap_en_mask                                  (0x00000001)
#define  PTOL_PtoL_conti_ctrl_conti_cap_width(data)                              (0x0003FFF0&((data)<<4))
#define  PTOL_PtoL_conti_ctrl_conti_cap_en(data)                                 (0x00000001&(data))
#define  PTOL_PtoL_conti_ctrl_get_conti_cap_width(data)                          ((0x0003FFF0&(data))>>4)
#define  PTOL_PtoL_conti_ctrl_get_conti_cap_en(data)                             (0x00000001&(data))

#define  PTOL_PtoL_conti_status                                                 0x18023C8C
#define  PTOL_PtoL_conti_status_reg_addr                                         "0xB8023C8C"
#define  PTOL_PtoL_conti_status_reg                                              0xB8023C8C
#define  PTOL_PtoL_conti_status_inst_addr                                        "0x0003"
#define  set_PTOL_PtoL_conti_status_reg(data)                                    (*((volatile unsigned int*)PTOL_PtoL_conti_status_reg)=data)
#define  get_PTOL_PtoL_conti_status_reg                                          (*((volatile unsigned int*)PTOL_PtoL_conti_status_reg))
#define  PTOL_PtoL_conti_status_conti_height_shift                               (16)
#define  PTOL_PtoL_conti_status_conti_width_shift                                (0)
#define  PTOL_PtoL_conti_status_conti_height_mask                                (0x3FFF0000)
#define  PTOL_PtoL_conti_status_conti_width_mask                                 (0x00003FFF)
#define  PTOL_PtoL_conti_status_conti_height(data)                               (0x3FFF0000&((data)<<16))
#define  PTOL_PtoL_conti_status_conti_width(data)                                (0x00003FFF&(data))
#define  PTOL_PtoL_conti_status_get_conti_height(data)                           ((0x3FFF0000&(data))>>16)
#define  PTOL_PtoL_conti_status_get_conti_width(data)                            (0x00003FFF&(data))

#define  PTOL_PtoL_debug_ctrl                                                   0x18023C90
#define  PTOL_PtoL_debug_ctrl_reg_addr                                           "0xB8023C90"
#define  PTOL_PtoL_debug_ctrl_reg                                                0xB8023C90
#define  PTOL_PtoL_debug_ctrl_inst_addr                                          "0x0004"
#define  set_PTOL_PtoL_debug_ctrl_reg(data)                                      (*((volatile unsigned int*)PTOL_PtoL_debug_ctrl_reg)=data)
#define  get_PTOL_PtoL_debug_ctrl_reg                                            (*((volatile unsigned int*)PTOL_PtoL_debug_ctrl_reg))
#define  PTOL_PtoL_debug_ctrl_debug_height_flag_shift                            (24)
#define  PTOL_PtoL_debug_ctrl_debug_width_flag_shift                             (20)
#define  PTOL_PtoL_debug_ctrl_debug_cap_width_shift                              (4)
#define  PTOL_PtoL_debug_ctrl_debug_cap_en_shift                                 (0)
#define  PTOL_PtoL_debug_ctrl_debug_height_flag_mask                             (0x01000000)
#define  PTOL_PtoL_debug_ctrl_debug_width_flag_mask                              (0x00100000)
#define  PTOL_PtoL_debug_ctrl_debug_cap_width_mask                               (0x0003FFF0)
#define  PTOL_PtoL_debug_ctrl_debug_cap_en_mask                                  (0x00000001)
#define  PTOL_PtoL_debug_ctrl_debug_height_flag(data)                            (0x01000000&((data)<<24))
#define  PTOL_PtoL_debug_ctrl_debug_width_flag(data)                             (0x00100000&((data)<<20))
#define  PTOL_PtoL_debug_ctrl_debug_cap_width(data)                              (0x0003FFF0&((data)<<4))
#define  PTOL_PtoL_debug_ctrl_debug_cap_en(data)                                 (0x00000001&(data))
#define  PTOL_PtoL_debug_ctrl_get_debug_height_flag(data)                        ((0x01000000&(data))>>24)
#define  PTOL_PtoL_debug_ctrl_get_debug_width_flag(data)                         ((0x00100000&(data))>>20)
#define  PTOL_PtoL_debug_ctrl_get_debug_cap_width(data)                          ((0x0003FFF0&(data))>>4)
#define  PTOL_PtoL_debug_ctrl_get_debug_cap_en(data)                             (0x00000001&(data))

#define  PTOL_PtoL_debug_status                                                 0x18023C94
#define  PTOL_PtoL_debug_status_reg_addr                                         "0xB8023C94"
#define  PTOL_PtoL_debug_status_reg                                              0xB8023C94
#define  PTOL_PtoL_debug_status_inst_addr                                        "0x0005"
#define  set_PTOL_PtoL_debug_status_reg(data)                                    (*((volatile unsigned int*)PTOL_PtoL_debug_status_reg)=data)
#define  get_PTOL_PtoL_debug_status_reg                                          (*((volatile unsigned int*)PTOL_PtoL_debug_status_reg))
#define  PTOL_PtoL_debug_status_debug_height_shift                               (16)
#define  PTOL_PtoL_debug_status_debug_width_shift                                (0)
#define  PTOL_PtoL_debug_status_debug_height_mask                                (0x3FFF0000)
#define  PTOL_PtoL_debug_status_debug_width_mask                                 (0x00003FFF)
#define  PTOL_PtoL_debug_status_debug_height(data)                               (0x3FFF0000&((data)<<16))
#define  PTOL_PtoL_debug_status_debug_width(data)                                (0x00003FFF&(data))
#define  PTOL_PtoL_debug_status_get_debug_height(data)                           ((0x3FFF0000&(data))>>16)
#define  PTOL_PtoL_debug_status_get_debug_width(data)                            (0x00003FFF&(data))

#define  PTOL_PtoL_DB_CTRL                                                      0x18023C98
#define  PTOL_PtoL_DB_CTRL_reg_addr                                              "0xB8023C98"
#define  PTOL_PtoL_DB_CTRL_reg                                                   0xB8023C98
#define  PTOL_PtoL_DB_CTRL_inst_addr                                             "0x0006"
#define  set_PTOL_PtoL_DB_CTRL_reg(data)                                         (*((volatile unsigned int*)PTOL_PtoL_DB_CTRL_reg)=data)
#define  get_PTOL_PtoL_DB_CTRL_reg                                               (*((volatile unsigned int*)PTOL_PtoL_DB_CTRL_reg))
#define  PTOL_PtoL_DB_CTRL_double_buf_read_level_shift                           (2)
#define  PTOL_PtoL_DB_CTRL_double_buf_set_shift                                  (1)
#define  PTOL_PtoL_DB_CTRL_double_buf_en_shift                                   (0)
#define  PTOL_PtoL_DB_CTRL_double_buf_read_level_mask                            (0x00000004)
#define  PTOL_PtoL_DB_CTRL_double_buf_set_mask                                   (0x00000002)
#define  PTOL_PtoL_DB_CTRL_double_buf_en_mask                                    (0x00000001)
#define  PTOL_PtoL_DB_CTRL_double_buf_read_level(data)                           (0x00000004&((data)<<2))
#define  PTOL_PtoL_DB_CTRL_double_buf_set(data)                                  (0x00000002&((data)<<1))
#define  PTOL_PtoL_DB_CTRL_double_buf_en(data)                                   (0x00000001&(data))
#define  PTOL_PtoL_DB_CTRL_get_double_buf_read_level(data)                       ((0x00000004&(data))>>2)
#define  PTOL_PtoL_DB_CTRL_get_double_buf_set(data)                              ((0x00000002&(data))>>1)
#define  PTOL_PtoL_DB_CTRL_get_double_buf_en(data)                               (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PTOL register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  den_height:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  den_width:14;
    };
}ptol_ptol_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  end_phase:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  line_swap_en:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  ptol_en:1;
    };
}ptol_ptol_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  conti_cap_width:14;
        RBus_UInt32  res2:3;
        RBus_UInt32  conti_cap_en:1;
    };
}ptol_ptol_conti_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  conti_height:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  conti_width:14;
    };
}ptol_ptol_conti_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  debug_height_flag:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  debug_width_flag:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  debug_cap_width:14;
        RBus_UInt32  res4:3;
        RBus_UInt32  debug_cap_en:1;
    };
}ptol_ptol_debug_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  debug_height:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  debug_width:14;
    };
}ptol_ptol_debug_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  double_buf_read_level:1;
        RBus_UInt32  double_buf_set:1;
        RBus_UInt32  double_buf_en:1;
    };
}ptol_ptol_db_ctrl_RBUS;

#else //apply LITTLE_ENDIAN

//======PTOL register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  den_width:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  den_height:14;
        RBus_UInt32  res2:2;
    };
}ptol_ptol_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ptol_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  line_swap_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  end_phase:1;
        RBus_UInt32  res3:23;
    };
}ptol_ptol_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  conti_cap_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  conti_cap_width:14;
        RBus_UInt32  res2:14;
    };
}ptol_ptol_conti_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  conti_width:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  conti_height:14;
        RBus_UInt32  res2:2;
    };
}ptol_ptol_conti_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_cap_en:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  debug_cap_width:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  debug_width_flag:1;
        RBus_UInt32  res3:3;
        RBus_UInt32  debug_height_flag:1;
        RBus_UInt32  res4:7;
    };
}ptol_ptol_debug_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  debug_width:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  debug_height:14;
        RBus_UInt32  res2:2;
    };
}ptol_ptol_debug_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  double_buf_en:1;
        RBus_UInt32  double_buf_set:1;
        RBus_UInt32  double_buf_read_level:1;
        RBus_UInt32  res1:29;
    };
}ptol_ptol_db_ctrl_RBUS;




#endif 


#endif 
