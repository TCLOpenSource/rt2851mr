/*
 * xhci-plat.c - xHCI host controller driver platform Bus Glue.
 *
 * Copyright (C) 2012 Texas Instruments Incorporated - http://www.ti.com
 * Author: Sebastian Andrzej Siewior <bigeasy@linutronix.de>
 *
 * A lot of code borrowed from the Linux xHCI driver.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 */

#include <linux/clk.h>
#include <linux/dma-mapping.h>
#include <linux/module.h>
#include <linux/pci.h>
#include <linux/of.h>
#include <linux/platform_device.h>
#include <linux/usb/phy.h>
#include <linux/slab.h>
#include <linux/acpi.h>
#include <linux/version.h>

#include <rtk_kdriver/usb/xhci.h>
#include "xhci-plat.h"
/*#include "xhci-mvebu.h"*/
/*#include "xhci-rcar.h"*/

#include <rtk_kdriver/rtk_crt.h>
#include <rbus/usb3_top_reg.h> /* for U3 wrapper register define */
#include <rbus/efuse_reg.h>
#include "xhci-plat-config.h"

#define USB_PHY_DELAY    25

#ifdef CONFIG_RTK_KDRV_XHCI_SAVE_POWER_WHEN_NO_U3
#define POWER_SAVING_WORK_DELAY    10  /* in second */
#endif

static struct hc_driver __read_mostly xhci_plat_hc_driver;

static int xhci_plat_setup(struct usb_hcd *hcd);
static int xhci_plat_start(struct usb_hcd *hcd);

