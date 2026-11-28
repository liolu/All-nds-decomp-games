/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
extern void func_01ffca34();
// clang-format off
asm void func_01ffcad8(void) {
    stmfd sp!, {lr}
    ldr r4, [r0, #-0x8]
    ldr r9, [r0, #0x0]
    add r4, r4, r9
    ldrb r9, [r4, #-0xff]
    ldrb r10, [r4, #0xeff]
    add r9, r9, r10
    add r9, r9, #0x1
    mov r5, r9, lsr #0x1
    bl func_01ff8530
    add r6, r5, r6, lsl #0x1
    strb r6, [r4, #0xf01]
    ldrb r7, [r4, #0xeff]
    add r7, r7, r6
    mov r7, r7, asr #0x1
    strb r7, [r4, #0xf00]
    ldrb r8, [r4, #-0xff]
    add r8, r8, r6
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x701]
    ldrb r6, [r4, #0x6ff]
    add r8, r8, r6
    mov r6, r8, asr #0x1
    strb r6, [r4, #0x700]
    ldrb r7, [r4, #-0x100]
    ldrb r8, [r4, #0x700]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x300]
    ldrb r7, [r4, #-0xff]
    ldrb r8, [r4, #0x701]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x301]
    ldrb r7, [r4, #-0x100]
    ldrb r8, [r4, #0x300]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x100]
    ldrb r7, [r4, #-0xff]
    ldrb r8, [r4, #0x301]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x101]
    ldrb r7, [r4, #-0x100]
    ldrb r8, [r4, #0x100]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x0]
    ldrb r7, [r4, #-0xff]
    ldrb r8, [r4, #0x101]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x1]
    ldrb r7, [r4, #0x100]
    ldrb r8, [r4, #0x300]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x200]
    ldrb r7, [r4, #0x101]
    ldrb r8, [r4, #0x301]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x201]
    ldrb r7, [r4, #0x300]
    ldrb r8, [r4, #0x700]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x500]
    ldrb r7, [r4, #0x301]
    ldrb r8, [r4, #0x701]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x501]
    ldrb r7, [r4, #0x300]
    ldrb r8, [r4, #0x500]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x400]
    ldrb r7, [r4, #0x301]
    ldrb r8, [r4, #0x501]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x401]
    ldrb r7, [r4, #0x500]
    ldrb r8, [r4, #0x700]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x600]
    ldrb r7, [r4, #0x501]
    ldrb r8, [r4, #0x701]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x601]
    ldrb r7, [r4, #0x700]
    ldrb r8, [r4, #0xf00]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xb00]
    ldrb r7, [r4, #0x701]
    ldrb r8, [r4, #0xf01]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xb01]
    ldrb r7, [r4, #0x700]
    ldrb r8, [r4, #0xb00]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x900]
    ldrb r7, [r4, #0x701]
    ldrb r8, [r4, #0xb01]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x901]
    ldrb r7, [r4, #0x700]
    ldrb r8, [r4, #0x900]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x800]
    ldrb r7, [r4, #0x701]
    ldrb r8, [r4, #0x901]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0x801]
    ldrb r7, [r4, #0x900]
    ldrb r8, [r4, #0xb00]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xa00]
    ldrb r7, [r4, #0x901]
    ldrb r8, [r4, #0xb01]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xa01]
    ldrb r7, [r4, #0xb00]
    ldrb r8, [r4, #0xf00]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xd00]
    ldrb r7, [r4, #0xb01]
    ldrb r8, [r4, #0xf01]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xd01]
    ldrb r7, [r4, #0xb00]
    ldrb r8, [r4, #0xd00]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xc00]
    ldrb r7, [r4, #0xb01]
    ldrb r8, [r4, #0xd01]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xc01]
    ldrb r7, [r4, #0xd00]
    ldrb r8, [r4, #0xf00]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xe00]
    ldrb r7, [r4, #0xd01]
    ldrb r8, [r4, #0xf01]
    add r8, r8, r7
    mov r8, r8, asr #0x1
    strb r8, [r4, #0xe01]
    ldr r4, [r0, #-0x4]
    ldr r9, [r0, #0x4]
    add r4, r4, r9
    bl func_01ffca34
    add r4, r4, #0x1
    bl func_01ffca34
    ldmfd sp!, {pc}
}
// clang-format on
