#include "m2c.h"

s32 func_02084d4c(s32, s32);                        /* extern */

s32 func_02083e68(s32 arg0, void *arg1) {
    if (func_02084d4c(M2C_FIELD(arg1, s32 *, 0xC), M2C_FIELD(arg1, s32 *, 0x10)) <= 0) {
        return 1;
    }
    return 0;
}
