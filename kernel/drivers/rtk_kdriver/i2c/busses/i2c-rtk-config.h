#ifndef __I2C_RTK_CONFIG_H__
#define __I2C_RTK_CONFIG_H__

#include <rbus/iso_misc_off_reg.h>
#include <rbus/misc_reg.h>
#include <rbus/stb_reg.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/pll27x_reg_reg.h>
#include <rbus/pll_reg_reg.h>
#include <rbus/misc_i2c_reg.h>
#include <rbus/misc_i2c4_reg.h>
#include <rbus/iso_i2c_reg.h>
#include "i2c-rtk-priv.h"

#define RTK_ISO_MISC_OFF_SYSTEM     ISO_MISC_OFF_SYSTEM_reg

#define RTK_I2C_ISO_ISR            ISO_MISC_OFF_ISR_reg
#define RTK_I2C_ISO_I2C0_shift        (1)
#define RTK_I2C_ISO_I2C5_shift        (0)

#define RTK_I2C_SCPU_INT_EN               SYS_REG_INT_CTRL_SCPU_reg
#define RTK_I2C_ISO_MIS_OFF_INT_SCPU_EN_shift    SYS_REG_INT_CTRL_SCPU_standby_iso_misc_off_int_scpu_routing_en_shift

#define RTK_I2C_ISO_I2C0_CLKSEL_SHIFT STB_ST_CLKMUX_i2c0_off_clksel_shift
#define RTK_I2C_ISO_I2C5_CLKSEL_SHIFT STB_ST_CLKMUX_i2c5_off_clksel_shift

#define RTK_I2C_ISO_I2C_SYS_CLKDIV     STB_ST_CLKMUX_reg

#define RTK_I2C_I2C0_GPIO_MODE_CTRL            (ISO_I2C_I2C0_GPIO_MODE_CTRL_reg)
#define RTK_I2C_I2C0_GUARD_INTERVAL_CTRL       (ISO_I2C_I2C0_GUARD_INTERVAL_CTRL_reg)
#define RTK_I2C_I2C0_GUARD_INTERVAL_STATUS     (ISO_I2C_I2C0_GUARD_INTERVAL_STATUS_reg)
#define RTK_I2C_I2C0_SDA_OUTPUT_DELAY_CTRL     (ISO_I2C_I2C0_SDA_OUTPUT_DELAY_CTRL_reg)
#define RTK_I2C_I2C0_PH_CTRL                   (ISO_I2C_I2C0_PH_CR_reg)

#define I2C_GPIO_STATUS_GUARD_INT_shift       (0)
#define I2C_GPIO_STATUS_GPIO_SCL_shift        (1)
#define I2C_GPIO_STATUS_GPIO_SDA_shift        (2)

#define I2C_GPIO_CTRL_SCL_shift            (0)
#define I2C_GPIO_CTRL_SDA_shift            (1)
#define I2C_GPIO_CTRL_SEL_shift            (2)


#define IC0_ADDRESS_BASE                      (ISO_I2C_IC0_CON_reg)
#define RTK_I2C_ISO_IC0_CON                    IC0_ADDRESS_BASE
#define RTK_I2C_ISO_IC0_TAR                   (IC0_ADDRESS_BASE + 0x4)
#define RTK_I2C_ISO_IC0_SAR                   (IC0_ADDRESS_BASE + 0x8)
#define RTK_I2C_ISO_IC0_HS_MADDR              (IC0_ADDRESS_BASE + 0xC)
#define RTK_I2C_ISO_IC0_DATA_CMD              (IC0_ADDRESS_BASE + 0x10)
#define RTK_I2C_ISO_IC0_SS_SCL_HCNT           (IC0_ADDRESS_BASE + 0x14)
#define RTK_I2C_ISO_IC0_SS_SCL_LCNT           (IC0_ADDRESS_BASE + 0x18)
#define RTK_I2C_ISO_IC0_FS_SCL_HCNT           (IC0_ADDRESS_BASE + 0x1C)
#define RTK_I2C_ISO_IC0_FS_SCL_LCNT           (IC0_ADDRESS_BASE + 0x20)
#define RTK_I2C_ISO_IC0_INTR_STAT             (IC0_ADDRESS_BASE + 0x2C)
#define RTK_I2C_ISO_IC0_INTR_MASK             (IC0_ADDRESS_BASE + 0x30)
#define RTK_I2C_ISO_IC0_RAW_INTR_STAT         (IC0_ADDRESS_BASE + 0x34)
#define RTK_I2C_ISO_IC0_RX_TL                 (IC0_ADDRESS_BASE + 0x38)
#define RTK_I2C_ISO_IC0_TX_TL                 (IC0_ADDRESS_BASE + 0x3C)
#define RTK_I2C_ISO_IC0_CLR_INTR              (IC0_ADDRESS_BASE + 0x40)
#define RTK_I2C_ISO_IC0_CLR_RX_UNDER          (IC0_ADDRESS_BASE + 0x44)
#define RTK_I2C_ISO_IC0_CLR_RX_OVER           (IC0_ADDRESS_BASE + 0x48)
#define RTK_I2C_ISO_IC0_CLR_TX_OVER           (IC0_ADDRESS_BASE + 0x4C)
#define RTK_I2C_ISO_IC0_CLR_RD_REQ            (IC0_ADDRESS_BASE + 0x50)
#define RTK_I2C_ISO_IC0_CLR_TX_ABRT           (IC0_ADDRESS_BASE + 0x54)
#define RTK_I2C_ISO_IC0_CLR_RX_DONE           (IC0_ADDRESS_BASE + 0x58)
#define RTK_I2C_ISO_IC0_CLR_ACTIVITY          (IC0_ADDRESS_BASE + 0x5C)
#define RTK_I2C_ISO_IC0_CLR_STOP_DET          (IC0_ADDRESS_BASE + 0x60)
#define RTK_I2C_ISO_IC0_CLR_START_DET         (IC0_ADDRESS_BASE + 0x64)
#define RTK_I2C_ISO_IC0_CLR_GEN_CALL          (IC0_ADDRESS_BASE + 0x68)
#define RTK_I2C_ISO_IC0_ENABLE                (IC0_ADDRESS_BASE + 0x6C)
#define RTK_I2C_ISO_IC0_STATUS                (IC0_ADDRESS_BASE + 0x70)
#define RTK_I2C_ISO_IC0_TXFLR                 (IC0_ADDRESS_BASE + 0x74)
#define RTK_I2C_ISO_IC0_RXFLR                 (IC0_ADDRESS_BASE + 0x78)
#define RTK_I2C_ISO_IC0_SDA_HOLD              (IC0_ADDRESS_BASE + 0x7C)
#define RTK_I2C_ISO_IC0_TX_ABRT_SOURCE        (IC0_ADDRESS_BASE + 0x80)
#define RTK_I2C_ISO_IC0_SLV_DATA_NACK_ONLY    (IC0_ADDRESS_BASE + 0x84)
#define RTK_I2C_ISO_IC0_SDA_SETUP             (IC0_ADDRESS_BASE + 0x94)
#define RTK_I2C_ISO_IC0_ACK_GEN_CALL  	      (IC0_ADDRESS_BASE + 0x98)
#define RTK_I2C_ISO_IC0_ENABLE_STATUS         (IC0_ADDRESS_BASE + 0x9C)
#define RTK_I2C_ISO_IC0_COMP_PARAM_1          (IC0_ADDRESS_BASE + 0xF4)
#define RTK_I2C_ISO_IC0_COMP_VERSION          (IC0_ADDRESS_BASE + 0xF8)
#define RTK_I2C_ISO_IC0_COMP_TYPE             (IC0_ADDRESS_BASE + 0xFC)


#define RTK_I2C_MIS_ISR            MISC_isr_reg
/*//#define RTK_I2C_MIS_SCPU_INT_EN        INTERRUPT_MIS_SCPU_INT_EN_VADDR*/
#define RTK_I2C_MIS_ISR_I2C1_shift        (27)
#define RTK_I2C_MIS_ISR_I2C2_shift        (26)
#define RTK_I2C_MIS_ISR_I2C3_shift        (25)
#define RTK_I2C_MIS_ISR_I2C4_shift        (28)

#define RTK_I2C_MIS_SCPU_INT_EN        SYS_REG_INT_CTRL_SCPU_reg

#define PLL_REG_SYS_CLKDIV_i2c1_clksel_shift    SYS_REG_SYS_CLKDIV_i2c1_clksel_shift
#define PLL_REG_SYS_CLKDIV_i2c2_clksel_shift    SYS_REG_SYS_CLKDIV_i2c2_clksel_shift
#define PLL_REG_SYS_CLKDIV_i2c3_clksel_shift    SYS_REG_SYS_CLKDIV_i2c3_clksel_shift
#define PLL_REG_SYS_CLKDIV_i2c4_clksel_shift    SYS_REG_SYS_CLKDIV_i2c4_clksel_shift
#define PLL_REG_SYS_CLKDIV_reg    SYS_REG_SYS_CLKDIV_reg

#define RTK_I2C_MIS_I2C1_CLKSEL_SHIFT PLL_REG_SYS_CLKDIV_i2c1_clksel_shift
#define RTK_I2C_MIS_I2C2_CLKSEL_SHIFT PLL_REG_SYS_CLKDIV_i2c2_clksel_shift
#define RTK_I2C_MIS_I2C3_CLKSEL_SHIFT PLL_REG_SYS_CLKDIV_i2c3_clksel_shift
#define RTK_I2C_MIS_I2C4_CLKSEL_SHIFT PLL_REG_SYS_CLKDIV_i2c4_clksel_shift

#define RTK_I2C_MISC_I2C_SYS_CLKDIV    PLL_REG_SYS_CLKDIV_reg


#define RTK_I2C_I2C1_GPIO_MODE_CTRL           (MISC_I2C_I2C1_GPIO_MODE_CTRL_reg)
#define RTK_I2C_I2C1_GUARD_INTERVAL_CTRL      (MISC_I2C_I2C1_GUARD_INTERVAL_CTRL_reg)
#define RTK_I2C_I2C1_GUARD_INTERVAL_STATUS    (MISC_I2C_I2C1_GUARD_INTERVAL_STATUS_reg  )
#define RTK_I2C_I2C1_SDA_OUTPUT_DELAY_CTRL    (MISC_I2C_I2C1_SDA_OUTPUT_DELAY_CTRL_reg)
#define RTK_I2C_I2C1_PH_CTRL                  (MISC_I2C_I2C1_PH_CR_reg)

