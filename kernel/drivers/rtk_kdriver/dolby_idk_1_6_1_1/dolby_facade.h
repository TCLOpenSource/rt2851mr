#ifndef	__DOLBY_IDK_1_6_1_1_DOLBY_FACADE_H__
#define	__DOLBY_IDK_1_6_1_1_DOLBY_FACADE_H__

int dolby_facade_rtk_timer_set_value(unsigned char id, unsigned int value);
void dolby_facade_set_OTT_HDR_mode(HDR_MODE mode);
HDR_MODE dolby_facade_get_OTT_HDR_mode(void);
HDR_MODE dolby_facade_get_HDMI_HDR_mode(void);
unsigned int dolby_facade_drvif_memory_get_data_align(unsigned int Value, unsigned int unit);
unsigned char dolby_facade_get_cur_hdmi_dolby_apply_state(void);
int dolby_facade_rtk_timer_control(unsigned char id, unsigned int cmd);
int dolby_facade_rtk_timer_set_mode(unsigned char id, unsigned char mode);
int dolby_facade_rtk_timer_set_target(unsigned char id, unsigned int value);
void dolby_facade_dolby_ott_dm_init(void);
unsigned short dolby_facade_Scaler_DispGetInputInfoByDisp(unsigned char channel, SLR_INPUT_INFO infoList);
unsigned int dolby_facade_Scaler_GetShareMemVirAddr(unsigned int a_ulCmd);
unsigned int dolby_facade_get_query_start_address(unsigned char idx);
void dolby_facade_drv_memory_wait_cap_last_write_done(unsigned char display, unsigned char wait_frame, unsigned char game_mode_case);
void dolby_facade_fwif_color_disable_VIP(unsigned char flag);
struct dentry *dolby_facade_debugfs_create_dir(const char *name, struct dentry *parent);
void dolby_facade_debugfs_remove_recursive(struct dentry *dentry);
void *dolby_facade_get_dolby_device(void);
struct dentry *dolby_facade_debugfs_create_file(const char *name, umode_t mode, struct dentry *parent, void *data, const struct file_operations *fops);
struct dentry *dolby_facade_debugfs_create_u32(const char *name, umode_t mode, struct dentry *parent, u32 *value);
struct dentry *dolby_facade_debugfs_create_bool(const char *name, umode_t mode, struct dentry *parent, bool *value);
void dolby_facade_dmac_inv_range(const void *start, const void *end);
void dolby_facade_dmac_flush_range(const void *start, const void *end);
DOLBY_HDMI_VSIF_T dolby_facade_get_HDMI_Dolby_VSIF_mode(void);
void *dolby_facade_get_hdmi_dolby_vsi_content(void);
void dolby_facade_set_hdr_type_dolby(void);
bool dolby_facade_is_memc_low_latency(void);
VSC_INPUT_TYPE_T dolby_facade_Get_DisplayMode_Src(unsigned char display);

#ifdef CONFIG_DOLBY_BACKLIGHT_CTRL_ADIM_PDIM
void dolby_facade_set_dolby_duty_by_dim(int duty);
#endif

#endif	/* __DOLBY_IDK_1_6_1_1_DOLBY_FACADE_H__ */
