#include "hdmi_common.h"
#include "hdmi_reg.h"
#include "hdmi_dsc.h"
#include "rbus/dscd_reg.h"

extern HDMI_PORT_INFO_T hdmi_rx[HDMI_PORT_TOTAL_NUM];


void _dump_dsc_pps(DSC_PPS* p_pps)
{
    unsigned char* rc_p = p_pps->rc_parameter_set;

    HDMI_DSC_INFO("DSC_PPS: dsc_version=%d.%d, pps_id=%d, bits_per_comp=%d, line_buffer_depth=%d, block_pred_enable=%d\n",
                    p_pps->dsc_version_major,
                    p_pps->dsc_version_minor,
                    p_pps->pps_identifier,
                    p_pps->bits_per_component,
                    p_pps->line_buffer_depth,
                    p_pps->block_pred_enable);

    HDMI_DSC_INFO("DSC_PPS: convert_rgb=%d, simple_422=%d, vbr_enable=%d, bits_per_pixel=%d\n",
                    p_pps->convert_rgb,
                    p_pps->simple_422,
                    p_pps->vbr_enable,
                    p_pps->bits_per_pixel);


    HDMI_DSC_INFO("DSC_PPS: pic_height=%d, pic_width=%d, slice_height=%d, slice_width=%d, chunk_size=%d\n",
                p_pps->pic_height,
                p_pps->pic_width,
                p_pps->slice_height,
                p_pps->slice_width,
                p_pps->chunk_size);

    HDMI_DSC_INFO("DSC_PPS: initial_xmit_delay=%d, initial_dec_delay=%d, initial_scale_value=%d, scale_increment_interval=%d, scale_decrement_interval=%d\n",
                p_pps->initial_xmit_delay,
                p_pps->initial_dec_delay,
                p_pps->initial_scale_value,
                p_pps->scale_increment_interval,
                p_pps->scale_decrement_interval);

    HDMI_DSC_INFO("DSC_PPS: first_line_bpg_offset=%d, nfl_bpg_offset=%d, slice_bpg_offset=%d, initial_offset=%d, final_offset=%d\n",
                p_pps->first_line_bpg_offset,
                p_pps->nfl_bpg_offset,
                p_pps->slice_bpg_offset,
                p_pps->initial_offset,
                p_pps->final_offset);

    HDMI_DSC_INFO("DSC_PPS: flatness_min_qp=%d, flatness_max_qp=%d\n",
                p_pps->flatness_min_qp,
                p_pps->flatness_max_qp);


    HDMI_DSC_INFO("DSC_PPS[36:37]: native_422=%d, flatness_max_qp=%d\n",
                p_pps->flatness_min_qp,
                p_pps->flatness_max_qp);


    // PPS38 - 87
    HDMI_DSC_INFO("DSC_PPS:RC[0] = %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
                rc_p[0], rc_p[1], rc_p[2], rc_p[3],
                rc_p[4], rc_p[5], rc_p[6], rc_p[7],
                rc_p[8], rc_p[9], rc_p[10], rc_p[11],
                rc_p[12], rc_p[13], rc_p[14], rc_p[15]);

    HDMI_DSC_INFO("DSC_PPS:RC[16] = %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
                rc_p[16], rc_p[17], rc_p[18], rc_p[19],
                rc_p[20], rc_p[21], rc_p[22], rc_p[23],
                rc_p[24], rc_p[25], rc_p[26], rc_p[27],
                rc_p[28], rc_p[29], rc_p[30], rc_p[31]);

    HDMI_DSC_INFO("DSC_PPS:RC[32] = %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
                rc_p[32], rc_p[33], rc_p[34], rc_p[35],
                rc_p[36], rc_p[37], rc_p[38], rc_p[39],
                rc_p[40], rc_p[41], rc_p[42], rc_p[43],
                rc_p[44], rc_p[45], rc_p[46], rc_p[47]);

    HDMI_DSC_INFO("DSC_PPS:RC[48] = %02x %02x\n", rc_p[48], rc_p[49]);

    // PPS88-91
    HDMI_DSC_INFO("DSC_PPS[88:91]: native_422=%d, native_420=%d, second_line_bpg_offset=%d, nsl_bpg_offset=%d, second_line_offset_adj=%d\n",
                p_pps->native_422,
                p_pps->native_420,
                p_pps->second_line_bpg_offset,
                p_pps->nsl_bpg_offset,
                p_pps->second_line_offset_adj);
}


