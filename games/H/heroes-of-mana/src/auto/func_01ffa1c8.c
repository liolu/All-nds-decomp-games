/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa118();
// clang-format off
asm void func_01ffa1c8(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffa118
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
