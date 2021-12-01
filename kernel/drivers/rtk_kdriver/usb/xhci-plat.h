/*
 * xhci-plat.h - xHCI host controller driver platform Bus Glue.
 *
 * Copyright (C) 2015 Renesas Electronics Corporation
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 */

/*
 * Copy from drivers/usb/host/xhci-plat.h
 */

#ifndef _XHCI_PLAT_H
#define _XHCI_PLAT_H

/*------------------------------ Realtek defined -------------------------------------------*/
/*---------------------------------------------------------
 * Refer to DesignWare Cores SuperSpeed USB 3.0 xHCI Host Contoller Databook,Version 2.70a
 * 6.1.3 Global Registers Map
 *-------------------------------------------------------- */
struct gevnt {
	__le64 addr;
	__le32 size;
	__le32 count;
};

#define HOST_GLOBAL_REGS_OFFSET         (0x8100)
struct xhci_global_regs {
	__le32 gsbuscfg0; /* offset 0xc100 */
	__le32 gsbuscfg1;
	__le32 gtxthrcgs;
	__le32 grxthrcgs;

	__le32 gctl; //0xC110
	__le32 gpmsts;
	__le32 gsts;
	__le32 guctl1;

	__le32 gsnpsid; //0xC120
	__le32 ggpio;
	__le32 guid;
	__le32 guctl;

	__le64 gbuserraddr; //0xC130
	__le64 gprtbimap;

	__le32 ghw_params0; //0xC140
	__le32 ghw_params1;
	__le32 ghw_params2;
	__le32 ghw_params3;

	__le32 ghw_params4; //0xC150
	__le32 ghw_params5;
	__le32 ghw_params6;
	__le32 ghw_params7;

	__le32 gdbgfifospace; //0xC160
	__le32 gdbgltssm;
	__le32 gdbglnmcc;
	__le32 gdbgbmu;

	__le32 gdbglspmux; //0xC170
	__le32 gdbglsp;
	__le32 gdbgepinfo0;
	__le32 gdbgepinfo1;

	__le64 gprtbimap_hs; //0xC180
	__le64 gprtbimap_fs;

	__le32 rsvd1; //0xC190
	__le32 gerrinjctl_1; //0xC194
	__le32 gerrinjctl_2;

	__le32 rsvd2[9];

	__le32 gusb3rmmictl[16]; //0xc1c0

	__le32 gusb2phycfg[16]; //0xc200

	__le32 gusb2i2cctl[16]; //0xc240

	__le32 gusb2phyacc[16]; //0xc280
#define VSTS_DONE    (1 << 24)
#define IS_VSTS_DONE(p)           (p & VSTS_DONE)

	__le32 gusb3pipectl[16]; //0xc2c0
	__le32 gtxfifosiz[32]; //0xc300
	__le32 grxfifosiz[32]; //0xc380
	struct gevnt genvt_regs[32]; //0xc400
	__le32 ghw_params8; //0xc600
	__le32 rsvd3[5];
	__le32 gtxfifoprihst; //0xc618
	__le32 grxfifoprihst; //0xc61c
	__le32 gfifopridbc; //0xc620
	__le32 gdmahlratio; //0xc624
	__le32 rsvd4[2];

	__le32 gfladj; //0xc630
};

#define NO_RESTORE_U3_PHY           (0x1 << 0)
#define NO_RESTORE_U2_PHY           (0x1 << 1)
#define NO_U3_PORT_AUTO_RECOVER     (0x1 << 2)
#define NO_U3_SUPER_SPEED_PORT      (0x1 << 3)
#define NO_HUB_POLLING_CHECK        (0x1 << 4)
extern unsigned int xhci_control_flag;

/* hub polling check */
#define USB_HUB_CHECK_TIME           500
extern struct timer_list xhci_hub_check_timer;

/* CRC.
 * Merlin3_DesignSpec-USB3
 * REGISTER:: USB_CRC_CNT_1
 * */
#define CRC_SRC_NONE                0x0
#define CRC_SRC_U3_PORT             0x1
#define CRC_SRC_U2_PORT0            0x4
#define CRC_SRC_U2_PORT1            0x5
#define CRC_SRC_U2_PORT2            0x6


/* Functions */
void mdio_write(unsigned char phy_addr, unsigned char reg_addr, unsigned short val);
unsigned short mdio_read(unsigned char phy_addr, unsigned char reg_addr);
int set_xhci_usb2_phy_reg(struct xhci_hcd *xhci, unsigned char phy, unsigned char page, unsigned char addr,unsigned char val);
int get_xhci_usb2_phy_reg(struct xhci_hcd *xhci, unsigned char phy, unsigned char page, unsigned char addr);
int _xhci_get_port_status_str(struct xhci_hcd *xhci, char* ptr, size_t count);
const char* xhci_crc_error_src(unsigned char id);


#define xhci_plat_dbg(xhci, fmt, args...)          pr_debug("%s: " fmt, dev_name(xhci_to_hcd(xhci)->self.controller), ## args)
#define xhci_plat_info(xhci, fmt, args...)         dev_info(xhci_to_hcd(xhci)->self.controller, fmt, ## args)
#define xhci_plat_warn(xhci, fmt, args...)         dev_warn(xhci_to_hcd(xhci)->self.controller, fmt, ## args)
#define xhci_plat_err(xhci, fmt, args...)          dev_err(xhci_to_hcd(xhci)->self.controller, fmt, ## args)
/*------------------------------ Realtek defined -------------------------------------------*/


#include <rtk_kdriver/usb/xhci.h>  /* for hcd_to_xhci() */

struct xhci_plat_priv {
	const char *firmware_name;
	void (*plat_start)(struct usb_hcd *);
	int (*init_quirk)(struct usb_hcd *);
	int (*resume_quirk)(struct usb_hcd *);
	/********* RTK defined *********/
	struct xhci_global_regs __iomem *global_regs;
	struct timer_list polling_check_timer;
	bool is_timer_on;
	bool polling_check_running;
	bool polling_check_suspend;
	bool disable_polling_check;
	unsigned int u2_port_reset_hang;
	unsigned int u2_port_reset_hang_count;
	unsigned int u3_port_reset_hang;
	unsigned int u3_port_reset_hang_count;
	unsigned int port_check_count;
	unsigned int black_device_count;
	unsigned int u3_port_count;
	bool u3_delayed_vbus_on;
	unsigned int debug_ctrl_flag;
	struct delayed_work power_saving_dwork;
	/********* RTK defined *********/
};


#define hcd_to_xhci_priv(h)  ((struct xhci_plat_priv *)hcd_to_xhci(h)->priv)
#define xhci_to_xhci_priv(h) ((struct xhci_plat_priv *)xhci->priv)
#endif	/* _XHCI_PLAT_H */
