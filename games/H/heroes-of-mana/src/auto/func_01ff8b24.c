/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8b24(void) {
    stmfd sp!, {lr}
    ldr r7, [r0, #-0x4]
    ldr r9, [r0, #0x4]
    add r7, r7, r9
    add r8, r7, r4
    ldrb r9, [r8, #-0x102]
    ldrb r10, [r8, #-0x101]
    add r8, r7, r5, lsl #0x7
    ldrb r11, [r8, #-0x102]
    ldrb ip, [r8, #-0x101]
    add r9, r9, r11
    add r10, r10, ip
    add r9, r9, #0x1
    add r10, r10, #0x1
    mov r11, r9, lsr #0x1
    mov ip, r10, lsr #0x1
    add r8, r7, r4
    add r8, r8, r5, lsl #0x7
    strb r11, [r8, #-0x102]
    strb ip, [r8, #-0x101]
    sub r8, pc, #0x84
    mov r9, r4, lsr #0x3
    mov r10, r5, lsr #0x3
    add r9, r9, r10, lsl #0x2
    ldr r5, [r8, r9, lsl #0x2]
    mov r4, r7
    mov r6, r11
    mov lr, pc
    mov pc, r5
}
// clang-format on
