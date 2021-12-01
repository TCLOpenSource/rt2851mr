//Copyright (C) 2007-2015 Realtek Semiconductor Corporation.

#include <linux/interrupt.h>
#include <linux/of_irq.h>
#include <asm/io.h>
#include <mach/io.h>
#include <mach/rtk_log.h>
//#include <linux/nmi.h>

#include <asm/sections.h>
#include <mach/rtk_platform.h>
#include <linux/platform_device.h>
#include <linux/module.h>
#include "rtk_kdriver/rtd_logger.h"
#include "arm_wrapper.h"

#include <linux/version.h>

int arm_wrapper_set_id=1;
int arm_wrapper_kernel_trap_warning = 1;  // change default to 1
extern int need_monitor_range_dft;

void arm_wrapper_dump (void)
{
    int i=0;
    ARMWRAP_ERR("\n\n");

    for (i=0; i<WRAPPER_NUM; i++)
    {
        ARMWRAP_ERR("set%d: 0x%08x [0x%08x]  - 0x%08x [0x%08x], 0x%08x [0x%08x]\n",
            i+1,(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),
            (SCPU_MEM_TRASH_DBG_END_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
            (SCPU_MEM_TRASH_DBG_CTRL_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i));
    }

    ARMWRAP_ERR("dbg_int:   0x%08x [0x%08x]\n",SCPU_MEM_TRASH_DBG_INT,rtd_inl(SCPU_MEM_TRASH_DBG_INT));
    ARMWRAP_ERR("dbg_addr:  0x%08x [0x%08x]\n",SCPU_MEM_TRASH_DBG_ADDR,rtd_inl(SCPU_MEM_TRASH_DBG_ADDR));
    ARMWRAP_ERR("dbg_rw:  0x%08x [0x%08x]\n",SCPU_MEM_TRASH_DBG_RW,rtd_inl(SCPU_MEM_TRASH_DBG_RW));

    ARMWRAP_ERR("\n\n");
}

void dump_stacks (void);
int clear_arm_wrapper_arange (int set_id)
{
    int id=set_id-1;
    unsigned int start_reg=SCPU_MEM_TRASH_DBG_START_0+id*4;
    unsigned int end_reg =SCPU_MEM_TRASH_DBG_END_0+id*4;
    unsigned int ctrl_reg =SCPU_MEM_TRASH_DBG_CTRL_0+id*4;
    int arm_wrapper_disable=BIT(1);

    if (set_id<1||id>WRAPPER_NUM)
    {
        ARMWRAP_ERR("Set fail! set Id[%d] not in (1-4)\n", set_id);
        return -1;
    }

    //printk("arm_wrapper_enable=%x\n",arm_wrapper_enable);
    rtd_outl(ctrl_reg,arm_wrapper_disable);
    rtd_outl(start_reg, 0);
    rtd_outl(end_reg, 0);

    return 0;
}

int scpu_access_addr(const char * buf)
{
        int set_id;
        unsigned int start;
        unsigned long access_addr;
        char access_type[10];

        memset(access_type, 0, sizeof(access_type));
        if(sscanf(buf, "set%d %s %x", &set_id, access_type, &start)<3)
        {
            pr_err("arm wrapper %s failed, invalid argument - %s\n",access_type, buf);
            return -1;
        }

        pr_info("[%s,%d,%s] %s addr = 0x%x\n",__FILE__,__LINE__,__FUNCTION__,access_type, start);
        access_addr = (unsigned long)phys_to_virt(start);

        if((strncmp(access_type, "read",4)==0)){
                rtd_inl(access_addr);
        }else if(strncmp(access_type, "write",5)==0){
                rtd_outl(access_addr,0);
        }else{
                pr_err("arm wrapper %s failed, invalid argument - %s\n",access_type, buf);
                return -1;
        }

        return 0;
}

int set_arm_wrapper_arange (unsigned long start,unsigned long end,int set_id,WRAPPER_RW rw)
{
    int id=set_id-1;//int id=find_free_dbg_register();

    unsigned int start_reg=SCPU_MEM_TRASH_DBG_START_0+id*4;
    unsigned int end_reg =SCPU_MEM_TRASH_DBG_END_0+id*4;
    unsigned int ctrl_reg =SCPU_MEM_TRASH_DBG_CTRL_0+id*4;

    int arm_wrapper_enable= BIT(1)|BIT(0)|BIT(4)|((int)rw<<2);
    int arm_wrapper_disable=BIT(1);
    //printk("arm_wrapper_enable=%x\n",arm_wrapper_enable);

    if (id<0||id>3)
    {
        ARMWRAP_ERR("Set fail! set Id[%d] not in (1-4)\n", set_id);
        return -1;
    }

    if(start > end)
    {
        ARMWRAP_ERR("Set fail! set[%d] start address(0x%lx) > end address(0x%lx) \n", set_id, start, end);
        return -1;
    }

    rtd_outl(ctrl_reg,arm_wrapper_disable);

    rtd_outl(start_reg, start);
    rtd_outl(end_reg, end);

#if 1
    rtd_outl(ctrl_reg,arm_wrapper_enable);
#else
    rtd_outl(ctrl_reg,arm_wrapper_enable|BIT(4)|BIT(2));
#endif
    arm_wrapper_set_id = (set_id%WRAPPER_NUM)+1;

    return 0;
}

//cat /sys/realtek_boards/arm_wrapper
void arm_wrapper_get (void)
{
    int i=0;

    char* read_write[]= {"R/W  ","read","write","R/W  "};
    unsigned int ctrl;

    for (i=0; i<WRAPPER_NUM; i++)
    {
        ctrl=rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+i*4);
        if (ctrl&BIT(0))
        {
            ARMWRAP_ERR("set%d: 0x%08x-0x%08x, 0x%08x[ctrl]. \e[1;31m %s monitor enabled!\e[0m\n",
                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i),read_write[ctrl>>2&0x3]);
        }
        else
        {
            ARMWRAP_ERR("set%d: 0x%08x-0x%08x, 0x%08x[ctrl].\n",
                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i));
        }
    }

    ARMWRAP_ERR("dbg_int:   0x%08x-0x%08x\n",SCPU_MEM_TRASH_DBG_INT,rtd_inl(SCPU_MEM_TRASH_DBG_INT));
    ARMWRAP_ERR("dbg_addr:  0x%08x-0x%08x\n",SCPU_MEM_TRASH_DBG_ADDR,rtd_inl(SCPU_MEM_TRASH_DBG_ADDR));
    ARMWRAP_ERR("\n\n");
}
#if 0
static int is_buf_full(int ofst, int len)
{
        int n= PAGE_SIZE-ofst-len-1;

        if(n<0){
                return -1;
        }
        return 0;
}
#endif
static int is_pagebuf_full(int ofst)
{
        //int n= PAGE_SIZE-ofst-len-1;
        int n= PAGE_SIZE-ofst -1;

        if(n<0){
                return -1;
        }
        return 0;
}

