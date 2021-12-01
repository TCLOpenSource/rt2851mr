#ifndef __RTK_OTP_REGION_API_H__
#define __RTK_OTP_REGION_API_H__

typedef enum {
    OTP_FIELD_WAFER_CLASS,
}OTP_FIELD_ID;

extern bool rtk_otp_field_read(OTP_FIELD_ID field_id, unsigned char *data, unsigned int len);



bool rtk_is_dobly_Vision_supported(void);
int rtk_get_hdcp_1_4_bksv_key(unsigned char *buf, unsigned int len);
int rtk_get_hdcp_1_4_private_key(unsigned char *buf, unsigned int len);
int rtk_get_hdcp_2_2_key(unsigned char *buf, unsigned int len);
int rtk_get_hdcp_2_2_bksb_key(unsigned char *buf, unsigned int len);
bool rtk_is_NNIP_function_disable(void);

#endif
