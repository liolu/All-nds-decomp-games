/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209c114 from projets/pokemon-dash/src/donor/func_0209c114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern int func_0205b2c8(void);
extern struct Node58 *func_02059b18(void);
extern int func_0205a078(void *ctx);
extern void func_0205a0c4(void *ctx);
struct CtxState {
    unsigned short m0;
    unsigned short m2;
    unsigned short m4;
    unsigned short m6;
    void *m8;
    int mc;
    void (*m10)(void *, void *);
};
extern struct CtxState data_0217ad70;
extern void **data_0217ad68;
extern void (*data_0217ad64)(void *, void *);
void func_02059a50(void) {
    void *r6;
    struct Node58 *r5;
    struct CtxState *s = &data_0217ad70;
    if (s->m4 == 0) {
        if (func_0205b2c8() != 0x12) {
            goto cont;
        }
    }
    s->m0 = 1;
    return;
cont:
    r6 = data_0217ad68[0];
    r5 = func_02059b18();
    if (r6 == (void *) r5) {
        return;
    }
    if (r5 == 0) {
        return;
    }
    if (func_0205a078(r6) != 0) {
        return;
    }
    if (data_0217ad64 != 0) {
        data_0217ad64(r6, r5);
    }
    if (s->m10 != 0) {
        s->m10(r6, r5);
    }
    data_0217ad70.m8 = r5;
    func_0205a0c4(r5);
}
