#include "m2c.h"

extern M2C_UNK data_02170324;

void func_02083a28(void) {
    if (M2C_FIELD(&data_02170324, s32 *, 0) != 9) {
        M2C_FIELD(&data_02170324, s32 *, 0) = 0;
        M2C_FIELD(&data_02170324, s32 *, 4) = 0;
    }
}
