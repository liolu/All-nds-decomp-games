#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9420();
extern void func_01ffa554();
extern void func_02008b44();
extern void func_02014ba4();
extern void func_020161b8();
extern void func_02036c0c();
extern void func_0203a6cc();
extern void func_0204c8cc();
extern void func_0204cd18();
extern void func_0204e508();
extern char data_020873b4[];
extern char data_020a84cc[];
extern char data_0215b3d4[];
// clang-format off
asm void func_02007940(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, =data_0215b3d4
    mov r1, #0x9
    mov r2, #0x1
    bl func_02014ba4
    ldr r0, =data_0215b3d4
    mov r1, #0xa
    mov r2, #0x1
    bl func_02014ba4
    bl func_02036c0c
    mov r0, #0x300
    bl func_0203a6cc
    movs r5, r0
    beq L_020079b4
    mov r0, #0x38
    add r4, r6, #0x298
    bl func_0203a6cc
    movs r1, r0
    beq L_020079a0
    ldr r1, =data_020a84cc
    mov r2, #0x0
    bl func_020161b8
    mov r1, r0
L_020079a0:
    mov r0, r5
    mov r2, r4
    mov r3, #0x1
    bl func_0204e508
    mov r5, r0
L_020079b4:
    mov r0, r5
    mov r1, #0x3
    bl func_01ffa554
    bl func_0204cd18
    ldr r1, =data_020873b4
    mov r2, #0x0
    bl func_0204c8cc
    mov r0, r6
    bl func_02008b44
    mov r0, r6
    bl func_01ff9420
    ldr r0, =0x27d
    mov r1, #0x16
    str r1, [r6, #0x380]
    add r1, r6, r0
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x80
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
