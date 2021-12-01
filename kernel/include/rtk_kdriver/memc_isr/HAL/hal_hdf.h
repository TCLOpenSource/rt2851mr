/**
 * @file hal_hdf.h
 * @brief This file is for HDF loading.
 * @date October.28.2014
 * @version V0.0.1
 * @author Martin Yan
 * @par Copyright (C) 2014 Real-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/
#ifndef _HAL_HDF_HEADER_INCLUDE_
#define _HAL_HDF_HEADER_INCLUDE_
	
#include "memc_isr/include/kw_type.h"
#include "memc_isr/Common/memc_type.h"

#define USE_LOAD_HDF
/**
 * @brief This function load default hdf.
 * @param [in] VOID.
 * @retval VOID
*/
typedef enum  
{
	_ADDR_CASE_NULL, // 0
	_ADDR_CASE_MC_UP_BOUND,
	_ADDR_CASE_MC_LOW_BOUND,
	_ADDR_CASE_ME_UP_BOUND,
	_ADDR_CASE_ME_LOW_BOUND,
}ADDR_CASE_ID;

VOID HAL_HDF_Load(VOID);
#endif
