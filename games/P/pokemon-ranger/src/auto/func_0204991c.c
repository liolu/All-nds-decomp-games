#include "m2c.h"

extern void **data_020f18c8;

void func_0204991c(void *arg0) {
    M2C_FIELD(*data_020f18c8, M2C_UNK(**)(void **, M2C_UNK), 0x154)(data_020f18c8, 0);
    M2C_FIELD(arg0, s32 *, 0x1A1C) = 2;
    M2C_FIELD(arg0, s16 *, 0x1A20) = 0;
    M2C_FIELD(arg0, s8 *, 0x1AFC)  = 1;
    M2C_FIELD(arg0, s16 *, 0x1BA0) = 0;
}
