#include "m2c.h"

extern s32 data_0211bcf4;

void func_02060f08(s32 arg0, s32 arg1) {
    M2C_FIELD((data_0211bcf4 + (arg0 * 4)), s32 *, 0x18) = arg1;
}
