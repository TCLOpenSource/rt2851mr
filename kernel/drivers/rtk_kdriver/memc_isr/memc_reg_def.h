#ifndef __MEMC_REG_DEF_H__
#define __MEMC_REG_DEF_H__


//page 0X
#include <rbus/kmc_top_reg.h>			//00
#include <rbus/ippre_reg.h>				//01
#include <rbus/pqc_pqdc_reg.h>		//02, 08 and 0D
#include <rbus/decpr_ptg_reg.h>		//03
#include <rbus/mc_dma_reg.h>		//04 and 1E
#include <rbus/ippre1_reg.h>			//05
#include <rbus/mc_reg.h>				//06
#include <rbus/mc2_reg.h>				//07
#include <rbus/lbmc_reg.h>				//09
#include <rbus/bbd_reg.h>				//0A
#include <rbus/kmc_meter_top_reg.h>		//0B

//page 2X
// k6lp_bring_up #include <rbus/kme_top_reg.h>			//20
#include <rbus/kme_vbuf_top_reg.h>			// 22
#include <rbus/kme_me1_top1_reg.h>		// 23
#include <rbus/kme_me1_top2_reg.h>		// 23
#include <rbus/kme_me1_top3_reg.h>		// 24
#include <rbus/kme_me1_top4_reg.h>		// 25
#include <rbus/kme_me1_top5_reg.h>		// 26
#include <rbus/me_share_dma_reg.h>		// 27
#include <rbus/kme_me1_top10_reg.h>		// 28
#include <rbus/kme_lbme_top_reg.h>		// 29
#include <rbus/kme_me2_calc1_reg.h>		// 2A
#include <rbus/kme_logo2_reg.h>			// 2B
#include <rbus/kme_ipme_reg.h>		// 2C
#include <rbus/kme_ipme1_reg.h>		// 2D
#include <rbus/kme_logo0_reg.h>			// 2E
#include <rbus/kme_logo1_reg.h>			// 2F

//page 3X
#include <rbus/kme_dm_top0_reg.h>		//30
#include <rbus/kme_dm_top1_reg.h>		//31
#include <rbus/kme_dm_top2_reg.h>		//32
#include <rbus/kme_dehalo3_reg.h>		//33
// k6lp_bring_up #include <rbus/kme_me1_drp_reg.h>		//34
#include <rbus/kme_me1_top0_reg.h>		//34  -> error
#include <rbus/kme_lbme2_top_reg.h>		// 36
#include <rbus/kme_me2_vbuf_top_reg.h>	//37
#include <rbus/kme_me2_calc0_reg.h>		//38
#include <rbus/kme_me1_top6_reg.h>		//39
#include <rbus/kme_me1_top7_reg.h>		// 3A
#include <rbus/kme_me1_top8_reg.h>		// 3B
#include <rbus/kme_me1_top9_reg.h>		// 3C
#include <rbus/kme_dehalo_reg.h>		// 3D
#include <rbus/kme_dehalo2_reg.h>		// 3E

//page 4X
#include <rbus/kpost_top_reg.h>			//40
#include <rbus/crtc1_reg.h>				//41
#include <rbus/kphase_reg.h>			//44

//page 5X
#include <rbus/dbus_wrapper_reg.h>		//50 and 51

//page 6X
// k6lp_bring_up #include <rbus/kme_bist_reg.h>			//60
#include <rbus/kmc_bist_bisr_reg.h>		//61
#include <rbus/kmc_bi_reg.h>			//62

//others
#include <rbus/sys_reg_reg.h>			//for MEMC CLK control

#endif

/*-----------------------------------------------------------------------------------------*/
