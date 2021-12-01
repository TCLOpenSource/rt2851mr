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

#ifndef	__PHYDMCCX_H__
#define    __PHYDMCCX_H__

/* 1 ============================================================
 * 1  Definition
 * 1 ============================================================ */

#define CCX_EN 1

#define	IGI_TO_NHM_TH_MULTIPLIER	2
#define	MS_TO_4US_RATIO				250
#define	CCA_CAP	14
#define	CLM_MAX_REPORT_TIME	10
#define	DEVIDER_ERROR	0xffff

#define	NHM_TH_NUM	11	/*threshold number of NHM*/
#define	NHM_RPT_NUM	12

#define	IGI_2_NHM_TH(igi)	((igi) << 1)	/*NHM_threshold = IGI * 2*/

/*FAHM*/
#define	FAHM_INCLD_FA			BIT(0)
#define	FAHM_INCLD_CRC_OK	BIT(1)
#define	FAHM_INCLD_CRC_ER		BIT(2)


/* 1 ============================================================
 * 1 enumrate
 * 1 ============================================================ */

enum phydm_nhm_level {
	NHM_RELEASE = -1,
	NHM_LV_0 = 0,	/* Low Priority function */
	NHM_LV_1 = 1,	/* Middle Priority function */
	NHM_LV_2 = 2,	/* High priority function (ex: Check hang function) */
	NHM_LV_3 = 3,	/* Debug function (the highest priority) */
	NHM_MAX_NUM = 4
};

enum nhm_setting {
	SET_NHM_SETTING,
	STORE_NHM_SETTING,
	RESTORE_NHM_SETTING
};

enum nhm_inexclude_cca {
	NHM_EXCLUDE_CCA,
	NHM_INCLUDE_CCA
};

enum nhm_inexclude_txon {
	NHM_EXCLUDE_TXON,
	NHM_INCLUDE_TXON
};

enum nhm_threshold_rule {
	IGI_UNIFORM_2DB = 0,
	IEEE_11K_HIGH	= 1,
	IEEE_11K_LOW	= 2,
	INTEL_XBOX		= 3
};

enum clm_monitor_mode {
	CLM_ECHO_DBG_MODE	= 0,
	CLM_DRIVER_MNTR		= 1,
	CLM_FW_MNTR			= 2
};

/* 1 ============================================================
 * 1  structure
 * 1 ============================================================ */

struct ccx_info {
	/*Settings*/
	u8					nhm_th[NHM_TH_NUM];
	u16					nhm_period;				/* 4us per unit */
	enum nhm_threshold_rule		th_rule;
	enum nhm_inexclude_txon		nhm_inexclude_txon;
	enum nhm_inexclude_cca		nhm_inexclude_cca;

	/*Previous Settings*/
	u8					nhm_th_restore[NHM_TH_NUM];
	u16					nhm_period_restore;				/* 4us per unit */
	enum nhm_inexclude_txon		nhm_inexclude_txon_restore;
	enum nhm_inexclude_cca		nhm_inexclude_cca_restore;

	/*Report*/
	u8		nhm_result[NHM_RPT_NUM];
	u8		nhm_ratio;		/*1% per nuit, it means the interference igi can't overcome.*/
	u8		nhm_result_total;
	u16		nhm_duration;
	u8		nhm_set_lv;
	boolean	nhm_ongoing;
#ifdef CLM_SUPPORT
	boolean	clm_ongoing;
	u16		clm_period;				/* 4us per unit */
	u16		clm_result;
	u8		clm_ratio;
	u8		echo_igi;	/* nhm_result comes from this igi */
	u32		clm_fw_result_acc;
	u8		clm_fw_result_cnt;
	enum clm_monitor_mode		clm_mntr_mode;
#endif

#ifdef FAHM_SUPPORT
	boolean	fahm_ongoing;
	u8		env_mntr_igi;
	u8		fahm_nume_sel;		/*fahm_numerator_sel: select {FA, CRCOK, CRC_fail} */
	u8		fahm_denum_sel;	/*fahm_denumerator_sel: select {FA, CRCOK, CRC_fail} */
	u16		fahm_period;			/*unit: 4us*/
#endif

};

/* 1 ============================================================
 * 1 structure
 * 1 ============================================================ */

#ifdef FAHM_SUPPORT

void
phydm_fahm_init(
	void			*dm_void
);

void
phydm_fahm_dbg(
	void		*dm_void,
	char		input[][16],
	u32		*_used,
	char		*output,
	u32		*_out_len,
	u32		input_num
);

#endif

void
phydm_clm_c2h_report_handler(
	void	*dm_void,
	u8	*cmd_buf,
	u8	cmd_len
);
/*NHM*/

boolean
phydm_cal_nhm_cnt(
	void		*dm_void
);

void
phydm_nhm_setting(
	void		*dm_void,
	u8	nhm_setting
);

void
phydm_nhm_trigger(
	void		*dm_void
);

void
phydm_get_nhm_result(
	void		*dm_void
);

/*CLM*/

void
phydm_clm_setting(
	void			*dm_void
);

void
phydm_clm_trigger(
	void			*dm_void
);

boolean
phydm_clm_check_rdy(
	void			*dm_void
);

void
phydm_clm_get_result(
	void			*dm_void
);

void
phydm_ccx_monitor(
	void			*dm_void
);

void
phydm_ccx_monitor_trigger(
	void			*dm_void,
	u16				monitor_time
);

void
phydm_ccx_monitor_result(
	void			*dm_void
);

void
phydm_set_clm_mntr_mode(
	void			*dm_void,
	enum clm_monitor_mode mode
);

void
phydm_env_monitor_init(
	void			*dm_void
);

void
phydm_clm_dbg(
	void		*dm_void,
	char		input[][16],
	u32		*_used,
	char		*output,
	u32		*_out_len,
	u32		input_num
);

void
phydm_nhm_init(
	void			*dm_void
);

void
phydm_nhm_dbg(
	void		*dm_void,
	char		input[][16],
	u32		*_used,
	char		*output,
	u32		*_out_len,
	u32		input_num
);

#endif
