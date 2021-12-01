/******************************************************************************
 *
 * This file is provided under a dual license.  When you use or
 * distribute this software, you may choose to be licensed under
 * version 2 of the GNU General Public License ("GPLv2 License")
 * or BSD License.
 *
 * GPLv2 License
 *
 * Copyright(C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 *
 * BSD LICENSE
 *
 * Copyright(C) 2016 MediaTek Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *****************************************************************************/
/*! \file   mt7933.c
*    \brief  Internal driver stack will export
*    the required procedures here for GLUE Layer.
*
*    This file contains all routines which are exported
     from MediaTek 802.11 Wireless LAN driver stack to GLUE Layer.
*/

#ifdef MT7933

/*******************************************************************************
*                         C O M P I L E R   F L A G S
********************************************************************************
*/

/*******************************************************************************
*                    E X T E R N A L   R E F E R E N C E S
********************************************************************************
*/

#include "coda/mt7933/wf_wfdma_host_dma0.h"
#include "coda/mt7933/wf_wfdma_ext_wrap_csr.h"

#if (CFG_DOWNLOAD_DYN_MEMORY_MAP == 1)
#include "coda/mt7933/conn_infra_cfg.h"
#endif

#include "precomp.h"
#include "mt7933.h"
#include <linux/platform_device.h>
/*******************************************************************************
*                              C O N S T A N T S
********************************************************************************
*/

#define CONN_MCU_CONFG_BASE 0x88000000
#define CONN_MCU_CONFG_COM_REG0_ADDR (CONN_MCU_CONFG_BASE + 0x200)

#define PATCH_SEMAPHORE_COMM_REG 0
#define PATCH_SEMAPHORE_COMM_REG_PATCH_DONE 1 /* bit0 is for patch. */

#define SW_WORKAROUND_FOR_WFDMA_ISSUE_HWITS00009838 0 /* Buzzard Flag */
#define SW_WORKAROUND_FOR_WFDMA_ISSUE_HWITS00015048 0 /* Buzzard Flag */

#define RX_DATA_RING_BASE_IDX 0 /* mockingbird data ring is at RX RING 0 */
#define RX_EVT_RING_BASE_IDX 1 /* mockingbird data ring is at RX RING 0 */

#define MT7933_FWDL_TX_RING_IDX         3
#define MT7933_CMD_TX_RING_IDX          2 /* Direct to WM */
#define MT7933_DATA0_TXD_IDX 0 /* Band_0 TXD to WA, modified from 7915 */

/*******************************************************************************
*                                 M A C R O S
********************************************************************************
*/

/*******************************************************************************
*                   F U N C T I O N   D E C L A R A T I O N S
********************************************************************************
*/

/*******************************************************************************
*                              F U N C T I O N S
********************************************************************************
*/

/*******************************************************************************
*                            P U B L I C   D A T A
********************************************************************************
*/

struct ECO_INFO mt7933_eco_table[] = {
	/* HW version,  ROM version,    Factory version */
	{0x00, 0x00, 0xA, 0x1},	/* E1 */
	{0x00, 0x00, 0x0, 0x0}	/* End of table */
};

#if defined(_HIF_PCIE) || defined(_HIF_AXI)
struct PCIE_CHIP_CR_MAPPING mt7933_bus2chip_cr_mapping[] = {
	/* chip addr, bus addr, range */
	{0x54000000, 0x02000, 0x1000},  /* WFDMA PCIE0 MCU DMA0 */
	{0x55000000, 0x03000, 0x1000},  /* WFDMA PCIE0 MCU DMA1 */
	{0x56000000, 0x04000, 0x1000},  /* WFDMA reserved */
	{0x57000000, 0x05000, 0x1000},  /* WFDMA MCU wrap CR */
	{0x58000000, 0x06000, 0x1000},  /* WFDMA PCIE1 MCU DMA0 (MEM_DMA) */
	{0x59000000, 0x07000, 0x1000},  /* WFDMA PCIE1 MCU DMA1 */
	{0x820c0000, 0x08000, 0x4000},  /* WF_UMAC_TOP (PLE) */
	{0x820c8000, 0x0c000, 0x2000},  /* WF_UMAC_TOP (PSE) */
	{0x820cc000, 0x0e000, 0x2000},  /* WF_UMAC_TOP (PP) */
	{0x820e0000, 0x20000, 0x0400},  /* WF_LMAC_TOP BN0 (WF_CFG) */
	{0x820e1000, 0x20400, 0x0200},  /* WF_LMAC_TOP BN0 (WF_TRB) */
	{0x820e2000, 0x20800, 0x0400},  /* WF_LMAC_TOP BN0 (WF_AGG) */
	{0x820e3000, 0x20c00, 0x0400},  /* WF_LMAC_TOP BN0 (WF_ARB) */
	{0x820e4000, 0x21000, 0x0400},  /* WF_LMAC_TOP BN0 (WF_TMAC) */
	{0x820e5000, 0x21400, 0x0800},  /* WF_LMAC_TOP BN0 (WF_RMAC) */
	{0x820ce000, 0x21c00, 0x0200},  /* WF_LMAC_TOP (WF_SEC) */
	{0x820e7000, 0x21e00, 0x0200},  /* WF_LMAC_TOP BN0 (WF_DMA) */
	{0x820cf000, 0x22000, 0x1000},  /* WF_LMAC_TOP (WF_PF) */
	{0x820e9000, 0x23400, 0x0200},  /* WF_LMAC_TOP BN0 (WF_WTBLOFF) */
	{0x820ea000, 0x24000, 0x0200},  /* WF_LMAC_TOP BN0 (WF_ETBF) */
	{0x820eb000, 0x24200, 0x0400},  /* WF_LMAC_TOP BN0 (WF_LPON) */
	{0x820ec000, 0x24600, 0x0200},  /* WF_LMAC_TOP BN0 (WF_INT) */
	{0x820ed000, 0x24800, 0x0800},  /* WF_LMAC_TOP BN0 (WF_MIB) */
	{0x820ca000, 0x26000, 0x2000},  /* WF_LMAC_TOP BN0 (WF_MUCOP) */
	{0x820d0000, 0x30000, 0x10000}, /* WF_LMAC_TOP (WF_WTBLON) */
	{0x40000000, 0x70000, 0x10000}, /* WF_UMAC_SYSRAM */
	{0x00400000, 0x80000, 0x10000}, /* WF_MCU_SYSRAM */
	{0x00410000, 0x90000, 0x10000}, /* WF_MCU_SYSRAM (configure register) */
	{0x820b0000, 0xae000, 0x1000},  /* [APB2] WFSYS_ON */
	{0x80020000, 0xb0000, 0x10000}, /* WF_TOP_MISC_OFF */
	{0x81020000, 0xc0000, 0x10000}, /* WF_TOP_MISC_ON */
	{0x7c020000, 0xd0000, 0x10000}, /* CONN_INFRA, wfdma */
	{0x7c060000, 0xe0000, 0x10000}, /* CONN_INFRA, conn_host_csr_top */
	{0x7c000000, 0xf0000, 0x10000}, /* CONN_INFRA */
};

