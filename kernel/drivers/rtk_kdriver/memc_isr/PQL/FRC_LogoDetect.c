#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"
#include "memc_isr/PQL/FRC_LogoDetect.h"
#include "memc_isr/PQL/PQLGlobalDefs.h"
#include "memc_isr/PQL/Read_ComReg.h"
///////////////////////////////////////////////////////////////////////////////////////////
/*
PQL Improvement:
1. PQL run at PC use _WIN32. (need change to more clear define)
2. Param must be init in order, gen PQL_Glb_Param.c (it's not convenient, can same as output?)


*/
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
VOID FRC_LogoDet_Init(_OUTPUT_FRC_LGDet *pOutput)
{
	int i;
	pOutput->s16_blklogo_glbclr_cnt = 0;

	for (i=0; i<LOGO_RG_32; i++)
	{
		*(pOutput->s16_blklogo_rgclr_cnt + i) = 0;
	}

	pOutput->u1_rg_dh_clr_rg0 = 0;
	pOutput->u1_rg_dh_clr_rg1 = 0;
	pOutput->u1_rg_dh_clr_rg2 = 0;
	pOutput->u1_rg_dh_clr_rg3 = 0;

	pOutput->u8_rg_dh_clr_lgclr_hold_frm = 0;
	pOutput->u8_rg_dh_clr_static_hold_frm = 0;

	pOutput->u32_logo_hsty_clr_idx = 0;
	pOutput->u32_logo_hsty_clr_lgclr_idx = 0;
	pOutput->u1_logo_cnt_glb_clr_status = 0;
	pOutput->u1_logo_sc_glb_clr_status  = 0;

	pOutput->u1_logo_static_status = 0;

	pOutput->u31_logo_sad_pre = 0;
	pOutput->u1_logo_sc_status = 0;
	pOutput->u8_logo_sc_hold_frm = 0;

	pOutput->u1_logo_sc_dtldif_status = 0;
	pOutput->u1_logo_sc_Gmv_status = 0;
	pOutput->u1_logo_sc_saddif_status = 0;
	pOutput->u8_Rg_static_num = 0;
	pOutput->u32_Rg_unstatic_idx = 0;

	pOutput->u1_logo_netflix_status = 0;
	pOutput->u8_logo_netflix_hold_frm = 0;

	pOutput->u1_logo_lg16s_patch_status   = 0;
	pOutput->u8_logo_lg16s_patch_hold_frm = 0;

	pOutput->u1_logo_lg16s_patch_Gapli_status     = 0;
	pOutput->u1_logo_lg16s_patch_Gaplp_status     = 0;
	pOutput->u1_logo_lg16s_patch_Gdtl_status     = 0;
	pOutput->u1_logo_lg16s_patch_Gsad_status     = 0;
	pOutput->u1_logo_lg16s_patch_Gmv_status      = 0;
	pOutput->u1_logo_lg16s_patch_Rdtl_num_status = 0;

	// UXN patch
	pOutput->u1_lg_UXN_patch_det = 0;

	// Defualt value storage
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_BITEND, &pOutput->DefaultVal.reg_km_logo_blkgrdsum2_th);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_BITEND, &pOutput->DefaultVal.reg_km_logo_blkadphstystep_en);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_BITEND, &pOutput->DefaultVal.reg_km_logo_blkhsty_nstep);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_BITEND, &pOutput->DefaultVal.reg_km_logo_blkhsty_pstep);

	ReadRegister(FRC_TOP__MC2__mc_logo_vlpf_en_ADDR,FRC_TOP__MC2__mc_logo_vlpf_en_BITSTART, FRC_TOP__MC2__mc_logo_vlpf_en_BITEND, &pOutput->DefaultVal.reg_mc_logo_vlpf_en);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_iir_alpha_ADDR, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITSTART, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITEND, &pOutput->DefaultVal.reg_km_logo_iir_alpha);
	ReadRegister(FRC_TOP__MC2__mc_logo_en_ADDR, FRC_TOP__MC2__mc_logo_en_BITSTART, FRC_TOP__MC2__mc_logo_en_BITEND, &pOutput->DefaultVal.reg_mc_logo_en);

	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx0_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx0_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx0_BITEND,  &pOutput->DefaultVal.blkhsty_pth[0]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx1_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx1_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx1_BITEND,  &pOutput->DefaultVal.blkhsty_pth[1]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx2_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx2_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx2_BITEND,  &pOutput->DefaultVal.blkhsty_pth[2]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx3_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx3_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx3_BITEND,  &pOutput->DefaultVal.blkhsty_pth[3]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx4_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx4_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx4_BITEND,  &pOutput->DefaultVal.blkhsty_pth[4]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx5_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx5_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx5_BITEND,  &pOutput->DefaultVal.blkhsty_pth[5]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx6_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx6_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx6_BITEND,  &pOutput->DefaultVal.blkhsty_pth[6]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx7_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx7_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx7_BITEND,  &pOutput->DefaultVal.blkhsty_pth[7]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx8_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx8_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx8_BITEND,  &pOutput->DefaultVal.blkhsty_pth[8]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx9_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx9_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx9_BITEND,  &pOutput->DefaultVal.blkhsty_pth[9]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10_BITEND, &pOutput->DefaultVal.blkhsty_pth[10]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx11_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx11_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx11_BITEND, &pOutput->DefaultVal.blkhsty_pth[11]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx12_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx12_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx12_BITEND, &pOutput->DefaultVal.blkhsty_pth[12]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx13_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx13_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx13_BITEND, &pOutput->DefaultVal.blkhsty_pth[13]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx14_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx14_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx14_BITEND, &pOutput->DefaultVal.blkhsty_pth[14]);

	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx0_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx0_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx0_BITEND,  &pOutput->DefaultVal.blkhsty_nth[0]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx1_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx1_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx1_BITEND,  &pOutput->DefaultVal.blkhsty_nth[1]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx2_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx2_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx2_BITEND,  &pOutput->DefaultVal.blkhsty_nth[2]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx3_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx3_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx3_BITEND,  &pOutput->DefaultVal.blkhsty_nth[3]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx4_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx4_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx4_BITEND,  &pOutput->DefaultVal.blkhsty_nth[4]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx5_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx5_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx5_BITEND,  &pOutput->DefaultVal.blkhsty_nth[5]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx6_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx6_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx6_BITEND,  &pOutput->DefaultVal.blkhsty_nth[6]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx7_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx7_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx7_BITEND,  &pOutput->DefaultVal.blkhsty_nth[7]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx8_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx8_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx8_BITEND,  &pOutput->DefaultVal.blkhsty_nth[8]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx9_ADDR,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx9_BITSTART,  FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx9_BITEND,  &pOutput->DefaultVal.blkhsty_nth[9]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10_BITEND, &pOutput->DefaultVal.blkhsty_nth[10]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx11_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx11_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx11_BITEND, &pOutput->DefaultVal.blkhsty_nth[11]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx12_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx12_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx12_BITEND, &pOutput->DefaultVal.blkhsty_nth[12]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx13_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx13_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx13_BITEND, &pOutput->DefaultVal.blkhsty_nth[13]);
	ReadRegister(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx14_ADDR, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx14_BITSTART, FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx14_BITEND, &pOutput->DefaultVal.blkhsty_nth[14]);

	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0_BITEND,  &pOutput->DefaultVal.blksamethr_l[0]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx1_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx1_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx1_BITEND,  &pOutput->DefaultVal.blksamethr_l[1]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx2_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx2_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx2_BITEND,  &pOutput->DefaultVal.blksamethr_l[2]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx3_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx3_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx3_BITEND,  &pOutput->DefaultVal.blksamethr_l[3]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4_BITEND,  &pOutput->DefaultVal.blksamethr_l[4]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx5_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx5_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx5_BITEND,  &pOutput->DefaultVal.blksamethr_l[5]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx6_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx6_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx6_BITEND,  &pOutput->DefaultVal.blksamethr_l[6]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx7_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx7_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx7_BITEND,  &pOutput->DefaultVal.blksamethr_l[7]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx8_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx8_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx8_BITEND,  &pOutput->DefaultVal.blksamethr_l[8]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx9_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx9_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx9_BITEND,  &pOutput->DefaultVal.blksamethr_l[9]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx10_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx10_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx10_BITEND, &pOutput->DefaultVal.blksamethr_l[10]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx11_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx11_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx11_BITEND, &pOutput->DefaultVal.blksamethr_l[11]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx12_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx12_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx12_BITEND, &pOutput->DefaultVal.blksamethr_l[12]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx13_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx13_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx13_BITEND, &pOutput->DefaultVal.blksamethr_l[13]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14_BITEND, &pOutput->DefaultVal.blksamethr_l[14]);

	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0_BITEND,  &pOutput->DefaultVal.blksamethr_a[0]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx1_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx1_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx1_BITEND,  &pOutput->DefaultVal.blksamethr_a[1]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx2_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx2_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx2_BITEND,  &pOutput->DefaultVal.blksamethr_a[2]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx3_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx3_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx3_BITEND,  &pOutput->DefaultVal.blksamethr_a[3]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITEND,  &pOutput->DefaultVal.blksamethr_a[4]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx5_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx5_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx5_BITEND,  &pOutput->DefaultVal.blksamethr_a[5]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx6_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx6_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx6_BITEND,  &pOutput->DefaultVal.blksamethr_a[6]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx7_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx7_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx7_BITEND,  &pOutput->DefaultVal.blksamethr_a[7]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx8_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx8_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx8_BITEND,  &pOutput->DefaultVal.blksamethr_a[8]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx9_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx9_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx9_BITEND,  &pOutput->DefaultVal.blksamethr_a[9]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITEND, &pOutput->DefaultVal.blksamethr_a[10]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx11_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx11_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx11_BITEND, &pOutput->DefaultVal.blksamethr_a[11]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITEND, &pOutput->DefaultVal.blksamethr_a[12]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx13_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx13_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx13_BITEND, &pOutput->DefaultVal.blksamethr_a[13]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14_BITEND, &pOutput->DefaultVal.blksamethr_a[14]);

	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx0_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx0_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx0_BITEND,  &pOutput->DefaultVal.blksamethr_h[0]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx1_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx1_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx1_BITEND,  &pOutput->DefaultVal.blksamethr_h[1]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx2_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx2_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx2_BITEND,  &pOutput->DefaultVal.blksamethr_h[2]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx3_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx3_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx3_BITEND,  &pOutput->DefaultVal.blksamethr_h[3]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITEND,  &pOutput->DefaultVal.blksamethr_h[4]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx5_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx5_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx5_BITEND,  &pOutput->DefaultVal.blksamethr_h[5]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx6_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx6_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx6_BITEND,  &pOutput->DefaultVal.blksamethr_h[6]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx7_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx7_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx7_BITEND,  &pOutput->DefaultVal.blksamethr_h[7]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx8_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx8_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx8_BITEND,  &pOutput->DefaultVal.blksamethr_h[8]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx9_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx9_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx9_BITEND,  &pOutput->DefaultVal.blksamethr_h[9]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITEND, &pOutput->DefaultVal.blksamethr_h[10]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx11_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx11_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx11_BITEND, &pOutput->DefaultVal.blksamethr_h[11]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITEND, &pOutput->DefaultVal.blksamethr_h[12]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx13_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx13_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx13_BITEND, &pOutput->DefaultVal.blksamethr_h[13]);
	ReadRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx14_ADDR, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx14_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx14_BITEND, &pOutput->DefaultVal.blksamethr_h[14]);

	// Dehalo logo process default value
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITEND, &pOutput->DefaultVal.dh_logo_bypass[0][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_BITEND, &pOutput->DefaultVal.dh_logo_bypass[1][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_BITEND, &pOutput->DefaultVal.dh_logo_bypass[1][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_BITEND, &pOutput->DefaultVal.dh_logo_bypass[1][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_BITEND, &pOutput->DefaultVal.dh_logo_bypass[1][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_BITEND, &pOutput->DefaultVal.dh_logo_bypass[1][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg2_BITEND, &pOutput->DefaultVal.dh_logo_bypass[2][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg2_BITEND, &pOutput->DefaultVal.dh_logo_bypass[2][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg2_BITEND, &pOutput->DefaultVal.dh_logo_bypass[2][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_BITEND, &pOutput->DefaultVal.dh_logo_bypass[2][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_BITEND, &pOutput->DefaultVal.dh_logo_bypass[2][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg3_BITEND, &pOutput->DefaultVal.dh_logo_bypass[3][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg3_BITEND, &pOutput->DefaultVal.dh_logo_bypass[3][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg3_BITEND, &pOutput->DefaultVal.dh_logo_bypass[3][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_BITEND, &pOutput->DefaultVal.dh_logo_bypass[3][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_BITEND, &pOutput->DefaultVal.dh_logo_bypass[3][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg4_BITEND, &pOutput->DefaultVal.dh_logo_bypass[4][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg4_BITEND, &pOutput->DefaultVal.dh_logo_bypass[4][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg4_BITEND, &pOutput->DefaultVal.dh_logo_bypass[4][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_BITEND, &pOutput->DefaultVal.dh_logo_bypass[4][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_BITEND, &pOutput->DefaultVal.dh_logo_bypass[4][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg5_BITEND, &pOutput->DefaultVal.dh_logo_bypass[5][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg5_BITEND, &pOutput->DefaultVal.dh_logo_bypass[5][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg5_BITEND, &pOutput->DefaultVal.dh_logo_bypass[5][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_BITEND, &pOutput->DefaultVal.dh_logo_bypass[5][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_BITEND, &pOutput->DefaultVal.dh_logo_bypass[5][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg6_BITEND, &pOutput->DefaultVal.dh_logo_bypass[6][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg6_BITEND, &pOutput->DefaultVal.dh_logo_bypass[6][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg6_BITEND, &pOutput->DefaultVal.dh_logo_bypass[6][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_BITEND, &pOutput->DefaultVal.dh_logo_bypass[6][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_BITEND, &pOutput->DefaultVal.dh_logo_bypass[6][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg7_BITEND, &pOutput->DefaultVal.dh_logo_bypass[7][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg7_BITEND, &pOutput->DefaultVal.dh_logo_bypass[7][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg7_BITEND, &pOutput->DefaultVal.dh_logo_bypass[7][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_BITEND, &pOutput->DefaultVal.dh_logo_bypass[7][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_BITEND, &pOutput->DefaultVal.dh_logo_bypass[7][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg8_BITEND, &pOutput->DefaultVal.dh_logo_bypass[8][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg8_BITEND, &pOutput->DefaultVal.dh_logo_bypass[8][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg8_BITEND, &pOutput->DefaultVal.dh_logo_bypass[8][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_BITEND, &pOutput->DefaultVal.dh_logo_bypass[8][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_BITEND, &pOutput->DefaultVal.dh_logo_bypass[8][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg9_BITEND, &pOutput->DefaultVal.dh_logo_bypass[9][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg9_BITEND, &pOutput->DefaultVal.dh_logo_bypass[9][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg9_BITEND, &pOutput->DefaultVal.dh_logo_bypass[9][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_BITEND, &pOutput->DefaultVal.dh_logo_bypass[9][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_BITEND, &pOutput->DefaultVal.dh_logo_bypass[9][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rga_BITEND, &pOutput->DefaultVal.dh_logo_bypass[10][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rga_BITEND, &pOutput->DefaultVal.dh_logo_bypass[10][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rga_BITEND, &pOutput->DefaultVal.dh_logo_bypass[10][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rga_BITEND, &pOutput->DefaultVal.dh_logo_bypass[10][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rga_BITEND, &pOutput->DefaultVal.dh_logo_bypass[10][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgb_BITEND, &pOutput->DefaultVal.dh_logo_bypass[11][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgb_BITEND, &pOutput->DefaultVal.dh_logo_bypass[11][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgb_BITEND, &pOutput->DefaultVal.dh_logo_bypass[11][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_BITEND, &pOutput->DefaultVal.dh_logo_bypass[11][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_BITEND, &pOutput->DefaultVal.dh_logo_bypass[11][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgc_BITEND, &pOutput->DefaultVal.dh_logo_bypass[12][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgc_BITEND, &pOutput->DefaultVal.dh_logo_bypass[12][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgc_BITEND, &pOutput->DefaultVal.dh_logo_bypass[12][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_BITEND, &pOutput->DefaultVal.dh_logo_bypass[12][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_BITEND, &pOutput->DefaultVal.dh_logo_bypass[12][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgd_BITEND, &pOutput->DefaultVal.dh_logo_bypass[13][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgd_BITEND, &pOutput->DefaultVal.dh_logo_bypass[13][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgd_BITEND, &pOutput->DefaultVal.dh_logo_bypass[13][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_BITEND, &pOutput->DefaultVal.dh_logo_bypass[13][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_BITEND, &pOutput->DefaultVal.dh_logo_bypass[13][4]);

	ReadRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rge_BITEND, &pOutput->DefaultVal.dh_logo_bypass[14][0]);
	ReadRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rge_BITEND, &pOutput->DefaultVal.dh_logo_bypass[14][1]);
	ReadRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rge_BITEND, &pOutput->DefaultVal.dh_logo_bypass[14][2]);
	ReadRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rge_BITEND, &pOutput->DefaultVal.dh_logo_bypass[14][3]);
	ReadRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rge_BITEND, &pOutput->DefaultVal.dh_logo_bypass[14][4]);

	// OBME pattern selection
	ReadRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode_sel), &pOutput->DefaultVal.me1_ip_dc_obme_mode_sel);
	ReadRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode), &pOutput->DefaultVal.me1_ip_dc_obme_mode);
	ReadRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_ac_obme_mode), &pOutput->DefaultVal.me1_ip_ac_obme_mode);
	ReadRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode), &pOutput->DefaultVal.me1_pi_dc_obme_mode_sel);
	ReadRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode), &pOutput->DefaultVal.me1_pi_dc_obme_mode);
	ReadRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_ac_obme_mode), &pOutput->DefaultVal.me1_pi_ac_obme_mode);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode_sel), &pOutput->DefaultVal.me2_1st_dc_obme_mode_sel);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode), &pOutput->DefaultVal.me2_1st_dc_obme_mode);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ac_obme_mode), &pOutput->DefaultVal.me2_1st_ac_obme_mode);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode_sel), &pOutput->DefaultVal.me2_2nd_dc_obme_mode_sel);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode), &pOutput->DefaultVal.me2_2nd_dc_obme_mode);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ac_obme_mode), &pOutput->DefaultVal.me2_2nd_ac_obme_mode);

	// sld need only clear block logo result when necessary, use erosion threshold to do it
	ReadRegister(FRC_TOP__KME_LOGO2__km_logo_blklogopostdlt_th_ADDR, FRC_TOP__KME_LOGO2__km_logo_blklogopostdlt_th_BITSTART, FRC_TOP__KME_LOGO2__km_logo_blklogopostdlt_th_BITEND, &pOutput->DefaultVal.u6_logo_blklogopostdlt_th);
	ReadRegister(FRC_TOP__KME_LOGO2__km_logo_blklogopost_ero_th_ADDR, FRC_TOP__KME_LOGO2__km_logo_blklogopost_ero_th_BITSTART, FRC_TOP__KME_LOGO2__km_logo_blklogopost_ero_th_BITEND, &pOutput->DefaultVal.u6_logo_blklogopost_ero_th);
}

VOID FRC_LgDet_BlkClrCtrl(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 idx;
	UINT32 acc_blk_num;
	UINT32 acc_left_blk_num = 0;
	UINT32 acc_right_blk_num = 0;
	UINT32 acc_top_blk_num = 0;
	UINT32 acc_bottom_blk_num = 0;
	SINT16*  hold_cnt_rg  = pOutput->s16_blklogo_rgclr_cnt;

	acc_blk_num = 0;
	for (idx = 0; idx < LOGO_RG_32; idx++)
	{
		UINT32 blklogo_rg_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[idx];
		int u8_clr_rg_thr;
		u8_clr_rg_thr = ((idx/8 )>= 1 && idx/8 <= 2)? pParam->u8_clr_rg_thr_l : pParam->u8_clr_rg_thr  ;
		if ((((blklogo_rg_cnt * 256) / (BLK_LOGO_RG_BLKCNT)) >= u8_clr_rg_thr) && pParam->u1_logo_rg_clr_en == 1)
		{
			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | (1 << idx);
			hold_cnt_rg[idx] = pParam->u6_rgClr_holdtime;
		}
		else if ((hold_cnt_rg[idx] > 1)  && pParam->u1_logo_rg_clr_en == 1)
		{
			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | (1 << idx);
			hold_cnt_rg[idx] = _MAX_(hold_cnt_rg[idx] - 1,0);
		}

		acc_blk_num += blklogo_rg_cnt;

		if (idx < 16)
		{
			acc_top_blk_num    += blklogo_rg_cnt;
		}
		else
		{
			acc_bottom_blk_num += blklogo_rg_cnt;
		}
		if (idx%8 <4)
		{
			acc_left_blk_num  += blklogo_rg_cnt;
		}
		else
		{
			acc_right_blk_num += blklogo_rg_cnt;
		}
	}

	if ((((((acc_blk_num * 256) / (BLK_LOGO_BLKCNT)) >= pParam->u8_clr_glb_thr) && pParam->u1_logo_glb_clr_en == 1)
		|| ((((acc_left_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && (pParam->u1_logo_left_half_clr_en  == 1))
		|| ((((acc_right_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && (pParam->u1_logo_right_half_clr_en  == 1))
		|| ((((acc_top_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && (pParam->u1_logo_top_half_clr_en  == 1))
		|| ((((acc_bottom_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && (pParam->u1_logo_bot_half_clr_en  == 1)))
		&& ( pOutput->u1_logo_static_status != 0))
	{
		pOutput->u32_blklogo_clr_idx    = /*pOutput->u32_blklogo_clr_idx |*/ 0xFFFFFFFF;
		pOutput->s16_blklogo_glbclr_cnt = pParam->u6_glbClr_holdtime;
		pOutput->u1_blkclr_glbstatus = 1;
		pOutput->u1_logo_cnt_glb_clr_status = 1;
	}
	else if (pOutput->s16_blklogo_glbclr_cnt > 1 &&  pParam->u1_logo_glb_clr_en == 1)
	{

		pOutput->u32_blklogo_clr_idx    = /*pOutput->u32_blklogo_clr_idx |*/ 0xFFFFFFFF;
		pOutput->s16_blklogo_glbclr_cnt = _MAX_(pOutput->s16_blklogo_glbclr_cnt - 1,0);
		pOutput->u1_blkclr_glbstatus = 1;
		pOutput->u1_logo_cnt_glb_clr_status = 1;
	}
	else
	{
		pOutput->u32_blklogo_clr_idx = 0;
		pOutput->s16_blklogo_glbclr_cnt = 0;
		pOutput->u1_blkclr_glbstatus = 0;
		pOutput->u1_logo_cnt_glb_clr_status = 0;
	}	
}

//current, use blk_logo idx to clear SC logo (global all)
//default is logoClr=1, holdHsty=1, clrAlpha=1
VOID FRC_LgDet_SCCtrl(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	pOutput->u5_iir_alpha_out = pParam->u5_iir_alpha;
	if (s_pContext->_output_read_comreg.u1_sc_status_logo_rb == 1)
	{
		if (pOutput->u1_logo_netflix_status == 0 && pParam->u1_logo_sc_logo_clr_en == 1) //sc signal is consider holdtime.
		{
			pOutput->u32_blklogo_clr_idx = /*pOutput->u32_blklogo_clr_idx |*/ 0xFFFFFFFF;
			pOutput->u1_blkclr_glbstatus = 1;
			pOutput->u1_logo_sc_glb_clr_status = 1;
		}
		if (pParam->u1_logo_sc_alpha_ctrl_en == 1)
		{
			pOutput->u5_iir_alpha_out = 0;
		}
	}
	else
	{	if (pParam->u1_logo_sc_alpha_ctrl_en == 1)
		{
			pOutput->u5_iir_alpha_out = pParam->u5_iir_alpha;
		}
	}
}

VOID FRC_LgDet_SC_FastDetectionCtrl(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	if(pParam->u1_logo_sc_FastDet_en == 1)
	{
		if (s_pContext->_output_read_comreg.u1_sc_status_logo_rb == 1)
		{
			pOutput->u8_logo_sc_FastDet_cntholdfrm = pParam->u8_logo_sc_FastDet_rstholdfrm ;
		}
		else
		{
			pOutput->u8_logo_sc_FastDet_cntholdfrm = (pOutput->u8_logo_sc_FastDet_cntholdfrm > 0)? pOutput->u8_logo_sc_FastDet_cntholdfrm - 1 : 0;
		}

		if( pOutput->u8_logo_sc_FastDet_cntholdfrm > 0 )
			pOutput->u1_logo_sc_FastDet_status = 1;
		else
			pOutput->u1_logo_sc_FastDet_status = 0;
	}
	else
	{
		pOutput->u1_logo_sc_FastDet_status = 0;
		pOutput->u8_logo_sc_FastDet_cntholdfrm = 0;
	}
}

/// bai change
//VOID FRC_LgDet_RgDhClr(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
//{
//	const _PQLCONTEXT *s_pContext = GetPQLContext();
//	UINT32 rg_tl_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[0] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[1];
//	UINT32 rg_tr_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[6] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[7];
//	UINT32 rg_bl_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[24] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[25];
//	UINT32 rg_br_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[30] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[31];
//
//	UINT32 rg_tl_blk_logo_dh_clr_cnt = (rg_tl_blk_logo_cnt >= s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[0])?(rg_tl_blk_logo_cnt - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[0]) : 0;
//	UINT32 rg_tr_blk_logo_dh_clr_cnt = (rg_tr_blk_logo_cnt >= s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[1])?(rg_tr_blk_logo_cnt - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[1]) : 0;
//	UINT32 rg_bl_blk_logo_dh_clr_cnt = (rg_bl_blk_logo_cnt >= s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[2])?(rg_bl_blk_logo_cnt - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[2]) : 0;
//	UINT32 rg_br_blk_logo_dh_clr_cnt = (rg_br_blk_logo_cnt >= s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[3])?(rg_br_blk_logo_cnt - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[3]) : 0;
//
//	UINT32 rg_logo_diff_prm  = pParam->u16_RgDhClr_thr_h - pParam->u16_RgDhClr_thr_l;
//	UINT32 rg_logo_slope      = rg_logo_diff_prm <= 0 ? 0 : 16 * 255 / rg_logo_diff_prm;
//
//	UBYTE  rg_tl_blk_logo_alp = _IncreaseCurveMapping(rg_tl_blk_logo_dh_clr_cnt, pParam->u16_RgDhClr_thr_l, 0, 16, rg_logo_slope, 8);
//	UBYTE  rg_tr_blk_logo_alp = _IncreaseCurveMapping(rg_tr_blk_logo_dh_clr_cnt, pParam->u16_RgDhClr_thr_l, 0, 16, rg_logo_slope, 8);
//	UBYTE  rg_bl_blk_logo_alp = _IncreaseCurveMapping(rg_bl_blk_logo_dh_clr_cnt, pParam->u16_RgDhClr_thr_l, 0, 16, rg_logo_slope, 8);
//	UBYTE  rg_br_blk_logo_alp = _IncreaseCurveMapping(rg_br_blk_logo_dh_clr_cnt, pParam->u16_RgDhClr_thr_l, 0, 16, rg_logo_slope, 8);
//
//
//	if( pParam->u1_RgDhClr_thr_en == 1)
//	{
//		pOutput->u1_rg_dh_clr_rg0 = (rg_tl_blk_logo_alp>=pParam->u5_RgDhClr_cnt_th) ? 1:0;
//		pOutput->u1_rg_dh_clr_rg1 = (rg_tr_blk_logo_alp>=pParam->u5_RgDhClr_cnt_th) ? 1:0;
//		pOutput->u1_rg_dh_clr_rg2 = (rg_bl_blk_logo_alp>=pParam->u5_RgDhClr_cnt_th) ? 1:0;
//		pOutput->u1_rg_dh_clr_rg3 = (rg_br_blk_logo_alp>=pParam->u5_RgDhClr_cnt_th) ? 1:0;
//	}
//	else
//	{
//		pOutput->u1_rg_dh_clr_rg0 =  0;
//		pOutput->u1_rg_dh_clr_rg1 =  0;
//		pOutput->u1_rg_dh_clr_rg2 =  0;
//		pOutput->u1_rg_dh_clr_rg3 =  0;
//	}
//
//	if (pOutput->u32_blklogo_clr_idx == 0xFFFFFFFF)
//	{
//		pOutput->u1_rg_dh_clr_rg0 =  0;
//		pOutput->u1_rg_dh_clr_rg1 =  0;
//		pOutput->u1_rg_dh_clr_rg2 =  0;
//		pOutput->u1_rg_dh_clr_rg3 =  0;
//
//		pOutput->u8_rg_dh_clr_lgclr_hold_frm = pParam->u8_rg_dh_clr_lgclr_hold_frm;
//	}
//	else if (pOutput->u8_rg_dh_clr_lgclr_hold_frm > 0)
//	{
//		pOutput->u1_rg_dh_clr_rg0 =  0;
//		pOutput->u1_rg_dh_clr_rg1 =  0;
//		pOutput->u1_rg_dh_clr_rg2 =  0;
//		pOutput->u1_rg_dh_clr_rg3 =  0;
//		pOutput->u8_rg_dh_clr_lgclr_hold_frm = pOutput->u8_rg_dh_clr_lgclr_hold_frm - 1;
//	}
//	else
//	{
//		pOutput->u8_rg_dh_clr_lgclr_hold_frm = 0;
//	}
//
//    if (pParam->u1_RgDhClr_static_en == 1)
//    {
//		if (pOutput->u1_logo_static_status == 1)
//		{
//			pOutput->u1_rg_dh_clr_rg0 =  0;
//			pOutput->u1_rg_dh_clr_rg1 =  0;
//			pOutput->u1_rg_dh_clr_rg2 =  0;
//			pOutput->u1_rg_dh_clr_rg3 =  0;
//			pOutput->u8_rg_dh_clr_static_hold_frm = pParam->u8_rg_dh_clr_static_hold_frm;
//		}
//		else if (pOutput->u8_rg_dh_clr_static_hold_frm > 0)
//		{
//			pOutput->u1_rg_dh_clr_rg0 =  0;
//			pOutput->u1_rg_dh_clr_rg1 =  0;
//			pOutput->u1_rg_dh_clr_rg2 =  0;
//			pOutput->u1_rg_dh_clr_rg3 =  0;
//			pOutput->u8_rg_dh_clr_static_hold_frm = pOutput->u8_rg_dh_clr_static_hold_frm - 1;
//		}
//		else
//		{
//			pOutput->u8_rg_dh_clr_static_hold_frm = 0;
//		}
//    }
//}

VOID FRC_LgDet_RgDhClr(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u16_tl_dh_clrcnt;
	UINT32 u16_tr_dh_clrcnt;
	UINT32 u16_bl_dh_clrcnt;
	UINT32 u16_br_dh_clrcnt;

	UINT32 rg_tl_blk_logo_dh_clr_cnt;
	UINT32 rg_tr_blk_logo_dh_clr_cnt;
	UINT32 rg_bl_blk_logo_dh_clr_cnt;
	UINT32 rg_br_blk_logo_dh_clr_cnt;

	UINT32 rg_tl_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[0] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[1];
	UINT32 rg_tr_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[6] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[7];
	UINT32 rg_bl_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[24] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[25];
	UINT32 rg_br_blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[30] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[31];

	if (s_pContext->_output_wrt_comreg.u1_LG_mb_wrt_en == 1)
	{
		u16_tl_dh_clrcnt = s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[0] - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt_top[2];
		u16_tr_dh_clrcnt = s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[1] - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt_top[2];
		u16_bl_dh_clrcnt = s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[2] - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt_bot[2];
		u16_br_dh_clrcnt = s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[3] - s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt_bot[2];
	}
	else
	{
		u16_tl_dh_clrcnt = 	s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[0];
		u16_tr_dh_clrcnt = 	s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[1];
		u16_bl_dh_clrcnt = 	s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[2];
		u16_br_dh_clrcnt = 	s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt[3];
	}

	rg_tl_blk_logo_dh_clr_cnt = (rg_tl_blk_logo_cnt >= u16_tl_dh_clrcnt)?(rg_tl_blk_logo_cnt - u16_tl_dh_clrcnt) : 0;
	rg_tr_blk_logo_dh_clr_cnt = (rg_tr_blk_logo_cnt >= u16_tr_dh_clrcnt)?(rg_tr_blk_logo_cnt - u16_tr_dh_clrcnt) : 0;
	rg_bl_blk_logo_dh_clr_cnt = (rg_bl_blk_logo_cnt >= u16_bl_dh_clrcnt)?(rg_bl_blk_logo_cnt - u16_bl_dh_clrcnt) : 0;
	rg_br_blk_logo_dh_clr_cnt = (rg_br_blk_logo_cnt >= u16_br_dh_clrcnt)?(rg_br_blk_logo_cnt - u16_br_dh_clrcnt) : 0;


	if( pParam->u1_RgDhClr_thr_en == 1)
	{
		pOutput->u1_rg_dh_clr_rg0 = (rg_tl_blk_logo_dh_clr_cnt>=pParam->u16_RgDhClr_thr_l && rg_tl_blk_logo_dh_clr_cnt<=pParam->u16_RgDhClr_thr_h) ? 1:0;
		pOutput->u1_rg_dh_clr_rg1 = (rg_tr_blk_logo_dh_clr_cnt>=pParam->u16_RgDhClr_thr_l && rg_tl_blk_logo_dh_clr_cnt<=pParam->u16_RgDhClr_thr_h) ? 1:0;
		pOutput->u1_rg_dh_clr_rg2 = (rg_bl_blk_logo_dh_clr_cnt>=pParam->u16_RgDhClr_thr_l && rg_tl_blk_logo_dh_clr_cnt<=pParam->u16_RgDhClr_thr_h) ? 1:0;
		pOutput->u1_rg_dh_clr_rg3 = (rg_br_blk_logo_dh_clr_cnt>=pParam->u16_RgDhClr_thr_l && rg_tl_blk_logo_dh_clr_cnt<=pParam->u16_RgDhClr_thr_h) ? 1:0;
	}
	else
	{
		pOutput->u1_rg_dh_clr_rg0 =  0;
		pOutput->u1_rg_dh_clr_rg1 =  0;
		pOutput->u1_rg_dh_clr_rg2 =  0;
		pOutput->u1_rg_dh_clr_rg3 =  0;
	}

	if (pOutput->u32_blklogo_clr_idx == 0xFFFFFFFF)
	{
		pOutput->u1_rg_dh_clr_rg0 =  0;
		pOutput->u1_rg_dh_clr_rg1 =  0;
		pOutput->u1_rg_dh_clr_rg2 =  0;
		pOutput->u1_rg_dh_clr_rg3 =  0;

		pOutput->u8_rg_dh_clr_lgclr_hold_frm = pParam->u8_rg_dh_clr_lgclr_hold_frm;
	}
	else if (pOutput->u8_rg_dh_clr_lgclr_hold_frm > 0)
	{
		pOutput->u1_rg_dh_clr_rg0 =  0;
		pOutput->u1_rg_dh_clr_rg1 =  0;
		pOutput->u1_rg_dh_clr_rg2 =  0;
		pOutput->u1_rg_dh_clr_rg3 =  0;
		pOutput->u8_rg_dh_clr_lgclr_hold_frm = pOutput->u8_rg_dh_clr_lgclr_hold_frm - 1;
	}
	else
	{
		pOutput->u8_rg_dh_clr_lgclr_hold_frm = 0;
	}

    if (pParam->u1_RgDhClr_static_en == 1)
    {
		if (pOutput->u1_logo_static_status == 1)
		{
			pOutput->u1_rg_dh_clr_rg0 =  0;
			pOutput->u1_rg_dh_clr_rg1 =  0;
			pOutput->u1_rg_dh_clr_rg2 =  0;
			pOutput->u1_rg_dh_clr_rg3 =  0;
			pOutput->u8_rg_dh_clr_static_hold_frm = pParam->u8_rg_dh_clr_static_hold_frm;
		}
		else if (pOutput->u8_rg_dh_clr_static_hold_frm > 0)
		{
			pOutput->u1_rg_dh_clr_rg0 =  0;
			pOutput->u1_rg_dh_clr_rg1 =  0;
			pOutput->u1_rg_dh_clr_rg2 =  0;
			pOutput->u1_rg_dh_clr_rg3 =  0;
			pOutput->u8_rg_dh_clr_static_hold_frm = pOutput->u8_rg_dh_clr_static_hold_frm - 1;
		}
		else
		{
			pOutput->u8_rg_dh_clr_static_hold_frm = 0;
		}
    }
}
VOID FRC_LgDet_RgHstyClr(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
#if 1
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT16 u16_cnt_totalNum1 = (s_pContext->_output_read_comreg.u8_me1_Vbuf_Hsize_rb * s_pContext->_output_read_comreg.u8_me1_Vbuf_Vsize_rb);
	UBYTE u1_sc_stat = s_pContext->_output_read_comreg.u1_sc_status_logo_rb;
	UINT16 u11_Gmv_mvx = _ABS_(s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb);
	UINT16 u10_Gmv_mvy = _ABS_(s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb);

	//horizatal_speed = s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
	//vertical_speed  = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;
	#if 0
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[logo][GMV]->%d,%d,%d,%d\r\n",u11_Gmv_mvx,u10_Gmv_mvy,s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb,s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb);
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[logo][GMV]sad->%d,%d\r\n",s_pContext->_output_read_comreg.u30_me_aSAD_rb,u16_cnt_totalNum1);
	#endif

	if (pParam->u1_GlbHstyClr_en == 1 && ((pParam->u1_RgHstyClr_Sc_en == 1 && u1_sc_stat == 1) || (pParam->u1_RgHstyClr_Sc_en == 0)))
	{
		if ((u11_Gmv_mvx + u10_Gmv_mvy) < pParam->u16_RgHstyClr_Gmv_thr &&
			s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb > pParam->u8_RgHstyClr_Gmv_cnt_thr &&
			s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb < pParam->u12_RgHstyClr_Gmv_unconf_thr &&
			s_pContext->_output_read_comreg.u30_me_aSAD_rb/u16_cnt_totalNum1 < pParam->u10_RgHstyClr_Gsad_thr)
		{
			pOutput->u32_logo_hsty_clr_idx = /*pOutput->u32_logo_hsty_clr_idx |*/ 0xFFFFFFFF;
			pOutput->u1_logo_static_status = 1;
		}
		else
		{
			pOutput->u1_logo_static_status = 0;
		}

	}
	#if 0
	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[logo][GMV]static_status->%d\r\n",pOutput->u1_logo_static_status);
	#endif
#else
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 idx;
	UINT16 u16_cnt_totalNum1 = (s_pContext->_output_read_comreg.u8_me1_Vbuf_Hsize_rb * s_pContext->_output_read_comreg.u8_me1_Vbuf_Vsize_rb);
	UINT16 u16_cnt_totalNum = u16_cnt_totalNum1 == 0 ? 1 : u16_cnt_totalNum1/32;
	UBYTE u1_sc_stat = s_pContext->_output_read_comreg.u1_sc_status_logo_rb;
	UINT16 u11_Gmv_mvx = _ABS_(s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb);
	UINT16 u10_Gmv_mvy = _ABS_(s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb);
	UINT16 u11_Rgmv_mvx;
	UINT16 u10_Rgmv_mvy;
	UINT16 u11_Rgmv2_mvx;
	UINT16 u10_Rgmv2_mvy;
	UINT32 u32_subtitle_rgn = 0;
	UINT32 u32_Rg_static_idx = 0;
	UINT32 u32_Rg_unstatic_idx = 0;
	UBYTE  u8_Rg_static_num = 0;
	if (pParam->u1_GlbHstyClr_en == 1 && ((pParam->u1_RgHstyClr_Sc_en == 1 && u1_sc_stat == 1) || (pParam->u1_RgHstyClr_Sc_en == 0)))
	{
		if ((u11_Gmv_mvx + u10_Gmv_mvy) < pParam->u16_RgHstyClr_Gmv_thr &&
			s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb > pParam->u8_RgHstyClr_Gmv_cnt_thr &&
			s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb < pParam->u12_RgHstyClr_Gmv_unconf_thr &&
			s_pContext->_output_read_comreg.u30_me_aSAD_rb/u16_cnt_totalNum1 < pParam->u10_RgHstyClr_Gsad_thr)
		{
			pOutput->u32_logo_hsty_clr_idx = /*pOutput->u32_logo_hsty_clr_idx |*/ 0xFFFFFFFF;
			pOutput->u1_logo_static_status = 1;
		}
		else
		{
			pOutput->u1_logo_static_status = 0;
		}

	}

	for (idx = 0; idx < LOGO_RG_32; idx++)
	{
		u11_Rgmv_mvx = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[idx]);
		u10_Rgmv_mvy = _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[idx]);
		if ((u11_Rgmv_mvx + u10_Rgmv_mvy) < pParam->u16_RgHstyClr_mv_thr &&
			s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[idx] > pParam->u12_RgHstyClr_mv_cnt_thr &&
			s_pContext->_output_read_comreg.u12_me_rMV_1st_unconf_rb[idx] < pParam->u12_RgHstyClr_mv_unconf_thr &&
			s_pContext->_output_read_comreg.u25_me_rSAD_rb[idx]/u16_cnt_totalNum < pParam->u10_RgHstyClr_Rsad_thr)
		{
			u32_Rg_static_idx = u32_Rg_static_idx | (1 << idx);
			u8_Rg_static_num = u8_Rg_static_num + 1;
		}
		else
		{
			u32_Rg_unstatic_idx = u32_Rg_unstatic_idx| (1 << idx);
		}

		//special for rgn26/27/28/29 - maybe subtitle.
		{
			UBYTE u1_subtitle_bmv_noclr_en = 1;
			u11_Rgmv2_mvx = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_2nd_vx_rb[idx]);
			u10_Rgmv2_mvy = _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_2nd_vy_rb[idx]);
			if(idx >= 26 && idx <=29 && u1_subtitle_bmv_noclr_en)
			{
				if((u11_Rgmv_mvx + u10_Rgmv_mvy) > 30 ||(u11_Rgmv2_mvx + u10_Rgmv2_mvy) > 30
				)
				{
					u32_subtitle_rgn = u32_subtitle_rgn | (1 << idx);
				}

			}
		}
	}


	if (pParam->u1_logo_static_bg_en == 1)
	{
		u32_Rg_unstatic_idx = u32_Rg_unstatic_idx & 0x3CFFFF3C & (~u32_subtitle_rgn);
		pOutput->u8_Rg_static_num  = u8_Rg_static_num;
		pOutput->u32_Rg_unstatic_idx = ((u8_Rg_static_num > pParam->u6_logo_static_bg_th_l) && (u8_Rg_static_num < pParam->u6_logo_static_bg_th_h)) ? u32_Rg_unstatic_idx : 0;

	}else
	{
		pOutput->u8_Rg_static_num  = 0;
		pOutput->u32_Rg_unstatic_idx = 0;
	}

	if (pParam->u1_RgHstyClr_en == 1 && ((pParam->u1_RgHstyClr_Sc_en == 1 && u1_sc_stat == 1) || (pParam->u1_RgHstyClr_Sc_en == 0)))
	{
		for (idx = 0; idx < LOGO_RG_32; idx++)
		{
			u11_Rgmv_mvx = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[idx]);
			u10_Rgmv_mvy = _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[idx]);
			if ((u11_Rgmv_mvx + u10_Rgmv_mvy) < pParam->u16_RgHstyClr_mv_thr &&
				s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[idx] > pParam->u12_RgHstyClr_mv_cnt_thr &&
				s_pContext->_output_read_comreg.u12_me_rMV_1st_unconf_rb[idx] < pParam->u12_RgHstyClr_mv_unconf_thr &&
				s_pContext->_output_read_comreg.u25_me_rSAD_rb[idx]/u16_cnt_totalNum < pParam->u10_RgHstyClr_Rsad_thr)
			{
				pOutput->u32_logo_hsty_clr_idx = pOutput->u32_logo_hsty_clr_idx | (1 << idx);
			}
		}
	}
	if (pParam->u1_RgHstyClr_glbclr_close_en == 1 && pOutput->u1_logo_sc_glb_clr_status == 0 && pOutput->u1_logo_cnt_glb_clr_status == 1)
	{
		pOutput->u32_logo_hsty_clr_idx = 0;
	}
#endif
	pOutput->u32_logo_hsty_clr_lgclr_idx = pOutput->u32_logo_hsty_clr_idx;
}

VOID FRC_LgDet_SC_Detect(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	UINT32 idx;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	if (pParam->u1_logo_sc_detect_en)
	{

		UBYTE  u1_logo_sc_status;
		UBYTE  u1_logo_sc_dtldiff_status;
		UINT32 sad_diff = _MAX_(pOutput->u31_logo_sad_pre,s_pContext->_output_read_comreg.u30_me_aSAD_rb)-_MIN_(pOutput->u31_logo_sad_pre , s_pContext->_output_read_comreg.u30_me_aSAD_rb);
		UBYTE  u1_logo_sc_saddif_status = sad_diff > pParam->u31_logo_sc_saddiff_th ? 1 : 0;
		UBYTE  u1_logo_sc_Gmv_status;
		UINT32 reg_dtl_diff_sum = 0;

		if ((s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb < pParam->u6_logo_sc_Gmv_cnt_th) && (s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb >= pParam->u12_logo_sc_Gmv_unconf_th))
		{
			u1_logo_sc_Gmv_status = 1;
		}
		else
		{
			u1_logo_sc_Gmv_status = 0;
		}
		for (idx = 0; idx < LOGO_RG_32; idx++)
		{
			reg_dtl_diff_sum = reg_dtl_diff_sum + (_MAX_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[idx],pOutput->u20_logo_dtl_pre[idx])- _MIN_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[idx],pOutput->u20_logo_dtl_pre[idx]));
		}
		reg_dtl_diff_sum = reg_dtl_diff_sum >> 5;
		u1_logo_sc_dtldiff_status = reg_dtl_diff_sum > pParam->u20_logo_sc_dtldif_th ? 1 : 0;

		pOutput->u1_logo_sc_saddif_status = u1_logo_sc_saddif_status;
		pOutput->u1_logo_sc_Gmv_status    = u1_logo_sc_Gmv_status;
		pOutput->u1_logo_sc_dtldif_status = u1_logo_sc_dtldiff_status;

		if (pParam->u1_logo_sc_Gmv_en == 1)
		{
			u1_logo_sc_status = ((u1_logo_sc_saddif_status && pParam->u1_logo_sc_saddif_en) ||
				                 (u1_logo_sc_dtldiff_status && pParam->u1_logo_sc_dtldif_en)) && u1_logo_sc_Gmv_status;
		}
		else if (pParam->u1_logo_sc_saddif_en==1 && pParam->u1_logo_sc_dtldif_en ==1)
		{
			u1_logo_sc_status = u1_logo_sc_saddif_status && u1_logo_sc_dtldiff_status;
		}
		else
		{
			u1_logo_sc_status = (u1_logo_sc_saddif_status && pParam->u1_logo_sc_saddif_en) ||
				                (u1_logo_sc_dtldiff_status && pParam->u1_logo_sc_dtldif_en) ;
		}

		if (u1_logo_sc_status == 1)
		{
			pOutput->u1_logo_sc_status = 1;
			pOutput->u8_logo_sc_hold_frm = pParam->u8_logo_sc_hold_frm;
		}
		else if (pOutput->u8_logo_sc_hold_frm > 0)
		{
			pOutput->u1_logo_sc_status = 1;
			pOutput->u8_logo_sc_hold_frm = pOutput->u8_logo_sc_hold_frm - 1;
		}
		else
		{
			pOutput->u1_logo_sc_status = 0;
		}
	}
	else
	{
		pOutput->u1_logo_sc_status = 0;

	}
	// update  pre
	pOutput->u31_logo_sad_pre = s_pContext->_output_read_comreg.u30_me_aSAD_rb;
	for (idx = 0; idx < LOGO_RG_32; idx++)
	{
		pOutput->u20_logo_dtl_pre[idx] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[idx];
	}
}

VOID FRC_LgDet_netflix_detect(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 lt_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[0] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[1];
	UINT32 rt_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[6] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[7];
	UINT32 lb_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[24];
	UINT32 rb_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[31];
	UBYTE  netflix_status = 0;

	if (pParam->u1_logo_netflix_detct_en == 1)
	{
		if (lt_logo_cnt >= pParam->u20_logo_netflix_detect_lt_th_l && lt_logo_cnt <= pParam->u20_logo_netflix_detect_lt_th_h &&
			rt_logo_cnt >= pParam->u20_logo_netflix_detect_rt_th_l && rt_logo_cnt <= pParam->u20_logo_netflix_detect_rt_th_h &&
			lb_logo_cnt >= pParam->u20_logo_netflix_detect_lb_th_l && lb_logo_cnt <= pParam->u20_logo_netflix_detect_lb_th_h &&
			rb_logo_cnt >= pParam->u20_logo_netflix_detect_rb_th_l && rb_logo_cnt <= pParam->u20_logo_netflix_detect_rb_th_h &&
			pOutput->u1_logo_cnt_glb_clr_status == 0)
		{
			netflix_status = 1;
		}
		else
		{
			netflix_status = 0;
		}
	}
	else
	{
		netflix_status = 0;
	}


	if (netflix_status == 1)
	{
		pOutput->u1_logo_netflix_status = 1;
		pOutput->u8_logo_netflix_hold_frm = pParam->u8_logo_netflix_hold_frm;
	}
	else if (pOutput->u8_logo_netflix_hold_frm > 0)
	{
		pOutput->u1_logo_netflix_status = 1;
		pOutput->u8_logo_netflix_hold_frm = pOutput->u8_logo_netflix_hold_frm - 1;
	}
	else
	{
		pOutput->u1_logo_netflix_status = 0;
		pOutput->u8_logo_netflix_hold_frm = 0;
	}
}

VOID FRC_LgDet_LG_16s_Patch(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE  u1_apli_status = 0;
	UBYTE  u1_aplp_status = 0;
	UBYTE  u1_gdtl_status = 0;
	UBYTE  u1_gsad_status = 0;
	UBYTE  u1_gmv_status  = 0;
	UBYTE  u1_rdtl_num_status;
	UINT32 idx;
	UINT32 rdtl_good_num  = 0;

	UBYTE  u1_lg16s_patch_status = 0;

	UINT16 u16_cnt_totalNum = (s_pContext->_output_read_comreg.u8_me1_Vbuf_Hsize_rb * s_pContext->_output_read_comreg.u8_me1_Vbuf_Vsize_rb);

	// apl
	UINT32 apli_avg = (u16_cnt_totalNum > 0 ) ? (s_pContext->_output_read_comreg.u26_me_aAPLi_rb / u16_cnt_totalNum) : s_pContext->_output_read_comreg.u26_me_aAPLi_rb;
	UINT32 aplp_avg = (u16_cnt_totalNum > 0 ) ? (s_pContext->_output_read_comreg.u26_me_aAPLp_rb / u16_cnt_totalNum) : s_pContext->_output_read_comreg.u26_me_aAPLp_rb;

	if (pParam->u1_logo_lg16s_patch_Gapl_en == 1)
	{
		u1_apli_status = ((apli_avg >= pParam->u10_logo_lg16s_patch_Gapl_th_l) && (apli_avg <= pParam->u10_logo_lg16s_patch_Gapl_th_h))? 1 : 0;
		u1_aplp_status = ((aplp_avg >= pParam->u10_logo_lg16s_patch_Gapl_th_l) && (aplp_avg <= pParam->u10_logo_lg16s_patch_Gapl_th_h))? 1 : 0;
	}
	else
	{
		u1_apli_status = 1;
		u1_aplp_status = 1;
	}

	// glb dtl
	if(pParam->u1_logo_lg16s_patch_Gdtl_en == 1)
	{
		u1_gdtl_status = ((s_pContext->_output_read_comreg.u25_me_aDTL_rb >= pParam->u25_logo_lg16s_patch_Gdtl_th_l) &&
			              (s_pContext->_output_read_comreg.u25_me_aDTL_rb <= pParam->u25_logo_lg16s_patch_Gdtl_th_h)) ? 1 : 0;
	}
	else
	{
		u1_gdtl_status = 1;
	}

	// glb sad
	if (pParam->u1_logo_lg16s_patch_Gsad_en == 1)
	{
		u1_gsad_status = ((s_pContext->_output_read_comreg.u30_me_aSAD_rb >= pParam->u28_logo_lg16s_patch_Gsad_th_l) &&
			              (s_pContext->_output_read_comreg.u30_me_aSAD_rb <= pParam->u28_logo_lg16s_patch_Gsad_th_h)) ? 1 : 0;
	}
	else
	{
		u1_gsad_status = 1;
	}

	// GMV

	if (pParam->u1_logo_lg16s_patch_Gmv_en == 1)
	{
		if ( (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb >= pParam->u11_logo_lg16s_patch_Gmvx_th_l) &&
			(s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb <= pParam->u11_logo_lg16s_patch_Gmvx_th_h) &&
			(s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb <= pParam->u11_logo_lg16s_patch_Gmvy_th)   &&
			(s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb >= pParam->u6_logo_lg16s_patch_Gmv_cnt_th) &&
			(s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb <= pParam->u12_logo_lg16s_patch_Gmv_unconf_th))
		{
			u1_gmv_status = 1;
		}
		else
		{
			u1_gmv_status = 0;
		}
	}
	else
	{
		u1_gmv_status = 1;
	}

	// region dtl num
	if (pParam->u1_logo_lg16s_patch_Rdtl_num_en == 1)
	{
		for (idx = 0; idx <LOGO_RG_32; idx ++)
		{

			rdtl_good_num = ((s_pContext->_output_read_comreg.u20_me_rDTL_rb[idx] >= pParam->u20_logo_lg16s_patch_Rdtl_th_l) &&
				(s_pContext->_output_read_comreg.u20_me_rDTL_rb[idx] <= pParam->u20_logo_lg16s_patch_Rdtl_th_h)) ? (rdtl_good_num + 1) : rdtl_good_num;
		}

		u1_rdtl_num_status = rdtl_good_num >= pParam->u6_logo_lg16s_patch_Rdtl_num_th ? 1 : 0;
	}
	else
	{
		u1_rdtl_num_status = 1;
	}

	if ((pParam->u1_logo_lg16s_patch_Gapl_en == 1) ||
		(pParam->u1_logo_lg16s_patch_Gdtl_en == 1) ||
		(pParam->u1_logo_lg16s_patch_Gsad_en == 1) ||
		(pParam->u1_logo_lg16s_patch_Gmv_en == 1)  ||
		(pParam->u1_logo_lg16s_patch_Rdtl_num_en == 1))
	{
		u1_lg16s_patch_status = u1_apli_status && u1_aplp_status && u1_gdtl_status && u1_gsad_status && u1_gmv_status && u1_rdtl_num_status;
	}
	else
	{
		u1_lg16s_patch_status = 0;
	}

	pOutput->u1_logo_lg16s_patch_Gapli_status     = u1_apli_status;
	pOutput->u1_logo_lg16s_patch_Gaplp_status     = u1_aplp_status;
	pOutput->u1_logo_lg16s_patch_Gdtl_status      = u1_gdtl_status;
	pOutput->u1_logo_lg16s_patch_Gsad_status      = u1_gsad_status;
	pOutput->u1_logo_lg16s_patch_Gmv_status       = u1_gmv_status;
	pOutput->u1_logo_lg16s_patch_Rdtl_num_status  = u1_rdtl_num_status;

	if (u1_lg16s_patch_status == 1)
	{
		pOutput->u1_logo_lg16s_patch_status = 1;
		pOutput->u8_logo_lg16s_patch_hold_frm = pParam->u8_logo_lg16s_patch_hold_frm;
	}
	else if (pOutput->u8_logo_lg16s_patch_hold_frm > 0)
	{
		pOutput->u1_logo_lg16s_patch_status = 1;
		pOutput->u8_logo_lg16s_patch_hold_frm = pOutput->u8_logo_lg16s_patch_hold_frm - 1;
	}
	else
	{
		pOutput->u1_logo_lg16s_patch_status = 0;
		pOutput->u8_logo_lg16s_patch_hold_frm = 0;
	}
}

VOID FRC_LgDet_RgDhAdp_Rimunbalance(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u1_rg_dh_clr_rg0;
	UINT32 blk_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[26] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[27] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[28] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[29];
	UINT32 dh_clr_cnt = s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt_bot[0] + s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt_bot[1] + s_pContext->_output_read_comreg.u16_blklogo_dh_clrcnt_bot[2];

	UINT32 blk_logo_dh_clr_cnt = (blk_logo_cnt >= dh_clr_cnt)?(blk_logo_cnt - dh_clr_cnt) : 0;
	if( pParam->u1_RgDhClr_thr_en == 1 && blk_logo_dh_clr_cnt>=pParam->u16_RgDhadp_Rimunbalance_thr_l && blk_logo_dh_clr_cnt<=pParam->u16_RgDhadp_Rimunbalance_thr_h)
	{
		u1_rg_dh_clr_rg0 = 1;
	}
	else
	{
		u1_rg_dh_clr_rg0 =  0;
	}

	if (u1_rg_dh_clr_rg0 == 1)
	{
		pOutput->u1_RgDhadp_Rimunbalance_status =  1;

		pOutput->u8_rg_dh_clr_lgclr_hold_frm = pParam->u8_RgDhadp_Rimunbalance_hold_frm;
	}
	else if (pOutput->u8_RgDhadp_Rimunbalance_hold_frm > 0)
	{
		pOutput->u1_RgDhadp_Rimunbalance_status =  1;
		pOutput->u8_RgDhadp_Rimunbalance_hold_frm = pOutput->u8_RgDhadp_Rimunbalance_hold_frm - 1;
	}
	else
	{
		pOutput->u1_RgDhadp_Rimunbalance_status =  0;
	}

}


VOID FRC_LgDet_LG_UXN_Patch(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 lt_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[0]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[1]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[2];
	UINT32 rt_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[7];
	UINT32 md_logo_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[8]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[9]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[10]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[11]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[12]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[13]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[14]
					+ s_pContext->_output_read_comreg.u10_blklogo_rgcnt[15];

	UBYTE u1_lt_islogo_cond = 0;
	UBYTE u1_rt_islogo_cond = 0;
	UBYTE u1_md_nologo_cond = 0;
	UBYTE u1_bgmove_cond = 1;
	UBYTE u1_rim_cond = 1;
	UBYTE u1_rg_bright_cond = 1;

	UBYTE u1_lt_islogo_cond_en = 1;
	UBYTE u1_rt_islogo_cond_en = 1;
	UBYTE u1_md_nologo_cond_en = 1;

	UBYTE u1_lg_UXN_patch_en = pParam->u1_lg_UXN_patch_en;//(U32_DATA1 >>31); //
	UBYTE u1_lg_UXN_patch_det = 0;
	static UBYTE u8_lg_UXN_patch_cnt = 0;
	UBYTE u8_lg_UXN_patch_cnt_th = 0x8;//(U32_DATA1 & 0xff);
	UBYTE u8_lg_UXN_patch_cnt_max = 0xC;//((U32_DATA1>>8) & 0xff);

	//UINT32 U32_DATA1 = 0;
	//ReadRegister(FRC_TOP__KME_TOP__reg_kme_dummy1_ADDR, 0, 31, &U32_DATA1);
	u1_lt_islogo_cond_en = 1;//(U32_DATA1 >>30) & 0x1;
	u1_rt_islogo_cond_en = 1;//(U32_DATA1 >>29) & 0x1;
	u1_md_nologo_cond_en = 1;//(U32_DATA1 >>28) & 0x1;

	//UINT32 U32_DATA2;
	//ReadRegister(FRC_TOP__PQL_1__pql_fb_dummy_ac_ADDR, 0, 31, &U32_DATA2);


	//UINT32 U32_DATA = 0;
	//ReadRegister(FRC_TOP__PQL_1__pql_film_dummy_1c_ADDR, 0, 31, &U32_DATA);

	// lt_islogo_cond
	{
		UINT16 u10_logo_cnt_th_l = 0x10<<4;//((U32_DATA & 0xff)<<4);
		UINT16 u10_logo_cnt_th_h = 0x30<<4;//((U32_DATA>>8) & 0xff)<<4;

		static UINT32 lt_logo_cnt_pre = 0;

		UBYTE u1_lt_logoCnt_cond = 0;

		u1_lt_logoCnt_cond = (lt_logo_cnt > u10_logo_cnt_th_l && lt_logo_cnt < u10_logo_cnt_th_h) ? 1 : 0;

		u1_lt_islogo_cond = (u1_lt_logoCnt_cond) ? 1 : 0;

		u1_lt_islogo_cond = (u1_lt_islogo_cond & u1_lt_islogo_cond_en) || (!u1_lt_islogo_cond_en);

		lt_logo_cnt_pre = lt_logo_cnt;
	}

	// rt_islogo_cond
	{
		UINT16 u10_logo_cnt_th2 = 0;//((U32_DATA>>24)& 0xf)<<4;
		UINT16 u10_logo_cnt_thH = ((240/8)*(135/4))*2/3;

		UBYTE u1_rt_logoCnt_cond = 0;

		u1_rt_logoCnt_cond = (rt_logo_cnt > u10_logo_cnt_th2 && rt_logo_cnt < u10_logo_cnt_thH) ? 1 : 0;

		u1_rt_islogo_cond = (u1_rt_logoCnt_cond & u1_rt_islogo_cond_en) || (!u1_rt_islogo_cond_en);
	}

	// md_islogo_cond
	{
		UINT16 u10_logo_cnt_th3 = 0xf<<4;//((U32_DATA>>28) & 0xf)<<4;

		UBYTE u1_md_logoCnt_cond = 0;

		u1_md_logoCnt_cond = (md_logo_cnt < u10_logo_cnt_th3) ? 1: 0;

		u1_md_nologo_cond = (u1_md_logoCnt_cond & u1_md_nologo_cond_en) || (!u1_md_nologo_cond_en);
	}

	// bg move
	{
		//UINT32 u17_hpan_cnt = s_pContext->_output_read_comreg.u17_me_Hpan_cnt_rb;
		//UINT32 u17_vpan_cnt = s_pContext->_output_read_comreg.u17_me_Vpan_cnt_rb;
		//UINT16 u16_hvpan_th = (U32_DATA2 & 0xFFFF);

		UBYTE u1_bgmove_mode_sel = 1;//(U32_DATA2>>31)&0x1;
		UBYTE u8_bgmove_cnt_th = 0x32;//(U32_DATA2>>16)&0xff;

		UBYTE idx = 0;
		UBYTE u8_bmvx_cnt = 0;
		UBYTE u8_bmvy_cnt = 0;
		UBYTE u8_bmvx_th = 0x10;
		UBYTE u8_bmvy_th = 0xC;
		for (idx=0; idx<32; idx++)
		{
			UBYTE u1_bmvx_cond =		(_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[idx]) > u8_bmvx_th) ||
									(_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_2nd_vx_rb[idx]) > u8_bmvx_th);
			UBYTE u1_bmvy_cond =		(_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[idx]) > u8_bmvy_th) ||
									(_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_2nd_vy_rb[idx]) > u8_bmvy_th);
			u8_bmvx_cnt = (u1_bmvx_cond || u1_bmvy_cond) ? (u8_bmvx_cnt+1) : u8_bmvx_cnt;
			u8_bmvy_cnt = u8_bmvx_cnt;//u1_bmvy_cond ? (u8_bmvy_cnt+1) : u8_bmvy_cnt;
		}

		//u1_bgmove_cond = ((u17_hpan_cnt+u17_vpan_cnt) > u16_hvpan_th) ? 1 : 0;

		if(u1_bgmove_mode_sel==1){
			u1_bgmove_cond = ((u8_bmvx_cnt+u8_bmvy_cnt) > u8_bgmove_cnt_th) ? 1 : 0;
		}
	}

	// rim cond
	{
		UBYTE u1_rim_tb_cond = 1;
		UBYTE u1_rim_lr_cond = 1;

		UBYTE u8_rim_tb_th = 0x20;
		UBYTE u8_rim_lr_th = 0x4;

		u1_rim_tb_cond = (s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_TOP] < u8_rim_tb_th)
					&& (s_pContext->_output_rimctrl.u12_out_resolution[_RIM_BOT] < (s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_BOT] + u8_rim_tb_th));
		u1_rim_lr_cond = (s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_LFT] < u8_rim_lr_th)
					&& (s_pContext->_output_rimctrl.u12_out_resolution[_RIM_RHT] < (s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_RHT] + u8_rim_lr_th));

		u1_rim_cond = (u1_rim_tb_cond && u1_rim_lr_cond);
	}

	// bright cond
	{
		UINT32 u20_me_rAPLi = s_pContext->_output_read_comreg.u20_me_rAPLi_rb[7];
		UINT32 u20_me_rAPLp = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[7];
		UINT32 u20_me_rAPL = (u20_me_rAPLi + u20_me_rAPLp)/2;

		UINT32 u20_me_rAPL_th = 0x40000;

		u1_rg_bright_cond = (u20_me_rAPL > u20_me_rAPL_th) ? 1 : 0;
	}

	// UXN patch detect
	if(  u1_lt_islogo_cond && u1_rt_islogo_cond && u1_md_nologo_cond
	&& u1_bgmove_cond && u1_rim_cond
	&& u1_lg_UXN_patch_en)
	{
		u8_lg_UXN_patch_cnt ++;
	}
	else
	{
		u8_lg_UXN_patch_cnt = (u8_lg_UXN_patch_cnt > 0) ? (u8_lg_UXN_patch_cnt - 1) : 0;
	}

	u8_lg_UXN_patch_cnt = _CLIP_UBOUND_(u8_lg_UXN_patch_cnt, u8_lg_UXN_patch_cnt_max);

	u1_lg_UXN_patch_det = (u8_lg_UXN_patch_cnt > u8_lg_UXN_patch_cnt_th) ? 1 : 0;


	// judge
	pOutput->u1_lg_UXN_patch_det = u1_lg_UXN_patch_det;

#if 0
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 0, 3, u1_lt_islogo_cond);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 4, 7, u1_rt_islogo_cond);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 8, 11, u1_md_nologo_cond);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 12, 15, u1_bgmove_cond);

	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_1_ADDR, 16, 19, _MIN_(u8_lg_UXN_patch_cnt, 0xF));
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_1_ADDR, 20, 23, u1_lg_UXN_patch_det);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_1_ADDR, 24, 27, u1_rg_bright_cond);
	WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_1_ADDR, 28, 31, u1_rim_cond);
#endif

}


VOID FRC_LgDet_CloseVar(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
    const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u1_hw_sc_signal = s_pContext->_output_read_comreg.u1_sc_status_rb;

	if (u1_hw_sc_signal == 1)
	{
	    pOutput->u32_logo_closeVar_hold_cnt = 60;
	}
	else if (pOutput->u32_logo_closeVar_hold_cnt > 0)
	{
	    pOutput->u32_logo_closeVar_hold_cnt = pOutput->u32_logo_closeVar_hold_cnt - 1;
	}
	else
	{
	    pOutput->u32_logo_closeVar_hold_cnt = 0;
	}

}

VOID FRC_LogoDet_RgnDistribute(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 iter = 0;

	//UINT32 lt_corner_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[0] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[1];
	//UINT32 rt_corner_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[6] + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[7];
	//UINT32 lb_corner_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[24];
	//UINT32 rb_corner_cnt = s_pContext->_output_read_comreg.u10_blklogo_rgcnt[31];

	UINT32 top_cnt = 0;
	UINT32 bot_cnt = 0;

	for(iter=0; iter<8; iter++)
	{
		top_cnt = top_cnt + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[0+iter];
		bot_cnt = bot_cnt + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[24+iter];
	}

	if( bot_cnt > ((BLK_LOGO_RG_BLKCNT*8) >> 1) )
	{
		pOutput->u1_logo_rgn_distribute[LOGO_RGN_BOT] = 1;
	}
	else
	{
		pOutput->u1_logo_rgn_distribute[LOGO_RGN_BOT] = 0;
	}

}

VOID FRC_SLD_PxlTargetYVal(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	// consider the regional apl and dtl to set the regional target y value
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	// for regional apl/dtl with basic value
	UBYTE RgnIdx = 0;
	UINT32 RgnAPL = 0;
	UINT32 RgnDTL = 0;
	UINT32 RgnBlkNum = (240*135)/32;

	UINT32 LT_RgnAplAvg = (s_pContext->_output_read_comreg.u20_me_rAPLi_rb[0] + s_pContext->_output_read_comreg.u20_me_rAPLp_rb[0] +
						   s_pContext->_output_read_comreg.u20_me_rAPLi_rb[1] + s_pContext->_output_read_comreg.u20_me_rAPLp_rb[1] +
						   s_pContext->_output_read_comreg.u20_me_rAPLi_rb[2] + s_pContext->_output_read_comreg.u20_me_rAPLp_rb[2])/6;
	UINT32 RgnAplAvgWithouCurBlk = 0;

	UINT32 LT_apl_l = pParam->u8_logo_rglt_pxldf_apl_thr_l; // 60
	UINT32 LT_apl_h = pParam->u8_logo_rglt_pxldf_apl_thr_h; // 220
	UINT32 LT_val_l = pParam->u8_logo_rglt_pxldf_val_thr_l; // 190
	UINT32 LT_val_h = pParam->u8_logo_rglt_pxldf_val_thr_h; // 230

	// modify by statistic
	UBYTE HistoIdx = 0;
	UINT32 u32_TotalHistNum = 1;
	UINT32 u32_HistoPartial_H = 0, u8_Ratio_H = 0; // high apl part of the histogram
	UINT32 u32_HistoPartial_M = 0, u8_Ratio_M = 0; // middle apl part of the histogram
	UINT32 u32_HistoPartial_L = 0, u8_Ratio_L = 0; // low apl part of the histogram
	UBYTE Hist2AplOft_H = 0, Hist2AplOft_M = 0, Hist2AplOft_L = 0;

	static UBYTE printkCounter = 0;
	const UBYTE printkEnable = pParam->u1_logo_sld_debug_print_en;
	const UINT32 printkPeriod = (pParam->u1_logo_sld_debug_print_period + 1) * 16;

	// -------------------- histogram --------------------
	for(HistoIdx=0; HistoIdx<32; HistoIdx++)
	{
		u32_TotalHistNum = u32_TotalHistNum + s_pContext->_output_read_comreg.u32_yuv_meter[HistoIdx];
		if(HistoIdx < 4)
			u32_HistoPartial_L = u32_HistoPartial_L + s_pContext->_output_read_comreg.u32_yuv_meter[HistoIdx];
		if(HistoIdx >= 4 && HistoIdx < 28)
			u32_HistoPartial_M = u32_HistoPartial_M + s_pContext->_output_read_comreg.u32_yuv_meter[HistoIdx];
		if(HistoIdx >= 28)
			u32_HistoPartial_H = u32_HistoPartial_H + s_pContext->_output_read_comreg.u32_yuv_meter[HistoIdx];
	}

	if( u32_TotalHistNum >= 1400*240 )
	{
		u8_Ratio_H = (u32_HistoPartial_H*100)/u32_TotalHistNum;
		u8_Ratio_M = (u32_HistoPartial_M*100)/u32_TotalHistNum;
		u8_Ratio_L = (u32_HistoPartial_L*100)/u32_TotalHistNum;

		if( u8_Ratio_H == 0 )
			Hist2AplOft_H = 99;

		Hist2AplOft_L = (u8_Ratio_L<=40)? 0 : _MIN_(u8_Ratio_L-40, 25);
	}

	if( printkEnable == 1 && printkCounter == 0 )
	{
		for(HistoIdx=0; HistoIdx<32; HistoIdx++)
		{
			printk("[%2d] %6d ", HistoIdx, s_pContext->_output_read_comreg.u32_yuv_meter[HistoIdx]);
			if((HistoIdx+1)%4==0)
				printk("\n");
		}
		printk("\n");
		printk("TotalCnt = %d\n", u32_TotalHistNum);
		printk("L = %8d, r = %d, o = %d\n", u32_HistoPartial_L, u8_Ratio_L, Hist2AplOft_L);
		printk("M = %8d, r = %d, o = %d\n", u32_HistoPartial_M, u8_Ratio_M, Hist2AplOft_M);
		printk("H = %8d, r = %d, o = %d\n", u32_HistoPartial_H, u8_Ratio_H, Hist2AplOft_H);
	}

	// -------------------- region target value --------------------
	for(RgnIdx = 0; RgnIdx<3; RgnIdx++)
	{
		RgnAPL = (s_pContext->_output_read_comreg.u20_me_rAPLi_rb[RgnIdx] + s_pContext->_output_read_comreg.u20_me_rAPLp_rb[RgnIdx]) >> 1;
		RgnDTL = s_pContext->_output_read_comreg.u20_me_rDTL_rb[RgnIdx];
		RgnAplAvgWithouCurBlk = (LT_RgnAplAvg*6-s_pContext->_output_read_comreg.u20_me_rAPLi_rb[RgnIdx]-s_pContext->_output_read_comreg.u20_me_rAPLp_rb[RgnIdx]) >> 2;

		// current rgn apl different from others too much
		if( printkEnable == 1 && printkCounter == 0 )
		{
			printk("[%d] RgnAplwoCur = %d thr = %d curApl = %d\n", RgnIdx, RgnAplAvgWithouCurBlk, (80*RgnBlkNum), RgnAPL);
		}
		if( RgnAplAvgWithouCurBlk > RgnAPL && (RgnAplAvgWithouCurBlk-RgnAPL) >= (80*RgnBlkNum) )
		{
			RgnAPL = RgnAplAvgWithouCurBlk;
			//RgnAPL = (RgnAPL*3+LT_RgnAplAvg*5) >> 3;
			if( printkEnable == 1 && printkCounter == 0 )
			{
				printk("[%d] FixAPL = %d (%d)\n", RgnIdx, RgnAPL, (RgnAPL*3+LT_RgnAplAvg*5) >> 3);
			}
		}

		// get the basic output value by apl
		if( RgnDTL >= 8000/*10000*/ )
		{
			if( RgnAPL >= LT_apl_h*RgnBlkNum)
				pOutput->u8_PxlRgnDfy[RgnIdx] = LT_val_h;
			else if(RgnAPL <= LT_apl_l*RgnBlkNum)
				pOutput->u8_PxlRgnDfy[RgnIdx] = LT_val_l;
			else
				pOutput->u8_PxlRgnDfy[RgnIdx] = ((LT_val_h-LT_val_l)*(RgnAPL-LT_apl_l*RgnBlkNum))/((LT_apl_h-LT_apl_l)*RgnBlkNum) + LT_val_l;
		}
		else
		{
			pOutput->u8_PxlRgnDfy[RgnIdx] = LT_val_h;
			if( printkEnable == 1 && printkCounter == 0 )
			{
				printk("[%d] dtl low, fix value\n", RgnIdx);
			}
		}

		if( printkEnable == 1 && printkCounter == 0 )
		{
			printk("[%d] RgnBlks = %d apl bound = %d %d\n", RgnIdx, RgnBlkNum, LT_apl_h*RgnBlkNum, LT_apl_l*RgnBlkNum);
			printk("[%d] apl = %d, dtl = %d, value = %d\n", RgnIdx, RgnAPL, RgnDTL, pOutput->u8_PxlRgnDfy[RgnIdx]);
		}
	}

	// -------------------- decide the final target value --------------------
	for(RgnIdx = 0; RgnIdx<3; RgnIdx++)
	{
		pOutput->u8_PxlRgnDfy[RgnIdx] = pOutput->u8_PxlRgnDfy[RgnIdx] + Hist2AplOft_L + Hist2AplOft_M + Hist2AplOft_H;
		pOutput->u8_PxlRgnDfy[RgnIdx] = _CLIP_(pOutput->u8_PxlRgnDfy[RgnIdx], LT_val_l, LT_val_h);

		if( printkEnable == 1 && printkCounter == 0 )
		{
			printk("[%d] final val = %d\n", RgnIdx, pOutput->u8_PxlRgnDfy[RgnIdx]);
		}
	}

	printkCounter = printkCounter + 1;
	if( printkCounter >= printkPeriod )
		printkCounter = 0;
}

VOID FRC_SLD_PxlRgnClr(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	// cond1. backgournd and logo are the same > clear
	// cond2. flat / motion / too much logo > clear
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	static UBYTE printkCounter = 0;
	const UBYTE printkEnable = pParam->u1_logo_sld_debug_print_en;
	const UINT32 printkPeriod = (pParam->u1_logo_sld_debug_print_period + 1) * 16;

	UBYTE RgnIdx = 0;

	static UINT32 u32_RgnApl[32] = {0};
	static UINT32 u32_RgnDtl[32] = {0};
	static UINT32 u32_RgnZmvCnt[32] = {0};
	static UINT32 u32_RgnPxlCnt[32] = {0};

	UINT32 u32_1stGmvZDiff = 0;
	UINT32 u32_2ndGmvZDiff = 0;
	UINT32 u32_1st2ndGmvDiff = 0;
	//UBYTE u3_RgnLogoSmlMvStatus = 0;

	const UINT32 u32_PxlRgClrCntThr = ((960*540*pParam->u32_logo_rgclr_cnt_thr)/100)/32;
	UINT32 u32_RgnClrCmpThr = 0;

	// output
	UINT32 u32_ClrSigByApl = 0;
	UINT32 u32_ClrSigByDtl = 0;
	UINT32 u32_ClrSigByCnt = 0;
	UINT32 u32_ClrSigByCmp = 0;

	// -------------------- Histogram --------------------
	for(RgnIdx=0; RgnIdx<32; RgnIdx++)
	{
		// 240*135 domain
		u32_RgnApl[RgnIdx] = 0;
		u32_RgnApl[RgnIdx] = (s_pContext->_output_read_comreg.u20_me_rAPLi_rb[RgnIdx] + s_pContext->_output_read_comreg.u20_me_rAPLp_rb[RgnIdx]+1012)/2024;

		// 240*135 domain
		u32_RgnDtl[RgnIdx] = 0;
		u32_RgnDtl[RgnIdx] = (s_pContext->_output_read_comreg.u20_me_rDTL_rb[RgnIdx]+506)/1024;

		// 960x540 domain
		u32_RgnPxlCnt[RgnIdx] = 0;
		u32_RgnPxlCnt[RgnIdx] = s_pContext->_output_read_comreg.u14_pxllogo_rgcnt[RgnIdx];

		// 240*135 domain
		u32_1stGmvZDiff = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[RgnIdx]) + _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[RgnIdx]);
		u32_2ndGmvZDiff = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_2nd_vx_rb[RgnIdx]) + _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_2nd_vy_rb[RgnIdx]);
		u32_1st2ndGmvDiff = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[RgnIdx] - s_pContext->_output_read_comreg.s11_me_rMV_2nd_vx_rb[RgnIdx]) +
							_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[RgnIdx] - s_pContext->_output_read_comreg.s10_me_rMV_2nd_vy_rb[RgnIdx]);

		u32_RgnZmvCnt[RgnIdx] = 1020;
		if( u32_1stGmvZDiff > pParam->u8_logo_rgclr_logo_mv_thr )
		{
			u32_RgnZmvCnt[RgnIdx] = (u32_RgnZmvCnt[RgnIdx] >= s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[RgnIdx])? u32_RgnZmvCnt[RgnIdx]-s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[RgnIdx] : 0;
			//u3_RgnLogoSmlMvStatus = u3_RgnLogoSmlMvStatus | 0x1;
		}
		if( u32_2ndGmvZDiff > pParam->u8_logo_rgclr_logo_mv_thr )
		{
			u32_RgnZmvCnt[RgnIdx] = (u32_RgnZmvCnt[RgnIdx] >= s_pContext->_output_read_comreg.u12_me_rMV_2nd_cnt_rb[RgnIdx])? u32_RgnZmvCnt[RgnIdx]-s_pContext->_output_read_comreg.u12_me_rMV_2nd_cnt_rb[RgnIdx] : 0;
			//u3_RgnLogoSmlMvStatus = u3_RgnLogoSmlMvStatus | 0x2;
		}

#if 1 // normal log

		if( printkEnable == 1 && printkCounter == 0 )
		{

			printk("[%2d] apl= %3d dtl= %3d lg= %5d zmv= %4d ", RgnIdx, u32_RgnApl[RgnIdx], u32_RgnDtl[RgnIdx], u32_RgnPxlCnt[RgnIdx], u32_RgnZmvCnt[RgnIdx]);
			if((RgnIdx+1)%4==0)
				printk("\n");
		}
#else // debugging detail log
		if( printkEnable == 1 && printkCounter == 0 && (RgnIdx<=7 || RgnIdx>=24) )
		{
			printk("[%2d] (%5d %5d %4d) (%5d %5d %4d) final = %4d, flg = %d\n",
				RgnIdx,
				s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[RgnIdx], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[RgnIdx], s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[RgnIdx],
				s_pContext->_output_read_comreg.s11_me_rMV_2nd_vx_rb[RgnIdx], s_pContext->_output_read_comreg.s10_me_rMV_2nd_vy_rb[RgnIdx], s_pContext->_output_read_comreg.u12_me_rMV_2nd_cnt_rb[RgnIdx],
				u32_RgnZmvCnt[RgnIdx], u3_RgnLogoSmlMvStatus
			);

		}
#endif

	}


	for(RgnIdx=0; RgnIdx<32; RgnIdx++)
	{
		// -------------------- clear by apl --------------------
		if( u32_RgnApl[RgnIdx] >= pParam->u32_logo_rgclr_apl_thr )
			u32_ClrSigByApl = (u32_ClrSigByApl | (1<<RgnIdx));

		// -------------------- clear by dtl --------------------
		if( u32_RgnDtl[RgnIdx] <= pParam->u32_logo_rgclr_dtl_thr && u32_RgnApl[RgnIdx] >= pParam->u32_logo_rgclr_apl2dtl_thr )
			u32_ClrSigByDtl = (u32_ClrSigByDtl | (1<<RgnIdx));

		// -------------------- clear by logo count --------------------
		if( u32_RgnPxlCnt[RgnIdx] >= u32_PxlRgClrCntThr )
			u32_ClrSigByCnt = (u32_ClrSigByCnt | (1<<RgnIdx));

		// -------------------- clear by logo and zmv count comparison --------------------
		u32_RgnClrCmpThr = ((u32_RgnZmvCnt[RgnIdx]*pParam->u32_logo_rgclr_cmp_gain_thr)/64 + pParam->u32_logo_rgclr_cmp_ofst_thr*8);
		if( (u32_RgnPxlCnt[RgnIdx]/16) >= u32_RgnClrCmpThr )
			u32_ClrSigByCmp = (u32_ClrSigByCmp | (1<<RgnIdx));

#if 1
		if( printkEnable == 1 && printkCounter == 0 )
#else
		if( printkEnable == 1 && printkCounter == 0 && (RgnIdx<=7 || RgnIdx>=24) )
#endif
		{
			printk("[%2d] cmp = %4d, thr = %4d ", RgnIdx, (u32_RgnPxlCnt[RgnIdx]/4), u32_RgnClrCmpThr );
			if((RgnIdx+1)%4==0)
				printk("\n");
		}
	}

	pOutput->u32_PxlRgClrSig = 0;
	if( pParam->u1_logo_rgclr_apl_en == 1 )
		pOutput->u32_PxlRgClrSig = pOutput->u32_PxlRgClrSig | u32_ClrSigByApl;
	if( pParam->u1_logo_rgclr_dtl_en == 1 )
		pOutput->u32_PxlRgClrSig = pOutput->u32_PxlRgClrSig | u32_ClrSigByDtl;
	if( pParam->u1_logo_rgclr_cnt_en == 1 )
		pOutput->u32_PxlRgClrSig = pOutput->u32_PxlRgClrSig | u32_ClrSigByCnt;
	if( pParam->u1_logo_rgclr_cmp_en == 1 )
		pOutput->u32_PxlRgClrSig = pOutput->u32_PxlRgClrSig | u32_ClrSigByCmp;

	if( printkEnable == 1 && printkCounter == 0 )
	{
		printk("PxlCntThr = %d, Sig = apl[%08x] dtl[%08x] cnt[%08x] cmp[%08x] out[%08x]\n",
			u32_PxlRgClrCntThr,
			u32_ClrSigByApl, u32_ClrSigByDtl, u32_ClrSigByCnt, u32_ClrSigByCmp,
			pOutput->u32_PxlRgClrSig);
	}

	printkCounter = printkCounter + 1;
	if( printkCounter >= printkPeriod )
		printkCounter = 0;

}

VOID FRC_LogoDet_Proc(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{

	if (pParam->u1_logo_pql_en == 1)
	{
		//const _PQLCONTEXT *s_pContext		= GetPQLContext();
		pOutput->u32_blklogo_clr_idx		= 0;
		pOutput->u1_blkclr_glbstatus		= 0;
		pOutput->u1_logo_cnt_glb_clr_status = 0;
		pOutput->u1_logo_sc_glb_clr_status  = 0;
		pOutput->u1_sw_clr_en_out           = pParam->u1_logo_sw_clr_en;
		pOutput->u4_blk_pix_merge_type_out	= pParam->u4_blk_pix_merge_type;
		pOutput->u32_logo_hsty_clr_idx      = 0;
		pOutput->u32_logo_hsty_clr_lgclr_idx = 0;

		FRC_LgDet_RgHstyClr(pParam, pOutput);
		FRC_LgDet_BlkClrCtrl(pParam, pOutput);
		FRC_LgDet_netflix_detect(pParam, pOutput);
		FRC_LgDet_SCCtrl(pParam, pOutput);
		FRC_LgDet_CloseVar(pParam, pOutput);
		//FRC_LgDet_RgDhClr(pParam, pOutput);
		//FRC_LgDet_RgHstyClr(pParam, pOutput);
		FRC_LgDet_SC_Detect(pParam, pOutput);
		FRC_LgDet_SC_FastDetectionCtrl(pParam, pOutput);
		FRC_LogoDet_RgnDistribute(pParam, pOutput);
		//FRC_LgDet_LG_16s_Patch(pParam, pOutput);
		//FRC_LgDet_RgDhAdp_Rimunbalance(pParam, pOutput);
		//FRC_LgDet_LG_UXN_Patch(pParam, pOutput);

	}
	else
	{
	    pOutput->u1_sw_clr_en_out = 1;
		pOutput->u4_blk_pix_merge_type_out = 0;
		pOutput->u32_blklogo_clr_idx  = 0;
		pOutput->u5_iir_alpha_out = 0x1F;
		pOutput->u32_logo_hsty_clr_idx      = 0;
		pOutput->u32_logo_hsty_clr_lgclr_idx = 0;

		pOutput->u1_logo_netflix_status = 0;
		pOutput->u8_logo_netflix_hold_frm = 0;

		pOutput->u1_logo_lg16s_patch_status   = 0;
		pOutput->u8_logo_lg16s_patch_hold_frm = 0;

		pOutput->u1_logo_lg16s_patch_Gapli_status     = 0;
		pOutput->u1_logo_lg16s_patch_Gaplp_status     = 0;
		pOutput->u1_logo_lg16s_patch_Gdtl_status     = 0;
		pOutput->u1_logo_lg16s_patch_Gsad_status     = 0;
		pOutput->u1_logo_lg16s_patch_Gmv_status      = 0;
		pOutput->u1_logo_lg16s_patch_Rdtl_num_status = 0;

		pOutput->u1_logo_sc_FastDet_status = 0;
		pOutput->u8_logo_sc_FastDet_cntholdfrm = 0;
	}

}


#if 0 // rremove from Merlin2

VOID FRC_LogoDet_Init(_OUTPUT_FRC_LGDet *pOutput)
{
	int i;
	pOutput->s16_blklogo_glbclr_cnt = 0;
	//pOutput->s16_pixlogo_glbclr_cnt = 0;

	//pOutput->s16_SC_clrAlpha_cnt = 0;
	//pOutput->s16_SC_clrLogo_cnt  = 0;
	//pOutput->s16_SC_holdHsty_cnt = 0;

	for (i=0; i<LOGO_RG_32; i++)
	{
		*(pOutput->s16_blklogo_rgclr_cnt + i) = 0;
		//*(pOutput->s16_pixlogo_rgclr_cnt + i) = 0;
	}

	//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_hw_en), 0);
}

VOID FRC_LgDet_RB(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	UINT32 idx;

	//////////////////////////////////////////////////////////////////////////
	for (idx=0; idx < RG_32/2; idx++)
	{
		ReadRegister(FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx0_cnt_ADDR + idx *4,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx0_cnt_BITSTART,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx0_cnt_BITEND, pOutput->u14_pixlogo_rgcnt + idx*2);

		ReadRegister(FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx0_cnt_ADDR + idx *4,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx1_cnt_BITSTART,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx1_cnt_BITEND, pOutput->u14_pixlogo_rgcnt + idx*2 + 1);
	}

	for (idx=0; idx < RG_32; idx++)
	{
		ReadRegister(FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx0_y_ADDR + idx *4,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx0_y_BITSTART,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_pxlrg_idx0_y_BITEND, pOutput->u20_pixlogo_rgaccY + idx);
	}

	for (idx=0; idx < RG_32; idx++)
	{
		ReadRegister(FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_blkrg_idx0_cnt_ADDR + idx *4,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_blkrg_idx0_cnt_BITSTART,
			FRC_TOP__KME_LOGO2__reg_rdbk_km_logo_blkrg_idx0_cnt_BITEND, pOutput->u10_blklogo_rgcnt + idx);
	}


	//readback gmv
	for (idx=0; idx < RG_32; idx++)
	{
		UINT32 tmp;
		ReadRegister(FRC_TOP__KME_ME_TOP2__regr_metop_gmv_gmvratio00_rdback_ADDR + idx*4,
			0, 7, &tmp);
		*(pOutput->s16_gmv_y_max + idx) = tmp < 128 ? tmp : tmp-256;
		ReadRegister(FRC_TOP__KME_ME_TOP2__regr_metop_gmv_gmvratio00_rdback_ADDR + idx*4,
			8, 16, &tmp);
		*(pOutput->s16_gmv_x_max + idx) = tmp < 256 ? tmp : tmp-512;
		ReadRegister(FRC_TOP__KME_ME_TOP2__regr_metop_gmv_gmvratio00_rdback_ADDR + idx*4,
			24, 31,&tmp);
		*(pOutput->u8_gmv_rat_max + idx) = tmp;


		ReadRegister(FRC_TOP__KME_ME_TOP5__regr_metop_gmv_gmvsec00_rdback_ADDR + idx*4,
			0, 7, &tmp);
		*(pOutput->s16_gmv_y_sec + idx) = tmp < 128 ? tmp : tmp-256;
		ReadRegister(FRC_TOP__KME_ME_TOP5__regr_metop_gmv_gmvsec00_rdback_ADDR + idx*4,
			8, 16, &tmp);
		*(pOutput->s16_gmv_x_sec + idx) = tmp < 256 ? tmp : tmp-512;
		ReadRegister(FRC_TOP__KME_ME_TOP5__regr_metop_gmv_gmvsec00_rdback_ADDR + idx*4,
			24, 31,&tmp);
		*(pOutput->u8_gmv_rat_sec + idx) = tmp;
	}

	for (idx=0; idx < RG_32-2; idx++)
	{
		ReadRegister(FRC_TOP__KME_ME_TOP2__regr_metop_rdbk_sad_region00_ADDR + idx *4,
			FRC_TOP__KME_ME_TOP2__regr_metop_rdbk_sad_region00_BITSTART,
			FRC_TOP__KME_ME_TOP2__regr_metop_rdbk_sad_region00_BITEND, pOutput->u32_region_sad_sum + idx);
	}

	ReadRegister(FRC_TOP__KME_ME_TOP3__regr_metop_rdbk_sad_region36_ADDR + idx *4,
		FRC_TOP__KME_ME_TOP3__regr_metop_rdbk_sad_region36_BITSTART,
		FRC_TOP__KME_ME_TOP3__regr_metop_rdbk_sad_region36_BITEND, pOutput->u32_region_sad_sum + 30);

	ReadRegister(FRC_TOP__KME_ME_TOP3__regr_metop_rdbk_sad_region37_ADDR + idx *4,
		FRC_TOP__KME_ME_TOP3__regr_metop_rdbk_sad_region37_BITSTART,
		FRC_TOP__KME_ME_TOP3__regr_metop_rdbk_sad_region37_BITEND, pOutput->u32_region_sad_sum + 31);

}



VOID FRC_LgDet_DS_RgY(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 u32_logo_pxlrgydf_bypass = 0;

	if (pParam->u1_logo_dynY_en == 1)
	{
		int j,i;
		for (j = 0; j < RG_32/4; j++)
		{
			UINT32 data_tmp = 0;
			for (i = 0; i < 4; i++)
			{
				UINT32 pixlogo_rg_Y   = s_pContext->_output_FRC_LgDet.u20_pixlogo_rgaccY[j*4+i];
				UINT32 pixlogo_rg_cnt = s_pContext->_output_FRC_LgDet.u14_pixlogo_rgcnt[j*4+i];

				if (pixlogo_rg_cnt != 0)
				{
					pixlogo_rg_Y = (pixlogo_rg_Y << 2) / pixlogo_rg_cnt;
				}
				else
				{
					pixlogo_rg_Y = 128;
					u32_logo_pxlrgydf_bypass = u32_logo_pxlrgydf_bypass | (1<< (i + j*4));
				}

				data_tmp = data_tmp | (pixlogo_rg_Y << (i*8));
			}
			WriteRegister(FRC_TOP__KME_LOGO2__reg_km_logo_pxlrgdfy_idx0_ADDR+j*4,0,31, data_tmp);
		}
	}
	else
	{
		u32_logo_pxlrgydf_bypass = 0xFFFFFFFF;
	}

	WriteRegister(FRC_TOP__KME_LOGO2__reg_km_logo_pxlrgydf_bypass0_31_ADDR,0,31, u32_logo_pxlrgydf_bypass);
}

VOID FRC_LgDet_DS_Delg(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	/*	const _PQLCONTEXT *s_pContext = GetPQLContext();*/

	SINT16* gmv_x_max = pOutput->s16_gmv_x_max;
	SINT16* gmv_y_max = pOutput->s16_gmv_y_max;
	UBYTE*  gmv_r_max = pOutput->u8_gmv_rat_max;

	SINT16* gmv_x_sec = pOutput->s16_gmv_x_sec;
	SINT16* gmv_y_sec = pOutput->s16_gmv_y_sec;
	UBYTE*  gmv_r_sec = pOutput->u8_gmv_rat_sec;

	if (pParam->u1_logo_dynDelogo_en == 1)
	{
		//for giraffe's Philips logo, maybe need more detail feature.
		//current use first, sec gmv, and ratio.(ratio max is 128)
		//UINT32 idx;
		//UINT32 mvx[2], mvy[2], rat[2], mvsum[2];

		//for (idx = 0; idx<2; idx++)
		//{
		//	ReadRegister(FRC_TOP__KME_ME_TOP2__regr_metop_gmv_gmvratio00_rdback_ADDR + idx*4,
		//		0, 7, mvy + idx);
		//	ReadRegister(FRC_TOP__KME_ME_TOP2__regr_metop_gmv_gmvratio00_rdback_ADDR + idx*4,
		//		8, 16,mvx + idx);
		//	ReadRegister(FRC_TOP__KME_ME_TOP2__regr_metop_gmv_gmvratio00_rdback_ADDR + idx*4,
		//		24, 31,rat + idx);
		//	//abs
		//	mvx[idx]   = _CLIP_(mvx[idx], 0, 0xFF);
		//	mvy[idx]   = _CLIP_(mvy[idx], 0, 0x7F);
		//	mvsum[idx] = mvx[idx] + mvy[idx];
		//}

		//if (mvsum[0] >= pParam->u16_dynDelogo_mv_th && mvsum[1] >= pParam->u16_dynDelogo_mv_th &&
		//	rat[0] >= pParam->u8_dynDelogo_rat_th && rat[1] >= pParam->u8_dynDelogo_rat_th)
		//{
		//	//need test hor/ver for fast gmv motion, delogo.
		//	WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_mvd_bypass), 7);
		//	WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_tmv_bypass), 1);
		//}
		//else
		//{
		//	WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_mvd_bypass), 0);
		//	WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_tmv_bypass), 0);
		//}

		UINT32 idx;
		UINT32 gg_num = 0;
		for (idx=0; idx < RG_32; idx++)
		{
			UINT32 mv_diff  = abs(gmv_x_max[idx] - gmv_x_sec[idx]) + abs(gmv_y_max[idx] - gmv_y_sec[idx]);
			UINT32 mv_alpha = mv_diff <= pParam->u8_gg_mvd12_thr ? gmv_r_max[idx] + gmv_r_sec[idx] - gmv_r_sec[idx]*mv_diff/ pParam->u8_gg_mvd12_thr : gmv_r_max[idx];
			if ((abs(gmv_x_max[idx]) > pParam->u8_gg_mvx_thr) && (abs(gmv_y_max[idx]) > pParam->u8_gg_mvy_thr) &&
				(mv_alpha > pParam->u8_gg_alpha_thr) && (*(pOutput->u32_region_sad_sum + idx) < pParam->u32_gg_sad_thr))
			{
				gg_num++;
			}
		}

		if (gg_num > pParam->u8_gg_num_thr)
		{
			WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_mvd_bypass), 7);
			WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_tmv_bypass), 1);
		}
		else
		{
			WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_mvd_bypass), pParam->u8_reg_mvd);
			WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_tmv_bypass), pParam->u8_reg_tmv);
		}
	}
	else
	{
		//need set to default setting.
		WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_mvd_bypass), pParam->u8_reg_mvd);
		WriteRegister(KIWI_REG(FRC_TOP__DEHALO__reg_dh_logo_tmv_bypass), pParam->u8_reg_tmv);
	}
}


VOID FRC_LgDet_DS_ThrStep(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	/*	const _PQLCONTEXT *s_pContext = GetPQLContext();*/

	if (pParam->u1_logo_dynBlkTh_en == 1 &&  pOutput->u32_frm_cnt >= pParam->u8_dynBlkTh_cnt)
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_adpblksameth_en), 1);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_adpblksameth_en), 0);
	}

	if (pParam->u1_logo_dynPixTh_en == 1 &&  pOutput->u32_frm_cnt >= pParam->u8_dynPixTh_cnt)
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_adppxldfth_en),   1);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_adppxldfth_en),   0);
	}


	if (pParam->u1_logo_dynBlkStep_en == 1 &&  pOutput->u32_frm_cnt >= pParam->u8_dynBlkStep_cnt)
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkhsty_upmet), pParam->u1_blkHsty_upmet);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en), 0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkhsty_upmet), 0);
	}

	if (pParam->u1_logo_dynPixStep_en == 1 &&  pOutput->u32_frm_cnt >= pParam->u8_dynPixStep_cnt)
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxladphstystep_en), 1);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxladphstystep_en), 0);
	}
}



