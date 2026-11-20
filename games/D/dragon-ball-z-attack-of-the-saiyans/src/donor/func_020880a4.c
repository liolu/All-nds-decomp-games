/* compiler: 2.0/sp1p5  */
/* func_0200f728 from projets/blue-dragon-awakened-shadow/src/auto/func_0200f728.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02088040(M2C_UNK, M2C_UNK *, s32 *);
extern M2C_UNK (*data_0209f77c)();
extern M2C_UNK func_02087cc4;
s32 func_020880a4(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02088040(arg0, &func_02087cc4, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_0209f77c();
    return sp0;
}
