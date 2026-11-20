/* compiler: 2.0/sp1p5  */
/* NNS_SndInit from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndInit.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02086430();
extern M2C_UNK func_0208896c(M2C_UNK *);
extern M2C_UNK func_02088984(M2C_UNK *);
extern M2C_UNK func_0208b7f4();
extern M2C_UNK func_0208ba7c();
extern M2C_UNK func_0208c49c();
extern M2C_UNK data_020db780;
extern M2C_UNK data_020db790;
extern M2C_UNK data_020db79c;
extern M2C_UNK func_0208b744;
extern M2C_UNK func_0208b77c;
void func_0208b618(void) {
    if ((*(s32 *) ((s8 *) (&data_020db780) + (0xC))) != 0) {
        return;
    }
    (*(s32 *) ((s8 *) (&data_020db780) + (0xC))) = 1;
    func_02086430();
    (*(M2C_UNK **) ((s8 *) (&data_020db780) + (0x10))) = &func_0208b744;
    (*(s32 *) ((s8 *) (&data_020db780) + (0x14)))      = 0;
    (*(M2C_UNK **) ((s8 *) (&data_020db780) + (0x1C))) = &func_0208b77c;
    (*(s32 *) ((s8 *) (&data_020db780) + (0x20)))      = 0;
    func_0208896c(&data_020db790);
    func_02088984(&data_020db79c);
    func_0208b7f4();
    func_0208c49c();
    func_0208ba7c();
    (*(s8 *) ((s8 *) (&data_020db780) + (0)))  = -1;
    (*(s32 *) ((s8 *) (&data_020db780) + (4))) = 1;
}
