/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
// clang-format off
asm void func_01ff9534(void) {
    stmfd sp!, {r4, r11, ip, lr}
    bl func_01ff8530
    mov r7, r6
    bl func_01ff8530
    add r11, r7, r6, lsl #0x8
    bic r6, r6, #0x1
    bic r7, r7, #0x1
    add ip, r7, r6, lsl #0x7
    bl func_01ff8530
    mov r8, r6
    bl func_01ff8530
    mov r7, r6
    bl func_01ff8530
    ldr r4, [r0, #-0x20]
    ldr r5, [r0, #-0x8]
    add r4, r4, r11
    ldr r9, [r0, #0x0]
    ldmia sp, {r11}
    add r4, r4, r9
    add r5, r5, r9
L_01ff9584:
    stmfd sp!, {r11}
    mov r11, #0x4
L_01ff958c:
    ldrb r9, [r4], #0x4
    ldrb r10, [r4, #-0x3]
    adds r9, r9, r8, lsl #0x1
    movlt r9, #0x0
    cmp r9, #0xff
    movgt r9, #0xff
    adds r10, r10, r8, lsl #0x1
    movlt r10, #0x0
    cmp r10, #0xff
    movgt r10, #0xff
    add r9, r9, r10, lsl #0x8
    ldrb r10, [r4, #-0x2]
    adds r10, r10, r8, lsl #0x1
    movlt r10, #0x0
    cmp r10, #0xff
    movgt r10, #0xff
    add r9, r9, r10, lsl #0x10
    ldrb r10, [r4, #-0x1]
    adds r10, r10, r8, lsl #0x1
    movlt r10, #0x0
    cmp r10, #0xff
    movgt r10, #0xff
    add r9, r9, r10, lsl #0x18
    str r9, [r5], #0x4
    subs r11, r11, #0x1
    bne L_01ff958c
    ldmfd sp!, {r11}
    add r4, r4, #0xf0
    add r5, r5, #0xf0
    subs r11, r11, #0x1
    bne L_01ff9584
    ldr r4, [r0, #-0x1c]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldmfd sp!, {r11}
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ff9628:
    stmfd sp!, {r11}
    mov r11, #0x4
L_01ff9630:
    ldrh r8, [r4, #0x0]
    ldrh r10, [r4, #0x2]
    add r4, r4, #0x4
    and r9, r8, #0xff
    mov r8, r8, lsr #0x8
    adds r9, r9, r7, lsl #0x1
    movlt r9, #0x0
    cmp r9, #0xff
    movgt r9, #0xff
    adds r8, r8, r6, lsl #0x1
    movlt r8, #0x0
    cmp r8, #0xff
    movgt r8, #0xff
    orr r9, r9, r8, lsl #0x8
    and ip, r10, #0xff
    mov r10, r10, lsr #0x8
    adds ip, ip, r7, lsl #0x1
    movlt ip, #0x0
    cmp ip, #0xff
    movgt ip, #0xff
    adds r10, r10, r6, lsl #0x1
    movlt r10, #0x0
    cmp r10, #0xff
    movgt r10, #0xff
    orr r9, r9, ip, lsl #0x10
    orr r9, r9, r10, lsl #0x18
    str r9, [r5], #0x4
    subs r11, r11, #0x1
    bne L_01ff9630
    ldmfd sp!, {r11}
    add r4, r4, #0xf0
    add r5, r5, #0xf0
    subs r11, r11, #0x1
    bne L_01ff9628
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
