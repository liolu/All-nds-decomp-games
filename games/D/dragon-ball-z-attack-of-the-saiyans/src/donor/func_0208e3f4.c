/* compiler: 2.0/sp1p5  */
/* func_02030bb0 from projets/blue-dragon-plus/src/auto/func_02030bb0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208c188(void *);
extern M2C_UNK func_0208e188(void *);
extern M2C_UNK func_02084830(M2C_UNK *);
extern M2C_UNK func_020848b4(M2C_UNK *);
extern M2C_UNK data_020deb70;
extern M2C_UNK data_020df1e8;
void func_0208e3f4(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != (*(s32 *) ((s8 *) (arg2) + (0x12C)))) {
        return;
    }
    func_02084830(&data_020df1e8);
    if ((*(s32 *) ((s8 *) (&data_020deb70) + (4))) != 0) {
        func_02084830((*(s32 *) ((s8 *) (&data_020deb70) + (4))) + 0x4C8);
    }
    func_0208e188(arg2);
    (*(s32 *) ((s8 *) (arg2) + (0x12C))) = 0;
    (*(s32 *) ((s8 *) (arg2) + (0x130))) = 0;
    (*(s8 *) ((s8 *) (arg2) + (0x124)))  = 0;
    if ((s32) (*(s32 *) ((s8 *) (arg2) + (0x120))) > 0) {
        func_0208c188(arg2);
        (*(s32 *) ((s8 *) (arg2) + (0x120))) = 0;
    }
    func_020848b4(&data_020df1e8);
    if ((*(s32 *) ((s8 *) (&data_020deb70) + (4))) == 0) {
        return;
    }
    func_020848b4((*(s32 *) ((s8 *) (&data_020deb70) + (4))) + 0x4C8);
}
