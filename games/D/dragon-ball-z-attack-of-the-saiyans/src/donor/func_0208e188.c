/* compiler: 2.0/sp1p5  */
/* func_02034cb8 from projets/blue-dragon-awakened-shadow/src/auto/func_02034cb8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02084830(M2C_UNK *);
extern M2C_UNK func_020848b4(M2C_UNK *);
extern M2C_UNK func_0208c204(void *);
extern M2C_UNK func_0208e220(void *);
extern M2C_UNK data_020deb70;
extern M2C_UNK data_020df1e8;
void func_0208e188(void *arg0) {
    func_02084830(&data_020df1e8);
    if ((*(s32 *) ((s8 *) (&data_020deb70) + (4))) != 0) {
        func_02084830((*(s32 *) ((s8 *) (&data_020deb70) + (4))) + 0x4C8);
    }
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) << 0x1E) >> 0x1F) != 0) {
        func_0208c204(arg0);
    }
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) << 0x1F) >> 0x1F) != 0) {
        (*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x170)))(arg0);
    }
    func_0208e220(arg0);
    func_020848b4(&data_020df1e8);
    if ((*(s32 *) ((s8 *) (&data_020deb70) + (4))) == 0) {
        return;
    }
    func_020848b4((*(s32 *) ((s8 *) (&data_020deb70) + (4))) + 0x4C8);
}
