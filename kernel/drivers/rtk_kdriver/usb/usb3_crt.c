#include <asm/delay.h>
#include <linux/mutex.h>
#include <rtk_kdriver/io.h>
#include <rtk_kdriver/rtk_crt.h>
#include <rtk_kdriver/usb/usb3_crt.h>

#define USB_PHY_DELAY 50

static DEFINE_MUTEX(crt_mutex);


bool is_usb3_on(void)
{
    bool is_mac_clk_on = false, is_mac_release = false, is_phy_release = false;
    unsigned clk = 0, mac_rst = 0, phy_rst = 0;

    // clock: USB MAC
    clk = rtd_inl(SYS_REG_SYS_CLKEN2_reg);
    if (clk & SYS_REG_SYS_CLKEN2_clken_usb3_mask)
        is_mac_clk_on = true;


    // reset: USB MAC
    mac_rst = rtd_inl(SYS_REG_SYS_SRST2_reg);
    if ((mac_rst & SYS_REG_SYS_SRST2_rstn_usb3_mask))
        is_mac_release = true;

    // reset: USB phy and others
    phy_rst = rtd_inl(SYS_REG_SYS_SRST3_reg);
    if ((phy_rst & SYS_REG_SYS_SRST3_rstn_usb2_phy_p1_mask) &&
            (phy_rst & SYS_REG_SYS_SRST3_rstn_usb2_phy_p0_mask) &&
            (phy_rst & SYS_REG_SYS_SRST3_rstn_usb3_phy_p0_mask) &&
            (phy_rst & SYS_REG_SYS_SRST3_rstn_usb3_mdio_p0_mask))
        is_phy_release = true;

    return (is_mac_clk_on && is_mac_release && is_phy_release);
}
EXPORT_SYMBOL(is_usb3_on);


void usb3_crt_on(void)
{
    mutex_lock(&crt_mutex);
    CRT_CLK_OnOff(USB, CLK_ON, (void *)3);
    mutex_unlock(&crt_mutex);
}
EXPORT_SYMBOL(usb3_crt_on);


void usb3_crt_off(void)
{
    mutex_lock(&crt_mutex);
    CRT_CLK_OnOff(USB, CLK_OFF, (void *)3);
    mutex_unlock(&crt_mutex);
}
EXPORT_SYMBOL(usb3_crt_off);
