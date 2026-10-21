#include "m2c.h"

extern M2C_UNK data_021478e0;

s32 func_020049ec(void) {
    return M2C_FIELD(&data_021478e0, s32 *, 0x20) = (s32) (M2C_FIELD(&data_021478e0, s32 *, 0x20) + 1);
}
