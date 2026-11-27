/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_add_part from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern void BigInti_AddDigitFrom(unsigned short *a, unsigned long b, int i, int digits);
void BigInti_AddDigitFrom(unsigned short *a, unsigned long b, int i, int digits) {
    unsigned long tmp;

    while (b != 0 && i < digits) {
        tmp  = a[i] + b;
        a[i] = (unsigned short) tmp;
        i++;
        b = tmp >> 16;
    }
}
