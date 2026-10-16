#include "m2c.h"

extern M2C_UNK data_020b6f78;

void func_02052f10(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0)       = &data_020b6f78;
    M2C_FIELD(arg0, volatile s32 *, 4)   = arg1;
    M2C_FIELD(arg0, volatile s32 *, 8)   = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = 0;
}
