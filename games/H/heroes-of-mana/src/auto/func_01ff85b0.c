/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff85b0(void) {
    sub r8, pc, #0x3c
    ldr r8, [r8, ip, lsl #0x2]
    mov lr, pc
    mov pc, r8
}
// clang-format on
