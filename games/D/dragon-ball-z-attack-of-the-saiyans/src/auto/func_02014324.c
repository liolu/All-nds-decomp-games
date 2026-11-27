#include "m2c.h"

extern M2C_UNK data_027e00b4;

void func_02014324(s16 arg0, s16 arg1) {
    M2C_FIELD(&data_027e00b4, s16 *, 0xC) = arg0;
    M2C_FIELD(&data_027e00b4, s16 *, 0xE) = arg1;
}
