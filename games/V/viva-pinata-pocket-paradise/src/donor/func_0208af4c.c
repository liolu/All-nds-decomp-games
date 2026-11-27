/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* IC_Enable from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/cache.c (license: none), reused by
 * tools/donor_match.py */
typedef int s32;
typedef s32 BOOL;
extern BOOL func_0208af4c(void);
// clang-format off
asm BOOL func_0208af4c(void) {
    mrc     p15, 0, r1, c1, c0, 0
    and     r0, r1, 0x1000
    mov     r0, r0, lsr 12
    orr     r1, r1, 0x1000
    mcr     p15, 0, r1, c1, c0, 0
    bx      lr
}
// clang-format on
