#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include "japan4k_dmx.h"
#include <linux/kthread.h>
#include <linux/pageremap.h>

#include <rbus/tp_reg.h>
#include <tp/tp_dbg.h>
#include <tp/tp_drv_global.h>
#include <tp/tp_reg_ctrl.h>
#include "tlv_lib.h"
#include <linux/freezer.h>
#include <asm/cacheflush.h>
#include <linux/delay.h>
#include <rbus/timer_reg.h>
#include <rbus/pll_reg_reg.h>

#include <linux/uaccess.h>

#define japan4k_dmx_malloc(size)        kmalloc(size, GFP_KERNEL)
#define japan4k_dmx_free(addr)          kfree(addr)

extern UINT32 DoCRC32(UINT8 *data, UINT32 len);
extern u32 TP_reverseInteger(u32 value);


#define TP_BUFFER_MASS_DATA     0
#define TP_BUFFER_SECTION       1
#define TP_BUFFER_INFO_PACK     2
#define TP_BUFFER_CI            3
#define CID_IP_MAPPING_MAX_NUM  16

#define MAX_JAPAN4K_DMX     2
struct japan4k_dmx g_japan4k_dmx[MAX_JAPAN4K_DMX];

JP4K_DELIVERY_MAPPING_INFO g_jp4k_cid_ip_mappingInfo[MAX_TP_COUNT][CID_IP_MAPPING_MAX_NUM];

void dump_channel_tlv(UINT8 tp_id, UINT8 *p_data, UINT32 len)
{
    _tp_dump_lock();
    if(rec_tlv_fd[tp_id] != NULL) {
            mm_segment_t old_fs;
            old_fs = get_fs();
            set_fs(KERNEL_DS);
            vfs_write(rec_tlv_fd[tp_id], p_data, len, &rec_tlv_fd[tp_id]->f_pos);
            set_fs(old_fs);
    }
    _tp_dump_unlock();

}

void dump_channel_filtered_tlv(UINT8 tp_id, UINT8 *p_data, UINT32 len)
{
    _tp_dump_lock();
    if(rec_filter_tlv_fd[tp_id] != NULL) {
            mm_segment_t old_fs;
            old_fs = get_fs();
            set_fs(KERNEL_DS);
            vfs_write(rec_filter_tlv_fd[tp_id], p_data, len, &rec_filter_tlv_fd[tp_id]->f_pos);
            set_fs(old_fs);
    }
    _tp_dump_unlock();

}

void japan4k_update_cid_ip_mappingInfo(UINT8 tp_id, UINT16 cid, UINT8 *p_src_ipInfo, UINT8 *p_dst_ipInfo, UINT32 ipLen, UINT8 ipflag)
{
    UINT8 i;
    for(i = 0; i < CID_IP_MAPPING_MAX_NUM; i++){
        /* update mapping info */
        if(cid == g_jp4k_cid_ip_mappingInfo[tp_id][i].cid){
            g_jp4k_cid_ip_mappingInfo[tp_id][i].ipflag = ipflag;
            memcpy(g_jp4k_cid_ip_mappingInfo[tp_id][i].src_ip, p_src_ipInfo, ipLen);
            memcpy(g_jp4k_cid_ip_mappingInfo[tp_id][i].dst_ip, p_dst_ipInfo, ipLen);
            break;
        }
    }
    if(i == CID_IP_MAPPING_MAX_NUM){
        for(i = 0; i <  CID_IP_MAPPING_MAX_NUM; i++){
            /* no cid equal, find a new to store */
            if(TLV_INVALID_CID_VALUE == g_jp4k_cid_ip_mappingInfo[tp_id][i].cid){
                g_jp4k_cid_ip_mappingInfo[tp_id][i].ipflag = ipflag;
                g_jp4k_cid_ip_mappingInfo[tp_id][i].cid = cid;
                memcpy(g_jp4k_cid_ip_mappingInfo[tp_id][i].src_ip, p_src_ipInfo, ipLen);
                memcpy(g_jp4k_cid_ip_mappingInfo[tp_id][i].dst_ip, p_dst_ipInfo, ipLen);
                break;
            }
        }
    }

    if(i == CID_IP_MAPPING_MAX_NUM)
        JAPAN4K_DMX_ERROR("cid:%d ip mapping failed since array > 16!!", cid);
    return ;
}

