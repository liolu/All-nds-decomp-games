#include "m2c.h"

s32 func_020637dc(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0216ce68;

void func_020633f0(void) {
    if (func_020637dc(1, 0) != 0) {
        M2C_FIELD(&data_0216ce68, s8 *, 0xBAF) = 8;
    }
}
