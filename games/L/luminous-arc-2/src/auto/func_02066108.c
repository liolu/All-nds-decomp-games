#include "m2c.h"

M2C_UNK func_02037730(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_0216ce68;

void func_02066108(void) {
    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 7, 2, 6, 1, 4, 0, 1, 0, 0);
    func_02037730(0x80, 0, 0, 0);
    func_020caa3c(3, 0, 0x10);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBA5) + 1);
}
