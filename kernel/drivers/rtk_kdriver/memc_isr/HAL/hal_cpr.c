/**
 * @file hal_cpr.c
 * @brief This file is for cpr register setting
 * @date Nov.18.2014
 * @version V0.0.1
 * @author Martin Yan
 * @par Copyright (C) 2014 Real-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/
#ifdef CONFIG_ARM64 //ARM32 compatible
	// for register dump
#include <tvscalercontrol/io/ioregdrv.h>
#undef rtd_outl
#define rtd_outl(x, y)     								IoReg_Write32(x,y)
#undef rtd_inl
#define rtd_inl(x)     									IoReg_Read32(x)
#undef rtd_maskl
#define rtd_maskl(x, y, z)     							IoReg_Mask32(x,y,z)
#undef rtd_setbits
#define rtd_setbits(offset, Mask) rtd_outl(offset, (rtd_inl(offset) | Mask))
#undef rtd_clearbits
#define rtd_clearbits(offset, Mask) rtd_outl(offset, ((rtd_inl(offset) & ~(Mask))))
#endif

#include "memc_isr/Common/kw_debug.h"
#include "memc_isr/Common/kw_common.h"
#include "memc_isr/Driver/regio.h"
#include "memc_isr/PQL/PQLPlatformDefs.h"

extern unsigned char MEMC_Lib_get_INPUT_COLOR_SPACE_Mode(VOID);


/**
 * @brief This function set cpr h/v active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_CPR_SetActive(UINT32 u32Hactive, UINT32 u32Vactive)
{
	//reg_hact
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_hact),u32Hactive);	// 2 port
	//reg_vact
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_vact),u32Vactive);	// hf/lf row count
}

/**
 * @brief This function set encode 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_CPR_SetEncode3DEnable(BOOL bEnable)
{
	//reg_enc_3d_mode
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_enc_3d_mode),(UINT32)bEnable); 
}

/**
 * @brief This function set encode 3d mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_CPR_SetEncode3DMode(UINT32 u32Mode)
{
	//reg_enc_3d_format
 	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_enc_3d_format),u32Mode);
}

/**
 * @brief This function set decode 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_CPR_SetDecode3DEnable(BOOL bEnable)
{
	//reg_dec_3d_mode
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_dec_3d_mode),(UINT32)bEnable); 
}

/**
 * @brief This function set decode 3d mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_CPR_SetDecode3DMode(UINT32 u32Mode)
{
	//dec_3d_format
 	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_dec_3d_format),u32Mode);
}

/**
 * @brief This function set 422 enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_CPR_Set422Enable(BOOL bEnable)
{
	//reg_422_mode
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_422_mode),(UINT32)bEnable); 
}

/**
 * @brief This function set 444 enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/

extern int RHAL_TP_IsJapan4K(void);
extern int RHAL_TP_IsATSC30(void);
extern unsigned char MEMC_Lib_Get_JP_DTV_4K_flag(void);
extern VOID MEMC_LibSet_PQC_DB_apply(void);
VOID HAL_CPR_Set444Enable(BOOL bEnable)//modify from merlin4, using RTK pqc
{

	if(bEnable){		
		//rtd_maskl(0xb8099204,0xfffffffc,0x00000000); //444(bit:0)
		//rtd_maskl(0xb8099284,0xfffffffc,0x00000000); //444(bit:0)
		//rtd_maskl(0xb8099804,0xfffffffc,0x00000000); //444(bit:0)
		//rtd_maskl(0xb8099884,0xfffffffc,0x00000000); //444(bit:0)

		if(MEMC_Lib_get_INPUT_COLOR_SPACE_Mode()== 1){ //I3DDMA_COLOR_SPACE_T
			rtd_clearbits(0xb8099204, 0x11); //cmp_data_color(bit:0 & 4)
			rtd_clearbits(0xb8099284, 0x11); //cmp_data_color(bit:0 & 4)
			rtd_clearbits(0xb8099804, 0x11); //cmp_data_color(bit:0 & 4)
			rtd_clearbits(0xb8099884, 0x11); //cmp_data_color(bit:0 & 4)
			
			rtd_maskl(0xb809920c,0xffffff7f,0x00000000); //first_line(bit:7)
			rtd_maskl(0xb809928c,0xffffff7f,0x00000000); //first_line(bit:7)
			
			rtd_maskl(0xb809920c,0xffffffcf,0x00000010); //444(bit:4~5)
			rtd_maskl(0xb809928c,0xffffffcf,0x00000010); //444(bit:4~5)
			
			rtd_maskl(0xb809920c,0xff00ffff,0x000e0000); //gratio(bit:16~20)
			rtd_maskl(0xb809928c,0xff00ffff,0x000e0000); //gratio(bit:16~20)
			
			rtd_maskl(0xb8099214,0x0000ffff,0x100d0000); //gratiomaxmin (bit:16~20, 24~28)
			rtd_maskl(0xb8099294,0x0000ffff,0x100d0000); //gratiomaxmin (bit:16~20, 24~28)

			
		}else{	
			rtd_clearbits(0xb8099204, 0x11); //cmp_data_color(bit:0 & 4)
			rtd_clearbits(0xb8099284, 0x11); //cmp_data_color(bit:0 & 4)
			rtd_clearbits(0xb8099804, 0x11); //cmp_data_color(bit:0 & 4)
			rtd_clearbits(0xb8099884, 0x11); //cmp_data_color(bit:0 & 4)

			rtd_maskl(0xb809920c,0xffffff7f,0x00000000); //first_line(bit:7)
			rtd_maskl(0xb809928c,0xffffff7f,0x00000000); //first_line(bit:7)

			rtd_maskl(0xb809920c,0xffffffcf,0x00000020); //444(bit:4~5)
			rtd_maskl(0xb809928c,0xffffffcf,0x00000020); //444(bit:4~5)

			rtd_maskl(0xb809920c,0xff00ffff,0x000c0000); //gratio(bit:16~20)
			rtd_maskl(0xb809928c,0xff00ffff,0x000c0000); //gratio(bit:16~20)

			rtd_maskl(0xb8099214,0x0000ffff,0x0d090000); //gratiomaxmin (bit:16~20, 24~28)
			rtd_maskl(0xb8099294,0x0000ffff,0x0d090000); //gratiomaxmin (bit:16~20, 24~28)
		}
		rtd_maskl(0xb8099218,0xffffff00,0x00000003); //LF_PQ_CMP_POOR
		rtd_maskl(0xb8099218,0xffff00ff,0x00000600); //LF_PQ_CMP_POOR
		rtd_maskl(0xb8099218,0xff00ffff,0x000c0000); //LF_PQ_CMP_POOR

		//== org setting===
		//rtd_maskl(0xb8099208,0xffff0000,0x00001412); //flb (bit:0~5, 8~13)
		//rtd_maskl(0xb8099288,0xffff0000,0x00001614); //flb (bit:0~5, 8~13)
		//== new setting  for BW saving==
		//rtd_maskl(0xb8099208,0xffff0000,0x0000100e); //flb (bit:0~5, 8~13)
		//rtd_maskl(0xb8099288,0xffff0000,0x0000110f); //flb (bit:0~5, 8~13)
		rtd_maskl(0xb8099208,0xffff0000,0x00001a14); //flb (bit:0~5, 8~13)
		rtd_maskl(0xb8099288,0xffff0000,0x00001610); //flb (bit:0~5, 8~13)


		//DB apply
		//WriteRegister(FRC_TOP__pqc_pqdc__CMP_DB_APPLY_ADDR, FRC_TOP__pqc_pqdc__CMP_DB_APPLY_BITSTART, FRC_TOP__pqc_pqdc__CMP_DB_APPLY_BITEND, 1);
		MEMC_LibSet_PQC_DB_apply();
		
	}
	else//Not 444, but 420 or 422
	{
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_data_format_sel_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_format_sel_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_format_sel_BITEND, 1);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_qp_mode_sel_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_qp_mode_sel_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_qp_mode_sel_BITEND, 1);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_data_bit_width_sel_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_bit_width_sel_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_bit_width_sel_BITEND, 1);

		//DB enable
		//WriteRegister(FRC_TOP__pqc_pqdc__CMP_DB_EN_ADDR, FRC_TOP__pqc_pqdc__CMP_DB_EN_BITSTART, FRC_TOP__pqc_pqdc__CMP_DB_EN_BITEND, 1);

		rtd_setbits(0xb8099204, 0x11); //cmp_data_color(bit:0 & 4)
		rtd_setbits(0xb8099284, 0x11); //cmp_data_color(bit:0 & 4)
		rtd_setbits(0xb8099804, 0x11); //cmp_data_color(bit:0 & 4)
		#if IC_K6LP
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_data_format_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_format_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_format_BITEND, 1);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_data_color_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_color_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_data_color_BITEND, 1);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_dic_mode_en_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_dic_mode_en_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_dic_mode_en_BITEND, 1);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_HF_decmp_jump4_en_ADDR, FRC_TOP__pqc_pqdc__MC_HF_decmp_jump4_en_BITSTART, FRC_TOP__pqc_pqdc__MC_HF_decmp_jump4_en_BITEND, 1);
		#else
		rtd_setbits(0xb8099884, 0x11); //cmp_data_color(bit:0 & 4)
		#endif

		rtd_maskl(0xb809920c,0xffffff7f,0x00000080); //first_line(bit:7)
		rtd_maskl(0xb809928c,0xffffff7f,0x00000080); //first_line(bit:7)

		rtd_maskl(0xb809920c,0xffffffcf,0x00000000); //444(bit:4~5)
		rtd_maskl(0xb809928c,0xffffffcf,0x00000000); //444(bit:4~5)

		rtd_maskl(0xb809920c,0xff00ffff,0x00100000); //gratio(bit:16~20)
		rtd_maskl(0xb809928c,0xff00ffff,0x00100000); //gratio(bit:16~20)

		#if IC_K6LP
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp1_ADDR, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp1_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp1_BITEND, 3);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp2_ADDR, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp2_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp2_BITEND, 12);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp3_ADDR, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp3_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp3_BITEND, 6);
		WriteRegister(FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp4_ADDR, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp4_BITSTART, FRC_TOP__pqc_pqdc__MC_LF_poor_limit_th_qp4_BITEND, 20);
		#else
		rtd_maskl(0xb8099218,0xffffff00,0x00000002); //LF_PQ_CMP_POOR
		rtd_maskl(0xb8099218,0xffff00ff,0x00000300); //LF_PQ_CMP_POOR
		rtd_maskl(0xb8099218,0xff00ffff,0x00040000); //LF_PQ_CMP_POOR
		#endif
		rtd_maskl(0xb8099214,0x0000ffff,0x100d0000); //gratiomaxmin (bit:16~20, 24~28)
		rtd_maskl(0xb8099294,0x0000ffff,0x100d0000); //gratiomaxmin (bit:16~20, 24~28)


		if(MEMC_Lib_Get_JP_DTV_4K_flag())// PQC 8 bit
		{
			rtd_maskl(0xb8099208,0xffff0000,0x00000c09); //flb (bit:0~5, 8~13)
			rtd_maskl(0xb8099288,0xffff0000,0x00000906); //flb (bit:0~5, 8~13)		
		}
		else// PQC 10 bit
		{
			rtd_maskl(0xb8099208,0xffff0000,0x00000e09); //flb (bit:0~5, 8~13)
			rtd_maskl(0xb8099288,0xffff0000,0x00000e0a); //flb (bit:0~5, 8~13)
		}
		//DB apply
		//WriteRegister(FRC_TOP__pqc_pqdc__CMP_DB_APPLY_ADDR, FRC_TOP__pqc_pqdc__CMP_DB_APPLY_BITSTART, FRC_TOP__pqc_pqdc__CMP_DB_APPLY_BITEND, 1);
		MEMC_LibSet_PQC_DB_apply();
		
		//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "HAL_CPR_Set444Enable, rtd_inl(0xb801a618) = %x, RHAL_TP_IsJapan4K() = %d, RHAL_TP_IsATSC30() = %d\n",rtd_inl(0xb801a618),RHAL_TP_IsJapan4K(), RHAL_TP_IsATSC30());
	}	
	//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "HAL_CPR_Set444Enable, decmp_data_format = %d\n",(rtd_inl(0xb8099884)&0x3));

}


/**
 * @brief This function set budget packet
 * @param [in] UINT32 u32Budget_Packet
 * @retval VOID
*/
VOID HAL_CPR_SetBudgetPacket(UINT32 u32Budget_Packet_Lf, UINT32 u32Budget_Packet_Hf)
{
	//reg_lf_budget_packet
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_lf_budget_packet),u32Budget_Packet_Lf);	
	//reg_hf_budget_packet
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_hf_budget_packet),u32Budget_Packet_Hf);		
}


/**
 * @brief This function set last line enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_CPR_SetLastLineEnable(BOOL bEnable)
{
	//reg_lastline_en
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_lastline_en),(UINT32)bEnable);	
}

/**
 * @brief This function set LR inverse
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_CPR_SetLRInverse(BOOL bEnable)
{
	//reg_lr_inv
	//WriteRegister(KIWI_REG(FRC_TOP__KMC_CPR_TOP0__reg_lr_inv),(UINT32)bEnable);	
}

