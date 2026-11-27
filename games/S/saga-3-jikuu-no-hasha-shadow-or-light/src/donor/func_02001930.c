/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* memmove from https://github.com/zeldaret/st libs/c/src/mem.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long size_t;
void *func_02001930(void *dst, const void *src, size_t len) {
    unsigned char *csrc;
    unsigned char *cdst;

    int reverse = (unsigned int) src < (unsigned int) dst;

    if (!reverse) {
        for (csrc = (const char *) src, cdst = (char *) dst, len++; --len;) {
            *cdst++ = *csrc++;
        }
    } else {
        for (csrc = (const char *) src + len, cdst = (char *) dst + len, len++; --len;) {
            *--cdst = *--csrc;
        }
    }

    return dst;
}
