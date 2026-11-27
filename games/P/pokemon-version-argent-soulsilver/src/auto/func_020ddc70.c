#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021e40a8;

void func_020ddc70(s32 arg0) {
    M2C_FIELD(&data_021e40a8, s8 *, 0x2) = (s8) arg0;
}
