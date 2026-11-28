/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ffac44(void) {
    mov r9, #0x0
    ldr r4, [r0, #0x8]
    strb r9, [r4, #0x0]
    strb r9, [r4, #0x1]
    strb r9, [r4, #0x41]
    strb r9, [r4, #0x42]
    strb r9, [r4, #0x82]
    strb r9, [r4, #0x83]
    strb r9, [r4, #0xc3]
    strb r9, [r4, #0xc4]
    ldr r4, [r0, #0xc]
    strb r9, [r4, #0x0]
    strb r9, [r4, #0x21]
    ldmfd sp!, {pc}
}
// clang-format on
