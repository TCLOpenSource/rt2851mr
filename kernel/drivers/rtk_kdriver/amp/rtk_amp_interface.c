#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/platform_device.h>
#include <linux/printk.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <mach/platform.h>
#include <mach/rtk_platform.h>
#include "rtk_amp_interface.h"

#ifdef CONFIG_REALTEK_PCBMGR
#include <mach/pcbMgr.h>
#endif

static struct amp_controller rtk_amp;
static struct workqueue_struct *ampWq = NULL;
static struct delayed_work amp_delayWork;

extern platform_info_t platform_info;

MODULE_LICENSE("Dual BSD/GPL");

#define AMP_MAJOR  0
#define DRV_NAME   "RTKamp"

static const char  drv_name[] = DRV_NAME;
static int amp_boot_sel = 0;
static int amp_boot_addr = 0;

#ifdef CONFIG_PM
static int amp_suspend(struct device *dev);
static int amp_resume(struct device *dev);

static struct platform_device *amp_devs;

static const struct dev_pm_ops amp_pm_ops = {
        .suspend    = amp_suspend,
        .resume     = amp_resume,
};
#endif

static struct platform_driver amp_driver = {
        .driver = {
                .name         = (char *)drv_name,
                .bus          = &platform_bus_type,
#ifdef CONFIG_PM
                .pm           = &amp_pm_ops,
#endif
        },
};

void rtk_amp_ops_set(int sel)
{
    switch(sel){
        memset(rtk_amp.name , 0 , sizeof(rtk_amp.name) );
        case RTK_ALC1310:
            rtk_amp.ops = alc1310_func;
            rtk_amp.addr_size = ALC1310_ADDR_SIZE;
            rtk_amp.data_size = ALC1310_DATA_SIZE;            
            rtk_amp.param_get = alc1310_param_get;
            rtk_amp.param_set = alc1310_param_set;
            rtk_amp.mute_set = alc1310_mute_set;
            rtk_amp.dump_all = alc1310_dump_all;
            snprintf(rtk_amp.name , 32 , "ALC1310");
            break;

        case ESMT_AD82010:
            rtk_amp.ops = ad82010_func;
            rtk_amp.addr_size = AD82010_ADDR_SIZE;
            rtk_amp.data_size = AD82010_DATA_SIZE;            
            rtk_amp.param_get = ad82010_param_get;
            rtk_amp.param_set = ad82010_param_set;
            rtk_amp.mute_set = ad82010_mute_set;
            rtk_amp.dump_all = ad82010_dump_all;
            snprintf(rtk_amp.name , 32 , "AD82010");
            break;

        case TI_TAS5751:
            rtk_amp.ops = tas5751_func;
            rtk_amp.addr_size = TAS5751_ADDR_SIZE;
            rtk_amp.data_size = TAS5751_DATA_SIZE;
            rtk_amp.param_get = tas5751_param_get;
            rtk_amp.param_set = tas5751_param_set;
            rtk_amp.mute_set = tas5751_mute_set;
            rtk_amp.dump_all = tas5751_dump_all;
            snprintf(rtk_amp.name , 32 , "TAS5751");
            break;

        case TI_TAS5707:
            rtk_amp.ops = tas5707_func;
            rtk_amp.addr_size = TAS5707_ADDR_SIZE;
            rtk_amp.data_size = TAS5707_DATA_SIZE;
            rtk_amp.param_get = tas5707_param_get;
            rtk_amp.param_set = tas5707_param_set;
            rtk_amp.mute_set = tas5707_mute_set;
            rtk_amp.dump_all = tas5707_dump_all;
            snprintf(rtk_amp.name , 32 , "TAS5707");
            break;

        case TI_TAS5711:
            rtk_amp.ops = tas5711_func;
            snprintf(rtk_amp.name , 32 , "TAS5711");
            rtk_amp.amp_reset = tas5707_amp_reset;
	     /*rtk_amp.param_get = tas5707_param_get;
            rtk_amp.param_set = tas5707_param_set;
            rtk_amp.mute_set = tas5707_mute_set;
            rtk_amp.dump_all = tas5707_dump_all;*/
            break;

       case RTK_ALC1312:
            rtk_amp.ops = alc1312_func;
            rtk_amp.addr_size = ALC1312_ADDR_SIZE;
            rtk_amp.data_size = ALC1312_DATA_SIZE;
            rtk_amp.param_get = alc1312_param_get;
            rtk_amp.param_set = alc1312_param_set;
            rtk_amp.mute_set = alc1312_mute_set;
            rtk_amp.dump_all = alc1312_dump_all;
            break;

        default:
            AMP_ERR("%s fail , set to ALC1310 , but maybe get no sound due to AMP power on setting incorrect in bootcode \n",__func__ );
            rtk_amp.ops = alc1310_func;
            rtk_amp.param_get = alc1310_param_get;
            rtk_amp.param_set = alc1310_param_set;
            rtk_amp.mute_set = alc1310_mute_set;
            rtk_amp.dump_all = alc1310_dump_all;
            snprintf(rtk_amp.name , 32 , "ALC1310");
    }

    AMP_ERR("%s amp name = %s \n",__func__, rtk_amp.name );
}

