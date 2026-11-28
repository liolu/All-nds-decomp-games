/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff85e8();
// clang-format off
asm void func_01ffc528(void) {
    mov r4, #0x4
    mov r5, #0x4
    bl func_01ff85e8
    ldmfd sp!, {pc}
}
// clang-format on
