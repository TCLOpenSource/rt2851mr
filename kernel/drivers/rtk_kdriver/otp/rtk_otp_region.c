#include <linux/kernel.h>
#include <linux/printk.h>
#include <linux/delay.h>
#include <linux/io.h>
#include <linux/slab.h>
#include <linux/mutex.h>
#include <rtk_kdriver/rtk_otp_util.h>
#include <rtk_kdriver/rtk_otp_region.h>
#include "rtk_otp_region_priv.h"

static OTP_REGION_INFO g_otp_region_table[] = {
		{OTP_REGION_HDR_DISABLE_ORI,  930, 2, "dobly_version"},
		{OTP_REGION_HDR_DISABLE_REMK,  1090, 2, "dobly_version_remark"},
		{OTP_REGION_REMARK_EN,  1247, 1, "remark_en"},
		{OTP_REGION_HDCP_1_4_BKSV_KEY,  6688, 40, "HDCP_1_4_BKSV_Key"},
		{OTP_REGION_HDCP_1_4_PRIVATE_KEY,  6728, 2560, "HDCP_1_4_Private_Key"},
		{OTP_REGION_HDCP_2_2_KEY,  9312, 7024, "HDCP_2_2_Key"},
		{OTP_REGION_HDCP_2_2_BKSB_KEY,  16336, 40, "HDCP_2_2_BKSB_Key"},
		{OTP_REGION_NNIP_DISABLE_ORI,  943, 1, "NNIP_DISABLE_ORI"},
		{OTP_REGION_NNIP_DISABLE_REMK,  1103, 1, "NNIP_DISABLE_REMK"},
		{OTP_REGION_WAFER_CLASS, 6458, 2, "wafer_class"},
};

#define OTP_REGION_TABLE_SIZE (sizeof(g_otp_region_table) / sizeof(g_otp_region_table[0]))

static OTP_REGION_INFO* rtk_otp_region_query_region_ofst(OTP_REGION_ID region_id)
{
	unsigned int i = 0;
	unsigned int len = OTP_REGION_TABLE_SIZE;
	for(i = 0; i < len; i++) {
		if(g_otp_region_table[i].region_id == region_id)
			return &g_otp_region_table[i];
	}
	return NULL;
}


int rtk_otp_region_read(OTP_REGION_ID region_id, unsigned char *data, unsigned int len)
{
    int ret = -1;
    OTP_REGION_INFO *region_info = NULL;
    unsigned char *buf = NULL;
    unsigned int byte_ofst = 0;
    unsigned int bit_ofst = 0;
    unsigned int byte_len = 0;
	
    if (!data || !len)
        return ret;

    memset(data, 0, len);

    region_info = rtk_otp_region_query_region_ofst(region_id);
    if(!region_info)
	return ret;

    if(region_info->ofst < 0 || region_info->len <= 0)
	return ret;

    byte_ofst = region_info->ofst / 8;
    bit_ofst = region_info->ofst % 8;
    byte_len = (bit_ofst + region_info->len - 1) / 8 + 1;

    buf = (unsigned char *)kmalloc(byte_len + 1, GFP_KERNEL);
    if(!buf)
		return ret;
    memset(buf, 0, byte_len + 1);

    ret = otp_read_region_byte(byte_ofst, buf, byte_len); 
    if(ret == 0) {
	unsigned int copy_len = 0;
	if(bit_ofst) {
		unsigned int i = 0;
		for(i = 0; i < byte_len; i++) {
			unsigned char tmp = 0;
			buf[i] = (buf[i] >> bit_ofst);
			tmp = (buf[i + 1] << (8 - bit_ofst));
			buf[i] = tmp | buf[i];
		}
	}
	if(region_info->len % 8) {
		unsigned char tmp  = 0;
		byte_ofst = region_info->len /8;
		bit_ofst = region_info->len % 8;
		tmp = (buf[byte_ofst] << (8 - bit_ofst));
		buf[byte_ofst] = (tmp >> (8 - bit_ofst));
	}
	copy_len = (region_info->len - 1) / 8 + 1;
	memcpy(data, buf, (copy_len > len) ? len : copy_len);
    }
    kfree(buf);
    return ret;
}



