/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __MM_CMA_H__
#define __MM_CMA_H__

#define CONFIG_ADD_CMA_TIMEOUT_SYSRQ

#define MAX_CMA_TIMER_NUM 5

struct cma_timer_info {
	struct timer_list alloc_timer;
	int used;
	int caller_pid;
};

struct cma {
	unsigned long   base_pfn;
	unsigned long   count;
	unsigned long   *bitmap;
	unsigned int order_per_bit; /* Order of pages represented by one bit */
	struct mutex    lock;
#ifdef CONFIG_CMA_DEBUGFS
	struct hlist_head mem_head;
	spinlock_t mem_head_lock;
#endif
	const char *name;
#ifdef CONFIG_ADD_CMA_TIMEOUT_SYSRQ
	struct cma_timer_info cma_timer[MAX_CMA_TIMER_NUM];
#endif
};

extern struct cma cma_areas[MAX_CMA_AREAS];
extern unsigned cma_area_count;

static inline unsigned long cma_bitmap_maxno(struct cma *cma)
{
	return cma->count >> cma->order_per_bit;
}

#endif
