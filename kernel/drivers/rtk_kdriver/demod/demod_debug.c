#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/platform_device.h>
#include <linux/poll.h>
#include <asm/cacheflush.h>
#include <linux/proc_fs.h>

#include "comm.h"
#include "tuner.h"
#include "demod.h"
#include "demod_rtk_all.h"
#include "demod_rtk_common.h"

#include "DemodMgr.h"
#include "demod_debug.h"

extern PS_RTK_DEMOD_DATA pDemod_globe;


SRTK_DEMOD_DEBUG_CMD Demod_debug_cmd[DEMOD_PROC_COUNT + 1]={{"log_onoff=",    DEMOD_PROC_SETLOGONOFF},
														{"check_lock=",   DEMOD_PROC_GETLOCK},
														{"check_offset=", DEMOD_PROC_GETCROFFSET},
	{"NULL",          DEMOD_PROC_COUNT}
};


unsigned char demod_log_onoff = 0;
RTK_DEMOD_GET_SIGNAL_INFO get_signal_info_data;
TV_SIG_QUAL quality_temp;


ssize_t demod_proc_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
{
	unsigned char str[128];
	U32BITS i;
	unsigned char *cmd = str;
	unsigned int input_data;

	/* check parameter */
	if (buf == NULL) {
		DEMOD_MGR_WARNING("buf=%p\n", buf);
		return -EFAULT;
	}

	if (count == 0) {
		DEMOD_MGR_WARNING("command should > 0\n");
		return -EINVAL;
	}
	
	if (count > 128) { /* procfs write and read has PAGE_SIZE limit */
		DEMOD_MGR_WARNING("command too large, set length to 128 Byte\n");
		count = 128;
	}

	if (copy_from_user(str, buf, count)) {
		DEMOD_MGR_WARNING("copy_from_user failed! (buf=%p, count="PT_UDEC_DUADDRESS")\n", buf, count);
		return -EFAULT;
	}

	str[count-1] = '\0';
#if 1
	DEMOD_MGR_DBG("proc data: %s\n", str);
#endif

	/* get command string */
	for (i = 0; i < DEMOD_PROC_COUNT; i++) {
		//DEMOD_MGR_DBG("[%d]%s\n", i, Demod_debug_cmd[i].demod_cmd_str);
		if (strncmp(str, Demod_debug_cmd[i].demod_cmd_str, strlen(Demod_debug_cmd[i].demod_cmd_str)) == 0) {
			DEMOD_MGR_DBG("TP debug command: %s\n", Demod_debug_cmd[i].demod_cmd_str);
			break;
		}
	}

	/* command out of range check */
	if (i >= DEMOD_PROC_COUNT) {
	    DEMOD_MGR_WARNING("Cannot find your command: \"%s\"\n", str);
	    //return -EINVAL; for coverity

	} else {
	    /* get parameter */
	    cmd += strlen(Demod_debug_cmd[i].demod_cmd_str);
		if (sscanf(cmd, "%9u", &input_data) < 1) {
	        DEMOD_MGR_DBG("sscanf get more data failed (%s) - there is no more parameter.\n", cmd);
			//return -EFAULT;
		} else {
			DEMOD_MGR_DBG("input data=%u\n", input_data);
	    }
	}

	switch (i) {
	case DEMOD_PROC_SETLOGONOFF: {
	        demod_log_onoff = (unsigned char)input_data;

		if (input_data == 1) {
	            DEMOD_MGR_WARNING("Enable Demod log\n");
		} else {
	            DEMOD_MGR_WARNING("Disable Demod log\n");
	        }
	        break;
	    }
	case DEMOD_PROC_GETLOCK: {
			unsigned char lock_status = 0;
			if(pDemod_globe->m_pDemod!=NULL)
				pDemod_globe->m_pDemod->GetLockStatus(pDemod_globe->m_pDemod, &lock_status);
			else
				lock_status=0;
	        DEMOD_MGR_WARNING("Lock=%d\n", lock_status);
			break;
	    }
	case DEMOD_PROC_GETCROFFSET: {
			S32BITS offset_value;
			if(pDemod_globe->m_pDemod!=NULL)
				pDemod_globe->m_pDemod->GetCarrierOffset(pDemod_globe->m_pDemod, &offset_value);
			else
				offset_value = 0;
	        DEMOD_MGR_WARNING("Offset="PT_S32BITS"\n", offset_value);
	        break;
	    }
	default: {
	        DEMOD_MGR_WARNING("unsupport proc command=%s\n", str);
	        return -EINVAL;
	    }
    }

    return count;

}

