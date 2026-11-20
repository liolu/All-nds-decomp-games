/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201cef4 from https://github.com/Yotona/twewy libs/c/src/func_0201cef4.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int data_02151400;
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern int func_0201b2c8(void *, int, int);
extern unsigned long func_0201cb0c(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg,
                                   int *chars_scanned, int *negative, int *overflow);
unsigned long func_0201cb0c(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                            int *negative, int *overflow);
unsigned long func_0201cef4(const char *restrict str, char **restrict end, int base) {
    unsigned long value;
    int count, negative, overflow;

    __InStrCtrl isc;
    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = func_0201cb0c(base, 0x7fffffff, &func_0201b2c8, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow) {
        value         = ~0;
        data_02151400 = 34;
    } else if (negative) {
        value = -value;
    }

    return (value);
}
