#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/fs.h> 
#include <linux/cdev.h>
#include <linux/uaccess.h>
#include <rtk_kdriver/rtk_crt.h>
#include <rtk_kdriver/rtk_gpio.h>
#include <linux/module.h>
#include <linux/interrupt.h>
#include <asm/io.h>
#include <linux/of_irq.h>
#include <linux/irq.h>
#include <linux/platform_device.h>
#include <linux/ioctl.h>
#include <mach/rtk_log.h>
#include "../gpio/rtk_gpio-reg.h"
#include <linux/init.h>
#include <linux/spinlock.h>
#include <linux/blkdev.h> 
#include <linux/errno.h>  
#include <linux/mm.h>  
#include <linux/sched.h>


#define IRQ_GET_KERNEL_IRQ_NUM(hwirq)       gic_irq_find_mapping(hwirq)
#define IRQ_25   SPI_NO(25)
#define DMIC_NR	1
#define DMIC_NAME	"rtk_dmic"
#define RTK_DMIC_NAME        "RTK_DMIC"
#define LSADC_status_reg        0xB8061534
#define LSADC_ST_pad0_reg     0xB8061500
#define DMIC_DET_GPI_18  0xb8061110

typedef struct
{
	unsigned char bSupport;	///< 是否支持???音??;fpi_true ---支持，fpi_false ---不支持
	unsigned char bInnerDevice;	 ///< 若支持???音:fpi_true ---?置??，fpi_false ---外置??；若不支持???音，?????意?
	unsigned char bDeviceStatus;	///< 若支持???音: fpi_true ---?置??已打?或者外置??已接入，fpi_false ---?置??未打?或者外置??未接入；若不支持???音??，?????意?
}DMIC_DEVICE_VOICE_INFO;

typedef enum 
{
	DMIC_DEVICE_INFO_DDR_SIZE,  //?取系?DDR 大小，??入此值?，param?型?uint32_t*，?位?MB
	DMIC_DEVICE_FARFIELD_VOICE,  //?取???音??相?信息，??入此值?，param?型?ST_FPP_SYSTEM_DEVICE_FARFIELD_VOICE_INFO_T*
	DMIC_DEVICE_INFO_MAX,           
}DMIC_DEVICE_INFO_TYPE;

#define RTK_DMIC_IOC_MAGIC	'd'
#define RTK_DMIC_GET_VAL				_IO(RTK_DMIC_IOC_MAGIC,0)
#define RTK_DMIC_SET_CALLBACK			_IO(RTK_DMIC_IOC_MAGIC,1)
#define RTK_DMIC_SET_UNCALLBACK			_IO(RTK_DMIC_IOC_MAGIC,2)

extern u32 gic_irq_find_mapping(u32 hwirq);

unsigned int val_1 = 0,val_2 = 0;
unsigned char key_val = 0;
atomic_t val_3 = ATOMIC_INIT(0);
atomic_t val_4 = ATOMIC_INIT(0);
atomic_t val_5 = ATOMIC_INIT(0);
atomic_t keyval_6 = ATOMIC_INIT(0);

static dev_t devno;
static struct cdev dmic_cdev;
static struct device *dmic_device;
static struct class *dmic_class;
static struct platform_device *dmic_platform_devs = NULL;
static RTK_GPIO_ID pin = rtk_gpio_id(ISO_GPIO, 18);
static DMIC_DEVICE_VOICE_INFO s_type;
static int print_on = 0; // print 0 is off,1 is on
static struct fasync_struct *dmic_fasync;
static int dmic_callback_on = 0;

ssize_t rtk_dmic_show_param(struct device *dev,struct device_attribute *attr,char *buf);
ssize_t rtk_dmic_store_param(struct device *dev,struct device_attribute *attr,const char *buf, size_t count);
static DEVICE_ATTR(print,S_IWUSR|S_IWGRP|S_IRUGO,rtk_dmic_show_param,rtk_dmic_store_param);


#define LED_CALLBACK

#ifdef LED_CALLBACK

extern int dmic_led_onoff;
extern int dmic_led_dev_status;

static void (*dmic_led_callback_t)(void);
extern void dmic_led_callback(void);
extern void set_farfield_set_ledcolor_mute(bool);
#endif

