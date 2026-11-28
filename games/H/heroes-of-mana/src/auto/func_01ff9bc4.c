/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb4bc();
// clang-format off
asm void func_01ff9bc4(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0x6ff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x707]
    ldrb r8, [r4, #-0xf1]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x30f]
    ldrb r6, [r4, #0x2ff]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x307]
    bl func_01ffb4bc
    add r4, r4, #0x8
    bl func_01ffb4bc
    add r4, r4, #0x3f8
    bl func_01ffb4bc
    add r4, r4, #0x8
    bl func_01ffb4bc
    ldmfd sp!, {pc}
}
// clang-format on
