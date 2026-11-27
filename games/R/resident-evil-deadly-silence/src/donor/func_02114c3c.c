/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006760 from projets/children-of-mana/src/donor/func_02006760.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef int i32;
extern int func_02112cc8(double x, double *y);
extern double func_02113418(double x, double y);
extern double func_021143bc(double x, double y, int iy);
extern double func_02114c3c(double x);
extern double func_021143bc(double x, double y, int iy);
double func_02114c3c(double x) {
    double y[2];
    double z = 0.0;
    int n;
    int ix;

    ix = (((i32 *) &(x))[1]) & 0x7fffffff;
    if (ix <= 0x3fe921fb) {
        return func_02113418(x, z);
    } else if (ix >= 0x7ff00000) {
        return x - x;
    } else {
        n = func_02112cc8(x, y);
        switch (n & 3) {
            case 0:
                return func_02113418(y[0], y[1]);
            case 1:
                return -func_021143bc(y[0], y[1], 1);
            case 2:
                return -func_02113418(y[0], y[1]);
            default:
                return func_021143bc(y[0], y[1], 1);
        }
    }
}
