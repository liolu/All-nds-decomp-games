#include "m2c.h"

extern M2C_UNK data_02072a3c;
extern M2C_UNK data_0215df54;

s32 func_0200b35c(void) {
    return (M2C_FIELD(&data_0215df54, s32 *, 4) * 0xC) + ((M2C_FIELD(&data_0215df54, s32 *, 0) * 0x24) + (s32) &data_02072a3c);
}
