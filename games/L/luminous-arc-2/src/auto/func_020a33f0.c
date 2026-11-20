/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0205d874(s8);                          /* extern */
M2C_UNK func_0205dfd8(s32, s8);                     /* extern */
M2C_UNK func_020a3ab4(M2C_UNK);                     /* extern */
M2C_UNK func_020cc4f8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02109ed4;
extern M2C_UNK data_02154a24;
extern M2C_UNK data_02172940;

void func_020a33f0(void) {
    s32 var_r4;
    u8 temp_r0;

    func_0205d874(M2C_FIELD(&data_02172940, s8 *, 0x18));
    func_0205d874(M2C_FIELD(&data_02172940, s8 *, 0x19));
    var_r4 = M2C_FIELD(&data_02172940, s32 *, 4) + 8;
    func_0205dfd8(M2C_FIELD(&data_02172940, s32 *, 0) + var_r4, M2C_FIELD(&data_02172940, s8 *, 0x1A));
    do {
        temp_r0 = *(s8 *) (M2C_FIELD(&data_02172940, s32 *, 0) + var_r4);
        var_r4 += 1;
    } while (temp_r0 != 0);
    func_0205dfd8(M2C_FIELD(&data_02172940, s32 *, 0) + var_r4, M2C_FIELD(&data_02172940, s8 *, 0x1B));
    func_020a3ab4(1);
    func_0205dfd8(M2C_FIELD(&data_02109ed4, s32 *, 4), M2C_FIELD(&data_02172940, s8 *, 0x18));
    func_020cc4f8(&data_02154a24, 1, 3, 0, 0x4A, 0xD0, 1, 0x10);
    M2C_FIELD(&data_02154a24, u16 *, 4)   = (u16) (M2C_FIELD(&data_02154a24, u16 *, 4) & ~0xC00);
    M2C_FIELD(&data_02172940, s8 *, 0x1C) = 3;
    M2C_FIELD(&data_02172940, u8 *, 0x16) = (u8) (M2C_FIELD(&data_02172940, u8 *, 0x16) + 1);
}