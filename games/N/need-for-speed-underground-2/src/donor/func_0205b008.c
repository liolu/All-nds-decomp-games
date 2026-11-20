/* compiler: 2.0/sp1p5  */
/* func_0205c5d8 from projets/children-of-mana/src/auto/func_0205c5d8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_0205aec8();
extern void func_0205aed8();
extern void r2();
extern char data_0217afdc[];
extern char data_0217afe0[];
extern char data_0217afe8[];
// clang-format off
asm void func_0205b008(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_0217afdc
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_0205aec8
    ldr r1, =data_0217afe0
    ldr r0, =data_0217afdc
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_0217afe8
    blx r2
    bl func_0205aed8
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
