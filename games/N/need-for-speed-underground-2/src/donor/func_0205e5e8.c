/* compiler: 1.2/sp2p3  */
/* func_020548e4 from projets/children-of-mana/src/auto/func_020548e4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205e698();
extern s32 data_0217cc58;
void func_0205e5e8(s32 arg0) {
    if (data_0217cc58 != 0) {
        return;
    }
    data_0217cc58 = 1;
    func_0205e698(arg0);
}
