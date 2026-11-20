#include "m2c.h"

M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_02152c24;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_020d3f90(void) {
    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 6, 2, 6, 1, 4, 0, 1, 0, 1);
    M2C_FIELD(&data_02152c24, s16 *, 4) = 0;
    if (M2C_FIELD(&data_0216be68, u8 *, 0x4C) == 0) {
        M2C_FIELD(&data_0216be68, s8 *, 0x29) = 0;
        M2C_FIELD(&data_0216be68, s8 *, 0x28) = 0;
        func_0206c4b4(0, 4, 0x7F, 0, 0, 0x100);
        M2C_FIELD(&data_0216be68, u8 *, 0x4C) = 1U;
    }
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) + 1);
}