#define IC1_ADDRESS_BASE                       (MISC_I2C_IC1_CON_reg)
#define RTK_I2C_MISC_IC1_CON                   (IC1_ADDRESS_BASE)
#define RTK_I2C_MISC_IC1_TAR                   (IC1_ADDRESS_BASE + 0x4)
#define RTK_I2C_MISC_IC1_SAR                   (IC1_ADDRESS_BASE + 0x8)
#define RTK_I2C_MISC_IC1_HS_MADDR              (IC1_ADDRESS_BASE + 0xC)
#define RTK_I2C_MISC_IC1_DATA_CMD              (IC1_ADDRESS_BASE + 0x10)
#define RTK_I2C_MISC_IC1_SS_SCL_HCNT           (IC1_ADDRESS_BASE + 0x14)
#define RTK_I2C_MISC_IC1_SS_SCL_LCNT           (IC1_ADDRESS_BASE + 0x18)
#define RTK_I2C_MISC_IC1_FS_SCL_HCNT           (IC1_ADDRESS_BASE + 0x1C)
#define RTK_I2C_MISC_IC1_FS_SCL_LCNT           (IC1_ADDRESS_BASE + 0x20)
#define RTK_I2C_MISC_IC1_INTR_STAT             (IC1_ADDRESS_BASE + 0x2C)
#define RTK_I2C_MISC_IC1_INTR_MASK             (IC1_ADDRESS_BASE + 0x30)
#define RTK_I2C_MISC_IC1_RAW_INTR_STAT         (IC1_ADDRESS_BASE + 0x34)
#define RTK_I2C_MISC_IC1_RX_TL                 (IC1_ADDRESS_BASE + 0x38)
#define RTK_I2C_MISC_IC1_TX_TL                 (IC1_ADDRESS_BASE + 0x3C)
#define RTK_I2C_MISC_IC1_CLR_INTR              (IC1_ADDRESS_BASE + 0x40)
#define RTK_I2C_MISC_IC1_CLR_RX_UNDER          (IC1_ADDRESS_BASE + 0x44)
#define RTK_I2C_MISC_IC1_CLR_RX_OVER           (IC1_ADDRESS_BASE + 0x48)
#define RTK_I2C_MISC_IC1_CLR_TX_OVER           (IC1_ADDRESS_BASE + 0x4C)
#define RTK_I2C_MISC_IC1_CLR_RD_REQ            (IC1_ADDRESS_BASE + 0x50)
#define RTK_I2C_MISC_IC1_CLR_TX_ABRT           (IC1_ADDRESS_BASE + 0x54)
#define RTK_I2C_MISC_IC1_CLR_RX_DONE           (IC1_ADDRESS_BASE + 0x58)
#define RTK_I2C_MISC_IC1_CLR_ACTIVITY          (IC1_ADDRESS_BASE + 0x5C)
#define RTK_I2C_MISC_IC1_CLR_STOP_DET          (IC1_ADDRESS_BASE + 0x60)
#define RTK_I2C_MISC_IC1_CLR_START_DET         (IC1_ADDRESS_BASE + 0x64)
#define RTK_I2C_MISC_IC1_CLR_GEN_CALL          (IC1_ADDRESS_BASE + 0x68)
#define RTK_I2C_MISC_IC1_ENABLE                (IC1_ADDRESS_BASE + 0x6C)
#define RTK_I2C_MISC_IC1_STATUS                (IC1_ADDRESS_BASE + 0x70)
#define RTK_I2C_MISC_IC1_TXFLR                 (IC1_ADDRESS_BASE + 0x74)
#define RTK_I2C_MISC_IC1_RXFLR                 (IC1_ADDRESS_BASE + 0x78)
#define RTK_I2C_MISC_IC1_SDA_HOLD              (IC1_ADDRESS_BASE + 0x7C)
#define RTK_I2C_MISC_IC1_TX_ABRT_SOURCE        (IC1_ADDRESS_BASE + 0x80)
#define RTK_I2C_MISC_IC1_SLV_DATA_NACK_ONLY    (IC1_ADDRESS_BASE + 0x84)
#define RTK_I2C_MISC_IC1_SDA_SETUP             (IC1_ADDRESS_BASE + 0x94)
#define RTK_I2C_MISC_IC1_ACK_GEN_CALL          (IC1_ADDRESS_BASE + 0x98)
#define RTK_I2C_MISC_IC1_ENABLE_STATUS         (IC1_ADDRESS_BASE + 0x9C)
#define RTK_I2C_MISC_IC1_COMP_PARAM_1          (IC1_ADDRESS_BASE + 0xF4)
#define RTK_I2C_MISC_IC1_COMP_VERSION          (IC1_ADDRESS_BASE + 0xF8)
#define RTK_I2C_MISC_IC1_COMP_TYPE             (IC1_ADDRESS_BASE + 0xFC)


#define RTK_I2C_I2C2_GPIO_MODE_CTRL           (MISC_I2C_I2C2_GPIO_MODE_CTRL_reg)
#define RTK_I2C_I2C2_GUARD_INTERVAL_CTRL      (MISC_I2C_I2C2_GUARD_INTERVAL_CTRL_reg)
#define RTK_I2C_I2C2_GUARD_INTERVAL_STATUS    (MISC_I2C_I2C2_GUARD_INTERVAL_STATUS_reg)
#define RTK_I2C_I2C2_SDA_OUTPUT_DELAY_CTRL    (MISC_I2C_I2C2_SDA_OUTPUT_DELAY_CTRL_reg)
#define RTK_I2C_I2C2_PH_CTRL                  (MISC_I2C_I2C2_PH_CR_reg)

#define IC2_ADDRESS_BASE                       (MISC_I2C_IC2_CON_reg)
#define RTK_I2C_MISC_IC2_CON                   (IC2_ADDRESS_BASE)
#define RTK_I2C_MISC_IC2_TAR                   (IC2_ADDRESS_BASE + 0x4)
#define RTK_I2C_MISC_IC2_SAR                   (IC2_ADDRESS_BASE + 0x8)
#define RTK_I2C_MISC_IC2_HS_MADDR              (IC2_ADDRESS_BASE + 0xC)
#define RTK_I2C_MISC_IC2_DATA_CMD              (IC2_ADDRESS_BASE + 0x10)
#define RTK_I2C_MISC_IC2_SS_SCL_HCNT           (IC2_ADDRESS_BASE + 0x14)
#define RTK_I2C_MISC_IC2_SS_SCL_LCNT           (IC2_ADDRESS_BASE + 0x18)
#define RTK_I2C_MISC_IC2_FS_SCL_HCNT           (IC2_ADDRESS_BASE + 0x1C)
#define RTK_I2C_MISC_IC2_FS_SCL_LCNT           (IC2_ADDRESS_BASE + 0x20)
#define RTK_I2C_MISC_IC2_INTR_STAT             (IC2_ADDRESS_BASE + 0x2C)
#define RTK_I2C_MISC_IC2_INTR_MASK             (IC2_ADDRESS_BASE + 0x30)
#define RTK_I2C_MISC_IC2_RAW_INTR_STAT         (IC2_ADDRESS_BASE + 0x34)
#define RTK_I2C_MISC_IC2_RX_TL                 (IC2_ADDRESS_BASE + 0x38)
#define RTK_I2C_MISC_IC2_TX_TL                 (IC2_ADDRESS_BASE + 0x3C)
#define RTK_I2C_MISC_IC2_CLR_INTR              (IC2_ADDRESS_BASE + 0x40)
#define RTK_I2C_MISC_IC2_CLR_RX_UNDER          (IC2_ADDRESS_BASE + 0x44)
#define RTK_I2C_MISC_IC2_CLR_RX_OVER           (IC2_ADDRESS_BASE + 0x48)
#define RTK_I2C_MISC_IC2_CLR_TX_OVER           (IC2_ADDRESS_BASE + 0x4C)
#define RTK_I2C_MISC_IC2_CLR_RD_REQ            (IC2_ADDRESS_BASE + 0x50)
#define RTK_I2C_MISC_IC2_CLR_TX_ABRT           (IC2_ADDRESS_BASE + 0x54)
#define RTK_I2C_MISC_IC2_CLR_RX_DONE           (IC2_ADDRESS_BASE + 0x58)
#define RTK_I2C_MISC_IC2_CLR_ACTIVITY          (IC2_ADDRESS_BASE + 0x5C)
#define RTK_I2C_MISC_IC2_CLR_STOP_DET          (IC2_ADDRESS_BASE + 0x60)
#define RTK_I2C_MISC_IC2_CLR_START_DET         (IC2_ADDRESS_BASE + 0x64)
#define RTK_I2C_MISC_IC2_CLR_GEN_CALL          (IC2_ADDRESS_BASE + 0x68)
#define RTK_I2C_MISC_IC2_ENABLE                (IC2_ADDRESS_BASE + 0x6C)
#define RTK_I2C_MISC_IC2_STATUS                (IC2_ADDRESS_BASE + 0x70)
#define RTK_I2C_MISC_IC2_TXFLR                 (IC2_ADDRESS_BASE + 0x74)
#define RTK_I2C_MISC_IC2_RXFLR                 (IC2_ADDRESS_BASE + 0x78)
#define RTK_I2C_MISC_IC2_SDA_HOLD              (IC2_ADDRESS_BASE + 0x7C)
#define RTK_I2C_MISC_IC2_TX_ABRT_SOURCE        (IC2_ADDRESS_BASE + 0x80)
#define RTK_I2C_MISC_IC2_SLV_DATA_NACK_ONLY    (IC2_ADDRESS_BASE + 0x84)
#define RTK_I2C_MISC_IC2_SDA_SETUP             (IC2_ADDRESS_BASE + 0x94)
#define RTK_I2C_MISC_IC2_ACK_GEN_CALL          (IC2_ADDRESS_BASE + 0x98)
#define RTK_I2C_MISC_IC2_ENABLE_STATUS         (IC2_ADDRESS_BASE + 0x9C)
#define RTK_I2C_MISC_IC2_COMP_PARAM_1          (IC2_ADDRESS_BASE + 0xF4)
#define RTK_I2C_MISC_IC2_COMP_VERSION          (IC2_ADDRESS_BASE + 0xF8)
#define RTK_I2C_MISC_IC2_COMP_TYPE             (IC2_ADDRESS_BASE + 0xFC)


