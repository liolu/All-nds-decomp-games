/* compiler: 2.0/sp1p5  */
/* func_020bd720 from projets/lego-star-wars-ii-the-original-trilogy/src/auto/func_020bd720.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef long long s64;
s32 func_020a80b0(s32 a0, s32 a1) {
    s32 scale                         = (*(s32 *) ((s8 *) (a0) + (0x10)));
    s32 delta                         = (s32) (((s64) scale * *(volatile s32 *) &a1 + 0x800) >> 12);
    s32 acc                           = (*(s32 *) ((s8 *) (a0) + (0x64)));
    s32 nacc                          = acc + delta;
    (*(s32 *) ((s8 *) (a0) + (0x64))) = nacc;
    return (nacc >> 12) - (acc >> 12);
}
