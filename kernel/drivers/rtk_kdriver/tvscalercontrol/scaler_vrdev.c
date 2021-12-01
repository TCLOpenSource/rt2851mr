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
#include <uapi/linux/const.h>
#include <linux/mm.h>
#include <mach/rtk_log.h>
#include <linux/fs.h>/*for dump buffer to usb file*/
#include <linux/hrtimer.h>/*for wait vsync hr sleep*/
#include <linux/version.h>

#include <rtk_kdriver/RPCDriver.h>
#include <rbus/ppoverlay_reg.h>
#include <rbus/mdomain_disp_reg.h>
#include <rbus/scaleup_reg.h>
#include <rbus/yuv2rgb_reg.h>

#include <rbus/dma_vgip_reg.h>
#include <rbus/h3ddma_rgb2yuv_dither_4xxto4xx_reg.h>
#include <rbus/h3ddma_reg.h>
#include <rbus/h3ddma_hsd_reg.h>
//#include <rbus/h3ddma_vi_reg.h>

#include <tvscalercontrol/io/ioregdrv.h>
#include <tvscalercontrol/panel/panelapi.h>
#include <scaler/scalerCommon.h>
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/scalerdrv/pipmp.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#if (defined(CONFIG_ENABLE_HDR10_HDMI_AUTO_DETECT)||defined(CONFIG_ENABLE_DOLBY_VISION_HDMI_AUTO_DETECT))
#include <tvscalercontrol/scalerdrv/scaler_hdr_ctrl.h>
#endif
#include <tvscalercontrol/vip/ultrazoom.h>
#include <rbus/dc2h_dma_reg.h>
#include <rbus/dc2h_vi_reg.h>
#include <rbus/dc2h_scaledown_reg.h>
#include <rbus/dc2h_rgb2yuv_reg.h>
#include "scaler_vrdev.h"
#include "scaler_vscdev.h"
#include "scaler_vpqmemcdev.h"
#include "gal/rtk_kadp_se.h"
#include <scaler/vipRPCCommon.h>

struct semaphore VR_Semaphore;
static struct semaphore VRBlock_Semaphore;

#define _ALIGN(val, align) (((val) + ((align) - 1)) & ~((align) - 1))
#define __4KPAGE  0x1000
unsigned int VR_CAPTURE_BUFFER_UNITSIZE;

VR_CAPTURE_CTRL_T CaptureCtrl_VR;

static dev_t vivr_devno = 0;//vr device number
static struct cdev vivr_cdev;

#define TAG_NAME "VR" //log refine

static KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T VFODState = {FALSE,FALSE,TRUE,1};
static KADP_VR_DUMP_LOCATION_TYPE_T VRDumpLocation = KADP_VR_DISPLAY_OUTPUT;
static VR_CUR_CAPTURE_INFO curCapInfo;
extern unsigned char get_vsc_mutestatus(void);
static unsigned char VrFunction = FALSE;
static unsigned int VrBufferNum = 3;
static unsigned char VrSwBufferMode = FALSE;
//static unsigned char VR_vactend_ie = FALSE;

/*ARGB8888_FORMAT for roku
  RGB888 for LGE*/
static VR_CAP_FMT VR_Pixel_Format = VR_CAP_RGB888;

static unsigned int SwVrBufferNumber = 0;
static unsigned int SwVrBuffer0Addr = 0;
static unsigned int SwVrBuffer1Addr = 0;
static unsigned int SwVrBuffer2Addr = 0;
static unsigned int SwVrBuffer3Addr = 0;
static unsigned int SwVrBuffer4Addr = 0;
static unsigned int SwVrCapWidth = 0;
static unsigned int SwVrCapLength = 0;

//static unsigned int VrFreezeRegAddr = 0;
static unsigned char VrCaptureVDC = FALSE;
static unsigned char VrEnableFRCMode = TRUE;
static unsigned char IndexOfFreezedVideoFrameBufferVr = 0;
/*vt init work width and length*/
#define VR_CAP_FRAME_DEFAULT_WIDTH	1920
#define VR_CAP_FRAME_DEFAULT_LENGTH	1080
/*vt init work width and length*/
#define VR_CAP_FRAME_WIDTH_2K1k		1920
#define VR_CAP_FRAME_HEIGHT_2K1k	1080

#define VR_CAP_FRAME_WIDTH_4K2K		3840
#define VR_CAP_FRAME_HEIGHT_4K2K	2160

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


#define _ALIGN(val, align) (((val) + ((align) - 1)) & ~((align) - 1))
#define __4KPAGE  0x1000
/*4k and 96 align*/
#define __12KPAGE  0x3000
DC2H_HANDLER *pdc2h_hdl_vr = NULL;
static DC2H_HANDLER dc2h_hdl_vr;
static unsigned int DC2H_InputWidth;
static unsigned int DC2H_InputLength;
unsigned int g_ulNNOutWidthVr=0; //960;
unsigned int g_ulNNOutLengthVr=0; //540;
volatile unsigned int vr_vfod_capture_out_W = VR_CAP_FRAME_DEFAULT_WIDTH;
volatile unsigned int vr_vfod_capture_out_H = VR_CAP_FRAME_DEFAULT_LENGTH;
volatile unsigned int vr_vfod_capture_location = KADP_VR_DISPLAY_OUTPUT;
static unsigned int vr_cap_frame_max_width = VR_CAP_FRAME_WIDTH_2K1k; 
static unsigned int vr_cap_frame_max_height = VR_CAP_FRAME_HEIGHT_2K1k;
#ifdef CONFIG_ENABLE_HDMI_NN
extern unsigned int h3ddma_get_NN_read_buffer(unsigned int *a_pulYAddr, unsigned int *a_pulCAddr);
#endif
extern unsigned char get_vdec_securestatus(void);
extern void set_vdec_securestatus(unsigned char value);
extern void set_dtv_securestatus(unsigned char status);
extern unsigned char drvif_scaler_get_abnormal_dvs_long_flag(void);
extern unsigned char drvif_scaler_get_abnormal_dvs_short_flag(void);
void drvif_Vr_DC2H_dispD_CaptureConfig(VR_CUR_CAPTURE_INFO capInfo);
unsigned char Capture_BufferMemInit_VR(unsigned int buffernum);
void Capture_BufferMemDeInit_VR(unsigned int buffernum);
void drvif_do_se_stretch_vr(unsigned int src_w, unsigned int src_h, unsigned int src_addr_y, unsigned int src_addr_uv, KGAL_PIXEL_FORMAT_T src_fmt);
_RPC_system_setting_info* scaler_GetShare_Memory_RPC_system_setting_info_Struct(void);

unsigned int get_framerateDivide_vr(void)
{
	return VFODState.framerateDivide;
}
void set_framerateDivide_vr(unsigned int value)
{
	VFODState.framerateDivide = value;
}

unsigned int sort_boundary_addr_max_index_vr(void)
{

	unsigned int i,index = 0;
	unsigned int bufnum = 5;
	unsigned int max = CaptureCtrl_VR.cap_buffer[0].phyaddr;
	
	for( i = 1; i < bufnum; i++)
	{
		if(CaptureCtrl_VR.cap_buffer[i].phyaddr > max)
		{
			max = CaptureCtrl_VR.cap_buffer[i].phyaddr;
			index = i;
		}
		
	}
	return index;
}

unsigned int sort_boundary_addr_min_index_vr(void)
{
	unsigned int i,index = 0;
	unsigned int bufnum = 5;
	unsigned int min = CaptureCtrl_VR.cap_buffer[0].phyaddr;
	
	for( i = 1; i < bufnum; i++)
	{
		if(CaptureCtrl_VR.cap_buffer[i].phyaddr < min)
		{
			min = CaptureCtrl_VR.cap_buffer[i].phyaddr;
			index = i;
		}
		
	}
	return index;
}

unsigned char get_vr_VrCaptureVDC(void)
{
	return VrCaptureVDC;
}

void set_vr_VrCaptureVDC(unsigned char value)
{
	VrCaptureVDC = value;
}
unsigned char get_vr_EnableFRCMode(void)
{
	return VrEnableFRCMode;
}

void set_vr_EnableFRCMode(unsigned char value)
{
	VrEnableFRCMode = value;
}

unsigned char get_vr_function(void)
{
	return VrFunction;
}

void set_vr_function(unsigned char value)
{
	VrFunction = value;
}

unsigned int get_vr_VrBufferNum(void)
{
	return VrBufferNum;
}

void set_vr_VrBufferNum(unsigned int value)
{
	VrBufferNum = value;
}

unsigned char get_vr_VrSwBufferMode(void)
{
	return VrSwBufferMode;
}

void set_vr_VrSwBufferMode(unsigned char value)
{
	VrSwBufferMode = value;
}

void set_VR_Pixel_Format(VR_CAP_FMT value)
{
	VR_Pixel_Format = value;
}

VR_CAP_FMT get_VR_Pixel_Format(void)
{
	return VR_Pixel_Format;
}

#define CAP_LEN 32
#define TMPMUL	(16)

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
#define _RGB2YUV_Yo_odd				0x0a
#define _RGB2YUV_Y_gain				0x0b
#define _RGB2YUV_sel_RGB			0x0c
#define _RGB2YUV_set_Yin_offset		0x0d
#define _RGB2YUV_set_UV_out_offset	0x0e
#define _RGB2YUV_sel_UV_off			0x0f
#define _RGB2YUV_Matrix_bypass		0x10
#define _RGB2YUV_Enable_Y_gain		0x11
#if 0
static unsigned short tRGB2YUV_COEF_709_RGB_0_255[] =
{
	// CCIR 709 RGB
#if 1 // for 0~255
	0x0131,  // m11[10:2] U(9,8)
	0x025c,  // m12   [20:13] U(8,8)
	0x0074,  // m13 [31:23] U(9,8)
#else // for 16~235
	0x0163,  // m11
	0x02bf,   // m12
	0x0087,  // m13
#endif
	0x03D5,   // m21 >> 2 0x01D5 up bits at AT Name: cychen2 , Date: 2010/3/25
	0x0357,   // m22 >> 1
	0x0080,   // m23 >> 2
	0x0080,   // m31 >> 2
	0x0795,   // m32 >> 2 0x0195  up bits at AT Name: cychen2 , Date: 2010/3/25
	0x03D7,   // m33 >> 1
	0x0000,    // Yo_even
	0x0000,    // Yo_odd
	0x0100,    // Y_gain
	0x0001,  // sel_RGB
	0x0000,  // sel_Yin_offset
	0x0001,  // sel_UV_out_offset
	0x0000,  // sel_UV_off
	0x0000,  // Matrix_bypass
	0x0001,  // Enable_Y_gain
};
#endif

static short tScale_Down_Coef_2tap[] = {
    0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,
    31,  95, 159, 223, 287, 351, 415, 479,
    543, 607, 671, 735, 799, 863, 927, 991,
};

static short tScale_Down_Coef_Blur[] = {
	213,  217,  221,  222,  224,  229,  232,  234,
	239,  242,  245,  249,  252,  255,  259,  262,
	265,  266,  267,  269,  271,  272,  273,  275,
	276,  277,  278,  280,  281,  281,  282,  284,
};

static short tScale_Down_Coef_Mid[] = {
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


unsigned char Capture_BufferMemInit_VR(unsigned int buffernum) {
	unsigned int size;// = VR_CAPTURE_BUFFER_UNITSIZE;
	int i;
	unsigned long malloccacheaddr;

	if((get_VR_Pixel_Format() == VR_CAP_ABGR8888)||(get_VR_Pixel_Format() == VR_CAP_ARGB8888))
		VR_CAPTURE_BUFFER_UNITSIZE = _ALIGN(1920*1080*4,__4KPAGE);
	else if(get_VR_Pixel_Format() == VR_CAP_NV12)
		VR_CAPTURE_BUFFER_UNITSIZE = _ALIGN((1920*1080+1920*540),__4KPAGE);
	else if(get_VR_Pixel_Format() == VR_CAP_NV16)
		VR_CAPTURE_BUFFER_UNITSIZE = _ALIGN(1920*1080*2,__4KPAGE);	
	else
		VR_CAPTURE_BUFFER_UNITSIZE = _ALIGN(1920*1080*3,__4KPAGE);
	size = VR_CAPTURE_BUFFER_UNITSIZE;
	malloccacheaddr = (unsigned long)dvr_malloc_specific(size * buffernum, GFP_DCU2_FIRST);
	if(malloccacheaddr == (unsigned long)NULL)
	{
		
		rtd_printk(KERN_NOTICE, TAG_NAME,"Warning:alloc VR memory failed\n");
		return FALSE;
	}

	for (i=0; i<buffernum; i++) {
		if(CaptureCtrl_VR.cap_buffer[i].cache == NULL){
			CaptureCtrl_VR.cap_buffer[i].cache = (void*)(malloccacheaddr+i*size);
			//CaptureCtrl_VR.cap_buffer[i].phyaddr =  (unsigned int)virt_to_phys((void*)CaptureCtrl_VR.cap_buffer[i].cache);
			CaptureCtrl_VR.cap_buffer[i].phyaddr =  (unsigned int)dvr_to_phys((void*)CaptureCtrl_VR.cap_buffer[i].cache);
			CaptureCtrl_VR.cap_buffer[i].size = size;
			rtd_printk(KERN_NOTICE, TAG_NAME,"[VR memory allocate] buf[%d]=%lx(%d KB), phy(%lx) \n", i, (unsigned long)CaptureCtrl_VR.cap_buffer[i].cache, CaptureCtrl_VR.cap_buffer[i].size >> 10, (unsigned long)CaptureCtrl_VR.cap_buffer[i].phyaddr);
		}
	}
	return TRUE;
}

void Capture_BufferMemDeInit_VR(unsigned int buffernum) {
	int i;
	if (CaptureCtrl_VR.cap_buffer[0].cache)
	{
		dvr_free(CaptureCtrl_VR.cap_buffer[0].cache);
	}

	for (i=0; i<buffernum; i++)
	{
		if (CaptureCtrl_VR.cap_buffer[i].cache)
		{
			CaptureCtrl_VR.cap_buffer[i].cache = NULL;
			CaptureCtrl_VR.cap_buffer[i].phyaddr = (unsigned long)NULL;
			CaptureCtrl_VR.cap_buffer[i].size = 0;
		}
	}
	rtd_printk(KERN_DEBUG, TAG_NAME,"[VR memory free] Deinit done!\n");
}

unsigned char vr_IndexOfFreezedVideoFrameBuffer = 0;
void set_vr_vfod_freezed(unsigned char boffon)
{
#if 0
	if ((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16)){
		if (boffon == TRUE) {
				if(get_vr_VrBufferNum()==5) {
					h3ddma_vi_idma_vi_ads_start_y_RBUS h3ddma_vi_idma_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = rtd_inl(H3DDMA_VI_idma_vi_ads_start_y_reg);
			
					if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[4].phyaddr;
					}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
					}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
					}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
					}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[4].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
					}
			
					if(lastcapbufferaddr == VrFreezeRegAddr){
						if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[4].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[4].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
						}
					}
					if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 3;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[4].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 4;
					}
					VrFreezeRegAddr = lastcapbufferaddr;
				} else if(get_vr_VrBufferNum()==4) {
					h3ddma_vi_idma_vi_ads_start_y_RBUS h3ddma_vi_idma_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = rtd_inl(H3DDMA_VI_idma_vi_ads_start_y_reg);
			
					if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
					}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
					}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
					}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
					}
			
					if(lastcapbufferaddr == VrFreezeRegAddr){
						if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
						}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
							lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
						}
					}
					if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						vr_IndexOfFreezedVideoFrameBuffer = 3;
					}	
					VrFreezeRegAddr = lastcapbufferaddr;
				} else if(get_vr_VrBufferNum()==3) {
					h3ddma_vi_idma_vi_ads_start_y_RBUS h3ddma_vi_idma_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = rtd_inl(H3DDMA_VI_idma_vi_ads_start_y_reg);

		           if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
		           }else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
		           }else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
		           }

		           if(lastcapbufferaddr == VrFreezeRegAddr){
		                   if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
		                   }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
		                   }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
		                           lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
		                   }
		           }

		           if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
		                   vr_IndexOfFreezedVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
		                   vr_IndexOfFreezedVideoFrameBuffer = 1;
		           }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
		                   vr_IndexOfFreezedVideoFrameBuffer = 2;
		           }
			    VrFreezeRegAddr = lastcapbufferaddr;
		        }

		}else{
			VrFreezeRegAddr = 0;
		}
	}else if ((get_VR_Pixel_Format() == VR_CAP_RGB888)||(get_VR_Pixel_Format() == VR_CAP_ARGB8888)||(get_VR_Pixel_Format() == VR_CAP_ABGR8888)){
		if (boffon == TRUE) {
			h3ddma_cap_status_RBUS h3ddma_cap_status_Reg;
			unsigned int rgbfreezebufferaddr;
			rtd_printk(KERN_NOTICE, TAG_NAME,"H3DDMA_I3DDMA_enable_reg = %x\n", IoReg_Read32(H3DDMA_I3DDMA_enable_reg));
			rtd_printk(KERN_NOTICE, TAG_NAME,"h3ddma_cap_status_Reg = %x\n", IoReg_Read32(H3DDMA_Cap_Status_reg));
			//msleep(16);
			//rtd_printk(KERN_NOTICE, TAG_NAME,"H3DDMA_I3DDMA_enable_reg = %x\n", IoReg_Read32(H3DDMA_I3DDMA_enable_reg));
			//rtd_printk(KERN_NOTICE, TAG_NAME,"h3ddma_cap_status_Reg = %x\n", IoReg_Read32(H3DDMA_Cap_Status_reg));			
			h3ddma_cap_status_Reg.regValue = rtd_inl(H3DDMA_Cap_Status_reg);
			rgbfreezebufferaddr = 0;
			if (h3ddma_cap_status_Reg.cap_block_2 == 1) {
				rgbfreezebufferaddr = IoReg_Read32(H3DDMA_Cap_L1_Start_reg);
				IoReg_Write32(H3DDMA_Cap_L1_Start_reg,IoReg_Read32(H3DDMA_Cap_L3_Start_reg));
				IoReg_Write32(H3DDMA_Cap_R1_Start_reg,IoReg_Read32(H3DDMA_Cap_L3_Start_reg));
				IoReg_Write32(H3DDMA_Cap_L3_Start_reg,rgbfreezebufferaddr);
			} else if (h3ddma_cap_status_Reg.cap_block_2 == 0) {
				rgbfreezebufferaddr = IoReg_Read32(H3DDMA_Cap_L2_Start_reg);
				IoReg_Write32(H3DDMA_Cap_L2_Start_reg,IoReg_Read32(H3DDMA_Cap_L3_Start_reg));
				IoReg_Write32(H3DDMA_Cap_R2_Start_reg,IoReg_Read32(H3DDMA_Cap_L3_Start_reg));
				IoReg_Write32(H3DDMA_Cap_L3_Start_reg,rgbfreezebufferaddr);
			} 
		
			if (rgbfreezebufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr)
				vr_IndexOfFreezedVideoFrameBuffer = 0;
			else if (rgbfreezebufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr)
				vr_IndexOfFreezedVideoFrameBuffer = 1;
			else
				vr_IndexOfFreezedVideoFrameBuffer = 2;
			rtd_printk(KERN_NOTICE, TAG_NAME,"IndexOfFreezedVideoFrameBufferVr = %d\n", vr_IndexOfFreezedVideoFrameBuffer);
			rtd_printk(KERN_NOTICE, TAG_NAME,"H3DDMA_Cap_L1_Start_reg = %x\n", IoReg_Read32(H3DDMA_Cap_L1_Start_reg));
			rtd_printk(KERN_NOTICE, TAG_NAME,"H3DDMA_Cap_L2_Start_reg = %x\n", IoReg_Read32(H3DDMA_Cap_L2_Start_reg));
			rtd_printk(KERN_NOTICE, TAG_NAME,"H3DDMA_Cap_L3_Start_reg = %x\n", IoReg_Read32(H3DDMA_Cap_L3_Start_reg));
		
		}

	}
#endif
}

