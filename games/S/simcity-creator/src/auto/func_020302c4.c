#include "m2c.h"

extern M2C_UNK data_020d9100;

void func_020302c4(s32 arg0) {
    M2C_FIELD(&data_020d9100, s32 *, 4) = (s32) (M2C_FIELD(&data_020d9100, s32 *, 4) & ~(1 << arg0));
}
