#include "m2c.h"

extern M2C_UNK data_02173c2c;

void func_020ab30c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(&data_02173c2c, M2C_UNK(**)(), 0xC)(arg0);
}
