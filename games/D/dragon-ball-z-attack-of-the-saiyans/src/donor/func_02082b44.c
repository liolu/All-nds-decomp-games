/* compiler: 2.0/sp1p5  */
/* GX_EndLoadTexPltt from projets/blue-dragon-awakened-shadow/src/auto/GX_EndLoadTexPltt.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020812dc(M2C_UNK);
extern void func_02082f8c(M2C_UNK);
extern s32 data_0209f734;
extern M2C_UNK data_020d857c;
void func_02082b44(void) {
    if (data_0209f734 != -1) {
        func_02082f8c(data_0209f734);
    }
    func_020812dc((*(s32 *) ((s8 *) (&data_020d857c) + (0xC))));
    (*(s32 *) ((s8 *) (&data_020d857c) + (0xC))) = 0;
    (*(s32 *) ((s8 *) (&data_020d857c) + (8)))   = 0;
}
