/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* ScalePairInPlace from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/src/calls/ScalePairInPlace.c (license: MIT),
 * reused by tools/donor_match.py */
typedef signed long s32;
typedef long long s64;
typedef s32 fx32;
static inline fx32 RoundMul12(fx32 a, fx32 b) {
    return (fx32) (((s64) a * b + 0x800) >> 0xc);
}
void func_02010d64(fx32 *pair, fx32 scale) {
    pair[0] = RoundMul12(pair[0], scale);
    pair[1] = RoundMul12(pair[1], scale);
}
