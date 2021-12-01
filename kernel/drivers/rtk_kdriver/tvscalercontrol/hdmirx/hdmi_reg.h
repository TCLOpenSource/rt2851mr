#define HD21_PORT HDMI_PORT0
#define HD20_PORT HDMI_PORT2

typedef unsigned int uint32_t;

#include "hdmi_reg_phy.h"   // for HDMI PHY
#include "hdmi_reg_phy_2p1.h"  //for HDMI2.1 PHY
#include "hdmi_reg_phy_dfe.h"   //for DFE PHY
#include "hdmi_reg_mac.h"   // for HDMI MAC

#include <rbus/pinmux_reg.h> // for ST 5VDET/HPD
