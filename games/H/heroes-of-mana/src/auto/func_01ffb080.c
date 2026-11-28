/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc34c();
// clang-format off
asm void func_01ffb080(void) {
    stmfd sp!, {lr}
    ldrb r6, [r4, #0x707]
    ldrb r7, [r4, #0x6ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x703]
    ldrb r8, [r4, #-0xf9]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x307]
    ldrb r6, [r4, #-0xfd]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x303]
    bl func_01ffc34c
    add r4, r4, #0x4
    bl func_01ffc34c
    add r4, r4, #0x3fc
    bl func_01ffc34c
    add r4, r4, #0x4
    bl func_01ffc34c
    sub r4, r4, #0x400
    sub r4, r4, #0x4
    ldmfd sp!, {pc}
}
// clang-format on
