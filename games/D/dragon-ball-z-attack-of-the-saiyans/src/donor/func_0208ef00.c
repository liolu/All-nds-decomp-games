/* compiler: 2.0/sp1p5  */
/* func_020316bc from projets/blue-dragon-plus/src/auto/func_020316bc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207e8a4(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK func_0207e8b4(void *, s32, M2C_UNK);
void func_0208ef00(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    func_0207e8b4(arg0 + 0x5C, (*(s32 *) ((s8 *) (arg0) + (0xA4))) + arg3, 0);
    func_0207e8a4(arg0 + 0x5C, arg1, arg2);
}
