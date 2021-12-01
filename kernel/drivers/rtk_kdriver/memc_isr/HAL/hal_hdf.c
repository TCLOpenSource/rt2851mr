/**
 * @file hal_hdf.c
 * @brief This file is for HDF loading.
 * @date October.28.2014
 * @version V0.0.1
 * @author Martin Yan
 * @par Copyright (C) 2014 Real-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/

#include "memc_isr/HAL/hal_hdf.h"
#include "memc_isr/include/hdf.h"
#include "memc_isr/Common/kw_debug.h"
#include "memc_isr/Common/kw_common.h"
#include "memc_isr/Driver/regio.h"
#include "memc_isr/memc_reg_def.h"
#include <memc_isr/scalerMEMC.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerDrvCommon.h>
#else
	#include <scalercommon/scalerDrvCommon.h>
#endif

#define FILE_HEADER_SIZE		64
#define PAGE_HEADER_SIZE		16
#define PAGE_ADDRESS_OFFSET		4
#define PAGE_SIZE_OFFSET		8
#define MEMC_REG_BASE_OFFSET 0xB8099000

/**
 * @brief This function load default hdf.
 * @param [in] VOID.
 * @retval VOID
*/
unsigned char HAL_HDF_AddressCheck(unsigned int u32_address)
{
	unsigned char ret = _ADDR_CASE_NULL;
	if(u32_address == (MC_DMA_MC_LF_DMA_WR_Rule_check_up_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_HF_DMA_WR_Rule_check_up_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_LF_I_DMA_RD_Rule_check_up_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_HF_I_DMA_RD_Rule_check_up_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_LF_P_DMA_RD_Rule_check_up_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_HF_P_DMA_RD_Rule_check_up_reg-MEMC_REG_BASE_OFFSET))
	{
		ret = _ADDR_CASE_MC_UP_BOUND;
		return ret;
	}
	else if(u32_address == (MC_DMA_MC_LF_DMA_WR_Rule_check_low_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_HF_DMA_WR_Rule_check_low_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_LF_I_DMA_RD_Rule_check_low_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_HF_I_DMA_RD_Rule_check_low_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_LF_P_DMA_RD_Rule_check_low_reg-MEMC_REG_BASE_OFFSET)
		|| u32_address == (MC_DMA_MC_HF_P_DMA_RD_Rule_check_low_reg-MEMC_REG_BASE_OFFSET))
	{
		ret = _ADDR_CASE_MC_LOW_BOUND;
		return ret;
	}
	else if(u32_address == (DBUS_WRAPPER_Me_uplimit_addr_reg-MEMC_REG_BASE_OFFSET))
	{
		ret = _ADDR_CASE_ME_UP_BOUND;
		return ret;
	}
	else if(u32_address == (DBUS_WRAPPER_Me_downlimit_addr_reg-MEMC_REG_BASE_OFFSET))
	{
		ret = _ADDR_CASE_ME_LOW_BOUND;
		return ret;
	}
	else{
		return ret;
	}
}