static void mt7933HalPrintHifDbgInfo(
	struct ADAPTER *prAdapter)
{

}
void mt7933_icapRiseVcoreClockRate(void)
{
	DBGLOG(HAL, INFO, "%s need to implement!\n", __func__);
}

void mt7933_icapDownVcoreClockRate(void)
{
	DBGLOG(HAL, INFO, "%s need to implement!\n", __func__);
}

static void mt7933EnableInterrupt(
	struct ADAPTER *prAdapter)
{
	struct mt66xx_chip_info *prChipInfo;
	union WPDMA_INT_MASK IntMask;
	uint32_t u4HostWpdamBase = 0;

	prChipInfo = prAdapter->chip_info;

	if (prChipInfo->is_support_wfdma1)
		u4HostWpdamBase = CONNAC2X_HOST_WPDMA_1_BASE;
	else
		u4HostWpdamBase = CONNAC2X_HOST_WPDMA_0_BASE;

	prAdapter->fgIsIntEnable = TRUE;

	HAL_MCR_RD(prAdapter,
		WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR, &IntMask.word);
	IntMask.word = 0;
	IntMask.field_conn2x_single.wfdma0_rx_done_0 = 1;
	IntMask.field_conn2x_single.wfdma0_rx_done_1 = 1;
	IntMask.field_conn2x_single.wfdma0_tx_done_0 = 1;
	IntMask.field_conn2x_single.wfdma0_tx_done_2 = 1;
	IntMask.field_conn2x_single.wfdma0_tx_done_3 = 1;
	IntMask.field_conn2x_single.wfdma0_mcu2host_sw_int_en = 1;

	IntMask.field_conn2x_single.wfdma0_rx_coherent = 0;
	IntMask.field_conn2x_single.wfdma0_tx_coherent = 0;
	HAL_MCR_WR(prAdapter,
		WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR, IntMask.word);

	if (prChipInfo->is_support_asic_lp)
		HAL_MCR_WR_FIELD(prAdapter,
				 CONNAC2X_WPDMA_MCU2HOST_SW_INT_MASK
				 (u4HostWpdamBase),
				 BITS(0, 15),
				 0,
				 BITS(0, 15));
} /* end of nicEnableInterrupt() */

static void mt7933DisableInterrupt(
	struct ADAPTER *prAdapter)
{
	struct GLUE_INFO *prGlueInfo = NULL;
	struct mt66xx_chip_info *prChipInfo;
	union WPDMA_INT_MASK IntMask;
	uint32_t u4HostWpdamBase = 0;

	ASSERT(prAdapter);

	prGlueInfo = prAdapter->prGlueInfo;
	prChipInfo = prAdapter->chip_info;

	if (prChipInfo->is_support_wfdma1)
		u4HostWpdamBase = CONNAC2X_HOST_WPDMA_1_BASE;
	else
		u4HostWpdamBase = CONNAC2X_HOST_WPDMA_0_BASE;

	IntMask.word = 0;

	HAL_MCR_WR(prAdapter,
		WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR, IntMask.word);
	HAL_MCR_RD(prAdapter,
		WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR, &IntMask.word);

	if (prChipInfo->is_support_asic_lp)
		HAL_MCR_WR_FIELD(prAdapter,
				 CONNAC2X_WPDMA_MCU2HOST_SW_INT_MASK
				 (u4HostWpdamBase),
				 0,
				 0,
				 BITS(0, 15));

	prAdapter->fgIsIntEnable = FALSE;
}

