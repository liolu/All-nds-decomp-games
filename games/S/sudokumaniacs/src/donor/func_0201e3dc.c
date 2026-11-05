/* compiler: 2.0/sp1p5  */
/* func_0204000c from projets/battle-of-giants-dinosaurs/src/auto/func_0204000c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0201e3dc(void) {
    mrs r0, cpsr
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}
// clang-format on
