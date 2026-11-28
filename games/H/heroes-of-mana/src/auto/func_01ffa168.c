/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9258();
// clang-format off
asm void func_01ffa168(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffa18c
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffa18c
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffa18c
L_01ffa18c:
    mov r4, #0x4
    bl func_01ff9258
    ldmfd sp!, {pc}
}
// clang-format on
