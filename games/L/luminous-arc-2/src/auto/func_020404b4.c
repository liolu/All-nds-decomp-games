#include "m2c.h"

extern M2C_UNK data_0217b34c;

void func_020404b4(s16 arg0, s16 arg1) {
    M2C_FIELD(&data_0217b34c, s16 *, 0x6C) = arg0;
    M2C_FIELD(&data_0217b34c, s16 *, 0x6E) = arg1;
}
