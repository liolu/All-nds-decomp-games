#include "m2c.h"

extern M2C_UNK data_021da490;

s32 func_020bac7c(s32 arg0) {
    return (0x30 * arg0) + M2C_FIELD(&data_021da490, s32 *, 8);
}
