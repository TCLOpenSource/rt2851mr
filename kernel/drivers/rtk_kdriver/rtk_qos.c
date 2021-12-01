#include <linux/syscalls.h>
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kobject.h>
#include <linux/slab.h>
#include <linux/pageremap.h>
#include <linux/delay.h>
#include <linux/fs.h>
#include <linux/kthread.h>
#include <mach/io.h>
#include <mach/rtk_platform.h>
#include <rtd_types.h>
#include <rtk_kdriver/rtk_qos_export.h>
//#include <rtk_kdriver/tp/tp_drv_api.h>
#include "rbus/dc1_mc_reg.h"
#include "rbus/dc_sys_reg.h"
#include "rbus/tvsb3_reg.h"

///////////////////////////////////////
//MC1 QoS
//MC1 CH0 - SCPU express lane Read
//MC1 CH1 - DC_SYS
//MC1 CH2 - DC_SYS2 Read
//MC1 CH3 - DC_SYS2 Write
//MC1 CH4 - DC_SYS3 Read
//MC1 CH5 - DC_SYS3 Write
//MC1 CH6 - SCPU express lane Write

unsigned char g_rtk_qos_force_setting = 0;
unsigned char g_rtk_qos_current_setting = 0;
unsigned int g_rtk_qos_parameter[40];
unsigned char g_rtk_sys_arb_parameter[2];
unsigned char g_rtk_qos_is_bad_edit = 0;

//int rtk_qos_set_mc_measure_thread(unsigned int state);

//static int rtk_sys_arb_set_priority(RTK_BRIG_T brig, unsigned int beg, unsigned int end);
static int rtk_sys_brig_switch_path(RTK_BRIG_T brig, RTK_SYS_PATH_T target);

static int rtk_qos_save_mc_normal_setting(void)
{
	int idx = 0;
	int i = 0;

	// MC1
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_0_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_1_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_2_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_3_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_4_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_5_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_6_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_7_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_8_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_9_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_11_reg);
	g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_Qos_ctl_12_reg);

	for (i = 0;i < 28;i++)
	{
		g_rtk_qos_parameter[idx++] = rtd_inl(DC1_MC_ch0_ctl_0_reg + i*4);
	}

	return 0;
}

static int rtk_qos_load_mc_normal_setting(void)
{
	int idx = 0;
	int i = 0;

	pr_debug("[QOS] NORMAL\n");

	// MC1
	rtd_outl(DC1_MC_Qos_ctl_0_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_1_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_2_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_3_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_4_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_5_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_6_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_7_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_8_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_9_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_11_reg, g_rtk_qos_parameter[idx++]);
	rtd_outl(DC1_MC_Qos_ctl_12_reg, g_rtk_qos_parameter[idx++]);

	for (i = 0;i < 28;i++)
	{
		rtd_outl(DC1_MC_ch0_ctl_0_reg + i*4, g_rtk_qos_parameter[idx++]);
	}

	return 0;
}

#if 1 // bad_edit
static int rtk_qos_load_mc_decoder_4k_bad_edit_setting(void)
{
	pr_debug("[QOS] DECODER 4K (bad_edit)\n");

	// william_qos_3(submit).tbl
	rtd_outl(0xb8008a00,0x00000443);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	//rtd_outl(0xb8008a28,0x0000000f);
	rtd_outl(0xb8008a2c,0x00ff0077);
	rtd_outl(0xb8008a30,0x000f0001);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);

	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00003f00);
	rtd_outl(0xb8008a48,0x80030004);
	rtd_outl(0xb8008a4c,0x41010021);

	rtd_outl(0xb8008a50,0x09840806);
	rtd_outl(0xb8008a54,0x00007f00);
	rtd_outl(0xb8008a58,0x80002008);
	rtd_outl(0xb8008a5c,0x41010041);

	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x12c0400c);
	rtd_outl(0xb8008a6c,0x63018071);

	rtd_outl(0xb8008a70,0x09840806);
	rtd_outl(0xb8008a74,0x20007f00);
	rtd_outl(0xb8008a78,0x12c0800c);
	rtd_outl(0xb8008a7c,0x63018071);

	rtd_outl(0xb8008a80,0x09840806);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000a00a);
	rtd_outl(0xb8008a8c,0x63018021);

	rtd_outl(0xb8008a90,0x09840806);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c80a);
	rtd_outl(0xb8008a9c,0x63018021);

	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00003f00);
	rtd_outl(0xb8008aa8,0x80030004);
	rtd_outl(0xb8008aac,0x41010021);

	return 0;
}

static int rtk_qos_load_mc_decoder_4k_bad_edit_ddr4_setting(void)
{
	pr_debug("[QOS] DECODER 4K (bad_edit) DDR4\n");

	// william_qos_3(submit).tbl
	rtd_outl(0xb8008a00,0x00000443);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	//rtd_outl(0xb8008a28,0x0000000f);
	rtd_outl(0xb8008a2c,0x00ff0074);
	rtd_outl(0xb8008a30,0x000f0007);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);

	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00003f00);
	rtd_outl(0xb8008a48,0x80030004);
	rtd_outl(0xb8008a4c,0x41010021);

	rtd_outl(0xb8008a50,0x09840806);
	rtd_outl(0xb8008a54,0x00007f00);
	rtd_outl(0xb8008a58,0x80002008);
	rtd_outl(0xb8008a5c,0x41010041);

	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x12c0400c);
	rtd_outl(0xb8008a6c,0x63018071);

	rtd_outl(0xb8008a70,0x09840806);
	rtd_outl(0xb8008a74,0x20007f00);
	rtd_outl(0xb8008a78,0x12c0800c);
	rtd_outl(0xb8008a7c,0x63018071);

	rtd_outl(0xb8008a80,0x09840806);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000a00a);
	rtd_outl(0xb8008a8c,0x63018021);

	rtd_outl(0xb8008a90,0x09840806);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c80a);
	rtd_outl(0xb8008a9c,0x63018021);

	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00003f00);
	rtd_outl(0xb8008aa8,0x80030004);
	rtd_outl(0xb8008aac,0x41010021);

	return 0;
}
#endif

static int rtk_qos_load_mc_decoder_4k_opt1_setting(void)
{
	pr_debug("[QOS] DECODER 4K OPT1\n");

	rtd_maskl(0xb800883c,0xFFFFFF7F,0x00000080);

	rtd_outl(0xb8008a00,0x000f0ec3);
	rtd_outl(0xb8008a10,0x222d2af0);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x00000030);
	rtd_outl(0xb8008a2c,0x001f0066);
	rtd_outl(0xb8008a30,0x000f0001);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);
	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00006400);
	rtd_outl(0xb8008a48,0x80004008);
	rtd_outl(0xb8008a4c,0x83010061);
	rtd_outl(0xb8008a50,0x0984080e);
	rtd_outl(0xb8008a54,0xff00ff00);
	rtd_outl(0xb8008a58,0x05002008);
	rtd_outl(0xb8008a5c,0x43010071);
	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x60007f00);
	rtd_outl(0xb8008a68,0x80008c08);
	rtd_outl(0xb8008a6c,0x43018031);
	rtd_outl(0xb8008a70,0x09840806);
	rtd_outl(0xb8008a74,0x60007f00);
	rtd_outl(0xb8008a78,0x8000b408);
	rtd_outl(0xb8008a7c,0x43018031);
	rtd_outl(0xb8008a80,0x09840806);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000b408);
	rtd_outl(0xb8008a8c,0x43018041);
	rtd_outl(0xb8008a90,0x09840806);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c808);
	rtd_outl(0xb8008a9c,0x43018041);
	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00006400);
	rtd_outl(0xb8008aa8,0x80004008);
	rtd_outl(0xb8008aac,0x83010061);

	return 0;
}

static int rtk_qos_load_mc_decoder_2k_opt1_setting(void)
{
	pr_debug("[QOS] DECODER 2K OPT1\n");

	rtd_maskl(0xb800883c,0xFFFFFF7F,0x00000080);

	rtd_outl(0xb8008a00,0x000f0ec3);
	rtd_outl(0xb8008a10,0x222d2af0);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x00000030);
	rtd_outl(0xb8008a2c,0x001f0066);
	rtd_outl(0xb8008a30,0x000f0001);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);
	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00006400);
	rtd_outl(0xb8008a48,0x80004008);
	rtd_outl(0xb8008a4c,0x83010061);
	rtd_outl(0xb8008a50,0x0984080e);
	rtd_outl(0xb8008a54,0xff00ff00);
	rtd_outl(0xb8008a58,0x05002008);
	rtd_outl(0xb8008a5c,0x43010071);
	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x60007f00);
	rtd_outl(0xb8008a68,0x80008c08);
	rtd_outl(0xb8008a6c,0x43018031);
	rtd_outl(0xb8008a70,0x09840806);
	rtd_outl(0xb8008a74,0x60007f00);
	rtd_outl(0xb8008a78,0x8000b408);
	rtd_outl(0xb8008a7c,0x43018031);
	rtd_outl(0xb8008a80,0x09840806);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000b408);
	rtd_outl(0xb8008a8c,0x43018041);
	rtd_outl(0xb8008a90,0x09840806);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c808);
	rtd_outl(0xb8008a9c,0x43018041);
	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00006400);
	rtd_outl(0xb8008aa8,0x80004008);
	rtd_outl(0xb8008aac,0x83010061);

	return 0;
}

static int rtk_qos_load_mc_decoder_4k_setting(void)
{
	pr_debug("[QOS] DECODER 4K\n");

	rtd_outl(0xb8008a00,0x00000c43);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000210e);
	rtd_outl(0xb8008a2c,0x001f0077);
	rtd_outl(0xb8008a30,0x000f0001);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);

	rtd_outl(0xb8008a40,0x09840800);
	rtd_outl(0xb8008a44,0x64007f00);
	rtd_outl(0xb8008a48,0x10008004);
	rtd_outl(0xb8008a4c,0x83010081);

	rtd_outl(0xb8008a50,0x09840800);
	rtd_outl(0xb8008a54,0x00007f00);
	rtd_outl(0xb8008a58,0x80002008);
	rtd_outl(0xb8008a5c,0x41010081);

	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x08002008);
	rtd_outl(0xb8008a6c,0x23018081);

	rtd_outl(0xb8008a70,0x09840806);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x08002008);
	rtd_outl(0xb8008a7c,0x23018081);

	rtd_outl(0xb8008a80,0x09840800);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000a008);
	rtd_outl(0xb8008a8c,0x23018031);

	rtd_outl(0xb8008a90,0x09840800);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c808);
	rtd_outl(0xb8008a9c,0x23018031);

	rtd_outl(0xb8008aa0,0x09840800);
	rtd_outl(0xb8008aa4,0x64007f00);
	rtd_outl(0xb8008aa8,0x10008004);
	rtd_outl(0xb8008aac,0x83010081);

	return 0;
}

