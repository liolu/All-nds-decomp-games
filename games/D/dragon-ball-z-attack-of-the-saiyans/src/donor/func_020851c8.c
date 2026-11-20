/* compiler: 2.0/sp1p5  */
/* OS_InitReset from projets/blue-dragon-awakened-shadow/src/auto/OS_InitReset.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020853b4();
extern M2C_UNK func_020854c0(M2C_UNK, M2C_UNK *);
extern s32 func_0208550c(M2C_UNK, M2C_UNK);
extern M2C_UNK data_020d8954;
extern M2C_UNK func_0208521c;
void func_020851c8(void) {
    if ((*(u16 *) ((s8 *) (&data_020d8954) + (2))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_020d8954) + (2))) = 1U;
    func_020853b4();
    do {

    } while (func_0208550c(0xC, 1) == 0);
    func_020854c0(0xC, &func_0208521c);
}
