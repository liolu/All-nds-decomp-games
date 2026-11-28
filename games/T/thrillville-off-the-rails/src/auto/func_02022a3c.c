/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_ReceiveMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_ReceiveMessage.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02024624(void);
extern void func_02024638(int state);
extern void func_02022140(void *queue);
extern void func_020220c0(void *queue);
extern long long func_0208f2c0(int a, int b);
int func_02022a3c(char *q, void **out, int flags) {
    int enabled = func_02024624();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_02024638(enabled);
            return 0;
        }
        func_02022140(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_0208f2c0(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_020220c0(q);
    func_02024638(enabled);
    return 1;
}
