/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_sign from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern int BigInti_GetLength(const unsigned short *p, int n);
extern int BigInt_GetSign(unsigned short *a, int digits);
int BigInti_GetLength(const unsigned short *p, int n);
int BigInt_GetSign(unsigned short *a, int digits) {
    if (a[digits - 1] & 0x8000) {
        return -1;
    }
    return BigInti_GetLength(a, digits) != 0;
}