void i3ddmavi_vr_isr(void)
{
#if 0
	if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16)){
		if(get_vr_VrBufferNum() == 5){
			h3ddma_vi_idma_vi_ads_start_y_RBUS h3ddma_vi_idma_vi_ads_start_y_Reg;
			h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = rtd_inl(H3DDMA_VI_idma_vi_ads_start_y_reg);

			if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer0Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer1Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer1Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer2Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer2Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer3Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer3Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer4Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer4Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer0Addr;
			}

			if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == VrFreezeRegAddr){
				if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer0Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer1Addr;
				}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer1Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer2Addr;
				}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer2Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer3Addr;
				}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer3Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer4Addr;
				}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer4Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer0Addr;
				}
			}
			rtd_outl(H3DDMA_VI_idma_vi_ads_start_y_reg, h3ddma_vi_idma_vi_ads_start_y_Reg.regValue);
			rtd_outl(H3DDMA_VI_idma_vi_ads_start_c_reg, h3ddma_vi_idma_vi_ads_start_y_Reg.regValue+SwVrCapWidth*SwVrCapLength);
		}else if(get_vr_VrBufferNum() == 4){
			h3ddma_vi_idma_vi_ads_start_y_RBUS h3ddma_vi_idma_vi_ads_start_y_Reg;
			h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = rtd_inl(H3DDMA_VI_idma_vi_ads_start_y_reg);

			if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer0Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer1Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer1Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer2Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer2Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer3Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer3Addr){
				h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer0Addr;
			}

			if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == VrFreezeRegAddr){
				if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer0Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer1Addr;
				}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer1Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer2Addr;
				}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer2Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer3Addr;
				}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer3Addr){
					h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer0Addr;
				}
			}
			rtd_outl(H3DDMA_VI_idma_vi_ads_start_y_reg, h3ddma_vi_idma_vi_ads_start_y_Reg.regValue);
			rtd_outl(H3DDMA_VI_idma_vi_ads_start_c_reg, h3ddma_vi_idma_vi_ads_start_y_Reg.regValue+SwVrCapWidth*SwVrCapLength);
		}else if (get_vr_VrBufferNum() == 3){
			h3ddma_vi_idma_vi_ads_start_y_RBUS h3ddma_vi_idma_vi_ads_start_y_Reg;
			h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = rtd_inl(H3DDMA_VI_idma_vi_ads_start_y_reg);

			if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer0Addr){
			   h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer1Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer1Addr){
			   h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer2Addr;
			}else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer2Addr){
			   h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer0Addr;
			}

			if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == VrFreezeRegAddr){
			   if(h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer0Addr){
				   h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer1Addr;
			   }else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer1Addr){
				   h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer2Addr;
			   }else if (h3ddma_vi_idma_vi_ads_start_y_Reg.regValue == SwVrBuffer2Addr){
				   h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = SwVrBuffer0Addr;
			   }
			}
			rtd_outl(H3DDMA_VI_idma_vi_ads_start_y_reg, h3ddma_vi_idma_vi_ads_start_y_Reg.regValue);
			rtd_outl(H3DDMA_VI_idma_vi_ads_start_c_reg, h3ddma_vi_idma_vi_ads_start_y_Reg.regValue+SwVrCapWidth*SwVrCapLength);
		}

	}
#endif
}

/* implement for tcl vr with i3ddma squence rgb mode*/
void I3DDMA_Set_Vgip_VrCapture(unsigned char src, VR_DISPD_I3DDMACAP_SRC dispD_sel, unsigned char mode)
{
	dma_vgip_dma_vgip_ctrl_RBUS dma_vgip_chn1_ctrl_reg;
	dma_vgip_dma_vgip_act_hsta_width_RBUS dma_vgip_chn1_act_hsta_width_reg;
	dma_vgip_dma_vgip_act_vsta_length_RBUS dma_vgip_chn1_act_vsta_length_reg;
	dma_vgip_dma_vgip_delay_RBUS  dma_vgip_chn1_delay_reg;
	dma_vgip_dma_vgip_cts_fifo_ctl_RBUS  dma_cts_fifo_ctl_reg;
	ppoverlay_dh_den_start_end_RBUS ppoverlay_dh_den_start_end_Reg;
	ppoverlay_dv_den_start_end_RBUS ppoverlay_dv_den_start_end_Reg;

	ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_Reg;
	ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_Reg;
	
	ppoverlay_dh_den_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_DH_DEN_Start_End_reg);
	ppoverlay_dv_den_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_DV_DEN_Start_End_reg);

	main_active_h_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	main_active_v_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_V_Start_End_reg);

	dma_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	dma_vgip_chn1_ctrl_reg.dma_in_clk_en = 0;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg, dma_vgip_chn1_ctrl_reg.regValue);

	dma_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	dma_vgip_chn1_ctrl_reg.dma_in_sel = src;
	dma_vgip_chn1_ctrl_reg.dma_digital_mode = mode;
	dma_vgip_chn1_ctrl_reg.dma_field_sync_edge = 1;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg, dma_vgip_chn1_ctrl_reg.regValue);

	dma_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	dma_vgip_chn1_ctrl_reg.dma_in_clk_en = 1;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg, dma_vgip_chn1_ctrl_reg.regValue);


	dma_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	dma_vgip_chn1_ctrl_reg.dma_ivrun = 1;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg, dma_vgip_chn1_ctrl_reg.regValue);


	dma_vgip_chn1_act_hsta_width_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_ACT_HSTA_Width_reg);
	dma_vgip_chn1_act_vsta_length_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_ACT_VSTA_Length_reg);

	

	if(dispD_sel == I3DDMACAP_SRC_SUBTITLE || dispD_sel == I3DDMACAP_SRC_OSD ||dispD_sel == I3DDMACAP_SRC_DITHER || dispD_sel == I3DDMACAP_SRC_MEMC_MUX || dispD_sel == I3DDMACAP_SRC_YUV2RGB)
	{
		dma_vgip_chn1_act_hsta_width_reg.dma_ih_act_sta = ppoverlay_dh_den_start_end_Reg.dh_den_sta;
		dma_vgip_chn1_act_hsta_width_reg.dma_ih_act_wid = ppoverlay_dh_den_start_end_Reg.dh_den_end - ppoverlay_dh_den_start_end_Reg.dh_den_sta;
		dma_vgip_chn1_act_vsta_length_reg.dma_iv_act_sta = ppoverlay_dv_den_start_end_Reg.dv_den_sta;
		dma_vgip_chn1_act_vsta_length_reg.dma_iv_act_len= ppoverlay_dv_den_start_end_Reg.dv_den_end - ppoverlay_dv_den_start_end_Reg.dv_den_sta;
	}
	else if(dispD_sel == I3DDMACAP_SRC_UZU)
	{
		dma_vgip_chn1_act_hsta_width_reg.dma_ih_act_sta = main_active_h_start_end_Reg.mh_act_sta;
		dma_vgip_chn1_act_hsta_width_reg.dma_ih_act_wid = main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta;
		dma_vgip_chn1_act_vsta_length_reg.dma_iv_act_sta = main_active_v_start_end_Reg.mv_act_sta;
		dma_vgip_chn1_act_vsta_length_reg.dma_iv_act_len= main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta;
	}

	IoReg_Write32(DMA_VGIP_DMA_VGIP_ACT_HSTA_Width_reg, dma_vgip_chn1_act_hsta_width_reg.regValue);
	IoReg_Write32(DMA_VGIP_DMA_VGIP_ACT_VSTA_Length_reg, dma_vgip_chn1_act_vsta_length_reg.regValue);

	// IHS/IVS delay
	dma_vgip_chn1_delay_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_DELAY_reg);
	dma_vgip_chn1_delay_reg.dma_ihs_dly = 0;
	dma_vgip_chn1_delay_reg.dma_ivs_dly = 0;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_DELAY_reg, dma_vgip_chn1_delay_reg.regValue);

	dma_cts_fifo_ctl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTS_FIFO_CTL_reg);
	dma_cts_fifo_ctl_reg.dma_en_ctsfifo_vsrst_vgip = 1;
	dma_cts_fifo_ctl_reg.dma_force_ctsfifo_rstn_vgip = 1;
	dma_cts_fifo_ctl_reg.dma_force_ctsfifo_rstn_sdnr = 1;
	dma_cts_fifo_ctl_reg.dma_en_ctsfifo_vsrst_sdnr = 0;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTS_FIFO_CTL_reg, dma_cts_fifo_ctl_reg.regValue);

	rtd_printk(KERN_NOTICE, TAG_NAME,"DMA_VGIP_DMA_VGIP_CTRL_reg = %x\n", IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg));
	rtd_printk(KERN_NOTICE, TAG_NAME,"DMA_VGIP_DMA_VGIP_ACT_HSTA_Width_reg = %x\n", IoReg_Read32(DMA_VGIP_DMA_VGIP_ACT_HSTA_Width_reg));
	rtd_printk(KERN_NOTICE, TAG_NAME,"DMA_VGIP_DMA_VGIP_ACT_VSTA_Length_reg = %x\n", IoReg_Read32(DMA_VGIP_DMA_VGIP_ACT_VSTA_Length_reg));
}
	
void I3DDMA_color_colorspacergb2yuvtransfer_VrCapture(VR_DISPD_I3DDMACAP_SRC idmaDispD_in_sel)
{
#if 0
	unsigned short *table_index = 0;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_ctrl_RBUS  i3ddma_rgb2yuv_ctrl_reg;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_tab1_m11_m12_RBUS tab2_M11_M12_REG;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_tab1_m13_m21_RBUS tab2_M13_M21_REG;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_tab1_m22_m23_RBUS tab2_M22_M23_REG;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_tab1_m31_m32_RBUS tab2_M31_M32_REG;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_tab1_m33_ygain_RBUS tab2_M33_YGain_REG;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_tab1_yo_RBUS tab2_Yo_REG;
	table_index = tRGB2YUV_COEF_709_RGB_0_255;

	//main	all tab-1
	tab2_M11_M12_REG.m11 = table_index [_RGB2YUV_m11];
	tab2_M11_M12_REG.m12 = table_index [_RGB2YUV_m12];
	//printf("i3ddma_rgb2yuv_tab1_m1_reg.regValue = %x\n", i3ddma_rgb2yuv_tab1_m1_reg.regValue);
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M11_M12_reg, tab2_M11_M12_REG.regValue);

	tab2_M13_M21_REG.m13 = table_index [_RGB2YUV_m13];
	tab2_M13_M21_REG.m21 = table_index [_RGB2YUV_m21];
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M13_M21_reg, tab2_M13_M21_REG.regValue);

	tab2_M22_M23_REG.m22 = table_index [_RGB2YUV_m22];
	tab2_M22_M23_REG.m23 = table_index [_RGB2YUV_m23];
	//printf("i3ddma_rgb2yuv_tab1_m2_reg.regValue = %x\n", i3ddma_rgb2yuv_tab1_m2_reg.regValue);
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M22_M23_reg, tab2_M22_M23_REG.regValue);

	tab2_M31_M32_REG.m31 = table_index [_RGB2YUV_m31];
	tab2_M31_M32_REG.m32 = table_index [_RGB2YUV_m32];
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M31_M32_reg, tab2_M31_M32_REG.regValue);

	tab2_M33_YGain_REG.m33 = table_index [_RGB2YUV_m33];
	tab2_M33_YGain_REG.y_gain= table_index [_RGB2YUV_Y_gain];
	//printf("i3ddma_rgb2yuv_tab1_m3_reg.regValue = %x\n", i3ddma_rgb2yuv_tab1_m3_reg.regValue);
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_M33_YGain_reg, tab2_M33_YGain_REG.regValue);

	tab2_Yo_REG.yo_odd= table_index [_RGB2YUV_Yo_odd];
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_TAB1_Yo_reg, tab2_Yo_REG.regValue);

	i3ddma_rgb2yuv_ctrl_reg.regValue = IoReg_Read32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_reg);

	i3ddma_rgb2yuv_ctrl_reg.sel_rgb= table_index [_RGB2YUV_sel_RGB];
	i3ddma_rgb2yuv_ctrl_reg.set_r_in_offset= table_index [_RGB2YUV_set_Yin_offset];
	i3ddma_rgb2yuv_ctrl_reg.set_uv_out_offset= table_index [_RGB2YUV_set_UV_out_offset];
	i3ddma_rgb2yuv_ctrl_reg.sel_uv_off= table_index [_RGB2YUV_sel_UV_off];
	i3ddma_rgb2yuv_ctrl_reg.matrix_bypass= table_index [_RGB2YUV_Matrix_bypass];
	i3ddma_rgb2yuv_ctrl_reg.sel_y_gain= table_index [_RGB2YUV_Enable_Y_gain];

	if((get_VR_Pixel_Format() == VR_CAP_RGB888)||(get_VR_Pixel_Format() == VR_CAP_ARGB8888)||(get_VR_Pixel_Format() == VR_CAP_ABGR8888))
		i3ddma_rgb2yuv_ctrl_reg.en_rgb2yuv = 0;
	else
		i3ddma_rgb2yuv_ctrl_reg.en_rgb2yuv = 1;

	rtd_printk(KERN_NOTICE, TAG_NAME,"[VR] en_rgb2yuv=%d\n", i3ddma_rgb2yuv_ctrl_reg.en_rgb2yuv);

	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_reg, i3ddma_rgb2yuv_ctrl_reg.regValue);
#endif
}

/*============================================================================*/
/**
 * CScalerSetScaleDown
 * This function is used to set scaling-down registers, including main and sub display.
 *
 * @param <info> { display-info struecture }
 * @return { none }
 * @note
 * It can be linear or non-linear either, based on the non-linear flag condition:
 */
void I3DDMA_ultrazoom_set_scale_down_VrCapture(SIZE* in_Size, SIZE* out_Size, unsigned char panorama)
{
#if 0
    unsigned char SDRatio;
    unsigned char SDFilter=0;
    unsigned int tmp_data;
    short *coef_pt;
    unsigned char i;
    unsigned int nFactor;
    unsigned char Hini, Vini;

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    h3ddma_hsd_i3ddma_vsd_ctrl0_RBUS			       i3ddma_vsd_ctrl0_reg;
    h3ddma_hsd_i3ddma_hsd_ctrl0_RBUS				i3ddma_hsd_ctrl0_reg;
    h3ddma_hsd_i3ddma_hsd_scale_hor_factor_RBUS	i3ddma_hsd_scale_hor_factor_reg;
    h3ddma_hsd_i3ddma_vsd_scale_ver_factor_RBUS   	i3ddma_vsd_Scale_Ver_Factor_reg;
    h3ddma_hsd_i3ddma_hsd_hor_segment_RBUS		i3ddma_hsd_hor_segment_reg;
    h3ddma_hsd_i3ddma_hsd_hor_delta1_RBUS			i3ddma_hsd_hor_delta1_reg;
    h3ddma_hsd_i3ddma_hsd_initial_value_RBUS		i3ddma_hsd_initial_value_reg;
    h3ddma_hsd_i3ddma_vsd_initial_value_RBUS		i3ddma_vsd_initial_value_reg;

    i3ddma_vsd_ctrl0_reg.regValue		= IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg);
    i3ddma_hsd_ctrl0_reg.regValue		= IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg);
    i3ddma_hsd_scale_hor_factor_reg.regValue	= IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Scale_Hor_Factor_reg);
    i3ddma_vsd_Scale_Ver_Factor_reg.regValue = IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Scale_Ver_Factor_reg);
    i3ddma_hsd_hor_segment_reg.regValue = IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Hor_Segment_reg);
    i3ddma_hsd_hor_delta1_reg.regValue	= IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Hor_Delta1_reg);
    i3ddma_hsd_initial_value_reg.regValue	= IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Initial_Value_reg);
    i3ddma_vsd_initial_value_reg.regValue = IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Initial_Value_reg);


    //o============ H scale-down=============o
    if (in_Size->nWidth > out_Size->nWidth) {
        // o-------calculate scaledown ratio to select one of different bandwith filters.--------o
        if ( out_Size->nWidth == 0 ) {
            rtd_printk(KERN_NOTICE, TAG_NAME,"output width = 0 !!!\n");
            SDRatio = 0;
        } else {
            SDRatio = (in_Size->nWidth*TMPMUL) / out_Size->nWidth;
        }

        //UltraZoom_Printf("CSW SDRatio number=%d\n",SDRatio);

        if(SDRatio <= ((TMPMUL*3)/2))	//<1.5 sharp, wider bw
            SDFilter = 2;
        else if(SDRatio <= (TMPMUL*2) && SDRatio > ((TMPMUL*3)/2) )	// Mid
            SDFilter = 1;
        else		// blurest, narrow bw
            SDFilter = 0;

        //o---------------- fill coefficients into access port--------------------o
        coef_pt = tScaleDown_COEF_TAB[SDFilter];

        i3ddma_hsd_ctrl0_reg.h_y_table_sel = 0;	// TAB1
        i3ddma_hsd_ctrl0_reg.h_c_table_sel = 0;	// TAB1

        for (i=0; i<16; i++)
        {
            tmp_data = ((unsigned int)(*coef_pt++)<<16);
            tmp_data += (unsigned int)(*coef_pt++);
            IoReg_Write32(H3DDMA_HSD_I3DDMA_UZD_FIR_Coef_Tab1_C0_reg+ i*4, tmp_data);
        }
    }

	//o============ V scale-down=============o
	if (in_Size->nLength > out_Size->nLength) {
		// o-------calculate scaledown ratio to select one of different bandwith filters.--------o

		 //jeffrey 961231
		if ( out_Size->nLength == 0 ) {
			SDRatio = 0;
		} else {
			SDRatio = (in_Size->nLength*TMPMUL) / out_Size->nLength;
		}

		//UltraZoom_Printf("CSW SDRatio number=%d\n",SDRatio);

		if(SDRatio <= ((TMPMUL*3)/2))	//<1.5 sharp, wider bw
			SDFilter = 2;
		else if(SDRatio <= (TMPMUL*2) && SDRatio > ((TMPMUL*3)/2) )	// Mid
			SDFilter = 1;
		else		// blurest, narrow bw
			SDFilter = 0;

		//o---------------- fill coefficients into access port--------------------o
		coef_pt = tScaleDown_COEF_TAB[SDFilter];

		i3ddma_vsd_ctrl0_reg.v_y_table_sel = 1;	// TAB2
		i3ddma_vsd_ctrl0_reg.v_c_table_sel = 1;	// TAB2

		for (i=0; i<16; i++)
		{
			tmp_data = ((unsigned int)(*coef_pt++)<<16);
			tmp_data += (unsigned int)(*coef_pt++);
			IoReg_Write32(H3DDMA_HSD_I3DDMA_UZD_FIR_Coef_Tab2_C0_reg+ i*4, tmp_data);
		}

	}


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	if (in_Size->nWidth > out_Size->nWidth) {    // H scale-down
		Hini = 0xff;//0x78;
		i3ddma_hsd_initial_value_reg.hor_ini = Hini;
		{
			//frank@0108 add for code exception
			if ( out_Size->nWidth == 0 ) {
				rtd_printk(KERN_NOTICE, TAG_NAME,"output width = 0 !!!\n");
				nFactor = 0;
			} else if(in_Size->nWidth>4095){
				nFactor = (unsigned int)((((in_Size->nWidth-1)<<19) / (out_Size->nWidth-1))<<1);
			} else if(in_Size->nWidth>2047){
				nFactor = (unsigned int)(((in_Size->nWidth-1)<<20) / (out_Size->nWidth-1));
			} else {
				nFactor = (unsigned int)((in_Size->nWidth<<21)) / (out_Size->nWidth);
				nFactor = SHR(nFactor + 1, 1); //rounding
			}
		}

		i3ddma_hsd_scale_hor_factor_reg.hor_fac = nFactor;
	}else {
		i3ddma_hsd_scale_hor_factor_reg.hor_fac = 0x100000;
	}
	i3ddma_hsd_hor_segment_reg.nl_seg2 = out_Size->nWidth;

	if (in_Size->nLength > out_Size->nLength) {    // V scale-down
//			ich2_uzd_Ctrl0_REG.buffer_mode = 0x02;
		Vini = 0xff;//0x78;
		i3ddma_vsd_initial_value_reg.ver_ini = Vini;
		//nFactor = (unsigned int)((ptInSize->nLength << 20) - (Vini<<12)) / (ptOutSize->nLength - 1);
		//frank@0108 add for code exception
		if ( out_Size->nLength == 0 ) {
			rtd_printk(KERN_NOTICE, TAG_NAME,"output length = 0 !!!\n");
			nFactor = 0;
		} else {
			//nFactor = (unsigned int)((in_Size->nLength << 21)) / (out_Size->nLength);
			//modify the calculation for V-scale down @Crixus 20160804
			nFactor = (unsigned int)((in_Size->nLength * 1024 * 1024)) / (out_Size->nLength);
		}
		//nFactor = SHR(nFactor+1, 1); //rounding
		i3ddma_vsd_Scale_Ver_Factor_reg.ver_fac = nFactor;
	}else{
//			ich2_uzd_Ctrl0_REG.buffer_mode = 0;
		i3ddma_vsd_Scale_Ver_Factor_reg.ver_fac = 0x100000;
	}

