/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffaf3c();
// clang-format off
asm void func_01ff9a00(void) {
    bl func_01ffaf3c
    ldmia r0, {r4, r5, r6, r7}
    add r4, r4, #0x8
    add r5, r5, #0x8
    add r6, r6, #0x2
    add r7, r7, #0x1
    stmia r0, {r4, r5, r6, r7}
    bl func_01ffaf3c
    ldmia r0, {r4, r5, r6, r7}
    sub r4, r4, #0x8
    sub r5, r5, #0x8
    sub r6, r6, #0x2
    sub r7, r7, #0x1
    stmia r0, {r4, r5, r6, r7}
    ldmfd sp!, {pc}
}
// clang-format on
