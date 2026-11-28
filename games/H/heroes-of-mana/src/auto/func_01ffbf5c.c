/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbeac();
// clang-format off
asm void func_01ffbf5c(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffbeac
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
