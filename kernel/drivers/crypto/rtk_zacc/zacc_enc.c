#include <linux/module.h>

#include <linux/kernel.h>

#include <linux/dma-mapping.h>
#include <linux/highmem.h>
#include <linux/list.h>
#include <linux/mm.h>
#include <linux/of.h>
#include <linux/platform_device.h>
#include <linux/spinlock.h>
#include <linux/smp.h>
#include <linux/zacc.h>
#include <rbus/lzma_reg.h>
#include <mach/io.h>
#include <linux/delay.h>
#include <linux/smp.h>
#include "zacc.h"

#define ZACC_ENC_TIMEOUT_COUNT1		4000
#define ZACC_ENC_TIMEOUT_COUNT2		4000
#define ZACC_ENABLE_RECOVERY		0
#define ZACC_USE_HW_RESET		1

static LIST_HEAD(zacc_enc_list);
static spinlock_t zacc_enc_lock;

extern spinlock_t zacc_hw_lock;
extern bool zacc_recovery;
extern int zacc_cmd_state[ZACC_QUEUE_SIZE];
extern const unsigned int reg_offset[4];

int zacc_encoder_ready(void)
{
	return !list_empty(&zacc_enc_list);
}

static struct zacc_dev *zacc_encoder(void)
{
	return __zacc_device(&zacc_enc_list, &zacc_enc_lock);
}

#if ZACC_ENABLE_RECOVERY
static void zacc_enc_recovery(void)
{
#if ZACC_USE_HW_RESET
	unsigned long flags;
	int index = smp_processor_id();
	int i;

	spin_lock_irqsave(&zacc_hw_lock, flags);
	if (zacc_recovery) {
		spin_unlock_irqrestore(&zacc_hw_lock, flags);
		return;
	}
	else {
		zacc_recovery = true;
	}
	spin_unlock_irqrestore(&zacc_hw_lock, flags);

	zacc_cmd_state[index] = 0;
	while (1) {
		for (i = 0; i < ZACC_QUEUE_SIZE; i++) {
			if (zacc_cmd_state[i])
				break;
		}
		if (i == ZACC_QUEUE_SIZE)
			break;
		udelay(1);
	}

	rtd_outl(SYS_REG_SYS_CLKEN3_reg, BIT(28));
	udelay(10);
	rtd_outl(SYS_REG_SYS_SRST3_reg, BIT(28));
	udelay(10);
	rtd_outl(SYS_REG_SYS_SRST3_reg, BIT(28) | BIT(0));
	udelay(10);
	rtd_outl(SYS_REG_SYS_CLKEN3_reg, BIT(28) | BIT(0));
	udelay(10);
	rtd_maskl(LZMA_LZMA_DMA_RD_Ctrl_reg, 0xfff0fcfe, (0x2 << 18) | (0x3 << 16) | (0x3 << 8) | (0x1 << 0)); //bit0: force_all_rst=1, bit8: max_outstanding=3, bit16: cmd_burst_length=3, bit18: data_burst_length=2
	rtd_maskl(LZMA_LZMA_DMA_WR_Ctrl_reg, 0xfffcfcfe, (0x2 << 16) | (0x3 << 8) | (0x1 << 0)); //bit0: force_all_rst=1, bit8: max_outstanding=3, bit16: data_burst_length=2
	rtd_maskl(LZMA_INT_STATUS_reg, 0x3fffffdf, (0x1 << 31) | (0x0 << 30) | (0x1 << 5)); //bit31: hw_done_en=0, bit30: cmd_register_mode=0, bit5: cut_value1_en=1
	rtd_maskl(LZMA_LZMA_DUMMY_reg, 0xbfffffff, 0x1 << 30); //reg_lzma_4k_sram_ready_eco=1 (0:bypass, 1:valid)

	spin_lock_irqsave(&zacc_hw_lock, flags);
	zacc_recovery = false;
	spin_unlock_irqrestore(&zacc_hw_lock, flags);
#else
	if (!(rtd_inl(LZMA_CMD_GO_SWAP_reg) & (0x1 << 24))) {
		rtd_maskl(LZMA_CMD_GO_SWAP_reg, ~(0x1 << 24), 0x1 << 24);
		udelay(4);
		rtd_maskl(LZMA_CMD_GO_SWAP_reg, ~(0x1 << 24), 0x0 << 24);
	}
#endif
}
#endif

