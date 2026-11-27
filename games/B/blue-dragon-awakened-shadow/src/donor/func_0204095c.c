/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_add from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void MI_CpuFill8(void *dest, u8 data, u32 size);
extern int BigInti_GetLength(const unsigned short *p, int n);
extern void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
int BigInti_GetLength(const unsigned short *p, int n);
void func_0204095c(unsigned short *c, unsigned short *a, unsigned short *b, int digits) {
    int digits_b;
    int digits_a;
    int i;
    int carry;
    unsigned long tmp;

    digits_a = BigInti_GetLength(a, digits);
    digits_b = BigInti_GetLength(b, digits);
    if (digits_a < digits_b) {
        digits_a = digits_b;
    }
    if (digits_a != digits) {
        digits_a++;
    }
    carry = 0;
    for (i = 0; i < digits_a; i++) {
        tmp   = a[i] + b[i] + carry;
        c[i]  = (unsigned short) tmp;
        carry = tmp >> 16;
    }
    if (c != a && c != b) {
        MI_CpuFill8(c + i, 0, (digits - i) * 2);
    }
}
