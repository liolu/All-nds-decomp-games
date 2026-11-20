/* compiler: 2.0/sp1p5  */
/* GXS_EndLoadOBJExtPltt from projets/blue-dragon-awakened-shadow/src/auto/GXS_EndLoadOBJExtPltt.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0208157c(M2C_UNK);
extern void func_02082f8c(M2C_UNK);
extern s32 data_0209f734;
extern M2C_UNK data_020d8560;
void func_0208287c(void) {
    if (data_0209f734 != -1) {
        func_02082f8c(data_0209f734);
    }
    func_0208157c((*(s32 *) ((s8 *) (&data_020d8560) + (0x18))));
    (*(s32 *) ((s8 *) (&data_020d8560) + (0x18))) = 0;
}
