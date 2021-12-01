/*
 * SHEIPA SPI controller driver
 *
 * Copyright 2015-2018, Realtek Semiconductor Corp.
 * Author: PSP Software Group
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/dma-mapping.h>
#include <linux/interrupt.h>
#include <linux/module.h>
#include <linux/highmem.h>
#include <linux/delay.h>
#include <linux/slab.h>
#include <linux/spi/spi.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/spi-nor.h>
#include <linux/clk.h>
#include <linux/err.h>
#include <linux/platform_device.h>
#include <linux/scatterlist.h>
#include <linux/of.h>
#include <linux/of_device.h>

#include "spi-sheipa.h"

#define DRIVER_NAME "spi-sheipa"

/* Time out values (msec) */
#define SHEIPA_SPI_TIMEOUT 5000

/* SPIC max slaves is 16(hw fixed value) */
#define SHEIPA_SPI_MAX_SLAVES 16

/* FLASH base address for auto mode */
#define SHEIPA_SPI_FIFO_SIZE 64
#define SHEIPA_SPI_BLOCK_SIZE 256

#define SHEIPA_SPI_QUAD_1_1_4_MODE 0x00080000
#define SHEIPA_SPI_QUAD_1_4_4_MODE 0x000a0000
#define SHEIPA_SPI_DUAL_1_1_2_MODE 0x00040000
#define SHEIPA_SPI_DUAL_1_2_2_MODE 0x00050000

/* max num of frames for read (rx_mode) */
#define SHEIPA_SPI_MAX_FRAME 0x1000

/* 3/4-byte address mode */
#define SHEIPA_SPI_ADDR_3_BYTE_MODE 0x3
#define SHEIPA_SPI_ADDR_LEN_MASK 0xfffffffc

/* Tx/rx mode */
#define SHEIPA_SPI_CTRLR0_RX 0x300
#define SHEIPA_SPI_CTRLR0_TX_MASK 0xfff0fcff
#define SHEIPA_SPI_CTRLR0_RX_MASK 0xfff0ffff

/* SPI data spilt mode */
#define SHEIPA_SPI_CTRLR2_SEQ_EN 0x8
#define SHEIPA_SPI_CTRLR2_SEQ_EN_MASK 0xfffffff7

/* Fast read mode */
#define SHEIPA_SPI_CTRLR0_FAST_RD_MASK 0x00400000

/* SPI Interrupt MASK Register */
#define SHEIPA_SPI_INTR_TXEIM BIT(0)
#define SHEIPA_SPI_INTR_TXOIM BIT(1)
#define SHEIPA_SPI_INTR_RXUIM BIT(2)
#define SHEIPA_SPI_INTR_RXOIM BIT(3)
#define SHEIPA_SPI_INTR_RXFIM BIT(4)
#define SHEIPA_SPI_INTR_TXEIM_MASK 0xffe
#define SHEIPA_SPI_INTR_RXFIM_MASK 0xfef

#define SHEIPA_SPI_AUTO_LEN_DUM_MASK 0xffc3cfff

struct sheipa_spi {
	struct spi_master *master;
	struct completion xfer_done;
	void __iomem *user_base;
	void __iomem *auto_base;
	u32 fifo_size;
	u32 xfer_mode; /* indicate quad or dual mode */
};

/*
 * spi register map
 */
