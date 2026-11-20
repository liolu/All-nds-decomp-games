#include "m2c.h"

M2C_UNK func_020029e4(s32, s32, s32, s32, s32);     /* extern */

void func_020af908(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 1) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 1) {
        if (M2C_FIELD(arg0, s32 *, 0x28) == 1) {
            func_020029e4(0x04000050, M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x14),
                          M2C_FIELD(arg0, s32 *, 0x18));
        } else {
            func_020029e4(0x04000050, 0, 0, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) == 1) {
        if (M2C_FIELD(arg0, s32 *, 0x2C) == 1) {
            func_020029e4(0x04001050, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x1C),
                          M2C_FIELD(arg0, s32 *, 0x20));
        } else {
            func_020029e4(0x04001050, 0, 0, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) == 1) {
        *(s16 *) 0x04000052 = M2C_FIELD(arg0, s32 *, 0x14) | (M2C_FIELD(arg0, s32 *, 0x18) << 8);
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 1) {
        return;
    }
    *(s16 *) 0x04001052 = M2C_FIELD(arg0, s32 *, 0x1C) | (M2C_FIELD(arg0, s32 *, 0x20) << 8);
}
