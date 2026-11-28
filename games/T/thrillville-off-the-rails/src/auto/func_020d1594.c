#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02107a84;

void func_020d1594(s32 arg0) {
    M2C_FIELD(&data_02107a84, s32 *, 0x1C) = arg0;
}
