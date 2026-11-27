/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __signbitd from https://github.com/zeldaret/st libs/c/src/math_api.c (license: CC0-1.0), reused by tools/donor_match.py */
extern int func_02001788(double x);
int func_02001788(double x) {
    return ((((int *) &x)[1]) & 0x80000000) != 0;
}
