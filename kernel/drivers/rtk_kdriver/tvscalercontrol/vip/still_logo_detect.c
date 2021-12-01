/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2014
  * All rights reserved.
  * ========================================================================*/
  /*================= File Description =======================================*/
  /**
   * @file
   *  This file is for Local Contrast related functions.
   *
   * @author  $Author$
   * @date	  $Date$
   * @version	  $Revision$
   */


  /*============================ Module dependency	===========================*/
#if CONFIG_FIRMWARE_IN_KERNEL
#include <linux/string.h>
#include <tvscalercontrol/io/ioregdrv.h>
#include <linux/kernel.h>
#include "tvscalercontrol/vip/still_logo_detect.h"
#include <tvscalercontrol/scaler/vipinclude.h> // for typedef that used in VIP_reg_def.h
#include <tvscalercontrol/vip/vip_reg_def.h>
#include <mach/rtk_log.h>
#define TAG_NAME "VPQ"

#include <linux/mtd/mtd.h>
#include <linux/uaccess.h>
#include <asm/cacheflush.h>
#include <linux/pageremap.h>
#include <uapi/linux/const.h>
#include <linux/mm.h>
#include <linux/auth.h>
#include <linux/semaphore.h>//for semaphore
#include <linux/version.h>
//#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scalerdrv/mode.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scaler/source.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
//#include <tvscalercontrol/vip/vip_reg_def.h>
#include <tvscalercontrol/vip/gibi_od.h>
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <mach/rtk_log.h>
#include <rbus/lgd_dither_reg.h>
#include <rbus/pcid_reg.h>
#include <rbus/od_dma_reg.h>
#include "rtk_vip_logger.h"

#else
#include <unistd.h>		// 'close()'
#include <fcntl.h>			// 'open()'
#include <stdio.h>
#include <sys/ioctl.h>

#include <Platform_Lib/TVScalerControl/io/ioRegDrv.h>
#include <Platform_Lib/TVScalerControl/vip/still_logo_detect.h>
#include <Platform_Lib/TVScalerControl/vip/VIP_reg_def.h>
#include <tvscalercontrol/vip/vip_reg_def.h>

#endif


#if CONFIG_FIRMWARE_IN_KERNEL
#define TAG_NAME "VPQ"
#undef VIPprintf
#define VIPprintf(fmt, args...)	VIPprintfPrivate(VIP_LOGLEVEL_DEBUG,VIP_LOGMODULE_VIP_GIBI_OD_DEBUG,fmt,##args)
#else
#define VIPprintf(fmt, args...)	printf(fmt, ##args)
#endif


#if 1/*SLD, hack, elieli*/
#define SLD_Debug 0

bool drvif_set_sld_dma(void)
{
	unsigned int sld_size = 0;
	unsigned int sld_addr = 0;
	unsigned int align_value =0;

#ifdef CONFIG_OPTEE_SECURE_SVP_PROTECTION
	sld_size = carvedout_buf_query_secure(CARVEDOUT_SCALER_OD, (void*) &sld_addr);
#else
	sld_size = carvedout_buf_query(CARVEDOUT_SCALER_OD,(void*) &sld_addr);
#endif
	if (sld_addr == 0 || sld_size == 0) {
		VIPprintf("[%s %d] ERR : %x %x\n", __func__, __LINE__, sld_addr, sld_size);
                return false;
	}

#if 1
    align_value = dvr_memory_alignment((unsigned long)sld_addr, dvr_size_alignment(500000)); //96 Alignment for Bandwidth Request

    if (align_value == 0)
        BUG();
#else
        align_value = sld_addr; //origin value
#endif

        VIPprintf("aligned phy addr=%x,\n", align_value);


	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg, align_value); //must be check 96 alignment	
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg, align_value+0x02f00000); //Cap_sta_addr_0, must be check 96 alignment

	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_up_reg, align_value+0x02f00000+0x2f000000  );//Cap_up_limit
	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_low_reg, sld_addr);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg, align_value);//must be check 96 alignment	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg, align_value);//must be check 96 alignment
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg, align_value+0x02f00000); //Cap_sta_addr_0, must be check 96 alignment

	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_up_reg, align_value+0x02f00000+0x2f000000  );//Disp_up_limit
	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_low_reg, sld_addr);

	VIPprintf("[sld]drvif_set_sld_dma...end\n");

	return true;
}