static int show_msg(char *buf, int ofst, const char * fmt, ...)
{
        va_list args;
        int ret = 0;

        if(buf != NULL){
                buf += ofst;
                if(is_pagebuf_full(ofst) != -1){
                        va_start(args, fmt);
                        ret = vsnprintf(buf, PAGE_SIZE-ofst-1, fmt, args);
                        va_end(args);
                }
        }else{
                va_start(args, fmt);
                //vprintk(fmt,args);
                vprintk_emit(0, LOGLEVEL_ERR, NULL, 0, fmt, args);
                va_end(args);
        }

        return ret;
}

int arm_wrapper_get_info(char *buf)
{
        int i=0;
        int len=0;

        char* read_write[]= {"R/W  ","read","write","R/W  "};
        unsigned int ctrl;

        len += show_msg(buf,len,"\n");

        for (i=0; i<WRAPPER_NUM; i++)
        {
                ctrl=rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+i*4);
                if (ctrl&BIT(0))
                {
                        len += show_msg(buf,len,"set%d: 0x%08x-0x%08x, 0x%08x[ctrl]. \e[1;31m %s monitor enabled!\e[0m\n",
                                        i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                        rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i),read_write[ctrl>>2&0x3]);
                }
                else
                {
                        len += show_msg(buf,len,"set%d: 0x%08x-0x%08x, 0x%08x[ctrl].\n",
                                        i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                        rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i));
                }
        }

        len += show_msg(buf,len,"dbg_int:   0x%08x-0x%08x\n",SCPU_MEM_TRASH_DBG_INT,rtd_inl(SCPU_MEM_TRASH_DBG_INT));
        len += show_msg(buf,len, "dbg_addr:  0x%08x-0x%08x\n",SCPU_MEM_TRASH_DBG_ADDR,rtd_inl(SCPU_MEM_TRASH_DBG_ADDR));
        len += show_msg(buf,len,"\n\n");

        return len;
}

