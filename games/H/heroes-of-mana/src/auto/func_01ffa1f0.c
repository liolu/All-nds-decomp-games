/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff85e8();
// clang-format off
asm void func_01ffa1f0(void) {
    mov r4, #0x10
    mov r5, #0x4
    bl func_01ff85e8
    ldmfd sp!, {pc}
}
// clang-format on
