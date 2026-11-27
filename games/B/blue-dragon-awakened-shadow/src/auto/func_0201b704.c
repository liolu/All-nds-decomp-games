/* func_0205d7e4 from projets/tom-and-jerry-tales/src/auto/func_0205d7e4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern s32 errno;
extern void func_02019fb0(void);
extern double __strtold(s32 a, void *f, s32 *s, s32 *n, s32 *e);
extern double fabs(double x);
double func_0201b704(s32 s, s32 *end) {
    s32 n;
    s32 e;
    s32 sp4[2];
    double r;
    double d;
    sp4[1] = 0;
    sp4[0] = s;
    r      = __strtold(0x7fffffff, (void *) func_02019fb0, sp4, &n, &e);
    if (end != 0) {
        *end = s + n;
    }
    d = fabs(r);
    if (e != 0 || (r != 0.0 && (d < 2.2250738585072014e-308 || d > 1.7976931348623157e308))) {
        errno = 0x22;
    }
    return r;
}
