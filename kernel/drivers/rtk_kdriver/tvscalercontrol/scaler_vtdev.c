#include <linux/delay.h>
#include <generated/autoconf.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/platform_device.h>
#include <linux/mtd/mtd.h>
#include <linux/uaccess.h>
#include <asm/cacheflush.h>
#include <linux/pageremap.h>
#include <linux/kthread.h>
#include <linux/freezer.h>
#include <uapi/linux/const.h>
#include <linux/mm.h>
#include <mach/rtk_log.h>
#include <linux/fs.h>/*for dump buffer to usb file*/
#include <linux/hrtimer.h>/*for wait vsync hr sleep*/
#include <linux/version.h>
#include <rtk_kdriver/RPCDriver.h>
#include <rtk_dc_mt.h>

#include <rbus/dc2h_dma_reg.h>
#include <rbus/dc2h_vi_reg.h>
#include <rbus/dc2h_scaledown_reg.h>
#include <rbus/dc2h_rgb2yuv_reg.h>
#include <rbus/ppoverlay_reg.h>
#include <rbus/mdomain_disp_reg.h>
#include <rbus/scaleup_reg.h>
#include <rbus/yuv2rgb_reg.h>
#include <rbus/timer_reg.h>

#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/panel/panelapi.h>
#ifdef CONFIG_KDRIVER_USE_NEW_COMMON
	#include <scaler/scalerCommon.h>
#else
#include <rtk_kdriver/scalercommon/scalerCommon.h>
#endif
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scalerdrv/pipmp.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <scaler/vipRPCCommon.h>

#include "scaler_vtdev.h"
#include "scaler_vscdev.h"
#include "scaler_vpqmemcdev.h"
#include "gal/rtk_kadp_se.h"


struct semaphore VT_Semaphore;
static struct semaphore VTBlock_Semaphore;

#define _ALIGN(val, align) (((val) + ((align) - 1)) & ~((align) - 1))
#define __4KPAGE  0x1000
/*4k and 96 align*/
#define __12KPAGE  0x3000

unsigned int VT_CAPTURE_BUFFER_UNITSIZE;

VT_CAPTURE_CTRL_T CaptureCtrl_VT;

static dev_t vivt_devno = 0;//vt device number
static struct cdev vivt_cdev;

//#define FALSE   0
//#define TRUE    1


#define TAG_NAME "VT" //log refine

/*vt init work width and length*/
#define VT_CAP_FRAME_DEFAULT_WIDTH	1920
#define VT_CAP_FRAME_DEFAULT_LENGTH	1080


/*vt init work width and length*/
#define VT_CAP_FRAME_WIDTH_2K1k		1920
#define VT_CAP_FRAME_HEIGHT_2K1k	1080

#define VT_CAP_FRAME_WIDTH_4K2K		3840
#define VT_CAP_FRAME_HEIGHT_4K2K	2160

#define VT_SOURCE_CAP_I3DDMA_BUF	(0x0A)
#define VT_SOURCE_CAP_VDEC_BUF		(0xA0)
#define CARVDOUT_MEM_FOR_HFR_CASE (_ALIGN((VT_CAP_FRAME_WIDTH_2K1k*VT_CAP_FRAME_HEIGHT_2K1k),__12KPAGE)+_ALIGN((VT_CAP_FRAME_WIDTH_2K1k*VT_CAP_FRAME_HEIGHT_2K1k/2),__12KPAGE))

#define VT_FPS_OUTPUT 	(60)
//#define VR360_BORROW_12M_FROM_CMA (0xC00000)
#define MAX_CAP_BUF_NUM 5
#define BR_MEM_FROM_MEMC 1
//static KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T VFODState = {FALSE,FALSE,TRUE,1};
KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T VFODState = {FALSE,FALSE,TRUE,1};

static KADP_VT_DUMP_LOCATION_TYPE_T VTDumpLocation = KADP_VT_MAX_LOCATION;
static VT_CUR_CAPTURE_INFO curCapInfo;
extern unsigned char get_vsc_mutestatus(void);
extern unsigned char drvif_scaler_get_abnormal_dvs_long_flag(void);
extern unsigned char drvif_scaler_get_abnormal_dvs_short_flag(void);
static unsigned char VtFunction = FALSE;
static unsigned char VtEnableFRCMode = TRUE;

static unsigned int VtBufferNum = MAX_CAP_BUF_NUM;
static unsigned char VtSwBufferMode = FALSE;
static unsigned char VtCaptureVDC = FALSE;

static unsigned int vt_cap_frame_max_width = VT_CAP_FRAME_WIDTH_2K1k; 
static unsigned int vt_cap_frame_max_height = VT_CAP_FRAME_HEIGHT_2K1k;

static unsigned long VtAllocatedBufferStartAdress[5] = {0};
static unsigned char vt_src_capture_enable_flag = FALSE; /*record vdec/i3ddma source capture in vt */
static int write_Index = 0;
static unsigned char vdec_buf_cap_debug = FALSE;
static unsigned char i3ddma_buf_cap_debug = FALSE;

/* this flag only for VtBufferNum=1;
when ap calls HAL_VT_GetVideoFrameBufferIndex to get buffer index, VT driver return the index after capture over(freeze)*/
static unsigned char vt_src_cap_freeze_for_one_buf_flag = FALSE;
static unsigned int abnormal_dvs_cnt = 0;
static unsigned int wait_dvs_stable_cnt = 0;
static unsigned int cardout_phyaddr_hfr_align96 = 0;
static unsigned long cardout_phyaddr_hfr_pli = 0;

unsigned int width_src = 0;
unsigned int height_src = 0;
//unsigned int phyaddr_src = 0;
//unsigned int phyaddr_uv_src = 0;

static unsigned char VdecSecureStatus = FALSE;
static unsigned char DtvSecureStatus = FALSE;

/*ARGB8888_FORMAT for roku
  RGB888 for LGE*/
static VT_CAP_FMT VT_Pixel_Format = VT_CAP_RGB888;

static unsigned int DC2H_InputWidthSta;
static unsigned int DC2H_InputLengthSta;
static unsigned int DC2H_InputWidth;
static unsigned int DC2H_InputLength;
extern KADP_VIDEO_RECT_T ap_main_inregion_parm;//for new input output. main path ap parameter  from new hal
extern KADP_VIDEO_RECT_T ap_main_originalInput_parm;//for new input output. main path ap input resolution parameter from new hal

#ifdef CONFIG_ENABLE_HDMI_NN
extern unsigned int g_ulNNOutWidth; 
extern unsigned int g_ulNNOutLength; 
#endif 

unsigned char dqbuf_ioctl_fail_flag = FALSE;
unsigned char IndexOfFreezedVideoFrameBuffer = 0;
unsigned char use_seDriver_do_scale_flag = FALSE;
volatile unsigned int vfod_capture_out_W = VT_CAP_FRAME_DEFAULT_WIDTH;
volatile unsigned int vfod_capture_out_H = VT_CAP_FRAME_DEFAULT_LENGTH;
volatile unsigned int vfod_capture_location = KADP_VT_DISPLAY_OUTPUT;

/*------include extern functions----------*/
extern void dcmt_monitor_dc2h_range(int index, unsigned int addr, unsigned int size);
extern void dcmt_clear_monitor(unsigned int entry);
extern unsigned char force_enable_two_step_uzu(void);/* get d domain go two pixel mode? */
unsigned char debug_dump_data_to_file(unsigned int src_y, unsigned int dump_w,unsigned int dump_h);

#ifdef CONFIG_ENABLE_HDMI_NN
extern int h3ddma_get_NN_read_buffer(unsigned int *a_pulYAddr, unsigned int *a_pulCAddr, unsigned int *a_pulCropYAddr, unsigned int *a_pulCropCAddr);
extern void h3ddma_get_NN_output_size(unsigned int *outputWidth, unsigned int *outputLength);
#endif

/*static unsigned char delayN_frame_return_VFB_index(unsigned int delayn,KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID);*/	
unsigned char Capture_BufferMemInit_VT(unsigned int buffernum);
void Capture_BufferMemDeInit_VT(unsigned int buffernum);
unsigned char HAL_VT_Finalize(void);
void drvif_DC2H_dispD_CaptureConfig(VT_CUR_CAPTURE_INFO capInfo);
unsigned char is_4K2K_capture(void);
void set_cap_buffer_size_by_AP(unsigned int usr_width, unsigned int usr_height);
void reset_dc2h_hw_setting(void);
unsigned char HAL_VT_GetVideoFrameBufferIndex(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned int *pIndexOfCurrentVideoFrameBuffer);
void drvif_memc_outBg_ctrl(bool enable);

_RPC_system_setting_info* scaler_GetShare_Memory_RPC_system_setting_info_Struct(void);
void drvif_i3ddma_buf_SE_capture(void);
unsigned char drvif_do_se_stretch(SE_SRC_DST_info info);
unsigned char do_vt_source_capture_proc(void);
void do_vt_vdec_srcbuf_capture(void);
unsigned char do_vt_capture_streamon(void);
unsigned char do_vt_reqbufs(unsigned int buf_cnt);
unsigned char do_vt_streamoff(void);
unsigned char do_vt_dqbuf(unsigned int *pdqbuf_Index);
void carvdout_mem_for_vt_2k1k_hfr(unsigned int tsize); 
void Use_SE_ScaleUp(unsigned char idx);

void vt_enable_dc2h(unsigned char state);
unsigned char get_dc2h_capture_state(void);
unsigned int sort_boundary_addr_min_index(void);
unsigned int sort_boundary_addr_max_index(void);
int vt_dump_date_to_file_debug(unsigned int addr, unsigned int size);

unsigned char get_vt_function(void)
{
	return VtFunction;
}

void set_vt_function(unsigned char value)
{
	VtFunction = value;
}
unsigned char get_use_seDriver_do_scale_flag(void)
{
	return use_seDriver_do_scale_flag;
}
void set_use_seDriver_do_scale_flag(unsigned char value)
{
	use_seDriver_do_scale_flag = value;
}

unsigned char get_vt_EnableFRCMode(void)
{
	return VtEnableFRCMode;
}
EXPORT_SYMBOL(get_vt_EnableFRCMode);

void set_vt_EnableFRCMode(unsigned char value)
{
	VtEnableFRCMode = value;
}

void set_dqbuf_ioctl_fail_flag(unsigned char flg)
{
	dqbuf_ioctl_fail_flag = flg;
}
unsigned char get_dqbuf_ioctl_fail_flag(void)
{
	return dqbuf_ioctl_fail_flag;
}

unsigned int get_vt_VtBufferNum(void)
{
	return VtBufferNum;
}

void set_vt_VtBufferNum(unsigned int value)
{
	VtBufferNum = value;
}

unsigned char get_vt_VtSwBufferMode(void)
{
	return VtSwBufferMode;
}

void set_vt_VtSwBufferMode(unsigned char value)
{
	VtSwBufferMode = value;
}

unsigned char get_vt_VtCaptureVDC(void)
{
	return VtCaptureVDC;
}

void set_vt_VtCaptureVDC(unsigned char value)
{
	VtCaptureVDC = value;
}

void set_VT_Pixel_Format(VT_CAP_FMT value)
{
	VT_Pixel_Format = value;
}

VT_CAP_FMT get_VT_Pixel_Format(void)
{
	return VT_Pixel_Format;
}
unsigned int get_framerateDivide(void)
{
	return VFODState.framerateDivide;
}
void set_framerateDivide(unsigned int value)
{
	VFODState.framerateDivide = value;
}

unsigned int get_cap_buffer_Width(void)
{
	return vt_cap_frame_max_width;
}
unsigned int get_cap_buffer_Height(void)
{
	return vt_cap_frame_max_height;
}

unsigned char get_vt_src_cap_freeze_for_one_buf_flag(void)
{
	return vt_src_cap_freeze_for_one_buf_flag;
}
void set_vt_src_cap_freeze_for_one_buf_flag(unsigned char value)
{
	vt_src_cap_freeze_for_one_buf_flag = value;
}
unsigned char get_vt_src_cap_status(void)
{
	return vt_src_capture_enable_flag;
}
void set_vt_src_cap_status(unsigned char value)
{
	vt_src_capture_enable_flag = value;
}
void debug_vdec_cap_enable(unsigned char value)
{
	vdec_buf_cap_debug = value;
}
void debug_i3ddma_cap_enable(unsigned char value)
{
	i3ddma_buf_cap_debug = value;
}
unsigned char get_src_cap_enable_status(void)
{
	if(vdec_buf_cap_debug || i3ddma_buf_cap_debug)
		return TRUE;
	else
		return FALSE;
}
void reset_debug_src_cap_enable_status(void)
{
	vdec_buf_cap_debug = FALSE;
	i3ddma_buf_cap_debug = FALSE;
}
#if 1/*qiangzhou:move dc2h driver from kernel to kernel here start*/
#include <tvscalercontrol/vip/ultrazoom.h>
/*
D-domain Capture to Handler input data select, from :
0 : No input (data all 0)
1 : Select data from main_uzu output
2 .Select data from yuv2rgb output
3 : Select data from Sub-Title Mixer output
4 : Select data from OSD Mixer output 
5 : Select data from Dither output 
6 : Select data from Sub UZU output
7: Select data from Memc mux output
8. select data from VD output
*/

typedef enum _DC2H_IN_SEL
{
    _NO_INPUT= 0,
    _MAIN_UZU,
    _MAIN_YUV2RGB,
    _TWO_SECOND_UZU,  //2nd_uzu = 3
    _OSD_MIXER,
    _Dither_Output,  
    _Sub_UZU_Output,
    _Memc_mux_Output,
    _VD_OUTPUT
}DC2H_IN_SEL;

typedef struct
{
    unsigned int reserved:18 ;
    unsigned int y_pic_no:7;
    unsigned int c_pic_no:7;
} DC2H_YC_PIC_NO ;


typedef struct
{
    SIZE in_size;
    SIZE out_size;
    DC2H_YC_PIC_NO yc_pic_no;
    //unsigned char current_idx;
    unsigned char dc2h_init;
    unsigned char dc2h_en;
    unsigned char dc2h_in_sel;
    unsigned char panorama;
    unsigned char set_bit;
    unsigned char done_bit;
} DC2H_HANDLER ;


DC2H_HANDLER *pdc2h_hdl = NULL;
static DC2H_HANDLER dc2h_hdl;

#define CAP_LEN 32
#define CAP_REM 12

#define _RGB2YUV_m11				0x00
#define _RGB2YUV_m12				0x01
#define _RGB2YUV_m13				0x02
#define _RGB2YUV_m21				0x03
#define _RGB2YUV_m22				0x04
#define _RGB2YUV_m23				0x05
#define _RGB2YUV_m31				0x06
#define _RGB2YUV_m32				0x07
#define _RGB2YUV_m33				0x08
#define _RGB2YUV_Yo_even			0x09
#define _RGB2YUV_Yo_odd			0x0a
#define _RGB2YUV_Y_gain				0x0b
#define _RGB2YUV_sel_RGB			0x0c
#define _RGB2YUV_set_Yin_offset		0x0d
#define _RGB2YUV_set_UV_out_offset	0x0e
#define _RGB2YUV_sel_UV_off			0x0f
#define _RGB2YUV_Matrix_bypass		0x10
#define _RGB2YUV_Enable_Y_gain		0x11

/*YUV to RBG table for RGB888 and ARGB888 capture format*/
static unsigned short tYUV2RGB_COEF_709_RGB_0_255[] =
{

// CCIR 709 RGB
        0x129f,   // m11
        0x0000,  // m12
        0x1660,  // m13

        0x129f,   // m21 >> 2 0x01D5 up bits at AT Name: cychen2 , Date: 2010/3/25
        0x7a80,   // m22 >> 1
        0x74a0,   // m23 >> 2
        0x129f,   // m31 >> 2
        0x1c50,   // m32 >> 2 0x0195  up bits at AT Name: cychen2 , Date: 2010/3/25
        0x0000,   // m33 >> 1

        0x0000,          // Yo_even
        0x0000,          // Yo_odd
        0x0000,          // Y_gain

        0x0000,  // sel_RGB
        0x0001,  // sel_Yin_offset
        0x0000,  // sel_UV_out_offset
        0x0000,  // sel_UV_off
        0x0000,  // Matrix_bypass
        0x0000,  // Enable_Y_gain

};

/*RGB to YUV table for nv12 nv16 capture format*/
static unsigned short tYUV2RGB_COEF_709_RGB_16_235[] =
{
    // CCIR 709 RGB
            0x04c8,   // m11
            0x0964,   // m12
            0x01d2,   // m13
#if 0 /*uv channel could swap*/            
			/*nv12 uv need swap*/
            0x0800,   // m31 >> 2
            0x794d,   // m32 >> 2 0x0195  up bits at AT Name: cychen2 , Date: 2010/3/25
            0x7eb2,   // m33 >> 1

            0x7d4d,   // m21 >> 2 0x01D5 up bits at AT Name: cychen2 , Date: 2010/3/25
            0x7ab2,   // m22 >> 1
            0x0800,   // m23 >> 2
#else
			0x7d4d,   // m21 >> 2 0x01D5 up bits at AT Name: cychen2 , Date: 2010/3/25
			0x7ab2,   // m22 >> 1
			0x0800,   // m23 >> 2
			0x0800,   // m31 >> 2
			0x794d,   // m32 >> 2 0x0195  up bits at AT Name: cychen2 , Date: 2010/3/25
			0x7eb2,   // m33 >> 1
#endif
            0x0000,//0x07e0,          // Yo_even
            0x0000,//0x07e0,          // Yo_odd
            0x0129,//0x0110,          // Y_gain

            0x0001,  // sel_RGB
            0x0001,//0x0000,  // sel_Yin_offset
            0x0001,  // sel_UV_out_offset
            0x0000,  // sel_UV_off
            0x0000,  // Matrix_bypass
            0x0001,  // Enable_Y_gain

};


static short tScale_Down_Coef_2tap[] = {
    0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,
    31,  95, 159, 223, 287, 351, 415, 479,
    543, 607, 671, 735, 799, 863, 927, 991,
};

static short tScale_Down_Coef_Blur[] = {
	//2,   3,   5,   7,  10,  15,  20,  28,  38,  49,  64,  81, 101, 124, 150, 178,
	//209, 242, 277, 314, 351, 389, 426, 462, 496, 529, 556, 582, 602, 618, 629, 635,
	213,  217,  221,  222,  224,  229,  232,  234,
	239,  242,  245,  249,  252,  255,  259,  262,
	265,  266,  267,  269,  271,  272,  273,  275,
	276,  277,  278,  280,  281,  281,  282,  284,
};

static short tScale_Down_Coef_Mid[] = {
	//-2,  0,   1,   2,   5,   9,  15,  22,  32,  45,  60,  77,  98, 122, 149, 179,
	//211, 245, 281, 318, 356, 394, 431, 468, 502, 533, 561, 586, 606, 620, 630, 636,
	131,  125,  124,  126,  130,  135,  142,  151,
	161,  172,  183,  195,  208,  221,  234,  245,
	260,  275,  290,  304,  318,  330,  341,  351,
	361,  369,  376,  381,  386,  389,  390,  388,
};


static short tScale_Down_Coef_Sharp[] = {
    -2,   0,   1,   3,   6,  10,  15,  22,  32,  43,  58,  75,  95, 119, 145, 174,
    206, 240, 276, 314, 353, 391, 430, 467, 503, 536, 565, 590, 612, 628, 639, 646,
};


static  short *tScaleDown_COEF_TAB[] =
{
    tScale_Down_Coef_Blur,     tScale_Down_Coef_Mid,     tScale_Down_Coef_Sharp,     tScale_Down_Coef_2tap
};

void dc2h_wait_porch(void)
{
#if 0
	 dtg_lc_RBUS dtg_lc_reg;
	 dtg_pending_status_RBUS dtg_pending_status_reg;
	 ppoverlay_dv_den_start_end_RBUS dv_den_start_end_reg;
	 UINT32 timeout = 0x3ffff;

	 //clear line compare status
	 dtg_pending_status_reg.regValue = 0;
	 dtg_pending_status_reg.dtg_vlc_status = 1;
	 rtd_outl(PPOVERLAY_DTG_pending_status_reg, dtg_pending_status_reg.regValue);
	 dv_den_start_end_reg.regValue = rtd_inl(PPOVERLAY_DV_DEN_Start_End_reg);


	 //enable line compare function
	 dtg_lc_reg.dtg_vlcen= 0;
	 dtg_lc_reg.dtg_vlc_mode = 0;
	 dtg_lc_reg.dtg_vlc_src_sel = 1;
	 dtg_lc_reg.dtg_vln = dv_den_start_end_reg.dv_den_end + 10;//frank@20150903 add some scan line avoid DC2H not write finish
	 rtd_outl(PPOVERLAY_DTG_LC_reg, dtg_lc_reg.regValue);

	 do {
	  dtg_lc_reg.dtg_vlcen= 1;
	  rtd_outl(PPOVERLAY_DTG_LC_reg, dtg_lc_reg.regValue);
	  if((rtd_inl(PPOVERLAY_DTG_pending_status_reg) & _BIT4)) {
	   break;
	  }
	  timeout--;
	 } while(timeout);

	 if(timeout == 0){

	  rtd_printk(KERN_DEBUG, TAG_NAME,"[wait uzu dtg end]timeout error!!!\n");
	 }

	 //disable line compare function
	 dtg_lc_reg.regValue = 0;
	 rtd_outl(PPOVERLAY_DTG_LC_reg, dtg_lc_reg.regValue);
	 //clear line compare status
	 dtg_pending_status_reg.regValue = 0;
	 dtg_pending_status_reg.dtg_vlc_status = 1;
	 rtd_outl(PPOVERLAY_DTG_pending_status_reg, dtg_pending_status_reg.regValue);
#else
	unsigned int uzulinecntA =0;
	unsigned int uzulinecntB =0;

	unsigned int timeoutcount = 0x3ffff;
	ppoverlay_dv_den_start_end_RBUS dv_den_start_end_reg;
	ppoverlay_new_meas1_linecnt_real_RBUS new_meas1_linecnt_real_Reg;

	dv_den_start_end_reg.regValue = rtd_inl(PPOVERLAY_DV_DEN_Start_End_reg);
	do {
		new_meas1_linecnt_real_Reg.regValue = rtd_inl(PPOVERLAY_new_meas1_linecnt_real_reg);
		uzulinecntA = new_meas1_linecnt_real_Reg.uzudtg_line_cnt_rt;
		new_meas1_linecnt_real_Reg.regValue = rtd_inl(PPOVERLAY_new_meas1_linecnt_real_reg);
		uzulinecntB = new_meas1_linecnt_real_Reg.uzudtg_line_cnt_rt;
		if((uzulinecntA == uzulinecntB)&&((uzulinecntA < (dv_den_start_end_reg.dv_den_sta))||(uzulinecntA > (dv_den_start_end_reg.dv_den_end)))) {
			break;
		}
		timeoutcount--;
	} while(timeoutcount);

	if(timeoutcount == 0){
		rtd_printk(KERN_DEBUG, TAG_NAME,"[UZU DEN]timeout error!!!\n");
	}
#endif

}
void vt_enable_dc2h(unsigned char state)
{
	//down(&VT_Semaphore);
	curCapInfo.enable = state; 
	drvif_DC2H_dispD_CaptureConfig(curCapInfo);
	//up(&VT_Semaphore);
}

unsigned char get_dc2h_capture_state(void)
{	
	if ((get_VT_Pixel_Format() == VT_CAP_NV12) || (get_VT_Pixel_Format() == VT_CAP_NV16))
	{
		if(DC2H_VI_DC2H_DMACTL_get_dmaen1(rtd_inl(DC2H_VI_DC2H_DMACTL_reg)) == 1)		
			return TRUE;
		else
			return FALSE;
		
	}
	else
	{
		if(DC2H_DMA_dc2h_Seq_mode_CTRL1_get_cap_en(rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg)) == DC2H_DMA_dc2h_Seq_mode_CTRL1_cap_en_mask)
			return TRUE;
		else
			return FALSE;
	}

}

unsigned char drvif_dc2h_swmode_inforpc(unsigned int onoff,unsigned int buffernumber,unsigned int width,unsigned int length){

	DC2H_SWMODE_STRUCT_T *swmode_infoptr;
	unsigned int ulCount = 0;
	int ret;
	rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s\n",__FUNCTION__);
	swmode_infoptr = (DC2H_SWMODE_STRUCT_T *)Scaler_GetShareMemVirAddr(SCALERIOC_SET_DC2H_SWMODE_ENABLE);
	ulCount = sizeof(DC2H_SWMODE_STRUCT_T) / sizeof(unsigned int);

	swmode_infoptr->SwModeEnable = onoff;
	swmode_infoptr->buffernumber = buffernumber;
	swmode_infoptr->cap_format = (UINT32)get_VT_Pixel_Format();
	swmode_infoptr->cap_width = width;
	swmode_infoptr->cap_length = length;
	swmode_infoptr->YbufferSize = _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE);
	swmode_infoptr->cap_buffer[0] = (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
	swmode_infoptr->cap_buffer[1] = (UINT32)CaptureCtrl_VT.cap_buffer[1].phyaddr;
	swmode_infoptr->cap_buffer[2] = (UINT32)CaptureCtrl_VT.cap_buffer[2].phyaddr;
	swmode_infoptr->cap_buffer[3] = (UINT32)CaptureCtrl_VT.cap_buffer[3].phyaddr;
	swmode_infoptr->cap_buffer[4] = (UINT32)CaptureCtrl_VT.cap_buffer[4].phyaddr;

	pr_debug("[VT]SwModeEnable = %d\n",swmode_infoptr->SwModeEnable);
	pr_debug("[VT]buffernumber = %d\n",swmode_infoptr->buffernumber);
	pr_debug("[VT]cap_format = %d\n",swmode_infoptr->cap_format);
	pr_debug("[VT]cap_width = %d\n",swmode_infoptr->cap_width);
	pr_debug("[VT]cap_length = %d\n",swmode_infoptr->cap_length);
	pr_debug("[VT]YbufferSize = %d\n",swmode_infoptr->YbufferSize);
	pr_debug("[VT]cap_buffer[0] = 0x%x\n",swmode_infoptr->cap_buffer[0]);
	pr_debug("[VT]cap_buffer[1] = 0x%x\n",swmode_infoptr->cap_buffer[1]);
	pr_debug("[VT]cap_buffer[2] = 0x%x\n",swmode_infoptr->cap_buffer[2]);
	pr_debug("[VT]cap_buffer[3] = 0x%x\n",swmode_infoptr->cap_buffer[3]);
	pr_debug("[VT]cap_buffer[4] = 0x%x\n",swmode_infoptr->cap_buffer[4]);
	//change endian
	swmode_infoptr->SwModeEnable = htonl(swmode_infoptr->SwModeEnable);
	swmode_infoptr->buffernumber = htonl(swmode_infoptr->buffernumber);
	swmode_infoptr->cap_format = htonl(swmode_infoptr->cap_format);
	swmode_infoptr->cap_width = htonl(swmode_infoptr->cap_width);
	swmode_infoptr->cap_length = htonl(swmode_infoptr->cap_length);
	swmode_infoptr->YbufferSize = htonl(swmode_infoptr->YbufferSize);
	swmode_infoptr->cap_buffer[0] = htonl(swmode_infoptr->cap_buffer[0]);
	swmode_infoptr->cap_buffer[1] = htonl(swmode_infoptr->cap_buffer[1]);
	swmode_infoptr->cap_buffer[2] = htonl(swmode_infoptr->cap_buffer[2]);
	swmode_infoptr->cap_buffer[3] = htonl(swmode_infoptr->cap_buffer[3]);
	swmode_infoptr->cap_buffer[4] = htonl(swmode_infoptr->cap_buffer[4]);

	
	if (0 != (ret = Scaler_SendRPC(SCALERIOC_SET_DC2H_SWMODE_ENABLE,0,0))){
		pr_emerg("[dc2h]ret=%d, SCALERIOC_SET_DC2H_SWMODE_ENABLE RPC fail !!!\n", ret);
		return FALSE;
	}
	return TRUE;
}

unsigned char drvif_dc2h_se_inforpc(unsigned int capwidth,unsigned int caplength)
{
	VT_SE_CAPTURE_INFO_T *se_capture_infoptr = NULL;
	unsigned int ulCount = 0;
	int ret;
	
	rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s=%d\n",__FUNCTION__, __LINE__);

	curCapInfo.capWid = capwidth;
	curCapInfo.capLen = caplength;

	se_capture_infoptr = (VT_SE_CAPTURE_INFO_T *)Scaler_GetShareMemVirAddr(SCALERIOC_SET_VT_SE_CAPTURE_ENABLE);
	ulCount = sizeof(VT_SE_CAPTURE_INFO_T) / sizeof(unsigned int);
	memset(se_capture_infoptr, 0, sizeof(VT_SE_CAPTURE_INFO_T));
	
	se_capture_infoptr->capWid = capwidth;
	
	se_capture_infoptr->capLen = caplength;

	//change endian
	se_capture_infoptr->capWid = htonl(se_capture_infoptr->capWid);
	
	se_capture_infoptr->capLen = htonl(se_capture_infoptr->capLen);

	if (0 != (ret = Scaler_SendRPC(SCALERIOC_SET_VT_SE_CAPTURE_ENABLE,0,0)))
	{
		pr_emerg("[dc2h]ret=%d, SCALERIOC_SET_DC2H_SE_CAPTURE_ENABLE RPC fail !!!\n", ret);
		return FALSE;
	}
	return TRUE;
}

unsigned char get_i3ddma_NN_flag(void);
void drvif_i3ddma_buf_SE_capture(void)
{
	/* VT use i3ddma NN buffer to do stretch size required by user client */
#ifdef CONFIG_ENABLE_HDMI_NN
	SE_SRC_DST_info info;
	unsigned int vt_buf_count = 0;

	info.src_x = 0;
	info.src_y = 0;
	h3ddma_get_NN_output_size(&(info.src_w), &(info.src_h));
	info.src_fmt = KGAL_PIXEL_FORMAT_NV12;
	info.src_pitch_y = info.src_w;

	if(get_i3ddma_NN_flag() == 0)
	{
		//rtd_printk(KERN_NOTICE, TAG_NAME, "[Error] i3dma NN disable\n");
		return;
	}
	
	if(info.src_w == 0 || info.src_h == 0)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "[Error] i3ddma size 0\n");
		return;
	}
	rtd_printk(KERN_NOTICE, TAG_NAME, "i3ddma buf size:<w,h>:<%d,%d>\n", info.src_w, info.src_h);
	
	// get i3ddma NN buffer address 
	if(h3ddma_get_NN_read_buffer(&(info.src_phyaddr), &(info.src_phyaddr_uv), NULL, NULL) < 0)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "get i3ddma buf fail\n");
		return;
	}

	rtd_printk(KERN_NOTICE, TAG_NAME, "i3ddma buf addr:<y,uv>:<0x%x,0x%x>\n", info.src_phyaddr, info.src_phyaddr_uv);
							
	vt_buf_count = get_vt_VtBufferNum();

	info.dst_x = 0;
	info.dst_y = 0;
	info.dst_w = vfod_capture_out_W;
	info.dst_h = vfod_capture_out_H;
	
	info.dst_phyaddr = 0;
	info.dst_phyaddr_uv = 0;
	info.dst_fmt = KGAL_PIXEL_FORMAT_NV12;

	/* ====== buf count == 1 ,ex:luna command source capture test ===========*/
				/* =======after capture over,stop capture ============*/
	if((vt_buf_count == 1) && (get_vt_src_cap_freeze_for_one_buf_flag() == TRUE)) /*--stream on and dqbuf coming---*/
	{
		write_Index = 0;
		
		info.dst_phyaddr = CaptureCtrl_VT.cap_buffer[write_Index].phyaddr;
		info.dst_phyaddr_uv = (CaptureCtrl_VT.cap_buffer[write_Index].phyaddr + _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE));
		if(info.dst_phyaddr && info.dst_phyaddr_uv)
		{
			drvif_do_se_stretch(info);
		}
		
		set_vt_src_cap_status(FALSE); /* disable */
		set_vt_src_cap_freeze_for_one_buf_flag(FALSE);
	}
	else
	{/* ====== buf count > 1 ,ex: VR360/ACR ===========*/
				/* =======loop wite to buffer ============*/
		if(vt_buf_count != 1)
		{
			write_Index = ((write_Index + 1) % vt_buf_count);
			rtd_printk(KERN_DEBUG, TAG_NAME, "write_Index:%d\n", write_Index);
			
			info.dst_phyaddr = CaptureCtrl_VT.cap_buffer[write_Index].phyaddr;
			info.dst_phyaddr_uv = (CaptureCtrl_VT.cap_buffer[write_Index].phyaddr + _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE));
			if(info.dst_phyaddr && info.dst_phyaddr_uv)
			{
				drvif_do_se_stretch(info);
			}
		}
		else
		{
			rtd_printk(KERN_NOTICE, TAG_NAME, "[buf0] stream on,wait dqbuf\n");			
		}
	}
#else
	rtd_printk(KERN_NOTICE, TAG_NAME, "i3ddma NN buffer not exist! error!\n");
#endif

}

unsigned char drvif_do_se_stretch(
SE_SRC_DST_info info)
{	
#if defined(CONFIG_RTK_KDRV_SE)

	unsigned int se_sta, se_end;
	bool status = 0;
	KGAL_SURFACE_INFO_T ssurf;
	KGAL_SURFACE_INFO_T dsurf;
	KGAL_RECT_T srect;
	KGAL_RECT_T drect;
	KGAL_BLIT_FLAGS_T sflag = KGAL_BLIT_NOFX;
	KGAL_BLIT_SETTINGS_T sblend;
	memset(&ssurf,0, sizeof(KGAL_SURFACE_INFO_T));
	memset(&dsurf,0, sizeof(KGAL_SURFACE_INFO_T));
	memset(&srect,0, sizeof(KGAL_RECT_T));
	memset(&drect,0, sizeof(KGAL_RECT_T));
	memset(&sblend,0, sizeof(KGAL_BLIT_SETTINGS_T));
	sblend.srcBlend = KGAL_BLEND_ONE;
	sblend.dstBlend = KGAL_BLEND_ZERO;

	ssurf.physicalAddress = info.src_phyaddr;
	ssurf.width = info.src_w;
	ssurf.height = info.src_h;
	ssurf.pixelFormat 		= info.src_fmt;
	srect.x = info.src_x;
	srect.y = info.src_y;
	srect.w = info.src_w;
	srect.h = info.src_h;

	dsurf.physicalAddress = info.dst_phyaddr;
	dsurf.width = info.dst_w;
	dsurf.height = info.dst_h;
	dsurf.pixelFormat 		= info.dst_fmt;
	drect.x = info.dst_x;
	drect.y = info.dst_y;
	drect.w = info.dst_w;
	drect.h = info.dst_h;

	if(info.src_fmt == KGAL_PIXEL_FORMAT_NV12)
	{
		ssurf.bpp 	= 16;
		ssurf.pitch = info.src_pitch_y;//info.src_w;
	}
	else if(info.src_fmt == KGAL_PIXEL_FORMAT_RGB888)//KGAL_PIXEL_FORMAT_YUV444
	{
		ssurf.bpp 	= 24;
		ssurf.pitch = info.src_pitch_y*3;//info.src_w*3;
		info.src_phyaddr_uv = info.dst_phyaddr_uv; //just init, no use in SE driver.
	}

	if(info.dst_fmt == KGAL_PIXEL_FORMAT_NV12)
	{
		dsurf.bpp 	= 16;
		dsurf.pitch = info.dst_w;
	}
	else if(info.dst_fmt == KGAL_PIXEL_FORMAT_RGB888)
	{
		dsurf.bpp 	= 24;
		dsurf.pitch = info.dst_w*3;
	}

	se_sta = rtd_inl(0xB801B6B8);
	status = KGAL_NV12_StretchBlit(&ssurf, &srect, &dsurf, &drect, &sflag, &sblend, info.src_phyaddr_uv, info.dst_phyaddr_uv);
	se_end = rtd_inl(0xB801B6B8);

	if(!status)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "[error]KGAL_NV12_StretchBlit run fail\n");
		return FALSE;
	}
	else
	{
		//rtd_printk(KERN_NOTICE, TAG_NAME, "src(%d,%d) => dst(%d,%d)\n",ssurf.width, ssurf.height, dsurf.width, dsurf.height);
		return TRUE;
	}
	
