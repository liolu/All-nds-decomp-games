#include "m2c.h"

void *func_02075318(u8 *arg0, void *arg1) {
    u8 temp_r2;

    temp_r2                     = *arg0;
    M2C_FIELD(arg1, u8 *, 0x12) = temp_r2;
    M2C_FIELD(arg1, M2C_UNK(**)(s32, M2C_UNK, u8, s32), 0xBC)(M2C_FIELD(arg1, s32 *, 0x24), 8, temp_r2,
                                                              M2C_FIELD(arg1, s32 *, 0xC0));
    return arg0 + 1;
}
