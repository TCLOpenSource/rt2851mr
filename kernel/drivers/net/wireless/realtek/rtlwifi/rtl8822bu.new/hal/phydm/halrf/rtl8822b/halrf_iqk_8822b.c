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
#if (DM_ODM_SUPPORT_TYPE == ODM_WIN)
#if RT_PLATFORM == PLATFORM_MACOSX
#include "phydm_precomp.h"
#else
#include "../phydm_precomp.h"
#endif
#else
#include "../../phydm_precomp.h"
#endif

#if (RTL8822B_SUPPORT == 1)

/*---------------------------Define Local Constant---------------------------*/

void phydm_get_read_counter(struct dm_struct *dm)
{
	u32 counter = 0x0;

	while (1) {
		if ((odm_get_rf_reg(dm, RF_PATH_A, RF_0x8, RFREGOFFSETMASK) == 0xabcde) || counter > 300)
			break;
		counter++;
		ODM_delay_ms(1);
	};
	odm_set_rf_reg(dm, RF_PATH_A, RF_0x8, RFREGOFFSETMASK, 0x0);
	RF_DBG(dm, DBG_RF_IQK, "[IQK]counter = %d\n", counter);
}

/*---------------------------Define Local Constant---------------------------*/

#if !(DM_ODM_SUPPORT_TYPE & ODM_AP)
void do_iqk_8822b(void *dm_void, u8 delta_thermal_index, u8 thermal_value,
		  u8 threshold)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;

	dm->rf_calibrate_info.thermal_value_iqk = thermal_value;
	halrf_segment_iqk_trigger(dm, true, iqk_info->segment_iqk);
}
#else
/*Originally config->do_iqk is hooked phy_iq_calibrate_8822b, but do_iqk_8822b and phy_iq_calibrate_8822b have different arguments*/
void do_iqk_8822b(void *dm_void, u8 delta_thermal_index, u8 thermal_value,
		  u8 threshold)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	boolean is_recovery = (boolean)delta_thermal_index;

	halrf_segment_iqk_trigger(dm, true, iqk_info->segment_iqk);
}
#endif

void _iqk_rf_set_check(struct dm_struct *dm, u8 path, u16 add, u32 data)
{
	u32 i;

	odm_set_rf_reg(dm, (enum rf_path)path, add, RFREGOFFSETMASK, data);

	for (i = 0; i < 100; i++) {
		if (odm_get_rf_reg(dm, (enum rf_path)path, add, RFREGOFFSETMASK) == data)
			break;

		ODM_delay_us(10);
		odm_set_rf_reg(dm, (enum rf_path)path, add, RFREGOFFSETMASK, data);
	}
}

void _iqk_rf0xb0_workaround(struct dm_struct *dm)
{
	/*add 0xb8 control for the bad phase noise after switching channel*/
	odm_set_rf_reg(dm, (enum rf_path)0x0, RF_0xb8, RFREGOFFSETMASK, 0x00a00);
	odm_set_rf_reg(dm, (enum rf_path)0x0, RF_0xb8, RFREGOFFSETMASK, 0x80a00);
}

void _iqk_fill_iqk_report_8822b(void *dm_void, u8 channel)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u32 tmp1 = 0x0, tmp2 = 0x0, tmp3 = 0x0;
	u8 i;

	for (i = 0; i < SS_8822B; i++) {
		tmp1 = tmp1 + ((iqk_info->iqk_fail_report[channel][i][TX_IQK] & 0x1) << i);
		tmp2 = tmp2 + ((iqk_info->iqk_fail_report[channel][i][RX_IQK] & 0x1) << (i + 4));
		tmp3 = tmp3 + ((iqk_info->rxiqk_fail_code[channel][i] & 0x3) << (i * 2 + 8));
	}
	odm_write_4byte(dm, 0x1b00, 0xf8000008);
	odm_set_bb_reg(dm, R_0x1bf0, 0x0000ffff, tmp1 | tmp2 | tmp3);

	for (i = 0; i < 2; i++)
		odm_write_4byte(dm, 0x1be8 + (i * 4), (iqk_info->rxiqk_agc[channel][(i * 2) + 1] << 16) | iqk_info->rxiqk_agc[channel][i * 2]);
}

void _iqk_fail_count_8822b(void *dm_void)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u8 i;

	dm->n_iqk_cnt++;
	if (odm_get_rf_reg(dm, RF_PATH_A, RF_0x1bf0, BIT(16)) == 1)
		iqk_info->is_reload = true;
	else
		iqk_info->is_reload = false;

	if (!iqk_info->is_reload) {
		for (i = 0; i < 8; i++) {
			if (odm_get_bb_reg(dm, R_0x1bf0, BIT(i)) == 1)
				dm->n_iqk_fail_cnt++;
		}
	}
	RF_DBG(dm, DBG_RF_IQK, "[IQK]All/Fail = %d %d\n", dm->n_iqk_cnt,
	       dm->n_iqk_fail_cnt);
}

void _iqk_iqk_fail_report_8822b(struct dm_struct *dm)
{
	u32 tmp1bf0 = 0x0;
	u8 i;

	tmp1bf0 = odm_read_4byte(dm, 0x1bf0);

	for (i = 0; i < 4; i++) {
		if (tmp1bf0 & (0x1 << i))
#if !(DM_ODM_SUPPORT_TYPE & ODM_AP)
			RF_DBG(dm, DBG_RF_IQK, "[IQK] please check S%d TXIQK\n",
			       i);
#else
			panic_printk("[IQK] please check S%d TXIQK\n", i);
#endif
		if (tmp1bf0 & (0x1 << (i + 12)))
#if !(DM_ODM_SUPPORT_TYPE & ODM_AP)
			RF_DBG(dm, DBG_RF_IQK, "[IQK] please check S%d RXIQK\n",
			       i);
#else
			panic_printk("[IQK] please check S%d RXIQK\n", i);
#endif
	}
}

void _iqk_backup_mac_bb_8822b(struct dm_struct *dm, u32 *MAC_backup,
			      u32 *BB_backup, u32 *backup_mac_reg,
			      u32 *backup_bb_reg)
{
	u32 i;
	for (i = 0; i < MAC_REG_NUM_8822B; i++)
		MAC_backup[i] = odm_read_4byte(dm, backup_mac_reg[i]);

	for (i = 0; i < BB_REG_NUM_8822B; i++)
		BB_backup[i] = odm_read_4byte(dm, backup_bb_reg[i]);

#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]BackupMacBB Success!!!!\n"); */
#endif
}

void _iqk_backup_rf_8822b(struct dm_struct *dm, u32 RF_backup[][2],
			  u32 *backup_rf_reg)
{
	u32 i;

	for (i = 0; i < RF_REG_NUM_8822B; i++) {
		RF_backup[i][RF_PATH_A] = odm_get_rf_reg(dm, RF_PATH_A, backup_rf_reg[i], RFREGOFFSETMASK);
		RF_backup[i][RF_PATH_B] = odm_get_rf_reg(dm, RF_PATH_B, backup_rf_reg[i], RFREGOFFSETMASK);
	}
#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]BackupRF Success!!!!\n"); */
#endif
}

void _iqk_agc_bnd_int_8822b(struct dm_struct *dm)
{
	/*initialize RX AGC bnd, it must do after bbreset*/
	odm_write_4byte(dm, 0x1b00, 0xf8000008);
	odm_write_4byte(dm, 0x1b00, 0xf80a7008);
	odm_write_4byte(dm, 0x1b00, 0xf8015008);
	odm_write_4byte(dm, 0x1b00, 0xf8000008);
#if 0
	/*RF_DBG(dm, DBG_RF_IQK, "[IQK]init. rx agc bnd\n");*/
#endif
}

void _iqk_bb_reset_8822b(struct dm_struct *dm)
{
	boolean cca_ing = false;
	u32 count = 0;

	odm_set_rf_reg(dm, RF_PATH_A, RF_0x0, RFREGOFFSETMASK, 0x10000);
	odm_set_rf_reg(dm, RF_PATH_B, RF_0x0, RFREGOFFSETMASK, 0x10000);
	/*reset BB report*/
	odm_set_bb_reg(dm, R_0x8f8, 0x0ff00000, 0x0);

	while (1) {
		odm_write_4byte(dm, 0x8fc, 0x0);
		odm_set_bb_reg(dm, R_0x198c, 0x7, 0x7);
		cca_ing = (boolean)odm_get_bb_reg(dm, R_0xfa0, BIT(3));

		if (count > 30)
			cca_ing = false;

		if (cca_ing) {
			ODM_delay_ms(1);
			count++;
		} else {
			odm_write_1byte(dm, 0x808, 0x0); /*RX ant off*/
			odm_set_bb_reg(dm, R_0xa04, BIT(27) | BIT(26) | BIT(25) | BIT(24), 0x0); /*CCK RX path off*/

			/*BBreset*/
			odm_set_bb_reg(dm, R_0x0, BIT(16), 0x0);
			odm_set_bb_reg(dm, R_0x0, BIT(16), 0x1);

			if (odm_get_bb_reg(dm, R_0x660, BIT(16)))
				odm_write_4byte(dm, 0x6b4, 0x89000006);
#if 0
			/*RF_DBG(dm, DBG_RF_IQK, "[IQK]BBreset!!!!\n");*/
#endif
			break;
		}
	}
}