#else
	return TRUE;
#endif
}

unsigned char get_video_do_overscan_state(void)
{
	/*if(Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_STA_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_STA) ||
	Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_STA_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_STA) ||
	Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_WID_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_WID) ||
	Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_STA_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_LEN) )*/
#if 1
	if((ap_main_inregion_parm.w != ap_main_originalInput_parm.w) || (ap_main_inregion_parm.h != ap_main_originalInput_parm.h))
	{
		return TRUE;
	}
	else
		return FALSE;
#else
	return TRUE;
#endif
}

void drvif_color_colorspaceyuv2rgbtransfer(DC2H_IN_SEL dc2h_in_sel)
{
	unsigned short *table_index = 0;
	
	dc2h_rgb2yuv_dc2h_rgb2yuv_ctrl_RBUS  dc2h_rgb2yuv_ctrl_reg;
	dc2h_rgb2yuv_dc2h_tab1_m11_m12_RBUS dc2h_tab1_m11_m12_reg;
	dc2h_rgb2yuv_dc2h_tab1_m13_m21_RBUS dc2h_tab1_m13_m21_reg;
	dc2h_rgb2yuv_dc2h_tab1_m22_m23_RBUS dc2h_tab1_m22_m23_reg;
	dc2h_rgb2yuv_dc2h_tab1_m31_m32_RBUS dc2h_tab1_m31_m32_reg;
	dc2h_rgb2yuv_dc2h_tab1_m33_y_gain_RBUS dc2h_tab1_m33_y_gain_reg;
	dc2h_rgb2yuv_dc2h_tab1_yo_RBUS dc2h_tab1_yo_reg;
	
	if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16))
		table_index = tYUV2RGB_COEF_709_RGB_16_235;
	else
		table_index = tYUV2RGB_COEF_709_RGB_0_255;

	//main  all tab-1
	dc2h_tab1_m11_m12_reg.m11 = table_index [_RGB2YUV_m11];
	dc2h_tab1_m11_m12_reg.m12 = table_index [_RGB2YUV_m12];
	//printf("dc2h_tab1_m11_m12_reg.regValue = %x\n", dc2h_tab1_m11_m12_reg.regValue);
	rtd_outl(DC2H_RGB2YUV_DC2H_Tab1_M11_M12_reg, dc2h_tab1_m11_m12_reg.regValue);

	dc2h_tab1_m13_m21_reg.m21 = table_index [_RGB2YUV_m21];
	dc2h_tab1_m13_m21_reg.m13 = table_index [_RGB2YUV_m13];
	//printf("dc2h_tab1_m13_m21_reg.regValue = %x\n", dc2h_tab1_m13_m21_reg.regValue);
	rtd_outl(DC2H_RGB2YUV_DC2H_Tab1_M13_M21_reg, dc2h_tab1_m13_m21_reg.regValue);

	dc2h_tab1_m22_m23_reg.m22 = table_index [_RGB2YUV_m22];
	dc2h_tab1_m22_m23_reg.m23 = table_index [_RGB2YUV_m23];
	//printf("dc2h_tab1_m22_m23_reg.regValue = %x\n", dc2h_tab1_m22_m23_reg.regValue);
	rtd_outl(DC2H_RGB2YUV_DC2H_Tab1_M22_M23_reg, dc2h_tab1_m22_m23_reg.regValue);

	dc2h_tab1_m31_m32_reg.m31 = table_index [_RGB2YUV_m31];
	dc2h_tab1_m31_m32_reg.m32 = table_index [_RGB2YUV_m32];
	//printf("dc2h_tab1_m31_m32_reg.regValue = %x\n", dc2h_tab1_m31_m32_reg.regValue);
	rtd_outl(DC2H_RGB2YUV_DC2H_Tab1_M31_M32_reg, dc2h_tab1_m31_m32_reg.regValue);

	dc2h_tab1_m33_y_gain_reg.m33 = table_index [_RGB2YUV_m33];
	dc2h_tab1_m33_y_gain_reg.yo_gain= table_index [_RGB2YUV_Y_gain];
	//printf("dc2h_tab1_m33_y_gain_reg.regValue = %x\n", dc2h_tab1_m33_y_gain_reg.regValue);
	rtd_outl(DC2H_RGB2YUV_DC2H_Tab1_M33_Y_Gain_reg, dc2h_tab1_m33_y_gain_reg.regValue);

	dc2h_tab1_yo_reg.yo_even= table_index [_RGB2YUV_Yo_even];
	dc2h_tab1_yo_reg.yo_odd= table_index [_RGB2YUV_Yo_odd];
	//printf("dc2h_tab1_yo_reg.regValue = %x\n", dc2h_tab1_yo_reg.regValue);
	rtd_outl(DC2H_RGB2YUV_DC2H_Tab1_Yo_reg, dc2h_tab1_yo_reg.regValue);

	dc2h_rgb2yuv_ctrl_reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg);
	dc2h_rgb2yuv_ctrl_reg.sel_rgb= table_index [_RGB2YUV_sel_RGB];
	dc2h_rgb2yuv_ctrl_reg.set_r_in_offset= table_index [_RGB2YUV_set_Yin_offset];
	dc2h_rgb2yuv_ctrl_reg.set_uv_out_offset= table_index [_RGB2YUV_set_UV_out_offset];
	dc2h_rgb2yuv_ctrl_reg.sel_uv_off= table_index [_RGB2YUV_sel_UV_off];
	dc2h_rgb2yuv_ctrl_reg.matrix_bypass= table_index [_RGB2YUV_Matrix_bypass];
	dc2h_rgb2yuv_ctrl_reg.sel_y_gain= table_index [_RGB2YUV_Enable_Y_gain];
	dc2h_rgb2yuv_ctrl_reg.dc2h_in_sel = dc2h_in_sel;
	
	if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16))
	{
		if((dc2h_in_sel == _MAIN_UZU) || (dc2h_in_sel == _TWO_SECOND_UZU))  //YUV format
		{
			dc2h_rgb2yuv_ctrl_reg.en_rgb2yuv = 0;
		}else{
			dc2h_rgb2yuv_ctrl_reg.en_rgb2yuv = 1; //Enable RGB to YUV conversion (YUV out)
		}
	} 
	else
	{
		if((dc2h_in_sel == _MAIN_UZU) || (dc2h_in_sel == _TWO_SECOND_UZU))
		{
			dc2h_rgb2yuv_ctrl_reg.en_rgb2yuv = 2; //Enable YUV to RGB conversion (GBR out)
		}else{
			dc2h_rgb2yuv_ctrl_reg.en_rgb2yuv = 0;
		}
	}
	rtd_outl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg, dc2h_rgb2yuv_ctrl_reg.regValue);

}

void drvif_color_ultrazoom_set_dc2h_scale_down(DC2H_HANDLER *pdc2h_hdl)
{
	unsigned int SDRatio;
	unsigned int SDFilter=0;
	unsigned int tmp_data;
	short *coef_pt;
	unsigned int i;
	unsigned long long tmpLength = 0;
	unsigned int nFactor;
	unsigned int D = 0;
	unsigned char Hini, Vini, a;
	unsigned short S1,S2;

	//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	dc2h_scaledown_dc2h_hsd_ctrl0_RBUS        dc2h_hsd_ctrl0_reg;
	dc2h_scaledown_dc2h_vsd_ctrl0_RBUS                      dc2h_vsd_ctrl0_reg;
	dc2h_scaledown_dc2h_hsd_scale_hor_factor_RBUS  dc2h_hsd_scale_hor_factor_reg;
	dc2h_scaledown_dc2h_vsd_scale_ver_factor_RBUS  dc2h_vsd_scale_ver_factor_reg;
	dc2h_scaledown_dc2h_hsd_hor_segment_RBUS    dc2h_hsd_hor_segment_reg;
	//dc2h_scaledown_dc2h_hsd_hor_delta1_RBUS      dc2h_hsd_hor_delta1_reg;
	dc2h_scaledown_dc2h_hsd_initial_value_RBUS      dc2h_hsd_initial_value_reg;
	dc2h_scaledown_dc2h_vsd_initial_value_RBUS      dc2h_vsd_initial_value_reg;

	dc2h_hsd_ctrl0_reg.regValue    = rtd_inl(DC2H_SCALEDOWN_DC2H_HSD_Ctrl0_reg);
	dc2h_vsd_ctrl0_reg.regValue    = rtd_inl(DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg);
	dc2h_hsd_scale_hor_factor_reg.regValue  = rtd_inl(DC2H_SCALEDOWN_DC2H_HSD_Scale_Hor_Factor_reg);
	dc2h_vsd_scale_ver_factor_reg.regValue  = rtd_inl(DC2H_SCALEDOWN_DC2H_VSD_Scale_Ver_Factor_reg);
	dc2h_hsd_hor_segment_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_HSD_Hor_Segment_reg);
	//dc2h_hsd_hor_delta1_reg.regValue  = rtd_inl(DC2H_SCALEDOWN_DC2H_HSD_Hor_Delta1_reg);
	dc2h_hsd_initial_value_reg.regValue  = rtd_inl(DC2H_SCALEDOWN_DC2H_HSD_Initial_Value_reg);
	dc2h_vsd_initial_value_reg.regValue  = rtd_inl(DC2H_SCALEDOWN_DC2H_VSD_Initial_Value_reg);

	#define TMPMUL  (16)

	//o============ H scale-down=============o
	if (pdc2h_hdl->in_size.nWidth > pdc2h_hdl->out_size.nWidth)
	{
		// o-------calculate scaledown ratio to select one of different bandwith filters.--------o
		if ( pdc2h_hdl->out_size.nWidth == 0 ) {
		rtd_printk(KERN_DEBUG, TAG_NAME,"output width = 0 !!!\n");
		SDRatio = 0;
		} else {
		SDRatio = (pdc2h_hdl->in_size.nWidth*TMPMUL) / pdc2h_hdl->out_size.nWidth;
		}

		//UltraZoom_Printf("CSW SDRatio number=%d\n",SDRatio);

		if(SDRatio <= ((TMPMUL*3)/2))  //<1.5 sharp, wider bw
			SDFilter = 2;
		else if(SDRatio <= (TMPMUL*2) && SDRatio > ((TMPMUL*3)/2) )  // Mid
			SDFilter = 1;
		else    // blurest, narrow bw
			SDFilter = 0;

		//o---------------- fill coefficients into access port--------------------o
		coef_pt = tScaleDown_COEF_TAB[SDFilter];  

		dc2h_hsd_ctrl0_reg.h_y_table_sel = 0;  // TAB1
		dc2h_hsd_ctrl0_reg.h_c_table_sel = 0;  // TAB1

		for (i=0; i<16; i++)
		{
			tmp_data = ((unsigned int)(*coef_pt++)<<16);
			tmp_data += (unsigned int)(*coef_pt++); 
			rtd_outl(DC2H_SCALEDOWN_DC2H_UZD_FIR_Coef_Tab1_C0_reg + i*4, tmp_data);
		}
	}

	//o============ V scale-down=============o
	if (pdc2h_hdl->in_size.nLength > pdc2h_hdl->out_size.nLength)
	{
		// o-------calculate scaledown ratio to select one of different bandwith filters.--------o
		//jeffrey 961231
		if ( pdc2h_hdl->out_size.nLength == 0 ) {
		SDRatio = 0;
		} else {
		SDRatio = (pdc2h_hdl->in_size.nLength*TMPMUL) /pdc2h_hdl->out_size.nLength;
		}

		//UltraZoom_Printf("CSW SDRatio number=%d\n",SDRatio);

		if(SDRatio <= ((TMPMUL*3)/2))  //<1.5 sharp, wider bw
			SDFilter = 2;
		else if(SDRatio <= (TMPMUL*2) && SDRatio > ((TMPMUL*3)/2) )  // Mid
			SDFilter = 1;
		else    // blurest, narrow bw
			SDFilter = 0;

		rtd_printk(KERN_DEBUG, TAG_NAME,"filter number=%d\n",SDFilter);

		//o---------------- fill coefficients into access port--------------------o
		 coef_pt = tScaleDown_COEF_TAB[SDFilter]; 
		//coef_pt = &(ScaleDown_COEF_TAB.FIR_Coef_Table[SD_V_Coeff_Sel[SDFilter]][0]);

		dc2h_vsd_ctrl0_reg.v_y_table_sel = 1;  // TAB2
		dc2h_vsd_ctrl0_reg.v_c_table_sel = 1;  // TAB2

		for (i=0; i<16; i++)
		{
			tmp_data = ((unsigned int)(*coef_pt++)<<16);
			tmp_data += (unsigned int)(*coef_pt++);
			rtd_outl(DC2H_SCALEDOWN_DC2H_UZD_FIR_Coef_Tab2_C0_reg + i*4, tmp_data);
		}
	} else {
		//no need  V scale-down, use bypass filter
	}

	// Decide Output data format for scale down
	//============H Scale-down============
	if (pdc2h_hdl->in_size.nWidth > pdc2h_hdl->out_size.nWidth)
	{    // H scale-down
		Hini = 0x80;//0xff;//0x78;
		dc2h_hsd_initial_value_reg.hor_ini = Hini;
		dc2h_hsd_initial_value_reg.hor_ini_int= 1;
		a = 5;

		if(pdc2h_hdl->panorama)
		{// CSW+ 0960830 Non-linear SD
			S1 = (pdc2h_hdl->out_size.nWidth) >> 2;
			S2 = (pdc2h_hdl->out_size.nWidth) - S1*2;
			//=vv==old from TONY, if no problem, use this=vv==
			nFactor = (unsigned int)(((pdc2h_hdl->in_size.nWidth)<<21) - ((unsigned int)Hini<<13));
			//=vv==Thur debugged=vv==
			//nFactor = ((((unsigned long long)(ptInSize->nWidth))*(ptOutSize->nWidth-1))<<21) / ptOutSize->nWidth;
			//===================
			nFactor = nFactor /((2*a+1)*S1 + (a+1)*S2 - a) * a;
			if(S1 != 0)
				D = nFactor / a / S1;
			nFactor = SHR((nFactor + 1), 1); //rounding
			D = SHR(D + 1, 1); //rounding
			rtd_printk(KERN_DEBUG, TAG_NAME,"\nPANORAMA2 TEST 111\n");
			rtd_printk(KERN_DEBUG, TAG_NAME,"nPANORAMA2 Factor = %d\n",nFactor);
			rtd_printk(KERN_DEBUG, TAG_NAME,"PANORAMA2 S1=%d, S2=%d, D = %d\n",S1, S2, D);

			if(nFactor < 1048576) {
				rtd_printk(KERN_DEBUG, TAG_NAME,"PANORAMA2 Can't do nonlinear SD \n");
				//nFactor = (unsigned int)(((ptInSize->nWidth)<<21) - ((unsigned int)Hini<<13)) / (ptOutSize->nWidth-1);
				if(pdc2h_hdl->out_size.nWidth != 0)
					nFactor = (unsigned int)(((pdc2h_hdl->in_size.nWidth)<<21)) / (pdc2h_hdl->out_size.nWidth);
				nFactor = SHR(nFactor + 1, 1); //rounding
				rtd_printk(KERN_DEBUG, TAG_NAME,"PANORAMA2 nFactor=%x, input Wid=%d, Out Wid=%d\n",nFactor, pdc2h_hdl->in_size.nWidth, pdc2h_hdl->out_size.nWidth);
				S1 = 0;
				S2 = pdc2h_hdl->out_size.nWidth;
				D = 0;
			}
        	}else{
			if ( pdc2h_hdl->out_size.nWidth == 0 ) {
				rtd_printk(KERN_DEBUG, TAG_NAME,"output width = 0 !!!\n");
				nFactor = 0;
			}else if(pdc2h_hdl->in_size.nWidth>4095){
				//nFactor = (unsigned int)((((pdc2h_hdl->in_size.nWidth-1)<<19) / (pdc2h_hdl->out_size.nWidth-1))<<1);
				nFactor = (unsigned int)((((pdc2h_hdl->in_size.nWidth)<<19) / (pdc2h_hdl->out_size.nWidth))<<1);
			}else if(pdc2h_hdl->in_size.nWidth>2047){
				//nFactor = (unsigned int)(((pdc2h_hdl->in_size.nWidth-1)<<20) / (pdc2h_hdl->out_size.nWidth-1));
				nFactor = (unsigned int)(((pdc2h_hdl->in_size.nWidth)<<20) / (pdc2h_hdl->out_size.nWidth));
			}else {
				//nFactor = (unsigned int)(((pdc2h_hdl->in_size.nWidth-1)<<21) / (pdc2h_hdl->out_size.nWidth-1));
				nFactor = (unsigned int)(((pdc2h_hdl->in_size.nWidth)<<21) / (pdc2h_hdl->out_size.nWidth));
				nFactor = SHR(nFactor + 1, 1); //rounding
			}

			rtd_printk(KERN_DEBUG, TAG_NAME,"nFactor=%d, input Wid=%d, Out Wid=%d\n",nFactor, pdc2h_hdl->in_size.nWidth, pdc2h_hdl->out_size.nWidth);
			S1 = 0;
			S2 = pdc2h_hdl->out_size.nWidth;
			D = 0;
		}
	}else {
		nFactor = 0x100000;
		S1 = 0;
		S2 = pdc2h_hdl->out_size.nWidth;
		D = 0;
	}

	dc2h_hsd_scale_hor_factor_reg.hor_fac = nFactor;
	//dc2h_hsd_hor_segment_reg.nl_seg1 = S1;
	dc2h_hsd_hor_segment_reg.nl_seg2 = S2;
	//dc2h_hsd_hor_delta1_reg.nl_d1 = D;
	//UltraZoom_Printf("reg_seg1=%x, reg_Seg_all=%x\n",dc2h_hsd_hor_segment_reg.nl_seg1, dc2h_hsd_hor_segment_reg.regValue);
	rtd_printk(KERN_DEBUG, TAG_NAME,"nFactor=%x, input_Wid=%d, Output_Wid=%d\n",nFactor, pdc2h_hdl->in_size.nWidth, pdc2h_hdl->out_size.nWidth);

	//================V Scale-down=================
	if (pdc2h_hdl->in_size.nLength > pdc2h_hdl->out_size.nLength) {    // V scale-down
		Vini = 0xff;//0x78;
		dc2h_vsd_initial_value_reg.ver_ini = Vini;
		if ( pdc2h_hdl->out_size.nLength == 0 ) {
			rtd_printk(KERN_DEBUG, TAG_NAME,"output length = 0 !!!\n");
			nFactor = 0;
		} else {
			//frank@1018 sync with pacific to solve 3d vide 1920X2205 scaler down fail
			//nFactor = (unsigned int)(((ptInSize->nLength)<<21) / (ptOutSize->nLength));
			//nFactor = (unsigned int)(((unsigned long long)(pdc2h_hdl->in_size.nLength)<<21) / (pdc2h_hdl->out_size.nLength));
			tmpLength = ((unsigned long long)(pdc2h_hdl->in_size.nLength)<<21);
			do_div(tmpLength, (pdc2h_hdl->out_size.nLength));
			nFactor = tmpLength;
		}
		rtd_printk(KERN_DEBUG, TAG_NAME,"Ch1 Ver: CAP=%d, Disp=%d, factor=%d\n", pdc2h_hdl->in_size.nLength, pdc2h_hdl->out_size.nLength, nFactor);
		nFactor = SHR(nFactor + 1, 1); //rounding
	} else {
		nFactor = 0x100000;
	}

	dc2h_vsd_scale_ver_factor_reg.ver_fac = nFactor;

	rtd_outl(DC2H_SCALEDOWN_DC2H_HSD_Ctrl0_reg, dc2h_hsd_ctrl0_reg.regValue);
	rtd_outl(DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg, dc2h_vsd_ctrl0_reg.regValue);
	rtd_outl(DC2H_SCALEDOWN_DC2H_HSD_Scale_Hor_Factor_reg, dc2h_hsd_scale_hor_factor_reg.regValue);
	rtd_outl(DC2H_SCALEDOWN_DC2H_VSD_Scale_Ver_Factor_reg, dc2h_vsd_scale_ver_factor_reg.regValue);
	rtd_outl(DC2H_SCALEDOWN_DC2H_HSD_Hor_Segment_reg, dc2h_hsd_hor_segment_reg.regValue);
	//rtd_outl(DC2H_SCALEDOWN_DC2H_HSD_Hor_Delta1_reg, dc2h_hsd_hor_delta1_reg.regValue);
	rtd_outl(DC2H_SCALEDOWN_DC2H_HSD_Initial_Value_reg, dc2h_hsd_initial_value_reg.regValue);
	rtd_outl(DC2H_SCALEDOWN_DC2H_VSD_Initial_Value_reg, dc2h_vsd_initial_value_reg.regValue);
}


void drvif_color_ultrazoom_config_dc2h_scaling_down(DC2H_HANDLER *pdc2h_hdl)
{
	// Scale down setup for Channel1
	dc2h_scaledown_dc2h_hsd_ctrl0_RBUS dc2h_hsd_ctrl0_reg;
	dc2h_scaledown_dc2h_vsd_ctrl0_RBUS dc2h_vsd_ctrl0_reg;
	dc2h_scaledown_dc2h_444to422_ctrl_RBUS dc2h_scaledown_dc2h_444to422_ctrl_reg;
	
	dc2h_scaledown_dc2h_444to422_ctrl_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_444to422_CTRL_reg);
	//if(pdc2h_hdl->dc2h_in_sel==_MAIN_UZU)/*mux uzu*/
		//dc2h_scaledown_dc2h_444to422_ctrl_reg.cbcr_swap_en =1;
	//else
		dc2h_scaledown_dc2h_444to422_ctrl_reg.cbcr_swap_en =0;
	rtd_outl(DC2H_SCALEDOWN_DC2H_444to422_CTRL_reg, dc2h_scaledown_dc2h_444to422_ctrl_reg.regValue);  //used record freeze buffer
	

	dc2h_hsd_ctrl0_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_HSD_Ctrl0_reg);
	dc2h_hsd_ctrl0_reg.h_zoom_en = (pdc2h_hdl->in_size.nWidth > pdc2h_hdl->out_size.nWidth);
	rtd_outl(DC2H_SCALEDOWN_DC2H_HSD_Ctrl0_reg, dc2h_hsd_ctrl0_reg.regValue);

	dc2h_vsd_ctrl0_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg);
	if(pdc2h_hdl->in_size.nLength > pdc2h_hdl->out_size.nLength){
		dc2h_vsd_ctrl0_reg.v_zoom_en = 1;
		dc2h_vsd_ctrl0_reg.buffer_mode = 2;
	}else{
		dc2h_vsd_ctrl0_reg.v_zoom_en = 0;
		dc2h_vsd_ctrl0_reg.buffer_mode = 0;
	}
	if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16)){
		dc2h_vsd_ctrl0_reg.sort_fmt = 0;
	} else {
		dc2h_vsd_ctrl0_reg.sort_fmt = 1;
	}
	rtd_outl(DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg, dc2h_vsd_ctrl0_reg.regValue);

	drvif_color_ultrazoom_set_dc2h_scale_down(pdc2h_hdl);
}

void drvif_dc2h_input_overscan_config(unsigned int x, unsigned int y, unsigned int w, unsigned int h)
{
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_RBUS dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg;
	dc2h_rgb2yuv_dc2h_overscan_ctrl0_RBUS dc2h_rgb2yuv_dc2h_overscan_ctrl0_Reg;
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl1_RBUS dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl1_Reg;

	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl_reg);
	dc2h_rgb2yuv_dc2h_overscan_ctrl0_Reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_OVERSCAN_Ctrl0_reg);
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl1_Reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl1_reg);

	dc2h_rgb2yuv_dc2h_overscan_ctrl0_Reg.dc2h_overscan_left = x+1;
	dc2h_rgb2yuv_dc2h_overscan_ctrl0_Reg.dc2h_overscan_right = x+w;
	rtd_outl(DC2H_RGB2YUV_DC2H_OVERSCAN_Ctrl0_reg, dc2h_rgb2yuv_dc2h_overscan_ctrl0_Reg.regValue);

	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl1_Reg.dc2h_overscan_top = y;
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl1_Reg.dc2h_overscan_bottom = y+h-1;
	rtd_outl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl1_reg, dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl1_Reg.regValue);

	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.dc2h_3dmaskto2d_3dformat = 4;/*overscan*/
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.dc2h_3dmaskto2d_en = 1;
	rtd_outl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl_reg, dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.regValue);
	
}

#if 0  // use drvif_memory_get_data_align instead
unsigned int drvif_dc2hmemory_get_data_align(unsigned int Value, unsigned int unit)
{
	unsigned int AlignVal;

	AlignVal = Value;
	unit -= 1;
	if (Value & unit)
		AlignVal = (Value & (~unit)) + unit + 1;
	return AlignVal;
}
#endif

void drvif_vi_config(unsigned int nWidth, unsigned int nLength, unsigned int data_format)
{
	unsigned int LineSize;
//	unsigned int width96align;
    dc2h_vi_dc2h_v1_output_fmt_RBUS dc2h_v1_output_fmt_reg;//DC2H_RGB2YUV_DC2H_V1_OUTPUT_FMT_VADDR
    dc2h_vi_dc2h_cwvh1_RBUS dc2h_cwvh1_reg;//w,h //DC2H_RGB2YUV_DC2H_CWVH1_VADDR
    dc2h_vi_dc2h_cwvh1_2_RBUS dc2h_cwvh1_2_reg;
	dc2h_vi_dc2h_dmactl_RBUS vi_dmactl_reg;//dmaen	//I3DDMA_VI_IDMA_DMACTL_VADDR
	dc2h_vi_dc2h_vi_addcmd_transform_RBUS dc2h_vi_dc2h_vi_addcmd_transform_reg;
	dc2h_dma_dc2h_seq_interrupt_enable_RBUS dc2h_dma_dc2h_seq_interrupt_enable_Reg;
	dc2h_vi_dc2h_y1buf_RBUS dc2h_vi_dc2h_y1buf_Reg;
	dc2h_vi_dc2h_c1buf_RBUS dc2h_vi_dc2h_c1buf_Reg;
	dc2h_vi_dc2h_vi_c_line_step_RBUS dc2h_vi_dc2h_vi_c_line_step_Reg;
	
    dc2h_v1_output_fmt_reg.regValue = rtd_inl(DC2H_VI_DC2H_V1_OUTPUT_FMT_reg);
	dc2h_v1_output_fmt_reg.data_format = data_format;/*0:420	1:422*/
	dc2h_v1_output_fmt_reg.swap_1byte = 0;
	dc2h_v1_output_fmt_reg.swap_2byte = 0;
	dc2h_v1_output_fmt_reg.swap_4byte = 0;
	dc2h_v1_output_fmt_reg.swap_8byte = 0;
    rtd_outl(DC2H_VI_DC2H_V1_OUTPUT_FMT_reg, dc2h_v1_output_fmt_reg.regValue);

    dc2h_cwvh1_reg.regValue = rtd_inl(DC2H_VI_DC2H_CWVH1_reg);
	if((TRUE == force_enable_two_step_uzu()) && (is_4K2K_capture() == TRUE))
    	dc2h_cwvh1_reg.hsize = VT_CAP_FRAME_WIDTH_2K1k;
	else
		dc2h_cwvh1_reg.hsize = nWidth;
    dc2h_cwvh1_reg.vsize = nLength;
    rtd_outl(DC2H_VI_DC2H_CWVH1_reg, dc2h_cwvh1_reg.regValue);

   	dc2h_cwvh1_2_reg.regValue = rtd_inl(DC2H_VI_DC2H_CWVH1_2_reg);
    dc2h_cwvh1_2_reg.vsize_c = nLength >> (data_format == 1? 0: 1);
    rtd_outl(DC2H_VI_DC2H_CWVH1_2_reg, dc2h_cwvh1_2_reg.regValue);

	  /*width96align = drvif_memory_get_data_align(nWidth, 96);
	  LineSize = drvif_memory_get_data_align(width96align*8, 64);
      LineSize = (unsigned int)SHR(LineSize, 6);      // (pixels of per line * 8 / 32), unit: 32bits */
	if((TRUE == force_enable_two_step_uzu()) && (is_4K2K_capture() == TRUE))
		LineSize = VT_CAP_FRAME_WIDTH_4K2K * 8 / 64;
	else
		LineSize = nWidth * 8 / 64;
	if(LineSize % 2)
		LineSize += 1;
	
	dc2h_vi_dc2h_vi_c_line_step_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_c_line_step_reg);
	dc2h_vi_dc2h_vi_c_line_step_Reg.c_line_step = LineSize;
	rtd_outl(DC2H_VI_DC2H_vi_c_line_step_reg, dc2h_vi_dc2h_vi_c_line_step_Reg.regValue);

	dc2h_vi_dc2h_vi_addcmd_transform_reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_addcmd_transform_reg);
	dc2h_vi_dc2h_vi_addcmd_transform_reg.line_step = LineSize;
	dc2h_vi_dc2h_vi_addcmd_transform_reg.vi_addcmd_trans_en = 1;
	rtd_outl(DC2H_VI_DC2H_vi_addcmd_transform_reg, dc2h_vi_dc2h_vi_addcmd_transform_reg.regValue);

	if (get_vt_VtSwBufferMode()) {
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg);
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.vs_rising_ie = 1;
	}		

	dc2h_wait_porch();	
	
	vi_dmactl_reg.regValue = rtd_inl(DC2H_VI_DC2H_DMACTL_reg);
	vi_dmactl_reg.dmaen1 = 1;
	vi_dmactl_reg.seq_blk_sel =1; //0: YV16 or RGB888 1: NV12 or NV16
	vi_dmactl_reg.bstlen = 7;//merlin4 run block mode 96B align
	rtd_outl(DC2H_VI_DC2H_DMACTL_reg, vi_dmactl_reg.regValue);

	dc2h_vi_dc2h_y1buf_Reg.regValue = rtd_inl(DC2H_VI_DC2H_Y1BUF_reg);
	dc2h_vi_dc2h_y1buf_Reg.y_water_lvl = 120; //burst write 120x64bits
	rtd_outl(DC2H_VI_DC2H_Y1BUF_reg, dc2h_vi_dc2h_y1buf_Reg.regValue);

	dc2h_vi_dc2h_c1buf_Reg.regValue = rtd_inl(DC2H_VI_DC2H_C1BUF_reg);
	dc2h_vi_dc2h_c1buf_Reg.c_water_lvl = 120; //burst write 120x64bits
	rtd_outl(DC2H_VI_DC2H_C1BUF_reg, dc2h_vi_dc2h_c1buf_Reg.regValue);


	if (get_vt_VtSwBufferMode()) {
		rtd_outl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg, dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue);
	}	
}

void drvif_dc2h_seq_config(DC2H_HANDLER *pdc2h_hdl)
{
	unsigned int num, rem;
	unsigned int lineunits, len;
	unsigned int width96align;
	dc2h_dma_dc2h_seq_mode_ctrl1_RBUS dc2h_seq_mode_ctrl1_reg;
	dc2h_dma_dc2h_seq_mode_ctrl2_RBUS dc2h_seq_mode_ctrl2_reg;
	dc2h_dma_dc2h_seq_interrupt_enable_RBUS dc2h_dma_dc2h_seq_interrupt_enable_Reg;
	dc2h_dma_dc2h_cap_ctl0_RBUS dc2h_cap_ctl0_reg;
	dc2h_dma_dc2h_cap_ctl1_RBUS dc2h_cap_ctl1_reg;
	//dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_reg;
	//dc2h_cap_l2_start_RBUS dc2h_cap_l2_start_reg;
	//dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_reg;
	dc2h_dma_dc2h_seq_byte_channel_swap_RBUS dc2h_seq_byte_channel_swap_reg;

	dc2h_vi_dc2h_dmactl_RBUS vi_dmactl_reg;//dmaen
	vi_dmactl_reg.regValue = rtd_inl(DC2H_VI_DC2H_DMACTL_reg);
	//vi_dmactl_reg.dmaen1 = 1;
	vi_dmactl_reg.seq_blk_sel =0;
	rtd_outl(DC2H_VI_DC2H_DMACTL_reg, vi_dmactl_reg.regValue);

	dc2h_seq_mode_ctrl1_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg);
	dc2h_seq_mode_ctrl1_reg.cap_en = 0;
	rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg, dc2h_seq_mode_ctrl1_reg.regValue);

	if (pdc2h_hdl->dc2h_en == FALSE)
		return;

	dc2h_seq_mode_ctrl2_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL2_reg);
	dc2h_seq_mode_ctrl2_reg.hact = pdc2h_hdl->out_size.nWidth;
	dc2h_seq_mode_ctrl2_reg.vact = pdc2h_hdl->out_size.nLength;
	rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL2_reg, dc2h_seq_mode_ctrl2_reg.regValue);

	//num = (pdc2h_hdl->out_size.nWidth - CAP_REM) / CAP_LEN;
	//rem = ((pdc2h_hdl->out_size.nWidth - CAP_REM) % CAP_LEN) + CAP_REM;

	if(get_VT_Pixel_Format() == VT_CAP_ARGB8888) {
		width96align = drvif_memory_get_data_align(pdc2h_hdl->out_size.nWidth*4, 96);
	} else {
		width96align = drvif_memory_get_data_align(pdc2h_hdl->out_size.nWidth*3, 96);		
	}
	lineunits = (width96align * 8) /128;

	len = 32;
	num = (unsigned int)(lineunits / len);
	rem = (unsigned int)(lineunits % len);

	if (rem == 0) { // remainder is not allowed to be zero
		rem = len;
		num -= 1;
	}

	dc2h_cap_ctl0_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_CTL0_reg);
	dc2h_cap_ctl0_reg.bit_sel = 0;
	dc2h_cap_ctl0_reg.pixel_encoding = 0;
	//dc2h_cap_ctl0_reg.triple_buf_en = 1;
	if(get_vt_VtBufferNum() == 1) {
		dc2h_cap_ctl0_reg.triple_buf_en = 0;
		dc2h_cap_ctl0_reg.auto_block_sel_en = 0;
		//dc2h_cap_ctl0_reg.cap_block_fw = 0;
	} else {
		if(get_vt_VtCaptureVDC()) {
			dc2h_cap_ctl0_reg.triple_buf_en = 1;
			dc2h_cap_ctl0_reg.auto_block_sel_en = 1;
		} else {
			if (get_vt_VtSwBufferMode()) {
				dc2h_cap_ctl0_reg.triple_buf_en = 0;
				dc2h_cap_ctl0_reg.auto_block_sel_en = 0;
			} else {
				dc2h_cap_ctl0_reg.triple_buf_en = 0;
				dc2h_cap_ctl0_reg.auto_block_sel_en = 1;
			}
		}
	}
	dc2h_cap_ctl0_reg.cap_write_len = CAP_LEN;
	dc2h_cap_ctl0_reg.cap_write_rem = rem;
	rtd_outl(DC2H_DMA_dc2h_Cap_CTL0_reg, dc2h_cap_ctl0_reg.regValue);

	dc2h_cap_ctl1_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_CTL1_reg);
	dc2h_cap_ctl1_reg.cap_water_lv =CAP_LEN ;
	dc2h_cap_ctl1_reg.cap_write_num = num;
	rtd_outl(DC2H_DMA_dc2h_Cap_CTL1_reg, dc2h_cap_ctl1_reg.regValue);

	//dc2h_seq_mode_ctrl1_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg);
	//dc2h_seq_mode_ctrl1_reg.cap_en = 1;
	//rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg, dc2h_seq_mode_ctrl1_reg.regValue);

	dc2h_seq_byte_channel_swap_reg.regValue = rtd_inl(DC2H_DMA_dc2h_seq_byte_channel_swap_reg);
	dc2h_seq_byte_channel_swap_reg.dma_1byte_swap = 1;
	dc2h_seq_byte_channel_swap_reg.dma_2byte_swap = 1;
	dc2h_seq_byte_channel_swap_reg.dma_4byte_swap = 1;
	dc2h_seq_byte_channel_swap_reg.dma_8byte_swap = 1;
	if(get_VT_Pixel_Format() == VT_CAP_ARGB8888)
		dc2h_seq_byte_channel_swap_reg.dma_channel_swap = 0;
	else
		dc2h_seq_byte_channel_swap_reg.dma_channel_swap = 1;
	rtd_outl(DC2H_DMA_dc2h_seq_byte_channel_swap_reg, dc2h_seq_byte_channel_swap_reg.regValue);

	dc2h_seq_mode_ctrl1_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg);
	dc2h_seq_mode_ctrl1_reg.cap_en = 1;

	if((get_VT_Pixel_Format() == VT_CAP_ABGR8888)||(get_VT_Pixel_Format() == VT_CAP_ARGB8888)){
		dc2h_seq_mode_ctrl1_reg.argb_dummy_data = 0xFF;
		dc2h_seq_mode_ctrl1_reg.rgb_to_argb_en = 1;
		dc2h_seq_mode_ctrl1_reg.argb_swap = 1;
	}
	else
		dc2h_seq_mode_ctrl1_reg.rgb_to_argb_en = 0;

	if (get_vt_VtSwBufferMode()) {
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg);
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.vs_rising_ie = 1;
	}
	dc2h_wait_porch();
	rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg, dc2h_seq_mode_ctrl1_reg.regValue);
	if (get_vt_VtSwBufferMode()) {
		rtd_outl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg, dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue);
	}
	return;
}

