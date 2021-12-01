/*Kernel Header file*/
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/module.h>
#include <linux/fs.h>		/* everything... */
#include <linux/cdev.h>
#include <linux/platform_device.h>

#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/uaccess.h>
#include <linux/pageremap.h>
#include <linux/kthread.h>
#include <linux/freezer.h>
#include <linux/hrtimer.h>
#include <linux/vmalloc.h>

/*RBUS Header file*/

#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerCommon.h>
#else
#include <scalercommon/scalerCommon.h>
#endif


/*TVScaler Header file*/
#include "tvscalercontrol/io/ioregdrv.h"
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/scaler/scalercolorlib_tv001.h>
#include <tvscalercontrol/scaler/scalercolorlib_tv002.h>
#include <tvscalercontrol/vip/scalerColor_tv006.h>
#include <tvscalercontrol/scaler/scalercolorlib_IPQ.h>
#include <tvscalercontrol/vip/scalerColor.h>
#include <tvscalercontrol/vip/scalerColor_tv006.h>
#include <tvscalercontrol/vip/ST2094.h>
//#include <tvscalercontrol/vip/scalerColor_tv010.h>
#include <tvscalercontrol/vip/viptable.h>
#include <tvscalercontrol/scaler_vpqmemcdev.h>
#include "scaler_vpqdev_extern.h"
#include "scaler_vscdev.h"
#include "ioctrl/vpq/vpq_extern_cmd_id.h"
#include <tvscalercontrol/vip/pq_rpc.h>
//#include <mach/RPCDriver.h>
#include <rbus/sys_reg_reg.h>
#include <rbus/pll27x_reg_reg.h>
#include <tvscalercontrol/vip/vip_reg_def.h>
#include <tvscalercontrol/vip/gibi_od.h>
#include <tvscalercontrol/vip/ultrazoom.h>
#include <tvscalercontrol/vip/localcontrast.h>
#include <tvscalercontrol/i3ddma/i3ddma_drv.h>

#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scalerdrv/scalerip.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <tvscalercontrol/scalerdrv/zoom_smoothtoggle.h>

//#include <rbus/rbus_DesignSpec_MISC_GPIOReg.h>
#include <mach/rtk_log.h>

#define TAG_NAME "VPQEX"

#if defined(CONFIG_RTK_AI_DRV)
#include <tvscalercontrol/vip/ai_pq.h>
extern DRV_AI_SCENE_Ctrl_table ai_scene_ctrl;
extern UINT8 vpq_stereo_face;
extern int scalerAI_pq_mode_ctrl(unsigned char stereo_face, unsigned char dcValue);
#endif

extern struct semaphore ColorSpace_Semaphore;

static dev_t vpqex_devno;/*vpq device number*/
static struct cdev vpqex_cdev;
unsigned int vpqex_project_id = 0x00060000;
static unsigned char PQ_Dev_Extern_Status = PQ_DEV_EXTERN_NOTHING;
extern struct semaphore ICM_Semaphore;
//extern struct semaphore I_RGB2YUV_Semaphore;
extern DRV_film_mode film_mode;
unsigned char g_tv002_demo_fun_flag = 0;
unsigned char g_pq_bypass_lv = 255;
extern unsigned char g_picmode_Cinema;
unsigned char ioctl_extern_cmd_stop[256] = {0};

//---------------TV030----------------------------
unsigned char cur_src = 0;
unsigned int tICM_bin[VIP_ICM_TBL_X*VIP_ICM_TBL_Y*VIP_ICM_TBL_Z];
unsigned char ColorSpaceMode=0;
unsigned short IPQ_OETF[256];
#define Bin_Num_Gamma 1024
unsigned char tconoutputgamma_en=0;
unsigned char aipq_DynamicContrastLevel=0;
extern UI_color AI_PQ_UI_color;
unsigned int aipq_confing=0;
//----------------------------------------------------

#if 1
//for Merlin5 demura 
#define demura_mac6_pos_clip			31
#define demura_mac6_neg_clip			(-32)
#define CSOT_LMMH_W_Size_481 481
#define CSOT_DEMURA_TABLE_ADDR_START  0x000042
#define CSOT_Demura_Convert_SignedData(demura12bit) ((demura12bit>=2048)?(demura12bit-4096):demura12bit)
unsigned char *CSOT_Demura_TBL = NULL;

unsigned char *Himax_Demura_TBL = NULL;

 short *tbl_ori_lo_L = NULL;
 short *tbl_ori_md_M = NULL;
 short *tbl_ori_hi_H = NULL;

#define Himax_DEMURA_TABLE_ADDR_START  0x000200
#define Himax_DEMURA_TABLE_ADDLine  726

#define CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START 0x00200
#define CSOT_Himax_DEMURA_TABLE_PLANE1_ADDR_START 0x3028A
#define CSOT_Himax_DEMURA_TABLE_PLANE2_ADDR_START 0x60314
#define Himax_Demura_LMMH_W_Size (484)
#if 1
/* for demura hal function */
#define DeMura_tv006FMT_to_tv001FMT(arg) ((arg>127)?((128-arg)):(arg))
#define Demura_LMMH_R_SD_check_BIT  0x1
#define Demura_LMMH_G_SD_check_BIT  0x2
#define Demura_LMMH_B_SD_check_BIT  0x4
#define Demura_LMMH_W_SD_check_BIT  0x8
#define Demura_LMMH_W_Size (481)
#define Demura_LMMH_H_Size (271)
#define Demura_LMMH_1Lv_Size (Demura_LMMH_W_Size * Demura_LMMH_H_Size)
#define Demura_LMMH_1ch_Size (Demura_LMMH_1Lv_Size * 4)
#define Demura_LMMH_4ch_Size (Demura_LMMH_1ch_Size *4)
#define Demura_LMMH_TBL_Size (Demura_LMMH_4ch_Size + 8)
#define Demura_LMMH_4ch_R_sta  (4+0*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_G_sta  (4+1*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_B_sta  (4+2*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_W_sta  (4+3*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_CRC_sta  (4+4*Demura_LMMH_1ch_Size)
#define Demura_LMMH_4ch_WL_sta  Demura_LMMH_4ch_W_sta
#define Demura_LMMH_4ch_WM1_sta  (Demura_LMMH_4ch_W_sta + Demura_LMMH_1Lv_Size)
#define Demura_LMMH_4ch_WM2_sta  (Demura_LMMH_4ch_W_sta + Demura_LMMH_1Lv_Size*2)
#define Demura_LMMH_4ch_WH_sta  (Demura_LMMH_4ch_W_sta + Demura_LMMH_1Lv_Size*3)

#define deMura_7blk_Block 63

#define CSOT_Demura_Convert_SignedData(demura12bit) ((demura12bit>=2048)?(demura12bit-4096):demura12bit)

unsigned char deMura_extern_7Blk_Decode_TBL[deMura_7blk_Block] = {
   /*R_L,  R_M,  R_H,  G_L,  G_M,  G_H,  B_L,  B_M,  B_H,  */
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 0*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 1*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 2*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 3*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 4*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 5*/
     0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,    /* block 6*/
};
#if 0	/* "Demura_LMMH_4ch_TBL" is too large, use dynamic allocate */
unsigned char Demura_LMMH_4ch_TBL[Demura_LMMH_TBL_Size];
#else
#endif
extern VIP_DeMura_TBL DeMura_TBL;
#endif

#endif
	
extern unsigned char scalerVIP_access_tv002_style_demo_flag(unsigned char access_mode, unsigned char *pFlag);
void Check_smooth_toggle_update_flag(unsigned char display);
void zoom_update_scaler_info_from_vo_smooth_toggle(unsigned char display);

#if defined(CONFIG_RTK_AI_DRV)
TV001_COLOR_TEMP_DATA_S vpqex_color_temp = {0};
#endif

int vpqex_open(struct inode *inode, struct file *filp)
{
	printk("vpqex_open %d\n", __LINE__);
	return 0;
}

ssize_t  vpqex_read(struct file *filep, char *buffer, size_t count, loff_t *offp)
{
	return 0;
}

ssize_t vpqex_write(struct file *filep, const char *buffer, size_t count, loff_t *offp)
{
	return 0;
}

int vpqex_release(struct inode *inode, struct file *filep)
{
	printk("vpqex_release %d\n", __LINE__);
	return 0;
}

#ifdef CONFIG_PM
static int vpqex_suspend(struct device *p_dev)
{
	return 0;
}

static int vpqex_resume(struct device *p_dev)
{
	return 0;
}
#endif

#if 1 //zyy add for merlin5 demura
unsigned char enc_data_6b[(481+1)*3*3];
void fwif_color_DeMura_encode( short* tbl_ori_lo, short* tbl_ori_md, short* tbl_ori_hi, unsigned char table_mode, unsigned char table_separate, unsigned char* demura_tbl )
{
	// DeMura_TBL.table_mode
	// DeMura_TBL.DeMura_CTRL_TBL.demura_rgb_table_seperate
	int i,j,k;
	unsigned short tbl_height, tbl_width, tbl_ch;
	short delta_lo, delta_md, delta_hi;
	unsigned short line_pack_bit;
	unsigned char pack_tmp;
	unsigned short line_size;
	unsigned char* pack_ptr;
	unsigned short byte_cnt;
	printk("==========>>> Enter fwif_color_DeMura_encode procession Start!!! ");
	
	if( table_mode == DeMura_TBL_481x271 )
	{
		tbl_height = 271;
		tbl_width = 481;
		line_size = table_separate ? VIP_DemuraTBL_LineSize_RGB_481x271 : VIP_DemuraTBL_LineSize_Y_481x271;
	}
	else // DeMura_TBL_241x136
	{
		tbl_height = 136;
		tbl_width = 241;
		line_size = table_separate ? VIP_DemuraTBL_LineSize_RGB_241x136 : VIP_DemuraTBL_LineSize_Y_241x136;
	}
	tbl_ch = table_separate ? 3 : 1;

	for( i=0; i<tbl_height; i++ ) // line
	{
		for( j=0; j<tbl_width; j++ )
		{
			for( k=0; k<tbl_ch; k++ )
			{
				// raw data to delta
				if( j==0 )
				{
					delta_lo = tbl_ori_lo[i*tbl_width*tbl_ch + k];
					delta_md = tbl_ori_md[i*tbl_width*tbl_ch + k];
					delta_hi = tbl_ori_hi[i*tbl_width*tbl_ch + k];
				}
				else
				{
					delta_lo = tbl_ori_lo[ (i*tbl_width + j)*tbl_ch + k] - tbl_ori_lo[ (i*tbl_width + (j-1))*tbl_ch + k];
					delta_md = tbl_ori_md[ (i*tbl_width + j)*tbl_ch + k] - tbl_ori_md[ (i*tbl_width + (j-1))*tbl_ch + k];
					delta_hi = tbl_ori_hi[ (i*tbl_width + j)*tbl_ch + k] - tbl_ori_hi[ (i*tbl_width + (j-1))*tbl_ch + k];
				}

				// to signed 6-bit
				if( delta_lo < 0 )
					delta_lo += (j==0) ? 256 : 64;
				if( delta_md < 0 )
					delta_md += (j==0) ? 256 : 64;
				if( delta_hi < 0 )
					delta_hi += (j==0) ? 256 : 64;
				// delta to 6bit array
				// RGB: R0_lo R0_md R0_hi G0_lo G0_md G0_hi B0_lo B0_md B0_hi
				// Y: R0_lo R0_md R0_hi
				// first element: separate to 2 elements (2+6), all others move right 1 block
				if( j==0 ) // 8bit -> 2 + 6
				{
					enc_data_6b[ (0*tbl_ch+k)*3 + 0 ] = delta_lo >> 6;
					enc_data_6b[ (0*tbl_ch+k)*3 + 1 ] = delta_md >> 6;
					enc_data_6b[ (0*tbl_ch+k)*3 + 2 ] = delta_hi >> 6;

					enc_data_6b[ (1*tbl_ch+k)*3 + 0 ] = delta_lo & 0x3f;
					enc_data_6b[ (1*tbl_ch+k)*3 + 1 ] = delta_md & 0x3f;
					enc_data_6b[ (1*tbl_ch+k)*3 + 2 ] = delta_hi & 0x3f;
				}
				else
				{
					enc_data_6b[ ((j+1)*tbl_ch+k)*3 + 0 ] = delta_lo & 0x3f;
					enc_data_6b[ ((j+1)*tbl_ch+k)*3 + 1 ] = delta_md & 0x3f;
					enc_data_6b[ ((j+1)*tbl_ch+k)*3 + 2 ] = delta_hi & 0x3f;
				}
			}
			
		}
		pack_ptr = demura_tbl + i * line_size;
		byte_cnt = 0;
		pack_tmp = 0;
		line_pack_bit = 0;
		// 6bit array to 8bit pack per line
		for( k=0; k< (tbl_width+1)*tbl_ch*3; k++ )
		{
			// 21 elements -> 126bit, dummy 2bit
			//    0     1     2     3             16    17    18    19    20
			// |  6b |  6b |  6b |  6b |  ...  |  6b |  6b |  6b |  6b |  6b |2|
			// |   8   |   8   |   8   |  ...  |   8   |   8   |   8   |   8   |
			if( k % 21 == 20 )
			{
				// dummy 2 bits
				pack_tmp = enc_data_6b[k] << 2;
				(*pack_ptr) = pack_tmp;
				pack_ptr++;
				byte_cnt++;
			}
			else
			{
				switch( line_pack_bit )
				{
					case 0:
						// |  6  | |
						pack_tmp = enc_data_6b[k] << 2;
						line_pack_bit = 6;
						break;
					case 6:
						// |     |2| 4 |   |
						pack_tmp |= ( enc_data_6b[k] & 0x30 ) >> 4;
						(*pack_ptr) = pack_tmp;
						pack_ptr++;
						byte_cnt++;

						pack_tmp = ( enc_data_6b[k] & 0x0F ) << 4;
						line_pack_bit = 4;
						break;
					case 4:
						// |   | 4 |2|     |
						pack_tmp |= ( enc_data_6b[k] & 0x3C ) >> 2;
						(*pack_ptr) = pack_tmp;
						pack_ptr++;
						byte_cnt++;

						pack_tmp = ( enc_data_6b[k] & 0x03 ) << 6;
						line_pack_bit = 2;
						break;
					case 2:
						// | |  6  |
						pack_tmp |= ( enc_data_6b[k] & 0x3F );
						(*pack_ptr) = pack_tmp;
						pack_ptr++;
						byte_cnt++;

						pack_tmp = 0;
						line_pack_bit = 0;
						break;
					default:
						break;
				}
			}
		}
		
		// line end, add dummy until 128bits
		if( line_pack_bit != 0 )
		{
			(*pack_ptr) = pack_tmp;
			pack_ptr++;
			byte_cnt++;
		}
		while( byte_cnt % 16 != 0 )
		{
			(*pack_ptr) = 0;
			pack_ptr++;
			byte_cnt++;
		}
		
		//printk("==========>>> [Demura]ZYY Debug 444 ");
	}
	printk("==========>>> Enter fwif_color_DeMura_encode procession END!!! ");

}

char vpq_extern_DeMura_Encode_128x3bit(unsigned char* in_array, unsigned char* encode_array)
{
	unsigned short i,j;
	/* 1 bloock = (R_low + R_mid + R_high) + (G_low + G_mid + G_high) + (B_low + B_mid + B_high)*/
	/* this function will finish "7 block encode", R0,G0,B0 ~ R6,G6,B6. */
	for (j=0;j<3;j++){     /* 3 channel*/
		for(i=0;i<5;i++) { /* 1 channel, 128 bit*/
			// "deMura_TBL" is 6 bit (0x3F)
			encode_array[j*16+i*3+0] = (((in_array[j*21+i*4+0]*4)&0x3F)<<2) + (((in_array[j*21+i*4+1]*4)&0x3F)>>4);
			encode_array[j*16+i*3+1] = (((in_array[j*21+i*4+1]*4)&0x3F)<<4) + (((in_array[j*21+i*4+2]*4)&0x3F)>>2);
			encode_array[j*16+i*3+2] = (((in_array[j*21+i*4+2]*4)&0x3F)<<6) + (((in_array[j*21+i*4+3])*4)&0x3F>>0);
		}
		encode_array[j*16+i*3] = (((in_array[j*21+i*4+0])*4)&0x3F)<<2; // bit dummy
	}
	return 0;
}

unsigned char Check_signed_Bit(unsigned short Demura_12bit)
{
	return (unsigned char)((Demura_12bit>>11) & 0x01);
}

short Demura_12bit_to_6bit(unsigned short Demura_12bit,unsigned char scale_level)
{
	short tmp6bit;
	unsigned char shift_bit;
	
	shift_bit = 2 + scale_level ;	
	tmp6bit = (short)CSOT_Demura_Convert_SignedData(Demura_12bit);
	tmp6bit =  tmp6bit>>shift_bit;
	/*if(tmp6bit >= 0)
		tmp6bit = (tmp6bit>demura_mac6_pos_clip)?demura_mac6_pos_clip:tmp6bit;
	else
		tmp6bit = (tmp6bit<demura_mac6_neg_clip)?demura_mac6_neg_clip:tmp6bit;
	*/

	
	if(Check_signed_Bit(Demura_12bit))
	{
		tmp6bit = (short)CSOT_Demura_Convert_SignedData(Demura_12bit);
		tmp6bit = tmp6bit>>shift_bit;
		tmp6bit = (tmp6bit<demura_mac6_neg_clip)?demura_mac6_neg_clip:tmp6bit;
	}
	
	else
	{
		tmp6bit = Demura_12bit>>shift_bit;
		tmp6bit = (tmp6bit>demura_mac6_pos_clip)?demura_mac6_pos_clip:tmp6bit;
	}
	
	return tmp6bit;
}



