#include "m2c.h"

s32 func_02001934(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), u32 *, 0x1C)) {
        return 1;
    }
    return 0;
}
