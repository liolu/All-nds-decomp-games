
extern void func_020b6378();
extern void func_020b6408();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020b6364(void) {
    stmfd sp!, {r0, lr}
    bl func_020b6378
    bl func_020b6408
    ldmfd sp!, {r0, lr}
    bx lr
}
