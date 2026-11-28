/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff9330(void) {
    ldr r4, [sp, #0x4]
    ldr r5, [r0, #-0x8]
    add r4, r4, r11
    sub r4, r4, #0x1
    ldr r9, [r0, #0x0]
    ldr r11, [sp, #0x0]
    add r4, r4, r9
    add r5, r5, r9
L_01ff9350:
    ldmia r4, {r6, r7, r8, r9}
    ldrb r10, [r4, #0x10]
    mov r6, r6, lsr #0x8
    orr r6, r6, r7, lsl #0x18
    mov r7, r7, lsr #0x8
    orr r7, r7, r8, lsl #0x18
    mov r8, r8, lsr #0x8
    orr r8, r8, r9, lsl #0x18
    mov r9, r9, lsr #0x8
    orr r9, r9, r10, lsl #0x18
    stmia r5, {r6, r7, r8, r9}
    add r4, r4, #0x100
    add r5, r5, #0x100
    subs r11, r11, #0x1
    bne L_01ff9350
    ldr r4, [sp, #0x8]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldr r11, [sp], #0xc
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ff93ac:
    ldmia r4, {r6, r7, r8, r9}
    add r4, r4, #0x100
    subs r11, r11, #0x1
    stmia r5, {r6, r7, r8, r9}
    add r5, r5, #0x100
    bne L_01ff93ac
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
