/* compiler: 1.2/sp2p3  */
/* func_02018cb8 from projets/code-lyoko/src/auto/func_02018cb8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020494a4(M2C_UNK, s32);
extern M2C_UNK func_020494dc();
extern M2C_UNK func_020568a8(M2C_UNK, s32, M2C_UNK);
void func_02055f24(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020494a4(arg2, (arg0 + 0x1F) & ~0x1F);
    func_020494dc();
    func_020568a8(arg2, arg0, arg1);
}
