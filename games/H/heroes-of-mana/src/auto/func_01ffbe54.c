/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffcee0();
// clang-format off
asm void func_01ffbe54(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0xeff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0xf01]
    ldrb r8, [r4, #-0xfd]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x703]
    ldrb r6, [r4, #-0xff]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x701]
    bl func_01ffcee0
    add r4, r4, #0x2
    bl func_01ffcee0
    add r4, r4, #0x800
    sub r4, r4, #0x2
    bl func_01ffcee0
    add r4, r4, #0x2
    bl func_01ffcee0
    ldmfd sp!, {pc}
}
// clang-format on