void dmic_status_print(void){

	rtd_printk(KERN_EMERG,"YR",":Y: ::dmic_status_print:0xb8061100 = %x \n",rtd_inl(0xb8061100));
    if((key_val >= 46) && (key_val <= 93))	 // 0.6~1.2v dmic mic off is not used.          
        rtd_printk(KERN_CRIT,"YR",":Y:dmic info: dmic mic off is not used,bSupport=%d,bInnerDevice=%d,bDeviceStatus=%d,det_val=%d,key val = %d. \n",s_type.bSupport,s_type.bInnerDevice,s_type.bDeviceStatus,val_1,key_val);
    
    else if((key_val >= 162) && (key_val <= 200))  // 2.1~2.6v dmic on.         
        rtd_printk(KERN_CRIT,"YR",":Y:dmic info: dmic on,bSupport=%d,bInnerDevice=%d,bDeviceStatus=%d,det_val=%d,key val = %d. \n",s_type.bSupport,s_type.bInnerDevice,s_type.bDeviceStatus,val_1,key_val);
    
    else if((key_val >= 205) && (key_val <= 255))  // 2.65~3.3v	dmic on is form det pin. 
        rtd_printk(KERN_CRIT,"YR",":Y:dmic info: dmic on is form det pin,bSupport=%d,bInnerDevice=%d,bDeviceStatus=%d,det_val=%d,key val = %d. \n",s_type.bSupport,s_type.bInnerDevice,s_type.bDeviceStatus,val_1,key_val);
    
    else
        rtd_printk(KERN_CRIT,"YR",":Y:dmic info: dmic is not set,bSupport=%d,bInnerDevice=%d,bDeviceStatus=%d,det_val=%d,key val = %d \n",s_type.bSupport,s_type.bInnerDevice,s_type.bDeviceStatus,val_1,key_val);
}

ssize_t rtk_dmic_show_param(struct device *dev, struct device_attribute *attr,char *buf){
	
    int ret = 0;

	if(strncmp(attr->attr.name,"print",5) == 0){
        dmic_status_print();
    }

    return ret;
}

ssize_t rtk_dmic_store_param(struct device *dev, struct device_attribute *attr,const char *buf, size_t count){
	
	int val = 0;
    sscanf(buf,"%d\n",&val);

	if(strncmp(attr->attr.name,"print",5) == 0){
		if(val == 0){
			print_on = 0;
        	rtd_printk(KERN_EMERG,"YR",":Y: rtk dmic print is off! [%d] \n",print_on);
		}else if(val == 1){
			print_on = 1;
			rtd_printk(KERN_EMERG,"YR",":Y: rtk dmic print is on! [%d] \n",print_on);
		}
    }

    return count;
}

void rtk_dmic_create_attr(struct device *device){
    device_create_file(device,&dev_attr_print);
}

void rtk_dmic_remove_attr(struct device *device){
    device_remove_file(device, &dev_attr_print);

}

/*
	others pin is need set init val:
	//DMIC_DET Y18 (LS4, ST_GPIO18)
	0x18060204[31:28] = 0xF (設定成GPIO)
	0x18060204[4]=0x1  GPI_EN
	0x18061100[19] = 0 (設定GPI)
*/
void dmic_det_init(void){
    rtd_maskl(0xb8060204, ~(0xF<<28), 0xF<<28); //(GPIO) [31:28] = 0xF 
    rtd_maskl(0xb8060204, ~(0x1<<4), 0x1<<4); //(GPI_EN) 
    iowrite_reg_bit(0xb8061100,19,0); //(GPI) [19] = 0 
	
}

/*
	dmic_interrupt_usb:
	2851M USB mode PIN SET:
	
	0x18061110[19] = 0 (USB模式)

	//DMIC_LED AB22 (ST_GPIO_01, POL)
	0x18060208[23:20] = 0xF (GPIO)
	0x18061100[2]= 0 (GPI)

	//DMIC1_SCL AB21 (ST_GPIO04)
	0x1806020c[31:28]= 0xF (GPIO)
	0x18061100[5] = 0 (GPI)

	//DMIC1_SDA AA19 (ST_GPIO07)
	0x1806020c[7:4] = 0xF (GPIO)
	0x18061100[8]= 0 (GPI)

	//DMIC2_SDA AA21(ST_GPIO06)
	0x1806020c[15:12] = 0xF (GPIO)
	0x18061100[7]= 0 (GPI)

*/

