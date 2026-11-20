/* compiler: 1.2/sp2p3  */
/* func_0205b64c from projets/children-of-mana/src/auto/func_0205b64c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
extern s32 func_0205a108();
extern s32 func_0205a13c();
extern s32 func_0205a288();
extern s32 data_020a2d00;
s32 func_0205a210(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020a2d00 == -1) {
        temp_r4 = func_0205a13c();
        if (func_0205a288() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_0205a108() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020a2d00 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020a2d00;
}
