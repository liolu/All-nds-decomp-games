/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02007f6c from https://github.com/zeldaret/st libs/c/src/extras.c (license: CC0-1.0), reused by tools/donor_match.py */
extern double func_02009168(double x, int *eptr);
extern double func_02009228(double value, int exp);
extern double func_02007f6c(double x, int n);
double func_02007f6c(double x, int n) {
    double value;
    int exp;

    value = func_02009168(x, &exp);
    exp += n;

    return func_02009228(value, exp);
}
