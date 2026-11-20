#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020f3a34;

void func_020bd42c(s32 arg0) {
    M2C_FIELD(&data_020f3a34, s32 *, 0x24) = arg0;
}
