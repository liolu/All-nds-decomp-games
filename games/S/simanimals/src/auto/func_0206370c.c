/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206370c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_0206370c.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02064a3c(void);
extern void func_02064a50(int state);
extern void func_0206329c(void *queue);
extern void func_020632ec(void *queue);
extern long long func_02074520(int a, int b);
int func_0206370c(char *q, void **out, int flags) {
    int enabled = func_02064a3c();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_02064a50(enabled);
            return 0;
        }
        func_0206329c(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_02074520(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_020632ec(q);
    func_02064a50(enabled);
    return 1;
}
