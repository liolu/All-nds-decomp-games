/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8f90(void) {
    stmfd sp!, {r6, r7}
    ldr r9, [r0, #-0x8]
    add r9, r9, r8
    ldrb r6, [r9, #0x2ff]
    ldrb r7, [r9, #0x1ff]
    add r10, r6, r7
    add r10, r10, #0x1
    mov r10, r10, lsr #0x1
    strb r10, [r9, #0x300]
    ldrb r10, [r9, #0xff]
    add r6, r6, #0x2
    add r6, r6, r7, lsl #0x1
    add r6, r6, r10
    mov r6, r6, lsr #0x2
    strb r6, [r9, #0x301]
    add r6, r7, r10
    add r6, r6, #0x1
    mov r6, r6, lsr #0x1
    strb r6, [r9, #0x200]
    strb r6, [r9, #0x302]
    ldrb r6, [r9, #-0x1]
    add r7, r7, #0x2
    add r7, r7, r10, lsl #0x1
    add r7, r7, r6
    mov r7, r7, lsr #0x2
    strb r7, [r9, #0x201]
    strb r7, [r9, #0x303]
    add r7, r6, r10
    add r7, r7, #0x1
    mov r7, r7, lsr #0x1
    strb r7, [r9, #0x100]
    strb r7, [r9, #0x202]
    ldrb r7, [r9, #-0x101]
    add r10, r10, #0x2
    add r10, r10, r6, lsl #0x1
    add r10, r10, r7
    mov r10, r10, lsr #0x2
    strb r10, [r9, #0x101]
    strb r10, [r9, #0x203]
    add r10, r6, r7
    add r10, r10, #0x1
    mov r10, r10, lsr #0x1
    strb r10, [r9, #0x0]
    strb r10, [r9, #0x102]
    ldrb r10, [r9, #-0x100]
    add r6, r6, #0x2
    add r6, r6, r7, lsl #0x1
    add r6, r6, r10
    mov r6, r6, lsr #0x2
    strb r6, [r9, #0x1]
    strb r6, [r9, #0x103]
    ldrb r6, [r9, #-0xff]
    add r7, r7, #0x2
    add r7, r7, r10, lsl #0x1
    add r7, r7, r6
    mov r7, r7, lsr #0x2
    strb r7, [r9, #0x2]
    ldrb r7, [r9, #-0xfe]
    add r10, r10, #0x2
    add r10, r10, r6, lsl #0x1
    add r10, r10, r7
    mov r10, r10, lsr #0x2
    strb r10, [r9, #0x3]
    ldmfd sp!, {r6, r7}
    mov pc, lr
}
// clang-format on
