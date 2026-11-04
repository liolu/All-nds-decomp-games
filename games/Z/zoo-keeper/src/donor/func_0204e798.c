/* compiler: 1.2/sp2p3  */
/* func_0205d608 from projets/children-of-mana/src/auto/func_0205d608.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0204be7c();
extern s32 func_0204c060(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0204c088(M2C_UNK, M2C_UNK *);
extern u16 data_0206d944;
extern M2C_UNK data_0206d948;
extern M2C_UNK func_0204e828;
void func_0204e798(void) {
    if (data_0206d944 != 0) {
        return;
    }
    data_0206d944 = 1;
    func_0204be7c();
    (*(s16 *) ((s8 *) (&data_0206d948) + (0x32))) = 0;
    (*(s16 *) ((s8 *) (&data_0206d948) + (0x36))) = 0;
    (*(s16 *) ((s8 *) (&data_0206d948) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (&data_0206d948) + (0)))    = 0;
    (*(s32 *) ((s8 *) (&data_0206d948) + (0x10))) = 0;
    (*(s16 *) ((s8 *) (&data_0206d948) + (0x30))) = 0;
    (*(s16 *) ((s8 *) (&data_0206d948) + (0x34))) = 0;
    do {

    } while (func_0204c060(6, 1) == 0);
    func_0204c088(6, &func_0204e828);
}
