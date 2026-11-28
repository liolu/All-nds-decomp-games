/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9284();
// clang-format off
asm void func_01ffa198(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffa1bc
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffa1bc
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffa1bc
L_01ffa1bc:
    mov r4, #0x4
    bl func_01ff9284
    ldmfd sp!, {pc}
}
// clang-format on
