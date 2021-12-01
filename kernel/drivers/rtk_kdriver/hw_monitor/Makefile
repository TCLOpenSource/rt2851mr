#
# Makefile for the linux kernel.
#

obj-y += rtk_hw_monitor.o
obj-y += rtk_dc_simulator.o
 
# ARM wrapper monitor
obj-$(CONFIG_REALTEK_ARM_WRAPPER) += arm_wrapper.o

# SB2
obj-$(CONFIG_RTK_KDRV_SB2) += rtk_sb2.o

# DCU Memory Trash Detector
obj-$(CONFIG_RTK_KDRV_DC_MEMORY_TRASH_DETCTER) += rtk_dc_mt.o