int japan4k_dmx_tlv_filter_param_compare(struct japan4k_dmx* p_this, JP4K_DELIVERY_PAKET_FILTER_INFO*  p_tlv_packet_param)
{
    int i;
    /*  if mmtp_type is 0, drop this packet, if is 2, always return to user level
        0: ignore ip address, compare mmtp packet_id
        1: ipv4: if ip address is not null, compare ip address and store cid, then compare packet id
                 if ip address is null, compare cid with the stored cid by ip, then compare packet id
        2: ipv6: if ip address is not null, compare ip address and store cid, then compare packet id
                 if ip address is null, compare cid with the stored cid by ip, then compare packet id
        other: no compare action
        return value: 0: means drop this packet
                      1: means return packet to user level
    */
    if(p_tlv_packet_param->mmtp_type == TLV_PAKET_MMTP_PAYLAD_SI)
        return 1;

    for(i = 0; i < p_this->tlv_filter_cnt; i++){
        if(p_this->tlv_filter_param_list[i].flag == 0){
            if( (p_this->tlv_filter_param_list[i].packet_id == p_tlv_packet_param->filter_info.packet_id) ){
                return 1;
            }
        }
        else if(p_this->tlv_filter_param_list[i].flag == 1){
            if( (0 == memcmp(p_this->tlv_filter_param_list[i].dst_ip, p_tlv_packet_param->filter_info.dst_ip, 4))
                && (0 == memcmp(p_this->tlv_filter_param_list[i].src_ip, p_tlv_packet_param->filter_info.src_ip, 4)) ){
                p_this->cid_mapping_list[i] = p_tlv_packet_param->cid;
            }
            if( (p_this->cid_mapping_list[i] == p_tlv_packet_param->cid) && (p_this->tlv_filter_param_list[i].packet_id == p_tlv_packet_param->filter_info.packet_id) ){
                return 1;
            }
        }
        else if(p_this->tlv_filter_param_list[i].flag == 2){
            if( (0 == memcmp(p_this->tlv_filter_param_list[i].dst_ip, p_tlv_packet_param->filter_info.dst_ip, 16))
                && (0 == memcmp(p_this->tlv_filter_param_list[i].src_ip, p_tlv_packet_param->filter_info.src_ip, 16)) ){
                p_this->cid_mapping_list[i] = p_tlv_packet_param->cid;
            }
            if( (p_this->cid_mapping_list[i] == p_tlv_packet_param->cid) && (p_this->tlv_filter_param_list[i].packet_id == p_tlv_packet_param->filter_info.packet_id)){
                return 1;
            }
        }
        else{
            JAPAN4K_DMX_DBG("Filter parameter from FPP is error!,flag:%d", p_this->tlv_filter_param_list[i].flag);
            return 1;
        }
    }
    return 0;
}
/*======================================================
 * Func  : japan4k_dmx_tlv_packet_filter
 * Desc  :
 * Param : tlv packet
 * Retn  : 1 : this TLV packet matched by packet id or (parket id and ip addr)
 *         0 : not matched
 *======================================================*/
