/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020eaa2c from https://github.com/banatic/acww-decomp src/autoload_2/func_020eaa2c.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
int func_0209a898(int *a, int *b) {
    if (a[0] != b[0] || a[1] != b[1] || a[2] != b[2]) {
        return 1;
    }
    return 0;
}
