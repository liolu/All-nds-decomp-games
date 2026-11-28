/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa70c();
// clang-format off
asm void func_01ffb568(void) {
    ldr r5, [r0, #-0x20]
    ldr r6, [r0, #-0x1c]
    b L_01ffb58c
    ldr r5, [r0, #-0x18]
    ldr r6, [r0, #-0x14]
    b L_01ffb58c
    ldr r5, [r0, #-0x10]
    ldr r6, [r0, #-0xc]
    b L_01ffb58c
L_01ffb58c:
    mov r4, #0x4
    bl func_01ffa70c
    ldmfd sp!, {pc}
}
// clang-format on
