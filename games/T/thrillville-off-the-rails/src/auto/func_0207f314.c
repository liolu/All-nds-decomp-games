#include "m2c.h"

extern M2C_UNK data_020fa998;

void func_0207f314(s32 arg0) {
    M2C_FIELD(&data_020fa998, s32 *, 8) = (s32) (M2C_FIELD(&data_020fa998, s32 *, 8) & ~(1 << arg0));
}
