#include "m2c.h"

M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02180a4c;
extern M2C_UNK data_02184a4c;

void func_020c9754(void) {
    if ((M2C_FIELD(&data_02184a4c, u8 *, 0x4D0) == M2C_FIELD(&data_02184a4c, u8 *, 0x598)) &&
        (M2C_FIELD(&data_02184a4c, u8 *, 0x4D1) == M2C_FIELD(&data_02184a4c, u8 *, 0x599))) {
        M2C_FIELD(&data_02180a4c, s8 *, 0x748) = 7;
        return;
    }
    func_0206c4b4(1, 0x400, 0x7F, 0x7F, 0, 0x100);
    M2C_FIELD(&data_02180a4c, s8 *, 0x748) = 7;
}
