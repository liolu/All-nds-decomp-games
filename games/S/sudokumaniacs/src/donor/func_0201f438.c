/* compiler: 2.0/sp1p5  */
/* func_02063e24 from projets/children-of-mana/src/auto/func_02063e24.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern char data_0203e0e8[];
extern char data_0203e0ec[];
extern char data_0203e0f0[];
extern char data_0203e0f4[];
extern char data_0203e0f8[];
extern char data_0203e0fc[];
extern char data_0203e100[];
extern char data_0203e104[];
extern char data_0203e108[];
extern char data_0203e140[];
extern char data_0203e3c0[];
extern char data_0203f3c0[];
extern char data_0203fba8[];
extern char data_0203fc20[];
extern void func_0201ef24();
extern void func_0201f060();
extern void func_0201f220();
extern void func_0201f268();
extern void func_0201f600();
// clang-format off
asm void func_0201f438(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #4
    bl func_0201ef24
    ldr r3, =data_0203e3c0
    ldr r0, =data_0203e0e8
    mov r4, #0
    str r3, [r0]
    mov r1, r3
    mov r0, #0x18
L_020192a8:
    add r4, r4, #1
    mla r2, r4, r0, r1
    cmp r4, #0xff
    str r2, [r3], #0x18
    blt L_020192a8
    ldr r7, =data_0203f3c0
    mov r10, #0
    ldr r5, =data_0203e0f0
    ldr r4, =data_0203e0f4
    ldr lr, =data_0203e104
    ldr r12, =data_0203e0fc
    ldr r3, =data_0203e100
    ldr r1, =data_0203e0ec
    ldr r9, =data_0203fba8
    ldr r6, =data_0203e0f8
    ldr r2, =data_0203e108
    mov r8, #1
    ldr r0, =data_0203e140
    ldr r11, =data_0203fc20
    str r9, [r6]
    str r10, [r7, #0x7e8]
    str r10, [r5]
    str r10, [r4]
    str r10, [lr]
    str r10, [r12]
    str r10, [r3]
    str r8, [r2]
    str r10, [r1]
    str r0, [r11]
    bl func_0201f600
    mov r0, r8
    bl func_0201f268
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r2, #0x1d
    mov r1, r11
    str r2, [r0, #4]
    ldr r1, [r1]
    str r1, [r0, #8]
    bl func_0201f220
    mov r0, r8
    bl func_0201f060
    add sp, sp, #4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
