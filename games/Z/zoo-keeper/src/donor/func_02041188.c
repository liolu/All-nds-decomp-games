/* compiler: 1.2/sp2p3  */
/* func_020649e8 from projets/children-of-mana/src/auto/func_020649e8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02041268(M2C_UNK);
extern void func_02041298(M2C_UNK);
void func_02041188(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02041298(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02041268(arg0);
}
