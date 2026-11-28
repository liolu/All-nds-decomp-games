/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9534();
// clang-format off
asm void func_01ffa1d4(void) {
    mov r4, #0x4
    bl func_01ff9534
    ldmfd sp!, {pc}
}
// clang-format on
