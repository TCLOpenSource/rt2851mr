#
# Makefile for the Realtek mcp drivers.
#

KBUILD_CPPFLAGS += -I ../

mcp_api-objs = mcp_cipher.o \
        mcp_dbg.o \
        mcp_aux.o \
        mcp_dgst.o mcp_dgst_dev.o aes_h.o sha1.o mcp_buff.o\
        mcp_cipher.o mcp_cipher_dev.o aes.o des.o tdes.o \
        camellia.o \

ifdef CONFIG_RTK_KDRV_MCP_SHA256
mcp_api-objs += sha256.o
endif  

obj-$(CONFIG_RTK_KDRV_MCP_NAPI) += mcp_api.o 