void dmic_interrupt_usb(void){
    
    rtd_printk(KERN_EMERG,"YR",":Y: dmic_interrupt_usb  USB mode! [key_val = %d] \n",key_val);
    rtd_printk(KERN_EMERG,"YR",":Y: :clean:tmp1 = %x,tmp2 =%x \n",rtd_inl(LSADC_ST_pad0_reg), rtd_inl(LSADC_status_reg));

	s_type.bDeviceStatus = 0;

    rtd_maskl(0xb8060208, ~(0xF<<20), 0xF<<20); //(GPIO) [23:20] = 0xF 
    iowrite_reg_bit(0xb8061100,2,0); //(GPI) [2] = 0 
    rtd_maskl(0xb806020c, ~(0xF<<28), 0xF<<28); //(GPIO) [31:28] = 0xF 
    iowrite_reg_bit(0xb8061100,5,0); //(GPI) [5] = 0  
    rtd_maskl(0xb806020c, ~(0xF<<4), 0xF<<4); //(GPIO) [7:4] = 0xF
    iowrite_reg_bit(0xb8061100,8,0); //(GPI) [8] = 0 
    rtd_maskl(0xb806020c, ~(0xF<<12), 0xF<<12);  // (GPIO) [15:12] = 0xF
    iowrite_reg_bit(0xb8061100,7,0); // (GPI) [7] = 0
}

/*
	dmic_interrupt_dmic:
	2851M DMIC mode PIN SET:
	
	0x18061110[19] = 1 (DMIC模式)

	//DMIC_LED AB22 (ST_GPIO_01, POL)
	0x18060208[23:20]= 0x6 (UART0_TX)

	//DMIC1_SCL AB21 (ST_GPIO04)
	0x1806020c[31:28]= 0x9 (DMIC_CLK)

	//DMIC1_SDA AA19 (ST_GPIO07)
	0x1806020c[7:4]= 0x9 (DMIC_D0)
	 
	//DMIC2_SDA AA21(ST_GPIO06)
	0x1806020c[15:12] = 0x9 (DMIC_D1)
*/

void dmic_interrupt_dmic(void){
    
    rtd_printk(KERN_EMERG,"YR",":Y: dmic_interrupt_dmic  DMIC mode! [key_val = %d] \n",key_val);
    rtd_printk(KERN_EMERG,"YR",":Y: :clean:tmp1 = %x,tmp2 =%x,0xb8061100=%x \n",rtd_inl(LSADC_ST_pad0_reg), rtd_inl(LSADC_status_reg),rtd_inl(0xb8061100));

	s_type.bDeviceStatus = 1;
	
	//iowrite_reg_bit(0xb8061100,8,0);
    rtd_maskl(0xb8060208, ~(0xF<<20), 0x6<<20);  //(UART0_TX) [23:20] = 0x4 
    rtd_maskl(0xb806020c, ~(0xF<<28), 0x9<<28); //(DMIC_CLK) [31:28] = 0x3 
    rtd_maskl(0xb806020c, ~(0xF<<4), 0x9<<4); //(DMIC_D0) [7:4] = 0x3
    rtd_maskl(0xb806020c, ~(0xF<<12), 0x9<<12); //(DMIC_D1) [15:12] = 0x3
}

void lsadc_clean_irq(void){
    //rtd_outl(LSADC_status_reg,(rtd_inl(LSADC_status_reg) & ~(0x1 << 0))); //ISO_MISC_LSADC_ST_LSADC_status_reg
    rtd_maskl(LSADC_status_reg, ~(0x1<<0), 0x1<<0);
}

void lsadc_disable_irq(void){
	rtd_maskl(LSADC_status_reg,~(0x1 << 22), (0x0 << 22));
}