unsigned char do_vt_source_capture_proc(void)
{
	/* if video has done overscan in scaler output 
	 * 
	 * source type:
	 * DTV/CP/Playback ==> vdec NN buffer ==> SE stretch
	 * HDMI/AV/ATV/Component ==> i3ddma NN buffer ==> SE stretch
	 *
	*/
	VSC_INPUT_TYPE_T srctype = VSC_INPUTSRC_MAXN;
	unsigned char vt_src_cap_status = FALSE;
	
	    /* first: stop dc2h */
	if(get_dc2h_capture_state() == TRUE)
	{		
		vt_enable_dc2h(FALSE); // stop dc2h
	}

	rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s\n", __FUNCTION__);
	srctype = Get_DisplayMode_Src(SLR_MAIN_DISPLAY);
	rtd_printk(KERN_NOTICE, TAG_NAME, "source type:%d\n",srctype);
	
	if((get_VT_Pixel_Format() == VT_CAP_NV12) || (get_VT_Pixel_Format() == VT_CAP_NV16))
	{
						
		if(((srctype == VSC_INPUTSRC_HDMI) && (get_hdmi_4k_hfr_mode() == HDMI_NON_4K120))
		|| (srctype == VSC_INPUTSRC_ADC) || (srctype == VSC_INPUTSRC_AVD))
		{
			
			vt_src_cap_status = VT_SOURCE_CAP_I3DDMA_BUF;
			rtd_printk(KERN_NOTICE, TAG_NAME, "enable i3ddma src capture flag\n");
		}
		else if((srctype == VSC_INPUTSRC_VDEC) || (srctype == VSC_INPUTSRC_JPEG))
		{
			/* DTV/CP/Playback ==> vdec NN buffer ==> SE stretch  */
			vt_src_cap_status = VT_SOURCE_CAP_VDEC_BUF;
			rtd_printk(KERN_NOTICE, TAG_NAME, " enable vdec src capture flag\n");
		}
		else
		{
			vt_src_cap_status = FALSE;
			rtd_printk(KERN_NOTICE, TAG_NAME, "unsupport source type capture\n");
			return FALSE;
		}

		set_vt_src_cap_status(vt_src_cap_status);
		return TRUE;
	}

	rtd_printk(KERN_NOTICE, TAG_NAME, "[fail] do_vt_source_capture_proc\n");
	return FALSE;
	
}

void do_vt_vdec_srcbuf_capture(void)
{
	int vt_buf_count = 0;
	_RPC_system_setting_info* RPC_SysInfo = NULL;
	
	unsigned char vdec_rdPtr = 0, vedc_status = 0;
	
	unsigned int in_addr_y_tmp = 0, in_addr_uv_tmp = 0;
	unsigned int in_w_tmp = 0, in_h_tmp = 0, in_pitch_y_tmp = 0;
	
	SE_SRC_DST_info seinfo;
	
	//bool status = 0;
    
	vt_buf_count = get_vt_VtBufferNum();

	RPC_SysInfo = scaler_GetShare_Memory_RPC_system_setting_info_Struct();
	
	if(RPC_SysInfo == NULL)
	{
		rtd_printk(KERN_EMERG, TAG_NAME, "[fail]RPC sys info NULL\n");
		return;
	}

	rtd_printk(KERN_NOTICE, TAG_NAME, "func:%s\n", __FUNCTION__);
	
	if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)
	{
		vdec_rdPtr = RPC_SysInfo->SCPU_ISRIINFO_TO_VCPU.rdPtr;
		vedc_status = RPC_SysInfo->SCPU_ISRIINFO_TO_VCPU.pic[vdec_rdPtr].status;
		in_addr_y_tmp = RPC_SysInfo->SCPU_ISRIINFO_TO_VCPU.pic[vdec_rdPtr].SeqBufAddr_Curr;
		in_addr_uv_tmp = RPC_SysInfo->SCPU_ISRIINFO_TO_VCPU.pic[vdec_rdPtr].SeqBufAddr_Curr_UV;

		in_w_tmp = RPC_SysInfo->SCPU_ISRIINFO_TO_VCPU.pic[vdec_rdPtr].Width;
		in_h_tmp = RPC_SysInfo->SCPU_ISRIINFO_TO_VCPU.pic[vdec_rdPtr].Height;
		in_pitch_y_tmp = RPC_SysInfo->SCPU_ISRIINFO_TO_VCPU.pic[vdec_rdPtr].pitch_y;

		seinfo.src_x = 0;
		seinfo.src_y = 0;
		seinfo.src_w = Scaler_ChangeUINT32Endian(in_w_tmp);
		seinfo.src_h = Scaler_ChangeUINT32Endian(in_h_tmp);
		seinfo.src_pitch_y = Scaler_ChangeUINT32Endian(in_pitch_y_tmp);
		//info.src_pitch_c = Scaler_ChangeUINT32Endian(in_pitch_c_tmp);
		seinfo.src_phyaddr = Scaler_ChangeUINT32Endian(in_addr_y_tmp);
		seinfo.src_phyaddr_uv = Scaler_ChangeUINT32Endian(in_addr_uv_tmp);
		seinfo.src_fmt = KGAL_PIXEL_FORMAT_NV12;
	
		rtd_printk(KERN_NOTICE, TAG_NAME, "[vdec buf info] src_w,src_h,src_phyaddr,src_phyaddr_uv:[%d,%d,%x,%x]\n", seinfo.src_w,seinfo.src_h,seinfo.src_phyaddr,seinfo.src_phyaddr_uv);
		rtd_printk(KERN_NOTICE, TAG_NAME, "src_pitch_y=%d\n", seinfo.src_pitch_y);
		
		seinfo.dst_x = 0;
		seinfo.dst_y = 0;
		seinfo.dst_w = vfod_capture_out_W;
		seinfo.dst_h = vfod_capture_out_H;

		seinfo.dst_phyaddr = 0;
		seinfo.dst_phyaddr_uv = 0;
		seinfo.dst_fmt = KGAL_PIXEL_FORMAT_NV12;

		if(vedc_status == 1) //detect Status
		{			
			/* ====== buf count == 1 ,ex:luna command source capture test ===========*/
				/* =======after capture over,stop capture ============*/
			if((vt_buf_count == 1) && (get_vt_src_cap_freeze_for_one_buf_flag() == TRUE)) /*--stream on and dqbuf coming---*/
			{
				write_Index = 0;
				seinfo.dst_phyaddr = CaptureCtrl_VT.cap_buffer[write_Index].phyaddr;
				seinfo.dst_phyaddr_uv = (CaptureCtrl_VT.cap_buffer[write_Index].phyaddr + _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE));
				if(seinfo.dst_phyaddr && seinfo.dst_phyaddr_uv)
				{
					drvif_do_se_stretch(seinfo);
				}
				set_vt_src_cap_status(FALSE); // disable 
				set_vt_src_cap_freeze_for_one_buf_flag(FALSE);	
				
				/* [debug]for dump  vdec buf */
				/*debug_dump_data_to_file(src_phyaddr, src_w, src_h);
				set_vt_src_cap_status(FALSE); // disable 
				set_vt_src_cap_freeze_for_one_buf_flag(FALSE);	*/			
			}		
			else
			{	/* ====== buf count > 1 ,ex: VR360/ACR ===========*/
							/* =======loop wite to buffer ============*/
				if(vt_buf_count != 1)
				{
					write_Index = ((write_Index + 1) % vt_buf_count);
					rtd_printk(KERN_DEBUG, TAG_NAME, "write_Index:%d\n", write_Index);
					
					seinfo.dst_phyaddr = CaptureCtrl_VT.cap_buffer[write_Index].phyaddr;
					seinfo.dst_phyaddr_uv = (CaptureCtrl_VT.cap_buffer[write_Index].phyaddr + _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE));
					if(seinfo.dst_phyaddr && seinfo.dst_phyaddr_uv)
					{
						drvif_do_se_stretch(seinfo);
					}
				}else
				{
					rtd_printk(KERN_NOTICE, TAG_NAME, "[buf0] stream on,wait dqbuf\n");
				}
			}
		}
	}
}

void drvif_dc2h_seqmode_conifg(unsigned char enable, int capWid, int capLen, int capSrc)
{
	ppoverlay_main_den_h_start_end_RBUS main_den_h_start_end_Reg;
	ppoverlay_main_den_v_start_end_RBUS main_den_v_start_end_Reg;
	ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_Reg;
	ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_Reg;

	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;
	
	main_den_h_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_H_Start_End_reg);
	main_den_v_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_V_Start_End_reg);
	main_active_h_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	main_active_v_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_V_Start_End_reg);

	ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);

	pdc2h_hdl = &dc2h_hdl;
	memset(pdc2h_hdl, 0 , sizeof(DC2H_HANDLER));
	pdc2h_hdl->out_size.nWidth = capWid;
	pdc2h_hdl->out_size.nLength = capLen;
	pdc2h_hdl->dc2h_en = enable;					

		
	if(/*(capSrc == 2)&&*/(get_vt_VtCaptureVDC())){
			pdc2h_hdl->in_size.nWidth = DC2H_InputWidth;
			pdc2h_hdl->in_size.nLength = DC2H_InputLength;
			pdc2h_hdl->dc2h_in_sel = _VD_OUTPUT;
	}
	else 
	{
		if(Get_DISPLAY_REFRESH_RATE() == 120) //_120hz panel, ==>b802850c,two_step_uzu_en=1,uzu_4k_120_mode=1
		{
			dc2h_rgb2yuv_dc2h_rgb2yuv_ctrl_RBUS  dc2h_rgb2yuv_ctrl_reg;
			dc2h_rgb2yuv_ctrl_reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg); //9c00
			dc2h_rgb2yuv_ctrl_reg.dc2h_drop_en = 0;
			rtd_outl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg, dc2h_rgb2yuv_ctrl_reg.regValue);
			
			dc2h_rgb2yuv_ctrl_reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg); //9c00
			
			if(KADP_VT_SCALER_OUTPUT == capSrc)   
			{
				pdc2h_hdl->dc2h_in_sel = _TWO_SECOND_UZU; //4k_120 mode 2nd uzu on
				dc2h_rgb2yuv_ctrl_reg.dc2h_drop_en = 0;
				pdc2h_hdl->in_size.nWidth = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta);
				if((pdc2h_hdl->in_size.nWidth % 2) != 0)
				{
					pdc2h_hdl->in_size.nWidth -= 1;
				}	
				if(TRUE == force_enable_two_step_uzu())
				{
					dc2h_rgb2yuv_ctrl_reg.dc2h_drop_en = 1; /* drop 1 pixel */
					pdc2h_hdl->in_size.nWidth = (pdc2h_hdl->in_size.nWidth)/2;
				}
				pdc2h_hdl->in_size.nLength = main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta;
				rtd_outl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg, dc2h_rgb2yuv_ctrl_reg.regValue);
			}
			else if(KADP_VT_DISPLAY_OUTPUT == capSrc)
			{
				if(is_4K2K_capture() == TRUE)
				{
					pdc2h_hdl->dc2h_in_sel = _MAIN_YUV2RGB;
					dc2h_rgb2yuv_ctrl_reg.dc2h_drop_en = 0; /* WOSQRTK-13528 VR quality */
					pdc2h_hdl->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta);
					pdc2h_hdl->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
									
					if(TRUE == force_enable_two_step_uzu())
					{
						dc2h_rgb2yuv_ctrl_reg.dc2h_drop_en = 1; /* drop 1 pixel */
						pdc2h_hdl->in_size.nWidth = (pdc2h_hdl->in_size.nWidth)/2;
					}
				}
				else
				{	
					pdc2h_hdl->dc2h_in_sel = _Memc_mux_Output;
					dc2h_rgb2yuv_ctrl_reg.dc2h_drop_en = 0; /* WOSQRTK-13528 VR quality */
					pdc2h_hdl->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta)/2;
					
					pdc2h_hdl->in_size.nLength = (main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta); 
										
				}
				rtd_outl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg, dc2h_rgb2yuv_ctrl_reg.regValue);
			}
			else if(KADP_VT_OSDVIDEO_OUTPUT == capSrc)
			{
				pdc2h_hdl->dc2h_in_sel = _OSD_MIXER;		
				pdc2h_hdl->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta)/2;
				pdc2h_hdl->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
			}
			else
			{				
				rtd_printk(KERN_EMERG, TAG_NAME, "[Vt error] unknow the capSrc line:%d\n",__LINE__);
			}
		}
		else  // non 4k_120 mode 
		{			
			if(KADP_VT_SCALER_OUTPUT == capSrc)
			{
				pdc2h_hdl->dc2h_in_sel = _MAIN_UZU;
				if (ppoverlay_uzudtg_control1_reg.two_step_uzu_en) {
					pdc2h_hdl->in_size.nWidth = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta)/2;			
					pdc2h_hdl->in_size.nLength = (main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta)/2;
				} else {
					pdc2h_hdl->in_size.nWidth = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta);			
					pdc2h_hdl->in_size.nLength = (main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta);
				}
			}
			else if(KADP_VT_DISPLAY_OUTPUT == capSrc)
			{
				/* pdc2h_hdl->dc2h_in_sel = _Memc_mux_Output; bypass for co-buffer with memc */
				if((get_vt_VtBufferNum() == MAX_CAP_BUF_NUM) && (get_vt_EnableFRCMode() == FALSE))  //VR360 use
					pdc2h_hdl->dc2h_in_sel = _MAIN_YUV2RGB;
				else
					pdc2h_hdl->dc2h_in_sel = _Memc_mux_Output;

				pdc2h_hdl->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta);
				pdc2h_hdl->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
				
			}
			else if(KADP_VT_OSDVIDEO_OUTPUT == capSrc)
			{
				pdc2h_hdl->dc2h_in_sel = _OSD_MIXER;		
				pdc2h_hdl->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta);
				pdc2h_hdl->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
			}
			else
			{				
				rtd_printk(KERN_EMERG, TAG_NAME, "[Vt error] unknow the capSrc line:%d\n",__LINE__);
			}
			
		}
				
	}					

	if (enable == TRUE) 
	{
		
		rtd_printk(KERN_EMERG, TAG_NAME, "[Vt capinfo]vt cap sel=%d input w=%d; input h=%d;output w=%d,output h=%d! \n", pdc2h_hdl->dc2h_in_sel,pdc2h_hdl->in_size.nWidth, pdc2h_hdl->in_size.nLength,pdc2h_hdl->out_size.nWidth,pdc2h_hdl->out_size.nLength);
		if((pdc2h_hdl->out_size.nWidth > pdc2h_hdl->in_size.nWidth) || (pdc2h_hdl->out_size.nLength > pdc2h_hdl->in_size.nLength))
		{
			pdc2h_hdl->out_size.nWidth = VT_CAP_FRAME_WIDTH_2K1k;
			pdc2h_hdl->out_size.nLength = VT_CAP_FRAME_HEIGHT_2K1k;
			if((get_vt_VtBufferNum() < MAX_CAP_BUF_NUM) && (TRUE == force_enable_two_step_uzu()))
			{
				set_use_seDriver_do_scale_flag(TRUE);
				width_src = pdc2h_hdl->out_size.nWidth;
				height_src = pdc2h_hdl->out_size.nLength;
				carvdout_mem_for_vt_2k1k_hfr(CARVDOUT_MEM_FOR_HFR_CASE);
			}
			rtd_printk(KERN_EMERG, TAG_NAME, "[Vt capinfo]vt cap sel=%d input w=%d; input h=%d;output w=%d,output h=%d! \n", pdc2h_hdl->dc2h_in_sel,pdc2h_hdl->in_size.nWidth, pdc2h_hdl->in_size.nLength,pdc2h_hdl->out_size.nWidth,pdc2h_hdl->out_size.nLength);
		}
		
		if(get_vt_VtSwBufferMode())
		{
			if(FALSE == drvif_dc2h_swmode_inforpc(TRUE,get_vt_VtBufferNum(),capWid,capLen))
			{
				rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d RPC fail so not setting dc2h and return!!\n", __FUNCTION__, __LINE__);	
				return;
			}
		}
					
		//if(capSrc == VT_CAP_SRC_VIDEO_NOPQ) {
			//drvif_dc2h_input_overscan_config(main_active_h_start_end_Reg.mh_act_sta, main_active_v_start_end_Reg.mv_act_sta, pdc2h_hdl->in_size.nWidth, pdc2h_hdl->in_size.nLength);
		//} else {
			drvif_dc2h_input_overscan_config(0, 0, pdc2h_hdl->in_size.nWidth, pdc2h_hdl->in_size.nLength);
		//}
		drvif_color_colorspaceyuv2rgbtransfer(pdc2h_hdl->dc2h_in_sel);
		drvif_color_ultrazoom_config_dc2h_scaling_down(pdc2h_hdl);
		if(get_VT_Pixel_Format() == VT_CAP_NV12)
			drvif_vi_config(pdc2h_hdl->out_size.nWidth,pdc2h_hdl->out_size.nLength,0);
		else if (get_VT_Pixel_Format() == VT_CAP_NV16)
			drvif_vi_config(pdc2h_hdl->out_size.nWidth,pdc2h_hdl->out_size.nLength,1);
		else
			drvif_dc2h_seq_config(pdc2h_hdl);
	} 
	else 
	{
		reset_dc2h_hw_setting();  /* disable dc2h and reset dc2h */
		
		if (get_vt_VtSwBufferMode())
		{
			if(FALSE == drvif_dc2h_swmode_inforpc(FALSE,get_vt_VtBufferNum(),capWid,capLen))
			{
				rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d RPC fail when close dc2h!!\n", __FUNCTION__, __LINE__);	
			}
		}		
	}
}

#endif/*qiangzhou:move dc2h driver from kernel to kernel here end*/

void reset_dc2h_hw_setting(void)
{
	dc2h_dma_dc2h_seq_interrupt_enable_RBUS dc2h_dma_dc2h_seq_interrupt_enable_Reg;
	dc2h_vi_dc2h_dmactl_RBUS vi_dmactl_reg;
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_RBUS dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg;
	dc2h_rgb2yuv_dc2h_rgb2yuv_ctrl_RBUS	dc2h_rgb2yuv_ctrl_reg;
	dc2h_scaledown_dc2h_hsd_ctrl0_RBUS dc2h_hsd_ctrl0_reg;
	dc2h_scaledown_dc2h_vsd_ctrl0_RBUS dc2h_vsd_ctrl0_reg;
	dc2h_dma_dc2h_seq_mode_ctrl1_RBUS dc2h_seq_mode_ctrl1_reg;

	
	if (get_vt_VtSwBufferMode())
	{
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg);
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.vs_rising_ie = 0;
		rtd_outl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg, dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue);
		msleep(20);
	}
	
	if ((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16))
	{
		vi_dmactl_reg.regValue = rtd_inl(DC2H_VI_DC2H_DMACTL_reg);
		vi_dmactl_reg.dmaen1 = 0;
		rtd_outl(DC2H_VI_DC2H_DMACTL_reg, vi_dmactl_reg.regValue);		
	}

	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl_reg);
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.dc2h_3dmaskto2d_3dformat = 0;
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.dc2h_3dmaskto2d_en = 0;
	rtd_outl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl_reg, dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.regValue);


	dc2h_rgb2yuv_ctrl_reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg);
	dc2h_rgb2yuv_ctrl_reg.dc2h_in_sel = 0;
	dc2h_rgb2yuv_ctrl_reg.en_rgb2yuv = 0;
	rtd_outl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg, dc2h_rgb2yuv_ctrl_reg.regValue);

	dc2h_hsd_ctrl0_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_HSD_Ctrl0_reg);
	dc2h_hsd_ctrl0_reg.h_zoom_en = 0;
	rtd_outl(DC2H_SCALEDOWN_DC2H_HSD_Ctrl0_reg, dc2h_hsd_ctrl0_reg.regValue);

	dc2h_vsd_ctrl0_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg);
	dc2h_vsd_ctrl0_reg.v_zoom_en = 0;
	dc2h_vsd_ctrl0_reg.buffer_mode = 0;
	rtd_outl(DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg, dc2h_vsd_ctrl0_reg.regValue);
	
	dc2h_seq_mode_ctrl1_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg);
	if((get_VT_Pixel_Format() == VT_CAP_ABGR8888)||(get_VT_Pixel_Format() == VT_CAP_ARGB8888))
		dc2h_seq_mode_ctrl1_reg.rgb_to_argb_en = 0;
	dc2h_seq_mode_ctrl1_reg.cap_en = 0;
	rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg, dc2h_seq_mode_ctrl1_reg.regValue);
	
}
//unsigned int freezebufferaddr;
//unsigned int lastcapbufferindex = 0;
void set_vfod_freezed(unsigned char boffon)
{
	rtd_printk(KERN_DEBUG, TAG_NAME, "fun:%s,boffon=%d\n", __FUNCTION__, boffon);
	if (CaptureCtrl_VT.cap_buffer[0].phyaddr == 0) {
		rtd_printk(KERN_EMERG, TAG_NAME, "[Vt warning]vt no init, so no memory, return freeze action;%s=%d \n", __FUNCTION__, __LINE__);
		return;
	}
#if 0	
	if((get_vt_VtBufferNum()==1)&&(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE)){
		rtd_printk(KERN_EMERG, TAG_NAME, "[Vt warning]%s=%d Vsc not at _MODE_STATE_ACTIVE status,return freeze action!\n", __FUNCTION__, __LINE__);
		return;			
	}
#endif

	if(((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE))
		&& (get_vt_VtBufferNum() == MAX_CAP_BUF_NUM))
	{
		if(wait_dvs_stable_cnt != 0) /* dvs stable once */
		{
			abnormal_dvs_cnt = 0;
			wait_dvs_stable_cnt = 0;
			rtd_printk(KERN_EMERG, TAG_NAME, "reset abnormal_dvs_cnt,wait_dvs_stable_cnt,because not wait dvs stable\n");
		}
		abnormal_dvs_cnt++;
		
		if(1 == abnormal_dvs_cnt) /*happen abnormal_dvs stop dc2h */
		{
			rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE]%d Vbe at abnormal dvs status,could not do vt capture!\n", __LINE__);
			if(TRUE == get_dc2h_capture_state()) /*dc2h already enable*/
			{
				vt_enable_dc2h(FALSE); /*stop dc2h,avoid memory trash,kernel panic KTASKWBS-13022*/
				rtd_printk(KERN_EMERG, TAG_NAME, "stop dc2h done!\n");
			}
			return;
		}
		if(abnormal_dvs_cnt > MAX_CAP_BUF_NUM)
		{
			set_dqbuf_ioctl_fail_flag(TRUE);
			rtd_printk(KERN_EMERG, TAG_NAME, "[Warning]dc2h has been disable because abnormal dvs\n");
			return;
		}
	}
	else
	{
		if(abnormal_dvs_cnt != 0) /* happen abnormal dvs before*/
		{
			wait_dvs_stable_cnt++; 
			if(wait_dvs_stable_cnt == 3) /* dvs wait stable*/
			{
				abnormal_dvs_cnt = 0;
				wait_dvs_stable_cnt = 0;
				set_dqbuf_ioctl_fail_flag(FALSE);
				if(FALSE == get_dc2h_capture_state())
				{
					vt_enable_dc2h(TRUE); /* KTASKWBS-13909 dvs stable again, enable dc2h */
					rtd_printk(KERN_EMERG, TAG_NAME, "enable dc2h done!\n");
				}
			}
		}
	}

	if(get_vt_VtBufferNum() == 1) 
	{
		unsigned int timeoutcount = 0x4ffff;
		dc2h_vi_dc2h_vi_doublebuffer_RBUS dc2h_vi_doublebuffer_Reg;
		dc2h_vi_doublebuffer_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_doublebuffer_reg);
		if(boffon == TRUE) //freeze 
		{
			dc2h_vi_doublebuffer_Reg.vi_db_en = 1;
			if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16))
			{
				dc2h_vi_dc2h_dmactl_RBUS dc2h_vi_dc2h_dmactl_Reg;
				dc2h_vi_dc2h_dmactl_Reg.regValue = rtd_inl(DC2H_VI_DC2H_DMACTL_reg);
				dc2h_vi_dc2h_dmactl_Reg.dmaen1 = 0; //double buffer 
				rtd_outl(DC2H_VI_DC2H_DMACTL_reg,dc2h_vi_dc2h_dmactl_Reg.regValue);
			}
			else
			{				
				dc2h_dma_dc2h_seq_mode_ctrl1_RBUS dc2h_dma_dc2h_seq_mode_ctrl1_Reg;
				dc2h_dma_dc2h_seq_mode_ctrl1_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg);
				dc2h_dma_dc2h_seq_mode_ctrl1_Reg.cap_en = 0; //double buffer
				rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg,dc2h_dma_dc2h_seq_mode_ctrl1_Reg.regValue);
			}
			dc2h_vi_doublebuffer_Reg.vi_db_apply = 1;
			rtd_outl(DC2H_VI_DC2H_vi_doublebuffer_reg, dc2h_vi_doublebuffer_Reg.regValue);
			
			do{
				if(DC2H_VI_DC2H_vi_doublebuffer_get_vi_db_apply(rtd_inl(DC2H_VI_DC2H_vi_doublebuffer_reg)))
					timeoutcount--;
				else{
					break;
				}
								
			}while(timeoutcount);	

			if(timeoutcount == 0)
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s, freeze action timeout\n", __FUNCTION__);
			}
			IndexOfFreezedVideoFrameBuffer = 0;
		}
		else
		{
			dc2h_vi_doublebuffer_Reg.vi_db_en = 1;  //enable double buffer
			if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16))
			{
				dc2h_vi_dc2h_dmactl_RBUS dc2h_vi_dc2h_dmactl_Reg;
				dc2h_vi_dc2h_dmactl_Reg.regValue = rtd_inl(DC2H_VI_DC2H_DMACTL_reg);
				dc2h_vi_dc2h_dmactl_Reg.dmaen1 = 1; /* enable dma with double buffer control*/ 
				rtd_outl(DC2H_VI_DC2H_DMACTL_reg,dc2h_vi_dc2h_dmactl_Reg.regValue);
			}
			else
			{				
				dc2h_dma_dc2h_seq_mode_ctrl1_RBUS dc2h_dma_dc2h_seq_mode_ctrl1_Reg;
				dc2h_dma_dc2h_seq_mode_ctrl1_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg);
				dc2h_dma_dc2h_seq_mode_ctrl1_Reg.cap_en = 1; 
				rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg,dc2h_dma_dc2h_seq_mode_ctrl1_Reg.regValue);
			}
			dc2h_vi_doublebuffer_Reg.vi_db_apply = 1;
			rtd_outl(DC2H_VI_DC2H_vi_doublebuffer_reg, dc2h_vi_doublebuffer_Reg.regValue);
			do{
				if(DC2H_VI_DC2H_vi_doublebuffer_get_vi_db_apply(rtd_inl(DC2H_VI_DC2H_vi_doublebuffer_reg)))
					timeoutcount--;
				else
					break;
							
			}while(timeoutcount);	

			if(timeoutcount == 0)
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s, unfreeze action timeout\n", __FUNCTION__);
			}
			/* wait one frame */
			timeoutcount = 0x4ffff;
			dc2h_vi_doublebuffer_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_doublebuffer_reg);
			dc2h_vi_doublebuffer_Reg.vi_db_apply = 1;
			rtd_outl(DC2H_VI_DC2H_vi_doublebuffer_reg, dc2h_vi_doublebuffer_Reg.regValue);
			do{
				if(DC2H_VI_DC2H_vi_doublebuffer_get_vi_db_apply(rtd_inl(DC2H_VI_DC2H_vi_doublebuffer_reg)))
					timeoutcount--;
				else
					break;
							
			}while(timeoutcount);	

			if(timeoutcount == 0)
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s, wait one frame timeout\n", __FUNCTION__);
			}
		}
		dc2h_vi_doublebuffer_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_doublebuffer_reg);
		dc2h_vi_doublebuffer_Reg.vi_db_en = 0; /* doubel buffer only work when buffer_num=1 */
		rtd_outl(DC2H_VI_DC2H_vi_doublebuffer_reg, dc2h_vi_doublebuffer_Reg.regValue);
		
	} else {
		if (boffon == TRUE) {
			if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16)){
				if(get_vt_VtBufferNum()==5) {
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);
					dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);
			
					if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[4].phyaddr;
						IndexOfFreezedVideoFrameBuffer = 4;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
						IndexOfFreezedVideoFrameBuffer = 0;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
						IndexOfFreezedVideoFrameBuffer = 1;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
						IndexOfFreezedVideoFrameBuffer = 2;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
						IndexOfFreezedVideoFrameBuffer = 3;
					}
			
					/*  mark below code
					if(lastcapbufferaddr == dc2h_cap_l3_start_Reg.regValue){
						if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[4].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[4].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
						}
					}
					
					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 3;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 4;
					}  WOSQRTK-13247's fix return repeat index when input framerate slower than display framerate */

					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} else if(get_vt_VtBufferNum()==4) {
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);
					dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);

			
					if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
					}
			
					if(lastcapbufferaddr == dc2h_cap_l3_start_Reg.regValue){
						if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
						}
					}
					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 3;
					}	
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} else if(get_vt_VtBufferNum()==3) {
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);
					dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);


		           if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
						   IndexOfFreezedVideoFrameBuffer = 2;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
						   IndexOfFreezedVideoFrameBuffer = 0;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
						   IndexOfFreezedVideoFrameBuffer = 1;
		           }

		          /* if(lastcapbufferaddr == dc2h_cap_l3_start_Reg.regValue){
		                   if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
		                   }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		                   }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		                   }
		           }
		           if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 1;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 2;
		           } WOSQRTK-13247's fix return repeat index when input framerate slower than display framerate */
		           
		           rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }else if(get_vt_VtBufferNum()==2) {
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);
					dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);

		           if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		           }

		           if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 1;
		           }    
		           rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }

			} else {
				if(get_vt_VtBufferNum()==5) {
					dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
					dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
					
					dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);
			
					if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[4].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
					}
			
					if(lastcapbufferaddr == dc2h_cap_l3_start_Reg.regValue){
						if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[4].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[4].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
						}
					}
					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 3;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 4;
					}
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} else if(get_vt_VtBufferNum()==4) {
					dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
					dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
					
					dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);
			
					if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
					}
			
					if(lastcapbufferaddr == dc2h_cap_l3_start_Reg.regValue){
						if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
						}
					}
					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						IndexOfFreezedVideoFrameBuffer = 3;
					}	
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} else if(get_vt_VtBufferNum()==3) {
		           dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
		           dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
		           unsigned int lastcapbufferaddr = 0;
		           dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
		           
		           dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);

		           if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
		           }else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		           }else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		           }

		           if(lastcapbufferaddr == dc2h_cap_l3_start_Reg.regValue){
		                   if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
		                   }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		                   }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		                   }
		           }
		           if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 1;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 2;
		           }       
		           rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }else if(get_vt_VtBufferNum()==2) {
		           dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
		           dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
		           unsigned int lastcapbufferaddr = 0;
		           dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
		           
		           dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);

		           if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		           }else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		           }
		           if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   IndexOfFreezedVideoFrameBuffer = 1;
		           }   
		           rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }
				
			}
		}else{
			//rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,0);
		}
	}
}
unsigned char is_4K2K_capture(void)
{
	if((vt_cap_frame_max_width <= VT_CAP_FRAME_WIDTH_2K1k) && (vt_cap_frame_max_height <= VT_CAP_FRAME_HEIGHT_2K1k))
		return FALSE;
	else
		return TRUE;
}

unsigned int sort_boundary_addr_max_index(void)
{

	unsigned int i,index = 0;
	unsigned int bufnum = 5;
	unsigned int max = CaptureCtrl_VT.cap_buffer[0].phyaddr;
	
	for( i = 1; i < bufnum; i++)
	{
		if(CaptureCtrl_VT.cap_buffer[i].phyaddr > max)
		{
			max = CaptureCtrl_VT.cap_buffer[i].phyaddr;
			index = i;
		}
		
	}
	return index;
}

unsigned int sort_boundary_addr_min_index(void)
{
	unsigned int i,index = 0;
	unsigned int bufnum = 5;
	unsigned int min = CaptureCtrl_VT.cap_buffer[0].phyaddr;
	
	for( i = 1; i < bufnum; i++)
	{
		if(CaptureCtrl_VT.cap_buffer[i].phyaddr < min)
		{
			min = CaptureCtrl_VT.cap_buffer[i].phyaddr;
			index = i;
		}
		
	}
	return index;
}

