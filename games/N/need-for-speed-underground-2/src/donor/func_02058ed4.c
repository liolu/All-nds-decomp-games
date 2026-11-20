/* compiler: 1.2/sp2p3  */
/* func_0205876c from projets/children-of-mana/src/auto/func_0205876c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02057b78(M2C_UNK);
extern void func_0205b558(M2C_UNK);
extern s32 data_020a2c94;
extern s32 data_0217acec;
extern s32 data_0217acf0;
void func_02058ed4(void) {
    if (data_020a2c94 != -1) {
        func_0205b558(data_020a2c94);
    }
    func_02057b78(data_0217acf0);
    data_0217acf0 = 0;
    data_0217acec = 0;
}
