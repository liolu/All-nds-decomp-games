/* compiler: 1.2/sp2p3  */
/* func_0205d608 from projets/children-of-mana/src/auto/func_0205d608.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205ca74();
extern s32 func_0205cc58(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205cc80(M2C_UNK, M2C_UNK *);
extern u16 data_0217ccc4;
extern M2C_UNK data_0217ccc8;
extern M2C_UNK func_0205f408;
void func_0205f378(void) {
    if (data_0217ccc4 != 0) {
        return;
    }
    data_0217ccc4 = 1;
    func_0205ca74();
    (*(s16 *) ((s8 *) (&data_0217ccc8) + (0x32))) = 0;
    (*(s16 *) ((s8 *) (&data_0217ccc8) + (0x36))) = 0;
    (*(s16 *) ((s8 *) (&data_0217ccc8) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (&data_0217ccc8) + (0)))    = 0;
    (*(s32 *) ((s8 *) (&data_0217ccc8) + (0x10))) = 0;
    (*(s16 *) ((s8 *) (&data_0217ccc8) + (0x30))) = 0;
    (*(s16 *) ((s8 *) (&data_0217ccc8) + (0x34))) = 0;
    do {

    } while (func_0205cc58(6, 1) == 0);
    func_0205cc80(6, &func_0205f408);
}
