/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc7f4();
// clang-format off
asm void func_01ffd058(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffd07c
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffd07c
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffd07c
L_01ffd07c:
    mov r4, #0x8
    bl func_01ffc7f4
    ldmfd sp!, {pc}
}
// clang-format on