ssize_t zacc_encode(void *dst, void const *src)
{
	struct zacc_dev *zdev;
	struct zacc_desc *desc;
	struct zacc_encode_desc *encode_desc;
	struct zacc_encode_desc tmp_encode_desc;
	struct device *dev;
	struct page *dst_pg, *src_pg;
	//struct page *tmp_dst_pg, *tmp_src_pg;
	dma_addr_t dst_pa, src_pa, _dst, _src, desc_pa;
	//dma_addr_t tmp_src, tmp_src_pa, tmp_dst, tmp_dst_pa;
	unsigned int err, index;
	unsigned int comp_size, aligned_size, desc_size, crc, err_count, timeout, cmd_status;
	bool need_recovery = false;
	//unsigned long flags;
	unsigned int cpu_id;
	unsigned int hw_done_count;

	if (!dst || !src)
		return -EINVAL;

	zdev = zacc_encoder();
	if (!zdev)
		return -ENODEV;
	dev = &zdev->pdev->dev;

	preempt_disable();
	cpu_id = smp_processor_id();
	desc = zacc_get_desc(zdev);
	index = desc - zdev->desc;
	desc_size = sizeof(struct zacc_desc);
	desc_pa = index * desc_size + zdev->desc_pa;

	if (ZACC_QUEUE_SHIFT > 1)
		index = cpu_id;

	dst_pg = zdev->dst_pg[index];
	src_pg = zdev->src_pg[index];

	_dst = (dma_addr_t)page_address(dst_pg);
	_src = (dma_addr_t)page_address(src_pg);
	memcpy((void *)_src, src, PAGE_SIZE);

	dst_pa = dma_map_page(dev, dst_pg, 0, PAGE_SIZE, DMA_FROM_DEVICE);
	src_pa = dma_map_page(dev, src_pg, 0, PAGE_SIZE, DMA_TO_DEVICE);

retry:
	need_recovery = false;
	zacc_cmd_state[index] = 0;

#if ZACC_USE_HW_RESET
	while (zacc_recovery) {
		udelay(1);
	}
#else
	while (rtd_inl(LZMA_CMD_GO_SWAP_reg) & (0x1 << 24)) {
		udelay(1);
	}
#endif
	zacc_cmd_state[index] = 1;
	memset((void *)&tmp_encode_desc, 0, ZACC_DESC_SIZE);
	tmp_encode_desc.encode = 1;
	tmp_encode_desc.dst_addr = dst_pa >> 4;
	tmp_encode_desc.src_addr = src_pa >> 4;

	encode_desc = (struct zacc_encode_desc *)desc;
	memcpy((void *)encode_desc, (void *)&tmp_encode_desc, ZACC_DESC_SIZE);

	rtd_outl(LZMA_CMD_0_BASE_reg + reg_offset[index], desc_pa);
	rtd_outl(LZMA_CMD_0_LIMIT_reg + reg_offset[index], (desc_pa + 0x20));
	rtd_outl(LZMA_CMD_0_RPTR_reg + reg_offset[index], desc_pa);
	rtd_outl(LZMA_CMD_0_WPTR_reg + reg_offset[index], (desc_pa + 0x10));
	hw_done_count = rtd_inl(LZMA_CMD_0_dec_reg + reg_offset[index]) & 0x0f;
	wmb();

#if ZACC_USE_HW_RESET
	if (zacc_recovery)
		goto retry;
#else
	if(rtd_inl(LZMA_CMD_GO_SWAP_reg) & (0x1 << 24)) {
		goto retry;
	}
#endif

	rtd_outl(LZMA_CMD_GO_SWAP_reg, 0x04000000 | (0xf << (0x6 * index)));
	wmb();

	err_count = 0;
	timeout = ZACC_ENC_TIMEOUT_COUNT1;
	while (1) {
		cmd_status = rtd_inl(LZMA_CMD_GO_SWAP_reg);
		if (((cmd_status & (0x1 << (0x6 * index))) == 0) &&
			(hw_done_count != (rtd_inl(LZMA_CMD_0_dec_reg + reg_offset[index]) & 0x0f))) {
			break;
		}
		if (++err_count >= timeout) {
			need_recovery = true;
			break;
		}
#if ZACC_USE_HW_RESET
		if (zacc_recovery)
			goto retry;
#else
		if (cmd_status & (0x1 << 24)) {
			goto retry;
		}
#endif
		udelay(1);
	}

	err_count = 0;
	timeout = ZACC_ENC_TIMEOUT_COUNT2;
	while (1) {
		if (encode_desc->hw_done)
			break;
		if (++err_count >= timeout)
			break;
#if ZACC_USE_HW_RESET
		if (zacc_recovery) {
			goto retry;
		}
#else
		if (rtd_inl(LZMA_CMD_GO_SWAP_reg) & (0x1 << 24)) {
			goto retry;
		}
#endif
		udelay(1);
	}

	memcpy((void *)&tmp_encode_desc, (void *)encode_desc, ZACC_DESC_SIZE);
	if ((!tmp_encode_desc.hw_done) ||
		(tmp_encode_desc.unused_0 != 0) ||
		(tmp_encode_desc.unused_1 != 0) ||
		(tmp_encode_desc.unused_2 != 0) ||
		(tmp_encode_desc.encode != 1) ||
		(tmp_encode_desc.dst_addr != (dst_pa >> 4)) ||
		(tmp_encode_desc.src_addr != (src_pa >> 4))) {
		need_recovery = true;
	}

	comp_size = tmp_encode_desc.comp_size;
	aligned_size = ((comp_size + 0xf) >> 4) << 4;

	if ((need_recovery) ||
		(tmp_encode_desc.cmd_err) ||
		(tmp_encode_desc.over_4k) ||
		(aligned_size >= PAGE_SIZE)) {
		aligned_size = PAGE_SIZE;
	}

	if (need_recovery) {
#if ZACC_ENABLE_RECOVERY
		zacc_enc_recovery();
#else
		printk(KERN_EMERG "src_pa = %x, dst_pa = %x\n", src_pa, dst_pa);
		panic("rtlzma encode error !! desc(0x%x): 0x%x, 0x%x, 0x%x, 0x%x\n",
			(unsigned int)desc, desc->data[0], desc->data[1], desc->data[2], desc->data[3]);
#endif
	}

	//memset(desc, 0, ZACC_DESC_SIZE << 2);
	dma_unmap_page(dev, dst_pa, PAGE_SIZE, DMA_FROM_DEVICE);
	dma_unmap_page(dev, src_pa, PAGE_SIZE, DMA_TO_DEVICE);

	rmb();

	err = aligned_size;
	if (err > 0) {
		if ((aligned_size + 3) >= PAGE_SIZE) {
			memcpy(dst, src, PAGE_SIZE);
			err = PAGE_SIZE;
		}
		else {
			memcpy(dst, (void *)_dst, aligned_size);
			crc = tmp_encode_desc.crc;
			((unsigned char *)dst)[aligned_size + 2] = aligned_size - comp_size;
			((unsigned char *)dst)[aligned_size + 1] = (crc >> 8) & 0xff;
			((unsigned char *)dst)[aligned_size] = crc & 0xff;
			aligned_size += 3;
			err = aligned_size;
		}
	}

	zacc_cmd_state[index] = 0;
	zacc_put_desc(zdev, desc);
	preempt_enable();

	return err;
}
EXPORT_SYMBOL(zacc_encode);