void arm_wrapper_show_last_set(void)
{
        char* read_write[]= {"R/W  ","read","write","R/W  "};
        unsigned int ctrl;
        int i;
        int last_set_id = ((arm_wrapper_set_id-1)?(arm_wrapper_set_id-1):4);

        for (i=0; i<WRAPPER_NUM; i++){
                ctrl=rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+i*4);
                if((i+1) == last_set_id){
                        if (ctrl&BIT(0))
                        {
                            ARMWRAP_ERR("\e[1;33mset%d: 0x%08x-0x%08x, 0x%08x[ctrl]. %s monitor enabled!\e[0m\n",
                                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i),read_write[ctrl>>2&0x3]);
                        }
                        else
                        {
                            ARMWRAP_ERR("\e[1;33mset%d: 0x%08x-0x%08x, 0x%08x[ctrl].\e[0m\n",
                                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i));
                        }
                }else{
                        if (ctrl&BIT(0))
                        {
                            ARMWRAP_ERR("set%d: 0x%08x-0x%08x, 0x%08x[ctrl]. \e[1;31m %s monitor enabled!\e[0m\n",
                                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i),read_write[ctrl>>2&0x3]);
                        }
                        else
                        {
                            ARMWRAP_ERR("set%d: 0x%08x-0x%08x, 0x%08x[ctrl].\n",
                                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i));
                        }
                }
        }
        ARMWRAP_ERR("\n\n");

}

void arm_wrapper_show_last_set_only(void)
{
        char* read_write[]= {"R/W  ","read","write","R/W  "};
        unsigned int ctrl;
        int i;
        int last_set_id = ((arm_wrapper_set_id-1)?(arm_wrapper_set_id-1):4);

        for (i=0; i<WRAPPER_NUM; i++){
                ctrl=rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+i*4);
                if((i+1) == last_set_id){
                        if (ctrl&BIT(0))
                        {
                            ARMWRAP_ERR("\e[1;33mset%d: 0x%08x-0x%08x, 0x%08x[ctrl]. %s monitor enabled!\e[0m\n",
                                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i),read_write[ctrl>>2&0x3]);
                        }
                        else
                        {
                            ARMWRAP_ERR("\e[1;33mset%d: 0x%08x-0x%08x, 0x%08x[ctrl].\e[0m\n",
                                i+1,rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i),rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i),
                                rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i));
                        }
                }
        }
}

//echo "set2,18061500," > /sys/realtek_boards/arm_wrapper
void arm_wrapper_set (const char *buffer)
{
    unsigned int start,end,set_id;
    char str_rw[3];
    WRAPPER_RW rw;
    str_rw[2]=0;

    if(strncmp("show_set",buffer,strlen("show_set")) == 0)
    {
        arm_wrapper_show_last_set();
        return;
    }

    if (strncmp("set",buffer,strlen("set")))
    {
        goto Fail;
    }

    if (buffer[3]-'0'<1 ||buffer[3]-'0'>WRAPPER_NUM)
    {
        pr_err("arm wrapper set failed, expected range[1-%d] \n", WRAPPER_NUM);
        goto Fail;
    }
    set_id=buffer[3]-'0';

    if (strncmp(&buffer[5],"clear",5)==0)
    {
        clear_arm_wrapper_arange(set_id);
        return;
    }
    //eg:  echo "set1 read 0x18404000" > /sys/realtek_boards/arm_wrapper
    if ((strncmp(&buffer[5],"read",4)==0) || (strncmp(&buffer[5],"write",5)==0))
    {
        scpu_access_addr(buffer);
        return;
    }

    if (sscanf(buffer, "set%d %x-%x %2s", &set_id,&start,&end,str_rw)<1)
    {
        ARMWRAP_ERR("arm wrapper set failed, invalid argument - %s\n", buffer);
        goto Fail;
    }
    else
    {
        if(start > end)
        {
            pr_err("\n arm wrapper set failed, MT start range:0x%08x > end range:0x%08x\n", start,end);
            goto Fail;
        }
        if (strcmp("rw",str_rw)==0)
        {
            rw=WRAPPER_READ_WRITE;
        }
        else if (strcmp("r",str_rw)==0)
        {
            rw=WRAPPER_READ;
        }
        else if (strcmp("w",str_rw)==0)
        {
            rw=WRAPPER_WRTIE;
        }
        else
        {
            goto Fail;
        }
    }

    if(set_arm_wrapper_arange(start,end,set_id,rw)==0)
    {
        rtd_outl(SCPU_MEM_TRASH_DBG_INT, BIT(3)| BIT(0));
        //printk("arm wrapper set OK\n");
        //arm_wrapper_dump();
        return;
    }

Fail:
    ARMWRAP_ERR("%s fail.  %s\n\n\n",__func__,buffer);//0x00cd2d00[start], 0xb805c030-0x00cd2d40

    ARMWRAP_ERR("\e[1;32marm wrapper related commands as follow\e[0m: (set no must between 1 and 4)\n");
    ARMWRAP_ERR("cat /sys/realtek_boards/arm_wrapper\n");
    ARMWRAP_ERR("echo \"set2 0x00cd2d00-0x00cd2d40 rw\" > /sys/realtek_boards/arm_wrapper\n");
    ARMWRAP_ERR("echo \"set2 clear\" > /sys/realtek_boards/arm_wrapper\n\n\n");
    return ;
}

