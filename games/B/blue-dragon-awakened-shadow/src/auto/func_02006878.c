/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_FreeLockID from https://github.com/tylzars/bakubrawlers libs/nds/src/os/os_spinlock.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02006878(unsigned int id) {
    ldr r3, =0x27fffb0
    cmp r0, #0x60
    bpl Lhi
    b Llo
Lhi:
    add r3, r3, #4
Llo:
    bpl Lsub60
    b Lcont
Lsub60:
    sub r0, r0, #0x60
Lcont:
    bmi Lsub40
    b Lbit
Lsub40:
    sub r0, r0, #0x40
Lbit:
    mov r1, #0x80000000
    mov r1, r1, lsr r0
    ldr r2, [r3, #0]
    orr r2, r2, r1
    str r2, [r3, #0]
    bx lr
}
// clang-format on
