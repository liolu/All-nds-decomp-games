/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa6e8();
// clang-format off
asm void func_01ffa200(void) {
    bl func_01ffa6e8
    ldmia r0, {r4, r5}
    add r4, r4, #0x200
    add r5, r5, #0x100
    stmia r0, {r4, r5}
    bl func_01ffa6e8
    ldmia r0, {r4, r5}
    sub r4, r4, #0x200
    sub r5, r5, #0x100
    stmia r0, {r4, r5}
    ldmfd sp!, {pc}
}
// clang-format on
