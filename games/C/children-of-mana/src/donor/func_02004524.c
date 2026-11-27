/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02112848 from projets/resident-evil-deadly-silence/src/donor/func_02112848.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern int data_02111074;
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern int func_02003f48(void *, int, int);
extern unsigned long func_020045c0(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg,
                                   int *chars_scanned, int *negative, int *overflow);
extern unsigned long func_020045c0(int base, int max_width, int (*ReadProc)(void *, int, int), void *ReadProcArg,
                                   int *chars_scanned, int *negative, int *overflow);
unsigned long func_02004524(const char *restrict str, char **restrict end, int base) {
    unsigned long value;
    int count, negative, overflow;

    __InStrCtrl isc;
    isc.NextChar         = (char *) str;
    isc.NullCharDetected = 0;

    value = func_020045c0(base, 0x7fffffff, &func_02003f48, (void *) &isc, &count, &negative, &overflow);

    if (end) {
        *end = (char *) str + count;
    }

    if (overflow) {
        value         = ~0;
        data_02111074 = 34;
    } else if (negative) {
        value = -value;
    }

    return (value);
}
