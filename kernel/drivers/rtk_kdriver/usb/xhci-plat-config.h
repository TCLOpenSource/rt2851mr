#ifndef __XHCI_PLAT_RTD287X_CONFIG_H__
#define __XHCI_PLAT_RTD287X_CONFIG_H__
#include <rtk_kdriver/rtk_gpio.h>

typedef struct {
    unsigned char  page;
    unsigned char  reg;
    unsigned short val;
} U3_PHY_REGISTER;

// USB3.0 Phy initial table
// Updated: 2019/08/27
static U3_PHY_REGISTER xhci_u3_phy_config[] __attribute__((unused)) = {
    { 0x0, 0x00, 0x400c },     // ANA00
    { 0x0, 0x01, 0xac86 },     // ANA01
    { 0x0, 0x02, 0x6042 },     // ANA02
    { 0x0, 0x03, 0x2771 },     // ANA03
    { 0x0, 0x04, 0x72f5 },     // ANA04
    { 0x0, 0x05, 0x2ad3 },     // ANA05
    { 0x0, 0x06, 0x0006 },     // ANA06
    { 0x0, 0x07, 0x2e00 },     // ANA07
    { 0x0, 0x08, 0x3591 },     // ANA08
    //{ 0x0, 0x09, 0x367C },     // ANA09
    { 0x0, 0x0A, 0xa608 },     // ANA0A /* (Auto mode) */
    { 0x0, 0x0B, 0xa905 },     // ANA0B
    { 0x0, 0x0C, 0xc008 },     // ANA0C
    { 0x0, 0x0D, 0xef1e },     // ANA0D  // RX_Z0
    { 0x0, 0x0E, 0x1010 },     // ANA0E
    { 0x0, 0x0F, 0x8d50 },     // ANA0F
    { 0x0, 0x10, 0x000c },     // DMR
    { 0x0, 0x11, 0x4c10 },     // BACR
    { 0x0, 0x12, 0x0000 },     // IER
    { 0x0, 0x13, 0x0c81 },     // BCSR
    { 0x0, 0x14, 0xde01 },     // BPR
    { 0x0, 0x15, 0x0000 },     // BPNR2
    { 0x0, 0x16, 0x0000 },     // BFNR
    { 0x0, 0x17, 0x0000 },     // BRNR2
    { 0x0, 0x18, 0x0000 },     // BENR
    { 0x0, 0x19, 0x6000 },     // REG_REV0  : bits[15:9] REG_FILTER_OUT
                               // modify   dr.save eq 9-->5
    { 0x0, 0x1A, 0x0085 },     // REG_REV1
    { 0x0, 0x1B, 0x2014 },     // REG_REV2
    { 0x0, 0x1C, 0xc900 },     // REG_REV3
    { 0x0, 0x1D, 0xa03f },     // REG_FLD_0
    { 0x0, 0x1E, 0xc2e0 },     // REG_FLD_1
    { 0x0, 0x1F, 0x7e00 },     // ANA1F
    { 0x1, 0x00, 0x7058 },     // page1 0x00 --> xxxx20xx
    { 0x1, 0x01, 0xf545 },     // PAGE1_REG01 bit[15:12] : Normal operation Amplitude control
                               // PAGE1_REG01 bit[11: 8] : Beacon LFPS Amplitude Control deamphasis--> 8-->a (dr.save)
                               // PAGE1_REG01 bit[ 7: 4] : Normal operation Amplitude control
                               // PAGE1_REG01 bit[ 3: 0] : Beacon LFPS Amplitude Control deamphasis

    { 0x1, 0x02, 0x0013 },
    { 0x1, 0x03, 0xbb66 },     // 20170620 [15:12]=1101->1011
    { 0x1, 0x04, 0x4470 },     // 0719 modify bit 15=1,U1/U2/U3 can enter.
    { 0x1, 0x05, 0x126c },     //
    { 0x1, 0x06, 0x840a },     //
    { 0x1, 0x07, 0x01d6 },     //
    { 0x1, 0x08, 0xf802 },     // PAGE1_REG08 bit[15:11] REG_EQ_UPPER_LIMIT,
                               // PAGE1_REG08 bit[10:6] REG_EQOUT_OFFSET,
                               // PAGE1_REG08 bit[4:0] REG_TIMER_EQ
    { 0x1, 0x09, 0xff04 },     // 20190724 enable_cost down circuit bit2=1
    { 0x1, 0x0A, 0x3040 },     //
    { 0x1, 0x0B, 0x8028 },     //
    { 0x1, 0x0C, 0xffff },     //
    { 0x1, 0x0D, 0xffff },     //
    { 0x1, 0x0E, 0x0000 },     //
    { 0x1, 0x0F, 0x8600 },     //
};