// Function Description : This function is for SLD enable
//juwen, 0603, done
void SLD_k6_HAL(int Y1, int Y2, int Y3, int gain_low,unsigned char UIsel_L)
{


	int reg_seg0 = 256;  //fixed
	int reg_seg1 = 768;  //fixed
	 
	int reg_gain0 = 0 ;//fixed
	int reg_gain1 = 0 ; //fixed
	int reg_gain2 = 0 ; //fixed
	 
	int reg_offset0 = 0; //fixed
	int reg_offset1 = 0;
	int reg_offset2 = 0;

	color_sld_sld_control_RBUS color_sld_control;
	color_sld_sld_drop_RBUS color_sld_drop;
	
	DRV_SLD_CurveMap sld_curve_map;
	 
	int y_out_target[4] = {0};

	color_sld_control.regValue = IoReg_Read32(COLOR_SLD_SLD_CONTROL_reg);
	color_sld_drop.regValue = IoReg_Read32(COLOR_SLD_SLD_DROP_reg);
	
	color_sld_control.sld_en = 0;
	color_sld_control.sld_blend_en= 1;
	color_sld_control.sld_global_drop= 0;
	color_sld_control.sld_hpf_type= 0;
	color_sld_control.sld_hpf_thl= 255;
	color_sld_control.sld_scale_mode= 1;
	color_sld_drop.sld_cnt_thl = 0;
	color_sld_drop.sld_hpf_diff_thl = 16;
	color_sld_drop.sld_pixel_diff_thl = 16;
	

	IoReg_Write32(COLOR_SLD_SLD_CONTROL_reg, color_sld_control.regValue);
	IoReg_Write32(COLOR_SLD_SLD_DROP_reg, color_sld_drop.regValue);




 
	if(UIsel_L == 1)
	{
	        y_out_target[0] =  (0    *gain_low)/1024;
	        y_out_target[1] =  ( Y1 *gain_low)/1024;
	        y_out_target[2] =  ( Y2 *gain_low)/1024;
	        y_out_target[3] =  ( Y3 *gain_low)/1024;
	}
	else
	{
	        y_out_target[0] =  (0   *1024)/1024;
	        y_out_target[1] =  (Y1 *1024)/1024;
	        y_out_target[2] =  (Y2 *1024)/1024;
	        y_out_target[3] =  (Y3 *1024)/1024;
	 
	}
	 
	reg_offset0 = y_out_target[0];
	reg_gain0 =( (y_out_target[1]- reg_offset0)*64)/reg_seg0;
	reg_gain1 =( (y_out_target[2]- reg_offset0-((reg_gain0*reg_seg0)/64))*64)/(reg_seg1-reg_seg0);
	reg_gain2 =( (y_out_target[3]- reg_offset0-((reg_gain0*reg_seg0)/64)-((reg_gain1*(reg_seg1-reg_seg0))/64))*64)/(1023-reg_seg1);
	 
	reg_offset1 =  reg_offset0 + (reg_gain0*reg_seg0)/64 - (reg_gain1*reg_seg0)/64;
	reg_offset2 =  reg_offset1 + (reg_gain1*reg_seg1)/64 - (reg_gain2*reg_seg1)/64;

 	sld_curve_map.sld_curve_seg_0 = 256; 	
	sld_curve_map.sld_curve_seg_1 = 768;
	
	if(reg_gain0 < 0)
	{
	 	sld_curve_map.sld_curve_gain_0= 256 - (short)reg_gain0; 	
	}
	else
	{
	 	sld_curve_map.sld_curve_gain_0= (short)reg_gain0; 	
	}
	if(reg_gain1 < 0)
	{
	 	sld_curve_map.sld_curve_gain_1= 256 - (short)reg_gain1; 	
	}
	else
	{
	 	sld_curve_map.sld_curve_gain_1= (short)reg_gain1; 	
	}
	if(reg_gain2 < 0)
	{
	 	sld_curve_map.sld_curve_gain_2= 256 - (short)reg_gain2; 	
	}
	else
	{
	 	sld_curve_map.sld_curve_gain_2= (short)reg_gain2; 	
	}


	if(reg_offset0 < 0)
	{
		sld_curve_map.sld_curve_offset_0= 2048 - (short)reg_offset0; 		
	}
	else
	{
		sld_curve_map.sld_curve_offset_0= (short)reg_offset0; 		
	}

	if(reg_offset1 < 0)
	{
		sld_curve_map.sld_curve_offset_1= 2048 - (short)reg_offset1; 		
	}
	else
	{
		sld_curve_map.sld_curve_offset_1= (short)reg_offset1; 		
	}

	if(reg_offset2 < 0)
	{
		sld_curve_map.sld_curve_offset_2= 2048 - (short)reg_offset2; 		
	}
	else
	{
		sld_curve_map.sld_curve_offset_2= (short)reg_offset2; 		
	}


	drvif_color_set_SLD_curve_map(&sld_curve_map);


	

}
void drvif_color_set_SLD_4k_dma_setting()
{
	unsigned char sld_dma_return = false;
        color_sld_sld_size_RBUS color_sld_sld_size;
        od_dma_oddma_wr_ctrl_RBUS      od_dma_oddma_wr_ctrl;
        od_dma_oddma_rd_ctrl_RBUS       od_dma_oddma_rd_ctrl;
        od_dma_oddma_wr_num_bl_wrap_addr_0_RBUS        od_dma_oddma_wr_num_bl_wrap_addr_0;
        od_dma_oddma_wr_num_bl_wrap_addr_1_RBUS        od_dma_oddma_wr_num_bl_wrap_addr_1;
        od_dma_oddma_rd_num_bl_wrap_addr_0_RBUS od_dma_oddma_rd_num_bl_wrap_addr_0;
        od_dma_oddma_wr_num_bl_wrap_word_RBUS   od_dma_oddma_wr_num_bl_wrap_word;
        od_dma_oddma_rd_num_bl_wrap_addr_1_RBUS od_dma_oddma_rd_num_bl_wrap_addr_1;
        od_dma_oddma_rd_num_bl_wrap_word_RBUS    od_dma_oddma_rd_num_bl_wrap_word;
        od_dma_oddma_rd_num_bl_wrap_line_step_RBUS      od_dma_oddma_rd_num_bl_wrap_line_step;
        od_dma_oddma_wr_num_bl_wrap_line_step_RBUS     od_dma_oddma_wr_num_bl_wrap_line_step;
        od_dma_oddma_wr_num_bl_wrap_ctl_RBUS       od_dma_oddma_wr_num_bl_wrap_ctl;
        od_dma_oddma_rd_num_bl_wrap_ctl_RBUS        od_dma_oddma_rd_num_bl_wrap_ctl;
        od_dma_od_dma_ctrl_RBUS  od_dma_od_dma_ctrl;
        od_dma_od_dma_db_en_RBUS od_dma_od_dma_db_en;
	 color_sld_sld_control_RBUS color_sld_control;
	 od_dma_oddma_wr_rule_check_up_RBUS  od_dma_oddma_wr_rule_check_up;
	 od_dma_oddma_rd_rule_check_up_RBUS	 od_dma_oddma_rd_rule_check_up;
	 od_dma_oddma_pq_cmp_RBUS od_dma_oddma_pq_cmp;
	 od_dma_oddma_pq_decmp_RBUS od_dma_oddma_pq_decmp;
	od_od_ctrl_RBUS od_od_ctrl;

         od_dma_od_dma_db_en.regValue = IoReg_Read32(OD_DMA_OD_DMA_DB_EN_reg);
	 od_dma_od_dma_db_en.disp_db_en = 0;//

	 sld_dma_return = drvif_set_sld_dma();

        color_sld_sld_size.regValue = IoReg_Read32(COLOR_SLD_SLD_SIZE_reg);
        od_dma_oddma_wr_ctrl.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Ctrl_reg);
        od_dma_oddma_rd_ctrl.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_Ctrl_reg);
        od_dma_oddma_wr_num_bl_wrap_addr_0.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg);
        od_dma_oddma_wr_num_bl_wrap_addr_1.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg);
        od_dma_oddma_rd_num_bl_wrap_addr_0.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg);
        od_dma_oddma_rd_num_bl_wrap_addr_1.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg);
        od_dma_oddma_wr_num_bl_wrap_word.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg);
        od_dma_oddma_rd_num_bl_wrap_word.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg);
        od_dma_oddma_rd_num_bl_wrap_line_step.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg);
        od_dma_oddma_wr_num_bl_wrap_line_step.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg);
        od_dma_oddma_wr_num_bl_wrap_ctl.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg);
        od_dma_oddma_rd_num_bl_wrap_ctl.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg);
        od_dma_od_dma_ctrl.regValue = IoReg_Read32(OD_DMA_OD_DMA_CTRL_reg);
	 color_sld_control.regValue = IoReg_Read32(COLOR_SLD_SLD_CONTROL_reg);
	 od_dma_oddma_wr_rule_check_up.regValue = IoReg_Read32(OD_DMA_ODDMA_WR_Rule_check_up_reg);	 
	 od_dma_oddma_rd_rule_check_up.regValue = IoReg_Read32(OD_DMA_ODDMA_RD_Rule_check_up_reg);	
	 od_dma_oddma_pq_cmp.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_CMP_reg);
	od_dma_oddma_pq_decmp.regValue = IoReg_Read32(OD_DMA_ODDMA_PQ_DECMP_reg);	
	od_od_ctrl.regValue = IoReg_Read32(OD_OD_CTRL_reg);

	

