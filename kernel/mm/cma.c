/*
 * Contiguous Memory Allocator
 *
 * Copyright (c) 2010-2011 by Samsung Electronics.
 * Copyright IBM Corporation, 2013
 * Copyright LG Electronics Inc., 2014
 * Written by:
 *	Marek Szyprowski <m.szyprowski@samsung.com>
 *	Michal Nazarewicz <mina86@mina86.com>
 *	Aneesh Kumar K.V <aneesh.kumar@linux.vnet.ibm.com>
 *	Joonsoo Kim <iamjoonsoo.kim@lge.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License or (at your optional) any later version of the license.
 */

#define pr_fmt(fmt) "cma: " fmt

#ifdef CONFIG_CMA_DEBUG
#ifndef DEBUG
#  define DEBUG
#endif
#endif
#define CREATE_TRACE_POINTS

#include <linux/memblock.h>
#include <linux/err.h>
#include <linux/mm.h>
#include <linux/mutex.h>
#include <linux/sizes.h>
#include <linux/slab.h>
#include <linux/log2.h>
#include <linux/cma.h>
#include <linux/highmem.h>
#include <linux/io.h>
#include <linux/rtkrecord.h>
#include <trace/events/cma.h>

#include "cma.h"

#ifdef CONFIG_CMA_RTK_ALLOCATOR
#include <linux/delay.h>
#include <linux/rtkblueprint.h>
#include <clocksource/arm_arch_timer.h>
#endif

#include <linux/sched/debug.h>
#include <linux/sched.h>

struct cma cma_areas[MAX_CMA_AREAS];
unsigned cma_area_count;
static DEFINE_MUTEX(cma_mutex);

phys_addr_t cma_get_base(const struct cma *cma)
{
	return PFN_PHYS(cma->base_pfn);
}

unsigned long cma_get_size(const struct cma *cma)
{
	return cma->count << PAGE_SHIFT;
}

const char *cma_get_name(const struct cma *cma)
{
	return cma->name ? cma->name : "(undefined)";
}

static unsigned long cma_bitmap_aligned_mask(const struct cma *cma,
					     unsigned int align_order)
{
	if (align_order <= cma->order_per_bit)
		return 0;
	return (1UL << (align_order - cma->order_per_bit)) - 1;
}

/*
 * Find the offset of the base PFN from the specified align_order.
 * The value returned is represented in order_per_bits.
 */
static unsigned long cma_bitmap_aligned_offset(const struct cma *cma,
					       unsigned int align_order)
{
	return (cma->base_pfn & ((1UL << align_order) - 1))
		>> cma->order_per_bit;
}

static unsigned long cma_bitmap_pages_to_bits(const struct cma *cma,
					      unsigned long pages)
{
	return ALIGN(pages, 1UL << cma->order_per_bit) >> cma->order_per_bit;
}

static void cma_clear_bitmap(struct cma *cma, unsigned long pfn,
			     unsigned int count)
{
	unsigned long bitmap_no, bitmap_count;

	bitmap_no = (pfn - cma->base_pfn) >> cma->order_per_bit;
	bitmap_count = cma_bitmap_pages_to_bits(cma, count);

	mutex_lock(&cma->lock);
	bitmap_clear(cma->bitmap, bitmap_no, bitmap_count);
	mutex_unlock(&cma->lock);
}

