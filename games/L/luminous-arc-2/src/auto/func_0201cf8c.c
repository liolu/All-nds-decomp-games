/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201cf8c from https://github.com/Yokimitsuro/khdays-decomp libs/msl/c/calls/func_0201cf8c.c (license: CC0-1.0), reused
 * by tools/donor_match.py */
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern unsigned long func_0201cb0c(int base, int max, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                                   int *negative, int *overflow);
extern int func_0201b2c8(void *isc, int ch, int action);
extern int data_02151400;
long func_0201cf8c(const char *str, char **end, int base) {
    unsigned long value;
    int count, negative, overflow;
    __InStrCtrl isc;

    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = func_0201cb0c(base, 0x7fffffff, func_0201b2c8, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow || (!negative && value > 0x7fffffff) || (negative && value > 0x80000000)) {
        value         = (negative ? 0x80000000 : 0x7fffffff);
        data_02151400 = 0x22;
    } else if (negative) {
        value = -value;
    }

    return (long) value;
}
