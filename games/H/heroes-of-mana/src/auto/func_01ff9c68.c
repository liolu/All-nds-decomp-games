/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff9c68(void) {
    mov r9, #0x0
    ldr r4, [r0, #0x8]
    strb r9, [r4, #0x0]
    strb r9, [r4, #0x1]
    strb r9, [r4, #0x2]
    strb r9, [r4, #0x3]
    strb r9, [r4, #0x41]
    strb r9, [r4, #0x42]
    strb r9, [r4, #0x43]
    strb r9, [r4, #0x44]
    ldr r4, [r0, #0xc]
    strb r9, [r4, #0x0]
    strb r9, [r4, #0x1]
    ldmfd sp!, {pc}
}
// clang-format on
