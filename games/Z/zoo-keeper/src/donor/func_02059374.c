/* compiler: 1.2/sp2p3  */
/* func_02000ff4 from projets/children-of-mana/src/donor/func_02000ff4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02059240(M2C_UNK);
extern M2C_UNK func_0205b970();
extern M2C_UNK (*data_0206f0c4)();
extern s32 data_0206f0cc;
void func_02059374(M2C_UNK arg0) {
    if (data_0206f0cc == 0) {
        func_0205b970();
        if (data_0206f0c4 != ((void *) 0)) {
            data_0206f0c4();
            data_0206f0c4 = ((void *) 0);
        }
    }
    func_02059240(arg0);
}
