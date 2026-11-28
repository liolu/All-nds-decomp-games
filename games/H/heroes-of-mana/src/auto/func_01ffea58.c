/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffea58(void) {
    add r8, r1, #0x8c0
    ldr r7, [r8, #0xc30]
    mov r9, #0x1
    str r7, [r1, #0x68]
    mov r7, #0x8
    str r9, [r1, #0x6c]
    add r8, r1, #0x78
    mov r9, #0x0
L_01ffea78:
    str r9, [r8], #0x4
    subs r7, r7, #0x1
    bne L_01ffea78
    mov pc, lr
}
// clang-format on
