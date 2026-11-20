/* compiler: 2.0/sp1p5  */
/* CARD_InitPulledOutCallback from projets/blue-dragon-awakened-shadow/src/auto/CARD_InitPulledOutCallback.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020853b4();
extern M2C_UNK func_020854c0(M2C_UNK, M2C_UNK *);
extern M2C_UNK data_020daee0;
extern M2C_UNK func_02089f3c;
void func_02089f10(void) {
    func_020853b4();
    func_020854c0(0xE, &func_02089f3c);
    (*(s32 *) ((s8 *) (&data_020daee0) + (4))) = 0;
}