void _iqk_afe_setting_8822b(struct dm_struct *dm, boolean do_iqk)
{
	if (do_iqk) {
		odm_write_4byte(dm, 0xc60, 0x50000000);
		odm_write_4byte(dm, 0xc60, 0x70070040);
		odm_write_4byte(dm, 0xe60, 0x50000000);
		odm_write_4byte(dm, 0xe60, 0x70070040);
		odm_write_4byte(dm, 0xc58, 0xd8000402);
		odm_write_4byte(dm, 0xc5c, 0xd1000120);
		odm_write_4byte(dm, 0xc6c, 0x00000a15);
		odm_write_4byte(dm, 0xe58, 0xd8000402);
		odm_write_4byte(dm, 0xe5c, 0xd1000120);
		odm_write_4byte(dm, 0xe6c, 0x00000a15);
		_iqk_bb_reset_8822b(dm);
#if 0
		/*		RF_DBG(dm, DBG_RF_IQK, "[IQK]AFE setting for IQK mode!!!!\n"); */
#endif
	} else {
		odm_write_4byte(dm, 0xc60, 0x50000000);
		odm_write_4byte(dm, 0xc60, 0x70038040);
		odm_write_4byte(dm, 0xe60, 0x50000000);
		odm_write_4byte(dm, 0xe60, 0x70038040);
		odm_write_4byte(dm, 0xc58, 0xd8020402);
		odm_write_4byte(dm, 0xc5c, 0xde000120);
		odm_write_4byte(dm, 0xc6c, 0x0000122a);
		odm_write_4byte(dm, 0xe58, 0xd8020402);
		odm_write_4byte(dm, 0xe5c, 0xde000120);
		odm_write_4byte(dm, 0xe6c, 0x0000122a);
#if 0
		/*		RF_DBG(dm, DBG_RF_IQK, "[IQK]AFE setting for Normal mode!!!!\n"); */
#endif
	}
	/*0x9a4[31]=0: Select da clock*/
	odm_set_bb_reg(dm, R_0x9a4, BIT(31), 0x0);
}

void _iqk_restore_mac_bb_8822b(struct dm_struct *dm, u32 *MAC_backup,
			       u32 *BB_backup, u32 *backup_mac_reg,
			       u32 *backup_bb_reg)
{
	u32 i;

	for (i = 0; i < MAC_REG_NUM_8822B; i++)
		odm_write_4byte(dm, backup_mac_reg[i], MAC_backup[i]);
	for (i = 0; i < BB_REG_NUM_8822B; i++)
		odm_write_4byte(dm, backup_bb_reg[i], BB_backup[i]);
#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]RestoreMacBB Success!!!!\n"); */
#endif
}

void _iqk_restore_rf_8822b(struct dm_struct *dm, u32 *backup_rf_reg,
			   u32 RF_backup[][2])
{
	u32 i;

	odm_set_rf_reg(dm, RF_PATH_A, RF_0xef, RFREGOFFSETMASK, 0x0);
	odm_set_rf_reg(dm, RF_PATH_B, RF_0xef, RFREGOFFSETMASK, 0x0);
	/*0xdf[4]=0*/
	_iqk_rf_set_check(dm, RF_PATH_A, 0xdf, RF_backup[0][RF_PATH_A] & (~BIT(4)));
	_iqk_rf_set_check(dm, RF_PATH_B, 0xdf, RF_backup[0][RF_PATH_B] & (~BIT(4)));

#if 0
	/*odm_set_rf_reg(dm, RF_PATH_A, RF_0xdf, RFREGOFFSETMASK, RF_backup[0][RF_PATH_A] & (~BIT(4)));*/
	/*odm_set_rf_reg(dm, RF_PATH_B, RF_0xdf, RFREGOFFSETMASK, RF_backup[0][RF_PATH_B] & (~BIT(4)));*/
#endif

	for (i = 1; i < RF_REG_NUM_8822B; i++) {
		odm_set_rf_reg(dm, RF_PATH_A, backup_rf_reg[i], RFREGOFFSETMASK, RF_backup[i][RF_PATH_A]);
		odm_set_rf_reg(dm, RF_PATH_B, backup_rf_reg[i], RFREGOFFSETMASK, RF_backup[i][RF_PATH_B]);
	}
#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]RestoreRF Success!!!!\n"); */
#endif
}

void _iqk_backup_iqk_8822b(struct dm_struct *dm, u8 step, u8 path)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u8 i, j, k;

	switch (step) {
	case 0:
		iqk_info->iqk_channel[1] = iqk_info->iqk_channel[0];
		for (i = 0; i < 2; i++) {
			iqk_info->lok_idac[1][i] = iqk_info->lok_idac[0][i];
			iqk_info->rxiqk_agc[1][i] = iqk_info->rxiqk_agc[0][i];
			iqk_info->bypass_iqk[1][i] = iqk_info->bypass_iqk[0][i];
			iqk_info->rxiqk_fail_code[1][i] = iqk_info->rxiqk_fail_code[0][i];
			for (j = 0; j < 2; j++) {
				iqk_info->iqk_fail_report[1][i][j] = iqk_info->iqk_fail_report[0][i][j];
				for (k = 0; k < 8; k++) {
					iqk_info->iqk_cfir_real[1][i][j][k] = iqk_info->iqk_cfir_real[0][i][j][k];
					iqk_info->iqk_cfir_imag[1][i][j][k] = iqk_info->iqk_cfir_imag[0][i][j][k];
				}
			}
		}

		for (i = 0; i < 4; i++) {
			iqk_info->rxiqk_fail_code[0][i] = 0x0;
			iqk_info->rxiqk_agc[0][i] = 0x0;
			for (j = 0; j < 2; j++) {
				iqk_info->iqk_fail_report[0][i][j] = true;
				iqk_info->gs_retry_count[0][i][j] = 0x0;
			}
			for (j = 0; j < 3; j++)
				iqk_info->retry_count[0][i][j] = 0x0;
		}
		/*backup channel*/
		iqk_info->iqk_channel[0] = iqk_info->rf_reg18;
		break;
	case 1: /*LOK backup*/
		iqk_info->lok_idac[0][path] = odm_get_rf_reg(dm, (enum rf_path)path, RF_0x58, RFREGOFFSETMASK);
		break;
	case 2: /*TXIQK backup*/
	case 3: /*RXIQK backup*/
		phydm_get_iqk_cfir(dm, (step - 2), path, false);
		break;
	}
}

void _iqk_reload_iqk_setting_8822b(struct dm_struct *dm, u8 channel,
				   u8 reload_idx
				   /*1: reload TX, 2: reload LO, TX, RX*/)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u8 i, path, idx;
	u16 iqk_apply[2] = {0xc94, 0xe94};
	u32 tmp;

	for (path = 0; path < 2; path++) {
		if (reload_idx == 2) {
#if 0
			/*odm_set_rf_reg(dm, (enum rf_path)path, RF_0xdf, BIT(4), 0x1);*/
#endif
			tmp = odm_get_rf_reg(dm, (enum rf_path)path, RF_0xdf, RFREGOFFSETMASK) | BIT(4);
			_iqk_rf_set_check(dm, (enum rf_path)path, 0xdf, tmp);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0x58, RFREGOFFSETMASK, iqk_info->lok_idac[channel][path]);
		}

		for (idx = 0; idx < reload_idx; idx++) {
			odm_set_bb_reg(dm, R_0x1b00, MASKDWORD, 0xf8000008 | path << 1);
			odm_set_bb_reg(dm, R_0x1b2c, MASKDWORD, 0x7);
			odm_set_bb_reg(dm, R_0x1b38, MASKDWORD, 0x20000000);
			odm_set_bb_reg(dm, R_0x1b3c, MASKDWORD, 0x20000000);
			odm_set_bb_reg(dm, R_0x1bcc, MASKDWORD, 0x00000000);
			if (idx == 0)
				odm_set_bb_reg(dm, R_0x1b0c, BIT(13) | BIT(12), 0x3);
			else
				odm_set_bb_reg(dm, R_0x1b0c, BIT(13) | BIT(12), 0x1);
			odm_set_bb_reg(dm, R_0x1bd4, BIT(20) | BIT(19) | BIT(18) | BIT(17) | BIT(16), 0x10);
			for (i = 0; i < 8; i++) {
				odm_write_4byte(dm, 0x1bd8, ((0xc0000000 >> idx) + 0x3) + (i * 4) + (iqk_info->iqk_cfir_real[channel][path][idx][i] << 9));
				odm_write_4byte(dm, 0x1bd8, ((0xc0000000 >> idx) + 0x1) + (i * 4) + (iqk_info->iqk_cfir_imag[channel][path][idx][i] << 9));
			}
			if (idx == 0)
				odm_set_bb_reg(dm, iqk_apply[path], BIT(0), ~(iqk_info->iqk_fail_report[channel][path][idx]));
			else
				odm_set_bb_reg(dm, iqk_apply[path], BIT(10), ~(iqk_info->iqk_fail_report[channel][path][idx]));
		}
		odm_set_bb_reg(dm, R_0x1bd8, MASKDWORD, 0x0);
		odm_set_bb_reg(dm, R_0x1b0c, BIT(13) | BIT(12), 0x0);
	}
}

