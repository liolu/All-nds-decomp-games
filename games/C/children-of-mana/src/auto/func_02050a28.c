#include "m2c.h"

extern M2C_UNK data_0211a5a0;

s32 func_02050a28(void) {
    if (M2C_FIELD(&data_0211a5a0, s32 *, 0xE0) != 0) {
        return 1;
    }
    return 0;
}