#ifdef CONFIG_USER_INITCALL_USB
static const struct xhci_driver_overrides xhci_plat_overrides = {
#else
static const struct xhci_driver_overrides xhci_plat_overrides __initconst = {
#endif
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
    .extra_priv_size = sizeof(struct xhci_plat_priv),
#else
    .extra_priv_size = sizeof(struct xhci_hcd) + sizeof(struct xhci_plat_priv),
#endif
    .reset = xhci_plat_setup,
    .start = xhci_plat_start,
};

static int tool_obj_en = 0;
#if 1 // TODO: Need to change these stuff
static unsigned long u3_port_recovery_cnt = 0;
#define USB_PORT_ERR_CHECK_TIME    200
#define BLACKDEV_TIMEOUT           5

#define U3PortVBusStatus()       0
#define U3PortVBusControl(on)    {}

// TODO: Need to use usb_prot structue to get this info ?
#define GET_U2_IDX_OF_U3_WITH_U2_PORT(xhci)   (xhci->num_usb2_ports - 1)

static int is_u3_port_hs_mode(struct xhci_hcd *xhci)
{
    unsigned int u2_portsc, u3_portsc;

    u2_portsc = readl(xhci->usb2_ports[GET_U2_IDX_OF_U3_WITH_U2_PORT(xhci)]);
    u3_portsc = readl(xhci->usb3_ports[0]);

    return ((u2_portsc & (PORT_CONNECT | PORT_PE)) && !(u3_portsc & (PORT_CONNECT | PORT_PE)));
}

static void U3PortVBusToggle(struct xhci_hcd *xhci)
{
    if (!is_u3_port_hs_mode(xhci)) {
        U3PortVBusControl(0);
        mdelay(50);
        U3PortVBusControl(1);
    }
}
#endif

static void xhci_priv_plat_start(struct usb_hcd *hcd)
{
    struct xhci_plat_priv *priv = hcd_to_xhci_priv(hcd);

    if (priv->plat_start)
        priv->plat_start(hcd);
}

static int __maybe_unused xhci_priv_init_quirk(struct usb_hcd *hcd)
{
    struct xhci_plat_priv *priv = hcd_to_xhci_priv(hcd);

    if (!priv->init_quirk)
        return 0;

    return priv->init_quirk(hcd);
}

static int xhci_priv_resume_quirk(struct usb_hcd *hcd)
{
    struct xhci_plat_priv *priv = hcd_to_xhci_priv(hcd);

    if (!priv->resume_quirk)
        return 0;

    return priv->resume_quirk(hcd);
}

static void xhci_plat_quirks(struct device *dev, struct xhci_hcd *xhci)
{
    /*
     * As of now platform drivers don't provide MSI support so we ensure
     * here that the generic code does not try to make a pci_dev from our
     * dev struct in order to setup MSI
     */
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
    xhci->quirks |= XHCI_PLAT;
#else
    xhci->quirks |= XHCI_BROKEN_MSI;
#endif
}

/* called during probe() after chip reset completes */
static int xhci_plat_setup(struct usb_hcd *hcd)
{
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
    int ret;


    ret = xhci_priv_init_quirk(hcd);
    if (ret)
        return ret;
#endif

    return xhci_gen_setup(hcd, xhci_plat_quirks);
}

static int xhci_plat_start(struct usb_hcd *hcd)
{
    xhci_priv_plat_start(hcd);
    return xhci_run(hcd);
}

#ifdef CONFIG_OF
#if 0
static const struct xhci_plat_priv xhci_plat_marvell_armada = {
    .init_quirk = xhci_mvebu_mbus_init_quirk,
};

static const struct xhci_plat_priv xhci_plat_renesas_rcar_gen2 = {
    .firmware_name = XHCI_RCAR_FIRMWARE_NAME_V1,
    .init_quirk = xhci_rcar_init_quirk,
    .plat_start = xhci_rcar_start,
    .resume_quirk = xhci_rcar_resume_quirk,
};

static const struct xhci_plat_priv xhci_plat_renesas_rcar_gen3 = {
    .init_quirk = xhci_rcar_init_quirk,
    .plat_start = xhci_rcar_start,
    .resume_quirk = xhci_rcar_resume_quirk,
};
#endif

static const struct of_device_id usb_xhci_of_match[] = {
    {
        .compatible = "generic-xhci",
    }, {
        .compatible = "xhci-platform",
    }, {
        .compatible = "rtk,xhci-top",
    }, {
        /*
         * (Temporarily workaround)
         * Due to of_node's compatible and type will disappear after booting from snapshot image.
         * To promise driver could match device, we add external one that matches via "name" only.
         */
        .name = "xhci_top",
    }, {
#if 0
        .compatible = "marvell,armada-375-xhci",
        .data = &xhci_plat_marvell_armada,
    }, {
        .compatible = "marvell,armada-380-xhci",
        .data = &xhci_plat_marvell_armada,
    }, {
        .compatible = "renesas,xhci-r8a7790",
        .data = &xhci_plat_renesas_rcar_gen2,
    }, {
        .compatible = "renesas,xhci-r8a7791",
        .data = &xhci_plat_renesas_rcar_gen2,
    }, {
        .compatible = "renesas,xhci-r8a7793",
        .data = &xhci_plat_renesas_rcar_gen2,
    }, {
        .compatible = "renesas,xhci-r8a7795",
        .data = &xhci_plat_renesas_rcar_gen3,
    }, {
        .compatible = "renesas,xhci-r8a7796",
        .data = &xhci_plat_renesas_rcar_gen3,
    }, {
        .compatible = "renesas,rcar-gen2-xhci",
        .data = &xhci_plat_renesas_rcar_gen2,
    }, {
        .compatible = "renesas,rcar-gen3-xhci",
        .data = &xhci_plat_renesas_rcar_gen3,
#endif
    },
    {},
};
MODULE_DEVICE_TABLE(of, usb_xhci_of_match);
#endif



/*-----------------------------------------------
 * Func : _get_xhci_usb2_phy
 *
 * Desc : read usb2 phy register with UTMI
 *
 * Parm : port1     : port index (1~4)
 *        phy_reg   : phy register address
 *
 * Retn : others : phy register value
 *        -1 : failed
 *-----------------------------------------------*/
static int _get_xhci_usb2_phy(struct xhci_hcd *xhci, int port1, int phy_reg)
{
    int phy_value;
    struct xhci_global_regs __iomem *global_regs = xhci_to_xhci_priv(xhci)->global_regs;

    if (port1 > U2_PHY_CONFIG_COUNT || port1 < 1) {
        xhci_plat_warn(xhci, "get_usb2_phy failed, invalid port - %d\n", port1);
        return -ENODEV;
    }

    if (phy_reg < 0xe0 || phy_reg > 0xf7) {
        xhci_plat_warn(xhci, "get_usb2_phy failed, invalid phy_reg 0x%x\n", phy_reg);
        return -ENXIO;
    }

    do {
        writel(0x02000000 | (phy_reg & 0x0f) << 8, &global_regs->gusb2phyacc[port1 - 1]);
        udelay(USB_PHY_DELAY);

        writel(0x02000000 | (phy_reg & 0xd0) << 4, &global_regs->gusb2phyacc[port1 - 1]);
        udelay(USB_PHY_DELAY);

        phy_value = readl(&global_regs->gusb2phyacc[port1 - 1]);

    } while (!IS_VSTS_DONE(phy_value)); /* VstsDone bit = 1 promise PHY register access has completed */

    return (phy_value & 0xff);
}



/*-----------------------------------------------
 * Func : _set_xhci_usb2_phy
 *
 * Desc : set usb2 phy register with UTMI
 *
 * Parm : port1     : port index
 *        phy_reg   : phy register address
 *        phy_value : phy register value
 *
 * Retn : 0 : successed,
 *       -1 : failed
 *-----------------------------------------------*/
static int _set_xhci_usb2_phy(struct xhci_hcd *xhci, int port1, int phy_reg, int phy_value)
{
    int value = 0;
    struct xhci_global_regs __iomem *global_regs = xhci_to_xhci_priv(xhci)->global_regs;

    if (port1 > U2_PHY_CONFIG_COUNT || port1 < 1) {
        xhci_plat_warn(xhci, "%s failed, invalid port - %d\n", __func__, port1);
        return -ENODEV;
    }

    if (phy_reg < 0xe0 || phy_reg > 0xf7) {
        xhci_plat_warn(xhci, "%s failed, invalid phy_reg 0x%x\n", __func__, phy_reg);
        return -ENXIO;
    }

    do {
        // write value
        rtd_outl(USB3_TOP_VSTATUS0_OUT_reg, phy_value << ((port1 - 1) * 8));
        udelay(USB_PHY_DELAY);

        writel(0x02000000 | (phy_reg & 0x0f) << 8, &global_regs->gusb2phyacc[port1 - 1]);
        udelay(USB_PHY_DELAY);

        writel(0x02000000 | (phy_reg & 0xf0) << 4, &global_regs->gusb2phyacc[port1 - 1]);
        udelay(USB_PHY_DELAY);

    } while (!IS_VSTS_DONE(readl(&global_regs->gusb2phyacc[port1 - 1]))); /* VstsDone bit = 1 promise PHY register access has completed */

    value = _get_xhci_usb2_phy(xhci, port1, phy_reg);
    if (value < 0)
        return value;

    if ((phy_value & 0xff) != value)
        xhci_plat_warn(xhci, "set_usb2_phy, port %d phy_reg 0x%.2x set 0x%x get 0x%x <--- not matched\n",
                port1, phy_reg, phy_value & 0xff, value);
    else
        xhci_plat_dbg(xhci, "set_usb2_phy, port %d phy_reg 0x%.2x set 0x%x get 0x%x\n",
                port1, phy_reg, phy_value & 0xff, value);

    return 0;
}

int set_xhci_usb2_phy_reg(struct xhci_hcd *xhci, unsigned char phy, unsigned char page, unsigned char addr, unsigned char val)
{
    int ret = 0;

    if (page > 3)
    {
        xhci_plat_warn(xhci, "%s failed, invalid page - %d\n", __func__, page);
        return -ENXIO;
    }

    ret = _set_xhci_usb2_phy(xhci, phy, 0xF4, (page << 5) | 0x9b); // bit [6:5] : page select = page
    if (ret)
        return ret;

    return _set_xhci_usb2_phy(xhci, phy, addr, val);
}

int get_xhci_usb2_phy_reg(struct xhci_hcd *xhci, unsigned char phy, unsigned char page, unsigned char addr)
{
    int ret = 0;

    if (page > 3)
    {
        xhci_plat_warn(xhci, "%s failed, invalid page - %d\n", __func__, page);
        return -ENXIO;
    }

    ret = _set_xhci_usb2_phy(xhci, phy, 0xF4, (page<<5) | 0x9b);  // bit [6:5] : page select = page
    if (ret)
        return ret;

    return _get_xhci_usb2_phy(xhci, phy, addr);
}


/*-----------------------------------------------
 * Func : _usb2_load_phy_setting
 *
 * Desc : load usb2 phy setting
 *
 * Parm : port1 : port index (1~4)
 *        p_reg : register list
 *        n_reg : register value
 *
 * Retn : N/A
 *-----------------------------------------------*/
static int _usb2_load_phy_setting(
        struct xhci_hcd      *xhci,
        U2_PHY_REGISTER*    p_reg,
        unsigned int        n_reg
        )
{
    int err = 0;
    while (n_reg--)
    {
        err = _set_xhci_usb2_phy(xhci, p_reg->port1,  p_reg->addr, p_reg->val);
        if (err)
            break;
        p_reg++;
    }

    return err;
}


static int xhci_usb_mac_init(struct platform_device *pdev)
{
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    struct xhci_global_regs __iomem *global_regs = hcd_to_xhci_priv(hcd)->global_regs;

    xhci_plat_info(xhci, "--------- %s start ------------ \n", __func__);

    // UTMI reset
    rtd_outl(USB3_TOP_USB2_PHY_UTMI_reg,
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p1(1) |
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p0(1));

    // UTMI release
    rtd_outl(USB3_TOP_USB2_PHY_UTMI_reg,
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p1(0) |
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p0(0));

    // PHY ignores suspend signal and always keep UTMI clock active
    rtd_setbits(USB3_TOP_USB_TMP_1_reg, USB3_TOP_USB_TMP_1_test_reg_1(1));

    // Marked in Merlin5 flow
#if 0
    // disable Dbus Multi-request. Do not mark this!!!
    xhci_plat_dbg(xhci, "disable multi request, bit[1]\n");
    rtd_outl(USB3_TOP_WRAP_CTR_reg , rtd_inl(USB3_TOP_WRAP_CTR_reg) | (0x1 << 1));

    // UTMI reset
    rtd_outl(USB3_TOP_USB2_PHY_UTMI_reg,
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p1(1) |
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p0(1));
    udelay(USB_PHY_DELAY);

    // UTMI release reset
    rtd_outl(USB3_TOP_USB2_PHY_UTMI_reg,
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p1(0) |
            USB3_TOP_USB2_PHY_UTMI_reset_utmi_p0(0));
    udelay(USB_PHY_DELAY);

    // USB3.0 avoid no UTMI clock
    rtd_outl(USB3_TOP_USB_TMP_1_reg,
            USB3_TOP_USB_TMP_1_test_reg_1(1));
    udelay(USB_PHY_DELAY);
#endif

    // usb 3.0 p3 mode -> p2 mode
    writel(0x010C0002, &global_regs->gusb3pipectl[0]); //P3 mode->p2 mode

    xhci_plat_info(xhci, "--------- %s finish ------------ \n", __func__);
    return 0;
}

static void control_vbus_power_by_gpio(unsigned long long pin, bool on)
{
#if 0
    unsigned int pin_type, gpio_num, gpio_type;
    RTK_GPIO_ID gid;

    pin_type = GET_PIN_TYPE(pin);
    gpio_num = GET_PIN_INDEX(pin);

    switch (pin_type) {
    case PCB_PIN_TYPE_GPIO:
        gpio_type = GET_GPIO_TYPE(pin);
        break;
    default:
        gpio_type = PCB_PIN_TYPE_UNUSED;
    }

    if (gpio_type) {
        gid = rtk_gpio_id(gpio_type, gpio_num);
        rtk_gpio_output(gid, on);
        rtk_gpio_set_dir(gid, 1);  // set gpio to output mode
    }
#endif
}

static void enable_vbus_power(void)
{
    u64 pin_usb_power_ctrl2, pin_usb_power_ctrl3;

    if (!pcb_mgr_get_enum_info_byname("PIN_USB_POWER_CTRL2", &pin_usb_power_ctrl2))
        control_vbus_power_by_gpio(pin_usb_power_ctrl2, 1);

    if (!pcb_mgr_get_enum_info_byname("PIN_USB_POWER_CTRL3", &pin_usb_power_ctrl3))
        control_vbus_power_by_gpio(pin_usb_power_ctrl3, 1);
}


static int xhci_usb_mac_postinit(struct platform_device *pdev)
{
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    struct xhci_global_regs __iomem *global_regs = hcd_to_xhci_priv(hcd)->global_regs;

    ////////////let usb 3.0 R Term turn on////////////
    //Rxterm_force_en=1
    rtd_outl(USB3_TOP_USB_TMP_2_reg, USB3_TOP_USB_TMP_2_usb3_rxterm_force_en(1) |
                                    USB3_TOP_USB_TMP_2_usb3_eco_option1(1));
    writel(0x010e0002, &global_regs->gusb3pipectl[0]); //P3 mode->p2 mode

    xhci_plat_info(xhci, "current mode: %s \n",
            readl(&global_regs->gusb3pipectl[0]) & BIT(17) ? "p3" : "p2");

    return 0;
}


//-----------------------------------------------------------------
// MDIO API : function below is used for USB3.0 Phy register access
//-----------------------------------------------------------------
/*-----------------------------------------------
 * Func : mdio_write
 *
 * Desc : write mdio
 *
 * Parm : phy_addr : phy register
 *        reg_addr : register addr
 *        val : mdio control value
 *
 * Retn : N/A
 *-----------------------------------------------*/
void mdio_write(
        unsigned char           phy_addr,
        unsigned char           reg_addr,
        unsigned short          val
        )
{
    pr_debug("mdio_wr(pg_%d, reg_%02x)=0x%04x\n", phy_addr, reg_addr, val);

    rtd_outl(USB3_TOP_MDIO_CTR_reg, USB3_TOP_MDIO_CTR_data(val) |
            USB3_TOP_MDIO_CTR_phy_addr(phy_addr) |
            USB3_TOP_MDIO_CTR_phy_reg_addr(reg_addr) |
            USB3_TOP_MDIO_CTR_mclk_rate(3) |      // clk_sys/4
            USB3_TOP_MDIO_CTR_mdio_rdwr(1));

    do {
        udelay(USB_PHY_DELAY);
    } while ((rtd_inl(USB3_TOP_MDIO_CTR_reg) & USB3_TOP_MDIO_CTR_mdio_busy_mask)); // wait busy done
}


/*-----------------------------------------------
 * Func : mdio_read
 *
 * Desc : read mdio
 *
 * Parm : phy_addr : phy register
 *        reg_addr : register addr
 *        val : mdio control value
 *
 * Retn : read value
 *-----------------------------------------------*/
unsigned short mdio_read(
        unsigned char       phy_addr,
        unsigned char       reg_addr
        )
{
    unsigned long ctrl = USB3_TOP_MDIO_CTR_phy_addr(phy_addr) |
        USB3_TOP_MDIO_CTR_phy_reg_addr(reg_addr) |
        USB3_TOP_MDIO_CTR_mclk_rate(3) |
        USB3_TOP_MDIO_CTR_mdio_rdwr(0);

    //pr_debug("mdio_ctrl=%08lx\n", ctrl);
    rtd_outl(USB3_TOP_MDIO_CTR_reg, ctrl);
    do {
        udelay(USB_PHY_DELAY);
    } while((rtd_inl(USB3_TOP_MDIO_CTR_reg) & USB3_TOP_MDIO_CTR_mdio_busy_mask)); // wait busy done
    return rtd_inl(USB3_TOP_MDIO_CTR_reg) >> 16;
}


static int xhci_usb3_phy_init(struct platform_device *pdev)
{
    int i;
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);

    xhci_plat_info(xhci, "--------------- [%s] start ---------------\n", __func__);

    rtd_outl(USB3_TOP_USB3_PHY_PIPE_reg, USB3_TOP_USB3_PHY_PIPE_reset_pipe3_p0(1));  // pipe reset u3 phy
    udelay(400);

    for (i = 0; i < U3_PHY_SETTING_SIZE; i++) {
        mdio_write(xhci_u3_phy_config[i].page,
                xhci_u3_phy_config[i].reg,
                xhci_u3_phy_config[i].val);
    }
    rtd_outl(USB3_TOP_USB3_PHY_PIPE_reg,
            USB3_TOP_USB3_PHY_PIPE_reset_pipe3_p0(0));  // pipe release u3 phy
    udelay(400);

    // Toggle. DC CALIBARION  "1 --> 0 --> 1". will do one time of calibration
    mdio_write(0x0, 0x09, 0x925c);
    mdio_write(0x0, 0x09, 0x505c);
    mdio_write(0x0, 0x09, 0x925c);

    // USB3_ANA_PHY open
    rtd_outl(USB3_TOP_ANA_PHY0_reg, USB3_TOP_ANA_PHY0_usb3_mbias_en_p0(1) |
                                    USB3_TOP_ANA_PHY0_usb3_bg_en_p0(1) |
                                    USB3_TOP_ANA_PHY0_usb3_pow_gating_p0(1));
    udelay(400);

    //u3Rxterm_force_val=0,//Rxterm_force_en=0
    rtd_outl(USB3_TOP_USB_TMP_2_reg,
            USB3_TOP_USB_TMP_2_usb3_eco_option1(1));

    xhci_plat_info(xhci, "--------------- [%s] complete ---------------\n", __func__);
    return 0;
}