void set_cap_buffer_size_by_AP(unsigned int usr_width, unsigned int usr_height)
{
	vt_cap_frame_max_width = usr_width;
	vt_cap_frame_max_height = usr_height;
#if 0	
	if((usr_width <= VT_CAP_FRAME_WIDTH_2K1k) && (usr_height <= VT_CAP_FRAME_HEIGHT_2K1k))
	{
		vt_cap_frame_max_width = VT_CAP_FRAME_WIDTH_2K1k;
		vt_cap_frame_max_height = VT_CAP_FRAME_HEIGHT_2K1k;
	}
	else
	{
		vt_cap_frame_max_width = VT_CAP_FRAME_WIDTH_4K2K;
		vt_cap_frame_max_height = VT_CAP_FRAME_HEIGHT_4K2K;
	}
#endif
	rtd_printk(KERN_DEBUG, TAG_NAME,"VT capture buffer size:(%d,%d)\n",vt_cap_frame_max_width, vt_cap_frame_max_height);
}

extern int MEMC_Get_DMA_malloc_address(UINT8 status, UINT32 *DMA_release_start, UINT32 *DMA_release_size);

unsigned char Capture_BufferMemInit_VT(unsigned int buffernum) {
	unsigned int size;// = VT_CAPTURE_BUFFER_UNITSIZE;
	int i;
#if 0/*need get cache allocate*/	
	unsigned long malloccacheaddr;
#endif
	unsigned int allocatetotalsize, carvedout_size;
	unsigned int physicalstartaddree = 0;
	unsigned int align96phisicaladdr = 0;
	unsigned int DMA_release_start = 0;
#ifndef CONFIG_MEMC_BYPASS	
#ifdef BR_MEM_FROM_MEMC
	unsigned int DMA_release_size;
#endif
#endif
/*#ifndef CONFIG_MEMC_BYPASS	//non-bypass memc 	

	unsigned int DMA_release_size;
#endif*/
	if((get_VT_Pixel_Format() == VT_CAP_ABGR8888)||(get_VT_Pixel_Format() == VT_CAP_ARGB8888))
		VT_CAPTURE_BUFFER_UNITSIZE = _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height*4,__12KPAGE);//mali gpu need 4k align,merlin4 ic need 96 align,so public align is 12k
	else if(get_VT_Pixel_Format() == VT_CAP_NV12)
		VT_CAPTURE_BUFFER_UNITSIZE = _ALIGN((vt_cap_frame_max_width*vt_cap_frame_max_height),__12KPAGE)+_ALIGN((vt_cap_frame_max_width*vt_cap_frame_max_height/2),__12KPAGE);
	else if(get_VT_Pixel_Format() == VT_CAP_NV16)
		VT_CAPTURE_BUFFER_UNITSIZE = _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE)+_ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE); 
	else
		VT_CAPTURE_BUFFER_UNITSIZE = _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height*3,__12KPAGE);

	size = VT_CAPTURE_BUFFER_UNITSIZE;
	
	pr_debug("[VT]size=0x%x\n",size);

	//allocatetotalsize = dvr_size_alignment_cma(size * buffernum);
	//allocatetotalsize = size * buffernum+__12KPAGE;

	if(buffernum == 1 || buffernum == 3)/*Capture frame case:use cma memory*/
	{
		DMA_release_start = 0;
	} else {/*VR 360 case, borrow MEMC memory*/
	
#ifndef CONFIG_MEMC_BYPASS	//non-bypass memc 

#ifdef BR_MEM_FROM_MEMC

		if(MEMC_Get_DMA_malloc_address(TRUE, &DMA_release_start,&DMA_release_size) == 0)
			rtd_printk(KERN_NOTICE, TAG_NAME,"MEMC_Get_DMA_malloc_address TRUE addr:%x size %d \n",DMA_release_start,DMA_release_size);
			
		if(get_vt_EnableFRCMode() == TRUE)
		{
			DMA_release_start = 0;
		}
#else
		if((get_vt_EnableFRCMode() == FALSE) && buffernum == MAX_CAP_BUF_NUM)
			DMA_release_start = 0;
#endif

#else
		carvedout_size = (unsigned int)carvedout_buf_query(CARVEDOUT_SCALER_MEMC, (void *)&DMA_release_start);
		if((DMA_release_start == 0) || (allocatetotalsize > carvedout_size))
		{			
			rtd_printk(KERN_EMERG, TAG_NAME,"[Warning]:query VT carvedout memory failed (%x/%x)\n", DMA_release_start, carvedout_size);
			return FALSE;
		}		
#endif

	}
	if(DMA_release_start != 0)
	{
#ifndef CONFIG_MEMC_BYPASS	//non-bypass memc 
		
		physicalstartaddree = DMA_release_start;
		align96phisicaladdr = _ALIGN(physicalstartaddree,__12KPAGE);//mali gpu need start address 4k align,merlin4 ic need 96 align,so public align is 12k

#ifndef BR_MEM_FROM_MEMC
/*-----------capture memory all form memc---------------------*/
		for (i = 0; i < buffernum; i++) 
		{
			if(CaptureCtrl_VT.cap_buffer[i].phyaddr == 0)
			{
				CaptureCtrl_VT.cap_buffer[i].cache = NULL;
				//CaptureCtrl_VT.cap_buffer[i].phyaddr =  (unsigned int)virt_to_phys((void*)CaptureCtrl_VT.cap_buffer[i].cache);
				CaptureCtrl_VT.cap_buffer[i].phyaddr =	(align96phisicaladdr + i*size);
				CaptureCtrl_VT.cap_buffer[i].size = size;
				rtd_printk(KERN_NOTICE, TAG_NAME,"[VT memory allocate] buf[%d]=(%d KB), phy(%lx) \n", i, CaptureCtrl_VT.cap_buffer[i].size >> 10, (unsigned long)CaptureCtrl_VT.cap_buffer[i].phyaddr);
			}
		}	

/*-----------capture memory form memc <one buffer> + cma <4 buffers>---------------------*/
#else
		// vr360 case, vt 1st buffer has allocate from memc ok (borrow 20M)
		if(CaptureCtrl_VT.cap_buffer[0].phyaddr == 0)
		{
			CaptureCtrl_VT.cap_buffer[0].cache = NULL;
			CaptureCtrl_VT.cap_buffer[0].phyaddr =  align96phisicaladdr;
			CaptureCtrl_VT.cap_buffer[0].size = size;
			rtd_printk(KERN_NOTICE, TAG_NAME,"[VT memory allocate] buf[0]=(%d KB), phy(%lx) \n", CaptureCtrl_VT.cap_buffer[0].size >> 10, (unsigned long)CaptureCtrl_VT.cap_buffer[0].phyaddr);
		}
		// vr360 case, vt the 2nd~5th buffers allocate from cma
		allocatetotalsize = size + __12KPAGE;
		
		for(i = 1; i < buffernum; i++)
		{
			physicalstartaddree = pli_malloc(allocatetotalsize, GFP_DCU1_FIRST);
			if(physicalstartaddree == INVALID_VAL)
			{
				rtd_printk(KERN_EMERG, TAG_NAME,"[error]:VT pli_malloc memory failed,index(%d)(%x)\n", i,physicalstartaddree);
				return FALSE;
			}
			VtAllocatedBufferStartAdress[i] = physicalstartaddree;
			
			align96phisicaladdr = _ALIGN(physicalstartaddree,__12KPAGE);
			
			if(CaptureCtrl_VT.cap_buffer[i].phyaddr == 0)
			{			
				CaptureCtrl_VT.cap_buffer[i].cache = NULL;
				CaptureCtrl_VT.cap_buffer[i].phyaddr =	align96phisicaladdr;
				CaptureCtrl_VT.cap_buffer[i].size = size;
				rtd_printk(KERN_NOTICE, TAG_NAME,"[VT memory allocate] buf[%d]=(%d KB), phy(%lx) \n", i, CaptureCtrl_VT.cap_buffer[i].size >> 10, (unsigned long)CaptureCtrl_VT.cap_buffer[i].phyaddr);
			}
			
		}
#endif
		/* dcmt monitor for dc2h ------start--DCU1 mem9 ~ DCU1 mem13 ===> index9-13----*/

		for(i = 0; i < buffernum; i++)
		{
			dcmt_monitor_dc2h_range(9+i, CaptureCtrl_VT.cap_buffer[i].phyaddr, CaptureCtrl_VT.cap_buffer[i].size);
		}
		/* dcmt monitor for dc2h ------end------*/
		
#else
		
		physicalstartaddree = DMA_release_start;
		align96phisicaladdr = _ALIGN(physicalstartaddree,__12KPAGE);//mali gpu need start address 4k align,merlin4 ic need 96 align,so public align is 12k
		// after bypass memc, assign memory
		for (i = 0; i < buffernum; i++) 
		{
			if(CaptureCtrl_VT.cap_buffer[i].phyaddr == 0)
			{
				CaptureCtrl_VT.cap_buffer[i].cache = NULL;
				//CaptureCtrl_VT.cap_buffer[i].phyaddr =  (unsigned int)virt_to_phys((void*)CaptureCtrl_VT.cap_buffer[i].cache);
				CaptureCtrl_VT.cap_buffer[i].phyaddr =  (align96phisicaladdr + i*size);
				CaptureCtrl_VT.cap_buffer[i].size = size;
				rtd_printk(KERN_NOTICE, TAG_NAME,"[VT memory allocate][memc all bypass] buf[%d]=(%d KB), phy(%lx) \n", i, CaptureCtrl_VT.cap_buffer[i].size >> 10, (unsigned long)CaptureCtrl_VT.cap_buffer[i].phyaddr);
			}
		}
#endif

	}
	else
	{
		/* carvedout memory from DDR */
		if((buffernum == 1) || (buffernum == 3))
		{	
			allocatetotalsize = (size * buffernum +__12KPAGE);
				
			carvedout_size = 0;//(unsigned int)carvedout_buf_query(CARVEDOUT_VT, (void *)&physicalstartaddree);
			
			if ((carvedout_size == 0) || (physicalstartaddree == 0) || (allocatetotalsize > carvedout_size)) 
			{
				rtd_printk(KERN_NOTICE, TAG_NAME,"VT retry pli(%x/%x)\n", physicalstartaddree, carvedout_size);
				/*return FALSE;*/
				
				/* retry pli malloc */
				physicalstartaddree = pli_malloc(allocatetotalsize, GFP_DCU1_FIRST);
				if(physicalstartaddree == INVALID_VAL)
				{				
					rtd_printk(KERN_EMERG, TAG_NAME,"[error]VT retry pli malloc fail(%x)\n", physicalstartaddree);
					return FALSE;
				}
				else
					VtAllocatedBufferStartAdress[0] = physicalstartaddree;
			}
			
			align96phisicaladdr = _ALIGN(physicalstartaddree,__12KPAGE);
			for (i = 0; i < buffernum; i++) 
			{
				if(CaptureCtrl_VT.cap_buffer[i].phyaddr == 0)
				{
					CaptureCtrl_VT.cap_buffer[i].cache = NULL;
					CaptureCtrl_VT.cap_buffer[i].phyaddr =	(align96phisicaladdr + i*size);
					CaptureCtrl_VT.cap_buffer[i].size = size;
					rtd_printk(KERN_EMERG, TAG_NAME,"[VT memory allocate] buf[%d]=(%d KB), phy(%lx) \n", i, CaptureCtrl_VT.cap_buffer[i].size >> 10, (unsigned long)CaptureCtrl_VT.cap_buffer[i].phyaddr);
				}
			}
		}
		else
		{
			allocatetotalsize = size + __12KPAGE;
			/* vr360 case: vt 5 buffers allocate memory from cam by call pli_malloc 5 times ----start */
			for (i = 0; i < buffernum; i++)
			{			
				physicalstartaddree = pli_malloc(allocatetotalsize, GFP_DCU1_FIRST);
				if(physicalstartaddree == INVALID_VAL)
				{
					rtd_printk(KERN_EMERG, TAG_NAME,"[error]:VT pli_malloc memory failed,index(%d)(%x)\n", i,physicalstartaddree);
					return FALSE;
				}
				VtAllocatedBufferStartAdress[i] = physicalstartaddree;
				
				align96phisicaladdr = _ALIGN(physicalstartaddree,__12KPAGE);
				
				CaptureCtrl_VT.cap_buffer[i].cache = NULL;
				CaptureCtrl_VT.cap_buffer[i].phyaddr =	align96phisicaladdr;
				CaptureCtrl_VT.cap_buffer[i].size = size;
				rtd_printk(KERN_EMERG, TAG_NAME,"[VT memory allocate][5] buf[%d]=(%d KB), phy(%lx) \n", i, CaptureCtrl_VT.cap_buffer[i].size >> 10, (unsigned long)CaptureCtrl_VT.cap_buffer[i].phyaddr);
			}
			/* vr360 case: vt 5 buffers allocate memory from cam by call pli_malloc 5 times ----end */
		
			/* dcmt monitor for dc2h ------start--DCU1 mem9 ~ DCU1 mem13 ===> index9-13----*/

			for(i = 0; i < buffernum; i++)
			{
				dcmt_monitor_dc2h_range(9+i, CaptureCtrl_VT.cap_buffer[i].phyaddr, CaptureCtrl_VT.cap_buffer[i].size);
			}
			/* dcmt monitor for dc2h ------end------*/
		}

		//VtAllocatedBufferStartAdress = physicalstartaddree;

#if 0
		//align96phisicaladdr = dvr_memory_alignment((unsigned long)physicalstartaddree, (size * buffernum));
		align96phisicaladdr = _ALIGN(physicalstartaddree,__12KPAGE);//mali gpu need start address 4k align,merlin4 ic need 96 align,so public align is 12k
		//malloccacheaddr = malloccacheaddr+(align96phisicaladdr - physicalstartaddree);		

		rtd_printk(KERN_EMERG, TAG_NAME,"Not VR360normal capture case : pli_malloc memory physicalstartaddree = %x;align96phisicaladdr = %x\n",physicalstartaddree,align96phisicaladdr);

		for (i=0; i<buffernum; i++) {
			if(CaptureCtrl_VT.cap_buffer[i].phyaddr == 0){
				CaptureCtrl_VT.cap_buffer[i].cache = NULL;
				//CaptureCtrl_VT.cap_buffer[i].phyaddr =  (unsigned int)virt_to_phys((void*)CaptureCtrl_VT.cap_buffer[i].cache);
				CaptureCtrl_VT.cap_buffer[i].phyaddr =	(align96phisicaladdr + i*size);
				CaptureCtrl_VT.cap_buffer[i].size = size;
				//rtd_printk(KERN_EMERG, TAG_NAME,"[VT memory allocate] buf[%d]=%lx(%d KB), phy(%lx) \n", i, (unsigned long)CaptureCtrl_VT.cap_buffer[i].cache, CaptureCtrl_VT.cap_buffer[i].size >> 10, (unsigned long)CaptureCtrl_VT.cap_buffer[i].phyaddr);
			}
		}
#endif
		
	}
	return TRUE;
}

void Capture_BufferMemDeInit_VT(unsigned int buffernum) 
{
	int i;
	
#ifndef CONFIG_MEMC_BYPASS	//no-bypass memc 

	if(buffernum == 5)
	{
	/* dcmt clear monitor for dc2h ------start--DCU1 mem9 ~ DCU1 mem13 ===> index9-13----*/
		for(i = 0; i < buffernum; i++)
			dcmt_clear_monitor(9+i);		
	}
	
#endif

	for (i = 0; i < buffernum; i++)
	{
		if(VtAllocatedBufferStartAdress[i])
		{
			pli_free(VtAllocatedBufferStartAdress[i]);
			VtAllocatedBufferStartAdress[i] = 0;
		}
	}
	if(cardout_phyaddr_hfr_pli)
	{
		pli_free(cardout_phyaddr_hfr_pli);
		cardout_phyaddr_hfr_pli = 0;
	}
	cardout_phyaddr_hfr_align96 = 0;
	
#if 0	 
	else {
		unsigned int DMA_release_start;
		unsigned int DMA_release_size;		
		if(MEMC_Get_DMA_malloc_address(FALSE, &DMA_release_start,&DMA_release_size)==0)
			rtd_printk(KERN_NOTICE, TAG_NAME,"MEMC_Get_DMA_malloc_address FALSE addr:%x size %d \n",DMA_release_start,DMA_release_size);
	}
#endif

	for (i = 0; i < buffernum; i++)
	{
		if (CaptureCtrl_VT.cap_buffer[i].phyaddr)
		{
			CaptureCtrl_VT.cap_buffer[i].cache = NULL;
			CaptureCtrl_VT.cap_buffer[i].phyaddr = (unsigned long)NULL;
			CaptureCtrl_VT.cap_buffer[i].size = 0;
		}
		rtd_printk(KERN_DEBUG, TAG_NAME,"[MemDeInit_VT]VtAllocatedBufferStartAdress[%d]= %ld\n", i, VtAllocatedBufferStartAdress[i]);
	}

	rtd_printk(KERN_DEBUG, TAG_NAME,"[VT memory free] Deinit done!\n");
}
extern int vt_dump_data_to_file(unsigned int bufferindex, unsigned int size);

/*qiangzhou implement for k2h vt with dc2h squence rgb mode*/

void drvif_DC2H_dispD_CaptureConfig(VT_CUR_CAPTURE_INFO capInfo)
{
	unsigned char waitbufferms = 80;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
	struct timespec64 timeout_s;
#else
	struct timespec timeout_s;
#endif	
#if 0//trash debug
	if((capInfo.enable==1)){
		rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d memset 000000000000000000000!!\n", __FUNCTION__, __LINE__);	
		memset((unsigned char *)VtAllocatedBufferStartAdress, 0 , (VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)));
	}
#endif
	if(capInfo.enable == TRUE){
		if (CaptureCtrl_VT.cap_buffer[0].phyaddr == 0) {
			rtd_printk(KERN_EMERG, TAG_NAME, "[Vt warning]vt no init, so no memory, return setting;%s=%d \n", __FUNCTION__, __LINE__);
			return;
		}

		if ((capInfo.capWid > vt_cap_frame_max_width)||(capInfo.capLen > vt_cap_frame_max_height)) {
			rtd_printk(KERN_EMERG, TAG_NAME, "[VT warning]drvif_DC2H_dispD_CaptureConfig:could not support max than 2k1k output w=%d,output h=%d! \n", capInfo.capWid,capInfo.capLen);
			return;
		}	
#if 0
		if((get_vt_VtBufferNum()==1)&&(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE)){
			rtd_printk(KERN_DEBUG, TAG_NAME, "[warning]%s=%d Vsc not at _MODE_STATE_ACTIVE status,could not do vt capture!\n", __FUNCTION__, __LINE__);
			//return;			
		}
#endif

		if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16))
		{		
			dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
			dc2h_vi_dc2h_vi_ads_start_c_RBUS dc2h_vi_dc2h_vi_ads_start_c_Reg;
			dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_reg;
		
			dc2h_dma_dc2h_cap_boundaryaddr1_RBUS dc2h_cap_boundaryaddr1_reg;
			dc2h_dma_dc2h_cap_boundaryaddr2_RBUS dc2h_cap_boundaryaddr2_reg;
			unsigned int vt_use_buffer_num = 0;

			vt_use_buffer_num = get_vt_VtBufferNum();
			dc2h_cap_l3_start_reg.regValue= 0;
			rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);  //used record freeze buffer

			DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
			IoReg_Write32(DC2H_VI_DC2H_vi_ads_start_y_reg, DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue);
			
			dc2h_vi_dc2h_vi_ads_start_c_Reg.regValue = (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr + _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE);
			IoReg_Write32(DC2H_VI_DC2H_vi_ads_start_c_reg, dc2h_vi_dc2h_vi_ads_start_c_Reg.regValue);
			//rtd_printk(KERN_EMERG, TAG_NAME, "nv12 or nv16 %s=%d \n", __FUNCTION__, __LINE__);

#ifndef CONFIG_MEMC_BYPASS	//no-bypass memc 

			if((vt_use_buffer_num == 5))
			{
				unsigned int up = sort_boundary_addr_max_index();
				unsigned int low =  sort_boundary_addr_min_index();
				
				dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[up].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[up].size;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

				dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[low].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
			}
			else
			{
				
				dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[vt_use_buffer_num-1].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[vt_use_buffer_num-1].size;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);
				
				dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
			}
#else	// bypass memc	
		
			dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[vt_use_buffer_num-1].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[vt_use_buffer_num-1].size;
			rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);
			
			dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
			rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
#endif			
		} 
		else 
		{
			dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_reg;
			dc2h_dma_dc2h_cap_l2_start_RBUS dc2h_cap_l2_start_reg;
			dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_reg;

			dc2h_dma_dc2h_cap_boundaryaddr1_RBUS dc2h_cap_boundaryaddr1_reg;
			dc2h_dma_dc2h_cap_boundaryaddr2_RBUS dc2h_cap_boundaryaddr2_reg;

			if (get_vt_VtCaptureVDC()){
				dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);  // block0, DDR buffer L1 start address

				dc2h_cap_l2_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[1].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);  // block0, DDR buffer L2 start address

				dc2h_cap_l3_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[2].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);  // block0, DDR buffer L3 start address

				dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[2].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[2].size;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

				dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);			
			} else {
				if(get_vt_VtBufferNum()==5) {
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);  // block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);  // block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);  // block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[4].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[4].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
				} else if(get_vt_VtBufferNum()==4){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[3].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[3].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);

				} else if(get_vt_VtBufferNum()==3){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[2].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[2].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);

				}else if(get_vt_VtBufferNum()==2){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[1].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[1].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);

				}else if(get_vt_VtBufferNum()==1){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr +  (UINT32)CaptureCtrl_VT.cap_buffer[0].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VT.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
				}
			}
		}
		drvif_dc2h_seqmode_conifg(TRUE, capInfo.capWid, capInfo.capLen, capInfo.capSrc);

		if(get_vt_VtBufferNum()==1){
			waitbufferms = 20;
		}
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		timeout_s = ns_to_timespec64(waitbufferms * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s,  HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#else
		timeout_s = ns_to_timespec(waitbufferms * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s, NULL, HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#endif	
		if(get_vt_VtBufferNum()==1) {
			if((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE)){				
				rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE]%s=%d Vbe at abnormal dvs status,stop vt capture!\n", __FUNCTION__, __LINE__);
				/*abonrmal timing closed dc2h*/
				drvif_dc2h_seqmode_conifg(FALSE, capInfo.capWid, capInfo.capLen, capInfo.capSrc);
			}
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
			timeout_s = ns_to_timespec64(waitbufferms * 1000 * 1000);
			hrtimer_nanosleep(&timeout_s,  HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#else
			timeout_s = ns_to_timespec(waitbufferms * 1000 * 1000);
			hrtimer_nanosleep(&timeout_s, NULL, HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#endif				
		}
#if 0//trash debug		
		if((capInfo.capLen==1080)&&(capInfo.capWid==1920)&&(capInfo.capSrc==0)&&(capInfo.enable==1)){
			rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d dump all allocate buffer!!\n", __FUNCTION__, __LINE__); 
			vt_dump_data_to_file(0, (VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)));
		}

		if((capInfo.enable==1)){
			rtd_printk(KERN_EMERG, TAG_NAME,"data1 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+1))));
			rtd_printk(KERN_EMERG, TAG_NAME,"data2 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+2))));
			rtd_printk(KERN_EMERG, TAG_NAME,"data3 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+3))));
			rtd_printk(KERN_EMERG, TAG_NAME,"data4 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(VT_CAP_FRAME_MAX_WIDTH*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+4))));
		}
#endif
	} else {
		if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16)){		
			dc2h_scaledown_dc2h_444to422_ctrl_RBUS dc2h_scaledown_dc2h_444to422_ctrl_reg;
			
			dc2h_scaledown_dc2h_444to422_ctrl_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_444to422_CTRL_reg);
			if(VTDumpLocation == KADP_VT_SCALER_OUTPUT)
				dc2h_scaledown_dc2h_444to422_ctrl_reg.cbcr_swap_en =0;
			rtd_outl(DC2H_SCALEDOWN_DC2H_444to422_CTRL_reg, dc2h_scaledown_dc2h_444to422_ctrl_reg.regValue);  //used record freeze buffer
		}
		drvif_dc2h_seqmode_conifg(FALSE, capInfo.capWid, capInfo.capLen, capInfo.capSrc);
	}
}

void vt_reqbuf0_for_src_capture(void)
{	
			
	rtd_printk(KERN_DEBUG, TAG_NAME, "%s\n", __FUNCTION__);
	Capture_BufferMemDeInit_VT(get_vt_VtBufferNum());

	set_vt_function(FALSE);
	rtd_printk(KERN_NOTICE, TAG_NAME, "%s Success;%d \n", __FUNCTION__, __LINE__);
	if ((get_vt_EnableFRCMode()==FALSE))
	{
		//360vr close FRC, so end 360vr need reopen frc
		//please close memc here
		MEMC_Set_malloc_address(TRUE);
		set_vt_EnableFRCMode(TRUE);
		
		rtd_printk(KERN_EMERG, TAG_NAME, "VT finalize EnableFRCMode;%s=%d \n", __FUNCTION__, __LINE__);
		if(get_film_mode_parameter().enable == _DISABLE){
			rtd_printk(KERN_NOTICE, TAG_NAME,"[VR360] exit vt_frc_mode, set mc on!!\n");
			if(0 /*(Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 490) &&
				(Get_DISPLAY_REFRESH_RATE() != 120)*/){
				Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);	//4k 50/60Hz, enable MC clock with mute on
			}
			else{
				Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);	//not 4k 50/60Hz, enable MEMC clock with mute on
			}
			Scaler_MEMC_outMux(_ENABLE,_ENABLE);	//db on, mux on
			drvif_memc_outBg_ctrl(_DISABLE);
		}
		
	}	
}

unsigned char do_vt_reqbufs(unsigned int buf_cnt)
{
	/*for vt_v4l2_ioctl_reqbufs allocate capture buffer memory*/
	
	if(0 == buf_cnt) /* Release buffers by setting buf_cnt = 0*/
	{	
		if((vfod_capture_location == KADP_VT_SCALER_OUTPUT) && (get_video_do_overscan_state()) && (get_src_cap_enable_status() == TRUE))
		{
			vt_reqbuf0_for_src_capture();
			rtd_printk(KERN_NOTICE, TAG_NAME, "reqbufs(0)for src se capture\n");
		}
		else if((vfod_capture_location == KADP_VT_DISPLAY_OUTPUT) || (vfod_capture_location == KADP_VT_SCALER_OUTPUT))
		{			
			if(HAL_VT_Finalize() == FALSE)
			{			
				rtd_printk(KERN_NOTICE, TAG_NAME, "%s,release buffers fail\n", __FUNCTION__);
				return FALSE; 
			}
			rtd_printk(KERN_NOTICE, TAG_NAME, "reqbufs(0)for dc2h capture\n");
		}
		else
		{
			rtd_printk(KERN_EMERG, TAG_NAME, "func:%s,unsupport capture_location\n", __FUNCTION__);
			return FALSE;
		}
		return TRUE;  
	}
	else
	{			
		down(&VT_Semaphore);
		if (Capture_BufferMemInit_VT(buf_cnt) == FALSE) 
		{
			rtd_printk(KERN_EMERG, TAG_NAME, "VT init allocate memory fail;%s=%d \n", __FUNCTION__, __LINE__);
			up(&VT_Semaphore);
			return FALSE;
		}
		
		set_vt_VtBufferNum(buf_cnt);
		if(1 == buf_cnt)
			set_vt_VtSwBufferMode(FALSE);
		else
			set_vt_VtSwBufferMode(TRUE);
		set_vt_VtCaptureVDC(FALSE);
		
		rtd_printk(KERN_DEBUG, TAG_NAME, "reqbufs(%d) success\n", buf_cnt);
		up(&VT_Semaphore);
		return TRUE;
		
	}
}

unsigned char do_vt_streamoff(void)
{
	if(get_vt_function() == TRUE)
	{
		if((vfod_capture_location == KADP_VT_SCALER_OUTPUT) && (get_video_do_overscan_state()) && (get_src_cap_enable_status() == TRUE))
		{
			if(get_vt_src_cap_status() != FALSE)
			{
				set_vt_src_cap_status(FALSE);
				set_vt_src_cap_freeze_for_one_buf_flag(FALSE);
				write_Index = 0;
				reset_debug_src_cap_enable_status();
				
				rtd_printk(KERN_NOTICE, TAG_NAME, "%s,src se capture", __FUNCTION__);
			}
			return TRUE;
		}
		else if((vfod_capture_location == KADP_VT_DISPLAY_OUTPUT) || (vfod_capture_location == KADP_VT_SCALER_OUTPUT))
		{		
			if(get_dc2h_capture_state() == TRUE)
			{
				vt_enable_dc2h(FALSE);
				rtd_printk(KERN_NOTICE, TAG_NAME, "%s,dc2h capture", __FUNCTION__);
			}
			return TRUE;
		}
		else
		{
			rtd_printk(KERN_EMERG, TAG_NAME, "func:%s,unsupport capture_location\n", __FUNCTION__);
			return FALSE;
		}
	}
	else
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "can't do streamoff,%s=%d \n", __FUNCTION__, __LINE__);
		return FALSE;
	}
}

unsigned char do_vt_capture_streamon(void)
{
	ppoverlay_display_timing_ctrl1_RBUS display_timing_ctrl1_reg;
	down(&VT_Semaphore);

	display_timing_ctrl1_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);
	
	if (display_timing_ctrl1_reg.disp_en == 0)/*means d domain clock off, stop capture*/
	{
		rtd_printk(KERN_EMERG, TAG_NAME, "[Warning Vt]%s=%d D domain clock is off status,could not do vt capture!\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;	
	}

	if(get_vt_function() == FALSE)
	{		
		set_vt_function(TRUE);
		
		if((vfod_capture_location == KADP_VT_SCALER_OUTPUT) && (get_video_do_overscan_state() == TRUE)
			&& (get_src_cap_enable_status() == TRUE))
		{
			rtd_printk(KERN_NOTICE, TAG_NAME, "[streamon]do vt src capture\n");
			
			/*if dumplocation=scaler output and video path has do overscan,
				so for geting no overscan data, will use SE capture from i3ddma or vdec */
				
			if(do_vt_source_capture_proc() == FALSE)
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "[Fail]vt source capture flow\n");
				up(&VT_Semaphore);
				return FALSE;
			}
		
			up(&VT_Semaphore);
			return TRUE;
		}
		else if((vfod_capture_location == KADP_VT_DISPLAY_OUTPUT) || (vfod_capture_location == KADP_VT_SCALER_OUTPUT))
		{		
			
			curCapInfo.enable =  1; //iMode;
			curCapInfo.capMode = VT_CAP_MODE_SEQ;
			
			curCapInfo.capSrc =  vfod_capture_location;  //0:scaler output 1:display output 	
			curCapInfo.capWid = vfod_capture_out_W; //iWid;
			curCapInfo.capLen = vfod_capture_out_H;
			
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);
			
			VFODState.bEnabled = TRUE;
			VFODState.bAppliedPQ=TRUE;
			VFODState.bFreezed =FALSE;
			VFODState.framerateDivide = get_framerateDivide();
			VTDumpLocation = KADP_VT_DISPLAY_OUTPUT;
			rtd_printk(KERN_DEBUG, TAG_NAME, "%s Success\n", __FUNCTION__);

			up(&VT_Semaphore);
			return TRUE;
		}
		else
		{
			rtd_printk(KERN_EMERG, TAG_NAME, "func:%s,unsupport capture_location\n", __FUNCTION__);
			up(&VT_Semaphore);
			return FALSE;
		}
	}
	else
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT aready streamon,do nothing;%s=%d \n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return TRUE;
	}
}

unsigned char HAL_VT_InitEx(unsigned int buffernum)
{
	ppoverlay_display_timing_ctrl1_RBUS display_timing_ctrl1_reg;
	down(&VT_Semaphore);
	
	if((buffernum<=0)||(buffernum>5)) {/*max support 5 buffer mode*/
		buffernum = 5;
	}

	rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d buffernum=%d\n", __FUNCTION__, __LINE__,buffernum);

	if ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)
		&&(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_STATE) ==  _MODE_STATE_ACTIVE)){
		if(get_vdec_securestatus()==TRUE){	
			rtd_printk(KERN_EMERG, TAG_NAME, "[Warning vdecsvp]%s=%d Vdec source security is TRUE,could not do vt capture!\n", __FUNCTION__, __LINE__);
			up(&VT_Semaphore);
			return FALSE;
		}
	}

	display_timing_ctrl1_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);
	if (display_timing_ctrl1_reg.disp_en == 0)/*means d domain clock off, stop capture*/
	{
		rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VT]D domain clock is off status,could not do vt capture!\n");
		up(&VT_Semaphore);
		return FALSE;	
	}
#if 1
	if((buffernum == 1)&&(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE)){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[Warning VT]Vsc not at _MODE_STATE_ACTIVE status\n");
		//up(&VT_Semaphore);
		//return FALSE;			
	}
#endif

	if(((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE))
		&& (get_vt_VtBufferNum() == 5)){ /* add vr360 condition(5 buffers),avoid capture out of range */
		rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE][VT] Vbe at abnormal dvs status,could not do vt capture!\n");
		up(&VT_Semaphore);
		return FALSE;			
	}
	
	if(get_vt_function()==FALSE) {	
	
		curCapInfo.enable = 1; //iMode;
		curCapInfo.capMode = VT_CAP_MODE_SEQ;
	
		curCapInfo.capSrc =  vfod_capture_location;  //0:scaler output 1:display output		
		curCapInfo.capWid = vfod_capture_out_W; //iWid;
		curCapInfo.capLen = vfod_capture_out_H;

	//just do memory allocate in HAL_VT_initEx
		if (Capture_BufferMemInit_VT(buffernum) == FALSE) {
			curCapInfo.enable = 0; //iMode;
			rtd_printk(KERN_EMERG, TAG_NAME, "VT init allocate memory fail;%s=%d \n", __FUNCTION__, __LINE__);
			up(&VT_Semaphore);
			return FALSE;
		}
		set_vt_function(TRUE);
		set_vt_VtBufferNum(buffernum);
		if(buffernum==1)
			set_vt_VtSwBufferMode(FALSE);
		else
			set_vt_VtSwBufferMode(TRUE);
		set_vt_VtCaptureVDC(FALSE);
		
		//drvif_DC2H_dispD_CaptureConfig(curCapInfo);  //just do memory allocate in HAL_VT_initEx
#if 0/*data dump verify*/		
		msleep(1000);
		vt_dump_data_to_file(0, 3*1920*1080);
#endif
		VFODState.bEnabled = TRUE;
		VFODState.bAppliedPQ=TRUE;
		VFODState.bFreezed =FALSE;
		VFODState.framerateDivide = get_framerateDivide();
		//VTDumpLocation = vfod_capture_location;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT init Success;%s=%d \n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT have inited,do nothing;%s=%d \n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return TRUE;
	}
	
}

unsigned char HAL_VT_Init(void)
{
	rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d \n", __FUNCTION__, __LINE__);		

	if(HAL_VT_InitEx(5)==FALSE)
		return FALSE;
	else
		return TRUE;
#if 0/*ATV enter dc2h test code*/
	down(&VT_Semaphore);
	VIDEO_RECT_T inregion;
	VIDEO_RECT_T outregion;
	inregion.x = 0x96;
	inregion.y = 0x14;
	inregion.w = 1440;
	inregion.h = 288;

	outregion.x = 0;
	outregion.y = 0;
	outregion.w = 1440;
	outregion.h = 288;	
	rtk_dc2h_capturevdc_config(TRUE, inregion, outregion);

	msleep(2000);
	//vt_dump_data_to_file(0);
	Scaler_SubMDispWindow_VFB(TRUE);

	up(&VT_Semaphore);
#endif
}

