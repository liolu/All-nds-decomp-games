typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;

extern int func_0200445c(double x);
extern int func_02004470(double x);
extern double func_0200372c(double x, int *eptr);
extern double func_020037e8(double x, int n);
extern int func_020043c8(unsigned long long x);
extern void func_02003e1c(decimal *result, long exp);
extern void func_02003b30(decimal *result, unsigned long long x);
extern void func_02003bfc(decimal *result, const decimal *x, const decimal *y);
/* Runtime helpers still unnamed in symbols.txt: func_02004c00 (a - b) and func_020047f8 (double -> u64). */
extern double func_02004c00(double a, double b);
extern unsigned long long func_020047f8(double x);
void func_020041a0(decimal *d, double x);

enum {
    FPCLASS_NAN      = 1,      /* func_02004470: exponent all ones, nonzero mantissa */
    FPCLASS_INFINITE = 2, /* func_02004470: exponent all ones, zero mantissa */
    DOUBLE_MANT_BITS = 53 /* significand bits of an IEEE double, implicit bit included */
};

/* Trailing zero bits of x: popcount (func_020043c8) of the mask below its lowest set bit. */
static inline int count_trailing_zerol(unsigned long long x) {
    return func_020043c8((x & -x) - 1);
}

/* Trailing zero bits of x's raw bit pattern, with the implicit mantissa bit (bit 52) forced on. */
static inline int count_trailing_zero(double x) {
    unsigned long long y = *(unsigned long long *) &x;
    return count_trailing_zerol(y | 0x0010000000000000ULL);
}

/*
 * Exact binary-to-decimal conversion of x into d (sign, exponent, digit values 0-9), used by __num2dec.
 * Zero gives one digit 0; NaN and infinity give one digit 'N' or 'I' with exponent 0.
 * Otherwise |x| is split by func_0200372c into a mantissa and power of two; the mantissa is scaled to the
 * smallest integer holding all its set bits, converted with func_02003b30, and multiplied (func_02003bfc)
 * by the decimal value of the remaining power of two (func_02003e1c). The sign is stored last.
 */
void func_020041a0(decimal *d, double x) {
    char sgn = (char) (func_0200445c(x) != 0);

    if (x == 0.0) {
        d->sgn         = sgn;
        d->exp         = 0;
        d->sig.length  = 1;
        d->sig.text[0] = 0;
        return;
    }

    if (func_02004470(x) <= FPCLASS_INFINITE) {
        d->sgn         = sgn;
        d->exp         = 0;
        d->sig.length  = 1;
        d->sig.text[0] = (func_02004470(x) == FPCLASS_NAN) ? 'N' : 'I';
        return;
    }

    if (sgn) {
        x = func_02004c00(0.0, x);
    }

    {
        int exp;
        double frac           = func_0200372c(x, &exp);
        long num_bits_extract = DOUBLE_MANT_BITS - count_trailing_zero(frac);
        decimal int_d, pow2_d;

        func_02003e1c(&pow2_d, exp - num_bits_extract);
        func_02003b30(&int_d, func_020047f8(func_020037e8(frac, num_bits_extract)));
        func_02003bfc(d, &int_d, &pow2_d);
        d->sgn = sgn;
    }
}
