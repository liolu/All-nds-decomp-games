#include "m2c.h"

extern M2C_UNK data_02127214;

void func_020aa268(s32 arg0) {
    M2C_FIELD(&data_02127214, s32 *, 0x820) = (s32) (M2C_FIELD(&data_02127214, s32 *, 0x820) | (1 << arg0));
}
