
extern void func_02006a3c();
// clang-format on

/* func_0200e4a0 from projets/rayman-rr/src/auto/func_0200e4a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02006a2c(void) {
    stmfd sp!, {r0, lr}
    bl func_02006a3c
    ldmfd sp!, {r0, lr}
    bx lr
}
