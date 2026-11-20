/* compiler: 2.0/sp1p5  */
/* func_0203f64c from projets/battle-of-giants-dinosaurs/src/auto/func_0203f64c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02094320(void) {
    mov r1, #0x0
L_020079d0:
    mov r0, #0x0
L_020079d4:
    orr r2, r1, r0
    mcr p15, 0, r2, c7, c10, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_020079d4
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_020079d0
    bx lr
}
// clang-format on
