/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff85e8(void) {
    stmfd sp!, {r11, ip, lr}
    sub r11, pc, #0x30
    add ip, r0, #0x3a
    ldr r8, [r0, #0x0]
    mov r7, r5, lsr #0x2
L_01ff85fc:
    mov r6, r4, lsr #0x2
L_01ff8600:
    ldrb r10, [ip, #-0x5]
    ldrb r9, [ip, #-0x1]
    cmp r10, r9
    movgt r10, r9
    cmp r10, #0x9
    moveq r10, #0x2
    adds r3, r3, r3
    blo L_01ff8634
    sub r2, r2, #0x1
    strb r10, [ip], #0x1
    ldr r9, [r11, r10, lsl #0x2]
    add lr, pc, #0x24
    mov pc, r9
L_01ff8634:
    mov r9, r3, lsr #0x1d
    mov r3, r3, lsl #0x3
    sub r2, r2, #0x4
    cmp r9, r10
    addge r9, r9, #0x1
    strb r9, [ip], #0x1
    ldr r9, [r11, r9, lsl #0x2]
    mov lr, pc
    mov pc, r9
}
// clang-format on
