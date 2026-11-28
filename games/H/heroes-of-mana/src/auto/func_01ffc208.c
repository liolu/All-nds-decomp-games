/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc158();
// clang-format off
asm void func_01ffc208(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffc158
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