static int xhci_usb2_phy_init(struct platform_device *pdev)
{
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);

    return _usb2_load_phy_setting(xhci, u2_phy_config.p_reg_table, u2_phy_config.n_reg);
}


#if 1
static int xhci_usb2_set_squelch_from_otp(struct platform_device *pdev)
{
#define GET_PORT_OFFSET(port)              (16 + (port * 4))
#define GET_PORT_OTP_VAL(val, port)        ((val & (0xf << GET_PORT_OFFSET(port))) >> GET_PORT_OFFSET(port))
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    int portnum = 0, ret = 0;
    unsigned int squelch_otp = rtd_inl(EFUSE_DATAO_181_reg);
    bool done = !!(rtd_inl(EFUSE_DATAO_182_reg) & 0x2);
    unsigned int val;

    xhci_plat_info(xhci, "squelch_otp=0x%x, \n", squelch_otp);

    // 0x180382d4: [23:20]=port2, [19:16]=port1; 0x180382d8[1]=done
    if (done) {
        for (portnum = 0; portnum < U2_PHY_CONFIG_COUNT; portnum++) {
            val = get_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe7);
            val = (val & ~0xf0) | (GET_PORT_OTP_VAL(squelch_otp, portnum) << 4);
            ret = set_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe7, val);
            if (ret)
                goto out;
            xhci_plat_info(xhci, "set port(%d) squelch level to 0x%x \n",
                    (portnum + 1),
                    (get_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe7) & 0xf0) >> 4);
        }
    }

out:
    return ret;
#undef GET_PORT_OFFSET
#undef GET_PORT_OTP_VAL
}
#else
#define xhci_usb2_set_squelch_from_otp(pdev) 0
#endif


#if 1
static int xhci_usb2_set_disconnect_from_otp(struct platform_device *pdev)
{
#define GET_PORT_OFFSET(port)              (0 + (port * 4))
#define GET_PORT_OTP_VAL(val, port)        ((val & (0xf << GET_PORT_OFFSET(port))) >> GET_PORT_OFFSET(port))
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    int portnum = 0, ret = 0;
    unsigned int disconnect_otp = rtd_inl(EFUSE_DATAO_181_reg);
    bool done = !!(rtd_inl(EFUSE_DATAO_182_reg) & 0x1);
    unsigned int val;

    xhci_plat_info(xhci, "disconnect_otp=0x%x\n", disconnect_otp);

    // 0x180382d4: [7:3]=port2, [3:0]=port1; 0x180382d8[0]=done
    if (done) {
        for (portnum = 0; portnum < U2_PHY_CONFIG_COUNT; portnum++) {
            val = get_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe4);
            val = (val & ~0xf0) | (GET_PORT_OTP_VAL(disconnect_otp, portnum) << 4);
            ret = set_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe4, val);
            if (ret)
                goto out;
            xhci_plat_info(xhci, "set port(%d) disconect level to 0x%x \n",
                    (portnum + 1),
                    (get_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe4) & 0xf0) >> 4);
        }
    }

out:
    return ret;
#undef GET_PORT_OFFSET
#undef GET_PORT_OTP_VAL
}
#else
#define xhci_usb2_set_disconnect_from_otp(pdev)  0
#endif


static inline int xhci_usb2_set_phy_from_otp(struct platform_device *pdev)
{
    return (xhci_usb2_set_disconnect_from_otp(pdev) ||
            xhci_usb2_set_squelch_from_otp(pdev));
}

static inline int xhci_usb2_set_swing(struct platform_device *pdev, unsigned int swing_val)
{
    struct usb_hcd *hcd = platform_get_drvdata(pdev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    int portnum = 0, error;
    unsigned int val;
    for (portnum = 0; portnum < U2_PHY_CONFIG_COUNT; portnum++) {
        val = get_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe4);
        val &= ~0x0f;
        val |= (swing_val & 0x0f);
        error = set_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe4, val);
        if (error)
            goto out;
        xhci_plat_info(xhci, "set port(%d) swing value (0x%x) from TOOL_OBJ \n",
                    (portnum + 1),(get_xhci_usb2_phy_reg(xhci, portnum + 1, 0, 0xe4) & 0x0f));
    }

out:
    return error;
}

const char* xhci_crc_error_src(unsigned char id) {
    switch (id) {
    case CRC_SRC_NONE:  return "none";
    case CRC_SRC_U3_PORT:  return "U3 Port";
    case CRC_SRC_U2_PORT0: return "U2 Port0";
    case CRC_SRC_U2_PORT1: return "U2 Port1";
    case CRC_SRC_U2_PORT2: return "U2 Port2";
    default:
        return "Unknonw";
    }
}


int _xhci_get_port_status_str(struct xhci_hcd *xhci, char* ptr, size_t count)
{
    unsigned int val;
    int n = 0, i = 0;
    int len = 0, len_u2 = 0, len_u3 = 0;
    char *u2_portsc, *u3_portsc, *u2_portsc_str, *u3_portsc_str;
    size_t size_u2, size_u3, size_u2_str, size_u3_str;

    size_u2 = sizeof(*u2_portsc) * count / 4;
    u2_portsc = kzalloc(size_u2, GFP_ATOMIC);
    if (!u2_portsc)
        return -ENOMEM;

    size_u3 = sizeof(*u3_portsc) * count / 4;
    u3_portsc = kzalloc(size_u3, GFP_ATOMIC);
    if (!u3_portsc) {
        len = -ENOMEM;
        goto free_allocated_1;
    }

    size_u2_str = sizeof(*u2_portsc_str) * count / 2;
    u2_portsc_str = kzalloc(size_u2_str, GFP_ATOMIC);
    if (!u2_portsc_str) {
        len = -ENOMEM;
        goto free_allocated_2;
    }

    size_u3_str = sizeof(*u3_portsc_str) * count / 2;
    u3_portsc_str = kzalloc(size_u3_str, GFP_ATOMIC);
    if (!u3_portsc_str) {
        len = -ENOMEM;
        goto free_allocated_3;
    }

    for (i = 0; i < xhci->num_usb2_ports; i++) {
        n = scnprintf(u2_portsc, size_u2,
                (i == xhci->num_usb2_ports - 1) ? "Port%d{STS=%x,Link=%04x}" : "Port%d{STS=%x,Link=%04x}, ",
                i + 1,
                readl(xhci->usb2_ports[i]),
                readl(&xhci->op_regs->port_link_base + NUM_PORT_REGS * i));
        u2_portsc += n;
        len_u2 += n;
        size_u2 -= n;
    }
    u2_portsc -= len_u2; /* Go back to start address */
    n = scnprintf(u2_portsc_str, size_u2_str, "U2 %s", u2_portsc);

    for (i = 0; i < xhci->num_usb3_ports; i++) {
        n = scnprintf(u3_portsc, size_u3, "Port%d{STS=%x,Link=%04x}",
                i + 1,
                readl(xhci->usb3_ports[i]),
                readl(&xhci->op_regs->port_link_base + NUM_PORT_REGS * (xhci->num_usb2_ports + i)));
        u3_portsc += n;
        len_u3 += n;
        size_u3 -= n;
    }
    u3_portsc -= len_u3; /* Go back to start address */
    n = scnprintf(u3_portsc_str, size_u3_str, "U3 %s", u3_portsc);

    if (xhci->num_usb3_ports) {
        n = scnprintf(ptr, count, "[XHCI] CMD=%03x, STS=%04x, %s, %s, PWR=%d, Recovery=%lu}, irq_cnt=%llu\n",
                readl(&xhci->op_regs->command), readl(&xhci->op_regs->status),
                u2_portsc_str, u3_portsc_str,
                U3PortVBusStatus(),
                u3_port_recovery_cnt,
                xhci->irq_count);
    } else {
        n = scnprintf(ptr, count, "[XHCI] CMD=%03x, STS=%04x, %s, irq_cnt=%llu\n",
                readl(&xhci->op_regs->command), readl(&xhci->op_regs->status),
                u2_portsc_str,
                xhci->irq_count);
    }
    ptr += n;
    len += n;
    count -= n;

    /* CRC */
    val = rtd_inl(USB3_TOP_CRC_CNT_1_reg);
    if (USB3_TOP_CRC_CNT_1_get_crc_cnt_en(val)) {
        n = scnprintf(ptr, count, "[XHCI] CRC_CNT_1=(%08x) { SRC=%s, ERR=%u, Total=%u }\n",
                val,
                xhci_crc_error_src(USB3_TOP_CRC_CNT_1_get_crc_cnt_sel(val)),
                USB3_TOP_CRC_CNT_1_get_crc_err_cnt(val),
                rtd_inl(USB3_TOP_CRC_CNT_2_reg));

        ptr   += n;
        count -= n;
        len += n;
    }

    kfree(u3_portsc_str);
free_allocated_3:
    kfree(u2_portsc_str);
free_allocated_2:
    kfree(u3_portsc);
free_allocated_1:
    kfree(u2_portsc);

    return len;
}

void dump_port_status_ex(struct xhci_hcd *xhci, unsigned char warn)
{
    char *buff;
    size_t size = sizeof(*buff) * 1024;

    buff = kzalloc(size, GFP_ATOMIC);
    if (!buff) {
        xhci_plat_err(xhci, "alloc buff fail. out of memory \n");
        return;
    }

    _xhci_get_port_status_str(xhci, buff, size);

    if (warn)
        xhci_plat_warn(xhci, "%s", buff);
    else
        xhci_plat_dbg(xhci, "%s", buff);

    kfree(buff);
}

#define dump_port_status(xhci)      dump_port_status_ex(xhci, 0)

