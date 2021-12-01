#
# Makefile for the Realtek mcp drivers.
#
KBUILD_CPPFLAGS += -I ./
KBUILD_CFLAGS += -Wall -Werror
obj-$(CONFIG_RTK_KDRV_MCP) += rtk_mcp.o  rtk_mcp_dev.o rtk_mcp_test.o
obj-$(CONFIG_RTK_KDRV_MCP_NAPI) += napi/
obj-$(CONFIG_RTK_KDRV_MCP) += rcp/
obj-$(CONFIG_RTK_KDRV_MCP_RSA) += rsa/
