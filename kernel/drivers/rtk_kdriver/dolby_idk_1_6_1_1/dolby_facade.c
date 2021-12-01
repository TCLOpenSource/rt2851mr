#include <mach/timex.h>
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/hdmirx/hdmi_vfe.h>
#include <tvscalercontrol/scalerdrv/scalerdrv.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
#include <tvscalercontrol/vip/scalerColor.h>
#include <linux/debugfs.h>
#include <asm/cacheflush.h>
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include "dolby_device.h"
#include "dolby_facade.h"

//extern void dmac_inv_range(const void *, const void *);
//extern void dmac_flush_range(const void *, const void *);

int dolby_facade_rtk_timer_set_value(unsigned char id, unsigned int value)
{
	return rtk_timer_set_value(id, value);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_set_value);

void dolby_facade_set_OTT_HDR_mode(HDR_MODE mode)
{
	if (mode == HDR_DOLBY_COMPOSER)
		Scaler_color_set_HDR_Type(HDR_DM_DOLBY);

	return set_OTT_HDR_mode(mode);
}
EXPORT_SYMBOL(dolby_facade_set_OTT_HDR_mode);

HDR_MODE dolby_facade_get_OTT_HDR_mode(void)
{
	return get_OTT_HDR_mode();
}
EXPORT_SYMBOL(dolby_facade_get_OTT_HDR_mode);

HDR_MODE dolby_facade_get_HDMI_HDR_mode(void)
{
	return get_HDMI_HDR_mode();
}
EXPORT_SYMBOL(dolby_facade_get_HDMI_HDR_mode);

unsigned int dolby_facade_drvif_memory_get_data_align(unsigned int Value, unsigned int unit)
{
	return drvif_memory_get_data_align(Value, unit);
}
EXPORT_SYMBOL(dolby_facade_drvif_memory_get_data_align);

unsigned char dolby_facade_get_cur_hdmi_dolby_apply_state(void)
{
	extern unsigned char get_cur_hdmi_dolby_apply_state(void);
	return get_cur_hdmi_dolby_apply_state();
}
EXPORT_SYMBOL(dolby_facade_get_cur_hdmi_dolby_apply_state);

int dolby_facade_rtk_timer_control(unsigned char id, unsigned int cmd)
{
	return rtk_timer_control(id, cmd);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_control);

int dolby_facade_rtk_timer_set_mode(unsigned char id, unsigned char mode)
{
	return rtk_timer_set_mode(id, mode);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_set_mode);

int dolby_facade_rtk_timer_set_target(unsigned char id, unsigned int value)
{
	return rtk_timer_set_target(id, value);
}
EXPORT_SYMBOL(dolby_facade_rtk_timer_set_target);

void dolby_facade_dolby_ott_dm_init(void)
{
	dolby_ott_dm_init();
}
EXPORT_SYMBOL(dolby_facade_dolby_ott_dm_init);

unsigned short dolby_facade_Scaler_DispGetInputInfoByDisp(unsigned char channel, SLR_INPUT_INFO infoList)
{
	return Scaler_DispGetInputInfoByDisp(channel, infoList);
}
EXPORT_SYMBOL(dolby_facade_Scaler_DispGetInputInfoByDisp);

unsigned int dolby_facade_Scaler_GetShareMemVirAddr(unsigned int a_ulCmd)
{
	return Scaler_GetShareMemVirAddr(a_ulCmd);
}
EXPORT_SYMBOL(dolby_facade_Scaler_GetShareMemVirAddr);

unsigned int dolby_facade_get_query_start_address(unsigned char idx)
{
	extern unsigned int get_query_start_address(unsigned char idx);
	return get_query_start_address(idx);
}
EXPORT_SYMBOL(dolby_facade_get_query_start_address);

/* drv_memory_wait_cap_last_write_done() */
void dolby_facade_drv_memory_wait_cap_last_write_done(unsigned char display, unsigned char wait_frame, unsigned char game_mode_case)
{
	drv_memory_wait_cap_last_write_done(display, wait_frame, game_mode_case);
}
EXPORT_SYMBOL(dolby_facade_drv_memory_wait_cap_last_write_done);

