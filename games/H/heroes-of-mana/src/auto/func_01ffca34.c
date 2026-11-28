/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
// clang-format off
asm void func_01ffca34(void) {
    stmfd sp!, {lr}
    ldrb r9, [r4, #-0x100]
    ldrb r10, [r4, #0x6fe]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0x700]
    ldrb r7, [r4, #-0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x300]
    ldrb r7, [r4, #-0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x100]
    ldrb r7, [r4, #-0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x0]
    ldrb r6, [r4, #0x300]
    ldrb r7, [r4, #0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x200]
    ldrb r6, [r4, #0x700]
    ldrb r7, [r4, #0x300]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x500]
    ldrb r7, [r4, #0x300]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x400]
    ldrb r6, [r4, #0x700]
    ldrb r7, [r4, #0x500]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x600]
    ldmfd sp!, {pc}
}
// clang-format on