ssize_t demod_proc_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
{
	char *str;
	int len;
	
	char *demod_mode_name[] = {
			"TV_MODULATION_UNKNOWN",
			"TV_MODULATION_NONE",
			"TV_MODULATION_VSB",
			"TV_MODULATION_OFDM",
			"TV_MODULATION_PSK",
			"TV_MODULATION_QAM",
			"TV_MODULATION_DVBC_QAM",
			"TV_MODULATION_DTMB_OFDM",
			"TV_MODULATION_DVBT2_OFDM", 	 // T2OFDM
			"TV_MODULATION_DVBS",
			"TV_MODULATION_DVBS2",
			"TV_MODULATION_ISDBT",			// ISDB-T
			"TV_MODULATION_ISDBS",				  // ISDB-S
			"TV_MODULATION_ABSS",			// ABS-S
			"TV_MODULATION_RTSP",
			"TV_MODULATION_ATV",
		};

	if (*ppos != 0) {
		DEMOD_MGR_WARNING("*ppos!=0 just exit\n");
		return 0;
	}
	DEMOD_MGR_WARNING("demod_proc_read Enter *ppos=0x%llx count=0x"PT_HEX_DUADDRESS"\n", *ppos, count);

	str = kmalloc(DBG_MSG_BUFFER_LENGTH, GFP_KERNEL);
	memset(str, 0, DBG_MSG_BUFFER_LENGTH);

	if (pDemod_globe->m_pDemod != NULL) {
	{
		unsigned char lock_status;
		pDemod_globe->m_pDemod->GetLockStatus(pDemod_globe->m_pDemod, &lock_status);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sLOCK     = %u\n", str, lock_status);
	}
	{
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_SNR, (TV_SIG_QUAL*)&quality_temp);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sSNR      = "PT_U32BITS"."PT_U32BITS"\n", str, quality_temp.snr / 10000, quality_temp.snr % 10000);
	}
	{
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_AGC, (TV_SIG_QUAL*)&quality_temp);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sAGC      = "PT_U32BITS"\n", str, quality_temp.agc);
	}
	{
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_SIGNAL_STRENGTH, (TV_SIG_QUAL*)&quality_temp);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sSTRENGTH = %u\n", str, quality_temp.strength);
	}
	{
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_SIGNAL_QUALITY, (TV_SIG_QUAL*)&quality_temp);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sQUALITY  = %u\n", str, quality_temp.quality);
	}
	{
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_PEC, (TV_SIG_QUAL*)&quality_temp);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sPER_num  = "PT_U32BITS"  PER_den = "PT_U32BITS"", str, quality_temp.layer_per.per_num, quality_temp.layer_per.per_den);
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_PER, (TV_SIG_QUAL*)&quality_temp);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%s PER = "PT_U32BITS"\n", str, quality_temp.per);
	}
	{
			REALTEK_ALL* pRealtekAll;
			pRealtekAll = (REALTEK_ALL*)(pDemod_globe->m_pDemod->private_data);
			if(pRealtekAll->m_output_mode == RTK_DEMOD_OUT_IF_PARALLEL)
				len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sm_output_mode = PARALLEL\n", str);
		else
				len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sm_output_mode = SERIAL\n", str);
	}
	{
		pDemod_globe->m_pDemod->GetSignalInfo(pDemod_globe->m_pDemod, (TV_SIG_INFO*)&get_signal_info_data);
			//len = sprintf(str, "%smod = %s if_freq=%u if_inversion=%u agc_pola=%u\n", str, demod_mode_name[get_signal_info_data.mod], get_signal_info_data.demod_param.if_freq, get_signal_info_data.demod_param.if_inversion, get_signal_info_data.demod_param.agc_pola);
			len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%smod = %s\n", str, demod_mode_name[get_signal_info_data.mod]);
		}
	} else {
		len = snprintf(str, DBG_MSG_BUFFER_LENGTH, "%sInternal demod is not running!!\n", str);
	}

	len = strlen(str);

	if (count > len) {
		if (copy_to_user(buf, str, len)) {
			DEMOD_MGR_WARNING("Copy proc data to user space failed\n");
			kfree(str);
			return 0;
		}

		if (*ppos == 0)
			*ppos += len;
		else
			len = 0;
	} else {
		len=0;
	}

	kfree(str);
	DEMOD_MGR_WARNING("demod_proc_read Exit *ppos=0x%llx count=0x"PT_HEX_DUADDRESS" len=0x%x\n", *ppos, count, len);

	return len;
}

