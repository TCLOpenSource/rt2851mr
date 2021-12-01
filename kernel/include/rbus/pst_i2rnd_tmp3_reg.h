/**
* @file Merlin5-DesignSpec-IMD_smooth_toggle_double_buffer_detail_register
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_PST_I2RND_TMP3_REG_H_
#define _RBUS_PST_I2RND_TMP3_REG_H_

#include "rbus_types.h"



//  PST_I2RND_TMP3 Register Address
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width                                0x18022218
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_reg_addr                        "0xB8022218"
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_reg                             0xB8022218
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_inst_addr                       "0x0000"
#define  set_PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_reg(data)                   (*((volatile unsigned int*)PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_reg)=data)
#define  get_PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_reg                         (*((volatile unsigned int*)PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_reg))
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_ih_act_sta_shift            (16)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_bypass_den_shift            (14)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_ih_act_wid_shift            (0)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_ih_act_sta_mask             (0x3FFF0000)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_bypass_den_mask             (0x00004000)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_ih_act_wid_mask             (0x00003FFF)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_ih_act_sta(data)            (0x3FFF0000&((data)<<16))
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_bypass_den(data)            (0x00004000&((data)<<14))
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_ch1_ih_act_wid(data)            (0x00003FFF&(data))
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_get_ch1_ih_act_sta(data)        ((0x3FFF0000&(data))>>16)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_get_ch1_bypass_den(data)        ((0x00004000&(data))>>14)
#define  PST_I2RND_TMP3_VGIP_CHN1_ACT_HSTA_Width_get_ch1_ih_act_wid(data)        (0x00003FFF&(data))

#define  PST_I2RND_TMP3_i2r_db_reg_ctl                                          0x1802453C
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg_addr                                  "0xB802453C"
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg                                       0xB802453C
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_inst_addr                                 "0x0001"
#define  set_PST_I2RND_TMP3_i2r_db_reg_ctl_reg(data)                             (*((volatile unsigned int*)PST_I2RND_TMP3_i2r_db_reg_ctl_reg)=data)
#define  get_PST_I2RND_TMP3_i2r_db_reg_ctl_reg                                   (*((volatile unsigned int*)PST_I2RND_TMP3_i2r_db_reg_ctl_reg))
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg_sm_size_change_sw_detect_en_shift     (1)
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg_sm_size_change_hw_detect_en_shift     (0)
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg_sm_size_change_sw_detect_en_mask      (0x00000002)
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg_sm_size_change_hw_detect_en_mask      (0x00000001)
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg_sm_size_change_sw_detect_en(data)     (0x00000002&((data)<<1))
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_reg_sm_size_change_hw_detect_en(data)     (0x00000001&(data))
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_get_reg_sm_size_change_sw_detect_en(data) ((0x00000002&(data))>>1)
#define  PST_I2RND_TMP3_i2r_db_reg_ctl_get_reg_sm_size_change_hw_detect_en(data) (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======PST_I2RND_TMP3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  ch1_ih_act_sta:14;
        RBus_UInt32  res2:1;
        RBus_UInt32  ch1_bypass_den:1;
        RBus_UInt32  ch1_ih_act_wid:14;
    };
}pst_i2rnd_tmp3_vgip_chn1_act_hsta_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  reg_sm_size_change_sw_detect_en:1;
        RBus_UInt32  reg_sm_size_change_hw_detect_en:1;
    };
}pst_i2rnd_tmp3_i2r_db_reg_ctl_RBUS;

#else //apply LITTLE_ENDIAN

//======PST_I2RND_TMP3 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ch1_ih_act_wid:14;
        RBus_UInt32  ch1_bypass_den:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ch1_ih_act_sta:14;
        RBus_UInt32  res2:2;
    };
}pst_i2rnd_tmp3_vgip_chn1_act_hsta_width_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_sm_size_change_hw_detect_en:1;
        RBus_UInt32  reg_sm_size_change_sw_detect_en:1;
        RBus_UInt32  res1:30;
    };
}pst_i2rnd_tmp3_i2r_db_reg_ctl_RBUS;




#endif 


#endif 
