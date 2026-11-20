/* compiler: 2.0/sp1p5  */
/* CTRDG_Init from projets/blue-dragon-awakened-shadow/src/auto/CTRDG_Init.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020853b4();
extern M2C_UNK func_020854c0(M2C_UNK, M2C_UNK *);
extern s32 func_0208550c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0208a158();
extern M2C_UNK func_0208a428(M2C_UNK);
extern M2C_UNK func_0208a524();
extern M2C_UNK func_0208a7c8(M2C_UNK *);
extern M2C_UNK data_020daf00;
extern M2C_UNK data_020dafe0;
extern M2C_UNK func_0208a718;
extern M2C_UNK func_0208a744;
extern M2C_UNK func_0208a7b4;
void func_0208a470(void) {
    if ((*(s32 *) ((s8 *) (&data_020daf00) + (8))) != 0) {
        return;
    }
    (*(s32 *) ((s8 *) (&data_020daf00) + (8))) = 1;
    func_0208a158();
    (*(s32 *) ((s8 *) (&data_020daf00) + (0xC))) = 0;
    func_020853b4();
    do {

    } while (func_0208550c(0xD, 1) == 0);
    func_020854c0(0xD, &func_0208a718);
    func_0208a524();
    func_020854c0(0xD, ((void *) 0));
    func_020854c0(0xD, &func_0208a744);
    (*(s32 *) ((s8 *) (&data_020daf00) + (0x18))) = 0;
    func_0208a7c8(&data_020dafe0);
    func_020854c0(0x11, &func_0208a7b4);
    func_0208a428(0);
}