int get_arm_wraper_set_id(void)
{
    return arm_wrapper_set_id;
}


extern void show_regs(struct pt_regs *);
int arm_wrapper_slverr(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
{
    int value = 0;
    int read_write = 0;
    int trap_address = 0;
    unsigned char old_loglevel=console_loglevel;

    //SCPU or ACPU,VCPU issued an invalid address access
    value=rtd_inl(SCPU_MEM_TRASH_DBG_INT);
    if(!(value & BIT(4)))
    {
        //ARMWRAP_ERR("%s %d. 0x%08x\n",__func__,__LINE__,value);
        return -1;
    }

    //printk("%s %d\n",__func__,__LINE__);
    console_loglevel=7;
    read_write=rtd_inl(SCPU_MEM_TRASH_DBG_RW)&BIT(0);
    trap_address=rtd_inl(SCPU_MEM_TRASH_DBG_ADDR);
    ARMWRAP_ERR("\n\n\n\n");
    ARMWRAP_ERR("[Memory trash] SCPU has trashed itself (exception) : \e[1;31m%s 0x%08x\e[0m invalid.\n\n",
           read_write?"write":"read",trap_address);

    arm_wrapper_dump();

    //clear interrupt flag bit
    rtd_outl(SCPU_MEM_TRASH_DBG_INT, BIT(4));

    if(regs)
    {
        show_regs(regs);
    }

    dump_stacks();
    rtd_save_keylog(KERN_ERR,WRAP_TAG,"[Memory trash] SCPU has trashed itself: %s 0x%08x invalid.\n\n",
           read_write?"write":"read",trap_address);

    if(1 == arm_wrapper_kernel_trap_warning)
    {
        panic("SCPU has trashed itself ... ");
    }

    console_loglevel=old_loglevel;
    return 0;
}

#define ROUND_UP(x, n) (((x) + (n) - 1u) & ~((n) - 1u))

#ifdef CONFIG_ARM64
void arm_wrapper_dft_set_linux_text (void)
{
    unsigned long addr_start = virt_to_phys(_text);               // linux text start address
    unsigned long addr_end =   virt_to_phys(__start_rodata);      // linux text end address,cannot use __end_rodata

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
    addr_start = virt_to_phys(_stext);
#endif

    set_arm_wrapper_arange(addr_start, addr_end-1, 1, WRAPPER_WRTIE);
}

#else //CONFIG_ARM64
extern char __v7_setup_stack[];
void arm_wrapper_dft_set_linux_text (void)
{
    unsigned long addr_start = virt_to_phys(_text);               // linux text start address
    unsigned long addr_end =   virt_to_phys(__start_rodata);      // linux text end address
    //unsigned long addr_end =   virt_to_phys(__end_rodata);      // cannot use __end_rodata

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
    addr_start = virt_to_phys(_stext);
    set_arm_wrapper_arange(addr_start, addr_end-1, 1, WRAPPER_WRTIE);
#else
    addr_end = (((unsigned long)__v7_setup_stack & 0xffffff00)-1);
    addr_end = virt_to_phys((void*)addr_end);
    set_arm_wrapper_arange(addr_start, addr_end, 1, WRAPPER_WRTIE);

    addr_start = ROUND_UP((unsigned long)__v7_setup_stack,0x100)+0x100;
    addr_start = virt_to_phys((void*)addr_start);
    addr_end   = virt_to_phys(__start_rodata);
    set_arm_wrapper_arange(addr_start, addr_end-1, 2, WRAPPER_WRTIE);
#endif

}
#endif //CONFIG_ARM64

static void arm_wrapper_dft_set_avcpu (void)
{
    unsigned long addr, size;
    size = carvedout_buf_query(CARVEDOUT_AV_OS,(void *)( &addr));
    if (addr && size ) 
    {
        set_arm_wrapper_arange(addr, addr + size - 1, 4, WRAPPER_WRTIE);//protect av area
    }
}

static void arm_wrapper_dft_set(void)
{
    arm_wrapper_dft_set_linux_text();
    arm_wrapper_dft_set_avcpu();
}

irqreturn_t arm_wrapper_intr (int irq, void *dev_id)
{
    int value = 0;
    int read_write = 0;
    int trap_address = 0;
    unsigned char old_loglevel=console_loglevel;

    //SCPU or ACPU,VCPU issued an invalid address access
    value=rtd_inl(SCPU_MEM_TRASH_DBG_INT);
    if(!(value & BIT(4)))
    {
        //ARMWRAP_ERR("%s %d. 0x%08x\n",__func__,__LINE__,value);
        return IRQ_NONE;
    }

    console_loglevel=7;

    //printk("%s %d\n",__func__,__LINE__);
    read_write=rtd_inl(SCPU_MEM_TRASH_DBG_RW)&BIT(0);
    trap_address=rtd_inl(SCPU_MEM_TRASH_DBG_ADDR);
    ARMWRAP_ERR("\n\n\n\n");
    ARMWRAP_ERR("[Memory trash] SCPU has trashed itself (interrupt) : \e[1;31m%s 0x%08x\e[0m invalid.\n\n",read_write?"write":"read",trap_address);

    arm_wrapper_dump();
    //value=(value&(~ (BIT(0)|BIT(3))))|BIT(4);
    //printk("%s %d. value=0x%08x\n",__func__,__LINE__,value);

#if 0
    rtd_outl(SCPU_A12_DBG_INT_reg,value);
#else
    //clear interrupt flag bit
    rtd_outl(SCPU_MEM_TRASH_DBG_INT, BIT(4));
#endif

    //arm_wrapper_get();

#if 1
    dump_stacks();
    rtd_save_keylog(KERN_ERR,WRAP_TAG,"[Memory trash] SCPU has trashed itself: %s 0x%08x invalid.\n\n",read_write?"write":"read",trap_address);
    if(1 == arm_wrapper_kernel_trap_warning)
    {
        panic("SCPU has trashed itself ... ");
    }
#endif

    console_loglevel = old_loglevel;
    return IRQ_HANDLED;
}


static int rtk_arm_warpper_irq_num = -1;
#define IRQ_ARM_WRAPPER IRQ_DCSYS
extern u32 gic_irq_find_mapping(u32 hwirq);
#define IRQ_GET_KERNEL_IRQ_NUM(hwirq)           gic_irq_find_mapping(hwirq)
//c0108000 T _text IRQ_DCSYS IRQ_SECURE_SB2
void __init arm_wrapper_intr_setup (void)
{

    /* Request IRQ */
    //if(request_irq(IRQ_GET_KERNEL_IRQ_NUM(IRQ_ARM_WRAPPER),
    if(request_irq(rtk_arm_warpper_irq_num,
                   arm_wrapper_intr,
                   IRQF_SHARED,
                   "ARM_WRAPPER",
                   arm_wrapper_intr))
    {   
        ARMWRAP_ERR("%s error. cannot register IRQ %d\n", __func__,IRQ_ARM_WRAPPER);//IRQ_DCSYS
        return ;
    }   

    //enable arm wrapper interrupt
    rtd_outl(SCPU_MEM_TRASH_DBG_INT,( BIT(3) | BIT(0)) );
    ARMWRAP_INFO("@%s:    enable arm wrapper interrupt [reserved dbus address for SCPU]\n",__func__);
}

volatile int arm_wrapper_flag;
int get_arm_wrapper_flag (void)
{
    return arm_wrapper_flag;
}

void set_arm_wrapper_flag (void)
{
    arm_wrapper_flag=1;
}

static unsigned int wrapper_start[WRAPPER_NUM];
static unsigned int wrapper_end[WRAPPER_NUM];
static unsigned int wrapper_ctrl[WRAPPER_NUM];
void arm_wrapper_suspend (void)
{
    int i;
    for(i=0;i<WRAPPER_NUM;i++)
    {
        wrapper_start[i]=rtd_inl(SCPU_MEM_TRASH_DBG_START_0+4*i);
        wrapper_end[i]=rtd_inl(SCPU_MEM_TRASH_DBG_END_0+4*i);
        wrapper_ctrl[i]=rtd_inl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i);
    }
}

