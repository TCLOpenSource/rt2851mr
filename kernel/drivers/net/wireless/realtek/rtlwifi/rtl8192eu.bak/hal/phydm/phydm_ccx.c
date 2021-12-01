/******************************************************************************
 *
 * Copyright(c) 2007 - 2017  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/

#include "mp_precomp.h"
#include "phydm_precomp.h"

#ifdef FAHM_SUPPORT

u16
phydm_hw_divider(
	void	*dm_void,
	u16	numerator,
	u16	denumerator
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	u16	result = DEVIDER_ERROR;
	u32	tmp_u32 = ((numerator << 16) | denumerator);
	u32	reg_devider_input;
	u32	reg_devider_rpt;
	u8	i;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		reg_devider_input =  0x1cbc;
		reg_devider_rpt = 0x1f98;
	} else {
		reg_devider_input =  0x980;
		reg_devider_rpt = 0x9f0;
	}

	odm_set_bb_reg(dm, reg_devider_input, MASKDWORD, tmp_u32);

	for (i = 0; i < 10; i++) {
		ODM_delay_ms(1);
		if (odm_get_bb_reg(dm, reg_devider_rpt, BIT(24))) { /*Chk HW rpt is ready*/
			
			result = (u16)odm_get_bb_reg(dm, reg_devider_rpt, MASKBYTE2);
			break;
		}
	}
	return	result;
}

void
phydm_fahm_trigger(
	void		*dm_void,
	u16		trigger_period	/*unit (4us)*/
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;
	u32		fahm_reg1;
	u32		fahm_reg2;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		odm_set_bb_reg(dm, 0x1cf8, 0xffff00, trigger_period);
		
		fahm_reg1 =  0x994;
	} else {
	
		odm_set_bb_reg(dm, 0x978, 0xff000000, (trigger_period & 0xff));		
		odm_set_bb_reg(dm, 0x97c, 0xff, (trigger_period & 0xff00)>>8);
		
		fahm_reg1 =  0x890;
	}

	odm_set_bb_reg(dm, fahm_reg1, BIT(2), 0);
	odm_set_bb_reg(dm, fahm_reg1, BIT(2), 1);
}

void
phydm_fahm_set_valid_cnt(
	void		*dm_void,
	u8		numerator_sel,
	u8		denumerator_sel
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;
	u32		fahm_reg1;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if ((ccx_info->fahm_nume_sel == numerator_sel) && 
		(ccx_info->fahm_denum_sel == denumerator_sel)) {
		PHYDM_DBG(dm, DBG_ENV_MNTR, "no need to update\n");
		return;
	}

	ccx_info->fahm_nume_sel = numerator_sel;
	ccx_info->fahm_denum_sel = denumerator_sel;
	
	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		fahm_reg1 =  0x994;
	} else {
		fahm_reg1 =  0x890;
	}

	odm_set_bb_reg(dm, fahm_reg1, 0xe0, numerator_sel);
	odm_set_bb_reg(dm, fahm_reg1, 0x7000, denumerator_sel);
}

void
phydm_fahm_get_result(
	void		*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;
	u16		fahm_rpt_cnt[12];	/*packet count*/
	u16		fahm_rpt[12];		/*percentage*/
	u16		fahm_denumerator;	/*packet count*/
	u32		reg_rpt, reg_rpt_2;
	u32		reg_val_tmp;
	boolean	is_ready = false;
	u8		i;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);
	
	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		reg_rpt =  0x1f80;
		reg_rpt_2 = 0x1f98;
	} else {
		reg_rpt =  0x9d8;
		reg_rpt_2 = 0x9f0;
	}

	for (i = 0; i < 3; i++) {
		
		if (odm_get_bb_reg(dm, reg_rpt_2, BIT(31))) { /*Chk HW rpt is ready*/
			
			is_ready = true;
			break;
		}
		ODM_delay_ms(1);
	}

	if (is_ready == false)
		return;

	/*Get Denumerator*/
	fahm_denumerator = (u16)odm_get_bb_reg(dm, reg_rpt_2, MASKLWORD);

	PHYDM_DBG(dm, DBG_ENV_MNTR, "Reg[0x%x] fahm_denmrtr = %d\n", reg_rpt_2, fahm_denumerator);
	

	/*Get nemerator*/
	for (i = 0; i<6; i++) {
		reg_val_tmp = odm_get_bb_reg(dm, reg_rpt + (i<<2), MASKDWORD);
		
		PHYDM_DBG(dm, DBG_ENV_MNTR, "Reg[0x%x] fahm_denmrtr = %d\n", reg_rpt + (i*4), reg_val_tmp);
		
		fahm_rpt_cnt[i*2] = (u16)(reg_val_tmp & MASKLWORD);
		fahm_rpt_cnt[i*2 +1] = (u16)((reg_val_tmp & MASKHWORD)>>16);
	}

	for (i = 0; i<12; i++) {
		fahm_rpt[i] = phydm_hw_divider(dm, fahm_rpt_cnt[i], fahm_denumerator);
	}

	PHYDM_DBG(dm, DBG_ENV_MNTR,
		  "FAHM_RPT_cnt[10:0]=[%d, %d, %d, %d, %d(IGI), %d, %d, %d, %d, %d, %d, %d]\n",
		  fahm_rpt_cnt[11], fahm_rpt_cnt[10], fahm_rpt_cnt[9],
		  fahm_rpt_cnt[8], fahm_rpt_cnt[7], fahm_rpt_cnt[6], 
		  fahm_rpt_cnt[5], fahm_rpt_cnt[4], fahm_rpt_cnt[3],
		  fahm_rpt_cnt[2], fahm_rpt_cnt[1], fahm_rpt_cnt[0]);

	PHYDM_DBG(dm, DBG_ENV_MNTR,
		  "FAHM_RPT[10:0]=[%d, %d, %d, %d, %d(IGI), %d, %d, %d, %d, %d, %d, %d]\n",
		  fahm_rpt[11], fahm_rpt[10], fahm_rpt[9], fahm_rpt[8],
		  fahm_rpt[7], fahm_rpt[6], 
		  fahm_rpt[5], fahm_rpt[4], fahm_rpt[3], fahm_rpt[2],
		  fahm_rpt[1], fahm_rpt[0]);
	
}

