/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc0f4();
// clang-format off
asm void func_01ffab9c(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0xeff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0xf03]
    ldrb r8, [r4, #-0xf9]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x707]
    ldrb r6, [r4, #0x6ff]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x703]
    bl func_01ffc0f4
    add r4, r4, #0x4
    bl func_01ffc0f4
    add r4, r4, #0x800
    sub r4, r4, #0x4
    bl func_01ffc0f4
    add r4, r4, #0x4
    bl func_01ffc0f4
    ldmfd sp!, {pc}
}
// clang-format on
