/**
* @file Merlin5-DesignSpec-I-Domain_SmartFIT
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SMARTFIT_REG_H_
#define _RBUS_SMARTFIT_REG_H_

#include "rbus_types.h"



//  SMARTFIT Register Address
#define  SMARTFIT_AUTO_FIELD                                                    0x18022000
#define  SMARTFIT_AUTO_FIELD_reg_addr                                            "0xB8022000"
#define  SMARTFIT_AUTO_FIELD_reg                                                 0xB8022000
#define  SMARTFIT_AUTO_FIELD_inst_addr                                           "0x0000"
#define  set_SMARTFIT_AUTO_FIELD_reg(data)                                       (*((volatile unsigned int*)SMARTFIT_AUTO_FIELD_reg)=data)
#define  get_SMARTFIT_AUTO_FIELD_reg                                             (*((volatile unsigned int*)SMARTFIT_AUTO_FIELD_reg))
#define  SMARTFIT_AUTO_FIELD_smartfit_src_sel_shift                              (31)
#define  SMARTFIT_AUTO_FIELD_smfit_en_n_shift                                    (29)
#define  SMARTFIT_AUTO_FIELD_smfit_vs_delay_sel_shift                            (13)
#define  SMARTFIT_AUTO_FIELD_vgip_db_disable_shift                               (12)
#define  SMARTFIT_AUTO_FIELD_adj_source_shift                                    (10)
#define  SMARTFIT_AUTO_FIELD_rl_sel_en_shift                                     (9)
#define  SMARTFIT_AUTO_FIELD_rl_sel_shift                                        (8)
#define  SMARTFIT_AUTO_FIELD_odd_sel_en_shift                                    (7)
#define  SMARTFIT_AUTO_FIELD_odd_sel_shift                                       (6)
#define  SMARTFIT_AUTO_FIELD_no_hs_mode_shift                                    (5)
#define  SMARTFIT_AUTO_FIELD_smartfit_src_sel_mask                               (0x80000000)
#define  SMARTFIT_AUTO_FIELD_smfit_en_n_mask                                     (0x20000000)
#define  SMARTFIT_AUTO_FIELD_smfit_vs_delay_sel_mask                             (0x00002000)
#define  SMARTFIT_AUTO_FIELD_vgip_db_disable_mask                                (0x00001000)
#define  SMARTFIT_AUTO_FIELD_adj_source_mask                                     (0x00000C00)
#define  SMARTFIT_AUTO_FIELD_rl_sel_en_mask                                      (0x00000200)
#define  SMARTFIT_AUTO_FIELD_rl_sel_mask                                         (0x00000100)
#define  SMARTFIT_AUTO_FIELD_odd_sel_en_mask                                     (0x00000080)
#define  SMARTFIT_AUTO_FIELD_odd_sel_mask                                        (0x00000040)
#define  SMARTFIT_AUTO_FIELD_no_hs_mode_mask                                     (0x00000020)
#define  SMARTFIT_AUTO_FIELD_smartfit_src_sel(data)                              (0x80000000&((data)<<31))
#define  SMARTFIT_AUTO_FIELD_smfit_en_n(data)                                    (0x20000000&((data)<<29))
#define  SMARTFIT_AUTO_FIELD_smfit_vs_delay_sel(data)                            (0x00002000&((data)<<13))
#define  SMARTFIT_AUTO_FIELD_vgip_db_disable(data)                               (0x00001000&((data)<<12))
#define  SMARTFIT_AUTO_FIELD_adj_source(data)                                    (0x00000C00&((data)<<10))
#define  SMARTFIT_AUTO_FIELD_rl_sel_en(data)                                     (0x00000200&((data)<<9))
#define  SMARTFIT_AUTO_FIELD_rl_sel(data)                                        (0x00000100&((data)<<8))
#define  SMARTFIT_AUTO_FIELD_odd_sel_en(data)                                    (0x00000080&((data)<<7))
#define  SMARTFIT_AUTO_FIELD_odd_sel(data)                                       (0x00000040&((data)<<6))
#define  SMARTFIT_AUTO_FIELD_no_hs_mode(data)                                    (0x00000020&((data)<<5))
#define  SMARTFIT_AUTO_FIELD_get_smartfit_src_sel(data)                          ((0x80000000&(data))>>31)
#define  SMARTFIT_AUTO_FIELD_get_smfit_en_n(data)                                ((0x20000000&(data))>>29)
#define  SMARTFIT_AUTO_FIELD_get_smfit_vs_delay_sel(data)                        ((0x00002000&(data))>>13)
#define  SMARTFIT_AUTO_FIELD_get_vgip_db_disable(data)                           ((0x00001000&(data))>>12)
#define  SMARTFIT_AUTO_FIELD_get_adj_source(data)                                ((0x00000C00&(data))>>10)
#define  SMARTFIT_AUTO_FIELD_get_rl_sel_en(data)                                 ((0x00000200&(data))>>9)
#define  SMARTFIT_AUTO_FIELD_get_rl_sel(data)                                    ((0x00000100&(data))>>8)
#define  SMARTFIT_AUTO_FIELD_get_odd_sel_en(data)                                ((0x00000080&(data))>>7)
#define  SMARTFIT_AUTO_FIELD_get_odd_sel(data)                                   ((0x00000040&(data))>>6)
#define  SMARTFIT_AUTO_FIELD_get_no_hs_mode(data)                                ((0x00000020&(data))>>5)

#define  SMARTFIT_AUTO_H_BOUNDARY                                               0x18022004
#define  SMARTFIT_AUTO_H_BOUNDARY_reg_addr                                       "0xB8022004"
#define  SMARTFIT_AUTO_H_BOUNDARY_reg                                            0xB8022004
#define  SMARTFIT_AUTO_H_BOUNDARY_inst_addr                                      "0x0001"
#define  set_SMARTFIT_AUTO_H_BOUNDARY_reg(data)                                  (*((volatile unsigned int*)SMARTFIT_AUTO_H_BOUNDARY_reg)=data)
#define  get_SMARTFIT_AUTO_H_BOUNDARY_reg                                        (*((volatile unsigned int*)SMARTFIT_AUTO_H_BOUNDARY_reg))
#define  SMARTFIT_AUTO_H_BOUNDARY_hb_sta_shift                                   (16)
#define  SMARTFIT_AUTO_H_BOUNDARY_hb_end_shift                                   (0)
#define  SMARTFIT_AUTO_H_BOUNDARY_hb_sta_mask                                    (0x3FFF0000)
#define  SMARTFIT_AUTO_H_BOUNDARY_hb_end_mask                                    (0x00003FFF)
#define  SMARTFIT_AUTO_H_BOUNDARY_hb_sta(data)                                   (0x3FFF0000&((data)<<16))
#define  SMARTFIT_AUTO_H_BOUNDARY_hb_end(data)                                   (0x00003FFF&(data))
#define  SMARTFIT_AUTO_H_BOUNDARY_get_hb_sta(data)                               ((0x3FFF0000&(data))>>16)
#define  SMARTFIT_AUTO_H_BOUNDARY_get_hb_end(data)                               (0x00003FFF&(data))

#define  SMARTFIT_AUTO_V_BOUNDARY                                               0x18022008
#define  SMARTFIT_AUTO_V_BOUNDARY_reg_addr                                       "0xB8022008"
#define  SMARTFIT_AUTO_V_BOUNDARY_reg                                            0xB8022008
#define  SMARTFIT_AUTO_V_BOUNDARY_inst_addr                                      "0x0002"
#define  set_SMARTFIT_AUTO_V_BOUNDARY_reg(data)                                  (*((volatile unsigned int*)SMARTFIT_AUTO_V_BOUNDARY_reg)=data)
#define  get_SMARTFIT_AUTO_V_BOUNDARY_reg                                        (*((volatile unsigned int*)SMARTFIT_AUTO_V_BOUNDARY_reg))
#define  SMARTFIT_AUTO_V_BOUNDARY_vb_sta_shift                                   (16)
#define  SMARTFIT_AUTO_V_BOUNDARY_vb_end_shift                                   (0)
#define  SMARTFIT_AUTO_V_BOUNDARY_vb_sta_mask                                    (0x3FFF0000)
#define  SMARTFIT_AUTO_V_BOUNDARY_vb_end_mask                                    (0x00003FFF)
#define  SMARTFIT_AUTO_V_BOUNDARY_vb_sta(data)                                   (0x3FFF0000&((data)<<16))
#define  SMARTFIT_AUTO_V_BOUNDARY_vb_end(data)                                   (0x00003FFF&(data))
#define  SMARTFIT_AUTO_V_BOUNDARY_get_vb_sta(data)                               ((0x3FFF0000&(data))>>16)
#define  SMARTFIT_AUTO_V_BOUNDARY_get_vb_end(data)                               (0x00003FFF&(data))

#define  SMARTFIT_AUTO_R_G_B_MARGIN                                             0x1802200C
#define  SMARTFIT_AUTO_R_G_B_MARGIN_reg_addr                                     "0xB802200C"
#define  SMARTFIT_AUTO_R_G_B_MARGIN_reg                                          0xB802200C
#define  SMARTFIT_AUTO_R_G_B_MARGIN_inst_addr                                    "0x0003"
#define  set_SMARTFIT_AUTO_R_G_B_MARGIN_reg(data)                                (*((volatile unsigned int*)SMARTFIT_AUTO_R_G_B_MARGIN_reg)=data)
#define  get_SMARTFIT_AUTO_R_G_B_MARGIN_reg                                      (*((volatile unsigned int*)SMARTFIT_AUTO_R_G_B_MARGIN_reg))
#define  SMARTFIT_AUTO_R_G_B_MARGIN_red_nm_shift                                 (26)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_grn_nm_shift                                 (18)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_vb_th_shift                                  (16)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_blu_nm_shift                                 (10)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_dummy_9_shift                                (9)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_red_nm_mask                                  (0xFC000000)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_grn_nm_mask                                  (0x00FC0000)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_vb_th_mask                                   (0x00030000)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_blu_nm_mask                                  (0x0000FC00)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_dummy_9_mask                                 (0x00000200)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_red_nm(data)                                 (0xFC000000&((data)<<26))
#define  SMARTFIT_AUTO_R_G_B_MARGIN_grn_nm(data)                                 (0x00FC0000&((data)<<18))
#define  SMARTFIT_AUTO_R_G_B_MARGIN_vb_th(data)                                  (0x00030000&((data)<<16))
#define  SMARTFIT_AUTO_R_G_B_MARGIN_blu_nm(data)                                 (0x0000FC00&((data)<<10))
#define  SMARTFIT_AUTO_R_G_B_MARGIN_dummy_9(data)                                (0x00000200&((data)<<9))
#define  SMARTFIT_AUTO_R_G_B_MARGIN_get_red_nm(data)                             ((0xFC000000&(data))>>26)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_get_grn_nm(data)                             ((0x00FC0000&(data))>>18)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_get_vb_th(data)                              ((0x00030000&(data))>>16)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_get_blu_nm(data)                             ((0x0000FC00&(data))>>10)
#define  SMARTFIT_AUTO_R_G_B_MARGIN_get_dummy_9(data)                            ((0x00000200&(data))>>9)

#define  SMARTFIT_AUTO_ADJ                                                      0x18022010
#define  SMARTFIT_AUTO_ADJ_reg_addr                                              "0xB8022010"
#define  SMARTFIT_AUTO_ADJ_reg                                                   0xB8022010
#define  SMARTFIT_AUTO_ADJ_inst_addr                                             "0x0004"
#define  set_SMARTFIT_AUTO_ADJ_reg(data)                                         (*((volatile unsigned int*)SMARTFIT_AUTO_ADJ_reg)=data)
#define  get_SMARTFIT_AUTO_ADJ_reg                                               (*((volatile unsigned int*)SMARTFIT_AUTO_ADJ_reg))
#define  SMARTFIT_AUTO_ADJ_m_vgen_en_shift                                       (7)
#define  SMARTFIT_AUTO_ADJ_dummy_1_shift                                         (1)
#define  SMARTFIT_AUTO_ADJ_now_af_shift                                          (0)
#define  SMARTFIT_AUTO_ADJ_m_vgen_en_mask                                        (0x00000080)
#define  SMARTFIT_AUTO_ADJ_dummy_1_mask                                          (0x00000002)
#define  SMARTFIT_AUTO_ADJ_now_af_mask                                           (0x00000001)
#define  SMARTFIT_AUTO_ADJ_m_vgen_en(data)                                       (0x00000080&((data)<<7))
#define  SMARTFIT_AUTO_ADJ_dummy_1(data)                                         (0x00000002&((data)<<1))
#define  SMARTFIT_AUTO_ADJ_now_af(data)                                          (0x00000001&(data))
#define  SMARTFIT_AUTO_ADJ_get_m_vgen_en(data)                                   ((0x00000080&(data))>>7)
#define  SMARTFIT_AUTO_ADJ_get_dummy_1(data)                                     ((0x00000002&(data))>>1)
#define  SMARTFIT_AUTO_ADJ_get_now_af(data)                                      (0x00000001&(data))

#define  SMARTFIT_AUTO_RESULT_VSTA_END                                          0x18022014
#define  SMARTFIT_AUTO_RESULT_VSTA_END_reg_addr                                  "0xB8022014"
#define  SMARTFIT_AUTO_RESULT_VSTA_END_reg                                       0xB8022014
#define  SMARTFIT_AUTO_RESULT_VSTA_END_inst_addr                                 "0x0005"
#define  set_SMARTFIT_AUTO_RESULT_VSTA_END_reg(data)                             (*((volatile unsigned int*)SMARTFIT_AUTO_RESULT_VSTA_END_reg)=data)
#define  get_SMARTFIT_AUTO_RESULT_VSTA_END_reg                                   (*((volatile unsigned int*)SMARTFIT_AUTO_RESULT_VSTA_END_reg))
#define  SMARTFIT_AUTO_RESULT_VSTA_END_vx_sta_shift                              (16)
#define  SMARTFIT_AUTO_RESULT_VSTA_END_vx_end_shift                              (0)
#define  SMARTFIT_AUTO_RESULT_VSTA_END_vx_sta_mask                               (0x3FFF0000)
#define  SMARTFIT_AUTO_RESULT_VSTA_END_vx_end_mask                               (0x00003FFF)
#define  SMARTFIT_AUTO_RESULT_VSTA_END_vx_sta(data)                              (0x3FFF0000&((data)<<16))
#define  SMARTFIT_AUTO_RESULT_VSTA_END_vx_end(data)                              (0x00003FFF&(data))
#define  SMARTFIT_AUTO_RESULT_VSTA_END_get_vx_sta(data)                          ((0x3FFF0000&(data))>>16)
#define  SMARTFIT_AUTO_RESULT_VSTA_END_get_vx_end(data)                          (0x00003FFF&(data))

#define  SMARTFIT_AUTO_RESULT_HSTA_END                                          0x18022018
#define  SMARTFIT_AUTO_RESULT_HSTA_END_reg_addr                                  "0xB8022018"
#define  SMARTFIT_AUTO_RESULT_HSTA_END_reg                                       0xB8022018
#define  SMARTFIT_AUTO_RESULT_HSTA_END_inst_addr                                 "0x0006"
#define  set_SMARTFIT_AUTO_RESULT_HSTA_END_reg(data)                             (*((volatile unsigned int*)SMARTFIT_AUTO_RESULT_HSTA_END_reg)=data)
#define  get_SMARTFIT_AUTO_RESULT_HSTA_END_reg                                   (*((volatile unsigned int*)SMARTFIT_AUTO_RESULT_HSTA_END_reg))
#define  SMARTFIT_AUTO_RESULT_HSTA_END_hx_sta_shift                              (16)
#define  SMARTFIT_AUTO_RESULT_HSTA_END_hx_end_shift                              (0)
#define  SMARTFIT_AUTO_RESULT_HSTA_END_hx_sta_mask                               (0x3FFF0000)
#define  SMARTFIT_AUTO_RESULT_HSTA_END_hx_end_mask                               (0x00003FFF)
#define  SMARTFIT_AUTO_RESULT_HSTA_END_hx_sta(data)                              (0x3FFF0000&((data)<<16))
#define  SMARTFIT_AUTO_RESULT_HSTA_END_hx_end(data)                              (0x00003FFF&(data))
#define  SMARTFIT_AUTO_RESULT_HSTA_END_get_hx_sta(data)                          ((0x3FFF0000&(data))>>16)
#define  SMARTFIT_AUTO_RESULT_HSTA_END_get_hx_end(data)                          (0x00003FFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SMARTFIT register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  smartfit_src_sel:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  smfit_en_n:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  smfit_vs_delay_sel:1;
        RBus_UInt32  vgip_db_disable:1;
        RBus_UInt32  adj_source:2;
        RBus_UInt32  rl_sel_en:1;
        RBus_UInt32  rl_sel:1;
        RBus_UInt32  odd_sel_en:1;
        RBus_UInt32  odd_sel:1;
        RBus_UInt32  no_hs_mode:1;
        RBus_UInt32  res3:5;
    };
}smartfit_auto_field_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hb_sta:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  hb_end:14;
    };
}smartfit_auto_h_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vb_sta:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  vb_end:14;
    };
}smartfit_auto_v_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  red_nm:6;
        RBus_UInt32  res1:2;
        RBus_UInt32  grn_nm:6;
        RBus_UInt32  vb_th:2;
        RBus_UInt32  blu_nm:6;
        RBus_UInt32  dummy1802200c_9:1;
        RBus_UInt32  res2:9;
    };
}smartfit_auto_r_g_b_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  m_vgen_en:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  dummy18022010_1:1;
        RBus_UInt32  now_af:1;
    };
}smartfit_auto_adj_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vx_sta:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  vx_end:14;
    };
}smartfit_auto_result_vsta_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  hx_sta:14;
        RBus_UInt32  res2:2;
        RBus_UInt32  hx_end:14;
    };
}smartfit_auto_result_hsta_end_RBUS;

#else //apply LITTLE_ENDIAN

//======SMARTFIT register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:5;
        RBus_UInt32  no_hs_mode:1;
        RBus_UInt32  odd_sel:1;
        RBus_UInt32  odd_sel_en:1;
        RBus_UInt32  rl_sel:1;
        RBus_UInt32  rl_sel_en:1;
        RBus_UInt32  adj_source:2;
        RBus_UInt32  vgip_db_disable:1;
        RBus_UInt32  smfit_vs_delay_sel:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  smfit_en_n:1;
        RBus_UInt32  res3:1;
        RBus_UInt32  smartfit_src_sel:1;
    };
}smartfit_auto_field_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hb_end:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hb_sta:14;
        RBus_UInt32  res2:2;
    };
}smartfit_auto_h_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vb_end:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  vb_sta:14;
        RBus_UInt32  res2:2;
    };
}smartfit_auto_v_boundary_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  dummy1802200c_9:1;
        RBus_UInt32  blu_nm:6;
        RBus_UInt32  vb_th:2;
        RBus_UInt32  grn_nm:6;
        RBus_UInt32  res2:2;
        RBus_UInt32  red_nm:6;
    };
}smartfit_auto_r_g_b_margin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  now_af:1;
        RBus_UInt32  dummy18022010_1:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  m_vgen_en:1;
        RBus_UInt32  res2:24;
    };
}smartfit_auto_adj_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vx_end:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  vx_sta:14;
        RBus_UInt32  res2:2;
    };
}smartfit_auto_result_vsta_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hx_end:14;
        RBus_UInt32  res1:2;
        RBus_UInt32  hx_sta:14;
        RBus_UInt32  res2:2;
    };
}smartfit_auto_result_hsta_end_RBUS;




#endif 


#endif 