#if 1 // TODO: Need to change these stuff start
static void xhci_reset_u3_port(struct xhci_hcd *xhci)
{
    unsigned int u2_portsc, u3_portsc;
    int idx = GET_U2_IDX_OF_U3_WITH_U2_PORT(xhci);

    xhci_plat_info(xhci, "xhci_reset_u3_port, (U3 Port HS mode=%d)\n", is_u3_port_hs_mode(xhci));

    if(!is_u3_port_hs_mode(xhci))
        U3PortVBusControl(0);

    u3_portsc = readl(xhci->usb3_ports[0]);
    writel((u3_portsc & ~PORT_POWER), xhci->usb3_ports[0]);
    /* In merlin3, the last U2 port is companied with U3 port. (same connector) */
    u2_portsc = readl(xhci->usb2_ports[idx]);
    writel((u2_portsc & ~PORT_POWER), xhci->usb2_ports[idx]);
    udelay(10);

    u3_portsc = readl(xhci->usb3_ports[0]);
    writel(u3_portsc | PORT_POWER | PORT_CSC, xhci->usb3_ports[0]); // set port power and clear CSC
    u2_portsc = readl(xhci->usb2_ports[idx]);
    writel(u2_portsc | PORT_POWER | PORT_CSC, xhci->usb2_ports[idx]); // set port power and clear CSC
    mdelay(50);

    xhci_plat_info(xhci, "xhci_reset_u3_port, reset U3/U2 port (U3 Status=%08X, U2 Status=%08X)\n",
            readl(xhci->usb3_ports[0]),
            readl(xhci->usb2_ports[idx]));

    if(!is_u3_port_hs_mode(xhci))
        U3PortVBusControl(1);

    dump_port_status_ex(xhci, 1);
}
#endif

#if 1 // TODO: Need to change these stuff start
// TODO: Need to get info from usb_port ?
extern int usb3_device_plugin;
extern bool is_usb3_on(void);
static void __maybe_unused xhci_hub_polling_check(unsigned long data)
{
    struct xhci_hcd *xhci = (struct xhci_hcd *)data;
    struct xhci_plat_priv *priv = xhci_to_xhci_priv(xhci);
    unsigned int u2_portsc, u3_portsc;
    unsigned int polling_interval = USB_HUB_CHECK_TIME;
    unsigned int idx_of_u3_companied_u2 = GET_U2_IDX_OF_U3_WITH_U2_PORT(xhci);
    struct xhci_global_regs __iomem *global_regs = xhci_to_xhci_priv(xhci)->global_regs;
    int i = 0;

    if (!is_usb3_on() ||
        priv->polling_check_suspend ||
        priv->polling_check_running ||
        (priv->debug_ctrl_flag & NO_HUB_POLLING_CHECK) ||
        priv->disable_polling_check)
        return;

    if (is_u3_port_hs_mode(xhci)) {
        priv->black_device_count++;
        if (priv->black_device_count > BLACKDEV_TIMEOUT) {
            rtd_clearbits(USB3_TOP_USB_TMP_0_reg,(0x1 << 8));
            priv->black_device_count = 0;
        }
        goto restart_timer;
    }

    priv->polling_check_running = true;

    if (priv->u3_delayed_vbus_on) {
        U3PortVBusControl(1);
        priv->u3_delayed_vbus_on = 0;
    }

    dump_port_status(xhci);

    if (xhci->num_usb3_ports == 0 || (priv->debug_ctrl_flag & NO_U3_PORT_AUTO_RECOVER))   // skip auto recover
        goto restart_timer;

#if 1
    /*------------- check U3 Port --------------------
      In K2L, the U3 port is connected to both an U3
      phy and an U2 Phy (Port 2).

      The status below is the normal case
      1) disconnected : U3 = 2A0, U2 = 2A0
      2) SS device connected : U3 = 1203, U2 = 2A0
      3) HS device connected : U3 =  2A0, U2 = e03
      4) HS device connected : U3 =  2A0, U2 = 603
      5) U3 hub connected    : U3 = 1203, U2 = e03

      However, there is some special case the need to be handled
      6) U3 port disabled    : U3 = 290 (PLS=SS.Disabled), U2 is connected
      Might caused by U3 unexceptly disconnection.
      The HC uses U2 to reconnect it automatically.

      that also can be divided into 2 case
      a) U2 is not disabled (PE=1)
      In this case, the U2 work normally.
      We have nothing to do .

      b) U2 is disabled (PLS=0x7 Disabled)
      In this case, the U2 is abnormal too
      we need to fix it by toggling the VBus.

      7) U3 port is in SS.Inactive. We do Warm Port Reset to enter RxDetect
      -------------------------------------------------*/
    // case 6: U3 Port is disabled for some reason (except we use debug_control interface to disable U3. "no_u3_super_speed_port=1")
    u3_portsc = readl(xhci->usb3_ports[0]);
    if (((u3_portsc & PORT_PLS_MASK) == XDEV_DISABLED) && !(priv->debug_ctrl_flag & NO_U3_SUPER_SPEED_PORT)) {
        writel(u3_portsc & ~PORT_POWER, xhci->usb3_ports[0]);
        writel(readl(xhci->usb3_ports[0]) | PORT_POWER, xhci->usb3_ports[0]);

        xhci_plat_warn(xhci, "%s : u3 port disabled, toogle port_power, state (%08x -> %08x), cnt=%lu\n",
                __FUNCTION__,
                u3_portsc,
                readl(xhci->usb3_ports[0]),
                u3_port_recovery_cnt);
        u3_port_recovery_cnt++;
    }

    // case 6-b : device detected by U2 port 2, but u2 port 2 is in disabled state
    //          and the U3 port has no device detected
    //          (that means the U3 port is routed to U2 phy,
    if (((readl(xhci->usb3_ports[0]) & (PORT_CONNECT|PORT_PE)) == 0) &&
            ((readl(xhci->usb2_ports[idx_of_u3_companied_u2]) & PORT_PLS_MASK) == XDEV_POLLING) &&   // Port 2 enter disable state
            ((readl(xhci->usb2_ports[idx_of_u3_companied_u2]) & PORT_CONNECT) == PORT_CONNECT)) {
        priv->u3_port_reset_hang++;
        polling_interval = USB_PORT_ERR_CHECK_TIME;

        dump_port_status_ex(xhci, 1);

        xhci_plat_warn(xhci, "%s : u3 port reset hanged=%u, U3PORT=%08x, U2PORT=%08x\n",
                __FUNCTION__, priv->u3_port_reset_hang, readl(xhci->usb3_ports[0]), readl(xhci->usb2_ports[idx_of_u3_companied_u2]));

        if (priv->u3_port_reset_hang >= (1500/polling_interval)) {
            priv->u3_port_reset_hang_count++;
            u3_port_recovery_cnt++;

            xhci_plat_warn(xhci, "%s : u3 port reset hanged count=%d, do Vbus toogle\n",
                    __FUNCTION__, priv->u3_port_reset_hang_count);

            xhci_reset_u3_port(xhci);
            priv->u3_port_reset_hang = 0;
        }
    }
    // case 7: U3 port is in SS.Inactive. We do Warm Port Reset to enter RxDetect
    else if (((readl(xhci->usb3_ports[0]) & PORT_PLS_MASK)) == XDEV_INACTIVE)
    {
        u3_portsc = readl(xhci->usb3_ports[0]);
        priv->u3_port_reset_hang++;
        polling_interval = USB_PORT_ERR_CHECK_TIME;

        dump_port_status_ex(xhci, 1);

        xhci_plat_warn(xhci, "%s : u3 port reset hanged=%u, U3PORT=%08X \n",
                __FUNCTION__, priv->u3_port_reset_hang, u3_portsc);
        if (priv->u3_port_reset_hang >= (1500/polling_interval)) {
            priv->u3_port_reset_hang_count++;
            u3_port_recovery_cnt++;

            xhci_plat_warn(xhci, "%s : u3 port reset hanged count=%d, U3 is in Inactive, do Warm Port Reset\n",
                    __FUNCTION__, priv->u3_port_reset_hang_count);

            writel(u3_portsc | PORT_WR, xhci->usb3_ports[0]);  // Issue a Warm Port Reset

            priv->u3_port_reset_hang = 0;
        }
    }
    else
        priv->u3_port_reset_hang = 0;

#endif
    /*------------- check U3 connection status --------------------
      The b8058164 [10:9] (GDBGLTSSM[10:9] refs to DWC_USB3 spec) is another way to detect the U3 device connection
      This value will be 0 if HW detected the U3 signal.
      --------------------------------------------------------------*/
    if ((readl(&global_regs->gdbgltssm) & (0x3 << 9)) == (0 << 9)) { //check usb3 device plug in connector

        //--------------------------------------------------------------------------
        // U3 device is not detected by the Hub driver.
        // but the U3 port status is under one of the following condition
        // PLS = PORTSC[5:8]
        //   0x1203 : PLS = 0x00 (U0)
        //   0x340  : PLS = 0x10 (compliance test mode)
        //   0x300  : PLS = 0x08 (U3 Recovery mode)
        //--------------------------------------------------------------------------
        u3_portsc = readl(xhci->usb3_ports[0]);

        if (((u3_portsc == 0x1203) ||   // Connected correctly
                    (u3_portsc == 0x340)  ||   // compliance test mode
                    (u3_portsc == 0x300)) &&   // U3 Recovery mode
                    (usb3_device_plugin == 0))
        {
            priv->u3_port_count++;

            polling_interval = USB_PORT_ERR_CHECK_TIME; // change to smaller polling interval

            if (priv->u3_port_count >= (2000/polling_interval)) {
                dump_port_status_ex(xhci, 1);
                xhci_plat_warn(xhci, "usb3_device_plugin=%d U3PortCnt=%d portstatus=%#x\n", usb3_device_plugin, priv->u3_port_count, u3_portsc);
                switch (u3_portsc) {
                    case 0x340 : // exit compliance test mode
                    case 0x1203 :
                        writel(u3_portsc & ~PORT_POWER, xhci->usb3_ports[0]);
                        u3_portsc = readl(xhci->usb3_ports[0]);
                        writel(u3_portsc | PORT_POWER, xhci->usb3_ports[0]);
                        U3PortVBusToggle(xhci);
                        break;
                    default :
                        U3PortVBusToggle(xhci);
                        break;
                }
                priv->u3_port_count = 0;
                xhci_plat_warn(xhci, "vbus reset device\n");
                goto restart_timer;
            }
        }

        //--------------------------------------------------------------------------
        // neither U3 nor U2 detected the device
        //--------------------------------------------------------------------------
        if (((readl(xhci->usb3_ports[0]) & PORT_PLS_MASK) == XDEV_POLLING) &&
                ((readl(xhci->usb2_ports[idx_of_u3_companied_u2]) & PORT_CONNECT) == 0))
        {
            xhci_plat_warn(xhci, "usb3_device_plugin=%d port_check_count=%d \n",
                    usb3_device_plugin, priv->port_check_count);

            ++priv->port_check_count;
            polling_interval = USB_PORT_ERR_CHECK_TIME; // change to smaller polling interval

            /*------------- check U3 connection status --------------------
              usb3_device_plugin is a global variable that defined in usb/core/hub.c
              that is used to ident2ify the system detected the U3 device on the Root Hub
              or not.
              --------------------------------------------------------------*/
            if (usb3_device_plugin)
            {
                if (priv->port_check_count >= (2000/polling_interval)) // toggle vbus after 3 sec
                {
                    mdio_write(0x1, 0x02, 0x0013);
                    U3PortVBusToggle(xhci);
                    priv->port_check_count = 0;
                    xhci_plat_warn(xhci, "vbus reset device1");
                }
            }
            else
            {
                if (priv->port_check_count >=(1500/polling_interval)) // toggle vbus after 2 sec
                {
                    mdio_write(0x1, 0x02, 0x0013);
                    xhci_plat_warn(xhci, "[before reset vbus] %p=%x, %p=%x\n",
                            xhci->usb3_ports[0],
                            readl(xhci->usb3_ports[0]),
                            xhci->usb2_ports[idx_of_u3_companied_u2],
                            readl(xhci->usb2_ports[idx_of_u3_companied_u2]));

                    U3PortVBusToggle(xhci);

                    priv->port_check_count = 0;
                    usb3_device_plugin = 0;
                    xhci_plat_warn(xhci, "vbus reset device\n");
                    xhci_plat_warn(xhci, "[after reset vbus] %p=%x, %p=%x",
                            xhci->usb3_ports[0],
                            readl(xhci->usb3_ports[0]),
                            xhci->usb2_ports[idx_of_u3_companied_u2],
                            readl(xhci->usb2_ports[idx_of_u3_companied_u2]));
                }
            }
        }
        else
            priv->port_check_count = 0;
    }
    else
        priv->port_check_count = 0;

    /*------------- check each U2 connection status --------------------
     * If U2 PORTSC.PLS equal to "ee1", we need to do port reset to recover
     --------------------------------------------------------------*/
    for (i = 0; i < xhci->num_usb2_ports; i++)
    {
        u2_portsc = readl(xhci->usb2_ports[i]);
        if ((u2_portsc & PORT_CONNECT) && !(u2_portsc & PORT_PE))
        {
            priv->u2_port_reset_hang++;
            if (priv->u2_port_reset_hang >= (1500/USB_PORT_ERR_CHECK_TIME))
            {
                writel(u2_portsc | PORT_RESET, xhci->usb2_ports[i]); /* Issue a port reset */
                priv->u2_port_reset_hang = 0;
                priv->u2_port_reset_hang_count++;
                xhci_plat_warn(xhci, "U2-%d portsc=0x%x, after port reset=0x%x. cnt=%d \n",
                        i + 1, u2_portsc,
                        readl(xhci->usb2_ports[i]), priv->u2_port_reset_hang_count);
            }
        }
    }

    restart_timer:
    priv->polling_check_running = 0;
    mod_timer(&priv->polling_check_timer, jiffies + msecs_to_jiffies(USB_HUB_CHECK_TIME));
}
#endif

