#include "m2c.h"

extern M2C_UNK data_027e0000;

void func_0201c5b0(void) {
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 0x2000);
}
