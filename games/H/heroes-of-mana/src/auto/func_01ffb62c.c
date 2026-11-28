/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc5d0();
// clang-format off
asm void func_01ffb62c(void) {
    bl func_01ffc5d0
    ldmia r0, {r4, r5}
    add r4, r4, #0x4
    add r5, r5, #0x4
    stmia r0, {r4, r5}
    bl func_01ffc5d0
    ldmia r0, {r4, r5}
    sub r4, r4, #0x4
    sub r5, r5, #0x4
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
