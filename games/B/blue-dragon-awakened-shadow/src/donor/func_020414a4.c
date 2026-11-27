/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_montpower from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void func_02041230(unsigned short *c, unsigned short *a, unsigned short *n, int digits, unsigned short *tmp_var);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040ebc(unsigned short *c, unsigned short *a, unsigned short *b, unsigned short *r, int digits,
                          unsigned short *work);
extern void func_0204137c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, int rdigits, unsigned short *n,
                          unsigned short *np, unsigned short *m, unsigned short *m2);
extern int BigInti_GetLength(const unsigned short *p, int n);
extern void BigInti_SubDigit(unsigned short *c, unsigned short *a, unsigned short _b, int digits);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void func_020414a4(unsigned short *c, unsigned short *m, unsigned short *e, int digits, unsigned short *n);
int BigInti_GetLength(const unsigned short *p, int n);
void BigInti_SubDigit(unsigned short *c, unsigned short *a, unsigned short _b, int digits);
void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_02040ebc(u16 *c, u16 *a, u16 *b, u16 *r, int digits, u16 *work);
extern void *(*data_0210ca30)(u32 size);
extern void (*CPSiFree)(void *ptr);
void func_02041230(unsigned short *c, unsigned short *a, unsigned short *n, int digits, unsigned short *tmp_var);
void func_0204137c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, int rdigits, unsigned short *n,
                   unsigned short *np, unsigned short *m, unsigned short *m2);
extern void *(*data_0210ca30)(unsigned long size);
extern void (*CPSiFree)(void *ptr);
void func_020414a4(unsigned short *c, unsigned short *m, unsigned short *e, int digits, unsigned short *n) {
    int rdigits;
    int i;
    unsigned short *tmp_var;
    unsigned short *ri;
    unsigned short *mr;
    unsigned short *mwork;
    unsigned short *mwork2;
    unsigned short *awork;
    unsigned short *divwork;

    tmp_var = (unsigned short *) data_0210ca30(digits * 22);
    if (tmp_var == 0) {
        return;
    }
    i = 0;
    MI_CpuFill8(tmp_var, 0, digits * 22);
    ri               = tmp_var + digits;
    mr               = ri + digits;
    mwork            = mr + digits;
    mwork2           = mwork + digits;
    awork            = mwork2 + digits;
    divwork          = awork + digits;
    rdigits          = BigInti_GetLength(n, digits);
    tmp_var[rdigits] = 1;
    func_02041230(ri, tmp_var, n, digits, mr);
    BigInt_Mul(mwork, tmp_var, ri, digits);
    BigInti_SubDigit(ri, mwork, 1, digits);
    func_02040ebc(ri, ri, n, 0, digits, divwork);
    BigInt_Mul(mr, m, tmp_var, digits);
    func_02040ebc(0, mr, n, mr, digits, divwork);
    func_02040ebc(0, tmp_var, n, c, digits, divwork);
    for (i = 0; (unsigned) i < (unsigned) (rdigits * 16); i++) {
        func_0204137c(c, awork, (unsigned short *) 1, digits, rdigits, n, ri, mwork, mwork2);
        if (e[rdigits - (i >> 4) - 1] & (0x8000u >> (i & 15))) {
            func_0204137c(c, awork, mr, digits, rdigits, n, ri, mwork, mwork2);
        }
    }
    func_0204137c(c, awork, 0, digits, rdigits, n, ri, mwork, mwork2);
    CPSiFree(tmp_var);
}
