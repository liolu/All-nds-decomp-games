#include "m2c.h"

extern M2C_UNK data_020e5b18;

void func_02085820(s32 arg0) {
    M2C_FIELD(&data_020e5b18, s32 *, 8) = (s32) (M2C_FIELD(&data_020e5b18, s32 *, 8) & ~(1 << arg0));
}