int japan4k_dmx_tlv_packet_filter(struct japan4k_dmx* p_this, unsigned char* tlv_packet)
{
    TLV_HEADER*  tlv_header  = NULL;
    IPV4_HEADER* ipv4_header = NULL;
    IPV6_HEADER* ipv6_header = NULL;
    HCFB_HEADER* hcfb_header = NULL;
    PARTIAL_IPV4_HEADER* partial_ipv4_header = NULL;
    PARTIAL_IPV6_HEADER* partial_ipv6_header = NULL;
    PARTIAL_UDP_HEADER*  partial_udp_header = NULL;
    TCP_HEADER*  tcp_header = NULL;
    UDP_HEADER*  udp_header = NULL;
    MMTP_HEADER* mmtp_header = NULL;
    JP4K_DELIVERY_PAKET_FILTER_INFO  tlv_packet_param;

    tlv_header = (TLV_HEADER*)tlv_packet;
    memset(&tlv_packet_param, 0, sizeof(JP4K_DELIVERY_PAKET_FILTER_INFO));

    /*cnt=0, only si packet copyto user*/
    //if(0 == p_this->tlv_filter_cnt)
        //return 1;

    switch(tlv_header->paket_type) {
        case TLV_PAKET_TYPE_IPv4:
            tlv_packet_param.cid = TLV_INVALID_CID_VALUE;
            ipv4_header = (IPV4_HEADER*)(tlv_header + 1);
            if(TLV_IP_PACkET_TCP == ipv4_header->proto){
                tcp_header  = (TCP_HEADER*)(ipv4_header + 1);
                mmtp_header = (MMTP_HEADER*)(tcp_header + 1);
            }
            else if(TLV_IP_PACkET_UDP == ipv4_header->proto){
                udp_header  = (UDP_HEADER*)(ipv4_header + 1);
                mmtp_header = (MMTP_HEADER*)(udp_header + 1);
            }
            memcpy(tlv_packet_param.filter_info.src_ip, &ipv4_header->saddr, sizeof(IP_ADDRESS));
            memcpy(tlv_packet_param.filter_info.dst_ip, &ipv4_header->daddr, sizeof(IP_ADDRESS));
            JAPAN4K_DMX_DBG("ipv4 protocal is %d", ipv4_header->proto);
            break;
        case TLV_PAKET_TYPE_IPv6:
            tlv_packet_param.cid = TLV_INVALID_CID_VALUE;
            ipv6_header = (IPV6_HEADER*)(tlv_header + 1);
            if(TLV_IP_PACkET_TCP == ipv6_header->next_header){
                tcp_header  = (TCP_HEADER*)(ipv6_header + 1);
                mmtp_header = (MMTP_HEADER*)(tcp_header + 1);
            }
            else if(TLV_IP_PACkET_UDP == ipv6_header->next_header){
                udp_header  = (UDP_HEADER*)(ipv6_header + 1);
                mmtp_header = (MMTP_HEADER*)(udp_header + 1);
            }
            memcpy(tlv_packet_param.filter_info.src_ip, &ipv6_header->saddr, sizeof(IPV6_ADDRESS));
            memcpy(tlv_packet_param.filter_info.dst_ip, &ipv6_header->daddr, sizeof(IPV6_ADDRESS));
            JAPAN4K_DMX_DBG("ipv6 protocal is %d, 0x%x, 0x%x", ipv6_header->next_header, tlv_packet[4], tlv_packet[5]);
            /* only live TV need NTP */
            if(p_this->tp_id < TP_TP2)
                TP_japan4k_parse_NTP(tlv_packet, p_this);

            break;
        case TLV_PAKET_TYPE_HCIP:
            hcfb_header = (HCFB_HEADER*)(tlv_header + 1);
            tlv_packet_param.cid = htons(hcfb_header->cid_sn) >> 4;

            if(TLV_HCFB_PARTIAL_IPV4 == hcfb_header->type){
                partial_ipv4_header = (PARTIAL_IPV4_HEADER*)(hcfb_header + 1);
                partial_udp_header  = (PARTIAL_UDP_HEADER*)(partial_ipv4_header + 1);
                mmtp_header = (MMTP_HEADER*)(partial_udp_header + 1);
                memcpy(tlv_packet_param.filter_info.src_ip, &partial_ipv4_header->saddr, sizeof(IP_ADDRESS));
                memcpy(tlv_packet_param.filter_info.dst_ip, &partial_ipv4_header->daddr, sizeof(IP_ADDRESS));
            }
            else if(TLV_HCFB_PARTIAL_IPV6 == hcfb_header->type){
                partial_ipv6_header = (PARTIAL_IPV6_HEADER*)(hcfb_header + 1);
                partial_udp_header  = (PARTIAL_UDP_HEADER*)(partial_ipv6_header + 1);
                mmtp_header = (MMTP_HEADER*)(partial_udp_header + 1);
                memcpy(tlv_packet_param.filter_info.src_ip, &partial_ipv6_header->saddr, sizeof(IPV6_ADDRESS));
                memcpy(tlv_packet_param.filter_info.dst_ip, &partial_ipv6_header->daddr, sizeof(IPV6_ADDRESS));
                japan4k_update_cid_ip_mappingInfo(p_this->tp_id, tlv_packet_param.cid, (unsigned char*)(&partial_ipv6_header->saddr), (unsigned char*)(&partial_ipv6_header->daddr), sizeof(IPV6_ADDRESS), 2);
            }
            else if(TLV_HCFB_IPV4 == hcfb_header->type){
                ipv4_header = (IPV4_HEADER*)(hcfb_header + 1);
                if(TLV_IP_PACkET_TCP == ipv4_header->proto){
                    tcp_header  = (TCP_HEADER*)(ipv4_header + 1);
                    mmtp_header = (MMTP_HEADER*)(tcp_header + 1);
                }
                else if(TLV_IP_PACkET_UDP == ipv4_header->proto){
                    udp_header  = (UDP_HEADER*)(ipv4_header + 1);
                    mmtp_header = (MMTP_HEADER*)(udp_header + 1);
                }
                memcpy(tlv_packet_param.filter_info.src_ip, &ipv4_header->saddr, sizeof(IP_ADDRESS));
                memcpy(tlv_packet_param.filter_info.dst_ip, &ipv4_header->daddr, sizeof(IP_ADDRESS));
                JAPAN4K_DMX_DBG("ipv4 protocal is %d", ipv4_header->proto);
            }
            else if(TLV_HCFB_NO_HEADER == hcfb_header->type){
                mmtp_header = (MMTP_HEADER*)(hcfb_header + 1);
            }
            JAPAN4K_DMX_DBG("hcfb type is %d packet_id=0x%x ", hcfb_header->type, htons(mmtp_header->packet_id));
            break;
        /*for Trasmission contral signal packet, not need filter */
        case TLV_PAKET_TYPE_TCS:
            return 1;
        default:
            JAPAN4K_DMX_DBG("tlv packet is null packet or undefined packet");
            return 0;
    }

    if(NULL == mmtp_header){
        JAPAN4K_DMX_DBG("mmtp header get failed!! ");
        return 0;
    }
    tlv_packet_param.filter_info.packet_id = htons(mmtp_header->packet_id);
    tlv_packet_param.mmtp_type = mmtp_header->type & 0x3F;

    return japan4k_dmx_tlv_filter_param_compare(p_this, &tlv_packet_param);
}

/*======================================================
 * Func  : japan4k_dmx_get_CIDMappingInfo
 * Desc  : get cid ip mapping info 
 * Param : 
 * Retn  : 0 : successed, oethers failed
 *======================================================*/
