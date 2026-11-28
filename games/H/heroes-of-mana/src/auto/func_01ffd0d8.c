/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd354();
// clang-format off
asm void func_01ffd0d8(void) {
    bl func_01ffd354
    ldmia r0, {r4, r5}
    add r4, r4, #0x400
    add r5, r5, #0x200
    stmia r0, {r4, r5}
    bl func_01ffd354
    ldmia r0, {r4, r5}
    sub r4, r4, #0x400
    sub r5, r5, #0x200
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
