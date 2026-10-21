#include "m2c.h"

M2C_UNK func_020017e0(s32, M2C_UNK);                /* extern */
M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02037730(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205bd10(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_0205c27c(M2C_UNK);                         /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_0211b79c;
extern M2C_UNK data_0211b7b0;
extern M2C_UNK data_0211b7c4;
extern M2C_UNK data_02152a24;
extern M2C_UNK data_02158048;
extern s8 data_021701c0;

void func_020779f4(void) {
    s8 var_r3;

    func_020075b0(&data_02152a24, 0, 0x200);
    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 7, 2, 6, 1, 4, 0, 1, 0, 0);
    func_02037730(0x80, 0, 0, 0);
    func_020017e0(0x0400006C, -0x10);
    func_020017e0(0x0400106C, -0x10);
    func_0205bd10(&data_0211b79c, &data_0211b7b0, &data_0211b7c4, *(u16 *) 0x0400100E | 0x80000000, 0, 0, 1, 0, 0);
    if (func_0205c27c(0x10) != 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    data_021701c0                      = var_r3;
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