int japan4k_dmx_get_CIDMappingInfo(unsigned char ch, unsigned int *pcnt, JP4K_DELIVERY_MAPPING_INFO *pMapInfo)
{
    int i, cnt = 0;
    for(i = 0; i < CID_IP_MAPPING_MAX_NUM; i++){
        if(TLV_INVALID_CID_VALUE != g_jp4k_cid_ip_mappingInfo[ch][i].cid){
            if(copy_to_user((void *)(pMapInfo), (const void __user *)&(g_jp4k_cid_ip_mappingInfo[ch][i]), sizeof(JP4K_DELIVERY_MAPPING_INFO))) {
                JAPAN4K_DMX_ERROR("ERROR!! copy to user error L:%d", __LINE__);
                *pcnt = cnt;
                return -1;
            }
            pMapInfo++;
            cnt++;
        }
    }
    *pcnt = cnt;
    return 0;
}

int japan4k_dmx_flush(unsigned char ch)
{
    int i;
    for(i = 0; i < CID_IP_MAPPING_MAX_NUM; i++){
        g_jp4k_cid_ip_mappingInfo[ch][i].cid = TLV_INVALID_CID_VALUE;
        g_jp4k_cid_ip_mappingInfo[ch][i].ipflag= 0x0;
        memset(g_jp4k_cid_ip_mappingInfo[ch][i].src_ip, 0x0, 16);
        memset(g_jp4k_cid_ip_mappingInfo[ch][i].dst_ip, 0x0, 16);
    }
    return 0;
}

/*======================================================
 * Func  : japan4k_raw_mode_run 
 * Desc  :
 * Param : get tlv data from tp by raw mode
 * Retn  : 0 : successed, oethers failed
 *======================================================*/
