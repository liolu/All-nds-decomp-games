/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffe478(void) {
    add r1, r3, #0x200
    add r1, r1, r7, lsl #0x2
    rsb r7, r6, #0x0
    mov r6, r6, lsl #0x1
    sub r7, r7, r6, lsl #0x1
    sub r7, r7, r6
    mov r9, #0x0
    mov r8, #0x8
L_01ffe498:
    ldrh r5, [r0], #0x2
    mov r11, #0xd
L_01ffe4a0:
    ldr r10, [r1, #0x0]
    mov r2, r5, lsr r11
    and r2, r2, #0x7
    mla r2, r6, r2, r7
    add r10, r10, r2
    str r10, [r1], #0xc
    subs r11, r11, #0x3
    bge L_01ffe4a0
    and r5, r5, #0x1
    orr r9, r5, r9, lsl #0x1
    subs r8, r8, #0x1
    bne L_01ffe498
    ldr r10, [r1, #0x0]
    mov r2, r9, lsr #0x5
    and r2, r2, #0x7
    mla r2, r6, r2, r7
    add r10, r10, r2
    str r10, [r1], #0xc
    ldr r10, [r1, #0x0]
    mov r2, r9, lsr #0x2
    and r2, r2, #0x7
    mla r2, r6, r2, r7
    add r10, r10, r2
    str r10, [r1, #0x0]
    ldmfd sp!, {r1, pc}
}
// clang-format on