extern void MEMC_Set_malloc_address(UINT8 status);
unsigned char HAL_VT_Finalize(void)
{
	down(&VT_Semaphore);
	if(get_vt_function()==TRUE) {
#ifdef ENABLE_VR360_DATA_FS_FLOW
		INPUT_TIMING_INDEX index = get_current_pattern_index();
		if(index == VO_4K2K_60){
			rtd_printk(KERN_EMERG, TAG_NAME,"[func:%s] enter datafrc proc.\n", __FUNCTION__);
			scaler_vsc_vr360_enter_datafrc_proc();
		}
#endif
		rtd_printk(KERN_EMERG, TAG_NAME, "%s start\n", __FUNCTION__);
		if(get_dc2h_capture_state() == TRUE)
		{
			curCapInfo.enable = 0; //iMode;
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);
		}
		
		Capture_BufferMemDeInit_VT(get_vt_VtBufferNum());
		set_vt_VtBufferNum(5);
		IndexOfFreezedVideoFrameBuffer = 0;
		//set_VT_Pixel_Format(VT_CAP_RGB888);
		set_vt_VtSwBufferMode(FALSE);
		VFODState.bEnabled = FALSE;
		VFODState.bAppliedPQ = TRUE;
		VFODState.bFreezed = FALSE;
		VFODState.framerateDivide = 1;
		VTDumpLocation = KADP_VT_MAX_LOCATION;
		set_vt_function(FALSE);
		set_dqbuf_ioctl_fail_flag(FALSE);
		abnormal_dvs_cnt = 0;
		wait_dvs_stable_cnt = 0;
		set_use_seDriver_do_scale_flag(FALSE);
		rtd_printk(KERN_EMERG, TAG_NAME, "%s done\n", __FUNCTION__);
		if ((get_vt_EnableFRCMode()==FALSE))
		{
			//360vr close FRC, so end 360vr need reopen frc
			//please close memc here
			MEMC_Set_malloc_address(TRUE);
			set_vt_EnableFRCMode(TRUE);
			
			rtd_printk(KERN_EMERG, TAG_NAME, "VT finalize EnableFRCMode;%s \n", __FUNCTION__);
			if(get_film_mode_parameter().enable == _DISABLE){
				rtd_printk(KERN_NOTICE, TAG_NAME,"[VR360] exit vt_frc_mode, set mc on!!\n");
				if(0 /*(Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440) &&
					(Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 490) &&
					(Get_DISPLAY_REFRESH_RATE() != 120)*/){
					Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);	//4k 50/60Hz, enable MC clock with mute on
				}
				else{
					if(FALSE == force_enable_two_step_uzu()) /* input 120 memc always bypass */
						Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);	//not 4k 50/60Hz, enable MEMC clock with mute on
				}
				if(FALSE == force_enable_two_step_uzu()){
					Scaler_MEMC_outMux(_ENABLE,_ENABLE);	//db on, mux on
				}
				
				drvif_memc_outBg_ctrl(_DISABLE);
			}
			
		}
		up(&VT_Semaphore);	
		return TRUE;
	} else {
		rtd_printk(KERN_EMERG, TAG_NAME, "VT have finalized,do nothing;%s=%d \n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return TRUE;
	}

}

unsigned char HAL_VT_GetDeviceCapability(KADP_VT_DEVICE_CAPABILITY_INFO_T *pDeviceCapabilityInfo)
{
	down(&VT_Semaphore);
	pDeviceCapabilityInfo->numOfVideoWindow = 1;
	up(&VT_Semaphore);
	return TRUE;
}


unsigned char HAL_VT_GetVideoFrameBufferCapability(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_VIDEO_FRAME_BUFFER_CAPABILITY_INFO_T *pVideoFrameBufferCapabilityInfo)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	pVideoFrameBufferCapabilityInfo ->numOfVideoFrameBuffer = get_vt_VtBufferNum();//i3ddma triple buffer mode

	if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16)){	
		pVideoFrameBufferCapabilityInfo ->numOfPlane = KADP_VT_VIDEO_FRAME_BUFFER_PLANE_SEMI_PLANAR;
	} else {
		pVideoFrameBufferCapabilityInfo ->numOfPlane = KADP_VT_VIDEO_FRAME_BUFFER_PLANE_INTERLEAVED;//sequence buffer
	}
	up(&VT_Semaphore);
	return TRUE;
}

unsigned char HAL_VT_GetVideoFrameOutputDeviceCapability(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_CAPABILITY_INFO_T *pVideoFrameOutputDeviceCapabilityInfo)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlEnabled = TRUE;
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlFreezed = TRUE;//VI block mode disble endma
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlFramerateDivide = FALSE;
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlPQ = FALSE;
	up(&VT_Semaphore);
	return TRUE;
}

unsigned char HAL_VT_GetVideoFrameOutputDeviceLimitation(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_LIMITATION_INFO_T *pVideoFrameOutputDeviceLimitationInfo)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	pVideoFrameOutputDeviceLimitationInfo->maxResolution = (KADP_VT_RECT_T){0,0,VT_CAP_FRAME_WIDTH_4K2K,VT_CAP_FRAME_HEIGHT_4K2K};
	pVideoFrameOutputDeviceLimitationInfo->bLeftTopAlign = FALSE;
	pVideoFrameOutputDeviceLimitationInfo->bSupportInputVideoDeInterlacing =FALSE;
	pVideoFrameOutputDeviceLimitationInfo->bSupportDisplayVideoDeInterlacing = FALSE;
	pVideoFrameOutputDeviceLimitationInfo->bSupportScaleUp = FALSE;
	pVideoFrameOutputDeviceLimitationInfo->scaleUpLimitWidth = 0;
	pVideoFrameOutputDeviceLimitationInfo->scaleUpLimitHeight = 0;
	pVideoFrameOutputDeviceLimitationInfo->bSupportScaleDown = TRUE;
	pVideoFrameOutputDeviceLimitationInfo->scaleDownLimitWidth = 60;//nfactor upto 32
	pVideoFrameOutputDeviceLimitationInfo->scaleDownLimitHeight = 34;
	up(&VT_Semaphore);
	return TRUE;
}

unsigned char HAL_VT_GetAllVideoFrameBufferProperty(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_VIDEO_FRAME_BUFFER_PROPERTY_INFO_T *pVideoFrameBufferProperty)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE) {
		/*rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel: pVideoFrameBufferProperty->ppPhysicalAddress addr =%x\n", (unsigned int)(pVideoFrameBufferProperty->ppPhysicalAddress));*/

		if(get_VT_Pixel_Format() == VT_CAP_NV16){	
			pVideoFrameBufferProperty->pixelFormat = KADP_VT_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_YUV422_SEMI_PLANAR;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid;		
		}else if(get_VT_Pixel_Format() == VT_CAP_NV12){ 
			pVideoFrameBufferProperty->pixelFormat = KADP_VT_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_YUV420_SEMI_PLANAR;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid;		
		}else if((get_VT_Pixel_Format() == VT_CAP_ABGR8888)||(get_VT_Pixel_Format() == VT_CAP_ARGB8888)) {
			pVideoFrameBufferProperty->pixelFormat = KADP_VT_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_ARGB;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid*4, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid*4;
		} else {
			pVideoFrameBufferProperty->pixelFormat = KADP_VT_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_RGB;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid*3, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid*3;
		}

		pVideoFrameBufferProperty->height = curCapInfo.capLen;
		pVideoFrameBufferProperty->ppPhysicalAddress0 = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress1 = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress2 = CaptureCtrl_VT.cap_buffer[2].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress3 = CaptureCtrl_VT.cap_buffer[3].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress4 = CaptureCtrl_VT.cap_buffer[4].phyaddr;
		pVideoFrameBufferProperty->vfbbuffernumber = get_vt_VtBufferNum();
		up(&VT_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

void carvdout_mem_for_vt_2k1k_hfr(unsigned int tsize) /* actual size */
{
	unsigned int carvedout_size = 0;
	unsigned int allocatetotalsize = 0;
	unsigned int carvdout_phyaddr_hfr = 0;
	
	allocatetotalsize = (tsize + __12KPAGE);
	carvedout_size = 0;//(unsigned int)carvedout_buf_query(CARVEDOUT_VT, (void *)&carvdout_phyaddr_hfr);
	
	if ((carvedout_size == 0) || (carvdout_phyaddr_hfr == 0) || (allocatetotalsize > carvedout_size))
	{
		rtd_printk(KERN_NOTICE, TAG_NAME,"retry pli(%x/%x)\n", carvdout_phyaddr_hfr, carvedout_size);
		carvdout_phyaddr_hfr = pli_malloc(allocatetotalsize, GFP_DCU1_FIRST);	

		if(carvdout_phyaddr_hfr == INVALID_VAL)
		{				
			rtd_printk(KERN_EMERG, TAG_NAME,"[error]VT retry pli malloc fail(%x)\n", carvdout_phyaddr_hfr);
			return;
		}
		else
			cardout_phyaddr_hfr_pli = carvdout_phyaddr_hfr;
	}
	cardout_phyaddr_hfr_align96 = _ALIGN(carvdout_phyaddr_hfr,__12KPAGE);

	rtd_printk(KERN_NOTICE, TAG_NAME,"hfr (%x/%x)\n", cardout_phyaddr_hfr_align96, carvedout_size);
}

void Use_SE_ScaleUp(unsigned char idx)
{
	SE_SRC_DST_info seinfo;
	unsigned int s_time = 0;
	unsigned int end_time = 0xaA0;
	
	memset(&seinfo,0, sizeof(SE_SRC_DST_info));

	s_time = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90;
	
	if(0 != cardout_phyaddr_hfr_align96)
	{
		/*use se stretch to copy  start */
		seinfo.src_x = 0;
		seinfo.src_y = 0;
		seinfo.src_w = width_src;
		seinfo.src_h = height_src;
		seinfo.src_pitch_y = width_src;
			
		seinfo.src_phyaddr = CaptureCtrl_VT.cap_buffer[idx].phyaddr;
		seinfo.src_phyaddr_uv = (CaptureCtrl_VT.cap_buffer[idx].phyaddr + _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE));
		seinfo.src_fmt = KGAL_PIXEL_FORMAT_NV12;

		seinfo.dst_x = 0;
		seinfo.dst_y = 0;
		seinfo.dst_w = width_src;
		seinfo.dst_h = height_src;

		seinfo.dst_fmt = KGAL_PIXEL_FORMAT_NV12;
		
		seinfo.dst_phyaddr = cardout_phyaddr_hfr_align96;
		seinfo.dst_phyaddr_uv = (cardout_phyaddr_hfr_align96 +  _ALIGN((VT_CAP_FRAME_WIDTH_2K1k*VT_CAP_FRAME_HEIGHT_2K1k),__12KPAGE));

		if(seinfo.dst_phyaddr && seinfo.dst_phyaddr_uv)
		{
			drvif_do_se_stretch(seinfo);
		}
		/*=====use se stretch to copy  end ==== */
		
		/* use se stretch to scale up start */
		memset(&seinfo,0, sizeof(SE_SRC_DST_info));
		//rtd_printk(KERN_NOTICE, TAG_NAME, "next scale_up\n");
		
		seinfo.src_x = 0;
		seinfo.src_y = 0;
		seinfo.src_w = width_src;
		seinfo.src_h = height_src;
		seinfo.src_pitch_y = width_src;
		seinfo.src_phyaddr = cardout_phyaddr_hfr_align96;
		seinfo.src_phyaddr_uv = (cardout_phyaddr_hfr_align96 + _ALIGN((VT_CAP_FRAME_WIDTH_2K1k*VT_CAP_FRAME_HEIGHT_2K1k),__12KPAGE));
		seinfo.src_fmt = KGAL_PIXEL_FORMAT_NV12;
	
		seinfo.dst_x = 0;
		seinfo.dst_y = 0;
		seinfo.dst_w = vfod_capture_out_W;
		seinfo.dst_h = vfod_capture_out_H;
	
		seinfo.dst_fmt = KGAL_PIXEL_FORMAT_NV12;
		
		seinfo.dst_phyaddr = CaptureCtrl_VT.cap_buffer[idx].phyaddr;
		seinfo.dst_phyaddr_uv = (CaptureCtrl_VT.cap_buffer[idx].phyaddr + _ALIGN(vt_cap_frame_max_width*vt_cap_frame_max_height,__12KPAGE));

		if(seinfo.dst_phyaddr && seinfo.dst_phyaddr_uv)
		{
			drvif_do_se_stretch(seinfo);
			//rtd_printk(KERN_NOTICE, TAG_NAME, "scale_up done\n");
		}

		end_time = IoReg_Read32(TIMER_SCPU_CLK90K_LO_reg)/90;
	}
	rtd_printk(KERN_NOTICE, TAG_NAME, "se time=%d ms\n",(end_time-s_time));
}


unsigned char HAL_VT_GetVideoFrameBufferIndex(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned int *pIndexOfCurrentVideoFrameBuffer)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	
	if(get_vt_function() == TRUE) 
	{
		if(VFODState.bFreezed == TRUE) 
		{
			*pIndexOfCurrentVideoFrameBuffer = IndexOfFreezedVideoFrameBuffer;

			rtd_printk(KERN_NOTICE, TAG_NAME,  "dq_idx=%d\n", IndexOfFreezedVideoFrameBuffer);
		}
	    else  // if VFOD is not freezed,just return the last captured buffer index
		{
			if(VFODState.bFreezed == TRUE) {
				set_vfod_freezed(FALSE);
				VFODState.bFreezed = FALSE;
			}
		
			if(VFODState.bFreezed == FALSE) {
				set_vfod_freezed(TRUE);
				VFODState.bFreezed = TRUE;
			}
			if(VFODState.bFreezed == TRUE) 
			{
				if(TRUE == get_dqbuf_ioctl_fail_flag())
				{
					return FALSE;
				}
				if((get_vt_VtBufferNum() < MAX_CAP_BUF_NUM) && (TRUE == get_use_seDriver_do_scale_flag()))
				{
					Use_SE_ScaleUp(IndexOfFreezedVideoFrameBuffer);
				}
				*pIndexOfCurrentVideoFrameBuffer = IndexOfFreezedVideoFrameBuffer;

				rtd_printk(KERN_DEBUG, TAG_NAME,  "dq_idx=%d\n", IndexOfFreezedVideoFrameBuffer);
			}
			
#if 0
			if((get_VT_Pixel_Format() == VT_CAP_NV12)||(get_VT_Pixel_Format() == VT_CAP_NV16))
			{
				if(get_vt_VtBufferNum()==5) 
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);
			
					if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[4].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
					}
								
					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 4;
					}
					rtd_printk(KERN_DEBUG, TAG_NAME,  "++--index = %d\n", *pIndexOfCurrentVideoFrameBuffer);
					//rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} 
				else if(get_vt_VtBufferNum()==4) 
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);

			
					if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
					}
			
					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}	
					//rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} 
				else if(get_vt_VtBufferNum()==3)
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);


		           if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		           }

		           if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 1;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 2;
		           }       
		          // rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }
				else if(get_vt_VtBufferNum()==2) 
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);

		           if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
		           }

		           if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 1;
		           }    
		           //rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }

			}
			else
			{	
				if (get_vt_VtBufferNum() == 5)
				{
					dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
				
					//dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					//dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);

					if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[4].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
					}
					
					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[4].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 4;
					}	
				}
				 else if(get_vt_VtBufferNum() == 4)
				 {
					dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
							
					if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[3].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
					}

					if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}
				}
				else if(get_vt_VtBufferNum() == 3)
				{
	               dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
	               unsigned int lastcapbufferaddr = 0;
	               dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);

	               if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[0].phyaddr){
	                       lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
	              }else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[1].phyaddr){
	                       lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[0].phyaddr;
	               }else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VT.cap_buffer[2].phyaddr){
	                       lastcapbufferaddr = CaptureCtrl_VT.cap_buffer[1].phyaddr;
	               }

	               if(lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[0].phyaddr){
	                       *pIndexOfCurrentVideoFrameBuffer = 0;
	               }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[1].phyaddr){
	                       *pIndexOfCurrentVideoFrameBuffer = 1;
	               }else if (lastcapbufferaddr == CaptureCtrl_VT.cap_buffer[2].phyaddr){
	                       *pIndexOfCurrentVideoFrameBuffer = 2;
	               }
	       		}
					
			}
	#endif
				
		}
		up(&VT_Semaphore);
		return TRUE;
	} 
	else 
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

//#define DEBUG_DUMP_VT_CAP 1
unsigned char do_vt_dqbuf(unsigned int *pdqbuf_Index)
{
	if(get_vt_function() == FALSE)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "[fail]func:%s,vt not stream on!!!\n", __FUNCTION__);
		*pdqbuf_Index = 0xFF;
		return FALSE;
	}
	
	if((vfod_capture_location == KADP_VT_SCALER_OUTPUT) && (get_video_do_overscan_state() == TRUE)
			&& (get_src_cap_enable_status() == TRUE))
	{
		if(get_vt_VtBufferNum() == 1)
		{
			/* set freeze flag to wait capture over when buffer number = 1 */
			//unsigned int timeoutcount = 0xffffffff;
			set_vt_src_cap_freeze_for_one_buf_flag(TRUE); /* start freeze for one-buf */
			rtd_printk(KERN_NOTICE, TAG_NAME, "func:%s\n", __FUNCTION__);
			
			while(get_vt_src_cap_freeze_for_one_buf_flag() == TRUE)
			{
				msleep(5);	
			}

			*pdqbuf_Index = 0;
			rtd_printk(KERN_NOTICE, TAG_NAME, "one buffer dqbuf done\n");
		}
		else
		{
			if(write_Index == 0)
			{
				*pdqbuf_Index = (get_vt_VtBufferNum() - 1);
			}
			else{
				*pdqbuf_Index = (write_Index - 1);	
			}
		}

		return TRUE;					
	}
	else
	{		
		//HAL_VT_GetVideoFrameBufferIndex(KADP_VT_VIDEO_WINDOW_0, pdqbuf_Index);
		if(FALSE == HAL_VT_GetVideoFrameBufferIndex(KADP_VT_VIDEO_WINDOW_0, pdqbuf_Index))
		{
			return FALSE;
		}
		else
		{
			
#ifdef DEBUG_DUMP_VT_CAP
		/*for dump y plane data*/
		
		debug_dump_data_to_file(IndexOfFreezedVideoFrameBuffer, vfod_capture_out_W, vfod_capture_out_H);
		//debug_dump_data_to_file(CaptureCtrl_VT.cap_buffer[IndexOfFreezedVideoFrameBuffer].phyaddr, vfod_capture_out_W, vfod_capture_out_H);
#endif
		return TRUE;
		}
	}
}

unsigned char HAL_VT_GetVideoFrameOutputDeviceState(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T *pVideoFrameOutputDeviceState)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	*pVideoFrameOutputDeviceState = VFODState;
	up(&VT_Semaphore);
	if(get_vt_function() == TRUE) {
		return TRUE;
	} else {
		return FALSE;
	}
}

unsigned char HAL_VT_SetVideoFrameOutputDeviceState(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FLAGS_T videoFrameOutputDeviceStateFlags, KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T *pVideoFrameOutputDeviceState)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

	if(videoFrameOutputDeviceStateFlags==KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_NOFX) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_NOFX is do nothing\n");
		return TRUE;
	}
#if 0//not support aplly pq and framerate divide
	if(videoFrameOutputDeviceStateFlags&KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE) {
		printk("KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE is not support\n");
		return FALSE;
	}

	if(videoFrameOutputDeviceStateFlags&KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_APPLIED_PQ) {
		if(pVideoFrameOutputDeviceState->bAppliedPQ)
			curCapInfo.capSrc =  KADP_VT_CAP_SRC_SUBTITLE;
		else
			curCapInfo.capSrc =  KADP_VT_CAP_SRC_UZU;
		VFODState.bAppliedPQ = pVideoFrameOutputDeviceState->bAppliedPQ;
		if(pVideoFrameOutputDeviceState->bAppliedPQ)
			VTDumpLocation = KADP_VT_DISPLAY_OUTPUT;
		else
			VTDumpLocation = KADP_VT_SCALER_OUTPUT;
	}
#endif
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE) { 
		
		if (videoFrameOutputDeviceStateFlags&KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_ENABLED) {
			if (VFODState.bEnabled != pVideoFrameOutputDeviceState->bEnabled) {
				curCapInfo.enable = pVideoFrameOutputDeviceState->bEnabled;
				VFODState.bEnabled = pVideoFrameOutputDeviceState->bEnabled;
				drvif_DC2H_dispD_CaptureConfig(curCapInfo);
			}
		}

		if(videoFrameOutputDeviceStateFlags&KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE) {
			rtd_printk(KERN_DEBUG, TAG_NAME, "KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE is %d\n",pVideoFrameOutputDeviceState->framerateDivide);
			VFODState.framerateDivide = pVideoFrameOutputDeviceState->framerateDivide;
			
		}

		/*freeze do last*/
		if(videoFrameOutputDeviceStateFlags&KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FREEZED) {
			if(get_vt_function() == TRUE) {
				if(pVideoFrameOutputDeviceState->bFreezed == VFODState.bFreezed) {
					rtd_printk(KERN_DEBUG, TAG_NAME, "KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FREEZED is the same as you setting\n");
				} else {
					set_vfod_freezed(pVideoFrameOutputDeviceState->bFreezed);
					VFODState.bFreezed = pVideoFrameOutputDeviceState->bFreezed;
				}
			} else {
				rtd_printk(KERN_NOTICE, TAG_NAME, "VFOD is not inited, so no freeze cmd!\n");
			}
		}
		up(&VT_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

/*qiangzhou:please refer modestate_decide_dtg_m_mode api SLR_INPUT_DTG_MASTER_V_FREQ setting*/
unsigned short Get_VFOD_FrameRate(void)
{
	unsigned short framerate = 0;
	
	if(Get_DISPLAY_REFRESH_RATE() == 120) /*== panel framerate ==*/
	{
		if(((vfod_capture_location == KADP_VT_DISPLAY_OUTPUT) && (is_4K2K_capture() == TRUE)) || (vfod_capture_location == KADP_VT_SCALER_OUTPUT))
		{
			framerate = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_V_FREQ);
			framerate = (framerate+1)/10;
			if(TRUE == force_enable_two_step_uzu())
				framerate = VT_FPS_OUTPUT;
		}
		else
			framerate = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DTG_MASTER_V_FREQ);
	}
	else
	{
		if((vfod_capture_location == KADP_VT_DISPLAY_OUTPUT) && (get_vt_EnableFRCMode() == TRUE)) /*except VR360*/
			framerate = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DTG_MASTER_V_FREQ);
		else{
			framerate = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_V_FREQ);
			framerate = (framerate+1)/10;
		}
	}
	return framerate;
}

