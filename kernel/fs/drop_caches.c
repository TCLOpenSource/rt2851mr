// SPDX-License-Identifier: GPL-2.0
/*
 * Implement the manual drop-all-pagecache function
 */

#include <linux/kernel.h>
#include <linux/mm.h>
#include <linux/fs.h>
#include <linux/writeback.h>
#include <linux/sysctl.h>
#include <linux/gfp.h>
#include "internal.h"

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
#include <mach/rtk_platform.h>
#endif

#ifdef CONFIG_CMA_RTK_ALLOCATOR
#include <linux/rtkrecord.h>
#include <linux/rtkblueprint.h>
#include <linux/pageremap.h>
#include <linux/auth.h>

void *dma_get_allocator(struct device *dev);
#endif

/* A global variable is a bit ugly, but it keeps the code simple */
int sysctl_drop_caches;

static void drop_pagecache_sb(struct super_block *sb, void *unused)
{
	struct inode *inode, *toput_inode = NULL;

	spin_lock(&sb->s_inode_list_lock);
	list_for_each_entry(inode, &sb->s_inodes, i_sb_list) {
		spin_lock(&inode->i_lock);
		/*
		 * We must skip inodes in unusual state. We may also skip
		 * inodes without pages but we deliberately won't in case
		 * we need to reschedule to avoid softlockups.
		 */
		if ((inode->i_state & (I_FREEING|I_WILL_FREE|I_NEW)) ||
		    (inode->i_mapping->nrpages == 0 && !need_resched())) {
			spin_unlock(&inode->i_lock);
			continue;
		}
		__iget(inode);
		spin_unlock(&inode->i_lock);
		spin_unlock(&sb->s_inode_list_lock);

		invalidate_mapping_pages(inode->i_mapping, 0, -1);
		iput(toput_inode);
		toput_inode = inode;

		cond_resched();
		spin_lock(&sb->s_inode_list_lock);
	}
	spin_unlock(&sb->s_inode_list_lock);
	iput(toput_inode);
}

int drop_caches_sysctl_handler(struct ctl_table *table, int write,
	void __user *buffer, size_t *length, loff_t *ppos)
{
	int ret;

	ret = proc_dointvec_minmax(table, write, buffer, length, ppos);
	if (ret)
		return ret;
	if (write) {
		static int stfu;

		if (sysctl_drop_caches & 1) {
			iterate_supers(drop_pagecache_sb, NULL);
			count_vm_event(DROP_PAGECACHE);
		}
		if (sysctl_drop_caches & 2) {
			drop_slab();
			count_vm_event(DROP_SLAB);
		}
        if (sysctl_drop_caches & 8) {
#ifdef CONFIG_CMA_RTK_ALLOCATOR
            list_all_rtk_memory_allocation_sort(list_mem_generic,NULL,NULL);
            printk("\n\tDCU1(lowmem-cma):\n");
            show_rtkbp((struct mem_bp *)dma_get_allocator(NULL));
            printk("\n\tDCU2(highmem-cma):\n");
            show_rtkbp((struct mem_bp *)dma_get_allocator(auth_dev));
#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
            if (carvedout_buf_query(CARVEDOUT_BW_HIGH_CMA, NULL) > 0) {
				printk("\n\tHIGHMEM_BW(highmem-bw-cma):\n");
				show_rtkbp((struct mem_bp *)dma_get_allocator(bw_auth_dev));
            }
#endif
#endif
        }

		if (!stfu) {
			pr_info("%s (%d): drop_caches: %d\n",
				current->comm, task_pid_nr(current),
				sysctl_drop_caches);
		}
		stfu |= sysctl_drop_caches & 4;
	}
	return 0;
}
