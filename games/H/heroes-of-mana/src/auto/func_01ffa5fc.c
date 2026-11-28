/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9258();
// clang-format off
asm void func_01ffa5fc(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffa620
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffa620
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffa620
L_01ffa620:
    mov r4, #0x2
    bl func_01ff9258
    ldmfd sp!, {pc}
}
// clang-format on
