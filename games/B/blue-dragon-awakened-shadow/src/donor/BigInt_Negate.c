/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_negate from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern void BigInti_AddDigit(unsigned short *c, unsigned short *a, unsigned short _b, int digits);
extern void BigInt_Negate(unsigned short *a, int digits);
void BigInti_AddDigit(unsigned short *c, unsigned short *a, unsigned short _b, int digits);
void BigInt_Negate(unsigned short *a, int digits) {
    int i;

    for (i = 0; i < digits; i++) {
        a[i] = ~a[i];
    }
    BigInti_AddDigit(a, a, 1, digits);
}
