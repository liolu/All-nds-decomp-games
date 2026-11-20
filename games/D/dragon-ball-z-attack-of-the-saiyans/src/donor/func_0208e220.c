/* compiler: 2.0/sp1p5  */
/* func_02034d50 from projets/blue-dragon-awakened-shadow/src/auto/func_02034d50.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208e104(void *);
extern M2C_UNK func_0208e284();
extern M2C_UNK func_0208e308(M2C_UNK *, void *);
extern M2C_UNK data_020deb70;
extern M2C_UNK data_020df200;
void func_0208e220(void *arg0) {
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0208e284(arg0);
    (*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x168)))(arg0);
    func_0208e308(&data_020df200, arg0);
    if ((*(s32 *) ((s8 *) (&data_020deb70) + (4))) != 0) {
        func_0208e308((*(s32 *) ((s8 *) (&data_020deb70) + (4))) + 0x4E0, arg0);
    }
    func_0208e104(arg0);
}
