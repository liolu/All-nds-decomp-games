/* compiler: 2.0/sp1p5  */
/* func_02062fe4 from projets/madagascar/src/auto/func_02062fe4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02049440(void) {
    mov r1, #0x0
L_02062fe8:
    mov r0, #0x0
L_02062fec:
    orr r2, r1, r0
    mcr p15, 0, r2, c7, c14, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_02062fec
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_02062fe8
    bx lr
}
// clang-format on