/*
	od_dma_oddma_wr_ctrl.cap_max_outstanding = 0;//
	od_dma_oddma_wr_ctrl.cap_force_all_rst= 0;//
	od_dma_oddma_wr_ctrl.cap_en= 0;//


	od_dma_oddma_pq_cmp.cmp_en = 0;//	
	od_dma_oddma_pq_cmp.cmp_width_div32= 0x3c;//
	od_dma_oddma_pq_cmp.cmp_height= 0x438;//
        IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_reg,od_dma_oddma_pq_cmp.regValue);   // 

	od_dma_oddma_pq_decmp.decmp_en = 1;//
	od_dma_oddma_pq_decmp.decmp_width_div32= 0x3c;//
	od_dma_oddma_pq_decmp.decmp_height= 0x438;//
        IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_reg,od_dma_oddma_pq_decmp.regValue);   // 

	od_od_ctrl.oddma_clk_en = 1;//
	od_od_ctrl.oddma_clk_sel= 1;//
	od_od_ctrl.od_scaling_filter= 3;//
	od_od_ctrl.od_scaling_en= 0;//	
	od_od_ctrl.od_en= 0;//
        IoReg_Write32(OD_OD_CTRL_reg,od_od_ctrl.regValue);   // 

	IoReg_Write32(0xb802ce40,0x00000439); //cap rolling disable
	IoReg_Write32(0xb802cec0,0x00000439); //disp rolling disable


        color_sld_sld_size.sld_width = 0xf00;
        color_sld_sld_size.sld_height= 0x870;
        IoReg_Write32(COLOR_SLD_SLD_SIZE_reg,color_sld_sld_size.regValue);       

       od_dma_oddma_wr_num_bl_wrap_word.cap_line_128_num= 0x26;
       od_dma_oddma_wr_num_bl_wrap_word.cap_addr_toggle_mode=0x1;
        IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg,od_dma_oddma_wr_num_bl_wrap_word.regValue);       
	
       od_dma_oddma_wr_num_bl_wrap_line_step.cap_line_step = 0x26;
        IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg,od_dma_oddma_wr_num_bl_wrap_line_step.regValue);       


        od_dma_oddma_wr_num_bl_wrap_ctl.cap_line_toggle_offset = 0x2;
        od_dma_oddma_wr_num_bl_wrap_ctl.cap_line_num = 0x10E;
        od_dma_oddma_wr_num_bl_wrap_ctl.cap_burst_len = 0x26;
 
	IoReg_Write32(0xb802cde4,0x00000000);

        od_dma_oddma_wr_ctrl.cap_max_outstanding = 0x0;        
	od_dma_oddma_wr_ctrl.cap_force_all_rst= 0x0;
        od_dma_oddma_wr_ctrl.cap_en = 0x1;
        IoReg_Write32(OD_DMA_ODDMA_WR_Ctrl_reg,od_dma_oddma_wr_ctrl.regValue);       

        od_dma_oddma_rd_ctrl.disp_max_outstanding = 0x0; //      
	 od_dma_oddma_rd_ctrl.disp_force_all_rst= 0x0;//
        od_dma_oddma_rd_ctrl.disp_en = 0x1;//
        IoReg_Write32(OD_DMA_ODDMA_RD_Ctrl_reg,od_dma_oddma_rd_ctrl.regValue);       



        IoReg_Write32(OD_DMA_ODDMA_WR_Ctrl_reg , od_dma_oddma_wr_ctrl.regValue);
        IoReg_Write32(OD_DMA_ODDMA_RD_Ctrl_reg , od_dma_oddma_rd_ctrl.regValue);
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg      ,od_dma_oddma_wr_num_bl_wrap_addr_0.regValue);
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg      ,od_dma_oddma_wr_num_bl_wrap_addr_1.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg      ,od_dma_oddma_rd_num_bl_wrap_addr_0.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg      ,od_dma_oddma_rd_num_bl_wrap_addr_1.regValue);
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg         ,od_dma_oddma_wr_num_bl_wrap_word.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg          ,od_dma_oddma_rd_num_bl_wrap_word.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg     ,od_dma_oddma_rd_num_bl_wrap_line_step.regValue);
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg    ,od_dma_oddma_wr_num_bl_wrap_line_step.regValue);
        IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg            , od_dma_oddma_wr_num_bl_wrap_ctl.regValue);
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg            ,od_dma_oddma_rd_num_bl_wrap_ctl.regValue);
	IoReg_Write32(OD_DMA_OD_DMA_CTRL_reg                             ,od_dma_od_dma_ctrl.regValue);
 	IoReg_Write32(COLOR_SLD_SLD_CONTROL_reg, color_sld_control.regValue); 	
	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_up_reg, od_dma_oddma_wr_rule_check_up.regValue);	
	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_up_reg, od_dma_oddma_rd_rule_check_up.regValue);
*/
//
	IoReg_Write32(OD_DMA_OD_DMA_DB_EN_reg,0x00000000); //db disable
	IoReg_Write32(OD_DMA_ODDMA_PQ_CMP_reg,0x003c0438); //pq_cmp return default disable
	IoReg_Write32(OD_DMA_ODDMA_PQ_DECMP_reg,0x003c0438); //pq_dcmp return default disable
	IoReg_Write32(OD_OD_CTRL_reg,0x00000330); //od_clk en
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_rolling_reg,0x00000439); //cap rolling disable
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_rolling_reg,0x00000439); //disp rolling disable

	IoReg_Write32(COLOR_SLD_SLD_SIZE_reg,0x0F000870); //scale down width ,0x 0x1e0, height ,0x 0x10e  
