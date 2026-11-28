/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb708();
// clang-format off
asm void func_01ffa0c4(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0x2ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x307]
    ldrb r8, [r4, #-0xf1]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10f]
    ldrb r6, [r4, #-0xf9]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x107]
    bl func_01ffb708
    add r4, r4, #0x8
    bl func_01ffb708
    add r4, r4, #0x1f8
    bl func_01ffb708
    add r4, r4, #0x8
    bl func_01ffb708
    ldmfd sp!, {pc}
}
// clang-format on
