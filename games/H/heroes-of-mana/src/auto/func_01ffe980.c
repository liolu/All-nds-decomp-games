/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffe980(void) {
    stmfd sp!, {r0, lr}
    ldr r0, [r2], #0x4
    ldr lr, [r2], #0x4
    add r5, r5, r0
    add r6, r6, lr
    ldr r0, [r2], #0x4
    ldr lr, [r2], #0x4
    add r7, r7, r0
    add r8, r8, lr
    ldr r0, [r2], #0x4
    ldr lr, [r2], #0x4
    add r9, r9, r0
    add r10, r10, lr
    ldr r0, [r2], #0x4
    ldr lr, [r2], #0x4
    add r11, r11, r0
    add ip, ip, lr
    mov r5, r5, asr #0x1
    mov r6, r6, asr #0x1
    mov r7, r7, asr #0x1
    mov r8, r8, asr #0x1
    mov r9, r9, asr #0x1
    mov r10, r10, asr #0x1
    mov r11, r11, asr #0x1
    mov ip, ip, asr #0x1
    ldmfd sp!, {r0, pc}
}
// clang-format on
