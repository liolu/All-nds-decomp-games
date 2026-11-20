#include "m2c.h"

extern M2C_UNK data_02169fe0;

void func_0202519c(s32 arg0) {
    M2C_FIELD(&data_02169fe0, s32 *, 4) = (s32) (M2C_FIELD(&data_02169fe0, s32 *, 4) & ~(1 << arg0));
}
