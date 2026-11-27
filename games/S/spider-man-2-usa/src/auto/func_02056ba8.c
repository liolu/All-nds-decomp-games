/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02057f54 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_02057f54.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_02057af8(void);
extern struct Node58 *func_02056c70(void);
extern int func_020571c8(void *ctx);
extern void func_02057214(void *ctx);
struct CtxState {
    unsigned short m0;
    unsigned short m2;
    unsigned short m4;
    unsigned short m6;
    void *m8;
    int mc;
    void (*m10)(void *, void *);
};
extern struct CtxState data_021612e4;
extern void **data_021612dc;
extern void (*data_021612d8)(void *, void *);
void func_02056ba8(void) {
    void *r6;
    struct Node58 *r5;
    struct CtxState *s = &data_021612e4;
    if (s->m4 == 0) {
        if (func_02057af8() != 0x12) {
            goto cont;
        }
    }
    s->m0 = 1;
    return;
cont:
    r6 = data_021612dc[0];
    r5 = func_02056c70();
    if (r6 == (void *) r5) {
        return;
    }
    if (r5 == 0) {
        return;
    }
    if (func_020571c8(r6) != 0) {
        return;
    }
    if (data_021612d8 != 0) {
        data_021612d8(r6, r5);
    }
    if (s->m10 != 0) {
        s->m10(r6, r5);
    }
    data_021612e4.m8 = r5;
    func_02057214(r5);
}