static int __init cma_activate_area(struct cma *cma)
{
#ifndef CONFIG_CMA_RTK_ALLOCATOR
	int bitmap_size = BITS_TO_LONGS(cma_bitmap_maxno(cma)) * sizeof(long);
#endif
	unsigned long base_pfn = cma->base_pfn, pfn = base_pfn;
	unsigned i = cma->count >> pageblock_order;
	struct zone *zone;
#ifdef CONFIG_ADD_CMA_TIMEOUT_SYSRQ
	int timer_index = 0;
#endif

#ifdef CONFIG_CMA_RTK_ALLOCATOR
	if (!cma->count) {
		pr_info("%s: returned null cma %p\n", __func__, (void *)cma);
		return -EINVAL;
	}

    cma->bitmap = kzalloc(sizeof(struct mem_bp), GFP_KERNEL);

    if (!cma->bitmap)
		return -ENOMEM;

    init_rtkbp((struct mem_bp *)cma->bitmap, cma->base_pfn, cma->count);
#else
	cma->bitmap = kzalloc(bitmap_size, GFP_KERNEL);

	if (!cma->bitmap) {
		cma->count = 0;
		return -ENOMEM;
	}
#endif

	WARN_ON_ONCE(!pfn_valid(pfn));
	zone = page_zone(pfn_to_page(pfn));

	do {
		unsigned j;

		base_pfn = pfn;
		for (j = pageblock_nr_pages; j; --j, pfn++) {
			WARN_ON_ONCE(!pfn_valid(pfn));
			/*
			 * alloc_contig_range requires the pfn range
			 * specified to be in the same zone. Make this
			 * simple by forcing the entire CMA resv range
			 * to be in the same zone.
			 */
			if (page_zone(pfn_to_page(pfn)) != zone) {
				pr_err("cma_activate_area ERROR, zone of page 0x%lx is %s, not %s\n", pfn * PAGE_SIZE, page_zone(pfn_to_page(pfn))->name, zone->name);
				goto not_in_zone;
			}
		}
        if (unlikely(is_banned(base_pfn, BAN_NOT_USED))) {
            pr_info("CMA: exclude %ld MiB at %08lx\n",
					pageblock_nr_pages * PAGE_SIZE / SZ_1M,
					base_pfn << PAGE_SHIFT);
            continue;
        }
		init_cma_reserved_pageblock(pfn_to_page(base_pfn));
	} while (--i);

	mutex_init(&cma->lock);

#ifdef CONFIG_CMA_DEBUGFS
	INIT_HLIST_HEAD(&cma->mem_head);
	spin_lock_init(&cma->mem_head_lock);
#endif

#ifdef CONFIG_ADD_CMA_TIMEOUT_SYSRQ
	for (timer_index = 0; timer_index < MAX_CMA_TIMER_NUM; timer_index++) {
		cma->cma_timer[timer_index].used = 0;
		cma->cma_timer[timer_index].caller_pid = 0;
	}
#endif

	pr_info("%s: returned normal cma %p\n", __func__, (void *)cma);

	return 0;

not_in_zone:
	pr_err("CMA area %s could not be activated\n", cma->name);
	kfree(cma->bitmap);
	cma->count = 0;
	return -EINVAL;
}

static int __init cma_init_reserved_areas(void)
{
	int i;

	for (i = 0; i < cma_area_count; i++) {
		int ret = cma_activate_area(&cma_areas[i]);

		if (ret)
			return ret;
	}

	return 0;
}
core_initcall(cma_init_reserved_areas);

/**
 * cma_init_reserved_mem() - create custom contiguous area from reserved memory
 * @base: Base address of the reserved area
 * @size: Size of the reserved area (in bytes),
 * @order_per_bit: Order of pages represented by one bit on bitmap.
 * @res_cma: Pointer to store the created cma region.
 *
 * This function creates custom contiguous area from already reserved memory.
 */
int __init cma_init_reserved_mem(phys_addr_t base, phys_addr_t size,
				 unsigned int order_per_bit,
				 const char *name,
				 struct cma **res_cma)
{
	struct cma *cma;
	phys_addr_t alignment;

	/* Sanity checks */
	if (cma_area_count == ARRAY_SIZE(cma_areas)) {
		pr_err("Not enough slots for CMA reserved regions!\n");
		return -ENOSPC;
	}

	if (!size || !memblock_is_region_reserved(base, size))
		return -EINVAL;