boolean
_iqk_reload_iqk_8822b(struct dm_struct *dm, boolean reset)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u8 i;
	iqk_info->is_reload = false;

	if (reset) {
		for (i = 0; i < 2; i++)
			iqk_info->iqk_channel[i] = 0x0;
	} else {
		iqk_info->rf_reg18 = odm_get_rf_reg(dm, RF_PATH_A, RF_0x18, RFREGOFFSETMASK);

		for (i = 0; i < 2; i++) {
			if (iqk_info->rf_reg18 == iqk_info->iqk_channel[i]) {
				_iqk_reload_iqk_setting_8822b(dm, i, 2);
				_iqk_fill_iqk_report_8822b(dm, i);
				RF_DBG(dm, DBG_RF_IQK,
				       "[IQK]reload IQK result before!!!!\n");
				iqk_info->is_reload = true;
			}
		}
	}
	/*report*/
	odm_set_bb_reg(dm, R_0x1bf0, BIT(16), (u8)iqk_info->is_reload);
	return iqk_info->is_reload;
}

void _iqk_rfe_setting_8822b(struct dm_struct *dm, boolean ext_pa_on)
{
	if (ext_pa_on) {
		/*RFE setting*/
		odm_write_4byte(dm, 0xcb0, 0x77777777);
		odm_write_4byte(dm, 0xcb4, 0x00007777);
		odm_write_4byte(dm, 0xcbc, 0x0000083B);
		odm_write_4byte(dm, 0xeb0, 0x77777777);
		odm_write_4byte(dm, 0xeb4, 0x00007777);
		odm_write_4byte(dm, 0xebc, 0x0000083B);
#if 0
		/*odm_write_4byte(dm, 0x1990, 0x00000c30);*/
#endif
		RF_DBG(dm, DBG_RF_IQK, "[IQK]external PA on!!!!\n");
	} else {
		/*RFE setting*/
		odm_write_4byte(dm, 0xcb0, 0x77777777);
		odm_write_4byte(dm, 0xcb4, 0x00007777);
		odm_write_4byte(dm, 0xcbc, 0x00000100);
		odm_write_4byte(dm, 0xeb0, 0x77777777);
		odm_write_4byte(dm, 0xeb4, 0x00007777);
		odm_write_4byte(dm, 0xebc, 0x00000100);
#if 0
		/*odm_write_4byte(dm, 0x1990, 0x00000c30);*/
		/*		RF_DBG(dm, DBG_RF_IQK, "[IQK]external PA off!!!!\n");*/
#endif
	}
}

void _iqk_rf_setting_8822b(struct dm_struct *dm)
{
	u8 path;
	u32 tmp;

	odm_write_4byte(dm, 0x1b00, 0xf8000008);
	odm_write_4byte(dm, 0x1bb8, 0x00000000);

	for (path = 0; path < 2; path++) {
		/*0xdf:B11 = 1,B4 = 0, B1 = 1*/
		tmp = odm_get_rf_reg(dm, (enum rf_path)path, RF_0xdf, RFREGOFFSETMASK);
		tmp = (tmp & (~BIT(4))) | BIT(1) | BIT(11);
		_iqk_rf_set_check(dm, (enum rf_path)path, 0xdf, tmp);
#if 0
		/*odm_set_rf_reg(dm, (enum rf_path)path, RF_0xdf, RFREGOFFSETMASK, tmp);*/
#endif

		/*release 0x56 TXBB*/
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x65, RFREGOFFSETMASK, 0x09000);

		if (*dm->band_type == ODM_BAND_5G) {
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0xef, BIT(19), 0x1);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0x33, RFREGOFFSETMASK, 0x00026);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0x3e, RFREGOFFSETMASK, 0x00037);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0x3f, RFREGOFFSETMASK, 0xdefce);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0xef, BIT(19), 0x0);
		} else {
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0xef, BIT(19), 0x1);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0x33, RFREGOFFSETMASK, 0x00026);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0x3e, RFREGOFFSETMASK, 0x00037);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0x3f, RFREGOFFSETMASK, 0x5efce);
			odm_set_rf_reg(dm, (enum rf_path)path, RF_0xef, BIT(19), 0x0);
		}
	}
}

void _iqk_configure_macbb_8822b(struct dm_struct *dm)
{
	/*MACBB register setting*/
	odm_write_1byte(dm, 0x522, 0x7f);
	odm_set_bb_reg(dm, R_0x550, BIT(11) | BIT(3), 0x0);
	odm_set_bb_reg(dm, R_0x90c, BIT(15), 0x1); /*0x90c[15]=1: dac_buf reset selection*/
	/*0xc94[0]=1, 0xe94[0]=1: Let tx from IQK*/
	odm_set_bb_reg(dm, R_0xc94, BIT(0), 0x1);
	odm_set_bb_reg(dm, R_0xe94, BIT(0), 0x1);
	odm_set_bb_reg(dm, R_0xc94, (BIT(11) | BIT(10)), 0x1);
	odm_set_bb_reg(dm, R_0xe94, (BIT(11) | BIT(10)), 0x1);
	/* 3-wire off*/
	odm_write_4byte(dm, 0xc00, 0x00000004);
	odm_write_4byte(dm, 0xe00, 0x00000004);
	/*disable PMAC*/
	odm_set_bb_reg(dm, R_0xb00, BIT(8), 0x0);
#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]Set MACBB setting for IQK!!!!\n");*/
#endif
}

void _iqk_lok_setting_8822b(struct dm_struct *dm, u8 path)
{
	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
	odm_write_4byte(dm, 0x1bcc, 0x9);
	odm_write_1byte(dm, 0x1b23, 0x00);

	switch (*dm->band_type) {
	case ODM_BAND_2_4G:
		odm_write_1byte(dm, 0x1b2b, 0x00);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x50df2);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xadc00);
		/* WE_LUT_TX_LOK*/
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0xef, BIT(4), 0x1);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x33, BIT(1) | BIT(0), 0x0);
		break;
	case ODM_BAND_5G:
		odm_write_1byte(dm, 0x1b2b, 0x80);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x5086c);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xa9c00);
		/* WE_LUT_TX_LOK*/
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0xef, BIT(4), 0x1);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x33, BIT(1) | BIT(0), 0x1);
		break;
	}
#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]Set LOK setting!!!!\n");*/
#endif
}

void _iqk_txk_setting_8822b(struct dm_struct *dm, u8 path)
{
	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
	odm_write_4byte(dm, 0x1bcc, 0x9);
	odm_write_4byte(dm, 0x1b20, 0x01440008);

	if (path == 0x0)
		odm_write_4byte(dm, 0x1b00, 0xf800000a);
	else
		odm_write_4byte(dm, 0x1b00, 0xf8000008);
	odm_write_4byte(dm, 0x1bcc, 0x3f);

	switch (*dm->band_type) {
	case ODM_BAND_2_4G:
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x50df2);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xadc00);
		odm_write_1byte(dm, 0x1b2b, 0x00);
		break;
	case ODM_BAND_5G:
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x500ef);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xa9c00);
		odm_write_1byte(dm, 0x1b2b, 0x80);
		break;
	}
#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]Set TXK setting!!!!\n");*/
#endif
}

void _iqk_rxk1_setting_8822b(struct dm_struct *dm, u8 path)
{
	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);

	switch (*dm->band_type) {
	case ODM_BAND_2_4G:
		odm_write_1byte(dm, 0x1bcc, 0x9);
		odm_write_1byte(dm, 0x1b2b, 0x00);
		odm_write_4byte(dm, 0x1b20, 0x01450008);
		odm_write_4byte(dm, 0x1b24, 0x01460c88);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x510e0);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xacc00);
		break;
	case ODM_BAND_5G:
		odm_write_1byte(dm, 0x1bcc, 0x09);
		odm_write_1byte(dm, 0x1b2b, 0x80);
		odm_write_4byte(dm, 0x1b20, 0x00850008);
		odm_write_4byte(dm, 0x1b24, 0x00460048);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x510e0);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xadc00);
		break;
	}
#if 0
	/*RF_DBG(dm, DBG_RF_IQK, "[IQK]Set RXK setting!!!!\n");*/
#endif
}

void _iqk_rxk2_setting_8822b(struct dm_struct *dm, u8 path, boolean is_gs)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;

	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);

	switch (*dm->band_type) {
	case ODM_BAND_2_4G:
		if (is_gs)
			iqk_info->tmp1bcc = 0x12;
		odm_write_1byte(dm, 0x1bcc, iqk_info->tmp1bcc);
		odm_write_1byte(dm, 0x1b2b, 0x00);
		odm_write_4byte(dm, 0x1b20, 0x01450008);
		odm_write_4byte(dm, 0x1b24, 0x01460848);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x510e0);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xa9c00);
		break;
	case ODM_BAND_5G:
		if (is_gs) {
			if (path == RF_PATH_A)
				iqk_info->tmp1bcc = 0x12;
			else
				iqk_info->tmp1bcc = 0x09;
		}
		odm_write_1byte(dm, 0x1bcc, iqk_info->tmp1bcc);
		odm_write_1byte(dm, 0x1b2b, 0x80);
		odm_write_4byte(dm, 0x1b20, 0x00850008);
		odm_write_4byte(dm, 0x1b24, 0x00460848);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x56, RFREGOFFSETMASK, 0x51060);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8f, RFREGOFFSETMASK, 0xa9c00);
		break;
	}
#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]Set RXK setting!!!!\n");*/
#endif
}

