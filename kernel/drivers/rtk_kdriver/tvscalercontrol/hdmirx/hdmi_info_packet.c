#include "hdmi_common.h"
#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/uaccess.h>
#include <linux/sched.h>
#include <linux/kthread.h>
#include <linux/freezer.h>
#include <linux/spinlock.h>
#include "hdmi_reg.h"
#include "hdmi_vfe_config.h"
#include "hdmi_info_packet.h"
#include "cea_861.h"
#include "hdmi_hdr.h" // for newbase_hdmi_dolby_vision_enable()

extern HDMI_PORT_INFO_T hdmi_rx[HDMI_PORT_TOTAL_NUM];
extern spinlock_t hdmi_spin_lock;

struct semaphore sem_info_pack;

void  _init_info_pack_sem(void)      { sema_init(&sem_info_pack, 1); }
void  _lock_info_pack_sem(void)      { down(&sem_info_pack); }
void  _unlock_info_pack_sem(void)    { up(&sem_info_pack); }

#ifdef CONFIG_SUPPORT_DOLBY_VSIF
struct semaphore sem_dolby_vsif;
extern DOLBY_HDMI_VSIF_T pre_dolby_hdmi_vsif_mode;

void  _init_dolby_vsif_sem(void)      { sema_init(&sem_dolby_vsif, 1); }
void  _lock_dolby_vsif_sem(void)      { down(&sem_dolby_vsif); }
void  _unlock_dolby_vsif_sem(void)    { up(&sem_dolby_vsif); }
#endif

//-------------------------------------------------------------------------
// Common Part
//-------------------------------------------------------------------------
static INFO_PACKET_CONFIG info_packet_config_array[INFO_TYPE_NUM] =
{
    {INFO_TYPE_AVI, TRUE, TYPE_CODE_AVI_PACKET, MAIN_FSM_HDMI_MEASURE},
    {INFO_TYPE_SPD, TRUE, TYPE_CODE_SPD_PACKET, MAIN_FSM_HDMI_WAIT_SYNC},
    {INFO_TYPE_VSI, TRUE, TYPE_CODE_VS_PACKET, MAIN_FSM_HDMI_MEASURE},
    {INFO_TYPE_DRM, TRUE, TYPE_CODE_DRM_PACKET, MAIN_FSM_HDMI_MEASURE},
    {INFO_TYPE_AUDIO, TRUE, TYPE_CODE_AUDIO_PACKET, MAIN_FSM_HDMI_MEASURE},
    {INFO_TYPE_EMP, TRUE, TYPE_CODE_EMP_PACKET, MAIN_FSM_HDMI_WAIT_SYNC},
    {INFO_TYPE_RSV0, FALSE, TYPE_CODE_AUDIO_SAMPLE_PACKET, MAIN_FSM_HDMI_MEASURE},    //For Audio Sample Packet
    {INFO_TYPE_RSV1, FALSE, TYPE_CODE_HBR_SAMPLE_PACKET, MAIN_FSM_HDMI_MEASURE},       // For HBR Sample Packet
    {INFO_TYPE_RSV2, FALSE, TYPE_CODE_VS_PACKET, MAIN_FSM_HDMI_MEASURE},                      // For HDR10+ VSIF Packet
    {INFO_TYPE_RSV3, FALSE, TYPE_CODE_GENERAL_CONTROL_PACKET,MAIN_FSM_HDMI_MEASURE},   //For sysfs rsv command debugging
};

static RESERVED_PACKET_DATA reserved_data_temp[RESERVED_PACKET_NUM][HDMI_PORT_TOTAL_NUM];
static unsigned int hdmi_amd_freesync_debug_print[HDMI_PORT_TOTAL_NUM];    // for debug print

/*---------------------------------------------------
 * Func : lib_hdmi_read_packet_sram
 *
 * Desc : read packet SRAM
 *
 * Para : nport : HDMI port number
 *        start_addr : start address of packet sram
 *        len   : read length
 *        pbuf  : buffer
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
void lib_hdmi_read_packet_sram(
    unsigned char           nport,
    unsigned int            start_addr,
    unsigned char           len,
    unsigned char*          pbuf
    )
{
    unsigned char i;
    unsigned long flags;

    spin_lock_irqsave(&hdmi_spin_lock, flags);  // add spinlock to prevent racing

    if (hdmi_rx[nport].hdmi_2p1_en)
    {
        for (i=0; i<len; i++)
        {
            hdmi_out(HD21_HDMI_PSAP_reg, start_addr+i);
            pbuf[i] = hdmi_in(HD21_HDMI_PSDP_reg);
        }
    }
    else
    {
        for (i=0; i<len; i++)
        {
            hdmi_out(HDMI_HDMI_PSAP_reg, start_addr+i);
            pbuf[i] = hdmi_in(HDMI_HDMI_PSDP_reg);
        }
    }

    spin_unlock_irqrestore(&hdmi_spin_lock, flags);
}


//-------------------------------------------------------------------------
// FVS
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_fvs_received
 *
 * Desc : check if FVS packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_is_fvs_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HDMI_HDMI_GPVS_get_fvsps(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_fvsps(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_fvs_received_status
 *
 * Desc : clear FVS packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_clear_fvs_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_fvsps_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_fvsps_mask);
    return 0;
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_fvs_info_packet
 *
 * Desc : read HDMI formum VSIF info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : avi output buffer
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_read_fvs_info_packet(
    unsigned char               port,
    unsigned char               pkt_buf[31]
    )
{
    if (!lib_hdmi_is_fvs_received(port) || pkt_buf==NULL)
        return -1;
        
    lib_hdmi_clear_fvs_received_status(port);
    lib_hdmi_read_packet_sram(port, FVS_INFO_OFST, FVS_INFO_LEN, pkt_buf);
    pkt_buf[0] = TYPE_CODE_VS_PACKET;
    return 0;
}

/*---------------------------------------------------
 * Func : lib_hdmi_read_fvs_allm_mode
 *
 * Desc : read ALLM from HDMI forum VSIF info packet
 *
 * Para : nport : HDMI port number
 *        p_allm : allm output buffer
 *
 * Retn : N/A
 *--------------------------------------------------*/
unsigned char lib_hdmi_read_fvs_allm_mode(unsigned char nport)
{
    return HDMI_HDMI_FVS_get_allm_mode(hdmi_in(HDMI_HDMI_FVS_reg));
}

