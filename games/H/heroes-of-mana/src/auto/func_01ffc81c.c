/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
// clang-format off
asm void func_01ffc81c(void) {
    stmfd sp!, {r4, r5, r6, r11, ip, lr}
    bl func_01ff8530
    add r11, r11, r6
    bl func_01ff8530
    add ip, ip, r6
    bic r6, r11, #0x1
    bic r7, ip, #0x1
    ldr r8, [r0, #0x10]
    add r11, r11, ip, lsl #0x8
    add ip, r6, r7, lsl #0x7
    str r11, [r8, #0x0]
    ands r4, r11, #0x1
    beq L_01ffc854
    b L_01ffc8c4
L_01ffc854:
    ldr r4, [sp, #0x4]
    ldr r5, [r0, #-0x8]
    add r4, r4, r11
    ldr r9, [r0, #0x0]
    ldr r11, [sp, #0x0]
    add r4, r4, r9
    add r5, r5, r9
L_01ffc870:
    ldrh r6, [r4, #0x0]
    add r4, r4, #0x100
    subs r11, r11, #0x1
    strh r6, [r5, #0x0]
    add r5, r5, #0x100
    bne L_01ffc870
    ldr r4, [sp, #0x8]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldr r11, [sp], #0xc
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ffc8a8:
    ldrh r6, [r4, #0x0]
    add r4, r4, #0x100
    subs r11, r11, #0x1
    strh r6, [r5, #0x0]
    add r5, r5, #0x100
    bne L_01ffc8a8
    ldmfd sp!, {r11, ip, pc}
L_01ffc8c4:
    ldr r4, [sp, #0x4]
    ldr r5, [r0, #-0x8]
    add r4, r4, r11
    ldr r9, [r0, #0x0]
    ldr r11, [sp, #0x0]
    add r4, r4, r9
    add r5, r5, r9
L_01ffc8e0:
    ldrb r6, [r4, #0x0]
    ldrb r7, [r4, #0x1]
    add r4, r4, #0x100
    subs r11, r11, #0x1
    orr r6, r6, r7, lsl #0x8
    strh r6, [r5, #0x0]
    add r5, r5, #0x100
    bne L_01ffc8e0
    ldr r4, [sp, #0x8]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldr r11, [sp], #0xc
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ffc920:
    ldrh r6, [r4, #0x0]
    add r4, r4, #0x100
    subs r11, r11, #0x1
    strh r6, [r5, #0x0]
    add r5, r5, #0x100
    bne L_01ffc920
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
