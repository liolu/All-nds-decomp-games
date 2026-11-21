#include "m2c.h"

s32 func_0209facc(s32 arg0, u32 *arg1, void *arg2) {
    if ((u32) *arg1 < (u32) M2C_FIELD(arg2, u32 *, 0x10)) {
        return 1;
    }
    return 0;
}