//-------------------------------------------------------------------------
// DVS - Dolby Vendor Specific Info frame
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_dvs_received
 *
 * Desc : check if Dolby Vendor Specific packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_is_dvs_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HDMI_HDMI_GPVS_get_dvsps(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_dvsps(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_dvs_received_status
 *
 * Desc : clear Dolby Vendor Specific packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_clear_dvs_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_dvsps_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_dvsps_mask);
    return 0;
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_dvs_info_packet
 *
 * Desc : read Dolby Vendor Specific info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : avi output buffer
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_read_dvs_info_packet(
    unsigned char               port,
    unsigned char               pkt_buf[31]
    )
{
    if (!lib_hdmi_is_dvs_received(port) || pkt_buf==NULL)
        return -1;
        
    lib_hdmi_clear_dvs_received_status(port);
    lib_hdmi_read_packet_sram(port, DVS_INFO_OFST, DVS_INFO_LEN, pkt_buf);
    pkt_buf[0] = TYPE_CODE_VS_PACKET;
    return 0;
}


//-------------------------------------------------------------------------
// HDR10+ VS - HDR10+ Vendor Specific Info frame
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_hdr10pvs_received
 *
 * Desc : check if HDR10+ Vendor Specific packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_is_hdr10pvs_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HD21_HDMI_GPVS_get_hdr10pvsps(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_hdr10pvsps(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_hdr10pvs_received_status
 *
 * Desc : clear HDR10+ Vendor Specific packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_clear_hdr10pvs_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HD21_HDMI_GPVS_hdr10pvsps_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_hdr10pvsps_mask);
    return 0;
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_hdr10pvs_info_packet
 *
 * Desc : read HDR10+ Vendor Specific info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : avi output buffer
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_read_hdr10pvs_info_packet(
    unsigned char               port,
    unsigned char               pkt_buf[31]
    )
{
    if (!lib_hdmi_is_hdr10pvs_received(port) || pkt_buf==NULL)
        return -1;

    lib_hdmi_clear_hdr10pvs_received_status(port);
    lib_hdmi_read_packet_sram(port, HDR10PVS_INFO_OFST, HDR10PVS_INFO_LEN, pkt_buf);
    pkt_buf[0] = TYPE_CODE_VS_PACKET;
    return 0;
}


//-------------------------------------------------------------------------
// VSI
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_vsi_received
 *
 * Desc : check if VSI packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_is_vsi_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HDMI_HDMI_GPVS_get_vsps(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_vsps(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_vsi_received_status
 *
 * Desc : clear VSI packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_clear_vsi_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_vsps_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_vsps_mask);
    return 0;
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_vsi_info_packet
 *
 * Desc : read vsi info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : avi output buffer
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_read_vsi_info_packet(
    unsigned char               port,
    unsigned char               pkt_buf[31]
    )
{
    if (!lib_hdmi_is_vsi_received(port) || pkt_buf==NULL)
        return -1;

    lib_hdmi_clear_vsi_received_status(port);
    lib_hdmi_read_packet_sram(port, VS_INFO_OFST, VS_INFO_LEN , pkt_buf);
    lib_hdmi_read_packet_sram(port, VS_INFO_CNT_OFST, VS_INFO_CNT_LEN, pkt_buf + VS_INFO_LEN);  // HDMI HW will update whoe Packet, so we just copy all ot it directly
    pkt_buf[0] = TYPE_CODE_VS_PACKET;
    return 0;
}


//-------------------------------------------------------------------------
// AVI
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_avi_received
 *
 * Desc : check if AVI packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
unsigned char lib_hdmi_is_avi_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HDMI_HDMI_GPVS_get_avips(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_avips(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_avi_received_status
 *
 * Desc : clear AVI packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
void lib_hdmi_clear_avi_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_avips_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_avips_mask);
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_avi_info_packet
 *
 * Desc : read avi info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : avi output buffer
 *
 * Retn : 0 pass, -1 failed
 *--------------------------------------------------*/
int lib_hdmi_read_avi_info_packet(
    unsigned char               port,
    unsigned char               pkt_buf[30],
    unsigned char*              p_bch
    )
{
    unsigned char len_extend;
    
    if (!lib_hdmi_is_avi_received(port) || pkt_buf==NULL || p_bch==NULL)
        return -1;

    lib_hdmi_clear_avi_received_status(port);

    lib_hdmi_read_packet_sram(port, AVI_INFO_OFST, 1, p_bch);
    lib_hdmi_read_packet_sram(port, AVI_INFO_OFST+1, AVI_INFO_LEN -1, pkt_buf);

    // skip checksum
    pkt_buf[2] = pkt_buf[1];    //len
    pkt_buf[1] = pkt_buf[0];    //version
    pkt_buf[0] = TYPE_CODE_AVI_PACKET;

    // copy extra bytes
    if(pkt_buf[2] > 13)
    {
        len_extend = pkt_buf[2] - 13;

        if(len_extend >= AVI_INFO_CNT_LEN)
            lib_hdmi_read_packet_sram(port, AVI_INFO_CNT_OFST, AVI_INFO_CNT_LEN, &pkt_buf[16]);
        else// if(len_extend < AVI_PKT_CONT_LEN)
            lib_hdmi_read_packet_sram(port, AVI_INFO_CNT_OFST, len_extend, &pkt_buf[16]);
    }

    return 0;
}


//-------------------------------------------------------------------------
// SPD
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_spd_received
 *
 * Desc : check if SPD packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
unsigned char lib_hdmi_is_spd_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HDMI_HDMI_GPVS_get_spdps(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_spdps(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_spd_received_status
 *
 * Desc : clear SPD packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
void lib_hdmi_clear_spd_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_spdps_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_spdps_mask);
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_spd_info_packet
 *
 * Desc : read spd info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : avi output buffer
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_read_spd_info_packet(
    unsigned char           port,
    unsigned char           pkt_buf[28],
    unsigned char*          p_bch
    )
{
    if (!lib_hdmi_is_spd_received(port))
        return -1;

    lib_hdmi_clear_spd_received_status(port);
    lib_hdmi_read_packet_sram(port, SPD_INFO_OFST, 1, p_bch);
    lib_hdmi_read_packet_sram(port, SPD_INFO_OFST+1, SPD_INFO_LEN-1, pkt_buf);

    // skip checksum
    pkt_buf[2] = pkt_buf[1];    //len
    pkt_buf[1] = pkt_buf[0];    //version
    pkt_buf[0] = TYPE_CODE_SPD_PACKET;
    return 0;
}



//-------------------------------------------------------------------------
// Audio Packet
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_audiopkt_received
 *
 * Desc : check if audio packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
unsigned char lib_hdmi_is_audiopkt_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HDMI_HDMI_GPVS_get_aps(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_aps(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_audiopkt_received_status
 *
 * Desc : clear Audio packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
void lib_hdmi_clear_audiopkt_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_aps_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_aps_mask);
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_audio_packet
 *
 * Desc : read audio info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : avi output buffer
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_read_audio_packet(
    unsigned char           port,
    unsigned char           pkt_buf[13]
    )
{
    if (!lib_hdmi_is_audiopkt_received(port))
        return -1;

    lib_hdmi_clear_audiopkt_received_status(port);

    lib_hdmi_read_packet_sram(port, AUDIO_INFO_OFST+1, 13, pkt_buf);

    // skip checksum
    pkt_buf[2] = pkt_buf[1];    //len
    pkt_buf[1] = pkt_buf[0];    //version
    pkt_buf[0] = TYPE_CODE_AUDIO_PACKET;

    return 0;
}



//-------------------------------------------------------------------------
// DRM
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_is_drm_received
 *
 * Desc : check if drm packet received
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
unsigned char lib_hdmi_is_drm_received(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        return HDMI_HDMI_GPVS_get_drmps(hdmi_in(HD21_HDMI_GPVS_reg));
    else
        return HDMI_HDMI_GPVS_get_drmps(hdmi_in(HDMI_HDMI_GPVS_reg));
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_drm_received_status
 *
 * Desc : clear DRM packet receive status
 *
 * Para : nport : HDMI port number
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
void lib_hdmi_clear_drm_received_status(unsigned char nport)
{
    if (hdmi_rx[nport].hdmi_2p1_en)
        hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_drmps_mask);
    else
        hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_drmps_mask);
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_drm_packet
 *
 * Desc : read drm info packet
 *
 * Para : nport : HDMI port number
 *        pkt_buf : packet output
 *
 * Retn : 0 : success, -1 : failed
 *--------------------------------------------------*/
int lib_hdmi_read_drm_packet(
    unsigned char           port,
    unsigned char           pkt_buf[29]
    )
{
    if (!lib_hdmi_is_drm_received(port))
        return -1;

    lib_hdmi_clear_drm_received_status(port);

    lib_hdmi_read_packet_sram(port, DRM_INFO_OFST+1, DRM_INFO_LEN-1, pkt_buf);

    // skip checksum
    pkt_buf[2] = pkt_buf[1]; // len
    pkt_buf[1] = pkt_buf[0]; // version
    pkt_buf[0] = TYPE_CODE_DRM_PACKET; // Info Frame Type

    return 0;
}


//-------------------------------------------------------------------------
// Reserved Packet
//-------------------------------------------------------------------------


/*---------------------------------------------------
 * Func : lib_hdmi_set_rsv_packet_type
 *
 * Desc : set rsv packet type (without OUI check)
 *
 * Para : nport : HDMI port number
 *        index : rsv packet index
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_set_rsv_packet_type(
    unsigned char           nport,
    unsigned char           index,
    unsigned char           pkt_type
    )
{
    // for old API
    return lib_hdmi_set_rsv_packet_type_ex(nport, index, pkt_type, 0, 0);
}


/*---------------------------------------------------
 * Func : lib_hdmi_set_rsv_packet_type_ex
 *
 * Desc : set rsv packet type (with OUI check)
 *
 * Para : nport     : HDMI port number
 *        index     : rsv packet index
 *        pkt_type  : type of packet
 *        check_oui : check oui or not (only valid f
 *        oui_1     : 1st oui of the packet
 *
 * Retn : 0 : successed, -1 : failed
 *--------------------------------------------------*/
int lib_hdmi_set_rsv_packet_type_ex(
    unsigned char           nport,
    unsigned char           index,
    unsigned char           pkt_type,
    unsigned char           check_oui,
    unsigned char           oui_1
    )
{
    if (index >3)
        return -1;

    check_oui = (pkt_type==TYPE_CODE_VS_PACKET && check_oui) ? 1 : 0;

    if (check_oui)
    {
        check_oui = 1;

        if (pkt_type!=TYPE_CODE_VS_PACKET)
        {
            HDMI_WARN("set reserved packet type with OUI check failed, packet type (%02x) is not VSI, force disable OUI check\n", pkt_type);
            check_oui = 0;
            oui_1 = 0;
        }
    }

    if (hdmi_rx[nport].hdmi_2p1_en)
    {
        // Packet Type
        hdmi_mask(HD21_HDMI_PTRSV1_reg, ~(HDMI_HDMI_PTRSV1_pt0_mask<<(index<<3)), pkt_type<<(index<<3));

        // OUI pattern
        hdmi_mask(HD21_HDMI_PTRSV2_reg, ~(HD21_HDMI_PTRSV2_pt0_oui_1st_mask<<(index<<3)),
                                         (HD21_HDMI_PTRSV2_pt0_oui_1st(oui_1)<<(index<<3)));

        // OUI check enable
        hdmi_mask(HD21_HDMI_PTRSV3_reg, ~(HD21_HDMI_PTRSV3_pt0_recognize_oui_en_mask<<(index)),
                                         (HD21_HDMI_PTRSV3_pt0_recognize_oui_en(check_oui)<<(index)));
    }
    else
    {
        // Packet Type
        hdmi_mask(HDMI_HDMI_PTRSV1_reg, ~(HDMI_HDMI_PTRSV1_pt0_mask<<(index<<3)), pkt_type<<(index<<3));

        // OUI pattern
        hdmi_mask(HDMI_HDMI_PTRSV2_reg, ~(HDMI_HDMI_PTRSV2_pt0_oui_1st_mask<<(index<<3)),
                                         (HDMI_HDMI_PTRSV2_pt0_oui_1st(oui_1)<<(index<<3)));

        // clear 1st OUI pattern
        hdmi_mask(HDMI_HDMI_PTRSV3_reg, ~(HDMI_HDMI_PTRSV3_pt0_recognize_oui_en_mask<<(index)),
                                         (HDMI_HDMI_PTRSV3_pt0_recognize_oui_en(check_oui)<<(index)));
    }
    return 0;
}


/*---------------------------------------------------
 * Func : lib_hdmi_is_rsv_packet_received
 *
 * Desc : check if rsv packet received
 *
 * Para : nport : HDMI port number
 *        index : rsv packet index
 *
 * Retn : 0 : not reveived, 1 : received
 *--------------------------------------------------*/
int lib_hdmi_is_rsv_packet_received(
    unsigned char           nport,
    unsigned char           index
    )
{
    if (hdmi_rx[nport].hdmi_2p1_en)
    {
        switch(index) {
        case 0: return HDMI_HDMI_GPVS_get_rsv0ps(hdmi_in(HD21_HDMI_GPVS_reg));
        case 1: return HDMI_HDMI_GPVS_get_rsv1ps(hdmi_in(HD21_HDMI_GPVS_reg));
        case 2: return HDMI_HDMI_GPVS_get_rsv2ps(hdmi_in(HD21_HDMI_GPVS_reg));
        case 3: return HDMI_HDMI_GPVS_get_rsv3ps(hdmi_in(HD21_HDMI_GPVS_reg));
        }
    }
    else
    {
        switch(index) {
        case 0: return HDMI_HDMI_GPVS_get_rsv0ps(hdmi_in(HDMI_HDMI_GPVS_reg));
        case 1: return HDMI_HDMI_GPVS_get_rsv1ps(hdmi_in(HDMI_HDMI_GPVS_reg));
        case 2: return HDMI_HDMI_GPVS_get_rsv2ps(hdmi_in(HDMI_HDMI_GPVS_reg));
        case 3: return HDMI_HDMI_GPVS_get_rsv3ps(hdmi_in(HDMI_HDMI_GPVS_reg));
        }
    }

    return 0;
}


/*---------------------------------------------------
 * Func : lib_hdmi_clear_rsv_packet_status
 *
 * Desc : read reserved info packet
 *
 * Para : nport : HDMI port number
 *        index : rsv packet index
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_clear_rsv_packet_status(
    unsigned char           nport,
    unsigned char           index
    )
{
    if (hdmi_rx[nport].hdmi_2p1_en)
    {
        switch(index) {
        case 0: hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv0ps_mask); break;
        case 1: hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv1ps_mask); break;
        case 2: hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv2ps_mask); break;
        case 3: hdmi_out(HD21_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv3ps_mask); break;
        default:
            return -1;
        }
    }
    else
    {
        switch(index) {
        case 0: hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv0ps_mask); break;
        case 1: hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv1ps_mask); break;
        case 2: hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv2ps_mask); break;
        case 3: hdmi_out(HDMI_HDMI_GPVS_reg, HDMI_HDMI_GPVS_rsv3ps_mask); break;
        default:
            return -1;
        }
    }

    return 0;
}


/*---------------------------------------------------
 * Func : lib_hdmi_read_reserved_packet
 *
 * Desc : read reserved packet
 *
 * Para : nport : HDMI port number
 *        index : rsv packet index
 *        pkt_buf : packet output
 *
 * Retn : N/A
 *--------------------------------------------------*/
int lib_hdmi_read_reserved_packet(
    unsigned char           port,
    unsigned char           index,
    unsigned char*          pkt_buf,
    unsigned char           len
    )
{
    if (pkt_buf==NULL || !lib_hdmi_is_rsv_packet_received(port, index)) 
        return -1;

    if (len > 31)
        len = 31;

    switch(index)
    {
    case 0:  lib_hdmi_read_packet_sram(port, RSV0_OFST, len, pkt_buf); break;
    case 1:  lib_hdmi_read_packet_sram(port, RSV1_OFST, len, pkt_buf); break;
    case 2:  lib_hdmi_read_packet_sram(port, RSV2_OFST, len, pkt_buf); break;
    case 3:  lib_hdmi_read_packet_sram(port, RSV3_OFST, len, pkt_buf); break;
    default:
        return -1;
    }

    lib_hdmi_clear_rsv_packet_status(port, index);

    return 0;
}


/*--------------------------------------------------------------------
 * High level API
 *-------------------------------------------------------------------*/

const char *drm_eotf_name[] = {
	"Traditional gamma - SDR",
	"Traditional gamma - HDR",
	"SMPTE ST 2084",
	"HLG",
	"Reserved",
	"Unknow"
};

const char* _hdmi_drm_eotf_str(unsigned char eotf_type)
{
    switch (eotf_type)
    {
    case 0:
         return "Traditional gamma - SDR";
    case 1:
         return "Traditional gamma - HDR";
    case 2:
         return "SMPTE ST 2084";
    case 3:
         return "HLG";
    case 4:
    case 5:
    case 6:
    case 7: 
        return "Reserved";
    default:
        return "UNKNOW";
    }
}

/*---------------------------------------------------
 * Func : newbase_hdmi_infoframe_rx_init
 *
 * Desc : init info packet rx
 *
 * Para : NA
 *
 * Retn : NA
 *--------------------------------------------------*/
void newbase_hdmi_infoframe_rx_init(void)
{
    _init_info_pack_sem();
#ifdef CONFIG_SUPPORT_DOLBY_VSIF
    _init_dolby_vsif_sem();
#endif
    memset(reserved_data_temp, 0, sizeof(reserved_data_temp));
}

void newbase_hdmi_reset_vsi_infoframe(unsigned char port)
{
    memset(&hdmi_rx[port].vsi_t, 0, sizeof(HDMI_VSI_T));
    memset(&hdmi_rx[port].dvsi_t, 0, sizeof(HDMI_VSI_T));
    memset(&hdmi_rx[port].hdr10pvsi_t, 0, sizeof(HDMI_VSI_T));

    hdmi_rx[port].no_vsi_cnt = 0;
    /* set DOLBY_HDMI_VSIF_DISABLE if no vsif packet received */
    newbase_hdmi_dolby_vision_enable(port, DOLBY_HDMI_VSIF_DISABLE);
}


/*---------------------------------------------------
 * Func : newbase_hdmi_reset_all_infoframe
 *
 * Desc : clear all info frame that already received
 *
 * Para : nport : HDMI port number
 *
 * Retn : N/A
 *--------------------------------------------------*/
void newbase_hdmi_reset_all_infoframe(unsigned char port, unsigned int flags)
{
    HDMI_INFO("HDMI[p%d] reset all info frame (skip_spd=%d)\n", port, (flags & NO_RESET_SPD));
    // VSI
    newbase_hdmi_reset_vsi_infoframe(port);

    lib_hdmi_clear_fvs_received_status(port);
    lib_hdmi_clear_vsi_received_status(port);
    lib_hdmi_clear_hdr10pvs_received_status(port);

    // AVI
    memset(&hdmi_rx[port].avi_t, 0, sizeof(HDMI_AVI_T));
    hdmi_rx[port].no_avi_cnt = 0;
    lib_hdmi_clear_avi_received_status(port);

    // SPD
    if ((flags & NO_RESET_SPD)==0)
    {
        memset(&hdmi_rx[port].spd_t, 0, sizeof(HDMI_SPD_T));
        hdmi_rx[port].no_spd_cnt = 0;
        lib_hdmi_clear_spd_received_status(port);
    }

    // AUDIO
    memset(&hdmi_rx[port].audiopkt_t, 0, sizeof(HDMI_AUDIO_T));
    hdmi_rx[port].no_audiopkt_cnt = 0;
    lib_hdmi_clear_audiopkt_received_status(port);

    // DRM
    memset(&hdmi_rx[port].drm_t, 0, sizeof(HDMI_DRM_T));
    hdmi_rx[port].no_drm_cnt = 0;
    lib_hdmi_clear_drm_received_status(port);
}

unsigned char newbase_hdmi_check_infoframe_config(unsigned char port, INFO_PACKET_TYPE info_type)
{//TRUE: Enable, FALSE: Disable
    int i = 0;
    unsigned char select_index = 0xFF;
    for(i = 0; i< INFO_TYPE_NUM; i ++)
    {
        if(info_packet_config_array[i].type_name == info_type)
        {
            select_index = i;
            break;
        }
    }
    if(select_index >= INFO_TYPE_NUM)
    {
        HDMI_EMG("[newbase_hdmi_check_infoframe_config] Error input infoframe type: %d, select_index: %d\n", info_type, select_index);
        return FALSE;
    }
    if (newbase_hdmi_get_5v_state(port)==FALSE || GET_H_MODE(port) != MODE_HDMI)
    {
        return FALSE;
    }

    //Change infoframe config with special condition.
    switch(info_packet_config_array[select_index].type_name)
    {
        case INFO_TYPE_EMP:
            if (GET_FLOW_CFG(HDMI_FLOW_CFG_GENERAL, HDMI_FLOW_CFG0_SUPPORT_DSC))
                info_packet_config_array[select_index].detect_start_state = MAIN_FSM_HDMI_WAIT_SYNC;
            else
                info_packet_config_array[select_index].detect_start_state = MAIN_FSM_HDMI_MEASURE;

            break;
        default:
            break;
    }

    if(FALSE == info_packet_config_array[select_index].enable)
    {
        return FALSE;
    }

    if(GET_H_VIDEO_FSM(port) < info_packet_config_array[select_index].detect_start_state)
    {
        return FALSE;
    }

    return TRUE;

}

void newbase_hdmi_update_infoframe(unsigned char port)
{
    unsigned char pkt_buf[31];
    unsigned char is_drm_here = hdmi_rx[port].drm_t.type_code;
    unsigned char is_avi_here = hdmi_rx[port].avi_t.type_code;
    unsigned char is_spd_here = hdmi_rx[port].spd_t.type_code;
    unsigned char is_audio_here = hdmi_rx[port].audiopkt_t.type_code;
    unsigned char is_vsi_here = hdmi_rx[port].vsi_t.VSIF_TypeCode;  // vsi has 2 version-type //861-G
    unsigned char is_dvsi_here = hdmi_rx[port].dvsi_t.VSIF_TypeCode;
    unsigned char is_hdr10pvsi_here = hdmi_rx[port].hdr10pvsi_t.VSIF_TypeCode;
    unsigned char bch_error;

    int i = 0;
    
    if (lib_hdmi_get_fw_debug_bit(DEBUG_19_BYPASS_PACKET_DET) ||
        (newbase_hdmi_get_power_saving_state(port)==PS_FSM_POWER_SAVING_ON))
        return;

    for(i = 0; i < INFO_TYPE_NUM; i++)
    {
        if(TRUE == newbase_hdmi_check_infoframe_config(port, info_packet_config_array[i].type_name))
        {
            memset(pkt_buf, 0, sizeof(pkt_buf));

            switch(info_packet_config_array[i].type_name)
            {
            case INFO_TYPE_AVI:
                if (lib_hdmi_is_avi_received(port))
                {
                    lib_hdmi_read_avi_info_packet(port, pkt_buf, &bch_error);
                    
                    if (bch_error)
                    {
                        memset(&hdmi_rx[port].avi_t, 0, sizeof(HDMI_AVI_T));  // clear AVI info

                        if ((hdmi_rx[port].err_avi_cnt++ & 0x7)==0x1)     // print debug message to notify bch error
                        {                  
                            HDMI_EMG("read avi with bch error (%02x), skip it cnt=%d, (payload: %02x %02x %02x %02x %02x %02x %02x %02x ...)\n", 
                                bch_error, hdmi_rx[port].err_avi_cnt,
                                pkt_buf[0], pkt_buf[1], pkt_buf[2], pkt_buf[3],
                                pkt_buf[4], pkt_buf[5], pkt_buf[6], pkt_buf[7]);
                        }
                    }
                    else {
                        memcpy(&hdmi_rx[port].avi_t, pkt_buf, sizeof(HDMI_AVI_T));
                        hdmi_rx[port].err_avi_cnt = 0;
                    }

                    hdmi_rx[port].no_avi_cnt = 0;
                    hdmi_rx[port].pkt_cnt++;
                }
                else
                {
                    if (++hdmi_rx[port].no_avi_cnt > NO_AVI_INFO_MAX)
                    {
                        memset(&hdmi_rx[port].avi_t, 0, sizeof(HDMI_AVI_T));
                        hdmi_rx[port].no_avi_cnt = 0;
                    }
                }
                break;
            case INFO_TYPE_VSI:
                if (newbase_hdmi_update_vsi(port))
                {
                    hdmi_rx[port].no_vsi_cnt = 0;

                    if (_FALSE == hdmi_get_infoframe_thread_stop()) {
                        SET_MODE_PREHDMI_DOLBY_VSIF(GET_MODE_HDMI_DOLBY_VSIF());
                    }

                    hdmi_rx[port].pkt_cnt++;
                }
                else
                {
                    if (++hdmi_rx[port].no_vsi_cnt > NO_VSI_INFO_MAX)
                    {
                        newbase_hdmi_reset_vsi_infoframe(port);
                    }
                }
                break;
            case INFO_TYPE_SPD:
                if (lib_hdmi_is_spd_received(port))
                {
                    HDMI_SPD_T* p_spd = (HDMI_SPD_T*) pkt_buf;
                    lib_hdmi_read_spd_info_packet(port, pkt_buf, &bch_error);

                    INFOFRAME_FLOW_PRINTF("read spd (bch_err=%02x), ver=%d, len=%d, (payload: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x ...)\n", 
                                bch_error, p_spd->ver, p_spd->len,
                                pkt_buf[0], pkt_buf[1], pkt_buf[2], pkt_buf[3],
                                pkt_buf[4], pkt_buf[5], pkt_buf[6], pkt_buf[7],
                                pkt_buf[8], pkt_buf[9], pkt_buf[10], pkt_buf[11],
                                pkt_buf[12], pkt_buf[13], pkt_buf[14], pkt_buf[15]);

                    bch_error &= PACKET_BCH_2BIT_ERROR_MASK;  // SPD has no checksum, just check bit error

                    if (bch_error || p_spd->ver > 2 || p_spd->len > 28)  // check version and length (MSPG sometimes send incorrect SPD info)
                    {
                        memset(&hdmi_rx[port].spd_t, 0, sizeof(HDMI_SPD_T));  // clear AVI info

                        if ((hdmi_rx[port].err_spd_cnt++ & 0x7)==0x1)     // print debug message to notify bch error
                        {
                            HDMI_EMG("read invalid spd info (bch_err=%02x), ver=%d, len=%d, skip it, cnt=%d, (payload: %02x %02x %02x %02x %02x %02x %02x %02x ...)\n",
                                bch_error,  p_spd->ver, p_spd->len, hdmi_rx[port].err_spd_cnt,
                                pkt_buf[0], pkt_buf[1], pkt_buf[2], pkt_buf[3],
                                pkt_buf[4], pkt_buf[5], pkt_buf[6], pkt_buf[7]);
                        }
                    }
                    else
                    {
                        memcpy(&hdmi_rx[port].spd_t, pkt_buf, sizeof(HDMI_SPD_T));
                        hdmi_rx[port].err_spd_cnt = 0;
                    }
                    hdmi_rx[port].no_spd_cnt = 0;
                    hdmi_rx[port].pkt_cnt++;
                }
                break;
            case INFO_TYPE_DRM:
                if (lib_hdmi_is_drm_received(port))
                {
                    lib_hdmi_read_drm_packet(port, pkt_buf);

                    ((unsigned char*)(&hdmi_rx[port].drm_t))[0] = pkt_buf[0]; // Info Frame Type
                    ((unsigned char*)(&hdmi_rx[port].drm_t))[1] = pkt_buf[1]; // version
                    ((unsigned char*)(&hdmi_rx[port].drm_t))[2] = pkt_buf[2]; // len
                    hdmi_rx[port].drm_t.eEOTFtype  = pkt_buf[3];
                    hdmi_rx[port].drm_t.eMeta_Desc = pkt_buf[4];
                    hdmi_rx[port].drm_t.display_primaries_x0 = pkt_buf[5]|(pkt_buf[6]<<8);
                    hdmi_rx[port].drm_t.display_primaries_y0 = pkt_buf[7]|(pkt_buf[8]<<8);
                    hdmi_rx[port].drm_t.display_primaries_x1 = pkt_buf[9]|(pkt_buf[10]<<8);
                    hdmi_rx[port].drm_t.display_primaries_y1 = pkt_buf[11]|(pkt_buf[12]<<8);
                    hdmi_rx[port].drm_t.display_primaries_x2 = pkt_buf[13]|(pkt_buf[14]<<8);
                    hdmi_rx[port].drm_t.display_primaries_y2 = pkt_buf[15]|(pkt_buf[16]<<8);
                    hdmi_rx[port].drm_t.white_point_x = pkt_buf[17]|(pkt_buf[18]<<8);
                    hdmi_rx[port].drm_t.white_point_y = pkt_buf[19]|(pkt_buf[20]<<8);
                    hdmi_rx[port].drm_t.max_display_mastering_luminance = pkt_buf[21]|(pkt_buf[22]<<8);
                    hdmi_rx[port].drm_t.min_display_mastering_luminance = pkt_buf[23]|(pkt_buf[24]<<8);
                    hdmi_rx[port].drm_t.maximum_content_light_level = pkt_buf[25]|(pkt_buf[26]<<8);
                    hdmi_rx[port].drm_t.maximum_frame_average_light_level = pkt_buf[27]|(pkt_buf[28]<<8);
                    hdmi_rx[port].no_drm_cnt = 0;
                    hdmi_rx[port].pkt_cnt++;
                }
                else
                {
                    if (++hdmi_rx[port].no_drm_cnt > NO_DRM_INFO_MAX) {
                        memset(&hdmi_rx[port].drm_t, 0, sizeof(HDMI_DRM_T));
                        hdmi_rx[port].no_drm_cnt = 0;
                    }
                }
                break;
            case INFO_TYPE_AUDIO:
                if (lib_hdmi_is_audiopkt_received(port))
                {
                    lib_hdmi_read_audio_packet(port, pkt_buf);
                    memcpy(&hdmi_rx[port].audiopkt_t, pkt_buf, 13);
                    hdmi_rx[port].no_audiopkt_cnt = 0;
                    hdmi_rx[port].pkt_cnt++;
                }
                else
                {
                    if (++hdmi_rx[port].no_audiopkt_cnt > NO_AUDIO_INFO_MAX)
                    {
                        memset(&hdmi_rx[port].audiopkt_t, 0, sizeof(HDMI_AUDIO_T));
                        hdmi_rx[port].no_audiopkt_cnt = 0;
                    }
                }
                break;
            case INFO_TYPE_EMP:
                newbase_hdmi_update_emp(port);
                break;
            case INFO_TYPE_RSV0:   // Currently for Audio Sample Packet Using. Maintain on Audio thread,
                break;
            case INFO_TYPE_RSV1:   // Currently for Audio HBR Sample Packet Using. Maintain on Audio thread,
                break;
            case INFO_TYPE_RSV2:   // Currently for Dobly VSIF Packet Using if define enable.Maintain on newbase_hdmi_update_vsi
                lib_hdmi_set_rsv_packet_type(port, 2, info_packet_config_array[i].type_code);

                if (lib_hdmi_is_rsv_packet_received(port, 2))
                {
                    unsigned int ieeeoui_type = 0;

                    lib_hdmi_read_reserved_packet(port, 2, pkt_buf, 31);

                    ieeeoui_type = (pkt_buf[4]) | (pkt_buf[5]<<8) | (pkt_buf[6]<<16);

                    //only for HDR10+
                    if(ieeeoui_type ==IEEE_OUI_HDR10_PLUS)
                    {
                        memcpy(&hdmi_rx[port].hdr10pvsi_t, pkt_buf, sizeof(pkt_buf));
                        hdmi_rx[port].hdr10pvsi_t.VSIF_TypeCode  = TYPE_CODE_VS_PACKET;
                    }
                    hdmi_rx[port].pkt_cnt++;
                }
                else
                {
                    if (++hdmi_rx[port].no_rsv2_cnt > NO_RSV2_INFO_MAX)
                    {
                        memset(&hdmi_rx[port].hdr10pvsi_t, 0, sizeof(pkt_buf));
                        hdmi_rx[port].no_rsv2_cnt = 0;
                    }
                }
                break;
            case INFO_TYPE_RSV3:   // TBD for extended debugging using.
                lib_hdmi_set_rsv_packet_type(port, 3, info_packet_config_array[i].type_code);
                if (lib_hdmi_is_rsv_packet_received(port, 3))
                {
                    lib_hdmi_read_reserved_packet(port, 3, pkt_buf, RESERVED_LEN);
                    reserved_data_temp[3][port].pkt_received_cnt++; // count for debugging
                    memcpy(&reserved_data_temp[3][port].pkt_buf, pkt_buf, sizeof(reserved_data_temp[3][port].pkt_buf));
                    hdmi_rx[port].pkt_cnt++;
                }
                else
                {
                    //if (++hdmi_rx[port].no_audiopkt_cnt > NO_AUDIO_INFO_MAX)
                    {
                        //memset(&hdmi_rx[port].audiopkt_t, 0, sizeof(HDMI_AUDIO_T));
                        //hdmi_rx[port].no_audiopkt_cnt = 0;
                    }
                }
                break;
            default:
                continue;
                break;
            }
        }
    }

    if (is_drm_here != hdmi_rx[port].drm_t.type_code) {
        HDMI_WARN("GET DRM INFO=%d, EOTF_TYPE=%d\n", hdmi_rx[port].drm_t.type_code, hdmi_rx[port].drm_t.eEOTFtype);
    }
    if (is_avi_here != hdmi_rx[port].avi_t.type_code) {
        HDMI_WARN("GET AVI INFO=%d, VIC=%d, pixel_repeat=%d, scaling=%d, Q=%d, YQ=%d\n",
            hdmi_rx[port].avi_t.type_code, hdmi_rx[port].avi_t.VIC, hdmi_rx[port].avi_t.PR, hdmi_rx[port].avi_t.SC, hdmi_rx[port].avi_t.Q, hdmi_rx[port].avi_t.YQ);
    }
    if (is_spd_here != hdmi_rx[port].spd_t.type_code)
    {
        hdmi_amd_freesync_debug_print[port] = g_amd_vsdb_debug_thd;  // force print warning message
        HDMI_WARN("GET SPD INFO=%d, VenderName=(%c,%c,%c,%c,%c,%c,%c,%c); source_info=%x\n", hdmi_rx[port].spd_t.type_code,
            hdmi_rx[port].spd_t.VendorName[0], hdmi_rx[port].spd_t.VendorName[1], hdmi_rx[port].spd_t.VendorName[2], hdmi_rx[port].spd_t.VendorName[3], 
            hdmi_rx[port].spd_t.VendorName[4], hdmi_rx[port].spd_t.VendorName[5], hdmi_rx[port].spd_t.VendorName[6], hdmi_rx[port].spd_t.VendorName[7],
            hdmi_rx[port].spd_t.SourceInfo);
    } 
    if (is_audio_here != hdmi_rx[port].audiopkt_t.type_code) {
        HDMI_WARN("GET AUD INFO=%d\n", hdmi_rx[port].audiopkt_t.type_code);
    }
    if (is_vsi_here != hdmi_rx[port].vsi_t.VSIF_TypeCode)
    {
        HDMI_WARN("GET VSI INFO=%d, VER=%d, LEN=%d, OUI=(%x,%x,%x)\n",
            hdmi_rx[port].vsi_t.VSIF_TypeCode,  hdmi_rx[port].vsi_t.VSIF_Version, hdmi_rx[port].vsi_t.Length, hdmi_rx[port].vsi_t.Reg_ID[0], hdmi_rx[port].vsi_t.Reg_ID[1], hdmi_rx[port].vsi_t.Reg_ID[2]);
        // 0xd8, 0x5d, 0xc4 is hdmi2.0 FVSPS                        (QD980 Forum VS)
        // 0x03, 0x0c, 0x00 is hdmi1.4 VSPS or Dolby         (QD980 LLC VS)
        // QD980 has a bug, it needs to toggle & apply twice then send correct info.
    }

    if (is_dvsi_here != hdmi_rx[port].dvsi_t.VSIF_TypeCode)
    {
        HDMI_WARN("GET DOLBY VSI INFO=%d, VER=%d, LEN=%d, OUI=(%x,%x,%x)\n",
            hdmi_rx[port].dvsi_t.VSIF_TypeCode,  hdmi_rx[port].dvsi_t.VSIF_Version, hdmi_rx[port].dvsi_t.Length, hdmi_rx[port].dvsi_t.Reg_ID[0], hdmi_rx[port].dvsi_t.Reg_ID[1], hdmi_rx[port].dvsi_t.Reg_ID[2]);
    }
    if (is_hdr10pvsi_here != hdmi_rx[port].hdr10pvsi_t.VSIF_TypeCode)
    {
        HDMI_WARN("GET HDR10PLUS VSI INFO=%d, VER=%d, LEN=%d, OUI=(%x,%x,%x)\n",
            hdmi_rx[port].hdr10pvsi_t.VSIF_TypeCode,  hdmi_rx[port].hdr10pvsi_t.VSIF_Version, hdmi_rx[port].hdr10pvsi_t.Length, hdmi_rx[port].hdr10pvsi_t.Reg_ID[0], hdmi_rx[port].hdr10pvsi_t.Reg_ID[1], hdmi_rx[port].hdr10pvsi_t.Reg_ID[2]);
    }

    //Debug print
    if (AMDFREESYNC_FLOW_PRINT_FLAG && (hdmi_amd_freesync_debug_print[port]++ >= g_amd_vsdb_debug_thd)) 
    {
        // Note : the checksum byte of is removed.
        unsigned char* p_pb = (unsigned char*) hdmi_rx[port].spd_t.VendorName;
        unsigned char* p_pb2 = (unsigned char*) hdmi_rx[port].spd_t.ProductDesc;

        if (newbase_hdmi_check_freesync_info_version(&hdmi_rx[port].spd_t) == FREESYNC_INFO_VERSION1)
        {
            AMDFREESYNC_FLOW_PRINTF("GetAMDFreeSyncStatus : Port=%d, AMD SPD (V1), fs_support=%d, fs_en=%d, fs_act=%d, rate=%d~%d\n",
                port,
                (p_pb[5]) & 0x1,
                (p_pb[5]>>1) & 0x1,
                (p_pb[5]>>2) & 0x1,
                (p_pb[6]),
                (p_pb[7]));
        }
        if (newbase_hdmi_check_freesync_info_version(&hdmi_rx[port].spd_t) == FREESYNC_INFO_VERSION2)
        {
            AMDFREESYNC_FLOW_PRINTF("GetAMDFreeSyncStatus : Port=%d, AMD SPD (V2), fs_support=%d, fs_en=%d, fs_act=%d, ncs_act=%d, bright_ctrl=%d, ld_disable=%d, rate=%d~%d \n",
                port,
                (p_pb[5]) & 0x1,
                (p_pb[5]>>1) & 0x1,
                (p_pb[5]>>2) & 0x1,
                (p_pb[5]>>3) & 0x1,
                (p_pb[5]>>4) & 0x1,
                (p_pb[5]>>5) & 0x1,
                (p_pb[6]),
                (p_pb[7]));
        }
        else
        {
            AMDFREESYNC_FLOW_PRINTF("GetAMDFreeSyncStatus : Port=%d, not AMD VSIF, SPD (Ver=%d, Len=%d, DATA={%02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x})\n",
                port, hdmi_rx[port].spd_t.ver, hdmi_rx[port].spd_t.len, p_pb[0], p_pb[1], p_pb[2], p_pb[3], p_pb[4], p_pb[5], p_pb[6], p_pb[7], p_pb2[0], p_pb2[1], p_pb2[2]);
        }

        hdmi_amd_freesync_debug_print[port] = 0;
    }
}


/*------------------------------------------------------------------
 * Func : newbase_hdmi_get_vs_infoframe
 *
 * Desc : get HDMI VSIF/ HDIM Forum VISF VSIF from a given hdmi port
 *
 * Para : [IN] port  : HDMI port
 *        [IN] p_vsi : VSIF output 
 *
 * Retn : 0 : no Dolby VSIF received
 *        1 : Dolby VSIF received
 *------------------------------------------------------------------*/
unsigned char newbase_hdmi_get_vs_infoframe(unsigned char port, HDMI_VSI_T *p_vsi_t)
{
    if(FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_VSI))
    {
        return 0;
    }

    if (hdmi_rx[port].vsi_t.VSIF_TypeCode == 0) {
        return 0;
    }

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT)) {
        return 0;
    }

    memcpy(p_vsi_t, &hdmi_rx[port].vsi_t, sizeof(HDMI_VSI_T));
    return 1;
}


/*------------------------------------------------------------------
 * Func : newbase_hdmi_get_dvs_infoframe
 *
 * Desc : get Dolby Vision VSIF from a given hdmi port
 *
 * Para : [IN] port  : HDMI port
 *        [IN] p_vsi : VSIF output 
 *
 * Retn : 0 : no Dolby VSIF received
 *        1 : Dolby VSIF received
 *------------------------------------------------------------------*/
unsigned char newbase_hdmi_get_dvs_infoframe(unsigned char port, HDMI_VSI_T *p_vsi_t)
{
    if (FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_VSI))
        return 0;

    if (hdmi_rx[port].dvsi_t.VSIF_TypeCode == 0)
        return 0;

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT))
        return 0;

    memcpy(p_vsi_t, &hdmi_rx[port].dvsi_t, sizeof(HDMI_VSI_T));
    return 1;
}

