/* compiler: 1.2/sp2p3  */
/* func_0205bea0 from projets/children-of-mana/src/auto/func_0205bea0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0201d188();
extern M2C_UNK func_0201d6d4(M2C_UNK, s32);
extern M2C_UNK func_0201d6e8(M2C_UNK, s32);
extern s32 func_0201d6fc(M2C_UNK);
extern s32 func_0201d7e8(M2C_UNK);
extern M2C_UNK func_0201df64(s32);
extern M2C_UNK func_0201df6c(s32);
extern s32 data_0203dfc4;
void func_0201d940(void) {
    func_0201d6e8(2, func_0201d7e8(2));
    func_0201d6d4(2, func_0201d6fc(2));
    if ((data_0203dfc4 != 0) && ((func_0201d188() & 3) != 1)) {
        return;
    }
    func_0201df64(0x0200002B);
    func_0201df6c(0x023E0021);
}