void lsadc_enable_irq(void){
	rtd_maskl(LSADC_ST_pad0_reg, ~(0x1 << 12), (0x0 << 12));
	//rtd_maskl(LSADC_status_reg, ~(0xFFFFFF), (0x508000));
	rtd_maskl(LSADC_status_reg, ~(0x1 << 20), (0x1 << 20));

}

void lsadc_lsadc_set_threshold(void){
	//rtk_lsadc_set_threshold(index,threshold);
	rtd_maskl(LSADC_ST_pad0_reg, ~(0x3F << 16), (0xA << 16)); //bit 21~16 thred status,default 10.
}

void lsadc_init_irq(void){
    
    atomic_set(&val_3,0);
    atomic_set(&val_4,0);
    atomic_set(&val_5,0);
    
    rtk_gpio_set_dir(pin, 0);
    rtk_gpio_set_debounce(pin,RTK_GPIO_DEBOUNCE_100us);
    rtk_gpio_set_irq_polarity(pin, 1); 
    rtk_gpio_set_irq_enable(pin, 1);

    rtd_printk(KERN_EMERG,"YR",":Y: :dmic init 0:lsadc_0 = %x,lsadc_st = %x \n", rtd_inl(LSADC_ST_pad0_reg),rtd_inl(LSADC_status_reg));
	//dmic_det_init();
	
	lsadc_enable_irq();
	lsadc_lsadc_set_threshold();
    rtd_printk(KERN_EMERG,"YR",":Y: :dmic init 1:lsadc_0 = %x,lsadc_st = %x \n", rtd_inl(LSADC_ST_pad0_reg),rtd_inl(LSADC_status_reg));
}

void lsadc_check(void){
    key_val = rtd_inl(LSADC_ST_pad0_reg);
}

void dmic_check(void){
    val_1 = (((rtd_inl(DMIC_DET_GPI_18)) >> 19) & (0x1));
    val_2 = rtd_inl(DMIC_DET_GPI_18);
}

void dmic_interrupt_handler(void){  

    dmic_check();
    
    rtd_printk(KERN_EMERG,"YR",":Y: dmic_interrupt_handler val_1 = %x ,val_2 = %x ,val_3 = %d,val_4 =%d,key_val = %d \n",val_1,val_2,atomic_read(&val_3),atomic_read(&val_4),key_val);

    if(val_1 == 0){
        atomic_set(&val_3,1);
        dmic_interrupt_usb();
        atomic_set(&val_4,0);
    }

    if(val_1 == 1){
        atomic_set(&val_3,0);
        dmic_interrupt_dmic();
        atomic_set(&val_4,1);
    }

}

void dmic_info_init(void){

	s_type.bSupport = 1;
	s_type.bInnerDevice = 0;
	s_type.bDeviceStatus = 0;

}

int rtk_dmic_release_fasync (int fd, struct file *filp, int on)
{
	if(!dmic_callback_on)
		return 0;
	
	rtd_printk(KERN_EMERG,"YR",":Y: dmic driver: rtk_dmic_release_fasync \n");	
	
	return fasync_helper (fd,filp,on,&dmic_fasync);
}

static int rtk_dmic_fasync (int fd, struct file *filp, int on)
{
	if(!dmic_callback_on)
		return 0;
		
	rtd_printk(KERN_EMERG,"YR",":Y: dmic driver: rtk_dmic_fasync \n");	
	
	return fasync_helper (fd,filp,on,&dmic_fasync);
}

#ifdef LED_CALLBACK
static int dmic_led_callback_proc(void){
	
	dmic_led_onoff = s_type.bInnerDevice;
	dmic_led_dev_status = s_type.bDeviceStatus;
	dmic_led_callback_t = dmic_led_callback;

	if(!dmic_led_callback_t)
		return 0;

	dmic_led_callback_t();

	//rtd_printk(KERN_EMERG,"YR",":Y: dmic dmic_led_callback_proc dmic_led_onoff =%d,dmic_led_dev_status=%d \n",dmic_led_onoff,dmic_led_dev_status);
	return 0;
}

#endif

static int dmic_user_callback_proc(void){

	if(!dmic_callback_on)
		return -1;
		
	kill_fasync(&dmic_fasync, SIGIO, POLL_IN);
	rtd_printk(KERN_EMERG,"YR",":Y: dmic dmic_user_callback_proc \n");

	return 0;
}