	/* ensure minimal alignment required by mm core */
	alignment = PAGE_SIZE <<
			max_t(unsigned long, MAX_ORDER - 1, pageblock_order);

	/* alignment should be aligned with order_per_bit */
	if (!IS_ALIGNED(alignment >> PAGE_SHIFT, 1 << order_per_bit))
		return -EINVAL;

	if (ALIGN(base, alignment) != base || ALIGN(size, alignment) != size)
		return -EINVAL;

	/*
	 * Each reserved area must be initialised later, when more kernel
	 * subsystems (like slab allocator) are available.
	 */
	cma = &cma_areas[cma_area_count];
	if (name) {
		cma->name = name;
	} else {
		cma->name = kasprintf(GFP_KERNEL, "cma%d\n", cma_area_count);
		if (!cma->name)
			return -ENOMEM;
	}
	cma->base_pfn = PFN_DOWN(base);
	cma->count = size >> PAGE_SHIFT;
	cma->order_per_bit = order_per_bit;
	*res_cma = cma;
	cma_area_count++;
	totalcma_pages += (size / PAGE_SIZE);

	return 0;
}

/**
 * cma_declare_contiguous() - reserve custom contiguous area
 * @base: Base address of the reserved area optional, use 0 for any
 * @size: Size of the reserved area (in bytes),
 * @limit: End address of the reserved memory (optional, 0 for any).
 * @alignment: Alignment for the CMA area, should be power of 2 or zero
 * @order_per_bit: Order of pages represented by one bit on bitmap.
 * @fixed: hint about where to place the reserved area
 * @res_cma: Pointer to store the created cma region.
 *
 * This function reserves memory from early allocator. It should be
 * called by arch specific code once the early allocator (memblock or bootmem)
 * has been activated and all other subsystems have already allocated/reserved
 * memory. This function allows to create custom reserved areas.
 *
 * If @fixed is true, reserve contiguous area at exactly @base.  If false,
 * reserve in range from @base to @limit.
 */
