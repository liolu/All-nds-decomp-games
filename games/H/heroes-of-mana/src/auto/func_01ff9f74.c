/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff9f74(void) {
    ldrb r7, [r4, #0xfe]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x106]
    ldrb r8, [r4, #-0xf2]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xe]
    ldrb r6, [r4, #-0xfa]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x6]
    ldrb r7, [r4, #-0x2]
    ldrb r8, [r4, #0x6]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x2]
    ldrb r7, [r4, #0xfe]
    ldrb r8, [r4, #0x106]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x102]
    ldrb r7, [r4, #-0x2]
    ldrb r8, [r4, #0x2]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x0]
    ldrb r7, [r4, #0xfe]
    ldrb r8, [r4, #0x102]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x100]
    ldrb r7, [r4, #0x2]
    ldrb r8, [r4, #0x6]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x4]
    ldrb r7, [r4, #0x102]
    ldrb r8, [r4, #0x106]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x104]
    ldrb r7, [r4, #0x6]
    ldrb r8, [r4, #0xe]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xa]
    ldrb r7, [r4, #0x106]
    ldrb r8, [r4, #0x10e]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10a]
    ldrb r7, [r4, #0x6]
    ldrb r8, [r4, #0xa]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x8]
    ldrb r7, [r4, #0x106]
    ldrb r8, [r4, #0x10a]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x108]
    ldrb r7, [r4, #0xa]
    ldrb r8, [r4, #0xe]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xc]
    ldrb r7, [r4, #0x10a]
    ldrb r8, [r4, #0x10e]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10c]
    mov pc, lr
}
// clang-format on
