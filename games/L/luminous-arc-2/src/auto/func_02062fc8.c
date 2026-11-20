#include "m2c.h"

M2C_UNK func_02063658(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020cc4f8(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02156164;
extern M2C_UNK data_0216ce68;

void func_02062fc8(void) {
    func_020cc4f8(&data_02156164, 2, 0xC, 0, 0xD8, 0x10, 4, 0x1C0);
    func_02063658(0, 1);
    func_02063658(1, 1);
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAF) + 1);
}
