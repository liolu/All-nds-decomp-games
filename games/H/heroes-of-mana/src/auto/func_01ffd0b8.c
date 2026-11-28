/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd008();
// clang-format off
asm void func_01ffd0b8(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffd008
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
