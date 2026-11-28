/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
extern void func_01ffa2ac();
// clang-format off
asm void func_01ffa350(void) {
    stmfd sp!, {lr}
    ldr r4, [r0, #-0x8]
    ldr r9, [r0, #0x0]
    add r4, r4, r9
    ldrb r9, [r4, #-0xf1]
    ldrb r10, [r4, #0xff]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0x10f]
    ldrb r7, [r4, #0xff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x107]
    ldrb r8, [r4, #-0xf1]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xf]
    ldrb r6, [r4, #-0x1]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x7]
    ldrb r7, [r4, #-0x1]
    ldrb r8, [r4, #0x7]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x3]
    ldrb r7, [r4, #0xff]
    ldrb r8, [r4, #0x107]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x103]
    ldrb r7, [r4, #-0x1]
    ldrb r8, [r4, #0x3]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x1]
    ldrb r7, [r4, #0xff]
    ldrb r8, [r4, #0x103]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x101]
    ldrb r7, [r4, #-0x1]
    ldrb r8, [r4, #0x1]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x0]
    ldrb r7, [r4, #0xff]
    ldrb r8, [r4, #0x101]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x100]
    ldrb r7, [r4, #0x1]
    ldrb r8, [r4, #0x3]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x2]
    ldrb r7, [r4, #0x101]
    ldrb r8, [r4, #0x103]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x102]
    ldrb r7, [r4, #0x3]
    ldrb r8, [r4, #0x7]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x5]
    ldrb r7, [r4, #0x103]
    ldrb r8, [r4, #0x107]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x105]
    ldrb r7, [r4, #0x3]
    ldrb r8, [r4, #0x5]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x4]
    ldrb r7, [r4, #0x103]
    ldrb r8, [r4, #0x105]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x104]
    ldrb r7, [r4, #0x5]
    ldrb r8, [r4, #0x7]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x6]
    ldrb r7, [r4, #0x105]
    ldrb r8, [r4, #0x107]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x106]
    ldrb r7, [r4, #0x7]
    ldrb r8, [r4, #0xf]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xb]
    ldrb r7, [r4, #0x107]
    ldrb r8, [r4, #0x10f]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10b]
    ldrb r7, [r4, #0x7]
    ldrb r8, [r4, #0xb]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x9]
    ldrb r7, [r4, #0x107]
    ldrb r8, [r4, #0x10b]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x109]
    ldrb r7, [r4, #0x7]
    ldrb r8, [r4, #0x9]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x8]
    ldrb r7, [r4, #0x107]
    ldrb r8, [r4, #0x109]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x108]
    ldrb r7, [r4, #0x9]
    ldrb r8, [r4, #0xb]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xa]
    ldrb r7, [r4, #0x109]
    ldrb r8, [r4, #0x10b]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10a]
    ldrb r7, [r4, #0xb]
    ldrb r8, [r4, #0xf]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xd]
    ldrb r7, [r4, #0x10b]
    ldrb r8, [r4, #0x10f]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10d]
    ldrb r7, [r4, #0xb]
    ldrb r8, [r4, #0xd]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xc]
    ldrb r7, [r4, #0x10b]
    ldrb r8, [r4, #0x10d]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10c]
    ldrb r7, [r4, #0xd]
    ldrb r8, [r4, #0xf]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xe]
    ldrb r7, [r4, #0x10d]
    ldrb r8, [r4, #0x10f]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10e]
    ldr r4, [r0, #-0x4]
    ldr r9, [r0, #0x4]
    add r4, r4, r9
    bl func_01ffa2ac
    add r4, r4, #0x1
    bl func_01ffa2ac
    ldmfd sp!, {pc}
}
// clang-format on
