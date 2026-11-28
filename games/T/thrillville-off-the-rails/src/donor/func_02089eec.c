/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StrNCopy16 from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/auto/StrNCopy16.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
unsigned short *func_02089eec(unsigned short *dst, unsigned short *src, int n) {
    unsigned short *p = dst;
    if (n == 0) {
        return dst;
    }
    do {
        unsigned short *q = p;
        *p++              = *src++;
        if (*(volatile unsigned short *) q == 0) {
            n--;
            if (n != 0) {
                do {
                    *p++ = 0;
                    n--;
                } while (n != 0);
            }
            return dst;
        }
        n--;
    } while (n != 0);
    return dst;
}
