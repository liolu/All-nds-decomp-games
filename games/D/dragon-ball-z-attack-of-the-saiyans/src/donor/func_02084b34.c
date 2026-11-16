/* compiler: 2.0/sp1p5  */
/* OS_InitArena from projets/blue-dragon-awakened-shadow/src/auto/OS_InitArena.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02084ca4(M2C_UNK);
extern s32 func_02084d88(M2C_UNK);
extern M2C_UNK func_02084e30(M2C_UNK, s32);
extern M2C_UNK func_02084e44(M2C_UNK, s32);
extern s32 data_020d887c;
void func_02084b34(void) {
    if (data_020d887c != 0) {
        return;
    }
    data_020d887c = 1;
    func_02084e30(0, func_02084ca4(0));
    func_02084e44(0, func_02084d88(0));
    func_02084e44(2, 0);
    func_02084e30(2, 0);
    func_02084e30(3, func_02084ca4(3));
    func_02084e44(3, func_02084d88(3));
    func_02084e30(4, func_02084ca4(4));
    func_02084e44(4, func_02084d88(4));
    func_02084e30(5, func_02084ca4(5));
    func_02084e44(5, func_02084d88(5));
    func_02084e30(6, func_02084ca4(6));
    func_02084e44(6, func_02084d88(6));
}