void arm_wrapper_resume (void)
{
    int i;
    for(i=0;i<WRAPPER_NUM;i++)
    {
        if (wrapper_ctrl[i]&BIT(0))
        {
            rtd_outl(SCPU_MEM_TRASH_DBG_START_0+4*i,wrapper_start[i]);
            rtd_outl(SCPU_MEM_TRASH_DBG_END_0+4*i,wrapper_end[i]);
            rtd_outl(SCPU_MEM_TRASH_DBG_CTRL_0+4*i,wrapper_ctrl[i]|BIT(1)|BIT(0)|BIT(4));
        }
    }
    rtd_outl(SCPU_MEM_TRASH_DBG_INT,( BIT(5) | BIT(3) | BIT(0)) );
}

#include <asm/cacheflush.h>
static int rtk_arm_wrapper_probe (struct platform_device *pdev)
{
    int ret = 0;
#if 0
    struct device_node *np = pdev->dev.of_node;

    if(need_monitor_range_dft)
    {
        flush_cache_all();
        arm_wrapper_dft_set();
        pr_err("%s %d\n",__func__,__LINE__);
    }

    if (!np)
    {
        ARMWRAP_ERR("%s there is no device node\n",__func__);
        return -ENODEV;
    }

    rtk_arm_warpper_irq_num = irq_of_parse_and_map(np, 0);
    if(!rtk_arm_warpper_irq_num){
        ARMWRAP_ERR("%s there is no arm_wrapper irq\n",__func__);
        of_node_put(np);
        return -ENODEV;
    }
    
    arm_wrapper_intr_setup();
#endif
    return ret;
}