void halrf_iqk_set_rf0x8(struct dm_struct *dm, u8 path)
{
	u16 c = 0x0;

	while (c < 30000) {
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0xef, RFREGOFFSETMASK, 0x0);
		odm_set_rf_reg(dm, (enum rf_path)path, RF_0x8, RFREGOFFSETMASK, 0x0);
		if (odm_get_rf_reg(dm, (enum rf_path)path, RF_0x8, RFREGOFFSETMASK) == 0x0)
			break;
		c++;
	}
}

void halrf_iqk_check_if_reload(struct dm_struct *dm)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;

	iqk_info->is_reload = (boolean)odm_get_bb_reg(dm, R_0x1bf0, BIT(16));
}

boolean
_iqk_check_cal_8822b(struct dm_struct *dm, u8 path, u8 cmd)
{
	boolean notready = true, fail = true;
	u32 delay_count = 0x0;

	while (notready) {
		if (odm_get_rf_reg(dm, (enum rf_path)path, RF_0x8, RFREGOFFSETMASK) == 0x12345) {
			if (cmd == 0x0) /*LOK*/
				fail = false;
			else
				fail = (boolean)odm_get_bb_reg(dm, R_0x1b08, BIT(26));
			notready = false;
		} else {
			ODM_delay_ms(1);
			delay_count++;
		}

		if (delay_count >= 50) {
			fail = true;
			RF_DBG(dm, DBG_RF_IQK, "[IQK]IQK timeout!!!\n");
			break;
		}
	}
	halrf_iqk_set_rf0x8(dm, path);
	RF_DBG(dm, DBG_RF_IQK, "[IQK]delay count = 0x%x!!!\n", delay_count);
	return fail;
}

boolean
_iqk_rx_iqk_gain_search_fail_8822b(struct dm_struct *dm, u8 path, u8 step)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	boolean fail = true;
	u32 IQK_CMD = 0x0, rf_reg0, tmp, bb_idx;
	u8 IQMUX[4] = {0x9, 0x12, 0x1b, 0x24};
	u8 idx;

	if (step == RXIQK1) {
		RF_DBG(dm, DBG_RF_IQK,
		       "[IQK]============ S%d RXIQK GainSearch ============\n",
		       path);
		IQK_CMD = 0xf8000208 | (1 << (path + 4));
		RF_DBG(dm, DBG_RF_IQK, "[IQK]S%d GS%d_Trigger = 0x%x\n", path,
		       step, IQK_CMD);
		odm_write_4byte(dm, 0x1b00, IQK_CMD);
		odm_write_4byte(dm, 0x1b00, IQK_CMD + 0x1);
		ODM_delay_ms(GS_delay_8822B);
		fail = _iqk_check_cal_8822b(dm, path, 0x1);
	} else if (step == RXIQK2) {
		for (idx = 0; idx < 4; idx++) {
			if (iqk_info->tmp1bcc == IQMUX[idx])
				break;
		}
		odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
		odm_write_4byte(dm, 0x1bcc, iqk_info->tmp1bcc);

		IQK_CMD = 0xf8000308 | (1 << (path + 4));
		RF_DBG(dm, DBG_RF_IQK, "[IQK]S%d GS%d_Trigger = 0x%x\n", path,
		       step, IQK_CMD);
		odm_write_4byte(dm, 0x1b00, IQK_CMD);
		odm_write_4byte(dm, 0x1b00, IQK_CMD + 0x1);
		ODM_delay_ms(GS_delay_8822B);
		fail = _iqk_check_cal_8822b(dm, path, 0x1);

		rf_reg0 = odm_get_rf_reg(dm, (enum rf_path)path, RF_0x0, RFREGOFFSETMASK);
		odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
		RF_DBG(dm, DBG_RF_IQK,
		       "[IQK]S%d ==> RF0x0 = 0x%x, tmp1bcc = 0x%x, idx = %d, 0x1b3c = 0x%x\n",
		       path, rf_reg0, iqk_info->tmp1bcc, idx,
		       odm_read_4byte(dm, 0x1b3c));
		tmp = (rf_reg0 & 0x1fe0) >> 5;
		iqk_info->lna_idx = tmp >> 5;
		bb_idx = tmp & 0x1f;

		if (bb_idx == 0x1) {
			if (iqk_info->lna_idx != 0x0)
				iqk_info->lna_idx--;
			else if (idx != 3)
				idx++;
			else
				iqk_info->isbnd = true;
			fail = true;
		} else if (bb_idx == 0xa) {
			if (idx != 0)
				idx--;
			else if (iqk_info->lna_idx != 0x7)
				iqk_info->lna_idx++;
			else
				iqk_info->isbnd = true;
			fail = true;
		} else
			fail = false;

		if (iqk_info->isbnd)
			fail = false;

		iqk_info->tmp1bcc = IQMUX[idx];

		if (fail) {
			odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
			odm_write_4byte(dm, 0x1b24, (odm_read_4byte(dm, 0x1b24) & 0xffffe3ff) | (iqk_info->lna_idx << 10));
		}
	}
	return fail;
}

boolean
_lok_one_shot_8822b(void *dm_void, u8 path)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u8 delay_count = 0;
	boolean LOK_notready = false;
	u32 LOK_temp = 0;
	u32 IQK_CMD = 0x0;

	RF_DBG(dm, DBG_RF_IQK, "[IQK]==========S%d LOK ==========\n", path);
	IQK_CMD = 0xf8000008 | (1 << (4 + path));
	RF_DBG(dm, DBG_RF_IQK, "[IQK]LOK_Trigger = 0x%x\n", IQK_CMD);
	odm_write_4byte(dm, 0x1b00, IQK_CMD);
	odm_write_4byte(dm, 0x1b00, IQK_CMD + 1);
	/*LOK: CMD ID = 0	{0xf8000018, 0xf8000028}*/
	/*LOK: CMD ID = 0	{0xf8000019, 0xf8000029}*/
	ODM_delay_ms(LOK_delay_8822B);
	LOK_notready = _iqk_check_cal_8822b(dm, path, 0x0);
	if (!LOK_notready)
		_iqk_backup_iqk_8822b(dm, 0x1, path);
	if (DBG_RF_IQK) {
		if (!LOK_notready) {
			LOK_temp = odm_get_rf_reg(dm, (enum rf_path)path, RF_0x58, RFREGOFFSETMASK);
			RF_DBG(dm, DBG_RF_IQK, "[IQK]0x58 = 0x%x\n", LOK_temp);
		} else
			RF_DBG(dm, DBG_RF_IQK, "[IQK]==>S%d LOK Fail!!!\n",
			       path);
	}
	iqk_info->lok_fail[path] = LOK_notready;
	return LOK_notready;
}

boolean
_iqk_one_shot_8822b(void *dm_void, u8 path, u8 idx)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u8 delay_count = 0;
	boolean notready = true, fail = true;
	u32 IQK_CMD = 0x0;
	u16 iqk_apply[2] = {0xc94, 0xe94};

	if (idx == TXIQK)
		RF_DBG(dm, DBG_RF_IQK,
		       "[IQK]============ S%d WBTXIQK ============\n", path);
	else if (idx == RXIQK1)
		RF_DBG(dm, DBG_RF_IQK,
		       "[IQK]============ S%d WBRXIQK STEP1============\n",
		       path);
	else
		RF_DBG(dm, DBG_RF_IQK,
		       "[IQK]============ S%d WBRXIQK STEP2============\n",
		       path);

	if (idx == TXIQK) {
		IQK_CMD = 0xf8000008 | ((*dm->band_width + 4) << 8) | (1 << (path + 4));
		RF_DBG(dm, DBG_RF_IQK, "[IQK]TXK_Trigger = 0x%x\n", IQK_CMD);
		/*{0xf8000418, 0xf800042a} ==> 20 WBTXK (CMD = 4)*/
		/*{0xf8000518, 0xf800052a} ==> 40 WBTXK (CMD = 5)*/
		/*{0xf8000618, 0xf800062a} ==> 80 WBTXK (CMD = 6)*/
	} else if (idx == RXIQK1) {
		if (*dm->band_width == 2)
			IQK_CMD = 0xf8000808 | (1 << (path + 4));
		else
			IQK_CMD = 0xf8000708 | (1 << (path + 4));
		RF_DBG(dm, DBG_RF_IQK, "[IQK]RXK1_Trigger = 0x%x\n", IQK_CMD);
		/*{0xf8000718, 0xf800072a} ==> 20 WBTXK (CMD = 7)*/
		/*{0xf8000718, 0xf800072a} ==> 40 WBTXK (CMD = 7)*/
		/*{0xf8000818, 0xf800082a} ==> 80 WBTXK (CMD = 8)*/
	} else if (idx == RXIQK2) {
		IQK_CMD = 0xf8000008 | ((*dm->band_width + 9) << 8) | (1 << (path + 4));
		RF_DBG(dm, DBG_RF_IQK, "[IQK]RXK2_Trigger = 0x%x\n", IQK_CMD);
		/*{0xf8000918, 0xf800092a} ==> 20 WBRXK (CMD = 9)*/
		/*{0xf8000a18, 0xf8000a2a} ==> 40 WBRXK (CMD = 10)*/
		/*{0xf8000b18, 0xf8000b2a} ==> 80 WBRXK (CMD = 11)*/
		odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
		odm_write_4byte(dm, 0x1b24, (odm_read_4byte(dm, 0x1b24) & 0xffffe3ff) | ((iqk_info->lna_idx & 0x7) << 10));
	}
	odm_write_4byte(dm, 0x1b00, IQK_CMD);
	odm_write_4byte(dm, 0x1b00, IQK_CMD + 0x1);
	ODM_delay_ms(WBIQK_delay_8822B);
	fail = _iqk_check_cal_8822b(dm, path, 0x1);

	if (dm->debug_components & DBG_RF_IQK) {
		odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
		RF_DBG(dm, DBG_RF_IQK,
		       "[IQK]S%d ==> 0x1b00 = 0x%x, 0x1b08 = 0x%x\n", path,
		       odm_read_4byte(dm, 0x1b00), odm_read_4byte(dm, 0x1b08));
		RF_DBG(dm, DBG_RF_IQK, "[IQK]S%d ==> delay_count = 0x%x\n",
		       path, delay_count);
		if (idx != TXIQK)
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]S%d ==> RF0x0 = 0x%x, RF0x56 = 0x%x\n",
			       path,
			       odm_get_rf_reg(dm, (enum rf_path)path, RF_0x0,
			       RFREGOFFSETMASK),
			       odm_get_rf_reg(dm, (enum rf_path)path, RF_0x56,
			       RFREGOFFSETMASK));
	}

	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);

	if (idx == TXIQK) {
		if (fail)
			odm_set_bb_reg(dm, iqk_apply[path], BIT(0), 0x0);
		else
			_iqk_backup_iqk_8822b(dm, 0x2, path);
	}

	if (idx == RXIQK2) {
		iqk_info->rxiqk_agc[0][path] =
			(u16)(((odm_get_rf_reg(dm, (enum rf_path)path, RF_0x0, RFREGOFFSETMASK) >> 5) & 0xff) |
			      (iqk_info->tmp1bcc << 8));

		odm_write_4byte(dm, 0x1b38, 0x20000000);

		if (fail)
			odm_set_bb_reg(dm, iqk_apply[path], (BIT(11) | BIT(10)), 0x0);
		else
			_iqk_backup_iqk_8822b(dm, 0x3, path);
	}

	if (idx == TXIQK)
		iqk_info->iqk_fail_report[0][path][TXIQK] = fail;
	else
		iqk_info->iqk_fail_report[0][path][RXIQK] = fail;

	return fail;
}

