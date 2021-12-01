KBUILD_CFLAGS += -Werror

KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/audio
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/audio_hw
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/include/rtk_kdriver/hal_inc

obj-y += rtkaudio_driver.o rtkaudio_debug.o
obj-y += audio_rpc.o

DEFS = -DUSE_INBAND_SYSPROC_COMMUNICATION

KBUILD_CFLAGS += $(DEFS)