static int rtk_qos_load_mc_decoder_4k_ddr4_setting(void)
{
	pr_debug("[QOS] DECODER 4K DDR4\n");

	rtd_outl(0xb8008a00,0x00000c43);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000210e);
	rtd_outl(0xb8008a2c,0x001f0074);
	rtd_outl(0xb8008a30,0x000f0007);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);

	rtd_outl(0xb8008a40,0x09840800);
	rtd_outl(0xb8008a44,0x64007f00);
	rtd_outl(0xb8008a48,0x10008004);
	rtd_outl(0xb8008a4c,0x83010081);

	rtd_outl(0xb8008a50,0x09840800);
	rtd_outl(0xb8008a54,0x00007f00);
	rtd_outl(0xb8008a58,0x80002008);
	rtd_outl(0xb8008a5c,0x41010081);

	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x08002008);
	rtd_outl(0xb8008a6c,0x23018081);

	rtd_outl(0xb8008a70,0x09840806);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x08002008);
	rtd_outl(0xb8008a7c,0x23018081);

	rtd_outl(0xb8008a80,0x09840800);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000a008);
	rtd_outl(0xb8008a8c,0x23018031);

	rtd_outl(0xb8008a90,0x09840800);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c808);
	rtd_outl(0xb8008a9c,0x23018031);

	rtd_outl(0xb8008aa0,0x09840800);
	rtd_outl(0xb8008aa4,0x64007f00);
	rtd_outl(0xb8008aa8,0x10008004);
	rtd_outl(0xb8008aac,0x83010081);

	return 0;
}

static int rtk_qos_load_mc_decoder_2k_setting(void)
{
	pr_debug("[QOS] DECODER 2K\n");

	rtd_outl(0xb8008a00,0x00000c43);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000210e);
	rtd_outl(0xb8008a2c,0x001f0077);
	rtd_outl(0xb8008a30,0x000f0001);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);

	rtd_outl(0xb8008a40,0x09840800);
	rtd_outl(0xb8008a44,0x64007f00);
	rtd_outl(0xb8008a48,0x10008004);
	rtd_outl(0xb8008a4c,0x83010081);

	rtd_outl(0xb8008a50,0x09840800);
	rtd_outl(0xb8008a54,0x00007f00);
	rtd_outl(0xb8008a58,0x80002008);
	rtd_outl(0xb8008a5c,0x41010081);

	rtd_outl(0xb8008a60,0x0984080e);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x08002008);
	rtd_outl(0xb8008a6c,0x23018081);

	rtd_outl(0xb8008a70,0x0984080e);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x08002008);
	rtd_outl(0xb8008a7c,0x23018081);

	rtd_outl(0xb8008a80,0x09840800);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000a008);
	rtd_outl(0xb8008a8c,0x23018031);

	rtd_outl(0xb8008a90,0x09840800);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c808);
	rtd_outl(0xb8008a9c,0x23018031);

	rtd_outl(0xb8008aa0,0x09840800);
	rtd_outl(0xb8008aa4,0x64007f00);
	rtd_outl(0xb8008aa8,0x10008004);
	rtd_outl(0xb8008aac,0x83010081);

	return 0;
}

static int rtk_qos_load_mc_decoder_2k_ddr4_setting(void)
{
	pr_debug("[QOS] DECODER 2K DDR4\n");

	rtd_outl(0xb8008a00,0x00000c43);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000210e);
	rtd_outl(0xb8008a2c,0x001f0074);
	rtd_outl(0xb8008a30,0x000f0007);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);

	rtd_outl(0xb8008a40,0x09840800);
	rtd_outl(0xb8008a44,0x64007f00);
	rtd_outl(0xb8008a48,0x10008004);
	rtd_outl(0xb8008a4c,0x83010081);

	rtd_outl(0xb8008a50,0x09840800);
	rtd_outl(0xb8008a54,0x00007f00);
	rtd_outl(0xb8008a58,0x80002008);
	rtd_outl(0xb8008a5c,0x41010081);

	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x08002008);
	rtd_outl(0xb8008a6c,0x23018081);

	rtd_outl(0xb8008a70,0x09840806);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x08002008);
	rtd_outl(0xb8008a7c,0x23018081);

	rtd_outl(0xb8008a80,0x09840800);
	rtd_outl(0xb8008a84,0x00005000);
	rtd_outl(0xb8008a88,0x8000a008);
	rtd_outl(0xb8008a8c,0x23018031);

	rtd_outl(0xb8008a90,0x09840800);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x8000c808);
	rtd_outl(0xb8008a9c,0x23018031);

	rtd_outl(0xb8008aa0,0x09840800);
	rtd_outl(0xb8008aa4,0x64007f00);
	rtd_outl(0xb8008aa8,0x10008004);
	rtd_outl(0xb8008aac,0x83010081);

	return 0;
}

static int rtk_qos_load_mc_hdmi_4k_setting(void)
{
	pr_debug("[QOS] HDMI 4K\n");

	rtd_outl(0xb8008a00,0x00000443);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000000e);
	rtd_outl(0xb8008a2c,0x00ff0077);
	rtd_outl(0xb8008a30,0x000f0001);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);
	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00003f00);
	rtd_outl(0xb8008a48,0x80080008);
	rtd_outl(0xb8008a4c,0x43010031);
	rtd_outl(0xb8008a50,0x09840806);
	rtd_outl(0xb8008a54,0x00003f00);
	rtd_outl(0xb8008a58,0x80040008);
	rtd_outl(0xb8008a5c,0x43010031);
	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x80000808);
	rtd_outl(0xb8008a6c,0x43018081);
	rtd_outl(0xb8008a70,0x0984080e);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x0c800808);
	rtd_outl(0xb8008a7c,0x43018081);
	rtd_outl(0xb8008a80,0x09840802);
	rtd_outl(0xb8008a84,0x00003f00);
	rtd_outl(0xb8008a88,0x80018008);
	rtd_outl(0xb8008a8c,0x43018021);
	rtd_outl(0xb8008a90,0x09840802);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x80018008);
	rtd_outl(0xb8008a9c,0x43018011);
	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00003f00);
	rtd_outl(0xb8008aa8,0x80080008);
	rtd_outl(0xb8008aac,0x43010031);

	return 0;
}

static int rtk_qos_load_mc_hdmi_4k_ddr4_setting(void)
{
	pr_debug("[QOS] HDMI 4K DDR4\n");

	rtd_outl(0xb8008a00,0x00000443);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000000e);
	rtd_outl(0xb8008a2c,0x00ff0074);
	rtd_outl(0xb8008a30,0x000f0007);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);
	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00003f00);
	rtd_outl(0xb8008a48,0x80080008);
	rtd_outl(0xb8008a4c,0x43010031);
	rtd_outl(0xb8008a50,0x09840806);
	rtd_outl(0xb8008a54,0x00003f00);
	rtd_outl(0xb8008a58,0x80040008);
	rtd_outl(0xb8008a5c,0x43010031);
	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x60007f00);
	rtd_outl(0xb8008a68,0x12c00808);
	rtd_outl(0xb8008a6c,0x53018071);
	rtd_outl(0xb8008a70,0x0984080e);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x0c800808);
	rtd_outl(0xb8008a7c,0x53018071);
	rtd_outl(0xb8008a80,0x09840802);
	rtd_outl(0xb8008a84,0x00003f00);
	rtd_outl(0xb8008a88,0x80018008);
	rtd_outl(0xb8008a8c,0x33018021);
	rtd_outl(0xb8008a90,0x09840802);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x80018008);
	rtd_outl(0xb8008a9c,0x33018011);
	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00003f00);
	rtd_outl(0xb8008aa8,0x80080008);
	rtd_outl(0xb8008aac,0x43010031);

	return 0;
}

static int rtk_qos_load_mc_hdmi_2k_setting(void)
{
	pr_debug("[QOS] HDMI 2K\n");

	rtd_outl(0xb8008a00,0x00000443);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000000e);
	rtd_outl(0xb8008a2c,0x00ff0077);
	rtd_outl(0xb8008a30,0x000f0001);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);
	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00003f00);
	rtd_outl(0xb8008a48,0x80080008);
	rtd_outl(0xb8008a4c,0x43010031);
	rtd_outl(0xb8008a50,0x09840806);
	rtd_outl(0xb8008a54,0x00003f00);
	rtd_outl(0xb8008a58,0x80040008);
	rtd_outl(0xb8008a5c,0x43010031);
	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x40007f00);
	rtd_outl(0xb8008a68,0x80000808);
	rtd_outl(0xb8008a6c,0x43018081);
	rtd_outl(0xb8008a70,0x0984080e);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x0c800808);
	rtd_outl(0xb8008a7c,0x43018081);
	rtd_outl(0xb8008a80,0x09840802);
	rtd_outl(0xb8008a84,0x00003f00);
	rtd_outl(0xb8008a88,0x80018008);
	rtd_outl(0xb8008a8c,0x43018021);
	rtd_outl(0xb8008a90,0x09840802);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x80018008);
	rtd_outl(0xb8008a9c,0x43018011);
	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00003f00);
	rtd_outl(0xb8008aa8,0x80080008);
	rtd_outl(0xb8008aac,0x43010031);

	return 0;
}

static int rtk_qos_load_mc_hdmi_2k_ddr4_setting(void)
{
	pr_debug("[QOS] HDMI 2K DDR4\n");

	rtd_outl(0xb8008a00,0x00000443);
	rtd_outl(0xb8008a10,0x00000000);
	rtd_outl(0xb8008a14,0x00000000);
	rtd_outl(0xb8008a18,0x40000000);
	rtd_outl(0xb8008a1c,0x012c0000);
	rtd_outl(0xb8008a20,0x00fa00fa);
	rtd_outl(0xb8008a24,0x00180630);
	rtd_outl(0xb8008a28,0x0000000e);
	rtd_outl(0xb8008a2c,0x00ff0074);
	rtd_outl(0xb8008a30,0x000f0007);
	rtd_outl(0xb8008a34,0x03ff0000);
	rtd_outl(0xb8008a3c,0x00ffffff);
	rtd_outl(0xb8008a40,0x09840806);
	rtd_outl(0xb8008a44,0x00003f00);
	rtd_outl(0xb8008a48,0x80080008);
	rtd_outl(0xb8008a4c,0x43010031);
	rtd_outl(0xb8008a50,0x09840806);
	rtd_outl(0xb8008a54,0x00003f00);
	rtd_outl(0xb8008a58,0x80040008);
	rtd_outl(0xb8008a5c,0x43010031);
	rtd_outl(0xb8008a60,0x09840806);
	rtd_outl(0xb8008a64,0x60007f00);
	rtd_outl(0xb8008a68,0x12c00808);
	rtd_outl(0xb8008a6c,0x53018071);
	rtd_outl(0xb8008a70,0x0984080e);
	rtd_outl(0xb8008a74,0x40007f00);
	rtd_outl(0xb8008a78,0x0c800808);
	rtd_outl(0xb8008a7c,0x53018071);
	rtd_outl(0xb8008a80,0x09840802);
	rtd_outl(0xb8008a84,0x00003f00);
	rtd_outl(0xb8008a88,0x80018008);
	rtd_outl(0xb8008a8c,0x33018021);
	rtd_outl(0xb8008a90,0x09840802);
	rtd_outl(0xb8008a94,0x00001f00);
	rtd_outl(0xb8008a98,0x80018008);
	rtd_outl(0xb8008a9c,0x33018011);
	rtd_outl(0xb8008aa0,0x09840806);
	rtd_outl(0xb8008aa4,0x00003f00);
	rtd_outl(0xb8008aa8,0x80080008);
	rtd_outl(0xb8008aac,0x43010031);

	return 0;
}

