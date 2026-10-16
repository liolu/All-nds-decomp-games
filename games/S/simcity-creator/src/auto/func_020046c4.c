#include "m2c.h"

extern M2C_UNK data_020d0c40;

s32 func_020046c4(void) {
    return M2C_FIELD(&data_020d0c40, s32 *, 0x20) = (s32) (M2C_FIELD(&data_020d0c40, s32 *, 0x20) + 1);
}
