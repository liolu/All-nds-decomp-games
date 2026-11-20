/* compiler: 1.2/sp2p3  */
/* func_0205b64c from projets/children-of-mana/src/auto/func_0205b64c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
extern s32 func_02048e34();
extern s32 func_02048e68();
extern s32 func_02048fb4();
extern s32 data_02064148;
s32 func_02048f3c(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_02064148 == -1) {
        temp_r4 = func_02048e68();
        if (func_02048fb4() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_02048e34() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_02064148 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_02064148;
}
