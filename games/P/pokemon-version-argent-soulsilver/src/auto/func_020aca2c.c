/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CPSi_big_sign from https://github.com/Project-Holon/aletheia src/game/ov009/biginteger.c (license: none (MIT = tooling
 * only)), reused by tools/donor_match.py */
extern int func_020aca04(const unsigned short *p, int n);
extern int func_020aca2c(unsigned short *a, int digits);
int func_020aca04(const unsigned short *p, int n);
int func_020aca2c(unsigned short *a, int digits) {
    if (a[digits - 1] & 0x8000) {
        return -1;
    }
    return func_020aca04(a, digits) != 0;
}
