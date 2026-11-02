/* compiler: 2.0/sp1p5  */
/* func_02006a78 from projets/crafting-mama/src/auto/func_02006a78.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0205a5a8(void) {
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
