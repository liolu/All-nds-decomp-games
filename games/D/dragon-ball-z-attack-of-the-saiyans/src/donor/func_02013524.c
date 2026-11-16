/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200fbc4 from https://github.com/banatic/acww-decomp src/main/func_0200fbc4.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int func_02013168(int a, int b, int c, int d);
extern int func_020131fc(int a, int b);
int func_02013524(int a, int b, int c, int d) {
    int tmp1 = a;
    int tmp2 = d;
    func_02013168(a, b, c, d);
    return func_020131fc(tmp1, tmp2);
}
