/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffcee0(void) {
    ldrb r6, [r4, #0x701]
    ldrb r7, [r4, #0x6ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x700]
    ldrb r8, [r4, #-0xff]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x301]
    ldrb r6, [r4, #-0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x300]
    ldrb r7, [r4, #-0x100]
    ldrb r8, [r4, #0x300]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x100]
    ldrb r7, [r4, #-0xff]
    ldrb r8, [r4, #0x301]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x101]
    ldrb r7, [r4, #-0x100]
    ldrb r8, [r4, #0x100]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x0]
    ldrb r7, [r4, #-0xff]
    ldrb r8, [r4, #0x101]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x1]
    ldrb r7, [r4, #0x100]
    ldrb r8, [r4, #0x300]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x200]
    ldrb r7, [r4, #0x101]
    ldrb r8, [r4, #0x301]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x201]
    ldrb r7, [r4, #0x300]
    ldrb r8, [r4, #0x700]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x500]
    ldrb r7, [r4, #0x301]
    ldrb r8, [r4, #0x701]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x501]
    ldrb r7, [r4, #0x300]
    ldrb r8, [r4, #0x500]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x400]
    ldrb r7, [r4, #0x301]
    ldrb r8, [r4, #0x501]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x401]
    ldrb r7, [r4, #0x500]
    ldrb r8, [r4, #0x700]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x600]
    ldrb r7, [r4, #0x501]
    ldrb r8, [r4, #0x701]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x601]
    mov pc, lr
}
// clang-format on
