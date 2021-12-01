#include <asm/delay.h>
#include <linux/mutex.h>
#include <rbus/usb2_top_reg.h>
#include <rtk_kdriver/io.h>
#include <rtk_kdriver/rtk_crt.h>
#include <rtk_kdriver/usb/usb2_crt.h>

#define USB_PHY_DELAY 50

static DEFINE_MUTEX(crt_mutex);
static bool usb2_crt_power_on_done = false;

bool is_usb2_on(void)
{
    bool is_mac_clk_on = false, is_mac_release = false, is_phy_release = false;
    unsigned clk = 0, mac_rst = 0, phy_rst = 0;

    // clock: USB MAC
    clk = rtd_inl(SYS_REG_SYS_CLKEN2_reg);
    if ((clk & SYS_REG_SYS_CLKEN2_clken_usb2_ex_wrapper_mask) &&
            (clk & SYS_REG_SYS_CLKEN2_clken_usb2_ex_dwc_mask))
        is_mac_clk_on = true;


    // reset: USB MAC
    mac_rst = rtd_inl(SYS_REG_SYS_SRST2_reg);
    if ((mac_rst & SYS_REG_SYS_SRST2_rstn_usb2_ex_wrapper_mask) &&
            (mac_rst & SYS_REG_SYS_SRST2_rstn_usb2_ex_dwc_mask))
        is_mac_release = true;

    // reset: USB PHY
    phy_rst = rtd_inl(SYS_REG_SYS_SRST3_reg);
    if ((phy_rst & SYS_REG_SYS_SRST3_rstn_usb2_phy_p3_mask) &&
            (phy_rst & SYS_REG_SYS_SRST3_rstn_usb2_phy_p2_mask))
        is_phy_release = true;

    return (is_mac_clk_on && is_mac_release && is_phy_release);
}
EXPORT_SYMBOL(is_usb2_on);


void usb2_crt_on(void)
{
    mutex_lock(&crt_mutex);

    if (!usb2_crt_power_on_done || !is_usb2_on()) {
        CRT_CLK_OnOff(USB, CLK_ON, (void *)2);

        //SNPS reset
        rtd_outl(USB2_TOP_USB_CTR0_reg,
                USB2_TOP_USB_CTR0_usbphy_pow_p1(1) |
                USB2_TOP_USB_CTR0_usbphy_pow_p0(1) |
                USB2_TOP_USB_CTR0_usbip_port1_soft_reset(1) |
                USB2_TOP_USB_CTR0_usbip_port0_soft_reset(1));
        udelay(USB_PHY_DELAY);

        //SNPS release
        rtd_clearbits(USB2_TOP_USB_CTR0_reg,
                USB2_TOP_USB_CTR0_usbip_port1_soft_reset_mask |
                USB2_TOP_USB_CTR0_usbip_port0_soft_reset_mask);
        udelay(USB_PHY_DELAY);

        //keep pll alive
        rtd_setbits(USB2_TOP_USB_CTR0_reg,
                USB2_TOP_USB_CTR0_pll_alive_enable_mask);

        usb2_crt_power_on_done = true;
    }

    mutex_unlock(&crt_mutex);
}
EXPORT_SYMBOL(usb2_crt_on);


void usb2_crt_off(void)
{
    mutex_lock(&crt_mutex);
    usb2_crt_power_on_done = false;
    CRT_CLK_OnOff(USB, CLK_OFF, (void *)2);
    mutex_unlock(&crt_mutex);
}
EXPORT_SYMBOL(usb2_crt_off);