static int rtk_arm_wrapper_probe_remove(struct platform_device *pdev)
{
    return 0;
}

#define OF_ARM_WRAPPER_STR "arm_wrapper"
static const struct of_device_id rtk_arm_wrapper_of_match[] =
{
    {
        .compatible = "realtek,arm_wrapper",
    },
    {},
};

static struct platform_driver rtk_platform_arm_wrapper_driver =
{
    .probe = rtk_arm_wrapper_probe,
    .driver = {
        .name = OF_ARM_WRAPPER_STR,
        .of_match_table = rtk_arm_wrapper_of_match,
    },
    .remove = rtk_arm_wrapper_probe_remove,
};
MODULE_DEVICE_TABLE(of, rtk_arm_wrapper_of_match);
module_platform_driver(rtk_platform_arm_wrapper_driver);

void arm_wrapper_monitor_init(void)
{
    arm_wrapper_dft_set();
}

void __init rtk_arm_wrapper_init (void)
{
    struct device_node *np=of_find_node_by_name(NULL, OF_ARM_WRAPPER_STR);
    if (!np)
    {
        pr_err("%s %d error \n",__func__,__LINE__);
        return;
    }

    rtk_arm_warpper_irq_num = irq_of_parse_and_map(np, 0);
    if(!rtk_arm_warpper_irq_num)
    {
        pr_err("%s there is no arm_wrapper irq in dts\n",__func__);
        of_node_put(np);
        return ;
    }

#ifdef CONFIG_DYNAMIC_FTRACE
    flush_cache_all();
#endif

    arm_wrapper_intr_setup();
    arm_wrapper_dft_set();
    return;
}

