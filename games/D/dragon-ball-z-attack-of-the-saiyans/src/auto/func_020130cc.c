#include "m2c.h"

extern M2C_UNK data_0209f7a8;

s32 func_020130cc(s32 arg0) {
    return arg0 * (M2C_FIELD(&data_0209f7a8, u8 *, 0x3B) + 1);
}