#define RTK_I2C_I2C3_GPIO_MODE_CTRL           (MISC_I2C_I2C3_GPIO_MODE_CTRL_reg)
#define RTK_I2C_I2C3_GUARD_INTERVAL_CTRL      (MISC_I2C_I2C3_GUARD_INTERVAL_CTRL_reg)
#define RTK_I2C_I2C3_GUARD_INTERVAL_STATUS    (MISC_I2C_I2C3_GUARD_INTERVAL_STATUS_reg)
#define RTK_I2C_I2C3_SDA_OUTPUT_DELAY_CTRL    (MISC_I2C_I2C3_SDA_OUTPUT_DELAY_CTRL_reg)
#define RTK_I2C_I2C3_PH_CTRL                  (MISC_I2C_I2C3_PH_CR_reg)

#define IC3_ADDRESS_BASE                       (MISC_I2C_IC3_CON_reg)
#define RTK_I2C_MISC_IC3_CON                   (IC3_ADDRESS_BASE)
#define RTK_I2C_MISC_IC3_TAR                   (IC3_ADDRESS_BASE + 0x4)
#define RTK_I2C_MISC_IC3_SAR                   (IC3_ADDRESS_BASE + 0x8)
#define RTK_I2C_MISC_IC3_HS_MADDR              (IC3_ADDRESS_BASE + 0xC)
#define RTK_I2C_MISC_IC3_DATA_CMD              (IC3_ADDRESS_BASE + 0x10)
#define RTK_I2C_MISC_IC3_SS_SCL_HCNT           (IC3_ADDRESS_BASE + 0x14)
#define RTK_I2C_MISC_IC3_SS_SCL_LCNT           (IC3_ADDRESS_BASE + 0x18)
#define RTK_I2C_MISC_IC3_FS_SCL_HCNT           (IC3_ADDRESS_BASE + 0x1C)
#define RTK_I2C_MISC_IC3_FS_SCL_LCNT           (IC3_ADDRESS_BASE + 0x20)
#define RTK_I2C_MISC_IC3_INTR_STAT             (IC3_ADDRESS_BASE + 0x2C)
#define RTK_I2C_MISC_IC3_INTR_MASK             (IC3_ADDRESS_BASE + 0x30)
#define RTK_I2C_MISC_IC3_RAW_INTR_STAT         (IC3_ADDRESS_BASE + 0x34)
#define RTK_I2C_MISC_IC3_RX_TL                 (IC3_ADDRESS_BASE + 0x38)
#define RTK_I2C_MISC_IC3_TX_TL                 (IC3_ADDRESS_BASE + 0x3C)
#define RTK_I2C_MISC_IC3_CLR_INTR              (IC3_ADDRESS_BASE + 0x40)
#define RTK_I2C_MISC_IC3_CLR_RX_UNDER          (IC3_ADDRESS_BASE + 0x44)
#define RTK_I2C_MISC_IC3_CLR_RX_OVER           (IC3_ADDRESS_BASE + 0x48)
#define RTK_I2C_MISC_IC3_CLR_TX_OVER           (IC3_ADDRESS_BASE + 0x4C)
#define RTK_I2C_MISC_IC3_CLR_RD_REQ            (IC3_ADDRESS_BASE + 0x50)
#define RTK_I2C_MISC_IC3_CLR_TX_ABRT           (IC3_ADDRESS_BASE + 0x54)
#define RTK_I2C_MISC_IC3_CLR_RX_DONE           (IC3_ADDRESS_BASE + 0x58)
#define RTK_I2C_MISC_IC3_CLR_ACTIVITY          (IC3_ADDRESS_BASE + 0x5C)
#define RTK_I2C_MISC_IC3_CLR_STOP_DET          (IC3_ADDRESS_BASE + 0x60)
#define RTK_I2C_MISC_IC3_CLR_START_DET         (IC3_ADDRESS_BASE + 0x64)
#define RTK_I2C_MISC_IC3_CLR_GEN_CALL          (IC3_ADDRESS_BASE + 0x68)
#define RTK_I2C_MISC_IC3_ENABLE                (IC3_ADDRESS_BASE + 0x6C)
#define RTK_I2C_MISC_IC3_STATUS                (IC3_ADDRESS_BASE + 0x70)
#define RTK_I2C_MISC_IC3_TXFLR                 (IC3_ADDRESS_BASE + 0x74)
#define RTK_I2C_MISC_IC3_RXFLR                 (IC3_ADDRESS_BASE + 0x78)
#define RTK_I2C_MISC_IC3_SDA_HOLD              (IC3_ADDRESS_BASE + 0x7C)
#define RTK_I2C_MISC_IC3_TX_ABRT_SOURCE        (IC3_ADDRESS_BASE + 0x80)
#define RTK_I2C_MISC_IC3_SLV_DATA_NACK_ONLY    (IC3_ADDRESS_BASE + 0x84)
#define RTK_I2C_MISC_IC3_SDA_SETUP             (IC3_ADDRESS_BASE + 0x94)
#define RTK_I2C_MISC_IC3_ACK_GEN_CALL          (IC3_ADDRESS_BASE + 0x98)
#define RTK_I2C_MISC_IC3_ENABLE_STATUS         (IC3_ADDRESS_BASE + 0x9C)
#define RTK_I2C_MISC_IC3_COMP_PARAM_1          (IC3_ADDRESS_BASE + 0xF4)
#define RTK_I2C_MISC_IC3_COMP_VERSION          (IC3_ADDRESS_BASE + 0xF8)
#define RTK_I2C_MISC_IC3_COMP_TYPE             (IC3_ADDRESS_BASE + 0xFC)


#define RTK_I2C_I2C4_GPIO_MODE_CTRL           (MISC_I2C4_I2C4_GPIO_MODE_CTRL_reg)
#define RTK_I2C_I2C4_GUARD_INTERVAL_CTRL      (MISC_I2C4_I2C4_GUARD_INTERVAL_CTRL_reg)
#define RTK_I2C_I2C4_GUARD_INTERVAL_STATUS    (MISC_I2C4_I2C4_GUARD_INTERVAL_STATUS_reg)
#define RTK_I2C_I2C4_SDA_OUTPUT_DELAY_CTRL    (MISC_I2C4_I2C4_SDA_OUTPUT_DELAY_CTRL_reg)
#define RTK_I2C_I2C4_PH_CTRL                  (MISC_I2C4_I2C4_PH_CR_reg)

#define IC4_ADDRESS_BASE                       (MISC_I2C4_IC4_CON_reg)
#define RTK_I2C_MISC_IC4_CON                   (IC4_ADDRESS_BASE)
#define RTK_I2C_MISC_IC4_TAR                   (IC4_ADDRESS_BASE + 0x4)
#define RTK_I2C_MISC_IC4_SAR                   (IC4_ADDRESS_BASE + 0x8)
#define RTK_I2C_MISC_IC4_HS_MADDR              (IC4_ADDRESS_BASE + 0xC)
#define RTK_I2C_MISC_IC4_DATA_CMD              (IC4_ADDRESS_BASE + 0x10)
#define RTK_I2C_MISC_IC4_SS_SCL_HCNT           (IC4_ADDRESS_BASE + 0x14)
#define RTK_I2C_MISC_IC4_SS_SCL_LCNT           (IC4_ADDRESS_BASE + 0x18)
#define RTK_I2C_MISC_IC4_FS_SCL_HCNT           (IC4_ADDRESS_BASE + 0x1C)
#define RTK_I2C_MISC_IC4_FS_SCL_LCNT           (IC4_ADDRESS_BASE + 0x20)
#define RTK_I2C_MISC_IC4_INTR_STAT             (IC4_ADDRESS_BASE + 0x2C)
#define RTK_I2C_MISC_IC4_INTR_MASK             (IC4_ADDRESS_BASE + 0x30)
#define RTK_I2C_MISC_IC4_RAW_INTR_STAT         (IC4_ADDRESS_BASE + 0x34)
#define RTK_I2C_MISC_IC4_RX_TL                 (IC4_ADDRESS_BASE + 0x38)
#define RTK_I2C_MISC_IC4_TX_TL                 (IC4_ADDRESS_BASE + 0x3C)
#define RTK_I2C_MISC_IC4_CLR_INTR              (IC4_ADDRESS_BASE + 0x40)
#define RTK_I2C_MISC_IC4_CLR_RX_UNDER          (IC4_ADDRESS_BASE + 0x44)
#define RTK_I2C_MISC_IC4_CLR_RX_OVER           (IC4_ADDRESS_BASE + 0x48)
#define RTK_I2C_MISC_IC4_CLR_TX_OVER           (IC4_ADDRESS_BASE + 0x4C)
#define RTK_I2C_MISC_IC4_CLR_RD_REQ            (IC4_ADDRESS_BASE + 0x50)
#define RTK_I2C_MISC_IC4_CLR_TX_ABRT           (IC4_ADDRESS_BASE + 0x54)
#define RTK_I2C_MISC_IC4_CLR_RX_DONE           (IC4_ADDRESS_BASE + 0x58)
#define RTK_I2C_MISC_IC4_CLR_ACTIVITY          (IC4_ADDRESS_BASE + 0x5C)
#define RTK_I2C_MISC_IC4_CLR_STOP_DET          (IC4_ADDRESS_BASE + 0x60)
#define RTK_I2C_MISC_IC4_CLR_START_DET         (IC4_ADDRESS_BASE + 0x64)
#define RTK_I2C_MISC_IC4_CLR_GEN_CALL          (IC4_ADDRESS_BASE + 0x68)
#define RTK_I2C_MISC_IC4_ENABLE                (IC4_ADDRESS_BASE + 0x6C)
#define RTK_I2C_MISC_IC4_STATUS                (IC4_ADDRESS_BASE + 0x70)
#define RTK_I2C_MISC_IC4_TXFLR                 (IC4_ADDRESS_BASE + 0x74)
#define RTK_I2C_MISC_IC4_RXFLR                 (IC4_ADDRESS_BASE + 0x78)
#define RTK_I2C_MISC_IC4_SDA_HOLD              (IC4_ADDRESS_BASE + 0x7C)
#define RTK_I2C_MISC_IC4_TX_ABRT_SOURCE        (IC4_ADDRESS_BASE + 0x80)
#define RTK_I2C_MISC_IC4_SLV_DATA_NACK_ONLY    (IC4_ADDRESS_BASE + 0x84)
#define RTK_I2C_MISC_IC4_SDA_SETUP             (IC4_ADDRESS_BASE + 0x94)
#define RTK_I2C_MISC_IC4_ACK_GEN_CALL          (IC4_ADDRESS_BASE + 0x98)
#define RTK_I2C_MISC_IC4_ENABLE_STATUS         (IC4_ADDRESS_BASE + 0x9C)
#define RTK_I2C_MISC_IC4_COMP_PARAM_1          (IC4_ADDRESS_BASE + 0xF4)
#define RTK_I2C_MISC_IC4_COMP_VERSION          (IC4_ADDRESS_BASE + 0xF8)
#define RTK_I2C_MISC_IC4_COMP_TYPE             (IC4_ADDRESS_BASE + 0xFC)


