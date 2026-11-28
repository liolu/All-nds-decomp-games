/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff858c();
// clang-format off
asm void func_01ffa1e0(void) {
    mov r4, #0x10
    mov r5, #0x4
    bl func_01ff858c
    ldmfd sp!, {pc}
}
// clang-format on