/* as long as the hw addr for each ring is fixed
 * supposed the setting should be fine for
 * ring# & address pair
 */
static uint8_t mt7933SetRxRingHwAddr(
	struct RTMP_RX_RING *prRxRing,
	struct BUS_INFO *prBusInfo,
	uint32_t u4SwRingIdx)
{
	uint32_t offset = 0;

	/*
	 * defined in hif_pdma.h enumeration
	 * RX_RING_DATA_IDX_0   (RX_Ring0) - Band0 Rx Data
	 * RX_RING_EVT_IDX_1    (RX_Ring0) - Rx Event
	*/
	switch (u4SwRingIdx) {
	case RX_RING_DATA_IDX_0:
		/*
		 * in buzzard, RX Ring 2 is data ring, so need offset
		 * in mockingbird, Rx Ring 0 is data ring
		 */
		/* offset = RX_DATA_RING_BASE_IDX * MT_RINGREG_DIFF; */
		break;
	case RX_RING_EVT_IDX_1:
		offset = RX_EVT_RING_BASE_IDX * MT_RINGREG_DIFF;
		break;
	default:
		/*
		 * Can mockingbird just skip this and make all other stuff as
		 * RX ring 1, because all of the rest operation should
		 * not be data
		 */
		DBGLOG(HAL, INFO, "%s config ring [%d] failed\n",
			__func__, u4SwRingIdx);
		return FALSE;
	}

	prRxRing->hw_desc_base = prBusInfo->host_rx_ring_base + offset;
	prRxRing->hw_cidx_addr = prBusInfo->host_rx_ring_cidx_addr + offset;
	prRxRing->hw_didx_addr = prBusInfo->host_rx_ring_didx_addr + offset;
	prRxRing->hw_cnt_addr = prBusInfo->host_rx_ring_cnt_addr + offset;

	return TRUE;
}

static void wlanBuzzardInitPcieInt(
	struct GLUE_INFO *prGlueInfo)
{

	DBGLOG(HAL, ERROR, "%s Buzzard change do nothing\n", __func__);
#if 0
       /* PCIE interrupt DMA end enable  */
	HAL_MCR_WR(prGlueInfo->prAdapter,
		0x10188,
		0x000000FF);
#endif
}

/* change from Buzzard
 * from caller halWpdmaAllocRing there are data0 & EVT ring
 * just alloc different ring allocation here
 */
#if 0
static bool mt7933LiteWfdmaAllocRxRing(
	struct GLUE_INFO *prGlueInfo,
	bool fgAllocMem)
{
#if 0
	/* Band1 Data Rx path */
	if (!halWpdmaAllocRxRing(prGlueInfo,
			WFDMA0_RX_RING_IDX_2, RX_RING0_SIZE,
			RXD_SIZE, CFG_RX_MAX_PKT_SIZE, fgAllocMem)) {
		DBGLOG(HAL, ERROR, "AllocRxRing[0] fail\n");
		return false;
	}
	/* Band0 Tx Free Done Event */
	if (!halWpdmaAllocRxRing(prGlueInfo,
			WFDMA0_RX_RING_IDX_3, RX_RING1_SIZE,
			RXD_SIZE, RX_BUFFER_AGGRESIZE, fgAllocMem)) {
		DBGLOG(HAL, ERROR, "AllocRxRing[1] fail\n");
		return false;
	}
	/* Band1 Tx Free Done Event */
	if (!halWpdmaAllocRxRing(prGlueInfo,
			WFDMA1_RX_RING_IDX_0, RX_RING1_SIZE,
			RXD_SIZE, RX_BUFFER_AGGRESIZE, fgAllocMem)) {
		DBGLOG(HAL, ERROR, "AllocRxRing[1] fail\n");
		return false;
	}
#endif
	return true;
}
#endif

static void mt7933Connac2xProcessTxInterrupt(
	struct ADAPTER *prAdapter)
{
	struct GL_HIF_INFO *prHifInfo = &prAdapter->prGlueInfo->rHifInfo;
	union WPDMA_INT_STA_STRUCT rIntrStatus;

	/*
	 * enum ENUM_TX_RING_IDX {
	 * TX_RING_DATA0_IDX_0 = 0,
	 * TX_RING_DATA1_IDX_1,
	 * TX_RING_CMD_IDX_2,
	 * TX_RING_FWDL_IDX_3,
	 * TX_RING_WA_CMD_IDX_4,
	 */
	rIntrStatus = (union WPDMA_INT_STA_STRUCT)prHifInfo->u4IntStatus;
	/*
	 * after FWDL tx_done_3 become TXD offloading
	 */
	if (rIntrStatus.field_conn2x_single.wfdma0_tx_done_3)
		halWpdmaProcessCmdDmaDone(
			prAdapter->prGlueInfo, TX_RING_FWDL_IDX_3);

	if (rIntrStatus.field_conn2x_single.wfdma0_tx_done_2)
		halWpdmaProcessCmdDmaDone(
			prAdapter->prGlueInfo, TX_RING_CMD_IDX_2);

	if (rIntrStatus.field_conn2x_single.wfdma0_tx_done_0) {
		halWpdmaProcessDataDmaDone(
			prAdapter->prGlueInfo, TX_RING_DATA0_IDX_0);
		kalSetTxEvent2Hif(prAdapter->prGlueInfo);
	}
}