#define RTK_I2C_I2C5_GPIO_MODE_CTRL            (ISO_I2C_I2C5_GPIO_MODE_CTRL_reg)
#define RTK_I2C_I2C5_GUARD_INTERVAL_CTRL       (ISO_I2C_I2C5_GUARD_INTERVAL_CTRL_reg)
#define RTK_I2C_I2C5_GUARD_INTERVAL_STATUS     (ISO_I2C_I2C5_GUARD_INTERVAL_STATUS_reg)
#define RTK_I2C_I2C5_SDA_OUTPUT_DELAY_CTRL     (ISO_I2C_I2C5_SDA_OUTPUT_DELAY_CTRL_reg)
#define RTK_I2C_I2C5_PH_CTRL                   (ISO_I2C_I2C5_PH_CR_reg)

#define IC5_ADDRESS_BASE                      (ISO_I2C_IC5_CON_reg)
#define RTK_I2C_ISO_IC5_CON                    IC5_ADDRESS_BASE
#define RTK_I2C_ISO_IC5_TAR                   (IC5_ADDRESS_BASE + 0x4)
#define RTK_I2C_ISO_IC5_SAR                   (IC5_ADDRESS_BASE + 0x8)
#define RTK_I2C_ISO_IC5_HS_MADDR              (IC5_ADDRESS_BASE + 0xC)
#define RTK_I2C_ISO_IC5_DATA_CMD              (IC5_ADDRESS_BASE + 0x10)
#define RTK_I2C_ISO_IC5_SS_SCL_HCNT           (IC5_ADDRESS_BASE + 0x14)
#define RTK_I2C_ISO_IC5_SS_SCL_LCNT           (IC5_ADDRESS_BASE + 0x18)
#define RTK_I2C_ISO_IC5_FS_SCL_HCNT           (IC5_ADDRESS_BASE + 0x1C)
#define RTK_I2C_ISO_IC5_FS_SCL_LCNT           (IC5_ADDRESS_BASE + 0x20)
#define RTK_I2C_ISO_IC5_INTR_STAT             (IC5_ADDRESS_BASE + 0x2C)
#define RTK_I2C_ISO_IC5_INTR_MASK             (IC5_ADDRESS_BASE + 0x30)
#define RTK_I2C_ISO_IC5_RAW_INTR_STAT         (IC5_ADDRESS_BASE + 0x34)
#define RTK_I2C_ISO_IC5_RX_TL                 (IC5_ADDRESS_BASE + 0x38)
#define RTK_I2C_ISO_IC5_TX_TL                 (IC5_ADDRESS_BASE + 0x3C)
#define RTK_I2C_ISO_IC5_CLR_INTR              (IC5_ADDRESS_BASE + 0x40)
#define RTK_I2C_ISO_IC5_CLR_RX_UNDER          (IC5_ADDRESS_BASE + 0x44)
#define RTK_I2C_ISO_IC5_CLR_RX_OVER           (IC5_ADDRESS_BASE + 0x48)
#define RTK_I2C_ISO_IC5_CLR_TX_OVER           (IC5_ADDRESS_BASE + 0x4C)
#define RTK_I2C_ISO_IC5_CLR_RD_REQ            (IC5_ADDRESS_BASE + 0x50)
#define RTK_I2C_ISO_IC5_CLR_TX_ABRT           (IC5_ADDRESS_BASE + 0x54)
#define RTK_I2C_ISO_IC5_CLR_RX_DONE           (IC5_ADDRESS_BASE + 0x58)
#define RTK_I2C_ISO_IC5_CLR_ACTIVITY          (IC5_ADDRESS_BASE + 0x5C)
#define RTK_I2C_ISO_IC5_CLR_STOP_DET          (IC5_ADDRESS_BASE + 0x60)
#define RTK_I2C_ISO_IC5_CLR_START_DET         (IC5_ADDRESS_BASE + 0x64)
#define RTK_I2C_ISO_IC5_CLR_GEN_CALL          (IC5_ADDRESS_BASE + 0x68)
#define RTK_I2C_ISO_IC5_ENABLE                (IC5_ADDRESS_BASE + 0x6C)
#define RTK_I2C_ISO_IC5_STATUS                (IC5_ADDRESS_BASE + 0x70)
#define RTK_I2C_ISO_IC5_TXFLR                 (IC5_ADDRESS_BASE + 0x74)
#define RTK_I2C_ISO_IC5_RXFLR                 (IC5_ADDRESS_BASE + 0x78)
#define RTK_I2C_ISO_IC5_SDA_HOLD              (IC5_ADDRESS_BASE + 0x7C)
#define RTK_I2C_ISO_IC5_TX_ABRT_SOURCE        (IC5_ADDRESS_BASE + 0x80)
#define RTK_I2C_ISO_IC5_SLV_DATA_NACK_ONLY    (IC5_ADDRESS_BASE + 0x84)
#define RTK_I2C_ISO_IC5_SDA_SETUP             (IC5_ADDRESS_BASE + 0x94)
#define RTK_I2C_ISO_IC5_ACK_GEN_CALL          (IC5_ADDRESS_BASE + 0x98)
#define RTK_I2C_ISO_IC5_ENABLE_STATUS         (IC5_ADDRESS_BASE + 0x9C)
#define RTK_I2C_ISO_IC5_COMP_PARAM_1          (IC5_ADDRESS_BASE + 0xF4)
#define RTK_I2C_ISO_IC5_COMP_VERSION          (IC5_ADDRESS_BASE + 0xF8)
#define RTK_I2C_ISO_IC5_COMP_TYPE             (IC5_ADDRESS_BASE + 0xFC)



#define IC_SLAVE_DISABLE         (1 << 6)
#define IC_RESTART_EN            (1 << 5)
#define IC_10BITADDR_MASTER      (1 << 4)
#define IC_10BITADDR_SLAVE       (1 << 3)
#define IC_SPEED_MASK            (0x3 << 1)
#define SPEED_SS                 (0x1 << 1)
#define SPEED_FS                 (0x2 << 1)
#define SPEED_HS                 (0x3 << 1)
#define IC_MASTER_MODE           (1 << 0)

#define PH_CR_EN                 (1 << 24)
#define PH_CR_SDA_VTH(x)         (((x) << 20)) & 0xF)
#define PH_CR_SCL_VTH(x)         (((x) << 16)) & 0xF)
#define PH_CR_SDA_VALUE          (1 << 8)
#define PH_CR_SCL_VALUE          1

#define READ_CMD                 (1 << 8)


#define GEN_CALL_BIT             (1 << 11)
#define START_DET_BIT            (1 << 10)
#define STOP_DET_BIT             (1 << 9)
#define ACTIVITY_BIT             (1 << 8)
#define RX_DONE_BIT              (1 << 7)
#define TX_ABRT_BIT              (1 << 6)
#define RD_REQ_BIT               (1 << 5)
#define TX_EMPTY_BIT             (1 << 4)
#define TX_OVER_BIT              (1 << 3)
#define RX_FULL_BIT              (1 << 2)
#define RX_OVER_BIT              (1 << 1)
#define RX_UNDER_BIT             (1 << 0)
#define GD_INTERVAL_ST_BIT       (1 << 0)
#define GD_INTERVAL_SEL_BIT      (1 << 5)
#define GD_INTERVAL_SEL(x)       ((x & 0x3) << 5)
#define GD_INTERVAL_INT_EN_BIT   (1 << 4)
#define GD_INTERVAL_1000US       (0x0)
#define GD_INTERVAL_4000US       (0x6 << 1)
#define GD_INTERVAL_3000US       (0x5 << 1)
#define GD_INTERVAL_2000US       (0x4 << 1)
#define GD_INTERVAL_400US        (0x3 << 1)
#define GD_INTERVAL_600US        (0x2 << 1)
#define GD_INTERVAL_800US        (0x1 << 1)
#define GD_INTERVAL_EN_BIT       (1 << 0)
#define GD_INTERVAL_EEPROM \
    (GD_INTERVAL_INT_EN_BIT | GD_INTERVAL_2000US | GD_INTERVAL_EN_BIT)


#define ST_RFF_BIT            (1 << 4)
#define ST_RFNE_BIT           (1 << 3)
#define ST_TFE_BIT            (1 << 2)
#define ST_TFNF_BIT           (1 << 1)
#define ST_ACTIVITY_BIT       (1 << 0)


#define I2C_SDA_DEL_MASK        (0xFF)
#define I2C_SDA_DEL_EN          (0x01 << 15)
#define I2C_SDA_DEL_SEL(x) \
    ((x & (I2C_SDA_DEL_MASK|I2C_SDA_DEL_EN)))



