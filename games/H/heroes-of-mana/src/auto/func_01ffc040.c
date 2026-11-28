/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffc040(void) {
    ldrb r6, [r4, #0x302]
    ldrb r7, [r4, #0x2fe]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x300]
    ldrb r8, [r4, #-0xfe]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x102]
    ldrb r6, [r4, #0xfe]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x100]
    ldrb r7, [r4, #-0x100]
    ldrb r8, [r4, #0x100]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x0]
    ldrb r7, [r4, #-0xfe]
    ldrb r8, [r4, #0x102]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x2]
    ldrb r7, [r4, #0x100]
    ldrb r8, [r4, #0x300]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x200]
    ldrb r7, [r4, #0x102]
    ldrb r8, [r4, #0x302]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x202]
    mov pc, lr
}
// clang-format on
