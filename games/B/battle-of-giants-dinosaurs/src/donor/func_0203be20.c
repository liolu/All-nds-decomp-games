/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_Copy33To43 from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/src/calls/MTX_Copy33To43.c (license: MIT),
 * reused by tools/donor_match.py */
// clang-format off
#pragma ipa file
asm void func_0203be20(const void *src, void *dst)
{
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    ldmia r0!, {r2, r3, r12}
    stmia r1!, {r2, r3, r12}
    mov r2, #0
    str r2, [r1]
    str r2, [r1, #4]
    str r2, [r1, #8]
    bx lr
}
// clang-format on
