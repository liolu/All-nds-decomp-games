/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb408();
// clang-format off
asm void func_01ff9b40(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0x2fe]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x306]
    ldrb r8, [r4, #-0xf2]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x10e]
    ldrb r6, [r4, #0xfe]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x106]
    bl func_01ffb408
    add r4, r4, #0x8
    bl func_01ffb408
    add r4, r4, #0x1f8
    bl func_01ffb408
    add r4, r4, #0x8
    bl func_01ffb408
    sub r4, r4, #0x208
    ldmfd sp!, {pc}
}
// clang-format on
