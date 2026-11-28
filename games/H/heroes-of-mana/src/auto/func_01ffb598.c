/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa738();
// clang-format off
asm void func_01ffb598(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffb5bc
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffb5bc
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffb5bc
L_01ffb5bc:
    mov r4, #0x4
    bl func_01ffa738
    ldmfd sp!, {pc}
}
// clang-format on
