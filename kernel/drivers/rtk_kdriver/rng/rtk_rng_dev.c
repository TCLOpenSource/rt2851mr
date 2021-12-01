#include <linux/syscalls.h>
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <mach/io.h>
#include <rtk_kdriver/rng/rtk_rng_dbg.h>
#include <rtk_kdriver/rng/rtk_rng.h>

#define MIN_RNG_READ_SIZE sizeof(unsigned int)

int rng_open(struct inode *inode, struct file *file)
{
    return 0;
}

int rng_release(struct inode *inode, struct file *file)
{
    return 0;
}

ssize_t rng_read(struct file *filp, char __user *buf, size_t count, loff_t *f_pos)
{
    unsigned int random_number = 0;
    
    if(count < MIN_RNG_READ_SIZE)
        return -EFAULT;

    random_number = get_rtk_rng();
    if(copy_to_user(buf, &random_number, MIN_RNG_READ_SIZE))
        return -EFAULT;

    return MIN_RNG_READ_SIZE;
}

static struct file_operations rng_fops = {
    .owner      = THIS_MODULE,
    .open       = rng_open,
    .read       = rng_read,
    .release    = rng_release,
};

static struct miscdevice rng_miscdev = {
    MISC_DYNAMIC_MINOR,
    "rtk_rng",
    &rng_fops
};

int __init rng_module_init(void)
{
    if (misc_register(&rng_miscdev)) {
        rng_warning("rng_module_init failed - register misc device failed");
        return -ENODEV;
    }

    return 0;
}

static void __exit rng_module_exit(void)
{
    misc_deregister(&rng_miscdev);
}

module_init(rng_module_init);
module_exit(rng_module_exit);
MODULE_LICENSE("GPL");