//	ich2_uzd_Ctrl0_REG.output_fmt = 1;
//	CLR_422_Fr_SD();

	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg, i3ddma_vsd_ctrl0_reg.regValue);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg, i3ddma_hsd_ctrl0_reg.regValue);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Scale_Hor_Factor_reg, i3ddma_hsd_scale_hor_factor_reg.regValue);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Scale_Ver_Factor_reg, i3ddma_vsd_Scale_Ver_Factor_reg.regValue);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Hor_Segment_reg, i3ddma_hsd_hor_segment_reg.regValue);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Hor_Delta1_reg, i3ddma_hsd_hor_delta1_reg.regValue);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Initial_Value_reg, i3ddma_vsd_initial_value_reg.regValue);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Initial_Value_reg, i3ddma_hsd_initial_value_reg.regValue);

	return;
#endif
}

void I3DDMA_ultrazoom_config_scaling_down_VrCapture(SIZE* in_Size, SIZE* out_Size, unsigned char panorama)
{
	// Scale down setup for Channel1
	h3ddma_hsd_i3ddma_hsd_ctrl0_RBUS i3ddma_hsd_ctrl0_reg;
	h3ddma_hsd_i3ddma_vsd_ctrl0_RBUS i3ddma_vsd_ctrl0_reg;


	i3ddma_hsd_ctrl0_reg.regValue = IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg);
	i3ddma_hsd_ctrl0_reg.h_zoom_en = (in_Size->nWidth > out_Size->nWidth);
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg, i3ddma_hsd_ctrl0_reg.regValue);

	i3ddma_vsd_ctrl0_reg.regValue = IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg);
	i3ddma_vsd_ctrl0_reg.v_zoom_en = (in_Size->nLength > out_Size->nLength);
	if(i3ddma_vsd_ctrl0_reg.v_zoom_en)
		i3ddma_vsd_ctrl0_reg.buffer_mode = 2;//do V-scale down have to use v-scale down buffer mode.
	else
		i3ddma_vsd_ctrl0_reg.buffer_mode = 0;
	if((get_VR_Pixel_Format() == VR_CAP_RGB888)||(get_VR_Pixel_Format() == VR_CAP_ARGB8888)||(get_VR_Pixel_Format() == VR_CAP_ABGR8888))
		i3ddma_vsd_ctrl0_reg.sort_fmt = 1;
	else
		i3ddma_vsd_ctrl0_reg.sort_fmt = 0;
	i3ddma_vsd_ctrl0_reg.video_comp_en = 0;
	i3ddma_vsd_ctrl0_reg.truncationctrl = 1;/*(Scaler_DispGetStatus(SLR_SUB_DISPLAY, SLR_DISP_10BIT)? 0: 1)*/
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg, i3ddma_vsd_ctrl0_reg.regValue);

	I3DDMA_ultrazoom_set_scale_down_VrCapture(in_Size, out_Size, panorama);

	return;
}
unsigned short Get_VFOD_FrameRateVr(void)
{
		unsigned short framerate = 0;

		framerate = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DTG_MASTER_V_FREQ);

		if ((framerate != 50)&&(framerate != 60)&&(framerate != 48)) {
			
			rtd_printk(KERN_NOTICE, TAG_NAME, "[warning] get SLR_INPUT_DTG_MASTER_V_FREQ not right!!!\n");
			framerate = 60;
		}

		if (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL) {
			if(framerate == 48){/*qiangzhou: not happen case, mention here*/
				framerate = 120;
			} else {	
				framerate = framerate*2;
			}
		}
		return framerate;

}

void dc2h_wait_porch_vr(void)
{
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
}
void start_stop_dc2h_vr(unsigned char state)
{
	down(&VR_Semaphore);
	curCapInfo.enable = state; 
	drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
	up(&VR_Semaphore);
}

unsigned char get_dc2h_capture_state_vr(void)
{	
	if ((get_VR_Pixel_Format() == VR_CAP_NV12) || (get_VR_Pixel_Format() == VR_CAP_NV16))
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

unsigned int drvif_vr_memory_get_data_align(unsigned int Value, unsigned int unit)
{
	unsigned int AlignVal;

	AlignVal = Value;
	unit -= 1;
	if (Value & unit)
		AlignVal = (Value & (~unit)) + unit + 1;
	return AlignVal;
}

void drvif_vr_set_SwBufferInfo(void)
{
	SwVrBufferNumber = get_vr_VrBufferNum();
	SwVrBuffer0Addr = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;;
	SwVrBuffer1Addr = (UINT32)CaptureCtrl_VR.cap_buffer[1].phyaddr;;
	SwVrBuffer2Addr = (UINT32)CaptureCtrl_VR.cap_buffer[2].phyaddr;;
	SwVrBuffer3Addr = (UINT32)CaptureCtrl_VR.cap_buffer[3].phyaddr;;
	SwVrBuffer4Addr = (UINT32)CaptureCtrl_VR.cap_buffer[4].phyaddr;;
	SwVrCapWidth = curCapInfo.capWid;
	SwVrCapLength = curCapInfo.capLen;
}

void drvif_i3ddmavi_vrconfig(unsigned int nWidth, unsigned int nLength, unsigned int data_format)
{
#if 0
	unsigned int LineSize;

	h3ddma_vi_idma_v1_output_fmt_RBUS dc2h_v1_output_fmt_reg;
	h3ddma_vi_idma_cwvh1_RBUS dc2h_cwvh1_reg;
	h3ddma_vi_idma_cwvh1_2_RBUS dc2h_cwvh1_2_reg;
	h3ddma_vi_idma_dmactl_RBUS vi_dmactl_reg;
	h3ddma_vi_idma_vi_addcmd_transform_RBUS dc2h_vi_dc2h_vi_addcmd_transform_reg;

	h3ddma_lr_separate_ctrl1_RBUS lr_separate_ctrl1_reg;
	h3ddma_tg_v1_end_RBUS tg_v1_end_reg;
	h3ddma_i3ddma_enable_RBUS i3ddma_enable_reg;

	dma_vgip_dma_vgip_ctrl_RBUS dma_vgip_chn1_ctrl_reg;
	h3ddma_i3ddma_byte_channel_swap_RBUS i3ddma_byte_channel_swap_reg;
	h3ddma_vi_idma_vi_ads_start_y_RBUS h3ddma_vi_idma_vi_ads_start_y_Reg;
	h3ddma_vi_idma_vi_ads_start_c_RBUS h3ddma_vi_idma_vi_ads_start_c_Reg;

	drvif_vr_set_SwBufferInfo();

	h3ddma_vi_idma_vi_ads_start_y_Reg.regValue = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
	IoReg_Write32(H3DDMA_VI_idma_vi_ads_start_y_reg, h3ddma_vi_idma_vi_ads_start_y_Reg.regValue);
	h3ddma_vi_idma_vi_ads_start_c_Reg.regValue = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr + nWidth*nLength;
	IoReg_Write32(H3DDMA_VI_idma_vi_ads_start_c_reg, h3ddma_vi_idma_vi_ads_start_c_Reg.regValue);
	
	i3ddma_byte_channel_swap_reg.regValue = IoReg_Read32(H3DDMA_I3DDMA_byte_channel_swap_reg);
	i3ddma_byte_channel_swap_reg.dma_1byte_swap = 0;
	i3ddma_byte_channel_swap_reg.dma_2byte_swap = 0;
	i3ddma_byte_channel_swap_reg.dma_4byte_swap = 0;
	i3ddma_byte_channel_swap_reg.dma_8byte_swap = 0;
	i3ddma_byte_channel_swap_reg.dma_channel_swap = 0;
	IoReg_Write32(H3DDMA_I3DDMA_byte_channel_swap_reg, i3ddma_byte_channel_swap_reg.regValue);
	
	// IDMA LR separate control
	lr_separate_ctrl1_reg.regValue = IoReg_Read32(H3DDMA_LR_Separate_CTRL1_reg);
	lr_separate_ctrl1_reg.hdmi_3d_sel = 0;
	lr_separate_ctrl1_reg.vs_inv = 0;
	lr_separate_ctrl1_reg.hs_inv = 0;
	lr_separate_ctrl1_reg.progressive = 1;
	lr_separate_ctrl1_reg.hdmi_3d_structure = 0xa; // frame 2D
	IoReg_Write32(H3DDMA_LR_Separate_CTRL1_reg, lr_separate_ctrl1_reg.regValue);

	tg_v1_end_reg.regValue = IoReg_Read32(H3DDMA_TG_v1_end_reg);
	tg_v1_end_reg.pullup_en = 0;
	tg_v1_end_reg.tg_hend1 = 2;
	tg_v1_end_reg.tg_vend1 = 2;
	IoReg_Write32(H3DDMA_TG_v1_end_reg, tg_v1_end_reg.regValue );

	// IDMA timeing gen enable
	i3ddma_enable_reg.regValue = IoReg_Read32(H3DDMA_I3DDMA_enable_reg);
	i3ddma_enable_reg.frc_en = 0;
	i3ddma_enable_reg.lr_separate_en = 1;
	i3ddma_enable_reg.tg_en = 1;
	i3ddma_enable_reg.cap_en = 1; // disable IDMA capture before VI capture enable
	IoReg_Write32(H3DDMA_I3DDMA_enable_reg, i3ddma_enable_reg.regValue );

	dc2h_v1_output_fmt_reg.regValue = rtd_inl(H3DDMA_VI_IDMA_V1_OUTPUT_FMT_reg);
	dc2h_v1_output_fmt_reg.data_format = data_format;/*0:420	1:422*/
	dc2h_v1_output_fmt_reg.swap_1byte = 0;
	dc2h_v1_output_fmt_reg.swap_2byte = 0;
	dc2h_v1_output_fmt_reg.swap_4byte = 0;
	dc2h_v1_output_fmt_reg.swap_8byte = 0;
	rtd_outl(H3DDMA_VI_IDMA_V1_OUTPUT_FMT_reg, dc2h_v1_output_fmt_reg.regValue);

	dc2h_cwvh1_reg.regValue = rtd_inl(H3DDMA_VI_IDMA_CWVH1_reg);
	dc2h_cwvh1_reg.hsize = nWidth;
	dc2h_cwvh1_reg.vsize = nLength;
	rtd_outl(H3DDMA_VI_IDMA_CWVH1_reg, dc2h_cwvh1_reg.regValue);

   	dc2h_cwvh1_2_reg.regValue = rtd_inl(H3DDMA_VI_IDMA_CWVH1_2_reg);
	dc2h_cwvh1_2_reg.vsize_c = nLength >> (data_format == 1? 0: 1);
	rtd_outl(H3DDMA_VI_IDMA_CWVH1_2_reg, dc2h_cwvh1_2_reg.regValue);
	LineSize = drvif_vr_memory_get_data_align(nWidth*8, 64);
	LineSize = (unsigned int)SHR(LineSize, 6);	// (pixels of per line * 8 / 32), unit: 32bits

	dc2h_vi_dc2h_vi_addcmd_transform_reg.regValue = rtd_inl(H3DDMA_VI_idma_vi_addcmd_transform_reg);
	dc2h_vi_dc2h_vi_addcmd_transform_reg.line_step = LineSize;
	dc2h_vi_dc2h_vi_addcmd_transform_reg.vi_addcmd_trans_en = 1;
	rtd_outl(H3DDMA_VI_idma_vi_addcmd_transform_reg, dc2h_vi_dc2h_vi_addcmd_transform_reg.regValue);

	dma_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	if (dma_vgip_chn1_ctrl_reg.dma_vact_end_ie == 1)
		VR_vactend_ie = TRUE;
	else
		VR_vactend_ie = FALSE;
	dma_vgip_chn1_ctrl_reg.dma_vact_end_ie= 1;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg, dma_vgip_chn1_ctrl_reg.regValue);

	vi_dmactl_reg.regValue = rtd_inl(H3DDMA_VI_IDMA_DMACTL_reg);
	vi_dmactl_reg.dmaen1 = 1;
	vi_dmactl_reg.seq_blk_sel =1; //0: YV16 or RGB888 1: NV12 or NV16
	rtd_outl(H3DDMA_VI_IDMA_DMACTL_reg, vi_dmactl_reg.regValue);
#endif
}



void drvif_I3DDMA_Set_SeqCapture_VrCapture(SIZE outsize)
{
#if 0
	unsigned int num, rem;
	h3ddma_lr_separate_ctrl1_RBUS lr_separate_ctrl1_reg;
	h3ddma_cap_ctl1_RBUS cap_ctl1_reg;
	h3ddma_cap_ctl0_RBUS cap_ctl0_reg;

	h3ddma_cap_l1_start_RBUS cap_l1_start_reg;
	h3ddma_cap_l2_start_RBUS cap_l2_start_reg;
	h3ddma_cap_l3_start_RBUS cap_l3_start_reg;
	
	h3ddma_cap_r1_start_RBUS cap_r1_start_reg;
	h3ddma_cap_r2_start_RBUS cap_r2_start_reg;
	
	h3ddma_tg_v1_end_RBUS tg_v1_end_reg;
	h3ddma_i3ddma_byte_channel_swap_RBUS i3ddma_byte_channel_swap_reg;
	h3ddma_i3ddma_enable_RBUS i3ddma_enable_reg;


	// IDMA LR separate control
	lr_separate_ctrl1_reg.regValue = IoReg_Read32(H3DDMA_LR_Separate_CTRL1_reg);
	lr_separate_ctrl1_reg.hdmi_3d_sel = 0;
	lr_separate_ctrl1_reg.vs_inv = 0;
	lr_separate_ctrl1_reg.hs_inv = 0;
	lr_separate_ctrl1_reg.progressive = 1;
	lr_separate_ctrl1_reg.hdmi_3d_structure = 0xa; // frame 2D
	IoReg_Write32(H3DDMA_LR_Separate_CTRL1_reg, lr_separate_ctrl1_reg.regValue);

	// IDMA capture FIFO setting
	if(get_VR_Pixel_Format() == VR_CAP_RGB888)
		outsize.nWidth = (outsize.nWidth * 8 * 3) /128;
	else if((get_VR_Pixel_Format() == VR_CAP_ARGB8888)||(get_VR_Pixel_Format() == VR_CAP_ABGR8888))
		outsize.nWidth = (outsize.nWidth * 8 * 4) /128;
	num = (unsigned int)(outsize.nWidth / CAP_LEN);
	rem = (unsigned int)(outsize.nWidth % CAP_LEN);

	if (rem == 0) { // remainder is not allowed to be zero
		rem = CAP_LEN;
		num -= 1;
	}


	cap_ctl0_reg.regValue = IoReg_Read32(H3DDMA_Cap_CTL0_reg);
	cap_ctl0_reg.triple_buf_en = 0;
	cap_ctl0_reg.quad_buf_en = 0;
	cap_ctl0_reg.freeze_en = 0;
	cap_ctl0_reg.bit_sel = 0; 			// 8bit 
	cap_ctl0_reg.pixel_encoding = 0; 	// 444 format 
	cap_ctl0_reg.cap_write_len = CAP_LEN;
	cap_ctl0_reg.cap_write_rem = rem;
	cap_ctl0_reg.auto_block_sel_en = 1;
	IoReg_Write32(H3DDMA_Cap_CTL0_reg, cap_ctl0_reg.regValue);

	cap_ctl1_reg.regValue = IoReg_Read32(H3DDMA_Cap_CTL1_reg);
	cap_ctl1_reg.cap_water_lv = CAP_LEN;
	cap_ctl1_reg.cap_write_num = num;
	IoReg_Write32(H3DDMA_Cap_CTL1_reg, cap_ctl1_reg.regValue);

	i3ddma_byte_channel_swap_reg.regValue = IoReg_Read32(H3DDMA_I3DDMA_byte_channel_swap_reg);
	i3ddma_byte_channel_swap_reg.dma_1byte_swap = 1;
	i3ddma_byte_channel_swap_reg.dma_2byte_swap = 1;
	i3ddma_byte_channel_swap_reg.dma_4byte_swap = 1;
	i3ddma_byte_channel_swap_reg.dma_8byte_swap = 1;
	i3ddma_byte_channel_swap_reg.dma_channel_swap = 1;
	IoReg_Write32(H3DDMA_I3DDMA_byte_channel_swap_reg, i3ddma_byte_channel_swap_reg.regValue);

	cap_l1_start_reg.cap_l1_start = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr >> 3;
	cap_r1_start_reg.cap_r1_start = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr >> 3;
	cap_l2_start_reg.cap_l2_start = (UINT32)CaptureCtrl_VR.cap_buffer[1].phyaddr >> 3;
	cap_r2_start_reg.cap_r2_start = (UINT32)CaptureCtrl_VR.cap_buffer[1].phyaddr >> 3;
	cap_l3_start_reg.cap_l3_start = (UINT32)CaptureCtrl_VR.cap_buffer[2].phyaddr >> 3;
	//cap_r3_start_reg.cap_r3_start = (UINT32)CaptureCtrl_VR.cap_buffer[2].phyaddr >> 3;
	//i3ddma protection
	IoReg_Write32(H3DDMA_Cap_BoundaryAddr2_reg, CaptureCtrl_VR.cap_buffer[0].phyaddr);//low limit

	IoReg_Write32(H3DDMA_Cap_BoundaryAddr1_reg, CaptureCtrl_VR.cap_buffer[2].phyaddr + CaptureCtrl_VR.cap_buffer[2].size);//high limit

	IoReg_Write32(H3DDMA_Cap_L1_Start_reg,  cap_l1_start_reg.regValue);  // block0, DDR buffer L1 start address
	IoReg_Write32(H3DDMA_Cap_R1_Start_reg,  cap_r1_start_reg.regValue);  // block0, DDR buffer R1 start address
	IoReg_Write32(H3DDMA_Cap_L2_Start_reg,  cap_l2_start_reg.regValue);  // block1, DDR buffer L2 start address
	IoReg_Write32(H3DDMA_Cap_R2_Start_reg,  cap_r2_start_reg.regValue);  // block1, DDR buffer R2 start address
	IoReg_Write32(H3DDMA_Cap_L3_Start_reg,  cap_l3_start_reg.regValue);  // block2, DDR buffer L3 start address
	//IoReg_Write32(H3DDMA_Cap_R3_Start_reg,  cap_r3_start_reg.regValue);  // block2, DDR buffer R3 start address

	tg_v1_end_reg.regValue = IoReg_Read32(H3DDMA_TG_v1_end_reg);
	tg_v1_end_reg.pullup_en = 0;
	tg_v1_end_reg.tg_hend1 = 2;
	tg_v1_end_reg.tg_vend1 = 2;
	IoReg_Write32(H3DDMA_TG_v1_end_reg, tg_v1_end_reg.regValue );

	// IDMA timeing gen enable
	i3ddma_enable_reg.regValue = IoReg_Read32(H3DDMA_I3DDMA_enable_reg);
	i3ddma_enable_reg.frc_en = 0;
	i3ddma_enable_reg.lr_separate_en = 1;
	i3ddma_enable_reg.tg_en = 1;
	i3ddma_enable_reg.cap_en = 1; // disable IDMA capture before VI capture enable
	IoReg_Write32(H3DDMA_I3DDMA_enable_reg, i3ddma_enable_reg.regValue );

	rtd_printk(KERN_NOTICE, TAG_NAME,"H3DDMA_TG_v1_end_reg = %x\n", IoReg_Read32(H3DDMA_TG_v1_end_reg));
	rtd_printk(KERN_NOTICE, TAG_NAME,"H3DDMA_I3DDMA_enable_reg = %x\n", IoReg_Read32(H3DDMA_I3DDMA_enable_reg));
	return;
#endif
}

