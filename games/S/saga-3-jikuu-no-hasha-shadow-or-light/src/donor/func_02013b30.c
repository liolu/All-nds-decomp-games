/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_DisableDCacheForProtectionRegion from https://github.com/Yokimitsuro/khrecoded-decomp
 * libs/nitro/os/asm_stubs/auto/OS_DisableDCacheForProtectionRegion.c (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
// clang-format off
asm void func_02013b30(register u32 flags)
{
    mrc p15, 0, r1, c2, c0, 0
    bic r1, r1, r0
    mcr p15, 0, r1, c2, c0, 0
    bx lr
}
// clang-format on
