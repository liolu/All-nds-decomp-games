/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffe2e8(void) {
    stmfd sp!, {r1, r3, r4}
    add r3, r3, #0x200
    rsb ip, r6, #0x7f
    add r4, r4, ip, lsl #0x2
    ldr r2, [r4], #0x4
    mov r1, #0x2
    mov r2, r2, asr #0x4
    str r2, [r3], #0x4
    ldr r2, [r4], #0x4
    ldr r7, [r4], #0x4
    ldr r8, [r4], #0x4
    ldr r9, [r4], #0x4
    ldr r10, [r4], #0x4
    ldr r11, [r4], #0x4
    mul ip, r2, r1
    add r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r7, r1
    add r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r8, r1
    add r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r9, r1
    add r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r10, r1
    add r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r11, r1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mov ip, #0x72
L_01ffe380:
    ldmia r4!, {r6, r7, r8, r9, r10, r11}
    mov r6, r6, asr #0x1
    mov r7, r7, asr #0x1
    mov r8, r8, asr #0x1
    mov r9, r9, asr #0x1
    mov r10, r10, asr #0x1
    mov r11, r11, asr #0x1
    stmia r3!, {r6, r7, r8, r9, r10, r11}
    subs ip, ip, #0x6
    bne L_01ffe380
    ldr r2, [r4], #0x4
    ldr r7, [r4], #0x4
    ldr r8, [r4], #0x4
    ldr r9, [r4], #0x4
    ldr r10, [r4], #0x4
    ldr r11, [r4], #0x4
    mul ip, r2, r1
    sub r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r7, r1
    sub r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r8, r1
    sub r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r9, r1
    sub r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r10, r1
    sub r1, r1, #0x1
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mul ip, r11, r1
    ldr r2, [r4], #0x4
    mov ip, ip, asr #0x4
    str ip, [r3], #0x4
    mov r2, r2, asr #0x4
    str r2, [r3], #0x4
    ldmfd sp!, {r1, r3, r4}
    mov pc, lr
}
// clang-format on
