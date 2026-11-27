/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d23b0 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020d23b0.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(int state);
extern void func_020d1e7c(void *queue);
extern void func_020d1ecc(void *queue);
extern long long _s32_div_f(int a, int b);
int func_020d23b0(char *q, void *msg, int flags) {
    int enabled = _Z20DisableIRQInterruptsv();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            _Z20SetIRQInterruptStatei(enabled);
            return 0;
        }
        func_020d1e7c(q);
    }
    (*(void ***) (q + 0x10))[(int) (_s32_div_f(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] = msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    func_020d1ecc(q + 8);
    _Z20SetIRQInterruptStatei(enabled);
    return 1;
}
