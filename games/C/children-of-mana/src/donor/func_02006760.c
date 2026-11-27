/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210c1b4 from projets/sims-2-the/src/donor/func_0210c1b4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef int i32;
extern int func_02004db0(double x, double *y);
extern double func_02005500(double x, double y);
extern double func_020064a4(double x, double y, int iy);
extern double func_02006760(double x);
extern double func_020064a4(double x, double y, int iy);
double func_02006760(double x) {
    double y[2];
    double z = 0.0;
    int n;
    int ix;

    ix = (((i32 *) &(x))[1]) & 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return func_02005500(x, z);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = func_02004db0(x, y);
        switch (n & 3) {
            case 0:
                return func_02005500(y[0], y[1]);
            case 1:
                return -func_020064a4(y[0], y[1], 1);
            case 2:
                return -func_02005500(y[0], y[1]);
            default:
                return func_020064a4(y[0], y[1], 1);
        }
    }
}