unsigned char HAL_VT_GetVideoFrameOutputDeviceFramerate(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned int *pVideoFrameOutputDeviceFramerate)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE) {	
		*pVideoFrameOutputDeviceFramerate = Get_VFOD_FrameRate();
		up(&VT_Semaphore);
		return TRUE;
	} else {
		*pVideoFrameOutputDeviceFramerate = 0;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return pVideoFrameOutputDeviceFramerate 0;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VT_GetVideoFrameOutputDeviceDumpLocation(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_DUMP_LOCATION_TYPE_T *pDumpLocation)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE) {
		*pDumpLocation = VTDumpLocation;
		up(&VT_Semaphore);
		return TRUE;
	} else {
		*pDumpLocation = VTDumpLocation;
		rtd_printk(KERN_NOTICE, TAG_NAME, "[Warning]VT is not Inited when get dump location;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VT_SetVideoFrameOutputDeviceDumpLocation(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_DUMP_LOCATION_TYPE_T dumpLocation)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE)
	{
		if(VTDumpLocation == dumpLocation) {
			rtd_printk(KERN_NOTICE, TAG_NAME, "VTDumpLocation is the same as you setting\n");
		} else {
			curCapInfo.enable = 0; //close vfod first then rerun
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);
			curCapInfo.enable = 1;
#if 0
			if(dumpLocation==KADP_VT_DISPLAY_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_PQ;
			else if(dumpLocation==KADP_VT_SCALER_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_NOPQ;
			else if(dumpLocation==KADP_VT_OSDVIDEO_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_OSD;
#endif
			curCapInfo.capSrc = dumpLocation;
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);
			if(dumpLocation == KADP_VT_SCALER_OUTPUT)
				VFODState.bAppliedPQ = FALSE;
			else
				VFODState.bAppliedPQ = TRUE;

			VTDumpLocation = dumpLocation;

			if(VFODState.bFreezed == TRUE) {
				set_vfod_freezed(TRUE);//revert freezed status
			}
		}
		up(&VT_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "[Warning]VT is not Inited when set dump location;%s=%d\n", __FUNCTION__, __LINE__);
		VTDumpLocation = dumpLocation;
		up(&VT_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VT_GetVideoFrameOutputDeviceOutputInfo(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_DUMP_LOCATION_TYPE_T dumpLocation, KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_OUTPUT_INFO_T *pOutputInfo)
{
	
	ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_reg;
	ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_reg;
	ppoverlay_main_den_h_start_end_RBUS main_den_h_start_end_Reg;
	ppoverlay_main_den_v_start_end_RBUS main_den_v_start_end_Reg;
	unsigned int x,y,w,h;

	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	//Main Active H pos
	main_active_h_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	//Main Active V pos
	main_active_v_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_V_Start_End_reg);

	main_den_h_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_H_Start_End_reg);
	main_den_v_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_V_Start_End_reg);
	
	if((get_vt_function() == TRUE)&&(dumpLocation ==VTDumpLocation )) {
		if((KADP_VT_DISPLAY_OUTPUT==dumpLocation)||(KADP_VT_OSDVIDEO_OUTPUT==dumpLocation)) {
			pOutputInfo->maxRegion.x = 0;
			pOutputInfo->maxRegion.y =0;
			pOutputInfo->maxRegion.w = curCapInfo.capWid;
			pOutputInfo->maxRegion.h = curCapInfo.capLen;

			x = main_active_h_start_end_reg.mh_act_sta;
			y =main_active_v_start_end_reg.mv_act_sta;
			w =main_active_h_start_end_reg.mh_act_end - main_active_h_start_end_reg.mh_act_sta;
			h = main_active_v_start_end_reg.mv_act_end - main_active_v_start_end_reg.mv_act_sta;

			//scaledown:
			x = x*curCapInfo.capWid;
			x = x/(main_den_h_start_end_Reg.mh_den_end -main_den_h_start_end_Reg.mh_den_sta);

			y = y*curCapInfo.capLen;
			y = y/(main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta);

			w = w*curCapInfo.capWid;
			w = w/(main_den_h_start_end_Reg.mh_den_end -main_den_h_start_end_Reg.mh_den_sta);

			h = h*curCapInfo.capLen;
			h = h/(main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta);

			pOutputInfo->activeRegion.x = x;
			pOutputInfo->activeRegion.y =y;
			pOutputInfo->activeRegion.w = w;
			pOutputInfo->activeRegion.h = h;
			pOutputInfo->stride = curCapInfo.capWid;
		} else if(KADP_VT_SCALER_OUTPUT==dumpLocation) {
			pOutputInfo->maxRegion.x = 0;
			pOutputInfo->maxRegion.y =0;
			pOutputInfo->maxRegion.w = curCapInfo.capWid;
			pOutputInfo->maxRegion.h = curCapInfo.capLen;

			pOutputInfo->activeRegion.x = 0;
			pOutputInfo->activeRegion.y =0;
			pOutputInfo->activeRegion.w = curCapInfo.capWid;
			pOutputInfo->activeRegion.h = curCapInfo.capLen;

			pOutputInfo->stride = curCapInfo.capWid;
		}	
		up(&VT_Semaphore);
		return TRUE;
	} else {
		pOutputInfo->maxRegion.x = 0;
		pOutputInfo->maxRegion.y =0;
		pOutputInfo->maxRegion.w = 0;
		pOutputInfo->maxRegion.h = 0;

		pOutputInfo->activeRegion.x = 0;
		pOutputInfo->activeRegion.y =0;
		pOutputInfo->activeRegion.w =0;
		pOutputInfo->activeRegion.h = 0;

		pOutputInfo->stride = 0;

		rtd_printk(KERN_NOTICE, TAG_NAME, "VFOD is not inited or vfod dump location not matches you want;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VT_SetVideoFrameOutputDeviceOutputRegion(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_DUMP_LOCATION_TYPE_T dumpLocation, KADP_VT_RECT_T *pOutputRegion)
{
	if (videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

	if ((pOutputRegion->w > VT_CAP_FRAME_WIDTH_4K2K) || (pOutputRegion->h > VT_CAP_FRAME_HEIGHT_4K2K)) {
		rtd_printk(KERN_EMERG, TAG_NAME, "[VT warning]HAL_VT_SetVideoFrameOutputDeviceOutputRegion:could not support max than 4k2k output w=%d,output h=%d! \n", pOutputRegion->w,pOutputRegion->h);
		return FALSE;
	}
	rtd_printk(KERN_EMERG, TAG_NAME, "[VT info]HAL_VT_SetVideoFrameOutputDeviceOutputRegion:output w=%d,output h=%d,dumplocation=%d\n", pOutputRegion->w,pOutputRegion->h,dumpLocation);

	if(dumpLocation == KADP_VT_MAX_LOCATION)
	{
		rtd_printk(KERN_EMERG, TAG_NAME, "[error]%s=%d invalid capture location!\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	if((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE)){
		rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE]%s=%d Vbe at abnormal dvs status,could not do vt capture!\n", __FUNCTION__, __LINE__);
		return FALSE;			
	}
	
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE)
	{

		if((dumpLocation==VTDumpLocation)&&(pOutputRegion->w==curCapInfo.capWid)&&(pOutputRegion->h==curCapInfo.capLen)) {
			rtd_printk(KERN_NOTICE, TAG_NAME, "all SetVideoFrameOutputDeviceOutputRegion is the same with now\n");
		} else if((pOutputRegion->x!=0)||(pOutputRegion->y!=0)) {
			rtd_printk(KERN_NOTICE, TAG_NAME, "[warning]only support output region x y is 0\n");
			up(&VT_Semaphore);
			return FALSE;
		} else if((pOutputRegion->w>(Get_DISP_DEN_END_HPOS() - Get_DISP_DEN_STA_HPOS()))||(pOutputRegion->w<60)||(pOutputRegion->h>(Get_DISP_DEN_END_VPOS() - Get_DISP_DEN_STA_VPOS()))||(pOutputRegion->h<34)) {
			rtd_printk(KERN_NOTICE, TAG_NAME, "[warning]OutputRegion over limitation!!!!\n");
			up(&VT_Semaphore);
			return FALSE;
		} else {
			curCapInfo.enable = 0; //close vfod first then rerun
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);
			
#if 0
			if(dumpLocation==KADP_VT_DISPLAY_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_PQ;
			else if(dumpLocation==KADP_VT_SCALER_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_NOPQ;
			else if(dumpLocation==KADP_VT_OSDVIDEO_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_OSD;
#endif
			if((pOutputRegion->w > vt_cap_frame_max_width) || (pOutputRegion->h > vt_cap_frame_max_height))
			{
				//if target capture size large than vt allocate buffer size
				// 1st release VT allocate buffer memory, HW  capture has already disable
				
				Capture_BufferMemDeInit_VT(get_vt_VtBufferNum());

				//2nd vt use new size to allocate memory
				set_cap_buffer_size_by_AP(pOutputRegion->w, pOutputRegion->h);

				//re-allocate memory with size that AP set
				if(Capture_BufferMemInit_VT(get_vt_VtBufferNum()) == FALSE) 
				{
					rtd_printk(KERN_NOTICE, TAG_NAME, "VT init allocate memory fail,%s=%d \n", __FUNCTION__, __LINE__);
					up(&VT_Semaphore);
					return FALSE;
				}
			}
			curCapInfo.capSrc = dumpLocation;
			curCapInfo.capWid = pOutputRegion->w;
			curCapInfo.capLen = pOutputRegion->h;
			curCapInfo.enable = 1; //restart VT
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);
			if(dumpLocation==KADP_VT_SCALER_OUTPUT)
				VFODState.bAppliedPQ = FALSE;
			else
				VFODState.bAppliedPQ = TRUE;

			VTDumpLocation = dumpLocation;

			if(VFODState.bFreezed == TRUE)
			{
				set_vfod_freezed(TRUE);//revert freezed status
			}
		}
		up(&VT_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

#include <linux/hrtimer.h>
unsigned char HAL_VT_WaitVsync(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	if(get_vt_function() == TRUE) {
		unsigned int sleeptime;
		
		unsigned int vtframerate;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		struct timespec64 timeout_s;
#else
		struct timespec timeout_s;
#endif
		unsigned int waitvsyncframerate;
		//vtframerate = Get_VFOD_FrameRate();/*Get_VFOD_FrameRate not return 0*/
		vtframerate = VT_FPS_OUTPUT; /* vt fiexd fps=60*/
		
		if(VFODState.framerateDivide != 0)
			waitvsyncframerate = vtframerate/VFODState.framerateDivide;
		else
			waitvsyncframerate = vtframerate;

		sleeptime = 1000/waitvsyncframerate;
	
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		timeout_s = ns_to_timespec64(sleeptime * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s,  HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#else
		timeout_s = ns_to_timespec(sleeptime * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s, NULL, HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#endif
		return TRUE;
	} else {
		//rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

}

#if 0
static unsigned char delayN_frame_return_VFB_index(unsigned int delayn,KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) 
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	if(get_vt_function() == TRUE)
	{
		unsigned int sleeptime;
		
		unsigned int vtframerate;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		struct timespec64 timeout_s;
#else
		struct timespec timeout_s;
#endif
		unsigned int waitvsyncframerate;
		vtframerate = Get_VFOD_FrameRate();/*Get_VFOD_FrameRate not return 0*/


		if(VFODState.framerateDivide != 0)
			waitvsyncframerate = vtframerate/VFODState.framerateDivide;
		else
			waitvsyncframerate = vtframerate;

		sleeptime = (1000/waitvsyncframerate)*delayn;
	
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		timeout_s = ns_to_timespec64(sleeptime * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s,  HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#else
		timeout_s = ns_to_timespec(sleeptime * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s, NULL, HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#endif
		return TRUE;
	}
	return FALSE;
}
#endif

unsigned char HAL_VT_GetInputVideoInfo(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_INPUT_VIDEO_INFO_T *pInputVideoInfo)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE) {
		pInputVideoInfo->region.x = 0;
		pInputVideoInfo->region.y = 0;
		pInputVideoInfo->region.w =Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPH_ACT_WID_PRE);
		pInputVideoInfo->region.h = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPV_ACT_LEN_PRE);
		if (Scaler_DispGetStatus(SLR_MAIN_DISPLAY, SLR_DISP_INTERLACE) == TRUE)
		{
			pInputVideoInfo->type = KADP_VT_VIDEO_PROGRESSIVE;
			pInputVideoInfo->region.h = pInputVideoInfo->region.h *2;
		} else {
			pInputVideoInfo->type = KADP_VT_VIDEO_PROGRESSIVE;
		}
		pInputVideoInfo->bIs3DVideo = FALSE;
		up(&VT_Semaphore);
		return TRUE;
	} else {
		pInputVideoInfo->region.x = 0;
		pInputVideoInfo->region.y =0;
		pInputVideoInfo->region.w =0;
		pInputVideoInfo->region.h = 0;
		pInputVideoInfo->type = KADP_VT_VIDEO_PROGRESSIVE;
		pInputVideoInfo->bIs3DVideo = FALSE;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return InputVideoregion 0;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VT_GetOutputVideoInfo(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VT_OUTPUT_VIDEO_INFO_T *pOutputVideoInfo)
{
	ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_reg;
	ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_reg;
	unsigned int x,y,w,h;
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	main_active_h_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	main_active_v_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_V_Start_End_reg);
	x = main_active_h_start_end_reg.mh_act_sta;
	y =main_active_v_start_end_reg.mv_act_sta;
	w =main_active_h_start_end_reg.mh_act_end - main_active_h_start_end_reg.mh_act_sta;
	h = main_active_v_start_end_reg.mv_act_end - main_active_v_start_end_reg.mv_act_sta;

	if(get_vt_function() == TRUE) {
		if((KADP_VT_DISPLAY_OUTPUT==VTDumpLocation)||(KADP_VT_OSDVIDEO_OUTPUT==VTDumpLocation)) {
			pOutputVideoInfo->maxRegion.x = Get_DISP_ACT_STA_HPOS();
			pOutputVideoInfo->maxRegion.y = Get_DISP_ACT_STA_VPOS();
			pOutputVideoInfo->maxRegion.w = Get_DISP_ACT_END_HPOS() - Get_DISP_ACT_STA_HPOS();
			pOutputVideoInfo->maxRegion.h = Get_DISP_ACT_END_VPOS() - Get_DISP_ACT_STA_VPOS();

			pOutputVideoInfo->activeRegion.x = x;
			pOutputVideoInfo->activeRegion.y = y;
			pOutputVideoInfo->activeRegion.w = w;
			pOutputVideoInfo->activeRegion.h = h;
			pOutputVideoInfo->type = KADP_VT_VIDEO_PROGRESSIVE;
		} else if(KADP_VT_SCALER_OUTPUT==VTDumpLocation) {
			pOutputVideoInfo->maxRegion.x = x;
			pOutputVideoInfo->maxRegion.y = y;
			pOutputVideoInfo->maxRegion.w = w;
			pOutputVideoInfo->maxRegion.h = h;

			pOutputVideoInfo->activeRegion.x = x;
			pOutputVideoInfo->activeRegion.y = y;
			pOutputVideoInfo->activeRegion.w = w;
			pOutputVideoInfo->activeRegion.h = h;

			pOutputVideoInfo->type = KADP_VT_VIDEO_PROGRESSIVE;
		}		
		up(&VT_Semaphore);
		return TRUE;
	} else {
		pOutputVideoInfo->maxRegion.x = 0;
		pOutputVideoInfo->maxRegion.y =0;
		pOutputVideoInfo->maxRegion.w = 0;
		pOutputVideoInfo->maxRegion.h = 0;

		pOutputVideoInfo->activeRegion.x = 0;
		pOutputVideoInfo->activeRegion.y =0;
		pOutputVideoInfo->activeRegion.w = 0;
		pOutputVideoInfo->activeRegion.h = 0;

		pOutputVideoInfo->type = KADP_VT_VIDEO_PROGRESSIVE;
		up(&VT_Semaphore);
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return OutputVideoregion 0;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
}

unsigned char HAL_VT_GetVideoMuteStatus(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char *pbOnOff)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VT_Semaphore);
	if(get_vt_function() == TRUE) {
		*pbOnOff = get_vsc_mutestatus();
		up(&VT_Semaphore);
		return TRUE;
	} else {
		*pbOnOff = TRUE;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return MuteStatus true;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VT_Semaphore);
		return FALSE;
	}
}

void set_vdec_securestatus(unsigned char value)
{
	if(TRUE == value)  // security status
	{
		if(get_dc2h_capture_state() == TRUE)
		{
			reset_dc2h_hw_setting(); /*stop and reset dc2h */
		}
	}
	
	VdecSecureStatus = value;
}

unsigned char get_vdec_securestatus(void)
{
	
	if((VdecSecureStatus == TRUE) || ((DtvSecureStatus == TRUE) && (is_DTV_flag_get() == TRUE)))
		return TRUE;  //security status
	else
		return FALSE;
}

void set_dtv_securestatus(unsigned char status)
{
	if(TRUE == status)  //dtv security status
	{		
		if(get_dc2h_capture_state() == TRUE)
		{
			reset_dc2h_hw_setting(); /*stop and reset dc2h */
		}
	}

	DtvSecureStatus = status;
}

unsigned char get_svp_protect_status(void)
{
	if(Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)
	{
		return (get_vdec_securestatus());
	}
	else
		return FALSE;	
}
unsigned char HAL_VT_GetVideoFrameBufferSecureVideoState(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char *pIsSecureVideo)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

	if (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) {
		* pIsSecureVideo = get_vdec_securestatus();
	} else {
		* pIsSecureVideo = FALSE;
	}
	return TRUE;

}


static unsigned char VTBlockStatus = FALSE;
unsigned char HAL_VT_GetVideoFrameOutputDeviceBlockState(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char *pbBlockState)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

	down(&VTBlock_Semaphore);
	*pbBlockState = VTBlockStatus;
	up(&VTBlock_Semaphore);
	return TRUE;
}

unsigned char HAL_VT_SetVideoFrameOutputDeviceBlockState(KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char bBlockState)
{
	if(videoWindowID != KADP_VT_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

	down(&VTBlock_Semaphore);
	VTBlockStatus = bBlockState;
	up(&VTBlock_Semaphore);
	return TRUE;
}

unsigned char HAL_VT_set_Pixel_Format(VT_CAP_FMT value)
{
	down(&VT_Semaphore);
	if((value >= VT_CAP_RGB888)&&(value <= VT_CAP_NV16)) {
		if (value != get_VT_Pixel_Format()) {
			set_VT_Pixel_Format(value);
			/*close vt, and release last pixel format buffer start*/
			curCapInfo.enable = 0; //iMode;
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);
			Capture_BufferMemDeInit_VT(get_vt_VtBufferNum());
			/*close vt, and release last pixel format buffer end*/

			/*open vt, and allocate new pixel format buffer start*/
			curCapInfo.enable = 1; //iMode;		
			if (Capture_BufferMemInit_VT(get_vt_VtBufferNum()) == FALSE) {
				rtd_printk(KERN_NOTICE, TAG_NAME, "VT init allocate memory fail when set_VT_Pixel_Format;%s=%d \n", __FUNCTION__, __LINE__);
				up(&VT_Semaphore);
				return FALSE;
			}
			drvif_DC2H_dispD_CaptureConfig(curCapInfo);	
			/*open vt, and allocate new pixel format buffer end*/
		}
		up(&VT_Semaphore);
		return TRUE;
	} else {
		up(&VT_Semaphore);
		return FALSE;
	}
}

void drvif_memc_outBg_ctrl(bool enable)
{
	//unsigned int timeoutcount = 0x3fffff;
	//unsigned int memcdtg_linecnt =0;
	//unsigned int memcdtg_lincntA = 0;
	unsigned int timeoutcount = 0x3ffff;
	
	/*en double buffer */
	ppoverlay_double_buffer_ctrl2_RBUS double_buffer_ctrl_reg;
	ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;

	/*ppoverlay_dv_den_start_end_RBUS dv_den_start_end_reg;
	ppoverlay_new_meas1_linecnt_real_RBUS new_meas1_linecnt_real_Reg;
	
	dv_den_start_end_reg.regValue = rtd_inl(PPOVERLAY_DV_DEN_Start_End_reg);
	do{
		new_meas1_linecnt_real_Reg.regValue = rtd_inl(PPOVERLAY_new_meas1_linecnt_real_reg);
		memcdtg_linecnt = new_meas1_linecnt_real_Reg.memcdtg_line_cnt_rt;
		new_meas1_linecnt_real_Reg.regValue = rtd_inl(PPOVERLAY_new_meas1_linecnt_real_reg);
		memcdtg_lincntA = new_meas1_linecnt_real_Reg.memcdtg_line_cnt_rt;
		if((memcdtg_linecnt == memcdtg_lincntA) && ((memcdtg_linecnt < (dv_den_start_end_reg.dv_den_sta - 5))||(memcdtg_linecnt > (dv_den_start_end_reg.dv_den_end + 22)))) 
		{
			break;  //PPOVERLAY_uzudtg_DV_TOTAL_reg = 18028504  PPOVERLAY_memcdtg_DV_TOTAL_reg = 18028604  PPOVERLAY_DV_total_reg=18028014
		}
		timeoutcount--;
		
	}while(timeoutcount);
	
	if(timeoutcount == 0){
		rtd_printk(KERN_NOTICE, TAG_NAME,"[DV DEN]timeout error!!!\n");
	}*/
	
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_en = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);
	
	/* MEMC_Out_Bg_en  ctrl */
	memc_mux_ctrl_reg.regValue = IoReg_Read32(PPOVERLAY_MEMC_MUX_CTRL_reg);
	memc_mux_ctrl_reg.memc_out_bg_en = enable;
	IoReg_Write32(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue); 

	/* set apply */
	double_buffer_ctrl_reg.regValue =  IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL2_reg);
	double_buffer_ctrl_reg.uzudtgreg_dbuf_set = 1;
	IoReg_Write32(PPOVERLAY_Double_Buffer_CTRL2_reg, double_buffer_ctrl_reg.regValue);

   /* wait apply */
	do{
		double_buffer_ctrl_reg.regValue = rtd_inl(PPOVERLAY_Double_Buffer_CTRL2_reg);
		if(PPOVERLAY_Double_Buffer_CTRL2_get_uzudtgreg_dbuf_set(double_buffer_ctrl_reg.regValue))
			timeoutcount--;
		else
			break;
					
	}while(timeoutcount);	

	if(timeoutcount == 0)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "memc_out_bg_en apply timeout\n");
	}
	
}

unsigned char HAL_VT_EnableFRCMode(unsigned char bEnableFRC)
{
	rtd_printk(KERN_NOTICE, TAG_NAME, "%s=%d bEnableFRC=%d!\n", __FUNCTION__, __LINE__,bEnableFRC);	
	down(&VT_Semaphore);

	if(get_vt_EnableFRCMode()==bEnableFRC){
		rtd_printk(KERN_NOTICE, TAG_NAME, "%s=%d bEnableFRC same,no need set again!\n", __FUNCTION__, __LINE__);	
		up(&VT_Semaphore);
		return TRUE;
	}
	
	set_vt_EnableFRCMode(bEnableFRC);
	if(bEnableFRC == FALSE){
		if((get_film_mode_parameter().enable == _DISABLE) /*&& (Get_DISPLAY_REFRESH_RATE() != 120)*/){
			if(1 /*(Scaler_DispGetInputInfo(SLR_INPUT_IPH_ACT_WID_PRE) > 2560) &&
				(Scaler_DispGetInputInfo(SLR_INPUT_IPV_ACT_LEN_PRE) > 1440)*/){
				if(1 /*Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ) > 490*/){
					rtd_printk(KERN_NOTICE, TAG_NAME,"[VR360] 4k 50/60Hz enter vt_frc_mode, set memc bypass!!\n");
					drvif_memc_outBg_ctrl(_ENABLE); /* memc mute black */
					Scaler_MEMC_outMux(_ENABLE,_DISABLE);	//db on, mux off
					Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);	//bypass MEMC with mute on
				}
				else{
					rtd_printk(KERN_NOTICE, TAG_NAME,"[VR360] 4k timing enter vt_frc_mode, set mc on!!\n");
					Scaler_MEMC_outMux(_ENABLE,_ENABLE);	//db on, mux off
					Scaler_MEMC_MEMC_CLK_OnOff(0, 1, 1);	//Set MC on with mute on
				}
			}
			else if(Scaler_get_vdec_2k120hz()){
				rtd_printk(KERN_NOTICE, TAG_NAME,"[VR360] 2k120Hz enter vt_frc_mode, set memc bypass!!\n");
				Scaler_MEMC_outMux(_ENABLE,_DISABLE);	//db on, mux off
				Scaler_MEMC_MEMC_CLK_OnOff(0, 0, 1);	// bypass MEMC with mute on
			}
			else{
				rtd_printk(KERN_NOTICE, TAG_NAME,"[VR360] not 4k timing enter vt_frc_mode, set memc on!!\n");
				Scaler_MEMC_outMux(_ENABLE,_ENABLE);	//db on, mux off
				Scaler_MEMC_MEMC_CLK_OnOff(1, 1, 1);	//Set MEMC on with mute on
			}
		}
		//EnableFRCMode is FALSE,pls close FRC
		MEMC_Set_malloc_address(bEnableFRC);
	}
	else{
		//EnableFRCMode is TRUE,pls reopen FRC,however,webos never set HAL_VT_EnableFRCMode(TRUE), so need reopen at HAL_VT_Finalize
		MEMC_Set_malloc_address(bEnableFRC);
	}
#ifdef ENABLE_VR360_DATA_FS_FLOW
	if(bEnableFRC == FALSE){
		INPUT_TIMING_INDEX index = get_current_pattern_index();
		if(index == VO_4K2K_60){
			rtd_printk(KERN_NOTICE, TAG_NAME,"[func:%s] enter data fs proc.\n", __FUNCTION__);
			scaler_vsc_vr360_enter_datafs_proc();
		}
	}
#endif
	up(&VT_Semaphore);
	return TRUE;

}

/************************************start of DC2H capture VDC(ATV or CVBS) data function********************************/
void rtk_dc2h_capturevdc_config(unsigned char connect, VIDEO_RECT_T inregion, VIDEO_RECT_T outregion)
{
	if (connect == TRUE) {
		curCapInfo.enable = 1; //iMode;
		curCapInfo.capSrc = 2;  //0:scaler output 1:display output 2:VD output
		curCapInfo.capMode = VT_CAP_MODE_SEQ;
		curCapInfo.capWid = outregion.w; //iWid;
		curCapInfo.capLen = outregion.h;

		DC2H_InputWidthSta = inregion.x;
		DC2H_InputLengthSta = inregion.y;
		DC2H_InputWidth = inregion.w;
		DC2H_InputLength = inregion.h;	

		if (Capture_BufferMemInit_VT(3) == FALSE) {
			rtd_printk(KERN_NOTICE, TAG_NAME, "VT init allocate memory fail;%s=%d \n", __FUNCTION__, __LINE__);
			up(&VT_Semaphore);
			return ;
		}
		set_vt_VtBufferNum(3);
		set_vt_VtSwBufferMode(FALSE);
		set_vt_VtCaptureVDC(TRUE);
		//freezebufferaddr = CaptureCtrl_VT.cap_buffer[2].phyaddr;
		drvif_DC2H_dispD_CaptureConfig(curCapInfo);
	} else {
		curCapInfo.enable = 0; //iMode;
		drvif_DC2H_dispD_CaptureConfig(curCapInfo);
		Capture_BufferMemDeInit_VT(get_vt_VtBufferNum());
		set_vt_VtBufferNum(0);
		set_vt_VtSwBufferMode(FALSE);
		set_vt_VtCaptureVDC(FALSE);
	}
}
/************************************end of DC2H capture VDC(ATV or CVBS) data function********************************/


/************************************start of VT buffer show by sub display function********************************/
#define _BURSTLENGTH2 	(0x78) // 0x78 (120) for sub-channel
#define _FIFOLENGTH2 	(0x80) //sub path FIFO
void memory_set_sub_displaywindow_DispVT(VIDEO_RECT_T s_dispwin)
{
	SCALER_DISP_CHANNEL display = SLR_SUB_DISPLAY;
	unsigned int TotalSize;
	unsigned int Quotient;
	unsigned char Remainder;
	unsigned int fifoLen = _FIFOLENGTH2;
	unsigned int burstLen = _BURSTLENGTH2;
	unsigned int MemShiftAddr = 0;
	unsigned short droppixel = 0;
	unsigned int subctrltemp = 0;
	mdomain_disp_ddr_subprevstart_RBUS mdomain_disp_ddr_subprevstart_Reg;
	mdomain_disp_display_sub_byte_channel_swap_RBUS display_sub_byte_channel_swap_reg;
	
	mdomain_disp_ddr_subprevstart_Reg.regValue = rtd_inl(MDOMAIN_DISP_DDR_SubPreVStart_reg);
	if(s_dispwin.y <= 100) {
		mdomain_disp_ddr_subprevstart_Reg.sub_pre_rd_v_start = 7;
	} else {
		mdomain_disp_ddr_subprevstart_Reg.sub_pre_rd_v_start = (s_dispwin.y-4);
	}
	rtd_outl(MDOMAIN_DISP_DDR_SubPreVStart_reg, mdomain_disp_ddr_subprevstart_Reg.regValue);


	MemGetBlockShiftAddr(display, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_HSTA),Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_VSTA), &MemShiftAddr, &droppixel);
	TotalSize = memory_get_disp_line_size1(display, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID) + droppixel);	// calculate the memory size of capture
	IoReg_Mask32(MDOMAIN_DISP_DDR_SubPixNumWTL_reg, 0xffc00000, (( ((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID) +droppixel) & 0x3FFF) << 8) | ((fifoLen - (burstLen>>1))>>1)));


	memory_division(TotalSize, burstLen, &Quotient, &Remainder);	// Do a division

	// remainder is not allowed to be zero
	if (Remainder == 0) {
		Remainder = burstLen;
		Quotient -= 1;
	}


	if((dvrif_memory_compression_get_enable(SLR_SUB_DISPLAY) == TRUE) && (dvrif_memory_get_compression_mode(SLR_SUB_DISPLAY) == COMPRESSION_FRAME_MODE))
	{
		IoReg_Mask32(MDOMAIN_DISP_DDR_SubRdNumLenRem_reg, 0x00000000, (0xffff << 16) | (burstLen << 8) | burstLen);
	}
	else
	{
		IoReg_Mask32(MDOMAIN_DISP_DDR_SubRdNumLenRem_reg, 0x00000000, (Quotient << 16) | (burstLen << 8) | Remainder);
	}

	TotalSize = memory_get_capture_size(display, MEMCAPTYPE_LINE);
	/*TotalSize = Quotient * burstLen + Remainder; 	// count one line, 64bits unit
	TotalSize = drvif_memory_get_data_align(TotalSize, 4);	// times of 4*/

	rtd_outl(MDOMAIN_DISP_DDR_SubLineStep_reg,  (TotalSize + TotalSize%2) << 3);//bit 3 need to be 0. rbus rule

	TotalSize = SHL(TotalSize, 3); // unit conversion from 64bits to 8bits

	IoReg_Mask32(MDOMAIN_DISP_DDR_SubLineNum_reg, 0xfffff000, (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN) & 0x0FFF));

	rtd_outl(MDOMAIN_DISP_DDR_SubAddr_reg, (CaptureCtrl_VT.cap_buffer[0].phyaddr + MemShiftAddr) & 0x7ffffff0);
	rtd_outl(MDOMAIN_DISP_DDR_Sub2ndAddr_reg, (CaptureCtrl_VT.cap_buffer[1].phyaddr + MemShiftAddr) & 0x7ffffff0);
	rtd_outl(MDOMAIN_DISP_DDR_Sub3rdAddr_reg, (CaptureCtrl_VT.cap_buffer[2].phyaddr + MemShiftAddr) & 0x7ffffff0);

	rtd_outl(MDOMAIN_DISP_DDR_SubAddrDropBits_reg,droppixel);

	subctrltemp = _BIT6;
	subctrltemp |=_BIT7;//set Mdomain display triple buffer
	//subctrltemp |= (_BIT1);
	//disp ctrl default setting
	subctrltemp |= (_BIT25 | _BIT28);
	subctrltemp |= Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_422CAP) ? 0 : _BIT17;
	//subctrltemp |= (_BIT19);/*for VT data is RGB*/
	rtd_outl(MDOMAIN_DISP_DDR_SubCtrl_reg, subctrltemp);

	display_sub_byte_channel_swap_reg.regValue = rtd_inl(MDOMAIN_DISP_Display_sub_byte_channel_swap_reg);
	display_sub_byte_channel_swap_reg.sub_1byte_swap = 1;
	display_sub_byte_channel_swap_reg.sub_2byte_swap = 1;
	display_sub_byte_channel_swap_reg.sub_4byte_swap = 1;
	display_sub_byte_channel_swap_reg.sub_8byte_swap = 0;
	display_sub_byte_channel_swap_reg.sub_channel_swap = 4;
	rtd_outl(MDOMAIN_DISP_Display_sub_byte_channel_swap_reg, display_sub_byte_channel_swap_reg.regValue);
	rtd_outl(MDOMAIN_DISP_Disp_sub_enable_reg, _BIT0);
}

extern void magnifier_color_ultrazoom_config_scaling_up(unsigned char display);
extern void Scaler_disp_setting(unsigned char display);
unsigned char Scaler_SubMDispWindow_VFB(bool enable)
{
	rtd_printk(KERN_DEBUG, TAG_NAME,"Scaler_SubMDispWindow_VFB curCapInfo.enable==%d\n",curCapInfo.enable);
	if (curCapInfo.enable){
		SCALER_DISP_CHANNEL display = SLR_SUB_DISPLAY;
		mdomain_disp_ddr_mainsubctrl_RBUS mdomain_disp_ddr_mainsubctrl_Reg;
		ppoverlay_double_buffer_ctrl_RBUS ppoverlay_double_buffer_ctrl_Reg;
		scaleup_ds_uzu_db_ctrl_RBUS scaleup_ds_uzu_db_ctrl_Reg;
		//IoReg_SetBits(MDOMAIN_DISP_DDR_MainSubCtrl_reg, _BIT17);
		mdomain_disp_ddr_mainsubctrl_Reg.regValue = rtd_inl(MDOMAIN_DISP_DDR_MainSubCtrl_reg);
		mdomain_disp_ddr_mainsubctrl_Reg.disp2_double_enable = 0;
		rtd_outl(MDOMAIN_DISP_DDR_MainSubCtrl_reg, mdomain_disp_ddr_mainsubctrl_Reg.regValue);

		//IoReg_SetBits(PPOVERLAY_Double_Buffer_CTRL_reg, _BIT6);//Enable dtg double buffer register
		ppoverlay_double_buffer_ctrl_Reg.regValue = rtd_inl(PPOVERLAY_Double_Buffer_CTRL_reg);
		ppoverlay_double_buffer_ctrl_Reg.dsubreg_dbuf_en = 0;
		rtd_outl(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_Reg.regValue);

		//IoReg_SetBits(SCALEUP_DS_UZU_DB_CTRL_reg, _BIT2);//Enable uzu double buffer register
		scaleup_ds_uzu_db_ctrl_Reg.regValue = rtd_inl(SCALEUP_DS_UZU_DB_CTRL_reg);
		scaleup_ds_uzu_db_ctrl_Reg.db_en = 0;
		rtd_outl(SCALEUP_DS_UZU_DB_CTRL_reg, scaleup_ds_uzu_db_ctrl_Reg.regValue);	
		if(enable == TRUE) {
			unsigned short VTCapLen = curCapInfo.capLen;
			unsigned short VTCapWid = curCapInfo.capWid;
			VIDEO_RECT_T outputwin;
			yuv2rgb_d_yuv2rgb_control_RBUS yuv2rgb_d_yuv2rgb_control_Reg;
			
			outputwin.x = 0;
			outputwin.y = 0;
			outputwin.w = VTCapWid;
			outputwin.h = VTCapLen;
			

			
			Scaler_DispSetStatus(display, SLR_DISP_422CAP, FALSE);/*VT buffer is RGB888,so go 444*/
			Scaler_DispSetStatus(display, SLR_DISP_10BIT, FALSE);/*VT buffer is RGB888,so go 8bit*/
			Scaler_DispSetStatus(display, SLR_DISP_INTERLACE, FALSE);
			
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_FRAMESYNC, FALSE);
			
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_CAP_LEN, VTCapLen);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_CAP_WID, VTCapWid);

			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN, VTCapLen);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_VSTA, 0);
			
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID, VTCapWid);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_HSTA, 0);

			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_DISP_WID, VTCapWid);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_DISP_LEN, VTCapLen);

			if(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID) <= Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_WID)){
				Scaler_DispSetScaleStatus(display, SLR_SCALE_H_UP, TRUE);
			}else{
				Scaler_DispSetScaleStatus(display, SLR_SCALE_H_UP, FALSE);
			}

			if(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN) <= Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_LEN))
				Scaler_DispSetScaleStatus(display, SLR_SCALE_V_UP, TRUE);
			else
				Scaler_DispSetScaleStatus(display, SLR_SCALE_V_UP, FALSE);

			memory_set_sub_displaywindow_DispVT(outputwin);
			
			/*sub uzu*/
			magnifier_color_ultrazoom_config_scaling_up(display);

			/*sub yuv2rgb*/
			yuv2rgb_d_yuv2rgb_control_Reg.regValue = rtd_inl(YUV2RGB_D_YUV2RGB_Control_reg);
			if(curCapInfo.capSrc == 1) {//memc
				yuv2rgb_d_yuv2rgb_control_Reg.yuv2rgb_overlay = 1;
				yuv2rgb_d_yuv2rgb_control_Reg.yuv2rgb_sub_en = 0;
			} else{//uzu
				yuv2rgb_d_yuv2rgb_control_Reg.yuv2rgb_overlay = 0;
				yuv2rgb_d_yuv2rgb_control_Reg.yuv2rgb_sub_en = 1;
			}
			rtd_outl(YUV2RGB_D_YUV2RGB_Control_reg, yuv2rgb_d_yuv2rgb_control_Reg.regValue);
			
			PipmpSetSubDisplayWindow(
				outputwin.x, outputwin.x + Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_WID) - 1,
				outputwin.y, outputwin.y + Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_LEN) - 1,
				0);

			PipmpSetSubActiveWindow(
				0, Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY,SLR_INPUT_DISP_WID)  - 1,
				0, Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY,SLR_INPUT_DISP_LEN) - 1);

			Scaler_disp_setting(display);

			set_display_forcebg_mask(SLR_SUB_DISPLAY, SLR_FORCE_BG_TYPE_VSC, FALSE);
			mute_control(SLR_SUB_DISPLAY, FALSE);		
		} else {
			rtd_outl(MDOMAIN_DISP_Disp_sub_enable_reg, 0x00000000);

			down(get_forcebg_semaphore());
			drvif_scalerdisplay_enable_display(SLR_SUB_DISPLAY, _DISABLE);
			up(get_forcebg_semaphore());
		}
	} else {
		return FALSE;
	}
	return TRUE;
}

void memory_set_displaysubwindow_DispVT(VIDEO_RECT_T s_dispwin, unsigned long phyaddr)
{
	SCALER_DISP_CHANNEL display = SLR_SUB_DISPLAY;
	unsigned int TotalSize;
	unsigned int Quotient;
	unsigned char Remainder;
	unsigned int fifoLen = _FIFOLENGTH2;
	unsigned int burstLen = _BURSTLENGTH2;
	unsigned int MemShiftAddr = 0;
	unsigned short droppixel = 0;
	unsigned int subctrltemp = 0;
	mdomain_disp_ddr_subprevstart_RBUS mdomain_disp_ddr_subprevstart_Reg;
	mdomain_disp_display_sub_byte_channel_swap_RBUS display_sub_byte_channel_swap_reg;
	
	mdomain_disp_ddr_subprevstart_Reg.regValue = rtd_inl(MDOMAIN_DISP_DDR_SubPreVStart_reg);
	if(s_dispwin.y <= 100) {
		mdomain_disp_ddr_subprevstart_Reg.sub_pre_rd_v_start = 7;
	} else {
		mdomain_disp_ddr_subprevstart_Reg.sub_pre_rd_v_start = (s_dispwin.y-4);
	}
	rtd_outl(MDOMAIN_DISP_DDR_SubPreVStart_reg, mdomain_disp_ddr_subprevstart_Reg.regValue);


	MemGetBlockShiftAddr(display, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_HSTA),Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_VSTA), &MemShiftAddr, &droppixel);
	TotalSize = memory_get_disp_line_size1(display, Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID) + droppixel);	// calculate the memory size of capture
	IoReg_Mask32(MDOMAIN_DISP_DDR_SubPixNumWTL_reg, 0xffc00000, (( ((Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID) +droppixel) & 0x3FFF) << 8) | ((fifoLen - (burstLen>>1))>>1)));


	memory_division(TotalSize, burstLen, &Quotient, &Remainder);	// Do a division

	// remainder is not allowed to be zero
	if (Remainder == 0) {
		Remainder = burstLen;
		Quotient -= 1;
	}

	if((dvrif_memory_compression_get_enable(SLR_SUB_DISPLAY) == TRUE) && (dvrif_memory_get_compression_mode(SLR_SUB_DISPLAY) == COMPRESSION_FRAME_MODE))
	{
		IoReg_Mask32(MDOMAIN_DISP_DDR_SubRdNumLenRem_reg, 0x00000000, (0xffff << 16) | (burstLen << 8) | burstLen);
	}
	else
	{
		IoReg_Mask32(MDOMAIN_DISP_DDR_SubRdNumLenRem_reg, 0x00000000, (Quotient << 16) | (burstLen << 8) | Remainder);
	}


	TotalSize = memory_get_capture_size(display, MEMCAPTYPE_LINE);
	/*TotalSize = Quotient * burstLen + Remainder; 	// count one line, 64bits unit
	TotalSize = drvif_memory_get_data_align(TotalSize, 4);	// times of 4*/

	rtd_outl(MDOMAIN_DISP_DDR_SubLineStep_reg,  (TotalSize + TotalSize%2) << 3);//bit 3 need to be 0. rbus rule

	TotalSize = SHL(TotalSize, 3); // unit conversion from 64bits to 8bits

	IoReg_Mask32(MDOMAIN_DISP_DDR_SubLineNum_reg, 0xfffff000, (Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN) & 0x0FFF));

#if 1
	rtd_outl(MDOMAIN_DISP_DDR_SubAddr_reg, (phyaddr + MemShiftAddr) & 0x7ffffff0);
#else
	rtd_outl(MDOMAIN_DISP_DDR_SubAddr_reg, (CaptureCtrl_VT.cap_buffer[0].phyaddr + MemShiftAddr) & 0x7ffffff0);
	rtd_outl(MDOMAIN_DISP_DDR_Sub2ndAddr_reg, (CaptureCtrl_VT.cap_buffer[1].phyaddr + MemShiftAddr) & 0x7ffffff0);
	rtd_outl(MDOMAIN_DISP_DDR_Sub3rdAddr_reg, (CaptureCtrl_VT.cap_buffer[2].phyaddr + MemShiftAddr) & 0x7ffffff0);
#endif

	rtd_outl(MDOMAIN_DISP_DDR_SubAddrDropBits_reg,droppixel);

//	subctrltemp = _BIT6;
//	subctrltemp |=_BIT7;//set Mdomain display triple buffer
	//subctrltemp |= (_BIT1);
	//disp ctrl default setting
	subctrltemp |= (_BIT25 | _BIT28);
	subctrltemp |= Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_422CAP) ? 0 : _BIT17;
	//subctrltemp |= (_BIT19);/*for VT data is RGB*/
	rtd_outl(MDOMAIN_DISP_DDR_SubCtrl_reg, subctrltemp);

	display_sub_byte_channel_swap_reg.regValue = rtd_inl(MDOMAIN_DISP_Display_sub_byte_channel_swap_reg);
	display_sub_byte_channel_swap_reg.sub_1byte_swap = 1;
	display_sub_byte_channel_swap_reg.sub_2byte_swap = 1;
	display_sub_byte_channel_swap_reg.sub_4byte_swap = 1;
	display_sub_byte_channel_swap_reg.sub_8byte_swap = 0;
	display_sub_byte_channel_swap_reg.sub_channel_swap = 4;
	rtd_outl(MDOMAIN_DISP_Display_sub_byte_channel_swap_reg, display_sub_byte_channel_swap_reg.regValue);
	rtd_outl(MDOMAIN_DISP_Disp_sub_enable_reg, _BIT0);
}

unsigned char Scaler_Rowdata_SubMDispWindow(KADP_VT_ROWDATA_SHOW_ONSUBDISP_T *VT_ROWDATA_SHOW_ONSUBDISP)
{
		ppoverlay_memc_mux_ctrl_RBUS memc_mux_ctrl_reg;
		SCALER_DISP_CHANNEL display = SLR_SUB_DISPLAY;
		mdomain_disp_ddr_mainsubctrl_RBUS mdomain_disp_ddr_mainsubctrl_Reg;
		ppoverlay_double_buffer_ctrl_RBUS ppoverlay_double_buffer_ctrl_Reg;
		scaleup_ds_uzu_db_ctrl_RBUS scaleup_ds_uzu_db_ctrl_Reg;

		memc_mux_ctrl_reg.regValue = rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg);
		memc_mux_ctrl_reg.memc_out_bg_en = 0;
		rtd_outl(PPOVERLAY_MEMC_MUX_CTRL_reg, memc_mux_ctrl_reg.regValue);
		//IoReg_SetBits(MDOMAIN_DISP_DDR_MainSubCtrl_reg, _BIT17);
		mdomain_disp_ddr_mainsubctrl_Reg.regValue = rtd_inl(MDOMAIN_DISP_DDR_MainSubCtrl_reg);
		mdomain_disp_ddr_mainsubctrl_Reg.disp2_double_enable = 0;
		rtd_outl(MDOMAIN_DISP_DDR_MainSubCtrl_reg, mdomain_disp_ddr_mainsubctrl_Reg.regValue);

		//IoReg_SetBits(PPOVERLAY_Double_Buffer_CTRL_reg, _BIT6);//Enable dtg double buffer register
		ppoverlay_double_buffer_ctrl_Reg.regValue = rtd_inl(PPOVERLAY_Double_Buffer_CTRL_reg);
		ppoverlay_double_buffer_ctrl_Reg.dsubreg_dbuf_en = 0;
		rtd_outl(PPOVERLAY_Double_Buffer_CTRL_reg, ppoverlay_double_buffer_ctrl_Reg.regValue);

		//IoReg_SetBits(SCALEUP_DS_UZU_DB_CTRL_reg, _BIT2);//Enable uzu double buffer register
		scaleup_ds_uzu_db_ctrl_Reg.regValue = rtd_inl(SCALEUP_DS_UZU_DB_CTRL_reg);
		scaleup_ds_uzu_db_ctrl_Reg.db_en = 0;
		rtd_outl(SCALEUP_DS_UZU_DB_CTRL_reg, scaleup_ds_uzu_db_ctrl_Reg.regValue);	
		if(VT_ROWDATA_SHOW_ONSUBDISP->enable == TRUE) {
			unsigned short VTCapLen = VT_ROWDATA_SHOW_ONSUBDISP->height;
			unsigned short VTCapWid = VT_ROWDATA_SHOW_ONSUBDISP->width;
			VIDEO_RECT_T outputwin;
			yuv2rgb_d_yuv2rgb_control_RBUS yuv2rgb_d_yuv2rgb_control_Reg;

			outputwin.x = VT_ROWDATA_SHOW_ONSUBDISP->OutputRegion.x;
			outputwin.y = VT_ROWDATA_SHOW_ONSUBDISP->OutputRegion.y;
			outputwin.w = VT_ROWDATA_SHOW_ONSUBDISP->OutputRegion.w;
			outputwin.h = VT_ROWDATA_SHOW_ONSUBDISP->OutputRegion.h;

			Scaler_DispSetStatus(display, SLR_DISP_422CAP, FALSE);/*VT buffer is RGB888,so go 444*/
			Scaler_DispSetStatus(display, SLR_DISP_10BIT, FALSE);/*VT buffer is RGB888,so go 8bit*/
			Scaler_DispSetStatus(display, SLR_DISP_INTERLACE, FALSE);
			
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_FRAMESYNC, FALSE);
			
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_CAP_LEN, VTCapLen);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_CAP_WID, VTCapWid);

			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN, VTCapLen);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_VSTA, 0);
			
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID, VTCapWid);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_HSTA, 0);

			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_DISP_WID, outputwin.w);
			Scaler_DispSetInputInfoByDisp(display, SLR_INPUT_DISP_LEN, outputwin.h);

			if(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_WID) <= Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_WID)){
				Scaler_DispSetScaleStatus(display, SLR_SCALE_H_UP, TRUE);
			}else{
				Scaler_DispSetScaleStatus(display, SLR_SCALE_H_UP, FALSE);
			}

			if(Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_MEM_ACT_LEN) <= Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_LEN))
				Scaler_DispSetScaleStatus(display, SLR_SCALE_V_UP, TRUE);
			else
				Scaler_DispSetScaleStatus(display, SLR_SCALE_V_UP, FALSE);

			memory_set_displaysubwindow_DispVT(outputwin, VT_ROWDATA_SHOW_ONSUBDISP->phyaddr);
			
			/*sub uzu*/
			magnifier_color_ultrazoom_config_scaling_up(display);

			/*sub yuv2rgb*/
			yuv2rgb_d_yuv2rgb_control_Reg.regValue = rtd_inl(YUV2RGB_D_YUV2RGB_Control_reg);
			yuv2rgb_d_yuv2rgb_control_Reg.yuv2rgb_overlay = 1;
			yuv2rgb_d_yuv2rgb_control_Reg.yuv2rgb_sub_en = 0;
			rtd_outl(YUV2RGB_D_YUV2RGB_Control_reg, yuv2rgb_d_yuv2rgb_control_Reg.regValue);
			
			PipmpSetSubDisplayWindow(
				outputwin.x, outputwin.x + Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_WID) - 1,
				outputwin.y, outputwin.y + Scaler_DispGetInputInfoByDisp(display, SLR_INPUT_DISP_LEN) - 1,
				0);

			PipmpSetSubActiveWindow(
				0, Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY,SLR_INPUT_DISP_WID)  - 1,
				0, Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY,SLR_INPUT_DISP_LEN) - 1);

			Scaler_disp_setting(display);

			set_display_forcebg_mask(SLR_SUB_DISPLAY, SLR_FORCE_BG_TYPE_VSC, FALSE);
			mute_control(SLR_SUB_DISPLAY, FALSE);		
		} else {
			rtd_outl(MDOMAIN_DISP_Disp_sub_enable_reg, 0x00000000);

			down(get_forcebg_semaphore());
			drvif_scalerdisplay_enable_display(SLR_SUB_DISPLAY, _DISABLE);
			up(get_forcebg_semaphore());
		}
	return TRUE;
}