void _parse_dsc_pps(unsigned char pps[DSC_PPS_LEN], DSC_PPS* p_pps)
{
    // PPS0
    p_pps->dsc_version_major = ((pps[0]>>4) & 0xF);
    p_pps->dsc_version_minor = (pps[0] & 0xF);

    // PPS1
    p_pps->pps_identifier = pps[1];

    // PPS2
    // PPS3
    p_pps->bits_per_component = ((pps[3]>>4) & 0xF);  // [7:4]
    p_pps->line_buffer_depth  = ((pps[3]) & 0xF);     // [3:0]


    // PPS4~5
    p_pps->block_pred_enable = ((pps[4]>>5) & 0x1);  // [5]
    p_pps->convert_rgb       = ((pps[4]>>4) & 0x1);  // [4]
    p_pps->simple_422        = ((pps[4]>>3) & 0x1);  // [3]
    p_pps->vbr_enable        = ((pps[4]>>2) & 0x1);  // [2]
    p_pps->bits_per_pixel    = ((pps[4] & 0x3)<<8) + pps[5];

    // PPS6~7
    p_pps->pic_height        = (pps[6]<<8) + pps[7];

    // PPS8~9
    p_pps->pic_width         = (pps[8]<<8) + pps[9];

    // PPS10-11
    p_pps->slice_height      = (pps[10]<<8) + pps[11];

    // PPS12-13
    p_pps->slice_width       = (pps[12] <<8) + pps[13];

    // PPS14-15
    p_pps->chunk_size        = (pps[14] <<8) + pps[15];

    // PPS16-17
    p_pps->initial_xmit_delay= ((pps[16] & 0x3) <<8) + pps[17];

    // PPS18-19
    p_pps->initial_dec_delay = (pps[18] <<8) + pps[19];

    // PPS20-21
    p_pps->initial_scale_value = pps[21] & 0x3F;

    // PPS22-23
    p_pps->scale_increment_interval = (pps[22] <<8) + pps[23];

    // PPS24-25
    p_pps->scale_decrement_interval = ((pps[24] & 0xF) <<8) + pps[25];

    // PPS26-27
    p_pps->first_line_bpg_offset = pps[27] & 0x1F;

    // PPS28-29
    p_pps->nfl_bpg_offset = (pps[28] <<8) + pps[29];

    // PPS30-31
    p_pps->slice_bpg_offset = (pps[30] <<8) + pps[31];

    // PPS32-33
    p_pps->initial_offset = (pps[32] <<8) + pps[33];

    // PPS34-35
    p_pps->final_offset = (pps[34] <<8) + pps[35];

    // PPS36
    p_pps->flatness_min_qp = pps[36] & 0x1F;

    // PPS37
    p_pps->flatness_max_qp = pps[37] & 0x1F;

    // PPS38 - 87
    memcpy(p_pps->rc_parameter_set, &pps[38], 50);

    // PPS88
    p_pps->native_420 = (pps[88]>>1) & 0x1;
    p_pps->native_422 = (pps[88]>>0) & 0x1;

    // PPS89
    p_pps->second_line_bpg_offset = (pps[89]& 0x1F);

    // PPS90~91
    p_pps->nsl_bpg_offset =  (pps[90] <<8) + pps[91];

    // PPS92~93
    p_pps->second_line_offset_adj =  (pps[92] <<8) + pps[93];
}


