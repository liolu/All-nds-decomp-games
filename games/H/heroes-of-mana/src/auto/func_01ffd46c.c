/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd390();
// clang-format off
asm void func_01ffd46c(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffd390
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
