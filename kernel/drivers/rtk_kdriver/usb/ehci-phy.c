#include <rbus/usb2_top_reg.h>
#include "ehci-platform.h"

const U2_PHY_REG u2_phy_reg_table[] = {
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
    {},
};

/////////////////////////////////////////////////////////////////
// U2 Phy Setting
/////////////////////////////////////////////////////////////////
#define Z0_GEAR(val)   (3+((val&0xf)*4))
//[GEAR]->[Value]:
//0x0->0x03;0x1->0x07;0x2->0x0b;0x3->0x0f;0x4->0x13;0x5->0x17;0x6->0x1b;0x7->0x1f
//0x8->0x23;0x9->0x27;0xa->0x2b;0xb->0x2f;0xc->0x33;0xd->0x37;0xe->0x3b;0xf->0x3f

#if defined(CONFIG_TV030_PLATFORM)
//2.2R XHCI : 0xa , EHCI : 0x9
#define Z0_VAL_P1_EHCI  Z0_GEAR(0x9)
#define Z0_VAL_P2_EHCI  Z0_GEAR(0x9)
#elif defined(CONFIG_CUSTOMER_TV006)
// 4.7R XHCI : 0x9 , EHCI : 0x8
#define Z0_VAL_P1_EHCI  Z0_GEAR(0x8)
#define Z0_VAL_P2_EHCI  Z0_GEAR(0x8)
#else   //CONFIG_TV001_PLATFORM for default
//public 2.2R XHCI : 0xa , EHCI : 0x9
#define Z0_VAL_P1_EHCI  Z0_GEAR(0x9)
#define Z0_VAL_P2_EHCI  Z0_GEAR(0x9)
#endif

U2_PHY_REGISTER ehci_top_u2_phy_setting[] = {
    /*
     * 0xF4: select page.
     *   0x9b: page 0
     *   0xbb: page 1
     *   0xdb: page 2
     */

    {1, 0xF4, 0xbb},
    {2, 0xF4, 0xbb},

    {1, 0xE5, 0x0f},
    {2, 0xE5, 0x0f},

    {1, 0xE6, 0x58},
    {2, 0xE6, 0x58},

    {1, 0xE7, 0xe3},
    {2, 0xE7, 0xe3},

    {1, 0xF4, 0x9b},  // to page0
    {2, 0xF4, 0x9b},

    {1, 0xE0, Z0_VAL_P1_EHCI},    // E0 Page 0 Z0 value: Depends on the resistance value of all circuits
    {2, 0xE0, Z0_VAL_P2_EHCI},

    {1, 0XE1, 0x18},
    {2, 0XE1, 0x18},

    {1, 0xE2, 0x5f},
    {2, 0xE2, 0x5f},

    {1, 0xE3, 0xcd},
    {2, 0xE3, 0xcd},

    {1, 0xE5, 0x63},  // REG_DBS_SEL[1]=1: Double sensitivity 1.5X
    {2, 0xE5, 0x63},

    {1, 0xF4, 0xbb},  // to page1
    {2, 0xF4, 0xbb},

    {1, 0xE1, 0x77},
    {2, 0xE1, 0x77},

    {1, 0xF4, 0xdb},  // to page2
    {2, 0xF4, 0xdb},

    {1, 0xE7, 0x44},
    {2, 0xE7, 0x44},

    {1, 0xF4, 0x9b},  // to page0
    {2, 0xF4, 0x9b},

    {1, 0xE4, 0x6c},  // (first) bit[7:4]=disconnect level, bit[3:0]=swing;91024 parameter_V5 swing (0xe -->0xc)
    {2, 0xE4, 0x6c},

    {1, 0xE7, 0x61},  // (first) bit[7:4]=deivce disconnect level (squelch)
    {2, 0xE7, 0x61},

    {1, 0xF4, 0xbb},  // to page1
    {2, 0xF4, 0xbb},

    {1, 0xE0, 0x22},
    {2, 0xE0, 0x22},

    {1, 0xE0, 0x26},
    {2, 0xE0, 0x26},

    {1, 0xF4, 0x9b},  // to page0
    {2, 0xF4, 0x9b},
    //disconnect level second times to set 0x8 for port0/1 comfirmed with CY
    {1, 0xE4, 0xac},  // port0 (second) bit[7:4]=8(disconnect level), bit[3:0]=e(swing);91024 parameter_V5 swing (0xe -->0xc)
    {2, 0xE4, 0xac},  // port1 (second) bit[7:4]=8(disconnect level), bit[3:0]=c(swing)

    {1, 0xE7, 0x91},  // (second) bit[7:4]=squelch level
    {2, 0xE7, 0x91},

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

    {1, 0xF5, 0x95},    //ML5BU-1200
    {2, 0xF5, 0x95},    //ML5BU-1200

    {1, 0xF6, 0x00},
    {2, 0xF6, 0x00},

    {1, 0xF7, 0xba},    //ML5BU-1200
    {2, 0xF7, 0xba},    //ML5BU-1200

    {1, 0xF4, 0xbb},  // to page1
    {2, 0xF4, 0xbb},  // to page1

    {1, 0xE2, 0x00},
    {2, 0xE2, 0x00},

    {1, 0xE3, 0x03},
    {2, 0xE3, 0x03},

    {1, 0xE4, 0x48},
    {2, 0xE4, 0x48},

    {1, 0xF4, 0xdb},  // to page2
    {2, 0xF4, 0xdb},  // to page2

    {1, 0xE0, 0xff},
    {2, 0xE0, 0xff},

    {1, 0xE1, 0xff},
    {2, 0xE1, 0xff},

    {1, 0xE2, 0x00},
    {2, 0xE2, 0x00},

    {1, 0xE3, 0x01},    //20190724 enable_cost down circuit bit0=1
    {2, 0xE3, 0x01},

    {1, 0xE4, 0x15},
    {2, 0xE4, 0x15},

    {1, 0xE5, 0x81},
    {2, 0xE5, 0x81},

    {1, 0xE6, 0x53},
    {2, 0xE6, 0x53},

    {1, 0xF4, 0x9b},  // to page0
    {2, 0xF4, 0x9b},
};