// TODO: Need to change these stuff start
#if 0
static void hub_polling_check_timer_on(struct xhci_hcd *xhci, bool setup)
{
    struct xhci_plat_priv *priv = xhci_to_xhci_priv(xhci);

    if (setup)
        setup_timer(&priv->polling_check_timer, xhci_hub_polling_check, (unsigned long)xhci);
    mod_timer(&priv->polling_check_timer, jiffies + msecs_to_jiffies(USB_HUB_CHECK_TIME));
    priv->polling_check_suspend = false;
    priv->disable_polling_check = false;
}

static void hub_polling_check_timer_off(struct xhci_hcd *xhci)
{
    struct xhci_plat_priv *priv = xhci_to_xhci_priv(xhci);

    priv->polling_check_suspend = true;
    del_timer_sync(&priv->polling_check_timer);
#if 0
    usb3_device_plugin = 0;
    port_check_count = 0;
    U3PortCnt = 0;
#endif
}
#else
static void hub_polling_check_timer_on(struct xhci_hcd *xhci, bool setup) {}
static void hub_polling_check_timer_off(struct xhci_hcd *xhci) {}
#endif

extern struct attribute *xhci_platform_dev_attrs[];
static const struct attribute_group platform_dev_attr_grp = {
    .attrs = xhci_platform_dev_attrs,
};

/*  copy from hub.c and rename */
/*
 * USB 2.0 spec Section 11.24.2.2
 */
static int hub_clear_port_feature(struct usb_device *hdev, int port1, int feature)
{
    return usb_control_msg(hdev, usb_sndctrlpipe(hdev, 0),
            USB_REQ_CLEAR_FEATURE, USB_RT_PORT, feature, port1,
            NULL, 0, 1000);
}

/*
 * USB 2.0 spec Section 11.24.2.13
 */
static int hub_set_port_feature(struct usb_device *hdev, int port1, int feature)
{
    return usb_control_msg(hdev, usb_sndctrlpipe(hdev, 0),
            USB_REQ_SET_FEATURE, USB_RT_PORT, feature, port1,
            NULL, 0, 1000);
}

/* Port Test Modes.
 * Refs to section 4.19.6(Port Test Modes) in eXtensible Host Controller Interface for Universal Serial Bus (xHCI)
 * */
int rtk_xhci_port_test_mode(struct usb_device *udev, int port1, int mode)
{
    struct usb_hcd *hcd = container_of(udev->bus, struct usb_hcd, self);
    struct xhci_hcd *xhci;
    int i;
    unsigned int temp;

    if (udev->maxchild < port1) {
        dev_err(&udev->dev, "port1 is out of range.1~%d \n", udev->maxchild);
        return -1;
    }
    if (mode > 5) {
        dev_err(&udev->dev, "mode is out of range. 0~5 \n");
        return -1;
    }
    if (hcd->udev_in_test && mode != 0) {
        dev_err(&udev->dev, "dev: %s is currently in test \n", dev_name(&hcd->udev_in_test->dev));
        return -1;
    }

    if (mode != 0) {
        usb_lock_device(udev);
        hcd->udev_in_test = udev;
    }

    /* is root hub */
    if (!udev->parent) {
        xhci = hcd_to_xhci(hcd);

        if (mode == 0x0) {
            dev_dbg(&udev->dev, "Leave test mode ...\n");

            dev_dbg(&udev->dev, "set the Run/Stop(R/S) bit in the USBCMD register to a '0'\n");
            temp = readl(&xhci->op_regs->command);
            writel((temp & ~CMD_RUN), &xhci->op_regs->command);

            dev_dbg(&udev->dev, "wait for HCHalted(HCH) bit in the USBSTS register to transition to a '1'\n");
            do {
                msleep(100);
                temp = readl(&xhci->op_regs->status);
            } while (!(temp & STS_HALT));

            dev_dbg(&udev->dev, "set the Host Controller Reset(HCRST) bit in the USBCMD register to a '1'\n");
            temp = readl(&xhci->op_regs->command);
            writel((temp | CMD_RESET), &xhci->op_regs->command);

            dev_dbg(&udev->dev, "Leave test mode , OK !!!\n");

        } else {
            dev_dbg(&udev->dev, "Enter test mode ...\n");

            dev_dbg(&udev->dev, "clear USB_PORT_FEAT_POWER to the parent of the hub\n");
            for (i = 1; i <= udev->maxchild; i++) {
                dev_dbg(&udev->dev, "processing port %d of %d...\n", i, udev->maxchild);
                hub_clear_port_feature(udev, i, USB_PORT_FEAT_POWER);
                msleep(1000);
            }

            dev_dbg(&udev->dev, "set the Run/Stop(R/S) bit in the USBCMD register to a '0'\n");
            temp = readl(&xhci->op_regs->command);
            writel((temp & ~CMD_RUN), &xhci->op_regs->command);

            dev_dbg(&udev->dev, "wait for HCHalted(HCH) bit in the USBSTS register to transition to a '1'\n");
            do {
                msleep(100);
                temp = readl(&xhci->op_regs->status);
            } while (!(temp & STS_HALT));

            dev_dbg(&udev->dev, "set test mode %d to port %d ...\n", mode, port1);
            temp = readl(&xhci->op_regs->port_power_base + (0x4 * (port1 - 1))); // type is le32, so plus one will go to next 4 byte.
            writel((temp | (mode << 28)), &xhci->op_regs->port_power_base + (0x4 * (port1 - 1)));

            /* Mode is FORCE_ENABLE */
            if (mode == 0x5) {
                dev_dbg(&udev->dev, "set the Run/Stop(R/S) bit in the USBCMD register to a '1', in order to enable transmission of SOFs out of the port\n");
                temp = readl(&xhci->op_regs->command);

                writel(temp | CMD_RUN, &xhci->op_regs->command);
            }
            msleep(1000);
            dev_dbg(&udev->dev, "Enter test mode , OK !!!\n");
        }
    } else {
        /* Not root hub.
         * Please refers to section 11.24.2.12 (Set Port Feature) in USB 2.0 spec*/
        if (mode == 0) {
            dev_dbg(&udev->dev, "Leave test mode ...\n");

            dev_dbg(&udev->dev, "clear USB_PORT_FEAT_POWER to the parent of the hub\n");
            for (i = 1; i <= udev->parent->maxchild; i++) {
                dev_dbg(&udev->dev, "processing port %d of %d...\n", i, udev->parent->maxchild);
                hub_clear_port_feature(udev->parent, i, USB_PORT_FEAT_POWER);
                msleep(1000);
            }

            dev_dbg(&udev->dev, "set USB_PORT_FEAT_POWER to the parent of the hub\n");
            for (i = 1; i <= udev->parent->maxchild; i++) {
                dev_dbg(&udev->dev, "processing port %d of %d...\n", i, udev->parent->maxchild);
                hub_set_port_feature(udev->parent, i, USB_PORT_FEAT_POWER);
                msleep(1000);
            }

            dev_dbg(&udev->dev, "Leave test mode , OK !!!\n");
        } else {
            dev_dbg(&udev->dev, "Enter test mode ...\n");

            dev_dbg(&udev->dev, "set USB_PORT_FEAT_SUSPEND to all ports of the hub\n");
            for (i = 1; i <= udev->maxchild; i++) {
                dev_dbg(&udev->dev, "processing port %d of %d...\n", i, udev->maxchild);
                hub_set_port_feature(udev, i, USB_PORT_FEAT_SUSPEND);
                msleep(1000);
            }

            /* When the feature selector is PORT_TEST, the most significant byte(bit 15..8) of the wIndex field
             * is the selector identifying the specific test mode. */
            dev_dbg(&udev->dev, "set USB_PORT_FEAT_TEST mode %d to port %d ...\n", mode, port1);
            hub_set_port_feature(udev, (mode << 8) | port1, USB_PORT_FEAT_TEST);
            msleep(1000);

            dev_dbg(&udev->dev, "Enter test mode , OK !!!\n");
        }
    }

    if (mode == 0) {
        usb_unlock_device(udev);
        hcd->udev_in_test = NULL;
    }

    return 0;
}
EXPORT_SYMBOL(rtk_xhci_port_test_mode);


