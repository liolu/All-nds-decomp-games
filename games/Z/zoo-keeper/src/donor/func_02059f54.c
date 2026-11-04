/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200c8a0 from projets/children-of-mana/src/donor/func_0200c8a0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 *func_0205bc90(void);
extern u8 *func_0205bc9c(void);
// clang-format off
asm void func_02059f54(void)
{
    stmfd sp!, {lr}
    bl func_0205bc90
    mov r1, #0
    str r1, [r0]
    bl func_0205bc9c
    mov r1, #0
    str r1, [r0, #4]
    str r1, [r0, #8]
    str r1, [r0, #12]
    str r1, [r0, #16]
    str r1, [r0, #20]
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
