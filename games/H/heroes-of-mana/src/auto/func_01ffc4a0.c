/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb990();
// clang-format off
asm void func_01ffc4a0(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffc4c4
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffc4c4
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffc4c4
L_01ffc4c4:
    mov r4, #0x4
    bl func_01ffb990
    ldmfd sp!, {pc}
}
// clang-format on
