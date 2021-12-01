#include <crypto/algapi.h>
#include <rtk_kdriver/mcp/rsa/rtk_rsa_api.h>
#include <rtk_kdriver/mcp/rsa/rtk_rsa_hw_fun.h>
#include "mcp/rtk_mcp_reg.h"

static DEFINE_MUTEX(hw_rsa_mutex);

/*-----------------------------------------------------------------------------*/
/*====================== For HW RSA utility function ==========================*/
/*-----------------------------------------------------------------------------*/
static int _check_msb_bit (MPI key)
{
    unsigned int check_bit;
    int i, j;

    if (key == NULL)
        return -1;

    for ( i = (key->nlimbs - 1); i >= 0; i-- ) {
        check_bit = 0x80000000;

        for ( j = 0; j < 32; j++ ) {
            if ( (key->d[i] & check_bit ) == check_bit ) {
                return ( ( ( i + 1 ) << 5 ) - ( j + 1 ) );
            }

            check_bit >>= 1;
        }
    }
    return 0;
}

static int _is_bit_set (MPI key, int n)
{
    if (key == NULL)
        return -1;

    if ( ( key->d[n >> 5] ) & ( 1 << (n & 0x1F) ) )
        return 1;
    else
        return 0;
}

static int hwsu_get_data (void *addr, MPI key, UINT8 type)
{
    int i, j, max_idx;
    int ret = 0;
    unsigned int *reg = (unsigned int *) addr;

    if(mpi_get_size(key) != 64) {
        ret = mpi_resize(key, 64);
        if(ret != 0)
            return ret;
    }

    if (type == TYPE_HW_MONT)
        max_idx = 63; //Max: 64 * 32 = 2048 bit
    else
        max_idx = 12; //Max: 13 * 32 = 416 bit

    /* Skip MSB zero */
    i = max_idx;
    while (i && (rtd_inl((unsigned int)(reg + i)) == 0)) {
        //printk("i=%d\n",i);
        i--;
    }
    /* Fill BI */
    key->nlimbs = i + 1;
    j = 1;
    for (; i >= 0; i--) {
        key->d[key->nlimbs - j] = rtd_inl((unsigned int)(reg + i));
        j++;
    }
    return ret;
}
//-----------------------------------------------------------------------------
static void hwsu_set_data (void *addr, MPI key, UINT8 type)
{
    int i, max_idx;
    unsigned int *reg = (unsigned int *) addr;

    if (type == TYPE_HW_MONT)
        max_idx = 63; //Max: 64 * 32 = 2048 bit
    else
        max_idx = 12; //Max: 13 * 32 = 416 bit

    for (i = 0; i < key->nlimbs; i++)
        rtd_outl((unsigned int)(reg + i), key->d[i]);

    /* Handle rest bytes (clear to 0) */
    for (; i <= max_idx; i++)
        rtd_outl((unsigned int)(reg + i), 0x0);

    return;
}
//-----------------------------------------------------------------------------
static void hwsu_set_bitnum (unsigned int bsize)
{
    rtd_outl((REG_RSA_CTRL1), (bsize >> 2) - 1);
}
//-----------------------------------------------------------------------------
static int hwsu_chk_mont_engine_ready (void)
{
    int ret = 0;
    unsigned long timeout = jiffies + HZ; /* timeout in 1s */
    while (rtd_inl(REG_RSA_CTRL) == 1) {
        if(timeout <= jiffies) {
            ret = -1;
            printk("[%s]%d: HW RSA check mont engine ready timeout!!\n", __FUNCTION__, __LINE__);
            break;
        }
    }
    return ret;
}
//-----------------------------------------------------------------------------
static void hwsu_mont_engine_go (void)
{
    rtd_outl((REG_RSA_CTRL), 1);
}
//----------------------------------------------------------------------------

