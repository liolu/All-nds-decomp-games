/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203e6b0 from projets/battle-of-giants-dinosaurs/src/auto/func_0203e6b0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_02059258(register const void *pSrc, register void *pDest);
// clang-format off
asm void func_02059258 (register const void *pSrc, register void *pDest)
{
#line 71
stmfd sp !, {r4 - r8}
ldmia r0 !, {r2 - r8, r12}
stmia r1, {r2 - r8, r12}
ldmia r0 !, {r2 - r8, r12}
stmia r1, {r2 - r8, r12}
ldmia r0 !, {r2 - r8, r12}
stmia r1, {r2 - r8, r12}
ldmia r0 !, {r2 - r8, r12}
stmia r1, {r2 - r8, r12}
ldmfd sp !, {r4 - r8}
bx lr

}
// clang-format on
