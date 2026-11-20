/* compiler: 2.0/sp1p5  */
/* func_0203ffe0 from projets/battle-of-giants-dinosaurs/src/auto/func_0203ffe0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0201e3b0(void) {
    mrs r0, cpsr
    orr r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}
// clang-format on