/************************************end of VT buffer show by sub display function********************************/



unsigned char ColorBlock_Compare(unsigned long bufferaddr, unsigned int R, unsigned int G, unsigned int B, VIDEO_RECT_T block)
{
	
	unsigned int sumR, sumG, sumB;
	unsigned int i,j;
	unsigned char* bufferpoint;
	
	if((block.w==0)&&(block.h==0))
		return TRUE;
	
	sumR = 0;
	sumG = 0;
	sumB = 0;
	bufferpoint = (unsigned char*)bufferaddr;
	
	for(i=0;i<block.h;i++)
	{
		for(j=0;j<block.w;j++)
		{
			sumR += bufferpoint[1920*3*(i+block.y)+(block.x+j)*3];
			sumG += bufferpoint[1920*3*(i+block.y)+(block.x+j)*3+1];
			sumB += bufferpoint[1920*3*(i+block.y)+(block.x+j)*3+2];
		}
	}
	sumR = sumR/(block.w*block.h);
	sumG = sumG/(block.w*block.h);
	sumB = sumB/(block.w*block.h);
	rtd_printk(KERN_EMERG, TAG_NAME, "@@@@@@@");
	rtd_printk(KERN_EMERG, TAG_NAME, "R=%d;sumR=%d\n",R,sumR);
	rtd_printk(KERN_EMERG, TAG_NAME, "G=%d;sumG=%d\n",G,sumG);
	rtd_printk(KERN_EMERG, TAG_NAME, "B=%d;sumB=%d\n",B,sumB);
	
	if((abs(R-sumR)<80)&&(abs(G-sumG)<80)&&(abs(B-sumB)<80))
		return TRUE;
	else{
		if(abs(R-sumR)>=80)
			rtd_printk(KERN_EMERG, TAG_NAME, "!!!!!!@@@R_Diff_value =%d\n",(int)abs(R-sumR));
		if(abs(G-sumR)>=80)
			rtd_printk(KERN_EMERG, TAG_NAME, "!!!!!!@@@G_Diff_value =%d\n",(int)abs(G-sumR));
		if(abs(B-sumR)>=80)
			rtd_printk(KERN_EMERG, TAG_NAME, "!!!!!!@@@B_Diff_value =%d\n",(int)abs(B-sumR));
		return FALSE;
	}
}

extern unsigned char rtk_hal_vsc_GetInputRegion(KADP_VIDEO_WID_T wid, KADP_VIDEO_RECT_T * pinregion);
unsigned char Check_colorbar_window_cal(VIDEO_RECT_T *GrayBlock, VIDEO_RECT_T *YellowBlock, VIDEO_RECT_T *LittleBlueBlock, VIDEO_RECT_T *GreenBlock, VIDEO_RECT_T *PinkBlock, VIDEO_RECT_T *RedBlock, VIDEO_RECT_T *BlueBlock, VIDEO_RECT_T *BlackBlock)
{
	unsigned int SourceWidth;
	unsigned int OverscanWidth;
	KADP_VIDEO_RECT_T inregion;
	unsigned int input_w;
	unsigned int nooverscancolorbarWidth;
	unsigned int overscancolorbarWidth;
	unsigned int colorbarnum;
	unsigned int sidecolorwidth;
	VSC_INPUT_TYPE_T srctype;
	srctype = Get_DisplayMode_Src(SLR_MAIN_DISPLAY);

	SourceWidth = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPH_ACT_WID_PRE);
	rtk_hal_vsc_GetInputRegion(KADP_VIDEO_WID_0, &inregion);
	input_w = Scaler_ModeGet_Hdmi_ModeInfo(SLR_MODE_IHWID);
	if(input_w > 3840){
		inregion.x = 3840*inregion.x/input_w;
		inregion.w = 3840*inregion.w/input_w;
	}

	if ((srctype == VSC_INPUTSRC_AVD))
	{
		OverscanWidth = Scaler_CalAVD27MWidth(SLR_MAIN_DISPLAY,inregion.w);
	} else {
		OverscanWidth = inregion.w;
	}

	nooverscancolorbarWidth = SourceWidth/8;
	overscancolorbarWidth = 1920*nooverscancolorbarWidth/OverscanWidth;
	sidecolorwidth = (960%overscancolorbarWidth)?(960%overscancolorbarWidth):overscancolorbarWidth;
	colorbarnum =( 8 - 2*((SourceWidth - OverscanWidth) / (nooverscancolorbarWidth*2)));
	
	rtd_printk(KERN_EMERG, TAG_NAME, "SourceWidth=%d;OverscanWidth=%d\n",SourceWidth,OverscanWidth);
	rtd_printk(KERN_EMERG, TAG_NAME, "overscancolorbarWidth=%d;sidecolorwidth=%d\n",overscancolorbarWidth,sidecolorwidth);
	rtd_printk(KERN_EMERG, TAG_NAME, "colorbarnum=%d\n",colorbarnum);

	if(8 == colorbarnum ){
		/*line one*/
		GreenBlock[0].x = 960 - overscancolorbarWidth/2 -5;
		GreenBlock[0].y = 175;
		GreenBlock[0].w = 10;
		GreenBlock[0].h = 10;

		PinkBlock[0].x = 960 + overscancolorbarWidth/2 -5;
		PinkBlock[0].y = 175;
		PinkBlock[0].w = 10;
		PinkBlock[0].h = 10;		

		LittleBlueBlock[0].x = 960 - 3*overscancolorbarWidth/2 -5;
		LittleBlueBlock[0].y = 175;
		LittleBlueBlock[0].w = 10;
		LittleBlueBlock[0].h = 10;

		RedBlock[0].x = 960 + 3*overscancolorbarWidth/2 -5;
		RedBlock[0].y = 175;
		RedBlock[0].w = 10;
		RedBlock[0].h = 10;

		YellowBlock[0].x = 960 - 5*overscancolorbarWidth/2 -5;
		YellowBlock[0].y = 175;
		YellowBlock[0].w = 10;
		YellowBlock[0].h = 10;

		BlueBlock[0].x = 960 + 5*overscancolorbarWidth/2 -5;
		BlueBlock[0].y = 175;
		BlueBlock[0].w = 10;
		BlueBlock[0].h = 10;

		if(sidecolorwidth >= 30){
			GrayBlock[0].x = 960 - 3*overscancolorbarWidth - sidecolorwidth/2 -5;
			GrayBlock[0].y = 175;
			GrayBlock[0].w = 10;
			GrayBlock[0].h = 10;
			
			BlackBlock[0].x = 960 + 3*overscancolorbarWidth + sidecolorwidth/2 -5;
			BlackBlock[0].y = 175;
			BlackBlock[0].w = 10;
			BlackBlock[0].h = 10;
		} else {
			GrayBlock[0].x = 0;
			GrayBlock[0].y = 0;
			GrayBlock[0].w = 0;
			GrayBlock[0].h = 0;
			
			BlackBlock[0].x = 0;
			BlackBlock[0].y = 0;
			BlackBlock[0].w = 0;
			BlackBlock[0].h = 0;
		}

		/*line two*/
		GreenBlock[1].x = 960 - overscancolorbarWidth/2 -5;
		GreenBlock[1].y = 535;
		GreenBlock[1].w = 10;
		GreenBlock[1].h = 10;

		PinkBlock[1].x = 960 + overscancolorbarWidth/2 -5;
		PinkBlock[1].y = 535;
		PinkBlock[1].w = 10;
		PinkBlock[1].h = 10;		

		LittleBlueBlock[1].x = 960 - 3*overscancolorbarWidth/2 -5;
		LittleBlueBlock[1].y = 535;
		LittleBlueBlock[1].w = 10;
		LittleBlueBlock[1].h = 10;

		RedBlock[1].x = 960 + 3*overscancolorbarWidth/2 -5;
		RedBlock[1].y = 535;
		RedBlock[1].w = 10;
		RedBlock[1].h = 10;

		YellowBlock[1].x = 960 - 5*overscancolorbarWidth/2 -5;
		YellowBlock[1].y = 535;
		YellowBlock[1].w = 10;
		YellowBlock[1].h = 10;

		BlueBlock[1].x = 960 + 5*overscancolorbarWidth/2 -5;
		BlueBlock[1].y = 535;
		BlueBlock[1].w = 10;
		BlueBlock[1].h = 10;

		if(sidecolorwidth >= 30){
			GrayBlock[1].x = 960 - 3*overscancolorbarWidth - sidecolorwidth/2 -5;
			GrayBlock[1].y = 535;
			GrayBlock[1].w = 10;
			GrayBlock[1].h = 10;
			
			BlackBlock[1].x = 960 + 3*overscancolorbarWidth + sidecolorwidth/2 -5;
			BlackBlock[1].y = 535;
			BlackBlock[1].w = 10;
			BlackBlock[1].h = 10;
		} else {
			GrayBlock[1].x = 0;
			GrayBlock[1].y = 0;
			GrayBlock[1].w = 0;
			GrayBlock[1].h = 0;
			
			BlackBlock[1].x = 0;
			BlackBlock[1].y = 0;
			BlackBlock[1].w = 0;
			BlackBlock[1].h = 0;
		}

		/*line three*/
		GreenBlock[2].x = 960 - overscancolorbarWidth/2 -5;
		GreenBlock[2].y = 895;
		GreenBlock[2].w = 10;
		GreenBlock[2].h = 10;

		PinkBlock[2].x = 960 + overscancolorbarWidth/2 -5;
		PinkBlock[2].y = 895;
		PinkBlock[2].w = 10;
		PinkBlock[2].h = 10;		

		LittleBlueBlock[2].x = 960 - 3*overscancolorbarWidth/2 -5;
		LittleBlueBlock[2].y = 895;
		LittleBlueBlock[2].w = 10;
		LittleBlueBlock[2].h = 10;

		RedBlock[2].x = 960 + 3*overscancolorbarWidth/2 -5;
		RedBlock[2].y = 895;
		RedBlock[2].w = 10;
		RedBlock[2].h = 10;

		YellowBlock[2].x = 960 - 5*overscancolorbarWidth/2 -5;
		YellowBlock[2].y = 895;
		YellowBlock[2].w = 10;
		YellowBlock[2].h = 10;

		BlueBlock[2].x = 960 + 5*overscancolorbarWidth/2 -5;
		BlueBlock[2].y = 895;
		BlueBlock[2].w = 10;
		BlueBlock[2].h = 10;

		if(sidecolorwidth >= 30){
			GrayBlock[2].x = 960 - 3*overscancolorbarWidth - sidecolorwidth/2 -5;
			GrayBlock[2].y = 895;
			GrayBlock[2].w = 10;
			GrayBlock[2].h = 10;
			
			BlackBlock[2].x = 960 + 3*overscancolorbarWidth + sidecolorwidth/2 -5;
			BlackBlock[2].y = 895;
			BlackBlock[2].w = 10;
			BlackBlock[2].h = 10;
		} else {
			GrayBlock[2].x = 0;
			GrayBlock[2].y = 0;
			GrayBlock[2].w = 0;
			GrayBlock[2].h = 0;
			
			BlackBlock[2].x = 0;
			BlackBlock[2].y = 0;
			BlackBlock[2].w = 0;
			BlackBlock[2].h = 0;
		}	
	} else if (6 == colorbarnum ){
			/*line one*/
			GreenBlock[0].x = 960 - overscancolorbarWidth/2 -5;
			GreenBlock[0].y = 175;
			GreenBlock[0].w = 10;
			GreenBlock[0].h = 10;
			
			PinkBlock[0].x = 960 + overscancolorbarWidth/2 -5;
			PinkBlock[0].y = 175;
			PinkBlock[0].w = 10;
			PinkBlock[0].h = 10;		
			
			LittleBlueBlock[0].x = 960 - 3*overscancolorbarWidth/2 -5;
			LittleBlueBlock[0].y = 175;
			LittleBlueBlock[0].w = 10;
			LittleBlueBlock[0].h = 10;
			
			RedBlock[0].x = 960 + 3*overscancolorbarWidth/2 -5;
			RedBlock[0].y = 175;
			RedBlock[0].w = 10;
			RedBlock[0].h = 10;
			
			if(sidecolorwidth >= 30){
				YellowBlock[0].x = 960 - 2*overscancolorbarWidth-sidecolorwidth/2 -5;
				YellowBlock[0].y = 175;
				YellowBlock[0].w = 10;
				YellowBlock[0].h = 10;
				
				BlueBlock[0].x = 960 + 2*overscancolorbarWidth+sidecolorwidth/2 -5;
				BlueBlock[0].y = 175;
				BlueBlock[0].w = 10;
				BlueBlock[0].h = 10;

			} else {
				YellowBlock[0].x = 0;
				YellowBlock[0].y = 0;
				YellowBlock[0].w = 0;
				YellowBlock[0].h = 0;
				
				BlueBlock[0].x = 0;
				BlueBlock[0].y = 0;
				BlueBlock[0].w = 0;
				BlueBlock[0].h = 0;

			}

			GrayBlock[0].x = 0;
			GrayBlock[0].y = 0;
			GrayBlock[0].w = 0;
			GrayBlock[0].h = 0;
			
			BlackBlock[0].x = 0;
			BlackBlock[0].y = 0;
			BlackBlock[0].w = 0;
			BlackBlock[0].h = 0;			
			/*line two*/
			GreenBlock[1].x = 960 - overscancolorbarWidth/2 -5;
			GreenBlock[1].y = 535;
			GreenBlock[1].w = 10;
			GreenBlock[1].h = 10;
			
			PinkBlock[1].x = 960 + overscancolorbarWidth/2 -5;
			PinkBlock[1].y = 535;
			PinkBlock[1].w = 10;
			PinkBlock[1].h = 10;		
			
			LittleBlueBlock[1].x = 960 - 3*overscancolorbarWidth/2 -5;
			LittleBlueBlock[1].y = 535;
			LittleBlueBlock[1].w = 10;
			LittleBlueBlock[1].h = 10;
			
			RedBlock[1].x = 960 + 3*overscancolorbarWidth/2 -5;
			RedBlock[1].y = 535;
			RedBlock[1].w = 10;
			RedBlock[1].h = 10;
					
			if(sidecolorwidth >= 30){
				YellowBlock[1].x = 960 - 2*overscancolorbarWidth-sidecolorwidth/2 -5;
				YellowBlock[1].y = 535;
				YellowBlock[1].w = 10;
				YellowBlock[1].h = 10;
				
				BlueBlock[1].x = 960 + 2*overscancolorbarWidth+sidecolorwidth/2 -5;
				BlueBlock[1].y = 535;
				BlueBlock[1].w = 10;
				BlueBlock[1].h = 10;
			} else {
				YellowBlock[1].x = 0;
				YellowBlock[1].y = 0;
				YellowBlock[1].w = 0;
				YellowBlock[1].h = 0;
				
				BlueBlock[1].x = 0;
				BlueBlock[1].y = 0;
				BlueBlock[1].w = 0;
				BlueBlock[1].h = 0;
			}
			GrayBlock[1].x = 0;
			GrayBlock[1].y = 0;
			GrayBlock[1].w = 0;
			GrayBlock[1].h = 0;
			
			BlackBlock[1].x = 0;
			BlackBlock[1].y = 0;
			BlackBlock[1].w = 0;
			BlackBlock[1].h = 0;
			
			/*line three*/
			GreenBlock[2].x = 960 - overscancolorbarWidth/2 -5;
			GreenBlock[2].y = 895;
			GreenBlock[2].w = 10;
			GreenBlock[2].h = 10;
			
			PinkBlock[2].x = 960 + overscancolorbarWidth/2 -5;
			PinkBlock[2].y = 895;
			PinkBlock[2].w = 10;
			PinkBlock[2].h = 10;		
			
			LittleBlueBlock[2].x = 960 - 3*overscancolorbarWidth/2 -5;
			LittleBlueBlock[2].y = 895;
			LittleBlueBlock[2].w = 10;
			LittleBlueBlock[2].h = 10;
			
			RedBlock[2].x = 960 + 3*overscancolorbarWidth/2 -5;
			RedBlock[2].y = 895;
			RedBlock[2].w = 10;
			RedBlock[2].h = 10;
			
			if(sidecolorwidth >= 30){
				YellowBlock[2].x = 960 - 2*overscancolorbarWidth-sidecolorwidth/2 -5;
				YellowBlock[2].y = 895;
				YellowBlock[2].w = 10;
				YellowBlock[2].h = 10;
				
				BlueBlock[2].x = 960 + 2*overscancolorbarWidth+sidecolorwidth/2 -5;
				BlueBlock[2].y = 895;
				BlueBlock[2].w = 10;
				BlueBlock[2].h = 10;

			} else {
				YellowBlock[2].x = 0;
				YellowBlock[2].y = 0;
				YellowBlock[2].w = 0;
				YellowBlock[2].h = 0;
				
				BlueBlock[2].x = 0;
				BlueBlock[2].y = 0;
				BlueBlock[2].w = 0;
				BlueBlock[2].h = 0;
			}
			GrayBlock[2].x = 0;
			GrayBlock[2].y = 0;
			GrayBlock[2].w = 0;
			GrayBlock[2].h = 0;
			
			BlackBlock[2].x = 0;
			BlackBlock[2].y = 0;
			BlackBlock[2].w = 0;
			BlackBlock[2].h = 0;
	} else if (4 == colorbarnum){
		/*line one*/
		GreenBlock[0].x = 960 - overscancolorbarWidth/2 -5;
		GreenBlock[0].y = 175;
		GreenBlock[0].w = 10;
		GreenBlock[0].h = 10;
		
		PinkBlock[0].x = 960 + overscancolorbarWidth/2 -5;
		PinkBlock[0].y = 175;
		PinkBlock[0].w = 10;
		PinkBlock[0].h = 10;		
		
		if(sidecolorwidth >= 30){
			LittleBlueBlock[0].x = 960 - overscancolorbarWidth-sidecolorwidth/2 -5;
			LittleBlueBlock[0].y = 175;
			LittleBlueBlock[0].w = 10;
			LittleBlueBlock[0].h = 10;
			
			RedBlock[0].x = 960 + overscancolorbarWidth+sidecolorwidth/2 -5;
			RedBlock[0].y = 175;
			RedBlock[0].w = 10;
			RedBlock[0].h = 10;
		} else {
			LittleBlueBlock[0].x = 0;
			LittleBlueBlock[0].y = 0;
			LittleBlueBlock[0].w = 0;
			LittleBlueBlock[0].h = 0;
			
			RedBlock[0].x = 0;
			RedBlock[0].y = 0;
			RedBlock[0].w = 0;
			RedBlock[0].h = 0;
		}
		YellowBlock[0].x = 0;
		YellowBlock[0].y = 0;
		YellowBlock[0].w = 0;
		YellowBlock[0].h = 0;
		
		BlueBlock[0].x = 0;
		BlueBlock[0].y = 0;
		BlueBlock[0].w = 0;
		BlueBlock[0].h = 0;	
		
		GrayBlock[0].x = 0;
		GrayBlock[0].y = 0;
		GrayBlock[0].w = 0;
		GrayBlock[0].h = 0;
		
		BlackBlock[0].x = 0;
		BlackBlock[0].y = 0;
		BlackBlock[0].w = 0;
		BlackBlock[0].h = 0; 		

		/*line two*/
		GreenBlock[1].x = 960 - overscancolorbarWidth/2 -5;
		GreenBlock[1].y = 535;
		GreenBlock[1].w = 10;
		GreenBlock[1].h = 10;
		
		PinkBlock[1].x = 960 + overscancolorbarWidth/2 -5;
		PinkBlock[1].y = 535;
		PinkBlock[1].w = 10;
		PinkBlock[1].h = 10;		
		
		if(sidecolorwidth >= 30){
			LittleBlueBlock[1].x = 960 - overscancolorbarWidth-sidecolorwidth/2 -5;
			LittleBlueBlock[1].y = 535;
			LittleBlueBlock[1].w = 10;
			LittleBlueBlock[1].h = 10;
			
			RedBlock[1].x = 960 + overscancolorbarWidth+sidecolorwidth/2 -5;
			RedBlock[1].y = 535;
			RedBlock[1].w = 10;
			RedBlock[1].h = 10;
		} else {
			LittleBlueBlock[1].x = 0;
			LittleBlueBlock[1].y = 0;
			LittleBlueBlock[1].w = 0;
			LittleBlueBlock[1].h = 0;
			
			RedBlock[1].x = 0;
			RedBlock[1].y = 0;
			RedBlock[1].w = 0;
			RedBlock[1].h = 0;
		}
		YellowBlock[1].x = 0;
		YellowBlock[1].y = 0;
		YellowBlock[1].w = 0;
		YellowBlock[1].h = 0;
		
		BlueBlock[1].x = 0;
		BlueBlock[1].y = 0;
		BlueBlock[1].w = 0;
		BlueBlock[1].h = 0;	
		
		GrayBlock[1].x = 0;
		GrayBlock[1].y = 0;
		GrayBlock[1].w = 0;
		GrayBlock[1].h = 0;
		
		BlackBlock[1].x = 0;
		BlackBlock[1].y = 0;
		BlackBlock[1].w = 0;
		BlackBlock[1].h = 0; 		

		/*line three*/
		GreenBlock[2].x = 960 - overscancolorbarWidth/2 -5;
		GreenBlock[2].y = 895;
		GreenBlock[2].w = 10;
		GreenBlock[2].h = 10;
		
		PinkBlock[2].x = 960 + overscancolorbarWidth/2 -5;
		PinkBlock[2].y = 895;
		PinkBlock[2].w = 10;
		PinkBlock[2].h = 10;		
		
		if(sidecolorwidth >= 30){
			LittleBlueBlock[2].x = 960 - overscancolorbarWidth-sidecolorwidth/2 -5;
			LittleBlueBlock[2].y = 895;
			LittleBlueBlock[2].w = 10;
			LittleBlueBlock[2].h = 10;
			
			RedBlock[2].x = 960 + overscancolorbarWidth+sidecolorwidth/2 -5;
			RedBlock[2].y = 895;
			RedBlock[2].w = 10;
			RedBlock[2].h = 10;
		} else {
			LittleBlueBlock[2].x = 0;
			LittleBlueBlock[2].y = 0;
			LittleBlueBlock[2].w = 0;
			LittleBlueBlock[2].h = 0;
			
			RedBlock[2].x = 0;
			RedBlock[2].y = 0;
			RedBlock[2].w = 0;
			RedBlock[2].h = 0;
		}
		YellowBlock[2].x = 0;
		YellowBlock[2].y = 0;
		YellowBlock[2].w = 0;
		YellowBlock[2].h = 0;
		
		BlueBlock[2].x = 0;
		BlueBlock[2].y = 0;
		BlueBlock[2].w = 0;
		BlueBlock[2].h = 0;	
		
		GrayBlock[2].x = 0;
		GrayBlock[2].y = 0;
		GrayBlock[2].w = 0;
		GrayBlock[2].h = 0;
		
		BlackBlock[2].x = 0;
		BlackBlock[2].y = 0;
		BlackBlock[2].w = 0;
		BlackBlock[2].h = 0; 		

	}else if ((2 == colorbarnum) || (0 == colorbarnum)) {
		/*line one*/
		GreenBlock[0].x = 475;
		GreenBlock[0].y = 175;
		GreenBlock[0].w = 10;
		GreenBlock[0].h = 10;
		
		PinkBlock[0].x = 475;
		PinkBlock[0].y = 175;
		PinkBlock[0].w = 10;
		PinkBlock[0].h = 10;		
		
		LittleBlueBlock[0].x = 0;
		LittleBlueBlock[0].y = 0;
		LittleBlueBlock[0].w = 0;
		LittleBlueBlock[0].h = 0;
		
		RedBlock[0].x = 0;
		RedBlock[0].y = 0;
		RedBlock[0].w = 0;
		RedBlock[0].h = 0;

		YellowBlock[0].x = 0;
		YellowBlock[0].y = 0;
		YellowBlock[0].w = 0;
		YellowBlock[0].h = 0;
		
		BlueBlock[0].x = 0;
		BlueBlock[0].y = 0;
		BlueBlock[0].w = 0;
		BlueBlock[0].h = 0;	
		
		GrayBlock[0].x = 0;
		GrayBlock[0].y = 0;
		GrayBlock[0].w = 0;
		GrayBlock[0].h = 0;
		
		BlackBlock[0].x = 0;
		BlackBlock[0].y = 0;
		BlackBlock[0].w = 0;
		BlackBlock[0].h = 0; 

		/*line two*/
		GreenBlock[1].x = 475;
		GreenBlock[1].y = 535;
		GreenBlock[1].w = 10;
		GreenBlock[1].h = 10;
		
		PinkBlock[1].x = 475;
		PinkBlock[1].y = 535;
		PinkBlock[1].w = 10;
		PinkBlock[1].h = 10;		
		
		LittleBlueBlock[1].x = 0;
		LittleBlueBlock[1].y = 0;
		LittleBlueBlock[1].w = 0;
		LittleBlueBlock[1].h = 0;
		
		RedBlock[1].x = 0;
		RedBlock[1].y = 0;
		RedBlock[1].w = 0;
		RedBlock[1].h = 0;

		YellowBlock[1].x = 0;
		YellowBlock[1].y = 0;
		YellowBlock[1].w = 0;
		YellowBlock[1].h = 0;
		
		BlueBlock[1].x = 0;
		BlueBlock[1].y = 0;
		BlueBlock[1].w = 0;
		BlueBlock[1].h = 0;	
		
		GrayBlock[1].x = 0;
		GrayBlock[1].y = 0;
		GrayBlock[1].w = 0;
		GrayBlock[1].h = 0;
		
		BlackBlock[1].x = 0;
		BlackBlock[1].y = 0;
		BlackBlock[1].w = 0;
		BlackBlock[1].h = 0; 

		/*line three*/
		GreenBlock[2].x = 475;
		GreenBlock[2].y = 895;
		GreenBlock[2].w = 10;
		GreenBlock[2].h = 10;
		
		PinkBlock[2].x = 475;
		PinkBlock[2].y = 895;
		PinkBlock[2].w = 10;
		PinkBlock[2].h = 10;		
		
		LittleBlueBlock[2].x = 0;
		LittleBlueBlock[2].y = 0;
		LittleBlueBlock[2].w = 0;
		LittleBlueBlock[2].h = 0;
		
		RedBlock[2].x = 0;
		RedBlock[2].y = 0;
		RedBlock[2].w = 0;
		RedBlock[2].h = 0;

		YellowBlock[2].x = 0;
		YellowBlock[2].y = 0;
		YellowBlock[2].w = 0;
		YellowBlock[2].h = 0;
		
		BlueBlock[2].x = 0;
		BlueBlock[2].y = 0;
		BlueBlock[2].w = 0;
		BlueBlock[2].h = 0;	
		
		GrayBlock[2].x = 0;
		GrayBlock[2].y = 0;
		GrayBlock[2].w = 0;
		GrayBlock[2].h = 0;
		
		BlackBlock[2].x = 0;
		BlackBlock[2].y = 0;
		BlackBlock[2].w = 0;
		BlackBlock[2].h = 0; 
	} 
	return TRUE;
}

/*colorbar type is master7800 PTG pattern 32 colorbar 75%*/
unsigned char Check_DisplayFrame_isRightColorbar(void)
{
	KADP_VT_RECT_T OutputRegion;
	KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T VideoFrameOutputDeviceState;
	unsigned int IndexOfCurrentVideoFrameBuffer;
	unsigned long colorbarbufferaddr;

	VIDEO_RECT_T GrayBlock[3];
	VIDEO_RECT_T YellowBlock[3];
	VIDEO_RECT_T LittleBlueBlock[3];
	VIDEO_RECT_T GreenBlock[3];
	VIDEO_RECT_T PinkBlock[3];
	VIDEO_RECT_T RedBlock[3];
	VIDEO_RECT_T BlueBlock[3];
	VIDEO_RECT_T BlackBlock[3];
	
	if (HAL_VT_InitEx(5) == FALSE){
		rtd_printk(KERN_EMERG, TAG_NAME, "KADP_VT_Init fail!%s=%d \n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	
	OutputRegion.x = 0;
	OutputRegion.y = 0;
	OutputRegion.w = 1920;
	OutputRegion.h = 1080;
	if (HAL_VT_SetVideoFrameOutputDeviceOutputRegion(KADP_VT_VIDEO_WINDOW_0, KADP_VT_DISPLAY_OUTPUT, &OutputRegion) == FALSE){
		rtd_printk(KERN_EMERG, TAG_NAME, "KADP_VT_SetVideoFrameOutputDeviceOutputRegion fail!%s=%d \n", __FUNCTION__, __LINE__);
		HAL_VT_Finalize();
		return FALSE;
	}
	
	VideoFrameOutputDeviceState.bAppliedPQ = 0;
	VideoFrameOutputDeviceState.bEnabled = 1;
	VideoFrameOutputDeviceState.framerateDivide = 0;
	VideoFrameOutputDeviceState.bFreezed = 1;
	if (HAL_VT_SetVideoFrameOutputDeviceState(KADP_VT_VIDEO_WINDOW_0, KADP_VT_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FREEZED, &VideoFrameOutputDeviceState) ==FALSE){
		rtd_printk(KERN_EMERG, TAG_NAME, "KADP_VT_SetVideoFrameOutputDeviceState fail!%s=%d \n", __FUNCTION__, __LINE__);
		HAL_VT_Finalize();
		return FALSE;	
	}

	if (HAL_VT_GetVideoFrameBufferIndex(KADP_VT_VIDEO_WINDOW_0, &IndexOfCurrentVideoFrameBuffer) == FALSE){
		rtd_printk(KERN_EMERG, TAG_NAME, "KADP_VT_SetVideoFrameOutputDeviceState fail!%s=%d \n", __FUNCTION__, __LINE__);
		HAL_VT_Finalize();
		return FALSE;			
	}	

	colorbarbufferaddr =(unsigned long) CaptureCtrl_VT.cap_buffer[IndexOfCurrentVideoFrameBuffer].cache;

	Check_colorbar_window_cal(GrayBlock,YellowBlock,LittleBlueBlock,GreenBlock,PinkBlock,RedBlock,BlueBlock,BlackBlock);

	rtd_printk(KERN_EMERG, TAG_NAME, "GrayBlock[0] x=%d;y=%d\n",GrayBlock[0].x,GrayBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "GrayBlock[1] x=%d;y=%d\n",GrayBlock[1].x,GrayBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "GrayBlock[2] x=%d;y=%d\n",GrayBlock[2].x,GrayBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "YellowBlock[0] x=%d;y=%d\n",YellowBlock[0].x,YellowBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "YellowBlock[1] x=%d;y=%d\n",YellowBlock[1].x,YellowBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "YellowBlock[2] x=%d;y=%d\n",YellowBlock[2].x,YellowBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "LittleBlueBlock[0] x=%d;y=%d\n",LittleBlueBlock[0].x,LittleBlueBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "LittleBlueBlock[1] x=%d;y=%d\n",LittleBlueBlock[1].x,LittleBlueBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "LittleBlueBlock[2] x=%d;y=%d\n",LittleBlueBlock[2].x,LittleBlueBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "GreenBlock[0] x=%d;y=%d\n",GreenBlock[0].x,GreenBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "GreenBlock[1] x=%d;y=%d\n",GreenBlock[1].x,GreenBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "GreenBlock[2] x=%d;y=%d\n",GreenBlock[2].x,GreenBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "PinkBlock[0] x=%d;y=%d\n",PinkBlock[0].x,PinkBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "PinkBlock[1] x=%d;y=%d\n",PinkBlock[1].x,PinkBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "PinkBlock[2] x=%d;y=%d\n",PinkBlock[2].x,PinkBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "RedBlock[0] x=%d;y=%d\n",RedBlock[0].x,RedBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "RedBlock[1] x=%d;y=%d\n",RedBlock[1].x,RedBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "RedBlock[2] x=%d;y=%d\n",RedBlock[2].x,RedBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "BlueBlock[0] x=%d;y=%d\n",BlueBlock[0].x,BlueBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "BlueBlock[1] x=%d;y=%d\n",BlueBlock[1].x,BlueBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "BlueBlock[2] x=%d;y=%d\n",BlueBlock[2].x,BlueBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "BlackBlock[0] x=%d;y=%d\n",BlackBlock[0].x,BlackBlock[0].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "BlackBlock[1] x=%d;y=%d\n",BlackBlock[1].x,BlackBlock[1].y);
	rtd_printk(KERN_EMERG, TAG_NAME, "BlackBlock[2] x=%d;y=%d\n",BlackBlock[2].x,BlackBlock[2].y);

	rtd_printk(KERN_EMERG, TAG_NAME, "Check_DisplayFrame_isRightColorbar start!%s=%d \n", __FUNCTION__, __LINE__);
	if(ColorBlock_Compare(colorbarbufferaddr,0xBE,0xBE,0xC2,GrayBlock[0]) == FALSE) 
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xBE,0xBE,0xC2,GrayBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xBE,0xBE,0xC2,GrayBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xBC,0xBB,0,YellowBlock[0]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xBC,0xBB,0,YellowBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xBC,0xBB,0,YellowBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0xB7,0xB5,LittleBlueBlock[0]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0xB7,0xB5,LittleBlueBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0xB7,0xB5,LittleBlueBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0xB5,0,GreenBlock[0]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0xB5,0,GreenBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0xB5,0,GreenBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xB6,0,0xB9,PinkBlock[0]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xB6,0,0xB9,PinkBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xB6,0,0xB9,PinkBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xB8,0,0,RedBlock[0]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xB8,0,0,RedBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0xB8,0,0,RedBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0,0xC0,BlueBlock[0]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0,0xC0,BlueBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0,0xC0,BlueBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0,0,BlackBlock[0]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0,0,BlackBlock[1]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	if(ColorBlock_Compare(colorbarbufferaddr,0,0,0,BlackBlock[2]) == FALSE)
	{
		HAL_VT_Finalize();
		return FALSE;
	}
	HAL_VT_Finalize();
	rtd_printk(KERN_EMERG, TAG_NAME, "Check_DisplayFrame_isRightColorbar success!%s=%d \n", __FUNCTION__, __LINE__);
	return TRUE;

}
unsigned int VT_get_input_wid(VT_CAP_SRC capSrc)
{
	unsigned int wid=_DISP_WID;
	ppoverlay_main_den_h_start_end_RBUS main_den_h_start_end_Reg;
	ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_Reg;
	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;

	main_den_h_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_H_Start_End_reg);
	main_active_h_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);

	if((get_vt_VtCaptureVDC())){
			wid=DC2H_InputWidth;
	} else {
		if(capSrc == VT_CAP_SRC_VIDEO_NOPQ) {
//for uzu position could not support 2k1k(when 2step enable,uzu mux size will be less than 2k1k)						
			if(ppoverlay_uzudtg_control1_reg.two_step_uzu_en ==1) {
				wid = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta)>>1;
			}else {
				wid = main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta;
			}
		} else {
			if(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL)
				wid = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta)/2;
			else
				wid = main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta;
		}
	}
	return wid;
}
unsigned int VT_get_input_height(VT_CAP_SRC capSrc)
{
	unsigned int len=_DISP_LEN;
	ppoverlay_main_den_v_start_end_RBUS main_den_v_start_end_Reg;
	ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_Reg;
	ppoverlay_uzudtg_control1_RBUS ppoverlay_uzudtg_control1_reg;

	main_den_v_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_V_Start_End_reg);
	main_active_v_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_V_Start_End_reg);
	ppoverlay_uzudtg_control1_reg.regValue = rtd_inl(PPOVERLAY_uzudtg_control1_reg);

	if((get_vt_VtCaptureVDC())){
			len = DC2H_InputLength;
	} else {
		if(capSrc == VT_CAP_SRC_VIDEO_NOPQ) {
//for uzu position could not support 2k1k(when 2step enable,uzu mux size will be less than 2k1k)			
			if(ppoverlay_uzudtg_control1_reg.two_step_uzu_en ==1) {
				len = (main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta)>>1;
			}else {
				len = main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta;
			}
		} else {
			len = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
		}
	}
	return len;
}

