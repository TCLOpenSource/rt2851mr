#include <asm-generic/vmlinux.lds.h>
.section .dtb.init.rodata,"a"
.balign STRUCT_ALIGNMENT
.global __dtb_tilcdc_slave_compat_begin
__dtb_tilcdc_slave_compat_begin:
.incbin "drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb" 
__dtb_tilcdc_slave_compat_end:
.global __dtb_tilcdc_slave_compat_end
.balign STRUCT_ALIGNMENT
