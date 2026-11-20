/* compiler: 2.0/sp1p5  */
/* func_0202ebc0 from projets/blue-dragon-plus/src/auto/func_0202ebc0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02086230(s32, M2C_UNK, s32, M2C_UNK);
extern M2C_UNK func_02086734(M2C_UNK);
extern M2C_UNK func_020868f0(s32);
extern s32 func_0208695c();
void func_0208c3e0(void *arg0) {
    s32 temp_r4;

    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_02086230((*(s32 *) ((s8 *) (arg0) + (0x44))), 0, 1 << (*(s32 *) ((s8 *) (arg0) + (0x40))), 0);
    temp_r4 = func_0208695c();
    func_02086734(1);
    func_020868f0(temp_r4);
}
