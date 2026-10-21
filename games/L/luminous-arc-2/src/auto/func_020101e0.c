#include "m2c.h"

extern M2C_UNK data_0214a2a0;

void func_020101e0(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(&data_0214a2a0, s32 *, 4) + (arg0 * 4)), s32 *, 0x18) = arg1;
}