static const rtk_i2c_reg_map RTK_I2C_i2c0_reg =
{
    .IC_ISR_EN             = RTK_I2C_SCPU_INT_EN,
    .IC_ISR_EN_MASK        = (0x1 << RTK_I2C_ISO_I2C0_shift),
    .IC_ISR                = RTK_I2C_ISO_ISR,
    .IC_INT                = (0x1 << RTK_I2C_ISO_I2C0_shift),
    .IC_CLKSEL             = RTK_I2C_ISO_I2C_SYS_CLKDIV,
    .IC_CLKSEL_MASK        = (0x1 << RTK_I2C_ISO_I2C0_CLKSEL_SHIFT),
    .IC_INTERVAL_MODE_CTRL = RTK_I2C_I2C0_GUARD_INTERVAL_CTRL,
    .IC_GUARD_STATUS       = RTK_I2C_I2C0_GUARD_INTERVAL_STATUS,
    .IC_GPIO_MODE_CTRL     = RTK_I2C_I2C0_GPIO_MODE_CTRL,
    .IC_PH_CR              = RTK_I2C_I2C0_PH_CTRL,
    .IC_CON                = RTK_I2C_ISO_IC0_CON,
    .IC_TAR                = RTK_I2C_ISO_IC0_TAR,
    .IC_SAR                = RTK_I2C_ISO_IC0_SAR,
    .IC_HS_MADDR           = RTK_I2C_ISO_IC0_HS_MADDR,
    .IC_DATA_CMD           = RTK_I2C_ISO_IC0_DATA_CMD,
    .IC_SS_SCL_HCNT        = RTK_I2C_ISO_IC0_SS_SCL_HCNT,
    .IC_SS_SCL_LCNT        = RTK_I2C_ISO_IC0_SS_SCL_LCNT,
    .IC_FS_SCL_HCNT        = RTK_I2C_ISO_IC0_FS_SCL_HCNT,
    .IC_FS_SCL_LCNT        = RTK_I2C_ISO_IC0_FS_SCL_LCNT,
    .IC_INTR_STAT          = RTK_I2C_ISO_IC0_INTR_STAT,
    .IC_INTR_MASK          = RTK_I2C_ISO_IC0_INTR_MASK,
    .IC_RAW_INTR_STAT      = RTK_I2C_ISO_IC0_RAW_INTR_STAT,
    .IC_RX_TL              = RTK_I2C_ISO_IC0_RX_TL,
    .IC_TX_TL              = RTK_I2C_ISO_IC0_TX_TL,
    .IC_CLR_INTR           = RTK_I2C_ISO_IC0_CLR_INTR,
    .IC_CLR_RX_UNDER       = RTK_I2C_ISO_IC0_CLR_RX_UNDER,
    .IC_CLR_RX_OVER        = RTK_I2C_ISO_IC0_CLR_RX_OVER,
    .IC_CLR_TX_OVER        = RTK_I2C_ISO_IC0_CLR_TX_OVER,
    .IC_CLR_RD_REQ         = RTK_I2C_ISO_IC0_CLR_RD_REQ,
    .IC_CLR_TX_ABRT        = RTK_I2C_ISO_IC0_CLR_TX_ABRT,
    .IC_CLR_RX_DONE        = RTK_I2C_ISO_IC0_CLR_RX_DONE,
    .IC_CLR_ACTIVITY       = RTK_I2C_ISO_IC0_CLR_ACTIVITY,
    .IC_CLR_STOP_DET       = RTK_I2C_ISO_IC0_CLR_STOP_DET,
    .IC_CLR_START_DET      = RTK_I2C_ISO_IC0_CLR_START_DET,
    .IC_CLR_GEN_CALL       = RTK_I2C_ISO_IC0_CLR_GEN_CALL,
    .IC_ENABLE             = RTK_I2C_ISO_IC0_ENABLE,
    .IC_STATUS             = RTK_I2C_ISO_IC0_STATUS,
    .IC_TXFLR              = RTK_I2C_ISO_IC0_TXFLR,
    .IC_RXFLR              = RTK_I2C_ISO_IC0_RXFLR,
    .IC_SDA_HOLD           = RTK_I2C_ISO_IC0_SDA_HOLD,
    .IC_TX_ABRT_SOURCE     = RTK_I2C_ISO_IC0_TX_ABRT_SOURCE,
    .IC_SLV_DATA_NACK      = RTK_I2C_ISO_IC0_SLV_DATA_NACK_ONLY,
    .IC_SDA_SETUP          = RTK_I2C_ISO_IC0_SDA_SETUP,
    .IC_ACK_GEN_CALL       = RTK_I2C_ISO_IC0_ACK_GEN_CALL,
    .IC_ENABLE_STATUS      = RTK_I2C_ISO_IC0_ENABLE_STATUS,
    .IC_COMP_PARAM_1       = RTK_I2C_ISO_IC0_COMP_PARAM_1,
    .IC_COMP_VERSION       = RTK_I2C_ISO_IC0_COMP_VERSION,
    .IC_COMP_TYPE          = RTK_I2C_ISO_IC0_COMP_TYPE,
    .IC_SDA_DEL            = RTK_I2C_I2C0_SDA_OUTPUT_DELAY_CTRL,
};


static const rtk_i2c_port RTK_I2C_i2c0_port[] =
{
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(ISO_GPIO, 9),
		.g2c_sda           = rtk_gpio_id(ISO_GPIO, 8),
		.input_mux[0]      = {0xB8060248, (0x3<<20), (0x0<<20)},//SCL
		.input_mux[1]      = {0xB8060248, (0x3<<16), (0x0<<16)},//SDA
		.pin_mux[0]        = {0xb8060210, (0xF<<20), (0xB<<20), (0xF<<20)},
		.pin_mux[1]        = {0xb8060210, (0xF<<28), (0xB<<28), (0xF<<28)},
	},
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(ISO_GPIO, 51),
		.g2c_sda           = rtk_gpio_id(ISO_GPIO, 52),
		.input_mux[0]      = {0xB8060248, (0x3<<20), (0x1<<20)},
		.input_mux[1]      = {0xB8060248, (0x3<<16), (0x1<<16)},
		.pin_mux[0]        = {0x18060230, (0xF<<28), (0xB<<28), (0xF<<28)},
		.pin_mux[1]        = {0x18060230, (0xF<<20), (0xB<<20), (0xF<<20)},
	},
};

static rtk_i2c_init_reg RTK_I2C_i2c0_init_reg[] =
{
    {RTK_I2C_I2C0_SDA_OUTPUT_DELAY_CTRL, 0x000080FF, 0x00000007},
    {RTK_I2C_ISO_IC0_SDA_SETUP         , 0x000000FF, 0x00000064},
    {SYS_REG_INT_CTRL_SCPU_reg, (~0), (0x1 << RTK_I2C_ISO_MIS_OFF_INT_SCPU_EN_shift) | (1 << SYS_REG_INT_CTRL_SCPU_write_data_shift)},
    {ISO_MISC_OFF_SYSTEM_reg, ISO_MISC_OFF_SYSTEM_i2c0_scpu_int_en_mask, ISO_MISC_OFF_SYSTEM_i2c0_scpu_int_en(1)},
};


static const rtk_i2c_reg_map RTK_I2C_i2c1_reg =
{
    .IC_ISR_EN             = RTK_I2C_MIS_SCPU_INT_EN,
    .IC_ISR_EN_MASK        = (0x1 << RTK_I2C_MIS_ISR_I2C1_shift),
    .IC_ISR                = RTK_I2C_MIS_ISR,
    .IC_INT                = (0x1 << RTK_I2C_MIS_ISR_I2C1_shift),
    .IC_INTERVAL_MODE_CTRL = RTK_I2C_I2C1_GUARD_INTERVAL_CTRL,
    .IC_CLKSEL             = RTK_I2C_MISC_I2C_SYS_CLKDIV,
    .IC_CLKSEL_MASK        = (0x1 << RTK_I2C_MIS_I2C1_CLKSEL_SHIFT),
    .IC_GUARD_STATUS       = RTK_I2C_I2C1_GUARD_INTERVAL_STATUS,
    .IC_GPIO_MODE_CTRL     = RTK_I2C_I2C1_GPIO_MODE_CTRL,
    .IC_PH_CR              = RTK_I2C_I2C1_PH_CTRL,
    .IC_CON                = RTK_I2C_MISC_IC1_CON,
    .IC_TAR                = RTK_I2C_MISC_IC1_TAR,
    .IC_SAR                = RTK_I2C_MISC_IC1_SAR,
    .IC_HS_MADDR           = RTK_I2C_MISC_IC1_HS_MADDR,
    .IC_DATA_CMD           = RTK_I2C_MISC_IC1_DATA_CMD,
    .IC_SS_SCL_HCNT        = RTK_I2C_MISC_IC1_SS_SCL_HCNT,
    .IC_SS_SCL_LCNT        = RTK_I2C_MISC_IC1_SS_SCL_LCNT,
    .IC_FS_SCL_HCNT        = RTK_I2C_MISC_IC1_FS_SCL_HCNT,
    .IC_FS_SCL_LCNT        = RTK_I2C_MISC_IC1_FS_SCL_LCNT,
    .IC_INTR_STAT          = RTK_I2C_MISC_IC1_INTR_STAT,
    .IC_INTR_MASK          = RTK_I2C_MISC_IC1_INTR_MASK,
    .IC_RAW_INTR_STAT      = RTK_I2C_MISC_IC1_RAW_INTR_STAT,
    .IC_RX_TL              = RTK_I2C_MISC_IC1_RX_TL,
    .IC_TX_TL              = RTK_I2C_MISC_IC1_TX_TL,
    .IC_CLR_INTR           = RTK_I2C_MISC_IC1_CLR_INTR,
    .IC_CLR_RX_UNDER       = RTK_I2C_MISC_IC1_CLR_RX_UNDER,
    .IC_CLR_RX_OVER        = RTK_I2C_MISC_IC1_CLR_RX_OVER,
    .IC_CLR_TX_OVER        = RTK_I2C_MISC_IC1_CLR_TX_OVER,
    .IC_CLR_RD_REQ         = RTK_I2C_MISC_IC1_CLR_RD_REQ,
    .IC_CLR_TX_ABRT        = RTK_I2C_MISC_IC1_CLR_TX_ABRT,
    .IC_CLR_RX_DONE        = RTK_I2C_MISC_IC1_CLR_RX_DONE,
    .IC_CLR_ACTIVITY       = RTK_I2C_MISC_IC1_CLR_ACTIVITY,
    .IC_CLR_STOP_DET       = RTK_I2C_MISC_IC1_CLR_STOP_DET,
    .IC_CLR_START_DET      = RTK_I2C_MISC_IC1_CLR_START_DET,
    .IC_CLR_GEN_CALL       = RTK_I2C_MISC_IC1_CLR_GEN_CALL,
    .IC_ENABLE             = RTK_I2C_MISC_IC1_ENABLE,
    .IC_STATUS             = RTK_I2C_MISC_IC1_STATUS,
    .IC_TXFLR              = RTK_I2C_MISC_IC1_TXFLR,
    .IC_RXFLR              = RTK_I2C_MISC_IC1_RXFLR,
    .IC_SDA_HOLD           = RTK_I2C_MISC_IC1_SDA_HOLD,
    .IC_TX_ABRT_SOURCE     = RTK_I2C_MISC_IC1_TX_ABRT_SOURCE,
    .IC_SLV_DATA_NACK      = RTK_I2C_MISC_IC1_SLV_DATA_NACK_ONLY,
    .IC_SDA_SETUP          = RTK_I2C_MISC_IC1_SDA_SETUP,
    .IC_ACK_GEN_CALL       = RTK_I2C_MISC_IC1_ACK_GEN_CALL,
    .IC_ENABLE_STATUS      = RTK_I2C_MISC_IC1_ENABLE_STATUS,
    .IC_COMP_PARAM_1       = RTK_I2C_MISC_IC1_COMP_PARAM_1,
    .IC_COMP_VERSION       = RTK_I2C_MISC_IC1_COMP_VERSION,
    .IC_COMP_TYPE          = RTK_I2C_MISC_IC1_COMP_TYPE,
    .IC_SDA_DEL            = RTK_I2C_I2C1_SDA_OUTPUT_DELAY_CTRL,

};


