/*****************************************************************************
 *
 *   Realtek Delivery driver
 *
 *   Copyright(c) 2019 Realtek Semiconductor Corp. All rights reserved.
 *
 *****************************************************************************/
#include "rtkdelivery.h"
#include "rtkdelivery_debug.h"
#include "tvscalercontrol/vip/scalerColor.h"
#include "demux_tv001/rtkdemux_export.h"
#include "demux_tv001/rtkdemux.h"
#include "demux_tv001/rtkdemux_ioctl_ex.h"

#include <linux/sched.h>
#include <asm/current.h>
#include <tp/tp_drv_global.h>
#include <rbus/stb_reg.h>

extern int IOCTLEX_InitChannel(DEMUX_CHANNEL_T *pInfo);
extern INT32 RHAL_TPRawModeEnable(TPK_TP_ENGINE_T tp_id, TPK_TP_RAW_CTRL_T enable);

#define DELIVERY_CHECK_CH(x)  \
{\
        if (!delivery_device->pChArray || x >= delivery_device->chNum || !delivery_device->pChArray[x].isInit) { \
                delivery_warn(x,"func %s, line %d, Error(isInit %d, ch %d, chNum %d)!!\n", __func__, __LINE__, (delivery_device->pChArray != 0), x, delivery_device->chNum); \
                return -ENOTTY; \
        } \
}
#define DELIVERY_GET_DELIVERY_ID(_ch) (((_ch) == DELIVERY_CH_A) ? TP_TP0 : (((_ch) == DELIVERY_CH_B) ? TP_TP1 : TP_TP2))

