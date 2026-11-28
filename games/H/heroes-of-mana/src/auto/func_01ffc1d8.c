/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb9bc();
// clang-format off
asm void func_01ffc1d8(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffc1fc
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffc1fc
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffc1fc
L_01ffc1fc:
    mov r4, #0x8
    bl func_01ffb9bc
    ldmfd sp!, {pc}
}
// clang-format on
