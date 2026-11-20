#include "m2c.h"

extern M2C_UNK data_0206a230;

void func_0204152c(s32 arg0) {
    M2C_FIELD(&data_0206a230, s32 *, 0) = (s32) (M2C_FIELD(&data_0206a230, s32 *, 0) & ~(1 << arg0));
}
