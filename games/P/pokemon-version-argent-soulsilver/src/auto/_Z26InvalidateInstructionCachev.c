/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _Z26InvalidateInstructionCachev from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/cache.c (license:
 * none), reused by tools/donor_match.py */
extern void _Z26InvalidateInstructionCachev(void);
// clang-format off
asm void _Z26InvalidateInstructionCachev(void) {
    mov r0, 0
    mcr p15, 0, r0, c7, c5, 0
    bx lr
}
// clang-format on
