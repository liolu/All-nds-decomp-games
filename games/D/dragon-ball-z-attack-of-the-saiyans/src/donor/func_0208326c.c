/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0204078c from projets/battle-of-giants-dinosaurs/src/auto/func_0204078c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
extern void func_0208326c(register const void *srcp, register void *destp, register u32 size);
// clang-format off
asm void func_0208326c(register const void *srcp, register void *destp, register u32 size) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10}
    add r10, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5
@L020D48C4:
    cmp r1, r12
    blt @L020D48D0
    b @L020D48D4
@L020D48D0:
    ldmia r0!, {r2, r3, r4, r5, r6, r7, r8, r9}
@L020D48D4:
    blt @L020D48DC
    b @L020D48E0
@L020D48DC:
    stmia r1!, {r2, r3, r4, r5, r6, r7, r8, r9}
@L020D48E0:
    blt @L020D48C4
@L020D48E4:
    cmp r1, r10
    blt @L020D48F0
    b @L020D48F4
@L020D48F0:
    ldmia r0!, {r2}
@L020D48F4:
    blt @L020D48FC
    b @L020D4900
@L020D48FC:
    stmia r1!, {r2}
@L020D4900:
    blt @L020D48E4
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10}
    bx lr
}
// clang-format on
