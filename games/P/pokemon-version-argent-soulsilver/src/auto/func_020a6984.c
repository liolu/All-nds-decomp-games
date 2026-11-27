#include "m2c.h"

extern M2C_UNK data_021e16c0;

void func_020a6984(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 4), s32 *, 0xA4);
}
