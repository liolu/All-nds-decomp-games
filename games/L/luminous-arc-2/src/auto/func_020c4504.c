#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201b0f4(M2C_UNK *, M2C_UNK *, u8);    /* extern */
M2C_UNK func_0205bd10(M2C_UNK *, M2C_UNK *, M2C_UNK *, u16, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
M2C_UNK func_020cd9e0();                            /* extern */
extern M2C_UNK data_02134810;
extern M2C_UNK data_0213482c;
extern M2C_UNK data_02134848;
extern M2C_UNK data_02134864;
extern M2C_UNK data_02134880;
extern M2C_UNK data_0213489c;
extern M2C_UNK data_02152a24;
extern M2C_UNK data_02180a4c;

void func_020c4504(void) {
    u8 spA0[52];
    u8 sp6E[50];
    u8 sp3C[50];
    u8 temp_r4;

    func_020075b0(&data_02152a24, 0, 0x200);
    func_020ccda8(2, 0, 0, 0, 0, 0, 0, 0, 1, 3, 6, 2, 5, 1, 4, 0, 1, 0, 0);
    func_020cd9e0();
    temp_r4 = M2C_FIELD(&data_02180a4c, u8 *, 0x747);
    func_0201b0f4(spA0, &data_02134810, temp_r4);
    func_0201b0f4(sp6E, &data_0213482c, temp_r4);
    func_0201b0f4(sp3C, &data_02134848, temp_r4);
    func_0205bd10(spA0, sp6E, sp3C, *(u16 *) 0x0400100E | 0x80000000, 0, 0, 0x10, 0, 0);
    func_0201b0f4(spA0, &data_02134864, temp_r4);
    func_0201b0f4(sp6E, &data_02134880, temp_r4);
    func_0201b0f4(sp3C, &data_0213489c, temp_r4);
    func_0205bd10(spA0, sp6E, sp3C, *(u16 *) 0x0400000E, 0, 0, 0x10, 0, 0);
}
