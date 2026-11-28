/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __dec2num from https://github.com/ctrl-cheeb-del/pokeheartgold lib/MSL_C/src/msl_fp_ansi_dec2num.c, renamed to this game's
 * symbols */
#include "m2c.h"

typedef struct {
    s8 sign, pad;
    s16 exponent;
    u8 length, digits[32];
} Dec;

typedef union {
    double d;
    u64 bits;
} Bits;

extern double func_02029e80(double, double);
extern double pow(double, double);
extern double ldexp(double, int);
extern void __str2dec(Dec *, const char *, s16);
extern void func_0202af6c(Dec *, double);
extern void func_0202acc8(Dec *, const Dec *, const Dec *);
extern int func_0202ab08(const Dec *, const Dec *);
extern int func_0202abe8(const Dec *, const Dec *);
extern int func_0202b860(double);
extern const char data_02036208[];
extern const double data_020360f4[];
extern float __float_huge;

double __dec2num(const Dec *dec) {
    Dec input, limit, low, high, temp, delta;
    Bits nan;
    double approx;
    Bits adjacent;
    u8 *end, *next;
    u64 *step;

    struct {
        unsigned int digits;
        int count;
    } group;

    int exponent, j, up, down;
    if (dec->length == 0) {
        return func_02029e80(0.0, dec->sign == 0 ? 1.0 : -1.0);
    }
    switch (dec->digits[0]) {
        case '0':
            return func_02029e80(0.0, dec->sign == 0 ? 1.0 : -1.0);
        case 'I':
            return func_02029e80((double) __float_huge, dec->sign == 0 ? 1.0 : -1.0);
        case 'N': {
            u64 *bits  = &nan.bits;
            u32 *words = (u32 *) bits;
            words[0]   = 0;
            words[1]   = 0x7ff00000;
            if (dec->sign) {
                *bits |= 0x8000000000000000ULL;
            }
            *bits |= 0x8000000000000ULL;
            return nan.d;
        }
    }
    input = *dec;
    next  = input.digits;
    end   = next + input.length;
    while (next < end) {
        *next -= '0';
        next++;
    }
    input.exponent += input.length - 1;
    exponent = input.exponent;
    __str2dec(&limit, data_02036208, 308);
    if (func_0202abe8(&limit, &input)) {
        return func_02029e80((double) __float_huge, dec->sign == 0 ? 1.0 : -1.0);
    }
    next   = input.digits;
    approx = (u32) *next++;
    while (next < end) {
        double product, added;
        group.count  = (end - next) % 8;
        group.digits = 0;
        if (group.count == 0) {
            group.count = 8;
        }
        for (j = 0; j < group.count; j++) {
            group.digits *= 10;
            group.digits += *next++;
        }
        product = approx * data_020360f4[group.count - 1];
        added   = product + (double) group.digits;
        if (group.digits != 0 && product == added) {
            break;
        }
        approx = added;
        exponent -= group.count;
    }
    if (exponent < 0) {
        approx /= pow(5.0, -exponent);
    } else {
        approx *= pow(5.0, exponent);
    }
    approx = ldexp(approx, exponent);
    if (func_0202b860(approx) == 2) {
        (*(u64 *) &approx) = 0x7fefffffffffffffULL;
    }
    step = &adjacent.bits;
    up   = 0;
    func_0202af6c(&low, approx);
    if (!func_0202ab08(&low, &input)) {
        if (func_0202abe8(&low, &input)) {
            up = 1;
        }
        adjacent.d = approx;
        down       = (up == 0) ? 1 : 0;
        for (;;) {
            if (!down) {
                (*step)++;
                if (func_0202b860(adjacent.d) == 2) {
                    goto done;
                }
            } else {
                (*step)--;
            }
            func_0202af6c(&high, adjacent.d);
            if (up && !func_0202abe8(&high, &input)) {
                break;
            }
            if (!up && !func_0202abe8(&input, &high)) {
                double swap;
                temp       = low;
                low        = high;
                high       = temp;
                swap       = approx;
                approx     = adjacent.d;
                adjacent.d = swap;
                break;
            }
            low    = high;
            approx = adjacent.d;
        }
        func_0202acc8(&temp, &input, &low);
        func_0202acc8(&delta, &high, &input);
        if (func_0202ab08(&temp, &delta)) {
            if ((*(u64 *) &approx) & 1) {
                approx = adjacent.d;
            }
        } else if (!func_0202abe8(&temp, &delta)) {
            approx = adjacent.d;
        }
    }
done:
    if (input.sign) {
        approx = 0.0 - approx;
    }
    return approx;
}