static int hwsu_mont (MPI resl, MPI a, MPI b, MPI m, unsigned int bsize)
{
    int ret = 0;
    if((ret = hwsu_chk_mont_engine_ready()) != 0)
        return ret;

    hwsu_set_data((void *)REG_RSA_X, a, TYPE_HW_MONT);
    hwsu_set_data((void *)REG_RSA_Y, b, TYPE_HW_MONT);
    hwsu_set_data((void *)REG_RSA_M, m, TYPE_HW_MONT);

    hwsu_set_bitnum(bsize);

    hwsu_mont_engine_go();

    if((ret = hwsu_chk_mont_engine_ready()) != 0)
        return ret;

    ret = hwsu_get_data((void *)REG_RSA_A, resl, TYPE_HW_MONT);

    return  ret;
}

static int hwsu_mul_mod (MPI resl, MPI r2, MPI x, MPI y, MPI m, UINT32 bsize)
{
    if(((hwsu_mont (resl, x, y, m, bsize)) == 0) && ((hwsu_mont (resl, resl, r2, m, bsize)) == 0)) {
        return 0;
    } else {
        return -1;
    }
}

int rtk_rsa_get_r2(MPI mod, MPI *r2)
{
    int ret = 0;
    unsigned int one_data = 1;
    unsigned int base_data[129] = {0};
    MPI one = NULL;
    MPI base = NULL;
    base_data[0] = 0x1;

    if(mod == NULL)
        return -1;
    /*get r2 value from mod*/
    one = get_mpi_from_char_array((unsigned char *)(&one_data), sizeof(one_data), 1);
    base = get_mpi_from_char_array((unsigned char *)base_data, sizeof(base_data), 1);
    ret = mpi_powm(*r2, base, one, mod);

    mpi_free(one);
    mpi_free(base);
    return ret;
}

int rtk_rsa_do_hw_fun(MPI *out, MPI in, MPI mod, MPI r2, MPI key)
{
    int ret = -1;
    int pub_key_msb_bit = 0;
    unsigned int c_data = 1;

    if(out == NULL || in == NULL || mod == NULL
        || key == NULL || r2 == NULL)
        return ret;
    
    *out = get_mpi_from_char_array((unsigned char *)&c_data, sizeof(c_data), 1);
    if(*out == NULL)
        return ret;
    
    mutex_lock(&hw_rsa_mutex);
    for(pub_key_msb_bit = _check_msb_bit(key); pub_key_msb_bit >= 0; pub_key_msb_bit--) {
        if((hwsu_mul_mod( *out, r2, *out, *out, mod, 64)) != 0) {
            printk("HW RSA do mul_mod fail,line:%d!\n", __LINE__);
            goto err;
        }
        if(_is_bit_set(key, pub_key_msb_bit) == 1) {
            if((hwsu_mul_mod ( *out, r2, *out, in, mod, 64)) != 0) {
                printk("HW RSA do mul_mod fail,line:%d!\n", __LINE__);
                goto err;
            }
        }
    }
    ret = 0;
err:  
    if(ret != 0) {
        mpi_free(*out);
        *out = NULL;
    }
    mutex_unlock(&hw_rsa_mutex);
    return ret;
}

int  rtk_rsa_core_init(void)
{
    unsigned int engine_status = GET_S_RSA_ST();
    unsigned int engine_sel = GET_S_RSA_SEL();
    unsigned long timeout = jiffies + HZ/10; /* timeout in 100ms */
    while((GET_S_RSA_ST() & (S_RSA_ENGINE_READY_MASK)) != S_RSA_ENGINE_READY){
        SET_S_RSA_SEL((engine_sel & ~(S_RSA_SEL_ENGINE_MASK)) | S_RSA_SEL_ENGINE);
        if(timeout <= jiffies) {
            SET_S_RSA_SEL(engine_status & ~(S_RSA_SEL_ENGINE_MASK));
            printk("[%s]:RSA engine is not ready!\n", __FUNCTION__);
            return -1;
        }
    }
    return 0;
}
int rtk_rsa_core_exit(void)
{
    return 0;
}
