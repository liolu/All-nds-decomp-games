/* compiler: 2.0/sp1p5  */
/* func_0201b704 from projets/blue-dragon-awakened-shadow/src/auto/func_0201b704.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
extern s32 data_021e58e0;
extern void func_020e9350(void);
extern double func_020e9b3c(s32 a, void *f, s32 *s, s32 *n, s32 *e);
extern double func_020eeaa4(double x);
double func_020ead88(s32 s, s32 *end) {
    s32 n;
    s32 e;
    s32 sp4[2];
    double r;
    double d;
    sp4[1] = 0;
    sp4[0] = s;
    r      = func_020e9b3c(0x7fffffff, (void *) func_020e9350, sp4, &n, &e);
    if (end != 0) {
        *end = s + n;
    }
    d = func_020eeaa4(r);
    if (e != 0 || (r != 0.0 && (d < 2.2250738585072014e-308 || d > 1.7976931348623157e308))) {
        data_021e58e0 = 0x22;
    }
    return r;
}
