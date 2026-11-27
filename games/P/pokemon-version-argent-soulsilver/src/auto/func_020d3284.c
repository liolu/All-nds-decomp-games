
extern void func_020d3298();
extern void func_020d3328();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020d3284(void) {
    stmfd sp!, {r0, lr}
    bl func_020d3298
    bl func_020d3328
    ldmfd sp!, {r0, lr}
    bx lr
}
