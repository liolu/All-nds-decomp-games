/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffe430(void) {
    add r1, r3, #0x200
    add r1, r1, r7, lsl #0x2
    rsb r7, r6, #0x0
    mov r6, r6, lsl #0x1
    sub r7, r7, r6
L_01ffe444:
    ldrh r5, [r0], #0x2
    mov r11, #0xe
L_01ffe44c:
    ldr r10, [r1, #0x0]
    mov r2, r5, lsr r11
    and r2, r2, #0x3
    mla r2, r6, r2, r7
    add r10, r10, r2
    str r10, [r1], r9
    subs r11, r11, #0x2
    bge L_01ffe44c
    subs r8, r8, #0x1
    bne L_01ffe444
    ldmfd sp!, {r1, pc}
}
// clang-format on