int rtk_amp_i2c_id(void)
{
    return rtk_amp.amp_i2c_id;
}

int amp_get_i2c_id(void)
{
    unsigned long long param;

    if (pcb_mgr_get_enum_info_byname("AMP_I2C", &param) != 0)
    {
        AMP_ERR("%s line:%d bootcode pcb info lose to define  \"AMP_I2C\"  \n",__func__, __LINE__ );
        return -1;
    }

    AMP_WARN("%s line:%d get amp I2c id = %lld  \n",__func__, __LINE__  , param );

    return param;
}

int amp_get_addr(void)
{
    unsigned long long param;

    if (pcb_mgr_get_enum_info_byname("AMP_DEVICE_ADDR", &param) != 0)
    {
        AMP_ERR("%s line:%d bootcode pcb info lose to define  \"AMP_DEVICE_ADDR\"  \n",__func__, __LINE__ );
        return -1;
    }

    AMP_WARN("%s line:%d get amp slave address(8bit) = %llx  \n",__func__, __LINE__  , param );

    return (param >> 1);
}

void do_ampOps(void)
{
    AMP_ERR("[%s] id = %d , addr = 0x%X \n", __func__ , rtk_amp.amp_i2c_id,rtk_amp.slave_addr );

    rtk_amp.ops(rtk_amp.amp_i2c_id,rtk_amp.slave_addr);
}

void _init_amp_delay_wq(void *work_queue_func )
{
    AMP_INFO("[%s] \n", __func__ );

    if (NULL == ampWq)
    {
        ampWq = create_workqueue("Amp workqueue");
        if (NULL == ampWq)
        {
            AMP_ERR("[%s] ERROR: Create Amp workqueue failed!\n", __func__ );
        }
        else
        {
            AMP_ERR("[%s] Create Amp workqueue successful!\n", __func__ );
            INIT_DELAYED_WORK(&amp_delayWork, (void *)work_queue_func);
        }
    }

}

int _start_amp_delay_wq(unsigned int delayms)
{
    int ret = -1;

    AMP_ERR("[%s] \n", __func__ );

    if (ampWq)
    {
        ret = queue_delayed_work(ampWq, &amp_delayWork, msecs_to_jiffies(delayms));
    }

    return ret;
}

void _cancel_amp_delay_wq(void)
{
    AMP_ERR("[%s] \n", __func__ );
    if (ampWq)
    {
        cancel_delayed_work(&amp_delayWork);
        flush_workqueue(ampWq);
    }
}


static int amp_suspend(struct device *dev)
{
    AMP_WARN("[AMP] amp_notify_suspend\n");
    return 0;
}

static int amp_resume(struct device *dev)
{

// Please notice that this is only for REALTEK_AMP_TAS5711 & REALTEK_AMP_ACL1310
// If use different IC, please change this.
    if(rtk_amp.amp_reset != NULL)
    {
        rtk_amp.amp_reset();
    }
#ifdef CONFIG_RTK_KDRV_AMP_INIT_SKIP
#else
    AMP_WARN("[AMP] amp_notify_resume\n");
    rtk_amp.ops(rtk_amp.amp_i2c_id,rtk_amp.slave_addr);
#endif
    return 0;
}

static char *amp_devnode(struct device *dev, mode_t *mode)
{
    return NULL;
}


struct file_operations amp_fops = {
        .owner                  = THIS_MODULE,
};