static int rtk_qos_load_mc_user_a_setting(void)
{
	pr_debug("[QOS] User A\n");

	return 0;
}

static int rtk_bw_limit_HW_set_threshold(RTK_BRIG_T brig, unsigned int timer, unsigned int request)
{
	unsigned int reg_timer;
	unsigned int reg_request;

	switch (brig) {
		case RTK_BRIG_VE:
			reg_timer = DC_SYS_bw_timer_threshold_5_reg;
			reg_request = DC_SYS_bw_request_threshold_5_reg;
			break;

		case RTK_BRIG_GPU:
			reg_timer = DC_SYS_bw_timer_threshold_7_reg;
			reg_request = DC_SYS_bw_request_threshold_7_reg;
			break;

		case RTK_BRIG_TVSB3:
			reg_timer = DC_SYS_bw_timer_threshold_6_reg;
			reg_request = DC_SYS_bw_request_threshold_6_reg;
			break;

		case RTK_BRIG_NNIP:
			reg_timer = DC_SYS_bw_timer_threshold_9_reg;
			reg_request = DC_SYS_bw_request_threshold_9_reg;
			break;

		default:
			pr_err("[QoS][ERR] unknown parameter\n");
			return 0;
	}

	rtd_outl(reg_timer, timer & 0xFFFFFFFF);
	rtd_outl(reg_request, request & 0x00FFFFFF);

	return 0;
}


static int rtk_bw_limit_HW_set_mode(RTK_BRIG_T brig, RTK_BW_LIMIT_HW_MODE_T mode)
{
	dc_sys_bw_ctrl_RBUS dc_sys_bw_ctrl;
	unsigned int shift_value;
	unsigned int mask_value;

	dc_sys_bw_ctrl.regValue = rtd_inl(DC_SYS_bw_ctrl_reg);

	switch (brig) {
		case RTK_BRIG_VE:
			mask_value = 0x00000C00;
			shift_value = 10;
			break;

		case RTK_BRIG_GPU:
			mask_value = 0x0000C000;
			shift_value = 14;
			break;

		case RTK_BRIG_TVSB3:
			mask_value = 0x00003000;
			shift_value = 20;
			break;			

		case RTK_BRIG_NNIP:
			mask_value = 0x000C0000;
			shift_value = 18;
			break;

		default:
			pr_err("[QoS][ERR] unknown parameter\n");
			return 0;
	}

	rtd_maskl(DC_SYS_bw_ctrl_reg, ~(mask_value), (mode & 0x3) << shift_value);

	return 0;
}

#if 1 // bad_edit
int rtk_qos_set_bad_edit(unsigned int is_bad_edit)
{
	g_rtk_qos_is_bad_edit = is_bad_edit;

	return 0;
}
#endif

#define TP_API_READY_FOR_QOS
#ifdef TP_API_READY_FOR_QOS
extern INT32 RHAL_TP_IsATSC30(void);
extern INT32 RHAL_TP_IsJapan4K(void);
#endif
extern unsigned char Get_rotate_function(void);

static int rtk_qos_decide_opt1_mode(void)
{
#if 0
#ifdef TP_API_READY_FOR_QOS
	if (RHAL_TP_IsATSC30())
		return 1;
	else if (RHAL_TP_IsJapan4K())
		return 1;
	else
#endif
		return 0;
#else
	return 0;
#endif
}

static int rtk_qos_decide_tvsb3_switch_sys3(void)
{
#if 0
#ifdef TP_API_READY_FOR_QOS
	if (RHAL_TP_IsATSC30())
		return 1;
	else if (RHAL_TP_IsJapan4K())
		return 1;
	else if (Get_rotate_function())
		return 1;
	else
#endif
		return 0;
#else
	return 1;
#endif
}

#if 0
static int rtk_qos_decide_gpu_low_priority(void)
{
#if 0
	if (Get_rotate_function())
		return 1;
	else
		return 0;
#else
	return 0;
#endif
}
#endif

#if 0
static unsigned int rtk_qos_decide_ve_bw_limit(void)
{
#if 0
	if (g_rtk_qos_is_bad_edit)
		return 0x4c;
	else
		return 0x100;
#else
	return 0x100;
#endif
}
#endif

#if 0
static int rtk_qos_decide_tvsb3_bw_limit(void)
{
#if 0
	if (Get_rotate_function())
		return 0x40;
	else
		return 0x20;
#else
	return 0x20;
#endif
}
#endif

static int is_DDR4(void)
{
	dc1_mc_ddr4_ctrl_RBUS reg_ddr4_ctrl;

	reg_ddr4_ctrl.regValue = rtd_inl(DC1_MC_DDR4_CTRL_reg);

	return reg_ddr4_ctrl.ddr4?1:0;
}

static int rtk_qos_decide_gpu_bw_limit(void)
{
	return 0x100;
}

static int rtk_qos_decide_nnip_bw_limit(void)
{
	return 0xf;
}

int rtk_qos_set_mode(RTK_QOS_MODE_T qos_mode)
{
	unsigned int tmp_value;

	if(g_rtk_qos_force_setting){
        pr_debug("[QOS] FORCE SETTING, IGNORE mode[%d]\n", qos_mode);
		return 0;
	}

	pr_info("[QOS] set mode %x\n", qos_mode);

	g_rtk_qos_current_setting = qos_mode;

	/*
	 * switch qos mode
	 */
	switch(qos_mode){
		case RTK_QOS_BOOT_MODE:
		case RTK_QOS_NORMAL_MODE:
			rtk_qos_load_mc_normal_setting();
			break;

		case RTK_QOS_DECODER_4K_MODE:
//			if (rtk_qos_decide_opt1_mode())
//			{
//				rtk_qos_load_mc_decoder_4k_opt1_setting();
//			}
//			else
//			{
			if (is_DDR4()) {
				rtk_qos_load_mc_decoder_4k_ddr4_setting();
			} else {
				rtk_qos_load_mc_decoder_4k_setting();
			}
//			}
			break;

		case RTK_QOS_DECODER_2K_MODE:
//			if (rtk_qos_decide_opt1_mode())
//			{
//				rtk_qos_load_mc_decoder_2k_opt1_setting();
//			}
//			else
//			{
			if (is_DDR4()) {
				rtk_qos_load_mc_decoder_2k_ddr4_setting();
			} else {
				rtk_qos_load_mc_decoder_2k_setting();
			}
//			}
			break;

		case RTK_QOS_HDMI_4K_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_hdmi_4k_ddr4_setting();
			} else {
				rtk_qos_load_mc_hdmi_4k_setting();
			}
			break;

		case RTK_QOS_HDMI_2K_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_hdmi_2k_ddr4_setting();
			} else {
				rtk_qos_load_mc_hdmi_2k_setting();
			}
			break;

		case RTK_QOS_USER_A_MODE:
			rtk_qos_load_mc_user_a_setting();
			break;

		case RTK_QOS_DECODER_BAD_EDIT_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_decoder_4k_bad_edit_ddr4_setting();
			} else {
				rtk_qos_load_mc_decoder_4k_bad_edit_setting();
			}
			break;

		default:
			break;
	}

	/*
	 * check if need to switch tvsb3 to sys3
	 */
#if 0
	tmp_value = rtk_qos_decide_tvsb3_switch_sys3();
	if (tmp_value)
	{
		rtk_sys_brig_switch_path(RTK_BRIG_TVSB3, RTK_SYS_PATH3);
	}
	else
	{
		rtk_sys_brig_switch_path(RTK_BRIG_TVSB3, RTK_SYS_PATH1);
	}
#endif

	/*
	 * check if need to modify gpu low priority
	 */
#if 0
	tmp_value = rtk_qos_decide_gpu_low_priority();
	if (tmp_value)
	{
		rtk_sys_arb_set_priority(RTK_BRIG_GPU, 0xf0, 0xf0);
	}
	else
	{
		rtk_sys_arb_set_priority(RTK_BRIG_GPU, g_rtk_sys_arb_parameter[0], g_rtk_sys_arb_parameter[1]);
	}
#endif

	/*
	 * check if need to modify tvsb3 bw limit
	 */
#if 0
	tmp_value = rtk_qos_decide_tvsb3_bw_limit();
	if (tmp_value)
	{
		rtk_bw_limit_HW_set_threshold(RTK_BRIG_TVSB3, 0x80, tmp_value);
	}
#endif

	/*
	 * check if need to modify ve bw limit
	 */
#if 0
	tmp_value = rtk_qos_decide_ve_bw_limit();
	if (tmp_value)
	{
		rtk_bw_limit_HW_set_threshold(RTK_BRIG_VE, 0x80, tmp_value);
	}
#endif

	/*
	 * check if need to modify gpu bw limit
	 */
	tmp_value = rtk_qos_decide_gpu_bw_limit();
	if (tmp_value)
	{
		rtk_bw_limit_HW_set_threshold(RTK_BRIG_GPU, 0x80, tmp_value);
	}

	/*
	 * check if need to modify nnip bw limit
	 */
	tmp_value = rtk_qos_decide_nnip_bw_limit();
	if (tmp_value)
	{
		rtk_bw_limit_HW_set_threshold(RTK_BRIG_NNIP, 0x80, tmp_value);
	}

	return 0;
}

int rtk_qos_suspend(void)
{
	rtk_qos_load_mc_normal_setting();
	return 0;
}

int rtk_qos_resume(void)
{
	pr_debug("%s\n", __FUNCTION__);

	rtk_qos_save_mc_normal_setting();

	g_rtk_qos_force_setting = 0;

	// bw limit init threshold
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_VE, 0x80, 0x100);
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_GPU, 0x80, 0x100);
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_TVSB3, 0x80, 0x20);
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_NNIP, 0x80, 0x8);

	// bw limit enable
	rtk_bw_limit_HW_set_mode(RTK_BRIG_VE, RTK_BW_LMMIT_HW_DAT);
	rtk_bw_limit_HW_set_mode(RTK_BRIG_GPU, RTK_BW_LMMIT_HW_DAT);
	rtk_bw_limit_HW_set_mode(RTK_BRIG_TVSB3, RTK_BW_LMMIT_HW_DAT);
	rtk_bw_limit_HW_set_mode(RTK_BRIG_NNIP, RTK_BW_LMMIT_HW_DAT);

	return 0;
}

