
extern void func_0201678c();
extern void func_0201680c();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02016778(void) {
    stmfd sp!, {r0, lr}
    bl func_0201678c
    bl func_0201680c
    ldmfd sp!, {r0, lr}
    bx lr
}
