/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02040708 from projets/battle-of-giants-dinosaurs/src/auto/func_02040708.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
extern void func_020831e8(register const void *srcp, register void *destp, register u32 size);
// clang-format off
asm void func_020831e8(register const void *srcp, register void *destp, register u32 size) {
    add r12, r1, r2
@L020D480C:
    cmp r1, r12
    blt @L020D4818
    b @L020D481C
@L020D4818:
    ldmia r0!, {r2}
@L020D481C:
    blt @L020D4824
    b @L020D4828
@L020D4824:
    stmia r1!, {r2}
@L020D4828:
    blt @L020D480C
    bx lr
}
// clang-format on
