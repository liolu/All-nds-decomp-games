/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vsscanf from https://github.com/Yotona/twewy libs/c/src/scanf.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef char *va_list;
typedef struct {
    char *NextChar;
    int NullCharDetected;
} __InStrCtrl;
extern int func_020c51ec(void *, int, int);
extern int func_020c5270(const char *, const char *, va_list);
int func_020c4498(int (*ReadProc)(void *, int, int), void *ReadProcArg, const char *format_str, va_list arg, int is_secure);
int func_020c51ec(void *isc, int ch, int Action);
int func_020c5270(const char *restrict s, const char *restrict format, va_list arg) {
    __InStrCtrl isc;
    isc.NextChar = (char *) s;
    if ((s == 0) || (*isc.NextChar == '\0')) {
        return -1;
    }
    isc.NullCharDetected = 0;

    return func_020c4498(&func_020c51ec, (void *) &isc, format, arg, 0);
}
