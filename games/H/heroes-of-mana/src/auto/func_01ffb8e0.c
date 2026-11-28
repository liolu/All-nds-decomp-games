/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb830();
// clang-format off
asm void func_01ffb8e0(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffb830
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
