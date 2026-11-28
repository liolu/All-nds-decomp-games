/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffa86c(void) {
    ldr r4, [sp, #0x4]
    ldr r5, [r0, #-0x8]
    add r4, r4, r11
    ldr r9, [r0, #0x0]
    ldr r11, [sp, #0x0]
    add r4, r4, r9
    add r5, r5, r9
L_01ffa888:
    ldrh r6, [r4], #0x2
    ldrh r8, [r4, #0x4]
    ldr r7, [r4], #0xfe
    subs r11, r11, #0x1
    orr r6, r6, r7, lsl #0x10
    mov r7, r7, lsr #0x10
    orr r7, r7, r8, lsl #0x10
    stmia r5, {r6, r7}
    add r5, r5, #0x100
    bne L_01ffa888
    ldr r4, [sp, #0x8]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldr r11, [sp], #0xc
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ffa8d0:
    ldrh r6, [r4], #0x2
    ldrh r8, [r4, #0x4]
    ldr r7, [r4], #0xfe
    subs r11, r11, #0x1
    orr r6, r6, r7, lsl #0x10
    mov r7, r7, lsr #0x10
    orr r7, r7, r8, lsl #0x10
    stmia r5, {r6, r7}
    add r5, r5, #0x100
    bne L_01ffa8d0
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
