/* compiler: 1.2/sp2p3  */
/* func_02060f20 from projets/children-of-mana/src/auto/func_02060f20.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204c088(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205125c();
extern s32 func_020515f0(M2C_UNK, M2C_UNK);
extern s32 func_020516f4();
extern s16 data_0206e3e8;
extern s32 data_0206e3ec;
s32 func_02051890(void) {
    s32 temp_r0;

    if (func_020516f4() != 0) {
        return 3;
    }
    temp_r0 = func_020515f0(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0205125c();
    func_0204c088(0xA, 0);
    data_0206e3ec = 0;
    data_0206e3e8 = 0;
    return 0;
}
