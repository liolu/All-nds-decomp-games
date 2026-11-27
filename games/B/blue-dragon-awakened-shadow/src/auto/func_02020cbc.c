/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02007850 from projets/rayman-rr/src/donor/func_02007850.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef int i32;
extern int func_0201ef18(double x, double *y);
extern double func_0201f5e0(double x, double y);
extern double func_020204bc(double x, double y, int iy);
extern double func_02020cbc(double x);
extern double func_020204bc(double x, double y, int iy);
double func_02020cbc(double x) {
    double y[2];
    double z = 0.0;
    int n;
    int ix;

    ix = (((i32 *) &(x))[1]) & 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return func_0201f5e0(x, z);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = func_0201ef18(x, y);
        switch (n & 3) {
            case 0:
                return func_0201f5e0(y[0], y[1]);
            case 1:
                return -func_020204bc(y[0], y[1], 1);
            case 2:
                return -func_0201f5e0(y[0], y[1]);
            default:
                return func_020204bc(y[0], y[1], 1);
        }
    }
}
