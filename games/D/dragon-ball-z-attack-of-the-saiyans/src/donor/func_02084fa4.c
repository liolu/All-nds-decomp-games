/* compiler: 2.0/sp1p5  */
/* func_0203fd48 from projets/battle-of-giants-dinosaurs/src/auto/func_0203fd48.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02084fb8();
extern void func_02085048();
// clang-format off
asm void func_02084fa4(void) {
    stmfd sp!, {r0, lr}
    bl func_02084fb8
    bl func_02085048
    ldmfd sp!, {r0, lr}
    bx lr
}
// clang-format on
