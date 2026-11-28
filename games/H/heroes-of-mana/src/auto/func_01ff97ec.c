/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff97ec(void) {
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
    strb r9, [r4, #0x82]
    strb r9, [r4, #0x83]
    strb r9, [r4, #0x84]
    strb r9, [r4, #0x85]
    strb r9, [r4, #0xc3]
    strb r9, [r4, #0xc4]
    strb r9, [r4, #0xc5]
    strb r9, [r4, #0xc6]
    ldr r4, [r0, #0xc]
    strb r9, [r4, #0x0]
    strb r9, [r4, #0x1]
    strb r9, [r4, #0x21]
    strb r9, [r4, #0x22]
    ldmfd sp!, {pc}
}
// clang-format on
