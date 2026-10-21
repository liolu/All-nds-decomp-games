#include "m2c.h"

M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020caa3c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ccda8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32,
                      s32); /* extern */
extern M2C_UNK data_0216ce68;

void func_020787f8(void) {
    func_020ccda8(3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 6, 2, 6, 1, 4, 0, 1, 0, 0);
    func_0206c4b4(3, 0, 0x7F, 0, 0x1E, 0x100);
    func_020caa3c(3, 0, 0x10);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBB1) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBB1) + 1);
}
