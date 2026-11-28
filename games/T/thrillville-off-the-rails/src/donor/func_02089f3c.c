/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* STD_WStrCat from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/auto/STD_WStrCat.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
unsigned short *func_02089f3c(unsigned short *dst, const unsigned short *src) {
    unsigned short *p = dst;
    while (*p++ != 0) {
        ;
    }
    p--;
    while ((*p++ = *src++) != 0) {
        ;
    }
    return dst;
}