boolean
_iqk_rx_iqk_by_path_8822b(void *dm_void, u8 path)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	boolean KFAIL = true, gonext;

#if 1
	switch (iqk_info->rxiqk_step) {
	case 1: /*gain search_RXK1*/
		_iqk_rxk1_setting_8822b(dm, path);
		gonext = false;
		while (1) {
			KFAIL = _iqk_rx_iqk_gain_search_fail_8822b(dm, path, RXIQK1);
			if (KFAIL && iqk_info->gs_retry_count[0][path][0] < 2)
				iqk_info->gs_retry_count[0][path][0]++;
			else if (KFAIL) {
				iqk_info->rxiqk_fail_code[0][path] = 0;
				iqk_info->rxiqk_step = 5;
				gonext = true;
			} else {
				iqk_info->rxiqk_step++;
				gonext = true;
			}
			if (gonext)
				break;
		}
		halrf_iqk_xym_read(dm, path, 0x2);
		break;
	case 2: /*gain search_RXK2*/
		_iqk_rxk2_setting_8822b(dm, path, true);
		iqk_info->isbnd = false;
		while (1) {
			KFAIL = _iqk_rx_iqk_gain_search_fail_8822b(dm, path, RXIQK2);
			if (KFAIL && iqk_info->gs_retry_count[0][path][1] < rxiqk_gs_limit)
				iqk_info->gs_retry_count[0][path][1]++;
			else {
				iqk_info->rxiqk_step++;
				break;
			}
		}
		halrf_iqk_xym_read(dm, path, 0x3);
		break;
	case 3: /*RXK1*/
		_iqk_rxk1_setting_8822b(dm, path);
		gonext = false;
		while (1) {
			KFAIL = _iqk_one_shot_8822b(dm, path, RXIQK1);
			if (KFAIL && iqk_info->retry_count[0][path][RXIQK1] < 2)
				iqk_info->retry_count[0][path][RXIQK1]++;
			else if (KFAIL) {
				iqk_info->rxiqk_fail_code[0][path] = 1;
				iqk_info->rxiqk_step = 5;
				gonext = true;
			} else {
				iqk_info->rxiqk_step++;
				gonext = true;
			}
			if (gonext)
				break;
		}
		halrf_iqk_xym_read(dm, path, 0x4);
		break;
	case 4: /*RXK2*/
		_iqk_rxk2_setting_8822b(dm, path, false);
		gonext = false;
		while (1) {
			KFAIL = _iqk_one_shot_8822b(dm, path, RXIQK2);
			if (KFAIL && iqk_info->retry_count[0][path][RXIQK2] < 2)
				iqk_info->retry_count[0][path][RXIQK2]++;
			else if (KFAIL) {
				iqk_info->rxiqk_fail_code[0][path] = 2;
				iqk_info->rxiqk_step = 5;
				gonext = true;
			} else {
				iqk_info->rxiqk_step++;
				gonext = true;
			}
			if (gonext)
				break;
		}
		halrf_iqk_xym_read(dm, path, 0x0);
		break;
	}
	return KFAIL;
#endif
}

void _iqk_iqk_by_path_8822b(void *dm_void, boolean segment_iqk)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	boolean KFAIL = true;
	u8 i, kcount_limit;

#if 0
	/*	RF_DBG(dm, DBG_RF_IQK, "[IQK]iqk_step = 0x%x\n", dm->rf_calibrate_info.iqk_step); */
#endif

	if (*dm->band_width == 2)
		kcount_limit = kcount_limit_80m;
	else
		kcount_limit = kcount_limit_others;

	while (1) {
#if 1
		switch (dm->rf_calibrate_info.iqk_step) {
		case 1: /*S0 LOK*/
#if 1
			_iqk_lok_setting_8822b(dm, RF_PATH_A);
			_lok_one_shot_8822b(dm, RF_PATH_A);
#endif
			dm->rf_calibrate_info.iqk_step++;
			break;
		case 2: /*S1 LOK*/
#if 1
			_iqk_lok_setting_8822b(dm, RF_PATH_B);
			_lok_one_shot_8822b(dm, RF_PATH_B);
#endif
			dm->rf_calibrate_info.iqk_step++;
			break;
		case 3: /*S0 TXIQK*/
#if 1
			_iqk_txk_setting_8822b(dm, RF_PATH_A);
			KFAIL = _iqk_one_shot_8822b(dm, RF_PATH_A, TXIQK);
			iqk_info->kcount++;
			RF_DBG(dm, DBG_RF_IQK, "[IQK]S0TXK KFail = 0x%x\n",
			       KFAIL);

			if (KFAIL && iqk_info->retry_count[0][RF_PATH_A][TXIQK] < 3)
				iqk_info->retry_count[0][RF_PATH_A][TXIQK]++;
			else
#endif
				dm->rf_calibrate_info.iqk_step++;
			halrf_iqk_xym_read(dm, RF_PATH_A, 0x1);
			break;
		case 4: /*S1 TXIQK*/
#if 1
			_iqk_txk_setting_8822b(dm, RF_PATH_B);
			KFAIL = _iqk_one_shot_8822b(dm, RF_PATH_B, TXIQK);
			iqk_info->kcount++;
			RF_DBG(dm, DBG_RF_IQK, "[IQK]S1TXK KFail = 0x%x\n",
			       KFAIL);
			if (KFAIL && iqk_info->retry_count[0][RF_PATH_B][TXIQK] < 3)
				iqk_info->retry_count[0][RF_PATH_B][TXIQK]++;
			else
#endif
				dm->rf_calibrate_info.iqk_step++;
			halrf_iqk_xym_read(dm, RF_PATH_B, 0x1);
			break;
		case 5: /*S0 RXIQK*/
			while (1) {
				KFAIL = _iqk_rx_iqk_by_path_8822b(dm, RF_PATH_A);
				RF_DBG(dm, DBG_RF_IQK,
				       "[IQK]S0RXK KFail = 0x%x\n", KFAIL);
				if (iqk_info->rxiqk_step == 5) {
					dm->rf_calibrate_info.iqk_step++;
					iqk_info->rxiqk_step = 1;
					if (KFAIL)
						RF_DBG(dm, DBG_RF_IQK, "[IQK]S0RXK fail code: %d!!!\n", iqk_info->rxiqk_fail_code[0][RF_PATH_A]);
					break;
				}
			}
			iqk_info->kcount++;
			break;
		case 6: /*S1 RXIQK*/
			while (1) {
				KFAIL = _iqk_rx_iqk_by_path_8822b(dm, RF_PATH_B);
				RF_DBG(dm, DBG_RF_IQK,
				       "[IQK]S1RXK KFail = 0x%x\n", KFAIL);
				if (iqk_info->rxiqk_step == 5) {
					dm->rf_calibrate_info.iqk_step++;
					iqk_info->rxiqk_step = 1;
					if (KFAIL)
						RF_DBG(dm, DBG_RF_IQK, "[IQK]S1RXK fail code: %d!!!\n", iqk_info->rxiqk_fail_code[0][RF_PATH_B]);
					break;
				}
			}
			iqk_info->kcount++;
			break;
		}

		if (dm->rf_calibrate_info.iqk_step == 7) {
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]==========LOK summary ==========\n");
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]PathA_LOK_notready = %d, PathB_LOK1_notready = %d\n",
			       iqk_info->lok_fail[RF_PATH_A],
			       iqk_info->lok_fail[RF_PATH_B]);
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]==========IQK summary ==========\n");
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]PathA_TXIQK_fail = %d, PathB_TXIQK_fail = %d\n",
			       iqk_info->iqk_fail_report[0][RF_PATH_A][TXIQK],
			       iqk_info->iqk_fail_report[0][RF_PATH_B][TXIQK]);
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]PathA_RXIQK_fail = %d, PathB_RXIQK_fail = %d\n",
			       iqk_info->iqk_fail_report[0][RF_PATH_A][RXIQK],
			       iqk_info->iqk_fail_report[0][RF_PATH_B][RXIQK]);
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]PathA_TXIQK_retry = %d, PathB_TXIQK_retry = %d\n",
			       iqk_info->retry_count[0][RF_PATH_A][TXIQK],
			       iqk_info->retry_count[0][RF_PATH_B][TXIQK]);
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]PathA_RXK1_retry = %d, PathA_RXK2_retry = %d, PathB_RXK1_retry = %d, PathB_RXK2_retry = %d\n",
			       iqk_info->retry_count[0][RF_PATH_A][RXIQK1],
			       iqk_info->retry_count[0][RF_PATH_A][RXIQK2],
			       iqk_info->retry_count[0][RF_PATH_B][RXIQK1],
			       iqk_info->retry_count[0][RF_PATH_B][RXIQK2]);
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]PathA_GS1_retry = %d, PathA_GS2_retry = %d, PathB_GS1_retry = %d, PathB_GS2_retry = %d\n",
			       iqk_info->gs_retry_count[0][RF_PATH_A][0],
			       iqk_info->gs_retry_count[0][RF_PATH_A][1],
			       iqk_info->gs_retry_count[0][RF_PATH_B][0],
			       iqk_info->gs_retry_count[0][RF_PATH_B][1]);
			for (i = 0; i < 2; i++) {
				odm_write_4byte(dm, 0x1b00, 0xf8000008 | i << 1);
				odm_write_4byte(dm, 0x1b2c, 0x7);
				odm_write_4byte(dm, 0x1bcc, 0x0);
				odm_write_4byte(dm, 0x1b38, 0x20000000);
			}
			break;
		}

		if (segment_iqk && (iqk_info->kcount == kcount_limit))
			break;