struct sheipa_spi_map {
	volatile u32 ctrlr0; /* 0x000 ctrl r0 */
	volatile u32 ctrlr1; /* 0x004 ctrl r1 */
	volatile u32 ssienr; /* 0x008 spic enable */
	volatile u32 mwcr; /* 0x00c N/A reserved */
	volatile u32 ser; /* 0x010 slave enable */
	volatile u32 baudr; /* 0x014 baudrate select */
	volatile u32 txftlr; /* 0x018 tx fifo threshold level */
	volatile u32 rxftlr; /* 0x01c rx fifo threshold level */
	volatile u32 txflr; /* 0x020 tx fifo level */
	volatile u32 rxflr; /* 0x024 rx fifo level */
	volatile u32 sr; /* 0x028 status register */
	volatile u32 imr; /* 0x02c intr mask */
	volatile u32 isr; /* 0x030 intr status */
	volatile u32 risr; /* 0x034 raw intr status */
	volatile u32 txoicr; /* 0x038 tx fifo intr overflow clear */
	volatile u32 rxoicr; /* 0x03c rx fifo intr overflow clear */
	volatile u32 rxuicr; /* 0x040 rx fifo underflow clear */
	volatile u32 msticr; /* 0x044 intr mask error clear */
	volatile u32 icr; /* 0x048 intr clear */
	volatile u32 dmacr; /* 0x04c dma ctrl register */
	volatile u32 dmatdlr; /* 0x050 dma tx data level */
	volatile u32 dmardlr; /* 0x054 dma rx data level */
	volatile u32 idr; /* 0x058 identify scatter */
	volatile u32 version; /* 0x05c version */
	volatile u8 fifo[128]; /* 0x060~0x0dc fifo data register */
	volatile u32 rd_single; /* 0x0e0 read fast single */
	volatile u32 rd_dual_o; /* 0x0e4 read dual output */
	volatile u32 rd_dual_io; /* 0x0e8 read dual input/output */
	volatile u32 rd_quad_o; /* 0x0ec read quad output */
	volatile u32 rd_quad_io; /* 0x0f0 read quad input/output */
	volatile u32 wr_single; /* 0x0f4 write single */
	volatile u32 wr_dual_i; /* 0x0f8 write dual input */
	volatile u32 wr_dual_ii; /* 0x0fc write dual addr/data */
	volatile u32 wr_quad_i; /* 0x100 write quad input */
	volatile u32 wr_quad_ii; /* 0x104 write quad addr/data */
	volatile u32 wr_enable; /* 0x108 write enable */
	volatile u32 rd_status; /* 0x10c read status */
	volatile u32 ctrlr2; /* 0x110 ctrl r2 */
	volatile u32 fbaudr; /* 0x114 fast baud rate */
	volatile u32 addr_length; /* 0x118 addr length */
	volatile u32 auto_length; /* 0x11c auto length */
	volatile u32 valid_cmd;
	volatile u32 flash_size; /* 0x124 flash size */
	volatile u32 flush_fifo;
};

struct sheipa_spi_param {
	u32 num_slaves; /* slaves number */
	u32 fifo_size; /* TX fifo depth number */
	u32 baudr_div;
};

/*
 * sheipa spi config hook for mtd/m25p80 device
 *
 * After mtd initialization and spi-nor scanning,
 * set proper SPI controller registers accordingly.
 *
 * 1. address length
 * 2. controller dummy cycle
 */
int sheipa_spi_config(struct spi_device *spi, struct spi_nor *nor)
{
	struct sheipa_spi *sdev = spi_master_get_devdata(spi->master);
	struct sheipa_spi_map *map = sdev->user_base;
	u32 cycle = 0;

	map->ssienr = 0;

	/* if using fast_read baud_rate */
	if (map->ctrlr0 & SHEIPA_SPI_CTRLR0_FAST_RD_MASK)
		cycle = map->fbaudr;
	else
		cycle = map->baudr;

	/* set dummy cycle, dont ask */
	switch (nor->read_proto) {
	case SNOR_PROTO_1_1_1:
		cycle = cycle * nor->read_dummy * 2;
		sdev->xfer_mode = 0x0;
		break;
	case SNOR_PROTO_1_1_2:
		cycle = cycle * nor->read_dummy * 2;
		sdev->xfer_mode = SHEIPA_SPI_DUAL_1_1_2_MODE;
		break;
	case SNOR_PROTO_1_1_4:
		cycle = cycle * nor->read_dummy * 2;
		sdev->xfer_mode = SHEIPA_SPI_QUAD_1_1_4_MODE;
		break;
	case SNOR_PROTO_1_2_2:
		cycle = cycle * nor->read_dummy * 2;
		sdev->xfer_mode = SHEIPA_SPI_DUAL_1_2_2_MODE;
		break;
	case SNOR_PROTO_1_4_4:
		cycle = cycle * nor->read_dummy * 2;
		sdev->xfer_mode = SHEIPA_SPI_QUAD_1_4_4_MODE;
		break;
	default:
		sdev->xfer_mode = 0x0;
		break;
	}

	map->auto_length =
		(map->auto_length & SHEIPA_SPI_AUTO_LEN_DUM_MASK) | cycle;
	/* set addr length */
	if (nor->addr_width == 4)
		map->addr_length &= SHEIPA_SPI_ADDR_LEN_MASK;
	else
		map->addr_length |= SHEIPA_SPI_ADDR_3_BYTE_MODE;

	return 0;
}

