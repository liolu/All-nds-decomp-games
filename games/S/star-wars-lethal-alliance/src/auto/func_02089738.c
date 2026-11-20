#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020ec394;

void func_02089738(s32 arg0) {
    M2C_FIELD(&data_020ec394, s8 *, 0xC) = (s8) arg0;
}
