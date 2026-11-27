/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02057c20 from https://github.com/banatic/acww-decomp src/main/func_02057c20.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int func_020963e4(int a, int b);
extern int data_02126ce0;
int func_020965ec(int param) {
    int result = 0;

    if (data_02126ce0) {
        result = func_020963e4(data_02126ce0, param);
    }

    return result;
}
