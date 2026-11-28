/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd4cc();
// clang-format off
asm void func_01ffc774(void) {
    bl func_01ffd4cc
    ldmia r0, {r4, r5}
    add r4, r4, #0x2
    add r5, r5, #0x2
    stmia r0, {r4, r5}
    bl func_01ffd4cc
    ldmia r0, {r4, r5}
    sub r4, r4, #0x2
    sub r5, r5, #0x2
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
