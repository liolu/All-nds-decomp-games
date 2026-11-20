/* compiler: 2.0/sp1p5  */
/* func_020098f0 from projets/blue-dragon-awakened-shadow/src/donor/func_020098f0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
asm void func_02092d28(void) {
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3}
    stmia r1!, {r2, r3}
    bx lr
}
// clang-format on
