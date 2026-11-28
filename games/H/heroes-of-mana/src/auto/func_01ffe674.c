/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffe674(void) {
    ldrsh r0, [r4], #0x2
    ldrsh r3, [r4], #0x2
    ldrsh r2, [r4], #0x2
    add r5, r5, r0
    add r6, r6, r3
    add r7, r7, r2
    ldrsh r0, [r4], #0x2
    ldrsh r3, [r4], #0x2
    ldrsh r2, [r4], #0x2
    add r8, r8, r0
    add r9, r9, r3
    add r10, r10, r2
    ldrsh r0, [r4], #0x2
    ldrsh r3, [r4], #0x2
    add r11, r11, r0
    add ip, ip, r3
    mov pc, lr
}
// clang-format on
