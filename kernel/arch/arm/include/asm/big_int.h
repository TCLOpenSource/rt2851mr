#ifndef __BIG_INT_H__
#define __BIG_INT_H__

#define BI_MAXLEN 129
#define DEC 10
#define HEX 16
#define M4KMDMAGIC "kmdm4A0"
typedef struct big_int {
    int m_nSign;
    int m_nLength;
    unsigned int m_ulValue[BI_MAXLEN];
} BI;

BI * rsa_init(void);
BI * move(BI *A);
BI * move_p(unsigned long long b);
int Cmp(BI *A, BI *B);
int isZero(BI *A);

BI * Add(BI *A, BI *B);
BI * Sub(BI *A, BI *B);
BI * Mul(BI *A, BI *B);
BI * Div(BI *A, BI *B);
BI * Mod(BI *A, BI *B);

BI * Add_p(BI *A, int b);
BI * Sub_p(BI *A, int b);
BI * Mul_p(BI *A, int b);
BI * Div_p(BI *A, int b);

BI * Exp_Mod(BI *base, BI *exp, BI *mod);
BI * InPutFromAddr(unsigned char *addr, int len);
void OutPutToAddr(BI *A, unsigned char *addr, char reverse);

void * my_malloc( unsigned int NBYTES );
void my_freeAll( void );
unsigned int do_sw_RSA( const unsigned int signature_addr,                     const unsigned int rsa_key_addr,                     const unsigned int output_addr );
#endif // #ifndef __BIG_INT_H__
