/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200ac40 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fs/calls/func_0200ac40.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_0200fa48(int a, int b, int c, int d, int e, int f, int g);
extern int func_0200ac1c();
extern int *data_0214987c[];
int func_0200ac40(int a, int b, int c, int d) {
    func_0200fa48((int) data_0214987c[1], c, b, d, (int) func_0200ac1c, a, 1);
    return 6;
}