static int zacc_probe(struct platform_device *pdev)
{
	struct zacc_dev *zdev;
	unsigned long flags;

	zdev = __zacc_probe(pdev);
	if (!zdev)
		return -ENODEV;

	spin_lock_irqsave(&zacc_enc_lock, flags);
	list_add_tail(&zdev->list, &zacc_enc_list);
	spin_unlock_irqrestore(&zacc_enc_lock, flags);

	pr_info("zacc_enc: %s initialized\n", pdev->name);

	return 0;
}

static int zacc_remove(struct platform_device *pdev)
{
	struct zacc_dev *zdev = platform_get_drvdata(pdev);
	unsigned long flags;

	spin_lock_irqsave(&zacc_enc_lock, flags);
	list_del(&zdev->list);
	spin_unlock_irqrestore(&zacc_enc_lock, flags);

	__zacc_remove(pdev);

	return 0;
}

#ifdef CONFIG_OF

static struct of_device_id const zacc_of_match[] = {
	{ .compatible = "realtek,zacc-enc", },
	{ /* sentinel */ }
};
MODULE_DEVICE_TABLE(of, zacc_of_match);

#endif	/* CONFIG_OF */

static struct platform_driver zacc_enc_drv = {
	.probe	= zacc_probe,
	.remove	= zacc_remove,
	.driver	= {
		.name	= "zacc-enc",
		.owner	= THIS_MODULE,
		.pm	= &zacc_pm_ops,
		.of_match_table	= of_match_ptr(zacc_of_match),
	},
};
module_platform_driver(zacc_enc_drv);

MODULE_AUTHOR("Alex-KC Yuan <alexkc.yuan@realtekc.com>");
MODULE_DESCRIPTION("Realtek ZACC HW compressor support");
MODULE_LICENSE("GPL");