/*------------------------------------------------------------------
 * Func : newbase_hdmi_get_hdr10p_infoframe
 *
 * Desc : get HDR10+ VSIF from a given hdmi port
 *
 * Para : [IN] port  : HDMI port
 *        [IN] p_vsi : VSIF output 
 *
 * Retn : 0 : no HDR10+ VSIF received
 *        1 : HDR10+ VSIF received
 *------------------------------------------------------------------*/
unsigned char newbase_hdmi_get_hdr10p_infoframe(unsigned char port, HDMI_VSI_T *p_vsi_t)
{
    if (FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_VSI))
        return 0;

    if (hdmi_rx[port].hdr10pvsi_t.VSIF_TypeCode == 0)
        return 0;

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT))
        return 0;

    memcpy(p_vsi_t, &hdmi_rx[port].hdr10pvsi_t, sizeof(HDMI_VSI_T));
    return 1;
}

/*------------------------------------------------------------------
 * Func : newbase_hdmi_get_multi_vs_infoframe
 *
 * Desc : get multi vsif from the given hdmi port
 *
 * Para : [IN] port  : HDMI port
 *        [IN] p_vsi : VSIF output list
 *        [IN] n_vsi : size of VSIF output array
 *
 * Retn : number of vsif received
 *------------------------------------------------------------------*/
