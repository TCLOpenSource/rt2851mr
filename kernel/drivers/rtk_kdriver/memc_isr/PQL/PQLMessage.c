
#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/include/PQLAPI.h"
#include "memc_isr/PQL/PQLContext.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//message slice processing
#define _CMDQUEUE_NUM  20
#define _INFOQUEUE_NUM  6
static UBYTE  s_CmdQueue[_CMDQUEUE_NUM];
static UINT32 s_CurCmdIdx;
static UBYTE  s_InfoQueue[_INFOQUEUE_NUM];
static UINT32 s_CurInfoIdx;

static const _PQLPARAMETER *s_pParam;
static _PQLCONTEXT *s_pContext;

VOID PQL_MessageInit(const _PQLPARAMETER *pParam,_PQLCONTEXT *pContext)
{
	int i;
	s_CurCmdIdx = _CMDQUEUE_NUM-1;

	for (i = 0; i < _CMDQUEUE_NUM; i++)
	{
		s_CmdQueue[i] = PQL_CMD_VOID;
	}

	s_pParam = pParam;
	s_pContext = pContext;

	//pContext->_external_data.u8_deblur_lvl             = 64;
	//pContext->_external_data.u8_dejudder_lvl           = 128;
	//pContext->_external_data.u8_flbk_lvl               = 64;
	pContext->_external_data.u8_InputVSXral_FrameRepeatMode = 0;
	pContext->_external_data.u1_powerSaving = 0;

	pContext->_external_info.s16_speed = 256;
	pContext->_external_info.u1_mVOSeek = 0;
	pContext->_external_info.u1_mMiraCast = 0;
}

VOID PQL_PostMessage(const UBYTE CmdID)
{
	//Avoid sequential identical commands
	if (CmdID != s_CmdQueue[s_CurCmdIdx])
	{
		if (s_CurCmdIdx == 0)
		{
			s_CurCmdIdx = _CMDQUEUE_NUM-1;
		}else
		{
			s_CurCmdIdx--;
		}

		s_CmdQueue[s_CurCmdIdx] = CmdID;
	}
}

VOID PQL_INFO_PostMessage(const UBYTE InfoID)
{
	//Avoid sequential identical commands
	if (InfoID != s_InfoQueue[s_CurInfoIdx])
	{
		if (s_CurInfoIdx == 0)
		{
			s_CurInfoIdx = _INFOQUEUE_NUM-1;
		}else
		{
			s_CurInfoIdx--;
		}

		s_InfoQueue[s_CurInfoIdx] = InfoID;
	}
}

VOID PQL_MessageProc(VOID)
{
	while(s_CmdQueue[s_CurCmdIdx] != PQL_CMD_VOID)
	{
		switch(s_CmdQueue[s_CurCmdIdx])
		{
		case  PQL_CMD_MEMC_MODE_DEJUDDER:  //
			break;

		case PQL_CMD_MEMC_MODE_DEBLUR:   //
			break;

		case PQL_CMD_MEMC_MODE_FB:   //
			break;

		case PQL_CMD_INPUT_RESOLUTION:   //
			break;

		case PQL_CMD_INPUT_FRAME_RATE:   //
			break;

		case PQL_CMD_INPUT_FORMAT:   //
			//
			break;
		case PQL_CMD_OUTPUT_RESOLUTION:   //
			break;

		case PQL_CMD_OUTPUT_FRAME_RATE:   //
			break;

		case PQL_CMD_OUTPUT_FORMAT:   //
			break;

		case PQL_CMD_OSD_FORCE_MODE:   //
			break;

		case PQL_CMD_PULLDOWNMODE:   //
			break;

		case PQL_CMD_INPUTVSXRAL_FRAMEREPEAT_MODE:   //
			break;

		case PQL_CMD_LOWDELAYMODE:   //
			break;
		}

		s_CmdQueue[s_CurCmdIdx] = PQL_CMD_VOID;
		s_CurCmdIdx             = (s_CurCmdIdx+1)%_CMDQUEUE_NUM;
	}
}

VOID PQL_INFO_MessageProc(VOID)
{
	while(s_InfoQueue[s_CurInfoIdx] != PQL_INFO_VOID)
	{
		switch(s_InfoQueue[s_CurInfoIdx])
		{
		case  PQL_INFO_SRC_VO:  //
			break;
		}

		s_InfoQueue[s_CurInfoIdx] = PQL_INFO_VOID;
		s_CurInfoIdx             = (s_CurInfoIdx+1)%_INFOQUEUE_NUM;
	}
}