static void mt7933Connac2xProcessRxInterrupt(
	struct ADAPTER *prAdapter)
{
	struct GL_HIF_INFO *prHifInfo = &prAdapter->prGlueInfo->rHifInfo;
	union WPDMA_INT_STA_STRUCT rIntrStatus;

	/*
	 * enum ENUM_RX_RING_IDX {
	 * RX_RING_DATA_IDX_0 = 0,  Rx Data
	 * RX_RING_EVT_IDX_1,
	 * WFDMA0_RX_RING_IDX_2, Band0 TxFreeDoneEvent
	 * WFDMA0_RX_RING_IDX_3,  Band1 TxFreeDoneEvent
	 * WFDMA1_RX_RING_IDX_0,  WM Event
	 */
	/* may have problem, buzzard use kalDevReadData
	 * for TxFreeDoneEvent, and kalDevPortRead for Event Packet.
	 * BUT in mockingbird, its the same Ring.
	 * may have problem here?
	 */
	rIntrStatus = (union WPDMA_INT_STA_STRUCT)prHifInfo->u4IntStatus;
	if (rIntrStatus.field_conn2x_single.wfdma0_rx_done_0)
		halRxReceiveRFBs(prAdapter, RX_RING_DATA_IDX_0, TRUE);

	if (rIntrStatus.field_conn2x_single.wfdma0_rx_done_1)
		halRxReceiveRFBs(prAdapter, RX_RING_EVT_IDX_1, FALSE);

}

static void mt7933ReadIntStatus(
	struct ADAPTER *prAdapter,
	uint32_t *pu4IntStatus)
{
	uint32_t u4RegValue;
	struct GL_HIF_INFO *prHifInfo = &prAdapter->prGlueInfo->rHifInfo;
	struct BUS_INFO *prBusInfo = prAdapter->chip_info->bus_info;

	*pu4IntStatus = 0;

	HAL_MCR_RD(prAdapter,
		WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR, &u4RegValue);

	if (HAL_IS_CONNAC2X_EXT_RX_DONE_INTR(u4RegValue,
				       prBusInfo->host_int_rxdone_bits))
	*pu4IntStatus |= WHISR_RX0_DONE_INT;

	if (HAL_IS_CONNAC2X_EXT_TX_DONE_INTR(u4RegValue,
				       prBusInfo->host_int_txdone_bits))
	*pu4IntStatus |= WHISR_TX_DONE_INT;

	if (u4RegValue & CONNAC_MCU_SW_INT)
	*pu4IntStatus |= WHISR_D2H_SW_INT;

	prHifInfo->u4IntStatus = u4RegValue;

	/* clear interrupt */
	HAL_MCR_WR(prAdapter,
		WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR, u4RegValue);

	/* Buzzard HWITS */
#if (SW_WORKAROUND_FOR_WFDMA_ISSUE_HWITS00015048 == 1)
	if (u4RegValue & CONNAC2X_WFDMA_RX_DONE_INT5)
	HAL_MCR_WR(prAdapter,
		WF_WFDMA_HOST_DMA0_HOST_INT_STA_EXT_ADDR,
		(1 <<
		WF_WFDMA_HOST_DMA0_HOST_INT_STA_EXT_rx_done_int_sts_5_SHFT));
#endif
}

#endif /*_HIF_PCIE || _HIF_AXI */

#if 0 /* TODO */
void mt7961DumpSerDummyCR(
	struct ADAPTER *prAdapter)
{
	uint32_t u4MacVal;

	DBGLOG(HAL, INFO, "%s\n", __func__);

