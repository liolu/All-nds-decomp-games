
extern void func_02006318();
extern void func_020063a8();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02006304(void) {
    stmfd sp!, {r0, lr}
    bl func_02006318
    bl func_020063a8
    ldmfd sp!, {r0, lr}
    bx lr
}
