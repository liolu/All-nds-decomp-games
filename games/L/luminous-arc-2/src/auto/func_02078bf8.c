#include "m2c.h"

M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216ce68;

void func_02078bf8(void) {
    func_020cd4d8();
    func_020cd508(2, 2, 1);
    M2C_FIELD(&data_0216ce68, s8 *, 0xBB1) = 0;
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA5) = 0x1A;
}