void drvif_I3DDMA_Set_SeqCapture_VrCaptureDisable(void)
{
#if 0
	h3ddma_i3ddma_enable_RBUS i3ddma_enable_reg;
	h3ddma_rgb2yuv_dither_4xxto4xx_hdmi_rgb2yuv_ctrl_RBUS  i3ddma_rgb2yuv_ctrl_reg;
	h3ddma_hsd_i3ddma_hsd_ctrl0_RBUS i3ddma_hsd_ctrl0_reg;
	h3ddma_hsd_i3ddma_vsd_ctrl0_RBUS i3ddma_vsd_ctrl0_reg;
	dma_vgip_dma_vgip_ctrl_RBUS dma_vgip_chn1_ctrl_reg;

	i3ddma_enable_reg.regValue = IoReg_Read32(H3DDMA_I3DDMA_enable_reg);
	i3ddma_enable_reg.cap_en = 0; // disable IDMA capture before VI capture enable
	IoReg_Write32(H3DDMA_I3DDMA_enable_reg, i3ddma_enable_reg.regValue );

	i3ddma_rgb2yuv_ctrl_reg.regValue = IoReg_Read32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_reg);
	i3ddma_rgb2yuv_ctrl_reg.en_rgb2yuv = 0;
	IoReg_Write32(H3DDMA_RGB2YUV_DITHER_4XXTO4XX_HDMI_RGB2YUV_CTRL_reg, i3ddma_rgb2yuv_ctrl_reg.regValue);

	i3ddma_hsd_ctrl0_reg.regValue = IoReg_Read32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg);
	i3ddma_hsd_ctrl0_reg.h_zoom_en = 0;
	IoReg_Write32(H3DDMA_HSD_I3DDMA_HSD_Ctrl0_reg, i3ddma_hsd_ctrl0_reg.regValue);

	i3ddma_vsd_ctrl0_reg.regValue = IoReg_Read32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg);
	i3ddma_vsd_ctrl0_reg.v_zoom_en = 0;
	IoReg_Write32(H3DDMA_HSD_I3DDMA_VSD_Ctrl0_reg, i3ddma_vsd_ctrl0_reg.regValue);

	dma_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	dma_vgip_chn1_ctrl_reg.dma_ivrun = 0;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg, dma_vgip_chn1_ctrl_reg.regValue);	

	dma_vgip_chn1_ctrl_reg.regValue = IoReg_Read32(DMA_VGIP_DMA_VGIP_CTRL_reg);
	dma_vgip_chn1_ctrl_reg.dma_in_clk_en = 0;
	IoReg_Write32(DMA_VGIP_DMA_VGIP_CTRL_reg, dma_vgip_chn1_ctrl_reg.regValue);
#endif
}

void drvif_I3DDMA_dispD_VrCaptureConfig(VR_CUR_CAPTURE_INFO capInfo)
{
	if(capInfo.enable == TRUE) {
		VR_DISPD_I3DDMACAP_SRC dispD_sel;
		SIZE inSize,outSize;
		ppoverlay_dh_den_start_end_RBUS ppoverlay_dh_den_start_end_Reg;
		ppoverlay_dv_den_start_end_RBUS ppoverlay_dv_den_start_end_Reg;
		
		ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_Reg;
		ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_Reg;
		unsigned long flags;//for spin lock_irqsave 
		ppoverlay_display_timing_ctrl2_RBUS display_timing_ctrl2_reg;
		unsigned int timeoutselsetting;
		/*not support uzu mux for rgb888,no yuv2rgb ip*/
		if(capInfo.capSrc == VR_CAP_SRC_VIDEO_NOPQ)
			dispD_sel = I3DDMACAP_SRC_SUBTITLE;
		else if(capInfo.capSrc == VR_CAP_SRC_VIDEO_PQ)
			dispD_sel = I3DDMACAP_SRC_MEMC_MUX;
			else if(capInfo.capSrc == VR_CAP_SRC_VIDEO_OSD)
			dispD_sel = I3DDMACAP_SRC_OSD;
		rtd_printk(KERN_NOTICE, TAG_NAME, "drvif_I3DDMA_dispD_VrCaptureConfig dispD_sel:%d;%s=%d \n",dispD_sel, __FUNCTION__, __LINE__);	
		ppoverlay_dh_den_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_DH_DEN_Start_End_reg);
		ppoverlay_dv_den_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_DV_DEN_Start_End_reg);
		main_active_h_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_H_Start_End_reg);
		main_active_v_start_end_Reg.regValue = IoReg_Read32(PPOVERLAY_MAIN_Active_V_Start_End_reg);
			
		if(dispD_sel == I3DDMACAP_SRC_SUBTITLE || dispD_sel == I3DDMACAP_SRC_OSD ||dispD_sel == I3DDMACAP_SRC_DITHER || dispD_sel == I3DDMACAP_SRC_MEMC_MUX || dispD_sel == I3DDMACAP_SRC_YUV2RGB)
		{
			inSize.nWidth = ppoverlay_dh_den_start_end_Reg.dh_den_end - ppoverlay_dh_den_start_end_Reg.dh_den_sta;
			inSize.nLength = ppoverlay_dv_den_start_end_Reg.dv_den_end - ppoverlay_dv_den_start_end_Reg.dv_den_sta;
		} else if(dispD_sel == I3DDMACAP_SRC_UZU) {
			inSize.nWidth = main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta;
			inSize.nLength = main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta;
		}
		outSize.nWidth = capInfo.capWid;
		outSize.nLength = capInfo.capLen;
		rtd_printk(KERN_NOTICE, TAG_NAME, "drvif_I3DDMA_dispD_VrCaptureConfig outSize.nWidth:%d; outSize.nLength = %d;inSize.nWidth=%d;inSize.nLength=%d \n",outSize.nWidth,outSize.nLength,inSize.nWidth,inSize.nLength);

		display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
		timeoutselsetting = 0x3ffff;
		while(display_timing_ctrl2_reg.d2i3ddma_src_sel != dispD_sel) {
			down(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
			spin_lock_irqsave(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//lock double buffer spinlock		
			if(PPOVERLAY_Double_Buffer_CTRL_get_dreg_dbuf_en(IoReg_Read32(PPOVERLAY_Double_Buffer_CTRL_reg)))
			{
				IoReg_ClearBits(PPOVERLAY_Double_Buffer_CTRL_reg, PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_en_mask);
				// IDMA VGIP DispD input source select
				display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
				display_timing_ctrl2_reg.d2i3ddma_src_sel = dispD_sel;
				IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_reg.regValue);
				IoReg_SetBits(PPOVERLAY_Double_Buffer_CTRL_reg, PPOVERLAY_Double_Buffer_CTRL_dreg_dbuf_en_mask);
				rtd_printk(KERN_NOTICE, TAG_NAME,"double buffer on:PPOVERLAY_Display_Timing_CTRL2_reg = %x\n", IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg));
				
			}
			else
			{
				// IDMA VGIP DispD input source select
				display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
				display_timing_ctrl2_reg.d2i3ddma_src_sel = dispD_sel;
				IoReg_Write32(PPOVERLAY_Display_Timing_CTRL2_reg, display_timing_ctrl2_reg.regValue);
				rtd_printk(KERN_NOTICE, TAG_NAME,"double buffer close:PPOVERLAY_Display_Timing_CTRL2_reg = %x\n", IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg));			
			}
			spin_unlock_irqrestore(get_DBreg_spinlock(SLR_MAIN_DISPLAY), flags);//unlock double buffer spinlock
			up(get_forcebg_semaphore());/*semaphore must added for not effect mute function when setting b8028300*/
			display_timing_ctrl2_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg);
			timeoutselsetting--;
			if(timeoutselsetting == 0){
				rtd_printk(KERN_NOTICE, TAG_NAME,"set i3ddma sel timeout error!!!\n");
				break;
			}
		}

		rtd_printk(KERN_NOTICE, TAG_NAME,"PPOVERLAY_Display_Timing_CTRL2_reg = %x\n", IoReg_Read32(PPOVERLAY_Display_Timing_CTRL2_reg));

		I3DDMA_Set_Vgip_VrCapture(VGIP_SRC_DISPD, dispD_sel, VGIP_MODE_ANALOG);

		I3DDMA_color_colorspacergb2yuvtransfer_VrCapture(dispD_sel);

		/*IDMA scaling down setup*/
		I3DDMA_ultrazoom_config_scaling_down_VrCapture(&inSize, &outSize, 1);


		if(get_VR_Pixel_Format() == VR_CAP_NV12)
			drvif_i3ddmavi_vrconfig(outSize.nWidth, outSize.nLength, 0);
		else if (get_VR_Pixel_Format() == VR_CAP_NV16)
			drvif_i3ddmavi_vrconfig(outSize.nWidth, outSize.nLength, 1);
		else 
			drvif_I3DDMA_Set_SeqCapture_VrCapture(outSize);

		msleep(42);
	} else {
		drvif_I3DDMA_Set_SeqCapture_VrCaptureDisable();
	}
}

unsigned char is_4K2K_capture_VR(void)
{
	if((vr_cap_frame_max_width == VR_CAP_FRAME_WIDTH_2K1k) && (vr_cap_frame_max_height == VR_CAP_FRAME_HEIGHT_2K1k))
		return FALSE;
	else
		return TRUE;
}

unsigned char get_video_do_overscan_state_vr(void)
{
	/*if(Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_STA_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_STA) ||
	Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_STA_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_STA) ||
	Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_WID_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRH_ACT_WID) ||
	Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_STA_PRE) != Scaler_DispGetInputInfo(SLR_INPUT_SDNRV_ACT_LEN) )*/
#if 0
	if((ap_main_inregion_parm.w != ap_main_originalInput_parm.w) || (ap_main_inregion_parm.h != ap_main_originalInput_parm.h))
	{
		return TRUE;
	}
	else
		return FALSE;
#else
	return FALSE;
#endif
}

void drvif_color_colorspaceyuv2rgbtransfer_vr(DC2H_IN_SEL dc2h_in_sel)
{
	unsigned short *table_index = 0;
	
	dc2h_rgb2yuv_dc2h_rgb2yuv_ctrl_RBUS  dc2h_rgb2yuv_ctrl_reg;
	dc2h_rgb2yuv_dc2h_tab1_m11_m12_RBUS dc2h_tab1_m11_m12_reg;
	dc2h_rgb2yuv_dc2h_tab1_m13_m21_RBUS dc2h_tab1_m13_m21_reg;
	dc2h_rgb2yuv_dc2h_tab1_m22_m23_RBUS dc2h_tab1_m22_m23_reg;
	dc2h_rgb2yuv_dc2h_tab1_m31_m32_RBUS dc2h_tab1_m31_m32_reg;
	dc2h_rgb2yuv_dc2h_tab1_m33_y_gain_RBUS dc2h_tab1_m33_y_gain_reg;
	dc2h_rgb2yuv_dc2h_tab1_yo_RBUS dc2h_tab1_yo_reg;
	
	if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16))
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
	
	if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16))
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

void drvif_dc2h_input_overscan_config_vr(unsigned int x, unsigned int y, unsigned int w, unsigned int h)
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

void drvif_color_ultrazoom_set_dc2h_scale_down_vr(DC2H_HANDLER *pdc2h_hdl)
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

void drvif_color_ultrazoom_config_dc2h_scaling_down_vr(DC2H_HANDLER *pdc2h_hdl)
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
	if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16)){
		dc2h_vsd_ctrl0_reg.sort_fmt = 0;
	} else {
		dc2h_vsd_ctrl0_reg.sort_fmt = 1;
	}
	rtd_outl(DC2H_SCALEDOWN_DC2H_VSD_Ctrl0_reg, dc2h_vsd_ctrl0_reg.regValue);

	drvif_color_ultrazoom_set_dc2h_scale_down_vr(pdc2h_hdl);
}
void reset_dc2h_hw_setting_vr(void)
{
	dc2h_dma_dc2h_seq_interrupt_enable_RBUS dc2h_dma_dc2h_seq_interrupt_enable_Reg;
	dc2h_vi_dc2h_dmactl_RBUS vi_dmactl_reg;
	dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_RBUS dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg;
	dc2h_rgb2yuv_dc2h_rgb2yuv_ctrl_RBUS	dc2h_rgb2yuv_ctrl_reg;
	dc2h_scaledown_dc2h_hsd_ctrl0_RBUS dc2h_hsd_ctrl0_reg;
	dc2h_scaledown_dc2h_vsd_ctrl0_RBUS dc2h_vsd_ctrl0_reg;
	dc2h_dma_dc2h_seq_mode_ctrl1_RBUS dc2h_seq_mode_ctrl1_reg;

	
	if (get_vr_VrSwBufferMode())
	{
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg);
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.vs_rising_ie = 0;
		rtd_outl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg, dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue);
		msleep(20);
	}
	
	if ((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16))
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
	if((get_VR_Pixel_Format() == VR_CAP_ABGR8888)||(get_VR_Pixel_Format() == VR_CAP_ARGB8888))
		dc2h_seq_mode_ctrl1_reg.rgb_to_argb_en = 0;
	dc2h_seq_mode_ctrl1_reg.cap_en = 0;
	rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg, dc2h_seq_mode_ctrl1_reg.regValue);
	
}

unsigned char drvif_dc2h_swmode_inforpc_vr(unsigned int onoff,unsigned int buffernumber,unsigned int width,unsigned int length){

	DC2H_SWMODE_STRUCT_T *swmode_infoptr;
	unsigned int ulCount = 0;
	int ret;
	rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s\n",__FUNCTION__);
	swmode_infoptr = (DC2H_SWMODE_STRUCT_T *)Scaler_GetShareMemVirAddr(SCALERIOC_SET_DC2H_SWMODE_ENABLE);
	ulCount = sizeof(DC2H_SWMODE_STRUCT_T) / sizeof(unsigned int);

	swmode_infoptr->SwModeEnable = onoff;
	swmode_infoptr->buffernumber = buffernumber;
	swmode_infoptr->cap_format = (UINT32)get_VR_Pixel_Format();
	swmode_infoptr->cap_width = width;
	swmode_infoptr->cap_length = length;
	swmode_infoptr->YbufferSize = _ALIGN(vr_cap_frame_max_width*vr_cap_frame_max_height,__12KPAGE);
	swmode_infoptr->cap_buffer[0] = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
	swmode_infoptr->cap_buffer[1] = (UINT32)CaptureCtrl_VR.cap_buffer[1].phyaddr;
	swmode_infoptr->cap_buffer[2] = (UINT32)CaptureCtrl_VR.cap_buffer[2].phyaddr;
	swmode_infoptr->cap_buffer[3] = (UINT32)CaptureCtrl_VR.cap_buffer[3].phyaddr;
	swmode_infoptr->cap_buffer[4] = (UINT32)CaptureCtrl_VR.cap_buffer[4].phyaddr;

	
	pr_debug("[VR]SwModeEnable = %d\n",swmode_infoptr->SwModeEnable);
	pr_debug("[VR]buffernumber = %d\n",swmode_infoptr->buffernumber);
	pr_debug("[VR]cap_format = %d\n",swmode_infoptr->cap_format);
	pr_debug("[VR]cap_width = %d\n",swmode_infoptr->cap_width);
	pr_debug("[VR]cap_length = %d\n",swmode_infoptr->cap_length);
	pr_debug("[VR]YbufferSize = %d\n",swmode_infoptr->YbufferSize);
	pr_debug("[VR]cap_buffer[0] = 0x%x\n",swmode_infoptr->cap_buffer[0]);
	pr_debug("[VR]cap_buffer[1] = 0x%x\n",swmode_infoptr->cap_buffer[1]);
	pr_debug("[VR]cap_buffer[2] = 0x%x\n",swmode_infoptr->cap_buffer[2]);
	pr_debug("[VR]cap_buffer[3] = 0x%x\n",swmode_infoptr->cap_buffer[3]);
	pr_debug("[VR]cap_buffer[4] = 0x%x\n",swmode_infoptr->cap_buffer[4]);
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
void drvif_dc2h_seq_config_vr(DC2H_HANDLER *pdc2h_hdl)
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

	if(get_VR_Pixel_Format() == VR_CAP_ARGB8888) {
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
	if(get_vr_VrBufferNum() == 1) {
		dc2h_cap_ctl0_reg.triple_buf_en = 0;
		dc2h_cap_ctl0_reg.auto_block_sel_en = 0;
		//dc2h_cap_ctl0_reg.cap_block_fw = 0;
	} else {
		if(get_vr_VrCaptureVDC()) {
			dc2h_cap_ctl0_reg.triple_buf_en = 1;
			dc2h_cap_ctl0_reg.auto_block_sel_en = 1;
		} else {
			if (get_vr_VrSwBufferMode()) {
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
	if(get_VR_Pixel_Format() == VR_CAP_ARGB8888)
		dc2h_seq_byte_channel_swap_reg.dma_channel_swap = 0;
	else
		dc2h_seq_byte_channel_swap_reg.dma_channel_swap = 1;
	rtd_outl(DC2H_DMA_dc2h_seq_byte_channel_swap_reg, dc2h_seq_byte_channel_swap_reg.regValue);

	dc2h_seq_mode_ctrl1_reg.regValue = rtd_inl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg);
	dc2h_seq_mode_ctrl1_reg.cap_en = 1;

	if((get_VR_Pixel_Format() == VR_CAP_ABGR8888)||(get_VR_Pixel_Format() == VR_CAP_ARGB8888)){
		dc2h_seq_mode_ctrl1_reg.argb_dummy_data = 0xFF;
		dc2h_seq_mode_ctrl1_reg.rgb_to_argb_en = 1;
		dc2h_seq_mode_ctrl1_reg.argb_swap = 1;
	}
	else
		dc2h_seq_mode_ctrl1_reg.rgb_to_argb_en = 0;

	if (get_vr_VrSwBufferMode()) {
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg);
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.vs_rising_ie = 1;
	}
	dc2h_wait_porch_vr();
	rtd_outl(DC2H_DMA_dc2h_Seq_mode_CTRL1_reg, dc2h_seq_mode_ctrl1_reg.regValue);
	if (get_vr_VrSwBufferMode()) {
		rtd_outl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg, dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue);
	}
	return;
}


void drvif_vi_config_vr(unsigned int nWidth, unsigned int nLength, unsigned int data_format)
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
    dc2h_cwvh1_reg.hsize = nWidth;
    dc2h_cwvh1_reg.vsize = nLength;
    rtd_outl(DC2H_VI_DC2H_CWVH1_reg, dc2h_cwvh1_reg.regValue);

   	dc2h_cwvh1_2_reg.regValue = rtd_inl(DC2H_VI_DC2H_CWVH1_2_reg);
    dc2h_cwvh1_2_reg.vsize_c = nLength >> (data_format == 1? 0: 1);
    rtd_outl(DC2H_VI_DC2H_CWVH1_2_reg, dc2h_cwvh1_2_reg.regValue);

	  /*width96align = drvif_memory_get_data_align(nWidth, 96);
	  LineSize = drvif_memory_get_data_align(width96align*8, 64);
      LineSize = (unsigned int)SHR(LineSize, 6);      // (pixels of per line * 8 / 32), unit: 32bits */
	  
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

	if (get_vr_VrSwBufferMode()) {
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg);
		dc2h_dma_dc2h_seq_interrupt_enable_Reg.vs_rising_ie = 1;
	}		

	dc2h_wait_porch_vr();	
	
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


	if (get_vr_VrSwBufferMode()) {
		rtd_outl(DC2H_DMA_dc2h_seq_Interrupt_Enable_reg, dc2h_dma_dc2h_seq_interrupt_enable_Reg.regValue);
	}	
}
unsigned char drvif_i3ddma_NN_SE_proc_vr(void)
{
	/* VT use i3ddma NN buffer to do stretch size required by user client */
#ifdef CONFIG_ENABLE_HDMI_NN

	unsigned int SE_Addr_Cur_Y = 0;
	unsigned int SE_width = 0;    //src_w
	unsigned int SE_height = 0;   // src_h
	unsigned int SE_Addr_Cur_UV = 0;
	
	rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s\n",__FUNCTION__);	
	
	SE_width = g_ulNNOutWidthVr;
	SE_height = g_ulNNOutLengthVr;

	rtd_printk(KERN_NOTICE, TAG_NAME, "i3ddma NN buffer size:<w,h>:<%d,%d>\n", SE_width, SE_height);
	// get i3ddma NN buffer address 
	if(h3ddma_get_NN_read_buffer(&SE_Addr_Cur_Y, &SE_Addr_Cur_UV) < 0)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "get i3ddma NN buffer fail\n");
		return FALSE;
	}
	rtd_printk(KERN_NOTICE, TAG_NAME, "i3ddma NN buffer addr:<y,uv>:<0x%x,0x%x>\n", SE_Addr_Cur_Y, SE_Addr_Cur_UV);
							
		
	drvif_do_se_stretch_vr(SE_width, SE_height, SE_Addr_Cur_Y, SE_Addr_Cur_UV, KGAL_PIXEL_FORMAT_NV12);
			
	return TRUE;
#else
	
	rtd_printk(KERN_NOTICE, TAG_NAME, "i3ddma NN buffer not exist! error\n");
	return FALSE;
#endif

}