static int user_callback_proc(void){

	dmic_user_callback_proc();
#ifdef LED_CALLBACK
	dmic_led_callback_proc();
#endif

    return 0;
}

static irqreturn_t dmic_irq(int irq,void *dev_id){
   
	if(print_on)
		dmic_status_print();
		
#if 0  
	// check key -> val

	lsadc_clean_irq();   
    lsadc_check();
	
	if(atomic_read(&keyval_6) == 0){
	    if((key_val >= 38) && (key_val <= 93)){
	        if(atomic_read(&val_5) == 1)
	            return IRQ_NONE;
	        
	        dmic_interrupt_usb();
	        atomic_set(&val_5,1);
	        return IRQ_HANDLED;
	    }
	    else if((key_val >= 162) && (key_val <= 208)){
	        if(atomic_read(&val_5) == 2)
	            return IRQ_NONE;
	                
	        dmic_interrupt_dmic();
	        atomic_set(&val_5,2);
	        return IRQ_HANDLED;
	    }
		s_type.bInnerDevice = 1;
	}else{
	    dmic_check();
	    if((atomic_read(&val_3) != val_1) && (atomic_read(&val_4) == val_1))
	        return IRQ_NONE;
	     
	    dmic_interrupt_handler();
		s_type.bInnerDevice = 0;
	}
#else
	//check val -> key
	dmic_check();
	val_1 = 0;
	
	if(val_1 == 1){	
		s_type.bInnerDevice = 0;
	    if((atomic_read(&val_3) != val_1) && (atomic_read(&val_4) == val_1))
	        return IRQ_NONE;
	     
	    dmic_interrupt_handler();
		user_callback_proc();
		
		lsadc_check();
		lsadc_disable_irq();
		atomic_set(&val_5,0);
		
	}else{

		if(s_type.bInnerDevice == 0)
			lsadc_enable_irq();
		
		lsadc_lsadc_set_threshold();
		lsadc_clean_irq();
	    lsadc_check();
		
		s_type.bInnerDevice = 1;
		
	    if((key_val >= 46) && (key_val <= 93)){	 // 0.6~1.2v dmic mic off is not used.    
	        if(atomic_read(&val_5) == 1)
	            return IRQ_NONE;
			if(s_type.bInnerDevice == 1)
				set_farfield_set_ledcolor_mute(1);
	        dmic_interrupt_usb();
	        atomic_set(&val_5,1);
			atomic_set(&val_3,0);
			atomic_set(&val_4,0);
			
	    }
	    else if((key_val >= 162) && (key_val <= 200)){  // 2.1~2.6v dmic on.
	        if(atomic_read(&val_5) == 2)
	            return IRQ_NONE;	                
	        dmic_interrupt_dmic();
	        atomic_set(&val_5,2);
			atomic_set(&val_3,0);
			atomic_set(&val_4,0);
			if(s_type.bInnerDevice == 1)
				set_farfield_set_ledcolor_mute(0);
	    }
		else if((key_val >= 205) && (key_val <= 255)){  // 2.65~3.3v  dmic on is form det pin. 

			s_type.bInnerDevice = 0;
			if((atomic_read(&val_3) != val_1) && (atomic_read(&val_4) == val_1))
        		return IRQ_NONE;
     
			dmic_interrupt_handler();
			atomic_set(&val_5,0);
		}	
		user_callback_proc();
	}
#endif	

	rtd_printk(KERN_EMERG,"YR",":Y: dmic dmic irq,bSupport =%d,bInnerDevice=%d,bDeviceStatus=%d,val_1 = %d ,key_val = %d,threshold = %x.\n",s_type.bSupport,s_type.bInnerDevice,s_type.bDeviceStatus,val_1,key_val,rtd_inl(LSADC_ST_pad0_reg));
			
    return IRQ_HANDLED;
}

static int rtk_dmic_open(struct inode *inode, struct file *filp){
	rtd_printk(KERN_EMERG,"YR",":Y: rtk_dmic_open \n");
    return 0;
}