unsigned char newbase_hdmi_get_multi_vs_infoframe(
    unsigned char           port, 
    HDMI_VSI_T*             p_vsi, 
    unsigned char           n_vsi
    )
{
    int vsi_cnt = 0;

    if (p_vsi==NULL)
        return 0;

    if (n_vsi && newbase_hdmi_get_vs_infoframe(port, p_vsi)) {
        p_vsi++;
        vsi_cnt++;
        n_vsi--;
    }

    if (n_vsi && newbase_hdmi_get_dvs_infoframe(port, p_vsi)) {
        p_vsi++;
        vsi_cnt++;
        n_vsi--;
    }

    if (n_vsi && newbase_hdmi_get_hdr10p_infoframe(port, p_vsi)) {
        p_vsi++;
        vsi_cnt++;
        n_vsi--;
    }
    
    return vsi_cnt;
}


unsigned char newbase_hdmi_get_avi_infoframe(unsigned char port, HDMI_AVI_T *p_avi_t)
{
    if (FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_AVI))
        return 0;

    if (hdmi_rx[port].avi_t.type_code == 0)
        return 0;

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT))
        return 0;

    memcpy(p_avi_t, &hdmi_rx[port].avi_t, sizeof(HDMI_AVI_T));
    return 1;
}

unsigned char newbase_hdmi_get_spd_infoframe(unsigned char port, HDMI_SPD_T *p_spd_t)
{
    if (FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_SPD))
        return 0;

    if (hdmi_rx[port].spd_t.type_code == 0)
        return 0;

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT))
        return 0;

    memcpy(p_spd_t, &hdmi_rx[port].spd_t, sizeof(HDMI_SPD_T));
    return 1;
}