void Crtl_table_get_from_demura(DRV_DeMura_CTRL_TBL *ptrCrtl,unsigned char *ptrDemura)
{
	unsigned char blk_h,blk_v;
	unsigned short div_tmp;
	
	//nova
	blk_h = ptrDemura[0x0c];
	blk_v = ptrDemura[0x0d];
	if(blk_h == 0 && blk_v == 0)
		ptrCrtl->demura_block_size = 2;//4x4
	else if(blk_h == 1 && blk_v == 1)
		ptrCrtl->demura_block_size = 0; //8x8
	else if(blk_h == 2 && blk_v == 2)
		ptrCrtl->demura_block_size = 1;// 16x16
	else
		ptrCrtl->demura_block_size = 0;
	
	ptrCrtl->demura_rgb_table_seperate = 0;
	ptrCrtl->demura_r_lower_cutoff = (((unsigned short)ptrDemura[0x18])<<8) + ptrDemura[0x19];
	ptrCrtl->demura_r_upper_cutoff = (((unsigned short)ptrDemura[0x1a])<<8) + ptrDemura[0x1b];
	ptrCrtl->demura_g_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_g_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;
	ptrCrtl->demura_b_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_b_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;

	ptrCrtl->demura_r_l_level = (((unsigned short)ptrDemura[0x28])<<8) + ptrDemura[0x29];
	ptrCrtl->demura_r_m_level = (((unsigned short)ptrDemura[0x2a])<<8) + ptrDemura[0x2b];
	ptrCrtl->demura_r_h_level = (((unsigned short)ptrDemura[0x2c])<<8) + ptrDemura[0x2d];
	ptrCrtl->demura_g_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_g_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_g_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_b_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_b_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_b_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_r_h_keep_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_g_h_keep_level = ptrCrtl->demura_g_h_level;
	ptrCrtl->demura_b_h_keep_level = ptrCrtl->demura_b_h_level;

	printk("\n\n blk_size=%d,cutoff_l=%d,cutoff_h=%d,level_l=%d,level_m=%d,level_h=%d \n\n",
		ptrCrtl->demura_block_size,ptrCrtl->demura_r_lower_cutoff,ptrCrtl->demura_r_upper_cutoff,
		ptrCrtl->demura_r_l_level,ptrCrtl->demura_r_m_level,ptrCrtl->demura_r_h_level);
	
	
	// r, g, b dvi_fac_L  threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_l_level -ptrCrtl->demura_r_lower_cutoff))>>2;
	ptrCrtl->r_div_factor_l = div_tmp;
	ptrCrtl->g_div_factor_l = div_tmp;
	ptrCrtl->b_div_factor_l = div_tmp;
	// r, g, b dvi_fac_L_M	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_m_level -ptrCrtl->demura_r_l_level))>>2;
	ptrCrtl->r_div_factor_l_m = div_tmp;
	ptrCrtl->g_div_factor_l_m = div_tmp;
	ptrCrtl->b_div_factor_l_m = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_h_level -ptrCrtl->demura_r_m_level))>>2;
	ptrCrtl->r_div_factor_m_h = div_tmp;
	ptrCrtl->g_div_factor_m_h = div_tmp;
	ptrCrtl->b_div_factor_m_h = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_upper_cutoff -ptrCrtl->demura_r_h_level))>>2;
	ptrCrtl->r_div_factor_h = div_tmp;
	ptrCrtl->g_div_factor_h = div_tmp;
	ptrCrtl->b_div_factor_h = div_tmp;
	
}

void Get_max_min_demura_value(unsigned short *Maxvalue,unsigned short *Minvalue,unsigned short Inputvalue)
{
	if(Inputvalue >= 0x800)
	{
		*Minvalue = (*Minvalue<Inputvalue)?*Minvalue:Inputvalue;
	}
	else
	{
		*Maxvalue = (*Maxvalue>Inputvalue)?*Maxvalue:Inputvalue;
	}
}

unsigned char Decide_shift_bit(unsigned short Maxvalue,unsigned short Minvalue)
{
	unsigned char scale_bit;
	short _minvalue;

	_minvalue = (short)CSOT_Demura_Convert_SignedData(Minvalue);
	
	//printk("\n\n PERminvalue=%d,\n",_minvalue);
	//printk("\n\n PERMaxvalue=%d,\n",Maxvalue);
	Maxvalue = Maxvalue/4;
	_minvalue = _minvalue/4;
	
	if(Maxvalue<=demura_mac6_pos_clip)
		scale_bit = 0;
	else if(Maxvalue <= demura_mac6_pos_clip*2)
		scale_bit = 1;
	else if(Maxvalue <= demura_mac6_pos_clip*4)
		scale_bit = 2;
	else //if(Maxvalue <= demura_mac6_pos_clip*3)
		scale_bit = 3;

	//printk("\n\n minvalue=%d,\n",_minvalue);
	//printk("\n\n Maxvalue=%d,\n",Maxvalue);
	if(_minvalue >= demura_mac6_neg_clip)
		scale_bit = (scale_bit>0)?scale_bit:0;
	else if(_minvalue >= demura_mac6_neg_clip*2)
		scale_bit = (scale_bit>1)?scale_bit:1;
	else if(_minvalue >= demura_mac6_neg_clip*4)
		scale_bit = (scale_bit>2)?scale_bit:2;
	else
		scale_bit = 3;

	return scale_bit;
}

void Scale_Shift_bit(unsigned char *LMMH,unsigned char *scale_low,unsigned char *scale_mid,unsigned char *scale_high,unsigned char mode)
{
	unsigned int i,j,k, index;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
	unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
	unsigned int Lmmh_Demura_table_index_offset;
	static unsigned short Demura12bitP0_max,Demura12bitP0_min, Demura12bitP1_max, Demura12bitP1_min,Demura12bitP2_max,Demura12bitP2_min;
	//unsigned char scale_low_bit=0,scale_mid_bit=0,scale_high_bit=0;

	if(LMMH == NULL) {
		return;
	}
	
	if (mode == 1) {
		hor_384Bit_blk_num = 69;	 /* 481/7+1*/
		ver_blk_num = 271;
	} else {//mac6 skyworth use 241x136
		hor_384Bit_blk_num = 35;	 /*241/7+1*/
		ver_blk_num = 136;
	}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	Demura12bitP0_max = 0x0000;
	Demura12bitP1_max = 0x0000;
	Demura12bitP2_max = 0x0000;
	Demura12bitP0_min = 0xfff;
	Demura12bitP1_min = 0xfff;
	Demura12bitP2_min = 0xfff;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Demura_LMMH_W_Size)
				{
					if(i == 0 && index == 0)
					{
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
						DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+2];
						DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+3];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+4];
						DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
					}
					else
					{
						Lmmh_Demura_table_index_offset = (i*Demura_LMMH_W_Size+index+1)/2*4+(i*Demura_LMMH_W_Size+index)/2*5;
						if(Lmmh_Demura_table_index_offset % 9 == 0)
						{
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
							DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;

							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
							DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
						}
						else if(Lmmh_Demura_table_index_offset % 9 == 4)
						{
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
							DemuraData12bitP0 = ((tmp1&0x000F)<<8) + tmp2;
							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							DemuraData12bitP1 = (tmp1<<4) + (tmp2>>4);

							
							tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
							tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
							DemuraData12bitP2 = ((tmp1&0x000F)<<8) + tmp2;
						}
					}	 
					Get_max_min_demura_value(&Demura12bitP0_max,&Demura12bitP0_min,DemuraData12bitP0);
					Get_max_min_demura_value(&Demura12bitP1_max,&Demura12bitP1_min,DemuraData12bitP1);
					Get_max_min_demura_value(&Demura12bitP2_max,&Demura12bitP2_min,DemuraData12bitP2);
					
				}

				index = (index+1 >= Demura_LMMH_W_Size)?(Demura_LMMH_W_Size-1):(index+1);
			}
		}
	}
	
	*scale_low = Decide_shift_bit(Demura12bitP0_max,Demura12bitP0_min);
	printk("[scale level]P0_MAX=0x%x,P0_MIN=0x%x,scale_l=%d,\n",Demura12bitP0_max,Demura12bitP0_min,*scale_low);
	*scale_mid = Decide_shift_bit(Demura12bitP1_max,Demura12bitP1_min);
	printk("[scale level]P1_MAX=0x%x,P1_MIN=0x%x,scale_m=%d,\n",Demura12bitP1_max,Demura12bitP1_min,*scale_mid);
	*scale_high = Decide_shift_bit(Demura12bitP2_max,Demura12bitP2_min);
	printk("[scale level]P2_MAX=0x%x,P2_MIN=0x%x,scale_h=%d,\n",Demura12bitP2_max,Demura12bitP2_min,*scale_high);
}
void Demura_find_scale(short *dec_table,unsigned char *scale_level)
{
	int i,j;
	int lut_head_max=0,lut_diff_max=0;
	
	for( i=0; i<271; i++ )
	{
		for( j=0; j<481; j++ )
		{
			if( j==0 )
			{
				if( lut_head_max < dec_table[ (481*i + j)] )
					lut_head_max = dec_table[ (481*i + j)];
			}
			else
			{
				if( lut_diff_max < dec_table[ (481*i + j)] - dec_table[ (481*i + j-1)] )
					lut_diff_max = dec_table[ (481*i + j)] - dec_table[ (481*i + j-1)];
			}
		}
	}
	if( lut_head_max >= 256 || lut_diff_max >= 64 )
		*scale_level = 2;
	else if( lut_head_max >= 128 || lut_diff_max >= 32 )
		*scale_level = 1;
	else
		*scale_level = 0;
		
	printk("lut_head_max = %d,lut_diff_max = %d ,scale_level = %d",lut_head_max,lut_diff_max,*scale_level);
	///*
	if( *scale_level > 0 ) // shift whole table
	{
		for( i=0; i<271; i++ )
		{
			for( j=0; j<481; j++ )
			{
				dec_table[ (481*i + j)] >>= *scale_level;
			}
		}
		
	}
	//*/
}



void CSOT_LMMH_demura_data_to_dma(unsigned char *LMMH,VIP_DeMura_TBL * Demura_TBL, unsigned char mode, short* tbl_lo,  short* tbl_md,  short* tbl_hi)//fill : Demura_TBL
{
		unsigned int i, index;
		//unsigned int column_pos, index_arr;
		unsigned short ver_blk_num, hor_384Bit_blk_num;
		unsigned short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
		unsigned int Lmmh_Demura_table_index_offset;
		short tmpL, tmpM1, tmpH;
		//int fcic_tmp;//juwen, 180528
		//unsigned char scalingDown_bit_fcic[3] = {0};
		DRV_DeMura_CTRL_TBL *ptrCrtl=NULL;
		
		if (Demura_TBL == NULL || LMMH == NULL) {
			   // printf( "vpq_demura_data_to_dma table NULL ~~\n");
		//rtd_printk(KERN_ERR, TAG_NAME, "vpq_demura_data_to_dma table NULL ~~\n");
				return;
		}

		ptrCrtl = &Demura_TBL->DeMura_CTRL_TBL;
		Crtl_table_get_from_demura(ptrCrtl,LMMH);
		
		//Scale_Shift_bit(LMMH,&ptrCrtl->demura_table_scale_L,&ptrCrtl->demura_table_scale_M,&ptrCrtl->demura_table_scale_H,mode);
		if (mode == 1) {
				hor_384Bit_blk_num = 69;	 /* 481/7+1*/
				ver_blk_num = 271;
		} else {//mac6 skyworth use 241x136
				hor_384Bit_blk_num = 35;	 /*241/7+1*/
				ver_blk_num = 136;
		}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		for(index=0;index<481;index++)
		{
				if(i == 0 && index == 0)
				{
					tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START];
					tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
					DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
					
					tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+1];
					tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+2];
					DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;
					
					tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+3];
					tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+4];
					DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
				}
				else
				{
					Lmmh_Demura_table_index_offset = (i*Demura_LMMH_W_Size+index+1)/2*4+(i*Demura_LMMH_W_Size+index)/2*5;
					if(Lmmh_Demura_table_index_offset % 9 == 0)
					{
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = (tmp1<<4) + (tmp2>>4);
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP1 = ((tmp1&0x000F)<<8) + tmp2;

						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
						DemuraData12bitP2 = (tmp1<<4) + (tmp2>>4);
					}
					else if(Lmmh_Demura_table_index_offset % 9 == 4)
					{
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = ((tmp1&0x000F)<<8) + tmp2;
						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+2];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
						DemuraData12bitP1 = (tmp1<<4) + (tmp2>>4);

						
						tmp1 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+3];
						tmp2 = (unsigned short)LMMH[CSOT_DEMURA_TABLE_ADDR_START+Lmmh_Demura_table_index_offset+4];
						DemuraData12bitP2 = ((tmp1&0x000F)<<8) + tmp2;
					}
				}	 
				

				tbl_lo[i*481 + index] = (CSOT_Demura_Convert_SignedData(DemuraData12bitP0))>>2;
				tbl_md[i*481 + index] = (CSOT_Demura_Convert_SignedData(DemuraData12bitP1))>>2;
				tbl_hi[i*481 + index] = (CSOT_Demura_Convert_SignedData(DemuraData12bitP2))>>2;

				
				


				
				if(i==0 && (index < 10))
				{
					printk("\n	tbl_ori_lo[%d] =%d \n",index,tbl_lo[i*481 + index]);
					printk("\n	tbl_ori_md[%d] =%d \n",index,tbl_md[i*481 + index]);
					printk("\n	tbl_ori_hi[%d] =%d \n",index,tbl_hi[i*481 + index]);
				}
				
				if(i==0 && (index < 14))
				{
					printk("\n index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
					printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
				}
				
				//if(i==1 && index <=6)
				{
					//printf("index=%d,p0=%x,p1=%x,p2=%x \n",index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
					//printf("tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
				}
				/* R */
			}

	}

	Demura_find_scale(tbl_lo,&ptrCrtl->demura_table_scale_L);
	Demura_find_scale(tbl_md,&ptrCrtl->demura_table_scale_M);
	Demura_find_scale(tbl_hi,&ptrCrtl->demura_table_scale_H);
	ptrCrtl->demura_table_scale = 3;
	
	printk("scale_l=%d,scale_m=%d,scale_h=%d,\n",ptrCrtl->demura_table_scale_L,ptrCrtl->demura_table_scale_M,ptrCrtl->demura_table_scale_H);
	fwif_color_DeMura_encode(tbl_lo,tbl_md, tbl_hi, DeMura_TBL_481x271, 0,  Demura_TBL->TBL );
	//printk("\n p0=%x,p1=%x,p2=%x \n",DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
}

unsigned char Himax_Decide_shift_bit(unsigned short Maxvalue,unsigned short Minvalue)
{
	unsigned char scale_bit;
	
	//printk("\n\n Minvalue=%d,\n",Minvalue);
	//printk("\n\n Maxvalue=%d,\n",Maxvalue);
	Maxvalue = Maxvalue/4;
	Minvalue = Minvalue/4;
	
	if(Maxvalue<=demura_mac6_pos_clip)
		scale_bit = 0;
	else if(Maxvalue <= demura_mac6_pos_clip*2)
		scale_bit = 1;
	else if(Maxvalue <= demura_mac6_pos_clip*4)
		scale_bit = 2;
	else //if(Maxvalue <= demura_mac6_pos_clip*3)
		scale_bit = 3;

	//printk("\n\n minvalue/4 =%d,\n",Minvalue);
	//printk("\n\n Maxvalue/4 =%d,\n",Maxvalue);
	if(Minvalue >= demura_mac6_neg_clip)
		scale_bit = (scale_bit>0)?scale_bit:0;
	else if(Minvalue >= demura_mac6_neg_clip*2)
		scale_bit = (scale_bit>1)?scale_bit:1;
	else if(Minvalue >= demura_mac6_neg_clip*4)
		scale_bit = (scale_bit>2)?scale_bit:2;
	else
		scale_bit = 3;

	return scale_bit;
}


void Get_Himax_max_min_demura_value(short *Maxvalue,short *Minvalue,short Inputvalue)
{
	if(Inputvalue >= *Maxvalue)
	{
		*Maxvalue = Inputvalue; 
	}
	if(Inputvalue < *Minvalue)
	{
		*Minvalue = Inputvalue; 
	}
	
}


short Himax_Demura_12bit_to_6bit(short Demura_12bit,unsigned char scale_level)
{
	short tmp6bit;
	unsigned char shift_bit;
	
	shift_bit = 2 + scale_level ;	

	if(Demura_12bit < 0)
	{
		tmp6bit = Demura_12bit>>shift_bit;
		tmp6bit = (tmp6bit<demura_mac6_neg_clip)?demura_mac6_neg_clip:tmp6bit;
	}
	
	else
	{
		tmp6bit = Demura_12bit>>shift_bit;
		tmp6bit = (tmp6bit>demura_mac6_pos_clip)?demura_mac6_pos_clip:tmp6bit;
	}
	
	return tmp6bit;
}

void Himax_Crtl_table_get_from_demura(DRV_DeMura_CTRL_TBL *ptrCrtl,unsigned char *ptrDemura)
{
	unsigned short div_tmp;
	
	printk("===>>>[Himax_Demura_TBL]Enter Himax_Crtl_table_get_from_demura processing\n");
	ptrCrtl->demura_block_size = 0; //8x8
	ptrCrtl->demura_rgb_table_seperate = 0;
	
	ptrCrtl->demura_r_lower_cutoff = (((unsigned short)ptrDemura[0x60])<<4) + ((ptrDemura[0x61])&0x000F);
	ptrCrtl->demura_r_upper_cutoff = (((unsigned short)ptrDemura[0x66])<<4) + (ptrDemura[0x67]&0x000F);
	ptrCrtl->demura_g_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_g_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;
	ptrCrtl->demura_b_lower_cutoff = ptrCrtl->demura_r_lower_cutoff;
	ptrCrtl->demura_b_upper_cutoff = ptrCrtl->demura_r_upper_cutoff;

	/*
	ptrCrtl->demura_r_l_level = ((((unsigned short)ptrDemura[0x3E])&0x000F)<<8) + ptrDemura[0x35];
	ptrCrtl->demura_r_m_level = ((((unsigned short)ptrDemura[0x3E])>>4)<<12) + ptrDemura[0x36];
	ptrCrtl->demura_r_h_level = ((((unsigned short)ptrDemura[0x3F])&0x000F)<<8) + ptrDemura[0x37];
	*/
	ptrCrtl->demura_r_l_level = 100;
	ptrCrtl->demura_r_m_level = 240;
	ptrCrtl->demura_r_h_level = 900;
	ptrCrtl->demura_g_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_g_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_g_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_b_l_level = ptrCrtl->demura_r_l_level;
	ptrCrtl->demura_b_m_level = ptrCrtl->demura_r_m_level;
	ptrCrtl->demura_b_h_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_r_h_keep_level = ptrCrtl->demura_r_h_level;
	ptrCrtl->demura_g_h_keep_level = ptrCrtl->demura_g_h_level;
	ptrCrtl->demura_b_h_keep_level = ptrCrtl->demura_b_h_level;
	printk("\n\n blk_size=%d,cutoff_l=%d,cutoff_h=%d,level_l=%d,level_m=%d,level_h=%d \n\n",
		ptrCrtl->demura_block_size,ptrCrtl->demura_r_lower_cutoff,ptrCrtl->demura_r_upper_cutoff,
		ptrCrtl->demura_r_l_level,ptrCrtl->demura_r_m_level,ptrCrtl->demura_r_h_level);
	
	
	// r, g, b dvi_fac_L  threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_l_level -ptrCrtl->demura_r_lower_cutoff))>>2;
	ptrCrtl->r_div_factor_l = div_tmp;
	ptrCrtl->g_div_factor_l = div_tmp;
	ptrCrtl->b_div_factor_l = div_tmp;
	// r, g, b dvi_fac_L_M	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_m_level -ptrCrtl->demura_r_l_level))>>2;
	ptrCrtl->r_div_factor_l_m = div_tmp;
	ptrCrtl->g_div_factor_l_m = div_tmp;
	ptrCrtl->b_div_factor_l_m = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_h_level -ptrCrtl->demura_r_m_level))>>2;
	ptrCrtl->r_div_factor_m_h = div_tmp;
	ptrCrtl->g_div_factor_m_h = div_tmp;
	ptrCrtl->b_div_factor_m_h = div_tmp;
	// r, g, b dvi_fac_M_H	threshold
	div_tmp = (65536 / (ptrCrtl->demura_r_upper_cutoff -ptrCrtl->demura_r_h_level))>>2;
	ptrCrtl->r_div_factor_h = div_tmp;
	ptrCrtl->g_div_factor_h = div_tmp;
	ptrCrtl->b_div_factor_h = div_tmp;
	
}


