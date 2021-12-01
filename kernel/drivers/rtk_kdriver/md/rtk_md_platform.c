#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#include <linux/of_irq.h>
#include <rtk_kdriver/md/rtk_md_debug.h>
#include <rtk_kdriver/md/rtk_md.h>
extern int g_rtk_md_irq_num;
#ifdef CONFIG_PM
#define MD_PLATORM_DEV_NAME "rtk-md"

static int rtk_md_pm_suspend_noirq(struct device *dev)
{
    rtk_md_suspend_noirq();
    return 0;
}

static int rtk_md_pm_resume_noirq(struct device *dev)
{
    rtk_md_resume_noirq();
    return 0;
}

static int rtk_md_pm_resume_early(struct device *dev)
{
    rtk_md_resume_early();
    return 0;
}


static int rtk_md_pm_resume(struct device *dev)
{
    PDEIFO("[MD]%s\n", __func__);
    return 0;
}

static int rtk_md_pm_poweroff(struct device *dev)
{
    rtk_md_poweroff();
    return 0;
}

static int rtk_md_pm_restore(struct device *dev)
{
    rtk_md_restore();
    return 0;
}

static int rtk_md_pm_freeze_noirq(struct device *dev)
{
    rtk_md_freeze_noirq();
    return 0;
}

static const struct dev_pm_ops md_pm_ops = {
    .suspend_noirq      = rtk_md_pm_suspend_noirq,
    .resume_noirq       = rtk_md_pm_resume_noirq,
    .resume_early       = rtk_md_pm_resume_early,
    .resume             = rtk_md_pm_resume,
    .poweroff_late      = rtk_md_pm_poweroff,
    .restore_early      = rtk_md_pm_restore,
    .freeze_noirq       = rtk_md_pm_freeze_noirq,
};

#ifdef CONFIG_OF
static const struct of_device_id md_of_match[] = {
    { .compatible = "realtek,rtk-md" },
    { },
};
MODULE_DEVICE_TABLE(of, md_of_match);
#endif


static struct platform_device *md_platform_devs;

static struct platform_driver md_device_driver = {
    .driver = {
        .name           = MD_PLATORM_DEV_NAME,
        .bus            = &platform_bus_type,
        .pm             = &md_pm_ops,
#ifdef CONFIG_OF
        .of_match_table = of_match_ptr(md_of_match),
#endif
    },
};

__init int md_platform_init(void)
{
    md_platform_devs = platform_device_register_simple(
                           MD_PLATORM_DEV_NAME, -1, NULL, 0);
    if(!md_platform_devs) {
        goto FAIL_ADD_PLATFORM_DEVICE;
    }
    if(platform_driver_register(&md_device_driver) == 0)
        return 0;
    platform_device_unregister(md_platform_devs);
    md_platform_devs = NULL;
FAIL_ADD_PLATFORM_DEVICE:
    return -1;
}

__exit void md_platform_uninit(void)
{
    platform_driver_unregister(&md_device_driver);
    platform_device_unregister(md_platform_devs);
}

#else

__init int md_platform_init(void)
{
    return 0;
}

__exit void md_platform_uninit(void)
{

}
#endif