////////////////////////////////////////////////////////////////////////////////////////
//external commands
VOID PQL_CMD_MEMC_Module_ratio(const _PQL_MEMC_MODULE_RATIO *pCommand)
{
	if(pCommand)
	{
		_EXTERNAL_INPUT  *pExtData       = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_stc_memc_module_ratio = *pCommand;
	}
}

VOID PQL_CMD_MEMC_Mode_Dejudder(const UBYTE  *pCommand)
{
	//LogPrintf(DBG_MSG, "dejudder level = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u8_dejudder_lvl = (UBYTE)*pCommand;
	}
}
VOID PQL_CMD_MEMC_Mode_Deblur(const UBYTE  *pCommand)
{
	//LogPrintf(DBG_MSG, "deblur level = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u8_deblur_lvl   = (UBYTE)*pCommand;
	}
}
VOID PQL_CMD_MEMC_Mode_FB(const UBYTE  *pCommand)
{
	//LogPrintf(DBG_MSG, "fallback level = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u8_flbk_lvl     = (UBYTE)*pCommand;
	}
}
VOID PQL_CMD_InResolution(const PQL_INPUT_RESOLUTION *pCommand)
{
#if 0
	switch(*pCommand)
	{
	case _PQL_IN_1920x540:
		LogPrintf(DBG_MSG, "Input: 1920x540\r\n");
		break;
	case _PQL_OUT_1920x1080:
		LogPrintf(DBG_MSG, "Input: 1920x1080\r\n");
		break;
	case _PQL_OUT_3840x1080:
		LogPrintf(DBG_MSG, "Input: 3840x1080\r\n");
		break;
	case _PQL_IN_3840x2160:
		LogPrintf(DBG_MSG, "Input: 3840x2160\r\n");
		break;
	case _PQL_IN_3840x540:
		LogPrintf(DBG_MSG, "Input: 3840x540\r\n");
		break;
	case _PQL_IN_1920x2160:
		LogPrintf(DBG_MSG, "Input: 1920x2160\r\n");
		break;
	}
#endif
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_input_resolution = (PQL_INPUT_RESOLUTION)*pCommand;
	}
}
VOID PQL_CMD_InFrameRate( const PQL_INPUT_FRAME_RATE *pCommand)
{
	//LogPrintf(DBG_MSG, "input frame rate = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_input_frameRate = (PQL_INPUT_FRAME_RATE)*pCommand;
	}
}
VOID PQL_CMD_In3DFormat(const PQL_INPUT_3D_FORMAT *pCommand)
{
	//LogPrintf(DBG_MSG, "input 3d format = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_input_3dFormat = (PQL_INPUT_3D_FORMAT)*pCommand;
	}
}

VOID PQL_CMD_OutResolution(const PQL_OUTPUT_RESOLUTION *pCommand)
{
	//LogPrintf(DBG_MSG, "output resolution = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_output_resolution = (PQL_OUTPUT_RESOLUTION)*pCommand;
	}
}
VOID PQL_CMD_OutFrameRate( const PQL_OUTPUT_FRAME_RATE *pCommand)
{
	//LogPrintf(DBG_MSG, "output frame rate = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_output_frameRate = (PQL_OUTPUT_FRAME_RATE)*pCommand;
	}
}
VOID PQL_CMD_Out3DFormat(const PQL_OUTPUT_3D_FORMAT *pCommand)
{
	//LogPrintf(DBG_MSG, "output 3d format = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_output_3dFormat = (PQL_OUTPUT_3D_FORMAT)*pCommand;
	}
}
VOID PQL_CMD_OutMode(const PQL_OUT_MODE_ *pCommand)
{
	//LogPrintf(DBG_MSG, "output mode = %d\r\n", *pCommand);
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->_output_mode    = (PQL_OUT_MODE_)*pCommand;
	}
}
VOID PQL_CMD_LR_Swap(const         UBYTE *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u1_LR_swap      = (UBYTE)*pCommand;
	}
}
VOID PQL_CMD_InsertBlack(const     UBYTE *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u1_InsertBlack  = (UBYTE)*pCommand;
	}
}

VOID PQL_CMD_crtc_N(const     UBYTE *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u8_crtc_n= (UBYTE)*pCommand;

		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: crtc_N = %d\r\n", pExtData->u8_crtc_n);
	}
}
VOID PQL_CMD_crtc_M(const     UBYTE *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u8_crtc_m= (UBYTE)*pCommand;

		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: crtc_M = %d\r\n", pExtData->u8_crtc_m);
	}
}