int japan4k_dmx_get_data_by_rawmode(struct japan4k_dmx* p_this)
{
    unsigned char *p_rp, *p_rp_ori;
    UINT32        tlv_buffer_max_size, tlv_buffer_now_size;
    UINT32        len, len_ori;

    JAPAN4K_DMX_TRACE();

    while (japan4k_file_ring_read_data(p_this->tp_id, &p_rp, &len) == 0 && len ) {
            p_rp_ori = p_rp;
            len_ori  = len;
            while(len > 0) {

                    TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
                    if( (tlv_buffer_max_size - tlv_buffer_now_size) <= 64 * 1024 )
                            break;

                    JAPAN4K_DMX_DBG("read data from ring (%p) = { %02x.%02x.%02x.%02x....%02x.%02x.%02x.%02x }\n",
                                    p_rp,
                                    p_rp[0], p_rp[1], p_rp[2], p_rp[3],
                                    p_rp[len - 4], p_rp[len - 3], p_rp[len - 2], p_rp[len - 1]);

                    if (p_this->tlv_excepted_zize == 0) {
                            // fid header header....
                            unsigned char* p_tlv;
                            unsigned int   data_len;

                            p_tlv = tlv_find_starter(p_rp, len, 0);
                            if (p_tlv == NULL) {
                                    TLV_RELEASE_DATA(len);
                                    JAPAN4K_DMX_ERROR("tlv re-sync 1 can not find sync byte p_rp=%p len=%d\n", p_rp, len);
                                    continue;
                            }

                            if (p_tlv > p_rp) {
                                    // release spare data...
                                    data_len = (unsigned int)(p_tlv - p_rp);
                                    TLV_RELEASE_DATA(data_len);
                                    JAPAN4K_DMX_ERROR("tlv re-sync 2 p_rp=%p len=%d data_len=%d\n", p_rp, len, data_len);
                            }

                            if (len < TLV_HDR_SIZE) { // data less than 4 bytes
                                    p_this->tlv_excepted_zize = TLV_HDR_SIZE;
                                    p_this->tlv_buff_zize     = len;            // minimum size...
                                    memcpy(p_this->tlv_buffer, p_rp, len);      // store temp buffer
                                    TLV_RELEASE_DATA(len);
                                    continue;
                            } else {
                                    // a complete packet header
                                    p_this->tlv_excepted_zize = TLV_HDR_SIZE + (p_rp[2] << 8) + (p_rp[3]);
    
                                    if(p_this->tlv_excepted_zize > TLV_MAX_SIZE) {
                                            JAPAN4K_DMX_ERROR("TLV data length is too big %d p_rp=%p len=%d\n", p_this->tlv_excepted_zize, p_rp, len);
                                            p_this->tlv_excepted_zize = 0;
                                            p_this->tlv_buff_zize = 0;
                                            TLV_RELEASE_DATA(1);
                                            continue;
                                    }

                                    if (len >= p_this->tlv_excepted_zize) {
                                            JAPAN4K_DMX_DBG("complete data block, just deliver it\n");
                                            // a complete data block : dispatch data directly
                                            if(p_rp[1] != 0xff && japan4k_dmx_tlv_packet_filter(p_this, p_rp) ){
                                                    p_this->cb.callback(p_this, p_rp, p_this->tlv_excepted_zize);
                                                    dump_channel_filtered_tlv(p_this->tp_id, p_rp, p_this->tlv_excepted_zize);
                                            }

                                            TLV_RELEASE_DATA(p_this->tlv_excepted_zize);
                                            p_this->tlv_excepted_zize = 0;
                                            p_this->tlv_buff_zize = 0;
                                            continue;
                                    } else {
                                            // part of block... : store it in the internal buffer
                                            memcpy(p_this->tlv_buffer, p_rp, len);
                                            p_this->tlv_buff_zize = len;
                                            TLV_RELEASE_DATA(len);
    
                                            JAPAN4K_DMX_DBG("part of data block, collect it, buff_size=%lu, excepted size=%u\n",
                                                            p_this->tlv_buff_zize, p_this->tlv_excepted_zize);
                                            continue;
                                    }
                            }
                    } else if (p_this->tlv_excepted_zize == TLV_HDR_SIZE) {
                            // collecting header....
                            int data_len = TLV_HDR_SIZE - p_this->tlv_buff_zize;

                            JAPAN4K_DMX_DBG("collect data header, len = %u, buff_size=%lu, excepted size=%u\n",
                                            len, p_this->tlv_buff_zize, p_this->tlv_excepted_zize);

                            if (data_len > len)
                                    data_len = len;

                            memcpy(p_this->tlv_buffer + p_this->tlv_buff_zize, p_rp, data_len);
                            p_this->tlv_buff_zize += data_len;
                            TLV_RELEASE_DATA(data_len);

                            if (p_this->tlv_buff_zize == p_this->tlv_excepted_zize) {
                                    // parse header
                                    p_this->tlv_excepted_zize += (p_this->tlv_buffer[2] << 8) + (p_this->tlv_buffer[3]);

                                    if(p_this->tlv_excepted_zize > TLV_MAX_SIZE) {
                                            JAPAN4K_DMX_ERROR("TLV data length is too big %d p_rp=%p data_len=%d\n", p_this->tlv_excepted_zize, p_rp, data_len);
                                            p_this->tlv_excepted_zize = 0;
                                            p_this->tlv_buff_zize = 0;
                                    }
                                    if(p_this->tlv_excepted_zize == TLV_HDR_SIZE) {
                                            p_this->tlv_excepted_zize = 0;
                                            p_this->tlv_buff_zize = 0;
                                    }
                                    continue;
                            }
                    } else {
                            // collecting data
                            int data_len = p_this->tlv_excepted_zize - p_this->tlv_buff_zize;       // remain size
                            JAPAN4K_DMX_DBG("collect data block, len = %u, buff_size=%lu, excepted size=%u\n",
                                            len, p_this->tlv_buff_zize, p_this->tlv_excepted_zize);

                            if (data_len > len)
                                    data_len = len;

                            memcpy(p_this->tlv_buffer + p_this->tlv_buff_zize, p_rp, data_len);
                            TLV_RELEASE_DATA(data_len);

                            p_this->tlv_buff_zize += data_len;

                            if (p_this->tlv_buff_zize >= p_this->tlv_excepted_zize) {
                                    // complete block
                                    if(p_this->tlv_buffer[1] != 0xff && japan4k_dmx_tlv_packet_filter(p_this, p_this->tlv_buffer) ){
                                            p_this->cb.callback(p_this, p_this->tlv_buffer, p_this->tlv_excepted_zize);
                                            dump_channel_filtered_tlv(p_this->tp_id, p_this->tlv_buffer, p_this->tlv_excepted_zize);
                                    }
                                    p_this->tlv_excepted_zize = 0;
                                    p_this->tlv_buff_zize = 0;
                            }
                    }
            }
            japan4k_file_ring_release_data(p_this->tp_id, p_rp_ori, len_ori - len);
            TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
            JAPAN4K_DMX_DBG("[%d] %d %d\n", p_this->tp_id, tlv_buffer_max_size, tlv_buffer_now_size);
            if( (tlv_buffer_max_size - tlv_buffer_now_size) <= 64 * 1024 )
                    break;
    }
    return 0;
}

/*======================================================
 * Func  : japan4k_dmx_get_data_by_hwtlv 
 * Desc  :
 * Param : get tlv data from tp by hw tlv parse
 * Retn  : 0 : successed, others failed
 *======================================================*/
