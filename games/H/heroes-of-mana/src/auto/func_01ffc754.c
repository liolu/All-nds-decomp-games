/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc6a4();
// clang-format off
asm void func_01ffc754(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffc6a4
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
