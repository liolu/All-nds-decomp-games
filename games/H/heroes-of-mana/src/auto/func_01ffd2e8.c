/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd4cc();
// clang-format off
asm void func_01ffd2e8(void) {
    bl func_01ffd4cc
    ldmia r0, {r4, r5}
    add r4, r4, #0x200
    add r5, r5, #0x100
    stmia r0, {r4, r5}
    bl func_01ffd4cc
    ldmia r0, {r4, r5}
    sub r4, r4, #0x200
    sub r5, r5, #0x100
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
