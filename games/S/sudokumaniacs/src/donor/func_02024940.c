/* compiler: 1.2/sp2p3  */
/* func_0201e84c from projets/code-lyoko/src/auto/func_0201e84c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201df50(M2C_UNK, M2C_UNK);
extern s32 func_0201e3b0();
extern M2C_UNK func_0201e3c4(s32);
extern s32 func_02024c50();
extern s32 data_020406d0;
void func_02024940(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_0201e3b0();
    data_020406d0 = arg0;
    if (func_02024c50() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_0201df50(0xF000, var_r1);
    }
    func_0201e3c4(temp_r4);
}
