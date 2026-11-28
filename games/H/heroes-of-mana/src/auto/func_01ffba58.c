/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffba58(void) {
    ldr r4, [sp, #0x4]
    ldr r5, [r0, #-0x8]
    add r4, r4, r11
    sub r4, r4, #0x1
    ldr r9, [r0, #0x0]
    ldr r11, [sp, #0x0]
    add r4, r4, r9
    add r5, r5, r9
L_01ffba78:
    ldr r6, [r4], #0x100
    ldrb r7, [r4, #-0xfc]
    subs r11, r11, #0x1
    mov r6, r6, lsr #0x8
    orr r6, r6, r7, lsl #0x18
    str r6, [r5], #0x100
    bne L_01ffba78
    ldr r4, [sp, #0x8]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldr r11, [sp], #0xc
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ffbab4:
    ldr r6, [r4], #0x100
    subs r11, r11, #0x1
    str r6, [r5], #0x100
    bne L_01ffbab4
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
