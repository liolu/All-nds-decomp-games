/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c7300 from https://github.com/Yotona/twewy libs/c/src/func_020c7300.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int data_020f4e80;
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern int func_020c51ec(void *, int, int);
extern unsigned long func_020c6aac(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg,
                                   int *chars_scanned, int *negative, int *overflow);
unsigned long func_020c6aac(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg, int *chars_scanned,
                            int *negative, int *overflow);
unsigned long func_020c7300(const char *restrict str, char **restrict end, int base) {
    unsigned long value;
    int count, negative, overflow;

    __InStrCtrl isc;
    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = func_020c6aac(base, 0x7fffffff, &func_020c51ec, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow) {
        value         = ~0;
        data_020f4e80 = 34;
    } else if (negative) {
        value = -value;
    }

    return (value);
}
