/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd144();
// clang-format off
asm void func_01ffce04(void) {
    bl func_01ffd144
    ldmia r0, {r4, r5}
    add r4, r4, #0x800
    add r5, r5, #0x400
    stmia r0, {r4, r5}
    bl func_01ffd144
    ldmia r0, {r4, r5}
    sub r4, r4, #0x800
    sub r5, r5, #0x400
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