/* =======================================VT_BUFFER_DUMP_DEBUG======================================================*/
#define VT_FILE_PATH "/tmp/VtCapture.raw"

static struct file* file_open(const char* path, int flags, int rights) {
	struct file* filp = NULL;
	mm_segment_t oldfs;
	int err = 0;

	oldfs = get_fs();
	set_fs(get_ds());
	filp = filp_open(path, flags, rights);
	set_fs(oldfs);
	if(IS_ERR(filp)) {
		err = PTR_ERR(filp);
		return NULL;
	}
	return filp;
}

static void file_close(struct file* file) {
	filp_close(file, NULL);
}

/*static int file_read(struct file* file, unsigned long long offset, unsigned char* data, unsigned int size) {
	mm_segment_t oldfs;
	int ret;

	oldfs = get_fs();
	set_fs(get_ds());

	ret = vfs_read(file, data, size, &offset);

	set_fs(oldfs);
	return ret;
}*/

static int file_write(struct file* file, unsigned long long offset, unsigned char* data, unsigned int size) {
	mm_segment_t oldfs;
	int ret;

	oldfs = get_fs();
	set_fs(get_ds());

	ret = vfs_write(file, data, size, &offset);

	set_fs(oldfs);
	return ret;
}

static int file_sync(struct file* file) {
	vfs_fsync(file, 0);
	return 0;
}

int vt_dump_data_to_file(unsigned int bufferindex, unsigned int size)
{
	struct file* filp = NULL;
	unsigned long outfileOffset = 0;
	if (CaptureCtrl_VT.cap_buffer[bufferindex].cache != NULL) {
		rtd_printk(KERN_EMERG, TAG_NAME,"\n\n\n\n *****************  vt_dump_data_to_file start  ******%lx***************\n\n\n\n",(unsigned long)CaptureCtrl_VT.cap_buffer[bufferindex].cache);
		filp = file_open(VT_FILE_PATH, O_RDWR | O_CREAT, 0);
		if (filp == NULL) {
			rtd_printk(KERN_NOTICE, TAG_NAME,"file open fail\n");
			return FALSE;
		}
		file_write(filp, outfileOffset, (unsigned char*)CaptureCtrl_VT.cap_buffer[bufferindex].cache, size);
		file_sync(filp);
		file_close(filp);
		rtd_printk(KERN_EMERG, TAG_NAME,"\n\n\n\n *****************  vt_dump_data_to_file end  *********************\n\n\n\n");
		return TRUE;
	} else {
		rtd_printk(KERN_EMERG, TAG_NAME,"\n\n\n\n *****************  vt_dump_data_to_file NG for null buffer address  *********************\n\n\n\n");
		return FALSE;
	}
}
int vt_dump_date_to_file_debug(unsigned int addr, unsigned int size)
{
	struct file* filp = NULL;
	unsigned long outfileOffset = 0;
	if (addr != 0) 
	{
		rtd_printk(KERN_EMERG, TAG_NAME," vt_dump_data_to_file start\n");
		filp = file_open(VT_FILE_PATH, O_RDWR | O_CREAT, 0);
		if (filp == NULL) 
		{
			rtd_printk(KERN_NOTICE, TAG_NAME,"file open fail\n");
			return FALSE;
		}
		file_write(filp, outfileOffset, (unsigned char *)addr, size);
		file_sync(filp);
		file_close(filp);
		rtd_printk(KERN_EMERG, TAG_NAME,"vt_dump_data_to_file end\n");
		return TRUE;
	} else {
		rtd_printk(KERN_EMERG, TAG_NAME,"\n\n\n\n *****************  vt_dump_data_to_file NG for null buffer address  *********************\n\n\n\n");
		return FALSE;
	}
}

unsigned char debug_dump_data_to_file(unsigned int src_y, unsigned int dump_w,unsigned int dump_h)
{
	struct file* filp = NULL;
	unsigned long outfileOffset = 0;
	unsigned int size = (dump_w * dump_h);
	unsigned char *pVirStartAdrr = NULL;
	static unsigned int g_ulFileCount = 0;
	char y_path[30];

	unsigned int src_phy = CaptureCtrl_VT.cap_buffer[src_y].phyaddr;
	//char y_path[30] = "/tmp/vdec_y_dump.raw";
	/*char c_path[30] = "/tmp/i3ddma_c_dump.raw"; */
	//char filecount[5];
	//g_ulFileCount++;
	//sprintf(filecount, "%d", g_ulFileCount);
	//strcat(y_path, filecount);
	//strcat(c_path, filecount);*/
	sprintf(y_path, "/tmp/y_dump_%d_%d.raw", src_y, g_ulFileCount);
	pr_notice("[VT]y_path = %s\n", y_path);

	size = drvif_memory_get_data_align(size, __12KPAGE);
	pVirStartAdrr = (unsigned char *)dvr_remap_uncached_memory(src_phy, size, __builtin_return_address(0));
		
	if (pVirStartAdrr != 0)
	{
		pr_emerg( "\n\n\n\n ***************** [VT]dump_data_to_file start  ******%p***************\n\n\n\n", pVirStartAdrr);
		
		filp = file_open(y_path, O_RDWR | O_CREAT, 0);
		if (filp == NULL) 
		{
			pr_emerg("[VT]file open fail\n");
			return FALSE;
		}
		
		//pr_emerg("dump y data uncache add=%x, size=%d\n", (unsigned int)(pVirStartAdrr+bufferindex*g_tNN_Cap_Buffer[0].size), g_ulNNOutWidth*g_ulNNOutLength);
		//file_write(filp, outfileOffset, (unsigned char*)g_uncacheaddr, 1920*1080);
		//file_write(filp, outfileOffset, (unsigned char*)pVirStartAdrr+bufferindex*g_tNN_Cap_Buffer[0].size, g_ulNNOutWidth*g_ulNNOutLength);

		file_write(filp, outfileOffset, pVirStartAdrr, (dump_w * dump_h));
		file_sync(filp);
		file_close(filp);

#if 0
		pr_emerg( "\n\n\n\n *****************  i3ddma_dump_data_to_file Y end  *********************\n\n\n\n");

		//filp = file_open(I3DDMA_FILE_PATH_C, O_RDWR | O_CREAT, 0);
		filp = file_open(c_path, O_RDWR | O_CREAT, 0);
		if (filp == NULL) {
			pr_emerg("file open fail\n");
			return FALSE;
		}
		//file_write(filp, outfileOffset, (unsigned char*)i3ddmaCtrl.cap_buffer[bufferindex].cache, i3ddmaCtrl.cap_buffer[bufferindex].size);
		pr_emerg("dump c data uncache add=%x, size=%d\n", (unsigned int)(pVirStartAdrr +  (g_tNN_Cap_Buffer[0].size)*NN_CAP_BUFFER_NUM + (g_tNN_Cap_Buffer[0].size/2)*bufferindex), g_ulNNOutWidth*g_ulNNOutLength/2);
		//file_write(filp, outfileOffset, (unsigned char*)(g_uncacheaddr +	(g_tNN_Cap_Buffer[0].size)/2), 1920*1080/2);
		file_write(filp, outfileOffset, (unsigned char*)(pVirStartAdrr +  (g_tNN_Cap_Buffer[0].size)*NN_CAP_BUFFER_NUM + (g_tNN_Cap_Buffer[0].size/2)*bufferindex), g_ulNNOutWidth*g_ulNNOutLength/2);
		file_sync(filp);
		file_close(filp);
		
		pr_emerg( "\n\n\n\n *****************  i3ddma_dump_data_to_file C end  *********************\n\n\n\n");
#endif		
		dvr_unmap_memory(pVirStartAdrr, size);
		g_ulFileCount++;

		return TRUE;
	}
	else {
		pr_emerg( "\n\n\n\n ***************** [VT]dump_data_to_file NG for null buffer address	*********************\n\n\n\n");
		return FALSE;
	}
}

/* =======================================VT_BUFFER_DUMP_DEBUG======================================================*/


unsigned int VIVT_PM_REGISTER_DATA[][2]
=
{
	{DC2H_DMA_dc2h_Cap_L1_Start_reg, 0},
	{DC2H_DMA_dc2h_Cap_L2_Start_reg, 0},
	{DC2H_DMA_dc2h_Cap_L3_Start_reg, 0},

	{DC2H_RGB2YUV_DC2H_Tab1_M11_M12_reg, 0},
	{DC2H_RGB2YUV_DC2H_Tab1_M13_M21_reg, 0},
	{DC2H_RGB2YUV_DC2H_Tab1_M22_M23_reg, 0},
	{DC2H_RGB2YUV_DC2H_Tab1_M31_M32_reg, 0},
	{DC2H_RGB2YUV_DC2H_Tab1_M33_Y_Gain_reg, 0},
	{DC2H_RGB2YUV_DC2H_Tab1_Yo_reg, 0},
	{DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg, 0},

	{DC2H_SCALEDOWN_DC2H_HSD_Scale_Hor_Factor_reg, 0},
	{DC2H_SCALEDOWN_DC2H_VSD_Scale_Ver_Factor_reg, 0},
	{DC2H_SCALEDOWN_DC2H_HSD_Hor_Segment_reg, 0},
	/*{DC2H_SCALEDOWN_DC2H_HSD_Hor_Delta1_reg, 0},*/
	{DC2H_SCALEDOWN_DC2H_HSD_Initial_Value_reg, 0},
	{DC2H_SCALEDOWN_DC2H_VSD_Initial_Value_reg, 0},
	{DC2H_SCALEDOWN_DC2H_HSD_Ctrl0_reg, 0},
	{DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg, 0},

	{DC2H_VI_DC2H_DMACTL_reg, 0},
	{DC2H_DMA_dc2h_Seq_mode_CTRL2_reg, 0},
	{DC2H_DMA_dc2h_Cap_CTL0_reg, 0},
	{DC2H_DMA_dc2h_Cap_CTL1_reg, 0},
	{DC2H_DMA_dc2h_seq_byte_channel_swap_reg, 0},
	{DC2H_DMA_dc2h_Seq_mode_CTRL1_reg, 0},
};

#ifdef CONFIG_PM
static int vivt_suspend (struct device *p_dev)
{
	//int i,size;

	if(get_vt_function() == TRUE)  /*WOSQRTK-13830 tvpowerd suspend call, stop dc2h capture */
	{
		vt_enable_dc2h(FALSE);
		rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d\n", __FUNCTION__, __LINE__);
	}
	else
		rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d\n", __FUNCTION__, __LINE__);
#if 0
	size = (sizeof(VIVT_PM_REGISTER_DATA)/4)/2;
	for(i=0; i<size; i++)
	{
		VIVT_PM_REGISTER_DATA[i][1]=rtd_inl(VIVT_PM_REGISTER_DATA[i][0]);
	}
#endif	
	return 0;
}

static int vivt_resume (struct device *p_dev)
{
	//int i, size;
#if 0	
	size = (sizeof(VIVT_PM_REGISTER_DATA)/4)/2;
	for(i=0; i<size; i++)
	{
		rtd_outl(VIVT_PM_REGISTER_DATA[i][0],VIVT_PM_REGISTER_DATA[i][1]);
	}
#endif	
	return 0;
}
#endif


int vivt_open(struct inode *inode, struct file *filp) {
	return 0;
}

ssize_t  vivt_read(struct file *filep, char *buffer, size_t count, loff_t *offp)
{
	return 0;

}

ssize_t vivt_write(struct file *filep, const char *buffer, size_t count, loff_t *offp)
{
	return 0;
}

int vivt_release(struct inode *inode, struct file *filep)
{
	return 0;
}


long vivt_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	int retval = 0;
	if (_IOC_TYPE(cmd) != VT_IOC_MAGIC || _IOC_NR(cmd) > VT_IOC_MAXNR) return -ENOTTY ;
	
	switch (cmd)
	{
		case VT_IOC_INIT:
		{
			if(HAL_VT_Init()==FALSE)
				retval = -1;
			break;
		}
		case VT_IOC_INITEX:
		{
			unsigned int buffernum;
			if(copy_from_user((void *)&buffernum, (const void __user *)arg, sizeof(unsigned int)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_INITEX failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_InitEx(buffernum)==FALSE)
					retval =  -1;					
			}
			break;
		}		
		case VT_IOC_FINALIZE:
		{
			//addr = *((unsigned int *)arg);
			if(HAL_VT_Finalize()==FALSE)
				retval = -1;
			break;
		}
		case VT_IOC_GET_DEVICE_CAPABILITY:
		{
			KADP_VT_DEVICE_CAPABILITY_INFO_T DeviceCapabilityInfo;
			if(HAL_VT_GetDeviceCapability(&DeviceCapabilityInfo)==FALSE) {
				retval = -1;
			} else {
				if(copy_to_user((void __user *)arg, (void *)&DeviceCapabilityInfo, sizeof(KADP_VT_DEVICE_CAPABILITY_INFO_T)))
				{
					retval = -EFAULT;
					rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_DEVICE_CAPABILITY failed!!!!!!!!!!!!!!!\n");
				}
			}

			break;
		}
		case VT_IOC_GET_VFB_CAPABILITY:
		{
			KADP_VT_VFB_CAPINFO_T vfb_capinfo;
			if(copy_from_user((void *)&vfb_capinfo, (const void __user *)arg, sizeof(KADP_VT_VFB_CAPINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFB_CAPABILITY failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameBufferCapability(vfb_capinfo.wid,&vfb_capinfo.vfbCapInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfb_capinfo, sizeof(KADP_VT_VFB_CAPINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFB_CAPABILITY failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VT_IOC_GET_VFOD_CAPABILITY:
		{
			KADP_VT_VFOD_CAPINFO_T vfod_capinfo;
			if(copy_from_user((void *)&vfod_capinfo, (const void __user *)arg, sizeof(KADP_VT_VFOD_CAPINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFOD_CAPABILITY failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameOutputDeviceCapability(vfod_capinfo.wid,&vfod_capinfo.vfodCapInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfod_capinfo, sizeof(KADP_VT_VFOD_CAPINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFOD_CAPABILITY failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VT_IOC_GET_VFOD_LIMITATION:
		{
			KADP_VT_VFOD_LIMITATIONINFO_T vfod_limitationinfo;
			if(copy_from_user((void *)&vfod_limitationinfo, (const void __user *)arg, sizeof(KADP_VT_VFOD_LIMITATIONINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFOD_LIMITATION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameOutputDeviceLimitation(vfod_limitationinfo.wid,&vfod_limitationinfo.vfodlimitationInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfod_limitationinfo, sizeof(KADP_VT_VFOD_LIMITATIONINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFOD_LIMITATION failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VT_IOC_GET_ALLVFB_PROPERTY:
		{
			KADP_VT_VFB_PROPERTY_T vfb_property;
			if(copy_from_user((void *)&vfb_property, (const void __user *)arg, sizeof(KADP_VT_VFB_PROPERTY_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_ALLVFB_PROPERTY failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetAllVideoFrameBufferProperty(vfb_property.wid,&vfb_property.vfbProInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfb_property, sizeof(KADP_VT_VFB_PROPERTY_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_ALLVFB_PROPERTY failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VT_IOC_GET_VFB_INDEX:
		{
			KADP_VT_GET_VFBINDEX_T vfb_index;
			if(copy_from_user((void *)&vfb_index, (const void __user *)arg, sizeof(KADP_VT_GET_VFBINDEX_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFB_INDEX failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameBufferIndex(vfb_index.wid,&vfb_index.IndexCurVFB)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfb_index, sizeof(KADP_VT_GET_VFBINDEX_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFB_INDEX failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VT_IOC_GET_VFOD_STATE:
		{
			KADP_VT_VFOD_GET_STATEINFO_T vfodgetstateinfo;
			if(copy_from_user((void *)&vfodgetstateinfo, (const void __user *)arg, sizeof(KADP_VT_VFOD_GET_STATEINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFOD_STATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameOutputDeviceState(vfodgetstateinfo.wid,&vfodgetstateinfo.VFODstate)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetstateinfo, sizeof(KADP_VT_VFOD_GET_STATEINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFOD_STATE failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VT_IOC_SET_VFOD_STATE:
		{
			KADP_VT_VFOD_SET_STATEINFO_T vfodsetstateinfo;
			if(copy_from_user((void *)&vfodsetstateinfo, (const void __user *)arg, sizeof(KADP_VT_VFOD_SET_STATEINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_SET_VFOD_STATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_SetVideoFrameOutputDeviceState(vfodsetstateinfo.wid,vfodsetstateinfo.vfodStateFlag,&vfodsetstateinfo.VFODstate)==FALSE)
					retval =-1;
			}

			break;
		}
		case VT_IOC_GET_VFOD_FRAMERATE:
		{
			KADP_VT_VFOD_GET_FRAMERATE_T vfodgetfr;
			if(copy_from_user((void *)&vfodgetfr, (const void __user *)arg, sizeof(KADP_VT_VFOD_GET_FRAMERATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFOD_FRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameOutputDeviceFramerate(vfodgetfr.wid,&vfodgetfr.framerate)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetfr, sizeof(KADP_VT_VFOD_GET_FRAMERATE_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFOD_FRAMERATE failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VT_IOC_GET_VFOD_DUMPLOCATION:
		{
			KADP_VT_VFOD_GET_DUMPLOCATION_T vfodgetdumplocation;
			if(copy_from_user((void *)&vfodgetdumplocation, (const void __user *)arg, sizeof(KADP_VT_VFOD_GET_DUMPLOCATION_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFOD_DUMPLOCATION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameOutputDeviceDumpLocation(vfodgetdumplocation.wid,&vfodgetdumplocation.DumpLocation)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetdumplocation, sizeof(KADP_VT_VFOD_GET_DUMPLOCATION_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFOD_DUMPLOCATION failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VT_IOC_SET_VFOD_DUMPLOCATION:
		{
			KADP_VT_VFOD_SET_DUMPLOCATION_T vfodsetdumplocation;
			if(copy_from_user((void *)&vfodsetdumplocation, (const void __user *)arg, sizeof(KADP_VT_VFOD_SET_DUMPLOCATION_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_SET_VFOD_DUMPLOCATION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_SetVideoFrameOutputDeviceDumpLocation(vfodsetdumplocation.wid,vfodsetdumplocation.DumpLocation)==FALSE)
					retval =-1;
			}

			break;
		}
		case VT_IOC_GET_VFOD_OUTPUTINFO:
		{
			KADP_VT_VFOD_GET_OUTPUTINFO_T vfodgetoututinfo;
			if(copy_from_user((void *)&vfodgetoututinfo, (const void __user *)arg, sizeof(KADP_VT_VFOD_GET_OUTPUTINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFOD_OUTPUTINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameOutputDeviceOutputInfo(vfodgetoututinfo.wid,vfodgetoututinfo.DumpLocation,&vfodgetoututinfo.OutputInfo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetoututinfo, sizeof(KADP_VT_VFOD_GET_OUTPUTINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFOD_OUTPUTINFO failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VT_IOC_SET_VFOD_OUTPUTREGION:
		{
			KADP_VT_VFOD_SET_OUTPUTREGION_T vfodsetoututinfo;
			if(copy_from_user((void *)&vfodsetoututinfo, (const void __user *)arg, sizeof(KADP_VT_VFOD_SET_OUTPUTREGION_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_SET_VFOD_OUTPUTREGION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_SetVideoFrameOutputDeviceOutputRegion(vfodsetoututinfo.wid,vfodsetoututinfo.DumpLocation,&vfodsetoututinfo.OutputRegion)==FALSE)
					retval =-1;
			}

			break;
		}
		case VT_IOC_WAIT_VSYNC:
		{
			KADP_VT_VIDEO_WINDOW_TYPE_T videoWindowID;
			if(copy_from_user((void *)&videoWindowID, (const void __user *)arg, sizeof(KADP_VT_VIDEO_WINDOW_TYPE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vt ioctl code=VT_IOC_WAIT_VSYNC failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_WaitVsync(videoWindowID)==FALSE)
					retval =-1;
			}
			break;
		}
		case VT_IOC_GET_INPUTVIDEOINFO:
		{
			KADP_VT_GET_INPUTVIDEOINFO_T inputvideoinfo;
			if(copy_from_user((void *)&inputvideoinfo, (const void __user *)arg, sizeof(KADP_VT_GET_INPUTVIDEOINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_INPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetInputVideoInfo(inputvideoinfo.wid,&inputvideoinfo.InputVideoInfo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&inputvideoinfo, sizeof(KADP_VT_GET_INPUTVIDEOINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_INPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VT_IOC_GET_OUTPUTVIDEOINFO:
		{
			KADP_VT_GET_OUTPUTVIDEOINFO_T onputvideoinfo;
			if(copy_from_user((void *)&onputvideoinfo, (const void __user *)arg, sizeof(KADP_VT_GET_OUTPUTVIDEOINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vt ioctl code=VT_IOC_GET_OUTPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetOutputVideoInfo(onputvideoinfo.wid,&onputvideoinfo.OutputVideoInfo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&onputvideoinfo, sizeof(KADP_VT_GET_OUTPUTVIDEOINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_OUTPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VT_IOC_GET_VIDEOMUTESTATUS:
		{
			KADP_VT_GET_VIDEOMUTESTATUS_T videomutestatus;
			if(copy_from_user((void *)&videomutestatus, (const void __user *)arg, sizeof(KADP_VT_GET_VIDEOMUTESTATUS_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VIDEOMUTESTATUS failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoMuteStatus(videomutestatus.wid,&videomutestatus.bOnOff)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&videomutestatus, sizeof(KADP_VT_GET_VIDEOMUTESTATUS_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VIDEOMUTESTATUS failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VT_IOC_GET_VFB_SVSTATE:
		{
			KADP_VT_GET_VFBSVSTATE_T vfbsvstatus;
			if(copy_from_user((void *)&vfbsvstatus, (const void __user *)arg, sizeof(KADP_VT_GET_VFBSVSTATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vt ioctl code=VT_IOC_GET_VFB_SVSTATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameBufferSecureVideoState(vfbsvstatus.wid,&vfbsvstatus.IsSecureVideo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfbsvstatus, sizeof(KADP_VT_GET_VFBSVSTATE_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFB_SVSTATE failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VT_IOC_GET_VFOD_BLOCKSTATE:
		{
			KADP_VT_GET_VFODBLOCKSTATE_T vfodblockstatus;
			if(copy_from_user((void *)&vfodblockstatus, (const void __user *)arg, sizeof(KADP_VT_GET_VFODBLOCKSTATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vt ioctl code=VT_IOC_GET_VFOD_BLOCKSTATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_GetVideoFrameOutputDeviceBlockState(vfodblockstatus.wid,&vfodblockstatus.bBlockState)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodblockstatus, sizeof(KADP_VT_GET_VFODBLOCKSTATE_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_GET_VFOD_BLOCKSTATE failed!!!!!!!!!!!!!!!\n");
					}

				}
			}
			break;
		}
		case VT_IOC_SET_VFOD_BLOCKSTATE:
		{
			KADP_VT_SET_VFODBLOCKSTATE_T setvfodblockstatus;
			if(copy_from_user((void *)&setvfodblockstatus, (const void __user *)arg, sizeof(KADP_VT_SET_VFODBLOCKSTATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vt ioctl code=VT_IOC_SET_VFOD_BLOCKSTATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_SetVideoFrameOutputDeviceBlockState(setvfodblockstatus.wid,setvfodblockstatus.bBlockState)==FALSE)
					retval =-1;
			}
			break;
		}
		case VT_IOC_SET_PIXEL_FORMAT:
		{	
			VT_CAP_FMT format;
			if(copy_from_user((void *)&format, (const void __user *)arg, sizeof(VT_CAP_FMT)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vt ioctl code=VT_IOC_SET_PIXEL_FORMAT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VT_set_Pixel_Format(format)==FALSE)
					retval =-1;
			}
			break;
		}		
		case VT_IOC_VFB_DATASHOW_ONSUBDISP:
		{	
			unsigned char vfbdatashowonsub;
			if(copy_from_user((void *)&vfbdatashowonsub, (const void __user *)arg, sizeof(unsigned char)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vt ioctl code=VT_IOC_VFB_DATASHOW_ONSUBDISP failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(Scaler_SubMDispWindow_VFB(vfbdatashowonsub)==FALSE)
					retval =-1;
			}
			break;
		}
		case VT_IOC_EnableFRCMode:
		{
			unsigned int bEnableFrcMode;
			if(copy_from_user((void *)&bEnableFrcMode, (const void __user *)arg, sizeof(unsigned int)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vt ioctl code=VT_IOC_INITEX failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				unsigned char bEnableFrc;
				bEnableFrc = (unsigned char)bEnableFrcMode;
				if(HAL_VT_EnableFRCMode(bEnableFrc)==FALSE)
					retval =  -1;
			}
			break;
		}			
		default:
			rtd_printk(KERN_DEBUG, TAG_NAME, "Scaler vt disp: ioctl code = %d is invalid!!!!!!!!!!!!!!!1\n", cmd);
			break ;
		}
	return retval;


}

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
long vivt_compat_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{ 
	return vivt_ioctl(file,cmd,arg);
}
#endif

int vivt_major   = VT_MAJOR;
int vivt_minor   = 0 ;
int vivt_nr_devs = VT_NR_DEVS;

module_param(vivt_major, int, S_IRUGO);
module_param(vivt_minor, int, S_IRUGO);
module_param(vivt_nr_devs, int, S_IRUGO);

static struct class *vivt_class = NULL;
static struct platform_device *vivt_platform_devs = NULL;

struct file_operations vivt_fops= {
	.owner =    THIS_MODULE,
	.open  =    vivt_open,
	.release =  vivt_release,
	.read  =    vivt_read,
	.write = 	vivt_write,
	.unlocked_ioctl = 	vivt_ioctl,
#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
  	.compat_ioctl = vivt_compat_ioctl,
#endif
};

#ifdef CONFIG_PM
static const struct dev_pm_ops vivt_pm_ops =
{
	.suspend    = vivt_suspend,
	.resume     = vivt_resume,
#ifdef CONFIG_HIBERNATION
	.freeze 	= vivt_suspend,
	.thaw		= vivt_resume,
	.poweroff	= vivt_suspend,
	.restore	= vivt_resume,
#endif

};
#endif

static struct platform_driver vivt_device_driver = {
    .driver = {
        .name       = VT_DEVICE_NAME,
        .bus        = &platform_bus_type,
#ifdef CONFIG_PM
	.pm 		= &vivt_pm_ops,
#endif

    },
} ;


static char *vivt_devnode(struct device *dev, mode_t *mode)
{
	*mode =0666;
	return NULL;
}

#ifdef CONFIG_RTK_KDRV_DC_MEMORY_TRASH_DETCTER
static void sb4_dc2h_debug_info(void)
{
	dcmt_trap_info trap_info;
	unsigned int i = 0;
	//check trash module
	if(!isDcmtTrap("TVSB4_DC2H"))  //"SB3_MD_SCPU"?trap ip,ip?????rtk_dc_mt.c??module_info[]
	{
		printk(KERN_ERR "not TVSB4_DC2H module!\n");
		return;
	}

	get_dcmt_trap_info(&trap_info);  //get dcmt trap information (include trash_addr,module_id,rw_type)
	printk(KERN_ERR "TVSB4_DC2H module trashed somewhere!\n");

	//dc2h address and control
	for (i = 0xb8029900; i <=0xb8029a70; i=i+4)
	{
		printk(KERN_ERR "%x=%x\n", i, IoReg_Read32(i));
	}

	for (i = 0xb8029c00; i <=0xb8029c18; i=i+4)
	{
		printk(KERN_ERR "%x=%x\n", i, IoReg_Read32(i));
	}

	printk(KERN_ERR "0xb8029c20=%x\n", IoReg_Read32(0xb8029c20));

	for (i = 0xb8029c80; i <=0xb8029c88; i=i+4)
	{
		printk(KERN_ERR "%x=%x\n", i, IoReg_Read32(i));
	}

	for (i = 0xb8029d00; i <=0xb8029d44; i=i+4)
	{
		printk(KERN_ERR "%x=%x\n", i, IoReg_Read32(i));
	}

	printk(KERN_ERR "0xb8029d68=%x\n", IoReg_Read32(0xb8029d68));
	printk(KERN_ERR "0xb8029d6c=%x\n", IoReg_Read32(0xb8029d6c));

	for (i = 0xb8029d70; i <=0xb8029db8; i=i+4)
	{
		printk(KERN_ERR "%x=%x\n", i, IoReg_Read32(i));
	}
	return;
}
#endif

DCMT_DEBUG_INFO_DECLARE(sb4_dc2h_mdscpu, sb4_dc2h_debug_info);

int vivt_init_module(void)
{
	int result;
  	int devno;
	dev_t dev = 0;

#ifdef CONFIG_RTK_KDRV_DC_MEMORY_TRASH_DETCTER
	/******************DCMT register callback func in init flow******************/
	DCMT_DEBUG_INFO_REGISTER(sb4_dc2h_mdscpu, sb4_dc2h_debug_info);
	rtd_printk(KERN_DEBUG, TAG_NAME, "DCMT_DEBUG_INFO_REGISTER(sb4_dc2h_mdscpu, sb4_dc2h_debug_info)\n");
#endif

	rtd_printk(KERN_DEBUG, TAG_NAME, "\n\n\n\n *****************  vt init module  *********************\n\n\n\n");
	if (vivt_major) {
		dev = MKDEV(vivt_major, vivt_minor);
		result = register_chrdev_region(dev, vivt_nr_devs, VT_DEVICE_NAME);
	} else {
		result = alloc_chrdev_region(&dev, vivt_minor, vivt_nr_devs,VT_DEVICE_NAME);
		vivt_major = MAJOR(dev);
	}
	if (result < 0) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "vt: can't get major %d\n", vivt_major);
		return result;
	}

	rtd_printk(KERN_DEBUG, TAG_NAME, "vt init module major number = %d\n", vivt_major);

	vivt_class = class_create(THIS_MODULE,VT_DEVICE_NAME);

	if (IS_ERR(vivt_class))
	{
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevt: can not create class...\n");
		result = PTR_ERR(vivt_class);
		goto fail_class_create;
	}

	vivt_class->devnode = (void *)vivt_devnode;

	vivt_platform_devs = platform_device_register_simple(VT_DEVICE_NAME, -1, NULL, 0);

    	if((result=platform_driver_register(&vivt_device_driver)) != 0){
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevt: can not register platform driver...\n");
		result = -ENOMEM;
		goto fail_platform_driver_register;
    	}

    	devno = MKDEV(vivt_major, vivt_minor);
    	cdev_init(&vivt_cdev, &vivt_fops);
    	vivt_cdev.owner = THIS_MODULE;
   	vivt_cdev.ops = &vivt_fops;
	result = cdev_add (&vivt_cdev, devno, 1);
	if (result<0)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevt: can not add character device...\n");
		goto fail_cdev_init;
	}
    	device_create(vivt_class, NULL, MKDEV(vivt_major, 0), NULL, VT_DEVICE_NAME);
	sema_init(&VT_Semaphore, 1);
	sema_init(&VTBlock_Semaphore, 1);
	
    return 0;	//success

fail_cdev_init:
	platform_driver_unregister(&vivt_device_driver);
fail_platform_driver_register:
	platform_device_unregister(vivt_platform_devs);
	vivt_platform_devs = NULL;
	class_destroy(vivt_class);
fail_class_create:
	vivt_class = NULL;
	unregister_chrdev_region(vivt_devno, 1);
	return result;
}



void __exit vivt_cleanup_module(void)
{
	dev_t devno = MKDEV(vivt_major, vivt_minor);
	rtd_printk(KERN_DEBUG, TAG_NAME, "rtice clean module vt_major = %d\n", vivt_major);
  	device_destroy(vivt_class, MKDEV(vivt_major, 0));
  	class_destroy(vivt_class);
	vivt_class = NULL;
	cdev_del(&vivt_cdev);
   	/* device driver removal */
	if(vivt_platform_devs) {
		platform_device_unregister(vivt_platform_devs);
		vivt_platform_devs = NULL;
	}
  	platform_driver_unregister(&vivt_device_driver);
	/* cleanup_module is never called if registering failed */
	unregister_chrdev_region(devno, vivt_nr_devs);
}

module_init(vivt_init_module) ;
module_exit(vivt_cleanup_module) ;