VOID FRC_LgDet_DynSet(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	//#1: Dyn regional Y set.
	FRC_LgDet_DS_RgY(pParam, pOutput);

	//#2: Dyn. use Adp. thr, step.
	FRC_LgDet_DS_ThrStep(pParam, pOutput);

	//#3. Fast,Good GMV and abandon dehalo de-logo (mvd,zmv)
	FRC_LgDet_DS_Delg(pParam, pOutput);

}

VOID FRC_LgDet_PixClrCtrl(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 idx;
	UINT32 acc_pix_num;
	SINT16*  hold_cnt_rg  = pOutput->s16_pixlogo_rgclr_cnt;

	acc_pix_num = 0;
	for (idx = 0; idx < RG_32; idx++)
	{
		UINT32 pixlogo_rg_cnt = s_pContext->_output_FRC_LgDet.u14_pixlogo_rgcnt[idx];
		if (((pixlogo_rg_cnt * 256 / PIX_LOGO_RG_PIXCNT) >= pParam->u8_pixRgClr_thr) && pParam->u1_logo_pixRgClr_en == 1)
		{
			pOutput->u32_pixlogo_clr_idx = pOutput->u32_pixlogo_clr_idx | (1 << idx);
			hold_cnt_rg[idx] = pParam->u6_rgClr_holdtime;
		}
		else if ((hold_cnt_rg[idx] > 1) && pParam->u1_logo_pixRgClr_en == 1)
		{
			pOutput->u32_pixlogo_clr_idx = pOutput->u32_pixlogo_clr_idx | (1 << idx);
			hold_cnt_rg[idx] = _MAX_(hold_cnt_rg[idx] - 1,0);
#if LOGO_DEBUG_PRINTF
			if (idx == 15 && pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"pix logo region(idx=15) clear cnt: %d  \r\n",hold_cnt_rg[idx]);
#endif
		}

		acc_pix_num += pixlogo_rg_cnt;
	}

	if ((((acc_pix_num * 256) / (PIX_LOGO_PIXCNT)) >= pParam->u8_pixGlbClr_thr) &&  pParam->u1_logo_pixGlbClr_en == 1)
	{
		pOutput->u32_pixlogo_clr_idx    = pOutput->u32_pixlogo_clr_idx | 0xFFFFFFFF;
		pOutput->s16_pixlogo_glbclr_cnt = pParam->u6_GlbClr_holdtime;
		pOutput->u1_pixclr_glbstatus    = 1;
	}
	else if (pOutput->s16_pixlogo_glbclr_cnt > 1 &&  pParam->u1_logo_pixGlbClr_en == 1)
	{
		pOutput->u32_pixlogo_clr_idx    = pOutput->u32_pixlogo_clr_idx | 0xFFFFFFFF;
		pOutput->s16_pixlogo_glbclr_cnt = _MAX_(pOutput->s16_pixlogo_glbclr_cnt - 1,0);
		pOutput->u1_pixclr_glbstatus    = 1;
	}

#if LOGO_DEBUG_PRINTF
	if ((pOutput->u32_frm_cnt%500) == 0 && pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"pix logo clear: %d  \r\n",pOutput->u1_pixclr_glbstatus);
	if ((pOutput->u32_frm_cnt%500) == 0 && pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"accum pix logo: %d  \r\n",acc_pix_num);
#endif

}

