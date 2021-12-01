/*
 * drivers/gpu/ion/ion_dvr_heap.c
 *
 * Copyright (C) Linaro 2012
 * Author: <benjamin.gaignard@linaro.org> for ST-Ericsson.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <linux/device.h>
#include <linux/slab.h>
#include <linux/errno.h>
#include <linux/err.h>
#include <linux/dma-mapping.h>
#include <linux/pageremap.h>
#include <linux/vmalloc.h>
#include <linux/highmem.h>
#include <linux/io.h>
#include <linux/sched.h>
#include <linux/types.h>
#include <linux/string.h>
#include <linux/ctype.h>
#include <linux/kernel.h>
#include <linux/jiffies.h>
#include <linux/seq_file.h>

#include "ion.h"
#include "ion_priv.h"

#define DEBUG 1  //kjw test add

#define ION_DVR_ALLOCATE_FAILED -1

struct ion_dvr_heap {
	struct ion_heap heap;
	struct device *dev;
};

#define to_dvr_heap(x) container_of(x, struct ion_dvr_heap, heap)

struct ion_dvr_buffer_info {
	struct page *dvr_page;
	unsigned long phys_addr;
	unsigned long flags;
	struct sg_table *table;
};

#ifdef ION_REC_BUFF_DEBUG

#include <linux/semaphore.h>

int ion_dvr_check_youtube_enter_enable = 0;
static unsigned long ion_dvr_start_time = 0;

#if (defined(CONFIG_FB_720P))
#define FB_SIZE 1280 * 720 * 4
#elif (defined(CONFIG_FB_1080P))
#define FB_SIZE 1920 * 1080 * 4
#elif (defined(CONFIG_FB_2160P))
#define FB_SIZE 3840 * 2160 * 4
#elif (defined(CONFIG_FB_768P))
#define FB_SIZE 1366 * 768 * 4
#else
#define FB_SIZE 1920 * 1080 * 4    // if no config is set, use 1080p as default
#endif

#define MAX_FB_NUM_PER_TASK       8
#define MAX_TASK_CMA_ALLOC_SIZE       (MAX_FB_NUM_PER_TASK * FB_SIZE)

#define MAX_REC_NUM       512 //128

#define ION_DEFER_FREE_WAIT_SECS       (5 * 60)  // 5 minutes

typedef struct {
	struct list_head list;

	char task_name[TASK_COMM_LEN];
	unsigned long num;
	unsigned long total_cma;

	unsigned long cma_status[MAX_REC_NUM]; //0 : no use
	unsigned long cma_ptr[MAX_REC_NUM];
	unsigned long phys_addr[MAX_REC_NUM];
	unsigned long size[MAX_REC_NUM];
	unsigned long pid[MAX_REC_NUM];
	unsigned long timestamp[MAX_REC_NUM];
} ion_rec_buff;

typedef struct {
	struct list_head list;
	unsigned int qlen;
} ion_rec_buff_head;

static int ion_rec_init=0;

struct semaphore ion_sem;

ion_rec_buff_head ion_rec_queue;


void ion_rec_queue_head_init(ion_rec_buff_head *head)
{
	INIT_LIST_HEAD(&head->list);
	head->qlen = 0;
}

void ion_rec_queue_head(ion_rec_buff_head *head, ion_rec_buff *ion_cmb)
{
	list_add(&ion_cmb->list, &head->list);
	head->qlen++;
}

void ion_rec_dequeue_node(ion_rec_buff_head *head, char *task_name)
{
	ion_rec_buff *ion_rec_temp = NULL;

	ion_rec_temp = list_entry(head->list.next, ion_rec_buff, list);

	while (ion_rec_temp->list.next != &head->list)
	{
		if (!strncmp(task_name, ion_rec_temp->task_name, TASK_COMM_LEN))
		{
			list_del_init(&ion_rec_temp->list);
			head->qlen--;
			break;
		}
		ion_rec_temp = list_entry(ion_rec_temp->list.next, ion_rec_buff, list);
	}
}

ion_rec_buff *ion_rec_find_node(ion_rec_buff_head *head, char *task_name)
{
	ion_rec_buff *ion_rec_temp = NULL;
	int ret = 0;
	int i;

	ion_rec_temp = list_entry(head->list.next, ion_rec_buff, list);

	while (ion_rec_temp->list.next != &head->list)
	{
		if (!ion_rec_temp->task_name) {
			printk(KERN_ERR "[ION_REC] ERROR!! task_name is NULL\nList items of this node:\n");
			for (i = 0; i < MAX_REC_NUM; i++) {
				if (ion_rec_temp->cma_ptr[i] != 0) {
					printk(KERN_ERR "ION cma[%lx] status[%lx] phys_addr[%lx] size[%lx] task_name[%s] PID[%ld] ts[%ld.%03ld sec]\n",
						ion_rec_temp->cma_ptr[i], ion_rec_temp->cma_status[i],
						ion_rec_temp->phys_addr[i], ion_rec_temp->size[i],
						ion_rec_temp->task_name, ion_rec_temp->pid[i],
						ion_rec_temp->timestamp[i] / 1000, ion_rec_temp->timestamp[i] % 1000);
				}
			}
		}

		if ((ion_rec_temp->task_name) && (!strncmp(task_name, ion_rec_temp->task_name, TASK_COMM_LEN)))
		{
			ret = 1;
			printk(KERN_DEBUG "func=%s line=%d  ion_rec_temp->task_name=%s task_name=%s\n", __FUNCTION__, __LINE__,
				ion_rec_temp->task_name, task_name);
			break;
		}
		ion_rec_temp = list_entry(ion_rec_temp->list.next, ion_rec_buff, list);
	}
	if(ret)
		return ion_rec_temp;

	return NULL;
}

ion_rec_buff *ion_rec_find_removed_item(ion_rec_buff_head *head, unsigned long cma_ptr)
{
	ion_rec_buff *ion_rec_temp = NULL;
	int i,ret=0;
	printk(KERN_DEBUG "func=%s line=%d cma_ptr=%lx\n",__FUNCTION__,__LINE__,cma_ptr);
	ion_rec_temp = list_entry(head->list.next, ion_rec_buff, list);

	while (ion_rec_temp->list.next != &head->list)
	{
		//find the empty
		for (i = 0; i < MAX_REC_NUM; i++) {
			if ((ion_rec_temp->cma_ptr[i] == cma_ptr) && (ion_rec_temp->cma_status[i] == 1)) {
				ion_rec_temp->cma_status[i] = 0;
				ion_rec_temp->num--;
				ion_rec_temp->total_cma -= ion_rec_temp->size[i];
				printk(KERN_DEBUG "func=%s line=%d task_name=%s pid=%ld size=0x%lx phys_addr=0x%lx\n", __FUNCTION__, __LINE__,
						ion_rec_temp->task_name, ion_rec_temp->pid[i], ion_rec_temp->size[i],ion_rec_temp->phys_addr[i]);
				ret = 1;
				goto del_exit;
			}
		}
		ion_rec_temp = list_entry(ion_rec_temp->list.next, ion_rec_buff, list);
	}

del_exit:
	if(ret)
		return ion_rec_temp;

	return NULL;
}

void ion_rec_print(struct seq_file *s)
{
	ion_rec_buff *ion_rec_temp = NULL;
	int i;
	ion_rec_buff_head *head= &ion_rec_queue;

	if(!ion_rec_init)
		return;

	down(&ion_sem);
	ion_rec_temp = list_entry(head->list.next, ion_rec_buff, list);

	if (s != NULL) {
		seq_printf(s, "====== ION cma record ======\n\n");
	} else {
		printk(KERN_ERR "====== ION cma record ======\n\n");
	}

	while (ion_rec_temp->list.next != &head->list)
	{
		for (i = 0; i < MAX_REC_NUM; i++) {
			if ((ion_rec_temp->cma_ptr[i] != 0) && (ion_rec_temp->cma_status[i] != 0)) {
				if (s != NULL) {
					seq_printf(s, "ION cma[%lx] status[%lx] phys_addr[%lx] size[%lx] task_name[%s] PID[%ld] ts[%ld.%03ld sec]\n",
						ion_rec_temp->cma_ptr[i], ion_rec_temp->cma_status[i],
						ion_rec_temp->phys_addr[i], ion_rec_temp->size[i],
						ion_rec_temp->task_name, ion_rec_temp->pid[i],
						ion_rec_temp->timestamp[i] / 1000, ion_rec_temp->timestamp[i] % 1000);
				} else {
					printk(KERN_ERR "ION cma[%lx] status[%lx] phys_addr[%lx] size[%lx] task_name[%s] PID[%ld] ts[%ld.%03ld sec]\n",
						ion_rec_temp->cma_ptr[i], ion_rec_temp->cma_status[i],
						ion_rec_temp->phys_addr[i], ion_rec_temp->size[i],
						ion_rec_temp->task_name, ion_rec_temp->pid[i],
						ion_rec_temp->timestamp[i] / 1000, ion_rec_temp->timestamp[i] % 1000);
				}
			}
		}
		ion_rec_temp = list_entry(ion_rec_temp->list.next, ion_rec_buff, list);
	}
	up(&ion_sem);

	return;
}
EXPORT_SYMBOL(ion_rec_print);

ion_rec_buff *alloc_ion_cmb(char *task_name, unsigned long pid, unsigned long cma_ptr, unsigned long phys_addr, unsigned long size)
{
	ion_rec_buff *ion_cmb = (ion_rec_buff *) kmalloc(sizeof(ion_rec_buff), GFP_KERNEL);

	if (ion_cmb) {
		INIT_LIST_HEAD(&ion_cmb->list);

		memset(ion_cmb->task_name,'\0',TASK_COMM_LEN);
		memset(ion_cmb->cma_status,0x0,MAX_REC_NUM*sizeof(unsigned long));
		memset(ion_cmb->cma_ptr,0x0,MAX_REC_NUM*sizeof(unsigned long));
		memset(ion_cmb->phys_addr,0x0,MAX_REC_NUM*sizeof(unsigned long));
		memset(ion_cmb->size,0x0,MAX_REC_NUM*sizeof(unsigned long));

		strncpy(ion_cmb->task_name, task_name, TASK_COMM_LEN-1);
		ion_cmb->num = 1;
		ion_cmb->total_cma = size;

		ion_cmb->cma_status[0] = 1;
		ion_cmb->cma_ptr[0] = cma_ptr;
		ion_cmb->phys_addr[0] = phys_addr;
		ion_cmb->size[0] = size;
		ion_cmb->pid[0] = pid;
		ion_cmb->timestamp[0] = jiffies_to_msecs(jiffies - ion_dvr_start_time);
	} else {
		pr_err("[ION_REC]!!! ERROR !!! No Memory for task %s (pid=%ld) \n", task_name, pid);
	}

	return ion_cmb;
}

void kfree_ion_cmb(ion_rec_buff *ion_cmb)
{
	if (ion_cmb)
		kfree(ion_cmb);
}

void ion_cmb_add_rec(ion_rec_buff *ion_cmb, char *task_name, unsigned long pid, unsigned long cma_ptr, unsigned long phys_addr, unsigned long size)
{
	int i, j;

	if (strncmp(task_name, ion_cmb->task_name, TASK_COMM_LEN)) {
		printk(KERN_ERR "[ION_REC]!!! ERROR !!! func=%s line=%d task_name not match, ion_cmb->task_name=%s task_name=%s\n", __FUNCTION__, __LINE__,
			ion_cmb->task_name, task_name);
		return;
	}

	//find the empty
	for (i = 0; i < MAX_REC_NUM; i++) {
		if (ion_cmb->cma_status[i] == 0)
			break;
	}

	if (i >= MAX_REC_NUM) {
		printk(KERN_ERR "[ION_REC]!!! ERROR !!! over %d rec task_name = %s\n", MAX_REC_NUM, task_name);
		// List all ION CMA of this task "if too many ION CMA"
		printk(KERN_ERR "[ION_REC] Too many ION CMA of this task, list all ION CMA for task (%s)\n", ion_cmb->task_name);
		for (j = 0; j < MAX_REC_NUM; j++) {
			printk(KERN_ERR "[ION_REC] ION cma[%lx] phys_addr[%lx] size[%lx] task_name[%s] PID[%ld] ts[%ld.%03ld sec]\n",
					ion_cmb->cma_ptr[j], ion_cmb->phys_addr[j], ion_cmb->size[j],
					ion_cmb->task_name, ion_cmb->pid[j],
					ion_cmb->timestamp[j] / 1000, ion_cmb->timestamp[j] % 1000);
		}

		printk(KERN_ERR "\n[ION_REC] Dump CMA usage to verify\n");
		list_all_rtk_memory_allocation_sort(list_mem_generic, NULL, NULL);
		printk(KERN_ERR "\n[ION_REC] CMA usage dumped finished\n");

		return;
	}

	ion_cmb->cma_status[i] = 1;
	ion_cmb->cma_ptr[i] = cma_ptr;
	ion_cmb->phys_addr[i] = phys_addr;
	ion_cmb->size[i] = size;
	ion_cmb->pid[i] = pid;
	ion_cmb->timestamp[i] = jiffies_to_msecs(jiffies - ion_dvr_start_time);
	ion_cmb->num++;
	ion_cmb->total_cma += size;

	return ;
}

int ion_cmb_reclaim(ion_rec_buff *ion_cmb)
{
	int i = 0;
	int reclaim_times = 0;
	struct task_struct *ptask;
	unsigned long reclaim_timestamp = jiffies_to_msecs(jiffies - ion_dvr_start_time);

	// List all ION CMA of this task "before RECLAIM"
	printk(KERN_INFO "[ION_REC] Before RECLAIM, List all ION CMA for task (%s)\n", ion_cmb->task_name);
	for (i = 0; i < MAX_REC_NUM; i++) {
		if (ion_cmb->cma_status[i] == 1) {
			printk(KERN_INFO "[ION_REC] ION cma[%lx] phys_addr[%lx] size[%lx] task_name[%s] PID[%ld] ts[%ld.%03ld sec]\n",
					ion_cmb->cma_ptr[i], ion_cmb->phys_addr[i], ion_cmb->size[i],
					ion_cmb->task_name, ion_cmb->pid[i],
					ion_cmb->timestamp[i] / 1000, ion_cmb->timestamp[i] % 1000);
		}
	}

	for (i = 0; i < MAX_REC_NUM; i++) {
		if ((ion_cmb->cma_status[i] == 1) && (reclaim_timestamp / 1000 - ion_cmb->timestamp[i] / 1000 > ION_DEFER_FREE_WAIT_SECS)) {
			rcu_read_lock();
			ptask = find_task_by_pid_ns(ion_cmb->pid[i], &init_pid_ns);
			rcu_read_unlock();

			if (!ptask) {
				// do reclaim
				printk(KERN_ERR "[ION_REC] Error!! pid (%ld) of task (%s) is not exist, Do Reclaim !!!\n", ion_cmb->pid[i], ion_cmb->task_name);
				/* release memory */
				dvr_free_page_mesg((struct page *)(ion_cmb->cma_ptr[i]));
				ion_cmb->cma_status[i] = 0;
				ion_cmb->num--;
				ion_cmb->total_cma -= ion_cmb->size[i];

				printk(KERN_ERR "[ION_REC] Free ION cma[%lx] phys_addr[%lx] size[%lx] task_name[%s] PID[%ld] ts[%ld.%03ld sec]\n",
						ion_cmb->cma_ptr[i], ion_cmb->phys_addr[i], ion_cmb->size[i],
						ion_cmb->task_name, ion_cmb->pid[i],
						ion_cmb->timestamp[i] / 1000, ion_cmb->timestamp[i] % 1000);

				reclaim_times++;
			}
		}
	}

	if (ion_cmb->num == 0) {
		printk(KERN_ERR "[ION_REC] After RECLAIM, All (%d) ION CMA of task (%s) are released,  cma = %ld !!!\n", reclaim_times, ion_cmb->task_name, ion_cmb->total_cma);
	} else {
		if (reclaim_times > 0) {
			// List all ION CMA of this task "after RECLAIM"
			printk(KERN_ERR "[ION_REC] RECLAIM finished, release %d ION CMA, list rest ION CMA for task (%s)\n", reclaim_times, ion_cmb->task_name);
			for (i = 0; i < MAX_REC_NUM; i++) {
				if (ion_cmb->cma_status[i] == 1) {
					printk(KERN_ERR "[ION_REC] ION cma[%lx] phys_addr[%lx] size[%lx] task_name[%s] PID[%ld] ts[%ld.%03ld sec]\n",
							ion_cmb->cma_ptr[i], ion_cmb->phys_addr[i], ion_cmb->size[i],
							ion_cmb->task_name, ion_cmb->pid[i],
							ion_cmb->timestamp[i] / 1000, ion_cmb->timestamp[i] % 1000);
				}
			}
		}
	}

	return 0;
}

