/************************************************************************
 *  Include files
 ************************************************************************/
#include <linux/uaccess.h>
#include <linux/bitops.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/delay.h>
#include <linux/err.h>
#include <linux/export.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/miscdevice.h>
#include <linux/io.h>
#include <mach/io.h>
#include <linux/irq.h>
#include <linux/init.h>
#include <linux/ioctl.h>
#include <linux/input.h>
#include <linux/ioport.h>
#include <linux/interrupt.h>
#include <linux/jiffies.h>
#include <linux/kfifo.h>
#include <linux/kthread.h>
#include <linux/of.h>
#include <linux/pci.h>
#include <linux/poll.h>
#include <linux/platform_device.h>
#include <linux/random.h>
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/signal.h>
#include <linux/stat.h>
#include <linux/string.h>
#include "rtk_ai.h"

/************************************************************************
 *  Definitions
 ************************************************************************/


/************************************************************************
*  Public variables
************************************************************************/
static struct cdev *dev_cdevp_ai = NULL;
static struct class *_ai_class;
static struct device *ai_device_st;
static struct platform_device *rtk_ai_platform_dev;
static int ai_dev_major;
static int ai_dev_minor;


/************************************************************************
*  Function body
************************************************************************/
static void rtk_ai_backup_info(void)
{
	rtk_ai_mc_backup();
}

static void rtk_ai_restore_info(void)
{
	rtk_ai_mc_restore();
}

#ifdef CONFIG_PM
/*static int rtk_pwm_suspend(struct platform_device *dev, pm_message_t state)*/
static int rtk_ai_suspend(struct device *dev)
{
    AI_WARN("suspend\n");
    rtk_ai_backup_info();
    return 0;
}

/*static int rtk_pwm_resume(struct platform_device *dev)*/
static int rtk_ai_resume(struct device *dev)
{

    AI_WARN("resume\n");
    rtk_ai_restore_info();
    return 0;
}

#ifdef CONFIG_HIBERNATION
static int rtk_ai_suspend_std(struct device *dev)
{
    AI_WARN("%s \n" , __func__);
    rtk_ai_backup_info();
    return 0;
}
static int rtk_ai_resume_std(struct device *dev)
{
    AI_WARN("%s \n" , __func__);
    rtk_ai_restore_info();
    return 0;
}

static int rtk_ai_poweroff(struct device *dev)
{
    AI_WARN("%s \n" , __func__);
    return 0;
}
static int rtk_ai_restore(struct device *dev)
{
    AI_WARN("%s \n" , __func__);
    rtk_ai_restore_info();
    return 0;
}
#endif

static const struct dev_pm_ops rtk_ai_pm_ops = {

    .suspend_noirq = rtk_ai_suspend,
    .resume_noirq = rtk_ai_resume,
#ifdef CONFIG_HIBERNATION
    .freeze_noirq     = rtk_ai_suspend_std,
    .thaw_noirq       = rtk_ai_resume_std,
    .poweroff_noirq     = rtk_ai_poweroff,
    .restore_noirq       = rtk_ai_restore,    
#endif
};

#endif

static int rtk_ai_probe(struct platform_device *pdev)
{
    AI_WARN("%s():\n", __FUNCTION__);
    return 0;
}

static int rtk_ai_remove(struct platform_device *pdev)
{
    AI_WARN("%s():\n", __FUNCTION__);
    return 0;
}

ssize_t rtk_ai_read(struct file *filp, char __user *buf, size_t count, loff_t *f_pos)
{
    AI_WARN("%s():\n", __FUNCTION__);
    return -EFAULT;
}
ssize_t rtk_ai_write(struct file *filp, const char __user *buf, size_t count, loff_t *f_pos)
{
    AI_WARN("%s():\n", __FUNCTION__);
    return -EFAULT;
}

int rtk_ai_open(struct inode *inode, struct file *filp)
{
    AI_WARN("%s():\n", __FUNCTION__);
    filp->private_data = (void *)rtk_ai_mc_getNextHandle();
    //AI_INFO("%s():private_data=%d\n",(int)__FUNCTION__,(int)filp->private_data);
    return 0;
}

int rtk_ai_release(struct inode *inode, struct file *filp)
{
    AI_WARN("%s():\n", __FUNCTION__);
    //AI_INFO("%s():private_data=%d\n",__FUNCTION__,(int)filp->private_data);
    rtk_ai_mc_crashRelease((int)filp->private_data);
    return 0;
}

