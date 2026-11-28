/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb698();
// clang-format off
asm void func_01ffa22c(void) {
    bl func_01ffb698
    ldmia r0, {r4, r5}
    add r4, r4, #0x8
    add r5, r5, #0x8
    stmia r0, {r4, r5}
    bl func_01ffb698
    ldmia r0, {r4, r5}
    sub r4, r4, #0x8
    sub r5, r5, #0x8
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
