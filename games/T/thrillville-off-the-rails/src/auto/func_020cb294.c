#include "m2c.h"

void func_020cb294(void *arg0) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 0xA4) << 0xE) >> 0x1A) == 0x24) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
