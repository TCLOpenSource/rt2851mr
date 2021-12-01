/******************************************************************************
*
*   Copyright(c) 2016 Realtek Semiconductor Corp. All rights reserved.
*
*   @author realtek.com
*
******************************************************************************/
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/interrupt.h>
#include <linux/delay.h>
#include <linux/dma-mapping.h>
#include <linux/sched.h>
#include <linux/ioctl.h>
#include <linux/device.h>
#include <mach/io.h>
#include <mach/irqs.h>
#include <rbus/md_reg.h>
#include <rbus/pll27x_reg_reg.h>
#include <rbus/pll_reg_reg.h>
#include <linux/kthread.h>
#include <linux/err.h>
#include <linux/freezer.h>
#include <rtk_kdriver/rtk_crt.h>
#include <rtk_kdriver/md/rtk_md_debug.h>
#include <rtk_kdriver/md/rtk_md_hw.h>

extern u32 gic_irq_find_mapping(u32 hwirq);
#define IRQ_GET_KERNEL_IRQ_NUM(hwirq)       gic_irq_find_mapping(hwirq)

struct md_dev *md_drv_dev;
extern bool md_dbg_onoff;
static struct completion md_check_thread_exited;
static struct task_struct * g_md_check_task_struct = NULL;
static int g_md_check_thread_exited_flag = 0;
bool g_enable_multi_req = 0;
int g_rtk_md_irq_num = -1;

static void rtk_md_self_checking(bool do_self_check);

static void rtk_md_hw_init(struct md_dev *pdev)
{
    if (down_interruptible(&md_drv_dev->sem))
        return;

    rtk_md_init_reg(pdev, g_enable_multi_req);

    pdev->CmdWptr = 0;
    pdev->wrptr = 0;
    pdev->u64InstCnt = 0;
    pdev->u64IssuedInstCnt = 0;
    
    up(&md_drv_dev->sem);

}

static void rtk_md_hw_reset(void)
{
    if (down_interruptible(&md_drv_dev->sem))
        return;

    rtk_md_dump_reg(NULL);
    rtk_md_store_kv_reg();
    rtk_md_hw_init(md_drv_dev);

    up(&md_drv_dev->sem);
}

static void rtk_md_reset_and_restore(struct md_dev *pdev)
{
    if (down_interruptible(&md_drv_dev->sem))
        return;
    rtk_md_dump_reg(NULL);
    rtk_md_store_kv_reg();
    rtk_md_reset_reg(pdev, g_enable_multi_req);
    rtk_md_dump_reg(NULL);
    up(&md_drv_dev->sem);

}


static irqreturn_t rtk_md_irq_handler(int irq, void *dev_id)
{
    struct md_dev *pdev = (struct md_dev *)dev_id;
    
    if(rtk_md_check_empty_event()) {
        rtk_md_on_off_empty_int(0);
        rtk_md_clear_empty_int_status();
        pdev->CmdDone = 1;

        return IRQ_HANDLED;
    }
    return IRQ_NONE;
}


static int _rtk_md_wait_hw_stopped(struct md_dev *pdev, uint64_t timeout)
{
    /*clear cmd empty interrupt */
    rtk_md_clear_empty_int_status();
    if(rtk_md_check_hw_run_state()) {
        rtk_md_clear_empty_int_status();
        PDEBUG("\nwait for complete before down\n");
        wait_event_interruptible_timeout(pdev->wait_queue,
                                         (pdev->CmdDone == 1), timeout);
        PDEBUG("\nwait for complete after down\n");
        if(pdev->CmdDone == 1) {
            return 0;
        }
        return -1;
    }
    return 0;
}

int rtk_md_wait_hw_stopped(uint64_t timeout)
{
    int retval = 0;
    if (down_interruptible(&md_drv_dev->sem))
        return -ERESTARTSYS;
    retval = _rtk_md_wait_hw_stopped(md_drv_dev, timeout);
    up(&md_drv_dev->sem);
    return retval;
}

int rtk_md_get_inst_count(uint64_t *p_u64InstCnt)
{
    if(!p_u64InstCnt)
        return -1;
    if (down_interruptible(&md_drv_dev->sem))
        return -ERESTARTSYS;
    rtk_md_update_inst_count(md_drv_dev);
    *p_u64InstCnt = md_drv_dev->u64InstCnt;
    up(&md_drv_dev->sem);
    return MD_SUCCESS;
}