static const rtk_i2c_port RTK_I2C_i2c1_port[] =
{
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(MIS_GPIO, 60),
		.g2c_sda           = rtk_gpio_id(MIS_GPIO, 59),
		.input_mux[0]      = {0x0, (0), (0)},//table not match register
		.input_mux[1]      = {0x0, (0), (0)},
		.pin_mux[0]        = {0xb8000840,(0xF<<4),(0xB<<4), (0xF<<4)},
		.pin_mux[1]        = {0xb8000840,(0xF<<12),(0xB<<12), (0xF<<12)},
	},
};

static rtk_i2c_init_reg RTK_I2C_i2c1_init_reg[] =
{
    {RTK_I2C_I2C1_SDA_OUTPUT_DELAY_CTRL, 0x000080FF, 0x00000007},
    {RTK_I2C_MISC_IC1_SDA_SETUP        , 0x000000FF, 0x00000064},
    {MISC_isr_switch_reg, MISC_isr_switch_i2c1_int_sel_mask, MISC_isr_switch_i2c1_int_sel(0)},  //select scpu int
};


static const rtk_i2c_reg_map RTK_I2C_i2c2_reg =
{
    .IC_ISR_EN             = RTK_I2C_MIS_SCPU_INT_EN,
    .IC_ISR_EN_MASK        = (0x1 << RTK_I2C_MIS_ISR_I2C2_shift),
    .IC_ISR                = RTK_I2C_MIS_ISR,
    .IC_INT                = (0x1 << RTK_I2C_MIS_ISR_I2C2_shift),
    .IC_CLKSEL             = RTK_I2C_MISC_I2C_SYS_CLKDIV,
    .IC_CLKSEL_MASK        = (0x1 << RTK_I2C_MIS_I2C2_CLKSEL_SHIFT),
    .IC_INTERVAL_MODE_CTRL = RTK_I2C_I2C2_GUARD_INTERVAL_CTRL,
    .IC_GUARD_STATUS       = RTK_I2C_I2C2_GUARD_INTERVAL_STATUS,
    .IC_GPIO_MODE_CTRL     = RTK_I2C_I2C2_GPIO_MODE_CTRL,
    .IC_PH_CR              = RTK_I2C_I2C2_PH_CTRL,
    .IC_CON                = RTK_I2C_MISC_IC2_CON,
    .IC_TAR                = RTK_I2C_MISC_IC2_TAR,
    .IC_SAR                = RTK_I2C_MISC_IC2_SAR,
    .IC_HS_MADDR           = RTK_I2C_MISC_IC2_HS_MADDR,
    .IC_DATA_CMD           = RTK_I2C_MISC_IC2_DATA_CMD,
    .IC_SS_SCL_HCNT        = RTK_I2C_MISC_IC2_SS_SCL_HCNT,
    .IC_SS_SCL_LCNT        = RTK_I2C_MISC_IC2_SS_SCL_LCNT,
    .IC_FS_SCL_HCNT        = RTK_I2C_MISC_IC2_FS_SCL_HCNT,
    .IC_FS_SCL_LCNT        = RTK_I2C_MISC_IC2_FS_SCL_LCNT,
    .IC_INTR_STAT          = RTK_I2C_MISC_IC2_INTR_STAT,
    .IC_INTR_MASK          = RTK_I2C_MISC_IC2_INTR_MASK,
    .IC_RAW_INTR_STAT      = RTK_I2C_MISC_IC2_RAW_INTR_STAT,
    .IC_RX_TL              = RTK_I2C_MISC_IC2_RX_TL,
    .IC_TX_TL              = RTK_I2C_MISC_IC2_TX_TL,
    .IC_CLR_INTR           = RTK_I2C_MISC_IC2_CLR_INTR,
    .IC_CLR_RX_UNDER       = RTK_I2C_MISC_IC2_CLR_RX_UNDER,
    .IC_CLR_RX_OVER        = RTK_I2C_MISC_IC2_CLR_RX_OVER,
    .IC_CLR_TX_OVER        = RTK_I2C_MISC_IC2_CLR_TX_OVER,
    .IC_CLR_RD_REQ         = RTK_I2C_MISC_IC2_CLR_RD_REQ,
    .IC_CLR_TX_ABRT        = RTK_I2C_MISC_IC2_CLR_TX_ABRT,
    .IC_CLR_RX_DONE        = RTK_I2C_MISC_IC2_CLR_RX_DONE,
    .IC_CLR_ACTIVITY       = RTK_I2C_MISC_IC2_CLR_ACTIVITY,
    .IC_CLR_STOP_DET       = RTK_I2C_MISC_IC2_CLR_STOP_DET,
    .IC_CLR_START_DET      = RTK_I2C_MISC_IC2_CLR_START_DET,
    .IC_CLR_GEN_CALL       = RTK_I2C_MISC_IC2_CLR_GEN_CALL,
    .IC_ENABLE             = RTK_I2C_MISC_IC2_ENABLE,
    .IC_STATUS             = RTK_I2C_MISC_IC2_STATUS,
    .IC_TXFLR              = RTK_I2C_MISC_IC2_TXFLR,
    .IC_RXFLR              = RTK_I2C_MISC_IC2_RXFLR,
    .IC_SDA_HOLD           = RTK_I2C_MISC_IC2_SDA_HOLD,
    .IC_TX_ABRT_SOURCE     = RTK_I2C_MISC_IC2_TX_ABRT_SOURCE,
    .IC_SLV_DATA_NACK      = RTK_I2C_MISC_IC2_SLV_DATA_NACK_ONLY,
    .IC_SDA_SETUP          = RTK_I2C_MISC_IC2_SDA_SETUP,
    .IC_ACK_GEN_CALL       = RTK_I2C_MISC_IC2_ACK_GEN_CALL,
    .IC_ENABLE_STATUS      = RTK_I2C_MISC_IC2_ENABLE_STATUS,
    .IC_COMP_PARAM_1       = RTK_I2C_MISC_IC2_COMP_PARAM_1,
    .IC_COMP_VERSION       = RTK_I2C_MISC_IC2_COMP_VERSION,
    .IC_COMP_TYPE          = RTK_I2C_MISC_IC2_COMP_TYPE,
    .IC_SDA_DEL            = RTK_I2C_I2C2_SDA_OUTPUT_DELAY_CTRL,
};


static const rtk_i2c_port RTK_I2C_i2c2_port[] =
{
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(MIS_GPIO, 58),
		.g2c_sda           = rtk_gpio_id(MIS_GPIO, 57),
		.input_mux[0]      = {0xb80008f0, (0x3<<12), (0x0<<12)},
		.input_mux[1]      = {0xb80008f0, (0x3<<8), (0x0<<8)},
		.pin_mux[0]        = {0xb8000840, (0xF<<20), (0xB<<20), (0xF<<20)},
		.pin_mux[1]        = {0xb8000840, (0xF<<28), (0xB<<28), (0xF<<28)},
	},
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(ISO_GPIO, 4),
		.g2c_sda           = rtk_gpio_id(ISO_GPIO, 5),
		.input_mux[0]      = {0xb80008f0, (0x3<<12), (0x1<<12)},
		.input_mux[1]      = {0xb80008f0, (0x3<<8), (0x1<<8)},
		.pin_mux[0]        = {0xb806020c, (0xF<<28), (0xB<<28), (0xF<<28)},
		.pin_mux[1]        = {0xb806020c, (0xF<<20), (0xB<<20), (0xF<<20)},
	},
};

static rtk_i2c_init_reg RTK_I2C_i2c2_init_reg[] =
{
    {RTK_I2C_I2C2_SDA_OUTPUT_DELAY_CTRL, 0x000080FF, 0x00000001},
    {RTK_I2C_MISC_IC2_SDA_SETUP        , 0x000000FF, 0x00000064},
    {MISC_isr_switch_reg, MISC_isr_switch_i2c2_int_sel_mask, MISC_isr_switch_i2c2_int_sel(0)},  //select scpu int
};

