#include "m2c.h"

extern M2C_UNK data_021d84e4;

void func_020b5ec4(void *arg0) {
    M2C_FIELD(&data_021d84e4, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(&data_021d84e4, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
}
