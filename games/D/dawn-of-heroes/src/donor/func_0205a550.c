/* compiler: 2.0/sp1p5  */
/* func_02006958 from projets/crafting-mama/src/auto/func_02006958.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0205a550(void) {
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
