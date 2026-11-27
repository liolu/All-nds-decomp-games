/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MIi_CpuClearFast from https://github.com/ctrl-cheeb-del/pokeheartgold lib/NitroSDK/src/mi/mi_memory.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
extern void func_020d4858(register u32 data, register void *destp, register u32 size);
// clang-format off
asm void func_020d4858(register u32 data, register void *destp, register u32 size) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9}
    add r9, r1, r2
    mov r12, r2, lsr #5
    add r12, r1, r12, lsl #5
    mov r2, r0
    mov r3, r2
    mov r4, r2
    mov r5, r2
    mov r6, r2
    mov r7, r2
    mov r8, r2
@L020D4884:
    cmp r1, r12
    blt @L020D4890
    b @L020D4894
@L020D4890:
    stmia r1!, {r0, r2, r3, r4, r5, r6, r7, r8}
@L020D4894:
    blt @L020D4884
@L020D4898:
    cmp r1, r9
    blt @L020D48A4
    b @L020D48A8
@L020D48A4:
    stmia r1!, {r0}
@L020D48A8:
    blt @L020D4898
    ldmia sp!, {r4, r5, r6, r7, r8, r9}
    bx lr
}
// clang-format on