VOID PQL_CMD_OsdForceMode(const     BOOL *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u1_osd_force_mode= (BOOL)*pCommand;

		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: u1_osd_force_mode = %d\r\n", pExtData->u1_osd_force_mode);
	}
}

VOID PQL_CMD_PullDownMode(const     UBYTE *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData=NULL;
		if(s_pContext == NULL)
			return;
		pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u8_pulldown_mode = (UBYTE)*pCommand;

		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: PULLDOWNMODE = %d\r\n", pExtData->u8_pulldown_mode);
	}
}

VOID PQL_CMD_MEMC_Mode(const     UBYTE *pCommand)
{
   if (pCommand)
   {
       _EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
       pExtData->u3_memcMode= (UBYTE)*pCommand;

       rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: MEMCMODE = %d\r\n", pExtData->u3_memcMode);
   }
}

VOID PQL_CMD_InputVSXral_FrameRepeatMode(const     UBYTE *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u8_InputVSXral_FrameRepeatMode = (UBYTE)*pCommand;

		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: InputVSXral_FrameRepeatMode = %d\r\n", pExtData->u8_InputVSXral_FrameRepeatMode);
	}
}

VOID PQL_CMD_LowDelayMode(const     UBYTE *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u1_lowDelayMode = (UBYTE)*pCommand;

		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: LowDelayMode = %d\r\n", pExtData->u1_lowDelayMode);
	}
}

VOID PQL_CMD_PowerSaving(const     BOOL *pCommand)
{
	if (pCommand)
	{
		_EXTERNAL_INPUT *pExtData = (_EXTERNAL_INPUT *)&(s_pContext->_external_data);
		pExtData->u1_powerSaving= (BOOL)*pCommand;

		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "CMD:: u1_osd_force_mode = %d\r\n", pExtData->u1_powerSaving);
	}
}

////////////////////////////////////////////////////////////////////////////
VOID PQL_REQ_cadenceID(UBYTE *pRequest)
{
	if (pRequest)
	{
#if 0/*need resolve:compiler error*/

		const _PQLCONTEXT *s_pContext = GetPQLContext();

		(*pRequest) = (s_pContext->_output_filmDetectctrl.u8_CurCadence == 0)? 1 : 0;
#endif
	}
}

VOID PQL_INFO_SRCVO(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		const _PQLCONTEXT *s_pContext_temp = GetPQLContext();
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);
		pExtInfo->u1_SRC_VO =  (UBYTE)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: SRC_VO = %d\r\n", pExtInfo->u1_SRC_VO);
	}
}

VOID PQL_INFO_HDR_Chg(const UBYTE  *pInfo)
{
	if (pInfo)
	{
        const _PQLCONTEXT *s_pContext_temp = GetPQLContext();
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);
		pExtInfo->u1_HDR_Chg=  (UBYTE)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: HDR_CHG = %d\r\n", pExtInfo->u1_HDR_Chg);
	}
}

VOID PQL_INFO_Brightness(const UINT16  *pInfo)
{
	if (pInfo)
	{
       const _PQLCONTEXT *s_pContext_temp = GetPQLContext();//fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);
		pExtInfo->u16_Brightness=  (UINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: Brightness = s%d, m%d\r\n", (pExtInfo->u16_Brightness)>>8, (pExtInfo->u16_Brightness & 0xff));
	}
}

VOID PQL_INFO_Contrast(const UINT16  *pInfo)
{
	if (pInfo)
	{
        const _PQLCONTEXT *s_pContext_temp = GetPQLContext();//fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);
		pExtInfo->u16_Contrast=  (UINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: Brightness = s%d, m%d\r\n", (pExtInfo->u16_Contrast)>>8, (pExtInfo->u16_Contrast & 0xff));
	}
}

VOID PQL_INFO_Speed(const SINT16  *pInfo)
{
	if (pInfo)
	{
		const _PQLCONTEXT *s_pContext_temp = GetPQLContext(); //fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);//fix me !!
		pExtInfo->s16_speed =  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: Speed = s%d, m%d\r\n", (pExtInfo->s16_speed)>>8, (pExtInfo->s16_speed & 0xff));
	}
}

VOID PQL_INFO_Zoom(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		const _PQLCONTEXT *s_pContext_temp = GetPQLContext();//fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);//fix me !!
		pExtInfo->u1_ZoomAction = (UBYTE)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: ZoomAction = %d\r\n", pExtInfo->u1_ZoomAction);
	}
}

VOID PQL_INFO_Shift(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		const _PQLCONTEXT *s_pContext_temp = GetPQLContext();//fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);//fix me !!
		pExtInfo->u1_ShiftAction = (UBYTE)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: OnlyXYShitfAction = %d\r\n", pExtInfo->u1_ShiftAction);
	}
}

