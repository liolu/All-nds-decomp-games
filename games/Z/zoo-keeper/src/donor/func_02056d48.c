/* compiler: 1.2/sp2p3  */
/* func_0201ab78 from projets/code-lyoko/src/auto/func_0201ab78.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051e90(s32);
extern s32 func_020524e8(s32, s32, u16);
extern M2C_UNK func_020569fc(M2C_UNK);
extern M2C_UNK func_02058248();
extern u16 data_0206ef90;
extern s32 data_0206ef9c;
extern void *data_0206ef98;
extern void *data_0206ef94;
s32 func_02056d48(void) {
    s32 temp_r0;

    (*(s16 *) ((s8 *) (data_0206ef98) + (0x528))) = 0;
    (*(s16 *) ((s8 *) (data_0206ef98) + (0x52A))) = 0;
    (*(s16 *) ((s8 *) (data_0206ef98) + (0x526))) = 0;
    (*(s16 *) ((s8 *) (data_0206ef98) + (0x548))) = 0;
    func_020569fc(0xA);
    if ((*(s32 *) ((s8 *) (data_0206ef94) + (0x1320))) == 0) {
        do {
            temp_r0 = func_020524e8(data_0206ef9c, (*(s32 *) ((s8 *) (data_0206ef98) + (0x508))), data_0206ef90);
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_02051e90((*(s32 *) ((s8 *) (data_0206ef98) + (0x508))));
        (*(s8 *) ((s8 *) (data_0206ef98) + (0x50D))) = 1;
        return 0;
    }
    func_02051e90((*(s32 *) ((s8 *) (data_0206ef98) + (0x508))));
    (*(s8 *) ((s8 *) (data_0206ef98) + (0x50D))) = 1;
    func_02058248();
    return 0;
}