void lib_hdmi_dsc_crt_on(void)
{
    HDMI_INFO("[CRT]lib_hdmi_dsc_crt_on!\n");

    // reset DSC
    // DO CRT reset (I):  RST = L
    hdmi_out(SYS_REG_SYS_SRST0_reg, SYS_REG_SYS_SRST0_rstn_dscd_mask);
    udelay(5);

    // DO CRT reset (I):  CLK = OFF
    hdmi_out(SYS_REG_SYS_CLKEN0_reg, SYS_REG_SYS_CLKEN0_clken_dscd_mask);
    udelay(5);

    // DO CRT reset (I):  CLK = ON
    hdmi_out(SYS_REG_SYS_CLKEN0_reg, (SYS_REG_SYS_CLKEN0_clken_dscd_mask|
                                      SYS_REG_SYS_CLKEN0_write_data_mask));

    udelay(5);
    // DO CRT reset (I):  CLK = OFF
    hdmi_out(SYS_REG_SYS_CLKEN0_reg, SYS_REG_SYS_CLKEN0_clken_dscd_mask);

    udelay(5);
    // DO CRT reset (I):  RST = H
    hdmi_out(SYS_REG_SYS_SRST0_reg, (SYS_REG_SYS_SRST0_rstn_dscd_mask|                                     
                                     SYS_REG_SYS_SRST0_write_data_mask));
    udelay(5);

    // DO CRT reset (I):  CLK = ON
    hdmi_out(SYS_REG_SYS_CLKEN0_reg, (SYS_REG_SYS_CLKEN0_clken_dscd_mask|                                      
                                      SYS_REG_SYS_CLKEN0_write_data_mask));
}

void lib_hdmi_dsc_set_fw_pps(unsigned char pps[DSC_PPS_LEN])
{
    unsigned char* p_pps = pps;
    int i;

    for (i=0; i<DSC_PPS_LEN; i+=4)
    {
        hdmi_out(DSCD_PPS_DW00_reg +i, ((p_pps[3]<<24)|(p_pps[2]<<16)|(p_pps[1]<<8)|p_pps[0]));
        p_pps += 4;
    }
}

void lib_hdmi_dsc_get_cur_pps(unsigned char pps[DSC_PPS_LEN])
{
    unsigned char* p_pps = pps;
    int i;

    for (i=0; i<DSC_PPS_LEN; i+=4)
    {
        unsigned int val = hdmi_in(DSCD_PPS_DW00_CUR_reg +i);
        p_pps[0] = val & 0xFF;
        p_pps[1] = (val>>8) & 0xFF;
        p_pps[2] = (val>>16) & 0xFF;
        p_pps[3] = (val>>24) & 0xFF;
        p_pps += 4;
    }
}

void lib_hdmi_dsc_double_buffer_enable(unsigned char enable)
{
    return hdmi_mask(DSCD_DB_CTRL_reg, ~DSCD_DB_CTRL_db_en_mask, (enable) ? DSCD_DB_CTRL_db_en_mask : 0);
}

void lib_hdmi_dsc_enable(unsigned char enable)
{
    return hdmi_mask(DSCD_CTRL_reg, ~DSCD_CTRL_dscd_enable_mask, (enable) ? DSCD_CTRL_dscd_enable_mask : 0);
}

void lib_hdmi_dsc_fw_mode_enable(unsigned char enable)
{
    return hdmi_mask(DSCD_CTRL_reg, ~DSCD_CTRL_pps_fw_mode_mask, (enable) ? DSCD_CTRL_pps_fw_mode_mask : 0);
}


void newbase_hdmi_hd21_dsc_enanble(unsigned char port, unsigned char enable)
{
    unsigned char nport = port;
    if (enable)
    {
        hdmi_mask(HD21_CR_reg, ~HD21_CR_dsc_mode_fw_mask, HD21_CR_dsc_mode_fw_mask);           // enable DSC output
        hdmi_mask(HDMI_HDMI_VPLLCR1_reg, ~HDMI_HDMI_VPLLCR1_dpll_freeze_dsc_mask, 0);         // defreeze dsc
        lib_hdmi_dsc_enable(1);                    // enable DSC
        udelay(100);
    }
    else
    {
        lib_hdmi_dsc_enable(0);                     // disable DSC
        hdmi_mask(HDMI_HDMI_VPLLCR1_reg, ~HDMI_HDMI_VPLLCR1_dpll_freeze_dsc_mask, HDMI_HDMI_VPLLCR1_dpll_freeze_dsc_mask);   // freeze dsc
        hdmi_mask(HD21_CR_reg, ~HD21_CR_dsc_mode_fw_mask, 0x0);           // disable DSC output
    }
    
    HDMI_WARN("[newbase_hdmi_hd21_dsc_enanble] HDMI2.1 port =%d, enable=%d\n", port, enable);
}
