/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
extern void func_01ff9718();
extern void func_01ff9744();
// clang-format off
asm void func_01ff979c(void) {
    stmfd sp!, {lr}
    ldr r4, [r0, #-0x8]
    ldr r9, [r0, #0x0]
    add r4, r4, r9
    ldrb r9, [r4, #-0xf1]
    ldrb r10, [r4, #0xeff]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0xf0f]
    bl func_01ff9744
    ldr r4, [r0, #-0x4]
    ldr r9, [r0, #0x4]
    add r4, r4, r9
    bl func_01ff9718
    add r4, r4, #0x1
    bl func_01ff9718
    ldmfd sp!, {pc}
}
// clang-format on
