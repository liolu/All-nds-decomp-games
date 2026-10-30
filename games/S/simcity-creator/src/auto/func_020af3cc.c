#include "m2c.h"

M2C_UNK func_02004ad4(M2C_UNK *, s32, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02004ce0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02004dbc(M2C_UNK *);                       /* extern */
M2C_UNK func_02004e88(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02162de0;
extern M2C_UNK data_02162e18;
extern M2C_UNK data_021632d8;
extern M2C_UNK data_027e0000;

void func_020af3cc(void) {
    if (func_02004dbc(&data_02162e18) != 0) {
        func_02004ce0(&data_02162e18, 0);
        func_02004ad4(&data_02162e18, M2C_FIELD(&data_02162de0, s32 *, 4), 0, &data_021632d8, 0x400, 0);
    }
    func_02004e88(&data_02162e18);
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 4);
}
