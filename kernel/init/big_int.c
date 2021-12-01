#include <linux/types.h>
#include <linux/string.h>
#include <asm/pre_div64.h>
#include <asm/big_int.h>
#include <linux/pageremap.h>

BI * rsa_init(void)
{
    BI *p;

    p = (BI *)my_malloc(sizeof(BI));
    if (p == NULL) {
        return NULL;
    }

    memset(p, 0, sizeof(BI));
    p->m_nSign=1;
    p->m_nLength=1;

    return p;
}

BI * move(BI *A)
{
    BI *p;

    p = rsa_init();
    if (p == NULL) {
        return NULL;
    }

    memcpy(p, A, sizeof(BI));
    return p;
}

BI * move_p(unsigned long long b)
{
    BI *p;

    p = rsa_init();
    if (p == NULL) {
        return NULL;
    }

    if(b > 0xffffffff)
    {
        p->m_nLength=2;
        p->m_ulValue[0]=(unsigned int)b;
        p->m_ulValue[1]=(unsigned int)(b>>32);
    }
    else
    {
        p->m_nLength=1;
        p->m_ulValue[0]=(unsigned int)b;
    }

    return p;
}

/*
 *  0: A = B
 *  1: A > B
 * -1: A < B
 *
 */
int Cmp(BI *A, BI *B)
{
    int i;

    if(A->m_nLength > B->m_nLength)
        return 1;
    if(A->m_nLength < B->m_nLength)
        return -1;
    for(i=A->m_nLength-1;i>=0;i--)
    {
        if(A->m_ulValue[i] > B->m_ulValue[i])
            return 1;
        if(A->m_ulValue[i] < B->m_ulValue[i])
            return -1;
    }
    return 0;
}

#if 0 // cklai@mark unused code
int isZero(BI *A)
{
    if ((A->m_nLength == 1) && (A->m_ulValue[0] == 0))
        return 1;
    else
        return 0;
}
#endif

BI * Add(BI *A, BI *B)
{
    int i;
    unsigned int carry;
    unsigned long long sum;
    BI *p;

    if(A->m_nSign == B->m_nSign)
    {
        p = A;
        carry = 0;
        sum = 0;
        if(p->m_nLength < B->m_nLength)
            p->m_nLength = B->m_nLength;

        for(i=0;i<p->m_nLength;i++)
        {
            sum = B->m_ulValue[i];
            sum = sum + p->m_ulValue[i] + carry;
            p->m_ulValue[i] = (unsigned int)sum;
            carry = (sum > 0xffffffff ? 1 : 0);
        }
        if(p->m_nLength < BI_MAXLEN)
        {
            p->m_ulValue[p->m_nLength] = carry;
            p->m_nLength += carry;
        }
        return p;
    }
    else{
        p = B;
        p->m_nSign = 1 - p->m_nSign;
        return Sub(A, p);
    }
}

BI * Add_p(BI *A, int b)
{
    int i;
    BI *p;
    unsigned long long sum;

    if((A->m_nSign*b)>=0)
    {
        p = A;
        sum=b+p->m_ulValue[0];
        p->m_ulValue[0]=(unsigned int)sum;
        if(sum>0xffffffff)
        {
            i = 1;
            while(p->m_ulValue[i]==0xffffffff)
            {
                p->m_ulValue[i]=0;
                i++;
            }
            p->m_ulValue[i]++;
            if(i<BI_MAXLEN)
                p->m_nLength=i+1;
        }
        return p;
    }
    else
        return Sub_p(A, -b);
}

BI * Sub(BI *A, BI *B)
{
    int i, cmp, len, carry;
    BI *p;
    unsigned long long num;
    unsigned int *s,*d;

    if(A->m_nSign == B->m_nSign)
    {
        p = A;
        cmp = Cmp(p, B);
        if(cmp == 0)
        {
            memset(p, 0, sizeof(BI));   // reset BI value
            return p;
        }

        if(cmp > 0) // p > B
        {
            s = p->m_ulValue;
            d = B->m_ulValue;
            len = p->m_nLength;
        }
        if(cmp < 0) // p < B
        {
            s = B->m_ulValue;
            d = p->m_ulValue;
            len = B->m_nLength;
            p->m_nSign = 1 - p->m_nSign;
        }

        carry = 0;
        for(i=0;i<len;i++)
        {
            if((s[i]-carry) >= d[i] && !(s[i] < carry))
            {
                p->m_ulValue[i] = s[i] - carry - d[i];
                carry = 0;
            }
            else    // borrow from upper digit
            {
                num = ((unsigned long long)0x1 << 32) + s[i];
                p->m_ulValue[i] = (unsigned int)(num - carry - d[i]);
                carry = 1;
            }
        }

        while(p->m_ulValue[len-1] == 0)
            len--;

        p->m_nLength = len;
        return p;
    }
    else {
        //p = move(B);
        p = B;
        p->m_nSign = 1 - p->m_nSign;
        return Add(A, p);
    }

    return p;
}

