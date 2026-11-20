#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014b1c();
extern void func_02019a30();
extern void func_0202ea58();
extern void func_0202eb08();
extern void func_0202ef34();
extern void func_020380bc();
extern void func_0203a6d8();
extern void func_0203aca8();
extern void func_0204b9cc();
extern char data_02076ecc[];
extern char data_02076f68[];
extern char data_02076f74[];
extern char data_02076fa0[];
extern char data_02076fdc[];
extern char data_02076fe8[];
extern char data_020770b8[];
extern char data_020770e4[];
extern char data_02077124[];
extern char data_02077130[];
extern char data_0207716c[];
extern char data_02077190[];
extern char data_020771a0[];
extern char data_020771c4[];
extern char data_02077560[];
extern char data_0211ca88[];
extern char data_0211ca90[];
extern char data_0211ca98[];
extern char data_0215b3d4[];
// clang-format off
asm void func_0202ebe4(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    ldr r0, =data_0215b3d4
    ldr ip, [r8, #0x0]
    ldr r5, [sp, #0x18]
    ldr r0, [r0, #0x0]
    mov r4, r1
    mov r7, r2
    mov r6, r3
    cmp ip, #0xa
    addls pc, pc, ip, lsl #0x2
    b L_0202edcc
L_0202ec14:
    b L_0202ec40
    b L_0202ec58
    b L_0202ecd8
    b L_0202ecf0
    b L_0202ed20
    b L_0202ed08
    b L_0202ed58
    b L_0202ed70
    b L_0202ed88
    b L_0202eda0
    b L_0202edb8
L_0202ec40:
    ldr r0, =data_020770b8
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ec58:
    cmp r0, #0x0
    bne L_0202ec78
    ldr r0, =data_02076f68
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ec78:
    cmp r0, #0x1
    bne L_0202ec98
    ldr r0, =data_02077190
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ec98:
    cmp r0, #0x2
    bne L_0202ecb8
    ldr r0, =data_020771c4
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ecb8:
    cmp r0, #0x8
    bne L_0202edcc
    ldr r0, =data_020770e4
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ecd8:
    ldr r0, =data_02076f74
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ecf0:
    ldr r0, =data_02076fa0
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ed08:
    ldr r0, =data_02076fe8
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ed20:
    cmp r0, #0x2
    bne L_0202ed40
    ldr r0, =data_02077130
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ed40:
    ldr r0, =data_02076fdc
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ed58:
    ldr r0, =data_02076ecc
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ed70:
    ldr r0, =data_02077124
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202ed88:
    ldr r0, =data_020771a0
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202eda0:
    ldr r0, =data_02077560
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
    b L_0202edcc
L_0202edb8:
    ldr r0, =data_0207716c
    bl func_02019a30
    mov r1, r0
    mov r0, r4
    bl func_0203aca8
L_0202edcc:
    mov r0, r8
    bl func_0202ef34
    ldr r1, [r8, #0x0]
    mov r4, r0
    cmp r1, #0xa
    addls pc, pc, r1, lsl #0x2
    b L_0202eec4
L_0202ede8:
    b L_0202ee14
    b L_0202ee30
    b L_0202ee30
    b L_0202ee30
    b L_0202ee30
    b L_0202ee30
    b L_0202ee30
    b L_0202ee30
    b L_0202ee5c
    b L_0202ee98
    b L_0202ee30
L_0202ee14:
    mov r0, r7
    mov r1, r4
    bl func_020380bc
    ldr r1, [r8, #0x4]
    mov r0, r6
    bl func_020380bc
    b L_0202eec4
L_0202ee30:
    ldr r3, [r8, #0x4]
    ldr r1, =data_0211ca88
    mov r0, r7
    mov r2, r4
    bl func_0203a6d8
    ldr r2, [r8, #0x4]
    ldr r1, =data_0211ca88
    mov r0, r6
    mov r3, r2
    bl func_0203a6d8
    b L_0202eec4
L_0202ee5c:
    ldr r0, =data_0215b3d4
    bl func_02014b1c
    mov r2, #0x64
    mov r1, r0
    mul r0, r4, r2
    bl func_0204b9cc
    mov r2, r0
    ldr r1, =data_0211ca90
    mov r0, r7
    bl func_0203a6d8
    ldr r2, [r8, #0x4]
    ldr r1, =data_0211ca90
    mov r0, r6
    bl func_0203a6d8
    b L_0202eec4
L_0202ee98:
    mov r0, #0x64
    mul r0, r4, r0
    ldr r1, [r8, #0x4]
    bl func_0204b9cc
    mov r2, r0
    ldr r1, =data_0211ca90
    mov r0, r7
    bl func_0203a6d8
    ldr r1, =data_0211ca98
    mov r0, r6
    bl func_0203aca8
L_0202eec4:
    mov r0, r8
    bl func_0202eb08
    bl func_0202ea58
    swpb r0, r0, [r5]
    add r1, r5, #0x1
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
