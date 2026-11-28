/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa350();
// clang-format off
asm void func_01ffa65c(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffa350
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