//for clear logo (glb, rg), just set the clr status.
VOID FRC_LgDet_BlkClrCtrl(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 idx;
	UINT32 acc_blk_num;
	UINT32 acc_left_blk_num = 0;
	UINT32 acc_right_blk_num = 0;
	UINT32 acc_top_blk_num = 0;
	UINT32 acc_bottom_blk_num = 0;
	SINT16*  hold_cnt_rg  = pOutput->s16_blklogo_rgclr_cnt;

	acc_blk_num = 0;
	for (idx = 0; idx < RG_32; idx++)
	{
		UINT32 blklogo_rg_cnt = s_pContext->_output_FRC_LgDet.u10_blklogo_rgcnt[idx];
		if ((((blklogo_rg_cnt * 256) / (BLK_LOGO_RG_BLKCNT)) >= pParam->u8_clr_rg_thr) && pParam->u1_logo_rg_clr_en == 1)
		{
			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | (1 << idx);
			hold_cnt_rg[idx] = pParam->u6_rgClr_holdtime;
		}
		else if ((hold_cnt_rg[idx] > 1)  && pParam->u1_logo_rg_clr_en == 1)
		{
			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | (1 << idx);
			hold_cnt_rg[idx] = _MAX_(hold_cnt_rg[idx] - 1,0);
#if LOGO_DEBUG_PRINTF
			if (idx == 15 && pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"blk logo region(idx=15) clear cnt: %d  \r\n",hold_cnt_rg[idx]);
#endif
		}

		//CMO
		if ((((blklogo_rg_cnt * 256) / (BLK_LOGO_RG_BLKCNT)) >= pParam->u8_cmo_clear_thr) && pParam->u1_logo_rg_clr_en == 1
			&& pParam->u1_logo_dynAlpha_en == 1 && (((pParam->u32_cmo_clear_idx >> idx) & 0x1) == 1))
		{
			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | (1 << idx);
#if LOGO_DEBUG_PRINTF
			if (pParam->u1_printf_en==1)	 LogPrintf(DBG_MSG,"CMO logo: %d region clear, cnt: %d  \r\n",idx,blklogo_rg_cnt);
#endif
		}

		acc_blk_num += blklogo_rg_cnt;

		if (idx < 16)
		{
			acc_top_blk_num += blklogo_rg_cnt;
		}
		else
		{
			acc_bottom_blk_num += blklogo_rg_cnt;
		}
		if (idx%8 <4)
		{
			acc_left_blk_num += blklogo_rg_cnt;
		}
		else
		{
			acc_right_blk_num += blklogo_rg_cnt;
		}

	}


	if (((((acc_blk_num * 256) / (BLK_LOGO_BLKCNT)) >= pParam->u8_clr_glb_thr) && pParam->u1_logo_glb_clr_en == 1)
		|| ((((acc_left_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && ((pParam->u4_logo_half_clr_en & 0x1) == 1))
		|| ((((acc_right_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && (((pParam->u4_logo_half_clr_en>>1) & 0x1) == 1))
		|| ((((acc_top_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && (((pParam->u4_logo_half_clr_en>>2) & 0x1) == 1))
		|| ((((acc_bottom_blk_num * 256) / (BLK_LOGO_BLKCNT/2)) >= pParam->u8_clr_half_thr) && (((pParam->u4_logo_half_clr_en>>3) & 0x1) == 1)))
	{
		pOutput->u32_blklogo_clr_idx    = pOutput->u32_blklogo_clr_idx | 0xFFFFFFFF;
		pOutput->s16_blklogo_glbclr_cnt = pParam->u6_GlbClr_holdtime;
		pOutput->u1_blkclr_glbstatus = 1;
	}
	else if (pOutput->s16_blklogo_glbclr_cnt > 1 &&  pParam->u1_logo_glb_clr_en == 1)
	{

		pOutput->u32_blklogo_clr_idx    = pOutput->u32_blklogo_clr_idx | 0xFFFFFFFF;
		pOutput->s16_blklogo_glbclr_cnt = _MAX_(pOutput->s16_blklogo_glbclr_cnt - 1,0);
		pOutput->u1_blkclr_glbstatus = 1;
	}

	//for disp.
	//if (pOutput->u1_blkclr_glbstatus == 1 || s_pContext->_output_read_comreg.u1_sc_status_rb == 1)
	//{
	//	WriteRegister(KIWI_REG(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0), 1);
	//}
	//else
	//{
	//	WriteRegister(KIWI_REG(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0), 0);
	//}

#if LOGO_DEBUG_PRINTF
	if ((pOutput->u32_frm_cnt%500) == 0 && pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"blk logo clear: %d  \r\n",pOutput->u1_blkclr_glbstatus);
	if ((pOutput->u32_frm_cnt%500) == 0 && pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"accum blk logo: %d  \r\n",acc_blk_num);
#endif
}

//current, use blk_logo idx to clear SC logo (global all)
//default is logoClr=1, holdHsty=1, clrAlpha=1
VOID FRC_LgDet_SCCtrl(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	pOutput->u5_alpha_bld           = pParam->u5_reg_iir_alpha;
	pOutput->u4_blklogo_pStep_cur   = pParam->u4_blklogo_pStep;
	pOutput->u4_pixlogo_pStep_cur   = pParam->u4_pixlogo_pStep;

	if (s_pContext->_output_read_comreg.u1_sc_status_rb == 1)
	{
		pOutput->u32_frm_cnt  = 0;  //for auto En
		if (pParam->u1_logo_SCalphaClr_en == 1)
		{
			pOutput->u5_alpha_bld = 0;
			pOutput->s16_SC_clrAlpha_cnt = pParam->u6_SCalpha_holdtime;
#if LOGO_DEBUG_PRINTF
			if (pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"alpha %d \r\n",pOutput->u5_alpha_bld);
#endif
		}
		if (pParam->u1_logo_SCLogoClr_en == 1)
		{
			//pOutput->u32_pixlogo_clr_idx = pOutput->u32_pixlogo_clr_idx | 0xFFFFFFFF;
			//pOutput->u1_pixclr_glbstatus = 1;

			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | 0xFFFFFFFF;
			pOutput->u1_blkclr_glbstatus = 1;

			pOutput->s16_SC_clrLogo_cnt  = pParam->u6_SCclrlogo_holdtime;
#if LOGO_DEBUG_PRINTF
			if (pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"SC clr pix logo \r\n");
#endif
		}
		if (pParam->u1_logo_SCHstyClr_en == 1)
		{
			pOutput->u4_blklogo_pStep_cur = 0;
			pOutput->u4_pixlogo_pStep_cur = 0;
			pOutput->s16_SC_holdHsty_cnt  = pParam->u6_SCclrHsty_holdtime;
#if LOGO_DEBUG_PRINTF
			if (pParam->u1_printf_en==1)	LogPrintf(DBG_MSG,"SC hold hsty \r\n");
#endif
		}
	}
	else
	{
		pOutput->u32_frm_cnt = _CLIP_(pOutput->u32_frm_cnt = pOutput->u32_frm_cnt + 1, 0, 0xFFFFFFF);
		if (pParam->u1_logo_SCalphaClr_en == 1 && pOutput->s16_SC_clrAlpha_cnt > 1)
		{
			pOutput->u5_alpha_bld = 0;
			pOutput->s16_SC_clrAlpha_cnt = _MAX_(pOutput->s16_SC_clrAlpha_cnt-1,0);
#if LOGO_DEBUG_PRINTF
			if (pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"alpha %d \r\n",pOutput->u5_alpha_bld);
#endif
		}
		if (pParam->u1_logo_SCLogoClr_en == 1 && pOutput->s16_SC_clrLogo_cnt > 1)
		{
			//pOutput->u32_pixlogo_clr_idx = pOutput->u32_pixlogo_clr_idx | 0xFFFFFFFF;
			//pOutput->u1_pixclr_glbstatus = 1;

			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | 0xFFFFFFFF;
			pOutput->u1_blkclr_glbstatus = 1;

			pOutput->s16_SC_clrLogo_cnt  = _MAX_(pOutput->s16_SC_clrLogo_cnt-1,0);
#if LOGO_DEBUG_PRINTF
			if (pParam->u1_printf_en==1)   LogPrintf(DBG_MSG,"SC clr pix logo, hold cnt:%d \r\n", pOutput->s16_SC_clrLogo_cnt);
#endif
		}
		if (pParam->u1_logo_SCLogoClr_en == 1 && pOutput->s16_SC_clrLogo_cnt > 1)
		{
			pOutput->u4_blklogo_pStep_cur = 0;
			pOutput->u4_pixlogo_pStep_cur = 0;
			pOutput->s16_SC_holdHsty_cnt  = _MAX_(pOutput->s16_SC_holdHsty_cnt-1,0);
#if LOGO_DEBUG_PRINTF
			if (pParam->u1_printf_en==1)  LogPrintf(DBG_MSG,"SC hold hsty, hold cnt:%d \r\n", pOutput->s16_SC_holdHsty_cnt);
#endif
		}
	}

	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_iir_alpha),     pOutput->u5_alpha_bld);
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep), pOutput->u4_blklogo_pStep_cur);
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlhsty_pstep), pOutput->u4_pixlogo_pStep_cur);
}

VOID FRC_LgDet_ClrAction(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{
	if(pParam->u4_reg_merge_type > 0 && pOutput->u32_blklogo_clr_idx > 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_merge_type), 0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_en), pOutput->u32_blklogo_clr_idx);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_merge_type), pParam->u4_reg_merge_type);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_en), pOutput->u32_blklogo_clr_idx);
	}

	if ((pParam->u1_logo_blkRgClrHsty_en == 1) || (pParam->u1_logo_blkGlbClrHsty_en == 1 && pOutput->u1_blkclr_glbstatus == 1))
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrblkhsty_en), pOutput->u32_blklogo_clr_idx);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrblkhsty_en), 0);
	}
}