int rtk_md_get_issued_inst_count(uint64_t *p_u64IssuedInstCnt)
{
    if(!p_u64IssuedInstCnt)
        return -1;
    *p_u64IssuedInstCnt = md_drv_dev->u64IssuedInstCnt;
    return MD_SUCCESS;
}

static int _rtk_md_memcpy(struct md_dev   *pdev, uint32_t        addrdst,
                      uint32_t addrsrc, int32_t len, uint32_t flags)
{
    uint32_t len_tmp = MD_SEQ_LEN_LIMIT;
    uint32_t dwcmdword[4] = {0};
    int32_t wret = 0;
    if(len <= 0)
        return wret;
    dwcmdword[0] = (MD_SS | MD_1B | ((flags & BIT(0))  ? MD_CONST : 0) |  ((flags & BIT(1))  ? MD_MOVE_DIR : 0));
    do {
        len_tmp = (len > MD_SEQ_LEN_LIMIT) ? MD_SEQ_LEN_LIMIT : len;

        dwcmdword[1] = addrdst;
        dwcmdword[2] = addrsrc;
        dwcmdword[3] = (len_tmp & MD_SEQ_LEN_LIMIT_MASK);

        wret = rtk_write_cmd_wrapper(pdev, (uint8_t *)dwcmdword, sizeof(dwcmdword));
        len -= len_tmp;
        addrdst += len_tmp;
        addrsrc += len_tmp;
    } while(len);
    return wret;
}


int rtk_md_memcpy(uint32_t dst_phys_addr, uint32_t src_phys_addr,
              uint32_t length, int32_t op, uint32_t is_wait)
{

    PDEBUG("%s,%d, dst_phys_addr=0x%08x, src_phys_addr=0x%08x, length=%d\n", __func__, __LINE__, dst_phys_addr, src_phys_addr, length);
    if(length == 0) {
        PDEWAR("md_copy_pages with zero length = %d, ignore it\n", length);
        return 0;
    }
    if (down_interruptible(&md_drv_dev->sem))
        return -ERESTARTSYS;
    md_drv_dev->CmdDone = 0;
    _rtk_md_memcpy(md_drv_dev, dst_phys_addr, src_phys_addr, length, op);
    if(is_wait) {
        /*Enable empty interrupt */
        rtk_md_on_off_empty_int(1);
        wait_event_interruptible_timeout(md_drv_dev->wait_queue, (md_drv_dev->CmdDone == 1), (2 * HZ));
        if(md_drv_dev->CmdDone == 0) {
            PDEBUG("MD : no empty interrupt.\n");
            up(&md_drv_dev->sem);
            return -1;
        }
    }
    up(&md_drv_dev->sem);
    return 0;
}

int rtk_md_do_cmds(uint8_t *pbyCommandBuffer, uint32_t lCommandLength)
{
    int retval = 0;
    if(pbyCommandBuffer == NULL || lCommandLength == 0)
        return -1;
    if (down_interruptible(&md_drv_dev->sem)) {
        return -ERESTARTSYS;
    }
    md_drv_dev->CmdDone = 0;
    retval = rtk_write_cmd_wrapper(md_drv_dev, pbyCommandBuffer, lCommandLength);
    up(&md_drv_dev->sem);
    return retval;
}


/*****************************HW freeze check and restore*************************************/

static int rtk_md_status_check(void *arg)
{
    uint64_t last_sw_inst_count = 0;
    uint64_t last_hw_inst_count = 0;
    uint64_t check_counter = 0;
    while (!g_md_check_thread_exited_flag) {
        uint64_t cur_hw_inst_count = 0;
        set_freezable();
        if(!rtk_md_is_clk_on()) {
            msleep(10);
            continue;
        }  
        rtk_md_get_inst_count(&cur_hw_inst_count);
        rtk_md_get_issued_inst_count(&last_sw_inst_count);
        if(last_hw_inst_count == cur_hw_inst_count &&
                (last_hw_inst_count != last_sw_inst_count)) {
            check_counter++;
        } else {
            last_hw_inst_count = cur_hw_inst_count;
            check_counter = 0;
        }

        if(check_counter > 2000) {
            if(last_sw_inst_count > last_hw_inst_count) {
                PDEERR("[MD]md seems to freeze now, ready to reset\n");
                rtk_md_reset_and_restore(md_drv_dev);
            } 
            check_counter = 0;
        }
        msleep(10);
    }
    complete_and_exit(&md_check_thread_exited, 1);
}