static int rtk_dmic_close(struct inode *inode, struct file *filp){

	if(!dmic_callback_on)
		return 0;
	
	rtk_dmic_release_fasync(-1,filp,0);
	
    return 0;
}

static ssize_t rtk_dmic_read(struct file *filp, char __user *buf, size_t count, loff_t *fpos){
    return 0;
}

static ssize_t rtk_dmic_write(struct file *filp, const char __user *buf, size_t count, loff_t *fpos){
    return 0;
}

static long rtk_dmic_ioctl(struct file * file, unsigned int cmd, unsigned long arg){
    
    int err = 0;
	
    rtd_printk(KERN_EMERG,"YR",":Y: rtk_dmic_ioctl cmd = %d \n",cmd);

	switch(cmd) {
	    case RTK_DMIC_GET_VAL:
			
			rtd_printk(KERN_EMERG,"YR",":Y: dmic device_info,bSupport =%d,bInnerDevice=%d,bDeviceStatus=%d \n",s_type.bSupport,s_type.bInnerDevice,s_type.bDeviceStatus);
			err = copy_to_user((void __user *)arg,&s_type,sizeof(s_type));
			if (err < 0){
				rtd_printk(KERN_EMERG,"YR",":Y: dmic ioctl RTK_DMIC_GET_VAL: , copy data to user space failed, ret = %d \n",err);
                return -EFAULT;
            }
			break;

		case RTK_DMIC_SET_CALLBACK:

			err = copy_from_user((void *)&dmic_callback_on, (const void __user *)arg, sizeof(dmic_callback_on));
						
			if (err < 0){
				rtd_printk(KERN_EMERG,"YR",":Y: dmic ioctl RTK_DMIC_SET_CALLBACK , copy data from user space failed, ret = %d \n",err);
                return -EFAULT;
            }
				
			rtd_printk(KERN_EMERG,"YR",":Y: ioctl set callback dmic_callback_on =%d \n",dmic_callback_on);
			break;

		case RTK_DMIC_SET_UNCALLBACK:

			err = copy_from_user((void *)&dmic_callback_on, (const void __user *)arg, sizeof(dmic_callback_on));
						
			if (err < 0){
				rtd_printk(KERN_EMERG,"YR",":Y: dmic ioctl RTK_DMIC_SET_UNCALLBACK , copy data from user space failed, ret = %d \n",err);
                return -EFAULT;
            }
				
			rtd_printk(KERN_EMERG,"YR",":Y: ioctl set uncallback dmic_callback_on =%d \n",dmic_callback_on);
			break;	
	    
	    default:
	        err = -1;
			rtd_printk(KERN_EMERG,"YR",":Y:  rtk_dmic_ioctl %d failed \n",cmd);
	}
	
    return err;
}

static int rtk_dmic_platform_driver_probe(struct platform_device *pdev){
    return 0;
}

static int rtk_dmic_platform_driver_remove(struct platform_device *pdev){
    return 0;
}

static int rtk_dmic_platform_driver_suspend(struct device *dev){
	
    rtd_printk(KERN_EMERG,"YR",":Y: dmic suspend  \n");
	lsadc_disable_irq();
	
    return 0;
}

static int rtk_dmic_platform_driver_resume(struct device *dev){
	
    rtd_printk(KERN_EMERG,"YR",":Y: dmic resume  \n");
    lsadc_init_irq();
    
    return 0;
}
    
static const struct of_device_id rtk_dmic_match[] = {
    {.compatible = DMIC_NAME,},
    {},
};

MODULE_DEVICE_TABLE(of, rtk_dmic_match);

static struct file_operations fsops = {
    .owner = THIS_MODULE,
    .open = rtk_dmic_open,
    .release = rtk_dmic_close,
    .read = rtk_dmic_read,
    .write = rtk_dmic_write,
    .unlocked_ioctl = rtk_dmic_ioctl,
    .fasync	 =  rtk_dmic_fasync,
#ifdef CONFIG_COMPAT
	.compat_ioctl = rtk_dmic_ioctl,
#endif
    
};

static const struct dev_pm_ops rtk_dmic_pm_ops = {
    .suspend = rtk_dmic_platform_driver_suspend,
    .resume = rtk_dmic_platform_driver_resume,
};