ssize_t rtk_qos_show(struct kobject *kobj, struct kobj_attribute *attr, char *buf)
{
	if(g_rtk_qos_force_setting == 0)
	{
		return sprintf(buf, "Qos(%x),IsOpt1(%x),TVSB3_SYS(%x)\n",
			g_rtk_qos_current_setting,
			rtk_qos_decide_opt1_mode(),
			rtk_qos_decide_tvsb3_switch_sys3());
	}
	else
	{
		if(g_rtk_qos_force_setting == RTK_QOS_NORMAL_MODE)
			return sprintf(buf, "current is force normal mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_DECODER_4K_MODE)
			return sprintf(buf, "current is force decode 4k mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_DECODER_4K_OPT1_MODE)
			return sprintf(buf, "current is force decode 4k opt1 mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_DECODER_2K_MODE)
			return sprintf(buf, "current is force decode 2k mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_DECODER_2K_OPT1_MODE)
			return sprintf(buf, "current is force decode 2k opt1 mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_HDMI_4K_MODE)
			return sprintf(buf, "current is force hdmi 4k mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_HDMI_2K_MODE)
			return sprintf(buf, "current is force hdmi 2k mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_USER_A_MODE)
			return sprintf(buf, "current is force user a mode\n");
		else if(g_rtk_qos_force_setting == RTK_QOS_DECODER_BAD_EDIT_MODE)
			return sprintf(buf, "current is force decode bad_edit mode\n");
	}

	return 0;
}

int rtk_qos_reset_all(void)
{
	g_rtk_qos_force_setting = 0;
	g_rtk_qos_current_setting = 0;
	rtk_qos_load_mc_normal_setting();
	return 0;
}

int rtk_qos_set_force_mode(unsigned char mode)
{
	g_rtk_qos_force_setting = mode;

	switch(mode) {
		case RTK_QOS_NORMAL_MODE:
			rtk_qos_load_mc_normal_setting();
			break;
		case RTK_QOS_DECODER_4K_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_decoder_4k_ddr4_setting();
			} else {
				rtk_qos_load_mc_decoder_4k_setting();
			}
			break;
		case RTK_QOS_DECODER_4K_OPT1_MODE:
			rtk_qos_load_mc_decoder_4k_opt1_setting();
			break;
		case RTK_QOS_DECODER_2K_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_decoder_2k_ddr4_setting();
			} else {
				rtk_qos_load_mc_decoder_2k_setting();
			}
			break;
		case RTK_QOS_DECODER_2K_OPT1_MODE:
			rtk_qos_load_mc_decoder_2k_opt1_setting();
			break;
		case RTK_QOS_HDMI_4K_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_hdmi_4k_ddr4_setting();
			} else {
				rtk_qos_load_mc_hdmi_4k_setting();
			}
			break;
		case RTK_QOS_HDMI_2K_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_hdmi_2k_ddr4_setting();
			} else {
				rtk_qos_load_mc_hdmi_2k_setting();
			}
			break;
		case RTK_QOS_USER_A_MODE:
			rtk_qos_load_mc_user_a_setting();
			break;
		case RTK_QOS_DECODER_BAD_EDIT_MODE:
			if (is_DDR4()) {
				rtk_qos_load_mc_decoder_4k_bad_edit_ddr4_setting();
			} else {
				rtk_qos_load_mc_decoder_4k_bad_edit_setting();
			}
			break;
		default:
			break;
	}

	return 0;
}

static int rtk_sys_arb_save_setting(void)
{
	dc_sys_dc_priority_ctrl7_RBUS reg_dc_prio_ctrl7;

	reg_dc_prio_ctrl7.regValue = rtd_inl(DC_SYS_DC_PRIORITY_CTRL7_reg);

	g_rtk_sys_arb_parameter[0] = reg_dc_prio_ctrl7.c7_latcnt_beg;
	g_rtk_sys_arb_parameter[1] = reg_dc_prio_ctrl7.c7_latcnt_end;

	return 0;
}

#if 0
static int rtk_sys_arb_set_priority(RTK_BRIG_T brig, unsigned int beg, unsigned int end)
{
	dc_sys_dc_priority_ctrl7_RBUS reg_dc_prio_ctrl7;

	pr_debug("[QOS] sys_arb %x set %x %x\n", brig, beg, end);

	if (brig == RTK_BRIG_GPU)
	{
		reg_dc_prio_ctrl7.regValue = rtd_inl(DC_SYS_DC_PRIORITY_CTRL7_reg);
		reg_dc_prio_ctrl7.c7_latcnt_beg = beg;
		reg_dc_prio_ctrl7.c7_latcnt_end = end;
		rtd_outl(DC_SYS_DC_PRIORITY_CTRL7_reg, reg_dc_prio_ctrl7.regValue);
	}

	return 0;
}
#endif

static int rtk_sys_brig_switch_path(RTK_BRIG_T brig, RTK_SYS_PATH_T target)
{
	unsigned int value_arb_en = 0;
	tvsb3_tv_sb3_dcu1_arb_sr0_RBUS reg_arb_sr0;
	dc_sys_dc_sys3_mux_RBUS reg_dc_sys3_mux;
	unsigned int retry_cnt = 0;

	if (rtk_sys_brig_get_curr_path(brig) == target)
	{
		pr_debug("[QoS] brig %x already in %x\n", brig, target);
		return 0;
	}

	pr_debug("[QOS] brig %x switch to %x\n", brig, target);

	if (brig == RTK_BRIG_TVSB3)
	{
		// lock brig
		value_arb_en = rtd_inl(TVSB3_TV_SB3_DCU1_ARB_CR1_reg);
		rtd_outl(TVSB3_TV_SB3_DCU1_ARB_CR1_reg, 0x0);

		// check brig cmd done
		while (1)
		{
			reg_arb_sr0.regValue = rtd_inl(TVSB3_TV_SB3_DCU1_ARB_SR0_reg);
			if ((reg_arb_sr0.sb_req ==0) && (reg_arb_sr0.sb_gnt == 0))
				break;

			udelay(100);

			if (retry_cnt > 0xFFFF)
			{
				pr_err("[QOS][ERROR] swtich brig %x to %x FAILED (%x)\n",
						brig, target, rtd_inl(TVSB3_TV_SB3_DCU1_ARB_SR0_reg));
				break;
			}
		}

		// switch sys path
		reg_dc_sys3_mux.regValue = rtd_inl(DC_SYS_dc_sys3_mux_reg);
		if (target == RTK_SYS_PATH1)
		{
			reg_dc_sys3_mux.tv_sb3_mux = 0;
			rtd_maskl(DC1_MC_MCFIFO_CTRL_FUNC1_reg, 0xFFFFFFFE, 0x1); // sys1 cmd inorder
		}
		else if (target == RTK_SYS_PATH3)
		{
			reg_dc_sys3_mux.tv_sb3_mux = 1;
			rtd_maskl(DC1_MC_MCFIFO_CTRL_FUNC1_reg, 0xFFFFFFFE, 0x0); // sys1 cmd no inorder
		}
		rtd_outl(DC_SYS_dc_sys3_mux_reg, reg_dc_sys3_mux.regValue);

		// unlock brig
		rtd_outl(TVSB3_TV_SB3_DCU1_ARB_CR1_reg, value_arb_en);
	}

	return 0;
}

RTK_SYS_PATH_T rtk_sys_brig_get_curr_path(RTK_BRIG_T brig)
{
	dc_sys_dc_sys3_mux_RBUS reg_dc_sys3_mux;

	if (brig == RTK_BRIG_TVSB3)
	{
		reg_dc_sys3_mux.regValue = rtd_inl(DC_SYS_dc_sys3_mux_reg);
		if (reg_dc_sys3_mux.tv_sb3_mux == 0)
			return RTK_SYS_PATH1;
		else
			return RTK_SYS_PATH3;
	}

	return RTK_SYS_ERROR;
}

static struct file* file_open(const char* path, int flags, int rights) {
	struct file* filp = NULL;
	mm_segment_t oldfs;
	int err = 0;

	oldfs = get_fs();
	set_fs(get_ds());
	filp = filp_open(path, flags, rights);
	set_fs(oldfs);
	if(IS_ERR(filp)) {
		err = PTR_ERR(filp);
		return NULL;
	}
	return filp;
}

static void file_close(struct file* file) {
	filp_close(file, NULL);
}

#if 0
static int file_read(struct file* file, unsigned long long offset, unsigned char* data, unsigned int size) {
	mm_segment_t oldfs;
	int ret;

	oldfs = get_fs();
	set_fs(get_ds());

	ret = vfs_read(file, data, size, &offset);

	set_fs(oldfs);
	return ret;
}
#endif

static int file_write(struct file* file, unsigned long long offset, unsigned char* data, unsigned int size) {
	mm_segment_t oldfs;
	int ret;

	oldfs = get_fs();
	set_fs(get_ds());

	ret = vfs_write(file, data, size, &offset);

	set_fs(oldfs);
	return ret;
}

#if 0
static int file_sync(struct file* file) {
	vfs_fsync(file, 0);
	return 0;
}
#endif

#define MC_1 0
#define MC_TOTAL_NUM 1
#define MC_RECORD_NUMBER 8

unsigned int total_measure_frames = 0;
unsigned char *qos_bw_measure_p[MC_TOTAL_NUM] = {NULL};
unsigned int conflict_occur_cnt[MC_TOTAL_NUM] = {0};

extern int rtk_qos_bw_stop_measure(void);

// get all client record from sram
int rtk_qos_bw_get_all_client_record(SRAM_RECORD_t *sram_record_p, unsigned int mc_idx, unsigned int record_idx, unsigned int curr_pos)
{
	unsigned char bus_i;
	unsigned char client_j;
	unsigned int set_record_reg;
	unsigned int r_record_reg;
	unsigned int w_record_reg;
	unsigned int cur_access_reg;

	// check parameter
	if (sram_record_p == NULL)
	{
		pr_err("%s:%d [ERR] record pointer is null\n", __FUNCTION__, __LINE__);
		return 1;
	}

	// check parameter
	if (record_idx >= MC_RECORD_NUMBER)
	{
		pr_err("%s:%d [ERR] record number(%d) large than 7\n", __FUNCTION__, __LINE__, record_idx);
		return 1;
	}

	// check parameter
	if (mc_idx == 0)
	{
		set_record_reg = DC1_MC_CLIENT_MEAS_1_reg;
		r_record_reg = DC1_MC_CLIENT_MEAS_2_reg;
		w_record_reg = DC1_MC_CLIENT_MEAS_3_reg;
		cur_access_reg = DC1_MC_CLIENT_MEAS_4_reg;
	}
#ifdef eNABLE_DC2_SUPPORT
	else if (mc_idx == 1)
	{
		set_record_reg = DC2_MC_CLIENT_MEAS_1_reg;
		r_record_reg = DC2_MC_CLIENT_MEAS_2_reg;
		w_record_reg = DC2_MC_CLIENT_MEAS_3_reg;
		cur_access_reg = DC2_MC_CLIENT_MEAS_4_reg;
	}
#endif
	else
	{
		pr_err("%s:%d [ERR] wrong mc_idx(%d)\n", __FUNCTION__, __LINE__, mc_idx);
		return 1;
	}

//	sram_record_p->idx[0] = record_idx;
//	sram_record_p->idx[1] = curr_pos;
	for (bus_i = 0;bus_i < DBUS_BUS_ID_NUM;bus_i++)
	{
		for (client_j = 0;client_j < DBUS_CLIENT_ID_NUM;client_j++)
		{
			if (rtd_inl(cur_access_reg) == record_idx) // check conflict occur
			{
				conflict_occur_cnt[mc_idx]++;
			}
			rtd_outl(set_record_reg, ((record_idx & 0x7) << 8) | (bus_i << 4) | client_j); // record << 8 | client_id
			while((rtd_inl(set_record_reg) & 0x80000000) != 0x80000000) // wait for done bit
			{
				;
			}
			sram_record_p->r_count[bus_i][client_j] = rtd_inl(r_record_reg); // meas_read_cnt
			sram_record_p->w_count[bus_i][client_j] = rtd_inl(w_record_reg); // meas_write_cnt
		}
	}

	return 0;
}

int rtk_qos_bw_start_measure(unsigned int n_sec)
{
	unsigned int cur_record_frame[MC_TOTAL_NUM] = {0};
	unsigned int cur_pos[MC_TOTAL_NUM] = {0};
	unsigned int last_pos[MC_TOTAL_NUM] = {0};
	unsigned int mc_idx;

	// check if need to release resource first
	if ((qos_bw_measure_p[MC_1] != NULL)/* || (qos_bw_measure_p[MC_2] != NULL)*/)
	{
		rtk_qos_bw_stop_measure();
	}

	total_measure_frames = n_sec * 1000 / 16;

	// memory alloc
	qos_bw_measure_p[MC_1] = dvr_malloc(sizeof(SRAM_RECORD_t) * total_measure_frames);

	if (qos_bw_measure_p[MC_1] == NULL)
	{
		pr_err("%s:%d [ERR] qos_bw_measure_p[MC1] is NULL\n", __FUNCTION__, __LINE__);
		return 1;
	}

	memset(qos_bw_measure_p[MC_1], 0, sizeof(SRAM_RECORD_t) * total_measure_frames);

	// enable MC continue record
	rtd_outl(DC1_MC_CLIENT_MEAS_0_reg, 0x3);

	pr_err("Start Measure MC1@%p frame_cnt=%d size=%d ...\n",
		qos_bw_measure_p[MC_1],
		total_measure_frames,
		(int)(sizeof(SRAM_RECORD_t)) * total_measure_frames);

	// start record back
	while(1)
	{
		// check finish
		if (cur_record_frame[MC_1] >= total_measure_frames)
			break;

		// get current accessing sram
		cur_pos[MC_1] = rtd_inl(DC1_MC_CLIENT_MEAS_4_reg);
		for (mc_idx = 0;mc_idx < MC_TOTAL_NUM;mc_idx++)
		{
			if (cur_pos[mc_idx] > (last_pos[mc_idx] + 1))
			{
				last_pos[mc_idx]++;

				rtk_qos_bw_get_all_client_record(
					(SRAM_RECORD_t *)(qos_bw_measure_p[mc_idx] + cur_record_frame[mc_idx] * sizeof(SRAM_RECORD_t)),
					mc_idx,
					last_pos[mc_idx],
					cur_pos[mc_idx]);

				cur_record_frame[mc_idx]++;
			}
			else if (cur_pos[mc_idx] < last_pos[mc_idx])
			{
				if (last_pos[mc_idx] == (MC_RECORD_NUMBER - 1))
				{
					if (cur_pos[mc_idx] != 0)
					{
						last_pos[mc_idx] = 0;

						rtk_qos_bw_get_all_client_record(
							(SRAM_RECORD_t *)(qos_bw_measure_p[mc_idx] + cur_record_frame[mc_idx] * sizeof(SRAM_RECORD_t)),
							mc_idx,
							last_pos[mc_idx],
							cur_pos[mc_idx]);

						cur_record_frame[mc_idx]++;
					}
					else
					{
						msleep(16); // wait for next available record
					}
				}
				else
				{
					last_pos[mc_idx]++;

					rtk_qos_bw_get_all_client_record(
						(SRAM_RECORD_t *)(qos_bw_measure_p[mc_idx] + cur_record_frame[mc_idx] * sizeof(SRAM_RECORD_t)),
						mc_idx,
						last_pos[mc_idx],
						cur_pos[mc_idx]);

					cur_record_frame[mc_idx]++;
				}
			}
			else
			{
				msleep(16); // wait for next available record
			}
		}
	}

	pr_err("Stop Measure MC1 frame_cnt=%d conflict_cnt=%d\n", cur_record_frame[MC_1], conflict_occur_cnt[MC_1]);

	rtd_outl(DC1_MC_CLIENT_MEAS_0_reg, 0x0); // MC1 record disable

	return 0;
}

int rtk_qos_bw_stop_measure(void)
{
	pr_err("Free MC1 memory %p\n", qos_bw_measure_p[MC_1]);

	dvr_free(qos_bw_measure_p[MC_1]);

	qos_bw_measure_p[MC_1] = NULL;

	total_measure_frames = 0;

	conflict_occur_cnt[MC_1] = 0;

	return 0;
}

int rtk_qos_bw_dump_measure_result(unsigned int save_to_file, unsigned int bus_id)
{
#define FNAME_STRING_MAX 32
#define TMP_STRING_MAX 256
	unsigned int mc_idx;
	unsigned int frame_idx;
	unsigned int bus_i;
	unsigned int client_j;
	SRAM_RECORD_t *sram_record_p = NULL;
	struct file *filePtr = 0;
	unsigned char tmp_string[TMP_STRING_MAX] = "";
	unsigned int file_offset = 0;
	unsigned int bus_sum[DBUS_BUS_ID_NUM] = {0};
	unsigned int client_sum[DBUS_CLIENT_ID_NUM] = {0};
	unsigned char w_filename[FNAME_STRING_MAX] = "";

	if (qos_bw_measure_p[MC_1] == NULL)
	{
		pr_err("%s:%d [ERR] qos_bw_measure_p[MC1] is NULL\n", __FUNCTION__, __LINE__);
		return 1;
	}

	if (save_to_file)
	{
		snprintf(w_filename, FNAME_STRING_MAX, "/tmp/var/log/bw_0x%x.txt", bus_id);
		filePtr = file_open(w_filename, O_TRUNC | O_RDWR | O_CREAT, 0);
	}

	// Type 1: dump all bus
	if (bus_id == 0xFF)
	{
		snprintf(tmp_string, TMP_STRING_MAX,
			"frame,0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f\n");

		if (save_to_file)
		{
			file_write(filePtr, file_offset, tmp_string, strlen(tmp_string));
			file_offset += strlen(tmp_string);
		}
		else
		{
			pr_err("%s", tmp_string);
			msleep(1);
		}
		for (frame_idx = 0;frame_idx < total_measure_frames; frame_idx++)
		{
			memset(bus_sum, 0, sizeof(bus_sum));
			memset(tmp_string, 0, TMP_STRING_MAX);
			for (bus_i = 0;bus_i < DBUS_BUS_ID_NUM;bus_i++)
			{
				bus_sum[bus_i] = 0;
				for (client_j = 0;client_j < DBUS_CLIENT_ID_NUM;client_j++)
				{
					for (mc_idx = 0;mc_idx < MC_TOTAL_NUM;mc_idx++)
					{
						sram_record_p = (SRAM_RECORD_t *)(qos_bw_measure_p[mc_idx] + frame_idx * sizeof(SRAM_RECORD_t));
						bus_sum[bus_i] += sram_record_p->r_count[bus_i][client_j];
						bus_sum[bus_i] += sram_record_p->w_count[bus_i][client_j];
					}
				}
			}

			snprintf(tmp_string, TMP_STRING_MAX,
				"%4d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d\n",
				frame_idx,
				bus_sum[0],bus_sum[1],bus_sum[2],bus_sum[3],
				bus_sum[4],bus_sum[5],bus_sum[6],bus_sum[7],
				bus_sum[8],bus_sum[9],bus_sum[10],bus_sum[11],
				bus_sum[12],bus_sum[13],bus_sum[14],bus_sum[15]);

			if (save_to_file)
			{
				file_write(filePtr, file_offset, tmp_string, strlen(tmp_string));
				file_offset += strlen(tmp_string);
			}
			else
			{
				pr_err("%s", tmp_string);
				msleep(1);
			}
		}
	}
	else // Type 2: dump specific bus
	{
		snprintf(tmp_string, TMP_STRING_MAX,
			"frame,%x0,%x1,%x2,%x3,%x4,%x5,%x6,%x7,%x8,%x9,%xa,%xb,%xc,%xd,%xe,%xf\n",
			bus_id,bus_id,bus_id,bus_id,
			bus_id,bus_id,bus_id,bus_id,
			bus_id,bus_id,bus_id,bus_id,
			bus_id,bus_id,bus_id,bus_id);

		if (save_to_file)
		{
			file_write(filePtr, file_offset, tmp_string, strlen(tmp_string));
			file_offset += strlen(tmp_string);
		}
		else
		{
			pr_err("%s", tmp_string);
			msleep(1);
		}

		for (frame_idx = 0;frame_idx < total_measure_frames; frame_idx++)
		{
			memset(client_sum, 0, sizeof(client_sum));
			memset(tmp_string, 0, TMP_STRING_MAX);
			for (client_j = 0;client_j < DBUS_CLIENT_ID_NUM;client_j++)
			{
				client_sum[client_j] = 0;
				for (mc_idx = 0;mc_idx < MC_TOTAL_NUM;mc_idx++)
				{
					sram_record_p = (SRAM_RECORD_t *)(qos_bw_measure_p[mc_idx] + frame_idx * sizeof(SRAM_RECORD_t));
					client_sum[client_j] += sram_record_p->r_count[bus_id][client_j];
					client_sum[client_j] += sram_record_p->w_count[bus_id][client_j];
				}
			}

			snprintf(tmp_string, TMP_STRING_MAX,
				"%4d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d,%7d\n",
				frame_idx,
				client_sum[0],client_sum[1],client_sum[2],client_sum[3],
				client_sum[4],client_sum[5],client_sum[6],client_sum[7],
				client_sum[8],client_sum[9],client_sum[10],client_sum[11],
				client_sum[12],client_sum[13],client_sum[14],client_sum[15]);

			if (save_to_file)
			{
				file_write(filePtr, file_offset, tmp_string, strlen(tmp_string));
				file_offset += strlen(tmp_string);
			}
			else
			{
				pr_err("%s", tmp_string);
				msleep(1);
			}
		}
	}

	if (save_to_file)
	{
		file_close(filePtr);
	}

	return 0;
}

#if 0 // kthread for mc measure debug
static struct task_struct *g_qos_mc_measure_task = NULL;
int rtk_qos_mc_measure_thread_fn(void *arg)
{
	pr_err("%s created\n", __FUNCTION__);
	rtk_qos_bw_start_measure(2);
	rtk_qos_bw_dump_measure_result(0, 0x5);
	pr_err("%s exited\n", __FUNCTION__);
	return 0;
}

int rtk_qos_set_mc_measure_thread(unsigned int state)
{
	if (state == 1)
	{
		g_qos_mc_measure_task = kthread_run(rtk_qos_mc_measure_thread_fn, NULL, "qos_mc_measure_tsk");
		if(!g_qos_mc_measure_task) {
			pr_emerg("create qos mc measure thread fail\n");
			return -1;
		}
		pr_info("create qos mc measure thread success\n");
	}
	return 0;
}
#endif

int rtk_qos_effi_start_measure(unsigned int n_ref_count, unsigned int loops, unsigned int meas_ddr_num)
{
#define MC_BURST_LENGTH 16 /* 128 bits/8 = 16 bytes*/
#define MC_FRAME_RATE_SOURCE_CLK 27000000

	int cnt = 0;
	unsigned int rd_cnt, rd_chop_cnt, rd_parst_acc_cnt;
	unsigned int wr_cnt, wr_chop_cnt, wr_parst_acc_cnt;
	dc1_mc_eff_meas_ctrl_RBUS eff_meas_ctrl_reg;
	unsigned int rw_small_ratio_max = 0;
	unsigned int rw_small_ratio_cur = 0;
	unsigned int ddr_num = 2;
#if 1 // support 3-ddr
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;
#endif
	unsigned int rw_bw_cur = 0;
	unsigned int rw_bw_max = 0;
	unsigned int ddomain_frame_rate = 0;

	ddomain_frame_rate = MC_FRAME_RATE_SOURCE_CLK / rtd_inl(0xb80282ec);

	pr_emerg("%x,%x,%x,%x,%x,%x\n",
		DC1_MC_READ_CMD_reg,
		DC1_MC_READ_CHOP_CMD_reg,
		DC1_MC_PARST_ACC_RD_CNT_reg,
		DC1_MC_WRITE_CMD_reg,
		DC1_MC_WRITE_CHOP_CMD_reg,
		DC1_MC_PARST_ACC_WR_CNT_reg);

	// enable effi measure
	eff_meas_ctrl_reg.regValue = rtd_inl(DC1_MC_EFF_MEAS_CTRL_reg);
	if (n_ref_count != 0)
	{
		eff_meas_ctrl_reg.meas_period = n_ref_count; // set as refresh interval cnt
		eff_meas_ctrl_reg.meas_int_src = 0; // refresh mode
	}
	else
	{
		eff_meas_ctrl_reg.meas_period = 1; // set as 1 sync
		eff_meas_ctrl_reg.meas_int_src = 1; // vsync mode
	}

	// decide ddr number for measure
	if (meas_ddr_num == 0)
	{
		eff_meas_ctrl_reg.rwcnt_ddrsel = 3; //all-ddr
	}
	else
	{
		eff_meas_ctrl_reg.rwcnt_ddrsel = meas_ddr_num - 1; // 1/2/3-ddr
	}

	// start measure
	for (cnt = 0; cnt < loops;cnt++)
	{
		eff_meas_ctrl_reg.eff_meas_en = 1;
		rtd_outl(DC1_MC_EFF_MEAS_CTRL_reg, eff_meas_ctrl_reg.regValue);

		// wait complete
		while(1) {
			eff_meas_ctrl_reg.regValue = rtd_inl(DC1_MC_EFF_MEAS_CTRL_reg);
			if (eff_meas_ctrl_reg.eff_meas_en == 0)
				break;
		}

		rd_cnt = rtd_inl(DC1_MC_READ_CMD_reg);
		rd_chop_cnt = rtd_inl(DC1_MC_READ_CHOP_CMD_reg);
		rd_parst_acc_cnt = rtd_inl(DC1_MC_PARST_ACC_RD_CNT_reg);
		wr_cnt = rtd_inl(DC1_MC_WRITE_CMD_reg);
		wr_chop_cnt = rtd_inl(DC1_MC_WRITE_CHOP_CMD_reg);
		wr_parst_acc_cnt = rtd_inl(DC1_MC_PARST_ACC_WR_CNT_reg);

#if 1 // support 3-ddr
		dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);
		ddr_num = dc_sys_misc.mem_num + 1;
#endif

		if (dc_sys_misc.en_ddr_diff_size == 1) //DDRs with different size
		{
			rw_small_ratio_cur =
				(100 * (ddr_num * (rd_cnt+wr_cnt) - (rd_chop_cnt+wr_chop_cnt) - (rd_parst_acc_cnt+wr_parst_acc_cnt))) / (rd_cnt+wr_cnt);
		}
		else // DDRs with the same size
		{
			rw_small_ratio_cur = 0; // force 0 to prevent report side-effect
		}

		// boundary check
		if (rw_small_ratio_cur > 100) // out of boundary
		{
			rw_small_ratio_cur = 0;
		}

		// save ratio max
		if (rw_small_ratio_cur > rw_small_ratio_max)
			rw_small_ratio_max = rw_small_ratio_cur;

		// compute bw
		rw_bw_cur = ((rd_parst_acc_cnt + wr_parst_acc_cnt)/1000)*MC_BURST_LENGTH*ddomain_frame_rate/1000;

		// save bw max
		if (rw_bw_cur > rw_bw_max)
			rw_bw_max = rw_bw_cur;

		if (meas_ddr_num == 0) // can show 1-ddr ratio
		{
			// dump result
			pr_emerg("%8d,%8d,%8d,%8d,%8d,%8d,%2d%%,%5d MB/s\n",
				rd_cnt, rd_chop_cnt, rd_parst_acc_cnt,
				wr_cnt, wr_chop_cnt, wr_parst_acc_cnt,
				rw_small_ratio_cur, rw_bw_cur);
		}
		else
		{
			// dump result
			pr_emerg("%8d,%8d,%8d,%8d,%8d,%8d,%d-ddr: %5d MB/s\n",
				rd_cnt, rd_chop_cnt, rd_parst_acc_cnt,
				wr_cnt, wr_chop_cnt, wr_parst_acc_cnt,
				meas_ddr_num, rw_bw_cur);
		}
	}

	if (meas_ddr_num == 0) // can show small range ratio
	{
		// dump small dram max ratio & bw
		pr_emerg("max:%2d%%\n", rw_small_ratio_max);
	}

	// dump bw max ratio
	pr_emerg("max:%5d MB/s\n", rw_bw_max);

	return 0;
}

int rtk_qos_mc_measure(unsigned int client_id, unsigned int loop_cnt)
{
#define RTK_QOS_MC_MEASURE_1 0
#define RTK_QOS_MC_MEASURE_2 1
#define MC_BURST_LENGTH 16 /* 128 bits/8 = 16 bytes*/
#define MC_RECORD_NUMBER 8
#define MC_FRAME_RATE_SOURCE_CLK 27000000

	unsigned int i = 0, j = 0;
	unsigned int max_r_cnt[2] = {0};
	unsigned int max_w_cnt[2] = {0};
	unsigned int r_cnt[2] = {0};
	unsigned int w_cnt[2] = {0};
	unsigned int r_valid[2] = {0};
	unsigned int w_valid[2] = {0};
	unsigned int r_prev_cnt[2] = {0xFFFFFFFF, 0xFFFFFFFF};
	unsigned int w_prev_cnt[2] = {0xFFFFFFFF, 0xFFFFFFFF};
	unsigned int timeout_cnt = 0;
	unsigned int ddomain_frame_rate = 0;

	ddomain_frame_rate = MC_FRAME_RATE_SOURCE_CLK / rtd_inl(0xb80282ec);

	pr_emerg("Client[%x] avg of 8 vsync record [MC1_R/MC1_W] (loop_cnt=%d, frame rate=%d)\n", client_id, loop_cnt, ddomain_frame_rate);

	for (i = 0;i < loop_cnt;i++)
	{
		rtd_outl(DC1_MC_CLIENT_MEAS_0_reg, 0x1); // MC1 record enable
		while(1){
			if (rtd_inl(DC1_MC_CLIENT_MEAS_0_reg) == 0x0) // wait record done
			{
				{
					timeout_cnt = 0;
					break;
				}
			}

			timeout_cnt++;
			if (timeout_cnt > 0x8000000){
				pr_emerg("[ERROR] Wait mc measure dont bit timeout\n");
				return 0;
			}
		}

		r_cnt[RTK_QOS_MC_MEASURE_1] = 0;
		w_cnt[RTK_QOS_MC_MEASURE_1] = 0;

		r_prev_cnt[RTK_QOS_MC_MEASURE_1] = 0xFFFFFFFF;
		w_prev_cnt[RTK_QOS_MC_MEASURE_1] = 0xFFFFFFFF;

		r_valid[RTK_QOS_MC_MEASURE_1] = 0;
		w_valid[RTK_QOS_MC_MEASURE_1] = 0;

		// sum of 8 record
		for (j = 0;j < MC_RECORD_NUMBER;j++)
		{
			rtd_outl(DC1_MC_CLIENT_MEAS_1_reg, ((j & 0x7) << 8) | client_id); // record << 8 | client_id

			r_cnt[RTK_QOS_MC_MEASURE_1] += rtd_inl(DC1_MC_CLIENT_MEAS_2_reg); // meas_read_cnt
			r_valid[RTK_QOS_MC_MEASURE_1]++;

			w_cnt[RTK_QOS_MC_MEASURE_1] += rtd_inl(DC1_MC_CLIENT_MEAS_3_reg); // meas_write_cnt
			w_valid[RTK_QOS_MC_MEASURE_1]++;
		}

		// compute the real count
		if (r_valid[RTK_QOS_MC_MEASURE_1] != 0)
			r_cnt[RTK_QOS_MC_MEASURE_1] /= r_valid[RTK_QOS_MC_MEASURE_1];

		if (w_valid[RTK_QOS_MC_MEASURE_1] != 0)
			w_cnt[RTK_QOS_MC_MEASURE_1] /= w_valid[RTK_QOS_MC_MEASURE_1];

		// save the max value
		if (r_cnt[RTK_QOS_MC_MEASURE_1] > max_r_cnt[RTK_QOS_MC_MEASURE_1])
			max_r_cnt[RTK_QOS_MC_MEASURE_1] = r_cnt[RTK_QOS_MC_MEASURE_1];

		if (w_cnt[RTK_QOS_MC_MEASURE_1] > max_w_cnt[RTK_QOS_MC_MEASURE_1])
			max_w_cnt[RTK_QOS_MC_MEASURE_1] = w_cnt[RTK_QOS_MC_MEASURE_1];

		pr_emerg("Client[%x][%5d] => [MC1] %6d %6d => ",
			client_id,
			i,
			r_cnt[RTK_QOS_MC_MEASURE_1],
			w_cnt[RTK_QOS_MC_MEASURE_1]
		);

		pr_emerg("%4d MB/s %4d MB/s\n",
			r_cnt[RTK_QOS_MC_MEASURE_1]*MC_BURST_LENGTH*ddomain_frame_rate/1000/1000,
			w_cnt[RTK_QOS_MC_MEASURE_1]*MC_BURST_LENGTH*ddomain_frame_rate/1000/1000
		);
	}

	pr_emerg("[Client:%x][MC1 Max] === r:%4d MB/s w:%4d MB/s ===\n",
		client_id,
		max_r_cnt[RTK_QOS_MC_MEASURE_1]*MC_BURST_LENGTH*ddomain_frame_rate/1000/1000,
		max_w_cnt[RTK_QOS_MC_MEASURE_1]*MC_BURST_LENGTH*ddomain_frame_rate/1000/1000
	);

	return 0;
}

int rtk_qos_mode_parsing(const char *buf)
{
	char *mode;
	unsigned int client_id;
	unsigned int loop_cnt;
	int ret = -1; // error

	if(buf==NULL) {
		pr_emerg("rtk_qos_mode_parsing param buf is null\n");
		return -1;
	}

	mode = strstr(buf, "@");

	if (buf != NULL)
	{
		if (strncmp(buf, "meas", 4) == 0) // measure use one-time mode
		{
			/*
			 * e.g. Measure SCPU 50 loops: echo meas@f0,50 > /sys/realtek_boards/rtk_qos
			 */
			if (mode != NULL)
			{
				sscanf(mode+1, "%x", &client_id);
				mode = strstr(mode+1, ",");
				if (mode != NULL)
				{
					sscanf(mode+1, "%d", &loop_cnt);
					rtk_qos_mc_measure(client_id, loop_cnt);
				}
				else
				{
					rtk_qos_mc_measure(client_id, 100);
				}
			}
			ret = 0x80; // measure
		}
		else if (strncmp(buf, "bw_start", 8) == 0) // measure use continue mode
		{
			/*
			 * e.g. Measure 30 sec: echo bw_start@30 > /sys/realtek_boards/rtk_qos
			 */
			if (mode != NULL)
			{
				sscanf(mode+1, "%d", &loop_cnt); // get n_sec
				rtk_qos_bw_start_measure(loop_cnt);
			}
			else
			{
				rtk_qos_bw_start_measure(10); // default measure 10 sec
			}

			ret = 0x80; // measure
		}
		else if (strncmp(buf, "bw_dump", 7) == 0) // dump all client in bus
		{
			/*
			 * e.g. Dump TVSB2(0x0) to file: echo bw_dump@0x0 > /sys/realtek_boards/rtk_qos
			 *      Dump all bus to file:    echo bw_dump > /sys/realtek_boards/rtk_qos
			 */
			if (mode != NULL)
			{
				sscanf(mode+1, "%x", &client_id); // is bus_id
				rtk_qos_bw_dump_measure_result(1, client_id);
			}
			else
			{
				rtk_qos_bw_dump_measure_result(1, 0xFF); // dump all bus
				for (client_id = 0;client_id < DBUS_BUS_ID_NUM;client_id++)
				{
					rtk_qos_bw_dump_measure_result(1, client_id); // dump each bus
				}
			}
			ret = 0x80; // measure
		}
		else if (strncmp(buf, "bw_done", 7) == 0)
		{
			/*
			 * e.g. Free bw memory: echo bw_done > /sys/realtek_boards/rtk_qos
			 */
			rtk_qos_bw_stop_measure();
			ret = 0x80; // measure
		}
		else if (strncmp(buf, "effi", 4) == 0) // effi measure consider one-ddr
		{
			/*
			 * e.g. Measure 1-ddr BW by 1 vsync: echo effi@1ddr > /sys/realtek_boards/rtk_qos
			 *      Measure 2-ddr BW by 1 vsync: echo effi@2ddr > /sys/realtek_boards/rtk_qos
			 *      Measure 3-ddr BW by 1 vsync: echo effi@3ddr > /sys/realtek_boards/rtk_qos
			 *      Measure one-ddr ratio by 1 vsync: echo effi > /sys/realtek_boards/rtk_qos
			 */
			if (mode != NULL)
			{
				mode++;
				if (strncmp(mode, "1ddr", 4) == 0)
				{
					rtk_qos_effi_start_measure(0, 1000, 1); // 1-ddr
				}
				else if (strncmp(mode, "2ddr", 4) == 0)
				{
					rtk_qos_effi_start_measure(0, 1000, 2); // 2-ddr
				}
				else if (strncmp(mode, "3ddr", 4) == 0)
				{
					rtk_qos_effi_start_measure(0, 1000, 3); // 3-ddr
				}
				else
				{
					rtk_qos_effi_start_measure(0, 1000, 0); // all-ddr
				}
			}
			else
			{
				rtk_qos_effi_start_measure(0, 1000, 0); // all-ddr
			}
			ret = 0x80; // measure
		}
		else if (strncmp(buf, "brig", 4) == 0)
		{
			/*
			 * e.g. Test switch: echo brig@switch > /sys/realtek_boards/rtk_qos
			 */
			if (mode != NULL)
			{
				mode++;
				if (strncmp(mode, "switch", 6) == 0)
				{
					if (rtk_sys_brig_get_curr_path(RTK_BRIG_TVSB3) == RTK_SYS_PATH1)
					{
						pr_emerg("[QoS]switch %x to %x\n", RTK_BRIG_TVSB3, RTK_SYS_PATH3);
						rtk_sys_brig_switch_path(RTK_BRIG_TVSB3, RTK_SYS_PATH3);
					}
					else
					{
						pr_emerg("[QoS]switch %x to %x\n", RTK_BRIG_TVSB3, RTK_SYS_PATH1);
						rtk_sys_brig_switch_path(RTK_BRIG_TVSB3, RTK_SYS_PATH1);
					}
				}
			}
			else
			{
				pr_emerg("[QoS] %x in %x\n", RTK_BRIG_TVSB3, rtk_sys_brig_get_curr_path(RTK_BRIG_TVSB3));
			}
			ret = 0x81;
		}
		else if (strncmp(buf, "reset", 5) == 0)
		{
			/*
			 * e.g. reset QoS mode: echo reset > /sys/realtek_boards/rtk_qos
			 */
			return 0; // reset 
		}
		else if (strncmp(buf, "set", 3) == 0)
		{
			/*
			 * e.g. force set QoS mode as decode mode: echo set@decode_1 > /sys/realtek_boards/rtk_qos
			 */
			if (mode != NULL)
			{
				mode++;
				if (strncmp(mode, "normal", 6) == 0)
				{
					return RTK_QOS_NORMAL_MODE; // normal mode
				}
				else if (strncmp(mode, "decode_1", 8) == 0)
				{
					return RTK_QOS_DECODER_4K_MODE; // decode mode
				}
				else if (strncmp(mode, "decode_3", 8) == 0)
				{
					return RTK_QOS_DECODER_4K_OPT1_MODE; // decode 4k opt1 mode
				}
				else if (strncmp(mode, "decode_2", 8) == 0)
				{
					return RTK_QOS_DECODER_2K_MODE; // decode 2k mode
				}
				else if (strncmp(mode, "decode_4", 8) == 0)
				{
					return RTK_QOS_DECODER_2K_OPT1_MODE; // decode 2k opt1 mode
				}
				else if (strncmp(mode, "hdmi_1", 6) == 0)
				{
					return RTK_QOS_HDMI_4K_MODE; // hdmi_4k mode
				}
				else if (strncmp(mode, "hdmi_2", 6) == 0)
				{
					return RTK_QOS_HDMI_2K_MODE; // hdmi_2k mode
				}
				else if (strncmp(mode, "user_a", 6) == 0)
				{
					return RTK_QOS_USER_A_MODE; // user_a mode
				}
				else if (strncmp(mode, "decode_bad", 10) == 0)
				{
					return RTK_QOS_DECODER_BAD_EDIT_MODE; // decode bad_edit mode
				}
				else
				{
					ret = -1; // error
				}
			}
			else
			{
				ret = -1; // error
			}
		}
		else
		{
			ret = -1; // error
		}
	}

	if (ret == -1)
	{
		pr_emerg("[ERROR] This is a wrong command!\n");
		pr_emerg("Please input [set|reset|meas|bw_start|bw_dump|bw_done|effi]\n");
		pr_emerg("  qos mode support: [normal|decode_1|decode_2|decode_3|decode_4|decode_bad|hdmi_1|hdmi_2|user_a]\n");
	}

	return ret;
}

ssize_t rtk_qos_store(struct kobject *kobj, struct kobj_attribute *attr, const char *buf, size_t count)
{
	int ret, mode=0;

#if 0 // Test code for SB3 Performance Counter
	#define SB3_ENABLE_reg 0xb801c100
	#define SB3_TOTAL_reg  0xb801c104
	#define SB3_CLIENT_reg 0xb801c110
	#define SB3_ACKNUM_reg 0xb801c13c

	int loop_cnt = 0;
	int client_id = 4;
	int max_value[11] = {0};
	int i = 0;

	while(loop_cnt < 1000) {
		rtd_outl(SB3_CLIENT_reg, client_id + 0xa0);
		rtd_outl(SB3_ENABLE_reg, 0x1);
		while(1) {
			if (rtd_inl(SB3_TOTAL_reg) > 0x1DCD6500) // 1sec
			{
				break;
			}
		}
		rtd_outl(SB3_ENABLE_reg, 0x0);
		pr_err("[SB3] %x %08x %08x\n", client_id + 0xa0, rtd_inl(SB3_ACKNUM_reg), rtd_inl(SB3_TOTAL_reg));

		if (max_value[client_id] < rtd_inl(SB3_ACKNUM_reg))
			max_value[client_id] = rtd_inl(SB3_ACKNUM_reg);

		if (client_id == 4)
		{
			client_id = 4;
		}
		else
		{
			// client_id = 1;
		}
		loop_cnt++;

		if (loop_cnt % 10 == 0) {
			for (i = 0;i < 11;i++)
			{
				pr_err("[SB3_MAX][a%x] %08x\n", i, max_value[i]);
			}
		}
	}
	return count;
#endif

	mode = rtk_qos_mode_parsing(buf);

	switch (mode) {
		case -1: // error
		case 0x80: // measure
		case 0x81: // brig test
			// do nothing here
			break;
		case 0: // reset
			ret = rtk_qos_reset_all();
			break;
		default: // other QoS mode
			ret = rtk_qos_set_force_mode(mode);
			break;
	}

	return count;
}

static int __init rtk_qos_init(void)
{
	//int ret;

	pr_debug("%s\n", __FUNCTION__);

	rtk_qos_save_mc_normal_setting(); // save initial qos setting.

	rtk_sys_arb_save_setting();

	// bw limit init threshold
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_VE, 0x80, 0x100);
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_GPU, 0x80, 0x100);
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_TVSB3, 0x80, 0x20);
	rtk_bw_limit_HW_set_threshold(RTK_BRIG_NNIP, 0x80, 0x8);

	// bw limit enable
	rtk_bw_limit_HW_set_mode(RTK_BRIG_VE, RTK_BW_LMMIT_HW_DAT);
	rtk_bw_limit_HW_set_mode(RTK_BRIG_GPU, RTK_BW_LMMIT_HW_DAT);
	rtk_bw_limit_HW_set_mode(RTK_BRIG_TVSB3, RTK_BW_LMMIT_HW_DAT);
	rtk_bw_limit_HW_set_mode(RTK_BRIG_NNIP, RTK_BW_LMMIT_HW_DAT);

	return 0;
}