long rtk_ai_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
    int retval = 0;
    IOCTL_REGIST_MODEL_PARAM modelParam;
 		IOCTL_GRANT_PARAM grantParam;
 		unsigned int phyAddr;

    AI_DEBUG("%s() enter\n", __FUNCTION__);

    switch (cmd) {
    case AI_IOC_INIT:
        break;
    case AI_IOC_UNINIT:
        break;
    case AI_IOC_OPEN:
        break;
    case AI_IOC_CLOSE:
        break;
    case AI_IOC_REGIST_MODEL:
        if (copy_from_user(&modelParam, (void __user *)arg,sizeof(IOCTL_REGIST_MODEL_PARAM))) {
					AI_ERROR("AI_IOC_REGIST_MODEL failed, copy data from user space failed\n");
					retval=-EFAULT;
					break;
        }
    		if(rtk_ai_mc_registModel(&modelParam.info,(int)filp->private_data)==FALSE)
					retval=-EFAULT;
				else
					retval=(int)filp->private_data;
        break;
    case AI_IOC_UNREGIST_MODEL:
    		if(rtk_ai_mc_unRegistModel((int)arg)==FALSE)
					retval=-EFAULT;
        break;
    case AI_IOC_GET_SHARE_MEM:
    		if(rtk_ai_mc_getShareMem(&phyAddr)==FALSE)
					retval=-EFAULT;
				else{
					if(copy_to_user((unsigned int __user*)arg,&phyAddr,4)){
						AI_ERROR("AI_IOC_GET_SHARE_MEM failed, copy data to user space failed\n");
						retval=-EFAULT;
					}
				}
        break;
    case AI_IOC_GET_GRANT:
        if (copy_from_user(&grantParam, (void __user *)arg,sizeof(IOCTL_GRANT_PARAM))) {
					AI_ERROR("AI_IOC_GET_GRANT failed, copy data from user space failed\n");
					retval=-EFAULT;
        }else{
        	if(rtk_ai_mc_getGrant(grantParam.handle,grantParam.index)==FALSE)
        		retval=-EFAULT;
        }	
        break;
    case AI_IOC_RELEASE_GRANT:
        if (copy_from_user(&grantParam, (void __user *)arg,sizeof(IOCTL_GRANT_PARAM))) {
					AI_ERROR("AI_IOC_RELEASE_GRANT failed, copy data from user space failed\n");
					retval=-EFAULT;
        }else{
	        if(rtk_ai_mc_releaseGrant(grantParam.handle,grantParam.index)==FALSE)
        		retval=-EFAULT;
      	}
        break;
    default:
        retval = -ENOTTY;
    }

    AI_DEBUG("%s() exit\n", __FUNCTION__);

    return retval;

}

#ifdef CONFIG_COMPAT
long rtk_ai_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
    void __user *compat_arg = compat_ptr(arg);
    return rtk_ai_ioctl(filp, cmd, (unsigned long)compat_arg);
}
#endif

static struct file_operations rtk_ai_fops = {
    .owner = THIS_MODULE,
    .read = rtk_ai_read,
    .write = rtk_ai_write,
    .unlocked_ioctl = rtk_ai_ioctl,
    .release = rtk_ai_release,
    .open = rtk_ai_open,
#ifdef CONFIG_COMPAT
    .compat_ioctl = rtk_ai_compat_ioctl,
#endif
};


static const struct of_device_id rtk_ai_devices[] = {
    {.compatible = "rtk-ai",},
    {},
};

static struct platform_driver rtk_ai_driver = {
    .driver = {
            .name = "rtk-ai",
            .owner = THIS_MODULE,
            .of_match_table = of_match_ptr(rtk_ai_devices),
            #ifdef CONFIG_PM
            .pm    = &rtk_ai_pm_ops,
            #endif
        },
    .probe = rtk_ai_probe,
    .remove = rtk_ai_remove,
};