VOID PQL_INFO_SourceType(const UINT16  *pInfo)
{
	if(pInfo)
	{
		const _PQLCONTEXT *s_pContext_temp = GetPQLContext();//fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);//fix me !!
		pExtInfo->u16_source_type = (UINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: source_type = %d\r\n", pExtInfo->u16_source_type);
	}
}

VOID PQL_INFO_VOSeek(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		const _PQLCONTEXT *s_pContext_temp = GetPQLContext(); //fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);//fix me !!
		pExtInfo->u1_mVOSeek =  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: VOSeek = %d\r\n", pExtInfo->u1_mVOSeek);
	}

}
VOID PQL_INFO_MEMCMode(const UINT16  *pInfo)
{
	if (pInfo)
	{
		const _PQLCONTEXT *s_pContext_temp = GetPQLContext(); //fix me !!
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext_temp->_external_info);//fix me !!
		pExtInfo->u16_MEMCMode =  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: MEMCMode = %d\r\n", pExtInfo->u16_MEMCMode);
	}	
}


VOID PQL_INFO_DarkLevel(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);
		pExtInfo->u8_DarkLevel =  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: DarkLevel = %d\r\n", pExtInfo->u8_DarkLevel);
	}
}

VOID PQL_INFO_Hist_SC(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);
		pExtInfo->u1_Hist_SC_flg =  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: Hist_SC_flg = %d\r\n", pExtInfo->u1_Hist_SC_flg);
	}
}

VOID PQL_INFO_SoccerPatch(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);
		pExtInfo->u8_Soccer_holdfrm =  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: Soccer = %d\r\n", pExtInfo->u8_Soccer_holdfrm);
	}
}

VOID PQL_INFO_PictureMode_Chg(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);
		pExtInfo->u1_PictureMode_Chg =  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: PictureMode_Chg = %d\r\n", pExtInfo->u1_PictureMode_Chg);
	}
}

VOID PQL_INFO_VIP_Still(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);
		pExtInfo->u1_VIP_Still=  (UBYTE)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: VIP_Still = %d\r\n", pExtInfo->u1_VIP_Still);
	}
}

VOID PQL_INFO_MiraCast(const UBYTE  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);
		pExtInfo->u1_mMiraCast=  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: MiraCast = %d\r\n", pExtInfo->u1_mMiraCast);
	}
}

VOID PQL_INFO_Forbes(const UINT16  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);
		pExtInfo->u1_Forbes_flg=  (SINT16)*pInfo;
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: Forbes = %d\r\n", pExtInfo->u1_Forbes_flg);
	}
}

VOID PQL_INFO_DTL_Step_Hist_sum_ratio(const UINT32  *pInfo)
{
	if (pInfo)
	{
		_EXTERNAL_INFO*pExtInfo = (_EXTERNAL_INFO*)&(s_pContext->_external_info);

		pExtInfo->DTL_Step_Hist_sum_ratio[0] =  (UINT32)pInfo[0];
		pExtInfo->DTL_Step_Hist_sum_ratio[1] =  (UINT32)pInfo[1];
		pExtInfo->DTL_Step_Hist_sum_ratio[2] =  (UINT32)pInfo[2];
		pExtInfo->DTL_Step_Hist_sum_ratio[3] =  (UINT32)pInfo[3];
		pExtInfo->DTL_Step_Hist_sum_ratio[4] =  (UINT32)pInfo[4];
		
		rtd_printk(KERN_DEBUG, TAG_NAME_MEMC, "INFO:: DTL_Step_Hist_sum_ratio[0] = %d,[1] = %d,[2] = %d,[3] = %d,[4] = %d\r\n", pExtInfo->DTL_Step_Hist_sum_ratio[0]
					, pExtInfo->DTL_Step_Hist_sum_ratio[1], pExtInfo->DTL_Step_Hist_sum_ratio[2], pExtInfo->DTL_Step_Hist_sum_ratio[3], pExtInfo->DTL_Step_Hist_sum_ratio[4]);
	}
}


