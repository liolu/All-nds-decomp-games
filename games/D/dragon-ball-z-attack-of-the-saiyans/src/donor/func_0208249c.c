/* compiler: 2.0/sp1p5  */
/* GXS_LoadOBJPltt from projets/blue-dragon-awakened-shadow/src/auto/GXS_LoadOBJPltt.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_02082dc4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_02083198(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 data_0209f734;
void func_0208249c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0209f734 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02082dc4(data_0209f734, arg0, arg1 + 0x05000600, arg2);
        return;
    }
    func_02083198(arg0, arg1 + 0x05000600, arg2);
}
