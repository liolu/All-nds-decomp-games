#include "m2c.h"

M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_0216be68;

void func_02061c80(void) {
    M2C_FIELD(&data_0216be68, s8 *, 0xB4) = 1;
    M2C_FIELD(&data_0216be68, s8 *, 0xAC) = 0xF;
    func_020cd4d8();
    func_020cd508(1, 1, 0);
}
