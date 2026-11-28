/* compiler: 1.2/b56 */
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffe674();
// clang-format off
asm void func_01ffe504(void) {
    stmfd sp!, {r3, r4, lr}
    ldmia r2, {r5, r6, r7, r8, r9, r10, r11, ip}
    add r3, r1, #0x70
    ldrb r4, [r3, #0x0]
    add r2, r1, #0x8c0
    add r4, r2, r4, lsl #0x4
    bl func_01ffe674
    add r3, r1, #0x71
    ldrb r4, [r3, #0x0]
    add r2, r1, #0xcc0
    add r4, r2, r4, lsl #0x4
    bl func_01ffe674
    add r3, r1, #0x72
    ldrb r4, [r3, #0x0]
    add r2, r1, #0x10c0
    add r4, r2, r4, lsl #0x4
    bl func_01ffe674
    add r2, r1, #0x8
    stmia r2, {r5, r6, r7, r8, r9, r10, r11, ip}
    mul r3, r5, r6
    add r5, r5, r3, asr #0xf
    mul r3, r6, r7
    mul r4, r5, r7
    add r5, r5, r3, asr #0xf
    add r6, r6, r4, asr #0xf
    mul r3, r7, r8
    mul r4, r5, r8
    add r5, r5, r3, asr #0xf
    mul r3, r6, r8
    add r7, r7, r4, asr #0xf
    add r6, r6, r3, asr #0xf
    mul r3, r8, r9
    mul r4, r5, r9
    add r5, r5, r3, asr #0xf
    add r8, r8, r4, asr #0xf
    mul r3, r7, r9
    mul r4, r6, r9
    add r6, r6, r3, asr #0xf
    add r7, r7, r4, asr #0xf
    mul r3, r9, r10
    mul r4, r5, r10
    add r5, r5, r3, asr #0xf
    add r9, r9, r4, asr #0xf
    mul r3, r8, r10
    mul r4, r6, r10
    add r6, r6, r3, asr #0xf
    mul r3, r7, r10
    add r8, r8, r4, asr #0xf
    add r7, r7, r3, asr #0xf
    mul r3, r10, r11
    mul r4, r5, r11
    add r5, r5, r3, asr #0xf
    add r10, r10, r4, asr #0xf
    mul r3, r9, r11
    mul r4, r6, r11
    add r6, r6, r3, asr #0xf
    add r9, r9, r4, asr #0xf
    mul r3, r8, r11
    mul r4, r7, r11
    add r7, r7, r3, asr #0xf
    add r8, r8, r4, asr #0xf
    mul r3, r11, ip
    mul r4, r5, ip
    add r5, r5, r3, asr #0xf
    add r11, r11, r4, asr #0xf
    mul r3, r10, ip
    mul r4, r6, ip
    add r6, r6, r3, asr #0xf
    add r10, r10, r4, asr #0xf
    mul r3, r9, ip
    mul r4, r7, ip
    add r7, r7, r3, asr #0xf
    mul r3, r8, ip
    add r9, r9, r4, asr #0xf
    add r8, r8, r3, asr #0xf
    mov r5, r5, asr #0x1
    rsb r5, r5, #0x0
    mov r6, r6, asr #0x1
    rsb r6, r6, #0x0
    mov r7, r7, asr #0x1
    rsb r7, r7, #0x0
    mov r8, r8, asr #0x1
    rsb r8, r8, #0x0
    mov r9, r9, asr #0x1
    rsb r9, r9, #0x0
    mov r10, r10, asr #0x1
    rsb r10, r10, #0x0
    mov r11, r11, asr #0x1
    rsb r11, r11, #0x0
    mov ip, ip, asr #0x1
    rsb ip, ip, #0x0
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
