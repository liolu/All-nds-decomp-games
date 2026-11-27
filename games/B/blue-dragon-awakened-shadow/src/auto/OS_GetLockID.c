/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_GetLockID from https://github.com/tylzars/bakubrawlers libs/nds/src/os/os_spinlock.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm int OS_GetLockID(void) {
    ldr r3, =0x27fffb0
    ldr r1, [r3, #0]
    clz r2, r1
    cmp r2, #0x20
    bne Lm1
    b Lm2
Lm1:
    mov r0, #0x40
Lm2:
    bne Ltake
    add r3, r3, #4
    ldr r1, [r3, #0]
    clz r2, r1
    cmp r2, #0x20
    ldr r0, =0xfffffffd
    beq Lnone
    b Lsecond
Lnone:
    bx lr
Lsecond:
    mov r0, #0x60
Ltake:
    add r0, r0, r2
    mov r1, #0x80000000
    mov r1, r1, lsr r2
    ldr r2, [r3, #0]
    bic r2, r2, r1
    str r2, [r3, #0]
    bx lr
}
// clang-format on