BI * Sub_p(BI *A, int b)
{
    int i;
    BI *p;
    unsigned long long num;

    if((A->m_nSign*b)>=0)
    {
        p = A;
        if(p->m_ulValue[0]>=(unsigned int)b)
        {
            p->m_ulValue[0] -= b;
            return p;
        }
        // A < b and A has only one block
        if(p->m_nLength==1)
        {
            p->m_ulValue[0] =b - p->m_ulValue[0];
            p->m_nSign = 1 - p->m_nSign;
            return p;
        }
        // A < b
        num = ((unsigned long long)0x1 << 32) + p->m_ulValue[0];
        p->m_ulValue[0] = (unsigned int)(num-b);
        i = 1;
        while(p->m_ulValue[i]==0)
        {
            p->m_ulValue[i]=0xffffffff;
            i++;
        }

        if(p->m_ulValue[i]==1)
            p->m_nLength--;

        p->m_ulValue[i]--;
        return p;
    }
    else
        return Add_p(A, -b);
}

BI * Mul(BI *A, BI *B)
{
    int i, j, k;
    BI *p, *q;
    unsigned long long mul;
    unsigned int carry;

    p = rsa_init();
    if (p == NULL) {
        return NULL;
    }

    q = rsa_init();
    if (q == NULL) {
        return NULL;
    }

    for(i=0;i<B->m_nLength;i++)
    {
        q->m_nLength = A->m_nLength;
        carry = 0;
        for(j=0;j<A->m_nLength;j++)
        {
            mul = A->m_ulValue[j];
            mul = mul * B->m_ulValue[i] + carry;
            q->m_ulValue[j] = (unsigned int)mul;
            carry = (unsigned int)(mul>>32);
        }
        if(carry && (q->m_nLength<BI_MAXLEN))
        {
            q->m_nLength++;
            q->m_ulValue[q->m_nLength-1] = carry;
        }

        if(q->m_nLength < BI_MAXLEN - i)
        {
            q->m_nLength += i;
            for(k=q->m_nLength-1;k>=i;k--)
                q->m_ulValue[k]=q->m_ulValue[k-i];
            for(k=0;k<i;k++)
                q->m_ulValue[k]=0;
        }
        p = Add(p, q);
    }

    p->m_nSign = ((A->m_nSign + B->m_nSign == 1) ? 0 : 1);

    return p;
}

BI * Mul_p(BI *A, int b)
{
    int i;
    unsigned int carry;
    BI *p;
    unsigned long long mul;

    p = A;
    carry = 0;
    for(i=0;i<p->m_nLength;i++)
    {
        mul = p->m_ulValue[i];
        mul = mul * b + carry;
        p->m_ulValue[i] = (unsigned int)mul;
        carry = (unsigned int)((mul-p->m_ulValue[i])>>32);
    }

    if(carry&&(p->m_nLength<BI_MAXLEN))
    {
        p->m_nLength++;
        p->m_ulValue[p->m_nLength-1] = carry;
    }

    if(b<0)
        p->m_nSign = 1 - p->m_nSign;

    return p;
}

BI * Div_p(BI *A, int b)
{
    int i;
    unsigned int carry;
    BI *p;
    unsigned long long div, mul;

    p = A;
    if(p->m_nLength==1)
    {
        p->m_ulValue[0] = p-> m_ulValue[0] / b;
        return p;
    }

    carry = 0;
    for(i=p->m_nLength-1;i>=0;i--)
    {
        div = carry;
        div = (div<<32) + p->m_ulValue[i];
        p->m_ulValue[i] = (unsigned int) lldiv(div, b);
        mul = (lldiv(div, b)) * b;
        carry = (unsigned int)(div - mul);
    }

    if(p->m_ulValue[p->m_nLength-1] == 0)
        p->m_nLength--;
    if(b < 0)
        p->m_nSign = 1 - p->m_nSign;
    return p;
}

