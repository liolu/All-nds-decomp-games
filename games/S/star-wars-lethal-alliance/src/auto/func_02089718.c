#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020ec394;

void func_02089718(s32 arg0) {
    M2C_FIELD(&data_020ec394, s8 *, 0x2) = (s8) arg0;
}
