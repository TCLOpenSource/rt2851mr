/**
* @file Merlin5-DesignSpec-D-Domain_Panel_Compensation
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_COLOR_TEMP_REG_H_
#define _RBUS_COLOR_TEMP_REG_H_

#include "rbus_types.h"



//  COLOR_TEMP Register Address
#define  COLOR_TEMP_Color_Temp_CTRL                                             0x1802C400
#define  COLOR_TEMP_Color_Temp_CTRL_reg_addr                                     "0xB802C400"
#define  COLOR_TEMP_Color_Temp_CTRL_reg                                          0xB802C400
#define  COLOR_TEMP_Color_Temp_CTRL_inst_addr                                    "0x0000"
#define  set_COLOR_TEMP_Color_Temp_CTRL_reg(data)                                (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_CTRL_reg)=data)
#define  get_COLOR_TEMP_Color_Temp_CTRL_reg                                      (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_CTRL_reg))
#define  COLOR_TEMP_Color_Temp_CTRL_color_temp_en_shift                          (0)
#define  COLOR_TEMP_Color_Temp_CTRL_color_temp_en_mask                           (0x00000001)
#define  COLOR_TEMP_Color_Temp_CTRL_color_temp_en(data)                          (0x00000001&(data))
#define  COLOR_TEMP_Color_Temp_CTRL_get_color_temp_en(data)                      (0x00000001&(data))

#define  COLOR_TEMP_Color_Temp_Contrast_0                                       0x1802C404
#define  COLOR_TEMP_Color_Temp_Contrast_0_reg_addr                               "0xB802C404"
#define  COLOR_TEMP_Color_Temp_Contrast_0_reg                                    0xB802C404
#define  COLOR_TEMP_Color_Temp_Contrast_0_inst_addr                              "0x0001"
#define  set_COLOR_TEMP_Color_Temp_Contrast_0_reg(data)                          (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Contrast_0_reg)=data)
#define  get_COLOR_TEMP_Color_Temp_Contrast_0_reg                                (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Contrast_0_reg))
#define  COLOR_TEMP_Color_Temp_Contrast_0_contrast_g_shift                       (16)
#define  COLOR_TEMP_Color_Temp_Contrast_0_contrast_r_shift                       (0)
#define  COLOR_TEMP_Color_Temp_Contrast_0_contrast_g_mask                        (0x0FFF0000)
#define  COLOR_TEMP_Color_Temp_Contrast_0_contrast_r_mask                        (0x00000FFF)
#define  COLOR_TEMP_Color_Temp_Contrast_0_contrast_g(data)                       (0x0FFF0000&((data)<<16))
#define  COLOR_TEMP_Color_Temp_Contrast_0_contrast_r(data)                       (0x00000FFF&(data))
#define  COLOR_TEMP_Color_Temp_Contrast_0_get_contrast_g(data)                   ((0x0FFF0000&(data))>>16)
#define  COLOR_TEMP_Color_Temp_Contrast_0_get_contrast_r(data)                   (0x00000FFF&(data))

#define  COLOR_TEMP_Color_Temp_Contrast_1                                       0x1802C408
#define  COLOR_TEMP_Color_Temp_Contrast_1_reg_addr                               "0xB802C408"
#define  COLOR_TEMP_Color_Temp_Contrast_1_reg                                    0xB802C408
#define  COLOR_TEMP_Color_Temp_Contrast_1_inst_addr                              "0x0002"
#define  set_COLOR_TEMP_Color_Temp_Contrast_1_reg(data)                          (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Contrast_1_reg)=data)
#define  get_COLOR_TEMP_Color_Temp_Contrast_1_reg                                (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Contrast_1_reg))
#define  COLOR_TEMP_Color_Temp_Contrast_1_contrast_b_shift                       (0)
#define  COLOR_TEMP_Color_Temp_Contrast_1_contrast_b_mask                        (0x00000FFF)
#define  COLOR_TEMP_Color_Temp_Contrast_1_contrast_b(data)                       (0x00000FFF&(data))
#define  COLOR_TEMP_Color_Temp_Contrast_1_get_contrast_b(data)                   (0x00000FFF&(data))

#define  COLOR_TEMP_Color_Temp_Brightness_0                                     0x1802C40C
#define  COLOR_TEMP_Color_Temp_Brightness_0_reg_addr                             "0xB802C40C"
#define  COLOR_TEMP_Color_Temp_Brightness_0_reg                                  0xB802C40C
#define  COLOR_TEMP_Color_Temp_Brightness_0_inst_addr                            "0x0003"
#define  set_COLOR_TEMP_Color_Temp_Brightness_0_reg(data)                        (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Brightness_0_reg)=data)
#define  get_COLOR_TEMP_Color_Temp_Brightness_0_reg                              (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Brightness_0_reg))
#define  COLOR_TEMP_Color_Temp_Brightness_0_bright_g_shift                       (16)
#define  COLOR_TEMP_Color_Temp_Brightness_0_bright_r_shift                       (0)
#define  COLOR_TEMP_Color_Temp_Brightness_0_bright_g_mask                        (0x0FFF0000)
#define  COLOR_TEMP_Color_Temp_Brightness_0_bright_r_mask                        (0x00000FFF)
#define  COLOR_TEMP_Color_Temp_Brightness_0_bright_g(data)                       (0x0FFF0000&((data)<<16))
#define  COLOR_TEMP_Color_Temp_Brightness_0_bright_r(data)                       (0x00000FFF&(data))
#define  COLOR_TEMP_Color_Temp_Brightness_0_get_bright_g(data)                   ((0x0FFF0000&(data))>>16)
#define  COLOR_TEMP_Color_Temp_Brightness_0_get_bright_r(data)                   (0x00000FFF&(data))

#define  COLOR_TEMP_Color_Temp_Brightness_1                                     0x1802C410
#define  COLOR_TEMP_Color_Temp_Brightness_1_reg_addr                             "0xB802C410"
#define  COLOR_TEMP_Color_Temp_Brightness_1_reg                                  0xB802C410
#define  COLOR_TEMP_Color_Temp_Brightness_1_inst_addr                            "0x0004"
#define  set_COLOR_TEMP_Color_Temp_Brightness_1_reg(data)                        (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Brightness_1_reg)=data)
#define  get_COLOR_TEMP_Color_Temp_Brightness_1_reg                              (*((volatile unsigned int*)COLOR_TEMP_Color_Temp_Brightness_1_reg))
#define  COLOR_TEMP_Color_Temp_Brightness_1_bright_b_shift                       (0)
#define  COLOR_TEMP_Color_Temp_Brightness_1_bright_b_mask                        (0x00000FFF)
#define  COLOR_TEMP_Color_Temp_Brightness_1_bright_b(data)                       (0x00000FFF&(data))
#define  COLOR_TEMP_Color_Temp_Brightness_1_get_bright_b(data)                   (0x00000FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======COLOR_TEMP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  color_temp_en:1;
    };
}color_temp_color_temp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  contrast_g:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  contrast_r:12;
    };
}color_temp_color_temp_contrast_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  contrast_b:12;
    };
}color_temp_color_temp_contrast_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bright_g:12;
        RBus_UInt32  res2:4;
        RBus_UInt32  bright_r:12;
    };
}color_temp_color_temp_brightness_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  bright_b:12;
    };
}color_temp_color_temp_brightness_1_RBUS;

#else //apply LITTLE_ENDIAN

//======COLOR_TEMP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  color_temp_en:1;
        RBus_UInt32  res1:31;
    };
}color_temp_color_temp_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  contrast_r:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  contrast_g:12;
        RBus_UInt32  res2:4;
    };
}color_temp_color_temp_contrast_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  contrast_b:12;
        RBus_UInt32  res1:20;
    };
}color_temp_color_temp_contrast_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bright_r:12;
        RBus_UInt32  res1:4;
        RBus_UInt32  bright_g:12;
        RBus_UInt32  res2:4;
    };
}color_temp_color_temp_brightness_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bright_b:12;
        RBus_UInt32  res1:20;
    };
}color_temp_color_temp_brightness_1_RBUS;




#endif 


#endif 