void
phydm_fahm_set_th_by_igi(
	void		*dm_void,
	u8		igi
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;
	u8	fahm_th[11];
	u8	rssi_th[11];	/*in RSSI scale*/
	u8	th_gap = 2 * IGI_TO_NHM_TH_MULTIPLIER;	/*beacuse unit is 0.5dB for FAHM*/
	u8	i;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if (ccx_info->env_mntr_igi == igi) {
		PHYDM_DBG(dm, DBG_ENV_MNTR, "No need to update FAHM_th, IGI=0x%x\n", ccx_info->env_mntr_igi);
		return;
	}

	ccx_info->env_mntr_igi = igi;	/*bkp IGI*/

	if (igi >= CCA_CAP) 
		fahm_th[0] = (igi - CCA_CAP) * IGI_TO_NHM_TH_MULTIPLIER;
	else
		fahm_th[0] = 0;
	
	rssi_th[0] = igi -10 - CCA_CAP;
	
	for (i = 1; i <= 10; i++) {
		fahm_th[i] = fahm_th[0] + th_gap * i;
		rssi_th[i] = rssi_th[0] +  (i<<1);
	}

	PHYDM_DBG(dm, DBG_ENV_MNTR,
		  "FAHM_RSSI_th[10:0]=[%d, %d, %d, (IGI)%d, %d, %d, %d, %d, %d, %d, %d]\n",
		  rssi_th[10], rssi_th[9], rssi_th[8], rssi_th[7], rssi_th[6],
		  rssi_th[5], rssi_th[4], rssi_th[3], rssi_th[2], rssi_th[1],
		  rssi_th[0]);

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		
		odm_set_bb_reg(dm, 0x1c38, 0xffffff00, ((fahm_th[2]<<24) |(fahm_th[1]<<16) | (fahm_th[0]<<8)));
		odm_set_bb_reg(dm, 0x1c78, 0xffffff00, ((fahm_th[5]<<24) |(fahm_th[4]<<16) | (fahm_th[3]<<8)));
		odm_set_bb_reg(dm, 0x1c7c, 0xffffff00, ((fahm_th[7]<<24) |(fahm_th[6]<<16)));
		odm_set_bb_reg(dm, 0x1cb8, 0xffffff00, ((fahm_th[10]<<24) |(fahm_th[9]<<16) | (fahm_th[8]<<8)));
	} else {
		odm_set_bb_reg(dm, 0x970, MASKDWORD, ((fahm_th[3]<<24) |(fahm_th[2]<<16) | (fahm_th[1]<<8) | fahm_th[0]));
		odm_set_bb_reg(dm, 0x974, MASKDWORD, ((fahm_th[7]<<24) |(fahm_th[6]<<16) | (fahm_th[5]<<8) | fahm_th[4]));
		odm_set_bb_reg(dm, 0x978, MASKDWORD, ((fahm_th[10]<<16) | (fahm_th[9]<<8) | fahm_th[8]));
	}	
}

void
phydm_fahm_init(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;
	u32	fahm_reg1;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);
	PHYDM_DBG(dm, DBG_ENV_MNTR, "IGI=0x%x\n", dm->dm_dig_table.cur_ig_value);

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		fahm_reg1 =  0x994;
	} else {
		fahm_reg1 =  0x890;
	}

	ccx_info->fahm_period = 65535;
	
	odm_set_bb_reg(dm, fahm_reg1, 0x6, 3);	/*FAHM HW block enable*/
	
	phydm_fahm_set_valid_cnt(dm, FAHM_INCLD_FA, (FAHM_INCLD_FA| FAHM_INCLD_CRC_OK |FAHM_INCLD_CRC_ER));
	phydm_fahm_set_th_by_igi(dm, dm->dm_dig_table.cur_ig_value);
}

void
phydm_fahm_dbg(
	void		*dm_void,
	char		input[][16],
	u32		*_used,
	char		*output,
	u32		*_out_len,
	u32		input_num
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info	*ccx_info = &dm->dm_ccx_info;
	char		help[] = "-h";
	u32		var1[10] = {0};
	u32		used = *_used;
	u32		out_len = *_out_len;
	u32		i;

	for (i = 0; i < 2; i++) {
		if (input[i + 1]) {
			PHYDM_SSCANF(input[i + 1], DCMD_DECIMAL, &var1[i]);
		}
	}

	if ((strcmp(input[1], help) == 0)) {
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "{1: trigger, 2:get result}\n");
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "{3: MNTR mode sel} {1: driver, 2. FW}\n");
		return;
	} else if (var1[0] == 1) { /* Set & trigger CLM */
		
		phydm_fahm_set_th_by_igi(dm, dm->dm_dig_table.cur_ig_value);
		phydm_fahm_trigger(dm, ccx_info->fahm_period);
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "Monitor FAHM for %d * 4us\n",
			       ccx_info->fahm_period);
		
	} else if (var1[0] == 2) { /* Get CLM results */

		phydm_fahm_get_result(dm);
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "FAHM_result=%d us\n",
			       (ccx_info->clm_result<<2));

	} /*else if (var1[0] == 3) {
		if (var1[1] == 1)
			ccx_info->clm_mntr_mode = CLM_DRIVER_MNTR;
		else if (var1[1] == 2)
			ccx_info->clm_mntr_mode = CLM_FW_MNTR;

	}*/ else {
		
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "Error\n");
	}
	
	*_used = used;
	*_out_len = out_len;
}


#endif /*#ifdef FAHM_SUPPORT*/

#ifdef NHM_SUPPORT

boolean
phydm_nhm_check_rdy(
	void		*dm_void
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;
	boolean	is_ready = false;
	u32		reg1 = 0, reg1_bit = 0;
	u8		i;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		reg1 =  0xfb4;
		reg1_bit = 16;
	} else {
		reg1 =  0x8b4;
		if (dm->support_ic_type == ODM_RTL8710B) {
			reg1_bit = 25;	
		} else {
			reg1_bit = 17;
		}
	}

	for (i = 0; i < 3; i++) {
		if (odm_get_bb_reg(dm, reg1, BIT(reg1_bit))) { /*Chk HW rpt is ready*/
			is_ready = true;
			break;
		}
		ODM_delay_ms(1);
	}
	
	PHYDM_DBG(dm, DBG_ENV_MNTR, "NHM rdy=%d\n", is_ready);
	return is_ready;
}

boolean
phydm_nhm_get_result(
	void		*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx = &dm->dm_ccx_info;
	u32			value32;
	u8			i;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if (phydm_nhm_check_rdy(dm) == false) {
		PHYDM_DBG(dm, DBG_ENV_MNTR, "Get NHM report Fail\n");
		return false;
	}
		
	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		value32 = odm_read_4byte(dm, 0xfa8);
		odm_move_memory(dm, &ccx->nhm_result[0], &value32, 32);

		value32 = odm_read_4byte(dm, 0xfac);
		odm_move_memory(dm, &ccx->nhm_result[4], &value32, 32);

		value32 = odm_read_4byte(dm, 0xfb0);
		odm_move_memory(dm, &ccx->nhm_result[8], &value32, 32);

		/*Get NHM duration*/
		value32 = odm_read_4byte(dm, 0xfb4);
		ccx->nhm_duration = (u16)(value32 & MASKLWORD);
	} else {
		value32 = odm_read_4byte(dm, 0x8d8);
		odm_move_memory(dm, &ccx->nhm_result[0], &value32, 32);

		value32 = odm_read_4byte(dm, 0x8dc);
		odm_move_memory(dm, &ccx->nhm_result[4], &value32, 32);

		value32 = odm_get_bb_reg(dm, 0x8d0, 0xffff0000);
		odm_move_memory(dm, &ccx->nhm_result[8], &value32, 16);

		value32 = odm_read_4byte(dm, 0x8d4);
		odm_move_memory(dm, &ccx->nhm_result[10], (&value32 +16),
				16);
		
		/*Get NHM duration*/
		ccx->nhm_duration = (u16)(value32 & MASKLWORD);
	}

	/* sum all nhm_result */
	ccx->nhm_result_total = 0;
	for (i = 0; i < NHM_RPT_NUM; i++)
		ccx->nhm_result_total += ccx->nhm_result[i];

	PHYDM_DBG(dm, DBG_ENV_MNTR, "NHM_Rpt=(H->L)[%d %d %d %d (igi) %d %d %d %d %d %d %d %d]\n",
		ccx->nhm_result[11], ccx->nhm_result[10], ccx->nhm_result[9],
		ccx->nhm_result[8], ccx->nhm_result[7], ccx->nhm_result[6],
		ccx->nhm_result[5], ccx->nhm_result[4], ccx->nhm_result[3],
		ccx->nhm_result[2], ccx->nhm_result[1], ccx->nhm_result[0]);

	return true;
}