late_initcall(rtk_qos_init);
EXPORT_SYMBOL(rtk_qos_set_mode);

#ifdef ENABLE_IB_SUPPORT
#include "rbus/ib_reg.h"

void rtk_ib_get_region_addr(RTK_IB_REGION_INDEX idx, unsigned int *start, unsigned int *end)
{
	unsigned int region_bound_value[5] = {0};

	if (idx < RTK_IB_REGION_TOTAL_NUM)
	{
		region_bound_value[0] = 0x0;
		region_bound_value[1] = rtd_inl(IB_IB_SEQ_BOUND_0_reg);
		region_bound_value[2] = rtd_inl(IB_IB_SEQ_BOUND_1_reg);
		region_bound_value[3] = rtd_inl(IB_IB_SEQ_BOUND_2_reg);
		region_bound_value[4] = 0xFFFFFFFF; // may use dram total size

		*start = region_bound_value[idx];
		*end = region_bound_value[idx+1];
	}
	else
	{
		pr_err("[IB] %s fail, idx=%d >= %d\n", __FUNCTION__, idx, RTK_IB_REGION_TOTAL_NUM);
	}
}

RTK_IB_REGION_MODE rtk_ib_get_region_mode(RTK_IB_REGION_INDEX idx, unsigned int *slice_size)
{
	unsigned int slice_size_table[4] = {128, 256, 512, 1024};
	unsigned int region_set_value;
	RTK_IB_REGION_MODE region_mode;

	region_set_value = (rtd_inl(IB_IB_SEQ_REGION_SET_reg) >> ((3 - idx) * 8)) & 0xFF;
	*slice_size = slice_size_table[(region_set_value & 0x7)];
	region_mode = (region_set_value >> 4) & 0x7;

	return region_mode;
}

