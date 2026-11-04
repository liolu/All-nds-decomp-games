/* compiler: 1.2/sp2p3  */
/* func_0205dea4 from projets/children-of-mana/src/auto/func_0205dea4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0204f040(M2C_UNK *, s32 *);
extern M2C_UNK func_0204f5b4();
extern M2C_UNK func_0204f5ac;
s32 func_0204f004(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0204f040(&func_0204f5ac, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204f5b4();
    return sp0;
}
