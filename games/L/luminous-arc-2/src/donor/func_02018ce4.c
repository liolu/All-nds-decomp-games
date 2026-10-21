/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* StrNCaseCmp from projets/blue-dragon-awakened-shadow/src/donor/StrNCaseCmp.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern const unsigned char data_020dc97c[];
static inline int FoldCase(int c) {
    if (c < 0 || c >= 0x80) {
        return c;
    }
    return data_020dc97c[c];
}
int func_02018ce4(const signed char *a, const signed char *b, int n) {
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
