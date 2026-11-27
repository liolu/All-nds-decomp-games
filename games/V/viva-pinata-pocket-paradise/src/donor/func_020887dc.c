/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02018504 from projets/saga-3-jikuu-no-hasha-shadow-or-light/src/donor/func_02018504.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed long s32;
typedef signed long long int s64;
typedef s32 fx32;
typedef s64 fx64c;
static inline fx32 FX32_CAST(s64 res) {
    ((void) 0);
    return (fx32) res;
}
extern fx32 func_020887dc(fx32 v32, fx64c v64c);
#pragma thumb off
#pragma thumb off
#pragma thumb off
fx32 func_020887dc(fx32 v32, fx64c v64c) {
    fx64c tmp = v64c * v32 + 0x80000000LL;
    return FX32_CAST(tmp >> 32);
}
