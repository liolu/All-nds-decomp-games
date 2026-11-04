/* compiler: 1.2/sp2p3  */
/* func_02080b48 from projets/nintendogs-chihuahua-friends/src/auto/func_02080b48.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02048f3c();
extern M2C_UNK func_020495d8(M2C_UNK, s32);
extern M2C_UNK func_020495ec(M2C_UNK, s32);
extern s32 func_02049600(M2C_UNK);
extern s32 func_020496e8(M2C_UNK);
extern M2C_UNK func_02049fe8(s32);
extern s32 data_0206bc24;
void func_02049838(void) {
    func_020495ec(2, func_020496e8(2));
    func_020495d8(2, func_02049600(2));
    if ((data_0206bc24 != 0) && ((func_02048f3c() & 3) != 1)) {
        return;
    }
    func_02049fe8(0x0200002B);
}
