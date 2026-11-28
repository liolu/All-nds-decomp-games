/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffcad8();
// clang-format off
asm void func_01ffcde4(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffcad8
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
