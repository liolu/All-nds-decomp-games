#include "m2c.h"

extern M2C_UNK data_020dafa0;

void func_020433b4(s32 arg0) {
    if ((u32) (M2C_FIELD(&data_020dafa0, s32 *, 0x38) - 9) > 1U) {
        M2C_FIELD(&data_020dafa0, s32 *, 0x2C) = arg0;
    }
}