void Himax_shift_bit(unsigned char *LMMH,unsigned char *scale_low,unsigned char *scale_mid,unsigned char *scale_high,unsigned char mode)
{
	
	unsigned int i,j,k, index;
	unsigned short ver_blk_num, hor_384Bit_blk_num;
    short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
	unsigned int Lmmh_Demura_table_index_offset;
	static short Demura12bitP0_max,Demura12bitP0_min, Demura12bitP1_max, Demura12bitP1_min,Demura12bitP2_max,Demura12bitP2_min;
	//unsigned char scale_low_bit=0,scale_mid_bit=0,scale_high_bit=0;
	printk("===>>>[Himax_Demura_TBL]Enter Himax_shift_bit processing\n");

	if(LMMH == NULL) {
		return;
	}
	
	if (mode == 1) {
		hor_384Bit_blk_num = 69;	 /* 481/7+1*/
		ver_blk_num = 271;
	} else {//mac6 skyworth use 241x136
		hor_384Bit_blk_num = 35;	 /*241/7+1*/
		ver_blk_num = 136;
	}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	Demura12bitP0_max = 0x0000;
	Demura12bitP1_max = 0x0000;
	Demura12bitP2_max = 0x0000;
	Demura12bitP0_min = 0x0000;
	Demura12bitP1_min = 0x0000;
	Demura12bitP2_min = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/
		index = 0;
		for (j=0;j<hor_384Bit_blk_num;j++) 
		{
			for(k=0;k<(deMura_7blk_Block/9);k++) 
			{

				if(index < Himax_Demura_LMMH_W_Size)
				{
					  if(index%2 == 0)
					{						
						Lmmh_Demura_table_index_offset = (index/2)*3;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = (((tmp2&0x000F)<<8) + tmp1)-0x800;
					}

					else 
					{							
						Lmmh_Demura_table_index_offset = ((index-1)/2)*3;
					
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP0 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP1 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP2 = ((tmp2 << 4) + (tmp1>>4))-0x800;
						
					}

					
					Get_Himax_max_min_demura_value(&Demura12bitP0_max,&Demura12bitP0_min,DemuraData12bitP0);
					Get_Himax_max_min_demura_value(&Demura12bitP1_max,&Demura12bitP1_min,DemuraData12bitP1);
					Get_Himax_max_min_demura_value(&Demura12bitP2_max,&Demura12bitP2_min,DemuraData12bitP2);
					
				}

					index = (index+1 >= Himax_Demura_LMMH_W_Size)?(Himax_Demura_LMMH_W_Size-1):(index+1);
				#if 0
					
					rid_index_a = 481;	//271x484 to 271x481,have to select 3 index abandon
					rid_index_b = 482;
					rid_index_c = 483;
					index = index + 1;
					if((index == rid_index_a) && (index == rid_index_b) && (index == rid_index_c))
					{
						index = index +1;
						if((index == rid_index_b))
						{
							index = index +1;
						}
						if(index == rid_index_c) 
						{		
							index = index + 1;
						}
						if((index+1) >= Himax_Demura_LMMH_W_Size)
						{
							index = Himax_Demura_LMMH_W_Size - 1;
						}
					}
				#endif
			}
		}
	}
	
	
	*scale_low = Himax_Decide_shift_bit(Demura12bitP0_max,Demura12bitP0_min);
	printk("[scale level]P0_MAX=0x%x,P0_MIN=0x%x,scale_l=%d,\n",Demura12bitP0_max,Demura12bitP0_min,*scale_low);
	*scale_mid = Himax_Decide_shift_bit(Demura12bitP1_max,Demura12bitP1_min);
	printk("[scale level]P1_MAX=0x%x,P1_MIN=0x%x,scale_m=%d,\n",Demura12bitP1_max,Demura12bitP1_min,*scale_mid);
	*scale_high = Himax_Decide_shift_bit(Demura12bitP2_max,Demura12bitP2_min);
	printk("[scale level]P2_MAX=0x%x,P2_MIN=0x%x,scale_h=%d,\n",Demura12bitP2_max,Demura12bitP2_min,*scale_high);
}

void Himax_LMMH_demura_to_dma(unsigned char *LMMH,VIP_DeMura_TBL * Demura_TBL, unsigned char mode,  short* tbl_lo,  short* tbl_md,  short* tbl_hi)//fill : Demura_TBL
{
		unsigned int i, index;
		//unsigned int column_pos, index_arr;
		unsigned short ver_blk_num, hor_384Bit_blk_num;
		 short DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2,tmp1,tmp2;
		unsigned int Lmmh_Demura_table_index_offset;
		short tmpL, tmpM1, tmpH;

		//int fcic_tmp;//juwen, 180528
		//unsigned char scalingDown_bit_fcic[3] = {0};
		unsigned char *DMA_8bit;
		DRV_DeMura_CTRL_TBL *ptrCrtl=NULL;
		printk("===>>>[Himax_Demura_TBL]Enter Himax_LMMH_demura_to_dma processing\n");
		for(i=512; i<526; i++)
		{
			printk("LMMH[%d]= 0x%x  ",i,(unsigned int)(LMMH[i]));
			if(i%16==0)
			{
				printk("\n");
			}
		}
		if (Demura_TBL == NULL || LMMH == NULL) {
			   // printf( "vpq_demura_data_to_dma table NULL ~~\n");
		//rtd_printk(KERN_ERR, TAG_NAME, "vpq_demura_data_to_dma table NULL ~~\n");
				return;
		}

		ptrCrtl = &Demura_TBL->DeMura_CTRL_TBL;
		Himax_Crtl_table_get_from_demura(ptrCrtl,LMMH);
		DMA_8bit = &Demura_TBL->TBL[0];
		
		//Himax_shift_bit(LMMH,&ptrCrtl->demura_table_scale_L,&ptrCrtl->demura_table_scale_M,&ptrCrtl->demura_table_scale_H,mode);
		if (mode == 1) {
				hor_384Bit_blk_num = 69;	 /* 481/7+1*/
				ver_blk_num = 271;
		} else {//mac6 skyworth use 241x136
				hor_384Bit_blk_num = 35;	 /*241/7+1*/
				ver_blk_num = 136;
		}
		
	DemuraData12bitP0 = 0x0000;
	DemuraData12bitP1 = 0x0000;
	DemuraData12bitP2 = 0x0000;
	tmp1 = 0x0000;
	tmp2 = 0x0000;
	Lmmh_Demura_table_index_offset = 0;
	
	for(i =0;i<ver_blk_num;i++) 
	{// i : 0~271
		/* one line*/				
			for(index=0;index<481;index++)
			{														
					 if(index%2 == 0)
					{						
						Lmmh_Demura_table_index_offset = (index/2)*3;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP0 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP1 = (((tmp2&0x000F)<<8) + tmp1)-0x800;

						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						DemuraData12bitP2 = (((tmp2&0x000F)<<8) + tmp1)-0x800;
					}

					else 
					{							
						Lmmh_Demura_table_index_offset = ((index-1)/2)*3;
					
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+0)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP0 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+1)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP1 = ((tmp2<<4) + (tmp1>>4))-0x800;
						
						tmp1 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+1];
						tmp2 = (unsigned short)LMMH[CSOT_Himax_DEMURA_TABLE_PLANE0_ADDR_START+((i*3+2)*(Himax_DEMURA_TABLE_ADDLine))+Lmmh_Demura_table_index_offset+2];
						DemuraData12bitP2 = ((tmp2 << 4) + (tmp1>>4))-0x800;
						
					}
					

					tbl_lo[i*481 + index] = (CSOT_Demura_Convert_SignedData(DemuraData12bitP0))>>2;
					tbl_md[i*481 + index] = (CSOT_Demura_Convert_SignedData(DemuraData12bitP1))>>2;
					tbl_hi[i*481 + index] = (CSOT_Demura_Convert_SignedData(DemuraData12bitP2))>>2;


					
					if(i==0 && (index < 10))
					{
						printk("\n	tbl_ori_lo[%d] =%d \n",index,tbl_lo[i*481 + index]);
						printk("\n	tbl_ori_md[%d] =%d \n",index,tbl_md[i*481 + index]);
						printk("\n	tbl_ori_hi[%d] =%d \n",index,tbl_hi[i*481 + index]);
					}

					
					if(i==0 && (index < 10))
					{
						printk("\n *********Panel Himax !!!************ \n");
						printk("\n i=%d,index=%d,p0=%x,p1=%x,p2=%x \n",i,index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					
					if((i==270) && (index>476) &&(index <= 484))
					{
						printk("\n *********Panel Himax !!!************ \n");
						printk("\n i=%d,index=%d,p0=%x,p1=%x,p2=%x \n",i,index,DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
						printk("\n tmpL=%d,tmpM1=%d,tmpH=%d \n",tmpL,tmpM1,tmpH);
					}
					/* R */
				
				
				
			}				
						
		

	}
	
	Demura_find_scale(tbl_lo,&ptrCrtl->demura_table_scale_L);
	Demura_find_scale(tbl_md,&ptrCrtl->demura_table_scale_M);
	Demura_find_scale(tbl_hi,&ptrCrtl->demura_table_scale_H);
	ptrCrtl->demura_table_scale = 3;
	
	printk("scale_l=%d,scale_m=%d,scale_h=%d,\n",ptrCrtl->demura_table_scale_L,ptrCrtl->demura_table_scale_M,ptrCrtl->demura_table_scale_H);
	//printk("\n p0=%x,p1=%x,p2=%x \n",DemuraData12bitP0,DemuraData12bitP1,DemuraData12bitP2);
	fwif_color_DeMura_encode(tbl_ori_lo_L,tbl_ori_md_M, tbl_ori_hi_H, DeMura_TBL_481x271, 0,  Demura_TBL->TBL );

}



#endif


void vpqex_boot_init(void)
{

}

unsigned char vpq_extern_ioctl_get_stop_run(unsigned int cmd)
{
	return (ioctl_extern_cmd_stop[_IOC_NR(cmd)&0xff]|ioctl_extern_cmd_stop[0]);
}

unsigned char vpq_extern_ioctl_get_stop_run_by_idx(unsigned char cmd_idx)
{
	return ioctl_extern_cmd_stop[cmd_idx];
}

void vpq_extern_ioctl_set_stop_run_by_idx(unsigned char cmd_idx, unsigned char stop)
{
	ioctl_extern_cmd_stop[cmd_idx] = stop;
}

bool vpqex_skip_middle_ware_picmode_data(unsigned int cmd)
{
	switch(cmd) {
		case VPQ_EXTERN_IOC_SET_PIC_MODE_DATA:
		case VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_defaultPictureModeSet:
		case VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_DolbyHDRPictureModeSet:
		case VPQ_EXTERN_IOC_SET_StructColorDataType:
		case VPQ_EXTERN_IOC_SET_StructColorDataType_defaultSDColorData:
		case VPQ_EXTERN_IOC_SET_StructColorDataType_defaultHDColorData:
		case VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA:
		case VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA_defColorTempSet:
		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType:
		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_defaultColorFacMode:
		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_AvColorFacMode:
		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_YppColorFacMode:
		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_VgaColorFacMode:
		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiColorFacMode:
		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiSDColorFacMode:
			return true;
	}
	return false;
}
VIP_MAGIC_GAMMA_Curve_Driver_Data magic_gamma_data;
extern VIP_MAGIC_GAMMA_Curve_Driver_Data g_MagicGammaDriverDataSave;
RTK_TableSize_Gamma Gamma;
UINT32 HistoData_bin[TV006_VPQ_chrm_bin];
unsigned char RGBmode_en=0;
unsigned char is_8kboard=0;
unsigned char RBswap_en=0;

