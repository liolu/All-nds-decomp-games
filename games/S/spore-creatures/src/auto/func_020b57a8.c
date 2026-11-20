/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b57a8 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020b57a8.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_020b6bd0(void);
extern void func_020b6be4(int state);
extern void func_020b51e0(void *queue);
extern void func_020b5230(void *queue);
extern long long func_020cd970(int a, int b);
int func_020b57a8(char *q, void **out, int flags) {
    int enabled = func_020b6bd0();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_020b6be4(enabled);
            return 0;
        }
        func_020b51e0(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_020cd970(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_020b5230(q);
    func_020b6be4(enabled);
    return 1;
}