int __init cma_declare_contiguous(phys_addr_t base,
			phys_addr_t size, phys_addr_t limit,
			phys_addr_t alignment, unsigned int order_per_bit,
			bool fixed, const char *name, struct cma **res_cma)
{
	phys_addr_t memblock_end = memblock_end_of_DRAM();
	phys_addr_t highmem_start;
	int ret = 0;

	/*
	 * We can't use __pa(high_memory) directly, since high_memory
	 * isn't a valid direct map VA, and DEBUG_VIRTUAL will (validly)
	 * complain. Find the boundary by adding one to the last valid
	 * address.
	 */
	highmem_start = __pa(high_memory - 1) + 1;
	pr_debug("%s(size %pa, base %pa, limit %pa alignment %pa)\n",
		__func__, &size, &base, &limit, &alignment);

	if (cma_area_count == ARRAY_SIZE(cma_areas)) {
		pr_err("Not enough slots for CMA reserved regions!\n");
		return -ENOSPC;
	}

	if (!size)
		return -EINVAL;

	if (alignment && !is_power_of_2(alignment))
		return -EINVAL;

	/*
	 * Sanitise input arguments.
	 * Pages both ends in CMA area could be merged into adjacent unmovable
	 * migratetype page by page allocator's buddy algorithm. In the case,
	 * you couldn't get a contiguous memory, which is not what we want.
	 */
	alignment = max(alignment,  (phys_addr_t)PAGE_SIZE <<
			  max_t(unsigned long, MAX_ORDER - 1, pageblock_order));
	if (fixed && base & (alignment - 1)) {
		ret = -EINVAL;
		pr_err("Region at %pa must be aligned to %pa bytes\n",
			&base, &alignment);
		goto err;
	}
	base = ALIGN(base, alignment);
	size = ALIGN(size, alignment);
	limit &= ~(alignment - 1);

	if (!base)
		fixed = false;

	/* size should be aligned with order_per_bit */
	if (!IS_ALIGNED(size >> PAGE_SHIFT, 1 << order_per_bit))
		return -EINVAL;

	/*
	 * If allocating at a fixed base the request region must not cross the
	 * low/high memory boundary.
	 */
	if (fixed && base < highmem_start && base + size > highmem_start) {
		ret = -EINVAL;
		pr_err("Region at %pa defined on low/high memory boundary (%pa)\n",
			&base, &highmem_start);
		goto err;
	}

	/*
	 * If the limit is unspecified or above the memblock end, its effective
	 * value will be the memblock end. Set it explicitly to simplify further
	 * checks.
	 */
	if (limit == 0 || limit > memblock_end)
		limit = memblock_end;

	if (base + size > limit) {
		ret = -EINVAL;
		pr_err("Size (%pa) of region at %pa exceeds limit (%pa)\n",
			&size, &base, &limit);
		goto err;
	}

	/* Reserve memory */
	if (fixed) {
		if (memblock_reserve(base, size) < 0) {
			ret = -EBUSY;
			goto err;
		}
	} else {
		phys_addr_t addr = 0;

		/*
		 * All pages in the reserved area must come from the same zone.
		 * If the requested region crosses the low/high memory boundary,
		 * try allocating from high memory first and fall back to low
		 * memory in case of failure.
		 */
		if (base < highmem_start && limit > highmem_start) {
			addr = memblock_alloc_range(size, alignment,
						    highmem_start, limit,
						    MEMBLOCK_NONE);
			limit = highmem_start;
		}

		if (!addr) {
			addr = memblock_alloc_range(size, alignment, base,
						    limit,
						    MEMBLOCK_NONE);
			if (!addr) {
				ret = -ENOMEM;
				goto err;
			} else if (addr + size > ~(unsigned long)0) {
				memblock_free(addr, size);
				base = -EINVAL;
				goto err;
			}
		}

		/*
		 * kmemleak scans/reads tracked objects for pointers to other
		 * objects but this address isn't mapped and accessible
		 */
		kmemleak_ignore_phys(addr);
		base = addr;
	}

	ret = cma_init_reserved_mem(base, size, order_per_bit, name, res_cma);
	if (ret)
		goto free_mem;

	pr_info("Reserved %ld MiB at %pa\n", (unsigned long)size / SZ_1M,
		&base);
	return 0;

free_mem:
	memblock_free(base, size);
err:
	pr_err("Failed to reserve %ld MiB\n", (unsigned long)size / SZ_1M);
	return ret;
}

int __init cma_declare_null(struct cma **res_cma)
{
	struct cma *cma;

	/* Sanity checks */
	if (cma_area_count == ARRAY_SIZE(cma_areas)) {
		pr_err("Not enough slots for CMA reserved regions!\n");
		return -ENOSPC;
	}

	cma = &cma_areas[cma_area_count];
	cma->base_pfn = 0;
	cma->count = 0;

	*res_cma = cma;
	cma_area_count++;

	pr_info("CMA: reserved null cma\n");

	return 0;
}

#ifdef CONFIG_CMA_DEBUG
static void cma_debug_show_areas(struct cma *cma)
{
	unsigned long next_zero_bit, next_set_bit, nr_zero;
	unsigned long start = 0;
	unsigned long nr_part, nr_total = 0;
	unsigned long nbits = cma_bitmap_maxno(cma);

	mutex_lock(&cma->lock);
	pr_info("number of available pages: ");
	for (;;) {
		next_zero_bit = find_next_zero_bit(cma->bitmap, nbits, start);
		if (next_zero_bit >= nbits)
			break;
		next_set_bit = find_next_bit(cma->bitmap, nbits, next_zero_bit);
		nr_zero = next_set_bit - next_zero_bit;
		nr_part = nr_zero << cma->order_per_bit;
		pr_cont("%s%lu@%lu", nr_total ? "+" : "", nr_part,
			next_zero_bit);
		nr_total += nr_part;
		start = next_zero_bit + nr_zero;
	}
	pr_cont("=> %lu free of %lu total pages\n", nr_total, cma->count);
	mutex_unlock(&cma->lock);
}
#else
static inline void cma_debug_show_areas(struct cma *cma) { }
#endif

