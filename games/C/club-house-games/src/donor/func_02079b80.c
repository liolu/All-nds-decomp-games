/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* StrCopy16 from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/auto/StrCopy16.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
unsigned short *func_02079b80(unsigned short *dst, unsigned short *src) {
    unsigned short *p = dst, *q;
    unsigned short v;
    do {
        q  = p++;
        *q = *src++;
        v  = *(volatile unsigned short *) q;
    } while (v != 0);
    return dst;
}
