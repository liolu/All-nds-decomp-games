/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020157f0 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020157f0.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0201732c(void);
extern void func_02017340(int state);
extern void func_0201527c(void *queue);
extern void func_020152cc(void *queue);
extern long long func_02028f28(int a, int b);
int func_020157f0(char *q, void *msg, int flags) {
    int enabled = func_0201732c();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_02017340(enabled);
            return 0;
        }
        func_0201527c(q);
    }
    (*(void ***) (q + 0x10))[(int) (func_02028f28(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] =
        msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    func_020152cc(q + 8);
    func_02017340(enabled);
    return 1;
}
