#include "m2c.h"

extern M2C_UNK data_02156434;

s32 func_020230e4(s32 arg0) {
    return (0x30 * arg0) + M2C_FIELD(&data_02156434, s32 *, 8);
}
