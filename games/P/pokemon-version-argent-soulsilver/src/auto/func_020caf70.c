/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b6acc from projets/eyeshield-21/src/auto/func_020b6acc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef int s32;
typedef struct {
    s32 _00, _01;
    s32 _10, _11;
} UnkMtx22;
extern void func_020caf70(UnkMtx22 *m);
// clang-format off
asm void func_020caf70(register UnkMtx22* m) {
    mov     r1, #0
    mov     r2, #0x1000
    mov     r3, #0
    stmia   r0!, {r2, r3}
    stmia   r0!, {r1, r2}
    bx      lr
}
// clang-format on
