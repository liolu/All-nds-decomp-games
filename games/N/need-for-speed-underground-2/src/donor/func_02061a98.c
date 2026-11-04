/* compiler: 1.2/sp2p3  */
/* func_02060f20 from projets/children-of-mana/src/auto/func_02060f20.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205cc80(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020614f4();
extern s32 func_02061834(M2C_UNK, M2C_UNK);
extern s32 func_02061938();
extern s16 data_0217d708;
extern s32 data_0217d70c;
s32 func_02061a98(void) {
    s32 temp_r0;

    if (func_02061938() != 0) {
        return 3;
    }
    temp_r0 = func_02061834(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020614f4();
    func_0205cc80(0xA, 0);
    data_0217d70c = 0;
    data_0217d708 = 0;
    return 0;
}