static struct platform_driver dmic_platform_driver = {
    .driver = {
        .name	=  DMIC_NAME,
        .owner	= THIS_MODULE,
        .bus	= &platform_bus_type,
        .of_match_table = of_match_ptr(rtk_dmic_match),
        .pm		= &rtk_dmic_pm_ops,
    },
    .probe  = rtk_dmic_platform_driver_probe,
    .remove = rtk_dmic_platform_driver_remove,
} ;

static int __init rtk_dmic_platform_driver_init(void){
    
    int ret = 0;
    rtd_printk(KERN_EMERG,"YR",":Y: rtk_dmic_platform_driver_init.\n");

    lsadc_init_irq();
    
    dmic_platform_devs = platform_device_register_simple(DMIC_NAME, -1, NULL, 0);
    if(platform_driver_register(&dmic_platform_driver) != 0) {
        rtd_printk(KERN_EMERG,"YR",":Y: fail to register dmic_platform_driver driver.\n");
        platform_device_unregister(dmic_platform_devs);
        return -1;
    }
   
    if(request_irq(gic_irq_find_mapping(IRQ_25),dmic_irq,IRQF_SHARED,DMIC_NAME,(void *)dmic_platform_devs)){
        rtd_printk(KERN_EMERG,"YR",":Y: dmic: cannot register rtk_dmic_dts IRQ %d\n", gic_irq_find_mapping(IRQ_25));
        free_irq(IRQ_GET_KERNEL_IRQ_NUM(IRQ_25),NULL);
        ret = -1;
    }

    rtd_printk(KERN_EMERG,"YR",":Y: dmic:1: register IRQ %d\n", gic_irq_find_mapping(IRQ_25));

    return ret;
}

static void __exit rtk_dmic_platform_driver_uninit(void){
    
    platform_driver_unregister(&dmic_platform_driver);
}

static int __init rtk_dmic_init(void){
    
    int ret;

	
    rtd_printk(KERN_EMERG,"YR",":Y: rtk_dmic_init init \n");

	ret = alloc_chrdev_region(&devno, 0, 1, DMIC_NAME);
    if (ret) {
        rtd_printk(KERN_EMERG,"YR",":Y: can't alloc chrdev\n");
        return ret;
    }
	
	dmic_class = class_create(THIS_MODULE, DMIC_NAME);
    if (dmic_class == NULL)
        rtd_printk(KERN_EMERG,"YR",":Y: dmic: class failed\n");
	
    ret = rtk_dmic_platform_driver_init();
    if(ret < 0){
        rtd_printk(KERN_EMERG,"YR",":Y: dmic: register irq failed\n");
    }

	cdev_init(&dmic_cdev, &fsops);
    dmic_cdev.owner = THIS_MODULE;
    dmic_cdev.ops = &fsops;
    ret = cdev_add(&dmic_cdev,devno,DMIC_NR);
    if (ret) {
        rtd_printk(KERN_EMERG,"YR",":Y: dmic: add cdev failed\n");
        goto add_err;
    }
	
	dmic_device = device_create(dmic_class,NULL,devno,NULL,DMIC_NAME);
	rtk_dmic_create_attr(dmic_device);
	
	dmic_info_init();
		
    return 0;

add_err:
    unregister_chrdev_region(devno, DMIC_NR);	
    class_destroy(dmic_class);
    device_destroy(dmic_class,devno);

    return ret;
}

static void __exit rtk_dmic_exit(void){    
    
    rtd_printk(KERN_EMERG,"YR",":Y: rtk_dmic_exit exit \n");
    free_irq(IRQ_GET_KERNEL_IRQ_NUM(IRQ_25),NULL);
    rtk_dmic_platform_driver_uninit();
          
    cdev_del(&dmic_cdev);   
	rtk_dmic_remove_attr(dmic_device);
	device_destroy(dmic_class,devno);
    class_destroy(dmic_class);
    unregister_chrdev_region(devno, DMIC_NR);
    
}

module_init(rtk_dmic_init);
module_exit(rtk_dmic_exit);

MODULE_AUTHOR(" Yerui ");
MODULE_LICENSE("GPL");
