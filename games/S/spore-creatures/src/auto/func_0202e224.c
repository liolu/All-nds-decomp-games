#include "m2c.h"

s32 func_0202e224(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, u16 *, 0x10) == arg1) && (M2C_FIELD(arg0, u16 *, 0x1C) == arg1) &&
        (M2C_FIELD(arg0, s32 *, 0xC) == 0xC00DD07B) && (M2C_FIELD(arg0, s32 *, 0x18) == 0xC00DD07B)) {
        return 1;
    }
    return 0;
}
