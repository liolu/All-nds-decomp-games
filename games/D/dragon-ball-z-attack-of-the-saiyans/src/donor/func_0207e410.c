/* compiler: 2.0/sp1p5  */
/* FS_Init from projets/blue-dragon-awakened-shadow/src/auto/FS_Init.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207ea10();
extern s32 data_020d84c8;
void func_0207e410(s32 arg0) {
    if (data_020d84c8 != 0) {
        return;
    }
    data_020d84c8 = 1;
    func_0207ea10(arg0);
}
