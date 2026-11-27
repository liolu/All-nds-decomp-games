#include "m2c.h"

extern M2C_UNK data_020e8c0c;

s32 func_02094d64(s32 arg0, s32 arg1) {
    if (M2C_FIELD(((arg1 * 0x14) + ((arg0 * 0x64) + (s32) &data_020e8c0c)), s16 *, 0xC) == -0x1000) {
        return 1;
    }
    return 0;
}
