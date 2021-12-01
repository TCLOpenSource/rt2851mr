#include <linux/syscalls.h>
#include <linux/miscdevice.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <mach/io.h>
#include <rtk_kdriver/rng/rtk_rng_reg.h>


unsigned int get_rtk_rng(void)
{
    unsigned int rtn;

    while ((rtd_inl(RNG_RETURN3) & 0x1) == 0) ;

    rtn = rtd_inl(RNG_RESULTR);

    return rtn;
}