void
phydm_nhm_set_th_reg(
	void		*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info	*ccx = &dm->dm_ccx_info;
	u32	reg1 = 0,  reg2 = 0, reg3 = 0, reg4 = 0;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);
	
	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		reg1 = 0x994;
		reg2 = 0x998;
		reg3 = 0x99c;
		reg4 = 0x9a0;
	} else {
		reg1 = 0x890;
		reg2 = 0x898;
		reg3 = 0x89c;
		reg4 = 0xe28;
	}
	
	/*Set NHM threshold*/ /*Unit: PWdB U(8,1)*/
	pdm_set_reg(dm, reg2, MASKDWORD, BYTE_2_DWORD(ccx->nhm_th[3], ccx->nhm_th[2], ccx->nhm_th[1], ccx->nhm_th[0]));
	pdm_set_reg(dm, reg3, MASKDWORD, BYTE_2_DWORD(ccx->nhm_th[7], ccx->nhm_th[6], ccx->nhm_th[5], ccx->nhm_th[4]));
	pdm_set_reg(dm, reg4, MASKBYTE0, ccx->nhm_th[8]);
	pdm_set_reg(dm, reg1, 0xffff00, BYTE_2_DWORD(0, 0, ccx->nhm_th[10], ccx->nhm_th[9]));

	PHYDM_DBG(dm, DBG_ENV_MNTR, "Update NHM_th[H->L]=[%d %d %d %d %d %d %d %d %d %d %d]\n",
	ccx->nhm_th[10], ccx->nhm_th[9], ccx->nhm_th[8],ccx->nhm_th[7], 
	ccx->nhm_th[6], ccx->nhm_th[5],ccx->nhm_th[4], ccx->nhm_th[3], 
	ccx->nhm_th[2], ccx->nhm_th[1], ccx->nhm_th[0]);
}

boolean
phydm_nhm_th_update_chk(
	void		*dm_void,
	enum nhm_threshold_rule	th_rule
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx = &dm->dm_ccx_info;
	boolean	need_update = true;
	u8	nhm_th_11k_low[NHM_TH_NUM] = {0x2c, 0x2c, 0x2c, 0x2c, 0x28, 0x23, 0x1e, 0x1b, 0x18, 0x15, 0x12};
	u8	nhm_th_11k_high[NHM_TH_NUM] = {0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x32, 0x2d, 0x28, 0x23, 0x1e};
	u8	pause_igi_result = false;
	u8	val_length = 1;
	u32	igi_val = 0x2c;
	u8	i;

	if (th_rule == IGI_UNIFORM_2DB) {
		if ((ccx->echo_igi == dm->dm_dig_table.cur_ig_value) && 
			(ccx->th_rule == IGI_UNIFORM_2DB)) {
			need_update = false;
		} else {
			ccx->echo_igi = dm->dm_dig_table.cur_ig_value;
			ccx->nhm_th[0] = IGI_2_NHM_TH((u16)ccx->echo_igi - CCA_CAP);
			
			for (i = 1; i < NHM_TH_NUM; i++)
				ccx->nhm_th[i] = ccx->nhm_th[0] + IGI_2_NHM_TH(2) * i;
		}
	} else if (th_rule == IEEE_11K_HIGH) {
		igi_val = 0x2c;
		pause_igi_result = phydm_pause_func(dm, F00_DIG, PHYDM_PAUSE, PHYDM_PAUSE_LEVEL_1, val_length, &igi_val);
		
		if (pause_igi_result) {
			for (i = 0; i < NHM_TH_NUM; i++)
				ccx->nhm_th[i] = IGI_2_NHM_TH(nhm_th_11k_high[i]);
		} else {
			need_update = false;
		}
	} else if (th_rule == IEEE_11K_LOW) {
		igi_val = 0x20;
		pause_igi_result = phydm_pause_func(dm, F00_DIG, PHYDM_PAUSE, PHYDM_PAUSE_LEVEL_1, val_length, &igi_val);
		
		if (pause_igi_result) {
			for (i = 0; i < NHM_TH_NUM; i++)
				ccx->nhm_th[i] = IGI_2_NHM_TH(nhm_th_11k_low[i]);
		} else {
			need_update = false;
		}
	} else if (th_rule == INTEL_XBOX) {
		if (ccx->th_rule == INTEL_XBOX) {
			need_update = false;
			/**/
		}
	}
	ccx->th_rule = th_rule;

	return need_update;
}

void
phydm_nhm_set_para(
	void		*dm_void,
	enum nhm_inexclude_txon	ignore_tx,
	enum nhm_inexclude_cca	ignore_cca,
	enum nhm_threshold_rule	th_rule,
	u16		period
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info	*ccx = &dm->dm_ccx_info;
	u32	reg1 = 0, reg2 = 0;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);
	
	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		reg1 = 0x994;
		reg2 = 0x990;
	} else {
		reg1 = 0x890;
		reg2 = 0x894;
	}

	/*Set disable_ignore_cca, disable_ignore_txon, ccx_en*/
	if ((ignore_tx != ccx->nhm_inexclude_txon) || (ignore_cca != ccx->nhm_inexclude_cca)) {
		PHYDM_DBG(dm, DBG_ENV_MNTR, "ignore{tx, cca}={%d, %d}\n", ignore_tx, ignore_cca);
		pdm_set_reg(dm, reg1, 0x700, BIT_2_BYTE(0, ignore_tx, ignore_cca, 1));

		ccx->nhm_inexclude_txon = ignore_tx;
		ccx->nhm_inexclude_cca = ignore_cca;
	}
	
	/*Set NHM period*/
	if (period != ccx->nhm_period) {
		pdm_set_reg(dm, reg2, MASKHWORD, period);
		ccx->nhm_period = period;
	}

	if (phydm_nhm_th_update_chk(dm, th_rule)) {
		phydm_nhm_set_th_reg(dm);
	}
}