int cma_retry_new_range = 1;
#define CONFIG_CMA_RETRY_NEW_RANGE 1
/* try max 8 CMA region to avoid deadlock
 * on locked pages that belong to CMA allocating region.
 * (max 2 is not enough, report 1 time in 5 month QA stage)
 */
#define PN_MAX 8

#define CONFIG_ONE_SEC  (27000000)
#define CMA_ALLOC_TIMEOUT  (5*CONFIG_ONE_SEC) // 5 secs

#ifdef CONFIG_ADD_CMA_TIMEOUT_SYSRQ
static int sysrq_trigger_ms = 15000; // 15 secs

extern void dump_stacks (void);

void sysrq_dump_state(unsigned long state_filter)
{
	pr_err("\n%s: [Show Blocked State]\n", __func__);
	show_state_filter(TASK_UNINTERRUPTIBLE);
#ifdef CONFIG_SMP
	pr_err("\n%s: [Show backtrace of all active CPUs]\n", __func__);
	dump_stacks();
#endif
}
#endif

/**
 * cma_alloc() - allocate pages from contiguous area
 * @cma:   Contiguous memory region for which the allocation is performed.
 * @count: Requested number of pages.
 * @align: Requested alignment of pages (in PAGE_SIZE order).
 *
 * This function allocates part of contiguous memory on specific
 * contiguous memory area.
 */