int parser_amp_cmd(const char *buf, int len,unsigned char *data)
{
    char* const delim = " ";
    char *token;
    int i = 0;
    while (NULL != (token = strsep((char **)&buf, delim))) {
        if(i >= 1)
        {
             data[i-1] = (unsigned char)simple_strtol( token,NULL,16);
        }
        i++;
    }
    if(i == len)
        return 0;
    else
        return (-1);
}

ssize_t rtk_amp_show_param(struct device *dev,
                            struct device_attribute *attr, char *buf)
{
    ssize_t ret = 0;
    char *buf_info = NULL;

    buf_info = kmalloc(PAGE_SIZE, GFP_KERNEL);
    if(buf_info == NULL)
        return ret;
    buf_info[0] = 0;

    if (strcmp(attr->attr.name, "amp_dump") == 0) {
        rtk_amp.dump_all(buf_info,rtk_amp.amp_i2c_id,rtk_amp.slave_addr);
        ret = sprintf(buf, "%s\n", buf_info);
    }
    else if (strcmp(attr->attr.name, "amp_slave_addr") == 0) {
        AMP_WARN("AMP Slave Address (8bit):\n");
        ret = sprintf(buf, "%x\n", (rtk_amp.slave_addr << 1));
    }

    kfree(buf_info);
    return ret;
}

ssize_t rtk_amp_store_param(struct device *dev,
                           struct device_attribute *attr,
                           const char *buf, size_t count)
{
    int ret = 0;
    int on_off = 0;
    char cmd1[5];
    unsigned char data[16] = {0};

    if (strcmp(attr->attr.name, "amp_mute") == 0) {
        sscanf(buf, "%d\n",&on_off);
        ret = rtk_amp.mute_set(on_off,rtk_amp.amp_i2c_id,rtk_amp.slave_addr);
    }
    else if (strcmp(attr->attr.name, "amp_param") == 0) {
        sscanf(buf, "%s\n", &cmd1[0]);
        if (strcmp(cmd1, "get") == 0) {
            ret = parser_amp_cmd(buf,rtk_amp.addr_size,data);
            ret = rtk_amp.param_get(data,rtk_amp.amp_i2c_id,rtk_amp.slave_addr);
        }
        else if(strcmp(cmd1, "set") == 0) {
           ret = parser_amp_cmd(buf ,rtk_amp.addr_size+rtk_amp.data_size, data);
           ret = rtk_amp.param_set(data,rtk_amp.amp_i2c_id,rtk_amp.slave_addr);
        }
        else if(strcmp(cmd1, "init") == 0) {
           rtk_amp.ops(rtk_amp.amp_i2c_id,rtk_amp.slave_addr);
        }
        else {
           AMP_ERR("No this amp command\n");
        }

    }
    return count;
}

DEVICE_ATTR(amp_slave_addr, S_IWUSR | S_IWGRP | S_IRUGO, rtk_amp_show_param,
                    rtk_amp_store_param);
DEVICE_ATTR(amp_mute, S_IWUSR | S_IWGRP | S_IRUGO, rtk_amp_show_param,
                    rtk_amp_store_param);
DEVICE_ATTR(amp_dump, S_IWUSR | S_IWGRP | S_IRUGO, rtk_amp_show_param,
                    rtk_amp_store_param);
DEVICE_ATTR(amp_param, S_IWUSR | S_IWGRP | S_IRUGO, rtk_amp_show_param,
                    rtk_amp_store_param);
DEVICE_ATTR(amp_init, S_IWUSR | S_IWGRP | S_IRUGO, rtk_amp_show_param,
                    rtk_amp_store_param);


static struct class *amp_class = NULL;
static struct cdev amp_cdev;
static struct device *amp_device_this;

