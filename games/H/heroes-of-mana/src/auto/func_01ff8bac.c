/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8bac(void) {
    ldr r9, [r0, #-0x8]
    add r9, r9, r8
    ldr r10, [r9, #-0x100]
    str r10, [r9, #0x0]
    str r10, [r9, #0x100]
    str r10, [r9, #0x200]
    str r10, [r9, #0x300]
    mov pc, lr
}
// clang-format on
