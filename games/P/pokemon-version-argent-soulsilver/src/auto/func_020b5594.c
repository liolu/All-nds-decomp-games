#include "m2c.h"

u16 func_020b5594(s32 arg0, u16 arg1) {
    u16 temp_r0;
    void *temp_r2;

    temp_r2                         = arg0 + 0x24;
    temp_r0                         = M2C_FIELD(temp_r2, u16 *, 0x10);
    M2C_FIELD(temp_r2, u16 *, 0x10) = arg1;
    return temp_r0;
}
