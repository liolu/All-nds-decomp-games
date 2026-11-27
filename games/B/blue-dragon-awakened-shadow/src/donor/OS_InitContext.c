/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_InitContext from https://github.com/pret/pmd-sky lib/NitroSDK/src/os/os_context.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;

    u32 sp_svc;

    CPContext cp_context;

} OSContext;
extern void OS_InitContext(register OSContext *context, register u32 newpc, register u32 newsp);
// clang-format off
#pragma thumb off
asm void OS_InitContext (register OSContext * context, register u32 newpc, register u32 newsp)
{
	add r1, r1, #4
	str r1, [context, #64 ]
	str newsp, [context, #68 ]
	sub newsp, newsp, #0x00000040
	tst newsp, #4
	bne _02079CA0
	b _02079CA4
_02079CA0:
	sub newsp, newsp, #4
_02079CA4:
	str newsp, [context, #56 ]
	ands r1, r1, #1
	bne _02079CB4
	b _02079CB8
_02079CB4:
	mov r1, #0x1f |0x20
_02079CB8:
	beq _02079CC0
	b _02079CC4
_02079CC0:
	mov r1, #0x1f |0x0
_02079CC4:
    str r1, [context, #0 ]
    mov r1, #0
    str r1, [context, #4 ]
    str r1, [context, #8 ]
    str r1, [context, #12 ]
    str r1, [context, #16 ]
    str r1, [context, #20 ]
    str r1, [context, #24 ]
    str r1, [context, #28 ]
    str r1, [context, #32 ]
    str r1, [context, #36 ]
    str r1, [context, #40 ]
    str r1, [context, #44 ]
    str r1, [context, #48 ]
    str r1, [context, #52 ]
    str r1, [context, #60 ]

	bx lr

}
// clang-format on
