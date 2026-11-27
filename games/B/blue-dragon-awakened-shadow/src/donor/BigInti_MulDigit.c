/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_mult_small from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern int BigInti_GetLength(const unsigned short *p, int n);
extern void BigInti_MulDigit(unsigned short *c, unsigned short *a, unsigned short b, int digits);
int BigInti_GetLength(const unsigned short *p, int n);
void BigInti_MulDigit(unsigned short *c, unsigned short *a, unsigned short b, int digits) {
    unsigned long tmp;
    unsigned long carry;
    int digits_a;
    int i;

    digits_a = BigInti_GetLength(a, digits);
    carry    = 0;
    for (i = 0; i < digits_a; i++) {
        tmp   = b * a[i] + carry;
        c[i]  = (unsigned short) tmp;
        carry = tmp >> 16;
    }
    if (i < digits) {
        c[i] = (unsigned short) carry;
        i++;
    }
    MI_CpuFill8(&c[i], 0, (digits - i) * 2);
}
