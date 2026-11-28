/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffe2c0(void) {
    mov r6, #0x20
    add r7, r3, #0x200
    mov r8, #0x0
    mov r9, #0x0
    mov r10, #0x0
    mov r11, #0x0
L_01ffe2d8:
    stmia r7!, {r8, r9, r10, r11}
    subs r6, r6, #0x1
    bne L_01ffe2d8
    mov pc, lr
}
// clang-format on
