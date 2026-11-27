/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StrNCaseCmp from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/calls/StrNCaseCmp.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern const unsigned char __lower_map[];
static inline int FoldCase(int c) {
    if (c < 0 || c >= 0x80) {
        return c;
    }
    return __lower_map[c];
}
int StrNCaseCmp(const signed char *a, const signed char *b, int n) {
    int i;

    for (i = 0; i < n; i++) {
        signed char ca = FoldCase(*a++);
        signed char cb = FoldCase(*b++);

        if (ca < cb) {
            return -1;
        }
        if (ca > cb) {
            return 1;
        }
        if (ca == 0) {
            return 0;
        }
    }
    return 0;
}
