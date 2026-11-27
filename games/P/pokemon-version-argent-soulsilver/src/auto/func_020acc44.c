/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_sub_small from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern void func_020acc44(unsigned short *c, unsigned short *a, unsigned short _b, int digits);
void func_020acc44(unsigned short *c, unsigned short *a, unsigned short _b, int digits) {
    unsigned long b = _b;
    unsigned long tmp;
    int i;

    for (i = 0; i < digits; i++) {
        tmp  = a[i] - b;
        c[i] = (unsigned short) tmp;
        b    = (tmp >> 16) & 1;
        if (b == 0) {
            break;
        }
    }
    if (c != a) {
        i++;
        for (; i < digits; i++) {
            c[i] = a[i];
        }
    }
}
