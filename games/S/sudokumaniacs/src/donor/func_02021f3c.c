/* compiler: 1.2/sp2p3  */
/* func_0205d608 from projets/children-of-mana/src/auto/func_0205d608.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0201f6b4();
extern s32 func_0201f898(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0201f8c0(M2C_UNK, M2C_UNK *);
extern u16 data_0203fd30;
extern M2C_UNK data_0203fd34;
extern M2C_UNK func_02021fcc;
void func_02021f3c(void) {
    if (data_0203fd30 != 0) {
        return;
    }
    data_0203fd30 = 1;
    func_0201f6b4();
    (*(s16 *) ((s8 *) (&data_0203fd34) + (0x32))) = 0;
    (*(s16 *) ((s8 *) (&data_0203fd34) + (0x36))) = 0;
    (*(s16 *) ((s8 *) (&data_0203fd34) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (&data_0203fd34) + (0)))    = 0;
    (*(s32 *) ((s8 *) (&data_0203fd34) + (0x10))) = 0;
    (*(s16 *) ((s8 *) (&data_0203fd34) + (0x30))) = 0;
    (*(s16 *) ((s8 *) (&data_0203fd34) + (0x34))) = 0;
    do {

    } while (func_0201f898(6, 1) == 0);
    func_0201f8c0(6, &func_02021fcc);
}
