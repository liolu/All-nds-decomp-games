/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FpTrap_DoubleToInt from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/msl/fp_trap_double_to_int.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_02001250(double a, u32 op);
typedef union FpValue {
    u32 word[2];
    float f;
    double d;
    s32 i;
} FpValue;
extern FpValue func_020012fc(FpValue x, FpValue y, u32 op);
s32 func_02001250(double a, u32 op) {
    FpValue x;
    x.d = a;
    return func_020012fc(x, x, op).i;
}
