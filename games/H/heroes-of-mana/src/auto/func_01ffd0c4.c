/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc93c();
// clang-format off
asm void func_01ffd0c4(void) {
    mov r4, #0x8
    bl func_01ffc93c
    ldmfd sp!, {pc}
}
// clang-format on
