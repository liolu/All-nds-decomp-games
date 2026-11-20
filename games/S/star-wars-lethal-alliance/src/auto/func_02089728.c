#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020ec394;

void func_02089728(s32 arg0) {
    M2C_FIELD(&data_020ec394, s8 *, 0x6) = (s8) arg0;
}
