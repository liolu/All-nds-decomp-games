/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009850 from projets/code-lyoko/src/donor/func_02009850.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern int func_0201e3b0(void);
extern void func_0201e3c4(int state);
extern void func_0201ca9c(void *queue);
extern void func_0201ca1c(void *queue);
extern long long func_020256cc(int a, int b);
int func_0201d1a8(char *q, void *msg, int flags) {
    int enabled = func_0201e3b0();
    void **slots;
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_0201e3c4(enabled);
            return 0;
        }
        func_0201ca9c(q);
    }
    *(int *) (q + 0x18) = (int) (func_020256cc(*(int *) (q + 0x18) + *(int *) (q + 0x14) - 1, *(int *) (q + 0x14)) >> 32);
    slots               = *(void ***) (q + 0x10);
    slots[*(int *) (q + 0x18)] = msg;
    *(int *) (q + 0x1c)        = *(int *) (q + 0x1c) + 1;
    func_0201ca1c(q + 8);
    func_0201e3c4(enabled);
    return 1;
}
