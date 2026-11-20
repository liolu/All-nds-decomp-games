/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205c534 from projets/children-of-mana/src/auto/func_0205c534.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_0204a078(void);
extern void func_0204a108(void);
// clang-format off
asm void func_0204a064(void)
{
    stmdb sp!, {lr}
    bl func_0204a078
    bl func_0204a108
    ldmia sp!, {lr}
    bx lr
}
// clang-format on