/*
 * check spi controller busy state
 */
static void sheipa_spi_wait_controller(struct sheipa_spi *sdev)
{
	struct sheipa_spi_map *map = sdev->user_base;
	unsigned long time;

	time = jiffies + msecs_to_jiffies(SHEIPA_SPI_TIMEOUT);
	do {
		if (map->sr & BIT(BFO_SPI_FLASH_SR_TXE)) {
			pr_err("sheipa-spi: transfer error !!\n");
			BUG();
		}
	} while ((map->sr & BIT(BFO_SPI_FLASH_SR_BUSY)) &&
		 time_before(jiffies, time));
}

static u8 sheipa_spi_get_flash_sr(struct sheipa_spi *sdev)
{
	struct sheipa_spi_map *map = sdev->user_base;

	map->ssienr = 0;
	map->ctrlr0 = ((map->ctrlr0 | SHEIPA_SPI_CTRLR0_RX) &
		       SHEIPA_SPI_CTRLR0_RX_MASK) |
		      sdev->xfer_mode;
	map->ctrlr1 = 1;
	map->fifo[0] = SPINOR_OP_RDSR;
	map->ssienr = 1;

	sheipa_spi_wait_controller(sdev);

	return map->fifo[0];
}

static void sheipa_spi_wait_flash(struct sheipa_spi *sdev)
{
	unsigned long time;

	time = jiffies + msecs_to_jiffies(SHEIPA_SPI_TIMEOUT);
	while ((sheipa_spi_get_flash_sr(sdev) & 0x1)) {
		if (!time_before(jiffies, time))
			BUG();
	}
}

static int sheipa_spi_tx_mode(struct sheipa_spi *sdev, struct spi_message *m)
{
	struct sheipa_spi_map *map = sdev->user_base;
	struct spi_transfer *t;
	u32 fifo_len;
	u32 sent_len;
	u32 len;
	u32 i;
	u32 xfer_len;
	bool last_xfer;
	const u8 *tx_buf;
	int timeout;

	map->ssienr = 0;
	/* set tx mode and single channel */
	map->ctrlr0 =
		(map->ctrlr0 & SHEIPA_SPI_CTRLR0_TX_MASK) | sdev->xfer_mode;
	/* set to enable data-split program/read */
	map->ctrlr2 = (map->ctrlr2 & SHEIPA_SPI_CTRLR2_SEQ_EN_MASK) |
		      SHEIPA_SPI_CTRLR2_SEQ_EN;
	fifo_len = sdev->fifo_size;
	xfer_len = 0;

	list_for_each_entry (t, &m->transfers, transfer_list) {
		tx_buf = t->tx_buf;
		sent_len = 0;
		m->actual_length += t->len;
		last_xfer = list_is_last(&t->transfer_list, &m->transfers);
		/* disable data-split if transfer length less than 1 */
		if (last_xfer && xfer_len < 1) {
			map->ssienr = 0;
			map->ctrlr2 =
				map->ctrlr2 & SHEIPA_SPI_CTRLR2_SEQ_EN_MASK;
		}
		xfer_len++;
		while (sent_len < t->len) {
			len = min(fifo_len, t->len - sent_len);
			for (i = 0; i < len; i++)
				map->fifo[0] = tx_buf[i + sent_len];
			sent_len += len;
			/* fifo entry available */
			fifo_len = sdev->fifo_size - map->txflr;
			if (!fifo_len) {
				map->imr |= SHEIPA_SPI_INTR_TXEIM;
				timeout = wait_for_completion_timeout(
					&sdev->xfer_done,
					msecs_to_jiffies(SHEIPA_SPI_TIMEOUT));
				if (!timeout)
					return -ETIMEDOUT;
			}
		}
		/* fire in the hole */
		map->ssienr = 1;
		fifo_len = sdev->fifo_size;
	}
	map->imr |= SHEIPA_SPI_INTR_TXEIM;
	timeout = wait_for_completion_timeout(
		&sdev->xfer_done, msecs_to_jiffies(SHEIPA_SPI_TIMEOUT));
	if (!timeout)
		return -ETIMEDOUT;
	/* Although fifo is empty and we will receive an interrupt,
	 * but it does not means that the spic finished the job and we
	 * still confirm the SR register to ensure that it's not in busy state
	 */
	sheipa_spi_wait_controller(sdev);
	sheipa_spi_wait_flash(sdev);

	return 0;
}