int japan4k_dmx_get_data_by_hwtlv(struct japan4k_dmx* p_this)
{
    unsigned long length_temp, i, tlv_packet_cnt;
    unsigned long flag_temp, data0_temp, data1_temp, wp_temp, rp_temp, buffer_flag_temp,dbg_cnt_temp;
    unsigned char *pData;
    UINT32        tlv_buffer_max_size, tlv_buffer_now_size;

    JAPAN4K_DMX_TRACE();

    while(READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg) != READ_REG32(TP_TLV_DESCRIPTOR_READ_reg))
    {
            TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
            if( (tlv_buffer_max_size - tlv_buffer_now_size) <= SIZE_PER_TLV_BUFFER )
                    break;

            wp_temp = READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg);
            rp_temp = READ_REG32(TP_TLV_DESCRIPTOR_READ_reg);

            WRITE_REG32( TP_TLV_DESCRIPTOR_reg, 0x00001000| (rp_temp&0x7f) );

            while(0) {
                    unsigned long temp;
                    temp = READ_REG32(TP_TLV_DESCRIPTOR_reg);
                    if(temp == 0x0)
                            break;
                    JAPAN4K_DMX_WARN(".\n");
            }
  
            flag_temp    = READ_REG32(TP_TLV_DESCRIPTOR_FLAG_reg);
            data0_temp   = READ_REG32(TP_TLV_DESCRIPTOR_DATA0_reg);
            data1_temp   = READ_REG32(TP_TLV_DESCRIPTOR_DATA1_reg);
            dbg_cnt_temp = READ_REG32(TP_TLV_DESCRIPTOR_PKT_NUM_reg);
            buffer_flag_temp = READ_REG32(TP_TLV_BUFFER_FLAG_reg);
            pData        = (char*)((data0_temp - pTp_drv->tp_japan[p_this->tp_id].mass_buffer.BasePhy) + pTp_drv->tp_japan[p_this->tp_id].mass_buffer.BaseVir);
 
            dmac_flush_range( pData, pData + SIZE_PER_TLV_BUFFER);
            outer_flush_range((UADDRESS)data0_temp, (UADDRESS)data0_temp + SIZE_PER_TLV_BUFFER);
            length_temp = data1_temp & 0x1FFFF;
 
            //printk(KERN_DEBUG"%lx c=%3ld l=0x%4lx w=0x%3lx r=0x%3lx f=0x%6lx bf=0x%2lx    [%02X %02X %02X %02X %02X %02X %02X %02X] %02X %02X %02X %02X %02X %02X\n", data0_temp, (data1_temp & 0x01FE0000)>>17, data1_temp & 0x1FFFF, wp_temp, rp_temp, flag_temp, buffer_flag_temp, pData[0], pData[1], pData[2], pData[3], pData[4], pData[5], pData[6], pData[7], pData[8], pData[9], pData[10], pData[11], pData[12], pData[13]);
            dump_channel_tlv(p_this->tp_id, pData, SIZE_PER_TLV_BUFFER);
    
            i = 0;
            tlv_packet_cnt = 0;
            while(i < length_temp) {
                    unsigned long tlv_size;
                    unsigned long long timestamp;

                    if(pData[i + TLV_STUFF_DATA_SIZE] != TLV_SYNC_BYTE) {
                            JAPAN4K_DMX_ERROR("ERROR!! Data is not sync byte [%02X %02X %02X %02X %02X %02X %02X %02X] %02X %02X %02X %02X %02X %02X\n", pData[i+0], pData[i+1], pData[i+2], pData[i+3], pData[i+4], pData[i+5], pData[i+6], pData[i+7], pData[i+8], pData[i+9], pData[i+10], pData[i+11], pData[i+12], pData[i+13]);
                            JAPAN4K_DMX_ERROR("wp=0x%x(%d) rp=0x%x(%d) i=%ld length_temp=%ld\n", READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg), READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg), READ_REG32(TP_TLV_DESCRIPTOR_READ_reg), READ_REG32(TP_TLV_DESCRIPTOR_READ_reg), i, length_temp);
                            pTp_drv->tp_japan[p_this->tp_id].not_sync_count++;
                            if(pTp_drv->tp_japan[p_this->tp_id].not_sync_count > 5) {
                                    pTp_drv->tp_japan[p_this->tp_id].not_sync_count = 0;
                                    JAPAN4K_DMX_ERROR("TP_TLV_BUFFER_FLAG_reg=0x%x TP_TLV_BUFFER_reg=0x%x\n", READ_REG32(TP_TLV_BUFFER_FLAG_reg), READ_REG32(TP_TLV_BUFFER_reg));
                                    TP_TLV_Reset(p_this->tp_id);
                            }
                            break;
                    }
                    tlv_size = ((pData[i + TLV_STUFF_DATA_SIZE + 2]<<8)&0xff00) + pData[i + TLV_STUFF_DATA_SIZE + 3];
                    if(pData[i + TLV_STUFF_DATA_SIZE + 1] != 0xff ){
                            unsigned long bitream_timestamp;
                            unsigned long tp_pcra = READ_REG32(TP_TP_INTERNAL_CNT_LOW_reg);
                            timestamp = ((unsigned long long)pData[i+0]<<56) + ((unsigned long long)pData[i+1]<<48) + ((unsigned long long)pData[i+2]<<40) + ((unsigned long long)pData[i+3]<<32) + ((unsigned long long)pData[i+4]<<24) + ((unsigned long long)pData[i+5]<<16) + ((unsigned long long)pData[i+6]<<8) + (unsigned long long)pData[i+7];
                            if(japan4k_dmx_tlv_packet_filter(p_this, &(pData[i + TLV_STUFF_DATA_SIZE])) ) {
                                    p_this->cb.callback(p_this, &pData[i + TLV_STUFF_DATA_SIZE], tlv_size + 4);
                                    dump_channel_filtered_tlv(p_this->tp_id, &pData[i + TLV_STUFF_DATA_SIZE], tlv_size + 4);
                            }
                            bitream_timestamp = pData[i + 4]<<24 | pData[i + 5]<<16 | pData[i + 6]<< 8 |  pData[i + 7];
                            if( (tp_pcra-bitream_timestamp) < 25000) {
                                    pTp_drv->tp_japan[p_this->tp_id].timestamp_range1++;
                            } else {
                                    pTp_drv->tp_japan[p_this->tp_id].timestamp_range2++;
                            }
                            if( (tp_pcra-bitream_timestamp) > pTp_drv->tp_japan[p_this->tp_id].timestamp_max)
                                    pTp_drv->tp_japan[p_this->tp_id].timestamp_max = (tp_pcra-bitream_timestamp);
                    }

                    i = i + TLV_STUFF_DATA_SIZE + 4 + tlv_size;
                    tlv_packet_cnt++;
            }
            //printk(KERN_DEBUG"tlv_packet_cnt = %ld\n", tlv_packet_cnt);

            //memset(pData, 0x00, SIZE_PER_TLV_BUFFER);
            //dmac_flush_range( pData, pData + SIZE_PER_TLV_BUFFER);
            //outer_flush_range((UADDRESS)data0_temp, (UADDRESS)data0_temp + SIZE_PER_TLV_BUFFER);

            WRITE_REG32(TP_TLV_DESCRIPTOR_DATA1_reg , 0x00000000 );
            WRITE_REG32( TP_TLV_DESCRIPTOR_reg      , 0x00001100| (rp_temp&0x7f) );

            while(0) {
                    UINT32 temp;
                    temp = READ_REG32(TP_TLV_DESCRIPTOR_reg);
                    if(temp == 0x0)
                            break;
                    JAPAN4K_DMX_WARN(".\n");
            }

            if( (READ_REG32(TP_TLV_DESCRIPTOR_FLAG_reg)&0x10000) != 0x00)  {
                    wp_temp = READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg);
                    rp_temp = READ_REG32(TP_TLV_DESCRIPTOR_READ_reg);
                    JAPAN4K_DMX_ERROR("full wp=0x%lx rp=0x%lx\n", wp_temp, rp_temp);
                    TP_TLV_Reset(p_this->tp_id);
            }
 
            if( (READ_REG32(TP_TLV_BUFFER_FLAG_reg)&TP_TLV_BUFFER_INT_overflow_en_mask) == TP_TLV_BUFFER_INT_overflow_en_mask)  {
                    JAPAN4K_DMX_ERROR("ERROR overflow TP_TLV_BUFFER_FLAG_reg=0x%x TP_TLV_BUFFER_reg=0x%x\n", READ_REG32(TP_TLV_BUFFER_FLAG_reg), READ_REG32(TP_TLV_BUFFER_reg));
            }        

            rp_temp++;
            if( (rp_temp&0xff)==0x00000080 ) {
                    rp_temp = ~rp_temp;
                    rp_temp = rp_temp & 0x00000100;
            }
            WRITE_REG32(TP_TLV_DESCRIPTOR_READ_reg, rp_temp);

            TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
            //JAPAN4K_DMX_ERROR("[%d] %ld %ld\n", p_this->tp_id, tlv_buffer_max_size, tlv_buffer_now_size);
            if( (tlv_buffer_max_size - tlv_buffer_now_size) <= 64 * 1024 )
                    break;
    }
    return 0;
}


