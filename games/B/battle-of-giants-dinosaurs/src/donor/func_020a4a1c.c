/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CRICRW_Strncpy from https://github.com/Yotona/twewy libs/cri/src/cri_crw_std.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
extern char *func_020a50d8(char *dest, const char *src, size_t num);
char *func_020a4a1c(char *dst, int size, const char *src, int n) {
    return func_020a50d8(dst, src, n);
}
