/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
extern void func_01ff96bc();
// clang-format off
asm void func_01ff9718(void) {
    stmfd sp!, {lr}
    ldrb r9, [r4, #-0xf2]
    ldrb r10, [r4, #0x6fe]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0x70e]
    bl func_01ff96bc
    ldmfd sp!, {pc}
}
// clang-format on
