/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8bcc(void) {
    ldr r9, [r0, #-0x8]
    add r9, r9, r8
    ldrb r10, [r9, #-0x1]
    orr r10, r10, r10, lsl #0x8
    orr r10, r10, r10, lsl #0x10
    str r10, [r9, #0x0]
    ldrb r10, [r9, #0xff]
    orr r10, r10, r10, lsl #0x8
    orr r10, r10, r10, lsl #0x10
    str r10, [r9, #0x100]
    ldrb r10, [r9, #0x1ff]
    orr r10, r10, r10, lsl #0x8
    orr r10, r10, r10, lsl #0x10
    str r10, [r9, #0x200]
    ldrb r10, [r9, #0x2ff]
    orr r10, r10, r10, lsl #0x8
    orr r10, r10, r10, lsl #0x10
    str r10, [r9, #0x300]
    mov pc, lr
}
// clang-format on
