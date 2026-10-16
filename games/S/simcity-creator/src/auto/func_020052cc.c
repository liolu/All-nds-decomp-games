/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020052cc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020052cc.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020066e0(void);
extern void func_020066f4(int state);
extern void func_02004dd0(void *queue);
extern void func_02004e20(void *queue);
extern long long func_0201a018(int a, int b);
int func_020052cc(char *q, void *msg, int flags) {
    int enabled = func_020066e0();
    void **slots;
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_020066f4(enabled);
            return 0;
        }
        func_02004dd0(q);
    }
    *(int *) (q + 0x18) = (int) (func_0201a018(*(int *) (q + 0x18) + *(int *) (q + 0x14) - 1, *(int *) (q + 0x14)) >> 32);
    slots               = *(void ***) (q + 0x10);
    slots[*(int *) (q + 0x18)] = msg;
    *(int *) (q + 0x1c)        = *(int *) (q + 0x1c) + 1;
    func_02004e20(q + 8);
    func_020066f4(enabled);
    return 1;
}
