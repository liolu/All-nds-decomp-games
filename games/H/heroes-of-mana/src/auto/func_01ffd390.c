/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
extern void func_01ffd368();
// clang-format off
asm void func_01ffd390(void) {
    stmfd sp!, {lr}
    ldr r4, [r0, #-0x8]
    ldr r9, [r0, #0x0]
    add r4, r4, r9
    ldrb r9, [r4, #-0xff]
    ldrb r10, [r4, #0xff]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0x101]
    ldrb r7, [r4, #0xff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0x100]
    ldrb r8, [r4, #-0xff]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x1]
    ldrb r6, [r4, #-0x100]
    add r7, r7, r6
    mov r6, r7, asr #0x1
    strb r6, [r4, #0x0]
    ldr r4, [r0, #-0x4]
    ldr r9, [r0, #0x4]
    add r4, r4, r9
    bl func_01ffd368
    add r4, r4, #0x1
    bl func_01ffd368
    ldmfd sp!, {pc}
}
// clang-format on