unsigned char newbase_hdmi_get_audio_infoframe(unsigned char port, HDMI_AUDIO_T *p_audio_t)
{
    if (FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_AUDIO))
        return 0;

    if (hdmi_rx[port].audiopkt_t.type_code == 0)
        return 0;

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT))
        return 0;

    memcpy(p_audio_t, &hdmi_rx[port].audiopkt_t, sizeof(HDMI_AUDIO_T));
    return 1;
}


unsigned char newbase_hdmi_get_drm_infoframe(unsigned char port, HDMI_DRM_T *p_drm_t)
{
    if (FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_DRM))
        return 0;

    if (hdmi_rx[port].drm_t.type_code == 0)
        return 0;

    if (lib_hdmi_get_fw_debug_bit(DEBUG_20_FORCE_NO_DRMPKT))
        return 0;

    memcpy(p_drm_t, &hdmi_rx[port].drm_t, sizeof(HDMI_DRM_T));
    return 1;
}


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
unsigned char newbase_hdmi_update_vsi(unsigned char port)
{
    unsigned char vsi[31];
    unsigned char rx_cnt = 0;
    if (lib_hdmi_read_dvs_info_packet(port, vsi)==0) {
        memcpy(&hdmi_rx[port].dvsi_t, vsi, sizeof(vsi));
        rx_cnt++;

        newbase_hdmi_dolby_vision_enable(port, DOLBY_HDMI_VSIF_STD);
    }
    else if (lib_hdmi_read_vsi_info_packet(port, vsi)==0) {
        memcpy(&hdmi_rx[port].vsi_t, vsi, sizeof(vsi));
        rx_cnt++;

        newbase_hdmi_dolby_vision_enable(port, DOLBY_HDMI_h14B_VSIF);
    }
    else if (lib_hdmi_read_fvs_info_packet(port, vsi)==0) {
        memcpy(&hdmi_rx[port].vsi_t, vsi, sizeof(vsi));
        rx_cnt++;

        newbase_hdmi_dolby_vision_enable(port, DOLBY_HDMI_VSIF_DISABLE);
    }
    #if 0
    else if (lib_hdmi_read_dvs_info_packet(port, vsi)==0) {
        memcpy(&hdmi_rx[port].dvsi_t, vsi, sizeof(vsi));
        rx_cnt++;

        newbase_hdmi_dolby_vision_enable(port, DOLBY_HDMI_VSIF_STD);
	 } else {
        newbase_hdmi_dolby_vision_enable(port, DOLBY_HDMI_VSIF_DISABLE);
    }
     #endif

    if (lib_hdmi_read_hdr10pvs_info_packet(port, vsi)==0) {
        unsigned int ieeeoui_type = (vsi[4]) | (vsi[5]<<8) | (vsi[6]<<16);

        if (ieeeoui_type == IEEE_OUI_HDR10_PLUS) {
			hdmi_rx[port].no_hdr10pvsi_cnt=0;
            memcpy(&hdmi_rx[port].hdr10pvsi_t, vsi, sizeof(vsi));
            hdmi_rx[port].hdr10pvsi_t.VSIF_TypeCode  = TYPE_CODE_VS_PACKET;
        }
        else
        {
            memset(&hdmi_rx[port].hdr10pvsi_t, 0, sizeof(vsi));
        }
        rx_cnt++;
    }
    else
    {
    	if(++hdmi_rx[port].no_hdr10pvsi_cnt>NO_VSI_INFO_MAX)
       		memset(&hdmi_rx[port].hdr10pvsi_t, 0, sizeof(vsi));    //TCL2851M-2952, Amazon STB output HDR10+ and Dolby VSIF at same time.
    }

    return (rx_cnt) ? TRUE : FALSE ;
}

