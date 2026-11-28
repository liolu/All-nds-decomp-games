/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
// clang-format off
asm void func_01ffc5e4(void) {
    stmfd sp!, {lr}
    ldrb r9, [r4, #-0xfe]
    ldrb r10, [r4, #-0x2]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0x2]
    ldrb r7, [r4, #-0x2]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x0]
    ldmfd sp!, {pc}
}
// clang-format on
