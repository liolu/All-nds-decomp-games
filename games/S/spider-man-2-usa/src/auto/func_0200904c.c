#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006a60();
extern void func_020076f8();
extern void func_02007940();
extern void func_02007a58();
extern void func_02008668();
extern void func_02008738();
extern void func_02008ed8();
// clang-format off
asm void func_0200904c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldr ip, [r5, #0x380]
    sub r2, ip, #0xa
    cmp r2, #0x1
    addls sp, sp, #0x4
    movls r0, #0x0
    ldmlsfd sp!, {r4, r5, lr}
    bxls lr
    ldr r3, [r1, #0x4]
    mov r4, #0x0
    cmp r3, #0x2a
    addls pc, pc, r3, lsl #0x2
    b L_02009388
L_02009088:
    b L_02009388
    b L_0200915c
    b L_0200915c
    b L_02009388
    b L_02009388
    b L_02009388
    b L_0200915c
    b L_0200915c
    b L_0200936c
    b L_0200915c
    b L_0200915c
    b L_0200915c
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_020091d4
    b L_020091a4
    b L_020092b8
    b L_02009204
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_02009388
    b L_0200915c
    b L_02009134
    b L_02009134
    b L_02009134
L_02009134:
    ldr r1, [r5, #0x3b4]
    ldrb r1, [r1, #0x24]
    mov r1, r1, lsl #0x1e
    movs r1, r1, lsr #0x1f
    beq L_02009150
    bl func_02007940
    b L_02009154
L_02009150:
    bl func_02007a58
L_02009154:
    mov r4, #0x1
    b L_02009388
L_0200915c:
    ldr r2, [r1, #0x0]
    cmp r2, #0x0
    beq L_02009388
    cmp ip, #0x7
    beq L_02009184
    cmp ip, #0x8
    beq L_02009388
    cmp ip, #0x9
    beq L_02009388
    b L_02009198
L_02009184:
    cmp r3, #0x7
    beq L_02009388
    bl func_02008ed8
    mov r4, #0x1
    b L_02009388
L_02009198:
    bl func_02008ed8
    mov r4, #0x1
    b L_02009388
L_020091a4:
    cmp ip, #0x3
    beq L_02009388
    bl func_02006a60
    cmp r0, #0x0
    bne L_02009388
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    beq L_02009388
    mov r0, r5
    bl func_020076f8
    mov r4, #0x1
    b L_02009388
L_020091d4:
    cmp ip, #0x3
    beq L_02009388
    bl func_02006a60
    cmp r0, #0x0
    bne L_02009388
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    bne L_02009388
    mov r0, r5
    bl func_020076f8
    mov r4, #0x1
    b L_02009388
L_02009204:
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    bne L_020092ac
    cmp ip, #0x15
    addls pc, pc, ip, lsl #0x2
    b L_02009274
L_0200921c:
    b L_02009274
    b L_0200929c
    b L_02009274
    b L_0200929c
    b L_02009274
    b L_0200929c
    b L_0200929c
    b L_0200929c
    b L_0200929c
    b L_0200929c
    b L_02009274
    b L_02009274
    b L_0200929c
    b L_02009274
    b L_02009274
    b L_02009274
    b L_02009274
    b L_02009274
    b L_02009274
    b L_02009274
    b L_0200929c
    b L_0200929c
L_02009274:
    mov r0, r5
    bl func_02006a60
    cmp r0, #0x0
    bne L_02009290
    mov r0, r5
    bl func_020076f8
    b L_02009298
L_02009290:
    mov r0, r5
    bl func_02008738
L_02009298:
    mov r4, #0x1
L_0200929c:
    add r1, r5, #0x3d0
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02009388
L_020092ac:
    mov r0, #0x64
    str r0, [r5, #0x3cc]
    b L_02009388
L_020092b8:
    ldrb r0, [r5, #0x362]
    cmp r0, #0x0
    beq L_02009360
    cmp ip, #0x15
    addls pc, pc, ip, lsl #0x2
    b L_02009328
L_020092d0:
    b L_02009328
    b L_02009350
    b L_02009328
    b L_02009350
    b L_02009328
    b L_02009350
    b L_02009350
    b L_02009350
    b L_02009350
    b L_02009350
    b L_02009328
    b L_02009328
    b L_02009350
    b L_02009328
    b L_02009328
    b L_02009328
    b L_02009328
    b L_02009328
    b L_02009328
    b L_02009328
    b L_02009350
    b L_02009350
L_02009328:
    mov r0, r5
    bl func_02006a60
    cmp r0, #0x0
    bne L_02009344
    mov r0, r5
    bl func_020076f8
    b L_0200934c
L_02009344:
    mov r0, r5
    bl func_02008738
L_0200934c:
    mov r4, #0x1
L_02009350:
    add r1, r5, #0x3d0
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02009388
L_02009360:
    mov r0, #0x64
    str r0, [r5, #0x3cc]
    b L_02009388
L_0200936c:
    cmp ip, #0x11
    bne L_0200937c
    cmp ip, #0x12
    beq L_02009388
L_0200937c:
    mov r0, r5
    bl func_02008668
    mov r4, #0x1
L_02009388:
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
