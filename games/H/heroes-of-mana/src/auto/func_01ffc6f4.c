/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb990();
// clang-format off
asm void func_01ffc6f4(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffc718
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffc718
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffc718
L_01ffc718:
    mov r4, #0x2
    bl func_01ffb990
    ldmfd sp!, {pc}
}
// clang-format on
