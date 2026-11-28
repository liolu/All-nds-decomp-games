/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9534();
// clang-format off
asm void func_01ffa668(void) {
    mov r4, #0x2
    bl func_01ff9534
    ldmfd sp!, {pc}
}
// clang-format on
