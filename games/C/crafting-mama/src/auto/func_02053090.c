#include "m2c.h"

extern M2C_UNK data_020ad9bc;

s32 func_02053090(s32 arg0) {
    return (0x30 * arg0) + M2C_FIELD(&data_020ad9bc, s32 *, 8);
}
