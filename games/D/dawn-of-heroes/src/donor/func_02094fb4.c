/* compiler: 2.0/sp1p5  */
/* func_0203ffcc from projets/battle-of-giants-dinosaurs/src/auto/func_0203ffcc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02094fb4(void) {
    mrs r0, cpsr
    bic r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}
// clang-format on
