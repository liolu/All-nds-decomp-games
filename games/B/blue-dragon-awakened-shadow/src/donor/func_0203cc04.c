/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* make_dn from https://github.com/Project-Holon/aletheia src/game/ov009/ssl.c (license: none (MIT = tooling only)), reused by
 * tools/donor_match.py */
extern void func_0203cc04(char *d, char *s, int len);
void func_0203cc04(char *d, char *s, int len) {
    char *d0;

    d0 = d;
    if (*d != 0) {
        do {
            d++;
        } while (*d != 0);
        if (d - d0 >= 255) {
            return;
        }
        *d++ = ',';
        *d++ = ' ';
    }
    while (len-- != 0 && d - d0 < 255) {
        *d++ = *s++;
    }
    *d = 0;
}
