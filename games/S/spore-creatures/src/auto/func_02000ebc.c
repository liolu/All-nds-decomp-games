#include "m2c.h"

s32 func_02000ebc(s32 arg0, s32 arg1) {
    if (((u32) M2C_FIELD((arg0 + ((arg1 >> 5) * 4)), u32 *, 4) >> (arg1 & 0x1F)) & 1) {
        return 1;
    }
    return 0;
}