static inline void sheipa_spi_addr2cmd(struct sheipa_spi_map *map, u32 addr,
				       u8 *cmd)
{
	if (!map->addr_length) { /* 4-byte address mode */
		cmd[1] = (addr & 0xff000000) >> 24;
		cmd[2] = (addr & 0x00ff0000) >> 16;
		cmd[3] = (addr & 0x0000ff00) >> 8;
		cmd[4] = addr & 0x000000ff;
	} else { /* 3-byte addr mode */
		cmd[1] = (addr & 0x00ff0000) >> 16;
		cmd[2] = (addr & 0x0000ff00) >> 8;
		cmd[3] = addr & 0x000000ff;
	}
}

static inline u32 sheipa_spi_cmd2addr(struct sheipa_spi_map *map, u8 *cmd)
{
	if (!map->addr_length)
		return cmd[1] << 24 | cmd[2] << 16 | cmd[3] << 8 | cmd[4];
	else
		return cmd[1] << 16 | cmd[2] << 8 | cmd[3];
}

static int sheipa_spi_send_cmd(struct sheipa_spi *sdev, struct spi_transfer *t,
			       u32 offset)
{
	struct sheipa_spi_map *map = sdev->user_base;
	int i;
	u8 *buf;
	u32 addr;

	buf = (u8 *)t->tx_buf;
	if (!buf)
		return -EINVAL;

	addr = sheipa_spi_cmd2addr(map, buf);
	addr += offset;
	sheipa_spi_addr2cmd(map, addr, buf);

	map->ssienr = 0;
	for (i = 0; i < t->len; i++)
		map->fifo[0] = buf[i];

	return 0;
}

static int sheipa_spi_rx_mode(struct sheipa_spi *sdev, struct spi_message *m)
{
	struct sheipa_spi_map *map = sdev->user_base;
	struct spi_transfer *t, *cmd;
	u32 fifo_len;
	u32 read_len;
	u8 *rx_buf;
	u32 addr_off;
	u32 len;
	int timeout;

	addr_off = 0;
	map->ssienr = 0;
	map->ctrlr0 = ((map->ctrlr0 | SHEIPA_SPI_CTRLR0_RX) &
		       SHEIPA_SPI_CTRLR0_RX_MASK) |
		      sdev->xfer_mode;
	cmd = list_first_entry(&m->transfers, struct spi_transfer,
			       transfer_list);
	sheipa_spi_send_cmd(sdev, cmd, addr_off);
	m->actual_length += cmd->len;
	t = list_next_entry(cmd, transfer_list);

	list_for_each_entry_from (t, &m->transfers, transfer_list) {
		m->actual_length += t->len;
		rx_buf = t->rx_buf;
		read_len = 0;
		fifo_len = min(sdev->fifo_size, t->len - read_len);
		map->ssienr = 0;
		map->ctrlr1 = fifo_len;
		map->rxftlr = fifo_len / 16;
		/* enable interrupt */
		map->imr |= SHEIPA_SPI_INTR_RXFIM;
		map->ssienr = 1;
		timeout = wait_for_completion_timeout(
			&sdev->xfer_done, msecs_to_jiffies(SHEIPA_SPI_TIMEOUT));

		if (!timeout && !map->rxflr)
			return -ETIMEDOUT;

		while (read_len < t->len) {
			for (len = 0; len < fifo_len; len++) {
				rx_buf[read_len++] = map->fifo[0];
				addr_off++;
			}
			if (read_len < t->len) {
				fifo_len =
					min(sdev->fifo_size, t->len - read_len);
				map->ssienr = 0;
				map->ctrlr1 = fifo_len;
				map->rxftlr = fifo_len / 16;
				/* re-send cmd */
				sheipa_spi_send_cmd(sdev, cmd, addr_off);
				addr_off = 0;
				/* enable interrupt */
				map->imr |= SHEIPA_SPI_INTR_RXFIM;
				map->ssienr = 1;
				timeout = wait_for_completion_timeout(
					&sdev->xfer_done,
					msecs_to_jiffies(SHEIPA_SPI_TIMEOUT));

				if (!timeout && !map->rxflr)
					return -ETIMEDOUT;
			}
		}
		addr_off = 0;
	}

	return 0;
}

