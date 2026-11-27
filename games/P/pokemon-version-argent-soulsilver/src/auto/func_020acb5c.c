/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_negate from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern void func_020acaf8(unsigned short *c, unsigned short *a, unsigned short _b, int digits);
extern void func_020acb5c(unsigned short *a, int digits);
void func_020acaf8(unsigned short *c, unsigned short *a, unsigned short _b, int digits);
void func_020acb5c(unsigned short *a, int digits) {
    int i;

    for (i = 0; i < digits; i++) {
        a[i] = ~a[i];
    }
    func_020acaf8(a, a, 1, digits);
}