//static int start_md_ddr_sacn(struct device *md_dev);
//static void stop_md_ddr_scan(void);

__init int rtk_md_init(struct device *md_device)
{
    int ret = 0;
    dma_addr_t dwPhysicalAddress = 0;

    md_drv_dev = kzalloc(sizeof(struct md_dev), GFP_KERNEL);
    if (!md_drv_dev) {
        ret = -ENOMEM;
        goto FAIL_ALLOCATE_MD_DEV;
    }
    sema_init(&md_drv_dev->sem, 1);
    init_waitqueue_head(&md_drv_dev->wait_queue);
    md_drv_dev->size = MD_CMD_BUF;

    md_drv_dev->CmdBuf = dma_alloc_coherent(md_device, md_drv_dev->size, &
                                            dwPhysicalAddress, GFP_ATOMIC);
    if(!md_drv_dev->CmdBuf) {
        ret = -ENOMEM;
        goto FAIL_ALLOCATE_CMD_BUFFER;
    }
    PDEIFO("Command Buffer Address = %lx, Physical Address = %x, Size = %08x\n",
           (unsigned long) md_drv_dev->CmdBuf, (uint32_t)
           dwPhysicalAddress, md_drv_dev->size);
    md_drv_dev->wrptr = 0;
    md_drv_dev->CmdBase = (void *) dwPhysicalAddress;
    md_drv_dev->CmdLimit = (void *) (dwPhysicalAddress + md_drv_dev->size);
    md_drv_dev->md_device = md_device;
    g_rtk_md_irq_num = IRQ_GET_KERNEL_IRQ_NUM(IRQ_MD);
    if(g_rtk_md_irq_num <= 0) {
        PDEERR("fail to get md irq_num=%u\n",g_rtk_md_irq_num);
        ret = -EINVAL;
        goto FAIL_REQUEST_IRQ;
    }
    PDEIFO("get md irq_num=%u\n",g_rtk_md_irq_num);
    ret = request_irq(g_rtk_md_irq_num, rtk_md_irq_handler,
                      IRQF_SHARED, "md", (void *)md_drv_dev);
    if(ret < 0) {
        PDEERR("[MD] Request irq %d failed\n", g_rtk_md_irq_num);
        goto FAIL_REQUEST_IRQ;
    }

    rtk_md_store_kv_reg();
    rtk_md_hw_init(md_drv_dev);

    g_md_check_thread_exited_flag = 0;
    g_md_check_task_struct = kthread_create(rtk_md_status_check, NULL, "md_check_thread");
    if(IS_ERR(g_md_check_task_struct)) {
        PDEERR("[MD] Create check thread failed\n");
        ret = -EFAULT;
        goto FAIL_CREATE_KERNEL_THREAD;
    }
    init_completion(&md_check_thread_exited);
    wake_up_process(g_md_check_task_struct);    

    rtk_md_self_checking(true);

    /* md ddr online scan */
#if 0
    start_md_ddr_sacn(md_device);
#endif

    return 0;
    
FAIL_CREATE_KERNEL_THREAD:
    free_irq(g_rtk_md_irq_num, (void *)md_drv_dev);    
FAIL_REQUEST_IRQ:
    dma_free_coherent(md_drv_dev->md_device, md_drv_dev->size,
                      (void*)md_drv_dev->CmdBuf, (dma_addr_t)md_drv_dev->CmdBase);
FAIL_ALLOCATE_CMD_BUFFER:
    kfree(md_drv_dev);
    md_drv_dev = NULL;
FAIL_ALLOCATE_MD_DEV:
    return ret;
}


__exit void rtk_md_uninit(void)
{
#if 0
    stop_md_ddr_scan();
#endif
    if(g_md_check_task_struct) {
        g_md_check_thread_exited_flag = 1;
        wait_for_completion(&md_check_thread_exited);
        g_md_check_task_struct = NULL;
    }

    free_irq(g_rtk_md_irq_num, (void *)md_drv_dev);
    dma_free_coherent(md_drv_dev->md_device, md_drv_dev->size, (void*)md_drv_dev->
                      CmdBuf, (dma_addr_t)md_drv_dev->CmdBase);
    kfree(md_drv_dev);
    md_drv_dev = NULL;
}


