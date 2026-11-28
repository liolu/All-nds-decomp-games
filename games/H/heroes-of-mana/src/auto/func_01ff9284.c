/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8530();
// clang-format off
asm void func_01ff9284(void) {
    stmfd sp!, {r4, r5, r6, r11, ip, lr}
    bl func_01ff8530
    add r11, r11, r6
    bl func_01ff8530
    add ip, ip, r6
    bic r6, r11, #0x1
    bic r7, ip, #0x1
    ldr r8, [r0, #0x10]
    add r11, r11, ip, lsl #0x8
    add ip, r6, r7, lsl #0x7
    str r11, [r8, #0x0]
    and r4, r11, #0x3
    sub r8, pc, #0x74
    ldr r8, [r8, r4, lsl #0x2]
    mov pc, r8
}
// clang-format on
