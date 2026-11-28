/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8b98(void) {
    add r4, r4, #0x1
    mov r6, ip
    mov lr, pc
    mov pc, r5
}
// clang-format on
