#include "m2c.h"

extern M2C_UNK data_02179e24;

void func_02054cd8(s32 arg0) {
    M2C_FIELD(&data_02179e24, s32 *, 0) = (s32) (M2C_FIELD(&data_02179e24, s32 *, 0) & ~(1 << arg0));
}
