/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_sqr from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern int BigInti_GetLength(const unsigned short *p, int n);
extern void BigInti_AddDigitFrom(unsigned short *a, unsigned long b, int i, int digits);
extern void func_02040d3c(unsigned short *c, unsigned short *a, int digits);
int BigInti_GetLength(const unsigned short *p, int n);
void BigInti_AddDigitFrom(unsigned short *a, unsigned long b, int i, int digits);
void func_02040d3c(unsigned short *c, unsigned short *a, int digits) {
    int i;
    int j;
    int digits_a;
    unsigned long tmp;

    digits_a = BigInti_GetLength(a, digits);
    if (digits > digits_a * 2) {
        MI_CpuFill8(c + digits_a * 2, 0, (digits - digits_a * 2) * 2);
    }
    for (i = 0; i < digits_a; i++) {
        j = i * 2;
        if (j >= digits) {
            break;
        }
        tmp  = a[i] * a[i];
        c[j] = (unsigned short) tmp;
        if (j == digits - 1) {
            break;
        }
        c[j + 1] = (unsigned short) (tmp >> 16);
    }
    for (i = 0; i < digits_a; i++) {
        for (j = i + 1; j < digits_a && i + j < digits; j++) {
            tmp = a[j] * a[i];
            if (tmp <= 0x7FFF8000) {
                BigInti_AddDigitFrom(c, tmp * 2, i + j, digits);
            } else {
                BigInti_AddDigitFrom(c, tmp, i + j, digits);
                BigInti_AddDigitFrom(c, tmp, i + j, digits);
            }
        }
    }
}
