/* compiler: 1.2/sp2p3  */
/* func_02073cf8 from projets/children-of-mana/src/auto/func_02073cf8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205bdfc(s32, M2C_UNK);
extern s32 data_02179e28;
s32 func_02054db4(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_02179e28) {
        return 0;
    }
    func_0205bdfc(arg0, 0);
    data_02179e28 |= arg0;
    return 1;
}