#endif
	}
}

void _iqk_start_iqk_8822b(struct dm_struct *dm, boolean segment_iqk)
{
	u32 tmp;

	/*GNT_WL = 1*/
	tmp = odm_get_rf_reg(dm, RF_PATH_A, RF_0x1, RFREGOFFSETMASK);
	tmp = tmp | BIT(5) | BIT(0);
	odm_set_rf_reg(dm, RF_PATH_A, RF_0x1, RFREGOFFSETMASK, tmp);

	tmp = odm_get_rf_reg(dm, RF_PATH_B, RF_0x1, RFREGOFFSETMASK);
	tmp = tmp | BIT(5) | BIT(0);
	odm_set_rf_reg(dm, RF_PATH_B, RF_0x1, RFREGOFFSETMASK, tmp);

	_iqk_iqk_by_path_8822b(dm, segment_iqk);
}

void _iq_calibrate_8822b_init(struct dm_struct *dm)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u8 i, j, k, m;
	static boolean firstrun = true;

	if (firstrun) {
		firstrun = false;
		RF_DBG(dm, DBG_RF_IQK,
		       "[IQK]=====>PHY_IQCalibrate_8822B_Init\n");

		for (i = 0; i < SS_8822B; i++) {
			for (j = 0; j < 2; j++) {
				iqk_info->lok_fail[i] = true;
				iqk_info->iqk_fail[j][i] = true;
				iqk_info->iqc_matrix[j][i] = 0x20000000;
			}
		}

		for (i = 0; i < 2; i++) {
			iqk_info->iqk_channel[i] = 0x0;

			for (j = 0; j < SS_8822B; j++) {
				iqk_info->lok_idac[i][j] = 0x0;
				iqk_info->rxiqk_agc[i][j] = 0x0;
				iqk_info->bypass_iqk[i][j] = 0x0;

				for (k = 0; k < 2; k++) {
					iqk_info->iqk_fail_report[i][j][k] = true;
					for (m = 0; m < 8; m++) {
						iqk_info->iqk_cfir_real[i][j][k][m] = 0x0;
						iqk_info->iqk_cfir_imag[i][j][k][m] = 0x0;
					}
				}

				for (k = 0; k < 3; k++)
					iqk_info->retry_count[i][j][k] = 0x0;
			}
		}
	}
	/*parameters init.*/
	/*cu_distance (IQK result variation)=111*/
	odm_write_4byte(dm, 0x1b10, 0x88011c00);
}

boolean
_iqk_rximr_rxk1_test_8822b(struct dm_struct *dm, u8 path, u32 tone_index)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	boolean fail = true;
	u32 IQK_CMD;

	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
	odm_write_4byte(dm, 0x1b20, (odm_read_4byte(dm, 0x1b20) & 0x000fffff) | ((tone_index & 0xfff) << 20));
	odm_write_4byte(dm, 0x1b24, (odm_read_4byte(dm, 0x1b24) & 0x000fffff) | ((tone_index & 0xfff) << 20));

	IQK_CMD = 0xf8000208 | (1 << (path + 4));
	odm_write_4byte(dm, 0x1b00, IQK_CMD);
	odm_write_4byte(dm, 0x1b00, IQK_CMD + 0x1);

	ODM_delay_ms(GS_delay_8822B);
	fail = _iqk_check_cal_8822b(dm, path, 0x1);
	return fail;
}

u32 _iqk_tximr_selfcheck_8822b(void *dm_void, u8 tone_index, u8 path)
{
	u32 tx_ini_power_H[2], tx_ini_power_L[2];
	u32 tmp1, tmp2, tmp3, tmp4, tmp5;
	u32 IQK_CMD;
	u32 tximr = 0x0;
	u8 i;

	struct dm_struct *dm = (struct dm_struct *)dm_void;
	/*backup*/
	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
	odm_write_4byte(dm, 0x1bc8, 0x80000000);
	odm_write_4byte(dm, 0x8f8, 0x41400080);
	tmp1 = odm_read_4byte(dm, 0x1b0c);
	tmp2 = odm_read_4byte(dm, 0x1b14);
	tmp3 = odm_read_4byte(dm, 0x1b1c);
	tmp4 = odm_read_4byte(dm, 0x1b20);
	tmp5 = odm_read_4byte(dm, 0x1b24);
	/*setup*/
	odm_write_4byte(dm, 0x1b0c, 0x00003000);
	odm_write_4byte(dm, 0x1b1c, 0xA2193C32);
	odm_write_1byte(dm, 0x1b15, 0x00);
	odm_write_4byte(dm, 0x1b20, (u32)(tone_index << 20 | 0x00040008));
	odm_write_4byte(dm, 0x1b24, (u32)(tone_index << 20 | 0x00060008));
	odm_write_4byte(dm, 0x1b2c, 0x07);
	odm_write_4byte(dm, 0x1b38, 0x20000000);
	odm_write_4byte(dm, 0x1b3c, 0x20000000);
	/* ======derive pwr1========*/
	for (i = 0; i < 2; i++) {
		odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
		if (i == 0)
			odm_write_4byte(dm, 0x1bcc, 0x0f);
		else
			odm_write_4byte(dm, 0x1bcc, 0x09);
		/* One Shot*/
		IQK_CMD = 0x00000800;
		odm_write_4byte(dm, 0x1b34, IQK_CMD + 1);
		odm_write_4byte(dm, 0x1b34, IQK_CMD);
		ODM_delay_ms(1);
		odm_write_4byte(dm, 0x1bd4, 0x00040001);
		tx_ini_power_H[i] = odm_read_4byte(dm, 0x1bfc);
		odm_write_4byte(dm, 0x1bd4, 0x000C0001);
		tx_ini_power_L[i] = odm_read_4byte(dm, 0x1bfc);
	}
	/*restore*/
	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
	odm_write_4byte(dm, 0x1b0c, tmp1);
	odm_write_4byte(dm, 0x1b14, tmp2);
	odm_write_4byte(dm, 0x1b1c, tmp3);
	odm_write_4byte(dm, 0x1b20, tmp4);
	odm_write_4byte(dm, 0x1b24, tmp5);

	if (tx_ini_power_H[1] == tx_ini_power_H[0])
		tximr = (3 * (halrf_psd_log2base(tx_ini_power_L[0] << 2) - halrf_psd_log2base(tx_ini_power_L[1]))) / 100;
	else
		tximr = 0;
	return tximr;
}

void _iqk_start_tximr_test_8822b(struct dm_struct *dm, u8 imr_limit)
{
	boolean KFAIL;
	u8 path, i, tone_index;
	u32 imr_result;

	for (path = 0; path < 2; path++) {
		_iqk_txk_setting_8822b(dm, path);
		KFAIL = _iqk_one_shot_8822b(dm, path, TXIQK);
		for (i = 0x0; i < imr_limit; i++) {
			tone_index = (u8)(0x08 | i << 4);
			imr_result = _iqk_tximr_selfcheck_8822b(dm, tone_index, path);
			RF_DBG(dm, DBG_RF_IQK,
			       "[IQK]path=%x, toneindex = %x, TXIMR = %d\n",
			       path, tone_index, imr_result);
		}
		RF_DBG(dm, DBG_RF_IQK, "\n");
	}
}

