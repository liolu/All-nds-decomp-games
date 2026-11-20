#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0209062c;

void func_020692ac(s32 arg0) {
    M2C_FIELD(&data_0209062c, s32 *, 0x10) = arg0;
}
