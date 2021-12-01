# 0. download an generic arm architecture toolchains

# 1. build kernel

## cd kernel path
cd kernel
## generate configs
cp arch/arm/configs/realtek/config.develop.android.r.rtd288o.tv030.emmc.andtv.optee.old_defconfig .config
make menuconfig
## compile with prebuilts toolchains
make -jN ARCH=arm CROSS_COMPILE=${CROSS_COMPILE}

# 2. build wifi driver mt76x8

## cd driver path
cd vendor/gen4m
## compile with prebuilts toolchains, output name: wlan_mt76x8_usb.ko
make -jN -f Makefile.ce TYPE=rt2851m_trom CHIP=mt76x8 LINUX_SRC=../../kernel CROSS_COMPILE=${CROSS_COMPILE}