#ifdef CONFIG_RTK_KDRV_XHCI_SAVE_POWER_WHEN_NO_U3
static void power_saving_dwork(struct work_struct *work)
{
    rtd_clearbits(USB3_TOP_ANA_PHY0_reg, USB3_TOP_ANA_PHY0_usb3_pow_gating_p0_mask);
    pr_info("%s(%d) 0x%x:0x%x. \n",
            __func__, __LINE__,
            USB3_TOP_ANA_PHY0_reg, rtd_inl(USB3_TOP_ANA_PHY0_reg));
}
#endif



static void ScalerTimer_DelayXms(unsigned int ms)
{
    mdelay(ms * 1);
}

static void init_usb3_phy_from_SD(void)
{
    ////Merlin5/////
    rtd_outl(0xb805a00c,0x1);          ///pipe reset u3 phy

    rtd_outl(0xb805a010,0x400C000d);    // 0x00 -->xxxx00xx
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xac48010d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x6042020d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x2771030d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x72f5040d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x2ad3050d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0006060d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x2e00070d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x3591080d);
    ScalerTimer_DelayXms(10);
    //rtd_outl(0xb805a010,0x925c090d);
    //ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xa6080a0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xa9050b0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xc0000c0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xef220d0d);    // RX_Z0 bit[5:2]=1000
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x20000e0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x8D500f0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x000c100d);    // 0x10 --> xxxx10xx
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x4C10110d);    //20180428 modify
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0000120d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0c81130d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xde01140d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0000150d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0000160d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0000170d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0000180d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x6000190d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x00851a0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x20141b0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xC9001c0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xa03f1d0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xc2e01e0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x7e001f0d);    // 0x1f --> xxxx1fxx
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x7058200d);    // page1 0x00 --> xxxx20xx 20190507 bit[7:4]=0xa-->0xc
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xf545210d); //
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x0013220d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xbb66230d);    // RX_Z0 bit[15:12]=1000
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x4770240d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x126C250d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x840a260d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x01d6270d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xf802280d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xff00290d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x30402a0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x80282b0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xffff2c0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0xffff2d0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x00002e0d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x86002f0d);
    //rtd_outl(0xb805a010,0x00002f0c);
    //rtd_inl(0xb805a010);  //check CALIB_OK[6] 需在P0 mode 才可以看到
    ScalerTimer_DelayXms(10);

    rtd_outl(0xb805a00c,0x0);  //pipe release u3 phy
    ScalerTimer_DelayXms(10);

    rtd_outl(0xb805a010,0x925C090d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x505c090d);
    ScalerTimer_DelayXms(10);
    rtd_outl(0xb805a010,0x925c090d);
    ScalerTimer_DelayXms(10);
}

static void init_usb2_phy_from_SD(void)
{
    //////////////////////////XHCI USB2.0 port0 & port1_20190403 ///////////////////////////////////

    /////// 0xF4_change Page1 //////
    rtd_outl(0xb805a014,0x0000bbbb);     //Select Page1//9b=page 0, bb=page 1,db=page 2(含DPLL)
    rtd_outl(0xb8058280,0x02000400);    //Port 0
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);    //Port 1
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE5/Page1 ///////
    rtd_outl(0xb805a014,0x00000f0f);
    rtd_outl(0xb8058280,0x02000500);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000500);    // Set REG_N_SSC bit[7:0]
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE6/Page1 ///////
    rtd_outl(0xb805a014,0x00005858);
    rtd_outl(0xb8058280,0x02000600);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000600);    // Set REG_F_SSC[12:8] bit[4:0]
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE7/Page1 ///////
    rtd_outl(0xb805a014,0x0000e3e3);
    rtd_outl(0xb8058280,0x02000700);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000700);    // Set REG_F_SSC[7:0] bit[7:0]
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF4_change Page0 //////
    rtd_outl(0xb805a014,0x00009b9b);    //Select Page0
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE0 ///////
    rtd_outl(0xb805a014,0x00001b1b);    //Port1 set auto calibration
    //rtd_outl(0xb805a014,0x00003e3e3);    //Z0 autoK-->e3
    rtd_outl(0xb8058280,0x02000000);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000000);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE1 ///////
    rtd_outl(0xb805a014,0x00001818);
    rtd_outl(0xb8058280,0x02000100);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000100);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE2 ///////
    rtd_outl(0xb805a014,0x00005f5f);
    rtd_outl(0xb8058280,0x02000200);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000200);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE3 ///////
    rtd_outl(0xb805a014,0x0000cdcd);
    rtd_outl(0xb8058280,0x02000300);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000300);
    rtd_outl(0xb8058284,0x02000e00);

    ////////E5/enable NSQ auto cal////////
    rtd_outl(0xb805a014,0x00006363);    //double sensitivity 1.5x
    rtd_outl(0xb8058280,0x02000500);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000500);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF4_change Page1 ////
    rtd_outl(0xb805a014,0x0000bbbb);    //Select Page1
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE1/Page1 ////////////////
    rtd_outl(0xb805a014,0x00007777);    // SRCbit[6:4]=7, NSQ_DEV_Cal bit[1]=1,NSQ_HST_Cal bit[0]=1
    rtd_outl(0xb8058280,0x02000100);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000100);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF4_change Page2 ////
    rtd_outl(0xb805a014,0x0000dbdb);    //Select Page2
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE7 page2 //////
    rtd_outl(0xb805a014,0x00004444);    //bit[7:4]=4,SENH OBJ, bit[3:0]=4,SEND OBJ
    rtd_outl(0xb8058280,0x02000700);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000700);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF4_change Page0 ////
    rtd_outl(0xb805a014,0x00009b9b);     //Select Page0
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE4_第一次設定 ///////
    rtd_outl(0xb805a014,0x00006a6a);    //bit[7:4] disconnt level,bit[3:0]=swing
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE7_第一次設定 ///////
    rtd_outl(0xb805a014,0x00006161);    //bit[7:4] device disconnt level
    rtd_outl(0xb8058280,0x02000700);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000700);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF4 //////
    rtd_outl(0xb805a014,0x0000bbbb);    //Select Page1
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE0 page1 //////
    rtd_outl(0xb805a014,0x00002323);       //bit[2]=0,Calibration sensitivity
    rtd_outl(0xb8058280,0x02000000);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000000);
    rtd_outl(0xb8058284,0x02000e00);

    rtd_outl(0xb805a014,0x00002727);       //bit[2]=1,Calibration sensitivity
    rtd_outl(0xb8058280,0x02000000);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000000);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF4 //////
    rtd_outl(0xb805a014,0x00009b9b);    //Select Page0
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE4_第二次設定 ///////
    rtd_outl(0xb805a014,0x00007a7a);    //bit[7:4]=7, disconnt level,bit[3:0]=a,swing
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE7_第二次設定 ///////
    rtd_outl(0xb805a014,0x00007171);  //bit[7:4]=7 device disconnt level
    rtd_outl(0xb8058280,0x02000700);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000700);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE6 ///////
    rtd_outl(0xb805a014,0x00000101);    //bit[7]=0,BG_LPF, bit[1:0]=1, RX BOOST
    rtd_outl(0xb8058280,0x02000600);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000600);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF0 ///////
    rtd_outl(0xb805a014,0x0000fcfc);
    rtd_outl(0xb8058280,0x02000000);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000000);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xF1 ///////
    rtd_outl(0xb805a014,0x00008c8c);
    rtd_outl(0xb8058280,0x02000100);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000100);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xF2 ///////
    rtd_outl(0xb805a014,0x00000000);
    rtd_outl(0xb8058280,0x02000200);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000200);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xF3 ///////
    rtd_outl(0xb805a014,0x00001111);
    rtd_outl(0xb8058280,0x02000300);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000300);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xF5 ///////
    rtd_outl(0xb805a014,0x00001515);
    rtd_outl(0xb8058280,0x02000500);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000500);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xF6 ///////
    rtd_outl(0xb805a014,0x00000000);    //fix full speed cross eye
    rtd_outl(0xb8058280,0x02000600);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000600);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xF7 ///////
    rtd_outl(0xb805a014,0x00008a8a);    //bit 8=1 usb FIFO new mode under 16, over 12 bit
    rtd_outl(0xb8058280,0x02000700);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000700);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xF4_change Page1 //////
    rtd_outl(0xb805a014,0x0000bbbb);    //Select Page1
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE2/Page1 //////
    rtd_outl(0xb805a014,0x00000000);
    rtd_outl(0xb8058280,0x02000200);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000200);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE3/Page1 //////
    rtd_outl(0xb805a014,0x00000303);
    rtd_outl(0xb8058280,0x02000300);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000300);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE4/Page1 //////
    rtd_outl(0xb805a014,0x00004848);
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xF4_change Page2 //////
    rtd_outl(0xb805a014,0x0000dbdb);    ///db=page 2
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);

    /////// 0xE0/Page2 //////
    rtd_outl(0xb805a014,0x0000ffff);
    rtd_outl(0xb8058280,0x02000000);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000000);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE1 page2 //////
    rtd_outl(0xb805a014,0x0000ffff);
    rtd_outl(0xb8058280,0x02000100);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000100);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE2 page2 //////
    rtd_outl(0xb805a014,0x00000000);
    rtd_outl(0xb8058280,0x02000200);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000200);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE3 page2 //////
    rtd_outl(0xb805a014,0x00000000);
    rtd_outl(0xb8058280,0x02000300);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000300);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE4 page2 //////
    rtd_outl(0xb805a014,0x00001515);
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE5 page2 //////
    rtd_outl(0xb805a014,0x00008181);
    rtd_outl(0xb8058280,0x02000500);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000500);
    rtd_outl(0xb8058284,0x02000e00);

    /////// 0xE6 page2 //////
    rtd_outl(0xb805a014,0x00005353);
    rtd_outl(0xb8058280,0x02000600);
    rtd_outl(0xb8058280,0x02000e00);
    rtd_outl(0xb8058284,0x02000600);
    rtd_outl(0xb8058284,0x02000e00);

    /////// page 0 //////
    rtd_outl(0xb805a014,0x00009b9b);    ///9b=page 0
    rtd_outl(0xb8058280,0x02000400);
    rtd_outl(0xb8058280,0x02000f00);
    rtd_outl(0xb8058284,0x02000400);
    rtd_outl(0xb8058284,0x02000f00);
}