/*
	IoReg_Write32(OD_DMA_ODDMA_WR_Rule_check_up_reg,0xffffffff);
	IoReg_Write32(OD_DMA_ODDMA_RD_Rule_check_up_reg,0xffffffff);
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_0_reg,0x4dfcf090); //addr1  
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_addr_1_reg,0x4f2c0000); //addr2
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_0_reg,0x4dfcf090); //addr1 
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_addr_1_reg,0x4f2c0000); //addr2
*/
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_line_step_reg,0x00000260); //cap line step
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_line_step_reg,0x00000260); //disp line step
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_word_reg,0x10000260); //[28]: addr_toggle_mode_en, [26:4]line_burst_num
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_word_reg,0x10000260); //[28]: addr_toggle_mode_en, [26:4]line_burst_num
	IoReg_Write32(OD_DMA_ODDMA_WR_num_bl_wrap_ctl_reg,0x210e0260); //[31:29]: addr_toggle_offset, line_num, burst_length
	IoReg_Write32(OD_DMA_ODDMA_RD_num_bl_wrap_ctl_reg,0x410e0260); //[31:29]: addr_toggle_offset, line_num, burst_length
	IoReg_Write32(OD_DMA_OD_DMA_CTRL_reg,0x00000000);

	IoReg_Write32(OD_DMA_ODDMA_WR_Ctrl_reg,0x00000002); //force_all rst
	IoReg_Write32(OD_DMA_ODDMA_RD_Ctrl_reg,0x00000002); //force_all rst 
	IoReg_Write32(OD_DMA_ODDMA_WR_Ctrl_reg,0x00000001); //cap_en  
	IoReg_Write32(OD_DMA_ODDMA_RD_Ctrl_reg,0x00000001); //disp_en 
