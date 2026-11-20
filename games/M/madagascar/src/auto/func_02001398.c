#include "m2c.h"

extern s32 data_020cf5c8;

void func_02001398(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x2B8) = 1;
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) data_020cf5c8;
}
