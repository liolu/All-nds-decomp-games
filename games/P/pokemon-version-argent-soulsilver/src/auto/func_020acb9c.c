/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_sub from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern int func_020aca04(const unsigned short *p, int n);
extern void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits);
int func_020aca04(const unsigned short *p, int n);
void func_020acb9c(unsigned short *c, unsigned short *a, unsigned short *b, int digits) {
    int digits_b;
    int digits_a;
    int i;
    int borrow;
    unsigned long tmp;

    digits_a = func_020aca04(a, digits);
    digits_b = func_020aca04(b, digits);
    if (digits_a < digits_b) {
        digits_a = digits_b;
    }
    if (digits_a != digits) {
        digits_a++;
    }
    borrow = 0;
    for (i = 0; i < digits_a || (i < digits && borrow != 0); i++) {
        tmp    = a[i] - b[i] + borrow;
        c[i]   = (unsigned short) tmp;
        borrow = (int) tmp >> 16;
    }
    if (c != a && c != b) {
        func_020d4994(c + i, 0, (digits - i) * 2);
    }
}
