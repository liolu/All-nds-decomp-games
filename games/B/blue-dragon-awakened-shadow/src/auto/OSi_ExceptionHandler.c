/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OSi_ExceptionHandler from https://github.com/tylzars/bakubrawlers libs/nds/src/os/os_exception.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern void OSi_ExceptionHandler(void);
extern struct {
    u32 buf;
    u32 unk04;
    u32 unk08;
} OSi_DebuggerHandler;
extern void OSi_GetAndDisplayContext(void);
// clang-format off
asm void OSi_ExceptionHandler(void) {
    ldr ip, =OSi_DebuggerHandler
    ldr ip, [ip]
    cmp ip, #0
    bne Lcall
    b Lskip
Lcall:
    mov lr, pc
Lskip:
    bne Ljump
    b Lnojump
Ljump:
    bx ip
Lnojump:
    ldr ip, =0x2000000
    stmdb ip!, {r0, r1, r2, r3, sp, lr}
    and r0, sp, #1
    mov sp, ip
    mrs r1, cpsr
    and r1, r1, #0x1f
    teq r1, #0x17
    bne Ltry2
    bl OSi_GetAndDisplayContext
    b Ldone
Ltry2:
    teq r1, #0x1b
    bne Ldone
    bl OSi_GetAndDisplayContext
Ldone:
    ldr ip, =OSi_DebuggerHandler
    ldr ip, [ip]
    cmp ip, #0
Lspin:
    beq Lspin
Lnop:
    mov r0, r0
    b Lnop

    ldmfd sp!, {r0, r1, r2, r3, ip, lr}
    mov sp, ip
    bx lr
}
// clang-format on
void OSi_GetAndDisplayContext(void);
