#include "m2c.h"

extern M2C_UNK data_027e0104;

void func_0202b820(s32 arg0, s16 arg1) {
    M2C_FIELD(&data_027e0104, s16 *, 0x9A) = arg1;
    M2C_FIELD(&data_027e0104, s32 *, 0x9C) = arg0;
}
