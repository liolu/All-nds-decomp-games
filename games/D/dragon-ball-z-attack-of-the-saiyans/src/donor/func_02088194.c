/* compiler: 2.0/sp1p5  */
/* func_0200f818 from projets/blue-dragon-awakened-shadow/src/auto/func_0200f818.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02087f78(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
extern M2C_UNK func_020889cc();
extern M2C_UNK *data_0209f77c;
extern M2C_UNK func_02087c68;
void func_02088194(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *temp_r4;

    temp_r4       = data_0209f77c;
    data_0209f77c = &func_02087c68;
    func_020889cc();
    data_0209f77c = temp_r4;
    func_02087f78(0xE, 0, 0, arg0, arg1);
}