#endif

/*
 * Create scatter-list for the already allocated DMA buffer.
 * This function could be replaced by dma_common_get_sgtable
 * as soon as it will avalaible.
 */
static int ion_dvr_get_sgtable(struct device *dev, struct sg_table *sgt,
			       void *virt_addr, unsigned long phys_addr, size_t size)
{
	struct page *page = phys_to_page(phys_addr);
	int ret;

	ret = sg_alloc_table(sgt, 1, GFP_KERNEL);
	if (unlikely(ret))
		return ret;

	sg_set_page(sgt->sgl, page, PAGE_ALIGN(size), 0);
	return 0;
}

void ion_dvr_check_youtube_enter(int *data)
{
	*data = ion_dvr_check_youtube_enter_enable;
}

void ion_dvr_set_youtube_enter(int data)
{
	ion_dvr_check_youtube_enter_enable = data;
}

static int gSetNotify=0;
void ion_dvr_set_vNotify(int enable)
{

    if(enable == 0 ) {
        pr_warning("ion vNotify disable\n");
        rtd_clearbits(0xB806012C, BIT(0) );
    }
    else if(enable == 1 ) {
        pr_warning("ion vNotify enable\n");
        rtd_setbits(0xB806012C, BIT(0));
    }

    
}

/* ION CMA heap operations functions */
static int ion_dvr_allocate(struct ion_heap *heap, struct ion_buffer *buffer,
			    unsigned long len, unsigned long align,
			    unsigned long flags)
{
	struct ion_dvr_heap *dvr_heap = to_dvr_heap(heap);
	struct device *dev = dvr_heap->dev;
	struct ion_dvr_buffer_info *info = 0;
	int i;
	unsigned int pid_flags = 0;
	unsigned char *name_ptr = 0;
	struct task_struct *ptask;
#ifdef ION_REC_BUFF_DEBUG
	unsigned char *task_name_ptr = 0;
	ion_rec_buff *ion_cmb = NULL;
#endif
	//struct pid_namespace tmp_pid_ns;

	dev_dbg(dev, "Request buffer allocation len %ld\n", len);

//	if (buffer->flags & ION_FLAG_CACHED)
//		return -EINVAL;

	pid_flags = (flags & 0xffffff00)>>8;
	flags = flags & 0x000000ff;
	/* printk("func=%s line=%d pid_flags=%d \n",__FUNCTION__,__LINE__,pid_flags); */
	name_ptr = kmalloc(TASK_COMM_LEN*4,GFP_KERNEL);
	if(!name_ptr)
	    return -EINVAL;
	memset(name_ptr,'\0',TASK_COMM_LEN);
	//strcpy(name_ptr,"ION_DRV:");
    snprintf(name_ptr, 20, "ION_DRV:%d:",pid_flags);

#ifdef ION_REC_BUFF_DEBUG
	task_name_ptr = kmalloc(TASK_COMM_LEN, GFP_KERNEL);
	if (!task_name_ptr)
	    goto err;
	memset(task_name_ptr, '\0', TASK_COMM_LEN);
#endif

	if(pid_flags != 0){
		rcu_read_lock();
		ptask = find_task_by_pid_ns(pid_flags, &init_pid_ns);
		if (ptask){
		strncat(name_ptr, ptask->comm, (TASK_COMM_LEN*4 - strlen(name_ptr) - 1));
#ifdef ION_REC_BUFF_DEBUG
	        strncpy(task_name_ptr, ptask->comm, TASK_COMM_LEN);
#endif
		}
		rcu_read_unlock();
	}
	/* printk("func=%s line=%d name_ptr=%s \n",__FUNCTION__,__LINE__,name_ptr); */

	if (align > PAGE_SIZE)
		goto err;

	info = kzalloc(sizeof(struct ion_dvr_buffer_info), GFP_KERNEL);
	if (!info) {
		dev_err(dev, "Can't allocate buffer info\n");
		goto err;
	}
	memset(info, 0, sizeof(struct ion_dvr_buffer_info));
	info->flags = flags;

	if (buffer->flags & ION_FLAG_FROM_DCU1) {
		info->dvr_page = dvr_malloc_page_mesg(len, GFP_DCU1, name_ptr);
		//info->dvr_page = dvr_malloc_page(len, GFP_DCU1);
	} else if (buffer->flags & ION_FLAG_FROM_DCU2) {
#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
		info->dvr_page = dvr_malloc_page_mesg(len, GFP_HIGHMEM_BW_FIRST, name_ptr);
#else
		info->dvr_page = dvr_malloc_page_mesg(len, GFP_DCU2, name_ptr);
		//info->dvr_page = dvr_malloc_page(len, GFP_DCU2);
#endif
	} else {
#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
		info->dvr_page = dvr_malloc_page_mesg(len, GFP_HIGHMEM_BW_FIRST, name_ptr);
#else
		info->dvr_page = dvr_malloc_page_mesg(len, GFP_DCU2_FIRST, name_ptr);
		//info->dvr_page = dvr_malloc_page(len, GFP_DCU2_FIRST);
#endif
	}
	if (name_ptr) {
		kfree(name_ptr);
		name_ptr = NULL;
	}
	if (!info->dvr_page) {
		dev_err(dev, "Fail to allocate buffer\n");
		goto err;
	}

#ifdef ION_REC_BUFF_DEBUG
	strncpy(buffer->caller_task, task_name_ptr, (TASK_COMM_LEN-1));
	buffer->caller_pid = pid_flags;
	printk(KERN_DEBUG "[ION] %s (%d) calls ion_dvr_allocate, use buffer %p\n", buffer->caller_task, buffer->caller_pid, buffer);

	if (ion_rec_init) {
		down(&ion_sem);
		ion_cmb = ion_rec_find_node(&ion_rec_queue, task_name_ptr);
		printk(KERN_DEBUG "func=%s line=%d ion_cmb=%p task_name=%s pid_flags=%d info->dvr_page=%p phys_addr=%lx\n", __FUNCTION__, __LINE__,
			ion_cmb, task_name_ptr, pid_flags, info->dvr_page, page_to_pfn(info->dvr_page) << PAGE_SHIFT);

		if (ion_cmb) {
			ion_cmb_add_rec(ion_cmb, task_name_ptr, pid_flags, (unsigned long)info->dvr_page, page_to_pfn(info->dvr_page) << PAGE_SHIFT, len);
		} else {
			if (!task_name_ptr) {
				printk(KERN_ERR "[ION_REC] Strange!! Task name is null, but it will insert as ION record node !!!\n");
			}
			ion_cmb = alloc_ion_cmb(task_name_ptr, pid_flags, (unsigned long)info->dvr_page, page_to_pfn(info->dvr_page) << PAGE_SHIFT, len);
			if(ion_cmb) {
				printk(KERN_DEBUG "func=%s line=%d Insert node, ion_cmb=%p pid_flags=%d info->dvr_page=%p phys_addr=%lx\n",__FUNCTION__,__LINE__,ion_cmb,pid_flags,info->dvr_page,page_to_pfn(info->dvr_page) << PAGE_SHIFT);
				ion_rec_queue_head(&ion_rec_queue,ion_cmb);
			}

            if(!strcmp(task_name_ptr, "test-opengl")) {
    	    	gSetNotify = 1;
                ion_dvr_set_vNotify(1);
            }
		}

		if(!strcmp(task_name_ptr,"roid.youtube.tv"))
		{
			ion_dvr_set_youtube_enter(1);
		}

		up(&ion_sem);
	}

	if (task_name_ptr) {
		kfree(task_name_ptr);
		task_name_ptr = NULL;
	}
#endif

	for (i = 0; i < (PAGE_ALIGN(len) >> PAGE_SHIFT); i++)
		clear_highpage(info->dvr_page + i);
	ion_pages_sync_for_device(NULL, info->dvr_page, PAGE_ALIGN(len), DMA_BIDIRECTIONAL);
	info->phys_addr = page_to_phys(info->dvr_page);

	info->table = kmalloc(sizeof(struct sg_table), GFP_KERNEL);
	if (!info->table) {
		dev_err(dev, "Fail to allocate sg table\n");
		goto err;
	}

	if (ion_dvr_get_sgtable
	    (dev, info->table, NULL, info->phys_addr, len))
		goto err;
	/* keep this for memory release */
	buffer->priv_virt = info;
	dev_dbg(dev, "dvr ion alloc 0x%lx %ld \n", info->phys_addr, len);
	return 0;

err:
	if (info) {
		if (info->table) {
			kfree(info->table);
		}
		if (info->dvr_page) {
			dvr_free_page_mesg(info->dvr_page);
		}
		kfree(info);
	}
#ifdef ION_REC_BUFF_DEBUG
	if (task_name_ptr) {
		kfree(task_name_ptr);
	}
#endif
	if (name_ptr) {
		kfree(name_ptr);
	}
	return ION_DVR_ALLOCATE_FAILED;
}

