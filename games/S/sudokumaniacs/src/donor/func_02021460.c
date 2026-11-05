/* compiler: 1.2/sp2p3  */
/* func_020548e4 from projets/children-of-mana/src/auto/func_020548e4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020214bc();
extern s32 data_0203fcb8;
void func_02021460(s32 arg0) {
    if (data_0203fcb8 != 0) {
        return;
    }
    data_0203fcb8 = 1;
    func_020214bc(arg0);
}
