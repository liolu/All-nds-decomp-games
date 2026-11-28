/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbbb4();
// clang-format off
asm void func_01ffc50c(void) {
    mov r4, #0x4
    bl func_01ffbbb4
    ldmfd sp!, {pc}
}
// clang-format on