int rtk_ib_get_region(RTK_IB_REGION_INDEX idx, RTK_IB_REGION *ddr_region)
{
	rtk_ib_get_region_addr(idx, &(ddr_region->start_addr), &(ddr_region->end_addr));
	ddr_region->region_mode = rtk_ib_get_region_mode(idx, &(ddr_region->slice_size));

	return 0;
}

int rtk_ib_query_dc_region_by_address(unsigned int addr)
{
	RTK_IB_REGION all_region[4];
	int idx = 0;
	int is_dc1 = 1;
	unsigned int tmp;
	unsigned int swap;

	for (idx = 0;idx < RTK_IB_REGION_TOTAL_NUM;idx++)
	{
		rtk_ib_get_region(idx, &all_region[idx]);
		if ((addr >= all_region[idx].start_addr) && (addr < all_region[idx].end_addr))
			break;
	}

	switch (all_region[idx].region_mode)
	{
		case RTK_IB_REGION_MODE_DC1:
			is_dc1 = 1;
			break;
		case RTK_IB_REGION_MODE_DC2:
			is_dc1 = 0;
			break;
		case RTK_IB_REGION_MODE_IB_1_1:
			tmp = addr / all_region[idx].slice_size; // switch by slice size
			if ((tmp & 0x1) == 0x1)
				is_dc1 = 0;
			else
				is_dc1 = 1;
			break;
		case RTK_IB_REGION_MODE_IB_1_1_SCRAMBLE:
			tmp = addr / 0x4000; // scramble by 16KB
			if ((tmp & 0x1) == 0x1)
				swap = 1;
			else
				swap = 0;

			tmp = addr / all_region[idx].slice_size; // switch by slice size
			if ((tmp & 0x1) == 0x1)
				is_dc1 = swap?1:0;
			else
				is_dc1 = swap?0:1;
			break;
		case RTK_IB_REGION_MODE_IB_1_2:
			break;
		case RTK_IB_REGION_MODE_IB_2_1:
			break;
	}

	return (is_dc1?0:1);
}

