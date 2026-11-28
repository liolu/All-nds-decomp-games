
extern void func_0202388c();
extern void func_0202391c();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02023878(void) {
    stmfd sp!, {r0, lr}
    bl func_0202388c
    bl func_0202391c
    ldmfd sp!, {r0, lr}
    bx lr
}