/**********************************Global APIS for other modules to use*****************************************/
uint64_t smd_memcpy(
    uint32_t        addrDst,
    uint32_t        addrSrc,
    int32_t         len)
{
    int wret = rtk_md_memcpy(addrDst, addrSrc, len, 0, 0);
    if(wret != MD_SUCCESS) {
        PDEERR( "[MD]%s fail(%d).\n", __func__, wret);
    }
    return md_drv_dev->u64IssuedInstCnt;
}
EXPORT_SYMBOL(smd_memcpy);

bool smd_waitComplete(
    uint64_t        handle,
    uint64_t        timeout,
    uint64_t        *hwCnt)
{
    if (down_interruptible(&md_drv_dev->sem))
        return false;
    /* Enable empty interrupt */
    rtk_md_on_off_empty_int(1);
    
    _rtk_md_wait_hw_stopped(md_drv_dev, timeout);
    if(md_drv_dev->CmdDone == 0) {
        PDEALT("MD : no empty interrupt.\n");
        up(&md_drv_dev->sem);
        return false;
    }
    rtk_md_update_inst_count(md_drv_dev);
    hwCnt = (uint64_t*) &md_drv_dev->u64InstCnt;
    up(&md_drv_dev->sem);
    return true;
}
EXPORT_SYMBOL(smd_waitComplete);

bool smd_checkFinish(
    uint64_t        handle)
{
    uint64_t sw_counter = (uint64_t)handle;
    if(down_timeout(&md_drv_dev->sem, HZ / 10)) {
        PDEERR( "[MD]%s down_tiemput!\n", __func__);
        return false;
    }
    rtk_md_update_inst_count(md_drv_dev);
    up(&md_drv_dev->sem);

    if(md_drv_dev->u64InstCnt >= sw_counter) {
        return true;
    }
    return false;
}
EXPORT_SYMBOL(smd_checkFinish);


void smd_checkComplete(void)
{
    uint32_t u32_err_cnt = 0;
    while(1) {
        if(smd_checkFinish(md_drv_dev->u64IssuedInstCnt))
            break;
        udelay(200);
        u32_err_cnt++;
        /*add 200ms timeout*/
        if(u32_err_cnt > 1000) {
            PDEERR("%s timeout\n", __FUNCTION__);
            rtk_md_hw_reset();
            break;
        }
    }
}
EXPORT_SYMBOL(smd_checkComplete);

int smd_memfill(uint32_t addrdst, int32_t len, uint32_t val)
{
    int ret = -1;
    if(down_interruptible(&md_drv_dev->sem))
        return -1;    
    ret = rtk_md_memfill(addrdst, len, MD_1B, MD_SS, val);
    up(&md_drv_dev->sem);
    return ret;
}
EXPORT_SYMBOL(smd_memfill);


static void rtk_md_self_checking(bool do_self_check)
{
    if(do_self_check) {
        /*self-checking*/ 
        int retry_cnt = 0;
        for(retry_cnt = 0; retry_cnt <= 2; retry_cnt++) {
            smd_memcpy((unsigned long)md_drv_dev->CmdBase + 0x1000,
                       (unsigned long)(md_drv_dev->CmdBase + 0x2000), 0x40);
            smd_checkComplete();
            if(rtk_md_get_hw_instcnt() >= 1) {
                PDEIFO("[MD]%s success.instcnt=%d\n", __func__, rtk_md_get_hw_instcnt());
                break;
            }
        }
    }
    rtk_md_set_dummy_2_reg(SMQ_SELF_CHECK, FINISH);
    if(do_self_check)
        rtk_md_print_sk_md_status(__FUNCTION__);
}



/*****************************MD driver STR and STD functions*************************************/

#ifdef CONFIG_PM
int rtk_md_suspend_noirq(void)
{
    PDEIFO("[MD]%s\n", __func__);
    rtk_md_hw_power_down();
    PDEIFO("[MD]%s success.\n", __func__);
    return 0;
}

int rtk_md_resume_noirq(void)
{
    PDEIFO("[MD]%s\n", __func__);
    rtk_md_hw_init(md_drv_dev);
    return 0;
}

int rtk_md_resume_early(void)
{
    PDEIFO("[MD]%s\n", __func__);
    rtk_md_self_checking(true);
    return 0;
}

int rtk_md_restore(void)
{
    PDEIFO("[MD]%s\n", __func__);
    rtk_md_hw_init(md_drv_dev);
    rtk_md_self_checking(true);
    return 0;
}

int rtk_md_freeze_noirq(void)
{
    PDEIFO("[MD]%s\n", __func__);
    rtk_md_self_checking(false);
    return 0;
}

