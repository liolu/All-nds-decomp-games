/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc81c();
// clang-format off
asm void func_01ffd088(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffd0ac
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffd0ac
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffd0ac
L_01ffd0ac:
    mov r4, #0x8
    bl func_01ffc81c
    ldmfd sp!, {pc}
}
// clang-format on
