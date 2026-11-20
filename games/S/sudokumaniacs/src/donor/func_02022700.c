/* compiler: 1.2/sp2p3  */
/* func_0205dea4 from projets/children-of-mana/src/auto/func_0205dea4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0202273c(M2C_UNK *, s32 *);
extern M2C_UNK func_02022e04();
extern M2C_UNK func_02022dfc;
s32 func_02022700(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0202273c(&func_02022dfc, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02022e04();
    return sp0;
}
