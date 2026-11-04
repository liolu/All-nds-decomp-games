/* compiler: 1.2/sp2p3  */
/* func_020548e4 from projets/children-of-mana/src/auto/func_020548e4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204dcdc();
extern s32 data_0206d8d8;
void func_0204dc0c(s32 arg0) {
    if (data_0206d8d8 != 0) {
        return;
    }
    data_0206d8d8 = 1;
    func_0204dcdc(arg0);
}