u32 _iqk_rximr_selfcheck_8822b(void *dm_void, u32 tone_index, u8 path,
			       u32 tmp1b38)
{
	u32 rx_ini_power_H[2], rx_ini_power_L[2]; /*[0]: psd tone; [1]: image tone*/
	u32 tmp1, tmp2, tmp3, tmp4, tmp5;
	u32 IQK_CMD, tmp1bcc;
	u8 i, num_k1, rximr_step, count = 0x0;
	u32 rximr = 0x0;
	boolean KFAIL = true;

	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;

	/*backup*/
	odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
	tmp1 = odm_read_4byte(dm, 0x1b0c);
	tmp2 = odm_read_4byte(dm, 0x1b14);
	tmp3 = odm_read_4byte(dm, 0x1b1c);
	tmp4 = odm_read_4byte(dm, 0x1b20);
	tmp5 = odm_read_4byte(dm, 0x1b24);

	odm_write_4byte(dm, 0x1b0c, 0x00001000);
	odm_write_1byte(dm, 0x1b15, 0x00);
	odm_write_4byte(dm, 0x1b1c, 0x82193d31);
	odm_write_4byte(dm, 0x1b20, (u32)(tone_index << 20 | 0x00040008));
	odm_write_4byte(dm, 0x1b24, (u32)(tone_index << 20 | 0x00060048));
	odm_write_4byte(dm, 0x1b2c, 0x07);
	odm_write_4byte(dm, 0x1b38, tmp1b38);
	odm_write_4byte(dm, 0x1b3c, 0x20000000);

	for (i = 0; i < 2; i++) {
		if (i == 0)
			odm_write_4byte(dm, 0x1b1c, 0x82193d31);
		else
			odm_write_4byte(dm, 0x1b1c, 0xa2193d31);
		IQK_CMD = 0x00000800;
		odm_write_4byte(dm, 0x1b34, IQK_CMD + 1);
		odm_write_4byte(dm, 0x1b34, IQK_CMD);
		ODM_delay_ms(2);
		odm_write_1byte(dm, 0x1bd6, 0xb);
		while (count < 100) {
			count++;
			if (odm_get_bb_reg(dm, R_0x1bfc, BIT(1)) == 1)
				break;

			ODM_delay_ms(1);
		}
		if (1) {
			odm_write_1byte(dm, 0x1bd6, 0x5);
			rx_ini_power_H[i] = odm_read_4byte(dm, 0x1bfc);
			odm_write_1byte(dm, 0x1bd6, 0xe);
			rx_ini_power_L[i] = odm_read_4byte(dm, 0x1bfc);
		} else {
			rx_ini_power_H[i] = 0x0;
			rx_ini_power_L[i] = 0x0;
		}
	}
	/*restore*/
	odm_write_4byte(dm, 0x1b0c, tmp1);
	odm_write_4byte(dm, 0x1b14, tmp2);
	odm_write_4byte(dm, 0x1b1c, tmp3);
	odm_write_4byte(dm, 0x1b20, tmp4);
	odm_write_4byte(dm, 0x1b24, tmp5);
	for (i = 0; i < 2; i++)
		rx_ini_power_H[i] = (rx_ini_power_H[i] & 0xf8000000) >> 27;

	if (rx_ini_power_H[0] != rx_ini_power_H[1])
		switch (rx_ini_power_H[0]) {
		case 1:
			rx_ini_power_L[0] = (u32)((rx_ini_power_L[0] >> 1) | 0x80000000);
			rx_ini_power_L[1] = (u32)rx_ini_power_L[1] >> 1;
			break;
		case 2:
			rx_ini_power_L[0] = (u32)((rx_ini_power_L[0] >> 2) | 0x80000000);
			rx_ini_power_L[1] = (u32)rx_ini_power_L[1] >> 2;
			break;
		case 3:
			rx_ini_power_L[0] = (u32)((rx_ini_power_L[0] >> 2) | 0xc0000000);
			rx_ini_power_L[1] = (u32)rx_ini_power_L[1] >> 2;
			break;
		case 4:
			rx_ini_power_L[0] = (u32)((rx_ini_power_L[0] >> 3) | 0x80000000);
			rx_ini_power_L[1] = (u32)rx_ini_power_L[1] >> 3;
			break;
		case 5:
			rx_ini_power_L[0] = (u32)((rx_ini_power_L[0] >> 3) | 0xa0000000);
			rx_ini_power_L[1] = (u32)rx_ini_power_L[1] >> 3;
			break;
		case 6:
			rx_ini_power_L[0] = (u32)((rx_ini_power_L[0] >> 3) | 0xc0000000);
			rx_ini_power_L[1] = (u32)rx_ini_power_L[1] >> 3;
			break;
		case 7:
			rx_ini_power_L[0] = (u32)((rx_ini_power_L[0] >> 3) | 0xe0000000);
			rx_ini_power_L[1] = (u32)rx_ini_power_L[1] >> 3;
			break;
		default:
			break;
		}
	rximr = (u32)(3 * ((halrf_psd_log2base(rx_ini_power_L[0] / 100) - halrf_psd_log2base(rx_ini_power_L[1] / 100))) / 100);
#if 0
	/*
		RF_DBG(dm, DBG_RF_IQK, "%-20s: 0x%x, 0x%x, 0x%x, 0x%x,0x%x, tone_index=%x, rximr= %d\n",
		(path == 0) ? "PATH A RXIMR ": "PATH B RXIMR",
		rx_ini_power_H[0], rx_ini_power_L[0], rx_ini_power_H[1], rx_ini_power_L[1], tmp1bcc, tone_index, rximr);
*/
#endif
	return rximr;
}

void _iqk_rximr_test_8822b(struct dm_struct *dm, u8 path, u8 imr_limit)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	boolean kfail;
	u8 i, step, count, side;
	u32 imr_result = 0, tone_index;
	u32 temp = 0, temp1b38[2][15];
	char *freq[15] = {"1.25MHz", "3.75MHz", "6.25MHz", "8.75MHz", "11.25MHz",
			  "13.75MHz", "16.25MHz", "18.75MHz", "21.25MHz", "23.75MHz",
			  "26.25MHz", "28.75MHz", "31.25MHz", "33.75MHz", "36.25MHz"};

	for (step = 1; step < 5; step++) {
		count = 0;
		switch (step) {
		case 1: /*gain search_RXK1*/
			_iqk_rxk1_setting_8822b(dm, path);
			while (count < 3) {
				kfail = _iqk_rx_iqk_gain_search_fail_8822b(dm, path, RXIQK1);
				RF_DBG(dm, DBG_RF_IQK,
				       "[IQK]path = %x, kfail = %x\n", path,
				       kfail);
				if (kfail) {
					count++;
					if (count == 3)
						step = 5;
				} else {
					break;
				}
			}
			break;
		case 2: /*gain search_RXK2*/
			_iqk_rxk2_setting_8822b(dm, path, true);
			iqk_info->isbnd = false;
			while (count < 8) {
				kfail = _iqk_rx_iqk_gain_search_fail_8822b(dm, path, RXIQK2);
				RF_DBG(dm, DBG_RF_IQK,
				       "[IQK]path = %x, kfail = %x\n", path,
				       kfail);
				if (kfail) {
					count++;
					if (count == 8)
						step = 5;
				} else {
					break;
				}
			}
			break;
		case 3: /*get RXK1 IQC*/
			odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
			temp = odm_read_4byte(dm, 0x1b1c);
			for (side = 0; side < 2; side++) {
				for (i = 0; i < imr_limit; i++) {
					if (side == 0)
						tone_index = 0xff8 - (i << 4);
					else
						tone_index = 0x08 | (i << 4);
					while (count < 3) {
						_iqk_rxk1_setting_8822b(dm, path);
						kfail = _iqk_rximr_rxk1_test_8822b(dm, path, tone_index);
						RF_DBG(dm, DBG_RF_IQK, "[IQK]path = %x, kfail = %x\n", path, kfail);
						if (kfail) {
							count++;
							if (count == 3) {
								step = 5;
								temp1b38[side][i] = 0x20000000;
								RF_DBG(dm, DBG_RF_IQK, "[IQK]path = %x, toneindex = %x rxk1 fail\n", path, tone_index);
							}
						} else {
							odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
							odm_write_4byte(dm, 0x1b1c, 0xa2193c32);
							odm_write_4byte(dm, 0x1b14, 0xe5);
							odm_write_4byte(dm, 0x1b14, 0x0);
							temp1b38[side][i] = odm_read_4byte(dm, 0x1b38);
							RF_DBG(dm, DBG_RF_IQK, "[IQK]path = 0x%x, tone_idx = 0x%x, tmp1b38 = 0x%x\n", path, tone_index, temp1b38[side][i]);
							break;
						}
					}
				}
			}
			break;
		case 4: /*get RX IMR*/
			for (side = 0; side < 2; side++) {
				for (i = 0x0; i < imr_limit; i++) {
					if (side == 0)
						tone_index = 0xff8 - (i << 4);
					else
						tone_index = 0x08 | (i << 4);
					_iqk_rxk2_setting_8822b(dm, path, false);
					imr_result = _iqk_rximr_selfcheck_8822b(dm, tone_index, path, temp1b38[side][i]);
					RF_DBG(dm, DBG_RF_IQK, "[IQK]tone_idx = 0x%5x, freq = %s%10s, RXIMR = %5d dB\n", tone_index, (side == 0) ? "-" : " ", freq[i], imr_result);
				}
				odm_write_4byte(dm, 0x1b00, 0xf8000008 | path << 1);
				odm_write_4byte(dm, 0x1b1c, temp);
				odm_write_4byte(dm, 0x1b38, 0x20000000);
			}
			break;
		}
	}
}