BI * Mod(BI *A, BI *B)
{
    int i, len;
//    unsigned int carry;
    BI *p, *q;
    unsigned long long num, div;

    p = A;

//    carry = 0;
    while(Cmp(p, B)>0)
    {
        // compare leading digit
        if(p->m_ulValue[p->m_nLength-1] > B->m_ulValue[B->m_nLength-1])
        {
            len = p->m_nLength - B->m_nLength;
            div = p->m_ulValue[p->m_nLength-1] / (B->m_ulValue[B->m_nLength-1] + 1);
        }
        else if(p->m_nLength > B->m_nLength)
        {
            len = p->m_nLength - B->m_nLength - 1;
            num = p->m_ulValue[p->m_nLength-1];
            num = (num<<32) + p->m_ulValue[p->m_nLength-2];

            if(B->m_ulValue[B->m_nLength-1]==0xffffffff)
                div = (num>>32);
            else
                div = lldiv(num, (B->m_ulValue[B->m_nLength-1] + 1));
        }
        else
        {
            p = Sub(p, B);
            break;
        }

        q = move_p(div);
        if (q == NULL) {
            return NULL;
        }

        q = Mul(q, B);
        if (q == NULL) {
            return NULL;
        }

        q->m_nLength += len;

        for(i=q->m_nLength-1;i>=len;i--) {
            q->m_ulValue[i]=q->m_ulValue[i-len];
        }
        for(i=0;i<len;i++)
            q->m_ulValue[i]=0;

        p = Sub(p, q);
    }

    if(Cmp(p, B)==0) {
        memset(p, 0, sizeof(BI));   // reset BI value
    }

    return p;
}

BI * Exp_Mod(BI *base, BI *exp, BI *mod)
{
    BI *x, *y, *z;

    x = move_p(1);
    if(x == NULL) {
        return NULL;
    }

    y = move(base);
    if(y == NULL) {
        return NULL;
    }

    z = move(exp);
    if(z == NULL) {
        return NULL;
    }

    while ((z->m_nLength != 1) || (z->m_ulValue[0])) {

        if (z->m_ulValue[0] & 1) {
            z = Sub_p(z, 1);
            if(z == NULL) {
                return NULL;
            }
            x = Mul(x, y);
            if(x == NULL) {
                return NULL;
            }
            x = Mod(x, mod);
            if(x == NULL) {
                return NULL;
            }
        }
        else {
            z = Div_p(z, 2);
            if(z == NULL) {
                return NULL;
            }
            y = Mul(y, y);
            if(y == NULL) {
                return NULL;
            }
            y = Mod(y, mod);
            if(y == NULL) {
                return NULL;
            }
        }
    }
    return x;
}

BI *InPutFromStr(char *str, const unsigned int system)
{
	int i, c=0, len;
	BI *p;

	p = rsa_init();
	if (p == NULL)
		return NULL;

	len = strlen(str);
	for (i=0; i<len; i++) {
		p = Mul_p(p, system);

		if (system == DEC)
			c=str[i]-48;
		else if (system == HEX) {
			if (str[i] >= 97)		// 'a' ~ 'f'
				c = (str[i] - 97) + 10;
			else if (str[i] >= 65)		// 'A' ~ 'F'
				c = (str[i] - 65) + 10;
			else				// '0' ~ '9'
				c = str[i] - 48;
		}
		Add_p(p, c);
	}

	return p;
}

BI * InPutFromAddr(unsigned char *addr, int len)
{
    int i, space, count;
    BI *p;

    p = rsa_init();
    if (p == NULL) {
        return NULL;
    }

    count = len / sizeof(unsigned int);
    space = len % sizeof(unsigned int);
    if (space) {
        count++;
    }

    if (count > BI_MAXLEN) {
        return NULL;        // overflow
    }
    p->m_nLength = count;

    i = 0;
    if (space) {
        // highest element may be not full
        p->m_ulValue[i] = (*(unsigned int *)addr) >> (sizeof(unsigned int) - space) * 8;
        addr += space;
        i--;
    }

    while (i < count) {
        p->m_ulValue[i] = *(unsigned int *)addr;
        addr += 4;
        i++;
    }

    return p;
}

void OutPutToAddr(BI *A, unsigned char *addr, char reverse)
{
    int i;

    if (reverse) {
        for (i = A->m_nLength - 1; i >= 0; i--) {
            *addr = (A->m_ulValue[i] >> 24) & 0xff;
            addr++;
            *addr = (A->m_ulValue[i] >> 16) & 0xff;
            addr++;
            *addr = (A->m_ulValue[i] >> 8) & 0xff;
            addr++;
            *addr = (A->m_ulValue[i] >> 0) & 0xff;
            addr++;
        }
    }
    else {
        for (i = 0; i < A->m_nLength; i++, addr+=4) {
            *(unsigned int *)addr = A->m_ulValue[i];
        }
    }
}

