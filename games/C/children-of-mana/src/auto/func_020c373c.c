#include "m2c.h"

u16 func_020c373c(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 4);
    return M2C_FIELD((temp_r3 + (((arg1 * M2C_FIELD(temp_r3, u16 *, 0xA)) + arg2) * 4)), u16 *, 0x10);
}
