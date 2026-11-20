/* compiler: 2.0/sp1p5  */
/* func_0203fff4 from projets/battle-of-giants-dinosaurs/src/auto/func_0203fff4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02094fdc(void) {
    mrs r1, cpsr
    bic r2, r1, #0x80
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0x80
    bx lr
}
// clang-format on
