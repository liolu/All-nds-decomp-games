/* compiler: 2.0/sp1p5  */
/* func_0203f6ac from projets/battle-of-giants-dinosaurs/src/auto/func_0203f6ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02094380(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02007a34:
    mcr p15, 0, r0, c7, c6, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02007a34
    bx lr
}
// clang-format on