static void ion_dvr_free(struct ion_buffer *buffer)
{
	struct ion_dvr_heap *dvr_heap = to_dvr_heap(buffer->heap);
	struct device *dev = dvr_heap->dev;
	struct ion_dvr_buffer_info *info = buffer->priv_virt;

#ifdef ION_REC_BUFF_DEBUG
	ion_rec_buff_head *head;
	ion_rec_buff *ion_cmb = NULL;

	printk(KERN_DEBUG "[ION] %s (%d) calls ion_dvr_free, release buffer %p\n", buffer->caller_task, buffer->caller_pid, buffer);

	if (ion_rec_init) {
		down(&ion_sem);
		ion_cmb = ion_rec_find_removed_item(&ion_rec_queue, (unsigned long)info->dvr_page);
		if (!ion_cmb) {
			printk(KERN_ERR "[ION_REC] ERROR!! Could not find func=%s line=%d cma_ptr=%p\n", __FUNCTION__, __LINE__, info->dvr_page);
			up(&ion_sem);
			ion_rec_print(NULL);
			goto free_mem;
		} else {
			printk(KERN_DEBUG "find func=%s line=%d task_name=%s num=%ld total_cma=%lx\n", __FUNCTION__, __LINE__,
				ion_cmb->task_name, ion_cmb->num, ion_cmb->total_cma);
		}
		if (ion_cmb->num == 0) {
			if(!strcmp(ion_cmb->task_name,"roid.youtube.tv"))
			{
				ion_dvr_set_youtube_enter(0);
			}

            if(!strcmp(ion_cmb->task_name,"test-opengl") && gSetNotify != 0){
				gSetNotify = 0;
                ion_dvr_set_vNotify(0);
            }

            
			printk(KERN_DEBUG "ion_cmb->num = 0, dequeue ion node (task_name = %s)\n", ion_cmb->task_name);
			ion_rec_dequeue_node(&ion_rec_queue, ion_cmb->task_name);
			kfree_ion_cmb(ion_cmb);
		}
		up(&ion_sem);
	}

free_mem:
#endif

	dev_dbg(dev, "Release buffer %p\n", buffer);
	/* release memory */
	dvr_free_page_mesg(info->dvr_page);
	//dvr_free_page(info->dvr_page);
	/* release sg table */
	sg_free_table(info->table);
	kfree(info->table);
	kfree(info);

#ifdef ION_REC_BUFF_DEBUG
	if (ion_reclaim_enable == 1) {
		/* Do ION reclaim check */
		if(!ion_rec_init)
			return;

		down(&ion_sem);
		head = &ion_rec_queue;
		ion_cmb = list_entry(head->list.next, ion_rec_buff, list);
		while (ion_cmb->list.next != &head->list)
		{
			if (ion_cmb->total_cma > MAX_TASK_CMA_ALLOC_SIZE) {
				printk(KERN_WARNING "[ION_REC] %s alloc CMA %lx > %x, check if this task has ION leak\n", ion_cmb->task_name, ion_cmb->total_cma, MAX_TASK_CMA_ALLOC_SIZE);
				ion_cmb_reclaim(ion_cmb);

				if ((ion_cmb->num == 0) && (ion_cmb->total_cma == 0)) {
					printk(KERN_ERR "[ION_REC] After RECLAIM, task (%s) has no ION left, Dequeue it !!!\n", ion_cmb->task_name);
					ion_rec_dequeue_node(&ion_rec_queue, ion_cmb->task_name);
					kfree_ion_cmb(ion_cmb);
					printk(KERN_ERR "[ION_REC] Dequeue finished, break......\n");
					break;
				}
			}
			ion_cmb = list_entry(ion_cmb->list.next, ion_rec_buff, list);
		}
		up(&ion_sem);
	}
#endif

}

