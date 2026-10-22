#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffc5e8();
// clang-format off
asm void func_02045cc0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x64
    str r1, [sp, #0x0]
    ldr r1, =0x28cc
    mov r4, r0
    ldr r5, [sp, #0x0]
    ldr r3, =0xe66
    add r0, sp, #0x4c
    mov r2, #0x0
    str r5, [r4, #0x0]
    bl func_01ffc5e8
    add r0, sp, #0x4c
    add r3, r4, #0x4
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, #0x0
    ldr r3, =0xe66
    add r0, sp, #0x58
    mov r2, r1
    bl func_01ffc5e8
    add r1, r4, #0x10
    str r1, [sp, #0x4]
    mov r1, #0x2000
    str r1, [sp, #0x8]
    mov r1, #0xcc
    str r1, [sp, #0xc]
    mov r1, #0x12c0
    str r1, [sp, #0x10]
    mov r1, #0x4b0
    str r1, [sp, #0x14]
    mov r1, #0x384
    str r1, [sp, #0x18]
    mov r1, #0xc8
    str r1, [sp, #0x48]
    mov r1, #0x1f4
    str r1, [sp, #0x1c]
    mov r1, #0xfa0
    str r1, [sp, #0x20]
    mov r1, #0x19
    str r1, [sp, #0x24]
    mov r1, #0x1e
    str r1, [sp, #0x28]
    mov r1, #0x7d0
    str r1, [sp, #0x2c]
    mov r1, #0x190
    str r1, [sp, #0x30]
    mov r1, #0x4
    str r1, [sp, #0x34]
    add r1, r4, #0xe0
    ldr r0, [sp, #0x0]
    str r1, [sp, #0x44]
    mov r1, #0xc7
    str r1, [sp, #0x38]
    mov r1, #0x258
    cmp r0, #0x9
    str r1, [sp, #0x3c]
    mov r1, #0xba
    ldr r3, [sp, #0x4]
    add r0, sp, #0x58
    str r1, [sp, #0x40]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, [sp, #0x8]
    mov r9, #0x0
    str r0, [r4, #0x1c]
    str r0, [r4, #0x20]
    ldr r0, =0x733
    mov r8, #0x64
    str r0, [r4, #0x24]
    ldr r0, [sp, #0xc]
    mov r7, #0x32
    str r0, [r4, #0x28]
    str r9, [r4, #0x2c]
    str r0, [r4, #0x30]
    ldr r0, [sp, #0x10]
    mov r6, #0x1f40
    str r0, [r4, #0x34]
    str r0, [r4, #0x38]
    ldr r0, =0xfffff574
    mov r5, #0x1
    str r0, [r4, #0x3c]
    str r0, [r4, #0x40]
    ldr r0, [sp, #0x14]
    str r9, [r4, #0x44]
    str r0, [r4, #0x48]
    ldr r0, =0x1388
    ldr r10, =0xbb8
    str r0, [r4, #0x4c]
    ldr r0, =0x1324
    ldr r11, =0x1fe
    str r0, [r4, #0x50]
    ldr r0, =0x708
    mov lr, #0x2d0
    str r0, [r4, #0x54]
    ldr r0, =0xb54
    mov ip, #0x3c
    str r0, [r4, #0x58]
    ldr r0, =0x18ce
    str r9, [r4, #0x5c]
    str r0, [r4, #0x60]
    ldr r0, =0x1194
    str r0, [r4, #0x64]
    ldr r0, [sp, #0x18]
    str r0, [r4, #0x68]
    ldr r0, =0x708
    str r0, [r4, #0x6c]
    ldr r0, =0x5dc
    str r0, [r4, #0x70]
    ldr r0, [sp, #0x48]
    str r8, [r4, #0x74]
    str r0, [r4, #0x78]
    ldr r0, =0x578
    str r0, [r4, #0x7c]
    str r0, [r4, #0x80]
    ldr r0, [sp, #0x1c]
    str r0, [r4, #0x84]
    ldr r0, =0x15e
    str r0, [r4, #0x88]
    ldr r0, [sp, #0x20]
    str r0, [r4, #0x8c]
    ldr r0, [sp, #0x24]
    str r0, [r4, #0x90]
    ldr r0, [sp, #0x28]
    str r0, [r4, #0x94]
    ldr r0, =0x15e
    str r7, [r4, #0x98]
    str r0, [r4, #0x9c]
    ldr r0, [sp, #0x2c]
    str r0, [r4, #0xa0]
    ldr r0, =0x36b0
    str r6, [r4, #0xa4]
    str r0, [r4, #0xa8]
    ldr r0, [sp, #0x30]
    str r0, [r4, #0xac]
    ldr r0, =0x1676
    str r0, [r4, #0xb0]
    ldr r0, =0x226
    str r0, [r4, #0xb4]
    ldr r0, [sp, #0x34]
    str r0, [r4, #0xb8]
    ldr r0, =0xf08
    str r0, [r4, #0xbc]
    ldr r0, [sp, #0x20]
    str r8, [r4, #0xc0]
    str r0, [r4, #0xc4]
    str r8, [r4, #0xc8]
    str r8, [r4, #0xcc]
    str r8, [r4, #0xd0]
    ldr r0, =0xda7
    str r8, [r4, #0xd4]
    str r0, [r4, #0xd8]
    ldr r0, [sp, #0x48]
    str r0, [r4, #0xdc]
    ldr r0, [sp, #0x44]
    swpb r1, r5, [r0]
    ldr r0, =0x380e
    str r0, [r4, #0xe4]
    str r9, [r4, #0xe8]
    str r9, [r4, #0xec]
    str r9, [r4, #0xf0]
    str r9, [r4, #0xf4]
    str r9, [r4, #0xf8]
    str r9, [r4, #0xfc]
    ldr r0, [sp, #0x38]
    str r9, [r4, #0x100]
    str r0, [r4, #0x104]
    ldr r0, [sp, #0x24]
    str r5, [r4, #0x108]
    str r0, [r4, #0x10c]
    ldr r0, [sp, #0x3c]
    str r0, [r4, #0x110]
    ldr r0, =0xfffff75d
    str r6, [r4, #0x114]
    str r0, [r4, #0x118]
    ldr r0, =0x2ee
    str r0, [r4, #0x11c]
    ldr r0, [sp, #0x1c]
    str r0, [r4, #0x120]
    ldr r0, [sp, #0x40]
    str r0, [r4, #0x124]
    ldr r0, =0x2ee
    str r0, [r4, #0x128]
    str r10, [r4, #0x12c]
    str r11, [r4, #0x130]
    str r7, [r4, #0x134]
    str lr, [r4, #0x138]
    ldr r0, =0x15e
    str ip, [r4, #0x13c]
    str r0, [r4, #0x140]
    bhi L_02046240
    ldr r0, [sp, #0x0]
    add pc, pc, r0, lsl #0x2
    mov r0, r0
    b L_02046240
    b L_02045fec
    b L_02046024
    b L_02046088
    b L_020460e8
    b L_02046130
    b L_02046190
    b L_020461dc
    b L_02046218
    b L_02046228
L_02045fec:
    mov r0, #0x1000
    str r0, [r4, #0x28]
    str r0, [r4, #0x30]
    str r0, [r4, #0x68]
    str r0, [r4, #0x6c]
    str r0, [r4, #0x70]
    str r0, [r4, #0x78]
    str r0, [r4, #0x7c]
    str r0, [r4, #0x80]
    str r0, [r4, #0x9c]
    ldr r0, [sp, #0x44]
    str r6, [r4, #0xd8]
    swpb r1, r9, [r0]
    b L_02046240
L_02046024:
    ldr r1, =0x2710
    ldr r0, =0x1c908
    str r1, [r4, #0x8c]
    str r5, [r4, #0xe8]
    str r5, [r4, #0xec]
    ldr r1, =0x620c
    str r0, [r4, #0xf0]
    ldr r0, =0x1d6b4
    str r1, [r4, #0xf4]
    ldr r1, =0x1be7c
    str r0, [r4, #0xf8]
    ldr r0, =0x71ac
    str r1, [r4, #0xfc]
    ldr r1, =0x1130
    str r0, [r4, #0x100]
    ldr r0, =0x2386
    str r1, [r4, #0xb0]
    str r0, [r4, #0x4]
    str r10, [r4, #0x12c]
    str r11, [r4, #0x130]
    str r7, [r4, #0x134]
    str lr, [r4, #0x138]
    str ip, [r4, #0x13c]
    str r9, [r4, #0x140]
    b L_02046240
L_02046088:
    ldr r0, =0x2904
    str r5, [r4, #0xec]
    str r0, [r4, #0xf0]
    ldr r1, =0x88b8
    str r5, [r4, #0xe8]
    ldr r0, =0x27100
    str r1, [r4, #0xf4]
    ldr r1, =0x2e18
    str r0, [r4, #0xf8]
    ldr r0, =0x71ac
    str r1, [r4, #0xfc]
    ldr r1, =0x1130
    str r0, [r4, #0x100]
    ldr r0, =0x2386
    str r1, [r4, #0xb0]
    str r0, [r4, #0x4]
    str r10, [r4, #0x12c]
    str r11, [r4, #0x130]
    str r7, [r4, #0x134]
    str lr, [r4, #0x138]
    ldr r0, =0xfffffa24
    str ip, [r4, #0x13c]
    str r0, [r4, #0x140]
    b L_02046240
L_020460e8:
    ldr r1, =0xffffec78
    str r5, [r4, #0xec]
    str r1, [r4, #0xf0]
    ldr r0, =0x71ac
    str r1, [r4, #0xfc]
    ldr r1, =0x1130
    str r0, [r4, #0x100]
    ldr r0, =0x2386
    str r1, [r4, #0xb0]
    str r0, [r4, #0x4]
    str r10, [r4, #0x12c]
    str r11, [r4, #0x130]
    str r7, [r4, #0x134]
    str lr, [r4, #0x138]
    ldr r0, =0xfffffdda
    str ip, [r4, #0x13c]
    str r0, [r4, #0x140]
    b L_02046240
L_02046130:
    ldr r1, =0x3326
    ldr r0, =0x145b
    str r1, [r4, #0x4]
    str r9, [r4, #0x8]
    str r0, [r4, #0xc]
    str r9, [r4, #0x10]
    ldr r0, =0x1361
    str r9, [r4, #0x14]
    str r0, [r4, #0x18]
    str r5, [r4, #0xe8]
    ldr r0, =0x2968
    str r5, [r4, #0xec]
    ldr r1, =0xfa64
    str r0, [r4, #0xf4]
    ldr r0, =0x1b58
    str r1, [r4, #0xf8]
    str r0, [r4, #0x114]
    str r9, [r4, #0x12c]
    str r9, [r4, #0x130]
    str r9, [r4, #0x134]
    str r9, [r4, #0x138]
    str r9, [r4, #0x13c]
    str r9, [r4, #0x140]
    b L_02046240
L_02046190:
    ldr r1, =0x2ee0
    ldr r0, =0x6590
    str r1, [r4, #0x4]
    str r9, [r4, #0x8]
    str r10, [r4, #0xc]
    str r5, [r4, #0xe8]
    str r5, [r4, #0xec]
    ldr r1, =0xa08c
    str r0, [r4, #0xf0]
    ldr r0, =0x3c348
    str r1, [r4, #0xf4]
    str r0, [r4, #0xf8]
    str r10, [r4, #0x12c]
    str r11, [r4, #0x130]
    str r7, [r4, #0x134]
    str lr, [r4, #0x138]
    str ip, [r4, #0x13c]
    str r9, [r4, #0x140]
    b L_02046240
L_020461dc:
    str r10, [r4, #0x12c]
    str r11, [r4, #0x130]
    str r7, [r4, #0x134]
    str lr, [r4, #0x138]
    str ip, [r4, #0x13c]
    ldr r0, =0x252f
    str r7, [r4, #0x140]
    str r0, [r4, #0x4]
    mvn r0, #0x2d4
    ldr r1, =0xf14
    str r0, [r4, #0x8]
    ldr r0, =0xcd5
    str r1, [r4, #0xc]
    str r0, [r4, #0x18]
    b L_02046240
L_02046218:
    ldr r0, =0xed8
    str r5, [r4, #0xec]
    str r0, [r4, #0xf0]
    b L_02046240
L_02046228:
    str r10, [r4, #0x12c]
    str r11, [r4, #0x130]
    str r7, [r4, #0x134]
    str lr, [r4, #0x138]
    str ip, [r4, #0x13c]
    str r7, [r4, #0x140]
L_02046240:
    mov r0, r4
    add sp, sp, #0x64
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
