/* compiler: 1.2/sp2p3  */
/* func_0200f124 from projets/code-lyoko/src/auto/func_0200f124.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020212d0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_02021430(void *);
s32 func_02021204(s32 arg0, s32 arg1) {
    u8 sp0[76];

    func_02021430(sp0);
    if (func_020212d0((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
