/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
extern void func_01ffc040();
// clang-format off
asm void func_01ffc0c8(void) {
    stmfd sp!, {lr}
    ldrb r9, [r4, #-0xfe]
    ldrb r10, [r4, #0x2fe]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0x302]
    bl func_01ffc040
    ldmfd sp!, {pc}
}
// clang-format on
