/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209c114 from projets/pokemon-dash/src/donor/func_0209c114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern int func_0204a2e0(void);
extern struct Node58 *func_02048844(void);
extern int func_02048da4(void *ctx);
extern void func_02048df0(void *ctx);
struct CtxState {
    unsigned short m0;
    unsigned short m2;
    unsigned short m4;
    unsigned short m6;
    void *m8;
    int mc;
    void (*m10)(void *, void *);
};
extern struct CtxState data_0206b9dc;
extern void **data_0206b9d4;
extern void (*data_0206b9d0)(void *, void *);
void func_0204877c(void) {
    void *r6;
    struct Node58 *r5;
    struct CtxState *s = &data_0206b9dc;
    if (s->m4 == 0) {
        if (func_0204a2e0() != 0x12) {
            goto cont;
        }
    }
    s->m0 = 1;
    return;
cont:
    r6 = data_0206b9d4[0];
    r5 = func_02048844();
    if (r6 == (void *) r5) {
        return;
    }
    if (r5 == 0) {
        return;
    }
    if (func_02048da4(r6) != 0) {
        return;
    }
    if (data_0206b9d0 != 0) {
        data_0206b9d0(r6, r5);
    }
    if (s->m10 != 0) {
        s->m10(r6, r5);
    }
    data_0206b9dc.m8 = r5;
    func_02048df0(r5);
}
