/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02014a3c from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/calls/func_02014a3c.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern unsigned long func_02014654(int base, int max, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                                   int *negative, int *overflow);
extern int func_0201407c(void *isc, int ch, int action);
extern int data_020d4cc0;
long func_02014a3c(const char *str, char **end, int base) {
    unsigned long value;
    int count, negative, overflow;
    __InStrCtrl isc;

    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = func_02014654(base, 0x7fffffff, func_0201407c, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow || (!negative && value > 0x7fffffff) || (negative && value > 0x80000000)) {
        value         = (negative ? 0x80000000 : 0x7fffffff);
        data_020d4cc0 = 0x22;
    } else if (negative) {
        value = -value;
    }

    return (long) value;
}
