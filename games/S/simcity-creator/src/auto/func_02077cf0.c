#include "m2c.h"

void func_02077cf0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    if (arg1 < 4) {
        temp_r0                        = arg0 + (arg1 * 8);
        M2C_FIELD(temp_r0, s32 *, 8)   = arg2;
        M2C_FIELD(temp_r0, s32 *, 0xC) = arg3;
    }
}
