/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203d704 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0203/func_0203d704.c (license: MIT), reused
 * by tools/donor_match.py */
#pragma ipa file
void func_020a56a8(int *o, int *a, int *b) {
    int a0 = a[0], b0 = b[0], a1 = a[1], b1 = b[1];
    o[0] = a0 + b0;
    o[1] = a1 + b1;
}
