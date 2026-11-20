/* compiler: 1.2/sp2p3  */
/* func_020636cc from projets/children-of-mana/src/auto/func_020636cc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201d5b0(M2C_UNK *);
extern M2C_UNK func_0201f438();
extern M2C_UNK func_0201f5d0();
extern s32 data_0203e0cc;
extern M2C_UNK data_0203e0d0;
void func_0201ee04(void) {
    if (data_0203e0cc != 0) {
        return;
    }
    data_0203e0cc = 1;
    func_0201d5b0(&data_0203e0d0);
    func_0201f438();
    func_0201f5d0();
}
