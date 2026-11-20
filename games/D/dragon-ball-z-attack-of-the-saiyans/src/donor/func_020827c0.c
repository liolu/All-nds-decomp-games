/* compiler: 2.0/sp1p5  */
/* GXS_EndLoadBGExtPltt from projets/blue-dragon-awakened-shadow/src/auto/GXS_EndLoadBGExtPltt.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020814fc(M2C_UNK);
extern void func_02082f8c(M2C_UNK);
extern s32 data_0209f734;
extern s32 data_020d8560;
void func_020827c0(void) {
    if (data_0209f734 != -1) {
        func_02082f8c(data_0209f734);
    }
    func_020814fc(data_020d8560);
    data_020d8560 = 0;
}