VOID FRC_LogoDet_Proc(const _PARAM_FRC_LGDet *pParam, _OUTPUT_FRC_LGDet *pOutput)
{

	if (pParam->u1_logo_pql_en == 1)
	{

		FRC_LgDet_BlkClrCtrl(pParam, pOutput);
	}


	if (pParam->u1_logo_pql_en == 1)
	{
		const _PQLCONTEXT *s_pContext = GetPQLContext();
		UBYTE  u1_gmv_logoClr = s_pContext->_output_me_sceneAnalysis.u1_logoClr_gmv_true;

#if LOGO_DEBUG_PRINTF
		if ((pOutput->u32_frm_cnt%500) == 5 && pParam->u1_printf_en==1)   LogPrintf(DBG_MSG,"Logo PQL Enable \r\n");
#endif

		pOutput->u32_blklogo_clr_idx = 0;
		pOutput->u32_pixlogo_clr_idx = 0;
		pOutput->u1_blkclr_glbstatus = 0;
		pOutput->u1_pixclr_glbstatus = 0;

		//1st read-back
		FRC_LgDet_RB(pParam, pOutput);

		FRC_LgDet_SCCtrl(pParam, pOutput);

		if(u1_gmv_logoClr == 1)
		{
			pOutput->u32_blklogo_clr_idx = pOutput->u32_blklogo_clr_idx | 0xFFFFFFFF;
			pOutput->u1_blkclr_glbstatus = 1;
		}

		FRC_LgDet_BlkClrCtrl(pParam, pOutput);
		//FRC_LgDet_PixClrCtrl(pParam, pOutput);

		//use blk statics, use pixclr reg to clear.
		FRC_LgDet_ClrAction(pParam, pOutput);

		//local dynamic set, if clear/sc = manual setting.
		FRC_LgDet_DynSet(pParam, pOutput);
	}

}
#endif
