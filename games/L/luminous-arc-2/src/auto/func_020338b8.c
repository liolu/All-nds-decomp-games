#include "m2c.h"

M2C_UNK func_0206c4b4(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_02181a4c;

void func_020338b8(void) {
    func_0206c4b4(1, 0x402, 0x7F, 0x7F, 0, 0x100);
    M2C_FIELD(&data_02181a4c, s8 *, 0x268) = 0;
    M2C_FIELD(&data_02181a4c, s8 *, 0x262) = 6;
    M2C_FIELD(&data_02181a4c, s8 *, 0x260) = 3;
}
