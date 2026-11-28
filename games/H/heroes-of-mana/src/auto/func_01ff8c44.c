/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8c44(void) {
    ldrb r10, [r9, #-0x1]
    add r6, r6, r10
    ldrb r10, [r9, #0xff]
    add r6, r6, r10
    ldrb r10, [r9, #0x1ff]
    add r6, r6, r10
    ldrb r10, [r9, #0x2ff]
    add r6, r6, r10
    add r6, r6, #0x2
    add r7, r7, #0x1
    mov pc, lr
}
// clang-format on
