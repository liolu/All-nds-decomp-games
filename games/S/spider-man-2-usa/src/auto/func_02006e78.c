#include "m2c.h"

extern s32 data_021581b0;

void func_02006e78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) (data_021581b0 + arg1);
}