unsigned char newbase_hdmi_get_fvs_allm(unsigned char port, unsigned char* allm_mode)
{
    unsigned char result = FALSE;
    unsigned int ieeeoui_type = 0;
    if(FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_VSI))
    {
        return FALSE;
    }

    if (hdmi_rx[port].vsi_t.VSIF_TypeCode == 0)
    {
        return FALSE;
    }

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT))
    {
        return FALSE;
    }

    ieeeoui_type = hdmi_rx[port].vsi_t.Reg_ID[0] | (hdmi_rx[port].vsi_t.Reg_ID[1]<<8) | (hdmi_rx[port].vsi_t.Reg_ID[2]<<16);

    if(ieeeoui_type ==IEEE_OUI_HF_VSDB)
    {    
        *allm_mode = (hdmi_rx[port].vsi_t.Payload[1]&_BIT1)>>1;    
        result =  TRUE;
        //HDMI_PRINTF("newbase_hdmi_get_fvs_allm port %d Read Success \n", port);
    }
    else
    {
        result =  FALSE;
        //HDMI_PRINTF("newbase_hdmi_get_fvs_allm port %d NON HF-VSIF\n", port);
    }
    return result;
}

unsigned char newbase_hdmi_get_vrr_enable(unsigned char port)
{
    HDMI_EM_VTEM_T p_emp_vtem_t;
    p_emp_vtem_t.VRR_EN=0;
    if(newbase_hdmi_get_vtem_info(port, &p_emp_vtem_t))
    {
        return p_emp_vtem_t.VRR_EN;
    }
    else
    {
        return FALSE;
    }
}