unsigned char drvif_vdec_NN_SE_proc_vr(void)
{
	unsigned char SE_rdPtr = 0;
	unsigned char SE_status = 0;
	unsigned int SE_Addr_Cur_tmp = 0;
	unsigned int SE_width_tmp = 0;
	unsigned int SE_height_tmp = 0;
	unsigned int SE_Addr_Cur = 0;
	unsigned int SE_width = 0;
	unsigned int SE_height = 0;

	unsigned int SE_Addr_Cur_UV_tmp = 0;
	unsigned int SE_Addr_Cur_UV = 0;
	
	_RPC_system_setting_info* RPC_system_info_structure_table = NULL;

	RPC_system_info_structure_table = scaler_GetShare_Memory_RPC_system_setting_info_Struct();

	if((RPC_system_info_structure_table == NULL))
	{
		pr_emerg(" Mem4 = %p\n",RPC_system_info_structure_table);
		return FALSE;
	}
	
	SE_rdPtr = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.rdPtr;
	SE_status = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.pic[SE_rdPtr].status;
	SE_Addr_Cur_tmp = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.pic[SE_rdPtr].SeqBufAddr_Curr;
	SE_width_tmp = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.pic[SE_rdPtr].Width;
	SE_height_tmp = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.pic[SE_rdPtr].Height;

	SE_Addr_Cur = Scaler_ChangeUINT32Endian(SE_Addr_Cur_tmp);
	SE_width = Scaler_ChangeUINT32Endian(SE_width_tmp);
	SE_height = Scaler_ChangeUINT32Endian(SE_height_tmp);

	if(SE_status == 1)
	{		
		SE_Addr_Cur_UV_tmp = RPC_system_info_structure_table->SCPU_ISRIINFO_TO_VCPU.pic[SE_rdPtr].SeqBufAddr_Curr_UV;
		SE_Addr_Cur_UV = Scaler_ChangeUINT32Endian(SE_Addr_Cur_UV_tmp);
		
		//if(SE_rdPtr == 0)
		//{
			//NN_SE_Proc(SE_width, SE_height, SE_Addr_Cur, SE_Addr_Cur_UV, KGAL_PIXEL_FORMAT_NV12);	
			drvif_do_se_stretch_vr(SE_width, SE_height, SE_Addr_Cur, SE_Addr_Cur_UV, KGAL_PIXEL_FORMAT_NV12);
		//}
	}	
	return TRUE;
	
}
void drvif_do_se_stretch_vr(unsigned int src_w, unsigned int src_h, unsigned int src_addr_y, unsigned int src_addr_uv, KGAL_PIXEL_FORMAT_T src_fmt)
{
	unsigned int src_c_addr = 0;
	unsigned int dst_c_addr = 0;
	KGAL_PIXEL_FORMAT_T dst_fmt = KGAL_PIXEL_FORMAT_MAX;
	
	bool status=0;
	KGAL_SURFACE_INFO_T ssurf;
	KGAL_SURFACE_INFO_T dsurf;
	KGAL_RECT_T srect;
	KGAL_RECT_T drect;
	//KGAL_BLIT_FLAGS_T sflag = KGAL_BLIT_NOFX;
	KGAL_BLIT_SETTINGS_T sblend;
	
	rtd_printk(KERN_NOTICE, TAG_NAME, "fun:%s=%d\n",__FUNCTION__, __LINE__);
	
	memset(&ssurf,0, sizeof(KGAL_SURFACE_INFO_T));
	memset(&dsurf,0, sizeof(KGAL_SURFACE_INFO_T));
	memset(&srect,0, sizeof(KGAL_RECT_T));
	memset(&drect,0, sizeof(KGAL_RECT_T));
	memset(&sblend,0, sizeof(KGAL_BLIT_SETTINGS_T));
	sblend.srcBlend = KGAL_BLEND_ONE;
	sblend.dstBlend = KGAL_BLEND_ZERO;
	dst_fmt = src_fmt;
	
//---------------------------------------------------------------------------------------------------------------	
	ssurf.physicalAddress = src_addr_y;
	ssurf.width 		  = src_w;
	ssurf.height		  = src_h;
	ssurf.bpp			  = 16;
	ssurf.pitch			  = src_w;
	ssurf.pixelFormat 	  = src_fmt;
	srect.x 			  = 0;
	srect.y               = 0;
	srect.w               = src_w;
	srect.h               = src_h;
	src_c_addr			  = src_addr_uv;

//-----------------------------------------------------------------------------------------------------------------
	dsurf.physicalAddress = CaptureCtrl_VR.cap_buffer[0].phyaddr;
	dsurf.width           = vr_vfod_capture_out_W;
	dsurf.height          = vr_vfod_capture_out_H;
	dsurf.bpp             = 16;
	dsurf.pitch           = vr_vfod_capture_out_W;
	dsurf.pixelFormat     = dst_fmt;
	drect.x               = 0;
	drect.y               = 0;
	drect.w               = vr_vfod_capture_out_W;
	drect.h               = vr_vfod_capture_out_H;
	dst_c_addr            = (CaptureCtrl_VR.cap_buffer[0].phyaddr + _ALIGN(vr_cap_frame_max_width*vr_cap_frame_max_height,__12KPAGE));
//-------------------------------------------------------------------------------------------------

//#FixMe, 20190912	
//	status = KGAL_NV12_StretchBlit(&ssurf, &srect, &dsurf, &drect, &sflag, &sblend, src_c_addr, dst_c_addr);

	if(!status)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "[error]KGAL_NV12_StretchBlit run fail\n");
		
	}
	else
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "src(%d,%d) => dst(%d,%d)\n",ssurf.width, ssurf.height, dsurf.width, dsurf.height);
	}
}

unsigned char vr_source_capture_use_SE(KADP_VR_DUMP_LOCATION_TYPE_T dumplocation)
{
	/* if video has done overscan in scaler output 
	 * 
	 * source type:
	 * DTV/CP/Playback ==> vdec NN buffer ==> SE stretch
	 * HDMI/AV/ATV/Component ==> i3ddma NN buffer ==> SE stretch
	 *
	*/
	VSC_INPUT_TYPE_T srctype = VSC_INPUTSRC_MAXN;
	
	    /* first: stop dc2h */
	if(get_dc2h_capture_state_vr() == TRUE)
	{		
		start_stop_dc2h_vr(FALSE); // stop dc2h
	}
	
	if((dumplocation == KADP_VR_SCALER_OUTPUT) && (get_video_do_overscan_state_vr()))
	{
	/*if dumplocation=scaler output and video path has do overscan,
		so for geting no overscan data,will use SE capture from i3ddma or vdec */
		//capSrc = KADP_VT_SCALER_INPUT;
		rtd_printk(KERN_NOTICE, TAG_NAME, "i3ddma/vdec NN buffer to SE flow\n");
		srctype = Get_DisplayMode_Src(SLR_MAIN_DISPLAY);
		rtd_printk(KERN_NOTICE, TAG_NAME, "source type:%d\n",srctype);
		
		if((get_VR_Pixel_Format() == VR_CAP_NV12) || (get_VR_Pixel_Format() == VR_CAP_NV16))
		{
						
			if(((srctype == VSC_INPUTSRC_HDMI) && (get_hdmi_4k_hfr_mode() == HDMI_NON_4K120))
			|| (srctype == VSC_INPUTSRC_ADC) || (srctype == VSC_INPUTSRC_AVD))
			{
				/* HDMI/AV/ATV/Component ==> i3ddma NN buffer ==> SE stretch */
				if(drvif_i3ddma_NN_SE_proc_vr() == FALSE)
				{
					rtd_printk(KERN_NOTICE, TAG_NAME, "drvif_i3ddma_NN_SE_proc_vr result fail\n");
					return FALSE;
				}
				
				return TRUE;
			}
			else if((srctype == VSC_INPUTSRC_VDEC) || (srctype == VSC_INPUTSRC_JPEG))
			{
				/* DTV/CP/Playback ==> vdec NN buffer ==> SE stretch  */
				if(drvif_vdec_NN_SE_proc_vr() == FALSE)
				{
					rtd_printk(KERN_NOTICE, TAG_NAME, "drvif_vdec_NN_SE_proc_vr result fail\n");
					return FALSE;
				}

				return TRUE;
			}
			else
			{
				rtd_printk(KERN_NOTICE, TAG_NAME, "unsupport source type capture\n");
				return FALSE;
			}

		}
	
	}

	return FALSE;
}

void drvif_dc2h_seqmode_conifg_vr(unsigned char enable, int capWid, int capLen, int capSrc)
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

	pdc2h_hdl_vr = &dc2h_hdl_vr;
	memset(pdc2h_hdl_vr, 0 , sizeof(DC2H_HANDLER));
	pdc2h_hdl_vr->out_size.nWidth = capWid;
	pdc2h_hdl_vr->out_size.nLength = capLen;
	pdc2h_hdl_vr->dc2h_en = enable;					

#if 1
	
	if((capSrc == KADP_VR_SCALER_OUTPUT) && (get_video_do_overscan_state_vr()))
	{
	/*if dumplocation=scaler output and video path has do overscan,
		so for geting no overscan data,will use SE capture from i3ddma or vdec */
		//capSrc = KADP_VT_SCALER_INPUT;
		rtd_printk(KERN_NOTICE, TAG_NAME, "vt source capture flow\n");
		return;
	}

#endif
		
	if(/*(capSrc == 2)&&*/(get_vr_VrCaptureVDC())){
			pdc2h_hdl_vr->in_size.nWidth = DC2H_InputWidth;
			pdc2h_hdl_vr->in_size.nLength = DC2H_InputLength;
			pdc2h_hdl_vr->dc2h_in_sel = _VD_OUTPUT;
	}
	else 
	{
		if(Get_DISPLAY_REFRESH_RATE() == 120) //_120hz panel, ==>b802850c,two_step_uzu_en=1,uzu_4k_120_mode=1
		{
			dc2h_rgb2yuv_dc2h_rgb2yuv_ctrl_RBUS  dc2h_rgb2yuv_ctrl_reg;
			dc2h_rgb2yuv_ctrl_reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg); //9c00
			dc2h_rgb2yuv_ctrl_reg.dc2h_drop_en = 1; //only 4k_120 can use
			rtd_outl(DC2H_RGB2YUV_DC2H_RGB2YUV_CTRL_reg, dc2h_rgb2yuv_ctrl_reg.regValue);

			rtd_printk(KERN_DEBUG, TAG_NAME, "120-panel\n");
			
			if(KADP_VR_SCALER_OUTPUT == capSrc)   
			{
				pdc2h_hdl_vr->dc2h_in_sel = _TWO_SECOND_UZU; //4k_120 mode 2nd uzu on
				pdc2h_hdl_vr->in_size.nWidth = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta);
				if((pdc2h_hdl_vr->in_size.nWidth % 2) != 0)
				{
					pdc2h_hdl_vr->in_size.nWidth -= 1;
				}	
				
				if(Get_DISPLAY_REFRESH_RATE() == (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)/10))
					pdc2h_hdl_vr->in_size.nWidth = (pdc2h_hdl_vr->in_size.nWidth)/2;
				
				pdc2h_hdl_vr->in_size.nLength = main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta;
			}
			else if(KADP_VR_DISPLAY_OUTPUT == capSrc)
			{
				if(is_4K2K_capture_VR() == TRUE)
				{
					pdc2h_hdl_vr->dc2h_in_sel = _TWO_SECOND_UZU;
					pdc2h_hdl_vr->in_size.nWidth = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta);
					if((pdc2h_hdl_vr->in_size.nWidth % 2) != 0)
					{
							pdc2h_hdl_vr->in_size.nWidth -= 1;
					}		
			
					if(Get_DISPLAY_REFRESH_RATE() == (Scaler_DispGetInputInfo(SLR_INPUT_V_FREQ)/10))
							pdc2h_hdl_vr->in_size.nWidth = (pdc2h_hdl_vr->in_size.nWidth)/2;
			
					pdc2h_hdl_vr->in_size.nLength = main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta;
				}
				else
				{
					pdc2h_hdl_vr->dc2h_in_sel = _Memc_mux_Output;
					pdc2h_hdl_vr->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta)/2;
					pdc2h_hdl_vr->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta; 			   
				}
			}
			else if(KADP_VR_OSDVIDEO_OUTPUT == capSrc)
			{
				pdc2h_hdl_vr->dc2h_in_sel = _OSD_MIXER;		
				pdc2h_hdl_vr->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta)/2;
				pdc2h_hdl_vr->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
			}
			else
			{				
				rtd_printk(KERN_EMERG, TAG_NAME, "[Vt error] unknow the capSrc line:%d\n",__LINE__);
			}
		}
		else  // non 4k_120 mode 
		{
			rtd_printk(KERN_DEBUG, TAG_NAME, "non-120-panel\n");
			
			if(KADP_VR_SCALER_OUTPUT == capSrc)
			{
				pdc2h_hdl_vr->dc2h_in_sel = _MAIN_UZU;
				if (ppoverlay_uzudtg_control1_reg.two_step_uzu_en) {
					pdc2h_hdl_vr->in_size.nWidth = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta)/2;			
					pdc2h_hdl_vr->in_size.nLength = (main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta)/2;
				} else {
					pdc2h_hdl_vr->in_size.nWidth = (main_active_h_start_end_Reg.mh_act_end - main_active_h_start_end_Reg.mh_act_sta);			
					pdc2h_hdl_vr->in_size.nLength = (main_active_v_start_end_Reg.mv_act_end - main_active_v_start_end_Reg.mv_act_sta);
				}
			}
			else if(KADP_VR_DISPLAY_OUTPUT == capSrc)
			{
				pdc2h_hdl_vr->dc2h_in_sel = _Memc_mux_Output;
				pdc2h_hdl_vr->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta);
				pdc2h_hdl_vr->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
			}
			else if(KADP_VR_OSDVIDEO_OUTPUT == capSrc)
			{
				pdc2h_hdl_vr->dc2h_in_sel = _OSD_MIXER;		
				pdc2h_hdl_vr->in_size.nWidth = (main_den_h_start_end_Reg.mh_den_end - main_den_h_start_end_Reg.mh_den_sta);
				pdc2h_hdl_vr->in_size.nLength = main_den_v_start_end_Reg.mv_den_end - main_den_v_start_end_Reg.mv_den_sta;
			}
			else
			{				
				rtd_printk(KERN_EMERG, TAG_NAME, "[Vt error] unknow the capSrc line:%d\n",__LINE__);
			}
			
		}
				
	}					

	if (enable == TRUE) {
		if(get_vr_VrSwBufferMode()){
			if(FALSE == drvif_dc2h_swmode_inforpc_vr(TRUE,get_vr_VrBufferNum(),capWid,capLen)){
				rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d RPC fail so not setting dc2h and return!!\n", __FUNCTION__, __LINE__);	
				return;
			}
		}
#if 0		
		if(get_vr_VrCaptureVDC()){
			drvif_dc2h_input_overscan_config(DC2H_InputWidthSta, DC2H_InputLengthSta, pdc2h_hdl_vr->in_size.nWidth, pdc2h_hdl_vr->in_size.nLength);
		} else {
			dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.regValue = rtd_inl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl_reg);
			dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.dc2h_3dmaskto2d_3dformat = 0;
			dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.dc2h_3dmaskto2d_en = 0;
			rtd_outl(DC2H_RGB2YUV_DC2H_3DMaskTo2D_Ctrl_reg, dc2h_rgb2yuv_dc2h_3dmaskto2d_ctrl_Reg.regValue);
		}
#endif		
		rtd_printk(KERN_EMERG, TAG_NAME, "[Vt capinfo]vt cap sel=%d input w= %d; input h=%d;output w=%d,output h=%d! \n", pdc2h_hdl_vr->dc2h_in_sel,pdc2h_hdl_vr->in_size.nWidth, pdc2h_hdl_vr->in_size.nLength,pdc2h_hdl_vr->out_size.nWidth,pdc2h_hdl_vr->out_size.nLength);
	
		//if(capSrc == VT_CAP_SRC_VIDEO_NOPQ) {
			//drvif_dc2h_input_overscan_config(main_active_h_start_end_Reg.mh_act_sta, main_active_v_start_end_Reg.mv_act_sta, pdc2h_hdl_vr->in_size.nWidth, pdc2h_hdl_vr->in_size.nLength);
		//} else {
			drvif_dc2h_input_overscan_config_vr(0, 0, pdc2h_hdl_vr->in_size.nWidth, pdc2h_hdl_vr->in_size.nLength);
		//}
		drvif_color_colorspaceyuv2rgbtransfer_vr(pdc2h_hdl_vr->dc2h_in_sel);
		drvif_color_ultrazoom_config_dc2h_scaling_down_vr(pdc2h_hdl_vr);
		if(get_VR_Pixel_Format() == VR_CAP_NV12)
			drvif_vi_config_vr(pdc2h_hdl_vr->out_size.nWidth,pdc2h_hdl_vr->out_size.nLength,0);
		else if (get_VR_Pixel_Format() == VR_CAP_NV16)
			drvif_vi_config_vr(pdc2h_hdl_vr->out_size.nWidth,pdc2h_hdl_vr->out_size.nLength,1);
		else
			drvif_dc2h_seq_config_vr(pdc2h_hdl_vr);
	} 
	else 
	{
		reset_dc2h_hw_setting_vr();  /* disable dc2h and reset dc2h */
		
		if (get_vr_VrSwBufferMode())
		{
			if(FALSE == drvif_dc2h_swmode_inforpc_vr(FALSE,get_vr_VrBufferNum(),capWid,capLen))
			{
				rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d RPC fail when close dc2h!!\n", __FUNCTION__, __LINE__);	
			}
		}		
	}
}

void drvif_Vr_DC2H_dispD_CaptureConfig(VR_CUR_CAPTURE_INFO capInfo)
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
		memset((unsigned char *)VtAllocatedBufferStartAdress, 0 , (vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)));
	}
#endif
	if(capInfo.enable == TRUE){
		if (CaptureCtrl_VR.cap_buffer[0].phyaddr == 0) {
			rtd_printk(KERN_EMERG, TAG_NAME, "[Vt warning]vt no init, so no memory, return setting;%s=%d \n", __FUNCTION__, __LINE__);
			return;
		}

		if ((capInfo.capWid > vr_cap_frame_max_width)||(capInfo.capLen > vr_cap_frame_max_height)) {
			rtd_printk(KERN_EMERG, TAG_NAME, "[VT warning]drvif_Vr_DC2H_dispD_CaptureConfig:could not support max than 2k1k output w=%d,output h=%d! \n", capInfo.capWid,capInfo.capLen);
			return;
		}	
#if 1
		if((get_vr_VrBufferNum()==1)&&(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE)){
			rtd_printk(KERN_DEBUG, TAG_NAME, "[warning]%s=%d Vsc not at _MODE_STATE_ACTIVE status,could not do vt capture!\n", __FUNCTION__, __LINE__);
			//return;			
		}

		if(((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE))
			&& (get_vr_VrBufferNum() == 5)){
			rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE]%s=%d Vbe at abnormal dvs status,could not do vt capture!\n", __FUNCTION__, __LINE__);
			return;			
		}
#endif

		if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16))
		{		
			dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
			dc2h_vi_dc2h_vi_ads_start_c_RBUS dc2h_vi_dc2h_vi_ads_start_c_Reg;
			dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_reg;
		
			dc2h_dma_dc2h_cap_boundaryaddr1_RBUS dc2h_cap_boundaryaddr1_reg;
			dc2h_dma_dc2h_cap_boundaryaddr2_RBUS dc2h_cap_boundaryaddr2_reg;
			unsigned int vt_use_buffer_num = 0;

			vt_use_buffer_num = get_vr_VrBufferNum();
			dc2h_cap_l3_start_reg.regValue= 0;
			rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);  //used record freeze buffer

			DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
			IoReg_Write32(DC2H_VI_DC2H_vi_ads_start_y_reg, DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue);
			
			dc2h_vi_dc2h_vi_ads_start_c_Reg.regValue = (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr + _ALIGN(vr_cap_frame_max_width*vr_cap_frame_max_height,__12KPAGE);
			IoReg_Write32(DC2H_VI_DC2H_vi_ads_start_c_reg, dc2h_vi_dc2h_vi_ads_start_c_Reg.regValue);
			//rtd_printk(KERN_EMERG, TAG_NAME, "nv12 or nv16 %s=%d \n", __FUNCTION__, __LINE__);

#ifndef CONFIG_MEMC_BYPASS	//no-bypass memc 

			if((vt_use_buffer_num == 5))
			{
				unsigned int up = sort_boundary_addr_max_index_vr();
				unsigned int low =  sort_boundary_addr_min_index_vr();
				
				dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[up].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[up].size;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

				dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[low].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
			}
			else
			{
				
				dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[vt_use_buffer_num-1].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[vt_use_buffer_num-1].size;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);
				
				dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
			}
