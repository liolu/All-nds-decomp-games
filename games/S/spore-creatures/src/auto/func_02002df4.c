#include "m2c.h"

s32 func_02002df4(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = arg1 + 0x60;
    if (((u32) M2C_FIELD((arg0 + ((temp_r2 >> 5) * 4)), u32 *, 0x344) >> (temp_r2 & 0x1F)) & 1) {
        return 1;
    }
    return 0;
}