static void __maybe_unused init_from_SD(void)
{
    //////////Merlin 5 XHCI /////////////////////////////////////////////
    //////////XHCI USB 3.0///////////////////////////////////////////////

    ///////////////////////
    rtd_outl(0xb805a008,0x7);    //UTMI reset
    rtd_outl(0xb805a008,0x0);    //UTMI release
    rtd_outl(0xb805a084,0xd1);    //PHY ignores suspend signal and always keep UTMI clock active
    rtd_inl(0xb805a084);
    //rtd_outl(0xb805a000,0x00000002)    //dbus multi req disable
    //rtd_outl(0xb8058200, 0x00001408)  //synopsys 3.0 version  GUSB2PHYCFG
    //rtd_outl(0xb8058204, 0x00001408)  //synopsys 3.0 version  GUSB212CCTL
    //rtd_outl(0xb8058208, 0x00001408) //synopsys 3.0 version  GUSB2PHYACC_UTMI/GUSB2PHYACC_ULPI
    //rtd_outl(0xb805820c, 0x00001408) //synopsys 3.0 version  GUSB3PIPECTL
    /////////////////usb 3.0 p3 mode -> p2 mode/////

    rtd_outl(0xb80582c0,0x010C0002);  //P3 mode->p2 mode



    //////set USB 3.0 PHY/////////////////

    ScalerTimer_DelayXms(1);
    //#include "write_XHCI_usb3_phy_Merlin5_parameter_V01.tbl"  //write XHCI USB 3.0 Phy register/內含Pipe3 reset and release
    //#include "write_XHCI_usb3_phy_Merlin5_parameter_V01_RDC.tbl"    //write XHCI USB 3.0 Phy register/內含Pipe3 reset and release
    init_usb3_phy_from_SD();

    /////////

    //////////////////////////after usb phy set and modify this usb 3.0 phy_Merlin5 新增_20190408//////////
    //rtd_outl(0xb805a010,0x3);            //srst=1,Assert 1'b1 to do soft reset, //mdio_rdwr=1 b0: read , b1: write
    //rtd_inl(0xb805a010);
    //rtd_outl(0xb805a010,0x40000c01);     //MDIO_CTR_data(0x4000)
    //rtd_outl(0xb805a010,0x40000c00);    //MDIO read mode
    //rtd_inl(0xb805a010);
    ////////////////
    //ScalerTimer_DelayXms(1);            //delay >300us
    //rtd_outl(0xb805a010,0xc0000c01);     //MDIO_CTR_data(0xC000)
    //rtd_outl(0xb805a010,0xc0000c00);
    //rtd_inl(0xb805a010);
    //rtd_outl(0xb805a010,0x00572201);     //MDIO_CTR_data(0x0017)
    //rtd_outl(0xb805a010,0x00572200);     //Bit 6 Deemphasis enable 20170816
    //rtd_inl(0xb805a010);
    //rtd_outl(0xb805a010,0xf2F50401);    //MDIO_CTR_data(0x52F5)
    //rtd_outl(0xb805a010,0xf2F50400);
    //rtd_inl(0xb805a010);

    //////Open USB 3.0 mbias_en and bg_en and pow gating///////

    rtd_outl(0xb805a0c4,0xe);          //USB3_ANA_PHY open

    ////////

    ScalerTimer_DelayXms(1);            //delay >300us

    rtd_outl(0xb805A088,0x1);            //u3Rxterm_force_val=0,//Rxterm_force_en=0
    rtd_inl(0xb805a088);
    ScalerTimer_DelayXms(1);
    //////////////////


    //////////XHCI USB 2.0/////////////////////////////////////////////////

    ScalerTimer_DelayXms(1);
//#include "write_XHCI_usb2_phy_Merlin5_parameter_V01.tbl"    ///write XHCI USB 2.0 Phy register
    init_usb2_phy_from_SD();
    ScalerTimer_DelayXms(1);
    ///////////////////////////////////////////////////////////////////////////////////

    ////////////let usb 3.0 R Term turn on////////////
    ScalerTimer_DelayXms(1);
    rtd_outl(0xb805A088,0x5);        //Rxterm_force_en=1
    rtd_inl(0xb805a088);
    /////////

    rtd_outl(0xb80582c0,0x010E0002); //P2 mode->p3 mode
    rtd_outl(0xb8050020,0x00000002);
    rtd_outl(0xb8050058,0x00000040);    //set support device no.
    rtd_outl(0xb8050020,0x00000001);    //XHCI run
}


static int xhci_plat_probe(struct platform_device *pdev)
{
    const struct of_device_id *match;
    const struct hc_driver *driver;
    struct device *sysdev;
    struct xhci_hcd *xhci;
    struct resource *res;
    struct usb_hcd *hcd;
    struct clk *clk;
    int ret;
    int irq;

    if (usb_disabled())
        return -ENODEV;

#ifdef CONFIG_USB_USER_RESUME
    pdev->dev.power.is_userresume = true;
#endif

    driver = &xhci_plat_hc_driver;

    irq = platform_get_irq(pdev, 0);
    if (irq < 0)
        return irq;

    /*
    * sysdev must point to a device that is known to the system firmware
    * or PCI hardware. We handle these three cases here:
    * 1. xhci_plat comes from firmware
    * 2. xhci_plat is child of a device from firmware (dwc3-plat)
    * 3. xhci_plat is grandchild of a pci device (dwc3-pci)
    */
    for (sysdev = &pdev->dev; sysdev; sysdev = sysdev->parent) {
        if (is_of_node(sysdev->fwnode) ||
            is_acpi_device_node(sysdev->fwnode))
            break;
#ifdef CONFIG_PCI
        else if (sysdev->bus == &pci_bus_type)
            break;
#endif
    }

    if (!sysdev)
        sysdev = &pdev->dev;

    /* Try to set 64-bit DMA first */
    if (WARN_ON(!sysdev->dma_mask))
        /* Platform did not initialize dma_mask */
        ret = dma_coerce_mask_and_coherent(sysdev,
                        DMA_BIT_MASK(64));
    else
        ret = dma_set_mask_and_coherent(sysdev, DMA_BIT_MASK(64));

    /* If seting 64-bit DMA mask fails, fall back to 32-bit DMA mask */
    if (ret) {
        ret = dma_set_mask_and_coherent(sysdev, DMA_BIT_MASK(32));
        if (ret)
            return ret;
    }

    pm_runtime_set_active(&pdev->dev);
    pm_runtime_enable(&pdev->dev);
    pm_runtime_get_noresume(&pdev->dev);

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
    hcd = __usb_create_hcd(driver, sysdev, &pdev->dev,
                dev_name(&pdev->dev), NULL);
#else
    hcd = usb_create_hcd(driver, &pdev->dev, dev_name(&pdev->dev));
#endif
    if (!hcd) {
        ret = -ENOMEM;
        goto disable_runtime;
    }

    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    hcd->regs = devm_ioremap_resource(&pdev->dev, res);
    if (IS_ERR(hcd->regs)) {
        ret = PTR_ERR(hcd->regs);
        goto put_hcd;
    }
    hcd->rsrc_start = res->start;
    hcd->rsrc_len = resource_size(res);

#if 0
    /*
    * Not all platforms have a clk so it is not an error if the
    * clock does not exists.
    */
    clk = devm_clk_get(&pdev->dev, NULL);
    if (!IS_ERR(clk)) {
        ret = clk_prepare_enable(clk);
        if (ret)
            goto put_hcd;
    } else if (PTR_ERR(clk) == -EPROBE_DEFER) {
        ret = -EPROBE_DEFER;
        goto put_hcd;
    }
#else
    /* RTK USB platform clk */
    /*CRT_CLK_OnOff(USB, CLK_ON, (void *)3);*/
#endif

    xhci = hcd_to_xhci(hcd);
    match = of_match_node(usb_xhci_of_match, pdev->dev.of_node);
    if (match) {
        const struct xhci_plat_priv *priv_match = match->data;
        struct xhci_plat_priv *priv = hcd_to_xhci_priv(hcd);

        /* Just copy data for now */
        if (priv_match)
            *priv = *priv_match;
    }

    /* inidicate Synopsys USB3 global register address */
    hcd_to_xhci_priv(hcd)->global_regs = hcd->regs + HOST_GLOBAL_REGS_OFFSET;

    device_wakeup_enable(hcd->self.controller);

    xhci->clk = clk;
    xhci->main_hcd = hcd;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
    xhci->shared_hcd = __usb_create_hcd(driver, sysdev, &pdev->dev,
            dev_name(&pdev->dev), hcd);
#else
    xhci->shared_hcd = usb_create_shared_hcd(driver, &pdev->dev, dev_name(&pdev->dev), hcd);
#endif
    if (!xhci->shared_hcd) {
        ret = -ENOMEM;
        goto disable_clk;
    }

    if (device_property_read_bool(sysdev, "usb3-lpm-capable"))
        xhci->quirks |= XHCI_LPM_SUPPORT;

    if (device_property_read_bool(&pdev->dev, "quirk-broken-port-ped"))
        xhci->quirks |= XHCI_BROKEN_PORT_PED;

#if 1
#if 1
    /* RTK USB mac and phy init */
    if ((ret = xhci_usb_mac_init(pdev)) ||
        (ret = xhci_usb3_phy_init(pdev)) ||
        (ret = xhci_usb2_phy_init(pdev)) ||
        (ret = xhci_usb2_set_phy_from_otp(pdev)) ||
        (ret = xhci_usb_mac_postinit(pdev)))
        goto put_usb3_hcd;

    if(tool_obj_en){
        if((ret = xhci_usb2_set_swing(pdev,0xe)))
            goto put_usb3_hcd;
    }
#else
    init_from_SD();
    if (0)
        goto put_usb3_hcd;
#endif
#else


    hcd->usb_phy = devm_usb_get_phy_by_phandle(sysdev, "usb-phy", 0);
    if (IS_ERR(hcd->usb_phy)) {
        ret = PTR_ERR(hcd->usb_phy);
        if (ret == -EPROBE_DEFER)
            goto put_usb3_hcd;
        hcd->usb_phy = NULL;
    } else {
        ret = usb_phy_init(hcd->usb_phy);
        if (ret)
            goto put_usb3_hcd;
    }
#endif

#ifdef CONFIG_RTK_KDRV_XHCI_SAVE_POWER_WHEN_NO_U3
    xhci->main_hcd->force_disable_auto_suspend = true;
    xhci->shared_hcd->force_disable_auto_suspend = true;
#endif

    ret = usb_add_hcd(hcd, irq, IRQF_SHARED);
    if (ret)
        goto disable_usb_phy;

    if (HCC_MAX_PSA(xhci->hcc_params) >= 4)
        xhci->shared_hcd->can_do_streams = 1;

    ret = usb_add_hcd(xhci->shared_hcd, irq, IRQF_SHARED);
    if (ret)
        goto dealloc_usb2_hcd;

#ifdef CONFIG_USB_HCD_TEST_MODE
    /* only for U2 bus driver */
    hcd->port_test_mode = rtk_xhci_port_test_mode;
#endif

    device_enable_async_suspend(&pdev->dev);
    pm_runtime_put_noidle(&pdev->dev);

    /*
    * Prevent runtime pm from being on as default, users should enable
    * runtime pm using power/control in sysfs.
    */
    pm_runtime_forbid(&pdev->dev);

    if (sysfs_create_group(&pdev->dev.kobj, &platform_dev_attr_grp)) {
        xhci_plat_warn(xhci, "Create self-defined sysfs attributes fail \n");
    }

    /* we enable vbus power for device here */
    enable_vbus_power();

    hub_polling_check_timer_on(xhci, true);

#ifdef CONFIG_RTK_KDRV_XHCI_SAVE_POWER_WHEN_NO_U3
    INIT_DELAYED_WORK(&hcd_to_xhci_priv(hcd)->power_saving_dwork, power_saving_dwork);
    queue_delayed_work(system_freezable_wq, &hcd_to_xhci_priv(hcd)->power_saving_dwork,
            POWER_SAVING_WORK_DELAY * HZ);
#endif

    return 0;


dealloc_usb2_hcd:
    usb_remove_hcd(hcd);

disable_usb_phy:
    usb_phy_shutdown(hcd->usb_phy);

put_usb3_hcd:
    usb_put_hcd(xhci->shared_hcd);

disable_clk:
    if (!IS_ERR(clk))
        clk_disable_unprepare(clk);

put_hcd:
    usb_put_hcd(hcd);

disable_runtime:
    pm_runtime_put_noidle(&pdev->dev);
    pm_runtime_disable(&pdev->dev);

    return ret;
}

