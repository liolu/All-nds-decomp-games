/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __num2dec_internal from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/num2dec_internal.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
extern double func_02006acc(double x, int *exponent);
extern double func_02006b8c(double x, int n);
static inline int __fpclassifyd(double x) {
    switch (((int *) &x)[1] & 0x7FF00000) {
        case 0x7FF00000:
            if ((((int *) &x)[1] & 0x000FFFFF) || ((int *) &x)[0]) {
                return 1;
            }
            return 2;
        case 0:
            if ((((int *) &x)[1] & 0x000FFFFF) || ((int *) &x)[0]) {
                return 5;
            }
            return 3;
    }
    return 4;
}
typedef struct Decimal {
    u8 sign;
    u8 unk_01;
    s16 exp;
    u8 length;
    u8 digits[32];
    u8 pad_25;
} Decimal;
extern void func_02006f44(Decimal *dec, double x);
extern void func_0200719c(Decimal *dec, long exponent);
extern void func_02007640(Decimal *result, const Decimal *x, const Decimal *y);
extern void func_020077e8(Decimal *dec, u64 value);
extern int func_020079dc(u32 value);
extern double _dsub(double a, double b);
extern u64 func_020084e8(double x);
static inline int CountTrailingZeros(double x) {
    u32 *words = (u32 *) &x;

    if (words[0] != 0) {
        return func_020079dc(words[0]);
    }
    return 32 + func_020079dc(words[1] | 0x00100000);
}
void func_02006f44(Decimal *dec, double x) {
    u8 sign = (((int *) &x)[1] & 0x80000000) != 0;

    if (x == 0.0) {
        dec->sign      = sign;
        dec->exp       = 0;
        dec->length    = 1;
        dec->digits[0] = 0;
        return;
    }
    if (__fpclassifyd(x) <= 2) {
        dec->sign      = sign;
        dec->exp       = 0;
        dec->length    = 1;
        dec->digits[0] = __fpclassifyd(x) == 1 ? 'N' : 'I';
        return;
    }
    if (sign) {
        x = _dsub(0.0, x);
    }

    {
        int exponent;
        double fraction = func_02006acc(x, &exponent);
        int bits        = 53 - CountTrailingZeros(fraction);
        Decimal mantissa;
        Decimal power;

        func_0200719c(&power, exponent - bits);
        func_020077e8(&mantissa, func_020084e8(func_02006b8c(fraction, bits)));
        func_02007640(dec, &mantissa, &power);
        dec->sign = sign;
    }
}