#define U3_PHY_SETTING_SIZE      (sizeof(xhci_u3_phy_config) / sizeof(unsigned long))


/////////////////////////////////////////////////////////////////
// U2 Phy Setting
/////////////////////////////////////////////////////////////////

typedef struct {
    unsigned char page;
    unsigned char addr;
} U2_PHY_REG;

static U2_PHY_REG u2_phy_reg_table[] __attribute__((unused)) = {
    {0, 0xE0},
    {0, 0xE1},
    {0, 0xE2},
    {0, 0xE3},
    {0, 0xE4},
    {0, 0xE5},
    {0, 0xE6},
    {0, 0xE7},
    {1, 0xE0},
    {1, 0xE1},
    {1, 0xE2},
    {1, 0xE3},
    {1, 0xE4},
    {1, 0xE5},
    {1, 0xE6},
    {1, 0xE7},
    {0, 0xF0},
    {0, 0xF1},
    {0, 0xF2},
    {0, 0xF3},
    {0, 0xF4},
    {0, 0xF5},
    {0, 0xF6},
    {0, 0xF7},
};



typedef struct {
    int           port1;
    unsigned char addr;
    unsigned char val;
} U2_PHY_REGISTER;

#define Z0_GEAR(val)   (3+((val&0xf)*4))
//[GEAR]->[Value]:
//0x0->0x03;0x1->0x07;0x2->0x0b;0x3->0x0f;0x4->0x13;0x5->0x17;0x6->0x1b;0x7->0x1f
//0x8->0x23;0x9->0x27;0xa->0x2b;0xb->0x2f;0xc->0x33;0xd->0x37;0xe->0x3b;0xf->0x3f

#if defined(CONFIG_TV030_PLATFORM)
//2.2R XHCI : 0xa , EHCI : 0x9
#define Z0_VAL_P1_XHCI  Z0_GEAR(0xa)
#define Z0_VAL_P2_XHCI  Z0_GEAR(0xa)
#elif defined(CONFIG_CUSTOMER_TV006)
// 4.7R XHCI : 0x9 , EHCI : 0x8
#define Z0_VAL_P1_XHCI  Z0_GEAR(0x9)
#define Z0_VAL_P2_XHCI  Z0_GEAR(0x9)
#else   //CONFIG_TV001_PLATFORM for default
//public 2.2R XHCI : 0xa , EHCI : 0x9
#define Z0_VAL_P1_XHCI  Z0_GEAR(0xa)
#define Z0_VAL_P2_XHCI  Z0_GEAR(0xa)
#endif

