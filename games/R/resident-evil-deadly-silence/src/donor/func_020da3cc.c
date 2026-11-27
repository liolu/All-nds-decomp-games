/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0203dec4 from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_hooks.c (license: none), reused by
 * tools/donor_match.py */
typedef struct CriHooks {
    void (*f0)(int);
    void (*f4)(int, int);
    void (*f8)(int, int);
    void (*fc)(int);
} CriHooks;
extern CriHooks data_0214efb8;
typedef struct CriObj {
    int pad[0x2d];
    int h;
    int v;
    int v96;
} CriObj;
void func_020da3cc(CriObj *o) {
    if (o->h != 0) {
        data_0214efb8.f0(o->h);
    }
}