u8
phydm_nhm_monitor(
	void			*dm_void,
	enum nhm_threshold_rule	th_rule,	
	u16			monitor_time,		/*unit ms*/
	enum phydm_nhm_level nhm_lv
)
{
	u8			nhm_th[11], i, igi;
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;
	u16 	nhm_time = 0;	/*unit: 4us*/

	if (!(dm->support_ability & ODM_BB_ENV_MONITOR))
		return PHYDM_SET_FAIL;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if (monitor_time == 0)
		return PHYDM_SET_FAIL;

	if (nhm_lv >= NHM_MAX_NUM) {
		PHYDM_DBG(dm, DBG_ENV_MNTR, "[WARNING] Wrong LV=%d\n", nhm_lv);
		return PHYDM_SET_FAIL;
	}

	if (ccx_info->nhm_ongoing) {
		if (nhm_lv <= ccx_info->nhm_set_lv)
			return PHYDM_SET_FAIL;
	}
	
	ccx_info->nhm_set_lv = nhm_lv;
	
	if (monitor_time >= 262)
		nhm_time = 65534;
	else
		nhm_time = monitor_time * MS_TO_4US_RATIO;

	phydm_nhm_set_para(dm, NHM_EXCLUDE_TXON, NHM_EXCLUDE_CCA, th_rule, nhm_time);
	phydm_nhm_trigger(dm);

	return PHYDM_SET_SUCCESS;
}

#endif	/*#ifdef NHM_SUPPORT*/

#if 1

boolean
phydm_cal_nhm_cnt(
	void		*dm_void
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;
	u8						noisy_nhm_th_index, low_pwr_cnt = 0, high_pwr_cnt = 0;
	u8						noisy_nhm_th = 0x52;
	u8						i;
	boolean					noisy = false, clean = true;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if (!(dm->support_ability & ODM_BB_ENV_MONITOR))
		return noisy;

	/*nhm_th = 0x52 means 0x52/2-110 = -69dbm*/
	/* IGI < 0x14 */
	if (ccx_info->nhm_th[10] < noisy_nhm_th)
		return	clean;
	else if (ccx_info->nhm_th[0] > noisy_nhm_th)
		return	(dm->noisy_decision) ? noisy : clean;
	/* 0x14 <= IGI <= 0x37*/
	else {
		/* search index */
		noisy_nhm_th_index = (noisy_nhm_th - ccx_info->nhm_th[0]) << 2;

		for (i = 0; i <= 11; i++) {
			if (i <= noisy_nhm_th_index)
				low_pwr_cnt += ccx_info->nhm_result[i];
			else
				high_pwr_cnt += ccx_info->nhm_result[i];
		}

		if (low_pwr_cnt + high_pwr_cnt == 0)
			return noisy;		/* noisy environment */
		else if (low_pwr_cnt - high_pwr_cnt >= 100)
			return clean;		/* clean environment */
		else
			return noisy;		/* noisy environment */
	}
}

void
phydm_set_nhm_th_by_igi(
	void			*dm_void,
	u8				igi
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;
	u8	th_gap = 2 * IGI_TO_NHM_TH_MULTIPLIER;
	u8	i;

	ccx_info->echo_igi = igi;
	ccx_info->nhm_th[0] = (ccx_info->echo_igi - CCA_CAP) * IGI_TO_NHM_TH_MULTIPLIER;
	for (i = 1; i <= 10; i++)
		ccx_info->nhm_th[i] = ccx_info->nhm_th[0] + th_gap * i;
}



void
phydm_nhm_setting(
	void		*dm_void,
	u8	nhm_setting
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info	*ccx_info = &dm->dm_ccx_info;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	
	PHYDM_DBG(dm, DBG_ENV_MNTR, "IGI=0x%x\n", ccx_info->echo_igi);
	
	if (nhm_setting == SET_NHM_SETTING) {
		PHYDM_DBG(dm, DBG_ENV_MNTR,
		"NHM_th[H->L]=[0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x]\n",
		ccx_info->nhm_th[10], ccx_info->nhm_th[9], ccx_info->nhm_th[8],
		ccx_info->nhm_th[7], ccx_info->nhm_th[6], ccx_info->nhm_th[5],
		ccx_info->nhm_th[4], ccx_info->nhm_th[3], ccx_info->nhm_th[2],
		ccx_info->nhm_th[1], ccx_info->nhm_th[0]);
	}

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		if (nhm_setting == SET_NHM_SETTING) {
			/*Set inexclude_cca, inexclude_txon*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, BIT(9), ccx_info->nhm_inexclude_cca);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, BIT(10), ccx_info->nhm_inexclude_txon);

			/*Set NHM period*/
			odm_set_bb_reg(dm, ODM_REG_CCX_PERIOD_11AC, MASKHWORD, ccx_info->nhm_period);

			/*Set NHM threshold*/ /*Unit: PWdB U(8,1)*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE0, ccx_info->nhm_th[0]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE1, ccx_info->nhm_th[1]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE2, ccx_info->nhm_th[2]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE3, ccx_info->nhm_th[3]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE0, ccx_info->nhm_th[4]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE1, ccx_info->nhm_th[5]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE2, ccx_info->nhm_th[6]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE3, ccx_info->nhm_th[7]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH8_11AC, MASKBYTE0, ccx_info->nhm_th[8]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE2, ccx_info->nhm_th[9]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE3, ccx_info->nhm_th[10]);

			/*CCX EN*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, BIT(8), CCX_EN);

		} else if (nhm_setting == STORE_NHM_SETTING) {
			/*Store pervious disable_ignore_cca, disable_ignore_txon*/
			ccx_info->nhm_inexclude_cca_restore = (enum nhm_inexclude_cca)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, BIT(9));
			ccx_info->nhm_inexclude_txon_restore = (enum nhm_inexclude_txon)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, BIT(10));

			/*Store pervious NHM period*/
			ccx_info->nhm_period_restore = (u16)odm_get_bb_reg(dm, ODM_REG_CCX_PERIOD_11AC, MASKHWORD);

			/*Store NHM threshold*/
			ccx_info->nhm_th_restore[0] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE0);
			ccx_info->nhm_th_restore[1] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE1);
			ccx_info->nhm_th_restore[2] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE2);
			ccx_info->nhm_th_restore[3] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE3);
			ccx_info->nhm_th_restore[4] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE0);
			ccx_info->nhm_th_restore[5] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE1);
			ccx_info->nhm_th_restore[6] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE2);
			ccx_info->nhm_th_restore[7] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE3);
			ccx_info->nhm_th_restore[8] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH8_11AC, MASKBYTE0);
			ccx_info->nhm_th_restore[9] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE2);
			ccx_info->nhm_th_restore[10] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE3);
		} else if (nhm_setting == RESTORE_NHM_SETTING) {
			/*Set disable_ignore_cca, disable_ignore_txon*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, BIT(9), ccx_info->nhm_inexclude_cca_restore);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, BIT(10), ccx_info->nhm_inexclude_txon_restore);

			/*Set NHM period*/
			odm_set_bb_reg(dm, ODM_REG_CCX_PERIOD_11AC, MASKHWORD, ccx_info->nhm_period);

			/*Set NHM threshold*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE0, ccx_info->nhm_th_restore[0]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE1, ccx_info->nhm_th_restore[1]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE2, ccx_info->nhm_th_restore[2]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE3, ccx_info->nhm_th_restore[3]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE0, ccx_info->nhm_th_restore[4]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE1, ccx_info->nhm_th_restore[5]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE2, ccx_info->nhm_th_restore[6]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE3, ccx_info->nhm_th_restore[7]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH8_11AC, MASKBYTE0, ccx_info->nhm_th_restore[8]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE2, ccx_info->nhm_th_restore[9]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE3, ccx_info->nhm_th_restore[10]);
		} else
			return;
	}

	else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		if (nhm_setting == SET_NHM_SETTING) {
			/*Set disable_ignore_cca, disable_ignore_txon*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, BIT(9), ccx_info->nhm_inexclude_cca);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, BIT(10), ccx_info->nhm_inexclude_txon);

			/*Set NHM period*/
			odm_set_bb_reg(dm, ODM_REG_CCX_PERIOD_11N, MASKHWORD, ccx_info->nhm_period);

			/*Set NHM threshold*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE0, ccx_info->nhm_th[0]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE1, ccx_info->nhm_th[1]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE2, ccx_info->nhm_th[2]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE3, ccx_info->nhm_th[3]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE0, ccx_info->nhm_th[4]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE1, ccx_info->nhm_th[5]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE2, ccx_info->nhm_th[6]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE3, ccx_info->nhm_th[7]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH8_11N, MASKBYTE0, ccx_info->nhm_th[8]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE2, ccx_info->nhm_th[9]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE3, ccx_info->nhm_th[10]);

			/*CCX EN*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, BIT(8), CCX_EN);
		} else if (nhm_setting == STORE_NHM_SETTING) {
			/*Store pervious disable_ignore_cca, disable_ignore_txon*/
			ccx_info->nhm_inexclude_cca_restore = (enum nhm_inexclude_cca)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, BIT(9));
			ccx_info->nhm_inexclude_txon_restore = (enum nhm_inexclude_txon)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, BIT(10));

			/*Store pervious NHM period*/
			ccx_info->nhm_period_restore = (u16)odm_get_bb_reg(dm, ODM_REG_CCX_PERIOD_11N, MASKHWORD);

			/*Store NHM threshold*/
			ccx_info->nhm_th_restore[0] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE0);
			ccx_info->nhm_th_restore[1] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE1);
			ccx_info->nhm_th_restore[2] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE2);
			ccx_info->nhm_th_restore[3] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE3);
			ccx_info->nhm_th_restore[4] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE0);
			ccx_info->nhm_th_restore[5] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE1);
			ccx_info->nhm_th_restore[6] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE2);
			ccx_info->nhm_th_restore[7] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE3);
			ccx_info->nhm_th_restore[8] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH8_11N, MASKBYTE0);
			ccx_info->nhm_th_restore[9] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE2);
			ccx_info->nhm_th_restore[10] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE3);

		} else if (nhm_setting == RESTORE_NHM_SETTING) {
			/*Set disable_ignore_cca, disable_ignore_txon*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, BIT(9), ccx_info->nhm_inexclude_cca_restore);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, BIT(10), ccx_info->nhm_inexclude_txon_restore);

			/*Set NHM period*/
			odm_set_bb_reg(dm, ODM_REG_CCX_PERIOD_11N, MASKHWORD, ccx_info->nhm_period_restore);

			/*Set NHM threshold*/
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE0, ccx_info->nhm_th_restore[0]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE1, ccx_info->nhm_th_restore[1]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE2, ccx_info->nhm_th_restore[2]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE3, ccx_info->nhm_th_restore[3]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE0, ccx_info->nhm_th_restore[4]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE1, ccx_info->nhm_th_restore[5]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE2, ccx_info->nhm_th_restore[6]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE3, ccx_info->nhm_th_restore[7]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH8_11N, MASKBYTE0, ccx_info->nhm_th_restore[8]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE2, ccx_info->nhm_th_restore[9]);
			odm_set_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE3, ccx_info->nhm_th_restore[10]);
		} else
			return;

	}
}