static int sheipa_spi_transfer_one_message(struct spi_master *master,
					   struct spi_message *m)
{
	struct sheipa_spi *sdev = spi_master_get_devdata(master);
	struct spi_transfer *t;
	u32 rx_mode = 0;

	list_for_each_entry (t, &m->transfers, transfer_list) {
		if (t->rx_buf) {
			rx_mode = 1;
			break;
		}
	}

	if (rx_mode)
		sheipa_spi_rx_mode(sdev, m);
	else
		sheipa_spi_tx_mode(sdev, m);

	m->status = 0;
	spi_finalize_current_message(master);

	return 0;
}

static irqreturn_t sheipa_spi_interrupt(int irq, void *dev_id)
{
	struct sheipa_spi *sdev = dev_id;
	struct sheipa_spi_map *map = (struct sheipa_spi_map *)sdev->user_base;

	/* disable interrupt */
	if (map->isr & SHEIPA_SPI_INTR_TXEIM)
		map->imr &= SHEIPA_SPI_INTR_TXEIM_MASK;
	else if (map->isr & SHEIPA_SPI_INTR_RXFIM)
		map->imr &= SHEIPA_SPI_INTR_RXFIM_MASK;

	map->icr = 1;
	complete(&sdev->xfer_done);

	return IRQ_HANDLED;
}

/*
 * A piece of default spi config info unless the platform
 * supplies it.
 */
static const struct sheipa_spi_param sheipa_param_def = {
	.num_slaves = 0,
	.fifo_size = SHEIPA_SPI_FIFO_SIZE,
	.baudr_div = 1,
};

static int sheipa_spi_setup(struct spi_device *spi)
{
	struct sheipa_spi *sdev = spi_master_get_devdata(spi->master);
	struct sheipa_spi_map *map;
	struct sheipa_spi_param *param;
	struct device_node *np = spi->dev.of_node;

	param = spi->controller_data;
	if (param == NULL) {
		param = &sheipa_param_def;
		if (np) {
			of_property_read_u32(np, "spi-num-slaves",
					     &param->num_slaves);
			of_property_read_u32(np, "spi-fifo-size",
					     &param->fifo_size);
			of_property_read_u32(np, "spi-baudr-div",
					     &param->baudr_div);
		}
	}

	sdev->fifo_size = param->fifo_size;
	/* default to single channel */
	sdev->xfer_mode = 0x0;

	if (param->baudr_div & 0xffff0000)
		return -EINVAL;

	/* user mode init setting */
	map = (struct sheipa_spi_map *)sdev->user_base;
	map->ssienr = 0;
	map->baudr = param->baudr_div;
	map->fbaudr = param->baudr_div;
	map->ser = 1 << param->num_slaves;
	map->addr_length = 3;
	map->imr &= SHEIPA_SPI_INTR_TXEIM_MASK;
	map->auto_length = map->auto_length & SHEIPA_SPI_AUTO_LEN_DUM_MASK;
	/* sent wrdi */
	map->ctrlr0 =
		(map->ctrlr0 & SHEIPA_SPI_CTRLR0_TX_MASK) | sdev->xfer_mode;
	map->fifo[0] = SPINOR_OP_WRDI;
	map->ssienr = 1;
	sheipa_spi_wait_controller(sdev);
	sheipa_spi_wait_flash(sdev);

	return 0;
}

