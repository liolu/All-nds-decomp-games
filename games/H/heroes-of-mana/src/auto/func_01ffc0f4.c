/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd190();
// clang-format off
asm void func_01ffc0f4(void) {
    stmfd sp!, {lr}
    ldrb r6, [r4, #0x703]
    ldrb r7, [r4, #0x6ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x701]
    ldrb r8, [r4, #-0xfd]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x303]
    ldrb r6, [r4, #0x2ff]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x301]
    bl func_01ffd190
    add r4, r4, #0x2
    bl func_01ffd190
    add r4, r4, #0x400
    sub r4, r4, #0x2
    bl func_01ffd190
    add r4, r4, #0x2
    bl func_01ffd190
    sub r4, r4, #0x400
    sub r4, r4, #0x2
    ldmfd sp!, {pc}
}
// clang-format on
