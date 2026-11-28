/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbbb4();
// clang-format off
asm void func_01ffc760(void) {
    mov r4, #0x2
    bl func_01ffbbb4
    ldmfd sp!, {pc}
}
// clang-format on