VOID HAL_HDF_Load(VOID)
{
#ifdef USE_LOAD_HDF
	UINT32 u32PageNum = 0;
	UINT32 u32PageSize = 0;
	UINT32 u32Page_Idx = 0;
	UINT32 u32Page_Offset = 0;
	UINT32 u32Page_Addr = 0;
	UINT32 u32Page_Reg_Idx = 0;
	UINT32 u32Page_Reg_Addr = 0;
	UINT32 u32Page_Reg_Val = 0;
	SCALER_MEMC_DMASTARTADDRESS_T* memc_dma_address_info;
	memc_dma_address_info = (SCALER_MEMC_DMASTARTADDRESS_T*)Scaler_GetShareMemVirAddr(SCALERIOC_MEMC_INITIALIZATION);

	u32PageNum = (u8HDF_Array[7] << 24) + (u8HDF_Array[6] << 16) + (u8HDF_Array[5] << 8) + u8HDF_Array[4];
	u32Page_Offset = FILE_HEADER_SIZE;
	for(u32Page_Idx = 0; u32Page_Idx < u32PageNum; u32Page_Idx++)
	{	
		//LogPrintf(DBG_MSG, "u32Page_Idx = %d\r\n", u32Page_Idx);

		u32PageSize = (u8HDF_Array[u32Page_Offset + PAGE_SIZE_OFFSET + 3] << 24) + 
					  (u8HDF_Array[u32Page_Offset + PAGE_SIZE_OFFSET + 2] << 16) + 
					  (u8HDF_Array[u32Page_Offset + PAGE_SIZE_OFFSET + 1] << 8) + 
					   u8HDF_Array[u32Page_Offset + PAGE_SIZE_OFFSET];
		u32Page_Addr = (u8HDF_Array[u32Page_Offset + PAGE_ADDRESS_OFFSET + 3] << 24) + 
					   (u8HDF_Array[u32Page_Offset + PAGE_ADDRESS_OFFSET + 2] << 16) + 
					   (u8HDF_Array[u32Page_Offset + PAGE_ADDRESS_OFFSET + 1] << 8) + 
					    u8HDF_Array[u32Page_Offset + PAGE_ADDRESS_OFFSET];
//		printk(KERN_EMERG"[jerry_HAL_HDF_Load_02][%s][%d][,%d,%d,%d,%d,%d,]\n", __FUNCTION__, __LINE__, u32Page_Idx, u32PageNum, u32Page_Addr, u32PageSize, u32Page_Reg_Addr);
//		if(u32Page_Idx < 46){  
			for(u32Page_Reg_Idx = 0; u32Page_Reg_Idx < u32PageSize / 4; u32Page_Reg_Idx++)
			{
				u32Page_Reg_Addr = u32Page_Addr + u32Page_Reg_Idx * 4;
				u32Page_Reg_Val = (u8HDF_Array[u32Page_Offset + PAGE_HEADER_SIZE + u32Page_Reg_Idx * 4 + 3] << 24) + 
						   		  (u8HDF_Array[u32Page_Offset + PAGE_HEADER_SIZE + u32Page_Reg_Idx * 4 + 2] << 16) + 
						   		  (u8HDF_Array[u32Page_Offset + PAGE_HEADER_SIZE + u32Page_Reg_Idx * 4 + 1] << 8) + 
						    	   u8HDF_Array[u32Page_Offset + PAGE_HEADER_SIZE + u32Page_Reg_Idx * 4];
				if(HAL_HDF_AddressCheck(u32Page_Reg_Addr) == _ADDR_CASE_MC_UP_BOUND){
					u32Page_Reg_Val = (memc_dma_address_info->MC00_start_addr + KMC_TOTAL_SIZE);
					pr_notice("[HAL_HDF_Load][_ADDR_CASE_MC_UP_BOUND][%x = %x]\n\r", u32Page_Reg_Addr, u32Page_Reg_Val);
				}
				else if(HAL_HDF_AddressCheck(u32Page_Reg_Addr) == _ADDR_CASE_MC_LOW_BOUND){
					u32Page_Reg_Val = (memc_dma_address_info->MC00_start_addr);
					pr_notice("[HAL_HDF_Load][_ADDR_CASE_MC_LOW_BOUND][%x = %x]\n\r", u32Page_Reg_Addr, u32Page_Reg_Val);
				}
				else if(HAL_HDF_AddressCheck(u32Page_Reg_Addr) == _ADDR_CASE_ME_UP_BOUND){
					u32Page_Reg_Val = (memc_dma_address_info->ME_start_addr + KME_TOTAL_SIZE);
					pr_notice("[HAL_HDF_Load][_ADDR_CASE_ME_UP_BOUND][%x = %x]\n\r", u32Page_Reg_Addr, u32Page_Reg_Val);
				}
				else if(HAL_HDF_AddressCheck(u32Page_Reg_Addr) == _ADDR_CASE_ME_LOW_BOUND){
					u32Page_Reg_Val = (memc_dma_address_info->ME_start_addr);
					pr_notice("[HAL_HDF_Load][_ADDR_CASE_ME_LOW_BOUND][%x = %x]\n\r", u32Page_Reg_Addr, u32Page_Reg_Val);
				}

				WriteRegister(u32Page_Reg_Addr, 0, 31, u32Page_Reg_Val);
			}
//		}
//		printk(KERN_EMERG"[jerry_HAL_HDF_Load_03][%s][%d][,%d,%d,%d,%d,%d,]\n", __FUNCTION__, __LINE__, u32Page_Idx, u32PageNum, u32Page_Addr, u32PageSize, u32Page_Reg_Addr);
		u32Page_Offset = u32Page_Offset + PAGE_HEADER_SIZE + u32PageSize;
		if(u32Page_Idx == u32PageNum - 1)
		{
			rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "Load hdf done... Total %d pages\r\n", u32PageNum);
		}
	}
#endif
}
