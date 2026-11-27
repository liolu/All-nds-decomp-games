/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* AdxDeallocInner from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_obj.c (license: none), reused by
 * tools/donor_match.py */
struct ObjVt {
    void *v0, *v4, *v8;
    void (*del)(void *);
    void *v10;
    void (*f14)(void *);
};
typedef struct Obj {
    struct ObjVt *vt;
} Obj;
typedef struct Adx {
    signed char used, state, mode, nch;
    Obj *p4;
    void *stm;
    void *p0c;
    Obj *p10;
    Obj *p14;
    Obj *p18[2];
    int i20, i24, i28, i2c, i30, i34, i38;
    short s3c, s3e, s40, s42[2], s46;
    int pad48, pad4c_, i50;
    int i54, i58, i5c;
    short s60, pad62;
    int i64;
    short s68, s6a;
    signed char b6c, b6d, b6e, b6f, b70, b71, b72, b73;
    void *p74;
    Obj *p78[2];
    Obj *p80[2];
    int i88, i8c, i90;
    void *p94;
    int i98, i9c, ia0, ia4;
    signed char ba8, ba9, baa, bab;
    int iac, ib0, ib4, ib8, ibc, ic0;
} Adx;
extern char data_020acbf8[], data_020acc20[], data_020acc4c[], data_021300c8[], data_020acca4[], data_020acccc[],
    data_020accf4[], data_020acd20[], data_020acd54[], data_020acd80[], data_020acdac[];
extern void *func_0211035c(void *, int, int);
extern void func_020deb88(const char *);
extern void func_020e7338(void *);
extern void func_020e0108(void *);
extern void func_020e0bc4(void *, int, int);
extern void func_020e0f88(void *);
extern void func_020e6c50(void *);
extern void func_020db810(void *);
extern void func_020e1bbc(Adx *);
extern void func_020e1d70(Adx *);
extern void func_020e18b4(Adx *);
void func_020e1d70(Adx *o);
void func_020e1bbc(Adx *o) {
    Obj *p;
    void *q;
    int i;
    if (o == 0) {
        func_020deb88(data_021300c8);
        return;
    }
    func_020e1d70(o);
    if (o->used == 1) {
        func_020e18b4(o);
    }
    if (o->p0c) {
        q      = o->p0c;
        o->p0c = 0;
        func_020e7338(q);
    }
    if (o->p4) {
        q     = o->p4;
        o->p4 = 0;
        func_020e0108(q);
    }
    q = o->stm;
    if (q) {
        o->stm = 0;
        func_020e0bc4(q, 0, 0);
        func_020e0f88(q);
    }
    if (o->p94) {
        q      = o->p94;
        o->p94 = 0;
        func_020e6c50(q);
    }
    func_020dd47c();
    p = o->p10;
    if (p) {
        o->p10 = 0;
        p->vt->del(p);
    }
    for (i = 0; i < o->nch; i++) {
        p = o->p18[i];
        if (p) {
            o->p18[i] = 0;
            p->vt->del(p);
        }
        p = o->p78[i];
        if (p) {
            o->p78[i] = 0;
            p->vt->del(p);
        }
        p = o->p80[i];
        if (p) {
            o->p80[i] = 0;
            p->vt->del(p);
        }
    }
    if (o->p74) {
        q      = o->p74;
        o->p74 = 0;
        func_020db810(q);
    }
    func_0211035c(o, 0, 0xc4);
    o->used = 0;
    func_020dd470();
}
void func_020e18b4(Adx *o);
