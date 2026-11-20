/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_ReceiveMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_ReceiveMessage.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_02067278(void);
extern void func_0206728c(int state);
extern void func_02065738(void *queue);
extern void func_020656b8(void *queue);
extern long long func_0205ee0c(int a, int b);
int func_02065ef8(char *q, void **out, int flags) {
    int enabled = func_02067278();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_0206728c(enabled);
            return 0;
        }
        func_02065738(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_0205ee0c(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_020656b8(q);
    func_0206728c(enabled);
    return 1;
}
