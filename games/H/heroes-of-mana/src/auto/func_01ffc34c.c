/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffc34c(void) {
    ldrb r6, [r4, #0x303]
    ldrb r7, [r4, #0x2ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x301]
    ldrb r8, [r4, #-0xfd]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x103]
    ldrb r6, [r4, #-0xff]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x101]
    ldrb r7, [r4, #0xff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x100]
    ldrb r8, [r4, #-0xff]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x1]
    ldrb r6, [r4, #-0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x0]
    ldrb r6, [r4, #0x103]
    ldrb r7, [r4, #0x101]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x102]
    ldrb r8, [r4, #-0xfd]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x3]
    ldrb r6, [r4, #-0xfe]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x2]
    ldrb r6, [r4, #0x301]
    ldrb r7, [r4, #0x2ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x300]
    ldrb r8, [r4, #0x101]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x201]
    ldrb r6, [r4, #0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x200]
    ldrb r6, [r4, #0x303]
    ldrb r7, [r4, #0x301]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x302]
    ldrb r8, [r4, #0x103]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x203]
    ldrb r6, [r4, #0x102]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x202]
    mov pc, lr
}
// clang-format on