struct page *cma_alloc(struct cma *cma, size_t count, unsigned int align,
		       gfp_t gfp_mask)
{
	unsigned long mask, offset;
	unsigned long pfn = -1, pageno;
	unsigned long bitmap_maxno, bitmap_count;
	struct page *page = NULL;
	int ret = -ENOMEM;
#ifndef CONFIG_CMA_RTK_ALLOCATOR
	unsigned long start = 0;
	unsigned long bitmap_no;
#endif
	unsigned long pn[PN_MAX];
	int pn_idx;
	unsigned long long t_start = 0, t_end = 0;
#ifdef CONFIG_ADD_CMA_TIMEOUT_SYSRQ
	int timer_index = 0;
#endif

	if (!cma || !cma->count)
		return NULL;

	pr_debug("%s(cma %p, count %zu, align %d)\n", __func__, (void *)cma,
		 count, align);

	if (!count)
		return NULL;

	t_start = arch_timer_read_counter();

	mask = cma_bitmap_aligned_mask(cma, align);
	offset = cma_bitmap_aligned_offset(cma, align);
	bitmap_maxno = cma_bitmap_maxno(cma);
	bitmap_count = cma_bitmap_pages_to_bits(cma, count);

#ifdef CONFIG_CMA_RTK_ALLOCATOR
	mutex_lock(&cma->lock);
	pageno = alloc_rtkbp_memory((struct mem_bp *)cma->bitmap, get_order(count * PAGE_SIZE));
//	show_rtkbp((struct mem_bp *)cma->bitmap);
	if (pageno == INVALID_VAL) {
		pr_err("cma(%d) %p: order %lu free pages %lu\n", ((void *)cma == (void *)&cma_areas[0]) ? 1 : 2, (void *)cma, (uintptr_t)get_order(count * PAGE_SIZE), ((struct mem_bp *)cma->bitmap)->avail_size);
//		dump_stack();
		mutex_unlock(&cma->lock);
		return NULL;
	}
	mutex_unlock(&cma->lock);

	pfn = cma->base_pfn + pageno;

	mutex_lock(&cma_mutex);

#ifdef CONFIG_ADD_CMA_TIMEOUT_SYSRQ
	for (timer_index = 0; timer_index < MAX_CMA_TIMER_NUM; timer_index++) {
		if (cma->cma_timer[timer_index].used == 0) {
			cma->cma_timer[timer_index].caller_pid = current->pid;
			cma->cma_timer[timer_index].used = 1;
			setup_timer(&cma->cma_timer[timer_index].alloc_timer,
				sysrq_dump_state, 0);
			mod_timer(&cma->cma_timer[timer_index].alloc_timer,
				jiffies + msecs_to_jiffies(sysrq_trigger_ms));
			break;
		}
		if (timer_index == MAX_CMA_TIMER_NUM -1) {
			pr_err("%s: Error: CMA timer is full for pid (%d)\n", __func__, current->pid);
		}
	}
#endif

	for (pn_idx = 0; pn_idx < PN_MAX; pn_idx++) {
		unsigned int tries;
		tries = 0;
retry:
		ret = alloc_contig_range(pfn, pfn + count, MIGRATE_CMA, gfp_mask);

		if (ret == 0) {
			page = pfn_to_page(pfn);
			break;
		} else if (ret != -EBUSY) {
			free_rtkbp_memory((struct mem_bp *)cma->bitmap, pageno, get_order(count * PAGE_SIZE));
			break;
		}

		if (++tries) {
			if (tries < 10) {
				mutex_unlock(&cma_mutex);
				pr_warn("cma %p: fail(0x%x) at pfn:0x%x, retry(%d) remapping...\n",
					(void *)cma, ret, pfn, tries);
				msleep(1L << tries);
				mutex_lock(&cma_mutex);
				goto retry;
			}
		}

		// to remap next available CMA range, instead stuck the same pages.
		if (((CONFIG_CMA_RETRY_NEW_RANGE) != 0) && (0 != cma_retry_new_range)) {
			unsigned long next_pageno;
			next_pageno = alloc_rtkbp_memory((struct mem_bp *)cma->bitmap, get_order(count * PAGE_SIZE));
			//show_rtkbp((struct mem_bp *)cma->bitmap);
			if (next_pageno == INVALID_VAL) {
				free_rtkbp_memory((struct mem_bp *)cma->bitmap, pageno, get_order(count * PAGE_SIZE));
				pr_warn("cma %p: available pages %lu\n", (void *)cma, ((struct mem_bp *)cma->bitmap)->avail_size);
				page = NULL;
				break;
			}

			pn[pn_idx] = pageno;

			pageno = next_pageno;
			pfn = cma->base_pfn + pageno;
		}
	}
	while (pn_idx > 0) {
		pn_idx--;
		free_rtkbp_memory((struct mem_bp *)cma->bitmap, pn[pn_idx], get_order(count * PAGE_SIZE));
	}

#ifdef CONFIG_ADD_CMA_TIMEOUT_SYSRQ
	for (timer_index = 0; timer_index < MAX_CMA_TIMER_NUM; timer_index++) {
		if (current->pid == cma->cma_timer[timer_index].caller_pid) {
			del_timer_sync(&cma->cma_timer[timer_index].alloc_timer);
			cma->cma_timer[timer_index].caller_pid = 0;
			cma->cma_timer[timer_index].used = 0;
			break;
		}
		if (timer_index == MAX_CMA_TIMER_NUM -1) {
			pr_err("%s: Error: CMA timer is not found for pid (%d)\n", __func__, current->pid);
		}
	}
#endif

	mutex_unlock(&cma_mutex);
#else
	if (bitmap_count > bitmap_maxno)
		return NULL;

	for (;;) {
		mutex_lock(&cma->lock);
		bitmap_no = bitmap_find_next_zero_area_off(cma->bitmap,
				bitmap_maxno, start, bitmap_count, mask,
				offset);
		if (bitmap_no >= bitmap_maxno) {
			mutex_unlock(&cma->lock);
			break;
		}
		bitmap_set(cma->bitmap, bitmap_no, bitmap_count);
		/*
		 * It's safe to drop the lock here. We've marked this region for
		 * our exclusive use. If the migration fails we will take the
		 * lock again and unmark it.
		 */
		mutex_unlock(&cma->lock);

		pfn = cma->base_pfn + (bitmap_no << cma->order_per_bit);
		mutex_lock(&cma_mutex);
		ret = alloc_contig_range(pfn, pfn + count, MIGRATE_CMA,
					 gfp_mask);
		mutex_unlock(&cma_mutex);
		if (ret == 0) {
			page = pfn_to_page(pfn);
			break;
		}

		cma_clear_bitmap(cma, pfn, count);
		if (ret != -EBUSY)
			break;

		pr_debug("%s(): memory range at %p is busy, retrying\n",
			 __func__, pfn_to_page(pfn));
		/* try again with a bit different memory target */
		start = bitmap_no + mask + 1;
	}
#endif

	trace_cma_alloc(pfn, page, count, align);

	t_end = arch_timer_read_counter();

	if (ret && !(gfp_mask & __GFP_NOWARN)) {
		pr_info("%s: alloc failed, req-size: %zu pages, ret: %d\n",
			__func__, count, ret);
		cma_debug_show_areas(cma);
	}

	pr_debug("%s(): returned %p, t=%lld\n", __func__, page, t_end - t_start);
	if (t_end - t_start > CMA_ALLOC_TIMEOUT) {
		pr_err("%s(): returned %p, t=%lld, CMA TIMEOUT!!!\n", __func__, page, t_end - t_start);
	}
	return page;
}

