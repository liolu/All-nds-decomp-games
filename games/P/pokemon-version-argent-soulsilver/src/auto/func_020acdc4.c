/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_mult_small from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern void func_020d4994(void *dest, u8 data, u32 size);
extern int func_020aca04(const unsigned short *p, int n);
extern void func_020acdc4(unsigned short *c, unsigned short *a, unsigned short b, int digits);
int func_020aca04(const unsigned short *p, int n);
void func_020acdc4(unsigned short *c, unsigned short *a, unsigned short b, int digits) {
    unsigned long tmp;
    unsigned long carry;
    int digits_a;
    int i;

    digits_a = func_020aca04(a, digits);
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
    func_020d4994(&c[i], 0, (digits - i) * 2);
}
