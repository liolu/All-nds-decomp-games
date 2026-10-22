#include "m2c.h"

extern M2C_UNK data_020724f0;
extern M2C_UNK data_0215b3d4;

s32 func_0200b69c(void) {
    return (M2C_FIELD(&data_0215b3d4, s32 *, 4) * 0xC) + ((M2C_FIELD(&data_0215b3d4, s32 *, 0) * 0x24) + (s32) &data_020724f0);
}