static const rtk_i2c_reg_map RTK_I2C_i2c3_reg =
{
    .IC_ISR_EN             = RTK_I2C_MIS_SCPU_INT_EN,
    .IC_ISR_EN_MASK        = (0x1 << RTK_I2C_MIS_ISR_I2C3_shift),
    .IC_ISR                = RTK_I2C_MIS_ISR,
    .IC_INT                = (0x1 << RTK_I2C_MIS_ISR_I2C3_shift),
    .IC_CLKSEL             = RTK_I2C_MISC_I2C_SYS_CLKDIV,
    .IC_CLKSEL_MASK        = (0x1 << RTK_I2C_MIS_I2C3_CLKSEL_SHIFT),
    .IC_INTERVAL_MODE_CTRL = RTK_I2C_I2C3_GUARD_INTERVAL_CTRL,
    .IC_GUARD_STATUS       = RTK_I2C_I2C3_GUARD_INTERVAL_STATUS,
    .IC_GPIO_MODE_CTRL     = RTK_I2C_I2C3_GPIO_MODE_CTRL,
    .IC_PH_CR              = RTK_I2C_I2C3_PH_CTRL,
    .IC_CON                = RTK_I2C_MISC_IC3_CON,
    .IC_TAR                = RTK_I2C_MISC_IC3_TAR,
    .IC_SAR                = RTK_I2C_MISC_IC3_SAR,
    .IC_HS_MADDR           = RTK_I2C_MISC_IC3_HS_MADDR,
    .IC_DATA_CMD           = RTK_I2C_MISC_IC3_DATA_CMD,
    .IC_SS_SCL_HCNT        = RTK_I2C_MISC_IC3_SS_SCL_HCNT,
    .IC_SS_SCL_LCNT        = RTK_I2C_MISC_IC3_SS_SCL_LCNT,
    .IC_FS_SCL_HCNT        = RTK_I2C_MISC_IC3_FS_SCL_HCNT,
    .IC_FS_SCL_LCNT        = RTK_I2C_MISC_IC3_FS_SCL_LCNT,
    .IC_INTR_STAT          = RTK_I2C_MISC_IC3_INTR_STAT,
    .IC_INTR_MASK          = RTK_I2C_MISC_IC3_INTR_MASK,
    .IC_RAW_INTR_STAT      = RTK_I2C_MISC_IC3_RAW_INTR_STAT,
    .IC_RX_TL              = RTK_I2C_MISC_IC3_RX_TL,
    .IC_TX_TL              = RTK_I2C_MISC_IC3_TX_TL,
    .IC_CLR_INTR           = RTK_I2C_MISC_IC3_CLR_INTR,
    .IC_CLR_RX_UNDER       = RTK_I2C_MISC_IC3_CLR_RX_UNDER,
    .IC_CLR_RX_OVER        = RTK_I2C_MISC_IC3_CLR_RX_OVER,
    .IC_CLR_TX_OVER        = RTK_I2C_MISC_IC3_CLR_TX_OVER,
    .IC_CLR_RD_REQ         = RTK_I2C_MISC_IC3_CLR_RD_REQ,
    .IC_CLR_TX_ABRT        = RTK_I2C_MISC_IC3_CLR_TX_ABRT,
    .IC_CLR_RX_DONE        = RTK_I2C_MISC_IC3_CLR_RX_DONE,
    .IC_CLR_ACTIVITY       = RTK_I2C_MISC_IC3_CLR_ACTIVITY,
    .IC_CLR_STOP_DET       = RTK_I2C_MISC_IC3_CLR_STOP_DET,
    .IC_CLR_START_DET      = RTK_I2C_MISC_IC3_CLR_START_DET,
    .IC_CLR_GEN_CALL       = RTK_I2C_MISC_IC3_CLR_GEN_CALL,
    .IC_ENABLE             = RTK_I2C_MISC_IC3_ENABLE,
    .IC_STATUS             = RTK_I2C_MISC_IC3_STATUS,
    .IC_TXFLR              = RTK_I2C_MISC_IC3_TXFLR,
    .IC_RXFLR              = RTK_I2C_MISC_IC3_RXFLR,
    .IC_SDA_HOLD           = RTK_I2C_MISC_IC3_SDA_HOLD,
    .IC_TX_ABRT_SOURCE     = RTK_I2C_MISC_IC3_TX_ABRT_SOURCE,
    .IC_SLV_DATA_NACK      = RTK_I2C_MISC_IC3_SLV_DATA_NACK_ONLY,
    .IC_SDA_SETUP          = RTK_I2C_MISC_IC3_SDA_SETUP,
    .IC_ACK_GEN_CALL       = RTK_I2C_MISC_IC3_ACK_GEN_CALL,
    .IC_ENABLE_STATUS      = RTK_I2C_MISC_IC3_ENABLE_STATUS,
    .IC_COMP_PARAM_1       = RTK_I2C_MISC_IC3_COMP_PARAM_1,
    .IC_COMP_VERSION       = RTK_I2C_MISC_IC3_COMP_VERSION,
    .IC_COMP_TYPE          = RTK_I2C_MISC_IC3_COMP_TYPE,
    .IC_SDA_DEL            = RTK_I2C_I2C3_SDA_OUTPUT_DELAY_CTRL,
};

static const rtk_i2c_port RTK_I2C_i2c3_port[] =
{
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(MIS_GPIO, 25),
		.g2c_sda           = rtk_gpio_id(MIS_GPIO, 24),
		.input_mux[0]      = {0xb80008f0, (0x3<<4), (0x0<<4)},
		.input_mux[1]      = {0xb80008f0, (0x3<<0), (0x0<<0)},
		.pin_mux[0]        = {0xb8000818, (0xF<<20), (0xB<<20), (0xF<<20)},
		.pin_mux[1]        = {0xb8000818, (0xF<<28), (0xB<<28), (0xF<<28)},
	},
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(MIS_GPIO, 47),
		.g2c_sda           = rtk_gpio_id(MIS_GPIO, 43),
		.input_mux[0]      = {0xb80008f0, (0x3<<4), (0x1<<4)},
		.input_mux[1]      = {0xb80008f0, (0x3<<0), (0x1<<0)},
		.pin_mux[0]        = {0xb8000834,(0xF<<24),(0xB<<24), (0xF<<24)},
		.pin_mux[1]        = {0xb8000830,(0xF<<16),(0xB<<16), (0xF<<16)},
	},

};


static rtk_i2c_init_reg RTK_I2C_i2c3_init_reg[] =
{
    {RTK_I2C_I2C3_SDA_OUTPUT_DELAY_CTRL, 0x000080FF, 0x00000001},
    {RTK_I2C_MISC_IC3_SDA_SETUP        , 0x000000FF, 0x00000064},
    {MISC_isr_switch_reg, MISC_isr_switch_i2c3_int_sel_mask, MISC_isr_switch_i2c3_int_sel(0)},  //select scpu int
};

static const rtk_i2c_reg_map RTK_I2C_i2c4_reg =
{
    .IC_ISR_EN             = RTK_I2C_MIS_SCPU_INT_EN,
    .IC_ISR_EN_MASK        = (0x1 << RTK_I2C_MIS_ISR_I2C4_shift),
    .IC_ISR                = RTK_I2C_MIS_ISR,
    .IC_INT                = (0x1 << RTK_I2C_MIS_ISR_I2C4_shift),
    .IC_CLKSEL             = RTK_I2C_MISC_I2C_SYS_CLKDIV,
    .IC_CLKSEL_MASK        = (0x1 << RTK_I2C_MIS_I2C4_CLKSEL_SHIFT),
    .IC_INTERVAL_MODE_CTRL = RTK_I2C_I2C4_GUARD_INTERVAL_CTRL,
    .IC_GUARD_STATUS       = RTK_I2C_I2C4_GUARD_INTERVAL_STATUS,
    .IC_GPIO_MODE_CTRL     = RTK_I2C_I2C4_GPIO_MODE_CTRL,
    .IC_CON                = RTK_I2C_MISC_IC4_CON,
    .IC_PH_CR              = RTK_I2C_I2C4_PH_CTRL,
    .IC_TAR                = RTK_I2C_MISC_IC4_TAR,
    .IC_SAR                = RTK_I2C_MISC_IC4_SAR,
    .IC_HS_MADDR           = RTK_I2C_MISC_IC4_HS_MADDR,
    .IC_DATA_CMD           = RTK_I2C_MISC_IC4_DATA_CMD,
    .IC_SS_SCL_HCNT        = RTK_I2C_MISC_IC4_SS_SCL_HCNT,
    .IC_SS_SCL_LCNT        = RTK_I2C_MISC_IC4_SS_SCL_LCNT,
    .IC_FS_SCL_HCNT        = RTK_I2C_MISC_IC4_FS_SCL_HCNT,
    .IC_FS_SCL_LCNT        = RTK_I2C_MISC_IC4_FS_SCL_LCNT,
    .IC_INTR_STAT          = RTK_I2C_MISC_IC4_INTR_STAT,
    .IC_INTR_MASK          = RTK_I2C_MISC_IC4_INTR_MASK,
    .IC_RAW_INTR_STAT      = RTK_I2C_MISC_IC4_RAW_INTR_STAT,
    .IC_RX_TL              = RTK_I2C_MISC_IC4_RX_TL,
    .IC_TX_TL              = RTK_I2C_MISC_IC4_TX_TL,
    .IC_CLR_INTR           = RTK_I2C_MISC_IC4_CLR_INTR,
    .IC_CLR_RX_UNDER       = RTK_I2C_MISC_IC4_CLR_RX_UNDER,
    .IC_CLR_RX_OVER        = RTK_I2C_MISC_IC4_CLR_RX_OVER,
    .IC_CLR_TX_OVER        = RTK_I2C_MISC_IC4_CLR_TX_OVER,
    .IC_CLR_RD_REQ         = RTK_I2C_MISC_IC4_CLR_RD_REQ,
    .IC_CLR_TX_ABRT        = RTK_I2C_MISC_IC4_CLR_TX_ABRT,
    .IC_CLR_RX_DONE        = RTK_I2C_MISC_IC4_CLR_RX_DONE,
    .IC_CLR_ACTIVITY       = RTK_I2C_MISC_IC4_CLR_ACTIVITY,
    .IC_CLR_STOP_DET       = RTK_I2C_MISC_IC4_CLR_STOP_DET,
    .IC_CLR_START_DET      = RTK_I2C_MISC_IC4_CLR_START_DET,
    .IC_CLR_GEN_CALL       = RTK_I2C_MISC_IC4_CLR_GEN_CALL,
    .IC_ENABLE             = RTK_I2C_MISC_IC4_ENABLE,
    .IC_STATUS             = RTK_I2C_MISC_IC4_STATUS,
    .IC_TXFLR              = RTK_I2C_MISC_IC4_TXFLR,
    .IC_RXFLR              = RTK_I2C_MISC_IC4_RXFLR,
    .IC_SDA_HOLD           = RTK_I2C_MISC_IC4_SDA_HOLD,
    .IC_TX_ABRT_SOURCE     = RTK_I2C_MISC_IC4_TX_ABRT_SOURCE,
    .IC_SLV_DATA_NACK      = RTK_I2C_MISC_IC4_SLV_DATA_NACK_ONLY,
    .IC_SDA_SETUP          = RTK_I2C_MISC_IC4_SDA_SETUP,
    .IC_ACK_GEN_CALL       = RTK_I2C_MISC_IC4_ACK_GEN_CALL,
    .IC_ENABLE_STATUS      = RTK_I2C_MISC_IC4_ENABLE_STATUS,
    .IC_COMP_PARAM_1       = RTK_I2C_MISC_IC4_COMP_PARAM_1,
    .IC_COMP_VERSION       = RTK_I2C_MISC_IC4_COMP_VERSION,
    .IC_COMP_TYPE          = RTK_I2C_MISC_IC4_COMP_TYPE,
    .IC_SDA_DEL            = RTK_I2C_I2C4_SDA_OUTPUT_DELAY_CTRL,
};

static const rtk_i2c_port RTK_I2C_i2c4_port[] =
{
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(MIS_GPIO, 35),
		.g2c_sda           = rtk_gpio_id(MIS_GPIO, 34),
		.input_mux[0]      = {0xb80008f4, (0x3<<28), (0x0<<28)},
		.input_mux[1]      = {0xb80008f4, (0x3<<24), (0x0<<24)},
		.pin_mux[0]        = {0xb8000828, (0xF<<16), (0xB<<16), (0xF<<16)},
		.pin_mux[1]        = {0xb8000828, (0xF<<20), (0xB<<20), (0xF<<20)},
	},
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(MIS_GPIO, 19),
		.g2c_sda           = rtk_gpio_id(MIS_GPIO, 18),
		.input_mux[0]      = {0xb80008f4, (0x3<<28), (0x1<<28)},
		.input_mux[1]      = {0xb80008f4, (0x3<<24), (0x1<<24)},
		.pin_mux[0]        = {0xb8000810,(0xF<<4),(0xB<<4), (0xF<<4)},
		.pin_mux[1]        = {0xb8000810,(0xF<<12),(0xB<<12), (0xF<<12)},
	},
};


