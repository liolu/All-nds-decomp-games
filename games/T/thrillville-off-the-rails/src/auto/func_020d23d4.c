#include "m2c.h"

extern u8 data_020fd224;

s32 func_020d23d4(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xE8) * 4)), s32 *, 0x2C) >= (s32) (arg1 >> 0xC)) {
        return 1;
    }
    if (data_020fd224 == 1) {
        return 1;
    }
    return 0;
}
