/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208af4c from projets/viva-pinata-pocket-paradise/src/donor/func_0208af4c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef int s32;
typedef s32 BOOL;
extern BOOL func_0205a700(void);
// clang-format off
asm BOOL func_0205a700(void) {
    mrc     p15, 0, r1, c1, c0, 0
    and     r0, r1, 0x1000
    mov     r0, r0, lsr 12
    orr     r1, r1, 0x1000
    mcr     p15, 0, r1, c1, c0, 0
    bx      lr
}
// clang-format on