/*======================================================
 * Func  : japan4k_dmx_set_TLV_filter
 * Desc  :
 * Param : 
 * Retn  : 0 : successed, oethers failed
 *======================================================*/
int japan4k_dmx_set_TLV_filter(unsigned int ch, unsigned int cnt, JP4K_DELIVERY_FILTER_T *pfiltet_info_list)
{
    unsigned int  i;
    if(NULL == pTp_drv->tp_japan[ch].dmx || TLV_PACKET_FILTER_MAX_NUM < cnt){
        JAPAN4K_DMX_ERROR("ERROR!! japan4k demux not opened!! cnt=%d", cnt);
        return -1;
    }

    if(copy_from_user( (void *)pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list,
                       (const void __user *)pfiltet_info_list, 
                       sizeof(JP4K_DELIVERY_FILTER_T) * cnt)  ){
        JAPAN4K_DMX_ERROR("ERROR!! copy from user failed!! cnt=%d", cnt);
        return -1;
    }

    pTp_drv->tp_japan[ch].dmx->tlv_filter_cnt = cnt;
    for(i = 0; i < cnt; i++){
        pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].packet_id = (pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].packet_id);
        JAPAN4K_DMX_INFO("japan4k_dmx_set_TLV_filter success %d,%d,0x%x!!", cnt,
                        pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].flag,
                        pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].packet_id);
        if(pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].flag == 1){
            JAPAN4K_DMX_INFO("IPv4 info: src ip:%d:%d:%d:%d dst_ip:%d:%d:%d:%d!!",
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[0],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[1],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[2],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[3],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[0],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[1],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[2],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[3]);
        }
        if(pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].flag == 2){
            JAPAN4K_DMX_INFO("IPv6 info: src ip:%x%x:%x%x:%x%x:%x%x:%x%x:%x%x:%x%x:%x%x dst_ip:%x%x:%x%x:%x%x:%x%x:%x%x:%x%x:%x%x:%x%x!!",
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[0],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[1],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[2],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[3],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[4],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[5],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[6],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[7],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[8],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[9],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[10],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[11],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[12],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[13],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[14],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].src_ip[15],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[0],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[1],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[2],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[3],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[4],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[5],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[6],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[7],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[8],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[9],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[10],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[11],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[12],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[13],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[14],
                pTp_drv->tp_japan[ch].dmx->tlv_filter_param_list[i].dst_ip[15]);
        }
    }
    return 0;
}
/*======================================================
 * Func  : japan4k_dmx_get_NTP
 * Desc  :
 * Param : 
 * Retn  : 0 : successed, oethers failed
 *======================================================*/
