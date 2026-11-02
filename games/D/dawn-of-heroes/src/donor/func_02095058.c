/* compiler: 2.0/sp1p5  */
/* func_02040070 from projets/battle-of-giants-dinosaurs/src/auto/func_02040070.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0209536c();
extern M2C_UNK func_02095420(M2C_UNK, M2C_UNK *);
extern s32 func_0209546c(M2C_UNK, M2C_UNK);
extern M2C_UNK data_020c9480;
extern M2C_UNK func_020950ac;
void func_02095058(void) {
    if ((*(u16 *) ((s8 *) (&data_020c9480) + (2))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_020c9480) + (2))) = 1U;
    func_0209536c();
    do {

    } while (func_0209546c(0xC, 1) == 0);
    func_02095420(0xC, &func_020950ac);
}
