
extern void func_02005fcc();
extern void func_0200605c();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02005fb8(void) {
    stmfd sp!, {r0, lr}
    bl func_02005fcc
    bl func_0200605c
    ldmfd sp!, {r0, lr}
    bx lr
}
