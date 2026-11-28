/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb080();
// clang-format off
asm void func_01ff9744(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0xeff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0xf07]
    ldrb r8, [r4, #-0xf1]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x70f]
    ldrb r6, [r4, #-0xf9]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x707]
    bl func_01ffb080
    add r4, r4, #0x8
    bl func_01ffb080
    add r4, r4, #0x800
    sub r4, r4, #0x8
    bl func_01ffb080
    add r4, r4, #0x8
    bl func_01ffb080
    ldmfd sp!, {pc}
}
// clang-format on