//


        //ODDMA double buffer apply 
        od_dma_od_dma_db_en.regValue = IoReg_Read32(OD_DMA_OD_DMA_DB_EN_reg);
        od_dma_od_dma_db_en.disp_db_apply = 1;
        od_dma_od_dma_db_en.cap_db_apply= 1;
        IoReg_Write32(OD_DMA_OD_DMA_DB_EN_reg,od_dma_od_dma_ctrl.regValue);
 


        #ifdef SLD_Debug
        VIPprintf("drvif_color_set_SLD_4k_dma_setting\n");
        #endif
 
 
       
}
 


void drvif_color_set_SLD_Enable(unsigned char enable)
{
	color_sld_sld_control_RBUS color_sld_control;
	color_sld_control.regValue = IoReg_Read32(COLOR_SLD_SLD_CONTROL_reg);

	color_sld_control.sld_en= enable;

	#ifdef SLD_Debug
	VIPprintf("sld_valid = %d\n",color_sld_control.sld_en);
	#endif

	IoReg_Write32(COLOR_SLD_SLD_CONTROL_reg, color_sld_control.regValue);
}
//juwen, 0603, done
void drvif_color_set_SLD_control(DRV_SLD_Ctrl *ptr)
{

	color_sld_sld_control_RBUS color_sld_control;
	color_sld_control.regValue = IoReg_Read32(COLOR_SLD_SLD_CONTROL_reg);

	color_sld_control.sld_en = ptr->sld_en;
	color_sld_control.sld_blend_en= ptr->sld_blend_en;
	color_sld_control.sld_global_drop= ptr->sld_global_drop;
	color_sld_control.sld_hpf_type= ptr->sld_hpf_type;
	color_sld_control.sld_hpf_thl= ptr->sld_hpf_thl;
	color_sld_control.sld_scale_mode= ptr->sld_scale_mode;

	IoReg_Write32(COLOR_SLD_SLD_CONTROL_reg, color_sld_control.regValue);
}

