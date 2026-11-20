/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020966c4 from https://github.com/banatic/acww-decomp src/main/func_020966c4.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int data_020af090;
extern int data_020af12c[];
extern int func_0208cfe4(int a, int b);
int func_0200b974(int param) {
    return func_0208cfe4(data_020af090, data_020af12c[param]);
}
