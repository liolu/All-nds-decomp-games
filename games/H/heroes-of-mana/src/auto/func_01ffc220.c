/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff858c();
// clang-format off
asm void func_01ffc220(void) {
    mov r4, #0x4
    mov r5, #0x8
    bl func_01ff858c
    ldmfd sp!, {pc}
}
// clang-format on
