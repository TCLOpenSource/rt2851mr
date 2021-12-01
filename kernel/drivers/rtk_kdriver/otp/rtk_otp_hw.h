#ifndef __RTK_OTP_HW_H__
#define __RTK_OTP_HW_H__

int rtk_otp_hw_read(unsigned int ofst, unsigned int *pval);
int rtk_otp_hw_crc(unsigned int start_ofst, unsigned int len, unsigned int *pval);

#endif