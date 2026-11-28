/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc61c();
// clang-format off
asm void func_01ffb4bc(void) {
    stmfd sp!, {lr}
    ldrb r6, [r4, #0x307]
    ldrb r7, [r4, #0x2ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x303]
    ldrb r8, [r4, #-0xf9]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x107]
    ldrb r6, [r4, #0xff]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x103]
    bl func_01ffc61c
    add r4, r4, #0x4
    bl func_01ffc61c
    add r4, r4, #0x1fc
    bl func_01ffc61c
    add r4, r4, #0x4
    bl func_01ffc61c
    sub r4, r4, #0x204
    ldmfd sp!, {pc}
}
// clang-format on
