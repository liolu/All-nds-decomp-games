#include "m2c.h"

extern M2C_UNK data_02170324;

void func_02083a64(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_02170324, s32 *, 0) != 9) {
        M2C_FIELD(&data_02170324, s32 *, 0) = arg0;
        M2C_FIELD(&data_02170324, s32 *, 4) = arg1;
    }
}
