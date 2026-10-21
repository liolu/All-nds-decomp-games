#include "m2c.h"

extern M2C_UNK data_020b0060;

void func_02057510(s32 arg0) {
    M2C_FIELD(&data_020b0060, s32 *, 4) = (s32) (M2C_FIELD(&data_020b0060, s32 *, 4) & ~(1 << arg0));
}
