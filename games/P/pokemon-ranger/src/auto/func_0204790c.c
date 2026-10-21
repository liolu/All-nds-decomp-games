#include "m2c.h"

extern s32 *data_020f18b8;

s32 func_0204790c(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    if ((u32) (*data_020f18b8 + 0xFFFFEFE1) <= 7U) {
        return 1;
    }
    temp_ip = M2C_FIELD(arg0, s32 *, 0x6F38);
    if (M2C_FIELD(((arg1 * 0x5C) + temp_ip), u8 *, 0x1E) == M2C_FIELD(((arg2 * 0x5C) + temp_ip), u8 *, 0x1E)) {
        return 1;
    }
    return 0;
}
