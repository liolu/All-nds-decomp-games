/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa98c();
// clang-format off
asm void func_01ffb8ec(void) {
    mov r4, #0x2
    bl func_01ffa98c
    ldmfd sp!, {pc}
}
// clang-format on
