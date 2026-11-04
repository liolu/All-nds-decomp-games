/* compiler: 1.2/sp2p3  */
/* func_0205ab74 from projets/children-of-mana/src/auto/func_0205ab74.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02048310(void);
extern M2C_UNK func_02048400(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02048530(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_02048400(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        func_02048310();
    } while (func_02048400(arg0, arg1, arg2, arg3) > 0);
}
