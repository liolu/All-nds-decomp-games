/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_mult from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
extern int BigInti_GetLength(const unsigned short *p, int n);
extern void BigInti_AddDigitFrom(unsigned short *a, unsigned long b, int i, int digits);
extern void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
int BigInti_GetLength(const unsigned short *p, int n);
void BigInti_AddDigitFrom(unsigned short *a, unsigned long b, int i, int digits);
void BigInt_Mul(unsigned short *c, unsigned short *a, unsigned short *b, int digits) {
    int digits_b;
    int digits_a;
    int i;
    int j;

    MI_CpuFill8(c, 0, digits * 2);
    digits_a = BigInti_GetLength(a, digits);
    digits_b = BigInti_GetLength(b, digits);
    for (i = 0; i < digits_b; i++) {
        for (j = 0; j < digits_a && j < digits - i; j++) {
            BigInti_AddDigitFrom(c, a[j] * b[i], i + j, digits);
        }
    }
}