void
phydm_nhm_trigger(
	void		*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;
	u32	nhm_reg1 = (dm->support_ic_type & ODM_IC_11AC_SERIES) ? 0x994 : 0x890;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);
	
	/*Trigger NHM*/
	pdm_set_reg(dm, nhm_reg1, BIT(1), 0);
	pdm_set_reg(dm, nhm_reg1, BIT(1), 1);

	ccx_info->nhm_ongoing = true;
}

void
phydm_get_nhm_result(
	void		*dm_void
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;
	u32			value32;
	u8			i;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT_11AC);
		ccx_info->nhm_result[0] = (u8)(value32 & MASKBYTE0);
		ccx_info->nhm_result[1] = (u8)((value32 & MASKBYTE1) >> 8);
		ccx_info->nhm_result[2] = (u8)((value32 & MASKBYTE2) >> 16);
		ccx_info->nhm_result[3] = (u8)((value32 & MASKBYTE3) >> 24);

		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT7_TO_CNT4_11AC);
		ccx_info->nhm_result[4] = (u8)(value32 & MASKBYTE0);
		ccx_info->nhm_result[5] = (u8)((value32 & MASKBYTE1) >> 8);
		ccx_info->nhm_result[6] = (u8)((value32 & MASKBYTE2) >> 16);
		ccx_info->nhm_result[7] = (u8)((value32 & MASKBYTE3) >> 24);

		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT11_TO_CNT8_11AC);
		ccx_info->nhm_result[8] = (u8)(value32 & MASKBYTE0);
		ccx_info->nhm_result[9] = (u8)((value32 & MASKBYTE1) >> 8);
		ccx_info->nhm_result[10] = (u8)((value32 & MASKBYTE2) >> 16);
		ccx_info->nhm_result[11] = (u8)((value32 & MASKBYTE3) >> 24);

		/*Get NHM duration*/
		value32 = odm_read_4byte(dm, ODM_REG_NHM_DUR_READY_11AC);
		ccx_info->nhm_duration = (u16)(value32 & MASKLWORD);

	}

	else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT_11N);
		ccx_info->nhm_result[0] = (u8)(value32 & MASKBYTE0);
		ccx_info->nhm_result[1] = (u8)((value32 & MASKBYTE1) >> 8);
		ccx_info->nhm_result[2] = (u8)((value32 & MASKBYTE2) >> 16);
		ccx_info->nhm_result[3] = (u8)((value32 & MASKBYTE3) >> 24);

		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT7_TO_CNT4_11N);
		ccx_info->nhm_result[4] = (u8)(value32 & MASKBYTE0);
		ccx_info->nhm_result[5] = (u8)((value32 & MASKBYTE1) >> 8);
		ccx_info->nhm_result[6] = (u8)((value32 & MASKBYTE2) >> 16);
		ccx_info->nhm_result[7] = (u8)((value32 & MASKBYTE3) >> 24);

		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT9_TO_CNT8_11N);
		ccx_info->nhm_result[8] = (u8)((value32 & MASKBYTE2) >> 16);
		ccx_info->nhm_result[9] = (u8)((value32 & MASKBYTE3) >> 24);

		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT10_TO_CNT11_11N);
		ccx_info->nhm_result[10] = (u8)((value32 & MASKBYTE2) >> 16);
		ccx_info->nhm_result[11] = (u8)((value32 & MASKBYTE3) >> 24);

		/*Get NHM duration*/
		value32 = odm_read_4byte(dm, ODM_REG_NHM_CNT10_TO_CNT11_11N);
		ccx_info->nhm_duration = (u16)(value32 & MASKLWORD);

	}

	/* sum all nhm_result */
	ccx_info->nhm_result_total = 0;
	for (i = 0; i <= 11; i++)
		ccx_info->nhm_result_total += ccx_info->nhm_result[i];

	PHYDM_DBG(dm, DBG_ENV_MNTR,
	"NHM_result=(H->L)[%d %d %d %d (igi) %d %d %d %d %d %d %d %d]\n",
		ccx_info->nhm_result[11], ccx_info->nhm_result[10], ccx_info->nhm_result[9],
		ccx_info->nhm_result[8], ccx_info->nhm_result[7], ccx_info->nhm_result[6],
		ccx_info->nhm_result[5], ccx_info->nhm_result[4], ccx_info->nhm_result[3],
		ccx_info->nhm_result[2], ccx_info->nhm_result[1], ccx_info->nhm_result[0]);

	ccx_info->nhm_ongoing = false;
	ccx_info->nhm_set_lv = NHM_RELEASE;
}

