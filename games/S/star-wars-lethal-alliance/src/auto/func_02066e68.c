
extern void func_02066e7c();
extern void func_02066f0c();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02066e68(void) {
    stmfd sp!, {r0, lr}
    bl func_02066e7c
    bl func_02066f0c
    ldmfd sp!, {r0, lr}
    bx lr
}
