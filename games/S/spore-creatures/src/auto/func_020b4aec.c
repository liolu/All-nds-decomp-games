#include "m2c.h"

extern M2C_UNK data_020f1950;

s32 func_020b4aec(void) {
    return M2C_FIELD(&data_020f1950, s32 *, 0x20) = (s32) (M2C_FIELD(&data_020f1950, s32 *, 0x20) + 1);
}