static int rtk_amp_init(void) {
        int result = 0;
        dev_t dev = MKDEV(AMP_MAJOR, 0);

        AMP_ERR("amp: AMP init for Realtek AMP(2016/10/25)\n");

        result = register_chrdev_region(dev, 1, "RTKamp");
        if (result < 0) {
            AMP_ERR("amp: can not get chrdev region...\n");
            return result;
        }

        amp_class = class_create(THIS_MODULE, "RTKamp");
        if (IS_ERR(amp_class)) {
            AMP_ERR("amp: can not create class...\n");
            result = PTR_ERR(amp_class);
            goto fail_class_create;
        }

        amp_class->devnode = amp_devnode;

        amp_devs = platform_device_register_simple("RTKamp", -1, NULL, 0);
        if (platform_driver_register(&amp_driver) != 0) {
            AMP_ERR("amp: can not register platform driver...\n");
            result = -EINVAL;
            goto fail_platform_driver_register;
        }

        cdev_init(&amp_cdev, &amp_fops);
        amp_cdev.owner = THIS_MODULE;
        amp_cdev.ops = &amp_fops;
        result = cdev_add(&amp_cdev, dev, 1);
        if (result < 0) {
            AMP_ERR("amp: can not add character device...\n");
            goto fail_cdev_init;
        }
        amp_device_this = device_create(amp_class, NULL, dev, NULL, "RTKamp");
        device_create_file(amp_device_this,&dev_attr_amp_slave_addr);
        device_create_file(amp_device_this,&dev_attr_amp_mute);
        device_create_file(amp_device_this,&dev_attr_amp_dump);
        device_create_file(amp_device_this,&dev_attr_amp_param);

        rtk_amp.amp_i2c_id = amp_get_i2c_id();
        if(rtk_amp.amp_i2c_id == (-1))
        {
            AMP_ERR("%s line:%d amp i2c id failed \n",__func__, __LINE__);
            return -1;
        }

        if(amp_boot_addr == AMP_ADDR_NULL)
        {
            rtk_amp.sel_index = TI_TAS5707;
            rtk_amp.slave_addr = amp_get_addr();
            if(rtk_amp.slave_addr == (-1))
            {
                AMP_ERR("%s line:%d amp slave address failed \n",__func__, __LINE__);
                return -1;
            }
        }
        else{
            rtk_amp.sel_index = amp_boot_sel;
            rtk_amp.slave_addr = amp_boot_addr;
        }

        rtk_amp_ops_set(rtk_amp.sel_index);
#ifdef CONFIG_RTK_KDRV_AMP_INIT_SKIP
#else
        _init_amp_delay_wq( &do_ampOps );
        _start_amp_delay_wq(0);
#endif
        AMP_ERR("\n AMP I2C Port_Id2  =  %d Slave_addr(7bit):%x\n", rtk_amp.amp_i2c_id,  rtk_amp.slave_addr);

#ifdef CONFIG_RTK_AMP_USER_RESUME
        amp_devs->dev.power.is_userresume = true;
        device_enable_async_suspend(&(amp_devs->dev));
#endif

        return 0;

fail_cdev_init:
        platform_driver_unregister(&amp_driver);
fail_platform_driver_register:
        platform_device_unregister(amp_devs);
        amp_devs = NULL;
        class_destroy(amp_class);
fail_class_create:
        amp_class = NULL;
        unregister_chrdev_region(dev, 1);
        return result;

}

static int __init amp_ops_init(char *options)
{

    if(options == NULL){
        AMP_ERR("boot amp select is NULL\n");
        amp_boot_sel = AMP_SEL_NULL;
        amp_boot_addr = AMP_ADDR_NULL;
    }
    else{
        AMP_ERR("boot select amp:: %s\n", options);
        if (sscanf(options, "%d-%x", &amp_boot_sel, &amp_boot_addr) < 1){
            return 1;
        }

    }

    AMP_ERR("boot select amp sel_index = %d, addr = %x\n",amp_boot_sel, amp_boot_addr);
    return 1;
}

early_param("amp", amp_ops_init);

static void rtk_amp_exit(void) {
    dev_t dev = MKDEV(AMP_MAJOR, 0);

    if ((amp_devs == NULL) || (amp_class == NULL))
        BUG();

    device_destroy(amp_class, dev);
    cdev_del(&amp_cdev);

    platform_driver_unregister(&amp_driver);
    platform_device_unregister(amp_devs);
    amp_devs = NULL;

    class_destroy(amp_class);
    amp_class = NULL;

    device_remove_file(amp_device_this, &dev_attr_amp_slave_addr);
    device_remove_file(amp_device_this, &dev_attr_amp_mute);
    device_remove_file(amp_device_this, &dev_attr_amp_dump);
    device_remove_file(amp_device_this, &dev_attr_amp_param);

    unregister_chrdev_region(dev, 1);
}

fs_initcall(rtk_amp_init);
module_exit(rtk_amp_exit);


