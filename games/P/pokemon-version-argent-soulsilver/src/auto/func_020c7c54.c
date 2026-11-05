#include "m2c.h"

extern M2C_UNK data_021df840;

void func_020c7c54(s32 arg0) {
    M2C_FIELD(&data_021df840, s32 *, 4) = (s32) (M2C_FIELD(&data_021df840, s32 *, 4) & ~(1 << arg0));
}
