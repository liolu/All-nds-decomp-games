/* compiler: 2.0/sp1p5  */
/* func_02063048 from projets/madagascar/src/auto/func_02063048.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020494a4(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02063050:
    mcr p15, 0, r0, c7, c14, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02063050
    bx lr
}
// clang-format on
