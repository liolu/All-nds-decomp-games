
extern void func_02060080();
extern void func_02060110();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0206006c(void) {
    stmfd sp!, {r0, lr}
    bl func_02060080
    bl func_02060110
    ldmfd sp!, {r0, lr}
    bx lr
}