/**
 * cma_release() - release allocated pages
 * @cma:   Contiguous memory region for which the allocation is performed.
 * @pages: Allocated pages.
 * @count: Number of allocated pages.
 *
 * This function releases memory allocated by alloc_cma().
 * It returns false when provided pages do not belong to contiguous area and
 * true otherwise.
 */
bool cma_release(struct cma *cma, const struct page *pages, unsigned int count)
{
	unsigned long pfn;

	if (!cma || !pages)
		return false;

	pr_debug("%s(page %p)\n", __func__, (void *)pages);

	pfn = page_to_pfn(pages);

	if (pfn < cma->base_pfn || pfn >= cma->base_pfn + cma->count)
		return false;

	VM_BUG_ON(pfn + count > cma->base_pfn + cma->count);

	free_contig_range(pfn, count);
#ifdef CONFIG_CMA_RTK_ALLOCATOR
	mutex_lock(&cma->lock);
	free_rtkbp_memory((struct mem_bp *)cma->bitmap, pfn - cma->base_pfn, get_order(count * PAGE_SIZE));
//	show_rtkbp((struct mem_bp *)cma->bitmap);
	mutex_unlock(&cma->lock);
#else
	cma_clear_bitmap(cma, pfn, count);
#endif
	trace_cma_release(pfn, pages, count);

	return true;
}

int cma_for_each_area(int (*it)(struct cma *cma, void *data), void *data)
{
	int i;

	for (i = 0; i < cma_area_count; i++) {
		int ret = it(&cma_areas[i], data);

		if (ret)
			return ret;
	}

	return 0;
}

#ifdef CONFIG_REALTEK_MEMORY_MANAGEMENT

void lock_cma(void)
{
	mutex_lock(&cma_mutex);
}

void unlock_cma(void)
{
	mutex_unlock(&cma_mutex);
}

unsigned long cma_avail_size(const struct cma *cma)
{
#ifdef CONFIG_CMA_RTK_ALLOCATOR
	return ((struct mem_bp *)cma->bitmap)->avail_size;
#else
	return 0;
#endif
}

unsigned long cma_get_bitmap(const struct cma *cma)
{
	return (unsigned long)(cma->bitmap);
}
#endif
