/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204bfb0 from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_mpa_dec.c (license: none), reused by
 * tools/donor_match.py */
typedef struct MpX {
    int i0;
    int state;
    int pad8[0x1d];
    int i7c[2];
    int pad84;
    int i88;
    int pad8c;
    int i90;
    int i94;
    int pad98[0x7];
    int h;
    int padb8;
    int nstep;
} MpX;
extern void func_020ec204(int);
extern int func_020ec260(int);
extern void func_020ec224(int);
extern void func_020ebf18(int);
extern int func_020ebf08(int);
extern int func_020ebf10(int);
extern void func_020ea0c8(MpX *);
void func_020ea0c8(MpX *x) {
    int h = x->h;
    int i;
    if (func_020ec260(h) == 0) {
        x->i90 = 0;
        x->i88 = 0;
        func_020ec204(h);
    }
    if (x->state == 1) {
        x->i88 = 0;
        func_020ec224(h);
        x->state = 2;
        return;
    }
    if (x->state != 2) {
        return;
    }
    for (i = 0; i < x->nstep; i++) {
        func_020ebf18(h);
    }
    x->i90 = func_020ebf08(h) - x->i88;
    x->i88 = x->i88 + x->i90;
    x->i94 = func_020ebf10(h);
    if (func_020ec260(h) == 3) {
        func_020ec204(h);
        x->state = 0;
    }
}
