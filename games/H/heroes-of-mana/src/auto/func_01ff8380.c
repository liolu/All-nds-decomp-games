/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9b2c();
// clang-format off
asm void func_01ff8380(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, lr}
    ldr r1, [r0, #0x0]
    mov r2, #0x0
    ldrh r3, [r1], #0x2
    add r0, r0, #0x24
    mov r3, r3, lsl #0x10
    ldmia r0, {r4, r5, r6, r7, r8}
    stmfd sp!, {r4, r5, r6, r7, r8}
    ldr ip, [r0, #0x58]
L_01ff83a4:
    stmfd sp!, {ip}
    ldr r11, [r0, #0x54]
L_01ff83ac:
    stmfd sp!, {r11}
    stmia r0, {r4, r5, r6, r7, r8}
    ldr r8, [r0, #0x10]
    mov r4, #0x0
    str r4, [r8, #0x0]
    ldr r4, [r8, #-0x4]
    ldr r6, [r8, #-0x48]
    ldr r8, [r8, #-0x44]
    mov r5, r4, asr #0x8
    mov r4, r4, lsl #0x18
    movs r4, r4, asr #0x18
    addlt r5, r5, #0x1
    mov r7, r6, asr #0x8
    mov r6, r6, lsl #0x18
    movs r6, r6, asr #0x18
    addlt r7, r7, #0x1
    mov r9, r8, asr #0x8
    mov r8, r8, lsl #0x18
    movs r8, r8, asr #0x18
    addlt r9, r9, #0x1
    add r10, r5, r7
    add r10, r10, r9
    cmp r5, r7
    movle r11, r5
    movle ip, r7
    movgt r11, r7
    movgt ip, r5
    cmp r11, r9
    movgt r11, r9
    cmp ip, r9
    movle ip, r9
    sub r10, r10, r11
    sub r10, r10, ip
    add r5, r4, r6
    add r5, r5, r8
    cmp r4, r6
    movle r11, r4
    movle ip, r6
    movgt r11, r6
    movgt ip, r4
    cmp r11, r8
    movgt r11, r8
    cmp ip, r8
    movle ip, r8
    sub r5, r5, r11
    sub r5, r5, ip
    mov r11, r5
    mov ip, r10
    bl func_01ff9b2c
    ldmia r0, {r4, r5, r6, r7, r8}
    add r4, r4, #0x10
    add r5, r5, #0x10
    add r6, r6, #0x4
    add r7, r7, #0x2
    add r8, r8, #0x4
    ldmfd sp!, {r11}
    subs r11, r11, #0x10
    bne L_01ff83ac
    ldr r9, [r0, #0x54]
    add r4, r4, #0x1000
    mov r9, r9, asr #0x4
    sub r4, r4, r9, lsl #0x4
    add r5, r5, #0x800
    sub r5, r5, r9, lsl #0x4
    add r6, r6, #0x104
    sub r6, r6, r9, lsl #0x2
    add r7, r7, #0x42
    sub r7, r7, r9, lsl #0x1
    add r8, r8, #0x48
    sub r8, r8, r9, lsl #0x2
    ldmfd sp!, {ip}
    subs ip, ip, #0x10
    bne L_01ff83a4
    ldmfd sp!, {r4, r5, r6, r7, r8}
    stmia r0, {r4, r5, r6, r7, r8}
    ldr r2, [r0, #-0x24]
    sub r0, r1, r2
    sub r0, r0, #0x2
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, ip, lr}
    mov pc, lr
}
// clang-format on
