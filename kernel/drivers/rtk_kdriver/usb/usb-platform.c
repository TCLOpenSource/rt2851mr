#include <linux/clk.h>
#include <linux/module.h>
#include <asm/delay.h>
#include <linux/platform_device.h>
#include <linux/io.h>
#include <linux/of_platform.h>
#include <linux/slab.h>
#include <rtk_kdriver/usb/usb3_crt.h>
#include <rtk_kdriver/usb/usb2_crt.h>
#include <rbus/usb3_top_reg.h> /* for U3 wrapper register define */
#include <rbus/usb2_top_reg.h>

#ifdef CONFIG_CUSTOMER_TV030
#include <rtk_kdriver/rtk_gpio.h>
#include <rtk_kdriver/pcbMgr.h>
#include <rtk_kdriver/usb/usb_platform.h>
#endif

#define DRIVER_DESC "RTK USB generic platform driver"


static void power_on_all_usb_host(void)
{
    usb3_crt_on();
    usb2_crt_on();
}


static int rtk_usb_platform_probe(struct platform_device *pdev)
{
    struct device *dev = &pdev->dev;
    struct device_node *node = pdev->dev.of_node;
    int error = 0;

    power_on_all_usb_host();

    error = of_platform_populate(node, NULL, NULL, dev); /* populate all children nodes of this device */
    if (error)
        dev_err(&pdev->dev, "failed to create rtk usb platform\n");

#if 0
    if (sysfs_create_group(&dev->kobj, &dev_attr_grp)) {
        pr_warn("Create self-defined sysfs attributes fail \n");
    }
#endif

    return error;
}


static int rtk_usb_platform_remove(struct platform_device *pdev)
{
#if 0
    sysfs_remove_group(&pdev->dev.kobj, &dev_attr_grp);
#endif
    of_platform_depopulate(&pdev->dev);
    platform_set_drvdata(pdev, NULL);

    return 0;
}


static int rtk_usb_platform_resume(struct device *dev)
{
    power_on_all_usb_host();

    return 0;
}


static int rtk_usb_platform_restore(struct device *dev)
{
    power_on_all_usb_host();

    return 0;
}


static const struct dev_pm_ops rtk_usb_platform_pm_ops = {
    .resume = rtk_usb_platform_resume,
    .restore = rtk_usb_platform_restore,
};

#ifdef CONFIG_CUSTOMER_TV030
bool is_MTK_usb_wifi_bt_dev(struct usb_device *udev)
{
    if (udev->descriptor.idVendor == 0x0e8d &&
            udev->descriptor.idProduct == 0x7668)
	{
        pr_alert("%s(%d)\n",__func__,__LINE__);
        return true;
	}

    /* In TCL2851M, 3-2 is wifi/bt */
    if (udev->parent && !udev->parent->parent &&
            udev->bus->busnum == 3 &&
            udev->portnum == 2)
	{
        pr_alert("%s(%d)\n",__func__,__LINE__);
        return true;
	}

	 /* In TCL2851M, 4-2 is wifi/bt, fail about low speed  */
    if (udev->parent && !udev->parent->parent &&
            udev->bus->busnum == 4 &&
            udev->portnum == 2)
    {
        pr_alert("%s(%d)\n",__func__,__LINE__);
        return true;
    }

    pr_alert("%s(%d)\n",__func__,__LINE__);
	
    return false;
}
EXPORT_SYMBOL_GPL(is_MTK_usb_wifi_bt_dev);


int usb_set_MTK_wifi_off_on(bool on)
{
    RTK_GPIO_ID gid;
    u64 pin;
    int ret = 0;
    char *pin_name = "PIN_WIFI_ON";

    ret = pcb_mgr_get_enum_info_byname(pin_name, &pin);
    if (ret) {
        pr_warn("%s: fail to get PCB parameter (%s)\n", __func__, pin_name);
        return -ENODEV;
    }

    if (GET_PIN_TYPE(pin) != PCB_PIN_TYPE_ISO_GPIO) {
        pr_warn("%s: wrong pin type(0x%x)\n", __func__, GET_PIN_TYPE(pin));
        return -EINVAL;
    }

    gid = rtk_gpio_id(ISO_GPIO, GET_PIN_INDEX(pin));
#ifdef CONFIG_RTK_KDRV_GPIO
    ret = rtk_gpio_output(gid, on);
#endif
    if (ret)
        return ret;
#ifdef CONFIG_RTK_KDRV_GPIO
    return rtk_gpio_set_dir(gid, 1);  // set gpio to output mode
#else
    return ret;
#endif
}
EXPORT_SYMBOL_GPL(usb_set_MTK_wifi_off_on);
#endif

static const struct of_device_id rtk_usb_of_match[] = {
    { .compatible = "rtk,usb-platform", },
    {},
};
MODULE_DEVICE_TABLE(of, rtk_usb_of_match);


static struct platform_driver rtk_usb_platform_driver = {
    .probe      = rtk_usb_platform_probe,
    .remove     = rtk_usb_platform_remove,
    .driver     = {
        .name = "usb-platform",
        .pm = &rtk_usb_platform_pm_ops,
        .of_match_table = rtk_usb_of_match,
    }
};


static int __init rtk_usb_platform_init(void)
{
    return platform_driver_register(&rtk_usb_platform_driver);
}
module_init(rtk_usb_platform_init);


static void __exit rtk_usb_platform_cleanup(void)
{
    platform_driver_unregister(&rtk_usb_platform_driver);
}
module_exit(rtk_usb_platform_cleanup);


MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Jason Chiu");
MODULE_LICENSE("GPL");