int rtk_md_poweroff(void)
{
    PDEIFO("[MD]%s\n", __func__);
    rtk_md_hw_power_down();
    PDEIFO("[MD]%s success.\n", __func__);
    return 0;
}

#endif


#if 0
struct scan_info {
    unsigned long phys_from;
    dma_addr_t phys_to;
    void *virt_to;
    size_t size;
    u32 golden_crc;
};

static struct scan_info scan_info;
#endif


/*static void dump_data(unsigned int *start, size_t size)
{
    int i = 0;

    for (i = 0; i < size; i += sizeof(unsigned int)) {
        PDEALT("%s: [%p]=0x%08x\n", __func__, start, *start);
        start++;
    }
}


#include <rbus/dc_sys_reg.h>
#include <rtk_kdriver/rtk_dc_mt.h>

extern u32 __pure crc32_le(u32 crc, unsigned char const *p, size_t len);
extern unsigned int avk_range[6];//avk auto sync range for hw-monitor
static struct task_struct *g_md_ddr_scan_task = NULL;

static int md_ddr_scan(void *data)
{
    void *virt_to;
    dma_addr_t phys_to, a_start_phys, a_end_phys;
    struct device *md_dev = (struct device *)data;
    void *a_start, *a_end;
    size_t a_size;
    u32 golden_crc;

    set_freezable();

#if 0 // value of these register will be overwrote.
    a_start_phys = (unsigned long)rtd_inl(DC_SYS_DC_MT_SADDR_0_reg);
    a_end_phys = (unsigned long)rtd_inl(DC_SYS_DC_MT_EADDR_0_reg);
#else
    a_start_phys = avk_range[DCMT_RANGE_SYNC_A_START];
    a_end_phys = avk_range[DCMT_RANGE_SYNC_A_END];
#endif
    a_start = phys_to_virt(a_start_phys);
    a_end = phys_to_virt(a_end_phys);
    a_size = a_end - a_start;

    virt_to = dma_alloc_coherent(md_dev, a_size, &phys_to, GFP_KERNEL);
    if (!virt_to)
        return -ENOMEM;

    PDEERR("%s: A_TEXT[0x%p - 0x%p, size=%x]\n", __func__,
            a_start, a_end, a_size);

    golden_crc = crc32_le(0, (unsigned char const *)a_start, a_size);

    while (!kthread_should_stop()) {
        u32 crc;

        smd_memcpy((uint32_t)phys_to, (uint32_t)a_start_phys, a_size);
        smd_checkComplete();

        crc = crc32_le(0, (unsigned char const *)virt_to, a_size);

        if (crc != golden_crc) {
 
            console_loglevel = 2;
            // FIXME: this take long time
#if 0
            PDEALT("%s: ====================  dump A Text [0x%08x - 0x%08x] ==============\n", __func__,
                    a_start_phys, a_start_phys + a_size);
            dump_data((unsigned int *)a_start, a_size);
#endif
            PDEALT("%s: ====================  dump B Data [0x%p - 0x%p] ==============\n", __func__,
                    virt_to, virt_to + a_size);
            dump_data((unsigned int *)virt_to, a_size);

             PDEALT("%s: fail, crc mismatch. 0x%08x ; 0x%08x(golden). from phys(0x%x) to(0x%x), size(0x%x)",
                    __func__, crc, golden_crc, a_start_phys, phys_to, a_size);
            //panic("%s: fail, crc mismatch. 0x%08x ; 0x%08x(golden). from phys(0x%x) to(0x%x), size(0x%x)",
            //        __func__, crc, golden_crc, a_start_phys, phys_to, a_size);
        }

        PDEIFO("%s: [0x%0x - 0x%0x] crc=%08x. golden=%08x\n", __func__,
                phys_to, phys_to + a_size,
                crc, golden_crc);

        try_to_freeze();
        msleep(3000);
    }

    dma_free_coherent(md_dev, a_size, virt_to, phys_to);

    return 0;
}


static int start_md_ddr_sacn(struct device *md_dev)
{

    g_md_ddr_scan_task = kthread_run(md_ddr_scan, md_dev, "md_ddr_scan");
    if (IS_ERR(g_md_ddr_scan_task))
        return PTR_ERR(g_md_ddr_scan_task);

    return 0;
}


static void stop_md_ddr_scan(void)
{
    kthread_stop(g_md_ddr_scan_task);
    g_md_ddr_scan_task = NULL;
}
*/
