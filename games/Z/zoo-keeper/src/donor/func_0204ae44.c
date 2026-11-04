/* compiler: 2.0/sp1p5  */
/* func_02016e58 from projets/crafting-mama/src/auto/func_02016e58.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0204ae44(void) {
    stmfd sp!, {r4, r5, r7}
    ldmia r0!, {r3}
    mov r7, r3, lsr #0x8
L_02016e64:
    cmp r7, #0x0
    ble L_02016ebc
    ldrb r4, [r0], #0x1
    ands r2, r4, #0x7f
    tst r4, #0x80
    bne L_02016e9c
    add r2, r2, #0x1
    sub r7, r7, r2
L_02016e84:
    ldrb r3, [r0], #0x1
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    subs r2, r2, #0x1
    bgt L_02016e84
    b L_02016e64
L_02016e9c:
    add r2, r2, #0x3
    sub r7, r7, r2
    ldrb r5, [r0], #0x1
L_02016ea8:
    swpb r4, r5, [r1]
    add r1, r1, #0x1
    subs r2, r2, #0x1
    bgt L_02016ea8
    b L_02016e64
L_02016ebc:
    ldmfd sp!, {r4, r5, r7}
    bx lr
}
// clang-format on