/* return physical address in addr */
static int ion_dvr_phys(struct ion_heap *heap, struct ion_buffer *buffer,
			ion_phys_addr_t *addr, size_t *len)
{
	struct ion_dvr_heap *dvr_heap = to_dvr_heap(buffer->heap);
	struct device *dev = dvr_heap->dev;
	struct ion_dvr_buffer_info *info = buffer->priv_virt;

	dev_dbg(dev, "Return buffer %p physical address 0x%pa\n", buffer,
		&info->phys_addr);

	*addr = info->phys_addr;
	*len = buffer->size;

	return 0;
}

static struct sg_table *ion_dvr_heap_map_dma(struct ion_heap *heap,
					     struct ion_buffer *buffer)
{
	struct ion_dvr_buffer_info *info = buffer->priv_virt;

	return info->table;
}

static void ion_dvr_heap_unmap_dma(struct ion_heap *heap,
				   struct ion_buffer *buffer)
{
	return;
}

static int ion_dvr_mmap(struct ion_heap *mapper, struct ion_buffer *buffer,
			struct vm_area_struct *vma)
{
	struct ion_dvr_heap *dvr_heap = to_dvr_heap(buffer->heap);
	struct device *dev = dvr_heap->dev;
	struct ion_dvr_buffer_info *info = buffer->priv_virt;
	unsigned long user_count = (vma->vm_end - vma->vm_start) >> PAGE_SHIFT;
	unsigned long count = PAGE_ALIGN(buffer->size) >> PAGE_SHIFT;
	unsigned long pfn = info->phys_addr >> PAGE_SHIFT;
	unsigned long off = vma->vm_pgoff;
	int ret = -ENXIO;

