/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8c18();
extern void func_01ff8c44();
// clang-format off
asm void func_01ff8c70(void) {
    stmfd sp!, {r6, r7, r8, lr}
    ldr r9, [r0, #-0x8]
    cmp r8, #0x0
    add r9, r9, r8
    moveq r6, #0x80
    beq L_01ff8ca4
    mov r6, #0x0
    mov r7, #0x1
    movs r10, r8, lsl #0x18
    blne func_01ff8c44
    movs r10, r8, lsr #0x8
    blne func_01ff8c18
    mov r6, r6, lsr r7
L_01ff8ca4:
    orr r6, r6, r6, lsl #0x8
    orr r6, r6, r6, lsl #0x10
    str r6, [r9, #0x0]
    str r6, [r9, #0x100]
    str r6, [r9, #0x200]
    str r6, [r9, #0x300]
    ldmfd sp!, {r6, r7, r8, pc}
}
// clang-format on
