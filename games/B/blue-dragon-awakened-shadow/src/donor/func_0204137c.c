/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_montmult from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef unsigned long size_t;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
extern void *memmove(void *dest, const void *src, size_t n);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_0204137c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, int rdigits, unsigned short *n,
                          unsigned short *np, unsigned short *m, unsigned short *m2);
extern void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int BigInti_Compare(unsigned short *a, unsigned short *b, int n);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern void func_02040d3c(unsigned short *c, unsigned short *a, int digits);
void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_02040a9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
int BigInti_Compare(unsigned short *a, unsigned short *b, int n);
void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
void func_02040d3c(unsigned short *c, unsigned short *a, int digits);
void func_0204137c(unsigned short *c, unsigned short *a, unsigned short *b, int digits, int rdigits, unsigned short *n,
                   unsigned short *np, unsigned short *m, unsigned short *m2) {
    MI_CpuCopy8(c, a, digits * 2);
    if (b == (unsigned short *) 1) {
        func_02040d3c(c, a, digits);
    } else if (b != 0) {
        BigInt_Mul(c, a, b, digits);
    }
    BigInt_Mul(m, c, np, rdigits);
    MI_CpuFill8(m + rdigits, 0, (digits - rdigits) * 2);
    BigInt_Mul(m2, m, n, digits);
    func_0204095c(c, c, m2, digits);
    memmove(c, c + rdigits, (digits - rdigits) * 2);
    MI_CpuFill8(c + digits - rdigits, 0, rdigits * 2);
    switch (BigInti_Compare(c, n, digits)) {
        case 0:
            MI_CpuFill8(c, 0, digits * 2);
            break;
        case 1:
            func_02040a9c(c, c, n, digits);
            break;
    }
}