boolean
phydm_check_nhm_rdy(
	void		*dm_void
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;
	u8			i;
	boolean			is_ready = false;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		for (i = 0; i < 3; i++) {
			
			if (odm_get_bb_reg(dm, ODM_REG_NHM_DUR_READY_11AC, BIT(16))) {
				is_ready = 1;
				break;
			}
			ODM_delay_ms(1);
		}
	}

	else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		for (i = 0; i < 3; i++) {
		
			if (dm->support_ic_type == ODM_RTL8710B) {
		       	if (odm_get_bb_reg(dm, 0x8b4, BIT(25))) {
					is_ready = 1;
					break;
			      } else if (odm_get_bb_reg(dm, 0x8b4, BIT(17))) {
					is_ready = 1;
					break;
			      }
			}
			ODM_delay_ms(1);
		}
	}
	PHYDM_DBG(dm, DBG_ENV_MNTR, "NHM rdy=%d\n", is_ready);
	return is_ready;
}

void
phydm_store_nhm_setting(
	void		*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);
}

void
phydm_nhm_init(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);
	PHYDM_DBG(dm, DBG_ENV_MNTR, "cur_ig_value=0x%x\n", dm->dm_dig_table.cur_ig_value);

	phydm_set_nhm_th_by_igi(dm, dm->dm_dig_table.cur_ig_value);

	ccx_info->nhm_period = 64000;
	ccx_info->nhm_inexclude_cca = NHM_EXCLUDE_CCA;
	ccx_info->nhm_inexclude_txon = NHM_EXCLUDE_TXON;
	ccx_info->th_rule = IGI_UNIFORM_2DB;

	ccx_info->nhm_ongoing = false;
	ccx_info->nhm_set_lv = NHM_RELEASE;

	phydm_nhm_setting(dm, SET_NHM_SETTING);
}

void
phydm_nhm_dbg(
	void		*dm_void,
	char		input[][16],
	u32		*_used,
	char		*output,
	u32		*_out_len,
	u32		input_num
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info	*ccx_info = &dm->dm_ccx_info;
	char		help[] = "-h";
	u32		var1[10] = {0};
	u32		used = *_used;
	u32		out_len = *_out_len;
	u8		i;
	u8		target_rssi;

	for (i = 0; i < 2; i++) {
		if (input[i + 1]) {
			PHYDM_SSCANF(input[i + 1], DCMD_DECIMAL, &var1[i]);
		}
	}

	if ((strcmp(input[1], help) == 0)) {
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "{1: trigger(Exclude CCA), 2: trigger(Include CCA), 3:get result}\n");
		return;
		
	} else {
		/* NMH trigger */
		if ((var1[0] == 1) || (var1[0] == 2)) {
			ccx_info->echo_igi = (u8)odm_get_bb_reg(dm, 0xC50, MASKBYTE0);
			target_rssi = ccx_info->echo_igi - 10;
			ccx_info->nhm_th[0] = (target_rssi - 15 + 10) * 2; /*Unit: PWdB U(8,1)*/

			for (i = 1; i <= 10; i++)
				ccx_info->nhm_th[i] = ccx_info->nhm_th[0] + 6 * i;

			/* 4 1. store previous NHM setting */
			phydm_nhm_setting(dm, STORE_NHM_SETTING);

			/* 4 2. Set NHM period, 0x990[31:16]=0xC350, Time duration for NHM unit: 4us, 0xC350=200ms */
			ccx_info->nhm_period = 50000;	/* 50000*4us = 200ms */

			PDM_SNPF(out_len, used, output + used,
				       out_len - used,
				       "Monitor NHM for %d us\n",
				       ccx_info->nhm_period * 4);

			/* 4 3. Set NHM inexclude_txon, inexclude_cca, ccx_en */


			ccx_info->nhm_inexclude_cca = (var1[0] == 1) ? NHM_EXCLUDE_CCA : NHM_INCLUDE_CCA;
			ccx_info->nhm_inexclude_txon = NHM_EXCLUDE_TXON;

			phydm_nhm_setting(dm, SET_NHM_SETTING);

			for (i = 0; i <= 10; i++) {
				if (i == 5)
					PDM_SNPF(out_len, used,
						       output + used,
						       out_len - used,
						       "\r\n NHM_th[%d] = 0x%x, igi = 0x%x",
						       i, ccx_info->nhm_th[i],
						       ccx_info->echo_igi);
				else if (i == 10)
					PDM_SNPF(out_len, used,
						       output + used,
						       out_len - used,
						       "\r\n NHM_th[%d] = 0x%x\n",
						       i, ccx_info->nhm_th[i]);
				else
					PDM_SNPF(out_len, used,
						       output + used,
						       out_len - used,
						       "\r\n NHM_th[%d] = 0x%x",
						       i, ccx_info->nhm_th[i]);
			}

			/* 4 4. Trigger NHM */
			phydm_nhm_trigger(dm);

		} else if (var1[0] == 3) { /*Get NHM results*/

			PDM_SNPF(out_len, used, output + used,
				       out_len - used, "Cur_IGI = 0x%x\n",
				       ccx_info->echo_igi);

			phydm_get_nhm_result(dm);

			/* 4 Resotre NHM setting */
			phydm_nhm_setting(dm, RESTORE_NHM_SETTING);

			for (i = 0; i <= 11; i++) {
				if (i == 5)
					PDM_SNPF(out_len, used,
						       output + used,
						       out_len - used,
						       "\r\n nhm_rpt[%d] = %d, echo_igi = 0x%x",
						       i,
						       ccx_info->nhm_result[i],
						       ccx_info->echo_igi);
				else if (i == 11)
					PDM_SNPF(out_len, used,
						       output + used,
						       out_len - used,
						       "\r\n nhm_rpt[%d] = %d\n",
						       i,
						       ccx_info->nhm_result[i]);
				else
					PDM_SNPF(out_len, used,
						       output + used,
						       out_len - used,
						       "\r\n nhm_rpt[%d] = %d",
						       i,
						       ccx_info->nhm_result[i]);
			}

		}
	}	
		
	*_used = used;
	*_out_len = out_len;
}


#endif


