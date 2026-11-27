/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0203edc4 from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_hdr.c (license: none), reused by
 * tools/donor_match.py */
extern double func_02116854(double);
extern double func_02114c3c(double);
void func_020ddd9c(int a, int b, short *o0, short *o1) {
    double s = func_02116854(2.0);
    float w  = 6.2831855f * a / b;
    float p  = (float) s - (float) func_02114c3c(w);
    float q  = (float) func_02116854(2.0) - 1.0f;
    float c  = (p - (float) func_02116854((double) ((p + q) * (p - q)))) / q;
    *o0      = (short) (4096.0f * (2.0f * c));
    *o1      = (short) (4096.0f * ((0.0f - c) * c));
}
