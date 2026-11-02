/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _ll_shl from https://github.com/Project-Holon/aletheia src/game/arm9/cw_runtime.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
// clang-format off
extern asm void func_0205ab14(void);
// clang-format on
// clang-format off
asm void func_0205ab14(void)
{
    ands r2, r2, #0x3f
    bxeq lr
    subs r3, r2, #0x20
    bge L_0209C098
    rsb r3, r2, #0x20
    mov r1, r1, lsl r2
    orr r1, r1, r0, lsr r3
    mov r0, r0, lsl r2
    bx lr
L_0209C098:
    mov r1, r0, lsl r3
    mov r0, #0
    bx lr
}
// clang-format on
