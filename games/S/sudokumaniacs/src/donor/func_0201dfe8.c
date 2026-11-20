/* compiler: 2.0/sp1p5  */
/* func_0203fd48 from projets/battle-of-giants-dinosaurs/src/auto/func_0203fd48.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_0201dffc();
extern void func_0201e08c();
// clang-format off
asm void func_0201dfe8(void) {
    stmfd sp!, {r0, lr}
    bl func_0201dffc
    bl func_0201e08c
    ldmfd sp!, {r0, lr}
    bx lr
}
// clang-format on