FREESYNC_INFO_VERSION_TYPE newbase_hdmi_check_freesync_info_version(HDMI_SPD_T *p_spd_t)
{
    unsigned int oui = 0;

    if(p_spd_t == NULL)
        return FREESYNC_INFO_INVALID;

    oui = (p_spd_t->VendorName[2]<<16) + (p_spd_t->VendorName[1]<<8) + p_spd_t->VendorName[0];// For  AMD freesync or other special spec.

    if (p_spd_t->ver==1 && p_spd_t->len == 8 && oui==IEEE_OUI_AMD_VSDB)
        return FREESYNC_INFO_VERSION1;
    else if (p_spd_t->ver==2 && p_spd_t->len == 0xA && oui==IEEE_OUI_AMD_VSDB)
        return FREESYNC_INFO_VERSION2;
    else
        return FREESYNC_INFO_INVALID;
}

unsigned char newbase_hdmi_get_freesync_info(unsigned char port, HDMI_AMD_FREE_SYNC_INFO* p_info)
{
    HDMI_SPD_T spd;

    memset(p_info, 0, sizeof(HDMI_AMD_FREE_SYNC_INFO));

    if (newbase_hdmi_get_spd_infoframe(port, &spd))
    {
        // Note : the checksum byte of is removed.
        unsigned char* p_pb = (unsigned char*) spd.VendorName;
        unsigned char* p_pb2 = (unsigned char*) spd.ProductDesc;

        if (newbase_hdmi_check_freesync_info_version(&spd) == FREESYNC_INFO_VERSION1)
        {
            p_info->version = 1;
            p_info->freesync_supported = (p_pb[5]) & 0x1;
            p_info->freesync_enabled   = (p_pb[5]>>1) & 0x1;
            p_info->freesync_activate  = (p_pb[5]>>2) & 0x1;
            p_info->min_refresh_rate   = (p_pb[6]);
            p_info->max_refresh_rate   = (p_pb[7]);

            return TRUE;
        }
        else if (newbase_hdmi_check_freesync_info_version(&spd) == FREESYNC_INFO_VERSION2)
        {
            p_info->version = 2;
            p_info->freesync_supported        = (p_pb[5])    & 0x1;
            p_info->freesync_enabled          = (p_pb[5]>>1) & 0x1;
            p_info->freesync_activate         = (p_pb[5]>>2) & 0x1;
            p_info->native_color_space_active = (p_pb[5]>>3) & 0x1;
            p_info->brightness_control_active = (p_pb[5]>>4) & 0x1;
            p_info->local_diming_disalbe      = (p_pb[5]>>5) & 0x1;
            p_info->min_refresh_rate          = (p_pb[6]);
            p_info->max_refresh_rate          = (p_pb[7]);
            p_info->srgb_eotf_active          = (p_pb2[0])    & 0x1;
            p_info->bt709_eotf_active         = (p_pb2[0]>>1) & 0x1;
            p_info->gamma_2p2_eotf_active     = (p_pb2[0]>>2) & 0x1;
            p_info->gamma_2p6_eotf_active     = (p_pb2[0]>>3) & 0x1;
            p_info->brightness_control        = (p_pb2[1]);

            return TRUE;
        }
    }

    return FALSE;
}

unsigned char newbase_hdmi_get_freesync_enable(unsigned char port)
{
    HDMI_AMD_FREE_SYNC_INFO fs_info;
    
    if (newbase_hdmi_get_freesync_info(port, &fs_info)==TRUE && fs_info.freesync_enabled)
        return TRUE;

    return FALSE;
}

unsigned char newbase_hdmi_get_dolby_L11_content(unsigned char port, unsigned char get_data[4])
{
    unsigned char result = FALSE;
    unsigned int ieeeoui_type = 0;
    HDMIRX_PHY_STRUCT_T* p_phy_st;

    if(FALSE == newbase_hdmi_check_infoframe_config(port, INFO_TYPE_VSI))
    {
        return FALSE;
    }

    if (hdmi_rx[port].dvsi_t.VSIF_TypeCode == 0)
    {
        return FALSE;
    }

    if (lib_hdmi_get_fw_debug_bit(DEBUG_21_FORCE_NO_INFOPKT))
    {
        return FALSE;
    }

    p_phy_st = newbase_rxphy_get_status(port);
    if(p_phy_st == NULL)
    {
        HDMI_EMG("[newbase_hdmi_get_dolby_L11_content port:%d] NULL phy_st pointer\n", port);
        return FALSE;
    }

    if(p_phy_st->frl_mode == MODE_TMDS)
    {//From VSIF
        ieeeoui_type = hdmi_rx[port].dvsi_t.Reg_ID[0] | (hdmi_rx[port].dvsi_t.Reg_ID[1]<<8) | (hdmi_rx[port].dvsi_t.Reg_ID[2]<<16);

        if(ieeeoui_type ==IEEE_OUI_DOLBY_VSIF)
        {    
            get_data[0] = hdmi_rx[port].dvsi_t.Payload[6]; // Content sub type/Content type
            get_data[1] = hdmi_rx[port].dvsi_t.Payload[7]; // Intend White Point
            get_data[2] = hdmi_rx[port].dvsi_t.Payload[8]; // L11_Byte2
            get_data[3] = hdmi_rx[port].dvsi_t.Payload[9]; // L11_Byte3

            result =  TRUE;
        }
        else
        {
            result =  FALSE;
        }
    }
    else
    {//From EMP VSEM
        unsigned char vsem_pkt[EM_VSEM_INFO_LEN];
        unsigned char l11_present = 0;
        memset(vsem_pkt, 0, EM_VSEM_INFO_LEN);
        if(newbase_hdmi_get_vsem_emp(port, vsem_pkt)>0)
        {
            l11_present = (vsem_pkt[5]&_BIT5)>>5; // Follow DolbyVision_Metadata_Structure_for_Source_and_Sink_Connections_Specification_V1.1.pdf
            if(l11_present == 1) //support L11
            {//TBD, Follow DolbyVision_Metadata_Structure_for_Source_and_Sink_Connections_Specification_V1.1.pdf
                get_data[0] = vsem_pkt[10]; // Content sub type/Content type
                get_data[1] = vsem_pkt[11]; // Intend White Point
                get_data[2] = vsem_pkt[12]; // L11_Byte2
                get_data[3] = vsem_pkt[13]; // L11_Byte3
                result =  TRUE;
            }
            else
            {//NO L11 Data
                HDMI_INFO("[newbase_hdmi_get_dolby_L11_content port:%d] No L11 Data", port);
                result =  FALSE;
            }
        }
        else
        {
            //no emp
            result =  FALSE;
        }
    }
    return result;
}

