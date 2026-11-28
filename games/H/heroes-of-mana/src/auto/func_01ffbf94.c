/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc2d8();
// clang-format off
asm void func_01ffbf94(void) {
    bl func_01ffc2d8
    ldmia r0, {r4, r5}
    add r4, r4, #0x800
    add r5, r5, #0x400
    stmia r0, {r4, r5}
    bl func_01ffc2d8
    ldmia r0, {r4, r5}
    sub r4, r4, #0x800
    sub r5, r5, #0x400
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