#if 0 // test only
static int __init rtk_ib_dump(void)
{
	RTK_IB_REGION ddr_region;
	unsigned int idx;

	pr_err("[IB] %s:\n", __FUNCTION__);

	for(idx = 0;idx < RTK_IB_REGION_TOTAL_NUM;idx++)
	{
		rtk_ib_get_region(idx, &ddr_region);

		pr_err("[IB] region[%d] %08x ~ %08x (mode:%d)(slice:%08x)\n",
			idx,
			ddr_region.start_addr,
			ddr_region.end_addr,
			ddr_region.region_mode,
			ddr_region.slice_size);
	}

	pr_err("0x12000000 is DC%d\n", rtk_ib_query_dc_region_by_address(0x12000000) + 1);
	pr_err("0x20000000 is DC%d\n", rtk_ib_query_dc_region_by_address(0x20000000) + 1);
	pr_err("0x21000200 is DC%d\n", rtk_ib_query_dc_region_by_address(0x21000200) + 1);
	pr_err("0x28004000 is DC%d\n", rtk_ib_query_dc_region_by_address(0x28004000) + 1);
	pr_err("0x34004200 is DC%d\n", rtk_ib_query_dc_region_by_address(0x34004200) + 1);

	return 0;
}
late_initcall(rtk_ib_dump);
#endif
#endif // ENABLE_IB_SUPPORT