unsigned char newbase_hdmi_check_spd_name(unsigned char port, unsigned char *vendor_name)
{
    unsigned char i;

    if (hdmi_rx[port].spd_t.type_code == 0)
        return 0;

    for (i=0; i<8; i++)
    {
        if (hdmi_rx[port].spd_t.VendorName[i] != vendor_name[i])
        {
            return 0;
        }
    }

    HDMI_WARN("This is  [%c, %c, %c, %c, %c, %c, %c, %c]!!\n",
        hdmi_rx[port].spd_t.VendorName[0], hdmi_rx[port].spd_t.VendorName[1],
        hdmi_rx[port].spd_t.VendorName[2], hdmi_rx[port].spd_t.VendorName[3],
        hdmi_rx[port].spd_t.VendorName[4], hdmi_rx[port].spd_t.VendorName[5],
        hdmi_rx[port].spd_t.VendorName[6], hdmi_rx[port].spd_t.VendorName[7]);

    return 1;
}

unsigned char newbase_hdmi_check_spd_prod(unsigned char port, unsigned char *prod_desc)
{
    unsigned char i;

    if (hdmi_rx[port].spd_t.type_code == 0)
        return 0;

    for (i=0; i<16; i++)
    {
        if (hdmi_rx[port].spd_t.ProductDesc[i] != prod_desc[i])
        {
            return 0;
        }
    }

    HDMI_PRINTF("ProductDesc [%c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c, %c]\n",
        hdmi_rx[port].spd_t.ProductDesc[0], hdmi_rx[port].spd_t.ProductDesc[1],
        hdmi_rx[port].spd_t.ProductDesc[2], hdmi_rx[port].spd_t.ProductDesc[3],
        hdmi_rx[port].spd_t.ProductDesc[4], hdmi_rx[port].spd_t.ProductDesc[5],
        hdmi_rx[port].spd_t.ProductDesc[6], hdmi_rx[port].spd_t.ProductDesc[7],
        hdmi_rx[port].spd_t.ProductDesc[8], hdmi_rx[port].spd_t.ProductDesc[9],
        hdmi_rx[port].spd_t.ProductDesc[10], hdmi_rx[port].spd_t.ProductDesc[11],
        hdmi_rx[port].spd_t.ProductDesc[12], hdmi_rx[port].spd_t.ProductDesc[13],
        hdmi_rx[port].spd_t.ProductDesc[14], hdmi_rx[port].spd_t.ProductDesc[15]);
    return 1;
}


/**********************************************************************************************
*
*   Info Frmae Thread 
*
**********************************************************************************************/
static bool infoframe_flag = false;
static struct task_struct *infoframe_task;
unsigned char ucInfoframe_Thread_Stop = _FALSE;


/*---------------------------------------------------
 * Func : newbase_hdmi_infoframe_update
 *
 * Desc : update infoframe of every hdmi port.
 *
 * Para : N/A
 *
 * Retn : N/A
 *--------------------------------------------------*/
void newbase_hdmi_infoframe_update(void)
{
    int i;
    for( i = 0 ; i < HDMI_PORT_TOTAL_NUM; ++i )
        newbase_hdmi_update_infoframe(i);         // update info frame for each port
}

/*---------------------------------------------------
 * Func : newbase_hdmi_infoframe_rx_enable
 *
 * Desc : enable / disable HDMI info packet rx.
 *        when enabled, HDMI driver creates a kernel thread
 *        for HDMI info frame receiving
 *
 * Para : on : 0 : disabled, others: neabled
 *
 * Retn : N/A
 *--------------------------------------------------*/
static int _infoframe_rx_thread(void* arg)
{
    set_freezable(); //remove thread flag PF_NOFREEZE
    while (!kthread_freezable_should_stop(NULL) && infoframe_flag)
    {
#ifdef CONFIG_SUPPORT_DOLBY_VSIF
        _lock_dolby_vsif_sem();

        if (_FALSE == hdmi_get_infoframe_thread_stop())
        {
            newbase_hdmi_infoframe_update();
        }
        _unlock_dolby_vsif_sem();
#else
        newbase_hdmi_infoframe_update();
#endif

        msleep_interruptible(40);
    }

    return 0;
}

/*---------------------------------------------------
 * Func : hdmi_get_infoframe_thread_stop
 *
 * Desc : get info frame thread status
 *
 * Para : N/A
 *
 * Retn : info frame update 
 *--------------------------------------------------*/
unsigned char hdmi_get_infoframe_thread_stop(void)
{
#ifdef CONFIG_SUPPORT_DOLBY_VSIF
    return ucInfoframe_Thread_Stop;
#endif 

    return _FALSE;  // never stop rx
}

#ifdef CONFIG_SUPPORT_DOLBY_VSIF
/*---------------------------------------------------
 * Func : hdmi_set_infoframe_thread_stop
 *
 * Desc : tempolar disable infofram rx update.
 *        this function will called by Scalar driver
 *        when it doesn't want HDMI driver to update info 
 *        frame. in this case, scalar driver will call
 *        newbase_hdmi_infoframe_update to update info frame. 
 *
 * Para : ucStop : stop hdmi info thread update
 *
 * Retn : N/A
 *
 * Note : This patch may need refine in the furture.
 *--------------------------------------------------*/
void hdmi_set_infoframe_thread_stop(unsigned char ucStop)
{
    _lock_dolby_vsif_sem();
    ucInfoframe_Thread_Stop = ucStop;
    _unlock_dolby_vsif_sem();
}
#endif

/*---------------------------------------------------
 * Func : hdmi_set_infoframe_thread_stop_nonseamphore
 *
 * Desc : as hdmi_set_infoframe_thread_stop but without 
 *        semaphore protection (calling at ISR)
 *
 * Para : ucStop : stop hdmi info thread update
 *
 * Retn : N/A
 *
 * Note : This patch may need refine in the furture.
 *--------------------------------------------------*/
void hdmi_set_infoframe_thread_stop_nonseamphore(unsigned char ucStop)// for ISR use
{
    ucInfoframe_Thread_Stop = ucStop;
}


/*---------------------------------------------------
 * Func : newbase_hdmi_infoframe_rx_enable
 *
 * Desc : enable / disable HDMI info packet rx.
 *        when enabled, HDMI driver creates a kernel thread
 *        for HDMI info frame receiving
 *
 * Para : on : 0 : disabled, others: neabled
 *
 * Retn : N/A
 *--------------------------------------------------*/
void newbase_hdmi_infoframe_rx_enable(unsigned char on)
{
    int err = 0;

    if (on)
    {
        if (infoframe_flag!=true)
        {
            infoframe_task = kthread_create(_infoframe_rx_thread, NULL, "infoframe_task");

#ifdef CONFIG_SUPPORT_DOLBY_VSIF
            hdmi_set_infoframe_thread_stop(_FALSE);
#endif

            if (IS_ERR(infoframe_task))
            {
                err = PTR_ERR(infoframe_task);
                infoframe_task = NULL;

                infoframe_flag = false;
                HDMI_EMG("%s , Unable to start kernel thread (err_id = %d) infopack .\n", __func__,err);
                return ;
            }

            infoframe_flag = true;
            wake_up_process(infoframe_task);
            HDMI_PRINTF("%s hdmi infopack thread started\n" , __func__ );
        }
    }
    else
    {
        if (infoframe_flag)
        {
            if (kthread_stop(infoframe_task)==0)
                HDMI_PRINTF("hdmi info thread stopped\n");
            else
                HDMI_EMG("hdmi info thread stopped error\n");
            
            infoframe_flag = false;
        }
    }
}

INFO_PACKET_CONFIG* newbase_hdmi_get_infopacket_config(INFO_PACKET_TYPE info_type)
{
    unsigned int select_index = 0xFFFF;
    unsigned int i = 0;
    for(i = 0; i< INFO_TYPE_NUM; i ++)
    {
        if(info_packet_config_array[i].type_name == info_type)
        {
            select_index = i;
            break;
        }
    }
    return (select_index != 0xFFFF) ? &info_packet_config_array[select_index] : NULL;
}

RESERVED_PACKET_DATA* newbase_hdmi_get_reserved_data(unsigned char reserved_pkt_index, unsigned char port)
{//TBD
    if(port >= HDMI_PORT_TOTAL_NUM)
        port = newbase_hdmi_get_current_display_port();

    return (reserved_pkt_index<RESERVED_PACKET_NUM) ? &reserved_data_temp[reserved_pkt_index][port] : NULL;
}