/* TODO: Correct phy config if SoC change */
U2_PHY_CONFIG ehci_u2_phy_config[] = {
    {
        .id          = ID_EHCI_TOP,
        .p_reg_table = ehci_top_u2_phy_setting,
        .n_reg       = ARRAY_SIZE(ehci_top_u2_phy_setting),
    },
};


/* TODO: Correct wrapper vstatus regs if SoC change */
struct vstatus_reg vstatus_regs[] = {
    {
        .id = ID_EHCI_TOP,
        .regs = {
            USB2_TOP_VSTATUS_reg,
            USB2_TOP_VSTATUS_2port_reg,
        }
    },
};


/* TODO: Add/remove completion if SoC change */
DECLARE_COMPLETION(ehci_top_phy_mac_completion);
struct ehci_completion ehci_completions[] = {
    {
        .id = ID_EHCI_TOP,
        .phy_mac_completion = &ehci_top_phy_mac_completion,
    },
};


U2_PHY_CONFIG *id_get_ehci_phy_config(int id)
{
    int i = 0;

    for (i = 0; i < ARRAY_SIZE(ehci_u2_phy_config); i++)
        if (ehci_u2_phy_config[i].id == id)
            return &ehci_u2_phy_config[i];

    return NULL;
}


unsigned long *id_get_ehci_vstatus_regs(int id)
{
    int i = 0;

    for (i = 0; i < ARRAY_SIZE(vstatus_regs); i++)
        if (vstatus_regs[i].id == id)
            return vstatus_regs[i].regs;

    return NULL;
}


struct completion *id_get_ehci_completion(int id)
{
    int i = 0;

    for (i = 0; i < ARRAY_SIZE(ehci_completions); i++)
        if (ehci_completions[i].id == id)
            return ehci_completions[i].phy_mac_completion;

    return NULL;
}