//juwen, 0603
void drvif_color_set_SLD_input_size(DRV_SLD_Size *ptr)
{

	color_sld_sld_size_RBUS color_sld_size;

	color_sld_size.regValue = IoReg_Read32(COLOR_SLD_SLD_SIZE_reg);

	color_sld_size.sld_height = ptr->sld_height;
	color_sld_size.sld_width = ptr->sld_width;

	IoReg_Write32(COLOR_SLD_SLD_SIZE_reg,color_sld_size.regValue);
}

//juwen, 0603
void drvif_color_set_SLD_curve_map(DRV_SLD_CurveMap *ptr)
{

	color_sld_sld_curve_map_seg_RBUS color_sld_curve_map_seg;
	color_sld_sld_curve_map_gain_RBUS color_sld_curve_map_gain;
	color_sld_sld_curve_map_offset_0_RBUS color_sld_curve_map_offset_0;
	color_sld_sld_curve_map_offset_1_RBUS color_sld_curve_map_offset_1;

	color_sld_curve_map_seg.regValue = IoReg_Read32(COLOR_SLD_SLD_CURVE_MAP_SEG_reg);
	color_sld_curve_map_gain.regValue =IoReg_Read32(COLOR_SLD_SLD_CURVE_MAP_GAIN_reg);
	color_sld_curve_map_offset_0.regValue =IoReg_Read32(COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg);
	color_sld_curve_map_offset_1.regValue =IoReg_Read32(COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg);

	color_sld_curve_map_seg.sld_curve_seg_0 = ptr->sld_curve_seg_0;
	color_sld_curve_map_seg.sld_curve_seg_1 =  ptr->sld_curve_seg_1;

	color_sld_curve_map_gain.sld_curve_gain_0 = 	ptr->sld_curve_gain_0;
	color_sld_curve_map_gain.sld_curve_gain_1 = 	ptr->sld_curve_gain_1;
	color_sld_curve_map_gain.sld_curve_gain_2 = 	ptr->sld_curve_gain_2;

	color_sld_curve_map_offset_0.sld_curve_offset_0 = ptr->sld_curve_offset_0;
	color_sld_curve_map_offset_0.sld_curve_offset_1 = ptr->sld_curve_offset_1;

	color_sld_curve_map_offset_1.sld_curve_offset_2 = ptr->sld_curve_offset_2;

	IoReg_Write32(COLOR_SLD_SLD_CURVE_MAP_SEG_reg, color_sld_curve_map_seg.regValue);
	IoReg_Write32(COLOR_SLD_SLD_CURVE_MAP_GAIN_reg, color_sld_curve_map_gain.regValue);
	IoReg_Write32(COLOR_SLD_SLD_CURVE_MAP_OFFSET_0_reg, color_sld_curve_map_offset_0.regValue);
	IoReg_Write32(COLOR_SLD_SLD_CURVE_MAP_OFFSET_1_reg, color_sld_curve_map_offset_1.regValue);
}

