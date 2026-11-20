#include "m2c.h"

M2C_UNK func_0205c3f8(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0205c6b8(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_02114c48;

void func_020c97d0(void) {
    func_0205c3f8(M2C_FIELD(&data_02114c48, s32 *, 0x5C), 8, 2, 0x1E0);
    func_0205c6b8(M2C_FIELD(&data_02114c48, s32 *, 0x5C), 0, 0xC0, 0x88, 2, 0x1E0, 0x26, 0, 0);
}
