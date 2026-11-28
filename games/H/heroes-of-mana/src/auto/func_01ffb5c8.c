/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb518();
// clang-format off
asm void func_01ffb5c8(void) {
    stmfd sp!, {r11, ip}
    bl func_01ffb518
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
