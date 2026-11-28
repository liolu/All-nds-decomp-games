/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9284();
// clang-format off
asm void func_01ffa62c(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffa650
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffa650
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffa650
L_01ffa650:
    mov r4, #0x2
    bl func_01ff9284
    ldmfd sp!, {pc}
}
// clang-format on
