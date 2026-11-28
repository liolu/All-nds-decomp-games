/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_SendMessage from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_SendMessage.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_02024624(void);
extern void func_02024638(int state);
extern void func_02022140(void *queue);
extern void func_020220c0(void *queue);
extern long long func_0208f2c0(int a, int b);
int func_02022ae8(char *q, void *msg, int flags) {
    int enabled = func_02024624();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_02024638(enabled);
            return 0;
        }
        func_02022140(q);
    }
    (*(void ***) (q + 0x10))[(int) (func_0208f2c0(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] =
        msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    func_020220c0(q + 8);
    func_02024638(enabled);
    return 1;
}
