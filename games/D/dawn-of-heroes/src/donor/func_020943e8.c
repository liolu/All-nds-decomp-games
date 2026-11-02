/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203f714 from projets/battle-of-giants-dinosaurs/src/auto/func_0203f714.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_020943e8(void);
// clang-format off
asm void func_020943e8(void) {
    mov r0, 0
    mcr p15, 0, r0, c7, c5, 0
    bx lr
}
// clang-format on
