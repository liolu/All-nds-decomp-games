/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff84ec();
// clang-format off
asm void func_01ffce70(void) {
    stmfd sp!, {lr}
    bl func_01ff84ec
    sub r7, pc, #0x50
    ldr r6, [r7, r6, lsl #0x2]
    mov pc, r6
}
// clang-format on