static int sheipa_spi_probe(struct platform_device *pdev)
{
	struct spi_master *master;
	struct sheipa_spi *sdev;
	struct resource *umem;
	struct resource *amem;
	int status, irq;

	master = spi_alloc_master(&pdev->dev, sizeof(*sdev));
	if (!master) {
		dev_dbg(&pdev->dev, "master allocation failed\n");
		return -ENOMEM;
	}

	sdev = spi_master_get_devdata(master);
	sdev->master = master;

	master->bus_num = 0;
	if (pdev->dev.of_node) {
		u32 bus_num;

		if (!of_property_read_u32(pdev->dev.of_node, "bus_num",
					  &bus_num))
			master->bus_num = bus_num;
	}

	master->mode_bits = SPI_CPHA | SPI_CPOL | SPI_RX_DUAL | SPI_RX_QUAD;
	master->num_chipselect = 1;
	master->setup = sheipa_spi_setup;
	master->transfer_one_message = sheipa_spi_transfer_one_message;
	master->dev.of_node = pdev->dev.of_node;

	init_completion(&sdev->xfer_done);
	spi_master_set_devdata(master, sdev);
	platform_set_drvdata(pdev, sdev);

	/* for spi user mode */
	umem = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	if (!umem) {
		status = -ENODEV;
		goto err_put_master;
	}

	if (!devm_request_mem_region(&pdev->dev, umem->start,
				     resource_size(umem), pdev->name)) {
		status = -EBUSY;
		goto err_put_master;
	}

	sdev->user_base = devm_ioremap_nocache(&pdev->dev, umem->start,
					       resource_size(umem));

	if (!sdev->user_base) {
		status = -ENXIO;
		goto err_put_master;
	}
	/* for spi auto mode */
	amem = platform_get_resource(pdev, IORESOURCE_MEM, 1);
	if (!amem) {
		status = -ENODEV;
		goto err_put_master;
	}

	if (!devm_request_mem_region(&pdev->dev, amem->start,
				     resource_size(amem), pdev->name)) {
		status = -EBUSY;
		goto err_put_master;
	}

	sdev->auto_base = devm_ioremap_nocache(&pdev->dev, amem->start,
					       resource_size(amem));

	if (!sdev->auto_base) {
		status = -ENXIO;
		goto err_put_master;
	}

	irq = platform_get_irq(pdev, 0);
	if (irq < 0) {
		dev_err(&pdev->dev, "no IRQ resource found\n");
		status = -EINVAL;
		goto err_put_master;
	}

	status =
		devm_request_irq(&pdev->dev, irq, sheipa_spi_interrupt,
				 IRQF_TRIGGER_NONE, dev_name(&pdev->dev), sdev);
	if (status) {
		dev_err(&pdev->dev, "failed to register irq (%d)\n", status);
		goto err_put_master;
	}

	status = devm_spi_register_master(&pdev->dev, master);
	if (status) {
		dev_err(&pdev->dev, "failed to register master (%d)\n", status);
		goto err_put_master;
	}

	return status;

err_put_master:
	spi_master_put(master);

	return status;
}

static int sheipa_spi_remove(struct platform_device *pdev)
{
	struct sheipa_spi *spi;
	struct resource *mem;

	spi = platform_get_drvdata(pdev);
	platform_set_drvdata(pdev, NULL);

	iounmap(spi->user_base);
	spi_unregister_master(spi->master);

	mem = platform_get_resource(pdev, IORESOURCE_MEM, 0);
	release_mem_region(mem->start, resource_size(mem));

	mem = platform_get_resource(pdev, IORESOURCE_MEM, 1);
	release_mem_region(mem->start, resource_size(mem));

	return 0;
}

static const struct of_device_id sheipa_spi_of_match_table[] = {
	{
		.compatible = "rtk,sheipa-spi",
	},
};
MODULE_DEVICE_TABLE(of, sheipa_spi_of_match_table);

static struct platform_driver sheipa_spi_driver = {
	.driver = {
			.name = DRIVER_NAME,
			.of_match_table =
				of_match_ptr(sheipa_spi_of_match_table),
		},
	.probe = sheipa_spi_probe,
	.remove = sheipa_spi_remove,
};

#ifdef CONFIG_OF
module_platform_driver(sheipa_spi_driver);
#else
static int __init sheipa_spi_init(void)
{
	printk(KERN_INFO "INFO: sheipa spi driver register\n");
	return platform_driver_probe(&sheipa_spi_driver, sheipa_spi_probe);
}
subsys_initcall(sheipa_spi_init);

static void __exit sheipa_spi_exit(void)
{
	platform_driver_unregister(&sheipa_spi_driver);
}
module_exit(sheipa_spi_exit);
#endif

MODULE_DESCRIPTION("Sheipa SPI controller driver");
MODULE_AUTHOR("PSP Software Group");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