	DBGLOG(HAL, INFO, "=====Dump Start====\n");

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_SER_STATUS_ADDR, &u4MacVal);
	DBGLOG(HAL, INFO, "SER STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_SER_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_PLE_STATUS_ADDR, &u4MacVal);
	DBGLOG(HAL, INFO, "PLE STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_PLE_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_PLE1_STATUS_ADDR, &u4MacVal);
	DBGLOG(HAL, INFO, "PLE1 STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_PLE1_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_PLE_AMSDU_STATUS_ADDR, &u4MacVal);
	DBGLOG(HAL, INFO, "PLE AMSDU STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_PLE_AMSDU_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_PSE_STATUS_ADDR, &u4MacVal);
	DBGLOG(HAL, INFO, "PSE STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_PSE_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_PSE1_STATUS_ADDR, &u4MacVal);
	DBGLOG(HAL, INFO, "PSE1 STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_PSE1_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_LAMC_WISR6_BN0_STATUS_ADDR,
			&u4MacVal);
	DBGLOG(HAL, INFO, "LMAC WISR6 BN0 STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_LAMC_WISR6_BN0_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_LAMC_WISR6_BN1_STATUS_ADDR,
			&u4MacVal);
	DBGLOG(HAL, INFO, "LMAC WISR6 BN1 STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_LAMC_WISR6_BN1_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_LAMC_WISR7_BN0_STATUS_ADDR,
			&u4MacVal);
	DBGLOG(HAL, INFO, "LMAC WISR7 BN0 STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_LAMC_WISR7_BN0_STATUS_ADDR, u4MacVal);

	HAL_MCR_RD(prAdapter, WF_SW_DEF_CR_LAMC_WISR7_BN1_STATUS_ADDR,
			&u4MacVal);
	DBGLOG(HAL, INFO, "LMAC WISR7 BN1 STATUS[0x%08x]: 0x%08x\n",
		WF_SW_DEF_CR_LAMC_WISR7_BN1_STATUS_ADDR, u4MacVal);

	DBGLOG(HAL, INFO, "=====Dump End====\n");

}

uint32_t mt7961GetFlavorVer(
	struct ADAPTER *prAdapter)
{
	uint32_t u4Val;
	uint32_t flavor_ver;

	if (wlanAccessRegister(prAdapter, MT7961_A_DIE_VER_ADDR, &u4Val, 0, 0)
	    != WLAN_STATUS_SUCCESS) {
		DBGLOG(INIT, ERROR, "get Bounding Info failed. set as 0x1\n");
		flavor_ver = 0x1;
	} else {
		DBGLOG(INIT, TRACE, "get Bounding Info = 0x%x\n", u4Val);

		if ((u4Val & MT7961_A_DIE_VER_BIT) == MT7961_A_DIE_7920)
			flavor_ver = 0x1a;
		else
			flavor_ver = 0x1;
	}

	return flavor_ver;
}
#endif

void mt7933ConstructFirmwarePrio(struct GLUE_INFO *prGlueInfo,
	uint8_t **apucNameTable, uint8_t **apucName,
	uint8_t *pucNameIdx, uint8_t ucMaxNameIdx)
{
	uint8_t sub_idx = 0;
	uint32_t chip_id = 0;
	struct ADAPTER *prAdapter = NULL;
	struct mt66xx_chip_info *prChipInfo = NULL;

	if (prGlueInfo == NULL) {
		DBGLOG(INIT, ERROR, "prGlueInfo is NULL.\n");
		return;
	}

	prAdapter = prGlueInfo->prAdapter;
	if (prAdapter == NULL) {
		DBGLOG(INIT, ERROR, "prAdapter is NULL.\n");
		return;
	}

	prChipInfo = prAdapter->chip_info;
	if (prChipInfo == NULL) {
		DBGLOG(INIT, ERROR, "prChipInfo is NULL.\n");
		return;
	}

	chip_id = prChipInfo->chip_id;

	for (sub_idx = 0; apucNameTable[sub_idx]; sub_idx++) {
		if (((*pucNameIdx) + 3) < ucMaxNameIdx) {
#if 0
			/* Type 1. WIFI_RAM_CODE_MTxxxx_x.bin */
			snprintf(*(apucName + (*pucNameIdx)),
				CFG_FW_NAME_MAX_LEN, "%s%x_%x.bin",
				apucNameTable[sub_idx], chip_id, flavor_ver);
			(*pucNameIdx) += 1;

			/* Type 2. WIFI_RAM_CODE_MTxxxx_x */
			snprintf(*(apucName + (*pucNameIdx)),
				CFG_FW_NAME_MAX_LEN, "%s%x_%x",
				apucNameTable[sub_idx], chip_id, flavor_ver);
			(*pucNameIdx) += 1;

#endif
			/* Type 3. WIFI_RAM_CODE_MTxxxx.bin */
			snprintf(*(apucName + (*pucNameIdx)),
					CFG_FW_NAME_MAX_LEN, "%s%x.bin",
					apucNameTable[sub_idx], chip_id);
			(*pucNameIdx) += 1;

			/* Type 4. WIFI_RAM_CODE_MTxxxx */
			snprintf(*(apucName + (*pucNameIdx)),
				CFG_FW_NAME_MAX_LEN, "%s%x",
					apucNameTable[sub_idx], chip_id);
			(*pucNameIdx) += 1;
		} else {
			/* the table is not large enough */
			DBGLOG(INIT, ERROR,
				"kalFirmwareImageMapping >> file name array is not enough.\n");
			ASSERT(0);
		}
	}
}

void mt7933ConstructPatchName(struct GLUE_INFO *prGlueInfo,
	uint8_t **apucName, uint8_t *pucNameIdx)
{
	struct ADAPTER *prAdapter = NULL;
	struct mt66xx_chip_info *prChipInfo = NULL;

	if (prGlueInfo == NULL) {
		DBGLOG(INIT, ERROR, "prGlueInfo is NULL.\n");
		return;
	}

	prAdapter = prGlueInfo->prAdapter;
	if (prAdapter == NULL) {
		DBGLOG(INIT, ERROR, "prAdapter is NULL.\n");
		return;
	}

	prChipInfo = prAdapter->chip_info;
	if (prChipInfo == NULL) {
		DBGLOG(INIT, ERROR, "prChipInfo is NULL.\n");
		return;
	}

	snprintf(apucName[(*pucNameIdx)],
		CFG_FW_NAME_MAX_LEN, "mt%x_patch_e%x_hdr.bin",
		prChipInfo->chip_id,
		wlanGetEcoVersion(prGlueInfo->prAdapter));
}

uint32_t mt7933WlanDownloadSection(IN struct ADAPTER *prAdapter,
			     IN uint32_t u4Addr, IN uint32_t u4Len,
			     IN uint32_t u4DataMode, IN uint8_t *pucStartPtr,
			     IN enum ENUM_IMG_DL_IDX_T eDlIdx)
{
	uint32_t u4ImgSecSize, u4Offset;
	uint8_t *pucSecBuf;
	uint32_t u4Val;

	if (wlanImageSectionConfig(prAdapter, u4Addr, u4Len,
				   u4DataMode, eDlIdx) != WLAN_STATUS_SUCCESS) {
		DBGLOG(INIT, ERROR,
		       "Firmware download configuration failed!\n");
		return WLAN_STATUS_FAILURE;
	}

	/*MT7933 temp patch, IP change */
	kalDevRegRead(prAdapter->prGlueInfo,
		WF_WFDMA_HOST_DMA0_PDA_CONFG_PDA_FWDL_EN_ADDR, &u4Val);
	u4Val |= BIT(31);
	kalDevRegWrite(prAdapter->prGlueInfo,
		WF_WFDMA_HOST_DMA0_PDA_CONFG_PDA_FWDL_EN_ADDR, u4Val);


	for (u4Offset = 0; u4Offset < u4Len;
	     u4Offset += CMD_PKT_SIZE_FOR_IMAGE) {
		if (u4Offset + CMD_PKT_SIZE_FOR_IMAGE < u4Len)
			u4ImgSecSize = CMD_PKT_SIZE_FOR_IMAGE;
		else
			u4ImgSecSize = u4Len - u4Offset;

		pucSecBuf = (uint8_t *) pucStartPtr + u4Offset;
		if (wlanImageSectionDownload(prAdapter, u4ImgSecSize,
					     pucSecBuf) !=
					     WLAN_STATUS_SUCCESS) {
			DBGLOG(INIT, ERROR,
				"Firmware scatter download failed!\n");
			return WLAN_STATUS_FAILURE;
		}
	}
	return WLAN_STATUS_SUCCESS;
}

uint32_t mt7933WlanDownloadSectionV2(IN struct ADAPTER *prAdapter,
		IN uint32_t u4DataMode,
		IN enum ENUM_IMG_DL_IDX_T eDlIdx,
		struct patch_dl_target *target)
{
	uint32_t u4ImgSecSize, u4Offset;
	uint8_t *pucSecBuf;
	uint32_t num_of_region, i;
	uint32_t u4Status = WLAN_STATUS_SUCCESS;
	uint32_t u4Val;

	num_of_region = target->num_of_region;
	if (num_of_region < 0) {
		DBGLOG(INIT, ERROR,
			"Firmware download num_of_region < 0 !\n");
		u4Status = WLAN_STATUS_FAILURE;
		goto out;
	}


	for (i = 0; i < num_of_region; i++) {
		struct patch_dl_buf *region;

		region = &target->patch_region[i];
		if (region->img_ptr == NULL)
			continue;

		/* 2. config PDA */
		if (wlanImageSectionConfig(prAdapter, region->img_dest_addr,
			region->img_size, u4DataMode, eDlIdx) !=
			WLAN_STATUS_SUCCESS) {
			DBGLOG(INIT, ERROR,
				"Firmware download configuration failed!\n");
			u4Status = WLAN_STATUS_FAILURE;
			goto out;
		}

		/*MT7933 temp patch, IP change */

		kalDevRegRead(prAdapter->prGlueInfo,
			WF_WFDMA_HOST_DMA0_PDA_CONFG_PDA_FWDL_EN_ADDR, &u4Val);
		u4Val |= BIT(31);
		kalDevRegWrite(prAdapter->prGlueInfo,
			WF_WFDMA_HOST_DMA0_PDA_CONFG_PDA_FWDL_EN_ADDR, u4Val);

		/* 3. image scatter */
		for (u4Offset = 0; u4Offset < region->img_size;
			u4Offset += CMD_PKT_SIZE_FOR_IMAGE) {
			if (u4Offset + CMD_PKT_SIZE_FOR_IMAGE <
				region->img_size)
				u4ImgSecSize = CMD_PKT_SIZE_FOR_IMAGE;
			else
				u4ImgSecSize = region->img_size - u4Offset;

			pucSecBuf = (uint8_t *) region->img_ptr + u4Offset;
			if (wlanImageSectionDownload(prAdapter, u4ImgSecSize,
					pucSecBuf) !=
					WLAN_STATUS_SUCCESS) {
				DBGLOG(INIT, ERROR,
					"Firmware scatter download failed!\n");
				return WLAN_STATUS_FAILURE;
			}
		}

		/* MT7933 temp patch, IP change */
		/* wiat PDA idle then stop PDA */
		do {
			kalDevRegRead(prAdapter->prGlueInfo,
			WF_WFDMA_HOST_DMA0_PDA_DWLD_STATE_ADDR, &u4Val);
			if (u4Val &
			WF_WFDMA_HOST_DMA0_PDA_DWLD_STATE_PDA_FWDL_FINISH_MASK)
				break;
			kalUdelay(1000);
		} while (1);

		kalDevRegRead(prAdapter->prGlueInfo,
		WF_WFDMA_HOST_DMA0_PDA_CONFG_PDA_FWDL_EN_ADDR, &u4Val);
		u4Val &= ~BIT(31);
		kalDevRegWrite(prAdapter->prGlueInfo,
		WF_WFDMA_HOST_DMA0_PDA_CONFG_PDA_FWDL_EN_ADDR, u4Val);

	}

out:
	kalMemFree(target->patch_region, PHY_MEM_TYPE,
		num_of_region * sizeof(struct patch_dl_buf));
	target->patch_region = NULL;
	target->num_of_region = 0;
	return u4Status;
}

struct BUS_INFO mt7933_bus_info = {
#if defined(_HIF_PCIE) || defined(_HIF_AXI)
	.top_cfg_base = MT7933_TOP_CFG_BASE,

	/* host_dma0 for TXP */
	.host_dma0_base = WF_WFDMA_HOST_DMA0_BASE,
	.host_int_status_addr = WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR,

	.host_int_txdone_bits =
		(CONNAC2X_WFDMA_TX_DONE_INT0 |
		CONNAC2X_WFDMA_TX_DONE_INT2 | CONNAC2X_WFDMA_TX_DONE_INT3),
	.host_int_rxdone_bits =
		(CONNAC2X_WFDMA_RX_DONE_INT0 | CONNAC2X_WFDMA_RX_DONE_INT1),

	.host_tx_ring_base = WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL0_ADDR,
#if 0 /* no control register here */
	.host_tx_ring_ext_ctrl_base =
		WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_ADDR,
#endif
	.host_tx_ring_cidx_addr = WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL2_ADDR,
	.host_tx_ring_didx_addr = WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL3_ADDR,
	.host_tx_ring_cnt_addr = WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_ADDR,

	.host_rx_ring_base = WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL0_ADDR,
#if 0 /* no control register here */
	.host_rx_ring_ext_ctrl_base =
		WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_ADDR,
#endif
	.host_rx_ring_cidx_addr = WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL2_ADDR,
	.host_rx_ring_didx_addr = WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL3_ADDR,
	.host_rx_ring_cnt_addr = WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_ADDR,

	.max_static_map_addr = 0x000f0000,

	.fw_own_clear_addr = CONNAC2X_BN0_IRQ_STAT_ADDR,
	.fw_own_clear_bit = PCIE_LPCR_FW_CLR_OWN,
	.fgCheckDriverOwnInt = FALSE,
	.u4DmaMask = 32,
	.pdmaSetup = asicConnac2xWpdmaConfig,
	.pdmaStop = NULL,
	.pdmaPollingIdle = NULL,
	/* mockingbird has no ext ctrl CR */
	.tx_ring_ext_ctrl = NULL, /* asicConnac2xWfdmaTxRingExtCtrl, */
	.rx_ring_ext_ctrl = NULL, /* asicConnac2xWfdmaRxRingExtCtrl, */
	/* null wfdmaManualPrefetch if want to disable manual mode */
	/* mockingbird has no prefetch function */
	.wfdmaManualPrefetch = NULL,
	.lowPowerOwnRead = asicConnac2xLowPowerOwnRead,
	.lowPowerOwnSet = asicConnac2xLowPowerOwnSet,
	.lowPowerOwnClear = asicConnac2xLowPowerOwnClear,
	.wakeUpWiFi = asicWakeUpWiFi,
	.processSoftwareInterrupt = asicConnac2xProcessSoftwareInterrupt,
	.softwareInterruptMcu = asicConnac2xSoftwareInterruptMcu,
	.hifRst = asicConnac2xHifRst,

	.initPcieInt = wlanBuzzardInitPcieInt,
	.bus2chip = mt7933_bus2chip_cr_mapping,
	.enableInterrupt = mt7933EnableInterrupt,
	.disableInterrupt = mt7933DisableInterrupt,
	.devReadIntStatus = mt7933ReadIntStatus,
	.processTxInterrupt = mt7933Connac2xProcessTxInterrupt,
	.processRxInterrupt = mt7933Connac2xProcessRxInterrupt,
	.DmaShdlInit = NULL,
	.setRxRingHwAddr = mt7933SetRxRingHwAddr,
	.wfdmaAllocRxRing = NULL, /* mt7933LiteWfdmaAllocRxRing, */
	.tx_ring_fwdl_idx = MT7933_FWDL_TX_RING_IDX,
	.tx_ring_cmd_idx = MT7933_CMD_TX_RING_IDX,
	.tx_ring0_data_idx = MT7933_DATA0_TXD_IDX,
	/* Mockingbird do not have ring1 in host */
	.tx_ring1_data_idx = MT7933_DATA0_TXD_IDX,
	.skip_tx_ring = BIT(TX_RING_DATA1_IDX_1),
#endif /*_HIF_PCIE || _HIF_AXI */

};

#if CFG_ENABLE_FW_DOWNLOAD
struct FWDL_OPS_T mt7933_fw_dl_ops = {
	.constructFirmwarePrio = mt7933ConstructFirmwarePrio,
	.constructPatchName = mt7933ConstructPatchName,
	.downloadPatch = wlanDownloadPatch,
	.downloadFirmware = wlanConnacFormatDownload,
	.getFwInfo = wlanGetConnacFwInfo,
	.getFwDlInfo = asicGetFwDlInfo,
	.downloadSection = mt7933WlanDownloadSection,
	.downloadSectionV2 = mt7933WlanDownloadSectionV2,
};
#endif /* CFG_ENABLE_FW_DOWNLOAD */

struct TX_DESC_OPS_T mt7933TxDescOps = {
	.fillNicAppend = fillNicTxDescAppend,
	.fillHifAppend = fillTxDescAppendByHostV2,
	.fillTxByteCount = fillConnac2xTxDescTxByteCount,
};

struct RX_DESC_OPS_T mt7933RxDescOps = {};

struct CHIP_DBG_OPS mt7933DebugOps = {
	.showPdmaInfo = mt7933_show_wfdma_info,
	.showPseInfo = mt7933_show_pse_info,
	.showPleInfo = mt7933_show_ple_info,
	.showTxdInfo = connac2x_show_txd_Info,
	.showWtblInfo = connac2x_show_wtbl_info,
	.showUmacFwtblInfo = connac2x_show_umac_wtbl_info,
	.showCsrInfo = mt7933HalShowHostCsrInfo,
	.showDmaschInfo = NULL,
	.showHifInfo = mt7933HalPrintHifDbgInfo,
	.printHifDbgInfo = mt7933HalPrintHifDbgInfo,
	.show_rx_rate_info = connac2x_show_rx_rate_info,
	.show_rx_rssi_info = connac2x_show_rx_rssi_info,
	.show_stat_info = connac2x_show_stat_info,
};
#if CFG_SUPPORT_QA_TOOL
struct ATE_OPS_T mt7933_AteOps = {
	/*ICapStart phase out , wlan_service instead*/
	.setICapStart = connacSetICapStart,
	/*ICapStatus phase out , wlan_service instead*/
	.getICapStatus = connacGetICapStatus,
	/*CapIQData phase out , wlan_service instead*/
	.getICapIQData = connacGetICapIQData,
	.getRbistDataDumpEvent = nicExtEventICapIQData,
	.icapRiseVcoreClockRate = mt7933_icapRiseVcoreClockRate,
	.icapDownVcoreClockRate = mt7933_icapDownVcoreClockRate,
	.u4EnBitWidth = 3, /*64 bit*/
	.u4Architech = 0,  /*0:on-chip*/
	.u4PhyIdx = 0,
	.u4EmiStartAddress = 0,
	.u4EmiEndAddress = 0,
	.u4EmiMsbAddress = 0,
};
#endif

/* Litien code refine to support multi chip */
struct mt66xx_chip_info mt66xx_chip_info_mt7933 = {
	.bus_info = &mt7933_bus_info,
#if CFG_ENABLE_FW_DOWNLOAD
	.fw_dl_ops = &mt7933_fw_dl_ops,
#endif /* CFG_ENABLE_FW_DOWNLOAD */
#if CFG_SUPPORT_QA_TOOL
	.prAteOps = &mt7933_AteOps,
#endif
	.prTxDescOps = &mt7933TxDescOps,
	.prRxDescOps = &mt7933RxDescOps,
	.prDebugOps = &mt7933DebugOps,
	.chip_id = MT7933_CHIP_ID,
	.should_verify_chip_id = FALSE,
	.sw_sync0 = MT7933_SW_SYNC0,
	.sw_ready_bits = WIFI_FUNC_NO_CR4_READY_BITS,
	.sw_ready_bit_offset = MT7933_SW_SYNC0_RDY_OFFSET,
	.patch_addr = MT7933_PATCH_START_ADDR,
	.is_support_cr4 = FALSE,
	.is_support_wacpu = FALSE,
	.txd_append_size = MT7933_TX_DESC_APPEND_LENGTH,
	.rxd_size = MT7933_RX_DESC_LENGTH,
	.pse_header_length = CONNAC2X_NIC_TX_PSE_HEADER_LENGTH,
	.init_event_size = CONNAC2X_RX_INIT_EVENT_LENGTH,
	.eco_info = mt7933_eco_table,
	.isNicCapV1 = FALSE,
	.top_hcr = CONNAC2X_TOP_HCR,
	.top_hvr = CONNAC2X_TOP_HVR,
	.top_fvr = CONNAC2X_TOP_FVR,
	.arb_ac_mode_addr = MT7933_ARB_AC_MODE_ADDR,
	.asicCapInit = asicConnac2xCapInit,
#if CFG_ENABLE_FW_DOWNLOAD
	.asicEnableFWDownload = NULL,
#endif /* CFG_ENABLE_FW_DOWNLOAD */
	.asicDumpSerDummyCR = NULL, /* mt7961DumpSerDummyCR, */
	.downloadBufferBin = NULL, /* wlanConnac2XDownloadBufferBin, */
	.is_support_hw_amsdu = TRUE,
	.is_support_asic_lp = TRUE,
	.is_support_wfdma1 = FALSE,
	.asicWfdmaReInit = asicConnac2xWfdmaReInit,
	.asicWfdmaReInit_handshakeInit = asicConnac2xWfdmaDummyCrWrite,
	.group5_size = sizeof(struct HW_MAC_RX_STS_GROUP_5),
	.u4LmacWtblDUAddr = CONNAC2X_WIFI_LWTBL_BASE,
	.u4UmacWtblDUAddr = CONNAC2X_WIFI_UWTBL_BASE,

#if 0 /* CFG_CHIP_RESET_SUPPORT */
	.asicWfsysRst = mt7961HalCbtopRguWfRst,
	.asicPollWfsysSwInitDone = mt7961HalPollWfsysSwInitDone,
#endif

	/* leave it to project owner */
	.uc2G4HeCapMaxAmpduLenExp = 0,
	.uc5GHeCapMaxAmpduLenExp = 0,
};

struct mt66xx_hif_driver_data mt66xx_driver_data_mt7933 = {
	.chip_info = &mt66xx_chip_info_mt7933,
};

#endif /* MT7933 */
