/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84ec();
// clang-format off
asm void func_01ff858c(void) {
    stmfd sp!, {r11, ip, lr}
    bl func_01ff84ec
    mov r11, r6
    bl func_01ff84ec
    mov ip, r6
    sub r8, pc, #0x3c
    ldr r8, [r8, r11, lsl #0x2]
    mov lr, pc
    mov pc, r8
}
// clang-format on