static int register_ai_cdev(void) {
    dev_t dev;
    int ret = 0;


    ret = alloc_chrdev_region(&dev, 0, 1, AI_DEVICE_NAME);
    if (ret) {
        AI_ERROR("can't alloc chrdev\n");
        return -1;
    }

    ai_dev_major = MAJOR(dev);
    ai_dev_minor = MINOR(dev);


    dev_cdevp_ai = kzalloc(sizeof(struct cdev), GFP_KERNEL);
    if (dev_cdevp_ai == NULL) {
        AI_ERROR("kzalloc failed\n");
        goto FAIL_TO_ALLOCATE_AI_CDEV;
    }
    cdev_init(dev_cdevp_ai, &rtk_ai_fops);
    dev_cdevp_ai->owner = THIS_MODULE;
    dev_cdevp_ai->ops = &rtk_ai_fops;
    ret = cdev_add(dev_cdevp_ai, MKDEV(ai_dev_major, ai_dev_minor), 1);
    if (ret < 0) {
        AI_WARN(" add chr dev failed\n");
        goto FAIL_TO_ADD_AI_CDEV;
    }

    ai_device_st = device_create(_ai_class, NULL, MKDEV(ai_dev_major, ai_dev_minor), NULL, AI_DEVICE_NAME);
    if(ai_device_st == NULL) {
        AI_WARN(" device create ai dev failed\n");
        goto FAIL_TO_CREATE_AI_DEVICE;
    }
    AI_WARN("register chrdev(%d,%d) success.\n", ai_dev_major, ai_dev_minor);
    return 0;
    
FAIL_TO_CREATE_AI_DEVICE:
    cdev_del(dev_cdevp_ai);
FAIL_TO_ADD_AI_CDEV:
    if(dev_cdevp_ai) {
        kfree(dev_cdevp_ai);
        dev_cdevp_ai = NULL;
    }
FAIL_TO_ALLOCATE_AI_CDEV:
    unregister_chrdev_region(MKDEV(ai_dev_major, ai_dev_minor), 1);
    ai_dev_major = 0;
    ai_dev_minor = 0;
    return -1;

}


static int unregister_ai_cdev(void)
{
    device_destroy(_ai_class, MKDEV(ai_dev_major, ai_dev_minor));
    cdev_del(dev_cdevp_ai);
    kfree(dev_cdevp_ai);
    dev_cdevp_ai = NULL;
    unregister_chrdev_region(MKDEV(ai_dev_major, ai_dev_minor), 1);
    ai_dev_major = 0;
    ai_dev_minor = 0;
    return 0;

}



int __init rtk_ai_dev_init(void)
{
    int ret = 0;
    ret = platform_driver_register(&rtk_ai_driver);
    if (ret != 0)
        goto FAILED_REGISTER_PLATFORM_DRIVER;

    _ai_class = class_create(THIS_MODULE, "rtk-ai");

    if (_ai_class == NULL)
        goto FAILED_CREATE_AI_CLASS;

    rtk_ai_platform_dev =platform_device_register_simple("rtk-ai", -1, NULL, 0);
    if (rtk_ai_platform_dev == NULL)
        goto FAILED_REGISTER_PLATFORM_DEVICE;

    if(register_ai_cdev() != 0)
        goto FAILED_REGISTER_AI_CDEV;

		ret=rtk_ai_mc_init();
		ret=rtk_ai_audio_init();

    AI_INFO( "[%s] rtkai device init ok !\n", __func__);

    return 0;
    
FAILED_REGISTER_AI_CDEV:
    platform_device_unregister(rtk_ai_platform_dev);
FAILED_REGISTER_PLATFORM_DEVICE:
    device_destroy(_ai_class, MKDEV(0, 0));
    class_destroy(_ai_class);
FAILED_CREATE_AI_CLASS:
    platform_driver_unregister(&rtk_ai_driver);
FAILED_REGISTER_PLATFORM_DRIVER:
    AI_ERROR( "[%s] ======================================\n",__func__);
    AI_ERROR( "[%s] AI Register Error!\n", __func__);
    AI_ERROR( "[%s] ======================================\n",__func__);
    return -1;


}

static void __exit rtk_ai_dev_uninit(void)
{
    unregister_ai_cdev();
    platform_device_unregister(rtk_ai_platform_dev);
    device_destroy(_ai_class, MKDEV(0, 0));
    class_destroy(_ai_class);
    platform_driver_unregister(&rtk_ai_driver);
    rtk_ai_mc_unInit();
    rtk_ai_audio_unInit();
}

module_init(rtk_ai_dev_init);
module_exit(rtk_ai_dev_uninit);
MODULE_AUTHOR("joshlin, Realtek Semiconductor");
MODULE_LICENSE("GPL");