static int xhci_plat_remove(struct platform_device *dev)
{
    struct usb_hcd *hcd = platform_get_drvdata(dev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    struct clk *clk = xhci->clk;

    hub_polling_check_timer_off(xhci);

    xhci->xhc_state |= XHCI_STATE_REMOVING;

    usb_remove_hcd(xhci->shared_hcd);
    usb_phy_shutdown(hcd->usb_phy);

    usb_remove_hcd(hcd);
    usb_put_hcd(xhci->shared_hcd);

    if (!IS_ERR(clk))
        clk_disable_unprepare(clk);
    usb_put_hcd(hcd);

    pm_runtime_set_suspended(&dev->dev);
    pm_runtime_disable(&dev->dev);

    return 0;
}


static int xhci_plat_prepare(struct device *dev)
{
    struct usb_hcd __maybe_unused *hcd = dev_get_drvdata(dev);

#ifdef CONFIG_RTK_KDRV_XHCI_SAVE_POWER_WHEN_NO_U3
    cancel_delayed_work_sync(&hcd_to_xhci_priv(hcd)->power_saving_dwork);
    rtd_setbits(USB3_TOP_ANA_PHY0_reg, USB3_TOP_ANA_PHY0_usb3_pow_gating_p0_mask);
    udelay(500);

    dev_info(dev, "%s(%d)  0x%x:0x%x \n",
            __func__, __LINE__,
            USB3_TOP_ANA_PHY0_reg, rtd_inl(USB3_TOP_ANA_PHY0_reg));
#endif
    return 0;
}


static int __maybe_unused xhci_plat_suspend(struct device *dev)
{
    struct usb_hcd *hcd = dev_get_drvdata(dev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    int ret;

    hub_polling_check_timer_off(xhci);

    /*
     * xhci_suspend() needs `do_wakeup` to know whether host is allowed
     * to do wakeup during suspend. Since xhci_plat_suspend is currently
     * only designed for system suspend, device_may_wakeup() is enough
     * to dertermine whether host is allowed to do wakeup. Need to
     * reconsider this when xhci_plat_suspend enlarges its scope, e.g.,
     * also applies to runtime suspend.
     */
    ret = xhci_suspend(xhci, device_may_wakeup(dev));

    if (!device_may_wakeup(dev) && !IS_ERR(xhci->clk))
        clk_disable_unprepare(xhci->clk);

    return ret;
}

static int __maybe_unused xhci_plat_resume(struct device *dev)
{
    struct usb_hcd *hcd = dev_get_drvdata(dev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);
    int ret;
    struct platform_device *pdev = to_platform_device(dev);

#if 0
    if (!device_may_wakeup(dev) && !IS_ERR(xhci->clk))
        clk_prepare_enable(xhci->clk);
#else
    /* RTK USB platform clk */
    /*CRT_CLK_OnOff(USB, CLK_ON, (void *)3);*/
#endif
    /* RTK USB mac and phy init */
    if ((ret = xhci_usb_mac_init(pdev)) ||
        (ret = xhci_usb3_phy_init(pdev)) ||
        (ret = xhci_usb2_phy_init(pdev)) ||
        (ret = xhci_usb2_set_phy_from_otp(pdev)) ||
        (ret = xhci_usb_mac_postinit(pdev)))
        return ret;

    if ((ret = xhci_priv_resume_quirk(hcd)) ||
        (ret = xhci_resume(xhci, 0)))
        return ret;

    /* we enable vbus power for device here */
    enable_vbus_power();

    hub_polling_check_timer_on(xhci, false);

    return 0;
}



static void xhci_plat_complete(struct device *dev)
{
    struct usb_hcd __maybe_unused *hcd = dev_get_drvdata(dev);

#ifdef CONFIG_RTK_KDRV_XHCI_SAVE_POWER_WHEN_NO_U3
    queue_delayed_work(system_freezable_wq, &hcd_to_xhci_priv(hcd)->power_saving_dwork,
            POWER_SAVING_WORK_DELAY * HZ);

    dev_info(dev, "%s(%d) 0x%x:0x%x. \n",
            __func__, __LINE__,
            USB3_TOP_ANA_PHY0_reg, rtd_inl(USB3_TOP_ANA_PHY0_reg));
#endif
}

static int __maybe_unused xhci_plat_runtime_suspend(struct device *dev)
{
    struct usb_hcd  *hcd = dev_get_drvdata(dev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);

    return xhci_suspend(xhci, true);
}

static int __maybe_unused xhci_plat_runtime_resume(struct device *dev)
{
    struct usb_hcd  *hcd = dev_get_drvdata(dev);
    struct xhci_hcd *xhci = hcd_to_xhci(hcd);

    return xhci_resume(xhci, 0);
}

static const struct dev_pm_ops xhci_plat_pm_ops = {
    SET_SYSTEM_SLEEP_PM_OPS(xhci_plat_suspend, xhci_plat_resume)
    .prepare = xhci_plat_prepare,
    .complete = xhci_plat_complete,

    SET_RUNTIME_PM_OPS(xhci_plat_runtime_suspend,
            xhci_plat_runtime_resume,
            NULL)
};

static const struct acpi_device_id usb_xhci_acpi_match[] = {
    /* XHCI-compliant USB Controller */
    { "PNP0D10", },
    { }
};
MODULE_DEVICE_TABLE(acpi, usb_xhci_acpi_match);

static struct platform_driver usb_xhci_driver = {
    .probe = xhci_plat_probe,
    .remove = xhci_plat_remove,
    .shutdown = usb_hcd_platform_shutdown,
    .driver = {
        .name = "xhci-hcd",
        .pm = &xhci_plat_pm_ops,
        .of_match_table = of_match_ptr(usb_xhci_of_match),
        .acpi_match_table = ACPI_PTR(usb_xhci_acpi_match),
    },
};
MODULE_ALIAS("platform:xhci-hcd");

static int __init xhci_platform_tool_obj_init(char *cmdline)
{
    tool_obj_en = 1;
    pr_info("%s Setting TOOL_OBJ:%d\n",__func__,tool_obj_en);
    return 0;
}
early_param("TOOL_OBJ", xhci_platform_tool_obj_init);

#ifdef CONFIG_USER_INITCALL_USB
static int xhci_plat_init(void)
#else
static int __init xhci_plat_init(void)
#endif
{
    xhci_init_driver(&xhci_plat_hc_driver, &xhci_plat_overrides);
    return platform_driver_register(&usb_xhci_driver);
}
#if defined(CONFIG_USER_INITCALL_USB) && !defined(MODULE)
user_initcall_grp("USB", xhci_plat_init);
#else
module_init(xhci_plat_init);
#endif

static void __exit xhci_plat_exit(void)
{
    platform_driver_unregister(&usb_xhci_driver);
}
module_exit(xhci_plat_exit);

MODULE_DESCRIPTION("xHCI Platform Host Controller Driver");
MODULE_LICENSE("GPL");
