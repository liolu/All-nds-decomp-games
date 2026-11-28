/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffaf50();
// clang-format off
asm void func_01ff96bc(void) {
    stmfd sp!, {lr}
    ldrb r7, [r4, #0x6fe]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x706]
    ldrb r8, [r4, #-0xf2]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x30e]
    ldrb r6, [r4, #-0xfa]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x306]
    bl func_01ffaf50
    add r4, r4, #0x8
    bl func_01ffaf50
    add r4, r4, #0x3f8
    bl func_01ffaf50
    add r4, r4, #0x8
    bl func_01ffaf50
    sub r4, r4, #0x400
    sub r4, r4, #0x8
    ldmfd sp!, {pc}
}
// clang-format on
