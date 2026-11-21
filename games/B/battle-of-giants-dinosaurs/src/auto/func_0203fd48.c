
extern void func_0203fd5c();
extern void func_0203fdec();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0203fd48(void) {
    stmfd sp!, {r0, lr}
    bl func_0203fd5c
    bl func_0203fdec
    ldmfd sp!, {r0, lr}
    bx lr
}
