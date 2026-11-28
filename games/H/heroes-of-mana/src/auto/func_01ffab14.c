/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc040();
// clang-format off
asm void func_01ffab14(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0x6fe]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x702]
    ldrb r8, [r4, #-0xfa]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x306]
    ldrb r6, [r4, #0x2fe]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x302]
    bl func_01ffc040
    add r4, r4, #0x4
    bl func_01ffc040
    add r4, r4, #0x3fc
    bl func_01ffc040
    add r4, r4, #0x4
    bl func_01ffc040
    sub r4, r4, #0x400
    sub r4, r4, #0x4
    ldmfd sp!, {pc}
}
// clang-format on