void display_dtv_demod_information(void)
{

	/*
	char *demod_mode_name[]=
		{
			"TV_MODULATION_UNKNOWN",
			"TV_MODULATION_NONE",
			"TV_MODULATION_VSB",
			"TV_MODULATION_OFDM",
			"TV_MODULATION_PSK",
			"TV_MODULATION_QAM",
			"TV_MODULATION_DVBC_QAM",
			"TV_MODULATION_DTMB_OFDM",
			"TV_MODULATION_DVBT2_OFDM", 	 // T2OFDM
			"TV_MODULATION_DVBS",
			"TV_MODULATION_DVBS2",
			"TV_MODULATION_ISDBT",			// ISDB-T
			"TV_MODULATION_ISDBS",				  // ISDB-S
			"TV_MODULATION_ABSS",			// ABS-S
			"TV_MODULATION_RTSP",
			"TV_MODULATION_ATV",
		};

	if(pDemod_globe->m_pDemod!=NULL)
	{
		unsigned char lock_status;
		pDemod_globe->m_pDemod->GetLockStatus(pDemod_globe->m_pDemod, &lock_status);
		DEMOD_MGR_EMERG_FORCE("LOCK     = %u\n", lock_status);
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_SNR, (TV_SIG_QUAL*)&quality_temp);
		DEMOD_MGR_EMERG_FORCE("SNR      = "PT_U32BITS"."PT_U32BITS"\n", quality_temp.snr/10000, quality_temp.snr%10000);
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_AGC, (TV_SIG_QUAL*)&quality_temp);
		DEMOD_MGR_EMERG_FORCE("AGC      = "PT_U32BITS"\n", quality_temp.agc);
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_SIGNAL_STRENGTH, (TV_SIG_QUAL*)&quality_temp);
		DEMOD_MGR_EMERG_FORCE("STRENGTH = %u\n", quality_temp.strength);
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_SIGNAL_QUALITY, (TV_SIG_QUAL*)&quality_temp);
		DEMOD_MGR_EMERG_FORCE("QUALITY  = %u\n", quality_temp.quality);
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_PEC, (TV_SIG_QUAL*)&quality_temp);
		DEMOD_MGR_EMERG_FORCE("PER_num  = "PT_U32BITS"  PER_den = "PT_U32BITS"", quality_temp.layer_per.per_num, quality_temp.layer_per.per_den);
		pDemod_globe->m_pDemod->GetSignalQuality(pDemod_globe->m_pDemod, TV_QUAL_PER, (TV_SIG_QUAL*)&quality_temp);
		DEMOD_MGR_EMERG_FORCE("PER = "PT_U32BITS"\n", quality_temp.per);
		pDemod_globe->m_pDemod->GetSignalInfo(pDemod_globe->m_pDemod, (TV_SIG_INFO*)&get_signal_info_data);
		DEMOD_MGR_EMERG_FORCE("mod = %s\n", demod_mode_name[get_signal_info_data.mod]);
	}
	else
	{
		DEMOD_MGR_EMERG_FORCE("Internal demod is not running!!\n");
	}

	*/

}

