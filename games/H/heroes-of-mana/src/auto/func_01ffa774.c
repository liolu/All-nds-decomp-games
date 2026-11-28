/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffa774(void) {
    ldr r4, [sp, #0x4]
    ldr r5, [r0, #-0x8]
    add r4, r4, r11
    ldr r9, [r0, #0x0]
    ldr r11, [sp, #0x0]
    add r4, r4, r9
    add r5, r5, r9
L_01ffa790:
    ldmia r4, {r6, r7}
    add r4, r4, #0x100
    subs r11, r11, #0x1
    stmia r5, {r6, r7}
    add r5, r5, #0x100
    bne L_01ffa790
    ldr r4, [sp, #0x8]
    ldr r5, [r0, #-0x4]
    add r4, r4, ip
    ldr r9, [r0, #0x4]
    ldr r11, [sp], #0xc
    add r4, r4, r9
    add r5, r5, r9
    mov r11, r11, lsr #0x1
L_01ffa7c8:
    ldmia r4, {r6, r7}
    add r4, r4, #0x100
    subs r11, r11, #0x1
    stmia r5, {r6, r7}
    add r5, r5, #0x100
    bne L_01ffa7c8
    ldmfd sp!, {r11, ip, pc}
}
// clang-format on
