/* compiler: 1.2/sp2p3  */
/* func_020747e0 from projets/children-of-mana/src/auto/func_020747e0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204b148(s32, M2C_UNK, s32, M2C_UNK);
extern s32 func_0204b50c();
extern M2C_UNK func_0204b54c(s32);
extern M2C_UNK func_0204b5dc(M2C_UNK);
void func_02041efc(void *arg0) {
    s32 temp_r4;

    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_0204b148((*(s32 *) ((s8 *) (arg0) + (0x44))), 0, 1 << (*(s32 *) ((s8 *) (arg0) + (0x40))), 0);
    temp_r4 = func_0204b50c();
    func_0204b5dc(1);
    func_0204b54c(temp_r4);
}
