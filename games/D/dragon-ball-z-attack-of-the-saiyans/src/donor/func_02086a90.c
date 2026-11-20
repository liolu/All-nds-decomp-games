/* compiler: 2.0/sp1p5  */
/* InitPXI from projets/blue-dragon-awakened-shadow/src/auto/InitPXI.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020851a0(M2C_UNK);
extern s32 func_02086b60();
extern M2C_UNK func_020854c0(M2C_UNK, M2C_UNK *);
extern s32 func_0208550c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02086a6c;
void func_02086a90(void) {
    func_020854c0(7, &func_02086a6c);
    if (func_02086b60() == 0) {
        return;
    }
    if (func_0208550c(7, 1) != 0) {
        return;
    }
    do {
        func_020851a0(0x64);
    } while (func_0208550c(7, 1) == 0);
}
