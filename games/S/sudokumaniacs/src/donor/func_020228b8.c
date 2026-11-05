/* compiler: 1.2/sp2p3  */
/* func_0205dfc4 from projets/children-of-mana/src/auto/func_0205dfc4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020228f4(M2C_UNK, M2C_UNK *, s32 *);
extern M2C_UNK func_02022e04();
extern M2C_UNK func_02022dfc;
s32 func_020228b8(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020228f4(arg0, &func_02022dfc, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02022e04();
    return sp0;
}
