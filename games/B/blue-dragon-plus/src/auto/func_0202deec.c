#include "m2c.h"

extern M2C_UNK data_0215c100;

void func_0202deec(s32 arg0) {
    M2C_FIELD(&data_0215c100, s32 *, 4) = (s32) (M2C_FIELD(&data_0215c100, s32 *, 4) & ~(1 << arg0));
}
