/* compiler: 1.2/sp2p3  */
/* func_02073cc0 from projets/children-of-mana/src/auto/func_02073cc0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205bdd0(s32, M2C_UNK);
extern s32 data_02179e28;
void func_02054d7c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0205bdd0(arg0, 0);
    data_02179e28 &= ~arg0;
}