#else	// bypass memc	
		
			dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[vt_use_buffer_num-1].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[vt_use_buffer_num-1].size;
			rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);
			
			dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
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

			if (get_vr_VrCaptureVDC()){
				dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);  // block0, DDR buffer L1 start address

				dc2h_cap_l2_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[1].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);  // block0, DDR buffer L2 start address

				dc2h_cap_l3_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[2].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);  // block0, DDR buffer L3 start address

				dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[2].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[2].size;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

				dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
				rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);			
			} else {
				if(get_vr_VrBufferNum()==5) {
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);  // block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);  // block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);  // block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[4].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[4].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
				} else if(get_vr_VrBufferNum()==4){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[3].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[3].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);

				} else if(get_vr_VrBufferNum()==3){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[2].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[2].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);

				}else if(get_vr_VrBufferNum()==2){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[1].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[1].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);

				}else if(get_vr_VrBufferNum()==1){
					dc2h_cap_l1_start_reg.regValue= (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_L1_Start_reg, dc2h_cap_l1_start_reg.regValue);	// block0, DDR buffer L1 start address

					dc2h_cap_l2_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L2_Start_reg, dc2h_cap_l2_start_reg.regValue);	// block0, DDR buffer L2 start address

					dc2h_cap_l3_start_reg.regValue= 0;
					rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg, dc2h_cap_l3_start_reg.regValue);	// block0, DDR buffer L3 start address

					dc2h_cap_boundaryaddr1_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr +  (UINT32)CaptureCtrl_VR.cap_buffer[0].size;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr1_reg, dc2h_cap_boundaryaddr1_reg.regValue);

					dc2h_cap_boundaryaddr2_reg.regValue =  (UINT32)CaptureCtrl_VR.cap_buffer[0].phyaddr;
					rtd_outl(DC2H_DMA_dc2h_Cap_BoundaryAddr2_reg, dc2h_cap_boundaryaddr2_reg.regValue);
				}
			}
		}
		drvif_dc2h_seqmode_conifg_vr(TRUE, capInfo.capWid, capInfo.capLen, capInfo.capSrc);

		if(get_vr_VrBufferNum()==1){
			waitbufferms = 20;
		}
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		timeout_s = ns_to_timespec64(waitbufferms * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s,  HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#else
		timeout_s = ns_to_timespec(waitbufferms * 1000 * 1000);
		hrtimer_nanosleep(&timeout_s, NULL, HRTIMER_MODE_REL, CLOCK_MONOTONIC);
#endif	
		if(get_vr_VrBufferNum()==1) {
			if((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE)){				
				rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE]%s=%d Vbe at abnormal dvs status,stop vt capture!\n", __FUNCTION__, __LINE__);
				/*abonrmal timing closed dc2h*/
				drvif_dc2h_seqmode_conifg_vr(FALSE, capInfo.capWid, capInfo.capLen, capInfo.capSrc);
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
			vt_dump_data_to_file(0, (vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)));
		}

		if((capInfo.enable==1)){
			rtd_printk(KERN_EMERG, TAG_NAME,"data1 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+1))));
			rtd_printk(KERN_EMERG, TAG_NAME,"data2 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+2))));
			rtd_printk(KERN_EMERG, TAG_NAME,"data3 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+3))));
			rtd_printk(KERN_EMERG, TAG_NAME,"data4 = %d\n", *((unsigned char*)(VtAllocatedBufferStartAdress+(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH+_ALIGN(vr_cap_frame_max_width*VT_CAP_FRAME_MAX_LENGTH,__12KPAGE)+4))));
		}
#endif
	} else {
		if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16)){		
			dc2h_scaledown_dc2h_444to422_ctrl_RBUS dc2h_scaledown_dc2h_444to422_ctrl_reg;
			
			dc2h_scaledown_dc2h_444to422_ctrl_reg.regValue = rtd_inl(DC2H_SCALEDOWN_DC2H_444to422_CTRL_reg);
			if(VRDumpLocation == KADP_VR_SCALER_OUTPUT)
				dc2h_scaledown_dc2h_444to422_ctrl_reg.cbcr_swap_en =0;
			rtd_outl(DC2H_SCALEDOWN_DC2H_444to422_CTRL_reg, dc2h_scaledown_dc2h_444to422_ctrl_reg.regValue);  //used record freeze buffer
		}
		drvif_dc2h_seqmode_conifg_vr(FALSE, capInfo.capWid, capInfo.capLen, capInfo.capSrc);
	}
}


//extern unsigned char get_vr_function(void);
unsigned char HAL_VR_InitEx(unsigned int buffernum)
{
	ppoverlay_display_timing_ctrl1_RBUS display_timing_ctrl1_reg;
	down(&VR_Semaphore);
	
	if((buffernum<=0)||(buffernum>5)) {/*max support 5 buffer mode*/
		buffernum = 5;
	}

	rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d buffernum=%d\n", __FUNCTION__, __LINE__,buffernum);

	if ((Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC)
		&&(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY,SLR_INPUT_STATE) ==  _MODE_STATE_ACTIVE)){
		if(get_vdec_securestatus()==TRUE){	
			rtd_printk(KERN_EMERG, TAG_NAME, "[Warning vdecsvp]%s=%d Vdec source security is TRUE,could not do vt capture!\n", __FUNCTION__, __LINE__);
			up(&VR_Semaphore);
			return FALSE;
		}
	}

	display_timing_ctrl1_reg.regValue = IoReg_Read32(PPOVERLAY_Display_Timing_CTRL1_reg);
	if (display_timing_ctrl1_reg.disp_en == 0)/*means d domain clock off, stop capture*/
	{
		rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VT]D domain clock is off status,could not do vt capture!\n");
		up(&VR_Semaphore);
		return FALSE;	
	}
#if 1
	if((buffernum == 1)&&(Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_STATE) != _MODE_STATE_ACTIVE)){
		rtd_printk(KERN_DEBUG, TAG_NAME, "[Warning VT]Vsc not at _MODE_STATE_ACTIVE status\n");
		//up(&VR_Semaphore);
		//return FALSE;			
	}
#endif

	if(((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE))
		&& (get_vr_VrBufferNum() == 5)){ /* add vr360 condition(5 buffers),avoid capture out of range */
		rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE][VT] Vbe at abnormal dvs status,could not do vt capture!\n");
		up(&VR_Semaphore);
		return FALSE;			
	}
	
	if(get_vr_function()==FALSE) {		
		curCapInfo.enable = 1; //iMode;
		curCapInfo.capMode = VR_CAP_MODE_SEQ;
	
		curCapInfo.capSrc =  vr_vfod_capture_location;  //0:scaler output 1:display output		
		curCapInfo.capWid = vr_vfod_capture_out_W; //iWid;
		curCapInfo.capLen = vr_vfod_capture_out_H;
		
		if (Capture_BufferMemInit_VR(buffernum) == FALSE) {
			curCapInfo.enable = 0; //iMode;
			rtd_printk(KERN_EMERG, TAG_NAME, "VT init allocate memory fail;%s=%d \n", __FUNCTION__, __LINE__);
			up(&VR_Semaphore);
			return FALSE;
		}
		set_vr_function(TRUE);
		set_vr_VrBufferNum(buffernum);
		if(buffernum==1)
			set_vr_VrSwBufferMode(FALSE);
		else
			set_vr_VrSwBufferMode(TRUE);
		set_vr_VrCaptureVDC(FALSE);
		
		drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
#if 0/*data dump verify*/		
		msleep(1000);
		vt_dump_data_to_file(0, 3*1920*1080);
#endif
		VFODState.bEnabled = TRUE;
		VFODState.bAppliedPQ=TRUE;
		VFODState.bFreezed =FALSE;
		VFODState.framerateDivide = get_framerateDivide_vr();
		VRDumpLocation = KADP_VR_DISPLAY_OUTPUT;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT init Success;%s=%d \n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT have inited,do nothing;%s=%d \n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return TRUE;
	}
	
}


unsigned char HAL_VR_Init(void)
{
	rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d \n", __FUNCTION__, __LINE__);		

	if(HAL_VR_InitEx(1)==FALSE)
		return FALSE;
	else
		return TRUE;
}

unsigned char HAL_VR_Finalize(void)
{
	rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d\n", __FUNCTION__, __LINE__);
	down(&VR_Semaphore);
	if(get_vr_function()==TRUE) {
#ifdef ENABLE_VR360_DATA_FS_FLOW
		INPUT_TIMING_INDEX index = get_current_pattern_index();
		if(index == VO_4K2K_60){
			rtd_printk(KERN_EMERG, TAG_NAME,"[func:%s] enter datafrc proc.\n", __FUNCTION__);
			scaler_vsc_vr360_enter_datafrc_proc();
		}
#endif
		rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d  start\n", __FUNCTION__, __LINE__);
		curCapInfo.enable = 0; //iMode;
		drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
		Capture_BufferMemDeInit_VR(get_vr_VrBufferNum());
		set_vr_VrBufferNum(5);
		IndexOfFreezedVideoFrameBufferVr = 0;
		//set_VT_Pixel_Format(VT_CAP_RGB888);
		set_vr_VrSwBufferMode(FALSE);
		VFODState.bEnabled = FALSE;
		VFODState.bAppliedPQ = FALSE;
		VFODState.bFreezed = TRUE;
		VFODState.framerateDivide = 1;
		VRDumpLocation = KADP_VR_DISPLAY_OUTPUT;
		set_vr_function(FALSE);
		rtd_printk(KERN_EMERG, TAG_NAME, "VT finalize Success;%s=%d \n", __FUNCTION__, __LINE__);
		if ((get_vr_EnableFRCMode()==FALSE))
		{
			//360vr close FRC, so end 360vr need reopen frc
			//please close memc here
			MEMC_Set_malloc_address(TRUE);
			set_vr_EnableFRCMode(TRUE);
			
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
			}
			
		}
		up(&VR_Semaphore);	
		return TRUE;
	} else {
		rtd_printk(KERN_EMERG, TAG_NAME, "VT have finalized,do nothing;%s=%d \n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return TRUE;
	}

}

unsigned char HAL_VR_GetDeviceCapability(KADP_VR_DEVICE_CAPABILITY_INFO_T *pDeviceCapabilityInfo)
{
	down(&VR_Semaphore);
	pDeviceCapabilityInfo->numOfVideoWindow = 1;
	up(&VR_Semaphore);
	return TRUE;
}


unsigned char HAL_VR_GetVideoFrameBufferCapability(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_VIDEO_FRAME_BUFFER_CAPABILITY_INFO_T *pVideoFrameBufferCapabilityInfo)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	pVideoFrameBufferCapabilityInfo->numOfVideoFrameBuffer = get_vr_VrBufferNum();//i3ddma triple buffer mode

	if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16)){	
		pVideoFrameBufferCapabilityInfo ->numOfPlane = KADP_VR_VIDEO_FRAME_BUFFER_PLANE_SEMI_PLANAR;
	} else {
		pVideoFrameBufferCapabilityInfo ->numOfPlane = KADP_VR_VIDEO_FRAME_BUFFER_PLANE_INTERLEAVED;//sequence buffer
	}
	up(&VR_Semaphore);
	return TRUE;
}

unsigned char HAL_VR_GetVideoFrameOutputDeviceCapability(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_CAPABILITY_INFO_T *pVideoFrameOutputDeviceCapabilityInfo)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlEnabled = TRUE;
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlFreezed = TRUE;//VI block mode disble endma
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlFramerateDivide = FALSE;
	pVideoFrameOutputDeviceCapabilityInfo ->bSupportedControlPQ = FALSE;
	up(&VR_Semaphore);
	return TRUE;
}

unsigned char HAL_VR_GetVideoFrameOutputDeviceLimitation(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_LIMITATION_INFO_T *pVideoFrameOutputDeviceLimitationInfo)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	pVideoFrameOutputDeviceLimitationInfo->maxResolution = (KADP_VR_RECT_T){0,0,3840/*VT_CAP_FRAME_WIDTH_4K2K*/,2160/*VT_CAP_FRAME_HEIGHT_4K2K*/};
	pVideoFrameOutputDeviceLimitationInfo->bLeftTopAlign = FALSE;
	pVideoFrameOutputDeviceLimitationInfo->bSupportInputVideoDeInterlacing =FALSE;
	pVideoFrameOutputDeviceLimitationInfo->bSupportDisplayVideoDeInterlacing = FALSE;
	pVideoFrameOutputDeviceLimitationInfo->bSupportScaleUp = FALSE;
	pVideoFrameOutputDeviceLimitationInfo->scaleUpLimitWidth = 0;
	pVideoFrameOutputDeviceLimitationInfo->scaleUpLimitHeight = 0;
	pVideoFrameOutputDeviceLimitationInfo->bSupportScaleDown = TRUE;
	pVideoFrameOutputDeviceLimitationInfo->scaleDownLimitWidth = 60;//nfactor upto 32
	pVideoFrameOutputDeviceLimitationInfo->scaleDownLimitHeight = 34;
	up(&VR_Semaphore);
	return TRUE;
}

unsigned char HAL_VR_GetAllVideoFrameBufferProperty(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_VIDEO_FRAME_BUFFER_PROPERTY_INFO_T *pVideoFrameBufferProperty)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	if(get_vr_function() == TRUE) {
		/*rtd_printk(KERN_DEBUG, TAG_NAME, "Kernel: pVideoFrameBufferProperty->ppPhysicalAddress addr =%x\n", (unsigned int)(pVideoFrameBufferProperty->ppPhysicalAddress));*/

		if(get_VR_Pixel_Format() == VR_CAP_NV16){	
			pVideoFrameBufferProperty->pixelFormat = KADP_VR_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_YUV422_SEMI_PLANAR;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid;		
		}else if(get_VR_Pixel_Format() == VR_CAP_NV12){ 
			pVideoFrameBufferProperty->pixelFormat = KADP_VR_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_YUV420_SEMI_PLANAR;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid;		
		}else if((get_VR_Pixel_Format() == VR_CAP_ABGR8888)||(get_VR_Pixel_Format() == VR_CAP_ARGB8888)) {
			pVideoFrameBufferProperty->pixelFormat = KADP_VR_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_ARGB;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid*4, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid*4;
		} else {
			pVideoFrameBufferProperty->pixelFormat = KADP_VR_VIDEO_FRAME_BUFFER_PIXEL_FORMAT_RGB;
			pVideoFrameBufferProperty->stride = drvif_memory_get_data_align(curCapInfo.capWid*3, 96);
			pVideoFrameBufferProperty->width = curCapInfo.capWid*3;
		}
		pVideoFrameBufferProperty->height = curCapInfo.capLen;
		pVideoFrameBufferProperty->ppPhysicalAddress0 = CaptureCtrl_VR.cap_buffer[0].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress1 = CaptureCtrl_VR.cap_buffer[1].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress2 = CaptureCtrl_VR.cap_buffer[2].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress3 = CaptureCtrl_VR.cap_buffer[3].phyaddr;
		pVideoFrameBufferProperty->ppPhysicalAddress4 = CaptureCtrl_VR.cap_buffer[4].phyaddr;
		pVideoFrameBufferProperty->vfbbuffernumber = get_vr_VrBufferNum();
		up(&VR_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "VR is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VR_GetVideoFrameBufferIndex(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned int *pIndexOfCurrentVideoFrameBuffer)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	
	if((vr_vfod_capture_location == KADP_VR_SCALER_OUTPUT) && (get_video_do_overscan_state_vr()))
	{
		vr_source_capture_use_SE(vr_vfod_capture_location);
		*pIndexOfCurrentVideoFrameBuffer = 0;
		
		up(&VR_Semaphore);		
		return TRUE;
	}
	
	if(get_vr_function() == TRUE) 
	{
		if(VFODState.bFreezed == TRUE) {
			set_vr_vfod_freezed(FALSE);
			VFODState.bFreezed = FALSE;
		}
		
		if(VFODState.bFreezed == FALSE) {
			set_vr_vfod_freezed(TRUE);
			VFODState.bFreezed = TRUE;
		}
		
		if(VFODState.bFreezed == TRUE) 
		{
			*pIndexOfCurrentVideoFrameBuffer = IndexOfFreezedVideoFrameBufferVr;
			rtd_printk(KERN_DEBUG, TAG_NAME,  "VFOD is freezed\n");
			
		}
	    else  // if VFOD is not freezed,just return the last captured buffer index
		{
			//rtd_printk(KERN_NOTICE, TAG_NAME,  "VFOD is not freezed\n");

			if((get_VR_Pixel_Format() == VR_CAP_NV12)||(get_VR_Pixel_Format() == VR_CAP_NV16))
			{
				if(get_vr_VrBufferNum()==5) 
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);
			
					if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[4].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[4].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
					}
								
					if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[4].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 4;
					}
					rtd_printk(KERN_DEBUG, TAG_NAME,  "++--index = %d\n", *pIndexOfCurrentVideoFrameBuffer);
					//rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} 
				else if(get_vr_VrBufferNum()==4) 
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);

			
					if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
					}else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
					}
			
					if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}	
					//rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
				} 
				else if(get_vr_VrBufferNum()==3)
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);


		           if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
		           }

		           if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 1;
		           }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 2;
		           }       
		          // rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }
				else if(get_vr_VrBufferNum()==2) 
				{
					dc2h_vi_dc2h_vi_ads_start_y_RBUS DC2H_VI_DC2H_vi_ads_start_y_Reg;
					unsigned int lastcapbufferaddr = 0;
					DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue = rtd_inl(DC2H_VI_DC2H_vi_ads_start_y_reg);

		           if(DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
		           }else if (DC2H_VI_DC2H_vi_ads_start_y_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
		                   lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
		           }

		           if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 0;
		           }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
		                   *pIndexOfCurrentVideoFrameBuffer = 1;
		           }    
		           //rtd_outl(DC2H_DMA_dc2h_Cap_L3_Start_reg,lastcapbufferaddr);
		        }

			}
			else
			{	
				if (get_vr_VrBufferNum() == 5)
				{
					dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
				
					//dc2h_dma_dc2h_cap_l3_start_RBUS dc2h_cap_l3_start_Reg;
					//dc2h_cap_l3_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L3_Start_reg);

					if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[4].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[4].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
					}
					
					if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[4].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 4;
					}	
				}
				 else if(get_vr_VrBufferNum() == 4)
				 {
					dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
					unsigned int lastcapbufferaddr = 0;
					dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);
							
					if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[3].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
					}else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
					}

					if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 0;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 1;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 2;
					}else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[3].phyaddr){
						*pIndexOfCurrentVideoFrameBuffer = 3;
					}
				}
				else if(get_vr_VrBufferNum() == 3)
				{
	               dc2h_dma_dc2h_cap_l1_start_RBUS dc2h_cap_l1_start_Reg;
	               unsigned int lastcapbufferaddr = 0;
	               dc2h_cap_l1_start_Reg.regValue = rtd_inl(DC2H_DMA_dc2h_Cap_L1_Start_db_reg);

	               if(dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[0].phyaddr){
	                       lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[2].phyaddr;
	              }else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[1].phyaddr){
	                       lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[0].phyaddr;
	               }else if (dc2h_cap_l1_start_Reg.regValue == CaptureCtrl_VR.cap_buffer[2].phyaddr){
	                       lastcapbufferaddr = CaptureCtrl_VR.cap_buffer[1].phyaddr;
	               }

	               if(lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[0].phyaddr){
	                       *pIndexOfCurrentVideoFrameBuffer = 0;
	               }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[1].phyaddr){
	                       *pIndexOfCurrentVideoFrameBuffer = 1;
	               }else if (lastcapbufferaddr == CaptureCtrl_VR.cap_buffer[2].phyaddr){
	                       *pIndexOfCurrentVideoFrameBuffer = 2;
	               }
	       		}
					
			}
				
		}
		up(&VR_Semaphore);
		return TRUE;
	} 
	else 
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VR_GetVideoFrameOutputDeviceState(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T *pVideoFrameOutputDeviceState)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	*pVideoFrameOutputDeviceState = VFODState;
	up(&VR_Semaphore);
	if(get_vr_function() == TRUE) {
		return TRUE;
	} else {
		return FALSE;
	}
}

