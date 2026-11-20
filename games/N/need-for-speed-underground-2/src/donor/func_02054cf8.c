/* compiler: 1.2/sp2p3  */
/* func_02073c60 from projets/children-of-mana/src/auto/func_02073c60.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
extern s32 data_02179e24;
s32 func_02054cf8(void) {
    s32 var_r0;
    s32 var_r3;

    var_r3 = 1;
    var_r0 = 0;
loop_1:
    if (!(data_02179e24 & var_r3)) {
        data_02179e24 |= var_r3;
        return var_r0;
    }
    var_r0 += 1;
    var_r3 *= 2;
    if (var_r0 >= 8) {
        return -1;
    }
    goto loop_1;
}