static U2_PHY_REGISTER u2_phy_setting[] =
{
    {1, 0xF4, 0xbb},   // zap to page1
    {2, 0xF4, 0xbb},

    {1, 0XE5, 0x0f},   // E5 Page 1
    {2, 0XE5, 0x0f},

    {1, 0xE6, 0x58},   // E6 Page 1
    {2, 0xE6, 0x58},

    {1, 0xE7, 0xe3},   // E7 Page 1
    {2, 0xE7, 0xe3},

    {1, 0xF4, 0x9b},   // zap to page0
    {2, 0xF4, 0x9b},

    {1, 0xE0, Z0_VAL_P1_XHCI},   // E0 Page 0 Z0 value: Depends on the resistance value of all circuits
    {2, 0xE0, Z0_VAL_P2_XHCI},

    {1, 0xE1, 0x18},
    {2, 0xE1, 0x18},

    {1, 0xE2, 0x5f},   // XHCI CMU
    {2, 0xE2, 0x5f},

    {1, 0xE3, 0xcd},
    {2, 0xE3, 0xcd},

    {1, 0xE5, 0x63}, // REG_DBS_SEL[1]=1: Double sensitivity 1.5X
    {2, 0xE5, 0x63},

    {1, 0xF4, 0xbb},   // page 1
    {2, 0xF4, 0xbb},

    {1, 0xE1, 0x77},
    {2, 0xE1, 0x77},

    {1, 0xF4, 0xdb},   // page 2
    {2, 0xF4, 0xdb},

    {1, 0xE7, 0x44},
    {2, 0xE7, 0x44},

    {1, 0xF4, 0x9b},   // page 0
    {2, 0xF4, 0x9b},

    {1, 0xE4, 0x6c},   // (first) bit[7:4] disconnt level, bit[3:0]=swing
    {2, 0xE4, 0x6a},

    {1, 0xE7, 0x61},   // (first) bit[7:4] device disconnt level (squelch)
    {2, 0xE7, 0x61},

    {1, 0xF4, 0xbb},   // page 1
    {2, 0xF4, 0xbb},

    {1, 0xE0, 0x22},   // bit[2]=0, Calibration sensitivity
    {2, 0xE0, 0x22},

    {1, 0xE0, 0x26},   // bit[2]=1, Calibration sensitivity
    {2, 0xE0, 0x26},

    {1, 0xF4, 0x9b},   // page 0
    {2, 0xF4, 0x9b},

    {1, 0xE4, 0xac},   // (second) bit[7:4] disconnt level,bit[3:0]=swing
    {2, 0xE4, 0xaa},

    {1, 0xE7, 0x61},   // (second) bit[7:4] device disconnt level (squelch)
    {2, 0xE7, 0x61},

    {1, 0xE6, 0x01},
    {2, 0xE6, 0x01},

    {1, 0xF0, 0xfc},
    {2, 0xF0, 0xfc},

    {1, 0xF1, 0x8c},
    {2, 0xF1, 0x8c},

    {1, 0xF2, 0x00},
    {2, 0xF2, 0x00},

    {1, 0xF3, 0x11},
    {2, 0xF3, 0x11},

    {1, 0xF5, 0x15},
    {2, 0xF5, 0x15},

    {1, 0xF6, 0x00},  // fix full speed cross eye
    {2, 0xF6, 0x00},

    {1, 0xF7, 0x8a},
    {2, 0xF7, 0x8a},

    {1, 0xF4, 0xbb},   // zap to page1
    {2, 0xF4, 0xbb},

    {1, 0xE2, 0x00},
    {2, 0xE2, 0x00},

    {1, 0xE3, 0x03},
    {2, 0xE3, 0x03},

    {1, 0xE4, 0x48},
    {2, 0xE4, 0x48},

    {1, 0xF4, 0xdb},   // zap to page2
    {2, 0xF4, 0xdb},

    {1, 0xE0, 0xff},
    {2, 0xE0, 0xff},

    {1, 0xE1, 0xff},
    {2, 0xE1, 0xff},

    {1, 0xE2, 0x00},
    {2, 0xE2, 0x00},

    {1, 0xE3, 0x01},    //20190724_enable cost down circuit bit0=1
    {2, 0xE3, 0x01},

    {1, 0xE4, 0x15},
    {2, 0xE4, 0x15},

    {1, 0xE5, 0x81},
    {2, 0xE5, 0x81},

    {1, 0xE6, 0x53},
    {2, 0xE6, 0x53},

    {1, 0xF4, 0x9b},   // zap to page0
    {2, 0xF4, 0x9b},
};


typedef struct {
    U2_PHY_REGISTER* p_reg_table;
    unsigned int     n_reg;
} U2_PHY_CONFIG;


static __maybe_unused U2_PHY_CONFIG u2_phy_config= {
    .p_reg_table = u2_phy_setting,
    .n_reg       = sizeof(u2_phy_setting) / sizeof(U2_PHY_REGISTER),
};

#define U2_PHY_CONFIG_COUNT     2

////////////////////////////////////////////////////////////////////
// XHCI Config file
////////////////////////////////////////////////////////////////////

typedef enum {
    XHCI_U2_PORT1 = 0,
    XHCI_U2_PORT2,
    XHCI_U2_PORT3,
    XHCI_U3_PORT,
    XHCI_MAX_PORT,
} XHCI_PORT_ID;

typedef struct {
    u32 enable:1;       // 0 : disabled, 1 : enabled
    u32 polarity:1;     // 0: negative active, 1 : postive active
    RTK_GPIO_ID gid;
} XHCI_PORT_GPIO;

typedef struct {
    XHCI_PORT_GPIO   vbus;    // for VBus control
    XHCI_PORT_GPIO   ocd;     // for OCD control
} XHCI_PORT_GPIO_CONFIG;

typedef struct {
    u32 u3_port_disabled:1;
    u32 type_c_en:1;
    u32 company_u2_port:4;
    u32 reserved:26;
    XHCI_PORT_GPIO_CONFIG port_config[XHCI_MAX_PORT];
} XHCI_RTD287X_CONFIG;

#define XHCI_SET_PORT_GPIO(gpio, en, pol, type, gpio_id) \
    do {  \
        gpio.enable = en; \
        gpio.polarity = pol; \
        gpio.gid = rtk_gpio_id(type, gpio_id);    \
    } while(0)
#define XHCI_SET_PORT_VBUS_CFG(pcfg, en, pol, type, gpio_id)       XHCI_SET_PORT_GPIO(pcfg.vbus, en, pol, type, gpio_id)
#define XHCI_SET_PORT_OCD_CFG(pcfg, en, pol, type, gpio_id)        XHCI_SET_PORT_GPIO(pcfg.ocd,  en, pol, type, gpio_id)

#endif // __XHCI_PLAT_RTD287X_CONFIG_H__
