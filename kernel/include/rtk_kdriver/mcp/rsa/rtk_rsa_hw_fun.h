#ifndef __RTK_RSA_HW_FUN_H__
#define __RTK_RSA_HW_FUN_H__

#include <linux/mpi.h>
#define TYPE_HW_MONT    0
#define TYPE_HW_IMONT   1

#define REG_RSA_X       0xB806E000
#define REG_RSA_Y       0xB806E100
#define REG_RSA_M       0xB806E200
#define REG_RSA_A       0xB806E300
#define REG_RSA_CTRL    0xB806E400
#define REG_RSA_CTRL1   0xB806E410

int rtk_rsa_get_r2(MPI mod, MPI *r2);
int rtk_rsa_do_hw_fun(MPI *out, MPI in, MPI mod, MPI r2, MPI key);
int rtk_rsa_core_init(void);
int rtk_rsa_core_exit(void);

#endif