#ifdef CLM_SUPPORT

void
phydm_clm_c2h_report_handler(
	void	*dm_void,
	u8	*cmd_buf,
	u8	cmd_len
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;
	u8	clm_report = cmd_buf[0];
	u8	clm_report_idx = cmd_buf[1];

	if (cmd_len >=12)
		return;
	
	ccx_info->clm_fw_result_acc += clm_report;
	ccx_info->clm_fw_result_cnt++;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%d] clm_report= %d\n", ccx_info->clm_fw_result_cnt, clm_report);
	
}

void
phydm_clm_h2c(
	void	*dm_void,
	u16	obs_time,
	u8	fw_clm_en
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;
	u8		h2c_val[H2C_MAX_LENGTH] = {0};
	u8		i = 0;
	u8		obs_time_idx = 0;
	
	PHYDM_DBG(dm, DBG_ENV_MNTR, "%s ======>\n", __func__);
	PHYDM_DBG(dm, DBG_ENV_MNTR, "obs_time_index=%d *4 ms\n", obs_time);

	for (i =1; i<=16; i++) {
		if (obs_time & BIT(16 -i)) {
			obs_time_idx = 16-i;
			break;
		}
	}
	
	/*
	obs_time =(2^16 -1) ~ (2^15)  => obs_time_idx = 15  (65535 ~ 32768)
	obs_time =(2^15 -1) ~ (2^14)  => obs_time_idx = 14
	...
	...
	...
	obs_time =(2^1 -1) ~ (2^0)  => obs_time_idx = 0

	*/

	h2c_val[0] = obs_time_idx | (((fw_clm_en) ? 1 : 0)<< 7);
	h2c_val[1] = CLM_MAX_REPORT_TIME;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "PHYDM h2c[0x4d]=0x%x %x %x %x %x %x %x\n",
		h2c_val[6], h2c_val[5], h2c_val[4], h2c_val[3], h2c_val[2], h2c_val[1], h2c_val[0]);

	odm_fill_h2c_cmd(dm, PHYDM_H2C_FW_CLM_MNTR, H2C_MAX_LENGTH, h2c_val);

}

void
phydm_clm_setting(
	void			*dm_void
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;
	struct ccx_info	*ccx_info = &dm->dm_ccx_info;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		odm_set_bb_reg(dm, 0x990, MASKLWORD, ccx_info->clm_period);	/*4us sample 1 time*/

	} else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		odm_set_bb_reg(dm, 0x894, MASKLWORD, ccx_info->clm_period);
	}

	PHYDM_DBG(dm, DBG_ENV_MNTR, "Set CLM period=%d * 4us\n", ccx_info->clm_period);

}

void
phydm_clm_hw_restart(
	void			*dm_void
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		odm_set_bb_reg(dm, ODM_REG_CLM_11AC, BIT(8), 0x0); /*Enable CCX for CLM*/
		odm_set_bb_reg(dm, ODM_REG_CLM_11AC, BIT(8), 0x1); /*Enable CCX for CLM*/

	} else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		odm_set_bb_reg(dm, ODM_REG_CLM_11N, BIT(8), 0x0); /*Enable CCX for CLM*/
		odm_set_bb_reg(dm, ODM_REG_CLM_11N, BIT(8), 0x1);	/*Enable CCX for CLM*/
	}
}

void
phydm_clm_trigger(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if (ccx_info->clm_ongoing == true)
		phydm_clm_hw_restart(dm);

	ccx_info->clm_ongoing = true;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		odm_set_bb_reg(dm, ODM_REG_CLM_11AC, BIT(0), 0x0);/*Trigger CLM*/
		odm_set_bb_reg(dm, ODM_REG_CLM_11AC, BIT(0), 0x1);
	} else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		odm_set_bb_reg(dm, ODM_REG_CLM_11N, BIT(0), 0x0);	/*Trigger CLM*/
		odm_set_bb_reg(dm, ODM_REG_CLM_11N, BIT(0), 0x1);
	}
}

boolean
phydm_clm_check_rdy(
	void			*dm_void
)
{
	struct dm_struct		*dm = (struct dm_struct *)dm_void;
	boolean			is_ready = false;
	u8				i;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		for (i = 0; i < 3; i++) {
			
			if (odm_get_bb_reg(dm, ODM_REG_CLM_RESULT_11AC, BIT(16))) {
				is_ready = 1;
				break;
			}
			ODM_delay_ms(1);
		}
	} else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		for (i = 0; i < 3; i++) {
	       	if (dm->support_ic_type == ODM_RTL8710B) {
		       	if (odm_get_bb_reg(dm, ODM_REG_CLM_READY_11N, BIT(24))) {
					is_ready = 1;
					break;
			      } else if (odm_get_bb_reg(dm, ODM_REG_CLM_READY_11N, BIT(16))) {
					is_ready = 1;
					break;
			      }
			}
			ODM_delay_ms(1);
		}
	}
	PHYDM_DBG(dm, DBG_ENV_MNTR, "CLM rdy=%d\n", is_ready);
	return is_ready;
}

void
phydm_clm_get_result(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info			*ccx_info = &dm->dm_ccx_info;

	if (dm->support_ic_type & ODM_IC_11AC_SERIES)
		ccx_info->clm_result = (u16)odm_get_bb_reg(dm, 0xfa4, MASKLWORD);
	else if (dm->support_ic_type & ODM_IC_11N_SERIES)
		ccx_info->clm_result = (u16)odm_get_bb_reg(dm, 0x8d0, MASKLWORD);

	ccx_info->clm_ongoing = false;
	
	PHYDM_DBG(dm, DBG_ENV_MNTR, "CLM result = %d *4 us\n", ccx_info->clm_result);
}

void
phydm_set_clm_mntr_mode(
	void			*dm_void,
	enum clm_monitor_mode mode
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;

	if (ccx_info->clm_mntr_mode != mode) {
		
		ccx_info->clm_mntr_mode = mode;
		phydm_clm_hw_restart(dm);

		if (mode == CLM_DRIVER_MNTR)
			phydm_clm_h2c(dm,0, 0);
	}
}

void
phydm_clm_init(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	ccx_info->clm_mntr_mode = CLM_DRIVER_MNTR;
	ccx_info->clm_period = 65535;
	phydm_clm_setting(dm);
	phydm_clm_hw_restart(dm);
}

