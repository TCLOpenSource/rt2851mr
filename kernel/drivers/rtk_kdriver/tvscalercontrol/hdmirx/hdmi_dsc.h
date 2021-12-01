#ifndef __HDMI_DSC_H__
#define __HDMI_DSC_H__

#include "hdmi_common.h"

///////////////////////////////////////////////////////////////////////////////////////
#define DSC_PPS_LEN         128


typedef struct 
{
    // PPS0
    unsigned char   dsc_version_minor:4;  // [3:0]
    unsigned char   dsc_version_major:4;  // [7:4]
    
    // PPS1
    unsigned char   pps_identifier;
    
    // PPS2
    unsigned char   reserved;
    
    // PPS3    
    unsigned char   line_buffer_depth  : 4;  // [3:0]
    unsigned char   bits_per_component : 4;  // [7:4]
    
    // PPS4~5
    unsigned char   reserved2 : 2;
    unsigned short  block_pred_enable : 1;      
    unsigned short  convert_rgb  : 1;      
    unsigned short  simple_422  : 1;      
    unsigned short  vbr_enable  : 1;      
    unsigned short  bits_per_pixel  : 10;  
    
    // PPS6~7
    unsigned short  pic_height;
    
    // PPS8~9
    unsigned short  pic_width;

    // PPS10-11
    unsigned short  slice_height;

    // PPS12-13
    unsigned short  slice_width;
    
    // PPS14-15
    unsigned short  chunk_size;
    
    // PPS16-17
    unsigned short  reserved_16:6;
    unsigned short  initial_xmit_delay:10; 

    // PPS18-19
    unsigned short  initial_dec_delay;
    
    // PPS20-21
    unsigned short  reserved_20:10;    
    unsigned short  initial_scale_value:6;
    
    // PPS22-23
    unsigned short  scale_increment_interval;
    
    // PPS24-25
    unsigned short  reserved_24:4;    
    unsigned short  scale_decrement_interval:12;    
        
    // PPS26-27
    unsigned short  reserved_26:11;    
    unsigned short  first_line_bpg_offset:5;  
        
    // PPS28-29
    unsigned short  nfl_bpg_offset;    
    
    // PPS30-31
    unsigned short  slice_bpg_offset;          
    
    // PPS32-33
    unsigned short  initial_offset;
    
    // PPS34-35
    unsigned short  final_offset;
    
    // PPS36
    unsigned char  reserved_36:3;    
    unsigned char  flatness_min_qp:5;    
        
    // PPS37        
    unsigned char  flatness_max_qp:5; 
    unsigned char  reserved_37:3;         
        
    // PPS38 - 87
    unsigned char   rc_parameter_set[50];  
    
    // PPS88
    unsigned char   native_422:1;
    unsigned char   native_420:1;    
    unsigned char   reserved_88:6;
    
    // PPS89
    unsigned char   second_line_bpg_offset:5;    
    unsigned char   reserved_89:3;
            
    // PPS90~91
    unsigned short  nsl_bpg_offset;        

    // PPS92~93
    unsigned short  second_line_offset_adj;    
                        
    // PPS94~127
    unsigned char   reserved_94_127[34];
}DSC_PPS;

///////////////////////////////////////////////////////////////////////////////////////
extern void _parse_dsc_pps(unsigned char pps[DSC_PPS_LEN], DSC_PPS* p_pps);
extern void _dump_dsc_pps(DSC_PPS* p_pps);

///////////////////////////////////////////////////////////////////////////////////////
extern void lib_hdmi_dsc_crt_on(void);
extern void lib_hdmi_dsc_double_buffer_enable(unsigned char enable);
extern void lib_hdmi_dsc_fw_mode_enable(unsigned char enable);
extern void lib_hdmi_dsc_set_fw_pps(unsigned char pps[DSC_PPS_LEN]);
extern void lib_hdmi_dsc_get_cur_pps(unsigned char pps[DSC_PPS_LEN]);
extern void lib_hdmi_dsc_enable(unsigned char enable);

///////////////////////////////////////////////////////////////////////////////////////
extern void newbase_hdmi_hd21_dsc_enanble(unsigned char port, unsigned char enable);

///////////////////////////////////////////////////////////////////////////////////////

//#define HDMI_DSC_DEBUG_EN
#ifdef  HDMI_DSC_DEBUG_EN
#define HDMI_DSC_DBG(fmt, args...)      HDMI_INFO(fmt, ## args)
#else
#define HDMI_DSC_DBG(fmt, args...)
#endif

#define HDMI_DSC_INFO(fmt, args...)      HDMI_INFO(fmt, ## args)

#endif //__HDMI_DSC_H__