unsigned char HAL_VR_SetVideoFrameOutputDeviceState(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FLAGS_T videoFrameOutputDeviceStateFlags, KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_INFO_T *pVideoFrameOutputDeviceState)
{
	rtd_printk(KERN_EMERG, TAG_NAME, "%s=%d\n", __FUNCTION__, __LINE__);
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

	if(videoFrameOutputDeviceStateFlags==KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_NOFX) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_NOFX is do nothing\n");
		return TRUE;
	}
#if 0//not support aplly pq and framerate divide
	if(videoFrameOutputDeviceStateFlags&KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE) {
		printk("KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE is not support\n");
		return FALSE;
	}

	if(videoFrameOutputDeviceStateFlags&KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_APPLIED_PQ) {
		if(pVideoFrameOutputDeviceState->bAppliedPQ)
			curCapInfo.capSrc =  KADP_VR_CAP_SRC_SUBTITLE;
		else
			curCapInfo.capSrc =  KADP_VR_CAP_SRC_UZU;
		VFODState.bAppliedPQ = pVideoFrameOutputDeviceState->bAppliedPQ;
		if(pVideoFrameOutputDeviceState->bAppliedPQ)
			VRDumpLocation = KADP_VR_DISPLAY_OUTPUT;
		else
			VRDumpLocation = KADP_VR_SCALER_OUTPUT;
	}
#endif
	down(&VR_Semaphore);
	if(get_vr_function() == TRUE) { 
#if 1		
		if (videoFrameOutputDeviceStateFlags&KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_ENABLED) {
			if (VFODState.bEnabled != pVideoFrameOutputDeviceState->bEnabled) {
				curCapInfo.enable = pVideoFrameOutputDeviceState->bEnabled;
				VFODState.bEnabled = pVideoFrameOutputDeviceState->bEnabled;
				drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
			}
		}

		if(videoFrameOutputDeviceStateFlags&KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE) {
			rtd_printk(KERN_EMERG, TAG_NAME, "KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FRAMERATE_DIVIDE is %d\n",pVideoFrameOutputDeviceState->framerateDivide);
			VFODState.framerateDivide = pVideoFrameOutputDeviceState->framerateDivide;
		}
		
		/*freeze do last*/
		if(videoFrameOutputDeviceStateFlags&KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FREEZED) {
			if(get_vr_function() == TRUE) {
				if(pVideoFrameOutputDeviceState->bFreezed == VFODState.bFreezed) {
					rtd_printk(KERN_EMERG, TAG_NAME, "KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_STATE_FREEZED is the same as you setting\n");
				} else {
					set_vr_vfod_freezed(pVideoFrameOutputDeviceState->bFreezed);
					VFODState.bFreezed = pVideoFrameOutputDeviceState->bFreezed;
				}
			} else {
				rtd_printk(KERN_EMERG, TAG_NAME, "VFOD is not inited, so no freeze cmd!\n");
			}
		}
#endif
		
		up(&VR_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return FALSE;
	}
}

/*qiangzhou:please refer modestate_decide_dtg_m_mode api SLR_INPUT_DTG_MASTER_V_FREQ setting*/
unsigned short Get_vr_VFOD_FrameRate(void)
{
		unsigned short framerate = 0;

		framerate = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_DTG_MASTER_V_FREQ);

		if ((framerate != 50)&&(framerate != 60)&&(framerate != 48)) {
			
			rtd_printk(KERN_NOTICE, TAG_NAME, "[warning] get SLR_INPUT_DTG_MASTER_V_FREQ not right!!!\n");
			framerate = 60;
		}

		if (Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_PIXEL_MODE) == PIXEL_MODE_2_PIXEL) {
			if(framerate == 48){/*qiangzhou: not happen case, mention here*/
				framerate = 120;
			} else {	
				framerate = framerate*2;
			}
		}
		return framerate;

}

unsigned char HAL_VR_GetVideoFrameOutputDeviceFramerate(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned int *pVideoFrameOutputDeviceFramerate)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	
	if(get_vr_function() == TRUE) {	
		*pVideoFrameOutputDeviceFramerate = Get_vr_VFOD_FrameRate();
		up(&VR_Semaphore);
		return TRUE;
	} else {
		*pVideoFrameOutputDeviceFramerate = 0;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VR is not Inited So return pVideoFrameOutputDeviceFramerate 0;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return TRUE;
	}
}

