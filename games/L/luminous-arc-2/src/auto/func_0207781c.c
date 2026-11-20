#include "m2c.h"

M2C_UNK func_020017e0(s32, M2C_UNK);                /* extern */
M2C_UNK func_02037730(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205bd10(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_0211b744;
extern M2C_UNK data_0211b758;
extern M2C_UNK data_0211b76c;
extern M2C_UNK data_02158048;
extern s8 data_021701b8;

void func_0207781c(void) {
    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 7, 2, 6, 1, 4, 0, 1, 0, 0);
    func_02037730(0x7F, 0, 0, 0);
    func_020017e0(0x0400006C, -0x10);
    func_020017e0(0x0400106C, -0x10);
    func_0205bd10(&data_0211b744, &data_0211b758, &data_0211b76c, *(u16 *) 0x0400100E | 0x80000000, 0, 0, 1, 0, 0);
    data_021701b8                      = 0;
    M2C_FIELD(&data_02158048, u8 *, 1) = (u8) (M2C_FIELD(&data_02158048, u8 *, 1) + 1);
}
