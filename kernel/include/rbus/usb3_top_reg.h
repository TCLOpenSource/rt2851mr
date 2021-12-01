/**
* @file Merlin5_DesignSpec-USB3
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_USB3_TOP_REG_H_
#define _RBUS_USB3_TOP_REG_H_

#include "rbus_types.h"



//  USB3_TOP Register Address
#define  USB3_TOP_WRAP_CTR                                                      0x1805A000
#define  USB3_TOP_WRAP_CTR_reg_addr                                              "0xB805A000"
#define  USB3_TOP_WRAP_CTR_reg                                                   0xB805A000
#define  USB3_TOP_WRAP_CTR_inst_addr                                             "0x0000"
#define  set_USB3_TOP_WRAP_CTR_reg(data)                                         (*((volatile unsigned int*)USB3_TOP_WRAP_CTR_reg)=data)
#define  get_USB3_TOP_WRAP_CTR_reg                                               (*((volatile unsigned int*)USB3_TOP_WRAP_CTR_reg))
#define  USB3_TOP_WRAP_CTR_dbus_wdone_counter_shift                              (7)
#define  USB3_TOP_WRAP_CTR_dbus_wdone_counter_soft_reset_shift                   (6)
#define  USB3_TOP_WRAP_CTR_dbus_multi_wmask_opt_shift                            (5)
#define  USB3_TOP_WRAP_CTR_dbus_wait_wdone_shift                                 (4)
#define  USB3_TOP_WRAP_CTR_sram_debug_sel_shift                                  (3)
#define  USB3_TOP_WRAP_CTR_sram_debug_mode_shift                                 (2)
#define  USB3_TOP_WRAP_CTR_dbus_multi_req_disable_shift                          (1)
#define  USB3_TOP_WRAP_CTR_dev_mode_shift                                        (0)
#define  USB3_TOP_WRAP_CTR_dbus_wdone_counter_mask                               (0x00000F80)
#define  USB3_TOP_WRAP_CTR_dbus_wdone_counter_soft_reset_mask                    (0x00000040)
#define  USB3_TOP_WRAP_CTR_dbus_multi_wmask_opt_mask                             (0x00000020)
#define  USB3_TOP_WRAP_CTR_dbus_wait_wdone_mask                                  (0x00000010)
#define  USB3_TOP_WRAP_CTR_sram_debug_sel_mask                                   (0x00000008)
#define  USB3_TOP_WRAP_CTR_sram_debug_mode_mask                                  (0x00000004)
#define  USB3_TOP_WRAP_CTR_dbus_multi_req_disable_mask                           (0x00000002)
#define  USB3_TOP_WRAP_CTR_dev_mode_mask                                         (0x00000001)
#define  USB3_TOP_WRAP_CTR_dbus_wdone_counter(data)                              (0x00000F80&((data)<<7))
#define  USB3_TOP_WRAP_CTR_dbus_wdone_counter_soft_reset(data)                   (0x00000040&((data)<<6))
#define  USB3_TOP_WRAP_CTR_dbus_multi_wmask_opt(data)                            (0x00000020&((data)<<5))
#define  USB3_TOP_WRAP_CTR_dbus_wait_wdone(data)                                 (0x00000010&((data)<<4))
#define  USB3_TOP_WRAP_CTR_sram_debug_sel(data)                                  (0x00000008&((data)<<3))
#define  USB3_TOP_WRAP_CTR_sram_debug_mode(data)                                 (0x00000004&((data)<<2))
#define  USB3_TOP_WRAP_CTR_dbus_multi_req_disable(data)                          (0x00000002&((data)<<1))
#define  USB3_TOP_WRAP_CTR_dev_mode(data)                                        (0x00000001&(data))
#define  USB3_TOP_WRAP_CTR_get_dbus_wdone_counter(data)                          ((0x00000F80&(data))>>7)
#define  USB3_TOP_WRAP_CTR_get_dbus_wdone_counter_soft_reset(data)               ((0x00000040&(data))>>6)
#define  USB3_TOP_WRAP_CTR_get_dbus_multi_wmask_opt(data)                        ((0x00000020&(data))>>5)
#define  USB3_TOP_WRAP_CTR_get_dbus_wait_wdone(data)                             ((0x00000010&(data))>>4)
#define  USB3_TOP_WRAP_CTR_get_sram_debug_sel(data)                              ((0x00000008&(data))>>3)
#define  USB3_TOP_WRAP_CTR_get_sram_debug_mode(data)                             ((0x00000004&(data))>>2)
#define  USB3_TOP_WRAP_CTR_get_dbus_multi_req_disable(data)                      ((0x00000002&(data))>>1)
#define  USB3_TOP_WRAP_CTR_get_dev_mode(data)                                    (0x00000001&(data))

#define  USB3_TOP_GNR_INT                                                       0x1805A004
#define  USB3_TOP_GNR_INT_reg_addr                                               "0xB805A004"
#define  USB3_TOP_GNR_INT_reg                                                    0xB805A004
#define  USB3_TOP_GNR_INT_inst_addr                                              "0x0001"
#define  set_USB3_TOP_GNR_INT_reg(data)                                          (*((volatile unsigned int*)USB3_TOP_GNR_INT_reg)=data)
#define  get_USB3_TOP_GNR_INT_reg                                                (*((volatile unsigned int*)USB3_TOP_GNR_INT_reg))
#define  USB3_TOP_GNR_INT_host_int_shift                                         (0)
#define  USB3_TOP_GNR_INT_host_int_mask                                          (0x00000001)
#define  USB3_TOP_GNR_INT_host_int(data)                                         (0x00000001&(data))
#define  USB3_TOP_GNR_INT_get_host_int(data)                                     (0x00000001&(data))

#define  USB3_TOP_USB2_PHY_UTMI                                                 0x1805A008
#define  USB3_TOP_USB2_PHY_UTMI_reg_addr                                         "0xB805A008"
#define  USB3_TOP_USB2_PHY_UTMI_reg                                              0xB805A008
#define  USB3_TOP_USB2_PHY_UTMI_inst_addr                                        "0x0002"
#define  set_USB3_TOP_USB2_PHY_UTMI_reg(data)                                    (*((volatile unsigned int*)USB3_TOP_USB2_PHY_UTMI_reg)=data)
#define  get_USB3_TOP_USB2_PHY_UTMI_reg                                          (*((volatile unsigned int*)USB3_TOP_USB2_PHY_UTMI_reg))
#define  USB3_TOP_USB2_PHY_UTMI_reset_utmi_p1_shift                              (1)
#define  USB3_TOP_USB2_PHY_UTMI_reset_utmi_p0_shift                              (0)
#define  USB3_TOP_USB2_PHY_UTMI_reset_utmi_p1_mask                               (0x00000002)
#define  USB3_TOP_USB2_PHY_UTMI_reset_utmi_p0_mask                               (0x00000001)
#define  USB3_TOP_USB2_PHY_UTMI_reset_utmi_p1(data)                              (0x00000002&((data)<<1))
#define  USB3_TOP_USB2_PHY_UTMI_reset_utmi_p0(data)                              (0x00000001&(data))
#define  USB3_TOP_USB2_PHY_UTMI_get_reset_utmi_p1(data)                          ((0x00000002&(data))>>1)
#define  USB3_TOP_USB2_PHY_UTMI_get_reset_utmi_p0(data)                          (0x00000001&(data))

#define  USB3_TOP_USB3_PHY_PIPE                                                 0x1805A00C
#define  USB3_TOP_USB3_PHY_PIPE_reg_addr                                         "0xB805A00C"
#define  USB3_TOP_USB3_PHY_PIPE_reg                                              0xB805A00C
#define  USB3_TOP_USB3_PHY_PIPE_inst_addr                                        "0x0003"
#define  set_USB3_TOP_USB3_PHY_PIPE_reg(data)                                    (*((volatile unsigned int*)USB3_TOP_USB3_PHY_PIPE_reg)=data)
#define  get_USB3_TOP_USB3_PHY_PIPE_reg                                          (*((volatile unsigned int*)USB3_TOP_USB3_PHY_PIPE_reg))
#define  USB3_TOP_USB3_PHY_PIPE_reset_pipe3_p0_shift                             (0)
#define  USB3_TOP_USB3_PHY_PIPE_reset_pipe3_p0_mask                              (0x00000001)
#define  USB3_TOP_USB3_PHY_PIPE_reset_pipe3_p0(data)                             (0x00000001&(data))
#define  USB3_TOP_USB3_PHY_PIPE_get_reset_pipe3_p0(data)                         (0x00000001&(data))

#define  USB3_TOP_MDIO_CTR                                                      0x1805A010
#define  USB3_TOP_MDIO_CTR_reg_addr                                              "0xB805A010"
#define  USB3_TOP_MDIO_CTR_reg                                                   0xB805A010
#define  USB3_TOP_MDIO_CTR_inst_addr                                             "0x0004"
#define  set_USB3_TOP_MDIO_CTR_reg(data)                                         (*((volatile unsigned int*)USB3_TOP_MDIO_CTR_reg)=data)
#define  get_USB3_TOP_MDIO_CTR_reg                                               (*((volatile unsigned int*)USB3_TOP_MDIO_CTR_reg))
#define  USB3_TOP_MDIO_CTR_data_shift                                            (16)
#define  USB3_TOP_MDIO_CTR_phy_addr_shift                                        (13)
#define  USB3_TOP_MDIO_CTR_phy_reg_addr_shift                                    (8)
#define  USB3_TOP_MDIO_CTR_mdio_busy_shift                                       (7)
#define  USB3_TOP_MDIO_CTR_mdio_st_shift                                         (5)
#define  USB3_TOP_MDIO_CTR_mdio_rdy_shift                                        (4)
#define  USB3_TOP_MDIO_CTR_mclk_rate_shift                                       (2)
#define  USB3_TOP_MDIO_CTR_mdio_srst_shift                                       (1)
#define  USB3_TOP_MDIO_CTR_mdio_rdwr_shift                                       (0)
#define  USB3_TOP_MDIO_CTR_data_mask                                             (0xFFFF0000)
#define  USB3_TOP_MDIO_CTR_phy_addr_mask                                         (0x0000E000)
#define  USB3_TOP_MDIO_CTR_phy_reg_addr_mask                                     (0x00001F00)
#define  USB3_TOP_MDIO_CTR_mdio_busy_mask                                        (0x00000080)
#define  USB3_TOP_MDIO_CTR_mdio_st_mask                                          (0x00000060)
#define  USB3_TOP_MDIO_CTR_mdio_rdy_mask                                         (0x00000010)
#define  USB3_TOP_MDIO_CTR_mclk_rate_mask                                        (0x0000000C)
#define  USB3_TOP_MDIO_CTR_mdio_srst_mask                                        (0x00000002)
#define  USB3_TOP_MDIO_CTR_mdio_rdwr_mask                                        (0x00000001)
#define  USB3_TOP_MDIO_CTR_data(data)                                            (0xFFFF0000&((data)<<16))
#define  USB3_TOP_MDIO_CTR_phy_addr(data)                                        (0x0000E000&((data)<<13))
#define  USB3_TOP_MDIO_CTR_phy_reg_addr(data)                                    (0x00001F00&((data)<<8))
#define  USB3_TOP_MDIO_CTR_mdio_busy(data)                                       (0x00000080&((data)<<7))
#define  USB3_TOP_MDIO_CTR_mdio_st(data)                                         (0x00000060&((data)<<5))
#define  USB3_TOP_MDIO_CTR_mdio_rdy(data)                                        (0x00000010&((data)<<4))
#define  USB3_TOP_MDIO_CTR_mclk_rate(data)                                       (0x0000000C&((data)<<2))
#define  USB3_TOP_MDIO_CTR_mdio_srst(data)                                       (0x00000002&((data)<<1))
#define  USB3_TOP_MDIO_CTR_mdio_rdwr(data)                                       (0x00000001&(data))
#define  USB3_TOP_MDIO_CTR_get_data(data)                                        ((0xFFFF0000&(data))>>16)
#define  USB3_TOP_MDIO_CTR_get_phy_addr(data)                                    ((0x0000E000&(data))>>13)
#define  USB3_TOP_MDIO_CTR_get_phy_reg_addr(data)                                ((0x00001F00&(data))>>8)
#define  USB3_TOP_MDIO_CTR_get_mdio_busy(data)                                   ((0x00000080&(data))>>7)
#define  USB3_TOP_MDIO_CTR_get_mdio_st(data)                                     ((0x00000060&(data))>>5)
#define  USB3_TOP_MDIO_CTR_get_mdio_rdy(data)                                    ((0x00000010&(data))>>4)
#define  USB3_TOP_MDIO_CTR_get_mclk_rate(data)                                   ((0x0000000C&(data))>>2)
#define  USB3_TOP_MDIO_CTR_get_mdio_srst(data)                                   ((0x00000002&(data))>>1)
#define  USB3_TOP_MDIO_CTR_get_mdio_rdwr(data)                                   (0x00000001&(data))

#define  USB3_TOP_VSTATUS0_OUT                                                  0x1805A014
#define  USB3_TOP_VSTATUS0_OUT_reg_addr                                          "0xB805A014"
#define  USB3_TOP_VSTATUS0_OUT_reg                                               0xB805A014
#define  USB3_TOP_VSTATUS0_OUT_inst_addr                                         "0x0005"
#define  set_USB3_TOP_VSTATUS0_OUT_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_VSTATUS0_OUT_reg)=data)
#define  get_USB3_TOP_VSTATUS0_OUT_reg                                           (*((volatile unsigned int*)USB3_TOP_VSTATUS0_OUT_reg))
#define  USB3_TOP_VSTATUS0_OUT_p1_vstatus_out_shift                              (8)
#define  USB3_TOP_VSTATUS0_OUT_p0_vstatus_out_shift                              (0)
#define  USB3_TOP_VSTATUS0_OUT_p1_vstatus_out_mask                               (0x0000FF00)
#define  USB3_TOP_VSTATUS0_OUT_p0_vstatus_out_mask                               (0x000000FF)
#define  USB3_TOP_VSTATUS0_OUT_p1_vstatus_out(data)                              (0x0000FF00&((data)<<8))
#define  USB3_TOP_VSTATUS0_OUT_p0_vstatus_out(data)                              (0x000000FF&(data))
#define  USB3_TOP_VSTATUS0_OUT_get_p1_vstatus_out(data)                          ((0x0000FF00&(data))>>8)
#define  USB3_TOP_VSTATUS0_OUT_get_p0_vstatus_out(data)                          (0x000000FF&(data))

#define  USB3_TOP_SLP_BACK0_EN                                                  0x1805A018
#define  USB3_TOP_SLP_BACK0_EN_reg_addr                                          "0xB805A018"
#define  USB3_TOP_SLP_BACK0_EN_reg                                               0xB805A018
#define  USB3_TOP_SLP_BACK0_EN_inst_addr                                         "0x0006"
#define  set_USB3_TOP_SLP_BACK0_EN_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_SLP_BACK0_EN_reg)=data)
#define  get_USB3_TOP_SLP_BACK0_EN_reg                                           (*((volatile unsigned int*)USB3_TOP_SLP_BACK0_EN_reg))
#define  USB3_TOP_SLP_BACK0_EN_simulation_mode_p1_shift                          (7)
#define  USB3_TOP_SLP_BACK0_EN_force_hs_mode_p1_shift                            (6)
#define  USB3_TOP_SLP_BACK0_EN_test_rst_p1_shift                                 (5)
#define  USB3_TOP_SLP_BACK0_EN_test_en_p1_shift                                  (4)
#define  USB3_TOP_SLP_BACK0_EN_simulation_mode_p0_shift                          (3)
#define  USB3_TOP_SLP_BACK0_EN_force_hs_mode_p0_shift                            (2)
#define  USB3_TOP_SLP_BACK0_EN_test_rst_p0_shift                                 (1)
#define  USB3_TOP_SLP_BACK0_EN_test_en_p0_shift                                  (0)
#define  USB3_TOP_SLP_BACK0_EN_simulation_mode_p1_mask                           (0x00000080)
#define  USB3_TOP_SLP_BACK0_EN_force_hs_mode_p1_mask                             (0x00000040)
#define  USB3_TOP_SLP_BACK0_EN_test_rst_p1_mask                                  (0x00000020)
#define  USB3_TOP_SLP_BACK0_EN_test_en_p1_mask                                   (0x00000010)
#define  USB3_TOP_SLP_BACK0_EN_simulation_mode_p0_mask                           (0x00000008)
#define  USB3_TOP_SLP_BACK0_EN_force_hs_mode_p0_mask                             (0x00000004)
#define  USB3_TOP_SLP_BACK0_EN_test_rst_p0_mask                                  (0x00000002)
#define  USB3_TOP_SLP_BACK0_EN_test_en_p0_mask                                   (0x00000001)
#define  USB3_TOP_SLP_BACK0_EN_simulation_mode_p1(data)                          (0x00000080&((data)<<7))
#define  USB3_TOP_SLP_BACK0_EN_force_hs_mode_p1(data)                            (0x00000040&((data)<<6))
#define  USB3_TOP_SLP_BACK0_EN_test_rst_p1(data)                                 (0x00000020&((data)<<5))
#define  USB3_TOP_SLP_BACK0_EN_test_en_p1(data)                                  (0x00000010&((data)<<4))
#define  USB3_TOP_SLP_BACK0_EN_simulation_mode_p0(data)                          (0x00000008&((data)<<3))
#define  USB3_TOP_SLP_BACK0_EN_force_hs_mode_p0(data)                            (0x00000004&((data)<<2))
#define  USB3_TOP_SLP_BACK0_EN_test_rst_p0(data)                                 (0x00000002&((data)<<1))
#define  USB3_TOP_SLP_BACK0_EN_test_en_p0(data)                                  (0x00000001&(data))
#define  USB3_TOP_SLP_BACK0_EN_get_simulation_mode_p1(data)                      ((0x00000080&(data))>>7)
#define  USB3_TOP_SLP_BACK0_EN_get_force_hs_mode_p1(data)                        ((0x00000040&(data))>>6)
#define  USB3_TOP_SLP_BACK0_EN_get_test_rst_p1(data)                             ((0x00000020&(data))>>5)
#define  USB3_TOP_SLP_BACK0_EN_get_test_en_p1(data)                              ((0x00000010&(data))>>4)
#define  USB3_TOP_SLP_BACK0_EN_get_simulation_mode_p0(data)                      ((0x00000008&(data))>>3)
#define  USB3_TOP_SLP_BACK0_EN_get_force_hs_mode_p0(data)                        ((0x00000004&(data))>>2)
#define  USB3_TOP_SLP_BACK0_EN_get_test_rst_p0(data)                             ((0x00000002&(data))>>1)
#define  USB3_TOP_SLP_BACK0_EN_get_test_en_p0(data)                              (0x00000001&(data))

#define  USB3_TOP_SLP_BACK0_CTR                                                 0x1805A01C
#define  USB3_TOP_SLP_BACK0_CTR_reg_addr                                         "0xB805A01C"
#define  USB3_TOP_SLP_BACK0_CTR_reg                                              0xB805A01C
#define  USB3_TOP_SLP_BACK0_CTR_inst_addr                                        "0x0007"
#define  set_USB3_TOP_SLP_BACK0_CTR_reg(data)                                    (*((volatile unsigned int*)USB3_TOP_SLP_BACK0_CTR_reg)=data)
#define  get_USB3_TOP_SLP_BACK0_CTR_reg                                          (*((volatile unsigned int*)USB3_TOP_SLP_BACK0_CTR_reg))
#define  USB3_TOP_SLP_BACK0_CTR_test_speed_p0_shift                              (10)
#define  USB3_TOP_SLP_BACK0_CTR_test_seed_p0_shift                               (2)
#define  USB3_TOP_SLP_BACK0_CTR_test_psl_p0_shift                                (0)
#define  USB3_TOP_SLP_BACK0_CTR_test_speed_p0_mask                               (0x00000C00)
#define  USB3_TOP_SLP_BACK0_CTR_test_seed_p0_mask                                (0x000003FC)
#define  USB3_TOP_SLP_BACK0_CTR_test_psl_p0_mask                                 (0x00000003)
#define  USB3_TOP_SLP_BACK0_CTR_test_speed_p0(data)                              (0x00000C00&((data)<<10))
#define  USB3_TOP_SLP_BACK0_CTR_test_seed_p0(data)                               (0x000003FC&((data)<<2))
#define  USB3_TOP_SLP_BACK0_CTR_test_psl_p0(data)                                (0x00000003&(data))
#define  USB3_TOP_SLP_BACK0_CTR_get_test_speed_p0(data)                          ((0x00000C00&(data))>>10)
#define  USB3_TOP_SLP_BACK0_CTR_get_test_seed_p0(data)                           ((0x000003FC&(data))>>2)
#define  USB3_TOP_SLP_BACK0_CTR_get_test_psl_p0(data)                            (0x00000003&(data))

#define  USB3_TOP_SLP_BACK0_ST                                                  0x1805A020
#define  USB3_TOP_SLP_BACK0_ST_reg_addr                                          "0xB805A020"
#define  USB3_TOP_SLP_BACK0_ST_reg                                               0xB805A020
#define  USB3_TOP_SLP_BACK0_ST_inst_addr                                         "0x0008"
#define  set_USB3_TOP_SLP_BACK0_ST_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_SLP_BACK0_ST_reg)=data)
#define  get_USB3_TOP_SLP_BACK0_ST_reg                                           (*((volatile unsigned int*)USB3_TOP_SLP_BACK0_ST_reg))
#define  USB3_TOP_SLP_BACK0_ST_test_fail_p0_shift                                (1)
#define  USB3_TOP_SLP_BACK0_ST_test_done_p0_shift                                (0)
#define  USB3_TOP_SLP_BACK0_ST_test_fail_p0_mask                                 (0x00000002)
#define  USB3_TOP_SLP_BACK0_ST_test_done_p0_mask                                 (0x00000001)
#define  USB3_TOP_SLP_BACK0_ST_test_fail_p0(data)                                (0x00000002&((data)<<1))
#define  USB3_TOP_SLP_BACK0_ST_test_done_p0(data)                                (0x00000001&(data))
#define  USB3_TOP_SLP_BACK0_ST_get_test_fail_p0(data)                            ((0x00000002&(data))>>1)
#define  USB3_TOP_SLP_BACK0_ST_get_test_done_p0(data)                            (0x00000001&(data))

#define  USB3_TOP_PHY2_SLB0_EN                                                  0x1805A024
#define  USB3_TOP_PHY2_SLB0_EN_reg_addr                                          "0xB805A024"
#define  USB3_TOP_PHY2_SLB0_EN_reg                                               0xB805A024
#define  USB3_TOP_PHY2_SLB0_EN_inst_addr                                         "0x0009"
#define  set_USB3_TOP_PHY2_SLB0_EN_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_PHY2_SLB0_EN_reg)=data)
#define  get_USB3_TOP_PHY2_SLB0_EN_reg                                           (*((volatile unsigned int*)USB3_TOP_PHY2_SLB0_EN_reg))
#define  USB3_TOP_PHY2_SLB0_EN_p0_usb2phy_slb_hs_shift                           (1)
#define  USB3_TOP_PHY2_SLB0_EN_p0_usb2phy_force_slb_shift                        (0)
#define  USB3_TOP_PHY2_SLB0_EN_p0_usb2phy_slb_hs_mask                            (0x00000002)
#define  USB3_TOP_PHY2_SLB0_EN_p0_usb2phy_force_slb_mask                         (0x00000001)
#define  USB3_TOP_PHY2_SLB0_EN_p0_usb2phy_slb_hs(data)                           (0x00000002&((data)<<1))
#define  USB3_TOP_PHY2_SLB0_EN_p0_usb2phy_force_slb(data)                        (0x00000001&(data))
#define  USB3_TOP_PHY2_SLB0_EN_get_p0_usb2phy_slb_hs(data)                       ((0x00000002&(data))>>1)
#define  USB3_TOP_PHY2_SLB0_EN_get_p0_usb2phy_force_slb(data)                    (0x00000001&(data))

#define  USB3_TOP_PHY2_SLB0_ST                                                  0x1805A028
#define  USB3_TOP_PHY2_SLB0_ST_reg_addr                                          "0xB805A028"
#define  USB3_TOP_PHY2_SLB0_ST_reg                                               0xB805A028
#define  USB3_TOP_PHY2_SLB0_ST_inst_addr                                         "0x000A"
#define  set_USB3_TOP_PHY2_SLB0_ST_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_PHY2_SLB0_ST_reg)=data)
#define  get_USB3_TOP_PHY2_SLB0_ST_reg                                           (*((volatile unsigned int*)USB3_TOP_PHY2_SLB0_ST_reg))
#define  USB3_TOP_PHY2_SLB0_ST_p0_usb2phy_slb_fail_shift                         (1)
#define  USB3_TOP_PHY2_SLB0_ST_p0_usb2phy_slb_done_shift                         (0)
#define  USB3_TOP_PHY2_SLB0_ST_p0_usb2phy_slb_fail_mask                          (0x00000002)
#define  USB3_TOP_PHY2_SLB0_ST_p0_usb2phy_slb_done_mask                          (0x00000001)
#define  USB3_TOP_PHY2_SLB0_ST_p0_usb2phy_slb_fail(data)                         (0x00000002&((data)<<1))
#define  USB3_TOP_PHY2_SLB0_ST_p0_usb2phy_slb_done(data)                         (0x00000001&(data))
#define  USB3_TOP_PHY2_SLB0_ST_get_p0_usb2phy_slb_fail(data)                     ((0x00000002&(data))>>1)
#define  USB3_TOP_PHY2_SLB0_ST_get_p0_usb2phy_slb_done(data)                     (0x00000001&(data))

#define  USB3_TOP_SLP_BACK1_CTR                                                 0x1805A02C
#define  USB3_TOP_SLP_BACK1_CTR_reg_addr                                         "0xB805A02C"
#define  USB3_TOP_SLP_BACK1_CTR_reg                                              0xB805A02C
#define  USB3_TOP_SLP_BACK1_CTR_inst_addr                                        "0x000B"
#define  set_USB3_TOP_SLP_BACK1_CTR_reg(data)                                    (*((volatile unsigned int*)USB3_TOP_SLP_BACK1_CTR_reg)=data)
#define  get_USB3_TOP_SLP_BACK1_CTR_reg                                          (*((volatile unsigned int*)USB3_TOP_SLP_BACK1_CTR_reg))
#define  USB3_TOP_SLP_BACK1_CTR_test_speed_p1_shift                              (10)
#define  USB3_TOP_SLP_BACK1_CTR_test_seed_p1_shift                               (2)
#define  USB3_TOP_SLP_BACK1_CTR_test_psl_p1_shift                                (0)
#define  USB3_TOP_SLP_BACK1_CTR_test_speed_p1_mask                               (0x00000C00)
#define  USB3_TOP_SLP_BACK1_CTR_test_seed_p1_mask                                (0x000003FC)
#define  USB3_TOP_SLP_BACK1_CTR_test_psl_p1_mask                                 (0x00000003)
#define  USB3_TOP_SLP_BACK1_CTR_test_speed_p1(data)                              (0x00000C00&((data)<<10))
#define  USB3_TOP_SLP_BACK1_CTR_test_seed_p1(data)                               (0x000003FC&((data)<<2))
#define  USB3_TOP_SLP_BACK1_CTR_test_psl_p1(data)                                (0x00000003&(data))
#define  USB3_TOP_SLP_BACK1_CTR_get_test_speed_p1(data)                          ((0x00000C00&(data))>>10)
#define  USB3_TOP_SLP_BACK1_CTR_get_test_seed_p1(data)                           ((0x000003FC&(data))>>2)
#define  USB3_TOP_SLP_BACK1_CTR_get_test_psl_p1(data)                            (0x00000003&(data))

#define  USB3_TOP_SLP_BACK1_ST                                                  0x1805A030
#define  USB3_TOP_SLP_BACK1_ST_reg_addr                                          "0xB805A030"
#define  USB3_TOP_SLP_BACK1_ST_reg                                               0xB805A030
#define  USB3_TOP_SLP_BACK1_ST_inst_addr                                         "0x000C"
#define  set_USB3_TOP_SLP_BACK1_ST_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_SLP_BACK1_ST_reg)=data)
#define  get_USB3_TOP_SLP_BACK1_ST_reg                                           (*((volatile unsigned int*)USB3_TOP_SLP_BACK1_ST_reg))
#define  USB3_TOP_SLP_BACK1_ST_test_fail_p1_shift                                (1)
#define  USB3_TOP_SLP_BACK1_ST_test_done_p1_shift                                (0)
#define  USB3_TOP_SLP_BACK1_ST_test_fail_p1_mask                                 (0x00000002)
#define  USB3_TOP_SLP_BACK1_ST_test_done_p1_mask                                 (0x00000001)
#define  USB3_TOP_SLP_BACK1_ST_test_fail_p1(data)                                (0x00000002&((data)<<1))
#define  USB3_TOP_SLP_BACK1_ST_test_done_p1(data)                                (0x00000001&(data))
#define  USB3_TOP_SLP_BACK1_ST_get_test_fail_p1(data)                            ((0x00000002&(data))>>1)
#define  USB3_TOP_SLP_BACK1_ST_get_test_done_p1(data)                            (0x00000001&(data))

#define  USB3_TOP_PHY2_SLB1_EN                                                  0x1805A034
#define  USB3_TOP_PHY2_SLB1_EN_reg_addr                                          "0xB805A034"
#define  USB3_TOP_PHY2_SLB1_EN_reg                                               0xB805A034
#define  USB3_TOP_PHY2_SLB1_EN_inst_addr                                         "0x000D"
#define  set_USB3_TOP_PHY2_SLB1_EN_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_PHY2_SLB1_EN_reg)=data)
#define  get_USB3_TOP_PHY2_SLB1_EN_reg                                           (*((volatile unsigned int*)USB3_TOP_PHY2_SLB1_EN_reg))
#define  USB3_TOP_PHY2_SLB1_EN_p1_usb2phy_slb_hs_shift                           (1)
#define  USB3_TOP_PHY2_SLB1_EN_p1_usb2phy_force_slb_shift                        (0)
#define  USB3_TOP_PHY2_SLB1_EN_p1_usb2phy_slb_hs_mask                            (0x00000002)
#define  USB3_TOP_PHY2_SLB1_EN_p1_usb2phy_force_slb_mask                         (0x00000001)
#define  USB3_TOP_PHY2_SLB1_EN_p1_usb2phy_slb_hs(data)                           (0x00000002&((data)<<1))
#define  USB3_TOP_PHY2_SLB1_EN_p1_usb2phy_force_slb(data)                        (0x00000001&(data))
#define  USB3_TOP_PHY2_SLB1_EN_get_p1_usb2phy_slb_hs(data)                       ((0x00000002&(data))>>1)
#define  USB3_TOP_PHY2_SLB1_EN_get_p1_usb2phy_force_slb(data)                    (0x00000001&(data))

#define  USB3_TOP_PHY2_SLB1_ST                                                  0x1805A038
#define  USB3_TOP_PHY2_SLB1_ST_reg_addr                                          "0xB805A038"
#define  USB3_TOP_PHY2_SLB1_ST_reg                                               0xB805A038
#define  USB3_TOP_PHY2_SLB1_ST_inst_addr                                         "0x000E"
#define  set_USB3_TOP_PHY2_SLB1_ST_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_PHY2_SLB1_ST_reg)=data)
#define  get_USB3_TOP_PHY2_SLB1_ST_reg                                           (*((volatile unsigned int*)USB3_TOP_PHY2_SLB1_ST_reg))
#define  USB3_TOP_PHY2_SLB1_ST_p1_usb2phy_slb_fail_shift                         (1)
#define  USB3_TOP_PHY2_SLB1_ST_p1_usb2phy_slb_done_shift                         (0)
#define  USB3_TOP_PHY2_SLB1_ST_p1_usb2phy_slb_fail_mask                          (0x00000002)
#define  USB3_TOP_PHY2_SLB1_ST_p1_usb2phy_slb_done_mask                          (0x00000001)
#define  USB3_TOP_PHY2_SLB1_ST_p1_usb2phy_slb_fail(data)                         (0x00000002&((data)<<1))
#define  USB3_TOP_PHY2_SLB1_ST_p1_usb2phy_slb_done(data)                         (0x00000001&(data))
#define  USB3_TOP_PHY2_SLB1_ST_get_p1_usb2phy_slb_fail(data)                     ((0x00000002&(data))>>1)
#define  USB3_TOP_PHY2_SLB1_ST_get_p1_usb2phy_slb_done(data)                     (0x00000001&(data))

#define  USB3_TOP_USB2_SPD_CTR                                                  0x1805A060
#define  USB3_TOP_USB2_SPD_CTR_reg_addr                                          "0xB805A060"
#define  USB3_TOP_USB2_SPD_CTR_reg                                               0xB805A060
#define  USB3_TOP_USB2_SPD_CTR_inst_addr                                         "0x000F"
#define  set_USB3_TOP_USB2_SPD_CTR_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_USB2_SPD_CTR_reg)=data)
#define  get_USB3_TOP_USB2_SPD_CTR_reg                                           (*((volatile unsigned int*)USB3_TOP_USB2_SPD_CTR_reg))
#define  USB3_TOP_USB2_SPD_CTR_p1_suspend_r_shift                                (1)
#define  USB3_TOP_USB2_SPD_CTR_p0_suspend_r_shift                                (0)
#define  USB3_TOP_USB2_SPD_CTR_p1_suspend_r_mask                                 (0x00000002)
#define  USB3_TOP_USB2_SPD_CTR_p0_suspend_r_mask                                 (0x00000001)
#define  USB3_TOP_USB2_SPD_CTR_p1_suspend_r(data)                                (0x00000002&((data)<<1))
#define  USB3_TOP_USB2_SPD_CTR_p0_suspend_r(data)                                (0x00000001&(data))
#define  USB3_TOP_USB2_SPD_CTR_get_p1_suspend_r(data)                            ((0x00000002&(data))>>1)
#define  USB3_TOP_USB2_SPD_CTR_get_p0_suspend_r(data)                            (0x00000001&(data))

#define  USB3_TOP_PHY3_SLB_EN                                                   0x1805A064
#define  USB3_TOP_PHY3_SLB_EN_reg_addr                                           "0xB805A064"
#define  USB3_TOP_PHY3_SLB_EN_reg                                                0xB805A064
#define  USB3_TOP_PHY3_SLB_EN_inst_addr                                          "0x0010"
#define  set_USB3_TOP_PHY3_SLB_EN_reg(data)                                      (*((volatile unsigned int*)USB3_TOP_PHY3_SLB_EN_reg)=data)
#define  get_USB3_TOP_PHY3_SLB_EN_reg                                            (*((volatile unsigned int*)USB3_TOP_PHY3_SLB_EN_reg))
#define  USB3_TOP_PHY3_SLB_EN_p0_pipe_bist_sel_shift                             (1)
#define  USB3_TOP_PHY3_SLB_EN_p0_pipe_bist_en_shift                              (0)
#define  USB3_TOP_PHY3_SLB_EN_p0_pipe_bist_sel_mask                              (0x00000006)
#define  USB3_TOP_PHY3_SLB_EN_p0_pipe_bist_en_mask                               (0x00000001)
#define  USB3_TOP_PHY3_SLB_EN_p0_pipe_bist_sel(data)                             (0x00000006&((data)<<1))
#define  USB3_TOP_PHY3_SLB_EN_p0_pipe_bist_en(data)                              (0x00000001&(data))
#define  USB3_TOP_PHY3_SLB_EN_get_p0_pipe_bist_sel(data)                         ((0x00000006&(data))>>1)
#define  USB3_TOP_PHY3_SLB_EN_get_p0_pipe_bist_en(data)                          (0x00000001&(data))

#define  USB3_TOP_PHY3_SLB_CT                                                   0x1805A068
#define  USB3_TOP_PHY3_SLB_CT_reg_addr                                           "0xB805A068"
#define  USB3_TOP_PHY3_SLB_CT_reg                                                0xB805A068
#define  USB3_TOP_PHY3_SLB_CT_inst_addr                                          "0x0011"
#define  set_USB3_TOP_PHY3_SLB_CT_reg(data)                                      (*((volatile unsigned int*)USB3_TOP_PHY3_SLB_CT_reg)=data)
#define  get_USB3_TOP_PHY3_SLB_CT_reg                                            (*((volatile unsigned int*)USB3_TOP_PHY3_SLB_CT_reg))
#define  USB3_TOP_PHY3_SLB_CT_p0_usb3phy_slb_go_shift                            (0)
#define  USB3_TOP_PHY3_SLB_CT_p0_usb3phy_slb_go_mask                             (0x00000001)
#define  USB3_TOP_PHY3_SLB_CT_p0_usb3phy_slb_go(data)                            (0x00000001&(data))
#define  USB3_TOP_PHY3_SLB_CT_get_p0_usb3phy_slb_go(data)                        (0x00000001&(data))

#define  USB3_TOP_PHY3_SLB_ST                                                   0x1805A06C
#define  USB3_TOP_PHY3_SLB_ST_reg_addr                                           "0xB805A06C"
#define  USB3_TOP_PHY3_SLB_ST_reg                                                0xB805A06C
#define  USB3_TOP_PHY3_SLB_ST_inst_addr                                          "0x0012"
#define  set_USB3_TOP_PHY3_SLB_ST_reg(data)                                      (*((volatile unsigned int*)USB3_TOP_PHY3_SLB_ST_reg)=data)
#define  get_USB3_TOP_PHY3_SLB_ST_reg                                            (*((volatile unsigned int*)USB3_TOP_PHY3_SLB_ST_reg))
#define  USB3_TOP_PHY3_SLB_ST_p0_usb3phy_slb_fail_shift                          (1)
#define  USB3_TOP_PHY3_SLB_ST_p0_usb3phy_slb_done_shift                          (0)
#define  USB3_TOP_PHY3_SLB_ST_p0_usb3phy_slb_fail_mask                           (0x00000002)
#define  USB3_TOP_PHY3_SLB_ST_p0_usb3phy_slb_done_mask                           (0x00000001)
#define  USB3_TOP_PHY3_SLB_ST_p0_usb3phy_slb_fail(data)                          (0x00000002&((data)<<1))
#define  USB3_TOP_PHY3_SLB_ST_p0_usb3phy_slb_done(data)                          (0x00000001&(data))
#define  USB3_TOP_PHY3_SLB_ST_get_p0_usb3phy_slb_fail(data)                      ((0x00000002&(data))>>1)
#define  USB3_TOP_PHY3_SLB_ST_get_p0_usb3phy_slb_done(data)                      (0x00000001&(data))

#define  USB3_TOP_USB_DBG                                                       0x1805A070
#define  USB3_TOP_USB_DBG_reg_addr                                               "0xB805A070"
#define  USB3_TOP_USB_DBG_reg                                                    0xB805A070
#define  USB3_TOP_USB_DBG_inst_addr                                              "0x0013"
#define  set_USB3_TOP_USB_DBG_reg(data)                                          (*((volatile unsigned int*)USB3_TOP_USB_DBG_reg)=data)
#define  get_USB3_TOP_USB_DBG_reg                                                (*((volatile unsigned int*)USB3_TOP_USB_DBG_reg))
#define  USB3_TOP_USB_DBG_dbg_sel1_shift                                         (7)
#define  USB3_TOP_USB_DBG_dbg_sel0_shift                                         (1)
#define  USB3_TOP_USB_DBG_dbg_en_shift                                           (0)
#define  USB3_TOP_USB_DBG_dbg_sel1_mask                                          (0x00001F80)
#define  USB3_TOP_USB_DBG_dbg_sel0_mask                                          (0x0000007E)
#define  USB3_TOP_USB_DBG_dbg_en_mask                                            (0x00000001)
#define  USB3_TOP_USB_DBG_dbg_sel1(data)                                         (0x00001F80&((data)<<7))
#define  USB3_TOP_USB_DBG_dbg_sel0(data)                                         (0x0000007E&((data)<<1))
#define  USB3_TOP_USB_DBG_dbg_en(data)                                           (0x00000001&(data))
#define  USB3_TOP_USB_DBG_get_dbg_sel1(data)                                     ((0x00001F80&(data))>>7)
#define  USB3_TOP_USB_DBG_get_dbg_sel0(data)                                     ((0x0000007E&(data))>>1)
#define  USB3_TOP_USB_DBG_get_dbg_en(data)                                       (0x00000001&(data))

#define  USB3_TOP_USB_SCTCH                                                     0x1805A074
#define  USB3_TOP_USB_SCTCH_reg_addr                                             "0xB805A074"
#define  USB3_TOP_USB_SCTCH_reg                                                  0xB805A074
#define  USB3_TOP_USB_SCTCH_inst_addr                                            "0x0014"
#define  set_USB3_TOP_USB_SCTCH_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB_SCTCH_reg)=data)
#define  get_USB3_TOP_USB_SCTCH_reg                                              (*((volatile unsigned int*)USB3_TOP_USB_SCTCH_reg))
#define  USB3_TOP_USB_SCTCH_reg1_shift                                           (16)
#define  USB3_TOP_USB_SCTCH_reg0_shift                                           (0)
#define  USB3_TOP_USB_SCTCH_reg1_mask                                            (0xFFFF0000)
#define  USB3_TOP_USB_SCTCH_reg0_mask                                            (0x0000FFFF)
#define  USB3_TOP_USB_SCTCH_reg1(data)                                           (0xFFFF0000&((data)<<16))
#define  USB3_TOP_USB_SCTCH_reg0(data)                                           (0x0000FFFF&(data))
#define  USB3_TOP_USB_SCTCH_get_reg1(data)                                       ((0xFFFF0000&(data))>>16)
#define  USB3_TOP_USB_SCTCH_get_reg0(data)                                       (0x0000FFFF&(data))

#define  USB3_TOP_USB_TMP_SP_0                                                  0x1805A078
#define  USB3_TOP_USB_TMP_SP_0_reg_addr                                          "0xB805A078"
#define  USB3_TOP_USB_TMP_SP_0_reg                                               0xB805A078
#define  USB3_TOP_USB_TMP_SP_0_inst_addr                                         "0x0015"
#define  set_USB3_TOP_USB_TMP_SP_0_reg(data)                                     (*((volatile unsigned int*)USB3_TOP_USB_TMP_SP_0_reg)=data)
#define  get_USB3_TOP_USB_TMP_SP_0_reg                                           (*((volatile unsigned int*)USB3_TOP_USB_TMP_SP_0_reg))
#define  USB3_TOP_USB_TMP_SP_0_test_sp_reg_0_shift                               (2)
#define  USB3_TOP_USB_TMP_SP_0_int_loop_status_shift                             (1)
#define  USB3_TOP_USB_TMP_SP_0_int_comp_status_shift                             (0)
#define  USB3_TOP_USB_TMP_SP_0_test_sp_reg_0_mask                                (0xFFFFFFFC)
#define  USB3_TOP_USB_TMP_SP_0_int_loop_status_mask                              (0x00000002)
#define  USB3_TOP_USB_TMP_SP_0_int_comp_status_mask                              (0x00000001)
#define  USB3_TOP_USB_TMP_SP_0_test_sp_reg_0(data)                               (0xFFFFFFFC&((data)<<2))
#define  USB3_TOP_USB_TMP_SP_0_int_loop_status(data)                             (0x00000002&((data)<<1))
#define  USB3_TOP_USB_TMP_SP_0_int_comp_status(data)                             (0x00000001&(data))
#define  USB3_TOP_USB_TMP_SP_0_get_test_sp_reg_0(data)                           ((0xFFFFFFFC&(data))>>2)
#define  USB3_TOP_USB_TMP_SP_0_get_int_loop_status(data)                         ((0x00000002&(data))>>1)
#define  USB3_TOP_USB_TMP_SP_0_get_int_comp_status(data)                         (0x00000001&(data))

#define  USB3_TOP_USB_TMP_0                                                     0x1805A080
#define  USB3_TOP_USB_TMP_0_reg_addr                                             "0xB805A080"
#define  USB3_TOP_USB_TMP_0_reg                                                  0xB805A080
#define  USB3_TOP_USB_TMP_0_inst_addr                                            "0x0016"
#define  set_USB3_TOP_USB_TMP_0_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB_TMP_0_reg)=data)
#define  get_USB3_TOP_USB_TMP_0_reg                                              (*((volatile unsigned int*)USB3_TOP_USB_TMP_0_reg))
#define  USB3_TOP_USB_TMP_0_test_reg_0_shift                                     (0)
#define  USB3_TOP_USB_TMP_0_test_reg_0_mask                                      (0xFFFFFFFF)
#define  USB3_TOP_USB_TMP_0_test_reg_0(data)                                     (0xFFFFFFFF&(data))
#define  USB3_TOP_USB_TMP_0_get_test_reg_0(data)                                 (0xFFFFFFFF&(data))

#define  USB3_TOP_USB_TMP_1                                                     0x1805A084
#define  USB3_TOP_USB_TMP_1_reg_addr                                             "0xB805A084"
#define  USB3_TOP_USB_TMP_1_reg                                                  0xB805A084
#define  USB3_TOP_USB_TMP_1_inst_addr                                            "0x0017"
#define  set_USB3_TOP_USB_TMP_1_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB_TMP_1_reg)=data)
#define  get_USB3_TOP_USB_TMP_1_reg                                              (*((volatile unsigned int*)USB3_TOP_USB_TMP_1_reg))
#define  USB3_TOP_USB_TMP_1_usb_ref_sel_shift                                    (4)
#define  USB3_TOP_USB_TMP_1_test_reg_1_shift                                     (0)
#define  USB3_TOP_USB_TMP_1_usb_ref_sel_mask                                     (0x000000F0)
#define  USB3_TOP_USB_TMP_1_test_reg_1_mask                                      (0x00000003)
#define  USB3_TOP_USB_TMP_1_usb_ref_sel(data)                                    (0x000000F0&((data)<<4))
#define  USB3_TOP_USB_TMP_1_test_reg_1(data)                                     (0x00000003&(data))
#define  USB3_TOP_USB_TMP_1_get_usb_ref_sel(data)                                ((0x000000F0&(data))>>4)
#define  USB3_TOP_USB_TMP_1_get_test_reg_1(data)                                 (0x00000003&(data))

#define  USB3_TOP_USB_TMP_2                                                     0x1805A088
#define  USB3_TOP_USB_TMP_2_reg_addr                                             "0xB805A088"
#define  USB3_TOP_USB_TMP_2_reg                                                  0xB805A088
#define  USB3_TOP_USB_TMP_2_inst_addr                                            "0x0018"
#define  set_USB3_TOP_USB_TMP_2_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB_TMP_2_reg)=data)
#define  get_USB3_TOP_USB_TMP_2_reg                                              (*((volatile unsigned int*)USB3_TOP_USB_TMP_2_reg))
#define  USB3_TOP_USB_TMP_2_usb3_rxterm_force_val_shift                          (3)
#define  USB3_TOP_USB_TMP_2_usb3_rxterm_force_en_shift                           (2)
#define  USB3_TOP_USB_TMP_2_usb3_eco_option2_shift                               (1)
#define  USB3_TOP_USB_TMP_2_usb3_eco_option1_shift                               (0)
#define  USB3_TOP_USB_TMP_2_usb3_rxterm_force_val_mask                           (0x00000008)
#define  USB3_TOP_USB_TMP_2_usb3_rxterm_force_en_mask                            (0x00000004)
#define  USB3_TOP_USB_TMP_2_usb3_eco_option2_mask                                (0x00000002)
#define  USB3_TOP_USB_TMP_2_usb3_eco_option1_mask                                (0x00000001)
#define  USB3_TOP_USB_TMP_2_usb3_rxterm_force_val(data)                          (0x00000008&((data)<<3))
#define  USB3_TOP_USB_TMP_2_usb3_rxterm_force_en(data)                           (0x00000004&((data)<<2))
#define  USB3_TOP_USB_TMP_2_usb3_eco_option2(data)                               (0x00000002&((data)<<1))
#define  USB3_TOP_USB_TMP_2_usb3_eco_option1(data)                               (0x00000001&(data))
#define  USB3_TOP_USB_TMP_2_get_usb3_rxterm_force_val(data)                      ((0x00000008&(data))>>3)
#define  USB3_TOP_USB_TMP_2_get_usb3_rxterm_force_en(data)                       ((0x00000004&(data))>>2)
#define  USB3_TOP_USB_TMP_2_get_usb3_eco_option2(data)                           ((0x00000002&(data))>>1)
#define  USB3_TOP_USB_TMP_2_get_usb3_eco_option1(data)                           (0x00000001&(data))

#define  USB3_TOP_USB_TMP_3                                                     0x1805A08C
#define  USB3_TOP_USB_TMP_3_reg_addr                                             "0xB805A08C"
#define  USB3_TOP_USB_TMP_3_reg                                                  0xB805A08C
#define  USB3_TOP_USB_TMP_3_inst_addr                                            "0x0019"
#define  set_USB3_TOP_USB_TMP_3_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB_TMP_3_reg)=data)
#define  get_USB3_TOP_USB_TMP_3_reg                                              (*((volatile unsigned int*)USB3_TOP_USB_TMP_3_reg))
#define  USB3_TOP_USB_TMP_3_int_loop_en_shift                                    (2)
#define  USB3_TOP_USB_TMP_3_int_comp_en_shift                                    (1)
#define  USB3_TOP_USB_TMP_3_usb_tmp_3_reg_shift                                  (0)
#define  USB3_TOP_USB_TMP_3_int_loop_en_mask                                     (0x00000004)
#define  USB3_TOP_USB_TMP_3_int_comp_en_mask                                     (0x00000002)
#define  USB3_TOP_USB_TMP_3_usb_tmp_3_reg_mask                                   (0x00000001)
#define  USB3_TOP_USB_TMP_3_int_loop_en(data)                                    (0x00000004&((data)<<2))
#define  USB3_TOP_USB_TMP_3_int_comp_en(data)                                    (0x00000002&((data)<<1))
#define  USB3_TOP_USB_TMP_3_usb_tmp_3_reg(data)                                  (0x00000001&(data))
#define  USB3_TOP_USB_TMP_3_get_int_loop_en(data)                                ((0x00000004&(data))>>2)
#define  USB3_TOP_USB_TMP_3_get_int_comp_en(data)                                ((0x00000002&(data))>>1)
#define  USB3_TOP_USB_TMP_3_get_usb_tmp_3_reg(data)                              (0x00000001&(data))

#define  USB3_TOP_HMAC_CTR0                                                     0x1805A090
#define  USB3_TOP_HMAC_CTR0_reg_addr                                             "0xB805A090"
#define  USB3_TOP_HMAC_CTR0_reg                                                  0xB805A090
#define  USB3_TOP_HMAC_CTR0_inst_addr                                            "0x001A"
#define  set_USB3_TOP_HMAC_CTR0_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_HMAC_CTR0_reg)=data)
#define  get_USB3_TOP_HMAC_CTR0_reg                                              (*((volatile unsigned int*)USB3_TOP_HMAC_CTR0_reg))
#define  USB3_TOP_HMAC_CTR0_xhci_revision_shift                                  (31)
#define  USB3_TOP_HMAC_CTR0_host_fladj_30mhz_shift                               (25)
#define  USB3_TOP_HMAC_CTR0_host_ppc_present_shift                               (24)
#define  USB3_TOP_HMAC_CTR0_host_msi_enable_shift                                (23)
#define  USB3_TOP_HMAC_CTR0_host_pm_pw_state_req_shift                           (21)
#define  USB3_TOP_HMAC_CTR0_hub_port_perm_attach_shift                           (16)
#define  USB3_TOP_HMAC_CTR0_host_u2_port_disable_shift                           (9)
#define  USB3_TOP_HMAC_CTR0_host_u3_port_disable_shift                           (8)
#define  USB3_TOP_HMAC_CTR0_host_num_u2_port_shift                               (4)
#define  USB3_TOP_HMAC_CTR0_host_num_u3_port_shift                               (0)
#define  USB3_TOP_HMAC_CTR0_xhci_revision_mask                                   (0x80000000)
#define  USB3_TOP_HMAC_CTR0_host_fladj_30mhz_mask                                (0x7E000000)
#define  USB3_TOP_HMAC_CTR0_host_ppc_present_mask                                (0x01000000)
#define  USB3_TOP_HMAC_CTR0_host_msi_enable_mask                                 (0x00800000)
#define  USB3_TOP_HMAC_CTR0_host_pm_pw_state_req_mask                            (0x00600000)
#define  USB3_TOP_HMAC_CTR0_hub_port_perm_attach_mask                            (0x001F0000)
#define  USB3_TOP_HMAC_CTR0_host_u2_port_disable_mask                            (0x00001E00)
#define  USB3_TOP_HMAC_CTR0_host_u3_port_disable_mask                            (0x00000100)
#define  USB3_TOP_HMAC_CTR0_host_num_u2_port_mask                                (0x000000F0)
#define  USB3_TOP_HMAC_CTR0_host_num_u3_port_mask                                (0x0000000F)
#define  USB3_TOP_HMAC_CTR0_xhci_revision(data)                                  (0x80000000&((data)<<31))
#define  USB3_TOP_HMAC_CTR0_host_fladj_30mhz(data)                               (0x7E000000&((data)<<25))
#define  USB3_TOP_HMAC_CTR0_host_ppc_present(data)                               (0x01000000&((data)<<24))
#define  USB3_TOP_HMAC_CTR0_host_msi_enable(data)                                (0x00800000&((data)<<23))
#define  USB3_TOP_HMAC_CTR0_host_pm_pw_state_req(data)                           (0x00600000&((data)<<21))
#define  USB3_TOP_HMAC_CTR0_hub_port_perm_attach(data)                           (0x001F0000&((data)<<16))
#define  USB3_TOP_HMAC_CTR0_host_u2_port_disable(data)                           (0x00001E00&((data)<<9))
#define  USB3_TOP_HMAC_CTR0_host_u3_port_disable(data)                           (0x00000100&((data)<<8))
#define  USB3_TOP_HMAC_CTR0_host_num_u2_port(data)                               (0x000000F0&((data)<<4))
#define  USB3_TOP_HMAC_CTR0_host_num_u3_port(data)                               (0x0000000F&(data))
#define  USB3_TOP_HMAC_CTR0_get_xhci_revision(data)                              ((0x80000000&(data))>>31)
#define  USB3_TOP_HMAC_CTR0_get_host_fladj_30mhz(data)                           ((0x7E000000&(data))>>25)
#define  USB3_TOP_HMAC_CTR0_get_host_ppc_present(data)                           ((0x01000000&(data))>>24)
#define  USB3_TOP_HMAC_CTR0_get_host_msi_enable(data)                            ((0x00800000&(data))>>23)
#define  USB3_TOP_HMAC_CTR0_get_host_pm_pw_state_req(data)                       ((0x00600000&(data))>>21)
#define  USB3_TOP_HMAC_CTR0_get_hub_port_perm_attach(data)                       ((0x001F0000&(data))>>16)
#define  USB3_TOP_HMAC_CTR0_get_host_u2_port_disable(data)                       ((0x00001E00&(data))>>9)
#define  USB3_TOP_HMAC_CTR0_get_host_u3_port_disable(data)                       ((0x00000100&(data))>>8)
#define  USB3_TOP_HMAC_CTR0_get_host_num_u2_port(data)                           ((0x000000F0&(data))>>4)
#define  USB3_TOP_HMAC_CTR0_get_host_num_u3_port(data)                           (0x0000000F&(data))

#define  USB3_TOP_HMAC_CTR1                                                     0x1805A094
#define  USB3_TOP_HMAC_CTR1_reg_addr                                             "0xB805A094"
#define  USB3_TOP_HMAC_CTR1_reg                                                  0xB805A094
#define  USB3_TOP_HMAC_CTR1_inst_addr                                            "0x001B"
#define  set_USB3_TOP_HMAC_CTR1_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_HMAC_CTR1_reg)=data)
#define  get_USB3_TOP_HMAC_CTR1_reg                                              (*((volatile unsigned int*)USB3_TOP_HMAC_CTR1_reg))
#define  USB3_TOP_HMAC_CTR1_host_utmiotg_vbusvalid_shift                         (28)
#define  USB3_TOP_HMAC_CTR1_host_mac_vbus_inv_shift                              (24)
#define  USB3_TOP_HMAC_CTR1_host_vbus_value_shift                                (20)
#define  USB3_TOP_HMAC_CTR1_host_vbus_sel_shift                                  (16)
#define  USB3_TOP_HMAC_CTR1_hub_port_over_cur_inv_shift                          (8)
#define  USB3_TOP_HMAC_CTR1_host_over_cur_value_shift                            (4)
#define  USB3_TOP_HMAC_CTR1_host_over_cur_sel_shift                              (0)
#define  USB3_TOP_HMAC_CTR1_host_utmiotg_vbusvalid_mask                          (0xF0000000)
#define  USB3_TOP_HMAC_CTR1_host_mac_vbus_inv_mask                               (0x0F000000)
#define  USB3_TOP_HMAC_CTR1_host_vbus_value_mask                                 (0x00F00000)
#define  USB3_TOP_HMAC_CTR1_host_vbus_sel_mask                                   (0x000F0000)
#define  USB3_TOP_HMAC_CTR1_hub_port_over_cur_inv_mask                           (0x00000700)
#define  USB3_TOP_HMAC_CTR1_host_over_cur_value_mask                             (0x00000070)
#define  USB3_TOP_HMAC_CTR1_host_over_cur_sel_mask                               (0x00000007)
#define  USB3_TOP_HMAC_CTR1_host_utmiotg_vbusvalid(data)                         (0xF0000000&((data)<<28))
#define  USB3_TOP_HMAC_CTR1_host_mac_vbus_inv(data)                              (0x0F000000&((data)<<24))
#define  USB3_TOP_HMAC_CTR1_host_vbus_value(data)                                (0x00F00000&((data)<<20))
#define  USB3_TOP_HMAC_CTR1_host_vbus_sel(data)                                  (0x000F0000&((data)<<16))
#define  USB3_TOP_HMAC_CTR1_hub_port_over_cur_inv(data)                          (0x00000700&((data)<<8))
#define  USB3_TOP_HMAC_CTR1_host_over_cur_value(data)                            (0x00000070&((data)<<4))
#define  USB3_TOP_HMAC_CTR1_host_over_cur_sel(data)                              (0x00000007&(data))
#define  USB3_TOP_HMAC_CTR1_get_host_utmiotg_vbusvalid(data)                     ((0xF0000000&(data))>>28)
#define  USB3_TOP_HMAC_CTR1_get_host_mac_vbus_inv(data)                          ((0x0F000000&(data))>>24)
#define  USB3_TOP_HMAC_CTR1_get_host_vbus_value(data)                            ((0x00F00000&(data))>>20)
#define  USB3_TOP_HMAC_CTR1_get_host_vbus_sel(data)                              ((0x000F0000&(data))>>16)
#define  USB3_TOP_HMAC_CTR1_get_hub_port_over_cur_inv(data)                      ((0x00000700&(data))>>8)
#define  USB3_TOP_HMAC_CTR1_get_host_over_cur_value(data)                        ((0x00000070&(data))>>4)
#define  USB3_TOP_HMAC_CTR1_get_host_over_cur_sel(data)                          (0x00000007&(data))

#define  USB3_TOP_MAC3_HST_ST                                                   0x1805A098
#define  USB3_TOP_MAC3_HST_ST_reg_addr                                           "0xB805A098"
#define  USB3_TOP_MAC3_HST_ST_reg                                                0xB805A098
#define  USB3_TOP_MAC3_HST_ST_inst_addr                                          "0x001C"
#define  set_USB3_TOP_MAC3_HST_ST_reg(data)                                      (*((volatile unsigned int*)USB3_TOP_MAC3_HST_ST_reg)=data)
#define  get_USB3_TOP_MAC3_HST_ST_reg                                            (*((volatile unsigned int*)USB3_TOP_MAC3_HST_ST_reg))
#define  USB3_TOP_MAC3_HST_ST_host_current_belt_shift                            (7)
#define  USB3_TOP_MAC3_HST_ST_host_current_power_state_shift                     (5)
#define  USB3_TOP_MAC3_HST_ST_host_hub_vbus_ctrl_shift                           (0)
#define  USB3_TOP_MAC3_HST_ST_host_current_belt_mask                             (0x0007FF80)
#define  USB3_TOP_MAC3_HST_ST_host_current_power_state_mask                      (0x00000060)
#define  USB3_TOP_MAC3_HST_ST_host_hub_vbus_ctrl_mask                            (0x0000001F)
#define  USB3_TOP_MAC3_HST_ST_host_current_belt(data)                            (0x0007FF80&((data)<<7))
#define  USB3_TOP_MAC3_HST_ST_host_current_power_state(data)                     (0x00000060&((data)<<5))
#define  USB3_TOP_MAC3_HST_ST_host_hub_vbus_ctrl(data)                           (0x0000001F&(data))
#define  USB3_TOP_MAC3_HST_ST_get_host_current_belt(data)                        ((0x0007FF80&(data))>>7)
#define  USB3_TOP_MAC3_HST_ST_get_host_current_power_state(data)                 ((0x00000060&(data))>>5)
#define  USB3_TOP_MAC3_HST_ST_get_host_hub_vbus_ctrl(data)                       (0x0000001F&(data))

#define  USB3_TOP_USB2_PHY0                                                     0x1805A09C
#define  USB3_TOP_USB2_PHY0_reg_addr                                             "0xB805A09C"
#define  USB3_TOP_USB2_PHY0_reg                                                  0xB805A09C
#define  USB3_TOP_USB2_PHY0_inst_addr                                            "0x001D"
#define  set_USB3_TOP_USB2_PHY0_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB2_PHY0_reg)=data)
#define  get_USB3_TOP_USB2_PHY0_reg                                              (*((volatile unsigned int*)USB3_TOP_USB2_PHY0_reg))
#define  USB3_TOP_USB2_PHY0_p0_dmpulldown_shift                                  (10)
#define  USB3_TOP_USB2_PHY0_p0_dppulldown_shift                                  (9)
#define  USB3_TOP_USB2_PHY0_p0_idpullup_shift                                    (8)
#define  USB3_TOP_USB2_PHY0_p0_dmpulldown_sel_shift                              (2)
#define  USB3_TOP_USB2_PHY0_p0_dppulldown_sel_shift                              (1)
#define  USB3_TOP_USB2_PHY0_p0_idpullup_sel_shift                                (0)
#define  USB3_TOP_USB2_PHY0_p0_dmpulldown_mask                                   (0x00000400)
#define  USB3_TOP_USB2_PHY0_p0_dppulldown_mask                                   (0x00000200)
#define  USB3_TOP_USB2_PHY0_p0_idpullup_mask                                     (0x00000100)
#define  USB3_TOP_USB2_PHY0_p0_dmpulldown_sel_mask                               (0x00000004)
#define  USB3_TOP_USB2_PHY0_p0_dppulldown_sel_mask                               (0x00000002)
#define  USB3_TOP_USB2_PHY0_p0_idpullup_sel_mask                                 (0x00000001)
#define  USB3_TOP_USB2_PHY0_p0_dmpulldown(data)                                  (0x00000400&((data)<<10))
#define  USB3_TOP_USB2_PHY0_p0_dppulldown(data)                                  (0x00000200&((data)<<9))
#define  USB3_TOP_USB2_PHY0_p0_idpullup(data)                                    (0x00000100&((data)<<8))
#define  USB3_TOP_USB2_PHY0_p0_dmpulldown_sel(data)                              (0x00000004&((data)<<2))
#define  USB3_TOP_USB2_PHY0_p0_dppulldown_sel(data)                              (0x00000002&((data)<<1))
#define  USB3_TOP_USB2_PHY0_p0_idpullup_sel(data)                                (0x00000001&(data))
#define  USB3_TOP_USB2_PHY0_get_p0_dmpulldown(data)                              ((0x00000400&(data))>>10)
#define  USB3_TOP_USB2_PHY0_get_p0_dppulldown(data)                              ((0x00000200&(data))>>9)
#define  USB3_TOP_USB2_PHY0_get_p0_idpullup(data)                                ((0x00000100&(data))>>8)
#define  USB3_TOP_USB2_PHY0_get_p0_dmpulldown_sel(data)                          ((0x00000004&(data))>>2)
#define  USB3_TOP_USB2_PHY0_get_p0_dppulldown_sel(data)                          ((0x00000002&(data))>>1)
#define  USB3_TOP_USB2_PHY0_get_p0_idpullup_sel(data)                            (0x00000001&(data))

#define  USB3_TOP_USB2_PHY1                                                     0x1805A0A0
#define  USB3_TOP_USB2_PHY1_reg_addr                                             "0xB805A0A0"
#define  USB3_TOP_USB2_PHY1_reg                                                  0xB805A0A0
#define  USB3_TOP_USB2_PHY1_inst_addr                                            "0x001E"
#define  set_USB3_TOP_USB2_PHY1_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB2_PHY1_reg)=data)
#define  get_USB3_TOP_USB2_PHY1_reg                                              (*((volatile unsigned int*)USB3_TOP_USB2_PHY1_reg))
#define  USB3_TOP_USB2_PHY1_p1_dmpulldown_shift                                  (10)
#define  USB3_TOP_USB2_PHY1_p1_dppulldown_shift                                  (9)
#define  USB3_TOP_USB2_PHY1_p1_idpullup_shift                                    (8)
#define  USB3_TOP_USB2_PHY1_p1_dmpulldown_sel_shift                              (2)
#define  USB3_TOP_USB2_PHY1_p1_dppulldown_sel_shift                              (1)
#define  USB3_TOP_USB2_PHY1_p1_idpullup_sel_shift                                (0)
#define  USB3_TOP_USB2_PHY1_p1_dmpulldown_mask                                   (0x00000400)
#define  USB3_TOP_USB2_PHY1_p1_dppulldown_mask                                   (0x00000200)
#define  USB3_TOP_USB2_PHY1_p1_idpullup_mask                                     (0x00000100)
#define  USB3_TOP_USB2_PHY1_p1_dmpulldown_sel_mask                               (0x00000004)
#define  USB3_TOP_USB2_PHY1_p1_dppulldown_sel_mask                               (0x00000002)
#define  USB3_TOP_USB2_PHY1_p1_idpullup_sel_mask                                 (0x00000001)
#define  USB3_TOP_USB2_PHY1_p1_dmpulldown(data)                                  (0x00000400&((data)<<10))
#define  USB3_TOP_USB2_PHY1_p1_dppulldown(data)                                  (0x00000200&((data)<<9))
#define  USB3_TOP_USB2_PHY1_p1_idpullup(data)                                    (0x00000100&((data)<<8))
#define  USB3_TOP_USB2_PHY1_p1_dmpulldown_sel(data)                              (0x00000004&((data)<<2))
#define  USB3_TOP_USB2_PHY1_p1_dppulldown_sel(data)                              (0x00000002&((data)<<1))
#define  USB3_TOP_USB2_PHY1_p1_idpullup_sel(data)                                (0x00000001&(data))
#define  USB3_TOP_USB2_PHY1_get_p1_dmpulldown(data)                              ((0x00000400&(data))>>10)
#define  USB3_TOP_USB2_PHY1_get_p1_dppulldown(data)                              ((0x00000200&(data))>>9)
#define  USB3_TOP_USB2_PHY1_get_p1_idpullup(data)                                ((0x00000100&(data))>>8)
#define  USB3_TOP_USB2_PHY1_get_p1_dmpulldown_sel(data)                          ((0x00000004&(data))>>2)
#define  USB3_TOP_USB2_PHY1_get_p1_dppulldown_sel(data)                          ((0x00000002&(data))>>1)
#define  USB3_TOP_USB2_PHY1_get_p1_idpullup_sel(data)                            (0x00000001&(data))

#define  USB3_TOP_RAM_CTR                                                       0x1805A0AC
#define  USB3_TOP_RAM_CTR_reg_addr                                               "0xB805A0AC"
#define  USB3_TOP_RAM_CTR_reg                                                    0xB805A0AC
#define  USB3_TOP_RAM_CTR_inst_addr                                              "0x001F"
#define  set_USB3_TOP_RAM_CTR_reg(data)                                          (*((volatile unsigned int*)USB3_TOP_RAM_CTR_reg)=data)
#define  get_USB3_TOP_RAM_CTR_reg                                                (*((volatile unsigned int*)USB3_TOP_RAM_CTR_reg))
#define  USB3_TOP_RAM_CTR_done_st_shift                                          (16)
#define  USB3_TOP_RAM_CTR_go_ct_shift                                            (0)
#define  USB3_TOP_RAM_CTR_done_st_mask                                           (0x00010000)
#define  USB3_TOP_RAM_CTR_go_ct_mask                                             (0x00000001)
#define  USB3_TOP_RAM_CTR_done_st(data)                                          (0x00010000&((data)<<16))
#define  USB3_TOP_RAM_CTR_go_ct(data)                                            (0x00000001&(data))
#define  USB3_TOP_RAM_CTR_get_done_st(data)                                      ((0x00010000&(data))>>16)
#define  USB3_TOP_RAM_CTR_get_go_ct(data)                                        (0x00000001&(data))

#define  USB3_TOP_RAM_ADDR                                                      0x1805A0B0
#define  USB3_TOP_RAM_ADDR_reg_addr                                              "0xB805A0B0"
#define  USB3_TOP_RAM_ADDR_reg                                                   0xB805A0B0
#define  USB3_TOP_RAM_ADDR_inst_addr                                             "0x0020"
#define  set_USB3_TOP_RAM_ADDR_reg(data)                                         (*((volatile unsigned int*)USB3_TOP_RAM_ADDR_reg)=data)
#define  get_USB3_TOP_RAM_ADDR_reg                                               (*((volatile unsigned int*)USB3_TOP_RAM_ADDR_reg))
#define  USB3_TOP_RAM_ADDR_sram_addr_shift                                       (0)
#define  USB3_TOP_RAM_ADDR_sram_addr_mask                                        (0xFFFFFFFF)
#define  USB3_TOP_RAM_ADDR_sram_addr(data)                                       (0xFFFFFFFF&(data))
#define  USB3_TOP_RAM_ADDR_get_sram_addr(data)                                   (0xFFFFFFFF&(data))

#define  USB3_TOP_RAM_WDATA                                                     0x1805A0B4
#define  USB3_TOP_RAM_WDATA_reg_addr                                             "0xB805A0B4"
#define  USB3_TOP_RAM_WDATA_reg                                                  0xB805A0B4
#define  USB3_TOP_RAM_WDATA_inst_addr                                            "0x0021"
#define  set_USB3_TOP_RAM_WDATA_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_RAM_WDATA_reg)=data)
#define  get_USB3_TOP_RAM_WDATA_reg                                              (*((volatile unsigned int*)USB3_TOP_RAM_WDATA_reg))
#define  USB3_TOP_RAM_WDATA_ram_wdata_shift                                      (0)
#define  USB3_TOP_RAM_WDATA_ram_wdata_mask                                       (0xFFFFFFFF)
#define  USB3_TOP_RAM_WDATA_ram_wdata(data)                                      (0xFFFFFFFF&(data))
#define  USB3_TOP_RAM_WDATA_get_ram_wdata(data)                                  (0xFFFFFFFF&(data))

#define  USB3_TOP_RAM_RDATA                                                     0x1805A0B8
#define  USB3_TOP_RAM_RDATA_reg_addr                                             "0xB805A0B8"
#define  USB3_TOP_RAM_RDATA_reg                                                  0xB805A0B8
#define  USB3_TOP_RAM_RDATA_inst_addr                                            "0x0022"
#define  set_USB3_TOP_RAM_RDATA_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_RAM_RDATA_reg)=data)
#define  get_USB3_TOP_RAM_RDATA_reg                                              (*((volatile unsigned int*)USB3_TOP_RAM_RDATA_reg))
#define  USB3_TOP_RAM_RDATA_ram_rdata_shift                                      (0)
#define  USB3_TOP_RAM_RDATA_ram_rdata_mask                                       (0xFFFFFFFF)
#define  USB3_TOP_RAM_RDATA_ram_rdata(data)                                      (0xFFFFFFFF&(data))
#define  USB3_TOP_RAM_RDATA_get_ram_rdata(data)                                  (0xFFFFFFFF&(data))

#define  USB3_TOP_PHY0_ST                                                       0x1805A0BC
#define  USB3_TOP_PHY0_ST_reg_addr                                               "0xB805A0BC"
#define  USB3_TOP_PHY0_ST_reg                                                    0xB805A0BC
#define  USB3_TOP_PHY0_ST_inst_addr                                              "0x0023"
#define  set_USB3_TOP_PHY0_ST_reg(data)                                          (*((volatile unsigned int*)USB3_TOP_PHY0_ST_reg)=data)
#define  get_USB3_TOP_PHY0_ST_reg                                                (*((volatile unsigned int*)USB3_TOP_PHY0_ST_reg))
#define  USB3_TOP_PHY0_ST_p0_count_num_shift                                     (0)
#define  USB3_TOP_PHY0_ST_p0_count_num_mask                                      (0x0007FFFF)
#define  USB3_TOP_PHY0_ST_p0_count_num(data)                                     (0x0007FFFF&(data))
#define  USB3_TOP_PHY0_ST_get_p0_count_num(data)                                 (0x0007FFFF&(data))

#define  USB3_TOP_USB3_OVR_CT                                                   0x1805A0C0
#define  USB3_TOP_USB3_OVR_CT_reg_addr                                           "0xB805A0C0"
#define  USB3_TOP_USB3_OVR_CT_reg                                                0xB805A0C0
#define  USB3_TOP_USB3_OVR_CT_inst_addr                                          "0x0024"
#define  set_USB3_TOP_USB3_OVR_CT_reg(data)                                      (*((volatile unsigned int*)USB3_TOP_USB3_OVR_CT_reg)=data)
#define  get_USB3_TOP_USB3_OVR_CT_reg                                            (*((volatile unsigned int*)USB3_TOP_USB3_OVR_CT_reg))
#define  USB3_TOP_USB3_OVR_CT_phy3_lperiod_shift                                 (7)
#define  USB3_TOP_USB3_OVR_CT_phy3_hperiod_shift                                 (4)
#define  USB3_TOP_USB3_OVR_CT_phy3_last_shift                                    (2)
#define  USB3_TOP_USB3_OVR_CT_host_ovr_current_value_shift                       (1)
#define  USB3_TOP_USB3_OVR_CT_host_ovr_current_sel_shift                         (0)
#define  USB3_TOP_USB3_OVR_CT_phy3_lperiod_mask                                  (0x00000380)
#define  USB3_TOP_USB3_OVR_CT_phy3_hperiod_mask                                  (0x00000070)
#define  USB3_TOP_USB3_OVR_CT_phy3_last_mask                                     (0x0000000C)
#define  USB3_TOP_USB3_OVR_CT_host_ovr_current_value_mask                        (0x00000002)
#define  USB3_TOP_USB3_OVR_CT_host_ovr_current_sel_mask                          (0x00000001)
#define  USB3_TOP_USB3_OVR_CT_phy3_lperiod(data)                                 (0x00000380&((data)<<7))
#define  USB3_TOP_USB3_OVR_CT_phy3_hperiod(data)                                 (0x00000070&((data)<<4))
#define  USB3_TOP_USB3_OVR_CT_phy3_last(data)                                    (0x0000000C&((data)<<2))
#define  USB3_TOP_USB3_OVR_CT_host_ovr_current_value(data)                       (0x00000002&((data)<<1))
#define  USB3_TOP_USB3_OVR_CT_host_ovr_current_sel(data)                         (0x00000001&(data))
#define  USB3_TOP_USB3_OVR_CT_get_phy3_lperiod(data)                             ((0x00000380&(data))>>7)
#define  USB3_TOP_USB3_OVR_CT_get_phy3_hperiod(data)                             ((0x00000070&(data))>>4)
#define  USB3_TOP_USB3_OVR_CT_get_phy3_last(data)                                ((0x0000000C&(data))>>2)
#define  USB3_TOP_USB3_OVR_CT_get_host_ovr_current_value(data)                   ((0x00000002&(data))>>1)
#define  USB3_TOP_USB3_OVR_CT_get_host_ovr_current_sel(data)                     (0x00000001&(data))

#define  USB3_TOP_ANA_PHY0                                                      0x1805A0C4
#define  USB3_TOP_ANA_PHY0_reg_addr                                              "0xB805A0C4"
#define  USB3_TOP_ANA_PHY0_reg                                                   0xB805A0C4
#define  USB3_TOP_ANA_PHY0_inst_addr                                             "0x0025"
#define  set_USB3_TOP_ANA_PHY0_reg(data)                                         (*((volatile unsigned int*)USB3_TOP_ANA_PHY0_reg)=data)
#define  get_USB3_TOP_ANA_PHY0_reg                                               (*((volatile unsigned int*)USB3_TOP_ANA_PHY0_reg))
#define  USB3_TOP_ANA_PHY0_usb3_mbias_en_p0_shift                                (3)
#define  USB3_TOP_ANA_PHY0_usb3_bg_en_p0_shift                                   (2)
#define  USB3_TOP_ANA_PHY0_usb3_pow_gating_p0_shift                              (1)
#define  USB3_TOP_ANA_PHY0_usb3_isolate_p0_shift                                 (0)
#define  USB3_TOP_ANA_PHY0_usb3_mbias_en_p0_mask                                 (0x00000008)
#define  USB3_TOP_ANA_PHY0_usb3_bg_en_p0_mask                                    (0x00000004)
#define  USB3_TOP_ANA_PHY0_usb3_pow_gating_p0_mask                               (0x00000002)
#define  USB3_TOP_ANA_PHY0_usb3_isolate_p0_mask                                  (0x00000001)
#define  USB3_TOP_ANA_PHY0_usb3_mbias_en_p0(data)                                (0x00000008&((data)<<3))
#define  USB3_TOP_ANA_PHY0_usb3_bg_en_p0(data)                                   (0x00000004&((data)<<2))
#define  USB3_TOP_ANA_PHY0_usb3_pow_gating_p0(data)                              (0x00000002&((data)<<1))
#define  USB3_TOP_ANA_PHY0_usb3_isolate_p0(data)                                 (0x00000001&(data))
#define  USB3_TOP_ANA_PHY0_get_usb3_mbias_en_p0(data)                            ((0x00000008&(data))>>3)
#define  USB3_TOP_ANA_PHY0_get_usb3_bg_en_p0(data)                               ((0x00000004&(data))>>2)
#define  USB3_TOP_ANA_PHY0_get_usb3_pow_gating_p0(data)                          ((0x00000002&(data))>>1)
#define  USB3_TOP_ANA_PHY0_get_usb3_isolate_p0(data)                             (0x00000001&(data))

#define  USB3_TOP_GBL_USB_CT                                                    0x1805A0CC
#define  USB3_TOP_GBL_USB_CT_reg_addr                                            "0xB805A0CC"
#define  USB3_TOP_GBL_USB_CT_reg                                                 0xB805A0CC
#define  USB3_TOP_GBL_USB_CT_inst_addr                                           "0x0026"
#define  set_USB3_TOP_GBL_USB_CT_reg(data)                                       (*((volatile unsigned int*)USB3_TOP_GBL_USB_CT_reg)=data)
#define  get_USB3_TOP_GBL_USB_CT_reg                                             (*((volatile unsigned int*)USB3_TOP_GBL_USB_CT_reg))
#define  USB3_TOP_GBL_USB_CT_usb_mac_ctrl_shift                                  (0)
#define  USB3_TOP_GBL_USB_CT_usb_mac_ctrl_mask                                   (0xFFFFFFFF)
#define  USB3_TOP_GBL_USB_CT_usb_mac_ctrl(data)                                  (0xFFFFFFFF&(data))
#define  USB3_TOP_GBL_USB_CT_get_usb_mac_ctrl(data)                              (0xFFFFFFFF&(data))

#define  USB3_TOP_SF_test_CTR                                                   0x1805A0D0
#define  USB3_TOP_SF_test_CTR_reg_addr                                           "0xB805A0D0"
#define  USB3_TOP_SF_test_CTR_reg                                                0xB805A0D0
#define  USB3_TOP_SF_test_CTR_inst_addr                                          "0x0027"
#define  set_USB3_TOP_SF_test_CTR_reg(data)                                      (*((volatile unsigned int*)USB3_TOP_SF_test_CTR_reg)=data)
#define  get_USB3_TOP_SF_test_CTR_reg                                            (*((volatile unsigned int*)USB3_TOP_SF_test_CTR_reg))
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_fail_bit_status_ro_shift                 (16)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_debug_bit_sel_shift                      (8)
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_mode_shift                               (7)
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_start_shift                              (6)
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_work_ro_shift                            (5)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_mode_shift                               (4)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_start_shift                              (3)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_gated_shift                              (2)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_done_ro_shift                            (1)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_err_ro_shift                             (0)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_fail_bit_status_ro_mask                  (0x00010000)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_debug_bit_sel_mask                       (0x0000FF00)
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_mode_mask                                (0x00000080)
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_start_mask                               (0x00000040)
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_work_ro_mask                             (0x00000020)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_mode_mask                                (0x00000010)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_start_mask                               (0x00000008)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_gated_mask                               (0x00000004)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_done_ro_mask                             (0x00000002)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_err_ro_mask                              (0x00000001)
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_fail_bit_status_ro(data)                 (0x00010000&((data)<<16))
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_debug_bit_sel(data)                      (0x0000FF00&((data)<<8))
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_mode(data)                               (0x00000080&((data)<<7))
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_start(data)                              (0x00000040&((data)<<6))
#define  USB3_TOP_SF_test_CTR_reg_sf_tx_work_ro(data)                            (0x00000020&((data)<<5))
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_mode(data)                               (0x00000010&((data)<<4))
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_start(data)                              (0x00000008&((data)<<3))
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_gated(data)                              (0x00000004&((data)<<2))
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_done_ro(data)                            (0x00000002&((data)<<1))
#define  USB3_TOP_SF_test_CTR_reg_sf_rx_err_ro(data)                             (0x00000001&(data))
#define  USB3_TOP_SF_test_CTR_get_reg_sf_rx_fail_bit_status_ro(data)             ((0x00010000&(data))>>16)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_rx_debug_bit_sel(data)                  ((0x0000FF00&(data))>>8)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_tx_mode(data)                           ((0x00000080&(data))>>7)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_tx_start(data)                          ((0x00000040&(data))>>6)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_tx_work_ro(data)                        ((0x00000020&(data))>>5)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_rx_mode(data)                           ((0x00000010&(data))>>4)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_rx_start(data)                          ((0x00000008&(data))>>3)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_rx_gated(data)                          ((0x00000004&(data))>>2)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_rx_done_ro(data)                        ((0x00000002&(data))>>1)
#define  USB3_TOP_SF_test_CTR_get_reg_sf_rx_err_ro(data)                         (0x00000001&(data))

#define  USB3_TOP_BIST0                                                         0x1805A100
#define  USB3_TOP_BIST0_reg_addr                                                 "0xB805A100"
#define  USB3_TOP_BIST0_reg                                                      0xB805A100
#define  USB3_TOP_BIST0_inst_addr                                                "0x0028"
#define  set_USB3_TOP_BIST0_reg(data)                                            (*((volatile unsigned int*)USB3_TOP_BIST0_reg)=data)
#define  get_USB3_TOP_BIST0_reg                                                  (*((volatile unsigned int*)USB3_TOP_BIST0_reg))
#define  USB3_TOP_BIST0_usb_bist_mode_host_ram_1_shift                           (2)
#define  USB3_TOP_BIST0_usb_bist_mode_host_ram_2_shift                           (1)
#define  USB3_TOP_BIST0_usb_bist_mode_wrap_shift                                 (0)
#define  USB3_TOP_BIST0_usb_bist_mode_host_ram_1_mask                            (0x00000004)
#define  USB3_TOP_BIST0_usb_bist_mode_host_ram_2_mask                            (0x00000002)
#define  USB3_TOP_BIST0_usb_bist_mode_wrap_mask                                  (0x00000001)
#define  USB3_TOP_BIST0_usb_bist_mode_host_ram_1(data)                           (0x00000004&((data)<<2))
#define  USB3_TOP_BIST0_usb_bist_mode_host_ram_2(data)                           (0x00000002&((data)<<1))
#define  USB3_TOP_BIST0_usb_bist_mode_wrap(data)                                 (0x00000001&(data))
#define  USB3_TOP_BIST0_get_usb_bist_mode_host_ram_1(data)                       ((0x00000004&(data))>>2)
#define  USB3_TOP_BIST0_get_usb_bist_mode_host_ram_2(data)                       ((0x00000002&(data))>>1)
#define  USB3_TOP_BIST0_get_usb_bist_mode_wrap(data)                             (0x00000001&(data))

#define  USB3_TOP_BIST1                                                         0x1805A104
#define  USB3_TOP_BIST1_reg_addr                                                 "0xB805A104"
#define  USB3_TOP_BIST1_reg                                                      0xB805A104
#define  USB3_TOP_BIST1_inst_addr                                                "0x0029"
#define  set_USB3_TOP_BIST1_reg(data)                                            (*((volatile unsigned int*)USB3_TOP_BIST1_reg)=data)
#define  get_USB3_TOP_BIST1_reg                                                  (*((volatile unsigned int*)USB3_TOP_BIST1_reg))
#define  USB3_TOP_BIST1_usb_bist_done_host_ram_1_shift                           (2)
#define  USB3_TOP_BIST1_usb_bist_done_host_ram_2_shift                           (1)
#define  USB3_TOP_BIST1_usb_bist_done_wrap_shift                                 (0)
#define  USB3_TOP_BIST1_usb_bist_done_host_ram_1_mask                            (0x00000004)
#define  USB3_TOP_BIST1_usb_bist_done_host_ram_2_mask                            (0x00000002)
#define  USB3_TOP_BIST1_usb_bist_done_wrap_mask                                  (0x00000001)
#define  USB3_TOP_BIST1_usb_bist_done_host_ram_1(data)                           (0x00000004&((data)<<2))
#define  USB3_TOP_BIST1_usb_bist_done_host_ram_2(data)                           (0x00000002&((data)<<1))
#define  USB3_TOP_BIST1_usb_bist_done_wrap(data)                                 (0x00000001&(data))
#define  USB3_TOP_BIST1_get_usb_bist_done_host_ram_1(data)                       ((0x00000004&(data))>>2)
#define  USB3_TOP_BIST1_get_usb_bist_done_host_ram_2(data)                       ((0x00000002&(data))>>1)
#define  USB3_TOP_BIST1_get_usb_bist_done_wrap(data)                             (0x00000001&(data))

#define  USB3_TOP_BIST2                                                         0x1805A108
#define  USB3_TOP_BIST2_reg_addr                                                 "0xB805A108"
#define  USB3_TOP_BIST2_reg                                                      0xB805A108
#define  USB3_TOP_BIST2_inst_addr                                                "0x002A"
#define  set_USB3_TOP_BIST2_reg(data)                                            (*((volatile unsigned int*)USB3_TOP_BIST2_reg)=data)
#define  get_USB3_TOP_BIST2_reg                                                  (*((volatile unsigned int*)USB3_TOP_BIST2_reg))
#define  USB3_TOP_BIST2_usb_bist_fail_group_host_ram_1_shift                     (2)
#define  USB3_TOP_BIST2_usb_bist_fail_group_host_ram_2_shift                     (1)
#define  USB3_TOP_BIST2_usb_bist_fail_group_wrap_shift                           (0)
#define  USB3_TOP_BIST2_usb_bist_fail_group_host_ram_1_mask                      (0x00000004)
#define  USB3_TOP_BIST2_usb_bist_fail_group_host_ram_2_mask                      (0x00000002)
#define  USB3_TOP_BIST2_usb_bist_fail_group_wrap_mask                            (0x00000001)
#define  USB3_TOP_BIST2_usb_bist_fail_group_host_ram_1(data)                     (0x00000004&((data)<<2))
#define  USB3_TOP_BIST2_usb_bist_fail_group_host_ram_2(data)                     (0x00000002&((data)<<1))
#define  USB3_TOP_BIST2_usb_bist_fail_group_wrap(data)                           (0x00000001&(data))
#define  USB3_TOP_BIST2_get_usb_bist_fail_group_host_ram_1(data)                 ((0x00000004&(data))>>2)
#define  USB3_TOP_BIST2_get_usb_bist_fail_group_host_ram_2(data)                 ((0x00000002&(data))>>1)
#define  USB3_TOP_BIST2_get_usb_bist_fail_group_wrap(data)                       (0x00000001&(data))

#define  USB3_TOP_BIST3                                                         0x1805A10C
#define  USB3_TOP_BIST3_reg_addr                                                 "0xB805A10C"
#define  USB3_TOP_BIST3_reg                                                      0xB805A10C
#define  USB3_TOP_BIST3_inst_addr                                                "0x002B"
#define  set_USB3_TOP_BIST3_reg(data)                                            (*((volatile unsigned int*)USB3_TOP_BIST3_reg)=data)
#define  get_USB3_TOP_BIST3_reg                                                  (*((volatile unsigned int*)USB3_TOP_BIST3_reg))
#define  USB3_TOP_BIST3_usb_bist_host_ram_1_fail_0_shift                         (0)
#define  USB3_TOP_BIST3_usb_bist_host_ram_1_fail_0_mask                          (0x00000001)
#define  USB3_TOP_BIST3_usb_bist_host_ram_1_fail_0(data)                         (0x00000001&(data))
#define  USB3_TOP_BIST3_get_usb_bist_host_ram_1_fail_0(data)                     (0x00000001&(data))

#define  USB3_TOP_BIST4                                                         0x1805A110
#define  USB3_TOP_BIST4_reg_addr                                                 "0xB805A110"
#define  USB3_TOP_BIST4_reg                                                      0xB805A110
#define  USB3_TOP_BIST4_inst_addr                                                "0x002C"
#define  set_USB3_TOP_BIST4_reg(data)                                            (*((volatile unsigned int*)USB3_TOP_BIST4_reg)=data)
#define  get_USB3_TOP_BIST4_reg                                                  (*((volatile unsigned int*)USB3_TOP_BIST4_reg))
#define  USB3_TOP_BIST4_usb_bist_host_ram_2_fail_1_shift                         (1)
#define  USB3_TOP_BIST4_usb_bist_host_ram_2_fail_0_shift                         (0)
#define  USB3_TOP_BIST4_usb_bist_host_ram_2_fail_1_mask                          (0x00000002)
#define  USB3_TOP_BIST4_usb_bist_host_ram_2_fail_0_mask                          (0x00000001)
#define  USB3_TOP_BIST4_usb_bist_host_ram_2_fail_1(data)                         (0x00000002&((data)<<1))
#define  USB3_TOP_BIST4_usb_bist_host_ram_2_fail_0(data)                         (0x00000001&(data))
#define  USB3_TOP_BIST4_get_usb_bist_host_ram_2_fail_1(data)                     ((0x00000002&(data))>>1)
#define  USB3_TOP_BIST4_get_usb_bist_host_ram_2_fail_0(data)                     (0x00000001&(data))

#define  USB3_TOP_BIST5                                                         0x1805A114
#define  USB3_TOP_BIST5_reg_addr                                                 "0xB805A114"
#define  USB3_TOP_BIST5_reg                                                      0xB805A114
#define  USB3_TOP_BIST5_inst_addr                                                "0x002D"
#define  set_USB3_TOP_BIST5_reg(data)                                            (*((volatile unsigned int*)USB3_TOP_BIST5_reg)=data)
#define  get_USB3_TOP_BIST5_reg                                                  (*((volatile unsigned int*)USB3_TOP_BIST5_reg))
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_3_shift                               (3)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_2_shift                               (2)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_1_shift                               (1)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_0_shift                               (0)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_3_mask                                (0x00000008)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_2_mask                                (0x00000004)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_1_mask                                (0x00000002)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_0_mask                                (0x00000001)
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_3(data)                               (0x00000008&((data)<<3))
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_2(data)                               (0x00000004&((data)<<2))
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_1(data)                               (0x00000002&((data)<<1))
#define  USB3_TOP_BIST5_usb_bist_wrap_fail_0(data)                               (0x00000001&(data))
#define  USB3_TOP_BIST5_get_usb_bist_wrap_fail_3(data)                           ((0x00000008&(data))>>3)
#define  USB3_TOP_BIST5_get_usb_bist_wrap_fail_2(data)                           ((0x00000004&(data))>>2)
#define  USB3_TOP_BIST5_get_usb_bist_wrap_fail_1(data)                           ((0x00000002&(data))>>1)
#define  USB3_TOP_BIST5_get_usb_bist_wrap_fail_0(data)                           (0x00000001&(data))

#define  USB3_TOP_DRF0                                                          0x1805A118
#define  USB3_TOP_DRF0_reg_addr                                                  "0xB805A118"
#define  USB3_TOP_DRF0_reg                                                       0xB805A118
#define  USB3_TOP_DRF0_inst_addr                                                 "0x002E"
#define  set_USB3_TOP_DRF0_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF0_reg)=data)
#define  get_USB3_TOP_DRF0_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF0_reg))
#define  USB3_TOP_DRF0_usb_drf_mode_host_ram_1_shift                             (2)
#define  USB3_TOP_DRF0_usb_drf_mode_host_ram_2_shift                             (1)
#define  USB3_TOP_DRF0_usb_drf_mode_wrap_shift                                   (0)
#define  USB3_TOP_DRF0_usb_drf_mode_host_ram_1_mask                              (0x00000004)
#define  USB3_TOP_DRF0_usb_drf_mode_host_ram_2_mask                              (0x00000002)
#define  USB3_TOP_DRF0_usb_drf_mode_wrap_mask                                    (0x00000001)
#define  USB3_TOP_DRF0_usb_drf_mode_host_ram_1(data)                             (0x00000004&((data)<<2))
#define  USB3_TOP_DRF0_usb_drf_mode_host_ram_2(data)                             (0x00000002&((data)<<1))
#define  USB3_TOP_DRF0_usb_drf_mode_wrap(data)                                   (0x00000001&(data))
#define  USB3_TOP_DRF0_get_usb_drf_mode_host_ram_1(data)                         ((0x00000004&(data))>>2)
#define  USB3_TOP_DRF0_get_usb_drf_mode_host_ram_2(data)                         ((0x00000002&(data))>>1)
#define  USB3_TOP_DRF0_get_usb_drf_mode_wrap(data)                               (0x00000001&(data))

#define  USB3_TOP_DRF1                                                          0x1805A11C
#define  USB3_TOP_DRF1_reg_addr                                                  "0xB805A11C"
#define  USB3_TOP_DRF1_reg                                                       0xB805A11C
#define  USB3_TOP_DRF1_inst_addr                                                 "0x002F"
#define  set_USB3_TOP_DRF1_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF1_reg)=data)
#define  get_USB3_TOP_DRF1_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF1_reg))
#define  USB3_TOP_DRF1_usb_drf_resume_host_ram_1_shift                           (2)
#define  USB3_TOP_DRF1_usb_drf_resume_host_ram_2_shift                           (1)
#define  USB3_TOP_DRF1_usb_drf_resume_wrap_shift                                 (0)
#define  USB3_TOP_DRF1_usb_drf_resume_host_ram_1_mask                            (0x00000004)
#define  USB3_TOP_DRF1_usb_drf_resume_host_ram_2_mask                            (0x00000002)
#define  USB3_TOP_DRF1_usb_drf_resume_wrap_mask                                  (0x00000001)
#define  USB3_TOP_DRF1_usb_drf_resume_host_ram_1(data)                           (0x00000004&((data)<<2))
#define  USB3_TOP_DRF1_usb_drf_resume_host_ram_2(data)                           (0x00000002&((data)<<1))
#define  USB3_TOP_DRF1_usb_drf_resume_wrap(data)                                 (0x00000001&(data))
#define  USB3_TOP_DRF1_get_usb_drf_resume_host_ram_1(data)                       ((0x00000004&(data))>>2)
#define  USB3_TOP_DRF1_get_usb_drf_resume_host_ram_2(data)                       ((0x00000002&(data))>>1)
#define  USB3_TOP_DRF1_get_usb_drf_resume_wrap(data)                             (0x00000001&(data))

#define  USB3_TOP_DRF2                                                          0x1805A120
#define  USB3_TOP_DRF2_reg_addr                                                  "0xB805A120"
#define  USB3_TOP_DRF2_reg                                                       0xB805A120
#define  USB3_TOP_DRF2_inst_addr                                                 "0x0030"
#define  set_USB3_TOP_DRF2_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF2_reg)=data)
#define  get_USB3_TOP_DRF2_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF2_reg))
#define  USB3_TOP_DRF2_usb_drf_done_host_ram_1_shift                             (2)
#define  USB3_TOP_DRF2_usb_drf_done_host_ram_2_shift                             (1)
#define  USB3_TOP_DRF2_usb_drf_done_wrap_shift                                   (0)
#define  USB3_TOP_DRF2_usb_drf_done_host_ram_1_mask                              (0x00000004)
#define  USB3_TOP_DRF2_usb_drf_done_host_ram_2_mask                              (0x00000002)
#define  USB3_TOP_DRF2_usb_drf_done_wrap_mask                                    (0x00000001)
#define  USB3_TOP_DRF2_usb_drf_done_host_ram_1(data)                             (0x00000004&((data)<<2))
#define  USB3_TOP_DRF2_usb_drf_done_host_ram_2(data)                             (0x00000002&((data)<<1))
#define  USB3_TOP_DRF2_usb_drf_done_wrap(data)                                   (0x00000001&(data))
#define  USB3_TOP_DRF2_get_usb_drf_done_host_ram_1(data)                         ((0x00000004&(data))>>2)
#define  USB3_TOP_DRF2_get_usb_drf_done_host_ram_2(data)                         ((0x00000002&(data))>>1)
#define  USB3_TOP_DRF2_get_usb_drf_done_wrap(data)                               (0x00000001&(data))

#define  USB3_TOP_DRF3                                                          0x1805A124
#define  USB3_TOP_DRF3_reg_addr                                                  "0xB805A124"
#define  USB3_TOP_DRF3_reg                                                       0xB805A124
#define  USB3_TOP_DRF3_inst_addr                                                 "0x0031"
#define  set_USB3_TOP_DRF3_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF3_reg)=data)
#define  get_USB3_TOP_DRF3_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF3_reg))
#define  USB3_TOP_DRF3_usb_drf_pause_host_ram_1_shift                            (2)
#define  USB3_TOP_DRF3_usb_drf_pause_host_ram_2_shift                            (1)
#define  USB3_TOP_DRF3_usb_drf_pause_wrap_shift                                  (0)
#define  USB3_TOP_DRF3_usb_drf_pause_host_ram_1_mask                             (0x00000004)
#define  USB3_TOP_DRF3_usb_drf_pause_host_ram_2_mask                             (0x00000002)
#define  USB3_TOP_DRF3_usb_drf_pause_wrap_mask                                   (0x00000001)
#define  USB3_TOP_DRF3_usb_drf_pause_host_ram_1(data)                            (0x00000004&((data)<<2))
#define  USB3_TOP_DRF3_usb_drf_pause_host_ram_2(data)                            (0x00000002&((data)<<1))
#define  USB3_TOP_DRF3_usb_drf_pause_wrap(data)                                  (0x00000001&(data))
#define  USB3_TOP_DRF3_get_usb_drf_pause_host_ram_1(data)                        ((0x00000004&(data))>>2)
#define  USB3_TOP_DRF3_get_usb_drf_pause_host_ram_2(data)                        ((0x00000002&(data))>>1)
#define  USB3_TOP_DRF3_get_usb_drf_pause_wrap(data)                              (0x00000001&(data))

#define  USB3_TOP_DRF4                                                          0x1805A128
#define  USB3_TOP_DRF4_reg_addr                                                  "0xB805A128"
#define  USB3_TOP_DRF4_reg                                                       0xB805A128
#define  USB3_TOP_DRF4_inst_addr                                                 "0x0032"
#define  set_USB3_TOP_DRF4_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF4_reg)=data)
#define  get_USB3_TOP_DRF4_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF4_reg))
#define  USB3_TOP_DRF4_usb_drf_fail_group_host_ram_1_shift                       (2)
#define  USB3_TOP_DRF4_usb_drf_fail_group_host_ram_2_shift                       (1)
#define  USB3_TOP_DRF4_usb_drf_fail_group_wrap_shift                             (0)
#define  USB3_TOP_DRF4_usb_drf_fail_group_host_ram_1_mask                        (0x00000004)
#define  USB3_TOP_DRF4_usb_drf_fail_group_host_ram_2_mask                        (0x00000002)
#define  USB3_TOP_DRF4_usb_drf_fail_group_wrap_mask                              (0x00000001)
#define  USB3_TOP_DRF4_usb_drf_fail_group_host_ram_1(data)                       (0x00000004&((data)<<2))
#define  USB3_TOP_DRF4_usb_drf_fail_group_host_ram_2(data)                       (0x00000002&((data)<<1))
#define  USB3_TOP_DRF4_usb_drf_fail_group_wrap(data)                             (0x00000001&(data))
#define  USB3_TOP_DRF4_get_usb_drf_fail_group_host_ram_1(data)                   ((0x00000004&(data))>>2)
#define  USB3_TOP_DRF4_get_usb_drf_fail_group_host_ram_2(data)                   ((0x00000002&(data))>>1)
#define  USB3_TOP_DRF4_get_usb_drf_fail_group_wrap(data)                         (0x00000001&(data))

#define  USB3_TOP_DRF5                                                          0x1805A12C
#define  USB3_TOP_DRF5_reg_addr                                                  "0xB805A12C"
#define  USB3_TOP_DRF5_reg                                                       0xB805A12C
#define  USB3_TOP_DRF5_inst_addr                                                 "0x0033"
#define  set_USB3_TOP_DRF5_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF5_reg)=data)
#define  get_USB3_TOP_DRF5_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF5_reg))
#define  USB3_TOP_DRF5_usb_drf_host_ram_1_fail_0_shift                           (0)
#define  USB3_TOP_DRF5_usb_drf_host_ram_1_fail_0_mask                            (0x00000001)
#define  USB3_TOP_DRF5_usb_drf_host_ram_1_fail_0(data)                           (0x00000001&(data))
#define  USB3_TOP_DRF5_get_usb_drf_host_ram_1_fail_0(data)                       (0x00000001&(data))

#define  USB3_TOP_DRF6                                                          0x1805A130
#define  USB3_TOP_DRF6_reg_addr                                                  "0xB805A130"
#define  USB3_TOP_DRF6_reg                                                       0xB805A130
#define  USB3_TOP_DRF6_inst_addr                                                 "0x0034"
#define  set_USB3_TOP_DRF6_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF6_reg)=data)
#define  get_USB3_TOP_DRF6_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF6_reg))
#define  USB3_TOP_DRF6_usb_drf_host_ram_2_fail_1_shift                           (1)
#define  USB3_TOP_DRF6_usb_drf_host_ram_2_fail_0_shift                           (0)
#define  USB3_TOP_DRF6_usb_drf_host_ram_2_fail_1_mask                            (0x00000002)
#define  USB3_TOP_DRF6_usb_drf_host_ram_2_fail_0_mask                            (0x00000001)
#define  USB3_TOP_DRF6_usb_drf_host_ram_2_fail_1(data)                           (0x00000002&((data)<<1))
#define  USB3_TOP_DRF6_usb_drf_host_ram_2_fail_0(data)                           (0x00000001&(data))
#define  USB3_TOP_DRF6_get_usb_drf_host_ram_2_fail_1(data)                       ((0x00000002&(data))>>1)
#define  USB3_TOP_DRF6_get_usb_drf_host_ram_2_fail_0(data)                       (0x00000001&(data))

#define  USB3_TOP_DRF7                                                          0x1805A134
#define  USB3_TOP_DRF7_reg_addr                                                  "0xB805A134"
#define  USB3_TOP_DRF7_reg                                                       0xB805A134
#define  USB3_TOP_DRF7_inst_addr                                                 "0x0035"
#define  set_USB3_TOP_DRF7_reg(data)                                             (*((volatile unsigned int*)USB3_TOP_DRF7_reg)=data)
#define  get_USB3_TOP_DRF7_reg                                                   (*((volatile unsigned int*)USB3_TOP_DRF7_reg))
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_3_shift                                 (3)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_2_shift                                 (2)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_1_shift                                 (1)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_0_shift                                 (0)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_3_mask                                  (0x00000008)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_2_mask                                  (0x00000004)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_1_mask                                  (0x00000002)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_0_mask                                  (0x00000001)
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_3(data)                                 (0x00000008&((data)<<3))
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_2(data)                                 (0x00000004&((data)<<2))
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_1(data)                                 (0x00000002&((data)<<1))
#define  USB3_TOP_DRF7_usb_drf_wrap_fail_0(data)                                 (0x00000001&(data))
#define  USB3_TOP_DRF7_get_usb_drf_wrap_fail_3(data)                             ((0x00000008&(data))>>3)
#define  USB3_TOP_DRF7_get_usb_drf_wrap_fail_2(data)                             ((0x00000004&(data))>>2)
#define  USB3_TOP_DRF7_get_usb_drf_wrap_fail_1(data)                             ((0x00000002&(data))>>1)
#define  USB3_TOP_DRF7_get_usb_drf_wrap_fail_0(data)                             (0x00000001&(data))

#define  USB3_TOP_BIST_OP0                                                      0x1805A138
#define  USB3_TOP_BIST_OP0_reg_addr                                              "0xB805A138"
#define  USB3_TOP_BIST_OP0_reg                                                   0xB805A138
#define  USB3_TOP_BIST_OP0_inst_addr                                             "0x0036"
#define  set_USB3_TOP_BIST_OP0_reg(data)                                         (*((volatile unsigned int*)USB3_TOP_BIST_OP0_reg)=data)
#define  get_USB3_TOP_BIST_OP0_reg                                               (*((volatile unsigned int*)USB3_TOP_BIST_OP0_reg))
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_ls1_shift                               (11)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rme1_shift                              (10)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rm1_shift                               (6)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_ls0_shift                               (5)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rme0_shift                              (4)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rm0_shift                               (0)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_ls1_mask                                (0x00000800)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rme1_mask                               (0x00000400)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rm1_mask                                (0x000003C0)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_ls0_mask                                (0x00000020)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rme0_mask                               (0x00000010)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rm0_mask                                (0x0000000F)
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_ls1(data)                               (0x00000800&((data)<<11))
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rme1(data)                              (0x00000400&((data)<<10))
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rm1(data)                               (0x000003C0&((data)<<6))
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_ls0(data)                               (0x00000020&((data)<<5))
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rme0(data)                              (0x00000010&((data)<<4))
#define  USB3_TOP_BIST_OP0_usb_bist_wrap_rm0(data)                               (0x0000000F&(data))
#define  USB3_TOP_BIST_OP0_get_usb_bist_wrap_ls1(data)                           ((0x00000800&(data))>>11)
#define  USB3_TOP_BIST_OP0_get_usb_bist_wrap_rme1(data)                          ((0x00000400&(data))>>10)
#define  USB3_TOP_BIST_OP0_get_usb_bist_wrap_rm1(data)                           ((0x000003C0&(data))>>6)
#define  USB3_TOP_BIST_OP0_get_usb_bist_wrap_ls0(data)                           ((0x00000020&(data))>>5)
#define  USB3_TOP_BIST_OP0_get_usb_bist_wrap_rme0(data)                          ((0x00000010&(data))>>4)
#define  USB3_TOP_BIST_OP0_get_usb_bist_wrap_rm0(data)                           (0x0000000F&(data))

#define  USB3_TOP_BIST_OP1                                                      0x1805A13C
#define  USB3_TOP_BIST_OP1_reg_addr                                              "0xB805A13C"
#define  USB3_TOP_BIST_OP1_reg                                                   0xB805A13C
#define  USB3_TOP_BIST_OP1_inst_addr                                             "0x0037"
#define  set_USB3_TOP_BIST_OP1_reg(data)                                         (*((volatile unsigned int*)USB3_TOP_BIST_OP1_reg)=data)
#define  get_USB3_TOP_BIST_OP1_reg                                               (*((volatile unsigned int*)USB3_TOP_BIST_OP1_reg))
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_ls0_shift                          (5)
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_rme0_shift                         (4)
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_rm0_shift                          (0)
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_ls0_mask                           (0x00000020)
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_rme0_mask                          (0x00000010)
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_rm0_mask                           (0x0000000F)
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_ls0(data)                          (0x00000020&((data)<<5))
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_rme0(data)                         (0x00000010&((data)<<4))
#define  USB3_TOP_BIST_OP1_usb_usb_host_ram_1_rm0(data)                          (0x0000000F&(data))
#define  USB3_TOP_BIST_OP1_get_usb_usb_host_ram_1_ls0(data)                      ((0x00000020&(data))>>5)
#define  USB3_TOP_BIST_OP1_get_usb_usb_host_ram_1_rme0(data)                     ((0x00000010&(data))>>4)
#define  USB3_TOP_BIST_OP1_get_usb_usb_host_ram_1_rm0(data)                      (0x0000000F&(data))

#define  USB3_TOP_BIST_OP2                                                      0x1805A140
#define  USB3_TOP_BIST_OP2_reg_addr                                              "0xB805A140"
#define  USB3_TOP_BIST_OP2_reg                                                   0xB805A140
#define  USB3_TOP_BIST_OP2_inst_addr                                             "0x0038"
#define  set_USB3_TOP_BIST_OP2_reg(data)                                         (*((volatile unsigned int*)USB3_TOP_BIST_OP2_reg)=data)
#define  get_USB3_TOP_BIST_OP2_reg                                               (*((volatile unsigned int*)USB3_TOP_BIST_OP2_reg))
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_ls1_shift                          (11)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rme1_shift                         (10)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rm1_shift                          (6)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_ls0_shift                          (5)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rme0_shift                         (4)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rm0_shift                          (0)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_ls1_mask                           (0x00000800)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rme1_mask                          (0x00000400)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rm1_mask                           (0x000003C0)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_ls0_mask                           (0x00000020)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rme0_mask                          (0x00000010)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rm0_mask                           (0x0000000F)
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_ls1(data)                          (0x00000800&((data)<<11))
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rme1(data)                         (0x00000400&((data)<<10))
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rm1(data)                          (0x000003C0&((data)<<6))
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_ls0(data)                          (0x00000020&((data)<<5))
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rme0(data)                         (0x00000010&((data)<<4))
#define  USB3_TOP_BIST_OP2_usb_usb_host_ram_2_rm0(data)                          (0x0000000F&(data))
#define  USB3_TOP_BIST_OP2_get_usb_usb_host_ram_2_ls1(data)                      ((0x00000800&(data))>>11)
#define  USB3_TOP_BIST_OP2_get_usb_usb_host_ram_2_rme1(data)                     ((0x00000400&(data))>>10)
#define  USB3_TOP_BIST_OP2_get_usb_usb_host_ram_2_rm1(data)                      ((0x000003C0&(data))>>6)
#define  USB3_TOP_BIST_OP2_get_usb_usb_host_ram_2_ls0(data)                      ((0x00000020&(data))>>5)
#define  USB3_TOP_BIST_OP2_get_usb_usb_host_ram_2_rme0(data)                     ((0x00000010&(data))>>4)
#define  USB3_TOP_BIST_OP2_get_usb_usb_host_ram_2_rm0(data)                      (0x0000000F&(data))

#define  USB3_TOP_LTSSM_reg                                                     0x1805A14C
#define  USB3_TOP_LTSSM_reg_reg_addr                                             "0xB805A14C"
#define  USB3_TOP_LTSSM_reg_reg                                                  0xB805A14C
#define  USB3_TOP_LTSSM_reg_inst_addr                                            "0x0039"
#define  set_USB3_TOP_LTSSM_reg_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_LTSSM_reg_reg)=data)
#define  get_USB3_TOP_LTSSM_reg_reg                                              (*((volatile unsigned int*)USB3_TOP_LTSSM_reg_reg))
#define  USB3_TOP_LTSSM_reg_u2_p1_suspend_n_shift                                (29)
#define  USB3_TOP_LTSSM_reg_u2_p0_suspend_n_shift                                (28)
#define  USB3_TOP_LTSSM_reg_u2_p1_portstate_shift                                (13)
#define  USB3_TOP_LTSSM_reg_u2_p0_portstate_shift                                (8)
#define  USB3_TOP_LTSSM_reg_usb30_ltdb_link_state_shift                          (4)
#define  USB3_TOP_LTSSM_reg_usb30_ltdb_sub_state_shift                           (0)
#define  USB3_TOP_LTSSM_reg_u2_p1_suspend_n_mask                                 (0x20000000)
#define  USB3_TOP_LTSSM_reg_u2_p0_suspend_n_mask                                 (0x10000000)
#define  USB3_TOP_LTSSM_reg_u2_p1_portstate_mask                                 (0x0003E000)
#define  USB3_TOP_LTSSM_reg_u2_p0_portstate_mask                                 (0x00001F00)
#define  USB3_TOP_LTSSM_reg_usb30_ltdb_link_state_mask                           (0x000000F0)
#define  USB3_TOP_LTSSM_reg_usb30_ltdb_sub_state_mask                            (0x0000000F)
#define  USB3_TOP_LTSSM_reg_u2_p1_suspend_n(data)                                (0x20000000&((data)<<29))
#define  USB3_TOP_LTSSM_reg_u2_p0_suspend_n(data)                                (0x10000000&((data)<<28))
#define  USB3_TOP_LTSSM_reg_u2_p1_portstate(data)                                (0x0003E000&((data)<<13))
#define  USB3_TOP_LTSSM_reg_u2_p0_portstate(data)                                (0x00001F00&((data)<<8))
#define  USB3_TOP_LTSSM_reg_usb30_ltdb_link_state(data)                          (0x000000F0&((data)<<4))
#define  USB3_TOP_LTSSM_reg_usb30_ltdb_sub_state(data)                           (0x0000000F&(data))
#define  USB3_TOP_LTSSM_reg_get_u2_p1_suspend_n(data)                            ((0x20000000&(data))>>29)
#define  USB3_TOP_LTSSM_reg_get_u2_p0_suspend_n(data)                            ((0x10000000&(data))>>28)
#define  USB3_TOP_LTSSM_reg_get_u2_p1_portstate(data)                            ((0x0003E000&(data))>>13)
#define  USB3_TOP_LTSSM_reg_get_u2_p0_portstate(data)                            ((0x00001F00&(data))>>8)
#define  USB3_TOP_LTSSM_reg_get_usb30_ltdb_link_state(data)                      ((0x000000F0&(data))>>4)
#define  USB3_TOP_LTSSM_reg_get_usb30_ltdb_sub_state(data)                       (0x0000000F&(data))

#define  USB3_TOP_CRC_CNT_1                                                     0x1805A154
#define  USB3_TOP_CRC_CNT_1_reg_addr                                             "0xB805A154"
#define  USB3_TOP_CRC_CNT_1_reg                                                  0xB805A154
#define  USB3_TOP_CRC_CNT_1_inst_addr                                            "0x003A"
#define  set_USB3_TOP_CRC_CNT_1_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_CRC_CNT_1_reg)=data)
#define  get_USB3_TOP_CRC_CNT_1_reg                                              (*((volatile unsigned int*)USB3_TOP_CRC_CNT_1_reg))
#define  USB3_TOP_CRC_CNT_1_crc_err_cnt_shift                                    (5)
#define  USB3_TOP_CRC_CNT_1_crc_cnt_sel_shift                                    (2)
#define  USB3_TOP_CRC_CNT_1_crc_cnt_rst_shift                                    (1)
#define  USB3_TOP_CRC_CNT_1_crc_cnt_en_shift                                     (0)
#define  USB3_TOP_CRC_CNT_1_crc_err_cnt_mask                                     (0x001FFFE0)
#define  USB3_TOP_CRC_CNT_1_crc_cnt_sel_mask                                     (0x0000001C)
#define  USB3_TOP_CRC_CNT_1_crc_cnt_rst_mask                                     (0x00000002)
#define  USB3_TOP_CRC_CNT_1_crc_cnt_en_mask                                      (0x00000001)
#define  USB3_TOP_CRC_CNT_1_crc_err_cnt(data)                                    (0x001FFFE0&((data)<<5))
#define  USB3_TOP_CRC_CNT_1_crc_cnt_sel(data)                                    (0x0000001C&((data)<<2))
#define  USB3_TOP_CRC_CNT_1_crc_cnt_rst(data)                                    (0x00000002&((data)<<1))
#define  USB3_TOP_CRC_CNT_1_crc_cnt_en(data)                                     (0x00000001&(data))
#define  USB3_TOP_CRC_CNT_1_get_crc_err_cnt(data)                                ((0x001FFFE0&(data))>>5)
#define  USB3_TOP_CRC_CNT_1_get_crc_cnt_sel(data)                                ((0x0000001C&(data))>>2)
#define  USB3_TOP_CRC_CNT_1_get_crc_cnt_rst(data)                                ((0x00000002&(data))>>1)
#define  USB3_TOP_CRC_CNT_1_get_crc_cnt_en(data)                                 (0x00000001&(data))

#define  USB3_TOP_CRC_CNT_2                                                     0x1805A158
#define  USB3_TOP_CRC_CNT_2_reg_addr                                             "0xB805A158"
#define  USB3_TOP_CRC_CNT_2_reg                                                  0xB805A158
#define  USB3_TOP_CRC_CNT_2_inst_addr                                            "0x003B"
#define  set_USB3_TOP_CRC_CNT_2_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_CRC_CNT_2_reg)=data)
#define  get_USB3_TOP_CRC_CNT_2_reg                                              (*((volatile unsigned int*)USB3_TOP_CRC_CNT_2_reg))
#define  USB3_TOP_CRC_CNT_2_package_cnt_shift                                    (0)
#define  USB3_TOP_CRC_CNT_2_package_cnt_mask                                     (0x0000FFFF)
#define  USB3_TOP_CRC_CNT_2_package_cnt(data)                                    (0x0000FFFF&(data))
#define  USB3_TOP_CRC_CNT_2_get_package_cnt(data)                                (0x0000FFFF&(data))

#define  USB3_TOP_USB_STATE_INDICATE                                            0x1805A15C
#define  USB3_TOP_USB_STATE_INDICATE_reg_addr                                    "0xB805A15C"
#define  USB3_TOP_USB_STATE_INDICATE_reg                                         0xB805A15C
#define  USB3_TOP_USB_STATE_INDICATE_inst_addr                                   "0x003C"
#define  set_USB3_TOP_USB_STATE_INDICATE_reg(data)                               (*((volatile unsigned int*)USB3_TOP_USB_STATE_INDICATE_reg)=data)
#define  get_USB3_TOP_USB_STATE_INDICATE_reg                                     (*((volatile unsigned int*)USB3_TOP_USB_STATE_INDICATE_reg))
#define  USB3_TOP_USB_STATE_INDICATE_indicator_en_shift                          (31)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_discon_indic_shift                  (19)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_chrip_indic_shift                   (18)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_reset_indic_shift                   (17)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_resume_indic_shift                  (16)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_suspend_indic_shift                 (15)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_discon_indic_shift                  (14)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_chrip_indic_shift                   (13)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_reset_indic_shift                   (12)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_resume_indic_shift                  (11)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_suspend_indic_shift                 (10)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_rdet_indic_shift                 (9)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_ssinact_indic_shift              (8)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_ssdis_indic_shift                (7)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_hreset_indic_shift               (6)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_poll_indic_shift                 (5)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_recov_indic_shift                (4)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_recov_rx_indic_shift             (3)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_u2u3_indic_shift                 (2)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_u1_indic_shift                   (1)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_indicator_clear_shift                  (0)
#define  USB3_TOP_USB_STATE_INDICATE_indicator_en_mask                           (0x80000000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_discon_indic_mask                   (0x00080000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_chrip_indic_mask                    (0x00040000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_reset_indic_mask                    (0x00020000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_resume_indic_mask                   (0x00010000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_suspend_indic_mask                  (0x00008000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_discon_indic_mask                   (0x00004000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_chrip_indic_mask                    (0x00002000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_reset_indic_mask                    (0x00001000)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_resume_indic_mask                   (0x00000800)
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_suspend_indic_mask                  (0x00000400)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_rdet_indic_mask                  (0x00000200)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_ssinact_indic_mask               (0x00000100)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_ssdis_indic_mask                 (0x00000080)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_hreset_indic_mask                (0x00000040)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_poll_indic_mask                  (0x00000020)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_recov_indic_mask                 (0x00000010)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_recov_rx_indic_mask              (0x00000008)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_u2u3_indic_mask                  (0x00000004)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_u1_indic_mask                    (0x00000002)
#define  USB3_TOP_USB_STATE_INDICATE_usb3_indicator_clear_mask                   (0x00000001)
#define  USB3_TOP_USB_STATE_INDICATE_indicator_en(data)                          (0x80000000&((data)<<31))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_discon_indic(data)                  (0x00080000&((data)<<19))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_chrip_indic(data)                   (0x00040000&((data)<<18))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_reset_indic(data)                   (0x00020000&((data)<<17))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_resume_indic(data)                  (0x00010000&((data)<<16))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p1_suspend_indic(data)                 (0x00008000&((data)<<15))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_discon_indic(data)                  (0x00004000&((data)<<14))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_chrip_indic(data)                   (0x00002000&((data)<<13))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_reset_indic(data)                   (0x00001000&((data)<<12))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_resume_indic(data)                  (0x00000800&((data)<<11))
#define  USB3_TOP_USB_STATE_INDICATE_usb2_p0_suspend_indic(data)                 (0x00000400&((data)<<10))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_rdet_indic(data)                 (0x00000200&((data)<<9))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_ssinact_indic(data)              (0x00000100&((data)<<8))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_ssdis_indic(data)                (0x00000080&((data)<<7))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_hreset_indic(data)               (0x00000040&((data)<<6))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_poll_indic(data)                 (0x00000020&((data)<<5))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_recov_indic(data)                (0x00000010&((data)<<4))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_recov_rx_indic(data)             (0x00000008&((data)<<3))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_u2u3_indic(data)                 (0x00000004&((data)<<2))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_ltssm_u1_indic(data)                   (0x00000002&((data)<<1))
#define  USB3_TOP_USB_STATE_INDICATE_usb3_indicator_clear(data)                  (0x00000001&(data))
#define  USB3_TOP_USB_STATE_INDICATE_get_indicator_en(data)                      ((0x80000000&(data))>>31)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p1_discon_indic(data)              ((0x00080000&(data))>>19)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p1_chrip_indic(data)               ((0x00040000&(data))>>18)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p1_reset_indic(data)               ((0x00020000&(data))>>17)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p1_resume_indic(data)              ((0x00010000&(data))>>16)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p1_suspend_indic(data)             ((0x00008000&(data))>>15)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p0_discon_indic(data)              ((0x00004000&(data))>>14)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p0_chrip_indic(data)               ((0x00002000&(data))>>13)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p0_reset_indic(data)               ((0x00001000&(data))>>12)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p0_resume_indic(data)              ((0x00000800&(data))>>11)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb2_p0_suspend_indic(data)             ((0x00000400&(data))>>10)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_rdet_indic(data)             ((0x00000200&(data))>>9)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_ssinact_indic(data)          ((0x00000100&(data))>>8)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_ssdis_indic(data)            ((0x00000080&(data))>>7)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_hreset_indic(data)           ((0x00000040&(data))>>6)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_poll_indic(data)             ((0x00000020&(data))>>5)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_recov_indic(data)            ((0x00000010&(data))>>4)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_recov_rx_indic(data)         ((0x00000008&(data))>>3)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_u2u3_indic(data)             ((0x00000004&(data))>>2)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_ltssm_u1_indic(data)               ((0x00000002&(data))>>1)
#define  USB3_TOP_USB_STATE_INDICATE_get_usb3_indicator_clear(data)              (0x00000001&(data))

#define  USB3_TOP_USB3_debug                                                    0x1805A160
#define  USB3_TOP_USB3_debug_reg_addr                                            "0xB805A160"
#define  USB3_TOP_USB3_debug_reg                                                 0xB805A160
#define  USB3_TOP_USB3_debug_inst_addr                                           "0x003D"
#define  set_USB3_TOP_USB3_debug_reg(data)                                       (*((volatile unsigned int*)USB3_TOP_USB3_debug_reg)=data)
#define  get_USB3_TOP_USB3_debug_reg                                             (*((volatile unsigned int*)USB3_TOP_USB3_debug_reg))
#define  USB3_TOP_USB3_debug_usb_dbg_out1_shift                                  (16)
#define  USB3_TOP_USB3_debug_usb_dbg_out0_shift                                  (0)
#define  USB3_TOP_USB3_debug_usb_dbg_out1_mask                                   (0xFFFF0000)
#define  USB3_TOP_USB3_debug_usb_dbg_out0_mask                                   (0x0000FFFF)
#define  USB3_TOP_USB3_debug_usb_dbg_out1(data)                                  (0xFFFF0000&((data)<<16))
#define  USB3_TOP_USB3_debug_usb_dbg_out0(data)                                  (0x0000FFFF&(data))
#define  USB3_TOP_USB3_debug_get_usb_dbg_out1(data)                              ((0xFFFF0000&(data))>>16)
#define  USB3_TOP_USB3_debug_get_usb_dbg_out0(data)                              (0x0000FFFF&(data))

#define  USB3_TOP_USB_TMP_5                                                     0x1805AF6C
#define  USB3_TOP_USB_TMP_5_reg_addr                                             "0xB805AF6C"
#define  USB3_TOP_USB_TMP_5_reg                                                  0xB805AF6C
#define  USB3_TOP_USB_TMP_5_inst_addr                                            "0x003E"
#define  set_USB3_TOP_USB_TMP_5_reg(data)                                        (*((volatile unsigned int*)USB3_TOP_USB_TMP_5_reg)=data)
#define  get_USB3_TOP_USB_TMP_5_reg                                              (*((volatile unsigned int*)USB3_TOP_USB_TMP_5_reg))
#define  USB3_TOP_USB_TMP_5_test_reg_5_shift                                     (0)
#define  USB3_TOP_USB_TMP_5_test_reg_5_mask                                      (0xFFFFFFFF)
#define  USB3_TOP_USB_TMP_5_test_reg_5(data)                                     (0xFFFFFFFF&(data))
#define  USB3_TOP_USB_TMP_5_get_test_reg_5(data)                                 (0xFFFFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======USB3_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  dbus_wdone_counter:5;
        RBus_UInt32  dbus_wdone_counter_soft_reset:1;
        RBus_UInt32  dbus_multi_wmask_opt:1;
        RBus_UInt32  dbus_wait_wdone:1;
        RBus_UInt32  sram_debug_sel:1;
        RBus_UInt32  sram_debug_mode:1;
        RBus_UInt32  dbus_multi_req_disable:1;
        RBus_UInt32  dev_mode:1;
    };
}usb3_top_wrap_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  host_int:1;
    };
}usb3_top_gnr_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  reset_utmi_p1:1;
        RBus_UInt32  reset_utmi_p0:1;
    };
}usb3_top_usb2_phy_utmi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  reset_pipe3_p0:1;
    };
}usb3_top_usb3_phy_pipe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:16;
        RBus_UInt32  phy_addr:3;
        RBus_UInt32  phy_reg_addr:5;
        RBus_UInt32  mdio_busy:1;
        RBus_UInt32  mdio_st:2;
        RBus_UInt32  mdio_rdy:1;
        RBus_UInt32  mclk_rate:2;
        RBus_UInt32  mdio_srst:1;
        RBus_UInt32  mdio_rdwr:1;
    };
}usb3_top_mdio_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  p1_vstatus_out:8;
        RBus_UInt32  p0_vstatus_out:8;
    };
}usb3_top_vstatus0_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  simulation_mode_p1:1;
        RBus_UInt32  force_hs_mode_p1:1;
        RBus_UInt32  test_rst_p1:1;
        RBus_UInt32  test_en_p1:1;
        RBus_UInt32  simulation_mode_p0:1;
        RBus_UInt32  force_hs_mode_p0:1;
        RBus_UInt32  test_rst_p0:1;
        RBus_UInt32  test_en_p0:1;
    };
}usb3_top_slp_back0_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  test_speed_p0:2;
        RBus_UInt32  test_seed_p0:8;
        RBus_UInt32  test_psl_p0:2;
    };
}usb3_top_slp_back0_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  test_fail_p0:1;
        RBus_UInt32  test_done_p0:1;
    };
}usb3_top_slp_back0_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  p0_usb2phy_slb_hs:1;
        RBus_UInt32  p0_usb2phy_force_slb:1;
    };
}usb3_top_phy2_slb0_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  p0_usb2phy_slb_fail:1;
        RBus_UInt32  p0_usb2phy_slb_done:1;
    };
}usb3_top_phy2_slb0_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  test_speed_p1:2;
        RBus_UInt32  test_seed_p1:8;
        RBus_UInt32  test_psl_p1:2;
    };
}usb3_top_slp_back1_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  test_fail_p1:1;
        RBus_UInt32  test_done_p1:1;
    };
}usb3_top_slp_back1_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  p1_usb2phy_slb_hs:1;
        RBus_UInt32  p1_usb2phy_force_slb:1;
    };
}usb3_top_phy2_slb1_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  p1_usb2phy_slb_fail:1;
        RBus_UInt32  p1_usb2phy_slb_done:1;
    };
}usb3_top_phy2_slb1_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back2_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back2_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb2_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb2_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back3_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back_st_port3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb3_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb3_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  p1_suspend_r:1;
        RBus_UInt32  p0_suspend_r:1;
    };
}usb3_top_usb2_spd_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  p0_pipe_bist_sel:2;
        RBus_UInt32  p0_pipe_bist_en:1;
    };
}usb3_top_phy3_slb_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  p0_usb3phy_slb_go:1;
    };
}usb3_top_phy3_slb_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  p0_usb3phy_slb_fail:1;
        RBus_UInt32  p0_usb3phy_slb_done:1;
    };
}usb3_top_phy3_slb_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dbg_sel1:6;
        RBus_UInt32  dbg_sel0:6;
        RBus_UInt32  dbg_en:1;
    };
}usb3_top_usb_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg1:16;
        RBus_UInt32  reg0:16;
    };
}usb3_top_usb_sctch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_sp_reg_0:30;
        RBus_UInt32  int_loop_status:1;
        RBus_UInt32  int_comp_status:1;
    };
}usb3_top_usb_tmp_sp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb_tmp_sp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_reg_0:32;
    };
}usb3_top_usb_tmp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  usb_ref_sel:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  test_reg_1:2;
    };
}usb3_top_usb_tmp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  usb3_rxterm_force_val:1;
        RBus_UInt32  usb3_rxterm_force_en:1;
        RBus_UInt32  usb3_eco_option2:1;
        RBus_UInt32  usb3_eco_option1:1;
    };
}usb3_top_usb_tmp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  int_loop_en:1;
        RBus_UInt32  int_comp_en:1;
        RBus_UInt32  usb_tmp_3_reg:1;
    };
}usb3_top_usb_tmp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  xhci_revision:1;
        RBus_UInt32  host_fladj_30mhz:6;
        RBus_UInt32  host_ppc_present:1;
        RBus_UInt32  host_msi_enable:1;
        RBus_UInt32  host_pm_pw_state_req:2;
        RBus_UInt32  hub_port_perm_attach:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  host_u2_port_disable:4;
        RBus_UInt32  host_u3_port_disable:1;
        RBus_UInt32  host_num_u2_port:4;
        RBus_UInt32  host_num_u3_port:4;
    };
}usb3_top_hmac_ctr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  host_utmiotg_vbusvalid:4;
        RBus_UInt32  host_mac_vbus_inv:4;
        RBus_UInt32  host_vbus_value:4;
        RBus_UInt32  host_vbus_sel:4;
        RBus_UInt32  res1:5;
        RBus_UInt32  hub_port_over_cur_inv:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  host_over_cur_value:3;
        RBus_UInt32  res3:1;
        RBus_UInt32  host_over_cur_sel:3;
    };
}usb3_top_hmac_ctr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  host_current_belt:12;
        RBus_UInt32  host_current_power_state:2;
        RBus_UInt32  host_hub_vbus_ctrl:5;
    };
}usb3_top_mac3_hst_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  p0_dmpulldown:1;
        RBus_UInt32  p0_dppulldown:1;
        RBus_UInt32  p0_idpullup:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  p0_dmpulldown_sel:1;
        RBus_UInt32  p0_dppulldown_sel:1;
        RBus_UInt32  p0_idpullup_sel:1;
    };
}usb3_top_usb2_phy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:21;
        RBus_UInt32  p1_dmpulldown:1;
        RBus_UInt32  p1_dppulldown:1;
        RBus_UInt32  p1_idpullup:1;
        RBus_UInt32  res2:5;
        RBus_UInt32  p1_dmpulldown_sel:1;
        RBus_UInt32  p1_dppulldown_sel:1;
        RBus_UInt32  p1_idpullup_sel:1;
    };
}usb3_top_usb2_phy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb2_phy2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb2_phy3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  done_st:1;
        RBus_UInt32  res2:15;
        RBus_UInt32  go_ct:1;
    };
}usb3_top_ram_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_addr:32;
    };
}usb3_top_ram_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ram_wdata:32;
    };
}usb3_top_ram_wdata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ram_rdata:32;
    };
}usb3_top_ram_rdata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:13;
        RBus_UInt32  p0_count_num:19;
    };
}usb3_top_phy0_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:22;
        RBus_UInt32  phy3_lperiod:3;
        RBus_UInt32  phy3_hperiod:3;
        RBus_UInt32  phy3_last:2;
        RBus_UInt32  host_ovr_current_value:1;
        RBus_UInt32  host_ovr_current_sel:1;
    };
}usb3_top_usb3_ovr_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  usb3_mbias_en_p0:1;
        RBus_UInt32  usb3_bg_en_p0:1;
        RBus_UInt32  usb3_pow_gating_p0:1;
        RBus_UInt32  usb3_isolate_p0:1;
    };
}usb3_top_ana_phy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_ana_phy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_mac_ctrl:32;
    };
}usb3_top_gbl_usb_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  reg_sf_rx_fail_bit_status_ro:1;
        RBus_UInt32  reg_sf_rx_debug_bit_sel:8;
        RBus_UInt32  reg_sf_tx_mode:1;
        RBus_UInt32  reg_sf_tx_start:1;
        RBus_UInt32  reg_sf_tx_work_ro:1;
        RBus_UInt32  reg_sf_rx_mode:1;
        RBus_UInt32  reg_sf_rx_start:1;
        RBus_UInt32  reg_sf_rx_gated:1;
        RBus_UInt32  reg_sf_rx_done_ro:1;
        RBus_UInt32  reg_sf_rx_err_ro:1;
    };
}usb3_top_sf_test_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_bist_mode_host_ram_1:1;
        RBus_UInt32  usb_bist_mode_host_ram_2:1;
        RBus_UInt32  usb_bist_mode_wrap:1;
    };
}usb3_top_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_bist_done_host_ram_1:1;
        RBus_UInt32  usb_bist_done_host_ram_2:1;
        RBus_UInt32  usb_bist_done_wrap:1;
    };
}usb3_top_bist1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_bist_fail_group_host_ram_1:1;
        RBus_UInt32  usb_bist_fail_group_host_ram_2:1;
        RBus_UInt32  usb_bist_fail_group_wrap:1;
    };
}usb3_top_bist2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  usb_bist_host_ram_1_fail_0:1;
    };
}usb3_top_bist3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  usb_bist_host_ram_2_fail_1:1;
        RBus_UInt32  usb_bist_host_ram_2_fail_0:1;
    };
}usb3_top_bist4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  usb_bist_wrap_fail_3:1;
        RBus_UInt32  usb_bist_wrap_fail_2:1;
        RBus_UInt32  usb_bist_wrap_fail_1:1;
        RBus_UInt32  usb_bist_wrap_fail_0:1;
    };
}usb3_top_bist5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_drf_mode_host_ram_1:1;
        RBus_UInt32  usb_drf_mode_host_ram_2:1;
        RBus_UInt32  usb_drf_mode_wrap:1;
    };
}usb3_top_drf0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_drf_resume_host_ram_1:1;
        RBus_UInt32  usb_drf_resume_host_ram_2:1;
        RBus_UInt32  usb_drf_resume_wrap:1;
    };
}usb3_top_drf1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_drf_done_host_ram_1:1;
        RBus_UInt32  usb_drf_done_host_ram_2:1;
        RBus_UInt32  usb_drf_done_wrap:1;
    };
}usb3_top_drf2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_drf_pause_host_ram_1:1;
        RBus_UInt32  usb_drf_pause_host_ram_2:1;
        RBus_UInt32  usb_drf_pause_wrap:1;
    };
}usb3_top_drf3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  usb_drf_fail_group_host_ram_1:1;
        RBus_UInt32  usb_drf_fail_group_host_ram_2:1;
        RBus_UInt32  usb_drf_fail_group_wrap:1;
    };
}usb3_top_drf4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  usb_drf_host_ram_1_fail_0:1;
    };
}usb3_top_drf5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  usb_drf_host_ram_2_fail_1:1;
        RBus_UInt32  usb_drf_host_ram_2_fail_0:1;
    };
}usb3_top_drf6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  usb_drf_wrap_fail_3:1;
        RBus_UInt32  usb_drf_wrap_fail_2:1;
        RBus_UInt32  usb_drf_wrap_fail_1:1;
        RBus_UInt32  usb_drf_wrap_fail_0:1;
    };
}usb3_top_drf7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  usb_bist_wrap_ls1:1;
        RBus_UInt32  usb_bist_wrap_rme1:1;
        RBus_UInt32  usb_bist_wrap_rm1:4;
        RBus_UInt32  usb_bist_wrap_ls0:1;
        RBus_UInt32  usb_bist_wrap_rme0:1;
        RBus_UInt32  usb_bist_wrap_rm0:4;
    };
}usb3_top_bist_op0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  usb_usb_host_ram_1_ls0:1;
        RBus_UInt32  usb_usb_host_ram_1_rme0:1;
        RBus_UInt32  usb_usb_host_ram_1_rm0:4;
    };
}usb3_top_bist_op1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  usb_usb_host_ram_2_ls1:1;
        RBus_UInt32  usb_usb_host_ram_2_rme1:1;
        RBus_UInt32  usb_usb_host_ram_2_rm1:4;
        RBus_UInt32  usb_usb_host_ram_2_ls0:1;
        RBus_UInt32  usb_usb_host_ram_2_rme0:1;
        RBus_UInt32  usb_usb_host_ram_2_rm0:4;
    };
}usb3_top_bist_op2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_tc_mux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_tc_ccdet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  u2_p1_suspend_n:1;
        RBus_UInt32  u2_p0_suspend_n:1;
        RBus_UInt32  res2:10;
        RBus_UInt32  u2_p1_portstate:5;
        RBus_UInt32  u2_p0_portstate:5;
        RBus_UInt32  usb30_ltdb_link_state:4;
        RBus_UInt32  usb30_ltdb_sub_state:4;
    };
}usb3_top_ltssm_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb_tmp_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  crc_cnt_sel:3;
        RBus_UInt32  crc_cnt_rst:1;
        RBus_UInt32  crc_cnt_en:1;
    };
}usb3_top_crc_cnt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  package_cnt:16;
    };
}usb3_top_crc_cnt_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  indicator_en:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  usb2_p1_discon_indic:1;
        RBus_UInt32  usb2_p1_chrip_indic:1;
        RBus_UInt32  usb2_p1_reset_indic:1;
        RBus_UInt32  usb2_p1_resume_indic:1;
        RBus_UInt32  usb2_p1_suspend_indic:1;
        RBus_UInt32  usb2_p0_discon_indic:1;
        RBus_UInt32  usb2_p0_chrip_indic:1;
        RBus_UInt32  usb2_p0_reset_indic:1;
        RBus_UInt32  usb2_p0_resume_indic:1;
        RBus_UInt32  usb2_p0_suspend_indic:1;
        RBus_UInt32  usb3_ltssm_rdet_indic:1;
        RBus_UInt32  usb3_ltssm_ssinact_indic:1;
        RBus_UInt32  usb3_ltssm_ssdis_indic:1;
        RBus_UInt32  usb3_ltssm_hreset_indic:1;
        RBus_UInt32  usb3_ltssm_poll_indic:1;
        RBus_UInt32  usb3_ltssm_recov_indic:1;
        RBus_UInt32  usb3_ltssm_recov_rx_indic:1;
        RBus_UInt32  usb3_ltssm_u2u3_indic:1;
        RBus_UInt32  usb3_ltssm_u1_indic:1;
        RBus_UInt32  usb3_indicator_clear:1;
    };
}usb3_top_usb_state_indicate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_dbg_out1:16;
        RBus_UInt32  usb_dbg_out0:16;
    };
}usb3_top_usb3_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_reg_5:32;
    };
}usb3_top_usb_tmp_5_RBUS;

#else //apply LITTLE_ENDIAN

//======USB3_TOP register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dev_mode:1;
        RBus_UInt32  dbus_multi_req_disable:1;
        RBus_UInt32  sram_debug_mode:1;
        RBus_UInt32  sram_debug_sel:1;
        RBus_UInt32  dbus_wait_wdone:1;
        RBus_UInt32  dbus_multi_wmask_opt:1;
        RBus_UInt32  dbus_wdone_counter_soft_reset:1;
        RBus_UInt32  dbus_wdone_counter:5;
        RBus_UInt32  res1:20;
    };
}usb3_top_wrap_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  host_int:1;
        RBus_UInt32  res1:31;
    };
}usb3_top_gnr_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reset_utmi_p0:1;
        RBus_UInt32  reset_utmi_p1:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_usb2_phy_utmi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reset_pipe3_p0:1;
        RBus_UInt32  res1:31;
    };
}usb3_top_usb3_phy_pipe_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  mdio_rdwr:1;
        RBus_UInt32  mdio_srst:1;
        RBus_UInt32  mclk_rate:2;
        RBus_UInt32  mdio_rdy:1;
        RBus_UInt32  mdio_st:2;
        RBus_UInt32  mdio_busy:1;
        RBus_UInt32  phy_reg_addr:5;
        RBus_UInt32  phy_addr:3;
        RBus_UInt32  data:16;
    };
}usb3_top_mdio_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_vstatus_out:8;
        RBus_UInt32  p1_vstatus_out:8;
        RBus_UInt32  res1:16;
    };
}usb3_top_vstatus0_out_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_en_p0:1;
        RBus_UInt32  test_rst_p0:1;
        RBus_UInt32  force_hs_mode_p0:1;
        RBus_UInt32  simulation_mode_p0:1;
        RBus_UInt32  test_en_p1:1;
        RBus_UInt32  test_rst_p1:1;
        RBus_UInt32  force_hs_mode_p1:1;
        RBus_UInt32  simulation_mode_p1:1;
        RBus_UInt32  res1:24;
    };
}usb3_top_slp_back0_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_psl_p0:2;
        RBus_UInt32  test_seed_p0:8;
        RBus_UInt32  test_speed_p0:2;
        RBus_UInt32  res1:20;
    };
}usb3_top_slp_back0_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_done_p0:1;
        RBus_UInt32  test_fail_p0:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_slp_back0_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_usb2phy_force_slb:1;
        RBus_UInt32  p0_usb2phy_slb_hs:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_phy2_slb0_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_usb2phy_slb_done:1;
        RBus_UInt32  p0_usb2phy_slb_fail:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_phy2_slb0_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_psl_p1:2;
        RBus_UInt32  test_seed_p1:8;
        RBus_UInt32  test_speed_p1:2;
        RBus_UInt32  res1:20;
    };
}usb3_top_slp_back1_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_done_p1:1;
        RBus_UInt32  test_fail_p1:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_slp_back1_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_usb2phy_force_slb:1;
        RBus_UInt32  p1_usb2phy_slb_hs:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_phy2_slb1_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_usb2phy_slb_done:1;
        RBus_UInt32  p1_usb2phy_slb_fail:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_phy2_slb1_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back2_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back2_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb2_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb2_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back3_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_slp_back_st_port3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb3_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_phy2_slb3_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_suspend_r:1;
        RBus_UInt32  p1_suspend_r:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_usb2_spd_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_pipe_bist_en:1;
        RBus_UInt32  p0_pipe_bist_sel:2;
        RBus_UInt32  res1:29;
    };
}usb3_top_phy3_slb_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_usb3phy_slb_go:1;
        RBus_UInt32  res1:31;
    };
}usb3_top_phy3_slb_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_usb3phy_slb_done:1;
        RBus_UInt32  p0_usb3phy_slb_fail:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_phy3_slb_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  dbg_sel0:6;
        RBus_UInt32  dbg_sel1:6;
        RBus_UInt32  res1:19;
    };
}usb3_top_usb_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg0:16;
        RBus_UInt32  reg1:16;
    };
}usb3_top_usb_sctch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  int_comp_status:1;
        RBus_UInt32  int_loop_status:1;
        RBus_UInt32  test_sp_reg_0:30;
    };
}usb3_top_usb_tmp_sp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb_tmp_sp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_reg_0:32;
    };
}usb3_top_usb_tmp_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_reg_1:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  usb_ref_sel:4;
        RBus_UInt32  res2:24;
    };
}usb3_top_usb_tmp_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb3_eco_option1:1;
        RBus_UInt32  usb3_eco_option2:1;
        RBus_UInt32  usb3_rxterm_force_en:1;
        RBus_UInt32  usb3_rxterm_force_val:1;
        RBus_UInt32  res1:28;
    };
}usb3_top_usb_tmp_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_tmp_3_reg:1;
        RBus_UInt32  int_comp_en:1;
        RBus_UInt32  int_loop_en:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_usb_tmp_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  host_num_u3_port:4;
        RBus_UInt32  host_num_u2_port:4;
        RBus_UInt32  host_u3_port_disable:1;
        RBus_UInt32  host_u2_port_disable:4;
        RBus_UInt32  res1:3;
        RBus_UInt32  hub_port_perm_attach:5;
        RBus_UInt32  host_pm_pw_state_req:2;
        RBus_UInt32  host_msi_enable:1;
        RBus_UInt32  host_ppc_present:1;
        RBus_UInt32  host_fladj_30mhz:6;
        RBus_UInt32  xhci_revision:1;
    };
}usb3_top_hmac_ctr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  host_over_cur_sel:3;
        RBus_UInt32  res1:1;
        RBus_UInt32  host_over_cur_value:3;
        RBus_UInt32  res2:1;
        RBus_UInt32  hub_port_over_cur_inv:3;
        RBus_UInt32  res3:5;
        RBus_UInt32  host_vbus_sel:4;
        RBus_UInt32  host_vbus_value:4;
        RBus_UInt32  host_mac_vbus_inv:4;
        RBus_UInt32  host_utmiotg_vbusvalid:4;
    };
}usb3_top_hmac_ctr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  host_hub_vbus_ctrl:5;
        RBus_UInt32  host_current_power_state:2;
        RBus_UInt32  host_current_belt:12;
        RBus_UInt32  res1:13;
    };
}usb3_top_mac3_hst_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_idpullup_sel:1;
        RBus_UInt32  p0_dppulldown_sel:1;
        RBus_UInt32  p0_dmpulldown_sel:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  p0_idpullup:1;
        RBus_UInt32  p0_dppulldown:1;
        RBus_UInt32  p0_dmpulldown:1;
        RBus_UInt32  res2:21;
    };
}usb3_top_usb2_phy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p1_idpullup_sel:1;
        RBus_UInt32  p1_dppulldown_sel:1;
        RBus_UInt32  p1_dmpulldown_sel:1;
        RBus_UInt32  res1:5;
        RBus_UInt32  p1_idpullup:1;
        RBus_UInt32  p1_dppulldown:1;
        RBus_UInt32  p1_dmpulldown:1;
        RBus_UInt32  res2:21;
    };
}usb3_top_usb2_phy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb2_phy2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb2_phy3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  go_ct:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  done_st:1;
        RBus_UInt32  res2:15;
    };
}usb3_top_ram_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sram_addr:32;
    };
}usb3_top_ram_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ram_wdata:32;
    };
}usb3_top_ram_wdata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ram_rdata:32;
    };
}usb3_top_ram_rdata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  p0_count_num:19;
        RBus_UInt32  res1:13;
    };
}usb3_top_phy0_st_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  host_ovr_current_sel:1;
        RBus_UInt32  host_ovr_current_value:1;
        RBus_UInt32  phy3_last:2;
        RBus_UInt32  phy3_hperiod:3;
        RBus_UInt32  phy3_lperiod:3;
        RBus_UInt32  res1:22;
    };
}usb3_top_usb3_ovr_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb3_isolate_p0:1;
        RBus_UInt32  usb3_pow_gating_p0:1;
        RBus_UInt32  usb3_bg_en_p0:1;
        RBus_UInt32  usb3_mbias_en_p0:1;
        RBus_UInt32  res1:28;
    };
}usb3_top_ana_phy0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_ana_phy1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_mac_ctrl:32;
    };
}usb3_top_gbl_usb_ct_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_sf_rx_err_ro:1;
        RBus_UInt32  reg_sf_rx_done_ro:1;
        RBus_UInt32  reg_sf_rx_gated:1;
        RBus_UInt32  reg_sf_rx_start:1;
        RBus_UInt32  reg_sf_rx_mode:1;
        RBus_UInt32  reg_sf_tx_work_ro:1;
        RBus_UInt32  reg_sf_tx_start:1;
        RBus_UInt32  reg_sf_tx_mode:1;
        RBus_UInt32  reg_sf_rx_debug_bit_sel:8;
        RBus_UInt32  reg_sf_rx_fail_bit_status_ro:1;
        RBus_UInt32  res1:15;
    };
}usb3_top_sf_test_ctr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_bist_mode_wrap:1;
        RBus_UInt32  usb_bist_mode_host_ram_2:1;
        RBus_UInt32  usb_bist_mode_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_bist0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_bist_done_wrap:1;
        RBus_UInt32  usb_bist_done_host_ram_2:1;
        RBus_UInt32  usb_bist_done_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_bist1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_bist_fail_group_wrap:1;
        RBus_UInt32  usb_bist_fail_group_host_ram_2:1;
        RBus_UInt32  usb_bist_fail_group_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_bist2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_bist_host_ram_1_fail_0:1;
        RBus_UInt32  res1:31;
    };
}usb3_top_bist3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_bist_host_ram_2_fail_0:1;
        RBus_UInt32  usb_bist_host_ram_2_fail_1:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_bist4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_bist_wrap_fail_0:1;
        RBus_UInt32  usb_bist_wrap_fail_1:1;
        RBus_UInt32  usb_bist_wrap_fail_2:1;
        RBus_UInt32  usb_bist_wrap_fail_3:1;
        RBus_UInt32  res1:28;
    };
}usb3_top_bist5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_mode_wrap:1;
        RBus_UInt32  usb_drf_mode_host_ram_2:1;
        RBus_UInt32  usb_drf_mode_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_drf0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_resume_wrap:1;
        RBus_UInt32  usb_drf_resume_host_ram_2:1;
        RBus_UInt32  usb_drf_resume_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_drf1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_done_wrap:1;
        RBus_UInt32  usb_drf_done_host_ram_2:1;
        RBus_UInt32  usb_drf_done_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_drf2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_pause_wrap:1;
        RBus_UInt32  usb_drf_pause_host_ram_2:1;
        RBus_UInt32  usb_drf_pause_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_drf3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_fail_group_wrap:1;
        RBus_UInt32  usb_drf_fail_group_host_ram_2:1;
        RBus_UInt32  usb_drf_fail_group_host_ram_1:1;
        RBus_UInt32  res1:29;
    };
}usb3_top_drf4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_host_ram_1_fail_0:1;
        RBus_UInt32  res1:31;
    };
}usb3_top_drf5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_host_ram_2_fail_0:1;
        RBus_UInt32  usb_drf_host_ram_2_fail_1:1;
        RBus_UInt32  res1:30;
    };
}usb3_top_drf6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_drf_wrap_fail_0:1;
        RBus_UInt32  usb_drf_wrap_fail_1:1;
        RBus_UInt32  usb_drf_wrap_fail_2:1;
        RBus_UInt32  usb_drf_wrap_fail_3:1;
        RBus_UInt32  res1:28;
    };
}usb3_top_drf7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_bist_wrap_rm0:4;
        RBus_UInt32  usb_bist_wrap_rme0:1;
        RBus_UInt32  usb_bist_wrap_ls0:1;
        RBus_UInt32  usb_bist_wrap_rm1:4;
        RBus_UInt32  usb_bist_wrap_rme1:1;
        RBus_UInt32  usb_bist_wrap_ls1:1;
        RBus_UInt32  res1:20;
    };
}usb3_top_bist_op0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_usb_host_ram_1_rm0:4;
        RBus_UInt32  usb_usb_host_ram_1_rme0:1;
        RBus_UInt32  usb_usb_host_ram_1_ls0:1;
        RBus_UInt32  res1:26;
    };
}usb3_top_bist_op1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_usb_host_ram_2_rm0:4;
        RBus_UInt32  usb_usb_host_ram_2_rme0:1;
        RBus_UInt32  usb_usb_host_ram_2_ls0:1;
        RBus_UInt32  usb_usb_host_ram_2_rm1:4;
        RBus_UInt32  usb_usb_host_ram_2_rme1:1;
        RBus_UInt32  usb_usb_host_ram_2_ls1:1;
        RBus_UInt32  res1:20;
    };
}usb3_top_bist_op2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_tc_mux_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_tc_ccdet_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb30_ltdb_sub_state:4;
        RBus_UInt32  usb30_ltdb_link_state:4;
        RBus_UInt32  u2_p0_portstate:5;
        RBus_UInt32  u2_p1_portstate:5;
        RBus_UInt32  res1:10;
        RBus_UInt32  u2_p0_suspend_n:1;
        RBus_UInt32  u2_p1_suspend_n:1;
        RBus_UInt32  res2:2;
    };
}usb3_top_ltssm_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:32;
    };
}usb3_top_usb_tmp_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  crc_cnt_en:1;
        RBus_UInt32  crc_cnt_rst:1;
        RBus_UInt32  crc_cnt_sel:3;
        RBus_UInt32  crc_err_cnt:16;
        RBus_UInt32  res1:11;
    };
}usb3_top_crc_cnt_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  package_cnt:16;
        RBus_UInt32  res1:16;
    };
}usb3_top_crc_cnt_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb3_indicator_clear:1;
        RBus_UInt32  usb3_ltssm_u1_indic:1;
        RBus_UInt32  usb3_ltssm_u2u3_indic:1;
        RBus_UInt32  usb3_ltssm_recov_rx_indic:1;
        RBus_UInt32  usb3_ltssm_recov_indic:1;
        RBus_UInt32  usb3_ltssm_poll_indic:1;
        RBus_UInt32  usb3_ltssm_hreset_indic:1;
        RBus_UInt32  usb3_ltssm_ssdis_indic:1;
        RBus_UInt32  usb3_ltssm_ssinact_indic:1;
        RBus_UInt32  usb3_ltssm_rdet_indic:1;
        RBus_UInt32  usb2_p0_suspend_indic:1;
        RBus_UInt32  usb2_p0_resume_indic:1;
        RBus_UInt32  usb2_p0_reset_indic:1;
        RBus_UInt32  usb2_p0_chrip_indic:1;
        RBus_UInt32  usb2_p0_discon_indic:1;
        RBus_UInt32  usb2_p1_suspend_indic:1;
        RBus_UInt32  usb2_p1_resume_indic:1;
        RBus_UInt32  usb2_p1_reset_indic:1;
        RBus_UInt32  usb2_p1_chrip_indic:1;
        RBus_UInt32  usb2_p1_discon_indic:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  indicator_en:1;
    };
}usb3_top_usb_state_indicate_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  usb_dbg_out0:16;
        RBus_UInt32  usb_dbg_out1:16;
    };
}usb3_top_usb3_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test_reg_5:32;
    };
}usb3_top_usb_tmp_5_RBUS;




#endif 


#endif 
