/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strncat from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/string.c (license: none), reused by
 * tools/donor_match.py */
extern char *func_02088878(char *dest, const char *src, int num);
char *func_02088878(char *dest, const char *src, int n) {
    const char *p = src;
    char *q       = dest;

    while (*q++ != 0)
        ;
    q--;
    n++;

    while (--n != 0) {
        if ((*q++ = *p++) == 0) {
            q--;
            break;
        }
    }

    *q = 0;

    return dest;
}
