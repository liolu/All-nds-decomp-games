/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b584c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020b584c.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020b6bd0(void);
extern void func_020b6be4(int state);
extern void func_020b51e0(void *queue);
extern void func_020b5230(void *queue);
extern long long func_020cd970(int a, int b);
int func_020b584c(char *q, void *msg, int flags) {
    int enabled = func_020b6bd0();
    void **slots;
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_020b6be4(enabled);
            return 0;
        }
        func_020b51e0(q);
    }
    *(int *) (q + 0x18) = (int) (func_020cd970(*(int *) (q + 0x18) + *(int *) (q + 0x14) - 1, *(int *) (q + 0x14)) >> 32);
    slots               = *(void ***) (q + 0x10);
    slots[*(int *) (q + 0x18)] = msg;
    *(int *) (q + 0x1c)        = *(int *) (q + 0x1c) + 1;
    func_020b5230(q + 8);
    func_020b6be4(enabled);
    return 1;
}