/******************
 * Add for HW RSA *
 ******************/ //Sean
void BI_setbit (BI *bi, int n)
{
	if (bi == NULL)
		return;

	//bi->m_nSign = 0;
	bi->m_nLength = (n >> 5) + 1;

	bi->m_ulValue[bi->m_nLength - 1] = 1 << ( n & 0x1F );

	return;
}

int BI_chkmsbbit (BI *bi)
{
	unsigned int check_bit;
	int i, j;

	if (bi == NULL)
		return -1;

	for ( i = bi->m_nLength - 1; i >= 0; i-- )
	{
		check_bit = 0x80000000;

		for ( j = 0; j < 32; j++ )
		{
			if ( ( bi->m_ulValue[i] & check_bit ) == check_bit )
			{
				return ( ( ( i + 1 ) << 5 ) - ( j + 1 ) );
			}

			check_bit >>= 1;
		}
	}

	return 0;
}

int BI_is_bit_set (BI *bi, int n)
{
	if (bi == NULL)
		return -1;

	if ( ( bi->m_ulValue[n >> 5] ) & ( 1 << (n & 0x1F) ) )
		return 1;
	else
		return 0;
}

/************************************************************************
 *  Public variables
 ************************************************************************/
static unsigned long alloc_count = 0;

/************************************************************************
 *  Static variables
 ************************************************************************/
static unsigned long alloc_current;

static unsigned long alloc_start = 0;
/************************************************************************
 *  Function body
 ************************************************************************/
void * my_malloc(unsigned int NBYTES)
{
    void *p;
    if ((alloc_count + NBYTES) > 0x2000000) {
	printk("ddr request overflow\n");
        return NULL;
    }

    if (alloc_count == 0) {
        alloc_current = (unsigned long)dvr_malloc_specific(0x2000000, GFP_DCU1);
	alloc_start = alloc_current;
    }

    p = (void *)(alloc_current);

    if (NBYTES & 0x3) {
        NBYTES = ((NBYTES >> 2) << 2) + 0x4;
    }

    alloc_current += NBYTES;
    alloc_count += NBYTES;
    return p;
}

void my_freeAll(void)
{
    if(alloc_start)
    {
    	dvr_free((void*)alloc_start);
        alloc_current = 0;
        alloc_start = 0;
    }
    alloc_count = 0;

}

unsigned int EMSA_PKCS1_GET_HASH256(unsigned int message)
{
	const char algo_id[19] = {
		0x30, 0x31, 0x30, 0x0d, 0x06, 0x09, 0x60, 0x86,
		0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x01, 0x05,
		0x00, 0x04, 0x20};
    unsigned char * ptr;
    unsigned int tmp;
    unsigned int i;

    ptr = (unsigned char *)message;
    if ((*ptr == 0) && (*(ptr+1) == 0x1)) {
        // skip padding
        // (padding format: 00 01 ff ff ff ... 00)
        ptr += 2;

        while (*ptr == 0xff) {
            ptr++;
        }

        if (*ptr == 0) {
            ptr++;
        }

        tmp = (unsigned int)ptr;

        // skip digest algorithm identifier
        for (i = 0; i < sizeof(algo_id); i++) {
            if (*ptr != algo_id[i]) {
                message = tmp;   // restore to previous postition
                return message;
            }
            ptr++;
        }
    }
    message = (unsigned int)ptr;
    return message;
}

unsigned int do_sw_RSA( const unsigned int signature_addr,
                     const unsigned int rsa_key_addr,
                     const unsigned int output_addr )
{
    BI *base, *exp, *mod, *res;
    unsigned int hash_addr;
    // necessary
    my_freeAll();
    base = InPutFromAddr((unsigned char *)signature_addr, 256);
    if(base == NULL) {
	printk("signature fail!!!!\n");
        my_freeAll();
        return 0;
    }
	mod = InPutFromAddr((unsigned char *)rsa_key_addr, 256);

	if(mod == NULL) {
	printk("key fail!!!!\n");
        my_freeAll();
        return 0;
    }

    // public exponent is always 65537
    exp = move_p(65537);
    if(exp == NULL) {
	printk("exp fail!!!!\n");
        my_freeAll();
        return 0;
    }
    
    res = Exp_Mod(base, exp, mod);
    if(res == NULL) {
	printk("rsa fail!!!!\n");
        my_freeAll();
        return 0;
    }

    OutPutToAddr(res, (unsigned char *)output_addr, 1);

    // bypass PKCS#1 v1.5 block format
    hash_addr = EMSA_PKCS1_GET_HASH256(output_addr);
    my_freeAll();

    return hash_addr;
}