//juwen, 0603
void drvif_color_set_SLD_drop(DRV_SLD_DROP *ptr)
{

	color_sld_sld_drop_RBUS color_sld_drop;

	color_sld_drop.regValue = IoReg_Read32(COLOR_SLD_SLD_DROP_reg);

	color_sld_drop.sld_cnt_thl = ptr->sld_cnt_thl;
	color_sld_drop.sld_hpf_diff_thl = ptr->sld_hpf_diff_thl;
	color_sld_drop.sld_pixel_diff_thl = ptr->sld_pixel_diff_thl;

	IoReg_Write32(COLOR_SLD_SLD_DROP_reg, color_sld_drop.regValue);
}


void drvif_color_count_read_only(unsigned short sld_logo_cnt, unsigned short sld_drop_cnt)
{

	color_sld_sld_cnt_0_RBUS color_sld_read_only_logo_cnt;
	color_sld_sld_cnt_1_RBUS color_sld_read_only_drop_cnt;

	color_sld_read_only_logo_cnt.regValue = IoReg_Read32(COLOR_SLD_SLD_CNT_0_reg);
	color_sld_read_only_drop_cnt.regValue = IoReg_Read32(COLOR_SLD_SLD_CNT_1_reg);
	
}

void drvif_color_set_SLD_cnt_thl(unsigned int cnt_th)
{
	color_sld_sld_drop_RBUS color_sld_drop;

	color_sld_drop.regValue = IoReg_Read32(COLOR_SLD_SLD_DROP_reg);

	color_sld_drop.sld_cnt_thl = cnt_th;
	
	IoReg_Write32(COLOR_SLD_SLD_DROP_reg, color_sld_drop.regValue);

}


void fwif_k6_sld(int Y1, int Y2, int Y3, int gain_low,unsigned char UIsel_L, unsigned int cnt_th)
{

	drvif_color_set_SLD_cnt_thl(cnt_th);
	drvif_color_set_SLD_4k_dma_setting();
 	SLD_k6_HAL(Y1,  Y2,  Y3,  gain_low, UIsel_L);


}
#endif


