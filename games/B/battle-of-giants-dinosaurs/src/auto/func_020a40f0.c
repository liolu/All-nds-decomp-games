#include "m2c.h"

s32 func_020a40f0(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD((arg0 + arg1), u8 *, 0x68) >= (u32) M2C_FIELD(arg0, u8 *, 0xAC)) {
        return 1;
    }
    return 0;
}
