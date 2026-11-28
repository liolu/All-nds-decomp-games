/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204006c from https://github.com/tylzars/bakubrawlers libs/cri/src/cri_adx_dec.c (license: none), reused by
 * tools/donor_match.py */
extern int data_ov014_0214970c;
int func_ov014_02136798(unsigned char *src, int n, short *out1, short *hist1, short *out2, short *hist2, short c0, short c1,
                        short *rnd, short mul, short add);
int func_ov014_021363b0(unsigned char *src, int n, short *out1, short *hist1, short *out2, short *hist2, short c0, short c1,
                        short *rnd, short mul, short add);
int func_ov014_02136304(unsigned char *src, int n, short *out1, short *hist1, short *out2, short *hist2, short c0, short c1,
                        short *rnd, short mul, short add) {
    if (data_ov014_0214970c == 0) {
        return func_ov014_021363b0(src, n, out1, hist1, out2, hist2, c0, c1, rnd, mul, add);
    }
    return func_ov014_02136798(src, n, out1, hist1, out2, hist2, c0, c1, rnd, mul, add);
}