	if (!(info->flags & ION_FLAG_CACHED)) {
		#if 0
		vma->vm_page_prot = pgprot_noncached(vma->vm_page_prot);
		#else
		vma->vm_page_prot = pgprot_writecombine(vma->vm_page_prot);
		#endif
	}

	if (off < count && user_count <= (count - off)) {
		dev_dbg(dev, "Map %lx to %lx size %lx\n", 
			(pfn + off) << PAGE_SHIFT, vma->vm_start, user_count << PAGE_SHIFT);
	        ret = remap_pfn_range(vma, vma->vm_start,
	                              pfn + off,
	                              user_count << PAGE_SHIFT,
	                              vma->vm_page_prot);
	}

	return ret;
}

static struct ion_heap_ops ion_dvr_ops = {
	.allocate = ion_dvr_allocate,
	.free = ion_dvr_free,
	.map_dma = ion_dvr_heap_map_dma,
	.unmap_dma = ion_dvr_heap_unmap_dma,
	.phys = ion_dvr_phys,
	.map_user = ion_dvr_mmap,
	.map_kernel = ion_heap_map_kernel,
	.unmap_kernel = ion_heap_unmap_kernel,
};

struct ion_heap *ion_dvr_heap_create(struct ion_platform_heap *data)
{
	struct ion_dvr_heap *dvr_heap;
	dvr_heap = kzalloc(sizeof(struct ion_dvr_heap), GFP_KERNEL);

	if (!dvr_heap)
		return ERR_PTR(-ENOMEM);

	dvr_heap->heap.ops = &ion_dvr_ops;
	/* get device from private heaps data, later it will be
	 * used to make the link with reserved CMA memory */
	dvr_heap->dev = data->priv;
	dvr_heap->heap.type = ION_HEAP_TYPE_CUSTOM;

#ifdef ION_REC_BUFF_DEBUG
	if (!ion_rec_init) {
		ion_rec_buff *ion_cmb = NULL;

		ion_rec_queue_head_init(&ion_rec_queue);
		sema_init(&ion_sem, 1);

		// insert as the tail
		ion_dvr_start_time = jiffies;
		ion_cmb = alloc_ion_cmb("ION_TAIL", 0, 0, 0, 0);
		if (ion_cmb) {
			ion_rec_queue_head(&ion_rec_queue, ion_cmb);
		}

		ion_rec_init = 1;
	}
#endif

	return &dvr_heap->heap;
}

void ion_dvr_heap_destroy(struct ion_heap *heap)
{
	struct ion_dvr_heap *dvr_heap = to_dvr_heap(heap);

	kfree(dvr_heap);
}
EXPORT_SYMBOL(ion_dvr_check_youtube_enter);
