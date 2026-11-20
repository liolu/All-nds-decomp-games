/* compiler: 1.2/sp2p3  */
/* func_020757b4 from projets/children-of-mana/src/auto/func_020757b4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02054764();
extern s32 func_02056818();
s32 func_02056868(s32 *arg0, s32 arg1) {
    func_02054764(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02056818(arg0) != 0) {
        return 1;
    }
    return 0;
}
