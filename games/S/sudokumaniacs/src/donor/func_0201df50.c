/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203fc54 from projets/battle-of-giants-dinosaurs/src/auto/func_0203fc54.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
// clang-format off
asm void func_0201df50(register u32 clearBits, register u32 setBits) {
    mrc     p15, 0, r2, c5, c0, 2
    bic     r2, r2, r0
    orr     r2, r2, r1
    mcr     p15, 0, r2, c5, c0, 2
    bx      lr
}
// clang-format on
