/* compiler: 2.0/sp1p5  */
/* func_0203f6c8 from projets/battle-of-giants-dinosaurs/src/auto/func_0203f6c8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0209439c(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02007a50:
    mcr p15, 0, r0, c7, c10, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02007a50
    bx lr
}
// clang-format on