void dolby_facade_fwif_color_disable_VIP(unsigned char flag)
{
	fwif_color_disable_VIP(flag);
}
EXPORT_SYMBOL(dolby_facade_fwif_color_disable_VIP);

struct dentry *dolby_facade_debugfs_create_dir(const char *name, struct dentry *parent)
{
	return debugfs_create_dir(name, parent);
}
EXPORT_SYMBOL(dolby_facade_debugfs_create_dir);

void dolby_facade_debugfs_remove_recursive(struct dentry *dentry)
{
	debugfs_remove_recursive(dentry);
}
EXPORT_SYMBOL(dolby_facade_debugfs_remove_recursive);

void *dolby_facade_get_dolby_device(void)
{
	extern void *get_dolby_vision_devices(void);
	return get_dolby_vision_devices();
}
EXPORT_SYMBOL(dolby_facade_get_dolby_device);

struct dentry *dolby_facade_debugfs_create_file(const char *name, umode_t mode,
		struct dentry *parent, void *data,
		const struct file_operations *fops)
{
	return debugfs_create_file(name, mode, parent, data, fops);
}
EXPORT_SYMBOL(dolby_facade_debugfs_create_file);

struct dentry *dolby_facade_debugfs_create_u32(const char *name, umode_t mode,
		struct dentry *parent, u32 *value)
{
	return debugfs_create_u32(name, mode, parent, value);
}
EXPORT_SYMBOL(dolby_facade_debugfs_create_u32);

struct dentry *dolby_facade_debugfs_create_bool(const char *name,
							umode_t mode,
							struct dentry *parent,
							bool *value)
{
	return debugfs_create_bool(name, mode, parent, value);
}
EXPORT_SYMBOL(dolby_facade_debugfs_create_bool);

void dolby_facade_dmac_inv_range(const void *start, const void *end)
{
	dmac_inv_range(start, end);
}
EXPORT_SYMBOL(dolby_facade_dmac_inv_range);

void dolby_facade_dmac_flush_range(const void *start, const void *end)
{
	dmac_flush_range(start, end);
}
EXPORT_SYMBOL(dolby_facade_dmac_flush_range);

DOLBY_HDMI_VSIF_T dolby_facade_get_HDMI_Dolby_VSIF_mode(void)
{
	return get_HDMI_Dolby_VSIF_mode();
}
EXPORT_SYMBOL(dolby_facade_get_HDMI_Dolby_VSIF_mode);

void *dolby_facade_get_hdmi_dolby_vsi_content(void)
{
	extern vfe_hdmi_vsi_t hdmi_dolby_vsi_content;
	return &hdmi_dolby_vsi_content;
}
EXPORT_SYMBOL(dolby_facade_get_hdmi_dolby_vsi_content);
VSC_INPUT_TYPE_T dolby_facade_Get_DisplayMode_Src(unsigned char display)
{
    return Get_DisplayMode_Src(display);
}
EXPORT_SYMBOL(dolby_facade_Get_DisplayMode_Src);

void dolby_facade_set_hdr_type_dolby(void)
{
	Scaler_color_set_HDR_Type(HDR_DM_DOLBY);
}
EXPORT_SYMBOL(dolby_facade_set_hdr_type_dolby);

bool dolby_facade_is_memc_low_latency(void)
{
    extern bool is_memc_low_latency(void);
    return is_memc_low_latency();
}
EXPORT_SYMBOL(dolby_facade_is_memc_low_latency);

#ifdef CONFIG_DOLBY_BACKLIGHT_CTRL_ADIM_PDIM
void dolby_facade_set_dolby_duty_by_dim(int duty)
{
	extern void set_dolby_duty_by_dim(int duty);
	
	set_dolby_duty_by_dim(duty);
}
EXPORT_SYMBOL(dolby_facade_set_dolby_duty_by_dim);
#endif