unsigned char HAL_VR_GetVideoFrameOutputDeviceDumpLocation(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_DUMP_LOCATION_TYPE_T *pDumpLocation)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	if(get_vr_function() == TRUE) {
		*pDumpLocation = VRDumpLocation;
		up(&VR_Semaphore);
		return TRUE;
	} else {
		*pDumpLocation = VRDumpLocation;
		rtd_printk(KERN_NOTICE, TAG_NAME, "[Warning]VR is not Inited when get dump location;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VR_SetVideoFrameOutputDeviceDumpLocation(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_DUMP_LOCATION_TYPE_T dumpLocation)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	if(get_vr_function() == TRUE)
	{
		if(VRDumpLocation == dumpLocation) {
			rtd_printk(KERN_NOTICE, TAG_NAME, "VRDumpLocation is the same as you setting\n");
		} else {
			curCapInfo.enable = 0; //close vfod first then rerun
			drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
			curCapInfo.enable = 1;
#if 0
			if(dumpLocation==KADP_VR_DISPLAY_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_PQ;
			else if(dumpLocation==KADP_VR_SCALER_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_NOPQ;
			else if(dumpLocation==KADP_VR_OSDVIDEO_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_OSD;
#endif
			curCapInfo.capSrc = dumpLocation;
			drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
			if(dumpLocation == KADP_VR_SCALER_OUTPUT)
				VFODState.bAppliedPQ = FALSE;
			else
				VFODState.bAppliedPQ = TRUE;

			VRDumpLocation = dumpLocation;

			if(VFODState.bFreezed == TRUE) {
				set_vr_vfod_freezed(TRUE);//revert freezed status
			}
		}
		up(&VR_Semaphore);
		return TRUE;
	} else {
		rtd_printk(KERN_NOTICE, TAG_NAME, "[Warning]VT is not Inited when set dump location;%s=%d\n", __FUNCTION__, __LINE__);
		VRDumpLocation = dumpLocation;
		up(&VR_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VR_GetVideoFrameOutputDeviceOutputInfo(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_DUMP_LOCATION_TYPE_T dumpLocation, KADP_VR_VIDEO_FRAME_OUTPUT_DEVICE_OUTPUT_INFO_T *pOutputInfo)
{
	ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_reg;
	ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_reg;
	ppoverlay_main_den_h_start_end_RBUS main_den_h_start_end_Reg;
	ppoverlay_main_den_v_start_end_RBUS main_den_v_start_end_Reg;
	unsigned int x,y,w,h;
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	//Main Active H pos
	main_active_h_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	//Main Active V pos
	main_active_v_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_V_Start_End_reg);

	main_den_h_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_H_Start_End_reg);
	main_den_v_start_end_Reg.regValue = rtd_inl(PPOVERLAY_MAIN_DEN_V_Start_End_reg);
	
	if((get_vr_function() == TRUE)&&(dumpLocation ==VRDumpLocation )) {
		if((KADP_VR_DISPLAY_OUTPUT==dumpLocation)||(KADP_VR_OSDVIDEO_OUTPUT==dumpLocation)){
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
		} else if(KADP_VR_SCALER_OUTPUT==dumpLocation) {
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
		up(&VR_Semaphore);
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
		up(&VR_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VR_SetVideoFrameOutputDeviceOutputRegion(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_DUMP_LOCATION_TYPE_T dumpLocation, KADP_VR_RECT_T *pOutputRegion)
{
	if (videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	if ((pOutputRegion->w > vr_cap_frame_max_width)||(pOutputRegion->h > vr_cap_frame_max_height)) {
		rtd_printk(KERN_EMERG, TAG_NAME, "[VT warning]HAL_VT_SetVideoFrameOutputDeviceOutputRegion:could not support max than 2k1k output w=%d,output h=%d! \n", pOutputRegion->w,pOutputRegion->h);
		return FALSE;
	}
	rtd_printk(KERN_EMERG, TAG_NAME, "[VT info]HAL_VT_SetVideoFrameOutputDeviceOutputRegion:output w=%d,output h=%d,dumplocation=%d\n", pOutputRegion->w,pOutputRegion->h,dumpLocation);

	if((drvif_scaler_get_abnormal_dvs_long_flag()==TRUE)||(drvif_scaler_get_abnormal_dvs_short_flag()==TRUE)){
		rtd_printk(KERN_EMERG, TAG_NAME, "[Warning VBE]%s=%d Vbe at abnormal dvs status,could not do vt capture!\n", __FUNCTION__, __LINE__);
		return FALSE;			
	}
	down(&VR_Semaphore);
	if(get_vr_function() == TRUE) {
#if 1

		if((dumpLocation==VRDumpLocation)&&(pOutputRegion->w==curCapInfo.capWid)&&(pOutputRegion->h==curCapInfo.capLen)) {
			rtd_printk(KERN_EMERG, TAG_NAME, "all SetVideoFrameOutputDeviceOutputRegion is the same with now\n");
		} else if((pOutputRegion->x!=0)||(pOutputRegion->y!=0)) {
			rtd_printk(KERN_EMERG, TAG_NAME, "[warning]only support output region x y is 0\n");
			up(&VR_Semaphore);
			return FALSE;
		} else if((pOutputRegion->w>(Get_DISP_DEN_END_HPOS() - Get_DISP_DEN_STA_HPOS()))||(pOutputRegion->w<60)||(pOutputRegion->h>(Get_DISP_DEN_END_VPOS() - Get_DISP_DEN_STA_VPOS()))||(pOutputRegion->h<34)) {
			rtd_printk(KERN_EMERG, TAG_NAME, "[warning]OutputRegion over limitation!!!!\n");
			up(&VR_Semaphore);
			return FALSE;
		} else {

			curCapInfo.enable = 0; //close vfod first then rerun
			drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
			curCapInfo.enable = 1;
#if 0
			if(dumpLocation==KADP_VR_DISPLAY_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_PQ;
			else if(dumpLocation==KADP_VR_SCALER_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_NOPQ;
			else if(dumpLocation==KADP_VR_OSDVIDEO_OUTPUT)
				curCapInfo.capSrc =  VT_CAP_SRC_VIDEO_OSD;
#endif
			curCapInfo.capSrc = dumpLocation;
			curCapInfo.capWid = pOutputRegion->w;
			curCapInfo.capLen = pOutputRegion->h;
			drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
			if(dumpLocation==KADP_VR_SCALER_OUTPUT)
				VFODState.bAppliedPQ = FALSE;
			else
				VFODState.bAppliedPQ = TRUE;

			VRDumpLocation = dumpLocation;

			if(VFODState.bFreezed == TRUE)
			{
				set_vr_vfod_freezed(TRUE);//revert freezed status
			}
			
		}
	#endif
		up(&VR_Semaphore);

		return TRUE;
	} else {
		rtd_printk(KERN_EMERG, TAG_NAME, "VT is not Inited So return False;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return FALSE;
	}
}

#include <linux/hrtimer.h>
unsigned char HAL_VR_WaitVsync(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	if(get_vr_function() == TRUE) {
		unsigned int sleeptime;
		
		unsigned int vtframerate;
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
		struct timespec64 timeout_s;
#else
		struct timespec timeout_s;
#endif
		unsigned int waitvsyncframerate;
		vtframerate = Get_VFOD_FrameRateVr();/*Get_VFOD_FrameRateVr not return 0*/


		if(VFODState.framerateDivide !=0)
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
	return TRUE;
}

unsigned char HAL_VR_GetInputVideoInfo(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_INPUT_VIDEO_INFO_T *pInputVideoInfo)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	if(get_vr_function() == TRUE) {
		pInputVideoInfo->region.x = 0;
		pInputVideoInfo->region.y = 0;
		pInputVideoInfo->region.w =Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPH_ACT_WID_PRE);
		pInputVideoInfo->region.h = Scaler_DispGetInputInfoByDisp(SLR_MAIN_DISPLAY, SLR_INPUT_IPV_ACT_LEN_PRE);
		if (Scaler_DispGetStatus(SLR_MAIN_DISPLAY, SLR_DISP_INTERLACE) == TRUE)
		{
			pInputVideoInfo->type = KADP_VR_VIDEO_PROGRESSIVE;
			pInputVideoInfo->region.h = pInputVideoInfo->region.h *2;
		} else {
			pInputVideoInfo->type = KADP_VR_VIDEO_PROGRESSIVE;
		}
		pInputVideoInfo->bIs3DVideo = FALSE;
		up(&VR_Semaphore);
		return TRUE;
	} else {
		pInputVideoInfo->region.x = 0;
		pInputVideoInfo->region.y =0;
		pInputVideoInfo->region.w =0;
		pInputVideoInfo->region.h = 0;
		pInputVideoInfo->type = KADP_VR_VIDEO_PROGRESSIVE;
		pInputVideoInfo->bIs3DVideo = FALSE;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VR is not Inited So return InputVideoregion 0;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return FALSE;
	}
}

unsigned char HAL_VR_GetOutputVideoInfo(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, KADP_VR_OUTPUT_VIDEO_INFO_T *pOutputVideoInfo)
{
	ppoverlay_main_active_h_start_end_RBUS main_active_h_start_end_reg;
	ppoverlay_main_active_v_start_end_RBUS main_active_v_start_end_reg;
	unsigned int x,y,w,h;
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	main_active_h_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_H_Start_End_reg);
	main_active_v_start_end_reg.regValue = rtd_inl(PPOVERLAY_MAIN_Active_V_Start_End_reg);
	x = main_active_h_start_end_reg.mh_act_sta;
	y =main_active_v_start_end_reg.mv_act_sta;
	w =main_active_h_start_end_reg.mh_act_end - main_active_h_start_end_reg.mh_act_sta;
	h = main_active_v_start_end_reg.mv_act_end - main_active_v_start_end_reg.mv_act_sta;

	if(get_vr_function() == TRUE) {
		if((KADP_VR_DISPLAY_OUTPUT==VRDumpLocation)||(KADP_VR_OSDVIDEO_OUTPUT==VRDumpLocation)) {
			pOutputVideoInfo->maxRegion.x = Get_DISP_ACT_STA_HPOS();
			pOutputVideoInfo->maxRegion.y = Get_DISP_ACT_STA_VPOS();
			pOutputVideoInfo->maxRegion.w = Get_DISP_ACT_END_HPOS() - Get_DISP_ACT_STA_HPOS();
			pOutputVideoInfo->maxRegion.h = Get_DISP_ACT_END_VPOS() - Get_DISP_ACT_STA_VPOS();

			pOutputVideoInfo->activeRegion.x = x;
			pOutputVideoInfo->activeRegion.y = y;
			pOutputVideoInfo->activeRegion.w = w;
			pOutputVideoInfo->activeRegion.h = h;
			pOutputVideoInfo->type = KADP_VR_VIDEO_PROGRESSIVE;
		} else if(KADP_VR_SCALER_OUTPUT==VRDumpLocation) {
			pOutputVideoInfo->maxRegion.x = x;
			pOutputVideoInfo->maxRegion.y = y;
			pOutputVideoInfo->maxRegion.w = w;
			pOutputVideoInfo->maxRegion.h = h;

			pOutputVideoInfo->activeRegion.x = x;
			pOutputVideoInfo->activeRegion.y = y;
			pOutputVideoInfo->activeRegion.w = w;
			pOutputVideoInfo->activeRegion.h = h;

			pOutputVideoInfo->type = KADP_VR_VIDEO_PROGRESSIVE;
		}
		up(&VR_Semaphore);
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

		pOutputVideoInfo->type = KADP_VR_VIDEO_PROGRESSIVE;
		up(&VR_Semaphore);
		rtd_printk(KERN_NOTICE, TAG_NAME, "VR is not Inited So return OutputVideoregion 0;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
}

unsigned char HAL_VR_GetVideoMuteStatus(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char *pbOnOff)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VR_Semaphore);
	if(get_vr_function() == TRUE) {
		*pbOnOff = get_vsc_mutestatus();
		up(&VR_Semaphore);
		return TRUE;
	} else {
		*pbOnOff = TRUE;
		rtd_printk(KERN_NOTICE, TAG_NAME, "VT is not Inited So return MuteStatus true;%s=%d\n", __FUNCTION__, __LINE__);
		up(&VR_Semaphore);
		return FALSE;
	}
}
static unsigned char VdecSecureStatus = FALSE;

void set_vr_vdec_securestatus(unsigned char value)
{
	VdecSecureStatus = value;
}

unsigned char get_vr_vdec_securestatus(void)
{
	return VdecSecureStatus;
}

unsigned char HAL_VR_GetVideoFrameBufferSecureVideoState(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char *pIsSecureVideo)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}

	if (Get_DisplayMode_Src(SLR_MAIN_DISPLAY) == VSC_INPUTSRC_VDEC) {
		* pIsSecureVideo = get_vr_vdec_securestatus();
	} else {
		* pIsSecureVideo = FALSE;
	}
	return TRUE;
}


static unsigned char VRBlockStatus = FALSE;
unsigned char HAL_VR_GetVideoFrameOutputDeviceBlockState(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char *pbBlockState)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VRBlock_Semaphore);
	*pbBlockState = VRBlockStatus;
	up(&VRBlock_Semaphore);
	return TRUE;
}

unsigned char HAL_VR_SetVideoFrameOutputDeviceBlockState(KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID, unsigned char bBlockState)
{
	if(videoWindowID != KADP_VR_VIDEO_WINDOW_0) {
		rtd_printk(KERN_NOTICE, TAG_NAME, "videoWindowID id is not ok;%s=%d\n", __FUNCTION__, __LINE__);
		return FALSE;
	}
	down(&VRBlock_Semaphore);
	VRBlockStatus = bBlockState;
	up(&VRBlock_Semaphore);
	return TRUE;
}

unsigned char HAL_VR_set_Pixel_Format(VR_CAP_FMT value)
{
	down(&VR_Semaphore);
	if((value >= VR_CAP_RGB888)&&(value <= VR_CAP_NV16)) {
		if (value != get_VR_Pixel_Format()) {
			set_VR_Pixel_Format(value);
			/*close vt, and release last pixel format buffer start*/
			curCapInfo.enable = 0; //iMode;
			drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);
			Capture_BufferMemDeInit_VR(get_vr_VrBufferNum());
			/*close vt, and release last pixel format buffer end*/

			/*open vt, and allocate new pixel format buffer start*/
			curCapInfo.enable = 1; //iMode;		
			if (Capture_BufferMemInit_VR(get_vr_VrBufferNum()) == FALSE) {
				rtd_printk(KERN_NOTICE, TAG_NAME, "VT init allocate memory fail when set_VT_Pixel_Format;%s=%d \n", __FUNCTION__, __LINE__);
				up(&VR_Semaphore);
				return FALSE;
			}
			drvif_Vr_DC2H_dispD_CaptureConfig(curCapInfo);	
			/*open vt, and allocate new pixel format buffer end*/
		}
		up(&VR_Semaphore);
		return TRUE;
	} else {
		up(&VR_Semaphore);
		return FALSE;
	}
}

/* =======================================VR_BUFFER_DUMP_DEBUG======================================================*/
#define VR_FILE_PATH "/tmp/VrCapture.raw"

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

int vr_dump_data_to_file(unsigned int bufferindex, unsigned int size)
{
	struct file* filp = NULL;
	unsigned long outfileOffset = 0;
	if (CaptureCtrl_VR.cap_buffer[bufferindex].cache != NULL) {
		rtd_printk(KERN_EMERG, TAG_NAME,"\n\n\n\n *****************  vr_dump_data_to_file start  ******%lx***************\n\n\n\n",(unsigned long)CaptureCtrl_VR.cap_buffer[bufferindex].cache);
		filp = file_open(VR_FILE_PATH, O_RDWR | O_CREAT, 0);
		if (filp == NULL) {
			rtd_printk(KERN_NOTICE, TAG_NAME,"file open fail\n");
			return FALSE;
		}
		file_write(filp, outfileOffset, (unsigned char*)CaptureCtrl_VR.cap_buffer[bufferindex].cache, size);
		file_sync(filp);
		file_close(filp);
		rtd_printk(KERN_EMERG, TAG_NAME,"\n\n\n\n *****************  vr_dump_data_to_file end  *********************\n\n\n\n");
		return TRUE;
	} else {
		rtd_printk(KERN_EMERG, TAG_NAME,"\n\n\n\n *****************  vr_dump_data_to_file NG for null buffer address  *********************\n\n\n\n");
		return FALSE;
	}
}
/* =======================================VR_BUFFER_DUMP_DEBUG======================================================*/

unsigned int VIVR_PM_REGISTER_DATA[][2]
=
{
};

#ifdef CONFIG_PM
static int vivr_suspend (struct device *p_dev)
{
	int i,size;

	size = (sizeof(VIVR_PM_REGISTER_DATA)/4)/2;
	for(i=0; i<size; i++)
	{
		VIVR_PM_REGISTER_DATA[i][1]=rtd_inl(VIVR_PM_REGISTER_DATA[i][0]);
	}
	return 0;
}

static int vivr_resume (struct device *p_dev)
{
	int i, size;
	size = (sizeof(VIVR_PM_REGISTER_DATA)/4)/2;
	for(i=0; i<size; i++)
	{
		rtd_outl(VIVR_PM_REGISTER_DATA[i][0],VIVR_PM_REGISTER_DATA[i][1]);
	}
	return 0;
}
#endif

int vivr_open(struct inode *inode, struct file *filp) {
	return 0;
}

ssize_t  vivr_read(struct file *filep, char *buffer, size_t count, loff_t *offp)
{
	return 0;

}

ssize_t vivr_write(struct file *filep, const char *buffer, size_t count, loff_t *offp)
{
	return 0;
}

int vivr_release(struct inode *inode, struct file *filep)
{
	return 0;
}

long vivr_ioctl(struct file *file, unsigned int cmd,  unsigned long arg)
{
	int retval = 0;
	if (_IOC_TYPE(cmd) != VR_IOC_MAGIC || _IOC_NR(cmd) > VR_IOC_MAXNR) return -ENOTTY ;
	
	switch (cmd)
	{
		case VR_IOC_INIT:
		{
			if(HAL_VR_Init()==FALSE)
				retval = -1;
			break;
		}
		case VR_IOC_INITEX:
		{
			unsigned int buffernum;
			if(copy_from_user((void *)&buffernum, (const void __user *)arg, sizeof(unsigned int)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_INITEX failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_InitEx(buffernum)==FALSE)
					retval =  -1;
			}
			break;
		}		
		case VR_IOC_FINALIZE:
		{
			//addr = *((unsigned int *)arg);
			if(HAL_VR_Finalize()==FALSE)
				retval = -1;
			break;
		}
		case VR_IOC_GET_DEVICE_CAPABILITY:
		{
			KADP_VR_DEVICE_CAPABILITY_INFO_T DeviceCapabilityInfo;
			if(HAL_VR_GetDeviceCapability(&DeviceCapabilityInfo)==FALSE) {
				retval = -1;
			} else {
				if(copy_to_user((void __user *)arg, (void *)&DeviceCapabilityInfo, sizeof(KADP_VR_DEVICE_CAPABILITY_INFO_T)))
				{
					retval = -EFAULT;
					rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_DEVICE_CAPABILITY failed!!!!!!!!!!!!!!!\n");
				}
			}

			break;
		}
		case VR_IOC_GET_VFB_CAPABILITY:
		{
			KADP_VR_VFB_CAPINFO_T vfb_capinfo;
			if(copy_from_user((void *)&vfb_capinfo, (const void __user *)arg, sizeof(KADP_VR_VFB_CAPINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFB_CAPABILITY failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameBufferCapability(vfb_capinfo.wid,&vfb_capinfo.vfbCapInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfb_capinfo, sizeof(KADP_VR_VFB_CAPINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFB_CAPABILITY failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VR_IOC_GET_VFOD_CAPABILITY:
		{
			KADP_VR_VFOD_CAPINFO_T vfod_capinfo;
			if(copy_from_user((void *)&vfod_capinfo, (const void __user *)arg, sizeof(KADP_VR_VFOD_CAPINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFOD_CAPABILITY failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameOutputDeviceCapability(vfod_capinfo.wid,&vfod_capinfo.vfodCapInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfod_capinfo, sizeof(KADP_VR_VFOD_CAPINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFOD_CAPABILITY failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VR_IOC_GET_VFOD_LIMITATION:
		{
			KADP_VR_VFOD_LIMITATIONINFO_T vfod_limitationinfo;
			if(copy_from_user((void *)&vfod_limitationinfo, (const void __user *)arg, sizeof(KADP_VR_VFOD_LIMITATIONINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFOD_LIMITATION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameOutputDeviceLimitation(vfod_limitationinfo.wid,&vfod_limitationinfo.vfodlimitationInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfod_limitationinfo, sizeof(KADP_VR_VFOD_LIMITATIONINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFOD_LIMITATION failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VR_IOC_GET_ALLVFB_PROPERTY:
		{
			KADP_VR_VFB_PROPERTY_T vfb_property;
			if(copy_from_user((void *)&vfb_property, (const void __user *)arg, sizeof(KADP_VR_VFB_PROPERTY_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_ALLVFB_PROPERTY failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetAllVideoFrameBufferProperty(vfb_property.wid,&vfb_property.vfbProInfo)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfb_property, sizeof(KADP_VR_VFB_PROPERTY_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_ALLVFB_PROPERTY failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VR_IOC_GET_VFB_INDEX:
		{
			KADP_VR_GET_VFBINDEX_T vfb_index;
			if(copy_from_user((void *)&vfb_index, (const void __user *)arg, sizeof(KADP_VR_GET_VFBINDEX_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFB_INDEX failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameBufferIndex(vfb_index.wid,&vfb_index.IndexCurVFB)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfb_index, sizeof(KADP_VR_GET_VFBINDEX_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFB_INDEX failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VR_IOC_GET_VFOD_STATE:
		{
			KADP_VR_VFOD_GET_STATEINFO_T vfodgetstateinfo;
			if(copy_from_user((void *)&vfodgetstateinfo, (const void __user *)arg, sizeof(KADP_VR_VFOD_GET_STATEINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFOD_STATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameOutputDeviceState(vfodgetstateinfo.wid,&vfodgetstateinfo.VFODstate)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetstateinfo, sizeof(KADP_VR_VFOD_GET_STATEINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFOD_STATE failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VR_IOC_SET_VFOD_STATE:
		{
			KADP_VR_VFOD_SET_STATEINFO_T vfodsetstateinfo;
			if(copy_from_user((void *)&vfodsetstateinfo, (const void __user *)arg, sizeof(KADP_VR_VFOD_SET_STATEINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_SET_VFOD_STATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_SetVideoFrameOutputDeviceState(vfodsetstateinfo.wid,vfodsetstateinfo.vfodStateFlag,&vfodsetstateinfo.VFODstate)==FALSE)
					retval =-1;
			}

			break;
		}
		case VR_IOC_GET_VFOD_FRAMERATE:
		{
			KADP_VR_VFOD_GET_FRAMERATE_T vfodgetfr;
			if(copy_from_user((void *)&vfodgetfr, (const void __user *)arg, sizeof(KADP_VR_VFOD_GET_FRAMERATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFOD_FRAMERATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameOutputDeviceFramerate(vfodgetfr.wid,&vfodgetfr.framerate)==FALSE) {
					retval = -1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetfr, sizeof(KADP_VR_VFOD_GET_FRAMERATE_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFOD_FRAMERATE failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VR_IOC_GET_VFOD_DUMPLOCATION:
		{
			KADP_VR_VFOD_GET_DUMPLOCATION_T vfodgetdumplocation;
			if(copy_from_user((void *)&vfodgetdumplocation, (const void __user *)arg, sizeof(KADP_VR_VFOD_GET_DUMPLOCATION_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFOD_DUMPLOCATION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameOutputDeviceDumpLocation(vfodgetdumplocation.wid,&vfodgetdumplocation.DumpLocation)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetdumplocation, sizeof(KADP_VR_VFOD_GET_DUMPLOCATION_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFOD_DUMPLOCATION failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VR_IOC_SET_VFOD_DUMPLOCATION:
		{
			KADP_VR_VFOD_SET_DUMPLOCATION_T vfodsetdumplocation;
			if(copy_from_user((void *)&vfodsetdumplocation, (const void __user *)arg, sizeof(KADP_VR_VFOD_SET_DUMPLOCATION_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_SET_VFOD_DUMPLOCATION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_SetVideoFrameOutputDeviceDumpLocation(vfodsetdumplocation.wid,vfodsetdumplocation.DumpLocation)==FALSE)
					retval =-1;
			}

			break;
		}
		case VR_IOC_GET_VFOD_OUTPUTINFO:
		{
			KADP_VR_VFOD_GET_OUTPUTINFO_T vfodgetoututinfo;
			if(copy_from_user((void *)&vfodgetoututinfo, (const void __user *)arg, sizeof(KADP_VR_VFOD_GET_OUTPUTINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFOD_OUTPUTINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameOutputDeviceOutputInfo(vfodgetoututinfo.wid,vfodgetoututinfo.DumpLocation,&vfodgetoututinfo.OutputInfo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodgetoututinfo, sizeof(KADP_VR_VFOD_GET_OUTPUTINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFOD_OUTPUTINFO failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VR_IOC_SET_VFOD_OUTPUTREGION:
		{
			KADP_VR_VFOD_SET_OUTPUTREGION_T vfodsetoututinfo;
			if(copy_from_user((void *)&vfodsetoututinfo, (const void __user *)arg, sizeof(KADP_VR_VFOD_SET_OUTPUTREGION_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_SET_VFOD_OUTPUTREGION failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_SetVideoFrameOutputDeviceOutputRegion(vfodsetoututinfo.wid,vfodsetoututinfo.DumpLocation,&vfodsetoututinfo.OutputRegion)==FALSE)
					retval =-1;
			}

			break;
		}
		case VR_IOC_WAIT_VSYNC:
		{
			KADP_VR_VIDEO_WINDOW_TYPE_T videoWindowID;
			if(copy_from_user((void *)&videoWindowID, (const void __user *)arg, sizeof(KADP_VR_VIDEO_WINDOW_TYPE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vr ioctl code=VR_IOC_WAIT_VSYNC failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_WaitVsync(videoWindowID)==FALSE)
					retval =-1;
			}
			break;
		}
		case VR_IOC_GET_INPUTVIDEOINFO:
		{
			KADP_VR_GET_INPUTVIDEOINFO_T inputvideoinfo;
			if(copy_from_user((void *)&inputvideoinfo, (const void __user *)arg, sizeof(KADP_VR_GET_INPUTVIDEOINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_INPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetInputVideoInfo(inputvideoinfo.wid,&inputvideoinfo.InputVideoInfo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&inputvideoinfo, sizeof(KADP_VR_GET_INPUTVIDEOINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_INPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VR_IOC_GET_OUTPUTVIDEOINFO:
		{
			KADP_VR_GET_OUTPUTVIDEOINFO_T onputvideoinfo;
			if(copy_from_user((void *)&onputvideoinfo, (const void __user *)arg, sizeof(KADP_VR_GET_OUTPUTVIDEOINFO_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vr ioctl code=VR_IOC_GET_OUTPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetOutputVideoInfo(onputvideoinfo.wid,&onputvideoinfo.OutputVideoInfo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&onputvideoinfo, sizeof(KADP_VR_GET_OUTPUTVIDEOINFO_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_OUTPUTVIDEOINFO failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VR_IOC_GET_VIDEOMUTESTATUS:
		{
			KADP_VR_GET_VIDEOMUTESTATUS_T videomutestatus;
			if(copy_from_user((void *)&videomutestatus, (const void __user *)arg, sizeof(KADP_VR_GET_VIDEOMUTESTATUS_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VIDEOMUTESTATUS failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoMuteStatus(videomutestatus.wid,&videomutestatus.bOnOff)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&videomutestatus, sizeof(KADP_VR_GET_VIDEOMUTESTATUS_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VIDEOMUTESTATUS failed!!!!!!!!!!!!!!!\n");
					}
				}
			}

			break;
		}
		case VR_IOC_GET_VFB_SVSTATE:
		{
			KADP_VR_GET_VFBSVSTATE_T vfbsvstatus;
			if(copy_from_user((void *)&vfbsvstatus, (const void __user *)arg, sizeof(KADP_VR_GET_VFBSVSTATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "copy_from_user:scaler vr ioctl code=VR_IOC_GET_VFB_SVSTATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameBufferSecureVideoState(vfbsvstatus.wid,&vfbsvstatus.IsSecureVideo)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfbsvstatus, sizeof(KADP_VR_GET_VFBSVSTATE_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFB_SVSTATE failed!!!!!!!!!!!!!!!\n");
					}
				}
			}
			break;
		}
		case VR_IOC_GET_VFOD_BLOCKSTATE:
		{
			KADP_VR_GET_VFODBLOCKSTATE_T vfodblockstatus;
			if(copy_from_user((void *)&vfodblockstatus, (const void __user *)arg, sizeof(KADP_VR_GET_VFODBLOCKSTATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vr ioctl code=VR_IOC_GET_VFOD_BLOCKSTATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_GetVideoFrameOutputDeviceBlockState(vfodblockstatus.wid,&vfodblockstatus.bBlockState)==FALSE) {
					retval =-1;
				} else {
					if(copy_to_user((void __user *)arg, (void *)&vfodblockstatus, sizeof(KADP_VR_GET_VFODBLOCKSTATE_T)))
					{
						retval = -EFAULT;
						rtd_printk(KERN_DEBUG, TAG_NAME, "copy_to_user:scaler vr ioctl code=VR_IOC_GET_VFOD_BLOCKSTATE failed!!!!!!!!!!!!!!!\n");
					}

				}
			}
			break;
		}
		case VR_IOC_SET_VFOD_BLOCKSTATE:
		{
			KADP_VR_SET_VFODBLOCKSTATE_T setvfodblockstatus;
			if(copy_from_user((void *)&setvfodblockstatus, (const void __user *)arg, sizeof(KADP_VR_SET_VFODBLOCKSTATE_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vr ioctl code=VR_IOC_SET_VFOD_BLOCKSTATE failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_SetVideoFrameOutputDeviceBlockState(setvfodblockstatus.wid,setvfodblockstatus.bBlockState)==FALSE)
					retval =-1;
			}
			break;
		}
		case VR_IOC_VFB_DATASHOW_ONSUBDISP:
		{	
			unsigned char vfbdatashowonsub;
			if(copy_from_user((void *)&vfbdatashowonsub, (const void __user *)arg, sizeof(unsigned char)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vr ioctl code=VR_IOC_VFB_DATASHOW_ONSUBDISP failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				//nothing suppot
			}
			break;
		}
		case VR_IOC_SET_PIXEL_FORMAT:
		{	
			VR_CAP_FMT format;
			if(copy_from_user((void *)&format, (const void __user *)arg, sizeof(VR_CAP_FMT)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vr ioctl code=VR_IOC_SET_PIXEL_FORMAT failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				if(HAL_VR_set_Pixel_Format(format)==FALSE)
					retval =-1;
			}
			break;
		}		
		case VR_IOC_ROWDATA_SHOW_ONSUBDISP:
		{
			KADP_VR_ROWDATA_SHOW_ONSUBDISP_T VR_ROWDATA_SHOW_ONSUBDISP;
			if(copy_from_user((void *)&VR_ROWDATA_SHOW_ONSUBDISP, (const void __user *)arg, sizeof(KADP_VR_ROWDATA_SHOW_ONSUBDISP_T)))
			{
				retval = -EFAULT;
				rtd_printk(KERN_DEBUG, TAG_NAME, "scaler vr ioctl code=VR_IOC_VFB_DATASHOW_ONSUBDISP failed!!!!!!!!!!!!!!!\n");
			}
			else
			{
				//nothing suppot
			}

			break;
		}
		default:
			rtd_printk(KERN_DEBUG, TAG_NAME, "Scaler vr disp: ioctl code = %d is invalid!!!!!!!!!!!!!!!1\n", cmd);
			break ;
		}
	return retval;
}

int vivr_major   = VR_MAJOR;
int vivr_minor   = 0 ;
int vivr_nr_devs = VR_NR_DEVS;

module_param(vivr_major, int, S_IRUGO);
module_param(vivr_minor, int, S_IRUGO);
module_param(vivr_nr_devs, int, S_IRUGO);


static struct class *vivr_class = NULL;
static struct platform_device *vivr_platform_devs = NULL;

struct file_operations vivr_fops= {
	.owner =    THIS_MODULE,
	.open  =    vivr_open,
	.release =  vivr_release,
	.read  =    vivr_read,
	.write = 	vivr_write,
	.unlocked_ioctl = 	vivr_ioctl,
};

#ifdef CONFIG_PM
static const struct dev_pm_ops vivr_pm_ops =
{
	.suspend    = vivr_suspend,
	.resume     = vivr_resume,
#ifdef CONFIG_HIBERNATION
	.freeze 	= vivr_suspend,
	.thaw		= vivr_resume,
	.poweroff	= vivr_suspend,
	.restore	= vivr_resume,
#endif

};
#endif

static struct platform_driver vivr_device_driver = {
    .driver = {
        .name       = VR_DEVICE_NAME,
        .bus        = &platform_bus_type,
#ifdef CONFIG_PM
	.pm 		= &vivr_pm_ops,
#endif

    },
} ;


static char *vivr_devnode(struct device *dev, mode_t *mode)
{
	*mode =0666;
	return NULL;
}

int vivr_init_module(void)
{
	int result;
  	int devno;
	dev_t dev = 0;

	rtd_printk(KERN_DEBUG, TAG_NAME, "\n\n\n\n *****************  vr init module  *********************\n\n\n\n");
	if (vivr_major) {
		dev = MKDEV(vivr_major, vivr_minor);
		result = register_chrdev_region(dev, vivr_nr_devs, VR_DEVICE_NAME);
	} else {
		result = alloc_chrdev_region(&dev, vivr_minor, vivr_nr_devs,VR_DEVICE_NAME);
		vivr_major = MAJOR(dev);
	}
	if (result < 0) {
		rtd_printk(KERN_DEBUG, TAG_NAME, "vr: can't get major %d\n", vivr_major);
		return result;
	}

	rtd_printk(KERN_DEBUG, TAG_NAME, "vr init module major number = %d\n", vivr_major);

	vivr_class = class_create(THIS_MODULE,VR_DEVICE_NAME);

	if (IS_ERR(vivr_class))
	{
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevr: can not create class...\n");
		result = PTR_ERR(vivr_class);
		goto fail_class_create;
	}

	vivr_class->devnode = (void *)vivr_devnode;

	vivr_platform_devs = platform_device_register_simple(VR_DEVICE_NAME, -1, NULL, 0);

    	if((result=platform_driver_register(&vivr_device_driver)) != 0){
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevr: can not register platform driver...\n");
		result = -ENOMEM;
		goto fail_platform_driver_register;
    	}

    	devno = MKDEV(vivr_major, vivr_minor);
    	cdev_init(&vivr_cdev, &vivr_fops);
    	vivr_cdev.owner = THIS_MODULE;
   	vivr_cdev.ops = &vivr_fops;
	result = cdev_add (&vivr_cdev, devno, 1);
	if (result<0)
	{
		rtd_printk(KERN_DEBUG, TAG_NAME, "scalevr: can not add character device...\n");
		goto fail_cdev_init;
	}
    	device_create(vivr_class, NULL, MKDEV(vivr_major, 0), NULL, VR_DEVICE_NAME);
	sema_init(&VR_Semaphore, 1);
	sema_init(&VRBlock_Semaphore, 1);
    return 0;	//success

fail_cdev_init:
	platform_driver_unregister(&vivr_device_driver);
fail_platform_driver_register:
	platform_device_unregister(vivr_platform_devs);
	vivr_platform_devs = NULL;
	class_destroy(vivr_class);
fail_class_create:
	vivr_class = NULL;
	unregister_chrdev_region(vivr_devno, 1);
	return result;
}

void __exit vivr_cleanup_module(void)
{
	dev_t devno = MKDEV(vivr_major, vivr_minor);
	rtd_printk(KERN_DEBUG, TAG_NAME, "rtice clean module vr_major = %d\n", vivr_major);
  	device_destroy(vivr_class, MKDEV(vivr_major, 0));
  	class_destroy(vivr_class);
	vivr_class = NULL;
	cdev_del(&vivr_cdev);
   	/* device driver removal */
	if(vivr_platform_devs) {
		platform_device_unregister(vivr_platform_devs);
		vivr_platform_devs = NULL;
	}
  	platform_driver_unregister(&vivr_device_driver);
	/* cleanup_module is never called if registering failed */
	unregister_chrdev_region(devno, vivr_nr_devs);
}

module_init(vivr_init_module);
module_exit(vivr_cleanup_module);
