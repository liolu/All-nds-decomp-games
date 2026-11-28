/* CARDi_SetTask from projets/rayman-rr/src/auto/CARDi_SetTask.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02021f8c(void *, s32);
extern void func_0202208c(void *);
extern M2C_UNK data_020eb1a0;
// clang-format off
asm void func_0200e644(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r4, =data_020eb1a0
    mov r5, r0
    ldr r1, [r4, #0x108]
    add r0, r4, #0x44
    bl func_02021f8c
    add r0, r4, #0x44
    str r0, [r4, #0x104]
    str r5, [r4, #0x40]
    ldr r1, [r4, #0x114]
    orr r1, r1, #0x8
    str r1, [r4, #0x114]
    bl func_0202208c
    add sp, sp, #0x4
    ldmia sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
