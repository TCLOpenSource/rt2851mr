/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2012 by Chuck Chen <ycchen@realtek.com>
 *
 * IO mappings for rtd299o
 */

#include <asm/memory.h>

/*
 * ----------------------------------------------------------------------------
 * RTD299o specific IO mapping
 * Please DIC spec for detail
 * ----------------------------------------------------------------------------
 */

#define RBUS_BASE_PHYS          0x18000000 // use supersection mapping
#define RBUS_BASE_VIRT_OLD      0xB8000000
#define RBUS_BASE_SIZE          0x00200000
#ifdef CONFIG_ARM64
#ifdef CONFIG_EARLY_PRINTK
#define RBUS_BASE_VIRT          EARLYCON_IOBASE
#else
#error You should define CONFIG_EARLY_PRINTK
#endif
#else
#define RBUS_BASE_VIRT          0xFE000000
#define GIC_BASE_PHYS          0x100000000ULL
#define GIC_BASE_SIZE          0x1000000
#define GIC_BASE_VIRT          0xFD000000 
#endif
#define RBUS_BASE_SIZE          0x00200000

//#define RPC_BASE_PHYS           0x01600000
#define RPC_BASE_PHYS           0x1b180000
//#define RPC_BASE_VIRT           __va(RPC_BASE_PHYS)
#define RPC_BASE_VIRT		((RPC_BASE_PHYS) - PHYS_OFFSET + PAGE_OFFSET)
#define RPC_BASE_SIZE           0x00080000

#define FLASH_BASE_PHYS         0x18200000
#define FLASH_BASE_SIZE         0x02000000
