#include "m2c.h"

extern M2C_UNK data_02031a48;

void func_02003758(s32 arg0) {
    M2C_FIELD(&data_02031a48, s32 *, 4) = (s32) (M2C_FIELD(&data_02031a48, s32 *, 4) & ~(1 << arg0));
}
