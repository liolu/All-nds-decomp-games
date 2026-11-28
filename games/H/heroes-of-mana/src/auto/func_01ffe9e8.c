/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffe6b8();
extern void func_01ffe980();
// clang-format off
asm void func_01ffe9e8(void) {
    stmfd sp!, {r1, r4, lr}
    ldr r2, [r1, #0x6c]
    cmp r2, #0x1
    add r0, r3, #0x200
    str r4, [r1, #0x74]
    addne r3, r1, #0x28
    addne r4, r3, #0x20
    addeq r4, r1, #0x28
    addeq r3, r4, #0x20
    stmia r3, {r5, r6, r7, r8, r9, r10, r11, ip}
    mov r2, r4
    bl func_01ffe980
    stmfd sp!, {r5, r6, r7, r8, r9, r10, r11, ip}
    mov r2, r4
    bl func_01ffe980
    mov r2, #0x20
    bl func_01ffe6b8
    ldmfd sp!, {r5, r6, r7, r8, r9, r10, r11, ip}
    mov r2, #0x20
    bl func_01ffe6b8
    mov r2, r3
    bl func_01ffe980
    mov r2, #0x20
    bl func_01ffe6b8
    ldmia r3, {r5, r6, r7, r8, r9, r10, r11, ip}
    mov r2, #0x20
    bl func_01ffe6b8
    ldmfd sp!, {r1, r4, pc}
}
// clang-format on
