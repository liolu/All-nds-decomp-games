/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204006c from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_dec.c (license: none), reused by
 * tools/donor_match.py */
extern int data_0214f1c0;
int func_020de388(unsigned char *src, int n, short *out1, short *hist1, short *out2, short *hist2, short c0, short c1,
                  short *rnd, short mul, short add);
int func_020ddfa0(unsigned char *src, int n, short *out1, short *hist1, short *out2, short *hist2, short c0, short c1,
                  short *rnd, short mul, short add);
int func_020ddef4(unsigned char *src, int n, short *out1, short *hist1, short *out2, short *hist2, short c0, short c1,
                  short *rnd, short mul, short add) {
    if (data_0214f1c0 == 0) {
        return func_020ddfa0(src, n, out1, hist1, out2, hist2, c0, c1, rnd, mul, add);
    }
    return func_020de388(src, n, out1, hist1, out2, hist2, c0, c1, rnd, mul, add);
}