static rtk_i2c_init_reg RTK_I2C_i2c4_init_reg[] =
{
    {RTK_I2C_I2C4_SDA_OUTPUT_DELAY_CTRL, 0x000080FF, 0x00000001},
    {RTK_I2C_MISC_IC4_SDA_SETUP        , 0x000000FF, 0x00000064},
    {MISC_isr_switch_reg, MISC_isr_switch_i2c4_int_sel_mask, MISC_isr_switch_i2c4_int_sel(0)},  //select scpu int
};

static const rtk_i2c_reg_map RTK_I2C_i2c5_reg =
{
    .IC_ISR_EN             = RTK_I2C_SCPU_INT_EN,
    .IC_ISR_EN_MASK        = (0x1 << RTK_I2C_ISO_I2C5_shift),
    .IC_ISR                = RTK_I2C_ISO_ISR,
    .IC_INT                = (0x1 << RTK_I2C_ISO_I2C5_shift),
    .IC_CLKSEL             = RTK_I2C_ISO_I2C_SYS_CLKDIV,
    .IC_CLKSEL_MASK        = (0x1 << RTK_I2C_ISO_I2C5_CLKSEL_SHIFT),
    .IC_INTERVAL_MODE_CTRL = RTK_I2C_I2C5_GUARD_INTERVAL_CTRL,
    .IC_GUARD_STATUS       = RTK_I2C_I2C5_GUARD_INTERVAL_STATUS,
    .IC_GPIO_MODE_CTRL     = RTK_I2C_I2C5_GPIO_MODE_CTRL,
    .IC_PH_CR              = RTK_I2C_I2C4_PH_CTRL,
    .IC_CON                = RTK_I2C_ISO_IC5_CON,
    .IC_TAR                = RTK_I2C_ISO_IC5_TAR,
    .IC_SAR                = RTK_I2C_ISO_IC5_SAR,
    .IC_HS_MADDR           = RTK_I2C_ISO_IC5_HS_MADDR,
    .IC_DATA_CMD           = RTK_I2C_ISO_IC5_DATA_CMD,
    .IC_SS_SCL_HCNT        = RTK_I2C_ISO_IC5_SS_SCL_HCNT,
    .IC_SS_SCL_LCNT        = RTK_I2C_ISO_IC5_SS_SCL_LCNT,
    .IC_FS_SCL_HCNT        = RTK_I2C_ISO_IC5_FS_SCL_HCNT,
    .IC_FS_SCL_LCNT        = RTK_I2C_ISO_IC5_FS_SCL_LCNT,
    .IC_INTR_STAT          = RTK_I2C_ISO_IC5_INTR_STAT,
    .IC_INTR_MASK          = RTK_I2C_ISO_IC5_INTR_MASK,
    .IC_RAW_INTR_STAT      = RTK_I2C_ISO_IC5_RAW_INTR_STAT,
    .IC_RX_TL              = RTK_I2C_ISO_IC5_RX_TL,
    .IC_TX_TL              = RTK_I2C_ISO_IC5_TX_TL,
    .IC_CLR_INTR           = RTK_I2C_ISO_IC5_CLR_INTR,
    .IC_CLR_RX_UNDER       = RTK_I2C_ISO_IC5_CLR_RX_UNDER,
    .IC_CLR_RX_OVER        = RTK_I2C_ISO_IC5_CLR_RX_OVER,
    .IC_CLR_TX_OVER        = RTK_I2C_ISO_IC5_CLR_TX_OVER,
    .IC_CLR_RD_REQ         = RTK_I2C_ISO_IC5_CLR_RD_REQ,
    .IC_CLR_TX_ABRT        = RTK_I2C_ISO_IC5_CLR_TX_ABRT,
    .IC_CLR_RX_DONE        = RTK_I2C_ISO_IC5_CLR_RX_DONE,
    .IC_CLR_ACTIVITY       = RTK_I2C_ISO_IC5_CLR_ACTIVITY,
    .IC_CLR_STOP_DET       = RTK_I2C_ISO_IC5_CLR_STOP_DET,
    .IC_CLR_START_DET      = RTK_I2C_ISO_IC5_CLR_START_DET,
    .IC_CLR_GEN_CALL       = RTK_I2C_ISO_IC5_CLR_GEN_CALL,
    .IC_ENABLE             = RTK_I2C_ISO_IC5_ENABLE,
    .IC_STATUS             = RTK_I2C_ISO_IC5_STATUS,
    .IC_TXFLR              = RTK_I2C_ISO_IC5_TXFLR,
    .IC_RXFLR              = RTK_I2C_ISO_IC5_RXFLR,
    .IC_SDA_HOLD           = RTK_I2C_ISO_IC5_SDA_HOLD,
    .IC_TX_ABRT_SOURCE     = RTK_I2C_ISO_IC5_TX_ABRT_SOURCE,
    .IC_SLV_DATA_NACK      = RTK_I2C_ISO_IC5_SLV_DATA_NACK_ONLY,
    .IC_SDA_SETUP          = RTK_I2C_ISO_IC5_SDA_SETUP,
    .IC_ACK_GEN_CALL       = RTK_I2C_ISO_IC5_ACK_GEN_CALL,
    .IC_ENABLE_STATUS      = RTK_I2C_ISO_IC5_ENABLE_STATUS,
    .IC_COMP_PARAM_1       = RTK_I2C_ISO_IC5_COMP_PARAM_1,
    .IC_COMP_VERSION       = RTK_I2C_ISO_IC5_COMP_VERSION,
    .IC_COMP_TYPE          = RTK_I2C_ISO_IC5_COMP_TYPE,
    .IC_SDA_DEL            = RTK_I2C_I2C5_SDA_OUTPUT_DELAY_CTRL,
};


static const rtk_i2c_port RTK_I2C_i2c5_port[] =
{
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(ISO_GPIO, 6),
		.g2c_sda           = rtk_gpio_id(ISO_GPIO, 7),
		.input_mux[0]      = {0xb8060248, (0x3<<12), (0x0<<12)},
		.input_mux[1]      = {0xb8060248, (0x3<<8), (0x0<<8)},
		.pin_mux[0]        = {0xb806020c, (0xF<<12), (0xB<<12), (0xF<<12)},
		.pin_mux[1]        = {0xb806020c, (0xF<<4), (0xB<<4), (0xF<<4)},
	},
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(ISO_GPIO, 43),
		.g2c_sda           = rtk_gpio_id(ISO_GPIO, 46),
		.input_mux[0]      = {0xb8060248, (0x3<<12), (0x1<<12)},
		.input_mux[1]      = {0xb8060248, (0x3<<8), (0x1<<8)},
		.pin_mux[0]        = {0xb8060228, (0xF<<28), (0xB<<28), (0xF<<28)},
		.pin_mux[1]        = {0xb8060228, (0xF<<4), (0xB<<4), (0xF<<4)},
	},
	{
		.gpio_mapped       = 1,
		.g2c_scl           = rtk_gpio_id(ISO_GPIO, 24),
		.g2c_sda           = rtk_gpio_id(ISO_GPIO, 25),
		.input_mux[0]      = {0xb8060248, (0x3<<12), (0x2<<12)},
		.input_mux[1]      = {0xb8060248, (0x3<<8), (0x2<<8)},
		.pin_mux[0]        = {0xb8060214, (0xF<<20), (0xB<<20), (0xF<<20)},
		.pin_mux[1]        = {0xb8060214, (0xF<<12), (0xB<<12), (0xF<<12)},
	},
};

static rtk_i2c_init_reg RTK_I2C_i2c5_init_reg[] =
{
    {RTK_I2C_I2C5_SDA_OUTPUT_DELAY_CTRL, 0x000080FF, 0x00000007},
    {RTK_I2C_ISO_IC5_SDA_SETUP         , 0x000000FF, 0x00000064},
    {SYS_REG_INT_CTRL_SCPU_reg, (~0), (0x1 << RTK_I2C_ISO_MIS_OFF_INT_SCPU_EN_shift) | (1 << SYS_REG_INT_CTRL_SCPU_write_data_shift)},
    {ISO_MISC_OFF_SYSTEM_reg, ISO_MISC_OFF_SYSTEM_i2c5_scpu_int_en_mask, ISO_MISC_OFF_SYSTEM_i2c5_scpu_int_en(1)},
};


static rtk_i2c_phy i2c_phy[] =
{
    { &RTK_I2C_i2c0_reg, sizeof(RTK_I2C_i2c0_port)/sizeof(rtk_i2c_port), RTK_I2C_i2c0_port, sizeof(RTK_I2C_i2c0_init_reg)/sizeof(rtk_i2c_init_reg), RTK_I2C_i2c0_init_reg},
    { &RTK_I2C_i2c1_reg, sizeof(RTK_I2C_i2c1_port)/sizeof(rtk_i2c_port), RTK_I2C_i2c1_port, sizeof(RTK_I2C_i2c1_init_reg)/sizeof(rtk_i2c_init_reg), RTK_I2C_i2c1_init_reg},
    { &RTK_I2C_i2c2_reg, sizeof(RTK_I2C_i2c2_port)/sizeof(rtk_i2c_port), RTK_I2C_i2c2_port, sizeof(RTK_I2C_i2c2_init_reg)/sizeof(rtk_i2c_init_reg), RTK_I2C_i2c2_init_reg},
    { &RTK_I2C_i2c3_reg, sizeof(RTK_I2C_i2c3_port)/sizeof(rtk_i2c_port), RTK_I2C_i2c3_port, sizeof(RTK_I2C_i2c3_init_reg)/sizeof(rtk_i2c_init_reg), RTK_I2C_i2c3_init_reg},
    { &RTK_I2C_i2c4_reg, sizeof(RTK_I2C_i2c4_port)/sizeof(rtk_i2c_port), RTK_I2C_i2c4_port, sizeof(RTK_I2C_i2c4_init_reg)/sizeof(rtk_i2c_init_reg), RTK_I2C_i2c4_init_reg},
    { &RTK_I2C_i2c5_reg, sizeof(RTK_I2C_i2c5_port)/sizeof(rtk_i2c_port), RTK_I2C_i2c5_port, sizeof(RTK_I2C_i2c5_init_reg)/sizeof(rtk_i2c_init_reg), RTK_I2C_i2c5_init_reg},
};


#endif
