/* compiler: 2.0/sp1p5  */
/* OS_InitArenaEx from projets/blue-dragon-awakened-shadow/src/auto/OS_InitArenaEx.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0208475c();
extern s32 func_02084ca4(M2C_UNK);
extern s32 func_02084d88(M2C_UNK);
extern M2C_UNK func_02084e30(M2C_UNK, s32);
extern M2C_UNK func_02084e44(M2C_UNK, s32);
extern M2C_UNK func_02084ea0(s32);
extern M2C_UNK func_02084ea8(s32);
extern M2C_UNK data_020d887c;
void func_02084c38(void) {
    func_02084e30(2, func_02084ca4(2));
    func_02084e44(2, func_02084d88(2));
    if (((*(s32 *) ((s8 *) (&data_020d887c) + (4))) != 0) && ((func_0208475c() & 3) != 1)) {
        return;
    }
    func_02084ea0(0x0200002B);
    func_02084ea8(0x023E0021);
}