void _iqk_start_rximr_test_8822b(struct dm_struct *dm, u8 imr_limit)
{
	u8 path;

	for (path = 0; path < 2; path++)
		_iqk_rximr_test_8822b(dm, path, imr_limit);
}

void _iqk_start_imr_test_8822b(void *dm_void)
{
	u8 imr_limit;

	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;

	if (*dm->band_width == 2)
		imr_limit = 0xf;
	else if (*dm->band_width == 1)
		imr_limit = 0x8;
	else
		imr_limit = 0x4;
#if 0
	/*	_iqk_start_tximr_test_8822b(dm, imr_limit);*/
#endif
	_iqk_start_rximr_test_8822b(dm, imr_limit);
}

void _phy_iq_calibrate_8822b(struct dm_struct *dm, boolean reset,
			     boolean segment_iqk)
{
	u32 MAC_backup[MAC_REG_NUM_8822B], BB_backup[BB_REG_NUM_8822B], RF_backup[RF_REG_NUM_8822B][SS_8822B];
	u32 backup_mac_reg[MAC_REG_NUM_8822B] = {0x520, 0x550};
	u32 backup_bb_reg[BB_REG_NUM_8822B] = {0x808, 0x90c, 0xc00, 0xcb0, 0xcb4, 0xcbc, 0xe00, 0xeb0, 0xeb4, 0xebc, 0x1990, 0x9a4, 0xa04, 0xb00};
	u32 backup_rf_reg[RF_REG_NUM_8822B] = {0xdf, 0x8f, 0x65, 0x0, 0x1};
	boolean is_mp = false;

	struct dm_iqk_info *iqk_info = &dm->IQK_info;

	if (*dm->mp_mode)
		is_mp = true;

	if (!is_mp)
		if (_iqk_reload_iqk_8822b(dm, reset))
			return;

	RF_DBG(dm, DBG_RF_IQK, "[IQK]==========IQK strat!!!!!==========\n");

	RF_DBG(dm, DBG_RF_IQK,
	       "[IQK]band_type = %s, band_width = %d, ExtPA2G = %d, ext_pa_5g = %d\n",
	       (*dm->band_type == ODM_BAND_5G) ? "5G" : "2G", *dm->band_width,
	       dm->ext_pa, dm->ext_pa_5g);
	RF_DBG(dm, DBG_RF_IQK, "[IQK]Interface = %d, cut_version = %x\n",
	       dm->support_interface, dm->cut_version);

	iqk_info->iqk_times++;
	iqk_info->kcount = 0;
	dm->rf_calibrate_info.iqk_step = 1;
	iqk_info->rxiqk_step = 1;

	_iqk_backup_iqk_8822b(dm, 0x0, 0x0);
	_iqk_backup_mac_bb_8822b(dm, MAC_backup, BB_backup, backup_mac_reg, backup_bb_reg);
	_iqk_backup_rf_8822b(dm, RF_backup, backup_rf_reg);
#if 0
	_iqk_configure_macbb_8822b(dm);
	_iqk_afe_setting_8822b(dm, true);
	_iqk_rfe_setting_8822b(dm, false);
	_iqk_agc_bnd_int_8822b(dm);
	_iqk_rf_setting_8822b(dm);
#endif

	while (1) {
		_iqk_configure_macbb_8822b(dm);
		_iqk_afe_setting_8822b(dm, true);
		_iqk_rfe_setting_8822b(dm, false);
		_iqk_agc_bnd_int_8822b(dm);
		_iqk_rf_setting_8822b(dm);
		_iqk_start_iqk_8822b(dm, segment_iqk);
		_iqk_afe_setting_8822b(dm, false);
		_iqk_restore_mac_bb_8822b(dm, MAC_backup, BB_backup, backup_mac_reg, backup_bb_reg);
		_iqk_restore_rf_8822b(dm, backup_rf_reg, RF_backup);
		if (dm->rf_calibrate_info.iqk_step == 7)
			break;
		iqk_info->kcount = 0;
		RF_DBG(dm, DBG_RF_IQK, "[IQK]delay 50ms!!!\n");
		ODM_delay_ms(50);
	};
	if (segment_iqk)
		_iqk_reload_iqk_setting_8822b(dm, 0x0, 0x1);
#if 0
	_iqk_afe_setting_8822b(dm, false);
	_iqk_restore_mac_bb_8822b(dm, MAC_backup, BB_backup, backup_mac_reg, backup_bb_reg);
	_iqk_restore_rf_8822b(dm, backup_rf_reg, RF_backup);
#endif
	_iqk_fill_iqk_report_8822b(dm, 0);
	_iqk_rf0xb0_workaround(dm);
	RF_DBG(dm, DBG_RF_IQK, "[IQK]==========IQK end!!!!!==========\n");
}

void _phy_iq_calibrate_by_fw_8822b(void *dm_void, u8 clear, u8 segment_iqk)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	enum hal_status status = HAL_STATUS_FAILURE;

	if (*dm->mp_mode)
		clear = 0x1;
#if 0
	/*	else if (dm->is_linked)*/
	/*		segment_iqk = 0x1;*/
#endif

	iqk_info->iqk_times++;
	status = odm_iq_calibrate_by_fw(dm, clear, segment_iqk);

	if (status == HAL_STATUS_SUCCESS)
		RF_DBG(dm, DBG_RF_IQK, "[IQK]FWIQK OK!!!\n");
	else
		RF_DBG(dm, DBG_RF_IQK, "[IQK]FWIQK fail!!!\n");
}

/*IQK_version:0x2e NCTL:0x8*/
/*1.add fwiqk reload check*/
/*2.fix gain search overflow issue*/
void phy_iq_calibrate_8822b(void *dm_void, boolean clear, boolean segment_iqk)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;
	struct _hal_rf_ *rf = &dm->rf_table;

	if (*dm->mp_mode)
		halrf_iqk_hwtx_check(dm, true);
	/*FW IQK*/
	if (dm->fw_offload_ability & PHYDM_RF_IQK_OFFLOAD) {
		_phy_iq_calibrate_by_fw_8822b(dm, clear, (u8)(segment_iqk));
		phydm_get_read_counter(dm);
		halrf_iqk_check_if_reload(dm);
	} else {
		_iq_calibrate_8822b_init(dm);
		_phy_iq_calibrate_8822b(dm, clear, segment_iqk);
	}
	_iqk_fail_count_8822b(dm);
	if (*dm->mp_mode)
		halrf_iqk_hwtx_check(dm, false);
#if (DM_ODM_SUPPORT_TYPE & ODM_AP)
	_iqk_iqk_fail_report_8822b(dm);
#endif
	halrf_iqk_dbg(dm);
}

void _phy_imr_measure(struct dm_struct *dm)
{
	struct dm_iqk_info *iqk_info = &dm->IQK_info;
	u32 MAC_backup[MAC_REG_NUM_8822B], BB_backup[BB_REG_NUM_8822B], RF_backup[RF_REG_NUM_8822B][SS_8822B];
	u32 backup_mac_reg[MAC_REG_NUM_8822B] = {0x520, 0x550};
	u32 backup_bb_reg[BB_REG_NUM_8822B] = {0x808, 0x90c, 0xc00, 0xcb0, 0xcb4, 0xcbc, 0xe00, 0xeb0, 0xeb4, 0xebc, 0x1990, 0x9a4, 0xa04, 0xb00};
	u32 backup_rf_reg[RF_REG_NUM_8822B] = {0xdf, 0x8f, 0x65, 0x0, 0x1};

	_iqk_backup_iqk_8822b(dm, 0x0, 0x0);
	_iqk_backup_mac_bb_8822b(dm, MAC_backup, BB_backup, backup_mac_reg, backup_bb_reg);
	_iqk_backup_rf_8822b(dm, RF_backup, backup_rf_reg);
	_iqk_configure_macbb_8822b(dm);
	_iqk_afe_setting_8822b(dm, true);
	_iqk_rfe_setting_8822b(dm, false);
	_iqk_agc_bnd_int_8822b(dm);
	_iqk_rf_setting_8822b(dm);

	_iqk_start_imr_test_8822b(dm);

	_iqk_afe_setting_8822b(dm, false);
	_iqk_restore_mac_bb_8822b(dm, MAC_backup, BB_backup, backup_mac_reg, backup_bb_reg);
	_iqk_restore_rf_8822b(dm, backup_rf_reg, RF_backup);
}

void do_imr_test_8822b(void *dm_void)
{
	struct dm_struct *dm = (struct dm_struct *)dm_void;

	RF_DBG(dm, DBG_RF_IQK,
	       "[IQK]  ************IMR Test *****************\n");
	_phy_imr_measure(dm);
	RF_DBG(dm, DBG_RF_IQK,
	       "[IQK]  **********End IMR Test *******************\n");
}
#endif
