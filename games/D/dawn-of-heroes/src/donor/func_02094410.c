/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203f73c from projets/battle-of-giants-dinosaurs/src/auto/func_0203f73c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm void func_02094410(void) {
    mov     r12, #0x4000000
    ldr     r1, [r12, #0x208]
    str     r12, [r12, #0x208]
loop:
    ldrh    r0, [r12, #0x6]
    cmp     r0, #0x0
    bne     loop
    str     r1, [r12, #0x208]
    bx      lr
}
// clang-format on
