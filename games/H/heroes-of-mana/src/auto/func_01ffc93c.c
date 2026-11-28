/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
// clang-format off
asm void func_01ffc93c(void) {
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
L_01ffc98c:
    ldrb r9, [r4, #0x0]
    ldrb r10, [r4, #0x1]
    add r4, r4, #0x100
    adds r9, r9, r8, lsl #0x1
    movlt r9, #0x0
    cmp r9, #0xff
    movgt r9, #0xff
    adds r10, r10, r8, lsl #0x1
    movlt r10, #0x0
    cmp r10, #0xff
    movgt r10, #0xff
    add r9, r9, r10, lsl #0x8
    strh r9, [r5, #0x0]
    add r5, r5, #0x100
    subs r11, r11, #0x1
    bne L_01ffc98c
    ldr r4, [r0, #-0x1c]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldmfd sp!, {r11}
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ffc9ec:
    ldrh r8, [r4, #0x0]
    add r4, r4, #0x100
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
    strh r9, [r5, #0x0]
    add r5, r5, #0x100
    subs r11, r11, #0x1
    bne L_01ffc9ec
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
