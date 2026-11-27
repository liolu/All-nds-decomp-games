/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* AdxStart from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_obj.c (license: none), reused by
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
extern int gCriSys, data_0214f2f4;
extern void func_020e00ec(void *, int);
extern void func_020e00ac(void *);
extern void func_020e148c(Adx *);
extern void func_020db67c(void *);
extern void func_020e1a90(Adx *, int);
void func_020e1a90(Adx *o, int v) {
    int i;
    for (i = 0; i < o->nch; i++) {
        o->p18[i]->vt->f14(o->p18[i]);
    }
    func_020e00ec(o->p4, v);
    o->p14 = (Obj *) v;
    func_020e00ac(o->p4);
    o->state  = 1;
    o->pad4c_ = 0;
    o->b71    = 0;
    o->i8c    = 0x7fffffff;
    o->i90    = -1;
    o->i9c    = 0;
    o->ia4    = 0;
    o->ia0    = data_0214f2f4;
    o->ic0    = 0;
    if (o->mode == 4) {
        func_020e148c(o);
    }
    if (o->p74) {
        func_020db67c(o->p74);
    }
}