#ifdef ENABLE_DC_API_SUPPORT
static unsigned int __rtk_dc_get_small_dram_size(void)
{
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;

	dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);

	if (dc_sys_misc.small_dram_4g)
		return 0x20000000; // 512MB
	if (dc_sys_misc.small_dram_2g)
		return 0x10000000; // 256MB
	if (dc_sys_misc.small_dram_1g)
		return 0x8000000; // 128MB
	if (dc_sys_misc.small_dram_512m)
		return 0x4000000; // 64MB

	return 0;
}

static unsigned int __rtk_dc_get_small_dram_num(void)
{
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;

	dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);

	switch(dc_sys_misc.small_dram_num){
		case 0:
			return 2; // 2 small dram
		case 1:
			return 1; // 1 small dram
		default:
			return 0; // no small dram
	}

	return 0;
}

static unsigned int __rtk_dc_get_dram_num(void)
{
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;

	dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);

	switch(dc_sys_misc.mem_num){
		case 0:
			return 1; // 1-ddr
		case 1:
			return 2; // 2-ddr
		case 2:
			return 3; // 3-ddr
		default:
			return 0; // none
	}

	return 0;
}

static unsigned int __rtk_dc_is_swapped(void)
{
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;

	dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);

	if (dc_sys_misc.en_full_ddr_last == 1)
		return 1; // swapped
	else
		return 0; // non-swapped
}

static unsigned int __rtk_dc_offset_is_sw_mode(void)
{
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;

	dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);

	if (dc_sys_misc.dc_offset_3ddr == 0) // without offset
		return 1; // sw mode
	else
		return 0; // hw mode
}

/*
 * 3ddr with 1 small dram
 * +------------+-------+
 * | small_size | delta |
 * +------------+-------+
 * |     4G     |  64   |
 * |     2G     |  32   |
 * |     1G     |  64   |
 * |   512M     |  32   |
 * +------------+-------+
 *
 * 3ddr with 2 small dram
 * +------------+-------+
 * | small_size | delta |
 * +------------+-------+
 * |     4G     |  32   |
 * |     2G     |  64   |
 * |     1G     |  32   |
 * |   512M     |  64   |
 * +------------+-------+
 */
static unsigned int __rtk_dc_get_sw_mode_offset(void)
{
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;

	dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);

	if (dc_sys_misc.mem_num != 2) // dram number is not 3-ddr
		return 0;

	if (dc_sys_misc.en_ddr_diff_size == 0) // dram size is the same
		return 0;

	if (dc_sys_misc.en_full_ddr_last == 0) // dram is not swapped
		return 0;

	if (dc_sys_misc.dc_offset_3ddr != 0) // hw offset has applied
		return 0;

	if (dc_sys_misc.small_dram_num == 1) // 1 small dram
	{
		if (dc_sys_misc.small_dram_4g || dc_sys_misc.small_dram_1g) // small dram is 4G or 1G
			return 64;
		else
			return 32;
	}
	else // 2 small dram
	{
		if (dc_sys_misc.small_dram_4g || dc_sys_misc.small_dram_1g) // small dram is 4G or 1G
			return 32;
		else
			return 64;
	}

	return 0;
}

static unsigned int __rtk_dc_get_boundary(void)
{
	dc_sys_dc_sys_misc_RBUS dc_sys_misc;
	int dram_num = 0;
	int small_dram_num = 0;
	unsigned int small_dram_size = 0;
	unsigned int boundary_addr = 0;

	dc_sys_misc.regValue = rtd_inl(DC_SYS_DC_SYS_MISC_reg);

	if (dc_sys_misc.en_ddr_diff_size == 0)
		return 0;

	dram_num = __rtk_dc_get_dram_num();
	small_dram_num = __rtk_dc_get_small_dram_num();
	small_dram_size = __rtk_dc_get_small_dram_size();

	if (dc_sys_misc.en_full_ddr_last == 0) // non-swapped
	{
		boundary_addr = small_dram_size * dram_num;
	}
	else
	{
		if (dram_num == 3)
			boundary_addr = small_dram_size * (dram_num - small_dram_num);
		else if (dram_num == 2)
			boundary_addr = small_dram_size;
	}

	return boundary_addr;
}

RTK_DC_RET_t rtk_dc_get_dram_info(RTK_DC_INFO_t *dram_info)
{
	if (dram_info == NULL) {
		pr_err("[ERR]%s(%d): dram_info is NULL\n", __FUNCTION__, __LINE__);
		return RTK_DC_RET_FAIL; // error
	}

	dram_info->dram_num = __rtk_dc_get_dram_num();
	dram_info->swap_en = __rtk_dc_is_swapped();
	dram_info->sw_mode = __rtk_dc_offset_is_sw_mode();
	dram_info->sw_offset = __rtk_dc_get_sw_mode_offset();
	dram_info->boundary = __rtk_dc_get_boundary();

	return RTK_DC_RET_SUCCESS;
}

RTK_DC_BW_TYPE_t rtk_dc_query_dram_region_by_addr(unsigned int phy_addr)
{
	RTK_DC_INFO_t dram_info;
	RTK_DC_RET_t ret;

	ret = rtk_dc_get_dram_info(&dram_info);

	if (ret != RTK_DC_RET_SUCCESS) {
		pr_err("[ERR]%s(%d): fail to get dram_info\n", __FUNCTION__, __LINE__);
		return RTK_DC_QUERY_FAIL; // error
	}

	if (dram_info.boundary == 0) // all dram size is the same
		return RTK_DC_HIGHER_BW;

	if ((dram_info.swap_en == 0) && (phy_addr < dram_info.boundary))
		return RTK_DC_HIGHER_BW;
	else if ((dram_info.swap_en == 1) && (phy_addr >= dram_info.boundary))
		return RTK_DC_HIGHER_BW;
	else
		return RTK_DC_LOWER_BW;
}

#if 0 // test only
static int __init rtk_dram_info_dump(void)
{
	RTK_DC_INFO_t dram_info;
	RTK_DC_RET_t ret;

	pr_err("[RTK-DC] %s:\n", __FUNCTION__);

	ret = rtk_dc_get_dram_info(&dram_info);

	if (ret == RTK_DC_RET_SUCCESS)
	{
		pr_err("dram_info->dram_num is %x\n", dram_info.dram_num);
		pr_err("dram_info->swap_en is %x\n", dram_info.swap_en);
		pr_err("dram_info->sw_mode is %x\n", dram_info.sw_mode);
		pr_err("dram_info->sw_offset is %x\n", dram_info.sw_offset);
		pr_err("dram_info->boundary is %x\n", dram_info.boundary);
	}
	else
	{
		pr_err("fail to get dram info\n");
	}

	pr_err("0x12000000 is %s bw region\n", rtk_dc_query_dram_region_by_addr(0x12000000)?"lower":"higher");
	pr_err("0x20000000 is %s bw region\n", rtk_dc_query_dram_region_by_addr(0x20000000)?"lower":"higher");
	pr_err("0x21000200 is %s bw region\n", rtk_dc_query_dram_region_by_addr(0x21000200)?"lower":"higher");
	pr_err("0x28004000 is %s bw region\n", rtk_dc_query_dram_region_by_addr(0x28004000)?"lower":"higher");
	pr_err("0x34004200 is %s bw region\n", rtk_dc_query_dram_region_by_addr(0x34004200)?"lower":"higher");

	return 0;
}
late_initcall(rtk_dram_info_dump);
#endif
#endif // ENABLE_DC_API_SUPPORT