UINT8 boot_status_isACOn = 1;
int IOCTL_ReConfigTPBuffer(DELIVERY_CHANNEL_T ch);
UINT8 deliveryMode = TP_DELIVERY_MODE_UNKNOWN;

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryINIT
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_INIT(void)
{
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryUNINIT
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_UNINIT(void)
{
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryOpen
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_Open(DELIVERY_DELIVERY_CHANNEL_T *pChannel)
{
        TPK_TP_ENGINE_T tp_id;

        DELIVERY_CHECK_CH(pChannel->ch);

        tp_id = DELIVERY_GET_DELIVERY_ID(pChannel->ch);
        delivery_err(pChannel->ch,"[%s L:%d] enter deliveryMode=%d", __FUNCTION__,__LINE__,deliveryMode);
#ifdef CONFIG_RTK_KDRV_ATSC3_DMX
        if( deliveryMode == TP_DELIVERY_MODE_ATSC30){
        	delivery_err(pChannel->ch,"[%s L:%d] TP_DELIVERY_MODE_ATSC30", __FUNCTION__,__LINE__);
        	if(RHAL_ATSC30_Open(tp_id) != TPK_SUCCESS)
        		return -1;
        }
#endif
#ifdef CONFIG_RTK_KDRV_ATSC3_ALP_DMX
        if( deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP ) {
        	delivery_err(pChannel->ch,"[%s L:%d] TP_DELIVERY_MODE_ATSC30_ALP", __FUNCTION__,__LINE__);
        	if(RHAL_ATSC30_ALP_Open(TP_TP2) != TPK_SUCCESS)
        		return -1;
        }
#endif
        if( deliveryMode == TP_DELIVERY_MODE_JAPAN4K ){
        	IOCTLEX_InitChannel((DEMUX_CHANNEL_T *)(&(tp_id)));
        	if(RHAL_JAPAN4K_Open(tp_id) != TPK_SUCCESS)
        		return -1;
        }
        delivery_err(pChannel->ch,"[%s L:%d] open success,exit", __FUNCTION__,__LINE__);
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryClose
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_Close(DELIVERY_DELIVERY_CHANNEL_T *pChannel)
{
        TPK_TP_ENGINE_T tp_id;

        DELIVERY_CHECK_CH(pChannel->ch);
        delivery_err(pChannel->ch,"[%s L:%d] enter", __FUNCTION__,__LINE__);

        tp_id = DELIVERY_GET_DELIVERY_ID(pChannel->ch);
#ifdef CONFIG_RTK_KDRV_ATSC3_DMX
        if( deliveryMode == TP_DELIVERY_MODE_ATSC30){
        	if(RHAL_ATSC30_Close(tp_id) != TPK_SUCCESS)
        		return -1;
        }
#endif
#ifdef CONFIG_RTK_KDRV_ATSC3_ALP_DMX
        if( deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP ) {
        	if(RHAL_ATSC30_ALP_Close(TP_TP2) != TPK_SUCCESS)
        		return -1;
        }
#endif
        if( deliveryMode == TP_DELIVERY_MODE_JAPAN4K ){
        	if(RHAL_JAPAN4K_Close(tp_id) != TPK_SUCCESS)
        		return -1;
        }
        delivery_err(pChannel->ch,"[%s L:%d] exit", __FUNCTION__,__LINE__);

        return 0;
}
/*------------------------------------------------------------------
 * Func : IOCTL_DeliverySetMode
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_SetMode(DELIVERY_DELIVERY_SET_MODE_T *pInfo)
{
    TPK_TP_ENGINE_T tp_id = DELIVERY_GET_DELIVERY_ID(pInfo->ch);
    deliveryMode = pInfo->mode;

    if ( RHAL_Delivery_SetMode(tp_id, pInfo->mode) != TPK_SUCCESS)
        return -1;

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliverySetTPInputConfig
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_SetTPInputConfig(DELIVERY_TP_SOURCE_CONFIG_T *pInfo)
{
        TPK_TP_SOURCE_T tp_src;
        TPK_TP_STATUS_T tpStatus;
        TPK_TP_ENGINE_T tp_id = DELIVERY_GET_DELIVERY_ID(pInfo->ch);
        delivery_err(pInfo->ch,"[%s L:%d] enter  ,deliveryMode=%d,portType=%d,inputType=%d\n", __FUNCTION__,__LINE__,deliveryMode,pInfo->portType,pInfo->inputType);

        if( deliveryMode == TP_DELIVERY_MODE_ATSC30)
        {
                RHAL_Delivery_ATSC30_SetInputConfig(tp_id, pInfo->portType, pInfo->inputType);
        }

        if(deliveryMode == TP_DELIVERY_MODE_JAPAN4K)
        {
                RHAL_Delivery_JAPAN4K_SetInputConfig(tp_id, pInfo->portType, pInfo->inputType);
        }

        if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP) {
                tp_id = TP_TP2;
                delivery_err(tp_id,"[%s L:%d] TP_DELIVERY_MODE_ATSC30_ALP", __FUNCTION__,__LINE__);

                if (RHAL_GetTpStatus(tp_id, &tpStatus) != TPK_SUCCESS)
                        return TPK_FAIL;

                if(pInfo->inputType == TPK_INPUT_SERIAL)
                        tpStatus.tp_param.serial = 1;
                else
                        tpStatus.tp_param.serial = 0;

                if(TPK_PORT_EXT_INPUT0 == pInfo->portType)
                        tp_src = TS_SRC_0;
                else if(TPK_PORT_EXT_INPUT1 == pInfo->portType)
                        tp_src = TS_SRC_1;
                else
                        tp_src = TS_SRC_2;

                if (RHAL_SetTPMode(tp_id, tpStatus.tp_param) != TPK_SUCCESS)
                        return -1;

                delivery_err(pInfo->ch,"[%s L:%d] TP_DELIVERY_MODE_ATSC30_ALP tp_src=%d", __FUNCTION__,__LINE__,tp_src);

                if(RHAL_SetTPSource(tp_id, tp_src, TPK_WITHOUT_CAS) != TPK_SUCCESS)
                        return TPK_FAIL;

        }
        delivery_err(pInfo->ch,"[%s L:%d] exit", __FUNCTION__,__LINE__);
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryRequestBBFrame
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_RequestBBFrame(DELIVERY_DELIVERY_CHANNEL_T *pChannel)
{
        //delivery_channel *pCh;
        TPK_TP_ENGINE_T tp_id;

        DELIVERY_CHECK_CH(pChannel->ch);

        tp_id = DELIVERY_GET_DELIVERY_ID(pChannel->ch);
		if( deliveryMode == TP_DELIVERY_MODE_ATSC30)
		{
			// only run in raw mode
			//if(RHAL_EnablePIDFilter(tp_id, 0) != TPK_SUCCESS)
			//        return -1;

			//pCh = &delivery_device->pChArray[pChannel->ch];
			//pCh->startStreaming = 1;
	        RHAL_ATSC30_RequestBBFrame(tp_id);
		}

        if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP) {
                tp_id = TP_TP2;
                if(RHAL_TPRawModeEnable(tp_id, TP_RAW_ENABLE) != TPK_SUCCESS) {
                        return -1;
                }
                if(RHAL_EnablePIDFilter(tp_id, 0) != TPK_SUCCESS) {
                        return -1;
                }

                RHAL_ATSC30_ALP_RequestBBFrame(tp_id);

                if(RHAL_TPStreamControl(tp_id, TP_STREAM_START) != TPK_SUCCESS) {
                        return -1;
                }
        }
		
        fwif_color_set_force_I_De_XC_Disable(1);
#ifdef CONFIG_SUPPORT_SCALER
        fwif_color_set_force_I_De_XC_Disable(1);
#endif
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryCancelBBFrame
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_CancelBBFrame(DELIVERY_DELIVERY_CHANNEL_T *pChannel)
{
        TPK_TP_ENGINE_T tp_id;
        //delivery_channel *pCh;

        DELIVERY_CHECK_CH(pChannel->ch);

        tp_id = DELIVERY_GET_DELIVERY_ID(pChannel->ch);

        if( deliveryMode == TP_DELIVERY_MODE_ATSC30)
        {
                // only run in raw mode
                //pCh = &delivery_device->pChArray[pChannel->ch];
                //pCh->startStreaming = 0;

                RHAL_ATSC30_CancelBBFrame(tp_id);
        }
        if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP) {
                tp_id = TP_TP2;
                if (RHAL_TPStreamControl(tp_id, TP_STREAM_STOP) != TPK_SUCCESS) {
			            return -1;
                }
                RHAL_ATSC30_ALP_CancelBBFrame(tp_id);
        }
#ifdef CONFIG_SUPPORT_SCALER
        fwif_color_set_force_I_De_XC_Disable(0);
#endif
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryGetBBFrameBuffer
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_GetBBFrameBuffer(DELIVERY_DELIVERY_GET_BBF_BUFFER_T *pBBFBuff)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(pBBFBuff->ch);

    tp_id = DELIVERY_GET_DELIVERY_ID(pBBFBuff->ch);

    if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
        tp_id = TP_TP2;

    if( deliveryMode == TP_DELIVERY_MODE_ATSC30 || deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
    {
        if (RHAL_ATSC30_GetBBFrame(tp_id, &(pBBFBuff->bbframe_address), &(pBBFBuff->count)) != TPK_SUCCESS)
            return -1;
    }

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryReturnFrameBuffer
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_ReturnFrameBuffer(DELIVERY_DELIVERY_GET_BBF_BUFFER_T *pBBFBuff)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(pBBFBuff->ch);

    tp_id = DELIVERY_GET_DELIVERY_ID(pBBFBuff->ch);

    if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
        tp_id = TP_TP2;

    if( deliveryMode == TP_DELIVERY_MODE_ATSC30 || deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
    {
        if (RHAL_ATSC30_ReturnBBFrame(tp_id, pBBFBuff->bbframe_address) != TPK_SUCCESS)
            return -1;
    }

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryGetBBFrameBufferInfo
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_GetBBFrameBufferInfo(DELIVERY_DELIVERY_BBF_BUFFER_INFO_T *pBBFBuffInfo)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(pBBFBuffInfo->ch);

    tp_id = DELIVERY_GET_DELIVERY_ID(pBBFBuffInfo->ch);

    if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
        tp_id = TP_TP2;

    if( deliveryMode == TP_DELIVERY_MODE_ATSC30 || deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
    {
        if (RHAL_ATSC30_GetBBFrameInfo(tp_id, &(pBBFBuffInfo->bbf_buff_phy), &(pBBFBuffInfo->bbf_buff_size)) != TPK_SUCCESS)
            return -1;
    }

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryGetTimeInfo
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_GetTimeInfo(DELIVERY_DELIVERY_TIME_INFO_T *pTimeInfo)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(pTimeInfo->ch);

    tp_id = DELIVERY_GET_DELIVERY_ID(pTimeInfo->ch);

    if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
        tp_id = TP_TP2;

    if(RHAL_ATSC30_GetTimeInfo(tp_id, &(pTimeInfo->sec), &(pTimeInfo->nsec), &(pTimeInfo->wall_clock), &(pTimeInfo->mode) ) != TPK_SUCCESS)
    {
        return -1;
    }

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliverySetTimeInfo
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_SetTimeInfo(DELIVERY_DELIVERY_TIME_INFO_T *pTimeInfo)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(pTimeInfo->ch);

    tp_id = DELIVERY_GET_DELIVERY_ID(pTimeInfo->ch);

    if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
        tp_id = TP_TP2;

    if (RHAL_ATSC30_SetTimeInfo(tp_id, pTimeInfo->sec, pTimeInfo->nsec, pTimeInfo->wall_clock ) != TPK_SUCCESS)
        return -1;

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliverySetSystemTimeInfo
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_SetSystemTimeInfo(DELIVERY_DELIVERY_SYSTEM_TIME_INFO_T *pSystemTimeInfo)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(pSystemTimeInfo->ch);

    tp_id = DELIVERY_GET_DELIVERY_ID(pSystemTimeInfo->ch);

    if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
        tp_id = TP_TP2;

    if (RHAL_ATSC30_SetSystemTimeInfo(tp_id, pSystemTimeInfo->current_utc_offset, pSystemTimeInfo->ptp_prepend, pSystemTimeInfo->leap59, pSystemTimeInfo->leap61) != TPK_SUCCESS)
        return -1;

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliverySetClockRecovery
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_SetClockRecovery(DELIVERY_DELIVERY_CLOCK_RECOVERY_T *pClockRecovery)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(pClockRecovery->ch);

    tp_id = DELIVERY_GET_DELIVERY_ID(pClockRecovery->ch);

    if(deliveryMode == TP_DELIVERY_MODE_ATSC30_ALP)
        tp_id = TP_TP2;

    if (RHAL_ATSC30_SetClockRecovery(tp_id, pClockRecovery->isNeedRecovery) != TPK_SUCCESS)
        return -1;

    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryRequestData
 * Desc :
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_RequestData(DELIVERY_DELIVERY_CHANNEL_T *channel)
{
        TPK_TP_ENGINE_T tp_id;
        DELIVERY_CHECK_CH(channel->ch);

        tp_id = DELIVERY_GET_DELIVERY_ID(channel->ch);
        delivery_err(tp_id,"[%s L:%d] enter deliveryMode=%d", __FUNCTION__,__LINE__,deliveryMode);

        if( deliveryMode == TP_DELIVERY_MODE_JAPAN4K) {
             if(pTp_drv->tp_japan[tp_id].tlv_mode == TPK_TP_TLV_SW_MODE){
                RHAL_TPSetRingBufferWritePolicy(TP_RING_WRITE_UPDATE_FOR_WLAST);
                if(RHAL_TPRawModeEnable(tp_id, TP_RAW_ENABLE) != TPK_SUCCESS)
                        return -1;

                if(RHAL_EnablePIDFilter(tp_id, 0) != TPK_SUCCESS)
                        return -1;

                if(RHAL_TPStreamControl(tp_id, TP_STREAM_START) != TPK_SUCCESS)
                        return -1;
            }
            if(RHAL_Delivery_RequestData(tp_id) != TPK_SUCCESS)
                return -1;
        }

#ifdef CONFIG_SUPPORT_SCALER
        fwif_color_set_force_I_De_XC_Disable(1);
#endif
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryCancelData
 * Desc :
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_CancelData(DELIVERY_DELIVERY_CHANNEL_T *channel)
{
        TPK_TP_ENGINE_T tp_id;
        DELIVERY_CHECK_CH(channel->ch);

        tp_id = DELIVERY_GET_DELIVERY_ID(channel->ch);
        delivery_err(tp_id,"[%s L:%d] enter deliveryMode=%d", __FUNCTION__,__LINE__,deliveryMode);

		if(deliveryMode == TP_DELIVERY_MODE_JAPAN4K){
            /*Hardcode TCL TP2 USE_RAW_TO_GET_TLV */
            if(TP_TP0 != tp_id){
	            if (RHAL_TPStreamControl(tp_id, TP_STREAM_STOP) != TPK_SUCCESS)
	                return -1;
	            if(RHAL_TPRawModeEnable(tp_id, TP_RAW_DISABLE) != TPK_SUCCESS)
	                return -1;
            }

	        if(RHAL_Delivery_CancelData(tp_id) != TPK_SUCCESS)
	                return -1;
		}

#ifdef CONFIG_SUPPORT_SCALER
        fwif_color_set_force_I_De_XC_Disable(0);
#endif
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryGetData
 * Desc :
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_GetData(DELIVERY_DELIVERY_READ_DATA_T *pData)
{
        TPK_TP_ENGINE_T tp_id;
		UINT32 data_size;

        DELIVERY_CHECK_CH(pData->ch);
        tp_id = DELIVERY_GET_DELIVERY_ID(pData->ch);

		if(deliveryMode == TP_DELIVERY_MODE_JAPAN4K){
			data_size = pData->data_size;
			if( RHAL_Delivery_GetData(tp_id, pData->data, &data_size) != TPK_SUCCESS)
				return -1;
			pData->data_size = data_size;
		}
        return 0;
}
/*------------------------------------------------------------------
 * Func : IOCTL_Delivery_SetTLVFilter
 * Desc :
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_SetTLVFilter(DELIVERY_DELIVERY_TLV_FILTER_INFO_T *ptlv_param)
{
    TPK_TP_ENGINE_T tp_id;

    DELIVERY_CHECK_CH(ptlv_param->ch);
    tp_id = DELIVERY_GET_DELIVERY_ID(ptlv_param->ch);
    return japan4k_dmx_set_TLV_filter(tp_id, ptlv_param->cnt, ptlv_param->pfiltet_info_list);
}

/*------------------------------------------------------------------
 * Func : IOCTL_Delivery_GetNTP
 * Desc :
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_GetNTP(DELIVERY_DELIVERY_NTP_T *pNTP)
{
    TPK_TP_ENGINE_T tp_id;
    tp_id = DELIVERY_GET_DELIVERY_ID(pNTP->ch);
    japan4k_dmx_get_NTP(tp_id, &pNTP->ntp);
    return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_Delivery_GetCIDMappingInfo()
 * Desc : get cid ip mapping info
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_GetCIDMappingInfo(DELIVERY_DELIVERY_MAPPINT_INFO_T *pMapInfo)
{
    TPK_TP_ENGINE_T tp_id;
    DELIVERY_CHECK_CH(pMapInfo->ch);
    tp_id = DELIVERY_GET_DELIVERY_ID(pMapInfo->ch);
    return japan4k_dmx_get_CIDMappingInfo(tp_id, &pMapInfo->count, pMapInfo->pMapping_info);
}

/*------------------------------------------------------------------
 * Func : IOCTL_DeliveryFlush
 *
 * Desc : Flush related memory when change freq
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_Flush(DELIVERY_DELIVERY_CHANNEL_T *pChannel)
{
    TPK_TP_ENGINE_T tp_id;
    DELIVERY_CHECK_CH(pChannel->ch);
    tp_id = DELIVERY_GET_DELIVERY_ID(pChannel->ch);
    return japan4k_dmx_flush(tp_id);
}
/*------------------------------------------------------------------
 * Func : IOCTL_Delivery_GetBootStatus
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_GetBootStatus(DELIVERY_DELIVERY_GET_BOOT_STATUS_T *pData)
{
        pData->isACON = boot_status_isACOn;
        boot_status_isACOn = 0;
        return 0;
}

/*------------------------------------------------------------------
 * Func : IOCTL_Delivery_SaveBootStatus
 *
 * Desc :
 *
 * Retn :
 *------------------------------------------------------------------*/
int IOCTL_Delivery_SaveBootStatus(void)
{
        UINT32 reg_suslt = rtd_inl(STB_WDOG_DATA1_reg);
        if(reg_suslt == 0x2379beef)
                boot_status_isACOn = 0;
        else
                boot_status_isACOn = 1;
        return 0;
}