void
phydm_clm_dbg(
	void		*dm_void,
	char		input[][16],
	u32		*_used,
	char		*output,
	u32		*_out_len,
	u32		input_num
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info	*ccx_info = &dm->dm_ccx_info;
	char		help[] = "-h";
	u32		var1[10] = {0};
	u32		used = *_used;
	u32		out_len = *_out_len;
	u32		i;

	for (i = 0; i < 2; i++) {
		if (input[i + 1]) {
			PHYDM_SSCANF(input[i + 1], DCMD_DECIMAL, &var1[i]);
		}
	}

	if ((strcmp(input[1], help) == 0)) {
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "{1: trigger, 2:get result}\n");
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "{3: MNTR mode sel} {1: driver, 2. FW}\n");
		return;
	} else if (var1[0] == 1) { /* Set & trigger CLM */
		
		ccx_info->clm_period = 65535;		/* 65535*4us = 262.14ms*/
		phydm_clm_setting(dm);
		phydm_clm_hw_restart(dm);
		phydm_clm_trigger(dm);
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "Monitor CLM for 262ms\n");
		
	} else if (var1[0] == 2) { /* Get CLM results */

		phydm_clm_get_result(dm);
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "CLM_result=%d us\n",
			       (ccx_info->clm_result<<2));

	} else if (var1[0] == 3) {
		if (var1[1] == 1)
			ccx_info->clm_mntr_mode = CLM_DRIVER_MNTR;
		else if (var1[1] == 2)
			ccx_info->clm_mntr_mode = CLM_FW_MNTR;

	} else {
		
		PDM_SNPF(out_len, used, output + used, out_len - used,
			       "Error\n");
	}
	
	*_used = used;
	*_out_len = out_len;
}


#endif	/*#ifdef CLM_SUPPORT*/

void
phydm_ccx_monitor_trigger(
	void			*dm_void,
	u16			monitor_time		/*unit ms*/
)
{
	u8			nhm_th[11], i, igi;
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;
	u16 	monitor_time_4us = 0;

	if (!(dm->support_ability & ODM_BB_ENV_MONITOR))
		return;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	if (monitor_time == 0)
		return;

	if (monitor_time >= 262)
		monitor_time_4us = 65534;
	else
		monitor_time_4us = monitor_time * MS_TO_4US_RATIO;

	/* check if NHM threshold is changed */
	if (dm->support_ic_type & ODM_IC_11AC_SERIES) {
		
		nhm_th[0] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE0);
		nhm_th[1] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE1);
		nhm_th[2] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE2);
		nhm_th[3] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11AC, MASKBYTE3);
		nhm_th[4] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE0);
		nhm_th[5] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE1);
		nhm_th[6] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE2);
		nhm_th[7] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11AC, MASKBYTE3);
		nhm_th[8] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH8_11AC, MASKBYTE0);
		nhm_th[9] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE2);
		nhm_th[10] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11AC, MASKBYTE3);
	} else if (dm->support_ic_type & ODM_IC_11N_SERIES) {
		
		nhm_th[0] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE0);
		nhm_th[1] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE1);
		nhm_th[2] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE2);
		nhm_th[3] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH3_TO_TH0_11N, MASKBYTE3);
		nhm_th[4] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE0);
		nhm_th[5] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE1);
		nhm_th[6] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE2);
		nhm_th[7] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH7_TO_TH4_11N, MASKBYTE3);
		nhm_th[8] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH8_11N, MASKBYTE0);
		nhm_th[9] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE2);
		nhm_th[10] = (u8)odm_get_bb_reg(dm, ODM_REG_NHM_TH9_TH10_11N, MASKBYTE3);
	}

	for (i = 0; i <= 10; i++) {
		
		if (nhm_th[i] != ccx_info->nhm_th[i]) {	
			PHYDM_DBG(dm, DBG_ENV_MNTR,
				"nhm_th[%d] != ccx_info->nhm_th[%d]!!\n", i, i);
		}
	}
	/*[NHM]*/
	igi = (u8)odm_get_bb_reg(dm, 0xC50, MASKBYTE0);
	phydm_set_nhm_th_by_igi(dm, igi);

	ccx_info->nhm_period = monitor_time_4us;
	ccx_info->nhm_inexclude_cca = NHM_EXCLUDE_CCA;
	ccx_info->nhm_inexclude_txon = NHM_EXCLUDE_TXON;

	phydm_nhm_setting(dm, SET_NHM_SETTING);
	phydm_nhm_trigger(dm);

	/*[CLM]*/
	ccx_info->clm_period = monitor_time_4us;
	
	if (ccx_info->clm_mntr_mode == CLM_DRIVER_MNTR) {
		phydm_clm_setting(dm);
		phydm_clm_trigger(dm);
	} else if (ccx_info->clm_mntr_mode == CLM_FW_MNTR){
		phydm_clm_h2c(dm, monitor_time_4us, true);
	} else {
		PHYDM_DBG(dm, DBG_ENV_MNTR, "CLM_ECHO_DBG_MODE\n");
	}

}

void
phydm_ccx_monitor_result(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;
	struct ccx_info		*ccx_info = &dm->dm_ccx_info;
	u32					clm_result_tmp = 0;

	if (!(dm->support_ability & ODM_BB_ENV_MONITOR))
		return;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "%s ======>\n", __func__);

	if (phydm_check_nhm_rdy(dm)) {
		phydm_get_nhm_result(dm);

		if (ccx_info->nhm_result_total != 0)
			ccx_info->nhm_ratio  = (u8)(((ccx_info->nhm_result_total - ccx_info->nhm_result[0])*100) >> 8);
	}

	if (ccx_info->clm_mntr_mode == CLM_DRIVER_MNTR) {
		
		if (!phydm_clm_check_rdy(dm))
			goto out;

		phydm_clm_get_result(dm);

		if (ccx_info->clm_period != 0) {
			if (ccx_info->clm_period == 64000)
				ccx_info->clm_ratio = (u8)(((ccx_info->clm_result >> 6) + 5) /10);
			else if (ccx_info->clm_period == 65535) {
				clm_result_tmp = (u32)(ccx_info->clm_result * 100);
				ccx_info->clm_ratio = (u8)((clm_result_tmp + (1<<15)) >> 16);
			} else
				ccx_info->clm_ratio = (u8)((ccx_info->clm_result*100) / ccx_info->clm_period);
		}

	} else {
		if (ccx_info->clm_fw_result_cnt != 0)
			ccx_info->clm_ratio = (u8)(ccx_info->clm_fw_result_acc /ccx_info->clm_fw_result_cnt);
		else
			ccx_info->clm_ratio = 0;

		PHYDM_DBG(dm, DBG_ENV_MNTR, "clm_fw_result_acc=%d, clm_fw_result_cnt=%d\n",
			ccx_info->clm_fw_result_acc, ccx_info->clm_fw_result_cnt);
		
		ccx_info->clm_fw_result_acc = 0;
		ccx_info->clm_fw_result_cnt = 0;
	}

out:
	PHYDM_DBG(dm, DBG_ENV_MNTR, "IGI=0x%x, nhm_ratio=%d, clm_ratio=%d\n\n",
		ccx_info->echo_igi, ccx_info->nhm_ratio, ccx_info->clm_ratio);
		
}

void
phydm_ccx_monitor(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;

	if (!(dm->support_ability & ODM_BB_ENV_MONITOR))
		return;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	phydm_ccx_monitor_result(dm);
	phydm_ccx_monitor_trigger(dm, 262);	/*monitor 262ms*/
}

void
phydm_env_monitor_init(
	void			*dm_void
)
{
	struct dm_struct	*dm = (struct dm_struct *)dm_void;

	if (!(dm->support_ability & ODM_BB_ENV_MONITOR))
		return;

	PHYDM_DBG(dm, DBG_ENV_MNTR, "[%s]===>\n", __FUNCTION__);

	phydm_nhm_init(dm);
	phydm_clm_init(dm);
}

