/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
extern void func_01ff9b40();
// clang-format off
asm void func_01ff9b98(void) {
    stmfd sp!, {lr}
    ldrb r9, [r4, #-0xf2]
    ldrb r10, [r4, #0x2fe]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0x30e]
    bl func_01ff9b40
    ldmfd sp!, {pc}
}
// clang-format on