void japan4k_dmx_get_NTP(unsigned char tp_id, signed long long *pNTP)
{
    *pNTP = -1;
    if(pTp_drv->tp_japan[tp_id].dmx != NULL)
        *pNTP = pTp_drv->tp_japan[tp_id].dmx->tlv_NTP;
}

/*======================================================
 * Func  : japan4k_dmx_get_RCD
 * Desc  :
 * Param : 
 * Retn  : 0 : successed, oethers failed
 *======================================================*/
UINT64 japan4k_dmx_get_RCD(unsigned char tp_id)
{
    if(pTp_drv->tp_japan[tp_id].dmx != NULL)
        return pTp_drv->tp_japan[tp_id].dmx->RCD;
    else
        return -1;
}
/*======================================================
 * Func  : japan4k_dmx_run
 * Desc  :
 * Param : handle of japan4k dmx
 * Retn  : 0 : successed, oethers failed
 *======================================================*/
int japan4k_dmx_run(struct japan4k_dmx* p_this)
{
    if(pTp_drv->tp_japan[p_this->tp_id].tlv_mode == TPK_TP_TLV_SW_MODE){
        japan4k_dmx_get_data_by_rawmode(p_this);
    }else if(pTp_drv->tp_japan[p_this->tp_id].tlv_mode == TPK_TP_TLV_HW_MODE){
        japan4k_dmx_get_data_by_hwtlv(p_this);
    }
    return 0;
}

/*======================================================
 * Func  : create_japan4k_dmx
 *
 * Desc  : create a japan4k demux
 *
 * Param : p_dmx_in : input buffer
 *
 * Retn  : handle of japan4k dmx
 *======================================================*/
struct japan4k_dmx* create_japan4k_dmx(unsigned char tp_id)
{
    UINT32 i;
    struct japan4k_dmx* p_this;
    unsigned char index;
    JAPAN4K_DMX_TRACE();

    //p_this = (struct japan4k_dmx*) japan4k_dmx_malloc(sizeof(struct japan4k_dmx));
    index = (tp_id == TP_TP0 ? 0 : 1);
    p_this = &g_japan4k_dmx[index];
    if (p_this) {
        memset(p_this, 0, sizeof(struct japan4k_dmx));
        p_this->RCD = -1;
    }

    for(i = 0; i < CID_IP_MAPPING_MAX_NUM; i++){
        g_jp4k_cid_ip_mappingInfo[tp_id][i].cid = TLV_INVALID_CID_VALUE;
    }
    return p_this;
}

/*======================================================
 * Func  : destroy_japan4k_dmx
 *
 * Desc  :
 *
 * Param : handle of japan4k dmx
 *
 * Retn  : N/A
 *======================================================*/
void destroy_japan4k_dmx(struct japan4k_dmx* p_this)
{
    JAPAN4K_DMX_TRACE();
    if (p_this)
        p_this = NULL;
        //japan4k_dmx_free(p_this);
}

/*======================================================
 * Func  : japan4k_file_ring_read_data
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_read_data(
        unsigned char tp_id,
        unsigned char**         pp_rp,
        unsigned int*                 p_len
)
{
        int result;
        result = TP_ReadData_NoNeedAligment(tp_id, pp_rp, p_len, 1024, TP_BUFFER_MASS_DATA);
        *pp_rp = Tp_Buf_Phy_to_Vir(tp_id, TP_BUFFER_MASS_DATA, (unsigned char*)*pp_rp);
        if(result < 0) {
                *p_len = 0;
        }
        return 0;
}


/*======================================================
 * Func  : japan4k_file_ring_release_data
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_release_data(
        unsigned char tp_id,
        unsigned char*          p_rp,
        unsigned int            len
)
{
        dump_channel_tlv(tp_id, p_rp, len);

        p_rp = Tp_Buf_Vir_to_Phy(tp_id, TP_BUFFER_MASS_DATA, (unsigned char*)p_rp);

        TP_ReleaseData_NoNeedAligment(tp_id, p_rp, len, TP_BUFFER_MASS_DATA);
        return 0;
}

/*======================================================
 * Func  : japan4k_file_ring_get_free_space
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_get_free_space(
        unsigned char**         pp_wp,
        unsigned long*          p_len
)
{
        return 0;
}

/*======================================================
 * Func  : japan4k_file_ring_put_data
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_put_data(
        unsigned char*          p_wp,
        unsigned long           len
)
{
        return 0;
}