long vpqex_ioctl_tv030(struct file *file, unsigned int cmd,  unsigned long arg)
{
	int ret = 0;
	HAL_VPQ_DATA_T_TV030 DeMura_Info;
	switch (cmd) {
	case VPQ_EXTERN_IOC_SET_OSDPIC_FLAG_TV030://flag
	{
		RTK_VIP_Flag pFlag;
		SCALER_DISPLAY_DATA sdp_data;
		if (copy_from_user(&pFlag,  (int __user *)arg,sizeof(RTK_VIP_Flag))) {
			printk("[kernel]set VPQ_EXTERN_IOC_SET_OSDPIC_FLAG_TV030 fail\n");
			ret = -1;
		} else {

			sdp_data.h_sta = pFlag.flag_2;
			sdp_data.h_end = pFlag.flag_3;
			sdp_data.v_sta = pFlag.flag_4;
			sdp_data.v_end = pFlag.flag_5;
			Scaler_Set_Partten4AutoGamma_mute(pFlag.flag_0,pFlag.flag_1,&sdp_data);
			RGBmode_en= pFlag.flag_6;
			
			if(pFlag.flag_9==1){
				is_8kboard=1;
				printk("is_8kboard\n");
			}
			
			ret = 0;
		}
	}
	break;
	
	case VPQ_EXTERN_IOC_GET_DYNAMIC_RANGE_TV030:
	{
		unsigned char DolbyMode = 0;
		unsigned char HdrMode = 0;
		unsigned char ret_Val = 0;

		SLR_VOINFO* pVOInfo = NULL;
		_system_setting_info *VIP_system_info_structure_table = NULL;

		VIP_system_info_structure_table = (_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_system_info_structure);
		pVOInfo = Scaler_VOInfoPointer(Scaler_Get_CurVoInfo_plane());

		if (pVOInfo == NULL || VIP_system_info_structure_table == NULL) {
			rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_DYNAMIC_RANGE_TV030, point NULL\n");
			ret = -1;
		} else {
			if(cur_src == 0)
			{
				DolbyMode = VIP_system_info_structure_table->DolbyHDR_flag;//fwif_vip_DolbyHDR_check(SLR_MAIN_DISPLAY, _SRC_HDMI);
				HdrMode = VIP_system_info_structure_table ->HDR_flag;//fwif_vip_HDR10_check(SLR_MAIN_DISPLAY, _SRC_HDMI);
			} else if(cur_src == 1){
				DolbyMode = VIP_system_info_structure_table->DolbyHDR_flag;//fwif_vip_DolbyHDR_check(SLR_MAIN_DISPLAY, _SRC_VO);
				HdrMode = VIP_system_info_structure_table ->HDR_flag;;//fwif_vip_HDR10_check(SLR_MAIN_DISPLAY, _SRC_VO);
			}

			if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_STATE) == _MODE_STATE_ACTIVE) {
				if (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) {
					if((DolbyMode == 1)&& (HdrMode == HAL_VPQ_HDR_MODE_SDR)) {
						ret_Val = VPQ_DYNAMIC_RANGE_DOLBY_VISION;
					} else if ((DolbyMode == 0)&& (HdrMode == HAL_VPQ_HDR_MODE_HDR10)) {
						ret_Val = VPQ_DYNAMIC_RANGE_HDR10;
					} else if ((DolbyMode == 0)&& (HdrMode == HAL_VPQ_HDR_MODE_ST2094)) {
						ret_Val = VPQ_DYNAMIC_RANGE_HDR10_PlUS;
					} else if ((DolbyMode == 0)&& (HdrMode == HAL_VPQ_HDR_MODE_HLG)) {
						if (pVOInfo->transfer_characteristics == 14) {	// will be HLG if Scaler_color_HLG_support_HLG14() = 1
							ret_Val = VPQ_DYNAMIC_RANGE_HLG_14;
						} else {
							ret_Val = VPQ_DYNAMIC_RANGE_HLG_18;
						}
					} else if ((DolbyMode == 0)&& (HdrMode == HAL_VPQ_HDR_MODE_SDR)) {
						if (pVOInfo->transfer_characteristics == 14) {
							ret_Val = VPQ_DYNAMIC_RANGE_HLG_14;
						} else {
							ret_Val = VPQ_DYNAMIC_RANGE_SDR;
						}
					} else {
						ret_Val = VPQ_DYNAMIC_RANGE_SDR;
					}

				} else {
					if((DolbyMode == 1)&& (HdrMode == HAL_VPQ_HDR_MODE_SDR)) {
						ret_Val = VPQ_DYNAMIC_RANGE_DOLBY_VISION;
					} else if ((DolbyMode == 0)&& (HdrMode == HAL_VPQ_HDR_MODE_HDR10)) {
						ret_Val = VPQ_DYNAMIC_RANGE_HDR10;
					} else if ((DolbyMode == 0)&& (HdrMode == HAL_VPQ_HDR_MODE_ST2094)) {
						ret_Val = VPQ_DYNAMIC_RANGE_HDR10_PlUS;
					} else if ((DolbyMode == 0)&& (HdrMode == HAL_VPQ_HDR_MODE_HLG)) {
						ret_Val = VPQ_DYNAMIC_RANGE_HLG;
					} else {
						ret_Val = VPQ_DYNAMIC_RANGE_SDR;
					}
				}

				if (copy_to_user((void __user *)arg, (void *)&ret_Val, sizeof(unsigned char))){
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_DYNAMIC_RANGE_TV030 fail\n");
					ret = -1;
				}else{
					ret = 0;
				}

			} else {
				ret = -1;
			}
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_DYNAMIC_RANGE_CUR_SRC_TV030:
	{
		if (copy_from_user((void *)&cur_src, (const void __user *)arg, sizeof(unsigned char))){
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_DYNAMIC_RANGE_CUR_SRC_TV030 fail\n");
			ret = -1;
		} else {
			ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_ICMTABLE:
	{
		extern SLR_VIP_TABLE* m_pVipTable;
		if (copy_from_user(&tICM_bin[0], (int __user *)arg, (VIP_ICM_TBL_X*VIP_ICM_TBL_Y*VIP_ICM_TBL_Z)*sizeof(unsigned int))) {
			printk("kernel copy VPQ_EXTERN_IOC_SET_ICMTABLE fail\n");
			printk("%s %d\n", __FUNCTION__, __LINE__);
			ret = -1;
			break;
		} else {
			int x,y,z;
			printk("kernel copy VPQ_EXTERN_IOC_SET_ICMTABLE success\n");
			printk("%s %d\n", __FUNCTION__, __LINE__);
			ret = 0;
			for (x=0; x<VIP_ICM_TBL_X;x++) {
				for (y=0;y<VIP_ICM_TBL_Y;y++) {
					for (z=0; z<VIP_ICM_TBL_Z; z++) {
						 m_pVipTable->tICM_ini[x][y][z] = (unsigned short)tICM_bin[x*(VIP_ICM_TBL_Y*VIP_ICM_TBL_Z)+y*VIP_ICM_TBL_Z+z];

					}

				}

			}
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_GAMMA_LEVEL_TV030:
	{
		unsigned char level;
		printk("[TV030]VPQ_EXTERN_IOC_SET_GAMMA_LEVE\n");

		if (copy_from_user(&level,	(void __user *)arg,sizeof(unsigned char))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_GAMMA_LEVEL fail\n");
			ret = -1;
		} else {
			Scaler_Set_Gamma_level(level);
			ret = 0;
		}
	}
	break;
	
	#if 1
	case VPQ_EXTERN_IOC_SET_GAMMA_CURVE:
	{
		static GammaCurve Gamma;
		extern unsigned int TconOutputGamma_R[Bin_Num_Output_Gamma / 2];
		extern unsigned int TconOutputGamma_G[Bin_Num_Output_Gamma / 2];
		extern unsigned int TconOutputGamma_B[Bin_Num_Output_Gamma / 2];
		//unsigned short i=0;

		if (copy_from_user(&Gamma,	(int __user *)arg,sizeof(GammaCurve))) {
			ret = -1;
		} else {
			RBswap_en=Gamma.tGammaTable[2047];
			memcpy((unsigned char*)&TconOutputGamma_R[0], (unsigned char*)&Gamma.tGammaTable[0*512], sizeof(unsigned int)*512);
			memcpy((unsigned char*)&TconOutputGamma_G[0], (unsigned char*)&Gamma.tGammaTable[1*512], sizeof(unsigned int)*512);
			memcpy((unsigned char*)&TconOutputGamma_B[0], (unsigned char*)&Gamma.tGammaTable[2*512], sizeof(unsigned int)*512);
			
			
			printk("---------[Tcon Gamma] load Curve start---------\n");
			printk("RBswap_en=%d\n",RBswap_en);
			#if 0
			for(i = 0 ; i < 512 ; i++)
				printk("tcon_gamma,r[%d] =0x%08x\n", i, TconOutputGamma_R[i]);
			printk("----------------------------------------------------\n");
			for(i = 0 ; i < 512 ; i++)
				printk("tcon_gamma,g[%d] =0x%08x\n", i, TconOutputGamma_G[i]);
			printk("----------------------------------------------------\n");
			for(i = 0 ; i < 512 ; i++)
				printk("tcon_gamma,b[%d] =0x%08x\n", i, TconOutputGamma_B[i]);
			#endif
			printk("---------[Tcon Gamma] load Curve end---------\n");
			
			
			tconoutputgamma_en=1;
			ret = 0;
		}
	}
	break;
	#endif

	case VPQ_EXTERN_IOC_SET_PQ_SETGAMMA_TABLESIZE_TV030:
	{
		static RTK_TableSize_Gamma Gamma;
		extern unsigned char GammaEnable;
		//unsigned short i=0;
		if (copy_from_user(&Gamma,	(int __user *)arg,sizeof(RTK_TableSize_Gamma))) {
			ret = -1;
		} else {
			//tconoutputgamma_en=1;	//add for test		

			//set grapic gamma linear & 0.45 curve---------
			fwif_color_gamma_encode_TableSize(&Gamma);
			GammaEnable = 1;
			fwif_color_set_gamma_Magic();

			//gamma curve move to OutputGamma---------
			if(tconoutputgamma_en){
				printk("tconoutputgamma_en ON!!\n");
				fwif_set_gamma_System();
			}else{
				printk("tconoutputgamma_en OFF!!\n");
				fwif_color_gamma_encode_TableSize_2(&Gamma);
			}

			fwif_color_set_OutputGamma_System();
			ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_DEMURA_CURVE:
	{
			printk("\n\n===>>>[Demura] 20200705 VPQ_EXTERN_IOC_SET_DEMURA_CURVE \n\n");
			if (copy_from_user(&DeMura_Info, (int __user *)arg, sizeof(HAL_VPQ_DATA_T_TV030))) {
				printk("kernel copy VPQ_IOC_SET_LMMH_DeMura fail 111\n");
				ret = -1;
				break;
			} else {
		#if 1	/* "Demura_LMMH_4ch_TBL" is too large, use dynamic allocate */
			
		/*========================= For Nova Demura Start=================================*/
				if((DeMura_Info.length == 586658) && (DeMura_Info.version == 0))//(DeMura_Info.length == 0x21a3d)//0x21a3d = 137789 bytes
			 {
				printk("\n\n demura info length=%d \n\n",DeMura_Info.length);
				 CSOT_Demura_TBL = (unsigned char *)dvr_malloc_specific(DeMura_Info.length * sizeof(unsigned char), GFP_DCU2_FIRST);
				 tbl_ori_lo_L = ( short *)dvr_malloc_specific(130351 * sizeof( short), GFP_DCU2_FIRST);
				 tbl_ori_md_M = ( short *)dvr_malloc_specific(130351 * sizeof( short), GFP_DCU2_FIRST);
				 tbl_ori_hi_H = ( short *)dvr_malloc_specific(130351 * sizeof( short), GFP_DCU2_FIRST);
				 if (CSOT_Demura_TBL == NULL) {
					 printk("dynamic alloc 6502 demura memory fail!!!\n");
					 ret = -1;
				 } else {
					 if (copy_from_user((void *)&CSOT_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
						 printk("kernel copy 6502 VPQ_IOC_SET_DeMura fail 222\n");
						 ret = -1;

					 } else {
						 //setPQ_byPASS_for_FCIC2Demura_Verify();

						 if(1)/* (DeMura_Info.version == 98)*/ {
							 printk("[CSOT_Demura_TBL]in 6502 CSOT_Demura_TBL processing\n");//juwen, 180927
							 CSOT_LMMH_demura_data_to_dma(&CSOT_Demura_TBL[0], &DeMura_TBL, 1,tbl_ori_lo_L,tbl_ori_md_M,tbl_ori_hi_H);
							 fwif_color_DeMura_init();
							 Scaler_Set_DeMura_En(1);
						 } 
						 else {
							 Scaler_Set_DeMura_En(0);
							 printk("set 6502 Demura off\n");
						 }

						 ret = 0;

					 }
					 //IoReg_Write32(0xb8000898,0xF0F0F0F0);
					 //printk("[CSOT_Demura_TBL]in 6502 CSOT_Demura_TBL processing rewrite reg 0898\n");
					 dvr_free((void *)CSOT_Demura_TBL);
					 dvr_free((void *)tbl_ori_lo_L);
					 dvr_free((void *)tbl_ori_md_M);
					 dvr_free((void *)tbl_ori_hi_H);

				 }
			 }
			/*========================= For Nova Demura Finish=================================*/
			
			/*========================= For Himax Demura Start=================================*/
			else if((DeMura_Info.length == 590750) && (DeMura_Info.version == 0))//(DeMura_Info.length == 0x21a3d)//0x21a3d = 137789 bytes
			 {
				printk("\n\n Himax demura info length=%d \n\n",DeMura_Info.length);
				
				tbl_ori_lo_L = ( short *)dvr_malloc_specific(130351 * sizeof( short), GFP_DCU2_FIRST);
				tbl_ori_md_M = ( short *)dvr_malloc_specific(130351 * sizeof( short), GFP_DCU2_FIRST);
				tbl_ori_hi_H = ( short *)dvr_malloc_specific(130351 * sizeof( short), GFP_DCU2_FIRST);
				
				printk("=======>>>>>Enter ZYY Himax Demura processing \n\n");
				 Himax_Demura_TBL = (unsigned char *)dvr_malloc_specific(DeMura_Info.length * sizeof(unsigned char), GFP_DCU2_FIRST);
				 if ((Himax_Demura_TBL == NULL)||(tbl_ori_lo_L==NULL)||(tbl_ori_md_M==NULL)||(tbl_ori_hi_H == NULL) ){
					 printk("dynamic alloc Himax demura memory fail!!!\n");
					 ret = -1;
				 } else {
					 if (copy_from_user((void *)&Himax_Demura_TBL[0], (int __user *)DeMura_Info.pData, (DeMura_Info.length)*sizeof(unsigned char))) {
						 printk("kernel copy Himax VPQ_IOC_SET_DeMura fail 222\n");
						 ret = -1;
			
					 } else {
						 //setPQ_byPASS_for_FCIC2Demura_Verify();
			
						 if(1)/* (DeMura_Info.version == 98)*/ {
							 printk("===>>>[Himax_Demura_TBL]Enter Himax_Demura_TBL processing\n");
							 Himax_LMMH_demura_to_dma(&Himax_Demura_TBL[0], &DeMura_TBL, 1,tbl_ori_lo_L,tbl_ori_md_M,tbl_ori_hi_H);
							 fwif_color_DeMura_init();
							 Scaler_Set_DeMura_En(1);
						 for(ret=0; ret<64; ret++)
						 	printk("\n Demura[%d]= 0x%x",ret,Himax_Demura_TBL[ret]);
						 
						 
						 } 
						 else {
							 Scaler_Set_DeMura_En(0);
							 printk("set Himax Demura off\n");
						 }
			
						 ret = 0;
			
					 }
					 dvr_free((void *)Himax_Demura_TBL);
					dvr_free((void *)tbl_ori_lo_L);
					dvr_free((void *)tbl_ori_md_M);
					dvr_free((void *)tbl_ori_hi_H);
				 }
			 }
			/*========================= For Himax Demura Finish=================================*/
								
		#endif
			}
		}
		break;
	
	case VPQ_EXTERN_IOC_GET_MEMCLD_ENABLE_TV030:
	{
		unsigned char bEnable = 0;
		bEnable =Scaler_GetLocalContrastEnable();
		if (Scaler_GetLocalContrastEnable() == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetLocalContrastEnable fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&bEnable, sizeof(unsigned char))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_MEMCLD_ENABLE_TV030 fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_MEMCLD_ENABLE_TV030:
	{
		unsigned int args = 0;

		extern unsigned char LocalContrast_EN_UI;
		extern unsigned char LocalContrast_table;

		if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

			ret = -1;
		} else {

    		printk("[LC]vpq_extern, LC UI en=%d\n",args);	
			LocalContrast_EN_UI=args;
			
			if(LocalContrast_EN_UI==0){
			Scaler_SetLocalContrastEnable(0);
			fwif_color_set_LC_Global_Ctrl(0, 9);
			printk("[LC] vpqextern LC UI OFF !!!\n");
			}
			else
			{ //UI=ON
			fwif_color_set_LC_Global_Region_Num_Size(LocalContrast_table, LC_BLOCK_60x34);
			if(drvif_color_get_LC_size_support()==0){
			Scaler_SetLocalContrastEnable(0);
			printk("[LC] vpqextern LC OFF,LC UI ON,but size not support\n");
			}else{ 
			Scaler_SetLocalContrastEnable(1);
			fwif_color_set_LC_Global_Ctrl(0, LocalContrast_table);
			printk("[LC] vpqextern LC ON,LC UI ON,and size support\n");
			}
		}

			ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_DECONTOUR_ENABLE_TV030:
	{
		unsigned char value = 0;
		printk("VPQ_EXTERN_IOC_SET_DECONTOUR_ENABLE_TV030\n");
		if (copy_from_user(&value,  (void __user *)arg,sizeof(unsigned char))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_DECONTOUR_ENABLE_TV030 fail\n");
			ret = -1;
		} else {
			ret = 0;
			Scaler_Set_I_De_Contour((unsigned char)value);
		}
	}
	break;

	case VPQ_EXTERN_IOC_GET_DECONTOUR_ENABLE_TV030:
	{
		unsigned char value = 0;
		printk("VPQ_EXTERN_IOC_GET_DECONTOUR_ENABLE_TV030\n");
		value = (unsigned char)Scaler_Get_I_De_Contour();
		if (copy_to_user((void __user *)arg, (void *)&value, sizeof(unsigned char))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_DECONTOUR_ENABLE_TV030 fail\n");
			ret = -1;
		} else
			ret = 0;
	}
	break;

	case VPQ_EXTERN_IOC_GET_HistoData_Min_TV030:
	{
		signed int DC_min = 0;

		if (fwif_color_get_HistoData_Min(&DC_min) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_Min fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&DC_min, sizeof(signed int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Min fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_GET_HistoData_Max_TV030:
	{
		signed int DC_max = 0;

		if (fwif_color_get_HistoData_Max(&DC_max) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_Max fail\n");
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, (void *)&DC_max, sizeof(signed int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Max fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_GET_HistoData_APL_TV030:
	{
		unsigned int DC_APL = 0;

		if (fwif_color_get_HistoData_APL(&DC_APL) == FALSE) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel fwif_color_get_HistoData_APL fail\n");
			ret = -1;
		} else {
			if (drvif_color_get_WB_pattern_on())
				DC_APL = 940;
			if (copy_to_user((void __user *)arg, (void *)&DC_APL, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_APL fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_GET_HDR_HIS_MAXRGB:
	{
		static UINT32 HDR_info_bin[131] = {0};
		if (drvif_DM_HDR10_enable_Get() == 0) {
			ret = -1;
			break;
		}
		if (fwif_color_get_DM2_HDR_histogram_MaxRGB(HDR_info_bin) == 0) {
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, HDR_info_bin, 131 * 4)) {
				ret = -1;
			} else
				ret = 0;
		}
		break;
	}
	case VPQ_EXTERN_IOC_GET_HDR_PicInfo_TV030:
	{
		static UINT32 HDR_info_bin[131] = {0};
		if (drvif_DM_HDR10_enable_Get() == 0) {
			ret = -1;
			break;
		}	
		if (fwif_color_get_DM2_HDR_histogram_TV030(HDR_info_bin) == 0) {
			ret = -1;
		} else {
			if (copy_to_user((void __user *)arg, HDR_info_bin, 131 * 4)) {
				ret = -1;
			} else
				ret = 0;
		}
		break;
	}

	case VPQ_EXTERN_IOC_SET_BRIGHTNESS_LUT_OETF:
	{		
		BRIGHTNESS_LUT_OETF BRIGHTNESS_LUT_T;
		#ifdef CONFIG_SUPPORT_IPQ
		extern UINT16 OETF_LUT_R[1025];
		extern UINT16 IPQ_OETF_LUT_R[1025];
		extern unsigned int EOTF_LUT_2084_nits[OETF_size];
		extern unsigned char OETF_STOP;//3002
		extern unsigned char OETFCurve_STOP;//3003
		extern unsigned char BBC_Enable;
		#endif
		_system_setting_info *VIP_system_info_structure_table = NULL;
		VIP_system_info_structure_table = (_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_system_info_structure);
		
		if (copy_from_user(&BRIGHTNESS_LUT_T,  (int __user *)arg,sizeof(BRIGHTNESS_LUT_OETF))) {
			rtd_printk(KERN_EMERG, TAG_NAME,"VPQ_EXTERN_IOC_SET_BRIGHTNESS_LUT_OETF, copy fail\n");
			ret = -1;
		} else {
			memcpy((unsigned char*)&IPQ_OETF[0], (unsigned char*)&BRIGHTNESS_LUT_T.pf_LUT[0], sizeof(short)*256);
			if(BRIGHTNESS_LUT_T.un16_length==256){
				//if (VIP_system_info_structure_table->HDR_flag == HAL_VPQ_HDR_MODE_HLG || VIP_system_info_structure_table->HDR_flag == HAL_VPQ_HDR_MODE_HDR10) {
					printk("HDR Curve:%d\n",BBC_Enable);
					#ifdef CONFIG_SUPPORT_IPQ
					if(OETF_STOP){
						printk("OETF_STOP\n");
					}
					else{
						if(OETFCurve_STOP){
							printk("fixed oetf curve\n");
							fwif_color_set_DM2_OETF_TV006(IPQ_OETF_LUT_R,0);
							drvif_color_set_BBC_shift_bit(4);
							drvif_color_Set_ST2094_3Dlut_CInv(1024<<(9-4), 1);
							drvif_color_set_BBC_Enable(1);
						}
						else{
							Scaler_SetBrightness_LUT_OETF(OETF_LUT_R,&BRIGHTNESS_LUT_T);
							fwif_color_set_DM2_OETF_TV006(OETF_LUT_R, 0);//fwif_color_set_DM2_OETF_TV006(OETF_LUT_R, 0);
						}
						if (VIP_system_info_structure_table->HDR_flag == HAL_VPQ_HDR_MODE_HDR10) {
							drvif_fwif_color_Set_HDR10_EOTF_depNITS();
							fwif_color_set_DM2_EOTF_TV006(EOTF_LUT_2084_nits, 0);
						}
					}
					#endif
			}else if(BRIGHTNESS_LUT_T.un16_length==1024){
					printk("SDR GammaCurve\n");
					Scaler_SetOETF2Gamma(&BRIGHTNESS_LUT_T);
					fwif_color_set_gamma_Magic();
					BBC_Enable=0;
					//Scaler_SetBrightness_LUT_OETF(OETF_LUT_R,&BRIGHTNESS_LUT_T);
					//fwif_color_rtice_DM2_OETF_Set(OETF_LUT_R,OETF_LUT_R,OETF_LUT_R);
				}
			}	
			ret = 0;
		break;
	}

	case VPQ_EXTERN_IOC_GET_LC_HISTOGRAM_TV030:
	{
		unsigned int  plc_out[16];
		Scaler_color_get_LC_His_dat(&plc_out[0]);
		if (copy_to_user((void __user *)arg, (void *)&plc_out[0], sizeof(plc_out) )) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_LC_HISTOGRAM_TV030 fail\n");
			ret = -1;
		} else
			ret = 0;

	}
	break;

	case VPQ_EXTERN_IOC_SET_RGBWTOSRGBMATRIX_TV030:
	{
		unsigned char i,j;
		extern short BT709Target_sRGB_APPLY[3][3];
		extern short BT2020Target_sRGB_APPLY[3][3];
		extern short DCIP3Target_sRGB_APPLY[3][3];
		extern short ADOBERGBTarget_sRGB_APPLY[3][3];
		
		RTK_VPQ_sRGB_Matrix sRGB_T;
		extern unsigned char g_srgbForceUpdate;
		_system_setting_info *VIP_system_info_structure_table = NULL;
		VIP_system_info_structure_table = (_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_system_info_structure);
		printk("[Kernel]VPQ_EXTERN_IOC_SET_RGBWTOSRGBMATRIX\n");

		if (copy_from_user(&sRGB_T,  (int __user *)arg,sizeof(RTK_VPQ_sRGB_Matrix))) {
			ret = -1;
		} else {
		#if 0//for debug
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					printk("BT709Target[%d][%d]=%d\n",i,j,sRGB_T.BT709Target[i][j]);
				}
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					printk("sRGB_T->BT2020Target[%d][%d]=%d\n",i,j,sRGB_T.BT2020Target[i][j]);
				}
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					printk("sRGB_T->DCIP3Target[%d][%d]=%d\n",i,j,sRGB_T.DCIP3Target[i][j]);
				}
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					printk("sRGB_T->ADOBERGBTarget[%d][%d]=%d\n",i,j,sRGB_T.ADOBERGBTarget[i][j]);
				}
		#endif
			//-----------------------------------------------------------------------------
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					BT709Target_sRGB_APPLY[i][j]=sRGB_T.BT709Target[i][j];
				}
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					BT2020Target_sRGB_APPLY[i][j]=sRGB_T.BT2020Target[i][j];
				}
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					DCIP3Target_sRGB_APPLY[i][j]=sRGB_T.DCIP3Target[i][j];
				}
			for(i=0;i<3;i++){
				 for(j=0;j<3;j++)
					ADOBERGBTarget_sRGB_APPLY[i][j]=sRGB_T.ADOBERGBTarget[i][j];
				}
			//fwif_color_set_sRGBMatrix();
		 	g_srgbForceUpdate = 0;

			ret = 0;
		}
	break;
	}	

	case VPQ_EXTERN_IOC_SET_PARTTENFORAUTOGAMMA_TV030:
	{
		//rtd_printk(KERN_EMERG, TAG_NAME,"VPQ_EXTERN_IOC_SET_PARTTENFORAUTOGAMMA_TV030\n");
		INTERNAL_PARTTEN pData;

		if (copy_from_user(&pData,	(void __user *)arg,sizeof(INTERNAL_PARTTEN))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_PARTTENFORAUTOGAMMA_TV030 fail\n");
			ret = -1;
		} else {
			Scaler_Set_Partten4AutoGamma(pData.enable,pData.r_Val,pData.g_Val,pData.b_Val);
			ret = 0;
		}
	}
	break;
	
	case VPQ_EXTERN_IOC_SET_PICTUREMODE_TV030:
	{
		RTK_VPQ_MODE_TYPE_TV030 args = 0;
		//printk("VPQ_EXTERN_IOC_SET_PICTUREMODE_TV030\n");
		if (copy_from_user(&args,  (int __user *)arg,sizeof(RTK_VPQ_MODE_TYPE_TV030))) {
			ret = -1;
		} else {
			ret = 0;
			Scaler_Set_PictureMode_PQsetting((RTK_VPQ_MODE_TYPE_TV030)args);
		}
	}
		break;

	case VPQ_EXTERN_IOC_SET_LOCALCONTRAST_LEVEL_TV030:
	{
		unsigned char level = 0;
		extern unsigned char LocalContrast_table;
		
		if (copy_from_user(&level,  (int __user *)arg,sizeof(unsigned char))) {
			ret = -1;
		} else {
			printk("[LC] vpq_extern  tbl_index=%d\n",level);
			Scaler_SetLocalContrastTable(level);//table 0 for low; table 2 for high
			LocalContrast_table=level;
			
			ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_3DLUT_DATA:
	{		
	   static RTK_VPQ_3DLUT_PARAM lut_param;
       extern int D_3DLUT_Data[VIP_D_3DLUT_NUM][VIP_D_3D_LUT_SIZE][VIP_8VERTEX_RGB_MAX];
	   
	   if(copy_from_user(&lut_param, (int __user *)arg, sizeof(RTK_VPQ_3DLUT_PARAM))){
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_3DLUT_DATA fail\n");
			ret =-1;			
			break;
       }else{
			memcpy(D_3DLUT_Data[0],lut_param.D_3DLUT_Data[0],VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX *sizeof(UINT32)); 
			memcpy(D_3DLUT_Data[1],lut_param.D_3DLUT_Data[1],VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX *sizeof(UINT32)); 
			memcpy(D_3DLUT_Data[2],lut_param.D_3DLUT_Data[2],VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX *sizeof(UINT32));
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_3DLUT_DATA lut_param.D_3DLUT_Data\n");
	   }
	}
	break;

	case VPQ_EXTERN_IOC_GET_PIXELINFO_TV030:
	{
		//printk("Ioc VPQ_EXTERN_IOC_GET_PIXELINFO_TV030!!!!!!!!\n");
		SCREEN_PIXEL_INFO pixelInfo;
		if (copy_from_user(&pixelInfo, (int __user *)arg, sizeof(SCREEN_PIXEL_INFO))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_GET_PIXELINFO_TV030 fail\n");
			ret = -1;
		} else {
			ret = 0;
			Scaler_Get_ScreenPixel_info(&pixelInfo);
			if (copy_to_user((void __user *)arg, (void *)&pixelInfo, sizeof(SCREEN_PIXEL_INFO))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PIXELINFO_TV030 scaler_get_screen_pixel_info fail\n");
				ret = -1;
			} else
				ret = 0;
		}
	}
	break;

	case VPQ_EXTERN_IOC_SET_DECONTOURLEVEL:
	{
		#ifndef  CONFIG_RTK_8KCODEC_INTERFACE
		//extern unsigned char Decontoure_level_by_OSD;
		#endif
		extern unsigned char i_decontour_index;
		extern unsigned char i_decontour_level;
		unsigned char value = 0;
		
		if (copy_from_user(&value,  (int __user *)arg,sizeof(unsigned char))) {
			ret = -1;
		} else {
			printk("VPQ_EXTERN_IOC_SET_DECONTOURLEVEL:UI= %d,i=%d\n",value,i_decontour_index);
			i_decontour_level=value;
				if(value==0){
					Scaler_Set_I_De_Contour(0);
					Scaler_Set_Block_DeContour(0);
				}else if(value==1){
					Scaler_Set_I_De_Contour(i_decontour_index);
					Scaler_Set_Block_DeContour(0);
				}else if(value==3){
					Scaler_Set_I_De_Contour(i_decontour_index);	
					Scaler_Set_Block_DeContour(i_decontour_index);
				}
			ret = 0;
			}
	break;
	}

	case VPQ_EXTERN_IOC_SET_PanelMaxLuminance_TV030:
	{
		extern unsigned short panel_max_luminance;
		rtd_printk(KERN_ERR, TAG_NAME,"VPQ_EXTERN_IOC_SET_PanelMaxLuminance_TV030 \n");
		if (copy_from_user(&panel_max_luminance,  (int __user *)arg,sizeof(unsigned short))) {
			ret = -1;
		} else {
			rtd_printk(KERN_ERR, TAG_NAME,"panel_max_luminance : %d \n", panel_max_luminance);
			}
	}
	break;

	case VPQ_EXTERN_IOC_GET_AIPQ_SUPPORTMODE:
	{
		printk("VPQ_EXTERN_IOC_GET_AIPQ_SUPPORTMODE\n");
		#if defined(CONFIG_RTK_AI_DRV)
			aipq_confing = 1;
			printk("aipq_confing ON\n");

		#else
			aipq_confing = 0;
			printk("aipq_confing OFF\n");
		
		#endif
		if (copy_to_user((void __user *)arg, (void *)&aipq_confing, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_AIPQ_SUPPORTMODE fail\n");
			ret = -1;
		} else
			ret = 0;
	}
	break;	
	default:
		//rtd_printk(KERN_DEBUG, TAG_NAME, "kernel IO command %d not found!\n", cmd);
		//printk("VPQ_EXTERN_IOC cmd=0x%x unknown\n", cmd);
		return -1;

	}
	return ret;
}
long vpqex_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	int ret = 0, i, j;
	extern SLR_VIP_TABLE* m_pVipTable;
	ENUM_TVD_INPUT_FORMAT srcfmt = 0;
	unsigned int vipsource = 0;
	unsigned int brightness = 0;
	unsigned int contrast = 0;
	unsigned int saturation = 0;
	unsigned int hue = 0;
	unsigned int nr = 0;
	unsigned int sharpness = 0;
	TV001_LEVEL_E dbLevel = 0;
	TV001_COLORTEMP_E colorTemp = 0;
	TV001_COLOR_TEMP_DATA_S color_temp_data_s;
	unsigned int backlight = 0;
	RTK_PQModule_T PQModule_T;
	RTK_DEMO_MODE_T DEMO_MODE_T;
	unsigned char onoff = 0;
	TV001_HDR_TYPE_E HdrType = 0;
	unsigned char bEnable = 0;
	unsigned int dcc_mode = 0;
	unsigned int icm_table_idx = 0;
	unsigned int film_mode_enable = 0;
	HDMI_CSC_DATA_RANGE_MODE_T range_mode = 0;
	unsigned int hdr_force_mode = 0;
	unsigned int cinema_pic_mode = 0;
	unsigned int pq_bypass_lv = 0;
	HAL_VPQ_ENG_STRUCT* ENGMENU = NULL;
	HAL_VPQ_ENG_SIZE* ENGMENU_size = NULL;
	HAL_VPQ_ENG_ID ENG_ID;
	unsigned int iEn;
	int level;
	RTK_TV002_SR_T sr_data;
	unsigned int live_colour = 0;
	unsigned int mastered_4k = 0;
	unsigned char TV002_PROJECT_STYLE;
	unsigned char TV002_DBC_POWER_SAVING_MODE;
	unsigned char TV002_DBC_UI_BACKLIGHT;
	unsigned char TV002_DBC_BACKLIGHT;
	unsigned char TV002_UI_PICTURE_MODE;
	unsigned int GammaType = 0;
	unsigned int args = 0;
	HAL_VPQ_ENG_TWOLAYER_STRUCT* ENG_TWOLAYER_MENU = NULL;
	HAL_VPQ_ENG_TWOLAYER_ID ENG_TWOLAYER_ID;
	unsigned int dcr_mode = 0;
	unsigned int DCR_backlight = 0;
	#ifdef ENABLE_DE_CONTOUR_I2R
	extern unsigned char Eng_Skyworth_Decont_Pattern;
	#endif

	if (vpq_extern_ioctl_get_stop_run(cmd))
		return 0;

	if (_IOC_TYPE(cmd) == VPQ_EXTERN_IOC_MAGIC_TV030)
			return vpqex_ioctl_tv030(file, cmd, arg);

//	if (vpqex_project_id != 0x00060000) {
//		if (VPQ_EXTERN_IOC_INIT == cmd) {
//			vpqex_project_id = 0x00060000;
//			vpqex_boot_init();
//		} else {
//			return -1;
//		}
//	}

//	printk("vpqex_ioctl %d\n", __LINE__);

	if (VPQ_EXTERN_IOC_INIT == cmd) {
		vpqex_project_id = 0x00010000;
		Scaler_color_Set_HDR_AutoRun(TRUE);
		return 0;
	} else if (VPQ_EXTERN_IOC_UNINIT == cmd) {
		PQ_Dev_Extern_Status = PQ_DEV_EXTERN_UNINIT;
		return 0;
	} else if (VPQ_EXTERN_IOC_OPEN == cmd || VPQ_EXTERN_IOC_CLOSE == cmd) {
		return 0;
	}else if (VPQ_EXTERN_IOC_INIT_PRJ_ID == cmd) {
		VIP_Customer_Project_ID_ENUM prj_id;
		if (copy_from_user(&prj_id, (int __user *)arg, sizeof(unsigned int))) {
			rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_INIT_PRJ_ID fail\n");
			return -1;
		} else {
			fwif_VIP_set_Project_ID(prj_id);
			rtd_printk(KERN_ERR, TAG_NAME, "VPQ_EXTERN_IOC_INIT_PRJ_ID = %d\n", prj_id);
			return 0;
		}	
	}

//	if (PQ_Dev_Extern_Status != PQ_DEV_EXTERN_INIT_DONE)
//		return -1;

//	printk("vpqex_ioctl %d\n", __LINE__);
#ifdef Merlin3_rock_mark	//Merlin3 rock mark
	if (fwif_color_get_pq_demo_flag_rpc())
		return 0;
#endif
#ifndef SEND_VIP_MIDDLE_WARE_PIC_MODE_DATA
	if (vpqex_skip_middle_ware_picmode_data(cmd))
		return 0;
#endif

	switch (cmd) {
	/*
	case VPQ_EXTERN_IOC_INIT:
		if (PQ_DEV_EXTERN_UNINIT == PQ_Dev_Extern_Status || PQ_DEV_EXTERN_NOTHING == PQ_Dev_Extern_Status) {
			fwif_color_inv_gamma_control_back(SLR_MAIN_DISPLAY, 1);
			fwif_color_gamma_control_back(SLR_MAIN_DISPLAY, 1);
			PQ_Dev_Extern_Status = PQ_DEV_EXTERN_INIT_DONE;
		} else
			return -1;
		break;

	case VPQ_EXTERN_IOC_UNINIT:
		if (PQ_DEV_EXTERN_CLOSE == PQ_Dev_Extern_Status || PQ_DEV_EXTERN_INIT_DONE == PQ_Dev_Extern_Status) {
			PQ_Dev_Extern_Status = PQ_DEV_EXTERN_UNINIT;
		} else
			return -1;
		break;

	case VPQ_EXTERN_IOC_OPEN:
		if (PQ_DEV_EXTERN_CLOSE == PQ_Dev_Extern_Status || PQ_DEV_EXTERN_INIT_DONE == PQ_Dev_Extern_Status) {
			PQ_Dev_Extern_Status = PQ_DEV_EXTERN_OPEN_DONE;
		} else
			return -1;
		break;

	case VPQ_EXTERN_IOC_CLOSE:
		if (PQ_DEV_EXTERN_OPEN_DONE == PQ_Dev_Extern_Status) {
			PQ_Dev_Extern_Status = PQ_DEV_EXTERN_CLOSE;
		} else
			 return -1;
		break;
	*/

/************************************************************************
 *  TV001 External variables
 ************************************************************************/
 		case VPQ_EXTERN_IOC_REGISTER_NEW_VIPTABLE:
		{
			ret = xRegisterTable();
			if (ret) {
				ret = 0;
				printk("viptable xRegisterTable success\n");
			}
			else {
				ret = -1;
				printk("viptable xRegisterTable fail\n");
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_VGA_ADCGainOffset:
		{
			extern ADCGainOffset m_vgaGainOffset;
			if (copy_from_user(&m_vgaGainOffset, (int __user *)arg, sizeof(ADCGainOffset))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_VGA_ADCGainOffset fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_VGA_ADCGainOffset success\n");
				ret = 0;
				#if 1
				printk("m_vgaGainOffset={\n");
				printk("%x %x %x ", m_vgaGainOffset.Gain_R, m_vgaGainOffset.Gain_G, m_vgaGainOffset.Gain_B);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_YPBPR_ADCGainOffset:
		{
			extern ADCGainOffset m_yPbPrGainOffsetData[SR_MAX_YPBPR_GAINOFFSET_MODE] ;
			if (copy_from_user(&m_yPbPrGainOffsetData, (int __user *)arg, sizeof(m_yPbPrGainOffsetData))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_YPBPR_ADCGainOffset fail\n");
				ret = -1;
				break;
			} else {
#ifdef CONFIG_ARM64 //ARM32 compatible
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_YPBPR_ADCGainOffset success, sizeof(m_yPbPrGainOffsetData)=%zu\n", sizeof(m_yPbPrGainOffsetData));
#else
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_YPBPR_ADCGainOffset success, sizeof(m_yPbPrGainOffsetData)=%d\n", sizeof(m_yPbPrGainOffsetData));
#endif
				ret = 0;
				#if 1
				printk("m_yPbPrGainOffsetData[16]={\n");
				for (i=0; i<SR_MAX_YPBPR_GAINOFFSET_MODE; i++) {
					//for (j=0; j<VIP_QUALITY_FUNCTION_TOTAL_CHECK; j++) {
						printk("%x %x %x ", m_yPbPrGainOffsetData[i].Gain_R, m_yPbPrGainOffsetData[i].Gain_G, m_yPbPrGainOffsetData[i].Gain_B);
					//}
					printk("\n");
				}
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_SLR_VIP_TABLE_CUSTOM_TV001:
		{
			extern void* m_pVipTableCustom; /* SLR_VIP_TABLE_CUSTOM_TV001  */

			if (copy_from_user((SLR_VIP_TABLE_CUSTOM_TV001*)m_pVipTableCustom, (int __user *)arg, sizeof(SLR_VIP_TABLE_CUSTOM_TV001))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_SLR_VIP_TABLE_CUSTOM_TV001 fail\n");
				ret = -1;
				break;
			} else {
				SLR_VIP_TABLE_CUSTOM_TV001* tmp_pVipTableCustom = (SLR_VIP_TABLE_CUSTOM_TV001*)m_pVipTableCustom;
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_SLR_VIP_TABLE_CUSTOM_TV001 success\n");
				ret = 0;
				#if 1
				printk("m_pVipTableCustom->InitParam[16]={\n");
				for (i=0; i<16; i++) {
					//for (j=0; j<VIP_QUALITY_FUNCTION_TOTAL_CHECK; j++) {
						printk("%x ", tmp_pVipTableCustom->InitParam[i]);
					//}
					//printk("\n");
				}
				printk("} end\n");

				printk("m_pVipTableCustom->DCR_TABLE[][][]={\n");
				for (i=0; i<DCR_TABLE_ROW_NUM; i++) {
					for (j=0; j<DCR_TABLE_COL_NUM; j++) {
						printk("%x ", tmp_pVipTableCustom->DCR_TABLE[New_DCR_TABLE_NUM-1][i][j]);
					}
					printk("\n");
				}
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_SLR_VIP_TABLE:
		{
			printk("%s %d\n", __FUNCTION__, __LINE__);

			#if 0
				printk("original m_defaultVipTable.VIP_QUALITY_Coef[][]={\n");
				for (i=0; i<3; i++) {
					for (j=0; j<VIP_QUALITY_FUNCTION_TOTAL_CHECK; j++) {
						printk("%x ", m_defaultVipTable.VIP_QUALITY_Coef[i][j]);
					}
					printk("\n");
				}
				printk("} end\n");

				printk("m_defaultVipTable.DrvSetting_Skip_Flag[]={\n");
				for (i=0; i<DrvSetting_Skip_Flag_item_Max; i++) {
					//for (j=0; j<VIP_QUALITY_FUNCTION_TOTAL_CHECK; j++) {
						printk("%x ", m_defaultVipTable.DrvSetting_Skip_Flag[i]);
					//}
					//printk("\n");
				}
				printk("} end\n");
			#endif
			if (copy_from_user(m_pVipTable, (int __user *)arg, sizeof(SLR_VIP_TABLE))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy SLR_VIP_TABLE fail\n");
				printk("%s %d\n", __FUNCTION__, __LINE__);

				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy SLR_VIP_TABLE success\n");
				printk("%s %d\n", __FUNCTION__, __LINE__);
				ret = 0;


				#if 1
				printk("m_pVipTable->VIP_QUALITY_Coef[][]={\n");
				for (i=0; i<3; i++) {
					for (j=0; j<VIP_QUALITY_Coef_MAX; j++) {
						printk("%x ", m_pVipTable->VIP_QUALITY_Coef[i][j]);
					}
					printk("\n");
				}
				printk("} end\n");

				printk("m_pVipTable->DrvSetting_Skip_Flag[]={\n");
				for (i=0; i<DrvSetting_Skip_Flag_item_Max; i++) {
					//for (j=0; j<VIP_QUALITY_FUNCTION_TOTAL_CHECK; j++) {
						printk("%x ", m_pVipTable->DrvSetting_Skip_Flag[i]);
					//}
					//printk("\n");
				}
				printk("} end\n");
				#endif
			}
		}
		printk("%s %d\n", __FUNCTION__, __LINE__);
		break;

		case VPQ_EXTERN_IOC_SET_PIC_MODE_DATA:
		{
			extern PIC_MODE_DATA*  m_picModeTable;
			if (copy_from_user(m_picModeTable, (int __user *)arg, sizeof(PIC_MODE_DATA))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_PIC_MODE_DATA fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_PIC_MODE_DATA success\n");
				ret = 0;
				#if 1
				printk("m_picModeTable={\n");
				printk("%x %x %x \n", m_picModeTable->picMode[PICTURE_MODE_USER].Brightness, m_picModeTable->picMode[PICTURE_MODE_USER].Contrast, m_picModeTable->picMode[PICTURE_MODE_USER].Saturation);
				printk("%x %x %x \n", m_picModeTable->picMode[PICTURE_MODE_VIVID].Brightness, m_picModeTable->picMode[PICTURE_MODE_VIVID].Contrast, m_picModeTable->picMode[PICTURE_MODE_VIVID].Saturation);
				printk("%x %x %x \n", m_picModeTable->picMode[PICTURE_MODE_STD].Brightness, m_picModeTable->picMode[PICTURE_MODE_STD].Contrast, m_picModeTable->picMode[PICTURE_MODE_STD].Saturation);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_defaultPictureModeSet:
		{
			extern SLR_PICTURE_MODE_DATA  m_defaultPictureModeSet[];
			if (copy_from_user(&m_defaultPictureModeSet, (int __user *)arg, sizeof(SLR_PICTURE_MODE_DATA)*7)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_defaultPictureModeSet fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_defaultPictureModeSet success\n");
				ret = 0;
				#if 1
				printk("m_defaultPictureModeSet={\n");
				printk("%x %x %x \n", m_defaultPictureModeSet[PICTURE_MODE_USER].Brightness, m_defaultPictureModeSet[PICTURE_MODE_USER].Contrast, m_defaultPictureModeSet[PICTURE_MODE_USER].Saturation);
				printk("%x %x %x \n", m_defaultPictureModeSet[PICTURE_MODE_VIVID].Brightness, m_defaultPictureModeSet[PICTURE_MODE_VIVID].Contrast, m_defaultPictureModeSet[PICTURE_MODE_VIVID].Saturation);
				printk("%x %x %x \n", m_defaultPictureModeSet[PICTURE_MODE_GAME].Brightness, m_defaultPictureModeSet[PICTURE_MODE_GAME].Contrast, m_defaultPictureModeSet[PICTURE_MODE_GAME].Saturation);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_DolbyHDRPictureModeSet:
		{
			extern SLR_PICTURE_MODE_DATA  m_DolbyHDRPictureModeSet[];
			if (copy_from_user(&m_DolbyHDRPictureModeSet, (int __user *)arg, sizeof(SLR_PICTURE_MODE_DATA)*7)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_DolbyHDRPictureModeSet fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_PIC_MODE_DATA_DolbyHDRPictureModeSet success\n");
				ret = 0;
				#if 1
				printk("m_DolbyHDRPictureModeSet={\n");
				printk("%x %x %x \n", m_DolbyHDRPictureModeSet[PICTURE_MODE_USER].Brightness, m_DolbyHDRPictureModeSet[PICTURE_MODE_USER].Contrast, m_DolbyHDRPictureModeSet[PICTURE_MODE_USER].Saturation);
				printk("%x %x %x \n", m_DolbyHDRPictureModeSet[PICTURE_MODE_VIVID].Brightness, m_DolbyHDRPictureModeSet[PICTURE_MODE_VIVID].Contrast, m_DolbyHDRPictureModeSet[PICTURE_MODE_VIVID].Saturation);
				printk("%x %x %x \n", m_DolbyHDRPictureModeSet[PICTURE_MODE_STD].Brightness, m_DolbyHDRPictureModeSet[PICTURE_MODE_STD].Contrast, m_DolbyHDRPictureModeSet[PICTURE_MODE_STD].Saturation);
				printk("} end\n");
				#endif
			}
		}
		break;




		case VPQ_EXTERN_IOC_SET_StructColorDataType:
		{
			extern StructColorDataType*  m_colorDataTable;
			if (copy_from_user(m_colorDataTable, (int __user *)arg, sizeof(StructColorDataType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataType fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataType success\n");
				ret = 0;
				#if 1
				printk("m_colorDataTable={\n");
				printk("%x %x %x ", m_colorDataTable->MBPeaking, m_colorDataTable->Intensity, m_colorDataTable->Gamma);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataType_defaultSDColorData:
		{
			extern StructColorDataType  m_defaultSDColorData;
			if (copy_from_user(&m_defaultSDColorData, (int __user *)arg, sizeof(StructColorDataType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataType_defaultSDColorData fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataType_defaultSDColorData success\n");
				ret = 0;
				#if 1
				printk("m_defaultSDColorData={\n");
				printk("%x %x %x ", m_defaultSDColorData.MBPeaking, m_defaultSDColorData.Intensity, m_defaultSDColorData.Gamma);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataType_defaultHDColorData:
		{
			extern StructColorDataType  m_defaultHDColorData;
			if (copy_from_user(&m_defaultHDColorData, (int __user *)arg, sizeof(StructColorDataType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataType_defaultHDColorData fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataType_defaultHDColorData success\n");
				ret = 0;
				#if 1
				printk("m_defaultHDColorData={\n");
				printk("%x %x %x ", m_defaultHDColorData.MBPeaking, m_defaultHDColorData.Intensity, m_defaultHDColorData.Gamma);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA:
		{
			extern COLOR_TEMP_DATA*  m_colorTempData;
			if (copy_from_user(m_colorTempData, (int __user *)arg, sizeof(COLOR_TEMP_DATA))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA success\n");
				ret = 0;
				#if 1
				printk("m_colorTempData={\n");
				printk("%x %x %x \n", m_colorTempData->colorTempData[SLR_COLORTEMP_USER].R_val, m_colorTempData->colorTempData[SLR_COLORTEMP_USER].G_val, m_colorTempData->colorTempData[SLR_COLORTEMP_USER].B_val);
				printk("%x %x %x \n", m_colorTempData->colorTempData[SLR_COLORTEMP_NORMAL].R_val, m_colorTempData->colorTempData[SLR_COLORTEMP_NORMAL].G_val, m_colorTempData->colorTempData[SLR_COLORTEMP_NORMAL].B_val);
				printk("%x %x %x \n", m_colorTempData->colorTempData[SLR_COLORTEMP_WARMER].R_val, m_colorTempData->colorTempData[SLR_COLORTEMP_WARMER].G_val, m_colorTempData->colorTempData[SLR_COLORTEMP_WARMER].B_val);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA_defColorTempSet:
		{
			extern SLR_COLORTEMP_DATA  m_defColorTempSet[];
			if (copy_from_user(&m_defColorTempSet, (int __user *)arg, sizeof(SLR_COLORTEMP_DATA)*SLR_COLORTEMP_MAX_NUM)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA_defColorTempSet fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_COLOR_TEMP_DATA_defColorTempSet success\n");
				ret = 0;
				#if 1
				printk("m_defColorTempSet={\n");
				printk("%x %x %x \n", m_defColorTempSet[SLR_COLORTEMP_USER].R_val, m_defColorTempSet[SLR_COLORTEMP_USER].G_val, m_defColorTempSet[SLR_COLORTEMP_USER].B_val);
				printk("%x %x %x \n", m_defColorTempSet[SLR_COLORTEMP_NORMAL].R_val, m_defColorTempSet[SLR_COLORTEMP_NORMAL].G_val, m_defColorTempSet[SLR_COLORTEMP_NORMAL].B_val);
				printk("%x %x %x \n", m_defColorTempSet[SLR_COLORTEMP_WARMER].R_val, m_defColorTempSet[SLR_COLORTEMP_WARMER].G_val, m_defColorTempSet[SLR_COLORTEMP_WARMER].B_val);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType:
		{
			extern StructColorDataFacModeType* m_colorFacModeTable;
			if (copy_from_user(m_colorFacModeTable, (int __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType success\n");
				ret = 0;
				#if 1
				printk("m_colorFacModeTable={\n");
				printk("%x %x %x ", m_colorFacModeTable->Brightness_0, m_colorFacModeTable->Brightness_50, m_colorFacModeTable->Brightness_100);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_defaultColorFacMode:
		{
			extern StructColorDataFacModeType m_defaultColorFacMode;
			if (copy_from_user(&m_defaultColorFacMode, (int __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_defaultColorFacMode fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_defaultColorFacMode success\n");
				ret = 0;
				#if 1
				printk("m_defaultColorFacMode={\n");
				printk("%x %x %x ", m_defaultColorFacMode.Brightness_0, m_defaultColorFacMode.Brightness_50, m_defaultColorFacMode.Brightness_100);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_AvColorFacMode:
		{
			extern StructColorDataFacModeType m_AvColorFacMode;
			if (copy_from_user(&m_AvColorFacMode, (int __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_AvColorFacMode fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_AvColorFacMode success\n");
				ret = 0;
				#if 1
				printk("m_AvColorFacMode={\n");
				printk("%x %x %x ", m_AvColorFacMode.Brightness_0, m_AvColorFacMode.Brightness_50, m_AvColorFacMode.Brightness_100);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_YppColorFacMode:
		{
			extern StructColorDataFacModeType m_YppColorFacMode;
			if (copy_from_user(&m_YppColorFacMode, (int __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_YppColorFacMode fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_YppColorFacMode success\n");
				ret = 0;
				#if 1
				printk("m_YppColorFacMode={\n");
				printk("%x %x %x ", m_YppColorFacMode.Brightness_0, m_YppColorFacMode.Brightness_50, m_YppColorFacMode.Brightness_100);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_VgaColorFacMode:
		{
			extern StructColorDataFacModeType m_VgaColorFacMode;
			if (copy_from_user(&m_VgaColorFacMode, (int __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_VgaColorFacMode fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_VgaColorFacMode success\n");
				ret = 0;
				#if 1
				printk("m_VgaColorFacMode={\n");
				printk("%x %x %x ", m_VgaColorFacMode.Brightness_0, m_VgaColorFacMode.Brightness_50, m_VgaColorFacMode.Brightness_100);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiColorFacMode:
		{
			extern StructColorDataFacModeType m_HdmiColorFacMode;
			if (copy_from_user(&m_HdmiColorFacMode, (int __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiColorFacMode fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiColorFacMode success\n");
				ret = 0;
				#if 1
				printk("m_HdmiColorFacMode={\n");
				printk("%x %x %x ", m_HdmiColorFacMode.Brightness_0, m_HdmiColorFacMode.Brightness_50, m_HdmiColorFacMode.Brightness_100);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiSDColorFacMode:
		{
			extern StructColorDataFacModeType m_HdmiSDColorFacMode;
			if (copy_from_user(&m_HdmiSDColorFacMode, (int __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiSDColorFacMode fail\n");
				ret = -1;
				break;
			} else {
				rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacModeType_HdmiSDColorFacMode success\n");
				ret = 0;
				#if 1
				printk("m_HdmiSDColorFacMode={\n");
				printk("%x %x %x ", m_HdmiSDColorFacMode.Brightness_0, m_HdmiSDColorFacMode.Brightness_50, m_HdmiSDColorFacMode.Brightness_100);
				printk("} end\n");
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_CUR_SRC_FMT:
		{
			printk("VPQ_EXTERN_IOC_GET_CUR_SRC_FMT\n");
			srcfmt = Scaler_InputSrcFormat(Scaler_color_get_pq_src_idx());
			if (copy_to_user((void __user *)arg, (void *)&srcfmt, sizeof(UINT32))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_CUR_SRC_FMT2 fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_GET_VIP_SRC_TIMING:
		{
			printk("VPQ_EXTERN_IOC_GET_VIP_SRC_TIMING\n");
			vipsource = fwif_vip_source_check(3, NOT_BY_DISPLAY);
			if (copy_to_user((void __user *)arg, (void *)&vipsource, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_VIP_SRC_TIMING fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_SET_StructColorDataFacMode_EXTERN:
		{
			extern unsigned char g_bUseMiddleWareOSDmap; //for Driver Base MiddleWare OSD map
			extern StructColorDataFacModeType g_curColorFacTableEx; //for Driver Base MiddleWare OSD map

			if (copy_from_user(&g_curColorFacTableEx, (void __user *)arg, sizeof(StructColorDataFacModeType))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacMode_EXTERN fail\n");
				ret = -1;
				break;
			} else {
				//rtd_printk(KERN_DEBUG, TAG_NAME, "kernel copy VPQ_EXTERN_IOC_SET_StructColorDataFacMode_EXTERN success\n");
				g_bUseMiddleWareOSDmap = 1;
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_VIP_SRC_RESYNC:
		{
			unsigned int vip_src_resync = 0;
			vip_src_resync = Scaler_Get_VIP_src_resync_flag();
			if (copy_to_user((void __user *)arg, (void *)&vip_src_resync, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_VIP_SRC_RESYNC fail\n");
				ret = -1;
			} else {
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_VIP_SRC_RESYNC:
		{
			Scaler_Set_PicMode_VIP_src(fwif_vip_source_check(3, NOT_BY_DISPLAY));
		}
		break;

		case VPQ_EXTERN_IOC_SET_VIP_SET_VIP_HANDLER_RESET:
		{
			rtd_printk(KERN_INFO, TAG_NAME, "VPQ_EXTERN_IOC_SET_VIP_SET_VIP_HANDLER_RESET\n");
			ret = Scaler_Set_VIP_HANDLER_RESET();
			if (ret) {
				ret = 0;
				printk("Scaler_Set_VIP_HANDLER_RESET success\n");
			}
			else {
				ret = -1;
				printk("Scaler_Set_VIP_HANDLER_RESET fail\n");
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_BRIGHTNESS:
		{
			printk("VPQ_EXTERN_IOC_GET_BRIGHTNESS\n");
			brightness = (unsigned int)Scaler_GetBrightness();
			if (copy_to_user((void __user *)arg, (void *)&brightness, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_BRIGHTNESS fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;
		case VPQ_EXTERN_IOC_SET_BRIGHTNESS:
		{			
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {
				ret = -1;
			} else {
				ret = 0;
				AI_PQ_UI_color.osd_brightness=args;
				printk("VPQ_EXTERN_IOC_SET_BRIGHTNESS=%d,ai=%d\n",args,AI_PQ_UI_color.osd_brightness);
				Scaler_SetBrightness((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_CONTRAST:
		{
			printk("VPQ_EXTERN_IOC_GET_CONTRAST\n");
			contrast = (unsigned int)Scaler_GetContrast();
			if (copy_to_user((void __user *)arg, (void *)&contrast, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_CONTRAST fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_CONTRAST:
		{			
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				AI_PQ_UI_color.osd_contrast=args;
				printk("VPQ_EXTERN_IOC_SET_CONTRAST=%d,ai=%d\n",args,AI_PQ_UI_color.osd_contrast);
				Scaler_SetContrast((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_SATURATION:
		{
			printk("VPQ_EXTERN_IOC_GET_SATURATION\n");
			saturation = (unsigned int)Scaler_GetSaturation();
			if (copy_to_user((void __user *)arg, (void *)&saturation, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_SATURATION fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_SATURATION:
		{
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				AI_PQ_UI_color.osd_saturation=args;
				printk("VPQ_EXTERN_IOC_SET_SATURATION=%d,ai=%d\n",args,AI_PQ_UI_color.osd_saturation);
				Scaler_SetSaturation((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_HUE:
		{
			printk("VPQ_EXTERN_IOC_GET_HUE\n");
			hue = (unsigned int)Scaler_GetHue();
			if (copy_to_user((void __user *)arg, (void *)&hue, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_HUE fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_SET_HUE:
		{
			printk("VPQ_EXTERN_IOC_SET_HUE\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetHue((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_NR:
		{
			printk("VPQ_EXTERN_IOC_GET_NR\n");
			nr = (unsigned int)Scaler_GetDNR();
			if (copy_to_user((void __user *)arg, (void *)&nr, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_NR fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_NR:
		{
			printk("VPQ_EXTERN_IOC_SET_NR\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetDNR((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_SHARPNESS:
		{
			printk("VPQ_EXTERN_IOC_GET_SHARPNESS\n");
			sharpness = (unsigned int)Scaler_GetSharpness();
			if (copy_to_user((void __user *)arg, (void *)&sharpness, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_SHARPNESS fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_SHARPNESS_EXTERN:
		{
			printk("VPQ_EXTERN_IOC_SET_SHARPNESS_EXTERN\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetSharpness((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_DE_BLOCKING:
		{
			printk("VPQ_EXTERN_IOC_GET_DE_BLOCKING\n");
			dbLevel = (TV001_LEVEL_E)Scaler_GetMPEGNR();
			if (copy_to_user((void __user *)arg, (void *)&dbLevel, sizeof(TV001_LEVEL_E))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_DE_BLOCKING fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_DE_BLOCKING:
		{
			printk("VPQ_EXTERN_IOC_SET_DE_BLOCKING\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetMPEGNR((unsigned char)args,0);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_COLOR_TEMP:
		{
			printk("VPQ_EXTERN_IOC_GET_COLOR_TEMP\n");

			if (Scaler_GetColorTemp_level_type(&colorTemp) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetColorTemp_level_type fail\n");
				ret = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&colorTemp, sizeof(TV001_COLORTEMP_E))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_COLOR_TEMP fail\n");
					ret = -1;
				} else
					ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_COLOR_TEMP_EXTERN:
		{
			
			if (copy_from_user(&color_temp_data_s,  (int __user *)arg,sizeof(TV001_COLOR_TEMP_DATA_S))) {

				ret = -1;
			} else {
				ret = 0;
				//Scaler_SetColorTemp_level_type((TV001_COLORTEMP_E)color_temp_data_s);
				Scaler_SetColorTempData((TV001_COLOR_TEMP_DATA_S*) &color_temp_data_s);
				AI_PQ_UI_color.osd_colortempcontrast_r=color_temp_data_s.redGain;
				AI_PQ_UI_color.osd_colortempcontrast_g=color_temp_data_s.greenGain;
				AI_PQ_UI_color.osd_colortempcontrast_b=color_temp_data_s.blueGain;
				
				printk("VPQ_EXTERN_IOC_SET_COLOR_TEMP_EXTERN:%d,%d,%d\n",color_temp_data_s.redGain,color_temp_data_s.greenGain,color_temp_data_s.blueGain);
				printk("ai=%d,%d,%d\n",AI_PQ_UI_color.osd_colortempcontrast_r,AI_PQ_UI_color.osd_colortempcontrast_g,AI_PQ_UI_color.osd_colortempcontrast_b);

				if(fwif_VIP_get_Project_ID() == VIP_Project_ID_TV030)
					fwif_color_set_OutputGamma_System();

				#if defined(CONFIG_RTK_AI_DRV)
				memcpy(&vpqex_color_temp, &color_temp_data_s, sizeof(TV001_COLOR_TEMP_DATA_S));
				#endif
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_BACKLIGHT:
		{
			printk("VPQ_EXTERN_IOC_GET_BACKLIGHT\n");
			backlight = (unsigned int)Scaler_GetBacklight();
			if (copy_to_user((void __user *)arg, (void *)&backlight, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_BACKLIGHT fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_BACKLIGHT:
		{
			printk("VPQ_EXTERN_IOC_SET_BACKLIGHT\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetBackLight((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_PANEL_BL:
		{
			printk("VPQ_EXTERN_IOC_SET_PANEL_BL\n");
		}
		break;
		case VPQ_EXTERN_IOC_SET_GAMMA:
		{
			printk("VPQ_EXTERN_IOC_SET_GAMMA\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetGamma((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_PQ_MODULE:
		{
			printk("VPQ_EXTERN_IOC_GET_PQ_MODULE\n");
			if (copy_from_user(&PQModule_T,  (int __user *)arg,sizeof(RTK_PQModule_T))) {

				ret = -1;
			} else {
				ret = 0;
				if (Scaler_GetPQModule((TV001_PQ_MODULE_E) PQModule_T.PQModule,(unsigned char *) &PQModule_T.onOff) == FALSE) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetPQModule fail\n");
					ret = -1;
				} else {
					if (copy_to_user((void __user *)arg, (void *)&PQModule_T, sizeof(RTK_PQModule_T))) {
						rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_MODULE fail\n");
						ret = -1;
					} else
						ret = 0;
				}
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_PQ_MODULE:
		{
			printk("VPQ_EXTERN_IOC_SET_PQ_MODULE\n");
			//unsigned int args = 0;
			if (copy_from_user(&PQModule_T,  (int __user *)arg,sizeof(RTK_PQModule_T))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetPQModule((TV001_PQ_MODULE_E) PQModule_T.PQModule,(unsigned char)PQModule_T.onOff);
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_DEMO:
		{
			printk("VPQ_EXTERN_IOC_SET_DEMO\n");
			//unsigned int args = 0;
			if (copy_from_user(&DEMO_MODE_T,  (int __user *)arg,sizeof(RTK_DEMO_MODE_T))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetDemoMode((TV001_DEMO_MODE_E) DEMO_MODE_T.DEMO_MODE,(unsigned char)DEMO_MODE_T.onOff);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_DEBUG_MODE:
		{
			printk("VPQ_EXTERN_IOC_GET_DEBUG_MODE\n");
		}
		break;
		case VPQ_EXTERN_IOC_SET_DEBUG_MODE:
		{
			printk("VPQ_EXTERN_IOC_SET_DEBUG_MODE\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				RBswap_en=args;
				printk("RBswap_en=%d\n",RBswap_en);

			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_HISTOGRAM:
		{
			//printk("VPQ_EXTERN_IOC_GET_HISTOGRAM\n");
			if (fwif_color_get_HistoData_Countbins(TV006_VPQ_chrm_bin, &(HistoData_bin[0])) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Countbins fail\n");
				ret = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&HistoData_bin[0], sizeof(HistoData_bin))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_IOC_GET_HistoData_Countbins fail\n");
					ret = -1;
				} else
					ret = 0;
			}

		}
		break;
		case VPQ_EXTERN_IOC_SET_BLACK_PATTERN_OUTPUT:
		{
			printk("VPQ_EXTERN_IOC_SET_BLACK_PATTERN_OUTPUT\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetBlackPatternOutput((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_WHITE_PATTERN_OUTPUT:
		{
			printk("VPQ_EXTERN_IOC_SET_WHITE_PATTERN_OUTPUT\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetWhitePatternOutput((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_SRC_HDR_INFO:
		{
			printk("VPQ_EXTERN_IOC_GET_SRC_HDR_INFO\n");

			if (Scaler_GetSrcHdrInfo(&GammaType) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetSrcHdrInfo fail\n");
				ret = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&GammaType, sizeof(unsigned int))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_SRC_HDR_INFO fail\n");
					ret = -1;
				} else
					ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_SDR2HDR:
		{
			printk("VPQ_EXTERN_IOC_GET_SDR2HDR\n");

			if (Scaler_GetSDR2HDR(&onoff) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetSDR2HDR fail\n");
				ret = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&onoff, sizeof(unsigned char))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_SDR2HDR fail\n");
					ret = -1;
				} else
					ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_SDR2HDR:
		{
			printk("VPQ_EXTERN_IOC_SET_SDR2HDR\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetSDR2HDR((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_HDR_TYPE:
		{
			//printk("VPQ_EXTERN_IOC_GET_HDR_TYPE\n");

			if (Scaler_GetHdrType(&HdrType) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetHdrType fail\n");
				ret = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&HdrType, sizeof(unsigned int))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_HDR_TYPE fail\n");
					ret = -1;
				} else
					ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_DCI_TYPE:
		{
			printk("VPQ_EXTERN_IOC_SET_DCI_TYPE\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetDCC_Table((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_DOLBY_HDR_PIC_MODE:
		{
			printk("VPQ_EXTERN_IOC_GET_DOLBY_HDR_PIC_MODE\n");
		}
		break;
		case VPQ_EXTERN_IOC_SET_DOLBY_HDR_PIC_MODE:
		{
			printk("VPQ_EXTERN_IOC_SET_DOLBY_HDR_PIC_MODE\n");
		}
		break;


		case VPQ_EXTERN_IOC_GET_HDR10_ENABLE:
		{
			printk("VPQ_EXTERN_IOC_GET_HDR10_ENABLE\n");

			if (Scaler_GetHdr10Enable(&bEnable) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetHdr10Enable fail\n");
				ret = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&bEnable, sizeof(unsigned char))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_HDR10_ENABLE fail\n");
					ret = -1;
				} else
					ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_HDR10_ENABLE:
		{
			printk("VPQ_EXTERN_IOC_SET_HDR10_ENABLE\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetHdr10Enable((unsigned char)args);
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_DOLBYHDR_ENABLE:
		{
			printk("VPQ_EXTERN_IOC_GET_HDR10_ENABLE\n");

			if (Scaler_GetDOLBYHDREnable(&bEnable) == FALSE) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel Scaler_GetDOLBYHDREnable fail\n");
				ret = -1;
			} else {
				if (copy_to_user((void __user *)arg, (void *)&bEnable, sizeof(unsigned char))) {
					rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_DOLBYHDR_ENABLE fail\n");
					ret = -1;
				} else
					ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_DOLBYHDR_ENABLE:
		{
			printk("VPQ_EXTERN_IOC_SET_DOLBYHDR_ENABLE\n");
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetDOLBYHDREnable((unsigned char)args);
			}
		}
		break;


		case VPQ_EXTERN_IOC_SET_DREAM_PANEL_LOG_ENABLE:
		{
			printk("VPQ_EXTERN_IOC_SET_DREAM_PANEL_LOG_ENABLE\n");
		}
		break;
		case VPQ_EXTERN_IOC_GET_DREAM_PANEL_BACKLIGHT:
		{
			printk("VPQ_EXTERN_IOC_GET_DREAM_PANEL_BACKLIGHT\n");
		}
		break;
		case VPQ_EXTERN_IOC_SET_DREAM_PANEL_BACKLIGHT:
		{
			printk("VPQ_EXTERN_IOC_SET_DREAM_PANEL_BACKLIGHT\n");
		}
		break;
		case VPQ_EXTERN_IOC_GET_DCC_MODE:
		{
			dcc_mode = (unsigned int)Scaler_GetDCC_Mode();
			if (copy_to_user((void __user *)arg, (void *)&dcc_mode, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_DCC_MODE fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_DCC_MODE:
		{
			if (copy_from_user(&dcc_mode,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				#ifdef ENABLE_DE_CONTOUR_I2R
				if(Eng_Skyworth_Decont_Pattern)
					return ret;
				#endif
				printk("dynamic contrast level=%d\n",dcc_mode);
				aipq_DynamicContrastLevel=dcc_mode;
				Scaler_SetDCC_Mode(dcc_mode&0xff);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_ICM_TBL_IDX:
		{
			icm_table_idx = Scaler_GetICMTable();
			if (copy_to_user((void __user *)arg, (void *)&icm_table_idx, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_ICM_TBL_IDX fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;
		case VPQ_EXTERN_IOC_SET_ICM_TBL_IDX:
		{
			if (copy_from_user(&icm_table_idx,  (int __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_ICM_TBL_IDX fail\n");
				ret = -1;
			} else {
				Scaler_SetICMTable(icm_table_idx&0xff);
				ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_FILM_MODE:
		{
			film_mode_enable = film_mode.film_status?1:0;
			if (copy_to_user((void __user *)arg, (void *)&film_mode_enable, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_FILM_MODE fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;
		case VPQ_EXTERN_IOC_SET_FILM_MODE:
		{
			if (copy_from_user(&film_mode_enable,  (int __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_FILM_MODE fail\n");
				ret = -1;
			} else {
				film_mode.film_status = film_mode_enable?28:0;
				down(get_DI_semaphore());
				drvif_module_film_mode((DRV_film_mode *) &film_mode);
				up(get_DI_semaphore());
				ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_HDMI_CSC_DATA_RANGE_MODE:
		{
			range_mode = Scaler_GetHDMI_CSC_DataRange_Mode();
			if (copy_to_user((void __user *)arg, (void *)&range_mode, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_HDMI_CSC_DATA_RANGE_MODE fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_SET_HDMI_CSC_DATA_RANGE_MODE:
		{
			if (copy_from_user(&range_mode,  (int __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_FILM_MODE fail\n");
				ret = -1;
			} else {
				Scaler_SetHDMI_CSC_DataRange_Mode((HDMI_CSC_DATA_RANGE_MODE_T)range_mode);
				Scaler_SetDataFormatHandler();
				ret = 0;
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_HDR_FORCE_MODE:
		{
			if (copy_from_user(&hdr_force_mode,  (int __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_HDR_FORCE_MODE fail\n");
				ret = -1;
			} else {
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_CINEMA_PIC_MODE:
		{
			if (copy_from_user(&cinema_pic_mode,  (int __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_CINEMA_PIC_MODE fail\n");
				ret = -1;
			} else {
				Scaler_Set_CinemaMode_PQ(cinema_pic_mode);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_PQ_BYPASS_LV:
		{
			if (copy_from_user(&pq_bypass_lv,  (int __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_PQ_BYPASS_LV fail\n");
				ret = -1;
			} else {
				g_pq_bypass_lv = pq_bypass_lv;
				if (pq_bypass_lv < VIP_PQ_ByPass_TBL_Max)
					Scaler_color_Set_PQ_ByPass_Lv(pq_bypass_lv);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_PQ_SOURCE_TYPE:
		{
			unsigned int pq_source_from_ap = 0;
			if (copy_from_user(&pq_source_from_ap,  (int __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_PQ_SOURCE_TYPE fail\n");
				ret = -1;
			} else {
				fwif_color_set_PQ_SOURCE_TYPE_From_AP((unsigned char)pq_source_from_ap);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENGMENU:
		{
			printk("VPQ_EXTERN_IOC_GET_PQ_Engineer_menu\n");
			ENGMENU = Scaler_Get_ENGMENU();
			if (copy_to_user((void __user *)arg, (void *)ENGMENU, sizeof(HAL_VPQ_ENG_STRUCT))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_Engineer_menu fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENGMENU_size:
		{
			printk("VPQ_EXTERN_IOC_GET_PQ_Engineer_menu_size\n");
			ENGMENU_size = Scaler_Get_ENGMENU_size();
			if (copy_to_user((void __user *)arg, (void *)ENGMENU_size, sizeof(HAL_VPQ_ENG_SIZE))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_Engineer_menu_size fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENGMENU_item:
		{
			printk("VPQ_EXTERN_IOC_GET_PQ_Engineer_menu\n");
			ENGMENU = Scaler_Get_ENGMENU();
			if (copy_to_user((void __user *)arg, (ENGMENU->item), sizeof(HAL_VPQ_ENG_ITEM_STRUCT)*HAL_VPQ_ENG_ITEM_MAX_NUM)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_Engineer_menu fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENGMENU_ID:
		{
			printk("VPQ_EXTERN_IOC_GET_PQ_Engineer_menu\n");
			ENGMENU = Scaler_Get_ENGMENU();
			if (copy_to_user((void __user *)arg, (ENGMENU->ID), sizeof(HAL_VPQ_ENG_ID_STRUCT)*HAL_VPQ_ENG_ID_MAX_NUM)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_Engineer_menu fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENG_ID:
		{
			if (copy_from_user(&ENG_ID,  (int __user *)arg,sizeof(HAL_VPQ_ENG_ID))) {
				ret = -1;
			} else {
				ret = 0;
				ENG_ID.ID_value= Scaler_Get_ENGMENU_ID((unsigned int)ENG_ID.ID);
			}
			printk("VPQ_EXTERN_IOC_GET_PQ_ENG_ID\n");
			if (copy_to_user((void __user *)arg, (void *)(&ENG_ID), sizeof(HAL_VPQ_ENG_ID))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_ENG_ID fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;

		case VPQ_EXTERN_IOC_SET_PQ_ENG_ID:
		{
			if (copy_from_user(&ENG_ID,  (int __user *)arg,sizeof(HAL_VPQ_ENG_ID))) {
				ret = -1;
			} else {
				ret = 0;
				Scaler_Set_ENGMENU_ID(ENG_ID.ID, ENG_ID.ID_value);
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENG_TWOLAYER_MENU_item:
		{
			printk("VPQ_EXTERN_IOC_GET_PQ_Engineer_TWOLAYER_menu\n");
			ENG_TWOLAYER_MENU = Scaler_Get_ENG_TWOLAYER_MENU();
			if (copy_to_user((void __user *)arg, (ENG_TWOLAYER_MENU->item), sizeof(HAL_VPQ_ENG_ITEM_TWOLAYER_STRUCT)*HAL_VPQ_ENG_ITEM_MAX_NUM)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_Engineer_menu fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENG_TWOLAYER_MENU_ID:
		{
			printk("VPQ_EXTERN_IOC_GET_PQ_Engineer_TWOLAYER_menu\n");
			ENG_TWOLAYER_MENU = Scaler_Get_ENG_TWOLAYER_MENU();
			if (copy_to_user((void __user *)arg, (ENG_TWOLAYER_MENU->ID), sizeof(HAL_VPQ_ENG_ID_STRUCT)*HAL_VPQ_ENG_ID_MAX_NUM)) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_Engineer_TWOLAYER_menu fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_GET_PQ_ENG_TWOLAYER_ID:
		{
			if (copy_from_user(&ENG_TWOLAYER_ID,  (int __user *)arg,sizeof(HAL_VPQ_ENG_TWOLAYER_ID))) {
				ret = -1;
			} else {
				ret = 0;
				ENG_TWOLAYER_ID.ID_value= Scaler_Get_ENG_TWOLAYER_MENU_ID((unsigned int)ENG_TWOLAYER_ID.ITEM,(unsigned int)ENG_TWOLAYER_ID.ID);
			}
			printk("VPQ_EXTERN_IOC_GET_PQ_TWOLAYER_ENG_ID\n");
			if (copy_to_user((void __user *)arg, (void *)(&ENG_TWOLAYER_ID), sizeof(HAL_VPQ_ENG_TWOLAYER_ID))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_PQ_ENG_TWOLAYER_ID fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;

		case VPQ_EXTERN_IOC_SET_PQ_ENG_TWOLAYER_ID:
		{
			if (copy_from_user(&ENG_TWOLAYER_ID,  (int __user *)arg,sizeof(HAL_VPQ_ENG_TWOLAYER_ID))) {
				ret = -1;
			} else {
				ret = 0;
				Scaler_Set_ENG_TWOLAYER_MENU_ID(ENG_TWOLAYER_ID.ITEM,ENG_TWOLAYER_ID.ID, ENG_TWOLAYER_ID.ID_value);
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_EXT_FUN_EN:
		{
			if (copy_from_user(&iEn,  (void __user *)arg,sizeof(unsigned int))) {
				ret = -1;
			} else {
				g_tv002_demo_fun_flag = iEn&0xff;
				scalerVIP_access_tv002_style_demo_flag(1, &g_tv002_demo_fun_flag);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_BLE:
		{
			if (copy_from_user(&level,  (void __user *)arg,sizeof(int))) {
				ret = -1;
			} else {
				Scaler_set_BLE(level&0xff);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_SGAMMA:
		{
			if (copy_from_user(&level,  (void __user *)arg,sizeof(int))) {
				ret = -1;
			} else {
				Scaler_set_sGamma(level&0xff);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_MAGIC_GAMMA:
		{

			if (copy_from_user(&magic_gamma_data,  (void __user *)arg,sizeof(VIP_MAGIC_GAMMA_Curve_Driver_Data))) {
				ret = -1;
			} else {
				memcpy(&g_MagicGammaDriverDataSave, &magic_gamma_data, sizeof(VIP_MAGIC_GAMMA_Curve_Driver_Data));
				fwif_color_set_gamma_from_MagicGamma_MiddleWare();
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_TV002_SR:
		{
			sr_data.mode = Scaler_get_Clarity_RealityCreation();
			sr_data.value = Scaler_get_Clarity_Resolution();
			if (copy_to_user((void __user *)arg, (void *)&sr_data, sizeof(RTK_TV002_SR_T))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_TV002_SR fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_SR:
		{
			if (copy_from_user(&sr_data,  (void __user *)arg,sizeof(RTK_TV002_SR_T))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_SR fail\n");
				ret = -1;
			} else {
				Scaler_set_Clarity_RealityCreation(sr_data.mode);
				Scaler_set_Clarity_Resolution(sr_data.value);
				fwif_color_set_clarity_resolution();
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_TV002_LIVE_COLOUR:
		{
			live_colour = Scaler_get_LiveColor();
			if (copy_to_user((void __user *)arg, (void *)&live_colour, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_TV002_LIVE_COLOUR fail\n");
				ret = -1;
			} else {
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_LIVE_COLOUR:
		{
			if (copy_from_user(&live_colour,  (void __user *)arg,sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_LIVE_COLOUR fail\n");
				ret = -1;
			} else {
				Scaler_set_LiveColor(live_colour);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_TV002_MASTERED_4K:
		{
			mastered_4k = Scaler_get_Clarity_Mastered4K();
			if (copy_to_user((void __user *)arg, (void *)&mastered_4k, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_TV002_MASTERED_4K fail\n");
				ret = -1;
			} else {
				ret = 0;
			}
		}
		break;
#if 0
		case VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Enable:
		{
			if (copy_from_user(&level,  (void __user *)arg,sizeof(int))) {
				rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Enable fail\n");
				ret = -1;
			} else {
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Enable level=%d,\n", level);
				Scaler_set_Intelligent_Picture_Enable((unsigned char)(level&0xff));
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Optimisation:
		{
			if (copy_from_user(&level,  (void __user *)arg,sizeof(int))) {
				rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Optimisation fail\n");
				ret = -1;
			} else {
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Optimisation level=%d,\n", level);
				Scaler_set_Intelligent_Picture_Optimisation((unsigned char)(level&0xff));
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Signal_Lv_Indicator_ONOFF:
		{
			if (copy_from_user(&level,  (void __user *)arg,sizeof(int))) {
				rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Signal_Lv_Indicator_ONOFF fail\n");
				ret = -1;
			} else {
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_Intelligent_Pic_Signal_Lv_Indicator_ONOFF level=%d,\n", level);
				Scaler_set_Intelligent_Picture_Signal_Level_Indicator_ONOFF((unsigned char)(level&0xff));
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_TV002_Intelligent_Pic_Signal_Level:
		{
			//printk("VPQ_EXTERN_IOC_PQ_CMD_GET_GDBC_MODE\n");
			level = (int)Scaler_Intelligent_Picture_get_Intelligent_Picture_Signal_Level();
			if (copy_to_user((void __user *)arg, (void *)&level, sizeof(unsigned int))) {
				rtd_printk(KERN_EMERG, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_TV002_Intelligent_Pic_Signal_Level fail\n");
				ret = -1;
			} else {
				rtd_printk(KERN_INFO, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_TV002_Intelligent_Pic_Signal_Level level=%d,\n", level);
				ret = 0;
			}
		}
		break;
#endif
		case VPQ_EXTERN_IOC_SET_TV002_MASTERED_4K:
		{
			if (copy_from_user(&mastered_4k, (void __user *)arg, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_MASTERED_4K fail\n");
				ret = -1;
			} else {
				Scaler_set_Clarity_Mastered4K(mastered_4k);
				fwif_color_set_mastered_4k();
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_PROJECT_STYLE:
		{
			if (copy_from_user(&TV002_PROJECT_STYLE, (void __user *)arg, sizeof(unsigned char))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_PROJECT_STYLE fail\n");
				ret = -1;
			} else {
				Scaler_access_Project_TV002_Style(1, TV002_PROJECT_STYLE);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_DBC_POWER_SAVING_MODE:
		{
			if (copy_from_user(&TV002_DBC_POWER_SAVING_MODE, (void __user *)arg, sizeof(unsigned char))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_DBC_POWER_SAVING_MODE fail\n");
				ret = -1;
			} else {
				Scaler_set_DBC_POWER_Saving_Mode_TV002(TV002_DBC_POWER_SAVING_MODE);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_DBC_UI_BACKLIGHT:
		{
			if (copy_from_user(&TV002_DBC_UI_BACKLIGHT, (void __user *)arg, sizeof(unsigned char))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_DBC_UI_BACKLIGHT fail\n");
				ret = -1;
			} else {
				Scaler_set_DBC_UI_blacklight_Value_TV002(TV002_DBC_UI_BACKLIGHT);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_TV002_DBC_BACKLIGHT:
		{
			TV002_DBC_BACKLIGHT = Scaler_get_DBC_blacklight_Value_TV002();
			if (copy_to_user((void __user *)arg, (void *)&TV002_DBC_BACKLIGHT, sizeof(unsigned char))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_TV002_DBC_BACKLIGHT fail\n");
				ret = -1;
			} else {
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_TV002_UI_PICTURE_MODE:
		{
			if (copy_from_user(&TV002_UI_PICTURE_MODE, (void __user *)arg, sizeof(unsigned char))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_TV002_UI_PICTURE_MODE fail\n");
				ret = -1;
			} else {
				Scaler_set_UI_Picture_Mode_TV002(TV002_UI_PICTURE_MODE);
				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_PQ_SETGAMMA_TABLESIZE:
		{

			if (copy_from_user(&Gamma,  (int __user *)arg,sizeof(RTK_TableSize_Gamma))) {
				ret = -1;
			} else {
				fwif_color_gamma_encode_TableSize(&Gamma);
				fwif_set_gamma(1, 0, 0, 0);

				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_GET_GDBC_MODE:
		{
			printk("VPQ_EXTERN_IOC_PQ_CMD_GET_GDBC_MODE\n");
			dcr_mode = (unsigned int)Scaler_GetDcrMode();
			if (copy_to_user((void __user *)arg, (void *)&dcr_mode, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_DCC_MODE fail\n");
				ret = -1;
			} else
				ret = 0;

		}
		break;
		case VPQ_EXTERN_IOC_SET_GDBC_MODE:
		{
			//printk(KERN_NOTICE "VPQ_EXTERN_IOC_PQ_CMD_SET_GDBC_MODE\n");
			if (copy_from_user(&dcr_mode,  (int __user *)arg,sizeof(unsigned int))) {

				ret = -1;
			} else {
				ret = 0;
				Scaler_SetDcrMode(dcr_mode&0xff);
			}
		}
		break;
		case VPQ_EXTERN_IOC_GET_DCR_BACKLIGHT:
		{
			//printk(KERN_NOTICE "VPQ_EXTERN_IOC_GET_DCR_BACKLIGHT\n");
			DCR_backlight = (unsigned int)Scaler_Get_DCR_Backlight();
			if (copy_to_user((void __user *)arg, (void *)&DCR_backlight, sizeof(unsigned int))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_GET_BACKLIGHT fail\n");
				ret = -1;
			} else
				ret = 0;
		}
		break;
		case VPQ_EXTERN_IOC_Sync_PQ_table_bin_ENABLE:
		{
			unsigned int args = 0;
			rtd_printk(KERN_INFO, TAG_NAME, "VPQ_EXTERN_IOC_Sync_PQ_table_bin_ENABLE\n");
			if 	(copy_from_user((void *)&args, (const void __user *)arg, sizeof(unsigned char)))
			{
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_Sync_PQ_table_bin_ENABLE fail\n");
				ret = -1;
			} else {
				ret = 0;
				Scaler_Set_PQ_table_bin_En((unsigned char)args);
			}
		}
		break;
		case VPQ_EXTERN_IOC_SET_PANORAMA_TYPE:
		{
			//printk("VPQ_EXTERN_IOC_SET_PANORAMA_TYPE\n");
			unsigned int args = 0;
			if (copy_from_user(&args,  (int __user *)arg,sizeof(unsigned int))) {
				ret = -1;
			} else {
				Check_smooth_toggle_update_flag((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY));
				zoom_update_scaler_info_from_vo_smooth_toggle((SCALER_DISP_CHANNEL)Scaler_DispGetInputInfo(SLR_INPUT_DISPLAY));
				drvif_color_ultrazoom_config_scaling_up((TV030_RATIO_TYPE_E)args);
				IoReg_SetBits(SCALEUP_DM_UZU_DB_CTRL_reg, SCALEUP_DM_UZU_DB_CTRL_db_apply_mask);

				imd_smooth_main_double_buffer_apply(ZOOM_UZU);
				ret = 0;
			}
			//rtd_printk(KERN_ERR, TAG_NAME, "=======VPQ_EXTERN_IOC_SET_PANORAMA_TYPE ret= %d args=%d \n", ret,args);
		}
		break;
		case VPQ_EXTERN_IOC_SET_SPLIT_DEMO_TV030:
		{
			bool bOnOff;
			//printk("yuan,VPQ_EXTERN_IOC_SET_SPLIT_DEMO_TV030=%d\n",bOnOff);

			if (copy_from_user(&bOnOff, (int __user *)arg, sizeof(bool))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_SPLIT_DEMO_TV030 fail\n");
				ret = -1;
			} else {
				if (bOnOff == TRUE)
					Scaler_SetMagicPicture(SLR_MAGIC_STILLDEMO);
				else
					Scaler_SetMagicPicture(SLR_MAGIC_OFF);
			}
		}
		break;
		
		case VPQ_EXTERN_IOC_SET_COLORSPACE://HSI
		{
			//printk("[Kernel]VPQ_EXTERN_IOC_SET_COLORSPACE\n");
			_system_setting_info *VIP_system_info_structure_table = NULL;
			static unsigned char pre_colorspaceisNative=0;
			RTK_VPQ_COLORSPACE_INDEX ColoSpace_T;
			extern RTK_VPQ_COLORSPACE_INDEX ColoSpace_Index;
			extern unsigned char g_srgbForceUpdate;
			extern int D_3DLUT_Reseult[VIP_D_3D_LUT_SIZE][VIP_8VERTEX_RGB_MAX];
			extern int D_3DLUT_Data[VIP_D_3DLUT_NUM][VIP_D_3D_LUT_SIZE][VIP_8VERTEX_RGB_MAX];
			extern int D_3DLUT[VIP_D_3D_LUT_SIZE][VIP_8VERTEX_RGB_MAX];

			VIP_system_info_structure_table = (_system_setting_info *)Scaler_GetShareMemVirAddr(SCALERIOC_VIP_system_info_structure);

			if (copy_from_user(&ColoSpace_T,  (int __user *)arg,sizeof(RTK_VPQ_COLORSPACE_INDEX))) {
				ret = -1;
			} else {

				ColorSpaceMode = ColoSpace_T.mode;
				if(pre_colorspaceisNative==1)
					g_srgbForceUpdate=1;

				if(ColoSpace_T.lut_index ==0) //tcl default
					   memcpy(D_3DLUT_Reseult,D_3DLUT_Data[0],VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX * sizeof(UINT32));
				else if(ColoSpace_T.lut_index ==1) //CUSTOM
				       memcpy(D_3DLUT_Reseult,D_3DLUT_Data[1],VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX * sizeof(UINT32));
				else if(ColoSpace_T.lut_index ==2)//EXTEND
				       memcpy(D_3DLUT_Reseult,D_3DLUT_Data[2],VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX * sizeof(UINT32));
				else//rtk default
	     			   memcpy(D_3DLUT_Reseult,D_3DLUT,VIP_D_3D_LUT_SIZE * VIP_8VERTEX_RGB_MAX * sizeof(UINT32));

				//printk("yuan,HDR_flag=%d\n",VIP_system_info_structure_table ->HDR_flag);
				//printk("yuan,pre_colorspaceisNative=%d,g_srgbForceUpdate2=%d\n",pre_colorspaceisNative,g_srgbForceUpdate2);


				if(VIP_system_info_structure_table ->HDR_flag==0 || (VIP_system_info_structure_table ->HDR_flag ==HAL_VPQ_HDR_MODE_SDR_MAX_RGB)){
				if(ColoSpace_T.mode==0){//Color Space Mode=Auto
					drvif_color_D_3dLUT_Enable(0);
					fwif_color_set_sRGBMatrix();
				}
				else if(ColoSpace_T.mode==1){//Color Space Mode=Native
					fwif_color_D_LUT_By_DMA(0, 255, (unsigned int *)D_3DLUT_Reseult);
					drvif_color_D_3dLUT_Enable(1);
					fwif_color_set_color_mapping_enable(SLR_MAIN_DISPLAY, 0);//disable sRGB;//Scaler_Set_ColorSpace_InvGamma_sRGB_OFF();//Scaler_Set_ColorSpace_InvGamma_sRGB(0);
				}
				else if(ColoSpace_T.mode==2){//Color Space Mode=Custom
					Scaler_Set_ColorSpace_D_3dlutTBL(&ColoSpace_T);
					memcpy(&ColoSpace_Index,&ColoSpace_T,sizeof(RTK_VPQ_COLORSPACE_INDEX));
					drvif_color_D_3dLUT_Enable(1);
					fwif_color_set_sRGBMatrix();
				}
				}
				else{
					//printk("HDR no need to run ColorSpace flow\n");
					drvif_color_D_3dLUT_Enable(0);
					fwif_color_set_sRGBMatrix();
					ColorSpaceMode=0;
				}
				fwif_color_set_gamma_Magic();
				if(ColorSpaceMode==1)//Color Space Mode=Native
					pre_colorspaceisNative=1;
				else
					pre_colorspaceisNative=0;

				g_srgbForceUpdate = 0;

				ret = 0;
			}
		}
		break;

		case VPQ_EXTERN_IOC_SET_Panel_Dither:
		{
		 	HAL_VPQ_Panel_Dither_T Panel_Dither_Info;
			Panel_Dither_Info.nTableType=0;
			if (copy_from_user(&Panel_Dither_Info, (int __user *)arg, sizeof(HAL_VPQ_Panel_Dither_T))) {
				rtd_printk(KERN_ERR, TAG_NAME, "kernel copy VPQ_IOC_SET_DeMura fail\n");
				ret = -1;
				break;
			} else {
			printk("panelDither:FunEnable=%d,TemEnable=%d,default_vip_panel_bit=%d\n",Panel_Dither_Info.FunEnable,Panel_Dither_Info.TemEnable,Panel_Dither_Info.default_vip_panel_bit);
				fwif_color_set_PanelDither_Bit(Panel_Dither_Info.FunEnable,Panel_Dither_Info.TemEnable, (PANELDITHER_BIT)Panel_Dither_Info.default_vip_panel_bit, Panel_Dither_Info.nTableType);
				ret = 0;
			}
		}
		break;
		
	#ifdef CONFIG_DOLBY_BACKLIGHT_CTRL_ADIM_PDIM	
	case VPQ_EXTERN_IOC_SET_DOLBYBACKLIGHT:
	{
		KADP_VPQ_DOBYBAKLIGHT_INI glob_dolbybacklight_ini;
		if(copy_from_user(&glob_dolbybacklight_ini,  (int __user *)arg,sizeof(KADP_VPQ_DOBYBAKLIGHT_INI)))
		{
			rtd_printk(KERN_ERR, TAG_NAME, "kernel VPQ_EXTERN_IOC_SET_DOLBYBACKLIGHT fail\n");
			ret = -1;
		}
		else
		{			
			Scaler_color_vpq_set_dolbylight_init(glob_dolbybacklight_ini);			
			ret = 0;
		}
	}
	break;
	#endif
	
	default:
		//rtd_printk(KERN_DEBUG, TAG_NAME, "kernel IO command %d not found!\n", cmd);
		return -1;
			;
	}
	return ret;/*Success*/

}
#ifdef CONFIG_RTK_8KCODEC_INTERFACE
#include "kernel/rtk_codec_interface.h"
extern struct rtk_codec_interface *rtk_8k;
#if defined(CONFIG_RTK_AI_DRV)
void VPQEX_rlink_AI_SeneInfo(void)
{ 
	extern int scene_nn;
	extern int scene_pq;
	unsigned int scene_info[2] = {(unsigned int)scene_nn, (unsigned int)scene_pq};
	
	if(rtk_8k == NULL)
	{
		printk("%s, null pointer: rtk_8k\n", __FUNCTION__);
		return;
	}
		
	rtk_8k->vpqex->R8k_VPQEX_AI_SET_SceneInfo(scene_info);
	
	//printk("%s, scene_nn:%d, scene_pq:%d, set ! \n", __FUNCTION__, scene_nn, scene_pq);
}
#endif

#endif

struct file_operations vpqex_fops = {
	.owner = THIS_MODULE,
	.open = vpqex_open,
	.release = vpqex_release,
	.read  = vpqex_read,
	.write = vpqex_write,
	.unlocked_ioctl = vpqex_ioctl,
#ifdef CONFIG_ARM64
#ifdef CONFIG_COMPAT
	.compat_ioctl = vpqex_ioctl,
#endif
#endif
};

#ifdef CONFIG_PM
static const struct dev_pm_ops vpqex_pm_ops =
{
        .suspend    = vpqex_suspend,
        .resume     = vpqex_resume,
#ifdef CONFIG_HIBERNATION
	.freeze 	= vpqex_suspend,
	.thaw		= vpqex_resume,
	.poweroff	= vpqex_suspend,
	.restore	= vpqex_resume,
#endif

};
#endif // CONFIG_PM

static struct class *vpqex_class = NULL;
static struct platform_device *vpqex_platform_devs = NULL;
static struct platform_driver vpqex_platform_driver = {
	.driver = {
		.name = VPQ_EXTERN_DEVICE_NAME,
		.bus = &platform_bus_type,
#ifdef CONFIG_PM
		.pm = &vpqex_pm_ops,
#endif
    },
} ;

#ifdef CONFIG_ARM64 //ARM32 compatible
static char *vpqex_devnode(struct device *dev, umode_t *mode)
#else
static char *vpqex_devnode(struct device *dev, mode_t *mode)
#endif
{
	return NULL;
}

int vpqex_major   = 0;
int vpqex_minor   = 0 ;
int vpqex_nr_devs = 1;

int vpqex_module_init(void)
{
	int result;
	//dev_t devno = 0;//vbe device number
	printk("vpqex_module_init %d\n", __LINE__);

	result = alloc_chrdev_region(&vpqex_devno, vpqex_minor, vpqex_nr_devs, VPQ_EXTERN_DEVICE_NAME);
	vpqex_major = MAJOR(vpqex_devno);
	if (result != 0) {
		rtd_printk(KERN_ERR, TAG_NAME, "Cannot allocate VPQEX device number\n");
		printk("vpqex_module_init %d\n", __LINE__);
		return result;
	}

	printk("vpqex_module_init %d\n", __LINE__);

	printk("VPQEX_DEVICE init module major number = %d\n", vpqex_major);
	//vpqex_devno = MKDEV(vpqex_major, vpqex_minor);

	vpqex_class = class_create(THIS_MODULE, VPQ_EXTERN_DEVICE_NAME);
	if (IS_ERR(vpqex_class)) {
		rtd_printk(KERN_ERR, TAG_NAME, "scalevpqex: can not create class...\n");
		printk("vpqex_module_init %d\n", __LINE__);
		result = PTR_ERR(vpqex_class);
		goto fail_class_create;
	}

	vpqex_class->devnode = vpqex_devnode;

	vpqex_platform_devs = platform_device_register_simple(VPQ_EXTERN_DEVICE_NAME, -1, NULL, 0);
	if (platform_driver_register(&vpqex_platform_driver) != 0) {
		rtd_printk(KERN_ERR, TAG_NAME, "scalevpqex: can not register platform driver...\n");
		printk("vpqex_module_init %d\n", __LINE__);
		result = -ENOMEM;
		goto fail_platform_driver_register;
	}

	cdev_init(&vpqex_cdev, &vpqex_fops);
	vpqex_cdev.owner = THIS_MODULE;
   	vpqex_cdev.ops = &vpqex_fops;
	result = cdev_add(&vpqex_cdev, vpqex_devno, 1);
	if (result < 0) {
		rtd_printk(KERN_ERR, TAG_NAME, "scalevpqex: can not add character device...\n");
		printk("vpqex_module_init %d\n", __LINE__);
		goto fail_cdev_init;
	}

	device_create(vpqex_class, NULL, vpqex_devno, NULL, VPQ_EXTERN_DEVICE_NAME);

	//sema_init(&VPQ_EXTERN_Semaphore, 1);
	sema_init(&ICM_Semaphore,1);
	//sema_init(&I_RGB2YUV_Semaphore,1);
	sema_init(&ColorSpace_Semaphore,1);
	
	vpqex_boot_init();

	printk("vpqex_module_init %d\n", __LINE__);
	return 0;/*Success*/

fail_cdev_init:
	platform_driver_unregister(&vpqex_platform_driver);
fail_platform_driver_register:
	platform_device_unregister(vpqex_platform_devs);
	vpqex_platform_devs = NULL;
	class_destroy(vpqex_class);
fail_class_create:
	vpqex_class = NULL;
	unregister_chrdev_region(vpqex_devno, 1);
	printk("vpqex_module_init %d\n", __LINE__);
	return result;

}



void __exit vpqex_module_exit(void)
{
	printk("vpqex_module_exit\n");

	if (vpqex_platform_devs == NULL)
		BUG();

	device_destroy(vpqex_class, vpqex_devno);
	cdev_del(&vpqex_cdev);

	platform_driver_unregister(&vpqex_platform_driver);
	platform_device_unregister(vpqex_platform_devs);
	vpqex_platform_devs = NULL;

	class_destroy(vpqex_class);
	vpqex_class = NULL;

	unregister_chrdev_region(vpqex_devno, 1);
}

module_init(vpqex_module_init);
module_exit(vpqex_module_exit);

